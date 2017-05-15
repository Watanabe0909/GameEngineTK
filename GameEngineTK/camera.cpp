#include "camera.h"

using namespace DirectX;
using namespace DirectX::SimpleMath;

Camera::Camera(int width, int height)
{
	//�����o�ϐ��̏�����
	m_eyepos = Vector3(0, 0, 5);
	m_refpos = Vector3(0, 0, 0);
	m_upvec = Vector3(0, 1, 0);

	m_fovY = XMConvertToRadians(60);
	m_aspect = (float)width / height;
	m_nearclip = 0.1f;
	m_faeclip = 1000.0;
	//�r���[�s��̐���
	m_view = Matrix::CreateLookAt(m_eyepos, m_refpos, m_upvec);

	//�ˉe�s��̐���
	m_proj = Matrix::CreatePerspectiveFieldOfView(m_fovY, m_aspect, m_nearclip, m_faeclip);
}

Camera::~Camera()
{

}

void Camera::Update()
{
	//�r���[�s��̐���
	m_view = Matrix::CreateLookAt(m_eyepos, m_refpos, m_upvec);

	//�ˉe�s��̐���
	m_proj = Matrix::CreatePerspectiveFieldOfView(m_fovY, m_aspect, m_nearclip, m_faeclip);
}

const DirectX::SimpleMath::Matrix& Camera::GetViewMatrix()
{
	return m_view;
}

const DirectX::SimpleMath::Matrix& Camera::GetProjectionMatrix()
{
	return m_proj;
}

void Camera::SetEyePos(const DirectX::SimpleMath::Vector3& eyepos)
{
	m_eyepos = eyepos;
}

void Camera::SetRefPos(const DirectX::SimpleMath::Vector3& refpos)
{
	m_refpos = refpos;
}

void Camera::SetUpVec(const DirectX::SimpleMath::Vector3& upvec)
{
	m_upvec = upvec;
}

void Camera::SetFovY(float fovY)
{
	m_fovY = fovY;
}

void Camera::SetAspect(float aspect)
{
	m_aspect = aspect;
}

void Camera::SetNearclip(float nearclip)
{
	m_nearclip = nearclip;
}

void Camera::SetFaeclip(float faeclip)
{
	m_faeclip = faeclip;
}
