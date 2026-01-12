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
    1. Base Case: The condition that stops the recursion. Without this, the program enters an infinte loop and crashes(a Stack Overflow). It acts as the "exit strategy".
    2. Recursive Step: The function calls itself with a "reduced" argument, moving the problem closer to the base case.

- Types of recursion: <br><br>
(There are no fixed number of total types of recursion but these are basic six types)
    1. Linear recursion: A function calls itself only once in each call
    2. Head recursion: Work happens before recursive call
    3. Tail recursion: Work happens after recursive call
    4. Tree recursion: Function calls itself multiple times
    5. Indirect recursion: Two or more functions call each other recursively
    6. Nested recursion: A recursive call is made inside the argument of another recursive call <br><br>
(One line memory trick: LHTTIN)

- Recursion are internally implemented using a data structure called stack. A stack is a linear arrangement of items where the last item entered is the first to be taken out, i.e., Last-In-First-Out or LIFO. A stack is manipulated using two functions, a push operation through which an item is put on the top of the stack and a pop operation by which the topmost item of stack is removed.

- The Execution Stack: Recursion relies on the Call Stack. When a function calls itself, the computer dosen't finish the first call immediately. Instead, it "pauses" the current execution and adds a new layer to the Call Stack.
1. Winding: The stack grows as the function calls itself repeatedly.
2. Unwinding: Once the base case is reached, the functions begin returning the values back up the chain and the stack shrinks until the final result is calculated.

- The function goes forward by calling itself until the base case is reached and then it returns back step by step returning calculated value at each step. This process is known as Backtracking and it continues till the stack is empty. 

- In C, the name of the array represents the address of its first element. By passing array name, we are in fact passing the address of the array to the called function. The array in the called function now refers to the same array stored in memory. Therefore, any changes in the array in the called function will be reflected in the original array. Passing addresses of parameters to the functions is referred to as pass by address(or pass by pointers).

- Three rules to pass an array to a function:
1. The function must be called by passing only the name of the array.
2. In the function definition, the formal parameter must be an array type; the size of the array does not need to be specified.
3. The function prototype must show that the argument is an array.

- If a function changes the values of the elements of an array, then these changes will be made to the original array that passed to the function. When an entire array is passed as an argument, the contents of the array are not copied into the formal parameter array; instead, information about the addresses of array elements are passed on to the function. Therefore, any changes introduced to the array elements are truly reflected in the original array in the calling function. However, this does not apply when an individual element is passed on as argument. 

- Searching is an operation that is used when a look-up needs to be conducted on a set of data to locate a particular element. Linear Search and Binary Search are two most popular searching techniques.

- Sorted array is mandatory for Binary Search whereas it is not mandatory for array to be sorted for Linear Search. 

- Sorting is an operation that is needed to arrange the data set in a specified order.

- The rules for passing multi-dimensional arrays to functions:
1. The function must be called by passing only the array name.
2. In the function definition, we must indicate that the array has two-dimensions by including two sets of brackets.
3. The size of the second dimension must be specified.
4. The prototype declaration should be similar to the function header.

- The strings are treated as character arrays in C and therefore the rules for passing strings to functions are very similar to those for passing arrays to functions.

- Basic rules are:
1. The string to be passed must be declared as a formal argument of the function when it is defined.
2. The function prototype must show that the argument is a string. 
3. A call to the function must have a string array name without subscripts as its actual argument.

- Variables in C differ in behaviour from those in most other languages.

- In C not only do all variables have a data type, they also have a storage class. The following variable storage classes are most relevent to functions:
1. Local variables(Automatic variables)
2. Global variables(External variables)
3. Static variables
4. Register variables

- Scope, Visibility and Lifetime of Variables:
1. Scope: The scope of variable determines over what region of the program a variable is actually available for use ('active'). The region of a program in which a variable is available for use.
2. Lifetime: Longevity refers to the period during which a variable retains a given value during execution of a program ('alive'). So longevity has a direct effect on the utility of a given variable. The lifetime of a variable is the duration of time in which a variable exists in the memory during execution. 
3. Visibility: The visibility refers to the accessibility of a variable from the memory. The program's ability to access a variable from memory.

- The variables may also be broadly categorized, depending on the place of their declaration as internal(local) or external(global). Internal variables are those which are declared within a particular function, while external variables are declared outside of any function. 

1. Local Variables(Automatic Variables): Automatic variables are declared inside a function in which they are to be utilized. They are created when the function is called and destroyed automatically when function is exited. Automatic variables are therefore private(or local) to the function in which they are declared. Because of this property, automatic variables are also referred to as local or internal variables. A variable declared inside a function without storage class specification is by default an automatic variable. We may also use the keyword auto to declare automatic variables explicitly. One important feature of automatic variables is that their value cannot be changed accidentally by what happens in some other function in program. This assures that we may declare and use the same variable name in different functions in same program without causing any confusion to the computer. There are two consequences of the scope and longevity of auto variables worth remembering. First, any variable local to main will be normally alive throughout thw whole program, although it is active only in main. Secondly, during recursion, the nested variables are unique auto variables, a situation similar to function-nested auto variables with identical names.

2. Global variables(External variables): Variables that are both alive and active throughout the entire program are known as external variables. They are also known as global variables. Unlike local variables, global variables can be accessed by any function in the program. External variables are declared outside a function. In case a local variable and a global variable have the same name, the local variable will have precedence over the global one in the function where it is declared. Once a variable has been declared as global, any function can use it and change its value. Then, subsequent functions can reference only that new value. Global variable is that it is available only from the point of declaration to the end of the program. Since all functions in a program source file can access global variables, they can be used for passing values between the functions. However, using global variables as parameters for passing values poses certain problems:
    - The values of global variables which are sent to the called function may be changed inadvertently by the called function.
    - Functions are supported to be independent and isolated modules. This character is lost, if they use global variables.
    - It is not immediately apparent to the reader which values are being sent to the called function.
    - A function that uses global variables suffers from reusability.

3. Static variables: The value of static variables persists until the end of the program. A static variable is initialized only once, when the program is compiled. It is never initialized again. A variable can be declared static using the keyword static. A static variable may be either an internal type or external type depending on the place of declaration. Internal static variables are those which are declared inside a function. The scope of internal static variables extend upto the end of the function in which they are defined. Therefore, internal static variables are similar to auto variables except that they remain in existence(alive) throughout the remainder of the program. Therefore, internal static variables can be used to retain values between function calls. An external static variable is declared outside of all functions and is available to all the functions in that program. The difference between a static external variable and a simple external variable is that the static external variable is available only within the file where it is defined while simple external variable can be accessed by other files. It is also possible to control the scope of a function. If we want a particular function accessible only to the functions in the file in which it is defined and not to any function in other files then it can be accomplished by defining that function with the storage class static.

4. Register variables: We can tell the compiler that a variable should be kept in one of the machine's registers instead of keeping in the memory(where normal variables are stored). Since a register access is much faster than a memory access, keeping the frequently accessed variables(e.g. loop control variables) in the register will lead to faster execution of programs. Although, ANSI standard does not restrict its application to any particular data type, most compilers allow only int or char variables to be placed in the register. Since only a few variables can be placed in register, it is important to carefully select the variables for this purpose. However, C will automatically convert register variables into non-register variables once the limit is reached.  

- Rules of use:
- The scope of a global variable is the entire program file.
    - The scope of a local variable begins at point of declaration and ends at the end of the block or function in which it is declared.
    - The scope of a formal function argument is its own function.
    - The lifetime(or longevity) of an auto variable declared in main is the entire program execution time, although its scope is only the main function.
    - The life of an auto variable declared in a function ends when the function is exited.
    - A static local variable, although its scope is limited to its function, its lifetime extends till the end of program execution.
    - All variables have visibility in their scope, provided they are not declared again.
    - If a variable is redeclared within its scope again, it loses its visibility in the scope of the redeclared variables.  
