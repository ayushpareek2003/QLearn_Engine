# Reinforcement Learning with Q-Learning in C++

This repository implements **Q-Learning** for grid-based environments using the **Bellman Equation**. It is written in C++ with a clear and modular structure, making it an excellent resource for learning and experimentation in reinforcement learning.

---

## Features
- **Core Functionality**:
  - Implemented in the `QL_RL` class under the `ql` namespace.
- **Customizable Parameters**:
  - Grid size (`Grid_Size`)
  - Number of epochs (`epochs`)
  - Learning rate (`Alpha`)
  - Discount factor (`gamma`)
  - Exploration-exploitation rate (`epsilon`)
- **Optimal Policy Visualization**: Displays an intuitive grid-based optimal policy.
- **Dynamic Action Selection**: Implements the epsilon-greedy approach for exploration and exploitation.

---

## Code Structure
1. **Header File (`Q_Agent.hpp`)**:
   - Defines the `QL_RL` class and its methods for training, action selection, table updates, and policy display.
   
2. **Source File (`Q_Agent.cpp`)**:
   - Implements the Q-Learning algorithm, including:
     - Action selection (`chooseAction`)
     - Q-value updates (`update_table`)
     - Grid navigation during training (`trainer`)
     - Displaying the learned policy (`printOptimumPolicy`)
   
3. **Main Program (`main.cpp`)**:
   - Initializes the agent, trains it on the grid, and displays the resulting optimal policy.

---

## How to Run the Program
### 1. Folder Structure
Organize the files as follows:
