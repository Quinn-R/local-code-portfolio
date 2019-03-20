class question8 {
    public static void main(String[] args) {
        char list[] = {'j','t','B','#'};
        int pos = findChar(list);
        System.out.println(list[pos] + ":" + pos);
    }
    public static int findChar(char [] list) {
        int answer = 0;

        for(int i = 0; i < list.length; i++) {
            if( !((list[i] >= 65 && list[i] <= 90) || (list[i] >= 97 && list[i] <= 122))) {
                answer = i;
                return answer;
            }
        }

        return answer;
    }
}