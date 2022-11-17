# include <string>
class Inventory{
	protected:
	string Name;
	string directorName;
	string genre;
	int price;
	int stock;
	int movieID;
	public:
	Inventory();
	Inventory(string Name, string directorName, string genre, int price, int stock, int movieID)
	void readfile(vector<Inventory> &list);
	void viewAllInventory();
	void viewByDirector();
	void viewByGenre();
	void viewLowtoHigh();
	void ViewHighttoLow();
	int getStock();
	int getPrice();
	string getName();
	int getMovieID();
	string getDirectorName();
	string getGenre();
	void setMovieID(int movieID);
	void setStock(int price);
	bool searchByName(sting Name);
	bool serchByDirector(string directorName);
	bool searchByGenre(string genre);
	void processFile();
}
	
	
