#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int low;
    bool flag=1;
    cout<<"enter value of low"<<endl;
    cin>>low;
    int high;
    cout<<"enter value of high"<<endl;
    cin>>high;
    for (int y=low;y<=high;y++){
        for (int z=2;z<=sqrt(y);z++){
            if(y%z==0){
                cout<<y<<" not prime"<<endl;
                flag=0;
                break;
            }
        }
        if(flag==1){
            cout<<y<<" prime"<<endl;
        }        
    }
    
    
    return 0;
}
