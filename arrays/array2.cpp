#include <iostream>
using namespace std;
int main(){
    int array[5]={10,20,30,40,50};
    int sum=0;
    for(auto x:array)
        sum+=x;
    cout<<sum<<endl;
    int user_input;
    cout<<"Enter the number you want to search for in the array:";
    cin>>user_input;
    int counter=0;
    for(auto x: array){
        if(x==user_input){
            cout<<"Number: "<<user_input<<" is found to at the location: "<<counter;
            exit(0);
        }
        counter++;
    }
    cout<<"Not found"<<endl;

return 0;
}
