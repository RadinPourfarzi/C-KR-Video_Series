CC = gcc
CFLAGS = -std=c99 -Wall -Wextra
BUILD = build

PROGRAMS = 	$(BUILD)/hello_world 	$(BUILD)/temperature_while 	$(BUILD)/temperature_symbolic 	$(BUILD)/temperature_for 	$(BUILD)/copy_input 	$(BUILD)/count_character 	$(BUILD)/count_lines 	$(BUILD)/digit_count 	$(BUILD)/power 	$(BUILD)/word_count 	$(BUILD)/longest_line

all: $(BUILD) $(PROGRAMS)

$(BUILD):
	mkdir -p $(BUILD)

$(BUILD)/hello_world: code/hello-world/hello_world.c | $(BUILD)
	$(CC) $(CFLAGS) $< -o $@

$(BUILD)/temperature_while: code/temperature-table/temperature_while.c | $(BUILD)
	$(CC) $(CFLAGS) $< -o $@

$(BUILD)/temperature_symbolic: code/temperature-table/temperature_symbolic.c | $(BUILD)
	$(CC) $(CFLAGS) $< -o $@

$(BUILD)/temperature_for: code/temperature-table/temperature_for.c | $(BUILD)
	$(CC) $(CFLAGS) $< -o $@

$(BUILD)/copy_input: code/character-input/copy_input.c | $(BUILD)
	$(CC) $(CFLAGS) $< -o $@

$(BUILD)/count_character: code/character-input/count_character.c | $(BUILD)
	$(CC) $(CFLAGS) $< -o $@

$(BUILD)/count_lines: code/character-input/count_lines.c | $(BUILD)
	$(CC) $(CFLAGS) $< -o $@

$(BUILD)/digit_count: code/arrays/digit_count.c | $(BUILD)
	$(CC) $(CFLAGS) $< -o $@

$(BUILD)/power: code/functions/power.c | $(BUILD)
	$(CC) $(CFLAGS) $< -o $@

$(BUILD)/word_count: code/word-counting/word_count.c | $(BUILD)
	$(CC) $(CFLAGS) $< -o $@

$(BUILD)/longest_line: code/character-arrays/longest_line.c | $(BUILD)
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -rf $(BUILD)

.PHONY: all clean
