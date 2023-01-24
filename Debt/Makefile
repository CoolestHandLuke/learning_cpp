# This first section is telling the compiler to recompile both main and Debt
# anytime there is a change to either one of them and combine them together in
# to a single executable called output
output: main.o Debt.o
	g++ main.o Debt.o -o output
# This is specifying how main.o is created. It will come from main.cpp, created
# by g++ main.cpp, but the -c flag says "Don't create an exacutable but just create
# an object file, or a .o file"
main.o: main.cpp
	g++ -c main.cpp
# Same exact thing for the Debt.cpp file
Debt.o: Debt.cpp
	g++ -c Debt.cpp
# This isn't needed but is nice, a simple CLI input at then end to remove all files
# with a file extension of .o and the output file
# Run the command "make clean" to invoke this, removes all the files so you can re-make 
# everythinga again.
clean: 
	rm *.o output