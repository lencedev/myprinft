##
## EPITECH PROJECT, 2021
## B-PSU-100-MPL-1-1-myprintf-owen1.bolling
## File description:
## Makefile
##

CC			=	gcc

CFLAGS		=	-W -Wall -Wextra -Iinclude

LIB_SRC		=	$(wildcard lib/*.c)

LIB_OBJ		=	$(LIB_SRC:.c=.o)

LIB			=	libmy.a

all: $(LIB)

$(LIB): $(LIB_OBJ)
	@ar src $(LIB) $(LIB_OBJ)
	@echo "Build OK!"

clean:
	@rm -rf $(LIB_OBJ)

fclean: clean
	@rm -rf $(LIB)

re: fclean all