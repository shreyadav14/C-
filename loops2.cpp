# include <iostream>
using namespace std;
int main(){ 
    int i,j;
    cin>>i;
    cin>>j;

     for(int n=1;n<=i;n++){
        for (int m=1;m<=j;m++){
        cout<<'*';
        }
     }
     cout<<endl;
     return 0;

}