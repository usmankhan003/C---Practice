#include<iostream>
using namespace std;


int main(){
    int x;

    cout<<"enter a number : ";
    cin>>x;


    if(x==0){
        cout<<"x is equal to zero";
    }else if (x>0){
        cout<<"x is positive";
    }else{
        cout<<"x is negative";
    }

    return 0;
}