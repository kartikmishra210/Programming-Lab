# C-Programming

- C is a low-level language often helpful to directly access hardware components and is very close to Assembly language.

- C is a compiled language i.e. it uses a compiler to compile the program first and then run it.

- A C program, like many other languages starts from including libraries, a standard library for example is ```stdio.h``` which is the Standard Input Output Library, the ```.h``` implies that it is a header file. A header file inclusion tells the preprocessor to copy the code in the included header and strip the "Pre-processor Directive" which is ```#include <stdio.h>``` and then passes the code onto Compiler which later compiles it.

- Note that Compiler has to process the code first before running it, this means that any changes in the code must be re-compiled before running, unlike Interpreted Languages, the code isn't compiled line by line.

- Here's a sample C code for Hello World :

```
#include <stdio.h>

void main()
{
printf("Hello World!");
}
```
Now the first line is Pre-Processor Directive, Second line has ```void``` which is the ReturnType and after that our function is defined, which is indicated by ```()``` after our function name and the we define the body of the function in curly braces, after each line we put a semi-colon to signify the end of the line.

- After we write our program and save it, we compile it using ```gcc``` which is the GNU Compiler Collection which includes the compiler for our C code. 

- For compiling we use the command ``` gcc inputfile.c -o outputfile```, now gcc compiles our code and saves it as the output. One interesting thing to note is that if we do not specify the output ```-o``` we get a file named ```a.out``` which is the default output object file for our ```gcc```
