void __fastcall BattleActorShakeComponent___ctor(BattleActorShakeComponent_o *this, const MethodInfo *method)
{
  LOBYTE(this->fields.animationCurvel) = 1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActorShakeComponent__Update(BattleActorShakeComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *v3; // x0
  float v4; // s8
  float z; // s10
  float v6; // s9
  UnityEngine_Transform_o *v7; // x20
  float v8; // s0
  float y; // s8
  UnityEngine_Transform_o *transform; // x19
  int v11; // s0
  UnityEngine_Vector3_o v14; // 0:s0.4,4:s1.4,8:s2.4

  if ( !LOBYTE(this->fields.animationCurvel) )
  {
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    *(UnityEngine_Vector3_o *)&v11 = UnityEngine_Vector3__get_zero(0LL);
    if ( transform )
    {
      UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v11, 0LL);
      return;
    }
    goto LABEL_9;
  }
  if ( !*(_QWORD *)&this->fields.animationSpeed )
    return;
  v3 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !*(_QWORD *)&this->fields.animationSpeed
    || (z = this->fields.vector.fields.z,
        v4 = *((float *)&this->fields.vector + 3),
        v6 = *(float *)&this[1].klass,
        v7 = v3,
        v8 = UnityEngine_AnimationCurve__Evaluate(
               *(UnityEngine_AnimationCurve_o **)&this->fields.animationSpeed,
               this->fields.vector.fields.x * this->fields.vector.fields.y,
               0LL),
        !v7) )
  {
LABEL_9:
    sub_B0D97C(v3);
  }
  v14.fields.y = v4 * v8;
  v14.fields.z = v6 * v8;
  v14.fields.x = z * v8;
  UnityEngine_Transform__set_localPosition(v7, v14, 0LL);
  y = this->fields.vector.fields.y;
  this->fields.vector.fields.y = y + UnityEngine_Time__get_deltaTime(0LL);
}