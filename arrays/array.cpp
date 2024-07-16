#include <iostream>
using namespace std;
int main(){
int a[5]={1,2,3,4,5};
cout<<"completely initialized array A"<<endl;
for(int x:a)
    cout<<x<<endl;
cout<<endl;
int b[6]={1,3,5};
cout<<"Partially initialized array B"<<endl;
for(int y:b)
    cout<<y<<endl;
cout<<endl;
float c[6]={1.2,2.4,3.6,48.54,54.88,99.65};
cout<<"Completely initialized array C"<<endl;
for(float z:c)
    cout<<z<<endl;
cout<<endl;
char e[5]={'A',66,'B',77,'C'};
for(char q:e)
    cout<<q<<endl;
cout<<endl;
return 0;
}

