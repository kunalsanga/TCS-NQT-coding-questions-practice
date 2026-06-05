#include<bits/stdc++.h>
using namespace std;
int main(){
    int r,c;
    cin>>r>>c;

    vector<vector<int>> mat(r,vector<int>(c));
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>mat[i][j];
        }
    }

    int maxcount=0;
    int ansrow=0;

    for(int i=0;i<r;i++){
        int count=0;
        for(int j=0;j<c;j++){
            if(mat[i][j]==1){
                count++;
            }
        }
        if(count>maxcount){
            maxcount=count;
            ansrow=i+1;
        }
    }
    cout<<ansrow;
    return 0;
}