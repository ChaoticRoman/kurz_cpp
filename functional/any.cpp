#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

void print(const vector<int> &v)
{
    for (const int item: v)
    {
        cout << item << " ";
    }
    cout << endl;
}

void modify(vector<int> &v)
{
    for (int &item: v)
    {
        item = 5;
    }
    v.push_back(15);
}

int main() {
    vector<int> v(10, 1);
    v.at(5) = 11;
    print(v);

    cout << any_of(v.begin(), v.end(), [](int x) { return x >= 11; }) << endl;

/*
    modify(v);
    print(v);*/
}
