#include "pop-header.h"

/*item 97 is entering Silver Street, item 98 is looking at shops, item 99 is event climb over wall*/
unsigned int events[500][8] = { /*this begins at 0, then is organized in sets of 10, ex. 1-10, 11-20, etc.*/
	{1},
	/*1 - 100*/
	{19, 58, 0, 9}, {252}, {22, 0, 0, 3, 1, 3}, {58, 0, 0, 5, -2, 0, -1}, {145, 192, 0, 6, 0, 20, 1}, {93, 286, 0, 8, 24, 99}, {277, 47, 0, 6, 0, 3, 1}, {384, 33},{160, 96, 0, 1},{172, 158, 999, 9},
	{337, 202, 0, 7, 5, 1}, {271, 153, 0, 1}, {311}, {401, 0, 0, 5, 0, 2}, {0, 0, 0, 4}, {269, 89, 0, 6, 6, 1}, {231, 0, 0, 3, 4, 1}, {403, 0, 0, 5, 0, 2}, {126, 58},{327, 386, 0, 1},
	{382}, {372}, {373, 234}, {367, 0, 0, 31, 5, 1}, {211, 178, 0, 6, 0, 1, 1}, {247, 58, 0, 8, 1, 4}, {256, 173, 0, 6, 7, 1, 1}, {347, 316}, {335, 306, 0, 6, 0, 1, 1},{64},
	{322, 0, 0, 3, 6, 1}, {41, 264}, {334, 283}, {397, 232}, {103, 325, 0, 5, 0, -2 }, {0, 0, 0, 4}, {392, 284, 0, 6, 17, -1, 2, 1}, {330, 134}, {282, 118, 0, 6, 0, 3, 1, 12}, {4, 155},
	{54, 404, 0, 6, 0, 10, 1}, {253, 90}, {405, 0, 0, 5, 0, 2}, {407, 0, 0, 8, 0, -99}, {408, 0, 0, 5, -1, -2}, {157}, {160, 96, 0, 1}, {349, 206}, {279}, {372},
	{409, 0, 0, 8, 0, 5}, {0, 0, 0, 4}, {44, 30}, {395}, {410, 0, 0, 8, 0, 1}, {72, 114}, {212, 0, 0, 5, -2, 0, -2}, {104, 8, 283}, {86}, {22, 0, 0, 3, 1, 3},
	{368}, {0, 0, 0, 4}, {300, 118}, {263, 148}, {372, 350, 302, 9}, {32, 374, 0, 6, 0, 1, 1}, {352, 109}, {303, 9, 0, 6, 0, 2, 1}, {208, 354, 0, 9, 7, 3}, {45, 138, 0, 7, 9, 1},
	{358, 134}, {24, 217, 0, 1}, {415, 0, 0, 8, 35, 1}, {378, 311}, {89, 0, 0, 8, 31, -1}, {312, 220, 0, 1}, {267, 138, 0, 2, 2}, {402, 0, 0, 8, 0, 15}, {370, 203}, {261, 290, 0, 1},
	{102, 0, 0, 3, 10, 1}, {326, 8, 283}, {372}, {331, 376, 251, 5, 0, 2}, {164, 0, 0, 5, 1, 2}, {416, 0, 0, 5, 0, 1}, {252, 0, 0, 9}, {298, 26}, {317, 63}, {231, 0, 0, 3, 4, 1},
	{68, 260, 0, 6, 0, 1, 1}, {48, 147, 0, 2}, {417, 0, 0, 6, 0, 20, 1, 6}, {0, 0, 0, 4}, {394, 182, 0, 2}, {0, 0, 0, 4}, {53, 44}, {324, 185, 0, 1}, {246}, {319, 164, 0, 5, 0, 1},
	/*101 - 200*/
	{366, 75, 0, 9}, {321, 150, 0, 8, 0, 3, 68, 2}, {325, 0, 0, 5, 1, 0, 1}, {275, 82, 0, 8, 97, 100}, {131, 62, 0, 1}, {379, 0, 0, 5, 0, -2}, {61, 0, 0, 3, 11, 1, -3}, {479}, {0, 0, 0, 4}, {351, 122},
	{289, 399}, {348, 0, 0, 5, 0, 0, -1}, {179, 0, 0, 3, 12, 1}, {72, 0, 0, 5, 0, 0, -1}, {49, 243, 0, 1}, {134}, {285, 304}, {313, 0, 0, 3, 13, 1}, {0, 0, 0, 0, 0, 0, 0,}, {246, 0, 0, 8, 78, 1},
	{166, 206, 0, 6, 1, 1, 1}, {112, 348, 0, 2, 0, 1}, {368}, {60, 204, 0, 7, 16, 1}, {31, 338}, {268, 58, 0, 6, 63, 1, 1}, {181, 383}, {0, 0, 0, 4}, {20, 16, 63}, {323, 164},
	{232}, {81, 340, 0, 5, 0, 1}, {175, 213}, {216, 250}, {333, 0, 0, 8, 20, 1}, {56, 0, 0, 5, 0, 1}, {23, 12, 305}, {0, 0, 0, 4}, {385, 87}, {414, 0, 0, 5, 0, -2},
	{469, 0, 0, 8, 22, 1}, {277, 7, 0, 6, 0, 4, 1}, {99, 254}, {368}, {192}, {2, 0, 0, 5, 0, -1}, {419, 0, 0, 5, 0, -1}, {319, 164, 0, 5, 0, 1}, {187, 63}, {248, 94, 0, 1},
	{205, 52, 0, 1}, {0, 0, 0, 4}, {305, 0, 0, 5, 0, -2}, {279, 115}, {58, 0, 0, 8, 0, 1}, {200, 398}, {0, 0, 0, 4}, {24, 0, 0, 5, -1, -2}, {360, 209}, {420, 0, 0, 5, -1, -2},
	{189, 0, 0, 8, 71, 2}, {197, 292 }, {371, 0, 0, 8, 1, 3, 74, 1}, {71, 134}, {27, 235, 0, 7, 23, 1}, {206, 0, 0, 5, -1, -3}, {152}, {0, 0, 0, 4}, {157}, {142, 47, 0, 5, -2, 0, -1},
	{0, 0, 0, 4}, {0, 0, 0, 4}, {246}, {21, 336, 0, 7, 40}, {0, 0, 0, 4}, {246}, {28, 316}, {371, 80}, {421, 0, 0, 8, 1, 5, 28, 1}, {395, 0, 0, 8, 76, 1},
	{383, 0, 0, 5, 2, 3, 1}, {0, 0, 0, 4}, {422, 0, 0, 5, -4, -1}, {4, 155}, {56, 0, 0, 5, 0, 1}, {0, 0, 0, 4}, {317, 16}, {137, 12, 305, 8, 99, 100}, {35, 103, 325}, {139, 342},
	{423, 0, 0, 5, 0, 2}, {424, 0, 0, 9}, {425, 0, 0, 8, 0, 2, 7, 1}, {159, 176, 0, 5, 0, 1}, {33, 0, 0, 5, 1}, {333}, {157}, {267, 116, 0, 2}, {67, 0, 0, 3, 18, 1}, {91, 260, 0, 5, 0, -1},
	/*201 - 300*/
	{97, 30}, {362, 0, 0, 3, 19, 1, -4}, {157}, {3, 364, 0, 2}, {18, 170, 0, 6, 0, 2}, {188, 12, 305}, {0, 0, 0, 4}, {197, 292, 0, 5, 0, 0, 1}, {381, 0, 0, 3, 20, 1}, {430, 0, 0, 8, 60, 1, 41, 1},
	{371, 178}, {307, 389}, {108, 29, 0, 6, 0, 3}, {82, 0, 0, 8, 0, 10}, {431, 0, 0, 8, 0, 15}, {432, 0, 0, 5, 0, 1}, {172, 158, 332, 9}, {320, 196, 0, 1}, {97, 201}, {312, 0, 0, 9},
	{379}, {0, 0, 0, 4}, {0, 0, 0, 4}, {0, 0, 0, 4}, {37, 284}, {191, 0, 0, 3, 21, 3}, {433, 0, 0, 8, 0, 1, 1, 2}, {393, 98, 0, 6, 19, -1, 2, 1}, {434, 0, 0, 8, 1, 1}, {295},
	{440, 0, 0, 8, 0, 5}, {377, 124}, {225}, {12, 305, 0, 5, -1, -1}, {120, 344, 246, 9}, {95, 345, 0, 5, 0, -1}, {75, 366, 0, 9}, {252}, {387, 247}, {113, 283},
	{14}, {285, 224}, {441, 0, 0, 5, 0, -4}, {391, 164}, {372, 0, 0, 5, -1, -2}, {333}, {291, 58}, {321}, {129, 16, 63}, {144, 107, 0, 5, 0, 1},
	{251, 348, 0, 6, 0, 1, 1}, {34, 105, 232}, {90, 0, 0, 5, 0, -2}, {246}, {64}, {135, 218}, {359, 0, 0, 5, 1}, {161, 189}, {443, 66}, {444, 0, 0, 5, 0, 2},
	{371, 445, 0, 6, 0, 3, 1}, {4, 155}, {100, 361, 0, 1}, {207, 41, 0, 6, 0, 10, 1}, {375, 0, 0, 9, 30, 1}, {141, 468, 0, 5, 0, 2, 0}, {400}, {365, 58, 0, 6, 55, 1, 1, 36}, {101, 237}, {2, 0, 0, 5, -2, 0, -2},
	{305}, {446}, {42, 17}, {86}, {396, 82, 0, 7, 32, 1}, {152, 65}, {447, 0, 0, 5, 0, 2}, {61, 0, 0, 3, 11, 1, -3}, {448, 0, 0, 5, 2, 2}, {213, 133},
	{301, 169}, {118, 0, 0, 8, 11, -1, 13, 2}, {74, 311, 0, 6, 1, 3, 1}, {310, 0, 0, 3, 31, 1}, {0, 0, 0, 4}, {36, 154}, {0, 0, 0, 4}, {449, 0, 0, 8, 0, 15}, {174}, {450, 0, 0, 5, 0, -2},
	{40, 262, 184}, {273, 17, 0, 6, 54, 1}, {233, 355, 0, 5, 0, -1}, {64}, {322, 0, 0, 3, 0, 6, 1}, {138, 70, 198, 9}, {165, 329}, {247, 58, 0, 8, 1, 4, 32, 1}, {139}, {341, 39, 118},
	/*301 - 400*/
	{380, 69}, {50, 0, 0, 3, 32, 1}, {339, 223, 151}, {257, 359}, {477, 0, 0, 8, 98, 100}, {0, 0, 0, 4}, {186, 389}, {11}, {93, 286}, {194, 246},
	{92, 349, 206}, {276, 152, 0, 7, 14, 1}, {25, 328}, {128, 162, 0, 9}, {225}, {157}, {249, 63}, {58, 239}, {229, 0, 0, 3, 33, 2}, {135},
	{304, 117}, {452, 0, 0, 8, 0, 22, 28, 1}, {199, 287, 0, 1}, {56, 0, 0, 5, 0, 3}, {453}, {255, 454, 0, 6, 1, 1, 1}, {455, 0, 0, 5, 0, -2}, {456, 0, 0, 5, 1}, {246}, {134, 0, 0, 9},
	{376}, {0, 0, 0, 4}, {457}, {240, 283}, {251}, {382, 0, 0, 3, 35, 1, 0, -1}, {362, 0, 0, 3, 19, 1, 3}, {464, 0, 0, 5, -1, -3}, {0, 0, 0, 4}, {79, 242},
	{458, 459, 0, 6, 0, 1, 1, 79}, {299, 0, 0, 33, 36, 2}, {58, 0, 0, 5, 0, -1}, {246, 0, 0, 8, 78, 1}, {79, 281}, {221, 106, 0, 1}, {132, 363}, {461, 0, 0, 5, 0, -1}, {206, 0, 0, 5, 0, -2}, {83, 245, 0, 1},
	{462, 0, 0, 5, 1, 3}, {210, 0, 0, 38, 1}, {390, 5}, {128, 162, 314, 9}, {233, 293, 0, 5, 0, -1, -1}, {222, 267, 0, 9}, {0, 0, 0, 4}, {226, 116}, {228, 136}, {297, 143},
	{463, 0, 0, 9}, {296, 138, 0, 7, 24, 100}, {0, 0, 0, 4}, {465, 0, 0, 5, -1, -2}, {318, 58, 0, 6, 61, 1, 1, 37}, {89, 0, 0, 8, 11, 1}, {466}, {265, 236}, {233, 293, 0, 5, 0, 0, -1}, {157},
	{274, 353}, {266, 467, 0, 8, 0, 2}, {470, 0, 0, 5, -1, -1}, {471, 0, 0, 5, 0, -1}, {51, 236}, {280, 251}, {76, 0, 0, 9}, {13, 311}, {472}, {69, 0, 0, 5, 1},
	{246}, {57, 212}, {84, 331, 376, 9}, {195, 473, 0, 6, 0, 10, 1}, {270, 146}, {0, 0, 0, 4}, {88, 343, 0, 1}, {161, 189}, {177, 316, 0, 8, 75, 1}, {192, 5}, 
	{85, 164}, {474, 0, 0, 5, 1, 0, 1}, {98, 0, 0, 5, 1, 0, 1}, {55, 140, 0, 1}, {476}, {214, 82, 0, 6, 32, 1, 1}, {0, 0, 0, 4}, {475, 0, 0, 5, 0, -1}, {442, 0, 0, 5, 0, -2}, {0},
	/*401-480*/
	{215, 78, 288}, {272, 0, 0, 5, 0, 10, 0, 1}, {73, 100, 0, 6, 0, 2, 1}, {180, 264, 0, 6, 0, 5, 1}, {406, 0, 0, 8, 30, 1, 23, 1}, {156, 258}, {294, 15, 0, 7, 28, 1}, {222, 267, 0, 9}, {236, 236, 0, 6, 73, -1, 2, 1}, {411, 411, 0, 6, 67, -1, 2, 1},
	{412, 412, 0, 6, 40, -1, 2, 1}, {413, 0, 0, 8, 14, 1, 15, 6}, {345, 0, 0, 5, 0, 1}, {193, 0, 0, 3, 14, 2}, {351, 122, 0, 5, 0, 0, 3}, {230, 125, 0, 7, 29, 1},{418, 0, 0, 6, 0, 10, 1, 25}, {286, 0, 0, 6, 0, 10, 1, 26}, {121, 0, 0, 3, 16, 1}, {388, 0, 0, 3, 17, 1},
	{480, 0, 0, 8, 0, 3, 1, 10}, {11}, {38, 134, 0, 8, 38, 1}, {59, 0, 0, 5, 0, 0, -2}, {426, 0, 0, 6, 34, -1, 2, 1}, {427, 0, 0, 6, 67, -1, 2, 1}, {428, 0, 0, 6, 66, -1, 2, 1}, {429, 0, 0, 6, 40, -1, 2, 1}, {345, 0, 0, 8, 14, 1, 15, 6}, {244, 164, 0, 8, 34, 1},
	{272, 0, 0, 5, 12, 0, 0, 2}, {123, 278, 0, 1}, {66, 0, 0, 8, 27, 1, 10, 1}, {434, 0, 0, 6, 72, -1, 2, 7}, {435, 0, 0, 6, 68, -1, 2, 1}, {436, 0, 0, 6, 77, 2, 1}, {437, 0, 0, 6, 69, -1, 2, 1}, {438, 0, 0, 6, 70, -1, 2, 1}, {130, 164, 0, 9}, {46, 111, 0, 0, 5, 0, 0, 1},
	{279}, {174}, {227, 0, 0, 3, 24, 3}, {303, 9, 0, 6, 0, 2, 1}, {163, 0, 0, 3, 27, 3}, {259, 66}, {73, 110, 0, 6, 0, 2, 1}, {308, 183, 0, 7, 20, 1}, {272, 0, 0, 5, 0, 0, 12, 2}, {371, 451, 0, 6, 0, 3, 1},
	{163, 0, 0, 3, 27, 3, -2}, {168, 346}, {112, 348, 0, 6, 0, 1, 1}, {8, 283}, {63, 0, 0, 0, 8, 0, 1}, {25, 0, 0, 8, 24, 1}, {14, 241}, {458, 459, 0, 6, 0, 1, 1, 79}, {460, 118, 0, 7, 11, 1}, {39, 118, 0, 6, 0, 2},
	{315, 369, 0, 7, 30, 1}, {112, 348, 0, 6, 0, 1, 1}, {319, 164, 0, 5, 0, 1}, {322, 0, 0, 3, 6, 1}, {22, 0, 0, 3, 1, 3}, {238, 190}, {141, 468}, {127, 383}, {127, 383, 0, 5, 0, 0, 2}, {219, 0, 0, 3, 39, 2},
	{41, 264}, {6, 309, 0, 7, 24, 1}, {171, 33}, {284, 0, 0, 8, 0, 10, 31, 1}, {303, 9, 0, 6, 0, 2, 1}, {149, 357, 0, 7, 76, 1}, {478, 478, 0, 6, 0, 1, 1, 29}, {64, 188, 0, 7, 99, 0, 1}, {43, 251}, {283, 104, 0, 7, 97, 0, 1}
};

unsigned char inventory[100][30] = {
		"Gold Pieces", "Copper Pieces", "Provisions", "Potion of SKILL", "Potion of STAMINA",
		"Potion of FORTUNE", "Venom Sword", "Small Hand-axe", "Demon Dagger", "Salamonian Steel Dagger",
		"Serrated Knife", "Old Flintlock Pistol", "Polished Flintlock Pistol", "Lead Ball", "Bow",
		"Arrow", "Dwarf Warrior Shield", "Elven Helmet", "Chainmail Coat", "Elven Boots",
		"Dragonfly Pendant", "Bracelet of Power", "Tyche Ring", "Rune Ring", "The Ring of Burning Snakes",
		"Orb of Obedience",	"Horn of Calling", "Silver Key", "Iron Key", "Set of Brass Keys",
		"Brass Compass", "Ruby", "Gold Rabbit Charm", "Cast-Iron Pig Trinket", "Stone Pig Figurine",
		"Lucky Bones", "Snake Oil", "Skunk Oil", "Stikkle Wax", "Black Powder",
		"Small Bag of Salt", "Dried Nettles", "Glass Vial of Green Gas", "Jar of Dried Deelia Petals", "Jar of Zanhoke Seeds",
		"Jar of Noop Powder", "Jar of Redthorn Leaf", "Jar of Siff-Saff Paste",	"Jar of Lotus Flower", "Jar of Fireroot Juice",
		"Jar of Rats' Tails", "Jar of Small Bones", "Jar of Worms",	"Jar of Dead Flies", "Jar of Sheep's Eyeballs",
		"Ball of Twine", "Candle", "Small Brass Bell", "Oil Lantern", "Knife",
		"Piece of Chalk", "Brass Owl", "Length of Rope", "Bag of Copper Nails", "Animal-Skin Water Flask",
		"Unicorn-Head Engraved Goblet", "Flint", "Fish Hooks", "Silver Button",	"Arrowhead",
		"Polished Stone","Large Fang", "Teeth", "Locket of Grey Hair", "Black Pearl",
		"Wooden Box", "Merchant's Pass", "Glass Eye", "Dwarven Battleaxe", "Fireworks"
};