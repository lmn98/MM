
#include <iostream>
using namespace std;

void drawStar(int a)
{ 
	for (int i = 0; i <a; i++)
	{
		cout << "*";
	}
}

void drawDash(int b)
{
	for (int i = 0; i <b; i++)
	{
		cout << "-";
	}
}

void drawM(int c)
{
	int m, l, k = 1, s, m1;
	l = m = m1 = c;
	s = c * 2 - 1;

	for (int i = 0; i < c + 1; i++)
	{
		if (l <= c * 2 - 1)
		{
			drawDash(m); drawStar(l); drawDash(m1); drawStar(l); drawDash(m);
			drawDash(m); drawStar(l); drawDash(m1); drawStar(l); drawDash(m);
			cout << endl;
			l = l + 2;
			m = m - 1;
			m1 = m1 - 2;
		}
		else
		{
			drawDash(m); drawStar(c); drawDash(k); drawStar(s); drawDash(k); drawStar(c); drawDash(m);
			drawDash(m); drawStar(c); drawDash(k); drawStar(s); drawDash(k); drawStar(c); drawDash(m);
			cout << endl;
			l = l + 2;
			m = m - 1;
			k = k + 2;
			s = s - 2;
		}

	}


}

int main()
{
	int n;
	cout << "N = ";
	cin >> n;
	
	drawM(n);

}