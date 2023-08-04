#!/bin/bash

# Compile each .c file into an object file
for file in *.c; do
    if [ -f "$file" ]; then
        gcc -c "$file" -o "${file%.c}.o"
    fi
done

# Create the static library
ar rcs liball.a *.o

# Clean up by removing object files
rm -f *.o

echo "Static library liball.a created successfully!"
