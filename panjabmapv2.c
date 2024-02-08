#include <stdio.h>
#include <conio.h>
#include <string.h>
// Function to perform linear search
int linearSearch(char places[][50], int n, char target[])
{
    for (int i = 0; i < n; i++)
    {
        if (strcmp(places[i], target) == 0)
        {
            return i; // place found, return its index
        }
    }
    return -1; // place not found
};
int main()
{
    getch();
    FILE *file = fopen("./database/ascii_map.txt", "r");
    // Check if the file was opened successfully
    if (file == NULL)
    {
        printf("File could not be opened.\n");
        return 1; // Exit the program with an error code
    }
    // Read and print the contents of the file
    char ch;
    while ((ch = fgetc(file)) != EOF)
    {
        putchar(ch);
    }
    fclose(file); // Close the file
    // Printing the list of cities
    getch();
    printf("\nList of Available cities:\t\t\t\t");
    char cities[][50] = {"Amritsar",
                         "Barnala",
                         "Bathinda",
                         "Firozpur",
                         "Hoshiarpur",
                         "Jalandhar",
                         "Ludhiana",
                         "Mohali",
                         "Muktsar",
                         "Patiala"};
    // Traversing array in order to print the list of cities
    for (int i = 0; i < 10; i++)
    {
        printf(" %s ", cities[i]);
    }
    getch();
    int n = sizeof(cities) / sizeof(cities[0]); // Number of places in the array
    char target[50];
    char d_loc[50];
    printf("\n\nEnter your current location: ");
    scanf("%s", target);
    int result = linearSearch(cities, n, target); // Calling linear search function
    if (result != -1)
    {
        printf("'%s' Locked\n", target);
        printf("Enter your destination: ");
        scanf("%s", &d_loc);
        int desti = linearSearch(cities, n, d_loc);

        if (desti != -1)
        {
            printf("'%s' Locked\n", d_loc);
            getch();
        }
        else
        {
            // Error code For wrong destination location
            printf("'%s' not found in the list of cities.\n", d_loc);
            getch();
        }
    }
    else
    {
        // Error code For wrong current location
        printf("'%s' not found in the list of cities.\n", target);
        getch();
        return 1;
    }

    // Array Cities for comaparing the input city of user with the availbale list of cities
    for (int i = 0; i < 10; i++)
    {
        if (strcmp(cities[i], target) == 0)
        {
            switch (result)
            {
            case 0:
            {
                char city[100];
                int distance;
                FILE *fp;
                fp = fopen("./database/city_amr.txt", " r");
                while (fscanf(fp, "%s %d", &city, &distance) == 2)
                {
                    if (strcmp(d_loc, city) == 0)
                    {
                        printf("Distance fetched...");
                        getch();
                        printf("\nDistance from Amritsar to %s is %dkm\n", city, distance);
                        break;
                        // Close the file
                        fclose(fp);
                    }
                }
                break;
            }
            case 1:
            {
                char city[100];
                int distance;
                FILE *fp;
                fp = fopen("./database/city_bar.txt", " r");
                while (fscanf(fp, "%s %d", &city, &distance) == 2)
                {
                    if (strcmp(d_loc, city) == 0)
                    {
                        printf("Distance fetched...");
                        getch();
                        printf("\nDistance from Barnala to %s is %dkm\n", city, distance);
                        break;
                        // Close the file
                        fclose(fp);
                    }
                }
                break;
            }
            case 2:
            {
                char city[100];
                int distance;
                FILE *fp;
                fp = fopen("./database/city_bat.txt", " r");
                while (fscanf(fp, "%s %d", &city, &distance) == 2)
                {
                    if (strcmp(d_loc, city) == 0)
                    {
                        printf("Distance fetched...");
                        getch();
                        printf("\nDistance from Bathinda to %s is %dkm\n", city, distance);
                        break;
                        fclose(fp);
                    }
                }
                break;
            }
            case 3:
            {
                char city[100];
                int distance;
                FILE *fp;
                fp = fopen("./database/city_frp.txt", " r");
                while (fscanf(fp, "%s %d", &city, &distance) == 2)
                {
                    if (strcmp(d_loc, city) == 0)
                    {
                        printf("Distance fetched...");
                        getch();
                        printf("\nDistance from Firozpur to %s is %dkm\n", city, distance);
                        break;
                        fclose(fp);
                    }
                }
                break;
            }
            case 4:
            {
                char city[100];
                int distance;
                FILE *fp;
                fp = fopen("./database/city_hsp.txt", " r");
                while (fscanf(fp, "%s %d", &city, &distance) == 2)
                {
                    if (strcmp(d_loc, city) == 0)
                    {
                        printf("Distance fetched...");
                        getch();
                        printf("\nDistance from Hoshiarpur to %s is %dkm\n", city, distance);
                        break;
                        fclose(fp);
                    }
                }
                break;
            }
            case 5:
            {
                char city[100];
                int distance;
                FILE *fp;
                fp = fopen("./database/city_jal.txt", " r");
                while (fscanf(fp, "%s %d", &city, &distance) == 2)
                {
                    if (strcmp(d_loc, city) == 0)
                    {
                        printf("Distance fetched...");
                        getch();
                        printf("\nDistance from Jalandhar to %s is %dkm\n", city, distance);
                        fclose(fp);
                        break;
                    }
                }
                break;
            }
            case 6:
            {
                char city[100];
                int distance;
                FILE *fp;
                fp = fopen("./database/city_lha.txt", " r");
                while (fscanf(fp, "%s %d", &city, &distance) == 2)
                {
                    if (strcmp(d_loc, city) == 0)
                    {
                        printf("Distance fetched...");
                        getch();
                        printf("\nDistance from Ludhiana %s %dkm\n", city, distance);
                        break;
                        fclose(fp);
                    }
                }
                break;
            }
            case 7:
            {
                char city[100];
                int distance;
                FILE *fp;
                fp = fopen("./database/city_moh.txt", " r");
                while (fscanf(fp, "%s %d", &city, &distance) == 2)
                {
                    if (strcmp(d_loc, city) == 0)
                    {
                        printf("Distance fetched...");
                        getch();
                        printf("\nDistance from Mohali to %s is %dkm\n", city, distance);
                        break;
                        fclose(fp);
                    }
                }
                break;
            }
            case 8:
            {
                char city[100];
                int distance;
                FILE *fp;
                fp = fopen("./database/city_muk.txt", " r");
                while (fscanf(fp, "%s %d", &city, &distance) == 2)
                {
                    if (strcmp(d_loc, city) == 0)

                    {
                        printf("Distance fetched...");
                        getch();
                        printf("\nDistance from Muktsar to %s is %dkm\n", city, distance);
                        break;
                        fclose(fp);
                    }
                }
                break;
            }
            case 9:
            {
                char city[100];
                int distance;
                FILE *fp;
                fp = fopen("./database/city_pat.txt", " r");
                while (fscanf(fp, "%s %d", &city, &distance) == 2)
                {
                    if (strcmp(d_loc, city) == 0)
                    {
                        printf("Distance fetched...");
                        getch();
                        printf("\nDistance from Patiala to %s is %dkm\n", city, distance);
                        break;
                        fclose(fp);
                    }
                }
                break;
            }
            }
        }
    }
    getch();
    return 0;
}