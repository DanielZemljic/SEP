#include <iostream>
#include <vector>

int main()
{
  //empty container constructor (with no elements)
  std::vector<int> first;

  //fill constructor (created with n elements)
  std::vector<int> second(4, 100);

  //range constructor (as many elements with in range [first, last])
  std::vector<int> third(second.begin(), second.end());

  //copy constructor (a container with a copy of each element)
  std::vector<int> fourth(third);

  //move constructor (with alloc, different from x the elements are moved)
  //the iterator constructor can also be used to construct from arrays:
  int myints[] = {16, 2, 77, 29};
  std::vector<int> fifth(myints, myints + sizeof(myints) / sizeof(int));
  //                     start -->   end

  std::cout << "The contents of fifth are:";
  for (std::vector<int>::iterator it = fifth.begin(); it != fifth.end(); ++it)
  {
      std::cout << ' ' << *it;
      std::cout << '\n';
  }

}
