#!/bin/bash

# Invoke the C program with two numbers
./sum 2 3 4

# Capture the exit code
EXIT_CODE=$?

# Check the exit code and print a message
if [ $EXIT_CODE -eq 0 ]; then
    echo "C program executed successfully."
else
    echo "Error: C program encountered an issue. Exit code: $EXIT_CODE"
fi
