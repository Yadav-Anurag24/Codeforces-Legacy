#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    while(n--){
        string word;
        cin>>word;

        if(word.size() > 10){

        char  first = word[0]; 
        int len = word.size() - 2;
        char last = word[word.size() - 1];

        cout<<first;
        cout<<len;
        cout<<last<<endl;
        }

        else{
            cout<<word<<endl;
        }

    }
    return 0;
}