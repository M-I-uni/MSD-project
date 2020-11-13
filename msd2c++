

#ifndef BACKLOG_H
#define BACKLOG_H

class Backlog {
};

#endif

#ifndef CLASS_H
#define CLASS_H

class Class {
};

#endif

#include "Daily.h"

void Daily::performTaskUpdates(Task taskList[], State isPerformed, Task taskList[], State isPerformed) {
	// TODO - implement Daily::performTaskUpdates
	throw "Not yet implemented";
}

#ifndef DAILY_H
#define DAILY_H

class Daily : Meeting {


public:
	void performTaskUpdates(Task taskList[], State isPerformed);
};

#endif

#include "Developer.h"

void Developer::updateTaskStatus(Task task, Task task) {
	// TODO - implement Developer::updateTaskStatus
	throw "Not yet implemented";
}

#ifndef DEVELOPER_H
#define DEVELOPER_H

class Developer : Employee {


public:
	void updateTaskStatus(Task task);
};

#endif

#ifndef EMPLOYEE_H
#define EMPLOYEE_H

class Employee {

private:
	int UID;
	String Name;
};

#endif

#ifndef MEETING_H
#define MEETING_H

class Meeting {

private:
	ScrumTeam team;
	Sprint sprint;
	Date timeslot;
};

#endif



#ifndef PRODUCTBACKLOG_H
#define PRODUCTBACKLOG_H

class ProductBacklog : Backlog {
};

#endif

#include "ProductOwner.h"

void ProductOwner::createProductBacklog(Task taskList[], Task taskList[]) {
	// TODO - implement ProductOwner::createProductBacklog
	throw "Not yet implemented";
}

void ProductOwner::updateProductBacklog(Sprint finishedSprint, Sprint finishedSprint) {
	// TODO - implement ProductOwner::updateProductBacklog
	throw "Not yet implemented";
}

#ifndef PRODUCTOWNER_H
#define PRODUCTOWNER_H

class ProductOwner : Employee {


public:
	void createProductBacklog(Task taskList[]);

	void updateProductBacklog(Sprint finishedSprint);
};

#endif

#ifndef PROJECT_H
#define PROJECT_H

class Project {

private:
	int projectID;
	String projectName;
	ScrumTeam scrumTeam;
	Backlog productBacklog;
	Sprint currentSprint;
};

#endif

#include "ScrumMaster.h"

void ScrumMaster::programMeeting(Meeting meeting, Date date, Meeting meeting, Date date) {
	// TODO - implement ScrumMaster::programMeeting
	throw "Not yet implemented";
}

#ifndef SCRUMMASTER_H
#define SCRUMMASTER_H

class ScrumMaster : Employee {


public:
	void programMeeting(Meeting meeting, Date date);
};

#endif

#include "ScrumTeam.h"

void ScrumTeam::commitSprintBacklog(int noOfTasks, int noOfTasks) {
	// TODO - implement ScrumTeam::commitSprintBacklog
	throw "Not yet implemented";
}

#ifndef SCRUMTEAM_H
#define SCRUMTEAM_H

class ScrumTeam {

private:
	ProductOwner productOwner;
	ScrumMaster scrumMaster;
	Developer teamMembers[];

public:
	void commitSprintBacklog(int noOfTasks);
};

#endif

#include "Sprint Planning.h"

void Sprint_Planning::performSprintCommit(int noOfTasks) {
	// TODO - implement Sprint Planning::performSprintCommit
	throw "Not yet implemented";
}

void Sprint_Planning::performSprintCommit(int noOfTasks) {
	// TODO - implement Sprint Planning::performSprintCommit
	throw "Not yet implemented";
}

#ifndef SPRINT PLANNING_H
#define SPRINT PLANNING_H

class Sprint_Planning : Meeting {


public:
	/**
	 * Team commits what can be delivered until end of Sprint
	 */
	void performSprintCommit(int noOfTasks);
};

#endif

#include "Sprint Review.h"

void Sprint_Review::performProductUpdate(Sprint sprint) {
	// TODO - implement Sprint Review::performProductUpdate
	throw "Not yet implemented";
}

void Sprint_Review::initiateNewSprint() {
	// TODO - implement Sprint Review::initiateNewSprint
	throw "Not yet implemented";
}

void Sprint_Review::performProductUpdate(Sprint sprint) {
	// TODO - implement Sprint Review::performProductUpdate
	throw "Not yet implemented";
}

void Sprint_Review::initiateNewSprint() {
	// TODO - implement Sprint Review::initiateNewSprint
	throw "Not yet implemented";
}

#ifndef SPRINT REVIEW_H
#define SPRINT REVIEW_H

class Sprint_Review : Meeting {


public:
	void performProductUpdate(Sprint sprint);

	void initiateNewSprint();
};

#endif

#ifndef SPRINT_H
#define SPRINT_H

class Sprint {

private:
	Int sprintID;
	Backlog sprintBacklog;
	Date start;
	Date end;
};

#endif



#ifndef SPRINTBACKLOG_H
#define SPRINTBACKLOG_H

class SprintBacklog : Backlog {
};

#endif

#ifndef STATE_H
#define STATE_H

enum State {
};

#endif

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
