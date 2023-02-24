#include <iostream>

using namespace std;

int main()  {

    cout<<"Hello, and welcome to Luke's Carpet Cleaning Service!"<<endl;
    int small_rooms {0};
    int big_rooms {0};
    cout<<"How many small rooms would you like cleaned? ";
    cin>>small_rooms;
    cout<<"How many large rooms would you like cleaned? ";
    cin>>big_rooms;

    const int price_small_room {25};
    const int price_big_room {35};
    const float tax {0.06};
    int cost = small_rooms * price_small_room + big_rooms * price_big_room;
    float sales_tax = cost * tax;
    cout<<"\n+++Estimate for carpet cleaning service+++"<<endl;
    cout<<"Number of small rooms: "<<small_rooms<<endl;
    cout<<"Number of big rooms: "<<big_rooms<<endl;
    cout<<"Price per small room: $"<<price_small_room<<endl;
    cout<<"Price per big room: $"<<price_big_room<<endl;
    cout<<"Cost: $"<<cost<<endl;
    cout<<"Tax: $"<<sales_tax<<endl;
    cout<<"++++++++++++++++++++++++"<<endl;
    cout<<"Total Estimate: $"<<cost + sales_tax<<endl;
    cout<<"This estimate is valid for 30 days"<<endl;
}