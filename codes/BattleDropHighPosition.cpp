void BattleDropHighPosition___ctor(BattleDropHighPosition_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void BattleDropHighPosition__FixedUpdate(BattleDropHighPosition_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *treasureObj; // x20
  __int64 v4; // x1
  UnityEngine_Object_o *rigidbodyComp; // x20
  const MethodInfo *v6; // x1
  __int64 activeSelf; // x0
  _BOOL4 v8; // w20
  UnityEngine_Rigidbody_o *v9; // x20
  UnityEngine_Rigidbody_o *v10; // x20
  UnityEngine_Rigidbody_o *v11; // x20
  UnityEngine_Transform_o *v12; // x20
  struct BattleDropHighPositionOverwriteSetting_o **p_overwriteSetting; // x19
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  UnityEngine_Rigidbody_o *v20; // x19
  UnityEngine_Vector3_o localPosition; // 0:kr34_12.12
  UnityEngine_Vector3_o StartAcceleration; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o LocalGravity; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v24; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_59733F3 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59733F3 = 1;
  }
  treasureObj = (UnityEngine_Object_o *)this->fields.treasureObj;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Equality(treasureObj, 0, 0) )
  {
    rigidbodyComp = (UnityEngine_Object_o *)this->fields.rigidbodyComp;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
    if ( !UnityEngine_Object__op_Equality(rigidbodyComp, 0, 0) )
    {
      activeSelf = (__int64)this->fields.treasureObj;
      if ( activeSelf )
      {
        activeSelf = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)activeSelf, 0);
        if ( this->fields.rigidbodyComp )
        {
          v8 = activeSelf & 1;
          UnityEngine_Rigidbody__set_isKinematic(this->fields.rigidbodyComp, !(activeSelf & 1), 0);
          if ( this->fields.treasureEnable != v8 )
          {
            this->fields.treasureEnable = v8;
            if ( v8 )
            {
              v9 = this->fields.rigidbodyComp;
              StartAcceleration = BattleDropHighPosition__get_StartAcceleration(this, v6);
              if ( !v9 )
                goto LABEL_30;
              UnityEngine_Rigidbody__AddForce(v9, StartAcceleration, 1, 0);
            }
          }
          if ( this->fields.movingFlag )
          {
            if ( !this->fields.useAcceleration )
              return;
            v10 = this->fields.rigidbodyComp;
            LocalGravity = BattleDropHighPosition__get_LocalGravity(this, v6);
            if ( v10 )
            {
              UnityEngine_Rigidbody__AddForce(v10, LocalGravity, 5, 0);
              activeSelf = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
              if ( activeSelf )
              {
                if ( COERCE_FLOAT(LODWORD(UnityEngine_Transform__get_localPosition(
                                            (UnityEngine_Transform_o *)activeSelf,
                                            0).fields.y)) > 0.0 )
                  return;
                v11 = this->fields.rigidbodyComp;
                if ( !byte_5969AE0 )
                {
                  activeSelf = sub_2213A60(&UnityEngine_Vector3_TypeInfo);
                  byte_5969AE0 = 1;
                }
                if ( v11 )
                {
                  UnityEngine_Rigidbody__set_linearVelocity(
                    v11,
                    UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
                    0);
                  activeSelf = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
                  if ( activeSelf )
                  {
                    v12 = (UnityEngine_Transform_o *)activeSelf;
                    localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)activeSelf, 0);
                    v24.fields.x = localPosition.fields.x;
                    v24.fields.z = localPosition.fields.z;
                    v24.fields.y = 0.0;
                    UnityEngine_Transform__set_localPosition(v12, v24, 0);
                    this->fields.overwriteSetting = 0;
                    p_overwriteSetting = &this->fields.overwriteSetting;
                    sub_2213A04((MissionNaviTransitionBoardItem_o *)p_overwriteSetting, 0, v14, v15, v16, v17, v18, v19);
                    *((_BYTE *)p_overwriteSetting - 4) = 0;
                    return;
                  }
                }
              }
            }
          }
          else
          {
            v20 = this->fields.rigidbodyComp;
            if ( !byte_5969AE0 )
            {
              activeSelf = sub_2213A60(&UnityEngine_Vector3_TypeInfo);
              byte_5969AE0 = 1;
            }
            if ( v20 )
            {
              UnityEngine_Rigidbody__set_linearVelocity(v20, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
              return;
            }
          }
        }
      }
LABEL_30:
      sub_2213CDC(activeSelf, v6);
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
  __int64 v9; // x1
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  __int64 naturalAligment; // x10
  UnityEngine_Object_c *v17; // x0
  UnityEngine_Object_o *treasureObj; // x20
  UnityEngine_Transform_o *transform; // x0
  __int64 v20; // x1
  UnityEngine_Transform_o *v21; // x20
  const MethodInfo *v22; // x1
  __int64 v23; // x1
  UnityEngine_Object_o *rigidbodyComp; // x20
  const MethodInfo *v25; // x1
  const MethodInfo *v26; // x1
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  UnityEngine_Rigidbody_o *v28; // x20
  UnityEngine_Vector3_o localPosition; // 0:kr00_12.12
  UnityEngine_Vector3_o StartPos; // 0:kr14_12.12
  UnityEngine_Vector3_o StartAcceleration; // 0:kr20_12.12
  UnityEngine_Vector3_o v32; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v33; // 0:s0.4,4:s1.4,8:s2.4

  z = pos.fields.z;
  y = pos.fields.y;
  x = pos.fields.x;
  if ( (byte_59733F2 & 1) == 0 )
  {
    sub_2213A60(&BattleDropHighPositionOverwriteSetting_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59733F2 = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, scriptableObject);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)scriptableObject, 0, 0) )
  {
    if ( scriptableObject )
    {
      naturalAligment = BattleDropHighPositionOverwriteSetting_TypeInfo->_2.naturalAligment;
      if ( scriptableObject->klass->_2.naturalAligment >= (unsigned int)naturalAligment
        && (BattleDropHighPositionOverwriteSetting_c *)scriptableObject->klass->_2.typeHierarchy[naturalAligment - 1] == BattleDropHighPositionOverwriteSetting_TypeInfo )
      {
        this->fields.overwriteSetting = (struct BattleDropHighPositionOverwriteSetting_o *)scriptableObject;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&this->fields.overwriteSetting,
          (int32_t)scriptableObject,
          v10,
          v11,
          v12,
          v13,
          v14,
          v15);
      }
    }
  }
  v17 = UnityEngine_Object_TypeInfo;
  treasureObj = (UnityEngine_Object_o *)this->fields.treasureObj;
  this->fields.movingFlag = 1;
  if ( !*(&v17->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v17, v9);
  if ( !UnityEngine_Object__op_Equality(treasureObj, 0, 0) )
  {
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    if ( !transform )
      goto LABEL_23;
    v21 = transform;
    localPosition = UnityEngine_Transform__get_localPosition(transform, 0);
    StartPos = BattleDropHighPosition__get_StartPos(this, v22);
    v32.fields.x = localPosition.fields.x + (float)(x + StartPos.fields.x);
    v32.fields.y = localPosition.fields.y + (float)(y + StartPos.fields.y);
    v32.fields.z = localPosition.fields.z + (float)(z + StartPos.fields.z);
    UnityEngine_Transform__set_localPosition(v21, v32, 0);
    rigidbodyComp = (UnityEngine_Object_o *)this->fields.rigidbodyComp;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v23);
    if ( !UnityEngine_Object__op_Equality(rigidbodyComp, 0, 0) )
    {
      StartAcceleration = BattleDropHighPosition__get_StartAcceleration(this, v25);
      if ( !byte_5969AE0 )
      {
        sub_2213A60(&UnityEngine_Vector3_TypeInfo);
        byte_5969AE0 = 1;
      }
      static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
      if ( (float)((float)((float)(StartAcceleration.fields.z - static_fields->zeroVector.fields.z)
                         * (float)(StartAcceleration.fields.z - static_fields->zeroVector.fields.z))
                 + (float)((float)((float)(StartAcceleration.fields.x - static_fields->zeroVector.fields.x)
                                 * (float)(StartAcceleration.fields.x - static_fields->zeroVector.fields.x))
                         + (float)((float)(StartAcceleration.fields.y - static_fields->zeroVector.fields.y)
                                 * (float)(StartAcceleration.fields.y - static_fields->zeroVector.fields.y)))) >= 1.0e-10 )
      {
        v28 = this->fields.rigidbodyComp;
        v33 = BattleDropHighPosition__get_StartAcceleration(this, v26);
        if ( v28 )
        {
          UnityEngine_Rigidbody__AddForce(v28, v33, 1, 0);
          return;
        }
LABEL_23:
        sub_2213CDC(transform, v20);
      }
    }
  }
}


void BattleDropHighPosition__StopMoving(BattleDropHighPosition_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct BattleDropHighPositionOverwriteSetting_o **p_overwriteSetting; // x19

  this->fields.overwriteSetting = 0;
  p_overwriteSetting = &this->fields.overwriteSetting;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.overwriteSetting, 0, v2, v3, v4, v5, v6, v7);
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
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_59733F0 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59733F0 = 1;
  }
  overwriteSetting = (UnityEngine_Object_o *)this->fields.overwriteSetting;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  v4 = UnityEngine_Object__op_Inequality(overwriteSetting, 0, 0);
  if ( v4 )
  {
    v6 = this->fields.overwriteSetting;
    if ( !v6 )
      sub_2213CDC(v4, v5);
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
  result.fields.z = *p_z;
  result.fields.y = *p_y;
  result.fields.x = p_localGravity->fields.x;
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
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_59733F1 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59733F1 = 1;
  }
  overwriteSetting = (UnityEngine_Object_o *)this->fields.overwriteSetting;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  v4 = UnityEngine_Object__op_Inequality(overwriteSetting, 0, 0);
  if ( v4 )
  {
    v6 = this->fields.overwriteSetting;
    if ( !v6 )
      sub_2213CDC(v4, v5);
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
  result.fields.z = *p_z;
  result.fields.y = *p_y;
  result.fields.x = p_startAcceleration->fields.x;
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
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_59733EF & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59733EF = 1;
  }
  overwriteSetting = (UnityEngine_Object_o *)this->fields.overwriteSetting;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  v4 = UnityEngine_Object__op_Inequality(overwriteSetting, 0, 0);
  if ( v4 )
  {
    v6 = this->fields.overwriteSetting;
    if ( !v6 )
      sub_2213CDC(v4, v5);
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
  result.fields.z = *p_z;
  result.fields.y = *p_y;
  result.fields.x = p_startPos->fields.x;
  return result;
}


UnityEngine_GameObject_o *BattleDropHighPosition__get_TreasureObj(
        BattleDropHighPosition_o *this,
        const MethodInfo *method)
{
  return this->fields.treasureObj;
}