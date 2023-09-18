#include <iostream>
#include <vector>
#include <string>

struct Task {
    std::string description;
    bool completed;

    Task(const std::string& desc) : description(desc), completed(false) {}
};

class TodoList {
private:
    std::vector<Task> tasks;

public:
    void AddTask(const std::string& description) {
        Task task(description);
        tasks.push_back(task);
        std::cout << "Task added: " << description << std::endl;
    }

    void ViewTasks() {
        if (tasks.empty()) {
            std::cout << "No tasks in the list." << std::endl;
        } else {
            std::cout << "Tasks in the list:" << std::endl;
            for (size_t i = 0; i < tasks.size(); ++i) {
                std::cout << i + 1 << ". ";
                if (tasks[i].completed) {
                    std::cout << "[Completed] ";
                }
                std::cout << tasks[i].description << std::endl;
            }
        }
    }

    void MarkTaskAsCompleted(int taskIndex) {
        if (taskIndex >= 1 && taskIndex <= static_cast<int>(tasks.size())) {
            tasks[taskIndex - 1].completed = true;
            std::cout << "Task marked as completed: " << tasks[taskIndex - 1].description << std::endl;
        } else {
            std::cout << "Invalid task index." << std::endl;
        }
    }

    void RemoveTask(int taskIndex) {
        if (taskIndex >= 1 && taskIndex <= static_cast<int>(tasks.size())) {
            std::cout << "Task removed: " << tasks[taskIndex - 1].description << std::endl;
            tasks.erase(tasks.begin() + taskIndex - 1);
        } else {
            std::cout << "Invalid task index." << std::endl;
        }
    }
};

int main() {
    TodoList todoList;

    while (true) {
        std::cout << "TO-DO LIST MANAGER" << std::endl;
        std::cout << "1. Add Task" << std::endl;
        std::cout << "2. View Tasks" << std::endl;
        std::cout << "3. Mark Task as Completed" << std::endl;
        std::cout << "4. Remove Task" << std::endl;
        std::cout << "5. Quit" << std::endl;
        std::cout << "Enter your choice: ";

        int choice;
        std::cin >> choice;

        switch (choice) {
            case 1: {
                std::string taskDescription;
                std::cout << "Enter task description: ";
                std::cin.ignore(); // Consume the newline character from previous input
                std::getline(std::cin, taskDescription);
                todoList.AddTask(taskDescription);
                break;
            }
            case 2:
                todoList.ViewTasks();
                break;
            case 3: {
                int taskIndex;
                std::cout << "Enter the task number to mark as completed: ";
                std::cin >> taskIndex;
                todoList.MarkTaskAsCompleted(taskIndex);
                break;
            }
            case 4: {
                int taskIndex;
                std::cout << "Enter the task number to remove: ";
                std::cin >> taskIndex;
                todoList.RemoveTask(taskIndex);
                break;
            }
            case 5:
                std::cout << "Exiting the program." << std::endl;
                return 0;
            default:
                std::cout << "Invalid choice. Please try again." << std::endl;
        }
    }

    return 0;
}

