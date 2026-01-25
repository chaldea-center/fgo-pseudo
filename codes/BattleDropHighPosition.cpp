void BattleDropHighPosition___ctor(BattleDropHighPosition_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void BattleDropHighPosition__FixedUpdate(BattleDropHighPosition_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *treasureObj; // x20
  UnityEngine_Object_o *rigidbodyComp; // x20
  const MethodInfo *v5; // x1
  __int64 activeSelf; // x0
  _BOOL4 v7; // w20
  UnityEngine_Rigidbody_o *v8; // x20
  UnityEngine_Rigidbody_o *v9; // x20
  UnityEngine_Rigidbody_o *v10; // x20
  UnityEngine_Transform_o *v11; // x20
  struct BattleDropHighPositionOverwriteSetting_o **p_overwriteSetting; // x19
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  UnityEngine_Rigidbody_o *v19; // x19
  UnityEngine_Vector3_o StartAcceleration; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o LocalGravity; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v23; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4CF109D & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CF109D = 1;
  }
  treasureObj = (UnityEngine_Object_o *)this->fields.treasureObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(treasureObj, 0, 0) )
  {
    rigidbodyComp = (UnityEngine_Object_o *)this->fields.rigidbodyComp;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(rigidbodyComp, 0, 0) )
    {
      activeSelf = (__int64)this->fields.treasureObj;
      if ( activeSelf )
      {
        activeSelf = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)activeSelf, 0);
        if ( this->fields.rigidbodyComp )
        {
          v7 = activeSelf & 1;
          UnityEngine_Rigidbody__set_isKinematic(this->fields.rigidbodyComp, !(activeSelf & 1), 0);
          if ( this->fields.treasureEnable != v7 )
          {
            this->fields.treasureEnable = v7;
            if ( v7 )
            {
              v8 = this->fields.rigidbodyComp;
              StartAcceleration = BattleDropHighPosition__get_StartAcceleration(this, v5);
              if ( !v8 )
                goto LABEL_30;
              UnityEngine_Rigidbody__AddForce(v8, StartAcceleration, 1, 0);
            }
          }
          if ( this->fields.movingFlag )
          {
            if ( !this->fields.useAcceleration )
              return;
            v9 = this->fields.rigidbodyComp;
            LocalGravity = BattleDropHighPosition__get_LocalGravity(this, v5);
            if ( v9 )
            {
              UnityEngine_Rigidbody__AddForce(v9, LocalGravity, 5, 0);
              activeSelf = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
              if ( activeSelf )
              {
                localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)activeSelf, 0);
                if ( localPosition.fields.y > 0.0 )
                  return;
                v10 = this->fields.rigidbodyComp;
                if ( !byte_4CE7E59 )
                {
                  activeSelf = sub_1C7BAE8(&UnityEngine_Vector3_TypeInfo);
                  byte_4CE7E59 = 1;
                }
                if ( v10 )
                {
                  UnityEngine_Rigidbody__set_velocity(v10, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
                  activeSelf = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
                  if ( activeSelf )
                  {
                    v11 = (UnityEngine_Transform_o *)activeSelf;
                    v23 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)activeSelf, 0);
                    v23.fields.y = 0.0;
                    UnityEngine_Transform__set_localPosition(v11, v23, 0);
                    this->fields.overwriteSetting = 0;
                    p_overwriteSetting = &this->fields.overwriteSetting;
                    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)p_overwriteSetting, 0, v13, v14, v15, v16, v17, v18);
                    *((_BYTE *)p_overwriteSetting - 4) = 0;
                    return;
                  }
                }
              }
            }
          }
          else
          {
            v19 = this->fields.rigidbodyComp;
            if ( !byte_4CE7E59 )
            {
              activeSelf = sub_1C7BAE8(&UnityEngine_Vector3_TypeInfo);
              byte_4CE7E59 = 1;
            }
            if ( v19 )
            {
              UnityEngine_Rigidbody__set_velocity(v19, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
              return;
            }
          }
        }
      }
LABEL_30:
      sub_1C7BD40(activeSelf, v5);
    }
  }
}


void BattleDropHighPosition__Initialize(
        BattleDropHighPosition_o *this,
        UnityEngine_Vector3_o pos,
        UnityEngine_ScriptableObject_o *scriptableObject,
        const MethodInfo *method)
{
  float z; // s8
  float y; // s9
  float x; // s10
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  __int64 naturalAligment; // x10
  UnityEngine_Object_o *treasureObj; // x20
  UnityEngine_Transform_o *transform; // x0
  __int64 v18; // x1
  UnityEngine_Transform_o *v19; // x20
  float v20; // s11
  float v21; // s12
  float v22; // s13
  const MethodInfo *v23; // x1
  UnityEngine_Object_o *rigidbodyComp; // x20
  const MethodInfo *v25; // x1
  const MethodInfo *v26; // x1
  float v27; // s8
  float v28; // s9
  float v29; // s10
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  UnityEngine_Rigidbody_o *v31; // x20
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o StartPos; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o StartAcceleration; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v35; // 0:s0.4,4:s1.4,8:s2.4

  z = pos.fields.z;
  y = pos.fields.y;
  x = pos.fields.x;
  if ( (byte_4CF109C & 1) == 0 )
  {
    sub_1C7BAE8(&BattleDropHighPositionOverwriteSetting_TypeInfo);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CF109C = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)scriptableObject, 0, 0) )
  {
    if ( scriptableObject )
    {
      naturalAligment = BattleDropHighPositionOverwriteSetting_TypeInfo->_2.naturalAligment;
      if ( scriptableObject->klass->_2.naturalAligment >= (unsigned int)naturalAligment
        && (BattleDropHighPositionOverwriteSetting_c *)scriptableObject->klass->_2.typeHierarchy[naturalAligment - 1] == BattleDropHighPositionOverwriteSetting_TypeInfo )
      {
        this->fields.overwriteSetting = (struct BattleDropHighPositionOverwriteSetting_o *)scriptableObject;
        sub_1C7BA8C(
          (GrandQuestFolderBoardItem_o *)&this->fields.overwriteSetting,
          (int32_t)scriptableObject,
          v9,
          v10,
          v11,
          v12,
          v13,
          v14);
      }
    }
  }
  this->fields.movingFlag = 1;
  treasureObj = (UnityEngine_Object_o *)this->fields.treasureObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(treasureObj, 0, 0) )
  {
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    if ( !transform )
      goto LABEL_23;
    v19 = transform;
    localPosition = UnityEngine_Transform__get_localPosition(transform, 0);
    v20 = localPosition.fields.x;
    v21 = localPosition.fields.y;
    v22 = localPosition.fields.z;
    StartPos = BattleDropHighPosition__get_StartPos(this, v23);
    StartPos.fields.x = v20 + (float)(x + StartPos.fields.x);
    StartPos.fields.y = v21 + (float)(y + StartPos.fields.y);
    StartPos.fields.z = v22 + (float)(z + StartPos.fields.z);
    UnityEngine_Transform__set_localPosition(v19, StartPos, 0);
    rigidbodyComp = (UnityEngine_Object_o *)this->fields.rigidbodyComp;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(rigidbodyComp, 0, 0) )
    {
      StartAcceleration = BattleDropHighPosition__get_StartAcceleration(this, v25);
      v27 = StartAcceleration.fields.x;
      v28 = StartAcceleration.fields.y;
      v29 = StartAcceleration.fields.z;
      if ( !byte_4CE7E59 )
      {
        sub_1C7BAE8(&UnityEngine_Vector3_TypeInfo);
        byte_4CE7E59 = 1;
      }
      static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
      if ( (float)((float)((float)(v29 - static_fields->zeroVector.fields.z)
                         * (float)(v29 - static_fields->zeroVector.fields.z))
                 + (float)((float)((float)(v27 - static_fields->zeroVector.fields.x)
                                 * (float)(v27 - static_fields->zeroVector.fields.x))
                         + (float)((float)(v28 - static_fields->zeroVector.fields.y)
                                 * (float)(v28 - static_fields->zeroVector.fields.y)))) >= 1.0e-10 )
      {
        v31 = this->fields.rigidbodyComp;
        v35 = BattleDropHighPosition__get_StartAcceleration(this, v26);
        if ( v31 )
        {
          UnityEngine_Rigidbody__AddForce(v31, v35, 1, 0);
          return;
        }
LABEL_23:
        sub_1C7BD40(transform, v18);
      }
    }
  }
}


void BattleDropHighPosition__StopMoving(BattleDropHighPosition_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct BattleDropHighPositionOverwriteSetting_o **p_overwriteSetting; // x19

  this->fields.overwriteSetting = 0;
  p_overwriteSetting = &this->fields.overwriteSetting;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.overwriteSetting, 0, v2, v3, v4, v5, v6, v7);
  *((_BYTE *)p_overwriteSetting - 4) = 0;
}


UnityEngine_Vector3_o BattleDropHighPosition__get_LocalGravity(
        BattleDropHighPosition_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *overwriteSetting; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  struct BattleDropHighPositionOverwriteSetting_o *v6; // x10
  struct UnityEngine_Vector3_o *p_localGravity; // x8
  float *p_y; // x9
  float *p_z; // x10
  float v10; // s2
  float v11; // s1
  float x; // s0
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4CF109A & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CF109A = 1;
  }
  overwriteSetting = (UnityEngine_Object_o *)this->fields.overwriteSetting;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality(overwriteSetting, 0, 0);
  if ( v4 )
  {
    v6 = this->fields.overwriteSetting;
    if ( !v6 )
      sub_1C7BD40(v4, v5);
    p_localGravity = &v6->fields.localGravity;
    p_y = &v6->fields.localGravity.fields.y;
    p_z = &v6->fields.localGravity.fields.z;
  }
  else
  {
    p_localGravity = &this->fields.localGravity;
    p_y = &this->fields.localGravity.fields.y;
    p_z = &this->fields.localGravity.fields.z;
  }
  v10 = *p_z;
  v11 = *p_y;
  x = p_localGravity->fields.x;
  result.fields.z = v10;
  result.fields.y = v11;
  result.fields.x = x;
  return result;
}


UnityEngine_Vector3_o BattleDropHighPosition__get_StartAcceleration(
        BattleDropHighPosition_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *overwriteSetting; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  struct BattleDropHighPositionOverwriteSetting_o *v6; // x10
  struct UnityEngine_Vector3_o *p_startAcceleration; // x8
  float *p_y; // x9
  float *p_z; // x10
  float v10; // s2
  float v11; // s1
  float x; // s0
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4CF109B & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CF109B = 1;
  }
  overwriteSetting = (UnityEngine_Object_o *)this->fields.overwriteSetting;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality(overwriteSetting, 0, 0);
  if ( v4 )
  {
    v6 = this->fields.overwriteSetting;
    if ( !v6 )
      sub_1C7BD40(v4, v5);
    p_startAcceleration = &v6->fields.startAcceleration;
    p_y = &v6->fields.startAcceleration.fields.y;
    p_z = &v6->fields.startAcceleration.fields.z;
  }
  else
  {
    p_startAcceleration = &this->fields.startAcceleration;
    p_y = &this->fields.startAcceleration.fields.y;
    p_z = &this->fields.startAcceleration.fields.z;
  }
  v10 = *p_z;
  v11 = *p_y;
  x = p_startAcceleration->fields.x;
  result.fields.z = v10;
  result.fields.y = v11;
  result.fields.x = x;
  return result;
}


UnityEngine_Vector3_o BattleDropHighPosition__get_StartPos(BattleDropHighPosition_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *overwriteSetting; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  struct BattleDropHighPositionOverwriteSetting_o *v6; // x10
  struct UnityEngine_Vector3_o *p_startPos; // x8
  float *p_y; // x9
  float *p_z; // x10
  float v10; // s2
  float v11; // s1
  float x; // s0
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4CF1099 & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CF1099 = 1;
  }
  overwriteSetting = (UnityEngine_Object_o *)this->fields.overwriteSetting;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality(overwriteSetting, 0, 0);
  if ( v4 )
  {
    v6 = this->fields.overwriteSetting;
    if ( !v6 )
      sub_1C7BD40(v4, v5);
    p_startPos = &v6->fields.startPos;
    p_y = &v6->fields.startPos.fields.y;
    p_z = &v6->fields.startPos.fields.z;
  }
  else
  {
    p_startPos = &this->fields.startPos;
    p_y = &this->fields.startPos.fields.y;
    p_z = &this->fields.startPos.fields.z;
  }
  v10 = *p_z;
  v11 = *p_y;
  x = p_startPos->fields.x;
  result.fields.z = v10;
  result.fields.y = v11;
  result.fields.x = x;
  return result;
}


UnityEngine_GameObject_o *BattleDropHighPosition__get_TreasureObj(
        BattleDropHighPosition_o *this,
        const MethodInfo *method)
{
  return this->fields.treasureObj;
}