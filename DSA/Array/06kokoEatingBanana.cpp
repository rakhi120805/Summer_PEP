#include<bits/stdc++.h>
using namespace std;

bool possible(vector<int>&arr,int h,int k){
    int time=0;
    int cnt=0;

    for(int i=0;i<arr.size();i++){
        time=ceil((long double)arr[i] / k);
        cnt+=time;
    }
    // cout<<cnt<<" for the k "<<k<<endl;
    if(cnt<=h){
        return true;
    }
    return false;
}

int eating(vector<int>&arr,int h){
    int low=1;
    int high=*max_element(arr.begin(),arr.end());
    int ans=-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(possible(arr,h,mid)){
            ans=mid;
            high=mid-1;
        }
        else{
            low=mid+1;
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
    int h;
    cin>>h;

    int ans = eating(arr,h);
    
    cout<<ans;
}