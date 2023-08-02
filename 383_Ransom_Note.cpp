class Solution {
public:
   bool canConstruct(string ransomNote, string magazine) {
      unordered_map<char, int> magazine_chars;

      // Count the occurrences of each character in the magazine
      for (char ch : magazine) {
         magazine_chars[ch]++;
      }

      // Check if we can construct the ransomNote from the magazine
      for (char ch : ransomNote) {
         // If the character ch is not found in magazine_chars or its count is 0,
         // it is not possible to construct the ransomNote from the magazine
         if (magazine_chars.find(ch) == magazine_chars.end() || magazine_chars[ch] == 0) {
            return false;
         }
         // Decrease the count of character ch in magazine_chars to mark its usage
         magazine_chars[ch]--;
      }

      // If all characters in the ransomNote can be constructed from the magazine, return true
      return true;
   }
};
