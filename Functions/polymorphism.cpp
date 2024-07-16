#include <iostream>
using namespace std;
int add(int a,int b,int c){
return (a+b+c);
}
int add(int a,int b){
return (a+b);
}
int main(){
    int n1,n2,n3;
    cin>>n1>>n2>>n3;
    int s1=add(n1,n2);
    int s2=add(n1,n2,n3);
    cout<<s1<<endl;
    cout<<s2<<endl;
return 0;
}
/*
polymorphism
overriding  dynamic polymorphism runtime
overloading static polymorphism compile time

*/
