
CC	= gcc
CFLAGS  = -g -Wall -Wextra -pedantic
TARGET  = smallestDivisible1-n

.PHONY: clean, all

all: $(TARGET)

$(TARGET) : $(TARGET).c
	$(CC) $(CFLAGS) -o $(TARGET) $(TARGET).c -lm

clean:
	$(RM) $(TARGET)
