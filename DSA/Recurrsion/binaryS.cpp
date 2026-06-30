#include<bits/stdc++.h>
using namespace std;

bool binaryS(int arr[],int low,int high,int k){
    
    int mid=low+(high - low)/2;
    if(mid<low || mid>high)return false;
    if(arr[mid]==k)return true;
    else if (arr[mid]>k)return binaryS(arr,low,mid-1,k);
    else return binaryS(arr,mid+1,high,k);


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
    bool ans = binaryS(arr,0,n-1,k);
    
    cout<<ans;
}