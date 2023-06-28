#include<iostream>
using namespace std;

int fibanocci(int num)
{
    if(num==1 || num==0)
        return num;
    else
        return(fibanocci(num-1)+fibanocci(num-2));
}

int main()
{
    int b,i=0;

    cout<<"Enter a limit :";
    cin>>b;
    cout<<"The series is :";
    while(i<b)
    {
        cout<<"  "<<fibanocci(i);
        i++;
    }


}