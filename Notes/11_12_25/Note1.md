# Data Types and Format Specifier

## Data Types

- They define variables, for each declaration, memory is used for that particular declaration, a binary 1 or 0 take one bit of memory.

- 1K of memory here refers to 1024 Bytes.

- 8 bits = 1 Byte & 4 bits = 1 nibble

- **Integer** : Integer data type has the data in the form of numbers, note that this data type will not accept decimal values since it only takes values from the set of Integers. It is declared using ```int``` keyword, it stores 4 Bytes, they're further signed and unsigned with signed having the option to declare a negative value.

- **Character** : It accepts only alphabetical data and is declared by using the ```char``` keyword. It stores 8 Bytes

- **Float** : It accepts decimal values in addition to normal integers. It is declared by ```float``` keyword. It stores 4 Bytes

- **Double** : Same as integer but can store values bigger than float. It is declared by ```double``` keyword. It stores 8 Bytes

- **void** : Nothing, literally. No space taken as well.

- ASCII - **A**merican **S**tandard **C**ode for **I**nformation **I**nterchange defines the Interchange of letters into a special encoding which allows us to standardize information. For our context, ASCII Value of the character is stored in memory and upon retrieval it is decoded. 

- The keyword ```long``` may be added while declaring an integer, which doubles its storage to 8 Bytes.

|Data Type		|Format Specifier	|Size	|
|:---------------------:|:---------------------:|:-----:|
|Integer(```int```)	|```%d```		|4 Bytes|
|Character(```char```)	|```%c```		|1 Byte	|
|Float(```float```)	|```%f```		|4 Bytes|
|Double(```double```)	|```%lf```		|8 Bytes|
|Void(```void``)	| -			|0	|

# Format Specifiers

Format Specifiers are used to tell the compiler what type of data is being printed. For Example -

```
int a=10
printf("%d", a);
```

This is more like the f-strings in Python except for every type of Data, the f-string type seems to vary.

Similarly for two ints -

```
int a=10, b=20;
printf("%d %d", a, b);
```

The format specifier is also used as an escape character to print the variable's value in between strings.

Format-Specifiers are also used interchangebly for example to source the int value of a character stored in memory.


