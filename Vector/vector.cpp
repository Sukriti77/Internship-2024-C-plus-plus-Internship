#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector <int> v={12,4,6,23,20};
    for(int val:v){
        cout<<val<<" ";
    }
    cout<<endl;
    int size=v.capacity();
    cout<<size<<endl;
    // count function

    // push back function
    v.push_back(10);

    for(int val:v){
        cout<<val<<" ";
    }
    cout<<endl;
    v.pop_back();
    // pop back function does not contain any value
    for(int val:v){
        cout<<val<<" ";
    }
    cout<<endl;

    // erase function
    v.erase(v.begin()+2);
     for(int val:v){
        cout<<val<<" ";
    }
    cout<<endl;

    // insert value at specified position
    v.insert(v.begin()+2,48);


    for(int val:v){
        cout<<val<<" ";
    }
    cout<<endl;
    cout<<"capacity before clear: "<<v.capacity()<<endl;
    v.clear();
    cout<<"Capacity after clear: "<<v.capacity()<<endl;
    cout<<"Creating a vector v1 with all the elements initialised to 1: "<<endl;
    // write a code to implement the size and capacity functions
    vector<int> v1(5,1);
    for(int v:v1){
        cout<<v<<" ";
    }
    cout<<endl;
return 0;
}
