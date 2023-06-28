#include<iostream>
using namespace std;

int main()
{
    int a,i=1;
    cout<<"Enter a limit :";
    cin>>a;
    int x,y,z;

    x=0;
    y=1;

    cout<<"The series is : ";
    cout<< "0\t1";
        
    while(i<=(a-2))
    {
        z=x+y;
        
        cout<< "\t" << z;
        x=y;
        y=z;

        i++;
    }

}