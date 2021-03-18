# This algorithm is for Problem 5 of Chapter 4 of the Kleinberg Book

The problem is to make an algorithm that places cell phone stations for houses along a farm road. Each house along the road must have a cell phone station within 4 miles of it. 

This algorithm finds the first house and places a tower 4 miles ahead of the first house. After this it moves to the next house and checks if the first tower is within four miles of the next house. If it is within four miles then the algorithm moves to the next house. If there isn't a station within four miles it places a tower 4 miles ahead of the current house. This process continues until there are no more houses. In the included file it uses test arrays with 10 houses and space for at most 10 stations, which would be the highest possible amount needed. 

Here is a demo video of the program:
https://drive.google.com/file/d/1_HBV6FNtcldabwM5ZFUcnUOZWmT9EhD0/view?usp=sharing

