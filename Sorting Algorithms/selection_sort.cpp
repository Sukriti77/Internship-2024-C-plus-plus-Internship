
#include <iostream>
using namespace std;
void sort_array(int arr[],int n){
    cout<<"Original array:"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"Array sorting:"<<endl;
    for(int i=0;i<n-1;i++){
            int min=i;
            for(int j=i+1;j<n;j++){
        if(arr[j]<arr[min]){
           min=j;
        }
    }
    swap(arr[i],arr[min]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    }

}
int main(){
    int arr[5]={7,5,2,11,10};
    int n=sizeof(arr)/sizeof(arr[0]);
    sort_array(arr,n);

return 0;
}
