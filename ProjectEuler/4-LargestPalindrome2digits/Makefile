
CC	= gcc
CFLAGS  = -g -Wall -Wextra -pedantic
TARGET  = largestPalindrome2Digits

.PHONY: clean, all

all: $(TARGET)

$(TARGET) : $(TARGET).c
	$(CC) $(CFLAGS) -o $(TARGET) $(TARGET).c -lm

clean:
	$(RM) $(TARGET)
