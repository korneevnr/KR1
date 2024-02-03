#include <bits/stdc++.h> 
 
using namespace std; 
 
struct Task{ 
    string descriptionOfTask; 
    bool done; 
}; 
 
void addTask(vector<Task>& tasks){ 
    Task task; 
    cout << "Enter the description of the task: " << endl; 
    cin.ignore(); 
    getline(cin, task.descriptionOfTask); 
    task.done = false; 
    tasks.push_back(task); 
    cout << "Task added" << endl; 
} 
 
void deleteTask(vector<Task>& tasks){ 
    int n; 
    cout << "Enter the number of the removing task: " << endl; 
    cin >> n; 
    if(tasks.empty()){ 
        cout << "Nothing to delete!" << endl; 
    }else if(tasks.size() < n){ 
        cout << "No such task to delete!" << endl; 
    }else{ 
        tasks.erase(tasks.begin() + n - 1); 
        cout << "Task deleted!" << endl; 
    } 
} 
 
void updateTask(vector<Task>& tasks){ 
    int n; 
    cout << "Enter the number of the updating task: " << endl; 
    cin >> n; 
    if(tasks.empty()){ 
        cout << "Nothing to update!" << endl; 
    }else if(tasks.size() < n){ 
        cout << "No such task to update!" << endl; 
    }else{ 
        cout << "Enter the new description of the task: " << endl; 
        cin.ignore(); 
        getline(cin, tasks[n-1].descriptionOfTask); 
        cout << "Task updated!"; 
    } 
} 
 
void displayTasks(vector<Task>& tasks){ 
    if(tasks.empty()){ 
        cout << "Nothing to display!" << endl; 
    }else{ 
        for(int i = 0; i < tasks.size(); i++){ 
            cout << tasks[i].descriptionOfTask << endl; 
            cout << tasks[i].done << endl; 
        } 
    } 
} 
 
int main() 
{ 
    vector<Task> tasks; 
 
    void (*functions[])(vector<Task>&) = {addTask, deleteTask, updateTask, displayTasks}; 
    while(true){ 
        cout << "Enter what you need to do:" << endl; 
        cout << "1. add task" << endl; 
        cout << "2. delete task" << endl; 
        cout << "3. update task" << endl; 
        cout << "4. display task" << endl; 
        cout << "5. exitProgram task" << endl; 
        int n; 
        cin >> n; 
        if(n > 0 && n < 5){ 
            functions [n - 1] (tasks); 
        }else if(n == 5){ 
            return 0; 
        }else{ 
            cout << "Try again" << endl; 
        } 
    } 
}
