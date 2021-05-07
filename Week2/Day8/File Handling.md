## 1. Functions in File Operations :

<p align="center"><img src="https://media.geeksforgeeks.org/wp-content/uploads/File-functions.jpg" width="1000"></img></p>

## 2. File opening modes in C :

- **"r"** : opens a file in read mode, points to first character in it
    - If the file cannot be opened fopen( ) returns NULL
- **"w"** - opens or create a text file in write mode
    - If the file exists, its contents are overwritten
    - If the file doesn’t exist, a new file is created
    - Returns NULL, if unable to open file
- **"a"** - opens a file in append mode, points to last character in it
    - If the file doesn’t exist, a new file is created
    - Returns NULL, if unable to open file
- **"r+"** - opens a file in both read and write mode, points to *first char*
- **"a+"** - opens a file in both read and write mode, points to *last char*
- **"w+"** - opens a file in both read and write mode, contents are *overwritten* if file exists

### Examples :

#### Writing into a file : 

    int main( )
    {

        // Declare the file pointer
        FILE *fp ;
        
        // Data to be written in file
        char data[50] = "File data";

        // Open the existing file Test.c in write mode
        fp = fopen("Test.c", "w") ;
        
        // If file opens successfully, write the data into it
        if ( fp != NULL )
        {
            printf("The file is now opened.\n") ;
            
            // Write the data into the file
            if ( strlen ( data ) > 0 )
            {
                // writing in the file using fputs()
                fputs(data, fp) ;
                fputs("\n", fp) ;
            }
            
            // Closing the file
            fclose(fp) ;
            
            printf("Data successfully written in file Test.c\n");
            printf("The file is now closed.") ;
        }
        return 0;		
    }

#### Reading from a file :

    //After opening a file succesfully 
    while( fgets( data, 50, fp ) != NULL )
    {
        // Print the data 
        printf( "%s" , data ) ;
    }

## 3. fseek() :

- used to move file pointer associated with a given file to a specific position
- ***Syntax*** : 

        int fseek(FILE *fp, long int offset, int pos)

    - **fp** − This is the pointer to a FILE object that identifies the stream.

    - **offset** − This is the number of bytes to offset from whence.

    - **pos** − This is the position from where offset is added. It is specified by one of the following constants

- ***returns*** :
    
        zero if successful, or else it returns a non-zero value

### Constants :
1. ***SEEK_END*** : It denotes end of the file
2. ***SEEK_SET*** : It denotes starting of the file
3. ***SEEK_CUR*** : It denotes file pointer’s current position

## 4. ftell() :

- used to find out the **position of file pointer** in the file with respect to starting of the file
- ***Syntax*** :

        long ftell(FILE *pointer)
- ***returns*** :

        current value of the position indicator
        If an error occurs, -1L is returned, and the global variable errno is set to a positive value

## 5. feof() :
- tests the end-of-file indicator for the given stream(fp)
- ***Syntax*** :
        
        int feof(FILE *fp)
- ***returns*** :

        non-zero value when End-of-File indicator associated with the fp is set, else zero is returned
