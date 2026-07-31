void TrackingMoveCtCComponent___ctor(TrackingMoveCtCComponent_o *this, const MethodInfo *method)
{
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float z; // s1

  if ( !byte_5931940 )
  {
    sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
    byte_5931940 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  z = static_fields->zeroVector.fields.z;
  *(_QWORD *)&this->fields.addpos.fields.x = *(_QWORD *)&static_fields->zeroVector.fields.x;
  this->fields.addpos.fields.z = z;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


UnityEngine_Vector3_o TrackingMoveCtCComponent__GetAdjustedPosInScreen(
        TrackingMoveCtCComponent_o *this,
        UnityEngine_Vector3_o currentTargetPos,
        const MethodInfo *method)
{
  float z; // s8
  float y; // s9
  float x; // s10
  UnityEngine_Object_o *adjustPosInScreenComp; // x20
  AdjustPopupPosInScreenArgument_o *adjustPosInScreenArg; // x0
  __int64 v9; // x1
  AdjustPopupPosInScreenArgument_o *IsOffScreen; // x0
  BattleAdjustPopupPosInScreenComponent_o *v11; // x20
  struct AdjustPopupPosInScreenArgument_o *v12; // x8
  float v13; // s1
  float v14; // s2
  float v15; // s0
  UnityEngine_Vector3_o v16; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o ViewPos; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o AdjustedWorldPos; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  z = currentTargetPos.fields.z;
  y = currentTargetPos.fields.y;
  x = currentTargetPos.fields.x;
  if ( (byte_593C1B4 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593C1B4 = 1;
  }
  adjustPosInScreenComp = (UnityEngine_Object_o *)this->fields.adjustPosInScreenComp;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Equality(adjustPosInScreenComp, 0, 0) )
  {
    adjustPosInScreenArg = this->fields.adjustPosInScreenArg;
    if ( adjustPosInScreenArg )
    {
      v16.fields.x = x;
      v16.fields.y = y;
      v16.fields.z = z;
      AdjustPopupPosInScreenArgument__UpdateTargetWorldPos(adjustPosInScreenArg, v16, 0);
      IsOffScreen = this->fields.adjustPosInScreenArg;
      if ( IsOffScreen )
      {
        v11 = this->fields.adjustPosInScreenComp;
        ViewPos = AdjustPopupPosInScreenArgument__get_ViewPos(IsOffScreen, 0);
        if ( v11 )
        {
          IsOffScreen = (AdjustPopupPosInScreenArgument_o *)BattleAdjustPopupPosInScreenComponent__IsOffScreen(
                                                              v11,
                                                              ViewPos,
                                                              0);
          if ( ((unsigned __int8)IsOffScreen & 1) != 0 )
          {
            IsOffScreen = (AdjustPopupPosInScreenArgument_o *)this->fields.adjustPosInScreenComp;
            if ( IsOffScreen )
            {
              AdjustedWorldPos = BattleAdjustPopupPosInScreenComponent__GetAdjustedWorldPos(
                                   (BattleAdjustPopupPosInScreenComponent_o *)IsOffScreen,
                                   this->fields.adjustPosInScreenArg,
                                   0);
              x = AdjustedWorldPos.fields.x;
              y = AdjustedWorldPos.fields.y;
              z = AdjustedWorldPos.fields.z;
              goto LABEL_14;
            }
          }
          else
          {
            v12 = this->fields.adjustPosInScreenArg;
            if ( v12 )
            {
              x = v12->fields._WorldPos_k__BackingField.fields.x;
              y = v12->fields._WorldPos_k__BackingField.fields.y;
              z = v12->fields._WorldPos_k__BackingField.fields.z;
              goto LABEL_14;
            }
          }
        }
      }
      sub_21FFECC(IsOffScreen, v9);
    }
  }
LABEL_14:
  v13 = y;
  v14 = z;
  v15 = x;
  result.fields.z = v14;
  result.fields.y = v13;
  result.fields.x = v15;
  return result;
}


void TrackingMoveCtCComponent__LateUpdate(TrackingMoveCtCComponent_o *this, const MethodInfo *method)
{
  if ( this->fields.updateFlg && this->fields.isLateUpdate )
    TrackingMoveCtCComponent__upDatePos(this, method);
}


void TrackingMoveCtCComponent__Set(
        TrackingMoveCtCComponent_o *this,
        UnityEngine_Camera_o *a,
        UnityEngine_Camera_o *b,
        UnityEngine_GameObject_o *c,
        UnityEngine_Vector3_o d,
        bool isLate,
        const MethodInfo *method)
{
  bool v7; // w6
  bool v8; // w7
  float z; // s8
  float y; // s9
  float x; // s10
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  char v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  char v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  char v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  int v34; // w8
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  __int64 v36; // d0
  float v37; // s1
  System_String_o *v38; // x2
  System_String_o *v39; // x3
  char v40; // w4
  int32_t v41; // w5
  bool v42; // w6
  bool v43; // w7

  z = d.fields.z;
  y = d.fields.y;
  x = d.fields.x;
  this->fields.before = a;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.before,
    (int32_t)a,
    (System_String_o *)b,
    (System_String_o *)c,
    isLate,
    (int32_t)method,
    v7,
    v8);
  this->fields.after = b;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.after, (int32_t)b, v16, v17, v18, v19, v20, v21);
  this->fields.targetObject = c;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.targetObject, (int32_t)c, v22, v23, v24, v25, v26, v27);
  this->fields.addpos.fields.x = x;
  this->fields.addpos.fields.y = y;
  v34 = (unsigned __int8)byte_5931940;
  this->fields.addpos.fields.z = z;
  this->fields.isLateUpdate = isLate;
  if ( !v34 )
  {
    sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
    byte_5931940 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  v36 = *(_QWORD *)&static_fields->zeroVector.fields.x;
  v37 = static_fields->zeroVector.fields.z;
  *(_QWORD *)&this->fields.offset2D.fields.condition = 0;
  this->fields.adjustPosInScreenComp = 0;
  *(_QWORD *)&this->fields.offset2D.fields.offset.fields.x = v36;
  this->fields.offset2D.fields.offset.fields.z = v37;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.adjustPosInScreenComp, 0, v28, v29, v30, v31, v32, v33);
  this->fields.adjustPosInScreenArg = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.adjustPosInScreenArg, 0, v38, v39, v40, v41, v42, v43);
}


void TrackingMoveCtCComponent__SetAdjustPosInScreenInfo(
        TrackingMoveCtCComponent_o *this,
        BattleAdjustPopupPosInScreenComponent_o *adjustComp,
        AdjustPopupPosInScreenArgument_o *adjustArg,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  __int64 v11; // x1
  UnityEngine_Object_o *targetObject; // x21
  __int64 v13; // x1
  UnityEngine_Object_o *before; // x21
  __int64 v15; // x1
  UnityEngine_GameObject_o *transform; // x0
  UnityEngine_Camera_o *v17; // x21
  struct AdjustPopupPosInScreenArgument_o *v18; // x0
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_593C1B2 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593C1B2 = 1;
  }
  this->fields.adjustPosInScreenComp = adjustComp;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.adjustPosInScreenComp,
    (int32_t)adjustComp,
    (System_String_o *)adjustArg,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  if ( adjustArg )
  {
    targetObject = (UnityEngine_Object_o *)this->fields.targetObject;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
    if ( UnityEngine_Object__op_Inequality(targetObject, 0, 0) )
    {
      before = (UnityEngine_Object_o *)this->fields.before;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13);
      if ( UnityEngine_Object__op_Inequality(before, 0, 0) )
      {
        transform = this->fields.targetObject;
        if ( !transform
          || (v17 = this->fields.before,
              (transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0)) == 0) )
        {
          sub_21FFECC(transform, v15);
        }
        position = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)transform, 0);
        position.fields.x = position.fields.x + this->fields.addpos.fields.x;
        position.fields.y = position.fields.y + this->fields.addpos.fields.y;
        position.fields.z = position.fields.z + this->fields.addpos.fields.z;
        v18 = AdjustPopupPosInScreenArgument__Init(adjustArg, v17, position, 0);
        this->fields.adjustPosInScreenArg = v18;
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)&this->fields.adjustPosInScreenArg,
          (int32_t)v18,
          v19,
          v20,
          v21,
          v22,
          v23,
          v24);
      }
    }
  }
}


void TrackingMoveCtCComponent__Update(TrackingMoveCtCComponent_o *this, const MethodInfo *method)
{
  if ( this->fields.updateFlg && !this->fields.isLateUpdate )
    TrackingMoveCtCComponent__upDatePos(this, method);
}


void TrackingMoveCtCComponent__startAct(TrackingMoveCtCComponent_o *this, const MethodInfo *method)
{
  this->fields.updateFlg = 1;
  TrackingMoveCtCComponent__upDatePos(this, method);
}


void TrackingMoveCtCComponent__stopAct(TrackingMoveCtCComponent_o *this, const MethodInfo *method)
{
  this->fields.updateFlg = 0;
}


void TrackingMoveCtCComponent__upDatePos(TrackingMoveCtCComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *targetObject; // x20
  __int64 v4; // x1
  UnityEngine_GameObject_o *transform; // x0
  UnityEngine_Camera_o *before; // x20
  const MethodInfo *v7; // x1
  float x; // s8
  float y; // s10
  float z; // s9
  float aspect; // s0
  float v12; // s11
  float v13; // s0
  int32_t condition; // w8
  float v15; // s10
  float conditionValue; // s14
  float v17; // s11
  float v18; // s12
  float v19; // s13
  float v20; // s8
  float v21; // s9
  float v22; // s10
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o AdjustedPosInScreen; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v25; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v26; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v27; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v28; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v29; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v30; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_593C1B3 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593C1B3 = 1;
  }
  targetObject = (UnityEngine_Object_o *)this->fields.targetObject;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(targetObject, 0, 0) )
  {
    transform = this->fields.targetObject;
    if ( transform )
    {
      before = this->fields.before;
      transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0);
      if ( transform )
      {
        position = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)transform, 0);
        position.fields.x = position.fields.x + this->fields.addpos.fields.x;
        position.fields.y = position.fields.y + this->fields.addpos.fields.y;
        position.fields.z = position.fields.z + this->fields.addpos.fields.z;
        AdjustedPosInScreen = TrackingMoveCtCComponent__GetAdjustedPosInScreen(this, position, v7);
        if ( before )
        {
          v25 = UnityEngine_Camera__WorldToViewportPoint_82984908(before, AdjustedPosInScreen, 0);
          transform = (UnityEngine_GameObject_o *)this->fields.before;
          if ( transform )
          {
            x = v25.fields.x;
            y = v25.fields.y;
            z = v25.fields.z;
            aspect = UnityEngine_Camera__get_aspect((UnityEngine_Camera_o *)transform, 0);
            transform = (UnityEngine_GameObject_o *)this->fields.after;
            if ( transform )
            {
              v12 = aspect;
              v13 = UnityEngine_Camera__get_aspect((UnityEngine_Camera_o *)transform, 0);
              condition = this->fields.offset2D.fields.condition;
              v15 = (float)((float)((float)(y + -0.5) / v12) * v13) + 0.5;
              if ( condition == 1 )
                goto LABEL_18;
              if ( condition == 2 )
              {
                transform = (UnityEngine_GameObject_o *)this->fields.before;
                if ( !transform )
                  goto LABEL_23;
                conditionValue = this->fields.offset2D.fields.conditionValue;
                transform = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                          (UnityEngine_Component_o *)transform,
                                                          0);
                if ( !transform )
                  goto LABEL_23;
                v26 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)transform, 0);
                transform = this->fields.targetObject;
                if ( !transform )
                  goto LABEL_23;
                v17 = v26.fields.x;
                v18 = v26.fields.y;
                v19 = v26.fields.z;
                transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0);
                if ( !transform )
                  goto LABEL_23;
                v27 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)transform, 0);
                if ( (float)(conditionValue * conditionValue) < (float)((float)((float)(v19 - v27.fields.z)
                                                                              * (float)(v19 - v27.fields.z))
                                                                      + (float)((float)((float)(v17 - v27.fields.x)
                                                                                      * (float)(v17 - v27.fields.x))
                                                                              + (float)((float)(v18 - v27.fields.y)
                                                                                      * (float)(v18 - v27.fields.y)))) )
                {
LABEL_18:
                  z = z + this->fields.offset2D.fields.offset.fields.z;
                  x = x + this->fields.offset2D.fields.offset.fields.x;
                  v15 = v15 + this->fields.offset2D.fields.offset.fields.y;
                }
              }
              transform = (UnityEngine_GameObject_o *)this->fields.after;
              if ( transform )
              {
                v28.fields.x = x;
                v28.fields.y = v15;
                v28.fields.z = z;
                v29 = UnityEngine_Camera__ViewportToWorldPoint_82984916((UnityEngine_Camera_o *)transform, v28, 0);
                v20 = v29.fields.x;
                v21 = v29.fields.y;
                v22 = v29.fields.z;
                transform = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                          (UnityEngine_Component_o *)this,
                                                          0);
                if ( transform )
                {
                  v30.fields.x = v20;
                  v30.fields.y = v21;
                  v30.fields.z = v22;
                  UnityEngine_Transform__set_position((UnityEngine_Transform_o *)transform, v30, 0);
                  return;
                }
              }
            }
          }
        }
      }
    }
LABEL_23:
    sub_21FFECC(transform, v4);
  }
}