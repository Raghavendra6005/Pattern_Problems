#include<iostream>
using namespace std;
int main(){
    int num;
    cin>>num;
    for(int row=1;row<=num;row++){
        for(int col=0;col<row;col++){
            cout<<(num-col)<<" ";
        }cout<<endl;
    }
    return 0;
}