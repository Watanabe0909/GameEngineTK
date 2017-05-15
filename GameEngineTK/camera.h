/// <summary>
/// �J�����𐧌䂷��N���X
/// </summary>
#pragma once

#include <d3d11_1.h>
#include <SimpleMath.h>

class Camera
{
public:
	Camera(int width, int height);
	virtual ~Camera();
	//�X�V
	virtual void Update();

	//�r���[�s��̎擾
	const DirectX::SimpleMath::Matrix& GetViewMatrix();

	//�ˉe�s��̎擾
	const DirectX::SimpleMath::Matrix& GetProjectionMatrix();

	//���_���W�̃Z�b�g
	void SetEyePos(const DirectX::SimpleMath::Vector3& eyepos);
	//�����_�̃Z�b�g
	void SetRefPos(const DirectX::SimpleMath::Vector3& refpos);
	//������x�N�g���̃Z�b�g
	void SetUpVec(const DirectX::SimpleMath::Vector3& upvec);
	//������������p�̃Z�b�g
	void SetFovY(float fovY);
	//�A�X�y�N�g��̃Z�b�g
	void SetAspect(float aspect);
	//�j�A�N���b�v�̃Z�b�g
	void SetNearclip(float nearclip);
	//�t�@�[�N���b�v�̃Z�b�g
	void SetFaeclip(float faeclip);
	
protected:
	//�J�����̈ʒu�i���_���W�j
	DirectX::SimpleMath::Vector3 m_eyepos;
	//�J�����̌��Ă����i�����_�A�Q�Ɠ_�j
	DirectX::SimpleMath::Vector3 m_refpos;
	//�J�����̏�����x�N�g��
	DirectX::SimpleMath::Vector3 m_upvec;
	//������������p
	float m_fovY;
	//�A�X�y�N�g��
	float m_aspect;
	//�j�A�N���b�v
	float m_nearclip;
	//�t�@�[�N���b�v
	float m_faeclip;
	//�r���[�s��
	DirectX::SimpleMath::Matrix m_view;
	//�ˉe�s��
	DirectX::SimpleMath::Matrix m_proj;
};