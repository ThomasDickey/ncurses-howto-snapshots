# Makefile for menus Files

# A few variables

CC=gcc
LIBS=-lmenu -lncurses

SRC_DIR=.
EXE_DIR=../demo/exe
OBJ_DIR=../demo/obj

OBJS = \
	$(OBJ_DIR)/menu_attrib.o 	\
	$(OBJ_DIR)/menu_item_data.o 	\
	$(OBJ_DIR)/menu_multi_column.o 	\
	$(OBJ_DIR)/menu_scroll.o 	\
	$(OBJ_DIR)/menu_simple.o	\
	$(OBJ_DIR)/menu_toggle.o 	\
	$(OBJ_DIR)/menu_userptr.o 	\
	$(OBJ_DIR)/menu_win.o 	


EXES = \
	$(EXE_DIR)/menu_attrib 		\
	$(EXE_DIR)/menu_item_data 	\
	$(EXE_DIR)/menu_multi_column 	\
	$(EXE_DIR)/menu_scroll 		\
	$(EXE_DIR)/menu_simple		\
	$(EXE_DIR)/menu_toggle 		\
	$(EXE_DIR)/menu_userptr 	\
	$(EXE_DIR)/menu_win 	

all:	$(EXES)

# Exe Related Rules

$(EXE_DIR)/menu_attrib:		$(OBJ_DIR)/menu_attrib.o
	$(CC) -o $@ $(OBJ_DIR)/menu_attrib.o $(LIBS)

$(EXE_DIR)/menu_item_data:  	$(OBJ_DIR)/menu_item_data.o  	
	$(CC) -o $@ $(OBJ_DIR)/menu_item_data.o $(LIBS)

$(EXE_DIR)/menu_multi_column:  	$(OBJ_DIR)/menu_multi_column.o  	
	$(CC) -o $@ $(OBJ_DIR)/menu_multi_column.o $(LIBS)

$(EXE_DIR)/menu_scroll:  	$(OBJ_DIR)/menu_scroll.o  	
	$(CC) -o $@ $(OBJ_DIR)/menu_scroll.o $(LIBS)

$(EXE_DIR)/menu_simple:		$(OBJ_DIR)/menu_simple.o	
	$(CC) -o $@ $(OBJ_DIR)/menu_simple.o $(LIBS)

$(EXE_DIR)/menu_toggle:		$(OBJ_DIR)/menu_toggle.o	
	$(CC) -o $@ $(OBJ_DIR)/menu_toggle.o $(LIBS)

$(EXE_DIR)/menu_userptr:	$(OBJ_DIR)/menu_userptr.o	
	$(CC) -o $@ $(OBJ_DIR)/menu_userptr.o $(LIBS)

$(EXE_DIR)/menu_win: 		$(OBJ_DIR)/menu_win.o
	$(CC) -o $@ $(OBJ_DIR)/menu_win.o $(LIBS)


# Obj Rules

$(OBJ_DIR)/menu_attrib.o:	$(SRC_DIR)/menu_attrib.c
	$(CC) -o $@ -c $(SRC_DIR)/menu_attrib.c 

$(OBJ_DIR)/menu_item_data.o:  	$(SRC_DIR)/menu_item_data.c  	
	$(CC) -o $@ -c $(SRC_DIR)/menu_item_data.c 

$(OBJ_DIR)/menu_multi_column.o: $(SRC_DIR)/menu_multi_column.c  	
	$(CC) -o $@ -c $(SRC_DIR)/menu_multi_column.c 

$(OBJ_DIR)/menu_scroll.o:  	$(SRC_DIR)/menu_scroll.c  	
	$(CC) -o $@ -c $(SRC_DIR)/menu_scroll.c 

$(OBJ_DIR)/menu_simple.o:	$(SRC_DIR)/menu_simple.c	
	$(CC) -o $@ -c $(SRC_DIR)/menu_simple.c 

$(OBJ_DIR)/menu_toggle.o:	$(SRC_DIR)/menu_toggle.c	
	$(CC) -o $@ -c $(SRC_DIR)/menu_toggle.c 

$(OBJ_DIR)/menu_userptr.o:	$(SRC_DIR)/menu_userptr.c	
	$(CC) -o $@ -c $(SRC_DIR)/menu_userptr.c 

$(OBJ_DIR)/menu_win.o: 		$(SRC_DIR)/menu_win.c
	$(CC) -o $@ -c $(SRC_DIR)/menu_win.c 

clean:
	@rm -f $(OBJS)
	@rm -f $(EXES)
