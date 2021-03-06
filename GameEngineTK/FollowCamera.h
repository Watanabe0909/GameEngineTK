/// <summary>
/// 自機に追従するカメラクラス
/// </summary>
#pragma once

#include "camera.h"

class FollowCamera : public Camera
{
public:
	//自機とカメラの距離
	static const float CAMERA_DISTANCE;
	//コンストラクタ
	FollowCamera(int width, int height);
	//更新
	void Update() override;
	//追従対象の座標のセット
	void SetTargetPos(const DirectX::SimpleMath::Vector3& targetPos);
	//追従対象の回転角のセット
	void SetTargetAngle(float targetAngle);
protected:
	//追従対象の座標
	DirectX::SimpleMath::Vector3 m_targetPos;
	//追従対象の回転角
	float m_targetAngle;
};