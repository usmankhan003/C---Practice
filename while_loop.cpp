#include<iostream>
using namespace std;



int main(){
    int sum=0;
    int k=0;

    while(k<15){
        sum+=k;
        k=k+1;
    }
    cout<<sum;
    return 0;
}