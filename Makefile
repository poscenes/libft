NAME =  libft.a

CC =  gcc

CFLAGS =  -Werror -Wall -Wextra

AR =  ar -rcs

SRC =  ft_atoi.c    \
    ft_bzero.c   \
    ft_calloc.c   \
    ft_isalnum.c   \
    ft_isalpha.c   \
    ft_isascii.c   \
    ft_isdigit.c   \
    ft_isprint.c   \
    ft_memchr.c   \
    ft_memcmp.c   \
    ft_memcpy.c   \
    ft_memmove.c   \
    ft_memset.c   \
    ft_strchr.c   \
    ft_strdup.c   \
    ft_strlcat.c   \
    ft_strlcpy.c   \
    ft_strlen.c   \
    ft_toupper.c   \
    ft_tolower.c   \
    ft_strrchr.c   \
    ft_strncmp.c   \
    ft_strnstr.c	\
	ft_substr.c		\
	ft_strjoin.c	\
	ft_strtrim.c	\
	ft_split.c		\
	ft_itoa.c		\
	ft_strmapi.c	\
	ft_striteri.c	\
	ft_putchar_fd.c \
	ft_putstr_fd.c	\
	ft_putnbr_fd.c	\
	ft_putendl_fd.c

BONUS  =  ft_lstadd_front_bonus.c  \
    ft_lstlast_bonus.c  \
    ft_lstnew_bonus.c  \
    ft_lstsize_bonus.c  \
    ft_lstadd_back_bonus.c \
    ft_lstdelone_bonus.c  \
    ft_lstclear_bonus.c \
    ft_lstmap_bonus.c \
    ft_lstiter_bonus.c

OBJS  = $(SRC:%.c=%.o)

OBJ_BONUS= $(BONUS:%.c=%.o)

all: $(NAME)

$(NAME) :  $(OBJS)
	$(AR) $(NAME) $(OBJS)

%.o : %.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@ -I.

bonus :
	make "OBJS = $(OBJ_BONUS)" all

clean :
	rm -rf $(OBJS) $(OBJ_BONUS)

fclean :  clean
	rm -rf $(NAME)

re : fclean all

.PHONY: clean fclean all re bonus