#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int t;
    bool flag=1;
    cin>>t;
    while (t!=0){
        int n;
        cin>>n;
        for (int i=2; i<=sqrt(n);i++){
            if (n%i==0){
                cout<<"not prime"<<endl;
                flag=0;
                break;
            }
        }
        if (flag==1){
            cout<<"prime"<<endl;
        }
        t=t-1;
        
         
    }
    return 0;
}
