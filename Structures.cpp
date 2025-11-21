#include <iostream>
using namespace std;

struct Student 
{
    string name;
    int age;
};

Student getStudentinfo()
{  // Function returning a structure
    Student s;
    s.name = "Bob";
    s.age = 22;
    return s;
}

int main()
{
    Student s1 = getStudentinfo();  // Storing returned structure
    cout << "Name: " << s1.name << ", Age: " << s1.age << endl;
    return 0;
}
