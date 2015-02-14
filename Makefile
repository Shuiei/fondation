##
## Makefile for makefile in /home/bene_t/Semaine2/libmy_01
## 
## Made by BENE Thibaut
## Login   <bene_t@etna-alternance.net>
## 
## Started on  Fri Oct 24 17:38:07 2014 BENE Thibaut
## Last update Mon Oct 27 12:30:13 2014 BENE Thibaut
##
NAME= fondation

CC= gcc-4.9

RM= rm -f

FLAGS = -W -Wall -Werror

SRC=$(wildcard *.c)

OBJ=$(SRC:.c=.o)

all: $(OBJ)
	$(CC) $(FLAGS) $(SRC) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all
