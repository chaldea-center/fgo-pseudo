void __fastcall BattleDropHighPosition___ctor(BattleDropHighPosition_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleDropHighPosition__FixedUpdate(BattleDropHighPosition_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *treasureObj; // x0
  UnityEngine_Rigidbody_o *activeSelf; // x0
  __int64 v5; // x1
  int v6; // w20
  UnityEngine_Rigidbody_o *rigidbodyComp; // x20
  int v8; // s0
  UnityEngine_Transform_o *v11; // x20
  UnityEngine_Rigidbody_o *v12; // x19
  int v13; // s0
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v17; // 0:s0.4,4:s1.4,8:s2.4

  treasureObj = this->fields.treasureObj;
  if ( treasureObj && this->fields.rigidbodyComp )
  {
    activeSelf = (UnityEngine_Rigidbody_o *)UnityEngine_GameObject__get_activeSelf(treasureObj, 0LL);
    if ( !this->fields.rigidbodyComp )
      goto LABEL_19;
    v6 = (int)activeSelf;
    UnityEngine_Rigidbody__set_isKinematic(this->fields.rigidbodyComp, ((unsigned __int8)activeSelf & 1) == 0, 0LL);
    if ( ((v6 ^ this->fields.treasureEnable) & 1) != 0 )
    {
      this->fields.treasureEnable = v6 & 1;
      if ( (v6 & 1) != 0 )
      {
        activeSelf = this->fields.rigidbodyComp;
        if ( !activeSelf )
          goto LABEL_19;
        UnityEngine_Rigidbody__AddForce(activeSelf, this->fields.startAcceleration, 1, 0LL);
      }
    }
    if ( this->fields.movingFlag )
    {
      if ( !this->fields.useAcceleration )
        return;
      activeSelf = this->fields.rigidbodyComp;
      if ( activeSelf )
      {
        UnityEngine_Rigidbody__AddForce(activeSelf, this->fields.localGravity, 5, 0LL);
        activeSelf = (UnityEngine_Rigidbody_o *)UnityEngine_Component__get_transform(
                                                  (UnityEngine_Component_o *)this,
                                                  0LL);
        if ( activeSelf )
        {
          localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)activeSelf, 0LL);
          if ( localPosition.fields.y > 0.0 )
            return;
          rigidbodyComp = this->fields.rigidbodyComp;
          *(UnityEngine_Vector3_o *)&v8 = UnityEngine_Vector3__get_zero(0LL);
          if ( rigidbodyComp )
          {
            UnityEngine_Rigidbody__set_velocity(rigidbodyComp, *(UnityEngine_Vector3_o *)&v8, 0LL);
            activeSelf = (UnityEngine_Rigidbody_o *)UnityEngine_Component__get_transform(
                                                      (UnityEngine_Component_o *)this,
                                                      0LL);
            if ( activeSelf )
            {
              v11 = (UnityEngine_Transform_o *)activeSelf;
              v17 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)activeSelf, 0LL);
              v17.fields.y = 0.0;
              UnityEngine_Transform__set_localPosition(v11, v17, 0LL);
              this->fields.movingFlag = 0;
              return;
            }
          }
        }
      }
    }
    else
    {
      v12 = this->fields.rigidbodyComp;
      *(UnityEngine_Vector3_o *)&v13 = UnityEngine_Vector3__get_zero(0LL);
      if ( v12 )
      {
        UnityEngine_Rigidbody__set_velocity(v12, *(UnityEngine_Vector3_o *)&v13, 0LL);
        return;
      }
    }
LABEL_19:
    sub_B7076C(activeSelf, v5);
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
  float v12; // s9
  float v13; // s10
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v15; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o zero; // 0:s3.4,4:s4.4,8:s5.4

  z = pos.fields.z;
  y = pos.fields.y;
  x = pos.fields.x;
  if ( (byte_4350599 & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_4350599 = 1;
  }
  this->fields.movingFlag = 1;
  treasureObj = (UnityEngine_Object_o *)this->fields.treasureObj;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
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
      v12 = this->fields.startAcceleration.fields.y;
      v13 = this->fields.startAcceleration.fields.z;
      zero = UnityEngine_Vector3__get_zero(0LL);
      v15.fields.x = v11;
      v15.fields.y = v12;
      v15.fields.z = v13;
      if ( UnityEngine_Vector3__op_Equality(v15, zero, 0LL) )
        return;
      transform = (UnityEngine_Transform_o *)this->fields.rigidbodyComp;
      if ( transform )
      {
        UnityEngine_Rigidbody__AddForce((UnityEngine_Rigidbody_o *)transform, this->fields.startAcceleration, 1, 0LL);
        return;
      }
    }
    sub_B7076C(transform, v9);
  }
}


void __fastcall BattleDropHighPosition__StopMoving(BattleDropHighPosition_o *this, const MethodInfo *method)
{
  this->fields.movingFlag = 0;
}