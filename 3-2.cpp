//#include <GL/glut.h>
//
//double LR = 0; //���ʿ����� �����̴� ����
//double UD = 0; //���Ʒ� �����̴� ����
//double size = 0; //���� ũ�� ����
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
//	glVertex3f(-0.5 + LR - size, -0.5 + UD - size, 0.0); //x�� ��ǥ�� LR�� �߰��Ͽ� ��ġ�� ��ȭ��Ŵ
//	glVertex3f(0.5 + LR + size, -0.5 + UD - size, 0.0); //y�� ��ǥ�� UD�� �߰��Ͽ� ��ġ�� ��ȭ��Ŵ
//	glVertex3f(0.5 + LR + size, 0.5 + UD + size, 0.0); //size�� �����ν� polygon�� ũ�� ����
//	glVertex3f(-0.5 + LR - size, 0.5 + UD + size, 0.0);
//	
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
//		if(-0.5 + LR - size> -1)//-0.5+LR-size >-1 ���Ͽ��� ������â�� ��������ϰ���
//			LR = LR - 0.1; glutPostRedisplay; break;  //LR�� -0.1���Ͽ� �������� �̵��Ҽ� �ְ��� glutPostRedisplay�� ���� ��ġ �缳��
//	case GLUT_KEY_RIGHT :
//		if(0.5 + LR + size < 1)
//		LR = LR + 0.1; glutPostRedisplay; break;  //LR�� +0.1���Ͽ� ���������� �̵��Ҽ� �ְ��� glutPostRedisplay�� ���� ��ġ �缳��
//	case GLUT_KEY_UP:
//		if(0.5 + UD + size < 1)
//		UD = UD + 0.1; glutPostRedisplay; break;  //UD�� +0.1���Ͽ� �������� �̵��Ҽ� �ְ��� glutPostRedisplay�� ���� ��ġ �缳��
//	case GLUT_KEY_DOWN:
//		if(-0.5 + UD - size > -1)
//		UD = UD - 0.1; glutPostRedisplay; break;  //UD�� -0.1���Ͽ� �Ʒ������� �̵��Ҽ� �ְ��� glutPostRedisplay�� ���� ��ġ �缳��
//	case GLUT_KEY_PAGE_UP:
//		size = size + 0.1; glutPostRedisplay;
//		if (size > 0.5)
//			size = 0.5;
//		else if (size < -0.5)
//			size = -0.5; break; //size�� +0.1���Ͽ� ������ �� �������� 0.1�� �����ϰ� ��
//	case GLUT_KEY_PAGE_DOWN:
//		size = size - 0.1; glutPostRedisplay;
//		if (size > 0.5)
//			size = 0.5;
//		else if (size < -0.5)
//			size = -0.5; break; //size�� -0.1���Ͽ� ������ �� �������� 0.1�� �����ϰ� ��
//	default:
//		break;
//	}
//	glutPostRedisplay();
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