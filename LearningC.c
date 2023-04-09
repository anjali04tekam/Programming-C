#include <stdio.h> // Pre-processor directive or Header file...
/*
Multiple
Line
Comments*/
// Single Line Comments...
// ; is called terminator...

int main()
{
   printf("Hello World...\n");
   int age = 18;
   float pi = 3.142;
   char hash = '#';
   printf("Printing age %d\n", age); // %f and all that are called as format specifiers...
   printf("%c\n", hash);
   printf("%f\n", pi);
   printf("Enter your age...\n");
   scanf("%d", &age); // scanf("%format specifier", &variable address);
   printf("Printing age %d\n", age);
   return 0;
}

// Instructions and Operators...
/*
1. Type declaration instructions (Declare the variable before using it...) int d = 1, e; this is a valid statement...int d = 1, e = 2;
   this is a valid statement... Here d is given value 1 and e is declared... We can declare multiple variables at the same time by
   int a,b,c; ... You cannot use and declare in the same line eg. int a = b = c = 4; is not correct...
2. Arithmetic instructions (Operands and Operators...) Note:- Single variable on LHS of assignment operator...
   Type Conversions: int op int -> int (op is operation) int op float -> float and float op float -> float...
   if we do int a = (int) 1.999999; printf("%d",a); then it will print 1.
3. Control instructions... (Used to determine flow of programe...)
*/

// Conditional Statements...
/*
1. If we want to use single statement inside if, else if or else then we can write it without brackets...
   eg.
   if (condition)
      code1;
   else
      code2;
   -------- But a good programer will always keep consistency in his code thus use curly braces... --------
2. Nested if is allowed...
3. ------------------ Ternery Conditional Operator--------------------
   Short hand notation of if else if and else statement...
   Condition ? doSomething if True : doSomething if False;
   eg.
   age >= 18 ? printf("Adult") : printf("Infant");

4. ---------------- Switch ----------------------------
   syntax:
   switch(number/character){
      case C1: do something;
               break;
      case C2: do something;
               break;
      default: do something;
   }

   If we don't use the break statement then if one condition is true all the next commands will be executed...
   Hence break is not compulsory... ( Use it if you want to use it as a if else if else ladder... )
   If break is not used then the switch is on and thus all commands are executed...
   If you want to on only one switch then use break...
   Here order of cases doesn't matter... and nested switches are allowed...

*/

// Loops...
/*

1. for loop (i is called as iterator or counter variable...)
   // Increment operators...
   ++i -> Pre-increment operator
   i++ -> Post-increment operator
   // Decrement operators...
   --i -> Pre-decrement operator
   i-- -> Post-decrement operator
   
2. while loop
3. do while loop

      ---------------in C language break statement will break all the levels of loops even if it is used inside nested
       loop it will break all the loops above it...------------

*/


// Functions and Recursions...
/*
1. First we have to declare our function... (Function prototype...)
   If we are defining the function before main function then there is no need of declaring it...
   If you declare your function earlier then we can define it where-ever we want... even after the main function...
   syntax:
      void fun();
2. Second we have to define function...
      void fun(){
         printf("Hi");
      }
3. Third we have to call the function...   

      ------------- There is difference between Argument and Parameters...----------------
      Arguments are actual values passed when function is called (used to send values)...
      Parameters are formal values used in function declaration and definition (used to recieve values)...

------------Function can return only one value...------------
------------ Changes to parameters in functions don't change value in calling function because a copy of argument is passed to the function...---
*/

// Pointers... and Pointer to Pointers...
/*
syntax: Pointers

      int age = 22; normal variable
      int *ptr = &age; defining pointer, & indicates the address
      int _age = *ptr; * will give the value at address stored in ptr

      // To print address we use %p as format specifier which will give us address in hexadecimal form
      // We can also use %u to typecast above in un-signed integer...

      Here, &age is same as ptr
      Here, age is same as *ptr is same as *(&age)

syntax: Pointers to pointers

      int age = 22; normal variable
      int *ptr;
      ptr = &age; assigning pointer...
      int **pptr;
      pptr = &ptr; this is pointer which points to a pointer...
      ------ Above can also be written as int **pptr = &ptr;
*/

// Pointers in function call...
/*
1. Function call by value.(Normal calling and defining of function where arguments are copied and manuplated, original value doesn't change).
2. Function call by reference. (function is defined such that it takes address of variable as parameter and thus all changes occurs in original
   variable itself).

   syntax:

      int sq(int *n);
      int main(){
         int n=4;
         printf("%d", sq(&n));
         // also
         int *a=&n;
         printf("%d", sq(a));

      }
      int sq(int *n){ // it will take pointer as argument or address.
         *n = (*n) * (*n);
         return *n;
      }


      ----------------------------- Function only returns only one value but by using pointers we can give multiple values to main function...
*/

// Arrays...
/*
   syntax: type_of_data name_of_array[size_of_array]; 
      int marks[3];
      we can add numbers in array by doing this: marks[0] = 1;
      char name[10];
      float price[2];
   For input and output we use name of array[index]...
   If we initalize and declare array on same line then there is no need to write the size...
   For other than this there is need to declare the size beforehand...


   ----------- For pointers when we use arithmatic operators then address changes...-------------------
   eg.
      int *ptr = &xyz;
      ptr++; // This will make pointer point to next memory address... similarly for ptr-- it will point to previous memory location...
      The pointer will increment or decrement depending upon the size of the datatype...
      eg. if datatype is int then it will increase by 4 (for 64-bit) and if datatype is char it will increase by 1...  

   We can subtract and compare two pointers... 
   Subtraction will show by how much datatype(int) they differ...
   For taking difference between pointers only the pointers of same type can be subtracted...
   If different type of pointers are subtracted then compiler will throw an error...

   int array[10];
   Below both are same... ------------------ Array itself is a pointer... ------------------------
   int *ptr = array;  
   int *ptr = &array[0];

   For traversing through array we can do ptr++; inside a loop...
   Or inside a loop we can also do &array[i]; like this. This is same as (ptr+i); use any of it...

   We can take arrays as function argument...
   Declaring functions:
      void fun(int array[], int n); no need to specify the size of array but for using it inside we need to pass size as n...
      void fun(int *ptr, int n);
   Function call:
      fun(array,n);

   // Multi-dimentional arrays...

   int arr[][2] = {{1,2},{2,3}}; // we must specify all bounds except first for multidimentional array...
   arr[1][0] = 5; // is valid...

   Multi-dimentional arrays can also be passed into functions...
*/

// Strings...

/*
1.  While declaring a string we add null character ie. \0 at the end so that the compiler understands that the whole string makes a single word
    these are not individual characters...

    Fro declaring we use syntax:
      char name[] = {'P','r','a','t','h','a','m','\0'}; // If null character is not added then it will consider it as normal string array...
      ------------------- Same above can be initalized as ----------------------------
      char name[] = "Pratham";

      ----------- For characters we use single quotes and for string we use double quotes...-------------------------
*/

