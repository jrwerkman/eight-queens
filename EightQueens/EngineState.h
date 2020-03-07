#pragma once
class EngineState
{
	int currentState = 0;
	int numberOfStates = 0;
	int dimension = 0;
	State *states = nullptr;
public:
	EngineState();
	EngineState(const int &dim);
	~EngineState();

	void findSolution();
	void reinit();
	void prepare(const Coords &coord);
private:
	int getDimension();
	bool checkNext(const int &state);
	int getContinuationState(const int &state);
	void init(const int &dim);
};

