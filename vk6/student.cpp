#include "student.h"

Student::Student(string name, int age) : name(name), age(age) {}

string Student::getName() const
{
    return name;
}

void Student::setName(const string &newName)
{
    name = newName;
}

int Student::getAge() const
{
    return age;
}

void Student::setAge(int newAge)
{
    age = newAge;
}

void Student::printStudentInfo() const
{
    cout << "Name: " << name << ", Age: " << age << endl;
}
