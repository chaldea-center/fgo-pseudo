void UICenterOnChild___ctor(UICenterOnChild_o *this, const MethodInfo *method)
{
  this->fields.springStrength = 8.0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void UICenterOnChild__CenterOn(
        UICenterOnChild_o *this,
        UnityEngine_Transform_o *target,
        UnityEngine_Vector3_o panelCenter,
        bool isFinishAction,
        const MethodInfo *method)
{
  float z; // s8
  float y; // s9
  float x; // s10
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  UnityEngine_Object_o *mScrollView; // x22
  UIRect_o *cachedTransform; // x0
  struct UIScrollView_o *v15; // x8
  UnityEngine_Object_o *mPanel; // x22
  struct UIScrollView_o *v17; // x8
  UnityEngine_Transform_o *v18; // x22
  struct UnityEngine_GameObject_o *gameObject; // x0
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  float v22; // s12
  float v23; // s11
  float v24; // s8
  float v25; // s9
  bool canMoveHorizontally; // w8
  float v27; // s8
  struct UIScrollView_o *v28; // x8
  UnityEngine_GameObject_o *cachedGameObject; // x20
  struct SpringPanel_OnFinished_o *onFinished; // x1
  struct UnityEngine_GameObject_o **p_mCenteredObject; // x0
  struct UICenterOnChild_OnCenterCallback_o *onCenter; // x8
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v34; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v35; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  z = panelCenter.fields.z;
  y = panelCenter.fields.y;
  x = panelCenter.fields.x;
  if ( (byte_4C4756D & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C4756D = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)target, 0, 0) )
    goto LABEL_28;
  mScrollView = (UnityEngine_Object_o *)this->fields.mScrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  cachedTransform = (UIRect_o *)UnityEngine_Object__op_Inequality(mScrollView, 0, 0);
  if ( ((unsigned __int8)cachedTransform & 1) == 0 )
    goto LABEL_28;
  v15 = this->fields.mScrollView;
  if ( !v15 )
    goto LABEL_33;
  mPanel = (UnityEngine_Object_o *)v15->fields.mPanel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  cachedTransform = (UIRect_o *)UnityEngine_Object__op_Inequality(mPanel, 0, 0);
  if ( ((unsigned __int8)cachedTransform & 1) == 0 )
  {
LABEL_28:
    this->fields.mCenteredObject = 0;
    p_mCenteredObject = &this->fields.mCenteredObject;
    LODWORD(onFinished) = 0;
    goto LABEL_29;
  }
  v17 = this->fields.mScrollView;
  if ( !v17 )
    goto LABEL_33;
  cachedTransform = (UIRect_o *)v17->fields.mPanel;
  if ( !cachedTransform )
    goto LABEL_33;
  cachedTransform = (UIRect_o *)UIRect__get_cachedTransform(cachedTransform, 0);
  if ( !target )
    goto LABEL_33;
  v18 = (UnityEngine_Transform_o *)cachedTransform;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)target, 0);
  this->fields.mCenteredObject = gameObject;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.mCenteredObject, (int32_t)gameObject, v20, v21);
  position = UnityEngine_Transform__get_position(target, 0);
  if ( !v18 )
    goto LABEL_33;
  v34 = UnityEngine_Transform__InverseTransformPoint(v18, position, 0);
  v22 = v34.fields.x;
  v23 = v34.fields.y;
  v34.fields.x = x;
  v34.fields.y = y;
  v34.fields.z = z;
  v35 = UnityEngine_Transform__InverseTransformPoint(v18, v34, 0);
  cachedTransform = (UIRect_o *)this->fields.mScrollView;
  if ( !cachedTransform )
    goto LABEL_33;
  v24 = v35.fields.y;
  v25 = v22 - v35.fields.x;
  canMoveHorizontally = UIScrollView__get_canMoveHorizontally((UIScrollView_o *)cachedTransform, 0);
  cachedTransform = (UIRect_o *)this->fields.mScrollView;
  if ( !canMoveHorizontally )
    v25 = 0.0;
  if ( !cachedTransform )
LABEL_33:
    sub_1C372B4(cachedTransform);
  v27 = v23 - v24;
  cachedTransform = (UIRect_o *)UIScrollView__get_canMoveVertically((UIScrollView_o *)cachedTransform, 0);
  if ( ((unsigned __int8)cachedTransform & 1) == 0 )
    v27 = 0.0;
  if ( isFinishAction )
  {
    v28 = this->fields.mScrollView;
    if ( v28 )
    {
      cachedTransform = (UIRect_o *)v28->fields.mPanel;
      if ( cachedTransform )
      {
        cachedGameObject = UIRect__get_cachedGameObject(cachedTransform, 0);
        localPosition = UnityEngine_Transform__get_localPosition(v18, 0);
        localPosition.fields.x = localPosition.fields.x - v25;
        localPosition.fields.y = localPosition.fields.y - v27;
        cachedTransform = (UIRect_o *)SpringPanel__Begin(
                                        cachedGameObject,
                                        localPosition,
                                        this->fields.springStrength,
                                        0);
        if ( cachedTransform )
        {
          onFinished = this->fields.onFinished;
          cachedTransform->fields.bottomAnchor = (struct UIRect_AnchorPoint_o *)onFinished;
          p_mCenteredObject = (struct UnityEngine_GameObject_o **)&cachedTransform->fields.bottomAnchor;
LABEL_29:
          sub_1C36FFC((CGThumbnailListItem_o *)p_mCenteredObject, (int32_t)onFinished, v11, v12);
          goto LABEL_30;
        }
      }
    }
    goto LABEL_33;
  }
LABEL_30:
  onCenter = this->fields.onCenter;
  if ( onCenter )
    ((void (__fastcall *)(intptr_t, struct UnityEngine_GameObject_o *, intptr_t))onCenter->fields.invoke_impl)(
      onCenter->fields.method_code,
      this->fields.mCenteredObject,
      onCenter->fields.method);
}


// local variable allocation has failed, the output may be wrong!
void UICenterOnChild__CenterOn_49148688(
        UICenterOnChild_o *this,
        UnityEngine_Transform_o *target,
        bool isFinishAction,
        const MethodInfo *method)
{
  UnityEngine_Object_o *mScrollView; // x22
  float32x2_t *v8; // x0
  struct UIScrollView_o *v9; // x8
  UnityEngine_Object_o *mPanel; // x22
  struct UIScrollView_o *v11; // x8
  const MethodInfo *v12; // x3
  unsigned __int64 v13; // d0 OVERLAPPED
  float v14; // s2
  int v15; // s1

  if ( (byte_4C4756E & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C4756E = 1;
  }
  mScrollView = (UnityEngine_Object_o *)this->fields.mScrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v8 = (float32x2_t *)UnityEngine_Object__op_Inequality(mScrollView, 0, 0);
  if ( ((unsigned __int8)v8 & 1) != 0 )
  {
    v9 = this->fields.mScrollView;
    if ( !v9 )
      goto LABEL_16;
    mPanel = (UnityEngine_Object_o *)v9->fields.mPanel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v8 = (float32x2_t *)UnityEngine_Object__op_Inequality(mPanel, 0, 0);
    if ( ((unsigned __int8)v8 & 1) != 0 )
    {
      v11 = this->fields.mScrollView;
      if ( v11 )
      {
        v8 = (float32x2_t *)v11->fields.mPanel;
        if ( v8 )
        {
          v8 = (float32x2_t *)(*(__int64 (__fastcall **)(float32x2_t *, _QWORD))(v8->n64_u64[0] + 488))(
                                v8,
                                *(_QWORD *)(v8->n64_u64[0] + 496));
          if ( v8 )
          {
            if ( v8[3].n64_u32[0] <= 2 )
              sub_1C372BC(v8);
            v13 = vmul_f32(vadd_f32(v8[7], v8[4]), (float32x2_t)0x3F0000003F000000LL).n64_u64[0];
            v14 = (float)(v8[8].n64_f32[0] + v8[5].n64_f32[0]) * 0.5;
            v15 = HIDWORD(v13);
            UICenterOnChild__CenterOn(this, target, *(UnityEngine_Vector3_o *)&v13, isFinishAction, v12);
            return;
          }
        }
      }
LABEL_16:
      sub_1C372B4(v8);
    }
  }
}


bool UICenterOnChild__ExistScrollView(UICenterOnChild_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mScrollView; // x20
  _BOOL8 v4; // x0
  struct UIScrollView_o *v5; // x8
  UnityEngine_Object_o *mPanel; // x19

  if ( (byte_4C4756F & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C4756F = 1;
  }
  mScrollView = (UnityEngine_Object_o *)this->fields.mScrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality(mScrollView, 0, 0);
  if ( !v4 )
    return 0;
  v5 = this->fields.mScrollView;
  if ( !v5 )
    sub_1C372B4(v4);
  mPanel = (UnityEngine_Object_o *)v5->fields.mPanel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  return UnityEngine_Object__op_Inequality(mPanel, 0, 0);
}


void UICenterOnChild__OnDisable(UICenterOnChild_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mScrollView; // x20
  _BOOL8 v4; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  struct UIScrollView_o *v7; // x8

  if ( (byte_4C4756B & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C4756B = 1;
  }
  mScrollView = (UnityEngine_Object_o *)this->fields.mScrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Implicit(mScrollView, 0);
  if ( v4 )
  {
    v7 = this->fields.mScrollView;
    if ( !v7 )
      sub_1C372B4(v4);
    v7->fields.centerOnChild = 0;
    sub_1C36FFC((CGThumbnailListItem_o *)&v7->fields.centerOnChild, 0, v5, v6);
  }
}


void UICenterOnChild__OnDragFinished(UICenterOnChild_o *this, const MethodInfo *method)
{
  if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0) )
    ((void (__fastcall *)(UICenterOnChild_o *, const MethodInfo *))this->klass->vtable._4_Recenter.methodPtr)(
      this,
      this->klass->vtable._4_Recenter.method);
}


void UICenterOnChild__OnEnable(UICenterOnChild_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mScrollView; // x20
  _BOOL8 v4; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  struct UIScrollView_o *v7; // x8

  if ( (byte_4C4756A & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C4756A = 1;
  }
  mScrollView = (UnityEngine_Object_o *)this->fields.mScrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Implicit(mScrollView, 0);
  if ( v4 )
  {
    v7 = this->fields.mScrollView;
    if ( !v7 )
      sub_1C372B4(v4);
    v7->fields.centerOnChild = this;
    sub_1C36FFC((CGThumbnailListItem_o *)&v7->fields.centerOnChild, (int32_t)this, v5, v6);
    ((void (__fastcall *)(UICenterOnChild_o *, const MethodInfo *))this->klass->vtable._4_Recenter.methodPtr)(
      this,
      this->klass->vtable._4_Recenter.method);
  }
}


void UICenterOnChild__OnValidate(UICenterOnChild_o *this, const MethodInfo *method)
{
  this->fields.nextPageThreshold = fabsf(this->fields.nextPageThreshold);
}


// local variable allocation has failed, the output may be wrong!
void UICenterOnChild__Recenter(UICenterOnChild_o *this, const MethodInfo *method)
{
  struct UIScrollView_o **p_mScrollView; // x20
  UnityEngine_Object_o *mScrollView; // x21
  __int64 transform; // x0
  UnityEngine_GameObject_o *gameObject; // x21
  Il2CppObject *v7; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  UnityEngine_Object_o *v10; // x21
  System_Type_o *Type; // x0
  System_String_o *v12; // x20
  UnityEngine_Object_o *v13; // x21
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  struct UIScrollView_o *v16; // x8
  struct UIScrollView_o *v17; // x21
  CGThumbnailListItem_o *p_onDragFinished; // x21
  System_Delegate_o *onDragFinished; // t1
  UIScrollView_OnDragNotification_o *v20; // x23
  System_Delegate_o *v21; // x0
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  System_Delegate_o *v24; // x8
  UIScrollView_OnDragNotification_c *v25; // x1
  Il2CppType *v26; // x21
  System_RuntimeTypeHandle_o v27; // x0
  System_Type_o *TypeFromHandle; // x0
  System_String_o *v29; // x21
  System_String_o *v30; // x2
  Il2CppObject *v31; // x20
  UnityEngine_Object_o *horizontalScrollBar; // x21
  struct UIProgressBar_o *v33; // x21
  System_Delegate_o *v34; // t1
  UIProgressBar_OnDragFinished_o *v35; // x23
  System_Delegate_o *v36; // x0
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  UIProgressBar_OnDragFinished_c *v39; // x1
  UnityEngine_Object_o *verticalScrollBar; // x21
  struct UIProgressBar_o *v41; // x21
  System_Delegate_o *v42; // t1
  UIProgressBar_OnDragFinished_o *v43; // x23
  System_Delegate_o *v44; // x0
  int32_t v45; // w2
  const MethodInfo *v46; // x3
  UIProgressBar_OnDragFinished_c *v47; // x1
  UnityEngine_Object_o *mPanel; // x21
  UnityEngine_Transform_o *v49; // x22
  float32x2_t *v50; // x8
  float v51; // s5
  float v52; // s6
  float v53; // s8
  float x; // s9
  int32_t childCount; // w0
  const MethodInfo *v56; // x3
  int32_t v57; // w24
  Il2CppObject *Item; // x21
  float v59; // s9
  int32_t v60; // w23
  int v61; // w28
  int32_t v62; // w25
  int v63; // w29
  float v64; // s11
  float32x2_t v65; // d10
  UnityEngine_Transform_o *v66; // x26
  float v67; // v1.s[1]
  float v68; // v1.s[1]
  float v69; // s0
  unsigned __int64 v70; // d1 OVERLAPPED
  UICamera_c *v71; // x0
  UnityEngine_Object_o *mCenteredObject; // x24
  UnityEngine_Object_o *v73; // x24
  UnityEngine_Object_o *Child; // x22
  __int64 v75; // x8
  float v76; // s9
  float v77; // s10
  int32_t movement; // w8
  float v79; // s10
  float v80; // s9
  float v81; // s11
  Il2CppObject *Component_object; // x20
  const MethodInfo *v83; // x1
  float nextPageThreshold; // s0
  System_Collections_Generic_List_object__o *v85; // x20
  int32_t v86; // w1
  const MethodInfo_37A2D54 *v87; // x2
  Il2CppObject *v88; // x21
  System_Collections_Generic_List_object__o *v89; // x0
  Il2CppObject *v90; // x21
  int v91; // s2
  float v92; // s0
  float z; // [xsp+0h] [xbp-C0h]
  float y; // [xsp+10h] [xbp-B0h]
  float32x2_t panelCenter; // [xsp+20h] [xbp-A0h]
  UnityEngine_Vector3_o velocity; // [xsp+30h] [xbp-90h] BYREF
  UnityEngine_Vector3_o v97; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED
  UnityEngine_Vector3_o v99; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v100; // 0:s4.4,4:s5.4,8:s6.4
  UnityEngine_Quaternion_o rotation; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C4756C & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_Component_GetComponent_UIGrid___);
    sub_1C37058(&Method_UnityEngine_Component_GetComponent_UIWrapContent___);
    sub_1C37058(&UnityEngine_Debug_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_Transform__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_Transform__get_Item__);
    sub_1C37058(&Method_NGUITools_FindInParents_UIScrollView___);
    sub_1C37058(&NGUITools_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&UIProgressBar_OnDragFinished_TypeInfo);
    sub_1C37058(&UIScrollView_OnDragNotification_TypeInfo);
    sub_1C37058(&System_Type_TypeInfo);
    sub_1C37058(&UICamera_TypeInfo);
    sub_1C37058(&Method_UICenterOnChild_OnDragFinished__);
    sub_1C37058(&UIScrollView_var);
    sub_1C37058(&StringLiteral_296/*" requires "*/);
    sub_1C37058(&StringLiteral_289/*" on a parent object in order to work"*/);
    sub_1C37058(&StringLiteral_9436/*"Next Page Threshold requires a sorted UIGrid in order to work properly"*/);
    byte_4C4756C = 1;
  }
  velocity.fields.z = 0.0;
  *(_QWORD *)&velocity.fields.x = 0;
  p_mScrollView = &this->fields.mScrollView;
  mScrollView = (UnityEngine_Object_o *)this->fields.mScrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = UnityEngine_Object__op_Equality(mScrollView, 0, 0);
  if ( (transform & 1) != 0 )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    v7 = NGUITools__FindInParents_object_(
           gameObject,
           (const MethodInfo_3171F1C *)Method_NGUITools_FindInParents_UIScrollView___);
    *p_mScrollView = (struct UIScrollView_o *)v7;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.mScrollView, (int32_t)v7, v8, v9);
    v10 = (UnityEngine_Object_o *)*p_mScrollView;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(v10, 0, 0) )
    {
      Type = System_Object__GetType((Il2CppObject *)this, 0);
      if ( Type )
        v12 = (System_String_o *)((__int64 (__fastcall *)(System_Type_o *, const MethodInfo *))Type->klass->vtable._3_ToString.methodPtr)(
                                   Type,
                                   Type->klass->vtable._3_ToString.method);
      else
        v12 = 0;
      v26 = UIScrollView_var;
      if ( !System_Type_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
      v27.fields.value = (intptr_t)v26;
      TypeFromHandle = System_Type__GetTypeFromHandle(v27, 0);
      v29 = (System_String_o *)StringLiteral_296/*" requires "*/;
      if ( TypeFromHandle )
        v30 = (System_String_o *)((__int64 (__fastcall *)(System_Type_o *, const MethodInfo *))TypeFromHandle->klass->vtable._3_ToString.methodPtr)(
                                   TypeFromHandle,
                                   TypeFromHandle->klass->vtable._3_ToString.method);
      else
        v30 = 0;
      v31 = (Il2CppObject *)System_String__Concat_63601908(v12, v29, v30, (System_String_o *)StringLiteral_289/*" on a parent object in order to work"*/, 0);
      if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
      UnityEngine_Debug__LogWarning_71080688(v31, (UnityEngine_Object_o *)this, 0);
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0);
      return;
    }
    v13 = (UnityEngine_Object_o *)*p_mScrollView;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    transform = UnityEngine_Object__op_Implicit(v13, 0);
    if ( (transform & 1) != 0 )
    {
      v16 = *p_mScrollView;
      if ( !*p_mScrollView )
        goto LABEL_135;
      v16->fields.centerOnChild = this;
      sub_1C36FFC((CGThumbnailListItem_o *)&v16->fields.centerOnChild, (int32_t)this, v14, v15);
      v17 = this->fields.mScrollView;
      if ( !v17 )
        goto LABEL_135;
      onDragFinished = (System_Delegate_o *)v17->fields.onDragFinished;
      p_onDragFinished = (CGThumbnailListItem_o *)&v17->fields.onDragFinished;
      v20 = (UIScrollView_OnDragNotification_o *)sub_1C372A4(UIScrollView_OnDragNotification_TypeInfo);
      UIScrollView_OnDragNotification___ctor(v20, (Il2CppObject *)this, Method_UICenterOnChild_OnDragFinished__, 0);
      v21 = System_Delegate__Combine(onDragFinished, (System_Delegate_o *)v20, 0);
      v24 = v21;
      if ( v21 )
      {
        v25 = UIScrollView_OnDragNotification_TypeInfo;
        if ( (UIScrollView_OnDragNotification_c *)v21->klass != UIScrollView_OnDragNotification_TypeInfo )
          goto LABEL_54;
        p_onDragFinished->klass = (CGThumbnailListItem_c *)v21;
        if ( (UIScrollView_OnDragNotification_c *)v21->klass != v25 )
          goto LABEL_54;
      }
      else
      {
        p_onDragFinished->klass = 0;
      }
      sub_1C36FFC(p_onDragFinished, (int32_t)v21, v22, v23);
    }
    if ( !*p_mScrollView )
      goto LABEL_135;
    horizontalScrollBar = (UnityEngine_Object_o *)(*p_mScrollView)->fields.horizontalScrollBar;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    transform = UnityEngine_Object__op_Inequality(horizontalScrollBar, 0, 0);
    if ( (transform & 1) != 0 )
    {
      if ( !*p_mScrollView )
        goto LABEL_135;
      v33 = (*p_mScrollView)->fields.horizontalScrollBar;
      if ( !v33 )
        goto LABEL_135;
      v34 = (System_Delegate_o *)v33->fields.onDragFinished;
      p_onDragFinished = (CGThumbnailListItem_o *)&v33->fields.onDragFinished;
      v35 = (UIProgressBar_OnDragFinished_o *)sub_1C372A4(UIProgressBar_OnDragFinished_TypeInfo);
      UIProgressBar_OnDragFinished___ctor(v35, (Il2CppObject *)this, Method_UICenterOnChild_OnDragFinished__, 0);
      v36 = System_Delegate__Combine(v34, (System_Delegate_o *)v35, 0);
      v24 = v36;
      if ( v36 )
      {
        v39 = UIProgressBar_OnDragFinished_TypeInfo;
        if ( (UIProgressBar_OnDragFinished_c *)v36->klass != UIProgressBar_OnDragFinished_TypeInfo )
          goto LABEL_54;
        p_onDragFinished->klass = (CGThumbnailListItem_c *)v36;
        if ( (UIProgressBar_OnDragFinished_c *)v36->klass != v39 )
          goto LABEL_54;
      }
      else
      {
        p_onDragFinished->klass = 0;
      }
      sub_1C36FFC(p_onDragFinished, (int32_t)v36, v37, v38);
    }
    if ( !*p_mScrollView )
      goto LABEL_135;
    verticalScrollBar = (UnityEngine_Object_o *)(*p_mScrollView)->fields.verticalScrollBar;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    transform = UnityEngine_Object__op_Inequality(verticalScrollBar, 0, 0);
    if ( (transform & 1) != 0 )
    {
      if ( !*p_mScrollView )
        goto LABEL_135;
      v41 = (*p_mScrollView)->fields.verticalScrollBar;
      if ( !v41 )
        goto LABEL_135;
      v42 = (System_Delegate_o *)v41->fields.onDragFinished;
      p_onDragFinished = (CGThumbnailListItem_o *)&v41->fields.onDragFinished;
      v43 = (UIProgressBar_OnDragFinished_o *)sub_1C372A4(UIProgressBar_OnDragFinished_TypeInfo);
      UIProgressBar_OnDragFinished___ctor(v43, (Il2CppObject *)this, Method_UICenterOnChild_OnDragFinished__, 0);
      v44 = System_Delegate__Combine(v42, (System_Delegate_o *)v43, 0);
      v24 = v44;
      if ( !v44 )
        goto LABEL_55;
      v47 = UIProgressBar_OnDragFinished_TypeInfo;
      if ( (UIProgressBar_OnDragFinished_c *)v44->klass == UIProgressBar_OnDragFinished_TypeInfo )
      {
        p_onDragFinished->klass = (CGThumbnailListItem_c *)v44;
        if ( (UIProgressBar_OnDragFinished_c *)v44->klass == v47 )
          goto LABEL_56;
      }
LABEL_54:
      sub_1C37574(v24);
LABEL_55:
      p_onDragFinished->klass = (CGThumbnailListItem_c *)v24;
LABEL_56:
      sub_1C36FFC(p_onDragFinished, (int32_t)v24, v45, v46);
    }
  }
  if ( !*p_mScrollView )
    goto LABEL_135;
  mPanel = (UnityEngine_Object_o *)(*p_mScrollView)->fields.mPanel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(mPanel, 0, 0) )
  {
    transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    if ( !transform )
      goto LABEL_135;
    v49 = (UnityEngine_Transform_o *)transform;
    transform = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)transform, 0);
    if ( !(_DWORD)transform )
      return;
    if ( !*p_mScrollView )
      goto LABEL_135;
    transform = (__int64)(*p_mScrollView)->fields.mPanel;
    if ( !transform )
      goto LABEL_135;
    transform = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)transform + 488LL))(
                  transform,
                  *(_QWORD *)(*(_QWORD *)transform + 496LL));
    if ( !transform )
      goto LABEL_135;
    if ( *(_DWORD *)(transform + 24) <= 2u )
      sub_1C372BC(transform);
    v50 = (float32x2_t *)*p_mScrollView;
    if ( !*p_mScrollView )
LABEL_135:
      sub_1C372B4(transform);
    v51 = v50[6].n64_f32[0];
    v52 = v50[25].n64_f32[0];
    v53 = (float)(*(float *)(transform + 56) + *(float *)(transform + 32)) * 0.5;
    panelCenter.n64_u64[0] = vmul_f32(
                               vadd_f32(*(float32x2_t *)(transform + 60), *(float32x2_t *)(transform + 36)),
                               (float32x2_t)0x3F0000003F000000LL).n64_u64[0];
    *(float32x2_t *)&velocity.fields.x = vmul_n_f32(v50[24], v51);
    velocity.fields.z = v52 * v51;
    v97 = NGUIMath__SpringDampen(&velocity, 9.0, 2.0, 0);
    x = v97.fields.x;
    y = v97.fields.y;
    z = v97.fields.z;
    childCount = UnityEngine_Transform__get_childCount(v49, 0);
    if ( childCount >= 1 )
    {
      v57 = childCount;
      Item = 0;
      v59 = v53 + (float)(x * -0.01);
      v60 = 0;
      v61 = 0;
      v62 = 0;
      v63 = 0;
      v64 = 3.4028e38;
      v65.n64_u64[0] = vadd_f32(
                         panelCenter,
                         vmul_f32((float32x2_t)__PAIR64__(LODWORD(z), LODWORD(y)), vdup_n_s32(0xBC23D70A))).n64_u64[0];
      while ( 1 )
      {
        transform = (__int64)UnityEngine_Transform__GetChild(v49, v62, 0);
        if ( !transform )
          goto LABEL_135;
        v66 = (UnityEngine_Transform_o *)transform;
        transform = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0);
        if ( !transform )
          goto LABEL_135;
        if ( UnityEngine_GameObject__get_activeInHierarchy((UnityEngine_GameObject_o *)transform, 0) )
        {
          position = UnityEngine_Transform__get_position(v66, 0);
          v67 = position.fields.z;
          *(float32x2_t *)&position.fields.y = vsub_f32(*(float32x2_t *)&position.fields.y, v65);
          *(float32x2_t *)&position.fields.y = vmul_f32(
                                                 *(float32x2_t *)&position.fields.y,
                                                 *(float32x2_t *)&position.fields.y);
          v69 = v68
              + (float)((float)((float)(position.fields.x - v59) * (float)(position.fields.x - v59)) + position.fields.y);
          if ( v69 < v64 )
          {
            v61 = v63;
            v60 = v62;
            Item = (Il2CppObject *)v66;
            v64 = v69;
          }
          ++v63;
        }
        if ( v57 == ++v62 )
          goto LABEL_79;
      }
    }
    v61 = 0;
    v60 = 0;
    Item = 0;
LABEL_79:
    if ( this->fields.nextPageThreshold <= 0.0 )
      goto LABEL_132;
    v70 = panelCenter.n64_u64[0];
    v71 = UICamera_TypeInfo;
    if ( !UICamera_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
      v70 = panelCenter.n64_u64[0];
      v71 = UICamera_TypeInfo;
    }
    if ( !v71->static_fields->currentTouch )
      goto LABEL_133;
    mCenteredObject = (UnityEngine_Object_o *)this->fields.mCenteredObject;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(mCenteredObject, 0, 0) )
      goto LABEL_132;
    transform = (__int64)this->fields.mCenteredObject;
    if ( !transform )
      goto LABEL_135;
    v73 = (UnityEngine_Object_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)transform, 0);
    Child = (UnityEngine_Object_o *)UnityEngine_Transform__GetChild(v49, v60, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(v73, Child, 0) )
      goto LABEL_132;
    transform = (__int64)UICamera_TypeInfo;
    if ( !UICamera_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
      transform = (__int64)UICamera_TypeInfo;
    }
    v75 = *(_QWORD *)(*(_QWORD *)(transform + 184) + 160LL);
    if ( !v75 )
      goto LABEL_135;
    v76 = *(float *)(v75 + 40);
    v77 = *(float *)(v75 + 44);
    transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    if ( !transform )
      goto LABEL_135;
    rotation = UnityEngine_Transform__get_rotation((UnityEngine_Transform_o *)transform, 0);
    v100.fields.z = 0.0;
    v100.fields.x = v76;
    v100.fields.y = v77;
    v99 = UnityEngine_Quaternion__op_Multiply_71206052(rotation, v100, 0);
    if ( !*p_mScrollView )
      goto LABEL_135;
    movement = (*p_mScrollView)->fields.movement;
    v79 = v99.fields.x;
    if ( movement )
    {
      v80 = v99.fields.y;
      if ( movement != 1 )
      {
        v81 = v99.fields.z;
        if ( !byte_4C3C923 )
        {
          sub_1C37058(&System_Math_TypeInfo);
          byte_4C3C923 = 1;
        }
        if ( !System_Math_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
        v80 = sqrtf((float)(v81 * v81) + (float)((float)(v79 * v79) + (float)(v80 * v80)));
      }
    }
    else
    {
      v80 = v99.fields.x;
    }
    if ( fabsf(v80) <= this->fields.nextPageThreshold )
      goto LABEL_132;
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)this,
                         (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_UIGrid___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    transform = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
    if ( (transform & 1) == 0 )
      goto LABEL_139;
    if ( !Component_object )
      goto LABEL_135;
    if ( !HIDWORD(Component_object[2].klass) )
    {
LABEL_139:
      if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
      UnityEngine_Debug__LogWarning_71080688((Il2CppObject *)StringLiteral_9436/*"Next Page Threshold requires a sorted UIGrid in order to work properly"*/, (UnityEngine_Object_o *)this, 0);
      goto LABEL_132;
    }
    transform = (__int64)UIGrid__GetChildList((UIGrid_o *)Component_object, v83);
    nextPageThreshold = this->fields.nextPageThreshold;
    v85 = (System_Collections_Generic_List_object__o *)transform;
    if ( v80 <= nextPageThreshold )
    {
      v70 = panelCenter.n64_u64[0];
      if ( v80 >= (float)-nextPageThreshold )
      {
LABEL_133:
        v91 = HIDWORD(v70);
        v92 = v53;
        UICenterOnChild__CenterOn(
          this,
          (UnityEngine_Transform_o *)Item,
          *(UnityEngine_Vector3_o *)((char *)&v70 - 4),
          1,
          v56);
        return;
      }
      if ( !transform )
        goto LABEL_135;
      if ( v61 < *(_DWORD *)(transform + 24) - 1 )
      {
        v86 = v61 + 1;
LABEL_120:
        v87 = (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_Transform__get_Item__;
LABEL_130:
        v89 = v85;
        goto LABEL_131;
      }
      v90 = UnityEngine_Component__GetComponent_object_(
              (UnityEngine_Component_o *)this,
              (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_UIWrapContent___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v90, 0, 0) )
      {
LABEL_125:
        v89 = v85;
        v86 = 0;
        v87 = (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_Transform__get_Item__;
LABEL_131:
        Item = System_Collections_Generic_List_object___get_Item(v89, v86, v87);
LABEL_132:
        v70 = panelCenter.n64_u64[0];
        goto LABEL_133;
      }
    }
    else
    {
      v86 = v61 - 1;
      if ( v61 >= 1 )
      {
        if ( !transform )
          goto LABEL_135;
        goto LABEL_120;
      }
      v88 = UnityEngine_Component__GetComponent_object_(
              (UnityEngine_Component_o *)this,
              (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_UIWrapContent___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      transform = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v88, 0, 0);
      if ( !v85 )
        goto LABEL_135;
      if ( (transform & 1) != 0 )
        goto LABEL_125;
    }
    v86 = v85->fields._size - 1;
    v87 = (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_Transform__get_Item__;
    goto LABEL_130;
  }
}


void UICenterOnChild__Start(UICenterOnChild_o *this, const MethodInfo *method)
{
  ((void (__fastcall *)(UICenterOnChild_o *, const MethodInfo *))this->klass->vtable._4_Recenter.methodPtr)(
    this,
    this->klass->vtable._4_Recenter.method);
}


UnityEngine_GameObject_o *UICenterOnChild__get_centeredObject(UICenterOnChild_o *this, const MethodInfo *method)
{
  return this->fields.mCenteredObject;
}


void UICenterOnChild_OnCenterCallback___ctor(
        UICenterOnChild_OnCenterCallback_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  intptr_t v4; // x8
  int v8; // w22
  __int64 (__fastcall *v9)(); // x8
  Il2CppObject *m_target; // x9
  __int64 v11; // x0

  v4 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v4;
  this->fields.m_target = object;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C37118(method) & 1) != 0 )
  {
    if ( v8 == 1 )
    {
      v9 = sub_1A82194;
LABEL_8:
      this->fields.invoke_impl = (intptr_t)v9;
      goto LABEL_9;
    }
  }
  else
  {
    if ( !v8 )
    {
      v9 = sub_1A82174;
      goto LABEL_8;
    }
    if ( !object )
    {
      v11 = sub_1C372D0(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C37180(v11, 0);
    }
  }
  m_target = this->fields.m_target;
  this->fields.invoke_impl = this->fields.method_ptr;
  this->fields.method_code = (intptr_t)m_target;
LABEL_9:
  this->fields.extra_arg = (intptr_t)sub_1A8212C;
}


System_IAsyncResult_o *UICenterOnChild_OnCenterCallback__BeginInvoke(
        UICenterOnChild_OnCenterCallback_o *this,
        UnityEngine_GameObject_o *centeredObject,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *v6; // [xsp+0h] [xbp-20h] BYREF

  v6 = centeredObject;
  return (System_IAsyncResult_o *)sub_1C3700C(this, &v6, callback, object);
}


void UICenterOnChild_OnCenterCallback__EndInvoke(
        UICenterOnChild_OnCenterCallback_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C37010(result, 0, method);
}


void UICenterOnChild_OnCenterCallback__Invoke(
        UICenterOnChild_OnCenterCallback_o *this,
        UnityEngine_GameObject_o *centeredObject,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, UnityEngine_GameObject_o *, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    centeredObject,
    this->fields.method);
}