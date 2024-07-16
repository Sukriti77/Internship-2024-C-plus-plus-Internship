#include <iostream>
using namespace std;
int main(){
    while(1)
    {
    bool red_light{false};
    bool green_light{true};
    if(red_light==true){
        cout<<"stop!!"<<endl;
    }
    else{
        cout<<"keep going!!!"<<endl;
    }
    if(green_light){
        cout<<"The light is green!!"<<endl;
    }
    else{
        cout<<"The light is not green!!!"<<endl;
    }
    cout<<"Size of bool"<<sizeof(bool)<<endl;
    cout<<"Red light: "<<red_light<<endl;
    cout<<"green light: "<<green_light<<endl;
    cout<<boolalpha;
     cout<<"Red light: "<<red_light<<endl;
    cout<<"green light: "<<green_light<<endl;

    }

    return 0;

}
