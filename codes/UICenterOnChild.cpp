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
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  UnityEngine_Object_o *mScrollView; // x22
  UIRect_o *cachedTransform; // x0
  __int64 v19; // x1
  struct UIScrollView_o *v20; // x8
  UnityEngine_Object_o *mPanel; // x22
  struct UIScrollView_o *v22; // x8
  UnityEngine_Transform_o *v23; // x22
  struct UnityEngine_GameObject_o *gameObject; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  float v31; // s12
  float v32; // s11
  float v33; // s8
  float v34; // s9
  bool canMoveHorizontally; // w8
  float v36; // s8
  struct UIScrollView_o *v37; // x8
  UnityEngine_GameObject_o *cachedGameObject; // x20
  struct SpringPanel_OnFinished_o *onFinished; // x1
  struct UnityEngine_GameObject_o **p_mCenteredObject; // x0
  struct UICenterOnChild_OnCenterCallback_o *onCenter; // x8
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v43; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v44; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  z = panelCenter.fields.z;
  y = panelCenter.fields.y;
  x = panelCenter.fields.x;
  if ( (byte_4CF2C7E & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CF2C7E = 1;
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
  v20 = this->fields.mScrollView;
  if ( !v20 )
    goto LABEL_33;
  mPanel = (UnityEngine_Object_o *)v20->fields.mPanel;
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
  v22 = this->fields.mScrollView;
  if ( !v22 )
    goto LABEL_33;
  cachedTransform = (UIRect_o *)v22->fields.mPanel;
  if ( !cachedTransform )
    goto LABEL_33;
  cachedTransform = (UIRect_o *)UIRect__get_cachedTransform(cachedTransform, 0);
  if ( !target )
    goto LABEL_33;
  v23 = (UnityEngine_Transform_o *)cachedTransform;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)target, 0);
  this->fields.mCenteredObject = gameObject;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.mCenteredObject,
    (int32_t)gameObject,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  position = UnityEngine_Transform__get_position(target, 0);
  if ( !v23 )
    goto LABEL_33;
  v43 = UnityEngine_Transform__InverseTransformPoint(v23, position, 0);
  v31 = v43.fields.x;
  v32 = v43.fields.y;
  v43.fields.x = x;
  v43.fields.y = y;
  v43.fields.z = z;
  v44 = UnityEngine_Transform__InverseTransformPoint(v23, v43, 0);
  cachedTransform = (UIRect_o *)this->fields.mScrollView;
  if ( !cachedTransform )
    goto LABEL_33;
  v33 = v44.fields.y;
  v34 = v31 - v44.fields.x;
  canMoveHorizontally = UIScrollView__get_canMoveHorizontally((UIScrollView_o *)cachedTransform, 0);
  cachedTransform = (UIRect_o *)this->fields.mScrollView;
  if ( !canMoveHorizontally )
    v34 = 0.0;
  if ( !cachedTransform )
LABEL_33:
    sub_1C7BD40(cachedTransform, v19);
  v36 = v32 - v33;
  cachedTransform = (UIRect_o *)UIScrollView__get_canMoveVertically((UIScrollView_o *)cachedTransform, 0);
  if ( ((unsigned __int8)cachedTransform & 1) == 0 )
    v36 = 0.0;
  if ( isFinishAction )
  {
    v37 = this->fields.mScrollView;
    if ( v37 )
    {
      cachedTransform = (UIRect_o *)v37->fields.mPanel;
      if ( cachedTransform )
      {
        cachedGameObject = UIRect__get_cachedGameObject(cachedTransform, 0);
        localPosition = UnityEngine_Transform__get_localPosition(v23, 0);
        localPosition.fields.x = localPosition.fields.x - v34;
        localPosition.fields.y = localPosition.fields.y - v36;
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
          sub_1C7BA8C(
            (GrandQuestFolderBoardItem_o *)p_mCenteredObject,
            (int32_t)onFinished,
            v11,
            v12,
            v13,
            v14,
            v15,
            v16);
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
void UICenterOnChild__CenterOn_49667568(
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

  if ( (byte_4CF2C7F & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CF2C7F = 1;
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
              sub_1C7BD48(v8);
            v14 = vmul_f32(vadd_f32(v8[7], v8[4]), (float32x2_t)0x3F0000003F000000LL).n64_u64[0];
            v15 = (float)(v8[8].n64_f32[0] + v8[5].n64_f32[0]) * 0.5;
            v16 = HIDWORD(v14);
            UICenterOnChild__CenterOn(this, target, *(UnityEngine_Vector3_o *)&v14, isFinishAction, v13);
            return;
          }
        }
      }
LABEL_16:
      sub_1C7BD40(v8, v9);
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

  if ( (byte_4CF2C80 & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CF2C80 = 1;
  }
  mScrollView = (UnityEngine_Object_o *)this->fields.mScrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality(mScrollView, 0, 0);
  if ( !v4 )
    return 0;
  v6 = this->fields.mScrollView;
  if ( !v6 )
    sub_1C7BD40(v4, v5);
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
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  struct UIScrollView_o *v12; // x8

  if ( (byte_4CF2C7C & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CF2C7C = 1;
  }
  mScrollView = (UnityEngine_Object_o *)this->fields.mScrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Implicit(mScrollView, 0);
  if ( v4 )
  {
    v12 = this->fields.mScrollView;
    if ( !v12 )
      sub_1C7BD40(v4, v5);
    v12->fields.centerOnChild = 0;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v12->fields.centerOnChild, 0, v6, v7, v8, v9, v10, v11);
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
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  struct UIScrollView_o *v12; // x8

  if ( (byte_4CF2C7B & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CF2C7B = 1;
  }
  mScrollView = (UnityEngine_Object_o *)this->fields.mScrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Implicit(mScrollView, 0);
  if ( v4 )
  {
    v12 = this->fields.mScrollView;
    if ( !v12 )
      sub_1C7BD40(v4, v5);
    v12->fields.centerOnChild = this;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v12->fields.centerOnChild, (int32_t)this, v6, v7, v8, v9, v10, v11);
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
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  UnityEngine_Object_o *v15; // x21
  System_Type_o *Type; // x0
  System_String_o *v17; // x20
  UnityEngine_Object_o *v18; // x21
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  struct UIScrollView_o *v25; // x8
  struct UIScrollView_o *v26; // x21
  GrandQuestFolderBoardItem_o *p_onDragFinished; // x21
  System_Delegate_o *onDragFinished; // t1
  UIScrollView_OnDragNotification_o *v29; // x23
  System_Delegate_o *v30; // x0
  int32_t v31; // w2
  int32_t v32; // w3
  System_String_o *v33; // x4
  int32_t v34; // w5
  int64_t v35; // x6
  System_String_o *v36; // x7
  System_Delegate_o *v37; // x8
  UIScrollView_OnDragNotification_c *v38; // x1
  Il2CppType *v39; // x21
  System_RuntimeTypeHandle_o v40; // x0
  System_Type_o *TypeFromHandle; // x0
  System_String_o *v42; // x21
  System_String_o *v43; // x2
  Il2CppObject *v44; // x20
  UnityEngine_Object_o *horizontalScrollBar; // x21
  struct UIProgressBar_o *v46; // x21
  System_Delegate_o *v47; // t1
  UIProgressBar_OnDragFinished_o *v48; // x23
  System_Delegate_o *v49; // x0
  int32_t v50; // w2
  int32_t v51; // w3
  System_String_o *v52; // x4
  int32_t v53; // w5
  int64_t v54; // x6
  System_String_o *v55; // x7
  UIProgressBar_OnDragFinished_c *v56; // x1
  UnityEngine_Object_o *verticalScrollBar; // x21
  struct UIProgressBar_o *v58; // x21
  System_Delegate_o *v59; // t1
  UIProgressBar_OnDragFinished_o *v60; // x23
  System_Delegate_o *v61; // x0
  int32_t v62; // w2
  int32_t v63; // w3
  System_String_o *v64; // x4
  int32_t v65; // w5
  int64_t v66; // x6
  System_String_o *v67; // x7
  UIProgressBar_OnDragFinished_c *v68; // x1
  UnityEngine_Object_o *mPanel; // x21
  UnityEngine_Transform_o *v70; // x22
  float32x2_t *v71; // x8
  float v72; // s5
  float v73; // s6
  float v74; // s8
  float x; // s9
  int32_t childCount; // w0
  const MethodInfo *v77; // x3
  int32_t v78; // w24
  Il2CppObject *Item; // x21
  float v80; // s9
  int32_t v81; // w23
  int v82; // w28
  int32_t v83; // w25
  int v84; // w29
  float v85; // s11
  float32x2_t v86; // d10
  UnityEngine_Transform_o *v87; // x26
  float v88; // v1.s[1]
  float v89; // v1.s[1]
  float v90; // s0
  unsigned __int64 v91; // d1 OVERLAPPED
  UICamera_c *v92; // x0
  UnityEngine_Object_o *mCenteredObject; // x24
  UnityEngine_Object_o *v94; // x24
  UnityEngine_Object_o *Child; // x22
  __int64 v96; // x8
  float v97; // s9
  float v98; // s10
  int32_t movement; // w8
  float v100; // s10
  float v101; // s9
  float v102; // s11
  Il2CppObject *Component_object; // x20
  float nextPageThreshold; // s0
  System_Collections_Generic_List_object__o *v105; // x20
  const MethodInfo_383EB2C *v106; // x2
  Il2CppObject *v107; // x21
  System_Collections_Generic_List_object__o *v108; // x0
  Il2CppObject *v109; // x21
  int v110; // s2
  float v111; // s0
  float z; // [xsp+0h] [xbp-C0h]
  float y; // [xsp+10h] [xbp-B0h]
  float32x2_t panelCenter; // [xsp+20h] [xbp-A0h]
  UnityEngine_Vector3_o velocity; // [xsp+30h] [xbp-90h] BYREF
  UnityEngine_Vector3_o v116; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED
  UnityEngine_Vector3_o v118; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v119; // 0:s4.4,4:s5.4,8:s6.4
  UnityEngine_Quaternion_o rotation; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4CF2C7D & 1) == 0 )
  {
    sub_1C7BAE8(&Method_UnityEngine_Component_GetComponent_UIGrid___);
    sub_1C7BAE8(&Method_UnityEngine_Component_GetComponent_UIWrapContent___);
    sub_1C7BAE8(&UnityEngine_Debug_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Transform__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Transform__get_Item__);
    sub_1C7BAE8(&Method_NGUITools_FindInParents_UIScrollView___);
    sub_1C7BAE8(&NGUITools_TypeInfo);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&UIProgressBar_OnDragFinished_TypeInfo);
    sub_1C7BAE8(&UIScrollView_OnDragNotification_TypeInfo);
    sub_1C7BAE8(&System_Type_TypeInfo);
    sub_1C7BAE8(&UICamera_TypeInfo);
    sub_1C7BAE8(&Method_UICenterOnChild_OnDragFinished__);
    sub_1C7BAE8(&UIScrollView_var);
    sub_1C7BAE8(&StringLiteral_297/*" requires "*/);
    sub_1C7BAE8(&StringLiteral_290/*" on a parent object in order to work"*/);
    sub_1C7BAE8(&StringLiteral_9462/*"Next Page Threshold requires a sorted UIGrid in order to work properly"*/);
    byte_4CF2C7D = 1;
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
           (const MethodInfo_31F9E0C *)Method_NGUITools_FindInParents_UIScrollView___);
    *p_mScrollView = (struct UIScrollView_o *)v8;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.mScrollView, (int32_t)v8, v9, v10, v11, v12, v13, v14);
    v15 = (UnityEngine_Object_o *)*p_mScrollView;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(v15, 0, 0) )
    {
      Type = System_Object__GetType((Il2CppObject *)this, 0);
      if ( Type )
        v17 = (System_String_o *)((__int64 (__fastcall *)(System_Type_o *, const MethodInfo *))Type->klass->vtable._3_ToString.methodPtr)(
                                   Type,
                                   Type->klass->vtable._3_ToString.method);
      else
        v17 = 0;
      v39 = UIScrollView_var;
      if ( !System_Type_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
      v40.fields.value = (intptr_t)v39;
      TypeFromHandle = System_Type__GetTypeFromHandle(v40, 0);
      v42 = (System_String_o *)StringLiteral_297/*" requires "*/;
      if ( TypeFromHandle )
        v43 = (System_String_o *)((__int64 (__fastcall *)(System_Type_o *, const MethodInfo *))TypeFromHandle->klass->vtable._3_ToString.methodPtr)(
                                   TypeFromHandle,
                                   TypeFromHandle->klass->vtable._3_ToString.method);
      else
        v43 = 0;
      v44 = (Il2CppObject *)System_String__Concat_64217180(v17, v42, v43, (System_String_o *)StringLiteral_290/*" on a parent object in order to work"*/, 0);
      if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
      UnityEngine_Debug__LogWarning_71683224(v44, (UnityEngine_Object_o *)this, 0);
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0);
      return;
    }
    v18 = (UnityEngine_Object_o *)*p_mScrollView;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    transform = UnityEngine_Object__op_Implicit(v18, 0);
    if ( (transform & 1) != 0 )
    {
      v25 = *p_mScrollView;
      if ( !*p_mScrollView )
        goto LABEL_135;
      v25->fields.centerOnChild = this;
      sub_1C7BA8C(
        (GrandQuestFolderBoardItem_o *)&v25->fields.centerOnChild,
        (int32_t)this,
        v19,
        v20,
        v21,
        v22,
        v23,
        v24);
      v26 = this->fields.mScrollView;
      if ( !v26 )
        goto LABEL_135;
      onDragFinished = (System_Delegate_o *)v26->fields.onDragFinished;
      p_onDragFinished = (GrandQuestFolderBoardItem_o *)&v26->fields.onDragFinished;
      v29 = (UIScrollView_OnDragNotification_o *)sub_1C7BD34(UIScrollView_OnDragNotification_TypeInfo);
      UIScrollView_OnDragNotification___ctor(v29, (Il2CppObject *)this, Method_UICenterOnChild_OnDragFinished__, 0);
      v30 = System_Delegate__Combine(onDragFinished, (System_Delegate_o *)v29, 0);
      v37 = v30;
      if ( v30 )
      {
        v38 = UIScrollView_OnDragNotification_TypeInfo;
        if ( (UIScrollView_OnDragNotification_c *)v30->klass != UIScrollView_OnDragNotification_TypeInfo )
          goto LABEL_54;
        p_onDragFinished->klass = (GrandQuestFolderBoardItem_c *)v30;
        if ( (UIScrollView_OnDragNotification_c *)v30->klass != v38 )
          goto LABEL_54;
      }
      else
      {
        p_onDragFinished->klass = 0;
      }
      sub_1C7BA8C(p_onDragFinished, (int32_t)v30, v31, v32, v33, v34, v35, v36);
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
      v46 = (*p_mScrollView)->fields.horizontalScrollBar;
      if ( !v46 )
        goto LABEL_135;
      v47 = (System_Delegate_o *)v46->fields.onDragFinished;
      p_onDragFinished = (GrandQuestFolderBoardItem_o *)&v46->fields.onDragFinished;
      v48 = (UIProgressBar_OnDragFinished_o *)sub_1C7BD34(UIProgressBar_OnDragFinished_TypeInfo);
      UIProgressBar_OnDragFinished___ctor(v48, (Il2CppObject *)this, Method_UICenterOnChild_OnDragFinished__, 0);
      v49 = System_Delegate__Combine(v47, (System_Delegate_o *)v48, 0);
      v37 = v49;
      if ( v49 )
      {
        v56 = UIProgressBar_OnDragFinished_TypeInfo;
        if ( (UIProgressBar_OnDragFinished_c *)v49->klass != UIProgressBar_OnDragFinished_TypeInfo )
          goto LABEL_54;
        p_onDragFinished->klass = (GrandQuestFolderBoardItem_c *)v49;
        if ( (UIProgressBar_OnDragFinished_c *)v49->klass != v56 )
          goto LABEL_54;
      }
      else
      {
        p_onDragFinished->klass = 0;
      }
      sub_1C7BA8C(p_onDragFinished, (int32_t)v49, v50, v51, v52, v53, v54, v55);
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
      v58 = (*p_mScrollView)->fields.verticalScrollBar;
      if ( !v58 )
        goto LABEL_135;
      v59 = (System_Delegate_o *)v58->fields.onDragFinished;
      p_onDragFinished = (GrandQuestFolderBoardItem_o *)&v58->fields.onDragFinished;
      v60 = (UIProgressBar_OnDragFinished_o *)sub_1C7BD34(UIProgressBar_OnDragFinished_TypeInfo);
      UIProgressBar_OnDragFinished___ctor(v60, (Il2CppObject *)this, Method_UICenterOnChild_OnDragFinished__, 0);
      v61 = System_Delegate__Combine(v59, (System_Delegate_o *)v60, 0);
      v37 = v61;
      if ( !v61 )
        goto LABEL_55;
      v68 = UIProgressBar_OnDragFinished_TypeInfo;
      if ( (UIProgressBar_OnDragFinished_c *)v61->klass == UIProgressBar_OnDragFinished_TypeInfo )
      {
        p_onDragFinished->klass = (GrandQuestFolderBoardItem_c *)v61;
        if ( (UIProgressBar_OnDragFinished_c *)v61->klass == v68 )
          goto LABEL_56;
      }
LABEL_54:
      sub_1C7C0DC(v37);
LABEL_55:
      p_onDragFinished->klass = (GrandQuestFolderBoardItem_c *)v37;
LABEL_56:
      sub_1C7BA8C(p_onDragFinished, (int32_t)v37, v62, v63, v64, v65, v66, v67);
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
    v70 = (UnityEngine_Transform_o *)transform;
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
      sub_1C7BD48(transform);
    v71 = (float32x2_t *)*p_mScrollView;
    if ( !*p_mScrollView )
LABEL_135:
      sub_1C7BD40(transform, v6);
    v72 = v71[6].n64_f32[0];
    v73 = v71[25].n64_f32[0];
    v74 = (float)(*(float *)(transform + 56) + *(float *)(transform + 32)) * 0.5;
    panelCenter.n64_u64[0] = vmul_f32(
                               vadd_f32(*(float32x2_t *)(transform + 60), *(float32x2_t *)(transform + 36)),
                               (float32x2_t)0x3F0000003F000000LL).n64_u64[0];
    *(float32x2_t *)&velocity.fields.x = vmul_n_f32(v71[24], v72);
    velocity.fields.z = v73 * v72;
    v116 = NGUIMath__SpringDampen(&velocity, 9.0, 2.0, 0);
    x = v116.fields.x;
    y = v116.fields.y;
    z = v116.fields.z;
    childCount = UnityEngine_Transform__get_childCount(v70, 0);
    if ( childCount >= 1 )
    {
      v78 = childCount;
      Item = 0;
      v80 = v74 + (float)(x * -0.01);
      v81 = 0;
      v82 = 0;
      v83 = 0;
      v84 = 0;
      v85 = 3.4028e38;
      v86.n64_u64[0] = vadd_f32(
                         panelCenter,
                         vmul_f32((float32x2_t)__PAIR64__(LODWORD(z), LODWORD(y)), vdup_n_s32(0xBC23D70A))).n64_u64[0];
      while ( 1 )
      {
        transform = (__int64)UnityEngine_Transform__GetChild(v70, v83, 0);
        if ( !transform )
          goto LABEL_135;
        v87 = (UnityEngine_Transform_o *)transform;
        transform = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0);
        if ( !transform )
          goto LABEL_135;
        if ( UnityEngine_GameObject__get_activeInHierarchy((UnityEngine_GameObject_o *)transform, 0) )
        {
          position = UnityEngine_Transform__get_position(v87, 0);
          v88 = position.fields.z;
          *(float32x2_t *)&position.fields.y = vsub_f32(*(float32x2_t *)&position.fields.y, v86);
          *(float32x2_t *)&position.fields.y = vmul_f32(
                                                 *(float32x2_t *)&position.fields.y,
                                                 *(float32x2_t *)&position.fields.y);
          v90 = v89
              + (float)((float)((float)(position.fields.x - v80) * (float)(position.fields.x - v80)) + position.fields.y);
          if ( v90 < v85 )
          {
            v82 = v84;
            v81 = v83;
            Item = (Il2CppObject *)v87;
            v85 = v90;
          }
          ++v84;
        }
        if ( v78 == ++v83 )
          goto LABEL_79;
      }
    }
    v82 = 0;
    v81 = 0;
    Item = 0;
LABEL_79:
    if ( this->fields.nextPageThreshold <= 0.0 )
      goto LABEL_132;
    v91 = panelCenter.n64_u64[0];
    v92 = UICamera_TypeInfo;
    if ( !UICamera_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
      v91 = panelCenter.n64_u64[0];
      v92 = UICamera_TypeInfo;
    }
    if ( !v92->static_fields->currentTouch )
      goto LABEL_133;
    mCenteredObject = (UnityEngine_Object_o *)this->fields.mCenteredObject;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(mCenteredObject, 0, 0) )
      goto LABEL_132;
    transform = (__int64)this->fields.mCenteredObject;
    if ( !transform )
      goto LABEL_135;
    v94 = (UnityEngine_Object_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)transform, 0);
    Child = (UnityEngine_Object_o *)UnityEngine_Transform__GetChild(v70, v81, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(v94, Child, 0) )
      goto LABEL_132;
    transform = (__int64)UICamera_TypeInfo;
    if ( !UICamera_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
      transform = (__int64)UICamera_TypeInfo;
    }
    v96 = *(_QWORD *)(*(_QWORD *)(transform + 184) + 160LL);
    if ( !v96 )
      goto LABEL_135;
    v97 = *(float *)(v96 + 40);
    v98 = *(float *)(v96 + 44);
    transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    if ( !transform )
      goto LABEL_135;
    rotation = UnityEngine_Transform__get_rotation((UnityEngine_Transform_o *)transform, 0);
    v119.fields.z = 0.0;
    v119.fields.x = v97;
    v119.fields.y = v98;
    v118 = UnityEngine_Quaternion__op_Multiply_71808884(rotation, v119, 0);
    if ( !*p_mScrollView )
      goto LABEL_135;
    movement = (*p_mScrollView)->fields.movement;
    v100 = v118.fields.x;
    if ( movement )
    {
      v101 = v118.fields.y;
      if ( movement != 1 )
      {
        v102 = v118.fields.z;
        if ( !byte_4CE7E5B )
        {
          sub_1C7BAE8(&System_Math_TypeInfo);
          byte_4CE7E5B = 1;
        }
        if ( !System_Math_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
        v101 = sqrtf((float)(v102 * v102) + (float)((float)(v100 * v100) + (float)(v101 * v101)));
      }
    }
    else
    {
      v101 = v118.fields.x;
    }
    if ( fabsf(v101) <= this->fields.nextPageThreshold )
      goto LABEL_132;
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)this,
                         (const MethodInfo_3166BC4 *)Method_UnityEngine_Component_GetComponent_UIGrid___);
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
      UnityEngine_Debug__LogWarning_71683224((Il2CppObject *)StringLiteral_9462/*"Next Page Threshold requires a sorted UIGrid in order to work properly"*/, (UnityEngine_Object_o *)this, 0);
      goto LABEL_132;
    }
    transform = (__int64)UIGrid__GetChildList((UIGrid_o *)Component_object, v6);
    nextPageThreshold = this->fields.nextPageThreshold;
    v105 = (System_Collections_Generic_List_object__o *)transform;
    if ( v101 <= nextPageThreshold )
    {
      v91 = panelCenter.n64_u64[0];
      if ( v101 >= (float)-nextPageThreshold )
      {
LABEL_133:
        v110 = HIDWORD(v91);
        v111 = v74;
        UICenterOnChild__CenterOn(
          this,
          (UnityEngine_Transform_o *)Item,
          *(UnityEngine_Vector3_o *)((char *)&v91 - 4),
          1,
          v77);
        return;
      }
      if ( !transform )
        goto LABEL_135;
      if ( v82 < *(_DWORD *)(transform + 24) - 1 )
      {
        LODWORD(v6) = v82 + 1;
LABEL_120:
        v106 = (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_Transform__get_Item__;
LABEL_130:
        v108 = v105;
        goto LABEL_131;
      }
      v109 = UnityEngine_Component__GetComponent_object_(
               (UnityEngine_Component_o *)this,
               (const MethodInfo_3166BC4 *)Method_UnityEngine_Component_GetComponent_UIWrapContent___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v109, 0, 0) )
      {
LABEL_125:
        v108 = v105;
        LODWORD(v6) = 0;
        v106 = (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_Transform__get_Item__;
LABEL_131:
        Item = System_Collections_Generic_List_object___get_Item(v108, (int32_t)v6, v106);
LABEL_132:
        v91 = panelCenter.n64_u64[0];
        goto LABEL_133;
      }
    }
    else
    {
      v6 = (const MethodInfo *)(unsigned int)(v82 - 1);
      if ( v82 >= 1 )
      {
        if ( !transform )
          goto LABEL_135;
        goto LABEL_120;
      }
      v107 = UnityEngine_Component__GetComponent_object_(
               (UnityEngine_Component_o *)this,
               (const MethodInfo_3166BC4 *)Method_UnityEngine_Component_GetComponent_UIWrapContent___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      transform = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v107, 0, 0);
      if ( !v105 )
        goto LABEL_135;
      if ( (transform & 1) != 0 )
        goto LABEL_125;
    }
    LODWORD(v6) = v105->fields._size - 1;
    v106 = (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_Transform__get_Item__;
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
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  intptr_t v8; // x8
  int v12; // w22
  __int64 (__fastcall *v13)(); // x8
  Il2CppObject *m_target; // x9
  __int64 v15; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C7BBA8(method) & 1) != 0 )
  {
    if ( v12 == 1 )
    {
      v13 = sub_1AB8884;
LABEL_8:
      this->fields.invoke_impl = (intptr_t)v13;
      goto LABEL_9;
    }
  }
  else
  {
    if ( !v12 )
    {
      v13 = sub_1AB8864;
      goto LABEL_8;
    }
    if ( !object )
    {
      v15 = sub_1C7BD5C(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C7BC10(v15, 0);
    }
  }
  m_target = this->fields.m_target;
  this->fields.invoke_impl = this->fields.method_ptr;
  this->fields.method_code = (intptr_t)m_target;
LABEL_9:
  this->fields.extra_arg = (intptr_t)sub_1AB881C;
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
  return (System_IAsyncResult_o *)sub_1C7BA9C(this, &v6, callback, object);
}


void UICenterOnChild_OnCenterCallback__EndInvoke(
        UICenterOnChild_OnCenterCallback_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C7BAA0(result, 0, method);
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