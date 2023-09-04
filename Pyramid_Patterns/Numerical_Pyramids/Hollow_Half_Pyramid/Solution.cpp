#include<iostream>
using namespace std;
int main(){
    int num;
    cin>>num;
    for(int row=1; row<=num; row++){
        for(int col=1; col<=row; col++){
            if(row==1 or col==1 or row==num or col==num or row==col){
                cout<<col;
            }else{
                cout<<" ";
            }
        }cout<<endl;
    }
    return 0;
}