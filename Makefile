CC = gcc
CFLAGS = -Wall -Wextra -std=c11 -I./src
TARGET = program
SRCDIR = src
SOURCES = $(SRCDIR)/main.c $(SRCDIR)/pupil.c $(SRCDIR)/file_io.c $(SRCDIR)/process.c
OBJECTS = $(SOURCES:.c=.o)

all: $(TARGET)

$(TARGET): $(OBJECTS)
	$(CC) $(OBJECTS) -o $(TARGET)

$(SRCDIR)/%.o: $(SRCDIR)/%.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(SRCDIR)/*.o $(TARGET) result.txt pupils.dat

run: all
	./$(TARGET)

.PHONY: all clean run


