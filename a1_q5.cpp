#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int d;
    int sum=0;
    cin>>d;
    while(d>0){
        int r=d%10;
        sum=sum+1;
        d=d/10;
    }
    cout<<sum;
    return 0;
}
