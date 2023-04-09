#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Student {
public:
    string name;
    int roll_no;
    int grade;
};

class HashTable {
private:
    int size;
    vector<vector<Student>> table;
public:
    HashTable(int size) {
        this->size = size;
        this->table.resize(size);
    }
    
    int hash_func(int roll_no) {
        return roll_no % size;
    }
    
    void insert_chaining_without_replacement(Student student) {
        int index = hash_func(student.roll_no);
        if (table[index].size() == 0) {
            table[index].push_back(student);
        }
        else {
            for (int i = 0; i < table[index].size(); i++) {
                if (table[index][i].roll_no == student.roll_no) {
                    cout << "Error: Roll no. already exists" << endl;
                    return;
                }
            }
            table[index].push_back(student);
        }
    }
    
    void insert_chaining_with_replacement(Student student) {
        int index = hash_func(student.roll_no);
        if (table[index].size() < 2) {
            table[index].push_back(student);
        }
        else {
            int probe_index = index;
            while (table[probe_index].size() >= 2) {
                probe_index = (probe_index + 1) % size;
                if (probe_index == index) {
                    cout << "Error: Hash table is full" << endl;
                    return;
                }
            }
            table[probe_index].push_back(student);
        }
    }
    
    void display() {
        for (int i = 0; i < size; i++) {
            cout << "Index " << i << ": ";
            for (int j = 0; j < table[i].size(); j++) {
                cout << "(" << table[i][j].name << ", " << table[i][j].roll_no << ", " << table[i][j].grade << ")";
                if (j != table[i].size() - 1) {
                    cout << " -> ";
                }
            }
            cout << endl;
        }
    }
};

int main() {
    HashTable hash_table(10);
    Student s1 = {"John", 1001, 85};
    Student s2 = {"Adi",2001,96};
    Student s3 = {"Mary", 2002, 92};
    Student s4 = {"Aryan", 3002,91};
    Student s5 = {"Yash", 4002, 82};
    Student s6 = {"Bob", 3003, 78};
    Student s7 = {"Alice", 4004, 80};
    Student s8 = {"vansh", 5004, 90};
    Student s9 = {"Tom", 5005, 90};
    hash_table.insert_chaining_without_replacement(s1);
    hash_table.insert_chaining_without_replacement(s2);
    hash_table.insert_chaining_without_replacement(s3);
    hash_table.insert_chaining_without_replacement(s4);
    hash_table.insert_chaining_without_replacement(s5);
    hash_table.insert_chaining_without_replacement(s6);
    hash_table.insert_chaining_without_replacement(s7);
    hash_table.insert_chaining_without_replacement(s8);
    hash_table.insert_chaining_without_replacement(s9);
    hash_table.display();
    return 0;
}