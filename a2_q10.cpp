#include<iostream>
using namespace std;
int main(){

    int n;
    cin>>n;
    for(int i=n/2; i>=-n/2; i--){
        for(int j=1; j<=n; j++){
            if(j==abs(i)+1 || j==n-abs(i)){
                cout<<"*\t";
            }
            else{
                cout<<"\t";
            }

        }
        cout<<"\n";
    }
}

