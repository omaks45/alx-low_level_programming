Task 0:Trust no one
Prototype: void *malloc_checked(unsigned int b);
a function that allocates memory using malloc and when malloc failed it had its normal process termination with a status value of 98.
And returns ptr otherwise.

Task 1: string_nconcat
Prototype: char *string_nconcat(char *s1, char *s2, unsigned int n);
A  function that concatenates two strings: 
* calculate the length of the strings
* if s1 and s2 are null return an empty string
* if ptr is null return null
* loop through the first string and allocate a pointer to its base memory then loop through the second string and concatenate the number of n to the first string and return the pointer to the new string.

Task 2: _calloc
Prototype: void *_calloc(unsigned int nmemb, unsigned int size);
A function that allocates memory for an array, using malloc.
