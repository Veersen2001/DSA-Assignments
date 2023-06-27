/*First Unique Character in a String

Given a string s, find the first non-repeating character in it and return its index. If it does not exist, return -1. */

let  s = "loveleetcode";
let string = s.toLowerCase();
 for(let i of string){
        if(string.lastIndexOf(i) == string.indexOf(i)){
            return s.indexOf(i);
        }
    }
    return -1;

    // lastIndex used for searching