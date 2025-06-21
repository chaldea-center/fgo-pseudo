void __fastcall TrackingMoveCtCComponent___ctor(TrackingMoveCtCComponent_o *this, const MethodInfo *method)
{
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float z; // s1

  if ( !byte_4B16191 )
  {
    sub_1BCAFF8(&UnityEngine_Vector3_TypeInfo, method);
    byte_4B16191 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  z = static_fields->zeroVector.fields.z;
  *(_QWORD *)&this->fields.addpos.fields.x = *(_QWORD *)&static_fields->zeroVector.fields.x;
  this->fields.addpos.fields.z = z;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Vector3_o __fastcall TrackingMoveCtCComponent__GetAdjustedPosInScreen(
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
  int v12; // s0
  struct AdjustPopupPosInScreenArgument_o *v15; // x8
  float v16; // s1
  float v17; // s2
  float v18; // s0
  UnityEngine_Vector3_o v19; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o AdjustedWorldPos; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  z = currentTargetPos.fields.z;
  y = currentTargetPos.fields.y;
  x = currentTargetPos.fields.x;
  if ( (byte_4B1FB4B & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, method);
    byte_4B1FB4B = 1;
  }
  adjustPosInScreenComp = (UnityEngine_Object_o *)this->fields.adjustPosInScreenComp;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(adjustPosInScreenComp, 0LL, 0LL) )
  {
    adjustPosInScreenArg = this->fields.adjustPosInScreenArg;
    if ( adjustPosInScreenArg )
    {
      v19.fields.x = x;
      v19.fields.y = y;
      v19.fields.z = z;
      AdjustPopupPosInScreenArgument__UpdateTargetWorldPos(adjustPosInScreenArg, v19, 0LL);
      IsOffScreen = this->fields.adjustPosInScreenArg;
      if ( IsOffScreen )
      {
        v11 = this->fields.adjustPosInScreenComp;
        *(UnityEngine_Vector3_o *)&v12 = AdjustPopupPosInScreenArgument__get_ViewPos(IsOffScreen, 0LL);
        if ( v11 )
        {
          IsOffScreen = (AdjustPopupPosInScreenArgument_o *)BattleAdjustPopupPosInScreenComponent__IsOffScreen(
                                                              v11,
                                                              *(UnityEngine_Vector3_o *)&v12,
                                                              0LL);
          if ( ((unsigned __int8)IsOffScreen & 1) != 0 )
          {
            IsOffScreen = (AdjustPopupPosInScreenArgument_o *)this->fields.adjustPosInScreenComp;
            if ( IsOffScreen )
            {
              AdjustedWorldPos = BattleAdjustPopupPosInScreenComponent__GetAdjustedWorldPos(
                                   (BattleAdjustPopupPosInScreenComponent_o *)IsOffScreen,
                                   this->fields.adjustPosInScreenArg,
                                   0LL);
              x = AdjustedWorldPos.fields.x;
              y = AdjustedWorldPos.fields.y;
              z = AdjustedWorldPos.fields.z;
              goto LABEL_14;
            }
          }
          else
          {
            v15 = this->fields.adjustPosInScreenArg;
            if ( v15 )
            {
              x = v15->fields._WorldPos_k__BackingField.fields.x;
              y = v15->fields._WorldPos_k__BackingField.fields.y;
              z = v15->fields._WorldPos_k__BackingField.fields.z;
              goto LABEL_14;
            }
          }
        }
      }
      sub_1BCB254(IsOffScreen, v9);
    }
  }
LABEL_14:
  v16 = y;
  v17 = z;
  v18 = x;
  result.fields.z = v17;
  result.fields.y = v16;
  result.fields.x = v18;
  return result;
}


void __fastcall TrackingMoveCtCComponent__LateUpdate(TrackingMoveCtCComponent_o *this, const MethodInfo *method)
{
  if ( this->fields.updateFlg && this->fields.isLateUpdate )
    TrackingMoveCtCComponent__upDatePos(this, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TrackingMoveCtCComponent__Set(
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
  __int64 v18; // x1
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  __int64 v22; // d0
  float v23; // s1
  int32_t v24; // w2
  const MethodInfo *v25; // x3

  this->fields.before = a;
  z = d.fields.z;
  y = d.fields.y;
  x = d.fields.x;
  v13 = isLate;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.before, (int32_t)a, (int32_t)b, (const MethodInfo *)c);
  this->fields.after = b;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.after, (int32_t)b, v14, v15);
  this->fields.targetObject = c;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.targetObject, (int32_t)c, v16, v17);
  this->fields.addpos.fields.x = x;
  this->fields.addpos.fields.y = y;
  this->fields.addpos.fields.z = z;
  this->fields.isLateUpdate = v13;
  if ( !byte_4B16191 )
  {
    sub_1BCAFF8(&UnityEngine_Vector3_TypeInfo, v18);
    byte_4B16191 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  v22 = *(_QWORD *)&static_fields->zeroVector.fields.x;
  v23 = static_fields->zeroVector.fields.z;
  *(_QWORD *)&this->fields.offset2D.fields.condition = 0LL;
  *(_QWORD *)&this->fields.offset2D.fields.offset.fields.x = v22;
  this->fields.offset2D.fields.offset.fields.z = v23;
  this->fields.adjustPosInScreenComp = 0LL;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.adjustPosInScreenComp, 0, v19, v20);
  this->fields.adjustPosInScreenArg = 0LL;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.adjustPosInScreenArg, 0, v24, v25);
}


void __fastcall TrackingMoveCtCComponent__SetAdjustPosInScreenInfo(
        TrackingMoveCtCComponent_o *this,
        BattleAdjustPopupPosInScreenComponent_o *adjustComp,
        AdjustPopupPosInScreenArgument_o *adjustArg,
        const MethodInfo *method)
{
  UnityEngine_Object_o *targetObject; // x21
  UnityEngine_Object_o *before; // x21
  __int64 v9; // x1
  UnityEngine_GameObject_o *transform; // x0
  UnityEngine_Camera_o *v11; // x21
  struct AdjustPopupPosInScreenArgument_o *v12; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B1FB49 & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, adjustComp);
    byte_4B1FB49 = 1;
  }
  this->fields.adjustPosInScreenComp = adjustComp;
  sub_1BCAF9C(
    (CGThumbnailListItem_o *)&this->fields.adjustPosInScreenComp,
    (int32_t)adjustComp,
    (int32_t)adjustArg,
    method);
  if ( adjustArg )
  {
    targetObject = (UnityEngine_Object_o *)this->fields.targetObject;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(targetObject, 0LL, 0LL) )
    {
      before = (UnityEngine_Object_o *)this->fields.before;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(before, 0LL, 0LL) )
      {
        transform = this->fields.targetObject;
        if ( !transform
          || (v11 = this->fields.before,
              (transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL)) == 0LL) )
        {
          sub_1BCB254(transform, v9);
        }
        position = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)transform, 0LL);
        position.fields.x = position.fields.x + this->fields.addpos.fields.x;
        position.fields.y = position.fields.y + this->fields.addpos.fields.y;
        position.fields.z = position.fields.z + this->fields.addpos.fields.z;
        v12 = AdjustPopupPosInScreenArgument__Init(adjustArg, v11, position, 0LL);
        this->fields.adjustPosInScreenArg = v12;
        sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.adjustPosInScreenArg, (int32_t)v12, v13, v14);
      }
    }
  }
}


void __fastcall TrackingMoveCtCComponent__Update(TrackingMoveCtCComponent_o *this, const MethodInfo *method)
{
  if ( this->fields.updateFlg && !this->fields.isLateUpdate )
    TrackingMoveCtCComponent__upDatePos(this, method);
}


void __fastcall TrackingMoveCtCComponent__startAct(TrackingMoveCtCComponent_o *this, const MethodInfo *method)
{
  this->fields.updateFlg = 1;
  TrackingMoveCtCComponent__upDatePos(this, method);
}


void __fastcall TrackingMoveCtCComponent__stopAct(TrackingMoveCtCComponent_o *this, const MethodInfo *method)
{
  this->fields.updateFlg = 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TrackingMoveCtCComponent__upDatePos(TrackingMoveCtCComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *targetObject; // x20
  __int64 v4; // x1
  UnityEngine_GameObject_o *transform; // x0
  UnityEngine_Camera_o *before; // x20
  const MethodInfo *v7; // x1
  int v8; // s0
  float v11; // s0
  float v12; // s1
  float v13; // s2
  float v14; // s8
  float v15; // s10
  float v16; // s9
  float aspect; // s0
  float v18; // s11
  float v19; // s0
  int32_t condition; // w8
  float v21; // s10
  float x; // s8
  float y; // s9
  float z; // s10
  float conditionValue; // s14
  float v26; // s0
  float v27; // s1
  float v28; // s2
  float v29; // s11
  float v30; // s12
  float v31; // s13
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v33; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v34; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v35; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v36; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B1FB4A & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, method);
    byte_4B1FB4A = 1;
  }
  targetObject = (UnityEngine_Object_o *)this->fields.targetObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(targetObject, 0LL, 0LL) )
  {
    transform = this->fields.targetObject;
    if ( !transform )
      goto LABEL_24;
    before = this->fields.before;
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL);
    if ( !transform )
      goto LABEL_24;
    position = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)transform, 0LL);
    position.fields.x = position.fields.x + this->fields.addpos.fields.x;
    position.fields.y = position.fields.y + this->fields.addpos.fields.y;
    position.fields.z = position.fields.z + this->fields.addpos.fields.z;
    *(UnityEngine_Vector3_o *)&v8 = TrackingMoveCtCComponent__GetAdjustedPosInScreen(this, position, v7);
    if ( !before )
      goto LABEL_24;
    *(UnityEngine_Vector3_o *)&v11 = UnityEngine_Camera__WorldToViewportPoint_69942352(
                                       before,
                                       *(UnityEngine_Vector3_o *)&v8,
                                       0LL);
    transform = (UnityEngine_GameObject_o *)this->fields.before;
    if ( !transform )
      goto LABEL_24;
    v14 = v11;
    v15 = v12;
    v16 = v13;
    aspect = UnityEngine_Camera__get_aspect((UnityEngine_Camera_o *)transform, 0LL);
    transform = (UnityEngine_GameObject_o *)this->fields.after;
    if ( !transform )
      goto LABEL_24;
    v18 = aspect;
    v19 = UnityEngine_Camera__get_aspect((UnityEngine_Camera_o *)transform, 0LL);
    condition = this->fields.offset2D.fields.condition;
    v21 = (float)((float)((float)(v15 + -0.5) / v18) * v19) + 0.5;
    if ( condition == 2 )
    {
      transform = (UnityEngine_GameObject_o *)this->fields.before;
      if ( !transform )
        goto LABEL_24;
      conditionValue = this->fields.offset2D.fields.conditionValue;
      transform = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                (UnityEngine_Component_o *)transform,
                                                0LL);
      if ( !transform )
        goto LABEL_24;
      *(UnityEngine_Vector3_o *)&v26 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)transform, 0LL);
      transform = this->fields.targetObject;
      if ( !transform )
        goto LABEL_24;
      v29 = v26;
      v30 = v27;
      v31 = v28;
      transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL);
      if ( !transform )
        goto LABEL_24;
      v36 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)transform, 0LL);
      if ( (float)(conditionValue * conditionValue) >= (float)((float)((float)(v31 - v36.fields.z)
                                                                     * (float)(v31 - v36.fields.z))
                                                             + (float)((float)((float)(v29 - v36.fields.x)
                                                                             * (float)(v29 - v36.fields.x))
                                                                     + (float)((float)(v30 - v36.fields.y)
                                                                             * (float)(v30 - v36.fields.y)))) )
        goto LABEL_14;
    }
    else if ( condition != 1 )
    {
LABEL_14:
      transform = (UnityEngine_GameObject_o *)this->fields.after;
      if ( transform )
      {
        v33.fields.x = v14;
        v33.fields.y = v21;
        v33.fields.z = v16;
        v34 = UnityEngine_Camera__ViewportToWorldPoint_69942360((UnityEngine_Camera_o *)transform, v33, 0LL);
        x = v34.fields.x;
        y = v34.fields.y;
        z = v34.fields.z;
        transform = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                  (UnityEngine_Component_o *)this,
                                                  0LL);
        if ( transform )
        {
          v35.fields.x = x;
          v35.fields.y = y;
          v35.fields.z = z;
          UnityEngine_Transform__set_position((UnityEngine_Transform_o *)transform, v35, 0LL);
          return;
        }
      }
LABEL_24:
      sub_1BCB254(transform, v4);
    }
    v14 = v14 + this->fields.offset2D.fields.offset.fields.x;
    v21 = v21 + this->fields.offset2D.fields.offset.fields.y;
    v16 = v16 + this->fields.offset2D.fields.offset.fields.z;
    goto LABEL_14;
  }
}