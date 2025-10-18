#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;
    int cnt = 0; // for counting the number of problems solved by them

    while(n--){
        int pet, vas, ton;
        cin>>pet>>vas>>ton;

        if((pet == 1 && vas == 1) || (pet == 1 && ton == 1) || 
          (vas == 1 && ton == 1) || (pet == 1 && vas == 1 && ton == 1))
          {
            cnt++;
          }
    }
    
    cout<<cnt<<endl;
    
   return 0; 
}