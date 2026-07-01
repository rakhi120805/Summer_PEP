#include<bits/stdc++.h>
using namespace std;

void print(vector<vector<int>>&a){
    int n=a.size();
    int m=a[0].size();
    for(int j=0;j<m;j++){
        if(j%2==0){
            for(int i=0;i<n;i++){
                cout<<a[i][j]<<" ";
            }
        }
        else{
            for(int i=0;i<n;i++){
                cout<<a[i][j]<<" ";
            }
        }
        cout<<endl;
    }

}

int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>>arr(n,vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
        cin>>arr[i][j];
        }
    }
    print(arr);
    
    
    
    // cout<<ans;
}