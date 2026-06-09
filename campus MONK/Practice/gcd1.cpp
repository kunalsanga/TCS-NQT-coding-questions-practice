#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    while(m!=0){
        int gcd=n%m;
        n=m;
        m=gcd;
    }
    cout<<n;
    return 0;
}