SOURCE = $(wildcard *.c)
OBJ = $(patsubst %.c, %.o, $(SOURCE))

build: $(OBJ)
	@echo -e "\033[33m In process...\033[0m"
	@gcc -Wall -pedantic -Werror -Wextra -std=gnu89 -g $^ -o data
	@echo -e "\033[32m Compiled successfully \033[0m\n"
%.o: %.c
	@gcc -Wall -pedantic -Werror -Wextra -std=gnu89 -g $^ -o data

clean:
	@rm -f data $(OBJ)

main:
	@gcc -Wall -pedantic -Werror -Wextra -std=gnu89 -g main.c -o datatest

clear:
	rm datatest data.txt
