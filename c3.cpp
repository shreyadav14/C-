#include<iostream>
#include<vector>
using namespace std;
int main(){
vector<vector<int>>matt={{1,2,3},{4,5,6},{7,8,9},{10,11,12}};

for(int i=0;i<matt.size();i++){
    for(int j=0;j<matt[i].size();j++){
        cout<<matt[i][j]<<" ";
    }
    cout<<endl;
}
return 0;
}
