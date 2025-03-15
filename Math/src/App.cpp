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

    // ����ƽ��ֱ��������XoY
    drawAxis();

    // ���ƺ���
    drawMathFunction(linearFunction, -0.232, -9); // һ�κ���
    drawMathFunction(quadraticFunction, 0.025, -1.3, 3.3209); // ���κ���
    drawMathFunction(inverseProportionalFunction, 1000); // ����������

    // ��Ϣ����
    MessageBox(
        NULL,
        _T("���к����ѻ��Ƴɹ��������ȷ�ϡ��󣬴��ڻ��Զ��ر�"),
        _T("���"),
        MB_OK | MB_ICONEXCLAMATION
    );
    closegraph();

    return 0;
}
