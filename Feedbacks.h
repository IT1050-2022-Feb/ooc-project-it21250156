class Feedback
{
private:
	int FeedbackID;
	string Feedback;

public:
	Feedbacks();
	Feedbacks(int FID, string feedback_content);
	void UpdateFeedbacks();
	~Feedbacks();
};

