<meta property="og:image" content="https://raw.githubusercontent.com/vincentto13/minimal-snake/master/demo.gif" />
## Mini C++ Snake
This is a try to write minimal Snake game (best known from old cellphones) written in C++. That
is functional, and works in linux terminal The code still can be shrinked but as for now it is:

```sh
> wc snake.min.cpp
  8  25 669 snake.min.cpp
  
> tr -d '[:space:] ' < snake.min.cpp | wc -c
644
```

It was inspired by (found somewhere in the internet) C+64 version of snake. Mine is not that small... yet :wink:

#### Requirements
It requries ncurses
Can be run on linux/cygwin terminal

#### How to build
Use the standard cmake mechnanism
```sh
mkdir build
cd build
cmake .. && make
```

#### Steering
Like in most FPP games :wink: W, S, A, D. (No caps)

#### Demo
<p align="center">
<img src="https://raw.githubusercontent.com/vincentto13/minimal-snake/master/demo.gif">
</p>

#### Issues
As for now the implementation isn't perfect. The 'X' char is being put randomly. So it can be placed on snake, and then wipedout.
