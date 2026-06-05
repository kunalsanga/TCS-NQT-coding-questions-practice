#include<bits/stdc++.h>
using namespace std;
int main(){
    int p,q,r;
    cin>>p>>q>>r;
    int operations=0;
    while(!(p==q && q==r)){
        vector<int> a={p,q,r};
        sort(a.begin(),a.end());

        a[0]++;
        a[1]++;
        a[2]--;

        p=a[0];
        q=a[1];
        r=a[2];

        operations++;

        if(p<0 || q<0 || r<0){
            cout<<-1;
            return 0;
        }
    }
    cout<<operations;
    return 0;
}