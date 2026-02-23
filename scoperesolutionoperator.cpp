#include<iostream>
using namespace std;
int num=30;

int main()
{
    int num = 10;
    cout<<"value of global variable is:"<<::num<<endl;
    cout<<"value of local variable is:"<<num;
    return 0;
}