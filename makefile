# Define the compiler
CC = gcc

# Define the compiler flags
CFLAGS = -Wall -Wextra -std=c11

# Define the target executable
TARGET = rps

# Define the source files
SRCS = rps.c

# Define the object files
OBJS = $(SRCS:.c=.o)

# Default target
all: $(TARGET)

# Rule to build the target executable
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)

# Rule to build the object files
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Clean up build files
clean:
	rm -f $(TARGET) $(OBJS)

# Phony targets
.PHONY: all clean
