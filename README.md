# Forking-vs-Threads
## C Language code to demonstrate the working of Threads and how they are compared to the standard Processes.

To demonstrate the difference, the program contains a global variable initialised to 10. At some point, the program fork()s and creates a child process. The parent
process increments the global variable linearly upto 100 (i.e. 11, 12, 13....,100).
The child process does the opposite, i.e. decrements linearly upto -90. Both
the parent and child processes prints the value of the variable.\\ This process is repeated using pthread create(), where the parent threat incre-
ments the global variable linearly upto 100 (i.e. 11, 12, 13....,100). The child thread does the opposite, i.e. decrements linearly upto -90. Both the parent
and child threads should print the value of the variable.\\ Observe the difference in the output.\\ Run: using Makefile\\ Detiled Explaination: writeup.pdf
