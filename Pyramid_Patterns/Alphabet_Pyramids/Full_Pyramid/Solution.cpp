#include<iostream>
using namespace std;
int main(){
    int num;
    cin>>num;
    for(int row=0;row<num;row++){
        for(int col=1;col<=(num-(row+1));col++){
            cout<<"  ";
        }
        for(int col=row;col>=0;col--){
            cout<<char('A'+col)<<" ";
        }
        for(int col=1;col<=row;col++){
            cout<<char('A'+col)<<" ";
        }cout<<endl;
    }
    return 0;
}