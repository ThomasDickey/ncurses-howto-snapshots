# Makefile for forms Files

# A few variables

CC=gcc
LIBS=-lform -lncurses

SRC_DIR=.
EXE_DIR=../demo/exe
OBJ_DIR=../demo/obj

OBJS = \
	$(OBJ_DIR)/form_attrib.o 	\
	$(OBJ_DIR)/form_options.o 	\
	$(OBJ_DIR)/form_simple.o	\
	$(OBJ_DIR)/form_win.o 		

EXES = \
	$(EXE_DIR)/form_attrib 		\
	$(EXE_DIR)/form_options 	\
	$(EXE_DIR)/form_simple		\
	$(EXE_DIR)/form_win 		

all:	$(EXES)

# Exe Related Rules

$(EXE_DIR)/form_attrib:	$(OBJ_DIR)/form_attrib.o
	$(CC) -o $@ $(OBJ_DIR)/form_attrib.o $(LIBS)

$(EXE_DIR)/form_options:  	$(OBJ_DIR)/form_options.o  	
	$(CC) -o $@ $(OBJ_DIR)/form_options.o $(LIBS)

$(EXE_DIR)/form_simple:		$(OBJ_DIR)/form_simple.o	
	$(CC) -o $@ $(OBJ_DIR)/form_simple.o $(LIBS)

$(EXE_DIR)/form_win: 		$(OBJ_DIR)/form_win.o
	$(CC) -o $@ $(OBJ_DIR)/form_win.o $(LIBS)


# Obj Rules

$(OBJ_DIR)/form_attrib.o:	$(SRC_DIR)/form_attrib.c
	$(CC) -o $@ -c $(SRC_DIR)/form_attrib.c 

$(OBJ_DIR)/form_options.o: 	$(SRC_DIR)/form_options.c  	
	$(CC) -o $@ -c $(SRC_DIR)/form_options.c 

$(OBJ_DIR)/form_simple.o:	$(SRC_DIR)/form_simple.c	
	$(CC) -o $@ -c $(SRC_DIR)/form_simple.c 

$(OBJ_DIR)/form_win.o: 		$(SRC_DIR)/form_win.c
	$(CC) -o $@ -c $(SRC_DIR)/form_win.c 

clean:
	@rm -f $(OBJS)
	@rm -f $(EXES)
