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
  UnityEngine_Transform_o *transform; // x0
  float ResetRotationY; // s0
  UnityEngine_Transform_o *v5; // x19
  __int64 v6; // x0
  __int64 v7; // x1
  UnityEngine_Vector3_o v8; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o v9; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  this->fields.IsRotation = 0;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  ResetRotationY = this->fields.ResetRotationY;
  v8.fields.z = 0.0;
  v5 = transform;
  v8.fields.y = ResetRotationY * 0.017453;
  v8.fields.x = 0.0;
  v9 = UnityEngine_Quaternion__Internal_FromEulerRad(v8, 0);
  if ( !v5 )
    sub_2213CDC(v6, v7);
  UnityEngine_Transform__set_localRotation(v5, v9, 0);
}


void BattleActorRotationComponent__Start(BattleActorRotationComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  __int64 v4; // x1
  float y; // s1
  UnityEngine_Vector3_o v6; // 0:kr10_12.12
  UnityEngine_Vector3_o v7; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o localRotation; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    sub_2213CDC(0, v4);
  localRotation = UnityEngine_Transform__get_localRotation(transform, 0);
  v6 = UnityEngine_Quaternion__Internal_ToEulerRad(localRotation, 0);
  v7.fields.x = v6.fields.x * 57.296;
  v7.fields.y = v6.fields.y * 57.296;
  v7.fields.z = v6.fields.z * 57.296;
  y = UnityEngine_Quaternion__Internal_MakePositive(v7, 0).fields.y;
  this->fields.RotationY = y;
  this->fields.ResetRotationY = y;
}


void BattleActorRotationComponent__Update(BattleActorRotationComponent_o *this, const MethodInfo *method)
{
  float RotationY; // s9
  float v4; // s8
  float deltaTime; // s0
  _BOOL4 IsRotation; // w8
  UnityEngine_Transform_o *transform; // x0
  float v8; // s0
  UnityEngine_Transform_o *v9; // x19
  __int64 v10; // x0
  __int64 v11; // x1
  UnityEngine_Vector3_o v12; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o v13; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  RotationY = this->fields.RotationY;
  v4 = this->fields.RotationSpeed_Y * 30.0;
  deltaTime = UnityEngine_Time__get_deltaTime(0);
  IsRotation = this->fields.IsRotation;
  this->fields.RotationY = RotationY + (float)(v4 * deltaTime);
  if ( IsRotation )
  {
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    v8 = this->fields.RotationY;
    v12.fields.z = 0.0;
    v9 = transform;
    v12.fields.y = v8 * 0.017453;
    v12.fields.x = 0.0;
    v13 = UnityEngine_Quaternion__Internal_FromEulerRad(v12, 0);
    if ( !v9 )
      sub_2213CDC(v10, v11);
    UnityEngine_Transform__set_localRotation(v9, v13, 0);
  }
}


float BattleActorRotationComponent__get_RotationSpeedYPerSecond(
        BattleActorRotationComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.RotationSpeed_Y * 30.0;
}