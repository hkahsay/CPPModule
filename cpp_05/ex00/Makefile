# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hkahsay <hkahsay@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/21 11:09:57 by hkahsay           #+#    #+#              #
#    Updated: 2023/11/21 11:09:58 by hkahsay          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Compiler
CC = g++

# Compiler flags
CFLAGS = -std=c++98 -Wall -Wextra -Werror

# Source files
SRCS = main.cpp Bureaucrat.cpp

# Object files 
OBJS = $(SRCS:.cpp=.o)

# Executable name OR target
NAME = Bureaucrat

RM = rm -f

# Default NAME
all: $(NAME)

# Rule to compile .cpp files into object files
%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

# Rule to link the object files into the final executable
$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $^ -o $@

# Rule to clean the compiled files
clean:
	$(RM) $(OBJS) $(NAME)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re