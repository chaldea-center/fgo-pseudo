void UIScrollView___cctor(const MethodInfo *method)
{
  BetterList_T__o *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C3C0C1 & 1) == 0 )
  {
    sub_1C32C20(&Method_BetterList_UIScrollView___ctor__);
    sub_1C32C20(&BetterList_UIScrollView__TypeInfo);
    sub_1C32C20(&UIScrollView_TypeInfo);
    byte_4C3C0C1 = 1;
  }
  v1 = (BetterList_T__o *)sub_1C32E6C(BetterList_UIScrollView__TypeInfo);
  BetterList_object____ctor(v1, (const MethodInfo_330FEAC *)Method_BetterList_UIScrollView___ctor__);
  UIScrollView_TypeInfo->static_fields->list = (struct BetterList_UIScrollView__o *)v1;
  sub_1C32BC4((CGThumbnailListItem_o *)UIScrollView_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
  if ( !byte_4C312CA )
  {
    sub_1C32C20(&UnityEngine_Vector2_TypeInfo);
    byte_4C312CA = 1;
  }
  this->fields.relativePositionOnReset = UnityEngine_Vector2_TypeInfo->static_fields->zeroVector;
  if ( byte_4C313D1 )
  {
    v3 = 0;
  }
  else
  {
    sub_1C32C20(&UnityEngine_Vector3_TypeInfo);
    byte_4C313D1 = 1;
    v3 = byte_4C312CA == 0;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  v5 = *(_QWORD *)&static_fields->zeroVector.fields.x;
  z = static_fields->zeroVector.fields.z;
  this->fields.mDragID = -10;
  *(_QWORD *)&this->fields.mMomentum.fields.x = v5;
  this->fields.mMomentum.fields.z = z;
  if ( v3 )
  {
    sub_1C32C20(&UnityEngine_Vector2_TypeInfo);
    byte_4C312CA = 1;
  }
  this->fields.mDragStartOffset = UnityEngine_Vector2_TypeInfo->static_fields->zeroVector;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void UIScrollView__Awake(UIScrollView_o *this, const MethodInfo *method)
{
  struct UnityEngine_Transform_o *transform; // x0
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  Il2CppObject *Component_object; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  struct UIPanel_o *mPanel; // x0
  float x; // s0
  float y; // s1
  int32_t v12; // w8
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float z; // s1
  struct UnityEngine_Vector2_o relativePositionOnReset; // d8
  struct UnityEngine_Vector2_StaticFields *v16; // x8
  float32x2_t v17; // d0
  float v18; // s1
  float v19; // s0
  int32_t v20; // w9

  if ( (byte_4C3C0B0 & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_Component_GetComponent_UIPanel___);
    byte_4C3C0B0 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  this->fields.mTrans = transform;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.mTrans, (int32_t)transform, v4, v5);
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
  this->fields.mPanel = (struct UIPanel_o *)Component_object;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.mPanel, (int32_t)Component_object, v7, v8);
  mPanel = this->fields.mPanel;
  if ( !mPanel )
    sub_1C32E7C(0);
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
          v12 = 1;
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
          v12 = 2;
        }
        this->fields.movement = v12;
      }
LABEL_19:
      if ( !byte_4C313D1 )
      {
        sub_1C32C20(&UnityEngine_Vector3_TypeInfo);
        byte_4C313D1 = 1;
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
    if ( !byte_4C312CA )
    {
      sub_1C32C20(&UnityEngine_Vector2_TypeInfo);
      byte_4C312CA = 1;
    }
    v16 = UnityEngine_Vector2_TypeInfo->static_fields;
    v17.n64_u64[0] = vsub_f32((float32x2_t)relativePositionOnReset, (float32x2_t)v16->zeroVector).n64_u64[0];
    if ( vaddv_f32(vmul_f32(v17, v17)) >= 1.0e-10 )
    {
      v18 = this->fields.relativePositionOnReset.fields.x;
      v19 = 1.0 - this->fields.relativePositionOnReset.fields.y;
      if ( v18 == 0.0 )
      {
        if ( v19 == 0.0 )
        {
          v20 = 6;
        }
        else if ( v19 == 1.0 )
        {
          v20 = 0;
        }
        else
        {
          v20 = 3;
        }
      }
      else if ( v18 == 1.0 )
      {
        if ( v19 == 0.0 )
        {
          v20 = 8;
        }
        else if ( v19 == 1.0 )
        {
          v20 = 2;
        }
        else
        {
          v20 = 5;
        }
      }
      else if ( v19 == 0.0 )
      {
        v20 = 7;
      }
      else if ( v19 == 1.0 )
      {
        v20 = 1;
      }
      else
      {
        v20 = 4;
      }
      this->fields.contentPivot = v20;
      this->fields.relativePositionOnReset = v16->zeroVector;
    }
  }
}


void UIScrollView__CheckScrollbars(UIScrollView_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *horizontalScrollBar; // x20
  __int64 v4; // x0
  struct UIProgressBar_o *v5; // x8
  System_Collections_Generic_List_EventDelegate__o *onChange; // x20
  EventDelegate_Callback_o *v7; // x21
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x2
  UIProgressBar_o *v10; // x20
  float v11; // s0
  UnityEngine_Object_o *verticalScrollBar; // x20
  struct UIProgressBar_o *v13; // x8
  System_Collections_Generic_List_EventDelegate__o *v14; // x20
  EventDelegate_Callback_o *v15; // x21
  const MethodInfo *v16; // x3
  const MethodInfo *v17; // x2
  UIProgressBar_o *v18; // x20
  float v19; // s0

  if ( (byte_4C3C0B3 & 1) == 0 )
  {
    sub_1C32C20(&EventDelegate_Callback_TypeInfo);
    sub_1C32C20(&EventDelegate_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&Method_UIScrollView_OnScrollBar__);
    byte_4C3C0B3 = 1;
  }
  horizontalScrollBar = (UnityEngine_Object_o *)this->fields.horizontalScrollBar;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality(horizontalScrollBar, 0, 0);
  if ( (v4 & 1) != 0 )
  {
    v5 = this->fields.horizontalScrollBar;
    if ( !v5 )
      goto LABEL_26;
    onChange = v5->fields.onChange;
    v7 = (EventDelegate_Callback_o *)sub_1C32E6C(EventDelegate_Callback_TypeInfo);
    EventDelegate_Callback___ctor(v7, (Il2CppObject *)this, Method_UIScrollView_OnScrollBar__, v8);
    if ( !EventDelegate_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
    v4 = (__int64)EventDelegate__Add(onChange, v7, v9);
    v10 = this->fields.horizontalScrollBar;
    if ( !this->fields.showScrollBars
      || (v4 = ((__int64 (__fastcall *)(UIScrollView_o *, const MethodInfo *))this->klass->vtable._5_get_shouldMoveHorizontally.methodPtr)(
                 this,
                 this->klass->vtable._5_get_shouldMoveHorizontally.method),
          v11 = 0.0,
          (v4 & 1) != 0) )
    {
      v11 = 1.0;
    }
    if ( !v10 )
      goto LABEL_26;
    UIProgressBar__set_alpha(v10, v11, 0);
  }
  verticalScrollBar = (UnityEngine_Object_o *)this->fields.verticalScrollBar;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality(verticalScrollBar, 0, 0);
  if ( (v4 & 1) != 0 )
  {
    v13 = this->fields.verticalScrollBar;
    if ( v13 )
    {
      v14 = v13->fields.onChange;
      v15 = (EventDelegate_Callback_o *)sub_1C32E6C(EventDelegate_Callback_TypeInfo);
      EventDelegate_Callback___ctor(v15, (Il2CppObject *)this, Method_UIScrollView_OnScrollBar__, v16);
      if ( !EventDelegate_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
      v4 = (__int64)EventDelegate__Add(v14, v15, v17);
      v18 = this->fields.verticalScrollBar;
      if ( !this->fields.showScrollBars
        || (v4 = ((__int64 (__fastcall *)(UIScrollView_o *, const MethodInfo *))this->klass->vtable._6_get_shouldMoveVertically.methodPtr)(
                   this,
                   this->klass->vtable._6_get_shouldMoveVertically.method),
            v19 = 0.0,
            (v4 & 1) != 0) )
      {
        v19 = 1.0;
      }
      if ( v18 )
      {
        UIProgressBar__set_alpha(v18, v19, 0);
        return;
      }
    }
LABEL_26:
    sub_1C32E7C(v4);
  }
}


void UIScrollView__DisableSpring(UIScrollView_o *this, const MethodInfo *method)
{
  Il2CppObject *Component_object; // x19
  _BOOL8 v4; // x0

  if ( (byte_4C3C0B5 & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_Component_GetComponent_SpringPanel___);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3C0B5 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_SpringPanel___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
  if ( v4 )
  {
    if ( !Component_object )
      sub_1C32E7C(v4);
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_object, 0, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void UIScrollView__Drag(UIScrollView_o *this, const MethodInfo *method)
{
  UICamera_c *v3; // x0
  UnityEngine_GameObject_o *gameObject; // x20
  _QWORD *p_image; // x0
  struct UICamera_MouseOrTouch_o *currentTouch; // x8
  struct UnityEngine_Vector2_o totalDelta; // x9
  struct UIScrollView_OnDragNotification_o *onDragStarted; // x8
  _BOOL4 smoothDragStart; // w20
  __int64 v10; // x9
  __int64 v11; // x8
  float v12; // s0 OVERLAPPED
  float v13; // s1
  int v14; // s2
  float z; // s8
  float y; // s14
  float x; // s15
  float m_Distance; // s9
  float v19; // s13
  __int64 v20; // kr00_8
  float v21; // s11
  float v22; // s0
  struct UnityEngine_Mathf_StaticFields *static_fields; // x8
  float v24; // s0
  const MethodInfo *v25; // x1
  float v26; // s4
  float32x2_t v27; // d5
  int8x8_t v28; // d0
  float v29; // s8
  int32_t movement; // w8
  float v31; // s3
  float v32; // s2
  float v33; // s2
  unsigned __int64 v34; // d0
  float v35; // s1
  struct UnityEngine_Vector3_StaticFields *v36; // x8
  _BOOL4 iOSDragEmulation; // w8
  struct UIPanel_o *mPanel; // x20
  float32x2_t v39; // d9
  float32x2_t v40; // d10
  double v41; // d2
  double v42; // d0
  float v43; // s9
  float v44; // s1
  float v45; // s10
  float v46; // s2
  float v47; // s11
  const MethodInfo *v48; // x4
  float v49; // s1
  unsigned __int32 v50; // s1
  UIScrollView_o *v51; // x0
  unsigned __int32 v52; // s0 OVERLAPPED
  float v53; // s2
  struct UIPanel_o *v54; // x8
  int32_t v55; // w8
  char v56; // w2
  bool v57; // w3
  unsigned __int64 v58; // [xsp+0h] [xbp-D0h]
  float32x2_t v59; // [xsp+0h] [xbp-D0h]
  UnityEngine_Ray_o v60[2]; // [xsp+18h] [xbp-B8h] BYREF
  UnityEngine_Ray_o v61; // [xsp+50h] [xbp-80h] BYREF
  UnityEngine_Vector3_o Point; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v63; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v64; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v65; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v66; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C3C0BE & 1) == 0 )
  {
    sub_1C32C20(&NGUITools_TypeInfo);
    sub_1C32C20(&UICamera_TypeInfo);
    byte_4C3C0BE = 1;
  }
  v3 = UICamera_TypeInfo;
  memset(&v61, 0, sizeof(v61));
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
  if ( !NGUITools__GetActive_49301984(gameObject, 0) || !this->fields.mShouldMove )
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
  v10 = p_image[23];
  v11 = *(_QWORD *)(v10 + 160);
  if ( !v11 )
LABEL_79:
    sub_1C32E7C(p_image);
  p_image = *(_QWORD **)(v10 + 136);
  v12 = *(float *)(v11 + 16);
  v13 = *(float *)(v11 + 20);
  if ( smoothDragStart )
  {
    if ( !p_image )
      goto LABEL_79;
    v13 = v13 - this->fields.mDragStartOffset.fields.y;
    v12 = v12 - this->fields.mDragStartOffset.fields.x;
  }
  else if ( !p_image )
  {
    goto LABEL_79;
  }
  v14 = 0;
  UnityEngine_Camera__ScreenPointToRay_71030396(v60, (UnityEngine_Camera_o *)p_image, *(UnityEngine_Vector3_o *)&v12, 0);
  v60[1] = v60[0];
  v61 = v60[0];
  z = v60[0].fields.m_Origin.fields.z;
  x = this->fields.mPlane.fields.m_Normal.fields.x;
  y = this->fields.mPlane.fields.m_Normal.fields.y;
  v19 = this->fields.mPlane.fields.m_Normal.fields.z;
  m_Distance = this->fields.mPlane.fields.m_Distance;
  v20 = *(_QWORD *)&v60[0].fields.m_Origin.fields.x;
  v21 = (float)(v60[0].fields.m_Direction.fields.z * v19)
      + (float)((float)(v60[0].fields.m_Direction.fields.x * x) + (float)(v60[0].fields.m_Direction.fields.y * y));
  if ( !byte_4C313D5 )
  {
    sub_1C32C20(&UnityEngine_Mathf_TypeInfo);
    byte_4C313D5 = 1;
  }
  v22 = fmaxf(fabsf(v21), 0.0) * 0.000001;
  static_fields = UnityEngine_Mathf_TypeInfo->static_fields;
  if ( v22 <= (float)(static_fields->Epsilon * 8.0) )
    v22 = static_fields->Epsilon * 8.0;
  if ( vabds_f32(0.0, v21) < v22 )
    return;
  v24 = (float)((float)-(float)((float)(z * v19)
                              + (float)((float)(*(float *)&v20 * x) + (float)(*((float *)&v20 + 1) * y)))
              - m_Distance)
      / v21;
  if ( v24 <= 0.0 )
    return;
  Point = UnityEngine_Ray__GetPoint(&v61, v24, 0);
  v26 = this->fields.mLastPos.fields.z;
  v27.n64_u64[0] = vsub_f32(*(float32x2_t *)&Point.fields.x, *(float32x2_t *)&this->fields.mLastPos.fields.x).n64_u64[0];
  this->fields.mLastPos = Point;
  v28.n64_u64[0] = vceqz_f32(v27).n64_u64[0];
  v29 = Point.fields.z - v26;
  if ( (vand_s8(v28, vdup_lane_s32(v28, 1)).n64_u8[0] & 1) == 0 || v29 != 0.0 )
  {
    p_image = &this->fields.mTrans->klass;
    if ( !p_image )
      goto LABEL_79;
    LODWORD(v63.fields.y) = v27.n64_u32[1];
    LODWORD(v63.fields.x) = v27.n64_u32[0];
    v63.fields.z = Point.fields.z - v26;
    v64 = UnityEngine_Transform__InverseTransformDirection((UnityEngine_Transform_o *)p_image, v63, 0);
    movement = this->fields.movement;
    v31 = v64.fields.z;
    v32 = 0.0;
    if ( movement )
    {
      if ( movement == 1 )
      {
        v32 = 0.0;
        v64.fields.x = 0.0;
      }
      else if ( movement != 2 )
      {
        v64.fields.x = v64.fields.x * this->fields.customMovement.fields.x;
        v64.fields.y = v64.fields.y * this->fields.customMovement.fields.y;
        v32 = v31 * 0.0;
      }
    }
    else
    {
      v64.fields.y = 0.0;
    }
    p_image = &this->fields.mTrans->klass;
    if ( !p_image )
      goto LABEL_79;
    v65 = UnityEngine_Transform__TransformDirection((UnityEngine_Transform_o *)p_image, v64, 0);
    v27.n64_u64[0] = *(unsigned __int64 *)&v65.fields.x;
    v29 = v65.fields.z;
  }
  if ( this->fields.dragEffect )
  {
    v33 = this->fields.momentumAmount * 0.01;
    v34 = vadd_f32(
            *(float32x2_t *)&this->fields.mMomentum.fields.x,
            vmul_f32(
              vsub_f32(
                vadd_f32(*(float32x2_t *)&this->fields.mMomentum.fields.x, vmul_n_f32(v27, v33)),
                *(float32x2_t *)&this->fields.mMomentum.fields.x),
              vdup_n_s32(0x3F2B851Fu))).n64_u64[0];
    v35 = this->fields.mMomentum.fields.z
        + (float)((float)((float)(this->fields.mMomentum.fields.z + (float)(v29 * v33)) - this->fields.mMomentum.fields.z)
                * 0.67);
  }
  else
  {
    if ( !byte_4C313D1 )
    {
      v58 = v27.n64_u64[0];
      sub_1C32C20(&UnityEngine_Vector3_TypeInfo);
      v27.n64_u64[0] = v58;
      byte_4C313D1 = 1;
    }
    v36 = UnityEngine_Vector3_TypeInfo->static_fields;
    v34 = *(_QWORD *)&v36->zeroVector.fields.x;
    v35 = v36->zeroVector.fields.z;
  }
  iOSDragEmulation = this->fields.iOSDragEmulation;
  *(_QWORD *)&this->fields.mMomentum.fields.x = v34;
  this->fields.mMomentum.fields.z = v35;
  if ( iOSDragEmulation && this->fields.dragEffect == 2 )
  {
    mPanel = this->fields.mPanel;
    v59.n64_u64[0] = v27.n64_u64[0];
    ((void (__fastcall *)(UnityEngine_Ray_o *__return_ptr, UIScrollView_o *, const MethodInfo *))this->klass->vtable._4_get_bounds.methodPtr)(
      v60,
      this,
      this->klass->vtable._4_get_bounds.method);
    v39.n64_u64[0] = *(unsigned __int64 *)&v60[0].fields.m_Origin.fields.x;
    v40.n64_u64[0] = *(unsigned __int64 *)&v60[0].fields.m_Direction.fields.x;
    p_image = ((_QWORD *(__fastcall *)(UnityEngine_Ray_o *__return_ptr, UIScrollView_o *, const MethodInfo *))this->klass->vtable._4_get_bounds.methodPtr)(
                v60,
                this,
                this->klass->vtable._4_get_bounds.method);
    if ( !mPanel )
      goto LABEL_79;
    v41 = vadd_f32(
            *(float32x2_t *)&v60[0].fields.m_Origin.fields.x,
            *(float32x2_t *)&v60[0].fields.m_Direction.fields.x).n64_f64[0];
    v42 = vsub_f32(v39, v40).n64_f64[0];
    LODWORD(v43) = COERCE_UNSIGNED_INT128(
                     ((long double (__fastcall *)(struct UIPanel_o *, const MethodInfo *, double, float, double, float))mPanel->klass->vtable._22_CalculateConstrainOffset.methodPtr)(
                       mPanel,
                       mPanel->klass->vtable._22_CalculateConstrainOffset.method,
                       v42,
                       *((float *)&v42 + 1),
                       v41,
                       *((float *)&v41 + 1)));
    v45 = v44;
    v47 = v46;
    if ( !byte_4C313D3 )
    {
      sub_1C32C20(&System_Math_TypeInfo);
      byte_4C313D3 = 1;
    }
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    if ( sqrtf((float)(v47 * v47) + (float)((float)(v43 * v43) + (float)(v45 * v45))) > 1.0 )
    {
      v66.fields.z = v29 * 0.5;
      v66.fields.x = v59.n64_f32[0] * 0.5;
      v66.fields.y = vmuls_lane_f32(0.5, v59, 1);
      UIScrollView__MoveAbsolute(this, v66, v25);
      v49 = this->fields.mMomentum.fields.z * 0.5;
      *(float32x2_t *)&this->fields.mMomentum.fields.x = vmul_f32(
                                                           *(float32x2_t *)&this->fields.mMomentum.fields.x,
                                                           (float32x2_t)0x3F0000003F000000LL);
      this->fields.mMomentum.fields.z = v49;
      goto LABEL_66;
    }
    v52 = v59.n64_u32[0];
    v51 = this;
    v50 = v59.n64_u32[1];
  }
  else
  {
    v50 = v27.n64_u32[1];
    v51 = this;
    v52 = v27.n64_u32[0];
  }
  v53 = v29;
  UIScrollView__MoveAbsolute(v51, *(UnityEngine_Vector3_o *)&v52, v25);
LABEL_66:
  if ( !this->fields.restrictWithinPanel )
    return;
  v54 = this->fields.mPanel;
  if ( !v54 )
    goto LABEL_79;
  if ( v54->fields.mClipping && this->fields.dragEffect != 2 )
  {
    v55 = this->fields.movement;
    v56 = 1;
    if ( v55 && v55 != 2 )
    {
      if ( v55 == 3 )
      {
        v56 = this->fields.customMovement.fields.x != 0.0;
        v57 = this->fields.customMovement.fields.y != 0.0;
LABEL_77:
        UIScrollView__RestrictWithinBounds_49184984(this, 1, v56, v57, v48);
        return;
      }
      v56 = 0;
    }
    v57 = (unsigned int)(v55 - 1) < 2;
    goto LABEL_77;
  }
}


void UIScrollView__GoToBottom(UIScrollView_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  int32_t contentPivot; // w0
  long double v5; // q0
  long double v6; // q8

  if ( (byte_4C3C0BA & 1) == 0 )
  {
    sub_1C32C20(&NGUITools_TypeInfo);
    byte_4C3C0BA = 1;
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
  struct UIPanel_o *mPanel; // x0
  float v4; // s0
  float v5; // s1
  float v6; // s2
  int32_t movement; // w8
  __int64 v9; // [xsp+8h] [xbp-28h] BYREF
  float v10; // [xsp+14h] [xbp-1Ch]
  float v11; // [xsp+18h] [xbp-18h]

  ((void (__fastcall *)(__int64 *__return_ptr))this->klass->vtable._4_get_bounds.methodPtr)(&v9);
  mPanel = this->fields.mPanel;
  if ( !mPanel )
    sub_1C32E7C(0);
  ((void (__fastcall *)(struct UIPanel_o *, const MethodInfo *, float, float, float, float))mPanel->klass->vtable._22_CalculateConstrainOffset.methodPtr)(
    mPanel,
    mPanel->klass->vtable._22_CalculateConstrainOffset.method,
    *(float *)&v9 - v10,
    *((float *)&v9 + 1) - v11,
    *(float *)&v9 + v10,
    *((float *)&v9 + 1) + v11);
  movement = this->fields.movement;
  if ( !movement || (v4 = 0.0, movement != 1) )
    v5 = 0.0;
  return (float)((float)(v6 * v6) + (float)((float)(v4 * v4) + (float)(v5 * v5))) > 0.1;
}


bool UIScrollView__IsLimitOverPosition2(UIScrollView_o *this, const MethodInfo *method)
{
  struct UIPanel_o *mPanel; // x0
  float v4; // s0
  float v5; // s1
  float v6; // s2
  int32_t movement; // w8
  __int64 v9; // [xsp+8h] [xbp-28h] BYREF
  float v10; // [xsp+14h] [xbp-1Ch]
  float v11; // [xsp+18h] [xbp-18h]

  ((void (__fastcall *)(__int64 *__return_ptr))this->klass->vtable._4_get_bounds.methodPtr)(&v9);
  mPanel = this->fields.mPanel;
  if ( !mPanel )
    sub_1C32E7C(0);
  ((void (__fastcall *)(struct UIPanel_o *, const MethodInfo *, float, float, float, float))mPanel->klass->vtable._22_CalculateConstrainOffset.methodPtr)(
    mPanel,
    mPanel->klass->vtable._22_CalculateConstrainOffset.method,
    *(float *)&v9 - v10,
    *((float *)&v9 + 1) - v11,
    *(float *)&v9 + v10,
    *((float *)&v9 + 1) + v11);
  movement = this->fields.movement;
  if ( !movement || (v4 = 0.0, movement != 1) )
    v5 = 0.0;
  return (float)((float)(v6 * v6) + (float)((float)(v4 * v4) + (float)(v5 * v5))) > 0.2;
}


// local variable allocation has failed, the output may be wrong!
bool UIScrollView__IsLimitOverPosition2_49193688(
        UIScrollView_o *this,
        UnityEngine_Vector3_o offset,
        const MethodInfo *method)
{
  float y; // s8
  float x; // s9
  struct UIPanel_o *mPanel; // x0
  float v7; // s0
  float v8; // s1
  float v9; // s2
  int32_t movement; // w8
  __int64 v12; // [xsp+8h] [xbp-38h] BYREF
  float v13; // [xsp+14h] [xbp-2Ch]
  float v14; // [xsp+18h] [xbp-28h]

  y = offset.fields.y;
  x = offset.fields.x;
  ((void (__fastcall *)(__int64 *__return_ptr, long double, long double, long double))this->klass->vtable._4_get_bounds.methodPtr)(
    &v12,
    *(long double *)&offset.fields.x,
    *(long double *)&offset.fields.y,
    *(long double *)&offset.fields.z);
  mPanel = this->fields.mPanel;
  if ( !mPanel )
    sub_1C32E7C(0);
  ((void (__fastcall *)(struct UIPanel_o *, const MethodInfo *, float, float, float, float))mPanel->klass->vtable._22_CalculateConstrainOffset.methodPtr)(
    mPanel,
    mPanel->klass->vtable._22_CalculateConstrainOffset.method,
    x + (float)(*(float *)&v12 - v13),
    y + (float)(*((float *)&v12 + 1) - v14),
    x + (float)(*(float *)&v12 + v13),
    y + (float)(*((float *)&v12 + 1) + v14));
  movement = this->fields.movement;
  if ( !movement || (v7 = 0.0, movement != 1) )
    v8 = 0.0;
  return (float)((float)(v9 * v9) + (float)((float)(v7 * v7) + (float)(v8 * v8))) > 0.2;
}


// local variable allocation has failed, the output may be wrong!
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
  unsigned __int64 v35; // d0 OVERLAPPED
  float v36; // s1
  float mScroll; // s0
  int v38; // s2
  float v39; // s3
  float v40; // v1.s[1]
  const MethodInfo *v41; // x0
  const MethodInfo *v42; // x1
  const MethodInfo *v43; // x1
  struct UIPanel_o *mPanel; // x8
  UnityEngine_Behaviour_o *centerOnChild; // x20
  const MethodInfo *v46; // x4
  int32_t v47; // w8
  char v48; // w2
  bool v49; // w3
  struct UnityEngine_Vector3_StaticFields *v50; // x8
  __int64 v51; // d0
  float v52; // s1
  UnityEngine_Vector3_o v53; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED
  UnityEngine_Vector3_o v54; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C3C0C0 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Application_TypeInfo);
    sub_1C32C20(&Method_UnityEngine_Component_GetComponent_SpringPanel___);
    sub_1C32C20(&NGUITools_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3C0C0 = 1;
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
      if ( !byte_4C313D3 )
      {
        sub_1C32C20(&System_Math_TypeInfo);
        byte_4C313D3 = 1;
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
  if ( !byte_4C313D3 )
  {
    sub_1C32C20(&System_Math_TypeInfo);
    byte_4C313D3 = 1;
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
    if ( !byte_4C313D1 )
    {
      sub_1C32C20(&UnityEngine_Vector3_TypeInfo);
      byte_4C313D1 = 1;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    v29 = static_fields->zeroVector.fields.z;
    *(_QWORD *)&this->fields.mMomentum.fields.x = *(_QWORD *)&static_fields->zeroVector.fields.x;
    this->fields.mMomentum.fields.z = v29;
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)this,
                         (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_SpringPanel___);
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
    sub_1C32E7C(mTrans);
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
  v38 = 0;
  v53 = UnityEngine_Transform__TransformDirection((UnityEngine_Transform_o *)mTrans, *(UnityEngine_Vector3_o *)&v35, 0);
  v39 = v34 - v53.fields.x;
  v53.fields.x = this->fields.mScroll;
  v40 = v53.fields.z;
  this->fields.mMomentum.fields.x = v39;
  *(float32x2_t *)&this->fields.mMomentum.fields.y = vsub_f32(v33, *(float32x2_t *)&v53.fields.y);
  this->fields.mScroll = NGUIMath__SpringLerp_49195492(v53.fields.x, 0.0, 20.0, deltaTime, v41);
  v54 = NGUIMath__SpringDampen(&this->fields.mMomentum, 9.0, deltaTime, v42);
  UIScrollView__MoveAbsolute(this, v54, v43);
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
          if ( !byte_4C313D1 )
          {
            sub_1C32C20(&UnityEngine_Vector3_TypeInfo);
            byte_4C313D1 = 1;
          }
          v50 = UnityEngine_Vector3_TypeInfo->static_fields;
          v51 = *(_QWORD *)&v50->zeroVector.fields.x;
          v52 = v50->zeroVector.fields.z;
          this->fields.mScroll = 0.0;
          *(_QWORD *)&this->fields.mMomentum.fields.x = v51;
          this->fields.mMomentum.fields.z = v52;
        }
        goto LABEL_96;
      }
      v47 = this->fields.movement;
      v48 = 1;
      if ( v47 && v47 != 2 )
      {
        if ( v47 == 3 )
        {
          v48 = this->fields.customMovement.fields.x != 0.0;
          v49 = this->fields.customMovement.fields.y != 0.0;
LABEL_95:
          UIScrollView__RestrictWithinBounds_49184984(this, 0, v48, v49, v46);
          goto LABEL_96;
        }
        v48 = 0;
      }
      v49 = (unsigned int)(v47 - 1) < 2;
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
  float x; // s8
  float y; // s9
  float z; // s10
  UnityEngine_Vector3_o v9; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v10; // 0:s0.4,4:s1.4,8:s2.4

  mTrans = this->fields.mTrans;
  if ( !mTrans )
    goto LABEL_6;
  v9 = UnityEngine_Transform__InverseTransformPoint(mTrans, absolute, 0);
  v5 = this->fields.mTrans;
  x = v9.fields.x;
  y = v9.fields.y;
  z = v9.fields.z;
  if ( !byte_4C313D1 )
  {
    mTrans = (UnityEngine_Transform_o *)sub_1C32C20(&UnityEngine_Vector3_TypeInfo);
    byte_4C313D1 = 1;
  }
  if ( !v5 )
LABEL_6:
    sub_1C32E7C(mTrans);
  v10 = UnityEngine_Transform__InverseTransformPoint(v5, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
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
    sub_1C32E7C(this);
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

  if ( (byte_4C3C0B4 & 1) == 0 )
  {
    sub_1C32C20(&Method_BetterList_UIScrollView__Remove__);
    sub_1C32C20(&UIScrollView_TypeInfo);
    byte_4C3C0B4 = 1;
  }
  v3 = UIScrollView_TypeInfo;
  if ( !UIScrollView_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UIScrollView_TypeInfo);
    v3 = UIScrollView_TypeInfo;
  }
  list = (BetterList_T__o *)v3->static_fields->list;
  if ( !list )
    sub_1C32E7C(0);
  BetterList_object___Remove(
    list,
    (Il2CppObject *)this,
    (const MethodInfo_330FA38 *)Method_BetterList_UIScrollView__Remove__);
}


void UIScrollView__OnEnable(UIScrollView_o *this, const MethodInfo *method)
{
  UIScrollView_c *v3; // x0
  BetterList_T__o *list; // x0
  const MethodInfo *v5; // x1

  if ( (byte_4C3C0B1 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Application_TypeInfo);
    sub_1C32C20(&Method_BetterList_UIScrollView__Add__);
    sub_1C32C20(&UIScrollView_TypeInfo);
    byte_4C3C0B1 = 1;
  }
  v3 = UIScrollView_TypeInfo;
  if ( !UIScrollView_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UIScrollView_TypeInfo);
    v3 = UIScrollView_TypeInfo;
  }
  list = (BetterList_T__o *)v3->static_fields->list;
  if ( !list )
    sub_1C32E7C(0);
  BetterList_object___Add(list, (Il2CppObject *)this, (const MethodInfo_330F780 *)Method_BetterList_UIScrollView__Add__);
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
  UIProgressBar_o *v5; // x0
  long double v6; // q0
  UnityEngine_Object_o *verticalScrollBar; // x20
  bool v8; // w0
  long double v9; // q1
  long double v10; // q0

  if ( (byte_4C3C0BC & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3C0BC = 1;
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
      v5 = this->fields.horizontalScrollBar;
      if ( !v5 )
        goto LABEL_16;
      *(float *)&v6 = UIProgressBar__get_value(v5, 0);
      v2 = v6;
    }
    verticalScrollBar = (UnityEngine_Object_o *)this->fields.verticalScrollBar;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v8 = UnityEngine_Object__op_Inequality(verticalScrollBar, 0, 0);
    LODWORD(v9) = 0;
    if ( !v8 )
      goto LABEL_14;
    v5 = this->fields.verticalScrollBar;
    if ( v5 )
    {
      *(float *)&v10 = UIProgressBar__get_value(v5, 0);
      v9 = v10;
LABEL_14:
      ((void (__fastcall *)(UIScrollView_o *, _QWORD, const MethodInfo *, long double, long double))this->klass->vtable._9_SetDragAmount.methodPtr)(
        this,
        0,
        this->klass->vtable._9_SetDragAmount.method,
        v2,
        v9);
      this->fields.mIgnoreCallbacks = 0;
      return;
    }
LABEL_16:
    sub_1C32E7C(v5);
  }
}


// local variable allocation has failed, the output may be wrong!
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
  UICamera_c *v15; // x0
  struct UICamera_StaticFields *v16; // x8
  __int64 mTrans; // x0
  float v18; // w9
  __int64 v19; // x8
  float x; // s8
  float y; // s9
  float v22; // s10
  float w; // s11
  float v24; // s11
  float v25; // s12
  float v26; // s13
  float v27; // s8
  float v28; // s9
  float v29; // s10
  float v30; // s0
  float v31; // s1
  float v32; // s2
  float v33; // s0
  UnityEngine_Object_o *centerOnChild; // x20
  const MethodInfo *v35; // x4
  void (*invoke_impl)(void); // x2
  struct UnityEngine_Vector3_StaticFields *v37; // x8
  struct UIPanel_o *mPanel; // x8
  float v39; // s8
  float v40; // s9
  double v41; // d0
  double v42; // d0
  float v43; // s1
  struct UIPanel_o *v44; // x8
  int32_t movement; // w9
  char v46; // w2
  bool v47; // w3
  __int64 v48; // x8
  float v49; // s0
  float v50; // s1
  float v51; // s8
  double v52; // d0
  double v53; // d0
  float v54; // s1
  __int64 v55; // x8
  float v56; // s0
  float v57; // s1 OVERLAPPED
  float v58; // s0
  float v59; // s10
  float v60; // s9
  float v61; // s8
  double v62; // d0
  double v63; // d0
  float v64; // s1
  __int64 v65; // x8
  float v66; // s0
  float v67; // s1
  float v68; // s10
  double v69; // d0
  double v70; // d0
  float v71; // s1
  __int64 v72; // x8
  float v73; // s0
  float v74; // s1 OVERLAPPED
  float v75; // s0
  float v76; // s2
  struct UIScrollView_OnDragNotification_o *onDragStarted; // x8
  struct UIScrollView_OnDragNotification_o *onDragFinished; // x8
  double iptr; // [xsp+38h] [xbp-28h] BYREF
  UnityEngine_Vector3_o v80; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o rotation; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v83; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C3C0BD & 1) == 0 )
  {
    sub_1C32C20(&NGUITools_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&UICamera_TypeInfo);
    byte_4C3C0BD = 1;
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
    if ( !byte_4C312CA )
    {
      sub_1C32C20(&UnityEngine_Vector2_TypeInfo);
      byte_4C312CA = 1;
    }
    this->fields.mDragStartOffset = UnityEngine_Vector2_TypeInfo->static_fields->zeroVector;
  }
  if ( !UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0) )
    return;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  if ( !NGUITools__GetActive_49301984(gameObject, 0) )
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
    if ( !byte_4C313D1 )
    {
      sub_1C32C20(&UnityEngine_Vector3_TypeInfo);
      byte_4C313D1 = 1;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    v13 = *(_QWORD *)&static_fields->zeroVector.fields.x;
    z = static_fields->zeroVector.fields.z;
    this->fields.mScroll = 0.0;
    *(_QWORD *)&this->fields.mMomentum.fields.x = v13;
    this->fields.mMomentum.fields.z = z;
    UIScrollView__DisableSpring(this, v11);
    v15 = UICamera_TypeInfo;
    if ( !UICamera_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
      v15 = UICamera_TypeInfo;
    }
    v16 = v15->static_fields;
    mTrans = (__int64)this->fields.mTrans;
    v18 = v16->lastWorldPosition.fields.z;
    v19 = *(_QWORD *)&v16->lastWorldPosition.fields.x;
    this->fields.mLastPos.fields.z = v18;
    *(_QWORD *)&this->fields.mLastPos.fields.x = v19;
    if ( !mTrans )
      goto LABEL_109;
    rotation = UnityEngine_Transform__get_rotation((UnityEngine_Transform_o *)mTrans, 0);
    x = rotation.fields.x;
    y = rotation.fields.y;
    v22 = rotation.fields.z;
    w = rotation.fields.w;
    if ( !byte_4C341EF )
    {
      sub_1C32C20(&UnityEngine_Vector3_TypeInfo);
      byte_4C341EF = 1;
    }
    v83.fields.x = x;
    v83.fields.y = y;
    v83.fields.z = v22;
    v83.fields.w = w;
    v80 = UnityEngine_Quaternion__op_Multiply_71162940(v83, UnityEngine_Vector3_TypeInfo->static_fields->backVector, 0);
    v24 = this->fields.mLastPos.fields.x;
    v25 = this->fields.mLastPos.fields.y;
    v26 = this->fields.mLastPos.fields.z;
    v27 = v80.fields.x;
    v28 = v80.fields.y;
    v29 = v80.fields.z;
    if ( !byte_4C313D4 )
    {
      sub_1C32C20(&System_Math_TypeInfo);
      byte_4C313D4 = 1;
    }
    mTrans = (__int64)System_Math_TypeInfo;
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v30 = sqrtf((float)(v29 * v29) + (float)((float)(v27 * v27) + (float)(v28 * v28)));
    if ( v30 <= 0.00001 )
    {
      if ( !byte_4C313D1 )
      {
        mTrans = sub_1C32C20(&UnityEngine_Vector3_TypeInfo);
        byte_4C313D1 = 1;
      }
      v37 = UnityEngine_Vector3_TypeInfo->static_fields;
      v31 = v37->zeroVector.fields.x;
      v32 = v37->zeroVector.fields.y;
      v33 = v37->zeroVector.fields.z;
    }
    else
    {
      v31 = v27 / v30;
      v32 = v28 / v30;
      v33 = v29 / v30;
    }
    mPanel = this->fields.mPanel;
    this->fields.mPlane.fields.m_Normal.fields.x = v31;
    this->fields.mPlane.fields.m_Normal.fields.y = v32;
    this->fields.mPlane.fields.m_Normal.fields.z = v33;
    this->fields.mPlane.fields.m_Distance = -(float)((float)(v26 * v33)
                                                   + (float)((float)(v24 * v31) + (float)(v25 * v32)));
    if ( !mPanel )
      goto LABEL_109;
    v39 = mPanel->fields.mClipOffset.fields.x;
    v40 = mPanel->fields.mClipOffset.fields.y;
    v41 = modf(v39, &iptr);
    if ( v39 >= 0.0 )
    {
      if ( v41 != 0.5 )
      {
        v51 = floorf(v39 + 0.5);
        goto LABEL_60;
      }
      v42 = iptr;
      v43 = 1.0;
    }
    else
    {
      if ( v41 != -0.5 )
      {
        v51 = ceilf(v39 + -0.5);
        goto LABEL_60;
      }
      v42 = iptr;
      v43 = -1.0;
    }
    v48 = (__int64)v42;
    v49 = v42;
    v50 = v49 + v43;
    if ( (v48 & 1) != 0 )
      v51 = v50;
    else
      v51 = v49;
LABEL_60:
    v52 = modf(v40, &iptr);
    if ( v40 >= 0.0 )
    {
      if ( v52 != 0.5 )
      {
        v57 = floorf(v40 + 0.5);
        goto LABEL_70;
      }
      v53 = iptr;
      v54 = 1.0;
    }
    else
    {
      if ( v52 != -0.5 )
      {
        v57 = ceilf(v40 + -0.5);
        goto LABEL_70;
      }
      v53 = iptr;
      v54 = -1.0;
    }
    v55 = (__int64)v53;
    v56 = v53;
    v57 = v56 + v54;
    if ( (v55 & 1) == 0 )
      v57 = v56;
LABEL_70:
    mTrans = (__int64)this->fields.mPanel;
    if ( !mTrans )
      goto LABEL_109;
    v58 = v51;
    UIPanel__set_clipOffset((UIPanel_o *)mTrans, *(UnityEngine_Vector2_o *)(&v57 - 1), 0);
    mTrans = (__int64)this->fields.mTrans;
    if ( !mTrans )
      goto LABEL_109;
    localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)mTrans, 0);
    v59 = localPosition.fields.x;
    v60 = localPosition.fields.y;
    v61 = localPosition.fields.z;
    v62 = modf(localPosition.fields.x, &iptr);
    if ( v59 >= 0.0 )
    {
      if ( v62 != 0.5 )
      {
        v68 = floorf(v59 + 0.5);
        goto LABEL_82;
      }
      v63 = iptr;
      v64 = 1.0;
    }
    else
    {
      if ( v62 != -0.5 )
      {
        v68 = ceilf(v59 + -0.5);
        goto LABEL_82;
      }
      v63 = iptr;
      v64 = -1.0;
    }
    v65 = (__int64)v63;
    v66 = v63;
    v67 = v66 + v64;
    if ( (v65 & 1) != 0 )
      v68 = v67;
    else
      v68 = v66;
LABEL_82:
    v69 = modf(v60, &iptr);
    if ( v60 >= 0.0 )
    {
      if ( v69 != 0.5 )
      {
        v74 = floorf(v60 + 0.5);
        goto LABEL_92;
      }
      v70 = iptr;
      v71 = 1.0;
    }
    else
    {
      if ( v69 != -0.5 )
      {
        v74 = ceilf(v60 + -0.5);
        goto LABEL_92;
      }
      v70 = iptr;
      v71 = -1.0;
    }
    v72 = (__int64)v70;
    v73 = v70;
    v74 = v73 + v71;
    if ( (v72 & 1) == 0 )
      v74 = v73;
LABEL_92:
    mTrans = (__int64)this->fields.mTrans;
    if ( mTrans )
    {
      v75 = v68;
      v76 = v61;
      UnityEngine_Transform__set_localPosition(
        (UnityEngine_Transform_o *)mTrans,
        *(UnityEngine_Vector3_o *)(&v74 - 1),
        0);
      if ( this->fields.smoothDragStart )
        return;
      this->fields.mDragStarted = 1;
      if ( !byte_4C312CA )
      {
        sub_1C32C20(&UnityEngine_Vector2_TypeInfo);
        byte_4C312CA = 1;
      }
      onDragStarted = this->fields.onDragStarted;
      this->fields.mDragStartOffset = UnityEngine_Vector2_TypeInfo->static_fields->zeroVector;
      if ( !onDragStarted )
        return;
      goto LABEL_107;
    }
LABEL_109:
    sub_1C32E7C(mTrans);
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
    v44 = this->fields.mPanel;
    if ( !v44 )
      goto LABEL_109;
    if ( v44->fields.mClipping )
    {
      movement = this->fields.movement;
      v46 = 1;
      if ( movement && movement != 2 )
      {
        if ( movement == 3 )
        {
          v46 = this->fields.customMovement.fields.x != 0.0;
          v47 = this->fields.customMovement.fields.y != 0.0;
LABEL_100:
          UIScrollView__RestrictWithinBounds_49184984(this, this->fields.dragEffect == 0, v46, v47, v35);
          goto LABEL_101;
        }
        v46 = 0;
      }
      v47 = (unsigned int)(movement - 1) < 2;
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

  if ( (byte_4C3C0B9 & 1) == 0 )
  {
    sub_1C32C20(&NGUITools_TypeInfo);
    byte_4C3C0B9 = 1;
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

  return UIScrollView__RestrictWithinBounds_49184984(this, instant, 1, 1, v3);
}


// local variable allocation has failed, the output may be wrong!
bool UIScrollView__RestrictWithinBounds_49184984(
        UIScrollView_o *this,
        bool instant,
        bool horizontal,
        bool vertical,
        const MethodInfo *method)
{
  long double v5; // q10
  long double v6; // q11
  UnityEngine_Transform_o *mPanel; // x0
  float v12; // s0
  float v13; // s1
  long double v14; // q2
  float v15; // s8
  float v16; // s12
  float z; // s9
  float v18; // s11
  double v19; // d0
  double v20; // d0
  float v21; // s1
  __int64 v23; // x8
  float v24; // s0
  float v25; // s1
  float v26; // s10
  double v27; // d0
  double v28; // d0
  float v29; // s1
  __int64 v30; // x8
  float v31; // s0
  float v32; // s1
  float v33; // s11
  UnityEngine_GameObject_o *gameObject; // x0
  double iptr; // [xsp+8h] [xbp-68h] BYREF
  float v36; // [xsp+14h] [xbp-5Ch]
  float v37; // [xsp+18h] [xbp-58h]
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED
  UnityEngine_Vector3_o v39; // 0:s0.4,4:s1.4,8:s2.4

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
    *(float *)&iptr - v36,
    *((float *)&iptr + 1) - v37,
    *(float *)&iptr + v36,
    *((float *)&iptr + 1) + v37);
  v15 = *(float *)&v14;
  if ( horizontal )
    *(float *)&v6 = v12;
  else
    *(float *)&v6 = 0.0;
  if ( vertical )
    *(float *)&v5 = v13;
  else
    *(float *)&v5 = 0.0;
  if ( (float)((float)(*(float *)&v14 * *(float *)&v14)
             + (float)((float)(*(float *)&v6 * *(float *)&v6) + (float)(*(float *)&v5 * *(float *)&v5))) <= 0.1 )
    return 0;
  if ( instant || this->fields.dragEffect != 2 )
  {
    ((void (__fastcall *)(UIScrollView_o *, const MethodInfo *, long double, long double, long double))this->klass->vtable._10_MoveRelative.methodPtr)(
      this,
      this->klass->vtable._10_MoveRelative.method,
      v6,
      v5,
      v14);
    if ( fabsf(*(float *)&v6) > 0.01 )
      this->fields.mMomentum.fields.x = 0.0;
    if ( fabsf(*(float *)&v5) > 0.01 )
      this->fields.mMomentum.fields.y = 0.0;
    if ( fabsf(v15) > 0.01 )
      this->fields.mMomentum.fields.z = 0.0;
    this->fields.mScroll = 0.0;
    return 1;
  }
  mPanel = this->fields.mTrans;
  if ( !mPanel )
LABEL_44:
    sub_1C32E7C(mPanel);
  localPosition = UnityEngine_Transform__get_localPosition(mPanel, 0);
  v16 = *(float *)&v6 + localPosition.fields.x;
  *(double *)&localPosition.fields.x = (float)(*(float *)&v6 + localPosition.fields.x);
  z = localPosition.fields.z;
  v18 = *(float *)&v5 + localPosition.fields.y;
  v19 = modf(*(double *)&localPosition.fields.x, &iptr);
  if ( v16 >= 0.0 )
  {
    if ( v19 != 0.5 )
    {
      v26 = floorf(v16 + 0.5);
      goto LABEL_30;
    }
    v20 = iptr;
    v21 = 1.0;
  }
  else
  {
    if ( v19 != -0.5 )
    {
      v26 = ceilf(v16 + -0.5);
      goto LABEL_30;
    }
    v20 = iptr;
    v21 = -1.0;
  }
  v23 = (__int64)v20;
  v24 = v20;
  v25 = v24 + v21;
  if ( (v23 & 1) != 0 )
    v26 = v25;
  else
    v26 = v24;
LABEL_30:
  v27 = modf(v18, &iptr);
  if ( v18 >= 0.0 )
  {
    if ( v27 != 0.5 )
    {
      v33 = floorf(v18 + 0.5);
      goto LABEL_40;
    }
    v28 = iptr;
    v29 = 1.0;
  }
  else
  {
    if ( v27 != -0.5 )
    {
      v33 = ceilf(v18 + -0.5);
      goto LABEL_40;
    }
    v28 = iptr;
    v29 = -1.0;
  }
  v30 = (__int64)v28;
  v31 = v28;
  v32 = v31 + v29;
  if ( (v30 & 1) != 0 )
    v33 = v32;
  else
    v33 = v31;
LABEL_40:
  mPanel = (UnityEngine_Transform_o *)this->fields.mPanel;
  if ( !mPanel )
    goto LABEL_44;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mPanel, 0);
  v39.fields.x = v26;
  v39.fields.y = v33;
  v39.fields.z = v15 + z;
  mPanel = (UnityEngine_Transform_o *)SpringPanel__Begin(gameObject, v39, 13.0, 0);
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

  if ( (byte_4C3C0BF & 1) == 0 )
  {
    sub_1C32C20(&NGUITools_TypeInfo);
    byte_4C3C0BF = 1;
  }
  if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0) )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    if ( NGUITools__GetActive_49301984(gameObject, 0) && this->fields.scrollWheelFactor != 0.0 )
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
  const MethodInfo *v14; // x3
  float v15; // s12
  float v16; // s13
  float v17; // s14
  float v18; // s15
  UIPanel_o *mTrans; // x0
  struct UIPanel_o *v20; // x8
  float v21; // s9
  float v22; // s8
  float v23; // s4
  float v24; // s0
  float v25; // s3
  float v26; // s2
  float v27; // s1
  float v28; // s4
  float v29; // s5
  float v30; // s6
  float v31; // s3
  float v32; // s4
  float v33; // s2
  float v34; // s3
  float v35; // s10
  float v36; // s11
  int32_t v37; // w8
  int32_t movement; // w8
  __int64 v39; // [xsp+8h] [xbp-88h] BYREF
  float v40; // [xsp+14h] [xbp-7Ch]
  float v41; // [xsp+18h] [xbp-78h]
  UnityEngine_Vector2_o v42; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector4_o finalClipRegion; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C3C0B8 & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_Component_GetComponent_UIPanel___);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3C0B8 = 1;
  }
  p_mPanel = &this->fields.mPanel;
  mPanel = (UnityEngine_Object_o *)this->fields.mPanel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(mPanel, 0, 0) )
  {
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)this,
                         (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
    this->fields.mPanel = (struct UIPanel_o *)Component_object;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.mPanel, (int32_t)Component_object, v13, v14);
  }
  UIScrollView__DisableSpring(this, v11);
  ((void (__fastcall *)(__int64 *__return_ptr, UIScrollView_o *, const MethodInfo *))this->klass->vtable._4_get_bounds.methodPtr)(
    &v39,
    this,
    this->klass->vtable._4_get_bounds.method);
  v15 = *(float *)&v39 - v40;
  v16 = *(float *)&v39 + v40;
  if ( (float)(*(float *)&v39 - v40) != (float)(*(float *)&v39 + v40) )
  {
    v17 = *((float *)&v39 + 1) - v41;
    v18 = *((float *)&v39 + 1) + v41;
    if ( (float)(*((float *)&v39 + 1) - v41) != (float)(*((float *)&v39 + 1) + v41) )
    {
      mTrans = *p_mPanel;
      if ( !*p_mPanel )
        goto LABEL_44;
      finalClipRegion = UIPanel__get_finalClipRegion(mTrans, 0);
      v20 = *p_mPanel;
      if ( !*p_mPanel )
        goto LABEL_44;
      v21 = finalClipRegion.fields.x;
      v22 = finalClipRegion.fields.y;
      v23 = finalClipRegion.fields.w * 0.5;
      v24 = v15 + (float)(finalClipRegion.fields.z * 0.5);
      v25 = v16 - (float)(finalClipRegion.fields.z * 0.5);
      v26 = v17 + v23;
      v27 = v18 - v23;
      if ( v20->fields.mClipping == 3 )
      {
        v28 = v20->fields.mClipSoftness.fields.x;
        v29 = v20->fields.mClipSoftness.fields.y;
        v24 = v24 - v28;
        v25 = v25 + v28;
        v26 = v26 - v29;
        v27 = v27 + v29;
      }
      v30 = fminf(x, 1.0);
      v31 = v25 - v24;
      v32 = fminf(y, 1.0);
      if ( x < 0.0 )
        v30 = 0.0;
      v33 = v26 - v27;
      v34 = v30 * v31;
      if ( y < 0.0 )
        v32 = 0.0;
      v35 = v24 + v34;
      v36 = v27 + (float)(v32 * v33);
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
            v35 = v21;
          }
        }
        if ( (unsigned int)(movement - 1) < 2 )
        {
LABEL_39:
          v22 = v36;
LABEL_40:
          mTrans = *p_mPanel;
          if ( *p_mPanel )
          {
            v42.fields.x = v35 - mTrans->fields.mClipRange.fields.x;
            v42.fields.y = v22 - mTrans->fields.mClipRange.fields.y;
            UIPanel__set_clipOffset(mTrans, v42, 0);
            if ( updateScrollbars )
              ((void (__fastcall *)(UIScrollView_o *, bool, const MethodInfo *))this->klass->vtable._8_UpdateScrollbars.methodPtr)(
                this,
                this->fields.mDragID == -10,
                this->klass->vtable._8_UpdateScrollbars.method);
            return;
          }
LABEL_44:
          sub_1C32E7C(mTrans);
        }
        v21 = v35;
        if ( movement != 3 )
          goto LABEL_40;
LABEL_38:
        v35 = v21;
        if ( this->fields.customMovement.fields.y == 0.0 )
          goto LABEL_40;
        goto LABEL_39;
      }
      mTrans = (UIPanel_o *)this->fields.mTrans;
      if ( !mTrans )
        goto LABEL_44;
      localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)mTrans, 0);
      v37 = this->fields.movement;
      if ( v37 && v37 != 2 )
      {
        if ( v37 != 3 )
          goto LABEL_24;
        if ( this->fields.customMovement.fields.x == 0.0 )
          goto LABEL_26;
      }
      localPosition.fields.x = (float)(v21 - v35) + localPosition.fields.x;
LABEL_24:
      if ( (unsigned int)(v37 - 1) < 2 )
      {
LABEL_27:
        localPosition.fields.y = (float)(v22 - v36) + localPosition.fields.y;
        goto LABEL_28;
      }
      if ( v37 != 3 )
      {
LABEL_28:
        mTrans = (UIPanel_o *)this->fields.mTrans;
        if ( !mTrans )
          goto LABEL_44;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)mTrans, localPosition, 0);
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

  if ( (byte_4C3C0B2 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Application_TypeInfo);
    byte_4C3C0B2 = 1;
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
  UIProgressBar_o *v11; // x0
  long double v12; // q0
  UnityEngine_Object_o *v13; // x20
  long double v14; // q1
  long double v15; // q0

  if ( (byte_4C3C0BB & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3C0BB = 1;
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
        v11 = this->fields.horizontalScrollBar;
        if ( !v11 )
          goto LABEL_23;
        *(float *)&v12 = UIProgressBar__get_value(v11, 0);
        v10 = v12;
      }
      v13 = (UnityEngine_Object_o *)this->fields.verticalScrollBar;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Inequality(v13, 0, 0) )
      {
        *(float *)&v14 = 1.0 - PivotOffset.fields.y;
        goto LABEL_21;
      }
      v11 = this->fields.verticalScrollBar;
      if ( v11 )
      {
        *(float *)&v15 = UIProgressBar__get_value(v11, 0);
        v14 = v15;
LABEL_21:
        ((void (__fastcall *)(UIScrollView_o *, _QWORD, const MethodInfo *, long double, long double))this->klass->vtable._9_SetDragAmount.methodPtr)(
          this,
          0,
          this->klass->vtable._9_SetDragAmount.method,
          v10,
          v14);
        ((void (__fastcall *)(UIScrollView_o *, __int64, const MethodInfo *))this->klass->vtable._8_UpdateScrollbars.methodPtr)(
          this,
          1,
          this->klass->vtable._8_UpdateScrollbars.method);
        this->fields.mIgnoreCallbacks = 0;
        return;
      }
LABEL_23:
      sub_1C32E7C(v11);
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


void UIScrollView__UpdateScrollbars_49185828(UIScrollView_o *this, bool recalculateBounds, const MethodInfo *method)
{
  UnityEngine_Object_o *mPanel; // x21
  UnityEngine_Object_o *horizontalScrollBar; // x21
  UnityEngine_Object_o *verticalScrollBar; // x21
  UIScrollView_c *klass; // x8
  double v9; // kr00_8
  float v10; // s12
  UnityEngine_Object_o *v11; // x20
  float v12; // s13
  float v13; // s14
  bool v14; // w0
  UIPanel_o *v15; // x0
  float x; // s8
  float z; // s9
  double v18; // d10
  double v19; // d0
  double v20; // d0
  double v21; // d1
  double v22; // d1
  int v23; // w8
  float v24; // s9
  const MethodInfo *v25; // x3
  double v26; // d0
  double v27; // d0
  float v28; // s1
  __int64 v29; // x8
  float v30; // s0
  float v31; // s1
  struct UIPanel_o *v32; // x8
  UnityEngine_Object_o *v33; // x20
  float v34; // s13
  float v35; // s11
  bool v36; // w0
  float y; // s8
  float w; // s9
  double v39; // d10
  double v40; // d0
  double v41; // d0
  double v42; // d1
  double v43; // d1
  int v44; // w8
  float v45; // s9
  const MethodInfo *v46; // x3
  double v47; // d0
  double v48; // d0
  float v49; // s1
  __int64 v50; // x8
  float v51; // s0
  float v52; // s1
  struct UIPanel_o *v53; // x8
  double iptr; // [xsp+8h] [xbp-78h] BYREF
  float v55; // [xsp+14h] [xbp-6Ch]
  float v56; // [xsp+18h] [xbp-68h]
  UnityEngine_Vector4_o finalClipRegion; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Vector4_o v58; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C3C0B6 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3C0B6 = 1;
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
  v10 = v56;
  v11 = (UnityEngine_Object_o *)this->fields.horizontalScrollBar;
  v12 = *(float *)&iptr - v55;
  v13 = *(float *)&iptr + v55;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v14 = UnityEngine_Object__op_Inequality(v11, 0, 0);
  if ( v13 > v12 && v14 )
  {
    v15 = this->fields.mPanel;
    if ( !v15 )
      goto LABEL_87;
    finalClipRegion = UIPanel__get_finalClipRegion(v15, 0);
    x = finalClipRegion.fields.x;
    z = finalClipRegion.fields.z;
    if ( !byte_4C32B16 )
    {
      sub_1C32C20(&System_Math_TypeInfo);
      byte_4C32B16 = 1;
    }
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v18 = z;
    v19 = modf(z, &iptr);
    if ( z >= 0.0 )
    {
      if ( v19 != 0.5 )
      {
        v20 = floor(v18 + 0.5);
        goto LABEL_35;
      }
      v20 = iptr;
      v21 = 1.0;
    }
    else
    {
      if ( v19 != -0.5 )
      {
        v20 = ceil(v18 + -0.5);
        goto LABEL_35;
      }
      v20 = iptr;
      v21 = -1.0;
    }
    v22 = v20 + v21;
    if ( ((__int64)v20 & 1) != 0 )
      v20 = v22;
LABEL_35:
    v23 = (int)v20;
    if ( v20 == INFINITY )
      v23 = 0x80000000;
    v24 = (float)(int)(v23 & 0xFFFFFFFE) * 0.5;
    v26 = modf(v24, &iptr);
    if ( v24 >= 0.0 )
    {
      if ( v26 == 0.5 )
      {
        v27 = iptr;
        v28 = 1.0;
LABEL_42:
        v29 = (__int64)v27;
        v30 = v27;
        v31 = v30 + v28;
        if ( (v29 & 1) != 0 )
          v30 = v31;
        goto LABEL_47;
      }
      v30 = floorf(v24 + 0.5);
    }
    else
    {
      if ( v26 == -0.5 )
      {
        v27 = iptr;
        v28 = -1.0;
        goto LABEL_42;
      }
      v30 = ceilf(v24 + -0.5);
    }
LABEL_47:
    v32 = this->fields.mPanel;
    if ( !v32 )
      goto LABEL_87;
    if ( v32->fields.mClipping == 3 )
      v30 = v30 - v32->fields.mClipSoftness.fields.x;
    UIScrollView__UpdateScrollbars_49187076(
      this,
      this->fields.horizontalScrollBar,
      (float)(x - v30) - v12,
      v13 - (float)(x + v30),
      v13 - v12,
      v30 + v30,
      0,
      v25);
  }
  v33 = (UnityEngine_Object_o *)this->fields.verticalScrollBar;
  v34 = *((float *)&v9 + 1) - v10;
  v35 = *((float *)&v9 + 1) + v10;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v36 = UnityEngine_Object__op_Inequality(v33, 0, 0);
  if ( v35 > v34 && v36 )
  {
    v15 = this->fields.mPanel;
    if ( !v15 )
      goto LABEL_87;
    v58 = UIPanel__get_finalClipRegion(v15, 0);
    y = v58.fields.y;
    w = v58.fields.w;
    if ( !byte_4C32B16 )
    {
      sub_1C32C20(&System_Math_TypeInfo);
      byte_4C32B16 = 1;
    }
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v39 = w;
    v40 = modf(w, &iptr);
    if ( w >= 0.0 )
    {
      if ( v40 != 0.5 )
      {
        v41 = floor(v39 + 0.5);
        goto LABEL_70;
      }
      v41 = iptr;
      v42 = 1.0;
    }
    else
    {
      if ( v40 != -0.5 )
      {
        v41 = ceil(v39 + -0.5);
        goto LABEL_70;
      }
      v41 = iptr;
      v42 = -1.0;
    }
    v43 = v41 + v42;
    if ( ((__int64)v41 & 1) != 0 )
      v41 = v43;
LABEL_70:
    v44 = (int)v41;
    if ( v41 == INFINITY )
      v44 = 0x80000000;
    v45 = (float)(int)(v44 & 0xFFFFFFFE) * 0.5;
    v47 = modf(v45, &iptr);
    if ( v45 >= 0.0 )
    {
      if ( v47 != 0.5 )
      {
        v51 = floorf(v45 + 0.5);
        goto LABEL_82;
      }
      v48 = iptr;
      v49 = 1.0;
    }
    else
    {
      if ( v47 != -0.5 )
      {
        v51 = ceilf(v45 + -0.5);
        goto LABEL_82;
      }
      v48 = iptr;
      v49 = -1.0;
    }
    v50 = (__int64)v48;
    v51 = v48;
    v52 = v51 + v49;
    if ( (v50 & 1) != 0 )
      v51 = v52;
LABEL_82:
    v53 = this->fields.mPanel;
    if ( v53 )
    {
      if ( v53->fields.mClipping == 3 )
        v51 = v51 - v53->fields.mClipSoftness.fields.y;
      UIScrollView__UpdateScrollbars_49187076(
        this,
        this->fields.verticalScrollBar,
        (float)(y - v51) - v34,
        v35 - (float)(y + v51),
        v35 - v34,
        v51 + v51,
        1,
        v46);
      return;
    }
LABEL_87:
    sub_1C32E7C(v15);
  }
}


void UIScrollView__UpdateScrollbars_49187076(
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
  float v16; // s0
  float v17; // s2
  float v18; // s4
  float v19; // s5
  float v20; // s1
  float v21; // s9
  float v22; // s0
  float v23; // s1
  float v24; // s3
  float v25; // s4
  bool v26; // nf
  float v27; // s1
  float v28; // s11
  float v29; // s10
  float v30; // s4
  float v31; // s0
  float v32; // s1
  __int64 naturalAligment; // x10
  const MethodInfo *v34; // x1

  if ( (byte_4C3C0B7 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&UIScrollBar_TypeInfo);
    byte_4C3C0B7 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v15 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)slider, 0, 0);
  if ( !v15 )
  {
    this->fields.mIgnoreCallbacks = 1;
    if ( viewSize >= contentSize )
    {
      v22 = 1.0;
      v23 = (float)-contentMin / contentSize;
      v24 = (float)-contentMax / contentSize;
      v25 = fminf(v23, 1.0);
      v26 = v23 < 0.0;
      v27 = fminf(v24, 1.0);
      if ( v26 )
        v28 = 0.0;
      else
        v28 = v25;
      if ( v24 < 0.0 )
        v29 = 0.0;
      else
        v29 = v27;
      v21 = v28 + v29;
      if ( inverted )
      {
        v22 = 0.0;
        if ( v21 > 0.001 )
          v22 = 1.0 - (float)(v28 / v21);
      }
      else if ( v21 > 0.001 )
      {
        v22 = v28 / v21;
      }
      if ( !slider )
        goto LABEL_49;
      UIProgressBar__set_value(slider, v22, 0);
      if ( contentSize > 0.0 )
      {
        v30 = fminf(v28 / contentSize, 1.0);
        v31 = fminf(v29 / contentSize, 1.0);
        if ( (float)(v28 / contentSize) < 0.0 )
          v32 = 0.0;
        else
          v32 = v30;
        if ( (float)(v29 / contentSize) < 0.0 )
          v31 = 0.0;
        v21 = v32 + v31;
      }
    }
    else
    {
      v16 = 1.0;
      v17 = 0.0;
      v18 = fminf(contentMin / contentSize, 1.0);
      v19 = fminf(contentMax / contentSize, 1.0);
      if ( (float)(contentMin / contentSize) < 0.0 )
        v20 = 0.0;
      else
        v20 = v18;
      if ( (float)(contentMax / contentSize) >= 0.0 )
        v17 = v19;
      v21 = v20 + v17;
      if ( inverted )
      {
        v16 = 0.0;
        if ( v21 > 0.001 )
          v16 = 1.0 - (float)(v20 / v21);
      }
      else if ( v21 > 0.001 )
      {
        v16 = v20 / v21;
      }
      if ( !slider )
        goto LABEL_49;
      UIProgressBar__set_value(slider, v16, 0);
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
      UIScrollBar__set_barSize((UIScrollBar_o *)slider, 1.0 - v21, v34);
LABEL_47:
      this->fields.mIgnoreCallbacks = 0;
      return;
    }
LABEL_49:
    sub_1C32E7C(v15);
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
  const MethodInfo *v7; // x3
  const MethodInfo *v8; // x4
  __int128 v9; // q0
  __int128 v10; // q0
  UnityEngine_Bounds_o v12; // [xsp+8h] [xbp-38h] BYREF

  v3 = this;
  if ( !this->fields.mCalculatedBounds )
  {
    this->fields.mCalculatedBounds = 1;
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    v3->fields.mTrans = transform;
    sub_1C32BC4((CGThumbnailListItem_o *)&v3->fields.mTrans, (int32_t)transform, v6, v7);
    this = (UIScrollView_o *)NGUIMath__CalculateRelativeWidgetBounds_49256556(
                               &v12,
                               v3->fields.mTrans,
                               v3->fields.mTrans,
                               0,
                               1,
                               v8);
    v9 = *(_OWORD *)&v12.fields.m_Center.fields.x;
    *(_QWORD *)&v3->fields.mBounds.fields.m_Extents.fields.y = *(_QWORD *)&v12.fields.m_Extents.fields.y;
    *(_OWORD *)&v3->fields.mBounds.fields.m_Center.fields.x = v9;
  }
  v10 = *(_OWORD *)&v3->fields.mBounds.fields.m_Center.fields.x;
  *(_QWORD *)&retstr->fields.m_Extents.fields.y = *(_QWORD *)&v3->fields.mBounds.fields.m_Extents.fields.y;
  *(_OWORD *)&retstr->fields.m_Center.fields.x = v10;
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
  Il2CppObject *Component_object; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  float x; // s9
  float y; // s8
  float z; // s11
  float w; // s10
  __int64 v12; // kr00_8
  float v13; // s13
  float v14; // s15
  float width; // s11
  float height; // s0
  int32_t movement; // w8
  bool result; // w0
  __int64 v19; // [xsp+8h] [xbp-78h] BYREF
  float v20; // [xsp+14h] [xbp-6Ch]
  float v21; // [xsp+18h] [xbp-68h]
  UnityEngine_Vector4_o finalClipRegion; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C3C0AF & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_Component_GetComponent_UIPanel___);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3C0AF = 1;
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
                         (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
    this->fields.mPanel = (struct UIPanel_o *)Component_object;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.mPanel, (int32_t)Component_object, v6, v7);
  }
  if ( !*p_mPanel )
    sub_1C32E7C(0);
  finalClipRegion = UIPanel__get_finalClipRegion(*p_mPanel, 0);
  x = finalClipRegion.fields.x;
  y = finalClipRegion.fields.y;
  z = finalClipRegion.fields.z;
  w = finalClipRegion.fields.w;
  ((void (__fastcall *)(__int64 *__return_ptr, UIScrollView_o *, const MethodInfo *))this->klass->vtable._4_get_bounds.methodPtr)(
    &v19,
    this,
    this->klass->vtable._4_get_bounds.method);
  v12 = v19;
  v14 = v20;
  v13 = v21;
  if ( z == 0.0 )
    width = (float)UnityEngine_Screen__get_width(0);
  else
    width = z * 0.5;
  if ( w == 0.0 )
    height = (float)UnityEngine_Screen__get_height(0);
  else
    height = w * 0.5;
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
      if ( (float)(*(float *)&v12 - v14) < (float)(x - width) || (float)(*(float *)&v12 + v14) > (float)(x + width) )
        return 1;
      if ( (unsigned int)(movement - 1) < 2 )
        goto LABEL_22;
      if ( movement != 3 )
        goto LABEL_24;
LABEL_21:
      if ( this->fields.customMovement.fields.y == 0.0 )
        goto LABEL_24;
LABEL_22:
      if ( (float)(*((float *)&v12 + 1) - v13) < (float)(y - height)
        || (float)(*((float *)&v12 + 1) + v13) > (float)(y + height) )
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
  struct UIPanel_o *mPanel; // x0
  float v4; // s9
  float width; // s8
  float v6; // s9
  double v7; // d8
  double v8; // d0
  double v9; // d0
  double v10; // d1
  double v11; // d1
  double iptr; // [xsp+8h] [xbp-38h] BYREF
  float v14; // [xsp+14h] [xbp-2Ch]

  ((void (__fastcall *)(double *__return_ptr))this->klass->vtable._4_get_bounds.methodPtr)(&iptr);
  mPanel = this->fields.mPanel;
  if ( !mPanel )
    sub_1C32E7C(0);
  v4 = v14 + v14;
  if ( mPanel->fields.mClipping == 3 )
    v4 = v4 + (float)(mPanel->fields.mClipSoftness.fields.x + mPanel->fields.mClipSoftness.fields.x);
  width = UIPanel__get_width(mPanel, 0);
  if ( !byte_4C32B16 )
  {
    sub_1C32C20(&System_Math_TypeInfo);
    byte_4C32B16 = 1;
  }
  v6 = v4 - width;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v7 = v6;
  v8 = modf(v6, &iptr);
  if ( v6 >= 0.0 )
  {
    if ( v8 != 0.5 )
    {
      v9 = floor(v7 + 0.5);
      return v9 != INFINITY && (int)v9 > 0;
    }
    v9 = iptr;
    v10 = 1.0;
  }
  else
  {
    if ( v8 != -0.5 )
    {
      v9 = ceil(v7 + -0.5);
      return v9 != INFINITY && (int)v9 > 0;
    }
    v9 = iptr;
    v10 = -1.0;
  }
  v11 = v9 + v10;
  if ( ((__int64)v9 & 1) != 0 )
    v9 = v11;
  return v9 != INFINITY && (int)v9 > 0;
}


bool UIScrollView__get_shouldMoveVertically(UIScrollView_o *this, const MethodInfo *method)
{
  struct UIPanel_o *mPanel; // x0
  float v4; // s9
  float height; // s8
  float v6; // s9
  double v7; // d8
  double v8; // d0
  double v9; // d0
  double v10; // d1
  double v11; // d1
  double iptr[2]; // [xsp+8h] [xbp-38h] BYREF
  float v14; // [xsp+18h] [xbp-28h]

  ((void (__fastcall *)(double *__return_ptr))this->klass->vtable._4_get_bounds.methodPtr)(iptr);
  mPanel = this->fields.mPanel;
  if ( !mPanel )
    sub_1C32E7C(0);
  v4 = v14 + v14;
  if ( mPanel->fields.mClipping == 3 )
    v4 = v4 + (float)(mPanel->fields.mClipSoftness.fields.y + mPanel->fields.mClipSoftness.fields.y);
  height = UIPanel__get_height(mPanel, 0);
  if ( !byte_4C32B16 )
  {
    sub_1C32C20(&System_Math_TypeInfo);
    byte_4C32B16 = 1;
  }
  v6 = v4 - height;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v7 = v6;
  v8 = modf(v6, iptr);
  if ( v6 >= 0.0 )
  {
    if ( v8 != 0.5 )
    {
      v9 = floor(v7 + 0.5);
      return v9 != INFINITY && (int)v9 > 0;
    }
    v9 = iptr[0];
    v10 = 1.0;
  }
  else
  {
    if ( v8 != -0.5 )
    {
      v9 = ceil(v7 + -0.5);
      return v9 != INFINITY && (int)v9 > 0;
    }
    v9 = iptr[0];
    v10 = -1.0;
  }
  v11 = v9 + v10;
  if ( ((__int64)v9 & 1) != 0 )
    v9 = v11;
  return v9 != INFINITY && (int)v9 > 0;
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
  intptr_t v4; // x8
  int v8; // w22
  Il2CppObject *m_target; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v4;
  this->fields.m_target = object;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C32CE0(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C32E98(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C32D48(v10, 0);
    }
    goto LABEL_5;
  }
  if ( v8 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1A7E228;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A7E1E8;
}


System_IAsyncResult_o *UIScrollView_OnDragNotification__BeginInvoke(
        UIScrollView_OnDragNotification_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0;
  return (System_IAsyncResult_o *)sub_1C32BD4(this, &v5, callback, object);
}


void UIScrollView_OnDragNotification__EndInvoke(
        UIScrollView_OnDragNotification_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C32BD8(result, 0, method);
}


void UIScrollView_OnDragNotification__Invoke(UIScrollView_OnDragNotification_o *this, const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, intptr_t))this->fields.invoke_impl)(this->fields.method_code, this->fields.method);
}