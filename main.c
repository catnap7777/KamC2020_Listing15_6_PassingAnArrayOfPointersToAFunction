//Listing 15.6 Passing an array of pointers to a function; page 374
#include <stdio.h>

void print_strings(char *p[], int n);

int main(void)
{
    //array of pointers pointing to each character array (set of characters/words)
    char *message[8] = {"Four","score","and","seven","years","ago,","our","forefathers"};

    print_strings(message, 8); //calling function with array of pointers as an argument
    return 0;

}

void print_strings(char *p[], int n)
{
    int count;
    printf("\n");

    for(count=0; count<n; count++)  // less than n -> passed in with array of pointers
    {
        printf("%s ", p[count]);
    }
    printf("\n\n");

}
