#include <graphics.h>

#include <conio.h>
#include <stdint.h>

#include <Windows.h>

#include "Base.h"
#include "MathFunction.h"
#include "Draw.hpp"

int main(void)
{
    initgraph(WIDTH, HEIGHT);

    // 建立平面直角坐标其XoY
    drawAxis();

    // 绘制函数
    drawMathFunction(linearFunction, -0.232, -9); // 一次函数
    drawMathFunction(quadraticFunction, 0.025, -1.3, 3.3209); // 二次函数
    drawMathFunction(inverseProportionalFunction, 1000); // 反比例函数

    // 消息窗口
    MessageBox(
        NULL,
        _T("所有函数已绘制成功！点击“确认”后，窗口会自动关闭"),
        _T("完成"),
        MB_OK | MB_ICONEXCLAMATION
    );
    closegraph();

    return 0;
}
