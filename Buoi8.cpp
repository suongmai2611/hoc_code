#include<iostream>
#include<string>
#include<iomanip>
#include <algorithm>
#include <cctype>
#include<fstream>
#include<sstream>
using namespace std;

struct employee_info{
    int ID;
    string name;
    int year;
    double salary_coeff;
    string position;
    };

string to_lower_case(string str) {
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    return str;
}

void display_menu(){
    cout << "Menu:" << endl;
    cout << "1. Fill in the employee information" << endl;
    cout << "2. Extract employee information from file" << endl;
    cout << "3. Display the employee list" << endl;
    cout << "4. Extract 5 and 10-year working employee list" << endl;
    }

void read_data(employee_info employee[], int num_employee, const string &filename){
    ifstream inFile(filename);
    if(!inFile.is_open()){
        cerr << "Error opening file" << endl;
        return;}
    string line;
    getline(inFile,line);
    for(int i = 0; i < num_employee; i++){
        if(getline(inFile,line)){
            stringstream ss (line);
            string ID, year;
            getline(ss, ID, ',');
            getline(ss, employee[i].name, ',');
            getline(ss, year, ',');
            getline(ss, employee[i].position, ',');

            employee[i].ID = stoi(ID);
            employee[i].year = stoi(year);
            employee[i].position = to_lower_case(employee[i].position);
            }}}

void export_long_term_employee_file(const employee_info employee[], int num_employee, const string &filename, int current_year){
    ofstream outFile(filename);
    if(!outFile.is_open()){
        cerr << "Error opening file" << endl;
        return;}
    else{
        for(int i = 0; i < num_employee; i++){
            int start_year = employee[i].year;
            if(current_year - start_year > 10){
                outFile << employee[i].ID << ","
                 << employee[i].name << ","
                 << employee[i].year << ","
                 << employee[i].position << ","
                 << employee[i].salary_coeff << endl;}}}
    outFile.close();}

int main(){
    int choice;
    employee_info employee[100];
    int num_employee;
    display_menu();
    cout << "Your selection: ";
    cin >> choice;
    switch(choice){
        case 1:
        cout << "Enter the number of employees:";
        cin >> num_employee;
        cout << "Fill in the employee information: " << endl;
        for (int i = 0; i < num_employee; ++ i ){
            cin.ignore();
            cout << "Enter employee " << i + 1 << " information: " << endl;
            cout << "Name: ";
            getline(cin, employee[i].name);
            cout << "ID: ";
            cin >> employee[i].ID;
            cin.ignore();
            cout << "Working starts from: ";
            cin >> employee[i].year;
            cin.ignore();
            cout << "Working position: ";
            cin >> employee[i].position;
            employee[i].position = to_lower_case(employee[i].position);
            cout << "Salary coefficient: ";
            cin >> employee[i].salary_coeff;}

            case 2:
                read_data(employee, num_employee, "employee_info.txt");
                break;
            case 3:
                int current_year = 2024;
                export_long_term_employee_file(employee, num_employee, "Long term employees.txt", current_year);}



    return 0;}
