# Zel Programming Language

Zel is a **low-level, statically and strongly typed transpiled programming language** designed for simplicity, speed, and minimal boilerplate. Zel combines the power of low-level programming with modern features such as polymorphism (without traditional OOP) and a robust type system inspired by OCAML. Its goal is to provide developers a language that is fast, safe, and expressive while remaining clean and approachable.

---
## NEW CHANGES FOR 2026

Zel's overall design will be changed in 2026 to be more unique. I want to make sure Zel is not similar to other languages. I want to create a reason for why people should use Zel once released in a good state.
---

## Table of Contents

1. [Overview](#overview)
2. [Features](#features)
3. [Syntax Examples](#syntax-examples)
4. [Tooling](#tooling)
5. [Installation](#installation)
6. [Contribution](#contribution)
7. [License](#license)

---

## Overview

Zel was created with the philosophy of **less bloat, more clarity**. Unlike other low-level languages that tend to require verbose boilerplate or obscure constructs, Zel emphasizes **simplicity without sacrificing power**.

Inspired by languages such as **C, Zig, OCAML, Rust, and Go**, Zel provides modern language constructs, **static strong typing**, and **compile-time guarantees** while compiling down to **clean, readable C code**.

Key design principles:

* **No hidden flows** – what you type is what is generated.
* **Polymorphism without traditional OOP** – flexible abstraction without classes.
* **Minimalist syntax** – designed to reduce cognitive load and boilerplate.
* **Transpiles to pure C** – ensuring compatibility with virtually any platform.

---

## Features

Zel comes packed with several modern and unique features:

* **Static Typing** – ensures errors are caught at compile time.
* **Strong Type System** – inspired by OCAML, prevents implicit type coercion.
* **ASYNC Concurrency** – built-in asynchronous programming for high-performance tasks.
* **No hidden flows** – transparency in compiled output, all code paths are explicit.
* **Polymorphism without traditional OOP** – abstract behavior without classes.
* **Transpiles to C** – runs anywhere a C compiler runs.
* **Minimal boilerplate** – write less code without losing clarity.
* **Predictable compilation** – what you type is exactly what gets generated.
* **ZPM: Zel Package Manager** – install community-made libraries directly via command line:

  ```
  ```

zpm install raylib


> Zel is still in early development. Expect it to be barebones, but the foundations are designed to grow into a full-featured low-level language.

---

## Hello World
````
```zel
const std = requires("std");

fn main() {
  std.println("Hello World from Zel!");
}
````

### Variables and Types

```zel
const age: int = 25;
const name: string = "Zel Developer";

fn greet() {
    std.println("Hello, "..name.. "!");
}
```

### Functions

```zel
fn add(a: int, b: int) -> int {
    return a + b;
}

const sum = add(5, 10);
```

### Loops & Conditionals

```zel
fn count_to_ten() {
    for (i in 1 --> 10) {
        std.println(i);
    }

    if (sum > 10) {
        std.println("Sum is greater than 10!");
    }
}
```

---

## Tooling

Zel comes with several tools to streamline development:

* **Zel Compiler** – transpiles Zel code to **pure C** for execution.
* **ZPM (Zel Package Manager)** – built-in package manager to install community libraries.
* **Cross-platform** – runs wherever a C compiler exists, including Windows, Linux, and macOS.
* **Transparent compilation** – no hidden flows; compiled C code mirrors your Zel code.

Usage example with ZPM:

```bash
zpm install raylib
```

Compile a Zel file:

```bash
zelc main.zel
./main
```

---

## Installation

Zel requires the **Clang C compiler** to run.

1. Install Clang (if not already installed):

   * **macOS**: `brew install llvm`
   * **Linux (Ubuntu/Debian)**: `sudo apt install clang`
   * **Windows**: Use LLVM installer or WSL

2. Clone the Zel repo:

```bash
git clone https://github.com/yourusername/zel.git
cd zel
```

3. Build or run your Zel compiler (if prebuilt binaries aren’t available yet):

```bash
make
./zelc main.zel
```

> Zel is designed to run anywhere a C compiler exists.

---

## Contribution

Zel is **very early in development**. At this stage:

* We are mostly looking for **ideas, feedback, and discussions**.
* Code contributions are limited until the compiler foundations are built.

Join the official Zel Discord to discuss, report bugs, or help guide development:
[https://discord.gg/quqwft5jNn](https://discord.gg/quqwft5jNn)

---

## License

Zel is **open-source** and managed by the **Zel Programming Language Foundation (ZLF)**.

All contributions and usage follow the ZLF guidelines.

---

## Roadmap

* Complete the **Zel compiler core logic**.
* Expand **standard library** (`std`) functions.
* Add **robust type inference** and **polymorphism utilities**.
* Enhance **ZPM ecosystem** with community libraries.
* Create **official documentation site** with syntax reference and tutorials.
