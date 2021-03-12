#include "Graphics.h"

Graphics straightLine(){
	Graphics curr("verticalLine", false);
	string display;
	string possibleDirections = "FB";

	display = "-----------------------------------" +
			  "|            |       |            |" +
			  "|            |       |            |" +
			  "|            |       |            |" +
			  "|            |       |            |" +
			  "|            |       |            |" +
			  "|            |       |            |" +
			  "|            |       |            |" +
			  "|            |       |            |" +
			  "|            |       |            |" +
			  "|            |   *   |            |" +
			  "|            |       |            |" +
			  "-----------------------------------";

	curr.SetDirections(possibleDirections);
	curr.SetDisplay(display);
	return curr;
}

Graphics endRoom(){
	Graphics curr("endRoom", true);
	string display;
	string possibleDirections = "";

	display = "-----------------------------------" +
			  "|   ---------------------------   |" +
			  "|  |                           |  |" +
			  "|  |             o             |  |" +
			  "|  |           --|--           |  |" +
			  "|  |             |             |  |" +
			  "|  |                           |  |" +
			  "|  |                           |  |" +
			  "|  |             *             |  |" +
			  "|  |                           |  |" +
			  "|  ----------         ---------|  |" +
			  "|            |       |            |" +
			  "-----------------------------------";

	curr.SetDirections(possibleDirections);
	curr.SetDisplay(display);
	return curr;
}

Graphics town(){
	Graphics curr("town", false);
	string display;
	string possibleDirections = "F";

	display = "-----------------------------------" +
			  "|   /--------|       |--------\   |" +
			  "|  /   ------|       |   ---   \  |" +
			  "|  |  | +    |       |  | + |  |  |" +
			  "|  |   ------|       |   ---   |  |" +
			  "|  |         |       |         |  |" +
			  "|  |         |       |         |  |" +
			  "|  |   ---   |       |------   |  |" +
			  "|  |  | + |  |   *   |   +  |  |  |" +
			  "|  \   ---   |       |------   /  |" +
			  "|   \--------|       |--------/   |" +
			  "|            |       |            |" +
			  "-----------------------------------";

	curr.SetDirections(possibleDirections);
	curr.SetDisplay(display);
	return curr;
}

