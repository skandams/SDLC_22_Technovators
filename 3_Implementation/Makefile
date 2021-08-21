#Target_name : Dependencies
#   Command
#adding location of the files which is src. "\" is used to add multiple file locations
SRC = main.c\
src/mainmenu.c\
src/medical_calculator.c\
src/bsa.c\
src/opt_1.c\

OBJ =  main.o\
src/mainmenu.o\
src/medical_calculator.o\
src/bsa.o\
src/opt_1.o\

INC = inc #header.h replaced with its path,inc 

all.exe : $(SRC)
	gcc $^ -I$(INC) -o $@  
#-I specifies the header is in inc folder
run: all.exe
	./all.exe

clean:
	del all.exe
