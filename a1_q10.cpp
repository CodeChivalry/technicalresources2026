#include <iostream>
using namespace std;
int main()
{
    int n;
    int sum=0;
    char factor;
    cout<<"input a number";
    cin>>n;
    cout<<"prime factors are\n";
    for (int i=2;i<n+1;i++){
        if (i==2){
            if (n%i==0){
                cout<<i<<endl;
            }
            i++;
        
        }
        if (n%i==0){
            for (int j=2;j<i;j++){
                if (i%j!=0){
                    sum++;
                }
            }
        }
            if (sum==(i-2)){
                cout<<i<<endl;
            }
            sum=0;
    }
}
