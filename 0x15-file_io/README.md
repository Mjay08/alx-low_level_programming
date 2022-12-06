THE FILE I/O TASK

It creates, open, close, read, and write files using the I/O system calls.



Task 0- 0.read_textfile----is a function that reads a text file and prints it to the POSIX standard output. It returns the actual number of letters it could read and print



Task 1- 1.create_file----is a function that creates a file. It returns 1 on success, -1 on failure (file can not be created, file can not be written, write “fails”, etc…) and the created file must have those permissions: rw-------. If the file already exists, do not change the permissions, if the file already exists, truncate it



Task 2- 2.append_text_to_file----is a function that appends text at the end of a file. It returns 1 on success and -1 on failure



Task 3- 3.cp----is a program that copies the content of a file to another file.

how to use it: cp file_from file_to

if the number of argument is not the correct one, exit with code 97 and print followed by a new line, on the POSIX standard error and if file_to already exists, truncate it

if file_from does not exist, exit with code 98 and print Error followed by a new line, on the POSIX standard error, if you can not create or if write to file_to fails, exit with code 99 and print error.

if you can not close a file descriptor , exit with code 100 and print Error as well followed by a new line, on the POSIX standard error

Permissions of the created file will be  rw-rw-r--. If the file already exists, do not change the permissions



Task 100- 100.elf----is a program that displays the information contained in the ELF header at the start of an ELF file.

how to use it: elf_header elf_filename

displayed information: (not less, not more)

Magic, Class, Data, Version, OS/ABI, ABI Version, Type, Entry point address

format: the same as readelf -h (version 2.26.1)

if the file is not an ELF file, or on error, exit with status code 98 and display a comprehensive error message to stderr

