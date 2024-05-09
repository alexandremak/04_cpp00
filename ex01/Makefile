# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amak <amak@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/16 23:29:05 by amak              #+#    #+#              #
#    Updated: 2024/05/09 18:12:07 by amak             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = MyAwesomePhoneBook

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

SOURCES = 	Contact.cpp \
			PhoneBook.cpp \
			main.cpp

OBJECTS = $(SOURCES:.cpp=.o)

all: $(NAME)
	
$(NAME): $(OBJECTS)
	$(CC) $(CFLAGS) $(OBJECTS) -o $(NAME)
	
clean:
	@rm -f $(OBJECTS)
	@echo Deleted object files!

fclean: clean
	@rm -f $(NAME)
	@echo Deleted executable!

re: fclean all

.PHONY: all bonus clean fclean re