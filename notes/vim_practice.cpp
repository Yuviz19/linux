#include <algorithm>
#include <iostream>
#include <numeric>
#include <string>
#include <unordered_map>
#include <vector>

struct Task {
  int id;
  std::string title;
  bool completed;
  int priority;
};

class TaskManager {
private:
  std::unordered_map<int, Task> tasks;

public:
  void addTask(int id, const std::string &title, int priority) {
    tasks[id] = {id, title, false, priority};
  }

  void completeTask(int id) {
    auto it = tasks.find(id);
    if (it != tasks.end()) {
      it->second.completed = true;
    }
  }

  std::vector<Task> getPendingTasks() const {
    std::vector<Task> result;

    for (const auto &[id, task] : tasks) {
      if (!task.completed) {
        result.push_back(task);
      }
    }

    std::sort(result.begin(), result.end(), [](const Task &a, const Task &b) {
      if (a.priority == b.priority) {
        return a.title < b.title;
      }
      return a.priority > b.priority;
    });

    return result;
  }

  void printSummary() const {
    int completedCount = 0;

    for (const auto &[_, task] : tasks) {
      if (task.completed) {
        completedCount++;
      }
    }

    std::cout << "Completed: " << completedCount << "/" << tasks.size() << "\n";
  }
};

int calculateScore(const std::vector<Task> &tasks) {
  return std::accumulate(tasks.begin(), tasks.end(), 0,
                         [](int total, const Task &task) {
                           if (task.completed) {
                             return total + task.priority * 10;
                           }
                           return total + task.priority;
                         });
}

int main() {
  TaskManager manager;

  manager.addTask(101, "Write documentation", 2);
  manager.addTask(102, "Fix memory leak", 5);
  manager.addTask(103, "Update dependencies", 3);
  manager.addTask(104, "Refactor parser", 4);

  manager.completeTask(102);
  manager.completeTask(104);

  auto pending = manager.getPendingTasks();

  for (const auto &task : pending) {
    std::cout << task.id << " | " << task.title
              << " | priority=" << task.priority << "\n";
  }

  manager.printSummary();

  std::cout << "Score: " << calculateScore(pending) << std::endl;

  return 0;
}
