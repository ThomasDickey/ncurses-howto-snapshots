SRC=NCURSES-Programming-HOWTO.sgml

all:
	docbook2html --nochunks $(SRC)
	docbook2html -V '%use-id-as-filename%' $(SRC)
clean:
	rm -f *.html
