CC := gcc
CFLAGS := -Wall -g
TARGET := b06-07

# $(wildcard *.cpp /xxx/xxx/*.cpp): get all .c files from the current directory and dir "/xxx/xxx/"
SRCS := $(wildcard *.c)
# $(patsubst %.c,%.o,$(SRCS)): substitute all ".c" file name strings to ".o" file name strings
OBJS := $(patsubst %.c,%.o,$(SRCS))

all: $(TARGET)
$(TARGET): $(OBJS)
	$(CC) -o $@ $^
%.o: %.c
	$(CC) $(CFLAGS) -c $<
clean:
	rm -rf $(TARGET) *.o
	
.PHONY: all clean

