#include<iostream>
using namespace std;
int main(){
    int num;
    cin>>num;
    for(int row=0; row<num; row++){
        for(int col=1; col<=(row+1);col++){
            cout<<col;
            cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}