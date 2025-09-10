void BattleDropHighPosition___ctor(BattleDropHighPosition_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void BattleDropHighPosition__FixedUpdate(BattleDropHighPosition_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *treasureObj; // x20
  UnityEngine_Object_o *rigidbodyComp; // x20
  const MethodInfo *v5; // x1
  UnityEngine_GameObject_o *activeSelf; // x0
  _BOOL4 v7; // w20
  UnityEngine_Rigidbody_o *v8; // x20
  UnityEngine_Rigidbody_o *v9; // x20
  UnityEngine_Rigidbody_o *v10; // x20
  UnityEngine_Transform_o *v11; // x20
  struct BattleDropHighPositionOverwriteSetting_o **p_overwriteSetting; // x19
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  UnityEngine_Rigidbody_o *v15; // x19
  UnityEngine_Vector3_o StartAcceleration; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o LocalGravity; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v19; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C29BBE & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C29BBE = 1;
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
      activeSelf = this->fields.treasureObj;
      if ( activeSelf )
      {
        activeSelf = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_activeSelf(activeSelf, 0);
        if ( this->fields.rigidbodyComp )
        {
          v7 = (unsigned __int8)activeSelf & 1;
          UnityEngine_Rigidbody__set_isKinematic(this->fields.rigidbodyComp, !((unsigned __int8)activeSelf & 1), 0);
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
              activeSelf = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                         (UnityEngine_Component_o *)this,
                                                         0);
              if ( activeSelf )
              {
                localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)activeSelf, 0);
                if ( localPosition.fields.y > 0.0 )
                  return;
                v10 = this->fields.rigidbodyComp;
                if ( !byte_4C20DA1 )
                {
                  activeSelf = (UnityEngine_GameObject_o *)sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
                  byte_4C20DA1 = 1;
                }
                if ( v10 )
                {
                  UnityEngine_Rigidbody__set_velocity(v10, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
                  activeSelf = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                             (UnityEngine_Component_o *)this,
                                                             0);
                  if ( activeSelf )
                  {
                    v11 = (UnityEngine_Transform_o *)activeSelf;
                    v19 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)activeSelf, 0);
                    v19.fields.y = 0.0;
                    UnityEngine_Transform__set_localPosition(v11, v19, 0);
                    this->fields.overwriteSetting = 0;
                    p_overwriteSetting = &this->fields.overwriteSetting;
                    sub_1C2D434((CGThumbnailListItem_o *)p_overwriteSetting, 0, v13, v14);
                    *((_BYTE *)p_overwriteSetting - 4) = 0;
                    return;
                  }
                }
              }
            }
          }
          else
          {
            v15 = this->fields.rigidbodyComp;
            if ( !byte_4C20DA1 )
            {
              activeSelf = (UnityEngine_GameObject_o *)sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
              byte_4C20DA1 = 1;
            }
            if ( v15 )
            {
              UnityEngine_Rigidbody__set_velocity(v15, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
              return;
            }
          }
        }
      }
LABEL_30:
      sub_1C2D6EC(activeSelf, v5);
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
  const MethodInfo *v10; // x3
  __int64 naturalAligment; // x10
  UnityEngine_Object_o *treasureObj; // x20
  UnityEngine_Transform_o *transform; // x0
  __int64 v14; // x1
  UnityEngine_Transform_o *v15; // x20
  float v16; // s11
  float v17; // s12
  float v18; // s13
  const MethodInfo *v19; // x1
  UnityEngine_Object_o *rigidbodyComp; // x20
  const MethodInfo *v21; // x1
  const MethodInfo *v22; // x1
  float v23; // s8
  float v24; // s9
  float v25; // s10
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  UnityEngine_Rigidbody_o *v27; // x20
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o StartPos; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o StartAcceleration; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v31; // 0:s0.4,4:s1.4,8:s2.4

  z = pos.fields.z;
  y = pos.fields.y;
  x = pos.fields.x;
  if ( (byte_4C29BBD & 1) == 0 )
  {
    sub_1C2D490(&BattleDropHighPositionOverwriteSetting_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C29BBD = 1;
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
        sub_1C2D434((CGThumbnailListItem_o *)&this->fields.overwriteSetting, (int32_t)scriptableObject, v9, v10);
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
    v15 = transform;
    localPosition = UnityEngine_Transform__get_localPosition(transform, 0);
    v16 = localPosition.fields.x;
    v17 = localPosition.fields.y;
    v18 = localPosition.fields.z;
    StartPos = BattleDropHighPosition__get_StartPos(this, v19);
    StartPos.fields.x = v16 + (float)(x + StartPos.fields.x);
    StartPos.fields.y = v17 + (float)(y + StartPos.fields.y);
    StartPos.fields.z = v18 + (float)(z + StartPos.fields.z);
    UnityEngine_Transform__set_localPosition(v15, StartPos, 0);
    rigidbodyComp = (UnityEngine_Object_o *)this->fields.rigidbodyComp;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(rigidbodyComp, 0, 0) )
    {
      StartAcceleration = BattleDropHighPosition__get_StartAcceleration(this, v21);
      v23 = StartAcceleration.fields.x;
      v24 = StartAcceleration.fields.y;
      v25 = StartAcceleration.fields.z;
      if ( !byte_4C20DA1 )
      {
        sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
        byte_4C20DA1 = 1;
      }
      static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
      if ( (float)((float)((float)(v25 - static_fields->zeroVector.fields.z)
                         * (float)(v25 - static_fields->zeroVector.fields.z))
                 + (float)((float)((float)(v23 - static_fields->zeroVector.fields.x)
                                 * (float)(v23 - static_fields->zeroVector.fields.x))
                         + (float)((float)(v24 - static_fields->zeroVector.fields.y)
                                 * (float)(v24 - static_fields->zeroVector.fields.y)))) >= 1.0e-10 )
      {
        v27 = this->fields.rigidbodyComp;
        v31 = BattleDropHighPosition__get_StartAcceleration(this, v22);
        if ( v27 )
        {
          UnityEngine_Rigidbody__AddForce(v27, v31, 1, 0);
          return;
        }
LABEL_23:
        sub_1C2D6EC(transform, v14);
      }
    }
  }
}


void BattleDropHighPosition__StopMoving(BattleDropHighPosition_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  struct BattleDropHighPositionOverwriteSetting_o **p_overwriteSetting; // x19

  this->fields.overwriteSetting = 0;
  p_overwriteSetting = &this->fields.overwriteSetting;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.overwriteSetting, 0, v2, v3);
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

  if ( (byte_4C29BBB & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C29BBB = 1;
  }
  overwriteSetting = (UnityEngine_Object_o *)this->fields.overwriteSetting;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality(overwriteSetting, 0, 0);
  if ( v4 )
  {
    v6 = this->fields.overwriteSetting;
    if ( !v6 )
      sub_1C2D6EC(v4, v5);
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

  if ( (byte_4C29BBC & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C29BBC = 1;
  }
  overwriteSetting = (UnityEngine_Object_o *)this->fields.overwriteSetting;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality(overwriteSetting, 0, 0);
  if ( v4 )
  {
    v6 = this->fields.overwriteSetting;
    if ( !v6 )
      sub_1C2D6EC(v4, v5);
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

  if ( (byte_4C29BBA & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C29BBA = 1;
  }
  overwriteSetting = (UnityEngine_Object_o *)this->fields.overwriteSetting;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality(overwriteSetting, 0, 0);
  if ( v4 )
  {
    v6 = this->fields.overwriteSetting;
    if ( !v6 )
      sub_1C2D6EC(v4, v5);
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