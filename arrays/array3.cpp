#include <iostream>
using namespace std;
int main(){
    int a[5]={1,4,2,3,2};
    int value=5;
    int count=0;
    for(int i=0;i<5;i++){
        for(int j=i+1;j<5;j++){
            if(a[i]+a[j]==value){
                count++;
            }
        }
    }
    cout<<"the count of pairs of value "<<value<<" is "<<count<<endl;

return 0;
}
