
- In union, all members **share the same memory location**
<p align="center"><img src="https://www.geeksforgeeks.org/wp-content/uploads/Union-in-C.png" width="500"></img></p>

- **Example** :
        
        union test {
            int x, y;
        };

        int main()
        {
            union test t;

            t.x = 2; // t.y also gets value 2
            printf("After making x = 2:\n x = %d, y = %d\n\n",
                t.x, t.y);

            t.y = 10; // t.x is also updated to 10
            printf("After making y = 10:\n x = %d, y = %d\n\n",
                t.x, t.y);
            return 0;
        }

- **Output** :

        After making x = 2:
        x = 2, y = 2

        After making y = 10:
        x = 10, y = 10

- Size of a union is taken according the **size of largest member** in union.
- we can have pointers to unions and can access members using the arrow operator (->)

## Differences : 
<p align="center"><img src="https://media.geeksforgeeks.org/wp-content/uploads/Structure-vs-Union.png" width="1000"></img></p>

