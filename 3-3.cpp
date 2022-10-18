
//#include <GL/glut.h>
//
//double LR = 0; //왼쪽오른쪽 움직이는 변수
//double UD = 0; //위아래 움직이는 변수
//int state = 0; //상태용 인수
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
//	if (LR > 0.5) //벽에 부딛혔을 때에 멈추게함
//		LR = 0.5;
//	glutPostRedisplay();
//	glutTimerFunc(40, MyTimer, 1);
//}
//void MyMouseClick(GLint Button, GLint State, GLint X, GLint Y) {
//	if (Button == GLUT_LEFT_BUTTON && State == GLUT_DOWN) {//왼쪽 버튼을 눌렀을 때
//		state = 1;		
//		glutTimerFunc(40, MyTimer, 1);
//	}
//	else if (Button == GLUT_RIGHT_BUTTON && State == GLUT_DOWN) {//오른쪽 버튼을 눌렀을 때
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