#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin>>n;
    long long product=1;
    while(n>0){
        int digit = n%10;
        product*=digit;
        n/=10;
    }

    cout<<product;
    return 0;
}