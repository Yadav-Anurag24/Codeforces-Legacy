#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int X = 0;

    while(n--){
        string opr;
        cin>>opr;

        if(opr == "X++" || opr == "++X")
            X++;
        else
          X--;
    }
    cout<<X<<endl;
   return 0; 
}