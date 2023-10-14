#include<iostream>
using namespace std;
int main(){
    int num;
    cin>>num;
    for(int row=1;row<=num;row++){
        for(int col=row;col>=1;col--){
            cout<<col<<" ";
        }cout<<endl;
    }
    return 0;
}