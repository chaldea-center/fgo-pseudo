void __fastcall BattleActorShakeComponent___ctor(BattleActorShakeComponent_o *this, const MethodInfo *method)
{
  this->fields.IsAnimation = 1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall BattleActorShakeComponent__Update(BattleActorShakeComponent_o *this, const MethodInfo *method)
{
  __int64 transform; // x0
  __int64 v4; // x1
  float z; // s8
  float y; // s9
  float x; // s10
  UnityEngine_Transform_o *v8; // x20
  float v9; // s0
  float elapsedTime; // s8
  UnityEngine_Transform_o *v11; // x19
  UnityEngine_Vector3_o v12; // 0:s0.4,4:s1.4,8:s2.4

  if ( !this->fields.IsAnimation )
  {
    transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    v11 = (UnityEngine_Transform_o *)transform;
    if ( !byte_4A487E1 )
    {
      transform = sub_1B863B8(&UnityEngine_Vector3_TypeInfo, v4);
      byte_4A487E1 = 1;
    }
    if ( v11 )
    {
      UnityEngine_Transform__set_localPosition(v11, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
      return;
    }
    goto LABEL_11;
  }
  if ( !this->fields.animationCurvel )
    return;
  transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !this->fields.animationCurvel
    || (y = this->fields.vector.fields.y,
        z = this->fields.vector.fields.z,
        x = this->fields.vector.fields.x,
        v8 = (UnityEngine_Transform_o *)transform,
        v9 = UnityEngine_AnimationCurve__Evaluate(
               this->fields.animationCurvel,
               this->fields.animationSpeed * this->fields.elapsedTime,
               0LL),
        !v8) )
  {
LABEL_11:
    sub_1B86614(transform, v4);
  }
  v12.fields.z = z * v9;
  v12.fields.y = y * v9;
  v12.fields.x = x * v9;
  UnityEngine_Transform__set_localPosition(v8, v12, 0LL);
  elapsedTime = this->fields.elapsedTime;
  this->fields.elapsedTime = elapsedTime + UnityEngine_Time__get_deltaTime(0LL);
}