#include <iostream>
#include <vector>
using namespace std;

struct Task {
    string description;
    bool completed;
};

// Function to display the list of tasks
void displayTasks(const vector<Task>& tasks) {
    cout << "Task List:\n";
    for (size_t i = 0; i < tasks.size(); i++) {
        cout << i + 1 << ". " << (tasks[i].completed ? "[X] " : "[ ] ") << tasks[i].description << endl;
    }
    cout << endl;
}

int main() {
    vector<Task> tasks;
    
    while (true) {
        cout << "To-Do List Manager" << endl;
        cout << "1. Add Task" << endl;
        cout << "2. View Tasks" << endl;
        cout << "3. Mark Task as Completed" << endl;
        cout << "4. Remove Task" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice (1-5): ";
        
        int choice;
        cin >> choice;

        switch (choice) {
            case 1:
                {
                    string taskDescription;
                    cout << "Enter the task description: ";
                    cin.ignore(); // Ignore any previous newline character
                    getline(cin, taskDescription);
                    Task newTask = {taskDescription, false};
                    tasks.push_back(newTask);
                    cout << "Task added to the list.\n";
                }
                break;
            case 2:
                displayTasks(tasks);
                break;
            case 3:
                {
                    int taskIndex;
                    cout << "Enter the task number to mark as completed: ";
                    cin >> taskIndex;
                    if (taskIndex >= 1 && taskIndex <= tasks.size()) {
                        tasks[taskIndex - 1].completed = true;
                        cout << "Task marked as completed.\n";
                    } else {
                        cout << "Invalid task number.\n";
                    }
                }
                break;
            case 4:
                {
                    int taskIndex;
                    cout << "Enter the task number to remove: ";
                    cin >> taskIndex;
                    if (taskIndex >= 1 && taskIndex <= tasks.size()) {
                        tasks.erase(tasks.begin() + taskIndex - 1);
                        cout << "Task removed from the list.\n";
                    } else {
                        cout << "Invalid task number.\n";
                    }
                }
                break;
            case 5:
                cout << "Goodbye!" << endl;
                return 0;
            default:
                cout << "Invalid choice. Please select a valid option (1-5).\n";
        }
    }

    return 0;
}
