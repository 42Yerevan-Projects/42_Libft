# 42_Libft
Libft is a small C project in which I created my own library

### TOC
* [What is libft?](#what-is-libft)
* [What's in it?](#what-is-in-it)

## What is libft?
Libft is an individual project at 42 that requires us to re-create some standard C library functions including some additional ones that can be used later to build a library of useful functions for the rest of the program.

Disclaimer: *Reinventing the wheel is bad, 42 makes us do this just so we can have a deeper understanding of data structures and basic algorithms. At 42 we're not allowed to use some standard libraries on our projects, so we have to keep growing this library with our own functions as we go farther in the program.*

## What is in it?

According to [project pdf](en.subject.pdf) there should be 4 sections:

1.  **Libc Functions:** Some of the standard C functions.
2.  **Additional functions:** Functions 42 deems will be useful for later projects.
3.  **Bonus Functions:** Functions 42 deems will be useful for linked list manipulation.
4.  **Personal Functions:** Functions I believe will be useful later.

# Notes:

- Most of the the files and function names are namespaced with an **ft** in front. It stands for Forty Two
- The project instructions require that we put all the source files in the root directory but for the sake of this Github repo, I separate them into sub folders.

### How does it work?

The goal is to create a library called libft.a from the source files so I can later use that library from other projects at 42.

To create that library, after downloading/cloning this project, **cd** into the project and call make:

	git clone https://github.com/42Yerevan-Projects/42_Libft.git
	cd libft
	make

You should see a *libft.a* file and some object files (.o).

That's it! If you're having some problems with the code, just create an issue. I'll definitely check it out. 
If you're 42 student fill free to message me on discord.

### Additional information 
In order to use this library it should be compiled by the Makefile of the project that is going to use the library.
Make sure to implement make file correctly.
