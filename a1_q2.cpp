#include <iostream>

using namespace std;

int main(){
    int num;
    cin>>num;
    if (num>90){
        cout<<"excellent";
    }
    else if (num>80){
        cout<<"good";
    }
    else if (num>70){
        cout<<"fair";
    }
    else if (num>60){
        cout<<"expectations";
    }
    else{
        cout<<"below par";
    }
    return 0;
}
