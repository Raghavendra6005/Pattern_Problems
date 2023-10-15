#include<iostream>
using namespace std;
int main(){
    int num;
    cin>>num;
    for(int row=1;row<=num;row++){
        for(int col=1;col<=num-row;col++){
            cout<<"  ";
        }
        for(int col=1;col<=row;col++){
            cout<<row<<" ";
        }
        cout<<endl;
    }
    return 0;
}