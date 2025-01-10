#include <iostream>
using namespace std;

void grade(float percentage)
{
    if (percentage >= 80 && percentage <= 100)
    {
        cout << "Congratulation You Got A-1 Grade" << endl;
        cout << "Your Percentage is : " << percentage << '%' << endl;
    }
    else if (percentage >= 70 && percentage < 80)
    {
        cout << "Congratulation You Got A Grade" << endl;
        cout << "Your Percentage is : " << percentage << '%' << endl;
    }
    else if (percentage >= 60 && percentage < 70)
    {
        cout << "Good You Got B Grade" << endl;
        cout << "Your Percentage is : " << percentage << '%' << endl;
    }
    else if (percentage >= 50 && percentage < 60)
    {
        cout << "Hmm You Got C Grade" << endl;
        cout << "Your Percentage is : " << percentage << '%' << endl;
    }
    else if (percentage >= 40 && percentage < 50)
    {
        cout << "You Got D Grade And Need To Study Hard" << endl;
        cout << "Your Percentage is : " << percentage << '%' << endl;
    }
    else
    {
        cout << "Sorry You Are Failed" << endl;
    }
}

int main()
{

    int eng, phy, chem, maths, urdu, bio, comp;
    string group;
    cout << "Write your group as shown as in example (pre-engineering/pre-medical/computer-science)" << endl;
    cin >> group;
    if (group == "pre-engineering")
    {
        cout << "Enter Your English Obtained Marks Here : ";
        cin >> eng;
        cout << "Enter Your Physics Obtained Marks Here : ";
        cin >> phy;
        cout << "Enter Your Chemistry Obtained Marks Here : ";
        cin >> chem;
        cout << "Enter Your Maths Obtained Marks Here : ";
        cin >> maths;
        cout << "Enter Your Urdu Obtained Marks Here : ";
        cin >> urdu;

        if (eng < 101 && phy < 101 && chem < 101 && maths < 101 && urdu < 101)
        {
            if (eng < 35 || phy < 35 || chem < 35 || maths < 35 || urdu < 35)
            {
                cout << "You Got Supply In One Subject Because Of Marks Less Than 35" << endl;
                float ObtainedMarks = (eng + phy + chem + maths + urdu);
                cout << "Your Total Marks Are " << ObtainedMarks << " And Grade Is Not Available Because Of Supply " << endl;
            }
            else
            {
                float ObtainedMarks = (eng + phy + chem + maths + urdu);
                float TotalMarks = 500;
                float percentage = (ObtainedMarks / TotalMarks) * 100;
                grade(percentage);
            }
        }
        else
        {
            cout << "Please Enter Your Obtained Marks Under The Range Of Hundred" << endl;
        }
    }

    if (group == "pre-medical")
    {
        cout << "Enter Your English Obtained Marks Here : ";
        cin >> eng;
        cout << "Enter Your Physics Obtained Marks Here : ";
        cin >> phy;
        cout << "Enter Your Chemistry Obtained Marks Here : ";
        cin >> chem;
        cout << "Enter Your Biology Obtained Marks Here : ";
        cin >> bio;
        cout << "Enter Your Urdu Obtained Marks Here : ";
        cin >> urdu;

        if (eng < 101 && phy < 101 && chem < 101 && bio < 101 && urdu < 101)
        {
            if (eng < 35 || phy < 35 || chem < 35 || bio < 35 || urdu < 35)
            {
                cout << "You Got Supply In One Subject Because Of Marks Less Than 35" << endl;
                float ObtainedMarks = (eng + phy + chem + bio + urdu);
                cout << "Your Total Marks Are " << ObtainedMarks << " And Grade Is Not Available Because Of Supply " << endl;
            }
            else
            {
                float ObtainedMarks = (eng + phy + chem + bio + urdu);
                float TotalMarks = 500;
                float percentage = (ObtainedMarks / TotalMarks) * 100;
                grade(percentage);
            }
        }
        else
        {
            cout << "Please Enter Your Obtained Marks Under The Range Of Hundred" << endl;
        }
    }

    if (group == "computer-science")
    {
        cout << "Enter Your English Obtained Marks Here : ";
        cin >> eng;
        cout << "Enter Your Physics Obtained Marks Here : ";
        cin >> phy;
        cout << "Enter Your Computer Science Obtained Marks Here : ";
        cin >> comp;
        cout << "Enter Your Maths Obtained Marks Here : ";
        cin >> maths;
        cout << "Enter Your Urdu Obtained Marks Here : ";
        cin >> urdu;

        if (eng < 101 && phy < 101 && maths < 101 && comp < 101 && urdu < 101)
        {
            if (eng < 35 || phy < 35 || maths < 35 || comp < 35 || urdu < 35)
            {
                cout << "You Got Supply In One Subject Because Of Marks Less Than 35" << endl;
                float ObtainedMarks = (eng + phy + maths + comp + urdu);
                cout << "Your Total Marks Are " << ObtainedMarks << " And Grade Is Not Available Because Of Supply " << endl;
            }
            else
            {
                float ObtainedMarks = (eng + phy + maths + comp + urdu);
                float TotalMarks = 500;
                float percentage = (ObtainedMarks / TotalMarks) * 100;
                grade(percentage);
            }
        }
        else
        {
            cout << "Please Enter Your Obtained Marks Under The Range Of Hundred" << endl;
        }
    }

    return 0;
}