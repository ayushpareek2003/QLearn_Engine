#Reinforcement Learning with Q-Learning in C++
This repository showcases the implementation of Q-Learning using the Bellman Equation for grid-based environments. The project is written in C++ and structured with a clear separation of concerns for easy extensibility and maintenance. It's designed for developers and students exploring reinforcement learning concepts.

##Features:
Core Functionality: Encapsulated within the QL_RL class inside the ql namespace.
Customizable Parameters:
Grid size (Grid_Size)
Number of epochs (epochs)
Learning rate (Alpha)
Discount factor (gamma)
Exploration-exploitation rate (epsilon)
Dynamic Action Selection: Balances exploration and exploitation to optimize learning.
Optimal Policy Visualization: Displays the grid and actions leading to the goal.

##Code Structure:

###Header File (Q_Agent.hpp):
Defines the QL_RL class with:
Private members for configuration, Q-table, and grid.
Public methods for training, action selection, table updates, and policy display.

###Source File (Q_Agent.cpp):
Implements all methods:
chooseAction: Chooses an action based on the Q-values and epsilon-greedy policy.
update_table: Updates the Q-values using the Bellman Equation.
trainer: Simulates the agent's training process on the grid.
printOptimumPolicy: Displays the optimal policy for the grid.

###Main Program:
Creates an instance of the QL_RL class, initializes parameters, and runs training.
