using namespace std;
#include <iostream> 
#include <cmath>
int main(){
    int n;
    cin>>n;
    int originaln=n;
    int num=0;
    while (n>0){
        int r=n%10;
        num=num+1;
        n=n/10;
    }
    int facev=0;
    int t=num;
    int r=0;
    n=originaln;
    while (n>0){
        int z=n%10;
        facev=facev+1;
        int d=pow(10,z-1);
        r=facev*d+r;
        n=n/10;
    }
    cout<<"inverse of number is"<<r;
    return 0;
}
