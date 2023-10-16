#include<iostream>
using namespace std;
int main(){
    int num;
    cin>>num;
    for(int row=num;row>=1;row--){
        //print *
        for(int col=1;col<=row;col++){
            cout<<"* ";
        }
        //print " "
        for(int col=1;col<=(2*num-2*row);col++){
            cout<<"  ";
        }
        //print *
        for(int col=1;col<=row;col++){
            cout<<"* ";
        }
        cout<<endl;
    }
    for(int row=1;row<=num;row++){
        //print *
        for(int col=1;col<=row;col++){
            cout<<"* ";
        }
        //print " "
        for(int col=1;col<=(2*num-2*row);col++){
            cout<<"  ";
        }
        //print *
        for(int col=1;col<=row;col++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}