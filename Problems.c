#include <stdio.h>
#include <math.h>

// Q1. Write a program to find area of a square...
int q1()
{
    float side;
    printf("Enter side of square:\n");
    scanf("%f", &side);
    printf("Area of square with given side is %f", side * side);
    return 0;
}

// Q2. Write a program to calculate area of a circle...
int q2()
{
    const float pi = 3.141592653589793238462643;
    float r;
    printf("Enter radius of circle:\n");
    scanf("%f", &r);
    printf("Area of circle with given radius is %f", pi * r * r);
    return 0;
}

// Q3. Write a program to calculate perimeter of rectangle...
int q3()
{
    float a, b;
    printf("Enter side a:\n");
    scanf("%f", &a);
    printf("Enter side b:\n");
    scanf("%f", &b);
    printf("Perimeter of rectangle with given sides is %f", 2 * (a + b));
    return 0;
}

// Q4. Write a program to calculate cube of a number...
int q4()
{
    float a;
    printf("Enter any number:\n");
    scanf("%f", &a);
    printf("Cube of given number is %f", a * a * a);
    return 0;
}

// Q5. Write a program to check if the number is divisible by 2 or not...
int q5()
{
    int a;
    printf("Enter any integer: ");
    scanf("%d", &a);
    if (a % 2 == 0)
    {
        printf("Given number is even number...");
    }
    else
    {
        printf("Given number is odd number...");
    }
    return 0;
}

// Q6. Use of logical operators...
int q6()
{
    printf("This is and operator : &&\n");
    printf("This is or operator : ||\n");
    printf("This is not operator : !\n");
    return 0;
}

// Q7. Write a function to print average of three numbers...
float q7()
{
    float a, b, c;
    printf("Enter a: ");
    scanf("%f", &a);
    printf("Enter b: ");
    scanf("%f", &b);
    printf("Enter c: ");
    scanf("%f", &c);
    return (a + b + c) / 3;
}

// Q8. Write a program to check if given character is number or not...
int q8()
{
    char a;
    int b, c;
    printf("Enter a: ");
    scanf("%c", &a);
    b = a == '1' || a == '2' || a == '3' || a == '4' || a == '5';
    c = a == '6' || a == '7' || a == '8' || a == '9' || a == '0';
    return b || c;
}

// Q9. Write a program to print the greatest number...

int q9()
{
    int a, b, c;
    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);
    printf("Enter c: ");
    scanf("%d", &c);
    if (a >= b && a >= c)
    {
        printf("%d", a);
    }
    else if (b >= a && b >= c)
    {
        printf("%d", b);
    }
    else
    {
        printf("%d", c);
    }
    return 0;
}

// Q10. Write a program to check if a student pass or fail...

int q10()
{
    int passing_marks = 35;
    int m;
    printf("Enter your marks: ");
    scanf("%d", &m);
    if (m >= passing_marks)
    {
        printf("You are passed...");
    }
    else
    {
        printf("You are fail...");
    }
}

// Q11. Write a program to check if a character entered by user is uppercase or not...

int q11()
{
    char a;
    printf("Enter a character: ");
    scanf("%c", &a);
    if (a >= 65 && a <= 91) // Here we can also write the condition as (a >= 'A' && a <= 'Z')
    {
        printf("Given character is uppercase...");
    }
    else if (a >= 'a' && a <= 'z')
    {
        printf("Given character is lowercase...");
    }
    else
    {
        printf("It's something other...");
    }
    return 0;
}

// Q12. Write a program to check if given number is Armstrong or not...
// First defining our own power function of integers...
int powi(int base, int exp)
{
    if (exp == 0)
    {
        return 1;
    }
    else if (exp % 2 == 0)
    {
        return powi(base, exp / 2) * powi(base, exp / 2);
    }
    else
    {
        return base * powi(base, exp / 2) * powi(base, exp / 2);
    }
}

int q12()
{
    int a, b, c, d = 0, num = 0;
    printf("Enter the number: ");
    scanf("%d", &a);
    b = a;
    while (a)
    {
        a = a / 10;
        d += 1;
    }
    a = b;
    while (a)
    {
        c = a % 10;
        num = num + powi(c, d);
        a = a / 10;
    }
    if (num == b)
    {
        printf("Given number is Armstrong number...");
    }
    else
    {
        printf("Given number is not Armstrong number...");
    }
    return 0;
}

// Q13. Write a program to print numbers for 0 to 10...

int q13(){
    for (int i=0;i<=10;i++){
        printf("%d\n",i);
    }
    return 0;
}

// Q14. Write a program to print numbers from 0 to n (n is given by user)...

int q14(){
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    int i=0;
    while(i<=n){
        printf("%d\n",i);
        i++;
    }
    return 0;
}

// Q15. Print the sum of first n natural numbers... and then print them in reverse...

int q15(){
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    int sum=0,i=1;
    while (i<=n)
    {
        sum += i;
        i++;
    }
    printf("Sum of n natural numbers is %d\n", sum);
    for (int i = n; i >= 1; i--)
    {
        printf("%d\n",i);
    }
    
    return 0;

}

// Q16. Print the table of number entered by user...

int q16(){
    
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    for(int i=1;i<=10;i++){
        printf("%d X %d = %d\n",n,i,n*i);
    }
    return 0;
}

// Q17. Keep taking input from user until it enters a number multiple of 7...
// We can also solve this question bu using break...
int q17(){
    int n;
    do
    {
        printf("Enter n: ");
        scanf("%d",&n);
        printf("%d\n",n);
    } while (n%7!=0);
    printf("Thank you!");
}

// Q18. Write a program to print fibonacci numbers by defining fibonacci function...

int fibonacci(int n);
int q18(){
    int n,z;
    printf("Enter n: ");
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        z = fibonacci(i);
        printf("%d\n",z);
    }
    
}

int fibonacci(int n){
    if(n==0)
    {
        return 0;
    }
    else if (n==1)
    {
        return 1;
    }
    else
    {
        return fibonacci(n-1) + fibonacci(n-2);
    }
    
}

// Q19. Write a program to swap two numbers...

void q19(int *a, int *b) // Call by reference...
{

    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
    return;

}

// Q20. Calculate sum, product and average of number and print it in main function...
// Call by reference...
void q20(int a,int b,int *sum,int *pro, int *avg){
    *sum = a + b;
    *pro = a * b;
    *avg = *sum/2; 
    return;
}

// Q21. Write a function to count the number of odd numbers in an array...

int q21(int array[], int n){
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if(array[i]%2 != 0){
            count++;
        }
    }
    return count;
    
}

// Q22. Write a function to reverse an array...

void q22(int *arr, int n)
{   int t;
    for (int i = 0; i < n/2; i++)
    {
        // t = arr[i];
        // arr[i] = arr[n-i-1];
        // arr[n-i-1] = t;
        // Can also be done by...
        
        t = *(arr+i);
        *(arr+i) = *(arr+n-i-1);
        *(arr+n-i-1) = t;
        
    }
    
}
void print_array(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
}

// Q23. Write a function to store first n fibonacci numbers...

int q23(int *arr, int n){
    int z;
    for (int i = 0; i < n; i++)
    {
        arr[i] = fibonacci(i);
    }
    // As we are storing the numbers we can also use already stored numbers...
    // Like arr[i] = arr[i-1] + arr[i-2];
}

int main()
{   
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    int array[n];
    q23(array,n);
    print_array(array,n);
    return 0;
}