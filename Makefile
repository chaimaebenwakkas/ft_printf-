NAME = libftprintf.a
INC = ft_printf.h
AR := ar rc
FLAGS = -Wall -Wextra -Werror
REMOVE := rm -rf
SRCS = ft_printf.c \
		ft_putchar.c \
		ft_putnbr.c \
		ft_putstr.c \
		ft_putnbr_base.c \
		ft_strlen.c \
		ft_putnbr_unsigned.c \
		ptr_print.c \
		ft_putnbr_base_ptr.c \
		

OBJS := $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS) $(INC)
	$(AR) $@ $^
%.o: %.c
	cc $(FLAGS) -c $< -o $@

clean:
	$(REMOVE) $(OBJS)

fclean: clean
	$(REMOVE) $(NAME)

re: fclean all