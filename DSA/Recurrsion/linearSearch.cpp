#include<bits/stdc++.h>
using namespace std;

bool linearS(int arr[],int size,int k){
    if(size==0){
        return false;
    }
    if(arr[0]==k)return true;
    
    else return linearS(arr + 1,size-1,k);
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;
    bool ans = linearS(arr,n,k);
    
    cout<<ans;
}