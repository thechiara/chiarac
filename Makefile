INCLUDEDIR:= include 

CCOPTAFT =     -std=gnu99  -g  -Wall  -c  -I$(INCLUDEDIR) -Icommon -Idriver -Imip

SOURCES := $(shell find . -name '*.c')
OBJECTS := $(SOURCES:.c=.o)
OBJECTSD := $(SOURCES:.c=.d)


.PHONY: all   clean 



all : chiarac


%.o: %.c

			gcc  $<   -c -MD -o $@  $(CCOPTAFT) 
			


chiarac: $(OBJECTS)
				 

				gcc -o chiarac $(OBJECTS) 
				

clean: cleanf



cleanf: $(OBJECTS)
							 
			

			rm -rf  chiarac
			rm -rf  $(OBJECTS)
			rm -rf  $(OBJECTSD)

install: installf



installf: $(OBJECTS)
							 
			

			install thechiara /usr/bin/thechiara
