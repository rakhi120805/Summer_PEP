#include<bits/stdc++.h>
using namespace std;
void reverseInGroups(vector<int> &arr, int k) {
        // code here
        int n=arr.size();
        for(int i=0;i<n;i+=k){
            int s=i;
            int e=min(s + k - 1, n-1);
            while(s<e){
                swap(arr[s],arr[e]);
                s++;
                e--;
            }
        }
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
    reverseInGroups(arr,k);
    
    for(auto it:arr){
        cout<<it<<" ";
    }
}