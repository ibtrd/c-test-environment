
#include <stdint.h>
#include <errno.h>
#include <limits.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int ft_atoi(char *s);

void atoi_unit_test(char *s) {
    int t;

    errno = 0;
    printf("%11d | ", ft_atoi(s));
    t = errno;
    errno = 0;
    printf("%-11d :", atoi(s));
    printf("[%s] [%s]\n", strerror(t), strerror(errno));
}

int main()
{
	printf("%11s | %-11s : \n", "ft_atoi()", "atoi()");
	printf("%11s | %-11s : \n", "-----------", "-----------");
    atoi_unit_test("1111111111111112147483648");
    atoi_unit_test("-2147483648");
    atoi_unit_test("-2147483649");
    atoi_unit_test("2147483647");
    atoi_unit_test("0");
    atoi_unit_test("-0");
    atoi_unit_test("--10");
    atoi_unit_test("456");
}