SOURCE = $(wildcard *.c)
OBJ = $(patsubst %.c, %.o, $(SOURCE))
files = data data.txt found.txt

build:
	@echo -e "\033[33m In process...\033[0m"
	@gcc -Wall -pedantic -Werror -Wextra -std=gnu89 -g $(SOURCE) -o data
	@echo -e "\033[32m Compiled successfully \033[0m\n"

%.o: %.c
	@gcc -Wall -pedantic -Werror -Wextra -std=gnu89 -g -c $< -o $@

run: build
	@valgrind --leak-check=full --show-leak-kinds=all ./data

clear:
	@rm $(files)
	@if [ $$? -eq 0 ]; then echo -e "\033[32m Files $(files) are removed successfully \033[0m\n"; fi
