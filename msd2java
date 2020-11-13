public enum State {
	public Task _unnamed_Task_;
}
public class Sprint_Review extends Meeting {

	public void performProductUpdate(Sprint aSprint) {
		throw new UnsupportedOperationException();
	}

	public void initiateNewSprint() {
		throw new UnsupportedOperationException();
	}
}
public class Sprint {
	private int _sprintID;
	private Backlog _sprintBacklog;
	private Date _start;
	private Date _end;
	public Project _unnamed_Project_;
	public SprintBacklog _unnamed_SprintBacklog_;
}public class ScrumMaster extends Employee {
	public ScrumTeam _unnamed_ScrumTeam_;
	public Meeting _organizes;

	public void programMeeting(Meeting aMeeting, Date aDate) {
		throw new UnsupportedOperationException();
	}
}
public class Task {
	private State _status;
	private int _taskId;
	private Developer _assignedDev;
	private int _priority;
	public Developer _unnamed_Developer_;
	public State _unnamed_State_;
	public Backlog _unnamed_Backlog_;
}
public class SprintBacklog extends Backlog {
	public Sprint _unnamed_Sprint_;

	public Task__ fetchNoOfTasks(int aNoOfTasks) {
		throw new UnsupportedOperationException();
	}
}
public class Sprint_Planning extends Meeting {

	/**
	 * Team commits what can be delivered until end of Sprint
	 */
	public void performSprintCommit(int aNoOfTasks) {
		throw new UnsupportedOperationException();
	}
}
import java.util.Vector;

public class ScrumTeam {
	private ProductOwner _productOwner;
	private ScrumMaster _scrumMaster;
	private java.util.Vector<Developer[]> _teamMembers;
	public Project _unnamed_Project_;
	public Vector<Developer> _unnamed_Developer_ = new Vector<Developer>();
	public ScrumMaster _unnamed_ScrumMaster_;
	public ProductOwner _unnamed_ProductOwner_;
	public Meeting _attends;

	public void commitSprintBacklog(int aNoOfTasks) {
		throw new UnsupportedOperationException();
	}
}
import java.util.Vector;

public class Project {
	private int _projectID;
	private String _projectName;
	private ScrumTeam _scrumTeam;
	private Backlog _productBacklog;
	private Sprint _currentSprint;
	public ProductBacklog _unnamed_ProductBacklog_;
	public ScrumTeam _unnamed_ScrumTeam_;
	public Vector<Sprint> _unnamed_Sprint_ = new Vector<Sprint>();

	public void setProjectID(int aProjectID) {
		this._projectID = aProjectID;
	}

	public int getProjectID() {
		return this._projectID;
	}
}
public class ProductBacklog extends Backlog {
	public ProductOwner _unnamed_ProductOwner_;
	public Project _unnamed_Project_;

	public Task__ viewRemainingTasks() {
		throw new UnsupportedOperationException();
	}
}
public class Employee {
	private int _uID;
	private String _name;
}
public class Daily extends Meeting {

	public void performTaskUpdates(Task[] aTaskList, State aIsPerformed) {
		throw new UnsupportedOperationException();
	}
}
<?xml version="1.0" encoding="UTF-8"?>
<project basedir="." default="build">
	<path id="build.classpath">
		<pathelement location="classes"/>
	</path>
	<target name="init">
		<mkdir dir="classes"/>
	</target>
	<target name="clean">
		<delete dir="classes"/>
	</target>
	<target depends="init" name="build">
		<javac srcdir="." destdir="classes" source="1.5" target="1.5" fork="yes">
			<classpath refid="build.classpath"/>
		</javac>
	</target>
</project>
public class ProductOwner extends Employee {
	public ScrumTeam _unnamed_ScrumTeam_;
	public ProductBacklog _unnamed_ProductBacklog_;

	public void createProductBacklog(Task__ aTaskList) {
		throw new UnsupportedOperationException();
	}

	public void prioritizeBacklog(_Task__int>__ aPrioList) {
		throw new UnsupportedOperationException();
	}

	public void updateProductBacklog(Sprint aFinishedSprint) {
		throw new UnsupportedOperationException();
	}
}
public class Meeting {
	private ScrumTeam _team;
	private Sprint _sprint;
	private Date _timeslot;
	public ScrumMaster _organizes;
	public ScrumTeam _attends;
}
public class Developer extends Employee {
	public ScrumTeam _unnamed_ScrumTeam_;
	public Task _unnamed_Task_;

	public void updateTaskStatus(Task aTask) {
		throw new UnsupportedOperationException();
	}
}
public class Class {
}
import java.util.Vector;

public class Backlog {
	private Task__ _taskList;
	public Vector<Task> _unnamed_Task_ = new Vector<Task>();

	public Task__ orderTasks() {
		throw new UnsupportedOperationException();
	}
}
