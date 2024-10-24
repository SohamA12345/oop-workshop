#include <utility>

class GridItem
{
private:
  int x, y, width, hieght;
  static int Itemcount;
public:
  GridItem(int x, int y, int width, int height) : GridItem() {
    this->x = x;
    this->y = y;
    this->width = width;
    this->hieght = hieght;
  }

  void setCoordinates(int x, int y) {}
  std::pair<int,int> getCoordinates() {}
  int getGridWidth() {return width;}
  int getGridHeight() {return hieght;}
  int getActiveGridItemCount() {}
  virtual ~GridItem() {
    this->Itemcount--;
  }

  GridItem(/* args */) {
    this->x = 0;
    this->y = 0;
    this->width = 0;
    this->hieght = 0;
    this->Itemcount++;
  }
};