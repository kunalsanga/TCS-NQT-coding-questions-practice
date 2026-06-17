#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    vector<int> A(n),B(m);
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    for(int i=0;i<m;i++){
        cin>>B[i];
    }
    vector<int> ans;
    for(int x:A){
        ans.push_back(x);
    }
    for(int x:B){
        ans.push_back(x);
    }
    sort(ans.begin(),ans.end());
    for(int x:ans){
        cout<<x<<" ";
    }
    return 0;
}