all: geometry

geometry: 
    gcc -g -Wall -o geometry geometry.c

 clean:
     $(RM) myprog