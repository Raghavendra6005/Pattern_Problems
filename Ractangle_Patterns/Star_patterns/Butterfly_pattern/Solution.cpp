#include<iostream>
using namespace std;
int main(){
    int num;
    cin>>num;
    for(int row=1;row<=num;row++){
        // Print *
        for(int col=1;col<=row;col++){
            cout<<"* ";
        }
        // Print " "
        for(int col=1;col<=(2*num-2*row);col++){
            cout<<"  ";
        }
        // Print *
        for(int col=1;col<=row;col++){
            cout<<"* ";
        }
        cout<<endl;
    }
    for(int row=(num-1);row>=1;row--){
        // Print *
        for(int col=1;col<=row;col++){
            cout<<"* ";
        }
        // Print " "
        for(int col=1;col<=(2*num-2*row);col++){
            cout<<"  ";
        }
        // Print *
        for(int col=1;col<=row;col++){
            cout<<"* ";
        }
        cout<<endl;
    }
}