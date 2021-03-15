#ifndef VISUAL_INITGRAPH_H_
#define VISUAL_INITGRAPH_H_
#include "Graphics.h"

Graphics straightLine(){
	Graphics curr("verticalLine", false);
	string display = "\n\n\n";

	display = display +
			  "\t\t\t\t-----------------------------------\n" +
			  "\t\t\t\t|            |       |            |\n" +
			  "\t\t\t\t|            |       |            |\n" +
			  "\t\t\t\t|            |       |            |\n" +
			  "\t\t\t\t|            |       |            |\n" +
			  "\t\t\t\t|            |       |            |\n" +
			  "\t\t\t\t|            |       |            |\n" +
			  "\t\t\t\t|            |       |            |\n" +
			  "\t\t\t\t|            |       |            |\n" +
			  "\t\t\t\t|            |       |            |\n" +
			  "\t\t\t\t|            |   *   |            |\n" +
			  "\t\t\t\t|            |       |            |\n" +
			  "\t\t\t\t-----------------------------------\n";

	curr.SetDisplay(display);
	return curr;
}

Graphics endRoom(){
	Graphics curr("endRoom", true);
	string display = "\n\n\n";

	display = display +
			  "\t\t\t\t-----------------------------------\n" +
			  "\t\t\t\t|   ---------------------------   |\n" +
			  "\t\t\t\t|  |                           |  |\n" +
			  "\t\t\t\t|  |             o             |  |\n" +
			  "\t\t\t\t|  |           --|--           |  |\n" +
			  "\t\t\t\t|  |             |             |  |\n" +
			  "\t\t\t\t|  |                           |  |\n" +
			  "\t\t\t\t|  |                           |  |\n" +
			  "\t\t\t\t|  |             *             |  |\n" +
			  "\t\t\t\t|  |                           |  |\n" +
			  "\t\t\t\t|  ----------         ---------|  |\n" +
			  "\t\t\t\t|            |       |            |\n" +
			  "\t\t\t\t-----------------------------------\n";

	curr.SetDisplay(display);
	return curr;
}

Graphics town(){
	Graphics curr("town", false);
	string display = "\n\n\n";

	display = display +
			  "\t\t\t\t-----------------------------------\n" +
			  "\t\t\t\t|   /--------|       |--------\\   |\n" +
			  "\t\t\t\t|  /   ------|       |   ---   \\  |\n" +
			  "\t\t\t\t|  |  | +    |       |  | + |  |  |\n" +
			  "\t\t\t\t|  |   ------|       |   ---   |  |\n" +
			  "\t\t\t\t|  |         |       |         |  |\n" +
			  "\t\t\t\t|  |         |       |         |  |\n" +
			  "\t\t\t\t|  |   ---   |       |------   |  |\n" +
			  "\t\t\t\t|  |  | + |  |   *   |   +  |  |  |\n" +
			  "\t\t\t\t|  \\   ---   |       |------   /  |\n" +
			  "\t\t\t\t|   \\--------|       |--------/   |\n" +
			  "\t\t\t\t|            |--------|            |\n" +
			  "\t\t\t\t-----------------------------------\n";

	curr.SetDisplay(display);
	return curr;
}

Graphics twoWayY(){
	Graphics curr("Y", false);
	string display = "\n\n\n";

	display = display +
			  "\t\t\t\t-----------------------------------\n" +
			  "\t\t\t\t|     |       |     |       |     |\n" +
			  "\t\t\t\t|      \\      |     |      /      |\n" +
			  "\t\t\t\t|       \\      \\   /      /       |\n" +
			  "\t\t\t\t|        \\      \\ /      /        |\n" +
			  "\t\t\t\t|         \\             /         |\n" +
			  "\t\t\t\t|          \\           /          |\n" +
			  "\t\t\t\t|           \\         /           |\n" +
			  "\t\t\t\t|            |       |            |\n" +
			  "\t\t\t\t|            |       |            |\n" +
			  "\t\t\t\t|            |   *   |            |\n" +
			  "\t\t\t\t|            |       |            |\n" +
			  "\t\t\t\t-----------------------------------\n";

	curr.SetDisplay(display);
	return curr;
}

Graphics emptyRoom(){
	Graphics curr("emptyRoom", true);
	string display = "\n\n\n";

	display = display +
			  "\t\t\t\t-----------------------------------\n" +
			  "\t\t\t\t|   ---------------------------   |\n" +
			  "\t\t\t\t|  |                           |  |\n" +
			  "\t\t\t\t|  |                           |  |\n" +
			  "\t\t\t\t|  |                           |  |\n" +
			  "\t\t\t\t|  |                           |  |\n" +
			  "\t\t\t\t|  |                           |  |\n" +
			  "\t\t\t\t|  |                           |  |\n" +
			  "\t\t\t\t|  |             *             |  |\n" +
			  "\t\t\t\t|  |                           |  |\n" +
			  "\t\t\t\t|  ----------         ---------|  |\n" +
			  "\t\t\t\t|            |       |            |\n" +
			  "\t\t\t\t-----------------------------------\n";

	curr.SetDisplay(display);
	return curr;
}


#endif
