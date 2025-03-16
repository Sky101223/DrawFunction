#include <graphics.h>

#include <conio.h>
#include <stdint.h>

#include <Windows.h>

#include "Base.h"

#include "MathFunctions.h"
#include "Draw.hpp"

int main(void)
{
    initgraph(WIDTH, HEIGHT);

    // ����ƽ��ֱ��������XoY
    drawAxis();

    // ���ƺ���
    drawMathFunction(linearFunction, 1, 0); // һ�κ���
    drawMathFunction(quadraticFunction, -0.33, -3.1, 15.3259); // ���κ���
    drawMathFunction(inverseProportionalFunction, 10); // ����������
    
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
