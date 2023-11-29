void __fastcall BattleActorRotationComponent___ctor(BattleActorRotationComponent_o *this, const MethodInfo *method)
{
  LOBYTE(this->fields.RotationSpeed_Y) = 1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall BattleActorRotationComponent__RotationReStart(
        BattleActorRotationComponent_o *this,
        const MethodInfo *method)
{
  LOBYTE(this->fields.RotationSpeed_Y) = 1;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActorRotationComponent__RotationStop(
        BattleActorRotationComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  float v4; // s1
  UnityEngine_Transform_o *v5; // x19
  int v6; // s0

  LOBYTE(this->fields.RotationSpeed_Y) = 0;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  v4 = *((float *)&this->fields + 5);
  v5 = transform;
  *(UnityEngine_Quaternion_o *)&v6 = UnityEngine_Quaternion__Euler(0.0, v4, 0.0, 0LL);
  if ( !v5 )
    sub_B170D4();
  UnityEngine_Transform__set_localRotation(v5, *(UnityEngine_Quaternion_o *)&v6, 0LL);
}


void __fastcall BattleActorRotationComponent__Start(BattleActorRotationComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Quaternion_o localRotation; // [xsp+0h] [xbp-20h] BYREF
  UnityEngine_Vector3_o eulerAngles; // 0:s0.4,4:s1.4,8:s2.4

  *(_QWORD *)&localRotation.fields.x = 0LL;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    sub_B170D4();
  localRotation = UnityEngine_Transform__get_localRotation(transform, 0LL);
  eulerAngles = UnityEngine_Quaternion__get_eulerAngles(localRotation, (const MethodInfo *)&localRotation);
  this->fields.ResetRotationY = eulerAngles.fields.y;
  *((_DWORD *)&this->fields + 5) = LODWORD(eulerAngles.fields.y);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActorRotationComponent__Update(BattleActorRotationComponent_o *this, const MethodInfo *method)
{
  float ResetRotationY; // s8
  float v4; // s9
  float deltaTime; // s0
  int RotationSpeed_Y_low; // w8
  UnityEngine_Transform_o *transform; // x0
  float v8; // s1
  UnityEngine_Transform_o *v9; // x19
  int v10; // s0

  ResetRotationY = this->fields.ResetRotationY;
  v4 = this->fields.RotationY * 30.0;
  deltaTime = UnityEngine_Time__get_deltaTime(0LL);
  RotationSpeed_Y_low = LOBYTE(this->fields.RotationSpeed_Y);
  this->fields.ResetRotationY = ResetRotationY + (float)(v4 * deltaTime);
  if ( RotationSpeed_Y_low )
  {
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    v8 = this->fields.ResetRotationY;
    v9 = transform;
    *(UnityEngine_Quaternion_o *)&v10 = UnityEngine_Quaternion__Euler(0.0, v8, 0.0, 0LL);
    if ( !v9 )
      sub_B170D4();
    UnityEngine_Transform__set_localRotation(v9, *(UnityEngine_Quaternion_o *)&v10, 0LL);
  }
}


float __fastcall BattleActorRotationComponent__get_RotationSpeedYPerSecond(
        BattleActorRotationComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.RotationY * 30.0;
}