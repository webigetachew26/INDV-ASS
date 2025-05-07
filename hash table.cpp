#include <iostream>
using namespace std;

class HashTable {
private:
    int* table;
    int size;

    // Simple hash function
    int hashFunction(int key) 
    {
        return key % size;
    }

public:
    HashTable(int s) : size(s) 
    {
        table = new int[size];
        for (int i = 0; i < size; i++) 
        {
            table[i] = -1; // Initialize table with -1 (indicating empty)
        }
    }

    ~HashTable() 
    {
        delete[] table; // Free the allocated memory
    }

    void insert(int key) 
    {
        int index = hashFunction(key);
        while (table[index] != -1) 
        { // Linear probing for collision resolution
            index = (index + 1) % size;
        }
        table[index] = key;
    }

    int search(int key) 
    {
        int index = hashFunction(key);
        int startIndex = index;

        while (table[index] != -1) 
        {
            if (table[index] == key) 
            {
                return index; // Key found
            }
            index = (index + 1) % size;
            if (index == startIndex) 
            {
                break; // Full loop around the table
            }
        }

        return -1; // Key not found
    }
};

int main() {
    HashTable hashTable(10); // Create a hash table of size 10

    // Insert elements
    hashTable.insert(1);
    hashTable.insert(3);
    hashTable.insert(5);
    hashTable.insert(7);
    hashTable.insert(9);

    // Search for a target
    int target = 7;
    int result = hashTable.search(target);

    if (result != -1) 
    {
        cout << "Target found at index: " << result << endl;
    } else 
    {
        cout << "Target not found in the hash table." << endl;
    }

    return 0;
}