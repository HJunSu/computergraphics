//#include <GL/glut.h>
//
//double LR = 0; //왼쪽오른쪽 움직이는 변수
//double UD = 0; //위아래 움직이는 변수
//double r = 0.5, g = 0.5, b = 0.5; //색 변수 설정 rgb
//
//void MyInit() {
//	glClearColor(1.0, 1.0, 1.0, 1.0);
//	glMatrixMode(GL_PROJECTION);
//	glLoadIdentity();
//	glOrtho(-1.0, 1.0, -1.0, 1.0, -1.0, 1.0);
//}
//void MyDisplay() {
//	glClear(GL_COLOR_BUFFER_BIT);
//	glColor3f(r, g, b); //색 변수를 rgb로 설정
//	glBegin(GL_POLYGON);
//	glVertex3f(-0.5 + LR, -0.5+UD, 0.0); //x축 좌표에 LR을 추가하여 위치를 변화시킴
//	glVertex3f(0.5 + LR, -0.5 + UD, 0.0); //y축 좌표에 UD를 추가하여 위치를 변화시킴
//	glVertex3f(0.5 + LR, 0.5 + UD, 0.0);
//	glVertex3f(-0.5 + LR, 0.5 + UD, 0.0);
//	glEnd();
//	glFlush();
//}
//void MyKeyboard(unsigned char key, int x, int y) {
//	switch (key) {
//	case 'Q': exit(0); break;
//	case 'q': exit(0); break;
//	case 'a': LR = LR - 0.1; glutPostRedisplay; break;  //LR에 -0.1을하여 왼쪽으로 이동할수 있게함 glutPostRedisplay를 통해 위치 재설정
//	case 'A': LR = LR - 0.1; glutPostRedisplay; break; 
//	case 'f': LR = LR + 0.1; glutPostRedisplay; break;  //LR에 +0.1을하여 오른쪽으로 이동할수 있게함 glutPostRedisplay를 통해 위치 재설정
//	case 'F': LR = LR + 0.1; glutPostRedisplay; break;
//	case 'r': r = 1.0, g = 0.0, b = 0.0; UD = UD + 0.1; glutPostRedisplay; break;  //UD에 +0.1을하여 윗쪽으로 이동할수 있게함 glutPostRedisplay를 통해 위치 재설정
//	case 'R': r = 1.0, g = 0.0, b = 0.0; UD = UD + 0.1; glutPostRedisplay; break;  //r g b 변수를 빨간색에 맞게 설정하여 변화시킴
//	case 'v': UD = UD - 0.1; glutPostRedisplay; break;  //UD에 -0.1을하여 아래쪽으로 이동할수 있게함 glutPostRedisplay를 통해 위치 재설정
//	case 'V': UD = UD - 0.1; glutPostRedisplay; break;
//	case 'b': r = 0.0, g = 0.0, b = 1.0; break;  // r g b 변수를 파랑색에 맞게 설정하여 변화시킴
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