# Unit-Test Exercise

This exercise aims to introduce you to unit-testing. The repository already
contains multiple components that shall be tested. It also provides one
unit-test as an example.

## Content
The `src` directory contains these classes:

- Book ([Header](src/Book.h) [Implementation](src/Book.cpp))

The `tst` directory contains the corresponding tests:

- [BookTest](tst/BookTest.cpp)

## Building the software
The build-system is managed using *CMake.* Thus CMake is needed to build the
software. IDEs like *Visual Studio* and *CLion* come with a bundled CMake
installation.

*(If you use an IDE, you most likely don't have to run these steps, as the
IDE will handle CMake automatically. In some IDEs you have to declare the
project as a CMake-project though.)*

To generate the build-system on windows run

```
mkdir build
cd build
cmake -G "Visual Studio XX" ..
```

replacing `Visual Studio XX` with your VS generator. The available generators
can be listed using `cmake -G`.  
On Linux replace `Visual Studio XX` with your desired build-tool or don't
specify the `-G` option at all to use the default generator (usually Make).

Once the build-system has been generated, you can build the software by running

```
cmake --build .
``` 

This will invoke the build-tool, which in turn invokes the compiler and linker.

## Third-Party Software
This project uses the [Catch2](https://github.com/catchorg/Catch2) library under
the *BSL 1.0* license.
