# include <iostream>
#include<vector>
using namespace std;
int BinarySearch(vector<int> arr, int size,int target){
    int start=0,end=size-1;
   
    while(start<=end){
         int mid=start+(end-start)/2;
        if(arr[mid]>target){
            end=mid-1;;
        }
        else if(arr[mid]<target){
            start=mid+1;
        }
        else{
            return mid;
        }
    }

}
int main(){
   vector<int> arr={1,23,56,78,79,89,99};
   int size=arr.size();
   int target=79;
   int mid=BinarySearch(arr,size,target);
   cout<<"mid="<<mid<<endl;
    return 0;
}


