#include <iostream>

using namespace std;

int main()
{
    int n; 
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(j==i || j==((n-1)-i)){
                cout<<"*\t";
            }
            else{
                cout<<"\t";
            }
        }
        cout<<"\n";
    }
    return 0;
}
    
