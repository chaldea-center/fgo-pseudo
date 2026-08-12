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
        bool applyImmediately,
        const MethodInfo *method)
{
  float z; // s8
  float y; // s9
  float x; // s10
  __int64 v13; // x1
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  UnityEngine_Object_o *mScrollView; // x22
  void *cachedTransform; // x0
  __int64 v22; // x1
  struct UIScrollView_o *v23; // x8
  UnityEngine_Object_o *mPanel; // x22
  struct UIScrollView_o *v25; // x8
  UnityEngine_Transform_o *v26; // x22
  struct UnityEngine_GameObject_o *gameObject; // x0
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  float v34; // s9
  bool v35; // zf
  float v36; // s8
  struct UIScrollView_o *v37; // x8
  struct SpringPanel_OnFinished_o *v38; // x8
  struct SpringPanel_OnFinished_o *onFinished; // x1
  struct UnityEngine_GameObject_o **p_mCenteredObject; // x0
  struct UICenterOnChild_OnCenterCallback_o *onCenter; // x8
  struct UIScrollView_o *v42; // x8
  UnityEngine_GameObject_o *cachedGameObject; // x20
  unsigned __int64 v44; // kr20_8
  unsigned __int64 v45; // kr50_8
  UnityEngine_Vector3_o v46; // 0:kr34_12.12
  UnityEngine_Vector3_o localPosition; // 0:kr40_12.12
  UnityEngine_Vector2_o v48; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o v49; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v51; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v52; // 0:s0.4,4:s1.4,8:s2.4

  z = panelCenter.fields.z;
  y = panelCenter.fields.y;
  x = panelCenter.fields.x;
  if ( (byte_5974FA9 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5974FA9 = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, target);
  if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)target, 0, 0) )
    goto LABEL_31;
  mScrollView = (UnityEngine_Object_o *)this->fields.mScrollView;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13);
  cachedTransform = (void *)UnityEngine_Object__op_Inequality(mScrollView, 0, 0);
  if ( ((unsigned __int8)cachedTransform & 1) == 0 )
    goto LABEL_31;
  v23 = this->fields.mScrollView;
  if ( !v23 )
    goto LABEL_41;
  mPanel = (UnityEngine_Object_o *)v23->fields.mPanel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v22);
  cachedTransform = (void *)UnityEngine_Object__op_Inequality(mPanel, 0, 0);
  if ( ((unsigned __int8)cachedTransform & 1) == 0 )
  {
LABEL_31:
    LODWORD(onFinished) = 0;
    this->fields.mCenteredObject = 0;
    p_mCenteredObject = &this->fields.mCenteredObject;
LABEL_32:
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)p_mCenteredObject,
      (int32_t)onFinished,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
    goto LABEL_33;
  }
  v25 = this->fields.mScrollView;
  if ( !v25 )
    goto LABEL_41;
  cachedTransform = v25->fields.mPanel;
  if ( !cachedTransform )
    goto LABEL_41;
  cachedTransform = UIRect__get_cachedTransform((UIRect_o *)cachedTransform, 0);
  if ( !target )
    goto LABEL_41;
  v26 = (UnityEngine_Transform_o *)cachedTransform;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)target, 0);
  this->fields.mCenteredObject = gameObject;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.mCenteredObject,
    (int32_t)gameObject,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
  position = UnityEngine_Transform__get_position(target, 0);
  if ( !v26 )
    goto LABEL_41;
  v44 = (unsigned __int64)UnityEngine_Transform__InverseTransformPoint(v26, position, 0);
  v49.fields.x = x;
  v49.fields.y = y;
  v49.fields.z = z;
  v45 = (unsigned __int64)UnityEngine_Transform__InverseTransformPoint(v26, v49, 0);
  cachedTransform = this->fields.mScrollView;
  if ( !cachedTransform )
    goto LABEL_41;
  v34 = *(float *)&v44 - *(float *)&v45;
  v35 = !UIScrollView__get_canMoveHorizontally((UIScrollView_o *)cachedTransform, 0);
  cachedTransform = this->fields.mScrollView;
  if ( v35 )
    v34 = 0.0;
  if ( !cachedTransform )
LABEL_41:
    sub_2213CDC(cachedTransform, v22);
  v36 = *((float *)&v44 + 1) - *((float *)&v45 + 1);
  cachedTransform = (void *)UIScrollView__get_canMoveVertically((UIScrollView_o *)cachedTransform, 0);
  if ( ((unsigned __int8)cachedTransform & 1) == 0 )
    v36 = 0.0;
  if ( !applyImmediately )
  {
    if ( !isFinishAction )
      goto LABEL_33;
    v42 = this->fields.mScrollView;
    if ( v42 )
    {
      cachedTransform = v42->fields.mPanel;
      if ( cachedTransform )
      {
        cachedGameObject = UIRect__get_cachedGameObject((UIRect_o *)cachedTransform, 0);
        localPosition = UnityEngine_Transform__get_localPosition(v26, 0);
        v52.fields.z = localPosition.fields.z;
        v52.fields.x = localPosition.fields.x - v34;
        v52.fields.y = localPosition.fields.y - v36;
        cachedTransform = SpringPanel__Begin(cachedGameObject, v52, this->fields.springStrength, 0);
        if ( cachedTransform )
        {
          onFinished = this->fields.onFinished;
          *((_QWORD *)cachedTransform + 6) = onFinished;
          p_mCenteredObject = (struct UnityEngine_GameObject_o **)((char *)cachedTransform + 48);
          goto LABEL_32;
        }
      }
    }
    goto LABEL_41;
  }
  v46 = UnityEngine_Transform__get_localPosition(v26, 0);
  v51.fields.z = v46.fields.z;
  v51.fields.x = v46.fields.x - v34;
  v51.fields.y = v46.fields.y - v36;
  UnityEngine_Transform__set_localPosition(v26, v51, 0);
  v37 = this->fields.mScrollView;
  if ( !v37 )
    goto LABEL_41;
  cachedTransform = v37->fields.mPanel;
  if ( !cachedTransform )
    goto LABEL_41;
  v48.fields.x = v34 + *((float *)cachedTransform + 83);
  v48.fields.y = v36 + *((float *)cachedTransform + 84);
  UIPanel__set_clipOffset((UIPanel_o *)cachedTransform, v48, 0);
  cachedTransform = this->fields.mScrollView;
  if ( !cachedTransform )
    goto LABEL_41;
  (*(void (__fastcall **)(void *, _QWORD, _QWORD))(*(_QWORD *)cachedTransform + 440LL))(
    cachedTransform,
    0,
    *(_QWORD *)(*(_QWORD *)cachedTransform + 448LL));
  if ( isFinishAction )
  {
    v38 = this->fields.onFinished;
    if ( v38 )
      ((void (__fastcall *)(intptr_t, intptr_t))v38->fields.invoke_impl)(v38->fields.method_code, v38->fields.method);
  }
LABEL_33:
  onCenter = this->fields.onCenter;
  if ( onCenter )
    ((void (__fastcall *)(intptr_t, struct UnityEngine_GameObject_o *, intptr_t))onCenter->fields.invoke_impl)(
      onCenter->fields.method_code,
      this->fields.mCenteredObject,
      onCenter->fields.method);
}


void UICenterOnChild__CenterOn_56214248(
        UICenterOnChild_o *this,
        UnityEngine_Transform_o *target,
        bool isFinishAction,
        bool applyImmediately,
        const MethodInfo *method)
{
  UnityEngine_Object_o *mScrollView; // x23
  float32x2_t *v10; // x0
  __int64 v11; // x1
  struct UIScrollView_o *v12; // x8
  UnityEngine_Object_o *mPanel; // x23
  struct UIScrollView_o *v14; // x8
  const MethodInfo *v15; // x4
  UnityEngine_Vector3_o v16; // 0:kr00_12.12

  if ( (byte_5974FAA & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5974FAA = 1;
  }
  mScrollView = (UnityEngine_Object_o *)this->fields.mScrollView;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, target);
  v10 = (float32x2_t *)UnityEngine_Object__op_Inequality(mScrollView, 0, 0);
  if ( ((unsigned __int8)v10 & 1) != 0 )
  {
    v12 = this->fields.mScrollView;
    if ( !v12 )
      goto LABEL_16;
    mPanel = (UnityEngine_Object_o *)v12->fields.mPanel;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
    v10 = (float32x2_t *)UnityEngine_Object__op_Inequality(mPanel, 0, 0);
    if ( ((unsigned __int8)v10 & 1) != 0 )
    {
      v14 = this->fields.mScrollView;
      if ( v14 )
      {
        v10 = (float32x2_t *)v14->fields.mPanel;
        if ( v10 )
        {
          v10 = (float32x2_t *)(*(__int64 (__fastcall **)(float32x2_t *, _QWORD))(v10->n64_u64[0] + 488))(
                                 v10,
                                 *(_QWORD *)(v10->n64_u64[0] + 496));
          if ( v10 )
          {
            if ( v10[3].n64_u32[0] <= 2 )
              sub_2213CE4(v10);
            *(float32x2_t *)&v16.fields.x = vmul_f32(vadd_f32(v10[7], v10[4]), (float32x2_t)0x3F0000003F000000LL);
            v16.fields.z = (float)(v10[8].n64_f32[0] + v10[5].n64_f32[0]) * 0.5;
            UICenterOnChild__CenterOn(this, target, v16, isFinishAction, applyImmediately, v15);
            return;
          }
        }
      }
LABEL_16:
      sub_2213CDC(v10, v11);
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

  if ( (byte_5974FAB & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5974FAB = 1;
  }
  mScrollView = (UnityEngine_Object_o *)this->fields.mScrollView;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  v4 = UnityEngine_Object__op_Inequality(mScrollView, 0, 0);
  if ( !v4 )
    return 0;
  v6 = this->fields.mScrollView;
  if ( !v6 )
    sub_2213CDC(v4, v5);
  mPanel = (UnityEngine_Object_o *)v6->fields.mPanel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
  return UnityEngine_Object__op_Inequality(mPanel, 0, 0);
}


void UICenterOnChild__OnDisable(UICenterOnChild_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mScrollView; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  struct UIScrollView_o *v12; // x8

  if ( (byte_5974FA7 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5974FA7 = 1;
  }
  mScrollView = (UnityEngine_Object_o *)this->fields.mScrollView;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  v4 = UnityEngine_Object__op_Implicit(mScrollView, 0);
  if ( v4 )
  {
    v12 = this->fields.mScrollView;
    if ( !v12 )
      sub_2213CDC(v4, v5);
    v12->fields.centerOnChild = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v12->fields.centerOnChild, 0, v6, v7, v8, v9, v10, v11);
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
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  struct UIScrollView_o *v12; // x8

  if ( (byte_5974FA6 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5974FA6 = 1;
  }
  mScrollView = (UnityEngine_Object_o *)this->fields.mScrollView;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  v4 = UnityEngine_Object__op_Implicit(mScrollView, 0);
  if ( v4 )
  {
    v12 = this->fields.mScrollView;
    if ( !v12 )
      sub_2213CDC(v4, v5);
    v12->fields.centerOnChild = this;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v12->fields.centerOnChild, (int32_t)this, v6, v7, v8, v9, v10, v11);
    ((void (__fastcall *)(UICenterOnChild_o *, const MethodInfo *))this->klass->vtable._4_Recenter.methodPtr)(
      this,
      this->klass->vtable._4_Recenter.method);
  }
}


void UICenterOnChild__OnValidate(UICenterOnChild_o *this, const MethodInfo *method)
{
  this->fields.nextPageThreshold = fabsf(this->fields.nextPageThreshold);
}


void UICenterOnChild__Recenter(UICenterOnChild_o *this, const MethodInfo *method)
{
  struct UIScrollView_o **p_mScrollView; // x20
  UnityEngine_Object_o *mScrollView; // x21
  int v5; // w8
  __int64 transform; // x0
  const MethodInfo *v7; // x1
  __int64 v8; // x1
  UnityEngine_GameObject_o *gameObject; // x21
  Il2CppObject *v10; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  __int64 v17; // x1
  UnityEngine_Object_o *v18; // x21
  __int64 v19; // x1
  System_Type_o *Type; // x0
  __int64 v21; // x1
  System_String_o *v22; // x20
  UnityEngine_Object_o *v23; // x21
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  struct UIScrollView_o *v30; // x8
  struct UIScrollView_o *v31; // x21
  MissionNaviTransitionBoardItem_o *p_onDragFinished; // x21
  System_Delegate_o *onDragFinished; // t1
  UIScrollView_OnDragNotification_o *v34; // x23
  System_Delegate_o *v35; // x0
  System_String_o *v36; // x2
  System_String_o *v37; // x3
  int32_t v38; // w4
  int32_t v39; // w5
  bool v40; // w6
  bool v41; // w7
  System_Delegate_o *v42; // x8
  System_Delegate_c *v43; // x1
  Il2CppType *v44; // x21
  System_Type_o *TypeFromHandle; // x0
  System_String_o *v46; // x21
  System_String_o *v47; // x2
  __int64 v48; // x1
  Il2CppObject *v49; // x20
  UnityEngine_Object_o *horizontalScrollBar; // x21
  struct UIProgressBar_o *v51; // x21
  System_Delegate_o *v52; // t1
  UIProgressBar_OnDragFinished_o *v53; // x23
  System_Delegate_o *v54; // x0
  System_String_o *v55; // x3
  int32_t v56; // w4
  int32_t v57; // w5
  bool v58; // w6
  bool v59; // w7
  UnityEngine_Object_o *verticalScrollBar; // x21
  struct UIProgressBar_o *v61; // x21
  System_Delegate_o *v62; // t1
  UIProgressBar_OnDragFinished_o *v63; // x23
  System_Delegate_o *v64; // x0
  System_String_o *v65; // x3
  int32_t v66; // w4
  int32_t v67; // w5
  bool v68; // w6
  bool v69; // w7
  UnityEngine_Object_o *mPanel; // x21
  UnityEngine_Transform_o *v71; // x22
  float32x2_t *v72; // x8
  float v73; // s4
  unsigned __int64 v74; // d3
  float v75; // s4
  float v76; // s8
  unsigned __int64 v77; // d0
  int32_t childCount; // w0
  __int64 v79; // x1
  const MethodInfo *v80; // x4
  int32_t v81; // w24
  Il2CppObject *Item; // x21
  int32_t v83; // w23
  int v84; // w28
  int32_t v85; // w25
  int v86; // w29
  float v87; // s11
  float32x2_t v88; // d9
  UnityEngine_Transform_o *v89; // x26
  float32x2_t v90; // d0
  float v91; // s0
  UICamera_c *v92; // x0
  unsigned __int64 v93; // d0
  UnityEngine_Object_o *mCenteredObject; // x24
  UnityEngine_Object_o *v95; // x24
  __int64 v96; // x1
  UnityEngine_Object_o *Child; // x22
  __int64 v98; // x8
  __int64 v99; // d0
  struct UIScrollView_o *v100; // x8
  int32_t movement; // w8
  float y; // s9
  __int64 v103; // x1
  Il2CppObject *Component_object; // x20
  float nextPageThreshold; // s0
  System_Collections_Generic_List_object__o *v106; // x20
  bool v107; // nf
  const MethodInfo_4483994 *v108; // x2
  __int64 v109; // x1
  Il2CppObject *v110; // x21
  __int64 v111; // x1
  Il2CppObject *v112; // x21
  System_Collections_Generic_List_object__o *v113; // x0
  float32x2_t v114; // d0
  float x; // s0
  float32x2_t panelCenter; // [xsp+20h] [xbp-B0h]
  UnityEngine_Vector3_o v117; // [xsp+30h] [xbp-A0h] BYREF
  UnityEngine_Vector3_o velocity; // [xsp+40h] [xbp-90h] BYREF
  UnityEngine_Vector3_o v119; // 0:kr00_12.12
  UnityEngine_Vector3_o position; // 0:kr14_12.12
  UnityEngine_Vector3_o v121; // 0:kr30_12.12
  UnityEngine_Vector3_o v122; // 0:kr44_12.12
  UnityEngine_Quaternion_o rotation; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_5974FA8 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_UIGrid___);
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_UIWrapContent___);
    sub_2213A60(&UnityEngine_Debug_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_Transform__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_Transform__get_Item__);
    sub_2213A60(&Method_NGUITools_FindInParents_UIScrollView___);
    sub_2213A60(&NGUITools_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&UIProgressBar_OnDragFinished_TypeInfo);
    sub_2213A60(&UIScrollView_OnDragNotification_TypeInfo);
    sub_2213A60(&UICamera_TypeInfo);
    sub_2213A60(&Method_UICenterOnChild_OnDragFinished__);
    sub_2213A60(&UIScrollView_var);
    sub_2213A60(&StringLiteral_306/*" requires "*/);
    sub_2213A60(&StringLiteral_299/*" on a parent object in order to work"*/);
    sub_2213A60(&StringLiteral_9825/*"Next Page Threshold requires a sorted UIGrid in order to work properly"*/);
    byte_5974FA8 = 1;
  }
  velocity.fields.z = 0.0;
  p_mScrollView = &this->fields.mScrollView;
  mScrollView = (UnityEngine_Object_o *)this->fields.mScrollView;
  *(_QWORD *)&velocity.fields.x = 0;
  v5 = *(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1);
  v117.fields.z = 0.0;
  *(_QWORD *)&v117.fields.x = 0;
  if ( !v5 )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  transform = UnityEngine_Object__op_Equality(mScrollView, 0, 0);
  if ( (transform & 1) != 0 )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v8);
    v10 = NGUITools__FindInParents_object_(
            gameObject,
            (const MethodInfo_38F0B48 *)Method_NGUITools_FindInParents_UIScrollView___);
    *p_mScrollView = (struct UIScrollView_o *)v10;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.mScrollView,
      (int32_t)v10,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
    v18 = (UnityEngine_Object_o *)*p_mScrollView;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17);
    if ( UnityEngine_Object__op_Equality(v18, 0, 0) )
    {
      Type = System_Object__GetType((Il2CppObject *)this, 0);
      if ( Type )
        v22 = (System_String_o *)((__int64 (__fastcall *)(System_Type_o *, const MethodInfo *))Type->klass->vtable._3_ToString.methodPtr)(
                                   Type,
                                   Type->klass->vtable._3_ToString.method);
      else
        v22 = 0;
      v44 = UIScrollView_var;
      if ( !*(_DWORD *)(qword_59843E0 + 228) )
        j_il2cpp_runtime_class_init_0(qword_59843E0, v21);
      TypeFromHandle = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)v44, 0);
      v46 = (System_String_o *)StringLiteral_306/*" requires "*/;
      if ( TypeFromHandle )
        v47 = (System_String_o *)((__int64 (__fastcall *)(System_Type_o *, const MethodInfo *))TypeFromHandle->klass->vtable._3_ToString.methodPtr)(
                                   TypeFromHandle,
                                   TypeFromHandle->klass->vtable._3_ToString.method);
      else
        v47 = 0;
      v49 = (Il2CppObject *)System_String__Concat_75696856(v22, v46, v47, (System_String_o *)StringLiteral_299/*" on a parent object in order to work"*/, 0);
      if ( !*(&UnityEngine_Debug_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo, v48);
      UnityEngine_Debug__LogWarning_83209572(v49, (UnityEngine_Object_o *)this, 0);
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0);
      return;
    }
    v23 = (UnityEngine_Object_o *)*p_mScrollView;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v19);
    transform = UnityEngine_Object__op_Implicit(v23, 0);
    if ( (transform & 1) != 0 )
    {
      v30 = *p_mScrollView;
      if ( !*p_mScrollView )
        goto LABEL_134;
      v30->fields.centerOnChild = this;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&v30->fields.centerOnChild,
        (int32_t)this,
        v24,
        v25,
        v26,
        v27,
        v28,
        v29);
      v31 = this->fields.mScrollView;
      if ( !v31 )
        goto LABEL_134;
      onDragFinished = (System_Delegate_o *)v31->fields.onDragFinished;
      p_onDragFinished = (MissionNaviTransitionBoardItem_o *)&v31->fields.onDragFinished;
      v34 = (UIScrollView_OnDragNotification_o *)sub_2213CCC(UIScrollView_OnDragNotification_TypeInfo);
      UIScrollView_OnDragNotification___ctor(v34, (Il2CppObject *)this, Method_UICenterOnChild_OnDragFinished__, 0);
      v35 = System_Delegate__Combine(onDragFinished, (System_Delegate_o *)v34, 0);
      v42 = v35;
      if ( v35 )
      {
        v43 = (System_Delegate_c *)UIScrollView_OnDragNotification_TypeInfo;
        if ( (UIScrollView_OnDragNotification_c *)v35->klass != UIScrollView_OnDragNotification_TypeInfo )
          goto LABEL_54;
        p_onDragFinished->klass = (MissionNaviTransitionBoardItem_c *)v35;
        if ( v35->klass != v43 )
          goto LABEL_54;
      }
      else
      {
        p_onDragFinished->klass = 0;
      }
      sub_2213A04(p_onDragFinished, (int32_t)v35, v36, v37, v38, v39, v40, v41);
    }
    if ( !*p_mScrollView )
      goto LABEL_134;
    horizontalScrollBar = (UnityEngine_Object_o *)(*p_mScrollView)->fields.horizontalScrollBar;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
    transform = UnityEngine_Object__op_Inequality(horizontalScrollBar, 0, 0);
    if ( (transform & 1) != 0 )
    {
      if ( !*p_mScrollView )
        goto LABEL_134;
      v51 = (*p_mScrollView)->fields.horizontalScrollBar;
      if ( !v51 )
        goto LABEL_134;
      v52 = (System_Delegate_o *)v51->fields.onDragFinished;
      p_onDragFinished = (MissionNaviTransitionBoardItem_o *)&v51->fields.onDragFinished;
      v53 = (UIProgressBar_OnDragFinished_o *)sub_2213CCC(UIProgressBar_OnDragFinished_TypeInfo);
      UIProgressBar_OnDragFinished___ctor(v53, (Il2CppObject *)this, Method_UICenterOnChild_OnDragFinished__, 0);
      v54 = System_Delegate__Combine(v52, (System_Delegate_o *)v53, 0);
      v42 = v54;
      if ( v54 )
      {
        v43 = (System_Delegate_c *)UIProgressBar_OnDragFinished_TypeInfo;
        if ( (UIProgressBar_OnDragFinished_c *)v54->klass != UIProgressBar_OnDragFinished_TypeInfo )
          goto LABEL_54;
        p_onDragFinished->klass = (MissionNaviTransitionBoardItem_c *)v54;
        if ( v54->klass != v43 )
          goto LABEL_54;
      }
      else
      {
        p_onDragFinished->klass = 0;
      }
      sub_2213A04(p_onDragFinished, (int32_t)v54, v36, v55, v56, v57, v58, v59);
    }
    if ( !*p_mScrollView )
      goto LABEL_134;
    verticalScrollBar = (UnityEngine_Object_o *)(*p_mScrollView)->fields.verticalScrollBar;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
    transform = UnityEngine_Object__op_Inequality(verticalScrollBar, 0, 0);
    if ( (transform & 1) != 0 )
    {
      if ( !*p_mScrollView )
        goto LABEL_134;
      v61 = (*p_mScrollView)->fields.verticalScrollBar;
      if ( !v61 )
        goto LABEL_134;
      v62 = (System_Delegate_o *)v61->fields.onDragFinished;
      p_onDragFinished = (MissionNaviTransitionBoardItem_o *)&v61->fields.onDragFinished;
      v63 = (UIProgressBar_OnDragFinished_o *)sub_2213CCC(UIProgressBar_OnDragFinished_TypeInfo);
      UIProgressBar_OnDragFinished___ctor(v63, (Il2CppObject *)this, Method_UICenterOnChild_OnDragFinished__, 0);
      v64 = System_Delegate__Combine(v62, (System_Delegate_o *)v63, 0);
      v42 = v64;
      if ( !v64 )
        goto LABEL_55;
      v43 = (System_Delegate_c *)UIProgressBar_OnDragFinished_TypeInfo;
      if ( (UIProgressBar_OnDragFinished_c *)v64->klass == UIProgressBar_OnDragFinished_TypeInfo )
      {
        p_onDragFinished->klass = (MissionNaviTransitionBoardItem_c *)v64;
        if ( v64->klass == v43 )
          goto LABEL_56;
      }
LABEL_54:
      sub_221405C(v42, v43, v36);
LABEL_55:
      p_onDragFinished->klass = 0;
LABEL_56:
      sub_2213A04(p_onDragFinished, (int32_t)v42, v36, v65, v66, v67, v68, v69);
    }
  }
  if ( !*p_mScrollView )
    goto LABEL_134;
  mPanel = (UnityEngine_Object_o *)(*p_mScrollView)->fields.mPanel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
  if ( !UnityEngine_Object__op_Equality(mPanel, 0, 0) )
  {
    transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    if ( !transform )
      goto LABEL_134;
    v71 = (UnityEngine_Transform_o *)transform;
    transform = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)transform, 0);
    if ( !(_DWORD)transform )
      return;
    if ( !*p_mScrollView )
      goto LABEL_134;
    transform = (__int64)(*p_mScrollView)->fields.mPanel;
    if ( !transform )
      goto LABEL_134;
    transform = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)transform + 488LL))(
                  transform,
                  *(_QWORD *)(*(_QWORD *)transform + 496LL));
    if ( !transform )
      goto LABEL_134;
    if ( *(_DWORD *)(transform + 24) <= 2u )
      sub_2213CE4(transform);
    v72 = (float32x2_t *)*p_mScrollView;
    if ( !*p_mScrollView )
LABEL_134:
      sub_2213CDC(transform, v7);
    v73 = v72[6].n64_f32[0];
    v74 = vmul_n_f32(v72[24], v73).n64_u64[0];
    v75 = v72[25].n64_f32[0] * v73;
    v76 = (float)(*(float *)(transform + 64) + *(float *)(transform + 40)) * 0.5;
    v77 = vmul_f32(
            vadd_f32(*(float32x2_t *)(transform + 56), *(float32x2_t *)(transform + 32)),
            (float32x2_t)0x3F0000003F000000LL).n64_u64[0];
    *(_QWORD *)&velocity.fields.x = v74;
    velocity.fields.z = v75;
    panelCenter.n64_u64[0] = v77;
    v119 = NGUIMath__SpringDampen(&velocity, 9.0, 2.0, 0);
    childCount = UnityEngine_Transform__get_childCount(v71, 0);
    if ( childCount >= 1 )
    {
      v81 = childCount;
      Item = 0;
      v83 = 0;
      v84 = 0;
      v85 = 0;
      v86 = 0;
      v87 = 3.4028e38;
      v88.n64_u64[0] = vadd_f32(panelCenter, vmul_f32(*(float32x2_t *)&v119.fields.x, vdup_n_s32(0xBC23D70A))).n64_u64[0];
      while ( 1 )
      {
        transform = (__int64)UnityEngine_Transform__GetChild(v71, v85, 0);
        if ( !transform )
          goto LABEL_134;
        v89 = (UnityEngine_Transform_o *)transform;
        transform = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0);
        if ( !transform )
          goto LABEL_134;
        if ( UnityEngine_GameObject__get_activeInHierarchy((UnityEngine_GameObject_o *)transform, 0) )
        {
          position = UnityEngine_Transform__get_position(v89, 0);
          v114.n64_u32[0] = LODWORD(position.fields.x);
          v114.n64_u32[1] = LODWORD(position.fields.y);
          v90.n64_u64[0] = vsub_f32(v114, v88).n64_u64[0];
          v91 = (float)((float)(position.fields.z - (float)(v76 - (float)(v119.fields.z * 0.01)))
                      * (float)(position.fields.z - (float)(v76 - (float)(v119.fields.z * 0.01))))
              + vaddv_f32(vmul_f32(v90, v90));
          if ( v91 < v87 )
          {
            v87 = v91;
            v84 = v86;
            v83 = v85;
            Item = (Il2CppObject *)v89;
          }
          ++v86;
        }
        if ( v81 == ++v85 )
          goto LABEL_79;
      }
    }
    v84 = 0;
    v83 = 0;
    Item = 0;
LABEL_79:
    if ( this->fields.nextPageThreshold <= 0.0 )
      goto LABEL_131;
    v92 = UICamera_TypeInfo;
    if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v79);
      v92 = UICamera_TypeInfo;
    }
    v93 = panelCenter.n64_u64[0];
    if ( !v92->static_fields->currentTouch )
      goto LABEL_132;
    mCenteredObject = (UnityEngine_Object_o *)this->fields.mCenteredObject;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v79);
    if ( !UnityEngine_Object__op_Inequality(mCenteredObject, 0, 0) )
      goto LABEL_131;
    transform = (__int64)this->fields.mCenteredObject;
    if ( !transform )
      goto LABEL_134;
    v95 = (UnityEngine_Object_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)transform, 0);
    Child = (UnityEngine_Object_o *)UnityEngine_Transform__GetChild(v71, v83, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v96);
    if ( !UnityEngine_Object__op_Equality(v95, Child, 0) )
      goto LABEL_131;
    transform = (__int64)UICamera_TypeInfo;
    if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v7);
      transform = (__int64)UICamera_TypeInfo;
    }
    v98 = *(_QWORD *)(*(_QWORD *)(transform + 184) + 160LL);
    if ( !v98 )
      goto LABEL_134;
    v99 = *(_QWORD *)(v98 + 40);
    v117.fields.z = 0.0;
    *(_QWORD *)&v117.fields.x = v99;
    transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    if ( !transform )
      goto LABEL_134;
    rotation = UnityEngine_Transform__get_rotation((UnityEngine_Transform_o *)transform, 0);
    v121 = UnityEngine_Quaternion__op_Multiply_83371700(rotation, v117, 0);
    x = v121.fields.x;
    v100 = *p_mScrollView;
    v117 = v121;
    if ( !v100 )
      goto LABEL_134;
    movement = v100->fields.movement;
    if ( movement )
    {
      y = v121.fields.y;
      if ( movement == 1 )
        goto LABEL_99;
      x = sub_244F1C8(&v117, 0);
    }
    y = x;
LABEL_99:
    if ( fabsf(y) <= this->fields.nextPageThreshold )
    {
LABEL_131:
      v93 = panelCenter.n64_u64[0];
LABEL_132:
      *(_QWORD *)&v122.fields.x = v93;
      v122.fields.z = v76;
      UICenterOnChild__CenterOn(this, (UnityEngine_Transform_o *)Item, v122, 1, 0, v80);
      return;
    }
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)this,
                         (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UIGrid___);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v103);
    transform = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
    if ( (transform & 1) == 0 )
      goto LABEL_138;
    if ( !Component_object )
      goto LABEL_134;
    if ( !HIDWORD(Component_object[2].klass) )
    {
LABEL_138:
      if ( !*(&UnityEngine_Debug_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo, v7);
      UnityEngine_Debug__LogWarning_83209572((Il2CppObject *)StringLiteral_9825/*"Next Page Threshold requires a sorted UIGrid in order to work properly"*/, (UnityEngine_Object_o *)this, 0);
      goto LABEL_131;
    }
    transform = (__int64)UIGrid__GetChildList((UIGrid_o *)Component_object, v7);
    nextPageThreshold = this->fields.nextPageThreshold;
    v106 = (System_Collections_Generic_List_object__o *)transform;
    if ( y <= nextPageThreshold )
    {
      v107 = y < (float)-nextPageThreshold;
      v93 = panelCenter.n64_u64[0];
      if ( !v107 )
        goto LABEL_132;
      if ( !transform )
        goto LABEL_134;
      if ( v84 < *(_DWORD *)(transform + 24) - 1 )
      {
        LODWORD(v7) = v84 + 1;
LABEL_117:
        v108 = (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_Transform__get_Item__;
LABEL_129:
        v113 = v106;
        goto LABEL_130;
      }
      v112 = UnityEngine_Component__GetComponent_object_(
               (UnityEngine_Component_o *)this,
               (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UIWrapContent___);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v111);
      if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v112, 0, 0) )
      {
LABEL_126:
        v113 = v106;
        LODWORD(v7) = 0;
        v108 = (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_Transform__get_Item__;
LABEL_130:
        Item = System_Collections_Generic_List_object___get_Item(v113, (int32_t)v7, v108);
        goto LABEL_131;
      }
    }
    else
    {
      v7 = (const MethodInfo *)(unsigned int)(v84 - 1);
      if ( v84 >= 1 )
      {
        if ( !transform )
          goto LABEL_134;
        goto LABEL_117;
      }
      v110 = UnityEngine_Component__GetComponent_object_(
               (UnityEngine_Component_o *)this,
               (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UIWrapContent___);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v109);
      transform = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v110, 0, 0);
      if ( (transform & 1) != 0 )
      {
        if ( !v106 )
          goto LABEL_134;
        goto LABEL_126;
      }
      if ( !v106 )
        goto LABEL_134;
    }
    v108 = (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_Transform__get_Item__;
    LODWORD(v7) = v106->fields._size - 1;
    goto LABEL_129;
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
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  intptr_t v8; // x8
  int v12; // w22
  __int64 (__fastcall *v13)(); // x8
  Il2CppObject *m_target; // x9
  __int64 v15; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    (System_String_o *)method,
    (System_String_o *)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_2213B38(method) & 1) != 0 )
  {
    if ( v12 == 1 )
    {
      v13 = sub_2016CC8;
LABEL_8:
      this->fields.invoke_impl = (intptr_t)v13;
      goto LABEL_9;
    }
  }
  else
  {
    if ( !v12 )
    {
      v13 = sub_2016CAC;
      goto LABEL_8;
    }
    if ( !object )
    {
      v15 = sub_2213CF8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_2213BA0(v15, 0);
    }
  }
  m_target = this->fields.m_target;
  this->fields.invoke_impl = this->fields.method_ptr;
  this->fields.method_code = (intptr_t)m_target;
LABEL_9:
  this->fields.extra_arg = (intptr_t)sub_2016C64;
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
  return sub_2213A14(this, &v6, callback, object);
}


void UICenterOnChild_OnCenterCallback__EndInvoke(
        UICenterOnChild_OnCenterCallback_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_2213A18(result, 0, method);
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