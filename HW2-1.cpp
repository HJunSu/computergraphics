/***********************************************************************/
/*                           HW#2-1 : GL Modeling                      */
/*  �ۼ��� : 2109038081_Ȳ�ؼ�              ��¥ : 2022�� 9�� 27��     */
/*                                                                     */
/* ���� ���� : 9�� 27�� �ǽ����뿡 �ִ� 2D Primitive ���� ������       */
/* ��� : 2D Primitive ����                                            */
/*                                                                     */
/***********************************************************************/

//1 Points
#include <GL/glut.h>
void MyDisplay() {
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0.5, 0.4, 0.3); // ���� ����
	glBegin(GL_POINTS);
	glVertex3f(0.0, 0.8, 0.0); glVertex3f(-0.8, 0.4, 0.0);//�� ���� VO���� ����
	glVertex3f(-0.8, -0.4, 0.0); glVertex3f(0.0, -0.8, 0.0);
	glVertex3f(0.8, -0.4, 0.0); glVertex3f(0.8, 0.4, 0.0);
	glEnd();
	glFlush();
}
int main() {
	glutCreateWindow("POINTS");
	glutDisplayFunc(MyDisplay);
	glutMainLoop();
	return 0;
}


//2 LINES
#include <GL/glut.h>
void MyDisplay() {
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0.5, 0.4, 0.3);
	glBegin(GL_LINES);
	glVertex3f(0.0, 0.8, 0.0); glVertex3f(-0.8, 0.4, 0.0);
	glVertex3f(-0.8, -0.4, 0.0); glVertex3f(0.0, -0.8, 0.0);
	glVertex3f(0.8, -0.4, 0.0); glVertex3f(0.8, 0.4, 0.0);
	glEnd();
	glFlush();
}
int main() {
	glutCreateWindow("LINES");
	glutDisplayFunc(MyDisplay);
	glutMainLoop();
	return 0;
}


//3 LINE_STRIP
#include <GL/glut.h>
void MyDisplay() {
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0.5, 0.4, 0.3);
	glBegin(GL_LINE_STRIP);
	glVertex3f(0.0, 0.8, 0.0); glVertex3f(-0.8, 0.4, 0.0);
	glVertex3f(-0.8, -0.4, 0.0); glVertex3f(0.0, -0.8, 0.0);
	glVertex3f(0.8, -0.4, 0.0); glVertex3f(0.8, 0.4, 0.0);
	glEnd();
	glFlush();
}
int main() {
	glutCreateWindow("LINE_STRIP");
	glutDisplayFunc(MyDisplay);
	glutMainLoop();
	return 0;
}

//4 LINE_LOOP
#include <GL/glut.h>
void MyDisplay() {
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0.5, 0.4, 0.3);
	glBegin(GL_LINE_LOOP);
	glVertex3f(0.0, 0.8, 0.0); glVertex3f(-0.8, 0.4, 0.0);
	glVertex3f(-0.8, -0.4, 0.0); glVertex3f(0.0, -0.8, 0.0);
	glVertex3f(0.8, -0.4, 0.0); glVertex3f(0.8, 0.4, 0.0);
	glEnd();
	glFlush();
}
int main() {
	glutCreateWindow("LINE_LOOP");
	glutDisplayFunc(MyDisplay);
	glutMainLoop();
	return 0;
}

//5 POLYGON
#include <GL/glut.h>
void MyDisplay() {
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0.5, 0.4, 0.3);
	glBegin(GL_POLYGON);
	glVertex3f(0.0, 0.8, 0.0); glVertex3f(-0.8, 0.4, 0.0);
	glVertex3f(-0.8, -0.4, 0.0); glVertex3f(0.0, -0.8, 0.0);
	glVertex3f(0.8, -0.4, 0.0); glVertex3f(0.8, 0.4, 0.0);
	glEnd();
	glFlush();
}
int main() {
	glutCreateWindow("POLYGON");
	glutDisplayFunc(MyDisplay);
	glutMainLoop();
	return 0;
}

//6 TRIANGLES
#include <GL/glut.h>
void MyDisplay() {
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0.5, 0.4, 0.3);
	glBegin(GL_TRIANGLES);
	glVertex3f(0.0, 0.8, 0.0); glVertex3f(-0.8, 0.4, 0.0);
	glVertex3f(-0.8, -0.4, 0.0); glVertex3f(0.0, -0.8, 0.0);
	glVertex3f(0.8, -0.4, 0.0); glVertex3f(0.8, 0.4, 0.0);
	glEnd();
	glFlush();
}
int main() {
	glutCreateWindow("TRIANGLES");
	glutDisplayFunc(MyDisplay);
	glutMainLoop();
	return 0;
}

//7 TRIANGLE_STRIP
#include <GL/glut.h>
void MyDisplay() {
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0.5, 0.4, 0.3);
	glBegin(GL_TRIANGLE_STRIP);
	glVertex3f(0.8, -0.4, 0.0); glVertex3f(0.5, 0.4, 0.0);
	glVertex3f(0.2, -0.2, 0.0); glVertex3f(-0.1, 0.3, 0.0);
	glVertex3f(-0.4, -0.3, 0.0); glVertex3f(-0.6, 0.2, 0.0);
	glVertex3f(-0.8, -0.4, 0.0);
	glEnd();
	glFlush();
}
int main() {
	glutCreateWindow("TRIANGLE_STRIP");
	glutDisplayFunc(MyDisplay);
	glutMainLoop();
	return 0;
}

//8 TRIANGLE_FAN
#include <GL/glut.h>
void MyDisplay() {
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0.5, 0.4, 0.3);
	glBegin(GL_TRIANGLE_FAN);
	glVertex3f(-0.7, -0.6, 0.0); glVertex3f(0.8, -0.4, 0.0);
	glVertex3f(0.5, 0.1, 0.0); glVertex3f(0.2, 0.3, 0.0);
	glVertex3f(-0.1, 0.6, 0.0); glVertex3f(-0.5, 0.8, 0.0);
	glEnd();
	glFlush();
}
int main() {
	glutCreateWindow("TRIANGLE_FAN");
	glutDisplayFunc(MyDisplay);
	glutMainLoop();
	return 0;
}

//9 QUADS
#include <GL/glut.h>
void MyDisplay() {
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0.5, 0.4, 0.3);
	glBegin(GL_QUADS);
	glVertex3f(0.6, -0.6, 0.0); glVertex3f(0.8, -0.1, 0.0);
	glVertex3f(0.0, -0.6, 0.0); glVertex3f(0.4, 0.2, 0.0);
	glVertex3f(-0.2, -0.3, 0.0); glVertex3f(-0.2, 0.4, 0.0);
	glVertex3f(-0.6, -0.1, 0.0); glVertex3f(0.6, 0.4, 0.0);
	glEnd();
	glFlush();
}
int main() {
	glutCreateWindow("QUADS");
	glutDisplayFunc(MyDisplay);
	glutMainLoop();
	return 0;
}

//10 QUAD_STRIP
#include <GL/glut.h>
void MyDisplay() {
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0.5, 0.4, 0.3);
	glBegin(GL_QUAD_STRIP);
	glVertex3f(0.6, -0.6, 0.0); glVertex3f(0.8, -0.1, 0.0);
	glVertex3f(0.0, -0.6, 0.0); glVertex3f(0.4, 0.2, 0.0);
	glVertex3f(-0.2, -0.3, 0.0); glVertex3f(-0.2, 0.4, 0.0);
	glVertex3f(-0.6, -0.1, 0.0); glVertex3f(0.6, 0.4, 0.0);
	glEnd();
	glFlush();
}
int main() {
	glutCreateWindow("QUAD_STRIP");
	glutDisplayFunc(MyDisplay);
	glutMainLoop();
	return 0;
}