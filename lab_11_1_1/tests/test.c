#include <stdio.h>
#include <string.h>
#include <inttypes.h>
#include "../my_snprintf.h"
#include "tests.h"

int main(void)
{
    char buf_f[30] = { 0 }, buf_s[30] = { 0 };
    int check = 0;

    check = snprintf(buf_f, 30, "death\n %d sounds like", 0);
    printf("\\\\nCHEK = %d\n\\", check);

    check = my_snprintf(buf_s, 30, "death\n %d sounds like", 0);
    printf("\\\\nCHEK = %d\n\\", check);

    printf("%s %s\n", buf_f, buf_s);

    printf("strcmp %d\n", strcmp(buf_f, buf_s));

    snprintf(buf_f, 30, "%dlel lel%d lel%dlel", 1, 2, 3);

    my_snprintf(buf_s, 30, "%dlel lel%d lel%dlel", 1, 2, 3);

    printf("%s %s\n", buf_f, buf_s);

    printf("strcmp %d\n", strcmp(buf_f, buf_s));

    check = snprintf(buf_f, 30, "%d", 2147483647);
    printf("\\\\nCHEK = %d\n\\", check);

    check = my_snprintf(buf_s, 30, "%d", 2147483647);
    printf("\\\\nCHEK = %d\n\\", check);

    printf("%s %s\n", buf_f, buf_s);

    printf("strcmp %d\n", strcmp(buf_f, buf_s));

    snprintf(buf_f, 30, "      %d %d", -2147483647, 2147483647);

    my_snprintf(buf_s, 30, "      %d %d", -2147483647, 2147483647);

    printf("%s %s\n", buf_f, buf_s);

    printf("strcmp %d\n", strcmp(buf_f, buf_s));



    /*snprintf(buf_f, 30, "%i %i", 500, 512);

    my_snprintf(buf_s, 30, "%i %i", 500, 512);

    printf("%s %s\n", buf_f, buf_s);

    printf("strcmp %d\n", strcmp(buf_f, buf_s));


    snprintf(buf_f, 30, "%i %i", 07771, 0777);

    my_snprintf(buf_s, 30, "%i %i", 07771, 0777);

    printf("%s %s\n", buf_f, buf_s);

    printf("strcmp %d\n", strcmp(buf_f, buf_s));

    snprintf(buf_f, 30, "%i", 0);

    my_snprintf(buf_s, 30, "%i", 0);

    printf("%s %s\n", buf_f, buf_s);

    printf("strcmp %d\n", strcmp(buf_f, buf_s));


    snprintf(buf_f, 30, "%i %i", 0xDEADBEEF, 0xDEADDEAD);

    my_snprintf(buf_s, 30, "%i %i", 0xDEADBEEF, 0xDEADDEAD);

    printf("%s %s\n", buf_f, buf_s);

    printf("strcmp %d\n", strcmp(buf_f, buf_s));


    snprintf(buf_f, 30, "%ld", 2147483648);

    my_snprintf(buf_s, 30, "%ld", 2147483648);

    printf("%s %s\n", buf_f, buf_s);

    printf("strcmp %d\n", strcmp(buf_f, buf_s));


    snprintf(buf_f, 30, "%ld", -2147483648);

    my_snprintf(buf_s, 30, "%ld", -2147483648);

    printf("%s %s\n", buf_f, buf_s);

    printf("strcmp %d\n", strcmp(buf_f, buf_s));


    long int a = 0;
    snprintf(buf_f, 30, "%ld", a);

    my_snprintf(buf_s, 30, "%ld", 0);

    printf("%s %s\n", buf_f, buf_s);

    printf("strcmp %d\n", strcmp(buf_f, buf_s));


    snprintf(buf_f, 30, "%li", -2147483648);

    my_snprintf(buf_s, 30, "%li", -2147483648);

    printf("%s %s\n", buf_f, buf_s);

    printf("strcmp %d\n", strcmp(buf_f, buf_s));


    snprintf(buf_f, 30, "%li", 2147483648);

    my_snprintf(buf_s, 30, "%li", 2147483648);

    printf("%s %s\n", buf_f, buf_s);

    printf("strcmp %d\n", strcmp(buf_f, buf_s));


    a = 0xDEADBEEF;
    snprintf(buf_f, 30, "%li", a);

    my_snprintf(buf_s, 30, "%li", 0xDEADBEEF);

    printf("%s %s\n", buf_f, buf_s);

    printf("strcmp %d\n", strcmp(buf_f, buf_s));

    a = 077777;
    snprintf(buf_f, 30, "%li", a);

    my_snprintf(buf_s, 30, "%li", 077777);

    printf("%s %s\n", buf_f, buf_s);

    printf("strcmp %d\n", strcmp(buf_f, buf_s));*/

    return 0;
}
