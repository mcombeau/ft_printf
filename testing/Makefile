NAME = test

all:	$(NAME)

$(NAME):
	$(MAKE) -C .. all
	cp ../libftprintf.a $(NAME)
	gcc main.c $(NAME)

clean:
	$(MAKE) -C .. clean

fclean: clean
	rm -rf a.out $(NAME)

re: fclean
	$(MAKE) all