#include<iostream>
using namespace std;
int main(){
    int num;
    cin>>num;
    for(int row=1;row<=num;row++){
        for(int col=0;col<=row-1;col++){
            cout<<" ";
        }
        for(int col=0;col<=(num-row);col++){
            cout<<"* ";
        }cout<<endl;
    }return 0;
}