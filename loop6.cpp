# include<iostream>
using namespace std;
int main (){
    int n;
    cin>>n;//820

    int digits=0;
    while(n>0){
        digits++;//1//2//3
        n=n/10;//82//8//0
    
    }
    cout<<digits<<endl;//3



    int sum=0;
    while(n>0){
        int lastdigit=n%10;
        sum+=lastdigit;
        n/=10;
    }
    cout<<sum<<endl;



    
    return 0;


}