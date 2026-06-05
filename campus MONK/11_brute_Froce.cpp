#include<bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;

    vector<int> arr(n);

    for(int i=0;i<n;i++)
        cin >> arr[i];

    unordered_map<int,int> freq;

    for(int x : arr)
        freq[x]++;

    for(int x : arr){
        if(freq[x] == 1){
            cout << x;
            break;
        }
    }

    return 0;
}