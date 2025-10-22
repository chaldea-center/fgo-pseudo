void UICamera___cctor(const MethodInfo *method)
{
  BetterList_T__o *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  UICamera_GetKeyStateFunc_o *v4; // x19
  const MethodInfo *v5; // x3
  struct UICamera_StaticFields *static_fields; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  UICamera_GetKeyStateFunc_o *v9; // x19
  const MethodInfo *v10; // x3
  struct UICamera_StaticFields *v11; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  UICamera_GetKeyStateFunc_o *v14; // x19
  const MethodInfo *v15; // x3
  struct UICamera_StaticFields *v16; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  UICamera_GetAxisFunc_o *v19; // x19
  const MethodInfo *v20; // x3
  struct UICamera_StaticFields *v21; // x0
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  UICamera_c *v26; // x8
  struct UICamera_StaticFields *v27; // x9
  struct UICamera_StaticFields *v28; // x10
  struct UnityEngine_Vector3_StaticFields *v29; // x9
  float z; // s1
  struct UICamera_StaticFields *v31; // x0
  struct UICamera_StaticFields *v32; // x0
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  struct UICamera_StaticFields *v35; // x0
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  struct UICamera_StaticFields *v38; // x8
  int32_t v39; // w2
  const MethodInfo *v40; // x3
  __int64 v41; // x19
  __int64 v42; // x20
  __int64 v43; // x0
  __int64 v44; // x1
  __int64 v45; // x0
  __int64 v46; // x1
  int32_t v47; // w2
  const MethodInfo *v48; // x3
  __int64 v49; // x20
  int32_t v50; // w2
  const MethodInfo *v51; // x3
  __int64 v52; // x20
  int32_t v53; // w2
  const MethodInfo *v54; // x3
  CGThumbnailListItem_o *p_mMouse; // x0
  int32_t v56; // w2
  const MethodInfo *v57; // x3
  __int64 v58; // x19
  CGThumbnailListItem_o *p_controller; // x0
  int32_t v60; // w2
  const MethodInfo *v61; // x3
  System_Collections_Generic_Dictionary_int__object__o *v62; // x19
  CGThumbnailListItem_o *p_mTouches; // x0
  int32_t v64; // w2
  const MethodInfo *v65; // x3
  struct UICamera_StaticFields *v66; // x8
  BetterList_UICamera_DepthEntry__o *v67; // x19
  CGThumbnailListItem_o *p_mHits; // x0
  int32_t v69; // w2
  const MethodInfo *v70; // x3
  int32x2_t v71; // d1
  struct UnityEngine_Vector3_StaticFields *v72; // x8
  float32x2_t v73; // d9
  float v74; // s8
  unsigned __int64 v75; // d0
  float v76; // s1
  struct UnityEngine_Vector3_StaticFields *v77; // x8
  UICamera_c *v78; // x8
  struct UICamera_StaticFields *v79; // x9
  struct UICamera_StaticFields *v80; // x8
  __int64 v81; // x0

  if ( (byte_4C5B2E1 & 1) == 0 )
  {
    sub_1C3E564(&Method_BetterList_UICamera___ctor__);
    sub_1C3E564(&Method_BetterList_UICamera_DepthEntry___ctor__);
    sub_1C3E564(&BetterList_UICamera__TypeInfo);
    sub_1C3E564(&BetterList_UICamera_DepthEntry__TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_int__UICamera_MouseOrTouch___ctor__);
    sub_1C3E564(&System_Collections_Generic_Dictionary_int__UICamera_MouseOrTouch__TypeInfo);
    sub_1C3E564(&UICamera_GetAxisFunc_TypeInfo);
    sub_1C3E564(&UICamera_GetKeyStateFunc_TypeInfo);
    sub_1C3E564(&Method_UnityEngine_Input_GetAxis__);
    sub_1C3E564(&Method_UnityEngine_Input_GetKeyDown__);
    sub_1C3E564(&Method_UnityEngine_Input_GetKeyUp__);
    sub_1C3E564(&Method_UnityEngine_Input_GetKey__);
    sub_1C3E564(&UICamera_MouseOrTouch___TypeInfo);
    sub_1C3E564(&UICamera_MouseOrTouch_TypeInfo);
    sub_1C3E564(&UICamera_TypeInfo);
    byte_4C5B2E1 = 1;
  }
  v1 = (BetterList_T__o *)sub_1C3E7B0(BetterList_UICamera__TypeInfo);
  BetterList_object____ctor(v1, (const MethodInfo_332C5CC *)Method_BetterList_UICamera___ctor__);
  UICamera_TypeInfo->static_fields->list = (struct BetterList_UICamera__o *)v1;
  sub_1C3E508((CGThumbnailListItem_o *)UICamera_TypeInfo->static_fields, (int32_t)v1, v2, v3);
  v4 = (UICamera_GetKeyStateFunc_o *)sub_1C3E7B0(UICamera_GetKeyStateFunc_TypeInfo);
  UICamera_GetKeyStateFunc___ctor(v4, 0, Method_UnityEngine_Input_GetKeyDown__, v5);
  static_fields = UICamera_TypeInfo->static_fields;
  static_fields->GetKeyDown = v4;
  sub_1C3E508((CGThumbnailListItem_o *)&static_fields->GetKeyDown, (int32_t)v4, v7, v8);
  v9 = (UICamera_GetKeyStateFunc_o *)sub_1C3E7B0(UICamera_GetKeyStateFunc_TypeInfo);
  UICamera_GetKeyStateFunc___ctor(v9, 0, Method_UnityEngine_Input_GetKeyUp__, v10);
  v11 = UICamera_TypeInfo->static_fields;
  v11->GetKeyUp = v9;
  sub_1C3E508((CGThumbnailListItem_o *)&v11->GetKeyUp, (int32_t)v9, v12, v13);
  v14 = (UICamera_GetKeyStateFunc_o *)sub_1C3E7B0(UICamera_GetKeyStateFunc_TypeInfo);
  UICamera_GetKeyStateFunc___ctor(v14, 0, Method_UnityEngine_Input_GetKey__, v15);
  v16 = UICamera_TypeInfo->static_fields;
  v16->GetKey = v14;
  sub_1C3E508((CGThumbnailListItem_o *)&v16->GetKey, (int32_t)v14, v17, v18);
  v19 = (UICamera_GetAxisFunc_o *)sub_1C3E7B0(UICamera_GetAxisFunc_TypeInfo);
  UICamera_GetAxisFunc___ctor(v19, 0, Method_UnityEngine_Input_GetAxis__, v20);
  v21 = UICamera_TypeInfo->static_fields;
  v21->GetAxis = v19;
  sub_1C3E508((CGThumbnailListItem_o *)&v21->GetAxis, (int32_t)v19, v22, v23);
  v26 = UICamera_TypeInfo;
  v27 = UICamera_TypeInfo->static_fields;
  v27->showTooltips = 1;
  if ( !byte_4C5059A )
  {
    sub_1C3E564(&UnityEngine_Vector2_TypeInfo);
    v26 = UICamera_TypeInfo;
    byte_4C5059A = 1;
    v27 = UICamera_TypeInfo->static_fields;
  }
  v27->lastTouchPosition = UnityEngine_Vector2_TypeInfo->static_fields->zeroVector;
  if ( !byte_4C506A1 )
  {
    sub_1C3E564(&UnityEngine_Vector3_TypeInfo);
    v26 = UICamera_TypeInfo;
    byte_4C506A1 = 1;
  }
  v28 = v26->static_fields;
  v29 = UnityEngine_Vector3_TypeInfo->static_fields;
  z = v29->zeroVector.fields.z;
  *(_QWORD *)&v28->lastWorldPosition.fields.x = *(_QWORD *)&v29->zeroVector.fields.x;
  v28->lastWorldPosition.fields.z = z;
  v31 = v26->static_fields;
  v31->current = 0;
  sub_1C3E508((CGThumbnailListItem_o *)&v31->current, 0, v24, v25);
  v32 = UICamera_TypeInfo->static_fields;
  v32->currentCamera = 0;
  sub_1C3E508((CGThumbnailListItem_o *)&v32->currentCamera, 0, v33, v34);
  v35 = UICamera_TypeInfo->static_fields;
  v35->currentTouch = 0;
  v35 = (struct UICamera_StaticFields *)((char *)v35 + 160);
  v35[-1].GetInputTouchCount = (struct UICamera_GetTouchCountCallback_o *)0xFFFFFF9C00000000LL;
  LODWORD(v35[-1].GetInputTouch) = 0;
  sub_1C3E508((CGThumbnailListItem_o *)v35, 0, v36, v37);
  v38 = UICamera_TypeInfo->static_fields;
  v38->inputHasFocus = 0;
  v38->mCurrentSelection = 0;
  sub_1C3E508((CGThumbnailListItem_o *)&v38->mCurrentSelection, 0, v39, v40);
  v41 = sub_1C3E60C(UICamera_MouseOrTouch___TypeInfo, 3);
  v42 = sub_1C3E7B0(UICamera_MouseOrTouch_TypeInfo);
  *(_DWORD *)(v42 + 96) = 1;
  *(_BYTE *)(v42 + 100) = 1;
  System_Object___ctor((Il2CppObject *)v42, 0);
  if ( !v41 )
    sub_1C3E7C0(v43, v44);
  v45 = sub_1C3E6A0(v42, *(_QWORD *)(*(_QWORD *)v41 + 64LL));
  if ( !v45 )
    goto LABEL_26;
  if ( !*(_DWORD *)(v41 + 24) )
    goto LABEL_27;
  *(_QWORD *)(v41 + 32) = v42;
  sub_1C3E508((CGThumbnailListItem_o *)(v41 + 32), v42, v47, v48);
  v49 = sub_1C3E7B0(UICamera_MouseOrTouch_TypeInfo);
  *(_DWORD *)(v49 + 96) = 1;
  *(_BYTE *)(v49 + 100) = 1;
  System_Object___ctor((Il2CppObject *)v49, 0);
  v45 = sub_1C3E6A0(v49, *(_QWORD *)(*(_QWORD *)v41 + 64LL));
  if ( !v45 )
    goto LABEL_26;
  if ( *(_DWORD *)(v41 + 24) <= 1u )
    goto LABEL_27;
  *(_QWORD *)(v41 + 40) = v49;
  sub_1C3E508((CGThumbnailListItem_o *)(v41 + 40), v49, v50, v51);
  v52 = sub_1C3E7B0(UICamera_MouseOrTouch_TypeInfo);
  *(_DWORD *)(v52 + 96) = 1;
  *(_BYTE *)(v52 + 100) = 1;
  System_Object___ctor((Il2CppObject *)v52, 0);
  v45 = sub_1C3E6A0(v52, *(_QWORD *)(*(_QWORD *)v41 + 64LL));
  if ( !v45 )
  {
LABEL_26:
    v81 = sub_1C3E7E4(v45);
    sub_1C3E68C(v81, 0);
  }
  if ( *(_DWORD *)(v41 + 24) <= 2u )
LABEL_27:
    sub_1C3E7C8(v45, v46);
  *(_QWORD *)(v41 + 48) = v52;
  sub_1C3E508((CGThumbnailListItem_o *)(v41 + 48), v52, v53, v54);
  p_mMouse = (CGThumbnailListItem_o *)&UICamera_TypeInfo->static_fields->mMouse;
  p_mMouse->klass = (CGThumbnailListItem_c *)v41;
  sub_1C3E508(p_mMouse, v41, v56, v57);
  v58 = sub_1C3E7B0(UICamera_MouseOrTouch_TypeInfo);
  *(_DWORD *)(v58 + 96) = 1;
  *(_BYTE *)(v58 + 100) = 1;
  System_Object___ctor((Il2CppObject *)v58, 0);
  p_controller = (CGThumbnailListItem_o *)&UICamera_TypeInfo->static_fields->controller;
  p_controller->klass = (CGThumbnailListItem_c *)v58;
  sub_1C3E508(p_controller, v58, v60, v61);
  UICamera_TypeInfo->static_fields->mNextEvent = 0.0;
  v62 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C3E7B0(System_Collections_Generic_Dictionary_int__UICamera_MouseOrTouch__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v62,
    (const MethodInfo_340BA68 *)Method_System_Collections_Generic_Dictionary_int__UICamera_MouseOrTouch___ctor__);
  p_mTouches = (CGThumbnailListItem_o *)&UICamera_TypeInfo->static_fields->mTouches;
  p_mTouches->klass = (CGThumbnailListItem_c *)v62;
  sub_1C3E508(p_mTouches, (int32_t)v62, v64, v65);
  v66 = UICamera_TypeInfo->static_fields;
  v66->mHit.fields.go = 0;
  *(_OWORD *)&v66->mHit.fields.hit.fields.m_Distance = 0u;
  *(_OWORD *)&v66->mHit.fields.point.fields.x = 0u;
  *(_OWORD *)&v66->mHit.fields.depth = 0u;
  *(_OWORD *)&v66->mHit.fields.hit.fields.m_Normal.fields.x = 0u;
  *(_QWORD *)&v66->mWidth = 0;
  v66->isDragging = 0;
  v67 = (BetterList_UICamera_DepthEntry__o *)sub_1C3E7B0(BetterList_UICamera_DepthEntry__TypeInfo);
  BetterList_UICamera_DepthEntry____ctor(
    v67,
    (const MethodInfo_33323F8 *)Method_BetterList_UICamera_DepthEntry___ctor__);
  p_mHits = (CGThumbnailListItem_o *)&UICamera_TypeInfo->static_fields->mHits;
  p_mHits->klass = (CGThumbnailListItem_c *)v67;
  sub_1C3E508(p_mHits, (int32_t)v67, v69, v70);
  if ( !byte_4C53574 )
  {
    sub_1C3E564(&UnityEngine_Vector3_TypeInfo);
    byte_4C53574 = 1;
  }
  v72 = UnityEngine_Vector3_TypeInfo->static_fields;
  v73.n64_u64[0] = *(unsigned __int64 *)&v72->backVector.fields.x;
  v74 = v72->backVector.fields.z;
  if ( !byte_4C506A4 )
  {
    sub_1C3E564(&System_Math_TypeInfo);
    byte_4C506A4 = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v71.n64_f32[0] = sqrtf((float)(v74 * v74) + vaddv_f32(vmul_f32(v73, v73)));
  if ( v71.n64_f32[0] <= 0.00001 )
  {
    if ( !byte_4C506A1 )
    {
      sub_1C3E564(&UnityEngine_Vector3_TypeInfo);
      byte_4C506A1 = 1;
    }
    v77 = UnityEngine_Vector3_TypeInfo->static_fields;
    v75 = *(_QWORD *)&v77->zeroVector.fields.x;
    v76 = v77->zeroVector.fields.z;
  }
  else
  {
    v75 = vdiv_f32(v73, vdup_lane_s32(v71, 0)).n64_u64[0];
    v76 = v74 / v71.n64_f32[0];
  }
  v78 = UICamera_TypeInfo;
  v79 = UICamera_TypeInfo->static_fields;
  *(_QWORD *)&v79->m2DPlane.fields.m_Normal.fields.x = v75;
  v79->m2DPlane.fields.m_Normal.fields.z = v76;
  v79->m2DPlane.fields.m_Distance = 0.0;
  v80 = v78->static_fields;
  v80->mNotifying = 0;
  v80->mUsingTouchEvents = 1;
}


void UICamera___ctor(UICamera_o *this, const MethodInfo *method)
{
  int32_t v3; // w1
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  int32_t v6; // w1
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  int32_t v9; // w1
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  if ( (byte_4C5B2E0 & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_15332/*"Vertical"*/);
    sub_1C3E564(&StringLiteral_7347/*"Horizontal"*/);
    sub_1C3E564(&StringLiteral_9167/*"Mouse ScrollWheel"*/);
    byte_4C5B2E0 = 1;
  }
  this->fields.eventType = 1;
  this->fields.eventReceiverMask = UnityEngine_LayerMask__op_Implicit_71324360(-1, 0);
  *(_DWORD *)&this->fields.useMouse = 16843009;
  *(_WORD *)&this->fields.useController = 257;
  *(_OWORD *)&this->fields.tooltipDelay = xmmword_C12330;
  *(_QWORD *)&this->fields.touchClickThreshold = 0xBF80000042200000LL;
  v3 = StringLiteral_9167/*"Mouse ScrollWheel"*/;
  this->fields.scrollAxisName = (struct System_String_o *)StringLiteral_9167/*"Mouse ScrollWheel"*/;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.scrollAxisName, v3, v4, v5);
  v6 = StringLiteral_15332/*"Vertical"*/;
  this->fields.verticalAxisName = (struct System_String_o *)StringLiteral_15332/*"Vertical"*/;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.verticalAxisName, v6, v7, v8);
  v9 = StringLiteral_7347/*"Horizontal"*/;
  this->fields.horizontalAxisName = (struct System_String_o *)StringLiteral_7347/*"Horizontal"*/;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.horizontalAxisName, v9, v10, v11);
  this->fields.commandClick = 1;
  *(_OWORD *)&this->fields.submitKey0 = xmmword_C12340;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void UICamera__Awake(UICamera_o *this, const MethodInfo *method)
{
  int32_t width; // w0
  UICamera_c *v4; // x8
  int32_t v5; // w20
  __int64 v6; // x1
  UICamera_c *v7; // x0
  struct UICamera_MouseOrTouch_array *mMouse; // x8
  UICamera_MouseOrTouch_o *v9; // x19
  __int64 i; // x19
  struct UICamera_StaticFields *static_fields; // x9
  struct UICamera_MouseOrTouch_array *v12; // x8
  unsigned __int64 max_length_low; // x10
  UICamera_MouseOrTouch_o *v14; // x10
  struct UnityEngine_Vector2_o *v15; // x8
  struct UICamera_MouseOrTouch_array *v16; // x8
  UICamera_MouseOrTouch_o *v17; // x9
  struct UnityEngine_Vector2_o *v18; // x8
  struct UnityEngine_Vector2_o *v19; // x8
  UnityEngine_Vector3_o mousePosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C5B2D1 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Application_TypeInfo);
    sub_1C3E564(&UICamera_TypeInfo);
    byte_4C5B2D1 = 1;
  }
  width = UnityEngine_Screen__get_width(0);
  v4 = UICamera_TypeInfo;
  v5 = width;
  if ( !UICamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    v4 = UICamera_TypeInfo;
  }
  v4->static_fields->mWidth = v5;
  UICamera_TypeInfo->static_fields->mHeight = UnityEngine_Screen__get_height(0);
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
  if ( UnityEngine_Application__get_platform(0) == 11 )
    goto LABEL_11;
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
  if ( UnityEngine_Application__get_platform(0) == 8 )
  {
LABEL_11:
    *(_WORD *)&this->fields.useMouse = 256;
    *(_WORD *)&this->fields.useKeyboard = 0;
  }
  v7 = UICamera_TypeInfo;
  if ( !UICamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    v7 = UICamera_TypeInfo;
  }
  mMouse = v7->static_fields->mMouse;
  if ( !mMouse )
    goto LABEL_33;
  if ( !LODWORD(mMouse->max_length) )
    goto LABEL_34;
  v9 = mMouse->m_Items[0];
  mousePosition = UnityEngine_Input__get_mousePosition(0);
  if ( !v9 )
    goto LABEL_33;
  v9->fields.pos.fields.x = mousePosition.fields.x;
  v9->fields.pos.fields.y = mousePosition.fields.y;
  v7 = UICamera_TypeInfo;
  for ( i = 5; ; ++i )
  {
    if ( !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      v7 = UICamera_TypeInfo;
    }
    static_fields = v7->static_fields;
    v12 = static_fields->mMouse;
    if ( !v12 )
      goto LABEL_33;
    max_length_low = LODWORD(v12->max_length);
    if ( i == 7 )
      break;
    if ( i - 4 >= max_length_low )
      goto LABEL_34;
    v14 = v12->m_Items[0];
    if ( !v14 )
      goto LABEL_33;
    v15 = (struct UnityEngine_Vector2_o *)*((_QWORD *)&v12->obj.klass + i);
    if ( !v15 )
      goto LABEL_33;
    v15[2] = v14->fields.pos;
    v16 = v7->static_fields->mMouse;
    if ( !v16 )
      goto LABEL_33;
    if ( i - 4 >= (unsigned __int64)LODWORD(v16->max_length) )
      goto LABEL_34;
    v17 = v16->m_Items[0];
    if ( !v17 )
      goto LABEL_33;
    v18 = (struct UnityEngine_Vector2_o *)*((_QWORD *)&v16->obj.klass + i);
    if ( !v18 )
      goto LABEL_33;
    v18[3] = v17->fields.pos;
  }
  if ( !(_DWORD)max_length_low )
LABEL_34:
    sub_1C3E7C8(v7, v6);
  v19 = (struct UnityEngine_Vector2_o *)v12->m_Items[0];
  if ( !v19 )
LABEL_33:
    sub_1C3E7C0(v7, v6);
  static_fields->lastTouchPosition = v19[2];
}


int32_t UICamera__CompareFunc(UICamera_o *a, UICamera_o *b, const MethodInfo *method)
{
  UICamera_o *v4; // x20
  float depth; // s0
  float v6; // s8
  const MethodInfo *v7; // x1
  float v9; // s8
  const MethodInfo *v10; // x1

  if ( !a )
    goto LABEL_12;
  v4 = a;
  a = (UICamera_o *)UICamera__get_cachedCamera(a, (const MethodInfo *)b);
  if ( !a )
    goto LABEL_12;
  depth = UnityEngine_Camera__get_depth((UnityEngine_Camera_o *)a, 0);
  if ( !b )
    goto LABEL_12;
  v6 = depth;
  a = (UICamera_o *)UICamera__get_cachedCamera(b, (const MethodInfo *)b);
  if ( !a )
    goto LABEL_12;
  if ( v6 < UnityEngine_Camera__get_depth((UnityEngine_Camera_o *)a, 0) )
    return 1;
  a = (UICamera_o *)UICamera__get_cachedCamera(v4, v7);
  if ( !a
    || (v9 = UnityEngine_Camera__get_depth((UnityEngine_Camera_o *)a, 0),
        (a = (UICamera_o *)UICamera__get_cachedCamera(b, v10)) == 0) )
  {
LABEL_12:
    sub_1C3E7C0(a, b);
  }
  if ( v9 <= UnityEngine_Camera__get_depth((UnityEngine_Camera_o *)a, 0) )
    return 0;
  else
    return -1;
}


void UICamera__ExecuteLateUpdate(UICamera_o *this, const MethodInfo *method)
{
  int32_t width; // w19
  int32_t height; // w20
  UICamera_c *v5; // x8
  struct UICamera_StaticFields *static_fields; // x9
  struct UICamera_StaticFields *v7; // x8
  struct UICamera_OnScreenResize_o *onScreenResize; // x8
  __int64 v9; // x0
  __int64 v10; // x1

  if ( (byte_4C5B2D6 & 1) == 0 )
  {
    sub_1C3E564(&UICamera_TypeInfo);
    sub_1C3E564(&UIRoot_TypeInfo);
    sub_1C3E564(&StringLiteral_15190/*"UpdateAnchors"*/);
    byte_4C5B2D6 = 1;
  }
  if ( UICamera__get_handlesEvents(this, method) )
  {
    width = UnityEngine_Screen__get_width(0);
    height = UnityEngine_Screen__get_height(0);
    v5 = UICamera_TypeInfo;
    if ( !UICamera_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
      v5 = UICamera_TypeInfo;
    }
    static_fields = v5->static_fields;
    if ( width != static_fields->mWidth )
      goto LABEL_22;
    if ( !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      v5 = UICamera_TypeInfo;
      static_fields = UICamera_TypeInfo->static_fields;
    }
    if ( height != static_fields->mHeight )
    {
LABEL_22:
      if ( !v5->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v5);
        v5 = UICamera_TypeInfo;
      }
      v7 = v5->static_fields;
      v7->mWidth = width;
      v7->mHeight = height;
      if ( !UIRoot_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UIRoot_TypeInfo);
      UIRoot__Broadcast((System_String_o *)StringLiteral_15190/*"UpdateAnchors"*/, 0);
      onScreenResize = UICamera_TypeInfo->static_fields->onScreenResize;
      if ( onScreenResize )
      {
        if ( !UICamera_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
          onScreenResize = UICamera_TypeInfo->static_fields->onScreenResize;
          if ( !onScreenResize )
            sub_1C3E7C0(v9, v10);
        }
        ((void (__fastcall *)(intptr_t, intptr_t))onScreenResize->fields.invoke_impl)(
          onScreenResize->fields.method_code,
          onScreenResize->fields.method);
      }
    }
  }
}


void UICamera__ExecuteUpdate(UICamera_o *this, const MethodInfo *method)
{
  int32_t v3; // w2
  const MethodInfo *v4; // x3
  UICamera_c *v5; // x0
  struct UICamera_StaticFields *static_fields; // x0
  const MethodInfo *v7; // x1
  UICamera_c *v8; // x0
  struct UICamera_OnCustomInput_o *onCustomInput; // x8
  char *v10; // x0
  const MethodInfo *v11; // x1
  UICamera_c *v12; // x0
  UnityEngine_Object_o *mCurrentSelection; // x20
  __int64 v14; // x8
  UICamera_c *v15; // x0
  struct UICamera_StaticFields *v16; // x8
  int32_t cancelKey0; // w9
  __int64 v18; // x8
  UICamera_c *v19; // x0
  UICamera_c *v20; // x0
  UnityEngine_Object_o *v21; // x20
  bool v22; // w0
  __int64 v23; // x2
  const MethodInfo *v24; // x3
  UICamera_c *v25; // x8
  bool v26; // w20
  struct UICamera_StaticFields *v27; // x8
  UnityEngine_Object_o *v28; // x20
  UICamera_c *v29; // x0
  UICamera_c *v30; // x0
  struct UICamera_StaticFields *v31; // x8
  UICamera_c *v32; // x0
  UnityEngine_Object_o *v33; // x20
  const MethodInfo *v34; // x1
  UICamera_c *v35; // x0
  UnityEngine_Object_o *mHover; // x20
  __int64 v37; // x8
  __int64 v38; // x4
  __int64 v39; // x5
  __int64 v40; // x6
  __int64 v41; // x7
  long double v42; // q0
  UICamera_c *v43; // x0
  long double v44; // q8
  struct UICamera_StaticFields *v45; // x9
  struct UICamera_FloatDelegate_o *onScroll; // x8
  UnityEngine_GameObject_o *v47; // x20
  Il2CppObject *v48; // x0
  const MethodInfo *v49; // x3
  UICamera_c *v50; // x0
  float mTooltipTime; // s8
  __int64 v52; // x8
  __int64 v53; // x8
  UICamera_c *v54; // x0
  struct UnityEngine_GameObject_o *v55; // x1
  int32_t v56; // w2
  const MethodInfo *v57; // x3
  __int64 v58; // x8
  __int64 v59; // x1
  const MethodInfo *v60; // x2
  UICamera_c *v61; // x0
  struct UICamera_StaticFields *v62; // x0
  int v63; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C5B2D5 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&float_TypeInfo);
    sub_1C3E564(&UICamera_TypeInfo);
    sub_1C3E564(&StringLiteral_9953/*"OnScroll"*/);
    byte_4C5B2D5 = 1;
  }
  if ( UICamera__get_handlesEvents(this, method) )
  {
    v5 = UICamera_TypeInfo;
    if ( !UICamera_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
      v5 = UICamera_TypeInfo;
    }
    static_fields = v5->static_fields;
    static_fields->current = this;
    sub_1C3E508((CGThumbnailListItem_o *)&static_fields->current, (int32_t)this, v3, v4);
    if ( this->fields.useTouch )
    {
      UICamera__ProcessTouches(this, v7);
    }
    else if ( this->fields.useMouse )
    {
      UICamera__ProcessMouse(this, v7);
    }
    v8 = UICamera_TypeInfo;
    if ( !UICamera_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
      v8 = UICamera_TypeInfo;
    }
    onCustomInput = v8->static_fields->onCustomInput;
    if ( onCustomInput )
    {
      if ( !v8->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v8);
        onCustomInput = UICamera_TypeInfo->static_fields->onCustomInput;
        if ( !onCustomInput )
          goto LABEL_107;
      }
      ((void (__fastcall *)(intptr_t, intptr_t))onCustomInput->fields.invoke_impl)(
        onCustomInput->fields.method_code,
        onCustomInput->fields.method);
    }
    if ( this->fields.useMouse )
    {
      v12 = UICamera_TypeInfo;
      if ( !UICamera_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
        v12 = UICamera_TypeInfo;
      }
      mCurrentSelection = (UnityEngine_Object_o *)v12->static_fields->mCurrentSelection;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(mCurrentSelection, 0, 0) )
      {
        if ( !this->fields.cancelKey0 )
          goto LABEL_34;
        v10 = (char *)UICamera_TypeInfo;
        if ( !UICamera_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
          v10 = (char *)UICamera_TypeInfo;
        }
        v14 = *(_QWORD *)(*((_QWORD *)v10 + 23) + 8LL);
        if ( !v14 )
          goto LABEL_107;
        if ( ((*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(v14 + 24))(
                *(_QWORD *)(v14 + 64),
                (unsigned int)this->fields.cancelKey0,
                *(_QWORD *)(v14 + 40))
            & 1) != 0 )
        {
          v15 = UICamera_TypeInfo;
          if ( !UICamera_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
            v15 = UICamera_TypeInfo;
          }
          v16 = v15->static_fields;
          v16->currentScheme = 2;
          cancelKey0 = this->fields.cancelKey0;
        }
        else
        {
LABEL_34:
          if ( !this->fields.cancelKey1 )
            goto LABEL_39;
          v10 = (char *)UICamera_TypeInfo;
          if ( !UICamera_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
            v10 = (char *)UICamera_TypeInfo;
          }
          v18 = *(_QWORD *)(*((_QWORD *)v10 + 23) + 8LL);
          if ( !v18 )
            goto LABEL_107;
          if ( ((*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(v18 + 24))(
                  *(_QWORD *)(v18 + 64),
                  (unsigned int)this->fields.cancelKey1,
                  *(_QWORD *)(v18 + 40))
              & 1) == 0 )
            goto LABEL_39;
          v19 = UICamera_TypeInfo;
          if ( !UICamera_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
            v19 = UICamera_TypeInfo;
          }
          v16 = v19->static_fields;
          v16->currentScheme = 2;
          cancelKey0 = this->fields.cancelKey1;
        }
        v16->currentKey = cancelKey0;
        UICamera__set_selectedObject(0, v11);
      }
    }
LABEL_39:
    v20 = UICamera_TypeInfo;
    if ( !UICamera_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
      v20 = UICamera_TypeInfo;
    }
    v21 = (UnityEngine_Object_o *)v20->static_fields->mCurrentSelection;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v22 = UnityEngine_Object__op_Equality(v21, 0, 0);
    v25 = UICamera_TypeInfo;
    v26 = v22;
    if ( !UICamera_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
      v25 = UICamera_TypeInfo;
    }
    v27 = v25->static_fields;
    if ( v26 )
    {
      v27->inputHasFocus = 0;
    }
    else
    {
      v28 = (UnityEngine_Object_o *)v27->mCurrentSelection;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Implicit(v28, 0) )
        goto LABEL_54;
      v29 = UICamera_TypeInfo;
      if ( !UICamera_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
        v29 = UICamera_TypeInfo;
      }
      v10 = (char *)v29->static_fields->mCurrentSelection;
      if ( !v10 )
        goto LABEL_107;
      if ( !UnityEngine_GameObject__get_activeInHierarchy((UnityEngine_GameObject_o *)v10, 0) )
      {
LABEL_54:
        v30 = UICamera_TypeInfo;
        if ( !UICamera_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
          v30 = UICamera_TypeInfo;
        }
        v31 = v30->static_fields;
        v31->inputHasFocus = 0;
        v31->mCurrentSelection = 0;
        sub_1C3E508((CGThumbnailListItem_o *)&v31->mCurrentSelection, 0, v23, v24);
      }
    }
    if ( this->fields.useKeyboard || this->fields.useController )
    {
      v32 = UICamera_TypeInfo;
      if ( !UICamera_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
        v32 = UICamera_TypeInfo;
      }
      v33 = (UnityEngine_Object_o *)v32->static_fields->mCurrentSelection;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v33, 0, 0) )
        UICamera__ProcessOthers(this, v34);
    }
    if ( !this->fields.useMouse )
      goto LABEL_103;
    v35 = UICamera_TypeInfo;
    if ( !UICamera_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
      v35 = UICamera_TypeInfo;
    }
    mHover = (UnityEngine_Object_o *)v35->static_fields->mHover;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(mHover, 0, 0) )
      goto LABEL_103;
    if ( !System_String__IsNullOrEmpty(this->fields.scrollAxisName, 0) )
    {
      v10 = (char *)UICamera_TypeInfo;
      if ( !UICamera_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
        v10 = (char *)UICamera_TypeInfo;
      }
      v37 = *(_QWORD *)(*((_QWORD *)v10 + 23) + 32LL);
      if ( !v37 )
        goto LABEL_107;
      *(float *)&v42 = (*(float (__fastcall **)(_QWORD, struct System_String_o *, _QWORD))(v37 + 24))(
                         *(_QWORD *)(v37 + 64),
                         this->fields.scrollAxisName,
                         *(_QWORD *)(v37 + 40));
      if ( *(float *)&v42 != 0.0 )
      {
        v43 = UICamera_TypeInfo;
        v44 = v42;
        if ( !UICamera_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
          v43 = UICamera_TypeInfo;
        }
        v45 = v43->static_fields;
        onScroll = v45->onScroll;
        if ( onScroll )
        {
          if ( !v43->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v43);
            v45 = UICamera_TypeInfo->static_fields;
            onScroll = v45->onScroll;
            if ( !onScroll )
              goto LABEL_107;
          }
          ((void (__fastcall *)(intptr_t, struct UnityEngine_GameObject_o *, intptr_t, long double))onScroll->fields.invoke_impl)(
            onScroll->fields.method_code,
            v45->mHover,
            onScroll->fields.method,
            v44);
          v43 = UICamera_TypeInfo;
        }
        if ( !v43->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v43);
          v43 = UICamera_TypeInfo;
        }
        v47 = v43->static_fields->mHover;
        v63 = LODWORD(v44);
        v48 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v63, v23, v24, v38, v39, v40, v41);
        UICamera__Notify(v47, (System_String_o *)StringLiteral_9953/*"OnScroll"*/, v48, v49);
      }
    }
    v50 = UICamera_TypeInfo;
    if ( !UICamera_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
      v50 = UICamera_TypeInfo;
    }
    if ( !v50->static_fields->showTooltips )
      goto LABEL_103;
    mTooltipTime = this->fields.mTooltipTime;
    if ( mTooltipTime == 0.0 )
      goto LABEL_103;
    if ( mTooltipTime >= RealTime__get_time(0) )
    {
      v10 = (char *)UICamera_TypeInfo;
      if ( !UICamera_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
        v10 = (char *)UICamera_TypeInfo;
      }
      v52 = *(_QWORD *)(*((_QWORD *)v10 + 23) + 24LL);
      if ( !v52 )
        goto LABEL_107;
      if ( ((*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(v52 + 24))(
              *(_QWORD *)(v52 + 64),
              304,
              *(_QWORD *)(v52 + 40))
          & 1) == 0 )
      {
        v10 = (char *)UICamera_TypeInfo;
        if ( !UICamera_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
          v10 = (char *)UICamera_TypeInfo;
        }
        v53 = *(_QWORD *)(*((_QWORD *)v10 + 23) + 24LL);
        if ( !v53 )
          goto LABEL_107;
        if ( ((*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(v53 + 24))(
                *(_QWORD *)(v53 + 64),
                303,
                *(_QWORD *)(v53 + 40))
            & 1) == 0 )
        {
LABEL_103:
          v61 = UICamera_TypeInfo;
          if ( !UICamera_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
            v61 = UICamera_TypeInfo;
          }
          v62 = v61->static_fields;
          v62->current = 0;
          sub_1C3E508((CGThumbnailListItem_o *)&v62->current, 0, v23, v24);
          UICamera_TypeInfo->static_fields->currentTouchID = -100;
          return;
        }
      }
    }
    v54 = UICamera_TypeInfo;
    if ( !UICamera_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
      v54 = UICamera_TypeInfo;
    }
    v55 = v54->static_fields->mHover;
    this->fields.mTooltip = v55;
    sub_1C3E508((CGThumbnailListItem_o *)&this->fields.mTooltip, (int32_t)v55, v23, v24);
    v10 = (char *)UICamera_TypeInfo->static_fields;
    v58 = *((_QWORD *)v10 + 40);
    if ( v58 )
    {
      if ( !*(_DWORD *)(v58 + 24) )
        sub_1C3E7C8(v10, v11);
      v59 = *(_QWORD *)(v58 + 32);
      *((_QWORD *)v10 + 20) = v59;
      sub_1C3E508((CGThumbnailListItem_o *)(v10 + 160), v59, v56, v57);
      UICamera_TypeInfo->static_fields->currentTouchID = -1;
      UICamera__ShowTooltip(this, 1, v60);
      goto LABEL_103;
    }
LABEL_107:
    sub_1C3E7C0(v10, v11);
  }
}


UICamera_o *UICamera__FindCameraForLayer(int32_t layer, const MethodInfo *method)
{
  char v2; // w19
  int32_t v3; // w21
  int v4; // w24
  UICamera_c *v5; // x0
  struct BetterList_UICamera__o *list; // x8
  struct UICamera_array *buffer; // x8
  Il2CppClass **v8; // x8
  UICamera_o *v9; // x19
  UnityEngine_Object_o *cachedCamera; // x20

  v2 = layer;
  if ( (byte_4C5B2C9 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&UICamera_TypeInfo);
    byte_4C5B2C9 = 1;
  }
  v3 = 0;
  v4 = 1 << v2;
  while ( 1 )
  {
    v5 = UICamera_TypeInfo;
    if ( !UICamera_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
      v5 = UICamera_TypeInfo;
    }
    list = v5->static_fields->list;
    if ( !list )
LABEL_21:
      sub_1C3E7C0(v5, method);
    if ( v3 >= list->fields.size )
      return 0;
    if ( !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      list = UICamera_TypeInfo->static_fields->list;
      if ( !list )
        goto LABEL_21;
    }
    buffer = list->fields.buffer;
    if ( !buffer )
      goto LABEL_21;
    if ( (unsigned int)v3 >= LODWORD(buffer->max_length) )
      sub_1C3E7C8(v5, method);
    v8 = &buffer->obj.klass + v3;
    v9 = (UICamera_o *)v8[4];
    if ( !v9 )
      goto LABEL_21;
    cachedCamera = (UnityEngine_Object_o *)UICamera__get_cachedCamera((UICamera_o *)v8[4], method);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v5 = (UICamera_c *)UnityEngine_Object__op_Inequality(cachedCamera, 0, 0);
    if ( ((unsigned __int8)v5 & 1) != 0 )
    {
      if ( !cachedCamera )
        goto LABEL_21;
      if ( (UnityEngine_Camera__get_cullingMask((UnityEngine_Camera_o *)cachedCamera, 0) & v4) != 0 )
        return v9;
    }
    ++v3;
  }
}


UnityEngine_Rigidbody_o *UICamera__FindRootRigidbody(UnityEngine_Transform_o *trans, const MethodInfo *method)
{
  _BOOL8 v3; // x0
  __int64 v4; // x1
  Il2CppObject *Component_object; // x20
  Il2CppObject *v6; // x20

  if ( (byte_4C5B2C3 & 1) == 0 )
  {
    sub_1C3E564(&Method_UnityEngine_Component_GetComponent_Rigidbody___);
    sub_1C3E564(&Method_UnityEngine_Component_GetComponent_UIPanel___);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C5B2C3 = 1;
  }
  while ( 1 )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v3 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)trans, 0, 0);
    if ( !v3 )
      break;
    if ( !trans )
      sub_1C3E7C0(v3, v4);
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)trans,
                         (const MethodInfo_30F0240 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0) )
      break;
    v6 = UnityEngine_Component__GetComponent_object_(
           (UnityEngine_Component_o *)trans,
           (const MethodInfo_30F0240 *)Method_UnityEngine_Component_GetComponent_Rigidbody___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v6, 0, 0) )
      return (UnityEngine_Rigidbody_o *)v6;
    trans = UnityEngine_Transform__get_parent(trans, 0);
  }
  return 0;
}


UnityEngine_Rigidbody2D_o *UICamera__FindRootRigidbody2D(UnityEngine_Transform_o *trans, const MethodInfo *method)
{
  _BOOL8 v3; // x0
  __int64 v4; // x1
  Il2CppObject *Component_object; // x20
  Il2CppObject *v6; // x20

  if ( (byte_4C5B2C4 & 1) == 0 )
  {
    sub_1C3E564(&Method_UnityEngine_Component_GetComponent_Rigidbody2D___);
    sub_1C3E564(&Method_UnityEngine_Component_GetComponent_UIPanel___);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C5B2C4 = 1;
  }
  while ( 1 )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v3 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)trans, 0, 0);
    if ( !v3 )
      break;
    if ( !trans )
      sub_1C3E7C0(v3, v4);
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)trans,
                         (const MethodInfo_30F0240 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0) )
      break;
    v6 = UnityEngine_Component__GetComponent_object_(
           (UnityEngine_Component_o *)trans,
           (const MethodInfo_30F0240 *)Method_UnityEngine_Component_GetComponent_Rigidbody2D___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v6, 0, 0) )
      return (UnityEngine_Rigidbody2D_o *)v6;
    trans = UnityEngine_Transform__get_parent(trans, 0);
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
int32_t UICamera__GetDirection(int32_t up, int32_t down, const MethodInfo *method)
{
  UICamera_c *v5; // x0
  struct UICamera_GetKeyStateFunc_o *GetKeyDown; // x8
  struct UICamera_GetKeyStateFunc_o *v8; // x8

  if ( (byte_4C5B2CA & 1) == 0 )
  {
    sub_1C3E564(&UICamera_TypeInfo);
    byte_4C5B2CA = 1;
  }
  v5 = UICamera_TypeInfo;
  if ( !UICamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    v5 = UICamera_TypeInfo;
  }
  GetKeyDown = v5->static_fields->GetKeyDown;
  if ( !GetKeyDown )
    goto LABEL_12;
  if ( (((__int64 (__fastcall *)(intptr_t, _QWORD, intptr_t))GetKeyDown->fields.invoke_impl)(
          GetKeyDown->fields.method_code,
          (unsigned int)up,
          GetKeyDown->fields.method)
      & 1) != 0 )
    return 1;
  v5 = UICamera_TypeInfo;
  if ( !UICamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    v5 = UICamera_TypeInfo;
  }
  v8 = v5->static_fields->GetKeyDown;
  if ( !v8 )
LABEL_12:
    sub_1C3E7C0(v5, *(_QWORD *)&down);
  return (int)(((unsigned int (__fastcall *)(intptr_t, _QWORD, intptr_t))v8->fields.invoke_impl)(
                 v8->fields.method_code,
                 (unsigned int)down,
                 v8->fields.method) << 31) >> 31;
}


// local variable allocation has failed, the output may be wrong!
int32_t UICamera__GetDirection_49147596(
        int32_t up0,
        int32_t up1,
        int32_t down0,
        int32_t down1,
        const MethodInfo *method)
{
  UICamera_c *v9; // x0
  struct UICamera_GetKeyStateFunc_o *GetKeyDown; // x8
  struct UICamera_GetKeyStateFunc_o *v11; // x8
  struct UICamera_GetKeyStateFunc_o *v13; // x8
  struct UICamera_GetKeyStateFunc_o *v14; // x8

  if ( (byte_4C5B2CB & 1) == 0 )
  {
    sub_1C3E564(&UICamera_TypeInfo);
    byte_4C5B2CB = 1;
  }
  v9 = UICamera_TypeInfo;
  if ( !UICamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    v9 = UICamera_TypeInfo;
  }
  GetKeyDown = v9->static_fields->GetKeyDown;
  if ( !GetKeyDown )
    goto LABEL_21;
  if ( (((__int64 (__fastcall *)(intptr_t, _QWORD, intptr_t, _QWORD, const MethodInfo *))GetKeyDown->fields.invoke_impl)(
          GetKeyDown->fields.method_code,
          (unsigned int)up0,
          GetKeyDown->fields.method,
          *(_QWORD *)&down1,
          method)
      & 1) != 0 )
    return 1;
  v9 = UICamera_TypeInfo;
  if ( !UICamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    v9 = UICamera_TypeInfo;
  }
  v11 = v9->static_fields->GetKeyDown;
  if ( !v11 )
    goto LABEL_21;
  if ( (((__int64 (__fastcall *)(intptr_t, _QWORD, intptr_t))v11->fields.invoke_impl)(
          v11->fields.method_code,
          (unsigned int)up1,
          v11->fields.method)
      & 1) != 0 )
    return 1;
  v9 = UICamera_TypeInfo;
  if ( !UICamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    v9 = UICamera_TypeInfo;
  }
  v13 = v9->static_fields->GetKeyDown;
  if ( !v13 )
    goto LABEL_21;
  if ( (((__int64 (__fastcall *)(intptr_t, _QWORD, intptr_t))v13->fields.invoke_impl)(
          v13->fields.method_code,
          (unsigned int)down0,
          v13->fields.method)
      & 1) != 0 )
    return -1;
  v9 = UICamera_TypeInfo;
  if ( !UICamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    v9 = UICamera_TypeInfo;
  }
  v14 = v9->static_fields->GetKeyDown;
  if ( !v14 )
LABEL_21:
    sub_1C3E7C0(v9, *(_QWORD *)&up1);
  return (int)(((unsigned int (__fastcall *)(intptr_t, _QWORD, intptr_t))v14->fields.invoke_impl)(
                 v14->fields.method_code,
                 (unsigned int)down1,
                 v14->fields.method) << 31) >> 31;
}


int32_t UICamera__GetDirection_49147932(System_String_o *axis, const MethodInfo *method)
{
  float time; // s0
  UICamera_c *v4; // x0
  float v5; // s8
  __int64 v6; // x1
  int32_t result; // w0
  UICamera_c *v8; // x0
  struct UICamera_GetAxisFunc_o *GetAxis; // x8
  float v10; // s0
  UICamera_c *v11; // x0
  struct UICamera_StaticFields *static_fields; // x8
  float v13; // s0
  UICamera_c *v14; // x0

  if ( (byte_4C5B2CC & 1) == 0 )
  {
    sub_1C3E564(&UICamera_TypeInfo);
    byte_4C5B2CC = 1;
  }
  time = RealTime__get_time(0);
  v4 = UICamera_TypeInfo;
  v5 = time;
  if ( !UICamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    v4 = UICamera_TypeInfo;
  }
  if ( v4->static_fields->mNextEvent >= v5 || System_String__IsNullOrEmpty(axis, 0) )
    return 0;
  v8 = UICamera_TypeInfo;
  if ( !UICamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    v8 = UICamera_TypeInfo;
  }
  GetAxis = v8->static_fields->GetAxis;
  if ( !GetAxis )
    sub_1C3E7C0(v8, v6);
  v10 = ((float (__fastcall *)(intptr_t, System_String_o *, intptr_t))GetAxis->fields.invoke_impl)(
          GetAxis->fields.method_code,
          axis,
          GetAxis->fields.method);
  if ( v10 <= 0.75 )
  {
    if ( v10 >= -0.75 )
      return 0;
    v14 = UICamera_TypeInfo;
    if ( !UICamera_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
      v14 = UICamera_TypeInfo;
    }
    static_fields = v14->static_fields;
    v13 = v5 + 0.25;
    result = -1;
  }
  else
  {
    v11 = UICamera_TypeInfo;
    if ( !UICamera_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
      v11 = UICamera_TypeInfo;
    }
    static_fields = v11->static_fields;
    v13 = v5 + 0.25;
    result = 1;
  }
  static_fields->mNextEvent = v13;
  return result;
}


UICamera_MouseOrTouch_o *UICamera__GetMouse(int32_t button, const MethodInfo *method)
{
  UICamera_c *v3; // x0
  struct UICamera_MouseOrTouch_array *mMouse; // x8

  if ( (byte_4C5B2CE & 1) == 0 )
  {
    sub_1C3E564(&UICamera_TypeInfo);
    byte_4C5B2CE = 1;
  }
  v3 = UICamera_TypeInfo;
  if ( !UICamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    v3 = UICamera_TypeInfo;
  }
  mMouse = v3->static_fields->mMouse;
  if ( !mMouse )
    sub_1C3E7C0(v3, method);
  if ( LODWORD(mMouse->max_length) <= button )
    sub_1C3E7C8(v3, method);
  return mMouse->m_Items[button];
}


UICamera_MouseOrTouch_o *UICamera__GetTouch(int32_t id, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__object__o *mTouches; // x0
  __int64 v4; // x20
  UICamera_c *v5; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C5B2CF & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_int__UICamera_MouseOrTouch__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_int__UICamera_MouseOrTouch__TryGetValue__);
    sub_1C3E564(&UICamera_MouseOrTouch_TypeInfo);
    sub_1C3E564(&UICamera_TypeInfo);
    byte_4C5B2CF = 1;
  }
  value = 0;
  if ( UICamera_TypeInfo->_2.cctor_finished )
  {
    if ( (id & 0x80000000) == 0 )
      goto LABEL_5;
  }
  else
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    if ( (id & 0x80000000) == 0 )
    {
LABEL_5:
      mTouches = (System_Collections_Generic_Dictionary_int__object__o *)UICamera_TypeInfo->static_fields->mTouches;
      if ( mTouches )
      {
        if ( System_Collections_Generic_Dictionary_int__object___TryGetValue(
               mTouches,
               id,
               &value,
               (const MethodInfo_340DBC8 *)Method_System_Collections_Generic_Dictionary_int__UICamera_MouseOrTouch__TryGetValue__) )
        {
          return (UICamera_MouseOrTouch_o *)value;
        }
        v4 = sub_1C3E7B0(UICamera_MouseOrTouch_TypeInfo);
        *(_DWORD *)(v4 + 96) = 1;
        *(_BYTE *)(v4 + 100) = 1;
        System_Object___ctor((Il2CppObject *)v4, 0);
        value = (Il2CppObject *)v4;
        *(float *)(v4 + 88) = RealTime__get_time(0);
        if ( value )
        {
          BYTE4(value[6].klass) = 1;
          v5 = UICamera_TypeInfo;
          if ( !UICamera_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
            v5 = UICamera_TypeInfo;
          }
          mTouches = (System_Collections_Generic_Dictionary_int__object__o *)v5->static_fields->mTouches;
          if ( mTouches )
          {
            System_Collections_Generic_Dictionary_int__object___Add(
              mTouches,
              id,
              value,
              (const MethodInfo_340C43C *)Method_System_Collections_Generic_Dictionary_int__UICamera_MouseOrTouch__Add__);
            return (UICamera_MouseOrTouch_o *)value;
          }
        }
      }
      sub_1C3E7C0(mTouches, method);
    }
  }
  return UICamera__GetMouse(~id, method);
}


bool UICamera__IsHighlighted(UnityEngine_GameObject_o *go, const MethodInfo *method)
{
  UICamera_c *v3; // x0
  struct UICamera_StaticFields *static_fields; // x8
  UnityEngine_Object_o *hoveredObject; // x20
  UnityEngine_Object_c *v6; // x0
  int32_t currentScheme; // w21

  if ( (byte_4C5B2C8 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&UICamera_TypeInfo);
    byte_4C5B2C8 = 1;
  }
  v3 = UICamera_TypeInfo;
  if ( UICamera_TypeInfo->_2.cctor_finished )
  {
    static_fields = UICamera_TypeInfo->static_fields;
    if ( static_fields->currentScheme )
      goto LABEL_5;
LABEL_12:
    hoveredObject = (UnityEngine_Object_o *)static_fields->hoveredObject;
    v6 = UnityEngine_Object_TypeInfo;
    if ( UnityEngine_Object_TypeInfo->_2.cctor_finished )
      return UnityEngine_Object__op_Equality(hoveredObject, (UnityEngine_Object_o *)go, 0);
LABEL_13:
    j_il2cpp_runtime_class_init_0(v6);
    return UnityEngine_Object__op_Equality(hoveredObject, (UnityEngine_Object_o *)go, 0);
  }
  j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
  v3 = UICamera_TypeInfo;
  static_fields = UICamera_TypeInfo->static_fields;
  currentScheme = static_fields->currentScheme;
  if ( UICamera_TypeInfo->_2.cctor_finished )
  {
    if ( !currentScheme )
      goto LABEL_12;
  }
  else
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    v3 = UICamera_TypeInfo;
    static_fields = UICamera_TypeInfo->static_fields;
    if ( !currentScheme )
      goto LABEL_12;
  }
LABEL_5:
  if ( static_fields->currentScheme == 2 )
  {
    if ( !v3->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v3);
    hoveredObject = (UnityEngine_Object_o *)UICamera__get_selectedObject((const MethodInfo *)v3);
    if ( UnityEngine_Object_TypeInfo->_2.cctor_finished )
      return UnityEngine_Object__op_Equality(hoveredObject, (UnityEngine_Object_o *)go, 0);
    v6 = UnityEngine_Object_TypeInfo;
    goto LABEL_13;
  }
  return 0;
}


bool UICamera__IsInputIgnore(UICamera_o *this, const MethodInfo *method)
{
  return this->fields.ignoreCount > 0;
}


bool UICamera__IsPressed(UnityEngine_GameObject_o *go, const MethodInfo *method)
{
  unsigned __int64 v3; // x25
  System_Collections_Generic_Dictionary_int__object__o *key; // x0
  struct System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *entries; // x8
  __int64 v6; // x8
  __int64 v7; // x8
  UnityEngine_Object_o *v8; // x20
  _BOOL8 v9; // x0
  __int64 v10; // x1
  UnityEngine_Object_o *monitor; // x20
  Il2CppObject *value; // x8
  UnityEngine_Object_o *v14; // x20
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v16; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v17; // [xsp+30h] [xbp-70h] BYREF

  if ( (byte_4C5B2BE & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_int__UICamera_MouseOrTouch__GetEnumerator__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_Enumerator_int__UICamera_MouseOrTouch__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_Enumerator_int__UICamera_MouseOrTouch__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_Enumerator_int__UICamera_MouseOrTouch__get_Current__);
    sub_1C3E564(&Method_System_Collections_Generic_KeyValuePair_int__UICamera_MouseOrTouch__get_Value__);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&UICamera_TypeInfo);
    byte_4C5B2BE = 1;
  }
  v3 = 0;
  memset(&v17, 0, sizeof(v17));
  while ( 1 )
  {
    key = (System_Collections_Generic_Dictionary_int__object__o *)UICamera_TypeInfo;
    if ( !UICamera_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
      key = (System_Collections_Generic_Dictionary_int__object__o *)UICamera_TypeInfo;
    }
    entries = key[2].fields._entries;
    if ( v3 == 3 )
      break;
    v6 = *(_QWORD *)&entries->m_Items[12].fields.hashCode;
    if ( !v6 )
      goto LABEL_30;
    if ( v3 >= *(unsigned int *)(v6 + 24) )
      sub_1C3E7C8(key, method);
    v7 = *(_QWORD *)(v6 + 8 * v3 + 32);
    if ( !v7 )
      goto LABEL_30;
    v8 = *(UnityEngine_Object_o **)(v7 + 72);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    ++v3;
    if ( UnityEngine_Object__op_Equality(v8, (UnityEngine_Object_o *)go, 0) )
      return 1;
  }
  key = (System_Collections_Generic_Dictionary_int__object__o *)entries->m_Items[13].fields.key;
  if ( !key )
    goto LABEL_30;
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v16,
    key,
    (const MethodInfo_340C874 *)Method_System_Collections_Generic_Dictionary_int__UICamera_MouseOrTouch__GetEnumerator__);
  v17 = v16;
  while ( 1 )
  {
    v9 = System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
           &v17,
           (const MethodInfo_3563834 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__UICamera_MouseOrTouch__MoveNext__);
    if ( !v9 )
      break;
    if ( !v17.fields._current.fields.value )
      sub_1C3E7C0(v9, v10);
    monitor = (UnityEngine_Object_o *)v17.fields._current.fields.value[4].monitor;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(monitor, (UnityEngine_Object_o *)go, 0) )
    {
      System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
        &v17,
        (const MethodInfo_3563958 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__UICamera_MouseOrTouch__Dispose__);
      return 1;
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v17,
    (const MethodInfo_3563958 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__UICamera_MouseOrTouch__Dispose__);
  key = (System_Collections_Generic_Dictionary_int__object__o *)UICamera_TypeInfo;
  if ( !UICamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    key = (System_Collections_Generic_Dictionary_int__object__o *)UICamera_TypeInfo;
  }
  value = key[2].fields._entries->m_Items[12].fields.value;
  if ( !value )
LABEL_30:
    sub_1C3E7C0(key, method);
  v14 = (UnityEngine_Object_o *)value[4].monitor;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  return UnityEngine_Object__op_Equality(v14, (UnityEngine_Object_o *)go, 0);
}


bool UICamera__IsVisible(UnityEngine_Vector3_o worldPoint, UnityEngine_GameObject_o *go, const MethodInfo *method)
{
  float z; // s8
  float y; // s9
  float x; // s10
  UnityEngine_Object_o *i; // x19
  _BOOL8 v8; // x0
  const MethodInfo *v9; // x1
  bool v10; // w20
  UnityEngine_Vector3_o v12; // 0:s0.4,4:s1.4,8:s2.4

  z = worldPoint.fields.z;
  y = worldPoint.fields.y;
  x = worldPoint.fields.x;
  if ( (byte_4C5B2C6 & 1) == 0 )
  {
    sub_1C3E564(&Method_NGUITools_FindInParents_UIPanel___);
    sub_1C3E564(&NGUITools_TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C5B2C6 = 1;
  }
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  for ( i = (UnityEngine_Object_o *)NGUITools__FindInParents_object_(
                                      go,
                                      (const MethodInfo_3183E10 *)Method_NGUITools_FindInParents_UIPanel___);
        ;
        i = (UnityEngine_Object_o *)i[16].klass )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v8 = UnityEngine_Object__op_Inequality(i, 0, 0);
    v10 = v8;
    if ( !v8 )
      break;
    if ( !i )
      sub_1C3E7C0(v8, v9);
    v12.fields.x = x;
    v12.fields.y = y;
    v12.fields.z = z;
    if ( !UIPanel__IsVisible_49146956((UIPanel_o *)i, v12, v9) )
      break;
  }
  return !v10;
}


bool UICamera__IsVisible_49146472(UICamera_DepthEntry_o *de, const MethodInfo *method)
{
  UnityEngine_GameObject_o *go; // x20
  UnityEngine_Object_o *i; // x20
  _BOOL8 v5; // x0
  const MethodInfo *v6; // x1
  bool v7; // w21

  if ( (byte_4C5B2C7 & 1) == 0 )
  {
    sub_1C3E564(&Method_NGUITools_FindInParents_UIPanel___);
    sub_1C3E564(&NGUITools_TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C5B2C7 = 1;
  }
  go = de->fields.go;
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  for ( i = (UnityEngine_Object_o *)NGUITools__FindInParents_object_(
                                      go,
                                      (const MethodInfo_3183E10 *)Method_NGUITools_FindInParents_UIPanel___);
        ;
        i = (UnityEngine_Object_o *)i[16].klass )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v5 = UnityEngine_Object__op_Inequality(i, 0, 0);
    v7 = v5;
    if ( !v5 )
      break;
    if ( !i )
      sub_1C3E7C0(v5, v6);
    if ( !UIPanel__IsVisible_49146956((UIPanel_o *)i, de->fields.point, v6) )
      break;
  }
  return !v7;
}


void UICamera__LateUpdate(UICamera_o *this, const MethodInfo *method)
{
  if ( this->fields.ignoreCount <= 0 )
    UICamera__ExecuteLateUpdate(this, method);
}


void UICamera__Notify(
        UnityEngine_GameObject_o *go,
        System_String_o *funcName,
        Il2CppObject *obj,
        const MethodInfo *method)
{
  UICamera_c *v7; // x0
  __int64 v8; // x1
  UnityEngine_GameObject_o *v9; // x0
  UnityEngine_Object_o *mGenericHandler; // x22
  UICamera_c *v11; // x0
  UnityEngine_Object_o *v12; // x22
  UICamera_c *v13; // x0
  UICamera_c *v14; // x0

  if ( (byte_4C5B2CD & 1) == 0 )
  {
    sub_1C3E564(&NGUITools_TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&UICamera_TypeInfo);
    byte_4C5B2CD = 1;
  }
  v7 = UICamera_TypeInfo;
  if ( !UICamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    v7 = UICamera_TypeInfo;
  }
  if ( v7->static_fields->mNotifying <= 10 )
  {
    if ( !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    if ( NGUITools__GetActive_49418336(go, 0) )
    {
      v9 = (UnityEngine_GameObject_o *)UICamera_TypeInfo;
      if ( !UICamera_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
        v9 = (UnityEngine_GameObject_o *)UICamera_TypeInfo;
      }
      ++*(_DWORD *)(v9[7].fields.m_CachedPtr + 480);
      if ( go )
      {
        UnityEngine_GameObject__SendMessage_71322356(go, funcName, obj, 1, 0);
        mGenericHandler = (UnityEngine_Object_o *)UICamera_TypeInfo->static_fields->mGenericHandler;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( !UnityEngine_Object__op_Inequality(mGenericHandler, 0, 0) )
          goto LABEL_24;
        v11 = UICamera_TypeInfo;
        if ( !UICamera_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
          v11 = UICamera_TypeInfo;
        }
        v12 = (UnityEngine_Object_o *)v11->static_fields->mGenericHandler;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( !UnityEngine_Object__op_Inequality(v12, (UnityEngine_Object_o *)go, 0) )
          goto LABEL_24;
        v13 = UICamera_TypeInfo;
        if ( !UICamera_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
          v13 = UICamera_TypeInfo;
        }
        v9 = v13->static_fields->mGenericHandler;
        if ( v9 )
        {
          UnityEngine_GameObject__SendMessage_71322356(v9, funcName, obj, 1, 0);
LABEL_24:
          v14 = UICamera_TypeInfo;
          if ( !UICamera_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
            v14 = UICamera_TypeInfo;
          }
          --v14->static_fields->mNotifying;
          return;
        }
      }
      sub_1C3E7C0(v9, v8);
    }
  }
}


void UICamera__OnApplicationFocus(UICamera_o *this, bool hasFocus, const MethodInfo *method)
{
  this->fields.ignoreCount = 5;
}


void UICamera__OnApplicationPause(UICamera_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  UICamera_c *v5; // x0
  struct UICamera_MouseOrTouch_o *currentTouch; // x20
  BetterList_int__o *v7; // x21
  UICamera_c *v8; // x0
  char *mTouches; // x0
  Il2CppObject *value; // x22
  int32_t key; // w26
  UnityEngine_Object_o *monitor; // x23
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  UICamera_c *v15; // x0
  struct UICamera_StaticFields *static_fields; // x0
  __int64 v17; // x0
  __int64 v18; // x1
  const MethodInfo *v19; // x3
  struct UICamera_StaticFields *v20; // x9
  struct UICamera_MouseOrTouch_o *v21; // x8
  __int64 v22; // x0
  __int64 v23; // x1
  int32_t v24; // w22
  const MethodInfo *v25; // x1
  int32_t Item; // w23
  unsigned int v27; // w22
  int v28; // w23
  __int64 v29; // x8
  __int64 v30; // x8
  UnityEngine_Object_o *v31; // x21
  UICamera_c *v32; // x0
  __int64 v33; // x8
  __int64 v34; // x1
  const MethodInfo *v35; // x3
  struct UICamera_StaticFields *v36; // x9
  struct UICamera_MouseOrTouch_o *v37; // x8
  __int64 v38; // x8
  UnityEngine_Object_o *v39; // x21
  UICamera_c *v40; // x0
  struct UICamera_StaticFields *v41; // x0
  struct UICamera_MouseOrTouch_o *controller; // x1
  int32_t v43; // w2
  const MethodInfo *v44; // x3
  struct UICamera_StaticFields *v45; // x8
  __int64 v46; // x1
  int32_t v47; // w2
  const MethodInfo *v48; // x3
  struct UICamera_StaticFields *v49; // x8
  struct UnityEngine_GameObject_o *mCurrentSelection; // x1
  const MethodInfo *v51; // x3
  struct UICamera_MouseOrTouch_o *v52; // x8
  int32_t v53; // w2
  const MethodInfo *v54; // x3
  UICamera_c *v55; // x0
  struct UICamera_StaticFields *v56; // x0
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v57; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v58; // [xsp+30h] [xbp-90h] BYREF

  if ( (byte_4C5B2DF & 1) == 0 )
  {
    sub_1C3E564(&Method_BetterList_int__Add__);
    sub_1C3E564(&Method_BetterList_int___ctor__);
    sub_1C3E564(&Method_BetterList_int__get_Item__);
    sub_1C3E564(&BetterList_int__TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_int__UICamera_MouseOrTouch__GetEnumerator__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_Enumerator_int__UICamera_MouseOrTouch__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_Enumerator_int__UICamera_MouseOrTouch__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_Enumerator_int__UICamera_MouseOrTouch__get_Current__);
    sub_1C3E564(&Method_System_Collections_Generic_KeyValuePair_int__UICamera_MouseOrTouch__get_Key__);
    sub_1C3E564(&Method_System_Collections_Generic_KeyValuePair_int__UICamera_MouseOrTouch__get_Value__);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&UICamera_TypeInfo);
    byte_4C5B2DF = 1;
  }
  v5 = UICamera_TypeInfo;
  memset(&v58, 0, sizeof(v58));
  if ( !UICamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    v5 = UICamera_TypeInfo;
  }
  currentTouch = v5->static_fields->currentTouch;
  if ( this->fields.useTouch )
  {
    v7 = (BetterList_int__o *)sub_1C3E7B0(BetterList_int__TypeInfo);
    BetterList_int____ctor(v7, (const MethodInfo_332BBF8 *)Method_BetterList_int___ctor__);
    v8 = UICamera_TypeInfo;
    if ( !UICamera_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
      v8 = UICamera_TypeInfo;
    }
    mTouches = (char *)v8->static_fields->mTouches;
    if ( !mTouches )
      goto LABEL_60;
    System_Collections_Generic_Dictionary_int__object___GetEnumerator(
      &v57,
      (System_Collections_Generic_Dictionary_int__object__o *)mTouches,
      (const MethodInfo_340C874 *)Method_System_Collections_Generic_Dictionary_int__UICamera_MouseOrTouch__GetEnumerator__);
    v58 = v57;
    while ( System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
              &v58,
              (const MethodInfo_3563834 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__UICamera_MouseOrTouch__MoveNext__) )
    {
      value = v58.fields._current.fields.value;
      if ( v58.fields._current.fields.value )
      {
        key = (int32_t)v58.fields._current.fields.key;
        monitor = (UnityEngine_Object_o *)v58.fields._current.fields.value[4].monitor;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Implicit(monitor, 0) )
        {
          v15 = UICamera_TypeInfo;
          if ( !UICamera_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
            v15 = UICamera_TypeInfo;
          }
          static_fields = v15->static_fields;
          static_fields->currentTouch = (struct UICamera_MouseOrTouch_o *)value;
          sub_1C3E508((CGThumbnailListItem_o *)&static_fields->currentTouch, (int32_t)value, v13, v14);
          v20 = UICamera_TypeInfo->static_fields;
          v21 = v20->currentTouch;
          v20->currentScheme = 1;
          v20->currentTouchID = key;
          if ( !v21 )
            sub_1C3E7C0(v17, v18);
          v21->fields.clickNotification = 0;
          UICamera__ProcessTouch(this, 0, 1, v19);
          if ( !v7 )
            sub_1C3E7C0(v22, v23);
          BetterList_int___Add(
            v7,
            UICamera_TypeInfo->static_fields->currentTouchID,
            (const MethodInfo_332B598 *)Method_BetterList_int__Add__);
        }
      }
    }
    System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
      &v58,
      (const MethodInfo_3563958 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__UICamera_MouseOrTouch__Dispose__);
    if ( !v7 )
      goto LABEL_60;
    if ( v7->fields.size >= 1 )
    {
      v24 = 0;
      do
      {
        Item = BetterList_int___get_Item(v7, v24, (const MethodInfo_332B394 *)Method_BetterList_int__get_Item__);
        if ( !UICamera_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
        UICamera__RemoveTouch(Item, v25);
        ++v24;
      }
      while ( v24 < v7->fields.size );
    }
  }
  if ( this->fields.useMouse )
  {
    v27 = 0;
    v28 = -1;
    while ( 1 )
    {
      mTouches = (char *)UICamera_TypeInfo;
      if ( !UICamera_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
        mTouches = (char *)UICamera_TypeInfo;
      }
      v29 = *(_QWORD *)(*((_QWORD *)mTouches + 23) + 320LL);
      if ( !v29 )
        break;
      if ( v27 >= *(_DWORD *)(v29 + 24) )
        goto LABEL_61;
      v30 = *(_QWORD *)(v29 + 8LL * (int)v27 + 32);
      if ( !v30 )
        break;
      v31 = *(UnityEngine_Object_o **)(v30 + 72);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Implicit(v31, 0) )
      {
        v32 = UICamera_TypeInfo;
        if ( !UICamera_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
          v32 = UICamera_TypeInfo;
        }
        mTouches = (char *)v32->static_fields;
        v33 = *((_QWORD *)mTouches + 40);
        if ( !v33 )
          break;
        if ( v27 >= *(_DWORD *)(v33 + 24) )
LABEL_61:
          sub_1C3E7C8(mTouches, method);
        v34 = *(_QWORD *)(v33 + 8LL * (int)v27 + 32);
        *((_QWORD *)mTouches + 20) = v34;
        sub_1C3E508((CGThumbnailListItem_o *)(mTouches + 160), v34, v2, v3);
        v36 = UICamera_TypeInfo->static_fields;
        v37 = v36->currentTouch;
        v36->currentTouchID = v28;
        v36->currentKey = v27 + 323;
        v36->currentScheme = 0;
        if ( !v37 )
          break;
        v37->fields.clickNotification = 0;
        UICamera__ProcessTouch(this, 0, 1, v35);
      }
      ++v27;
      --v28;
      if ( v27 == 3 )
        goto LABEL_43;
    }
LABEL_60:
    sub_1C3E7C0(mTouches, method);
  }
LABEL_43:
  if ( this->fields.useController )
  {
    mTouches = (char *)UICamera_TypeInfo;
    if ( !UICamera_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
      mTouches = (char *)UICamera_TypeInfo;
    }
    v38 = *(_QWORD *)(*((_QWORD *)mTouches + 23) + 336LL);
    if ( !v38 )
      goto LABEL_60;
    v39 = *(UnityEngine_Object_o **)(v38 + 72);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Implicit(v39, 0) )
    {
      v40 = UICamera_TypeInfo;
      if ( !UICamera_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
        v40 = UICamera_TypeInfo;
      }
      v41 = v40->static_fields;
      controller = v41->controller;
      v41->currentTouch = controller;
      sub_1C3E508((CGThumbnailListItem_o *)&v41->currentTouch, (int32_t)controller, v2, v3);
      v45 = UICamera_TypeInfo->static_fields;
      mTouches = (char *)v45->currentTouch;
      *(_QWORD *)&v45->currentScheme = 0xFFFFFF9C00000002LL;
      if ( !mTouches )
        goto LABEL_60;
      v46 = *((_QWORD *)mTouches + 8);
      *((_QWORD *)mTouches + 7) = v46;
      sub_1C3E508((CGThumbnailListItem_o *)(mTouches + 56), v46, v43, v44);
      v49 = UICamera_TypeInfo->static_fields;
      mTouches = (char *)v49->currentTouch;
      if ( !mTouches )
        goto LABEL_60;
      mCurrentSelection = v49->mCurrentSelection;
      *((_QWORD *)mTouches + 8) = mCurrentSelection;
      sub_1C3E508((CGThumbnailListItem_o *)(mTouches + 64), (int32_t)mCurrentSelection, v47, v48);
      v52 = UICamera_TypeInfo->static_fields->currentTouch;
      if ( !v52 )
        goto LABEL_60;
      v52->fields.clickNotification = 0;
      UICamera__ProcessTouch(this, 0, 1, v51);
      mTouches = (char *)UICamera_TypeInfo->static_fields->currentTouch;
      if ( !mTouches )
        goto LABEL_60;
      *((_QWORD *)mTouches + 7) = 0;
      sub_1C3E508((CGThumbnailListItem_o *)(mTouches + 56), 0, v53, v54);
    }
  }
  v55 = UICamera_TypeInfo;
  if ( !UICamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    v55 = UICamera_TypeInfo;
  }
  v56 = v55->static_fields;
  v56->currentTouch = currentTouch;
  sub_1C3E508((CGThumbnailListItem_o *)&v56->currentTouch, (int32_t)currentTouch, v2, v3);
}


void UICamera__OnDisable(UICamera_o *this, const MethodInfo *method)
{
  UICamera_c *v3; // x0
  BetterList_T__o *list; // x0

  if ( (byte_4C5B2D3 & 1) == 0 )
  {
    sub_1C3E564(&Method_BetterList_UICamera__Remove__);
    sub_1C3E564(&UICamera_TypeInfo);
    byte_4C5B2D3 = 1;
  }
  v3 = UICamera_TypeInfo;
  if ( !UICamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    v3 = UICamera_TypeInfo;
  }
  list = (BetterList_T__o *)v3->static_fields->list;
  if ( !list )
    sub_1C3E7C0(0, method);
  BetterList_object___Remove(
    list,
    (Il2CppObject *)this,
    (const MethodInfo_332C158 *)Method_BetterList_UICamera__Remove__);
}


void UICamera__OnEnable(UICamera_o *this, const MethodInfo *method)
{
  UICamera_c *v3; // x0
  BetterList_T__o *list; // x0
  BetterList_T__o *v5; // x19
  BetterList_CompareFunc_T__o *v6; // x20

  if ( (byte_4C5B2D2 & 1) == 0 )
  {
    sub_1C3E564(&Method_BetterList_UICamera__Add__);
    sub_1C3E564(&Method_BetterList_UICamera__Sort__);
    sub_1C3E564(&BetterList_CompareFunc_UICamera__TypeInfo);
    sub_1C3E564(&Method_UICamera_CompareFunc__);
    sub_1C3E564(&UICamera_TypeInfo);
    byte_4C5B2D2 = 1;
  }
  v3 = UICamera_TypeInfo;
  if ( !UICamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    v3 = UICamera_TypeInfo;
  }
  list = (BetterList_T__o *)v3->static_fields->list;
  if ( !list
    || (BetterList_object___Add(
          list,
          (Il2CppObject *)this,
          (const MethodInfo_332BEA0 *)Method_BetterList_UICamera__Add__),
        v5 = (BetterList_T__o *)UICamera_TypeInfo->static_fields->list,
        v6 = (BetterList_CompareFunc_T__o *)sub_1C3E7B0(BetterList_CompareFunc_UICamera__TypeInfo),
        BetterList_CompareFunc_object____ctor(v6, 0, Method_UICamera_CompareFunc__, 0),
        !v5) )
  {
    sub_1C3E7C0(list, method);
  }
  BetterList_object___Sort(v5, v6, (const MethodInfo_332C434 *)Method_BetterList_UICamera__Sort__);
}


void UICamera__ProcessFakeTouches(UICamera_o *this, const MethodInfo *method)
{
  bool MouseButtonDown; // w21
  bool MouseButtonUp; // w20
  bool MouseButton; // w0
  const MethodInfo *v6; // x1
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  UICamera_c *v9; // x0
  __int64 static_fields; // x0
  __int64 v11; // x8
  __int64 v12; // x1
  struct UICamera_MouseOrTouch_o *currentTouch; // x22
  _BOOL4 v14; // w21
  float time; // s0
  __int64 v16; // x8
  struct UnityEngine_Vector2_o *v17; // x22
  struct UnityEngine_Vector2_o zeroVector; // d2
  struct UICamera_MouseOrTouch_o *v19; // x8
  __int64 v20; // x8
  __int64 v21; // x8
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  UICamera_c *v24; // x0
  struct UICamera_StaticFields *v25; // x8
  struct UnityEngine_GameObject_o *fallThrough; // x1
  UICamera_c *v27; // x0
  UnityEngine_Object_o *hoveredObject; // x22
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  UICamera_c *v31; // x0
  struct UICamera_StaticFields *v32; // x8
  struct UnityEngine_GameObject_o *mGenericHandler; // x1
  UICamera_c *v34; // x0
  __int64 v35; // x1
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  struct UICamera_StaticFields *v38; // x8
  struct UnityEngine_GameObject_o *v39; // x1
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  struct UICamera_StaticFields *v42; // x8
  struct UICamera_MouseOrTouch_o *v43; // x9
  __int64 v44; // x8
  __int64 v45; // x1
  CGThumbnailListItem_o *v46; // x0
  UnityEngine_Object_o *v47; // x22
  UICamera_c *v48; // x0
  __int64 v49; // x8
  int32_t v50; // w2
  const MethodInfo *v51; // x3
  UICamera_c *v52; // x0
  UICamera_c *v53; // x0
  struct UICamera_StaticFields *v54; // x0
  int32_t v55; // w2
  const MethodInfo *v56; // x3
  float y; // [xsp+0h] [xbp-60h]
  float x; // [xsp+10h] [xbp-50h]
  UnityEngine_Vector3_o mousePosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v60; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C5B2D9 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&UICamera_TypeInfo);
    byte_4C5B2D9 = 1;
  }
  MouseButtonDown = UnityEngine_Input__GetMouseButtonDown(0, 0);
  MouseButtonUp = UnityEngine_Input__GetMouseButtonUp(0, 0);
  MouseButton = UnityEngine_Input__GetMouseButton(0, 0);
  if ( MouseButtonDown || MouseButtonUp || MouseButton )
  {
    v9 = UICamera_TypeInfo;
    if ( !UICamera_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
      v9 = UICamera_TypeInfo;
    }
    static_fields = (__int64)v9->static_fields;
    v11 = *(_QWORD *)(static_fields + 320);
    *(_DWORD *)(static_fields + 148) = 1;
    if ( !v11 )
      goto LABEL_70;
    if ( !*(_DWORD *)(v11 + 24) )
      sub_1C3E7C8(static_fields, v6);
    v12 = *(_QWORD *)(v11 + 32);
    *(_QWORD *)(static_fields + 160) = v12;
    sub_1C3E508((CGThumbnailListItem_o *)(static_fields + 160), v12, v7, v8);
    static_fields = (__int64)UICamera_TypeInfo;
    currentTouch = UICamera_TypeInfo->static_fields->currentTouch;
    if ( !currentTouch )
      goto LABEL_70;
    v14 = MouseButtonDown;
    currentTouch->fields.touchBegan = v14;
    if ( v14 )
    {
      if ( *(_DWORD *)(static_fields + 224) )
      {
        time = RealTime__get_time(0);
      }
      else
      {
        j_il2cpp_runtime_class_init_0(static_fields);
        currentTouch = UICamera_TypeInfo->static_fields->currentTouch;
        time = RealTime__get_time(0);
        if ( !currentTouch )
          goto LABEL_70;
      }
      currentTouch->fields.pressTime = time;
    }
    mousePosition = UnityEngine_Input__get_mousePosition(0);
    static_fields = (__int64)UICamera_TypeInfo;
    y = mousePosition.fields.y;
    x = mousePosition.fields.x;
    if ( !UICamera_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
      mousePosition.fields.y = y;
      mousePosition.fields.x = x;
      static_fields = (__int64)UICamera_TypeInfo;
    }
    v16 = *(_QWORD *)(static_fields + 184);
    v17 = *(struct UnityEngine_Vector2_o **)(v16 + 160);
    if ( v14 )
    {
      if ( !byte_4C5059A )
      {
        static_fields = sub_1C3E564(&UnityEngine_Vector2_TypeInfo);
        mousePosition.fields.y = y;
        mousePosition.fields.x = x;
        byte_4C5059A = 1;
      }
      zeroVector = UnityEngine_Vector2_TypeInfo->static_fields->zeroVector;
    }
    else
    {
      v19 = *(struct UICamera_MouseOrTouch_o **)(v16 + 160);
      if ( !*(_DWORD *)(static_fields + 224) )
      {
        j_il2cpp_runtime_class_init_0(static_fields);
        mousePosition.fields.y = y;
        mousePosition.fields.x = x;
        v19 = UICamera_TypeInfo->static_fields->currentTouch;
      }
      if ( !v19 )
        goto LABEL_70;
      zeroVector = (struct UnityEngine_Vector2_o)vsub_f32(
                                                   *(float32x2_t *)&mousePosition.fields.x,
                                                   (float32x2_t)v19->fields.pos).n64_u64[0];
    }
    if ( !v17 )
      goto LABEL_70;
    v17[4] = zeroVector;
    static_fields = (__int64)UICamera_TypeInfo;
    if ( !UICamera_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
      mousePosition.fields.y = y;
      mousePosition.fields.x = x;
      static_fields = (__int64)UICamera_TypeInfo;
    }
    v20 = *(_QWORD *)(*(_QWORD *)(static_fields + 184) + 160LL);
    if ( !v20 )
      goto LABEL_70;
    *(float *)(v20 + 16) = mousePosition.fields.x;
    *(float *)(v20 + 20) = mousePosition.fields.y;
    v21 = *(_QWORD *)(*(_QWORD *)(static_fields + 184) + 160LL);
    if ( !v21 )
      goto LABEL_70;
    v60.fields.x = *(float *)(v21 + 16);
    v60.fields.y = *(float *)(v21 + 20);
    v60.fields.z = 0.0;
    if ( !UICamera__Raycast(v60, (const MethodInfo *)static_fields) )
    {
      v24 = UICamera_TypeInfo;
      if ( !UICamera_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
        v24 = UICamera_TypeInfo;
      }
      v25 = v24->static_fields;
      fallThrough = v25->fallThrough;
      v25->hoveredObject = fallThrough;
      sub_1C3E508((CGThumbnailListItem_o *)&v25->hoveredObject, (int32_t)fallThrough, v22, v23);
    }
    v27 = UICamera_TypeInfo;
    if ( !UICamera_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
      v27 = UICamera_TypeInfo;
    }
    hoveredObject = (UnityEngine_Object_o *)v27->static_fields->hoveredObject;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(hoveredObject, 0, 0) )
    {
      v31 = UICamera_TypeInfo;
      if ( !UICamera_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
        v31 = UICamera_TypeInfo;
      }
      v32 = v31->static_fields;
      mGenericHandler = v32->mGenericHandler;
      v32->hoveredObject = mGenericHandler;
      sub_1C3E508((CGThumbnailListItem_o *)&v32->hoveredObject, (int32_t)mGenericHandler, v29, v30);
    }
    v34 = UICamera_TypeInfo;
    if ( !UICamera_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
      v34 = UICamera_TypeInfo;
    }
    static_fields = (__int64)v34->static_fields->currentTouch;
    if ( !static_fields )
      goto LABEL_70;
    v35 = *(_QWORD *)(static_fields + 64);
    *(_QWORD *)(static_fields + 56) = v35;
    sub_1C3E508((CGThumbnailListItem_o *)(static_fields + 56), v35, v29, v30);
    v38 = UICamera_TypeInfo->static_fields;
    static_fields = (__int64)v38->currentTouch;
    if ( !static_fields )
      goto LABEL_70;
    v39 = v38->hoveredObject;
    *(_QWORD *)(static_fields + 64) = v39;
    sub_1C3E508((CGThumbnailListItem_o *)(static_fields + 64), (int32_t)v39, v36, v37);
    static_fields = (__int64)UICamera_TypeInfo;
    v42 = UICamera_TypeInfo->static_fields;
    v43 = v42->currentTouch;
    if ( !v43 )
      goto LABEL_70;
    v42->lastTouchPosition = v43->fields.pos;
    if ( !*(_DWORD *)(static_fields + 224) )
    {
      j_il2cpp_runtime_class_init_0(static_fields);
      static_fields = (__int64)UICamera_TypeInfo;
    }
    v44 = *(_QWORD *)(static_fields + 184);
    static_fields = *(_QWORD *)(v44 + 160);
    if ( v14 )
    {
      if ( !static_fields )
        goto LABEL_70;
      v45 = *(_QWORD *)(v44 + 136);
      *(_QWORD *)(static_fields + 48) = v45;
      v46 = (CGThumbnailListItem_o *)(static_fields + 48);
    }
    else
    {
      if ( !static_fields )
        goto LABEL_70;
      v47 = *(UnityEngine_Object_o **)(static_fields + 72);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Inequality(v47, 0, 0) )
        goto LABEL_62;
      v48 = UICamera_TypeInfo;
      if ( !UICamera_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
        v48 = UICamera_TypeInfo;
      }
      static_fields = (__int64)v48->static_fields;
      v49 = *(_QWORD *)(static_fields + 160);
      if ( !v49 )
        goto LABEL_70;
      v45 = *(_QWORD *)(v49 + 48);
      *(_QWORD *)(static_fields + 136) = v45;
      v46 = (CGThumbnailListItem_o *)(static_fields + 136);
    }
    sub_1C3E508(v46, v45, v40, v41);
LABEL_62:
    UICamera__ProcessTouch(this, v14, MouseButtonUp, v41);
    if ( MouseButtonUp )
    {
      v52 = UICamera_TypeInfo;
      if ( !UICamera_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
        v52 = UICamera_TypeInfo;
      }
      UICamera__RemoveTouch(v52->static_fields->currentTouchID, v6);
    }
    v53 = UICamera_TypeInfo;
    if ( !UICamera_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
      v53 = UICamera_TypeInfo;
    }
    static_fields = (__int64)v53->static_fields->currentTouch;
    if ( static_fields )
    {
      *(_QWORD *)(static_fields + 56) = 0;
      sub_1C3E508((CGThumbnailListItem_o *)(static_fields + 56), 0, v50, v51);
      v54 = UICamera_TypeInfo->static_fields;
      v54->currentTouch = 0;
      sub_1C3E508((CGThumbnailListItem_o *)&v54->currentTouch, 0, v55, v56);
      return;
    }
LABEL_70:
    sub_1C3E7C0(static_fields, v6);
  }
}


void UICamera__ProcessMouse(UICamera_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UICamera_MouseOrTouch_o *v4; // x0
  float x; // s8
  float y; // s9
  struct UnityEngine_GameObject_o *dragged; // x8
  struct UnityEngine_GameObject_o *v8; // x8
  void *monitor; // x9
  float32x2_t *v10; // x9
  struct UnityEngine_GameObject_o *v11; // x8
  _DWORD *v12; // x9
  __int64 v13; // x9
  _DWORD *v14; // x8
  __int64 v15; // x8
  float v16; // s11
  __int64 v17; // x20
  _DWORD *v18; // x9
  __int64 v19; // x10
  __int64 v20; // x9
  _DWORD *v21; // x9
  __int64 v22; // x10
  __int64 v23; // x8
  int v24; // w23
  int v25; // w22
  int32_t i; // w20
  UICamera_c *v27; // x0
  float mNextRaycast; // s8
  UICamera_c *v29; // x0
  float v30; // s8
  float v31; // s9
  float z; // s10
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  UICamera_c *v35; // x0
  struct UICamera_StaticFields *static_fields; // x8
  struct UnityEngine_GameObject_o *fallThrough; // x1
  UICamera_c *v38; // x0
  UnityEngine_Object_o *hoveredObject; // x20
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  UICamera_c *v42; // x0
  struct UICamera_StaticFields *v43; // x8
  struct UnityEngine_GameObject_o *mGenericHandler; // x1
  __int64 v45; // x20
  struct UnityEngine_GameObject_o *v46; // x8
  _DWORD *v47; // x9
  struct UnityEngine_GameObject_o *m_CachedPtr; // x1
  _DWORD *v49; // x8
  __int64 v50; // x8
  UnityEngine_Object_o *v51; // x20
  UnityEngine_Object_o *v52; // x21
  _BOOL4 v53; // w0
  int32_t v54; // w2
  const MethodInfo *v55; // x3
  UICamera_c *v56; // x8
  _BOOL4 v57; // w20
  void *v58; // x8
  struct UnityEngine_GameObject_o *v59; // x1
  UICamera_c *v60; // x0
  UnityEngine_Object_o *mTooltip; // x21
  const MethodInfo *v62; // x2
  int v63; // w29
  struct UICamera_StaticFields *v64; // x9
  struct UICamera_MoveDelegate_o *onMouseMove; // x8
  struct UICamera_MouseOrTouch_o *currentTouch; // x9
  struct UICamera_StaticFields *v67; // x0
  int32_t v68; // w2
  const MethodInfo *v69; // x3
  UnityEngine_Object_o *mHover; // x21
  _BOOL4 v71; // w8
  UICamera_c *v72; // x0
  UnityEngine_Object_o *v73; // x21
  const MethodInfo *v74; // x2
  __int64 v75; // x3
  __int64 v76; // x4
  __int64 v77; // x5
  __int64 v78; // x6
  __int64 v79; // x7
  UICamera_c *v80; // x0
  struct UICamera_StaticFields *v81; // x9
  struct UICamera_BoolDelegate_o *onHover; // x8
  UnityEngine_GameObject_o *v83; // x21
  Il2CppObject *v84; // x0
  const MethodInfo *v85; // x3
  CGThumbnailListItem_o *p_mHover; // x0
  int32_t v87; // w2
  const MethodInfo *v88; // x3
  unsigned __int64 v89; // x21
  int v90; // w26
  bool MouseButtonDown; // w22
  bool MouseButtonUp; // w0
  int32_t v93; // w2
  const MethodInfo *v94; // x3
  UICamera_c *v95; // x8
  bool v96; // w23
  _QWORD *v97; // x8
  struct UnityEngine_GameObject_o *v98; // x1
  int32_t v99; // w2
  const MethodInfo *v100; // x3
  UICamera_c *v101; // x0
  struct UICamera_StaticFields *v102; // x8
  struct UnityEngine_Camera_o *currentCamera; // x1
  CGThumbnailListItem_o *p_pressedCam; // x0
  UnityEngine_Object_o *pressed; // x24
  UICamera_c *v106; // x0
  struct UnityEngine_GameObject_o *last; // x8
  int32_t v108; // w2
  const MethodInfo *v109; // x3
  UICamera_c *v110; // x0
  struct UICamera_StaticFields *v111; // x8
  int32_t v112; // w2
  const MethodInfo *v113; // x3
  struct UICamera_StaticFields *v114; // x8
  struct UICamera_MouseOrTouch_array *mMouse; // x9
  UICamera_MouseOrTouch_o *v116; // x9
  struct UnityEngine_GameObject_o *current; // x1
  int32_t v118; // w2
  const MethodInfo *v119; // x3
  void *v120; // x8
  struct UnityEngine_GameObject_o *v121; // x1
  __int64 v122; // x2
  __int64 v123; // x3
  __int64 v124; // x4
  __int64 v125; // x5
  __int64 v126; // x6
  __int64 v127; // x7
  UICamera_c *v128; // x0
  struct UICamera_StaticFields *v129; // x8
  struct UICamera_BoolDelegate_o *v130; // x9
  UnityEngine_GameObject_o *v131; // x19
  Il2CppObject *v132; // x0
  const MethodInfo *v133; // x3
  struct UICamera_StaticFields *v134; // x0
  int32_t v135; // w2
  const MethodInfo *v136; // x3
  struct UICamera_MouseOrTouch_array *v137; // x8
  struct UnityEngine_GameObject_o *v138; // x1
  int32_t v139; // w2
  const MethodInfo *v140; // x3
  __int64 v141; // x19
  _DWORD *v142; // x8
  __int64 v143; // x9
  struct UnityEngine_GameObject_o *v144; // x1
  char v145[4]; // [xsp+8h] [xbp-88h] BYREF
  char v146[4]; // [xsp+Ch] [xbp-84h] BYREF
  UnityEngine_Vector3_o mousePosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v148; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v149; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C5B2D7 & 1) == 0 )
  {
    sub_1C3E564(&bool_TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&UICamera_TypeInfo);
    sub_1C3E564(&StringLiteral_9914/*"OnHover"*/);
    byte_4C5B2D7 = 1;
  }
  mousePosition = UnityEngine_Input__get_mousePosition(0);
  v4 = (UICamera_MouseOrTouch_o *)UICamera_TypeInfo;
  x = mousePosition.fields.x;
  y = mousePosition.fields.y;
  if ( !UICamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    v4 = (UICamera_MouseOrTouch_o *)UICamera_TypeInfo;
  }
  dragged = v4[1].fields.dragged;
  *((float *)&dragged[2].monitor + 1) = x;
  *(float *)&dragged[2].fields.m_CachedPtr = y;
  v8 = v4[1].fields.dragged;
  monitor = v8[13].monitor;
  if ( !monitor )
    goto LABEL_174;
  if ( !*((_DWORD *)monitor + 6) )
    goto LABEL_175;
  v10 = (float32x2_t *)*((_QWORD *)monitor + 4);
  if ( !v10 )
    goto LABEL_174;
  v10[4].n64_u64[0] = vsub_f32(*(float32x2_t *)((char *)&v8[2].monitor + 4), v10[2]).n64_u64[0];
  v11 = v4[1].fields.dragged;
  v12 = v11[13].monitor;
  if ( !v12 )
    goto LABEL_174;
  if ( !v12[6] )
    goto LABEL_175;
  v13 = *((_QWORD *)v12 + 4);
  if ( !v13 )
    goto LABEL_174;
  *(_QWORD *)(v13 + 16) = *(void **)((char *)&v11[2].monitor + 4);
  v14 = v4[1].fields.dragged[13].monitor;
  if ( !v14 )
    goto LABEL_174;
  if ( !v14[6] )
    goto LABEL_175;
  v15 = *((_QWORD *)v14 + 4);
  if ( !v15 )
    goto LABEL_174;
  v16 = (float)(*(float *)(v15 + 32) * *(float *)(v15 + 32)) + (float)(*(float *)(v15 + 36) * *(float *)(v15 + 36));
  v17 = 5;
  do
  {
    if ( !LODWORD(v4[2].fields.pos.fields.x) )
    {
      j_il2cpp_runtime_class_init_0(v4);
      v4 = (UICamera_MouseOrTouch_o *)UICamera_TypeInfo;
    }
    v18 = v4[1].fields.dragged[13].monitor;
    if ( !v18 )
      goto LABEL_174;
    if ( (unsigned int)(v17 - 4) >= v18[6] )
      goto LABEL_175;
    v19 = *((_QWORD *)v18 + 4);
    if ( !v19 )
      goto LABEL_174;
    v20 = *(_QWORD *)&v18[2 * v17];
    if ( !v20 )
      goto LABEL_174;
    *(_QWORD *)(v20 + 16) = *(_QWORD *)(v19 + 16);
    v21 = v4[1].fields.dragged[13].monitor;
    if ( !v21 )
      goto LABEL_174;
    if ( (unsigned int)(v17 - 4) >= v21[6] )
      goto LABEL_175;
    v22 = *((_QWORD *)v21 + 4);
    if ( !v22 )
      goto LABEL_174;
    v23 = *(_QWORD *)&v21[2 * v17];
    if ( !v23 )
      goto LABEL_174;
    ++v17;
    *(_QWORD *)(v23 + 32) = *(_QWORD *)(v22 + 32);
  }
  while ( (_DWORD)v17 != 7 );
  v24 = 0;
  v25 = 0;
  for ( i = 0; i != 3; ++i )
  {
    if ( UnityEngine_Input__GetMouseButtonDown(i, 0) )
    {
      v27 = UICamera_TypeInfo;
      if ( !UICamera_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
        v27 = UICamera_TypeInfo;
      }
      v25 = 1;
    }
    else
    {
      if ( !UnityEngine_Input__GetMouseButton(i, 0) )
        continue;
      v27 = UICamera_TypeInfo;
      if ( !UICamera_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
        v27 = UICamera_TypeInfo;
      }
    }
    v24 = 1;
    v27->static_fields->currentScheme = 0;
  }
  if ( (v16 > 0.001) | v24 & 1 || (mNextRaycast = this->fields.mNextRaycast, mNextRaycast < RealTime__get_time(0)) )
  {
    this->fields.mNextRaycast = RealTime__get_time(0) + 0.02;
    v148 = UnityEngine_Input__get_mousePosition(0);
    v29 = UICamera_TypeInfo;
    v30 = v148.fields.x;
    v31 = v148.fields.y;
    z = v148.fields.z;
    if ( !UICamera_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    v149.fields.x = v30;
    v149.fields.y = v31;
    v149.fields.z = z;
    if ( !UICamera__Raycast(v149, (const MethodInfo *)v29) )
    {
      v35 = UICamera_TypeInfo;
      if ( !UICamera_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
        v35 = UICamera_TypeInfo;
      }
      static_fields = v35->static_fields;
      fallThrough = static_fields->fallThrough;
      static_fields->hoveredObject = fallThrough;
      sub_1C3E508((CGThumbnailListItem_o *)&static_fields->hoveredObject, (int32_t)fallThrough, v33, v34);
    }
    v38 = UICamera_TypeInfo;
    if ( !UICamera_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
      v38 = UICamera_TypeInfo;
    }
    hoveredObject = (UnityEngine_Object_o *)v38->static_fields->hoveredObject;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(hoveredObject, 0, 0) )
    {
      v42 = UICamera_TypeInfo;
      if ( !UICamera_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
        v42 = UICamera_TypeInfo;
      }
      v43 = v42->static_fields;
      mGenericHandler = v43->mGenericHandler;
      v43->hoveredObject = mGenericHandler;
      sub_1C3E508((CGThumbnailListItem_o *)&v43->hoveredObject, (int32_t)mGenericHandler, v40, v41);
    }
    v45 = 0;
    while ( 1 )
    {
      v4 = (UICamera_MouseOrTouch_o *)UICamera_TypeInfo;
      if ( !UICamera_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
        v4 = (UICamera_MouseOrTouch_o *)UICamera_TypeInfo;
      }
      v46 = v4[1].fields.dragged;
      v47 = v46[13].monitor;
      if ( !v47 )
        break;
      if ( (unsigned int)v45 >= v47[6] )
        goto LABEL_175;
      v4 = *(UICamera_MouseOrTouch_o **)&v47[2 * v45 + 8];
      if ( !v4 )
        break;
      m_CachedPtr = (struct UnityEngine_GameObject_o *)v46[15].fields.m_CachedPtr;
      v4->fields.current = m_CachedPtr;
      sub_1C3E508((CGThumbnailListItem_o *)&v4->fields.current, (int32_t)m_CachedPtr, v40, v41);
      if ( (_DWORD)++v45 == 3 )
        goto LABEL_59;
    }
LABEL_174:
    sub_1C3E7C0(v4, v3);
  }
LABEL_59:
  v4 = (UICamera_MouseOrTouch_o *)UICamera_TypeInfo;
  if ( !UICamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    v4 = (UICamera_MouseOrTouch_o *)UICamera_TypeInfo;
  }
  v49 = v4[1].fields.dragged[13].monitor;
  if ( !v49 )
    goto LABEL_174;
  if ( !v49[6] )
    goto LABEL_175;
  v50 = *((_QWORD *)v49 + 4);
  if ( !v50 )
    goto LABEL_174;
  v52 = *(UnityEngine_Object_o **)(v50 + 56);
  v51 = *(UnityEngine_Object_o **)(v50 + 64);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v53 = UnityEngine_Object__op_Inequality(v52, v51, 0);
  v56 = UICamera_TypeInfo;
  v57 = v53;
  if ( v53 )
  {
    if ( !UICamera_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
      v56 = UICamera_TypeInfo;
    }
    v56->static_fields->currentScheme = 0;
  }
  if ( !v56->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v56);
    v56 = UICamera_TypeInfo;
  }
  v4 = (UICamera_MouseOrTouch_o *)v56->static_fields;
  v58 = v4[3].monitor;
  if ( !v58 )
    goto LABEL_174;
  if ( !*((_DWORD *)v58 + 6) )
    goto LABEL_175;
  v59 = (struct UnityEngine_GameObject_o *)*((_QWORD *)v58 + 4);
  v4[1].fields.last = v59;
  sub_1C3E508((CGThumbnailListItem_o *)&v4[1].fields.last, (int32_t)v59, v54, v55);
  v60 = UICamera_TypeInfo;
  UICamera_TypeInfo->static_fields->currentTouchID = -1;
  if ( (v24 & 1) != 0 )
  {
    this->fields.mTooltipTime = 0.0;
    if ( v16 <= 0.001 )
      goto LABEL_94;
    goto LABEL_86;
  }
  if ( v16 <= 0.001 )
  {
    v63 = 1;
    goto LABEL_96;
  }
  if ( !this->fields.stickyTooltip || v57 )
  {
    if ( this->fields.mTooltipTime == 0.0 )
    {
      mTooltip = (UnityEngine_Object_o *)this->fields.mTooltip;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(mTooltip, 0, 0) )
        UICamera__ShowTooltip(this, 0, v62);
    }
    else
    {
      this->fields.mTooltipTime = RealTime__get_time(0) + this->fields.tooltipDelay;
    }
  }
LABEL_86:
  v4 = (UICamera_MouseOrTouch_o *)UICamera_TypeInfo;
  if ( !UICamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    v4 = (UICamera_MouseOrTouch_o *)UICamera_TypeInfo;
  }
  v64 = (struct UICamera_StaticFields *)v4[1].fields.dragged;
  onMouseMove = v64->onMouseMove;
  if ( onMouseMove )
  {
    if ( !LODWORD(v4[2].fields.pos.fields.x) )
    {
      j_il2cpp_runtime_class_init_0(v4);
      v64 = UICamera_TypeInfo->static_fields;
      onMouseMove = v64->onMouseMove;
    }
    currentTouch = v64->currentTouch;
    if ( !currentTouch || !onMouseMove )
      goto LABEL_174;
    ((void (__fastcall *)(intptr_t, intptr_t, float, float))onMouseMove->fields.invoke_impl)(
      onMouseMove->fields.method_code,
      onMouseMove->fields.method,
      currentTouch->fields.delta.fields.x,
      currentTouch->fields.delta.fields.y);
    v67 = UICamera_TypeInfo->static_fields;
    v67->currentTouch = 0;
    sub_1C3E508((CGThumbnailListItem_o *)&v67->currentTouch, 0, v68, v69);
  }
LABEL_94:
  v63 = v24 ^ 1;
  if ( ((v25 | v24 ^ 1) & 1) != 0 )
  {
    v60 = UICamera_TypeInfo;
LABEL_96:
    if ( !v60->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v60);
      v60 = UICamera_TypeInfo;
    }
    mHover = (UnityEngine_Object_o *)v60->static_fields->mHover;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v71 = UnityEngine_Object__op_Inequality(mHover, 0, 0);
  }
  else
  {
    v63 = 0;
    v71 = 0;
  }
  if ( v57 && v71 )
  {
    v72 = UICamera_TypeInfo;
    if ( !UICamera_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
      v72 = UICamera_TypeInfo;
    }
    v72->static_fields->currentScheme = 0;
    v73 = (UnityEngine_Object_o *)this->fields.mTooltip;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v73, 0, 0) )
      UICamera__ShowTooltip(this, 0, v74);
    v80 = UICamera_TypeInfo;
    if ( !UICamera_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
      v80 = UICamera_TypeInfo;
    }
    v81 = v80->static_fields;
    onHover = v81->onHover;
    if ( onHover )
    {
      if ( !v80->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v80);
        v81 = UICamera_TypeInfo->static_fields;
        onHover = v81->onHover;
        if ( !onHover )
          goto LABEL_174;
      }
      ((void (__fastcall *)(intptr_t, struct UnityEngine_GameObject_o *, _QWORD, intptr_t))onHover->fields.invoke_impl)(
        onHover->fields.method_code,
        v81->mHover,
        0,
        onHover->fields.method);
      v80 = UICamera_TypeInfo;
    }
    if ( !v80->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v80);
      v80 = UICamera_TypeInfo;
    }
    v83 = v80->static_fields->mHover;
    v146[0] = 0;
    v84 = (Il2CppObject *)j_il2cpp_value_box_0(bool_TypeInfo, v146, v74, v75, v76, v77, v78, v79);
    UICamera__Notify(v83, (System_String_o *)StringLiteral_9914/*"OnHover"*/, v84, v85);
    p_mHover = (CGThumbnailListItem_o *)&UICamera_TypeInfo->static_fields->mHover;
    p_mHover->klass = 0;
    sub_1C3E508(p_mHover, 0, v87, v88);
  }
  v89 = 0;
  v90 = -1;
  while ( 2 )
  {
    MouseButtonDown = UnityEngine_Input__GetMouseButtonDown(v89, 0);
    MouseButtonUp = UnityEngine_Input__GetMouseButtonUp(v89, 0);
    v95 = UICamera_TypeInfo;
    v96 = MouseButtonUp;
    if ( MouseButtonDown || MouseButtonUp )
    {
      if ( !UICamera_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
        v95 = UICamera_TypeInfo;
      }
      v95->static_fields->currentScheme = 0;
    }
    if ( !v95->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v95);
      v95 = UICamera_TypeInfo;
    }
    v4 = (UICamera_MouseOrTouch_o *)v95->static_fields;
    v97 = v4[3].monitor;
    if ( !v97 )
      goto LABEL_174;
    if ( v89 >= *((unsigned int *)v97 + 6) )
      goto LABEL_175;
    v98 = (struct UnityEngine_GameObject_o *)v97[v89 + 4];
    v4[1].fields.last = v98;
    sub_1C3E508((CGThumbnailListItem_o *)&v4[1].fields.last, (int32_t)v98, v93, v94);
    v101 = UICamera_TypeInfo;
    v102 = UICamera_TypeInfo->static_fields;
    v102->currentTouchID = v90;
    v102->currentKey = v89 + 323;
    if ( !v101->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v101);
      v102 = UICamera_TypeInfo->static_fields;
    }
    v4 = v102->currentTouch;
    if ( MouseButtonDown )
    {
      if ( !v4 )
        goto LABEL_174;
      currentCamera = v102->currentCamera;
      v4->fields.pressedCam = currentCamera;
      p_pressedCam = (CGThumbnailListItem_o *)&v4->fields.pressedCam;
      goto LABEL_141;
    }
    if ( !v4 )
      goto LABEL_174;
    pressed = (UnityEngine_Object_o *)v4->fields.pressed;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(pressed, 0, 0) )
    {
      v106 = UICamera_TypeInfo;
      if ( !UICamera_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
        v106 = UICamera_TypeInfo;
      }
      v4 = (UICamera_MouseOrTouch_o *)v106->static_fields;
      last = v4[1].fields.last;
      if ( !last )
        goto LABEL_174;
      currentCamera = (struct UnityEngine_Camera_o *)last[2].klass;
      v4[1].fields.delta = (struct UnityEngine_Vector2_o)currentCamera;
      p_pressedCam = (CGThumbnailListItem_o *)&v4[1].fields.delta;
LABEL_141:
      sub_1C3E508(p_pressedCam, (int32_t)currentCamera, v99, v100);
    }
    UICamera__ProcessTouch(this, MouseButtonDown, v96, v100);
    v110 = UICamera_TypeInfo;
    if ( !UICamera_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
      v110 = UICamera_TypeInfo;
    }
    v111 = v110->static_fields;
    ++v89;
    --v90;
    v111->currentKey = 0;
    if ( v89 != 3 )
      continue;
    break;
  }
  if ( (v57 & v63 & 1) == 0 )
    goto LABEL_160;
  if ( !v110->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v110);
    v111 = UICamera_TypeInfo->static_fields;
  }
  v111->currentScheme = 0;
  this->fields.mTooltipTime = RealTime__get_time(0) + this->fields.tooltipDelay;
  v114 = UICamera_TypeInfo->static_fields;
  mMouse = v114->mMouse;
  if ( !mMouse )
    goto LABEL_174;
  if ( !LODWORD(mMouse->max_length) )
    goto LABEL_175;
  v116 = mMouse->m_Items[0];
  if ( !v116 )
    goto LABEL_174;
  current = v116->fields.current;
  v114->mHover = current;
  sub_1C3E508((CGThumbnailListItem_o *)&v114->mHover, (int32_t)current, v112, v113);
  v4 = (UICamera_MouseOrTouch_o *)UICamera_TypeInfo->static_fields;
  v120 = v4[3].monitor;
  if ( !v120 )
    goto LABEL_174;
  if ( !*((_DWORD *)v120 + 6) )
    goto LABEL_175;
  v121 = (struct UnityEngine_GameObject_o *)*((_QWORD *)v120 + 4);
  v4[1].fields.last = v121;
  sub_1C3E508((CGThumbnailListItem_o *)&v4[1].fields.last, (int32_t)v121, v118, v119);
  v128 = UICamera_TypeInfo;
  v129 = UICamera_TypeInfo->static_fields;
  v130 = v129->onHover;
  v129->currentTouchID = -1;
  if ( !v130 )
    goto LABEL_157;
  if ( !v128->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v128);
    v129 = UICamera_TypeInfo->static_fields;
    v130 = v129->onHover;
    if ( !v130 )
      goto LABEL_174;
  }
  ((void (__fastcall *)(intptr_t, struct UnityEngine_GameObject_o *, __int64, intptr_t))v130->fields.invoke_impl)(
    v130->fields.method_code,
    v129->mHover,
    1,
    v130->fields.method);
  v128 = UICamera_TypeInfo;
LABEL_157:
  if ( !v128->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v128);
    v128 = UICamera_TypeInfo;
  }
  v131 = v128->static_fields->mHover;
  v145[0] = 1;
  v132 = (Il2CppObject *)j_il2cpp_value_box_0(bool_TypeInfo, v145, v122, v123, v124, v125, v126, v127);
  UICamera__Notify(v131, (System_String_o *)StringLiteral_9914/*"OnHover"*/, v132, v133);
  v110 = UICamera_TypeInfo;
LABEL_160:
  if ( !v110->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v110);
    v110 = UICamera_TypeInfo;
  }
  v134 = v110->static_fields;
  v134->currentTouch = 0;
  sub_1C3E508((CGThumbnailListItem_o *)&v134->currentTouch, 0, v108, v109);
  v137 = UICamera_TypeInfo->static_fields->mMouse;
  if ( !v137 )
    goto LABEL_174;
  if ( !LODWORD(v137->max_length) )
LABEL_175:
    sub_1C3E7C8(v4, v3);
  v4 = v137->m_Items[0];
  if ( !v4 )
    goto LABEL_174;
  v138 = v4->fields.current;
  v4->fields.last = v138;
  sub_1C3E508((CGThumbnailListItem_o *)&v4->fields.last, (int32_t)v138, v135, v136);
  v141 = 5;
  do
  {
    v4 = (UICamera_MouseOrTouch_o *)UICamera_TypeInfo;
    if ( !UICamera_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
      v4 = (UICamera_MouseOrTouch_o *)UICamera_TypeInfo;
    }
    v142 = v4[1].fields.dragged[13].monitor;
    if ( !v142 )
      goto LABEL_174;
    if ( (unsigned int)(v141 - 4) >= v142[6] )
      goto LABEL_175;
    v143 = *((_QWORD *)v142 + 4);
    if ( !v143 )
      goto LABEL_174;
    v4 = *(UICamera_MouseOrTouch_o **)&v142[2 * v141];
    if ( !v4 )
      goto LABEL_174;
    v144 = *(struct UnityEngine_GameObject_o **)(v143 + 56);
    v4->fields.last = v144;
    sub_1C3E508((CGThumbnailListItem_o *)&v4->fields.last, (int32_t)v144, v139, v140);
    ++v141;
  }
  while ( (_DWORD)v141 != 7 );
}


void UICamera__ProcessOthers(UICamera_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  UICamera_c *v5; // x0
  struct UICamera_StaticFields *static_fields; // x0
  struct UICamera_MouseOrTouch_o *controller; // x1
  const MethodInfo *v8; // x1
  const MethodInfo *v9; // x2
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x4
  __int64 v12; // x5
  __int64 v13; // x6
  __int64 v14; // x7
  char *currentTouch; // x0
  __int64 v16; // x8
  UICamera_c *v17; // x0
  int32_t submitKey0; // w20
  _BOOL4 v19; // w20
  __int64 v20; // x8
  UICamera_c *v21; // x0
  int32_t submitKey1; // w20
  __int64 v23; // x8
  UICamera_c *v24; // x0
  int32_t v25; // w21
  int32_t v26; // w21
  __int64 v27; // x8
  UICamera_c *v28; // x0
  struct UICamera_StaticFields *v29; // x8
  __int64 v30; // x1
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  struct UICamera_StaticFields *v33; // x8
  struct UnityEngine_GameObject_o *mCurrentSelection; // x1
  const MethodInfo *v35; // x3
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  int32_t Direction_49147596; // w21
  const MethodInfo *v39; // x2
  int32_t Direction; // w0
  int v41; // w20
  _BOOL4 inputHasFocus; // w20
  const MethodInfo *v43; // x4
  const MethodInfo *v44; // x1
  System_String_o *verticalAxisName; // x22
  System_String_o *horizontalAxisName; // x22
  UICamera_c *v47; // x0
  uint32_t cctor_finished; // w9
  struct UICamera_StaticFields *v49; // x8
  unsigned int v50; // w21
  struct UICamera_KeyCodeDelegate_o *onKey; // x9
  UnityEngine_GameObject_o *v52; // x22
  Il2CppObject *v53; // x0
  const MethodInfo *v54; // x3
  UICamera_c *v55; // x0
  uint32_t v56; // w9
  struct UICamera_StaticFields *v57; // x8
  unsigned int v58; // w20
  struct UICamera_KeyCodeDelegate_o *v59; // x9
  UnityEngine_GameObject_o *v60; // x21
  Il2CppObject *v61; // x0
  const MethodInfo *v62; // x3
  __int64 v63; // x8
  __int64 v64; // x4
  __int64 v65; // x5
  __int64 v66; // x6
  __int64 v67; // x7
  UICamera_c *v68; // x0
  struct UICamera_StaticFields *v69; // x8
  struct UICamera_KeyCodeDelegate_o *v70; // x9
  UnityEngine_GameObject_o *v71; // x20
  Il2CppObject *v72; // x0
  const MethodInfo *v73; // x3
  __int64 v74; // x8
  __int64 v75; // x4
  __int64 v76; // x5
  __int64 v77; // x6
  __int64 v78; // x7
  UICamera_c *v79; // x0
  int32_t cancelKey0; // w20
  struct UICamera_StaticFields *v81; // x8
  struct UICamera_KeyCodeDelegate_o *v82; // x9
  UnityEngine_GameObject_o *v83; // x20
  Il2CppObject *v84; // x0
  const MethodInfo *v85; // x3
  __int64 v86; // x8
  __int64 v87; // x4
  __int64 v88; // x5
  __int64 v89; // x6
  __int64 v90; // x7
  UICamera_c *v91; // x0
  int32_t cancelKey1; // w19
  struct UICamera_StaticFields *v93; // x8
  struct UICamera_KeyCodeDelegate_o *v94; // x9
  UnityEngine_GameObject_o *v95; // x19
  Il2CppObject *v96; // x0
  const MethodInfo *v97; // x3
  UICamera_c *v98; // x0
  struct UICamera_StaticFields *v99; // x0
  int v100; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4C5B2DA & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_KeyCode_TypeInfo);
    sub_1C3E564(&UICamera_TypeInfo);
    sub_1C3E564(&StringLiteral_9919/*"OnKey"*/);
    byte_4C5B2DA = 1;
  }
  v5 = UICamera_TypeInfo;
  if ( !UICamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    v5 = UICamera_TypeInfo;
  }
  static_fields = v5->static_fields;
  controller = static_fields->controller;
  static_fields->currentTouch = controller;
  static_fields = (struct UICamera_StaticFields *)((char *)static_fields + 160);
  HIDWORD(static_fields[-1].GetInputTouchCount) = -100;
  sub_1C3E508((CGThumbnailListItem_o *)static_fields, (int32_t)controller, v2, v3);
  if ( !this->fields.submitKey0 )
    goto LABEL_13;
  currentTouch = (char *)UICamera_TypeInfo;
  if ( !UICamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    currentTouch = (char *)UICamera_TypeInfo;
  }
  v16 = *(_QWORD *)(*((_QWORD *)currentTouch + 23) + 8LL);
  if ( !v16 )
    goto LABEL_142;
  if ( ((*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(v16 + 24))(
          *(_QWORD *)(v16 + 64),
          (unsigned int)this->fields.submitKey0,
          *(_QWORD *)(v16 + 40))
      & 1) != 0 )
  {
    v17 = UICamera_TypeInfo;
    submitKey0 = this->fields.submitKey0;
    if ( !UICamera_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
      v17 = UICamera_TypeInfo;
    }
    v17->static_fields->currentKey = submitKey0;
    v19 = 1;
  }
  else
  {
LABEL_13:
    v19 = 0;
  }
  if ( this->fields.submitKey1 )
  {
    currentTouch = (char *)UICamera_TypeInfo;
    if ( !UICamera_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
      currentTouch = (char *)UICamera_TypeInfo;
    }
    v20 = *(_QWORD *)(*((_QWORD *)currentTouch + 23) + 8LL);
    if ( !v20 )
      goto LABEL_142;
    if ( ((*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(v20 + 24))(
            *(_QWORD *)(v20 + 64),
            (unsigned int)this->fields.submitKey1,
            *(_QWORD *)(v20 + 40))
        & 1) != 0 )
    {
      v21 = UICamera_TypeInfo;
      submitKey1 = this->fields.submitKey1;
      if ( !UICamera_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
        v21 = UICamera_TypeInfo;
      }
      v21->static_fields->currentKey = submitKey1;
      v19 = 1;
    }
  }
  if ( !this->fields.submitKey0 )
    goto LABEL_30;
  currentTouch = (char *)UICamera_TypeInfo;
  if ( !UICamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    currentTouch = (char *)UICamera_TypeInfo;
  }
  v23 = *(_QWORD *)(*((_QWORD *)currentTouch + 23) + 16LL);
  if ( !v23 )
    goto LABEL_142;
  if ( ((*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(v23 + 24))(
          *(_QWORD *)(v23 + 64),
          (unsigned int)this->fields.submitKey0,
          *(_QWORD *)(v23 + 40))
      & 1) != 0 )
  {
    v24 = UICamera_TypeInfo;
    v25 = this->fields.submitKey0;
    if ( !UICamera_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
      v24 = UICamera_TypeInfo;
    }
    v24->static_fields->currentKey = v25;
    v26 = 1;
  }
  else
  {
LABEL_30:
    v26 = 0;
  }
  if ( !this->fields.submitKey1 )
    goto LABEL_39;
  currentTouch = (char *)UICamera_TypeInfo;
  if ( !UICamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    currentTouch = (char *)UICamera_TypeInfo;
  }
  v27 = *(_QWORD *)(*((_QWORD *)currentTouch + 23) + 16LL);
  if ( !v27 )
    goto LABEL_142;
  if ( ((*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(v27 + 24))(
          *(_QWORD *)(v27 + 64),
          (unsigned int)this->fields.submitKey1,
          *(_QWORD *)(v27 + 40))
      & 1) != 0 )
  {
    v28 = UICamera_TypeInfo;
    v26 = this->fields.submitKey1;
    if ( !UICamera_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
      v28 = UICamera_TypeInfo;
    }
    v28->static_fields->currentKey = v26;
    LOBYTE(v26) = 1;
  }
  else
  {
LABEL_39:
    if ( (v19 | v26) != 1 )
      goto LABEL_47;
    v28 = UICamera_TypeInfo;
  }
  if ( !v28->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v28);
    v28 = UICamera_TypeInfo;
  }
  v29 = v28->static_fields;
  currentTouch = (char *)v29->currentTouch;
  v29->currentScheme = 2;
  if ( !currentTouch )
    goto LABEL_142;
  v30 = *((_QWORD *)currentTouch + 8);
  *((_QWORD *)currentTouch + 7) = v30;
  sub_1C3E508((CGThumbnailListItem_o *)(currentTouch + 56), v30, (int32_t)v9, v10);
  v33 = UICamera_TypeInfo->static_fields;
  currentTouch = (char *)v33->currentTouch;
  if ( !currentTouch )
    goto LABEL_142;
  mCurrentSelection = v33->mCurrentSelection;
  *((_QWORD *)currentTouch + 8) = mCurrentSelection;
  sub_1C3E508((CGThumbnailListItem_o *)(currentTouch + 64), (int32_t)mCurrentSelection, v31, v32);
  UICamera__ProcessTouch(this, v19, v26, v35);
  currentTouch = (char *)UICamera_TypeInfo->static_fields->currentTouch;
  if ( !currentTouch )
    goto LABEL_142;
  *((_QWORD *)currentTouch + 7) = 0;
  sub_1C3E508((CGThumbnailListItem_o *)(currentTouch + 56), 0, v36, v37);
LABEL_47:
  if ( !this->fields.useKeyboard )
  {
    v41 = 0;
    Direction_49147596 = 0;
    goto LABEL_56;
  }
  if ( !UICamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    inputHasFocus = UICamera_TypeInfo->static_fields->inputHasFocus;
    if ( UICamera_TypeInfo->_2.cctor_finished )
    {
      if ( UICamera_TypeInfo->static_fields->inputHasFocus )
        goto LABEL_50;
    }
    else
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
      if ( inputHasFocus )
        goto LABEL_50;
    }
LABEL_54:
    Direction_49147596 = UICamera__GetDirection_49147596(119, 273, 115, 274, v11);
    Direction = UICamera__GetDirection_49147596(100, 275, 97, 276, v43);
    goto LABEL_55;
  }
  if ( !UICamera_TypeInfo->static_fields->inputHasFocus )
    goto LABEL_54;
LABEL_50:
  Direction_49147596 = UICamera__GetDirection(273, 274, v9);
  Direction = UICamera__GetDirection(275, 276, v39);
LABEL_55:
  v41 = Direction;
LABEL_56:
  if ( this->fields.useController )
  {
    if ( !System_String__IsNullOrEmpty(this->fields.verticalAxisName, 0) )
    {
      verticalAxisName = this->fields.verticalAxisName;
      if ( !UICamera_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
      Direction_49147596 += UICamera__GetDirection_49147932(verticalAxisName, v44);
    }
    if ( !System_String__IsNullOrEmpty(this->fields.horizontalAxisName, 0) )
    {
      horizontalAxisName = this->fields.horizontalAxisName;
      if ( !UICamera_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
      v41 += UICamera__GetDirection_49147932(horizontalAxisName, v8);
    }
  }
  if ( Direction_49147596 )
  {
    v47 = UICamera_TypeInfo;
    cctor_finished = UICamera_TypeInfo->_2.cctor_finished;
    if ( !cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
      v47 = UICamera_TypeInfo;
      cctor_finished = UICamera_TypeInfo->_2.cctor_finished;
    }
    v49 = v47->static_fields;
    if ( Direction_49147596 > 0 )
      v50 = 273;
    else
      v50 = 274;
    v49->currentScheme = 2;
    if ( !cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v47);
      v47 = UICamera_TypeInfo;
      v49 = UICamera_TypeInfo->static_fields;
    }
    onKey = v49->onKey;
    if ( onKey )
    {
      if ( !v47->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v47);
        v49 = UICamera_TypeInfo->static_fields;
        onKey = v49->onKey;
        if ( !onKey )
          goto LABEL_142;
      }
      ((void (__fastcall *)(intptr_t, struct UnityEngine_GameObject_o *, _QWORD, intptr_t))onKey->fields.invoke_impl)(
        onKey->fields.method_code,
        v49->mCurrentSelection,
        v50,
        onKey->fields.method);
      v47 = UICamera_TypeInfo;
    }
    if ( !v47->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v47);
      v47 = UICamera_TypeInfo;
    }
    v52 = v47->static_fields->mCurrentSelection;
    v100 = v50;
    v53 = (Il2CppObject *)j_il2cpp_value_box_0(UnityEngine_KeyCode_TypeInfo, &v100, v9, v10, v11, v12, v13, v14);
    UICamera__Notify(v52, (System_String_o *)StringLiteral_9919/*"OnKey"*/, v53, v54);
  }
  if ( v41 )
  {
    v55 = UICamera_TypeInfo;
    v56 = UICamera_TypeInfo->_2.cctor_finished;
    if ( !v56 )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
      v55 = UICamera_TypeInfo;
      v56 = UICamera_TypeInfo->_2.cctor_finished;
    }
    v57 = v55->static_fields;
    if ( v41 > 0 )
      v58 = 275;
    else
      v58 = 276;
    v57->currentScheme = 2;
    if ( !v56 )
    {
      j_il2cpp_runtime_class_init_0(v55);
      v55 = UICamera_TypeInfo;
      v57 = UICamera_TypeInfo->static_fields;
    }
    v59 = v57->onKey;
    if ( v59 )
    {
      if ( !v55->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v55);
        v57 = UICamera_TypeInfo->static_fields;
        v59 = v57->onKey;
        if ( !v59 )
          goto LABEL_142;
      }
      ((void (__fastcall *)(intptr_t, struct UnityEngine_GameObject_o *, _QWORD, intptr_t))v59->fields.invoke_impl)(
        v59->fields.method_code,
        v57->mCurrentSelection,
        v58,
        v59->fields.method);
      v55 = UICamera_TypeInfo;
    }
    if ( !v55->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v55);
      v55 = UICamera_TypeInfo;
    }
    v60 = v55->static_fields->mCurrentSelection;
    v100 = v58;
    v61 = (Il2CppObject *)j_il2cpp_value_box_0(UnityEngine_KeyCode_TypeInfo, &v100, v9, v10, v11, v12, v13, v14);
    UICamera__Notify(v60, (System_String_o *)StringLiteral_9919/*"OnKey"*/, v61, v62);
  }
  if ( this->fields.useKeyboard )
  {
    currentTouch = (char *)UICamera_TypeInfo;
    if ( !UICamera_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
      currentTouch = (char *)UICamera_TypeInfo;
    }
    v63 = *(_QWORD *)(*((_QWORD *)currentTouch + 23) + 8LL);
    if ( !v63 )
      goto LABEL_142;
    if ( ((*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(v63 + 24))(
            *(_QWORD *)(v63 + 64),
            9,
            *(_QWORD *)(v63 + 40))
        & 1) != 0 )
    {
      v68 = UICamera_TypeInfo;
      if ( !UICamera_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
        v68 = UICamera_TypeInfo;
      }
      v69 = v68->static_fields;
      v70 = v69->onKey;
      v69->currentKey = 9;
      v69->currentScheme = 2;
      if ( v70 )
      {
        if ( !v68->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v68);
          v69 = UICamera_TypeInfo->static_fields;
          v70 = v69->onKey;
          if ( !v70 )
            goto LABEL_142;
        }
        ((void (__fastcall *)(intptr_t, struct UnityEngine_GameObject_o *, __int64, intptr_t))v70->fields.invoke_impl)(
          v70->fields.method_code,
          v69->mCurrentSelection,
          9,
          v70->fields.method);
        v68 = UICamera_TypeInfo;
      }
      if ( !v68->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v68);
        v68 = UICamera_TypeInfo;
      }
      v71 = v68->static_fields->mCurrentSelection;
      v100 = 9;
      v72 = (Il2CppObject *)j_il2cpp_value_box_0(UnityEngine_KeyCode_TypeInfo, &v100, v9, v10, v64, v65, v66, v67);
      UICamera__Notify(v71, (System_String_o *)StringLiteral_9919/*"OnKey"*/, v72, v73);
    }
  }
  if ( this->fields.cancelKey0 )
  {
    currentTouch = (char *)UICamera_TypeInfo;
    if ( !UICamera_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
      currentTouch = (char *)UICamera_TypeInfo;
    }
    v74 = *(_QWORD *)(*((_QWORD *)currentTouch + 23) + 8LL);
    if ( !v74 )
      goto LABEL_142;
    if ( ((*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(v74 + 24))(
            *(_QWORD *)(v74 + 64),
            (unsigned int)this->fields.cancelKey0,
            *(_QWORD *)(v74 + 40))
        & 1) != 0 )
    {
      v79 = UICamera_TypeInfo;
      cancelKey0 = this->fields.cancelKey0;
      if ( !UICamera_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
        v79 = UICamera_TypeInfo;
      }
      v81 = v79->static_fields;
      v82 = v81->onKey;
      v81->currentKey = cancelKey0;
      v81->currentScheme = 2;
      if ( v82 )
      {
        if ( !v79->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v79);
          v81 = UICamera_TypeInfo->static_fields;
          v82 = v81->onKey;
          if ( !v82 )
            goto LABEL_142;
        }
        ((void (__fastcall *)(intptr_t, struct UnityEngine_GameObject_o *, __int64, intptr_t))v82->fields.invoke_impl)(
          v82->fields.method_code,
          v81->mCurrentSelection,
          27,
          v82->fields.method);
        v79 = UICamera_TypeInfo;
      }
      if ( !v79->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v79);
        v79 = UICamera_TypeInfo;
      }
      v83 = v79->static_fields->mCurrentSelection;
      v100 = 27;
      v84 = (Il2CppObject *)j_il2cpp_value_box_0(UnityEngine_KeyCode_TypeInfo, &v100, v9, v10, v75, v76, v77, v78);
      UICamera__Notify(v83, (System_String_o *)StringLiteral_9919/*"OnKey"*/, v84, v85);
    }
  }
  if ( !this->fields.cancelKey1 )
    goto LABEL_137;
  currentTouch = (char *)UICamera_TypeInfo;
  if ( !UICamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    currentTouch = (char *)UICamera_TypeInfo;
  }
  v86 = *(_QWORD *)(*((_QWORD *)currentTouch + 23) + 8LL);
  if ( !v86 )
LABEL_142:
    sub_1C3E7C0(currentTouch, v8);
  if ( ((*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(v86 + 24))(
          *(_QWORD *)(v86 + 64),
          (unsigned int)this->fields.cancelKey1,
          *(_QWORD *)(v86 + 40))
      & 1) == 0 )
    goto LABEL_137;
  v91 = UICamera_TypeInfo;
  cancelKey1 = this->fields.cancelKey1;
  if ( !UICamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    v91 = UICamera_TypeInfo;
  }
  v93 = v91->static_fields;
  v94 = v93->onKey;
  v93->currentKey = cancelKey1;
  v93->currentScheme = 2;
  if ( v94 )
  {
    if ( v91->_2.cctor_finished
      || (j_il2cpp_runtime_class_init_0(v91), v93 = UICamera_TypeInfo->static_fields, (v94 = v93->onKey) != 0) )
    {
      ((void (__fastcall *)(intptr_t, struct UnityEngine_GameObject_o *, __int64, intptr_t))v94->fields.invoke_impl)(
        v94->fields.method_code,
        v93->mCurrentSelection,
        27,
        v94->fields.method);
      v91 = UICamera_TypeInfo;
      goto LABEL_134;
    }
    goto LABEL_142;
  }
LABEL_134:
  if ( !v91->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v91);
    v91 = UICamera_TypeInfo;
  }
  v95 = v91->static_fields->mCurrentSelection;
  v100 = 27;
  v96 = (Il2CppObject *)j_il2cpp_value_box_0(UnityEngine_KeyCode_TypeInfo, &v100, v9, v10, v87, v88, v89, v90);
  UICamera__Notify(v95, (System_String_o *)StringLiteral_9919/*"OnKey"*/, v96, v97);
LABEL_137:
  v98 = UICamera_TypeInfo;
  if ( !UICamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    v98 = UICamera_TypeInfo;
  }
  v99 = v98->static_fields;
  v99->currentTouch = 0;
  sub_1C3E508((CGThumbnailListItem_o *)&v99->currentTouch, 0, (int32_t)v9, v10);
  UICamera_TypeInfo->static_fields->currentKey = 0;
}


// local variable allocation has failed, the output may be wrong!
void UICamera__ProcessPress(UICamera_o *this, bool pressed, float click, float drag, const MethodInfo *method)
{
  UnityEngine_Object_o *mTooltip; // x20
  const MethodInfo *v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  __int64 v13; // x5
  __int64 v14; // x6
  __int64 v15; // x7
  __int64 v16; // x0
  __int64 v17; // x9
  struct UICamera_MouseOrTouch_o *currentTouch; // x8
  UnityEngine_Object_o *v19; // x20
  __int64 v20; // x9
  __int64 v21; // x8
  __int64 v22; // x9
  __int64 v23; // x8
  UnityEngine_GameObject_o *v24; // x20
  Il2CppObject *v25; // x0
  const MethodInfo *v26; // x3
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  __int64 v29; // x1
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  __int64 v32; // x1
  struct UICamera_MouseOrTouch_o *v33; // x20
  __int64 v34; // x9
  struct UICamera_MouseOrTouch_o *v35; // x8
  UnityEngine_Object_o *v36; // x20
  __int64 v37; // x9
  __int64 v38; // x8
  __int64 v39; // x9
  UnityEngine_Vector2_o *v40; // x8
  __int64 v41; // x2
  __int64 v42; // x3
  __int64 v43; // x4
  __int64 v44; // x5
  __int64 v45; // x6
  __int64 v46; // x7
  struct UICamera_MouseOrTouch_o *v47; // x8
  UnityEngine_GameObject_o *v48; // x20
  Il2CppObject *v49; // x0
  const MethodInfo *v50; // x3
  UnityEngine_Object_o *v51; // x20
  const MethodInfo *v52; // x2
  __int64 v53; // x8
  __int64 v54; // x8
  UnityEngine_Object_o *v55; // x20
  UICamera_c *v56; // x8
  struct UICamera_MouseOrTouch_o *v57; // x9
  UnityEngine_Object_o *last; // x20
  UnityEngine_Object_o *current; // x21
  float32x2_t *v60; // x9
  struct UICamera_MouseOrTouch_o *v61; // x9
  float v62; // s10
  UnityEngine_Object_o *v63; // x20
  UnityEngine_Object_o *v64; // x21
  const MethodInfo *v65; // x3
  struct UICamera_MouseOrTouch_o *v66; // x9
  struct UnityEngine_Vector2_o v67; // x10
  struct UICamera_StaticFields *static_fields; // x10
  struct UICamera_VoidDelegate_o *onDragStart; // x9
  struct UICamera_MouseOrTouch_o *v70; // x8
  struct UICamera_MouseOrTouch_o *v71; // x8
  const MethodInfo *v72; // x3
  struct UICamera_StaticFields *v73; // x9
  struct UICamera_ObjectDelegate_o *onDragOver; // x8
  struct UICamera_MouseOrTouch_o *v75; // x9
  __int64 v76; // x8
  int v77; // w25
  struct UICamera_MouseOrTouch_o *v78; // x9
  struct UnityEngine_Vector2_o totalDelta; // x10
  struct UICamera_MouseOrTouch_o *v80; // x8
  UnityEngine_Object_o *v81; // x20
  const MethodInfo *v82; // x2
  __int64 v83; // x9
  struct UICamera_MouseOrTouch_o *v84; // x8
  _BOOL4 v85; // w21
  const MethodInfo *v86; // x3
  _BOOL4 v87; // w24
  struct UICamera_StaticFields *v88; // x9
  struct UICamera_VoidDelegate_o *v89; // x8
  struct UICamera_MouseOrTouch_o *v90; // x9
  __int64 v91; // x8
  const MethodInfo *v92; // x3
  struct UICamera_StaticFields *v93; // x9
  struct UICamera_ObjectDelegate_o *v94; // x8
  struct UICamera_MouseOrTouch_o *v95; // x9
  __int64 v96; // x8
  struct UICamera_MouseOrTouch_o *v97; // x8
  UnityEngine_Object_o *v98; // x19
  UnityEngine_Object_o *v99; // x20
  __int64 v100; // x2
  const MethodInfo *v101; // x3
  __int64 v102; // x4
  __int64 v103; // x5
  __int64 v104; // x6
  __int64 v105; // x7
  struct UICamera_StaticFields *v106; // x9
  struct UICamera_VoidDelegate_o *v107; // x8
  struct UICamera_MouseOrTouch_o *v108; // x9
  __int64 v109; // x8
  struct UICamera_StaticFields *v110; // x9
  struct UICamera_ObjectDelegate_o *v111; // x8
  struct UICamera_MouseOrTouch_o *v112; // x9
  struct UICamera_StaticFields *v113; // x9
  struct UICamera_VectorDelegate_o *onDrag; // x8
  struct UICamera_MouseOrTouch_o *v115; // x9
  __int64 v116; // x8
  UnityEngine_GameObject_o *v117; // x19
  Il2CppObject *v118; // x0
  const MethodInfo *v119; // x3
  int32_t v120; // w2
  const MethodInfo *v121; // x3
  __int64 v122; // x1
  struct UICamera_StaticFields *v123; // x8
  struct UICamera_MouseOrTouch_o *v124; // x8
  __int64 v125; // [xsp+8h] [xbp-68h] BYREF
  char v126[4]; // [xsp+18h] [xbp-58h] BYREF
  char v127[4]; // [xsp+1Ch] [xbp-54h] BYREF

  if ( (byte_4C5B2DB & 1) == 0 )
  {
    sub_1C3E564(&bool_TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&UICamera_TypeInfo);
    sub_1C3E564(&UnityEngine_Vector2_TypeInfo);
    sub_1C3E564(&StringLiteral_9895/*"OnDragStart"*/);
    sub_1C3E564(&StringLiteral_9891/*"OnDrag"*/);
    sub_1C3E564(&StringLiteral_9945/*"OnPress"*/);
    sub_1C3E564(&StringLiteral_9893/*"OnDragOut"*/);
    sub_1C3E564(&StringLiteral_9894/*"OnDragOver"*/);
    byte_4C5B2DB = 1;
  }
  if ( pressed )
  {
    mTooltip = (UnityEngine_Object_o *)this->fields.mTooltip;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(mTooltip, 0, 0) )
      UICamera__ShowTooltip(this, 0, v10);
    v16 = (__int64)UICamera_TypeInfo;
    if ( !UICamera_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
      v16 = (__int64)UICamera_TypeInfo;
    }
    v17 = *(_QWORD *)(v16 + 184);
    currentTouch = *(struct UICamera_MouseOrTouch_o **)(v17 + 160);
    if ( currentTouch )
    {
      currentTouch->fields.pressStarted = 1;
      if ( *(_QWORD *)(v17 + 216) )
      {
        if ( !*(_DWORD *)(v16 + 224) )
        {
          j_il2cpp_runtime_class_init_0(v16);
          currentTouch = UICamera_TypeInfo->static_fields->currentTouch;
          if ( !currentTouch )
            goto LABEL_196;
        }
        v19 = (UnityEngine_Object_o *)currentTouch->fields.pressed;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Implicit(v19, 0) )
        {
          v16 = (__int64)UICamera_TypeInfo;
          if ( !UICamera_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
            v16 = (__int64)UICamera_TypeInfo;
          }
          v20 = *(_QWORD *)(v16 + 184);
          v21 = *(_QWORD *)(v20 + 160);
          if ( !v21 )
            goto LABEL_196;
          v22 = *(_QWORD *)(v20 + 216);
          if ( !v22 )
            goto LABEL_196;
          (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(v22 + 24))(
            *(_QWORD *)(v22 + 64),
            *(_QWORD *)(v21 + 72),
            0,
            *(_QWORD *)(v22 + 40));
        }
      }
      v16 = (__int64)UICamera_TypeInfo;
      if ( !UICamera_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
        v16 = (__int64)UICamera_TypeInfo;
      }
      v23 = *(_QWORD *)(*(_QWORD *)(v16 + 184) + 160LL);
      if ( v23 )
      {
        v24 = *(UnityEngine_GameObject_o **)(v23 + 72);
        v127[0] = 0;
        v25 = (Il2CppObject *)j_il2cpp_value_box_0(bool_TypeInfo, v127, v10, v11, v12, v13, v14, v15);
        UICamera__Notify(v24, (System_String_o *)StringLiteral_9945/*"OnPress"*/, v25, v26);
        v16 = (__int64)UICamera_TypeInfo->static_fields->currentTouch;
        if ( v16 )
        {
          v29 = *(_QWORD *)(v16 + 64);
          *(_QWORD *)(v16 + 72) = v29;
          sub_1C3E508((CGThumbnailListItem_o *)(v16 + 72), v29, v27, v28);
          v16 = (__int64)UICamera_TypeInfo->static_fields->currentTouch;
          if ( v16 )
          {
            v32 = *(_QWORD *)(v16 + 64);
            *(_QWORD *)(v16 + 80) = v32;
            sub_1C3E508((CGThumbnailListItem_o *)(v16 + 80), v32, v30, v31);
            v16 = (__int64)UICamera_TypeInfo;
            v33 = UICamera_TypeInfo->static_fields->currentTouch;
            if ( v33 )
            {
              v33->fields.clickNotification = 2;
              if ( !byte_4C5059A )
              {
                sub_1C3E564(&UnityEngine_Vector2_TypeInfo);
                v16 = (__int64)UICamera_TypeInfo;
                byte_4C5059A = 1;
              }
              v33->fields.totalDelta = UnityEngine_Vector2_TypeInfo->static_fields->zeroVector;
              v34 = *(_QWORD *)(v16 + 184);
              v35 = *(struct UICamera_MouseOrTouch_o **)(v34 + 160);
              if ( v35 )
              {
                v35->fields.dragStarted = 0;
                if ( *(_QWORD *)(v34 + 216) )
                {
                  if ( !*(_DWORD *)(v16 + 224) )
                  {
                    j_il2cpp_runtime_class_init_0(v16);
                    v35 = UICamera_TypeInfo->static_fields->currentTouch;
                    if ( !v35 )
                      goto LABEL_196;
                  }
                  v36 = (UnityEngine_Object_o *)v35->fields.pressed;
                  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                  if ( UnityEngine_Object__op_Implicit(v36, 0) )
                  {
                    v16 = (__int64)UICamera_TypeInfo;
                    if ( !UICamera_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
                      v16 = (__int64)UICamera_TypeInfo;
                    }
                    v37 = *(_QWORD *)(v16 + 184);
                    v38 = *(_QWORD *)(v37 + 160);
                    if ( !v38 )
                      goto LABEL_196;
                    v39 = *(_QWORD *)(v37 + 216);
                    if ( !v39 )
                      goto LABEL_196;
                    (*(void (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD))(v39 + 24))(
                      *(_QWORD *)(v39 + 64),
                      *(_QWORD *)(v38 + 72),
                      1,
                      *(_QWORD *)(v39 + 40));
                  }
                }
                v16 = (__int64)UICamera_TypeInfo;
                if ( !UICamera_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
                  v16 = (__int64)UICamera_TypeInfo;
                }
                v40 = *(UnityEngine_Vector2_o **)(*(_QWORD *)(v16 + 184) + 160LL);
                if ( v40 )
                {
                  NguiTouchEffectManager__Press(v40[2], (const MethodInfo *)v16);
                  v47 = UICamera_TypeInfo->static_fields->currentTouch;
                  if ( v47 )
                  {
                    v48 = v47->fields.pressed;
                    v126[0] = 1;
                    v49 = (Il2CppObject *)j_il2cpp_value_box_0(bool_TypeInfo, v126, v41, v42, v43, v44, v45, v46);
                    UICamera__Notify(v48, (System_String_o *)StringLiteral_9945/*"OnPress"*/, v49, v50);
                    v51 = (UnityEngine_Object_o *)this->fields.mTooltip;
                    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                    if ( UnityEngine_Object__op_Inequality(v51, 0, 0) )
                      UICamera__ShowTooltip(this, 0, v52);
                    v16 = (__int64)UICamera_TypeInfo;
                    if ( !UICamera_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
                      v16 = (__int64)UICamera_TypeInfo;
                    }
                    v53 = *(_QWORD *)(*(_QWORD *)(v16 + 184) + 160LL);
                    if ( v53 )
                    {
                      UICamera__set_selectedObject(
                        *(UnityEngine_GameObject_o **)(v53 + 72),
                        (const MethodInfo *)pressed);
                      return;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_196:
    sub_1C3E7C0(v16, pressed);
  }
  v16 = (__int64)UICamera_TypeInfo;
  if ( !UICamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    v16 = (__int64)UICamera_TypeInfo;
  }
  v54 = *(_QWORD *)(*(_QWORD *)(v16 + 184) + 160LL);
  if ( !v54 )
    goto LABEL_196;
  v55 = *(UnityEngine_Object_o **)(v54 + 72);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v16 = UnityEngine_Object__op_Inequality(v55, 0, 0);
  if ( (v16 & 1) != 0 )
  {
    v56 = UICamera_TypeInfo;
    if ( !UICamera_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
      v56 = UICamera_TypeInfo;
    }
    v57 = v56->static_fields->currentTouch;
    if ( !v57 )
      goto LABEL_196;
    if ( (float)((float)(v57->fields.delta.fields.x * v57->fields.delta.fields.x)
               + (float)(v57->fields.delta.fields.y * v57->fields.delta.fields.y)) == 0.0 )
    {
      if ( !v56->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v56);
        v57 = UICamera_TypeInfo->static_fields->currentTouch;
        if ( !v57 )
          goto LABEL_196;
      }
      last = (UnityEngine_Object_o *)v57->fields.last;
      current = (UnityEngine_Object_o *)v57->fields.current;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v16 = UnityEngine_Object__op_Inequality(current, last, 0);
      if ( (v16 & 1) == 0 )
        return;
      v56 = UICamera_TypeInfo;
    }
    if ( !v56->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v56);
      v56 = UICamera_TypeInfo;
    }
    v60 = (float32x2_t *)v56->static_fields->currentTouch;
    if ( !v60 )
      goto LABEL_196;
    v60[5].n64_u64[0] = vadd_f32(v60[5], v60[4]).n64_u64[0];
    v61 = v56->static_fields->currentTouch;
    if ( !v61 )
      goto LABEL_196;
    v62 = (float)(v61->fields.totalDelta.fields.x * v61->fields.totalDelta.fields.x)
        + (float)(v61->fields.totalDelta.fields.y * v61->fields.totalDelta.fields.y);
    if ( v61->fields.dragStarted )
      goto LABEL_199;
    if ( !v56->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v56);
      v61 = UICamera_TypeInfo->static_fields->currentTouch;
      if ( !v61 )
        goto LABEL_196;
    }
    v64 = (UnityEngine_Object_o *)v61->fields.last;
    v63 = (UnityEngine_Object_o *)v61->fields.current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v16 = UnityEngine_Object__op_Inequality(v64, v63, 0);
    v56 = UICamera_TypeInfo;
    if ( (v16 & 1) == 0 )
    {
LABEL_199:
      if ( !v56->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v56);
        v56 = UICamera_TypeInfo;
      }
      v78 = v56->static_fields->currentTouch;
      if ( !v78 )
        goto LABEL_196;
      v77 = 0;
      if ( v62 > drag && !v78->fields.dragStarted )
      {
        if ( !v56->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v56);
          v56 = UICamera_TypeInfo;
          v78 = UICamera_TypeInfo->static_fields->currentTouch;
          if ( !v78 )
            goto LABEL_196;
        }
        totalDelta = v78->fields.totalDelta;
        v77 = 1;
        v78->fields.dragStarted = 1;
        v78->fields.delta = totalDelta;
      }
    }
    else
    {
      if ( !UICamera_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
        v56 = UICamera_TypeInfo;
      }
      v66 = v56->static_fields->currentTouch;
      if ( !v66 )
        goto LABEL_196;
      v67 = v66->fields.totalDelta;
      v66->fields.dragStarted = 1;
      v66->fields.delta = v67;
      static_fields = v56->static_fields;
      onDragStart = static_fields->onDragStart;
      static_fields->isDragging = 1;
      if ( onDragStart )
      {
        if ( !v56->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v56);
          static_fields = UICamera_TypeInfo->static_fields;
          onDragStart = static_fields->onDragStart;
        }
        v70 = static_fields->currentTouch;
        if ( !v70 || !onDragStart )
          goto LABEL_196;
        v16 = ((__int64 (__fastcall *)(intptr_t, struct UnityEngine_GameObject_o *, intptr_t))onDragStart->fields.invoke_impl)(
                onDragStart->fields.method_code,
                v70->fields.dragged,
                onDragStart->fields.method);
        v56 = UICamera_TypeInfo;
      }
      if ( !v56->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v56);
        v56 = UICamera_TypeInfo;
      }
      v71 = v56->static_fields->currentTouch;
      if ( !v71 )
        goto LABEL_196;
      UICamera__Notify(v71->fields.dragged, (System_String_o *)StringLiteral_9895/*"OnDragStart"*/, 0, v65);
      v16 = (__int64)UICamera_TypeInfo;
      v73 = UICamera_TypeInfo->static_fields;
      onDragOver = v73->onDragOver;
      if ( onDragOver )
      {
        if ( !UICamera_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
          v73 = UICamera_TypeInfo->static_fields;
          onDragOver = v73->onDragOver;
        }
        v75 = v73->currentTouch;
        if ( !v75 || !onDragOver )
          goto LABEL_196;
        ((void (__fastcall *)(intptr_t, struct UnityEngine_GameObject_o *, struct UnityEngine_GameObject_o *, intptr_t))onDragOver->fields.invoke_impl)(
          onDragOver->fields.method_code,
          v75->fields.last,
          v75->fields.dragged,
          onDragOver->fields.method);
        v16 = (__int64)UICamera_TypeInfo;
      }
      if ( !*(_DWORD *)(v16 + 224) )
      {
        j_il2cpp_runtime_class_init_0(v16);
        v16 = (__int64)UICamera_TypeInfo;
      }
      v76 = *(_QWORD *)(*(_QWORD *)(v16 + 184) + 160LL);
      if ( !v76 )
        goto LABEL_196;
      UICamera__Notify(
        *(UnityEngine_GameObject_o **)(v76 + 56),
        (System_String_o *)StringLiteral_9894/*"OnDragOver"*/,
        *(Il2CppObject **)(v76 + 80),
        v72);
      v56 = UICamera_TypeInfo;
      v77 = 0;
      UICamera_TypeInfo->static_fields->isDragging = 0;
    }
    if ( !v56->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v56);
      v56 = UICamera_TypeInfo;
    }
    v80 = v56->static_fields->currentTouch;
    if ( !v80 )
      goto LABEL_196;
    if ( v80->fields.dragStarted )
    {
      v81 = (UnityEngine_Object_o *)this->fields.mTooltip;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v81, 0, 0) )
        UICamera__ShowTooltip(this, 0, v82);
      v16 = (__int64)UICamera_TypeInfo;
      if ( !UICamera_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
        v16 = (__int64)UICamera_TypeInfo;
      }
      v83 = *(_QWORD *)(v16 + 184);
      v84 = *(struct UICamera_MouseOrTouch_o **)(v83 + 160);
      *(_BYTE *)(v83 + 368) = 1;
      if ( !v84 )
        goto LABEL_196;
      v85 = v84->fields.clickNotification == 0;
      if ( !*(_DWORD *)(v16 + 224) )
      {
        j_il2cpp_runtime_class_init_0(v16);
        v84 = UICamera_TypeInfo->static_fields->currentTouch;
        if ( !v84 )
          goto LABEL_196;
      }
      NguiTouchEffectManager__Drag(v84->fields.delta, (const MethodInfo *)v16);
      v16 = (__int64)UICamera_TypeInfo;
      if ( v77 )
        v87 = 0;
      else
        v87 = v85;
      if ( !UICamera_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
        v16 = (__int64)UICamera_TypeInfo;
      }
      v88 = *(struct UICamera_StaticFields **)(v16 + 184);
      if ( v77 )
      {
        v89 = v88->onDragStart;
        if ( v89 )
        {
          if ( !*(_DWORD *)(v16 + 224) )
          {
            j_il2cpp_runtime_class_init_0(v16);
            v88 = UICamera_TypeInfo->static_fields;
            v89 = v88->onDragStart;
          }
          v90 = v88->currentTouch;
          if ( !v90 || !v89 )
            goto LABEL_196;
          ((void (__fastcall *)(intptr_t, struct UnityEngine_GameObject_o *, intptr_t))v89->fields.invoke_impl)(
            v89->fields.method_code,
            v90->fields.dragged,
            v89->fields.method);
          v16 = (__int64)UICamera_TypeInfo;
        }
        if ( !*(_DWORD *)(v16 + 224) )
        {
          j_il2cpp_runtime_class_init_0(v16);
          v16 = (__int64)UICamera_TypeInfo;
        }
        v91 = *(_QWORD *)(*(_QWORD *)(v16 + 184) + 160LL);
        if ( !v91 )
          goto LABEL_196;
        UICamera__Notify(*(UnityEngine_GameObject_o **)(v91 + 80), (System_String_o *)StringLiteral_9895/*"OnDragStart"*/, 0, v86);
        v16 = (__int64)UICamera_TypeInfo;
        v93 = UICamera_TypeInfo->static_fields;
        v94 = v93->onDragOver;
        if ( v94 )
        {
          if ( !UICamera_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
            v93 = UICamera_TypeInfo->static_fields;
            v94 = v93->onDragOver;
          }
          v95 = v93->currentTouch;
          if ( !v95 || !v94 )
            goto LABEL_196;
          ((void (__fastcall *)(intptr_t, struct UnityEngine_GameObject_o *, struct UnityEngine_GameObject_o *, intptr_t))v94->fields.invoke_impl)(
            v94->fields.method_code,
            v95->fields.last,
            v95->fields.dragged,
            v94->fields.method);
          v16 = (__int64)UICamera_TypeInfo;
        }
        if ( !*(_DWORD *)(v16 + 224) )
        {
          j_il2cpp_runtime_class_init_0(v16);
          v16 = (__int64)UICamera_TypeInfo;
        }
        v96 = *(_QWORD *)(*(_QWORD *)(v16 + 184) + 160LL);
        if ( !v96 )
          goto LABEL_196;
      }
      else
      {
        v97 = v88->currentTouch;
        if ( !v97 )
          goto LABEL_196;
        v99 = (UnityEngine_Object_o *)v97->fields.last;
        v98 = (UnityEngine_Object_o *)v97->fields.current;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( !UnityEngine_Object__op_Inequality(v99, v98, 0) )
          goto LABEL_174;
        v16 = (__int64)UICamera_TypeInfo;
        if ( !UICamera_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
          v16 = (__int64)UICamera_TypeInfo;
        }
        v106 = *(struct UICamera_StaticFields **)(v16 + 184);
        v107 = v106->onDragStart;
        if ( v107 )
        {
          if ( !*(_DWORD *)(v16 + 224) )
          {
            j_il2cpp_runtime_class_init_0(v16);
            v106 = UICamera_TypeInfo->static_fields;
            v107 = v106->onDragStart;
          }
          v108 = v106->currentTouch;
          if ( !v108 || !v107 )
            goto LABEL_196;
          ((void (__fastcall *)(intptr_t, struct UnityEngine_GameObject_o *, intptr_t))v107->fields.invoke_impl)(
            v107->fields.method_code,
            v108->fields.dragged,
            v107->fields.method);
          v16 = (__int64)UICamera_TypeInfo;
        }
        if ( !*(_DWORD *)(v16 + 224) )
        {
          j_il2cpp_runtime_class_init_0(v16);
          v16 = (__int64)UICamera_TypeInfo;
        }
        v109 = *(_QWORD *)(*(_QWORD *)(v16 + 184) + 160LL);
        if ( !v109 )
          goto LABEL_196;
        UICamera__Notify(
          *(UnityEngine_GameObject_o **)(v109 + 56),
          (System_String_o *)StringLiteral_9893/*"OnDragOut"*/,
          *(Il2CppObject **)(v109 + 80),
          v101);
        v16 = (__int64)UICamera_TypeInfo;
        v110 = UICamera_TypeInfo->static_fields;
        v111 = v110->onDragOver;
        if ( v111 )
        {
          if ( !UICamera_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
            v110 = UICamera_TypeInfo->static_fields;
            v111 = v110->onDragOver;
          }
          v112 = v110->currentTouch;
          if ( !v112 || !v111 )
            goto LABEL_196;
          ((void (__fastcall *)(intptr_t, struct UnityEngine_GameObject_o *, struct UnityEngine_GameObject_o *, intptr_t))v111->fields.invoke_impl)(
            v111->fields.method_code,
            v112->fields.last,
            v112->fields.dragged,
            v111->fields.method);
          v16 = (__int64)UICamera_TypeInfo;
        }
        if ( !*(_DWORD *)(v16 + 224) )
        {
          j_il2cpp_runtime_class_init_0(v16);
          v16 = (__int64)UICamera_TypeInfo;
        }
        v96 = *(_QWORD *)(*(_QWORD *)(v16 + 184) + 160LL);
        if ( !v96 )
          goto LABEL_196;
        v85 = v87;
      }
      UICamera__Notify(
        *(UnityEngine_GameObject_o **)(v96 + 64),
        (System_String_o *)StringLiteral_9894/*"OnDragOver"*/,
        *(Il2CppObject **)(v96 + 80),
        v92);
LABEL_174:
      v16 = (__int64)UICamera_TypeInfo;
      if ( !UICamera_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
        v16 = (__int64)UICamera_TypeInfo;
      }
      v113 = *(struct UICamera_StaticFields **)(v16 + 184);
      onDrag = v113->onDrag;
      if ( onDrag )
      {
        if ( !*(_DWORD *)(v16 + 224) )
        {
          j_il2cpp_runtime_class_init_0(v16);
          v113 = UICamera_TypeInfo->static_fields;
          onDrag = v113->onDrag;
        }
        v115 = v113->currentTouch;
        if ( !v115 || !onDrag )
          goto LABEL_196;
        ((void (__fastcall *)(intptr_t, struct UnityEngine_GameObject_o *, intptr_t, float, float))onDrag->fields.invoke_impl)(
          onDrag->fields.method_code,
          v115->fields.dragged,
          onDrag->fields.method,
          v115->fields.delta.fields.x,
          v115->fields.delta.fields.y);
        v16 = (__int64)UICamera_TypeInfo;
      }
      if ( !*(_DWORD *)(v16 + 224) )
      {
        j_il2cpp_runtime_class_init_0(v16);
        v16 = (__int64)UICamera_TypeInfo;
      }
      v116 = *(_QWORD *)(*(_QWORD *)(v16 + 184) + 160LL);
      if ( !v116 )
        goto LABEL_196;
      v117 = *(UnityEngine_GameObject_o **)(v116 + 80);
      v125 = *(_QWORD *)(v116 + 32);
      v118 = (Il2CppObject *)j_il2cpp_value_box_0(
                               UnityEngine_Vector2_TypeInfo,
                               &v125,
                               v100,
                               v101,
                               v102,
                               v103,
                               v104,
                               v105);
      UICamera__Notify(v117, (System_String_o *)StringLiteral_9891/*"OnDrag"*/, v118, v119);
      v16 = (__int64)UICamera_TypeInfo->static_fields->currentTouch;
      if ( !v16 )
        goto LABEL_196;
      v122 = *(_QWORD *)(v16 + 64);
      *(_QWORD *)(v16 + 56) = v122;
      sub_1C3E508((CGThumbnailListItem_o *)(v16 + 56), v122, v120, v121);
      v16 = (__int64)UICamera_TypeInfo;
      v123 = UICamera_TypeInfo->static_fields;
      v123->isDragging = 0;
      if ( !*(_DWORD *)(v16 + 224) )
      {
        j_il2cpp_runtime_class_init_0(v16);
        v16 = (__int64)UICamera_TypeInfo;
        v123 = UICamera_TypeInfo->static_fields;
      }
      v124 = v123->currentTouch;
      if ( !v124 )
        goto LABEL_196;
      if ( v85 )
        goto LABEL_190;
      if ( v62 > click && v124->fields.clickNotification == 2 )
      {
        if ( !*(_DWORD *)(v16 + 224) )
        {
          j_il2cpp_runtime_class_init_0(v16);
          v124 = UICamera_TypeInfo->static_fields->currentTouch;
          if ( !v124 )
            goto LABEL_196;
        }
LABEL_190:
        v124->fields.clickNotification = 0;
      }
    }
  }
}


void UICamera__ProcessRelease(UICamera_o *this, bool isMouse, float drag, const MethodInfo *method)
{
  const MethodInfo *v7; // x0
  __int64 v8; // x1
  __int64 v9; // x0
  __int64 v10; // x8
  UnityEngine_Object_o *mTooltip; // x21
  const MethodInfo *v12; // x2
  __int64 v13; // x8
  UnityEngine_Object_o *v14; // x20
  __int64 v15; // x2
  const MethodInfo *v16; // x3
  __int64 v17; // x4
  __int64 v18; // x5
  __int64 v19; // x6
  __int64 v20; // x7
  struct UICamera_StaticFields *static_fields; // x8
  struct UICamera_MouseOrTouch_o *currentTouch; // x9
  struct UICamera_ObjectDelegate_o *onDragOut; // x9
  struct UICamera_MouseOrTouch_o *v24; // x8
  __int64 v25; // x8
  const MethodInfo *v26; // x3
  struct UICamera_StaticFields *v27; // x9
  struct UICamera_VoidDelegate_o *onDragEnd; // x8
  struct UICamera_MouseOrTouch_o *v29; // x9
  __int64 v30; // x8
  struct UICamera_StaticFields *v31; // x9
  struct UICamera_BoolDelegate_o *onPress; // x8
  struct UICamera_MouseOrTouch_o *v33; // x9
  __int64 v34; // x8
  UnityEngine_GameObject_o *v35; // x20
  Il2CppObject *v36; // x0
  const MethodInfo *v37; // x3
  __int64 v38; // x2
  const MethodInfo *v39; // x3
  __int64 v40; // x4
  __int64 v41; // x5
  __int64 v42; // x6
  __int64 v43; // x7
  struct UICamera_StaticFields *v44; // x9
  struct UICamera_BoolDelegate_o *onHover; // x8
  struct UICamera_MouseOrTouch_o *v46; // x9
  __int64 v47; // x8
  UnityEngine_GameObject_o *v48; // x19
  Il2CppObject *v49; // x0
  const MethodInfo *v50; // x3
  __int64 v51; // x8
  __int64 v52; // x9
  __int64 v53; // x1
  struct UICamera_MouseOrTouch_o *v54; // x8
  UnityEngine_Object_o *dragged; // x19
  UnityEngine_Object_o *current; // x20
  UICamera_c *v57; // x8
  struct UICamera_MouseOrTouch_o *v58; // x9
  UnityEngine_Object_o *v59; // x19
  UnityEngine_Object_o *pressed; // x20
  const MethodInfo *v61; // x3
  float time; // s0
  float v63; // s8
  struct UICamera_StaticFields *v64; // x9
  struct UICamera_VoidDelegate_o *onClick; // x8
  struct UICamera_MouseOrTouch_o *v66; // x9
  __int64 v67; // x8
  struct UICamera_StaticFields *v68; // x8
  struct UICamera_MouseOrTouch_o *v69; // x9
  struct UICamera_VoidDelegate_o *onDoubleClick; // x9
  struct UICamera_MouseOrTouch_o *v71; // x8
  __int64 v72; // x8
  __int64 v73; // x8
  struct UICamera_StaticFields *v74; // x9
  struct UICamera_MouseOrTouch_o *v75; // x9
  struct UICamera_StaticFields *v76; // x9
  struct UICamera_MouseOrTouch_o *v77; // x10
  struct UICamera_ObjectDelegate_o *onDrop; // x10
  struct UICamera_MouseOrTouch_o *v79; // x8
  struct UICamera_MouseOrTouch_o *v80; // x8
  UICamera_c *v81; // x0
  __int64 v82; // x0
  int32_t v83; // w2
  const MethodInfo *v84; // x3
  char v85[4]; // [xsp+8h] [xbp-38h] BYREF
  _BYTE v86[4]; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C5B2DC & 1) == 0 )
  {
    sub_1C3E564(&bool_TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&UICamera_TypeInfo);
    sub_1C3E564(&StringLiteral_9892/*"OnDragEnd"*/);
    sub_1C3E564(&StringLiteral_9838/*"OnClick"*/);
    sub_1C3E564(&StringLiteral_9889/*"OnDoubleClick"*/);
    sub_1C3E564(&StringLiteral_9896/*"OnDrop"*/);
    sub_1C3E564(&StringLiteral_9914/*"OnHover"*/);
    sub_1C3E564(&StringLiteral_9945/*"OnPress"*/);
    sub_1C3E564(&StringLiteral_9893/*"OnDragOut"*/);
    byte_4C5B2DC = 1;
  }
  v7 = (const MethodInfo *)UICamera_TypeInfo;
  if ( !UICamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    v7 = (const MethodInfo *)UICamera_TypeInfo;
  }
  if ( *((_QWORD *)v7[2].virtualMethodPointer + 20) )
  {
    NguiTouchEffectManager__UnPress(v7);
    v9 = (__int64)UICamera_TypeInfo;
    if ( !UICamera_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
      v9 = (__int64)UICamera_TypeInfo;
    }
    v10 = *(_QWORD *)(*(_QWORD *)(v9 + 184) + 160LL);
    if ( v10 )
    {
      *(_BYTE *)(v10 + 101) = 0;
      mTooltip = (UnityEngine_Object_o *)this->fields.mTooltip;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(mTooltip, 0, 0) )
        UICamera__ShowTooltip(this, 0, v12);
      v9 = (__int64)UICamera_TypeInfo;
      if ( !UICamera_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
        v9 = (__int64)UICamera_TypeInfo;
      }
      v13 = *(_QWORD *)(*(_QWORD *)(v9 + 184) + 160LL);
      if ( v13 )
      {
        v14 = *(UnityEngine_Object_o **)(v13 + 72);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(v14, 0, 0) )
        {
          v9 = (__int64)UICamera_TypeInfo;
          if ( !UICamera_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
            v9 = (__int64)UICamera_TypeInfo;
          }
          static_fields = *(struct UICamera_StaticFields **)(v9 + 184);
          currentTouch = static_fields->currentTouch;
          if ( !currentTouch )
            goto LABEL_145;
          if ( currentTouch->fields.dragStarted )
          {
            if ( !*(_DWORD *)(v9 + 224) )
            {
              j_il2cpp_runtime_class_init_0(v9);
              v9 = (__int64)UICamera_TypeInfo;
              static_fields = UICamera_TypeInfo->static_fields;
            }
            onDragOut = static_fields->onDragOut;
            if ( onDragOut )
            {
              if ( !*(_DWORD *)(v9 + 224) )
              {
                j_il2cpp_runtime_class_init_0(v9);
                static_fields = UICamera_TypeInfo->static_fields;
                onDragOut = static_fields->onDragOut;
              }
              v24 = static_fields->currentTouch;
              if ( !v24 || !onDragOut )
                goto LABEL_145;
              ((void (__fastcall *)(intptr_t, struct UnityEngine_GameObject_o *, struct UnityEngine_GameObject_o *, intptr_t))onDragOut->fields.invoke_impl)(
                onDragOut->fields.method_code,
                v24->fields.last,
                v24->fields.dragged,
                onDragOut->fields.method);
              v9 = (__int64)UICamera_TypeInfo;
            }
            if ( !*(_DWORD *)(v9 + 224) )
            {
              j_il2cpp_runtime_class_init_0(v9);
              v9 = (__int64)UICamera_TypeInfo;
            }
            v25 = *(_QWORD *)(*(_QWORD *)(v9 + 184) + 160LL);
            if ( !v25 )
              goto LABEL_145;
            UICamera__Notify(
              *(UnityEngine_GameObject_o **)(v25 + 56),
              (System_String_o *)StringLiteral_9893/*"OnDragOut"*/,
              *(Il2CppObject **)(v25 + 80),
              v16);
            v9 = (__int64)UICamera_TypeInfo;
            v27 = UICamera_TypeInfo->static_fields;
            onDragEnd = v27->onDragEnd;
            if ( onDragEnd )
            {
              if ( !UICamera_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
                v27 = UICamera_TypeInfo->static_fields;
                onDragEnd = v27->onDragEnd;
              }
              v29 = v27->currentTouch;
              if ( !v29 || !onDragEnd )
                goto LABEL_145;
              ((void (__fastcall *)(intptr_t, struct UnityEngine_GameObject_o *, intptr_t))onDragEnd->fields.invoke_impl)(
                onDragEnd->fields.method_code,
                v29->fields.dragged,
                onDragEnd->fields.method);
              v9 = (__int64)UICamera_TypeInfo;
            }
            if ( !*(_DWORD *)(v9 + 224) )
            {
              j_il2cpp_runtime_class_init_0(v9);
              v9 = (__int64)UICamera_TypeInfo;
            }
            v30 = *(_QWORD *)(*(_QWORD *)(v9 + 184) + 160LL);
            if ( !v30 )
              goto LABEL_145;
            UICamera__Notify(*(UnityEngine_GameObject_o **)(v30 + 80), (System_String_o *)StringLiteral_9892/*"OnDragEnd"*/, 0, v26);
            v9 = (__int64)UICamera_TypeInfo;
          }
          if ( !*(_DWORD *)(v9 + 224) )
          {
            j_il2cpp_runtime_class_init_0(v9);
            v9 = (__int64)UICamera_TypeInfo;
          }
          v31 = *(struct UICamera_StaticFields **)(v9 + 184);
          onPress = v31->onPress;
          if ( onPress )
          {
            if ( !*(_DWORD *)(v9 + 224) )
            {
              j_il2cpp_runtime_class_init_0(v9);
              v31 = UICamera_TypeInfo->static_fields;
              onPress = v31->onPress;
            }
            v33 = v31->currentTouch;
            if ( !v33 || !onPress )
              goto LABEL_145;
            ((void (__fastcall *)(intptr_t, struct UnityEngine_GameObject_o *, _QWORD, intptr_t))onPress->fields.invoke_impl)(
              onPress->fields.method_code,
              v33->fields.pressed,
              0,
              onPress->fields.method);
            v9 = (__int64)UICamera_TypeInfo;
          }
          if ( !*(_DWORD *)(v9 + 224) )
          {
            j_il2cpp_runtime_class_init_0(v9);
            v9 = (__int64)UICamera_TypeInfo;
          }
          v34 = *(_QWORD *)(*(_QWORD *)(v9 + 184) + 160LL);
          if ( !v34 )
            goto LABEL_145;
          v35 = *(UnityEngine_GameObject_o **)(v34 + 72);
          v86[0] = 0;
          v36 = (Il2CppObject *)j_il2cpp_value_box_0(bool_TypeInfo, v86, v15, v16, v17, v18, v19, v20);
          UICamera__Notify(v35, (System_String_o *)StringLiteral_9945/*"OnPress"*/, v36, v37);
          if ( isMouse )
          {
            v9 = (__int64)UICamera_TypeInfo;
            if ( !UICamera_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
              v9 = (__int64)UICamera_TypeInfo;
            }
            v44 = *(struct UICamera_StaticFields **)(v9 + 184);
            onHover = v44->onHover;
            if ( onHover )
            {
              if ( !*(_DWORD *)(v9 + 224) )
              {
                j_il2cpp_runtime_class_init_0(v9);
                v44 = UICamera_TypeInfo->static_fields;
                onHover = v44->onHover;
              }
              v46 = v44->currentTouch;
              if ( !v46 || !onHover )
                goto LABEL_145;
              ((void (__fastcall *)(intptr_t, struct UnityEngine_GameObject_o *, __int64, intptr_t))onHover->fields.invoke_impl)(
                onHover->fields.method_code,
                v46->fields.current,
                1,
                onHover->fields.method);
              v9 = (__int64)UICamera_TypeInfo;
            }
            if ( !*(_DWORD *)(v9 + 224) )
            {
              j_il2cpp_runtime_class_init_0(v9);
              v9 = (__int64)UICamera_TypeInfo;
            }
            v47 = *(_QWORD *)(*(_QWORD *)(v9 + 184) + 160LL);
            if ( !v47 )
              goto LABEL_145;
            v48 = *(UnityEngine_GameObject_o **)(v47 + 64);
            v85[0] = 1;
            v49 = (Il2CppObject *)j_il2cpp_value_box_0(bool_TypeInfo, v85, v38, v39, v40, v41, v42, v43);
            UICamera__Notify(v48, (System_String_o *)StringLiteral_9914/*"OnHover"*/, v49, v50);
          }
          v9 = (__int64)UICamera_TypeInfo;
          if ( !UICamera_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
            v9 = (__int64)UICamera_TypeInfo;
          }
          v51 = *(_QWORD *)(v9 + 184);
          v52 = *(_QWORD *)(v51 + 160);
          if ( !v52 )
            goto LABEL_145;
          v53 = *(_QWORD *)(v52 + 64);
          *(_QWORD *)(v51 + 328) = v53;
          sub_1C3E508((CGThumbnailListItem_o *)(v51 + 328), v53, v38, v39);
          v54 = UICamera_TypeInfo->static_fields->currentTouch;
          if ( !v54 )
            goto LABEL_145;
          dragged = (UnityEngine_Object_o *)v54->fields.dragged;
          current = (UnityEngine_Object_o *)v54->fields.current;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          v9 = UnityEngine_Object__op_Equality(dragged, current, 0);
          v57 = UICamera_TypeInfo;
          if ( (v9 & 1) != 0 )
            goto LABEL_148;
          if ( !UICamera_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
            v57 = UICamera_TypeInfo;
          }
          v74 = v57->static_fields;
          if ( v74->currentScheme == 2 )
            goto LABEL_149;
          if ( !v57->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v57);
            v57 = UICamera_TypeInfo;
            v74 = UICamera_TypeInfo->static_fields;
          }
          v75 = v74->currentTouch;
          if ( !v75 )
            goto LABEL_145;
          if ( !v75->fields.clickNotification )
            goto LABEL_149;
          if ( !v57->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v57);
            v57 = UICamera_TypeInfo;
            v75 = UICamera_TypeInfo->static_fields->currentTouch;
            if ( !v75 )
              goto LABEL_145;
          }
          if ( (float)((float)(v75->fields.totalDelta.fields.x * v75->fields.totalDelta.fields.x)
                     + (float)(v75->fields.totalDelta.fields.y * v75->fields.totalDelta.fields.y)) < drag )
          {
LABEL_148:
            if ( !v57->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v57);
              v57 = UICamera_TypeInfo;
            }
            v58 = v57->static_fields->currentTouch;
            if ( !v58 )
              goto LABEL_145;
            if ( v58->fields.clickNotification )
            {
              if ( !v57->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v57);
                v58 = UICamera_TypeInfo->static_fields->currentTouch;
                if ( !v58 )
                  goto LABEL_145;
              }
              v59 = (UnityEngine_Object_o *)v58->fields.current;
              pressed = (UnityEngine_Object_o *)v58->fields.pressed;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( UnityEngine_Object__op_Equality(pressed, v59, 0) )
              {
                time = RealTime__get_time(0);
                v9 = (__int64)UICamera_TypeInfo;
                v63 = time;
                if ( !UICamera_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
                  v9 = (__int64)UICamera_TypeInfo;
                }
                v64 = *(struct UICamera_StaticFields **)(v9 + 184);
                onClick = v64->onClick;
                if ( onClick )
                {
                  if ( !*(_DWORD *)(v9 + 224) )
                  {
                    j_il2cpp_runtime_class_init_0(v9);
                    v64 = UICamera_TypeInfo->static_fields;
                    onClick = v64->onClick;
                  }
                  v66 = v64->currentTouch;
                  if ( !v66 || !onClick )
                    goto LABEL_145;
                  ((void (__fastcall *)(intptr_t, struct UnityEngine_GameObject_o *, intptr_t))onClick->fields.invoke_impl)(
                    onClick->fields.method_code,
                    v66->fields.pressed,
                    onClick->fields.method);
                  v9 = (__int64)UICamera_TypeInfo;
                }
                if ( !*(_DWORD *)(v9 + 224) )
                {
                  j_il2cpp_runtime_class_init_0(v9);
                  v9 = (__int64)UICamera_TypeInfo;
                }
                v67 = *(_QWORD *)(*(_QWORD *)(v9 + 184) + 160LL);
                if ( !v67 )
                  goto LABEL_145;
                UICamera__Notify(
                  *(UnityEngine_GameObject_o **)(v67 + 72),
                  (System_String_o *)StringLiteral_9838/*"OnClick"*/,
                  0,
                  v61);
                v9 = (__int64)UICamera_TypeInfo;
                v68 = UICamera_TypeInfo->static_fields;
                v69 = v68->currentTouch;
                if ( !v69 )
                  goto LABEL_145;
                if ( (float)(v69->fields.clickTime + 0.35) > v63 )
                {
                  if ( !UICamera_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
                    v9 = (__int64)UICamera_TypeInfo;
                    v68 = UICamera_TypeInfo->static_fields;
                  }
                  onDoubleClick = v68->onDoubleClick;
                  if ( onDoubleClick )
                  {
                    if ( !*(_DWORD *)(v9 + 224) )
                    {
                      j_il2cpp_runtime_class_init_0(v9);
                      v68 = UICamera_TypeInfo->static_fields;
                      onDoubleClick = v68->onDoubleClick;
                    }
                    v71 = v68->currentTouch;
                    if ( !v71 || !onDoubleClick )
                      goto LABEL_145;
                    ((void (__fastcall *)(intptr_t, struct UnityEngine_GameObject_o *, intptr_t))onDoubleClick->fields.invoke_impl)(
                      onDoubleClick->fields.method_code,
                      v71->fields.pressed,
                      onDoubleClick->fields.method);
                    v9 = (__int64)UICamera_TypeInfo;
                  }
                  if ( !*(_DWORD *)(v9 + 224) )
                  {
                    j_il2cpp_runtime_class_init_0(v9);
                    v9 = (__int64)UICamera_TypeInfo;
                  }
                  v72 = *(_QWORD *)(*(_QWORD *)(v9 + 184) + 160LL);
                  if ( !v72 )
                    goto LABEL_145;
                  UICamera__Notify(
                    *(UnityEngine_GameObject_o **)(v72 + 72),
                    (System_String_o *)StringLiteral_9889/*"OnDoubleClick"*/,
                    0,
                    v16);
                  v9 = (__int64)UICamera_TypeInfo;
                }
                if ( !*(_DWORD *)(v9 + 224) )
                {
                  j_il2cpp_runtime_class_init_0(v9);
                  v9 = (__int64)UICamera_TypeInfo;
                }
                v73 = *(_QWORD *)(*(_QWORD *)(v9 + 184) + 160LL);
                if ( !v73 )
                  goto LABEL_145;
                *(float *)(v73 + 92) = v63;
              }
            }
          }
          else
          {
LABEL_149:
            if ( !v57->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v57);
              v57 = UICamera_TypeInfo;
            }
            v76 = v57->static_fields;
            v77 = v76->currentTouch;
            if ( !v77 )
              goto LABEL_145;
            if ( v77->fields.dragStarted )
            {
              if ( !v57->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v57);
                v57 = UICamera_TypeInfo;
                v76 = UICamera_TypeInfo->static_fields;
              }
              onDrop = v76->onDrop;
              if ( onDrop )
              {
                if ( !v57->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(v57);
                  v76 = UICamera_TypeInfo->static_fields;
                  onDrop = v76->onDrop;
                }
                v79 = v76->currentTouch;
                if ( !v79 || !onDrop )
                  goto LABEL_145;
                v9 = ((__int64 (__fastcall *)(intptr_t, struct UnityEngine_GameObject_o *, struct UnityEngine_GameObject_o *, intptr_t))onDrop->fields.invoke_impl)(
                       onDrop->fields.method_code,
                       v79->fields.current,
                       v79->fields.dragged,
                       onDrop->fields.method);
                v57 = UICamera_TypeInfo;
              }
              if ( !v57->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v57);
                v57 = UICamera_TypeInfo;
              }
              v80 = v57->static_fields->currentTouch;
              if ( !v80 )
                goto LABEL_145;
              UICamera__Notify(
                v80->fields.current,
                (System_String_o *)StringLiteral_9896/*"OnDrop"*/,
                (Il2CppObject *)v80->fields.dragged,
                v16);
            }
          }
        }
        v81 = UICamera_TypeInfo;
        if ( !UICamera_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
          v81 = UICamera_TypeInfo;
        }
        v9 = (__int64)v81->static_fields->currentTouch;
        if ( v9 )
        {
          *(_QWORD *)(v9 + 72) = 0;
          v82 = v9 + 72;
          *(_BYTE *)(v82 + 30) = 0;
          sub_1C3E508((CGThumbnailListItem_o *)v82, 0, v15, v16);
          v9 = (__int64)UICamera_TypeInfo->static_fields->currentTouch;
          if ( v9 )
          {
            *(_QWORD *)(v9 + 80) = 0;
            sub_1C3E508((CGThumbnailListItem_o *)(v9 + 80), 0, v83, v84);
            return;
          }
        }
      }
    }
LABEL_145:
    sub_1C3E7C0(v9, v8);
  }
}


// local variable allocation has failed, the output may be wrong!
void UICamera__ProcessTouch(UICamera_o *this, bool pressed, bool released, const MethodInfo *method)
{
  UICamera_c *v7; // x0
  uint32_t cctor_finished; // w8
  struct UICamera_StaticFields *static_fields; // x9
  __int64 v10; // x10
  int32_t currentScheme; // w23
  __int64 v12; // x11
  float v13; // s8
  float v14; // s9
  struct UICamera_MouseOrTouch_o *currentTouch; // x8
  UnityEngine_Object_o *v16; // x22
  float v17; // s8
  float v18; // s9
  const MethodInfo *v19; // x2
  const MethodInfo *v20; // x2

  if ( (byte_4C5B2DD & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&UICamera_TypeInfo);
    byte_4C5B2DD = 1;
  }
  v7 = UICamera_TypeInfo;
  cctor_finished = UICamera_TypeInfo->_2.cctor_finished;
  if ( !cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    v7 = UICamera_TypeInfo;
    cctor_finished = UICamera_TypeInfo->_2.cctor_finished;
  }
  static_fields = v7->static_fields;
  v10 = 68;
  currentScheme = static_fields->currentScheme;
  if ( currentScheme )
  {
    v12 = 72;
  }
  else
  {
    v10 = 60;
    v12 = 64;
  }
  v13 = *(float *)((char *)&this->klass + v10);
  v14 = *(float *)((char *)&this->klass + v12);
  if ( !cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v7);
    static_fields = UICamera_TypeInfo->static_fields;
  }
  currentTouch = static_fields->currentTouch;
  if ( !currentTouch )
    sub_1C3E7C0(v7, pressed);
  v16 = (UnityEngine_Object_o *)currentTouch->fields.pressed;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v17 = v13 * v13;
  v18 = v14 * v14;
  if ( UnityEngine_Object__op_Inequality(v16, 0, 0) )
  {
    if ( released )
      UICamera__ProcessRelease(this, currentScheme == 0, v17, v19);
    UICamera__ProcessPress(this, pressed, v18, v17, v19);
  }
  else if ( !currentScheme || pressed || released )
  {
    UICamera__ProcessPress(this, pressed, v18, v17, v19);
    if ( released )
      UICamera__ProcessRelease(this, currentScheme == 0, v17, v20);
  }
}


void UICamera__ProcessTouches(UICamera_o *this, const MethodInfo *method)
{
  UICamera_c *v3; // x0
  struct UICamera_StaticFields *static_fields; // x9
  struct UICamera_GetTouchCountCallback_o *GetInputTouchCount; // x8
  UICamera_c *ignoreFingerIDList; // x0
  const MethodInfo *v7; // x1
  int32_t touchCount; // w0
  const MethodInfo *v9; // x1
  int32_t v10; // w20
  unsigned int v11; // w21
  UICamera_c *v12; // x0
  struct UICamera_GetTouchCallback_o *GetInputTouch; // x8
  int32_t name_high; // w24
  int32_t name; // w26
  float x; // s8
  float y; // s9
  int32_t data; // w25
  UnityEngine_Vector2_o position; // kr00_8
  CTouch_c *v20; // x0
  UICamera_c *v21; // x0
  UICamera_MouseOrTouch_o *Touch; // x0
  struct UICamera_StaticFields *v23; // x8
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  struct UICamera_MouseOrTouch_o *currentTouch; // x8
  int touchBegan; // w29
  struct UICamera_MouseOrTouch_o *v28; // x26
  struct UnityEngine_Vector2_StaticFields *v29; // x8
  float v30; // s0
  float v31; // s1
  struct UICamera_MouseOrTouch_o *v32; // x8
  struct UICamera_MouseOrTouch_o *v33; // x8
  struct UICamera_MouseOrTouch_o *v34; // x8
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  UICamera_c *v37; // x0
  struct UICamera_StaticFields *v38; // x8
  struct UnityEngine_GameObject_o *fallThrough; // x1
  UICamera_c *v40; // x0
  UnityEngine_Object_o *hoveredObject; // x26
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  UICamera_c *v44; // x0
  struct UICamera_StaticFields *v45; // x8
  struct UnityEngine_GameObject_o *mGenericHandler; // x1
  UICamera_c *v47; // x0
  Il2CppClass *element_class; // x1
  int32_t v49; // w2
  const MethodInfo *v50; // x3
  struct UICamera_StaticFields *v51; // x8
  Il2CppClass *v52; // x1
  int32_t v53; // w2
  const MethodInfo *v54; // x3
  struct UICamera_StaticFields *v55; // x8
  struct UICamera_MouseOrTouch_o *v56; // x9
  struct UICamera_StaticFields *v57; // x8
  struct UnityEngine_Camera_o *currentCamera; // x1
  CGThumbnailListItem_o *p_this_arg; // x0
  UnityEngine_Object_o *castClass; // x26
  UICamera_c *v61; // x0
  Il2CppClass **nestedTypes; // x8
  UICamera_c *v63; // x0
  struct UICamera_MouseOrTouch_o *v64; // x25
  float time; // s0
  unsigned int v66; // w24
  int32_t v67; // w2
  const MethodInfo *v68; // x3
  UICamera_c *v69; // x0
  UICamera_c *v70; // x0
  struct UICamera_StaticFields *v71; // x0
  int32_t v72; // w2
  const MethodInfo *v73; // x3
  UICamera_c *v74; // x0
  struct UICamera_StaticFields *v75; // x8
  UnityEngine_Touch_o src; // [xsp+8h] [xbp-108h] BYREF
  UnityEngine_Touch_o dest; // [xsp+50h] [xbp-C0h] BYREF
  UnityEngine_Vector3_o v78; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C5B2D8 & 1) == 0 )
  {
    sub_1C3E564(&CTouch_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&UICamera_TypeInfo);
    byte_4C5B2D8 = 1;
  }
  v3 = UICamera_TypeInfo;
  memset(&dest, 0, sizeof(dest));
  if ( !UICamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    v3 = UICamera_TypeInfo;
  }
  static_fields = v3->static_fields;
  GetInputTouchCount = static_fields->GetInputTouchCount;
  static_fields->currentScheme = 1;
  if ( GetInputTouchCount )
  {
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      GetInputTouchCount = UICamera_TypeInfo->static_fields->GetInputTouchCount;
      if ( !GetInputTouchCount )
LABEL_109:
        sub_1C3E7C0(ignoreFingerIDList, v7);
    }
    touchCount = ((__int64 (__fastcall *)(intptr_t, intptr_t))GetInputTouchCount->fields.invoke_impl)(
                   GetInputTouchCount->fields.method_code,
                   GetInputTouchCount->fields.method);
  }
  else
  {
    touchCount = UnityEngine_Input__get_touchCount(0);
  }
  v10 = touchCount;
  if ( touchCount >= 1 )
  {
    v11 = 0;
    while ( 1 )
    {
      v12 = UICamera_TypeInfo;
      if ( !UICamera_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
        v12 = UICamera_TypeInfo;
      }
      GetInputTouch = v12->static_fields->GetInputTouch;
      if ( GetInputTouch )
      {
        if ( !v12->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v12);
          GetInputTouch = UICamera_TypeInfo->static_fields->GetInputTouch;
          if ( !GetInputTouch )
            goto LABEL_109;
        }
        ignoreFingerIDList = (UICamera_c *)((__int64 (__fastcall *)(intptr_t, _QWORD, intptr_t))GetInputTouch->fields.invoke_impl)(
                                             GetInputTouch->fields.method_code,
                                             v11,
                                             GetInputTouch->fields.method);
        if ( !ignoreFingerIDList )
          goto LABEL_109;
        name = (int32_t)ignoreFingerIDList->_1.name;
        name_high = HIDWORD(ignoreFingerIDList->_1.name);
        x = *(float *)&ignoreFingerIDList->_1.namespaze;
        y = *((float *)&ignoreFingerIDList->_1.namespaze + 1);
        data = (int32_t)ignoreFingerIDList->_1.byval_arg.data;
      }
      else
      {
        UnityEngine_Input__GetTouch(&src, v11, 0);
        memcpy(&dest, &src, sizeof(dest));
        name_high = UnityEngine_Touch__get_phase(&dest, 0);
        name = UnityEngine_Touch__get_fingerId(&dest, 0);
        position = UnityEngine_Touch__get_position(&dest, 0);
        x = position.fields.x;
        y = position.fields.y;
        data = UnityEngine_Touch__get_tapCount(&dest, 0);
      }
      if ( !CTouch_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
      if ( !byte_4C5362C )
      {
        sub_1C3E564(&CTouch_TypeInfo);
        byte_4C5362C = 1;
      }
      v20 = CTouch_TypeInfo;
      if ( !CTouch_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
        v20 = CTouch_TypeInfo;
      }
      ignoreFingerIDList = (UICamera_c *)v20->static_fields->ignoreFingerIDList;
      if ( !ignoreFingerIDList )
        goto LABEL_109;
      if ( !System_Collections_Generic_List_int___Contains(
              (System_Collections_Generic_List_int__o *)ignoreFingerIDList,
              name,
              (const MethodInfo_37987B4 *)Method_System_Collections_Generic_List_int__Contains__) )
        break;
LABEL_97:
      if ( v10 == ++v11 )
        goto LABEL_98;
    }
    v21 = UICamera_TypeInfo;
    if ( !this->fields.allowMultiTouch )
      name = 1;
    if ( !UICamera_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
      v21 = UICamera_TypeInfo;
    }
    v21->static_fields->currentTouchID = name;
    Touch = UICamera__GetTouch(name, v9);
    v23 = UICamera_TypeInfo->static_fields;
    v23->currentTouch = Touch;
    sub_1C3E508((CGThumbnailListItem_o *)&v23->currentTouch, (int32_t)Touch, v24, v25);
    ignoreFingerIDList = UICamera_TypeInfo;
    if ( name_high )
    {
      if ( !UICamera_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
        ignoreFingerIDList = UICamera_TypeInfo;
      }
      currentTouch = ignoreFingerIDList->static_fields->currentTouch;
      if ( !currentTouch )
        goto LABEL_109;
      touchBegan = currentTouch->fields.touchBegan;
    }
    else
    {
      touchBegan = 1;
    }
    if ( !ignoreFingerIDList->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ignoreFingerIDList);
      ignoreFingerIDList = UICamera_TypeInfo;
    }
    v28 = ignoreFingerIDList->static_fields->currentTouch;
    if ( !v28 )
      goto LABEL_109;
    v28->fields.touchBegan = 0;
    if ( touchBegan )
    {
      if ( !byte_4C5059A )
      {
        sub_1C3E564(&UnityEngine_Vector2_TypeInfo);
        ignoreFingerIDList = UICamera_TypeInfo;
        byte_4C5059A = 1;
      }
      v29 = UnityEngine_Vector2_TypeInfo->static_fields;
      v30 = v29->zeroVector.fields.x;
      v31 = v29->zeroVector.fields.y;
    }
    else
    {
      if ( ignoreFingerIDList->_2.cctor_finished )
      {
        v32 = v28;
      }
      else
      {
        j_il2cpp_runtime_class_init_0(ignoreFingerIDList);
        ignoreFingerIDList = UICamera_TypeInfo;
        v32 = UICamera_TypeInfo->static_fields->currentTouch;
        if ( !v32 )
          goto LABEL_109;
      }
      v30 = x - v32->fields.pos.fields.x;
      v31 = y - v32->fields.pos.fields.y;
    }
    v28->fields.delta.fields.x = v30;
    v28->fields.delta.fields.y = v31;
    if ( !ignoreFingerIDList->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ignoreFingerIDList);
      ignoreFingerIDList = UICamera_TypeInfo;
    }
    v33 = ignoreFingerIDList->static_fields->currentTouch;
    if ( !v33 )
      goto LABEL_109;
    v33->fields.pos.fields.x = x;
    v33->fields.pos.fields.y = y;
    v34 = ignoreFingerIDList->static_fields->currentTouch;
    if ( !v34 )
      goto LABEL_109;
    v78.fields.x = v34->fields.pos.fields.x;
    v78.fields.y = v34->fields.pos.fields.y;
    v78.fields.z = 0.0;
    if ( !UICamera__Raycast(v78, (const MethodInfo *)ignoreFingerIDList) )
    {
      v37 = UICamera_TypeInfo;
      if ( !UICamera_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
        v37 = UICamera_TypeInfo;
      }
      v38 = v37->static_fields;
      fallThrough = v38->fallThrough;
      v38->hoveredObject = fallThrough;
      sub_1C3E508((CGThumbnailListItem_o *)&v38->hoveredObject, (int32_t)fallThrough, v35, v36);
    }
    v40 = UICamera_TypeInfo;
    if ( !UICamera_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
      v40 = UICamera_TypeInfo;
    }
    hoveredObject = (UnityEngine_Object_o *)v40->static_fields->hoveredObject;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(hoveredObject, 0, 0) )
    {
      v44 = UICamera_TypeInfo;
      if ( !UICamera_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
        v44 = UICamera_TypeInfo;
      }
      v45 = v44->static_fields;
      mGenericHandler = v45->mGenericHandler;
      v45->hoveredObject = mGenericHandler;
      sub_1C3E508((CGThumbnailListItem_o *)&v45->hoveredObject, (int32_t)mGenericHandler, v42, v43);
    }
    v47 = UICamera_TypeInfo;
    if ( !UICamera_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
      v47 = UICamera_TypeInfo;
    }
    ignoreFingerIDList = (UICamera_c *)v47->static_fields->currentTouch;
    if ( !ignoreFingerIDList )
      goto LABEL_109;
    element_class = ignoreFingerIDList->_1.element_class;
    *(_QWORD *)&ignoreFingerIDList->_1.this_arg.bits = element_class;
    sub_1C3E508((CGThumbnailListItem_o *)&ignoreFingerIDList->_1.this_arg.bits, (int32_t)element_class, v42, v43);
    v51 = UICamera_TypeInfo->static_fields;
    ignoreFingerIDList = (UICamera_c *)v51->currentTouch;
    if ( !ignoreFingerIDList )
      goto LABEL_109;
    v52 = (Il2CppClass *)v51->hoveredObject;
    ignoreFingerIDList->_1.element_class = v52;
    sub_1C3E508((CGThumbnailListItem_o *)&ignoreFingerIDList->_1.element_class, (int32_t)v52, v49, v50);
    ignoreFingerIDList = UICamera_TypeInfo;
    v55 = UICamera_TypeInfo->static_fields;
    v56 = v55->currentTouch;
    if ( !v56 )
      goto LABEL_109;
    v55->lastTouchPosition = v56->fields.pos;
    if ( !ignoreFingerIDList->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ignoreFingerIDList);
      ignoreFingerIDList = UICamera_TypeInfo;
    }
    v57 = ignoreFingerIDList->static_fields;
    ignoreFingerIDList = (UICamera_c *)v57->currentTouch;
    if ( touchBegan )
    {
      if ( !ignoreFingerIDList )
        goto LABEL_109;
      currentCamera = v57->currentCamera;
      ignoreFingerIDList->_1.this_arg.data = currentCamera;
      p_this_arg = (CGThumbnailListItem_o *)&ignoreFingerIDList->_1.this_arg;
    }
    else
    {
      if ( !ignoreFingerIDList )
        goto LABEL_109;
      castClass = (UnityEngine_Object_o *)ignoreFingerIDList->_1.castClass;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Inequality(castClass, 0, 0) )
        goto LABEL_84;
      v61 = UICamera_TypeInfo;
      if ( !UICamera_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
        v61 = UICamera_TypeInfo;
      }
      ignoreFingerIDList = (UICamera_c *)v61->static_fields;
      nestedTypes = ignoreFingerIDList->_1.nestedTypes;
      if ( !nestedTypes )
        goto LABEL_109;
      currentCamera = (struct UnityEngine_Camera_o *)nestedTypes[6];
      ignoreFingerIDList->_1.events = currentCamera;
      p_this_arg = (CGThumbnailListItem_o *)&ignoreFingerIDList->_1.events;
    }
    sub_1C3E508(p_this_arg, (int32_t)currentCamera, v53, v54);
LABEL_84:
    if ( data >= 2 )
    {
      v63 = UICamera_TypeInfo;
      if ( !UICamera_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
        v63 = UICamera_TypeInfo;
      }
      v64 = v63->static_fields->currentTouch;
      time = RealTime__get_time(0);
      if ( !v64 )
        goto LABEL_109;
      v64->fields.clickTime = time;
    }
    v66 = name_high - 3;
    UICamera__ProcessTouch(this, touchBegan != 0, v66 < 2, v54);
    if ( v66 <= 1 )
    {
      v69 = UICamera_TypeInfo;
      if ( !UICamera_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
        v69 = UICamera_TypeInfo;
      }
      UICamera__RemoveTouch(v69->static_fields->currentTouchID, v7);
    }
    v70 = UICamera_TypeInfo;
    if ( !UICamera_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
      v70 = UICamera_TypeInfo;
    }
    ignoreFingerIDList = (UICamera_c *)v70->static_fields->currentTouch;
    if ( !ignoreFingerIDList )
      goto LABEL_109;
    *(_QWORD *)&ignoreFingerIDList->_1.this_arg.bits = 0;
    sub_1C3E508((CGThumbnailListItem_o *)&ignoreFingerIDList->_1.this_arg.bits, 0, v67, v68);
    v71 = UICamera_TypeInfo->static_fields;
    v71->currentTouch = 0;
    sub_1C3E508((CGThumbnailListItem_o *)&v71->currentTouch, 0, v72, v73);
    if ( !this->fields.allowMultiTouch )
      goto LABEL_98;
    goto LABEL_97;
  }
LABEL_98:
  v74 = UICamera_TypeInfo;
  if ( !UICamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    v74 = UICamera_TypeInfo;
  }
  v75 = v74->static_fields;
  if ( v10 )
  {
    v75->mUsingTouchEvents = 1;
  }
  else if ( v75->mUsingTouchEvents )
  {
    if ( !v74->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v74);
      v75 = UICamera_TypeInfo->static_fields;
    }
    v75->mUsingTouchEvents = 0;
  }
  else if ( this->fields.useMouse )
  {
    UICamera__ProcessMouse(this, v9);
  }
}


// local variable allocation has failed, the output may be wrong!
bool UICamera__Raycast(UnityEngine_Vector3_o inPos, const MethodInfo *method)
{
  const MethodInfo *v2; // x1
  float z; // s10
  int32_t v4; // w28
  __int64 currentCamera; // x0
  struct BetterList_UICamera__o *list; // x8
  struct UICamera_array *buffer; // x8
  Il2CppClass **v8; // x8
  Il2CppClass *v9; // x20
  UnityEngine_GameObject_o *gameObject; // x21
  UnityEngine_Camera_o *cachedCamera; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  UICamera_c *v14; // x8
  UnityEngine_Camera_o *v15; // x21
  struct UICamera_StaticFields *static_fields; // x0
  UICamera_c *v17; // x0
  UICamera_c *v18; // x0
  int32_t cullingMask; // w21
  UnityEngine_LayerMask_o v20; // w0
  int32_t v21; // w0
  float v22; // s11
  int32_t v23; // w22
  UICamera_c *v24; // x0
  float farClipPlane; // s0
  int32_t v26; // w21
  __int64 v27; // x8
  __int64 v28; // x20
  __int128 *v29; // x21
  UnityEngine_GameObject_o *v30; // x22
  UnityEngine_Object_o *v31; // x23
  void *v32; // x22
  UICamera_c *v33; // x0
  float *v34; // x8
  float v35; // s7
  float v36; // s13
  __int64 v37; // kr10_8
  __int64 v38; // kr18_8
  float v39; // s9
  float v40; // s8
  float v41; // s14
  float v42; // s16
  float v43; // s0
  float v44; // s2
  float v45; // s1
  float v46; // s0
  float v47; // s11
  float v48; // s12
  float v49; // s13
  UnityEngine_Object_o *v50; // x21
  UICamera_c *v51; // x0
  float *v52; // x8
  float v53; // s7
  float v54; // s13
  __int64 v55; // kr28_8
  __int64 v56; // kr30_8
  float v57; // s9
  float v58; // s8
  float v59; // s14
  float v60; // s16
  float v61; // s0
  float v62; // s2
  float v63; // s1
  float v64; // s0
  UICamera_c *v65; // x0
  float v66; // s11
  float v67; // s12
  float v68; // s13
  float *v69; // x8
  struct UICamera_StaticFields *v70; // x9
  float v71; // s11
  float v72; // s12
  int v73; // w8
  __int64 v74; // x20
  UnityEngine_GameObject_o *v75; // x20
  UnityEngine_Object_o *v76; // x21
  void *v77; // x21
  UICamera_c *v78; // x0
  unsigned __int64 v79; // x26
  __int64 v80; // x21
  UnityEngine_GameObject_o *v81; // x22
  UnityEngine_Object_o *Component_object; // x23
  void *monitor; // x23
  Il2CppObject *v84; // x23
  UICamera_c *v85; // x8
  __int128 v86; // q1
  __int128 v87; // q2
  struct UICamera_StaticFields *v88; // x8
  UnityEngine_GameObject_o *v89; // x1
  CGThumbnailListItem_o *p_go; // x0
  int32_t v91; // w2
  const MethodInfo *v92; // x3
  struct UICamera_StaticFields *v93; // x8
  BetterList_UICamera_DepthEntry__o *mHits; // x22
  const MethodInfo_3331938 *v95; // x23
  UICamera_c *v96; // x8
  BetterList_UICamera_DepthEntry__o *v97; // x20
  BetterList_CompareFunc_UICamera_DepthEntry__o *v98; // x21
  Il2CppObject *v99; // x22
  struct UICamera___c_StaticFields *v100; // x0
  int32_t v101; // w2
  const MethodInfo *v102; // x3
  unsigned __int64 v103; // x20
  __int64 i; // x21
  struct BetterList_UICamera_DepthEntry__o *v105; // x8
  signed __int64 size; // x22
  struct UICamera_DepthEntry_array *v107; // x8
  Il2CppObject *v108; // x22
  float v109; // s11
  float v110; // s12
  float v111; // s13
  const MethodInfo *v112; // x1
  UnityEngine_GameObject_o *v113; // x22
  __int64 v114; // x23
  UnityEngine_GameObject_o *v115; // x21
  UnityEngine_Object_o *v116; // x22
  void *v117; // x22
  UICamera_c *v118; // x0
  Il2CppObject *v119; // x22
  int32_t v120; // w2
  const MethodInfo *v121; // x3
  UICamera_c *v122; // x8
  struct UICamera_StaticFields *v123; // x9
  UICamera_c *v124; // x8
  struct UICamera_StaticFields *v125; // x9
  float v126; // w11
  struct UICamera_StaticFields *v127; // x8
  BetterList_UICamera_DepthEntry__o *v128; // x21
  const MethodInfo_3331938 *v129; // x22
  UICamera_c *v130; // x8
  BetterList_UICamera_DepthEntry__o *v131; // x20
  BetterList_CompareFunc_UICamera_DepthEntry__o *v132; // x21
  Il2CppObject *v133; // x22
  struct UICamera___c_StaticFields *v134; // x0
  int32_t v135; // w2
  const MethodInfo *v136; // x3
  unsigned __int64 v137; // x20
  __int64 v138; // x21
  signed __int64 v139; // x22
  struct UICamera_DepthEntry_array *v140; // x8
  Il2CppObject *v141; // x21
  UICamera_c *v142; // x0
  int32_t v143; // w2
  const MethodInfo *v144; // x3
  UICamera_c *v145; // x0
  UnityEngine_GameObject_o *v146; // x1
  CGThumbnailListItem_o *v147; // x0
  UICamera_c *v149; // x0
  UICamera_c *v150; // x8
  __int128 v151; // q1
  __int128 v152; // q2
  struct UICamera_StaticFields *v153; // x9
  int32_t go; // w1
  CGThumbnailListItem_o *v155; // x0
  int32_t v156; // w2
  const MethodInfo *v157; // x3
  UICamera_c *v158; // x8
  __int64 v159; // x11
  struct UICamera_StaticFields *v160; // x10
  UICamera_c *v161; // x0
  int32_t v162; // w1
  CGThumbnailListItem_o *v163; // x0
  int32_t v164; // w2
  const MethodInfo *v165; // x3
  UICamera_c *v166; // x0
  UICamera_c *v167; // x8
  UnityEngine_GameObject_o *v168; // x1
  CGThumbnailListItem_o *p_hoveredObject; // x0
  int32_t v170; // w2
  const MethodInfo *v171; // x3
  UICamera_c *v172; // x0
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v174; // x1
  UnityEngine_Object_o *RootRigidbody; // x0
  float *v176; // x8
  UnityEngine_GameObject_o *v177; // x1
  CGThumbnailListItem_o *v178; // x0
  int32_t v179; // w2
  const MethodInfo *v180; // x3
  UICamera_c *v181; // x0
  UnityEngine_Transform_o *v182; // x0
  const MethodInfo *v183; // x1
  UnityEngine_Object_o *v184; // x19
  UnityEngine_GameObject_o *v185; // x0
  UICamera_c *v186; // x8
  CGThumbnailListItem_c *v187; // x19
  __int128 v188; // q1
  __int128 v189; // q2
  _OWORD *v190; // x8
  __int128 v191; // q1
  __int128 v192; // q2
  UICamera_c *v193; // x8
  float v194; // [xsp+14h] [xbp-1FCh]
  float v195; // [xsp+14h] [xbp-1FCh]
  float v196; // [xsp+18h] [xbp-1F8h]
  float v197; // [xsp+18h] [xbp-1F8h]
  float x; // [xsp+28h] [xbp-1E8h]
  float y; // [xsp+2Ch] [xbp-1E4h]
  UICamera_DepthEntry_o src; // [xsp+30h] [xbp-1E0h] BYREF
  UICamera_DepthEntry_o dest; // [xsp+78h] [xbp-198h] BYREF
  UnityEngine_Ray_o v202; // [xsp+C0h] [xbp-150h] BYREF
  UnityEngine_Ray_o v203; // [xsp+E0h] [xbp-130h] BYREF
  UnityEngine_Ray_o v204; // [xsp+100h] [xbp-110h] BYREF
  UICamera_DepthEntry_o v205; // [xsp+120h] [xbp-F0h] BYREF
  UnityEngine_Vector2_o v206; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v207; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o v208; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v209; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v210; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v211; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED
  UnityEngine_Vector3_o v212; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v213; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v214; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED
  UnityEngine_Vector3_o v215; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v216; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o point; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v218; // 0:s0.4,4:s1.4,8:s2.4

  z = inPos.fields.z;
  x = inPos.fields.x;
  y = inPos.fields.y;
  if ( (byte_4C5B2C5 & 1) == 0 )
  {
    sub_1C3E564(&Method_BetterList_UICamera_DepthEntry__Add__);
    sub_1C3E564(&Method_BetterList_UICamera_DepthEntry__Clear__);
    sub_1C3E564(&Method_BetterList_UICamera_DepthEntry__Sort__);
    sub_1C3E564(&Method_BetterList_UICamera_DepthEntry__get_Item__);
    sub_1C3E564(&Method_BetterList_UICamera__get_Item__);
    sub_1C3E564(&BetterList_CompareFunc_UICamera_DepthEntry__TypeInfo);
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    sub_1C3E564(&Method_NGUITools_FindInParents_UIRect___);
    sub_1C3E564(&NGUITools_TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&UnityEngine_Physics2D_TypeInfo);
    sub_1C3E564(&UnityEngine_Physics_TypeInfo);
    sub_1C3E564(&Method_UICamera___c__Raycast_b__125_0__);
    sub_1C3E564(&Method_UICamera___c__Raycast_b__125_1__);
    sub_1C3E564(&UICamera___c_TypeInfo);
    sub_1C3E564(&UICamera_TypeInfo);
    byte_4C5B2C5 = 1;
  }
  v4 = 0;
  memset(&v204, 0, sizeof(v204));
  while ( 2 )
  {
    currentCamera = (__int64)UICamera_TypeInfo;
    if ( !UICamera_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
      currentCamera = (__int64)UICamera_TypeInfo;
    }
    list = **(struct BetterList_UICamera__o ***)(currentCamera + 184);
    if ( !list )
      goto LABEL_284;
    if ( v4 >= list->fields.size )
      return 0;
    if ( !*(_DWORD *)(currentCamera + 224) )
    {
      j_il2cpp_runtime_class_init_0(currentCamera);
      list = UICamera_TypeInfo->static_fields->list;
      if ( !list )
        goto LABEL_284;
    }
    buffer = list->fields.buffer;
    if ( !buffer )
      goto LABEL_284;
    if ( (unsigned int)v4 >= LODWORD(buffer->max_length) )
      goto LABEL_285;
    v8 = &buffer->obj.klass + v4;
    v9 = v8[4];
    if ( !v9 )
      goto LABEL_284;
    if ( !UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)v8[4], 0) )
      goto LABEL_25;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v9, 0);
    if ( !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    if ( !NGUITools__GetActive_49418336(gameObject, 0) )
      goto LABEL_25;
    cachedCamera = UICamera__get_cachedCamera((UICamera_o *)v9, v2);
    v14 = UICamera_TypeInfo;
    v15 = cachedCamera;
    if ( !UICamera_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
      v14 = UICamera_TypeInfo;
    }
    static_fields = v14->static_fields;
    static_fields->currentCamera = v15;
    sub_1C3E508((CGThumbnailListItem_o *)&static_fields->currentCamera, (int32_t)v15, v12, v13);
    currentCamera = (__int64)UICamera_TypeInfo->static_fields->currentCamera;
    if ( !currentCamera )
      goto LABEL_284;
    if ( !UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)currentCamera, 0) )
      goto LABEL_25;
    v17 = UICamera_TypeInfo;
    if ( !UICamera_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
      v17 = UICamera_TypeInfo;
    }
    currentCamera = (__int64)v17->static_fields->currentCamera;
    if ( !currentCamera )
      goto LABEL_284;
    v208.fields.x = x;
    v208.fields.y = y;
    v208.fields.z = z;
    v209 = UnityEngine_Camera__ScreenToViewportPoint((UnityEngine_Camera_o *)currentCamera, v208, 0);
    if ( (LODWORD(v209.fields.x) & 0x7FFFFFFFu) > 0x7F800000
      || v209.fields.y > 1.0
      || v209.fields.y < 0.0
      || v209.fields.x > 1.0
      || v209.fields.x < 0.0
      || (LODWORD(v209.fields.y) & 0x7FFFFFFFu) > 0x7F800000 )
    {
      goto LABEL_25;
    }
    v18 = UICamera_TypeInfo;
    if ( !UICamera_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
      v18 = UICamera_TypeInfo;
    }
    currentCamera = (__int64)v18->static_fields->currentCamera;
    if ( !currentCamera )
      goto LABEL_284;
    v210.fields.x = x;
    v210.fields.y = y;
    v210.fields.z = z;
    UnityEngine_Camera__ScreenPointToRay_71148320(
      (UnityEngine_Ray_o *)&v205,
      (UnityEngine_Camera_o *)currentCamera,
      v210,
      0);
    *(_OWORD *)&v204.fields.m_Origin.fields.x = *(_OWORD *)&v205.fields.depth;
    *(_QWORD *)&v204.fields.m_Direction.fields.y = *(_QWORD *)&v205.fields.hit.fields.m_Normal.fields.x;
    currentCamera = (__int64)UICamera_TypeInfo->static_fields->currentCamera;
    if ( !currentCamera )
      goto LABEL_284;
    cullingMask = UnityEngine_Camera__get_cullingMask((UnityEngine_Camera_o *)currentCamera, 0);
    v20.fields.m_Mask = *(&v9->_1.byval_arg.bits + 1);
    v21 = UnityEngine_LayerMask__op_Implicit(v20, 0);
    v22 = *((float *)&v9->_1.castClass + 1);
    v23 = v21;
    if ( v22 <= 0.0 )
    {
      v24 = UICamera_TypeInfo;
      if ( !UICamera_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
        v24 = UICamera_TypeInfo;
      }
      currentCamera = (__int64)v24->static_fields->currentCamera;
      if ( !currentCamera )
        goto LABEL_284;
      farClipPlane = UnityEngine_Camera__get_farClipPlane((UnityEngine_Camera_o *)currentCamera, 0);
      currentCamera = (__int64)UICamera_TypeInfo->static_fields->currentCamera;
      if ( !currentCamera )
        goto LABEL_284;
      v22 = farClipPlane - UnityEngine_Camera__get_nearClipPlane((UnityEngine_Camera_o *)currentCamera, 0);
    }
    v26 = v23 & cullingMask;
    switch ( HIDWORD(v9->_1.byval_arg.data) )
    {
      case 0:
        *(_OWORD *)&v205.fields.depth = *(_OWORD *)&v204.fields.m_Origin.fields.x;
        *(_QWORD *)&v205.fields.hit.fields.m_Normal.fields.x = *(_QWORD *)&v204.fields.m_Direction.fields.y;
        if ( !UICamera_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
        if ( !UnityEngine_Physics_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Physics_TypeInfo);
        *(_OWORD *)&v203.fields.m_Origin.fields.x = *(_OWORD *)&v205.fields.depth;
        *(_QWORD *)&v203.fields.m_Direction.fields.y = *(_QWORD *)&v205.fields.hit.fields.m_Normal.fields.x;
        if ( !UnityEngine_Physics__Raycast_71657544(&v203, &UICamera_TypeInfo->static_fields->lastHit, v22, v26, 0) )
          goto LABEL_25;
        v166 = UICamera_TypeInfo;
        if ( !UICamera_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
          v166 = UICamera_TypeInfo;
        }
        point = UnityEngine_RaycastHit__get_point(&v166->static_fields->lastHit, 0);
        v167 = UICamera_TypeInfo;
        UICamera_TypeInfo->static_fields->lastWorldPosition = point;
        currentCamera = (__int64)UnityEngine_RaycastHit__get_collider(&v167->static_fields->lastHit, 0);
        if ( !currentCamera )
          goto LABEL_284;
        v168 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)currentCamera, 0);
        p_hoveredObject = (CGThumbnailListItem_o *)&UICamera_TypeInfo->static_fields->hoveredObject;
        p_hoveredObject->klass = (CGThumbnailListItem_c *)v168;
        sub_1C3E508(p_hoveredObject, (int32_t)v168, v170, v171);
        currentCamera = (__int64)UICamera_TypeInfo->static_fields->list;
        if ( !currentCamera )
          goto LABEL_284;
        currentCamera = (__int64)BetterList_object___get_Item(
                                   (BetterList_T__o *)currentCamera,
                                   0,
                                   (const MethodInfo_332BC78 *)Method_BetterList_UICamera__get_Item__);
        if ( !currentCamera )
          goto LABEL_284;
        if ( *(_BYTE *)(currentCamera + 40) )
          return 1;
        v172 = UICamera_TypeInfo;
        if ( !UICamera_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
          v172 = UICamera_TypeInfo;
        }
        currentCamera = (__int64)v172->static_fields->hoveredObject;
        if ( !currentCamera )
          goto LABEL_284;
        transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)currentCamera, 0);
        RootRigidbody = (UnityEngine_Object_o *)UICamera__FindRootRigidbody(transform, v174);
        goto LABEL_270;
      case 1:
        *(_OWORD *)&v205.fields.depth = *(_OWORD *)&v204.fields.m_Origin.fields.x;
        *(_QWORD *)&v205.fields.hit.fields.m_Normal.fields.x = *(_QWORD *)&v204.fields.m_Direction.fields.y;
        if ( !UnityEngine_Physics_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Physics_TypeInfo);
        *(_OWORD *)&v202.fields.m_Origin.fields.x = *(_OWORD *)&v205.fields.depth;
        *(_QWORD *)&v202.fields.m_Direction.fields.y = *(_QWORD *)&v205.fields.hit.fields.m_Normal.fields.x;
        currentCamera = (__int64)UnityEngine_Physics__RaycastAll_71660156(&v202, v22, v26, 0);
        if ( !currentCamera )
          goto LABEL_284;
        v27 = *(_QWORD *)(currentCamera + 24);
        v28 = currentCamera;
        if ( (int)v27 >= 2 )
        {
          v79 = 0;
          v80 = currentCamera + 32;
          while ( 1 )
          {
            if ( v79 >= (unsigned int)v27 )
              goto LABEL_285;
            currentCamera = (__int64)UnityEngine_RaycastHit__get_collider((UnityEngine_RaycastHit_o *)v80, 0);
            if ( !currentCamera )
              goto LABEL_284;
            currentCamera = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)currentCamera, 0);
            if ( !currentCamera )
              goto LABEL_284;
            v81 = (UnityEngine_GameObject_o *)currentCamera;
            Component_object = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_object_(
                                                         (UnityEngine_GameObject_o *)currentCamera,
                                                         (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            currentCamera = UnityEngine_Object__op_Inequality(Component_object, 0, 0);
            if ( (currentCamera & 1) != 0 )
            {
              if ( !Component_object )
                goto LABEL_284;
              currentCamera = UIWidget__get_isVisible((UIWidget_o *)Component_object, 0);
              if ( (currentCamera & 1) != 0 )
              {
                monitor = Component_object[9].monitor;
                if ( !monitor )
                  goto LABEL_125;
                if ( v79 >= *(unsigned int *)(v28 + 24) )
                  goto LABEL_285;
                v214 = UnityEngine_RaycastHit__get_point((UnityEngine_RaycastHit_o *)v80, 0);
                currentCamera = (*((__int64 (__fastcall **)(_QWORD, _QWORD, long double, long double, long double))monitor
                                 + 3))(
                                  *((_QWORD *)monitor + 8),
                                  *((_QWORD *)monitor + 5),
                                  *(long double *)&v214.fields.x,
                                  *(long double *)&v214.fields.y,
                                  *(long double *)&v214.fields.z);
                if ( (currentCamera & 1) != 0 )
                  goto LABEL_125;
              }
            }
            else
            {
              if ( !NGUITools_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
              v84 = NGUITools__FindInParents_object_(
                      v81,
                      (const MethodInfo_3183E10 *)Method_NGUITools_FindInParents_UIRect___);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              currentCamera = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v84, 0, 0);
              if ( (currentCamera & 1) == 0 )
                goto LABEL_125;
              if ( !v84 )
                goto LABEL_284;
              if ( *(float *)&v84[9].klass >= 0.001 )
              {
LABEL_125:
                if ( !UICamera_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
                if ( !NGUITools_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
                currentCamera = NGUITools__CalculateRaycastDepth(v81, 0);
                v85 = UICamera_TypeInfo;
                UICamera_TypeInfo->static_fields->mHit.fields.depth = currentCamera;
                if ( (_DWORD)currentCamera != 0x7FFFFFFF )
                {
                  if ( !v85->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(v85);
                  if ( v79 >= *(unsigned int *)(v28 + 24) )
                    goto LABEL_285;
                  v87 = *(_OWORD *)v80;
                  v86 = *(_OWORD *)(v80 + 16);
                  *(_OWORD *)&src.fields.hit.fields.m_FaceID = *(_OWORD *)(v80 + 28);
                  *(_OWORD *)&src.fields.depth = v87;
                  *(_OWORD *)&src.fields.hit.fields.m_Normal.fields.x = v86;
                  v88 = UICamera_TypeInfo->static_fields;
                  *(_OWORD *)&v88->mHit.fields.hit.fields.m_Distance = *(_OWORD *)&src.fields.hit.fields.m_FaceID;
                  *(_OWORD *)&v88->mHit.fields.hit.fields.m_Point.fields.x = v87;
                  *(_OWORD *)&v88->mHit.fields.hit.fields.m_Normal.fields.y = v86;
                  if ( v79 >= *(unsigned int *)(v28 + 24) )
                    goto LABEL_285;
                  UICamera_TypeInfo->static_fields->mHit.fields.point = UnityEngine_RaycastHit__get_point(
                                                                          (UnityEngine_RaycastHit_o *)v80,
                                                                          0);
                  if ( v79 >= *(unsigned int *)(v28 + 24) )
                    goto LABEL_285;
                  currentCamera = (__int64)UnityEngine_RaycastHit__get_collider((UnityEngine_RaycastHit_o *)v80, 0);
                  if ( !currentCamera )
                    goto LABEL_284;
                  v89 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)currentCamera, 0);
                  p_go = (CGThumbnailListItem_o *)&UICamera_TypeInfo->static_fields->mHit.fields.go;
                  p_go->klass = (CGThumbnailListItem_c *)v89;
                  sub_1C3E508(p_go, (int32_t)v89, v91, v92);
                  v93 = UICamera_TypeInfo->static_fields;
                  mHits = v93->mHits;
                  currentCamera = (__int64)memcpy(&dest, &v93->mHit, sizeof(dest));
                  if ( !mHits )
                    goto LABEL_284;
                  v95 = (const MethodInfo_3331938 *)Method_BetterList_UICamera_DepthEntry__Add__;
                  memcpy(&v205, &dest, sizeof(v205));
                  BetterList_UICamera_DepthEntry___Add(mHits, &v205, v95);
                }
              }
            }
            LODWORD(v27) = *(_DWORD *)(v28 + 24);
            ++v79;
            v80 += 44;
            if ( (__int64)v79 >= (int)v27 )
            {
              v96 = UICamera_TypeInfo;
              if ( !UICamera_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
                v96 = UICamera_TypeInfo;
              }
              currentCamera = (__int64)UICamera___c_TypeInfo;
              v97 = v96->static_fields->mHits;
              if ( !UICamera___c_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UICamera___c_TypeInfo);
                currentCamera = (__int64)UICamera___c_TypeInfo;
              }
              v98 = *(BetterList_CompareFunc_UICamera_DepthEntry__o **)(*(_QWORD *)(currentCamera + 184) + 8LL);
              if ( !v98 )
              {
                if ( !*(_DWORD *)(currentCamera + 224) )
                {
                  j_il2cpp_runtime_class_init_0(currentCamera);
                  currentCamera = (__int64)UICamera___c_TypeInfo;
                }
                v99 = **(Il2CppObject ***)(currentCamera + 184);
                v98 = (BetterList_CompareFunc_UICamera_DepthEntry__o *)sub_1C3E7B0(BetterList_CompareFunc_UICamera_DepthEntry__TypeInfo);
                BetterList_CompareFunc_UICamera_DepthEntry____ctor(v98, v99, Method_UICamera___c__Raycast_b__125_0__, 0);
                v100 = UICamera___c_TypeInfo->static_fields;
                v100->__9__125_0 = v98;
                sub_1C3E508((CGThumbnailListItem_o *)&v100->__9__125_0, (int32_t)v98, v101, v102);
              }
              if ( v97 )
              {
                BetterList_UICamera_DepthEntry___Sort(
                  v97,
                  (BetterList_CompareFunc_T__o *)v98,
                  (const MethodInfo_3332204 *)Method_BetterList_UICamera_DepthEntry__Sort__);
                v103 = 0;
                for ( i = 32; ; i += 72 )
                {
                  currentCamera = (__int64)UICamera_TypeInfo;
                  if ( !UICamera_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
                    currentCamera = (__int64)UICamera_TypeInfo;
                  }
                  v105 = *(struct BetterList_UICamera_DepthEntry__o **)(*(_QWORD *)(currentCamera + 184) + 456LL);
                  if ( !v105 )
                    goto LABEL_284;
                  size = v105->fields.size;
                  if ( !*(_DWORD *)(currentCamera + 224) )
                  {
                    j_il2cpp_runtime_class_init_0(currentCamera);
                    v105 = UICamera_TypeInfo->static_fields->mHits;
                    if ( !v105 )
                      goto LABEL_284;
                  }
                  if ( (__int64)v103 >= size )
                    goto LABEL_224;
                  v107 = v105->fields.buffer;
                  if ( !v107 )
                    goto LABEL_284;
                  if ( v103 >= LODWORD(v107->max_length) )
                    goto LABEL_285;
                  if ( UICamera__IsVisible_49146472((UICamera_DepthEntry_o *)((char *)v107 + i), v2) )
                    break;
                  ++v103;
                }
                v149 = UICamera_TypeInfo;
                if ( !UICamera_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
                  v149 = UICamera_TypeInfo;
                }
                currentCamera = (__int64)v149->static_fields->mHits;
                if ( currentCamera )
                {
                  BetterList_UICamera_DepthEntry___get_Item(
                    &dest,
                    (BetterList_UICamera_DepthEntry__o *)currentCamera,
                    v103,
                    (const MethodInfo_3331670 *)Method_BetterList_UICamera_DepthEntry__get_Item__);
                  memcpy(&v205, &dest, sizeof(v205));
                  v150 = UICamera_TypeInfo;
                  v151 = *(_OWORD *)&v205.fields.hit.fields.m_Normal.fields.y;
                  v152 = *(_OWORD *)&v205.fields.hit.fields.m_Point.fields.x;
                  v153 = UICamera_TypeInfo->static_fields;
                  *(_OWORD *)&v153->lastHit.fields.m_Distance = *(_OWORD *)&v205.fields.hit.fields.m_Distance;
                  *(_OWORD *)&v153->lastHit.fields.m_Point.fields.x = v152;
                  *(_OWORD *)&v153->lastHit.fields.m_Normal.fields.y = v151;
                  currentCamera = (__int64)v150->static_fields->mHits;
                  if ( currentCamera )
                  {
                    BetterList_UICamera_DepthEntry___get_Item(
                      &dest,
                      (BetterList_UICamera_DepthEntry__o *)currentCamera,
                      v103,
                      (const MethodInfo_3331670 *)Method_BetterList_UICamera_DepthEntry__get_Item__);
                    go = (int32_t)dest.fields.go;
                    v155 = (CGThumbnailListItem_o *)&UICamera_TypeInfo->static_fields->hoveredObject;
                    v155->klass = (CGThumbnailListItem_c *)dest.fields.go;
                    sub_1C3E508(v155, go, v156, v157);
                    currentCamera = (__int64)UICamera_TypeInfo->static_fields->mHits;
                    if ( currentCamera )
                    {
                      BetterList_UICamera_DepthEntry___get_Item(
                        &src,
                        (BetterList_UICamera_DepthEntry__o *)currentCamera,
                        v103,
                        (const MethodInfo_3331670 *)Method_BetterList_UICamera_DepthEntry__get_Item__);
                      memcpy(&dest, &src, sizeof(dest));
                      v158 = UICamera_TypeInfo;
                      v159 = *(_QWORD *)&dest.fields.point.fields.x;
                      v160 = UICamera_TypeInfo->static_fields;
                      v160->lastWorldPosition.fields.z = dest.fields.point.fields.z;
                      *(_QWORD *)&v160->lastWorldPosition.fields.x = v159;
                      goto LABEL_245;
                    }
                  }
                }
              }
              goto LABEL_284;
            }
          }
        }
        if ( (_DWORD)v27 != 1 )
          goto LABEL_25;
        v29 = (__int128 *)(currentCamera + 32);
        currentCamera = (__int64)UnityEngine_RaycastHit__get_collider(
                                   (UnityEngine_RaycastHit_o *)(currentCamera + 32),
                                   0);
        if ( !currentCamera )
          goto LABEL_284;
        currentCamera = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)currentCamera, 0);
        if ( !currentCamera )
          goto LABEL_284;
        v30 = (UnityEngine_GameObject_o *)currentCamera;
        v31 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_object_(
                                        (UnityEngine_GameObject_o *)currentCamera,
                                        (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        currentCamera = UnityEngine_Object__op_Inequality(v31, 0, 0);
        if ( (currentCamera & 1) != 0 )
        {
          if ( !v31 )
            goto LABEL_284;
          currentCamera = UIWidget__get_isVisible((UIWidget_o *)v31, 0);
          if ( (currentCamera & 1) == 0 )
            goto LABEL_25;
          v32 = v31[9].monitor;
          if ( v32 )
          {
            if ( !*(_DWORD *)(v28 + 24) )
              goto LABEL_285;
            v211 = UnityEngine_RaycastHit__get_point((UnityEngine_RaycastHit_o *)(v28 + 32), 0);
            currentCamera = (*((__int64 (__fastcall **)(_QWORD, _QWORD, long double, long double, long double))v32 + 3))(
                              *((_QWORD *)v32 + 8),
                              *((_QWORD *)v32 + 5),
                              *(long double *)&v211.fields.x,
                              *(long double *)&v211.fields.y,
                              *(long double *)&v211.fields.z);
            if ( (currentCamera & 1) == 0 )
              goto LABEL_25;
          }
        }
        else
        {
          if ( !NGUITools_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
          v108 = NGUITools__FindInParents_object_(
                   v30,
                   (const MethodInfo_3183E10 *)Method_NGUITools_FindInParents_UIRect___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          currentCamera = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v108, 0, 0);
          if ( (currentCamera & 1) != 0 )
          {
            if ( !v108 )
              goto LABEL_284;
            if ( *(float *)&v108[9].klass < 0.001 )
              goto LABEL_25;
          }
        }
        if ( !*(_DWORD *)(v28 + 24) )
          goto LABEL_285;
        v215 = UnityEngine_RaycastHit__get_point((UnityEngine_RaycastHit_o *)(v28 + 32), 0);
        if ( !*(_DWORD *)(v28 + 24) )
          goto LABEL_285;
        v109 = v215.fields.x;
        v110 = v215.fields.y;
        v111 = v215.fields.z;
        currentCamera = (__int64)UnityEngine_RaycastHit__get_collider((UnityEngine_RaycastHit_o *)(v28 + 32), 0);
        if ( !currentCamera )
          goto LABEL_284;
        v113 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)currentCamera, 0);
        if ( !UICamera_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
        v216.fields.x = v109;
        v216.fields.y = v110;
        v216.fields.z = v111;
        currentCamera = UICamera__IsVisible(v216, v113, v112);
        if ( (currentCamera & 1) != 0 )
        {
          if ( !*(_DWORD *)(v28 + 24) )
            goto LABEL_285;
          v189 = *v29;
          v188 = *(_OWORD *)(v28 + 48);
          currentCamera = (__int64)UICamera_TypeInfo;
          *(_OWORD *)&v205.fields.hit.fields.m_FaceID = *(_OWORD *)(v28 + 60);
          *(_OWORD *)&v205.fields.depth = v189;
          *(_OWORD *)&v205.fields.hit.fields.m_Normal.fields.x = v188;
          if ( !UICamera_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
            currentCamera = (__int64)UICamera_TypeInfo;
          }
          v190 = *(_OWORD **)(currentCamera + 184);
          v192 = *(_OWORD *)&v205.fields.depth;
          v191 = *(_OWORD *)&v205.fields.hit.fields.m_Normal.fields.x;
          *(_OWORD *)((char *)v190 + 108) = *(_OWORD *)&v205.fields.hit.fields.m_FaceID;
          v190[5] = v192;
          v190[6] = v191;
          if ( !*(_DWORD *)(v28 + 24) )
LABEL_285:
            sub_1C3E7C8(currentCamera, v2);
          v218 = UnityEngine_RaycastHit__get_point((UnityEngine_RaycastHit_o *)(v28 + 32), 0);
          v193 = UICamera_TypeInfo;
          UICamera_TypeInfo->static_fields->lastWorldPosition = v218;
          currentCamera = (__int64)UnityEngine_RaycastHit__get_collider(&v193->static_fields->lastHit, 0);
          if ( !currentCamera )
            goto LABEL_284;
          v146 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)currentCamera, 0);
          v147 = (CGThumbnailListItem_o *)&UICamera_TypeInfo->static_fields->hoveredObject;
          v147->klass = (CGThumbnailListItem_c *)v146;
LABEL_283:
          sub_1C3E508(v147, (int32_t)v146, v143, v144);
          return 1;
        }
LABEL_25:
        ++v4;
        continue;
      case 2:
        v33 = UICamera_TypeInfo;
        if ( !UICamera_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
          v33 = UICamera_TypeInfo;
        }
        v34 = (float *)v33->static_fields;
        v35 = v204.fields.m_Origin.fields.y;
        v36 = v204.fields.m_Origin.fields.x;
        v37 = *(_QWORD *)&v204.fields.m_Origin.fields.z;
        v38 = *(_QWORD *)&v204.fields.m_Direction.fields.y;
        v39 = v34[116];
        v40 = v34[117];
        v41 = v34[118];
        v42 = v34[119];
        if ( !byte_4C506A5 )
        {
          v194 = v34[119];
          v196 = v204.fields.m_Origin.fields.y;
          sub_1C3E564(&UnityEngine_Mathf_TypeInfo);
          v42 = v194;
          v35 = v196;
          byte_4C506A5 = 1;
        }
        v43 = (float)(*((float *)&v38 + 1) * v41)
            + (float)((float)(*((float *)&v37 + 1) * v39) + (float)(*(float *)&v38 * v40));
        v44 = fmaxf(fabsf(v43), 0.0) * 0.000001;
        v45 = UnityEngine_Mathf_TypeInfo->static_fields->Epsilon * 8.0;
        if ( v44 > v45 )
          v45 = v44;
        if ( vabds_f32(0.0, v43) < v45 )
          goto LABEL_25;
        v46 = (float)((float)-(float)((float)(*(float *)&v37 * v41) + (float)((float)(v36 * v39) + (float)(v35 * v40)))
                    - v42)
            / v43;
        if ( v46 <= 0.0 )
          goto LABEL_25;
        v212 = UnityEngine_Ray__GetPoint(&v204, v46, 0);
        v47 = v212.fields.x;
        v48 = v212.fields.y;
        v49 = v212.fields.z;
        if ( !UnityEngine_Physics2D_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Physics2D_TypeInfo);
        v206.fields.x = v47;
        v206.fields.y = v48;
        v50 = (UnityEngine_Object_o *)UnityEngine_Physics2D__OverlapPoint(v206, v26, 0);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( !UnityEngine_Object__op_Implicit(v50, 0) )
          goto LABEL_25;
        currentCamera = (__int64)UICamera_TypeInfo;
        if ( !UICamera_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
          currentCamera = (__int64)UICamera_TypeInfo;
        }
        v176 = *(float **)(currentCamera + 184);
        v176[17] = v47;
        v176[18] = v48;
        v176[19] = v49;
        if ( !v50 )
          goto LABEL_284;
        v177 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v50, 0);
        v178 = (CGThumbnailListItem_o *)&UICamera_TypeInfo->static_fields->hoveredObject;
        v178->klass = (CGThumbnailListItem_c *)v177;
        sub_1C3E508(v178, (int32_t)v177, v179, v180);
        if ( LOBYTE(v9->_1.byval_arg.bits) )
          return 1;
        v181 = UICamera_TypeInfo;
        if ( !UICamera_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
          v181 = UICamera_TypeInfo;
        }
        currentCamera = (__int64)v181->static_fields->hoveredObject;
        if ( !currentCamera )
          goto LABEL_284;
        v182 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)currentCamera, 0);
        RootRigidbody = (UnityEngine_Object_o *)UICamera__FindRootRigidbody2D(v182, v183);
LABEL_270:
        v184 = RootRigidbody;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        currentCamera = UnityEngine_Object__op_Inequality(v184, 0, 0);
        if ( (currentCamera & 1) == 0 )
          return 1;
        if ( !v184 )
          goto LABEL_284;
        v185 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v184, 0);
        v186 = UICamera_TypeInfo;
        v187 = (CGThumbnailListItem_c *)v185;
        if ( !UICamera_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
          v186 = UICamera_TypeInfo;
        }
        LODWORD(v146) = (_DWORD)v187;
        v147 = (CGThumbnailListItem_o *)&v186->static_fields->hoveredObject;
        v147->klass = v187;
        goto LABEL_283;
      case 3:
        v51 = UICamera_TypeInfo;
        if ( !UICamera_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
          v51 = UICamera_TypeInfo;
        }
        v52 = (float *)v51->static_fields;
        v53 = v204.fields.m_Origin.fields.y;
        v54 = v204.fields.m_Origin.fields.x;
        v55 = *(_QWORD *)&v204.fields.m_Origin.fields.z;
        v56 = *(_QWORD *)&v204.fields.m_Direction.fields.y;
        v57 = v52[116];
        v58 = v52[117];
        v59 = v52[118];
        v60 = v52[119];
        if ( !byte_4C506A5 )
        {
          v195 = v52[119];
          v197 = v204.fields.m_Origin.fields.y;
          sub_1C3E564(&UnityEngine_Mathf_TypeInfo);
          v60 = v195;
          v53 = v197;
          byte_4C506A5 = 1;
        }
        v61 = (float)(*((float *)&v56 + 1) * v59)
            + (float)((float)(*((float *)&v55 + 1) * v57) + (float)(*(float *)&v56 * v58));
        v62 = fmaxf(fabsf(v61), 0.0) * 0.000001;
        v63 = UnityEngine_Mathf_TypeInfo->static_fields->Epsilon * 8.0;
        if ( v62 > v63 )
          v63 = v62;
        if ( vabds_f32(0.0, v61) < v63 )
          goto LABEL_25;
        v64 = (float)((float)-(float)((float)(*(float *)&v55 * v59) + (float)((float)(v54 * v57) + (float)(v53 * v58)))
                    - v60)
            / v61;
        if ( v64 <= 0.0 )
          goto LABEL_25;
        v213 = UnityEngine_Ray__GetPoint(&v204, v64, 0);
        v65 = UICamera_TypeInfo;
        v66 = v213.fields.x;
        v67 = v213.fields.y;
        v68 = v213.fields.z;
        if ( !UICamera_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
          v65 = UICamera_TypeInfo;
        }
        v69 = (float *)v65->static_fields;
        v69[17] = v66;
        v69[18] = v67;
        v69[19] = v68;
        v70 = v65->static_fields;
        v72 = v70->lastWorldPosition.fields.x;
        v71 = v70->lastWorldPosition.fields.y;
        if ( !UnityEngine_Physics2D_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Physics2D_TypeInfo);
        v207.fields.x = v72;
        v207.fields.y = v71;
        currentCamera = (__int64)UnityEngine_Physics2D__OverlapPointAll(v207, v26, 0);
        if ( !currentCamera )
          goto LABEL_284;
        v73 = *(_DWORD *)(currentCamera + 24);
        v74 = currentCamera;
        if ( v73 < 2 )
        {
          if ( v73 != 1 )
            goto LABEL_25;
          currentCamera = *(_QWORD *)(currentCamera + 32);
          if ( !currentCamera )
            goto LABEL_284;
          currentCamera = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)currentCamera, 0);
          if ( !currentCamera )
            goto LABEL_284;
          v75 = (UnityEngine_GameObject_o *)currentCamera;
          v76 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_object_(
                                          (UnityEngine_GameObject_o *)currentCamera,
                                          (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          currentCamera = UnityEngine_Object__op_Inequality(v76, 0, 0);
          if ( (currentCamera & 1) != 0 )
          {
            if ( !v76 )
              goto LABEL_284;
            if ( !UIWidget__get_isVisible((UIWidget_o *)v76, 0) )
              goto LABEL_25;
            v77 = v76[9].monitor;
            if ( v77 )
            {
              v78 = UICamera_TypeInfo;
              if ( !UICamera_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
                v78 = UICamera_TypeInfo;
              }
              if ( ((*((__int64 (__fastcall **)(_QWORD, _QWORD, float, float, float))v77 + 3))(
                      *((_QWORD *)v77 + 8),
                      *((_QWORD *)v77 + 5),
                      v78->static_fields->lastWorldPosition.fields.x,
                      v78->static_fields->lastWorldPosition.fields.y,
                      v78->static_fields->lastWorldPosition.fields.z)
                  & 1) == 0 )
                goto LABEL_25;
            }
          }
          else
          {
            if ( !NGUITools_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
            v141 = NGUITools__FindInParents_object_(
                     v75,
                     (const MethodInfo_3183E10 *)Method_NGUITools_FindInParents_UIRect___);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            currentCamera = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v141, 0, 0);
            if ( (currentCamera & 1) != 0 )
            {
              if ( !v141 )
                goto LABEL_284;
              if ( *(float *)&v141[9].klass < 0.001 )
                goto LABEL_25;
            }
          }
          v142 = UICamera_TypeInfo;
          if ( !UICamera_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
            v142 = UICamera_TypeInfo;
          }
          if ( UICamera__IsVisible(v142->static_fields->lastWorldPosition, v75, v2) )
          {
            v145 = UICamera_TypeInfo;
            if ( !UICamera_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
              v145 = UICamera_TypeInfo;
            }
            LODWORD(v146) = (_DWORD)v75;
            v147 = (CGThumbnailListItem_o *)&v145->static_fields->hoveredObject;
            v147->klass = (CGThumbnailListItem_c *)v75;
            goto LABEL_283;
          }
          goto LABEL_25;
        }
        v114 = 0;
        break;
      default:
        goto LABEL_25;
    }
    break;
  }
  do
  {
    if ( (unsigned int)v114 >= v73 )
      goto LABEL_285;
    currentCamera = *(_QWORD *)(v74 + 32 + 8 * v114);
    if ( !currentCamera )
      goto LABEL_284;
    currentCamera = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)currentCamera, 0);
    if ( !currentCamera )
      goto LABEL_284;
    v115 = (UnityEngine_GameObject_o *)currentCamera;
    v116 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_object_(
                                     (UnityEngine_GameObject_o *)currentCamera,
                                     (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    currentCamera = UnityEngine_Object__op_Inequality(v116, 0, 0);
    if ( (currentCamera & 1) != 0 )
    {
      if ( !v116 )
        goto LABEL_284;
      currentCamera = UIWidget__get_isVisible((UIWidget_o *)v116, 0);
      if ( (currentCamera & 1) == 0 )
        goto LABEL_203;
      v117 = v116[9].monitor;
      if ( v117 )
      {
        v118 = UICamera_TypeInfo;
        if ( !UICamera_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
          v118 = UICamera_TypeInfo;
        }
        currentCamera = (*((__int64 (__fastcall **)(_QWORD, _QWORD, float, float, float))v117 + 3))(
                          *((_QWORD *)v117 + 8),
                          *((_QWORD *)v117 + 5),
                          v118->static_fields->lastWorldPosition.fields.x,
                          v118->static_fields->lastWorldPosition.fields.y,
                          v118->static_fields->lastWorldPosition.fields.z);
        if ( (currentCamera & 1) == 0 )
          goto LABEL_203;
      }
    }
    else
    {
      if ( !NGUITools_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
      v119 = NGUITools__FindInParents_object_(
               v115,
               (const MethodInfo_3183E10 *)Method_NGUITools_FindInParents_UIRect___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      currentCamera = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v119, 0, 0);
      if ( (currentCamera & 1) != 0 )
      {
        if ( !v119 )
          goto LABEL_284;
        if ( *(float *)&v119[9].klass < 0.001 )
          goto LABEL_203;
      }
    }
    if ( !UICamera_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    if ( !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    currentCamera = NGUITools__CalculateRaycastDepth(v115, 0);
    v122 = UICamera_TypeInfo;
    v123 = UICamera_TypeInfo->static_fields;
    v123->mHit.fields.depth = currentCamera;
    if ( (_DWORD)currentCamera != 0x7FFFFFFF )
    {
      if ( !v122->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v122);
        v123 = UICamera_TypeInfo->static_fields;
      }
      v123->mHit.fields.go = v115;
      sub_1C3E508((CGThumbnailListItem_o *)&v123->mHit.fields.go, (int32_t)v115, v120, v121);
      v124 = UICamera_TypeInfo;
      v125 = UICamera_TypeInfo->static_fields;
      v126 = v125->lastWorldPosition.fields.z;
      *(_QWORD *)&v125->mHit.fields.point.fields.x = *(_QWORD *)&v125->lastWorldPosition.fields.x;
      v125->mHit.fields.point.fields.z = v126;
      v127 = v124->static_fields;
      v128 = v127->mHits;
      currentCamera = (__int64)memcpy(&dest, &v127->mHit, sizeof(dest));
      if ( !v128 )
        goto LABEL_284;
      v129 = (const MethodInfo_3331938 *)Method_BetterList_UICamera_DepthEntry__Add__;
      memcpy(&v205, &dest, sizeof(v205));
      BetterList_UICamera_DepthEntry___Add(v128, &v205, v129);
    }
LABEL_203:
    v73 = *(_DWORD *)(v74 + 24);
    ++v114;
  }
  while ( (int)v114 < v73 );
  v130 = UICamera_TypeInfo;
  if ( !UICamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    v130 = UICamera_TypeInfo;
  }
  currentCamera = (__int64)UICamera___c_TypeInfo;
  v131 = v130->static_fields->mHits;
  if ( !UICamera___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICamera___c_TypeInfo);
    currentCamera = (__int64)UICamera___c_TypeInfo;
  }
  v132 = *(BetterList_CompareFunc_UICamera_DepthEntry__o **)(*(_QWORD *)(currentCamera + 184) + 16LL);
  if ( !v132 )
  {
    if ( !*(_DWORD *)(currentCamera + 224) )
    {
      j_il2cpp_runtime_class_init_0(currentCamera);
      currentCamera = (__int64)UICamera___c_TypeInfo;
    }
    v133 = **(Il2CppObject ***)(currentCamera + 184);
    v132 = (BetterList_CompareFunc_UICamera_DepthEntry__o *)sub_1C3E7B0(BetterList_CompareFunc_UICamera_DepthEntry__TypeInfo);
    BetterList_CompareFunc_UICamera_DepthEntry____ctor(v132, v133, Method_UICamera___c__Raycast_b__125_1__, 0);
    v134 = UICamera___c_TypeInfo->static_fields;
    v134->__9__125_1 = v132;
    sub_1C3E508((CGThumbnailListItem_o *)&v134->__9__125_1, (int32_t)v132, v135, v136);
  }
  if ( !v131 )
    goto LABEL_284;
  BetterList_UICamera_DepthEntry___Sort(
    v131,
    (BetterList_CompareFunc_T__o *)v132,
    (const MethodInfo_3332204 *)Method_BetterList_UICamera_DepthEntry__Sort__);
  v137 = 0;
  v138 = 32;
  while ( 2 )
  {
    currentCamera = (__int64)UICamera_TypeInfo;
    if ( !UICamera_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
      currentCamera = (__int64)UICamera_TypeInfo;
    }
    v105 = *(struct BetterList_UICamera_DepthEntry__o **)(*(_QWORD *)(currentCamera + 184) + 456LL);
    if ( !v105 )
      goto LABEL_284;
    v139 = v105->fields.size;
    if ( !*(_DWORD *)(currentCamera + 224) )
    {
      j_il2cpp_runtime_class_init_0(currentCamera);
      v105 = UICamera_TypeInfo->static_fields->mHits;
      if ( !v105 )
        goto LABEL_284;
    }
    if ( (__int64)v137 >= v139 )
    {
LABEL_224:
      BetterList_UICamera_DepthEntry___Clear(
        v105,
        (const MethodInfo_3331920 *)Method_BetterList_UICamera_DepthEntry__Clear__);
      goto LABEL_25;
    }
    v140 = v105->fields.buffer;
    if ( !v140 )
      goto LABEL_284;
    if ( v137 >= LODWORD(v140->max_length) )
      goto LABEL_285;
    if ( !UICamera__IsVisible_49146472((UICamera_DepthEntry_o *)((char *)v140 + v138), v2) )
    {
      ++v137;
      v138 += 72;
      continue;
    }
    break;
  }
  v161 = UICamera_TypeInfo;
  if ( !UICamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    v161 = UICamera_TypeInfo;
  }
  currentCamera = (__int64)v161->static_fields->mHits;
  if ( !currentCamera )
    goto LABEL_284;
  BetterList_UICamera_DepthEntry___get_Item(
    &v205,
    (BetterList_UICamera_DepthEntry__o *)currentCamera,
    v137,
    (const MethodInfo_3331670 *)Method_BetterList_UICamera_DepthEntry__get_Item__);
  v162 = (int32_t)v205.fields.go;
  v163 = (CGThumbnailListItem_o *)&UICamera_TypeInfo->static_fields->hoveredObject;
  v163->klass = (CGThumbnailListItem_c *)v205.fields.go;
  sub_1C3E508(v163, v162, v164, v165);
  v158 = UICamera_TypeInfo;
LABEL_245:
  currentCamera = (__int64)v158->static_fields->mHits;
  if ( !currentCamera )
LABEL_284:
    sub_1C3E7C0(currentCamera, v2);
  BetterList_UICamera_DepthEntry___Clear(
    (BetterList_UICamera_DepthEntry__o *)currentCamera,
    (const MethodInfo_3331920 *)Method_BetterList_UICamera_DepthEntry__Clear__);
  return 1;
}


void UICamera__RemoveTouch(int32_t id, const MethodInfo *method)
{
  UICamera_c *v3; // x0
  System_Collections_Generic_Dictionary_int__object__o *mTouches; // x0

  if ( (byte_4C5B2D0 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_int__UICamera_MouseOrTouch__Remove__);
    sub_1C3E564(&UICamera_TypeInfo);
    byte_4C5B2D0 = 1;
  }
  v3 = UICamera_TypeInfo;
  if ( !UICamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    v3 = UICamera_TypeInfo;
  }
  mTouches = (System_Collections_Generic_Dictionary_int__object__o *)v3->static_fields->mTouches;
  if ( !mTouches )
    sub_1C3E7C0(0, method);
  System_Collections_Generic_Dictionary_int__object___Remove(
    mTouches,
    id,
    (const MethodInfo_340D8C4 *)Method_System_Collections_Generic_Dictionary_int__UICamera_MouseOrTouch__Remove__);
}


void UICamera__ShowTooltip(UICamera_o *this, bool val, const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v5; // x5
  __int64 v6; // x6
  __int64 v7; // x7
  UICamera_c *v10; // x0
  struct UICamera_BoolDelegate_o *onTooltip; // x8
  __int64 v12; // x0
  __int64 v13; // x1
  CGThumbnailListItem_o *p_mTooltip; // x19
  UnityEngine_GameObject_o *v15; // x21
  struct UnityEngine_GameObject_o *mTooltip; // t1
  const MethodInfo *v17; // x3
  Il2CppObject *v18; // x22
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  bool v21[4]; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C5B2DE & 1) == 0 )
  {
    sub_1C3E564(&bool_TypeInfo);
    sub_1C3E564(&UICamera_TypeInfo);
    sub_1C3E564(&StringLiteral_9972/*"OnTooltip"*/);
    byte_4C5B2DE = 1;
  }
  this->fields.mTooltipTime = 0.0;
  v10 = UICamera_TypeInfo;
  if ( !UICamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    v10 = UICamera_TypeInfo;
  }
  onTooltip = v10->static_fields->onTooltip;
  if ( onTooltip )
  {
    if ( !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      onTooltip = UICamera_TypeInfo->static_fields->onTooltip;
      if ( !onTooltip )
        sub_1C3E7C0(v12, v13);
    }
    ((void (__fastcall *)(intptr_t, struct UnityEngine_GameObject_o *, bool, intptr_t))onTooltip->fields.invoke_impl)(
      onTooltip->fields.method_code,
      this->fields.mTooltip,
      val,
      onTooltip->fields.method);
  }
  mTooltip = this->fields.mTooltip;
  p_mTooltip = (CGThumbnailListItem_o *)&this->fields.mTooltip;
  v15 = mTooltip;
  v21[0] = val;
  v18 = (Il2CppObject *)j_il2cpp_value_box_0(bool_TypeInfo, v21, method, v3, v4, v5, v6, v7);
  if ( !UICamera_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
  UICamera__Notify(v15, (System_String_o *)StringLiteral_9972/*"OnTooltip"*/, v18, v17);
  if ( !val )
  {
    p_mTooltip->klass = 0;
    sub_1C3E508(p_mTooltip, 0, v19, v20);
  }
}


void UICamera__Start(UICamera_o *this, const MethodInfo *method)
{
  UnityEngine_Camera_o *cachedCamera; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x1
  UICamera_c *v7; // x0
  UnityEngine_Object_o *fallThrough; // x20
  const MethodInfo *v9; // x1
  UnityEngine_GameObject_o *gameObject; // x20
  Il2CppObject *v11; // x20
  UnityEngine_Transform_o *v12; // x20
  UnityEngine_Object_o *parent; // x21
  bool v14; // w8
  UnityEngine_GameObject_o *v15; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  UICamera_c *v18; // x8
  UnityEngine_GameObject_o *v19; // x20
  struct UICamera_StaticFields *static_fields; // x0
  _BOOL4 debug; // w19

  if ( (byte_4C5B2D4 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Application_TypeInfo);
    sub_1C3E564(&NGUIDebug_TypeInfo);
    sub_1C3E564(&Method_NGUITools_FindInParents_UIRoot___);
    sub_1C3E564(&NGUITools_TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&UICamera_TypeInfo);
    byte_4C5B2D4 = 1;
  }
  if ( this->fields.eventType )
  {
    cachedCamera = UICamera__get_cachedCamera(this, method);
    if ( !cachedCamera )
      goto LABEL_38;
    if ( UnityEngine_Camera__get_transparencySortMode(cachedCamera, 0) != 2 )
    {
      cachedCamera = UICamera__get_cachedCamera(this, v5);
      if ( !cachedCamera )
        goto LABEL_38;
      UnityEngine_Camera__set_transparencySortMode(cachedCamera, 2, 0);
    }
  }
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
  if ( UnityEngine_Application__get_isPlaying(0) )
  {
    v7 = UICamera_TypeInfo;
    if ( !UICamera_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
      v7 = UICamera_TypeInfo;
    }
    fallThrough = (UnityEngine_Object_o *)v7->static_fields->fallThrough;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(fallThrough, 0, 0) )
    {
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !NGUITools_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
      v11 = NGUITools__FindInParents_object_(
              gameObject,
              (const MethodInfo_3183E10 *)Method_NGUITools_FindInParents_UIRoot___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      cachedCamera = (UnityEngine_Camera_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v11, 0, 0);
      if ( ((unsigned __int8)cachedCamera & 1) != 0 )
      {
        if ( !v11 )
          goto LABEL_38;
        cachedCamera = (UnityEngine_Camera_o *)v11;
      }
      else
      {
        cachedCamera = (UnityEngine_Camera_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
        if ( !cachedCamera )
          goto LABEL_38;
        v12 = (UnityEngine_Transform_o *)cachedCamera;
        parent = (UnityEngine_Object_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)cachedCamera, 0);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v14 = UnityEngine_Object__op_Inequality(parent, 0, 0);
        cachedCamera = (UnityEngine_Camera_o *)this;
        if ( v14 )
        {
          cachedCamera = (UnityEngine_Camera_o *)UnityEngine_Transform__get_parent(v12, 0);
          if ( !cachedCamera )
            goto LABEL_38;
        }
      }
      v15 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)cachedCamera, 0);
      v18 = UICamera_TypeInfo;
      v19 = v15;
      if ( !UICamera_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
        v18 = UICamera_TypeInfo;
      }
      static_fields = v18->static_fields;
      static_fields->fallThrough = v19;
      sub_1C3E508((CGThumbnailListItem_o *)&static_fields->fallThrough, (int32_t)v19, v16, v17);
    }
    cachedCamera = UICamera__get_cachedCamera(this, v9);
    if ( cachedCamera )
    {
      UnityEngine_Camera__set_eventMask(cachedCamera, 0, 0);
      goto LABEL_33;
    }
LABEL_38:
    sub_1C3E7C0(cachedCamera, v4);
  }
LABEL_33:
  if ( UICamera__get_handlesEvents(this, v6) )
  {
    debug = this->fields.debug;
    if ( !NGUIDebug_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUIDebug_TypeInfo);
    NGUIDebug__set_debugRaycast(debug, 0);
  }
}


void UICamera__Update(UICamera_o *this, const MethodInfo *method)
{
  int v2; // w8
  bool v3; // zf

  v2 = this->fields.ignoreCount - 1;
  v3 = this->fields.ignoreCount == 1;
  this->fields.ignoreCount = v2 & ~(v2 >> 31);
  if ( v2 < 0 || v3 )
    UICamera__ExecuteUpdate(this, method);
}


UnityEngine_Camera_o *UICamera__get_cachedCamera(UICamera_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mCam; // x21
  Il2CppObject *Component_object; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_4C5B2BA & 1) == 0 )
  {
    sub_1C3E564(&Method_UnityEngine_Component_GetComponent_Camera___);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C5B2BA = 1;
  }
  mCam = (UnityEngine_Object_o *)this->fields.mCam;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(mCam, 0, 0) )
  {
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)this,
                         (const MethodInfo_30F0240 *)Method_UnityEngine_Component_GetComponent_Camera___);
    this->fields.mCam = (struct UnityEngine_Camera_o *)Component_object;
    sub_1C3E508((CGThumbnailListItem_o *)&this->fields.mCam, (int32_t)Component_object, v5, v6);
  }
  return this->fields.mCam;
}


UnityEngine_Ray_o *UICamera__get_currentRay(UnityEngine_Ray_o *__return_ptr retstr, const MethodInfo *method)
{
  UICamera_c *v3; // x0
  UnityEngine_Object_o *currentCamera; // x20
  UnityEngine_Ray_o *result; // x0
  __int64 v6; // x1
  struct UICamera_StaticFields *static_fields; // x9
  struct UICamera_MouseOrTouch_o *currentTouch; // x8
  UnityEngine_Camera_o *v9; // x0
  __int128 v10; // q0
  UnityEngine_Ray_o v11; // [xsp+8h] [xbp-38h] BYREF
  UnityEngine_Vector3_o v12; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C5B2B6 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&UICamera_TypeInfo);
    byte_4C5B2B6 = 1;
  }
  v3 = UICamera_TypeInfo;
  if ( !UICamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    v3 = UICamera_TypeInfo;
  }
  currentCamera = (UnityEngine_Object_o *)v3->static_fields->currentCamera;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  result = (UnityEngine_Ray_o *)UnityEngine_Object__op_Inequality(currentCamera, 0, 0);
  if ( ((unsigned __int8)result & 1) == 0 )
    goto LABEL_15;
  result = (UnityEngine_Ray_o *)UICamera_TypeInfo;
  if ( !UICamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    result = (UnityEngine_Ray_o *)UICamera_TypeInfo;
  }
  static_fields = *(struct UICamera_StaticFields **)&result[7].fields.m_Direction.fields.y;
  currentTouch = static_fields->currentTouch;
  if ( currentTouch )
  {
    if ( !LODWORD(result[9].fields.m_Origin.fields.z)
      && (j_il2cpp_runtime_class_init_0(result),
          static_fields = UICamera_TypeInfo->static_fields,
          (currentTouch = static_fields->currentTouch) == 0)
      || (v9 = static_fields->currentCamera) == 0 )
    {
      sub_1C3E7C0(v9, v6);
    }
    v12.fields.x = currentTouch->fields.pos.fields.x;
    v12.fields.y = currentTouch->fields.pos.fields.y;
    v12.fields.z = 0.0;
    result = UnityEngine_Camera__ScreenPointToRay_71148320(&v11, v9, v12, 0);
    v10 = *(_OWORD *)&v11.fields.m_Origin.fields.x;
    *(_QWORD *)&retstr->fields.m_Direction.fields.y = *(_QWORD *)&v11.fields.m_Direction.fields.y;
    *(_OWORD *)&retstr->fields.m_Origin.fields.x = v10;
  }
  else
  {
LABEL_15:
    *(_QWORD *)&retstr->fields.m_Origin.fields.x = 0;
    *(_QWORD *)&retstr->fields.m_Origin.fields.z = 0;
    *(_QWORD *)&retstr->fields.m_Direction.fields.y = 0;
  }
  return result;
}


int32_t UICamera__get_dragCount(const MethodInfo *method)
{
  __int64 v1; // x1
  UICamera_c *v2; // x0
  UICamera_c *mTouches; // x0
  int v4; // w22
  _BOOL8 v5; // x0
  __int64 v6; // x1
  Il2CppClass *klass; // x19
  unsigned int i; // w20
  struct UICamera_StaticFields *static_fields; // x8
  struct UICamera_MouseOrTouch_array *mMouse; // x9
  int max_length; // w19
  struct UICamera_MouseOrTouch_array *v12; // x8
  UICamera_MouseOrTouch_o *v13; // x8
  UnityEngine_Object_o *dragged; // x19
  struct UICamera_MouseOrTouch_o *controller; // x8
  UnityEngine_Object_o *v16; // x19
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v18; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v19; // [xsp+30h] [xbp-70h] BYREF

  if ( (byte_4C5B2C0 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_int__UICamera_MouseOrTouch__GetEnumerator__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_Enumerator_int__UICamera_MouseOrTouch__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_Enumerator_int__UICamera_MouseOrTouch__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_Enumerator_int__UICamera_MouseOrTouch__get_Current__);
    sub_1C3E564(&Method_System_Collections_Generic_KeyValuePair_int__UICamera_MouseOrTouch__get_Value__);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&UICamera_TypeInfo);
    byte_4C5B2C0 = 1;
  }
  v2 = UICamera_TypeInfo;
  memset(&v19, 0, sizeof(v19));
  if ( !UICamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    v2 = UICamera_TypeInfo;
  }
  mTouches = (UICamera_c *)v2->static_fields->mTouches;
  if ( !mTouches )
    goto LABEL_29;
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v18,
    (System_Collections_Generic_Dictionary_int__object__o *)mTouches,
    (const MethodInfo_340C874 *)Method_System_Collections_Generic_Dictionary_int__UICamera_MouseOrTouch__GetEnumerator__);
  v4 = 0;
  v19 = v18;
  while ( 1 )
  {
    v5 = System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
           &v19,
           (const MethodInfo_3563834 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__UICamera_MouseOrTouch__MoveNext__);
    if ( !v5 )
      break;
    if ( !v19.fields._current.fields.value )
      sub_1C3E7C0(v5, v6);
    klass = v19.fields._current.fields.value[5].klass;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v4 += UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)klass, 0, 0);
  }
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v19,
    (const MethodInfo_3563958 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__UICamera_MouseOrTouch__Dispose__);
  for ( i = 0; ; ++i )
  {
    mTouches = UICamera_TypeInfo;
    if ( !UICamera_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
      mTouches = UICamera_TypeInfo;
    }
    static_fields = mTouches->static_fields;
    mMouse = static_fields->mMouse;
    if ( !mMouse )
      goto LABEL_29;
    max_length = mMouse->max_length;
    if ( !mTouches->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(mTouches);
      static_fields = UICamera_TypeInfo->static_fields;
    }
    if ( (int)i >= max_length )
      break;
    v12 = static_fields->mMouse;
    if ( !v12 )
      goto LABEL_29;
    if ( i >= LODWORD(v12->max_length) )
      sub_1C3E7C8(mTouches, v1);
    v13 = v12->m_Items[i];
    if ( !v13 )
      goto LABEL_29;
    dragged = (UnityEngine_Object_o *)v13->fields.dragged;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v4 += UnityEngine_Object__op_Inequality(dragged, 0, 0);
  }
  controller = static_fields->controller;
  if ( !controller )
LABEL_29:
    sub_1C3E7C0(mTouches, v1);
  v16 = (UnityEngine_Object_o *)controller->fields.dragged;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  return v4 + UnityEngine_Object__op_Inequality(v16, 0, 0);
}


UICamera_o *UICamera__get_eventHandler(const MethodInfo *method)
{
  __int64 v1; // x1
  unsigned __int64 i; // x21
  UICamera_c *v3; // x0
  struct BetterList_UICamera__o *list; // x8
  struct UICamera_array *buffer; // x8
  UnityEngine_Object_o *v6; // x19
  UnityEngine_GameObject_o *gameObject; // x20

  if ( (byte_4C5B2C2 & 1) == 0 )
  {
    sub_1C3E564(&NGUITools_TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&UICamera_TypeInfo);
    byte_4C5B2C2 = 1;
  }
  for ( i = 0; ; ++i )
  {
    v3 = UICamera_TypeInfo;
    if ( !UICamera_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
      v3 = UICamera_TypeInfo;
    }
    list = v3->static_fields->list;
    if ( !list )
LABEL_23:
      sub_1C3E7C0(v3, v1);
    if ( (__int64)i >= list->fields.size )
      break;
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      list = UICamera_TypeInfo->static_fields->list;
      if ( !list )
        goto LABEL_23;
    }
    buffer = list->fields.buffer;
    if ( !buffer )
      goto LABEL_23;
    if ( i >= LODWORD(buffer->max_length) )
      sub_1C3E7C8(v3, v1);
    v6 = (UnityEngine_Object_o *)buffer->m_Items[i];
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v3 = (UICamera_c *)UnityEngine_Object__op_Equality(v6, 0, 0);
    if ( ((unsigned __int8)v3 & 1) == 0 )
    {
      if ( !v6 )
        goto LABEL_23;
      if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)v6, 0) )
      {
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v6, 0);
        if ( !NGUITools_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
        if ( NGUITools__GetActive_49418336(gameObject, 0) )
          return (UICamera_o *)v6;
      }
    }
  }
  return 0;
}


UnityEngine_GameObject_o *UICamera__get_genericEventHandler(const MethodInfo *method)
{
  UICamera_c *v1; // x0

  if ( (byte_4C5B2B7 & 1) == 0 )
  {
    sub_1C3E564(&UICamera_TypeInfo);
    byte_4C5B2B7 = 1;
  }
  v1 = UICamera_TypeInfo;
  if ( !UICamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    v1 = UICamera_TypeInfo;
  }
  return v1->static_fields->mGenericHandler;
}


bool UICamera__get_handlesEvents(UICamera_o *this, const MethodInfo *method)
{
  UICamera_c *v3; // x0
  UnityEngine_Object_o *eventHandler; // x20

  if ( (byte_4C5B2B9 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&UICamera_TypeInfo);
    byte_4C5B2B9 = 1;
  }
  v3 = UICamera_TypeInfo;
  if ( !UICamera_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
  eventHandler = (UnityEngine_Object_o *)UICamera__get_eventHandler((const MethodInfo *)v3);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  return UnityEngine_Object__op_Equality(eventHandler, (UnityEngine_Object_o *)this, 0);
}


bool UICamera__get_isOverUI(const MethodInfo *method)
{
  const MethodInfo *v1; // x1
  struct UICamera_StaticFields *static_fields; // x8
  UICamera_MouseOrTouch_o *currentTouch; // x0
  struct UICamera_MouseOrTouch_o *v5; // x19
  UnityEngine_Object_o *hoveredObject; // x19
  UICamera_c *v7; // x0
  struct UICamera_StaticFields *v8; // x8
  UnityEngine_Object_o *v9; // x19
  UnityEngine_Object_o *fallThrough; // x20
  UICamera_c *v11; // x0
  UnityEngine_GameObject_o *v12; // x19
  Il2CppObject *v13; // x19

  if ( (byte_4C5B2BB & 1) == 0 )
  {
    sub_1C3E564(&Method_NGUITools_FindInParents_UIRoot___);
    sub_1C3E564(&NGUITools_TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&UICamera_TypeInfo);
    byte_4C5B2BB = 1;
  }
  if ( UICamera_TypeInfo->_2.cctor_finished )
  {
    static_fields = UICamera_TypeInfo->static_fields;
    if ( static_fields->currentTouch )
    {
LABEL_5:
      currentTouch = static_fields->currentTouch;
      if ( !currentTouch )
        sub_1C3E7C0(0, v1);
      return UICamera_MouseOrTouch__get_isOverUI(currentTouch, v1);
    }
  }
  else
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    static_fields = UICamera_TypeInfo->static_fields;
    v5 = static_fields->currentTouch;
    if ( UICamera_TypeInfo->_2.cctor_finished )
    {
      if ( v5 )
        goto LABEL_5;
    }
    else
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
      static_fields = UICamera_TypeInfo->static_fields;
      if ( v5 )
        goto LABEL_5;
    }
  }
  hoveredObject = (UnityEngine_Object_o *)static_fields->hoveredObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(hoveredObject, 0, 0) )
    return 0;
  v7 = UICamera_TypeInfo;
  if ( !UICamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    v7 = UICamera_TypeInfo;
  }
  v8 = v7->static_fields;
  v9 = (UnityEngine_Object_o *)v8->hoveredObject;
  fallThrough = (UnityEngine_Object_o *)v8->fallThrough;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(v9, fallThrough, 0) )
    return 0;
  v11 = UICamera_TypeInfo;
  if ( !UICamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    v11 = UICamera_TypeInfo;
  }
  v12 = v11->static_fields->hoveredObject;
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  v13 = NGUITools__FindInParents_object_(v12, (const MethodInfo_3183E10 *)Method_NGUITools_FindInParents_UIRoot___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  return UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v13, 0, 0);
}


UnityEngine_Camera_o *UICamera__get_mainCamera(const MethodInfo *method)
{
  UICamera_c *v1; // x0
  UnityEngine_Object_o *eventHandler; // x19
  _BOOL8 v3; // x0
  const MethodInfo *v4; // x1

  if ( (byte_4C5B2C1 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&UICamera_TypeInfo);
    byte_4C5B2C1 = 1;
  }
  v1 = UICamera_TypeInfo;
  if ( !UICamera_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
  eventHandler = (UnityEngine_Object_o *)UICamera__get_eventHandler((const MethodInfo *)v1);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v3 = UnityEngine_Object__op_Inequality(eventHandler, 0, 0);
  if ( !v3 )
    return 0;
  if ( !eventHandler )
    sub_1C3E7C0(v3, v4);
  return UICamera__get_cachedCamera((UICamera_o *)eventHandler, v4);
}


UnityEngine_GameObject_o *UICamera__get_selectedObject(const MethodInfo *method)
{
  UICamera_c *v1; // x0
  UnityEngine_Object_o *mCurrentSelection; // x19
  bool v3; // w8
  UnityEngine_GameObject_o *result; // x0
  UICamera_c *v5; // x0

  if ( (byte_4C5B2BC & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&UICamera_TypeInfo);
    byte_4C5B2BC = 1;
  }
  v1 = UICamera_TypeInfo;
  if ( !UICamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    v1 = UICamera_TypeInfo;
  }
  mCurrentSelection = (UnityEngine_Object_o *)v1->static_fields->mCurrentSelection;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v3 = UnityEngine_Object__op_Implicit(mCurrentSelection, 0);
  result = 0;
  if ( v3 )
  {
    v5 = UICamera_TypeInfo;
    if ( !UICamera_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
      v5 = UICamera_TypeInfo;
    }
    return v5->static_fields->mCurrentSelection;
  }
  return result;
}


bool UICamera__get_stickyPress(UICamera_o *this, const MethodInfo *method)
{
  return 1;
}


int32_t UICamera__get_touchCount(const MethodInfo *method)
{
  __int64 v1; // x1
  UICamera_c *v2; // x0
  UICamera_c *mTouches; // x0
  int v4; // w22
  _BOOL8 v5; // x0
  __int64 v6; // x1
  UnityEngine_Object_o *monitor; // x19
  unsigned int i; // w20
  struct UICamera_StaticFields *static_fields; // x8
  struct UICamera_MouseOrTouch_array *mMouse; // x9
  int max_length; // w19
  struct UICamera_MouseOrTouch_array *v12; // x8
  UICamera_MouseOrTouch_o *v13; // x8
  UnityEngine_Object_o *pressed; // x19
  struct UICamera_MouseOrTouch_o *controller; // x8
  UnityEngine_Object_o *v16; // x19
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v18; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v19; // [xsp+30h] [xbp-70h] BYREF

  if ( (byte_4C5B2BF & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_int__UICamera_MouseOrTouch__GetEnumerator__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_Enumerator_int__UICamera_MouseOrTouch__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_Enumerator_int__UICamera_MouseOrTouch__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_Enumerator_int__UICamera_MouseOrTouch__get_Current__);
    sub_1C3E564(&Method_System_Collections_Generic_KeyValuePair_int__UICamera_MouseOrTouch__get_Value__);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&UICamera_TypeInfo);
    byte_4C5B2BF = 1;
  }
  v2 = UICamera_TypeInfo;
  memset(&v19, 0, sizeof(v19));
  if ( !UICamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    v2 = UICamera_TypeInfo;
  }
  mTouches = (UICamera_c *)v2->static_fields->mTouches;
  if ( !mTouches )
    goto LABEL_29;
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v18,
    (System_Collections_Generic_Dictionary_int__object__o *)mTouches,
    (const MethodInfo_340C874 *)Method_System_Collections_Generic_Dictionary_int__UICamera_MouseOrTouch__GetEnumerator__);
  v4 = 0;
  v19 = v18;
  while ( 1 )
  {
    v5 = System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
           &v19,
           (const MethodInfo_3563834 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__UICamera_MouseOrTouch__MoveNext__);
    if ( !v5 )
      break;
    if ( !v19.fields._current.fields.value )
      sub_1C3E7C0(v5, v6);
    monitor = (UnityEngine_Object_o *)v19.fields._current.fields.value[4].monitor;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v4 += UnityEngine_Object__op_Inequality(monitor, 0, 0);
  }
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v19,
    (const MethodInfo_3563958 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__UICamera_MouseOrTouch__Dispose__);
  for ( i = 0; ; ++i )
  {
    mTouches = UICamera_TypeInfo;
    if ( !UICamera_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
      mTouches = UICamera_TypeInfo;
    }
    static_fields = mTouches->static_fields;
    mMouse = static_fields->mMouse;
    if ( !mMouse )
      goto LABEL_29;
    max_length = mMouse->max_length;
    if ( !mTouches->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(mTouches);
      static_fields = UICamera_TypeInfo->static_fields;
    }
    if ( (int)i >= max_length )
      break;
    v12 = static_fields->mMouse;
    if ( !v12 )
      goto LABEL_29;
    if ( i >= LODWORD(v12->max_length) )
      sub_1C3E7C8(mTouches, v1);
    v13 = v12->m_Items[i];
    if ( !v13 )
      goto LABEL_29;
    pressed = (UnityEngine_Object_o *)v13->fields.pressed;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v4 += UnityEngine_Object__op_Inequality(pressed, 0, 0);
  }
  controller = static_fields->controller;
  if ( !controller )
LABEL_29:
    sub_1C3E7C0(mTouches, v1);
  v16 = (UnityEngine_Object_o *)controller->fields.pressed;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  return v4 + UnityEngine_Object__op_Inequality(v16, 0, 0);
}


void UICamera__set_genericEventHandler(UnityEngine_GameObject_o *value, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  UICamera_c *v5; // x0
  struct UICamera_StaticFields *static_fields; // x0

  if ( (byte_4C5B2B8 & 1) == 0 )
  {
    sub_1C3E564(&UICamera_TypeInfo);
    byte_4C5B2B8 = 1;
  }
  v5 = UICamera_TypeInfo;
  if ( !UICamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    v5 = UICamera_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->mGenericHandler = value;
  sub_1C3E508((CGThumbnailListItem_o *)&static_fields->mGenericHandler, (int32_t)value, v2, v3);
}


void UICamera__set_selectedObject(UnityEngine_GameObject_o *value, const MethodInfo *method)
{
  UICamera_c *v3; // x0
  UnityEngine_Object_o *mCurrentSelection; // x20
  const MethodInfo *v5; // x1
  __int64 v6; // x2
  const MethodInfo *v7; // x3
  __int64 v8; // x4
  __int64 v9; // x5
  __int64 v10; // x6
  __int64 v11; // x7
  void *selectedObject; // x0
  struct UICamera_StaticFields *static_fields; // x8
  struct UICamera_MouseOrTouch_o *currentTouch; // x22
  struct UICamera_MouseOrTouch_array *mMouse; // x9
  struct UICamera_MouseOrTouch_o *v16; // x1
  __int64 v17; // x8
  struct UICamera_BoolDelegate_o *onSelect; // x20
  const MethodInfo *v19; // x0
  UnityEngine_GameObject_o *v20; // x20
  Il2CppObject *v21; // x0
  const MethodInfo *v22; // x3
  CGThumbnailListItem_o *p_mCurrentSelection; // x0
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  UnityEngine_Object_o *v26; // x19
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  UICamera_c *v29; // x0
  UnityEngine_Object_o *v30; // x19
  bool v31; // w0
  UICamera_c *v32; // x8
  bool v33; // w19
  struct UICamera_StaticFields *v34; // x8
  int32_t layer; // w0
  const MethodInfo *v36; // x1
  UICamera_o *CameraForLayer; // x0
  UICamera_o *v38; // x19
  int32_t v39; // w2
  const MethodInfo *v40; // x3
  UICamera_c *v41; // x0
  struct UICamera_StaticFields *v42; // x0
  UnityEngine_Camera_o *cachedCamera; // x0
  struct UICamera_StaticFields *v44; // x8
  int32_t v45; // w2
  const MethodInfo *v46; // x3
  UICamera_c *v47; // x0
  __int64 v48; // x2
  __int64 v49; // x3
  __int64 v50; // x4
  __int64 v51; // x5
  __int64 v52; // x6
  __int64 v53; // x7
  UICamera_c *v54; // x0
  Il2CppObject *Component_object; // x19
  bool v56; // w19
  UICamera_c *v57; // x0
  struct UICamera_StaticFields *v58; // x8
  struct UICamera_BoolDelegate_o *v59; // x9
  UnityEngine_GameObject_o *v60; // x19
  Il2CppObject *v61; // x0
  const MethodInfo *v62; // x3
  UICamera_c *v63; // x0
  struct UICamera_StaticFields *v64; // x0
  struct UICamera_StaticFields *v65; // x0
  int32_t v66; // w2
  const MethodInfo *v67; // x3
  struct UICamera_StaticFields *v68; // x0
  int32_t v69; // w2
  const MethodInfo *v70; // x3
  char v71[4]; // [xsp+8h] [xbp-48h] BYREF
  _BYTE v72[4]; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4C5B2BD & 1) == 0 )
  {
    sub_1C3E564(&Method_BetterList_UICamera__get_Item__);
    sub_1C3E564(&bool_TypeInfo);
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponent_UIInput___);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&UICamera_TypeInfo);
    sub_1C3E564(&StringLiteral_9957/*"OnSelect"*/);
    byte_4C5B2BD = 1;
  }
  v3 = UICamera_TypeInfo;
  if ( !UICamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    v3 = UICamera_TypeInfo;
  }
  mCurrentSelection = (UnityEngine_Object_o *)v3->static_fields->mCurrentSelection;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(mCurrentSelection, (UnityEngine_Object_o *)value, 0) )
  {
    selectedObject = UICamera_TypeInfo;
    if ( !UICamera_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
      selectedObject = UICamera_TypeInfo;
    }
    static_fields = (struct UICamera_StaticFields *)*((_QWORD *)selectedObject + 23);
    currentTouch = static_fields->currentTouch;
    if ( !currentTouch )
    {
      if ( !*((_DWORD *)selectedObject + 56) )
      {
        j_il2cpp_runtime_class_init_0(selectedObject);
        static_fields = UICamera_TypeInfo->static_fields;
      }
      mMouse = static_fields->mMouse;
      static_fields->currentTouchID = -1;
      if ( !mMouse )
        goto LABEL_72;
      if ( !LODWORD(mMouse->max_length) )
        sub_1C3E7C8(selectedObject, v5);
      v16 = mMouse->m_Items[0];
      static_fields->currentTouch = v16;
      sub_1C3E508((CGThumbnailListItem_o *)&static_fields->currentTouch, (int32_t)v16, v6, v7);
      selectedObject = UICamera_TypeInfo;
      UICamera_TypeInfo->static_fields->currentScheme = 0;
    }
    if ( !*((_DWORD *)selectedObject + 56) )
    {
      j_il2cpp_runtime_class_init_0(selectedObject);
      selectedObject = UICamera_TypeInfo;
    }
    v17 = *((_QWORD *)selectedObject + 23);
    onSelect = *(struct UICamera_BoolDelegate_o **)(v17 + 224);
    *(_BYTE *)(v17 + 168) = 0;
    if ( onSelect )
    {
      if ( *((_DWORD *)selectedObject + 56) )
      {
        selectedObject = UICamera__get_selectedObject((const MethodInfo *)selectedObject);
      }
      else
      {
        j_il2cpp_runtime_class_init_0(selectedObject);
        onSelect = UICamera_TypeInfo->static_fields->onSelect;
        selectedObject = UICamera__get_selectedObject(v19);
        if ( !onSelect )
          goto LABEL_72;
      }
      ((void (__fastcall *)(intptr_t, void *, _QWORD, intptr_t))onSelect->fields.invoke_impl)(
        onSelect->fields.method_code,
        selectedObject,
        0,
        onSelect->fields.method);
      selectedObject = UICamera_TypeInfo;
    }
    if ( !*((_DWORD *)selectedObject + 56) )
    {
      j_il2cpp_runtime_class_init_0(selectedObject);
      selectedObject = UICamera_TypeInfo;
    }
    v20 = *(UnityEngine_GameObject_o **)(*((_QWORD *)selectedObject + 23) + 312LL);
    v72[0] = 0;
    v21 = (Il2CppObject *)j_il2cpp_value_box_0(bool_TypeInfo, v72, v6, v7, v8, v9, v10, v11);
    UICamera__Notify(v20, (System_String_o *)StringLiteral_9957/*"OnSelect"*/, v21, v22);
    p_mCurrentSelection = (CGThumbnailListItem_o *)&UICamera_TypeInfo->static_fields->mCurrentSelection;
    p_mCurrentSelection->klass = (CGThumbnailListItem_c *)value;
    sub_1C3E508(p_mCurrentSelection, (int32_t)value, v24, v25);
    v26 = (UnityEngine_Object_o *)UICamera_TypeInfo->static_fields->mCurrentSelection;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(v26, 0, 0) )
      goto LABEL_67;
    if ( !currentTouch )
    {
      v29 = UICamera_TypeInfo;
      if ( !UICamera_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
        v29 = UICamera_TypeInfo;
      }
      v30 = (UnityEngine_Object_o *)v29->static_fields->mCurrentSelection;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v31 = UnityEngine_Object__op_Inequality(v30, 0, 0);
      v32 = UICamera_TypeInfo;
      v33 = v31;
      if ( !UICamera_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
        v32 = UICamera_TypeInfo;
      }
      v34 = v32->static_fields;
      if ( v33 )
      {
        selectedObject = v34->mCurrentSelection;
        if ( !selectedObject )
          goto LABEL_72;
        layer = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)selectedObject, 0);
        CameraForLayer = UICamera__FindCameraForLayer(layer, v36);
      }
      else
      {
        selectedObject = v34->list;
        if ( !v34->list )
          goto LABEL_72;
        CameraForLayer = (UICamera_o *)BetterList_object___get_Item(
                                         (BetterList_T__o *)selectedObject,
                                         0,
                                         (const MethodInfo_332BC78 *)Method_BetterList_UICamera__get_Item__);
      }
      v38 = CameraForLayer;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v38, 0, 0) )
      {
        v41 = UICamera_TypeInfo;
        if ( !UICamera_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
          v41 = UICamera_TypeInfo;
        }
        v42 = v41->static_fields;
        v42->current = v38;
        sub_1C3E508((CGThumbnailListItem_o *)&v42->current, (int32_t)v38, v39, v40);
        if ( !v38 )
          goto LABEL_72;
        cachedCamera = UICamera__get_cachedCamera(v38, v5);
        v44 = UICamera_TypeInfo->static_fields;
        v44->currentCamera = cachedCamera;
        sub_1C3E508((CGThumbnailListItem_o *)&v44->currentCamera, (int32_t)cachedCamera, v45, v46);
      }
    }
    v47 = UICamera_TypeInfo;
    if ( !UICamera_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
      v47 = UICamera_TypeInfo;
    }
    selectedObject = v47->static_fields->mCurrentSelection;
    if ( selectedObject )
    {
      if ( UnityEngine_GameObject__get_activeInHierarchy((UnityEngine_GameObject_o *)selectedObject, 0) )
      {
        v54 = UICamera_TypeInfo;
        if ( !UICamera_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
          v54 = UICamera_TypeInfo;
        }
        selectedObject = v54->static_fields->mCurrentSelection;
        if ( !selectedObject )
          goto LABEL_72;
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)selectedObject,
                             (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_UIInput___);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v56 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
      }
      else
      {
        v56 = 0;
      }
      v57 = UICamera_TypeInfo;
      if ( !UICamera_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
        v57 = UICamera_TypeInfo;
      }
      v58 = v57->static_fields;
      v59 = v58->onSelect;
      v58->inputHasFocus = v56;
      if ( !v59 )
        goto LABEL_64;
      if ( v57->_2.cctor_finished
        || (j_il2cpp_runtime_class_init_0(v57), v58 = UICamera_TypeInfo->static_fields, (v59 = v58->onSelect) != 0) )
      {
        ((void (__fastcall *)(intptr_t, struct UnityEngine_GameObject_o *, __int64, intptr_t))v59->fields.invoke_impl)(
          v59->fields.method_code,
          v58->mCurrentSelection,
          1,
          v59->fields.method);
        v57 = UICamera_TypeInfo;
LABEL_64:
        if ( !v57->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v57);
          v57 = UICamera_TypeInfo;
        }
        v60 = v57->static_fields->mCurrentSelection;
        v71[0] = 1;
        v61 = (Il2CppObject *)j_il2cpp_value_box_0(bool_TypeInfo, v71, v48, v49, v50, v51, v52, v53);
        UICamera__Notify(v60, (System_String_o *)StringLiteral_9957/*"OnSelect"*/, v61, v62);
LABEL_67:
        if ( !currentTouch )
        {
          v63 = UICamera_TypeInfo;
          if ( !UICamera_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
            v63 = UICamera_TypeInfo;
          }
          v64 = v63->static_fields;
          v64->current = 0;
          sub_1C3E508((CGThumbnailListItem_o *)&v64->current, 0, v27, v28);
          v65 = UICamera_TypeInfo->static_fields;
          v65->currentCamera = 0;
          sub_1C3E508((CGThumbnailListItem_o *)&v65->currentCamera, 0, v66, v67);
          v68 = UICamera_TypeInfo->static_fields;
          v68->currentTouch = 0;
          sub_1C3E508((CGThumbnailListItem_o *)&v68->currentTouch, 0, v69, v70);
          UICamera_TypeInfo->static_fields->currentTouchID = -100;
        }
        return;
      }
    }
LABEL_72:
    sub_1C3E7C0(selectedObject, v5);
  }
}


void UICamera_BoolDelegate___ctor(
        UICamera_BoolDelegate_o *this,
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
  if ( (sub_1C3E624(method) & 1) == 0 )
  {
    if ( v8 == 1 )
    {
      v9 = sub_1A88E88;
      goto LABEL_6;
    }
    if ( !object )
    {
      v11 = sub_1C3E7DC(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C3E68C(v11, 0);
    }
LABEL_8:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_9;
  }
  if ( v8 != 2 )
    goto LABEL_8;
  v9 = sub_1A88EB0;
LABEL_6:
  this->fields.invoke_impl = (intptr_t)v9;
LABEL_9:
  this->fields.extra_arg = (intptr_t)sub_1A88E30;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *UICamera_BoolDelegate__BeginInvoke(
        UICamera_BoolDelegate_o *this,
        UnityEngine_GameObject_o *go,
        bool state,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v6; // x6
  __int64 v7; // x7
  _QWORD v13[3]; // [xsp+8h] [xbp-58h] BYREF
  bool v14[4]; // [xsp+2Ch] [xbp-34h] BYREF

  v14[0] = state;
  if ( (byte_4C5B2E5 & 1) == 0 )
  {
    sub_1C3E564(&bool_TypeInfo);
    byte_4C5B2E5 = 1;
  }
  v13[2] = 0;
  v13[0] = go;
  v13[1] = j_il2cpp_value_box_0(bool_TypeInfo, v14, state, callback, object, method, v6, v7);
  return (System_IAsyncResult_o *)sub_1C3E518(this, v13, callback, object);
}


void UICamera_BoolDelegate__EndInvoke(
        UICamera_BoolDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C3E51C(result, 0, method);
}


void UICamera_BoolDelegate__Invoke(
        UICamera_BoolDelegate_o *this,
        UnityEngine_GameObject_o *go,
        bool state,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, UnityEngine_GameObject_o *, bool, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    go,
    state,
    this->fields.method);
}


void UICamera_FloatDelegate___ctor(
        UICamera_FloatDelegate_o *this,
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
  if ( (sub_1C3E624(method) & 1) == 0 )
  {
    if ( v8 == 1 )
    {
      v9 = sub_1A88F20;
      goto LABEL_6;
    }
    if ( !object )
    {
      v11 = sub_1C3E7DC(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C3E68C(v11, 0);
    }
LABEL_8:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_9;
  }
  if ( v8 != 2 )
    goto LABEL_8;
  v9 = sub_1A88F40;
LABEL_6:
  this->fields.invoke_impl = (intptr_t)v9;
LABEL_9:
  this->fields.extra_arg = (intptr_t)sub_1A88EC8;
}


System_IAsyncResult_o *UICamera_FloatDelegate__BeginInvoke(
        UICamera_FloatDelegate_o *this,
        UnityEngine_GameObject_o *go,
        float delta,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v6; // x5
  __int64 v7; // x6
  __int64 v8; // x7
  _QWORD v14[3]; // [xsp+8h] [xbp-58h] BYREF
  float v15; // [xsp+2Ch] [xbp-34h] BYREF

  v15 = delta;
  if ( (byte_4C5B2E6 & 1) == 0 )
  {
    sub_1C3E564(&float_TypeInfo);
    byte_4C5B2E6 = 1;
  }
  v14[2] = 0;
  v14[0] = go;
  v14[1] = j_il2cpp_value_box_0(float_TypeInfo, &v15, callback, object, method, v6, v7, v8);
  return (System_IAsyncResult_o *)sub_1C3E518(this, v14, callback, object);
}


void UICamera_FloatDelegate__EndInvoke(
        UICamera_FloatDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C3E51C(result, 0, method);
}


void UICamera_FloatDelegate__Invoke(
        UICamera_FloatDelegate_o *this,
        UnityEngine_GameObject_o *go,
        float delta,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, UnityEngine_GameObject_o *, intptr_t, float))this->fields.invoke_impl)(
    this->fields.method_code,
    go,
    this->fields.method,
    delta);
}


void UICamera_GetAxisFunc___ctor(
        UICamera_GetAxisFunc_o *this,
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
      v9 = sub_1A88C54;
LABEL_8:
      this->fields.invoke_impl = (intptr_t)v9;
      goto LABEL_9;
    }
  }
  else
  {
    if ( !v8 )
    {
      v9 = sub_1A88C34;
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
  this->fields.extra_arg = (intptr_t)sub_1A88BE4;
}


System_IAsyncResult_o *UICamera_GetAxisFunc__BeginInvoke(
        UICamera_GetAxisFunc_o *this,
        System_String_o *name,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  System_String_o *v6; // [xsp+0h] [xbp-20h] BYREF

  v6 = name;
  return (System_IAsyncResult_o *)sub_1C3E518(this, &v6, callback, object);
}


float UICamera_GetAxisFunc__EndInvoke(
        UICamera_GetAxisFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x3

  v3 = sub_1C3E51C(result, 0, method);
  if ( !v3 )
    sub_1C3E7C0(0, v4);
  return *(float *)j_il2cpp_object_unbox_0(v3, v4, v5, v6);
}


float UICamera_GetAxisFunc__Invoke(UICamera_GetAxisFunc_o *this, System_String_o *name, const MethodInfo *method)
{
  float result; // s0

  ((void (__fastcall *)(intptr_t, System_String_o *, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    name,
    this->fields.method);
  return result;
}


void UICamera_GetKeyStateFunc___ctor(
        UICamera_GetKeyStateFunc_o *this,
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
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C3E624(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C3E7DC(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C3E68C(v10, 0);
    }
    goto LABEL_5;
  }
  if ( v8 != 1 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1A88BB4;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A88B60;
}


System_IAsyncResult_o *UICamera_GetKeyStateFunc__BeginInvoke(
        UICamera_GetKeyStateFunc_o *this,
        int32_t key,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // x5
  __int64 v6; // x6
  __int64 v7; // x7
  _QWORD v12[2]; // [xsp+8h] [xbp-48h] BYREF
  int32_t v13; // [xsp+1Ch] [xbp-34h] BYREF

  v13 = key;
  if ( (byte_4C5B2E3 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_KeyCode_TypeInfo);
    byte_4C5B2E3 = 1;
  }
  v12[1] = 0;
  v12[0] = j_il2cpp_value_box_0(UnityEngine_KeyCode_TypeInfo, &v13, callback, object, method, v5, v6, v7);
  return (System_IAsyncResult_o *)sub_1C3E518(this, v12, callback, object);
}


bool UICamera_GetKeyStateFunc__EndInvoke(
        UICamera_GetKeyStateFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x3

  v3 = sub_1C3E51C(result, 0, method);
  if ( !v3 )
    sub_1C3E7C0(0, v4);
  return *(_BYTE *)j_il2cpp_object_unbox_0(v3, v4, v5, v6);
}


bool UICamera_GetKeyStateFunc__Invoke(UICamera_GetKeyStateFunc_o *this, int32_t key, const MethodInfo *method)
{
  return ((__int64 (__fastcall *)(intptr_t, int32_t, intptr_t))this->fields.invoke_impl)(
           this->fields.method_code,
           key,
           this->fields.method);
}


void UICamera_GetTouchCallback___ctor(
        UICamera_GetTouchCallback_o *this,
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
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C3E624(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C3E7DC(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C3E68C(v10, 0);
    }
    goto LABEL_5;
  }
  if ( v8 != 1 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1A891E0;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A89190;
}


System_IAsyncResult_o *UICamera_GetTouchCallback__BeginInvoke(
        UICamera_GetTouchCallback_o *this,
        int32_t index,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // x5
  __int64 v6; // x6
  __int64 v7; // x7
  _QWORD v12[2]; // [xsp+8h] [xbp-48h] BYREF
  int32_t v13; // [xsp+1Ch] [xbp-34h] BYREF

  v13 = index;
  if ( (byte_4C5B2E9 & 1) == 0 )
  {
    sub_1C3E564(&int_TypeInfo);
    byte_4C5B2E9 = 1;
  }
  v12[1] = 0;
  v12[0] = j_il2cpp_value_box_0(int_TypeInfo, &v13, callback, object, method, v5, v6, v7);
  return (System_IAsyncResult_o *)sub_1C3E518(this, v12, callback, object);
}


UICamera_Touch_o *UICamera_GetTouchCallback__EndInvoke(
        UICamera_GetTouchCallback_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  return (UICamera_Touch_o *)sub_1C3E51C(result, 0, method);
}


UICamera_Touch_o *UICamera_GetTouchCallback__Invoke(
        UICamera_GetTouchCallback_o *this,
        int32_t index,
        const MethodInfo *method)
{
  return (UICamera_Touch_o *)((__int64 (__fastcall *)(intptr_t, int32_t, intptr_t))this->fields.invoke_impl)(
                               this->fields.method_code,
                               index,
                               this->fields.method);
}


void UICamera_GetTouchCountCallback___ctor(
        UICamera_GetTouchCountCallback_o *this,
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
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C3E624(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C3E7DC(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C3E68C(v10, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1A8917C;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A89134;
}


System_IAsyncResult_o *UICamera_GetTouchCountCallback__BeginInvoke(
        UICamera_GetTouchCountCallback_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0;
  return (System_IAsyncResult_o *)sub_1C3E518(this, &v5, callback, object);
}


int32_t UICamera_GetTouchCountCallback__EndInvoke(
        UICamera_GetTouchCountCallback_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x3

  v3 = sub_1C3E51C(result, 0, method);
  if ( !v3 )
    sub_1C3E7C0(0, v4);
  return *(_DWORD *)j_il2cpp_object_unbox_0(v3, v4, v5, v6);
}


int32_t UICamera_GetTouchCountCallback__Invoke(UICamera_GetTouchCountCallback_o *this, const MethodInfo *method)
{
  return ((__int64 (__fastcall *)(intptr_t, intptr_t))this->fields.invoke_impl)(
           this->fields.method_code,
           this->fields.method);
}


void UICamera_KeyCodeDelegate___ctor(
        UICamera_KeyCodeDelegate_o *this,
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
  if ( (sub_1C3E624(method) & 1) == 0 )
  {
    if ( v8 == 1 )
    {
      v9 = sub_1A890C8;
      goto LABEL_6;
    }
    if ( !object )
    {
      v11 = sub_1C3E7DC(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C3E68C(v11, 0);
    }
LABEL_8:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_9;
  }
  if ( v8 != 2 )
    goto LABEL_8;
  v9 = sub_1A890EC;
LABEL_6:
  this->fields.invoke_impl = (intptr_t)v9;
LABEL_9:
  this->fields.extra_arg = (intptr_t)sub_1A89070;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *UICamera_KeyCodeDelegate__BeginInvoke(
        UICamera_KeyCodeDelegate_o *this,
        UnityEngine_GameObject_o *go,
        int32_t key,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v6; // x6
  __int64 v7; // x7
  _QWORD v13[3]; // [xsp+8h] [xbp-58h] BYREF
  int32_t v14; // [xsp+2Ch] [xbp-34h] BYREF

  v14 = key;
  if ( (byte_4C5B2E8 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_KeyCode_TypeInfo);
    byte_4C5B2E8 = 1;
  }
  v13[2] = 0;
  v13[0] = go;
  v13[1] = j_il2cpp_value_box_0(UnityEngine_KeyCode_TypeInfo, &v14, *(_QWORD *)&key, callback, object, method, v6, v7);
  return (System_IAsyncResult_o *)sub_1C3E518(this, v13, callback, object);
}


void UICamera_KeyCodeDelegate__EndInvoke(
        UICamera_KeyCodeDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C3E51C(result, 0, method);
}


void UICamera_KeyCodeDelegate__Invoke(
        UICamera_KeyCodeDelegate_o *this,
        UnityEngine_GameObject_o *go,
        int32_t key,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, UnityEngine_GameObject_o *, int32_t, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    go,
    key,
    this->fields.method);
}


void UICamera_MouseOrTouch___ctor(UICamera_MouseOrTouch_o *this, const MethodInfo *method)
{
  this->fields.clickNotification = 1;
  this->fields.touchBegan = 1;
  System_Object___ctor((Il2CppObject *)this, 0);
}


float UICamera_MouseOrTouch__get_deltaTime(UICamera_MouseOrTouch_o *this, const MethodInfo *method)
{
  if ( this->fields.touchBegan )
    return RealTime__get_time(0) - this->fields.pressTime;
  else
    return 0.0;
}


bool UICamera_MouseOrTouch__get_isOverUI(UICamera_MouseOrTouch_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *current; // x20
  UnityEngine_Object_o *v4; // x20
  UICamera_c *v5; // x0
  UnityEngine_Object_o *fallThrough; // x21
  UnityEngine_GameObject_o *v7; // x19
  Il2CppObject *v8; // x19

  if ( (byte_4C5B2E2 & 1) == 0 )
  {
    sub_1C3E564(&Method_NGUITools_FindInParents_UIRoot___);
    sub_1C3E564(&NGUITools_TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&UICamera_TypeInfo);
    byte_4C5B2E2 = 1;
  }
  current = (UnityEngine_Object_o *)this->fields.current;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(current, 0, 0) )
    return 0;
  v4 = (UnityEngine_Object_o *)this->fields.current;
  v5 = UICamera_TypeInfo;
  if ( !UICamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    v5 = UICamera_TypeInfo;
  }
  fallThrough = (UnityEngine_Object_o *)v5->static_fields->fallThrough;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(v4, fallThrough, 0) )
    return 0;
  v7 = this->fields.current;
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  v8 = NGUITools__FindInParents_object_(v7, (const MethodInfo_3183E10 *)Method_NGUITools_FindInParents_UIRoot___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  return UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v8, 0, 0);
}


void UICamera_MoveDelegate___ctor(
        UICamera_MoveDelegate_o *this,
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
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C3E624(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C3E7DC(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C3E68C(v10, 0);
    }
    goto LABEL_5;
  }
  if ( v8 != 1 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1A88DA4;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A88D4C;
}


System_IAsyncResult_o *UICamera_MoveDelegate__BeginInvoke(
        UICamera_MoveDelegate_o *this,
        UnityEngine_Vector2_o delta,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // x4
  __int64 v6; // x5
  __int64 v7; // x6
  __int64 v8; // x7
  _QWORD v13[2]; // [xsp+8h] [xbp-48h] BYREF
  UnityEngine_Vector2_o v14; // [xsp+18h] [xbp-38h] BYREF

  v14 = delta;
  if ( (byte_4C5B2E4 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Vector2_TypeInfo);
    byte_4C5B2E4 = 1;
  }
  v13[1] = 0;
  v13[0] = j_il2cpp_value_box_0(UnityEngine_Vector2_TypeInfo, &v14, object, method, v5, v6, v7, v8);
  return (System_IAsyncResult_o *)sub_1C3E518(this, v13, callback, object);
}


void UICamera_MoveDelegate__EndInvoke(
        UICamera_MoveDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C3E51C(result, 0, method);
}


// local variable allocation has failed, the output may be wrong!
void UICamera_MoveDelegate__Invoke(
        UICamera_MoveDelegate_o *this,
        UnityEngine_Vector2_o delta,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, intptr_t, long double, long double))this->fields.invoke_impl)(
    this->fields.method_code,
    this->fields.method,
    *(long double *)&delta.fields.x,
    *(long double *)&delta.fields.y);
}


void UICamera_ObjectDelegate___ctor(
        UICamera_ObjectDelegate_o *this,
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
  if ( (sub_1C3E624(method) & 1) == 0 )
  {
    if ( v8 == 1 )
    {
      v9 = sub_1A89038;
      goto LABEL_6;
    }
    if ( !object )
    {
      v11 = sub_1C3E7DC(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C3E68C(v11, 0);
    }
LABEL_8:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_9;
  }
  if ( v8 != 2 )
    goto LABEL_8;
  v9 = sub_1A8905C;
LABEL_6:
  this->fields.invoke_impl = (intptr_t)v9;
LABEL_9:
  this->fields.extra_arg = (intptr_t)sub_1A88FE0;
}


System_IAsyncResult_o *UICamera_ObjectDelegate__BeginInvoke(
        UICamera_ObjectDelegate_o *this,
        UnityEngine_GameObject_o *go,
        UnityEngine_GameObject_o *obj,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v7[2]; // [xsp+8h] [xbp-28h] BYREF

  v7[0] = go;
  v7[1] = obj;
  return (System_IAsyncResult_o *)sub_1C3E518(this, v7, callback, object);
}


void UICamera_ObjectDelegate__EndInvoke(
        UICamera_ObjectDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C3E51C(result, 0, method);
}


void UICamera_ObjectDelegate__Invoke(
        UICamera_ObjectDelegate_o *this,
        UnityEngine_GameObject_o *go,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, UnityEngine_GameObject_o *, UnityEngine_GameObject_o *, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    go,
    obj,
    this->fields.method);
}


void UICamera_OnCustomInput___ctor(
        UICamera_OnCustomInput_o *this,
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
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C3E624(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C3E7DC(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C3E68C(v10, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1A88D38;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A88CF8;
}


System_IAsyncResult_o *UICamera_OnCustomInput__BeginInvoke(
        UICamera_OnCustomInput_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0;
  return (System_IAsyncResult_o *)sub_1C3E518(this, &v5, callback, object);
}


void UICamera_OnCustomInput__EndInvoke(
        UICamera_OnCustomInput_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C3E51C(result, 0, method);
}


void UICamera_OnCustomInput__Invoke(UICamera_OnCustomInput_o *this, const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, intptr_t))this->fields.invoke_impl)(this->fields.method_code, this->fields.method);
}


void UICamera_OnScreenResize___ctor(
        UICamera_OnScreenResize_o *this,
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
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C3E624(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C3E7DC(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C3E68C(v10, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1A88CE4;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A88CA4;
}


System_IAsyncResult_o *UICamera_OnScreenResize__BeginInvoke(
        UICamera_OnScreenResize_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0;
  return (System_IAsyncResult_o *)sub_1C3E518(this, &v5, callback, object);
}


void UICamera_OnScreenResize__EndInvoke(
        UICamera_OnScreenResize_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C3E51C(result, 0, method);
}


void UICamera_OnScreenResize__Invoke(UICamera_OnScreenResize_o *this, const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, intptr_t))this->fields.invoke_impl)(this->fields.method_code, this->fields.method);
}


void UICamera_Touch___ctor(UICamera_Touch_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void UICamera_VectorDelegate___ctor(
        UICamera_VectorDelegate_o *this,
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
  if ( (sub_1C3E624(method) & 1) == 0 )
  {
    if ( v8 == 1 )
    {
      v9 = sub_1A88FB0;
      goto LABEL_6;
    }
    if ( !object )
    {
      v11 = sub_1C3E7DC(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C3E68C(v11, 0);
    }
LABEL_8:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_9;
  }
  if ( v8 != 2 )
    goto LABEL_8;
  v9 = sub_1A88FD0;
LABEL_6:
  this->fields.invoke_impl = (intptr_t)v9;
LABEL_9:
  this->fields.extra_arg = (intptr_t)sub_1A88F50;
}


System_IAsyncResult_o *UICamera_VectorDelegate__BeginInvoke(
        UICamera_VectorDelegate_o *this,
        UnityEngine_GameObject_o *go,
        UnityEngine_Vector2_o delta,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v6; // x5
  __int64 v7; // x6
  __int64 v8; // x7
  _QWORD v14[3]; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector2_o v15; // [xsp+28h] [xbp-38h] BYREF

  v15 = delta;
  if ( (byte_4C5B2E7 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Vector2_TypeInfo);
    byte_4C5B2E7 = 1;
  }
  v14[2] = 0;
  v14[0] = go;
  v14[1] = j_il2cpp_value_box_0(UnityEngine_Vector2_TypeInfo, &v15, callback, object, method, v6, v7, v8);
  return (System_IAsyncResult_o *)sub_1C3E518(this, v14, callback, object);
}


void UICamera_VectorDelegate__EndInvoke(
        UICamera_VectorDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C3E51C(result, 0, method);
}


// local variable allocation has failed, the output may be wrong!
void UICamera_VectorDelegate__Invoke(
        UICamera_VectorDelegate_o *this,
        UnityEngine_GameObject_o *go,
        UnityEngine_Vector2_o delta,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, UnityEngine_GameObject_o *, intptr_t, long double, long double))this->fields.invoke_impl)(
    this->fields.method_code,
    go,
    this->fields.method,
    *(long double *)&delta.fields.x,
    *(long double *)&delta.fields.y);
}


void UICamera_VoidDelegate___ctor(
        UICamera_VoidDelegate_o *this,
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
      v9 = sub_1A88E20;
LABEL_8:
      this->fields.invoke_impl = (intptr_t)v9;
      goto LABEL_9;
    }
  }
  else
  {
    if ( !v8 )
    {
      v9 = sub_1A88E00;
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
  this->fields.extra_arg = (intptr_t)sub_1A88DB8;
}


System_IAsyncResult_o *UICamera_VoidDelegate__BeginInvoke(
        UICamera_VoidDelegate_o *this,
        UnityEngine_GameObject_o *go,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *v6; // [xsp+0h] [xbp-20h] BYREF

  v6 = go;
  return (System_IAsyncResult_o *)sub_1C3E518(this, &v6, callback, object);
}


void UICamera_VoidDelegate__EndInvoke(
        UICamera_VoidDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C3E51C(result, 0, method);
}


void UICamera_VoidDelegate__Invoke(
        UICamera_VoidDelegate_o *this,
        UnityEngine_GameObject_o *go,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, UnityEngine_GameObject_o *, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    go,
    this->fields.method);
}


void UICamera___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C5B2EA & 1) == 0 )
  {
    sub_1C3E564(&UICamera___c_TypeInfo);
    byte_4C5B2EA = 1;
  }
  v1 = (Il2CppObject *)sub_1C3E7B0(UICamera___c_TypeInfo);
  System_Object___ctor(v1, 0);
  UICamera___c_TypeInfo->static_fields->__9 = (struct UICamera___c_o *)v1;
  sub_1C3E508((CGThumbnailListItem_o *)UICamera___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void UICamera___c___ctor(UICamera___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t UICamera___c___Raycast_b__125_0(
        UICamera___c_o *this,
        UICamera_DepthEntry_o *r1,
        UICamera_DepthEntry_o *r2,
        const MethodInfo *method)
{
  return System_Int32__CompareTo_65146256((int32_t)r2, r1->fields.depth, 0);
}


int32_t UICamera___c___Raycast_b__125_1(
        UICamera___c_o *this,
        UICamera_DepthEntry_o *r1,
        UICamera_DepthEntry_o *r2,
        const MethodInfo *method)
{
  return System_Int32__CompareTo_65146256((int32_t)r2, r1->fields.depth, 0);
}