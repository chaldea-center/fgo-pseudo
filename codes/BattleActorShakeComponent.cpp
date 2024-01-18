void __fastcall BattleActorShakeComponent___ctor(BattleActorShakeComponent_o *this, const MethodInfo *method)
{
  LOBYTE(this->fields.animationCurvel) = 1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActorShakeComponent__Update(BattleActorShakeComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *v3; // x0
  __int64 v4; // x1
  float v5; // s8
  float z; // s10
  float v7; // s9
  UnityEngine_Transform_o *v8; // x20
  float v9; // s0
  float y; // s8
  UnityEngine_Transform_o *transform; // x19
  int v12; // s0
  UnityEngine_Vector3_o v15; // 0:s0.4,4:s1.4,8:s2.4

  if ( !LOBYTE(this->fields.animationCurvel) )
  {
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    *(UnityEngine_Vector3_o *)&v12 = UnityEngine_Vector3__get_zero(0LL);
    if ( transform )
    {
      UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v12, 0LL);
      return;
    }
    goto LABEL_9;
  }
  if ( !*(_QWORD *)&this->fields.animationSpeed )
    return;
  v3 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !*(_QWORD *)&this->fields.animationSpeed
    || (z = this->fields.vector.fields.z,
        v5 = *((float *)&this->fields.vector + 3),
        v7 = *(float *)&this[1].klass,
        v8 = v3,
        v9 = UnityEngine_AnimationCurve__Evaluate(
               *(UnityEngine_AnimationCurve_o **)&this->fields.animationSpeed,
               this->fields.vector.fields.x * this->fields.vector.fields.y,
               0LL),
        !v8) )
  {
LABEL_9:
    sub_B2C434(v3, v4);
  }
  v15.fields.y = v5 * v9;
  v15.fields.z = v7 * v9;
  v15.fields.x = z * v9;
  UnityEngine_Transform__set_localPosition(v8, v15, 0LL);
  y = this->fields.vector.fields.y;
  this->fields.vector.fields.y = y + UnityEngine_Time__get_deltaTime(0LL);
}