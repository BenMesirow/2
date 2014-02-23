#include "Camera.h"

Camera::Camera() {
	Projection = Matrix();
	ModelView = Matrix();
    eyePoint = Point();
    look = Vector(0,0,-1);
    up = Vector(0,1,0);
    near = 0;
    far = 100;
    view = PI / 4;
    width = 16;
    height = 9;
}

Camera::~Camera() {
}

void Camera::Orient(Point& eye, Point& focus, Vector& up) {
    eyePoint = eye;
    look = focus - eye;
    look.normalize();
    this->up = up;
}


void Camera::Orient(Point& eye, Vector& look, Vector& up) {
    eyePoint = eye;
    this->look = look;
    this->up = up;
}

Matrix Camera::GetProjectionMatrix() { 
    return Projection;
}

void Camera::SetViewAngle (double viewAngle) { view = viewAngle; }
void Camera::SetNearPlane (double nearPlane) { near = nearPlane; }
void Camera::SetFarPlane (double farPlane) { far = farPlane; }

void Camera::SetScreenSize (int screenWidth, int screenHeight) {
	width = screenWidth;
	height = screenHeight;
}

Matrix Camera::GetModelViewMatrix() {
    return ModelView;
}

void Camera::RotateV(double angle) {
}

void Camera::RotateU(double angle) {
}

void Camera::RotateW(double angle) {
}

void Camera::Translate(const Vector &v) {
    
}

void Camera::Rotate(Point p, Vector axis, double degrees) {

}

Point Camera::GetEyePoint() { return eyePoint; }
Vector Camera::GetLookVector() { return look; }
Vector Camera::GetUpVector() { return up; }
double Camera::GetViewAngle() { return view; }
double Camera::GetNearPlane() { return near; }
double Camera::GetFarPlane() { return far; }
int Camera::GetScreenWidth() { return width; }
int Camera::GetScreenHeight() { return height; }
double Camera::GetFilmPlanDepth() { return depth; }
double Camera::GetScreenWidthRatio() { return width / height; }
