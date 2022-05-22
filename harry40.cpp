#include<iostream>
#include<string>
using namespace std;

class Student{
protected:
    int id;
    string name;
public:
    void setStudent(int,string);
};

void Student :: setStudent(int i,string n){
    name = n;
    id = i;
}

class Exam : public Student{
protected:
    float math;
    float physics;
public:
    void setNumber(float,float);
};

void Exam :: setNumber(float m,float p){
    math = m;
    physics = p;
}

class Result : public Exam{
    float avg;
public:
    void setAvg(void){
        avg = (float(math)+physics)/2;
    }
    void getresult(void){
        setAvg();
        cout<<"Your name is : "<<name
        <<" Your id is : "<<id
        <<" avrage number is : "<<avg<<endl;
    }
};


int main(){

    Result e1;
    e1.setStudent(1001,"asad");
    e1.setNumber(50.50,80.00);
    e1.getresult();


return 0;
}


