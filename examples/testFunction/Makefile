CC = gcc
CFLAGS = -Wall -g -Iincludes
SRC_DIR = src
INC_DIR = includes
BUILD_DIR = build
BIN_DIR = bin
TEST_DIR = tests

TEST_SRCS = $(wildcard $(TEST_DIR)/*.c)
TEST_OBJS = $(patsubst $(TEST_DIR)/%.c, $(BUILD_DIR)/%.o, $(TEST_SRCS))

SRCS = $(wildcard $(SRC_DIR)/*.c)
OBJS = $(patsubst $(SRC_DIR)/%.c, $(BUILD_DIR)/%.o, $(SRCS))

EXE = $(BIN_DIR)/helloworld
TEST_EXE = $(BIN_DIR)/test_helloworld

all: $(EXE) $(TEST_EXE)

$(BUILD_DIR)/%.o: $(SRC_DIR)/%.c
	@mkdir -p $(BUILD_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(BUILD_DIR)/%.o: $(TEST_DIR)/%.c
	@mkdir -p $(BUILD_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

test: $(TEST_EXE)
	@echo "Running tests..."
	@./$(TEST_EXE)

$(EXE): $(OBJS)
	@mkdir -p $(BIN_DIR)
	$(CC) $(CFLAGS) $^ -o $@

$(TEST_EXE): $(TEST_OBJS) $(filter-out $(BUILD_DIR)/helloworld.o, $(OBJS))
	@mkdir -p $(BIN_DIR)
	$(CC) $(CFLAGS) $^ -o $@

clean:
	rm -rf $(BUILD_DIR) $(BIN_DIR)
	#$(RM) -r *.dSYM *.o $(EXE) $OBJS)
