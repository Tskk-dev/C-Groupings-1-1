#import <stdio.h>
#import <conio.h>


void trace(int x, int *y, int z)
{
     x = 1; 
    *y = 2; 
     z = 4;
    printf("%d %d %d\n", x, *y, z);
}

int main() {
    int x=1, y=3, z=4;
    printf("%d %d %d\n", x, y, z); // Prints the initial values of x, y, and z.
    trace(y, &x, z);               // Passes y by value, x by reference, and z by value.
    printf("%d %d %d\n", x, y, z); // Prints the values after the first call to trace.

    trace(x, &z, y);               // Passes x by value, z by reference, and y by value.
    printf("%d %d %d\n", x, y, z); // Prints the values after the second call to trace.

    trace(z, &y, x);               // Passes z by value, y by reference, and x by value.
    printf("%d %d %d\n", x, y, z); // Prints the values after the third call to trace.

    getch();

    return 0;
}

