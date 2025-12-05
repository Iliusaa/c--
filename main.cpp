#include <iostream>

using namespace std;

void A(){
    cout<<"A"<<endl;
}

void B(){
    cout<<"FUNC B CALLED"<<endl;
}
void C(){
    cout<<"FUNC C CALLED"<<endl;
}
void A1(){
    cout<<"FUNC A1 CALLED"<<endl;
    B();
    C();
}


int main(){
    cout<< "Jello"<<endl;
A();
A1();


    return 0;
}
