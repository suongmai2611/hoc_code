#include <iostream>
#include <string>
#define MAX 1000
using namespace std;

/*
// Ex 8

    void enter_arr (int arr[], int &n);
    void classify_array (int arr[], int n);

    int main(){
        int my_array[MAX];
        int n_size;

        enter_arr (my_array, n_size);
        classify_array (my_array, n_size);

        return 0;}

    void enter_arr(int arr[], int &n){
        cout << "Enter the amount of numbers you want to classify: ";
        cin >> n;

        cout << "Enter the numbers you want to classify: " << endl;
        for (int i = 0; i < n; i++)
            cin >> arr[i];}

    void classify_array(int arr[], int n){
        for (int i = 0; i < n; i++)
            if(arr[i] % 2 ==0)
                cout << " The number " << arr[i] << " is even. " << endl;
            else
                cout << " The number " << arr[i] << " is odd. " << endl;}
*/

// Ex 9
/*
int main(){
    int my_arr[100];
    int n_size;
    int temp;

    cout << "Enter the amount of numbers you want to arrange: ";
    cin >> n_size;
    cout << "Enter the numbers you want to arrange: " << endl;

    for(int i = 0; i < n_size; i++){
        cin >> my_arr[i];}
    for(int i = 0; i < n_size; i++){
        for(int j = i+1; j < n_size; j++){
            if(my_arr[i] > my_arr[j]){
                int temp = my_arr[i];
                my_arr[i] = my_arr[j];
                my_arr[j] = temp;}}}
    cout << "The increasing order is: ";
    for (int i = 0; i < 5; i++){
        cout << my_arr[i] << " ";}

    cout << endl;

    for(int i = 0; i < n_size; i++){
        for(int j = i+1; j < n_size; j++){
            if(my_arr[i] < my_arr[j]){
                int temp = my_arr[j];
                my_arr[j] = my_arr[i];
                my_arr[i] = temp;}}}
    cout << "The decreasing order is: ";
    for (int i = 0; i < 5; i++){
        cout << my_arr[i] << " ";}

    return 0
*/

/*
// Ex 10
int main() {

	int number_arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	string chu_so[10] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten"};

	for (int i = 0; i < 10; i++) {
		cout << " The number " <<  number_arr[i] << " is written as: " << chu_so[i] << endl;}
	return 0;
	}
*/

/*
// Ex 11
int main() {

    int amount_of_number;
    cout << "Enter the amount of number to calculate: " << endl;
    cin >> amount_of_number;

    int sum = 0;
    for (int i = 0; i < amount_of_number; ++i) {
        int numbers;
        cout << "Enter the numbers: " << i+1 <<;
        cin >> numbers;
        sum += numbers;
    }

    cout << "The sum of numbers: " << sum << endl;

    return 0;
}
*/

/*
// Ex 12
int main(){

    int my_arr[100];
    int n_size;
    int sum = 0;

    cout << "Enter the amount of numbers you want to calculate: ";
    cin >> n_size;

    cout << "Enter the numbers you want to calculate: ";
    for(int i = 0; i < n_size; i++){
        cin >> my_arr[i];}
    for(int i = 0; i < n_size; i++){
        if(my_arr[i] % 2 != 0){
           sum += my_arr[i];}}
    cout << "The sum of odd numbers in the array is: " << sum << endl;
    return 0;}
*/
