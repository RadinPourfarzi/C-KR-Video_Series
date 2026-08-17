# Chapter 1 — A Tutorial Introduction

This folder contains the production material for the Chapter 1 video in the **Learning C Through K&R** series.

The goal of this episode is the same general goal as Chapter 1 of *The C Programming Language*: to get started writing small C programs without trying to master every rule immediately.

## What the viewer should understand

By the end, the viewer should be capable of reading, compiling, modifying, and writing a simple C program using:

- source files, compilation, and executables;
- `main`, `printf`, and basic output;
- variables, assignment, arithmetic, and loops;
- character input with `getchar` and `putchar`;
- simple arrays;
- the idea that larger programs are built from smaller pieces.

## Folder structure

```text
assets/                 Diagrams, screenshots, and thumbnail material
code/                   Public example and assignment code
code/_recording-checkpoints/
                        Private/recording backup versions, including K&R-style versions
notes/                  Planning, script, checklists, and rehearsal notes
slides/                 Presentation source and exported PDF
video/                  Raw, audio, and final video files; usually not committed to GitHub
```

## Main on-camera code

The video focuses on these files:

| File | Purpose |
|---|---|
| `code/hello-world/hello_world.c` | First complete C program; compile/run workflow; simple compiler errors |
| `code/temperature-table/temperature_while.c` | Main example: variables, assignment, arithmetic, `while`, formatted output |
| `code/character-input/copy_input.c` | Character-input loop: read, check, process, repeat |
| `code/arrays/digit_count.c` | Array demonstration with indexed counters |
| `code/character-arrays/longest_line.c` | Brief advanced assignment preview |

The other files are included as examples, side assignments, or reference solutions.

## Build instructions

From this folder, compile an individual program like this:

```bash
gcc -std=c99 -Wall -Wextra code/hello-world/hello_world.c -o build/hello_world
```

Or build all public examples with:

```bash
make
```

Run one example with:

```bash
./build/hello_world
```

On Windows, the executable may appear as `hello_world.exe`.

## Exercises

1. Rewrite `temperature_while.c` using a `for` loop. Compare with `temperature_for.c` only after attempting it.
2. Modify a character-input program to count blanks, tabs, lines, or a chosen character.
3. Reconstruct `word_count.c` from the idea of tracking whether the program is inside or outside a word.
4. Study or recreate `longest_line.c` as the harder Chapter 1 assignment.

## Notes for GitHub

Do commit:

- `code/`
- `slides/Chapter 01-Presentation.pdf`
- `description.md`
- selected notes that are useful to viewers

Do not commit large raw recordings, final video exports, or generated executables.
