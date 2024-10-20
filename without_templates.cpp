#include<iostream>
using namespace std;

int add(int a, int b){
    return a+b;
}

float add(float a, float b){
    return a+b;
}

int main(){

    int x = 20;
    int y = 30;
    
    float a = 20.20;
    float b = 30.30;
    
    cout<<add(x,y)<<endl;
    cout<<add(a,b)<<endl;

}