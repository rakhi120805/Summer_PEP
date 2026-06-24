#include<bits/stdc++.h>
using namespace std;
int linear_search(vector<int>&arr,int key){
    int ans = -1;
    for(int i=0;i<arr.size();i++){
        if(arr[i] == key){
            ans=(key>10)?(2*key):(key/2);
        }
    }
    return ans;
}

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    int k;
    cin>>k;
    int ans = linear_search(arr,k);
    
    cout<<ans;
}