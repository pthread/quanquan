// 计算1到100中奇数和偶数的和。
// 输出：奇数和 偶数和
#include<iostream>
using namespace std;
int main()
{
    int i=1,sum_odd=0,sum_even=0;
    while(i<=100)
    {
        if(i%2==1)
        {
            sum_odd+=i;
        }
        else
        {
            sum_even+=i;
        }
        i++;
    }
    cout<<sum_odd<<' '<<sum_even<<endl;
    return 0;
}