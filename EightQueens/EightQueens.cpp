// EightQueens.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

void solveOne(Engine *engine);
void solveMany(Engine *engine);

int main(int argc, char *argv[])
{
	Engine *engine = new Engine();

	if (argc > 1) {
		int num;
		sscanf_s(argv[1], "%d", &num);
		engine->setDimension(num);
	} 

	printf("Looking for a solution to the [%d] queens problem.\n",
		engine->getDimension());

	time_t start, end;

	time(&start);
	solveOne(engine);
	time(&end);

	printf("Took [%.0f] seconds to calulate results \n", difftime(end, start));

	delete engine;

	system("pause");
	//_CrtDumpMemoryLeaks();
	return 0;
}

void solveOne(Engine *engine) {
	engine->stateFindOne();
}

void solveMany(Engine *engine) {
	engine->bruteFindMany();
}

