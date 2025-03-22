#include <graphics.h>

#include <conio.h>
#include <stdint.h>
#include <tchar.h>

#include <Windows.h>

#include "Base.h"

#include "MathFunctions.h"
#include "Draw.hpp"

int main(void)
{
    initgraph(WIDTH, HEIGHT);

    // 建立平面直角坐标其XoY
    drawAxis();

    // 自定义反比例函数k值
    TCHAR inputText[100];
    // 输入框
    InputBox(
        inputText,
        100,
        _T("请输入一个单位长度为多少个像素"),
        _T("自定义单位长度"),
        _T("10.0")
    );

    // 初始化外部变量
    g_setScale(_tcstod(inputText, nullptr));

    // 绘制函数
    drawMathFunction(linearFunction, 12, 0); // 一次函数
    drawMathFunction(quadraticFunction, -0.33, -3.1, 15.3259); // 二次函数
    drawMathFunction(inverseProportionalFunction, 2); // 反比例函数
    
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
