#include<iostream>
using namespace std;
int main(){
    int num;
    cin>>num;
    int count=1;
    for(int row=1;row<=num;row++){
        for(int col=1;col<=num;col++){
            cout<<count;
            count++;
        }cout<<endl;
    }
    return 0;
}