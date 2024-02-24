#include <stdio.h>

int main() {
    int numNames, i;
    char firstName[101], lastName[101];

    // Read the total number of names
    scanf("%d", &numNames);

    // Process each index card
    for (i = 0; i < numNames; i++) {
        // Read first and last names
        scanf("%s %s", firstName, lastName);

        // Display the reversed name
        printf("%s %s\n", lastName, firstName);
    }

    return 0;
}
