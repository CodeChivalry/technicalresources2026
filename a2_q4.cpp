#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=n;i>0;i--){
        for(int j=n-i;j>0;j--){
            cout<<" ";
        }
        for(int r=1;r<i+1;r++){
            cout<<"*";
        }
        cout<<"\n";
    }            
    return 0;
}
