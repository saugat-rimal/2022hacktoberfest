function checkPalindrome(word) {    
    var l = word.length;
    for (var i = 0; i < l / 2; i++) {
        if (word.charAt(i) !== word.charAt(l - 1 - i)) {
            return false;
        }
    }
    return true;
}

if (checkPalindrome("1122332211")) {
    document.write("The word is a palindrome");
} else {
    document.write("The word is NOT a palindrome");
}
