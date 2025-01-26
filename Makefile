CFLAGS=-Wall -g
CC=gcc
SRC_DIR=src
BUILD_DIR=build

# Default target
all: $(BUILD_DIR)/ex15

# Rule to build the binary in the build directory
$(BUILD_DIR)/ex15: $(SRC_DIR)/ex15.c | $(BUILD_DIR)
	$(CC) $(CFLAGS) -o $@ $<

# Rule to create the build directory if it doesn't exist
$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)

# Clean target
clean:
	rm -rf $(BUILD_DIR)


