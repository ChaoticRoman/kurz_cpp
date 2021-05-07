#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void print(const vector<int> &v)
{
    for (const auto &item: v)
    {
        cout << item << " ";
    }
    cout << endl;
}

bool comp(int x, int y)
{
    return (x % 10) > (y % 10);
}

int main()
{
    vector<int> v {10, 43, 92, 21};
    print(v);

    sort(v.begin(), v.end());
    print(v);

/*    sort(v.begin(), v.end(),
         [](int ahoj, int psik){ return (ahoj%10) > (psik%10); }
    );*/

    sort(v.begin(), v.end(), &comp);
    print(v);
}
