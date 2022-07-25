This mainly is about dynamic memory allocation
Float like a butterfly, sting like a bee: where task 0 we're asked to write a function that creates an array of chars, and initializes it with a specific char. which has a Prototype: char *create_array(unsigned int size, char c);
Returns NULL if size = 0
Returns a pointer to the array, or NULL if it fails

Task 1 The woman who has no imagination has no wings we're asked to write a
function that returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter.
Prototype: char *_strdup(char *str);
Task 2 He who is not courageous enough to take risks will accomplish nothing in life:
we're asked to write a function that concatenates two strings.
Prototype: char *str_concat(char *s1, char *s2);
Task 3 If you even dream of beating me you'd better wake up and apologize:
Write a function that returns a pointer to a 2 dimensional array of integers.
Prototype: int **alloc_grid(int width, int height);
Task 4: It's not bragging if you can back it up:
Write a function that frees a 2 dimensional grid previously created by your alloc_grid function.
Prototype: void free_grid(int **grid, int height);
Task 5  It isn't the mountains ahead to climb that wear you out; it's the pebble in your shoe:
Write a function that concatenates all the arguments of your program.
Prototype: char *argstostr(int ac, char **av);
Task 6 I will show you how great I am:
Write a function that splits a string into words.
Prototype: char **strtow(char *str);
