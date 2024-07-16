#include <iostream>
#include <stack>
using namespace std;

stack<int> s;

int size_of_the_stack(){
return s.size();
}
void insert(int n){
    s.push(n);
    cout<<"Element inserted successfully..."<<endl;
}
void delete_stack(){
    if(!s.empty()){
    s.pop();
    cout<<"Element deleted successfully..."<<endl;
    }
    else{
        cout<<"No element to delete.."<<endl;
    }

}
int top_element(){
    if(!s.empty()){
       return s.top();
    }
    else{
        cout<<"No element in the stack..."<<endl;
        return -1;
    }
}
int main(){
cout<<" 1. Size of the stack\n 2.Insert element into the stack \n 3.Delete element from the stack \n 4.Top element of the stack \n 5.Exit"<<endl;

while(1){
    int choice;
 cout<<"Enter your choice: "<<endl;
 cin>>choice;
 switch(choice){
 case 1:{
     int x=size_of_the_stack();
     cout<<x<<endl;
     break;
 }
 case 2:{
    int n;
    cin>>n;
    insert(n);
    cout<<"Element entered successfully"<<endl;
    break;
 }
 case 3:{
    delete_stack();

    break;
 }
 case 4:{
    int t;
    t=top_element();
    if(t!=-1){
    cout<<"Top element of the stack: "<<t<<endl;
    }
     break;
 }
 case 5:
    return 0;
 default:
    cout<<"Invalid Choice entered..."<<endl;
    break;

}
}
return 0;
}
