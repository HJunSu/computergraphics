//#include <GL/glut.h>
//GLfloat LR = 0.0; GLfloat UD = 0.0; //LR UD ���� ����
//
//void MyDisplay() {
//	glClear(GL_COLOR_BUFFER_BIT);
//	glBegin(GL_POLYGON);
//	glColor3f(0.0, 0.5, 0.8);
//	glVertex3f(-1.0 + LR, -0.5 + UD, 0.0);
//	glVertex3f(0.0 + LR, -0.5 + UD, 0.0);
//	glVertex3f(0.0 + LR, 0.5 + UD, 0.0);
//	glVertex3f(-1.0 + LR, 0.5 + UD, 0.0);
//	glEnd();
//	glutSwapBuffers();
//}
//void MyIdleL() { //IDEL ���
//	if (-1 + LR > -1) //������â�� ����� �ʰ���
//		LR = LR - 0.1;
//	glutPostRedisplay();
//}
//void MyIdleR() {
//	if (0 + LR < 1)
//		LR = LR + 0.1;
//	glutPostRedisplay();
//}
//void MyIdleU() {
//	if (0.5 + UD < 1)
//		UD = UD + 0.1;
//	glutPostRedisplay();
//}
//void MyIdleD() {
//	if (-0.5 + UD  > -1)
//		UD = UD - 0.1;
//	glutPostRedisplay();
//}
//void MyInit() {
//	glClearColor(1.0, 1.0, 1.0, 1.0);
//	glMatrixMode(GL_PROJECTION);
//	glLoadIdentity();
//	glOrtho(-1.0, 1.0, -1.0, 1.0, 1.0, -1.0);
//}
//void MySpecial(int key, int x, int y) {
//	switch (key) {
//	case GLUT_KEY_LEFT: 
//		glutIdleFunc(MyIdleL);
//		break;  //LR�� -0.1���Ͽ� �������� �̵��Ҽ� �ְ��� glutPostRedisplay�� ���� ��ġ �缳��
//	case GLUT_KEY_RIGHT :
//		glutIdleFunc(MyIdleR);
//		break;  //LR�� +0.1���Ͽ� ���������� �̵��Ҽ� �ְ��� glutPostRedisplay�� ���� ��ġ �缳��
//	case GLUT_KEY_UP:
//		glutIdleFunc(MyIdleU);
//		 break;  //UD�� +0.1���Ͽ� �������� �̵��Ҽ� �ְ��� glutPostRedisplay�� ���� ��ġ �缳��
//	case GLUT_KEY_DOWN:
//		glutIdleFunc(MyIdleD);
//		break;  //UD�� -0.1���Ͽ� �Ʒ������� �̵��Ҽ� �ְ��� glutPostRedisplay�� ���� ��ġ �缳��
//	default:
//		break;
//	}
//	glutPostRedisplay();
//}
//
//int main(int argc, char** argv) {
//	glutInit(&argc, argv);
//	glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE);
//	glutInitWindowSize(300, 300);
//	glutInitWindowPosition(0, 0);
//	glutCreateWindow("Idle Callback");
//	MyInit();
//	glutDisplayFunc(MyDisplay);
//	glutSpecialFunc(MySpecial);
//	glutMainLoop();
//	return 0;
//}