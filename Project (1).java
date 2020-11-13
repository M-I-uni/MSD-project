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