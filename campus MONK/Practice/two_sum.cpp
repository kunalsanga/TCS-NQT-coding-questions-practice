#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr={1,2,3,4,5};
    int target=5;
    for(int i=0;i<arr.size();i++){
        for(int j=i+1;j<arr.size();j++){
            if(arr[i]+arr[j]==target){
                cout<<arr[i]<<" "<<arr[j];
                return 0;
            }
        }
    }
    cout<<"no pair found";
    return 0;
}