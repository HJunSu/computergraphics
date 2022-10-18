//#include <GL/glut.h>
//
//double LR = 0; //왼쪽오른쪽 움직이는 변수
//double UD = 0; //위아래 움직이는 변수
//double size = 0; //도형 크기 변수
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
//	glVertex3f(-0.5 + LR - size, -0.5 + UD - size, 0.0); //x축 좌표에 LR을 추가하여 위치를 변화시킴
//	glVertex3f(0.5 + LR + size, -0.5 + UD - size, 0.0); //y축 좌표에 UD를 추가하여 위치를 변화시킴
//	glVertex3f(0.5 + LR + size, 0.5 + UD + size, 0.0); //size를 둠으로써 polygon의 크기 조정
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
//		if(-0.5 + LR - size> -1)//-0.5+LR-size >-1 을하여서 윈도우창을 벗어나지못하게함
//			LR = LR - 0.1; glutPostRedisplay; break;  //LR에 -0.1을하여 왼쪽으로 이동할수 있게함 glutPostRedisplay를 통해 위치 재설정
//	case GLUT_KEY_RIGHT :
//		if(0.5 + LR + size < 1)
//		LR = LR + 0.1; glutPostRedisplay; break;  //LR에 +0.1을하여 오른쪽으로 이동할수 있게함 glutPostRedisplay를 통해 위치 재설정
//	case GLUT_KEY_UP:
//		if(0.5 + UD + size < 1)
//		UD = UD + 0.1; glutPostRedisplay; break;  //UD에 +0.1을하여 윗쪽으로 이동할수 있게함 glutPostRedisplay를 통해 위치 재설정
//	case GLUT_KEY_DOWN:
//		if(-0.5 + UD - size > -1)
//		UD = UD - 0.1; glutPostRedisplay; break;  //UD에 -0.1을하여 아래쪽으로 이동할수 있게함 glutPostRedisplay를 통해 위치 재설정
//	case GLUT_KEY_PAGE_UP:
//		size = size + 0.1; glutPostRedisplay;
//		if (size > 0.5)
//			size = 0.5;
//		else if (size < -0.5)
//			size = -0.5; break; //size에 +0.1을하여 도형이 각 방향으로 0.1씩 증가하게 함
//	case GLUT_KEY_PAGE_DOWN:
//		size = size - 0.1; glutPostRedisplay;
//		if (size > 0.5)
//			size = 0.5;
//		else if (size < -0.5)
//			size = -0.5; break; //size에 -0.1을하여 도형이 각 방향으로 0.1씩 감소하게 함
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