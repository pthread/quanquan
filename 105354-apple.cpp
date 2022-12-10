/* 105354.吃苹果造句
题目描述
八尾勇喜欢吃苹果。她今天吃掉了x个苹果。
英语课上学到了 apple 这个词语，想用它来造句。
如果她吃了 1 个苹果，就输出 `Today, I ate 1 apple.`；
如果她没有吃，那么就把 1 换成 0；
如果她吃了不止一个苹果，别忘了 `apple` 这个单词后面要加上代表复数的 `s`。
你能帮她完成这个句子吗？ */


#include<iostream>
using namespace std;
int main()
{
    int x;
    cin>>x;
    if(x==1)
        cout<<"Today, I ate 1 apple."<<endl;
    else if(x==0)
        cout<<"Today, I ate 0 apple."<<endl;
    else
        cout<<"Today, I ate "<<x<<" apples."<<endl;
    return 0;
}