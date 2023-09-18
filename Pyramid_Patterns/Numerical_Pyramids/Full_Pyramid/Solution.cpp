#include<iostream>
using namespace std;
int main(){
    int num;
    cin>>num;
    for(int row=1;row<=num;row++){
        for(int col=0;col<num-row;col++){
            cout<<"  ";
        }
        for(int col=row;col<=(2*row-1);col++){
            cout<<col;
            cout<<" ";
        }
        for(int col=(2*row-2);col>=row;col--){
            cout<<col;
            cout<<" ";
        }
        cout<<endl;
    }return 0;    
}