#!/bin/bash

# Compile all .c files in the current directory into object files
gcc -c *.c

# Create the static library liball.a from the object files
ar -rc liball.a *.o

# Index the library
ranlib liball.a

# Clean up by removing the object files
rm -f *.o
