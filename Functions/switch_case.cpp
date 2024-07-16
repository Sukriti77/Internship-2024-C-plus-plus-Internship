#include <iostream>
using namespace std;
const int Pen{10};
const int Marker{20};
const int Eraser{30};
const int Rectangle{40};
const int Circle{50};
const int Ellipse{60};

int main(){
    int tool {Eraser};
    switch(tool){
    case Pen:{
        cout<<"Active tool is pen."<<endl;
    }
    break;
    case Marker:{
        cout<<"Active tool is marker."<<endl;
    }
    break;
    case Rectangle:
    case Circle:
    case Ellipse:
        {
        cout<<"Drawing Shapes"<<endl;
    }
    break;

    case Eraser:{

        cout<<"Active tool is eraser."<<endl;
    }
    break;
    }
    return 0;

}

