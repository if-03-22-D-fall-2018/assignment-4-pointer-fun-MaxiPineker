#include <stdio.h>

void print_integers(int int_value, int* int_pointer);
void change_integers(int int_value, int* int_pointer);

  int main(int argc, char const *argv[]) {
    int int_value = 187;   //value of the int
    int* int_pointer = 42;   
    //we must declare the int_pointer with "&" and an other
    //variable
    print_integers(int_value, int_pointer);
    change_integers(int_value,  int_pointer);
    print_integers(int_value, int_pointer);
   return 0;
 }
 void print_integers(int int_value, int* int_pointer){
   printf("Got an integer value %d and an adress to an integer with value %d\n", int_value, *int_pointer);
 }
 void change_integers(int int_value, int* int_pointer){
 int_value = 361;
 *int_pointer = int_value;
 }
