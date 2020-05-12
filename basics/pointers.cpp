#include <iostream>
#include <memory>

using namespace std;

int main()
{
  int x = -42;

  int *p1 = &x;
  cout << *p1 << endl;


//  std::unique_ptr<int> p3(new int(3));
//  std::unique_ptr<int> p3 = &x;
//  std::unique_ptr<int> p4 = p3;

/*  cout << *p3 << endl;
  *p3 = 4;
  cout << *p3 << endl;*/


/*  std::shared_ptr<int> p5(new int(5));
  std::shared_ptr<int> p6 = p5;

  cout << *p5 << endl;
  cout << *p6 << endl;
  *p5 = 6;
  cout << *p5 << endl;
  cout << *p6 << endl;*/
}
