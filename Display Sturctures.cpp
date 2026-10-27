
#include <iostream>
#include <string>
#include <limits>
using namespace std;

struct student
{
    int rollNo;
    string name;
    float percentage;
};

int main()
{
    student s[1000];
    int n;

    cout << "Enter number of students: ";
    cin >> n;

    if (n < 1 || n > 1000)
    {
        cout << "Invalid number of students!";
        return 1;
    }

    // Input student records
    for (int i = 0; i < n; i++)
    {
        cout << "\nEnter details of student " << i + 1 << endl;

        cout << "Enter Roll Number: ";
        cin >> s[i].rollNo;

        cout << "Enter Name: ";
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        getline(cin, s[i].name);

        cout << "Enter Percentage: ";
        cin >> s[i].percentage;
    }

    // Display student records
    cout << "\n---- Student Records ----\n";
    cout << "Roll No.\tName\t\tPercentage\n";

    for (int i = 0; i < n; i++)
    {
        cout << s[i].rollNo << "\t\t"
             << s[i].name << "\t\t"
             << s[i].percentage << "%\n";
    }

    return 0;
}
