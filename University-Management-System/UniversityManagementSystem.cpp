#include <iostream>
#include <windows.h>
#include <string>
#include <fstream>
#include <sstream>
#include <algorithm>

using namespace std;

class University {
private:
	int id;
	string fullname, college, department, degree;
	float gpa;

public:

	// Constructors and Getters-Setters

	University(int id, string fullname,string college,string department,string degree,float gpa) {
		this->id = id;
		this->fullname = fullname;
		this->college = college;
		this->degree = degree;
		this->department = department;
		this->gpa = gpa;


}




    int getId() {
        return id;
    }


    string getFullname() {
        return fullname;
    }



    string getCollege() {
        return college;
    }


    string getDepartment() {
        return department;
    }

    string getDegree() {
        return degree;
    }

    float getGpa() {
        return gpa;
    }





    void setId(int id) {
        this->id = id;
    }

    void setFullname(string fullname) {
        this->fullname = fullname;
    }

    void setCollege(string college) {
        this->college = college;
    }

    void setDepartment(string department) {
        this->department = department;
    }

    void setDegree(string degree) {
        this->degree = degree;
    }

    void setGpa(float gpa) {
        this->gpa = gpa;
    }

};



int main() {
    int searchId;
    cout << "Enter ID: ";
    cin >> searchId;

    ifstream file("students.txt");

    if (!file.is_open()) {
        cout << "Error opening file!" << endl;
        return 0;
    }

    string line;
    bool found = false;

    while (getline(file, line)) {
        stringstream ss(line);

        string idStr, fullname, college, department, degree, gpaStr;

        getline(ss, idStr, ',');
        getline(ss, fullname, ',');
        getline(ss, college, ',');
        getline(ss, department, ',');
        getline(ss, degree, ',');
        getline(ss, gpaStr);

        int id = stoi(idStr);

        if (id == searchId) {
            float gpa = stof(gpaStr);

            University u(id, fullname, college, department, degree, gpa);

            cout << "\n--- Student Info ---\n";
            cout << "ID: " << u.getId() << endl;
            cout << "Name: " << u.getFullname() << endl;
            cout << "College: " << u.getCollege() << endl;
            cout << "Department: " << u.getDepartment() << endl;
            cout << "Degree: " << u.getDegree() << endl;
            cout << "GPA: " << u.getGpa() << endl;

            found = true;
            break;
        }
    }





    if (!found) {
        cout << "Student Not found" << endl;
    }



    file.close();




    return 0;


}
