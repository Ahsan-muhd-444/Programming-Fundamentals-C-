#include <iostream>
#include <cstring>
using namespace std;

struct Student 
{
    char name[100];
    int age;
    float marks;
};

int main() 
{
    int capacity = 2;
    int size = 0;
    Student* records = new Student[capacity];

    char choice;
    do 
	{
        if (size == capacity) 
		{
            // Resize array
            capacity *= 2;
            Student* temp = new Student[capacity];
            for (int i = 0; i < size; i++)
            {
                temp[i] = records[i];
            }
            delete[] records;
            records = temp;
        }

        cout << "\nEnter name: ";
        cin.ignore();  // Clear newline
        cin.getline(records[size].name, 100);

        cout << "Enter age: ";
        cin >> records[size].age;

        cout << "Enter marks: ";
        cin >> records[size].marks;

        size++;

        cout << "Do you want to add another record? (y/n): ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    // Display all records
    cout << "\nAll Records:\n";
    for (int i = 0; i < size; i++) 
	{
        cout << "Name: " << records[i].name << ", Age: " << records[i].age << ", Marks: " << records[i].marks << endl;
    }

    delete[] records;
    return 0;
}
