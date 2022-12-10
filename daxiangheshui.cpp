/* 大象喝水：一只大象口渴了，要喝20升水才能解渴，但现在只有一个
深h厘米，底面半径为r厘米的小圆筒（h和r都是整数）。问大象至少要喝多少
桶水才能解渴。
提示：pi=3.14159  1升=1000毫升（立方厘米）
样例输入 高度和半径：23 11，输出 桶：3 */
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int h,r;
    cin>>h>>r;
    double pi=3.14159;
    double a=pi*r*r*h;                      //a=area（体积）
    int o=20*1000;                          //o=other(其它)
    if (o<a)
        cout<<1<<endl;
    else 
        cout<<ceil(o/a)<<endl;
    return 0;
}