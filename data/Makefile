SOURCE = $(wildcard *.c)
OBJ = $(patsubst %.c, %.o, $(SOURCE))

build:
	@echo -e "\033[33m In process...\033[0m"
	@gcc -Wall -pedantic -Werror -Wextra -std=gnu89 -g *.c -o data
	@echo -e "\033[32m Compiled successfully \033[0m\n"
%.o: %.c
	@gcc -Wall -pedantic -Werror -Wextra -std=gnu89 -g $^ -o data

run:
	@valgrind --leak-check=full --show-leak-kinds=all ./data
clear:
	rm data data.txt found.txt
