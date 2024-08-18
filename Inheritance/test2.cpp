#include <iostream>
#include <string>

using namespace std;

class Publication {
  protected:
    string title;
    string author;
    int year;
  public:
    Publication(string title, string author, int year) : title(title), author(author), year(year) {}
    Publication() : Publication("No title", "No Author", 0) {}

    void print() {
      cout << "Title : " << this->title << endl;
      cout << "Author : " << this->author << endl;
      cout << "Year : " << this->year << endl;
    }
};

class Book : public Publication {
  private:
    string publisher;
    int num_pages;
    int ISBN;
  public:
    Book(string title, string author, int year, string publisher, int num_pages, int ISBN) : 
    Publication(title, author, year), publisher(publisher), num_pages(num_pages), ISBN(ISBN) {}
    Book() : Book("No title", "No Author", 0, " ", 0, 0) {}

    // void print() { // Modifying method
    //   Publication::print(); // Reusablity
    //   cout << "Publisher : " << this->publisher << endl;
    //   cout << "Num_pages : " << this->num_pages << endl;
    //   cout << "ISBN : " << this->ISBN << endl;
    // }

    void print(bool short_print) { // Overloading
      if (short_print) {
        Publication::print();
      } else {
        Publication::print();
        cout << "Publisher : " << this->publisher << endl;
        cout << "Num_pages : " << this->num_pages << endl;
        cout << "ISBN : " << this->ISBN << endl;
      };
    }
};

int main() {

  Book b("OOP", "Feras", 2022, "The Uni of Adelaide", 500, 12465);
  b.print(true); // Complete printing

  cout << endl;

  b.print(false); // Short print

  cout << endl;

  b.Publication::print(); // Short print

  cout << endl;

  return 0;
}