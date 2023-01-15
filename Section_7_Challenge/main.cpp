#include <iostream>
#include <vector>

using namespace std;

/* Very simple tutorial program used to get a better understanding of using vectors */

int main() {

    vector <int> vector1;
    vector <int> vector2;

    vector1.push_back(10);
    vector1.push_back(20);
    cout<<"Vector 1\n"<<vector1.at(0)<<" "<<vector1.at(1)<<" "<<vector1.size()<<endl;

    vector2.push_back(100);
    vector2.push_back(200);
    cout<<"Vector 2\n"<<vector2.at(0)<<" "<<vector2.at(1)<<" "<<vector2.size()<<endl;

    vector<vector<int>> vector_2d;
    vector_2d.push_back(vector1);
    vector_2d.push_back(vector2);
    cout<<"2-D Vector"<<endl;
    cout<<vector_2d.at(0).at(0)<<" "<<vector_2d.at(0).at(1)<<endl;
    cout<<vector_2d.at(1).at(0)<<" "<<vector_2d.at(1).at(1)<<endl;

    vector1.at(0) = 1000;

    cout<<vector_2d.at(0).at(0)<<" "<<vector_2d.at(0).at(1)<<endl;
    cout<<vector_2d.at(1).at(0)<<" "<<vector_2d.at(1).at(1)<<endl;

}