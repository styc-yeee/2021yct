#include <GL/glut.h>//使用GLUT外掛

void display()
{


    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);//清空
    glBegin(GL_TRIANGLES);

                glColor3f(1.0f, 0.0f, 0.0f);   glVertex2f(0.0f,   1.0f);
                glColor3f(0.0f, 1.0f, 0.0f);   glVertex2f(0.87f,  -0.5f);
                glColor3f(0.0f, 0.0f, 1.0f);   glVertex2f(-0.87f, -0.5f);

    glEnd();

    glColor3f(1,1,0);//黃色 //(跟前面改顏色不一樣的地方)
    glutSolidTeapot(0.3);//實心茶壺
    glutSwapBuffers();//交換兩倍的buffers
}

int main(int argc, char *argv[])//以前我們程式碼會寫 int main()
{
    glutInit(&argc, argv);//GULT初始設定
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);//顯示模式
    glutCreateWindow("08160520石雅慈"); //(視窗的名稱)


    glutDisplayFunc(display);//等等要顯示的涵式

    glutMainLoop();//主要迴圈


}

