CC = gcc
CFLAGS = -Wall -Wextra -std=c11
TARGET = caixa-eletronico
SOURCE = src/main.c

.PHONY: all run clean

all: $(TARGET)

$(TARGET): $(SOURCE)
	$(CC) $(CFLAGS) $(SOURCE) -o $(TARGET)

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f $(TARGET) $(TARGET).exe
