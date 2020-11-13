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
