void __fastcall BattleActorShakeComponent___ctor(BattleActorShakeComponent_o *this, const MethodInfo *method)
{
  this->fields.IsAnimation = 1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall BattleActorShakeComponent__Update(BattleActorShakeComponent_o *this, const MethodInfo *method)
{
  __int64 transform; // x0
  float z; // s8
  float y; // s9
  float x; // s10
  UnityEngine_Transform_o *v7; // x20
  float v8; // s0
  float elapsedTime; // s8
  __int64 v10; // x1
  UnityEngine_Transform_o *v11; // x19
  UnityEngine_Vector3_o v12; // 0:s0.4,4:s1.4,8:s2.4

  if ( !this->fields.IsAnimation )
  {
    transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    v11 = (UnityEngine_Transform_o *)transform;
    if ( !byte_49F7111 )
    {
      transform = sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v10);
      byte_49F7111 = 1;
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
        v7 = (UnityEngine_Transform_o *)transform,
        v8 = UnityEngine_AnimationCurve__Evaluate(
               this->fields.animationCurvel,
               this->fields.animationSpeed * this->fields.elapsedTime,
               0LL),
        !v7) )
  {
LABEL_11:
    sub_1B64324(transform);
  }
  v12.fields.z = z * v8;
  v12.fields.y = y * v8;
  v12.fields.x = x * v8;
  UnityEngine_Transform__set_localPosition(v7, v12, 0LL);
  elapsedTime = this->fields.elapsedTime;
  this->fields.elapsedTime = elapsedTime + UnityEngine_Time__get_deltaTime(0LL);
}