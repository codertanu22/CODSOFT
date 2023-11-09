#include <iostream>
#include <iomanip>
#include <vector>
#include <string>

using namespace std;

int main() {
    vector<string> studentNames;
    vector<double> grades;

    int numStudents;
    cout << "Enter the number of students: ";
    cin >> numStudents;

    for (int i = 0; i < numStudents; ++i) {
        string name;
        double grade;

        cout << "Enter the name of student " << (i + 1) << ": ";
        cin.ignore();
        getline(cin, name);

        cout << "Enter the grade of student " << (i + 1) << ": ";
        cin >> grade;

        studentNames.push_back(name); // Use push_back() instead of push()
        grades.push_back(grade); // Use push_back() instead of push()
    }

    double sum = 0;
    double highestGrade = grades[0];
    double lowestGrade = grades[0];

    for (int i = 0; i < numStudents; ++i) {
        sum += grades[i];

        if (grades[i] > highestGrade) {
            highestGrade = grades[i];
        }

        if (grades[i] < lowestGrade) {
            lowestGrade = grades[i];
        }
    }

    double average = sum / numStudents;

    cout << fixed << setprecision(2);
    cout << "\nGrade Summary:\n";
    cout << "-------------------------\n";
    cout << "Average Grade: " << average << endl;
    cout << "Highest Grade: " << highestGrade << endl;
    cout << "Lowest Grade: " << lowestGrade << endl;

    cout << "\nStudent Grades:\n";
    for (int i = 0; i < numStudents; ++i) {
        cout << studentNames[i] << ": " << grades[i] << endl;
    }

    return 0;
}

