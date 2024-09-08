SRC=NCURSES-Programming-HOWTO.sgml

all:
	docbook2pdf --nochunks $(SRC)
	docbook2ps  --nochunks $(SRC)
	docbook2html --nochunks $(SRC)
	docbook2html -V '%use-id-as-filename%' $(SRC)
clean:
	rm -f *.html *.pdf *.ps
