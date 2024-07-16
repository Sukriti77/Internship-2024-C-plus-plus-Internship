#include <iostream>
using namespace std;

int array[]={1,2,3,4,5};
const int length=sizeof(array)/sizeof(array[0]);
int main(){

int choice;

for(int i=0;i<length;i++){
    cout<<array[i]<<" ";
}
cout<<endl;
cout<<"Choose from following options:"<<endl;
cout<<"1. Insert 2. Delete 3. Read 4. Update 5. Exit"<<endl;
cin>>choice;

switch(choice){
case 1:

    cout<<"Enter the element to add:"<<endl;
    int n;
    cin>>n;

    array[length]=n;
    cout<<"Showing the array:"<<endl;
    for(int i=0;i<=length;i++){
        cout<<array[i]<<" ";
    }

    break;

case 2:
    cout<<"Enter the element to delete:"<<endl;
    int m;
    cin>>m;
    int pos;
    for(int i=0;i<length;i++){
        if (array[i]==m){
                pos=i;
            break;
        }
    }
    for(int i=pos;i<length;i++){

        array[i]=array[i+1];

    }
    for(int i=0;i<length-1;i++){
        cout<<array[i]<<" ";
    }

    break;
case 4:
    cout<<"Enter the element to update:"<<endl;
    int s;
    cin>>s;
    int p;
    for(int i=0;i<length;i++){
        if (array[i]==s){
                p=i;
            break;
        }
    }
    cout<<"Enter the new element:"<<endl;
    int n1;
    cin>>n1;
    array[p]=n1;
    for(int i=0;i<length;i++){
        cout<<array[i]<<" ";
    }
    break;
case 3:
    for(int i=0;i<length;i++){
        cout<<array[i]<<" ";
    }
    break;
case 5:
    exit(0);

}

return 0;
}
