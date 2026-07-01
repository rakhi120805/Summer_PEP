#include<bits/stdc++.h>
using namespace std;
bool search(int arr[][3],int target,int row,int col){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(arr[i][j] == target)return true;
        }
    }
    return false;
}

 vector<int> sum(int arr[][3],int row){
    vector<int>v;
    for(int i=0;i<row;i++){
        int sum=0;
        for(int j=0;j<3;j++){
            sum+=arr[i][j];
        
        }
        v.push_back(sum);
    }
    return v;
 }


 int main(){
    int n;
    cin>>n;
    int arr[n][3];
    for(int i=0;i<n;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }
    vector<int>ans=sum(arr,n);
    for(auto it:ans){
        cout<<it<<" ";
    }
    return 0;
 }