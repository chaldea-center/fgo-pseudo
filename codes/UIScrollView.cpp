void UIScrollView___cctor(const MethodInfo *method)
{
  BetterList_T__o *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5975078 & 1) == 0 )
  {
    sub_2213A60(&Method_BetterList_UIScrollView___ctor__);
    sub_2213A60(&BetterList_UIScrollView__TypeInfo);
    sub_2213A60(&UIScrollView_TypeInfo);
    byte_5975078 = 1;
  }
  v1 = (BetterList_T__o *)sub_2213CCC(BetterList_UIScrollView__TypeInfo);
  BetterList_object____ctor(v1, (const MethodInfo_3E70130 *)Method_BetterList_UIScrollView___ctor__);
  UIScrollView_TypeInfo->static_fields->list = (struct BetterList_UIScrollView__o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)UIScrollView_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void UIScrollView___ctor(UIScrollView_o *this, const MethodInfo *method)
{
  int v3; // w8
  int v4; // w8
  _BOOL4 v5; // w8
  struct UnityEngine_Vector3_StaticFields *static_fields; // x9
  __int64 v7; // d0
  float z; // s1

  this->fields.dragEffect = 2;
  *(_QWORD *)&this->fields.scrollWheelFactor = 0x420C00003E800000LL;
  this->fields.restrictWithinPanel = 1;
  *(_QWORD *)&this->fields.showScrollBars = 0x3F80000000000001LL;
  v3 = (unsigned __int8)byte_59699C0;
  *(_WORD *)&this->fields.smoothDragStart = 257;
  this->fields.customMovement.fields.y = 0.0;
  *(_QWORD *)&this->fields.scale.fields.x = 1065353216;
  this->fields.scale.fields.z = 0.0;
  if ( !v3 )
  {
    sub_2213A60(&UnityEngine_Vector2_TypeInfo);
    byte_59699C0 = 1;
  }
  v4 = (unsigned __int8)byte_5969AE0;
  this->fields.relativePositionOnReset = UnityEngine_Vector2_TypeInfo->static_fields->zeroVector;
  if ( v4 )
  {
    v5 = 0;
  }
  else
  {
    sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE0 = 1;
    v5 = byte_59699C0 == 0;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  v7 = *(_QWORD *)&static_fields->zeroVector.fields.x;
  z = static_fields->zeroVector.fields.z;
  this->fields.mDragID = -10;
  *(_QWORD *)&this->fields.mMomentum.fields.x = v7;
  this->fields.mMomentum.fields.z = z;
  if ( v5 )
  {
    sub_2213A60(&UnityEngine_Vector2_TypeInfo);
    byte_59699C0 = 1;
  }
  this->fields.mDragStartOffset = UnityEngine_Vector2_TypeInfo->static_fields->zeroVector;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void UIScrollView__Awake(UIScrollView_o *this, const MethodInfo *method)
{
  struct UnityEngine_Transform_o *transform; // x0
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  Il2CppObject *Component_object; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  __int64 v17; // x1
  struct UIPanel_o *mPanel; // x0
  float x; // s0
  float32x2_t v20; // d1
  unsigned __int64 v21; // d3
  int32_t v22; // w8
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float z; // s1
  struct UnityEngine_Vector2_o relativePositionOnReset; // d8
  struct UnityEngine_Vector2_StaticFields *v26; // x8
  float32x2_t v27; // d0
  float v28; // s2
  float v29; // s0
  int32_t v30; // w9

  if ( (byte_5975067 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_UIPanel___);
    byte_5975067 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  this->fields.mTrans = transform;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.mTrans, (int32_t)transform, v4, v5, v6, v7, v8, v9);
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
  this->fields.mPanel = (struct UIPanel_o *)Component_object;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.mPanel,
    (int32_t)Component_object,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  mPanel = this->fields.mPanel;
  if ( !mPanel )
    sub_2213CDC(0, v17);
  if ( !mPanel->fields.mClipping )
    UIPanel__set_clipping(mPanel, 4, 0);
  if ( this->fields.movement != 3 )
  {
    x = this->fields.scale.fields.x;
    v20.n64_u64[0] = *(unsigned __int64 *)&this->fields.scale.fields.y;
    v21 = vmul_f32(v20, v20).n64_u64[0];
    if ( (float)((float)((float)(x * x) + *(float *)&v21) + *((float *)&v21 + 1)) > 0.001 )
    {
      if ( x == 1.0 && v20.n64_f32[0] == 0.0 )
      {
        this->fields.movement = 0;
      }
      else
      {
        if ( x == 0.0 && v20.n64_f32[0] == 1.0 )
        {
          v22 = 1;
        }
        else if ( x == 1.0 && v20.n64_f32[0] == 1.0 )
        {
          v22 = 2;
        }
        else
        {
          v22 = 3;
          this->fields.customMovement.fields.x = x;
          LODWORD(this->fields.customMovement.fields.y) = v20.n64_u32[0];
        }
        this->fields.movement = v22;
      }
      if ( !byte_5969AE0 )
      {
        sub_2213A60(&UnityEngine_Vector3_TypeInfo);
        byte_5969AE0 = 1;
      }
      static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
      z = static_fields->zeroVector.fields.z;
      *(_QWORD *)&this->fields.scale.fields.x = *(_QWORD *)&static_fields->zeroVector.fields.x;
      this->fields.scale.fields.z = z;
    }
  }
  if ( !this->fields.contentPivot )
  {
    relativePositionOnReset = this->fields.relativePositionOnReset;
    if ( !byte_59699C0 )
    {
      sub_2213A60(&UnityEngine_Vector2_TypeInfo);
      byte_59699C0 = 1;
    }
    v26 = UnityEngine_Vector2_TypeInfo->static_fields;
    v27.n64_u64[0] = vsub_f32((float32x2_t)relativePositionOnReset, (float32x2_t)v26->zeroVector).n64_u64[0];
    if ( vaddv_f32(vmul_f32(v27, v27)) >= 1.0e-10 )
    {
      v28 = this->fields.relativePositionOnReset.fields.x;
      v29 = 1.0 - this->fields.relativePositionOnReset.fields.y;
      if ( v28 == 0.0 )
      {
        if ( v29 == 0.0 )
        {
          v30 = 6;
        }
        else if ( v29 == 1.0 )
        {
          v30 = 0;
        }
        else
        {
          v30 = 3;
        }
      }
      else if ( v28 == 1.0 )
      {
        if ( v29 == 0.0 )
        {
          v30 = 8;
        }
        else if ( v29 == 1.0 )
        {
          v30 = 2;
        }
        else
        {
          v30 = 5;
        }
      }
      else if ( v29 == 0.0 )
      {
        v30 = 7;
      }
      else if ( v29 == 1.0 )
      {
        v30 = 1;
      }
      else
      {
        v30 = 4;
      }
      this->fields.contentPivot = v30;
      this->fields.relativePositionOnReset = v26->zeroVector;
    }
  }
}


void UIScrollView__CheckScrollbars(UIScrollView_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *horizontalScrollBar; // x20
  EventDelegate_o *v4; // x0
  __int64 v5; // x1
  struct UIProgressBar_o *v6; // x8
  System_Collections_Generic_List_EventDelegate__o *onChange; // x20
  EventDelegate_Callback_o *v8; // x21
  const MethodInfo *v9; // x3
  __int64 v10; // x1
  const MethodInfo *v11; // x2
  UIProgressBar_o *v12; // x20
  float v13; // s0
  UnityEngine_Object_o *verticalScrollBar; // x20
  struct UIProgressBar_o *v15; // x8
  System_Collections_Generic_List_EventDelegate__o *v16; // x20
  EventDelegate_Callback_o *v17; // x21
  const MethodInfo *v18; // x3
  __int64 v19; // x1
  const MethodInfo *v20; // x2
  UIProgressBar_o *v21; // x20
  float v22; // s0

  if ( (byte_597506A & 1) == 0 )
  {
    sub_2213A60(&EventDelegate_Callback_TypeInfo);
    sub_2213A60(&EventDelegate_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_UIScrollView_OnScrollBar__);
    byte_597506A = 1;
  }
  horizontalScrollBar = (UnityEngine_Object_o *)this->fields.horizontalScrollBar;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  v4 = (EventDelegate_o *)UnityEngine_Object__op_Inequality(horizontalScrollBar, 0, 0);
  if ( ((unsigned __int8)v4 & 1) != 0 )
  {
    v6 = this->fields.horizontalScrollBar;
    if ( !v6 )
      goto LABEL_29;
    onChange = v6->fields.onChange;
    v8 = (EventDelegate_Callback_o *)sub_2213CCC(EventDelegate_Callback_TypeInfo);
    EventDelegate_Callback___ctor(v8, (Il2CppObject *)this, Method_UIScrollView_OnScrollBar__, v9);
    if ( !*(&EventDelegate_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo, v10);
    v4 = EventDelegate__Add(onChange, v8, v11);
    v12 = this->fields.horizontalScrollBar;
    if ( this->fields.showScrollBars )
    {
      v4 = (EventDelegate_o *)((__int64 (__fastcall *)(UIScrollView_o *, const MethodInfo *))this->klass->vtable._5_get_shouldMoveHorizontally.methodPtr)(
                                this,
                                this->klass->vtable._5_get_shouldMoveHorizontally.method);
      v13 = 0.0;
      if ( ((unsigned __int8)v4 & 1) != 0 )
        v13 = 1.0;
      if ( !v12 )
LABEL_29:
        sub_2213CDC(v4, v5);
    }
    else
    {
      v13 = 1.0;
      if ( !v12 )
        goto LABEL_29;
    }
    UIProgressBar__set_alpha(v12, v13, 0);
  }
  verticalScrollBar = (UnityEngine_Object_o *)this->fields.verticalScrollBar;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
  v4 = (EventDelegate_o *)UnityEngine_Object__op_Inequality(verticalScrollBar, 0, 0);
  if ( ((unsigned __int8)v4 & 1) != 0 )
  {
    v15 = this->fields.verticalScrollBar;
    if ( !v15 )
      goto LABEL_29;
    v16 = v15->fields.onChange;
    v17 = (EventDelegate_Callback_o *)sub_2213CCC(EventDelegate_Callback_TypeInfo);
    EventDelegate_Callback___ctor(v17, (Il2CppObject *)this, Method_UIScrollView_OnScrollBar__, v18);
    if ( !*(&EventDelegate_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo, v19);
    v4 = EventDelegate__Add(v16, v17, v20);
    v21 = this->fields.verticalScrollBar;
    if ( this->fields.showScrollBars )
    {
      v4 = (EventDelegate_o *)((__int64 (__fastcall *)(UIScrollView_o *, const MethodInfo *))this->klass->vtable._6_get_shouldMoveVertically.methodPtr)(
                                this,
                                this->klass->vtable._6_get_shouldMoveVertically.method);
      v22 = 0.0;
      if ( ((unsigned __int8)v4 & 1) != 0 )
        v22 = 1.0;
      if ( !v21 )
        goto LABEL_29;
    }
    else
    {
      v22 = 1.0;
      if ( !v21 )
        goto LABEL_29;
    }
    UIProgressBar__set_alpha(v21, v22, 0);
  }
}


void UIScrollView__DisableSpring(UIScrollView_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Component_object; // x19
  _BOOL8 v5; // x0
  __int64 v6; // x1

  if ( (byte_597506C & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_SpringPanel___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_597506C = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_SpringPanel___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v3);
  v5 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
  if ( v5 )
  {
    if ( !Component_object )
      sub_2213CDC(v5, v6);
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_object, 0, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void UIScrollView__Drag(UIScrollView_o *this, const MethodInfo *method)
{
  UICamera_c *v3; // x0
  int v4; // w8
  __int64 v5; // x1
  UnityEngine_GameObject_o *gameObject; // x20
  const MethodInfo *v7; // x1
  _QWORD *p_image; // x0
  struct UICamera_MouseOrTouch_o *currentTouch; // x8
  struct UnityEngine_Vector2_o totalDelta; // x9
  struct UIScrollView_OnDragNotification_o *onDragStarted; // x8
  __int64 v12; // x9
  float32x2_t *v13; // x8
  int v14; // s2 OVERLAPPED
  unsigned __int64 v15; // d0 OVERLAPPED
  int v16; // s1
  __int64 v17; // x9
  __int64 v18; // x8
  float x; // s8
  float y; // s9
  float z; // s10
  float m_Distance; // s11
  float v23; // s14
  __int64 v24; // kr00_8
  float v25; // s12
  float v26; // s1
  struct UnityEngine_Mathf_StaticFields *static_fields; // x8
  float v28; // s0
  float v29; // s0
  float32x2_t v30; // d4
  float32x2_t v31; // d6
  float v32; // s8
  unsigned __int32 v33; // s1 OVERLAPPED
  unsigned __int32 v34; // s0
  float v35; // s2
  float v36; // s3
  int32_t movement; // w8
  float v38; // s2
  float v39; // s0
  unsigned __int64 v40; // d1
  float v41; // s0
  float v42; // s0
  float v43; // s1
  float v44; // s2
  struct UIPanel_o *mPanel; // x20
  float32x2_t v46; // d9
  float32x2_t v47; // d10
  double v48; // d2
  double v49; // d0
  int v50; // s1
  int v51; // s2
  float v52; // s0
  unsigned __int32 v53; // s1 OVERLAPPED
  const MethodInfo *v54; // x4
  float v55; // s1
  UIScrollView_o *v56; // x0
  unsigned __int32 v57; // s0
  float v58; // s2
  struct UIPanel_o *v59; // x8
  int32_t v60; // w8
  char v61; // w2
  bool v62; // w3
  unsigned __int64 v63; // [xsp+0h] [xbp-E0h]
  unsigned __int64 v64; // [xsp+0h] [xbp-E0h]
  UnityEngine_Ray_o v65; // [xsp+18h] [xbp-C8h] BYREF
  UnityEngine_Ray_o v66; // [xsp+30h] [xbp-B0h] BYREF
  __int64 v67; // [xsp+50h] [xbp-90h] BYREF
  int v68; // [xsp+58h] [xbp-88h]
  UnityEngine_Ray_o v69; // [xsp+60h] [xbp-80h] BYREF
  UnityEngine_Vector3_o v70; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o Point; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v72; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v73; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v74; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_5975075 & 1) == 0 )
  {
    sub_2213A60(&NGUITools_TypeInfo);
    sub_2213A60(&UICamera_TypeInfo);
    byte_5975075 = 1;
  }
  v3 = UICamera_TypeInfo;
  memset(&v69, 0, sizeof(v69));
  v4 = *(&UICamera_TypeInfo->_2.cctor_finished + 1);
  v68 = 0;
  v67 = 0;
  memset(&v66, 0, sizeof(v66));
  if ( !v4 )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, method);
    v3 = UICamera_TypeInfo;
  }
  if ( v3->static_fields->currentScheme == 2 || !UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0) )
    return;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v5);
  if ( !NGUITools__GetActive_56411004(gameObject, 0) || !this->fields.mShouldMove )
    return;
  p_image = &UICamera_TypeInfo->_1.image;
  if ( this->fields.mDragID == -10 )
  {
    if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v7);
      p_image = &UICamera_TypeInfo->_1.image;
    }
    this->fields.mDragID = *(_DWORD *)(p_image[23] + 148LL);
  }
  if ( !*((_DWORD *)p_image + 57) )
  {
    j_il2cpp_runtime_class_init_0(p_image, v7);
    p_image = &UICamera_TypeInfo->_1.image;
  }
  currentTouch = *(struct UICamera_MouseOrTouch_o **)(p_image[23] + 160LL);
  if ( !currentTouch )
LABEL_76:
    sub_2213CDC(p_image, v7);
  currentTouch->fields.clickNotification = 2;
  if ( !this->fields.smoothDragStart )
    goto LABEL_79;
  if ( !this->fields.mDragStarted )
  {
    this->fields.mDragStarted = 1;
    if ( !*((_DWORD *)p_image + 57) )
    {
      j_il2cpp_runtime_class_init_0(p_image, v7);
      p_image = &UICamera_TypeInfo->_1.image;
      currentTouch = UICamera_TypeInfo->static_fields->currentTouch;
      if ( !currentTouch )
        goto LABEL_76;
    }
    totalDelta = currentTouch->fields.totalDelta;
    onDragStarted = this->fields.onDragStarted;
    this->fields.mDragStartOffset = totalDelta;
    if ( onDragStarted )
    {
      ((void (__fastcall *)(intptr_t, intptr_t))onDragStarted->fields.invoke_impl)(
        onDragStarted->fields.method_code,
        onDragStarted->fields.method);
      p_image = &UICamera_TypeInfo->_1.image;
    }
  }
  if ( this->fields.smoothDragStart )
  {
    if ( !*((_DWORD *)p_image + 57) )
    {
      j_il2cpp_runtime_class_init_0(p_image, v7);
      p_image = &UICamera_TypeInfo->_1.image;
    }
    v12 = p_image[23];
    v13 = *(float32x2_t **)(v12 + 160);
    if ( !v13 )
      goto LABEL_76;
    p_image = *(_QWORD **)(v12 + 136);
    if ( !p_image )
      goto LABEL_76;
    v14 = 0;
    v15 = vsub_f32(v13[2], (float32x2_t)this->fields.mDragStartOffset).n64_u64[0];
    v16 = HIDWORD(v15);
    UnityEngine_Camera__ScreenPointToRay_83198808(
      &v65,
      (UnityEngine_Camera_o *)p_image,
      *(UnityEngine_Vector3_o *)(&v14 - 2),
      0);
    v66 = v65;
  }
  else
  {
LABEL_79:
    if ( !*((_DWORD *)p_image + 57) )
    {
      j_il2cpp_runtime_class_init_0(p_image, v7);
      p_image = &UICamera_TypeInfo->_1.image;
    }
    v17 = p_image[23];
    v18 = *(_QWORD *)(v17 + 160);
    if ( !v18 )
      goto LABEL_76;
    p_image = *(_QWORD **)(v17 + 136);
    if ( !p_image )
      goto LABEL_76;
    v70.fields.z = 0.0;
    v70.fields.x = *(float *)(v18 + 16);
    v70.fields.y = *(float *)(v18 + 20);
    UnityEngine_Camera__ScreenPointToRay_83198808(&v66, (UnityEngine_Camera_o *)p_image, v70, 0);
  }
  x = this->fields.mPlane.fields.m_Normal.fields.x;
  y = this->fields.mPlane.fields.m_Normal.fields.y;
  *(_OWORD *)&v69.fields.m_Origin.fields.x = *(_OWORD *)&v66.fields.m_Origin.fields.x;
  z = this->fields.mPlane.fields.m_Normal.fields.z;
  m_Distance = this->fields.mPlane.fields.m_Distance;
  *(_QWORD *)&v69.fields.m_Direction.fields.y = *(_QWORD *)&v66.fields.m_Direction.fields.y;
  v23 = v66.fields.m_Origin.fields.x;
  v24 = *(_QWORD *)&v66.fields.m_Origin.fields.y;
  v25 = (float)(v66.fields.m_Direction.fields.z * z)
      + (float)((float)(v66.fields.m_Direction.fields.x * x) + (float)(v66.fields.m_Direction.fields.y * y));
  if ( !byte_5969AE4 )
  {
    sub_2213A60(&UnityEngine_Mathf_TypeInfo);
    byte_5969AE4 = 1;
  }
  v26 = vabds_f32(0.0, v25);
  static_fields = UnityEngine_Mathf_TypeInfo->static_fields;
  v28 = fmaxf(fabsf(v25), 0.0) * 0.000001;
  if ( v28 <= (float)(static_fields->Epsilon * 8.0) )
    v28 = static_fields->Epsilon * 8.0;
  if ( v26 < v28 )
    return;
  v29 = (float)((float)-(float)((float)(*((float *)&v24 + 1) * z)
                              + (float)((float)(v23 * x) + (float)(*(float *)&v24 * y)))
              - m_Distance)
      / v25;
  if ( v29 <= 0.0 )
    return;
  Point = UnityEngine_Ray__GetPoint(&v69, v29, 0);
  v30.n64_u64[0] = *(unsigned __int64 *)&this->fields.mLastPos.fields.x;
  this->fields.mLastPos.fields.x = Point.fields.x;
  this->fields.mLastPos.fields.y = Point.fields.y;
  v31.n64_u64[0] = vsub_f32(*(float32x2_t *)&Point.fields.x, v30).n64_u64[0];
  Point.fields.y = this->fields.mLastPos.fields.z;
  this->fields.mLastPos.fields.z = Point.fields.z;
  v32 = Point.fields.z - Point.fields.y;
  v33 = v31.n64_u32[1];
  if ( v31.n64_f32[0] != 0.0 || v31.n64_f32[1] != 0.0 || v32 != 0.0 )
  {
    p_image = &this->fields.mTrans->klass;
    if ( !p_image )
      goto LABEL_76;
    v34 = v31.n64_u32[0];
    v35 = v32;
    v72 = UnityEngine_Transform__InverseTransformDirection(
            (UnityEngine_Transform_o *)p_image,
            *(UnityEngine_Vector3_o *)(&v33 - 1),
            0);
    v36 = 0.0;
    movement = this->fields.movement;
    if ( movement )
    {
      if ( movement == 1 )
      {
        v72.fields.x = 0.0;
      }
      else if ( movement != 2 )
      {
        v36 = v72.fields.z * 0.0;
        v72.fields.x = v72.fields.x * this->fields.customMovement.fields.x;
        v72.fields.y = v72.fields.y * this->fields.customMovement.fields.y;
      }
    }
    else
    {
      v72.fields.y = 0.0;
    }
    p_image = &this->fields.mTrans->klass;
    if ( !p_image )
      goto LABEL_76;
    v38 = v36;
    v73 = UnityEngine_Transform__TransformDirection((UnityEngine_Transform_o *)p_image, v72, 0);
    v31.n64_u64[0] = *(unsigned __int64 *)&v73.fields.x;
    v32 = v73.fields.z;
  }
  if ( this->fields.dragEffect )
  {
    v39 = this->fields.momentumAmount * 0.01;
    v40 = vadd_f32(
            *(float32x2_t *)&this->fields.mMomentum.fields.x,
            vmul_f32(
              vsub_f32(
                vadd_f32(*(float32x2_t *)&this->fields.mMomentum.fields.x, vmul_n_f32(v31, v39)),
                *(float32x2_t *)&this->fields.mMomentum.fields.x),
              vdup_n_s32(0x3F2B851Fu))).n64_u64[0];
    v41 = this->fields.mMomentum.fields.z
        + (float)((float)((float)(this->fields.mMomentum.fields.z + (float)(v32 * v39)) - this->fields.mMomentum.fields.z)
                * 0.67);
    *(_QWORD *)&this->fields.mMomentum.fields.x = v40;
    this->fields.mMomentum.fields.z = v41;
  }
  else
  {
    v63 = v31.n64_u64[0];
    v42 = sub_24B9B38(0);
    v31.n64_u64[0] = v63;
    this->fields.mMomentum.fields.x = v42;
    this->fields.mMomentum.fields.y = v43;
    this->fields.mMomentum.fields.z = v44;
  }
  if ( this->fields.iOSDragEmulation && this->fields.dragEffect == 2 )
  {
    mPanel = this->fields.mPanel;
    v64 = v31.n64_u64[0];
    ((void (__fastcall *)(UnityEngine_Ray_o *__return_ptr, UIScrollView_o *, const MethodInfo *))this->klass->vtable._4_get_bounds.methodPtr)(
      &v65,
      this,
      this->klass->vtable._4_get_bounds.method);
    v46.n64_u64[0] = *(unsigned __int64 *)&v65.fields.m_Origin.fields.x;
    v47.n64_u64[0] = *(unsigned __int64 *)&v65.fields.m_Direction.fields.x;
    p_image = ((_QWORD *(__fastcall *)(UnityEngine_Ray_o *__return_ptr, UIScrollView_o *, const MethodInfo *))this->klass->vtable._4_get_bounds.methodPtr)(
                &v65,
                this,
                this->klass->vtable._4_get_bounds.method);
    if ( !mPanel )
      goto LABEL_76;
    v48 = vadd_f32(*(float32x2_t *)&v65.fields.m_Origin.fields.x, *(float32x2_t *)&v65.fields.m_Direction.fields.x).n64_f64[0];
    v49 = vsub_f32(v46, v47).n64_f64[0];
    LODWORD(v67) = ((float (__fastcall *)(struct UIPanel_o *, const MethodInfo *, double, float, double, float))mPanel->klass->vtable._22_CalculateConstrainOffset.methodPtr)(
                     mPanel,
                     mPanel->klass->vtable._22_CalculateConstrainOffset.method,
                     v49,
                     *((float *)&v49 + 1),
                     v48,
                     *((float *)&v48 + 1));
    HIDWORD(v67) = v50;
    v68 = v51;
    v52 = sub_244F1C8(&v67, 0);
    v53 = HIDWORD(v64);
    if ( v52 > 1.0 )
    {
      v74.fields.x = *(float *)&v64 * 0.5;
      v74.fields.y = *((float *)&v64 + 1) * 0.5;
      v74.fields.z = v32 * 0.5;
      UIScrollView__MoveAbsolute(this, v74, v7);
      v55 = this->fields.mMomentum.fields.z * 0.5;
      *(float32x2_t *)&this->fields.mMomentum.fields.x = vmul_f32(
                                                           *(float32x2_t *)&this->fields.mMomentum.fields.x,
                                                           (float32x2_t)0x3F0000003F000000LL);
      this->fields.mMomentum.fields.z = v55;
      goto LABEL_63;
    }
    v57 = v64;
    v56 = this;
  }
  else
  {
    v53 = v31.n64_u32[1];
    v56 = this;
    v57 = v31.n64_u32[0];
  }
  v58 = v32;
  UIScrollView__MoveAbsolute(v56, *(UnityEngine_Vector3_o *)(&v53 - 1), v7);
LABEL_63:
  if ( !this->fields.restrictWithinPanel )
    return;
  v59 = this->fields.mPanel;
  if ( !v59 )
    goto LABEL_76;
  if ( v59->fields.mClipping && this->fields.dragEffect != 2 )
  {
    v60 = this->fields.movement;
    v61 = 1;
    if ( v60 && v60 != 2 )
    {
      if ( v60 == 3 )
      {
        v61 = this->fields.customMovement.fields.x != 0.0;
        v62 = this->fields.customMovement.fields.y != 0.0;
LABEL_74:
        UIScrollView__RestrictWithinBounds_56292800(this, 1, v61, v62, v54);
        return;
      }
      v61 = 0;
    }
    v62 = (unsigned int)(v60 - 1) < 2;
    goto LABEL_74;
  }
}


void UIScrollView__GoToBottom(UIScrollView_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  int32_t contentPivot; // w0
  float v5; // s8

  if ( (byte_5975071 & 1) == 0 )
  {
    sub_2213A60(&NGUITools_TypeInfo);
    byte_5975071 = 1;
  }
  if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, method);
  if ( NGUITools__GetActive((UnityEngine_Behaviour_o *)this, 0) )
  {
    contentPivot = this->fields.contentPivot;
    this->fields.mCalculatedBounds = 0;
    LODWORD(v5) = *(_QWORD *)&NGUIMath__GetPivotOffset(contentPivot, v3);
    ((void (__fastcall *)(UIScrollView_o *, _QWORD, const MethodInfo *, float, float))this->klass->vtable._9_SetDragAmount.methodPtr)(
      this,
      0,
      this->klass->vtable._9_SetDragAmount.method,
      v5,
      1.0);
    ((void (__fastcall *)(UIScrollView_o *, __int64, const MethodInfo *, float, float))this->klass->vtable._9_SetDragAmount.methodPtr)(
      this,
      1,
      this->klass->vtable._9_SetDragAmount.method,
      v5,
      1.0);
  }
}


void UIScrollView__InvalidateBounds(UIScrollView_o *this, const MethodInfo *method)
{
  this->fields.mCalculatedBounds = 0;
}


bool UIScrollView__IsLimitOverPosition(UIScrollView_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct UIPanel_o *mPanel; // x0
  float v5; // s0
  float v6; // s1
  float v7; // s2
  int32_t movement; // w8
  __int64 v10; // [xsp+8h] [xbp-28h] BYREF
  float v11; // [xsp+14h] [xbp-1Ch]
  float v12; // [xsp+18h] [xbp-18h]

  ((void (__fastcall *)(__int64 *__return_ptr))this->klass->vtable._4_get_bounds.methodPtr)(&v10);
  mPanel = this->fields.mPanel;
  if ( !mPanel )
    sub_2213CDC(0, v3);
  ((void (__fastcall *)(struct UIPanel_o *, const MethodInfo *, float, float, float, float))mPanel->klass->vtable._22_CalculateConstrainOffset.methodPtr)(
    mPanel,
    mPanel->klass->vtable._22_CalculateConstrainOffset.method,
    *(float *)&v10 - v11,
    *((float *)&v10 + 1) - v12,
    *(float *)&v10 + v11,
    *((float *)&v10 + 1) + v12);
  movement = this->fields.movement;
  if ( movement )
  {
    v5 = 0.0;
    if ( movement != 1 )
      v6 = 0.0;
  }
  else
  {
    v6 = 0.0;
  }
  return (float)((float)(v7 * v7) + (float)((float)(v5 * v5) + (float)(v6 * v6))) > 0.1;
}


bool UIScrollView__IsLimitOverPosition2(UIScrollView_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct UIPanel_o *mPanel; // x0
  float v5; // s0
  float v6; // s1
  float v7; // s2
  int32_t movement; // w8
  __int64 v10; // [xsp+8h] [xbp-28h] BYREF
  float v11; // [xsp+14h] [xbp-1Ch]
  float v12; // [xsp+18h] [xbp-18h]

  ((void (__fastcall *)(__int64 *__return_ptr))this->klass->vtable._4_get_bounds.methodPtr)(&v10);
  mPanel = this->fields.mPanel;
  if ( !mPanel )
    sub_2213CDC(0, v3);
  ((void (__fastcall *)(struct UIPanel_o *, const MethodInfo *, float, float, float, float))mPanel->klass->vtable._22_CalculateConstrainOffset.methodPtr)(
    mPanel,
    mPanel->klass->vtable._22_CalculateConstrainOffset.method,
    *(float *)&v10 - v11,
    *((float *)&v10 + 1) - v12,
    *(float *)&v10 + v11,
    *((float *)&v10 + 1) + v12);
  movement = this->fields.movement;
  if ( movement )
  {
    v5 = 0.0;
    if ( movement != 1 )
      v6 = 0.0;
  }
  else
  {
    v6 = 0.0;
  }
  return (float)((float)(v7 * v7) + (float)((float)(v5 * v5) + (float)(v6 * v6))) > 0.2;
}


// local variable allocation has failed, the output may be wrong!
bool UIScrollView__IsLimitOverPosition2_56300764(
        UIScrollView_o *this,
        UnityEngine_Vector3_o offset,
        const MethodInfo *method)
{
  float y; // s8
  float x; // s9
  __int64 v6; // x1
  struct UIPanel_o *mPanel; // x0
  float v8; // s0
  float v9; // s1
  float v10; // s2
  int32_t movement; // w8
  __int64 v13; // [xsp+8h] [xbp-38h] BYREF
  float v14; // [xsp+14h] [xbp-2Ch]
  float v15; // [xsp+18h] [xbp-28h]

  y = offset.fields.y;
  x = offset.fields.x;
  ((void (__fastcall *)(__int64 *__return_ptr, long double, long double, long double))this->klass->vtable._4_get_bounds.methodPtr)(
    &v13,
    *(long double *)&offset.fields.x,
    *(long double *)&offset.fields.y,
    *(long double *)&offset.fields.z);
  mPanel = this->fields.mPanel;
  if ( !mPanel )
    sub_2213CDC(0, v6);
  ((void (__fastcall *)(struct UIPanel_o *, const MethodInfo *, float, float, float, float))mPanel->klass->vtable._22_CalculateConstrainOffset.methodPtr)(
    mPanel,
    mPanel->klass->vtable._22_CalculateConstrainOffset.method,
    x + (float)(*(float *)&v13 - v14),
    y + (float)(*((float *)&v13 + 1) - v15),
    x + (float)(*(float *)&v13 + v14),
    y + (float)(*((float *)&v13 + 1) + v15));
  movement = this->fields.movement;
  if ( movement )
  {
    v8 = 0.0;
    if ( movement != 1 )
      v9 = 0.0;
  }
  else
  {
    v9 = 0.0;
  }
  return (float)((float)(v10 * v10) + (float)((float)(v8 * v8) + (float)(v9 * v9))) > 0.2;
}


// local variable allocation has failed, the output may be wrong!
void UIScrollView__LateUpdate(UIScrollView_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  float deltaTime; // s8
  UnityEngine_Object_o *verticalScrollBar; // x20
  UnityEngine_Object_o *horizontalScrollBar; // x20
  float x; // s9
  float32x2_t v8; // d10
  unsigned __int64 v9; // d1
  char v10; // w21
  char v11; // w20
  UnityEngine_Object_o *v12; // x22
  UIProgressBar_o *mTrans; // x0
  float alpha; // s0
  float v15; // s1
  float v16; // s0
  float v17; // s1
  float v18; // s9
  UnityEngine_Object_o *v19; // x21
  float v20; // s0
  float v21; // s1
  float v22; // s0
  float v23; // s1
  float v24; // s9
  float v25; // s9
  float32x2_t v26; // d10
  unsigned __int64 v27; // d1
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float z; // s1
  const MethodInfo_3820CA8 *v30; // x1
  __int64 v31; // x1
  Il2CppObject *Component_object; // x20
  struct UIScrollView_OnDragNotification_o *onStoppedMoving; // x8
  int32_t movement; // w8
  float v35; // s0 OVERLAPPED
  float v36; // s1
  float mScroll; // s0
  int v38; // s2
  float v39; // s9
  float32x2_t v40; // d10
  float y; // v0.s[1]
  const MethodInfo *v42; // x0
  const MethodInfo *v43; // x1
  const MethodInfo *v44; // x1
  struct UIPanel_o *mPanel; // x8
  UnityEngine_Behaviour_o *centerOnChild; // x20
  const MethodInfo *v47; // x4
  int32_t v48; // w8
  char v49; // w2
  bool v50; // w3
  float v51; // s1
  float v52; // s2
  UnityEngine_Vector3_o v53; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED
  UnityEngine_Vector3_o v54; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_5975077 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Application_TypeInfo);
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_SpringPanel___);
    sub_2213A60(&NGUITools_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5975077 = 1;
  }
  if ( !*(&UnityEngine_Application_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo, method);
  if ( !UnityEngine_Application__get_isPlaying(0) )
    return;
  deltaTime = RealTime__get_deltaTime(0);
  if ( this->fields.showScrollBars )
  {
    verticalScrollBar = (UnityEngine_Object_o *)this->fields.verticalScrollBar;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v3);
    if ( UnityEngine_Object__op_Implicit(verticalScrollBar, 0) )
      goto LABEL_103;
    horizontalScrollBar = (UnityEngine_Object_o *)this->fields.horizontalScrollBar;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v3);
    if ( UnityEngine_Object__op_Implicit(horizontalScrollBar, 0) )
    {
LABEL_103:
      if ( this->fields.showScrollBars != 2 || this->fields.mDragID != -10 )
        goto LABEL_20;
      if ( !byte_5969AE2 )
      {
        sub_2213A60(&System_Math_TypeInfo);
        byte_5969AE2 = 1;
      }
      x = this->fields.mMomentum.fields.x;
      v8.n64_u64[0] = *(unsigned __int64 *)&this->fields.mMomentum.fields.y;
      if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v3);
      v9 = vmul_f32(v8, v8).n64_u64[0];
      if ( sqrtf((float)((float)(x * x) + *(float *)&v9) + *((float *)&v9 + 1)) <= 0.01 )
      {
        v11 = 0;
        v10 = 0;
      }
      else
      {
LABEL_20:
        v10 = ((__int64 (__fastcall *)(UIScrollView_o *, const MethodInfo *))this->klass->vtable._6_get_shouldMoveVertically.methodPtr)(
                this,
                this->klass->vtable._6_get_shouldMoveVertically.method);
        v11 = ((__int64 (__fastcall *)(UIScrollView_o *, const MethodInfo *))this->klass->vtable._5_get_shouldMoveHorizontally.methodPtr)(
                this,
                this->klass->vtable._5_get_shouldMoveHorizontally.method);
      }
      v12 = (UnityEngine_Object_o *)this->fields.verticalScrollBar;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v3);
      if ( UnityEngine_Object__op_Implicit(v12, 0) )
      {
        mTrans = this->fields.verticalScrollBar;
        if ( !mTrans )
          goto LABEL_100;
        alpha = UIProgressBar__get_alpha(mTrans, 0);
        v15 = -3.0;
        mTrans = this->fields.verticalScrollBar;
        if ( (v10 & 1) != 0 )
          v15 = 6.0;
        v16 = (float)(deltaTime * v15) + alpha;
        v17 = 1.0;
        if ( v16 <= 1.0 )
          v17 = v16;
        v18 = v16 >= 0.0 ? v17 : 0.0;
        if ( !mTrans )
          goto LABEL_100;
        if ( UIProgressBar__get_alpha(mTrans, 0) != v18 )
        {
          mTrans = this->fields.verticalScrollBar;
          if ( !mTrans )
            goto LABEL_100;
          UIProgressBar__set_alpha(mTrans, v18, 0);
        }
      }
      v19 = (UnityEngine_Object_o *)this->fields.horizontalScrollBar;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v3);
      if ( UnityEngine_Object__op_Implicit(v19, 0) )
      {
        mTrans = this->fields.horizontalScrollBar;
        if ( !mTrans )
          goto LABEL_100;
        v20 = UIProgressBar__get_alpha(mTrans, 0);
        v21 = -3.0;
        mTrans = this->fields.horizontalScrollBar;
        if ( (v11 & 1) != 0 )
          v21 = 6.0;
        v22 = (float)(deltaTime * v21) + v20;
        v23 = 1.0;
        if ( v22 <= 1.0 )
          v23 = v22;
        v24 = v22 >= 0.0 ? v23 : 0.0;
        if ( !mTrans )
          goto LABEL_100;
        if ( UIProgressBar__get_alpha(mTrans, 0) != v24 )
        {
          mTrans = this->fields.horizontalScrollBar;
          if ( !mTrans )
            goto LABEL_100;
          UIProgressBar__set_alpha(mTrans, v24, 0);
        }
      }
    }
  }
  if ( !this->fields.mShouldMove )
    return;
  if ( this->fields.mPressed )
  {
    this->fields.mScroll = 0.0;
    NGUIMath__SpringDampen(&this->fields.mMomentum, 9.0, deltaTime, v3);
    return;
  }
  if ( !byte_5969AE2 )
  {
    sub_2213A60(&System_Math_TypeInfo);
    byte_5969AE2 = 1;
  }
  v25 = this->fields.mMomentum.fields.x;
  v26.n64_u64[0] = *(unsigned __int64 *)&this->fields.mMomentum.fields.y;
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v3);
  v27 = vmul_f32(v26, v26).n64_u64[0];
  if ( sqrtf((float)((float)(v25 * v25) + *(float *)&v27) + *((float *)&v27 + 1)) <= 0.0001
    && this->fields.mScroll == 0.0 )
  {
    this->fields.mScroll = 0.0;
    if ( !byte_5969AE0 )
    {
      sub_2213A60(&UnityEngine_Vector3_TypeInfo);
      byte_5969AE0 = 1;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    z = static_fields->zeroVector.fields.z;
    v30 = (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_SpringPanel___;
    *(_QWORD *)&this->fields.mMomentum.fields.x = *(_QWORD *)&static_fields->zeroVector.fields.x;
    this->fields.mMomentum.fields.z = z;
    Component_object = UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)this, v30);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v31);
    mTrans = (UIProgressBar_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
    if ( ((unsigned __int8)mTrans & 1) == 0 )
      goto LABEL_67;
    if ( Component_object )
    {
      if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)Component_object, 0) )
        return;
LABEL_67:
      onStoppedMoving = this->fields.onStoppedMoving;
      this->fields.mShouldMove = 0;
      if ( !onStoppedMoving )
        return;
LABEL_99:
      ((void (__fastcall *)(intptr_t, intptr_t))onStoppedMoving->fields.invoke_impl)(
        onStoppedMoving->fields.method_code,
        onStoppedMoving->fields.method);
      return;
    }
LABEL_100:
    sub_2213CDC(mTrans, v3);
  }
  movement = this->fields.movement;
  mTrans = (UIProgressBar_o *)this->fields.mTrans;
  if ( movement == 2 )
  {
    if ( !mTrans )
      goto LABEL_100;
    v35 = this->fields.mScroll * 0.05;
    v36 = v35;
  }
  else if ( movement == 1 )
  {
    if ( !mTrans )
      goto LABEL_100;
    v36 = this->fields.mScroll * 0.05;
    v35 = 0.0;
  }
  else if ( movement )
  {
    if ( !mTrans )
      goto LABEL_100;
    mScroll = this->fields.mScroll;
    v36 = (float)(mScroll * this->fields.customMovement.fields.y) * 0.05;
    v35 = (float)(mScroll * this->fields.customMovement.fields.x) * 0.05;
  }
  else
  {
    if ( !mTrans )
      goto LABEL_100;
    v35 = this->fields.mScroll * 0.05;
    v36 = 0.0;
  }
  v38 = 0;
  v39 = this->fields.mMomentum.fields.z;
  v40.n64_u64[0] = *(unsigned __int64 *)&this->fields.mMomentum.fields.x;
  v53 = UnityEngine_Transform__TransformDirection((UnityEngine_Transform_o *)mTrans, *(UnityEngine_Vector3_o *)&v35, 0);
  y = v53.fields.y;
  this->fields.mMomentum.fields.z = v39 - v53.fields.z;
  *(float32x2_t *)&v53.fields.y = vsub_f32(v40, *(float32x2_t *)&v53.fields.x);
  v53.fields.x = this->fields.mScroll;
  *(_QWORD *)&this->fields.mMomentum.fields.x = *(_QWORD *)&v53.fields.y;
  this->fields.mScroll = NGUIMath__SpringLerp_56302512(v53.fields.x, 0.0, 20.0, deltaTime, v42);
  v54 = NGUIMath__SpringDampen(&this->fields.mMomentum, 9.0, deltaTime, v43);
  UIScrollView__MoveAbsolute(this, v54, v44);
  if ( this->fields.restrictWithinPanel )
  {
    mPanel = this->fields.mPanel;
    if ( !mPanel )
      goto LABEL_100;
    if ( mPanel->fields.mClipping )
    {
      centerOnChild = (UnityEngine_Behaviour_o *)this->fields.centerOnChild;
      if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v3);
      if ( NGUITools__GetActive(centerOnChild, 0) )
      {
        mTrans = (UIProgressBar_o *)this->fields.centerOnChild;
        if ( !mTrans )
          goto LABEL_100;
        if ( *((float *)&mTrans->fields.onDragFinished + 1) == 0.0 )
        {
          ((void (__fastcall *)(UIProgressBar_o *, const MethodInfo *))mTrans->klass->vtable._4_Upgrade.methodPtr)(
            mTrans,
            mTrans->klass->vtable._4_Upgrade.method);
        }
        else
        {
          this->fields.mMomentum.fields.x = sub_24B9B38(0);
          this->fields.mMomentum.fields.y = v51;
          this->fields.mMomentum.fields.z = v52;
          this->fields.mScroll = 0.0;
        }
        goto LABEL_98;
      }
      v48 = this->fields.movement;
      v49 = 1;
      if ( v48 && v48 != 2 )
      {
        if ( v48 == 3 )
        {
          v49 = this->fields.customMovement.fields.x != 0.0;
          v50 = this->fields.customMovement.fields.y != 0.0;
LABEL_97:
          UIScrollView__RestrictWithinBounds_56292800(this, 0, v49, v50, v47);
          goto LABEL_98;
        }
        v49 = 0;
      }
      v50 = (unsigned int)(v48 - 1) < 2;
      goto LABEL_97;
    }
  }
LABEL_98:
  onStoppedMoving = this->fields.onMomentumMove;
  if ( onStoppedMoving )
    goto LABEL_99;
}


void UIScrollView__MoveAbsolute(UIScrollView_o *this, UnityEngine_Vector3_o absolute, const MethodInfo *method)
{
  UnityEngine_Transform_o *mTrans; // x0
  float x; // s9
  float y; // s8
  float z; // s10
  UnityEngine_Transform_o *v8; // x20
  UnityEngine_Vector3_o v9; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v10; // 0:s0.4,4:s1.4,8:s2.4

  mTrans = this->fields.mTrans;
  if ( !mTrans )
    goto LABEL_6;
  v9 = UnityEngine_Transform__InverseTransformPoint(mTrans, absolute, 0);
  x = v9.fields.x;
  y = v9.fields.y;
  z = v9.fields.z;
  v8 = this->fields.mTrans;
  if ( !byte_5969AE0 )
  {
    mTrans = (UnityEngine_Transform_o *)sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE0 = 1;
  }
  if ( !v8 )
LABEL_6:
    sub_2213CDC(mTrans, method);
  v10 = UnityEngine_Transform__InverseTransformPoint(v8, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
  ((void (__fastcall *)(UIScrollView_o *, const MethodInfo *, float, float, float))this->klass->vtable._10_MoveRelative.methodPtr)(
    this,
    this->klass->vtable._10_MoveRelative.method,
    x - v10.fields.x,
    y - v10.fields.y,
    z - v10.fields.z);
}


void UIScrollView__MoveRelative(UIScrollView_o *this, UnityEngine_Vector3_o relative, const MethodInfo *method)
{
  UnityEngine_Transform_o *mTrans; // x20
  UIScrollView_o **v4; // x19
  float z; // s10
  float y; // s8
  float x; // s9
  UnityEngine_Vector2_o v8; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  mTrans = this->fields.mTrans;
  if ( !mTrans )
    goto LABEL_4;
  v4 = (UIScrollView_o **)this;
  z = relative.fields.z;
  y = relative.fields.y;
  x = relative.fields.x;
  localPosition = UnityEngine_Transform__get_localPosition(this->fields.mTrans, 0);
  localPosition.fields.x = x + localPosition.fields.x;
  localPosition.fields.y = y + localPosition.fields.y;
  localPosition.fields.z = z + localPosition.fields.z;
  UnityEngine_Transform__set_localPosition(mTrans, localPosition, 0);
  this = v4[19];
  if ( !this )
LABEL_4:
    sub_2213CDC(this, method);
  v8.fields.x = *((float *)&this[1].fields.verticalScrollBar + 1) - x;
  v8.fields.y = *(float *)&this[1].fields.showScrollBars - y;
  UIPanel__set_clipOffset((UIPanel_o *)this, v8, 0);
  (*(void (__fastcall **)(UIScrollView_o **, _QWORD, _QWORD))&(*v4)[1].fields.mLastPos.fields.x)(
    v4,
    0,
    *(_QWORD *)&(*v4)[1].fields.mLastPos.fields.z);
}


void UIScrollView__OnDisable(UIScrollView_o *this, const MethodInfo *method)
{
  UIScrollView_c *v3; // x0
  BetterList_T__o *list; // x0

  if ( (byte_597506B & 1) == 0 )
  {
    sub_2213A60(&Method_BetterList_UIScrollView__Remove__);
    sub_2213A60(&UIScrollView_TypeInfo);
    byte_597506B = 1;
  }
  v3 = UIScrollView_TypeInfo;
  if ( !*(&UIScrollView_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UIScrollView_TypeInfo, method);
    v3 = UIScrollView_TypeInfo;
  }
  list = (BetterList_T__o *)v3->static_fields->list;
  if ( !list )
    sub_2213CDC(0, method);
  BetterList_object___Remove(
    list,
    (Il2CppObject *)this,
    (const MethodInfo_3E6FCC4 *)Method_BetterList_UIScrollView__Remove__);
}


void UIScrollView__OnEnable(UIScrollView_o *this, const MethodInfo *method)
{
  UIScrollView_c *v3; // x0
  BetterList_T__o *list; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x1

  if ( (byte_5975068 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Application_TypeInfo);
    sub_2213A60(&Method_BetterList_UIScrollView__Add__);
    sub_2213A60(&UIScrollView_TypeInfo);
    byte_5975068 = 1;
  }
  v3 = UIScrollView_TypeInfo;
  if ( !*(&UIScrollView_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UIScrollView_TypeInfo, method);
    v3 = UIScrollView_TypeInfo;
  }
  list = (BetterList_T__o *)v3->static_fields->list;
  if ( !list )
    sub_2213CDC(0, method);
  BetterList_object___Add(list, (Il2CppObject *)this, (const MethodInfo_3E6FA08 *)Method_BetterList_UIScrollView__Add__);
  if ( this->fields.mStarted )
  {
    if ( !*(&UnityEngine_Application_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo, v5);
    if ( UnityEngine_Application__get_isPlaying(0) )
      UIScrollView__CheckScrollbars(this, v6);
  }
}


void UIScrollView__OnScrollBar(UIScrollView_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *horizontalScrollBar; // x20
  __int64 v4; // x1
  float value; // s8
  UIProgressBar_o *v6; // x0
  UnityEngine_Object_o *verticalScrollBar; // x20
  bool v8; // w0
  long double v9; // q1

  if ( (byte_5975073 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5975073 = 1;
  }
  if ( !this->fields.mIgnoreCallbacks )
  {
    horizontalScrollBar = (UnityEngine_Object_o *)this->fields.horizontalScrollBar;
    this->fields.mIgnoreCallbacks = 1;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
    value = 0.0;
    if ( UnityEngine_Object__op_Inequality(horizontalScrollBar, 0, 0) )
    {
      v6 = this->fields.horizontalScrollBar;
      if ( !v6 )
        goto LABEL_16;
      value = UIProgressBar__get_value(v6, 0);
    }
    verticalScrollBar = (UnityEngine_Object_o *)this->fields.verticalScrollBar;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
    v8 = UnityEngine_Object__op_Inequality(verticalScrollBar, 0, 0);
    *(_QWORD *)&v9 = 0;
    if ( !v8 )
      goto LABEL_14;
    v6 = this->fields.verticalScrollBar;
    if ( v6 )
    {
      LODWORD(v9) = UIProgressBar__get_value(v6, 0);
LABEL_14:
      ((void (__fastcall *)(UIScrollView_o *, _QWORD, const MethodInfo *, float, long double))this->klass->vtable._9_SetDragAmount.methodPtr)(
        this,
        0,
        this->klass->vtable._9_SetDragAmount.method,
        value,
        v9);
      this->fields.mIgnoreCallbacks = 0;
      return;
    }
LABEL_16:
    sub_2213CDC(v6, v4);
  }
}


// local variable allocation has failed, the output may be wrong!
void UIScrollView__Press(UIScrollView_o *this, bool pressed, const MethodInfo *method)
{
  UICamera_c *v5; // x0
  __int64 v6; // x1
  UnityEngine_GameObject_o *gameObject; // x21
  __int64 v8; // x1
  UICamera_c *v9; // x0
  int32_t mDragID; // w21
  UIScrollView_c *klass; // x8
  char v12; // w0
  __int64 v13; // x1
  float v14; // s1
  float v15; // s2
  const MethodInfo *v16; // x1
  __int64 v17; // x1
  UICamera_c *v18; // x0
  struct UICamera_StaticFields *static_fields; // x8
  UnityEngine_Transform_o *mTrans; // x0
  float z; // w9
  __int64 v22; // x8
  float x; // s8
  float y; // s9
  float v25; // s10
  float w; // s11
  float v27; // s1
  float v28; // s2
  float v29; // s3
  float v30; // s4
  float v31; // s5
  struct UIPanel_o *mPanel; // x8
  float v33; // s9
  float v34; // s8
  __int64 v35; // x0
  float v36; // s0
  float v37; // s10
  float v38; // s8
  __int64 v39; // x0
  float v40; // s9
  __int64 v41; // x0
  float v42; // s0
  float v43; // s0
  struct UIScrollView_OnDragNotification_o *onDragStarted; // x8
  float v45; // s1
  UnityEngine_Object_o *centerOnChild; // x20
  const MethodInfo *v47; // x4
  void (*methodPtr)(void); // x2
  struct UIPanel_o *v49; // x8
  int32_t movement; // w9
  char v51; // w2
  bool v52; // w3
  struct UIScrollView_OnDragNotification_o *onDragFinished; // x8
  struct UIScrollView_OnDragNotification_o *onStoppedMoving; // x8
  struct UnityEngine_Plane_o v55; // [xsp+0h] [xbp-60h] BYREF
  UnityEngine_Vector2_o v56; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o v57; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v59; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v60; // 0:s4.4,4:s5.4,8:s6.4
  UnityEngine_Quaternion_o rotation; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v62; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_5975074 & 1) == 0 )
  {
    sub_2213A60(&NGUITools_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&UICamera_TypeInfo);
    byte_5975074 = 1;
  }
  v5 = UICamera_TypeInfo;
  if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, pressed);
    v5 = UICamera_TypeInfo;
  }
  if ( v5->static_fields->currentScheme == 2 )
    return;
  if ( this->fields.smoothDragStart && pressed )
  {
    this->fields.mDragStarted = 0;
    if ( !byte_59699C0 )
    {
      sub_2213A60(&UnityEngine_Vector2_TypeInfo);
      byte_59699C0 = 1;
    }
    this->fields.mDragStartOffset = UnityEngine_Vector2_TypeInfo->static_fields->zeroVector;
  }
  if ( !UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0) )
    return;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v6);
  if ( !NGUITools__GetActive_56411004(gameObject, 0) )
    return;
  if ( !pressed )
  {
    v9 = UICamera_TypeInfo;
    mDragID = this->fields.mDragID;
    if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v8);
      v9 = UICamera_TypeInfo;
    }
    if ( mDragID == v9->static_fields->currentTouchID )
      this->fields.mDragID = -10;
  }
  klass = this->klass;
  this->fields.mCalculatedBounds = 0;
  v12 = ((__int64 (__fastcall *)(UIScrollView_o *, const MethodInfo *))klass->vtable._7_get_shouldMove.methodPtr)(
          this,
          klass->vtable._7_get_shouldMove.method);
  this->fields.mShouldMove = v12 & 1;
  if ( (v12 & 1) == 0 )
    return;
  this->fields.mPressed = pressed;
  if ( pressed )
  {
    this->fields.mMomentum.fields.x = sub_24B9B38(0);
    this->fields.mMomentum.fields.y = v14;
    this->fields.mMomentum.fields.z = v15;
    this->fields.mScroll = 0.0;
    UIScrollView__DisableSpring(this, v16);
    v18 = UICamera_TypeInfo;
    if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v17);
      v18 = UICamera_TypeInfo;
    }
    static_fields = v18->static_fields;
    mTrans = this->fields.mTrans;
    z = static_fields->lastWorldPosition.fields.z;
    v22 = *(_QWORD *)&static_fields->lastWorldPosition.fields.x;
    this->fields.mLastPos.fields.z = z;
    *(_QWORD *)&this->fields.mLastPos.fields.x = v22;
    if ( mTrans )
    {
      rotation = UnityEngine_Transform__get_rotation(mTrans, 0);
      x = rotation.fields.x;
      y = rotation.fields.y;
      v25 = rotation.fields.z;
      w = rotation.fields.w;
      v60.fields.x = sub_35AC7A4(0);
      v60.fields.y = v27;
      v60.fields.z = v28;
      v62.fields.x = x;
      v62.fields.y = y;
      v62.fields.z = v25;
      v62.fields.w = w;
      v57 = UnityEngine_Quaternion__op_Multiply_83371700(v62, v60, 0);
      v29 = this->fields.mLastPos.fields.x;
      v30 = this->fields.mLastPos.fields.y;
      v31 = this->fields.mLastPos.fields.z;
      v55 = (struct UnityEngine_Plane_o)0LL;
      mTrans = (UnityEngine_Transform_o *)sub_35AC7E8(&v55, 0, v57.fields.x, v57.fields.y, v57.fields.z, v29, v30, v31);
      mPanel = this->fields.mPanel;
      this->fields.mPlane = v55;
      if ( mPanel )
      {
        v33 = mPanel->fields.mClipOffset.fields.y;
        v34 = sub_2016E48(mTrans, mPanel->fields.mClipOffset.fields.x);
        v36 = sub_2016E48(v35, v33);
        mTrans = (UnityEngine_Transform_o *)this->fields.mPanel;
        if ( mTrans )
        {
          v56.fields.y = v36;
          v56.fields.x = v34;
          UIPanel__set_clipOffset((UIPanel_o *)mTrans, v56, 0);
          mTrans = this->fields.mTrans;
          if ( mTrans )
          {
            localPosition = UnityEngine_Transform__get_localPosition(mTrans, 0);
            v37 = localPosition.fields.y;
            v38 = localPosition.fields.z;
            v40 = sub_2016E48(v39, localPosition.fields.x);
            v42 = sub_2016E48(v41, v37);
            mTrans = this->fields.mTrans;
            if ( mTrans )
            {
              v59.fields.y = v42;
              v59.fields.x = v40;
              v59.fields.z = v38;
              UnityEngine_Transform__set_localPosition(mTrans, v59, 0);
              if ( !this->fields.smoothDragStart )
              {
                this->fields.mDragStarted = 1;
                v43 = sub_3117430(0);
                onDragStarted = this->fields.onDragStarted;
                this->fields.mDragStartOffset.fields.x = v43;
                this->fields.mDragStartOffset.fields.y = v45;
                if ( onDragStarted )
                  ((void (__fastcall *)(intptr_t, intptr_t))onDragStarted->fields.invoke_impl)(
                    onDragStarted->fields.method_code,
                    onDragStarted->fields.method);
              }
              return;
            }
          }
        }
      }
    }
LABEL_55:
    sub_2213CDC(mTrans, v17);
  }
  centerOnChild = (UnityEngine_Object_o *)this->fields.centerOnChild;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13);
  mTrans = (UnityEngine_Transform_o *)UnityEngine_Object__op_Implicit(centerOnChild, 0);
  if ( ((unsigned __int8)mTrans & 1) != 0 )
  {
    mTrans = (UnityEngine_Transform_o *)this->fields.centerOnChild;
    if ( !mTrans )
      goto LABEL_55;
    methodPtr = mTrans->klass->vtable._4_GetEnumerator.methodPtr;
LABEL_37:
    methodPtr();
    return;
  }
  if ( this->fields.restrictWithinPanel )
  {
    v49 = this->fields.mPanel;
    if ( !v49 )
      goto LABEL_55;
    if ( v49->fields.mClipping )
    {
      movement = this->fields.movement;
      v51 = 1;
      if ( movement && movement != 2 )
      {
        if ( movement == 3 )
        {
          v51 = this->fields.customMovement.fields.x != 0.0;
          v52 = this->fields.customMovement.fields.y != 0.0;
LABEL_47:
          UIScrollView__RestrictWithinBounds_56292800(this, this->fields.dragEffect == 0, v51, v52, v47);
          goto LABEL_48;
        }
        v51 = 0;
      }
      v52 = (unsigned int)(movement - 1) < 2;
      goto LABEL_47;
    }
  }
LABEL_48:
  if ( this->fields.mDragStarted )
  {
    onDragFinished = this->fields.onDragFinished;
    if ( onDragFinished )
      ((void (__fastcall *)(intptr_t, intptr_t))onDragFinished->fields.invoke_impl)(
        onDragFinished->fields.method_code,
        onDragFinished->fields.method);
  }
  if ( !this->fields.mShouldMove )
  {
    onStoppedMoving = this->fields.onStoppedMoving;
    if ( onStoppedMoving )
    {
      methodPtr = (void (*)(void))onStoppedMoving->fields.invoke_impl;
      goto LABEL_37;
    }
  }
}


void UIScrollView__ResetPosition(UIScrollView_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  int32_t contentPivot; // w0
  UnityEngine_Vector2_o PivotOffset; // kr00_8

  if ( (byte_5975070 & 1) == 0 )
  {
    sub_2213A60(&NGUITools_TypeInfo);
    byte_5975070 = 1;
  }
  if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, method);
  if ( NGUITools__GetActive((UnityEngine_Behaviour_o *)this, 0) )
  {
    contentPivot = this->fields.contentPivot;
    this->fields.mCalculatedBounds = 0;
    PivotOffset = NGUIMath__GetPivotOffset(contentPivot, v3);
    ((void (__fastcall *)(UIScrollView_o *, _QWORD, const MethodInfo *))this->klass->vtable._9_SetDragAmount.methodPtr)(
      this,
      0,
      this->klass->vtable._9_SetDragAmount.method);
    ((void (__fastcall *)(UIScrollView_o *, __int64, const MethodInfo *, float, float))this->klass->vtable._9_SetDragAmount.methodPtr)(
      this,
      1,
      this->klass->vtable._9_SetDragAmount.method,
      PivotOffset.fields.x,
      1.0 - PivotOffset.fields.y);
  }
}


bool UIScrollView__RestrictWithinBounds(UIScrollView_o *this, bool instant, const MethodInfo *method)
{
  const MethodInfo *v3; // x4

  return UIScrollView__RestrictWithinBounds_56292800(this, instant, 1, 1, v3);
}


bool UIScrollView__RestrictWithinBounds_56292800(
        UIScrollView_o *this,
        bool instant,
        bool horizontal,
        bool vertical,
        const MethodInfo *method)
{
  __int64 v9; // x1
  UnityEngine_Transform_o *mPanel; // x0
  float v11; // s0
  float v12; // s1
  float v13; // s2
  float v14; // s8
  float v15; // s10
  float v16; // s9
  float v17; // s12
  float v18; // s10
  float v19; // s11
  float z; // s9
  double v21; // d0
  double v22; // d0
  float v23; // s2
  float v24; // s1
  float v25; // s10
  double v26; // d0
  double v27; // d0
  float v28; // s2
  float v29; // s1
  float v30; // s11
  UnityEngine_GameObject_o *gameObject; // x0
  double iptr; // [xsp+8h] [xbp-78h] BYREF
  float v34; // [xsp+14h] [xbp-6Ch]
  float v35; // [xsp+18h] [xbp-68h]
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v37; // 0:s0.4,4:s1.4,8:s2.4

  ((void (__fastcall *)(double *__return_ptr, UIScrollView_o *, const MethodInfo *, bool, bool, const MethodInfo *))this->klass->vtable._4_get_bounds.methodPtr)(
    &iptr,
    this,
    this->klass->vtable._4_get_bounds.method,
    horizontal,
    vertical,
    method);
  mPanel = (UnityEngine_Transform_o *)this->fields.mPanel;
  if ( !mPanel )
    goto LABEL_43;
  (*(void (__fastcall **)(UnityEngine_Transform_o *, _QWORD, float, float, float, float))&mPanel->klass[1]._2.thread_static_fields_offset)(
    mPanel,
    *(_QWORD *)&mPanel->klass[1]._2.token,
    *(float *)&iptr - v34,
    *((float *)&iptr + 1) - v35,
    *(float *)&iptr + v34,
    *((float *)&iptr + 1) + v35);
  v14 = v13;
  if ( horizontal )
    v15 = v11;
  else
    v15 = 0.0;
  if ( vertical )
    v16 = v12;
  else
    v16 = 0.0;
  v17 = (float)(v13 * v13) + (float)((float)(v15 * v15) + (float)(v16 * v16));
  if ( v17 > 0.1 )
  {
    if ( !instant && this->fields.dragEffect == 2 )
    {
      mPanel = this->fields.mTrans;
      if ( !mPanel )
        goto LABEL_43;
      localPosition = UnityEngine_Transform__get_localPosition(mPanel, 0);
      v18 = v15 + localPosition.fields.x;
      v19 = v16 + localPosition.fields.y;
      z = localPosition.fields.z;
      v21 = modf(v18, &iptr);
      if ( v18 >= 0.0 )
      {
        if ( v21 != 0.5 )
        {
          v25 = floorf(v18 + 0.5);
          goto LABEL_29;
        }
        v22 = iptr;
        v23 = 1.0;
      }
      else
      {
        if ( v21 != -0.5 )
        {
          v25 = ceilf(v18 + -0.5);
          goto LABEL_29;
        }
        v22 = iptr;
        v23 = -1.0;
      }
      if ( ((__int64)v22 & 1) != 0 )
      {
        v24 = v22;
        v25 = v24 + v23;
      }
      else
      {
        v25 = v22;
      }
LABEL_29:
      v26 = modf(v19, &iptr);
      if ( v19 >= 0.0 )
      {
        if ( v26 != 0.5 )
        {
          v30 = floorf(v19 + 0.5);
          goto LABEL_39;
        }
        v27 = iptr;
        v28 = 1.0;
      }
      else
      {
        if ( v26 != -0.5 )
        {
          v30 = ceilf(v19 + -0.5);
          goto LABEL_39;
        }
        v27 = iptr;
        v28 = -1.0;
      }
      if ( ((__int64)v27 & 1) != 0 )
      {
        v29 = v27;
        v30 = v29 + v28;
      }
      else
      {
        v30 = v27;
      }
LABEL_39:
      mPanel = (UnityEngine_Transform_o *)this->fields.mPanel;
      if ( mPanel )
      {
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mPanel, 0);
        v37.fields.x = v25;
        v37.fields.y = v30;
        v37.fields.z = v14 + z;
        mPanel = (UnityEngine_Transform_o *)SpringPanel__Begin(gameObject, v37, 13.0, 0);
        if ( mPanel )
        {
          HIDWORD(mPanel[1].fields.m_CachedPtr) = 1090519040;
          return v17 > 0.1;
        }
      }
LABEL_43:
      sub_2213CDC(mPanel, v9);
    }
    ((void (__fastcall *)(UIScrollView_o *, const MethodInfo *, float, float, float))this->klass->vtable._10_MoveRelative.methodPtr)(
      this,
      this->klass->vtable._10_MoveRelative.method,
      v15,
      v16,
      v13);
    if ( fabsf(v15) > 0.01 )
      this->fields.mMomentum.fields.x = 0.0;
    if ( fabsf(v16) > 0.01 )
      this->fields.mMomentum.fields.y = 0.0;
    if ( fabsf(v14) > 0.01 )
      this->fields.mMomentum.fields.z = 0.0;
    this->fields.mScroll = 0.0;
  }
  return v17 > 0.1;
}


void UIScrollView__Scroll(UIScrollView_o *this, float delta, const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_GameObject_o *gameObject; // x20
  const MethodInfo *v7; // x1
  bool mShouldMove; // w20
  char v9; // w0
  float mScroll; // s0
  float v11; // s1
  float v12; // s3

  if ( (byte_5975076 & 1) == 0 )
  {
    sub_2213A60(&NGUITools_TypeInfo);
    byte_5975076 = 1;
  }
  if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0) )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v5);
    if ( NGUITools__GetActive_56411004(gameObject, 0) && this->fields.scrollWheelFactor != 0.0 )
    {
      UIScrollView__DisableSpring(this, v7);
      mShouldMove = this->fields.mShouldMove;
      v9 = ((__int64 (__fastcall *)(UIScrollView_o *, const MethodInfo *))this->klass->vtable._7_get_shouldMove.methodPtr)(
             this,
             this->klass->vtable._7_get_shouldMove.method);
      mScroll = this->fields.mScroll;
      v11 = 1.0;
      this->fields.mShouldMove = mShouldMove | v9 & 1;
      if ( mScroll >= 0.0 )
        v12 = 1.0;
      else
        v12 = -1.0;
      if ( delta < 0.0 )
        v11 = -1.0;
      if ( v12 != v11 )
      {
        mScroll = 0.0;
        this->fields.mScroll = 0.0;
      }
      this->fields.mScroll = mScroll + (float)(this->fields.scrollWheelFactor * delta);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void UIScrollView__SetDragAmount(
        UIScrollView_o *this,
        float x,
        float y,
        bool updateScrollbars,
        const MethodInfo *method)
{
  struct UIPanel_o **p_mPanel; // x21
  UnityEngine_Object_o *mPanel; // x22
  const MethodInfo *v11; // x1
  Il2CppObject *Component_object; // x0
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  __int64 v19; // x1
  float v20; // s12
  float v21; // s13
  float v22; // s14
  float v23; // s15
  UIPanel_o *mTrans; // x0
  struct UIPanel_o *v25; // x8
  float v26; // s9
  float v27; // s8
  float v28; // s4
  float v29; // s0
  float v30; // s3
  float v31; // s2
  float v32; // s1
  float v33; // s4
  float v34; // s5
  float v35; // s4
  float v36; // s3
  float v37; // s2
  float v38; // s5
  float v39; // s3
  float v40; // s10
  float v41; // s11
  int32_t v42; // w8
  int32_t movement; // w8
  __int64 v44; // [xsp+8h] [xbp-88h] BYREF
  float v45; // [xsp+14h] [xbp-7Ch]
  float v46; // [xsp+18h] [xbp-78h]
  UnityEngine_Vector2_o v47; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector4_o finalClipRegion; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_597506F & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_UIPanel___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_597506F = 1;
  }
  p_mPanel = &this->fields.mPanel;
  mPanel = (UnityEngine_Object_o *)this->fields.mPanel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, updateScrollbars);
  if ( UnityEngine_Object__op_Equality(mPanel, 0, 0) )
  {
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)this,
                         (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
    this->fields.mPanel = (struct UIPanel_o *)Component_object;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.mPanel,
      (int32_t)Component_object,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
  }
  UIScrollView__DisableSpring(this, v11);
  ((void (__fastcall *)(__int64 *__return_ptr, UIScrollView_o *, const MethodInfo *))this->klass->vtable._4_get_bounds.methodPtr)(
    &v44,
    this,
    this->klass->vtable._4_get_bounds.method);
  v20 = *(float *)&v44 - v45;
  v21 = *(float *)&v44 + v45;
  if ( (float)(*(float *)&v44 - v45) != (float)(*(float *)&v44 + v45) )
  {
    v22 = *((float *)&v44 + 1) - v46;
    v23 = *((float *)&v44 + 1) + v46;
    if ( (float)(*((float *)&v44 + 1) - v46) != (float)(*((float *)&v44 + 1) + v46) )
    {
      mTrans = *p_mPanel;
      if ( !*p_mPanel )
        goto LABEL_50;
      finalClipRegion = UIPanel__get_finalClipRegion(mTrans, 0);
      v25 = *p_mPanel;
      if ( !*p_mPanel )
        goto LABEL_50;
      v26 = finalClipRegion.fields.x;
      v27 = finalClipRegion.fields.y;
      v28 = finalClipRegion.fields.w * 0.5;
      v29 = v20 + (float)(finalClipRegion.fields.z * 0.5);
      v30 = v21 - (float)(finalClipRegion.fields.z * 0.5);
      v31 = v22 + v28;
      v32 = v23 - v28;
      if ( v25->fields.mClipping == 3 )
      {
        v33 = v25->fields.mClipSoftness.fields.x;
        v34 = v25->fields.mClipSoftness.fields.y;
        v29 = v29 - v33;
        v30 = v30 + v33;
        v31 = v31 - v34;
        v32 = v32 + v34;
      }
      v35 = 1.0;
      v36 = v30 - v29;
      v37 = v31 - v32;
      if ( x <= 1.0 )
        v38 = x;
      else
        v38 = 1.0;
      if ( x < 0.0 )
        v38 = 0.0;
      if ( y <= 1.0 )
        v35 = y;
      v39 = v38 * v36;
      if ( y < 0.0 )
        v35 = 0.0;
      v40 = v29 + v39;
      v41 = v32 + (float)(v35 * v37);
      if ( updateScrollbars )
      {
LABEL_35:
        movement = this->fields.movement;
        if ( movement && movement != 2 )
        {
          if ( movement == 3 )
          {
            if ( this->fields.customMovement.fields.x == 0.0 )
              goto LABEL_44;
          }
          else
          {
            v40 = v26;
          }
        }
        if ( (unsigned int)(movement - 1) < 2 )
        {
          v27 = v41;
          goto LABEL_46;
        }
        v26 = v40;
        if ( movement != 3 )
        {
LABEL_46:
          mTrans = *p_mPanel;
          if ( *p_mPanel )
          {
            v47.fields.x = v40 - mTrans->fields.mClipRange.fields.x;
            v47.fields.y = v27 - mTrans->fields.mClipRange.fields.y;
            UIPanel__set_clipOffset(mTrans, v47, 0);
            if ( updateScrollbars )
              ((void (__fastcall *)(UIScrollView_o *, bool, const MethodInfo *))this->klass->vtable._8_UpdateScrollbars.methodPtr)(
                this,
                this->fields.mDragID == -10,
                this->klass->vtable._8_UpdateScrollbars.method);
            return;
          }
LABEL_50:
          sub_2213CDC(mTrans, v19);
        }
LABEL_44:
        v40 = v26;
        if ( this->fields.customMovement.fields.y != 0.0 )
          v27 = v41;
        goto LABEL_46;
      }
      mTrans = (UIPanel_o *)this->fields.mTrans;
      if ( !mTrans )
        goto LABEL_50;
      localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)mTrans, 0);
      v42 = this->fields.movement;
      if ( v42 && v42 != 2 )
      {
        if ( v42 != 3 )
          goto LABEL_29;
        if ( this->fields.customMovement.fields.x == 0.0 )
          goto LABEL_31;
      }
      localPosition.fields.x = (float)(v26 - v40) + localPosition.fields.x;
LABEL_29:
      if ( (unsigned int)(v42 - 1) < 2 )
      {
LABEL_32:
        localPosition.fields.y = (float)(v27 - v41) + localPosition.fields.y;
        goto LABEL_33;
      }
      if ( v42 != 3 )
      {
LABEL_33:
        mTrans = (UIPanel_o *)this->fields.mTrans;
        if ( !mTrans )
          goto LABEL_50;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)mTrans, localPosition, 0);
        goto LABEL_35;
      }
LABEL_31:
      if ( this->fields.customMovement.fields.y != 0.0 )
        goto LABEL_32;
      goto LABEL_33;
    }
  }
}


void UIScrollView__Start(UIScrollView_o *this, const MethodInfo *method)
{
  UnityEngine_Application_c *v3; // x0
  const MethodInfo *v4; // x1

  if ( (byte_5975069 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Application_TypeInfo);
    byte_5975069 = 1;
  }
  v3 = UnityEngine_Application_TypeInfo;
  this->fields.mStarted = 1;
  if ( !*(&v3->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v3, method);
  if ( UnityEngine_Application__get_isPlaying(0) )
    UIScrollView__CheckScrollbars(this, v4);
}


void UIScrollView__Update(UIScrollView_o *this, const MethodInfo *method)
{
  this->fields.iOSDragEmulation = UIScrollView__IsLimitOverPosition(this, method);
}


void UIScrollView__UpdatePosition(UIScrollView_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *horizontalScrollBar; // x20
  const MethodInfo *v4; // x1
  UnityEngine_Object_o *verticalScrollBar; // x20
  int32_t contentPivot; // w0
  UnityEngine_Vector2_o v7; // x1
  UnityEngine_Vector2_o PivotOffset; // kr00_8
  float x; // s8
  UnityEngine_Object_o *v10; // x20
  __int64 v11; // x1
  UIProgressBar_o *v12; // x0
  UnityEngine_Object_o *v13; // x20
  long double v14; // q1

  if ( (byte_5975072 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5975072 = 1;
  }
  if ( !this->fields.mIgnoreCallbacks )
  {
    horizontalScrollBar = (UnityEngine_Object_o *)this->fields.horizontalScrollBar;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
    if ( UnityEngine_Object__op_Inequality(horizontalScrollBar, 0, 0) )
      goto LABEL_10;
    verticalScrollBar = (UnityEngine_Object_o *)this->fields.verticalScrollBar;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
    if ( UnityEngine_Object__op_Inequality(verticalScrollBar, 0, 0) )
    {
LABEL_10:
      contentPivot = this->fields.contentPivot;
      this->fields.mCalculatedBounds = 0;
      this->fields.mIgnoreCallbacks = 1;
      PivotOffset = NGUIMath__GetPivotOffset(contentPivot, v4);
      x = PivotOffset.fields.x;
      v10 = (UnityEngine_Object_o *)this->fields.horizontalScrollBar;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
      if ( UnityEngine_Object__op_Inequality(v10, 0, 0) )
      {
        v12 = this->fields.horizontalScrollBar;
        if ( !v12 )
          goto LABEL_23;
        x = UIProgressBar__get_value(v12, 0);
      }
      v13 = (UnityEngine_Object_o *)this->fields.verticalScrollBar;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
      if ( !UnityEngine_Object__op_Inequality(v13, 0, 0) )
      {
        *(float *)&v14 = 1.0 - PivotOffset.fields.y;
        goto LABEL_21;
      }
      v12 = this->fields.verticalScrollBar;
      if ( v12 )
      {
        LODWORD(v14) = UIProgressBar__get_value(v12, 0);
LABEL_21:
        ((void (__fastcall *)(UIScrollView_o *, _QWORD, const MethodInfo *, float, long double))this->klass->vtable._9_SetDragAmount.methodPtr)(
          this,
          0,
          this->klass->vtable._9_SetDragAmount.method,
          x,
          v14);
        ((void (__fastcall *)(UIScrollView_o *, __int64, const MethodInfo *))this->klass->vtable._8_UpdateScrollbars.methodPtr)(
          this,
          1,
          this->klass->vtable._8_UpdateScrollbars.method);
        this->fields.mIgnoreCallbacks = 0;
        return;
      }
LABEL_23:
      sub_2213CDC(v12, v11);
    }
  }
}


void UIScrollView__UpdateScrollbars(UIScrollView_o *this, const MethodInfo *method)
{
  ((void (__fastcall *)(UIScrollView_o *, __int64, const MethodInfo *))this->klass->vtable._8_UpdateScrollbars.methodPtr)(
    this,
    1,
    this->klass->vtable._8_UpdateScrollbars.method);
}


// local variable allocation has failed, the output may be wrong!
void UIScrollView__UpdateScrollbars_56293640(UIScrollView_o *this, bool recalculateBounds, const MethodInfo *method)
{
  UnityEngine_Object_o *mPanel; // x21
  __int64 v6; // x1
  UnityEngine_Object_o *horizontalScrollBar; // x21
  __int64 v8; // x1
  UnityEngine_Object_o *verticalScrollBar; // x21
  UIScrollView_c *klass; // x8
  __int64 v11; // x1
  double v12; // kr00_8
  float v13; // s9
  float v14; // s12
  UnityEngine_Object_o *v15; // x20
  __int64 v16; // x1
  float v17; // s13
  float v18; // s14
  UIPanel_o *v19; // x0
  __int64 v20; // x1
  float x; // s8
  float z; // s9
  double v23; // d10
  double v24; // d0
  double v25; // d0
  double v26; // d1
  double v27; // d1
  float v28; // s1
  float v29; // s9
  const MethodInfo *v30; // x3
  double v31; // d0
  double v32; // d0
  float v33; // s2
  float v34; // s1
  __int64 v35; // x8
  float v36; // s0
  struct UIPanel_o *v37; // x8
  UnityEngine_Object_o *v38; // x20
  __int64 v39; // x1
  float y; // s8
  float w; // s9
  double v42; // d10
  double v43; // d0
  double v44; // d0
  double v45; // d1
  double v46; // d1
  float v47; // s1
  float v48; // s9
  const MethodInfo *v49; // x3
  double v50; // d0
  double v51; // d0
  float v52; // s2
  float v53; // s1
  __int64 v54; // x8
  float v55; // s0
  struct UIPanel_o *v56; // x8
  double iptr; // [xsp+8h] [xbp-78h] BYREF
  float v58; // [xsp+14h] [xbp-6Ch]
  float v59; // [xsp+18h] [xbp-68h]
  UnityEngine_Vector4_o finalClipRegion; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Vector4_o v61; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_597506D & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_597506D = 1;
  }
  mPanel = (UnityEngine_Object_o *)this->fields.mPanel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, recalculateBounds);
  if ( UnityEngine_Object__op_Equality(mPanel, 0, 0) )
    return;
  horizontalScrollBar = (UnityEngine_Object_o *)this->fields.horizontalScrollBar;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
  if ( !UnityEngine_Object__op_Inequality(horizontalScrollBar, 0, 0) )
  {
    verticalScrollBar = (UnityEngine_Object_o *)this->fields.verticalScrollBar;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
    if ( !UnityEngine_Object__op_Inequality(verticalScrollBar, 0, 0) )
    {
      if ( recalculateBounds )
        this->fields.mCalculatedBounds = 0;
      return;
    }
  }
  if ( recalculateBounds )
  {
    klass = this->klass;
    this->fields.mCalculatedBounds = 0;
    this->fields.mShouldMove = ((__int64 (__fastcall *)(UIScrollView_o *, const MethodInfo *))klass->vtable._7_get_shouldMove.methodPtr)(
                                 this,
                                 klass->vtable._7_get_shouldMove.method)
                             & 1;
  }
  ((void (__fastcall *)(double *__return_ptr, UIScrollView_o *, const MethodInfo *))this->klass->vtable._4_get_bounds.methodPtr)(
    &iptr,
    this,
    this->klass->vtable._4_get_bounds.method);
  v12 = iptr;
  v13 = v58;
  v14 = v59;
  v15 = (UnityEngine_Object_o *)this->fields.horizontalScrollBar;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
  if ( UnityEngine_Object__op_Inequality(v15, 0, 0) )
  {
    v17 = *(float *)&v12 - v13;
    v18 = *(float *)&v12 + v13;
    if ( (float)(*(float *)&v12 + v13) > (float)(*(float *)&v12 - v13) )
    {
      v19 = this->fields.mPanel;
      if ( !v19 )
        goto LABEL_89;
      finalClipRegion = UIPanel__get_finalClipRegion(v19, 0);
      x = finalClipRegion.fields.x;
      z = finalClipRegion.fields.z;
      if ( !byte_596A30A )
      {
        sub_2213A60(&System_Math_TypeInfo);
        byte_596A30A = 1;
      }
      if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v20);
      v23 = z;
      v24 = modf(z, &iptr);
      if ( z >= 0.0 )
      {
        if ( v24 != 0.5 )
        {
          v25 = floor(v23 + 0.5);
          goto LABEL_35;
        }
        v26 = 1.0;
        v25 = iptr;
      }
      else
      {
        if ( v24 != -0.5 )
        {
          v25 = ceil(v23 + -0.5);
          goto LABEL_35;
        }
        v25 = iptr;
        v26 = -1.0;
      }
      v27 = v25 + v26;
      if ( ((__int64)v25 & 1) != 0 )
        v25 = v27;
LABEL_35:
      v28 = vcvts_n_f32_s32((int)v25 & 0xFFFFFFFE, 1u);
      if ( v25 == INFINITY )
        v29 = -1073700000.0;
      else
        v29 = v28;
      v31 = modf(v29, &iptr);
      if ( v29 >= 0.0 )
      {
        if ( v31 == 0.5 )
        {
          v32 = iptr;
          v33 = 1.0;
LABEL_43:
          v34 = v32;
          v35 = (__int64)v32;
          v36 = v34 + v33;
          if ( (v35 & 1) == 0 )
            v36 = v34;
          goto LABEL_48;
        }
        v36 = floorf(v29 + 0.5);
      }
      else
      {
        if ( v31 == -0.5 )
        {
          v32 = iptr;
          v33 = -1.0;
          goto LABEL_43;
        }
        v36 = ceilf(v29 + -0.5);
      }
LABEL_48:
      v37 = this->fields.mPanel;
      if ( !v37 )
        goto LABEL_89;
      if ( v37->fields.mClipping == 3 )
        v36 = v36 - v37->fields.mClipSoftness.fields.x;
      UIScrollView__UpdateScrollbars_56294880(
        this,
        this->fields.horizontalScrollBar,
        (float)(x - v36) - v17,
        v18 - (float)(x + v36),
        v18 - v17,
        v36 + v36,
        0,
        v30);
    }
  }
  v38 = (UnityEngine_Object_o *)this->fields.verticalScrollBar;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v16);
  if ( UnityEngine_Object__op_Inequality(v38, 0, 0)
    && (float)(*((float *)&v12 + 1) + v14) > (float)(*((float *)&v12 + 1) - v14) )
  {
    v19 = this->fields.mPanel;
    if ( !v19 )
      goto LABEL_89;
    v61 = UIPanel__get_finalClipRegion(v19, 0);
    y = v61.fields.y;
    w = v61.fields.w;
    if ( !byte_596A30A )
    {
      sub_2213A60(&System_Math_TypeInfo);
      byte_596A30A = 1;
    }
    if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v39);
    v42 = w;
    v43 = modf(w, &iptr);
    if ( w >= 0.0 )
    {
      if ( v43 != 0.5 )
      {
        v44 = floor(v42 + 0.5);
        goto LABEL_71;
      }
      v45 = 1.0;
      v44 = iptr;
    }
    else
    {
      if ( v43 != -0.5 )
      {
        v44 = ceil(v42 + -0.5);
        goto LABEL_71;
      }
      v44 = iptr;
      v45 = -1.0;
    }
    v46 = v44 + v45;
    if ( ((__int64)v44 & 1) != 0 )
      v44 = v46;
LABEL_71:
    v47 = vcvts_n_f32_s32((int)v44 & 0xFFFFFFFE, 1u);
    if ( v44 == INFINITY )
      v48 = -1073700000.0;
    else
      v48 = v47;
    v50 = modf(v48, &iptr);
    if ( v48 >= 0.0 )
    {
      if ( v50 != 0.5 )
      {
        v55 = floorf(v48 + 0.5);
        goto LABEL_84;
      }
      v51 = iptr;
      v52 = 1.0;
    }
    else
    {
      if ( v50 != -0.5 )
      {
        v55 = ceilf(v48 + -0.5);
        goto LABEL_84;
      }
      v51 = iptr;
      v52 = -1.0;
    }
    v53 = v51;
    v54 = (__int64)v51;
    v55 = v53 + v52;
    if ( (v54 & 1) == 0 )
      v55 = v53;
LABEL_84:
    v56 = this->fields.mPanel;
    if ( v56 )
    {
      if ( v56->fields.mClipping == 3 )
        v55 = v55 - v56->fields.mClipSoftness.fields.y;
      UIScrollView__UpdateScrollbars_56294880(
        this,
        this->fields.verticalScrollBar,
        (float)(y - v55) - (float)(*((float *)&v12 + 1) - v14),
        (float)(*((float *)&v12 + 1) + v14) - (float)(y + v55),
        (float)(*((float *)&v12 + 1) + v14) - (float)(*((float *)&v12 + 1) - v14),
        v55 + v55,
        1,
        v49);
      return;
    }
LABEL_89:
    sub_2213CDC(v19, v16);
  }
}


// local variable allocation has failed, the output may be wrong!
void UIScrollView__UpdateScrollbars_56294880(
        UIScrollView_o *this,
        UIProgressBar_o *slider,
        float contentMin,
        float contentMax,
        float contentSize,
        float viewSize,
        bool inverted,
        const MethodInfo *method)
{
  UnityEngine_Object_o *v10; // x20
  _BOOL8 v12; // x0
  const MethodInfo *v13; // x1
  int8x8_t v19; // d0
  int32x2_t v20; // d1
  float v21; // s8
  float32x2_t v22; // d2
  float v23; // s0
  float32x2_t v24; // d10
  int8x8_t v26; // d0
  int32x2_t v27; // d3
  float32x2_t v28; // d1
  float v29; // s0
  __int64 v30; // x1
  int8x8_t v31; // d0
  __int64 naturalAligment; // x10
  float32x2_t v35; // [xsp+10h] [xbp-70h]
  int32x2_t v36; // [xsp+20h] [xbp-60h]

  v36.n64_u64[0] = *(unsigned __int64 *)&contentSize;
  v10 = (UnityEngine_Object_o *)slider;
  if ( (byte_597506E & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&UIScrollBar_TypeInfo);
    byte_597506E = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, slider);
  v12 = UnityEngine_Object__op_Equality(v10, 0, 0);
  if ( !v12 )
  {
    this->fields.mIgnoreCallbacks = 1;
    if ( viewSize >= v36.n64_f32[0] )
    {
      v24.n64_u64[0] = vdup_lane_s32(v36, 0).n64_u64[0];
      __asm { FMOV            V9.2S, #1.0 }
      v26.n64_u64[0] = vdiv_f32(vneg_f32((float32x2_t)__PAIR64__(LODWORD(contentMax), LODWORD(contentMin))), v24).n64_u64[0];
      v27.n64_u64[0] = vbic_s8(vbsl_s8(vcgt_f32(v26, _D9), _D9, v26), vcltz_f32(v26)).n64_u64[0];
      v21 = vaddv_f32(v27);
      v28.n64_u64[0] = vadd_f32(v27, vdup_lane_s32(v27, 1)).n64_u64[0];
      if ( inverted )
      {
        v29 = 0.0;
        if ( v21 > 0.001 )
          v29 = 1.0 - vdiv_f32(v27, v28).n64_f32[0];
      }
      else
      {
        v29 = 1.0;
        if ( v21 > 0.001 )
          LODWORD(v29) = vdiv_f32(v27, v28).n64_u32[0];
      }
      v35.n64_u64[0] = v27.n64_u64[0];
      if ( !v10 )
        goto LABEL_33;
      UIProgressBar__set_value((UIProgressBar_o *)v10, v29, 0);
      if ( v36.n64_f32[0] > 0.0 )
      {
        v31.n64_u64[0] = vdiv_f32(v35, v24).n64_u64[0];
        v21 = vaddv_f32(vbic_s8(vbsl_s8(vcgt_f32(v31, _D9), _D9, v31), vcltz_f32(v31)));
      }
    }
    else
    {
      __asm { FMOV            V1.2S, #1.0 }
      v19.n64_u64[0] = vdiv_f32(
                         (float32x2_t)__PAIR64__(LODWORD(contentMax), LODWORD(contentMin)),
                         vdup_lane_s32(v36, 0)).n64_u64[0];
      v20.n64_u64[0] = vbic_s8(vbsl_s8(vcgt_f32(v19, _D1), _D1, v19), vcltz_f32(v19)).n64_u64[0];
      v21 = vaddv_f32(v20);
      v22.n64_u64[0] = vadd_f32(v20, vdup_lane_s32(v20, 1)).n64_u64[0];
      if ( inverted )
      {
        v23 = 0.0;
        if ( v21 > 0.001 )
          v23 = 1.0 - vdiv_f32(v20, v22).n64_f32[0];
      }
      else
      {
        v23 = 1.0;
        if ( v21 > 0.001 )
          LODWORD(v23) = vdiv_f32(v20, v22).n64_u32[0];
      }
      if ( !v10 )
        goto LABEL_33;
      UIProgressBar__set_value((UIProgressBar_o *)v10, v23, 0);
    }
    naturalAligment = UIScrollBar_TypeInfo->_2.naturalAligment;
    if ( v10->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
    {
      if ( (UIScrollBar_c *)v10->klass->_2.typeHierarchy[naturalAligment - 1] != UIScrollBar_TypeInfo )
        v10 = 0;
    }
    else
    {
      v10 = 0;
    }
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v30);
    v12 = UnityEngine_Object__op_Inequality(v10, 0, 0);
    if ( !v12 )
      goto LABEL_31;
    if ( v10 )
    {
      UIScrollBar__set_barSize((UIScrollBar_o *)v10, 1.0 - v21, v13);
LABEL_31:
      this->fields.mIgnoreCallbacks = 0;
      return;
    }
LABEL_33:
    sub_2213CDC(v12, v13);
  }
}


UnityEngine_Bounds_o *UIScrollView__get_bounds(
        UnityEngine_Bounds_o *__return_ptr retstr,
        UIScrollView_o *this,
        const MethodInfo *method)
{
  UIScrollView_o *v3; // x19
  UnityEngine_Transform_o *transform; // x0
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  const MethodInfo *v12; // x4
  __int64 v13; // x8
  __int64 v14; // x8
  UnityEngine_Bounds_o v16; // [xsp+8h] [xbp-38h] BYREF

  v3 = this;
  if ( !this->fields.mCalculatedBounds )
  {
    this->fields.mCalculatedBounds = 1;
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    v3->fields.mTrans = transform;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v3->fields.mTrans, (int32_t)transform, v6, v7, v8, v9, v10, v11);
    this = (UIScrollView_o *)NGUIMath__CalculateRelativeWidgetBounds_56362504(
                               &v16,
                               v3->fields.mTrans,
                               v3->fields.mTrans,
                               0,
                               1,
                               v12);
    v13 = *(_QWORD *)&v16.fields.m_Extents.fields.y;
    *(_OWORD *)&v3->fields.mBounds.fields.m_Center.fields.x = *(_OWORD *)&v16.fields.m_Center.fields.x;
    *(_QWORD *)&v3->fields.mBounds.fields.m_Extents.fields.y = v13;
  }
  v14 = *(_QWORD *)&v3->fields.mBounds.fields.m_Extents.fields.y;
  *(_OWORD *)&retstr->fields.m_Center.fields.x = *(_OWORD *)&v3->fields.mBounds.fields.m_Center.fields.x;
  *(_QWORD *)&retstr->fields.m_Extents.fields.y = v14;
  return (UnityEngine_Bounds_o *)this;
}


bool UIScrollView__get_canMoveHorizontally(UIScrollView_o *this, const MethodInfo *method)
{
  int32_t movement; // w9
  bool result; // w0

  movement = this->fields.movement;
  result = 1;
  if ( movement && movement != 2 )
    return movement == 3 && this->fields.customMovement.fields.x != 0.0;
  return result;
}


bool UIScrollView__get_canMoveVertically(UIScrollView_o *this, const MethodInfo *method)
{
  int32_t movement; // w8

  movement = this->fields.movement;
  if ( (unsigned int)(movement - 1) < 2 )
    return 1;
  if ( movement == 3 )
    return this->fields.customMovement.fields.y != 0.0;
  return 0;
}


UnityEngine_Vector3_o UIScrollView__get_currentMomentum(UIScrollView_o *this, const MethodInfo *method)
{
  float x; // s0
  float y; // s1
  float z; // s2
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  x = this->fields.mMomentum.fields.x;
  y = this->fields.mMomentum.fields.y;
  z = this->fields.mMomentum.fields.z;
  result.fields.z = z;
  result.fields.y = y;
  result.fields.x = x;
  return result;
}


bool UIScrollView__get_isDragging(UIScrollView_o *this, const MethodInfo *method)
{
  return this->fields.mPressed && this->fields.mDragStarted;
}


UIPanel_o *UIScrollView__get_panel(UIScrollView_o *this, const MethodInfo *method)
{
  return this->fields.mPanel;
}


bool UIScrollView__get_shouldMove(UIScrollView_o *this, const MethodInfo *method)
{
  struct UIPanel_o **p_mPanel; // x20
  UnityEngine_Object_o *mPanel; // x21
  __int64 v5; // x1
  Il2CppObject *Component_object; // x0
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  float x; // s9
  float y; // s8
  float z; // s11
  float w; // s10
  __int64 v17; // kr00_8
  float v18; // s13
  float v19; // s15
  float width; // s11
  float height; // s0
  int32_t movement; // w8
  __int64 v24; // [xsp+8h] [xbp-78h] BYREF
  float v25; // [xsp+14h] [xbp-6Ch]
  float v26; // [xsp+18h] [xbp-68h]
  UnityEngine_Vector4_o finalClipRegion; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_5975066 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_UIPanel___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5975066 = 1;
  }
  if ( !this->fields.disableDragIfFits )
    return 1;
  p_mPanel = &this->fields.mPanel;
  mPanel = (UnityEngine_Object_o *)this->fields.mPanel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Equality(mPanel, 0, 0) )
  {
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)this,
                         (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
    this->fields.mPanel = (struct UIPanel_o *)Component_object;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.mPanel,
      (int32_t)Component_object,
      v7,
      v8,
      v9,
      v10,
      v11,
      v12);
  }
  if ( !*p_mPanel )
    sub_2213CDC(0, v5);
  finalClipRegion = UIPanel__get_finalClipRegion(*p_mPanel, 0);
  x = finalClipRegion.fields.x;
  y = finalClipRegion.fields.y;
  z = finalClipRegion.fields.z;
  w = finalClipRegion.fields.w;
  ((void (__fastcall *)(__int64 *__return_ptr, UIScrollView_o *, const MethodInfo *))this->klass->vtable._4_get_bounds.methodPtr)(
    &v24,
    this,
    this->klass->vtable._4_get_bounds.method);
  v17 = v24;
  v19 = v25;
  v18 = v26;
  if ( z == 0.0 )
    width = (float)UnityEngine_Screen__get_width(0);
  else
    width = z * 0.5;
  if ( w == 0.0 )
    height = (float)UnityEngine_Screen__get_height(0);
  else
    height = w * 0.5;
  movement = this->fields.movement;
  if ( movement > 1 )
  {
    if ( movement != 2 )
    {
      if ( movement != 3 )
        return 0;
      if ( this->fields.customMovement.fields.x == 0.0 )
      {
LABEL_26:
        if ( this->fields.customMovement.fields.y != 0.0 )
          return (float)(*((float *)&v17 + 1) - v18) < (float)(y - height)
              || (float)(*((float *)&v17 + 1) + v18) > (float)(y + height);
        return 0;
      }
    }
  }
  else if ( movement )
  {
    if ( movement != 1 )
      return 0;
    return (float)(*((float *)&v17 + 1) - v18) < (float)(y - height)
        || (float)(*((float *)&v17 + 1) + v18) > (float)(y + height);
  }
  if ( (float)(*(float *)&v17 - v19) < (float)(x - width) || (float)(*(float *)&v17 + v19) > (float)(x + width) )
    return 1;
  if ( (unsigned int)(movement - 1) >= 2 )
  {
    if ( movement != 3 )
      return 0;
    goto LABEL_26;
  }
  return (float)(*((float *)&v17 + 1) - v18) < (float)(y - height)
      || (float)(*((float *)&v17 + 1) + v18) > (float)(y + height);
}


bool UIScrollView__get_shouldMoveHorizontally(UIScrollView_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct UIPanel_o *mPanel; // x0
  float v5; // s9
  __int64 v6; // x1
  float width; // s8
  float v8; // s9
  double v9; // d8
  double v10; // d0
  double v11; // d0
  double v12; // d1
  double v13; // d1
  double iptr; // [xsp+8h] [xbp-38h] BYREF
  float v17; // [xsp+14h] [xbp-2Ch]

  ((void (__fastcall *)(double *__return_ptr))this->klass->vtable._4_get_bounds.methodPtr)(&iptr);
  mPanel = this->fields.mPanel;
  if ( !mPanel )
    sub_2213CDC(0, v3);
  v5 = v17 + v17;
  if ( mPanel->fields.mClipping == 3 )
    v5 = v5 + (float)(mPanel->fields.mClipSoftness.fields.x + mPanel->fields.mClipSoftness.fields.x);
  width = UIPanel__get_width(mPanel, 0);
  if ( !byte_596A30A )
  {
    sub_2213A60(&System_Math_TypeInfo);
    byte_596A30A = 1;
  }
  v8 = v5 - width;
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v6);
  v9 = v8;
  v10 = modf(v8, &iptr);
  if ( v8 >= 0.0 )
  {
    if ( v10 != 0.5 )
    {
      v11 = floor(v9 + 0.5);
      return v11 != INFINITY && (int)v11 > 0;
    }
    v12 = 1.0;
    v11 = iptr;
  }
  else
  {
    if ( v10 != -0.5 )
    {
      v11 = ceil(v9 + -0.5);
      return v11 != INFINITY && (int)v11 > 0;
    }
    v11 = iptr;
    v12 = -1.0;
  }
  v13 = v11 + v12;
  if ( ((__int64)v11 & 1) != 0 )
    v11 = v13;
  return v11 != INFINITY && (int)v11 > 0;
}


bool UIScrollView__get_shouldMoveVertically(UIScrollView_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct UIPanel_o *mPanel; // x0
  float v5; // s9
  __int64 v6; // x1
  float height; // s8
  float v8; // s9
  double v9; // d8
  double v10; // d0
  double v11; // d0
  double v12; // d1
  double v13; // d1
  double iptr[2]; // [xsp+8h] [xbp-38h] BYREF
  float v17; // [xsp+18h] [xbp-28h]

  ((void (__fastcall *)(double *__return_ptr))this->klass->vtable._4_get_bounds.methodPtr)(iptr);
  mPanel = this->fields.mPanel;
  if ( !mPanel )
    sub_2213CDC(0, v3);
  v5 = v17 + v17;
  if ( mPanel->fields.mClipping == 3 )
    v5 = v5 + (float)(mPanel->fields.mClipSoftness.fields.y + mPanel->fields.mClipSoftness.fields.y);
  height = UIPanel__get_height(mPanel, 0);
  if ( !byte_596A30A )
  {
    sub_2213A60(&System_Math_TypeInfo);
    byte_596A30A = 1;
  }
  v8 = v5 - height;
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v6);
  v9 = v8;
  v10 = modf(v8, iptr);
  if ( v8 >= 0.0 )
  {
    if ( v10 != 0.5 )
    {
      v11 = floor(v9 + 0.5);
      return v11 != INFINITY && (int)v11 > 0;
    }
    v12 = 1.0;
    v11 = iptr[0];
  }
  else
  {
    if ( v10 != -0.5 )
    {
      v11 = ceil(v9 + -0.5);
      return v11 != INFINITY && (int)v11 > 0;
    }
    v11 = iptr[0];
    v12 = -1.0;
  }
  v13 = v11 + v12;
  if ( ((__int64)v11 & 1) != 0 )
    v11 = v13;
  return v11 != INFINITY && (int)v11 > 0;
}


void UIScrollView__set_currentMomentum(UIScrollView_o *this, UnityEngine_Vector3_o value, const MethodInfo *method)
{
  this->fields.mMomentum = value;
  this->fields.mShouldMove = 1;
}


void UIScrollView_OnDragNotification___ctor(
        UIScrollView_OnDragNotification_o *this,
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
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

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
  if ( (sub_2213B38(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_2213CF8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_2213BA0(v14, 0);
    }
    goto LABEL_5;
  }
  if ( v12 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_2016F1C;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_2016EDC;
}


System_IAsyncResult_o *UIScrollView_OnDragNotification__BeginInvoke(
        UIScrollView_OnDragNotification_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  return (System_IAsyncResult_o *)sub_2213A14(this, &v5, callback, object);
}


void UIScrollView_OnDragNotification__EndInvoke(
        UIScrollView_OnDragNotification_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_2213A18(result, 0, method);
}


void UIScrollView_OnDragNotification__Invoke(UIScrollView_OnDragNotification_o *this, const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, intptr_t))this->fields.invoke_impl)(this->fields.method_code, this->fields.method);
}