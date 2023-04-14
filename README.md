SIMPLE SHELL.

This is a simple UNIX command line interpreter written in C.
It provides a prompt for the user to input commands, executes the commands,
and displays the output.

GROUP PROJECT

Members:<a href = "https://github.com/PrimordialGod99">Chin Oh</a> & <a href = "https://github.com/Dragonixj">Elvis</a>

Welcome to the repository for our group project.

USAGE.
To use the Simple Shell, navigate to the directory where the program is installed and run
the executable file simple_shell:

shell
Copy code
$ ./simple_shell
Features

- Simple Shell 0.1
- Displays a prompt and waits for the user to type a command.
- A command line always ends with a new line.
- The prompt is displayed again each time a command has been executed.
- The command lines are simple, no semicolons, no pipes, no redirections, or any other advanced features.
- The command lines are made only of one word. No arguments will be passed to programs.
- If an executable cannot be found, an error message is printed, and the prompt is displayed again.
- Handles errors.
- Handles the "end of file" condition (Ctrl+D).
- Simple Shell 0.2
- Handles command lines with arguments.

Simple Shell 0.3

- Handles the PATH.
- Fork must not be called if the command doesn’t exist.
- Simple Shell 0.4
- Implements the exit built-in, which exits the shell.
- Does not handle any argument to the built-in exit.

Simple Shell 1.0

- Implements the env built-in, which prints the current environment.
- Requirements
- The program has been tested on Ubuntu 20.04.2 LTS.
- The program uses the C programming language and requires a C compiler.

Installation
To install the Simple Shell, follow these steps:

- Clone the repository:simple_shell

```
$ git clone https://github.com/your_username/simple_shell.git

```

Navigate to the simple_shell directory:

Copy code:

```
$ cd simple_shell

```

Compile the program:

Copy code:

```
$ gcc -Wall -Werror -Wextra -pedantic \*.c -o simple_shell

```

Run the program:

Copy code:

```
$ ./simple_shell

```

Authors
<a href = "https://github.com/PrimordialGod99">PrimordialGod99</a> && <a href = "https://github.com/Dragonixj">Dragonixj</a>.
