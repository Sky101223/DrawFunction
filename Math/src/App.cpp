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
        _T("������һ����λ����Ϊ���ٸ�����"),
        _T("�Զ��嵥λ����"),
        _T("10.0")
    );

    // ��ʼ���ⲿ����
    g_setScale(_tcstod(inputText, nullptr));

    // ���ƺ���
    drawMathFunction(linearFunction, 12, 0); // һ�κ���
    drawMathFunction(quadraticFunction, -0.33, -3.1, 15.3259); // ���κ���
    drawMathFunction(inverseProportionalFunction, 2); // ����������
    
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
