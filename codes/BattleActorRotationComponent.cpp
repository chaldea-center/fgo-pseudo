void BattleActorRotationComponent___ctor(BattleActorRotationComponent_o *this, const MethodInfo *method)
{
  this->fields.IsRotation = 1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void BattleActorRotationComponent__RotationReStart(BattleActorRotationComponent_o *this, const MethodInfo *method)
{
  this->fields.IsRotation = 1;
}


void BattleActorRotationComponent__RotationStop(BattleActorRotationComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x19
  __int64 v4; // x0
  UnityEngine_Vector3_o v5; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o v6; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  this->fields.IsRotation = 0;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  v5.fields.z = 0.0;
  v5.fields.y = this->fields.ResetRotationY * 0.017453;
  v5.fields.x = 0.0;
  v6 = UnityEngine_Quaternion__Internal_FromEulerRad(v5, 0);
  if ( !transform )
    sub_1C32E7C(v4);
  UnityEngine_Transform__set_localRotation(transform, v6, 0);
}


void BattleActorRotationComponent__Start(BattleActorRotationComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Vector3_o v4; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o Positive; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o localRotation; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    sub_1C32E7C(0);
  localRotation = UnityEngine_Transform__get_localRotation(transform, 0);
  v4 = UnityEngine_Quaternion__Internal_ToEulerRad(localRotation, 0);
  v4.fields.x = v4.fields.x * 57.296;
  v4.fields.y = v4.fields.y * 57.296;
  v4.fields.z = v4.fields.z * 57.296;
  Positive = UnityEngine_Quaternion__Internal_MakePositive(v4, 0);
  this->fields.RotationY = Positive.fields.y;
  this->fields.ResetRotationY = Positive.fields.y;
}


void BattleActorRotationComponent__Update(BattleActorRotationComponent_o *this, const MethodInfo *method)
{
  float RotationY; // s8
  float v4; // s9
  float deltaTime; // s0
  _BOOL4 IsRotation; // w8
  UnityEngine_Transform_o *transform; // x19
  __int64 v8; // x0
  UnityEngine_Vector3_o v9; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o v10; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  RotationY = this->fields.RotationY;
  v4 = this->fields.RotationSpeed_Y * 30.0;
  deltaTime = UnityEngine_Time__get_deltaTime(0);
  IsRotation = this->fields.IsRotation;
  this->fields.RotationY = RotationY + (float)(v4 * deltaTime);
  if ( IsRotation )
  {
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    v9.fields.z = 0.0;
    v9.fields.y = this->fields.RotationY * 0.017453;
    v9.fields.x = 0.0;
    v10 = UnityEngine_Quaternion__Internal_FromEulerRad(v9, 0);
    if ( !transform )
      sub_1C32E7C(v8);
    UnityEngine_Transform__set_localRotation(transform, v10, 0);
  }
}


float BattleActorRotationComponent__get_RotationSpeedYPerSecond(
        BattleActorRotationComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.RotationSpeed_Y * 30.0;
}