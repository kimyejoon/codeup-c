#include <stdio.h>

int main(void)
{
  printf("Hello");
  return 0;
}





/*

[ 간단 해설 ]

위 예제에서 가장 핵심적인 함수는 printf() 이다.
printf() 함수는 인자값을 화면에 콘솔 창에 출력해주는 함수이다.

printf() 함수는 "stdio.h" 라는 헤더 라이브러리 파일 안에 정의되어 있으므로,
코드의 최상단에 "stdio.h" 헤더 라이브러리 파일을 포함할 것을 컴파일러에게 선언한다.

프로그램의 실질적인 동작 부분인 main 함수 내에서는 printf() 함수를 통해 "Hello" 문자열을 출력하고,
0을 반환하며 프로그램을 종료한다.

*/
