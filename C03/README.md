1. ft_strcmp(char *s1, char *s2)
    매개변수로 들어온 두개의 문자열을 비교하여 문자열이 완전히 같다면 0을 반환하고, 다르면 음수 혹은 양수를 반환하는 함수
    각 문자의 아스키 코드 값에 의해서 정하는 함수
    
    * 같을 경우 return 0
    * s1 > s2 return +
    * s1 < s2 return -

2. ft_strncmp 의 경우, 위의 함수와 똑같이 동작하나 unsigned int 사이즈를 정해서 그 사이즈 범위 내의 값을 비교

3. ft_strcat(char *dest, char *src)
    src의 문자를 dest의 문자열 끝에 있는 '\0'에서 부터 붙여넣는다.
    마지막에 붙여 넣은 문자열 끝에만 '\0'가 붙는다.

4. ft_strncat(char *dest, char *src, unsigned int n)
    src에서 n 사이즈의 문자를 잘라서 dest 문자열 끝에 붙여넣는다.

5. ft_strstr(char *str, char *to_find)
    문자열에 특정 문자열이 포함되어있는지 확인
    문자열 위치에 대한 포인터 객체를 리턴
    찾는 값이 없는 경우, null 값 리턴

6. ft_strlcat(char *dest, char *src, unsigned int n)
    두 문자열을 붙이는 함수
    dest 사이즈 + src 사이즈 + null 값의 길이 == n
    리턴 값은 dest와 src의 길이
