#!/usr/bin/make -f
NAME = libft.a
CC = gcc
CFLAGS = -Wall -Werror -Wextra
SRC = \
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
	memalloc\
	memccpy\
	memchr\
	memcmp\
	memcpy\
	memdel\
	memmove\
	memset\
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
	strrev\
	strsplit\
	strstr\
	strsub\
	strtrim\
	strupcase\
	toascii\
	tolower\
	toupper
OBJ = $(patsubst %, ft_%.o, $(SRC))

all: $(NAME)

$(NAME): $(OBJ)
	@ar -rcs $@ $(OBJ)

%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@ -I ./

clean:
	@rm -rf $(OBJ)

fclean: clean
	@rm -f $(NAME)
	@echo "$(NAME) removed."

re: fclean all
