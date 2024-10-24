#include <utility>

using namespace std;

class GridItem
{
private:
  int x, y, width, hieght;

public:
  static int Itemcount;
  GridItem(int x, int y, int width, int height) : GridItem() {
    this->x = x;
    this->y = y;
    this->width = width;
    this->hieght = hieght;
    Itemcount++;
  }

  void setCoordinates(int x, int y) {
    this->x = x;
    this->y = y;
  }
  std::pair<int,int> getCoordinates() {
    return make_pair(x,y);
  }
  int getGridWidth() {return width;}
  int getGridHeight() {return hieght;}
  int getActiveGridItemCount() {return Itemcount;}

  virtual ~GridItem() {
    this->Itemcount--;
  }

  GridItem(/* args */) {
    this->x = 0;
    this->y = 0;
    this->width = 0;
    this->hieght = 0;
    //this->Itemcount++;
  }
};

int GridItem::Itemcount;