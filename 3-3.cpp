
//#include <GL/glut.h>
//
//double LR = 0; //���ʿ����� �����̴� ����
//double UD = 0; //���Ʒ� �����̴� ����
//int state = 0; //���¿� �μ�
//
//void MyInit() {
//	glClearColor(1.0, 1.0, 1.0, 1.0);
//	glMatrixMode(GL_PROJECTION);
//	glLoadIdentity();
//	glOrtho(-1.0, 1.0, -1.0, 1.0, -1.0, 1.0);
//}
//void MyDisplay() {
//	glClear(GL_COLOR_BUFFER_BIT);
//	glColor3f(0.5, 0.5, 0.5);
//	glBegin(GL_POLYGON);
//	glVertex3f(-0.5 + LR, -0.5+UD, 0.0); //x�� ��ǥ�� LR�� �߰��Ͽ� ��ġ�� ��ȭ��Ŵ
//	glVertex3f(0.5 + LR, -0.5 + UD, 0.0); //y�� ��ǥ�� UD�� �߰��Ͽ� ��ġ�� ��ȭ��Ŵ
//	glVertex3f(0.5 + LR, 0.5 + UD, 0.0);
//	glVertex3f(-0.5 + LR, 0.5 + UD, 0.0);
//	glEnd();
//	glFlush();
//}
//void MyKeyboard(unsigned char key, int x, int y) {
//	switch (key) {
//	case 'Q': exit(0); break;
//	case 'q': exit(0); break;
//	case 27: exit(0); break;
//	}
//	glutPostRedisplay();
//}
//void MySpecial(int key, int x, int y) {
//	switch (key) {
//	case GLUT_KEY_F1:
//		break;
//	case GLUT_KEY_LEFT:
//		break;
//	default:
//		break;
//	}
//}
//
//void MyTimer(int value) {
//	if (state == 1)
//		LR = LR + 0.1;
//	if (LR > 0.5) //���� �ε����� ���� ���߰���
//		LR = 0.5;
//	glutPostRedisplay();
//	glutTimerFunc(40, MyTimer, 1);
//}
//void MyMouseClick(GLint Button, GLint State, GLint X, GLint Y) {
//	if (Button == GLUT_LEFT_BUTTON && State == GLUT_DOWN) {//���� ��ư�� ������ ��
//		state = 1;		
//		glutTimerFunc(40, MyTimer, 1);
//	}
//	else if (Button == GLUT_RIGHT_BUTTON && State == GLUT_DOWN) {//������ ��ư�� ������ ��
//		state = 0;
//		glutTimerFunc(40, MyTimer, 1);
//	}
//}
//
//
//int main(int argc, char** argv) {
//	glutInit(&argc, argv);
//	glutInitDisplayMode(GLUT_RGB);
//	glutInitWindowSize(300, 300);
//	glutInitWindowPosition(0, 0);
//	glutCreateWindow("Mouse Callback");
//	MyInit();
//	glutDisplayFunc(MyDisplay);
//	glutKeyboardFunc(MyKeyboard);
//	glutSpecialFunc(MySpecial);
//	glutMouseFunc(MyMouseClick);
//	glutMainLoop();
//	return 0;
//}