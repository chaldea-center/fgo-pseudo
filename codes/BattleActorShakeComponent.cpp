void BattleActorShakeComponent___ctor(BattleActorShakeComponent_o *this, const MethodInfo *method)
{
  this->fields.IsAnimation = 1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void BattleActorShakeComponent__Update(BattleActorShakeComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  float z; // s8
  float y; // s9
  float x; // s10
  UnityEngine_Transform_o *v7; // x20
  float v8; // s0
  float elapsedTime; // s8
  UnityEngine_Transform_o *v10; // x19
  UnityEngine_Vector3_o v11; // 0:s0.4,4:s1.4,8:s2.4

  if ( !this->fields.IsAnimation )
  {
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    v10 = transform;
    if ( !byte_4C3C921 )
    {
      transform = (UnityEngine_Transform_o *)sub_1C37058(&UnityEngine_Vector3_TypeInfo);
      byte_4C3C921 = 1;
    }
    if ( v10 )
    {
      UnityEngine_Transform__set_localPosition(v10, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
      return;
    }
    goto LABEL_11;
  }
  if ( !this->fields.animationCurvel )
    return;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !this->fields.animationCurvel
    || (y = this->fields.vector.fields.y,
        z = this->fields.vector.fields.z,
        x = this->fields.vector.fields.x,
        v7 = transform,
        v8 = UnityEngine_AnimationCurve__Evaluate(
               this->fields.animationCurvel,
               this->fields.animationSpeed * this->fields.elapsedTime,
               0),
        !v7) )
  {
LABEL_11:
    sub_1C372B4(transform);
  }
  v11.fields.z = z * v8;
  v11.fields.y = y * v8;
  v11.fields.x = x * v8;
  UnityEngine_Transform__set_localPosition(v7, v11, 0);
  elapsedTime = this->fields.elapsedTime;
  this->fields.elapsedTime = elapsedTime + UnityEngine_Time__get_deltaTime(0);
}