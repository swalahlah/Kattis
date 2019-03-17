#include <iostream>

using namespace std;

int main()
{
    long long int capacity,leave,enter,stay,current = 0;
    int stops;
    bool possible = true;
    cin >> capacity >> stops;
    for(long long int i = 0; i < stops-1; i++){
      cin >> leave >> enter >> stay;
      if(leave > current)
        possible = false;
      current += enter-leave;
      if(current > capacity || (stay != 0 && current < capacity))
        possible = false;
    }
      cin >> leave >> enter >> stay;
      if(leave > current)
        possible = false;
      current += enter - leave;
      if(current != 0  || stay !=0 )
        possible = false;
    if (possible)
        cout << "possible" << endl;
    else
        cout << "impossible" << endl;
    return 0;
}
