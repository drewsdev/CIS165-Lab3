### **CIS-165-W198.2026FA**

In this lab, you will write two short C++ programs, test them, and place your source code in a public GitHub repository. You may use AI to help you learn and develop your code. You are responsible for checking every result and explaining the code you submit.

This is a 100-point programming assignment. A repository link or AI-generated code by itself does not earn full credit. Your score comes from your working programs, testing, explanations, code style, GitHub submission, and reflection.

## **Pre-Planning**

diamond.cpp

Start

print 3 spaces + 1 asterisk "new line"

print 2 spaces + 3 asterisks "new line"

print 1 space + 5 asterisks "new line"

print 7 asterisks "new line"

print 1 space + 5 asterisks "new line"

print 2 spaces + 3 asterisks "new line"

print 3 spaces + 1 asterisk "new line"

End

game\_time.cpp

Start

Declare variable LEVEL\_1\_MINUTES and store 78

Declare variable LEVEL\_2\_MINUTES and store 144

Calculate level\_1\_hours with LEVEL\_1\_MINUTES using / 60

Calculate level\_1\_remaining\_minutes with LEVEL\_1\_MINUTES using % 60

Calculate level\_2\_hours with LEVEL\_2\_MINUTES using x / 60

Calculate level\_2\_remaining\_minutes with LEVEL\_2\_MINUTES using % 60

Calculate difference\_minutes with LEVEL\_2\_MINUTES - LEVEL\_1\_MINUTES

Calculate difference\_hours with difference\_minutes / 60

Calculate difference\_remaining\_minutes with difference\_minutes % 60

Output level\_1\_hours and level\_1\_remaining\_minutes

Output level\_2\_hours and level\_2\_remaining\_minutes

Output how much longer Level 2 took with difference\_hours and difference\_remaining\_minutes

End

## **Run the Program**

Compile and run each program separately

Use g++

```
g++ -std=c++17 -Wall -Wextra diamond.cpp -o diamond
./diamond
g++ -std=c++17 -Wall -Wextra game_time.cpp -o game_time
./game_time
```

## **Testing**

| **Program** | **Values Used** | **Expected Result Before Running** | **Actual Output** | **Match or Fix** |
| --- | --- | --- | --- | --- |
| diamond.cpp | Leading Spaces: 3, 2, 1, 0, 1, 2, 3  
Asterisks: 1, 3, 5, 7, 5, 3, 1 | 
A centered, 7 row diamond matching

the given example

 |  `*`  
 `***`  
 `*****`  
`*******`  
 `*****`  
 `***`  
 `*` | Match |
| game\_time.cpp | 

Level 1: 78 minutes

Level 2: 144 minutes

 | 

Level 1: 1 hour, 18 minutes

Level 2: 2 hours, 24 minutes

Difference: 1 hour, 6 minutes

 | 

Level 1: 1 hour, 18 minutes

Level 2: 2 hours, 24 minutes

Difference: 1 hour, 6 minutes

 | Match |
| game\_time.cpp | 

Level 1: 88 minutes

Level 2: 156 minutes

 | 

Level 1: 1 hour, 28 minutes

Level 2: 2 hours, 36 minutes

Difference: 1 hour, 6 minutes

 | 

Level 1: 1 hour, 28 minutes

Level 2: 2 hours, 36 minutes

Difference: 1 hour, 6 minutes

 | Match |

### **Final Testing**

| **Program** | **Values Used** | **Expected Result Before Running** | **Actual Output** | **Match or Fix** |
| --- | --- | --- | --- | --- |
| diamond.cpp | Leading Spaces: 3, 2, 1, 0, 1, 2, 3  
Asterisks: 1, 3, 5, 7, 5, 3, 1 | 
A centered, 7 row diamond matching

the given example

 |  `*`  
 `***`  
 `*****`  
`*******`  
 `*****`  
 `***`  
 `*` | Match |
| game\_time.cpp | 

Level 1: 78 minutes

Level 2: 144 minutes

 | 

Level 1: 1 hour, 18 minutes

Level 2: 2 hours, 24 minutes

Difference: 1 hour, 6 minutes

 | 

Level 1: 1 hour, 18 minutes

Level 2: 2 hours, 24 minutes

Difference 1 hour, 6 minutes

 | Match |

## **Explanation**

*   **F**For `diamond.cpp`, explain how your output statements create the required shape. How did you check spaces that are difficult to see?
    *   Each `cout` statement prints one row of the diamond, and `/n` moves the output to the next line. The number of asterisks increases from 1 > 3 > 5 >7 then goes back down to 1 in the same steps. The leading spaces follow the pattern of 3, 2, 1 ,0, 1, 2, 3.  
        To check the spaces, counting each between the opening quotation mark and the first asterisk in that line can be easily done.
*   For `game_time.cpp`, explain how integer division and the remainder operator convert total minutes into hours and remaining minutes.
    *   Integer division calculates the number of complete hours in the total minutes. For example, 78 / 60 produces 1 becuase 78 minutes contains one complete hour. If level\_1\_hours was declared as a double, you would produce a decimal value which would be 1.3, which is what we aren't looking for in this program.  
        The remainder operator calculates the minutes left after removing the complete hours. For example, 78 % 60 produces 18.  
        Together the two results represent 1 hour and 18 minutes.
*   Trace the assigned Level 1 and Level 2 values through your variables, including the calculation of the difference.

| Variable | Calculation | Stored Result |
| --- | --- | --- |
| LEVEL\_1\_MINUTES | 78 | 78 |
| LEVEL\_2\_MINUTES | 144 | 144 |
| level\_1\_hours | 78 / 60 | 1 |
| level\_1\_remaining\_minutes | 78 % 60 | 18 |
| level\_2\_hours | 144 / 60 | 2 |
| level\_2\_remaining\_minutes | 144 % 60 | 24 |
| difference\_minutes | 144 - 78 | 66 |
| difference\_hours | 66 / 60 | 1 |
| difference\_remaining\_minutes | 66 % 6 | 6 |

*   Explain why the assignment asks you to store calculations in variables before using `cout`.
    *   The "cout" statement finally prints the result back to the user. Storing the calculation before printing makes it easier to read. It also allows me to easily use that variable in other places if needed, like another calculation if I decided to add one.