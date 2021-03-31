
#include <GL/glut.h>

float a=0;
void hand()
{
     glPushMatrix();
        glScalef(0.5,0.1,0.1);
        glColor3f(0,0,1);
        glutSolidCube(1);
    glPopMatrix();
}
void display()
{


    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glColor3f(1,1,1);
    glutSolidCube(0.5);

    glPushMatrix();
        glTranslatef(0.25,0.25,0);
        glRotatef(a,0,0,1);
        glTranslatef(0.25,0,0);
        hand();
        glPushMatrix();
            glTranslatef(0.25,0,0);
            glRotatef(a,0,0,1);
            glTranslatef(0.25,0,0);
            hand();
        glPopMatrix();
    glPopMatrix();

    glPushMatrix();
        glTranslatef(-0.25,0.25,0);
        glRotatef(-a,0,0,1);
        glTranslatef(-0.25,0,0);
        hand();
        glPushMatrix();
            glTranslatef(-0.25,0,0);
            glRotatef(-a,0,0,1);
            glTranslatef(-0.25,0,0);
            hand();
        glPopMatrix();
    glPopMatrix();

    glutSwapBuffers();
    a++;
}



int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode( GLUT_DOUBLE | GLUT_DEPTH);

    glutCreateWindow("week06");

    glutDisplayFunc(display);
    glutIdleFunc(display);
    glutMainLoop();
}
