#include <GL/glut.h>//�ϥ�GLUT�~��

void display()
{


    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);//�M��
    glBegin(GL_TRIANGLES);

                glColor3f(1.0f, 0.0f, 0.0f);   glVertex2f(0.0f,   1.0f);
                glColor3f(0.0f, 1.0f, 0.0f);   glVertex2f(0.87f,  -0.5f);
                glColor3f(0.0f, 0.0f, 1.0f);   glVertex2f(-0.87f, -0.5f);

    glEnd();

    glColor3f(1,1,0);//���� //(��e�����C�⤣�@�˪��a��)
    glutSolidTeapot(0.3);//��߯���
    glutSwapBuffers();//�洫�⭿��buffers
}

int main(int argc, char *argv[])//�H�e�ڭ̵{���X�|�g int main()
{
    glutInit(&argc, argv);//GULT��l�]�w
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);//��ܼҦ�
    glutCreateWindow("08160520�۶��O"); //(�������W��)


    glutDisplayFunc(display);//�����n��ܪ��[��

    glutMainLoop();//�D�n�j��


}

