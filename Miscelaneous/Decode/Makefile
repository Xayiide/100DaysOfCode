
CC	= g++
CFLAGS  = -g -Wall -Wextra -pedantic
TARGET  = hexDecod

.PHONY: clean, all

all: $(TARGET)

$(TARGET) : $(TARGET).c
	$(CC) $(CFLAGS) -o $(TARGET) $(TARGET).c

clean:
	$(RM) $(TARGET)
