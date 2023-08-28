#include<iostream>
using namespace std;


int main(){
    int marks;

    cout<<"enter the marks";
    cin>>marks;

    if(marks>0&&marks<=100)
    {
        if(marks>=33){
            cout<<"you are passed\n";
        }else{
            cout<<"you are failed\n";
        }

    }
    else{
        cout<<"invalid option\n";
    }
    return 0;
}