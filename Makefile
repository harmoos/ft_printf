SRCS += ft_printf.c
SRCS += ft_printchar.c
SRCS += ft_printnbr.c
SRCS += ft_printstr.c
SRCS += ft_printunsig.c
SRCS += ft_printptr.c
SRCS += ft_printhex.c

OBJS		= $(addprefix $(OBJDIR)/, $(SRCS:.c=.o))

OBJDIR		= obj

NAME		= libftprintf.a

INCLUDES	= ./

HEADER		= $(INCLUDES)ft_printf.h

CC			= cc

CFLAGS		+= -Wall
CFLAGS		+= -Wextra
CFLAGS		+= -Werror

all:			$(NAME)

$(NAME):		$(OBJS)
				ar rcs $@ $^

$(OBJDIR):
				mkdir $@

$(OBJDIR)/%.o:	%.c
				$(CC) $(CFLAGS) -I $(INCLUDES) -c $< -o $@

$(OBJS):		$(HEADER) | $(OBJDIR)

clean:
				$(RM) -r $(OBJDIR)

fclean:			clean
				$(RM) $(NAME)

re:				fclean all

.PHONY:			all clean fclean re custom
