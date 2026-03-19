*This project has been created as part of the 42 curriculum by guilheda.*

# push_swap

## Description

push_swap is a sorting algorithm project from the 42 School curriculum. The goal is to sort a stack of integers using two stacks (A and B) and a restricted set of operations, producing the shortest possible sequence of moves as output.

The constraint makes it interesting: you cannot just sort in place. You must think carefully about which operations to use and in what order, balancing move count against simplicity of implementation. The project is evaluated both on correctness and on efficiency — fewer moves means a better score.

The program receives a list of integers as arguments, then prints to stdout the sequence of operations needed to sort stack A in ascending order. At the start, all numbers are in stack A (unsorted) and stack B is empty.

### Allowed Operations

| Operation | Description |
|-----------|-------------|
| `sa` | Swap the top 2 elements of stack A |
| `sb` | Swap the top 2 elements of stack B |
| `ss` | `sa` and `sb` simultaneously |
| `pa` | Push the top element of B onto A |
| `pb` | Push the top element of A onto B |
| `ra` | Rotate stack A upward (top goes to bottom) |
| `rb` | Rotate stack B upward |
| `rr` | `ra` and `rb` simultaneously |
| `rra` | Reverse rotate stack A (bottom goes to top) |
| `rrb` | Reverse rotate stack B |
| `rrr` | `rra` and `rrb` simultaneously |

### Sorting Strategy

Before sorting, each value is assigned a rank (index) from `0` (smallest) to `n-1` (largest). This normalizes the input so the algorithm works on indices rather than raw values, simplifying comparisons.

The program then selects an algorithm based on input size:

- **2 elements** — one swap if out of order, done.
- **3 elements** — a hardcoded decision tree covering all 6 possible permutations. Optimal and fast.
- **4 elements** — push the minimum to B, sort the remaining 3, push back.
- **5 elements** — push the 2 smallest to B, sort the remaining 3, push them back in the right order.
- **6+ elements** — radix sort on the binary representation of each element's rank. For each bit position (from least to most significant), elements whose bit is `0` are pushed to B, and elements whose bit is `1` stay in A (rotated). After processing all elements for a bit, everything in B is pushed back to A. This repeats for as many bits as needed to cover the largest rank. Radix sort runs in O(n log n) operations and scales well for large inputs.

## Instructions

### Compilation

Clone the repository and run:

```bash
make
```

This produces the `push_swap` executable.

| Command | Effect |
|---------|--------|
| `make` | Compile the project |
| `make clean` | Remove object files |
| `make fclean` | Remove object files and the executable |
| `make re` | Full recompile from scratch |

### Usage

```bash
./push_swap <integer1> [integer2 ...]
```

Numbers can be passed as separate arguments or as a single quoted string:

```bash
./push_swap 3 1 4 2 5
./push_swap "3 1 4 2 5"
./push_swap -7 42 0 -3 15
```

The program prints the sequence of operations to stdout, one per line. If the list is already sorted, no output is produced and the program exits cleanly.

### Checking the Result

You can pipe the output into a checker to verify correctness, or count operations:

```bash
# Count how many moves were generated
./push_swap 3 1 4 2 5 | wc -l

# Verify the result is actually sorted (prints OK or KO)
./push_swap 3 1 4 2 5 | ./checker_OS 3 1 4 2 5

# Verify OS
OS = Mac || linux
```

### Error Handling

The program writes `Error` to stderr and exits with a non-zero status if:
- A non-integer argument is provided (e.g. `"abc"`, `"1.5"`)
- A value overflows `INT_MIN` or `INT_MAX`
- Duplicate values are present
- No arguments are given

## Resources

### Sorting & Algorithms

- [Radix Sort — Wikipedia](https://en.wikipedia.org/wiki/Radix_sort) — the algorithm used for large inputs
- [Stack (abstract data type) — Wikipedia](https://en.wikipedia.org/wiki/Stack_(abstract_data_type)) — the core data structure
- [Sorting algorithms visualized — visualgo.net](https://visualgo.net/en/sorting) — helpful for building intuition
- [Push_swap — the least amount of moves with two stacks (Medium)](https://medium.com/@ayogun/push-swap-c1f5d2d41e97) — a detailed write-up of common approaches

### AI Usage

Claude (claude-sonnet-4-6) was used during this project to assist with:
- **README writing** — helping to write this README based on a full review of the codebase.
- **Logic & concepts** — clarifying the underlying algorithms and data structures used throughout the project.

