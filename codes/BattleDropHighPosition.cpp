void __fastcall BattleDropHighPosition___ctor(BattleDropHighPosition_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleDropHighPosition__FixedUpdate(BattleDropHighPosition_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *treasureObj; // x20
  UnityEngine_Object_o *rigidbodyComp; // x20
  const MethodInfo *v5; // x1
  __int64 activeSelf; // x0
  _BOOL4 v7; // w20
  UnityEngine_Rigidbody_o *v8; // x20
  int v9; // s0
  UnityEngine_Rigidbody_o *v12; // x20
  int v13; // s0
  UnityEngine_Rigidbody_o *v16; // x20
  UnityEngine_Transform_o *v17; // x20
  struct BattleDropHighPositionOverwriteSetting_o **p_overwriteSetting; // x19
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  UnityEngine_Rigidbody_o *v25; // x19
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v27; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4BFFDF0 & 1) == 0 )
  {
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, method);
    byte_4BFFDF0 = 1;
  }
  treasureObj = (UnityEngine_Object_o *)this->fields.treasureObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(treasureObj, 0LL, 0LL) )
  {
    rigidbodyComp = (UnityEngine_Object_o *)this->fields.rigidbodyComp;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(rigidbodyComp, 0LL, 0LL) )
    {
      activeSelf = (__int64)this->fields.treasureObj;
      if ( activeSelf )
      {
        activeSelf = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)activeSelf, 0LL);
        if ( this->fields.rigidbodyComp )
        {
          v7 = activeSelf & 1;
          UnityEngine_Rigidbody__set_isKinematic(this->fields.rigidbodyComp, !(activeSelf & 1), 0LL);
          if ( this->fields.treasureEnable != v7 )
          {
            this->fields.treasureEnable = v7;
            if ( v7 )
            {
              v8 = this->fields.rigidbodyComp;
              *(UnityEngine_Vector3_o *)&v9 = BattleDropHighPosition__get_StartAcceleration(this, v5);
              if ( !v8 )
                goto LABEL_30;
              UnityEngine_Rigidbody__AddForce(v8, *(UnityEngine_Vector3_o *)&v9, 1, 0LL);
            }
          }
          if ( this->fields.movingFlag )
          {
            if ( !this->fields.useAcceleration )
              return;
            v12 = this->fields.rigidbodyComp;
            *(UnityEngine_Vector3_o *)&v13 = BattleDropHighPosition__get_LocalGravity(this, v5);
            if ( v12 )
            {
              UnityEngine_Rigidbody__AddForce(v12, *(UnityEngine_Vector3_o *)&v13, 5, 0LL);
              activeSelf = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
              if ( activeSelf )
              {
                localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)activeSelf, 0LL);
                if ( localPosition.fields.y > 0.0 )
                  return;
                v16 = this->fields.rigidbodyComp;
                if ( !byte_4BF7D91 )
                {
                  activeSelf = sub_1C2E12C(&UnityEngine_Vector3_TypeInfo, v5);
                  byte_4BF7D91 = 1;
                }
                if ( v16 )
                {
                  UnityEngine_Rigidbody__set_velocity(v16, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
                  activeSelf = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
                  if ( activeSelf )
                  {
                    v17 = (UnityEngine_Transform_o *)activeSelf;
                    v27 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)activeSelf, 0LL);
                    v27.fields.y = 0.0;
                    UnityEngine_Transform__set_localPosition(v17, v27, 0LL);
                    this->fields.overwriteSetting = 0LL;
                    p_overwriteSetting = &this->fields.overwriteSetting;
                    sub_1C2E0D0((PartyOrganizationUtility_o *)p_overwriteSetting, 0LL, v19, v20, v21, v22, v23, v24);
                    *((_BYTE *)p_overwriteSetting - 4) = 0;
                    return;
                  }
                }
              }
            }
          }
          else
          {
            v25 = this->fields.rigidbodyComp;
            if ( !byte_4BF7D91 )
            {
              activeSelf = sub_1C2E12C(&UnityEngine_Vector3_TypeInfo, v5);
              byte_4BF7D91 = 1;
            }
            if ( v25 )
            {
              UnityEngine_Rigidbody__set_velocity(v25, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
              return;
            }
          }
        }
      }
LABEL_30:
      sub_1C2E388(activeSelf, v5);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleDropHighPosition__Initialize(
        BattleDropHighPosition_o *this,
        UnityEngine_Vector3_o pos,
        UnityEngine_ScriptableObject_o *scriptableObject,
        const MethodInfo *method)
{
  float z; // s8
  float y; // s9
  float x; // s10
  __int64 v9; // x1
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  __int64 methodPtr_low; // x10
  UnityEngine_Object_o *treasureObj; // x20
  UnityEngine_Transform_o *transform; // x0
  __int64 v19; // x1
  UnityEngine_Transform_o *v20; // x20
  float v21; // s11
  float v22; // s12
  float v23; // s13
  const MethodInfo *v24; // x1
  UnityEngine_Object_o *rigidbodyComp; // x20
  const MethodInfo *v26; // x1
  const MethodInfo *v27; // x1
  float v28; // s8
  float v29; // s9
  float v30; // s10
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  UnityEngine_Rigidbody_o *v32; // x20
  int v33; // s0
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o StartPos; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o StartAcceleration; // 0:s0.4,4:s1.4,8:s2.4

  z = pos.fields.z;
  y = pos.fields.y;
  x = pos.fields.x;
  if ( (byte_4BFFDEF & 1) == 0 )
  {
    sub_1C2E12C(&BattleDropHighPositionOverwriteSetting_TypeInfo, scriptableObject);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v9);
    byte_4BFFDEF = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)scriptableObject, 0LL, 0LL) )
  {
    if ( scriptableObject )
    {
      methodPtr_low = LOBYTE(BattleDropHighPositionOverwriteSetting_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(scriptableObject->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
        && (BattleDropHighPositionOverwriteSetting_c *)scriptableObject->klass->_2.typeHierarchy[methodPtr_low - 1] == BattleDropHighPositionOverwriteSetting_TypeInfo )
      {
        this->fields.overwriteSetting = (struct BattleDropHighPositionOverwriteSetting_o *)scriptableObject;
        sub_1C2E0D0(
          (PartyOrganizationUtility_o *)&this->fields.overwriteSetting,
          (int64_t)scriptableObject,
          v10,
          v11,
          v12,
          v13,
          v14,
          v15);
      }
    }
  }
  this->fields.movingFlag = 1;
  treasureObj = (UnityEngine_Object_o *)this->fields.treasureObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(treasureObj, 0LL, 0LL) )
  {
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( !transform )
      goto LABEL_23;
    v20 = transform;
    localPosition = UnityEngine_Transform__get_localPosition(transform, 0LL);
    v21 = localPosition.fields.x;
    v22 = localPosition.fields.y;
    v23 = localPosition.fields.z;
    StartPos = BattleDropHighPosition__get_StartPos(this, v24);
    StartPos.fields.x = v21 + (float)(x + StartPos.fields.x);
    StartPos.fields.y = v22 + (float)(y + StartPos.fields.y);
    StartPos.fields.z = v23 + (float)(z + StartPos.fields.z);
    UnityEngine_Transform__set_localPosition(v20, StartPos, 0LL);
    rigidbodyComp = (UnityEngine_Object_o *)this->fields.rigidbodyComp;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(rigidbodyComp, 0LL, 0LL) )
    {
      StartAcceleration = BattleDropHighPosition__get_StartAcceleration(this, v26);
      v28 = StartAcceleration.fields.x;
      v29 = StartAcceleration.fields.y;
      v30 = StartAcceleration.fields.z;
      if ( !byte_4BF7D91 )
      {
        sub_1C2E12C(&UnityEngine_Vector3_TypeInfo, v27);
        byte_4BF7D91 = 1;
      }
      static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
      if ( (float)((float)((float)(v30 - static_fields->zeroVector.fields.z)
                         * (float)(v30 - static_fields->zeroVector.fields.z))
                 + (float)((float)((float)(v28 - static_fields->zeroVector.fields.x)
                                 * (float)(v28 - static_fields->zeroVector.fields.x))
                         + (float)((float)(v29 - static_fields->zeroVector.fields.y)
                                 * (float)(v29 - static_fields->zeroVector.fields.y)))) >= 1.0e-10 )
      {
        v32 = this->fields.rigidbodyComp;
        *(UnityEngine_Vector3_o *)&v33 = BattleDropHighPosition__get_StartAcceleration(this, v27);
        if ( v32 )
        {
          UnityEngine_Rigidbody__AddForce(v32, *(UnityEngine_Vector3_o *)&v33, 1, 0LL);
          return;
        }
LABEL_23:
        sub_1C2E388(transform, v19);
      }
    }
  }
}


void __fastcall BattleDropHighPosition__StopMoving(BattleDropHighPosition_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct BattleDropHighPositionOverwriteSetting_o **p_overwriteSetting; // x19

  this->fields.overwriteSetting = 0LL;
  p_overwriteSetting = &this->fields.overwriteSetting;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.overwriteSetting, 0LL, v2, v3, v4, v5, v6, v7);
  *((_BYTE *)p_overwriteSetting - 4) = 0;
}


UnityEngine_Vector3_o __fastcall BattleDropHighPosition__get_LocalGravity(
        BattleDropHighPosition_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *overwriteSetting; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  struct BattleDropHighPositionOverwriteSetting_o *v6; // x10
  struct UnityEngine_Vector3_o *p_y; // x8
  float *p_z; // x9
  float *p_x; // x10
  float v10; // s2
  float v11; // s1
  float x; // s0
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4BFFDED & 1) == 0 )
  {
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, method);
    byte_4BFFDED = 1;
  }
  overwriteSetting = (UnityEngine_Object_o *)this->fields.overwriteSetting;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality(overwriteSetting, 0LL, 0LL);
  if ( v4 )
  {
    v6 = this->fields.overwriteSetting;
    if ( !v6 )
      sub_1C2E388(v4, v5);
    p_y = (struct UnityEngine_Vector3_o *)&v6->fields.localGravity.fields.y;
    p_z = &v6->fields.localGravity.fields.z;
    p_x = &v6->fields.startAcceleration.fields.x;
  }
  else
  {
    p_y = &this->fields.localGravity;
    p_z = &this->fields.localGravity.fields.y;
    p_x = &this->fields.localGravity.fields.z;
  }
  v10 = *p_x;
  v11 = *p_z;
  x = p_y->fields.x;
  result.fields.z = v10;
  result.fields.y = v11;
  result.fields.x = x;
  return result;
}


UnityEngine_Vector3_o __fastcall BattleDropHighPosition__get_StartAcceleration(
        BattleDropHighPosition_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *overwriteSetting; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  struct BattleDropHighPositionOverwriteSetting_o *v6; // x10
  struct UnityEngine_Vector3_o *p_y; // x8
  float *p_z; // x9
  float *v9; // x10
  float v10; // s2
  float v11; // s1
  float x; // s0
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4BFFDEE & 1) == 0 )
  {
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, method);
    byte_4BFFDEE = 1;
  }
  overwriteSetting = (UnityEngine_Object_o *)this->fields.overwriteSetting;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality(overwriteSetting, 0LL, 0LL);
  if ( v4 )
  {
    v6 = this->fields.overwriteSetting;
    if ( !v6 )
      sub_1C2E388(v4, v5);
    p_y = (struct UnityEngine_Vector3_o *)&v6->fields.startAcceleration.fields.y;
    p_z = &v6->fields.startAcceleration.fields.z;
    v9 = (float *)&v6[1];
  }
  else
  {
    p_y = &this->fields.startAcceleration;
    p_z = &this->fields.startAcceleration.fields.y;
    v9 = &this->fields.startAcceleration.fields.z;
  }
  v10 = *v9;
  v11 = *p_z;
  x = p_y->fields.x;
  result.fields.z = v10;
  result.fields.y = v11;
  result.fields.x = x;
  return result;
}


UnityEngine_Vector3_o __fastcall BattleDropHighPosition__get_StartPos(
        BattleDropHighPosition_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *overwriteSetting; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  struct BattleDropHighPositionOverwriteSetting_o *v6; // x10
  struct UnityEngine_Vector3_o *p_y; // x8
  float *p_z; // x9
  float *p_x; // x10
  float v10; // s2
  float v11; // s1
  float x; // s0
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4BFFDEC & 1) == 0 )
  {
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, method);
    byte_4BFFDEC = 1;
  }
  overwriteSetting = (UnityEngine_Object_o *)this->fields.overwriteSetting;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality(overwriteSetting, 0LL, 0LL);
  if ( v4 )
  {
    v6 = this->fields.overwriteSetting;
    if ( !v6 )
      sub_1C2E388(v4, v5);
    p_y = (struct UnityEngine_Vector3_o *)&v6->fields.startPos.fields.y;
    p_z = &v6->fields.startPos.fields.z;
    p_x = &v6->fields.localGravity.fields.x;
  }
  else
  {
    p_y = &this->fields.startPos;
    p_z = &this->fields.startPos.fields.y;
    p_x = &this->fields.startPos.fields.z;
  }
  v10 = *p_x;
  v11 = *p_z;
  x = p_y->fields.x;
  result.fields.z = v10;
  result.fields.y = v11;
  result.fields.x = x;
  return result;
}


UnityEngine_GameObject_o *__fastcall BattleDropHighPosition__get_TreasureObj(
        BattleDropHighPosition_o *this,
        const MethodInfo *method)
{
  return this->fields.treasureObj;
}