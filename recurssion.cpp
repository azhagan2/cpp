#include<iostream>
using namespace std;

int num (int number)
{
    if(number==0)
        return 0;
    
    return number%10 + num(number/10);
}

int main()
{
    int a;
    cout<<"Enter a number :";
    cin>>a;

    cout<<"The result is :" << num(a);
}