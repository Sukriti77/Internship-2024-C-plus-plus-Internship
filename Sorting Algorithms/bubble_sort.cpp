#include <iostream>
using namespace std;
void sort_array(int arr[],int n){

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    for(int i=0;i<n;i++){
            for(int j=0;j<n-i-1;j++){
        if(arr[j]>arr[j+1]){
            int temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
    }

    }
    cout<<"Sorted array:"<<endl;
     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void search(int arr[],int n,int x){
sort_array(arr,n);
int pos;
int flag=1;
for(int i=0;i<n;i++){
        if (arr[i]==x){
        pos=i;
        break;
    }

}
if(flag==1){
    cout<<"Element found at position: "<<pos+1<<endl;
}
else{
    cout<<"Element not found..."<<endl;
}

}
int main(){
    int arr[6]={44,5,67,12,69,45};
    int n=sizeof(arr)/sizeof(arr[0]);
    search(arr,n,5);

return 0;
}
