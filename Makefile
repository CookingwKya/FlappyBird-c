CC=gcc
CFLAGS=-std=c99 -Wall
TARGET=flappy_bird
SOURCES=main.c game.c display.c

$(TARGET): $(SOURCES)
	$(CC) $(CFLAGS) -o $(TARGET) $(SOURCES)

clean:
	rm -f $(TARGET)

.PHONY: clean