CC=gcc
CFLAGS=-std=gnu99 -Wall
TARGET=flappy_bird
SOURCES=main.c game.c display.c bird.c utils.c
$(TARGET): $(SOURCES)
	$(CC) $(CFLAGS) -o $(TARGET) $(SOURCES)

clean:
	rm -f $(TARGET)

.PHONY: clean