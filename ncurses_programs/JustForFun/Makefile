# Makefile for JustForFun Files

# A few variables

CC=gcc
LIBS=-lncurses

SRC_DIR=.
EXE_DIR=../demo/exe
OBJ_DIR=../demo/obj

OBJS = \
	$(OBJ_DIR)/hanoi.o 	\
	$(OBJ_DIR)/life.o  	\
	$(OBJ_DIR)/magic.o	\
	$(OBJ_DIR)/queens.o 	\
	$(OBJ_DIR)/shuffle.o  	\
	$(OBJ_DIR)/tt.o 	

EXES = \
	$(EXE_DIR)/hanoi 	\
	$(EXE_DIR)/life  	\
	$(EXE_DIR)/magic	\
	$(EXE_DIR)/queens 	\
	$(EXE_DIR)/shuffle  	\
	$(EXE_DIR)/tt 	


all:	$(EXES)

# Exe Related Rules

$(EXE_DIR)/hanoi:	$(OBJ_DIR)/hanoi.o
	$(CC) -o $@ $(OBJ_DIR)/hanoi.o $(LIBS)

$(EXE_DIR)/life:  	$(OBJ_DIR)/life.o  	
	$(CC) -o $@ $(OBJ_DIR)/life.o $(LIBS)

$(EXE_DIR)/magic:	$(OBJ_DIR)/magic.o	
	$(CC) -o $@ $(OBJ_DIR)/magic.o $(LIBS)

$(EXE_DIR)/queens: 	$(OBJ_DIR)/queens.o
	$(CC) -o $@ $(OBJ_DIR)/queens.o $(LIBS)

$(EXE_DIR)/shuffle:  	$(OBJ_DIR)/shuffle.o
	$(CC) -o $@ $(OBJ_DIR)/shuffle.o $(LIBS)

$(EXE_DIR)/tt:		$(OBJ_DIR)/tt.o 	
	$(CC) -o $@ $(OBJ_DIR)/tt.o $(LIBS)


# Obj Rules

$(OBJ_DIR)/hanoi.o:	$(SRC_DIR)/hanoi.c
	$(CC) -o $@ -c  $(SRC_DIR)/hanoi.c

$(OBJ_DIR)/life.o:  	$(SRC_DIR)/life.c  	
	$(CC) -o $@ -c  $(SRC_DIR)/life.c

$(OBJ_DIR)/magic.o:	$(SRC_DIR)/magic.c	
	$(CC) -o $@ -c  $(SRC_DIR)/magic.c 

$(OBJ_DIR)/queens.o: 	$(SRC_DIR)/queens.c
	$(CC) -o $@ -c  $(SRC_DIR)/queens.c 

$(OBJ_DIR)/shuffle.o:  	$(SRC_DIR)/shuffle.c
	$(CC) -o $@ -c  $(SRC_DIR)/shuffle.c 

$(OBJ_DIR)/tt.o:	$(SRC_DIR)/tt.c 	
	$(CC) -o $@ -c  $(SRC_DIR)/tt.c 


clean:
	@rm -f $(OBJS)
	@rm -f $(EXES)
