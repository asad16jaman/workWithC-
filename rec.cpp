#include<iostream>
#include<string>
using namespace std;

class Base{
    int data1;
    string s1;
public:
    int setdata(int s){
        data1 = s;
        return data1;
    }
    string setdata(string s){
        s1 = s;
        return s1;
    }

};

class Derive : Base{

public:
    int data2;
    int setderive(int x){
        data2 = setdata(x);
        return data2;
    }
    string setstring(string p){
        return setdata(p);
    }

    void display(void){
        cout<<"Your data given is : "<<setderive(12)<<endl;
    }
};


int main(){

    Derive x;
    x.display();
    cout<<x.setstring("hellow")<<endl;


    return 0;
}
