#include<iostream>
using namespace std;
int main(){
    //Bitwise Operators
    int num1=6;//0110
    cout<<(num1<<1)<<endl;//12
    cout<<(num1>>1)<<endl;//3

    int num2=9;//1001
    cout<<(num1|num2)<<endl;//1111=15
    cout<<(num1&num2)<<endl;//0000=0

    //Arithmetic Operators
    int num3=9;
    int num4=6;

    cout<<num3+num1<<endl;//15
    cout<<(num1*num4)<<endl;//54
    cout<<(num3/num4)<<endl;//3
    cout<<(num3%num2)<<endl;//0

    cout<<(num1==num3)<<endl;//false=0
    cout<<(num2!=num4)<<endl;//true=1
    cout<<(num1>=num4)<<endl;//false=0

     num1=+3;
    cout<<num1<<endl;//6+3=9
    
    //arithmetic increements and decreements 
     int a;//7
     cin>>a;
     cout<<(a++)<<endl;//7
     cout<<(a+5)<<endl;//8+5=13
     cout<<(++a)<<endl;//8+1=9
    
     cout<<(+a)<<endl;//9(nothing happens)
     cout<<(a-5)<<endl;//4
     cout<<(a--)<<endl;//9
     cout<<(a-6)<<endl;//8-6=2
     cout<<(--a)<<endl;//8-1=7
     



 return 0;
}