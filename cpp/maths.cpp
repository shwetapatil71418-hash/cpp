#include <iostream>
using namespace std;
void print1(){
    int n=7789;
    int w=0;
    while(n>0){
        w=w+1;
        n=n/10;

    }
    cout<<w<<endl;

}
//reverse a number
void print2(){
    int n=7789;
    int rev=0;
    while(n>0){
        int lastdigit=n%10;
        n=n/10;
        rev=(rev*10)+lastdigit;

    }
    cout<<rev<<endl;
}
//palindrome number
void print3(){
    int n=1331;
    int dup=n;
    int rev=0;
    while(n>0){
        int lastdigit=n%10;
        n=n/10;
        rev=(rev*10)+lastdigit;
        if(dup==rev){
            cout<<"palindrome"<<endl;

        }
        else{
            cout<<"not palindrome"<<endl;
        }

    }


}
int main(){
    print3();
    return 0;
}