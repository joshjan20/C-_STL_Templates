#include<iostream>
using namespace std;

template <typename T>
T add(T a , T b){
    return a+b;
}


int main(){

    int x = 20;
    int y = 30;
    
    float a = 20.20;
    float b = 30.30;
    
    cout<<add<int>(x,y)<<endl;
    cout<<add<float>(a,b);

}