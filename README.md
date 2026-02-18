# Huf-Me-File-Manager

![Version](https://img.shields.io/badge/version-1.0.0-purple?style=flat)
![C++](https://img.shields.io/badge/Language-C%2B%2B-00599C?logo=c%2B%2B&logoColor=white&style=flat)
![Huffman](https://img.shields.io/badge/Algorithm-Huffman%20Encoding-6A1B9A?style=flat)
![Console](https://img.shields.io/badge/UI-Console%20App-2F4F4F?style=flat)
![Cross%20Platform](https://img.shields.io/badge/Platform-Windows%20%7C%20Linux-0078D7?style=flat)
![License](https://img.shields.io/badge/License-Academic-3E7C17?style=flat)

## Data Structure Course Project in C++ for File Compression and Management

### Overview

Huf-Me-File-Manager is a C++ console-based application created for a Data Structure Lab course. The project implements Huffman Encoding to compress and decompress `.txt` files while bundling helpful file management utilities like word counting and safe deletion.

### Purpose

Built to reinforce core data structure concepts in practice:

- binary trees via the Huffman tree
- min-heap priority queues for optimal symbol selection
- linked lists and vectors for auxiliary storage
- file handling abstractions bridging algorithms and real files

### Key Features

- compress `.txt` files using Huffman Encoding
- decompress previously compressed archives
- delete unwanted files within the workspace
- count total word occurrences in a file
- search for a specific word frequency
- preview compressed binary output for inspection

### System Workflow

1. Gather character frequency statistics from the input file.
2. Build a min heap to repeatedly pick the lowest-frequency nodes.
3. Construct the Huffman tree and derive canonical binary codes.
4. Encode content and persist compressed output alongside metadata.
5. Reconstruct the tree during decompression to restore the original text.

### Environment

- Standard-compliant C++ (STL containers and algorithms)
- Console-based UI requiring no external frameworks
- Compatible with Windows and Linux toolchains

This lab project showcases how classical data-structure theory (trees, heaps, linked lists) translates into a practical compression and file management toolkit.
