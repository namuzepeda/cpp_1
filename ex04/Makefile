SRCS			= main.cpp
OBJS			= $(SRCS:.cpp=.o)

CXX				= c++ -g3
RM				= rm -f
CXXFLAGS		= -Wall -Wextra -Werror -I. -std=c++98

NAME			= result

all:			$(NAME)

$(NAME):		$(OBJS)
				$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

.PHONY:			all clean fclean re