/**
 * Author - Debag101
 * Date - 15 - 5 - 2023
 * Purpose - Finding the sum of only even numbers in a list
*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

//Creating protoypes of required methods
int even_sum(int*, int);
void displayArray(int*, int);

//Main execution starts here
int main(int argc, char const *argv[]) {
    int size;
    printf("\nHow many elements do you have ? => ");
    //Getting size of array
    scanf("%d",&size);
    //Declaring array of length size
    int numbers[size];
    //Getting the elements in the array
    for(int i = 0; i < size; ++i) {
        printf("\Enter the element at index %d => ",i);
        scanf("%d",&numbers[i]);
    }
    //Printing the user's array once
    printf("\nYour numbers are => ");
    displayArray(numbers,size);
    //Next printing result
    printf("\nSum of only even numbers are => ");
    printf("%d",even_sum(numbers,size));
    //Exit code
    printf("\nenter anything to exit ........");
    getch();
    system("cls");

    return 0;
}

int even_sum(int arr[], int size) {
    //Variable to hold the result of summation of even numbers
    int sum = 0;
    for(int i = 0; i < size; ++i) {
        //checking if number is even
        if(arr[i] % 2 == 0)
            sum += arr[i];
    }
    return sum;
}

//Simple method to nicely display an array
void displayArray(int arr[], int size) {
    printf("%c",'[');
    for(int i = 0; i < size; i++) {
        if(i == size - 1)
            printf("%d%c",arr[i],']');
        else 
            printf("%d%c",arr[i],',');
    }
}