NAME			= libft.a
SOURSE_DIRS		= .
FLAGS			=  -c -W -Wall -Werror -Wextra

SEARCH_WILDCARDS:= $(addsuffix /*.c, $(SOURSE_DIRS))

OBJECTS			= $(notdir $(patsubst %.c,%.o, $(wildcard $(SEARCH_WILDCARDS))))

all: $(NAME)

$(NAME): $(OBJECTS)
	ar rc $(NAME) ft_*.o
	ranlib $(NAME)

%.o: %.c
	gcc $(FLAGS) $<

clean:
	rm -rf *.o

fclean: clean
	rm -rf $(NAME)

re: fclean $(NAME)
