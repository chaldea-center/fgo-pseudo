void TrackingMoveCtCComponent___ctor(TrackingMoveCtCComponent_o *this, const MethodInfo *method)
{
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float z; // s1

  if ( !byte_4C313D1 )
  {
    sub_1C32C20(&UnityEngine_Vector3_TypeInfo);
    byte_4C313D1 = 1;
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
  AdjustPopupPosInScreenArgument_o *IsOffScreen; // x0
  BattleAdjustPopupPosInScreenComponent_o *v10; // x20
  struct AdjustPopupPosInScreenArgument_o *v11; // x8
  float v12; // s1
  float v13; // s2
  float v14; // s0
  UnityEngine_Vector3_o v15; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o ViewPos; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o AdjustedWorldPos; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  z = currentTargetPos.fields.z;
  y = currentTargetPos.fields.y;
  x = currentTargetPos.fields.x;
  if ( (byte_4C3B151 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3B151 = 1;
  }
  adjustPosInScreenComp = (UnityEngine_Object_o *)this->fields.adjustPosInScreenComp;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(adjustPosInScreenComp, 0, 0) )
  {
    adjustPosInScreenArg = this->fields.adjustPosInScreenArg;
    if ( adjustPosInScreenArg )
    {
      v15.fields.x = x;
      v15.fields.y = y;
      v15.fields.z = z;
      AdjustPopupPosInScreenArgument__UpdateTargetWorldPos(adjustPosInScreenArg, v15, 0);
      IsOffScreen = this->fields.adjustPosInScreenArg;
      if ( IsOffScreen )
      {
        v10 = this->fields.adjustPosInScreenComp;
        ViewPos = AdjustPopupPosInScreenArgument__get_ViewPos(IsOffScreen, 0);
        if ( v10 )
        {
          IsOffScreen = (AdjustPopupPosInScreenArgument_o *)BattleAdjustPopupPosInScreenComponent__IsOffScreen(
                                                              v10,
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
            v11 = this->fields.adjustPosInScreenArg;
            if ( v11 )
            {
              x = v11->fields._WorldPos_k__BackingField.fields.x;
              y = v11->fields._WorldPos_k__BackingField.fields.y;
              z = v11->fields._WorldPos_k__BackingField.fields.z;
              goto LABEL_14;
            }
          }
        }
      }
      sub_1C32E7C(IsOffScreen);
    }
  }
LABEL_14:
  v12 = y;
  v13 = z;
  v14 = x;
  result.fields.z = v13;
  result.fields.y = v12;
  result.fields.x = v14;
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
  float z; // s8
  float y; // s9
  float x; // s10
  bool v13; // w22
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  __int64 v21; // d0
  float v22; // s1
  int32_t v23; // w2
  const MethodInfo *v24; // x3

  this->fields.before = a;
  z = d.fields.z;
  y = d.fields.y;
  x = d.fields.x;
  v13 = isLate;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.before, (int32_t)a, (int32_t)b, (const MethodInfo *)c);
  this->fields.after = b;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.after, (int32_t)b, v14, v15);
  this->fields.targetObject = c;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.targetObject, (int32_t)c, v16, v17);
  this->fields.addpos.fields.x = x;
  this->fields.addpos.fields.y = y;
  this->fields.addpos.fields.z = z;
  this->fields.isLateUpdate = v13;
  if ( !byte_4C313D1 )
  {
    sub_1C32C20(&UnityEngine_Vector3_TypeInfo);
    byte_4C313D1 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  v21 = *(_QWORD *)&static_fields->zeroVector.fields.x;
  v22 = static_fields->zeroVector.fields.z;
  *(_QWORD *)&this->fields.offset2D.fields.condition = 0;
  *(_QWORD *)&this->fields.offset2D.fields.offset.fields.x = v21;
  this->fields.offset2D.fields.offset.fields.z = v22;
  this->fields.adjustPosInScreenComp = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.adjustPosInScreenComp, 0, v18, v19);
  this->fields.adjustPosInScreenArg = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.adjustPosInScreenArg, 0, v23, v24);
}


void TrackingMoveCtCComponent__SetAdjustPosInScreenInfo(
        TrackingMoveCtCComponent_o *this,
        BattleAdjustPopupPosInScreenComponent_o *adjustComp,
        AdjustPopupPosInScreenArgument_o *adjustArg,
        const MethodInfo *method)
{
  UnityEngine_Object_o *targetObject; // x21
  UnityEngine_Object_o *before; // x21
  UnityEngine_GameObject_o *transform; // x0
  UnityEngine_Camera_o *v10; // x21
  struct AdjustPopupPosInScreenArgument_o *v11; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C3B14F & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3B14F = 1;
  }
  this->fields.adjustPosInScreenComp = adjustComp;
  sub_1C32BC4(
    (CGThumbnailListItem_o *)&this->fields.adjustPosInScreenComp,
    (int32_t)adjustComp,
    (int32_t)adjustArg,
    method);
  if ( adjustArg )
  {
    targetObject = (UnityEngine_Object_o *)this->fields.targetObject;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(targetObject, 0, 0) )
    {
      before = (UnityEngine_Object_o *)this->fields.before;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(before, 0, 0) )
      {
        transform = this->fields.targetObject;
        if ( !transform
          || (v10 = this->fields.before,
              (transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0)) == 0) )
        {
          sub_1C32E7C(transform);
        }
        position = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)transform, 0);
        position.fields.x = position.fields.x + this->fields.addpos.fields.x;
        position.fields.y = position.fields.y + this->fields.addpos.fields.y;
        position.fields.z = position.fields.z + this->fields.addpos.fields.z;
        v11 = AdjustPopupPosInScreenArgument__Init(adjustArg, v10, position, 0);
        this->fields.adjustPosInScreenArg = v11;
        sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.adjustPosInScreenArg, (int32_t)v11, v12, v13);
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
  UnityEngine_GameObject_o *transform; // x0
  UnityEngine_Camera_o *before; // x20
  const MethodInfo *v6; // x1
  float x; // s8
  float y; // s10
  float z; // s9
  float aspect; // s0
  float v11; // s11
  float v12; // s0
  int32_t condition; // w8
  float v14; // s10
  float v15; // s8
  float v16; // s9
  float v17; // s10
  float conditionValue; // s14
  float v19; // s11
  float v20; // s12
  float v21; // s13
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o AdjustedPosInScreen; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v24; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v25; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v26; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v27; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v28; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v29; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C3B150 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3B150 = 1;
  }
  targetObject = (UnityEngine_Object_o *)this->fields.targetObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(targetObject, 0, 0) )
  {
    transform = this->fields.targetObject;
    if ( !transform )
      goto LABEL_24;
    before = this->fields.before;
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0);
    if ( !transform )
      goto LABEL_24;
    position = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)transform, 0);
    position.fields.x = position.fields.x + this->fields.addpos.fields.x;
    position.fields.y = position.fields.y + this->fields.addpos.fields.y;
    position.fields.z = position.fields.z + this->fields.addpos.fields.z;
    AdjustedPosInScreen = TrackingMoveCtCComponent__GetAdjustedPosInScreen(this, position, v6);
    if ( !before )
      goto LABEL_24;
    v24 = UnityEngine_Camera__WorldToViewportPoint_71029916(before, AdjustedPosInScreen, 0);
    transform = (UnityEngine_GameObject_o *)this->fields.before;
    if ( !transform )
      goto LABEL_24;
    x = v24.fields.x;
    y = v24.fields.y;
    z = v24.fields.z;
    aspect = UnityEngine_Camera__get_aspect((UnityEngine_Camera_o *)transform, 0);
    transform = (UnityEngine_GameObject_o *)this->fields.after;
    if ( !transform )
      goto LABEL_24;
    v11 = aspect;
    v12 = UnityEngine_Camera__get_aspect((UnityEngine_Camera_o *)transform, 0);
    condition = this->fields.offset2D.fields.condition;
    v14 = (float)((float)((float)(y + -0.5) / v11) * v12) + 0.5;
    if ( condition == 2 )
    {
      transform = (UnityEngine_GameObject_o *)this->fields.before;
      if ( !transform )
        goto LABEL_24;
      conditionValue = this->fields.offset2D.fields.conditionValue;
      transform = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                (UnityEngine_Component_o *)transform,
                                                0);
      if ( !transform )
        goto LABEL_24;
      v28 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)transform, 0);
      transform = this->fields.targetObject;
      if ( !transform )
        goto LABEL_24;
      v19 = v28.fields.x;
      v20 = v28.fields.y;
      v21 = v28.fields.z;
      transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0);
      if ( !transform )
        goto LABEL_24;
      v29 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)transform, 0);
      if ( (float)(conditionValue * conditionValue) >= (float)((float)((float)(v21 - v29.fields.z)
                                                                     * (float)(v21 - v29.fields.z))
                                                             + (float)((float)((float)(v19 - v29.fields.x)
                                                                             * (float)(v19 - v29.fields.x))
                                                                     + (float)((float)(v20 - v29.fields.y)
                                                                             * (float)(v20 - v29.fields.y)))) )
        goto LABEL_14;
    }
    else if ( condition != 1 )
    {
LABEL_14:
      transform = (UnityEngine_GameObject_o *)this->fields.after;
      if ( transform )
      {
        v25.fields.x = x;
        v25.fields.y = v14;
        v25.fields.z = z;
        v26 = UnityEngine_Camera__ViewportToWorldPoint_71029924((UnityEngine_Camera_o *)transform, v25, 0);
        v15 = v26.fields.x;
        v16 = v26.fields.y;
        v17 = v26.fields.z;
        transform = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
        if ( transform )
        {
          v27.fields.x = v15;
          v27.fields.y = v16;
          v27.fields.z = v17;
          UnityEngine_Transform__set_position((UnityEngine_Transform_o *)transform, v27, 0);
          return;
        }
      }
LABEL_24:
      sub_1C32E7C(transform);
    }
    x = x + this->fields.offset2D.fields.offset.fields.x;
    v14 = v14 + this->fields.offset2D.fields.offset.fields.y;
    z = z + this->fields.offset2D.fields.offset.fields.z;
    goto LABEL_14;
  }
}