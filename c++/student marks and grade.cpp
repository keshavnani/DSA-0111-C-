#include <iostream>
using namespace std;
class Student {
private:
    string name;
    int rollNumber;
    float marks[5];  
    float totalMarks;
    float percentage;
    char grade;
public:
    void inputDetails() {
        cout << "Enter student name: ";
        getline(cin, name);
        cout << "Enter roll number: ";
        cin >> rollNumber;
        totalMarks = 0;
        cout << "Enter marks for 5 subjects:\n";
        for (int i = 0; i < 5; ++i) {
            cout << "Subject " << (i + 1) << ": ";
            cin >> marks[i];
            totalMarks += marks[i];
        }
        percentage = totalMarks / 5.0;
        calculateGrade();
    }
    void calculateGrade() {
        if (percentage >= 90)
            grade = 'A';
        else if (percentage >= 80)
            grade = 'B';
        else if (percentage >= 70)
            grade = 'C';
        else if (percentage >= 60)
            grade = 'D';
        else if (percentage >= 50)
            grade = 'E';
        else
            grade = 'F';
    }

    // Function to display student details
    void displayDetails() {
        cout << "\nStudent Name: " << name << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Marks in 5 subjects: ";
        for (int i = 0; i < 5; ++i) {
            cout << marks[i] << " ";
        }
        cout << "\nTotal Marks: " << totalMarks << "/500" << endl;
        cout << "Percentage: " << percentage << "%" << endl;
        cout << "Grade: " << grade << endl;
    }
};
int main() {
    Student student;
    student.inputDetails();  
    student.displayDetails();  
    return 0;
}

