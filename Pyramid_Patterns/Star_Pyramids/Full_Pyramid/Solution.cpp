#include<iostream>
using namespace std;
int main(){
    int num;
    cin>>num;
    for(int row=0; row<num; row++){
        for(int col=0;col<(num-row);col++){
            cout<<" ";
        }
        for(int col=0; col<=row; col++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}