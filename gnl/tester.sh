gcc -Werror -Wextra -Wall -Iinclude get_next_line$1.c test.c -D BUFFER_SIZE=42 -o gnl.out && ./gnl.out
