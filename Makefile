CFLAGS=-Wall -g
CC=clang
SRC_DIR=src
BUILD_DIR=build

# Default target
all: $(BUILD_DIR)/ex7

# Rule to build the binary in the build directory
$(BUILD_DIR)/ex7: $(SRC_DIR)/ex7.c | $(BUILD_DIR)
	$(CC) $(CFLAGS) -o $@ $<

# Rule to create the build directory if it doesn't exist
$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)

# Clean target
clean:
	rm -rf $(BUILD_DIR)


