### Modern C++ 2024 Final Project (a.k.a. The Final Boss): 2D Lidar odometry in the Real-World

Rules for the project are simple:

- You can use whatever library you want to complete the task
- Go bananas in the implementation, because the project is public this serves also as a self-promoting tool

## Project implementation:

- ###### Current implementation:

  In main.cpp


  - Initially loading first 2 scanfiles from the BINARY data folder.
  - First scan is source_scan and the second scan is target_scan.
  - Then visualizing the two scans and get the number of points in the 2 scans one after the other.
- ###### Target implementation:


  - Use these scanfiles and find the nearest neighbour for each point and implement ICP algorithm.
  - Then find the transformation of target_scan w.r.t source_scan.
  - Then iterate through all the files in the BINARY data folder and apply the same logic for every 2 consecutive scan files.

## Project usage:

- In the terminal go to the root directory (modern-cpp-2024-project).
- For the first time there is no build folder available in this repo. So, execute below command

  - `cmake -Bbuild .`
- Once the build folder is created, execute below command

  - `cmake --build build`
- Now, once the code is build successfully run the main file from build folder i.e., below command

  - `./build/apps/main .`
