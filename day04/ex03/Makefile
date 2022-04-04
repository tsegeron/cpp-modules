CC			=	c++
FLAGS1		=	-Wall -Wextra -Werror
FLAGS2		=	-std=c++98
OPTFLAGS	=	-O2

RM			=	rm -rf

# ------------------------------------------------------------------------------

NAME		=	Recap
HDRS		=	ICharacter.hpp	IMateriaSource.hpp	MateriaSource.hpp	AMateria.hpp	Character.hpp	Ice.hpp	Cure.hpp
SRCS		=	main.cpp	AMateria.cpp	Character.cpp	MateriaSource.cpp	Ice.cpp	Cure.cpp
OBJS		=	${SRCS:%.cpp=%.o}

# ------------------------------------------------------------------------------

READY	=	${NAME} is ready
SWEPT	=	Directory was cleaned
_PURPLE	=	\e[0;35m
_CYAN	=	\e[0;36m
_END	=	\e[33m

# ------------------------------------------------------------------------------

#%.o:		%.cpp	${HDR}
#			@${CC} ${FLAGS1} ${FLAGS2} ${OPTFLAGS} -c -o $@ $<

${NAME}:	${OBJS}
			${CC}	${FLAGS1}	${FLAGS2}	${OPTFLAGS}	${OBJS}	-o ${NAME}

all:		${NAME}

clean:
			@${RM} ${OBJS}
			@printf "${_PURPLE}${SWEPT}${_END}\n"

fclean:		clean
			@${RM} ${NAME}

re:			fclean all

.PHONY:		re all clean fclean
