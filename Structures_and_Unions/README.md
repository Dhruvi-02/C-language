# This folder contains codes of Structures of C Programming Language

- We cannot use an array if we want to represent a collection of data items of different types using a single name. C supports a constructed data type known as structures, a mechanism for packing data of different types. A structure is a convenient tool for handling a group of logically related data items. Structures can store heterogeneous data types to represent real-life entities. Structures helps to organize complex data in a more meaningful way. It is a powerful concept that we may often need to use in our program design.

- The general format of a structure definition is as follows:

    struct  &nbsp; tag_name <br>
    {<br>
    &nbsp;&nbsp;&nbsp;    data_type &nbsp; member1;<br>
    &nbsp;&nbsp;&nbsp;    data_type &nbsp; member2;<br>
    &nbsp;&nbsp;&nbsp;    --------- &nbsp;&nbsp;&nbsp;&nbsp; -------<br>
    &nbsp;&nbsp;&nbsp;    --------- &nbsp;&nbsp;&nbsp;&nbsp; -------<br>
    };

    The keyword struct declares a structure to hold the details of data fields, member1, member2, etc. These fields are called structure elements or members. Each member may belong to a different type of data. The name of the structure is called tag name. The tag name may be used subsequently to declare variables that have the tag's structure. Also, the above definition hasn't declare variables but it simply describes a format called template to represent information.

    In defining a structure following syntax should be noted:
    1. The template is terminated with a semicolon. 
    2. While the entire definition is considered as a statement, each member is declared independently for its name and type in a separate statement inside the template.
    3. The tag name can be used to declare structure variable of its type later in the program.

- Both the arrays and structures are classified as structured data types as they provide a mechanism that enable us to access and manipulate data in a relatively easy manner. But they differ in a number of ways which are as follows:
1. An array is a collection of related data elements of same type. Structure can have elements of different types.
2. An array is a derived data type whereas a structure is a programmer-defined one.
3. Any array behaves like a built-in data type. All we have to do is declare an array variable and use it. But in the case of a structure, first we have to design and declare a data structure before the variables of that type are declared and used.

- After defining a structure format we can declare variables of that type. A structure variable declaration is similar to the declaration of variables of any other data types. It includes the following elements:
1. The keyword struct
2. The struture tag name
3. List of variable names separated by commas
4. A terminating semicolon

&nbsp;&nbsp;struct tag_name member1,member2,member3;

&nbsp;&nbsp;For example:<br>
&nbsp;&nbsp;struct book <br>
&nbsp;&nbsp;{<br>
    &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;    char &nbsp; title[20];<br>
    &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;    char &nbsp; author[20];<br>
    &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;    int &nbsp;&nbsp; pages;<br>
    &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;    float &nbsp;&nbsp; price<br>
&nbsp;&nbsp;};<br>
&nbsp;&nbsp;struct book book1,book2,book3;<br>

The members of a structure themselves are not variables. They do not occupy any memory until they are associated with the structure variables such as book1. When the compiler comes across aa declaration statement, it reserves memory space for the structure variables. It is also allowed to combine both the structure definition and variables declaration in one statement.<br>

&nbsp;&nbsp;struct book <br>
&nbsp;&nbsp;{<br>
    &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;    char &nbsp; title[20];<br>
    &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;    char &nbsp; author[20];<br>
    &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;    int &nbsp;&nbsp; pages;<br>
    &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;    float &nbsp;&nbsp; price<br>
&nbsp;&nbsp;} book1,book2,book3;<br>

Also it is valid if we didn't write tag name in above declaration but that approach is not recommended for the simple reason that a structure without a tag name cannot be referenced from anywhere else.

- Type-Defined Structures: We can use the keyword typedef to define a structure as follows:<br>
typedef  struct <br>
{<br>
    &nbsp;&nbsp;&nbsp;    type &nbsp; member1;<br>
    &nbsp;&nbsp;&nbsp;    type &nbsp; member2;<br>
    &nbsp;&nbsp;&nbsp;    . . . . . . . . . 
    &nbsp;&nbsp;&nbsp;    . . . . . . . . .
} type_name;<br>

The type_name represents structure definition associated with it and therefore, can be used to declare structure variables as shown below:<br>
&nbsp;&nbsp;&nbsp;&nbsp; type_name variable1,variable2,.......;<br>

1. The name type_name is the type definition name, not a variable.
2. We cannot define a variable with typedef declaration.

- We can access and assign values to the members of a structure in a number of ways. The members themselves are not variables. They should be linked to the structure variables in order to make them meaningful members. The link between member and variable is established using the member operator '.' which is also known as 'dot operator' or 'period operator'. For example, book1.price

We can also assign values to the members of book1: example- book1.pages=250;

We can also use scanf to give values through the keyboard: example- scanf("%d",&book1.pages);

- A structure variable can be initialized at compile time.

main() <br>
{<br>
&nbsp;&nbsp;&nbsp;&nbsp;struct<br>
&nbsp;&nbsp;&nbsp;&nbsp;{<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;int  weight;<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;float height;<br>
&nbsp;&nbsp;&nbsp;&nbsp;}<br>
&nbsp;&nbsp;&nbsp;&nbsp;student = {60,180.75};<br>
}<br>

There is one-to-one correspondence between the members and their initializing values. A lot of variation is possible in initializing a structure.

********************************************************************

main() <br>
{<br>
&nbsp;&nbsp;&nbsp;&nbsp;struct stu_record<br>
&nbsp;&nbsp;&nbsp;&nbsp;{<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;int  weight;<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;float height;<br>
&nbsp;&nbsp;&nbsp;&nbsp;};<br>
&nbsp;&nbsp;&nbsp;&nbsp;student stu_record= {60,180.75};<br>
&nbsp;&nbsp;&nbsp;&nbsp;student stu_record= {70,170};<br>
}<br>

********************************************************************

struct stu_record<br>
{<br>
&nbsp;&nbsp;&nbsp;&nbsp;int weight;<br>
&nbsp;&nbsp;&nbsp;&nbsp;float height;<br>
&nbsp;&nbsp;&nbsp;&nbsp;student1 = {60,180.75};<br>
}<br>
main()<br>
{<br>
&nbsp;&nbsp;&nbsp;&nbsp;struct stu_record student2= {50,190};<br>
}<br>

C language does not permit the initialization of individual structure members within the template. The initialization must be done only in the declaration of the actual variables. The compile-time initialization of a structure variable must have the following elements:
1. The keyword struct.
2. The structure tag name.
3. The name of the variable to be declared.
4. The assignment operator =.
5. A set of values for the members of the structure variable, separated by commas and enclosed in braces.
6. A terminating semicolon. 

- There are few rules to keep in mind while initializing structure variables at compile-time which are as follows:
1. We cannot initialize individual members inside the structure template.
2. The order of values enclosed in braces must match the order of members in the structure definition.
3. It is permitted to have a partial initialization. We an initialize only the first few members and leave remaining blank. The uninitialized members should be only at the end of the list.
4. The uninitialized members will be assigned default values as follows:
    - Zero for integer and floating point numbers.
    - '\0' for characters and strings.

- Two variables of the same structure type can be copied the same way as ordinary variables. If book1 and book2 belong to the same structure then book1=book2; book2=book1; is valid. However, book1==book2; book1!=book2; are not permitted. C does permit any logical operation on structure vriables. Instead, we need to compare them and we may do so by comparing members individually.