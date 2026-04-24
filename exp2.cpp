// Class definition
class Student
{
private:
MyClass myObj; // Create an object of MyClass myObj.myMethod(); // Call the method
return 0;
} Program Code: /*WAP to demonstrate Class and object: Write a CPP program to calculate the percentage of n number of subject’s marks of n number of students.
*/
#include <iostream> // Header file for input and output operations
using namespace std; // To use standard namespace
int rollNo; // Stores roll number of the student
string name; // Stores name of the student
void getData()
{
string div; // Stores Division of the student float marks[10]; // Stores marks of subjects (maximum 10)
float total; // Stores total marks
float percentage; // Stores calculated percentage int n; // Stores number of subjects
public:
// Function to accept student details and marks
// Accept roll number

cout << "\nEnter Roll Number: ";
cin >> rollNo;
cin.ignore();
// Accept name
cout << "\nEnter name: ";
getline(cin, name);
// Accept div
cout << "\nEnter Division: ";
getline(cin, div);
// Accept number of subjects cout << "Enter number of subjects: ";
cin >> n;
total = 0; // Initialize total to zero
// Loop to accept marks of each subject for (int i = 0; i < n; i++)
{
}
cout << "Enter marks of subject " << i + 1 << ": ";
cin >> marks[i];
total = total + marks[i]; // Add marks to total
// Function to calculate percentage
void calculate()
{
}
// Function to display student result void display()
{
}
cout << "\nRoll Number : " << rollNo;
cout << "\nDivision: " << div;
cout << "\nTotal Marks : " << total;
cout << "\nPercentage : " << percentage << "%\n";
// Main function
int main()
percentage = total / n; // Calculate percentage
cout << "\nName: " << name;
int stud; // Stores number of students
// Accept number of students
cout << "Enter number of students: ";
cin >> stud;
Student s[10]; // Array of objects of Student class
// Loop for each student
for (int i = 0; i < stud; i++)
{
}
cout << "\n--- Student " << i + 1 << " ---";
Output:
return 0; // End of program
Enter number of students: 2
--- Student 1 --s[i].getData(); // Call function to accept data
Enter Roll Number: 1
Enter name: Rahul Patil
Enter Division: A
Enter number of subjects: 3 Enter marks of subject 1: 78
Enter marks of subject 2: 85 Enter marks of subject 3: 90
Roll Number : 1
Name: Rahul Patil
Division: A
Total Marks : 253
s[i].calculate(); // Call function to calculate percentage s[i].display(); // Call fu