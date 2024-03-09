#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function to create and return an SQL query for inserting a new user
char* createInsertQuery(const char* tableName, const char* name, const char* email, int age) {
    // Allocate memory for the query (adjust the size as needed)
    char* query = (char*)malloc(256 * sizeof(char));
    if (query == NULL) {
        perror("Memory allocation failed");
        exit(EXIT_FAILURE);
    }

    // Construct the INSERT INTO query
    snprintf(query, 256, "INSERT INTO %s (name, email, age) VALUES ('%s', '%s', %d);", tableName, name, email, age);

    return query;
}

int main() {
    const char* tableName = "users";
    const char* name = "John Doe";
    const char* email = "john.doe@example.com";
    int age = 30;

    char* insertQuery = createInsertQuery(tableName, name, email, age);
    printf("Generated SQL query:\n%s\n", insertQuery);

    // Remember to free the allocated memory
    free(insertQuery);

    return 0;
}
