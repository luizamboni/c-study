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
```
cd 1-basics && \
    gcc -o app main.c sum.c \
    ./app \
    cd ..
```

## Conan example
```shell
brew install conan
```

To install dependencies, `--build` argument is to build dependencies
```shell
mkdir build && cd build

conan install .. --build=missing
# conan install .. --build=missing to build all missing deps
# conan install .. --build=poro to build specifc dep

cmake .. -G "Unix Makefiles" -DCMAKE_BUILD_TYPE=Release
conan install . --build=missing
cmake --build . 
```