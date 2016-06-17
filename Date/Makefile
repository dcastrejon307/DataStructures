all: date

date:	driver.o	Date.o 
	g++	driver.o	Date.o	-o	dateTest

driver.o: driver.cpp
	g++	-c	driver.cpp

Date.o: Date.cpp
	g++	-c	Date.cpp

spotless:
	rm *.o dateTest result.txt
