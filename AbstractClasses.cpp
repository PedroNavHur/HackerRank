// Write your MyBook class here
class MyBook : public Book{
    //   Class Constructor
    //
    //   Parameters:
    //   title - The book's title.
    //   author - The book's author.
    //   price - The book's price.
    //
    // Write your constructor here
  public:
    MyBook(string t, string a, int p) : Book(t, a), price(p) {}

    //   Function Name: display
    //   Print the title, author, and price in the specified format.
    //
    // Write your method here
    void display(){
      cout << "Title: " << this->title << endl
           << "Author: " << this->author << endl
           << "Price: " << this->price << endl;
    }

  private:
    int price;

// End class
};
