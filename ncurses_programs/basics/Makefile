# Makefile for basics Files

# A few variables

CC=gcc
LIBS=-lncurses

SRC_DIR=.
EXE_DIR=../demo/exe
OBJ_DIR=../demo/obj

OBJS = \
	$(OBJ_DIR)/hello_world.o 	\
	$(OBJ_DIR)/init_func_example.o 	\
	$(OBJ_DIR)/key_code.o		\
	$(OBJ_DIR)/mouse_menu.o 	\
	$(OBJ_DIR)/other_border.o  	\
	$(OBJ_DIR)/printw_example.o  	\
	$(OBJ_DIR)/scanw_example.o  	\
	$(OBJ_DIR)/simple_attr.o 	\
	$(OBJ_DIR)/simple_color.o 	\
	$(OBJ_DIR)/simple_key.o 	\
	$(OBJ_DIR)/temp_leave.o 	\
	$(OBJ_DIR)/win_border.o 	\
	$(OBJ_DIR)/with_chgat.o 	



EXES = \
	$(EXE_DIR)/hello_world 		\
	$(EXE_DIR)/init_func_example 	\
	$(EXE_DIR)/key_code		\
	$(EXE_DIR)/mouse_menu 		\
	$(EXE_DIR)/other_border  	\
	$(EXE_DIR)/printw_example	\
	$(EXE_DIR)/scanw_example	\
	$(EXE_DIR)/simple_attr 		\
	$(EXE_DIR)/simple_color 	\
	$(EXE_DIR)/simple_key 		\
	$(EXE_DIR)/temp_leave 		\
	$(EXE_DIR)/win_border 		\
	$(EXE_DIR)/with_chgat 	

all:	$(EXES)

# Exe Related Rules

$(EXE_DIR)/hello_world:	$(OBJ_DIR)/hello_world.o
	$(CC) -o $@ $(OBJ_DIR)/hello_world.o $(LIBS)

$(EXE_DIR)/init_func_example:  	$(OBJ_DIR)/init_func_example.o  	
	$(CC) -o $@ $(OBJ_DIR)/init_func_example.o $(LIBS)

$(EXE_DIR)/key_code:	$(OBJ_DIR)/key_code.o	
	$(CC) -o $@ $(OBJ_DIR)/key_code.o $(LIBS)

$(EXE_DIR)/mouse_menu: 	$(OBJ_DIR)/mouse_menu.o
	$(CC) -o $@ $(OBJ_DIR)/mouse_menu.o $(LIBS)

$(EXE_DIR)/other_border:  	$(OBJ_DIR)/other_border.o
	$(CC) -o $@ $(OBJ_DIR)/other_border.o $(LIBS)

$(EXE_DIR)/printw_example:  	$(OBJ_DIR)/printw_example.o
	$(CC) -o $@ $(OBJ_DIR)/printw_example.o $(LIBS)

$(EXE_DIR)/scanw_example:  	$(OBJ_DIR)/scanw_example.o
	$(CC) -o $@ $(OBJ_DIR)/scanw_example.o $(LIBS)

$(EXE_DIR)/simple_attr:		$(OBJ_DIR)/simple_attr.o 	
	$(CC) -o $@ $(OBJ_DIR)/simple_attr.o $(LIBS)

$(EXE_DIR)/simple_color: 	$(OBJ_DIR)/simple_color.o
	$(CC) -o $@ $(OBJ_DIR)/simple_color.o $(LIBS)

$(EXE_DIR)/simple_key:  	$(OBJ_DIR)/simple_key.o
	$(CC) -o $@ $(OBJ_DIR)/simple_key.o $(LIBS)

$(EXE_DIR)/temp_leave:		$(OBJ_DIR)/temp_leave.o 	
	$(CC) -o $@ $(OBJ_DIR)/temp_leave.o $(LIBS)

$(EXE_DIR)/win_border:  	$(OBJ_DIR)/win_border.o  	
	$(CC) -o $@ $(OBJ_DIR)/win_border.o $(LIBS)

$(EXE_DIR)/with_chgat:	$(OBJ_DIR)/with_chgat.o	
	$(CC) -o $@ $(OBJ_DIR)/with_chgat.o $(LIBS)




# Obj Rules

$(OBJ_DIR)/hello_world.o:	$(SRC_DIR)/hello_world.c
	$(CC) -o $@ -c $(SRC_DIR)/hello_world.c 

$(OBJ_DIR)/init_func_example.o: $(SRC_DIR)/init_func_example.c  	
	$(CC) -o $@ -c $(SRC_DIR)/init_func_example.c 

$(OBJ_DIR)/key_code.o:		$(SRC_DIR)/key_code.c	
	$(CC) -o $@ -c $(SRC_DIR)/key_code.c 

$(OBJ_DIR)/mouse_menu.o: 	$(SRC_DIR)/mouse_menu.c
	$(CC) -o $@ -c $(SRC_DIR)/mouse_menu.c 

$(OBJ_DIR)/other_border.o:  	$(SRC_DIR)/other_border.c
	$(CC) -o $@ -c $(SRC_DIR)/other_border.c 

$(OBJ_DIR)/printw_example.o:  	$(SRC_DIR)/printw_example.c
	$(CC) -o $@ -c $(SRC_DIR)/printw_example.c 

$(OBJ_DIR)/scanw_example.o:  	$(SRC_DIR)/scanw_example.c
	$(CC) -o $@ -c $(SRC_DIR)/scanw_example.c 

$(OBJ_DIR)/simple_attr.o:	$(SRC_DIR)/simple_attr.c 	
	$(CC) -o $@ -c $(SRC_DIR)/simple_attr.c 

$(OBJ_DIR)/simple_color.o: 	$(SRC_DIR)/simple_color.c
	$(CC) -o $@ -c $(SRC_DIR)/simple_color.c 

$(OBJ_DIR)/simple_key.o:  	$(SRC_DIR)/simple_key.c
	$(CC) -o $@ -c $(SRC_DIR)/simple_key.c 

$(OBJ_DIR)/temp_leave.o:	$(SRC_DIR)/temp_leave.c 	
	$(CC) -o $@ -c $(SRC_DIR)/temp_leave.c 

$(OBJ_DIR)/win_border.o:  	$(SRC_DIR)/win_border.c  	
	$(CC) -o $@ -c $(SRC_DIR)/win_border.c 

$(OBJ_DIR)/with_chgat.o:	$(SRC_DIR)/with_chgat.c	
	$(CC) -o $@ -c $(SRC_DIR)/with_chgat.c 

clean:
	@rm -f $(OBJS)
	@rm -f $(EXES)
