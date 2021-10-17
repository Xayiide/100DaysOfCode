
CC	= gcc
CFLAGS  = -g -Wall -Wextra -pedantic
TARGET  = sumFibonacciEven

.PHONY: clean, all

all: $(TARGET)

$(TARGET) : $(TARGET).c
	$(CC) $(CFLAGS) -o $(TARGET) $(TARGET).c

clean:
	@rm *.o $(TARGET)
