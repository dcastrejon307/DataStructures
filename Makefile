all: frac

frac:	driver.o	Fraction.o 
	g++	driver.o	Fraction.o	-o	fracTest

driver.o: driver.cpp
	g++	-c	driver.cpp

Fraction.o: Fraction.cpp
	g++	-c	Fraction.cpp

spotless:
	rm *.o fracTest result.txt
