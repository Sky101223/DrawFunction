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

    // ����ƽ��ֱ��������XoY
    drawAxis();

    // �Զ��巴��������kֵ
    TCHAR inputText[100];
    // �����
    InputBox(
        inputText,
        100,
        _T("�����뷴��������k��ֵ"),
        _T("�Զ��巴��������kֵ"),
        _T("1")
    );

    double k = _tcstod(inputText, nullptr);

    // ���ƺ���
    drawMathFunction(linearFunction, 1, 0); // һ�κ���
    drawMathFunction(quadraticFunction, -0.33, -3.1, 15.3259); // ���κ���
    drawMathFunction(inverseProportionalFunction, k); // ����������
    
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
