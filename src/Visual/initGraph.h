#include "Graphics.h"

Graphics straightLine(){
	Graphics curr("verticalLine", false);
	string display = "\n\n\n";

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

	curr.SetDisplay(display);
	return curr;
}

Graphics endRoom(){
	Graphics curr("endRoom", true);
	string display = "\n\n\n";

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

	curr.SetDisplay(display);
	return curr;
}

Graphics town(){
	Graphics curr("town", false);
	string display = "\n\n\n";

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
			  "|            |--------|            |\n" +
			  "-----------------------------------\n";

	curr.SetDisplay(display);
	return curr;
}

Graphics twoWayY(){
	Graphics curr("Y", false);
	string display = "\n\n\n";

	display = display +
			  "-----------------------------------\n" +
			  "|     |       |     |       |     |\n" +
			  "|      \\      |     |      /      |\n" +
			  "|       \\      \\   /      /       |\n" +
			  "|        \\      \\ /      /        |\n" +
			  "|         \\             /         |\n" +
			  "|          \\           /          |\n" +
			  "|           \\         /           |\n" +
			  "|            |       |            |\n" +
			  "|            |       |            |\n" +
			  "|            |   *   |            |\n" +
			  "|            |       |            |\n" +
			  "-----------------------------------\n";

	curr.SetDisplay(display);
	return curr;
}

Graphics emptyRoom(){
	Graphics curr("emptyRoom", true);
	string display = "\n\n\n";

	display = display +
			  "-----------------------------------\n" +
			  "|   ---------------------------   |\n" +
			  "|  |                           |  |\n" +
			  "|  |                           |  |\n" +
			  "|  |                           |  |\n" +
			  "|  |                           |  |\n" +
			  "|  |                           |  |\n" +
			  "|  |                           |  |\n" +
			  "|  |             *             |  |\n" +
			  "|  |                           |  |\n" +
			  "|  ----------         ---------|  |\n" +
			  "|            |       |            |\n" +
			  "-----------------------------------\n";

	curr.SetDisplay(display);
	return curr;
}

