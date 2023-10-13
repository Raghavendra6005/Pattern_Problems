#include<iostream>
using namespace std;
int main(){
    int rows,col;
    cin>>rows>>col;
    for(int row=1;row<=rows;row++){
        for(int coloumn=1;coloumn<=col;coloumn++){
            if(row==1 or row==rows or coloumn==1 or coloumn==col){
                cout<<coloumn<<" ";
            }else{
                cout<<"  ";
            }
        }cout<<endl;
    }
}