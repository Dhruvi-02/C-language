# This folder contains functions related codes of C Programming language

- C functions can be classified into two categories: Library functions(printf, scanf) and user-defined functions(main).

- If a program is divided into functional parts, then each part maybe independently coded and later combined into a single unit. These independently coded programs are called subprograms that are much easier to understand, debug and test. In C, such subprograms are referred to as 'functions'.

- A function is a self-contained block of code that performs a particular task. It takes some data from the main program and returns a value.

- Any function can call any other function. In fact, it can also call itself. A 'called function' can also call another function. A function can be called more than once.  

- Modular Programming: It is defined as organizing a large program into small, independent program segments called modules that are separately named and individually callable program units (divide-and-conquer approach to problem solving).

    Characteristics of Modular Programming:
    1. Each module should do only one thing.
    2. Communication between modules is allowed only by a calling module.
    3. A module can be called by one and one higher module.
    4. No communication can take place directly between modules that do not have calling-called relationship.
    5. All modules are designed as single-entry, single-exit systems using control structures.

- Similarities between functions and variables in C:
    1. Both function names and variable names are considered identifiers and therefore, they must adhere to the rules for identifiers.
    2. Like variables, functions have types(such as int) associated with them.
    3. Like variables, function names and their types must be declared and defined before they are used in a program.

- In order to mae use of user-defined functions, we need to establish three elements that are related to functions:
    1. Function definition: An independent program module that is specially written to implement the requirements of the function.
    2. Function call: Used to invoke the function at a required place in the program.
    3. Function declaration: The calling program should declare any function(like declaration of a variable) that is to be used later in the program.

- A function definition also known as function implementation include the following elements:
    1. function name
    2. function type
    3. list of parameters
    4. local variable declarations
    5. function statements
    6. a return statement

- All the six elements are grouped into two parts:
    1. function header(First three elements)
    2. function body(Second three elements)

- function_type  function_name(parameter list)<br>
    {<br>
    &nbsp;&nbsp;&nbsp;&nbsp;local variable declaration;<br>
    &nbsp;&nbsp;&nbsp;&nbsp;executable statement1;<br>
    &nbsp;&nbsp;&nbsp;&nbsp;executable statement2;<br>
    &nbsp;&nbsp;&nbsp;&nbsp;. . . . .<br>
    &nbsp;&nbsp;&nbsp;&nbsp;. . . . .<br>
    &nbsp;&nbsp;&nbsp;&nbsp;return statement;<br>
    }

- The function body contains the declarations and statements necessary for performing the required task. The body enclosed in braces, contains three parts, in the order given as follows:

    1. Local declarations that specify the variables needed by the function.
    2. Function statements that perform the task of the function.
    3. A return statement that returns the value evaluated by the function.

- Parameters(also known as arguments) are used in following three places:
    1. in declaration(prototypes)
    2. in function call
    3. in function definition

- The parameters used in prototypes and function definitions are called formal parameters and those used in function calls are called actual parameters. Actual parameters used in a calling statement may be simple constants, variables and expressions. The formal and actual parameters must match exactly in type, order and number. Their names, however, do not need to match.

- Category of Functions:
    1. Functions with no arguments and no return values
    2. Functions with arguments and no return values
    3. Functions with arguments and one return value
    4. Functions with no arguments but a return value
    5. Functions that return multiple values

- In case the actual arguments are more than the formal arguments, the extra actual arguments are discarded.On the other hand, if the actual arguments are less than the formal arguments, the unmatched formal arguments are initialized to some garbage values. Any mismatch in data type may also result in passing of garbage values. No error message will get generated in such cases.

- While the formal arguments must be a valid variable names, the actual arguments may be variable names, expressions or constants. The variables used in actual arguments must be assigned values before the function call is made.

- When a function call is made, only a copy of the values of actual arguments is passed into the called function. What occurs inside the function will have no effect on the variables used in the actual argument list.

- The variables declared inside a function are known as local variables and therefore their values are local to the function and cannot be accessed by any other function.

- The ANSI standard proposes new symbol called the ellipsis to handle functions having variable number of arguments and data types which cannot be known at compile time. The ellipsis consists of three periods (...).
example: double area (int num,...)
- Both the function declaration and definition should use ellipsis to indicate that the arguments are arbitrary both in number and type. 

- Recursion: Recursion is when a function calls itself to solve a smaller version of the same problem.

    - It has two mandatory parts:
    1. Base Case: The condition that stops the recursion. Without this, the program enters an infinte loop and crashes(a Stack Overflow).
    2. Recursive Step: The function calls itself with a "reduced" argument, moving the problem closer to the base case.