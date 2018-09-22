#include "conslib.h"

void main()
{
	int xr = 25;
	int i = 1;

	int k = 1;
	int x = 1;

	while (true)
	{
		setCursorVisibility(false);
		if (x > 25 || x < 1) {
			k = -k;
		}
		printat(x, 15, "*");
		pause(50);
		printat(x, 15, " ");

		x += k;
	}


	waitAnyKey();
}