#include <bits/stdc++.h>
using namespace std;

int main(){
    int M,N;
    cin>>M>>N;

    int rect_board_area = M*N;
    int domino_area = 2*1;

    int max_num_of_domino = rect_board_area / domino_area;

    cout<<max_num_of_domino;
    
    return 0;
}