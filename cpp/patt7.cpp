#include<iostream>
using namespace std;
void print1(int n=5){
    for(int i=0;i<n;i++){
       //space
       for(int j=0;j<n-i-1;j++){
        cout<<" ";
       }
       //star
       for(int j=0;j<2*i+1;j++){
        cout<<"*";
       }
       //space
       for(int j=0;j<n-i-1;j++){
        cout<<" ";

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