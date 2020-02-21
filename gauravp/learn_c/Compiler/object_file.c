/*
 * An object file is an intermediate file between source code and executable.
 * This file is in machine redable format, so that your source code is protected.
 * We cannot directly run an object file. We need to link this to an executable.
 * To create an object file:
 * gcc program_name.c -o object_file_name.c
 *
 * USES:
 * 	1.  The primary use of object file (as per my understanding) is to protect the source code.
 * 	    This is because the object file is the compiled code of your program and is in machine redable form.
 * 	    There is no scope for disassembly or reverse engineering of the object code to source code in C.
 * 	    Refer: https://stackoverflow.com/questions/2346754/getting-source-from-object-file
 *
 * 	2.  If there are a lot of object files, these files can be linked to one executbles and executed as a single program.
 * 	    This is mostly for programs which has differnt modules. There can be an object file for each module and at the end
 * 	    all these object files can be linked together to one single excutable file.
 *
 * ANALYSIS:
 * 	Created an object file of my code pointer_1.c.
 * 	The analysis of the file size is as follows:
 *
 * 	+-------------+--------------+-----------+
 *      | File Type   |   File name  | File Size |
 *      +-------------+--------------+-----------+
 *      | source code | pointers_1.c | 640 bytes |
 *      +-------------+--------------+-----------+
 *      | object file | pointers.o   | 8.4 kB    |
 *      +-------------+--------------+-----------+
 *      | Executable  | a.out        | 8.4 kB    |
 *      +-------------+--------------+-----------+
 */
