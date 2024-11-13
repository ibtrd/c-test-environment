LIBFT = ../libft.a

CC = cc
CFLAGS = -Wextra -Werror -Wall

test_putbnr_fd:  test_putnbr_fd.c $(LIBFT)
	$(CC) $(CPPFLAGS) $< $(LIBFT)

$(LIBFT) : FORCE
	$(MAKE) -C $(dir $(LIBFT))
 
 FORCE:
