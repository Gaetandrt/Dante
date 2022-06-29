##
## EPITECH PROJECT, 2022
## InfinAdd
## File description:
## Makefile
##

all:
	@ make	-C	generator/	all	--no-print-directory
	@ make	-C	solver/	all	--no-print-directory

clean:
	@ make	-C	generator/	clean	--no-print-directory
	@ make	-C	solver/	clean	--no-print-directory

fclean:
	@ make	-C	generator/	fclean	--no-print-directory
	@ make	-C	solver/	fclean	--no-print-directory

re:	fclean	all