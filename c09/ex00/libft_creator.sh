rm -f libft.a
gcc -Wall -Werror -Wextra -c *.c
ar -rcs libft.a *.o
rm -f *.o