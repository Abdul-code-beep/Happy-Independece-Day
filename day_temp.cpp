//Hello everyone I'm Shaik Abdul Rehman(MCA)NIST.
//As we all know 15th Aug is independence day for our Counrty.
//Decided to build C Program for this special day.
//In Every line of code i used some comments for better understanding
#include<stdio.h>


int main() {
	
    //at first printing "HAPPY"
    
    
    for (int i = 0; i < 5; i++) {
        //Print "H"
        for (int j = 0; j < 5; j++) {
        if (j == 0 || j == 4 || (i == 2 && j > 0 && j < 4))
                printf("*");
        else
                printf(" ");
        }
        printf("  ");
        
        
        // Print "A"
        for (int j = 0; j < 5; j++) {
        if ((j == 0 || j == 4) && i != 0 || (i == 0 || i == 2) && j > 0 && j < 4)
                printf("*");
        else
                printf(" ");
        }
        printf("  ");
        
        
        // Print "P"
        for (int j = 0; j < 5; j++) {
        if (j == 0 || (j == 4 && i < 3) || (i == 0 || i == 2) && j < 4)
                printf("*");
        else
                printf(" ");
        }
        printf("  ");
        
        // Print "P" again
        for (int j = 0; j < 5; j++) {
        if (j == 0 || (j == 4 && i < 3) || (i == 0 || i == 2) && j < 4)
                printf("*");
        else
                printf(" ");
        }
        printf("  ");
        
        
        // Print "Y"
        for (int j = 0; j < 5; j++) {
        if ((j == 0 && i < 3) || (j == 4 && i < 3) || (i >= 2 && j == 2))
                printf("*");
        else
                printf(" ");
        }
        printf("\n");
    }
    
    
    // Printing "INDEPENDENCE"
    printf("\n");
    
    for (int i = 0; i < 5; i++) {  
        // Print "I"
        for (int j = 0; j < 5; j++) {
            if (j == 2 || i == 0 || i == 4)
                printf("*");
            else
                printf(" ");
        }
        printf("  ");
        
        // Print "N"
        for (int j = 0; j < 5; j++) {
            if (j == 0 || j == 4 || i == j)
                printf("*");
            else
                printf(" ");
        }
        printf("  ");
        
        // Print "D"
        for (int j = 0; j < 5; j++) {
            if (j == 0 || (j == 4 && i != 0 && i != 4) || (i == 0 || i == 4) && j < 4)
                printf("*");
            else
                printf(" ");
        }
        printf("  ");
        
        // Print "E"
        for (int j = 0; j < 5; j++) {
            if (j == 0 || i == 0 || i == 2 || i == 4)
                printf("*");
            else
                printf(" ");
        }
        printf("  ");
        
        // Print "P"
        for (int j = 0; j < 5; j++) {
            if (j == 0 || (j == 4 && i < 2) || (i == 0 || i == 2) && j < 4)
                printf("*");
            else
                printf(" ");
        }
        printf("  ");
        
        // Print "E"
        for (int j = 0; j < 5; j++) {
            if (j == 0 || i == 0 || i == 2 || i == 4)
                printf("*");
            else
                printf(" ");
        }
        printf("  ");
        
        // Print "N"
        for (int j = 0; j < 5; j++) {
            if (j == 0 || j == 4 || i == j)
                printf("*");
            else
                printf(" ");
        }
        printf("  ");
        
        // Print "D"
        for (int j = 0; j < 5; j++) {
            if (j == 0 || (j == 4 && i != 0 && i != 4) || (i == 0 || i == 4) && j < 4)
                printf("*");
            else
                printf(" ");
        }
        printf("  ");
        
        // Print "E"
        for (int j = 0; j < 5; j++) {
            if (j == 0 || i == 0 || i == 2 || i == 4)
                printf("*");
            else
                printf(" ");
        }
        printf("  ");
        
        // Print "N"
        for (int j = 0; j < 5; j++) {
            if (j == 0 || j == 4 || i == j)
                printf("*");
            else
                printf(" ");
        }
        printf("  ");
        
        // Print "C"
        for (int j = 0; j < 5; j++) {
            if (j == 0 || (i == 0 && j < 4) || (i == 4 && j < 4))
                printf("*");
            else
                printf(" ");
        }
        printf("  ");
        
        // Print "E"
        for (int j = 0; j < 5; j++) {
            if (j == 0 || i == 0 || i == 2 || i == 4)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    
    printf("\n");
    
    // Printing "DAY"
    for (int i = 0; i < 5; i++) {  
        // Print "D"
        for (int j = 0; j < 5; j++) {
            if (j == 0 || (j == 4 && i != 0 && i != 4) || (i == 0 || i == 4) && j < 4)
                printf("*");
            else
                printf(" ");
        }
        printf("  ");
        
        // Print "A"
        for (int j = 0; j < 5; j++) {
            if (j == 0 || j == 4 || i == 0 || i == 2)
                printf("*");
            else
                printf(" ");
        }
        printf("  ");
        
        // Print "Y"
        for (int j = 0; j < 5; j++) {
            if (j == 2 || (i == 0 && j != 2) || (i == 2 && j == 1) || (i == 2 && j == 3))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}

