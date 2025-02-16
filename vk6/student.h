#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
using namespace std;

class Student
{
public:
    Student(string name, int age);

    string getName() const;
    void setName(const string &newName);

    int getAge() const;
    void setAge(int newAge);

    void printStudentInfo() const;

private:
    string name;
    int age;
};

#endif // STUDENT_H
