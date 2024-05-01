#include<iostream>
using namespace std;

void swapnumber(int a,int b){
    int temp=a;
    a=b;
    b=temp;
}

int main(){
    int varA=25;
    int varB=100;
    cout<<"value before swapping "<<varA<<endl;
    cout<<"value before swapping "<<varB<<endl;

    swapnumber(varA , varB);
    cout<<"value after swapping "<<varA<<endl;
    cout<<"value after swapping "<<varB<<endl;
    return 0;
}
