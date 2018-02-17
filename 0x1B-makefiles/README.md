# 0x1B-makefiles

## Makefiles
### 0-Makefile
* Use `make -f 0-Makefile` to name executable `holberton`
  * Uses rule `all` to build executable

### 1-Makefile
* Use `make -f 1-Makefile` to name executable `holberton`
  * Uses rule `all` to build executable
  * Uses variables `CC`, `SRC`, `OBJ`, `NAME`
    * `CC`: compiler to use
    * `SRC`: `.c` files

### 2-Makefile
* Use `make -f 2-Makefile` to name executable `holberton`
  * Uses rule `all` to build executable
  * Uses variables `CC`, `SRC`, `OBJ`, `NAME`
    * `OBJ`: `.o` files
    * `NAME`: name of the executable 

### 3-Makefile
* Use `make -f 3-Makefile` to name executable `holberton`
  * Uses rules
    * `all`: builds executable
    * `clean`: deletes emacs and vim temporary files + executable
    * `oclean`: deletes object files
    * `fclean`: deletes emacs temporary files, executable, and object files
    * `re`: force recompilation of all source files
  * Uses variables `CC`, `SRC`, `OBJ`, `NAME`, `RM`
    * `RM`: program to delete files

### 4-Makefile
* Use `make -f 3-Makefile` to name executable `holberton`
  * Uses rules `all`, `clean`, `oclean`, `fclean`, `re`
  * Uses variables `CC`, `SRC`, `OBJ`, `NAME`, `RM`, `CFLAGS`
    * `CFLAGS`: favorite compiler flags `-Wall -Werror -Wextra -pedantic`

### 5-island_perimeter.py
* Python function to find the perimeter of an island within a grid
  * `grid` is surrounded by water, 0 is water, 1 is land
  * There is no water within the island

