#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int s=0;
    for(int i=1;i<=((n+1)/2);i++){
        int j=1;
        while (j<(((7+1)/2)-s)){
            cout<<"*";
            j++;
        }while(j>=(((7+1)/2)-s) && j<=(((7+1)/2)+s)){
            cout<<" ";
            j++;
        }while (j>(((7+1)/2)+s) && j<=7){
            cout<<"*";
            j++;
        }
        s++;    
        cout<<"\n";
    }
    int r=((n-((n+1)/2))-1);
    for(int k=(((n+1)/2)+1);k<=n;k++){
        int m=1;
        while(m<(((7+1)/2)-r)){
            cout<<"*";
            m++;
        }while(m>=(((7+1)/2)-r) && m<=(((7+1)/2)+r)){
            cout<<" ";
            m++;
        }while (m>(((7+1)/2)+r) && m<=7){
            cout<<"*";
            m++;
        }
        r--;
        cout<<"\n";
    }
    return 0;
}
