Simple Shell

This is a simple UNIX command line interpreter developed as part of a project. The shell allows users to execute commands and provides basic functionality commonly found in shell environments.
Usage

To run the shell, use the following command:

$ simple_shell

Features

The shell provides the following features:

    Display a prompt and wait for the user to enter a command. The prompt is displayed after each command execution.
    Execute command lines consisting of a single word.
    Handle errors and display an error message if an executable cannot be found.
    Handle the "end of file" condition (Ctrl+D).
    Handle command lines with arguments.
    Implement the exit built-in command to exit the shell.
        Usage: exit
    Implement the env built-in command to print the current environment.
    Implement a custom getline function to read user input efficiently.
    Use a buffer to read multiple characters at once and minimize the use of the read system call.
    Implement the setenv and unsetenv built-in commands.

    setenv: Initialize or modify an environment variable. Command syntax: setenv VARIABLE VALUE
    unsetenv: Remove an environment variable. Command syntax: unsetenv VARIABLE

    Implement the cd built-in command to change the current directory of the process.

    Command syntax: cd [DIRECTORY]
    If no argument is given, cd is interpreted as cd $HOME.
    Handle the cd - command to switch to the previous directory.
    Update the PWD environment variable when changing the directory.

    Handle command separators ;, &&, and ||.
    Implement the alias built-in command to manage aliases.

    Usage: alias [name[='value'] ...]
    alias: Prints a list of all aliases, one per line, in the form name='value'.
    alias name [name2 ...]: Prints the aliases name, name2, etc., one per line, in the form name='value'.
    alias name='value' [...]: Defines an alias for each name with the given value. If name is already an alias, its value is replaced.

    Handle variable replacement.

    Handle the $? variable to represent the exit status of the last command.
    Handle the $$ variable to represent the shell's process ID.

    Handle comments using the # symbol.
    Accept a file as input.

    Usage: simple_shell [filename]
    The shell can take a file as a command line argument.
    The file should contain one command per line, and the shell will execute those commands before exiting.
    In this mode, the shell does not print a prompt and does not read from stdin.

Please note that not all features are available in the initial versions of the shell and are gradually added in subsequent versions.

Feel free to explore and use this simple shell for basic command execution and experimentation!
