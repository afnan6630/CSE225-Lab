#include "StudentInfo.h"

StudentInfo::StudentInfo(){
}
StudentInfo::StudentInfo(int i, string n, double c)
{
    id = i;
    name = n;
    cgpa = c;
}

void StudentInfo::printStudent()
{
    cout<<"Name: "<<name<<endl<<"Id: "<<id<<endl<<"CGPA: "<<cgpa<<endl;
}

int StudentInfo::getID()
{
    return id;
}

string StudentInfo::getName()
{
    return name;
}

double StudentInfo::getCgpa()
{
    return cgpa;
}
