#include <stdio.h>

#define STRINGIZE(x) #x
#define DATA 40

int main()
{

    // Sử dụng toán tử #
    printf("The value is: %s\n", STRINGIZE(DATA));
234, 567
    return 0;
}