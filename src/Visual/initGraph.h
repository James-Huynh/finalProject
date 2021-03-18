#ifndef VISUAL_INITGRAPH_H_
#define VISUAL_INITGRAPH_H_
#include "Graphics.h"
#include "../Entity/Character.h"

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

Graphics straightLineEnemy(){
	Graphics curr("verticalLinewithEnemy", true);
	string display = "\n\n\n";

	display = display +
			  "\t\t\t\t-----------------------------------\n" +
			  "\t\t\t\t|            |       |            |\n" +
			  "\t\t\t\t|            |       |            |\n" +
			  "\t\t\t\t|            |   X   |            |\n" +
			  "\t\t\t\t|            | --|-- |            |\n" +
			  "\t\t\t\t|            |   |   |            |\n" +
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
	Graphics curr("endRoom", true, true);
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
			  "\t\t\t\t|  |                           |  |\n" +
			  "\t\t\t\t|  |             *             |  |\n" +
			  "\t\t\t\t|  ----------         ----------  |\n" +
			  "\t\t\t\t|            |       |            |\n" +
			  "\t\t\t\t-----------------------------------\n";

	curr.SetDisplay(display);
	return curr;
}

Graphics town(){
	Graphics curr("Town", false);
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
			  "\t\t\t\t|            |-------|            |\n" +
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
	Graphics curr("emptyRoom", false);
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
			  "\t\t\t\t|  ----------         ----------  |\n" +
			  "\t\t\t\t|            |       |            |\n" +
			  "\t\t\t\t-----------------------------------\n";

	curr.SetDisplay(display);
	return curr;
}

Graphics chestRoom(){
	Graphics curr("chestRoom", false, false, true);
	string display = "\n\n\n";

	display = display +
			  "\t\t\t\t-----------------------------------\n" +
			  "\t\t\t\t|   ---------------------------   |\n" +
			  "\t\t\t\t|  |          -------          |  |\n" +
			  "\t\t\t\t|  |         | | o | |         |  |\n" +
			  "\t\t\t\t|  |          -------          |  |\n" +
			  "\t\t\t\t|  |                           |  |\n" +
			  "\t\t\t\t|  |                           |  |\n" +
			  "\t\t\t\t|  |                           |  |\n" +
			  "\t\t\t\t|  |             *             |  |\n" +
			  "\t\t\t\t|  |                           |  |\n" +
			  "\t\t\t\t|  ----------         ----------  |\n" +
			  "\t\t\t\t|            |       |            |\n" +
			  "\t\t\t\t-----------------------------------\n";

	curr.SetDisplay(display);
	return curr;
}

Graphics chestRoomWithExit(){
	Graphics curr("chestRoomWithExit", false, false, true);
	string display = "\n\n\n";

	display = display +
			  "\t\t\t\t-----------------------------------\n" +
			  "\t\t\t\t|   ---------|       |----------   |\n" +
			  "\t\t\t\t|  |                           |  |\n" +
			  "\t\t\t\t|  |                           |  |\n" +
			  "\t\t\t\t|  |                      |---||  |\n" +
			  "\t\t\t\t|  |                      | o ||  |\n" +
			  "\t\t\t\t|  |                      | o ||  |\n" +
			  "\t\t\t\t|  |                      |---||  |\n" +
			  "\t\t\t\t|  |             *             |  |\n" +
			  "\t\t\t\t|  |                           |  |\n" +
			  "\t\t\t\t|  ----------         ----------  |\n" +
			  "\t\t\t\t|            |       |            |\n" +
			  "\t\t\t\t-----------------------------------\n";

	curr.SetDisplay(display);
	return curr;
}


#endif
