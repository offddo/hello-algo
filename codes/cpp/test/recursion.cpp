#include "../utils/common.hpp"

/* ʹ�õ���ģ��ݹ� */
int forLoopRecur(int n) {
    // ʹ��һ����ʽ��ջ��ģ��ϵͳ����ջ
    stack<int> stack;
    int res = 0;
    // �ݣ��ݹ����
    for (int i = n; i > 0; i--) {
        // ͨ������ջ������ģ�⡰�ݡ�
        stack.push(i);
    }
    // �飺���ؽ��
    while (!stack.empty()) {
        // ͨ������ջ������ģ�⡰�顱
        res += stack.top();
        stack.pop();
    }
    // res = 1+2+3+...+n
    return res;
}

int main(){
    int a=forLoopRecur(10);
    cout<<a;
}