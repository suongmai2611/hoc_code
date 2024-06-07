#include<iostream>
#include<iomanip>
#include<string>
#include<fstream>
using namespace std;

//Bai 23:
/*
struct fraction {
	long long numerator;
	long long denominator;
	};

void nhap(fraction &coefficient) {
	cout << "Please enter the numerator and denominator: ";
	cin >> coefficient.numerator >> coefficient.denominator;
	while (coefficient.denominator == 0) {
		cout << "Impossible. Please try again: " << endl;
		cin >> coefficient.denominator;}}

void sum(const fraction &coefficient1, const fraction &coefficient2) {
    long long sum, common_denominator;
    sum = coefficient1.numerator * coefficient2.denominator + coefficient2.numerator * coefficient1.denominator;
    common_denominator = coefficient1.denominator * coefficient2.denominator;
	cout << "The sum of two fractions is: " << sum / common_denominator << endl;}

void difference(const fraction &coefficient1, const fraction &coefficient2){
    long long difference, common_denominator;
    difference = coefficient1.numerator * coefficient2.denominator - coefficient2.numerator * coefficient1.denominator;
    common_denominator = coefficient1.denominator * coefficient2.denominator;
    cout << "The difference of two fractions is: " << difference / common_denominator;}

void product(const fraction &coefficient1, const fraction &coefficient2){
    long long product1, product2;
    product1 = coefficient1.numerator * coefficient2.numerator;
    product2 = coefficient1.denominator * coefficient2.denominator;
    cout << "The product of two fractions is: " << product1 / product2;}

void divide(const fraction &coefficient1, const fraction &coefficient2){
    long long divide1, divide2;
    divide1 = coefficient1.numerator * coefficient2.denominator;
    divide2 = coefficient1.denominator * coefficient2.numerator;
    cout << "The division of two fractions is: " << divide1 / divide2;}
int main() {
	fraction fraction1, fraction2;
	cout << "Enter the first fraction: ";
	nhap (fraction1);
	cout << "Enter the second fraction: ";
	nhap (fraction2);
	sum(fraction1, fraction2);
	difference(fraction1, fraction2);
	product(fraction1, fraction2);
	divide(fraction1,fraction2);
	return 0;
	}
*/

//Bai 24:

struct student_information {
    string name;
    int ID;
    double GPA1;
    double GPA2;
    double total_gpa;};


    student_information* search_by_ID(student_information student[], int num_students, int searchID) {
    for (int i = 0; i < num_students; ++i) {
        if (student[i].ID == searchID) {
            return &student[i];}
}
    return nullptr;}

    student_information* search_by_name(student_information student[], int num_students, string search_name) {
    for (int i = 0; i < num_students; ++i) {
        if (student[i].name == search_name) {
            return &student[i];}
    }
    return nullptr;}

    void search_by_grade(student_information student[], int num_students, string grade_type) {
    ofstream outfile;
    outfile.open("Information_Search.xls");
    bool found = false;
    for (int i = 0; i < num_students; ++i) {

        if (student[i].total_gpa >= 8.5 && grade_type == "Very good") {
            outfile << "Student: " << student[i].name << ", ID: " << student[i].ID << ", Grade: Very good" << endl;
            found = true;
        } else if (student[i].total_gpa >= 7.0 && student[i].total_gpa < 8.5 && grade_type == "Good") {
            outfile << "Student: " << student[i].name << ", ID: " << student[i].ID << ", Grade: Good" << endl;
            found = true;
        } else if (student[i].total_gpa >= 5.0 && student[i].total_gpa < 7.0 && grade_type == "Ordinary") {
            outfile << "Student: " << student[i].name << ", ID: " << student[i].ID << ", Grade: Ordinary" << endl;
            found = true;
        } else if (student[i].total_gpa < 5.0 && grade_type == "Week") {
            outfile << "Student: " << student[i].name << ", ID: " << student[i].ID << ", Grade: Week " << endl;
            found = true;
        }
    }
    if (!found) {
        cout << "No student found with the specified grade type." << endl;
    }}




int main() {
    student_information student[5];
    double max_total_gpa = 0;
    double total_gpa;
    int index_of_max = 0;
    int index_of_improvement = 0;
    ofstream outfile;
    outfile.open("Information_Search.xls");

    for (int i = 0; i < 5; ++i) {
        cout << "Enter student " << i + 1 << " information: " << endl;
        cout << "Ten: ";
        getline(cin, student[i].name);
        cout << "ID: ";
        cin >> student[i].ID;
        cout << "The first semester GPA: ";
        cin >> student[i].GPA1;
        cout << "The second semester GPA: ";
        cin >> student[i].GPA2;
        cin.ignore();

        total_gpa = (student[i].GPA1 + student[i].GPA2) / 2;
        student[i].total_gpa = total_gpa;

        if (student[i].total_gpa > max_total_gpa) {
            max_total_gpa = student[i].total_gpa;
            index_of_max = i;}}

    cout << "Student with highest total GPA:" << endl;
    cout << "Name: " << student[index_of_max].name << endl;
    cout << "ID: " << student[index_of_max].ID << endl;
    cout << "Total GPA: " << student[index_of_max].total_gpa << endl;

    for (int j = 0; j < 5; j++) {
        if(student[j].GPA2 > student[j].GPA1){
            index_of_improvement = j;}}
    cout << "Student with improvement throughout the year: " << endl;
    cout << "Name: " << student[index_of_improvement].name << endl;
    cout << "ID: " << student[index_of_improvement].ID << endl;
    cout << "Total GPA: " << student[index_of_improvement].total_gpa << endl;

    int searchID;
    cout << "Enter ID to search: ";
    cin >> searchID;
    student_information* found_by_ID = search_by_ID(student, 5, searchID);
    if (found_by_ID != nullptr) {
        outfile << "Student found by ID: " << found_by_ID->name << endl;
        outfile << "Total GPA: " << found_by_ID->total_gpa << endl;}
        else {
        outfile << "Student not found by ID." << endl;}

    cin.ignore();
    string searchName;
    cout << "Enter name to search: ";
    getline(cin, searchName);
    student_information* found_by_name = search_by_name(student, 5, searchName);
    if (found_by_name!= nullptr) {
        outfile << "Student found by name: " << found_by_name->name << endl;
        outfile << "Total GPA: " << found_by_name->total_gpa << endl;

    } else {
        cout << "Student not found by name." << endl;
    }

    string grade_type;
    cout << "Enter grade type to search (e.g., Very good, Good, Ordinary, Weak): ";
    cin >> grade_type;
    search_by_grade(student, 5, grade_type);

    outfile.close();

    return 0;
}

