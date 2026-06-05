#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,p,k,j;
    cin>>n>>m>>p>>k>>j;
    int bananamonkey = m/k;
    if(m%k!=0){
        bananamonkey++;
    }
    int peanutmonkey=p/j;
    if(p%j!=0){
        peanutmonkey++;
    }
    int monkeydown=bananamonkey+peanutmonkey;
    cout<<n-monkeydown;
    return 0;
}