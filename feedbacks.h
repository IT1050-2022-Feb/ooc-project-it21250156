#pragma once
#include<cstring>
class feedback
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

