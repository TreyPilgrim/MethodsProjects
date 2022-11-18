# include <string>
# include <vector>
using namespace std;
class Inventory{
	protected:
	string Name="";
	string directorName="";
	string genre="";
	float price=0.0;
	int stock=0;
	int movieID=0;
	public:
	Inventory();
	Inventory(string Name, string directorName, string genre, float price, int stock, int movieID);
	void readfile(vector<Inventory> &list);
	void viewAllInventory(vector<Inventory> &list);
	void viewByDirector(vector<Inventory> &list);
	void viewByGenre(vector<Inventory> &list);
	void viewLowtoHigh(vector<Inventory> &list);
	void ViewHightoLow(vector<Inventory> &list);
	int getStock();
	int getPrice();
	string getName();
	int getMovieID();
	string getDirectorName();
	string getGenre();
	void setMovieID(int movieID);
	void setStock(int price);
	bool searchByName(vector<Inventory>&list ,string Name);
	bool searchByDirector(vector<Inventory>&list, string directorName);
	bool searchByGenre(vector<Inventory>&list, string genre);
	void processFile();

};
	
	
