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



int main(){
    int x;
    cin >> x;
    square(x);
  
}