#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=1;i<n+1;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int r=1;r<i+1;r++){
            cout<<"*";
        }
        cout<<"\n";
    }            
    return 0;
}
