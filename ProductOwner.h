#ifndef PRODUCTOWNER_H
#define PRODUCTOWNER_H

class ProductOwner : Employee {


public:
	void createProductBacklog(Task taskList[]);

	void updateProductBacklog(Sprint finishedSprint);
};

#endif
