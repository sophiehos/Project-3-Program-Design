# Project-3-Program-Design
Project 3, Program Design
1. (50 points) A bank requires the PINs for their ATM cards to be a sequence of digits
without repetition. For example, 5632 is a valid PIN and 4543 is not a valid PIN. Write a
program to create a random PIN without repeated digits, given the length of the PIN.
A sample input/output:
Enter the length of the PIN: 6
Output: 563209
1) Name your program PIN.c.
2) In the main function, the program will ask the user to enter the length of the
PIN and validate the length. The length should be in the range of 2 to 8,
inclusive.
3) Include the function create() in the program. The create() function
creates a randomized integer array of length n representing the digits of the
PIN, and ensures that there is no repeated numbers in the array.
void create(int a[], int n);
4) The main function calls the create function and displays the output.
How to use the rand() function to generate a random number:
1) To use the rand() and time function in a program, include <stdlib.h> and
<time.h>.
2) With the help of rand () function, a number in range of lower to upper can be
generated as num = (rand() % (upper – lower + 1)) + lower
3) rand() function generates the same sequence again and again every time the
program runs. Use srand() function with time to set seed for rand()
function so it generates different sequences of random numbers. Include the
following statement at the beginning of the create function:
srand(time(NULL));
2. (50 points) A key array of an ordering of the digits 0 to 9 can be used to encode an array
of integers in the range of 0 to 9. Write a program that replaces the numbers in an
integer array with each number’s index in the key array. For example, if the key array, as
an ordering of the digits 0 to 9, is 9 0 1 2 8 4 7 5 6 3, then the integer array {3, 5, 1} will
be encrypted as {9, 7, 2} because 3 is at index 9 in the key array, 5 is at index 7, and 1 is
at index 2.
A sample input/output:
Enter the size of the input array: 6
Enter the number: 7 0 3 1 7 8
Key array: 4 7 5 6 0 2 3 1 9 8
Output: 1 4 6 7 1 9
1) Name your program encode.c.
2) In the main function, the program will ask the user to enter the size of the input array,
elements of the input array, the key array.
3) Include the function encode() in the program and call it in the main function. The
encode() function assumes that input array is in the array a and computes the
encoded numbers and store them in the array b. The function uses the key array key
to encode. n represents the size of the array a and b.
void encode(int a[], int b[], int key[], int n);
4) The main function calls the encode function, and then displays the output.
Before you submit
1. Compile both programs with –Wall. –Wall shows the warnings by the compiler. Be sure
it compiles on student cluster with no errors and no warnings.
gcc –Wall PIN.c
gcc –Wall encode.c
2. Be sure your Unix source file is read & write protected. Change Unix file permission on
Unix:
chmod 600 PIN.c
chmod 600 encode.c
3. For problem #1, test your program multiple times to check its correctness. There are no
testing scripts for this project since the arrays are generated randomly.
4. For problem #2, use the test script to test your program:
chmod +x try_encode
./try_encode
5. Submit PIN.c and encode.c on Canvas.
Grading
Total points: 100 (50 points each problem)
1. A program that does not compile will result in a zero.
2. Runtime error and compilation warning 5%
3. Commenting and style 15%
4. Functionality 80% (including functions implemented as required)
Programming Style Guidelines
The major purpose of programming style guidelines is to make programs easy to read and
understand. Good programming style helps make it possible for a person knowledgeable in the
application area to quickly read a program and understand how it works.
1. Your program should begin with a comment that briefly summarizes what it does. This
comment should also include your name.
2. In most cases, a function should have a brief comment above its definition describing
what it does. Other than that, comments should be written only needed in order for a
reader to understand what is happening.
3. Variable names and function names should be sufficiently descriptive that a
knowledgeable reader can easily understand what the variable means and what the
function does. If this is not possible, comments should be added to make the meaning
clear.
4. Use consistent indentation to emphasize block structure.
5. Full line comments inside function bodies should conform to the indentation of the code
where they appear.
6. Macro definitions (#define) should be used for defining symbolic names for numeric
constants. For example: #define PI 3.141592
7. Use names of moderate length for variables. Most names should be between 2 and 12
letters long.
8. Use underscores to make compound names easier to read: tot_vol or total_volumn is
clearer than totalvolumn.
