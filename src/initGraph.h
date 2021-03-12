#include "Graphics.h"

Graphics straightLine(){
	Graphics curr("verticalLine", false);
	string display = "\n\n\n";
	string possibleDirections = "FB";

	display = display +
			  "-----------------------------------\n" +
			  "|            |       |            |\n" +
			  "|            |       |            |\n" +
			  "|            |       |            |\n" +
			  "|            |       |            |\n" +
			  "|            |       |            |\n" +
			  "|            |       |            |\n" +
			  "|            |       |            |\n" +
			  "|            |       |            |\n" +
			  "|            |       |            |\n" +
			  "|            |   *   |            |\n" +
			  "|            |       |            |\n" +
			  "-----------------------------------\n";

	curr.SetDirections(possibleDirections);
	curr.SetDisplay(display);
	return curr;
}

Graphics endRoom(){
	Graphics curr("endRoom", true);
	string display = "\n\n\n";
	string possibleDirections = "";

	display = display +
			  "-----------------------------------\n" +
			  "|   ---------------------------   |\n" +
			  "|  |                           |  |\n" +
			  "|  |             o             |  |\n" +
			  "|  |           --|--           |  |\n" +
			  "|  |             |             |  |\n" +
			  "|  |                           |  |\n" +
			  "|  |                           |  |\n" +
			  "|  |             *             |  |\n" +
			  "|  |                           |  |\n" +
			  "|  ----------         ---------|  |\n" +
			  "|            |       |            |\n" +
			  "-----------------------------------\n";

	curr.SetDirections(possibleDirections);
	curr.SetDisplay(display);
	return curr;
}

Graphics town(){
	Graphics curr("town", false);
	string display = "\n\n\n";
	string possibleDirections = "F";

	display = display +
			  "-----------------------------------\n" +
			  "|   /--------|       |--------\\   |\n" +
			  "|  /   ------|       |   ---   \\  |\n" +
			  "|  |  | +    |       |  | + |  |  |\n" +
			  "|  |   ------|       |   ---   |  |\n" +
			  "|  |         |       |         |  |\n" +
			  "|  |         |       |         |  |\n" +
			  "|  |   ---   |       |------   |  |\n" +
			  "|  |  | + |  |   *   |   +  |  |  |\n" +
			  "|  \\   ---   |       |------   /  |\n" +
			  "|   \\--------|       |--------/   |\n" +
			  "|            |       |            |\n" +
			  "-----------------------------------\n";

	curr.SetDirections(possibleDirections);
	curr.SetDisplay(display);
	return curr;
}

