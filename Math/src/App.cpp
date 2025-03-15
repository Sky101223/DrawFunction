#include <graphics.h>

#include <conio.h>
#include <math.h>
#include <stdint.h>

#include "Base.h"
#include "MathFunction.h"
#include "Draw.hpp"

int main(void)
{
    initgraph(WIDTH, HEIGHT, EX_SHOWCONSOLE);

    // 建立平面直角坐标其XoY
    drawAxis();

    // 绘制函数
    drawMathFunction(linearFunction, -0.232, -9);
    drawMathFunction(quadraticFunction, 0.025, -1.3, 3.3209);
    drawMathFunction(inverseProportionalFunction, 1000);

    _getch();
    closegraph();
    return 0;
}
