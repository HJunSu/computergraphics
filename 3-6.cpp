//#include <GL/glut.h>
//GLfloat Delta = 0.0; //�̵�
//GLfloat r = 0.0, g = 0.5, b = 0.8; //�� ����
//int a = 0;
//void MyDisplay() {
//	glClear(GL_COLOR_BUFFER_BIT);
//	glBegin(GL_POLYGON);
//	glColor3f(r, g, b);
//	glVertex3f(-1.0 + Delta, -0.5, 0.0);
//	glVertex3f(0.0 + Delta, -0.5, 0.0);
//	glVertex3f(0.0 + Delta, 0.5, 0.0);
//	glVertex3f(-1.0 + Delta, 0.5, 0.0);
//	glEnd();
//	glutSwapBuffers();
//}
//void MyTimer(int value) {
//	switch (a) {
//	case 0:
//		if (Delta > 1.0) //���������� �Ѿ���Ҷ�
//		{
//			Delta = Delta;
//			a = 1;
//			glutPostRedisplay();
//			glutTimerFunc(40, MyTimer, 1);
//			r = 0.8;//�����ʿ� ������ ����ȭ
//			g = 0.5;
//			b = 0.0;
//		}
//		else
//		{
//			Delta = Delta + 0.1;
//			glutPostRedisplay();
//			glutTimerFunc(40, MyTimer, 1); //�ð����ΰ� ȣ��
//		}
//		break;
//	case 1:
//		if (Delta < 0) //�������� �Ѿ���Ҷ�
//		{
//			Delta = Delta;
//			a = 0;
//			glutPostRedisplay();
//			glutTimerFunc(40, MyTimer, 1); //�ð����ΰ� ȣ��
//			r = 0.0; //���ʿ� ������ ����ȭ
//			g = 0.5;
//			b = 0.8;
//		}
//		else
//		{
//			Delta = Delta - 0.1;
//			glutPostRedisplay();
//			glutTimerFunc(40, MyTimer, 1);
//		}
//		break;
//	default:
//		break;
//	}
//	glutPostRedisplay();
//}
//void MyInit() {
//	glClearColor(1.0, 1.0, 1.0, 1.0);
//	glMatrixMode(GL_PROJECTION);
//	glLoadIdentity();
//	glOrtho(-1.0, 1.0, -1.0, 1.0, 1.0, -1.0);
//}
//void MyMouseClick(GLint Button, GLint State, GLint X, GLint Y) {
//
//	    if (Button == GLUT_LEFT_BUTTON) {
//	        a = -1;
//	    }
//
//}
//int main(int argc, char** argv) {
//	glutInit(&argc, argv);
//	glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE);
//	glutInitWindowSize(300, 300);
//	glutInitWindowPosition(0, 0);
//	glutCreateWindow("Timer Callback");
//	MyInit();
//	glutDisplayFunc(MyDisplay);
//	glutMouseFunc(MyMouseClick);
//	glutTimerFunc(40, MyTimer, 1);
//	
//	glutMainLoop();
//	return 0;
//}