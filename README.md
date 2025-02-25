# oophorserace

1. Define the Horse Class

Properties:

name (string): The horse's name or identifier.

position (int): The horse's current position on the track.

Constructor:

Initializes name and sets position to 0.

Methods:

advance(): Moves the horse forward with a 50% probability.

getPosition(): Returns the current position.

getName(): Returns the horse's name.

2. Define the Race Class

Properties:

horses (array of Horse objects): The list of competing horses.

track_length (int): The length of the race track.

Constructor:

Accepts the number of horses and initializes them.

Sets a default track length (e.g., 10 units).

Methods:

startRace(): Runs the race in a loop until a horse reaches the finish line.

displayRace(): Displays the current positions of all horses.

checkWinner(): Checks if any horse has reached the finish line and returns the winner(s).

3. Main Function (Entry Point)

Create a Race object.

Call startRace() to begin the race.

Display the winner(s).

Example Workflow

Initialize race with five horses.

Each round:

Each horse has a 50% chance to advance.

The race state is displayed.

The system checks if any horse has won.

Repeat until a winner is found.

Announce the winner(s) and end the race.

This structured approach follows an object-oriented design and ensures modularity and maintainability in the C++ implementation.
