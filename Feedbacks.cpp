#include "Feedbacks.h"
#include<iostream>
#include<cstring>
using namespace std;


Feedbacks::Feedbacks()
{
	FeedbackID = "0";
	strcpy(Feedbacks, "");
}
Feedbacks::Feedbacks(int FID, string feedback_content)
{
	FeedbackID = FID;
	Feedbacks = feedback_content;
}
void Feedbacks::UpdateFeedbacks()
{

}
Feedbacks::~Feedbacks()
{

}