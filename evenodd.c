#include <stdio.h>

int main(){
    int min = 10, max = 20;
    int len = max - min; // 10
    int array[len]; // {10, 11, 12, 13, 14, 15, 16, 17, 18, 19}

    // initialize the array so it contains all the numbers from min to max
    printf("initialising array from %d until %d: ", min, max);
    for(int index=0, val=min; index<len && val<max; index++, val++){
        array[index] = val;
        printf("%d, ", array[index]);
    }
    printf("\n");

    // Length of the even array will be half of the array length
    // if the length is even
    int len_even = len/2; // 5
    // length of the odd array will be half as well because
    // odd and even numbers are equally distributed in an array 
    int len_odd = len/2; // 5
    // even_numbers[5], odd_numbers[5]
    int even_numbers[len_even], odd_numbers[len_odd];
    // To keep track of the number of elements 
    // were added into the arrays above.
    int current_len_even=0, current_len_odd=0; 
    for(int i=0; i < len; i++){
        // check if the number is divisible by two
        if (array[i] % 2 == 0){
            // if it is add it even_numbers
            printf("%d is an even number\n", array[i]);
            printf("adding it to even_numbers[%d]\n", current_len_even);
            even_numbers[current_len_even] = array[i];
            current_len_even++; 
            printf("There are %d number of elements in even_numbers array\n", current_len_even);
        } else {
            // if not add it to odd_numbers
            printf("%d is an odd number\n", array[i]);
            printf("adding it to odd_numbers[%d]\n", current_len_odd);
            odd_numbers[current_len_odd] = array[i];
            current_len_odd++; 
            printf("There are %d number of elements in odd_numbers array\n", current_len_odd);
        }
    }

    printf("even numbers are: ");
    for(int i=0; i< len_even; i++){
        printf("%d, ", even_numbers[i]);
    }
    printf("\n");

    printf("odd numbers are: ");
    for(int i=0; i<len_odd; i++){
        printf("%d, ", odd_numbers[i]);
    }
    printf("\n");

    return 0;
}