#include <iostream>
using namespace std;
void add(int a,int b){
cout<<(a+b)<<endl;
}
void sub(int a,int b){
cout<<(a-b)<<endl;
}
void divide(int a,int b){
    cout<<(a/b)<<endl;
}
void multiply(int a,int b){
cout<<(a*b)<<endl;
}
int main(){
    int n1,n2;
    cout<<"Enter two numbers:"<<endl;
    cin>>n1>>n2;
   cout<<"Choose from the following options:"<<endl;
   cout<<"1. add 2. subtract 3. multiply 4.divide"<<endl;
   int choice;
   cin>>choice;
   switch(choice){
   case 1:
       add(n1,n2);
       break;
   case 2:
    sub(n1,n2);
    break;
   case 3:
    multiply(n1,n2);
    break;
   case 4:
       if(n2==0){
        cout<<"Zero Division Error"<<endl;
       }
       else{
          divide(n1,n2);
       }

    break;

    }
return 0;
/*
why do we need user defined function:
the dissatisfaction due to the built in functions leads to user defined function.
*/
}
