# getting started
## introduction to cp
- i couldnt do the basketball one on one question cuz i didnt know how to print just the second to last character of the input, even though i knew the logic
## input and output
- weird algorithm was pretty easy 
- for the fencepainting you gotta use file i/o
```cpp
#include <cstdio> // Required for freopen

    freopen("paint.in", "r", stdin);
    freopen("paint.out", "w", stdout);
```
- thatll redirect standard io into files
- pretty straightforward with the math

- apparently you can also do this with boolean arrays: 

> Create the Fence: You make an array of 100 booleans (true or false). Each slot in the array represents one 1-unit segment of the fence. You start by setting them all to false (unpainted).

> Farmer John Paints: You use a for loop to go from a to b - 1. For every number in that range, you change that index in the array to true.

> Bessie Paints: You use another for loop to go from c to d - 1. You set those indices to true. (Notice that if a segment was already painted true by John, Bessie painting it true again doesn't change anything—which perfectly handles the overlap!)

> Count the Paint: You loop through the entire array from 0 to 100. Every time you see a true, you add 1 to a total counter.

- holy shit that sounds much easier than the math and if/else's i had to come up with

```cpp

    // 1. Create the fence. 
    // This creates an array of 100 booleans, from 1 to 100, all initialized to 'false'
    bool painted[100] = {false};

    // 2. Farmer John paints from a to b
    // Notice it is "i < b", meaning if b is 5, it stops at 4.

    // wait what the fuck is a for loop?
    // anatomy: for ({value}; {statement}; {action to reach statement})
    // firstly, it initiates a variable {value}
    // it runs this loop until the statement {statement} becomes true (the statement usually involves the value it created)
    // the {action} is something that is ran every time the loop cycles (here ++i just means i = i+1)

    for (int i = a; i < b; ++i) { 
        painted[i] = true;
    }

    // 3. Bessie paints from c to d
    for (int i = c; i < d; ++i) {
        painted[i] = true;
    }

    // 4. Count up all the true values
    int total_painted = 0;
    for (int i = 0; i < 100; ++i) { // this loops every boolean from 1 to 100 to check if its true or not
                                    // if its true then total_painted gets a value, if not then its skipped and loop is continued
        if (painted[i] == true) {
            total_painted++; 
        }
    }

    // Print the final count
    std::cout << total_painted << std::endl;

```
- heres the solution they gave
```cpp
#include <iostream>
#include <vector>
using namespace std;

int main() {
	// Use standard input to read from "paint.in"
	freopen("paint.in", "r", stdin);
	// Use standard output to write to "paint.out"
	freopen("paint.out", "w", stdout);

	vector<bool> cover(100); // a vector is the same thing as an array, automatically fills 100 slots with false or 0
                             // bool is the type of data is creating an array of 100 of
	int a, b, c, d; 
	cin >> a >> b >> c >> d;
	for (int i = a; i < b; i++) { cover[i] = true; }
	for (int i = c; i < d; i++) { cover[i] = true; }

	int ans = 0;
	for (int i = 0; i < cover.size(); i++) { ans += cover[i]; } // ans += cover[i]; is just ans = ans + cover[i]; and cover[i] is either 1 or 0
    // cover.size() gives how many are filled in the array it created earlier
	cout << ans << endl;
}
```

- it has recommended me to start with a bunch of smaller shorter problems before heading to usaco bronze.

