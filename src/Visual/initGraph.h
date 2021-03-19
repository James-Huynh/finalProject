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

// James stuff
Graphics mainMenu(){
	Graphics curr("Main Menu", false, false, false);
	string display = "\n\n\n";

	display = display +
	"\t\t\t\t                _______________________________________\n" +
	"\t\t\t\t               |\\____________________________________ /|\n"
	"\t\t\t\t               | |                                   | |\n" +
	"\t\t\t\t               | |        ___		   ___       | |\n" +
	"\t\t\t\t               | |       |   |            |   |      | |\n" +
	"\t\t\t\t               | |       |   |            |   |      | |\n" +
	"\t\t\t\t               | |       |   |            |   |      | |\n" +
	"\t\t\t\t               | |       |   |            |   |      | |\n" +
	"\t\t\t\t               | |       |   |            |   |      | |\n" +
	"\t\t\t\t               | |       |   |____________|   |      | |\n" +
	"\t\t\t\t               | |       |                    |      | |\n" +
	"\t\t\t\t               | |       |    ____________    |      | |\n" +
	"\t\t\t\t               | |       |   |            |   |      | |\n" +
	"\t\t\t\t               | |       |   |            |   |      | |\n" +
	"\t\t\t\t               | |       |   |            |   |      | |\n" +
	"\t\t\t\t               | |       |   |            |   |      | |\n" +
	"\t\t\t\t               | |       |   |            |   |      | |\n" +
	"\t\t\t\t               | |       |___|            |___|      | |\n" +
	"\t\t\t\t               | |                                   | |\n" +
	"\t\t\t\t               | |                                   | |\n" +
	"\t\t\t\t               | |   	      H O R I Z O N          | |\n" +
	"\t\t\t\t               | |                                   | |\n" +
	"\t\t\t\t               | |                                   | |\n" +
	"\t\t\t\t               |/ ----------------------------------- \\|\n" +
	"\t\t\t\t               |---------------------------------------|\n\n" +
	"\n\n";

	display = display +
			  "\t\t\t\t                           Welcome to Horizon\n" +
			  "\n" +
			  "\t\t\t\tA Text-based Game Set In A World Where Myths, Stories And Legends Collide\n" +
			  "\n" +
			  "\n" +
			  "\n" +
			  "\t\t\t\t			     1.   Start\n" +
			  "\n" +
			  "\t\t\t\t			     1.   Load\n" +
			  "\n" +
			  "\t\t\t\t			     2.   Quit\n";

	curr.SetDisplay(display);
	return curr;
}

Graphics deathVisuals(){
	Graphics curr("Death Screen", false, false, false);
	string display = "\n\n\n";

	display = display +
			  "\t\t\t\t				You Died" +
			  "\n" +
			  "\n" +
			  "\n" +
			  "\t\t\t\t		    \"When Nothing Goes Right, Go Left\"" +
			  "\n" +
			  "\n" +
			  "\n" +
			  "\t\t\t\t			      1. Restart"
			  "\n" +
			  "\n" +
			  "\t\t\t\t			      2.  Load"
			  "\n" +
			  "\n" +
			  "\t\t\t\t			      3.  Quit";


	curr.SetDisplay(display);
	return curr;
}


#endif
