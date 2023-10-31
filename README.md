map_of_punjab
I have created a project that focuses on 10 cities in the Punjab region. The project includes several key components: 

1. I used ASCII art to create a visual map of these cities.
2. I implemented file-handling techniques to access data from a database that consists of 10 different files. Each file contains distance values between cities.

Here's how the program works:

- The user provides the current city and the destination city.
- A linear search algorithm is used to find the user's input cities within an array of city names.
- When both cities are located in the array, the linear search function returns the index values of these cities.

Now, here's where the switch case comes into play:

- The switch case takes the index of the current city as input, which ranges from 0 to 9. Each case corresponds to a specific database file related to that index element.
- For example, if the user inputs "Mohali," the index of Mohali is determined by the linear search.
- The switch case for index 7 is triggered because "Mohali" corresponds to index 7 in the city array.
- The program then retrieves data from the "city_moh.txt" database file, which contains distances considering Mohali as the starting point.

This approach ensures that the distances are accurately determined, taking into account Google Maps data for precision.
