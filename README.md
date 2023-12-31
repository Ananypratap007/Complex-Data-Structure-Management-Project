# Complex Data Structure Management Project

## Introduction

Welcome to the Complex Data Structure Management Project! This advanced C++ application showcases the intricate design and utilization of data structures, particularly `std::map` and `std::unordered_map`, for efficient data management.

## Features

This project offers the following features:

1. **Data Structure Mastery:** Harness the power of two highly optimized data structures, `std::map` and `std::unordered_map`, to efficiently store and manage data.

2. **Custom Hash Function:** Employ a custom hash function, `MyHash`, to enhance the performance of the `std::unordered_map`.

3. **File Input:** Read input data and commands from an external file, allowing for seamless integration with various data sources.

4. **Dynamic Operations:** Perform dynamic operations such as insertion (`I`) and deletion (`R`) of elements based on the provided commands.

5. **Execution Timing:** Measure the execution time for each data structure operation with precision using the `std::chrono` library.

6. **Structured Output:** Display the contents of both data structures in a structured and comprehensible manner.

## Getting Started

### Prerequisites

Before you can run this project, ensure that you have:

- A C++ compiler with C++11 or later support.
- An input file containing data and commands, formatted as specified in the code.

### Usage

1. Compile the code using your preferred C++ compiler, ensuring compatibility with C++11 or later.

```bash
g++ -std=c++11 -o complex_data_structure_manager complex_data_structure_manager.cpp
```

2. Run the compiled binary, providing the name of the input file as a command-line argument

```bash
./complex_data_structure_manager < input.txt
```

## Input File Format

The input file should adhere to the following format:

- Each line contains a command followed by data, separated by space.
- Commands can be 'I' for insertion or 'R' for deletion.
- Insertions ('I') are followed by strings to be inserted.
- Deletions ('R') are followed by strings to be removed.


Example input file (input.txt):

```mathematica 
I Apple Banana
I Cherry Date
R Apple
I Fig Grape
R Banana
```

## Output
Upon execution, the program will display the contents of both std::map and std::unordered_map data structures, showcasing the efficient management of data. Additionally, execution times (commented out in the code) can be uncommented to provide insights into the performance of each operation.

## Performance Analysis
This project demonstrates the proficiency of std::map and std::unordered_map data structures in handling dynamic data operations efficiently. You can uncomment the timing code to measure the execution time for each data structure's operations and compare their performance.

## Conclusion
The Complex Data Structure Management Project exemplifies the elegance and power of modern C++ data structures. It serves as an educational tool and a practical solution for managing data from external sources with ease and precision. Explore the intricacies of these data structures and optimize your data management workflows.

Enjoy exploring the world of complex data structure management!
