
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
void print2(int n=5){
    for(int i=0;i<n;i++){
       //space
       for(int j=0;j<i;j++){
        cout<<" ";
       }
       //star
       for(int j=0;j<2*n-2*i-1;j++){
        cout<<"*";
       }
       //space
       for(int j=0;j<i;j++){
        cout<<" ";

        }
        cout << endl;

    }
}
void print3(int n=5){
    for(int i=1;i<2*n-1;i++){
        int star=i;
        if(i>n){
            star=2*n-i;
        }
        for(int j=1;j<=star;j++){
            cout<<"*";
        }
        cout<<endl;

    }
}
void print4(int n=5){
    for(int i=0;i<=n;i++){
        int start=1;
        if(i%2==0) start=1;
        else start=0;
        for(int j=0;j<=i;j++){
            cout<<start;
            start = 1-start;

        }
        cout<<endl;
    }
}
void print5(int n=4){
    for(int i=1;i<=n;i++){
        int space= 2*(n-i);
        //numbers
        for(int j=1;j<=i;j++){
            cout<< j <<" ";
        }
        //space
        for(int j=1;j<=space;j++){
            cout<<"  ";
        }
      //numbers
        for(int j=i;j>=1;j--){
        cout<<j<<" ";
    }
    cout<<endl;
    }
    
}
void print6(int n=5){
    int num=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<num<<" ";
            num=num+1;

        }
        cout<<endl;
    }
}
void print7(int n=5){
    for(int i=0;i<n;i++){
        for(char c='A';c<='A'+i;c++){
            cout<< c <<" ";
        }
        cout<<endl;
    }
}
void print8(int n=5){
    for(int i=0;i<=n;i++){
        char ch='A'+i;
        for(int j=0;j<=i;j++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}
void print9(int n=5){
    for(int i=0;i<n;i++){
       //space
       for(int j=0;j<n-i-1;j++){
        cout<<" ";
       }
       //alpha
        char ch='A';
        int breakpoint= i;
        for(int j=0;j<2*i+1;j++){
        cout<<ch;
        if(j <=breakpoint) ch++;
        else ch--;
    
       }
       
       //space
       for(int j=0;j<n-i-1;j++){
        cout<<" ";

        }
        cout << endl;

    }
}
void print10(int n=4){
    for(int i=0;i<=n;i++){
        for(char ch='E'-i; ch<='E';ch++){
            cout<< ch <<" ";
        }
        cout<<endl;
    }
}
void print11(int n=5){
     for(int i=0;i<n;i++){
        int inis = 0;
        // star
        for(int j=1;j<=n-i;j++){
            cout <<"*";
        }
        // space
        for(int j=0;j<inis;j++){
            cout <<" ";
        }
        // star
         for(int j=1;j<=n-i;j++){
            cout <<"*";
         }
        
         cout<<endl;
     }
}
void print12(int n=5){
    for(int i=1;i<2*n-1;i++){
        int star=i;
        if(i>n) star=2*n-i;
        //star
        for(int j=1;j<=star;j++){
            cout<<"*";
        }
        //space
        int space= 2*n-2;
        for(int j=1;j<=space;j++){
            cout<<" ";
        }
        //star
         for(int j=1;j<=star;j++){
            cout<<"*";
        }
        cout<<endl;
        if(i<n) space -=2;
        else space +=2;


    }
}
void print13(int n=4){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==0 || j==0 || i==n-1|| j ==n-1 ){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
            
        }
        cout<<endl;
    }
}
void print14(int n=4){
    for(int i=0;i<=2*n-1;i++){
        for(int j=0;j<=2*n-1;j++){
            
        }
    }
}
int main(){
    int t=2;
    for(int i=1;i<=t;i++){
         print13();
         

    }
   
}