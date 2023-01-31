#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int d;
    int reverse=0;      
    cin>>d; 
    while(d>0){
        int r=d%10;
        reverse=reverse*10+r;
        d=d/10;
    }
    cout<<reverse;
    return 0;
}
