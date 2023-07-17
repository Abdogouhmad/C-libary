# colors
GREEN = \033[32m
RED = \033[31m
DEFAULT = \033[0m
MAGENTA = \033[35m

# program and files
PROG = XDisplay
SRC = ${PROG}.c
OBJ = ${SRC:.c=.o}

# path and flags
CC = cc
XFLAG = -lX11
CFLAGS = Wall -pedantic -Werror -Wextra -std=gnu89

# compiling
build: ${PROG}

${PROG}: ${OBJ}
	@echo -e "$(MAGENTA)In process..."
	@${CC} -${CFLAGS} ${XFLAG} -o $@ $^ 
	@echo -e "$(GREEN)Compiling is done!!$(DEFAULT)\n"
%.o: %.c
	@${CC} -${CFLAGS} -c -o $@ $< 

run: build
	./$(PROG)

clear:
	@rm -f $(OBJ) ${PROG}
	@if [ $$? -eq 0 ]; then \
		echo -e "$(GREEN) files $(OBJ) and $(PROG) are removed successfully $(DEFAULT)\n"; \
	else \
		echo -e "$(RED) no files to remove $(DEFAULT)"; \
	fi
.PHONY: clear run build