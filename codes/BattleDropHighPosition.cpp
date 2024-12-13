void __fastcall BattleDropHighPosition___ctor(BattleDropHighPosition_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall BattleDropHighPosition__FixedUpdate(BattleDropHighPosition_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *treasureObj; // x0
  __int64 activeSelf; // x0
  __int64 v5; // x1
  _BOOL4 v6; // w20
  UnityEngine_Rigidbody_o *rigidbodyComp; // x20
  UnityEngine_Transform_o *v8; // x20
  UnityEngine_Rigidbody_o *v9; // x19
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v11; // 0:s0.4,4:s1.4,8:s2.4

  treasureObj = this->fields.treasureObj;
  if ( treasureObj && this->fields.rigidbodyComp )
  {
    activeSelf = UnityEngine_GameObject__get_activeSelf(treasureObj, 0LL);
    if ( !this->fields.rigidbodyComp )
      goto LABEL_23;
    v6 = activeSelf & 1;
    UnityEngine_Rigidbody__set_isKinematic(this->fields.rigidbodyComp, !(activeSelf & 1), 0LL);
    if ( this->fields.treasureEnable != v6 )
    {
      this->fields.treasureEnable = v6;
      if ( v6 )
      {
        activeSelf = (__int64)this->fields.rigidbodyComp;
        if ( !activeSelf )
          goto LABEL_23;
        UnityEngine_Rigidbody__AddForce((UnityEngine_Rigidbody_o *)activeSelf, this->fields.startAcceleration, 1, 0LL);
      }
    }
    if ( this->fields.movingFlag )
    {
      if ( !this->fields.useAcceleration )
        return;
      activeSelf = (__int64)this->fields.rigidbodyComp;
      if ( activeSelf )
      {
        UnityEngine_Rigidbody__AddForce((UnityEngine_Rigidbody_o *)activeSelf, this->fields.localGravity, 5, 0LL);
        activeSelf = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
        if ( activeSelf )
        {
          localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)activeSelf, 0LL);
          if ( localPosition.fields.y > 0.0 )
            return;
          rigidbodyComp = this->fields.rigidbodyComp;
          if ( !byte_4B31941 )
          {
            activeSelf = sub_1BD3458(&UnityEngine_Vector3_TypeInfo, v5);
            byte_4B31941 = 1;
          }
          if ( rigidbodyComp )
          {
            UnityEngine_Rigidbody__set_velocity(
              rigidbodyComp,
              UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
              0LL);
            activeSelf = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
            if ( activeSelf )
            {
              v8 = (UnityEngine_Transform_o *)activeSelf;
              v11 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)activeSelf, 0LL);
              v11.fields.y = 0.0;
              UnityEngine_Transform__set_localPosition(v8, v11, 0LL);
              this->fields.movingFlag = 0;
              return;
            }
          }
        }
      }
    }
    else
    {
      v9 = this->fields.rigidbodyComp;
      if ( !byte_4B31941 )
      {
        activeSelf = sub_1BD3458(&UnityEngine_Vector3_TypeInfo, v5);
        byte_4B31941 = 1;
      }
      if ( v9 )
      {
        UnityEngine_Rigidbody__set_velocity(v9, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
        return;
      }
    }
LABEL_23:
    sub_1BD36B4(activeSelf, v5);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleDropHighPosition__Initialize(
        BattleDropHighPosition_o *this,
        UnityEngine_Vector3_o pos,
        const MethodInfo *method)
{
  float z; // s8
  float y; // s9
  float x; // s10
  UnityEngine_Object_o *treasureObj; // x20
  UnityEngine_Transform_o *transform; // x0
  __int64 v9; // x1
  UnityEngine_Transform_o *v10; // x20
  float v11; // s8
  float32x2_t v12; // d9
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float32x2_t v14; // d1
  unsigned __int64 v15; // d1
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  z = pos.fields.z;
  y = pos.fields.y;
  x = pos.fields.x;
  if ( (byte_4B39744 & 1) == 0 )
  {
    sub_1BD3458(&UnityEngine_Object_TypeInfo, method);
    byte_4B39744 = 1;
  }
  this->fields.movingFlag = 1;
  treasureObj = (UnityEngine_Object_o *)this->fields.treasureObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(treasureObj, 0LL, 0LL) )
  {
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( transform )
    {
      v10 = transform;
      localPosition = UnityEngine_Transform__get_localPosition(transform, 0LL);
      localPosition.fields.x = localPosition.fields.x + (float)(x + this->fields.startPos.fields.x);
      localPosition.fields.y = localPosition.fields.y + (float)(y + this->fields.startPos.fields.y);
      localPosition.fields.z = localPosition.fields.z + (float)(z + this->fields.startPos.fields.z);
      UnityEngine_Transform__set_localPosition(v10, localPosition, 0LL);
      if ( !this->fields.rigidbodyComp )
        return;
      v11 = this->fields.startAcceleration.fields.x;
      v12.n64_u64[0] = *(unsigned __int64 *)&this->fields.startAcceleration.fields.y;
      if ( !byte_4B31941 )
      {
        sub_1BD3458(&UnityEngine_Vector3_TypeInfo, v9);
        byte_4B31941 = 1;
      }
      static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
      v14.n64_u64[0] = vsub_f32(v12, *(float32x2_t *)&static_fields->zeroVector.fields.y).n64_u64[0];
      v15 = vmul_f32(v14, v14).n64_u64[0];
      if ( (float)(*((float *)&v15 + 1)
                 + (float)((float)((float)(v11 - static_fields->zeroVector.fields.x)
                                 * (float)(v11 - static_fields->zeroVector.fields.x))
                         + *(float *)&v15)) < 1.0e-10 )
        return;
      transform = (UnityEngine_Transform_o *)this->fields.rigidbodyComp;
      if ( transform )
      {
        UnityEngine_Rigidbody__AddForce((UnityEngine_Rigidbody_o *)transform, this->fields.startAcceleration, 1, 0LL);
        return;
      }
    }
    sub_1BD36B4(transform, v9);
  }
}


void __fastcall BattleDropHighPosition__StopMoving(BattleDropHighPosition_o *this, const MethodInfo *method)
{
  this->fields.movingFlag = 0;
}