#include <GL/freeglut.h>

GLvoid drawScene(GLvoid);
GLvoid Reshape(int w, int h);

void main(int argc, char** argv) // 윈도우 출력하고 출력함수 설정
{
// 초기화 함수들
glutInit(&argc, argv); // glut 초기화
glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA); // 디스플레이 모드 설정
glutInitWindowPosition(100, 100); // 윈도우의 위치 지정
glutInitWindowSize(250, 250); // 윈도우의 크기 지정
glutCreateWindow("Example1"); // 윈도우 생성 (윈도우 이름)
glutDisplayFunc(drawScene); // 출력 함수의 지정
glutReshapeFunc(Reshape); // 다시 그리기 함수 지정
glutMainLoop(); // 이벤트 처리 시작
}

GLvoid drawScene() // 출력 함수
{
	glClearColor(0.0f, 0.0f, 1.0f, 1.0f); // 바탕색을 'blue' 로 지정
	glClear(GL_COLOR_BUFFER_BIT); // 설정된 색으로 전체를 칠하기
	glFlush(); // 화면에 출력하기
}
GLvoid Reshape(int w, int h) // 다시 그리기 함수
{
	glViewport(0, 0, w, h);
}