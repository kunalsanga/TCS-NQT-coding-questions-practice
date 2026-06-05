#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<char> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    unordered_map<char,int> freq;
    for(char color : arr){
        freq[color]++;
    }

    for(char color : arr){
        if(freq[color]%2!=0){
            cout<<color;
            return 0;
        }
    }
    cout<<"All are even";
    return 0;
}