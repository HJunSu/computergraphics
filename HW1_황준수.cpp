/***********************************************************************/
/*                           HW#1 : 3D Sierpinski Gasket               */
/*  �ۼ��� : 2109038081_Ȳ�ؼ�              ��¥ : 2022�� 9�� 20��     */
/*                                                                     */
/* ���� ���� : 3���� �ǽ��ڵ忡�� glOrtho()�� �����ϰ� gVIewport()��   */
/*             �����Ͽ� 2D Sierpinski Gasket�� 3D Sierpinski Gasket �� */
/*             ��ȯ ���� ���������� ���� �ְ���                        */
/* ��� : 3D Sierpinski Gasket                                         */
/*                                                                     */
/***********************************************************************/

#include <gl/glut.h>
#include <stdlib.h> //rand�Լ��̿�

void MyDisplay() {
	float vertices[4][3] = { { 0.0, 0.0, -100.0 },{ 200.0, 500.0, -100.0},{ 500.0, 100.0, -100.0 }, { 300.0, 0.0, 100.0 } };//�ʱ� ���� ����
	float p[3] = { 0.0 , 0.0 , 0.0 }; // ���� ����Ʈ
	int i, j;
	glClear(GL_COLOR_BUFFER_BIT);


	for (j = 0; j < 100000; j++) {
		i = rand() % 4; //������ �� ����
		// ���� ���õ� ���� ���� ���� �������� ���ο� �� ��ġ ���
		p[0] = (p[0] + vertices[i][0]) / 2.0; //������� ,x ��ǥ
		p[1] = (p[1] + vertices[i][1]) / 2.0; //������� ,y ��ǥ
		p[2] = (p[2] + vertices[i][2]) / 2.0; //������� ,z ��ǥ
		glBegin(GL_POINTS);
			glVertex2fv(p); //���� ��ġ�� ��
		glEnd();
	}

	glFlush(); //�����ִ� ��ɾ �ִٸ� ��� �����Ѵ�.
}

void MyInit() {
	glClearColor(1.0, 1.0, 1.0, 1.0); // ��� ���
	glColor3f(1.0, 0.0, 0.0); // ���� ����������
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(0.0, 500.0, 0.0, 500.0, 100.0, -100.0); //������ȯ ����
}

void MyReshape(int NewWidth, int NewHeight) { //â ������ ����� ��ü ũ�� ����
	glViewport(0, 0, NewWidth, NewHeight);
	GLfloat Widthfactor = (GLfloat)NewWidth / (GLfloat)500; //������ ������ ����
	GLfloat HeightFactor = (GLfloat)NewHeight / (GLfloat)500;
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(0.0 * Widthfactor, 500.0 * Widthfactor, 0.0 * HeightFactor, 500.0 * HeightFactor, 100.0, -100.0);
	//���� ���� ��ȭ�� ���ϱ�

}
void main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(500, 500);
	glutInitWindowPosition(0, 0);
	glutCreateWindow("Sierpinski Gasket");
	glutDisplayFunc(MyDisplay);
	MyInit();
	glutReshapeFunc(MyReshape);
	glutMainLoop();
}

