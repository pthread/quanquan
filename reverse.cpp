//输入一个三位正整数，将它倒序输出/321 123
#include<iostream>
using namespace std;
int main()
{
   int a;
   cin >>a; 
   cout<<a%10<<a/10%10<<a/100<<endl; 
   return 0;
}