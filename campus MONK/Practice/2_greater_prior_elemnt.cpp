#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int count=1;
    int maxi=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>maxi){
            count++;
            maxi=arr[i];
        }
    }
    cout<<count;
    return 0;
}