#include <iostream>

int main()
{
  unsigned int count = 0;
  const unsigned int RANGE = 30;
  const unsigned int DIVISOR = 3;

  for(unsigned int x = 0; x <= RANGE; x++)
  {
    if(x % DIVISOR == 0)
    {
      std::cout << x << " " << " is divisible by " << DIVISOR << std::endl;
      count++;
    }
  }

  std::cout << "There are " << count << " numbers divisible by " << DIVISOR << std::endl;
  return 0;
}
