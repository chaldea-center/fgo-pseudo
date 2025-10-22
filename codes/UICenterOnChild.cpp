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
  __int64 v15; // x1
  struct UIScrollView_o *v16; // x8
  UnityEngine_Object_o *mPanel; // x22
  struct UIScrollView_o *v18; // x8
  UnityEngine_Transform_o *v19; // x22
  struct UnityEngine_GameObject_o *gameObject; // x0
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  float v23; // s12
  float v24; // s11
  float v25; // s8
  float v26; // s9
  bool canMoveHorizontally; // w8
  float v28; // s8
  struct UIScrollView_o *v29; // x8
  UnityEngine_GameObject_o *cachedGameObject; // x20
  struct SpringPanel_OnFinished_o *onFinished; // x1
  struct UnityEngine_GameObject_o **p_mCenteredObject; // x0
  struct UICenterOnChild_OnCenterCallback_o *onCenter; // x8
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v35; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v36; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  z = panelCenter.fields.z;
  y = panelCenter.fields.y;
  x = panelCenter.fields.x;
  if ( (byte_4C5B364 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C5B364 = 1;
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
  v16 = this->fields.mScrollView;
  if ( !v16 )
    goto LABEL_33;
  mPanel = (UnityEngine_Object_o *)v16->fields.mPanel;
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
  v18 = this->fields.mScrollView;
  if ( !v18 )
    goto LABEL_33;
  cachedTransform = (UIRect_o *)v18->fields.mPanel;
  if ( !cachedTransform )
    goto LABEL_33;
  cachedTransform = (UIRect_o *)UIRect__get_cachedTransform(cachedTransform, 0);
  if ( !target )
    goto LABEL_33;
  v19 = (UnityEngine_Transform_o *)cachedTransform;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)target, 0);
  this->fields.mCenteredObject = gameObject;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.mCenteredObject, (int32_t)gameObject, v21, v22);
  position = UnityEngine_Transform__get_position(target, 0);
  if ( !v19 )
    goto LABEL_33;
  v35 = UnityEngine_Transform__InverseTransformPoint(v19, position, 0);
  v23 = v35.fields.x;
  v24 = v35.fields.y;
  v35.fields.x = x;
  v35.fields.y = y;
  v35.fields.z = z;
  v36 = UnityEngine_Transform__InverseTransformPoint(v19, v35, 0);
  cachedTransform = (UIRect_o *)this->fields.mScrollView;
  if ( !cachedTransform )
    goto LABEL_33;
  v25 = v36.fields.y;
  v26 = v23 - v36.fields.x;
  canMoveHorizontally = UIScrollView__get_canMoveHorizontally((UIScrollView_o *)cachedTransform, 0);
  cachedTransform = (UIRect_o *)this->fields.mScrollView;
  if ( !canMoveHorizontally )
    v26 = 0.0;
  if ( !cachedTransform )
LABEL_33:
    sub_1C3E7C0(cachedTransform, v15);
  v28 = v24 - v25;
  cachedTransform = (UIRect_o *)UIScrollView__get_canMoveVertically((UIScrollView_o *)cachedTransform, 0);
  if ( ((unsigned __int8)cachedTransform & 1) == 0 )
    v28 = 0.0;
  if ( isFinishAction )
  {
    v29 = this->fields.mScrollView;
    if ( v29 )
    {
      cachedTransform = (UIRect_o *)v29->fields.mPanel;
      if ( cachedTransform )
      {
        cachedGameObject = UIRect__get_cachedGameObject(cachedTransform, 0);
        localPosition = UnityEngine_Transform__get_localPosition(v19, 0);
        localPosition.fields.x = localPosition.fields.x - v26;
        localPosition.fields.y = localPosition.fields.y - v28;
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
          sub_1C3E508((CGThumbnailListItem_o *)p_mCenteredObject, (int32_t)onFinished, v11, v12);
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
void UICenterOnChild__CenterOn_49221928(
        UICenterOnChild_o *this,
        UnityEngine_Transform_o *target,
        bool isFinishAction,
        const MethodInfo *method)
{
  UnityEngine_Object_o *mScrollView; // x22
  float32x2_t *v8; // x0
  __int64 v9; // x1
  struct UIScrollView_o *v10; // x8
  UnityEngine_Object_o *mPanel; // x22
  struct UIScrollView_o *v12; // x8
  const MethodInfo *v13; // x3
  unsigned __int64 v14; // d0 OVERLAPPED
  float v15; // s2
  int v16; // s1

  if ( (byte_4C5B365 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C5B365 = 1;
  }
  mScrollView = (UnityEngine_Object_o *)this->fields.mScrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v8 = (float32x2_t *)UnityEngine_Object__op_Inequality(mScrollView, 0, 0);
  if ( ((unsigned __int8)v8 & 1) != 0 )
  {
    v10 = this->fields.mScrollView;
    if ( !v10 )
      goto LABEL_16;
    mPanel = (UnityEngine_Object_o *)v10->fields.mPanel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v8 = (float32x2_t *)UnityEngine_Object__op_Inequality(mPanel, 0, 0);
    if ( ((unsigned __int8)v8 & 1) != 0 )
    {
      v12 = this->fields.mScrollView;
      if ( v12 )
      {
        v8 = (float32x2_t *)v12->fields.mPanel;
        if ( v8 )
        {
          v8 = (float32x2_t *)(*(__int64 (__fastcall **)(float32x2_t *, _QWORD))(v8->n64_u64[0] + 488))(
                                v8,
                                *(_QWORD *)(v8->n64_u64[0] + 496));
          if ( v8 )
          {
            if ( v8[3].n64_u32[0] <= 2 )
              sub_1C3E7C8(v8, v9);
            v14 = vmul_f32(vadd_f32(v8[7], v8[4]), (float32x2_t)0x3F0000003F000000LL).n64_u64[0];
            v15 = (float)(v8[8].n64_f32[0] + v8[5].n64_f32[0]) * 0.5;
            v16 = HIDWORD(v14);
            UICenterOnChild__CenterOn(this, target, *(UnityEngine_Vector3_o *)&v14, isFinishAction, v13);
            return;
          }
        }
      }
LABEL_16:
      sub_1C3E7C0(v8, v9);
    }
  }
}


bool UICenterOnChild__ExistScrollView(UICenterOnChild_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mScrollView; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  struct UIScrollView_o *v6; // x8
  UnityEngine_Object_o *mPanel; // x19

  if ( (byte_4C5B366 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C5B366 = 1;
  }
  mScrollView = (UnityEngine_Object_o *)this->fields.mScrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality(mScrollView, 0, 0);
  if ( !v4 )
    return 0;
  v6 = this->fields.mScrollView;
  if ( !v6 )
    sub_1C3E7C0(v4, v5);
  mPanel = (UnityEngine_Object_o *)v6->fields.mPanel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  return UnityEngine_Object__op_Inequality(mPanel, 0, 0);
}


void UICenterOnChild__OnDisable(UICenterOnChild_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mScrollView; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  struct UIScrollView_o *v8; // x8

  if ( (byte_4C5B362 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C5B362 = 1;
  }
  mScrollView = (UnityEngine_Object_o *)this->fields.mScrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Implicit(mScrollView, 0);
  if ( v4 )
  {
    v8 = this->fields.mScrollView;
    if ( !v8 )
      sub_1C3E7C0(v4, v5);
    v8->fields.centerOnChild = 0;
    sub_1C3E508((CGThumbnailListItem_o *)&v8->fields.centerOnChild, 0, v6, v7);
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
  __int64 v5; // x1
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  struct UIScrollView_o *v8; // x8

  if ( (byte_4C5B361 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C5B361 = 1;
  }
  mScrollView = (UnityEngine_Object_o *)this->fields.mScrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Implicit(mScrollView, 0);
  if ( v4 )
  {
    v8 = this->fields.mScrollView;
    if ( !v8 )
      sub_1C3E7C0(v4, v5);
    v8->fields.centerOnChild = this;
    sub_1C3E508((CGThumbnailListItem_o *)&v8->fields.centerOnChild, (int32_t)this, v6, v7);
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
  const MethodInfo *v6; // x1
  UnityEngine_GameObject_o *gameObject; // x21
  Il2CppObject *v8; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  UnityEngine_Object_o *v11; // x21
  System_Type_o *Type; // x0
  System_String_o *v13; // x20
  UnityEngine_Object_o *v14; // x21
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  struct UIScrollView_o *v17; // x8
  struct UIScrollView_o *v18; // x21
  CGThumbnailListItem_o *p_onDragFinished; // x21
  System_Delegate_o *onDragFinished; // t1
  UIScrollView_OnDragNotification_o *v21; // x23
  System_Delegate_o *v22; // x0
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  System_Delegate_o *v25; // x8
  UIScrollView_OnDragNotification_c *v26; // x1
  Il2CppType *v27; // x21
  System_RuntimeTypeHandle_o v28; // x0
  System_Type_o *TypeFromHandle; // x0
  System_String_o *v30; // x21
  System_String_o *v31; // x2
  Il2CppObject *v32; // x20
  UnityEngine_Object_o *horizontalScrollBar; // x21
  struct UIProgressBar_o *v34; // x21
  System_Delegate_o *v35; // t1
  UIProgressBar_OnDragFinished_o *v36; // x23
  System_Delegate_o *v37; // x0
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  UIProgressBar_OnDragFinished_c *v40; // x1
  UnityEngine_Object_o *verticalScrollBar; // x21
  struct UIProgressBar_o *v42; // x21
  System_Delegate_o *v43; // t1
  UIProgressBar_OnDragFinished_o *v44; // x23
  System_Delegate_o *v45; // x0
  int32_t v46; // w2
  const MethodInfo *v47; // x3
  UIProgressBar_OnDragFinished_c *v48; // x1
  UnityEngine_Object_o *mPanel; // x21
  UnityEngine_Transform_o *v50; // x22
  float32x2_t *v51; // x8
  float v52; // s5
  float v53; // s6
  float v54; // s8
  float x; // s9
  int32_t childCount; // w0
  const MethodInfo *v57; // x3
  int32_t v58; // w24
  Il2CppObject *Item; // x21
  float v60; // s9
  int32_t v61; // w23
  int v62; // w28
  int32_t v63; // w25
  int v64; // w29
  float v65; // s11
  float32x2_t v66; // d10
  UnityEngine_Transform_o *v67; // x26
  float v68; // v1.s[1]
  float v69; // v1.s[1]
  float v70; // s0
  unsigned __int64 v71; // d1 OVERLAPPED
  UICamera_c *v72; // x0
  UnityEngine_Object_o *mCenteredObject; // x24
  UnityEngine_Object_o *v74; // x24
  UnityEngine_Object_o *Child; // x22
  __int64 v76; // x8
  float v77; // s9
  float v78; // s10
  int32_t movement; // w8
  float v80; // s10
  float v81; // s9
  float v82; // s11
  Il2CppObject *Component_object; // x20
  float nextPageThreshold; // s0
  System_Collections_Generic_List_object__o *v85; // x20
  const MethodInfo_37B5190 *v86; // x2
  Il2CppObject *v87; // x21
  System_Collections_Generic_List_object__o *v88; // x0
  Il2CppObject *v89; // x21
  int v90; // s2
  float v91; // s0
  float z; // [xsp+0h] [xbp-C0h]
  float y; // [xsp+10h] [xbp-B0h]
  float32x2_t panelCenter; // [xsp+20h] [xbp-A0h]
  UnityEngine_Vector3_o velocity; // [xsp+30h] [xbp-90h] BYREF
  UnityEngine_Vector3_o v96; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED
  UnityEngine_Vector3_o v98; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v99; // 0:s4.4,4:s5.4,8:s6.4
  UnityEngine_Quaternion_o rotation; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C5B363 & 1) == 0 )
  {
    sub_1C3E564(&Method_UnityEngine_Component_GetComponent_UIGrid___);
    sub_1C3E564(&Method_UnityEngine_Component_GetComponent_UIWrapContent___);
    sub_1C3E564(&UnityEngine_Debug_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_Transform__get_Count__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Transform__get_Item__);
    sub_1C3E564(&Method_NGUITools_FindInParents_UIScrollView___);
    sub_1C3E564(&NGUITools_TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&UIProgressBar_OnDragFinished_TypeInfo);
    sub_1C3E564(&UIScrollView_OnDragNotification_TypeInfo);
    sub_1C3E564(&System_Type_TypeInfo);
    sub_1C3E564(&UICamera_TypeInfo);
    sub_1C3E564(&Method_UICenterOnChild_OnDragFinished__);
    sub_1C3E564(&UIScrollView_var);
    sub_1C3E564(&StringLiteral_296/*" requires "*/);
    sub_1C3E564(&StringLiteral_289/*" on a parent object in order to work"*/);
    sub_1C3E564(&StringLiteral_9436/*"Next Page Threshold requires a sorted UIGrid in order to work properly"*/);
    byte_4C5B363 = 1;
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
    v8 = NGUITools__FindInParents_object_(
           gameObject,
           (const MethodInfo_3183E10 *)Method_NGUITools_FindInParents_UIScrollView___);
    *p_mScrollView = (struct UIScrollView_o *)v8;
    sub_1C3E508((CGThumbnailListItem_o *)&this->fields.mScrollView, (int32_t)v8, v9, v10);
    v11 = (UnityEngine_Object_o *)*p_mScrollView;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(v11, 0, 0) )
    {
      Type = System_Object__GetType((Il2CppObject *)this, 0);
      if ( Type )
        v13 = (System_String_o *)((__int64 (__fastcall *)(System_Type_o *, const MethodInfo *))Type->klass->vtable._3_ToString.methodPtr)(
                                   Type,
                                   Type->klass->vtable._3_ToString.method);
      else
        v13 = 0;
      v27 = UIScrollView_var;
      if ( !System_Type_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
      v28.fields.value = (intptr_t)v27;
      TypeFromHandle = System_Type__GetTypeFromHandle(v28, 0);
      v30 = (System_String_o *)StringLiteral_296/*" requires "*/;
      if ( TypeFromHandle )
        v31 = (System_String_o *)((__int64 (__fastcall *)(System_Type_o *, const MethodInfo *))TypeFromHandle->klass->vtable._3_ToString.methodPtr)(
                                   TypeFromHandle,
                                   TypeFromHandle->klass->vtable._3_ToString.method);
      else
        v31 = 0;
      v32 = (Il2CppObject *)System_String__Concat_63676720(v13, v30, v31, (System_String_o *)StringLiteral_289/*" on a parent object in order to work"*/, 0);
      if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
      UnityEngine_Debug__LogWarning_71155500(v32, (UnityEngine_Object_o *)this, 0);
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0);
      return;
    }
    v14 = (UnityEngine_Object_o *)*p_mScrollView;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    transform = UnityEngine_Object__op_Implicit(v14, 0);
    if ( (transform & 1) != 0 )
    {
      v17 = *p_mScrollView;
      if ( !*p_mScrollView )
        goto LABEL_135;
      v17->fields.centerOnChild = this;
      sub_1C3E508((CGThumbnailListItem_o *)&v17->fields.centerOnChild, (int32_t)this, v15, v16);
      v18 = this->fields.mScrollView;
      if ( !v18 )
        goto LABEL_135;
      onDragFinished = (System_Delegate_o *)v18->fields.onDragFinished;
      p_onDragFinished = (CGThumbnailListItem_o *)&v18->fields.onDragFinished;
      v21 = (UIScrollView_OnDragNotification_o *)sub_1C3E7B0(UIScrollView_OnDragNotification_TypeInfo);
      UIScrollView_OnDragNotification___ctor(v21, (Il2CppObject *)this, Method_UICenterOnChild_OnDragFinished__, 0);
      v22 = System_Delegate__Combine(onDragFinished, (System_Delegate_o *)v21, 0);
      v25 = v22;
      if ( v22 )
      {
        v26 = UIScrollView_OnDragNotification_TypeInfo;
        if ( (UIScrollView_OnDragNotification_c *)v22->klass != UIScrollView_OnDragNotification_TypeInfo )
          goto LABEL_54;
        p_onDragFinished->klass = (CGThumbnailListItem_c *)v22;
        if ( (UIScrollView_OnDragNotification_c *)v22->klass != v26 )
          goto LABEL_54;
      }
      else
      {
        p_onDragFinished->klass = 0;
      }
      sub_1C3E508(p_onDragFinished, (int32_t)v22, v23, v24);
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
      v34 = (*p_mScrollView)->fields.horizontalScrollBar;
      if ( !v34 )
        goto LABEL_135;
      v35 = (System_Delegate_o *)v34->fields.onDragFinished;
      p_onDragFinished = (CGThumbnailListItem_o *)&v34->fields.onDragFinished;
      v36 = (UIProgressBar_OnDragFinished_o *)sub_1C3E7B0(UIProgressBar_OnDragFinished_TypeInfo);
      UIProgressBar_OnDragFinished___ctor(v36, (Il2CppObject *)this, Method_UICenterOnChild_OnDragFinished__, 0);
      v37 = System_Delegate__Combine(v35, (System_Delegate_o *)v36, 0);
      v25 = v37;
      if ( v37 )
      {
        v40 = UIProgressBar_OnDragFinished_TypeInfo;
        if ( (UIProgressBar_OnDragFinished_c *)v37->klass != UIProgressBar_OnDragFinished_TypeInfo )
          goto LABEL_54;
        p_onDragFinished->klass = (CGThumbnailListItem_c *)v37;
        if ( (UIProgressBar_OnDragFinished_c *)v37->klass != v40 )
          goto LABEL_54;
      }
      else
      {
        p_onDragFinished->klass = 0;
      }
      sub_1C3E508(p_onDragFinished, (int32_t)v37, v38, v39);
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
      v42 = (*p_mScrollView)->fields.verticalScrollBar;
      if ( !v42 )
        goto LABEL_135;
      v43 = (System_Delegate_o *)v42->fields.onDragFinished;
      p_onDragFinished = (CGThumbnailListItem_o *)&v42->fields.onDragFinished;
      v44 = (UIProgressBar_OnDragFinished_o *)sub_1C3E7B0(UIProgressBar_OnDragFinished_TypeInfo);
      UIProgressBar_OnDragFinished___ctor(v44, (Il2CppObject *)this, Method_UICenterOnChild_OnDragFinished__, 0);
      v45 = System_Delegate__Combine(v43, (System_Delegate_o *)v44, 0);
      v25 = v45;
      if ( !v45 )
        goto LABEL_55;
      v48 = UIProgressBar_OnDragFinished_TypeInfo;
      if ( (UIProgressBar_OnDragFinished_c *)v45->klass == UIProgressBar_OnDragFinished_TypeInfo )
      {
        p_onDragFinished->klass = (CGThumbnailListItem_c *)v45;
        if ( (UIProgressBar_OnDragFinished_c *)v45->klass == v48 )
          goto LABEL_56;
      }
LABEL_54:
      sub_1C3EA80(v25);
LABEL_55:
      p_onDragFinished->klass = (CGThumbnailListItem_c *)v25;
LABEL_56:
      sub_1C3E508(p_onDragFinished, (int32_t)v25, v46, v47);
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
    v50 = (UnityEngine_Transform_o *)transform;
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
      sub_1C3E7C8(transform, v6);
    v51 = (float32x2_t *)*p_mScrollView;
    if ( !*p_mScrollView )
LABEL_135:
      sub_1C3E7C0(transform, v6);
    v52 = v51[6].n64_f32[0];
    v53 = v51[25].n64_f32[0];
    v54 = (float)(*(float *)(transform + 56) + *(float *)(transform + 32)) * 0.5;
    panelCenter.n64_u64[0] = vmul_f32(
                               vadd_f32(*(float32x2_t *)(transform + 60), *(float32x2_t *)(transform + 36)),
                               (float32x2_t)0x3F0000003F000000LL).n64_u64[0];
    *(float32x2_t *)&velocity.fields.x = vmul_n_f32(v51[24], v52);
    velocity.fields.z = v53 * v52;
    v96 = NGUIMath__SpringDampen(&velocity, 9.0, 2.0, 0);
    x = v96.fields.x;
    y = v96.fields.y;
    z = v96.fields.z;
    childCount = UnityEngine_Transform__get_childCount(v50, 0);
    if ( childCount >= 1 )
    {
      v58 = childCount;
      Item = 0;
      v60 = v54 + (float)(x * -0.01);
      v61 = 0;
      v62 = 0;
      v63 = 0;
      v64 = 0;
      v65 = 3.4028e38;
      v66.n64_u64[0] = vadd_f32(
                         panelCenter,
                         vmul_f32((float32x2_t)__PAIR64__(LODWORD(z), LODWORD(y)), vdup_n_s32(0xBC23D70A))).n64_u64[0];
      while ( 1 )
      {
        transform = (__int64)UnityEngine_Transform__GetChild(v50, v63, 0);
        if ( !transform )
          goto LABEL_135;
        v67 = (UnityEngine_Transform_o *)transform;
        transform = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0);
        if ( !transform )
          goto LABEL_135;
        if ( UnityEngine_GameObject__get_activeInHierarchy((UnityEngine_GameObject_o *)transform, 0) )
        {
          position = UnityEngine_Transform__get_position(v67, 0);
          v68 = position.fields.z;
          *(float32x2_t *)&position.fields.y = vsub_f32(*(float32x2_t *)&position.fields.y, v66);
          *(float32x2_t *)&position.fields.y = vmul_f32(
                                                 *(float32x2_t *)&position.fields.y,
                                                 *(float32x2_t *)&position.fields.y);
          v70 = v69
              + (float)((float)((float)(position.fields.x - v60) * (float)(position.fields.x - v60)) + position.fields.y);
          if ( v70 < v65 )
          {
            v62 = v64;
            v61 = v63;
            Item = (Il2CppObject *)v67;
            v65 = v70;
          }
          ++v64;
        }
        if ( v58 == ++v63 )
          goto LABEL_79;
      }
    }
    v62 = 0;
    v61 = 0;
    Item = 0;
LABEL_79:
    if ( this->fields.nextPageThreshold <= 0.0 )
      goto LABEL_132;
    v71 = panelCenter.n64_u64[0];
    v72 = UICamera_TypeInfo;
    if ( !UICamera_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
      v71 = panelCenter.n64_u64[0];
      v72 = UICamera_TypeInfo;
    }
    if ( !v72->static_fields->currentTouch )
      goto LABEL_133;
    mCenteredObject = (UnityEngine_Object_o *)this->fields.mCenteredObject;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(mCenteredObject, 0, 0) )
      goto LABEL_132;
    transform = (__int64)this->fields.mCenteredObject;
    if ( !transform )
      goto LABEL_135;
    v74 = (UnityEngine_Object_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)transform, 0);
    Child = (UnityEngine_Object_o *)UnityEngine_Transform__GetChild(v50, v61, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(v74, Child, 0) )
      goto LABEL_132;
    transform = (__int64)UICamera_TypeInfo;
    if ( !UICamera_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
      transform = (__int64)UICamera_TypeInfo;
    }
    v76 = *(_QWORD *)(*(_QWORD *)(transform + 184) + 160LL);
    if ( !v76 )
      goto LABEL_135;
    v77 = *(float *)(v76 + 40);
    v78 = *(float *)(v76 + 44);
    transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    if ( !transform )
      goto LABEL_135;
    rotation = UnityEngine_Transform__get_rotation((UnityEngine_Transform_o *)transform, 0);
    v99.fields.z = 0.0;
    v99.fields.x = v77;
    v99.fields.y = v78;
    v98 = UnityEngine_Quaternion__op_Multiply_71280864(rotation, v99, 0);
    if ( !*p_mScrollView )
      goto LABEL_135;
    movement = (*p_mScrollView)->fields.movement;
    v80 = v98.fields.x;
    if ( movement )
    {
      v81 = v98.fields.y;
      if ( movement != 1 )
      {
        v82 = v98.fields.z;
        if ( !byte_4C506A3 )
        {
          sub_1C3E564(&System_Math_TypeInfo);
          byte_4C506A3 = 1;
        }
        if ( !System_Math_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
        v81 = sqrtf((float)(v82 * v82) + (float)((float)(v80 * v80) + (float)(v81 * v81)));
      }
    }
    else
    {
      v81 = v98.fields.x;
    }
    if ( fabsf(v81) <= this->fields.nextPageThreshold )
      goto LABEL_132;
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)this,
                         (const MethodInfo_30F0240 *)Method_UnityEngine_Component_GetComponent_UIGrid___);
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
      UnityEngine_Debug__LogWarning_71155500((Il2CppObject *)StringLiteral_9436/*"Next Page Threshold requires a sorted UIGrid in order to work properly"*/, (UnityEngine_Object_o *)this, 0);
      goto LABEL_132;
    }
    transform = (__int64)UIGrid__GetChildList((UIGrid_o *)Component_object, v6);
    nextPageThreshold = this->fields.nextPageThreshold;
    v85 = (System_Collections_Generic_List_object__o *)transform;
    if ( v81 <= nextPageThreshold )
    {
      v71 = panelCenter.n64_u64[0];
      if ( v81 >= (float)-nextPageThreshold )
      {
LABEL_133:
        v90 = HIDWORD(v71);
        v91 = v54;
        UICenterOnChild__CenterOn(
          this,
          (UnityEngine_Transform_o *)Item,
          *(UnityEngine_Vector3_o *)((char *)&v71 - 4),
          1,
          v57);
        return;
      }
      if ( !transform )
        goto LABEL_135;
      if ( v62 < *(_DWORD *)(transform + 24) - 1 )
      {
        LODWORD(v6) = v62 + 1;
LABEL_120:
        v86 = (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_Transform__get_Item__;
LABEL_130:
        v88 = v85;
        goto LABEL_131;
      }
      v89 = UnityEngine_Component__GetComponent_object_(
              (UnityEngine_Component_o *)this,
              (const MethodInfo_30F0240 *)Method_UnityEngine_Component_GetComponent_UIWrapContent___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v89, 0, 0) )
      {
LABEL_125:
        v88 = v85;
        LODWORD(v6) = 0;
        v86 = (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_Transform__get_Item__;
LABEL_131:
        Item = System_Collections_Generic_List_object___get_Item(v88, (int32_t)v6, v86);
LABEL_132:
        v71 = panelCenter.n64_u64[0];
        goto LABEL_133;
      }
    }
    else
    {
      v6 = (const MethodInfo *)(unsigned int)(v62 - 1);
      if ( v62 >= 1 )
      {
        if ( !transform )
          goto LABEL_135;
        goto LABEL_120;
      }
      v87 = UnityEngine_Component__GetComponent_object_(
              (UnityEngine_Component_o *)this,
              (const MethodInfo_30F0240 *)Method_UnityEngine_Component_GetComponent_UIWrapContent___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      transform = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v87, 0, 0);
      if ( !v85 )
        goto LABEL_135;
      if ( (transform & 1) != 0 )
        goto LABEL_125;
    }
    LODWORD(v6) = v85->fields._size - 1;
    v86 = (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_Transform__get_Item__;
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
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C3E624(method) & 1) != 0 )
  {
    if ( v8 == 1 )
    {
      v9 = sub_1A8953C;
LABEL_8:
      this->fields.invoke_impl = (intptr_t)v9;
      goto LABEL_9;
    }
  }
  else
  {
    if ( !v8 )
    {
      v9 = sub_1A8951C;
      goto LABEL_8;
    }
    if ( !object )
    {
      v11 = sub_1C3E7DC(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C3E68C(v11, 0);
    }
  }
  m_target = this->fields.m_target;
  this->fields.invoke_impl = this->fields.method_ptr;
  this->fields.method_code = (intptr_t)m_target;
LABEL_9:
  this->fields.extra_arg = (intptr_t)sub_1A894D4;
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
  return (System_IAsyncResult_o *)sub_1C3E518(this, &v6, callback, object);
}


void UICenterOnChild_OnCenterCallback__EndInvoke(
        UICenterOnChild_OnCenterCallback_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C3E51C(result, 0, method);
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