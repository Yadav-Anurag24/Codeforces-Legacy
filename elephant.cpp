#include<iostream>
using namespace std;

int main(){
    int x;
    cin>>x;

    int bigStep = x / 5;

    if(x % 5 == 0){
        cout<<""<<bigStep;
    }
    else{
        cout<<""<<(bigStep + 1);
    }
    return 0;
}