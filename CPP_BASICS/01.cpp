#include <iostream>
using namespace std;

int main(){
    int age;
    cin>>age;
    // int num;
    // cin>>num;
    // if(age>18 && num>10)cout<<"test granted";
    // else cout<<"you can't give the test!!";


    // char grade='A';
    // switch (grade)
    // {
    // case 'A':
    //     cout<<"1";
    //     // break;
    // case 'B':
    //     cout<<"2";
    //     // break;
    // case 'C':
    //     cout<<"3";
    //     // break;
    
    
    // default:
    //     cout<<"no";
    //     // break;
    // }

    bool ans=(age>18)?true:false;
    cout<<ans;

    int x=10,y=20;
    int a=(x>y)?x:y;
    cout<<a;
}