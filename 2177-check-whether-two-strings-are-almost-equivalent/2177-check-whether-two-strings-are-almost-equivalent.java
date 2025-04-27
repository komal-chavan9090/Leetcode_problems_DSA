class Solution {
    public boolean checkAlmostEquivalent(String word1, String word2) {
        int[] ans1=new int[26];
        for(int i=0;i<word1.length();i++){
            ans1[word1.charAt(i)-'a']++;
            ans1[word2.charAt(i)-'a']--;
        }
        for(int i=0;i<ans1.length;i++){
            if(Math.abs(ans1[i])>3){
                return false;
            }
        }
        return true;

    }
}