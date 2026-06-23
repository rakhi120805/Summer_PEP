#include<iostream>
using namespace std;

void doubleTheNumber(int num){//pass by value
    num*=2;
    cout<<num<<endl;
}
void doubleTheNumber2(int &num){//pass by reference
    num*=2;
}

int main(){
    int num;
    cin>>num;
    doubleTheNumber(num);
    cout<<"after pass by value: "<<num<<endl;
    doubleTheNumber2(num);
    cout<<num<<endl;
    
}