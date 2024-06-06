#include<iostream>
#include<string>
using namespace std;

// Bai 16:

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
// Bai 17:

int string_length(const char* str) {
    int length = 0;
    while (*str != '\0') {
        length ++;
        str ++;}
    return length;
}

int main() {
    const int MAX_LENGTH = 100;
    char input[MAX_LENGTH];

    cout << "Enter the string: ";
    cin.getline(input, MAX_LENGTH);

    int length = string_length(input);

    cout << "The length of the string: " << length << endl;
    return 0;
}

