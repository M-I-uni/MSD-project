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
