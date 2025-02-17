#include <stdio.h>
#include <string.h>

char already_SET_USERNAME[] = "Student";                                 //pre-defined details
char already_SET_PASSWORD[] = "Student@123";                             //username & password

char username[50];                                                      //initialize space for new
char password[50];                                                      //username & password

int main() {
    
    printf("User Identification and Authentication System\n");
    
    printf("Enter username: ");
    scanf("%s", username);

    printf("Enter password: ");
    scanf("%s", password);

    if (strcmp(username, already_SET_USERNAME) == 0 && strcmp(password, already_SET_PASSWORD) == 0){     //comparing new details 
       printf("Access Granted! Login Successful");                                                       //with pre-defined details
    }
    else{
        printf("Access Denied! Please try again");
    }
}
