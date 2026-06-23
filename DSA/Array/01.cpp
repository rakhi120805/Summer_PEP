#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    arr.pop_back();
    for(auto it:arr)cout<<it<<" ";
    int s=arr.size();
    cout<<s<<endl;
    arr.clear();

    for(auto it:arr)cout<<it<<" ";
    cout<<arr.size();
    
    // int ans = 0;
    
    // cout<<ans;
}