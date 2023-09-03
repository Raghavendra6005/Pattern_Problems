#include<iostream>
using namespace std;
int main(){
    int num;
    cin>>num;
    for(int row=0;row<num;row++){
        for(int col=0;col<=row;col++){
            if(row==0 or col==0 or col==num-1 or row==num-1 or row==col){
                cout<<"*";
            }else{
                cout<<" ";
            }
        }cout<<endl;
    }
    return 0;
}