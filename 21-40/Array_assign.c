//declare a char array of 11 elements
// iterate through 10 and print it + "0"
// find the value at 10

char str[11];

for (unsigned int i = 0; i < 10; i++) {
    str[i] = '0' + i;
}

str[10] = '\0'; // Properly null-terminate the string