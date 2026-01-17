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