# include <iostream>
using namespace std;
int main(){
    //Using while loop in program(it adds the no. before it )
    int n;
    cin>>n;
    int sum=0;

    int i=1;//loop variable
    while (i<=n){
        sum+=i;
        i++;
    }
    cout<<sum<<endl;


    // using for loop in program.
    //same outcome 
    
    for(int i=1;i<=n;i++){
        sum+=i;
    }
    cout<<sum<<endl;
    return  0 ;

    //1. (example => n=5.... 1+2+3+4+5=15)
    //2. (after while loop its adding both )
    //example for n=5....15+15=30
    //one would be 15 then 30


}
