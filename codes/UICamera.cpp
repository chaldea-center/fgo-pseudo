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
  __int64 v44; // x0
  int32_t v45; // w2
  const MethodInfo *v46; // x3
  __int64 v47; // x20
  int32_t v48; // w2
  const MethodInfo *v49; // x3
  __int64 v50; // x20
  int32_t v51; // w2
  const MethodInfo *v52; // x3
  CGThumbnailListItem_o *p_mMouse; // x0
  int32_t v54; // w2
  const MethodInfo *v55; // x3
  __int64 v56; // x19
  CGThumbnailListItem_o *p_controller; // x0
  int32_t v58; // w2
  const MethodInfo *v59; // x3
  System_Collections_Generic_Dictionary_int__object__o *v60; // x19
  CGThumbnailListItem_o *p_mTouches; // x0
  int32_t v62; // w2
  const MethodInfo *v63; // x3
  struct UICamera_StaticFields *v64; // x8
  BetterList_UICamera_DepthEntry__o *v65; // x19
  CGThumbnailListItem_o *p_mHits; // x0
  int32_t v67; // w2
  const MethodInfo *v68; // x3
  int32x2_t v69; // d1
  struct UnityEngine_Vector3_StaticFields *v70; // x8
  float32x2_t v71; // d9
  float v72; // s8
  unsigned __int64 v73; // d0
  float v74; // s1
  struct UnityEngine_Vector3_StaticFields *v75; // x8
  UICamera_c *v76; // x8
  struct UICamera_StaticFields *v77; // x9
  struct UICamera_StaticFields *v78; // x8
  __int64 v79; // x0

  if ( (byte_4C474EA & 1) == 0 )
  {
    sub_1C37058(&Method_BetterList_UICamera___ctor__);
    sub_1C37058(&Method_BetterList_UICamera_DepthEntry___ctor__);
    sub_1C37058(&BetterList_UICamera__TypeInfo);
    sub_1C37058(&BetterList_UICamera_DepthEntry__TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__UICamera_MouseOrTouch___ctor__);
    sub_1C37058(&System_Collections_Generic_Dictionary_int__UICamera_MouseOrTouch__TypeInfo);
    sub_1C37058(&UICamera_GetAxisFunc_TypeInfo);
    sub_1C37058(&UICamera_GetKeyStateFunc_TypeInfo);
    sub_1C37058(&Method_UnityEngine_Input_GetAxis__);
    sub_1C37058(&Method_UnityEngine_Input_GetKeyDown__);
    sub_1C37058(&Method_UnityEngine_Input_GetKeyUp__);
    sub_1C37058(&Method_UnityEngine_Input_GetKey__);
    sub_1C37058(&UICamera_MouseOrTouch___TypeInfo);
    sub_1C37058(&UICamera_MouseOrTouch_TypeInfo);
    sub_1C37058(&UICamera_TypeInfo);
    byte_4C474EA = 1;
  }
  v1 = (BetterList_T__o *)sub_1C372A4(BetterList_UICamera__TypeInfo);
  BetterList_object____ctor(v1, (const MethodInfo_331A714 *)Method_BetterList_UICamera___ctor__);
  UICamera_TypeInfo->static_fields->list = (struct BetterList_UICamera__o *)v1;
  sub_1C36FFC((CGThumbnailListItem_o *)UICamera_TypeInfo->static_fields, (int32_t)v1, v2, v3);
  v4 = (UICamera_GetKeyStateFunc_o *)sub_1C372A4(UICamera_GetKeyStateFunc_TypeInfo);
  UICamera_GetKeyStateFunc___ctor(v4, 0, Method_UnityEngine_Input_GetKeyDown__, v5);
  static_fields = UICamera_TypeInfo->static_fields;
  static_fields->GetKeyDown = v4;
  sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->GetKeyDown, (int32_t)v4, v7, v8);
  v9 = (UICamera_GetKeyStateFunc_o *)sub_1C372A4(UICamera_GetKeyStateFunc_TypeInfo);
  UICamera_GetKeyStateFunc___ctor(v9, 0, Method_UnityEngine_Input_GetKeyUp__, v10);
  v11 = UICamera_TypeInfo->static_fields;
  v11->GetKeyUp = v9;
  sub_1C36FFC((CGThumbnailListItem_o *)&v11->GetKeyUp, (int32_t)v9, v12, v13);
  v14 = (UICamera_GetKeyStateFunc_o *)sub_1C372A4(UICamera_GetKeyStateFunc_TypeInfo);
  UICamera_GetKeyStateFunc___ctor(v14, 0, Method_UnityEngine_Input_GetKey__, v15);
  v16 = UICamera_TypeInfo->static_fields;
  v16->GetKey = v14;
  sub_1C36FFC((CGThumbnailListItem_o *)&v16->GetKey, (int32_t)v14, v17, v18);
  v19 = (UICamera_GetAxisFunc_o *)sub_1C372A4(UICamera_GetAxisFunc_TypeInfo);
  UICamera_GetAxisFunc___ctor(v19, 0, Method_UnityEngine_Input_GetAxis__, v20);
  v21 = UICamera_TypeInfo->static_fields;
  v21->GetAxis = v19;
  sub_1C36FFC((CGThumbnailListItem_o *)&v21->GetAxis, (int32_t)v19, v22, v23);
  v26 = UICamera_TypeInfo;
  v27 = UICamera_TypeInfo->static_fields;
  v27->showTooltips = 1;
  if ( !byte_4C3C81A )
  {
    sub_1C37058(&UnityEngine_Vector2_TypeInfo);
    v26 = UICamera_TypeInfo;
    byte_4C3C81A = 1;
    v27 = UICamera_TypeInfo->static_fields;
  }
  v27->lastTouchPosition = UnityEngine_Vector2_TypeInfo->static_fields->zeroVector;
  if ( !byte_4C3C921 )
  {
    sub_1C37058(&UnityEngine_Vector3_TypeInfo);
    v26 = UICamera_TypeInfo;
    byte_4C3C921 = 1;
  }
  v28 = v26->static_fields;
  v29 = UnityEngine_Vector3_TypeInfo->static_fields;
  z = v29->zeroVector.fields.z;
  *(_QWORD *)&v28->lastWorldPosition.fields.x = *(_QWORD *)&v29->zeroVector.fields.x;
  v28->lastWorldPosition.fields.z = z;
  v31 = v26->static_fields;
  v31->current = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)&v31->current, 0, v24, v25);
  v32 = UICamera_TypeInfo->static_fields;
  v32->currentCamera = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)&v32->currentCamera, 0, v33, v34);
  v35 = UICamera_TypeInfo->static_fields;
  v35->currentTouch = 0;
  v35 = (struct UICamera_StaticFields *)((char *)v35 + 160);
  v35[-1].GetInputTouchCount = (struct UICamera_GetTouchCountCallback_o *)0xFFFFFF9C00000000LL;
  LODWORD(v35[-1].GetInputTouch) = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)v35, 0, v36, v37);
  v38 = UICamera_TypeInfo->static_fields;
  v38->inputHasFocus = 0;
  v38->mCurrentSelection = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)&v38->mCurrentSelection, 0, v39, v40);
  v41 = sub_1C37100(UICamera_MouseOrTouch___TypeInfo, 3);
  v42 = sub_1C372A4(UICamera_MouseOrTouch_TypeInfo);
  *(_DWORD *)(v42 + 96) = 1;
  *(_BYTE *)(v42 + 100) = 1;
  System_Object___ctor((Il2CppObject *)v42, 0);
  if ( !v41 )
    sub_1C372B4(v43);
  v44 = sub_1C37194(v42, *(_QWORD *)(*(_QWORD *)v41 + 64LL));
  if ( !v44 )
    goto LABEL_26;
  if ( !*(_DWORD *)(v41 + 24) )
    goto LABEL_27;
  *(_QWORD *)(v41 + 32) = v42;
  sub_1C36FFC((CGThumbnailListItem_o *)(v41 + 32), v42, v45, v46);
  v47 = sub_1C372A4(UICamera_MouseOrTouch_TypeInfo);
  *(_DWORD *)(v47 + 96) = 1;
  *(_BYTE *)(v47 + 100) = 1;
  System_Object___ctor((Il2CppObject *)v47, 0);
  v44 = sub_1C37194(v47, *(_QWORD *)(*(_QWORD *)v41 + 64LL));
  if ( !v44 )
    goto LABEL_26;
  if ( *(_DWORD *)(v41 + 24) <= 1u )
    goto LABEL_27;
  *(_QWORD *)(v41 + 40) = v47;
  sub_1C36FFC((CGThumbnailListItem_o *)(v41 + 40), v47, v48, v49);
  v50 = sub_1C372A4(UICamera_MouseOrTouch_TypeInfo);
  *(_DWORD *)(v50 + 96) = 1;
  *(_BYTE *)(v50 + 100) = 1;
  System_Object___ctor((Il2CppObject *)v50, 0);
  v44 = sub_1C37194(v50, *(_QWORD *)(*(_QWORD *)v41 + 64LL));
  if ( !v44 )
  {
LABEL_26:
    v79 = sub_1C372D8(v44);
    sub_1C37180(v79, 0);
  }
  if ( *(_DWORD *)(v41 + 24) <= 2u )
LABEL_27:
    sub_1C372BC(v44);
  *(_QWORD *)(v41 + 48) = v50;
  sub_1C36FFC((CGThumbnailListItem_o *)(v41 + 48), v50, v51, v52);
  p_mMouse = (CGThumbnailListItem_o *)&UICamera_TypeInfo->static_fields->mMouse;
  p_mMouse->klass = (CGThumbnailListItem_c *)v41;
  sub_1C36FFC(p_mMouse, v41, v54, v55);
  v56 = sub_1C372A4(UICamera_MouseOrTouch_TypeInfo);
  *(_DWORD *)(v56 + 96) = 1;
  *(_BYTE *)(v56 + 100) = 1;
  System_Object___ctor((Il2CppObject *)v56, 0);
  p_controller = (CGThumbnailListItem_o *)&UICamera_TypeInfo->static_fields->controller;
  p_controller->klass = (CGThumbnailListItem_c *)v56;
  sub_1C36FFC(p_controller, v56, v58, v59);
  UICamera_TypeInfo->static_fields->mNextEvent = 0.0;
  v60 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C372A4(System_Collections_Generic_Dictionary_int__UICamera_MouseOrTouch__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v60,
    (const MethodInfo_33F9BB0 *)Method_System_Collections_Generic_Dictionary_int__UICamera_MouseOrTouch___ctor__);
  p_mTouches = (CGThumbnailListItem_o *)&UICamera_TypeInfo->static_fields->mTouches;
  p_mTouches->klass = (CGThumbnailListItem_c *)v60;
  sub_1C36FFC(p_mTouches, (int32_t)v60, v62, v63);
  v64 = UICamera_TypeInfo->static_fields;
  v64->mHit.fields.go = 0;
  *(_OWORD *)&v64->mHit.fields.hit.fields.m_Distance = 0u;
  *(_OWORD *)&v64->mHit.fields.point.fields.x = 0u;
  *(_OWORD *)&v64->mHit.fields.depth = 0u;
  *(_OWORD *)&v64->mHit.fields.hit.fields.m_Normal.fields.x = 0u;
  *(_QWORD *)&v64->mWidth = 0;
  v64->isDragging = 0;
  v65 = (BetterList_UICamera_DepthEntry__o *)sub_1C372A4(BetterList_UICamera_DepthEntry__TypeInfo);
  BetterList_UICamera_DepthEntry____ctor(
    v65,
    (const MethodInfo_3320540 *)Method_BetterList_UICamera_DepthEntry___ctor__);
  p_mHits = (CGThumbnailListItem_o *)&UICamera_TypeInfo->static_fields->mHits;
  p_mHits->klass = (CGThumbnailListItem_c *)v65;
  sub_1C36FFC(p_mHits, (int32_t)v65, v67, v68);
  if ( !byte_4C3F7D9 )
  {
    sub_1C37058(&UnityEngine_Vector3_TypeInfo);
    byte_4C3F7D9 = 1;
  }
  v70 = UnityEngine_Vector3_TypeInfo->static_fields;
  v71.n64_u64[0] = *(unsigned __int64 *)&v70->backVector.fields.x;
  v72 = v70->backVector.fields.z;
  if ( !byte_4C3C924 )
  {
    sub_1C37058(&System_Math_TypeInfo);
    byte_4C3C924 = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v69.n64_f32[0] = sqrtf((float)(v72 * v72) + vaddv_f32(vmul_f32(v71, v71)));
  if ( v69.n64_f32[0] <= 0.00001 )
  {
    if ( !byte_4C3C921 )
    {
      sub_1C37058(&UnityEngine_Vector3_TypeInfo);
      byte_4C3C921 = 1;
    }
    v75 = UnityEngine_Vector3_TypeInfo->static_fields;
    v73 = *(_QWORD *)&v75->zeroVector.fields.x;
    v74 = v75->zeroVector.fields.z;
  }
  else
  {
    v73 = vdiv_f32(v71, vdup_lane_s32(v69, 0)).n64_u64[0];
    v74 = v72 / v69.n64_f32[0];
  }
  v76 = UICamera_TypeInfo;
  v77 = UICamera_TypeInfo->static_fields;
  *(_QWORD *)&v77->m2DPlane.fields.m_Normal.fields.x = v73;
  v77->m2DPlane.fields.m_Normal.fields.z = v74;
  v77->m2DPlane.fields.m_Distance = 0.0;
  v78 = v76->static_fields;
  v78->mNotifying = 0;
  v78->mUsingTouchEvents = 1;
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

  if ( (byte_4C474E9 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_15322/*"Vertical"*/);
    sub_1C37058(&StringLiteral_7347/*"Horizontal"*/);
    sub_1C37058(&StringLiteral_9167/*"Mouse ScrollWheel"*/);
    byte_4C474E9 = 1;
  }
  this->fields.eventType = 1;
  this->fields.eventReceiverMask = UnityEngine_LayerMask__op_Implicit_71249548(-1, 0);
  *(_DWORD *)&this->fields.useMouse = 16843009;
  *(_WORD *)&this->fields.useController = 257;
  *(_OWORD *)&this->fields.tooltipDelay = xmmword_C0ECC0;
  *(_QWORD *)&this->fields.touchClickThreshold = 0xBF80000042200000LL;
  v3 = StringLiteral_9167/*"Mouse ScrollWheel"*/;
  this->fields.scrollAxisName = (struct System_String_o *)StringLiteral_9167/*"Mouse ScrollWheel"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.scrollAxisName, v3, v4, v5);
  v6 = StringLiteral_15322/*"Vertical"*/;
  this->fields.verticalAxisName = (struct System_String_o *)StringLiteral_15322/*"Vertical"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.verticalAxisName, v6, v7, v8);
  v9 = StringLiteral_7347/*"Horizontal"*/;
  this->fields.horizontalAxisName = (struct System_String_o *)StringLiteral_7347/*"Horizontal"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.horizontalAxisName, v9, v10, v11);
  this->fields.commandClick = 1;
  *(_OWORD *)&this->fields.submitKey0 = xmmword_C0ECD0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void UICamera__Awake(UICamera_o *this, const MethodInfo *method)
{
  int32_t width; // w0
  UICamera_c *v4; // x8
  int32_t v5; // w20
  UICamera_c *v6; // x0
  struct UICamera_MouseOrTouch_array *mMouse; // x8
  UICamera_MouseOrTouch_o *v8; // x19
  __int64 i; // x19
  struct UICamera_StaticFields *static_fields; // x9
  struct UICamera_MouseOrTouch_array *v11; // x8
  unsigned __int64 max_length_low; // x10
  UICamera_MouseOrTouch_o *v13; // x10
  struct UnityEngine_Vector2_o *v14; // x8
  struct UICamera_MouseOrTouch_array *v15; // x8
  UICamera_MouseOrTouch_o *v16; // x9
  struct UnityEngine_Vector2_o *v17; // x8
  struct UnityEngine_Vector2_o *v18; // x8
  UnityEngine_Vector3_o mousePosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C474DA & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Application_TypeInfo);
    sub_1C37058(&UICamera_TypeInfo);
    byte_4C474DA = 1;
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
  v6 = UICamera_TypeInfo;
  if ( !UICamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    v6 = UICamera_TypeInfo;
  }
  mMouse = v6->static_fields->mMouse;
  if ( !mMouse )
    goto LABEL_33;
  if ( !LODWORD(mMouse->max_length) )
    goto LABEL_34;
  v8 = mMouse->m_Items[0];
  mousePosition = UnityEngine_Input__get_mousePosition(0);
  if ( !v8 )
    goto LABEL_33;
  v8->fields.pos.fields.x = mousePosition.fields.x;
  v8->fields.pos.fields.y = mousePosition.fields.y;
  v6 = UICamera_TypeInfo;
  for ( i = 5; ; ++i )
  {
    if ( !v6->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v6);
      v6 = UICamera_TypeInfo;
    }
    static_fields = v6->static_fields;
    v11 = static_fields->mMouse;
    if ( !v11 )
      goto LABEL_33;
    max_length_low = LODWORD(v11->max_length);
    if ( i == 7 )
      break;
    if ( i - 4 >= max_length_low )
      goto LABEL_34;
    v13 = v11->m_Items[0];
    if ( !v13 )
      goto LABEL_33;
    v14 = (struct UnityEngine_Vector2_o *)*((_QWORD *)&v11->obj.klass + i);
    if ( !v14 )
      goto LABEL_33;
    v14[2] = v13->fields.pos;
    v15 = v6->static_fields->mMouse;
    if ( !v15 )
      goto LABEL_33;
    if ( i - 4 >= (unsigned __int64)LODWORD(v15->max_length) )
      goto LABEL_34;
    v16 = v15->m_Items[0];
    if ( !v16 )
      goto LABEL_33;
    v17 = (struct UnityEngine_Vector2_o *)*((_QWORD *)&v15->obj.klass + i);
    if ( !v17 )
      goto LABEL_33;
    v17[3] = v16->fields.pos;
  }
  if ( !(_DWORD)max_length_low )
LABEL_34:
    sub_1C372BC(v6);
  v18 = (struct UnityEngine_Vector2_o *)v11->m_Items[0];
  if ( !v18 )
LABEL_33:
    sub_1C372B4(v6);
  static_fields->lastTouchPosition = v18[2];
}


int32_t UICamera__CompareFunc(UICamera_o *a, UICamera_o *b, const MethodInfo *method)
{
  UICamera_o *v4; // x20
  const MethodInfo *v5; // x1
  float depth; // s0
  float v7; // s8
  const MethodInfo *v8; // x1
  float v10; // s8
  const MethodInfo *v11; // x1

  if ( !a )
    goto LABEL_12;
  v4 = a;
  a = (UICamera_o *)UICamera__get_cachedCamera(a, (const MethodInfo *)b);
  if ( !a )
    goto LABEL_12;
  depth = UnityEngine_Camera__get_depth((UnityEngine_Camera_o *)a, 0);
  if ( !b )
    goto LABEL_12;
  v7 = depth;
  a = (UICamera_o *)UICamera__get_cachedCamera(b, v5);
  if ( !a )
    goto LABEL_12;
  if ( v7 < UnityEngine_Camera__get_depth((UnityEngine_Camera_o *)a, 0) )
    return 1;
  a = (UICamera_o *)UICamera__get_cachedCamera(v4, v8);
  if ( !a
    || (v10 = UnityEngine_Camera__get_depth((UnityEngine_Camera_o *)a, 0),
        (a = (UICamera_o *)UICamera__get_cachedCamera(b, v11)) == 0) )
  {
LABEL_12:
    sub_1C372B4(a);
  }
  if ( v10 <= UnityEngine_Camera__get_depth((UnityEngine_Camera_o *)a, 0) )
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

  if ( (byte_4C474DF & 1) == 0 )
  {
    sub_1C37058(&UICamera_TypeInfo);
    sub_1C37058(&UIRoot_TypeInfo);
    sub_1C37058(&StringLiteral_15180/*"UpdateAnchors"*/);
    byte_4C474DF = 1;
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
      UIRoot__Broadcast((System_String_o *)StringLiteral_15180/*"UpdateAnchors"*/, 0);
      onScreenResize = UICamera_TypeInfo->static_fields->onScreenResize;
      if ( onScreenResize )
      {
        if ( !UICamera_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
          onScreenResize = UICamera_TypeInfo->static_fields->onScreenResize;
          if ( !onScreenResize )
            sub_1C372B4(v9);
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
  UICamera_c *v11; // x0
  UnityEngine_Object_o *mCurrentSelection; // x20
  __int64 v13; // x8
  const MethodInfo *v14; // x1
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

  if ( (byte_4C474DE & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&float_TypeInfo);
    sub_1C37058(&UICamera_TypeInfo);
    sub_1C37058(&StringLiteral_9953/*"OnScroll"*/);
    byte_4C474DE = 1;
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
    sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->current, (int32_t)this, v3, v4);
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
      v11 = UICamera_TypeInfo;
      if ( !UICamera_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
        v11 = UICamera_TypeInfo;
      }
      mCurrentSelection = (UnityEngine_Object_o *)v11->static_fields->mCurrentSelection;
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
        v13 = *(_QWORD *)(*((_QWORD *)v10 + 23) + 8LL);
        if ( !v13 )
          goto LABEL_107;
        if ( ((*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(v13 + 24))(
                *(_QWORD *)(v13 + 64),
                (unsigned int)this->fields.cancelKey0,
                *(_QWORD *)(v13 + 40))
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
        UICamera__set_selectedObject(0, v14);
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
        sub_1C36FFC((CGThumbnailListItem_o *)&v31->mCurrentSelection, 0, v23, v24);
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
          sub_1C36FFC((CGThumbnailListItem_o *)&v62->current, 0, v23, v24);
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
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.mTooltip, (int32_t)v55, v23, v24);
    v10 = (char *)UICamera_TypeInfo->static_fields;
    v58 = *((_QWORD *)v10 + 40);
    if ( v58 )
    {
      if ( !*(_DWORD *)(v58 + 24) )
        sub_1C372BC(v10);
      v59 = *(_QWORD *)(v58 + 32);
      *((_QWORD *)v10 + 20) = v59;
      sub_1C36FFC((CGThumbnailListItem_o *)(v10 + 160), v59, v56, v57);
      UICamera_TypeInfo->static_fields->currentTouchID = -1;
      UICamera__ShowTooltip(this, 1, v60);
      goto LABEL_103;
    }
LABEL_107:
    sub_1C372B4(v10);
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
  if ( (byte_4C474D2 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&UICamera_TypeInfo);
    byte_4C474D2 = 1;
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
      sub_1C372B4(v5);
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
      sub_1C372BC(v5);
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
  Il2CppObject *Component_object; // x20
  Il2CppObject *v5; // x20

  if ( (byte_4C474CC & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_Component_GetComponent_Rigidbody___);
    sub_1C37058(&Method_UnityEngine_Component_GetComponent_UIPanel___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C474CC = 1;
  }
  while ( 1 )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v3 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)trans, 0, 0);
    if ( !v3 )
      break;
    if ( !trans )
      sub_1C372B4(v3);
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)trans,
                         (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0) )
      break;
    v5 = UnityEngine_Component__GetComponent_object_(
           (UnityEngine_Component_o *)trans,
           (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_Rigidbody___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v5, 0, 0) )
      return (UnityEngine_Rigidbody_o *)v5;
    trans = UnityEngine_Transform__get_parent(trans, 0);
  }
  return 0;
}


UnityEngine_Rigidbody2D_o *UICamera__FindRootRigidbody2D(UnityEngine_Transform_o *trans, const MethodInfo *method)
{
  _BOOL8 v3; // x0
  Il2CppObject *Component_object; // x20
  Il2CppObject *v5; // x20

  if ( (byte_4C474CD & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_Component_GetComponent_Rigidbody2D___);
    sub_1C37058(&Method_UnityEngine_Component_GetComponent_UIPanel___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C474CD = 1;
  }
  while ( 1 )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v3 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)trans, 0, 0);
    if ( !v3 )
      break;
    if ( !trans )
      sub_1C372B4(v3);
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)trans,
                         (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0) )
      break;
    v5 = UnityEngine_Component__GetComponent_object_(
           (UnityEngine_Component_o *)trans,
           (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_Rigidbody2D___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v5, 0, 0) )
      return (UnityEngine_Rigidbody2D_o *)v5;
    trans = UnityEngine_Transform__get_parent(trans, 0);
  }
  return 0;
}


int32_t UICamera__GetDirection(int32_t up, int32_t down, const MethodInfo *method)
{
  UICamera_c *v5; // x0
  struct UICamera_GetKeyStateFunc_o *GetKeyDown; // x8
  struct UICamera_GetKeyStateFunc_o *v8; // x8

  if ( (byte_4C474D3 & 1) == 0 )
  {
    sub_1C37058(&UICamera_TypeInfo);
    byte_4C474D3 = 1;
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
    sub_1C372B4(v5);
  return (int)(((unsigned int (__fastcall *)(intptr_t, _QWORD, intptr_t))v8->fields.invoke_impl)(
                 v8->fields.method_code,
                 (unsigned int)down,
                 v8->fields.method) << 31) >> 31;
}


// local variable allocation has failed, the output may be wrong!
int32_t UICamera__GetDirection_49074356(
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

  if ( (byte_4C474D4 & 1) == 0 )
  {
    sub_1C37058(&UICamera_TypeInfo);
    byte_4C474D4 = 1;
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
    sub_1C372B4(v9);
  return (int)(((unsigned int (__fastcall *)(intptr_t, _QWORD, intptr_t))v14->fields.invoke_impl)(
                 v14->fields.method_code,
                 (unsigned int)down1,
                 v14->fields.method) << 31) >> 31;
}


int32_t UICamera__GetDirection_49074692(System_String_o *axis, const MethodInfo *method)
{
  float time; // s0
  UICamera_c *v4; // x0
  float v5; // s8
  int32_t result; // w0
  UICamera_c *v7; // x0
  struct UICamera_GetAxisFunc_o *GetAxis; // x8
  float v9; // s0
  UICamera_c *v10; // x0
  struct UICamera_StaticFields *static_fields; // x8
  float v12; // s0
  UICamera_c *v13; // x0

  if ( (byte_4C474D5 & 1) == 0 )
  {
    sub_1C37058(&UICamera_TypeInfo);
    byte_4C474D5 = 1;
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
  v7 = UICamera_TypeInfo;
  if ( !UICamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    v7 = UICamera_TypeInfo;
  }
  GetAxis = v7->static_fields->GetAxis;
  if ( !GetAxis )
    sub_1C372B4(v7);
  v9 = ((float (__fastcall *)(intptr_t, System_String_o *, intptr_t))GetAxis->fields.invoke_impl)(
         GetAxis->fields.method_code,
         axis,
         GetAxis->fields.method);
  if ( v9 <= 0.75 )
  {
    if ( v9 >= -0.75 )
      return 0;
    v13 = UICamera_TypeInfo;
    if ( !UICamera_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
      v13 = UICamera_TypeInfo;
    }
    static_fields = v13->static_fields;
    v12 = v5 + 0.25;
    result = -1;
  }
  else
  {
    v10 = UICamera_TypeInfo;
    if ( !UICamera_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
      v10 = UICamera_TypeInfo;
    }
    static_fields = v10->static_fields;
    v12 = v5 + 0.25;
    result = 1;
  }
  static_fields->mNextEvent = v12;
  return result;
}


UICamera_MouseOrTouch_o *UICamera__GetMouse(int32_t button, const MethodInfo *method)
{
  UICamera_c *v3; // x0
  struct UICamera_MouseOrTouch_array *mMouse; // x8

  if ( (byte_4C474D7 & 1) == 0 )
  {
    sub_1C37058(&UICamera_TypeInfo);
    byte_4C474D7 = 1;
  }
  v3 = UICamera_TypeInfo;
  if ( !UICamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    v3 = UICamera_TypeInfo;
  }
  mMouse = v3->static_fields->mMouse;
  if ( !mMouse )
    sub_1C372B4(v3);
  if ( LODWORD(mMouse->max_length) <= button )
    sub_1C372BC(v3);
  return mMouse->m_Items[button];
}


UICamera_MouseOrTouch_o *UICamera__GetTouch(int32_t id, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__object__o *mTouches; // x0
  __int64 v4; // x20
  UICamera_c *v5; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C474D8 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__UICamera_MouseOrTouch__Add__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__UICamera_MouseOrTouch__TryGetValue__);
    sub_1C37058(&UICamera_MouseOrTouch_TypeInfo);
    sub_1C37058(&UICamera_TypeInfo);
    byte_4C474D8 = 1;
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
               (const MethodInfo_33FBD10 *)Method_System_Collections_Generic_Dictionary_int__UICamera_MouseOrTouch__TryGetValue__) )
        {
          return (UICamera_MouseOrTouch_o *)value;
        }
        v4 = sub_1C372A4(UICamera_MouseOrTouch_TypeInfo);
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
              (const MethodInfo_33FA584 *)Method_System_Collections_Generic_Dictionary_int__UICamera_MouseOrTouch__Add__);
            return (UICamera_MouseOrTouch_o *)value;
          }
        }
      }
      sub_1C372B4(mTouches);
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

  if ( (byte_4C474D1 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&UICamera_TypeInfo);
    byte_4C474D1 = 1;
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
  UnityEngine_Object_o *monitor; // x20
  Il2CppObject *value; // x8
  UnityEngine_Object_o *v13; // x20
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v15; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v16; // [xsp+30h] [xbp-70h] BYREF

  if ( (byte_4C474C7 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__UICamera_MouseOrTouch__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_Enumerator_int__UICamera_MouseOrTouch__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_Enumerator_int__UICamera_MouseOrTouch__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_Enumerator_int__UICamera_MouseOrTouch__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_KeyValuePair_int__UICamera_MouseOrTouch__get_Value__);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&UICamera_TypeInfo);
    byte_4C474C7 = 1;
  }
  v3 = 0;
  memset(&v16, 0, sizeof(v16));
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
      sub_1C372BC(key);
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
    &v15,
    key,
    (const MethodInfo_33FA9BC *)Method_System_Collections_Generic_Dictionary_int__UICamera_MouseOrTouch__GetEnumerator__);
  v16 = v15;
  while ( 1 )
  {
    v9 = System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
           &v16,
           (const MethodInfo_35513F8 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__UICamera_MouseOrTouch__MoveNext__);
    if ( !v9 )
      break;
    if ( !v16.fields._current.fields.value )
      sub_1C372B4(v9);
    monitor = (UnityEngine_Object_o *)v16.fields._current.fields.value[4].monitor;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(monitor, (UnityEngine_Object_o *)go, 0) )
    {
      System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
        &v16,
        (const MethodInfo_355151C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__UICamera_MouseOrTouch__Dispose__);
      return 1;
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v16,
    (const MethodInfo_355151C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__UICamera_MouseOrTouch__Dispose__);
  key = (System_Collections_Generic_Dictionary_int__object__o *)UICamera_TypeInfo;
  if ( !UICamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    key = (System_Collections_Generic_Dictionary_int__object__o *)UICamera_TypeInfo;
  }
  value = key[2].fields._entries->m_Items[12].fields.value;
  if ( !value )
LABEL_30:
    sub_1C372B4(key);
  v13 = (UnityEngine_Object_o *)value[4].monitor;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  return UnityEngine_Object__op_Equality(v13, (UnityEngine_Object_o *)go, 0);
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
  if ( (byte_4C474CF & 1) == 0 )
  {
    sub_1C37058(&Method_NGUITools_FindInParents_UIPanel___);
    sub_1C37058(&NGUITools_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C474CF = 1;
  }
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  for ( i = (UnityEngine_Object_o *)NGUITools__FindInParents_object_(
                                      go,
                                      (const MethodInfo_3171F1C *)Method_NGUITools_FindInParents_UIPanel___);
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
      sub_1C372B4(v8);
    v12.fields.x = x;
    v12.fields.y = y;
    v12.fields.z = z;
    if ( !UIPanel__IsVisible_49073716((UIPanel_o *)i, v12, v9) )
      break;
  }
  return !v10;
}


bool UICamera__IsVisible_49073232(UICamera_DepthEntry_o *de, const MethodInfo *method)
{
  UnityEngine_GameObject_o *go; // x20
  UnityEngine_Object_o *i; // x20
  _BOOL8 v5; // x0
  const MethodInfo *v6; // x1
  bool v7; // w21

  if ( (byte_4C474D0 & 1) == 0 )
  {
    sub_1C37058(&Method_NGUITools_FindInParents_UIPanel___);
    sub_1C37058(&NGUITools_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C474D0 = 1;
  }
  go = de->fields.go;
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  for ( i = (UnityEngine_Object_o *)NGUITools__FindInParents_object_(
                                      go,
                                      (const MethodInfo_3171F1C *)Method_NGUITools_FindInParents_UIPanel___);
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
      sub_1C372B4(v5);
    if ( !UIPanel__IsVisible_49073716((UIPanel_o *)i, de->fields.point, v6) )
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
  UnityEngine_GameObject_o *v8; // x0
  UnityEngine_Object_o *mGenericHandler; // x22
  UICamera_c *v10; // x0
  UnityEngine_Object_o *v11; // x22
  UICamera_c *v12; // x0
  UICamera_c *v13; // x0

  if ( (byte_4C474D6 & 1) == 0 )
  {
    sub_1C37058(&NGUITools_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&UICamera_TypeInfo);
    byte_4C474D6 = 1;
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
    if ( NGUITools__GetActive_49345096(go, 0) )
    {
      v8 = (UnityEngine_GameObject_o *)UICamera_TypeInfo;
      if ( !UICamera_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
        v8 = (UnityEngine_GameObject_o *)UICamera_TypeInfo;
      }
      ++*(_DWORD *)(v8[7].fields.m_CachedPtr + 480);
      if ( go )
      {
        UnityEngine_GameObject__SendMessage_71247544(go, funcName, obj, 1, 0);
        mGenericHandler = (UnityEngine_Object_o *)UICamera_TypeInfo->static_fields->mGenericHandler;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( !UnityEngine_Object__op_Inequality(mGenericHandler, 0, 0) )
          goto LABEL_24;
        v10 = UICamera_TypeInfo;
        if ( !UICamera_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
          v10 = UICamera_TypeInfo;
        }
        v11 = (UnityEngine_Object_o *)v10->static_fields->mGenericHandler;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( !UnityEngine_Object__op_Inequality(v11, (UnityEngine_Object_o *)go, 0) )
          goto LABEL_24;
        v12 = UICamera_TypeInfo;
        if ( !UICamera_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
          v12 = UICamera_TypeInfo;
        }
        v8 = v12->static_fields->mGenericHandler;
        if ( v8 )
        {
          UnityEngine_GameObject__SendMessage_71247544(v8, funcName, obj, 1, 0);
LABEL_24:
          v13 = UICamera_TypeInfo;
          if ( !UICamera_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
            v13 = UICamera_TypeInfo;
          }
          --v13->static_fields->mNotifying;
          return;
        }
      }
      sub_1C372B4(v8);
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
  const MethodInfo *v18; // x3
  struct UICamera_StaticFields *v19; // x9
  struct UICamera_MouseOrTouch_o *v20; // x8
  __int64 v21; // x0
  int32_t v22; // w22
  const MethodInfo *v23; // x1
  int32_t Item; // w23
  unsigned int v25; // w22
  int v26; // w23
  __int64 v27; // x8
  __int64 v28; // x8
  UnityEngine_Object_o *v29; // x21
  UICamera_c *v30; // x0
  __int64 v31; // x8
  __int64 v32; // x1
  const MethodInfo *v33; // x3
  struct UICamera_StaticFields *v34; // x9
  struct UICamera_MouseOrTouch_o *v35; // x8
  __int64 v36; // x8
  UnityEngine_Object_o *v37; // x21
  UICamera_c *v38; // x0
  struct UICamera_StaticFields *v39; // x0
  struct UICamera_MouseOrTouch_o *controller; // x1
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  struct UICamera_StaticFields *v43; // x8
  __int64 v44; // x1
  int32_t v45; // w2
  const MethodInfo *v46; // x3
  struct UICamera_StaticFields *v47; // x8
  struct UnityEngine_GameObject_o *mCurrentSelection; // x1
  const MethodInfo *v49; // x3
  struct UICamera_MouseOrTouch_o *v50; // x8
  int32_t v51; // w2
  const MethodInfo *v52; // x3
  UICamera_c *v53; // x0
  struct UICamera_StaticFields *v54; // x0
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v55; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v56; // [xsp+30h] [xbp-90h] BYREF

  if ( (byte_4C474E8 & 1) == 0 )
  {
    sub_1C37058(&Method_BetterList_int__Add__);
    sub_1C37058(&Method_BetterList_int___ctor__);
    sub_1C37058(&Method_BetterList_int__get_Item__);
    sub_1C37058(&BetterList_int__TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__UICamera_MouseOrTouch__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_Enumerator_int__UICamera_MouseOrTouch__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_Enumerator_int__UICamera_MouseOrTouch__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_Enumerator_int__UICamera_MouseOrTouch__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_KeyValuePair_int__UICamera_MouseOrTouch__get_Key__);
    sub_1C37058(&Method_System_Collections_Generic_KeyValuePair_int__UICamera_MouseOrTouch__get_Value__);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&UICamera_TypeInfo);
    byte_4C474E8 = 1;
  }
  v5 = UICamera_TypeInfo;
  memset(&v56, 0, sizeof(v56));
  if ( !UICamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    v5 = UICamera_TypeInfo;
  }
  currentTouch = v5->static_fields->currentTouch;
  if ( this->fields.useTouch )
  {
    v7 = (BetterList_int__o *)sub_1C372A4(BetterList_int__TypeInfo);
    BetterList_int____ctor(v7, (const MethodInfo_3319D40 *)Method_BetterList_int___ctor__);
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
      &v55,
      (System_Collections_Generic_Dictionary_int__object__o *)mTouches,
      (const MethodInfo_33FA9BC *)Method_System_Collections_Generic_Dictionary_int__UICamera_MouseOrTouch__GetEnumerator__);
    v56 = v55;
    while ( System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
              &v56,
              (const MethodInfo_35513F8 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__UICamera_MouseOrTouch__MoveNext__) )
    {
      value = v56.fields._current.fields.value;
      if ( v56.fields._current.fields.value )
      {
        key = (int32_t)v56.fields._current.fields.key;
        monitor = (UnityEngine_Object_o *)v56.fields._current.fields.value[4].monitor;
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
          sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->currentTouch, (int32_t)value, v13, v14);
          v19 = UICamera_TypeInfo->static_fields;
          v20 = v19->currentTouch;
          v19->currentScheme = 1;
          v19->currentTouchID = key;
          if ( !v20 )
            sub_1C372B4(v17);
          v20->fields.clickNotification = 0;
          UICamera__ProcessTouch(this, 0, 1, v18);
          if ( !v7 )
            sub_1C372B4(v21);
          BetterList_int___Add(
            v7,
            UICamera_TypeInfo->static_fields->currentTouchID,
            (const MethodInfo_33196E0 *)Method_BetterList_int__Add__);
        }
      }
    }
    System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
      &v56,
      (const MethodInfo_355151C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__UICamera_MouseOrTouch__Dispose__);
    if ( !v7 )
      goto LABEL_60;
    if ( v7->fields.size >= 1 )
    {
      v22 = 0;
      do
      {
        Item = BetterList_int___get_Item(v7, v22, (const MethodInfo_33194DC *)Method_BetterList_int__get_Item__);
        if ( !UICamera_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
        UICamera__RemoveTouch(Item, v23);
        ++v22;
      }
      while ( v22 < v7->fields.size );
    }
  }
  if ( this->fields.useMouse )
  {
    v25 = 0;
    v26 = -1;
    while ( 1 )
    {
      mTouches = (char *)UICamera_TypeInfo;
      if ( !UICamera_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
        mTouches = (char *)UICamera_TypeInfo;
      }
      v27 = *(_QWORD *)(*((_QWORD *)mTouches + 23) + 320LL);
      if ( !v27 )
        break;
      if ( v25 >= *(_DWORD *)(v27 + 24) )
        goto LABEL_61;
      v28 = *(_QWORD *)(v27 + 8LL * (int)v25 + 32);
      if ( !v28 )
        break;
      v29 = *(UnityEngine_Object_o **)(v28 + 72);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Implicit(v29, 0) )
      {
        v30 = UICamera_TypeInfo;
        if ( !UICamera_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
          v30 = UICamera_TypeInfo;
        }
        mTouches = (char *)v30->static_fields;
        v31 = *((_QWORD *)mTouches + 40);
        if ( !v31 )
          break;
        if ( v25 >= *(_DWORD *)(v31 + 24) )
LABEL_61:
          sub_1C372BC(mTouches);
        v32 = *(_QWORD *)(v31 + 8LL * (int)v25 + 32);
        *((_QWORD *)mTouches + 20) = v32;
        sub_1C36FFC((CGThumbnailListItem_o *)(mTouches + 160), v32, v2, v3);
        v34 = UICamera_TypeInfo->static_fields;
        v35 = v34->currentTouch;
        v34->currentTouchID = v26;
        v34->currentKey = v25 + 323;
        v34->currentScheme = 0;
        if ( !v35 )
          break;
        v35->fields.clickNotification = 0;
        UICamera__ProcessTouch(this, 0, 1, v33);
      }
      ++v25;
      --v26;
      if ( v25 == 3 )
        goto LABEL_43;
    }
LABEL_60:
    sub_1C372B4(mTouches);
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
    v36 = *(_QWORD *)(*((_QWORD *)mTouches + 23) + 336LL);
    if ( !v36 )
      goto LABEL_60;
    v37 = *(UnityEngine_Object_o **)(v36 + 72);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Implicit(v37, 0) )
    {
      v38 = UICamera_TypeInfo;
      if ( !UICamera_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
        v38 = UICamera_TypeInfo;
      }
      v39 = v38->static_fields;
      controller = v39->controller;
      v39->currentTouch = controller;
      sub_1C36FFC((CGThumbnailListItem_o *)&v39->currentTouch, (int32_t)controller, v2, v3);
      v43 = UICamera_TypeInfo->static_fields;
      mTouches = (char *)v43->currentTouch;
      *(_QWORD *)&v43->currentScheme = 0xFFFFFF9C00000002LL;
      if ( !mTouches )
        goto LABEL_60;
      v44 = *((_QWORD *)mTouches + 8);
      *((_QWORD *)mTouches + 7) = v44;
      sub_1C36FFC((CGThumbnailListItem_o *)(mTouches + 56), v44, v41, v42);
      v47 = UICamera_TypeInfo->static_fields;
      mTouches = (char *)v47->currentTouch;
      if ( !mTouches )
        goto LABEL_60;
      mCurrentSelection = v47->mCurrentSelection;
      *((_QWORD *)mTouches + 8) = mCurrentSelection;
      sub_1C36FFC((CGThumbnailListItem_o *)(mTouches + 64), (int32_t)mCurrentSelection, v45, v46);
      v50 = UICamera_TypeInfo->static_fields->currentTouch;
      if ( !v50 )
        goto LABEL_60;
      v50->fields.clickNotification = 0;
      UICamera__ProcessTouch(this, 0, 1, v49);
      mTouches = (char *)UICamera_TypeInfo->static_fields->currentTouch;
      if ( !mTouches )
        goto LABEL_60;
      *((_QWORD *)mTouches + 7) = 0;
      sub_1C36FFC((CGThumbnailListItem_o *)(mTouches + 56), 0, v51, v52);
    }
  }
  v53 = UICamera_TypeInfo;
  if ( !UICamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    v53 = UICamera_TypeInfo;
  }
  v54 = v53->static_fields;
  v54->currentTouch = currentTouch;
  sub_1C36FFC((CGThumbnailListItem_o *)&v54->currentTouch, (int32_t)currentTouch, v2, v3);
}


void UICamera__OnDisable(UICamera_o *this, const MethodInfo *method)
{
  UICamera_c *v3; // x0
  BetterList_T__o *list; // x0

  if ( (byte_4C474DC & 1) == 0 )
  {
    sub_1C37058(&Method_BetterList_UICamera__Remove__);
    sub_1C37058(&UICamera_TypeInfo);
    byte_4C474DC = 1;
  }
  v3 = UICamera_TypeInfo;
  if ( !UICamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    v3 = UICamera_TypeInfo;
  }
  list = (BetterList_T__o *)v3->static_fields->list;
  if ( !list )
    sub_1C372B4(0);
  BetterList_object___Remove(
    list,
    (Il2CppObject *)this,
    (const MethodInfo_331A2A0 *)Method_BetterList_UICamera__Remove__);
}


void UICamera__OnEnable(UICamera_o *this, const MethodInfo *method)
{
  UICamera_c *v3; // x0
  BetterList_T__o *list; // x0
  BetterList_T__o *v5; // x19
  BetterList_CompareFunc_T__o *v6; // x20

  if ( (byte_4C474DB & 1) == 0 )
  {
    sub_1C37058(&Method_BetterList_UICamera__Add__);
    sub_1C37058(&Method_BetterList_UICamera__Sort__);
    sub_1C37058(&BetterList_CompareFunc_UICamera__TypeInfo);
    sub_1C37058(&Method_UICamera_CompareFunc__);
    sub_1C37058(&UICamera_TypeInfo);
    byte_4C474DB = 1;
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
          (const MethodInfo_3319FE8 *)Method_BetterList_UICamera__Add__),
        v5 = (BetterList_T__o *)UICamera_TypeInfo->static_fields->list,
        v6 = (BetterList_CompareFunc_T__o *)sub_1C372A4(BetterList_CompareFunc_UICamera__TypeInfo),
        BetterList_CompareFunc_object____ctor(v6, 0, Method_UICamera_CompareFunc__, 0),
        !v5) )
  {
    sub_1C372B4(list);
  }
  BetterList_object___Sort(v5, v6, (const MethodInfo_331A57C *)Method_BetterList_UICamera__Sort__);
}


void UICamera__ProcessFakeTouches(UICamera_o *this, const MethodInfo *method)
{
  bool MouseButtonDown; // w21
  bool MouseButtonUp; // w20
  bool MouseButton; // w0
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  UICamera_c *v8; // x0
  UICamera_c *static_fields; // x0
  const MethodInfo *v10; // x8
  Il2CppClass **klass; // x1
  struct UICamera_MouseOrTouch_o *currentTouch; // x22
  _BOOL4 v13; // w21
  float time; // s0
  struct UICamera_StaticFields *v15; // x8
  struct UnityEngine_Vector2_o *v16; // x22
  struct UnityEngine_Vector2_o zeroVector; // d2
  struct UICamera_MouseOrTouch_o *v18; // x8
  struct UICamera_MouseOrTouch_o *v19; // x8
  struct UICamera_MouseOrTouch_o *v20; // x8
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  UICamera_c *v23; // x0
  struct UICamera_StaticFields *v24; // x8
  struct UnityEngine_GameObject_o *fallThrough; // x1
  UICamera_c *v26; // x0
  UnityEngine_Object_o *hoveredObject; // x22
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  UICamera_c *v30; // x0
  struct UICamera_StaticFields *v31; // x8
  struct UnityEngine_GameObject_o *mGenericHandler; // x1
  UICamera_c *v33; // x0
  Il2CppClass *element_class; // x1
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  struct UICamera_StaticFields *v37; // x8
  Il2CppClass *v38; // x1
  int32_t v39; // w2
  const MethodInfo *v40; // x3
  struct UICamera_StaticFields *v41; // x8
  struct UICamera_MouseOrTouch_o *v42; // x9
  struct UICamera_StaticFields *v43; // x8
  struct UnityEngine_Camera_o *currentCamera; // x1
  CGThumbnailListItem_o *p_this_arg; // x0
  UnityEngine_Object_o *castClass; // x22
  UICamera_c *v47; // x0
  Il2CppClass **nestedTypes; // x8
  const MethodInfo *v49; // x1
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

  if ( (byte_4C474E2 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&UICamera_TypeInfo);
    byte_4C474E2 = 1;
  }
  MouseButtonDown = UnityEngine_Input__GetMouseButtonDown(0, 0);
  MouseButtonUp = UnityEngine_Input__GetMouseButtonUp(0, 0);
  MouseButton = UnityEngine_Input__GetMouseButton(0, 0);
  if ( MouseButtonDown || MouseButtonUp || MouseButton )
  {
    v8 = UICamera_TypeInfo;
    if ( !UICamera_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
      v8 = UICamera_TypeInfo;
    }
    static_fields = (UICamera_c *)v8->static_fields;
    v10 = static_fields->vtable._0_Equals.method;
    HIDWORD(static_fields->_1.properties) = 1;
    if ( !v10 )
      goto LABEL_70;
    if ( !LODWORD(v10->name) )
      sub_1C372BC(static_fields);
    klass = (Il2CppClass **)v10->klass;
    static_fields->_1.nestedTypes = klass;
    sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->_1.nestedTypes, (int32_t)klass, v6, v7);
    static_fields = UICamera_TypeInfo;
    currentTouch = UICamera_TypeInfo->static_fields->currentTouch;
    if ( !currentTouch )
      goto LABEL_70;
    v13 = MouseButtonDown;
    currentTouch->fields.touchBegan = v13;
    if ( v13 )
    {
      if ( static_fields->_2.cctor_finished )
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
    static_fields = UICamera_TypeInfo;
    y = mousePosition.fields.y;
    x = mousePosition.fields.x;
    if ( !UICamera_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
      mousePosition.fields.y = y;
      mousePosition.fields.x = x;
      static_fields = UICamera_TypeInfo;
    }
    v15 = static_fields->static_fields;
    v16 = (struct UnityEngine_Vector2_o *)v15->currentTouch;
    if ( v13 )
    {
      if ( !byte_4C3C81A )
      {
        static_fields = (UICamera_c *)sub_1C37058(&UnityEngine_Vector2_TypeInfo);
        mousePosition.fields.y = y;
        mousePosition.fields.x = x;
        byte_4C3C81A = 1;
      }
      zeroVector = UnityEngine_Vector2_TypeInfo->static_fields->zeroVector;
    }
    else
    {
      v18 = v15->currentTouch;
      if ( !static_fields->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(static_fields);
        mousePosition.fields.y = y;
        mousePosition.fields.x = x;
        v18 = UICamera_TypeInfo->static_fields->currentTouch;
      }
      if ( !v18 )
        goto LABEL_70;
      zeroVector = (struct UnityEngine_Vector2_o)vsub_f32(
                                                   *(float32x2_t *)&mousePosition.fields.x,
                                                   (float32x2_t)v18->fields.pos).n64_u64[0];
    }
    if ( !v16 )
      goto LABEL_70;
    v16[4] = zeroVector;
    static_fields = UICamera_TypeInfo;
    if ( !UICamera_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
      mousePosition.fields.y = y;
      mousePosition.fields.x = x;
      static_fields = UICamera_TypeInfo;
    }
    v19 = static_fields->static_fields->currentTouch;
    if ( !v19 )
      goto LABEL_70;
    v19->fields.pos.fields.x = mousePosition.fields.x;
    v19->fields.pos.fields.y = mousePosition.fields.y;
    v20 = static_fields->static_fields->currentTouch;
    if ( !v20 )
      goto LABEL_70;
    v60.fields.x = v20->fields.pos.fields.x;
    v60.fields.y = v20->fields.pos.fields.y;
    v60.fields.z = 0.0;
    if ( !UICamera__Raycast(v60, (const MethodInfo *)static_fields) )
    {
      v23 = UICamera_TypeInfo;
      if ( !UICamera_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
        v23 = UICamera_TypeInfo;
      }
      v24 = v23->static_fields;
      fallThrough = v24->fallThrough;
      v24->hoveredObject = fallThrough;
      sub_1C36FFC((CGThumbnailListItem_o *)&v24->hoveredObject, (int32_t)fallThrough, v21, v22);
    }
    v26 = UICamera_TypeInfo;
    if ( !UICamera_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
      v26 = UICamera_TypeInfo;
    }
    hoveredObject = (UnityEngine_Object_o *)v26->static_fields->hoveredObject;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(hoveredObject, 0, 0) )
    {
      v30 = UICamera_TypeInfo;
      if ( !UICamera_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
        v30 = UICamera_TypeInfo;
      }
      v31 = v30->static_fields;
      mGenericHandler = v31->mGenericHandler;
      v31->hoveredObject = mGenericHandler;
      sub_1C36FFC((CGThumbnailListItem_o *)&v31->hoveredObject, (int32_t)mGenericHandler, v28, v29);
    }
    v33 = UICamera_TypeInfo;
    if ( !UICamera_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
      v33 = UICamera_TypeInfo;
    }
    static_fields = (UICamera_c *)v33->static_fields->currentTouch;
    if ( !static_fields )
      goto LABEL_70;
    element_class = static_fields->_1.element_class;
    *(_QWORD *)&static_fields->_1.this_arg.bits = element_class;
    sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->_1.this_arg.bits, (int32_t)element_class, v28, v29);
    v37 = UICamera_TypeInfo->static_fields;
    static_fields = (UICamera_c *)v37->currentTouch;
    if ( !static_fields )
      goto LABEL_70;
    v38 = (Il2CppClass *)v37->hoveredObject;
    static_fields->_1.element_class = v38;
    sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->_1.element_class, (int32_t)v38, v35, v36);
    static_fields = UICamera_TypeInfo;
    v41 = UICamera_TypeInfo->static_fields;
    v42 = v41->currentTouch;
    if ( !v42 )
      goto LABEL_70;
    v41->lastTouchPosition = v42->fields.pos;
    if ( !static_fields->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(static_fields);
      static_fields = UICamera_TypeInfo;
    }
    v43 = static_fields->static_fields;
    static_fields = (UICamera_c *)v43->currentTouch;
    if ( v13 )
    {
      if ( !static_fields )
        goto LABEL_70;
      currentCamera = v43->currentCamera;
      static_fields->_1.this_arg.data = currentCamera;
      p_this_arg = (CGThumbnailListItem_o *)&static_fields->_1.this_arg;
    }
    else
    {
      if ( !static_fields )
        goto LABEL_70;
      castClass = (UnityEngine_Object_o *)static_fields->_1.castClass;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Inequality(castClass, 0, 0) )
        goto LABEL_62;
      v47 = UICamera_TypeInfo;
      if ( !UICamera_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
        v47 = UICamera_TypeInfo;
      }
      static_fields = (UICamera_c *)v47->static_fields;
      nestedTypes = static_fields->_1.nestedTypes;
      if ( !nestedTypes )
        goto LABEL_70;
      currentCamera = (struct UnityEngine_Camera_o *)nestedTypes[6];
      static_fields->_1.events = currentCamera;
      p_this_arg = (CGThumbnailListItem_o *)&static_fields->_1.events;
    }
    sub_1C36FFC(p_this_arg, (int32_t)currentCamera, v39, v40);
LABEL_62:
    UICamera__ProcessTouch(this, v13, MouseButtonUp, v40);
    if ( MouseButtonUp )
    {
      v52 = UICamera_TypeInfo;
      if ( !UICamera_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
        v52 = UICamera_TypeInfo;
      }
      UICamera__RemoveTouch(v52->static_fields->currentTouchID, v49);
    }
    v53 = UICamera_TypeInfo;
    if ( !UICamera_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
      v53 = UICamera_TypeInfo;
    }
    static_fields = (UICamera_c *)v53->static_fields->currentTouch;
    if ( static_fields )
    {
      *(_QWORD *)&static_fields->_1.this_arg.bits = 0;
      sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->_1.this_arg.bits, 0, v50, v51);
      v54 = UICamera_TypeInfo->static_fields;
      v54->currentTouch = 0;
      sub_1C36FFC((CGThumbnailListItem_o *)&v54->currentTouch, 0, v55, v56);
      return;
    }
LABEL_70:
    sub_1C372B4(static_fields);
  }
}


void UICamera__ProcessMouse(UICamera_o *this, const MethodInfo *method)
{
  UICamera_MouseOrTouch_o *v3; // x0
  float x; // s8
  float y; // s9
  struct UnityEngine_GameObject_o *dragged; // x8
  struct UnityEngine_GameObject_o *v7; // x8
  void *monitor; // x9
  float32x2_t *v9; // x9
  struct UnityEngine_GameObject_o *v10; // x8
  _DWORD *v11; // x9
  __int64 v12; // x9
  _DWORD *v13; // x8
  __int64 v14; // x8
  float v15; // s11
  __int64 v16; // x20
  _DWORD *v17; // x9
  __int64 v18; // x10
  __int64 v19; // x9
  _DWORD *v20; // x9
  __int64 v21; // x10
  __int64 v22; // x8
  int v23; // w23
  int v24; // w22
  int32_t i; // w20
  UICamera_c *v26; // x0
  float mNextRaycast; // s8
  UICamera_c *v28; // x0
  float v29; // s8
  float v30; // s9
  float z; // s10
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  UICamera_c *v34; // x0
  struct UICamera_StaticFields *static_fields; // x8
  struct UnityEngine_GameObject_o *fallThrough; // x1
  UICamera_c *v37; // x0
  UnityEngine_Object_o *hoveredObject; // x20
  int32_t v39; // w2
  const MethodInfo *v40; // x3
  UICamera_c *v41; // x0
  struct UICamera_StaticFields *v42; // x8
  struct UnityEngine_GameObject_o *mGenericHandler; // x1
  __int64 v44; // x20
  struct UnityEngine_GameObject_o *v45; // x8
  _DWORD *v46; // x9
  struct UnityEngine_GameObject_o *m_CachedPtr; // x1
  _DWORD *v48; // x8
  __int64 v49; // x8
  UnityEngine_Object_o *v50; // x20
  UnityEngine_Object_o *v51; // x21
  _BOOL4 v52; // w0
  int32_t v53; // w2
  const MethodInfo *v54; // x3
  UICamera_c *v55; // x8
  _BOOL4 v56; // w20
  void *v57; // x8
  struct UnityEngine_GameObject_o *v58; // x1
  UICamera_c *v59; // x0
  UnityEngine_Object_o *mTooltip; // x21
  const MethodInfo *v61; // x2
  int v62; // w29
  struct UICamera_StaticFields *v63; // x9
  struct UICamera_MoveDelegate_o *onMouseMove; // x8
  struct UICamera_MouseOrTouch_o *currentTouch; // x9
  struct UICamera_StaticFields *v66; // x0
  int32_t v67; // w2
  const MethodInfo *v68; // x3
  UnityEngine_Object_o *mHover; // x21
  _BOOL4 v70; // w8
  UICamera_c *v71; // x0
  UnityEngine_Object_o *v72; // x21
  const MethodInfo *v73; // x2
  __int64 v74; // x3
  __int64 v75; // x4
  __int64 v76; // x5
  __int64 v77; // x6
  __int64 v78; // x7
  UICamera_c *v79; // x0
  struct UICamera_StaticFields *v80; // x9
  struct UICamera_BoolDelegate_o *onHover; // x8
  UnityEngine_GameObject_o *v82; // x21
  Il2CppObject *v83; // x0
  const MethodInfo *v84; // x3
  CGThumbnailListItem_o *p_mHover; // x0
  int32_t v86; // w2
  const MethodInfo *v87; // x3
  unsigned __int64 v88; // x21
  int v89; // w26
  bool MouseButtonDown; // w22
  bool MouseButtonUp; // w0
  int32_t v92; // w2
  const MethodInfo *v93; // x3
  UICamera_c *v94; // x8
  bool v95; // w23
  _QWORD *v96; // x8
  struct UnityEngine_GameObject_o *v97; // x1
  int32_t v98; // w2
  const MethodInfo *v99; // x3
  UICamera_c *v100; // x0
  struct UICamera_StaticFields *v101; // x8
  struct UnityEngine_Camera_o *currentCamera; // x1
  CGThumbnailListItem_o *p_pressedCam; // x0
  UnityEngine_Object_o *pressed; // x24
  UICamera_c *v105; // x0
  struct UnityEngine_GameObject_o *last; // x8
  int32_t v107; // w2
  const MethodInfo *v108; // x3
  UICamera_c *v109; // x0
  struct UICamera_StaticFields *v110; // x8
  int32_t v111; // w2
  const MethodInfo *v112; // x3
  struct UICamera_StaticFields *v113; // x8
  struct UICamera_MouseOrTouch_array *mMouse; // x9
  UICamera_MouseOrTouch_o *v115; // x9
  struct UnityEngine_GameObject_o *current; // x1
  int32_t v117; // w2
  const MethodInfo *v118; // x3
  void *v119; // x8
  struct UnityEngine_GameObject_o *v120; // x1
  __int64 v121; // x2
  __int64 v122; // x3
  __int64 v123; // x4
  __int64 v124; // x5
  __int64 v125; // x6
  __int64 v126; // x7
  UICamera_c *v127; // x0
  struct UICamera_StaticFields *v128; // x8
  struct UICamera_BoolDelegate_o *v129; // x9
  UnityEngine_GameObject_o *v130; // x19
  Il2CppObject *v131; // x0
  const MethodInfo *v132; // x3
  struct UICamera_StaticFields *v133; // x0
  int32_t v134; // w2
  const MethodInfo *v135; // x3
  struct UICamera_MouseOrTouch_array *v136; // x8
  struct UnityEngine_GameObject_o *v137; // x1
  int32_t v138; // w2
  const MethodInfo *v139; // x3
  __int64 v140; // x19
  _DWORD *v141; // x8
  __int64 v142; // x9
  struct UnityEngine_GameObject_o *v143; // x1
  char v144[4]; // [xsp+8h] [xbp-88h] BYREF
  char v145[4]; // [xsp+Ch] [xbp-84h] BYREF
  UnityEngine_Vector3_o mousePosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v147; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v148; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C474E0 & 1) == 0 )
  {
    sub_1C37058(&bool_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&UICamera_TypeInfo);
    sub_1C37058(&StringLiteral_9914/*"OnHover"*/);
    byte_4C474E0 = 1;
  }
  mousePosition = UnityEngine_Input__get_mousePosition(0);
  v3 = (UICamera_MouseOrTouch_o *)UICamera_TypeInfo;
  x = mousePosition.fields.x;
  y = mousePosition.fields.y;
  if ( !UICamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    v3 = (UICamera_MouseOrTouch_o *)UICamera_TypeInfo;
  }
  dragged = v3[1].fields.dragged;
  *((float *)&dragged[2].monitor + 1) = x;
  *(float *)&dragged[2].fields.m_CachedPtr = y;
  v7 = v3[1].fields.dragged;
  monitor = v7[13].monitor;
  if ( !monitor )
    goto LABEL_174;
  if ( !*((_DWORD *)monitor + 6) )
    goto LABEL_175;
  v9 = (float32x2_t *)*((_QWORD *)monitor + 4);
  if ( !v9 )
    goto LABEL_174;
  v9[4].n64_u64[0] = vsub_f32(*(float32x2_t *)((char *)&v7[2].monitor + 4), v9[2]).n64_u64[0];
  v10 = v3[1].fields.dragged;
  v11 = v10[13].monitor;
  if ( !v11 )
    goto LABEL_174;
  if ( !v11[6] )
    goto LABEL_175;
  v12 = *((_QWORD *)v11 + 4);
  if ( !v12 )
    goto LABEL_174;
  *(_QWORD *)(v12 + 16) = *(void **)((char *)&v10[2].monitor + 4);
  v13 = v3[1].fields.dragged[13].monitor;
  if ( !v13 )
    goto LABEL_174;
  if ( !v13[6] )
    goto LABEL_175;
  v14 = *((_QWORD *)v13 + 4);
  if ( !v14 )
    goto LABEL_174;
  v15 = (float)(*(float *)(v14 + 32) * *(float *)(v14 + 32)) + (float)(*(float *)(v14 + 36) * *(float *)(v14 + 36));
  v16 = 5;
  do
  {
    if ( !LODWORD(v3[2].fields.pos.fields.x) )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v3 = (UICamera_MouseOrTouch_o *)UICamera_TypeInfo;
    }
    v17 = v3[1].fields.dragged[13].monitor;
    if ( !v17 )
      goto LABEL_174;
    if ( (unsigned int)(v16 - 4) >= v17[6] )
      goto LABEL_175;
    v18 = *((_QWORD *)v17 + 4);
    if ( !v18 )
      goto LABEL_174;
    v19 = *(_QWORD *)&v17[2 * v16];
    if ( !v19 )
      goto LABEL_174;
    *(_QWORD *)(v19 + 16) = *(_QWORD *)(v18 + 16);
    v20 = v3[1].fields.dragged[13].monitor;
    if ( !v20 )
      goto LABEL_174;
    if ( (unsigned int)(v16 - 4) >= v20[6] )
      goto LABEL_175;
    v21 = *((_QWORD *)v20 + 4);
    if ( !v21 )
      goto LABEL_174;
    v22 = *(_QWORD *)&v20[2 * v16];
    if ( !v22 )
      goto LABEL_174;
    ++v16;
    *(_QWORD *)(v22 + 32) = *(_QWORD *)(v21 + 32);
  }
  while ( (_DWORD)v16 != 7 );
  v23 = 0;
  v24 = 0;
  for ( i = 0; i != 3; ++i )
  {
    if ( UnityEngine_Input__GetMouseButtonDown(i, 0) )
    {
      v26 = UICamera_TypeInfo;
      if ( !UICamera_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
        v26 = UICamera_TypeInfo;
      }
      v24 = 1;
    }
    else
    {
      if ( !UnityEngine_Input__GetMouseButton(i, 0) )
        continue;
      v26 = UICamera_TypeInfo;
      if ( !UICamera_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
        v26 = UICamera_TypeInfo;
      }
    }
    v23 = 1;
    v26->static_fields->currentScheme = 0;
  }
  if ( (v15 > 0.001) | v23 & 1 || (mNextRaycast = this->fields.mNextRaycast, mNextRaycast < RealTime__get_time(0)) )
  {
    this->fields.mNextRaycast = RealTime__get_time(0) + 0.02;
    v147 = UnityEngine_Input__get_mousePosition(0);
    v28 = UICamera_TypeInfo;
    v29 = v147.fields.x;
    v30 = v147.fields.y;
    z = v147.fields.z;
    if ( !UICamera_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    v148.fields.x = v29;
    v148.fields.y = v30;
    v148.fields.z = z;
    if ( !UICamera__Raycast(v148, (const MethodInfo *)v28) )
    {
      v34 = UICamera_TypeInfo;
      if ( !UICamera_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
        v34 = UICamera_TypeInfo;
      }
      static_fields = v34->static_fields;
      fallThrough = static_fields->fallThrough;
      static_fields->hoveredObject = fallThrough;
      sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->hoveredObject, (int32_t)fallThrough, v32, v33);
    }
    v37 = UICamera_TypeInfo;
    if ( !UICamera_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
      v37 = UICamera_TypeInfo;
    }
    hoveredObject = (UnityEngine_Object_o *)v37->static_fields->hoveredObject;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(hoveredObject, 0, 0) )
    {
      v41 = UICamera_TypeInfo;
      if ( !UICamera_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
        v41 = UICamera_TypeInfo;
      }
      v42 = v41->static_fields;
      mGenericHandler = v42->mGenericHandler;
      v42->hoveredObject = mGenericHandler;
      sub_1C36FFC((CGThumbnailListItem_o *)&v42->hoveredObject, (int32_t)mGenericHandler, v39, v40);
    }
    v44 = 0;
    while ( 1 )
    {
      v3 = (UICamera_MouseOrTouch_o *)UICamera_TypeInfo;
      if ( !UICamera_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
        v3 = (UICamera_MouseOrTouch_o *)UICamera_TypeInfo;
      }
      v45 = v3[1].fields.dragged;
      v46 = v45[13].monitor;
      if ( !v46 )
        break;
      if ( (unsigned int)v44 >= v46[6] )
        goto LABEL_175;
      v3 = *(UICamera_MouseOrTouch_o **)&v46[2 * v44 + 8];
      if ( !v3 )
        break;
      m_CachedPtr = (struct UnityEngine_GameObject_o *)v45[15].fields.m_CachedPtr;
      v3->fields.current = m_CachedPtr;
      sub_1C36FFC((CGThumbnailListItem_o *)&v3->fields.current, (int32_t)m_CachedPtr, v39, v40);
      if ( (_DWORD)++v44 == 3 )
        goto LABEL_59;
    }
LABEL_174:
    sub_1C372B4(v3);
  }
LABEL_59:
  v3 = (UICamera_MouseOrTouch_o *)UICamera_TypeInfo;
  if ( !UICamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    v3 = (UICamera_MouseOrTouch_o *)UICamera_TypeInfo;
  }
  v48 = v3[1].fields.dragged[13].monitor;
  if ( !v48 )
    goto LABEL_174;
  if ( !v48[6] )
    goto LABEL_175;
  v49 = *((_QWORD *)v48 + 4);
  if ( !v49 )
    goto LABEL_174;
  v51 = *(UnityEngine_Object_o **)(v49 + 56);
  v50 = *(UnityEngine_Object_o **)(v49 + 64);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v52 = UnityEngine_Object__op_Inequality(v51, v50, 0);
  v55 = UICamera_TypeInfo;
  v56 = v52;
  if ( v52 )
  {
    if ( !UICamera_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
      v55 = UICamera_TypeInfo;
    }
    v55->static_fields->currentScheme = 0;
  }
  if ( !v55->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v55);
    v55 = UICamera_TypeInfo;
  }
  v3 = (UICamera_MouseOrTouch_o *)v55->static_fields;
  v57 = v3[3].monitor;
  if ( !v57 )
    goto LABEL_174;
  if ( !*((_DWORD *)v57 + 6) )
    goto LABEL_175;
  v58 = (struct UnityEngine_GameObject_o *)*((_QWORD *)v57 + 4);
  v3[1].fields.last = v58;
  sub_1C36FFC((CGThumbnailListItem_o *)&v3[1].fields.last, (int32_t)v58, v53, v54);
  v59 = UICamera_TypeInfo;
  UICamera_TypeInfo->static_fields->currentTouchID = -1;
  if ( (v23 & 1) != 0 )
  {
    this->fields.mTooltipTime = 0.0;
    if ( v15 <= 0.001 )
      goto LABEL_94;
    goto LABEL_86;
  }
  if ( v15 <= 0.001 )
  {
    v62 = 1;
    goto LABEL_96;
  }
  if ( !this->fields.stickyTooltip || v56 )
  {
    if ( this->fields.mTooltipTime == 0.0 )
    {
      mTooltip = (UnityEngine_Object_o *)this->fields.mTooltip;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(mTooltip, 0, 0) )
        UICamera__ShowTooltip(this, 0, v61);
    }
    else
    {
      this->fields.mTooltipTime = RealTime__get_time(0) + this->fields.tooltipDelay;
    }
  }
LABEL_86:
  v3 = (UICamera_MouseOrTouch_o *)UICamera_TypeInfo;
  if ( !UICamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    v3 = (UICamera_MouseOrTouch_o *)UICamera_TypeInfo;
  }
  v63 = (struct UICamera_StaticFields *)v3[1].fields.dragged;
  onMouseMove = v63->onMouseMove;
  if ( onMouseMove )
  {
    if ( !LODWORD(v3[2].fields.pos.fields.x) )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v63 = UICamera_TypeInfo->static_fields;
      onMouseMove = v63->onMouseMove;
    }
    currentTouch = v63->currentTouch;
    if ( !currentTouch || !onMouseMove )
      goto LABEL_174;
    ((void (__fastcall *)(intptr_t, intptr_t, float, float))onMouseMove->fields.invoke_impl)(
      onMouseMove->fields.method_code,
      onMouseMove->fields.method,
      currentTouch->fields.delta.fields.x,
      currentTouch->fields.delta.fields.y);
    v66 = UICamera_TypeInfo->static_fields;
    v66->currentTouch = 0;
    sub_1C36FFC((CGThumbnailListItem_o *)&v66->currentTouch, 0, v67, v68);
  }
LABEL_94:
  v62 = v23 ^ 1;
  if ( ((v24 | v23 ^ 1) & 1) != 0 )
  {
    v59 = UICamera_TypeInfo;
LABEL_96:
    if ( !v59->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v59);
      v59 = UICamera_TypeInfo;
    }
    mHover = (UnityEngine_Object_o *)v59->static_fields->mHover;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v70 = UnityEngine_Object__op_Inequality(mHover, 0, 0);
  }
  else
  {
    v62 = 0;
    v70 = 0;
  }
  if ( v56 && v70 )
  {
    v71 = UICamera_TypeInfo;
    if ( !UICamera_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
      v71 = UICamera_TypeInfo;
    }
    v71->static_fields->currentScheme = 0;
    v72 = (UnityEngine_Object_o *)this->fields.mTooltip;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v72, 0, 0) )
      UICamera__ShowTooltip(this, 0, v73);
    v79 = UICamera_TypeInfo;
    if ( !UICamera_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
      v79 = UICamera_TypeInfo;
    }
    v80 = v79->static_fields;
    onHover = v80->onHover;
    if ( onHover )
    {
      if ( !v79->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v79);
        v80 = UICamera_TypeInfo->static_fields;
        onHover = v80->onHover;
        if ( !onHover )
          goto LABEL_174;
      }
      ((void (__fastcall *)(intptr_t, struct UnityEngine_GameObject_o *, _QWORD, intptr_t))onHover->fields.invoke_impl)(
        onHover->fields.method_code,
        v80->mHover,
        0,
        onHover->fields.method);
      v79 = UICamera_TypeInfo;
    }
    if ( !v79->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v79);
      v79 = UICamera_TypeInfo;
    }
    v82 = v79->static_fields->mHover;
    v145[0] = 0;
    v83 = (Il2CppObject *)j_il2cpp_value_box_0(bool_TypeInfo, v145, v73, v74, v75, v76, v77, v78);
    UICamera__Notify(v82, (System_String_o *)StringLiteral_9914/*"OnHover"*/, v83, v84);
    p_mHover = (CGThumbnailListItem_o *)&UICamera_TypeInfo->static_fields->mHover;
    p_mHover->klass = 0;
    sub_1C36FFC(p_mHover, 0, v86, v87);
  }
  v88 = 0;
  v89 = -1;
  while ( 2 )
  {
    MouseButtonDown = UnityEngine_Input__GetMouseButtonDown(v88, 0);
    MouseButtonUp = UnityEngine_Input__GetMouseButtonUp(v88, 0);
    v94 = UICamera_TypeInfo;
    v95 = MouseButtonUp;
    if ( MouseButtonDown || MouseButtonUp )
    {
      if ( !UICamera_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
        v94 = UICamera_TypeInfo;
      }
      v94->static_fields->currentScheme = 0;
    }
    if ( !v94->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v94);
      v94 = UICamera_TypeInfo;
    }
    v3 = (UICamera_MouseOrTouch_o *)v94->static_fields;
    v96 = v3[3].monitor;
    if ( !v96 )
      goto LABEL_174;
    if ( v88 >= *((unsigned int *)v96 + 6) )
      goto LABEL_175;
    v97 = (struct UnityEngine_GameObject_o *)v96[v88 + 4];
    v3[1].fields.last = v97;
    sub_1C36FFC((CGThumbnailListItem_o *)&v3[1].fields.last, (int32_t)v97, v92, v93);
    v100 = UICamera_TypeInfo;
    v101 = UICamera_TypeInfo->static_fields;
    v101->currentTouchID = v89;
    v101->currentKey = v88 + 323;
    if ( !v100->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v100);
      v101 = UICamera_TypeInfo->static_fields;
    }
    v3 = v101->currentTouch;
    if ( MouseButtonDown )
    {
      if ( !v3 )
        goto LABEL_174;
      currentCamera = v101->currentCamera;
      v3->fields.pressedCam = currentCamera;
      p_pressedCam = (CGThumbnailListItem_o *)&v3->fields.pressedCam;
      goto LABEL_141;
    }
    if ( !v3 )
      goto LABEL_174;
    pressed = (UnityEngine_Object_o *)v3->fields.pressed;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(pressed, 0, 0) )
    {
      v105 = UICamera_TypeInfo;
      if ( !UICamera_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
        v105 = UICamera_TypeInfo;
      }
      v3 = (UICamera_MouseOrTouch_o *)v105->static_fields;
      last = v3[1].fields.last;
      if ( !last )
        goto LABEL_174;
      currentCamera = (struct UnityEngine_Camera_o *)last[2].klass;
      v3[1].fields.delta = (struct UnityEngine_Vector2_o)currentCamera;
      p_pressedCam = (CGThumbnailListItem_o *)&v3[1].fields.delta;
LABEL_141:
      sub_1C36FFC(p_pressedCam, (int32_t)currentCamera, v98, v99);
    }
    UICamera__ProcessTouch(this, MouseButtonDown, v95, v99);
    v109 = UICamera_TypeInfo;
    if ( !UICamera_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
      v109 = UICamera_TypeInfo;
    }
    v110 = v109->static_fields;
    ++v88;
    --v89;
    v110->currentKey = 0;
    if ( v88 != 3 )
      continue;
    break;
  }
  if ( (v56 & v62 & 1) == 0 )
    goto LABEL_160;
  if ( !v109->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v109);
    v110 = UICamera_TypeInfo->static_fields;
  }
  v110->currentScheme = 0;
  this->fields.mTooltipTime = RealTime__get_time(0) + this->fields.tooltipDelay;
  v113 = UICamera_TypeInfo->static_fields;
  mMouse = v113->mMouse;
  if ( !mMouse )
    goto LABEL_174;
  if ( !LODWORD(mMouse->max_length) )
    goto LABEL_175;
  v115 = mMouse->m_Items[0];
  if ( !v115 )
    goto LABEL_174;
  current = v115->fields.current;
  v113->mHover = current;
  sub_1C36FFC((CGThumbnailListItem_o *)&v113->mHover, (int32_t)current, v111, v112);
  v3 = (UICamera_MouseOrTouch_o *)UICamera_TypeInfo->static_fields;
  v119 = v3[3].monitor;
  if ( !v119 )
    goto LABEL_174;
  if ( !*((_DWORD *)v119 + 6) )
    goto LABEL_175;
  v120 = (struct UnityEngine_GameObject_o *)*((_QWORD *)v119 + 4);
  v3[1].fields.last = v120;
  sub_1C36FFC((CGThumbnailListItem_o *)&v3[1].fields.last, (int32_t)v120, v117, v118);
  v127 = UICamera_TypeInfo;
  v128 = UICamera_TypeInfo->static_fields;
  v129 = v128->onHover;
  v128->currentTouchID = -1;
  if ( !v129 )
    goto LABEL_157;
  if ( !v127->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v127);
    v128 = UICamera_TypeInfo->static_fields;
    v129 = v128->onHover;
    if ( !v129 )
      goto LABEL_174;
  }
  ((void (__fastcall *)(intptr_t, struct UnityEngine_GameObject_o *, __int64, intptr_t))v129->fields.invoke_impl)(
    v129->fields.method_code,
    v128->mHover,
    1,
    v129->fields.method);
  v127 = UICamera_TypeInfo;
LABEL_157:
  if ( !v127->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v127);
    v127 = UICamera_TypeInfo;
  }
  v130 = v127->static_fields->mHover;
  v144[0] = 1;
  v131 = (Il2CppObject *)j_il2cpp_value_box_0(bool_TypeInfo, v144, v121, v122, v123, v124, v125, v126);
  UICamera__Notify(v130, (System_String_o *)StringLiteral_9914/*"OnHover"*/, v131, v132);
  v109 = UICamera_TypeInfo;
LABEL_160:
  if ( !v109->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v109);
    v109 = UICamera_TypeInfo;
  }
  v133 = v109->static_fields;
  v133->currentTouch = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)&v133->currentTouch, 0, v107, v108);
  v136 = UICamera_TypeInfo->static_fields->mMouse;
  if ( !v136 )
    goto LABEL_174;
  if ( !LODWORD(v136->max_length) )
LABEL_175:
    sub_1C372BC(v3);
  v3 = v136->m_Items[0];
  if ( !v3 )
    goto LABEL_174;
  v137 = v3->fields.current;
  v3->fields.last = v137;
  sub_1C36FFC((CGThumbnailListItem_o *)&v3->fields.last, (int32_t)v137, v134, v135);
  v140 = 5;
  do
  {
    v3 = (UICamera_MouseOrTouch_o *)UICamera_TypeInfo;
    if ( !UICamera_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
      v3 = (UICamera_MouseOrTouch_o *)UICamera_TypeInfo;
    }
    v141 = v3[1].fields.dragged[13].monitor;
    if ( !v141 )
      goto LABEL_174;
    if ( (unsigned int)(v140 - 4) >= v141[6] )
      goto LABEL_175;
    v142 = *((_QWORD *)v141 + 4);
    if ( !v142 )
      goto LABEL_174;
    v3 = *(UICamera_MouseOrTouch_o **)&v141[2 * v140];
    if ( !v3 )
      goto LABEL_174;
    v143 = *(struct UnityEngine_GameObject_o **)(v142 + 56);
    v3->fields.last = v143;
    sub_1C36FFC((CGThumbnailListItem_o *)&v3->fields.last, (int32_t)v143, v138, v139);
    ++v140;
  }
  while ( (_DWORD)v140 != 7 );
}


void UICamera__ProcessOthers(UICamera_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  UICamera_c *v5; // x0
  struct UICamera_StaticFields *static_fields; // x0
  struct UICamera_MouseOrTouch_o *controller; // x1
  const MethodInfo *v8; // x2
  const MethodInfo *v9; // x3
  const MethodInfo *v10; // x4
  __int64 v11; // x5
  __int64 v12; // x6
  __int64 v13; // x7
  char *currentTouch; // x0
  __int64 v15; // x8
  UICamera_c *v16; // x0
  int32_t submitKey0; // w20
  _BOOL4 v18; // w20
  __int64 v19; // x8
  UICamera_c *v20; // x0
  int32_t submitKey1; // w20
  __int64 v22; // x8
  UICamera_c *v23; // x0
  int32_t v24; // w21
  int32_t v25; // w21
  __int64 v26; // x8
  UICamera_c *v27; // x0
  struct UICamera_StaticFields *v28; // x8
  __int64 v29; // x1
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  struct UICamera_StaticFields *v32; // x8
  struct UnityEngine_GameObject_o *mCurrentSelection; // x1
  const MethodInfo *v34; // x3
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  int32_t Direction_49074356; // w21
  const MethodInfo *v38; // x2
  int32_t Direction; // w0
  int v40; // w20
  _BOOL4 inputHasFocus; // w20
  const MethodInfo *v42; // x4
  const MethodInfo *v43; // x1
  System_String_o *verticalAxisName; // x22
  const MethodInfo *v45; // x1
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

  if ( (byte_4C474E3 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_KeyCode_TypeInfo);
    sub_1C37058(&UICamera_TypeInfo);
    sub_1C37058(&StringLiteral_9919/*"OnKey"*/);
    byte_4C474E3 = 1;
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
  sub_1C36FFC((CGThumbnailListItem_o *)static_fields, (int32_t)controller, v2, v3);
  if ( !this->fields.submitKey0 )
    goto LABEL_13;
  currentTouch = (char *)UICamera_TypeInfo;
  if ( !UICamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    currentTouch = (char *)UICamera_TypeInfo;
  }
  v15 = *(_QWORD *)(*((_QWORD *)currentTouch + 23) + 8LL);
  if ( !v15 )
    goto LABEL_142;
  if ( ((*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(v15 + 24))(
          *(_QWORD *)(v15 + 64),
          (unsigned int)this->fields.submitKey0,
          *(_QWORD *)(v15 + 40))
      & 1) != 0 )
  {
    v16 = UICamera_TypeInfo;
    submitKey0 = this->fields.submitKey0;
    if ( !UICamera_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
      v16 = UICamera_TypeInfo;
    }
    v16->static_fields->currentKey = submitKey0;
    v18 = 1;
  }
  else
  {
LABEL_13:
    v18 = 0;
  }
  if ( this->fields.submitKey1 )
  {
    currentTouch = (char *)UICamera_TypeInfo;
    if ( !UICamera_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
      currentTouch = (char *)UICamera_TypeInfo;
    }
    v19 = *(_QWORD *)(*((_QWORD *)currentTouch + 23) + 8LL);
    if ( !v19 )
      goto LABEL_142;
    if ( ((*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(v19 + 24))(
            *(_QWORD *)(v19 + 64),
            (unsigned int)this->fields.submitKey1,
            *(_QWORD *)(v19 + 40))
        & 1) != 0 )
    {
      v20 = UICamera_TypeInfo;
      submitKey1 = this->fields.submitKey1;
      if ( !UICamera_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
        v20 = UICamera_TypeInfo;
      }
      v20->static_fields->currentKey = submitKey1;
      v18 = 1;
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
  v22 = *(_QWORD *)(*((_QWORD *)currentTouch + 23) + 16LL);
  if ( !v22 )
    goto LABEL_142;
  if ( ((*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(v22 + 24))(
          *(_QWORD *)(v22 + 64),
          (unsigned int)this->fields.submitKey0,
          *(_QWORD *)(v22 + 40))
      & 1) != 0 )
  {
    v23 = UICamera_TypeInfo;
    v24 = this->fields.submitKey0;
    if ( !UICamera_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
      v23 = UICamera_TypeInfo;
    }
    v23->static_fields->currentKey = v24;
    v25 = 1;
  }
  else
  {
LABEL_30:
    v25 = 0;
  }
  if ( !this->fields.submitKey1 )
    goto LABEL_39;
  currentTouch = (char *)UICamera_TypeInfo;
  if ( !UICamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    currentTouch = (char *)UICamera_TypeInfo;
  }
  v26 = *(_QWORD *)(*((_QWORD *)currentTouch + 23) + 16LL);
  if ( !v26 )
    goto LABEL_142;
  if ( ((*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(v26 + 24))(
          *(_QWORD *)(v26 + 64),
          (unsigned int)this->fields.submitKey1,
          *(_QWORD *)(v26 + 40))
      & 1) != 0 )
  {
    v27 = UICamera_TypeInfo;
    v25 = this->fields.submitKey1;
    if ( !UICamera_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
      v27 = UICamera_TypeInfo;
    }
    v27->static_fields->currentKey = v25;
    LOBYTE(v25) = 1;
  }
  else
  {
LABEL_39:
    if ( (v18 | v25) != 1 )
      goto LABEL_47;
    v27 = UICamera_TypeInfo;
  }
  if ( !v27->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v27);
    v27 = UICamera_TypeInfo;
  }
  v28 = v27->static_fields;
  currentTouch = (char *)v28->currentTouch;
  v28->currentScheme = 2;
  if ( !currentTouch )
    goto LABEL_142;
  v29 = *((_QWORD *)currentTouch + 8);
  *((_QWORD *)currentTouch + 7) = v29;
  sub_1C36FFC((CGThumbnailListItem_o *)(currentTouch + 56), v29, (int32_t)v8, v9);
  v32 = UICamera_TypeInfo->static_fields;
  currentTouch = (char *)v32->currentTouch;
  if ( !currentTouch )
    goto LABEL_142;
  mCurrentSelection = v32->mCurrentSelection;
  *((_QWORD *)currentTouch + 8) = mCurrentSelection;
  sub_1C36FFC((CGThumbnailListItem_o *)(currentTouch + 64), (int32_t)mCurrentSelection, v30, v31);
  UICamera__ProcessTouch(this, v18, v25, v34);
  currentTouch = (char *)UICamera_TypeInfo->static_fields->currentTouch;
  if ( !currentTouch )
    goto LABEL_142;
  *((_QWORD *)currentTouch + 7) = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)(currentTouch + 56), 0, v35, v36);
LABEL_47:
  if ( !this->fields.useKeyboard )
  {
    v40 = 0;
    Direction_49074356 = 0;
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
    Direction_49074356 = UICamera__GetDirection_49074356(119, 273, 115, 274, v10);
    Direction = UICamera__GetDirection_49074356(100, 275, 97, 276, v42);
    goto LABEL_55;
  }
  if ( !UICamera_TypeInfo->static_fields->inputHasFocus )
    goto LABEL_54;
LABEL_50:
  Direction_49074356 = UICamera__GetDirection(273, 274, v8);
  Direction = UICamera__GetDirection(275, 276, v38);
LABEL_55:
  v40 = Direction;
LABEL_56:
  if ( this->fields.useController )
  {
    if ( !System_String__IsNullOrEmpty(this->fields.verticalAxisName, 0) )
    {
      verticalAxisName = this->fields.verticalAxisName;
      if ( !UICamera_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
      Direction_49074356 += UICamera__GetDirection_49074692(verticalAxisName, v43);
    }
    if ( !System_String__IsNullOrEmpty(this->fields.horizontalAxisName, 0) )
    {
      horizontalAxisName = this->fields.horizontalAxisName;
      if ( !UICamera_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
      v40 += UICamera__GetDirection_49074692(horizontalAxisName, v45);
    }
  }
  if ( Direction_49074356 )
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
    if ( Direction_49074356 > 0 )
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
    v53 = (Il2CppObject *)j_il2cpp_value_box_0(UnityEngine_KeyCode_TypeInfo, &v100, v8, v9, v10, v11, v12, v13);
    UICamera__Notify(v52, (System_String_o *)StringLiteral_9919/*"OnKey"*/, v53, v54);
  }
  if ( v40 )
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
    if ( v40 > 0 )
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
    v61 = (Il2CppObject *)j_il2cpp_value_box_0(UnityEngine_KeyCode_TypeInfo, &v100, v8, v9, v10, v11, v12, v13);
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
      v72 = (Il2CppObject *)j_il2cpp_value_box_0(UnityEngine_KeyCode_TypeInfo, &v100, v8, v9, v64, v65, v66, v67);
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
      v84 = (Il2CppObject *)j_il2cpp_value_box_0(UnityEngine_KeyCode_TypeInfo, &v100, v8, v9, v75, v76, v77, v78);
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
    sub_1C372B4(currentTouch);
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
  v96 = (Il2CppObject *)j_il2cpp_value_box_0(UnityEngine_KeyCode_TypeInfo, &v100, v8, v9, v87, v88, v89, v90);
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
  sub_1C36FFC((CGThumbnailListItem_o *)&v99->currentTouch, 0, (int32_t)v8, v9);
  UICamera_TypeInfo->static_fields->currentKey = 0;
}


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
  const MethodInfo *v52; // x1
  const MethodInfo *v53; // x2
  __int64 v54; // x8
  __int64 v55; // x8
  UnityEngine_Object_o *v56; // x20
  UICamera_c *v57; // x8
  struct UICamera_MouseOrTouch_o *v58; // x9
  UnityEngine_Object_o *last; // x20
  UnityEngine_Object_o *current; // x21
  float32x2_t *v61; // x9
  struct UICamera_MouseOrTouch_o *v62; // x9
  float v63; // s10
  UnityEngine_Object_o *v64; // x20
  UnityEngine_Object_o *v65; // x21
  const MethodInfo *v66; // x3
  struct UICamera_MouseOrTouch_o *v67; // x9
  struct UnityEngine_Vector2_o v68; // x10
  struct UICamera_StaticFields *static_fields; // x10
  struct UICamera_VoidDelegate_o *onDragStart; // x9
  struct UICamera_MouseOrTouch_o *v71; // x8
  struct UICamera_MouseOrTouch_o *v72; // x8
  const MethodInfo *v73; // x3
  struct UICamera_StaticFields *v74; // x9
  struct UICamera_ObjectDelegate_o *onDragOver; // x8
  struct UICamera_MouseOrTouch_o *v76; // x9
  __int64 v77; // x8
  int v78; // w25
  struct UICamera_MouseOrTouch_o *v79; // x9
  struct UnityEngine_Vector2_o totalDelta; // x10
  struct UICamera_MouseOrTouch_o *v81; // x8
  UnityEngine_Object_o *v82; // x20
  const MethodInfo *v83; // x2
  __int64 v84; // x9
  struct UICamera_MouseOrTouch_o *v85; // x8
  _BOOL4 v86; // w21
  const MethodInfo *v87; // x3
  _BOOL4 v88; // w24
  struct UICamera_StaticFields *v89; // x9
  struct UICamera_VoidDelegate_o *v90; // x8
  struct UICamera_MouseOrTouch_o *v91; // x9
  __int64 v92; // x8
  const MethodInfo *v93; // x3
  struct UICamera_StaticFields *v94; // x9
  struct UICamera_ObjectDelegate_o *v95; // x8
  struct UICamera_MouseOrTouch_o *v96; // x9
  __int64 v97; // x8
  struct UICamera_MouseOrTouch_o *v98; // x8
  UnityEngine_Object_o *v99; // x19
  UnityEngine_Object_o *v100; // x20
  __int64 v101; // x2
  const MethodInfo *v102; // x3
  __int64 v103; // x4
  __int64 v104; // x5
  __int64 v105; // x6
  __int64 v106; // x7
  struct UICamera_StaticFields *v107; // x9
  struct UICamera_VoidDelegate_o *v108; // x8
  struct UICamera_MouseOrTouch_o *v109; // x9
  __int64 v110; // x8
  struct UICamera_StaticFields *v111; // x9
  struct UICamera_ObjectDelegate_o *v112; // x8
  struct UICamera_MouseOrTouch_o *v113; // x9
  struct UICamera_StaticFields *v114; // x9
  struct UICamera_VectorDelegate_o *onDrag; // x8
  struct UICamera_MouseOrTouch_o *v116; // x9
  __int64 v117; // x8
  UnityEngine_GameObject_o *v118; // x19
  Il2CppObject *v119; // x0
  const MethodInfo *v120; // x3
  int32_t v121; // w2
  const MethodInfo *v122; // x3
  __int64 v123; // x1
  struct UICamera_StaticFields *v124; // x8
  struct UICamera_MouseOrTouch_o *v125; // x8
  __int64 v126; // [xsp+8h] [xbp-68h] BYREF
  char v127[4]; // [xsp+18h] [xbp-58h] BYREF
  char v128[4]; // [xsp+1Ch] [xbp-54h] BYREF

  if ( (byte_4C474E4 & 1) == 0 )
  {
    sub_1C37058(&bool_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&UICamera_TypeInfo);
    sub_1C37058(&UnityEngine_Vector2_TypeInfo);
    sub_1C37058(&StringLiteral_9895/*"OnDragStart"*/);
    sub_1C37058(&StringLiteral_9891/*"OnDrag"*/);
    sub_1C37058(&StringLiteral_9945/*"OnPress"*/);
    sub_1C37058(&StringLiteral_9893/*"OnDragOut"*/);
    sub_1C37058(&StringLiteral_9894/*"OnDragOver"*/);
    byte_4C474E4 = 1;
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
        v128[0] = 0;
        v25 = (Il2CppObject *)j_il2cpp_value_box_0(bool_TypeInfo, v128, v10, v11, v12, v13, v14, v15);
        UICamera__Notify(v24, (System_String_o *)StringLiteral_9945/*"OnPress"*/, v25, v26);
        v16 = (__int64)UICamera_TypeInfo->static_fields->currentTouch;
        if ( v16 )
        {
          v29 = *(_QWORD *)(v16 + 64);
          *(_QWORD *)(v16 + 72) = v29;
          sub_1C36FFC((CGThumbnailListItem_o *)(v16 + 72), v29, v27, v28);
          v16 = (__int64)UICamera_TypeInfo->static_fields->currentTouch;
          if ( v16 )
          {
            v32 = *(_QWORD *)(v16 + 64);
            *(_QWORD *)(v16 + 80) = v32;
            sub_1C36FFC((CGThumbnailListItem_o *)(v16 + 80), v32, v30, v31);
            v16 = (__int64)UICamera_TypeInfo;
            v33 = UICamera_TypeInfo->static_fields->currentTouch;
            if ( v33 )
            {
              v33->fields.clickNotification = 2;
              if ( !byte_4C3C81A )
              {
                sub_1C37058(&UnityEngine_Vector2_TypeInfo);
                v16 = (__int64)UICamera_TypeInfo;
                byte_4C3C81A = 1;
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
                    v127[0] = 1;
                    v49 = (Il2CppObject *)j_il2cpp_value_box_0(bool_TypeInfo, v127, v41, v42, v43, v44, v45, v46);
                    UICamera__Notify(v48, (System_String_o *)StringLiteral_9945/*"OnPress"*/, v49, v50);
                    v51 = (UnityEngine_Object_o *)this->fields.mTooltip;
                    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                    if ( UnityEngine_Object__op_Inequality(v51, 0, 0) )
                      UICamera__ShowTooltip(this, 0, v53);
                    v16 = (__int64)UICamera_TypeInfo;
                    if ( !UICamera_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
                      v16 = (__int64)UICamera_TypeInfo;
                    }
                    v54 = *(_QWORD *)(*(_QWORD *)(v16 + 184) + 160LL);
                    if ( v54 )
                    {
                      UICamera__set_selectedObject(*(UnityEngine_GameObject_o **)(v54 + 72), v52);
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
    sub_1C372B4(v16);
  }
  v16 = (__int64)UICamera_TypeInfo;
  if ( !UICamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    v16 = (__int64)UICamera_TypeInfo;
  }
  v55 = *(_QWORD *)(*(_QWORD *)(v16 + 184) + 160LL);
  if ( !v55 )
    goto LABEL_196;
  v56 = *(UnityEngine_Object_o **)(v55 + 72);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v16 = UnityEngine_Object__op_Inequality(v56, 0, 0);
  if ( (v16 & 1) != 0 )
  {
    v57 = UICamera_TypeInfo;
    if ( !UICamera_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
      v57 = UICamera_TypeInfo;
    }
    v58 = v57->static_fields->currentTouch;
    if ( !v58 )
      goto LABEL_196;
    if ( (float)((float)(v58->fields.delta.fields.x * v58->fields.delta.fields.x)
               + (float)(v58->fields.delta.fields.y * v58->fields.delta.fields.y)) == 0.0 )
    {
      if ( !v57->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v57);
        v58 = UICamera_TypeInfo->static_fields->currentTouch;
        if ( !v58 )
          goto LABEL_196;
      }
      last = (UnityEngine_Object_o *)v58->fields.last;
      current = (UnityEngine_Object_o *)v58->fields.current;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v16 = UnityEngine_Object__op_Inequality(current, last, 0);
      if ( (v16 & 1) == 0 )
        return;
      v57 = UICamera_TypeInfo;
    }
    if ( !v57->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v57);
      v57 = UICamera_TypeInfo;
    }
    v61 = (float32x2_t *)v57->static_fields->currentTouch;
    if ( !v61 )
      goto LABEL_196;
    v61[5].n64_u64[0] = vadd_f32(v61[5], v61[4]).n64_u64[0];
    v62 = v57->static_fields->currentTouch;
    if ( !v62 )
      goto LABEL_196;
    v63 = (float)(v62->fields.totalDelta.fields.x * v62->fields.totalDelta.fields.x)
        + (float)(v62->fields.totalDelta.fields.y * v62->fields.totalDelta.fields.y);
    if ( v62->fields.dragStarted )
      goto LABEL_199;
    if ( !v57->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v57);
      v62 = UICamera_TypeInfo->static_fields->currentTouch;
      if ( !v62 )
        goto LABEL_196;
    }
    v65 = (UnityEngine_Object_o *)v62->fields.last;
    v64 = (UnityEngine_Object_o *)v62->fields.current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v16 = UnityEngine_Object__op_Inequality(v65, v64, 0);
    v57 = UICamera_TypeInfo;
    if ( (v16 & 1) == 0 )
    {
LABEL_199:
      if ( !v57->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v57);
        v57 = UICamera_TypeInfo;
      }
      v79 = v57->static_fields->currentTouch;
      if ( !v79 )
        goto LABEL_196;
      v78 = 0;
      if ( v63 > drag && !v79->fields.dragStarted )
      {
        if ( !v57->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v57);
          v57 = UICamera_TypeInfo;
          v79 = UICamera_TypeInfo->static_fields->currentTouch;
          if ( !v79 )
            goto LABEL_196;
        }
        totalDelta = v79->fields.totalDelta;
        v78 = 1;
        v79->fields.dragStarted = 1;
        v79->fields.delta = totalDelta;
      }
    }
    else
    {
      if ( !UICamera_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
        v57 = UICamera_TypeInfo;
      }
      v67 = v57->static_fields->currentTouch;
      if ( !v67 )
        goto LABEL_196;
      v68 = v67->fields.totalDelta;
      v67->fields.dragStarted = 1;
      v67->fields.delta = v68;
      static_fields = v57->static_fields;
      onDragStart = static_fields->onDragStart;
      static_fields->isDragging = 1;
      if ( onDragStart )
      {
        if ( !v57->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v57);
          static_fields = UICamera_TypeInfo->static_fields;
          onDragStart = static_fields->onDragStart;
        }
        v71 = static_fields->currentTouch;
        if ( !v71 || !onDragStart )
          goto LABEL_196;
        v16 = ((__int64 (__fastcall *)(intptr_t, struct UnityEngine_GameObject_o *, intptr_t))onDragStart->fields.invoke_impl)(
                onDragStart->fields.method_code,
                v71->fields.dragged,
                onDragStart->fields.method);
        v57 = UICamera_TypeInfo;
      }
      if ( !v57->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v57);
        v57 = UICamera_TypeInfo;
      }
      v72 = v57->static_fields->currentTouch;
      if ( !v72 )
        goto LABEL_196;
      UICamera__Notify(v72->fields.dragged, (System_String_o *)StringLiteral_9895/*"OnDragStart"*/, 0, v66);
      v16 = (__int64)UICamera_TypeInfo;
      v74 = UICamera_TypeInfo->static_fields;
      onDragOver = v74->onDragOver;
      if ( onDragOver )
      {
        if ( !UICamera_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
          v74 = UICamera_TypeInfo->static_fields;
          onDragOver = v74->onDragOver;
        }
        v76 = v74->currentTouch;
        if ( !v76 || !onDragOver )
          goto LABEL_196;
        ((void (__fastcall *)(intptr_t, struct UnityEngine_GameObject_o *, struct UnityEngine_GameObject_o *, intptr_t))onDragOver->fields.invoke_impl)(
          onDragOver->fields.method_code,
          v76->fields.last,
          v76->fields.dragged,
          onDragOver->fields.method);
        v16 = (__int64)UICamera_TypeInfo;
      }
      if ( !*(_DWORD *)(v16 + 224) )
      {
        j_il2cpp_runtime_class_init_0(v16);
        v16 = (__int64)UICamera_TypeInfo;
      }
      v77 = *(_QWORD *)(*(_QWORD *)(v16 + 184) + 160LL);
      if ( !v77 )
        goto LABEL_196;
      UICamera__Notify(
        *(UnityEngine_GameObject_o **)(v77 + 56),
        (System_String_o *)StringLiteral_9894/*"OnDragOver"*/,
        *(Il2CppObject **)(v77 + 80),
        v73);
      v57 = UICamera_TypeInfo;
      v78 = 0;
      UICamera_TypeInfo->static_fields->isDragging = 0;
    }
    if ( !v57->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v57);
      v57 = UICamera_TypeInfo;
    }
    v81 = v57->static_fields->currentTouch;
    if ( !v81 )
      goto LABEL_196;
    if ( v81->fields.dragStarted )
    {
      v82 = (UnityEngine_Object_o *)this->fields.mTooltip;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v82, 0, 0) )
        UICamera__ShowTooltip(this, 0, v83);
      v16 = (__int64)UICamera_TypeInfo;
      if ( !UICamera_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
        v16 = (__int64)UICamera_TypeInfo;
      }
      v84 = *(_QWORD *)(v16 + 184);
      v85 = *(struct UICamera_MouseOrTouch_o **)(v84 + 160);
      *(_BYTE *)(v84 + 368) = 1;
      if ( !v85 )
        goto LABEL_196;
      v86 = v85->fields.clickNotification == 0;
      if ( !*(_DWORD *)(v16 + 224) )
      {
        j_il2cpp_runtime_class_init_0(v16);
        v85 = UICamera_TypeInfo->static_fields->currentTouch;
        if ( !v85 )
          goto LABEL_196;
      }
      NguiTouchEffectManager__Drag(v85->fields.delta, (const MethodInfo *)v16);
      v16 = (__int64)UICamera_TypeInfo;
      if ( v78 )
        v88 = 0;
      else
        v88 = v86;
      if ( !UICamera_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
        v16 = (__int64)UICamera_TypeInfo;
      }
      v89 = *(struct UICamera_StaticFields **)(v16 + 184);
      if ( v78 )
      {
        v90 = v89->onDragStart;
        if ( v90 )
        {
          if ( !*(_DWORD *)(v16 + 224) )
          {
            j_il2cpp_runtime_class_init_0(v16);
            v89 = UICamera_TypeInfo->static_fields;
            v90 = v89->onDragStart;
          }
          v91 = v89->currentTouch;
          if ( !v91 || !v90 )
            goto LABEL_196;
          ((void (__fastcall *)(intptr_t, struct UnityEngine_GameObject_o *, intptr_t))v90->fields.invoke_impl)(
            v90->fields.method_code,
            v91->fields.dragged,
            v90->fields.method);
          v16 = (__int64)UICamera_TypeInfo;
        }
        if ( !*(_DWORD *)(v16 + 224) )
        {
          j_il2cpp_runtime_class_init_0(v16);
          v16 = (__int64)UICamera_TypeInfo;
        }
        v92 = *(_QWORD *)(*(_QWORD *)(v16 + 184) + 160LL);
        if ( !v92 )
          goto LABEL_196;
        UICamera__Notify(*(UnityEngine_GameObject_o **)(v92 + 80), (System_String_o *)StringLiteral_9895/*"OnDragStart"*/, 0, v87);
        v16 = (__int64)UICamera_TypeInfo;
        v94 = UICamera_TypeInfo->static_fields;
        v95 = v94->onDragOver;
        if ( v95 )
        {
          if ( !UICamera_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
            v94 = UICamera_TypeInfo->static_fields;
            v95 = v94->onDragOver;
          }
          v96 = v94->currentTouch;
          if ( !v96 || !v95 )
            goto LABEL_196;
          ((void (__fastcall *)(intptr_t, struct UnityEngine_GameObject_o *, struct UnityEngine_GameObject_o *, intptr_t))v95->fields.invoke_impl)(
            v95->fields.method_code,
            v96->fields.last,
            v96->fields.dragged,
            v95->fields.method);
          v16 = (__int64)UICamera_TypeInfo;
        }
        if ( !*(_DWORD *)(v16 + 224) )
        {
          j_il2cpp_runtime_class_init_0(v16);
          v16 = (__int64)UICamera_TypeInfo;
        }
        v97 = *(_QWORD *)(*(_QWORD *)(v16 + 184) + 160LL);
        if ( !v97 )
          goto LABEL_196;
      }
      else
      {
        v98 = v89->currentTouch;
        if ( !v98 )
          goto LABEL_196;
        v100 = (UnityEngine_Object_o *)v98->fields.last;
        v99 = (UnityEngine_Object_o *)v98->fields.current;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( !UnityEngine_Object__op_Inequality(v100, v99, 0) )
          goto LABEL_174;
        v16 = (__int64)UICamera_TypeInfo;
        if ( !UICamera_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
          v16 = (__int64)UICamera_TypeInfo;
        }
        v107 = *(struct UICamera_StaticFields **)(v16 + 184);
        v108 = v107->onDragStart;
        if ( v108 )
        {
          if ( !*(_DWORD *)(v16 + 224) )
          {
            j_il2cpp_runtime_class_init_0(v16);
            v107 = UICamera_TypeInfo->static_fields;
            v108 = v107->onDragStart;
          }
          v109 = v107->currentTouch;
          if ( !v109 || !v108 )
            goto LABEL_196;
          ((void (__fastcall *)(intptr_t, struct UnityEngine_GameObject_o *, intptr_t))v108->fields.invoke_impl)(
            v108->fields.method_code,
            v109->fields.dragged,
            v108->fields.method);
          v16 = (__int64)UICamera_TypeInfo;
        }
        if ( !*(_DWORD *)(v16 + 224) )
        {
          j_il2cpp_runtime_class_init_0(v16);
          v16 = (__int64)UICamera_TypeInfo;
        }
        v110 = *(_QWORD *)(*(_QWORD *)(v16 + 184) + 160LL);
        if ( !v110 )
          goto LABEL_196;
        UICamera__Notify(
          *(UnityEngine_GameObject_o **)(v110 + 56),
          (System_String_o *)StringLiteral_9893/*"OnDragOut"*/,
          *(Il2CppObject **)(v110 + 80),
          v102);
        v16 = (__int64)UICamera_TypeInfo;
        v111 = UICamera_TypeInfo->static_fields;
        v112 = v111->onDragOver;
        if ( v112 )
        {
          if ( !UICamera_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
            v111 = UICamera_TypeInfo->static_fields;
            v112 = v111->onDragOver;
          }
          v113 = v111->currentTouch;
          if ( !v113 || !v112 )
            goto LABEL_196;
          ((void (__fastcall *)(intptr_t, struct UnityEngine_GameObject_o *, struct UnityEngine_GameObject_o *, intptr_t))v112->fields.invoke_impl)(
            v112->fields.method_code,
            v113->fields.last,
            v113->fields.dragged,
            v112->fields.method);
          v16 = (__int64)UICamera_TypeInfo;
        }
        if ( !*(_DWORD *)(v16 + 224) )
        {
          j_il2cpp_runtime_class_init_0(v16);
          v16 = (__int64)UICamera_TypeInfo;
        }
        v97 = *(_QWORD *)(*(_QWORD *)(v16 + 184) + 160LL);
        if ( !v97 )
          goto LABEL_196;
        v86 = v88;
      }
      UICamera__Notify(
        *(UnityEngine_GameObject_o **)(v97 + 64),
        (System_String_o *)StringLiteral_9894/*"OnDragOver"*/,
        *(Il2CppObject **)(v97 + 80),
        v93);
LABEL_174:
      v16 = (__int64)UICamera_TypeInfo;
      if ( !UICamera_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
        v16 = (__int64)UICamera_TypeInfo;
      }
      v114 = *(struct UICamera_StaticFields **)(v16 + 184);
      onDrag = v114->onDrag;
      if ( onDrag )
      {
        if ( !*(_DWORD *)(v16 + 224) )
        {
          j_il2cpp_runtime_class_init_0(v16);
          v114 = UICamera_TypeInfo->static_fields;
          onDrag = v114->onDrag;
        }
        v116 = v114->currentTouch;
        if ( !v116 || !onDrag )
          goto LABEL_196;
        ((void (__fastcall *)(intptr_t, struct UnityEngine_GameObject_o *, intptr_t, float, float))onDrag->fields.invoke_impl)(
          onDrag->fields.method_code,
          v116->fields.dragged,
          onDrag->fields.method,
          v116->fields.delta.fields.x,
          v116->fields.delta.fields.y);
        v16 = (__int64)UICamera_TypeInfo;
      }
      if ( !*(_DWORD *)(v16 + 224) )
      {
        j_il2cpp_runtime_class_init_0(v16);
        v16 = (__int64)UICamera_TypeInfo;
      }
      v117 = *(_QWORD *)(*(_QWORD *)(v16 + 184) + 160LL);
      if ( !v117 )
        goto LABEL_196;
      v118 = *(UnityEngine_GameObject_o **)(v117 + 80);
      v126 = *(_QWORD *)(v117 + 32);
      v119 = (Il2CppObject *)j_il2cpp_value_box_0(
                               UnityEngine_Vector2_TypeInfo,
                               &v126,
                               v101,
                               v102,
                               v103,
                               v104,
                               v105,
                               v106);
      UICamera__Notify(v118, (System_String_o *)StringLiteral_9891/*"OnDrag"*/, v119, v120);
      v16 = (__int64)UICamera_TypeInfo->static_fields->currentTouch;
      if ( !v16 )
        goto LABEL_196;
      v123 = *(_QWORD *)(v16 + 64);
      *(_QWORD *)(v16 + 56) = v123;
      sub_1C36FFC((CGThumbnailListItem_o *)(v16 + 56), v123, v121, v122);
      v16 = (__int64)UICamera_TypeInfo;
      v124 = UICamera_TypeInfo->static_fields;
      v124->isDragging = 0;
      if ( !*(_DWORD *)(v16 + 224) )
      {
        j_il2cpp_runtime_class_init_0(v16);
        v16 = (__int64)UICamera_TypeInfo;
        v124 = UICamera_TypeInfo->static_fields;
      }
      v125 = v124->currentTouch;
      if ( !v125 )
        goto LABEL_196;
      if ( v86 )
        goto LABEL_190;
      if ( v63 > click && v125->fields.clickNotification == 2 )
      {
        if ( !*(_DWORD *)(v16 + 224) )
        {
          j_il2cpp_runtime_class_init_0(v16);
          v125 = UICamera_TypeInfo->static_fields->currentTouch;
          if ( !v125 )
            goto LABEL_196;
        }
LABEL_190:
        v125->fields.clickNotification = 0;
      }
    }
  }
}


void UICamera__ProcessRelease(UICamera_o *this, bool isMouse, float drag, const MethodInfo *method)
{
  const MethodInfo *v7; // x0
  __int64 v8; // x0
  __int64 v9; // x8
  UnityEngine_Object_o *mTooltip; // x21
  const MethodInfo *v11; // x2
  __int64 v12; // x8
  UnityEngine_Object_o *v13; // x20
  __int64 v14; // x2
  const MethodInfo *v15; // x3
  __int64 v16; // x4
  __int64 v17; // x5
  __int64 v18; // x6
  __int64 v19; // x7
  struct UICamera_StaticFields *static_fields; // x8
  struct UICamera_MouseOrTouch_o *currentTouch; // x9
  struct UICamera_ObjectDelegate_o *onDragOut; // x9
  struct UICamera_MouseOrTouch_o *v23; // x8
  __int64 v24; // x8
  const MethodInfo *v25; // x3
  struct UICamera_StaticFields *v26; // x9
  struct UICamera_VoidDelegate_o *onDragEnd; // x8
  struct UICamera_MouseOrTouch_o *v28; // x9
  __int64 v29; // x8
  struct UICamera_StaticFields *v30; // x9
  struct UICamera_BoolDelegate_o *onPress; // x8
  struct UICamera_MouseOrTouch_o *v32; // x9
  __int64 v33; // x8
  UnityEngine_GameObject_o *v34; // x20
  Il2CppObject *v35; // x0
  const MethodInfo *v36; // x3
  __int64 v37; // x2
  const MethodInfo *v38; // x3
  __int64 v39; // x4
  __int64 v40; // x5
  __int64 v41; // x6
  __int64 v42; // x7
  struct UICamera_StaticFields *v43; // x9
  struct UICamera_BoolDelegate_o *onHover; // x8
  struct UICamera_MouseOrTouch_o *v45; // x9
  __int64 v46; // x8
  UnityEngine_GameObject_o *v47; // x19
  Il2CppObject *v48; // x0
  const MethodInfo *v49; // x3
  __int64 v50; // x8
  __int64 v51; // x9
  __int64 v52; // x1
  struct UICamera_MouseOrTouch_o *v53; // x8
  UnityEngine_Object_o *dragged; // x19
  UnityEngine_Object_o *current; // x20
  UICamera_c *v56; // x8
  struct UICamera_MouseOrTouch_o *v57; // x9
  UnityEngine_Object_o *v58; // x19
  UnityEngine_Object_o *pressed; // x20
  const MethodInfo *v60; // x3
  float time; // s0
  float v62; // s8
  struct UICamera_StaticFields *v63; // x9
  struct UICamera_VoidDelegate_o *onClick; // x8
  struct UICamera_MouseOrTouch_o *v65; // x9
  __int64 v66; // x8
  struct UICamera_StaticFields *v67; // x8
  struct UICamera_MouseOrTouch_o *v68; // x9
  struct UICamera_VoidDelegate_o *onDoubleClick; // x9
  struct UICamera_MouseOrTouch_o *v70; // x8
  __int64 v71; // x8
  __int64 v72; // x8
  struct UICamera_StaticFields *v73; // x9
  struct UICamera_MouseOrTouch_o *v74; // x9
  struct UICamera_StaticFields *v75; // x9
  struct UICamera_MouseOrTouch_o *v76; // x10
  struct UICamera_ObjectDelegate_o *onDrop; // x10
  struct UICamera_MouseOrTouch_o *v78; // x8
  struct UICamera_MouseOrTouch_o *v79; // x8
  UICamera_c *v80; // x0
  __int64 v81; // x0
  int32_t v82; // w2
  const MethodInfo *v83; // x3
  char v84[4]; // [xsp+8h] [xbp-38h] BYREF
  _BYTE v85[4]; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C474E5 & 1) == 0 )
  {
    sub_1C37058(&bool_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&UICamera_TypeInfo);
    sub_1C37058(&StringLiteral_9892/*"OnDragEnd"*/);
    sub_1C37058(&StringLiteral_9838/*"OnClick"*/);
    sub_1C37058(&StringLiteral_9889/*"OnDoubleClick"*/);
    sub_1C37058(&StringLiteral_9896/*"OnDrop"*/);
    sub_1C37058(&StringLiteral_9914/*"OnHover"*/);
    sub_1C37058(&StringLiteral_9945/*"OnPress"*/);
    sub_1C37058(&StringLiteral_9893/*"OnDragOut"*/);
    byte_4C474E5 = 1;
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
    v8 = (__int64)UICamera_TypeInfo;
    if ( !UICamera_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
      v8 = (__int64)UICamera_TypeInfo;
    }
    v9 = *(_QWORD *)(*(_QWORD *)(v8 + 184) + 160LL);
    if ( v9 )
    {
      *(_BYTE *)(v9 + 101) = 0;
      mTooltip = (UnityEngine_Object_o *)this->fields.mTooltip;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(mTooltip, 0, 0) )
        UICamera__ShowTooltip(this, 0, v11);
      v8 = (__int64)UICamera_TypeInfo;
      if ( !UICamera_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
        v8 = (__int64)UICamera_TypeInfo;
      }
      v12 = *(_QWORD *)(*(_QWORD *)(v8 + 184) + 160LL);
      if ( v12 )
      {
        v13 = *(UnityEngine_Object_o **)(v12 + 72);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(v13, 0, 0) )
        {
          v8 = (__int64)UICamera_TypeInfo;
          if ( !UICamera_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
            v8 = (__int64)UICamera_TypeInfo;
          }
          static_fields = *(struct UICamera_StaticFields **)(v8 + 184);
          currentTouch = static_fields->currentTouch;
          if ( !currentTouch )
            goto LABEL_145;
          if ( currentTouch->fields.dragStarted )
          {
            if ( !*(_DWORD *)(v8 + 224) )
            {
              j_il2cpp_runtime_class_init_0(v8);
              v8 = (__int64)UICamera_TypeInfo;
              static_fields = UICamera_TypeInfo->static_fields;
            }
            onDragOut = static_fields->onDragOut;
            if ( onDragOut )
            {
              if ( !*(_DWORD *)(v8 + 224) )
              {
                j_il2cpp_runtime_class_init_0(v8);
                static_fields = UICamera_TypeInfo->static_fields;
                onDragOut = static_fields->onDragOut;
              }
              v23 = static_fields->currentTouch;
              if ( !v23 || !onDragOut )
                goto LABEL_145;
              ((void (__fastcall *)(intptr_t, struct UnityEngine_GameObject_o *, struct UnityEngine_GameObject_o *, intptr_t))onDragOut->fields.invoke_impl)(
                onDragOut->fields.method_code,
                v23->fields.last,
                v23->fields.dragged,
                onDragOut->fields.method);
              v8 = (__int64)UICamera_TypeInfo;
            }
            if ( !*(_DWORD *)(v8 + 224) )
            {
              j_il2cpp_runtime_class_init_0(v8);
              v8 = (__int64)UICamera_TypeInfo;
            }
            v24 = *(_QWORD *)(*(_QWORD *)(v8 + 184) + 160LL);
            if ( !v24 )
              goto LABEL_145;
            UICamera__Notify(
              *(UnityEngine_GameObject_o **)(v24 + 56),
              (System_String_o *)StringLiteral_9893/*"OnDragOut"*/,
              *(Il2CppObject **)(v24 + 80),
              v15);
            v8 = (__int64)UICamera_TypeInfo;
            v26 = UICamera_TypeInfo->static_fields;
            onDragEnd = v26->onDragEnd;
            if ( onDragEnd )
            {
              if ( !UICamera_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
                v26 = UICamera_TypeInfo->static_fields;
                onDragEnd = v26->onDragEnd;
              }
              v28 = v26->currentTouch;
              if ( !v28 || !onDragEnd )
                goto LABEL_145;
              ((void (__fastcall *)(intptr_t, struct UnityEngine_GameObject_o *, intptr_t))onDragEnd->fields.invoke_impl)(
                onDragEnd->fields.method_code,
                v28->fields.dragged,
                onDragEnd->fields.method);
              v8 = (__int64)UICamera_TypeInfo;
            }
            if ( !*(_DWORD *)(v8 + 224) )
            {
              j_il2cpp_runtime_class_init_0(v8);
              v8 = (__int64)UICamera_TypeInfo;
            }
            v29 = *(_QWORD *)(*(_QWORD *)(v8 + 184) + 160LL);
            if ( !v29 )
              goto LABEL_145;
            UICamera__Notify(*(UnityEngine_GameObject_o **)(v29 + 80), (System_String_o *)StringLiteral_9892/*"OnDragEnd"*/, 0, v25);
            v8 = (__int64)UICamera_TypeInfo;
          }
          if ( !*(_DWORD *)(v8 + 224) )
          {
            j_il2cpp_runtime_class_init_0(v8);
            v8 = (__int64)UICamera_TypeInfo;
          }
          v30 = *(struct UICamera_StaticFields **)(v8 + 184);
          onPress = v30->onPress;
          if ( onPress )
          {
            if ( !*(_DWORD *)(v8 + 224) )
            {
              j_il2cpp_runtime_class_init_0(v8);
              v30 = UICamera_TypeInfo->static_fields;
              onPress = v30->onPress;
            }
            v32 = v30->currentTouch;
            if ( !v32 || !onPress )
              goto LABEL_145;
            ((void (__fastcall *)(intptr_t, struct UnityEngine_GameObject_o *, _QWORD, intptr_t))onPress->fields.invoke_impl)(
              onPress->fields.method_code,
              v32->fields.pressed,
              0,
              onPress->fields.method);
            v8 = (__int64)UICamera_TypeInfo;
          }
          if ( !*(_DWORD *)(v8 + 224) )
          {
            j_il2cpp_runtime_class_init_0(v8);
            v8 = (__int64)UICamera_TypeInfo;
          }
          v33 = *(_QWORD *)(*(_QWORD *)(v8 + 184) + 160LL);
          if ( !v33 )
            goto LABEL_145;
          v34 = *(UnityEngine_GameObject_o **)(v33 + 72);
          v85[0] = 0;
          v35 = (Il2CppObject *)j_il2cpp_value_box_0(bool_TypeInfo, v85, v14, v15, v16, v17, v18, v19);
          UICamera__Notify(v34, (System_String_o *)StringLiteral_9945/*"OnPress"*/, v35, v36);
          if ( isMouse )
          {
            v8 = (__int64)UICamera_TypeInfo;
            if ( !UICamera_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
              v8 = (__int64)UICamera_TypeInfo;
            }
            v43 = *(struct UICamera_StaticFields **)(v8 + 184);
            onHover = v43->onHover;
            if ( onHover )
            {
              if ( !*(_DWORD *)(v8 + 224) )
              {
                j_il2cpp_runtime_class_init_0(v8);
                v43 = UICamera_TypeInfo->static_fields;
                onHover = v43->onHover;
              }
              v45 = v43->currentTouch;
              if ( !v45 || !onHover )
                goto LABEL_145;
              ((void (__fastcall *)(intptr_t, struct UnityEngine_GameObject_o *, __int64, intptr_t))onHover->fields.invoke_impl)(
                onHover->fields.method_code,
                v45->fields.current,
                1,
                onHover->fields.method);
              v8 = (__int64)UICamera_TypeInfo;
            }
            if ( !*(_DWORD *)(v8 + 224) )
            {
              j_il2cpp_runtime_class_init_0(v8);
              v8 = (__int64)UICamera_TypeInfo;
            }
            v46 = *(_QWORD *)(*(_QWORD *)(v8 + 184) + 160LL);
            if ( !v46 )
              goto LABEL_145;
            v47 = *(UnityEngine_GameObject_o **)(v46 + 64);
            v84[0] = 1;
            v48 = (Il2CppObject *)j_il2cpp_value_box_0(bool_TypeInfo, v84, v37, v38, v39, v40, v41, v42);
            UICamera__Notify(v47, (System_String_o *)StringLiteral_9914/*"OnHover"*/, v48, v49);
          }
          v8 = (__int64)UICamera_TypeInfo;
          if ( !UICamera_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
            v8 = (__int64)UICamera_TypeInfo;
          }
          v50 = *(_QWORD *)(v8 + 184);
          v51 = *(_QWORD *)(v50 + 160);
          if ( !v51 )
            goto LABEL_145;
          v52 = *(_QWORD *)(v51 + 64);
          *(_QWORD *)(v50 + 328) = v52;
          sub_1C36FFC((CGThumbnailListItem_o *)(v50 + 328), v52, v37, v38);
          v53 = UICamera_TypeInfo->static_fields->currentTouch;
          if ( !v53 )
            goto LABEL_145;
          dragged = (UnityEngine_Object_o *)v53->fields.dragged;
          current = (UnityEngine_Object_o *)v53->fields.current;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          v8 = UnityEngine_Object__op_Equality(dragged, current, 0);
          v56 = UICamera_TypeInfo;
          if ( (v8 & 1) != 0 )
            goto LABEL_148;
          if ( !UICamera_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
            v56 = UICamera_TypeInfo;
          }
          v73 = v56->static_fields;
          if ( v73->currentScheme == 2 )
            goto LABEL_149;
          if ( !v56->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v56);
            v56 = UICamera_TypeInfo;
            v73 = UICamera_TypeInfo->static_fields;
          }
          v74 = v73->currentTouch;
          if ( !v74 )
            goto LABEL_145;
          if ( !v74->fields.clickNotification )
            goto LABEL_149;
          if ( !v56->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v56);
            v56 = UICamera_TypeInfo;
            v74 = UICamera_TypeInfo->static_fields->currentTouch;
            if ( !v74 )
              goto LABEL_145;
          }
          if ( (float)((float)(v74->fields.totalDelta.fields.x * v74->fields.totalDelta.fields.x)
                     + (float)(v74->fields.totalDelta.fields.y * v74->fields.totalDelta.fields.y)) < drag )
          {
LABEL_148:
            if ( !v56->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v56);
              v56 = UICamera_TypeInfo;
            }
            v57 = v56->static_fields->currentTouch;
            if ( !v57 )
              goto LABEL_145;
            if ( v57->fields.clickNotification )
            {
              if ( !v56->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v56);
                v57 = UICamera_TypeInfo->static_fields->currentTouch;
                if ( !v57 )
                  goto LABEL_145;
              }
              v58 = (UnityEngine_Object_o *)v57->fields.current;
              pressed = (UnityEngine_Object_o *)v57->fields.pressed;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( UnityEngine_Object__op_Equality(pressed, v58, 0) )
              {
                time = RealTime__get_time(0);
                v8 = (__int64)UICamera_TypeInfo;
                v62 = time;
                if ( !UICamera_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
                  v8 = (__int64)UICamera_TypeInfo;
                }
                v63 = *(struct UICamera_StaticFields **)(v8 + 184);
                onClick = v63->onClick;
                if ( onClick )
                {
                  if ( !*(_DWORD *)(v8 + 224) )
                  {
                    j_il2cpp_runtime_class_init_0(v8);
                    v63 = UICamera_TypeInfo->static_fields;
                    onClick = v63->onClick;
                  }
                  v65 = v63->currentTouch;
                  if ( !v65 || !onClick )
                    goto LABEL_145;
                  ((void (__fastcall *)(intptr_t, struct UnityEngine_GameObject_o *, intptr_t))onClick->fields.invoke_impl)(
                    onClick->fields.method_code,
                    v65->fields.pressed,
                    onClick->fields.method);
                  v8 = (__int64)UICamera_TypeInfo;
                }
                if ( !*(_DWORD *)(v8 + 224) )
                {
                  j_il2cpp_runtime_class_init_0(v8);
                  v8 = (__int64)UICamera_TypeInfo;
                }
                v66 = *(_QWORD *)(*(_QWORD *)(v8 + 184) + 160LL);
                if ( !v66 )
                  goto LABEL_145;
                UICamera__Notify(
                  *(UnityEngine_GameObject_o **)(v66 + 72),
                  (System_String_o *)StringLiteral_9838/*"OnClick"*/,
                  0,
                  v60);
                v8 = (__int64)UICamera_TypeInfo;
                v67 = UICamera_TypeInfo->static_fields;
                v68 = v67->currentTouch;
                if ( !v68 )
                  goto LABEL_145;
                if ( (float)(v68->fields.clickTime + 0.35) > v62 )
                {
                  if ( !UICamera_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
                    v8 = (__int64)UICamera_TypeInfo;
                    v67 = UICamera_TypeInfo->static_fields;
                  }
                  onDoubleClick = v67->onDoubleClick;
                  if ( onDoubleClick )
                  {
                    if ( !*(_DWORD *)(v8 + 224) )
                    {
                      j_il2cpp_runtime_class_init_0(v8);
                      v67 = UICamera_TypeInfo->static_fields;
                      onDoubleClick = v67->onDoubleClick;
                    }
                    v70 = v67->currentTouch;
                    if ( !v70 || !onDoubleClick )
                      goto LABEL_145;
                    ((void (__fastcall *)(intptr_t, struct UnityEngine_GameObject_o *, intptr_t))onDoubleClick->fields.invoke_impl)(
                      onDoubleClick->fields.method_code,
                      v70->fields.pressed,
                      onDoubleClick->fields.method);
                    v8 = (__int64)UICamera_TypeInfo;
                  }
                  if ( !*(_DWORD *)(v8 + 224) )
                  {
                    j_il2cpp_runtime_class_init_0(v8);
                    v8 = (__int64)UICamera_TypeInfo;
                  }
                  v71 = *(_QWORD *)(*(_QWORD *)(v8 + 184) + 160LL);
                  if ( !v71 )
                    goto LABEL_145;
                  UICamera__Notify(
                    *(UnityEngine_GameObject_o **)(v71 + 72),
                    (System_String_o *)StringLiteral_9889/*"OnDoubleClick"*/,
                    0,
                    v15);
                  v8 = (__int64)UICamera_TypeInfo;
                }
                if ( !*(_DWORD *)(v8 + 224) )
                {
                  j_il2cpp_runtime_class_init_0(v8);
                  v8 = (__int64)UICamera_TypeInfo;
                }
                v72 = *(_QWORD *)(*(_QWORD *)(v8 + 184) + 160LL);
                if ( !v72 )
                  goto LABEL_145;
                *(float *)(v72 + 92) = v62;
              }
            }
          }
          else
          {
LABEL_149:
            if ( !v56->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v56);
              v56 = UICamera_TypeInfo;
            }
            v75 = v56->static_fields;
            v76 = v75->currentTouch;
            if ( !v76 )
              goto LABEL_145;
            if ( v76->fields.dragStarted )
            {
              if ( !v56->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v56);
                v56 = UICamera_TypeInfo;
                v75 = UICamera_TypeInfo->static_fields;
              }
              onDrop = v75->onDrop;
              if ( onDrop )
              {
                if ( !v56->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(v56);
                  v75 = UICamera_TypeInfo->static_fields;
                  onDrop = v75->onDrop;
                }
                v78 = v75->currentTouch;
                if ( !v78 || !onDrop )
                  goto LABEL_145;
                v8 = ((__int64 (__fastcall *)(intptr_t, struct UnityEngine_GameObject_o *, struct UnityEngine_GameObject_o *, intptr_t))onDrop->fields.invoke_impl)(
                       onDrop->fields.method_code,
                       v78->fields.current,
                       v78->fields.dragged,
                       onDrop->fields.method);
                v56 = UICamera_TypeInfo;
              }
              if ( !v56->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v56);
                v56 = UICamera_TypeInfo;
              }
              v79 = v56->static_fields->currentTouch;
              if ( !v79 )
                goto LABEL_145;
              UICamera__Notify(
                v79->fields.current,
                (System_String_o *)StringLiteral_9896/*"OnDrop"*/,
                (Il2CppObject *)v79->fields.dragged,
                v15);
            }
          }
        }
        v80 = UICamera_TypeInfo;
        if ( !UICamera_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
          v80 = UICamera_TypeInfo;
        }
        v8 = (__int64)v80->static_fields->currentTouch;
        if ( v8 )
        {
          *(_QWORD *)(v8 + 72) = 0;
          v81 = v8 + 72;
          *(_BYTE *)(v81 + 30) = 0;
          sub_1C36FFC((CGThumbnailListItem_o *)v81, 0, v14, v15);
          v8 = (__int64)UICamera_TypeInfo->static_fields->currentTouch;
          if ( v8 )
          {
            *(_QWORD *)(v8 + 80) = 0;
            sub_1C36FFC((CGThumbnailListItem_o *)(v8 + 80), 0, v82, v83);
            return;
          }
        }
      }
    }
LABEL_145:
    sub_1C372B4(v8);
  }
}


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

  if ( (byte_4C474E6 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&UICamera_TypeInfo);
    byte_4C474E6 = 1;
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
    sub_1C372B4(v7);
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
  int32_t touchCount; // w0
  const MethodInfo *v8; // x1
  int32_t v9; // w20
  unsigned int v10; // w21
  UICamera_c *v11; // x0
  struct UICamera_GetTouchCallback_o *GetInputTouch; // x8
  int32_t name_high; // w24
  int32_t name; // w26
  float x; // s8
  float y; // s9
  int32_t data; // w25
  UnityEngine_Vector2_o position; // kr00_8
  CTouch_c *v19; // x0
  UICamera_c *v20; // x0
  UICamera_MouseOrTouch_o *Touch; // x0
  struct UICamera_StaticFields *v22; // x8
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  struct UICamera_MouseOrTouch_o *currentTouch; // x8
  int touchBegan; // w29
  struct UICamera_MouseOrTouch_o *v27; // x26
  struct UnityEngine_Vector2_StaticFields *v28; // x8
  float v29; // s0
  float v30; // s1
  struct UICamera_MouseOrTouch_o *v31; // x8
  struct UICamera_MouseOrTouch_o *v32; // x8
  struct UICamera_MouseOrTouch_o *v33; // x8
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  UICamera_c *v36; // x0
  struct UICamera_StaticFields *v37; // x8
  struct UnityEngine_GameObject_o *fallThrough; // x1
  UICamera_c *v39; // x0
  UnityEngine_Object_o *hoveredObject; // x26
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  UICamera_c *v43; // x0
  struct UICamera_StaticFields *v44; // x8
  struct UnityEngine_GameObject_o *mGenericHandler; // x1
  UICamera_c *v46; // x0
  Il2CppClass *element_class; // x1
  int32_t v48; // w2
  const MethodInfo *v49; // x3
  struct UICamera_StaticFields *v50; // x8
  Il2CppClass *v51; // x1
  int32_t v52; // w2
  const MethodInfo *v53; // x3
  struct UICamera_StaticFields *v54; // x8
  struct UICamera_MouseOrTouch_o *v55; // x9
  struct UICamera_StaticFields *v56; // x8
  struct UnityEngine_Camera_o *currentCamera; // x1
  CGThumbnailListItem_o *p_this_arg; // x0
  UnityEngine_Object_o *castClass; // x26
  UICamera_c *v60; // x0
  Il2CppClass **nestedTypes; // x8
  UICamera_c *v62; // x0
  struct UICamera_MouseOrTouch_o *v63; // x25
  float time; // s0
  unsigned int v65; // w24
  const MethodInfo *v66; // x1
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

  if ( (byte_4C474E1 & 1) == 0 )
  {
    sub_1C37058(&CTouch_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&UICamera_TypeInfo);
    byte_4C474E1 = 1;
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
        sub_1C372B4(ignoreFingerIDList);
    }
    touchCount = ((__int64 (__fastcall *)(intptr_t, intptr_t))GetInputTouchCount->fields.invoke_impl)(
                   GetInputTouchCount->fields.method_code,
                   GetInputTouchCount->fields.method);
  }
  else
  {
    touchCount = UnityEngine_Input__get_touchCount(0);
  }
  v9 = touchCount;
  if ( touchCount >= 1 )
  {
    v10 = 0;
    while ( 1 )
    {
      v11 = UICamera_TypeInfo;
      if ( !UICamera_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
        v11 = UICamera_TypeInfo;
      }
      GetInputTouch = v11->static_fields->GetInputTouch;
      if ( GetInputTouch )
      {
        if ( !v11->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v11);
          GetInputTouch = UICamera_TypeInfo->static_fields->GetInputTouch;
          if ( !GetInputTouch )
            goto LABEL_109;
        }
        ignoreFingerIDList = (UICamera_c *)((__int64 (__fastcall *)(intptr_t, _QWORD, intptr_t))GetInputTouch->fields.invoke_impl)(
                                             GetInputTouch->fields.method_code,
                                             v10,
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
        UnityEngine_Input__GetTouch(&src, v10, 0);
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
      if ( !byte_4C3F891 )
      {
        sub_1C37058(&CTouch_TypeInfo);
        byte_4C3F891 = 1;
      }
      v19 = CTouch_TypeInfo;
      if ( !CTouch_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
        v19 = CTouch_TypeInfo;
      }
      ignoreFingerIDList = (UICamera_c *)v19->static_fields->ignoreFingerIDList;
      if ( !ignoreFingerIDList )
        goto LABEL_109;
      if ( !System_Collections_Generic_List_int___Contains(
              (System_Collections_Generic_List_int__o *)ignoreFingerIDList,
              name,
              (const MethodInfo_3786378 *)Method_System_Collections_Generic_List_int__Contains__) )
        break;
LABEL_97:
      if ( v9 == ++v10 )
        goto LABEL_98;
    }
    v20 = UICamera_TypeInfo;
    if ( !this->fields.allowMultiTouch )
      name = 1;
    if ( !UICamera_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
      v20 = UICamera_TypeInfo;
    }
    v20->static_fields->currentTouchID = name;
    Touch = UICamera__GetTouch(name, v8);
    v22 = UICamera_TypeInfo->static_fields;
    v22->currentTouch = Touch;
    sub_1C36FFC((CGThumbnailListItem_o *)&v22->currentTouch, (int32_t)Touch, v23, v24);
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
    v27 = ignoreFingerIDList->static_fields->currentTouch;
    if ( !v27 )
      goto LABEL_109;
    v27->fields.touchBegan = 0;
    if ( touchBegan )
    {
      if ( !byte_4C3C81A )
      {
        sub_1C37058(&UnityEngine_Vector2_TypeInfo);
        ignoreFingerIDList = UICamera_TypeInfo;
        byte_4C3C81A = 1;
      }
      v28 = UnityEngine_Vector2_TypeInfo->static_fields;
      v29 = v28->zeroVector.fields.x;
      v30 = v28->zeroVector.fields.y;
    }
    else
    {
      if ( ignoreFingerIDList->_2.cctor_finished )
      {
        v31 = v27;
      }
      else
      {
        j_il2cpp_runtime_class_init_0(ignoreFingerIDList);
        ignoreFingerIDList = UICamera_TypeInfo;
        v31 = UICamera_TypeInfo->static_fields->currentTouch;
        if ( !v31 )
          goto LABEL_109;
      }
      v29 = x - v31->fields.pos.fields.x;
      v30 = y - v31->fields.pos.fields.y;
    }
    v27->fields.delta.fields.x = v29;
    v27->fields.delta.fields.y = v30;
    if ( !ignoreFingerIDList->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ignoreFingerIDList);
      ignoreFingerIDList = UICamera_TypeInfo;
    }
    v32 = ignoreFingerIDList->static_fields->currentTouch;
    if ( !v32 )
      goto LABEL_109;
    v32->fields.pos.fields.x = x;
    v32->fields.pos.fields.y = y;
    v33 = ignoreFingerIDList->static_fields->currentTouch;
    if ( !v33 )
      goto LABEL_109;
    v78.fields.x = v33->fields.pos.fields.x;
    v78.fields.y = v33->fields.pos.fields.y;
    v78.fields.z = 0.0;
    if ( !UICamera__Raycast(v78, (const MethodInfo *)ignoreFingerIDList) )
    {
      v36 = UICamera_TypeInfo;
      if ( !UICamera_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
        v36 = UICamera_TypeInfo;
      }
      v37 = v36->static_fields;
      fallThrough = v37->fallThrough;
      v37->hoveredObject = fallThrough;
      sub_1C36FFC((CGThumbnailListItem_o *)&v37->hoveredObject, (int32_t)fallThrough, v34, v35);
    }
    v39 = UICamera_TypeInfo;
    if ( !UICamera_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
      v39 = UICamera_TypeInfo;
    }
    hoveredObject = (UnityEngine_Object_o *)v39->static_fields->hoveredObject;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(hoveredObject, 0, 0) )
    {
      v43 = UICamera_TypeInfo;
      if ( !UICamera_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
        v43 = UICamera_TypeInfo;
      }
      v44 = v43->static_fields;
      mGenericHandler = v44->mGenericHandler;
      v44->hoveredObject = mGenericHandler;
      sub_1C36FFC((CGThumbnailListItem_o *)&v44->hoveredObject, (int32_t)mGenericHandler, v41, v42);
    }
    v46 = UICamera_TypeInfo;
    if ( !UICamera_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
      v46 = UICamera_TypeInfo;
    }
    ignoreFingerIDList = (UICamera_c *)v46->static_fields->currentTouch;
    if ( !ignoreFingerIDList )
      goto LABEL_109;
    element_class = ignoreFingerIDList->_1.element_class;
    *(_QWORD *)&ignoreFingerIDList->_1.this_arg.bits = element_class;
    sub_1C36FFC((CGThumbnailListItem_o *)&ignoreFingerIDList->_1.this_arg.bits, (int32_t)element_class, v41, v42);
    v50 = UICamera_TypeInfo->static_fields;
    ignoreFingerIDList = (UICamera_c *)v50->currentTouch;
    if ( !ignoreFingerIDList )
      goto LABEL_109;
    v51 = (Il2CppClass *)v50->hoveredObject;
    ignoreFingerIDList->_1.element_class = v51;
    sub_1C36FFC((CGThumbnailListItem_o *)&ignoreFingerIDList->_1.element_class, (int32_t)v51, v48, v49);
    ignoreFingerIDList = UICamera_TypeInfo;
    v54 = UICamera_TypeInfo->static_fields;
    v55 = v54->currentTouch;
    if ( !v55 )
      goto LABEL_109;
    v54->lastTouchPosition = v55->fields.pos;
    if ( !ignoreFingerIDList->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ignoreFingerIDList);
      ignoreFingerIDList = UICamera_TypeInfo;
    }
    v56 = ignoreFingerIDList->static_fields;
    ignoreFingerIDList = (UICamera_c *)v56->currentTouch;
    if ( touchBegan )
    {
      if ( !ignoreFingerIDList )
        goto LABEL_109;
      currentCamera = v56->currentCamera;
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
      v60 = UICamera_TypeInfo;
      if ( !UICamera_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
        v60 = UICamera_TypeInfo;
      }
      ignoreFingerIDList = (UICamera_c *)v60->static_fields;
      nestedTypes = ignoreFingerIDList->_1.nestedTypes;
      if ( !nestedTypes )
        goto LABEL_109;
      currentCamera = (struct UnityEngine_Camera_o *)nestedTypes[6];
      ignoreFingerIDList->_1.events = currentCamera;
      p_this_arg = (CGThumbnailListItem_o *)&ignoreFingerIDList->_1.events;
    }
    sub_1C36FFC(p_this_arg, (int32_t)currentCamera, v52, v53);
LABEL_84:
    if ( data >= 2 )
    {
      v62 = UICamera_TypeInfo;
      if ( !UICamera_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
        v62 = UICamera_TypeInfo;
      }
      v63 = v62->static_fields->currentTouch;
      time = RealTime__get_time(0);
      if ( !v63 )
        goto LABEL_109;
      v63->fields.clickTime = time;
    }
    v65 = name_high - 3;
    UICamera__ProcessTouch(this, touchBegan != 0, v65 < 2, v53);
    if ( v65 <= 1 )
    {
      v69 = UICamera_TypeInfo;
      if ( !UICamera_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
        v69 = UICamera_TypeInfo;
      }
      UICamera__RemoveTouch(v69->static_fields->currentTouchID, v66);
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
    sub_1C36FFC((CGThumbnailListItem_o *)&ignoreFingerIDList->_1.this_arg.bits, 0, v67, v68);
    v71 = UICamera_TypeInfo->static_fields;
    v71->currentTouch = 0;
    sub_1C36FFC((CGThumbnailListItem_o *)&v71->currentTouch, 0, v72, v73);
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
  if ( v9 )
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
    UICamera__ProcessMouse(this, v8);
  }
}


// local variable allocation has failed, the output may be wrong!
bool UICamera__Raycast(UnityEngine_Vector3_o inPos, const MethodInfo *method)
{
  float z; // s10
  int32_t v3; // w28
  __int64 currentCamera; // x0
  struct BetterList_UICamera__o *list; // x8
  struct UICamera_array *buffer; // x8
  Il2CppClass **v7; // x8
  Il2CppClass *v8; // x20
  UnityEngine_GameObject_o *gameObject; // x21
  const MethodInfo *v10; // x1
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
  const MethodInfo *v77; // x1
  void *v78; // x21
  UICamera_c *v79; // x0
  unsigned __int64 v80; // x26
  __int64 v81; // x21
  UnityEngine_GameObject_o *v82; // x22
  UnityEngine_Object_o *Component_object; // x23
  void *monitor; // x23
  Il2CppObject *v85; // x23
  UICamera_c *v86; // x8
  __int128 v87; // q1
  __int128 v88; // q2
  struct UICamera_StaticFields *v89; // x8
  UnityEngine_GameObject_o *v90; // x1
  CGThumbnailListItem_o *p_go; // x0
  int32_t v92; // w2
  const MethodInfo *v93; // x3
  struct UICamera_StaticFields *v94; // x8
  BetterList_UICamera_DepthEntry__o *mHits; // x22
  const MethodInfo_331FA80 *v96; // x23
  UICamera_c *v97; // x8
  BetterList_UICamera_DepthEntry__o *v98; // x20
  BetterList_CompareFunc_UICamera_DepthEntry__o *v99; // x21
  Il2CppObject *v100; // x22
  struct UICamera___c_StaticFields *v101; // x0
  int32_t v102; // w2
  const MethodInfo *v103; // x3
  const MethodInfo *v104; // x1
  unsigned __int64 v105; // x20
  __int64 i; // x21
  struct BetterList_UICamera_DepthEntry__o *v107; // x8
  signed __int64 size; // x22
  struct UICamera_DepthEntry_array *v109; // x8
  Il2CppObject *v110; // x22
  float v111; // s11
  float v112; // s12
  float v113; // s13
  const MethodInfo *v114; // x1
  UnityEngine_GameObject_o *v115; // x22
  __int64 v116; // x23
  UnityEngine_GameObject_o *v117; // x21
  UnityEngine_Object_o *v118; // x22
  void *v119; // x22
  UICamera_c *v120; // x0
  Il2CppObject *v121; // x22
  int32_t v122; // w2
  const MethodInfo *v123; // x3
  UICamera_c *v124; // x8
  struct UICamera_StaticFields *v125; // x9
  UICamera_c *v126; // x8
  struct UICamera_StaticFields *v127; // x9
  float v128; // w11
  struct UICamera_StaticFields *v129; // x8
  BetterList_UICamera_DepthEntry__o *v130; // x21
  const MethodInfo_331FA80 *v131; // x22
  UICamera_c *v132; // x8
  BetterList_UICamera_DepthEntry__o *v133; // x20
  BetterList_CompareFunc_UICamera_DepthEntry__o *v134; // x21
  Il2CppObject *v135; // x22
  struct UICamera___c_StaticFields *v136; // x0
  int32_t v137; // w2
  const MethodInfo *v138; // x3
  const MethodInfo *v139; // x1
  unsigned __int64 v140; // x20
  __int64 v141; // x21
  signed __int64 v142; // x22
  struct UICamera_DepthEntry_array *v143; // x8
  Il2CppObject *v144; // x21
  UICamera_c *v145; // x0
  int32_t v146; // w2
  const MethodInfo *v147; // x3
  UICamera_c *v148; // x0
  UnityEngine_GameObject_o *v149; // x1
  CGThumbnailListItem_o *v150; // x0
  UICamera_c *v152; // x0
  UICamera_c *v153; // x8
  __int128 v154; // q1
  __int128 v155; // q2
  struct UICamera_StaticFields *v156; // x9
  int32_t go; // w1
  CGThumbnailListItem_o *v158; // x0
  int32_t v159; // w2
  const MethodInfo *v160; // x3
  UICamera_c *v161; // x8
  __int64 v162; // x11
  struct UICamera_StaticFields *v163; // x10
  UICamera_c *v164; // x0
  int32_t v165; // w1
  CGThumbnailListItem_o *v166; // x0
  int32_t v167; // w2
  const MethodInfo *v168; // x3
  UICamera_c *v169; // x0
  UICamera_c *v170; // x8
  UnityEngine_GameObject_o *v171; // x1
  CGThumbnailListItem_o *p_hoveredObject; // x0
  int32_t v173; // w2
  const MethodInfo *v174; // x3
  UICamera_c *v175; // x0
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v177; // x1
  UnityEngine_Object_o *RootRigidbody; // x0
  float *v179; // x8
  UnityEngine_GameObject_o *v180; // x1
  CGThumbnailListItem_o *v181; // x0
  int32_t v182; // w2
  const MethodInfo *v183; // x3
  UICamera_c *v184; // x0
  UnityEngine_Transform_o *v185; // x0
  const MethodInfo *v186; // x1
  UnityEngine_Object_o *v187; // x19
  UnityEngine_GameObject_o *v188; // x0
  UICamera_c *v189; // x8
  CGThumbnailListItem_c *v190; // x19
  __int128 v191; // q1
  __int128 v192; // q2
  _OWORD *v193; // x8
  __int128 v194; // q1
  __int128 v195; // q2
  UICamera_c *v196; // x8
  float v197; // [xsp+14h] [xbp-1FCh]
  float v198; // [xsp+14h] [xbp-1FCh]
  float v199; // [xsp+18h] [xbp-1F8h]
  float v200; // [xsp+18h] [xbp-1F8h]
  float x; // [xsp+28h] [xbp-1E8h]
  float y; // [xsp+2Ch] [xbp-1E4h]
  UICamera_DepthEntry_o src; // [xsp+30h] [xbp-1E0h] BYREF
  UICamera_DepthEntry_o dest; // [xsp+78h] [xbp-198h] BYREF
  UnityEngine_Ray_o v205; // [xsp+C0h] [xbp-150h] BYREF
  UnityEngine_Ray_o v206; // [xsp+E0h] [xbp-130h] BYREF
  UnityEngine_Ray_o v207; // [xsp+100h] [xbp-110h] BYREF
  UICamera_DepthEntry_o v208; // [xsp+120h] [xbp-F0h] BYREF
  UnityEngine_Vector2_o v209; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v210; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o v211; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v212; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v213; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v214; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED
  UnityEngine_Vector3_o v215; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v216; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v217; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED
  UnityEngine_Vector3_o v218; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v219; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o point; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v221; // 0:s0.4,4:s1.4,8:s2.4

  z = inPos.fields.z;
  x = inPos.fields.x;
  y = inPos.fields.y;
  if ( (byte_4C474CE & 1) == 0 )
  {
    sub_1C37058(&Method_BetterList_UICamera_DepthEntry__Add__);
    sub_1C37058(&Method_BetterList_UICamera_DepthEntry__Clear__);
    sub_1C37058(&Method_BetterList_UICamera_DepthEntry__Sort__);
    sub_1C37058(&Method_BetterList_UICamera_DepthEntry__get_Item__);
    sub_1C37058(&Method_BetterList_UICamera__get_Item__);
    sub_1C37058(&BetterList_CompareFunc_UICamera_DepthEntry__TypeInfo);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    sub_1C37058(&Method_NGUITools_FindInParents_UIRect___);
    sub_1C37058(&NGUITools_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&UnityEngine_Physics2D_TypeInfo);
    sub_1C37058(&UnityEngine_Physics_TypeInfo);
    sub_1C37058(&Method_UICamera___c__Raycast_b__125_0__);
    sub_1C37058(&Method_UICamera___c__Raycast_b__125_1__);
    sub_1C37058(&UICamera___c_TypeInfo);
    sub_1C37058(&UICamera_TypeInfo);
    byte_4C474CE = 1;
  }
  v3 = 0;
  memset(&v207, 0, sizeof(v207));
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
    if ( v3 >= list->fields.size )
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
    if ( (unsigned int)v3 >= LODWORD(buffer->max_length) )
      goto LABEL_285;
    v7 = &buffer->obj.klass + v3;
    v8 = v7[4];
    if ( !v8 )
      goto LABEL_284;
    if ( !UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)v7[4], 0) )
      goto LABEL_25;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v8, 0);
    if ( !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    if ( !NGUITools__GetActive_49345096(gameObject, 0) )
      goto LABEL_25;
    cachedCamera = UICamera__get_cachedCamera((UICamera_o *)v8, v10);
    v14 = UICamera_TypeInfo;
    v15 = cachedCamera;
    if ( !UICamera_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
      v14 = UICamera_TypeInfo;
    }
    static_fields = v14->static_fields;
    static_fields->currentCamera = v15;
    sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->currentCamera, (int32_t)v15, v12, v13);
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
    v211.fields.x = x;
    v211.fields.y = y;
    v211.fields.z = z;
    v212 = UnityEngine_Camera__ScreenToViewportPoint((UnityEngine_Camera_o *)currentCamera, v211, 0);
    if ( (LODWORD(v212.fields.x) & 0x7FFFFFFFu) > 0x7F800000
      || v212.fields.y > 1.0
      || v212.fields.y < 0.0
      || v212.fields.x > 1.0
      || v212.fields.x < 0.0
      || (LODWORD(v212.fields.y) & 0x7FFFFFFFu) > 0x7F800000 )
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
    v213.fields.x = x;
    v213.fields.y = y;
    v213.fields.z = z;
    UnityEngine_Camera__ScreenPointToRay_71073508(
      (UnityEngine_Ray_o *)&v208,
      (UnityEngine_Camera_o *)currentCamera,
      v213,
      0);
    *(_OWORD *)&v207.fields.m_Origin.fields.x = *(_OWORD *)&v208.fields.depth;
    *(_QWORD *)&v207.fields.m_Direction.fields.y = *(_QWORD *)&v208.fields.hit.fields.m_Normal.fields.x;
    currentCamera = (__int64)UICamera_TypeInfo->static_fields->currentCamera;
    if ( !currentCamera )
      goto LABEL_284;
    cullingMask = UnityEngine_Camera__get_cullingMask((UnityEngine_Camera_o *)currentCamera, 0);
    v20.fields.m_Mask = *(&v8->_1.byval_arg.bits + 1);
    v21 = UnityEngine_LayerMask__op_Implicit(v20, 0);
    v22 = *((float *)&v8->_1.castClass + 1);
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
    switch ( HIDWORD(v8->_1.byval_arg.data) )
    {
      case 0:
        *(_OWORD *)&v208.fields.depth = *(_OWORD *)&v207.fields.m_Origin.fields.x;
        *(_QWORD *)&v208.fields.hit.fields.m_Normal.fields.x = *(_QWORD *)&v207.fields.m_Direction.fields.y;
        if ( !UICamera_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
        if ( !UnityEngine_Physics_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Physics_TypeInfo);
        *(_OWORD *)&v206.fields.m_Origin.fields.x = *(_OWORD *)&v208.fields.depth;
        *(_QWORD *)&v206.fields.m_Direction.fields.y = *(_QWORD *)&v208.fields.hit.fields.m_Normal.fields.x;
        if ( !UnityEngine_Physics__Raycast_71582732(&v206, &UICamera_TypeInfo->static_fields->lastHit, v22, v26, 0) )
          goto LABEL_25;
        v169 = UICamera_TypeInfo;
        if ( !UICamera_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
          v169 = UICamera_TypeInfo;
        }
        point = UnityEngine_RaycastHit__get_point(&v169->static_fields->lastHit, 0);
        v170 = UICamera_TypeInfo;
        UICamera_TypeInfo->static_fields->lastWorldPosition = point;
        currentCamera = (__int64)UnityEngine_RaycastHit__get_collider(&v170->static_fields->lastHit, 0);
        if ( !currentCamera )
          goto LABEL_284;
        v171 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)currentCamera, 0);
        p_hoveredObject = (CGThumbnailListItem_o *)&UICamera_TypeInfo->static_fields->hoveredObject;
        p_hoveredObject->klass = (CGThumbnailListItem_c *)v171;
        sub_1C36FFC(p_hoveredObject, (int32_t)v171, v173, v174);
        currentCamera = (__int64)UICamera_TypeInfo->static_fields->list;
        if ( !currentCamera )
          goto LABEL_284;
        currentCamera = (__int64)BetterList_object___get_Item(
                                   (BetterList_T__o *)currentCamera,
                                   0,
                                   (const MethodInfo_3319DC0 *)Method_BetterList_UICamera__get_Item__);
        if ( !currentCamera )
          goto LABEL_284;
        if ( *(_BYTE *)(currentCamera + 40) )
          return 1;
        v175 = UICamera_TypeInfo;
        if ( !UICamera_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
          v175 = UICamera_TypeInfo;
        }
        currentCamera = (__int64)v175->static_fields->hoveredObject;
        if ( !currentCamera )
          goto LABEL_284;
        transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)currentCamera, 0);
        RootRigidbody = (UnityEngine_Object_o *)UICamera__FindRootRigidbody(transform, v177);
        goto LABEL_270;
      case 1:
        *(_OWORD *)&v208.fields.depth = *(_OWORD *)&v207.fields.m_Origin.fields.x;
        *(_QWORD *)&v208.fields.hit.fields.m_Normal.fields.x = *(_QWORD *)&v207.fields.m_Direction.fields.y;
        if ( !UnityEngine_Physics_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Physics_TypeInfo);
        *(_OWORD *)&v205.fields.m_Origin.fields.x = *(_OWORD *)&v208.fields.depth;
        *(_QWORD *)&v205.fields.m_Direction.fields.y = *(_QWORD *)&v208.fields.hit.fields.m_Normal.fields.x;
        currentCamera = (__int64)UnityEngine_Physics__RaycastAll_71585344(&v205, v22, v26, 0);
        if ( !currentCamera )
          goto LABEL_284;
        v27 = *(_QWORD *)(currentCamera + 24);
        v28 = currentCamera;
        if ( (int)v27 >= 2 )
        {
          v80 = 0;
          v81 = currentCamera + 32;
          while ( 1 )
          {
            if ( v80 >= (unsigned int)v27 )
              goto LABEL_285;
            currentCamera = (__int64)UnityEngine_RaycastHit__get_collider((UnityEngine_RaycastHit_o *)v81, 0);
            if ( !currentCamera )
              goto LABEL_284;
            currentCamera = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)currentCamera, 0);
            if ( !currentCamera )
              goto LABEL_284;
            v82 = (UnityEngine_GameObject_o *)currentCamera;
            Component_object = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_object_(
                                                         (UnityEngine_GameObject_o *)currentCamera,
                                                         (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
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
                if ( v80 >= *(unsigned int *)(v28 + 24) )
                  goto LABEL_285;
                v217 = UnityEngine_RaycastHit__get_point((UnityEngine_RaycastHit_o *)v81, 0);
                currentCamera = (*((__int64 (__fastcall **)(_QWORD, _QWORD, long double, long double, long double))monitor
                                 + 3))(
                                  *((_QWORD *)monitor + 8),
                                  *((_QWORD *)monitor + 5),
                                  *(long double *)&v217.fields.x,
                                  *(long double *)&v217.fields.y,
                                  *(long double *)&v217.fields.z);
                if ( (currentCamera & 1) != 0 )
                  goto LABEL_125;
              }
            }
            else
            {
              if ( !NGUITools_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
              v85 = NGUITools__FindInParents_object_(
                      v82,
                      (const MethodInfo_3171F1C *)Method_NGUITools_FindInParents_UIRect___);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              currentCamera = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v85, 0, 0);
              if ( (currentCamera & 1) == 0 )
                goto LABEL_125;
              if ( !v85 )
                goto LABEL_284;
              if ( *(float *)&v85[9].klass >= 0.001 )
              {
LABEL_125:
                if ( !UICamera_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
                if ( !NGUITools_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
                currentCamera = NGUITools__CalculateRaycastDepth(v82, 0);
                v86 = UICamera_TypeInfo;
                UICamera_TypeInfo->static_fields->mHit.fields.depth = currentCamera;
                if ( (_DWORD)currentCamera != 0x7FFFFFFF )
                {
                  if ( !v86->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(v86);
                  if ( v80 >= *(unsigned int *)(v28 + 24) )
                    goto LABEL_285;
                  v88 = *(_OWORD *)v81;
                  v87 = *(_OWORD *)(v81 + 16);
                  *(_OWORD *)&src.fields.hit.fields.m_FaceID = *(_OWORD *)(v81 + 28);
                  *(_OWORD *)&src.fields.depth = v88;
                  *(_OWORD *)&src.fields.hit.fields.m_Normal.fields.x = v87;
                  v89 = UICamera_TypeInfo->static_fields;
                  *(_OWORD *)&v89->mHit.fields.hit.fields.m_Distance = *(_OWORD *)&src.fields.hit.fields.m_FaceID;
                  *(_OWORD *)&v89->mHit.fields.hit.fields.m_Point.fields.x = v88;
                  *(_OWORD *)&v89->mHit.fields.hit.fields.m_Normal.fields.y = v87;
                  if ( v80 >= *(unsigned int *)(v28 + 24) )
                    goto LABEL_285;
                  UICamera_TypeInfo->static_fields->mHit.fields.point = UnityEngine_RaycastHit__get_point(
                                                                          (UnityEngine_RaycastHit_o *)v81,
                                                                          0);
                  if ( v80 >= *(unsigned int *)(v28 + 24) )
                    goto LABEL_285;
                  currentCamera = (__int64)UnityEngine_RaycastHit__get_collider((UnityEngine_RaycastHit_o *)v81, 0);
                  if ( !currentCamera )
                    goto LABEL_284;
                  v90 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)currentCamera, 0);
                  p_go = (CGThumbnailListItem_o *)&UICamera_TypeInfo->static_fields->mHit.fields.go;
                  p_go->klass = (CGThumbnailListItem_c *)v90;
                  sub_1C36FFC(p_go, (int32_t)v90, v92, v93);
                  v94 = UICamera_TypeInfo->static_fields;
                  mHits = v94->mHits;
                  currentCamera = (__int64)memcpy(&dest, &v94->mHit, sizeof(dest));
                  if ( !mHits )
                    goto LABEL_284;
                  v96 = (const MethodInfo_331FA80 *)Method_BetterList_UICamera_DepthEntry__Add__;
                  memcpy(&v208, &dest, sizeof(v208));
                  BetterList_UICamera_DepthEntry___Add(mHits, &v208, v96);
                }
              }
            }
            LODWORD(v27) = *(_DWORD *)(v28 + 24);
            ++v80;
            v81 += 44;
            if ( (__int64)v80 >= (int)v27 )
            {
              v97 = UICamera_TypeInfo;
              if ( !UICamera_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
                v97 = UICamera_TypeInfo;
              }
              currentCamera = (__int64)UICamera___c_TypeInfo;
              v98 = v97->static_fields->mHits;
              if ( !UICamera___c_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UICamera___c_TypeInfo);
                currentCamera = (__int64)UICamera___c_TypeInfo;
              }
              v99 = *(BetterList_CompareFunc_UICamera_DepthEntry__o **)(*(_QWORD *)(currentCamera + 184) + 8LL);
              if ( !v99 )
              {
                if ( !*(_DWORD *)(currentCamera + 224) )
                {
                  j_il2cpp_runtime_class_init_0(currentCamera);
                  currentCamera = (__int64)UICamera___c_TypeInfo;
                }
                v100 = **(Il2CppObject ***)(currentCamera + 184);
                v99 = (BetterList_CompareFunc_UICamera_DepthEntry__o *)sub_1C372A4(BetterList_CompareFunc_UICamera_DepthEntry__TypeInfo);
                BetterList_CompareFunc_UICamera_DepthEntry____ctor(
                  v99,
                  v100,
                  Method_UICamera___c__Raycast_b__125_0__,
                  0);
                v101 = UICamera___c_TypeInfo->static_fields;
                v101->__9__125_0 = v99;
                sub_1C36FFC((CGThumbnailListItem_o *)&v101->__9__125_0, (int32_t)v99, v102, v103);
              }
              if ( v98 )
              {
                BetterList_UICamera_DepthEntry___Sort(
                  v98,
                  (BetterList_CompareFunc_T__o *)v99,
                  (const MethodInfo_332034C *)Method_BetterList_UICamera_DepthEntry__Sort__);
                v105 = 0;
                for ( i = 32; ; i += 72 )
                {
                  currentCamera = (__int64)UICamera_TypeInfo;
                  if ( !UICamera_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
                    currentCamera = (__int64)UICamera_TypeInfo;
                  }
                  v107 = *(struct BetterList_UICamera_DepthEntry__o **)(*(_QWORD *)(currentCamera + 184) + 456LL);
                  if ( !v107 )
                    goto LABEL_284;
                  size = v107->fields.size;
                  if ( !*(_DWORD *)(currentCamera + 224) )
                  {
                    j_il2cpp_runtime_class_init_0(currentCamera);
                    v107 = UICamera_TypeInfo->static_fields->mHits;
                    if ( !v107 )
                      goto LABEL_284;
                  }
                  if ( (__int64)v105 >= size )
                    goto LABEL_224;
                  v109 = v107->fields.buffer;
                  if ( !v109 )
                    goto LABEL_284;
                  if ( v105 >= LODWORD(v109->max_length) )
                    goto LABEL_285;
                  if ( UICamera__IsVisible_49073232((UICamera_DepthEntry_o *)((char *)v109 + i), v104) )
                    break;
                  ++v105;
                }
                v152 = UICamera_TypeInfo;
                if ( !UICamera_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
                  v152 = UICamera_TypeInfo;
                }
                currentCamera = (__int64)v152->static_fields->mHits;
                if ( currentCamera )
                {
                  BetterList_UICamera_DepthEntry___get_Item(
                    &dest,
                    (BetterList_UICamera_DepthEntry__o *)currentCamera,
                    v105,
                    (const MethodInfo_331F7B8 *)Method_BetterList_UICamera_DepthEntry__get_Item__);
                  memcpy(&v208, &dest, sizeof(v208));
                  v153 = UICamera_TypeInfo;
                  v154 = *(_OWORD *)&v208.fields.hit.fields.m_Normal.fields.y;
                  v155 = *(_OWORD *)&v208.fields.hit.fields.m_Point.fields.x;
                  v156 = UICamera_TypeInfo->static_fields;
                  *(_OWORD *)&v156->lastHit.fields.m_Distance = *(_OWORD *)&v208.fields.hit.fields.m_Distance;
                  *(_OWORD *)&v156->lastHit.fields.m_Point.fields.x = v155;
                  *(_OWORD *)&v156->lastHit.fields.m_Normal.fields.y = v154;
                  currentCamera = (__int64)v153->static_fields->mHits;
                  if ( currentCamera )
                  {
                    BetterList_UICamera_DepthEntry___get_Item(
                      &dest,
                      (BetterList_UICamera_DepthEntry__o *)currentCamera,
                      v105,
                      (const MethodInfo_331F7B8 *)Method_BetterList_UICamera_DepthEntry__get_Item__);
                    go = (int32_t)dest.fields.go;
                    v158 = (CGThumbnailListItem_o *)&UICamera_TypeInfo->static_fields->hoveredObject;
                    v158->klass = (CGThumbnailListItem_c *)dest.fields.go;
                    sub_1C36FFC(v158, go, v159, v160);
                    currentCamera = (__int64)UICamera_TypeInfo->static_fields->mHits;
                    if ( currentCamera )
                    {
                      BetterList_UICamera_DepthEntry___get_Item(
                        &src,
                        (BetterList_UICamera_DepthEntry__o *)currentCamera,
                        v105,
                        (const MethodInfo_331F7B8 *)Method_BetterList_UICamera_DepthEntry__get_Item__);
                      memcpy(&dest, &src, sizeof(dest));
                      v161 = UICamera_TypeInfo;
                      v162 = *(_QWORD *)&dest.fields.point.fields.x;
                      v163 = UICamera_TypeInfo->static_fields;
                      v163->lastWorldPosition.fields.z = dest.fields.point.fields.z;
                      *(_QWORD *)&v163->lastWorldPosition.fields.x = v162;
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
                                        (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
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
            v214 = UnityEngine_RaycastHit__get_point((UnityEngine_RaycastHit_o *)(v28 + 32), 0);
            currentCamera = (*((__int64 (__fastcall **)(_QWORD, _QWORD, long double, long double, long double))v32 + 3))(
                              *((_QWORD *)v32 + 8),
                              *((_QWORD *)v32 + 5),
                              *(long double *)&v214.fields.x,
                              *(long double *)&v214.fields.y,
                              *(long double *)&v214.fields.z);
            if ( (currentCamera & 1) == 0 )
              goto LABEL_25;
          }
        }
        else
        {
          if ( !NGUITools_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
          v110 = NGUITools__FindInParents_object_(
                   v30,
                   (const MethodInfo_3171F1C *)Method_NGUITools_FindInParents_UIRect___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          currentCamera = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v110, 0, 0);
          if ( (currentCamera & 1) != 0 )
          {
            if ( !v110 )
              goto LABEL_284;
            if ( *(float *)&v110[9].klass < 0.001 )
              goto LABEL_25;
          }
        }
        if ( !*(_DWORD *)(v28 + 24) )
          goto LABEL_285;
        v218 = UnityEngine_RaycastHit__get_point((UnityEngine_RaycastHit_o *)(v28 + 32), 0);
        if ( !*(_DWORD *)(v28 + 24) )
          goto LABEL_285;
        v111 = v218.fields.x;
        v112 = v218.fields.y;
        v113 = v218.fields.z;
        currentCamera = (__int64)UnityEngine_RaycastHit__get_collider((UnityEngine_RaycastHit_o *)(v28 + 32), 0);
        if ( !currentCamera )
          goto LABEL_284;
        v115 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)currentCamera, 0);
        if ( !UICamera_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
        v219.fields.x = v111;
        v219.fields.y = v112;
        v219.fields.z = v113;
        currentCamera = UICamera__IsVisible(v219, v115, v114);
        if ( (currentCamera & 1) != 0 )
        {
          if ( !*(_DWORD *)(v28 + 24) )
            goto LABEL_285;
          v192 = *v29;
          v191 = *(_OWORD *)(v28 + 48);
          currentCamera = (__int64)UICamera_TypeInfo;
          *(_OWORD *)&v208.fields.hit.fields.m_FaceID = *(_OWORD *)(v28 + 60);
          *(_OWORD *)&v208.fields.depth = v192;
          *(_OWORD *)&v208.fields.hit.fields.m_Normal.fields.x = v191;
          if ( !UICamera_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
            currentCamera = (__int64)UICamera_TypeInfo;
          }
          v193 = *(_OWORD **)(currentCamera + 184);
          v195 = *(_OWORD *)&v208.fields.depth;
          v194 = *(_OWORD *)&v208.fields.hit.fields.m_Normal.fields.x;
          *(_OWORD *)((char *)v193 + 108) = *(_OWORD *)&v208.fields.hit.fields.m_FaceID;
          v193[5] = v195;
          v193[6] = v194;
          if ( !*(_DWORD *)(v28 + 24) )
LABEL_285:
            sub_1C372BC(currentCamera);
          v221 = UnityEngine_RaycastHit__get_point((UnityEngine_RaycastHit_o *)(v28 + 32), 0);
          v196 = UICamera_TypeInfo;
          UICamera_TypeInfo->static_fields->lastWorldPosition = v221;
          currentCamera = (__int64)UnityEngine_RaycastHit__get_collider(&v196->static_fields->lastHit, 0);
          if ( !currentCamera )
            goto LABEL_284;
          v149 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)currentCamera, 0);
          v150 = (CGThumbnailListItem_o *)&UICamera_TypeInfo->static_fields->hoveredObject;
          v150->klass = (CGThumbnailListItem_c *)v149;
LABEL_283:
          sub_1C36FFC(v150, (int32_t)v149, v146, v147);
          return 1;
        }
LABEL_25:
        ++v3;
        continue;
      case 2:
        v33 = UICamera_TypeInfo;
        if ( !UICamera_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
          v33 = UICamera_TypeInfo;
        }
        v34 = (float *)v33->static_fields;
        v35 = v207.fields.m_Origin.fields.y;
        v36 = v207.fields.m_Origin.fields.x;
        v37 = *(_QWORD *)&v207.fields.m_Origin.fields.z;
        v38 = *(_QWORD *)&v207.fields.m_Direction.fields.y;
        v39 = v34[116];
        v40 = v34[117];
        v41 = v34[118];
        v42 = v34[119];
        if ( !byte_4C3C925 )
        {
          v197 = v34[119];
          v199 = v207.fields.m_Origin.fields.y;
          sub_1C37058(&UnityEngine_Mathf_TypeInfo);
          v42 = v197;
          v35 = v199;
          byte_4C3C925 = 1;
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
        v215 = UnityEngine_Ray__GetPoint(&v207, v46, 0);
        v47 = v215.fields.x;
        v48 = v215.fields.y;
        v49 = v215.fields.z;
        if ( !UnityEngine_Physics2D_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Physics2D_TypeInfo);
        v209.fields.x = v47;
        v209.fields.y = v48;
        v50 = (UnityEngine_Object_o *)UnityEngine_Physics2D__OverlapPoint(v209, v26, 0);
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
        v179 = *(float **)(currentCamera + 184);
        v179[17] = v47;
        v179[18] = v48;
        v179[19] = v49;
        if ( !v50 )
          goto LABEL_284;
        v180 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v50, 0);
        v181 = (CGThumbnailListItem_o *)&UICamera_TypeInfo->static_fields->hoveredObject;
        v181->klass = (CGThumbnailListItem_c *)v180;
        sub_1C36FFC(v181, (int32_t)v180, v182, v183);
        if ( LOBYTE(v8->_1.byval_arg.bits) )
          return 1;
        v184 = UICamera_TypeInfo;
        if ( !UICamera_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
          v184 = UICamera_TypeInfo;
        }
        currentCamera = (__int64)v184->static_fields->hoveredObject;
        if ( !currentCamera )
          goto LABEL_284;
        v185 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)currentCamera, 0);
        RootRigidbody = (UnityEngine_Object_o *)UICamera__FindRootRigidbody2D(v185, v186);
LABEL_270:
        v187 = RootRigidbody;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        currentCamera = UnityEngine_Object__op_Inequality(v187, 0, 0);
        if ( (currentCamera & 1) == 0 )
          return 1;
        if ( !v187 )
          goto LABEL_284;
        v188 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v187, 0);
        v189 = UICamera_TypeInfo;
        v190 = (CGThumbnailListItem_c *)v188;
        if ( !UICamera_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
          v189 = UICamera_TypeInfo;
        }
        LODWORD(v149) = (_DWORD)v190;
        v150 = (CGThumbnailListItem_o *)&v189->static_fields->hoveredObject;
        v150->klass = v190;
        goto LABEL_283;
      case 3:
        v51 = UICamera_TypeInfo;
        if ( !UICamera_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
          v51 = UICamera_TypeInfo;
        }
        v52 = (float *)v51->static_fields;
        v53 = v207.fields.m_Origin.fields.y;
        v54 = v207.fields.m_Origin.fields.x;
        v55 = *(_QWORD *)&v207.fields.m_Origin.fields.z;
        v56 = *(_QWORD *)&v207.fields.m_Direction.fields.y;
        v57 = v52[116];
        v58 = v52[117];
        v59 = v52[118];
        v60 = v52[119];
        if ( !byte_4C3C925 )
        {
          v198 = v52[119];
          v200 = v207.fields.m_Origin.fields.y;
          sub_1C37058(&UnityEngine_Mathf_TypeInfo);
          v60 = v198;
          v53 = v200;
          byte_4C3C925 = 1;
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
        v216 = UnityEngine_Ray__GetPoint(&v207, v64, 0);
        v65 = UICamera_TypeInfo;
        v66 = v216.fields.x;
        v67 = v216.fields.y;
        v68 = v216.fields.z;
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
        v210.fields.x = v72;
        v210.fields.y = v71;
        currentCamera = (__int64)UnityEngine_Physics2D__OverlapPointAll(v210, v26, 0);
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
                                          (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          currentCamera = UnityEngine_Object__op_Inequality(v76, 0, 0);
          if ( (currentCamera & 1) != 0 )
          {
            if ( !v76 )
              goto LABEL_284;
            if ( !UIWidget__get_isVisible((UIWidget_o *)v76, 0) )
              goto LABEL_25;
            v78 = v76[9].monitor;
            if ( v78 )
            {
              v79 = UICamera_TypeInfo;
              if ( !UICamera_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
                v79 = UICamera_TypeInfo;
              }
              if ( ((*((__int64 (__fastcall **)(_QWORD, _QWORD, float, float, float))v78 + 3))(
                      *((_QWORD *)v78 + 8),
                      *((_QWORD *)v78 + 5),
                      v79->static_fields->lastWorldPosition.fields.x,
                      v79->static_fields->lastWorldPosition.fields.y,
                      v79->static_fields->lastWorldPosition.fields.z)
                  & 1) == 0 )
                goto LABEL_25;
            }
          }
          else
          {
            if ( !NGUITools_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
            v144 = NGUITools__FindInParents_object_(
                     v75,
                     (const MethodInfo_3171F1C *)Method_NGUITools_FindInParents_UIRect___);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            currentCamera = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v144, 0, 0);
            if ( (currentCamera & 1) != 0 )
            {
              if ( !v144 )
                goto LABEL_284;
              if ( *(float *)&v144[9].klass < 0.001 )
                goto LABEL_25;
            }
          }
          v145 = UICamera_TypeInfo;
          if ( !UICamera_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
            v145 = UICamera_TypeInfo;
          }
          if ( UICamera__IsVisible(v145->static_fields->lastWorldPosition, v75, v77) )
          {
            v148 = UICamera_TypeInfo;
            if ( !UICamera_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
              v148 = UICamera_TypeInfo;
            }
            LODWORD(v149) = (_DWORD)v75;
            v150 = (CGThumbnailListItem_o *)&v148->static_fields->hoveredObject;
            v150->klass = (CGThumbnailListItem_c *)v75;
            goto LABEL_283;
          }
          goto LABEL_25;
        }
        v116 = 0;
        break;
      default:
        goto LABEL_25;
    }
    break;
  }
  do
  {
    if ( (unsigned int)v116 >= v73 )
      goto LABEL_285;
    currentCamera = *(_QWORD *)(v74 + 32 + 8 * v116);
    if ( !currentCamera )
      goto LABEL_284;
    currentCamera = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)currentCamera, 0);
    if ( !currentCamera )
      goto LABEL_284;
    v117 = (UnityEngine_GameObject_o *)currentCamera;
    v118 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_object_(
                                     (UnityEngine_GameObject_o *)currentCamera,
                                     (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    currentCamera = UnityEngine_Object__op_Inequality(v118, 0, 0);
    if ( (currentCamera & 1) != 0 )
    {
      if ( !v118 )
        goto LABEL_284;
      currentCamera = UIWidget__get_isVisible((UIWidget_o *)v118, 0);
      if ( (currentCamera & 1) == 0 )
        goto LABEL_203;
      v119 = v118[9].monitor;
      if ( v119 )
      {
        v120 = UICamera_TypeInfo;
        if ( !UICamera_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
          v120 = UICamera_TypeInfo;
        }
        currentCamera = (*((__int64 (__fastcall **)(_QWORD, _QWORD, float, float, float))v119 + 3))(
                          *((_QWORD *)v119 + 8),
                          *((_QWORD *)v119 + 5),
                          v120->static_fields->lastWorldPosition.fields.x,
                          v120->static_fields->lastWorldPosition.fields.y,
                          v120->static_fields->lastWorldPosition.fields.z);
        if ( (currentCamera & 1) == 0 )
          goto LABEL_203;
      }
    }
    else
    {
      if ( !NGUITools_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
      v121 = NGUITools__FindInParents_object_(
               v117,
               (const MethodInfo_3171F1C *)Method_NGUITools_FindInParents_UIRect___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      currentCamera = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v121, 0, 0);
      if ( (currentCamera & 1) != 0 )
      {
        if ( !v121 )
          goto LABEL_284;
        if ( *(float *)&v121[9].klass < 0.001 )
          goto LABEL_203;
      }
    }
    if ( !UICamera_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    if ( !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    currentCamera = NGUITools__CalculateRaycastDepth(v117, 0);
    v124 = UICamera_TypeInfo;
    v125 = UICamera_TypeInfo->static_fields;
    v125->mHit.fields.depth = currentCamera;
    if ( (_DWORD)currentCamera != 0x7FFFFFFF )
    {
      if ( !v124->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v124);
        v125 = UICamera_TypeInfo->static_fields;
      }
      v125->mHit.fields.go = v117;
      sub_1C36FFC((CGThumbnailListItem_o *)&v125->mHit.fields.go, (int32_t)v117, v122, v123);
      v126 = UICamera_TypeInfo;
      v127 = UICamera_TypeInfo->static_fields;
      v128 = v127->lastWorldPosition.fields.z;
      *(_QWORD *)&v127->mHit.fields.point.fields.x = *(_QWORD *)&v127->lastWorldPosition.fields.x;
      v127->mHit.fields.point.fields.z = v128;
      v129 = v126->static_fields;
      v130 = v129->mHits;
      currentCamera = (__int64)memcpy(&dest, &v129->mHit, sizeof(dest));
      if ( !v130 )
        goto LABEL_284;
      v131 = (const MethodInfo_331FA80 *)Method_BetterList_UICamera_DepthEntry__Add__;
      memcpy(&v208, &dest, sizeof(v208));
      BetterList_UICamera_DepthEntry___Add(v130, &v208, v131);
    }
LABEL_203:
    v73 = *(_DWORD *)(v74 + 24);
    ++v116;
  }
  while ( (int)v116 < v73 );
  v132 = UICamera_TypeInfo;
  if ( !UICamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    v132 = UICamera_TypeInfo;
  }
  currentCamera = (__int64)UICamera___c_TypeInfo;
  v133 = v132->static_fields->mHits;
  if ( !UICamera___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICamera___c_TypeInfo);
    currentCamera = (__int64)UICamera___c_TypeInfo;
  }
  v134 = *(BetterList_CompareFunc_UICamera_DepthEntry__o **)(*(_QWORD *)(currentCamera + 184) + 16LL);
  if ( !v134 )
  {
    if ( !*(_DWORD *)(currentCamera + 224) )
    {
      j_il2cpp_runtime_class_init_0(currentCamera);
      currentCamera = (__int64)UICamera___c_TypeInfo;
    }
    v135 = **(Il2CppObject ***)(currentCamera + 184);
    v134 = (BetterList_CompareFunc_UICamera_DepthEntry__o *)sub_1C372A4(BetterList_CompareFunc_UICamera_DepthEntry__TypeInfo);
    BetterList_CompareFunc_UICamera_DepthEntry____ctor(v134, v135, Method_UICamera___c__Raycast_b__125_1__, 0);
    v136 = UICamera___c_TypeInfo->static_fields;
    v136->__9__125_1 = v134;
    sub_1C36FFC((CGThumbnailListItem_o *)&v136->__9__125_1, (int32_t)v134, v137, v138);
  }
  if ( !v133 )
    goto LABEL_284;
  BetterList_UICamera_DepthEntry___Sort(
    v133,
    (BetterList_CompareFunc_T__o *)v134,
    (const MethodInfo_332034C *)Method_BetterList_UICamera_DepthEntry__Sort__);
  v140 = 0;
  v141 = 32;
  while ( 2 )
  {
    currentCamera = (__int64)UICamera_TypeInfo;
    if ( !UICamera_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
      currentCamera = (__int64)UICamera_TypeInfo;
    }
    v107 = *(struct BetterList_UICamera_DepthEntry__o **)(*(_QWORD *)(currentCamera + 184) + 456LL);
    if ( !v107 )
      goto LABEL_284;
    v142 = v107->fields.size;
    if ( !*(_DWORD *)(currentCamera + 224) )
    {
      j_il2cpp_runtime_class_init_0(currentCamera);
      v107 = UICamera_TypeInfo->static_fields->mHits;
      if ( !v107 )
        goto LABEL_284;
    }
    if ( (__int64)v140 >= v142 )
    {
LABEL_224:
      BetterList_UICamera_DepthEntry___Clear(
        v107,
        (const MethodInfo_331FA68 *)Method_BetterList_UICamera_DepthEntry__Clear__);
      goto LABEL_25;
    }
    v143 = v107->fields.buffer;
    if ( !v143 )
      goto LABEL_284;
    if ( v140 >= LODWORD(v143->max_length) )
      goto LABEL_285;
    if ( !UICamera__IsVisible_49073232((UICamera_DepthEntry_o *)((char *)v143 + v141), v139) )
    {
      ++v140;
      v141 += 72;
      continue;
    }
    break;
  }
  v164 = UICamera_TypeInfo;
  if ( !UICamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    v164 = UICamera_TypeInfo;
  }
  currentCamera = (__int64)v164->static_fields->mHits;
  if ( !currentCamera )
    goto LABEL_284;
  BetterList_UICamera_DepthEntry___get_Item(
    &v208,
    (BetterList_UICamera_DepthEntry__o *)currentCamera,
    v140,
    (const MethodInfo_331F7B8 *)Method_BetterList_UICamera_DepthEntry__get_Item__);
  v165 = (int32_t)v208.fields.go;
  v166 = (CGThumbnailListItem_o *)&UICamera_TypeInfo->static_fields->hoveredObject;
  v166->klass = (CGThumbnailListItem_c *)v208.fields.go;
  sub_1C36FFC(v166, v165, v167, v168);
  v161 = UICamera_TypeInfo;
LABEL_245:
  currentCamera = (__int64)v161->static_fields->mHits;
  if ( !currentCamera )
LABEL_284:
    sub_1C372B4(currentCamera);
  BetterList_UICamera_DepthEntry___Clear(
    (BetterList_UICamera_DepthEntry__o *)currentCamera,
    (const MethodInfo_331FA68 *)Method_BetterList_UICamera_DepthEntry__Clear__);
  return 1;
}


void UICamera__RemoveTouch(int32_t id, const MethodInfo *method)
{
  UICamera_c *v3; // x0
  System_Collections_Generic_Dictionary_int__object__o *mTouches; // x0

  if ( (byte_4C474D9 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__UICamera_MouseOrTouch__Remove__);
    sub_1C37058(&UICamera_TypeInfo);
    byte_4C474D9 = 1;
  }
  v3 = UICamera_TypeInfo;
  if ( !UICamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    v3 = UICamera_TypeInfo;
  }
  mTouches = (System_Collections_Generic_Dictionary_int__object__o *)v3->static_fields->mTouches;
  if ( !mTouches )
    sub_1C372B4(0);
  System_Collections_Generic_Dictionary_int__object___Remove(
    mTouches,
    id,
    (const MethodInfo_33FBA0C *)Method_System_Collections_Generic_Dictionary_int__UICamera_MouseOrTouch__Remove__);
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
  CGThumbnailListItem_o *p_mTooltip; // x19
  UnityEngine_GameObject_o *v14; // x21
  struct UnityEngine_GameObject_o *mTooltip; // t1
  const MethodInfo *v16; // x3
  Il2CppObject *v17; // x22
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  bool v20[4]; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C474E7 & 1) == 0 )
  {
    sub_1C37058(&bool_TypeInfo);
    sub_1C37058(&UICamera_TypeInfo);
    sub_1C37058(&StringLiteral_9972/*"OnTooltip"*/);
    byte_4C474E7 = 1;
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
        sub_1C372B4(v12);
    }
    ((void (__fastcall *)(intptr_t, struct UnityEngine_GameObject_o *, bool, intptr_t))onTooltip->fields.invoke_impl)(
      onTooltip->fields.method_code,
      this->fields.mTooltip,
      val,
      onTooltip->fields.method);
  }
  mTooltip = this->fields.mTooltip;
  p_mTooltip = (CGThumbnailListItem_o *)&this->fields.mTooltip;
  v14 = mTooltip;
  v20[0] = val;
  v17 = (Il2CppObject *)j_il2cpp_value_box_0(bool_TypeInfo, v20, method, v3, v4, v5, v6, v7);
  if ( !UICamera_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
  UICamera__Notify(v14, (System_String_o *)StringLiteral_9972/*"OnTooltip"*/, v17, v16);
  if ( !val )
  {
    p_mTooltip->klass = 0;
    sub_1C36FFC(p_mTooltip, 0, v18, v19);
  }
}


void UICamera__Start(UICamera_o *this, const MethodInfo *method)
{
  UnityEngine_Camera_o *cachedCamera; // x0
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x1
  UICamera_c *v6; // x0
  UnityEngine_Object_o *fallThrough; // x20
  const MethodInfo *v8; // x1
  UnityEngine_GameObject_o *gameObject; // x20
  Il2CppObject *v10; // x20
  UnityEngine_Transform_o *v11; // x20
  UnityEngine_Object_o *parent; // x21
  bool v13; // w8
  UnityEngine_GameObject_o *v14; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  UICamera_c *v17; // x8
  UnityEngine_GameObject_o *v18; // x20
  struct UICamera_StaticFields *static_fields; // x0
  _BOOL4 debug; // w19

  if ( (byte_4C474DD & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Application_TypeInfo);
    sub_1C37058(&NGUIDebug_TypeInfo);
    sub_1C37058(&Method_NGUITools_FindInParents_UIRoot___);
    sub_1C37058(&NGUITools_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&UICamera_TypeInfo);
    byte_4C474DD = 1;
  }
  if ( this->fields.eventType )
  {
    cachedCamera = UICamera__get_cachedCamera(this, method);
    if ( !cachedCamera )
      goto LABEL_38;
    if ( UnityEngine_Camera__get_transparencySortMode(cachedCamera, 0) != 2 )
    {
      cachedCamera = UICamera__get_cachedCamera(this, v4);
      if ( !cachedCamera )
        goto LABEL_38;
      UnityEngine_Camera__set_transparencySortMode(cachedCamera, 2, 0);
    }
  }
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
  if ( UnityEngine_Application__get_isPlaying(0) )
  {
    v6 = UICamera_TypeInfo;
    if ( !UICamera_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
      v6 = UICamera_TypeInfo;
    }
    fallThrough = (UnityEngine_Object_o *)v6->static_fields->fallThrough;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(fallThrough, 0, 0) )
    {
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !NGUITools_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
      v10 = NGUITools__FindInParents_object_(
              gameObject,
              (const MethodInfo_3171F1C *)Method_NGUITools_FindInParents_UIRoot___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      cachedCamera = (UnityEngine_Camera_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v10, 0, 0);
      if ( ((unsigned __int8)cachedCamera & 1) != 0 )
      {
        if ( !v10 )
          goto LABEL_38;
        cachedCamera = (UnityEngine_Camera_o *)v10;
      }
      else
      {
        cachedCamera = (UnityEngine_Camera_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
        if ( !cachedCamera )
          goto LABEL_38;
        v11 = (UnityEngine_Transform_o *)cachedCamera;
        parent = (UnityEngine_Object_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)cachedCamera, 0);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v13 = UnityEngine_Object__op_Inequality(parent, 0, 0);
        cachedCamera = (UnityEngine_Camera_o *)this;
        if ( v13 )
        {
          cachedCamera = (UnityEngine_Camera_o *)UnityEngine_Transform__get_parent(v11, 0);
          if ( !cachedCamera )
            goto LABEL_38;
        }
      }
      v14 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)cachedCamera, 0);
      v17 = UICamera_TypeInfo;
      v18 = v14;
      if ( !UICamera_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
        v17 = UICamera_TypeInfo;
      }
      static_fields = v17->static_fields;
      static_fields->fallThrough = v18;
      sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->fallThrough, (int32_t)v18, v15, v16);
    }
    cachedCamera = UICamera__get_cachedCamera(this, v8);
    if ( cachedCamera )
    {
      UnityEngine_Camera__set_eventMask(cachedCamera, 0, 0);
      goto LABEL_33;
    }
LABEL_38:
    sub_1C372B4(cachedCamera);
  }
LABEL_33:
  if ( UICamera__get_handlesEvents(this, v5) )
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

  if ( (byte_4C474C3 & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_Component_GetComponent_Camera___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C474C3 = 1;
  }
  mCam = (UnityEngine_Object_o *)this->fields.mCam;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(mCam, 0, 0) )
  {
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)this,
                         (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_Camera___);
    this->fields.mCam = (struct UnityEngine_Camera_o *)Component_object;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.mCam, (int32_t)Component_object, v5, v6);
  }
  return this->fields.mCam;
}


UnityEngine_Ray_o *UICamera__get_currentRay(UnityEngine_Ray_o *__return_ptr retstr, const MethodInfo *method)
{
  UICamera_c *v3; // x0
  UnityEngine_Object_o *currentCamera; // x20
  UnityEngine_Ray_o *result; // x0
  struct UICamera_StaticFields *static_fields; // x9
  struct UICamera_MouseOrTouch_o *currentTouch; // x8
  UnityEngine_Camera_o *v8; // x0
  __int128 v9; // q0
  UnityEngine_Ray_o v10; // [xsp+8h] [xbp-38h] BYREF
  UnityEngine_Vector3_o v11; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C474BF & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&UICamera_TypeInfo);
    byte_4C474BF = 1;
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
      || (v8 = static_fields->currentCamera) == 0 )
    {
      sub_1C372B4(v8);
    }
    v11.fields.x = currentTouch->fields.pos.fields.x;
    v11.fields.y = currentTouch->fields.pos.fields.y;
    v11.fields.z = 0.0;
    result = UnityEngine_Camera__ScreenPointToRay_71073508(&v10, v8, v11, 0);
    v9 = *(_OWORD *)&v10.fields.m_Origin.fields.x;
    *(_QWORD *)&retstr->fields.m_Direction.fields.y = *(_QWORD *)&v10.fields.m_Direction.fields.y;
    *(_OWORD *)&retstr->fields.m_Origin.fields.x = v9;
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
  UICamera_c *v1; // x0
  UICamera_c *mTouches; // x0
  int v3; // w22
  _BOOL8 v4; // x0
  Il2CppClass *klass; // x19
  unsigned int i; // w20
  struct UICamera_StaticFields *static_fields; // x8
  struct UICamera_MouseOrTouch_array *mMouse; // x9
  int max_length; // w19
  struct UICamera_MouseOrTouch_array *v10; // x8
  UICamera_MouseOrTouch_o *v11; // x8
  UnityEngine_Object_o *dragged; // x19
  struct UICamera_MouseOrTouch_o *controller; // x8
  UnityEngine_Object_o *v14; // x19
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v16; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v17; // [xsp+30h] [xbp-70h] BYREF

  if ( (byte_4C474C9 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__UICamera_MouseOrTouch__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_Enumerator_int__UICamera_MouseOrTouch__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_Enumerator_int__UICamera_MouseOrTouch__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_Enumerator_int__UICamera_MouseOrTouch__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_KeyValuePair_int__UICamera_MouseOrTouch__get_Value__);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&UICamera_TypeInfo);
    byte_4C474C9 = 1;
  }
  v1 = UICamera_TypeInfo;
  memset(&v17, 0, sizeof(v17));
  if ( !UICamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    v1 = UICamera_TypeInfo;
  }
  mTouches = (UICamera_c *)v1->static_fields->mTouches;
  if ( !mTouches )
    goto LABEL_29;
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v16,
    (System_Collections_Generic_Dictionary_int__object__o *)mTouches,
    (const MethodInfo_33FA9BC *)Method_System_Collections_Generic_Dictionary_int__UICamera_MouseOrTouch__GetEnumerator__);
  v3 = 0;
  v17 = v16;
  while ( 1 )
  {
    v4 = System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
           &v17,
           (const MethodInfo_35513F8 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__UICamera_MouseOrTouch__MoveNext__);
    if ( !v4 )
      break;
    if ( !v17.fields._current.fields.value )
      sub_1C372B4(v4);
    klass = v17.fields._current.fields.value[5].klass;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v3 += UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)klass, 0, 0);
  }
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v17,
    (const MethodInfo_355151C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__UICamera_MouseOrTouch__Dispose__);
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
    v10 = static_fields->mMouse;
    if ( !v10 )
      goto LABEL_29;
    if ( i >= LODWORD(v10->max_length) )
      sub_1C372BC(mTouches);
    v11 = v10->m_Items[i];
    if ( !v11 )
      goto LABEL_29;
    dragged = (UnityEngine_Object_o *)v11->fields.dragged;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v3 += UnityEngine_Object__op_Inequality(dragged, 0, 0);
  }
  controller = static_fields->controller;
  if ( !controller )
LABEL_29:
    sub_1C372B4(mTouches);
  v14 = (UnityEngine_Object_o *)controller->fields.dragged;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  return v3 + UnityEngine_Object__op_Inequality(v14, 0, 0);
}


UICamera_o *UICamera__get_eventHandler(const MethodInfo *method)
{
  unsigned __int64 i; // x21
  UICamera_c *v2; // x0
  struct BetterList_UICamera__o *list; // x8
  struct UICamera_array *buffer; // x8
  UnityEngine_Object_o *v5; // x19
  UnityEngine_GameObject_o *gameObject; // x20

  if ( (byte_4C474CB & 1) == 0 )
  {
    sub_1C37058(&NGUITools_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&UICamera_TypeInfo);
    byte_4C474CB = 1;
  }
  for ( i = 0; ; ++i )
  {
    v2 = UICamera_TypeInfo;
    if ( !UICamera_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
      v2 = UICamera_TypeInfo;
    }
    list = v2->static_fields->list;
    if ( !list )
LABEL_23:
      sub_1C372B4(v2);
    if ( (__int64)i >= list->fields.size )
      break;
    if ( !v2->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v2);
      list = UICamera_TypeInfo->static_fields->list;
      if ( !list )
        goto LABEL_23;
    }
    buffer = list->fields.buffer;
    if ( !buffer )
      goto LABEL_23;
    if ( i >= LODWORD(buffer->max_length) )
      sub_1C372BC(v2);
    v5 = (UnityEngine_Object_o *)buffer->m_Items[i];
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v2 = (UICamera_c *)UnityEngine_Object__op_Equality(v5, 0, 0);
    if ( ((unsigned __int8)v2 & 1) == 0 )
    {
      if ( !v5 )
        goto LABEL_23;
      if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)v5, 0) )
      {
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v5, 0);
        if ( !NGUITools_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
        if ( NGUITools__GetActive_49345096(gameObject, 0) )
          return (UICamera_o *)v5;
      }
    }
  }
  return 0;
}


UnityEngine_GameObject_o *UICamera__get_genericEventHandler(const MethodInfo *method)
{
  UICamera_c *v1; // x0

  if ( (byte_4C474C0 & 1) == 0 )
  {
    sub_1C37058(&UICamera_TypeInfo);
    byte_4C474C0 = 1;
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

  if ( (byte_4C474C2 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&UICamera_TypeInfo);
    byte_4C474C2 = 1;
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

  if ( (byte_4C474C4 & 1) == 0 )
  {
    sub_1C37058(&Method_NGUITools_FindInParents_UIRoot___);
    sub_1C37058(&NGUITools_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&UICamera_TypeInfo);
    byte_4C474C4 = 1;
  }
  if ( UICamera_TypeInfo->_2.cctor_finished )
  {
    static_fields = UICamera_TypeInfo->static_fields;
    if ( static_fields->currentTouch )
    {
LABEL_5:
      currentTouch = static_fields->currentTouch;
      if ( !currentTouch )
        sub_1C372B4(0);
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
  v13 = NGUITools__FindInParents_object_(v12, (const MethodInfo_3171F1C *)Method_NGUITools_FindInParents_UIRoot___);
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

  if ( (byte_4C474CA & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&UICamera_TypeInfo);
    byte_4C474CA = 1;
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
    sub_1C372B4(v3);
  return UICamera__get_cachedCamera((UICamera_o *)eventHandler, v4);
}


UnityEngine_GameObject_o *UICamera__get_selectedObject(const MethodInfo *method)
{
  UICamera_c *v1; // x0
  UnityEngine_Object_o *mCurrentSelection; // x19
  bool v3; // w8
  UnityEngine_GameObject_o *result; // x0
  UICamera_c *v5; // x0

  if ( (byte_4C474C5 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&UICamera_TypeInfo);
    byte_4C474C5 = 1;
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
  UICamera_c *v1; // x0
  UICamera_c *mTouches; // x0
  int v3; // w22
  _BOOL8 v4; // x0
  UnityEngine_Object_o *monitor; // x19
  unsigned int i; // w20
  struct UICamera_StaticFields *static_fields; // x8
  struct UICamera_MouseOrTouch_array *mMouse; // x9
  int max_length; // w19
  struct UICamera_MouseOrTouch_array *v10; // x8
  UICamera_MouseOrTouch_o *v11; // x8
  UnityEngine_Object_o *pressed; // x19
  struct UICamera_MouseOrTouch_o *controller; // x8
  UnityEngine_Object_o *v14; // x19
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v16; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v17; // [xsp+30h] [xbp-70h] BYREF

  if ( (byte_4C474C8 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__UICamera_MouseOrTouch__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_Enumerator_int__UICamera_MouseOrTouch__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_Enumerator_int__UICamera_MouseOrTouch__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_Enumerator_int__UICamera_MouseOrTouch__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_KeyValuePair_int__UICamera_MouseOrTouch__get_Value__);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&UICamera_TypeInfo);
    byte_4C474C8 = 1;
  }
  v1 = UICamera_TypeInfo;
  memset(&v17, 0, sizeof(v17));
  if ( !UICamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    v1 = UICamera_TypeInfo;
  }
  mTouches = (UICamera_c *)v1->static_fields->mTouches;
  if ( !mTouches )
    goto LABEL_29;
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v16,
    (System_Collections_Generic_Dictionary_int__object__o *)mTouches,
    (const MethodInfo_33FA9BC *)Method_System_Collections_Generic_Dictionary_int__UICamera_MouseOrTouch__GetEnumerator__);
  v3 = 0;
  v17 = v16;
  while ( 1 )
  {
    v4 = System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
           &v17,
           (const MethodInfo_35513F8 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__UICamera_MouseOrTouch__MoveNext__);
    if ( !v4 )
      break;
    if ( !v17.fields._current.fields.value )
      sub_1C372B4(v4);
    monitor = (UnityEngine_Object_o *)v17.fields._current.fields.value[4].monitor;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v3 += UnityEngine_Object__op_Inequality(monitor, 0, 0);
  }
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v17,
    (const MethodInfo_355151C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__UICamera_MouseOrTouch__Dispose__);
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
    v10 = static_fields->mMouse;
    if ( !v10 )
      goto LABEL_29;
    if ( i >= LODWORD(v10->max_length) )
      sub_1C372BC(mTouches);
    v11 = v10->m_Items[i];
    if ( !v11 )
      goto LABEL_29;
    pressed = (UnityEngine_Object_o *)v11->fields.pressed;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v3 += UnityEngine_Object__op_Inequality(pressed, 0, 0);
  }
  controller = static_fields->controller;
  if ( !controller )
LABEL_29:
    sub_1C372B4(mTouches);
  v14 = (UnityEngine_Object_o *)controller->fields.pressed;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  return v3 + UnityEngine_Object__op_Inequality(v14, 0, 0);
}


void UICamera__set_genericEventHandler(UnityEngine_GameObject_o *value, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  UICamera_c *v5; // x0
  struct UICamera_StaticFields *static_fields; // x0

  if ( (byte_4C474C1 & 1) == 0 )
  {
    sub_1C37058(&UICamera_TypeInfo);
    byte_4C474C1 = 1;
  }
  v5 = UICamera_TypeInfo;
  if ( !UICamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    v5 = UICamera_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->mGenericHandler = value;
  sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->mGenericHandler, (int32_t)value, v2, v3);
}


void UICamera__set_selectedObject(UnityEngine_GameObject_o *value, const MethodInfo *method)
{
  UICamera_c *v3; // x0
  UnityEngine_Object_o *mCurrentSelection; // x20
  __int64 v5; // x2
  const MethodInfo *v6; // x3
  __int64 v7; // x4
  __int64 v8; // x5
  __int64 v9; // x6
  __int64 v10; // x7
  void *selectedObject; // x0
  struct UICamera_StaticFields *static_fields; // x8
  struct UICamera_MouseOrTouch_o *currentTouch; // x22
  struct UICamera_MouseOrTouch_array *mMouse; // x9
  struct UICamera_MouseOrTouch_o *v15; // x1
  __int64 v16; // x8
  struct UICamera_BoolDelegate_o *onSelect; // x20
  const MethodInfo *v18; // x0
  UnityEngine_GameObject_o *v19; // x20
  Il2CppObject *v20; // x0
  const MethodInfo *v21; // x3
  CGThumbnailListItem_o *p_mCurrentSelection; // x0
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  UnityEngine_Object_o *v25; // x19
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  UICamera_c *v28; // x0
  UnityEngine_Object_o *v29; // x19
  bool v30; // w0
  UICamera_c *v31; // x8
  bool v32; // w19
  struct UICamera_StaticFields *v33; // x8
  int32_t layer; // w0
  const MethodInfo *v35; // x1
  UICamera_o *CameraForLayer; // x0
  UICamera_o *v37; // x19
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  UICamera_c *v40; // x0
  struct UICamera_StaticFields *v41; // x0
  const MethodInfo *v42; // x1
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

  if ( (byte_4C474C6 & 1) == 0 )
  {
    sub_1C37058(&Method_BetterList_UICamera__get_Item__);
    sub_1C37058(&bool_TypeInfo);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_UIInput___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&UICamera_TypeInfo);
    sub_1C37058(&StringLiteral_9957/*"OnSelect"*/);
    byte_4C474C6 = 1;
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
        sub_1C372BC(selectedObject);
      v15 = mMouse->m_Items[0];
      static_fields->currentTouch = v15;
      sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->currentTouch, (int32_t)v15, v5, v6);
      selectedObject = UICamera_TypeInfo;
      UICamera_TypeInfo->static_fields->currentScheme = 0;
    }
    if ( !*((_DWORD *)selectedObject + 56) )
    {
      j_il2cpp_runtime_class_init_0(selectedObject);
      selectedObject = UICamera_TypeInfo;
    }
    v16 = *((_QWORD *)selectedObject + 23);
    onSelect = *(struct UICamera_BoolDelegate_o **)(v16 + 224);
    *(_BYTE *)(v16 + 168) = 0;
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
        selectedObject = UICamera__get_selectedObject(v18);
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
    v19 = *(UnityEngine_GameObject_o **)(*((_QWORD *)selectedObject + 23) + 312LL);
    v72[0] = 0;
    v20 = (Il2CppObject *)j_il2cpp_value_box_0(bool_TypeInfo, v72, v5, v6, v7, v8, v9, v10);
    UICamera__Notify(v19, (System_String_o *)StringLiteral_9957/*"OnSelect"*/, v20, v21);
    p_mCurrentSelection = (CGThumbnailListItem_o *)&UICamera_TypeInfo->static_fields->mCurrentSelection;
    p_mCurrentSelection->klass = (CGThumbnailListItem_c *)value;
    sub_1C36FFC(p_mCurrentSelection, (int32_t)value, v23, v24);
    v25 = (UnityEngine_Object_o *)UICamera_TypeInfo->static_fields->mCurrentSelection;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(v25, 0, 0) )
      goto LABEL_67;
    if ( !currentTouch )
    {
      v28 = UICamera_TypeInfo;
      if ( !UICamera_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
        v28 = UICamera_TypeInfo;
      }
      v29 = (UnityEngine_Object_o *)v28->static_fields->mCurrentSelection;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v30 = UnityEngine_Object__op_Inequality(v29, 0, 0);
      v31 = UICamera_TypeInfo;
      v32 = v30;
      if ( !UICamera_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
        v31 = UICamera_TypeInfo;
      }
      v33 = v31->static_fields;
      if ( v32 )
      {
        selectedObject = v33->mCurrentSelection;
        if ( !selectedObject )
          goto LABEL_72;
        layer = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)selectedObject, 0);
        CameraForLayer = UICamera__FindCameraForLayer(layer, v35);
      }
      else
      {
        selectedObject = v33->list;
        if ( !v33->list )
          goto LABEL_72;
        CameraForLayer = (UICamera_o *)BetterList_object___get_Item(
                                         (BetterList_T__o *)selectedObject,
                                         0,
                                         (const MethodInfo_3319DC0 *)Method_BetterList_UICamera__get_Item__);
      }
      v37 = CameraForLayer;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v37, 0, 0) )
      {
        v40 = UICamera_TypeInfo;
        if ( !UICamera_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
          v40 = UICamera_TypeInfo;
        }
        v41 = v40->static_fields;
        v41->current = v37;
        sub_1C36FFC((CGThumbnailListItem_o *)&v41->current, (int32_t)v37, v38, v39);
        if ( !v37 )
          goto LABEL_72;
        cachedCamera = UICamera__get_cachedCamera(v37, v42);
        v44 = UICamera_TypeInfo->static_fields;
        v44->currentCamera = cachedCamera;
        sub_1C36FFC((CGThumbnailListItem_o *)&v44->currentCamera, (int32_t)cachedCamera, v45, v46);
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
                             (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_UIInput___);
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
          sub_1C36FFC((CGThumbnailListItem_o *)&v64->current, 0, v26, v27);
          v65 = UICamera_TypeInfo->static_fields;
          v65->currentCamera = 0;
          sub_1C36FFC((CGThumbnailListItem_o *)&v65->currentCamera, 0, v66, v67);
          v68 = UICamera_TypeInfo->static_fields;
          v68->currentTouch = 0;
          sub_1C36FFC((CGThumbnailListItem_o *)&v68->currentTouch, 0, v69, v70);
          UICamera_TypeInfo->static_fields->currentTouchID = -100;
        }
        return;
      }
    }
LABEL_72:
    sub_1C372B4(selectedObject);
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
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C37118(method) & 1) == 0 )
  {
    if ( v8 == 1 )
    {
      v9 = sub_1A81AE0;
      goto LABEL_6;
    }
    if ( !object )
    {
      v11 = sub_1C372D0(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C37180(v11, 0);
    }
LABEL_8:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_9;
  }
  if ( v8 != 2 )
    goto LABEL_8;
  v9 = sub_1A81B08;
LABEL_6:
  this->fields.invoke_impl = (intptr_t)v9;
LABEL_9:
  this->fields.extra_arg = (intptr_t)sub_1A81A88;
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
  if ( (byte_4C474EE & 1) == 0 )
  {
    sub_1C37058(&bool_TypeInfo);
    byte_4C474EE = 1;
  }
  v13[2] = 0;
  v13[0] = go;
  v13[1] = j_il2cpp_value_box_0(bool_TypeInfo, v14, state, callback, object, method, v6, v7);
  return (System_IAsyncResult_o *)sub_1C3700C(this, v13, callback, object);
}


void UICamera_BoolDelegate__EndInvoke(
        UICamera_BoolDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C37010(result, 0, method);
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
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C37118(method) & 1) == 0 )
  {
    if ( v8 == 1 )
    {
      v9 = sub_1A81B78;
      goto LABEL_6;
    }
    if ( !object )
    {
      v11 = sub_1C372D0(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C37180(v11, 0);
    }
LABEL_8:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_9;
  }
  if ( v8 != 2 )
    goto LABEL_8;
  v9 = sub_1A81B98;
LABEL_6:
  this->fields.invoke_impl = (intptr_t)v9;
LABEL_9:
  this->fields.extra_arg = (intptr_t)sub_1A81B20;
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
  if ( (byte_4C474EF & 1) == 0 )
  {
    sub_1C37058(&float_TypeInfo);
    byte_4C474EF = 1;
  }
  v14[2] = 0;
  v14[0] = go;
  v14[1] = j_il2cpp_value_box_0(float_TypeInfo, &v15, callback, object, method, v6, v7, v8);
  return (System_IAsyncResult_o *)sub_1C3700C(this, v14, callback, object);
}


void UICamera_FloatDelegate__EndInvoke(
        UICamera_FloatDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C37010(result, 0, method);
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
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C37118(method) & 1) != 0 )
  {
    if ( v8 == 1 )
    {
      v9 = sub_1A818AC;
LABEL_8:
      this->fields.invoke_impl = (intptr_t)v9;
      goto LABEL_9;
    }
  }
  else
  {
    if ( !v8 )
    {
      v9 = sub_1A8188C;
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
  this->fields.extra_arg = (intptr_t)sub_1A8183C;
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
  return (System_IAsyncResult_o *)sub_1C3700C(this, &v6, callback, object);
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

  v3 = sub_1C37010(result, 0, method);
  if ( !v3 )
    sub_1C372B4(0);
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
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C37118(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C372D0(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C37180(v10, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1A8180C;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A817B8;
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
  if ( (byte_4C474EC & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_KeyCode_TypeInfo);
    byte_4C474EC = 1;
  }
  v12[1] = 0;
  v12[0] = j_il2cpp_value_box_0(UnityEngine_KeyCode_TypeInfo, &v13, callback, object, method, v5, v6, v7);
  return (System_IAsyncResult_o *)sub_1C3700C(this, v12, callback, object);
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

  v3 = sub_1C37010(result, 0, method);
  if ( !v3 )
    sub_1C372B4(0);
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
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C37118(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C372D0(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C37180(v10, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1A81E38;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A81DE8;
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
  if ( (byte_4C474F2 & 1) == 0 )
  {
    sub_1C37058(&int_TypeInfo);
    byte_4C474F2 = 1;
  }
  v12[1] = 0;
  v12[0] = j_il2cpp_value_box_0(int_TypeInfo, &v13, callback, object, method, v5, v6, v7);
  return (System_IAsyncResult_o *)sub_1C3700C(this, v12, callback, object);
}


UICamera_Touch_o *UICamera_GetTouchCallback__EndInvoke(
        UICamera_GetTouchCallback_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  return (UICamera_Touch_o *)sub_1C37010(result, 0, method);
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
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C37118(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C372D0(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C37180(v10, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1A81DD4;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A81D8C;
}


System_IAsyncResult_o *UICamera_GetTouchCountCallback__BeginInvoke(
        UICamera_GetTouchCountCallback_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0;
  return (System_IAsyncResult_o *)sub_1C3700C(this, &v5, callback, object);
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

  v3 = sub_1C37010(result, 0, method);
  if ( !v3 )
    sub_1C372B4(0);
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
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C37118(method) & 1) == 0 )
  {
    if ( v8 == 1 )
    {
      v9 = sub_1A81D20;
      goto LABEL_6;
    }
    if ( !object )
    {
      v11 = sub_1C372D0(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C37180(v11, 0);
    }
LABEL_8:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_9;
  }
  if ( v8 != 2 )
    goto LABEL_8;
  v9 = sub_1A81D44;
LABEL_6:
  this->fields.invoke_impl = (intptr_t)v9;
LABEL_9:
  this->fields.extra_arg = (intptr_t)sub_1A81CC8;
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
  if ( (byte_4C474F1 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_KeyCode_TypeInfo);
    byte_4C474F1 = 1;
  }
  v13[2] = 0;
  v13[0] = go;
  v13[1] = j_il2cpp_value_box_0(UnityEngine_KeyCode_TypeInfo, &v14, *(_QWORD *)&key, callback, object, method, v6, v7);
  return (System_IAsyncResult_o *)sub_1C3700C(this, v13, callback, object);
}


void UICamera_KeyCodeDelegate__EndInvoke(
        UICamera_KeyCodeDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C37010(result, 0, method);
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

  if ( (byte_4C474EB & 1) == 0 )
  {
    sub_1C37058(&Method_NGUITools_FindInParents_UIRoot___);
    sub_1C37058(&NGUITools_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&UICamera_TypeInfo);
    byte_4C474EB = 1;
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
  v8 = NGUITools__FindInParents_object_(v7, (const MethodInfo_3171F1C *)Method_NGUITools_FindInParents_UIRoot___);
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
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C37118(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C372D0(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C37180(v10, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1A819FC;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A819A4;
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
  if ( (byte_4C474ED & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Vector2_TypeInfo);
    byte_4C474ED = 1;
  }
  v13[1] = 0;
  v13[0] = j_il2cpp_value_box_0(UnityEngine_Vector2_TypeInfo, &v14, object, method, v5, v6, v7, v8);
  return (System_IAsyncResult_o *)sub_1C3700C(this, v13, callback, object);
}


void UICamera_MoveDelegate__EndInvoke(
        UICamera_MoveDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C37010(result, 0, method);
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
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C37118(method) & 1) == 0 )
  {
    if ( v8 == 1 )
    {
      v9 = sub_1A81C90;
      goto LABEL_6;
    }
    if ( !object )
    {
      v11 = sub_1C372D0(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C37180(v11, 0);
    }
LABEL_8:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_9;
  }
  if ( v8 != 2 )
    goto LABEL_8;
  v9 = sub_1A81CB4;
LABEL_6:
  this->fields.invoke_impl = (intptr_t)v9;
LABEL_9:
  this->fields.extra_arg = (intptr_t)sub_1A81C38;
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
  return (System_IAsyncResult_o *)sub_1C3700C(this, v7, callback, object);
}


void UICamera_ObjectDelegate__EndInvoke(
        UICamera_ObjectDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C37010(result, 0, method);
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
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C37118(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C372D0(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C37180(v10, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1A81990;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A81950;
}


System_IAsyncResult_o *UICamera_OnCustomInput__BeginInvoke(
        UICamera_OnCustomInput_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0;
  return (System_IAsyncResult_o *)sub_1C3700C(this, &v5, callback, object);
}


void UICamera_OnCustomInput__EndInvoke(
        UICamera_OnCustomInput_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C37010(result, 0, method);
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
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C37118(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C372D0(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C37180(v10, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1A8193C;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A818FC;
}


System_IAsyncResult_o *UICamera_OnScreenResize__BeginInvoke(
        UICamera_OnScreenResize_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0;
  return (System_IAsyncResult_o *)sub_1C3700C(this, &v5, callback, object);
}


void UICamera_OnScreenResize__EndInvoke(
        UICamera_OnScreenResize_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C37010(result, 0, method);
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
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C37118(method) & 1) == 0 )
  {
    if ( v8 == 1 )
    {
      v9 = sub_1A81C08;
      goto LABEL_6;
    }
    if ( !object )
    {
      v11 = sub_1C372D0(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C37180(v11, 0);
    }
LABEL_8:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_9;
  }
  if ( v8 != 2 )
    goto LABEL_8;
  v9 = sub_1A81C28;
LABEL_6:
  this->fields.invoke_impl = (intptr_t)v9;
LABEL_9:
  this->fields.extra_arg = (intptr_t)sub_1A81BA8;
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
  if ( (byte_4C474F0 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Vector2_TypeInfo);
    byte_4C474F0 = 1;
  }
  v14[2] = 0;
  v14[0] = go;
  v14[1] = j_il2cpp_value_box_0(UnityEngine_Vector2_TypeInfo, &v15, callback, object, method, v6, v7, v8);
  return (System_IAsyncResult_o *)sub_1C3700C(this, v14, callback, object);
}


void UICamera_VectorDelegate__EndInvoke(
        UICamera_VectorDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C37010(result, 0, method);
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
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C37118(method) & 1) != 0 )
  {
    if ( v8 == 1 )
    {
      v9 = sub_1A81A78;
LABEL_8:
      this->fields.invoke_impl = (intptr_t)v9;
      goto LABEL_9;
    }
  }
  else
  {
    if ( !v8 )
    {
      v9 = sub_1A81A58;
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
  this->fields.extra_arg = (intptr_t)sub_1A81A10;
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
  return (System_IAsyncResult_o *)sub_1C3700C(this, &v6, callback, object);
}


void UICamera_VoidDelegate__EndInvoke(
        UICamera_VoidDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C37010(result, 0, method);
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

  if ( (byte_4C474F3 & 1) == 0 )
  {
    sub_1C37058(&UICamera___c_TypeInfo);
    byte_4C474F3 = 1;
  }
  v1 = (Il2CppObject *)sub_1C372A4(UICamera___c_TypeInfo);
  System_Object___ctor(v1, 0);
  UICamera___c_TypeInfo->static_fields->__9 = (struct UICamera___c_o *)v1;
  sub_1C36FFC((CGThumbnailListItem_o *)UICamera___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
  return System_Int32__CompareTo_65071444((int32_t)r2, r1->fields.depth, 0);
}


int32_t UICamera___c___Raycast_b__125_1(
        UICamera___c_o *this,
        UICamera_DepthEntry_o *r1,
        UICamera_DepthEntry_o *r2,
        const MethodInfo *method)
{
  return System_Int32__CompareTo_65071444((int32_t)r2, r1->fields.depth, 0);
}