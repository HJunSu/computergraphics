//#include <GL/glut.h>
//
//double LR = 0; //���ʿ����� �����̴� ����
//double UD = 0; //���Ʒ� �����̴� ����
//double r = 0.5, g = 0.5, b = 0.5; //�� ���� ���� rgb
//
//void MyInit() {
//	glClearColor(1.0, 1.0, 1.0, 1.0);
//	glMatrixMode(GL_PROJECTION);
//	glLoadIdentity();
//	glOrtho(-1.0, 1.0, -1.0, 1.0, -1.0, 1.0);
//}
//void MyDisplay() {
//	glClear(GL_COLOR_BUFFER_BIT);
//	glColor3f(r, g, b); //�� ������ rgb�� ����
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
//	case 'a': LR = LR - 0.1; glutPostRedisplay; break;  //LR�� -0.1���Ͽ� �������� �̵��Ҽ� �ְ��� glutPostRedisplay�� ���� ��ġ �缳��
//	case 'A': LR = LR - 0.1; glutPostRedisplay; break; 
//	case 'f': LR = LR + 0.1; glutPostRedisplay; break;  //LR�� +0.1���Ͽ� ���������� �̵��Ҽ� �ְ��� glutPostRedisplay�� ���� ��ġ �缳��
//	case 'F': LR = LR + 0.1; glutPostRedisplay; break;
//	case 'r': r = 1.0, g = 0.0, b = 0.0; UD = UD + 0.1; glutPostRedisplay; break;  //UD�� +0.1���Ͽ� �������� �̵��Ҽ� �ְ��� glutPostRedisplay�� ���� ��ġ �缳��
//	case 'R': r = 1.0, g = 0.0, b = 0.0; UD = UD + 0.1; glutPostRedisplay; break;  //r g b ������ �������� �°� �����Ͽ� ��ȭ��Ŵ
//	case 'v': UD = UD - 0.1; glutPostRedisplay; break;  //UD�� -0.1���Ͽ� �Ʒ������� �̵��Ҽ� �ְ��� glutPostRedisplay�� ���� ��ġ �缳��
//	case 'V': UD = UD - 0.1; glutPostRedisplay; break;
//	case 'b': r = 0.0, g = 0.0, b = 1.0; break;  // r g b ������ �Ķ����� �°� �����Ͽ� ��ȭ��Ŵ
//	case 'B': r = 0.0, g = 0.0, b = 1.0; break;
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
//int main(int argc, char** argv) {
//	glutInit(&argc, argv);
//	glutInitDisplayMode(GLUT_RGB);
//	glutInitWindowSize(300, 300);
//	glutInitWindowPosition(0, 0);
//	glutCreateWindow("Keyboard Callback");
//	MyInit();
//	glutDisplayFunc(MyDisplay);
//	glutKeyboardFunc(MyKeyboard);
//	glutSpecialFunc(MySpecial);
//	glutMainLoop();
//	return 0;
//}