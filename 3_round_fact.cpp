#include<bits/stdc++.h>
using namespace std;
long long factorial(int n){
    long long fact=1;
    for(int i=1;i<=n;i++){
        fact*=i;
    }
    return fact;
}
int main(){
    int n;
    cin>>n;
    long long ans = 2*factorial(n-1);
    cout<<ans;
    return 0;
}