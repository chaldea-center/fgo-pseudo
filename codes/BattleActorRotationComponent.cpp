void __fastcall BattleActorRotationComponent___ctor(BattleActorRotationComponent_o *this, const MethodInfo *method)
{
  this->fields.IsRotation = 1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall BattleActorRotationComponent__RotationReStart(
        BattleActorRotationComponent_o *this,
        const MethodInfo *method)
{
  this->fields.IsRotation = 1;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActorRotationComponent__RotationStop(
        BattleActorRotationComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x19
  __int64 v4; // x0
  __int64 v5; // x1
  int v6; // s0
  UnityEngine_Vector3_o v10; // 0:s0.4,4:s1.4,8:s2.4

  this->fields.IsRotation = 0;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  v10.fields.z = 0.0;
  v10.fields.y = this->fields.ResetRotationY * 0.017453;
  v10.fields.x = 0.0;
  *(UnityEngine_Quaternion_o *)&v6 = UnityEngine_Quaternion__Internal_FromEulerRad(v10, 0LL);
  if ( !transform )
    sub_1BDBAD4(v4, v5);
  UnityEngine_Transform__set_localRotation(transform, *(UnityEngine_Quaternion_o *)&v6, 0LL);
}


void __fastcall BattleActorRotationComponent__Start(BattleActorRotationComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  __int64 v4; // x1
  UnityEngine_Vector3_o v5; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o Positive; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o localRotation; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    sub_1BDBAD4(0LL, v4);
  localRotation = UnityEngine_Transform__get_localRotation(transform, 0LL);
  v5 = UnityEngine_Quaternion__Internal_ToEulerRad(localRotation, 0LL);
  v5.fields.x = v5.fields.x * 57.296;
  v5.fields.y = v5.fields.y * 57.296;
  v5.fields.z = v5.fields.z * 57.296;
  Positive = UnityEngine_Quaternion__Internal_MakePositive(v5, 0LL);
  this->fields.RotationY = Positive.fields.y;
  this->fields.ResetRotationY = Positive.fields.y;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActorRotationComponent__Update(BattleActorRotationComponent_o *this, const MethodInfo *method)
{
  float RotationY; // s8
  float v4; // s9
  float deltaTime; // s0
  _BOOL4 IsRotation; // w8
  UnityEngine_Transform_o *transform; // x19
  __int64 v8; // x0
  __int64 v9; // x1
  int v10; // s0
  UnityEngine_Vector3_o v14; // 0:s0.4,4:s1.4,8:s2.4

  RotationY = this->fields.RotationY;
  v4 = this->fields.RotationSpeed_Y * 30.0;
  deltaTime = UnityEngine_Time__get_deltaTime(0LL);
  IsRotation = this->fields.IsRotation;
  this->fields.RotationY = RotationY + (float)(v4 * deltaTime);
  if ( IsRotation )
  {
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    v14.fields.z = 0.0;
    v14.fields.y = this->fields.RotationY * 0.017453;
    v14.fields.x = 0.0;
    *(UnityEngine_Quaternion_o *)&v10 = UnityEngine_Quaternion__Internal_FromEulerRad(v14, 0LL);
    if ( !transform )
      sub_1BDBAD4(v8, v9);
    UnityEngine_Transform__set_localRotation(transform, *(UnityEngine_Quaternion_o *)&v10, 0LL);
  }
}


float __fastcall BattleActorRotationComponent__get_RotationSpeedYPerSecond(
        BattleActorRotationComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.RotationSpeed_Y * 30.0;
}