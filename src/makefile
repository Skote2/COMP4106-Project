IDIR =../include
CC = g++
CFLAGS = -I$(IDIR) -std=c++14 -g

ODIR = ../obj
LDIR = ../lib

LIBS = -lm

_DEPS = #Not using any RN
DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS))

_OBJ = BFS.o Bot.o Floor.o Product.o Purchase.o Warehouse.o Program.o
OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))


$(ODIR)/%.o: %.cpp $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

Program: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS) $(LIBS)

.PHONY: clean

clean:
	rm -f $(ODIR)/*.o *~ core $(INCDIR)/*~