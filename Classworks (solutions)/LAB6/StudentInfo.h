#ifndef STUDENTINFO_H_INCLUDED
#define STUDENTINFO_H_INCLUDED
#include <iostream>

using namespace std;

class StudentInfo{

private:
    int id;
    string name;
    double cgpa;
public:
    StudentInfo();
    StudentInfo(int,string,double);
    void printStudent();
    int getID();
    string getName();
    double getCgpa();

};
#include "StudentInfo.tpp"
#endif // STUDENTINFO_H_INCLUDED
