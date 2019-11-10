#ifndef STUDENTINFO_H_INCLUDED
#define STUDENTINFO_H_INCLUDED
using namespace std;

class StudentInfo
{
    private:
        int id;
        string name;
        double cgpa;
    public:
        StudentInfo()
        {

        }
        StudentInfo(int i,string n, double c)
        {
            id=i;
            name= n;
            cgpa= c;
        }
        void printStudent()
        {
            cout<<"Name: "<<name<<endl<<"Id: "<<id<<endl<<"CGPA: "<<cgpa<<endl;

        }
        int getId()
        {
            return id;
        }
        string getName()
        {
            return name;
        }
        double getCgpa()
        {
            return cgpa;
        }


};
#endif // STUDENTINFO_H_INCLUDED
