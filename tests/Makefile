LIBFT = ../libft.a

CC = cc
CFLAGS = -Wextra -Wall -Werror

TESTS = \
	test_putnbr_fd \
	test_atoi

all: $(TESTS)

test% : $(LIBFT)
	$(CC) $(CFLAGS) ./$@.c $(LIBFT) -o $@

$(LIBFT) : FORCE
	$(MAKE) -C $(dir $(LIBFT))
 
 FORCE:

 fclean :
	$(RM) $(TESTS)

re : fclean
	$(MAKE)
