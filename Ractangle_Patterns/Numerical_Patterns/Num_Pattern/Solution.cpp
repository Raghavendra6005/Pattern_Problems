#include<iostream>
using namespace std;
int main(){
    int Number;
    cin>>Number;
    for(int row=1;row<=Number;row++){
        for(int coloumn=row;coloumn<=Number;coloumn++){
            cout<<coloumn<<" ";
        }
        for(int coloumn=1;coloumn<row;coloumn++){
            cout<<coloumn<<" ";
        }
        cout<<endl; 
    }
}