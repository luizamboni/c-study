C study
===

## Compile c files 
```
gcc main.c [other c files]
```

## link files 
```
gcc -Wall -g -o app main.c [other c files] -lm
```
## Example
cd 1-basics && \
    gcc -o app main.c sum.c \
    ./app \
    cd ..

