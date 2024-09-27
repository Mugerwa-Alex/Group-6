#include <iostream>
#include <string>
#include <ctime>
using namespace std;

const string PASSWORD = "CMP2103";
const int MAX_ATTEMPTS = 3;

bool login() {
    string Name;
    string password;
    int attempts = 0;
    bool passwordcorrect = false;

    cout << "Enter your Name: " << endl;
    getline(cin, Name);

    while (attempts < MAX_ATTEMPTS) {
        cout << "Enter password, attempts remaining: " << (MAX_ATTEMPTS - attempts) << endl;
        cin >> password;

        if (password == PASSWORD) {
            passwordcorrect = true;
            cout << "Login successful, welcome " << Name << endl;
            break;
        } else {
            attempts++;
            cout << "Incorrect password, Try again" << endl;
        }
    }

    if (!passwordcorrect) {
        cout << "Too many unsuccessful attempts, session Expired" << endl;
    }

    return passwordcorrect;
}

double calculateGPA() {
    cout << "Enter the number of subjects: " << endl;
    int subjects;
    cin >> subjects;
    double unit[subjects];
    double grade;
    double sum = 0;
    double sum_of_units = 0;

    cout << "Enter your marks: " << endl;
    double marks[subjects];
    for (int i = 0; i < subjects; i++) {
        do {
            cout << "marks" << i + 1 << ": ";
            cin >> marks[i];
        } while (marks[i] < 0 || marks[i] > 100);

        if (marks[i] >= 80) {
            grade = 5;
        } else if (marks[i] >= 75) {
            grade = 4.5;
        } else if (marks[i] >= 70) {
            grade = 4;
        } else if (marks[i] >= 65) {
            grade = 3.5;
        } else if (marks[i] >= 60) {
            grade = 3;
        } else if (marks[i] >= 55) {
            grade = 2.5;
        } else if (marks[i] >= 50) {
            grade = 2;
        } else if (marks[i] >= 45) {
            grade = 1.5;
        } else if (marks[i] >= 40) {
            grade = 1;
        } else {
            grade = 0;
        }

        cout << "Enter CU: ";
        cin >> unit[i];
        sum = sum + (grade * unit[i]);
        sum_of_units = sum_of_units + unit[i];
    }

    double GPA = sum / sum_of_units;
    cout << "The GPA is: " << GPA << endl;
    return GPA;
}

void calculateAge(int birth_day, int birth_month, int birth_year) {
    time_t t = time(0);
    tm *now = localtime(&t);

    int current_day = now->tm_mday;
    int current_month = now->tm_mon + 1;
    int current_year = now->tm_year + 1900;

    int age_years = current_year - birth_year;
    int age_months = current_month - birth_month;
    int age_days = current_day - birth_day;

    if (age_days < 0) {
        age_days += 30;
        age_months--;
    }
    if (age_months < 0) {
        age_months += 12;
        age_years--;
    }

    cout << "Age: " << age_years << " years, " << age_months << " months, " << age_days << " days." << endl;
}

int main() {
    bool repeat = true;
    while (repeat) {
        if (login()) {
            int choice;
            cout << "Choose an option: " << endl;
            cout << "1. Calculate GPA" << endl;
            cout << "2. Calculate Age" << endl;
            cin >> choice;

            if (choice == 1) {
                calculateGPA();
            } else if (choice == 2) {
                int day, month, year;
                cout << "Enter your birth date (DD MM YYYY): ";
                cin >> day >> month >> year;
                calculateAge(day, month, year);
            } else {
                cout << "Invalid choice" << endl;
            }
        }

        int repeatChoice;
        cout << "Do you want to repeat the program? (1 for Yes, 0 for No): ";
        cin >> repeatChoice;
        repeat = (repeatChoice == 1);
    }

    return 0;
}