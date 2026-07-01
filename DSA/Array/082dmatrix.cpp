#include<bits/stdc++.h>
using namespace std;
void print(int a[][2]){//it is giving me the error because 2 d matrix is stored in a linear manner in the memory so we need to define the column size
    // int n=a.size();
    // int m=a[0].size();
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cout<<a[i][j];
        }
    }
}

int main(){
    int n;
    int m;
    cin>>n;
    cin>>m;
    int arr[n][m];
    // vector<vector<int>>arr(n,vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(j%2==0 && i%2!=0){
            cout<<arr[i][j]<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}