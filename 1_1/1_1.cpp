#include <iostream>

int main() {

    int intergerType;
    short shortType;
    float floatType;
    double doubleType;
    long longType;
    long long longlongType;
    unsigned long ulongType;

    printf("Size of int: %ld bytes \n", sizeof(intergerType));
    printf("Size of short: %ld bytes \n", sizeof(shortType));
    printf("Size of float: %ld bytes \n", sizeof(floatType));
    printf("Size of double: %ld bytes \n", sizeof(doubleType));
    printf("Size of long: %ld bytes \n", sizeof(longType));
    printf("Size of long long: %ld bytes \n", sizeof(longlongType));
    printf("Size of unsigned long: %ld bytes \n", sizeof(ulongType));

    return 0;

}