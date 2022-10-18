//#include <GL/glut.h>
//GLfloat LR = 0.0; GLfloat UD = 0.0; //LR UD 변수 설정
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
//void MyIdleL() { //IDEL 등록
//	if (-1 + LR > -1) //윈도우창을 벗어나지 않게함
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
//		break;  //LR에 -0.1을하여 왼쪽으로 이동할수 있게함 glutPostRedisplay를 통해 위치 재설정
//	case GLUT_KEY_RIGHT :
//		glutIdleFunc(MyIdleR);
//		break;  //LR에 +0.1을하여 오른쪽으로 이동할수 있게함 glutPostRedisplay를 통해 위치 재설정
//	case GLUT_KEY_UP:
//		glutIdleFunc(MyIdleU);
//		 break;  //UD에 +0.1을하여 윗쪽으로 이동할수 있게함 glutPostRedisplay를 통해 위치 재설정
//	case GLUT_KEY_DOWN:
//		glutIdleFunc(MyIdleD);
//		break;  //UD에 -0.1을하여 아래쪽으로 이동할수 있게함 glutPostRedisplay를 통해 위치 재설정
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