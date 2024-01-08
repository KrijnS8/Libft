NAME = libft.a
CFLAGS = -Wall -Wextra -Werror
AR = ar -rcs
SRC = ft_atoi.c \
		ft_bzero.c \
		ft_calloc.c \
		ft_realloc.c \
		ft_isalnum.c \
		ft_isalpha.c \
		ft_isascii.c \
		ft_isdigit.c \
		ft_isprint.c \
		ft_itoa.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_memset.c \
		ft_putchar_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \
		ft_putstr_fd.c \
		ft_split.c \
		ft_strchr.c \
		ft_strdup.c \
		ft_striteri.c \
		ft_strjoin.c \
		ft_strlcat.c \
		ft_strlcpy.c \
		ft_strlen.c \
		ft_strmapi.c \
		ft_strcmp.c \
		ft_strncmp.c \
		ft_strnstr.c \
		ft_strrchr.c \
		ft_strtrim.c \
		ft_substr.c \
		ft_tolower.c \
		ft_toupper.c \
		ft_lstnew.c \
		ft_lstadd_front.c \
		ft_lstsize.c \
		ft_lstlast.c \
		ft_lstadd_back.c \
		ft_lstdelone.c \
		ft_lstclear.c \
		ft_lstiter.c \
		ft_lstmap.c \
		ft_get_next_line.c \
		ft_get_next_line_utils.c \
		ft_printf.c \
		ft_printf_utils.c \
		ft_printf_print.c \
		ft_is_integer.c \
		ft_count_words.c \
		ft_strarr_dup.c \
		ft_build_path.c

OBJ = $(SRC:%.c=%.o)

all: $(NAME)

$(NAME): $(OBJ)
	@$(AR) $@ $^

bonus: $(NAME)
	@$(AR) $^

clean:
	@$(RM) $(OBJ)

fclean:
	@$(RM) $(OBJ) $(NAME)

re:	clean all

.PHONY: all bonus clean fclean re