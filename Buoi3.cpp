/*
//Ex 13:

#include<iostream>
using namespace std;
void find_max_value(double &n);

int main(){
    double largest_number;

    find_max_value(largest_number);
    return 0;}

void find_max_value(double &largest_number){
    int a_size;
    double num_arr[100];
    cout << "Enter the size of array: ";
    cin >> a_size;
    cout << "Enter the numbers: " ;
    for(int i = 0; i < a_size; i++){
        cin >> num_arr[i];
        largest_number = 0;
        if (largest_number < num_arr[i]){
            largest_number = num_arr[i];}}
        cout << largest_number << endl;}
*/
/*
// Ex 14:

#include<iostream>
using namespace std;
void swap_number(int &x, int &y){
    int temp = x;
    x = y;
    y = temp;
    cout << x << y;}

int main(){
    int first_num, second_num;
    cin >> first_num >> second_num;
    swap_number(first_num, second_num);
    return 0;}
*/
// Ex 15:

#include<iostream>
using namespace std;

void swap_number(int arr[], int &x);

int main() {
    int num_arr[100];
    int swap_num = 2;

    int n_size;
    cout << "Enter the size of the array: ";
    cin >> n_size;
    for (int i = 0; i < n_size; i++) {
        cin >> num_arr[i];}

    swap_number(num_arr, swap_num);
    for (int i = 0; i < n_size; i++) {
        cout << num_arr[0] << num_arr[1] << num_arr[2] << num_arr[3] << num_arr[i-4] << endl;}

    return 0;}

void swap_number(int arr[], int &swap_num) {
    int temp = swap_num;
    swap_num = arr[3];
    arr[3] = temp;
}
