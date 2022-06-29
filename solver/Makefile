##
## EPITECH PROJECT, 2021
## InfinAdd
## File description:
## Makefile
##

CC = gcc

AR = ar src

DOSSIER = compil_des_o

CFLAGS  = -g3 -W -Wall -Wextra -Werror -Wno-unused -g3

CPPFLAGS = -Iinclude/

LDFLAGS = -L/usr/local/lib -lncurses

SRC	= $(wildcard *.c) \

OBJ =  $(SRC:.c=.o) \

TARGET = solver

LAUNCH = solver

.SILENT: $(OBJ)

all: $(TARGET)

$(TARGET) : $(OBJ)
	@$(CC) -o $(@) $(OBJ) $(LDFLAGS)
	@echo "\033[3;99mCréation du binaire... [$(@)] : ✅\n\033[0m"
	@mkdir  -p $(DOSSIER)
	@echo "\033[1;96mCréation du dossier {$(DOSSIER)} : ✅\n\033[0m"
	@mv -f $(OBJ) $(DOSSIER)
	@echo "\033[1;94mMooving dans $(DOSSIER): ✅\n\033[0m"

fclean :
	clear
	@$(RM) $(TARGET)
	@rm -rf $(DOSSIER)
	@echo "\033[5;95mSupression de [$(TARGET)] et de {$(DOSSIER)} : ✅\n\033[0m"

re: fclean all

see: $(OBJ) fclean
	clear
	@$(CC) -o $(TARGET) $(OBJ) $(LDFLAGS)
	@echo "\033[6;92mCompilations de :\n\033[1;91m-----------------\033[0m"
	@echo "\033[6;93m$(SRC)\033[1;91m-----------------\033[0m" | tr ' ' '\n'
	@echo "\033[4;96m$(words $(SRC)) fichiers compilés\033[0m"
	@echo "\033[34m"
	@echo "\033[5;99mCréation du binaire [$(TARGET)] : ✅\033[0m"
	@echo "\033[34m"
	@mkdir -p $(DOSSIER)
	@echo "\033[6;95mCréations du dossier [$(DOSSIER)] : ✅\033[0m"
	@echo "\033[34m"
	@mv -f $(OBJ) $(DOSSIER)
	@echo "\033[11;94mMooving dans [$(DOSSIER)] : ✅\n\033[0m"

bug:
	clear
	@echo "\033[3;94mCorrection en cours...\033[0m"
	@echo "\033[34m"
	@$(RM) $(OBJ)
	@$(RM) $(TARGET)
	@rm -rf $(DOSSIER)
	@echo "\033[4;91mBug corrigé !\033[0m"

launch: re
	@echo "\033[3;94mLancement de $(TARGET)\033[0m"
	@./$(LAUNCH)

h:
	clear
	@echo "\033[4;94m\t\t\t\t\t\tCommandes disponible :\033[0m"
	@echo "\033[1;31m\t\t\t\t\t  re = \033[3;95mfais une compilation classique\n\033[3;91m\t\t\t\tsee = \033[3;95mpermet de voir tout ce qui se passe durant compilation\n\033[3;91m\t\t\t\tbug = \033[3;95mfaite cette commande si la compilation ne se fait pas\n\033[3;91m\t\t\t\tlaunch = \033[3;95mpermet de lancer le binaire une fois la compilation effectuée\033[0m"
