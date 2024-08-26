#include <iostream>
using namespace std;
int main(){
    int marks;
     cin>>marks;
     if (marks>80){
        cout<<"Well done"<<endl;
     }
     else if (marks>50){
        cout<<"Try Harder"<<endl;
     }
     else if (marks>30){
        cout<<"BAD"<<endl;
     }
     else{
        cout<<"Fail"<<endl;
     }
     // usage of ternary operator //
     marks>30 ? cout<<"PASS"<<endl:cout <<"FAIL"<<endl;
     return 0;
}