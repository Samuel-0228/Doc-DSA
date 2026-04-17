#include <iostream>
#include <string>
using namespace std;

// Student structure
struct Student
{
    int id;
    string name;
    string department;
    float gpa;
    Student *next;
};

// Function prototypes
void insertStudent(Student *&head);
void searchStudent(Student *head);
void deleteStudent(Student *&head);
void displayAll(Student *head);
void freeList(Student *head);

int main()
{
    Student *head = nullptr;
    int choice;

    cout << "=== Student Management System ===" << endl;

    while (true)
    {
        cout << "\n1. Insert Student\n";
        cout << "2. Search Student by ID\n";
        cout << "3. Delete Student by ID\n";
        cout << "4. Display All Students\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore(); // Clear input buffer

        switch (choice)
        {
        case 1:
            insertStudent(head);
            break;
        case 2:
            searchStudent(head);
            break;
        case 3:
            deleteStudent(head);
            break;
        case 4:
            displayAll(head);
            break;
        case 5:
            freeList(head);
            cout << "Program terminated!" << endl;
            return 0;
        default:
            cout << "Invalid choice! Try again." << endl;
        }
    }
    return 0;
}

void insertStudent(Student *&head)
{
    Student *newStudent = new Student;
    cout << "\n--- Insert New Student ---" << endl;
    cout << "Enter Student ID: ";
    cin >> newStudent->id;
    cin.ignore();

    cout << "Enter Student Name: ";
    getline(cin, newStudent->name);

    cout << "Enter Department: ";
    getline(cin, newStudent->department);

    cout << "Enter GPA: ";
    cin >> newStudent->gpa;

    newStudent->next = nullptr;

    // Insert at the end of the list
    if (head == nullptr)
    {
        head = newStudent;
    }
    else
    {
        Student *temp = head;
        while (temp->next != nullptr)
        {
            temp = temp->next;
        }
        temp->next = newStudent;
    }

    cout << "Student added successfully!" << endl;
}

void searchStudent(Student *head)
{
    if (head == nullptr)
    {
        cout << "List is empty!" << endl;
        return;
    }

    int searchId;
    cout << "\n--- Search Student ---" << endl;
    cout << "Enter Student ID to search: ";
    cin >> searchId;

    Student *temp = head;
    while (temp != nullptr)
    {
        if (temp->id == searchId)
        {
            cout << "\nStudent Found!" << endl;
            cout << "ID: " << temp->id << endl;
            cout << "Name: " << temp->name << endl;
            cout << "Department: " << temp->department << endl;
            cout << "GPA: " << temp->gpa << endl;
            return;
        }
        temp = temp->next;
    }

    cout << "Student with ID " << searchId << " not found!" << endl;
}

void deleteStudent(Student *&head)
{
    if (head == nullptr)
    {
        cout << "List is empty! Nothing to delete." << endl;
        return;
    }

    int deleteId;
    cout << "\n--- Delete Student ---" << endl;
    cout << "Enter Student ID to delete: ";
    cin >> deleteId;

    // If deleting the head node
    if (head->id == deleteId)
    {
        Student *temp = head;
        head = head->next;
        delete temp;
        cout << "Student with ID " << deleteId << " deleted successfully!" << endl;
        return;
    }

    // Search for the node to delete
    Student *current = head;
    while (current->next != nullptr && current->next->id != deleteId)
    {
        current = current->next;
    }

    if (current->next == nullptr)
    {
        cout << "Student with ID " << deleteId << " not found!" << endl;
        return;
    }

    // Delete the node
    Student *temp = current->next;
    current->next = temp->next;
    delete temp;
    cout << "Student with ID " << deleteId << " deleted successfully!" << endl;
}

void displayAll(Student *head)
{
    if (head == nullptr)
    {
        cout << "No students in the list!" << endl;
        return;
    }

    cout << "\n--- All Students ---" << endl;
    Student *temp = head;
    int count = 1;
    while (temp != nullptr)
    {
        cout << "\nStudent " << count++ << ":" << endl;
        cout << "ID: " << temp->id << endl;
        cout << "Name: " << temp->name << endl;
        cout << "Department: " << temp->department << endl;
        cout << "GPA: " << temp->gpa << endl;
        cout << "--------------------" << endl;
        temp = temp->next;
    }
}

void freeList(Student *head)
{
    Student *current = head;
    while (current != nullptr)
    {
        Student *next = current->next;
        delete current;
        current = next;
    }
}