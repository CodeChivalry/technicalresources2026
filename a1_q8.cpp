#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    int originaln=n;
    int num=0;
    while (n>0){
        int r=n%10;
        num=num+1;
        n=n/10;
    }
    k=k%num;
    if (k<0){
        k=k+num;
    }
    int div=pow(10,k);
    int miv=pow(10,(num-k));
    int s1=originaln%div;
    int s2=s1*miv+originaln/div;
    cout<<s2;
return 0;
}
