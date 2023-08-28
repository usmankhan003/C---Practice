#include<iostream>
using namespace std;



int main(){
    int a,b,prod;
    char ch;

    do{
        cout<<"enter first number : ";
        cin>>a;
        cout<<"enter second number : ";
        cin>>b;
        prod = a*b;
        cout<<"product is "<<prod<<endl;

        cout<<"do you want to continue?(y/n)";
        cin>>ch;
    }while(ch!='n');
}