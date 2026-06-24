#include <iostream>
#include <cmath>
#include <algorithm> 
#include <cstring>
#include <fstream>  

using namespace std;


void lab1_program1() {
cout << "Hello, this is Program 1 of Lab Manual 1.\n";
cout <<" ― Welcome to PF lab manuall_";
}

void lab1_program2() {
    cout << "Hello, this is Program 2 of Lab Manual1\n";
    int num1 = 10;
    int num2 = 20;
    int num3 = 30;

    float decimal1 = 10.5;
    float decimal2 = 20.5;
    float decimal3 = 30.5;

    cout << "Integer Values: " << num1 << ", " << num2 << ", " << num3 << endl;
    cout << "Float Values: " << decimal1 << ", " << decimal2 << ", " << decimal3 << endl;}

void lab1_program3(){
     cout << "Hello, this is Program 3 ofLab Manual1\n";
     int a, b;
     a= 10;
     b= 4;
    a= b;
    b=7; 
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
}
void lab1_program4(){
    cout << "Hello, this is Program 4 of Lab Manual 1.\n";
    for (int i = 0; i < 10; i++) {
        cout << "**\t**" << endl;
    }
    cout << endl;
    cout << "**\t**" << endl;
    for (int i = 0; i < 3; i++) {
        cout << "###############################" << endl;
    }
}
void lab1_program5(){
    cout << "Hello, this is Program 5 of Lab Manual 1.\n";
    cout << "$***************$ $***************$" << endl;
    cout << endl;
    cout << "$*   Welcome to                         *$" << endl;
    cout << "$*   School of Engineering              *$" << endl;
    cout << "$*   Islamabad.                         *$" << endl;
    cout << endl;
    cout << "$***************$ $***************$" << endl;
}
void lab1_program6(){
    cout << "Hello, this is Program 6 of Lab Manual 1.\n";
    const double pi = 3.1416; 
    double radius, area;
    cout << "Enter the radius of the sphere: ";
    cin >> radius;
    area = 4 * pi * radius * radius;
    cout << "The area of the sphere is: " << area << endl;
}
void lab1_program7(){
    cout<<"hello this is program 7 of lab manuall1";
    int a;
    char b;
    float c;
    long int d;
    bool e;
    unsigned int j;
    unsigned long k;

    cout << "Size of int: " << sizeof(a) << " bytes" << endl;
    cout << "Size of char: " << sizeof(b) << " bytes" << endl;
    cout << "Size of float: " << sizeof(c) << " bytes" << endl;
    cout << "Size of long int: " << sizeof(d) << " bytes" << endl;
    cout << "Size of bool: " << sizeof(e) << " bytes" << endl;
    cout << "Size of unsigned int: " << sizeof(j) << " bytes" << endl;
    cout << "Size of unsigned long: " << sizeof(k) << " bytes" << endl;     
}


void lab2_program1() {
    cout << "Hello, this is Program 1 of Lab Manual 2.\n";
    int num1, num2, num3;
    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;
    if (num1 >= num2 && num1 >= num3) {
        cout << "The largest number is " << num1 << endl;
    }
    else if (num2 >= num1 && num2 >= num3) {
        cout << "The largest number is " << num2 << endl;
    }
    else {
        cout << "The largest number is " << num3 << endl;
    }
}
void lab2_program2() {
    cout << "Hello, this is Program 2 of Lab Manual 2.\n";
    int grade;
    cout << "Enter the grade of the student: ";
    cin >> grade;
    if (grade >= 90) {
        cout << "Grade A" << endl;
    }
    else {
        if (grade >= 80) {
            cout << "Grade B" << endl;
        }
        else {
            if (grade >= 70) {
                cout << "Grade C" << endl;
            }
            else {
                if (grade >= 60) {
                    cout << "Grade D" << endl;
                }
                else {
                    cout << "Grade F" << endl;
                }
            }
        }
    }
}
void lab2_program3() {
    cout << "Hello, this is Program 3 of Lab Manual 2.\n";
    char ch;
    string vowels = "aeiouAEIOU";  
    cout << "Enter a character: ";
    cin >> ch;
    if (vowels.find(ch) != string::npos) {
        cout << "It is a vowel" << endl;
    } 
    else {
        cout << "It is a consonant" << endl;
    }
}
void lab2_program4() {
    cout << "Hello, this is Program 4 of Lab Manual 2.\n";
    int num;
    cout << "Enter an integer: ";
    cin >> num;
    if (num % 2 == 0) {
        cout << "The number " << num << " is EVEN." << endl;
    } else {
        cout << "The number " << num << " is ODD." << endl;
    }

}

void lab2_program5() {
    cout << "Hello, this is Program 5 of Lab Manual 2.\n";
       char ch;
    cout << "Enter a character: ";
    cin >> ch;
    if (ch >= 'A' && ch <= 'Z') {
        cout << "It is a CAPITAL letter." << endl;
    }
    else {
        if (ch >= 'a' && ch <= 'z') {
            cout << "It is a Small letter." << endl;
        }
        else {
            cout << "It is not a letter." << endl;
        }
    }
}
void lab2_program6() {
    cout << "Hello, this is Program 6 of Lab Manual 2.\n";
    float temperature;
    cout << "Water State Menu:\n";
    cout << "1. Temperature less than 0: ICE\n";
    cout << "2. Temperature greater than 0 and less than 100: WATER\n";
    cout << "3. Temperature greater than 100: STEAM\n";
    cout << "------------------------------------\n";
    cout << "Enter the temperature: ";
    cin >> temperature;
    if (temperature < 0) {
        cout << "The form of water is ICE.\n";
    }
    else if (temperature >= 0 && temperature < 100) {
        cout << "The form of water is WATER.\n";
    }
    else {
        cout << "The form of water is STEAM.\n";
    }
}
void lab3_program1() {
    cout << "Hello, this is Program 1 of Lab Manual 3.\n";
     int choice;
    
    cout << "Menu Options:\n";
    cout << "1 --> To Find Largest Number Among Three Variables.\n";
    cout << "2 --> To Find ODD or EVEN.\n";
    cout << "3 --> To Find Condition of Water.\n";
    cout << "4 --> To Find Grade of Student.\n";
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
        case 1: {
            int a, b, c;
            cout << "Enter three numbers: ";
            cin >> a >> b >> c;

            if (a >= b && a >= c)
                cout << "The largest number is: " << a << endl;
            else if (b >= a && b >= c)
                cout << "The largest number is: " << b << endl;
            else
                cout << "The largest number is: " << c << endl;
            break;
        }

        case 2: {
            int num;
            cout << "Enter a number: ";
            cin >> num;

            if (num % 2 == 0)
                cout << "The number " << num << " is EVEN.\n";
            else
                cout << "The number " << num << " is ODD.\n";
            break;
        }

        case 3: {
            float temp;
            cout << "Enter the temperature: ";
            cin >> temp;

            if (temp < 0)
                cout << "The form of water is ICE.\n";
            else if (temp >= 0 && temp < 100)
                cout << "The form of water is WATER.\n";
            else
                cout << "The form of water is STEAM.\n";
            break;
        }

        case 4: {
            int grade;
            cout << "Enter the grade of the student: ";
            cin >> grade;

            if (grade >= 90)
                cout << "Grade A\n";
            else if (grade >= 80)
                cout << "Grade B\n";
            else if (grade >= 70)
                cout << "Grade C\n";
            else if (grade >= 60)
                cout << "Grade D\n";
            else
                cout << "Grade F\n";
            break;
        }
        default:
            cout << "Invalid choice! Please enter a valid option.\n";
    }
}
void lab4_program1() {
    cout << "Hello, this is Program 1 of Lab Manual 4.\n";
      int sum = 0;
    for (int i = 1; i <= 10; i++) {
        sum += i;
    }
    cout << "The sum of integers from 1 to 10 is: " << sum << endl;
}
void lab4_program2() {
    cout << "Hello, this is Program 2 of Lab Manual 4.\n";
    int sum = 0, number = 1;
    while (number <= 1000) {
        sum = sum + number; 
        number = number + 1; 
    }
    cout << "The sum of the first 1000 integers starting from 1 is: " << sum << endl;
}
void lab4_program3() {
    cout << "Hello, this is Program 3 of Lab Manual 4.\n";
    int counter = 1;
    while (counter <= 5) { 
        cout << "Counter: " << counter << endl; 
        counter++;
    }
    cout << "While loop finished.\n"; 
}
void lab4_program4() {
    cout << "Hello, this is Program 4 of Lab Manual 4.\n";
   int number, factorial = 1;
    cout << "Enter the number to calculate its factorial: ";
    cin >> number;
    while (number >= 1) {
        factorial = factorial * number;  
        number = number - 1;            
    }
    cout << "Factorial is: " << factorial << endl; 
}
void lab4_program5() {
    cout << "Hello, this is Program 5 of Lab Manual 4.\n";
     int counter;
    for (counter = 0; counter < 10; counter = counter + 1) {
        cout << counter;
}
}
void lab4_program6() {
    cout << "Hello, this is Program 6 of Lab Manual 4.\n";
    int counter = 1;
    while (counter <= 10) {
        cout << "2^" << counter << " = " << pow(2, counter) << endl;
        counter++;
    }
}
void lab4_program7() {
    cout << "Hello, this is Program 7 of Lab Manual 4.\n";
    for (int i = 1; i <= 10000; i++) {
        cout << i << " ";
    }
}

void lab4_program8() {
    cout << "Hello, this is Program 8 of Lab Manual 4.\n";
    for (int i = 1; i <= 10000; i++) {
        cout << i << " ";
    }
}

void lab4_program9() {
    cout << "Hello, this is Program 9 of Lab Manual 4.\n";
    int number;
    int factorial = 1;  
    cout << "Enter a number to calculate its factorial: ";
    cin >> number;
    if (number < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
    } else {
        for (int i = 1; i <= number; i++) {
            factorial *= i; 
        }
        cout << "The factorial of " << number << " is " << factorial << endl;
    }
}
void lab4_program10() {
    cout << "Hello, this is Program 10 of Lab Manual 4.\n";
    int number; 
    int factorial = 1;
    cout << "Enter a number to calculate its factorial: ";
    cin >> number;   
    if (number < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
    } else {
        for (int i = 1; i <= number; i++) {
            factorial *= i;
        }
        cout << "The factorial of " << number << " is " << factorial << endl;
    }
}
void lab4_program11() {
    cout << "Hello, this is Program 11 of Lab Manual 4.\n";
     int number, sum = 0, temp, remainder, digits = 0;
    cout << "Enter a number to check if it is Armstrong: ";
    cin >> number;
    temp = number;
    while (temp != 0) {
        temp /= 10; 
        digits++;
    }
    temp = number; 
    while (temp != 0) {
        remainder = temp % 10; 
        sum += pow(remainder, digits);  
        temp /= 10;
    }
    if (sum == number) {
        cout << number << " is an Armstrong number." << endl;
    } else {
        cout << number << " is not an Armstrong number." << endl;
    }
}

void lab4_program12() {
    cout << "Hello, this is Program 12 of Lab Manual 4.\n";
     int number, largest = 0;
    cout << "Enter integers to find the largest number (enter 0 to stop):\n";
    while (true) {
        cout << "Enter a number: ";
        cin >> number;
        if (number == 0) {
            break;
        }
        if (number > largest) {
            largest = number; 
        }
    }
    cout << "The largest number entered is: " << largest << endl;
}
void lab4_program13() {
    cout << "Hello, this is Program 13 of Lab Manual 4.\n";
    for (int i = 1; i <= 12; i++) {
        for (int j = 1; j <= 12; j++) {
            cout << i * j << "\t";
        }
        cout << endl;
    }
}

void lab4_program14() {
    cout << "Hello, this is Program 14 of Lab Manual 4.\n";
     int i = 1, j, k;

    cout << "Series No.1\t\tSeries No.2\t\tSeries No.3\n";
    while (i <= 4) {
        j = 1;
        while (j <= i) {
            cout << j << " ";
            j++;
        }
        cout << "\t\t";
        j = 1;
        while (j <= i) {
            cout << i << " ";
            j++;
        }
        cout << "\t\t";

        k = i * (i - 1) / 2 + 1; 
        j = 1;
        while (j <= i) {
            cout << k << " ";
            k++;
            j++;
        }
        cout << endl;
        i++;
    }
}
void lab5_program1() {
    cout << "Hello, this is Program 1 of Lab Manual 5.\n";
    cout<<"do-while loop syntaxdo{statements ;}while ( condition ) ;";
}

void lab5_program2() {
    cout << "Hello, this is Program 2 of Lab Manual 5.\n";
    int number, sum = 0, i = 1;
    cout << "Enter a number: ";
    cin >> number;
    do {
        sum += i; 
        i++;  
    } while (i <= number); 
    cout << "The sum from 1 to " << number << " is: " << sum << endl;
}
void lab5_program3() {
    cout << "Hello, this is Program 3 of Lab Manual 5.\n";
     int number;
    char choice;
    do {
        cout << "Enter a number to calculate its factorial: ";
        cin >> number;
        if (number < 0) {
            cout << "Factorial is not defined for negative numbers." << endl;
        } else {
            long long factorial = 1;
            for (int i = 1; i <= number; i++) {
                factorial *= i;  
            }
            cout << "The factorial of " << number << " is: " << factorial << endl;
        }
        cout << "Do you want to calculate another factorial? (y/n): ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');  
    cout << "Thank you for using the factorial calculator!" << endl;
}
void lab5_program4() {
    cout << "Hello, this is Program 4 of Lab Manual 5.\n";
      float num1, num2, result;
    char operation;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter an operator (+, -, *, /): ";
    cin >> operation;
    cout << "Enter second number: ";
    cin >> num2;
    switch (operation) {
        case '+':
            result = num1 + num2;
            cout << "Result: " << num1 << " + " << num2 << " = " << result << endl;
            break;
        case '-':
            result = num1 - num2;
            cout << "Result: " << num1 << " - " << num2 << " = " << result << endl;
            break;
        case '*':
            result = num1 * num2;
            cout << "Result: " << num1 << " * " << num2 << " = " << result << endl;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                cout << "Result: " << num1 << " / " << num2 << " = " << result << endl;
            } else {
                cout << "Error! Division by zero." << endl;
            }
            break;

        default:
            cout << "Error! Invalid operator." << endl;
            break;
    }
}
void lab6_program1() {
    cout << "Hello, this is Program 1 of Lab Manual 6.\n";
    for (int x = 0; x <= 9; x++) {
        cout << "\t" << x << "\t" << sqrt(x) << endl;
    }
}
void lab6_program2() {
    cout << "Hello, this is Program 2 of Lab Manual 6.\n";
    cout<<"this is a Manual typed question6.2 Write types of Function";
}
void lab6_program3() {
    cout << "Hello, this is Program 3 of Lab Manual 6.\n";
        cout<<"this is a Manual typed question6.3 Write Syntax Of function (Prototype, call & body of function)";
}
void sort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        // Bubble sort loop
        for (int j = 0; j < size - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
void lab6_program4() {
    cout << "Hello, this is Program 9 of Lab Manual 7.\n";
    int arr[100];
    int size = 0;

    cout << "Enter elements to be sorted (enter 0 to stop):\n";
    while (true) {
        cout << "Enter a number: ";
        cin >> arr[size];

        if (arr[size] == 0) {
            break;
        }

        size++;
        if (size >= 100) { 
            cout << "Warning: Maximum array size reached.\n";
            break;
        }
    }
    sort(arr, arr + size);

    cout << "Sorted Array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void calculateAverage(int num1, int num2, int num3) {
    int sum = num1 + num2 + num3;
    double average = sum / 3.0;  
    cout << "The average of " << num1 << ", " << num2 << ", and " << num3 << " is: " << average << endl;
}
int cube(int n) {
    return n * n * n;  // Return the cube of the number
}
void lab6_program5() {
    cout << "Hello, this is Program 5 of Lab Manual 6.\n";
    int num1, num2, num3;
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    cout << "Enter the third number: ";
    cin >> num3;
    calculateAverage(num1, num2, num3);
}
void lab6_program6() {
    cout << "Hello, this is Program 6 of Lab Manual 6.\n";
    int num;
    while (true) {
        cout << "Enter a number (enter 0 to stop): ";
        cin >> num;
        if (num == 0) {
            break;  
        }
        cout << "The cube of " << num << " is: " << cube(num) << endl;
    }
}
double area(double length, double width) {
    return length * width;
}
bool isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}
void printDate(int month, int day, int year) {
    if (month < 1 || month > 12 || day < 1 || day > 31 || year < 0) {
        cout << "Must enter a valid date.\n";
        return;
    }    
    string monthName;
    switch (month) {
        case 1: monthName = "January"; break;
        case 2: monthName = "February"; break;
        case 3: monthName = "March"; break;
        case 4: monthName = "April"; break;
        case 5: monthName = "May"; break;
        case 6: monthName = "June"; break;
        case 7: monthName = "July"; break;
        case 8: monthName = "August"; break;
        case 9: monthName = "September"; break;
        case 10: monthName = "October"; break;
        case 11: monthName = "November"; break;
        case 12: monthName = "December"; break;
        default: monthName = "Invalid"; break;
    }
    cout << "The entered date is: " << monthName << " " << day << ", " << year << endl;
    if (isLeapYear(year)) {
        cout << "The year " << year << " is a leap year.\n";
    } else {
        cout << "The year " << year << " is not a leap year.\n";
    }
}
void lab6_program7() {
    cout << "Hello, this is Program 7 of Lab Manual 6.\n";
    double length, width;
    cout << "Enter the length of the rectangle: ";
    cin >> length;
    cout << "Enter the width of the rectangle: ";
    cin >> width;
    double result = area(length, width);
    cout << "The area of the rectangle is: " << result << endl;
}
void lab6_program8() {
    cout << "Hello, this is Program 8 of Lab Manual 6.\n";
    int month, day, year;
    while (true) {
        cout << "Enter month (1-12), day (1-31), and year (enter 0 for month to stop):\n";
        cout << "Month: ";
        cin >> month;
        if (month == 0) {
            break;  
        }
        cout << "Day: ";
        cin >> day;
        cout << "Year: ";
        cin >> year;
        printDate(month, day, year);
    }
}
void lab6_program9() {
    cout << "Hello, this is Program 9 of Lab Manual 6.\n";   
    int year;
    while (true) {
        cout << "Enter a year (enter 0 to stop): ";
        cin >> year;
        if (year == 0) {
            break;
        }
        if (isLeapYear(year)) {
            cout << year << " is a leap year.\n";
        } else {
            cout << year << " is not a leap year.\n";
        }
    }
}
void findLargest(int a, int b) {
    if (a == b) {
        cout << "A and B are the same: " << a << " = " << b << endl;
    }
    else if (a < b) {
        cout << "A is less than B: " << a << " < " << b << endl;
    }
    else {
        cout << "A is greater than B: " << a << " > " << b << endl;
    }
}
void lab6_program10() {
    cout << "Hello, this is Program 10 of Lab Manual 6.\n";
    int num1, num2;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    findLargest(num1, num2);
}

void printTempOpinion(int temperature) {
    if (temperature < 10) {
        cout << "Cold" << endl;
    } else if (temperature >= 20 && temperature <= 30) {
        cout << "OK" << endl;
    } else if (temperature > 30) {
        cout << "Hot" << endl;
    } else {
        cout << "Invalid Temperature" << endl;
    }
}

void lab6_program11() {
    cout << "Hello, this is Program 11 of Lab Manual 6.\n";
    int temp;
    cout << "Enter the temperature: ";
    cin >> temp;
    printTempOpinion(temp);
}


void byValue(int x) {
    x = x + 10;
    cout << "Inside byValue function, x = " << x << endl;
}
void lab6_program12() {
    cout << "Hello, this is Program 12 of Lab Manual 6.\n";
    int num = 5;
    cout << "Before calling byValue, num = " << num << endl;
    byValue(num); 
    cout << "After calling byValue, num = " << num << endl; // num remains unchanged
}
void swapValues(float &a, float &b) {
    float temp = a;
    a = b;
    b = temp;
}
void lab6_program13() {
    cout << "Hello, this is Program 13 of Lab Manual 6.\n";   
    float a, b;
    cout << "Enter the value of a: ";
    cin >> a;
    cout << "Enter the value of b: ";
    cin >> b;    
    cout << "\nBefore swap:\n";
    cout << "a = " << a << "\nb = " << b << endl;    
    swapValues(a, b);    
    cout << "\nAfter swap:\n";
    cout << "a = " << a << "\nb = " << b << endl;
}
int add(int a, int b) {
    return a + b;
}
float add(float a, float b) {
    return a + b;
}
int add(int a, int b, int c) {
    return a + b + c;
}
void lab6_program14() {
    cout << "Hello, this is Program 14 of Lab Manual 6.\n";    
    int intResult = add(3, 4); 
    float floatResult = add(3.5f, 4.5f); 
    int intSum = add(1, 2, 3); 
        cout << "Sum of 3 and 4 (int): " << intResult << endl;
    cout << "Sum of 3.5 and 4.5 (float): " << floatResult << endl;
    cout << "Sum of 1, 2, and 3 (int): " << intSum << endl;
}
long long factorial(int n) {
    if (n < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
        return -1; 
    }
    long long fact = 1;
    for (int i = 1; i <= n; ++i) {
        fact *= i; 
    }
    return fact;
}

void lab6_program15() {
    cout << "Hello, this is Program 15 of Lab Manual 6.\n";
        for (int i = -1; i <= 10; ++i) {
        cout << "Factorial of " << i << " is: ";
        long long result = factorial(i);
        if (result != -1) {
            cout << result << endl;
        }
    }
}
void lab7_program1() {
    cout << "Hello, this is Program 1 of Lab Manual 7.\n";
    cout<<"They are special kind of data type"; cout<<" In C++ each array has";	cout<<" name";  cout<<"	data type"; cout<<"	size"; 	cout<<" They occupy continuous area of memory ";
}

void lab7_program2() {
    cout << "Hello, this is Program 2 of Lab Manual 7.\n";
     int ages[5];  
    cout << "Enter the ages of 5 persons:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Enter age of person " << i + 1 << ": ";
        cin >> ages[i]; 
    }
    cout << "\nThe ages of the 5 persons are:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Person " << i + 1 << ": " << ages[i] << " years old" << endl;
    }
}

void lab7_program3() {
    cout << "Hello, this is Program 3 of Lab Manual 7.\n";
     int array1[10], array2[10];  

    cout << "Enter 10 elements for the first array:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << "Element " << i + 1 << ": ";
        cin >> array1[i]; 
    }

    for (int i = 0; i < 10; i++) {
        array2[i] = array1[i]; 
    }

    cout << "\nThe elements of the second array are:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << "Element " << i + 1 << ": " << array2[i] << endl;
    }
}

void lab7_program4() {
    cout << "Hello, this is Program 4 of Lab Manual 7.\n";
      int array1[10], array2[10], result[10]; 

    cout << "Enter 10 elements for the first array:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << "Element " << i + 1 << ": ";
        cin >> array1[i]; 
    }
    cout << "Enter 10 elements for the second array:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << "Element " << i + 1 << ": ";
        cin >> array2[i]; 
    }
    for (int i = 0; i < 10; i++) {
        result[i] = array1[i] + array2[i];  
    }
    cout << "\nThe result of adding the two arrays is:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << "Element " << i + 1 << ": " << result[i] << endl;
    }
}

void lab7_program5() {
    cout << "Hello, this is Program 5 of Lab Manual 7.\n";
    int arr[10], searchValue, index = -1;

    cout << "Enter 10 elements for the array:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << "Element " << i + 1 << ": ";
        cin >> arr[i];  
    }
    cout << "\nEnter the number to search: ";
    cin >> searchValue;
    for (int i = 0; i < 10; i++) {
        if (arr[i] == searchValue) {
            index = i;  
            break;
        }
    }
    if (index != -1) {
        cout << "Number Found at position " << index + 1 << endl;  
    } else {
        cout << "Number Not Found" << endl;  
    }

}
void lab7_program6() {
    cout << "Hello, this is Program 7 of Lab Manual 7.\n";   
    int n, searchValue;
    bool found = false; 
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    int arr[n]; 
    cout << "Enter " << n << " values for the array:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    } 
    cout << "Enter the number to search for: ";
    cin >> searchValue;
    for (int i = 0; i < n; i++) {
        if (arr[i] == searchValue) {
            found = true; 
            cout << "Number Found at index " << i << ".\n";
            break; 
        }
    }
    if (!found) {
        cout << "Number Not Found.\n"; 
    }
}

    


void lab7_program7() {
    cout << "Hello, this is Program 7 of Lab Manual 7.\n";    
    string word;
    cout << "Enter a word: ";
    cin >> word;
        string original = word;
    transform(original.begin(), original.end(), original.begin(), ::tolower);
    string reversed = word;
    reverse(reversed.begin(), reversed.end());
        if (original == reversed) {
        cout << "The word is a palindrome.\n";
    } else {
        cout << "The word is not a palindrome.\n";
    }


}
double calculateAverage(int arr[], int size) {
    double sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum / size;
}

void lab7_program8() {
    cout << "Hello, this is Program 8 of Lab Manual 7.\n";
    int arr[10]; 
    int i = 0;
        cout << "Enter 10 numbers:\n";
    while (i < 10) {
        cout << "Enter number " << i + 1 << ": ";
        cin >> arr[i];
        i++;
    }
    double avg = calculateAverage(arr, 10);
    cout << "The average of the entered numbers is: " << avg << endl;
}

void sortt(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void lab7_program9() {
    cout << "Hello, this is Program 9 of Lab Manual 7.\n";
    int arr[100];  
    int size = 0;
    cout << "Enter elements to be sorted (enter 0 to stop):\n";
        while (true) {
        cout << "Enter a number: ";
        cin >> arr[size];
        if (arr[size] == 0) {
            break;  
        }
        size++;  
    }
        sort(arr, size);
        cout << "Sorted Array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}


void lab7_program10() {
    cout << "Hello, this is Program 10 of Lab Manual 7.\n";
     char name[100];  

    cout << "Enter your name: ";
    cin.getline(name, 100); 

    cout << "Hello, " << name << "!" << endl;
}

void lab7_program11() {
    cout << "Hello, this is Program 11 of Lab Manual 7.\n";
    char name[100]; 
    cout << "Enter your name: ";
    cin.getline(name, 100);  
    cout << "Hello, ";
    puts(name);  
}
void lab7_program12() {
    cout << "Hello, this is Program 12 of Lab Manual 7.\n";
    char name[100]; 
    cout << "Enter your name: ";
    cin.getline(name, 100); 
    cout << "Hello, ";
    puts(name);  
}
void lab7_program13() {
    cout << "Hello, this is Program 13 of Lab Manual 7.\n";
     char source[] = "Hello";
    char destination[100]; 

    strcpy(destination, source);

    cout << "Source string: " << source << endl;
    cout << "Destination string after copy: " << destination << endl;

    char string1[] = "apple";
    char string2[] = "banana";

    int result = strcmp(string1, string2);

    if (result == 0) {
        cout << "The strings are identical." << endl;
    } else if (result < 0) {
        cout << string1 << " is lexicographically smaller than " << string2 << endl;
    } else {
        cout << string1 << " is lexicographically greater than " << string2 << endl;
    }
}

void lab7_program14() {
    cout << "Hello, this is Program 14 of Lab Manual 7.\n";
    
}

void lab8_program1() {
    cout << "Hello, this is Program 1 of Lab Manual 8.\n";
     const int districts = 4;
    const int months = 12;   
    double sales[districts][months];  

    cout << "Enter the sales data for each district and month:\n";
    for (int i = 0; i < districts; i++) {
        cout << "District " << i + 1 << ":\n";
        for (int j = 0; j < months; j++) {
            cout << "Month " << j + 1 << ": ";
            cin >> sales[i][j];
        }
        cout << endl;
    }

    cout << "\nSales data (Districts vs. Months):\n";
    cout << "---------------------------------------------------------\n";
    cout << "District \\ Month | ";
    for (int j = 0; j < months; j++) {
        cout << "Month " << j + 1 << "\t";
    }
    cout << endl;

    cout << "---------------------------------------------------------\n";
    for (int i = 0; i < districts; i++) {
        cout << "District " << i + 1 << "\t| ";
        for (int j = 0; j < months; j++) {
            cout << sales[i][j] << "\t\t";
        }
        cout << endl;
    }

}

void lab8_program2() {
    cout << "Hello, this is Program 2 of Lab Manual 8.\n";
    const int rows = 3, cols = 3;
    int matrix1[rows][cols], matrix2[rows][cols], result[rows][cols];

    cout << "Enter elements for Matrix 1: \n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "Element [" << i + 1 << "][" << j + 1 << "]: ";
            cin >> matrix1[i][j];
        }
    }

    cout << "\nEnter elements for Matrix 2: \n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "Element [" << i + 1 << "][" << j + 1 << "]: ";
            cin >> matrix2[i][j];
        }
    }

    cout << "\nMatrix 1: \n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << matrix1[i][j] << "\t";
        }
        cout << endl;
    }

    cout << "\nMatrix 2: \n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << matrix2[i][j] << "\t";
        }
        cout << endl;
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    cout << "\nResult of Matrix 1 + Matrix 2: \n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << result[i][j] << "\t";
        }
        cout << endl;
    }
}

void lab8_program3() {
    cout << "Hello, this is Program 3 of Lab Manual 8.\n";
    const int rows = 3, cols = 3; 
    int matrix[rows][cols];
    cout << "Enter elements for a " << rows << "x" << cols << " matrix:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "Element [" << i + 1 << "][" << j + 1 << "]: ";
            cin >> matrix[i][j];
        }
    }

    cout << "\nMatrix in reverse column order:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = cols - 1; j >= 0; j--) {
            cout << matrix[i][j] << "\t";  
        }
        cout << endl;
    }
}

void lab8_program4() {
    cout << "Hello, this is Program 4 of Lab Manual 8.\n";
      const int rows = 3, cols = 3;  
    int matrix[rows][cols], transpose[cols][rows];

    cout << "Enter elements for a " << rows << "x" << cols << " matrix:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "Element [" << i + 1 << "][" << j + 1 << "]: ";
            cin >> matrix[i][j];
        }
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }

    cout << "\nOriginal Matrix:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }

    cout << "\nTranspose of the Matrix:\n";
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            cout << transpose[i][j] << "\t";
        }
        cout << endl;
    }

}

void lab8_program5() {
    cout << "Hello, this is Program 5 of Lab Manual 8.\n";
    const int num_agents = 5;  
    int agentCodes[num_agents], expenses[num_agents];
    
    cout << "Enter Agent Codes and their Traveling Expenses:\n";
    for (int i = 0; i < num_agents; i++) {
        cout << "Enter Agent Code for agent " << i + 1 << ": ";
        cin >> agentCodes[i];
        cout << "Enter Traveling Expense for agent " << i + 1 << ": Rs. ";
        cin >> expenses[i];
    }

    int max_expense = expenses[0];
    int agent_with_max_expense = agentCodes[0];
    
    for (int i = 1; i < num_agents; i++) {
        if (expenses[i] > max_expense) {
            max_expense = expenses[i];
            agent_with_max_expense = agentCodes[i];
        }
    }
    cout << "\nAgent with the highest traveling expense:\n";
    cout << "Agent Code: " << agent_with_max_expense << endl;
    cout << "Traveling Expense: Rs. " << max_expense << endl;
}

    

void lab9_program1() {
    cout << "Hello, this is Program 1 of Lab Manual 9.\n";
    cout<<"	A Structure is a collection of simple variables. The Variables in a structure can be of different types. Some can be int, some can be float, and so on. 	The data items in a structure are called the members of the structure. The structure is a kind of blue print specifying what information is necessary for a single part. ";
}

void lab9_program2() {
    cout << "Hello, this is Program 2 of Lab Manual 9.\n";
    struct part {
    int modelnumber;
    int partnumber;
    float cost;
};

    part part1, part2;

    part1.modelnumber = 1111;
    part1.partnumber = 111;
    part1.cost = 111.11;
    part2.modelnumber = 222;
    part2.partnumber = 2222;
    part2.cost = 222.222;
    cout << "\nModel of Part1 = " << part1.modelnumber;
    cout << "\nPart of Part1 = " << part1.partnumber;
    cout << "\nCost of Part1 = " << part1.cost << endl;
    cout << "\nModel of Part2 = " << part2.modelnumber;
    cout << "\nPart of Part2 = " << part2.partnumber;
    cout << "\nCost of Part2 = " << part2.cost << endl;
}

void lab9_program3() {
    cout << "Hello, this is Program 3 of Lab Manual 9.\n";
    struct distance {
    int feet;
    float inches;
};

{
    distance d1, d2, d3;
    cout << "Enter distance d1 (feet): ";
    cin >> d1.feet;
    cout << "Enter distance d1 (inches): ";
    cin >> d1.inches;
    d2.feet = 10;
    d2.inches = 5.25;
    d3.feet = d1.feet + d2.feet;
    d3.inches = d1.inches + d2.inches;
    if (d3.inches >= 12) {
        d3.feet += static_cast<int>(d3.inches / 12);  
        d3.inches = fmod(d3.inches, 12);             
    }
    cout << "\nDistance d1: " << d1.feet << " feet, " << d1.inches << " inches";
    cout << "\nDistance d2: " << d2.feet << " feet, " << d2.inches << " inches";
    cout << "\nDistance d3 (sum): " << d3.feet << " feet, " << d3.inches << " inches";
}
}
void lab9_program4() {
    cout << "Hello, this is Program 4 of Lab Manual 9.\n";
    struct distance {
    int feet;
    float inches;
};
    distance d1, d2, d3;
    cout << "Enter distance d1 (feet): ";
    cin >> d1.feet;
    cout << "Enter distance d1 (inches): ";
    cin >> d1.inches;
    d2.feet = 10;
    d2.inches = 5.25;
    d3.feet = d1.feet + d2.feet;
    d3.inches = d1.inches + d2.inches;
    if (d3.inches >= 12) {
        d3.feet += static_cast<int>(d3.inches / 12);  
        d3.inches = fmod(d3.inches, 12);             
    }
    cout << "\nDistance d1: " << d1.feet << " feet, " << d1.inches << " inches";
    cout << "\nDistance d2: " << d2.feet << " feet, " << d2.inches << " inches";
    cout << "\nDistance d3 (sum): " << d3.feet << " feet, " << d3.inches << " inches";
}
void lab9_program5() {
    cout << "Hello, this is Program 5 of Lab Manual 9.\n";
    struct emp {
    int id;
    char name[100];
    float sal;
};
    emp employees[3];

    for (int i = 0; i < 3; i++) {
        cout << "Enter details for employee " << i + 1 << ":\n";
        cout << "ID: ";
        cin >> employees[i].id;
        cin.ignore(); 
        cout << "Name: ";
        cin.getline(employees[i].name, 100); 
        cout << "Salary: ";
        cin >> employees[i].sal;
        cout << endl;
    }

    cout << "Employee details:\n";
    for (int i = 0; i < 3; i++) {
        cout << "\nEmployee " << i + 1 << ":\n";
        cout << "ID: " << employees[i].id << endl;
        cout << "Name: " << employees[i].name << endl;
        cout << "Salary: " << employees[i].sal << endl;
    }
}
void lab9_program6() {
    cout << "Hello, this is Program 6 of Lab Manual 9.\n";
    struct Student {
    string name;
    int age;
    float gpa;
};
    Student students[10]; 
    float totalAge = 0, totalGPA = 0;
    int maxGPAIndex = 0;

    for (int i = 0; i < 10; i++) {
        cout << "Enter details for student " << i + 1 << ":\n";
        cout << "Name: ";
        cin.ignore(); 
        getline(cin, students[i].name);
        cout << "Age: ";
        cin >> students[i].age;
        cout << "GPA: ";
        cin >> students[i].gpa;

        totalAge += students[i].age;
        totalGPA += students[i].gpa;

        if (students[i].gpa > students[maxGPAIndex].gpa) {
            maxGPAIndex = i;
        }
    }

    float avgAge = totalAge / 10;
    float avgGPA = totalGPA / 10;

    char classGrade;
    if (avgGPA >= 3.5) {
        classGrade = 'A';
    } else if (avgGPA >= 3.0) {
        classGrade = 'B';
    } else if (avgGPA >= 2.5) {
        classGrade = 'C';
    } else {
        classGrade = 'D';
    }

    cout << "\nClass Summary:\n";
    cout << "Average Age: " << avgAge << endl;
    cout << "Average GPA: " << avgGPA << endl;
    cout << "Class Grade: " << classGrade << endl;
    cout << "Student with the highest GPA:\n";
    cout << "Name: " << students[maxGPAIndex].name << endl;
    cout << "Age: " << students[maxGPAIndex].age << endl;
    cout << "GPA: " << students[maxGPAIndex].gpa << endl;
}

void lab9_program7() {
    cout << "Hello, this is Program 7 of Lab Manual 9.\n";
    struct Academic {
    float gpa;
    string grade;
};

struct Personal {
    string name;
    int age;
    string address;
};

struct Student {
    Personal personalDetails;
    Academic academicDetails;
};

{
    Student students[2];

    for (int i = 0; i < 2; i++) {
        cout << "Enter details for student " << i + 1 << ":\n";
        cout << "Name: ";
        cin.ignore(); 
        getline(cin, students[i].personalDetails.name);
        cout << "Age: ";
        cin >> students[i].personalDetails.age;
        cin.ignore(); 
        cout << "Address: ";
        getline(cin, students[i].personalDetails.address);
        cout << "GPA: ";
        cin >> students[i].academicDetails.gpa;
        cin.ignore(); 
        cout << "Grade: ";
        getline(cin, students[i].academicDetails.grade);
        cout << endl;
    }
    cout << "Student Details:\n";
    for (int i = 0; i < 2; i++) {
        cout << "\nStudent " << i + 1 << ":\n";
        cout << "Name: " << students[i].personalDetails.name << endl;
        cout << "Age: " << students[i].personalDetails.age << endl;
        cout << "Address: " << students[i].personalDetails.address << endl;
        cout << "GPA: " << students[i].academicDetails.gpa << endl;
        cout << "Grade: " << students[i].academicDetails.grade << endl;
    }

}
}
void lab9_program8() {
    cout << "Hello, this is Program 8 of Lab Manual 9.\n";
    struct Employee {
    int id;
    string name;
    float salary;
};
    Employee emp, *ptr;
    ptr = &emp;
    cout << "Enter Employee ID: ";
    cin >> ptr->id;
    cin.ignore(); 
    cout << "Enter Employee Name: ";
    getline(cin, ptr->name);
    cout << "Enter Employee Salary: ";
    cin >> ptr->salary;
    cout << "\nEmployee Details:\n";
    cout << "ID: " << ptr->id << endl;
    cout << "Name: " << ptr->name << endl;
    cout << "Salary: " << ptr->salary << endl;
}

void lab10_program1() {
    cout << "Hello, this is Program 1 of Lab Manual 10.\n";
    int var1 = 10;
    int var2 = 20;
    int var3 = 30;
    cout << "Address of var1: " << &var1 << endl;
    cout << "Address of var2: " << &var2 << endl;
    cout << "Address of var3: " << &var3 << endl;
    int *ptr;
    ptr = &var1;
    cout << "Pointer points to address of var1: " << ptr << endl;
    ptr = &var2;
    cout << "Pointer points to address of var2: " << ptr << endl;

}
void lab10_program2() {
    cout << "Hello, this is Program 2 of Lab Manual 10.\n";
    int array[5] = {31, 54, 77, 52, 93};
    cout << "Displaying array elements using indexing:\n";
    for (int j = 0; j < 5; j++) {
        cout << array[j] << endl;
    }
    cout << "\nDisplaying array elements using a pointer:\n";
    int* ptr = array;
    for (int j = 0; j < 5; j++) {
        cout << *(ptr++) << endl;
    }
    cout << "\nAnother example with a second array:\n";
    int y[10] = {6, 2, 3, 12};  
    ptr = y;  
    cout << "Array elements printed using pointer:\n";
    for (int i = 0; i < 10; i++) {
        cout << *(ptr + i) << " "; 
    }
    cout << endl;
}
void lab10_program3() {
    cout << "Hello, this is Program 3 of Lab Manual 10.\n";
 

    int y[10] = {6, 2, 3, 12}; 
    int* ptr = y;
    cout << "Array values and their memory addresses:\n";
    for (int i = 0; i < 10; i++) {
        cout << "Value: " << *(ptr + i) << ", Address: " << (ptr + i) << endl;
    }   
}
void lab10_program4() {
    cout << "Hello, this is Program 4 of Lab Manual 10.\n";
      long* pnumber = NULL;
    long number1 = 10, number2 = 20;
    pnumber = &number1;
    *pnumber += 2;
    cout << "\nnumber1 = " << number1 << " &pnumber = " << pnumber << endl;
    pnumber = &number2;
    number1 = *pnumber * 4;
    cout << "\nnumber1 = " << number1 << " pnumber = " << pnumber << " *pnumber = " << *pnumber << endl;
}

void lab10_program5() {
    cout << "Hello, this is Program 5 of Lab Manual 10.\n";
    long* pnumber = NULL;
    long number1 = 10, number2 = 20;
    pnumber = &number1;
    *pnumber += 2;
    cout << "\nnumber1 = " << number1 << " &pnumber = " << pnumber << endl;
    pnumber = &number2;
    number1 = *pnumber * 4;
    cout << "\nnumber1 = " << number1 << " pnumber = " << pnumber << " *pnumber = " << *pnumber << endl;
}

void lab10_program6() {
    cout << "Hello, this is Program 6 of Lab Manual 10.\n";
      int y[10] = {11, 22, 33, 44, 55, 66, 77, 88, 99, 110};
    int* ptr = y;
    cout << "The 6th element of the array is: " << *(ptr + 5) << endl;
    
}

void lab10_program7() {
    cout << "Hello, this is Program 7 of Lab Manual 10.\n";
     int y[10] = {11, 22, 33, 44, 55, 66, 77, 88, 99, 110};
    int* y1;
    int* y2;
    y1 = &y[0]; 
    y2 = &y[3]; 
    cout << "\nY1 = " << *y1;
    cout << "\nY2 = " << *y2;
    if (*y1 < *y2)
        cout << "\nY1 is Smaller" << endl; // If value at y1 is smaller than value at y2
    else
        cout << "\nY2 is Smaller" << endl; // If value at y2 is smal
}

void lab10_program8() {
    cout << "Hello, this is Program 8 of Lab Manual 10.\n";
     int y[10] = {11, 22, 33, 44, 55, 66, 77, 88, 99, 110};
    
    int* y1;
    int* y2;
    y1 = &y[0]; 
    y2 = &y[3]; 
    cout << "\nY1 = " << *y1;  
    cout << "\nY2 = " << *y2; 
    if (*y1 < *y2) {
        cout << "\nY1 is Smaller" << endl; 
    } else {
        cout << "\nY2 is Smaller" << endl;
    }

}
void lab10_program9() {
    cout << "Hello, this is Program 9 of Lab Manual 10.\n";
    int y[10] = {11, 22, 33, 44, 55, 66, 77, 88, 99, 110};
    int* y1;
    int* y2;
    y1 = &y[0];  
    y2 = &y[3];  
    cout << "\nY1 = " << *y1;  
    cout << "\nY2 = " << *y2; 
        if (*y1 < *y2) {
        cout << "\nY1 is Smaller" << endl;
    } else {
        cout << "\nY2 is Smaller" << endl; 
    }
}
void areaperi(float radius, float &area, float &perimeter) {
    // Calculate area and perimeter
    area = M_PI * radius * radius;     
    perimeter = 2 * M_PI * radius;     
}
void lab10_program10() {
    cout << "Hello, this is Program 10 of Lab Manual 10.\n";
}

void solve() {
    float radius;
    cout << "Enter the radius of the circle: ";
    cin >> radius;
    float area = M_PI * radius * radius;
    float perimeter = 2 * M_PI * radius;
    cout << "Area of the circle: " << area << endl;
    cout << "Perimeter of the circle: " << perimeter << endl;
}



void lab11_program1() {
    cout << "Hello, this is Program 1 of Lab Manual 11.\n";
    cout<<"File processing in C++ is very similar to ordinary interactive input and output because the same kinds of stream objects are used. Input from a file is managed by an ifstream object the same way that input from the keyboard is managed by the istream object cin";
}


void lab11_program2() {
    std::cout << "Hello, this is Program 2 of Lab Manual 11.\n";
    std::ofstream file("first.txt");
    if (!file) { 
        std::cerr << "Error opening file!" << std::endl;
        return;
    }
    std::cout << "Enter text to write to the file (press Enter to stop):" << std::endl;
    char ch;
    while (std::cin.get(ch) && ch != '\n') {
        file.put(ch); 
    }
    file.close();
    std::cout << "Data written to first.txt successfully." << std::endl;
}

void lab11_program3() {
    std::cout << "Hello, this is Program 3 of Lab Manual 11.\n";
    std::ofstream myfile("first.txt");
    if (!myfile) { 
        std::cerr << "Error opening file!" << std::endl;
        return;
    }
    myfile << "This is my first file.\n";
    myfile.close();
    std::cout << "Data written to first.txt successfully." << std::endl;
}
    


void lab11_program4() {
    std::cout << "Hello, this is Program 4 of Lab Manual 11.\n";
    std::ofstream myfile("example.txt");
    if (!myfile) {
        std::cerr << "ERROR: Unable to open a file." << std::endl;
        return;
    }
    myfile << "This is a line.\n";
    myfile << "This is another line.\n";
    myfile.close();
    std::cout << "Data written to example.txt successfully." << std::endl;
}

void lab11_program5() {
    std::cout << "Hello, this is Program 5 of Lab Manual 11.\n";
    std::ifstream myfile("example.txt");
    if (!myfile) {
        std::cerr << "ERROR: Unable to open the file." << std::endl;
        return;
    }
    std::string line;
    while (std::getline(myfile, line)) {
        std::cout << line << std::endl;
    }
    myfile.close();
}

void lab11_program6() {
    std::cout << "Hello, this is Program 6 of Lab Manual 11.\n";
    char ch = 'x';
    int j = 77;
    double d = 6.02;
    std::string str1 = "How are u? ";
    std::string str2 = "Pretty Good";
    std::ofstream myfile("fdata.txt");
    if (!myfile) {
        std::cerr << "ERROR: Unable to open the file." << std::endl;
        return;
    }
    myfile << "Character: " << ch << std::endl;
    myfile << "Integer: " << j << std::endl;
    myfile << "Double: " << d << std::endl;
    myfile << "String 1: " << str1 << std::endl;
    myfile << "String 2: " << str2 << std::endl;
    myfile.close();
    std::cout << "File written successfully." << std::endl;
}


void lab11_program7() {
    std::cout << "Hello, this is Program 7 of Lab Manual 11.\n";
    std::ofstream myfile("test.txt");

    if (!myfile) {
        std::cerr << "ERROR: Unable to open the file." << std::endl;
        return;
    }

    myfile << "If we don\'t work hard,\n"; 
    myfile << "\n";
    myfile << "We will not be able to score high & might some our class fellow get flunked repeating the semester again\n";
    myfile.close();
    std::cout << "File written successfully." << std::endl;
}

void displayProjectInfo();
void displayLabMenu(int labNumber, int numPrograms);
void lab1_program1(); // Example

void displayProjectInfo() {
    cout << "*********************************" << endl;
    cout << " Project Submission     *" << endl;
    cout << "********************************" << endl;
    cout << "* Submitted By: Saad          *" << endl;
    cout << "* Roll Number : F23-0334*" << endl;
    cout << "* Submitted To: Mam Javeria Naz*" << endl;
    cout << "* Department  : Information Technology*" << endl;
    cout << "* Program     : BS Artificial Intelligence*" << endl;
    cout << "* Section     : 'C'*" << endl;
    cout << "**************************" << endl;
}

void displayLabMenu(int labNumber, int numPrograms) {
    cout << "\nLab Manual " << labNumber << " Menu:\n";
    for (int i = 1; i <= numPrograms; ++i) {
        cout << i << ". Program " << i << "\n";
    }
    cout << "0. Back to Main Menu\n";
    cout << "Enter your choice: ";
}



int main() {
    displayProjectInfo();

    int choice = -1, programChoice;

    while (true) {
        // Display main menu
        cout << "\nMain Menu:\n";
        cout << "1. Lab Manual 1\n";
        cout << "2. Lab Manual 2\n";
        cout << "3. Lab Manual 3\n";
        cout << "4. Lab Manual 4\n";
        cout << "6. Lab Manual 6\n";
        cout << "7. Lab Manual 7\n";
        cout << "8. Lab Manual 8\n";
        cout << "9. Lab Manual 9\n";
        cout << "10. Lab Manual 10\n";
        cout << "11. Lab Manual 11\n";
        cout << "0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        // Main menu logic using switch
        switch (choice) {
                       case 1: { // Lab Manual 0
                int programChoice = -1;
                cout << "You are in Lab Manual 1.\n";
                displayLabMenu(1,7);
                cin >> programChoice;

                switch (programChoice) {
                    case 1: lab1_program1(); break;
                    case 2: lab1_program2(); break;
                    case 3: lab1_program3(); break;
                    case 4: lab1_program4(); break;
                    case 5: lab1_program5(); break;
                    case 6: lab1_program6(); break;
                    case 7: lab1_program7(); break;
                    case 0: cout << "Returning to Main Menu...\n"; break;
                    default: cout << "Invalid choice. Returning to Main Menu...\n";
                }
                break;
            }

            case 2: { // Lab Manual 2
                int programChoice = -1;
                cout << "You are in Lab Manual 2.\n";
                displayLabMenu(2,6);
                cin >> programChoice;

                switch (programChoice) {
                    case 1: lab2_program1(); break;
                    case 2: lab2_program2(); break;
                    case 3: lab2_program3(); break;
                    case 4: lab2_program4(); break;
                    case 5: lab2_program5(); break;
                    case 6: lab2_program6(); break;
                    case 0: cout << "Returning to Main Menu...\n"; break;
                    default: cout << "Invalid choice. Returning to Main Menu...\n";
                }
                break;
            }
            
            case 3: { // Lab Manual 3
                int programChoice = -1;
                cout << "You are in Lab Manual 3.\n";
                displayLabMenu(3,1);
                cin >> programChoice;

                switch (programChoice) {
                    case 1: lab3_program1(); break;
                    case 0: cout << "Returning to Main Menu...\n"; break;
                    default: cout << "Invalid choice. Returning to Main Menu...\n";
                }
                break;
             }    
            case 4: { // Lab Manual 4
                int programChoice = -1;
                cout << "You are in Lab Manual 4.\n";
                displayLabMenu(4,14);
                cin >> programChoice;

                switch (programChoice) {
                    case 1: lab4_program1(); break;
                    case 2: lab4_program2(); break;
                    case 3: lab4_program3(); break;
                    case 4: lab4_program4(); break;
                    case 5: lab4_program5(); break;
                    case 6: lab4_program6(); break;
                    case 7: lab4_program7(); break;
                    case 8: lab4_program8(); break;
                    case 9: lab4_program9(); break;
                    case 10 : lab4_program10(); break;
                    case 11: lab4_program11(); break;
                    case 12: lab4_program12(); break;
                    case 13: lab4_program13(); break;
                    case 14: lab4_program14(); break;
                    case 0: cout << "Returning to Main Menu...\n"; break;
                    default: cout << "Invalid choice. Returning to Main Menu...\n";
                }
                break;
             }
             
            case 5: { // Lab Manual 5
                int programChoice = -1;
                cout << "You are in Lab Manual 5.\n";
                displayLabMenu(5,4);
                cin >> programChoice;

                switch (programChoice) {
                    case 1: lab5_program1(); break;
                  
                    case 2: lab5_program2(); break;
                    case 3: lab5_program3(); break;
                    case 4: lab5_program4(); break;
                    case 0: cout << "Returning to Main Menu...\n"; break;
                    default: cout << "Invalid choice. Returning to Main Menu...\n";
                }
                break;
             }
             
            case 6: { 
                int programChoice = -1;
                cout << "You are in Lab Manual 6.\n";
                displayLabMenu(6,14); 
                cin >> programChoice;

                switch (programChoice) {
                    case 1: lab6_program1(); break;
                    case 2: lab6_program2(); break;
                    case 3: lab6_program3(); break;
                    case 4: lab6_program4(); break;
                    case 5: lab6_program5(); break;
                    case 6: lab6_program6(); break;
                    case 7: lab6_program7(); break;
                    case 8: lab6_program8(); break;
                    case 9: lab6_program9(); break;
                    case 10: lab6_program10(); break;
                    case 11: lab6_program11(); break;
                    case 12: lab6_program12(); break;
                    case 13: lab6_program13(); break;
                    case 14: lab6_program14(); break;
        case 0: cout << "Returning to Main Menu...\n"; break;
        default: cout << "Invalid choice. Returning to Main Menu...\n";
    }
    break;
}

            case 7: { // Lab Manual 7
             int programChoice = -1;
             cout << "You are in Lab Manual 7.\n";
             displayLabMenu(7,14); // Displays the menu for Lab Manual 7
             cin >> programChoice;

             switch (programChoice) {
                 case 1: lab7_program1(); break;
                 case 2: lab7_program2(); break;
                 case 3: lab7_program3(); break;
                 case 4: lab7_program4(); break;
                 case 5: lab7_program5(); break;
                 case 6: lab7_program6(); break;
                 case 7: lab7_program7(); break;
                 case 8: lab7_program8(); break;
                 case 9: lab7_program9(); break;
                 case 10: lab7_program10(); break;
                 case 11: lab7_program11(); break;
                 case 12: lab7_program12(); break;
                 case 13: lab7_program13(); break;
                 case 14: lab7_program14(); break;
        case 0: cout << "Returning to Main Menu...\n"; break;
        default: cout << "Invalid choice. Returning to Main Menu...\n";
    }
    break;
}
            case 8: { // Lab Manual 8
             int programChoice = -1;
             cout << "You are in Lab Manual 8.\n";
             displayLabMenu(8,5); // Displays the menu for Lab Manual 8
             cin >> programChoice;

             switch (programChoice) {
                 case 1: lab8_program1(); break;
                 case 2: lab8_program2(); break;
                 case 3: lab8_program3(); break;
                 case 4: lab8_program4(); break;
                 case 5: lab8_program5(); break;
                 
        case 0: cout << "Returning to Main Menu...\n"; break;
        default: cout << "Invalid choice. Returning to Main Menu...\n";
    }
    break;
}
        case 9: { // Lab Manual 9
         int programChoice = -1;
         cout << "You are in Lab Manual 9.\n";
         displayLabMenu(9,8); // Displays the menu for Lab Manual 9
         cin >> programChoice;

         switch (programChoice) {
             case 1: lab9_program1(); break;
             case 2: lab9_program2(); break;
             case 3: lab9_program3(); break;
             case 4: lab9_program4(); break;
             case 5: lab9_program5(); break;
             case 6: lab9_program6(); break;
             case 7: lab9_program7(); break;
             case 8: lab9_program8(); break;
        case 0: cout << "Returning to Main Menu...\n"; break;
        default: cout << "Invalid choice. Returning to Main Menu...\n";
    }
    break;
}
        case 10: { // Lab Manual 10
         int programChoice = -1;
         cout << "You are in Lab Manual 10.\n";
         displayLabMenu(10,10); // Displays the menu for Lab Manual 10
         cin >> programChoice;

         switch (programChoice) {
             case 1: lab10_program1(); break;
             case 2: lab10_program2(); break;
             case 3: lab10_program3(); break;
             case 4: lab10_program4(); break;
             case 5: lab10_program5(); break;
             case 6: lab10_program6(); break;
             case 7: lab10_program7(); break;
             case 8: lab10_program8(); break;
             case 9: lab10_program9(); break;
             case 10: lab10_program10(); break;
        case 0: cout << "Returning to Main Menu...\n"; break;
        default: cout << "Invalid choice. Returning to Main Menu...\n";
    }
    break;
}

        case 11: { // Lab Manual 11
         int programChoice = -1;
         cout << "You are in Lab Manual 11.\n";
         displayLabMenu(11,7); // Displays the menu for Lab Manual 11
         cin >> programChoice;

         switch (programChoice) {
             case 1: lab11_program1(); break;
             case 2: lab11_program2(); break;
             case 3: lab11_program3(); break;
             case 4: lab11_program4(); break;
             case 5: lab11_program5(); break;
             case 6: lab11_program6(); break;
             case 7: lab11_program7(); break;
             case 0: cout << "Returning to Main Menu...\n"; break;
        default: cout << "Invalid choice. Returning to Main Menu...\n";
    }
    break;
}

            case 0: // Exit
                cout << "Exiting program. Goodbye!\n";
                return 0;

            default:
                cout << "Invalid choice. Please try again.\n";
        }
    }

    return 0;
}