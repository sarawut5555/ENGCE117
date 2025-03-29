#include <stdio.h>
#include <string.h>

struct TaskNode {
    char taskName[50];
    char startDate[15];
    char endDate[15];
    char status[20];
    struct TaskNode *next;
    struct TaskNode *back;
};

void ShowAllTasks(struct TaskNode *walk);
struct TaskNode* AddTask(struct TaskNode **start, char *taskName, char *startDate, char *endDate, char *status);
void InsertTask(struct TaskNode *now, char *taskName, char *startDate, char *endDate, char *status);
void DelTask(struct TaskNode *now);
void SwapTasks(struct TaskNode *task1, struct TaskNode *task2);

int main() {
    struct TaskNode *start, *now;
    start = NULL;

    now = AddTask(&start, "Set up project", "2024-11-01", "2024-11-10", "Not Started");
    ShowAllTasks(start);
    now = AddTask(&start, "Write code", "2024-11-11", "2024-11-20", "Not Started");
    ShowAllTasks(start);
    InsertTask(now, "Research", "2024-11-05", "2024-11-10", "Not Started");
    ShowAllTasks(start);

    SwapTasks(now, now->next);  // Swap Write code and Research tasks
    ShowAllTasks(start);
    
    DelTask(now);  // Delete "Research" task
    ShowAllTasks(start);

    return 0;
}

void ShowAllTasks(struct TaskNode *walk) {
    while (walk != NULL) {
        printf("%s -> ", walk->taskName);
        walk = walk->next;
    }
    printf("End\n");
}

struct TaskNode* AddTask(struct TaskNode **start, char *taskName, char *startDate, char *endDate, char *status){
    
}