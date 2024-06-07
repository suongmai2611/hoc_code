#include <iostream>
using namespace std;
//Bai 18:
/*
int main() {
    int size;

    cout << "Enter the size of array: ";
    cin >> size;

    int *arr = new int[size];

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];}

    for (int i = 0; i < size; ++i) {
        cout << "arr[" << i << "] = " << arr[i] << endl;
    }

    delete[] arr;

    return 0;
}
*/

//Bai 19:

/* int main(){
    int sum = 0;
    int size;

    cout << "Enter the size of the array: ";
    cin >> size;

    int *arr = new int[size];

    for (int i = 0; i < size; i ++){
        cin >> arr[i];
        sum += arr[i];}
    cout << "The sum of the array: " << sum;
    delete[] arr;
    return 0;}
/*

//Bai 20:
/*void reverse_position(int *arr, int number){
    int *start = arr;
    int *end = arr + number - 1;

    while (start < end){
        int temp = *start;
        *start = *end;
        *end = temp;
        *start ++;
        *end --;}}

int main(){
    int number_in_arr;
    cout << "Enter the amount of elements you want to run the programme: ";
    cin >> number_in_arr;

    int *arr = new int[number_in_arr];

    cout << "Enter the elements you want to run the programme: " << endl;
    for(int i = 0; i < number_in_arr; i++){
        cin >> arr[i];}
    reverse_position(arr,number_in_arr);
    cout << "The reverse array is shown: ";
    for(int i = 0; i < number_in_arr; i++){
        cout << arr[i] << " ";}
    return 0;}
*/
