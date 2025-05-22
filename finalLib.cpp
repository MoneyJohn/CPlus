#include<iostream>
#include<string>
#include<vector>

class User{
    private:
    std::string name;
    int userID;
    std::vector<std::string> books;
    public:
    User(std::string n, int id){
        name = n;
        userID = id;
    }
    int getID(){
        return userID;
    }
    std::string getName(){
        return name;
    }
    void displayBorrowedBooks(){
        std::cout<<"Books borrowed by "<<name<<":"<<std::endl;
        if(books.empty()){
            std::cout<<"None"<<std::endl;
        }else{
            for(int i = 0; i<books.size(); i++){
                std::cout<<books[i]<<std::endl;
            }
        }
    }
    void borrowBook(std::string title){
        books.push_back(title);
    }
    void returnBook(std::string title){
        for (int i=0;i < books.size();i++) {
            if (books[i]== title){
                books.erase(books.begin()+ i);
            }
        }
    }     
};

class Book{
    private:
    std::string title;
    std::string author;
    int availableCopies;
    public:
    Book(std::string t, std::string a, int ac){
        title =t;
        author = a;
        availableCopies = ac;
    }
    std::string getTitle(){
        return title;
    }
    std::string getAuthor(){
        return author;
    }
    int getAvailableCopies(){
        return availableCopies;
    }
    void setAvailableCopies(int ac){
        availableCopies =ac;
    }
    void displayDetails(){
        std::cout<<"Title: "<<title<<", Author: "<<author<<", Available Copies: "<<availableCopies<<std::endl;
    }
};

class Library{
    private:
    std::string name;
    std::vector<Book> books;
    std::vector<User> users;
    public:
    Library(std::string n){
        name = n;
    }
    void addUser(User user){
        users.push_back(user);
    }
    void addBook(Book book){
        books.push_back(book);
    }
    void displayBooks(){
        std::cout<<"Books: "<<std::endl;
        if(books.empty()){
            std::cout<<"None"<<std::endl;
        }else{
            for(int i = 0; i<books.size(); i++){
                books[i].displayDetails();
            }
        }
    }
    void displayUsers(){
        std::cout<<"Users: "<<std::endl;
        if(users.empty()){
            std::cout<<"None"<<std::endl;
        }else{
            for(int i = 0; i<users.size(); i++){
                users[i].displayBorrowedBooks();
            }
        }
    }
    void borrowBook(std::string title, int userID){
        for(int i = 0; i<books.size(); i++){
            int availableCopies = books[i].getAvailableCopies();
            if (books[i].getTitle() ==title){
                if (availableCopies == 0){
                    std::cout<<title<< " is not available for user "<<userID<<std::endl;
                }else{      
                    std::cout<<"User "<<userID<<" borrows title: "<<title<< std::endl;              
                    for(int i = 0; i<users.size(); i++){
                        if (users[i].getID() == userID){
                            users[i].borrowBook(title);
                        }
                    }
                    books[i].setAvailableCopies(availableCopies - 1);
                }
            }
        }
    }
    void returnBook(std::string title, int userID){
        std::cout<<"User "<<userID<<" returns title: "<< title << std::endl;
        for(int i = 0; i<books.size(); i++){
            if (books[i].getTitle() == title){
                books[i].setAvailableCopies(books[i].getAvailableCopies() + 1);
                for(int i = 0; i<users.size(); i++){
                    if (users[i].getID() == userID){
                        users[i].returnBook(title);
                    }
                }
            }
        }
    }
    void removeBook(std::string title) {
        for(int i = 0; i<books.size(); i++){
            if (books[i].getTitle() == title){
                books.erase(books.begin() + i);
            }
        }
    }  
};

int main() {
    Library lib("My Library");
    User u_1 = User("Alice Smith", 1);
    User u_2 = User("Bob Jones", 2);
    User u_3 = User("Max Johnson", 3);
    Book b_1 = Book("1984", "George Orwell", 3);
    Book b_2 = Book("The Hobbit", "J.R.R. Tolkien", 2);
    lib.addUser(u_1);
    lib.addUser(u_2);
    lib.addUser(u_3);
    lib.addBook(b_1);
    lib.addBook(b_2);
    lib.displayBooks();
    lib.displayUsers();
    std::cout<<" "<<std::endl;
    lib.borrowBook("1984", 1);
    lib.borrowBook("The Hobbit", 2);
    lib.borrowBook("The Hobbit", 1);
    lib.borrowBook("The Hobbit", 3); 
    std::cout<<" "<<std::endl;
    lib.displayBooks();
    lib.displayUsers();
    std::cout<<" "<<std::endl;
    lib.returnBook("1984", 1);
    lib.displayBooks();
    lib.displayUsers();
    std::cout<<" "<<std::endl;
    lib.removeBook("1984");
    lib.returnBook("The Hobbit", 1);
    lib.borrowBook("The Hobbit", 3);
    std::cout<<" "<<std::endl;
    lib.displayBooks();
    lib.displayUsers();
    return 0;
}