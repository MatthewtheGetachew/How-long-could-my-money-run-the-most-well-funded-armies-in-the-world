#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct country {
    char *name;
    double budget;
};

char* moneyformatter(int money);

int main(int argc, char const *argv[])
{
    char *name;
    int count = 0;
    double damoneyindabag; // som define code
    printf("Enter the amount of USD: "); // print thingy=>
    scanf("%lf", &damoneyindabag); //input
    if (damoneyindabag <= 0) {
        printf("no negative numbers ya scallywag.\n"); //stop scallywags from inserting stupid numbers
        return 1;
    }
    struct country us;
    us.budget = 916000000000.0;
    us.name = "United States Armed Forces";
    count++;
    struct country pla;
    pla.budget = 296000000000.0;
    pla.name = "Chinese PLA";
    count++;
    struct country rus;
    rus.budget = 109600000000.0;
    rus.name = "Armed forces of the Russian Federation";
    count++;
    struct country ind;
    ind.budget = 83600000000.0;
    ind.name = "Indian Armed Forces";
    count++;
    struct country sdi;
    sdi.budget = 75800000000.0;
    sdi.name = "Saudi Arabian Armed Forces";
    count++;
    struct country uk;
    uk.budget = 74900000000.0;
    uk.name = "British Armed Forces";
    count++;
    struct country array[] = {us,pla,rus,ind,sdi,uk};
    for (int i = 0; i < count; i++)
    {
        //printf(moneyformatter(damoneyindabag));
        name = array[i].name;
        double dadailyBudget = array[i].budget / 365; //how many days inside 1 budget
        double moneyammount = damoneyindabag / dadailyBudget; //how many days do dat last
        if (moneyammount < 1.0 / (24 * 3600)) { // if it is less than a millisecond
            printf("You could run the %s for %.2f milliseconds\n", name,moneyammount * 24 * 3600 * 1000); // put dat into miliseconds
        } else if (moneyammount > 365.0){
            printf("You could run the %s for %.2f years\n", name,moneyammount/365); //dang u super broke
        } else {
            printf("You could run the %s for %.2f days\n", name,moneyammount); // whoa
        }
    }

    return 0;
}

char* moneyformatter(int money) {
    return money; //imma do this fr but later
}