# This folder contains string concept related codes of C Programming Language

A string is a sequence of characters that is treated as a single data item. Any group of characters(except double quote sign) defined between double quotation marks is a string constant.

C does not support strings as a data type. However, it allows us to represent strings as a character arrays. In C, therefore a string variable is any valid C variable name and is always declared as an array of characters. The general declaration of a string variable is: char string_name[size];

The string is a variable-length structure and is stored in a fixed-length array. The array size is not always the size of string and most often it is much larger than the string stored in it. Therefore, the last element of the array need not represent the end of the string. To determine the end of the string data, the null character serves as the "end-of-string" marker.

A string is represented using a character array and is always terinated with the null character ("\0") having an ASCII of 0. The size of the character array storing a string should be at least one more than the length of the string (to store the null character).
