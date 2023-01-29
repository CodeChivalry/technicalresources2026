using namespace std;
int main(){
    int n1,n2;
    int num;
    cin>>n1>>n2;
    int i=min(n1,n2);
    int r=max(n1,n2);
    for (int j=1 ; j<i+1; j++){
        if (n1%j==0 & n2%j==0){
            num=j;
        }
    }
    cout<<"gcd is"<<num<<endl;
    for (int d=1;d>0;d++){
        int w=r*d;
        if (w%i==0){
            cout<<"least common multiple is"<<w;
            break;
        }
    }


}
