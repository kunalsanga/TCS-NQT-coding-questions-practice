#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    int r;
    cin>>n;
    cin>>r;
    
    while(r==0){
        return 0;
    }

    int digitsum=0;

    while(n>0){
        digitsum += n%10;
        n/=10;
    }

    digitsum*=r;

    while(digitsum>=10){
        int temp=0;

        while(digitsum>0){
            temp+=digitsum%10;
            digitsum/=10;
        }

        digitsum=temp;
    }

    cout<<digitsum;

    return  0;
}