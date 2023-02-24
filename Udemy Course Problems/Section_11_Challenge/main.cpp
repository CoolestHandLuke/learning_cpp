#include <iostream>
#include <vector>

using namespace std;

void print_numbers(vector <int> &nums);
void add_numbers(vector <int> &nums);
void display_mean(vector <int> &nums);
void display_smallest(vector <int> &nums);
void display_largest(vector <int> &nums);

int main() {

    /* Program that allows users to manipulate a list of integers. The options are as follows
    P - Print numbers
    A - Add a number
    M - Display mean of the numbers
    S - Display the smallest number
    L - Display the largest number
    Q - Quit*/

    vector <int> nums;
    char command;

    while(true) {

        cout<<"Enter a command from the following:"<<endl;
        cout<<"P - Print numbers"<<endl;
        cout<<"A - Add a number"<<endl;
        cout<<"M - Display mean of the numbers"<<endl;
        cout<<"S - Display the smallest number"<<endl;
        cout<<"L - Display the largest number"<<endl;
        cout<<"Q - Quit"<<endl;
        cout<<"Commmand: ";
        cin>>command;
        
        if (command == 'Q' || command == 'q') {
            cout<<"Goodbye"<<endl;
            break;
        } 
        else if (command == 'p' || command == 'P') 
        {
            print_numbers(nums);
        } 
        else if (command == 'a' || command == 'A') 
        {
            add_numbers(nums);
        } 
        else if (command == 'm' || command == 'M')
        {
            display_mean(nums);
        } 
        else if (command == 's' || command == 'S')
        {
            display_smallest(nums);
        } 
        else if (command == 'l' || command == 'L')
        {
            display_largest(nums);
        } else {
            cout<<"Command not recognized"<<endl;
        }
    }
}

void print_numbers(vector <int> &nums)
{
    if (nums.size() == 0) {
        cout<<"[] - the list is empty"<<endl;
    } else {
        cout<<"[ ";
        for (int i {0}; i < nums.size(); i++) {
            cout<<nums[i]<<" ";
        }
        cout<<"]";
    }
}

void add_numbers(vector <int> &nums)
{
    int new_num;
    cout<<"Enter an integer to add to the list: ";
    cin>>new_num;
    nums.push_back(new_num);
    cout<<new_num<<" added"<<endl;
}

void display_mean(vector <int> &nums)
{
    if (nums.size() == 0) 
    {
        cout<<"Unable to calculate the mean - no data"<<endl;
    } else {
        double mean {0};
        int count {0};
        int sum {0};
        for (int i {0}; i < nums.size(); i++) {
            sum = sum + nums[i];
            count++;
        }
        mean = sum / count;
        cout<<"The mean of the list is: "<<mean<<endl;
    }
}

void display_smallest(vector <int> &nums)
{
    if (nums.size() == 0)
    {
        cout<<"Unable to determine smallest value - list is empty"<<endl;
    } else {
        int smallest {nums[0]};
        for (int i {0}; i < nums.size(); i++) {
            if (nums[i] < smallest) {
                smallest = nums[i];
            }
        }
        cout<<"The smallest number is "<<smallest<<endl;

    }

}

void display_largest(vector <int> &nums)
{
    if (nums.size() == 0) 
    {
        cout<<"Unable to determine largest value - list is empty"<<endl;
    } else {
        int largest {nums[0]};
        for (int i {0}; i < nums.size(); i++) {
            if (nums[i] > largest) {
                largest = nums[i];
            }
        }
        cout<<"The largest number is "<<largest<<endl;

    }
}