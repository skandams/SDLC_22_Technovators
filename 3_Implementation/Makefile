#Target_name : Dependencies
#   Command
#adding location of the files which is src. "\" is used to add multiple file locations
SRC = main.c\
src/medical/medical_calculator.c\
src/main_menu.c\
src/medical/opt_1.c\
src/medical/bsa.c\
src/medical/bmi.c\
src/medical/iron_deficiency.c\
src/medical/waist_to_height_ratio.c\
src/medical/waist_to_hip_ratio.c\
src/medical/bmr.c\
src/medical/rfm.c\
src/medical/gds.c\
src/medical/kcal.c\
src/medical/bfp.c

OBJ =  main.o\
src/medical/medical_calculator.o\
src/medical/bsa.o\
src/medical/bmi.o\
src/main_menu.o\
src/medical/opt_1.o\
src/medical/iron_deficiency.o\
src/medical/waist_to_height_ratio.c\
src/medical/waist_to_hip_ratio.o\
src/medical/bmr.o\
src/medical/rfm.o\
src/medical/gds.o\
src/medical/kcal.o\
src/medical/bfp.o

INC = inc #header.h replaced with its path,inc 

all.exe : $(SRC)
	gcc $^ -I$(INC) -o $@  
#-I specifies the header is in inc folder
run: all.exe
	./all.exe

clean:
	del all.exe
