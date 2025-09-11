# The top level Makefile

MAKE_RECUR = $(MAKE) CC=$(CC) CFLAGS=$(CFLAGS)

all:	
	( cd JustForFun && $(MAKE_RECUR) )
	( cd basics	&& $(MAKE_RECUR) )
	( cd forms	&& $(MAKE_RECUR) )
	( cd menus	&& $(MAKE_RECUR) )
	( cd panels	&& $(MAKE_RECUR) )
	@echo 
	@echo "*********************************************"
	@echo "All files Built"
	@echo "Please move to demo/exe directory"
	@echo "Execute each file to see examples in action"
	@echo "*********************************************"
	@echo
clean:
	( cd JustForFun && $(MAKE_RECUR) $@ )
	( cd basics	&& $(MAKE_RECUR) $@ )
	( cd forms	&& $(MAKE_RECUR) $@ )
	( cd menus	&& $(MAKE_RECUR) $@ )
	( cd panels	&& $(MAKE_RECUR) $@ )
	rm -rf demo
