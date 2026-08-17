void BattleActorShakeComponent___ctor(BattleActorShakeComponent_o *this, const MethodInfo *method)
{
  this->fields.IsAnimation = 1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void BattleActorShakeComponent__Update(BattleActorShakeComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  __int64 v4; // x1
  UnityEngine_Transform_o *v5; // x20
  float z; // s8
  float y; // s9
  float x; // s10
  float v9; // s0
  float elapsedTime; // s8
  UnityEngine_Transform_o *v11; // x19
  UnityEngine_Vector3_o v12; // 0:s0.4,4:s1.4,8:s2.4

  if ( !this->fields.IsAnimation )
  {
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    v11 = transform;
    if ( !byte_5969AE0 )
    {
      transform = (UnityEngine_Transform_o *)sub_2213A60(&UnityEngine_Vector3_TypeInfo);
      byte_5969AE0 = 1;
    }
    if ( v11 )
    {
      UnityEngine_Transform__set_localPosition(v11, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
      return;
    }
    goto LABEL_11;
  }
  if ( !this->fields.animationCurvel )
    return;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !this->fields.animationCurvel
    || (v5 = transform,
        y = this->fields.vector.fields.y,
        z = this->fields.vector.fields.z,
        x = this->fields.vector.fields.x,
        v9 = UnityEngine_AnimationCurve__Evaluate(
               this->fields.animationCurvel,
               this->fields.animationSpeed * this->fields.elapsedTime,
               0),
        !v5) )
  {
LABEL_11:
    sub_2213CDC(transform, v4);
  }
  v12.fields.z = z * v9;
  v12.fields.y = y * v9;
  v12.fields.x = x * v9;
  UnityEngine_Transform__set_localPosition(v5, v12, 0);
  elapsedTime = this->fields.elapsedTime;
  this->fields.elapsedTime = elapsedTime + UnityEngine_Time__get_deltaTime(0);
}