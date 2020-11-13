#ifndef TASK_H
#define TASK_H

class Task {

private:
	State status;
	int taskId;
	Developer assignedDev;
	int priority;
};

#endif
