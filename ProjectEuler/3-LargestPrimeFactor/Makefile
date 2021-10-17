
CC	= gcc
CFLAGS  = -g -Wall -Wextra -pedantic
TARGET  = largestPrimeFactor

.PHONY: clean, all

all: $(TARGET)

$(TARGET) : $(TARGET).c
	$(CC) $(CFLAGS) -o $(TARGET) $(TARGET).c -lm

clean:
	@rm *.o $(TARGET)
