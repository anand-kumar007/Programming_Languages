package _6_access_package;


import java.util.regex.Matcher;
import java.util.regex.Pattern;

public class Regx {
    public static void main(String[] args) {

        // Pattern class is used to define a pattern

        Pattern p1 = Pattern.compile("samwilSon", Pattern.CASE_INSENSITIVE);
        
        
        // Matcher class is used to search for patter
        Matcher m1 = p1.matcher("SamWILSON lives in florida!");
        
        
        boolean matchFound = m1.find();
        
        if (matchFound) {
            System.out.println("Match found");
        } else {
            System.out.println("Match not found");
        }


        // ------------------------------------------

        String s2 = "[a-z]+"; //pattern
        String str = "This is so cool!";

        Pattern p2 = Pattern.compile(s2);
        Matcher m2 = p2.matcher(str);

        // boolean ans = m2.find();

        // if(ans)
        // {
        //     System.out.println("found!!");
        // }
        // else 
        // {
        //     System.out.println("not found !!");
        // }

        while(m2.find())
        {
            System.out.println(str.substring(m2.start(), m2.end()));
        }

        // ---------------------------

        // find the "is" as separate word from the specified string
        String pattern1 = "\\bis\\b";

        String str2 = "This is good. His sense of humor is awesome";
        Pattern p3 = Pattern.compile(pattern1);

        Matcher m3 = p3.matcher(str2);

        while(m3.find())
        {
            System.out.println(str2.substring(m3.start(), m3.end()));
        }
    }
}

/* 


Match found
his 
is  
so  
cool

*/

/* 

1.
First, the pattern is created using the Pattern.compile() method. 
The first parameter indicates which pattern is being searched for 
and the second parameter has a flag to indicates that the search 
should be case-insensitive. The second parameter is optional.

2.
The matcher() method is used to search for the pattern 
in a string. It returns a Matcher object which 
contains information about the search that was performed.


and other things like other programming language syntax are applicable

[abc]
[^abc]

quantifiers : how often a charcater etc can occur

* --> any number of time
+ --> one or more time
{x} --> x times exactly
{x,y} --> btwn x and y 
? --> just one or not exists

etc



*/


/* 

java.util.regx package of java is

used for pattern matching with the regular expression 


Java does not have a built-in Regular Expression class, but we can import the java.util.regex package to work with regular expressions. The package includes the following classes:

1. Pattern Class - Defines a pattern (to be used in a search)

2. Matcher Class - Used to search for the pattern

3. PatternSyntaxException Class - Indicates syntax error in a regular expression pattern



*/