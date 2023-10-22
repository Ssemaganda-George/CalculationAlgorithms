# CalculationAlgorithms
This C code snippet demonstrates fundamental programming concepts including loops, pointer manipulation, and dynamic memory allocation.
 The functionX function contains nested while loops, with the outer loop iterating 10 times and the inner loop iterating 5 times. Within each iteration, the code performs calculations involving integer variables i, j, and k, incrementing the global variable x. The final result of these calculations is multiplied by the inner loop index j and stored in a dynamically allocated memory location pointed to by y. Proper memory allocation and deallocation practices are followed using malloc and free functions.

This code illustrates control flow, arithmetic operations, and memory management in the C programming language.

#Functionalities.


1. **Global Variables:**
   - `int x;`: This is a global integer variable initialized to 0.
   - `short *y;`: This is a global pointer to a short integer. Memory for this pointer is allocated dynamically using `malloc` to store a `short` value.

2. **Function `functionX`:**
   - The function `functionX` is declared and defined. It doesn't take any parameters and has no return value (`void` return type).
   - Inside the function, there are two `while` loops:
     - The outer `while` loop runs while `i` is less than 10.
     - The inner `while` loop runs while `j` is less than 5.
   - In each iteration of the inner loop:
     - The variable `k` is assigned the value 10.
     - The value of `x` is incremented by the sum of `k` and `j`.
     - After the inner loop, the value of `x` is multiplied by the current value of `j`, and the result is stored at the memory location pointed to by `y`.

3. **Memory Allocation:**
   - In the `main` function, memory for the `y` pointer is dynamically allocated using `malloc(sizeof(short))`. This allocates enough memory to store a `short` integer and assigns the memory address to the `y` pointer.
   - If the memory allocation fails, an error message is printed to the standard error stream (`stderr`) and the program exits with a non-zero status code (`return 1;`).

4. **Function Call and Output:**
   - The `functionX` function is called from the `main` function.
   - Inside `functionX`, calculations are performed and the result (stored at the memory location pointed by `y`) is printed to the standard output using `printf`.

5. **Memory Deallocation:**
   - After using the dynamically allocated memory, it is freed using the `free(y)` function call to prevent memory leaks.

 So this program performs calculations using the `functionX` function and stores the result in a dynamically allocated memory location pointed to by `y`.
  The result is then printed to the console. It's important to note that the exact output depends on the calculations and the initial values of `x` and `y`, which are initialized to 0 and an unspecified memory location respectively.

