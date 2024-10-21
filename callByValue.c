#include <stdio.h>
void Value(int num)  {
    num = 7;
    printf("Value of number: %d\n", num);
} 
int main()  {     
    int num = 5;     
    printf("Before value: %d\n", num);     
    Value(num);     
    printf("After value: %d\n", num);     
    return 0; 
}