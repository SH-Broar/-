#include <GL/freeglut.h>

GLvoid drawScene(GLvoid);
GLvoid Reshape(int w, int h);

void main(int argc, char** argv) // ������ ����ϰ� ����Լ� ����
{
// �ʱ�ȭ �Լ���
glutInit(&argc, argv); // glut �ʱ�ȭ
glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA); // ���÷��� ��� ����
glutInitWindowPosition(100, 100); // �������� ��ġ ����
glutInitWindowSize(250, 250); // �������� ũ�� ����
glutCreateWindow("Example1"); // ������ ���� (������ �̸�)
glutDisplayFunc(drawScene); // ��� �Լ��� ����
glutReshapeFunc(Reshape); // �ٽ� �׸��� �Լ� ����
glutMainLoop(); // �̺�Ʈ ó�� ����
}

GLvoid drawScene() // ��� �Լ�
{
	glClearColor(0.0f, 0.0f, 1.0f, 1.0f); // �������� 'blue' �� ����
	glClear(GL_COLOR_BUFFER_BIT); // ������ ������ ��ü�� ĥ�ϱ�
	glFlush(); // ȭ�鿡 ����ϱ�
}
GLvoid Reshape(int w, int h) // �ٽ� �׸��� �Լ�
{
	glViewport(0, 0, w, h);
}