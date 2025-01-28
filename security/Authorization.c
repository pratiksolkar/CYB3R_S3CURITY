#include <stdio.h>
#include <string.h>

#define SET_MAX_USERNAME_LENGTH 50                                  //initialize space for sign up time
#define SET_MAX_PASSWORD_LENGTH 50                                  //username & password
// char set_username[50];
// char set_password[50];
char set_username[SET_MAX_USERNAME_LENGTH];                         // 01
char set_password[SET_MAX_PASSWORD_LENGTH];                         //saving sign up details

#define CURRENT_MAX_USERNAME_LENGTH 50                              //initialize space for login time  
#define CURRENT_MAX_PASSWORD_LENGTH 50                              //username & password
// char current_username[50];
// char current_password[50];
char current_username[CURRENT_MAX_USERNAME_LENGTH];                 // 02  // declaration of set username
char current_password[CURRENT_MAX_PASSWORD_LENGTH];

void sign () {                                                       // 01
    printf("User Identification and Authentication System\n");
    printf("Sign Up\n");

    printf("Enter username: ");
    scanf("%s", set_username);

    printf("Enter password: ");
    scanf("%s", set_password);

    printf("Your username & password has been set successfully\n"); 
}

void login() {                                                      // 02
    printf("Log In\n");                                                           
   
    printf("Enter username: ");
    scanf("%s", current_username);

    printf("Enter password: ");
    scanf("%s", current_password);
}

int main() {
    
    sign ();   
    login();

    if (strcmp(set_username, current_username) == 0 && strcmp(set_password,current_password) == 0){
       printf("Access Granted! Login Successful");
    }
    else{
        printf("Access Denied! Please try again \n");
        login();
    }      
}
