# include <iostream>
using namespace std;
int main(){

    int num;
    cin>>num;

    int sum=0;
    do{
        int num;
        cin>>num;
        sum+=num;
        num--;
    }while(num>0);

    cout<<num<<endl;

    return 0;
}

    


