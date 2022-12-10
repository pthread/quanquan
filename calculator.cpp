/* 一个最简单的计算器，支持+, -, *, / 四种运算。
仅需考虑输入输出为整数的情况，数据和运算结果不会超过int表示的范围。然而：
 1. 如果出现除数为0的情况，则输出：Divided by zero!
 2. 如果出现无效的操作符(即不为 +, -, *, / 之一），则输出：Invalid operator!
输入格式
输入只有一行，共有三个参数，其中第1、2个参数为整数，第3个参数为操作符（+,-,*,/）。

输出格式
输出只有一行，一个整数，为运算结果。然而：
1.如果出现除数为0的情况，则输出：Divided by zero!
2.如果出现无效的操作符(即不为 +, -, *, / 之一），则输出：Invalid operator!

比如输入：1 2 +，输出3.
*/
#include<iostream>
using namespace std;
int main()
{
    int a,b;
    char c;
    cin>>a>>b>>c;
    if (c=='+')
        cout<<a+b<<endl;
    else if (c=='-')
        cout<<a-b<<endl;
    else if (c=='*')
        cout<<a*b<<endl;
    else if (c=='/'){
        if(b==0)
            cout<<"Divided by zero!"<<endl;
        else
            cout<<a/b<<endl;
    }
    else 
        cout<<"Invalid operator!"<<endl;
    return 0;
}
