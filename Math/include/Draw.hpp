#pragma once

#include <thread>
#include <chrono>
#include "Base.h"

DRAW_FUNCTION_NO_RETURN drawAxis(CONST FLOAT& _size = 1.0f)
{
    setbkcolor(WHITE);
    cleardevice();
    setorigin(HALF_WIDTH, HALF_HEIGHT);
    settextcolor(RGB(190, 190, 190));
    outtextxy(-10, 1, L"O");
    setaspectratio(_size, _size);
    setlinecolor(RGB(211, 211, 211));
    line(HALF_WIDTH, 0, -HALF_WIDTH, 0); // X
    line(0, HALF_HEIGHT, 0, -HALF_HEIGHT); // Y
    LOG("平面直角坐标系XoY已绘制好");
}

template <typename _MathFunction, typename... _Args>
DRAW_FUNCTION_NO_RETURN drawMathFunction(_MathFunction _f, CONST _Args&... _args)
{
    CONST USHORT X = 0;
    CONST USHORT Y = 1;
    setlinecolor(RED);
    
    INT localPoint[2]{};
    INT nextPoint[2]{};

    auto isInvalidPoint = [&](INT pixelX) -> bool
        {
            DOUBLE mathX = pixelX / SCALE;
            DOUBLE mathX_next = (pixelX + 1) / SCALE;
            return std::isinf(_f(_args..., mathX)) || std::isinf(_f(_args..., mathX_next));
        };

    for (localPoint[X] = -HALF_WIDTH; localPoint[X] < HALF_WIDTH; ++localPoint[X])
    {
        if (isInvalidPoint(localPoint[X]))
        {
            continue;
        }

        DOUBLE mathX = localPoint[X] / SCALE;
        DOUBLE mathX_next = (localPoint[X] + 1) / SCALE;

        localPoint[Y] = -(static_cast<INT>(_f(_args..., mathX) * SCALE));
        nextPoint[X] = localPoint[X] + 1;
        nextPoint[Y] = -(static_cast<INT>(_f(_args..., mathX_next) * SCALE));

        putpixel(localPoint[X], localPoint[Y], RED);
        putpixel(nextPoint[X], nextPoint[Y], RED);
        line(localPoint[X], localPoint[Y], nextPoint[X], nextPoint[Y]);
        std::this_thread::sleep_for(std::chrono::milliseconds(1));
    }

    LOG("该函数图像已绘制好");
}