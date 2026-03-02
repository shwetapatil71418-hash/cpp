
#include<iostream>
using namespace std;
void print1(int n=5){
  for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
   
}
int main(){
    int t=3;
    for(int i=0;i<t;i++){
         print1();

    }
   
}