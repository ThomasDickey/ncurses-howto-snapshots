# Makefile for forms Files

# A few variables

CC=gcc
LIBS=-lpanel -lncurses

SRC_DIR=.
EXE_DIR=../demo/exe
OBJ_DIR=../demo/obj

OBJS = \
	$(OBJ_DIR)/panel_browse.o 	\
	$(OBJ_DIR)/panel_hide.o 	\
	$(OBJ_DIR)/panel_resize.o	\
	$(OBJ_DIR)/panel_simple.o 		

EXES = \
	$(EXE_DIR)/panel_browse		\
	$(EXE_DIR)/panel_hide		\
	$(EXE_DIR)/panel_resize		\
	$(EXE_DIR)/panel_simple

all:	$(EXES)

# Exe Related Rules

$(EXE_DIR)/panel_browse:	$(OBJ_DIR)/panel_browse.o
	$(CC) -o $@ $(OBJ_DIR)/panel_browse.o $(LIBS)

$(EXE_DIR)/panel_hide:  	$(OBJ_DIR)/panel_hide.o  	
	$(CC) -o $@ $(OBJ_DIR)/panel_hide.o $(LIBS)

$(EXE_DIR)/panel_resize:		$(OBJ_DIR)/panel_resize.o	
	$(CC) -o $@ $(OBJ_DIR)/panel_resize.o $(LIBS)

$(EXE_DIR)/panel_simple: 		$(OBJ_DIR)/panel_simple.o
	$(CC) -o $@ $(OBJ_DIR)/panel_simple.o $(LIBS)


# Obj Rules

$(OBJ_DIR)/panel_browse.o:	$(SRC_DIR)/panel_browse.c
	$(CC) -o $@ -c $(SRC_DIR)/panel_browse.c 

$(OBJ_DIR)/panel_hide.o: 	$(SRC_DIR)/panel_hide.c  	
	$(CC) -o $@ -c $(SRC_DIR)/panel_hide.c 

$(OBJ_DIR)/panel_resize.o:	$(SRC_DIR)/panel_resize.c	
	$(CC) -o $@ -c $(SRC_DIR)/panel_resize.c 

$(OBJ_DIR)/panel_simple.o: 		$(SRC_DIR)/panel_simple.c
	$(CC) -o $@ -c $(SRC_DIR)/panel_simple.c 

clean:
	@rm -f $(OBJS)
	@rm -f $(EXES)
