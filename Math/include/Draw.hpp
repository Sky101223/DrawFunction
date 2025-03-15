#pragma once

#include <thread>
#include <chrono>
#include <cmath>
#include "Base.h"

void drawAxis(const float& _size = 1)
{
    setbkcolor(WHITE);
    cleardevice();
    setorigin(HALF_WIDTH, HALF_HEIGHT);
    settextcolor(BLACK);
    outtextxy(-10, 1, L"O");
    setaspectratio(_size, _size);
    setlinecolor(BLACK);
    line(HALF_WIDTH, 0, -HALF_WIDTH, 0); // X
    line(0, HALF_HEIGHT, 0, -HALF_HEIGHT); // Y
    LOG("平面直角坐标系XoY已绘制好");
}

template <typename _MathFunction, typename... _Args>
void drawMathFunction(_MathFunction _f, const _Args&... _args)
{
    const uint16_t X = 0;
    const uint16_t Y = 1;
    setlinecolor(RED);

    int32_t localPoint[2]{};
    int32_t nextPoint[2]{};

    auto isInvalidPoint = [&](int32_t x) {
        return std::isinf(_f(_args..., x)) || std::isinf(_f(_args..., x + 1));
        };

    for (localPoint[X] = -HALF_WIDTH; localPoint[X] < HALF_WIDTH; ++localPoint[X])
    {
        if (isInvalidPoint(localPoint[X]))
        {
            continue;
        }

        localPoint[Y] = -(static_cast<int32_t>(_f(_args..., localPoint[X])));
        nextPoint[X] = localPoint[X] + 1;
        nextPoint[Y] = -(static_cast<int32_t>(_f(_args..., nextPoint[X])));

        if (localPoint[Y] > HEIGHT || nextPoint[Y] > HEIGHT ||
            std::isinf(localPoint[Y]) || std::isinf(nextPoint[Y]))
        {
            continue;
        }

        putpixel(localPoint[X], localPoint[Y], RED);
        putpixel(nextPoint[X], nextPoint[Y], RED);
        line(localPoint[X], localPoint[Y], nextPoint[X], nextPoint[Y]);
        std::this_thread::sleep_for(std::chrono::milliseconds(1));
    }

    LOG("该函数图像已绘制好");
}