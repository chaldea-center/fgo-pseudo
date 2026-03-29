void UIScrollView___cctor(const MethodInfo *method)
{
  BetterList_T__o *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D3513D & 1) == 0 )
  {
    sub_1C93AD4(&Method_BetterList_UIScrollView___ctor__);
    sub_1C93AD4(&BetterList_UIScrollView__TypeInfo);
    sub_1C93AD4(&UIScrollView_TypeInfo);
    byte_4D3513D = 1;
  }
  v1 = (BetterList_T__o *)sub_1C93D20(BetterList_UIScrollView__TypeInfo);
  BetterList_object____ctor(v1, (const MethodInfo_33DC638 *)Method_BetterList_UIScrollView___ctor__);
  UIScrollView_TypeInfo->static_fields->list = (struct BetterList_UIScrollView__o *)v1;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)UIScrollView_TypeInfo->static_fields, (int32_t)v1, v2, v3, v4, v5, v6, v7);
}


void UIScrollView___ctor(UIScrollView_o *this, const MethodInfo *method)
{
  _BOOL4 v3; // w8
  struct UnityEngine_Vector3_StaticFields *static_fields; // x9
  __int64 v5; // d0
  float z; // s1

  *(_QWORD *)&this->fields.scrollWheelFactor = 0x420C00003E800000LL;
  this->fields.customMovement.fields.y = 0.0;
  this->fields.scale.fields.z = 0.0;
  *(_QWORD *)&this->fields.showScrollBars = 0x3F80000000000001LL;
  this->fields.dragEffect = 2;
  this->fields.restrictWithinPanel = 1;
  *(_WORD *)&this->fields.smoothDragStart = 257;
  *(_QWORD *)&this->fields.scale.fields.x = 1065353216;
  if ( !byte_4D2A019 )
  {
    sub_1C93AD4(&UnityEngine_Vector2_TypeInfo);
    byte_4D2A019 = 1;
  }
  this->fields.relativePositionOnReset = UnityEngine_Vector2_TypeInfo->static_fields->zeroVector;
  if ( byte_4D2A139 )
  {
    v3 = 0;
  }
  else
  {
    sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
    byte_4D2A139 = 1;
    v3 = byte_4D2A019 == 0;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  v5 = *(_QWORD *)&static_fields->zeroVector.fields.x;
  z = static_fields->zeroVector.fields.z;
  this->fields.mDragID = -10;
  *(_QWORD *)&this->fields.mMomentum.fields.x = v5;
  this->fields.mMomentum.fields.z = z;
  if ( v3 )
  {
    sub_1C93AD4(&UnityEngine_Vector2_TypeInfo);
    byte_4D2A019 = 1;
  }
  this->fields.mDragStartOffset = UnityEngine_Vector2_TypeInfo->static_fields->zeroVector;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void UIScrollView__Awake(UIScrollView_o *this, const MethodInfo *method)
{
  struct UnityEngine_Transform_o *transform; // x0
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  Il2CppObject *Component_object; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  __int64 v17; // x1
  struct UIPanel_o *mPanel; // x0
  float x; // s0
  float y; // s1
  int32_t v21; // w8
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float z; // s1
  struct UnityEngine_Vector2_o relativePositionOnReset; // d8
  struct UnityEngine_Vector2_StaticFields *v25; // x8
  float32x2_t v26; // d0
  float v27; // s1
  float v28; // s0
  int32_t v29; // w9

  if ( (byte_4D3512C & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_Component_GetComponent_UIPanel___);
    byte_4D3512C = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  this->fields.mTrans = transform;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.mTrans, (int32_t)transform, v4, v5, v6, v7, v8, v9);
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_319B20C *)Method_UnityEngine_Component_GetComponent_UIPanel___);
  this->fields.mPanel = (struct UIPanel_o *)Component_object;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.mPanel,
    (int32_t)Component_object,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  mPanel = this->fields.mPanel;
  if ( !mPanel )
    sub_1C93D2C(0, v17);
  if ( !mPanel->fields.mClipping )
    UIPanel__set_clipping(mPanel, 4, 0);
  if ( this->fields.movement != 3 )
  {
    x = this->fields.scale.fields.x;
    y = this->fields.scale.fields.y;
    if ( (float)((float)((float)(x * x) + (float)(y * y))
               + (float)(this->fields.scale.fields.z * this->fields.scale.fields.z)) > 0.001 )
    {
      if ( x == 1.0 && y == 0.0 )
      {
        this->fields.movement = 0;
      }
      else
      {
        if ( x == 0.0 && y == 1.0 )
        {
          v21 = 1;
        }
        else
        {
          if ( x != 1.0 || y != 1.0 )
          {
            this->fields.movement = 3;
            this->fields.customMovement.fields.x = x;
            this->fields.customMovement.fields.y = y;
            goto LABEL_19;
          }
          v21 = 2;
        }
        this->fields.movement = v21;
      }
LABEL_19:
      if ( !byte_4D2A139 )
      {
        sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
        byte_4D2A139 = 1;
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
    if ( !byte_4D2A019 )
    {
      sub_1C93AD4(&UnityEngine_Vector2_TypeInfo);
      byte_4D2A019 = 1;
    }
    v25 = UnityEngine_Vector2_TypeInfo->static_fields;
    v26.n64_u64[0] = vsub_f32((float32x2_t)relativePositionOnReset, (float32x2_t)v25->zeroVector).n64_u64[0];
    if ( vaddv_f32(vmul_f32(v26, v26)) >= 1.0e-10 )
    {
      v27 = this->fields.relativePositionOnReset.fields.x;
      v28 = 1.0 - this->fields.relativePositionOnReset.fields.y;
      if ( v27 == 0.0 )
      {
        if ( v28 == 0.0 )
        {
          v29 = 6;
        }
        else if ( v28 == 1.0 )
        {
          v29 = 0;
        }
        else
        {
          v29 = 3;
        }
      }
      else if ( v27 == 1.0 )
      {
        if ( v28 == 0.0 )
        {
          v29 = 8;
        }
        else if ( v28 == 1.0 )
        {
          v29 = 2;
        }
        else
        {
          v29 = 5;
        }
      }
      else if ( v28 == 0.0 )
      {
        v29 = 7;
      }
      else if ( v28 == 1.0 )
      {
        v29 = 1;
      }
      else
      {
        v29 = 4;
      }
      this->fields.contentPivot = v29;
      this->fields.relativePositionOnReset = v25->zeroVector;
    }
  }
}


void UIScrollView__CheckScrollbars(UIScrollView_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *horizontalScrollBar; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  struct UIProgressBar_o *v6; // x8
  System_Collections_Generic_List_EventDelegate__o *onChange; // x20
  EventDelegate_Callback_o *v8; // x21
  const MethodInfo *v9; // x3
  const MethodInfo *v10; // x2
  UIProgressBar_o *v11; // x20
  float v12; // s0
  UnityEngine_Object_o *verticalScrollBar; // x20
  struct UIProgressBar_o *v14; // x8
  System_Collections_Generic_List_EventDelegate__o *v15; // x20
  EventDelegate_Callback_o *v16; // x21
  const MethodInfo *v17; // x3
  const MethodInfo *v18; // x2
  UIProgressBar_o *v19; // x20
  float v20; // s0

  if ( (byte_4D3512F & 1) == 0 )
  {
    sub_1C93AD4(&EventDelegate_Callback_TypeInfo);
    sub_1C93AD4(&EventDelegate_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&Method_UIScrollView_OnScrollBar__);
    byte_4D3512F = 1;
  }
  horizontalScrollBar = (UnityEngine_Object_o *)this->fields.horizontalScrollBar;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality(horizontalScrollBar, 0, 0);
  if ( (v4 & 1) != 0 )
  {
    v6 = this->fields.horizontalScrollBar;
    if ( !v6 )
      goto LABEL_26;
    onChange = v6->fields.onChange;
    v8 = (EventDelegate_Callback_o *)sub_1C93D20(EventDelegate_Callback_TypeInfo);
    EventDelegate_Callback___ctor(v8, (Il2CppObject *)this, Method_UIScrollView_OnScrollBar__, v9);
    if ( !EventDelegate_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
    v4 = (__int64)EventDelegate__Add(onChange, v8, v10);
    v11 = this->fields.horizontalScrollBar;
    if ( !this->fields.showScrollBars
      || (v4 = ((__int64 (__fastcall *)(UIScrollView_o *, const MethodInfo *))this->klass->vtable._5_get_shouldMoveHorizontally.methodPtr)(
                 this,
                 this->klass->vtable._5_get_shouldMoveHorizontally.method),
          v12 = 0.0,
          (v4 & 1) != 0) )
    {
      v12 = 1.0;
    }
    if ( !v11 )
      goto LABEL_26;
    UIProgressBar__set_alpha(v11, v12, 0);
  }
  verticalScrollBar = (UnityEngine_Object_o *)this->fields.verticalScrollBar;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality(verticalScrollBar, 0, 0);
  if ( (v4 & 1) != 0 )
  {
    v14 = this->fields.verticalScrollBar;
    if ( v14 )
    {
      v15 = v14->fields.onChange;
      v16 = (EventDelegate_Callback_o *)sub_1C93D20(EventDelegate_Callback_TypeInfo);
      EventDelegate_Callback___ctor(v16, (Il2CppObject *)this, Method_UIScrollView_OnScrollBar__, v17);
      if ( !EventDelegate_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
      v4 = (__int64)EventDelegate__Add(v15, v16, v18);
      v19 = this->fields.verticalScrollBar;
      if ( !this->fields.showScrollBars
        || (v4 = ((__int64 (__fastcall *)(UIScrollView_o *, const MethodInfo *))this->klass->vtable._6_get_shouldMoveVertically.methodPtr)(
                   this,
                   this->klass->vtable._6_get_shouldMoveVertically.method),
            v20 = 0.0,
            (v4 & 1) != 0) )
      {
        v20 = 1.0;
      }
      if ( v19 )
      {
        UIProgressBar__set_alpha(v19, v20, 0);
        return;
      }
    }
LABEL_26:
    sub_1C93D2C(v4, v5);
  }
}


void UIScrollView__DisableSpring(UIScrollView_o *this, const MethodInfo *method)
{
  Il2CppObject *Component_object; // x19
  _BOOL8 v4; // x0
  __int64 v5; // x1

  if ( (byte_4D35131 & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_Component_GetComponent_SpringPanel___);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D35131 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_319B20C *)Method_UnityEngine_Component_GetComponent_SpringPanel___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
  if ( v4 )
  {
    if ( !Component_object )
      sub_1C93D2C(v4, v5);
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_object, 0, 0);
  }
}


void UIScrollView__Drag(UIScrollView_o *this, const MethodInfo *method)
{
  UICamera_c *v3; // x0
  UnityEngine_GameObject_o *gameObject; // x20
  const MethodInfo *v5; // x1
  _QWORD *p_image; // x0
  struct UICamera_MouseOrTouch_o *currentTouch; // x8
  struct UnityEngine_Vector2_o totalDelta; // x9
  struct UIScrollView_OnDragNotification_o *onDragStarted; // x8
  _BOOL4 smoothDragStart; // w20
  __int64 v11; // x9
  __int64 v12; // x8
  float z; // s8
  float y; // s14
  float x; // s15
  float m_Distance; // s9
  float v18; // s13
  __int64 v19; // kr50_8
  float v20; // s11
  float v21; // s0
  struct UnityEngine_Mathf_StaticFields *static_fields; // x8
  float v23; // s0
  float v24; // s4
  float32x2_t v25; // d5
  int8x8_t v26; // d0
  float v27; // s8
  int32_t movement; // w8
  float v30; // s2
  unsigned __int64 v31; // d0
  float v32; // s1
  struct UnityEngine_Vector3_StaticFields *v33; // x8
  _BOOL4 iOSDragEmulation; // w8
  struct UIPanel_o *mPanel; // x20
  float32x2_t v36; // d9
  float32x2_t v37; // d10
  double v38; // d2
  double v39; // d0
  float v40; // s9
  float v41; // s1
  float v42; // s10
  float v43; // s2
  float v44; // s11
  const MethodInfo *v45; // x4
  float v46; // s1
  UIScrollView_o *v47; // x0
  struct UIPanel_o *v48; // x8
  int32_t v49; // w8
  char v50; // w2
  bool v51; // w3
  unsigned __int64 v53; // [xsp+0h] [xbp-D0h]
  float32x2_t v54; // [xsp+0h] [xbp-D0h]
  UnityEngine_Ray_o v55[2]; // [xsp+18h] [xbp-B8h] BYREF
  UnityEngine_Ray_o v56; // [xsp+50h] [xbp-80h] BYREF
  UnityEngine_Vector3_o Point; // 0:kr00_12.12
  UnityEngine_Vector3_o v58; // 0:kr14_12.12
  UnityEngine_Vector3_o v59; // 0:kr20_12.12
  UnityEngine_Vector3_o v60; // 0:kr34_12.12
  UnityEngine_Vector3_o v61; // 0:kr40_12.12
  unsigned __int64 v62; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o v63; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v64; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v65; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4D3513A & 1) == 0 )
  {
    sub_1C93AD4(&NGUITools_TypeInfo);
    sub_1C93AD4(&UICamera_TypeInfo);
    byte_4D3513A = 1;
  }
  v3 = UICamera_TypeInfo;
  memset(&v56, 0, sizeof(v56));
  if ( !UICamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    v3 = UICamera_TypeInfo;
  }
  if ( v3->static_fields->currentScheme == 2 || !UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0) )
    return;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  if ( !NGUITools__GetActive_50071416(gameObject, 0) || !this->fields.mShouldMove )
    return;
  p_image = &UICamera_TypeInfo->_1.image;
  if ( this->fields.mDragID == -10 )
  {
    if ( !UICamera_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
      p_image = &UICamera_TypeInfo->_1.image;
    }
    this->fields.mDragID = *(_DWORD *)(p_image[23] + 148LL);
  }
  if ( !*((_DWORD *)p_image + 56) )
  {
    j_il2cpp_runtime_class_init_0(p_image);
    p_image = &UICamera_TypeInfo->_1.image;
  }
  currentTouch = *(struct UICamera_MouseOrTouch_o **)(p_image[23] + 160LL);
  if ( !currentTouch )
    goto LABEL_79;
  currentTouch->fields.clickNotification = 2;
  if ( this->fields.smoothDragStart )
  {
    if ( !this->fields.mDragStarted )
    {
      this->fields.mDragStarted = 1;
      if ( !*((_DWORD *)p_image + 56) )
      {
        j_il2cpp_runtime_class_init_0(p_image);
        p_image = &UICamera_TypeInfo->_1.image;
        currentTouch = UICamera_TypeInfo->static_fields->currentTouch;
        if ( !currentTouch )
          goto LABEL_79;
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
    smoothDragStart = this->fields.smoothDragStart;
  }
  else
  {
    smoothDragStart = 0;
  }
  if ( !*((_DWORD *)p_image + 56) )
  {
    j_il2cpp_runtime_class_init_0(p_image);
    p_image = &UICamera_TypeInfo->_1.image;
  }
  v11 = p_image[23];
  v12 = *(_QWORD *)(v11 + 160);
  if ( !v12 )
LABEL_79:
    sub_1C93D2C(p_image, v5);
  p_image = *(_QWORD **)(v11 + 136);
  v63.fields.x = *(float *)(v12 + 16);
  v63.fields.y = *(float *)(v12 + 20);
  if ( smoothDragStart )
  {
    if ( !p_image )
      goto LABEL_79;
    v63.fields.y = v63.fields.y - this->fields.mDragStartOffset.fields.y;
    v63.fields.x = v63.fields.x - this->fields.mDragStartOffset.fields.x;
  }
  else if ( !p_image )
  {
    goto LABEL_79;
  }
  v63.fields.z = 0.0;
  UnityEngine_Camera__ScreenPointToRay_71924968(v55, (UnityEngine_Camera_o *)p_image, v63, 0);
  v55[1] = v55[0];
  v56 = v55[0];
  z = v55[0].fields.m_Origin.fields.z;
  x = this->fields.mPlane.fields.m_Normal.fields.x;
  y = this->fields.mPlane.fields.m_Normal.fields.y;
  v18 = this->fields.mPlane.fields.m_Normal.fields.z;
  m_Distance = this->fields.mPlane.fields.m_Distance;
  v19 = *(_QWORD *)&v55[0].fields.m_Origin.fields.x;
  v20 = (float)(v55[0].fields.m_Direction.fields.z * v18)
      + (float)((float)(v55[0].fields.m_Direction.fields.x * x) + (float)(v55[0].fields.m_Direction.fields.y * y));
  if ( !byte_4D2A13D )
  {
    sub_1C93AD4(&UnityEngine_Mathf_TypeInfo);
    byte_4D2A13D = 1;
  }
  v21 = fmaxf(fabsf(v20), 0.0) * 0.000001;
  static_fields = UnityEngine_Mathf_TypeInfo->static_fields;
  if ( v21 <= (float)(static_fields->Epsilon * 8.0) )
    v21 = static_fields->Epsilon * 8.0;
  if ( vabds_f32(0.0, v20) < v21 )
    return;
  v23 = (float)((float)-(float)((float)(z * v18)
                              + (float)((float)(*(float *)&v19 * x) + (float)(*((float *)&v19 + 1) * y)))
              - m_Distance)
      / v20;
  if ( v23 <= 0.0 )
    return;
  Point = UnityEngine_Ray__GetPoint(&v56, v23, 0);
  v24 = this->fields.mLastPos.fields.z;
  v25.n64_u64[0] = vsub_f32(*(float32x2_t *)&Point.fields.x, *(float32x2_t *)&this->fields.mLastPos.fields.x).n64_u64[0];
  this->fields.mLastPos = Point;
  v26.n64_u64[0] = vceqz_f32(v25).n64_u64[0];
  v27 = Point.fields.z - v24;
  if ( (vand_s8(v26, vdup_lane_s32(v26, 1)).n64_u8[0] & 1) == 0 || v27 != 0.0 )
  {
    p_image = &this->fields.mTrans->klass;
    if ( !p_image )
      goto LABEL_79;
    *(float32x2_t *)&v61.fields.x = v25;
    v61.fields.z = Point.fields.z - v24;
    v58 = UnityEngine_Transform__InverseTransformDirection((UnityEngine_Transform_o *)p_image, v61, 0);
    v65.fields.x = v58.fields.x;
    v65.fields.y = v58.fields.y;
    movement = this->fields.movement;
    v65.fields.z = 0.0;
    if ( movement )
    {
      if ( movement == 1 )
      {
        v65.fields.z = 0.0;
        v65.fields.x = 0.0;
      }
      else if ( movement != 2 )
      {
        v65.fields.x = v58.fields.x * this->fields.customMovement.fields.x;
        v65.fields.y = v58.fields.y * this->fields.customMovement.fields.y;
        v65.fields.z = v58.fields.z * 0.0;
      }
    }
    else
    {
      v65.fields.y = 0.0;
    }
    p_image = &this->fields.mTrans->klass;
    if ( !p_image )
      goto LABEL_79;
    v59 = UnityEngine_Transform__TransformDirection((UnityEngine_Transform_o *)p_image, v65, 0);
    v25.n64_u64[0] = *(unsigned __int64 *)&v59.fields.x;
    v27 = v59.fields.z;
  }
  if ( this->fields.dragEffect )
  {
    v30 = this->fields.momentumAmount * 0.01;
    v31 = vadd_f32(
            *(float32x2_t *)&this->fields.mMomentum.fields.x,
            vmul_f32(
              vsub_f32(
                vadd_f32(*(float32x2_t *)&this->fields.mMomentum.fields.x, vmul_n_f32(v25, v30)),
                *(float32x2_t *)&this->fields.mMomentum.fields.x),
              vdup_n_s32(0x3F2B851Fu))).n64_u64[0];
    v32 = this->fields.mMomentum.fields.z
        + (float)((float)((float)(this->fields.mMomentum.fields.z + (float)(v27 * v30)) - this->fields.mMomentum.fields.z)
                * 0.67);
  }
  else
  {
    if ( !byte_4D2A139 )
    {
      v53 = v25.n64_u64[0];
      sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
      v25.n64_u64[0] = v53;
      byte_4D2A139 = 1;
    }
    v33 = UnityEngine_Vector3_TypeInfo->static_fields;
    v31 = *(_QWORD *)&v33->zeroVector.fields.x;
    v32 = v33->zeroVector.fields.z;
  }
  iOSDragEmulation = this->fields.iOSDragEmulation;
  *(_QWORD *)&this->fields.mMomentum.fields.x = v31;
  this->fields.mMomentum.fields.z = v32;
  if ( iOSDragEmulation && this->fields.dragEffect == 2 )
  {
    mPanel = this->fields.mPanel;
    v54.n64_u64[0] = v25.n64_u64[0];
    ((void (__fastcall *)(UnityEngine_Ray_o *__return_ptr, UIScrollView_o *, const MethodInfo *))this->klass->vtable._4_get_bounds.methodPtr)(
      v55,
      this,
      this->klass->vtable._4_get_bounds.method);
    v36.n64_u64[0] = *(unsigned __int64 *)&v55[0].fields.m_Origin.fields.x;
    v37.n64_u64[0] = *(unsigned __int64 *)&v55[0].fields.m_Direction.fields.x;
    p_image = ((_QWORD *(__fastcall *)(UnityEngine_Ray_o *__return_ptr, UIScrollView_o *, const MethodInfo *))this->klass->vtable._4_get_bounds.methodPtr)(
                v55,
                this,
                this->klass->vtable._4_get_bounds.method);
    if ( !mPanel )
      goto LABEL_79;
    v38 = vadd_f32(
            *(float32x2_t *)&v55[0].fields.m_Origin.fields.x,
            *(float32x2_t *)&v55[0].fields.m_Direction.fields.x).n64_f64[0];
    v39 = vsub_f32(v36, v37).n64_f64[0];
    LODWORD(v40) = COERCE_UNSIGNED_INT128(
                     ((long double (__fastcall *)(struct UIPanel_o *, const MethodInfo *, double, float, double, float))mPanel->klass->vtable._22_CalculateConstrainOffset.methodPtr)(
                       mPanel,
                       mPanel->klass->vtable._22_CalculateConstrainOffset.method,
                       v39,
                       *((float *)&v39 + 1),
                       v38,
                       *((float *)&v38 + 1)));
    v42 = v41;
    v44 = v43;
    if ( !byte_4D2A13B )
    {
      sub_1C93AD4(&System_Math_TypeInfo);
      byte_4D2A13B = 1;
    }
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    if ( sqrtf((float)(v44 * v44) + (float)((float)(v40 * v40) + (float)(v42 * v42))) > 1.0 )
    {
      v64.fields.z = v27 * 0.5;
      v64.fields.x = v54.n64_f32[0] * 0.5;
      v64.fields.y = vmuls_lane_f32(0.5, v54, 1);
      UIScrollView__MoveAbsolute(this, v64, v5);
      v46 = this->fields.mMomentum.fields.z * 0.5;
      *(float32x2_t *)&this->fields.mMomentum.fields.x = vmul_f32(
                                                           *(float32x2_t *)&this->fields.mMomentum.fields.x,
                                                           (float32x2_t)0x3F0000003F000000LL);
      this->fields.mMomentum.fields.z = v46;
      goto LABEL_66;
    }
    v62 = v54.n64_u64[0];
    v47 = this;
  }
  else
  {
    v62 = v25.n64_u64[0];
    v47 = this;
  }
  *(_QWORD *)&v60.fields.x = v62;
  v60.fields.z = v27;
  UIScrollView__MoveAbsolute(v47, v60, v5);
LABEL_66:
  if ( !this->fields.restrictWithinPanel )
    return;
  v48 = this->fields.mPanel;
  if ( !v48 )
    goto LABEL_79;
  if ( v48->fields.mClipping && this->fields.dragEffect != 2 )
  {
    v49 = this->fields.movement;
    v50 = 1;
    if ( v49 && v49 != 2 )
    {
      if ( v49 == 3 )
      {
        v50 = this->fields.customMovement.fields.x != 0.0;
        v51 = this->fields.customMovement.fields.y != 0.0;
LABEL_77:
        UIScrollView__RestrictWithinBounds_49951228(this, 1, v50, v51, v45);
        return;
      }
      v50 = 0;
    }
    v51 = (unsigned int)(v49 - 1) < 2;
    goto LABEL_77;
  }
}


void UIScrollView__GoToBottom(UIScrollView_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  int32_t contentPivot; // w0
  long double v5; // q0
  long double v6; // q8

  if ( (byte_4D35136 & 1) == 0 )
  {
    sub_1C93AD4(&NGUITools_TypeInfo);
    byte_4D35136 = 1;
  }
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  if ( NGUITools__GetActive((UnityEngine_Behaviour_o *)this, 0) )
  {
    contentPivot = this->fields.contentPivot;
    this->fields.mCalculatedBounds = 0;
    LODWORD(v5) = *(_QWORD *)&NGUIMath__GetPivotOffset(contentPivot, v3);
    v6 = v5;
    ((void (__fastcall *)(UIScrollView_o *, _QWORD, const MethodInfo *, float, float))this->klass->vtable._9_SetDragAmount.methodPtr)(
      this,
      0,
      this->klass->vtable._9_SetDragAmount.method,
      *(float *)&v5,
      1.0);
    ((void (__fastcall *)(UIScrollView_o *, __int64, const MethodInfo *, long double, float))this->klass->vtable._9_SetDragAmount.methodPtr)(
      this,
      1,
      this->klass->vtable._9_SetDragAmount.method,
      v6,
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
  float v10[3]; // [xsp+8h] [xbp-28h] BYREF
  float v11; // [xsp+14h] [xbp-1Ch]
  float v12; // [xsp+18h] [xbp-18h]

  ((void (__fastcall *)(float *__return_ptr))this->klass->vtable._4_get_bounds.methodPtr)(v10);
  mPanel = this->fields.mPanel;
  if ( !mPanel )
    sub_1C93D2C(0, v3);
  ((void (__fastcall *)(struct UIPanel_o *, const MethodInfo *, float, float, float, float))mPanel->klass->vtable._22_CalculateConstrainOffset.methodPtr)(
    mPanel,
    mPanel->klass->vtable._22_CalculateConstrainOffset.method,
    v10[0] - v11,
    v10[1] - v12,
    v10[0] + v11,
    v10[1] + v12);
  movement = this->fields.movement;
  if ( !movement || (v5 = 0.0, movement != 1) )
    v6 = 0.0;
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
  float v10[3]; // [xsp+8h] [xbp-28h] BYREF
  float v11; // [xsp+14h] [xbp-1Ch]
  float v12; // [xsp+18h] [xbp-18h]

  ((void (__fastcall *)(float *__return_ptr))this->klass->vtable._4_get_bounds.methodPtr)(v10);
  mPanel = this->fields.mPanel;
  if ( !mPanel )
    sub_1C93D2C(0, v3);
  ((void (__fastcall *)(struct UIPanel_o *, const MethodInfo *, float, float, float, float))mPanel->klass->vtable._22_CalculateConstrainOffset.methodPtr)(
    mPanel,
    mPanel->klass->vtable._22_CalculateConstrainOffset.method,
    v10[0] - v11,
    v10[1] - v12,
    v10[0] + v11,
    v10[1] + v12);
  movement = this->fields.movement;
  if ( !movement || (v5 = 0.0, movement != 1) )
    v6 = 0.0;
  return (float)((float)(v7 * v7) + (float)((float)(v5 * v5) + (float)(v6 * v6))) > 0.2;
}


// local variable allocation has failed, the output may be wrong!
bool UIScrollView__IsLimitOverPosition2_49959932(
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
  float v13[3]; // [xsp+8h] [xbp-38h] BYREF
  float v14; // [xsp+14h] [xbp-2Ch]
  float v15; // [xsp+18h] [xbp-28h]

  y = offset.fields.y;
  x = offset.fields.x;
  ((void (__fastcall *)(float *__return_ptr, long double, long double, long double))this->klass->vtable._4_get_bounds.methodPtr)(
    v13,
    *(long double *)&offset.fields.x,
    *(long double *)&offset.fields.y,
    *(long double *)&offset.fields.z);
  mPanel = this->fields.mPanel;
  if ( !mPanel )
    sub_1C93D2C(0, v6);
  ((void (__fastcall *)(struct UIPanel_o *, const MethodInfo *, float, float, float, float))mPanel->klass->vtable._22_CalculateConstrainOffset.methodPtr)(
    mPanel,
    mPanel->klass->vtable._22_CalculateConstrainOffset.method,
    x + (float)(v13[0] - v14),
    y + (float)(v13[1] - v15),
    x + (float)(v13[0] + v14),
    y + (float)(v13[1] + v15));
  movement = this->fields.movement;
  if ( !movement || (v8 = 0.0, movement != 1) )
    v9 = 0.0;
  return (float)((float)(v10 * v10) + (float)((float)(v8 * v8) + (float)(v9 * v9))) > 0.2;
}


void UIScrollView__LateUpdate(UIScrollView_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  float deltaTime; // s8
  UnityEngine_Object_o *verticalScrollBar; // x20
  UnityEngine_Object_o *horizontalScrollBar; // x20
  float y; // s10
  float x; // s11
  float z; // s9
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
  float v25; // s10
  float v26; // s11
  float v27; // s9
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float v29; // s1
  Il2CppObject *Component_object; // x20
  struct UIScrollView_OnDragNotification_o *onStoppedMoving; // x8
  int32_t movement; // w8
  float32x2_t v33; // d9
  float v34; // s10
  unsigned __int64 v35; // d0
  float v36; // s1
  float mScroll; // s0
  float v38; // s0
  const MethodInfo *v39; // x0
  const MethodInfo *v40; // x1
  const MethodInfo *v41; // x1
  struct UIPanel_o *mPanel; // x8
  UnityEngine_Behaviour_o *centerOnChild; // x20
  const MethodInfo *v44; // x4
  int32_t v45; // w8
  char v46; // w2
  bool v47; // w3
  struct UnityEngine_Vector3_StaticFields *v48; // x8
  __int64 v49; // d0
  float v50; // s1
  UnityEngine_Vector3_o v51; // 0:kr14_12.12
  UnityEngine_Vector3_o v52; // 0:kr34_12.12
  UnityEngine_Vector3_o v53; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4D3513C & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Application_TypeInfo);
    sub_1C93AD4(&Method_UnityEngine_Component_GetComponent_SpringPanel___);
    sub_1C93AD4(&NGUITools_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D3513C = 1;
  }
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
  if ( !UnityEngine_Application__get_isPlaying(0) )
    return;
  deltaTime = RealTime__get_deltaTime(0);
  if ( this->fields.showScrollBars )
  {
    verticalScrollBar = (UnityEngine_Object_o *)this->fields.verticalScrollBar;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Implicit(verticalScrollBar, 0) )
      goto LABEL_19;
    horizontalScrollBar = (UnityEngine_Object_o *)this->fields.horizontalScrollBar;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Implicit(horizontalScrollBar, 0) )
    {
LABEL_19:
      if ( this->fields.showScrollBars != 2 || this->fields.mDragID != -10 )
        goto LABEL_20;
      if ( !byte_4D2A13B )
      {
        sub_1C93AD4(&System_Math_TypeInfo);
        byte_4D2A13B = 1;
      }
      x = this->fields.mMomentum.fields.x;
      y = this->fields.mMomentum.fields.y;
      z = this->fields.mMomentum.fields.z;
      if ( !System_Math_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      if ( sqrtf((float)((float)(x * x) + (float)(y * y)) + (float)(z * z)) <= 0.01 )
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
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Implicit(v12, 0) )
      {
        mTrans = this->fields.verticalScrollBar;
        if ( !mTrans )
          goto LABEL_98;
        alpha = UIProgressBar__get_alpha(mTrans, 0);
        v15 = -3.0;
        if ( (v10 & 1) != 0 )
          v15 = 6.0;
        mTrans = this->fields.verticalScrollBar;
        v16 = (float)(deltaTime * v15) + alpha;
        v17 = fminf(v16, 1.0);
        v18 = v16 < 0.0 ? 0.0 : v17;
        if ( !mTrans )
          goto LABEL_98;
        if ( UIProgressBar__get_alpha(mTrans, 0) != v18 )
        {
          mTrans = this->fields.verticalScrollBar;
          if ( !mTrans )
            goto LABEL_98;
          UIProgressBar__set_alpha(mTrans, v18, 0);
        }
      }
      v19 = (UnityEngine_Object_o *)this->fields.horizontalScrollBar;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Implicit(v19, 0) )
      {
        mTrans = this->fields.horizontalScrollBar;
        if ( !mTrans )
          goto LABEL_98;
        v20 = UIProgressBar__get_alpha(mTrans, 0);
        v21 = -3.0;
        if ( (v11 & 1) != 0 )
          v21 = 6.0;
        mTrans = this->fields.horizontalScrollBar;
        v22 = (float)(deltaTime * v21) + v20;
        v23 = fminf(v22, 1.0);
        v24 = v22 < 0.0 ? 0.0 : v23;
        if ( !mTrans )
          goto LABEL_98;
        if ( UIProgressBar__get_alpha(mTrans, 0) != v24 )
        {
          mTrans = this->fields.horizontalScrollBar;
          if ( !mTrans )
            goto LABEL_98;
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
  if ( !byte_4D2A13B )
  {
    sub_1C93AD4(&System_Math_TypeInfo);
    byte_4D2A13B = 1;
  }
  v26 = this->fields.mMomentum.fields.x;
  v25 = this->fields.mMomentum.fields.y;
  v27 = this->fields.mMomentum.fields.z;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  if ( sqrtf((float)((float)(v26 * v26) + (float)(v25 * v25)) + (float)(v27 * v27)) <= 0.0001
    && this->fields.mScroll == 0.0 )
  {
    this->fields.mScroll = 0.0;
    if ( !byte_4D2A139 )
    {
      sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
      byte_4D2A139 = 1;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    v29 = static_fields->zeroVector.fields.z;
    *(_QWORD *)&this->fields.mMomentum.fields.x = *(_QWORD *)&static_fields->zeroVector.fields.x;
    this->fields.mMomentum.fields.z = v29;
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)this,
                         (const MethodInfo_319B20C *)Method_UnityEngine_Component_GetComponent_SpringPanel___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    mTrans = (UIProgressBar_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
    if ( ((unsigned __int8)mTrans & 1) == 0 )
      goto LABEL_63;
    if ( Component_object )
    {
      if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)Component_object, 0) )
        return;
LABEL_63:
      onStoppedMoving = this->fields.onStoppedMoving;
      this->fields.mShouldMove = 0;
      if ( !onStoppedMoving )
        return;
LABEL_97:
      ((void (__fastcall *)(intptr_t, intptr_t))onStoppedMoving->fields.invoke_impl)(
        onStoppedMoving->fields.method_code,
        onStoppedMoving->fields.method);
      return;
    }
LABEL_98:
    sub_1C93D2C(mTrans, v3);
  }
  movement = this->fields.movement;
  if ( movement == 1 )
  {
    mTrans = (UIProgressBar_o *)this->fields.mTrans;
    if ( !mTrans )
      goto LABEL_98;
    v33.n64_u64[0] = *(unsigned __int64 *)&this->fields.mMomentum.fields.y;
    v34 = this->fields.mMomentum.fields.x;
    v36 = this->fields.mScroll * 0.05;
    LODWORD(v35) = 0;
  }
  else if ( movement )
  {
    v34 = this->fields.mMomentum.fields.x;
    v33.n64_u64[0] = *(unsigned __int64 *)&this->fields.mMomentum.fields.y;
    mTrans = (UIProgressBar_o *)this->fields.mTrans;
    mScroll = this->fields.mScroll;
    if ( movement == 2 )
    {
      if ( !mTrans )
        goto LABEL_98;
      *(float *)&v35 = mScroll * 0.05;
      v36 = *(float *)&v35;
    }
    else
    {
      if ( !mTrans )
        goto LABEL_98;
      v35 = vmul_f32(vmul_n_f32((float32x2_t)this->fields.customMovement, mScroll), vdup_n_s32(0x3D4CCCCDu)).n64_u64[0];
      v36 = *((float *)&v35 + 1);
    }
  }
  else
  {
    mTrans = (UIProgressBar_o *)this->fields.mTrans;
    if ( !mTrans )
      goto LABEL_98;
    v33.n64_u64[0] = *(unsigned __int64 *)&this->fields.mMomentum.fields.y;
    v34 = this->fields.mMomentum.fields.x;
    *(float *)&v35 = this->fields.mScroll * 0.05;
    v36 = 0.0;
  }
  LODWORD(v52.fields.x) = v35;
  v52.fields.y = v36;
  v52.fields.z = 0.0;
  v51 = UnityEngine_Transform__TransformDirection((UnityEngine_Transform_o *)mTrans, v52, 0);
  v38 = this->fields.mScroll;
  this->fields.mMomentum.fields.x = v34 - v51.fields.x;
  *(float32x2_t *)&this->fields.mMomentum.fields.y = vsub_f32(v33, *(float32x2_t *)&v51.fields.y);
  this->fields.mScroll = NGUIMath__SpringLerp_49961736(v38, 0.0, 20.0, deltaTime, v39);
  v53 = NGUIMath__SpringDampen(&this->fields.mMomentum, 9.0, deltaTime, v40);
  UIScrollView__MoveAbsolute(this, v53, v41);
  if ( this->fields.restrictWithinPanel )
  {
    mPanel = this->fields.mPanel;
    if ( !mPanel )
      goto LABEL_98;
    if ( mPanel->fields.mClipping )
    {
      centerOnChild = (UnityEngine_Behaviour_o *)this->fields.centerOnChild;
      if ( !NGUITools_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
      if ( NGUITools__GetActive(centerOnChild, 0) )
      {
        mTrans = (UIProgressBar_o *)this->fields.centerOnChild;
        if ( !mTrans )
          goto LABEL_98;
        if ( *((float *)&mTrans->fields.onDragFinished + 1) == 0.0 )
        {
          ((void (__fastcall *)(UIProgressBar_o *, const MethodInfo *))mTrans->klass->vtable._4_Upgrade.methodPtr)(
            mTrans,
            mTrans->klass->vtable._4_Upgrade.method);
        }
        else
        {
          if ( !byte_4D2A139 )
          {
            sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
            byte_4D2A139 = 1;
          }
          v48 = UnityEngine_Vector3_TypeInfo->static_fields;
          v49 = *(_QWORD *)&v48->zeroVector.fields.x;
          v50 = v48->zeroVector.fields.z;
          this->fields.mScroll = 0.0;
          *(_QWORD *)&this->fields.mMomentum.fields.x = v49;
          this->fields.mMomentum.fields.z = v50;
        }
        goto LABEL_96;
      }
      v45 = this->fields.movement;
      v46 = 1;
      if ( v45 && v45 != 2 )
      {
        if ( v45 == 3 )
        {
          v46 = this->fields.customMovement.fields.x != 0.0;
          v47 = this->fields.customMovement.fields.y != 0.0;
LABEL_95:
          UIScrollView__RestrictWithinBounds_49951228(this, 0, v46, v47, v44);
          goto LABEL_96;
        }
        v46 = 0;
      }
      v47 = (unsigned int)(v45 - 1) < 2;
      goto LABEL_95;
    }
  }
LABEL_96:
  onStoppedMoving = this->fields.onMomentumMove;
  if ( onStoppedMoving )
    goto LABEL_97;
}


void UIScrollView__MoveAbsolute(UIScrollView_o *this, UnityEngine_Vector3_o absolute, const MethodInfo *method)
{
  UnityEngine_Transform_o *mTrans; // x0
  UnityEngine_Transform_o *v5; // x20
  UnityEngine_Vector3_o v6; // 0:kr00_12.12
  UnityEngine_Vector3_o v7; // 0:kr14_12.12

  mTrans = this->fields.mTrans;
  if ( !mTrans )
    goto LABEL_6;
  v6 = UnityEngine_Transform__InverseTransformPoint(mTrans, absolute, 0);
  v5 = this->fields.mTrans;
  if ( !byte_4D2A139 )
  {
    mTrans = (UnityEngine_Transform_o *)sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
    byte_4D2A139 = 1;
  }
  if ( !v5 )
LABEL_6:
    sub_1C93D2C(mTrans, method);
  v7 = UnityEngine_Transform__InverseTransformPoint(v5, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
  ((void (__fastcall *)(UIScrollView_o *, const MethodInfo *, float, float, float))this->klass->vtable._10_MoveRelative.methodPtr)(
    this,
    this->klass->vtable._10_MoveRelative.method,
    v6.fields.x - v7.fields.x,
    v6.fields.y - v7.fields.y,
    v6.fields.z - v7.fields.z);
}


void UIScrollView__MoveRelative(UIScrollView_o *this, UnityEngine_Vector3_o relative, const MethodInfo *method)
{
  UnityEngine_Transform_o *mTrans; // x20
  UIScrollView_o **v4; // x19
  float z; // s10
  float y; // s8
  float x; // s9
  UnityEngine_Vector3_o localPosition; // 0:kr00_12.12
  UnityEngine_Vector2_o v9; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o v10; // 0:s0.4,4:s1.4,8:s2.4

  mTrans = this->fields.mTrans;
  if ( !mTrans )
    goto LABEL_4;
  v4 = (UIScrollView_o **)this;
  z = relative.fields.z;
  y = relative.fields.y;
  x = relative.fields.x;
  localPosition = UnityEngine_Transform__get_localPosition(this->fields.mTrans, 0);
  v10.fields.x = x + localPosition.fields.x;
  v10.fields.y = y + localPosition.fields.y;
  v10.fields.z = z + localPosition.fields.z;
  UnityEngine_Transform__set_localPosition(mTrans, v10, 0);
  this = v4[19];
  if ( !this )
LABEL_4:
    sub_1C93D2C(this, method);
  v9.fields.x = *((float *)this + 83) - x;
  v9.fields.y = *((float *)this + 84) - y;
  UIPanel__set_clipOffset((UIPanel_o *)this, v9, 0);
  (*(void (__fastcall **)(UIScrollView_o **, _QWORD, _QWORD))&(*v4)[1].fields.mLastPos.fields.x)(
    v4,
    0,
    *(_QWORD *)&(*v4)[1].fields.mLastPos.fields.z);
}


void UIScrollView__OnDisable(UIScrollView_o *this, const MethodInfo *method)
{
  UIScrollView_c *v3; // x0
  BetterList_T__o *list; // x0

  if ( (byte_4D35130 & 1) == 0 )
  {
    sub_1C93AD4(&Method_BetterList_UIScrollView__Remove__);
    sub_1C93AD4(&UIScrollView_TypeInfo);
    byte_4D35130 = 1;
  }
  v3 = UIScrollView_TypeInfo;
  if ( !UIScrollView_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UIScrollView_TypeInfo);
    v3 = UIScrollView_TypeInfo;
  }
  list = (BetterList_T__o *)v3->static_fields->list;
  if ( !list )
    sub_1C93D2C(0, method);
  BetterList_object___Remove(
    list,
    (Il2CppObject *)this,
    (const MethodInfo_33DC1C4 *)Method_BetterList_UIScrollView__Remove__);
}


void UIScrollView__OnEnable(UIScrollView_o *this, const MethodInfo *method)
{
  UIScrollView_c *v3; // x0
  BetterList_T__o *list; // x0
  const MethodInfo *v5; // x1

  if ( (byte_4D3512D & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Application_TypeInfo);
    sub_1C93AD4(&Method_BetterList_UIScrollView__Add__);
    sub_1C93AD4(&UIScrollView_TypeInfo);
    byte_4D3512D = 1;
  }
  v3 = UIScrollView_TypeInfo;
  if ( !UIScrollView_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UIScrollView_TypeInfo);
    v3 = UIScrollView_TypeInfo;
  }
  list = (BetterList_T__o *)v3->static_fields->list;
  if ( !list )
    sub_1C93D2C(0, method);
  BetterList_object___Add(list, (Il2CppObject *)this, (const MethodInfo_33DBF0C *)Method_BetterList_UIScrollView__Add__);
  if ( this->fields.mStarted )
  {
    if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
    if ( UnityEngine_Application__get_isPlaying(0) )
      UIScrollView__CheckScrollbars(this, v5);
  }
}


void UIScrollView__OnScrollBar(UIScrollView_o *this, const MethodInfo *method)
{
  long double v2; // q8
  UnityEngine_Object_o *horizontalScrollBar; // x20
  __int64 v5; // x1
  UIProgressBar_o *v6; // x0
  long double v7; // q0
  UnityEngine_Object_o *verticalScrollBar; // x20
  bool v9; // w0
  long double v10; // q1
  long double v11; // q0

  if ( (byte_4D35138 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D35138 = 1;
  }
  if ( !this->fields.mIgnoreCallbacks )
  {
    this->fields.mIgnoreCallbacks = 1;
    horizontalScrollBar = (UnityEngine_Object_o *)this->fields.horizontalScrollBar;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    LODWORD(v2) = 0;
    if ( UnityEngine_Object__op_Inequality(horizontalScrollBar, 0, 0) )
    {
      v6 = this->fields.horizontalScrollBar;
      if ( !v6 )
        goto LABEL_16;
      *(float *)&v7 = UIProgressBar__get_value(v6, 0);
      v2 = v7;
    }
    verticalScrollBar = (UnityEngine_Object_o *)this->fields.verticalScrollBar;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v9 = UnityEngine_Object__op_Inequality(verticalScrollBar, 0, 0);
    LODWORD(v10) = 0;
    if ( !v9 )
      goto LABEL_14;
    v6 = this->fields.verticalScrollBar;
    if ( v6 )
    {
      *(float *)&v11 = UIProgressBar__get_value(v6, 0);
      v10 = v11;
LABEL_14:
      ((void (__fastcall *)(UIScrollView_o *, _QWORD, const MethodInfo *, long double, long double))this->klass->vtable._9_SetDragAmount.methodPtr)(
        this,
        0,
        this->klass->vtable._9_SetDragAmount.method,
        v2,
        v10);
      this->fields.mIgnoreCallbacks = 0;
      return;
    }
LABEL_16:
    sub_1C93D2C(v6, v5);
  }
}


void UIScrollView__Press(UIScrollView_o *this, bool pressed, const MethodInfo *method)
{
  UICamera_c *v5; // x0
  UnityEngine_GameObject_o *gameObject; // x21
  UICamera_c *v7; // x0
  int32_t mDragID; // w21
  UIScrollView_c *klass; // x8
  char v10; // w0
  const MethodInfo *v11; // x1
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  __int64 v13; // d0
  float z; // s1
  __int64 v15; // x1
  UICamera_c *v16; // x0
  struct UICamera_StaticFields *v17; // x8
  __int64 mTrans; // x0
  float v19; // w9
  __int64 v20; // x8
  float x; // s11
  float y; // s12
  float v23; // s13
  float v24; // s0
  float v25; // s1
  float v26; // s2
  float v27; // s0
  UnityEngine_Object_o *centerOnChild; // x20
  const MethodInfo *v29; // x4
  void (*invoke_impl)(void); // x2
  struct UnityEngine_Vector3_StaticFields *v31; // x8
  struct UIPanel_o *mPanel; // x8
  float v33; // s8
  float v34; // s9
  double v35; // d0
  double v36; // d0
  float v37; // s1
  struct UIPanel_o *v38; // x8
  int32_t movement; // w9
  char v40; // w2
  bool v41; // w3
  __int64 v42; // x8
  float v43; // s0
  float v44; // s1
  float v45; // s8
  double v46; // d0
  double v47; // d0
  float v48; // s1
  __int64 v49; // x8
  float v50; // s0
  double v51; // d0
  double v52; // d0
  float v53; // s1
  __int64 v54; // x8
  float v55; // s0
  float v56; // s1
  float v57; // s10
  double v58; // d0
  double v59; // d0
  float v60; // s1
  __int64 v61; // x8
  float v62; // s0
  struct UIScrollView_OnDragNotification_o *onDragStarted; // x8
  struct UIScrollView_OnDragNotification_o *onDragFinished; // x8
  double iptr; // [xsp+38h] [xbp-28h] BYREF
  UnityEngine_Vector3_o v66; // 0:kr10_12.12
  UnityEngine_Vector3_o localPosition; // 0:kr24_12.12
  UnityEngine_Quaternion_o rotation; // 0:kr00_16.16
  UnityEngine_Vector2_o v69; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o v70; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4D35139 & 1) == 0 )
  {
    sub_1C93AD4(&NGUITools_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&UICamera_TypeInfo);
    byte_4D35139 = 1;
  }
  v5 = UICamera_TypeInfo;
  if ( !UICamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    v5 = UICamera_TypeInfo;
  }
  if ( v5->static_fields->currentScheme == 2 )
    return;
  if ( pressed && this->fields.smoothDragStart )
  {
    this->fields.mDragStarted = 0;
    if ( !byte_4D2A019 )
    {
      sub_1C93AD4(&UnityEngine_Vector2_TypeInfo);
      byte_4D2A019 = 1;
    }
    this->fields.mDragStartOffset = UnityEngine_Vector2_TypeInfo->static_fields->zeroVector;
  }
  if ( !UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0) )
    return;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  if ( !NGUITools__GetActive_50071416(gameObject, 0) )
    return;
  if ( !pressed )
  {
    v7 = UICamera_TypeInfo;
    mDragID = this->fields.mDragID;
    if ( !UICamera_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
      v7 = UICamera_TypeInfo;
    }
    if ( mDragID == v7->static_fields->currentTouchID )
      this->fields.mDragID = -10;
  }
  klass = this->klass;
  this->fields.mCalculatedBounds = 0;
  v10 = ((__int64 (__fastcall *)(UIScrollView_o *, const MethodInfo *))klass->vtable._7_get_shouldMove.methodPtr)(
          this,
          klass->vtable._7_get_shouldMove.method);
  this->fields.mShouldMove = v10 & 1;
  if ( (v10 & 1) == 0 )
    return;
  this->fields.mPressed = pressed;
  if ( pressed )
  {
    if ( !byte_4D2A139 )
    {
      sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
      byte_4D2A139 = 1;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    v13 = *(_QWORD *)&static_fields->zeroVector.fields.x;
    z = static_fields->zeroVector.fields.z;
    this->fields.mScroll = 0.0;
    *(_QWORD *)&this->fields.mMomentum.fields.x = v13;
    this->fields.mMomentum.fields.z = z;
    UIScrollView__DisableSpring(this, v11);
    v16 = UICamera_TypeInfo;
    if ( !UICamera_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
      v16 = UICamera_TypeInfo;
    }
    v17 = v16->static_fields;
    mTrans = (__int64)this->fields.mTrans;
    v19 = v17->lastWorldPosition.fields.z;
    v20 = *(_QWORD *)&v17->lastWorldPosition.fields.x;
    this->fields.mLastPos.fields.z = v19;
    *(_QWORD *)&this->fields.mLastPos.fields.x = v20;
    if ( !mTrans )
      goto LABEL_109;
    rotation = UnityEngine_Transform__get_rotation((UnityEngine_Transform_o *)mTrans, 0);
    if ( !byte_4D2D067 )
    {
      sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
      byte_4D2D067 = 1;
    }
    v66 = UnityEngine_Quaternion__op_Multiply_72058644(
            rotation,
            UnityEngine_Vector3_TypeInfo->static_fields->backVector,
            0);
    x = this->fields.mLastPos.fields.x;
    y = this->fields.mLastPos.fields.y;
    v23 = this->fields.mLastPos.fields.z;
    if ( !byte_4D2A13C )
    {
      sub_1C93AD4(&System_Math_TypeInfo);
      byte_4D2A13C = 1;
    }
    mTrans = (__int64)System_Math_TypeInfo;
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v24 = sqrtf(
            (float)(v66.fields.z * v66.fields.z)
          + (float)((float)(v66.fields.x * v66.fields.x) + (float)(v66.fields.y * v66.fields.y)));
    if ( v24 <= 0.00001 )
    {
      if ( !byte_4D2A139 )
      {
        mTrans = sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
        byte_4D2A139 = 1;
      }
      v31 = UnityEngine_Vector3_TypeInfo->static_fields;
      v25 = v31->zeroVector.fields.x;
      v26 = v31->zeroVector.fields.y;
      v27 = v31->zeroVector.fields.z;
    }
    else
    {
      v25 = v66.fields.x / v24;
      v26 = v66.fields.y / v24;
      v27 = v66.fields.z / v24;
    }
    mPanel = this->fields.mPanel;
    this->fields.mPlane.fields.m_Normal.fields.x = v25;
    this->fields.mPlane.fields.m_Normal.fields.y = v26;
    this->fields.mPlane.fields.m_Normal.fields.z = v27;
    this->fields.mPlane.fields.m_Distance = -(float)((float)(v23 * v27) + (float)((float)(x * v25) + (float)(y * v26)));
    if ( !mPanel )
      goto LABEL_109;
    v33 = mPanel->fields.mClipOffset.fields.x;
    v34 = mPanel->fields.mClipOffset.fields.y;
    v35 = modf(v33, &iptr);
    if ( v33 >= 0.0 )
    {
      if ( v35 != 0.5 )
      {
        v45 = floorf(v33 + 0.5);
        goto LABEL_60;
      }
      v36 = iptr;
      v37 = 1.0;
    }
    else
    {
      if ( v35 != -0.5 )
      {
        v45 = ceilf(v33 + -0.5);
        goto LABEL_60;
      }
      v36 = iptr;
      v37 = -1.0;
    }
    v42 = (__int64)v36;
    v43 = v36;
    v44 = v43 + v37;
    if ( (v42 & 1) != 0 )
      v45 = v44;
    else
      v45 = v43;
LABEL_60:
    v46 = modf(v34, &iptr);
    if ( v34 >= 0.0 )
    {
      if ( v46 != 0.5 )
      {
        v69.fields.y = floorf(v34 + 0.5);
        goto LABEL_70;
      }
      v47 = iptr;
      v48 = 1.0;
    }
    else
    {
      if ( v46 != -0.5 )
      {
        v69.fields.y = ceilf(v34 + -0.5);
        goto LABEL_70;
      }
      v47 = iptr;
      v48 = -1.0;
    }
    v49 = (__int64)v47;
    v50 = v47;
    v69.fields.y = v50 + v48;
    if ( (v49 & 1) == 0 )
      v69.fields.y = v50;
LABEL_70:
    mTrans = (__int64)this->fields.mPanel;
    if ( !mTrans )
      goto LABEL_109;
    v69.fields.x = v45;
    UIPanel__set_clipOffset((UIPanel_o *)mTrans, v69, 0);
    mTrans = (__int64)this->fields.mTrans;
    if ( !mTrans )
      goto LABEL_109;
    localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)mTrans, 0);
    v51 = modf(localPosition.fields.x, &iptr);
    if ( localPosition.fields.x >= 0.0 )
    {
      if ( v51 != 0.5 )
      {
        v57 = floorf(localPosition.fields.x + 0.5);
        goto LABEL_82;
      }
      v52 = iptr;
      v53 = 1.0;
    }
    else
    {
      if ( v51 != -0.5 )
      {
        v57 = ceilf(localPosition.fields.x + -0.5);
        goto LABEL_82;
      }
      v52 = iptr;
      v53 = -1.0;
    }
    v54 = (__int64)v52;
    v55 = v52;
    v56 = v55 + v53;
    if ( (v54 & 1) != 0 )
      v57 = v56;
    else
      v57 = v55;
LABEL_82:
    v58 = modf(localPosition.fields.y, &iptr);
    if ( localPosition.fields.y >= 0.0 )
    {
      if ( v58 != 0.5 )
      {
        v70.fields.y = floorf(localPosition.fields.y + 0.5);
        goto LABEL_92;
      }
      v59 = iptr;
      v60 = 1.0;
    }
    else
    {
      if ( v58 != -0.5 )
      {
        v70.fields.y = ceilf(localPosition.fields.y + -0.5);
        goto LABEL_92;
      }
      v59 = iptr;
      v60 = -1.0;
    }
    v61 = (__int64)v59;
    v62 = v59;
    v70.fields.y = v62 + v60;
    if ( (v61 & 1) == 0 )
      v70.fields.y = v62;
LABEL_92:
    mTrans = (__int64)this->fields.mTrans;
    if ( mTrans )
    {
      v70.fields.x = v57;
      v70.fields.z = localPosition.fields.z;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)mTrans, v70, 0);
      if ( this->fields.smoothDragStart )
        return;
      this->fields.mDragStarted = 1;
      if ( !byte_4D2A019 )
      {
        sub_1C93AD4(&UnityEngine_Vector2_TypeInfo);
        byte_4D2A019 = 1;
      }
      onDragStarted = this->fields.onDragStarted;
      this->fields.mDragStartOffset = UnityEngine_Vector2_TypeInfo->static_fields->zeroVector;
      if ( !onDragStarted )
        return;
      goto LABEL_107;
    }
LABEL_109:
    sub_1C93D2C(mTrans, v15);
  }
  centerOnChild = (UnityEngine_Object_o *)this->fields.centerOnChild;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  mTrans = UnityEngine_Object__op_Implicit(centerOnChild, 0);
  if ( (mTrans & 1) != 0 )
  {
    mTrans = (__int64)this->fields.centerOnChild;
    if ( mTrans )
    {
      invoke_impl = *(void (**)(void))(*(_QWORD *)mTrans + 376LL);
LABEL_108:
      invoke_impl();
      return;
    }
    goto LABEL_109;
  }
  if ( this->fields.restrictWithinPanel )
  {
    v38 = this->fields.mPanel;
    if ( !v38 )
      goto LABEL_109;
    if ( v38->fields.mClipping )
    {
      movement = this->fields.movement;
      v40 = 1;
      if ( movement && movement != 2 )
      {
        if ( movement == 3 )
        {
          v40 = this->fields.customMovement.fields.x != 0.0;
          v41 = this->fields.customMovement.fields.y != 0.0;
LABEL_100:
          UIScrollView__RestrictWithinBounds_49951228(this, this->fields.dragEffect == 0, v40, v41, v29);
          goto LABEL_101;
        }
        v40 = 0;
      }
      v41 = (unsigned int)(movement - 1) < 2;
      goto LABEL_100;
    }
  }
LABEL_101:
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
    onDragStarted = this->fields.onStoppedMoving;
    if ( onDragStarted )
    {
LABEL_107:
      invoke_impl = (void (*)(void))onDragStarted->fields.invoke_impl;
      goto LABEL_108;
    }
  }
}


void UIScrollView__ResetPosition(UIScrollView_o *this, const MethodInfo *method)
{
  long double v2; // q9
  const MethodInfo *v4; // x1
  int32_t contentPivot; // w0
  long double v6; // q0
  UnityEngine_Vector2_o PivotOffset; // kr00_8
  long double v8; // q8

  if ( (byte_4D35135 & 1) == 0 )
  {
    sub_1C93AD4(&NGUITools_TypeInfo);
    byte_4D35135 = 1;
  }
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  if ( NGUITools__GetActive((UnityEngine_Behaviour_o *)this, 0) )
  {
    contentPivot = this->fields.contentPivot;
    this->fields.mCalculatedBounds = 0;
    PivotOffset = NGUIMath__GetPivotOffset(contentPivot, v4);
    *(float *)&v6 = PivotOffset.fields.x;
    v8 = v6;
    *(float *)&v2 = 1.0 - PivotOffset.fields.y;
    ((void (__fastcall *)(UIScrollView_o *, _QWORD, const MethodInfo *, float, long double))this->klass->vtable._9_SetDragAmount.methodPtr)(
      this,
      0,
      this->klass->vtable._9_SetDragAmount.method,
      PivotOffset.fields.x,
      v2);
    ((void (__fastcall *)(UIScrollView_o *, __int64, const MethodInfo *, long double, long double))this->klass->vtable._9_SetDragAmount.methodPtr)(
      this,
      1,
      this->klass->vtable._9_SetDragAmount.method,
      v8,
      v2);
  }
}


bool UIScrollView__RestrictWithinBounds(UIScrollView_o *this, bool instant, const MethodInfo *method)
{
  const MethodInfo *v3; // x4

  return UIScrollView__RestrictWithinBounds_49951228(this, instant, 1, 1, v3);
}


bool UIScrollView__RestrictWithinBounds_49951228(
        UIScrollView_o *this,
        bool instant,
        bool horizontal,
        bool vertical,
        const MethodInfo *method)
{
  long double v5; // q10
  long double v6; // q11
  __int64 v11; // x1
  UnityEngine_Transform_o *mPanel; // x0
  float v13; // s0
  float v14; // s1
  long double v15; // q2
  float v16; // s8
  float v17; // s12
  double v18; // d0
  float v19; // s11
  double v20; // d0
  double v21; // d0
  float v22; // s1
  __int64 v24; // x8
  float v25; // s0
  float v26; // s1
  float v27; // s10
  double v28; // d0
  double v29; // d0
  float v30; // s1
  __int64 v31; // x8
  float v32; // s0
  float v33; // s1
  float v34; // s11
  UnityEngine_GameObject_o *gameObject; // x0
  double iptr; // [xsp+8h] [xbp-68h] BYREF
  float v37; // [xsp+14h] [xbp-5Ch]
  float v38; // [xsp+18h] [xbp-58h]
  UnityEngine_Vector3_o localPosition; // 0:kr00_12.12
  UnityEngine_Vector3_o v40; // 0:s0.4,4:s1.4,8:s2.4

  ((void (__fastcall *)(double *__return_ptr, UIScrollView_o *, const MethodInfo *, bool, bool, const MethodInfo *))this->klass->vtable._4_get_bounds.methodPtr)(
    &iptr,
    this,
    this->klass->vtable._4_get_bounds.method,
    horizontal,
    vertical,
    method);
  mPanel = (UnityEngine_Transform_o *)this->fields.mPanel;
  if ( !mPanel )
    goto LABEL_44;
  (*(void (__fastcall **)(UnityEngine_Transform_o *, _QWORD, float, float, float, float))&mPanel->klass[1]._2.thread_static_fields_offset)(
    mPanel,
    *(_QWORD *)&mPanel->klass[1]._2.token,
    *(float *)&iptr - v37,
    *((float *)&iptr + 1) - v38,
    *(float *)&iptr + v37,
    *((float *)&iptr + 1) + v38);
  v16 = *(float *)&v15;
  if ( horizontal )
    *(float *)&v6 = v13;
  else
    *(float *)&v6 = 0.0;
  if ( vertical )
    *(float *)&v5 = v14;
  else
    *(float *)&v5 = 0.0;
  if ( (float)((float)(*(float *)&v15 * *(float *)&v15)
             + (float)((float)(*(float *)&v6 * *(float *)&v6) + (float)(*(float *)&v5 * *(float *)&v5))) <= 0.1 )
    return 0;
  if ( instant || this->fields.dragEffect != 2 )
  {
    ((void (__fastcall *)(UIScrollView_o *, const MethodInfo *, long double, long double, long double))this->klass->vtable._10_MoveRelative.methodPtr)(
      this,
      this->klass->vtable._10_MoveRelative.method,
      v6,
      v5,
      v15);
    if ( fabsf(*(float *)&v6) > 0.01 )
      this->fields.mMomentum.fields.x = 0.0;
    if ( fabsf(*(float *)&v5) > 0.01 )
      this->fields.mMomentum.fields.y = 0.0;
    if ( fabsf(v16) > 0.01 )
      this->fields.mMomentum.fields.z = 0.0;
    this->fields.mScroll = 0.0;
    return 1;
  }
  mPanel = this->fields.mTrans;
  if ( !mPanel )
LABEL_44:
    sub_1C93D2C(mPanel, v11);
  localPosition = UnityEngine_Transform__get_localPosition(mPanel, 0);
  v17 = *(float *)&v6 + localPosition.fields.x;
  v18 = (float)(*(float *)&v6 + localPosition.fields.x);
  v19 = *(float *)&v5 + localPosition.fields.y;
  v20 = modf(v18, &iptr);
  if ( v17 >= 0.0 )
  {
    if ( v20 != 0.5 )
    {
      v27 = floorf(v17 + 0.5);
      goto LABEL_30;
    }
    v21 = iptr;
    v22 = 1.0;
  }
  else
  {
    if ( v20 != -0.5 )
    {
      v27 = ceilf(v17 + -0.5);
      goto LABEL_30;
    }
    v21 = iptr;
    v22 = -1.0;
  }
  v24 = (__int64)v21;
  v25 = v21;
  v26 = v25 + v22;
  if ( (v24 & 1) != 0 )
    v27 = v26;
  else
    v27 = v25;
LABEL_30:
  v28 = modf(v19, &iptr);
  if ( v19 >= 0.0 )
  {
    if ( v28 != 0.5 )
    {
      v34 = floorf(v19 + 0.5);
      goto LABEL_40;
    }
    v29 = iptr;
    v30 = 1.0;
  }
  else
  {
    if ( v28 != -0.5 )
    {
      v34 = ceilf(v19 + -0.5);
      goto LABEL_40;
    }
    v29 = iptr;
    v30 = -1.0;
  }
  v31 = (__int64)v29;
  v32 = v29;
  v33 = v32 + v30;
  if ( (v31 & 1) != 0 )
    v34 = v33;
  else
    v34 = v32;
LABEL_40:
  mPanel = (UnityEngine_Transform_o *)this->fields.mPanel;
  if ( !mPanel )
    goto LABEL_44;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mPanel, 0);
  v40.fields.x = v27;
  v40.fields.y = v34;
  v40.fields.z = v16 + localPosition.fields.z;
  mPanel = (UnityEngine_Transform_o *)SpringPanel__Begin(gameObject, v40, 13.0, 0);
  if ( !mPanel )
    goto LABEL_44;
  HIDWORD(mPanel[1].fields.m_CachedPtr) = 1090519040;
  return 1;
}


void UIScrollView__Scroll(UIScrollView_o *this, float delta, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x20
  const MethodInfo *v6; // x1
  bool mShouldMove; // w20
  char v8; // w0
  float mScroll; // s0
  float v10; // s1
  float v11; // s3
  float v12; // s0

  if ( (byte_4D3513B & 1) == 0 )
  {
    sub_1C93AD4(&NGUITools_TypeInfo);
    byte_4D3513B = 1;
  }
  if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0) )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    if ( NGUITools__GetActive_50071416(gameObject, 0) && this->fields.scrollWheelFactor != 0.0 )
    {
      UIScrollView__DisableSpring(this, v6);
      mShouldMove = this->fields.mShouldMove;
      v8 = ((__int64 (__fastcall *)(UIScrollView_o *, const MethodInfo *))this->klass->vtable._7_get_shouldMove.methodPtr)(
             this,
             this->klass->vtable._7_get_shouldMove.method);
      mScroll = this->fields.mScroll;
      v10 = -1.0;
      if ( mScroll < 0.0 )
        v11 = -1.0;
      else
        v11 = 1.0;
      if ( delta >= 0.0 )
        v10 = 1.0;
      if ( v11 != v10 )
        mScroll = 0.0;
      v12 = mScroll + (float)(this->fields.scrollWheelFactor * delta);
      this->fields.mShouldMove = mShouldMove | v8 & 1;
      this->fields.mScroll = v12;
    }
  }
}


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
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  __int64 v19; // x1
  float v20; // s12
  float v21; // s13
  float v22; // s14
  float v23; // s15
  UIPanel_o *mTrans; // x0
  struct UIPanel_o *v25; // x8
  float v26; // s9
  float v27; // s8
  float v28; // s0
  float v29; // s3
  float v30; // s2
  float v31; // s1
  float v32; // s4
  float v33; // s5
  float v34; // s6
  float v35; // s3
  float v36; // s4
  float v37; // s2
  float v38; // s3
  float v39; // s10
  float v40; // s11
  int32_t v41; // w8
  int32_t movement; // w8
  __int64 v43; // [xsp+8h] [xbp-88h] BYREF
  float v44; // [xsp+14h] [xbp-7Ch]
  float v45; // [xsp+18h] [xbp-78h]
  UnityEngine_Vector3_o localPosition; // 0:kr10_12.12
  UnityEngine_Vector4_o finalClipRegion; // 0:kr00_16.16
  UnityEngine_Vector2_o v48; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o v49; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4D35134 & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_Component_GetComponent_UIPanel___);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D35134 = 1;
  }
  p_mPanel = &this->fields.mPanel;
  mPanel = (UnityEngine_Object_o *)this->fields.mPanel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(mPanel, 0, 0) )
  {
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)this,
                         (const MethodInfo_319B20C *)Method_UnityEngine_Component_GetComponent_UIPanel___);
    this->fields.mPanel = (struct UIPanel_o *)Component_object;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&this->fields.mPanel,
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
    &v43,
    this,
    this->klass->vtable._4_get_bounds.method);
  v20 = *(float *)&v43 - v44;
  v21 = *(float *)&v43 + v44;
  if ( (float)(*(float *)&v43 - v44) != (float)(*(float *)&v43 + v44) )
  {
    v22 = *((float *)&v43 + 1) - v45;
    v23 = *((float *)&v43 + 1) + v45;
    if ( (float)(*((float *)&v43 + 1) - v45) != (float)(*((float *)&v43 + 1) + v45) )
    {
      mTrans = *p_mPanel;
      if ( !*p_mPanel )
        goto LABEL_44;
      finalClipRegion = UIPanel__get_finalClipRegion(mTrans, 0);
      v25 = *p_mPanel;
      if ( !*p_mPanel )
        goto LABEL_44;
      v26 = finalClipRegion.fields.x;
      v27 = finalClipRegion.fields.y;
      v28 = v20 + (float)(finalClipRegion.fields.z * 0.5);
      v29 = v21 - (float)(finalClipRegion.fields.z * 0.5);
      v30 = v22 + (float)(finalClipRegion.fields.w * 0.5);
      v31 = v23 - (float)(finalClipRegion.fields.w * 0.5);
      if ( v25->fields.mClipping == 3 )
      {
        v32 = v25->fields.mClipSoftness.fields.x;
        v33 = v25->fields.mClipSoftness.fields.y;
        v28 = v28 - v32;
        v29 = v29 + v32;
        v30 = v30 - v33;
        v31 = v31 + v33;
      }
      v34 = fminf(x, 1.0);
      v35 = v29 - v28;
      v36 = fminf(y, 1.0);
      if ( x < 0.0 )
        v34 = 0.0;
      v37 = v30 - v31;
      v38 = v34 * v35;
      if ( y < 0.0 )
        v36 = 0.0;
      v39 = v28 + v38;
      v40 = v31 + (float)(v36 * v37);
      if ( updateScrollbars )
      {
LABEL_30:
        movement = this->fields.movement;
        if ( movement && movement != 2 )
        {
          if ( movement == 3 )
          {
            if ( this->fields.customMovement.fields.x == 0.0 )
              goto LABEL_38;
          }
          else
          {
            v39 = finalClipRegion.fields.x;
          }
        }
        if ( (unsigned int)(movement - 1) < 2 )
        {
LABEL_39:
          v27 = v40;
LABEL_40:
          mTrans = *p_mPanel;
          if ( *p_mPanel )
          {
            v48.fields.x = v39 - mTrans->fields.mClipRange.fields.x;
            v48.fields.y = v27 - mTrans->fields.mClipRange.fields.y;
            UIPanel__set_clipOffset(mTrans, v48, 0);
            if ( updateScrollbars )
              ((void (__fastcall *)(UIScrollView_o *, bool, const MethodInfo *))this->klass->vtable._8_UpdateScrollbars.methodPtr)(
                this,
                this->fields.mDragID == -10,
                this->klass->vtable._8_UpdateScrollbars.method);
            return;
          }
LABEL_44:
          sub_1C93D2C(mTrans, v19);
        }
        v26 = v39;
        if ( movement != 3 )
          goto LABEL_40;
LABEL_38:
        v39 = v26;
        if ( this->fields.customMovement.fields.y == 0.0 )
          goto LABEL_40;
        goto LABEL_39;
      }
      mTrans = (UIPanel_o *)this->fields.mTrans;
      if ( !mTrans )
        goto LABEL_44;
      localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)mTrans, 0);
      v49 = localPosition;
      v41 = this->fields.movement;
      if ( v41 && v41 != 2 )
      {
        if ( v41 != 3 )
          goto LABEL_24;
        if ( this->fields.customMovement.fields.x == 0.0 )
          goto LABEL_26;
      }
      v49.fields.x = (float)(finalClipRegion.fields.x - v39) + localPosition.fields.x;
LABEL_24:
      if ( (unsigned int)(v41 - 1) < 2 )
      {
LABEL_27:
        v49.fields.y = (float)(finalClipRegion.fields.y - v40) + localPosition.fields.y;
        goto LABEL_28;
      }
      if ( v41 != 3 )
      {
LABEL_28:
        mTrans = (UIPanel_o *)this->fields.mTrans;
        if ( !mTrans )
          goto LABEL_44;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)mTrans, v49, 0);
        goto LABEL_30;
      }
LABEL_26:
      if ( this->fields.customMovement.fields.y != 0.0 )
        goto LABEL_27;
      goto LABEL_28;
    }
  }
}


void UIScrollView__Start(UIScrollView_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  if ( (byte_4D3512E & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Application_TypeInfo);
    byte_4D3512E = 1;
  }
  this->fields.mStarted = 1;
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
  if ( UnityEngine_Application__get_isPlaying(0) )
    UIScrollView__CheckScrollbars(this, v3);
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
  long double v7; // q0
  UnityEngine_Vector2_o PivotOffset; // kr00_8
  UnityEngine_Object_o *v9; // x20
  long double v10; // q8
  __int64 v11; // x1
  UIProgressBar_o *v12; // x0
  long double v13; // q0
  UnityEngine_Object_o *v14; // x20
  long double v15; // q1
  long double v16; // q0

  if ( (byte_4D35137 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D35137 = 1;
  }
  if ( !this->fields.mIgnoreCallbacks )
  {
    horizontalScrollBar = (UnityEngine_Object_o *)this->fields.horizontalScrollBar;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(horizontalScrollBar, 0, 0) )
      goto LABEL_10;
    verticalScrollBar = (UnityEngine_Object_o *)this->fields.verticalScrollBar;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(verticalScrollBar, 0, 0) )
    {
LABEL_10:
      contentPivot = this->fields.contentPivot;
      this->fields.mIgnoreCallbacks = 1;
      this->fields.mCalculatedBounds = 0;
      PivotOffset = NGUIMath__GetPivotOffset(contentPivot, v4);
      *(float *)&v7 = PivotOffset.fields.x;
      v9 = (UnityEngine_Object_o *)this->fields.horizontalScrollBar;
      v10 = v7;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v9, 0, 0) )
      {
        v12 = this->fields.horizontalScrollBar;
        if ( !v12 )
          goto LABEL_23;
        *(float *)&v13 = UIProgressBar__get_value(v12, 0);
        v10 = v13;
      }
      v14 = (UnityEngine_Object_o *)this->fields.verticalScrollBar;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Inequality(v14, 0, 0) )
      {
        *(float *)&v15 = 1.0 - PivotOffset.fields.y;
        goto LABEL_21;
      }
      v12 = this->fields.verticalScrollBar;
      if ( v12 )
      {
        *(float *)&v16 = UIProgressBar__get_value(v12, 0);
        v15 = v16;
LABEL_21:
        ((void (__fastcall *)(UIScrollView_o *, _QWORD, const MethodInfo *, long double, long double))this->klass->vtable._9_SetDragAmount.methodPtr)(
          this,
          0,
          this->klass->vtable._9_SetDragAmount.method,
          v10,
          v15);
        ((void (__fastcall *)(UIScrollView_o *, __int64, const MethodInfo *))this->klass->vtable._8_UpdateScrollbars.methodPtr)(
          this,
          1,
          this->klass->vtable._8_UpdateScrollbars.method);
        this->fields.mIgnoreCallbacks = 0;
        return;
      }
LABEL_23:
      sub_1C93D2C(v12, v11);
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


void UIScrollView__UpdateScrollbars_49952072(UIScrollView_o *this, bool recalculateBounds, const MethodInfo *method)
{
  UnityEngine_Object_o *mPanel; // x21
  UnityEngine_Object_o *horizontalScrollBar; // x21
  UnityEngine_Object_o *verticalScrollBar; // x21
  UIScrollView_c *klass; // x8
  double v9; // kr20_8
  float v10; // s12
  UnityEngine_Object_o *v11; // x20
  float v12; // s13
  float v13; // s14
  bool v14; // w0
  __int64 v15; // x1
  UIPanel_o *v16; // x0
  double z; // d10
  double v18; // d0
  double v19; // d0
  double v20; // d1
  double v21; // d1
  int v22; // w8
  float v23; // s9
  const MethodInfo *v24; // x3
  double v25; // d0
  double v26; // d0
  float v27; // s1
  __int64 v28; // x8
  float v29; // s0
  float v30; // s1
  struct UIPanel_o *v31; // x8
  UnityEngine_Object_o *v32; // x20
  float v33; // s13
  float v34; // s11
  bool v35; // w0
  double w; // d10
  double v37; // d0
  double v38; // d0
  double v39; // d1
  double v40; // d1
  int v41; // w8
  float v42; // s9
  const MethodInfo *v43; // x3
  double v44; // d0
  double v45; // d0
  float v46; // s1
  __int64 v47; // x8
  float v48; // s0
  float v49; // s1
  struct UIPanel_o *v50; // x8
  double iptr; // [xsp+8h] [xbp-78h] BYREF
  float v52; // [xsp+14h] [xbp-6Ch]
  float v53; // [xsp+18h] [xbp-68h]
  UnityEngine_Vector4_o finalClipRegion; // 0:kr00_16.16
  UnityEngine_Vector4_o v55; // 0:kr10_16.16

  if ( (byte_4D35132 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D35132 = 1;
  }
  mPanel = (UnityEngine_Object_o *)this->fields.mPanel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(mPanel, 0, 0) )
    return;
  horizontalScrollBar = (UnityEngine_Object_o *)this->fields.horizontalScrollBar;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(horizontalScrollBar, 0, 0) )
  {
    verticalScrollBar = (UnityEngine_Object_o *)this->fields.verticalScrollBar;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
  v9 = iptr;
  v10 = v53;
  v11 = (UnityEngine_Object_o *)this->fields.horizontalScrollBar;
  v12 = *(float *)&iptr - v52;
  v13 = *(float *)&iptr + v52;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v14 = UnityEngine_Object__op_Inequality(v11, 0, 0);
  if ( v13 > v12 && v14 )
  {
    v16 = this->fields.mPanel;
    if ( !v16 )
      goto LABEL_87;
    finalClipRegion = UIPanel__get_finalClipRegion(v16, 0);
    if ( !byte_4D2A83C )
    {
      sub_1C93AD4(&System_Math_TypeInfo);
      byte_4D2A83C = 1;
    }
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    z = finalClipRegion.fields.z;
    v18 = modf(finalClipRegion.fields.z, &iptr);
    if ( finalClipRegion.fields.z >= 0.0 )
    {
      if ( v18 != 0.5 )
      {
        v19 = floor(z + 0.5);
        goto LABEL_35;
      }
      v19 = iptr;
      v20 = 1.0;
    }
    else
    {
      if ( v18 != -0.5 )
      {
        v19 = ceil(z + -0.5);
        goto LABEL_35;
      }
      v19 = iptr;
      v20 = -1.0;
    }
    v21 = v19 + v20;
    if ( ((__int64)v19 & 1) != 0 )
      v19 = v21;
LABEL_35:
    v22 = (int)v19;
    if ( v19 == INFINITY )
      v22 = 0x80000000;
    v23 = (float)(int)(v22 & 0xFFFFFFFE) * 0.5;
    v25 = modf(v23, &iptr);
    if ( v23 >= 0.0 )
    {
      if ( v25 == 0.5 )
      {
        v26 = iptr;
        v27 = 1.0;
LABEL_42:
        v28 = (__int64)v26;
        v29 = v26;
        v30 = v29 + v27;
        if ( (v28 & 1) != 0 )
          v29 = v30;
        goto LABEL_47;
      }
      v29 = floorf(v23 + 0.5);
    }
    else
    {
      if ( v25 == -0.5 )
      {
        v26 = iptr;
        v27 = -1.0;
        goto LABEL_42;
      }
      v29 = ceilf(v23 + -0.5);
    }
LABEL_47:
    v31 = this->fields.mPanel;
    if ( !v31 )
      goto LABEL_87;
    if ( v31->fields.mClipping == 3 )
      v29 = v29 - v31->fields.mClipSoftness.fields.x;
    UIScrollView__UpdateScrollbars_49953320(
      this,
      this->fields.horizontalScrollBar,
      (float)(finalClipRegion.fields.x - v29) - v12,
      v13 - (float)(finalClipRegion.fields.x + v29),
      v13 - v12,
      v29 + v29,
      0,
      v24);
  }
  v32 = (UnityEngine_Object_o *)this->fields.verticalScrollBar;
  v33 = *((float *)&v9 + 1) - v10;
  v34 = *((float *)&v9 + 1) + v10;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v35 = UnityEngine_Object__op_Inequality(v32, 0, 0);
  if ( v34 > v33 && v35 )
  {
    v16 = this->fields.mPanel;
    if ( !v16 )
      goto LABEL_87;
    v55 = UIPanel__get_finalClipRegion(v16, 0);
    if ( !byte_4D2A83C )
    {
      sub_1C93AD4(&System_Math_TypeInfo);
      byte_4D2A83C = 1;
    }
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    w = v55.fields.w;
    v37 = modf(v55.fields.w, &iptr);
    if ( v55.fields.w >= 0.0 )
    {
      if ( v37 != 0.5 )
      {
        v38 = floor(w + 0.5);
        goto LABEL_70;
      }
      v38 = iptr;
      v39 = 1.0;
    }
    else
    {
      if ( v37 != -0.5 )
      {
        v38 = ceil(w + -0.5);
        goto LABEL_70;
      }
      v38 = iptr;
      v39 = -1.0;
    }
    v40 = v38 + v39;
    if ( ((__int64)v38 & 1) != 0 )
      v38 = v40;
LABEL_70:
    v41 = (int)v38;
    if ( v38 == INFINITY )
      v41 = 0x80000000;
    v42 = (float)(int)(v41 & 0xFFFFFFFE) * 0.5;
    v44 = modf(v42, &iptr);
    if ( v42 >= 0.0 )
    {
      if ( v44 != 0.5 )
      {
        v48 = floorf(v42 + 0.5);
        goto LABEL_82;
      }
      v45 = iptr;
      v46 = 1.0;
    }
    else
    {
      if ( v44 != -0.5 )
      {
        v48 = ceilf(v42 + -0.5);
        goto LABEL_82;
      }
      v45 = iptr;
      v46 = -1.0;
    }
    v47 = (__int64)v45;
    v48 = v45;
    v49 = v48 + v46;
    if ( (v47 & 1) != 0 )
      v48 = v49;
LABEL_82:
    v50 = this->fields.mPanel;
    if ( v50 )
    {
      if ( v50->fields.mClipping == 3 )
        v48 = v48 - v50->fields.mClipSoftness.fields.y;
      UIScrollView__UpdateScrollbars_49953320(
        this,
        this->fields.verticalScrollBar,
        (float)(v55.fields.y - v48) - v33,
        v34 - (float)(v55.fields.y + v48),
        v34 - v33,
        v48 + v48,
        1,
        v43);
      return;
    }
LABEL_87:
    sub_1C93D2C(v16, v15);
  }
}


void UIScrollView__UpdateScrollbars_49953320(
        UIScrollView_o *this,
        UIProgressBar_o *slider,
        float contentMin,
        float contentMax,
        float contentSize,
        float viewSize,
        bool inverted,
        const MethodInfo *method)
{
  _BOOL8 v15; // x0
  const MethodInfo *v16; // x1
  float v17; // s0
  float v18; // s2
  float v19; // s4
  float v20; // s5
  float v21; // s1
  float v22; // s9
  float v23; // s0
  float v24; // s1
  float v25; // s3
  float v26; // s4
  bool v27; // nf
  float v28; // s1
  float v29; // s11
  float v30; // s10
  float v31; // s4
  float v32; // s0
  float v33; // s1
  __int64 naturalAligment; // x10

  if ( (byte_4D35133 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&UIScrollBar_TypeInfo);
    byte_4D35133 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v15 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)slider, 0, 0);
  if ( !v15 )
  {
    this->fields.mIgnoreCallbacks = 1;
    if ( viewSize >= contentSize )
    {
      v23 = 1.0;
      v24 = (float)-contentMin / contentSize;
      v25 = (float)-contentMax / contentSize;
      v26 = fminf(v24, 1.0);
      v27 = v24 < 0.0;
      v28 = fminf(v25, 1.0);
      if ( v27 )
        v29 = 0.0;
      else
        v29 = v26;
      if ( v25 < 0.0 )
        v30 = 0.0;
      else
        v30 = v28;
      v22 = v29 + v30;
      if ( inverted )
      {
        v23 = 0.0;
        if ( v22 > 0.001 )
          v23 = 1.0 - (float)(v29 / v22);
      }
      else if ( v22 > 0.001 )
      {
        v23 = v29 / v22;
      }
      if ( !slider )
        goto LABEL_49;
      UIProgressBar__set_value(slider, v23, 0);
      if ( contentSize > 0.0 )
      {
        v31 = fminf(v29 / contentSize, 1.0);
        v32 = fminf(v30 / contentSize, 1.0);
        if ( (float)(v29 / contentSize) < 0.0 )
          v33 = 0.0;
        else
          v33 = v31;
        if ( (float)(v30 / contentSize) < 0.0 )
          v32 = 0.0;
        v22 = v33 + v32;
      }
    }
    else
    {
      v17 = 1.0;
      v18 = 0.0;
      v19 = fminf(contentMin / contentSize, 1.0);
      v20 = fminf(contentMax / contentSize, 1.0);
      if ( (float)(contentMin / contentSize) < 0.0 )
        v21 = 0.0;
      else
        v21 = v19;
      if ( (float)(contentMax / contentSize) >= 0.0 )
        v18 = v20;
      v22 = v21 + v18;
      if ( inverted )
      {
        v17 = 0.0;
        if ( v22 > 0.001 )
          v17 = 1.0 - (float)(v21 / v22);
      }
      else if ( v22 > 0.001 )
      {
        v17 = v21 / v22;
      }
      if ( !slider )
        goto LABEL_49;
      UIProgressBar__set_value(slider, v17, 0);
    }
    naturalAligment = UIScrollBar_TypeInfo->_2.naturalAligment;
    if ( slider->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
    {
      if ( (UIScrollBar_c *)slider->klass->_2.typeHierarchy[naturalAligment - 1] != UIScrollBar_TypeInfo )
        slider = 0;
    }
    else
    {
      slider = 0;
    }
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)slider, 0, 0);
    if ( !v15 )
      goto LABEL_47;
    if ( slider )
    {
      UIScrollBar__set_barSize((UIScrollBar_o *)slider, 1.0 - v22, v16);
LABEL_47:
      this->fields.mIgnoreCallbacks = 0;
      return;
    }
LABEL_49:
    sub_1C93D2C(v15, v16);
  }
}


UnityEngine_Bounds_o *UIScrollView__get_bounds(
        UnityEngine_Bounds_o *__return_ptr retstr,
        UIScrollView_o *this,
        const MethodInfo *method)
{
  UIScrollView_o *v3; // x19
  UnityEngine_Transform_o *transform; // x0
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  const MethodInfo *v12; // x4
  __int128 v13; // q0
  __int128 v14; // q0
  UnityEngine_Bounds_o v16; // [xsp+8h] [xbp-38h] BYREF

  v3 = this;
  if ( !this->fields.mCalculatedBounds )
  {
    this->fields.mCalculatedBounds = 1;
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    v3->fields.mTrans = transform;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&v3->fields.mTrans, (int32_t)transform, v6, v7, v8, v9, v10, v11);
    this = (UIScrollView_o *)NGUIMath__CalculateRelativeWidgetBounds_50022900(
                               &v16,
                               v3->fields.mTrans,
                               v3->fields.mTrans,
                               0,
                               1,
                               v12);
    v13 = *(_OWORD *)&v16.fields.m_Center.fields.x;
    *(_QWORD *)&v3->fields.mBounds.fields.m_Extents.fields.y = *(_QWORD *)&v16.fields.m_Extents.fields.y;
    *(_OWORD *)&v3->fields.mBounds.fields.m_Center.fields.x = v13;
  }
  v14 = *(_OWORD *)&v3->fields.mBounds.fields.m_Center.fields.x;
  *(_QWORD *)&retstr->fields.m_Extents.fields.y = *(_QWORD *)&v3->fields.mBounds.fields.m_Extents.fields.y;
  *(_OWORD *)&retstr->fields.m_Center.fields.x = v14;
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
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  result.fields.x = this->fields.mMomentum.fields.x;
  result.fields.y = this->fields.mMomentum.fields.y;
  result.fields.z = this->fields.mMomentum.fields.z;
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
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  __int64 v13; // kr10_8
  float v14; // s13
  float v15; // s15
  float width; // s11
  float height; // s0
  int32_t movement; // w8
  bool result; // w0
  __int64 v20; // [xsp+8h] [xbp-78h] BYREF
  float v21; // [xsp+14h] [xbp-6Ch]
  float v22; // [xsp+18h] [xbp-68h]
  UnityEngine_Vector4_o finalClipRegion; // 0:kr00_16.16

  if ( (byte_4D3512B & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_Component_GetComponent_UIPanel___);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D3512B = 1;
  }
  if ( !this->fields.disableDragIfFits )
    return 1;
  p_mPanel = &this->fields.mPanel;
  mPanel = (UnityEngine_Object_o *)this->fields.mPanel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(mPanel, 0, 0) )
  {
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)this,
                         (const MethodInfo_319B20C *)Method_UnityEngine_Component_GetComponent_UIPanel___);
    this->fields.mPanel = (struct UIPanel_o *)Component_object;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&this->fields.mPanel,
      (int32_t)Component_object,
      v7,
      v8,
      v9,
      v10,
      v11,
      v12);
  }
  if ( !*p_mPanel )
    sub_1C93D2C(0, v5);
  finalClipRegion = UIPanel__get_finalClipRegion(*p_mPanel, 0);
  ((void (__fastcall *)(__int64 *__return_ptr, UIScrollView_o *, const MethodInfo *))this->klass->vtable._4_get_bounds.methodPtr)(
    &v20,
    this,
    this->klass->vtable._4_get_bounds.method);
  v13 = v20;
  v15 = v21;
  v14 = v22;
  if ( finalClipRegion.fields.z == 0.0 )
    width = (float)UnityEngine_Screen__get_width(0);
  else
    width = finalClipRegion.fields.z * 0.5;
  if ( finalClipRegion.fields.w == 0.0 )
    height = (float)UnityEngine_Screen__get_height(0);
  else
    height = finalClipRegion.fields.w * 0.5;
  movement = this->fields.movement;
  switch ( movement )
  {
    case 0:
    case 2:
      goto LABEL_17;
    case 1:
      goto LABEL_22;
    case 3:
      if ( this->fields.customMovement.fields.x == 0.0 )
        goto LABEL_21;
LABEL_17:
      if ( (float)(*(float *)&v13 - v15) < (float)(finalClipRegion.fields.x - width)
        || (float)(*(float *)&v13 + v15) > (float)(finalClipRegion.fields.x + width) )
      {
        return 1;
      }
      if ( (unsigned int)(movement - 1) < 2 )
        goto LABEL_22;
      if ( movement != 3 )
        goto LABEL_24;
LABEL_21:
      if ( this->fields.customMovement.fields.y == 0.0 )
        goto LABEL_24;
LABEL_22:
      if ( (float)(*((float *)&v13 + 1) - v14) < (float)(finalClipRegion.fields.y - height)
        || (float)(*((float *)&v13 + 1) + v14) > (float)(finalClipRegion.fields.y + height) )
      {
        return 1;
      }
LABEL_24:
      result = 0;
      break;
    default:
      goto LABEL_24;
  }
  return result;
}


bool UIScrollView__get_shouldMoveHorizontally(UIScrollView_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct UIPanel_o *mPanel; // x0
  float v5; // s9
  float width; // s8
  float v7; // s9
  double v8; // d8
  double v9; // d0
  double v10; // d0
  double v11; // d1
  double v12; // d1
  double iptr; // [xsp+8h] [xbp-38h] BYREF
  float v15; // [xsp+14h] [xbp-2Ch]

  ((void (__fastcall *)(double *__return_ptr))this->klass->vtable._4_get_bounds.methodPtr)(&iptr);
  mPanel = this->fields.mPanel;
  if ( !mPanel )
    sub_1C93D2C(0, v3);
  v5 = v15 + v15;
  if ( mPanel->fields.mClipping == 3 )
    v5 = v5 + (float)(mPanel->fields.mClipSoftness.fields.x + mPanel->fields.mClipSoftness.fields.x);
  width = UIPanel__get_width(mPanel, 0);
  if ( !byte_4D2A83C )
  {
    sub_1C93AD4(&System_Math_TypeInfo);
    byte_4D2A83C = 1;
  }
  v7 = v5 - width;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v8 = v7;
  v9 = modf(v7, &iptr);
  if ( v7 >= 0.0 )
  {
    if ( v9 != 0.5 )
    {
      v10 = floor(v8 + 0.5);
      return v10 != INFINITY && (int)v10 > 0;
    }
    v10 = iptr;
    v11 = 1.0;
  }
  else
  {
    if ( v9 != -0.5 )
    {
      v10 = ceil(v8 + -0.5);
      return v10 != INFINITY && (int)v10 > 0;
    }
    v10 = iptr;
    v11 = -1.0;
  }
  v12 = v10 + v11;
  if ( ((__int64)v10 & 1) != 0 )
    v10 = v12;
  return v10 != INFINITY && (int)v10 > 0;
}


bool UIScrollView__get_shouldMoveVertically(UIScrollView_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct UIPanel_o *mPanel; // x0
  float v5; // s9
  float height; // s8
  float v7; // s9
  double v8; // d8
  double v9; // d0
  double v10; // d0
  double v11; // d1
  double v12; // d1
  double iptr[2]; // [xsp+8h] [xbp-38h] BYREF
  float v15; // [xsp+18h] [xbp-28h]

  ((void (__fastcall *)(double *__return_ptr))this->klass->vtable._4_get_bounds.methodPtr)(iptr);
  mPanel = this->fields.mPanel;
  if ( !mPanel )
    sub_1C93D2C(0, v3);
  v5 = v15 + v15;
  if ( mPanel->fields.mClipping == 3 )
    v5 = v5 + (float)(mPanel->fields.mClipSoftness.fields.y + mPanel->fields.mClipSoftness.fields.y);
  height = UIPanel__get_height(mPanel, 0);
  if ( !byte_4D2A83C )
  {
    sub_1C93AD4(&System_Math_TypeInfo);
    byte_4D2A83C = 1;
  }
  v7 = v5 - height;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v8 = v7;
  v9 = modf(v7, iptr);
  if ( v7 >= 0.0 )
  {
    if ( v9 != 0.5 )
    {
      v10 = floor(v8 + 0.5);
      return v10 != INFINITY && (int)v10 > 0;
    }
    v10 = iptr[0];
    v11 = 1.0;
  }
  else
  {
    if ( v9 != -0.5 )
    {
      v10 = ceil(v8 + -0.5);
      return v10 != INFINITY && (int)v10 > 0;
    }
    v10 = iptr[0];
    v11 = -1.0;
  }
  v12 = v10 + v11;
  if ( ((__int64)v10 & 1) != 0 )
    v10 = v12;
  return v10 != INFINITY && (int)v10 > 0;
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
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_1C93A78(
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
  if ( (sub_1C93B94(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C93D48(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C93BFC(v14, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1ACFDE8;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1ACFDA8;
}


System_IAsyncResult_o *UIScrollView_OnDragNotification__BeginInvoke(
        UIScrollView_OnDragNotification_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0;
  return sub_1C93A88(this, &v5, callback, object);
}


void UIScrollView_OnDragNotification__EndInvoke(
        UIScrollView_OnDragNotification_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C93A8C(result, 0, method);
}


void UIScrollView_OnDragNotification__Invoke(UIScrollView_OnDragNotification_o *this, const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, intptr_t))this->fields.invoke_impl)(this->fields.method_code, this->fields.method);
}