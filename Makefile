# Nome del compilatore C
CC = gcc

# Flag per il compilatore
# -Wall:      Attiva quasi tutti i warning (molto consigliato)
# -Wextra:    Attiva warning aggiuntivi
# -pedantic:  Esegue un controllo rigoroso dello standard
# -std=c11:   Usa lo standard C del 2011
# -g:         Includi informazioni di debug (per usare un debugger come gdb)
CFLAGS = -Wall -Wextra -pedantic -std=c11 -g

# Librerie da collegare (linker flags)
# -lm:        Collega la libreria matematica (math.h)
LDLIBS = -lm

# Nome dell'eseguibile che vogliamo creare
TARGET = calculator

# Lista di tutti i file sorgente (.c)
SRCS = calculator.c

# Lista dei file oggetto (.o) derivata automaticamente dai file sorgente
OBJS = $(SRCS:.c=.o)

# La "ricetta" di default, che viene eseguita quando si lancia solo "make"
.PHONY: all
all: $(TARGET)

# Ricetta per creare l'eseguibile finale (linking)
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS) $(LDLIBS)

# Ricetta per pulire la directory dai file generati
.PHONY: clean
clean:
	rm -f $(TARGET) $(OBJS)

