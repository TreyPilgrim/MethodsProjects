#pragma once
#include "Node.h"
#include <string>
#include <vector>

using std::vector;
using std::string;
class DoublyLink
{
private:
    // attributes
    Node* head{nullptr};
    Node* tail {nullptr};

    // Private Member Functions Below //

    // Node return type
    Node* getPlayer(const string& name, Node* node);

    // void return type
    static void displayPlayer(Node* player);
    void searchList (int value, Node* player);
    void searchList (const string& stat, const string& val, Node* player);
    void displayDatabase(Node* player);

    // bool return type
    bool findPlayer (string name, Node* player);
    bool findPlayer (string name);
    bool removePlayer (string name, Node* player);

    string compareNames (string name1, string name2);


public:

    // Void return type
    void append(string name);
    void prepend (string name);
    void addPlayer (string& name);
    void searchList (int value);
    void searchList (string stat, string value);
    void displayDatabase();

    // Bool return type
    bool removePlayer(string name);
    bool peek();




};