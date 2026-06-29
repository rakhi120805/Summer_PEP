#include<bits/stdc++.h>
using namespace std;

int maxSubarraySum(vector<int>& arr, int k) {
        // code here
      int l=0,r=l+1;
      int sum=arr[0];
      int maxi=arr[0];
      int n=arr.size();
      while(l<r && r<n){
          if(r - l + 1 >k){
              sum-=arr[l];
              l++;
          }
          while(r-l+1<=k){
            sum+=arr[r];
            r++;
          }
          
          maxi=max(maxi,sum);
          
      }
      return maxi;
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
    int ans = maxSubarraySum(arr,k);
    
    cout<<ans;
}