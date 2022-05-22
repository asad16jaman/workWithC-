#include<iostream>
#include<string>

using namespace std;

class Empley{
public:
    int id;
    float selarry = 200.0;
    Empley(int inpid){
        id = inpid;
    };
    Empley(){};
};

class Programer : Empley{
    int pLanguage ;
    public:
    Programer(int inpid,int p){
        pLanguage = p;
        id = inpid;
    }
    Programer(int inpid,int p,float s){
        pLanguage = p;
        id = inpid;
        selarry = s;
    }
    Programer(){};
    void display(void);

};

void Programer :: display(void){

    cout<<"you are programer Your id is "<<id<<", selary is "<<selarry<< ", language code is "<<pLanguage<<endl;
}




int main(){
    Empley e1(01),e2(02);
    cout<<e1.id<<" and selary is : "<<e1.selarry<<endl;
    cout<<e2.id<<" and selary is : "<<e2.selarry<<endl;
    //second class work is hare;
    Programer p1(101,9),p2(102,03,500);
    p1.display();
    p2.display();

}
