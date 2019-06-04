#include "StuCard.h"
double average[3];
double* classAver(StuCard aver[], int size)
{
	for (int i = 0; i < 3; i++) 
	{
		for (int j = 0; j < size; j++)
		{
			average[i] += aver[j].getScore(i);
		}
	}
	return &average[3];
}

int main()
{
	
	StuCard studCard1("Jerry", 1, 80.0, 70.0, 90.0, Date(3, 20, 1997));
	StuCard studCard2("John", 1, 85.0, 77.0, 95.0, Date(5, 20, 1995));
	StuCard studCard3("Mary", 0, 83.0, 75.0, 70.0, Date(2, 18, 2007));
	StuCard studCard4("Tom", 1, 73.0, 95.0, 67.0, Date(11, 8, 2003));

	string name;
	bool sex;
	double s1, s2, s3;
	int y, m, d;
	cin >> name >> sex >> s1 >> s2 >> s3 >> m >> d >> y;
	Date birthday(m, d, y);
	StuCard studCard5(name, sex, s1, s2, s3, birthday);
	StuCard studArr[5];
	studArr[0] = studCard1;
	studArr[1] = studCard2;
	studArr[2] = studCard3;
	studArr[3] = studCard4;
	studArr[4] = studCard5;
	studCard1.printCard();
	studCard2.printCard();
	studCard3.printCard();
	studCard4.printCard();
	studCard5.printCard();
	*classAver(studArr, 5);
	cout << "Average: ";
	for (int i = 0; i < 3; i++) 
	{
		cout << fixed << setprecision(1) << average[i] / 5;
		if (i < 2)
			cout << ", ";
	}
	system("pause");
}


