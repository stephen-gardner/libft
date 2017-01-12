#!/usr/bin/make -f
NAME = libft.a
CC = gcc
CFLAGS = -Wall -Werror -Wextra -Wconversion
SRC = ./src
OBJ = ./src/obj
INC = -I ./inc
SOURCE = \
	atoi\
	bzero\
	isalnum\
	isalpha\
	isascii\
	isblank\
	iscntrl\
	isdigit\
	isgraph\
	islower\
	isprint\
	ispunct\
	isspace\
	isupper\
	isxdigit\
	itoa\
	lstadd\
	lstappend\
	lstdel\
	lstdelone\
	lstiter\
	lstmap\
	lstnew\
	mchain_exists\
	mchain_get\
	mchain_gethead\
	mchain_popall\
	memalloc\
	memccpy\
	memchr\
	memcmp\
	memcpy\
	memdel\
	memmove\
	memset\
	mlink_add\
	mlink_alloc\
	mlink_count\
	mlink_del\
	mlink_find\
	mlink_gethead\
	mlink_pop\
	mlink_popall\
	mlink_poplast\
	mlink_rev\
	mlink_sort\
	mlink_sortone\
	mlink_transfer\
	putchar\
	putchar_fd\
	putendl\
	putendl_fd\
	putnbr\
	putnbr_fd\
	putstr\
	putstr_fd\
	stpcpy\
	stpncpy\
	strcapitalize\
	strcat\
	strchr\
	strclr\
	strcmp\
	strcpy\
	strdel\
	strdup\
	strequ\
	striter\
	striteri\
	strjoin\
	strlcat\
	strlcpy\
	strlen\
	strlowcase\
	strmap\
	strmapi\
	strncat\
	strncmp\
	strncpy\
	strndup\
	strnequ\
	strnew\
	strnlen\
	strnstr\
	strrchr\
	strsplit\
	strstr\
	strsub\
	strtrim\
	strupcase\
	toascii\
	tolower\
	toupper
OBJECTS = $(patsubst %, $(OBJ)/ft_%.o, $(SOURCE))

all: $(NAME)

$(NAME): $(OBJECTS)
	@echo "Building $@..."
	@ar -rc $@ $(OBJECTS)
	@echo "Indexing..."
	@ranlib $@
	@echo "Done."

$(OBJ)/%.o: $(SRC)/%.c
	@mkdir -p $(OBJ)
	@echo "Compiling $<..."
	@$(CC) $(CFLAGS) -c $< -o $@ $(INC)

clean:
	@rm -rf $(OBJ)
	@echo "Object files removed."

fclean: clean
	@rm -f $(NAME)
	@echo "$(NAME) removed."

re: fclean all
