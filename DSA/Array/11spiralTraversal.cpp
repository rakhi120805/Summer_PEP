#include<bits/stdc++.h>
using namespace std;

void print(vector<vector<int>>&a){
    int n=a.size();
    int m=a[0].size();

    int top=0;
    int down=n-1;
    int left=0;
    int right=m-1;

    while(top<down && left<right){
        for(int i=left;i<=right;i++){
            cout<<a[top][i]<<" ";
        }
        top++;
    
   
        for(int i=top;i<=down;i++){
            cout<<a[i][right]<<" ";
        }
        right--;
    
    if(left<right){
        for(int i=right;i>=left;i--){
            cout<<a[down][i]<<" ";
        }
        down--;
    }
    if(top<down){
        for(int i=down;i>=top;i--){
            cout<<a[i][left]<<" ";
        }
        left++;
    }
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