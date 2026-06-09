#include<bits/stdc++.h>
using namespace std;
bool isprime(int n){
    if(n<2){
        return false;
    }
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    int N;
    cin>>N;
    
    int count=0;
    int num=2;
    long long sum=0;

    while(count<N){
        if(isprime(num)){
            sum+=num;
            count++;
        }
        num++;
    }
    cout<<sum;
    return 0;
}