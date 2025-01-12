#include <iostream>
using namespace std;

void square(int x){

    for(int i = 0;i < x; i++){
        for (int j = 0; j < x; j++){
            cout<<"*";
        }
        cout<<"\n";
    }
}
void rightTriHypRightSameNum(int x){
    for(int i=0;i<x;i++){
        for (int j=0; j<i; j++){
            cout<<i<<" ";
        }
        cout<<"\n";
    }
}
void rightTriHypRightDownSameNum(int n){
    for(int i=0;i<n;i++){
        for(int j=n;j>i;--j){
            cout<<"* ";
       }
        cout<<"\n";
    }
}

int main(){
    int x;
    cin >> x;
    rightTriHypRightSameNum(x);
    rightTriHypRightDownSameNum(x);
}