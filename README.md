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
- **`src/`**: Contains the C++ source file with the implementation of the `QL_RL` class.
- **`inc/`**: Holds the header file that declares the `QL_RL` class and its methods.
- **`main.cpp`**: The main file used to run and test the Q-Learning implementation.

### 2. Run this command
```bash
cl /EHsc main.cpp src\Q_Agent.cpp /I inc
```


## Sample Run

### Input Data

```cpp
    std::vector<std::vector<int>> grid = {
        {0, -1,  0,  0,  0},
        {0,  0,  0, -1,  0},
        {0, -1,  0,  0,  0},
        {0,  0,  0,  0,  0},
        {0,  0,  0, -1, 10}
    };

    std::vector<std::vector<std::vector<double>>> qValues(5, std::vector<std::vector<double>>(5, std::vector<double>(4, 0.0)));
}
```

### Output
```bash
Optimal Policy:
 D   X   R   R   D 
 D   D   R   X   D 
 D   X   D   R   D 
 R   R   D   R   D 
 R   R   R   X   G
```



