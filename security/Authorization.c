#include <stdio.h>
#include <string.h>

#define SET_MAX_USERNAME_LENGTH 50                                  //initialize space for sign up time
#define SET_MAX_PASSWORD_LENGTH 50                                  //username & password

#define CURRENT_MAX_USERNAME_LENGTH 50                              //initialize space for login time  
#define CURRENT_MAX_PASSWORD_LENGTH 50                              //username & password

int main() {         
    printf("User Identification and Authentication System\n");
    printf("Sign Up\n");                                                          //here saving sign up details
    char set_username[SET_MAX_USERNAME_LENGTH];    
    char set_password[SET_MAX_PASSWORD_LENGTH];
   
    printf("Enter username: ");
    scanf("%s", set_username);

    printf("Enter password: ");
    scanf("%s", set_password);

    printf("Your username & password has been set successfully\n");        

    printf("Log In\n");                                                           //here saving login details
    char current_username[CURRENT_MAX_USERNAME_LENGTH];
    char current_password[CURRENT_MAX_PASSWORD_LENGTH];

    printf("Enter username: ");
    scanf("%s", current_username);

    printf("Enter password: ");
    scanf("%s", current_password);

    if (strcmp(set_username, current_username) == 0 && strcmp(set_password,current_password) == 0){      // comparing details
       printf("Access Granted! Login Successful");
    }
    else{
        printf("Access Denied! Please try again \n");
    }
}
