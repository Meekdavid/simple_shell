<<<<<<< HEAD
# David Mboko README

### Description
   This project is a simple UNIX command interpreter that replicates functionalities of the simple shell (sh). Additional functions are also included. This program was written entirely in C as a milestone project for ALX Africa Software Engineering.

### Installation
Clone this repository into your working directory. For best results, files should be compiled with GCC and the following flags: -Wall -Wextra -Werror -pedantic -std=gnu89


### Usage
After compilation, the resulting program can run stand-alone, either in interactive or non-interactive mode.

#### Included Built-Ins
Our shell has support for the following built-in commands:

exit [n]            - Exit the shell, with an optional exit status, n.                                          
env                 - Print the environment.                                                                    
setenv [var][value] - Set an environment variable and value. If the variable exists, the value will be updated. 
unsetenv [var]      - Remove an environment variable.                                                           
cd [dir]            - Change the directory.                                                                     
help [built-in]     - Read documentation for a built-in.

#### Non-Interactive Mode
In non-interactive mode, echo your desired command and pipe it into the program like this:

```sh
echo "ls" | ./shell
```

#### Interactive Mode
In interactive mode, simply run the program and wait for the prompt to appear. From there, you can type commands freely, exiting with either the "exit" command or ctrl-D.

In non-interactive mode, the program will exit after finishing your desired command(s).

                                                        


### Credits
 [Daaloray](https://github.com/Daaloray) 
 [Levi](https://github.com/fabulouslevi).
=======
# simple_shell
General
Who designed and implemented the original Unix operating system
Who wrote the first version of the UNIX shell
Who invented the B programming language (the direct predecessor to the C programming language)
Who is Ken Thompson
How does a shell work
What is a pid and a ppid
How to manipulate the environment of the current process
What is the difference between a function and a system call
How to create processes
What are the three prototypes of main
How does the shell use the PATH to find the programs
How to execute another program with the execve system call
How to suspend the execution of a process until one of its children terminates
What is EOF / “end-of-file”?
Copyright - Plagiarism
You are tasked to come up with solutions for the tasks below yourself to meet with the above learning objectives.
You will not be able to meet the objectives of this or any following project by copying and pasting someone else’s work.
You are not allowed to publish any content of this project.
Any form of plagiarism is strictly forbidden and will result in removal from the program.
Requirements
General
Allowed editors: vi, vim, emacs
All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
All your files should end with a new line
A README.md file, at the root of the folder of the project is mandatory
Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
Your shell should not have any memory leaks
No more than 5 functions per file
All your header files should be include guarded
Use system calls only when you need to (why?)
Write a README with the description of your project
You should have an AUTHORS file at the root of your repository, listing all individuals having contributed content to the repository. Format, see Docker
>>>>>>> d4477b6df50781fe60000a2cf3889e9e161711ab
