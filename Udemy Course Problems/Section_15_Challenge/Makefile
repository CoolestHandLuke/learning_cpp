
output: main.o Account.o Savings_Account.o Account_Util.o Checking_Account.o Trust_Account.o
	g++ main.o Account.o Savings_Account.o Account_Util.o Checking_Account.o Trust_Account.o -o output

main.o: main.cpp
	g++ -c main.cpp

Account.o: Account.cpp
	g++ -c Account.cpp

Savings_Account.o: Savings_Account.cpp
	g++ -c Savings_Account.cpp

Account_Util.o: Account_Util.cpp
	g++ -c Account_Util.cpp

Checking_Account.o: Checking_Account.cpp
	g++ -c Checking_Account.cpp

Trust_Account.o: Trust_Account.cpp
	g++ -c Trust_Account.cpp
	
clean: 
	rm *.o output