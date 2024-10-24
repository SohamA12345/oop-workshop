#include <utility>
#include <cmath>

using namespace std;

class Helper
{
private:
  /* data */
public:
  double euclideanDistance(std::pair<int, int> item1, std::pair<int, int> item2) {
    int x_diff = item2.first - item1.first;
    int y_diff = item2.second - item2.second;
    return sqrt((x_diff*x_diff)+(y_diff*y_diff));    
  }

  Helper(/* args */) {}
  ~Helper() {}
};