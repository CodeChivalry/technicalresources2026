#include <iostream>
using namespace std;
int main(){
    int r=0;
    while(r<5){
        cout<<"*";
        r=r+1;
    }
    cout<<"\n";
    for(int i=1;i<4;i++){
        for(int j=1;j<5;j++){
            if(j+i==5){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<"\n";
    }
    int z=0;
    while(z<5){
        cout<<"*";
        z=z+1;
    }
}
