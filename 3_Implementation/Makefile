#Target_name : Dependencies
#   Command
#adding location of the files which is src. "\" is used to add multiple file locations
SRC = main.c\
src/medical_calculator.c\
src/main_menu.c\
src/opt_1.c\
src/bsa.c\
src/bmi.c\
src/iron_deficiency.c\
src/waist_to_height_ratio.c\
src/waist_to_hip_ratio.c


OBJ =  main.o\
src/medical_calculator.o\
src/bsa.o\
src/bmi.o\
src/main_menu.o\
src/opt_1.o\
src\iron_deficiency.o\
src/waist_to_height_ratio.c\
src/waist_to_hip_ratio.o

INC = inc #header.h replaced with its path,inc 

all.exe : $(SRC)
	gcc $^ -I$(INC) -o $@  
#-I specifies the header is in inc folder
run: all.exe
	./all.exe

clean:
	del all.exe
