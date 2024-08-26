#include <iostream>
using namespace std;
int main(){
    //logicals
    int num;
    cin>>num;
     if ((num%2==0)||(num%10==0))
     cout<<"Even"<<endl;
     else
     cout<<"Odd"<<endl;
     (num%2==0)?cout<<"Even"<<endl:cout<<"Odd"<<endl;
    return 0;
}