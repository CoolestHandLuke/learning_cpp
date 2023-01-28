
output: main.o Account.o Savings_Account.o Account_Util.o
	g++ main.o Account.o Savings_Account.o Account_Util.o -o output

main.o: main.cpp
	g++ -c main.cpp

Account.o: Account.cpp
	g++ -c Account.cpp

Savings_Account.o: Savings_Account.cpp
	g++ -c Savings_Account.cpp

Account_Util.o: Account_Util.cpp
	g++ -c Account_Util.cpp
	
clean: 
	rm *.o output