#include <iostream>
using namespace std;

// function prototypes
void reverse_arr(int *ptr, int size );
void print_arr(int arr[], int size);

int main() {
    int arr [] {50,40,30,20,10};
    int size = sizeof(arr)/(sizeof(arr[0])); // total bytes / size of one byte

    cout << "Initial array: ";
    print_arr(arr,size);

    reverse_arr(arr,size);

    cout << "Reversed array: ";
    print_arr(arr,size);

    return 0;
}


// functions definitions
void reverse_arr(int *arr, int size){
    int *start = arr; // address of first element
    int *end = arr + size - 1; // address of last element
    while (start < end){
        int temp = *start;
        *start = *end;
        *end = temp;
        // move pointer towards each other
        start++;
        end --;
    }
}

void print_arr(int arr[], int size){
    for(int i{0}; i < size; ++i){
        cout << arr[i] << ' ';
    }
    cout << endl;
}
