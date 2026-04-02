#include <iostream>
#include<vector>
using namespace std;

class Solution{
    public:
    int findSingleElement(vector<int>& arr) {
        int n=arr.size();
         if (n == 1) return arr[0]; // only one element

        // check first and last positions
        if (arr[0] != arr[1]) return arr[0];
        if (arr[n - 1] != arr[n - 2]) return arr[n - 1];
        for (int  i = 0; i < n; i++)
        {
         if(arr[i-1]!=arr[i]&& arr[i]!=arr[i+1]){
            return arr[i];
         }
      }
      return -1;
    }
};
int main(){
   vector<int> arr={1,1,3,4,4,5,5};
   Solution sol;
    int value=sol.findSingleElement(arr);
    cout << "Single non-duplicate element: " << value << endl;
    return 0;
}

