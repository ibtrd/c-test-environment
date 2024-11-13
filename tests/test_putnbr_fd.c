#include <stdio.h>
#include <limits.h>

void	ft_putnbr_fd(int n, int fd);

void putnbr_fd_unit_test(int n, int fd) {
	dprintf(fd, "%11d : ", n);
	ft_putnbr_fd(n, fd);
	dprintf(fd, "\n");
}

int main(void) {
	putnbr_fd_unit_test(0, 1);
    putnbr_fd_unit_test(1, 1);
    putnbr_fd_unit_test(-1, 1);
	putnbr_fd_unit_test(5, 1);
	putnbr_fd_unit_test(42, 1);
	putnbr_fd_unit_test(-470, 1);
    putnbr_fd_unit_test(INT_MAX, 1);
    putnbr_fd_unit_test(INT_MIN, 1);
}
