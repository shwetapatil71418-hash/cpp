
#include<iostream>
using namespace std;
void print1(int n=5){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<< i <<" ";
        }
        cout << endl;

    }
}
int main(){
    int t=2;
    for(int i=1;i<=t;i++){
         print1();

    }
   
}