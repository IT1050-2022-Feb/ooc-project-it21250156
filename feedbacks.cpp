#include "feedbacks.h"
#include<iostream>
#include<cstring>
using namespace std;

feedback::Feedback()
{
	FeedbackID = "0";
	strcpy(Feedbacks, "");
}
feedback::Feedbacks(int FID, string feedback_content)
{
	FeedbackID = FID;
	Feedbacks = feedback_content;
}
void feedback::UpdateFeedbacks()
{

}
feedback::~Feedbacks()
{

}