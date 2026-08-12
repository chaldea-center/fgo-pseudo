void UICamera___cctor(const MethodInfo *method)
{
  BetterList_T__o *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  UICamera_GetKeyStateFunc_o *v8; // x19
  const MethodInfo *v9; // x3
  struct UICamera_StaticFields *static_fields; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  UICamera_GetKeyStateFunc_o *v17; // x19
  const MethodInfo *v18; // x3
  struct UICamera_StaticFields *v19; // x0
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  UICamera_GetKeyStateFunc_o *v26; // x19
  const MethodInfo *v27; // x3
  struct UICamera_StaticFields *v28; // x0
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7
  UICamera_GetAxisFunc_o *v35; // x19
  const MethodInfo *v36; // x3
  struct UICamera_StaticFields *v37; // x0
  System_String_o *v38; // x2
  System_String_o *v39; // x3
  int32_t v40; // w4
  int32_t v41; // w5
  bool v42; // w6
  bool v43; // w7
  System_String_o *v44; // x2
  System_String_o *v45; // x3
  int32_t v46; // w4
  int32_t v47; // w5
  bool v48; // w6
  bool v49; // w7
  UICamera_c *v50; // x8
  int v51; // w10
  struct UICamera_StaticFields *v52; // x9
  int v53; // w10
  struct UICamera_StaticFields *v54; // x10
  struct UnityEngine_Vector3_StaticFields *v55; // x9
  float z; // s1
  struct UICamera_StaticFields *v57; // x0
  struct UICamera_StaticFields *v58; // x0
  System_String_o *v59; // x2
  System_String_o *v60; // x3
  int32_t v61; // w4
  int32_t v62; // w5
  bool v63; // w6
  bool v64; // w7
  struct UICamera_StaticFields *v65; // x0
  System_String_o *v66; // x2
  System_String_o *v67; // x3
  int32_t v68; // w4
  int32_t v69; // w5
  bool v70; // w6
  bool v71; // w7
  struct UICamera_StaticFields *v72; // x8
  System_String_o *v73; // x2
  System_String_o *v74; // x3
  int32_t v75; // w4
  int32_t v76; // w5
  bool v77; // w6
  bool v78; // w7
  __int64 v79; // x19
  __int64 v80; // x20
  __int64 v81; // x0
  __int64 v82; // x1
  __int64 v83; // x0
  __int64 v84; // x1
  System_String_o *v85; // x2
  System_String_o *v86; // x3
  int32_t v87; // w4
  int32_t v88; // w5
  bool v89; // w6
  bool v90; // w7
  __int64 v91; // x20
  System_String_o *v92; // x2
  System_String_o *v93; // x3
  int32_t v94; // w4
  int32_t v95; // w5
  bool v96; // w6
  bool v97; // w7
  __int64 v98; // x20
  System_String_o *v99; // x2
  System_String_o *v100; // x3
  int32_t v101; // w4
  int32_t v102; // w5
  bool v103; // w6
  bool v104; // w7
  MissionNaviTransitionBoardItem_o *p_mMouse; // x0
  System_String_o *v106; // x2
  System_String_o *v107; // x3
  int32_t v108; // w4
  int32_t v109; // w5
  bool v110; // w6
  bool v111; // w7
  __int64 v112; // x19
  MissionNaviTransitionBoardItem_o *p_controller; // x0
  System_String_o *v114; // x2
  System_String_o *v115; // x3
  int32_t v116; // w4
  int32_t v117; // w5
  bool v118; // w6
  bool v119; // w7
  System_Collections_Generic_Dictionary_int__UICamera_MouseOrTouch__c *v120; // x0
  System_Collections_Generic_Dictionary_int__object__o *v121; // x19
  MissionNaviTransitionBoardItem_o *p_mTouches; // x0
  System_String_o *v123; // x2
  System_String_o *v124; // x3
  int32_t v125; // w4
  int32_t v126; // w5
  bool v127; // w6
  bool v128; // w7
  BetterList_UICamera_DepthEntry__c *v129; // x0
  struct UICamera_StaticFields *v130; // x8
  BetterList_UICamera_DepthEntry__o *v131; // x19
  MissionNaviTransitionBoardItem_o *p_mHits; // x0
  System_String_o *v133; // x2
  System_String_o *v134; // x3
  int32_t v135; // w4
  int32_t v136; // w5
  bool v137; // w6
  bool v138; // w7
  __int64 v139; // x1
  int32x2_t v140; // d1
  struct UnityEngine_Vector3_StaticFields *v141; // x8
  float32x2_t v142; // d8
  float v143; // s9
  float32x2_t v144; // d0
  float v145; // s1
  unsigned __int64 v146; // d0
  struct UnityEngine_Vector3_StaticFields *v147; // x8
  UICamera_c *v148; // x8
  struct UICamera_StaticFields *v149; // x9
  struct UICamera_StaticFields *v150; // x8
  __int64 v151; // x0

  if ( (byte_5974F27 & 1) == 0 )
  {
    sub_2213A60(&Method_BetterList_UICamera___ctor__);
    sub_2213A60(&Method_BetterList_UICamera_DepthEntry___ctor__);
    sub_2213A60(&BetterList_UICamera__TypeInfo);
    sub_2213A60(&BetterList_UICamera_DepthEntry__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__UICamera_MouseOrTouch___ctor__);
    sub_2213A60(&System_Collections_Generic_Dictionary_int__UICamera_MouseOrTouch__TypeInfo);
    sub_2213A60(&UICamera_GetAxisFunc_TypeInfo);
    sub_2213A60(&UICamera_GetKeyStateFunc_TypeInfo);
    sub_2213A60(&Method_UnityEngine_Input_GetAxis__);
    sub_2213A60(&Method_UnityEngine_Input_GetKeyDown__);
    sub_2213A60(&Method_UnityEngine_Input_GetKeyUp__);
    sub_2213A60(&Method_UnityEngine_Input_GetKey__);
    sub_2213A60(&UICamera_MouseOrTouch___TypeInfo);
    sub_2213A60(&UICamera_MouseOrTouch_TypeInfo);
    sub_2213A60(&UICamera_TypeInfo);
    byte_5974F27 = 1;
  }
  v1 = (BetterList_T__o *)sub_2213CCC(BetterList_UICamera__TypeInfo);
  BetterList_object____ctor(v1, (const MethodInfo_3E70130 *)Method_BetterList_UICamera___ctor__);
  UICamera_TypeInfo->static_fields->list = (struct BetterList_UICamera__o *)v1;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)UICamera_TypeInfo->static_fields, (int32_t)v1, v2, v3, v4, v5, v6, v7);
  v8 = (UICamera_GetKeyStateFunc_o *)sub_2213CCC(UICamera_GetKeyStateFunc_TypeInfo);
  UICamera_GetKeyStateFunc___ctor(v8, 0, Method_UnityEngine_Input_GetKeyDown__, v9);
  static_fields = UICamera_TypeInfo->static_fields;
  static_fields->GetKeyDown = v8;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&static_fields->GetKeyDown, (int32_t)v8, v11, v12, v13, v14, v15, v16);
  v17 = (UICamera_GetKeyStateFunc_o *)sub_2213CCC(UICamera_GetKeyStateFunc_TypeInfo);
  UICamera_GetKeyStateFunc___ctor(v17, 0, Method_UnityEngine_Input_GetKeyUp__, v18);
  v19 = UICamera_TypeInfo->static_fields;
  v19->GetKeyUp = v17;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v19->GetKeyUp, (int32_t)v17, v20, v21, v22, v23, v24, v25);
  v26 = (UICamera_GetKeyStateFunc_o *)sub_2213CCC(UICamera_GetKeyStateFunc_TypeInfo);
  UICamera_GetKeyStateFunc___ctor(v26, 0, Method_UnityEngine_Input_GetKey__, v27);
  v28 = UICamera_TypeInfo->static_fields;
  v28->GetKey = v26;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v28->GetKey, (int32_t)v26, v29, v30, v31, v32, v33, v34);
  v35 = (UICamera_GetAxisFunc_o *)sub_2213CCC(UICamera_GetAxisFunc_TypeInfo);
  UICamera_GetAxisFunc___ctor(v35, 0, Method_UnityEngine_Input_GetAxis__, v36);
  v37 = UICamera_TypeInfo->static_fields;
  v37->GetAxis = v35;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v37->GetAxis, (int32_t)v35, v38, v39, v40, v41, v42, v43);
  v50 = UICamera_TypeInfo;
  v51 = (unsigned __int8)byte_59699C0;
  v52 = UICamera_TypeInfo->static_fields;
  v52->showTooltips = 1;
  if ( !v51 )
  {
    sub_2213A60(&UnityEngine_Vector2_TypeInfo);
    v50 = UICamera_TypeInfo;
    byte_59699C0 = 1;
    v52 = UICamera_TypeInfo->static_fields;
  }
  v53 = (unsigned __int8)byte_5969AE0;
  v52->lastTouchPosition = UnityEngine_Vector2_TypeInfo->static_fields->zeroVector;
  if ( !v53 )
  {
    sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    v50 = UICamera_TypeInfo;
    byte_5969AE0 = 1;
  }
  v54 = v50->static_fields;
  v55 = UnityEngine_Vector3_TypeInfo->static_fields;
  z = v55->zeroVector.fields.z;
  *(_QWORD *)&v54->lastWorldPosition.fields.x = *(_QWORD *)&v55->zeroVector.fields.x;
  v54->lastWorldPosition.fields.z = z;
  v57 = v50->static_fields;
  v57->current = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v57->current, 0, v44, v45, v46, v47, v48, v49);
  v58 = UICamera_TypeInfo->static_fields;
  v58->currentCamera = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v58->currentCamera, 0, v59, v60, v61, v62, v63, v64);
  v65 = UICamera_TypeInfo->static_fields;
  v65->currentTouch = 0;
  v65 = (struct UICamera_StaticFields *)((char *)v65 + 160);
  v65[-1].GetInputTouchCount = (struct UICamera_GetTouchCountCallback_o *)0xFFFFFF9C00000000LL;
  LODWORD(v65[-1].GetInputTouch) = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)v65, 0, v66, v67, v68, v69, v70, v71);
  v72 = UICamera_TypeInfo->static_fields;
  v72->inputHasFocus = 0;
  v72->mCurrentSelection = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v72->mCurrentSelection, 0, v73, v74, v75, v76, v77, v78);
  v79 = sub_2213B20(UICamera_MouseOrTouch___TypeInfo, 3);
  v80 = sub_2213CCC(UICamera_MouseOrTouch_TypeInfo);
  *(_DWORD *)(v80 + 96) = 1;
  *(_BYTE *)(v80 + 100) = 1;
  System_Object___ctor((Il2CppObject *)v80, 0);
  if ( !v79 )
    sub_2213CDC(v81, v82);
  v83 = sub_2213BB4(v80, *(_QWORD *)(*(_QWORD *)v79 + 64LL));
  if ( !v83 )
    goto LABEL_26;
  if ( !*(_DWORD *)(v79 + 24) )
    goto LABEL_27;
  *(_QWORD *)(v79 + 32) = v80;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v79 + 32), v80, v85, v86, v87, v88, v89, v90);
  v91 = sub_2213CCC(UICamera_MouseOrTouch_TypeInfo);
  *(_DWORD *)(v91 + 96) = 1;
  *(_BYTE *)(v91 + 100) = 1;
  System_Object___ctor((Il2CppObject *)v91, 0);
  v83 = sub_2213BB4(v91, *(_QWORD *)(*(_QWORD *)v79 + 64LL));
  if ( !v83 )
    goto LABEL_26;
  if ( (*(_DWORD *)(v79 + 24) & 0xFFFFFFFE) == 0 )
    goto LABEL_27;
  *(_QWORD *)(v79 + 40) = v91;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v79 + 40), v91, v92, v93, v94, v95, v96, v97);
  v98 = sub_2213CCC(UICamera_MouseOrTouch_TypeInfo);
  *(_DWORD *)(v98 + 96) = 1;
  *(_BYTE *)(v98 + 100) = 1;
  System_Object___ctor((Il2CppObject *)v98, 0);
  v83 = sub_2213BB4(v98, *(_QWORD *)(*(_QWORD *)v79 + 64LL));
  if ( !v83 )
  {
LABEL_26:
    v151 = sub_2213D00(v83, v84);
    sub_2213BA0(v151, 0);
  }
  if ( *(_DWORD *)(v79 + 24) <= 2u )
LABEL_27:
    sub_2213CE4(v83);
  *(_QWORD *)(v79 + 48) = v98;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v79 + 48), v98, v99, v100, v101, v102, v103, v104);
  p_mMouse = (MissionNaviTransitionBoardItem_o *)&UICamera_TypeInfo->static_fields->mMouse;
  p_mMouse->klass = (MissionNaviTransitionBoardItem_c *)v79;
  sub_2213A04(p_mMouse, v79, v106, v107, v108, v109, v110, v111);
  v112 = sub_2213CCC(UICamera_MouseOrTouch_TypeInfo);
  *(_DWORD *)(v112 + 96) = 1;
  *(_BYTE *)(v112 + 100) = 1;
  System_Object___ctor((Il2CppObject *)v112, 0);
  p_controller = (MissionNaviTransitionBoardItem_o *)&UICamera_TypeInfo->static_fields->controller;
  p_controller->klass = (MissionNaviTransitionBoardItem_c *)v112;
  sub_2213A04(p_controller, v112, v114, v115, v116, v117, v118, v119);
  v120 = System_Collections_Generic_Dictionary_int__UICamera_MouseOrTouch__TypeInfo;
  UICamera_TypeInfo->static_fields->mNextEvent = 0.0;
  v121 = (System_Collections_Generic_Dictionary_int__object__o *)sub_2213CCC(v120);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v121,
    (const MethodInfo_3F9BAFC *)Method_System_Collections_Generic_Dictionary_int__UICamera_MouseOrTouch___ctor__);
  p_mTouches = (MissionNaviTransitionBoardItem_o *)&UICamera_TypeInfo->static_fields->mTouches;
  p_mTouches->klass = (MissionNaviTransitionBoardItem_c *)v121;
  sub_2213A04(p_mTouches, (int32_t)v121, v123, v124, v125, v126, v127, v128);
  v129 = BetterList_UICamera_DepthEntry__TypeInfo;
  v130 = UICamera_TypeInfo->static_fields;
  *(_OWORD *)&v130->mHit.fields.depth = 0u;
  *(_OWORD *)&v130->mHit.fields.hit.fields.m_Normal.fields.x = 0u;
  *(_OWORD *)&v130->mHit.fields.hit.fields.m_Distance = 0u;
  *(_OWORD *)&v130->mHit.fields.point.fields.x = 0u;
  v130->mHit.fields.go = 0;
  *(_QWORD *)&v130->mWidth = 0;
  v130->isDragging = 0;
  v131 = (BetterList_UICamera_DepthEntry__o *)sub_2213CCC(v129);
  BetterList_UICamera_DepthEntry____ctor(
    v131,
    (const MethodInfo_3E75C60 *)Method_BetterList_UICamera_DepthEntry___ctor__);
  p_mHits = (MissionNaviTransitionBoardItem_o *)&UICamera_TypeInfo->static_fields->mHits;
  p_mHits->klass = (MissionNaviTransitionBoardItem_c *)v131;
  sub_2213A04(p_mHits, (int32_t)v131, v133, v134, v135, v136, v137, v138);
  if ( !byte_596CDEB )
  {
    sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_596CDEB = 1;
  }
  v141 = UnityEngine_Vector3_TypeInfo->static_fields;
  v142.n64_u64[0] = *(unsigned __int64 *)&v141->backVector.fields.x;
  v143 = v141->backVector.fields.z;
  if ( !byte_5969AE3 )
  {
    sub_2213A60(&System_Math_TypeInfo);
    byte_5969AE3 = 1;
  }
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v139);
  v140.n64_f32[0] = sqrtf((float)(v143 * v143) + vaddv_f32(vmul_f32(v142, v142)));
  if ( v140.n64_f32[0] <= 0.00001 )
  {
    if ( !byte_5969AE0 )
    {
      sub_2213A60(&UnityEngine_Vector3_TypeInfo);
      byte_5969AE0 = 1;
    }
    v147 = UnityEngine_Vector3_TypeInfo->static_fields;
    v146 = *(_QWORD *)&v147->zeroVector.fields.x;
    v145 = v147->zeroVector.fields.z;
  }
  else
  {
    v144.n64_u64[0] = vdup_lane_s32(v140, 0).n64_u64[0];
    v145 = v143 / v140.n64_f32[0];
    v146 = vdiv_f32(v142, v144).n64_u64[0];
  }
  v148 = UICamera_TypeInfo;
  v149 = UICamera_TypeInfo->static_fields;
  *(_QWORD *)&v149->m2DPlane.fields.m_Normal.fields.x = v146;
  v149->m2DPlane.fields.m_Normal.fields.z = v145;
  v149->m2DPlane.fields.m_Distance = 0.0;
  v150 = v148->static_fields;
  v150->mNotifying = 0;
  v150->mUsingTouchEvents = 1;
}


void UICamera___ctor(UICamera_o *this, const MethodInfo *method)
{
  UnityEngine_LayerMask_o v3; // w0
  struct System_String_o *v4; // x1
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  int32_t v11; // w1
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  int32_t v18; // w1
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7

  if ( (byte_5974F26 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_15931/*"Vertical"*/);
    sub_2213A60(&StringLiteral_7663/*"Horizontal"*/);
    sub_2213A60(&StringLiteral_9548/*"Mouse ScrollWheel"*/);
    byte_5974F26 = 1;
  }
  this->fields.eventType = 1;
  v3.fields.m_Mask = UnityEngine_LayerMask__op_Implicit_83439836(-1, 0).fields.m_Mask;
  v4 = (struct System_String_o *)StringLiteral_9548/*"Mouse ScrollWheel"*/;
  this->fields.eventReceiverMask = v3;
  *(_DWORD *)&this->fields.useMouse = 16843009;
  *(_WORD *)&this->fields.useController = 257;
  *(_OWORD *)&this->fields.tooltipDelay = xmmword_E9C570;
  *(_QWORD *)&this->fields.touchClickThreshold = 0xBF80000042200000LL;
  this->fields.scrollAxisName = v4;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.scrollAxisName, (int32_t)v4, v5, v6, v7, v8, v9, v10);
  v11 = StringLiteral_15931/*"Vertical"*/;
  this->fields.verticalAxisName = (struct System_String_o *)StringLiteral_15931/*"Vertical"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.verticalAxisName, v11, v12, v13, v14, v15, v16, v17);
  v18 = StringLiteral_7663/*"Horizontal"*/;
  this->fields.horizontalAxisName = (struct System_String_o *)StringLiteral_7663/*"Horizontal"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.horizontalAxisName, v18, v19, v20, v21, v22, v23, v24);
  this->fields.commandClick = 1;
  *(_OWORD *)&this->fields.submitKey0 = xmmword_E9C580;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void UICamera__Awake(UICamera_o *this, const MethodInfo *method)
{
  int32_t width; // w0
  __int64 v4; // x1
  UICamera_c *v5; // x8
  int32_t v6; // w20
  int32_t height; // w0
  __int64 v8; // x1
  UnityEngine_Application_c *v9; // x8
  int v10; // w10
  __int64 v11; // x1
  UICamera_c *v12; // x0
  struct UICamera_MouseOrTouch_array *mMouse; // x8
  UICamera_MouseOrTouch_o *v14; // x20
  __int64 v15; // x19
  struct UICamera_MouseOrTouch_array *v16; // x9
  UICamera_MouseOrTouch_o *v17; // x10
  struct UnityEngine_Vector2_o *v18; // x9
  struct UICamera_MouseOrTouch_array *v19; // x9
  UICamera_MouseOrTouch_o *v20; // x10
  struct UnityEngine_Vector2_o *v21; // x8
  struct UICamera_StaticFields *static_fields; // x8
  struct UICamera_MouseOrTouch_array *v23; // x9
  struct UnityEngine_Vector2_o *v24; // x9
  unsigned __int64 mousePosition; // kr00_8

  if ( (byte_5974F17 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Application_TypeInfo);
    sub_2213A60(&UICamera_TypeInfo);
    byte_5974F17 = 1;
  }
  width = UnityEngine_Screen__get_width(0);
  v5 = UICamera_TypeInfo;
  v6 = width;
  if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v4);
    v5 = UICamera_TypeInfo;
  }
  v5->static_fields->mWidth = v6;
  height = UnityEngine_Screen__get_height(0);
  v9 = UnityEngine_Application_TypeInfo;
  v10 = *(&UnityEngine_Application_TypeInfo->_2.cctor_finished + 1);
  UICamera_TypeInfo->static_fields->mHeight = height;
  if ( !v10 )
    j_il2cpp_runtime_class_init_0(v9, v8);
  if ( UnityEngine_Application__get_platform(0) == 11 )
    goto LABEL_11;
  if ( !*(&UnityEngine_Application_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo, v11);
  if ( UnityEngine_Application__get_platform(0) == 8 )
  {
LABEL_11:
    *(_WORD *)&this->fields.useKeyboard = 0;
    *(_WORD *)&this->fields.useMouse = 256;
  }
  v12 = UICamera_TypeInfo;
  if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v11);
    v12 = UICamera_TypeInfo;
  }
  mMouse = v12->static_fields->mMouse;
  if ( !mMouse )
    goto LABEL_35;
  if ( !LODWORD(mMouse->max_length) )
    goto LABEL_36;
  v14 = mMouse->m_Items[0];
  mousePosition = (unsigned __int64)UnityEngine_Input__get_mousePosition(0);
  if ( !v14 )
    goto LABEL_35;
  v12 = UICamera_TypeInfo;
  v15 = 5;
  v14->fields.pos = (struct UnityEngine_Vector2_o)mousePosition;
  do
  {
    if ( !*(&v12->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v12, v11);
      v12 = UICamera_TypeInfo;
    }
    v16 = v12->static_fields->mMouse;
    if ( !v16 )
      goto LABEL_35;
    if ( (unsigned int)(v15 - 4) >= LODWORD(v16->max_length) )
      goto LABEL_36;
    v17 = v16->m_Items[0];
    if ( !v17 )
      goto LABEL_35;
    v18 = (struct UnityEngine_Vector2_o *)*((_QWORD *)&v16->obj.klass + v15);
    if ( !v18 )
      goto LABEL_35;
    v18[2] = v17->fields.pos;
    v19 = v12->static_fields->mMouse;
    if ( !v19 )
      goto LABEL_35;
    if ( (unsigned int)(v15 - 4) >= LODWORD(v19->max_length) )
      goto LABEL_36;
    v20 = v19->m_Items[0];
    if ( !v20 )
      goto LABEL_35;
    v21 = (struct UnityEngine_Vector2_o *)*((_QWORD *)&v19->obj.klass + v15);
    if ( !v21 )
      goto LABEL_35;
    ++v15;
    v21[3] = v20->fields.pos;
  }
  while ( (_DWORD)v15 != 7 );
  if ( !*(&v12->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v12, v11);
    v12 = UICamera_TypeInfo;
  }
  static_fields = v12->static_fields;
  v23 = static_fields->mMouse;
  if ( !v23 )
LABEL_35:
    sub_2213CDC(v12, v11);
  if ( !LODWORD(v23->max_length) )
LABEL_36:
    sub_2213CE4(v12);
  v24 = (struct UnityEngine_Vector2_o *)v23->m_Items[0];
  if ( !v24 )
    goto LABEL_35;
  static_fields->lastTouchPosition = v24[2];
}


int32_t UICamera__CompareFunc(UICamera_o *a, UICamera_o *b, const MethodInfo *method)
{
  UICamera_o *v3; // x20
  float depth; // s0
  float v6; // s8
  const MethodInfo *v7; // x1
  float v9; // s8
  const MethodInfo *v10; // x1

  if ( !a )
    goto LABEL_12;
  v3 = a;
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
  a = (UICamera_o *)UICamera__get_cachedCamera(v3, v7);
  if ( !a
    || (v9 = UnityEngine_Camera__get_depth((UnityEngine_Camera_o *)a, 0),
        (a = (UICamera_o *)UICamera__get_cachedCamera(b, v10)) == 0) )
  {
LABEL_12:
    sub_2213CDC(a, b);
  }
  if ( v9 <= UnityEngine_Camera__get_depth((UnityEngine_Camera_o *)a, 0) )
    return 0;
  else
    return -1;
}


void UICamera__ExecuteLateUpdate(UICamera_o *this, const MethodInfo *method)
{
  int32_t width; // w19
  int32_t height; // w0
  __int64 v5; // x1
  UICamera_c *v6; // x8
  int32_t v7; // w20
  struct UICamera_StaticFields *static_fields; // x9
  struct UICamera_StaticFields *v9; // x8
  UIRoot_c *v10; // x0
  __int64 v11; // x1
  struct UICamera_OnScreenResize_o *onScreenResize; // x8
  __int64 v13; // x0
  __int64 v14; // x1

  if ( (byte_5974F1C & 1) == 0 )
  {
    sub_2213A60(&UICamera_TypeInfo);
    sub_2213A60(&UIRoot_TypeInfo);
    sub_2213A60(&StringLiteral_15787/*"UpdateAnchors"*/);
    byte_5974F1C = 1;
  }
  if ( UICamera__get_handlesEvents(this, method) )
  {
    width = UnityEngine_Screen__get_width(0);
    height = UnityEngine_Screen__get_height(0);
    v6 = UICamera_TypeInfo;
    v7 = height;
    if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v5);
      v6 = UICamera_TypeInfo;
    }
    static_fields = v6->static_fields;
    if ( width != static_fields->mWidth )
      goto LABEL_22;
    if ( !*(&v6->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v6, v5);
      v6 = UICamera_TypeInfo;
      static_fields = UICamera_TypeInfo->static_fields;
    }
    if ( v7 != static_fields->mHeight )
    {
LABEL_22:
      if ( !*(&v6->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v6, v5);
        v6 = UICamera_TypeInfo;
      }
      v9 = v6->static_fields;
      v10 = UIRoot_TypeInfo;
      v9->mWidth = width;
      v9->mHeight = v7;
      if ( !*(&v10->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(v10, v5);
      UIRoot__Broadcast((System_String_o *)StringLiteral_15787/*"UpdateAnchors"*/, 0);
      onScreenResize = UICamera_TypeInfo->static_fields->onScreenResize;
      if ( onScreenResize )
      {
        if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v11);
          onScreenResize = UICamera_TypeInfo->static_fields->onScreenResize;
          if ( !onScreenResize )
            sub_2213CDC(v13, v14);
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
  __int64 v3; // x1
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  UICamera_c *v10; // x0
  struct UICamera_StaticFields *static_fields; // x0
  const MethodInfo *v12; // x1
  UICamera_c *v13; // x0
  struct UICamera_OnCustomInput_o *onCustomInput; // x8
  char *v15; // x0
  UICamera_c *v16; // x0
  UnityEngine_Object_o *mCurrentSelection; // x20
  int32_t *p_cancelKey0; // x20
  __int64 v19; // x8
  __int64 v20; // x8
  UICamera_c *v21; // x0
  struct UICamera_StaticFields *v22; // x8
  UICamera_c *v23; // x0
  UnityEngine_Object_o *v24; // x20
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  bool v31; // w8
  UICamera_c *v32; // x0
  int v33; // w9
  UnityEngine_Object_o *v34; // x20
  UICamera_c *v35; // x0
  UICamera_c *v36; // x0
  struct UICamera_StaticFields *v37; // x8
  UICamera_c *v38; // x0
  UnityEngine_Object_o *v39; // x20
  UICamera_c *v40; // x0
  UnityEngine_Object_o *mHover; // x20
  __int64 v42; // x8
  float v43; // s0
  float v44; // s8
  UICamera_c *v45; // x0
  struct UICamera_StaticFields *v46; // x9
  struct UICamera_FloatDelegate_o *onScroll; // x8
  struct UICamera_StaticFields *v48; // x8
  UnityEngine_GameObject_o *v49; // x20
  Il2CppObject *v50; // x0
  const MethodInfo *v51; // x3
  UICamera_c *v52; // x0
  float mTooltipTime; // s8
  __int64 v54; // x8
  __int64 v55; // x8
  UICamera_c *v56; // x0
  struct UnityEngine_GameObject_o *v57; // x1
  System_String_o *v58; // x2
  System_String_o *v59; // x3
  int32_t v60; // w4
  int32_t v61; // w5
  bool v62; // w6
  bool v63; // w7
  __int64 v64; // x8
  __int64 v65; // x1
  const MethodInfo *v66; // x2
  UICamera_c *v67; // x0
  struct UICamera_StaticFields *v68; // x0
  float v69; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_5974F1B & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&UICamera_TypeInfo);
    sub_2213A60(&StringLiteral_10356/*"OnScroll"*/);
    byte_5974F1B = 1;
  }
  if ( UICamera__get_handlesEvents(this, method) )
  {
    v10 = UICamera_TypeInfo;
    if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v3);
      v10 = UICamera_TypeInfo;
    }
    static_fields = v10->static_fields;
    static_fields->current = this;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&static_fields->current, (int32_t)this, v4, v5, v6, v7, v8, v9);
    if ( this->fields.useTouch )
    {
      UICamera__ProcessTouches(this, v12);
    }
    else if ( this->fields.useMouse )
    {
      UICamera__ProcessMouse(this, v12);
    }
    v13 = UICamera_TypeInfo;
    if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v12);
      v13 = UICamera_TypeInfo;
    }
    onCustomInput = v13->static_fields->onCustomInput;
    if ( onCustomInput )
    {
      if ( !*(&v13->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v13, v12);
        onCustomInput = UICamera_TypeInfo->static_fields->onCustomInput;
        if ( !onCustomInput )
          goto LABEL_105;
      }
      ((void (__fastcall *)(intptr_t, intptr_t))onCustomInput->fields.invoke_impl)(
        onCustomInput->fields.method_code,
        onCustomInput->fields.method);
    }
    if ( this->fields.useMouse )
    {
      v16 = UICamera_TypeInfo;
      if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v12);
        v16 = UICamera_TypeInfo;
      }
      mCurrentSelection = (UnityEngine_Object_o *)v16->static_fields->mCurrentSelection;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12);
      if ( UnityEngine_Object__op_Inequality(mCurrentSelection, 0, 0) )
      {
        p_cancelKey0 = &this->fields.cancelKey0;
        if ( this->fields.cancelKey0 )
        {
          v15 = (char *)UICamera_TypeInfo;
          if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v12);
            v15 = (char *)UICamera_TypeInfo;
          }
          v19 = *(_QWORD *)(*((_QWORD *)v15 + 23) + 8LL);
          if ( !v19 )
            goto LABEL_105;
          if ( ((*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(v19 + 24))(
                  *(_QWORD *)(v19 + 64),
                  (unsigned int)*p_cancelKey0,
                  *(_QWORD *)(v19 + 40))
              & 1) != 0 )
            goto LABEL_32;
        }
        p_cancelKey0 = &this->fields.cancelKey1;
        if ( this->fields.cancelKey1 )
        {
          v15 = (char *)UICamera_TypeInfo;
          if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v12);
            v15 = (char *)UICamera_TypeInfo;
          }
          v20 = *(_QWORD *)(*((_QWORD *)v15 + 23) + 8LL);
          if ( !v20 )
            goto LABEL_105;
          if ( ((*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(v20 + 24))(
                  *(_QWORD *)(v20 + 64),
                  (unsigned int)*p_cancelKey0,
                  *(_QWORD *)(v20 + 40))
              & 1) != 0 )
          {
LABEL_32:
            v21 = UICamera_TypeInfo;
            if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
            {
              j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v12);
              v21 = UICamera_TypeInfo;
            }
            v22 = v21->static_fields;
            v22->currentScheme = 2;
            v22->currentKey = *p_cancelKey0;
            UICamera__set_selectedObject(0, v12);
          }
        }
      }
    }
    v23 = UICamera_TypeInfo;
    if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v12);
      v23 = UICamera_TypeInfo;
    }
    v24 = (UnityEngine_Object_o *)v23->static_fields->mCurrentSelection;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12);
    v31 = UnityEngine_Object__op_Equality(v24, 0, 0);
    v32 = UICamera_TypeInfo;
    v33 = *(&UICamera_TypeInfo->_2.cctor_finished + 1);
    if ( v31 )
    {
      if ( !v33 )
      {
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v12);
        v32 = UICamera_TypeInfo;
      }
      v32->static_fields->inputHasFocus = 0;
    }
    else
    {
      if ( !v33 )
      {
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v12);
        v32 = UICamera_TypeInfo;
      }
      v34 = (UnityEngine_Object_o *)v32->static_fields->mCurrentSelection;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12);
      if ( !UnityEngine_Object__op_Implicit(v34, 0) )
        goto LABEL_52;
      v35 = UICamera_TypeInfo;
      if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v12);
        v35 = UICamera_TypeInfo;
      }
      v15 = (char *)v35->static_fields->mCurrentSelection;
      if ( !v15 )
        goto LABEL_105;
      if ( !UnityEngine_GameObject__get_activeInHierarchy((UnityEngine_GameObject_o *)v15, 0) )
      {
LABEL_52:
        v36 = UICamera_TypeInfo;
        if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v12);
          v36 = UICamera_TypeInfo;
        }
        v37 = v36->static_fields;
        v37->inputHasFocus = 0;
        v37->mCurrentSelection = 0;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)&v37->mCurrentSelection, 0, v25, v26, v27, v28, v29, v30);
      }
    }
    if ( this->fields.useKeyboard || this->fields.useController )
    {
      v38 = UICamera_TypeInfo;
      if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v12);
        v38 = UICamera_TypeInfo;
      }
      v39 = (UnityEngine_Object_o *)v38->static_fields->mCurrentSelection;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12);
      if ( UnityEngine_Object__op_Inequality(v39, 0, 0) )
        UICamera__ProcessOthers(this, v12);
    }
    if ( !this->fields.useMouse )
      goto LABEL_101;
    v40 = UICamera_TypeInfo;
    if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v12);
      v40 = UICamera_TypeInfo;
    }
    mHover = (UnityEngine_Object_o *)v40->static_fields->mHover;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12);
    if ( !UnityEngine_Object__op_Inequality(mHover, 0, 0) )
      goto LABEL_101;
    if ( !System_String__IsNullOrEmpty(this->fields.scrollAxisName, 0) )
    {
      v15 = (char *)UICamera_TypeInfo;
      if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v12);
        v15 = (char *)UICamera_TypeInfo;
      }
      v42 = *(_QWORD *)(*((_QWORD *)v15 + 23) + 32LL);
      if ( !v42 )
        goto LABEL_105;
      v43 = (*(float (__fastcall **)(_QWORD, struct System_String_o *, _QWORD))(v42 + 24))(
              *(_QWORD *)(v42 + 64),
              this->fields.scrollAxisName,
              *(_QWORD *)(v42 + 40));
      if ( v43 != 0.0 )
      {
        v44 = v43;
        v45 = UICamera_TypeInfo;
        if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v12);
          v45 = UICamera_TypeInfo;
        }
        v46 = v45->static_fields;
        onScroll = v46->onScroll;
        if ( onScroll )
        {
          if ( !*(&v45->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(v45, v12);
            v46 = UICamera_TypeInfo->static_fields;
            onScroll = v46->onScroll;
            if ( !onScroll )
              goto LABEL_105;
          }
          ((void (__fastcall *)(intptr_t, struct UnityEngine_GameObject_o *, intptr_t, float))onScroll->fields.invoke_impl)(
            onScroll->fields.method_code,
            v46->mHover,
            onScroll->fields.method,
            v44);
          v45 = UICamera_TypeInfo;
        }
        if ( !*(&v45->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(v45, v12);
          v45 = UICamera_TypeInfo;
        }
        v48 = v45->static_fields;
        v69 = v44;
        v49 = v48->mHover;
        v50 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984378, &v69);
        UICamera__Notify(v49, (System_String_o *)StringLiteral_10356/*"OnScroll"*/, v50, v51);
      }
    }
    v52 = UICamera_TypeInfo;
    if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v12);
      v52 = UICamera_TypeInfo;
    }
    if ( !v52->static_fields->showTooltips )
      goto LABEL_101;
    mTooltipTime = this->fields.mTooltipTime;
    if ( mTooltipTime == 0.0 )
      goto LABEL_101;
    if ( mTooltipTime >= RealTime__get_time(0) )
    {
      v15 = (char *)UICamera_TypeInfo;
      if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v12);
        v15 = (char *)UICamera_TypeInfo;
      }
      v54 = *(_QWORD *)(*((_QWORD *)v15 + 23) + 24LL);
      if ( !v54 )
        goto LABEL_105;
      if ( ((*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(v54 + 24))(
              *(_QWORD *)(v54 + 64),
              304,
              *(_QWORD *)(v54 + 40))
          & 1) == 0 )
      {
        v15 = (char *)UICamera_TypeInfo;
        if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v12);
          v15 = (char *)UICamera_TypeInfo;
        }
        v55 = *(_QWORD *)(*((_QWORD *)v15 + 23) + 24LL);
        if ( !v55 )
          goto LABEL_105;
        if ( ((*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(v55 + 24))(
                *(_QWORD *)(v55 + 64),
                303,
                *(_QWORD *)(v55 + 40))
            & 1) == 0 )
        {
LABEL_101:
          v67 = UICamera_TypeInfo;
          if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v12);
            v67 = UICamera_TypeInfo;
          }
          v68 = v67->static_fields;
          v68->current = 0;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)&v68->current, 0, v25, v26, v27, v28, v29, v30);
          UICamera_TypeInfo->static_fields->currentTouchID = -100;
          return;
        }
      }
    }
    v56 = UICamera_TypeInfo;
    if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v12);
      v56 = UICamera_TypeInfo;
    }
    v57 = v56->static_fields->mHover;
    this->fields.mTooltip = v57;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.mTooltip, (int32_t)v57, v25, v26, v27, v28, v29, v30);
    v15 = (char *)UICamera_TypeInfo->static_fields;
    v64 = *((_QWORD *)v15 + 40);
    if ( v64 )
    {
      if ( !*(_DWORD *)(v64 + 24) )
        sub_2213CE4(v15);
      v65 = *(_QWORD *)(v64 + 32);
      *((_QWORD *)v15 + 20) = v65;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v15 + 160), v65, v58, v59, v60, v61, v62, v63);
      UICamera_TypeInfo->static_fields->currentTouchID = -1;
      UICamera__ShowTooltip(this, 1, v66);
      goto LABEL_101;
    }
LABEL_105:
    sub_2213CDC(v15, v12);
  }
}


UICamera_o *UICamera__FindCameraForLayer(int32_t layer, const MethodInfo *method)
{
  char v2; // w19
  int v3; // w23
  int32_t i; // w24
  UICamera_c *v5; // x0
  struct BetterList_UICamera__o *list; // x8
  struct UICamera_array *buffer; // x8
  Il2CppClass **v8; // x8
  UICamera_o *v9; // x19
  __int64 v10; // x1
  UnityEngine_Object_o *cachedCamera; // x20

  v2 = layer;
  if ( (byte_5974F0F & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&UICamera_TypeInfo);
    byte_5974F0F = 1;
  }
  v3 = 1 << v2;
  for ( i = 0; ; ++i )
  {
    v5 = UICamera_TypeInfo;
    if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, method);
      v5 = UICamera_TypeInfo;
    }
    list = v5->static_fields->list;
    if ( !list )
LABEL_21:
      sub_2213CDC(v5, method);
    if ( i >= list->fields.size )
      break;
    if ( !*(&v5->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v5, method);
      list = UICamera_TypeInfo->static_fields->list;
      if ( !list )
        goto LABEL_21;
    }
    buffer = list->fields.buffer;
    if ( !buffer )
      goto LABEL_21;
    if ( (unsigned int)i >= LODWORD(buffer->max_length) )
      sub_2213CE4(v5);
    v8 = &buffer->obj.klass + i;
    v9 = (UICamera_o *)v8[4];
    if ( !v9 )
      goto LABEL_21;
    cachedCamera = (UnityEngine_Object_o *)UICamera__get_cachedCamera((UICamera_o *)v8[4], method);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
    v5 = (UICamera_c *)UnityEngine_Object__op_Inequality(cachedCamera, 0, 0);
    if ( ((unsigned __int8)v5 & 1) != 0 )
    {
      if ( !cachedCamera )
        goto LABEL_21;
      if ( (UnityEngine_Camera__get_cullingMask((UnityEngine_Camera_o *)cachedCamera, 0) & v3) != 0 )
        return v9;
    }
  }
  return 0;
}


UnityEngine_Rigidbody_o *UICamera__FindRootRigidbody(UnityEngine_Transform_o *trans, const MethodInfo *method)
{
  _BOOL8 v3; // x0
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *Component_object; // x20
  __int64 v7; // x1
  Il2CppObject *v8; // x20

  if ( (byte_5974F09 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_Rigidbody___);
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_UIPanel___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5974F09 = 1;
  }
  while ( 1 )
  {
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
    v3 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)trans, 0, 0);
    if ( !v3 )
      break;
    if ( !trans )
      sub_2213CDC(v3, v4);
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)trans,
                         (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0) )
      break;
    v8 = UnityEngine_Component__GetComponent_object_(
           (UnityEngine_Component_o *)trans,
           (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_Rigidbody___);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v8, 0, 0) )
      return (UnityEngine_Rigidbody_o *)v8;
    trans = UnityEngine_Transform__get_parent(trans, 0);
  }
  return 0;
}


UnityEngine_Rigidbody2D_o *UICamera__FindRootRigidbody2D(UnityEngine_Transform_o *trans, const MethodInfo *method)
{
  _BOOL8 v3; // x0
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *Component_object; // x20
  __int64 v7; // x1
  Il2CppObject *v8; // x20

  if ( (byte_5974F0A & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_Rigidbody2D___);
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_UIPanel___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5974F0A = 1;
  }
  while ( 1 )
  {
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
    v3 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)trans, 0, 0);
    if ( !v3 )
      break;
    if ( !trans )
      sub_2213CDC(v3, v4);
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)trans,
                         (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0) )
      break;
    v8 = UnityEngine_Component__GetComponent_object_(
           (UnityEngine_Component_o *)trans,
           (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_Rigidbody2D___);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v8, 0, 0) )
      return (UnityEngine_Rigidbody2D_o *)v8;
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

  if ( (byte_5974F10 & 1) == 0 )
  {
    sub_2213A60(&UICamera_TypeInfo);
    byte_5974F10 = 1;
  }
  v5 = UICamera_TypeInfo;
  if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, *(_QWORD *)&down);
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
  if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, *(_QWORD *)&down);
    v5 = UICamera_TypeInfo;
  }
  v8 = v5->static_fields->GetKeyDown;
  if ( !v8 )
LABEL_12:
    sub_2213CDC(v5, *(_QWORD *)&down);
  return (int)(((unsigned int (__fastcall *)(intptr_t, _QWORD, intptr_t))v8->fields.invoke_impl)(
                 v8->fields.method_code,
                 (unsigned int)down,
                 v8->fields.method) << 31) >> 31;
}


// local variable allocation has failed, the output may be wrong!
int32_t UICamera__GetDirection_56140140(
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

  if ( (byte_5974F11 & 1) == 0 )
  {
    sub_2213A60(&UICamera_TypeInfo);
    byte_5974F11 = 1;
  }
  v9 = UICamera_TypeInfo;
  if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, *(_QWORD *)&up1);
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
  if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, *(_QWORD *)&up1);
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
  if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, *(_QWORD *)&up1);
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
  if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, *(_QWORD *)&up1);
    v9 = UICamera_TypeInfo;
  }
  v14 = v9->static_fields->GetKeyDown;
  if ( !v14 )
LABEL_21:
    sub_2213CDC(v9, *(_QWORD *)&up1);
  return (int)(((unsigned int (__fastcall *)(intptr_t, _QWORD, intptr_t))v14->fields.invoke_impl)(
                 v14->fields.method_code,
                 (unsigned int)down1,
                 v14->fields.method) << 31) >> 31;
}


int32_t UICamera__GetDirection_56140476(System_String_o *axis, const MethodInfo *method)
{
  __int64 v3; // x1
  float time; // s0
  UICamera_c *v5; // x0
  float v6; // s8
  __int64 v7; // x1
  int32_t v8; // w19
  UICamera_c *v10; // x0
  struct UICamera_GetAxisFunc_o *GetAxis; // x8
  __int64 v12; // x1
  float v13; // s0
  UICamera_c *v14; // x0

  if ( (byte_5974F12 & 1) == 0 )
  {
    sub_2213A60(&UICamera_TypeInfo);
    byte_5974F12 = 1;
  }
  time = RealTime__get_time(0);
  v5 = UICamera_TypeInfo;
  v6 = time;
  if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v3);
    v5 = UICamera_TypeInfo;
  }
  if ( v5->static_fields->mNextEvent >= v6 || System_String__IsNullOrEmpty(axis, 0) )
    return 0;
  v10 = UICamera_TypeInfo;
  if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v7);
    v10 = UICamera_TypeInfo;
  }
  GetAxis = v10->static_fields->GetAxis;
  if ( !GetAxis )
    sub_2213CDC(v10, v7);
  v13 = ((float (__fastcall *)(intptr_t, System_String_o *, intptr_t))GetAxis->fields.invoke_impl)(
          GetAxis->fields.method_code,
          axis,
          GetAxis->fields.method);
  if ( v13 <= 0.75 )
  {
    if ( v13 >= -0.75 )
      return 0;
    v14 = UICamera_TypeInfo;
    v8 = -1;
  }
  else
  {
    v14 = UICamera_TypeInfo;
    v8 = 1;
  }
  if ( !*(&v14->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v14, v12);
    v14 = UICamera_TypeInfo;
  }
  v14->static_fields->mNextEvent = v6 + 0.25;
  return v8;
}


UICamera_MouseOrTouch_o *UICamera__GetMouse(int32_t button, const MethodInfo *method)
{
  UICamera_c *v3; // x0
  struct UICamera_MouseOrTouch_array *mMouse; // x8

  if ( (byte_5974F14 & 1) == 0 )
  {
    sub_2213A60(&UICamera_TypeInfo);
    byte_5974F14 = 1;
  }
  v3 = UICamera_TypeInfo;
  if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, method);
    v3 = UICamera_TypeInfo;
  }
  mMouse = v3->static_fields->mMouse;
  if ( !mMouse )
    sub_2213CDC(v3, method);
  if ( LODWORD(mMouse->max_length) <= button )
    sub_2213CE4(v3);
  return mMouse->m_Items[button];
}


UICamera_MouseOrTouch_o *UICamera__GetTouch(int32_t id, const MethodInfo *method)
{
  UICamera_c *v3; // x0
  int v4; // w8
  System_Collections_Generic_Dictionary_int__object__o *mTouches; // x0
  __int64 v6; // x20
  float time; // s0
  Il2CppObject *v8; // x8
  UICamera_c *v9; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_5974F15 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__UICamera_MouseOrTouch__Add__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__UICamera_MouseOrTouch__TryGetValue__);
    sub_2213A60(&UICamera_MouseOrTouch_TypeInfo);
    sub_2213A60(&UICamera_TypeInfo);
    byte_5974F15 = 1;
  }
  v3 = UICamera_TypeInfo;
  value = 0;
  v4 = *(&UICamera_TypeInfo->_2.cctor_finished + 1);
  if ( (id & 0x80000000) == 0 )
  {
    if ( !v4 )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, method);
      v3 = UICamera_TypeInfo;
    }
    mTouches = (System_Collections_Generic_Dictionary_int__object__o *)v3->static_fields->mTouches;
    if ( mTouches )
    {
      if ( System_Collections_Generic_Dictionary_int__object___TryGetValue(
             mTouches,
             id,
             &value,
             (const MethodInfo_3F9DF8C *)Method_System_Collections_Generic_Dictionary_int__UICamera_MouseOrTouch__TryGetValue__) )
      {
        return (UICamera_MouseOrTouch_o *)value;
      }
      v6 = sub_2213CCC(UICamera_MouseOrTouch_TypeInfo);
      *(_DWORD *)(v6 + 96) = 1;
      *(_BYTE *)(v6 + 100) = 1;
      System_Object___ctor((Il2CppObject *)v6, 0);
      value = (Il2CppObject *)v6;
      time = RealTime__get_time(0);
      v8 = value;
      *(float *)(v6 + 88) = time;
      if ( v8 )
      {
        v9 = UICamera_TypeInfo;
        BYTE4(v8[6].klass) = 1;
        if ( !*(&v9->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(v9, method);
          v9 = UICamera_TypeInfo;
        }
        mTouches = (System_Collections_Generic_Dictionary_int__object__o *)v9->static_fields->mTouches;
        if ( mTouches )
        {
          System_Collections_Generic_Dictionary_int__object___Add(
            mTouches,
            id,
            value,
            (const MethodInfo_3F9C4B0 *)Method_System_Collections_Generic_Dictionary_int__UICamera_MouseOrTouch__Add__);
          return (UICamera_MouseOrTouch_o *)value;
        }
      }
    }
    sub_2213CDC(mTouches, method);
  }
  if ( !v4 )
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, method);
  return UICamera__GetMouse(~id, method);
}


bool UICamera__IsHighlighted(UnityEngine_GameObject_o *go, const MethodInfo *method)
{
  UICamera_c *v3; // x0
  struct UICamera_StaticFields *static_fields; // x9
  int v5; // w10
  int32_t currentScheme; // w8
  UnityEngine_Object_o *hoveredObject; // x20
  UnityEngine_Object_c *v8; // x8

  if ( (byte_5974F0E & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&UICamera_TypeInfo);
    byte_5974F0E = 1;
  }
  v3 = UICamera_TypeInfo;
  if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, method);
    v3 = UICamera_TypeInfo;
  }
  static_fields = v3->static_fields;
  v5 = *(&v3->_2.cctor_finished + 1);
  currentScheme = static_fields->currentScheme;
  if ( !currentScheme )
  {
    if ( !v5 )
    {
      j_il2cpp_runtime_class_init_0(v3, method);
      static_fields = UICamera_TypeInfo->static_fields;
    }
    hoveredObject = (UnityEngine_Object_o *)static_fields->hoveredObject;
    v8 = UnityEngine_Object_TypeInfo;
    if ( *(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      return UnityEngine_Object__op_Equality(hoveredObject, (UnityEngine_Object_o *)go, 0);
LABEL_16:
    j_il2cpp_runtime_class_init_0(v8, method);
    return UnityEngine_Object__op_Equality(hoveredObject, (UnityEngine_Object_o *)go, 0);
  }
  if ( !v5 )
  {
    j_il2cpp_runtime_class_init_0(v3, method);
    v3 = UICamera_TypeInfo;
    currentScheme = UICamera_TypeInfo->static_fields->currentScheme;
  }
  if ( currentScheme == 2 )
  {
    if ( !*(&v3->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(v3, method);
    hoveredObject = (UnityEngine_Object_o *)UICamera__get_selectedObject((const MethodInfo *)v3);
    v8 = UnityEngine_Object_TypeInfo;
    if ( *(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      return UnityEngine_Object__op_Equality(hoveredObject, (UnityEngine_Object_o *)go, 0);
    goto LABEL_16;
  }
  return 0;
}


bool UICamera__IsInputIgnore(UICamera_o *this, const MethodInfo *method)
{
  return this->fields.ignoreCount > 0;
}


bool UICamera__IsPressed(UnityEngine_GameObject_o *go, const MethodInfo *method)
{
  __int64 v3; // x23
  System_Collections_Generic_Dictionary_int__object__o *mTouches; // x0
  __int64 v5; // x8
  __int64 v6; // x8
  UnityEngine_Object_o *v7; // x20
  UICamera_c *v8; // x0
  _BOOL8 v9; // x0
  __int64 v10; // x1
  UnityEngine_Object_o *monitor; // x20
  Il2CppObject *value; // x8
  UnityEngine_Object_o *v14; // x20
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v16; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v17; // [xsp+30h] [xbp-60h] BYREF

  if ( (byte_5974F04 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__UICamera_MouseOrTouch__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_Enumerator_int__UICamera_MouseOrTouch__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_Enumerator_int__UICamera_MouseOrTouch__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_Enumerator_int__UICamera_MouseOrTouch__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_KeyValuePair_int__UICamera_MouseOrTouch__get_Value__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&UICamera_TypeInfo);
    byte_5974F04 = 1;
  }
  v3 = 0;
  memset(&v17, 0, sizeof(v17));
  do
  {
    mTouches = (System_Collections_Generic_Dictionary_int__object__o *)UICamera_TypeInfo;
    if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, method);
      mTouches = (System_Collections_Generic_Dictionary_int__object__o *)UICamera_TypeInfo;
    }
    v5 = *(_QWORD *)&mTouches[2].fields._entries->m_Items[12].fields.hashCode;
    if ( !v5 )
      goto LABEL_31;
    if ( (unsigned int)v3 >= *(_DWORD *)(v5 + 24) )
      sub_2213CE4(mTouches);
    v6 = *(_QWORD *)(v5 + 8 * v3 + 32);
    if ( !v6 )
      goto LABEL_31;
    v7 = *(UnityEngine_Object_o **)(v6 + 72);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
    if ( UnityEngine_Object__op_Equality(v7, (UnityEngine_Object_o *)go, 0) )
      return 1;
    ++v3;
  }
  while ( (_DWORD)v3 != 3 );
  v8 = UICamera_TypeInfo;
  if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, method);
    v8 = UICamera_TypeInfo;
  }
  mTouches = (System_Collections_Generic_Dictionary_int__object__o *)v8->static_fields->mTouches;
  if ( !mTouches )
    goto LABEL_31;
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v16,
    mTouches,
    (const MethodInfo_3F9C8EC *)Method_System_Collections_Generic_Dictionary_int__UICamera_MouseOrTouch__GetEnumerator__);
  v17 = v16;
  v16.fields._dictionary = 0;
  *(_QWORD *)&v16.fields._version = &v17;
  while ( 1 )
  {
    v9 = System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
           &v17,
           (const MethodInfo_4158548 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__UICamera_MouseOrTouch__MoveNext__);
    if ( !v9 )
      break;
    if ( !v17.fields._current.fields.value )
      sub_2213CDC(v9, v10);
    monitor = (UnityEngine_Object_o *)v17.fields._current.fields.value[4].monitor;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
    if ( UnityEngine_Object__op_Equality(monitor, (UnityEngine_Object_o *)go, 0) )
    {
      System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
        &v17,
        (const MethodInfo_415866C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__UICamera_MouseOrTouch__Dispose__);
      return 1;
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v17,
    (const MethodInfo_415866C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__UICamera_MouseOrTouch__Dispose__);
  mTouches = (System_Collections_Generic_Dictionary_int__object__o *)UICamera_TypeInfo;
  if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, method);
    mTouches = (System_Collections_Generic_Dictionary_int__object__o *)UICamera_TypeInfo;
  }
  value = mTouches[2].fields._entries->m_Items[12].fields.value;
  if ( !value )
LABEL_31:
    sub_2213CDC(mTouches, method);
  v14 = (UnityEngine_Object_o *)value[4].monitor;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  return UnityEngine_Object__op_Equality(v14, (UnityEngine_Object_o *)go, 0);
}


bool UICamera__IsVisible(UnityEngine_Vector3_o worldPoint, UnityEngine_GameObject_o *go, const MethodInfo *method)
{
  float z; // s8
  float y; // s9
  float x; // s10
  __int64 v7; // x1
  UnityEngine_Object_o *i; // x19
  _BOOL8 v9; // x0
  const MethodInfo *v10; // x1
  bool v11; // w20
  UnityEngine_Vector3_o v13; // 0:s0.4,4:s1.4,8:s2.4

  z = worldPoint.fields.z;
  y = worldPoint.fields.y;
  x = worldPoint.fields.x;
  if ( (byte_5974F0C & 1) == 0 )
  {
    sub_2213A60(&Method_NGUITools_FindInParents_UIPanel___);
    sub_2213A60(&NGUITools_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5974F0C = 1;
  }
  if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, method);
  for ( i = (UnityEngine_Object_o *)NGUITools__FindInParents_object_(
                                      go,
                                      (const MethodInfo_38F0B48 *)Method_NGUITools_FindInParents_UIPanel___);
        ;
        i = (UnityEngine_Object_o *)i[16].klass )
  {
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
    v9 = UnityEngine_Object__op_Inequality(i, 0, 0);
    v11 = v9;
    if ( !v9 )
      break;
    if ( !i )
      sub_2213CDC(v9, v10);
    v13.fields.x = x;
    v13.fields.y = y;
    v13.fields.z = z;
    if ( !UIPanel__IsVisible_56139504((UIPanel_o *)i, v13, v10) )
      break;
  }
  return !v11;
}


bool UICamera__IsVisible_56139020(UICamera_DepthEntry_o *de, const MethodInfo *method)
{
  UnityEngine_GameObject_o *go; // x20
  __int64 v4; // x1
  UnityEngine_Object_o *i; // x20
  _BOOL8 v6; // x0
  const MethodInfo *v7; // x1
  bool v8; // w21

  if ( (byte_5974F0D & 1) == 0 )
  {
    sub_2213A60(&Method_NGUITools_FindInParents_UIPanel___);
    sub_2213A60(&NGUITools_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5974F0D = 1;
  }
  go = de->fields.go;
  if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, method);
  for ( i = (UnityEngine_Object_o *)NGUITools__FindInParents_object_(
                                      go,
                                      (const MethodInfo_38F0B48 *)Method_NGUITools_FindInParents_UIPanel___);
        ;
        i = (UnityEngine_Object_o *)i[16].klass )
  {
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
    v6 = UnityEngine_Object__op_Inequality(i, 0, 0);
    v8 = v6;
    if ( !v6 )
      break;
    if ( !i )
      sub_2213CDC(v6, v7);
    if ( !UIPanel__IsVisible_56139504((UIPanel_o *)i, de->fields.point, v7) )
      break;
  }
  return !v8;
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
  __int64 v10; // x1
  UnityEngine_Object_o *mGenericHandler; // x22
  UICamera_c *v12; // x0
  UnityEngine_Object_o *v13; // x22
  UICamera_c *v14; // x0
  UICamera_c *v15; // x0

  if ( (byte_5974F13 & 1) == 0 )
  {
    sub_2213A60(&NGUITools_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&UICamera_TypeInfo);
    byte_5974F13 = 1;
  }
  v7 = UICamera_TypeInfo;
  if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, funcName);
    v7 = UICamera_TypeInfo;
  }
  if ( v7->static_fields->mNotifying <= 10 )
  {
    if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, funcName);
    if ( NGUITools__GetActive_56411004(go, 0) )
    {
      v9 = (UnityEngine_GameObject_o *)UICamera_TypeInfo;
      if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v8);
        v9 = (UnityEngine_GameObject_o *)UICamera_TypeInfo;
      }
      ++*(_DWORD *)(v9[7].fields.m_CachedPtr + 480);
      if ( go )
      {
        UnityEngine_GameObject__SendMessage_83433568(go, funcName, obj, 1, 0);
        mGenericHandler = (UnityEngine_Object_o *)UICamera_TypeInfo->static_fields->mGenericHandler;
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
        if ( !UnityEngine_Object__op_Inequality(mGenericHandler, 0, 0) )
          goto LABEL_24;
        v12 = UICamera_TypeInfo;
        if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v8);
          v12 = UICamera_TypeInfo;
        }
        v13 = (UnityEngine_Object_o *)v12->static_fields->mGenericHandler;
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
        if ( !UnityEngine_Object__op_Inequality(v13, (UnityEngine_Object_o *)go, 0) )
          goto LABEL_24;
        v14 = UICamera_TypeInfo;
        if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v8);
          v14 = UICamera_TypeInfo;
        }
        v9 = v14->static_fields->mGenericHandler;
        if ( v9 )
        {
          UnityEngine_GameObject__SendMessage_83433568(v9, funcName, obj, 1, 0);
LABEL_24:
          v15 = UICamera_TypeInfo;
          if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v8);
            v15 = UICamera_TypeInfo;
          }
          --v15->static_fields->mNotifying;
          return;
        }
      }
      sub_2213CDC(v9, v8);
    }
  }
}


void UICamera__OnApplicationFocus(UICamera_o *this, bool hasFocus, const MethodInfo *method)
{
  this->fields.ignoreCount = 5;
}


void UICamera__OnApplicationPause(UICamera_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  UICamera_c *v9; // x0
  int v10; // w8
  struct UICamera_MouseOrTouch_o *currentTouch; // x20
  BetterList_int__o *v12; // x21
  UICamera_c *v13; // x0
  char *mTouches; // x0
  __int64 v15; // x1
  Il2CppObject *value; // x22
  int32_t key; // w26
  UnityEngine_Object_o *monitor; // x23
  __int64 v19; // x1
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  UICamera_c *v26; // x0
  struct UICamera_StaticFields *static_fields; // x0
  __int64 v28; // x0
  __int64 v29; // x1
  const MethodInfo *v30; // x3
  struct UICamera_StaticFields *v31; // x9
  struct UICamera_MouseOrTouch_o *v32; // x8
  __int64 v33; // x0
  __int64 v34; // x1
  int32_t v35; // w22
  const MethodInfo *v36; // x1
  int32_t Item; // w23
  int v38; // w22
  __int64 v39; // x23
  __int64 v40; // x8
  __int64 v41; // x8
  UnityEngine_Object_o *v42; // x21
  UICamera_c *v43; // x0
  __int64 v44; // x8
  __int64 v45; // x1
  const MethodInfo *v46; // x3
  struct UICamera_StaticFields *v47; // x9
  struct UICamera_MouseOrTouch_o *v48; // x8
  __int64 v49; // x8
  UnityEngine_Object_o *v50; // x21
  bool v51; // w8
  __int64 v52; // x0
  __int64 v53; // x1
  System_String_o *v54; // x2
  System_String_o *v55; // x3
  int32_t v56; // w4
  int32_t v57; // w5
  bool v58; // w6
  bool v59; // w7
  struct UICamera_StaticFields *v60; // x8
  __int64 v61; // x1
  System_String_o *v62; // x2
  System_String_o *v63; // x3
  int32_t v64; // w4
  int32_t v65; // w5
  bool v66; // w6
  bool v67; // w7
  struct UICamera_StaticFields *v68; // x8
  struct UnityEngine_GameObject_o *mCurrentSelection; // x1
  const MethodInfo *v70; // x3
  struct UICamera_MouseOrTouch_o *v71; // x8
  System_String_o *v72; // x2
  System_String_o *v73; // x3
  int32_t v74; // w4
  int32_t v75; // w5
  bool v76; // w6
  bool v77; // w7
  __int64 v78; // x0
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v79; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v80; // [xsp+30h] [xbp-90h] BYREF

  if ( (byte_5974F25 & 1) == 0 )
  {
    sub_2213A60(&Method_BetterList_int__Add__);
    sub_2213A60(&Method_BetterList_int___ctor__);
    sub_2213A60(&Method_BetterList_int__get_Item__);
    sub_2213A60(&BetterList_int__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__UICamera_MouseOrTouch__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_Enumerator_int__UICamera_MouseOrTouch__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_Enumerator_int__UICamera_MouseOrTouch__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_Enumerator_int__UICamera_MouseOrTouch__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_KeyValuePair_int__UICamera_MouseOrTouch__get_Key__);
    sub_2213A60(&Method_System_Collections_Generic_KeyValuePair_int__UICamera_MouseOrTouch__get_Value__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&UICamera_TypeInfo);
    byte_5974F25 = 1;
  }
  v9 = UICamera_TypeInfo;
  v10 = *(&UICamera_TypeInfo->_2.cctor_finished + 1);
  memset(&v80, 0, sizeof(v80));
  if ( !v10 )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, method);
    v9 = UICamera_TypeInfo;
  }
  currentTouch = v9->static_fields->currentTouch;
  if ( this->fields.useTouch )
  {
    v12 = (BetterList_int__o *)sub_2213CCC(BetterList_int__TypeInfo);
    BetterList_int____ctor(v12, (const MethodInfo_3E6F764 *)Method_BetterList_int___ctor__);
    v13 = UICamera_TypeInfo;
    if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, method);
      v13 = UICamera_TypeInfo;
    }
    mTouches = (char *)v13->static_fields->mTouches;
    if ( !mTouches )
      goto LABEL_60;
    System_Collections_Generic_Dictionary_int__object___GetEnumerator(
      &v79,
      (System_Collections_Generic_Dictionary_int__object__o *)mTouches,
      (const MethodInfo_3F9C8EC *)Method_System_Collections_Generic_Dictionary_int__UICamera_MouseOrTouch__GetEnumerator__);
    v80 = v79;
    v79.fields._dictionary = 0;
    *(_QWORD *)&v79.fields._version = &v80;
    while ( System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
              &v80,
              (const MethodInfo_4158548 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__UICamera_MouseOrTouch__MoveNext__) )
    {
      value = v80.fields._current.fields.value;
      if ( v80.fields._current.fields.value )
      {
        key = (int32_t)v80.fields._current.fields.key;
        monitor = (UnityEngine_Object_o *)v80.fields._current.fields.value[4].monitor;
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15);
        if ( UnityEngine_Object__op_Implicit(monitor, 0) )
        {
          v26 = UICamera_TypeInfo;
          if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v19);
            v26 = UICamera_TypeInfo;
          }
          static_fields = v26->static_fields;
          static_fields->currentTouch = (struct UICamera_MouseOrTouch_o *)value;
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)&static_fields->currentTouch,
            (int32_t)value,
            v20,
            v21,
            v22,
            v23,
            v24,
            v25);
          v31 = UICamera_TypeInfo->static_fields;
          v32 = v31->currentTouch;
          v31->currentScheme = 1;
          v31->currentTouchID = key;
          if ( !v32 )
            sub_2213CDC(v28, v29);
          v32->fields.clickNotification = 0;
          UICamera__ProcessTouch(this, 0, 1, v30);
          if ( !v12 )
            sub_2213CDC(v33, v34);
          BetterList_int___Add(
            v12,
            UICamera_TypeInfo->static_fields->currentTouchID,
            (const MethodInfo_3E6F0F0 *)Method_BetterList_int__Add__);
        }
      }
    }
    System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
      &v80,
      (const MethodInfo_415866C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__UICamera_MouseOrTouch__Dispose__);
    if ( !v12 )
      goto LABEL_60;
    if ( v12->fields.size >= 1 )
    {
      v35 = 0;
      do
      {
        Item = BetterList_int___get_Item(v12, v35, (const MethodInfo_3E6EEEC *)Method_BetterList_int__get_Item__);
        if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v36);
        UICamera__RemoveTouch(Item, v36);
        ++v35;
      }
      while ( v35 < v12->fields.size );
    }
  }
  if ( this->fields.useMouse )
  {
    v38 = -1;
    v39 = 4;
    while ( 1 )
    {
      mTouches = (char *)UICamera_TypeInfo;
      if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, method);
        mTouches = (char *)UICamera_TypeInfo;
      }
      v40 = *(_QWORD *)(*((_QWORD *)mTouches + 23) + 320LL);
      if ( !v40 )
        break;
      if ( (unsigned int)(v39 - 4) >= *(_DWORD *)(v40 + 24) )
        goto LABEL_61;
      v41 = *(_QWORD *)(v40 + 8 * v39);
      if ( !v41 )
        break;
      v42 = *(UnityEngine_Object_o **)(v41 + 72);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
      if ( UnityEngine_Object__op_Implicit(v42, 0) )
      {
        v43 = UICamera_TypeInfo;
        if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, method);
          v43 = UICamera_TypeInfo;
        }
        mTouches = (char *)v43->static_fields;
        v44 = *((_QWORD *)mTouches + 40);
        if ( !v44 )
          break;
        if ( (unsigned int)(v39 - 4) >= *(_DWORD *)(v44 + 24) )
LABEL_61:
          sub_2213CE4(mTouches);
        v45 = *(_QWORD *)(v44 + 8 * v39);
        *((_QWORD *)mTouches + 20) = v45;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(mTouches + 160), v45, v2, v3, v4, v5, v6, v7);
        v47 = UICamera_TypeInfo->static_fields;
        v47->currentTouchID = v38;
        v47->currentKey = v39 + 319;
        v48 = v47->currentTouch;
        v47->currentScheme = 0;
        if ( !v48 )
          break;
        v48->fields.clickNotification = 0;
        UICamera__ProcessTouch(this, 0, 1, v46);
      }
      ++v39;
      --v38;
      if ( (_DWORD)v39 == 7 )
        goto LABEL_43;
    }
LABEL_60:
    sub_2213CDC(mTouches, method);
  }
LABEL_43:
  mTouches = (char *)UICamera_TypeInfo;
  if ( this->fields.useController )
  {
    if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, method);
      mTouches = (char *)UICamera_TypeInfo;
    }
    v49 = *(_QWORD *)(*((_QWORD *)mTouches + 23) + 336LL);
    if ( !v49 )
      goto LABEL_60;
    v50 = *(UnityEngine_Object_o **)(v49 + 72);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
    v51 = UnityEngine_Object__op_Implicit(v50, 0);
    mTouches = (char *)UICamera_TypeInfo;
    if ( v51 )
    {
      if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, method);
        mTouches = (char *)UICamera_TypeInfo;
      }
      v52 = *((_QWORD *)mTouches + 23);
      v53 = *(_QWORD *)(v52 + 336);
      *(_QWORD *)(v52 + 160) = v53;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v52 + 160), v53, v2, v3, v4, v5, v6, v7);
      v60 = UICamera_TypeInfo->static_fields;
      mTouches = (char *)v60->currentTouch;
      *(_QWORD *)&v60->currentScheme = 0xFFFFFF9C00000002LL;
      if ( !mTouches )
        goto LABEL_60;
      v61 = *((_QWORD *)mTouches + 8);
      *((_QWORD *)mTouches + 7) = v61;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(mTouches + 56), v61, v54, v55, v56, v57, v58, v59);
      v68 = UICamera_TypeInfo->static_fields;
      mTouches = (char *)v68->currentTouch;
      if ( !mTouches )
        goto LABEL_60;
      mCurrentSelection = v68->mCurrentSelection;
      *((_QWORD *)mTouches + 8) = mCurrentSelection;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)(mTouches + 64),
        (int32_t)mCurrentSelection,
        v62,
        v63,
        v64,
        v65,
        v66,
        v67);
      v71 = UICamera_TypeInfo->static_fields->currentTouch;
      if ( !v71 )
        goto LABEL_60;
      v71->fields.clickNotification = 0;
      UICamera__ProcessTouch(this, 0, 1, v70);
      mTouches = (char *)UICamera_TypeInfo->static_fields->currentTouch;
      if ( !mTouches )
        goto LABEL_60;
      *((_QWORD *)mTouches + 7) = 0;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(mTouches + 56), 0, v72, v73, v74, v75, v76, v77);
      mTouches = (char *)UICamera_TypeInfo;
    }
  }
  if ( !*((_DWORD *)mTouches + 57) )
  {
    j_il2cpp_runtime_class_init_0(mTouches, method);
    mTouches = (char *)UICamera_TypeInfo;
  }
  v78 = *((_QWORD *)mTouches + 23);
  *(_QWORD *)(v78 + 160) = currentTouch;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v78 + 160), (int32_t)currentTouch, v2, v3, v4, v5, v6, v7);
}


void UICamera__OnDisable(UICamera_o *this, const MethodInfo *method)
{
  UICamera_c *v3; // x0
  BetterList_T__o *list; // x0

  if ( (byte_5974F19 & 1) == 0 )
  {
    sub_2213A60(&Method_BetterList_UICamera__Remove__);
    sub_2213A60(&UICamera_TypeInfo);
    byte_5974F19 = 1;
  }
  v3 = UICamera_TypeInfo;
  if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, method);
    v3 = UICamera_TypeInfo;
  }
  list = (BetterList_T__o *)v3->static_fields->list;
  if ( !list )
    sub_2213CDC(0, method);
  BetterList_object___Remove(
    list,
    (Il2CppObject *)this,
    (const MethodInfo_3E6FCC4 *)Method_BetterList_UICamera__Remove__);
}


void UICamera__OnEnable(UICamera_o *this, const MethodInfo *method)
{
  UICamera_c *v3; // x0
  BetterList_T__o *list; // x0
  BetterList_T__o *v5; // x19
  BetterList_CompareFunc_T__o *v6; // x20

  if ( (byte_5974F18 & 1) == 0 )
  {
    sub_2213A60(&Method_BetterList_UICamera__Add__);
    sub_2213A60(&Method_BetterList_UICamera__Sort__);
    sub_2213A60(&BetterList_CompareFunc_UICamera__TypeInfo);
    sub_2213A60(&Method_UICamera_CompareFunc__);
    sub_2213A60(&UICamera_TypeInfo);
    byte_5974F18 = 1;
  }
  v3 = UICamera_TypeInfo;
  if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, method);
    v3 = UICamera_TypeInfo;
  }
  list = (BetterList_T__o *)v3->static_fields->list;
  if ( !list
    || (BetterList_object___Add(
          list,
          (Il2CppObject *)this,
          (const MethodInfo_3E6FA08 *)Method_BetterList_UICamera__Add__),
        v5 = (BetterList_T__o *)UICamera_TypeInfo->static_fields->list,
        v6 = (BetterList_CompareFunc_T__o *)sub_2213CCC(BetterList_CompareFunc_UICamera__TypeInfo),
        BetterList_CompareFunc_object____ctor(v6, 0, Method_UICamera_CompareFunc__, 0),
        !v5) )
  {
    sub_2213CDC(list, method);
  }
  BetterList_object___Sort(v5, v6, (const MethodInfo_3E6FF80 *)Method_BetterList_UICamera__Sort__);
}


void UICamera__ProcessFakeTouches(UICamera_o *this, const MethodInfo *method)
{
  bool MouseButtonDown; // w21
  bool MouseButtonUp; // w20
  bool MouseButton; // w0
  const MethodInfo *v6; // x1
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  UICamera_c *v13; // x0
  __int64 static_fields; // x0
  __int64 v15; // x8
  __int64 v16; // x1
  struct UICamera_MouseOrTouch_o *currentTouch; // x22
  _BOOL4 v18; // w21
  float time; // s0
  __int64 v20; // x8
  struct UnityEngine_Vector2_o *v21; // x22
  struct UnityEngine_Vector2_o zeroVector; // d2
  struct UICamera_MouseOrTouch_o *v23; // x8
  __int64 v24; // x8
  __int64 v25; // x8
  __int64 v26; // x1
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  UICamera_c *v33; // x0
  struct UICamera_StaticFields *v34; // x8
  struct UnityEngine_GameObject_o *fallThrough; // x1
  UICamera_c *v36; // x0
  UnityEngine_Object_o *hoveredObject; // x22
  System_String_o *v38; // x2
  System_String_o *v39; // x3
  int32_t v40; // w4
  int32_t v41; // w5
  bool v42; // w6
  bool v43; // w7
  UICamera_c *v44; // x0
  struct UICamera_StaticFields *v45; // x8
  struct UnityEngine_GameObject_o *mGenericHandler; // x1
  UICamera_c *v47; // x0
  __int64 v48; // x1
  System_String_o *v49; // x2
  System_String_o *v50; // x3
  int32_t v51; // w4
  int32_t v52; // w5
  bool v53; // w6
  bool v54; // w7
  struct UICamera_StaticFields *v55; // x8
  struct UnityEngine_GameObject_o *v56; // x1
  System_String_o *v57; // x2
  System_String_o *v58; // x3
  int32_t v59; // w4
  int32_t v60; // w5
  bool v61; // w6
  bool v62; // w7
  struct UICamera_StaticFields *v63; // x8
  struct UICamera_MouseOrTouch_o *v64; // x9
  int v65; // w8
  __int64 v66; // x8
  __int64 v67; // x1
  MissionNaviTransitionBoardItem_o *v68; // x0
  __int64 v69; // x8
  UnityEngine_Object_o *v70; // x22
  UICamera_c *v71; // x0
  __int64 v72; // x8
  System_String_o *v73; // x2
  System_String_o *v74; // x3
  int32_t v75; // w4
  int32_t v76; // w5
  bool v77; // w6
  bool v78; // w7
  UICamera_c *v79; // x0
  UICamera_c *v80; // x0
  struct UICamera_StaticFields *v81; // x0
  System_String_o *v82; // x2
  System_String_o *v83; // x3
  int32_t v84; // w4
  int32_t v85; // w5
  bool v86; // w6
  bool v87; // w7
  unsigned __int64 mousePosition; // kr00_8
  UnityEngine_Vector3_o v89; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_5974F1F & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&UICamera_TypeInfo);
    byte_5974F1F = 1;
  }
  MouseButtonDown = UnityEngine_Input__GetMouseButtonDown(0, 0);
  MouseButtonUp = UnityEngine_Input__GetMouseButtonUp(0, 0);
  MouseButton = UnityEngine_Input__GetMouseButton(0, 0);
  if ( MouseButtonDown || MouseButtonUp || MouseButton )
  {
    v13 = UICamera_TypeInfo;
    if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v6);
      v13 = UICamera_TypeInfo;
    }
    static_fields = (__int64)v13->static_fields;
    v15 = *(_QWORD *)(static_fields + 320);
    *(_DWORD *)(static_fields + 148) = 1;
    if ( !v15 )
      goto LABEL_72;
    if ( !*(_DWORD *)(v15 + 24) )
      sub_2213CE4(static_fields);
    v16 = *(_QWORD *)(v15 + 32);
    *(_QWORD *)(static_fields + 160) = v16;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(static_fields + 160), v16, v7, v8, v9, v10, v11, v12);
    static_fields = (__int64)UICamera_TypeInfo;
    currentTouch = UICamera_TypeInfo->static_fields->currentTouch;
    if ( !currentTouch )
      goto LABEL_72;
    v18 = MouseButtonDown;
    currentTouch->fields.touchBegan = v18;
    if ( v18 )
    {
      if ( *(_DWORD *)(static_fields + 228) )
      {
        time = RealTime__get_time(0);
      }
      else
      {
        j_il2cpp_runtime_class_init_0(static_fields, v6);
        currentTouch = UICamera_TypeInfo->static_fields->currentTouch;
        time = RealTime__get_time(0);
        if ( !currentTouch )
          goto LABEL_72;
      }
      currentTouch->fields.pressTime = time;
    }
    mousePosition = (unsigned __int64)UnityEngine_Input__get_mousePosition(0);
    static_fields = (__int64)UICamera_TypeInfo;
    if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v6);
      static_fields = (__int64)UICamera_TypeInfo;
    }
    v20 = *(_QWORD *)(static_fields + 184);
    v21 = *(struct UnityEngine_Vector2_o **)(v20 + 160);
    if ( v18 )
    {
      if ( !byte_59699C0 )
      {
        static_fields = sub_2213A60(&UnityEngine_Vector2_TypeInfo);
        byte_59699C0 = 1;
      }
      zeroVector = UnityEngine_Vector2_TypeInfo->static_fields->zeroVector;
    }
    else
    {
      v23 = *(struct UICamera_MouseOrTouch_o **)(v20 + 160);
      if ( !*(_DWORD *)(static_fields + 228) )
      {
        j_il2cpp_runtime_class_init_0(static_fields, v6);
        v23 = UICamera_TypeInfo->static_fields->currentTouch;
      }
      if ( !v23 )
        goto LABEL_72;
      zeroVector = (struct UnityEngine_Vector2_o)vsub_f32((float32x2_t)mousePosition, (float32x2_t)v23->fields.pos).n64_u64[0];
    }
    if ( !v21 )
      goto LABEL_72;
    static_fields = (__int64)UICamera_TypeInfo;
    v21[4] = zeroVector;
    if ( !*(_DWORD *)(static_fields + 228) )
    {
      j_il2cpp_runtime_class_init_0(static_fields, v6);
      static_fields = (__int64)UICamera_TypeInfo;
    }
    v24 = *(_QWORD *)(*(_QWORD *)(static_fields + 184) + 160LL);
    if ( !v24 )
      goto LABEL_72;
    *(_QWORD *)(v24 + 16) = mousePosition;
    v25 = *(_QWORD *)(*(_QWORD *)(static_fields + 184) + 160LL);
    if ( !v25 )
      goto LABEL_72;
    v89.fields.z = 0.0;
    v89.fields.x = *(float *)(v25 + 16);
    v89.fields.y = *(float *)(v25 + 20);
    if ( !UICamera__Raycast(v89, (const MethodInfo *)static_fields) )
    {
      v33 = UICamera_TypeInfo;
      if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v26);
        v33 = UICamera_TypeInfo;
      }
      v34 = v33->static_fields;
      fallThrough = v34->fallThrough;
      v34->hoveredObject = fallThrough;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&v34->hoveredObject,
        (int32_t)fallThrough,
        v27,
        v28,
        v29,
        v30,
        v31,
        v32);
    }
    v36 = UICamera_TypeInfo;
    if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v26);
      v36 = UICamera_TypeInfo;
    }
    hoveredObject = (UnityEngine_Object_o *)v36->static_fields->hoveredObject;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v26);
    if ( UnityEngine_Object__op_Equality(hoveredObject, 0, 0) )
    {
      v44 = UICamera_TypeInfo;
      if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v6);
        v44 = UICamera_TypeInfo;
      }
      v45 = v44->static_fields;
      mGenericHandler = v45->mGenericHandler;
      v45->hoveredObject = mGenericHandler;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&v45->hoveredObject,
        (int32_t)mGenericHandler,
        v38,
        v39,
        v40,
        v41,
        v42,
        v43);
    }
    v47 = UICamera_TypeInfo;
    if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v6);
      v47 = UICamera_TypeInfo;
    }
    static_fields = (__int64)v47->static_fields->currentTouch;
    if ( !static_fields )
      goto LABEL_72;
    v48 = *(_QWORD *)(static_fields + 64);
    *(_QWORD *)(static_fields + 56) = v48;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(static_fields + 56), v48, v38, v39, v40, v41, v42, v43);
    v55 = UICamera_TypeInfo->static_fields;
    static_fields = (__int64)v55->currentTouch;
    if ( !static_fields )
      goto LABEL_72;
    v56 = v55->hoveredObject;
    *(_QWORD *)(static_fields + 64) = v56;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(static_fields + 64), (int32_t)v56, v49, v50, v51, v52, v53, v54);
    static_fields = (__int64)UICamera_TypeInfo;
    v63 = UICamera_TypeInfo->static_fields;
    v64 = v63->currentTouch;
    if ( !v64 )
      goto LABEL_72;
    v63->lastTouchPosition = v64->fields.pos;
    v65 = *(_DWORD *)(static_fields + 228);
    if ( v18 )
    {
      if ( !v65 )
      {
        j_il2cpp_runtime_class_init_0(static_fields, v6);
        static_fields = (__int64)UICamera_TypeInfo;
      }
      v66 = *(_QWORD *)(static_fields + 184);
      static_fields = *(_QWORD *)(v66 + 160);
      if ( !static_fields )
        goto LABEL_72;
      v67 = *(_QWORD *)(v66 + 136);
      *(_QWORD *)(static_fields + 48) = v67;
      v68 = (MissionNaviTransitionBoardItem_o *)(static_fields + 48);
    }
    else
    {
      if ( !v65 )
      {
        j_il2cpp_runtime_class_init_0(static_fields, v6);
        static_fields = (__int64)UICamera_TypeInfo;
      }
      v69 = *(_QWORD *)(*(_QWORD *)(static_fields + 184) + 160LL);
      if ( !v69 )
        goto LABEL_72;
      v70 = *(UnityEngine_Object_o **)(v69 + 72);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
      if ( !UnityEngine_Object__op_Inequality(v70, 0, 0) )
        goto LABEL_64;
      v71 = UICamera_TypeInfo;
      if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v6);
        v71 = UICamera_TypeInfo;
      }
      static_fields = (__int64)v71->static_fields;
      v72 = *(_QWORD *)(static_fields + 160);
      if ( !v72 )
        goto LABEL_72;
      v67 = *(_QWORD *)(v72 + 48);
      *(_QWORD *)(static_fields + 136) = v67;
      v68 = (MissionNaviTransitionBoardItem_o *)(static_fields + 136);
    }
    sub_2213A04(v68, v67, v57, v58, v59, v60, v61, v62);
LABEL_64:
    UICamera__ProcessTouch(this, v18, MouseButtonUp, (const MethodInfo *)v58);
    if ( MouseButtonUp )
    {
      v79 = UICamera_TypeInfo;
      if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v6);
        v79 = UICamera_TypeInfo;
      }
      UICamera__RemoveTouch(v79->static_fields->currentTouchID, v6);
    }
    v80 = UICamera_TypeInfo;
    if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v6);
      v80 = UICamera_TypeInfo;
    }
    static_fields = (__int64)v80->static_fields->currentTouch;
    if ( static_fields )
    {
      *(_QWORD *)(static_fields + 56) = 0;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(static_fields + 56), 0, v73, v74, v75, v76, v77, v78);
      v81 = UICamera_TypeInfo->static_fields;
      v81->currentTouch = 0;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&v81->currentTouch, 0, v82, v83, v84, v85, v86, v87);
      return;
    }
LABEL_72:
    sub_2213CDC(static_fields, v6);
  }
}


void UICamera__ProcessMouse(UICamera_o *this, const MethodInfo *method)
{
  UICamera_MouseOrTouch_o *v3; // x0
  struct UnityEngine_GameObject_o *dragged; // x8
  void *monitor; // x9
  float32x2_t *v6; // x9
  struct UnityEngine_GameObject_o *v7; // x8
  _DWORD *v8; // x9
  __int64 v9; // x9
  void *v10; // x8
  float32x2_t *v11; // x8
  __int64 v12; // x20
  float v13; // s11
  _DWORD *v14; // x9
  __int64 v15; // x10
  __int64 v16; // x9
  _DWORD *v17; // x9
  __int64 v18; // x10
  __int64 v19; // x8
  int v20; // w23
  int v21; // w22
  int32_t i; // w20
  __int64 v23; // x1
  UICamera_c *v24; // x0
  float mNextRaycast; // s8
  __int64 v26; // x1
  UICamera_c *v27; // x0
  __int64 v28; // x1
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7
  UICamera_c *v35; // x0
  struct UICamera_StaticFields *static_fields; // x8
  struct UnityEngine_GameObject_o *fallThrough; // x1
  UICamera_c *v38; // x0
  UnityEngine_Object_o *hoveredObject; // x20
  System_String_o *v40; // x2
  System_String_o *v41; // x3
  int32_t v42; // w4
  int32_t v43; // w5
  bool v44; // w6
  bool v45; // w7
  UICamera_c *v46; // x0
  struct UICamera_StaticFields *v47; // x8
  struct UnityEngine_GameObject_o *mGenericHandler; // x1
  __int64 v49; // x20
  struct UnityEngine_GameObject_o *v50; // x8
  _DWORD *v51; // x9
  struct UnityEngine_GameObject_o *m_CachedPtr; // x1
  _DWORD *v53; // x8
  __int64 v54; // x8
  UnityEngine_Object_o *v55; // x20
  UnityEngine_Object_o *v56; // x21
  System_String_o *v57; // x2
  System_String_o *v58; // x3
  int32_t v59; // w4
  int32_t v60; // w5
  bool v61; // w6
  bool v62; // w7
  _BOOL4 v63; // w20
  UICamera_c *v64; // x0
  void *v65; // x8
  struct UnityEngine_GameObject_o *v66; // x1
  UICamera_c *v67; // x0
  UnityEngine_Object_o *v68; // x21
  const MethodInfo *v69; // x2
  int v70; // w27
  struct UICamera_StaticFields *v71; // x9
  struct UICamera_MoveDelegate_o *onMouseMove; // x8
  struct UICamera_MouseOrTouch_o *currentTouch; // x9
  struct UICamera_StaticFields *v74; // x0
  System_String_o *v75; // x2
  System_String_o *v76; // x3
  int32_t v77; // w4
  int32_t v78; // w5
  bool v79; // w6
  bool v80; // w7
  UnityEngine_Object_o *mHover; // x21
  __int64 v82; // x1
  UICamera_c *v83; // x0
  UnityEngine_Object_c *v84; // x8
  UnityEngine_Object_o *mTooltip; // x21
  int v86; // w10
  __int64 v87; // x1
  const MethodInfo *v88; // x2
  UICamera_c *v89; // x0
  struct UICamera_StaticFields *v90; // x9
  struct UICamera_BoolDelegate_o *onHover; // x8
  struct UICamera_StaticFields *v92; // x8
  UnityEngine_GameObject_o *v93; // x21
  Il2CppObject *v94; // x0
  const MethodInfo *v95; // x3
  MissionNaviTransitionBoardItem_o *p_mHover; // x0
  System_String_o *v97; // x2
  System_String_o *v98; // x3
  int32_t v99; // w4
  int32_t v100; // w5
  bool v101; // w6
  bool v102; // w7
  unsigned __int64 v103; // x21
  int v104; // w28
  bool MouseButtonDown; // w22
  bool MouseButtonUp; // w0
  System_String_o *v107; // x2
  System_String_o *v108; // x3
  int32_t v109; // w4
  int32_t v110; // w5
  bool v111; // w6
  bool v112; // w7
  UICamera_c *v113; // x8
  bool v114; // w23
  _QWORD *v115; // x8
  struct UnityEngine_GameObject_o *v116; // x1
  System_String_o *v117; // x2
  System_String_o *v118; // x3
  int32_t v119; // w4
  int32_t v120; // w5
  bool v121; // w6
  bool v122; // w7
  struct UICamera_StaticFields *v123; // x8
  int v124; // w9
  struct UnityEngine_Camera_o *currentCamera; // x1
  MissionNaviTransitionBoardItem_o *p_pressedCam; // x0
  struct UICamera_MouseOrTouch_o *v127; // x8
  UnityEngine_Object_o *pressed; // x24
  UICamera_c *v129; // x0
  struct UnityEngine_GameObject_o *last; // x8
  __int64 v131; // x1
  System_String_o *v132; // x2
  System_String_o *v133; // x3
  int32_t v134; // w4
  int32_t v135; // w5
  bool v136; // w6
  bool v137; // w7
  UICamera_c *v138; // x0
  struct UICamera_StaticFields *v139; // x8
  System_String_o *v140; // x2
  System_String_o *v141; // x3
  int32_t v142; // w4
  int32_t v143; // w5
  bool v144; // w6
  bool v145; // w7
  float time; // s0
  struct UICamera_StaticFields *v147; // x8
  struct UICamera_MouseOrTouch_array *mMouse; // x9
  UICamera_MouseOrTouch_o *v149; // x9
  struct UnityEngine_GameObject_o *current; // x1
  System_String_o *v151; // x2
  System_String_o *v152; // x3
  int32_t v153; // w4
  int32_t v154; // w5
  bool v155; // w6
  bool v156; // w7
  void *v157; // x8
  struct UnityEngine_GameObject_o *v158; // x1
  __int64 v159; // x1
  UICamera_c *v160; // x0
  struct UICamera_StaticFields *v161; // x8
  struct UICamera_BoolDelegate_o *v162; // x9
  UnityEngine_GameObject_o *v163; // x19
  Il2CppObject *v164; // x0
  const MethodInfo *v165; // x3
  struct UICamera_StaticFields *v166; // x0
  System_String_o *v167; // x2
  System_String_o *v168; // x3
  int32_t v169; // w4
  int32_t v170; // w5
  bool v171; // w6
  bool v172; // w7
  struct UICamera_MouseOrTouch_array *v173; // x8
  struct UnityEngine_GameObject_o *v174; // x1
  System_String_o *v175; // x2
  System_String_o *v176; // x3
  int32_t v177; // w4
  int32_t v178; // w5
  bool v179; // w6
  bool v180; // w7
  __int64 v181; // x19
  _DWORD *v182; // x8
  __int64 v183; // x9
  struct UnityEngine_GameObject_o *v184; // x1
  __int64 v185; // x1
  unsigned __int64 mousePosition; // kr00_8
  char v187[4]; // [xsp+8h] [xbp-88h] BYREF
  char v188[4]; // [xsp+Ch] [xbp-84h] BYREF
  UnityEngine_Vector3_o v189; // 0:kr14_12.12

  if ( (byte_5974F1D & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&UICamera_TypeInfo);
    sub_2213A60(&StringLiteral_10316/*"OnHover"*/);
    byte_5974F1D = 1;
  }
  mousePosition = (unsigned __int64)UnityEngine_Input__get_mousePosition(0);
  v3 = (UICamera_MouseOrTouch_o *)UICamera_TypeInfo;
  if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v185);
    v3 = (UICamera_MouseOrTouch_o *)UICamera_TypeInfo;
  }
  *(void **)((char *)&v3[1].fields.dragged[2].monitor + 4) = (void *)mousePosition;
  dragged = v3[1].fields.dragged;
  monitor = dragged[13].monitor;
  if ( !monitor )
    goto LABEL_174;
  if ( !*((_DWORD *)monitor + 6) )
    goto LABEL_175;
  v6 = (float32x2_t *)*((_QWORD *)monitor + 4);
  if ( !v6 )
    goto LABEL_174;
  v6[4].n64_u64[0] = vsub_f32(*(float32x2_t *)((char *)&dragged[2].monitor + 4), v6[2]).n64_u64[0];
  v7 = v3[1].fields.dragged;
  v8 = v7[13].monitor;
  if ( !v8 )
    goto LABEL_174;
  if ( !v8[6] )
    goto LABEL_175;
  v9 = *((_QWORD *)v8 + 4);
  if ( !v9 )
    goto LABEL_174;
  *(_QWORD *)(v9 + 16) = *(void **)((char *)&v7[2].monitor + 4);
  v10 = v3[1].fields.dragged[13].monitor;
  if ( !v10 )
    goto LABEL_174;
  if ( !*((_DWORD *)v10 + 6) )
    goto LABEL_175;
  v11 = (float32x2_t *)*((_QWORD *)v10 + 4);
  if ( !v11 )
    goto LABEL_174;
  v12 = 5;
  v13 = vaddv_f32(vmul_f32(v11[4], v11[4]));
  do
  {
    if ( !LODWORD(v3[2].fields.pos.fields.y) )
    {
      j_il2cpp_runtime_class_init_0(v3, v185);
      v3 = (UICamera_MouseOrTouch_o *)UICamera_TypeInfo;
    }
    v14 = v3[1].fields.dragged[13].monitor;
    if ( !v14 )
      goto LABEL_174;
    if ( (unsigned int)(v12 - 4) >= v14[6] )
      goto LABEL_175;
    v15 = *((_QWORD *)v14 + 4);
    if ( !v15 )
      goto LABEL_174;
    v16 = *(_QWORD *)&v14[2 * v12];
    if ( !v16 )
      goto LABEL_174;
    *(_QWORD *)(v16 + 16) = *(_QWORD *)(v15 + 16);
    v17 = v3[1].fields.dragged[13].monitor;
    if ( !v17 )
      goto LABEL_174;
    if ( (unsigned int)(v12 - 4) >= v17[6] )
      goto LABEL_175;
    v18 = *((_QWORD *)v17 + 4);
    if ( !v18 )
      goto LABEL_174;
    v19 = *(_QWORD *)&v17[2 * v12];
    if ( !v19 )
      goto LABEL_174;
    ++v12;
    *(_QWORD *)(v19 + 32) = *(_QWORD *)(v18 + 32);
  }
  while ( (_DWORD)v12 != 7 );
  v20 = 0;
  v21 = 0;
  for ( i = 0; i != 3; ++i )
  {
    if ( UnityEngine_Input__GetMouseButtonDown(i, 0) )
    {
      v24 = UICamera_TypeInfo;
      v21 = 1;
    }
    else
    {
      if ( !UnityEngine_Input__GetMouseButton(i, 0) )
        continue;
      v24 = UICamera_TypeInfo;
    }
    if ( !*(&v24->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v24, v23);
      v24 = UICamera_TypeInfo;
    }
    v20 = 1;
    v24->static_fields->currentScheme = 0;
  }
  if ( (v13 > 0.001) | v20 & 1 || (mNextRaycast = this->fields.mNextRaycast, mNextRaycast < RealTime__get_time(0)) )
  {
    this->fields.mNextRaycast = RealTime__get_time(0) + 0.02;
    v189 = UnityEngine_Input__get_mousePosition(0);
    v27 = UICamera_TypeInfo;
    if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v26);
    if ( !UICamera__Raycast(v189, (const MethodInfo *)v27) )
    {
      v35 = UICamera_TypeInfo;
      if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v28);
        v35 = UICamera_TypeInfo;
      }
      static_fields = v35->static_fields;
      fallThrough = static_fields->fallThrough;
      static_fields->hoveredObject = fallThrough;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&static_fields->hoveredObject,
        (int32_t)fallThrough,
        v29,
        v30,
        v31,
        v32,
        v33,
        v34);
    }
    v38 = UICamera_TypeInfo;
    if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v28);
      v38 = UICamera_TypeInfo;
    }
    hoveredObject = (UnityEngine_Object_o *)v38->static_fields->hoveredObject;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v28);
    if ( UnityEngine_Object__op_Equality(hoveredObject, 0, 0) )
    {
      v46 = UICamera_TypeInfo;
      if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v185);
        v46 = UICamera_TypeInfo;
      }
      v47 = v46->static_fields;
      mGenericHandler = v47->mGenericHandler;
      v47->hoveredObject = mGenericHandler;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&v47->hoveredObject,
        (int32_t)mGenericHandler,
        v40,
        v41,
        v42,
        v43,
        v44,
        v45);
    }
    v49 = 0;
    while ( 1 )
    {
      v3 = (UICamera_MouseOrTouch_o *)UICamera_TypeInfo;
      if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v185);
        v3 = (UICamera_MouseOrTouch_o *)UICamera_TypeInfo;
      }
      v50 = v3[1].fields.dragged;
      v51 = v50[13].monitor;
      if ( !v51 )
        break;
      if ( (unsigned int)v49 >= v51[6] )
        goto LABEL_175;
      v3 = *(UICamera_MouseOrTouch_o **)&v51[2 * v49 + 8];
      if ( !v3 )
        break;
      m_CachedPtr = (struct UnityEngine_GameObject_o *)v50[15].fields.m_CachedPtr;
      v3->fields.current = m_CachedPtr;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&v3->fields.current,
        (int32_t)m_CachedPtr,
        v40,
        v41,
        v42,
        v43,
        v44,
        v45);
      if ( (_DWORD)++v49 == 3 )
        goto LABEL_58;
    }
LABEL_174:
    sub_2213CDC(v3, v185);
  }
LABEL_58:
  v3 = (UICamera_MouseOrTouch_o *)UICamera_TypeInfo;
  if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v185);
    v3 = (UICamera_MouseOrTouch_o *)UICamera_TypeInfo;
  }
  v53 = v3[1].fields.dragged[13].monitor;
  if ( !v53 )
    goto LABEL_174;
  if ( !v53[6] )
    goto LABEL_175;
  v54 = *((_QWORD *)v53 + 4);
  if ( !v54 )
    goto LABEL_174;
  v55 = *(UnityEngine_Object_o **)(v54 + 56);
  v56 = *(UnityEngine_Object_o **)(v54 + 64);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v185);
  v63 = UnityEngine_Object__op_Inequality(v55, v56, 0);
  v64 = UICamera_TypeInfo;
  if ( v63 )
  {
    if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v185);
      v64 = UICamera_TypeInfo;
    }
    v64->static_fields->currentScheme = 0;
  }
  if ( !*(&v64->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v64, v185);
    v64 = UICamera_TypeInfo;
  }
  v3 = (UICamera_MouseOrTouch_o *)v64->static_fields;
  v65 = v3[3].monitor;
  if ( !v65 )
    goto LABEL_174;
  if ( !*((_DWORD *)v65 + 6) )
    goto LABEL_175;
  v66 = (struct UnityEngine_GameObject_o *)*((_QWORD *)v65 + 4);
  v3[1].fields.last = v66;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v3[1].fields.last, (int32_t)v66, v57, v58, v59, v60, v61, v62);
  v67 = UICamera_TypeInfo;
  UICamera_TypeInfo->static_fields->currentTouchID = -1;
  if ( (v20 & 1) != 0 )
  {
    this->fields.mTooltipTime = 0.0;
    if ( v13 <= 0.001 )
      goto LABEL_93;
    goto LABEL_85;
  }
  if ( v13 <= 0.001 )
  {
    v70 = 1;
LABEL_95:
    if ( !*(&v67->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v67, v185);
      v67 = UICamera_TypeInfo;
    }
    mHover = (UnityEngine_Object_o *)v67->static_fields->mHover;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v185);
    if ( (v63 & UnityEngine_Object__op_Inequality(mHover, 0, 0) & 1) != 0 )
    {
      v83 = UICamera_TypeInfo;
      if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v82);
        v83 = UICamera_TypeInfo;
      }
      v84 = UnityEngine_Object_TypeInfo;
      mTooltip = (UnityEngine_Object_o *)this->fields.mTooltip;
      v86 = *(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1);
      v83->static_fields->currentScheme = 0;
      if ( !v86 )
        j_il2cpp_runtime_class_init_0(v84, v82);
      if ( UnityEngine_Object__op_Inequality(mTooltip, 0, 0) )
        UICamera__ShowTooltip(this, 0, v88);
      v89 = UICamera_TypeInfo;
      if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v87);
        v89 = UICamera_TypeInfo;
      }
      v90 = v89->static_fields;
      onHover = v90->onHover;
      if ( onHover )
      {
        if ( !*(&v89->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(v89, v87);
          v90 = UICamera_TypeInfo->static_fields;
          onHover = v90->onHover;
          if ( !onHover )
            goto LABEL_174;
        }
        ((void (__fastcall *)(intptr_t, struct UnityEngine_GameObject_o *, _QWORD, intptr_t))onHover->fields.invoke_impl)(
          onHover->fields.method_code,
          v90->mHover,
          0,
          onHover->fields.method);
        v89 = UICamera_TypeInfo;
      }
      if ( !*(&v89->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v89, v87);
        v89 = UICamera_TypeInfo;
      }
      v92 = v89->static_fields;
      v188[0] = 0;
      v93 = v92->mHover;
      v94 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984328, v188);
      UICamera__Notify(v93, (System_String_o *)StringLiteral_10316/*"OnHover"*/, v94, v95);
      p_mHover = (MissionNaviTransitionBoardItem_o *)&UICamera_TypeInfo->static_fields->mHover;
      p_mHover->klass = 0;
      sub_2213A04(p_mHover, 0, v97, v98, v99, v100, v101, v102);
    }
  }
  else
  {
    if ( !this->fields.stickyTooltip || v63 )
    {
      if ( this->fields.mTooltipTime == 0.0 )
      {
        v68 = (UnityEngine_Object_o *)this->fields.mTooltip;
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v185);
        if ( UnityEngine_Object__op_Inequality(v68, 0, 0) )
          UICamera__ShowTooltip(this, 0, v69);
      }
      else
      {
        this->fields.mTooltipTime = RealTime__get_time(0) + this->fields.tooltipDelay;
      }
    }
LABEL_85:
    v3 = (UICamera_MouseOrTouch_o *)UICamera_TypeInfo;
    if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v185);
      v3 = (UICamera_MouseOrTouch_o *)UICamera_TypeInfo;
    }
    v71 = (struct UICamera_StaticFields *)v3[1].fields.dragged;
    onMouseMove = v71->onMouseMove;
    if ( onMouseMove )
    {
      if ( !LODWORD(v3[2].fields.pos.fields.y) )
      {
        j_il2cpp_runtime_class_init_0(v3, v185);
        v71 = UICamera_TypeInfo->static_fields;
        onMouseMove = v71->onMouseMove;
      }
      currentTouch = v71->currentTouch;
      if ( !currentTouch || !onMouseMove )
        goto LABEL_174;
      ((void (__fastcall *)(intptr_t, intptr_t, float, float))onMouseMove->fields.invoke_impl)(
        onMouseMove->fields.method_code,
        onMouseMove->fields.method,
        currentTouch->fields.delta.fields.x,
        currentTouch->fields.delta.fields.y);
      v74 = UICamera_TypeInfo->static_fields;
      v74->currentTouch = 0;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&v74->currentTouch, 0, v75, v76, v77, v78, v79, v80);
    }
LABEL_93:
    v70 = v20 ^ 1;
    if ( ((v21 | v20 ^ 1) & 1) != 0 )
    {
      v67 = UICamera_TypeInfo;
      goto LABEL_95;
    }
    v70 = 0;
  }
  v103 = 0;
  v104 = -1;
  while ( 2 )
  {
    MouseButtonDown = UnityEngine_Input__GetMouseButtonDown(v103, 0);
    MouseButtonUp = UnityEngine_Input__GetMouseButtonUp(v103, 0);
    v113 = UICamera_TypeInfo;
    v114 = MouseButtonUp;
    if ( MouseButtonDown || MouseButtonUp )
    {
      if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v185);
        v113 = UICamera_TypeInfo;
      }
      v113->static_fields->currentScheme = 0;
    }
    if ( !*(&v113->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v113, v185);
      v113 = UICamera_TypeInfo;
    }
    v3 = (UICamera_MouseOrTouch_o *)v113->static_fields;
    v115 = v3[3].monitor;
    if ( !v115 )
      goto LABEL_174;
    if ( v103 >= *((unsigned int *)v115 + 6) )
      goto LABEL_175;
    v116 = (struct UnityEngine_GameObject_o *)v115[v103 + 4];
    v3[1].fields.last = v116;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&v3[1].fields.last,
      (int32_t)v116,
      v107,
      v108,
      v109,
      v110,
      v111,
      v112);
    v3 = (UICamera_MouseOrTouch_o *)UICamera_TypeInfo;
    v123 = UICamera_TypeInfo->static_fields;
    v124 = *(&UICamera_TypeInfo->_2.cctor_finished + 1);
    v123->currentTouchID = v104;
    v123->currentKey = v103 + 323;
    if ( MouseButtonDown )
    {
      if ( !v124 )
      {
        j_il2cpp_runtime_class_init_0(v3, v185);
        v123 = UICamera_TypeInfo->static_fields;
      }
      v3 = v123->currentTouch;
      if ( !v3 )
        goto LABEL_174;
      currentCamera = v123->currentCamera;
      v3->fields.pressedCam = currentCamera;
      p_pressedCam = (MissionNaviTransitionBoardItem_o *)&v3->fields.pressedCam;
      goto LABEL_141;
    }
    if ( !v124 )
    {
      j_il2cpp_runtime_class_init_0(v3, v185);
      v123 = UICamera_TypeInfo->static_fields;
    }
    v127 = v123->currentTouch;
    if ( !v127 )
      goto LABEL_174;
    pressed = (UnityEngine_Object_o *)v127->fields.pressed;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v185);
    if ( UnityEngine_Object__op_Inequality(pressed, 0, 0) )
    {
      v129 = UICamera_TypeInfo;
      if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v185);
        v129 = UICamera_TypeInfo;
      }
      v3 = (UICamera_MouseOrTouch_o *)v129->static_fields;
      last = v3[1].fields.last;
      if ( !last )
        goto LABEL_174;
      currentCamera = (struct UnityEngine_Camera_o *)last[2].klass;
      v3[1].fields.delta = (struct UnityEngine_Vector2_o)currentCamera;
      p_pressedCam = (MissionNaviTransitionBoardItem_o *)&v3[1].fields.delta;
LABEL_141:
      sub_2213A04(p_pressedCam, (int32_t)currentCamera, v117, v118, v119, v120, v121, v122);
    }
    UICamera__ProcessTouch(this, MouseButtonDown, v114, (const MethodInfo *)v118);
    v138 = UICamera_TypeInfo;
    if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v131);
      v138 = UICamera_TypeInfo;
    }
    v139 = v138->static_fields;
    ++v103;
    --v104;
    v139->currentKey = 0;
    if ( v103 != 3 )
      continue;
    break;
  }
  if ( (v63 & v70 & 1) == 0 )
    goto LABEL_160;
  if ( !*(&v138->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v138, v131);
    v139 = UICamera_TypeInfo->static_fields;
  }
  v139->currentScheme = 0;
  time = RealTime__get_time(0);
  v147 = UICamera_TypeInfo->static_fields;
  mMouse = v147->mMouse;
  this->fields.mTooltipTime = time + this->fields.tooltipDelay;
  if ( !mMouse )
    goto LABEL_174;
  if ( !LODWORD(mMouse->max_length) )
    goto LABEL_175;
  v149 = mMouse->m_Items[0];
  if ( !v149 )
    goto LABEL_174;
  current = v149->fields.current;
  v147->mHover = current;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v147->mHover, (int32_t)current, v140, v141, v142, v143, v144, v145);
  v3 = (UICamera_MouseOrTouch_o *)UICamera_TypeInfo->static_fields;
  v157 = v3[3].monitor;
  if ( !v157 )
    goto LABEL_174;
  if ( !*((_DWORD *)v157 + 6) )
    goto LABEL_175;
  v158 = (struct UnityEngine_GameObject_o *)*((_QWORD *)v157 + 4);
  v3[1].fields.last = v158;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v3[1].fields.last, (int32_t)v158, v151, v152, v153, v154, v155, v156);
  v160 = UICamera_TypeInfo;
  v161 = UICamera_TypeInfo->static_fields;
  v162 = v161->onHover;
  v161->currentTouchID = -1;
  if ( !v162 )
    goto LABEL_157;
  if ( !*(&v160->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v160, v159);
    v161 = UICamera_TypeInfo->static_fields;
    v162 = v161->onHover;
    if ( !v162 )
      goto LABEL_174;
  }
  ((void (__fastcall *)(intptr_t, struct UnityEngine_GameObject_o *, __int64, intptr_t))v162->fields.invoke_impl)(
    v162->fields.method_code,
    v161->mHover,
    1,
    v162->fields.method);
  v160 = UICamera_TypeInfo;
LABEL_157:
  if ( !*(&v160->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v160, v159);
    v160 = UICamera_TypeInfo;
  }
  v163 = v160->static_fields->mHover;
  v187[0] = 1;
  v164 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984328, v187);
  UICamera__Notify(v163, (System_String_o *)StringLiteral_10316/*"OnHover"*/, v164, v165);
  v138 = UICamera_TypeInfo;
LABEL_160:
  if ( !*(&v138->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v138, v131);
    v138 = UICamera_TypeInfo;
  }
  v166 = v138->static_fields;
  v166->currentTouch = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v166->currentTouch, 0, v132, v133, v134, v135, v136, v137);
  v173 = UICamera_TypeInfo->static_fields->mMouse;
  if ( !v173 )
    goto LABEL_174;
  if ( !LODWORD(v173->max_length) )
LABEL_175:
    sub_2213CE4(v3);
  v3 = v173->m_Items[0];
  if ( !v3 )
    goto LABEL_174;
  v174 = v3->fields.current;
  v3->fields.last = v174;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v3->fields.last, (int32_t)v174, v167, v168, v169, v170, v171, v172);
  v181 = 5;
  do
  {
    v3 = (UICamera_MouseOrTouch_o *)UICamera_TypeInfo;
    if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v185);
      v3 = (UICamera_MouseOrTouch_o *)UICamera_TypeInfo;
    }
    v182 = v3[1].fields.dragged[13].monitor;
    if ( !v182 )
      goto LABEL_174;
    if ( (unsigned int)(v181 - 4) >= v182[6] )
      goto LABEL_175;
    v183 = *((_QWORD *)v182 + 4);
    if ( !v183 )
      goto LABEL_174;
    v3 = *(UICamera_MouseOrTouch_o **)&v182[2 * v181];
    if ( !v3 )
      goto LABEL_174;
    v184 = *(struct UnityEngine_GameObject_o **)(v183 + 56);
    v3->fields.last = v184;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v3->fields.last, (int32_t)v184, v175, v176, v177, v178, v179, v180);
    ++v181;
  }
  while ( (_DWORD)v181 != 7 );
}


void UICamera__ProcessOthers(UICamera_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  UICamera_c *v9; // x0
  struct UICamera_StaticFields *static_fields; // x0
  struct UICamera_MouseOrTouch_o *controller; // x1
  const MethodInfo *v12; // x1
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  const MethodInfo *v15; // x4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  char *currentTouch; // x0
  __int64 v20; // x8
  UICamera_c *v21; // x0
  int32_t submitKey0; // w20
  _BOOL4 v23; // w20
  __int64 v24; // x8
  UICamera_c *v25; // x0
  int32_t submitKey1; // w20
  __int64 v27; // x8
  UICamera_c *v28; // x0
  int32_t v29; // w21
  int32_t v30; // w21
  __int64 v31; // x8
  UICamera_c *v32; // x0
  struct UICamera_StaticFields *v33; // x8
  __int64 v34; // x1
  System_String_o *v35; // x2
  System_String_o *v36; // x3
  int32_t v37; // w4
  int32_t v38; // w5
  bool v39; // w6
  bool v40; // w7
  struct UICamera_StaticFields *v41; // x8
  struct UnityEngine_GameObject_o *mCurrentSelection; // x1
  const MethodInfo *v43; // x3
  System_String_o *v44; // x2
  System_String_o *v45; // x3
  int32_t v46; // w4
  int32_t v47; // w5
  bool v48; // w6
  bool v49; // w7
  UICamera_c *v50; // x0
  int v51; // w8
  int32_t Direction; // w21
  const MethodInfo *v53; // x2
  int32_t Direction_56140140; // w0
  int v55; // w20
  const MethodInfo *v56; // x4
  const MethodInfo *v57; // x1
  System_String_o *verticalAxisName; // x22
  System_String_o *horizontalAxisName; // x22
  struct UICamera_StaticFields *v60; // x8
  unsigned int v61; // w21
  int v62; // w9
  struct UICamera_KeyCodeDelegate_o *onKey; // x9
  __int64 v64; // x8
  UnityEngine_GameObject_o *v65; // x22
  Il2CppObject *v66; // x0
  const MethodInfo *v67; // x3
  struct UICamera_StaticFields *v68; // x8
  unsigned int v69; // w20
  int v70; // w9
  struct UICamera_KeyCodeDelegate_o *v71; // x9
  __int64 v72; // x8
  UnityEngine_GameObject_o *v73; // x21
  Il2CppObject *v74; // x0
  const MethodInfo *v75; // x3
  __int64 v76; // x8
  char v77; // w8
  struct UICamera_StaticFields *v78; // x8
  struct UICamera_KeyCodeDelegate_o *v79; // x9
  UnityEngine_GameObject_o *v80; // x20
  Il2CppObject *v81; // x0
  const MethodInfo *v82; // x3
  __int64 v83; // x8
  char v84; // w8
  int32_t cancelKey0; // w20
  struct UICamera_StaticFields *v86; // x8
  struct UICamera_KeyCodeDelegate_o *v87; // x9
  UnityEngine_GameObject_o *v88; // x20
  Il2CppObject *v89; // x0
  const MethodInfo *v90; // x3
  __int64 v91; // x8
  char v92; // w8
  int32_t cancelKey1; // w19
  struct UICamera_StaticFields *v94; // x8
  struct UICamera_KeyCodeDelegate_o *v95; // x9
  UnityEngine_GameObject_o *v96; // x19
  Il2CppObject *v97; // x0
  const MethodInfo *v98; // x3
  __int64 v99; // x0
  int v100; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_5974F20 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_KeyCode_TypeInfo);
    sub_2213A60(&UICamera_TypeInfo);
    sub_2213A60(&StringLiteral_10321/*"OnKey"*/);
    byte_5974F20 = 1;
  }
  v9 = UICamera_TypeInfo;
  if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, method);
    v9 = UICamera_TypeInfo;
  }
  static_fields = v9->static_fields;
  controller = static_fields->controller;
  static_fields->currentTouch = controller;
  static_fields = (struct UICamera_StaticFields *)((char *)static_fields + 160);
  HIDWORD(static_fields[-1].GetInputTouchCount) = -100;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)static_fields, (int32_t)controller, v2, v3, v4, v5, v6, v7);
  if ( !this->fields.submitKey0 )
    goto LABEL_13;
  currentTouch = (char *)UICamera_TypeInfo;
  if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v12);
    currentTouch = (char *)UICamera_TypeInfo;
  }
  v20 = *(_QWORD *)(*((_QWORD *)currentTouch + 23) + 8LL);
  if ( !v20 )
    goto LABEL_147;
  if ( ((*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(v20 + 24))(
          *(_QWORD *)(v20 + 64),
          (unsigned int)this->fields.submitKey0,
          *(_QWORD *)(v20 + 40))
      & 1) != 0 )
  {
    v21 = UICamera_TypeInfo;
    submitKey0 = this->fields.submitKey0;
    if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v12);
      v21 = UICamera_TypeInfo;
    }
    v21->static_fields->currentKey = submitKey0;
    v23 = 1;
  }
  else
  {
LABEL_13:
    v23 = 0;
  }
  if ( this->fields.submitKey1 )
  {
    currentTouch = (char *)UICamera_TypeInfo;
    if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v12);
      currentTouch = (char *)UICamera_TypeInfo;
    }
    v24 = *(_QWORD *)(*((_QWORD *)currentTouch + 23) + 8LL);
    if ( !v24 )
      goto LABEL_147;
    if ( ((*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(v24 + 24))(
            *(_QWORD *)(v24 + 64),
            (unsigned int)this->fields.submitKey1,
            *(_QWORD *)(v24 + 40))
        & 1) != 0 )
    {
      v25 = UICamera_TypeInfo;
      submitKey1 = this->fields.submitKey1;
      if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v12);
        v25 = UICamera_TypeInfo;
      }
      v25->static_fields->currentKey = submitKey1;
      v23 = 1;
    }
  }
  if ( !this->fields.submitKey0 )
    goto LABEL_30;
  currentTouch = (char *)UICamera_TypeInfo;
  if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v12);
    currentTouch = (char *)UICamera_TypeInfo;
  }
  v27 = *(_QWORD *)(*((_QWORD *)currentTouch + 23) + 16LL);
  if ( !v27 )
    goto LABEL_147;
  if ( ((*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(v27 + 24))(
          *(_QWORD *)(v27 + 64),
          (unsigned int)this->fields.submitKey0,
          *(_QWORD *)(v27 + 40))
      & 1) != 0 )
  {
    v28 = UICamera_TypeInfo;
    v29 = this->fields.submitKey0;
    if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v12);
      v28 = UICamera_TypeInfo;
    }
    v28->static_fields->currentKey = v29;
    v30 = 1;
  }
  else
  {
LABEL_30:
    v30 = 0;
  }
  if ( !this->fields.submitKey1 )
    goto LABEL_39;
  currentTouch = (char *)UICamera_TypeInfo;
  if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v12);
    currentTouch = (char *)UICamera_TypeInfo;
  }
  v31 = *(_QWORD *)(*((_QWORD *)currentTouch + 23) + 16LL);
  if ( !v31 )
    goto LABEL_147;
  if ( ((*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(v31 + 24))(
          *(_QWORD *)(v31 + 64),
          (unsigned int)this->fields.submitKey1,
          *(_QWORD *)(v31 + 40))
      & 1) != 0 )
  {
    v32 = UICamera_TypeInfo;
    v30 = this->fields.submitKey1;
    if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v12);
      v32 = UICamera_TypeInfo;
    }
    v32->static_fields->currentKey = v30;
    LOBYTE(v30) = 1;
  }
  else
  {
LABEL_39:
    if ( (v23 | v30) != 1 )
      goto LABEL_47;
    v32 = UICamera_TypeInfo;
  }
  if ( !*(&v32->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v32, v12);
    v32 = UICamera_TypeInfo;
  }
  v33 = v32->static_fields;
  currentTouch = (char *)v33->currentTouch;
  v33->currentScheme = 2;
  if ( !currentTouch )
    goto LABEL_147;
  v34 = *((_QWORD *)currentTouch + 8);
  *((_QWORD *)currentTouch + 7) = v34;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(currentTouch + 56), v34, v13, v14, (int32_t)v15, v16, v17, v18);
  v41 = UICamera_TypeInfo->static_fields;
  currentTouch = (char *)v41->currentTouch;
  if ( !currentTouch )
    goto LABEL_147;
  mCurrentSelection = v41->mCurrentSelection;
  *((_QWORD *)currentTouch + 8) = mCurrentSelection;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)(currentTouch + 64),
    (int32_t)mCurrentSelection,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
  UICamera__ProcessTouch(this, v23, v30, v43);
  currentTouch = (char *)UICamera_TypeInfo->static_fields->currentTouch;
  if ( !currentTouch )
    goto LABEL_147;
  *((_QWORD *)currentTouch + 7) = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(currentTouch + 56), 0, v44, v45, v46, v47, v48, v49);
LABEL_47:
  if ( this->fields.useKeyboard )
  {
    v50 = UICamera_TypeInfo;
    if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v12);
      v50 = UICamera_TypeInfo;
    }
    v51 = *(&v50->_2.cctor_finished + 1);
    if ( v50->static_fields->inputHasFocus )
    {
      if ( !v51 )
        j_il2cpp_runtime_class_init_0(v50, v12);
      Direction = UICamera__GetDirection(273, 274, (const MethodInfo *)v13);
      Direction_56140140 = UICamera__GetDirection(275, 276, v53);
    }
    else
    {
      if ( !v51 )
        j_il2cpp_runtime_class_init_0(v50, v12);
      Direction = UICamera__GetDirection_56140140(119, 273, 115, 274, v15);
      Direction_56140140 = UICamera__GetDirection_56140140(100, 275, 97, 276, v56);
    }
    v55 = Direction_56140140;
  }
  else
  {
    v55 = 0;
    Direction = 0;
  }
  if ( this->fields.useController )
  {
    if ( !System_String__IsNullOrEmpty(this->fields.verticalAxisName, 0) )
    {
      verticalAxisName = this->fields.verticalAxisName;
      if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v57);
      Direction += UICamera__GetDirection_56140476(verticalAxisName, v57);
    }
    if ( !System_String__IsNullOrEmpty(this->fields.horizontalAxisName, 0) )
    {
      horizontalAxisName = this->fields.horizontalAxisName;
      if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v12);
      v55 += UICamera__GetDirection_56140476(horizontalAxisName, v12);
    }
  }
  currentTouch = (char *)UICamera_TypeInfo;
  if ( Direction )
  {
    if ( *(&UICamera_TypeInfo->_2.cctor_finished + 1) )
    {
      v60 = UICamera_TypeInfo->static_fields;
      v60->currentScheme = 2;
      if ( Direction > 0 )
        v61 = 273;
      else
        v61 = 274;
    }
    else
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v12);
      currentTouch = (char *)UICamera_TypeInfo;
      if ( Direction > 0 )
        v61 = 273;
      else
        v61 = 274;
      v62 = *(&UICamera_TypeInfo->_2.cctor_finished + 1);
      v60 = UICamera_TypeInfo->static_fields;
      v60->currentScheme = 2;
      if ( !v62 )
      {
        j_il2cpp_runtime_class_init_0(currentTouch, v12);
        currentTouch = (char *)UICamera_TypeInfo;
        v60 = UICamera_TypeInfo->static_fields;
      }
    }
    onKey = v60->onKey;
    if ( onKey )
    {
      if ( !*((_DWORD *)currentTouch + 57) )
      {
        j_il2cpp_runtime_class_init_0(currentTouch, v12);
        v60 = UICamera_TypeInfo->static_fields;
        onKey = v60->onKey;
        if ( !onKey )
          goto LABEL_147;
      }
      ((void (__fastcall *)(intptr_t, struct UnityEngine_GameObject_o *, _QWORD, intptr_t))onKey->fields.invoke_impl)(
        onKey->fields.method_code,
        v60->mCurrentSelection,
        v61,
        onKey->fields.method);
      currentTouch = (char *)UICamera_TypeInfo;
    }
    if ( !*((_DWORD *)currentTouch + 57) )
    {
      j_il2cpp_runtime_class_init_0(currentTouch, v12);
      currentTouch = (char *)UICamera_TypeInfo;
    }
    v64 = *((_QWORD *)currentTouch + 23);
    v100 = v61;
    v65 = *(UnityEngine_GameObject_o **)(v64 + 312);
    v66 = (Il2CppObject *)j_il2cpp_value_box_0(UnityEngine_KeyCode_TypeInfo, &v100);
    UICamera__Notify(v65, (System_String_o *)StringLiteral_10321/*"OnKey"*/, v66, v67);
    currentTouch = (char *)UICamera_TypeInfo;
  }
  if ( v55 )
  {
    if ( *((_DWORD *)currentTouch + 57) )
    {
      v68 = (struct UICamera_StaticFields *)*((_QWORD *)currentTouch + 23);
      v68->currentScheme = 2;
      if ( v55 > 0 )
        v69 = 275;
      else
        v69 = 276;
    }
    else
    {
      j_il2cpp_runtime_class_init_0(currentTouch, v12);
      currentTouch = (char *)UICamera_TypeInfo;
      if ( v55 > 0 )
        v69 = 275;
      else
        v69 = 276;
      v70 = *(&UICamera_TypeInfo->_2.cctor_finished + 1);
      v68 = UICamera_TypeInfo->static_fields;
      v68->currentScheme = 2;
      if ( !v70 )
      {
        j_il2cpp_runtime_class_init_0(currentTouch, v12);
        currentTouch = (char *)UICamera_TypeInfo;
        v68 = UICamera_TypeInfo->static_fields;
      }
    }
    v71 = v68->onKey;
    if ( v71 )
    {
      if ( !*((_DWORD *)currentTouch + 57) )
      {
        j_il2cpp_runtime_class_init_0(currentTouch, v12);
        v68 = UICamera_TypeInfo->static_fields;
        v71 = v68->onKey;
        if ( !v71 )
          goto LABEL_147;
      }
      ((void (__fastcall *)(intptr_t, struct UnityEngine_GameObject_o *, _QWORD, intptr_t))v71->fields.invoke_impl)(
        v71->fields.method_code,
        v68->mCurrentSelection,
        v69,
        v71->fields.method);
      currentTouch = (char *)UICamera_TypeInfo;
    }
    if ( !*((_DWORD *)currentTouch + 57) )
    {
      j_il2cpp_runtime_class_init_0(currentTouch, v12);
      currentTouch = (char *)UICamera_TypeInfo;
    }
    v72 = *((_QWORD *)currentTouch + 23);
    v100 = v69;
    v73 = *(UnityEngine_GameObject_o **)(v72 + 312);
    v74 = (Il2CppObject *)j_il2cpp_value_box_0(UnityEngine_KeyCode_TypeInfo, &v100);
    UICamera__Notify(v73, (System_String_o *)StringLiteral_10321/*"OnKey"*/, v74, v75);
    currentTouch = (char *)UICamera_TypeInfo;
  }
  if ( this->fields.useKeyboard )
  {
    if ( !*((_DWORD *)currentTouch + 57) )
    {
      j_il2cpp_runtime_class_init_0(currentTouch, v12);
      currentTouch = (char *)UICamera_TypeInfo;
    }
    v76 = *(_QWORD *)(*((_QWORD *)currentTouch + 23) + 8LL);
    if ( !v76 )
      goto LABEL_147;
    v77 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(v76 + 24))(
            *(_QWORD *)(v76 + 64),
            9,
            *(_QWORD *)(v76 + 40));
    currentTouch = (char *)UICamera_TypeInfo;
    if ( (v77 & 1) != 0 )
    {
      if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v12);
        currentTouch = (char *)UICamera_TypeInfo;
      }
      v78 = (struct UICamera_StaticFields *)*((_QWORD *)currentTouch + 23);
      v79 = v78->onKey;
      v78->currentKey = 9;
      v78->currentScheme = 2;
      if ( v79 )
      {
        if ( !*((_DWORD *)currentTouch + 57) )
        {
          j_il2cpp_runtime_class_init_0(currentTouch, v12);
          v78 = UICamera_TypeInfo->static_fields;
          v79 = v78->onKey;
          if ( !v79 )
            goto LABEL_147;
        }
        ((void (__fastcall *)(intptr_t, struct UnityEngine_GameObject_o *, __int64, intptr_t))v79->fields.invoke_impl)(
          v79->fields.method_code,
          v78->mCurrentSelection,
          9,
          v79->fields.method);
        currentTouch = (char *)UICamera_TypeInfo;
      }
      if ( !*((_DWORD *)currentTouch + 57) )
      {
        j_il2cpp_runtime_class_init_0(currentTouch, v12);
        currentTouch = (char *)UICamera_TypeInfo;
      }
      v80 = *(UnityEngine_GameObject_o **)(*((_QWORD *)currentTouch + 23) + 312LL);
      v100 = 9;
      v81 = (Il2CppObject *)j_il2cpp_value_box_0(UnityEngine_KeyCode_TypeInfo, &v100);
      UICamera__Notify(v80, (System_String_o *)StringLiteral_10321/*"OnKey"*/, v81, v82);
      currentTouch = (char *)UICamera_TypeInfo;
    }
  }
  if ( this->fields.cancelKey0 )
  {
    if ( !*((_DWORD *)currentTouch + 57) )
    {
      j_il2cpp_runtime_class_init_0(currentTouch, v12);
      currentTouch = (char *)UICamera_TypeInfo;
    }
    v83 = *(_QWORD *)(*((_QWORD *)currentTouch + 23) + 8LL);
    if ( !v83 )
      goto LABEL_147;
    v84 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(v83 + 24))(
            *(_QWORD *)(v83 + 64),
            (unsigned int)this->fields.cancelKey0,
            *(_QWORD *)(v83 + 40));
    currentTouch = (char *)UICamera_TypeInfo;
    if ( (v84 & 1) != 0 )
    {
      cancelKey0 = this->fields.cancelKey0;
      if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v12);
        currentTouch = (char *)UICamera_TypeInfo;
      }
      v86 = (struct UICamera_StaticFields *)*((_QWORD *)currentTouch + 23);
      v87 = v86->onKey;
      v86->currentKey = cancelKey0;
      v86->currentScheme = 2;
      if ( v87 )
      {
        if ( !*((_DWORD *)currentTouch + 57) )
        {
          j_il2cpp_runtime_class_init_0(currentTouch, v12);
          v86 = UICamera_TypeInfo->static_fields;
          v87 = v86->onKey;
          if ( !v87 )
            goto LABEL_147;
        }
        ((void (__fastcall *)(intptr_t, struct UnityEngine_GameObject_o *, __int64, intptr_t))v87->fields.invoke_impl)(
          v87->fields.method_code,
          v86->mCurrentSelection,
          27,
          v87->fields.method);
        currentTouch = (char *)UICamera_TypeInfo;
      }
      if ( !*((_DWORD *)currentTouch + 57) )
      {
        j_il2cpp_runtime_class_init_0(currentTouch, v12);
        currentTouch = (char *)UICamera_TypeInfo;
      }
      v88 = *(UnityEngine_GameObject_o **)(*((_QWORD *)currentTouch + 23) + 312LL);
      v100 = 27;
      v89 = (Il2CppObject *)j_il2cpp_value_box_0(UnityEngine_KeyCode_TypeInfo, &v100);
      UICamera__Notify(v88, (System_String_o *)StringLiteral_10321/*"OnKey"*/, v89, v90);
      currentTouch = (char *)UICamera_TypeInfo;
    }
  }
  if ( !this->fields.cancelKey1 )
    goto LABEL_144;
  if ( !*((_DWORD *)currentTouch + 57) )
  {
    j_il2cpp_runtime_class_init_0(currentTouch, v12);
    currentTouch = (char *)UICamera_TypeInfo;
  }
  v91 = *(_QWORD *)(*((_QWORD *)currentTouch + 23) + 8LL);
  if ( !v91 )
LABEL_147:
    sub_2213CDC(currentTouch, v12);
  v92 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(v91 + 24))(
          *(_QWORD *)(v91 + 64),
          (unsigned int)this->fields.cancelKey1,
          *(_QWORD *)(v91 + 40));
  currentTouch = (char *)UICamera_TypeInfo;
  if ( (v92 & 1) == 0 )
    goto LABEL_144;
  cancelKey1 = this->fields.cancelKey1;
  if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v12);
    currentTouch = (char *)UICamera_TypeInfo;
  }
  v94 = (struct UICamera_StaticFields *)*((_QWORD *)currentTouch + 23);
  v95 = v94->onKey;
  v94->currentKey = cancelKey1;
  v94->currentScheme = 2;
  if ( v95 )
  {
    if ( *((_DWORD *)currentTouch + 57)
      || (j_il2cpp_runtime_class_init_0(currentTouch, v12),
          v94 = UICamera_TypeInfo->static_fields,
          (v95 = v94->onKey) != 0) )
    {
      ((void (__fastcall *)(intptr_t, struct UnityEngine_GameObject_o *, __int64, intptr_t))v95->fields.invoke_impl)(
        v95->fields.method_code,
        v94->mCurrentSelection,
        27,
        v95->fields.method);
      currentTouch = (char *)UICamera_TypeInfo;
      goto LABEL_141;
    }
    goto LABEL_147;
  }
LABEL_141:
  if ( !*((_DWORD *)currentTouch + 57) )
  {
    j_il2cpp_runtime_class_init_0(currentTouch, v12);
    currentTouch = (char *)UICamera_TypeInfo;
  }
  v96 = *(UnityEngine_GameObject_o **)(*((_QWORD *)currentTouch + 23) + 312LL);
  v100 = 27;
  v97 = (Il2CppObject *)j_il2cpp_value_box_0(UnityEngine_KeyCode_TypeInfo, &v100);
  UICamera__Notify(v96, (System_String_o *)StringLiteral_10321/*"OnKey"*/, v97, v98);
  currentTouch = (char *)UICamera_TypeInfo;
LABEL_144:
  if ( !*((_DWORD *)currentTouch + 57) )
  {
    j_il2cpp_runtime_class_init_0(currentTouch, v12);
    currentTouch = (char *)UICamera_TypeInfo;
  }
  v99 = *((_QWORD *)currentTouch + 23);
  *(_QWORD *)(v99 + 160) = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v99 + 160), 0, v13, v14, (int32_t)v15, v16, v17, v18);
  UICamera_TypeInfo->static_fields->currentKey = 0;
}


// local variable allocation has failed, the output may be wrong!
void UICamera__ProcessPress(UICamera_o *this, bool pressed, float click, float drag, const MethodInfo *method)
{
  UnityEngine_Object_o *mTooltip; // x20
  const MethodInfo *v10; // x2
  char *v11; // x0
  __int64 v12; // x9
  struct UICamera_MouseOrTouch_o *currentTouch; // x8
  __int64 v14; // x9
  UnityEngine_Object_o *v15; // x20
  bool v16; // w8
  __int64 v17; // x9
  __int64 v18; // x8
  __int64 v19; // x9
  __int64 v20; // x8
  UnityEngine_GameObject_o *v21; // x20
  Il2CppObject *v22; // x0
  const MethodInfo *v23; // x3
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  __int64 v30; // x1
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7
  __int64 v37; // x1
  struct UICamera_MouseOrTouch_o *v38; // x20
  int v39; // w8
  __int64 v40; // x9
  struct UICamera_MouseOrTouch_o *v41; // x8
  __int64 v42; // x9
  UnityEngine_Object_o *v43; // x20
  bool v44; // w8
  __int64 v45; // x9
  __int64 v46; // x8
  __int64 v47; // x9
  UnityEngine_Vector2_o *v48; // x8
  struct UICamera_MouseOrTouch_o *v49; // x8
  UnityEngine_GameObject_o *v50; // x20
  Il2CppObject *v51; // x0
  const MethodInfo *v52; // x3
  __int64 v53; // x1
  UnityEngine_Object_o *v54; // x20
  const MethodInfo *v55; // x2
  __int64 v56; // x8
  __int64 v57; // x8
  UnityEngine_Object_o *v58; // x20
  float32x2_t *v59; // x8
  UnityEngine_Object_o *v60; // x20
  UnityEngine_Object_o *v61; // x21
  float32x2_t *v62; // x8
  struct UICamera_MouseOrTouch_o *v63; // x8
  float v64; // s10
  UnityEngine_Object_o *last; // x20
  UnityEngine_Object_o *current; // x21
  const MethodInfo *v67; // x3
  bool v68; // w8
  __int64 v69; // x10
  __int64 v70; // x8
  struct UICamera_StaticFields *static_fields; // x9
  struct UICamera_VoidDelegate_o *onDragStart; // x8
  struct UICamera_MouseOrTouch_o *v73; // x9
  __int64 v74; // x8
  const MethodInfo *v75; // x3
  struct UICamera_StaticFields *v76; // x9
  struct UICamera_ObjectDelegate_o *onDragOver; // x8
  struct UICamera_MouseOrTouch_o *v78; // x9
  __int64 v79; // x8
  int v80; // w24
  struct UICamera_MouseOrTouch_o *v81; // x8
  struct UnityEngine_Vector2_o totalDelta; // x9
  __int64 v83; // x8
  UnityEngine_Object_o *v84; // x20
  const MethodInfo *v85; // x2
  __int64 v86; // x9
  struct UICamera_MouseOrTouch_o *v87; // x8
  int32_t clickNotification; // w21
  const MethodInfo *v89; // x3
  int v90; // w8
  struct UICamera_StaticFields *v91; // x9
  struct UICamera_VoidDelegate_o *v92; // x8
  struct UICamera_MouseOrTouch_o *v93; // x9
  __int64 v94; // x8
  Il2CppObject *v95; // x2
  __int64 *v96; // x9
  UnityEngine_GameObject_o *v97; // x0
  __int64 v98; // x8
  UnityEngine_Object_o *v99; // x19
  UnityEngine_Object_o *v100; // x20
  struct UICamera_StaticFields *v101; // x9
  struct UICamera_VoidDelegate_o *v102; // x8
  struct UICamera_MouseOrTouch_o *v103; // x9
  __int64 v104; // x8
  const MethodInfo *v105; // x3
  struct UICamera_StaticFields *v106; // x9
  struct UICamera_ObjectDelegate_o *v107; // x8
  struct UICamera_MouseOrTouch_o *v108; // x9
  __int64 v109; // x8
  struct UICamera_StaticFields *v110; // x9
  struct UICamera_VectorDelegate_o *onDrag; // x8
  struct UICamera_MouseOrTouch_o *v112; // x9
  __int64 v113; // x8
  UnityEngine_GameObject_o *v114; // x19
  Il2CppObject *v115; // x0
  const MethodInfo *v116; // x3
  System_String_o *v117; // x2
  System_String_o *v118; // x3
  int32_t v119; // w4
  int32_t v120; // w5
  bool v121; // w6
  bool v122; // w7
  __int64 v123; // x1
  struct UICamera_StaticFields *v124; // x8
  int v125; // w9
  struct UICamera_MouseOrTouch_o *v126; // x8
  __int64 v127; // [xsp+8h] [xbp-68h] BYREF
  char v128[4]; // [xsp+18h] [xbp-58h] BYREF
  _BYTE v129[4]; // [xsp+1Ch] [xbp-54h] BYREF

  if ( (byte_5974F21 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&UICamera_TypeInfo);
    sub_2213A60(&UnityEngine_Vector2_TypeInfo);
    sub_2213A60(&StringLiteral_10296/*"OnDragStart"*/);
    sub_2213A60(&StringLiteral_10292/*"OnDrag"*/);
    sub_2213A60(&StringLiteral_10348/*"OnPress"*/);
    sub_2213A60(&StringLiteral_10294/*"OnDragOut"*/);
    sub_2213A60(&StringLiteral_10295/*"OnDragOver"*/);
    byte_5974F21 = 1;
  }
  if ( pressed )
  {
    mTooltip = (UnityEngine_Object_o *)this->fields.mTooltip;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, pressed);
    if ( UnityEngine_Object__op_Inequality(mTooltip, 0, 0) )
      UICamera__ShowTooltip(this, 0, v10);
    v11 = (char *)UICamera_TypeInfo;
    if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, pressed);
      v11 = (char *)UICamera_TypeInfo;
    }
    v12 = *((_QWORD *)v11 + 23);
    currentTouch = *(struct UICamera_MouseOrTouch_o **)(v12 + 160);
    if ( currentTouch )
    {
      v14 = *(_QWORD *)(v12 + 216);
      currentTouch->fields.pressStarted = 1;
      if ( v14 )
      {
        if ( !*((_DWORD *)v11 + 57) )
        {
          j_il2cpp_runtime_class_init_0(v11, pressed);
          currentTouch = UICamera_TypeInfo->static_fields->currentTouch;
          if ( !currentTouch )
            goto LABEL_189;
        }
        v15 = (UnityEngine_Object_o *)currentTouch->fields.pressed;
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, pressed);
        v16 = UnityEngine_Object__op_Implicit(v15, 0);
        v11 = (char *)UICamera_TypeInfo;
        if ( v16 )
        {
          if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, pressed);
            v11 = (char *)UICamera_TypeInfo;
          }
          v17 = *((_QWORD *)v11 + 23);
          v18 = *(_QWORD *)(v17 + 160);
          if ( !v18 )
            goto LABEL_189;
          v19 = *(_QWORD *)(v17 + 216);
          if ( !v19 )
            goto LABEL_189;
          (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(v19 + 24))(
            *(_QWORD *)(v19 + 64),
            *(_QWORD *)(v18 + 72),
            0,
            *(_QWORD *)(v19 + 40));
          v11 = (char *)UICamera_TypeInfo;
        }
      }
      if ( !*((_DWORD *)v11 + 57) )
      {
        j_il2cpp_runtime_class_init_0(v11, pressed);
        v11 = (char *)UICamera_TypeInfo;
      }
      v20 = *(_QWORD *)(*((_QWORD *)v11 + 23) + 160LL);
      if ( v20 )
      {
        v21 = *(UnityEngine_GameObject_o **)(v20 + 72);
        v129[0] = 0;
        v22 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984328, v129);
        UICamera__Notify(v21, (System_String_o *)StringLiteral_10348/*"OnPress"*/, v22, v23);
        v11 = (char *)UICamera_TypeInfo->static_fields->currentTouch;
        if ( v11 )
        {
          v30 = *((_QWORD *)v11 + 8);
          *((_QWORD *)v11 + 9) = v30;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v11 + 72), v30, v24, v25, v26, v27, v28, v29);
          v11 = (char *)UICamera_TypeInfo->static_fields->currentTouch;
          if ( v11 )
          {
            v37 = *((_QWORD *)v11 + 8);
            *((_QWORD *)v11 + 10) = v37;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)(v11 + 80), v37, v31, v32, v33, v34, v35, v36);
            v11 = (char *)UICamera_TypeInfo;
            v38 = UICamera_TypeInfo->static_fields->currentTouch;
            if ( v38 )
            {
              v39 = (unsigned __int8)byte_59699C0;
              v38->fields.clickNotification = 2;
              if ( !v39 )
              {
                sub_2213A60(&UnityEngine_Vector2_TypeInfo);
                v11 = (char *)UICamera_TypeInfo;
                byte_59699C0 = 1;
              }
              v38->fields.totalDelta = UnityEngine_Vector2_TypeInfo->static_fields->zeroVector;
              v40 = *((_QWORD *)v11 + 23);
              v41 = *(struct UICamera_MouseOrTouch_o **)(v40 + 160);
              if ( v41 )
              {
                v42 = *(_QWORD *)(v40 + 216);
                v41->fields.dragStarted = 0;
                if ( v42 )
                {
                  if ( !*((_DWORD *)v11 + 57) )
                  {
                    j_il2cpp_runtime_class_init_0(v11, pressed);
                    v41 = UICamera_TypeInfo->static_fields->currentTouch;
                    if ( !v41 )
                      goto LABEL_189;
                  }
                  v43 = (UnityEngine_Object_o *)v41->fields.pressed;
                  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, pressed);
                  v44 = UnityEngine_Object__op_Implicit(v43, 0);
                  v11 = (char *)UICamera_TypeInfo;
                  if ( v44 )
                  {
                    if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
                    {
                      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, pressed);
                      v11 = (char *)UICamera_TypeInfo;
                    }
                    v45 = *((_QWORD *)v11 + 23);
                    v46 = *(_QWORD *)(v45 + 160);
                    if ( !v46 )
                      goto LABEL_189;
                    v47 = *(_QWORD *)(v45 + 216);
                    if ( !v47 )
                      goto LABEL_189;
                    (*(void (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD))(v47 + 24))(
                      *(_QWORD *)(v47 + 64),
                      *(_QWORD *)(v46 + 72),
                      1,
                      *(_QWORD *)(v47 + 40));
                    v11 = (char *)UICamera_TypeInfo;
                  }
                }
                if ( !*((_DWORD *)v11 + 57) )
                {
                  j_il2cpp_runtime_class_init_0(v11, pressed);
                  v11 = (char *)UICamera_TypeInfo;
                }
                v48 = *(UnityEngine_Vector2_o **)(*((_QWORD *)v11 + 23) + 160LL);
                if ( v48 )
                {
                  NguiTouchEffectManager__Press(v48[2], (const MethodInfo *)v11);
                  v49 = UICamera_TypeInfo->static_fields->currentTouch;
                  if ( v49 )
                  {
                    v50 = v49->fields.pressed;
                    v128[0] = 1;
                    v51 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984328, v128);
                    UICamera__Notify(v50, (System_String_o *)StringLiteral_10348/*"OnPress"*/, v51, v52);
                    v54 = (UnityEngine_Object_o *)this->fields.mTooltip;
                    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v53);
                    if ( UnityEngine_Object__op_Inequality(v54, 0, 0) )
                      UICamera__ShowTooltip(this, 0, v55);
                    v11 = (char *)UICamera_TypeInfo;
                    if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
                    {
                      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, pressed);
                      v11 = (char *)UICamera_TypeInfo;
                    }
                    v56 = *(_QWORD *)(*((_QWORD *)v11 + 23) + 160LL);
                    if ( v56 )
                    {
                      UICamera__set_selectedObject(
                        *(UnityEngine_GameObject_o **)(v56 + 72),
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
LABEL_189:
    sub_2213CDC(v11, pressed);
  }
  v11 = (char *)UICamera_TypeInfo;
  if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, pressed);
    v11 = (char *)UICamera_TypeInfo;
  }
  v57 = *(_QWORD *)(*((_QWORD *)v11 + 23) + 160LL);
  if ( !v57 )
    goto LABEL_189;
  v58 = *(UnityEngine_Object_o **)(v57 + 72);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, pressed);
  if ( UnityEngine_Object__op_Inequality(v58, 0, 0) )
  {
    v11 = (char *)UICamera_TypeInfo;
    if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, pressed);
      v11 = (char *)UICamera_TypeInfo;
    }
    v59 = *(float32x2_t **)(*((_QWORD *)v11 + 23) + 160LL);
    if ( !v59 )
      goto LABEL_189;
    if ( vaddv_f32(vmul_f32(v59[4], v59[4])) == 0.0 )
    {
      if ( !*((_DWORD *)v11 + 57) )
      {
        j_il2cpp_runtime_class_init_0(v11, pressed);
        v59 = (float32x2_t *)UICamera_TypeInfo->static_fields->currentTouch;
        if ( !v59 )
          goto LABEL_189;
      }
      v61 = (UnityEngine_Object_o *)v59[7].n64_u64[0];
      v60 = (UnityEngine_Object_o *)v59[8].n64_u64[0];
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, pressed);
      if ( !UnityEngine_Object__op_Inequality(v60, v61, 0) )
        return;
      v11 = (char *)UICamera_TypeInfo;
    }
    if ( !*((_DWORD *)v11 + 57) )
    {
      j_il2cpp_runtime_class_init_0(v11, pressed);
      v11 = (char *)UICamera_TypeInfo;
    }
    v62 = *(float32x2_t **)(*((_QWORD *)v11 + 23) + 160LL);
    if ( !v62 )
      goto LABEL_189;
    v62[5].n64_u64[0] = vadd_f32(v62[5], v62[4]).n64_u64[0];
    v63 = *(struct UICamera_MouseOrTouch_o **)(*((_QWORD *)v11 + 23) + 160LL);
    if ( !v63 )
      goto LABEL_189;
    v64 = (float)(v63->fields.totalDelta.fields.x * v63->fields.totalDelta.fields.x)
        + (float)(v63->fields.totalDelta.fields.y * v63->fields.totalDelta.fields.y);
    if ( v63->fields.dragStarted )
      goto LABEL_192;
    if ( !*((_DWORD *)v11 + 57) )
    {
      j_il2cpp_runtime_class_init_0(v11, pressed);
      v63 = UICamera_TypeInfo->static_fields->currentTouch;
      if ( !v63 )
        goto LABEL_189;
    }
    last = (UnityEngine_Object_o *)v63->fields.last;
    current = (UnityEngine_Object_o *)v63->fields.current;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, pressed);
    v68 = UnityEngine_Object__op_Inequality(last, current, 0);
    v11 = (char *)UICamera_TypeInfo;
    if ( !v68 )
    {
LABEL_192:
      if ( !*((_DWORD *)v11 + 57) )
      {
        j_il2cpp_runtime_class_init_0(v11, pressed);
        v11 = (char *)UICamera_TypeInfo;
      }
      v81 = *(struct UICamera_MouseOrTouch_o **)(*((_QWORD *)v11 + 23) + 160LL);
      if ( !v81 )
        goto LABEL_189;
      v80 = 0;
      if ( v64 > drag && !v81->fields.dragStarted )
      {
        if ( !*((_DWORD *)v11 + 57) )
        {
          j_il2cpp_runtime_class_init_0(v11, pressed);
          v11 = (char *)UICamera_TypeInfo;
          v81 = UICamera_TypeInfo->static_fields->currentTouch;
          if ( !v81 )
            goto LABEL_189;
        }
        totalDelta = v81->fields.totalDelta;
        v80 = 1;
        v81->fields.dragStarted = 1;
        v81->fields.delta = totalDelta;
      }
    }
    else
    {
      if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, pressed);
        v11 = (char *)UICamera_TypeInfo;
      }
      v69 = *(_QWORD *)(*((_QWORD *)v11 + 23) + 160LL);
      if ( !v69 )
        goto LABEL_189;
      v70 = *(_QWORD *)(v69 + 40);
      *(_BYTE *)(v69 + 102) = 1;
      *(_QWORD *)(v69 + 32) = v70;
      static_fields = (struct UICamera_StaticFields *)*((_QWORD *)v11 + 23);
      onDragStart = static_fields->onDragStart;
      static_fields->isDragging = 1;
      if ( onDragStart )
      {
        if ( !*((_DWORD *)v11 + 57) )
        {
          j_il2cpp_runtime_class_init_0(v11, pressed);
          static_fields = UICamera_TypeInfo->static_fields;
          onDragStart = static_fields->onDragStart;
        }
        v73 = static_fields->currentTouch;
        if ( !v73 || !onDragStart )
          goto LABEL_189;
        ((void (__fastcall *)(intptr_t, struct UnityEngine_GameObject_o *, intptr_t))onDragStart->fields.invoke_impl)(
          onDragStart->fields.method_code,
          v73->fields.dragged,
          onDragStart->fields.method);
        v11 = (char *)UICamera_TypeInfo;
      }
      if ( !*((_DWORD *)v11 + 57) )
      {
        j_il2cpp_runtime_class_init_0(v11, pressed);
        v11 = (char *)UICamera_TypeInfo;
      }
      v74 = *(_QWORD *)(*((_QWORD *)v11 + 23) + 160LL);
      if ( !v74 )
        goto LABEL_189;
      UICamera__Notify(*(UnityEngine_GameObject_o **)(v74 + 80), (System_String_o *)StringLiteral_10296/*"OnDragStart"*/, 0, v67);
      v11 = (char *)UICamera_TypeInfo;
      v76 = UICamera_TypeInfo->static_fields;
      onDragOver = v76->onDragOver;
      if ( onDragOver )
      {
        if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, pressed);
          v76 = UICamera_TypeInfo->static_fields;
          onDragOver = v76->onDragOver;
        }
        v78 = v76->currentTouch;
        if ( !v78 || !onDragOver )
          goto LABEL_189;
        ((void (__fastcall *)(intptr_t, struct UnityEngine_GameObject_o *, struct UnityEngine_GameObject_o *, intptr_t))onDragOver->fields.invoke_impl)(
          onDragOver->fields.method_code,
          v78->fields.last,
          v78->fields.dragged,
          onDragOver->fields.method);
        v11 = (char *)UICamera_TypeInfo;
      }
      if ( !*((_DWORD *)v11 + 57) )
      {
        j_il2cpp_runtime_class_init_0(v11, pressed);
        v11 = (char *)UICamera_TypeInfo;
      }
      v79 = *(_QWORD *)(*((_QWORD *)v11 + 23) + 160LL);
      if ( !v79 )
        goto LABEL_189;
      UICamera__Notify(
        *(UnityEngine_GameObject_o **)(v79 + 56),
        (System_String_o *)StringLiteral_10295/*"OnDragOver"*/,
        *(Il2CppObject **)(v79 + 80),
        v75);
      v11 = (char *)UICamera_TypeInfo;
      v80 = 0;
      UICamera_TypeInfo->static_fields->isDragging = 0;
    }
    if ( !*((_DWORD *)v11 + 57) )
    {
      j_il2cpp_runtime_class_init_0(v11, pressed);
      v11 = (char *)UICamera_TypeInfo;
    }
    v83 = *(_QWORD *)(*((_QWORD *)v11 + 23) + 160LL);
    if ( !v83 )
      goto LABEL_189;
    if ( *(_BYTE *)(v83 + 102) )
    {
      v84 = (UnityEngine_Object_o *)this->fields.mTooltip;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, pressed);
      if ( UnityEngine_Object__op_Inequality(v84, 0, 0) )
        UICamera__ShowTooltip(this, 0, v85);
      v11 = (char *)UICamera_TypeInfo;
      if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, pressed);
        v11 = (char *)UICamera_TypeInfo;
      }
      v86 = *((_QWORD *)v11 + 23);
      v87 = *(struct UICamera_MouseOrTouch_o **)(v86 + 160);
      *(_BYTE *)(v86 + 368) = 1;
      if ( !v87 )
        goto LABEL_189;
      clickNotification = v87->fields.clickNotification;
      if ( !*((_DWORD *)v11 + 57) )
      {
        j_il2cpp_runtime_class_init_0(v11, pressed);
        v87 = UICamera_TypeInfo->static_fields->currentTouch;
        if ( !v87 )
          goto LABEL_189;
      }
      NguiTouchEffectManager__Drag(v87->fields.delta, (const MethodInfo *)v11);
      v11 = (char *)UICamera_TypeInfo;
      v90 = *(&UICamera_TypeInfo->_2.cctor_finished + 1);
      if ( v80 )
      {
        if ( !v90 )
        {
          j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, pressed);
          v11 = (char *)UICamera_TypeInfo;
        }
        v91 = (struct UICamera_StaticFields *)*((_QWORD *)v11 + 23);
        v92 = v91->onDragStart;
        if ( v92 )
        {
          if ( !*((_DWORD *)v11 + 57) )
          {
            j_il2cpp_runtime_class_init_0(v11, pressed);
            v91 = UICamera_TypeInfo->static_fields;
            v92 = v91->onDragStart;
          }
          v93 = v91->currentTouch;
          if ( !v93 || !v92 )
            goto LABEL_189;
          ((void (__fastcall *)(intptr_t, struct UnityEngine_GameObject_o *, intptr_t))v92->fields.invoke_impl)(
            v92->fields.method_code,
            v93->fields.dragged,
            v92->fields.method);
          v11 = (char *)UICamera_TypeInfo;
        }
        if ( !*((_DWORD *)v11 + 57) )
        {
          j_il2cpp_runtime_class_init_0(v11, pressed);
          v11 = (char *)UICamera_TypeInfo;
        }
        v94 = *(_QWORD *)(*((_QWORD *)v11 + 23) + 160LL);
        if ( !v94 )
          goto LABEL_189;
        v95 = 0;
        v96 = &StringLiteral_10296/*"OnDragStart"*/;
        v97 = *(UnityEngine_GameObject_o **)(v94 + 80);
      }
      else
      {
        if ( !v90 )
        {
          j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, pressed);
          v11 = (char *)UICamera_TypeInfo;
        }
        v98 = *(_QWORD *)(*((_QWORD *)v11 + 23) + 160LL);
        if ( !v98 )
          goto LABEL_189;
        v99 = *(UnityEngine_Object_o **)(v98 + 56);
        v100 = *(UnityEngine_Object_o **)(v98 + 64);
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, pressed);
        if ( !UnityEngine_Object__op_Inequality(v99, v100, 0) )
          goto LABEL_164;
        v11 = (char *)UICamera_TypeInfo;
        if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, pressed);
          v11 = (char *)UICamera_TypeInfo;
        }
        v101 = (struct UICamera_StaticFields *)*((_QWORD *)v11 + 23);
        v102 = v101->onDragStart;
        if ( v102 )
        {
          if ( !*((_DWORD *)v11 + 57) )
          {
            j_il2cpp_runtime_class_init_0(v11, pressed);
            v101 = UICamera_TypeInfo->static_fields;
            v102 = v101->onDragStart;
          }
          v103 = v101->currentTouch;
          if ( !v103 || !v102 )
            goto LABEL_189;
          ((void (__fastcall *)(intptr_t, struct UnityEngine_GameObject_o *, intptr_t))v102->fields.invoke_impl)(
            v102->fields.method_code,
            v103->fields.dragged,
            v102->fields.method);
          v11 = (char *)UICamera_TypeInfo;
        }
        if ( !*((_DWORD *)v11 + 57) )
        {
          j_il2cpp_runtime_class_init_0(v11, pressed);
          v11 = (char *)UICamera_TypeInfo;
        }
        v104 = *(_QWORD *)(*((_QWORD *)v11 + 23) + 160LL);
        if ( !v104 )
          goto LABEL_189;
        v96 = &StringLiteral_10294/*"OnDragOut"*/;
        v97 = *(UnityEngine_GameObject_o **)(v104 + 56);
        v95 = *(Il2CppObject **)(v104 + 80);
      }
      UICamera__Notify(v97, (System_String_o *)*v96, v95, v89);
      v11 = (char *)UICamera_TypeInfo;
      v106 = UICamera_TypeInfo->static_fields;
      v107 = v106->onDragOver;
      if ( v107 )
      {
        if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, pressed);
          v106 = UICamera_TypeInfo->static_fields;
          v107 = v106->onDragOver;
        }
        v108 = v106->currentTouch;
        if ( !v108 || !v107 )
          goto LABEL_189;
        ((void (__fastcall *)(intptr_t, struct UnityEngine_GameObject_o *, struct UnityEngine_GameObject_o *, intptr_t))v107->fields.invoke_impl)(
          v107->fields.method_code,
          v108->fields.last,
          v108->fields.dragged,
          v107->fields.method);
        v11 = (char *)UICamera_TypeInfo;
      }
      if ( !*((_DWORD *)v11 + 57) )
      {
        j_il2cpp_runtime_class_init_0(v11, pressed);
        v11 = (char *)UICamera_TypeInfo;
      }
      v109 = *(_QWORD *)(*((_QWORD *)v11 + 23) + 160LL);
      if ( !v109 )
        goto LABEL_189;
      UICamera__Notify(
        *(UnityEngine_GameObject_o **)(v109 + 64),
        (System_String_o *)StringLiteral_10295/*"OnDragOver"*/,
        *(Il2CppObject **)(v109 + 80),
        v105);
LABEL_164:
      v11 = (char *)UICamera_TypeInfo;
      if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, pressed);
        v11 = (char *)UICamera_TypeInfo;
      }
      v110 = (struct UICamera_StaticFields *)*((_QWORD *)v11 + 23);
      onDrag = v110->onDrag;
      if ( onDrag )
      {
        if ( !*((_DWORD *)v11 + 57) )
        {
          j_il2cpp_runtime_class_init_0(v11, pressed);
          v110 = UICamera_TypeInfo->static_fields;
          onDrag = v110->onDrag;
        }
        v112 = v110->currentTouch;
        if ( !v112 || !onDrag )
          goto LABEL_189;
        ((void (__fastcall *)(intptr_t, struct UnityEngine_GameObject_o *, intptr_t, float, float))onDrag->fields.invoke_impl)(
          onDrag->fields.method_code,
          v112->fields.dragged,
          onDrag->fields.method,
          v112->fields.delta.fields.x,
          v112->fields.delta.fields.y);
        v11 = (char *)UICamera_TypeInfo;
      }
      if ( !*((_DWORD *)v11 + 57) )
      {
        j_il2cpp_runtime_class_init_0(v11, pressed);
        v11 = (char *)UICamera_TypeInfo;
      }
      v113 = *(_QWORD *)(*((_QWORD *)v11 + 23) + 160LL);
      if ( !v113 )
        goto LABEL_189;
      v114 = *(UnityEngine_GameObject_o **)(v113 + 80);
      v127 = *(_QWORD *)(v113 + 32);
      v115 = (Il2CppObject *)j_il2cpp_value_box_0(UnityEngine_Vector2_TypeInfo, &v127);
      UICamera__Notify(v114, (System_String_o *)StringLiteral_10292/*"OnDrag"*/, v115, v116);
      v11 = (char *)UICamera_TypeInfo->static_fields->currentTouch;
      if ( !v11 )
        goto LABEL_189;
      v123 = *((_QWORD *)v11 + 8);
      *((_QWORD *)v11 + 7) = v123;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v11 + 56), v123, v117, v118, v119, v120, v121, v122);
      v11 = (char *)UICamera_TypeInfo;
      v124 = UICamera_TypeInfo->static_fields;
      v125 = *(&UICamera_TypeInfo->_2.cctor_finished + 1);
      v124->isDragging = 0;
      if ( !clickNotification )
      {
        if ( v125 )
          goto LABEL_186;
        goto LABEL_185;
      }
      if ( !v125 )
      {
        j_il2cpp_runtime_class_init_0(v11, pressed);
        v11 = (char *)UICamera_TypeInfo;
        v124 = UICamera_TypeInfo->static_fields;
      }
      v126 = v124->currentTouch;
      if ( !v126 )
        goto LABEL_189;
      if ( v126->fields.clickNotification == 2 && v64 > click )
      {
        if ( *((_DWORD *)v11 + 57) )
        {
LABEL_187:
          v126->fields.clickNotification = 0;
          return;
        }
LABEL_185:
        j_il2cpp_runtime_class_init_0(v11, pressed);
        v124 = UICamera_TypeInfo->static_fields;
LABEL_186:
        v126 = v124->currentTouch;
        if ( !v126 )
          goto LABEL_189;
        goto LABEL_187;
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void UICamera__ProcessRelease(UICamera_o *this, bool isMouse, float drag, const MethodInfo *method)
{
  const MethodInfo *v7; // x0
  __int64 v8; // x1
  char *v9; // x0
  __int64 v10; // x8
  UnityEngine_Object_o *mTooltip; // x21
  const MethodInfo *v12; // x2
  __int64 v13; // x8
  UnityEngine_Object_o *v14; // x20
  System_String_o *v15; // x2
  MethodInfo *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
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
  System_String_o *v38; // x2
  System_String_o *v39; // x3
  int32_t v40; // w4
  int32_t v41; // w5
  bool v42; // w6
  bool v43; // w7
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
  bool v57; // w8
  struct UICamera_MouseOrTouch_o *v58; // x8
  UnityEngine_Object_o *pressed; // x19
  UnityEngine_Object_o *v60; // x20
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
  struct UICamera_StaticFields *v74; // x8
  float32x2_t *v75; // x8
  struct UICamera_StaticFields *v76; // x8
  struct UICamera_MouseOrTouch_o *v77; // x9
  struct UICamera_ObjectDelegate_o *onDrop; // x9
  struct UICamera_MouseOrTouch_o *v79; // x8
  __int64 v80; // x8
  UICamera_c *v81; // x0
  MissionNaviTransitionBoardItem_o *v82; // x0
  System_String_o *v83; // x2
  System_String_o *v84; // x3
  int32_t v85; // w4
  int32_t v86; // w5
  bool v87; // w6
  bool v88; // w7
  char v89[4]; // [xsp+8h] [xbp-38h] BYREF
  char v90[4]; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_5974F22 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&UICamera_TypeInfo);
    sub_2213A60(&StringLiteral_10293/*"OnDragEnd"*/);
    sub_2213A60(&StringLiteral_10237/*"OnClick"*/);
    sub_2213A60(&StringLiteral_10290/*"OnDoubleClick"*/);
    sub_2213A60(&StringLiteral_10297/*"OnDrop"*/);
    sub_2213A60(&StringLiteral_10316/*"OnHover"*/);
    sub_2213A60(&StringLiteral_10348/*"OnPress"*/);
    sub_2213A60(&StringLiteral_10294/*"OnDragOut"*/);
    byte_5974F22 = 1;
  }
  v7 = (const MethodInfo *)UICamera_TypeInfo;
  if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, isMouse);
    v7 = (const MethodInfo *)UICamera_TypeInfo;
  }
  if ( *((_QWORD *)v7[2].virtualMethodPointer + 20) )
  {
    NguiTouchEffectManager__UnPress(v7);
    v9 = (char *)UICamera_TypeInfo;
    if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v8);
      v9 = (char *)UICamera_TypeInfo;
    }
    v10 = *(_QWORD *)(*((_QWORD *)v9 + 23) + 160LL);
    if ( v10 )
    {
      mTooltip = (UnityEngine_Object_o *)this->fields.mTooltip;
      *(_BYTE *)(v10 + 101) = 0;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
      if ( UnityEngine_Object__op_Inequality(mTooltip, 0, 0) )
        UICamera__ShowTooltip(this, 0, v12);
      v9 = (char *)UICamera_TypeInfo;
      if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v8);
        v9 = (char *)UICamera_TypeInfo;
      }
      v13 = *(_QWORD *)(*((_QWORD *)v9 + 23) + 160LL);
      if ( v13 )
      {
        v14 = *(UnityEngine_Object_o **)(v13 + 72);
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
        if ( UnityEngine_Object__op_Inequality(v14, 0, 0) )
        {
          v9 = (char *)UICamera_TypeInfo;
          if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v8);
            v9 = (char *)UICamera_TypeInfo;
          }
          static_fields = (struct UICamera_StaticFields *)*((_QWORD *)v9 + 23);
          currentTouch = static_fields->currentTouch;
          if ( !currentTouch )
            goto LABEL_145;
          if ( currentTouch->fields.dragStarted )
          {
            if ( !*((_DWORD *)v9 + 57) )
            {
              j_il2cpp_runtime_class_init_0(v9, v8);
              v9 = (char *)UICamera_TypeInfo;
              static_fields = UICamera_TypeInfo->static_fields;
            }
            onDragOut = static_fields->onDragOut;
            if ( onDragOut )
            {
              if ( !*((_DWORD *)v9 + 57) )
              {
                j_il2cpp_runtime_class_init_0(v9, v8);
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
              v9 = (char *)UICamera_TypeInfo;
            }
            if ( !*((_DWORD *)v9 + 57) )
            {
              j_il2cpp_runtime_class_init_0(v9, v8);
              v9 = (char *)UICamera_TypeInfo;
            }
            v25 = *(_QWORD *)(*((_QWORD *)v9 + 23) + 160LL);
            if ( !v25 )
              goto LABEL_145;
            UICamera__Notify(
              *(UnityEngine_GameObject_o **)(v25 + 56),
              (System_String_o *)StringLiteral_10294/*"OnDragOut"*/,
              *(Il2CppObject **)(v25 + 80),
              v16);
            v9 = (char *)UICamera_TypeInfo;
            v27 = UICamera_TypeInfo->static_fields;
            onDragEnd = v27->onDragEnd;
            if ( onDragEnd )
            {
              if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
              {
                j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v8);
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
              v9 = (char *)UICamera_TypeInfo;
            }
            if ( !*((_DWORD *)v9 + 57) )
            {
              j_il2cpp_runtime_class_init_0(v9, v8);
              v9 = (char *)UICamera_TypeInfo;
            }
            v30 = *(_QWORD *)(*((_QWORD *)v9 + 23) + 160LL);
            if ( !v30 )
              goto LABEL_145;
            UICamera__Notify(*(UnityEngine_GameObject_o **)(v30 + 80), (System_String_o *)StringLiteral_10293/*"OnDragEnd"*/, 0, v26);
            v9 = (char *)UICamera_TypeInfo;
          }
          if ( !*((_DWORD *)v9 + 57) )
          {
            j_il2cpp_runtime_class_init_0(v9, v8);
            v9 = (char *)UICamera_TypeInfo;
          }
          v31 = (struct UICamera_StaticFields *)*((_QWORD *)v9 + 23);
          onPress = v31->onPress;
          if ( onPress )
          {
            if ( !*((_DWORD *)v9 + 57) )
            {
              j_il2cpp_runtime_class_init_0(v9, v8);
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
            v9 = (char *)UICamera_TypeInfo;
          }
          if ( !*((_DWORD *)v9 + 57) )
          {
            j_il2cpp_runtime_class_init_0(v9, v8);
            v9 = (char *)UICamera_TypeInfo;
          }
          v34 = *(_QWORD *)(*((_QWORD *)v9 + 23) + 160LL);
          if ( !v34 )
            goto LABEL_145;
          v35 = *(UnityEngine_GameObject_o **)(v34 + 72);
          v90[0] = 0;
          v36 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984328, v90);
          UICamera__Notify(v35, (System_String_o *)StringLiteral_10348/*"OnPress"*/, v36, v37);
          if ( isMouse )
          {
            v9 = (char *)UICamera_TypeInfo;
            if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
            {
              j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v8);
              v9 = (char *)UICamera_TypeInfo;
            }
            v44 = (struct UICamera_StaticFields *)*((_QWORD *)v9 + 23);
            onHover = v44->onHover;
            if ( onHover )
            {
              if ( !*((_DWORD *)v9 + 57) )
              {
                j_il2cpp_runtime_class_init_0(v9, v8);
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
              v9 = (char *)UICamera_TypeInfo;
            }
            if ( !*((_DWORD *)v9 + 57) )
            {
              j_il2cpp_runtime_class_init_0(v9, v8);
              v9 = (char *)UICamera_TypeInfo;
            }
            v47 = *(_QWORD *)(*((_QWORD *)v9 + 23) + 160LL);
            if ( !v47 )
              goto LABEL_145;
            v48 = *(UnityEngine_GameObject_o **)(v47 + 64);
            v89[0] = 1;
            v49 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984328, v89);
            UICamera__Notify(v48, (System_String_o *)StringLiteral_10316/*"OnHover"*/, v49, v50);
          }
          v9 = (char *)UICamera_TypeInfo;
          if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v8);
            v9 = (char *)UICamera_TypeInfo;
          }
          v51 = *((_QWORD *)v9 + 23);
          v52 = *(_QWORD *)(v51 + 160);
          if ( !v52 )
            goto LABEL_145;
          v53 = *(_QWORD *)(v52 + 64);
          *(_QWORD *)(v51 + 328) = v53;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v51 + 328), v53, v38, v39, v40, v41, v42, v43);
          v54 = UICamera_TypeInfo->static_fields->currentTouch;
          if ( !v54 )
            goto LABEL_145;
          dragged = (UnityEngine_Object_o *)v54->fields.dragged;
          current = (UnityEngine_Object_o *)v54->fields.current;
          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
          v57 = UnityEngine_Object__op_Equality(dragged, current, 0);
          v9 = (char *)UICamera_TypeInfo;
          if ( v57 )
            goto LABEL_148;
          if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v8);
            v9 = (char *)UICamera_TypeInfo;
          }
          v74 = (struct UICamera_StaticFields *)*((_QWORD *)v9 + 23);
          if ( v74->currentScheme == 2 )
            goto LABEL_149;
          if ( !*((_DWORD *)v9 + 57) )
          {
            j_il2cpp_runtime_class_init_0(v9, v8);
            v9 = (char *)UICamera_TypeInfo;
            v74 = UICamera_TypeInfo->static_fields;
          }
          v75 = (float32x2_t *)v74->currentTouch;
          if ( !v75 )
            goto LABEL_145;
          if ( !v75[12].n64_u32[0] )
            goto LABEL_149;
          if ( !*((_DWORD *)v9 + 57) )
          {
            j_il2cpp_runtime_class_init_0(v9, v8);
            v9 = (char *)UICamera_TypeInfo;
            v75 = (float32x2_t *)UICamera_TypeInfo->static_fields->currentTouch;
            if ( !v75 )
              goto LABEL_145;
          }
          if ( vaddv_f32(vmul_f32(v75[5], v75[5])) < drag )
          {
LABEL_148:
            if ( !*((_DWORD *)v9 + 57) )
            {
              j_il2cpp_runtime_class_init_0(v9, v8);
              v9 = (char *)UICamera_TypeInfo;
            }
            v58 = *(struct UICamera_MouseOrTouch_o **)(*((_QWORD *)v9 + 23) + 160LL);
            if ( !v58 )
              goto LABEL_145;
            if ( v58->fields.clickNotification )
            {
              if ( !*((_DWORD *)v9 + 57) )
              {
                j_il2cpp_runtime_class_init_0(v9, v8);
                v58 = UICamera_TypeInfo->static_fields->currentTouch;
                if ( !v58 )
                  goto LABEL_145;
              }
              v60 = (UnityEngine_Object_o *)v58->fields.current;
              pressed = (UnityEngine_Object_o *)v58->fields.pressed;
              if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
              if ( UnityEngine_Object__op_Equality(pressed, v60, 0) )
              {
                time = RealTime__get_time(0);
                v9 = (char *)UICamera_TypeInfo;
                v63 = time;
                if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
                {
                  j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v8);
                  v9 = (char *)UICamera_TypeInfo;
                }
                v64 = (struct UICamera_StaticFields *)*((_QWORD *)v9 + 23);
                onClick = v64->onClick;
                if ( onClick )
                {
                  if ( !*((_DWORD *)v9 + 57) )
                  {
                    j_il2cpp_runtime_class_init_0(v9, v8);
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
                  v9 = (char *)UICamera_TypeInfo;
                }
                if ( !*((_DWORD *)v9 + 57) )
                {
                  j_il2cpp_runtime_class_init_0(v9, v8);
                  v9 = (char *)UICamera_TypeInfo;
                }
                v67 = *(_QWORD *)(*((_QWORD *)v9 + 23) + 160LL);
                if ( !v67 )
                  goto LABEL_145;
                UICamera__Notify(
                  *(UnityEngine_GameObject_o **)(v67 + 72),
                  (System_String_o *)StringLiteral_10237/*"OnClick"*/,
                  0,
                  v61);
                v9 = (char *)UICamera_TypeInfo;
                v68 = UICamera_TypeInfo->static_fields;
                v69 = v68->currentTouch;
                if ( !v69 )
                  goto LABEL_145;
                if ( (float)(v69->fields.clickTime + 0.35) > v63 )
                {
                  if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
                  {
                    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v8);
                    v9 = (char *)UICamera_TypeInfo;
                    v68 = UICamera_TypeInfo->static_fields;
                  }
                  onDoubleClick = v68->onDoubleClick;
                  if ( onDoubleClick )
                  {
                    if ( !*((_DWORD *)v9 + 57) )
                    {
                      j_il2cpp_runtime_class_init_0(v9, v8);
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
                    v9 = (char *)UICamera_TypeInfo;
                  }
                  if ( !*((_DWORD *)v9 + 57) )
                  {
                    j_il2cpp_runtime_class_init_0(v9, v8);
                    v9 = (char *)UICamera_TypeInfo;
                  }
                  v72 = *(_QWORD *)(*((_QWORD *)v9 + 23) + 160LL);
                  if ( !v72 )
                    goto LABEL_145;
                  UICamera__Notify(
                    *(UnityEngine_GameObject_o **)(v72 + 72),
                    (System_String_o *)StringLiteral_10290/*"OnDoubleClick"*/,
                    0,
                    v16);
                  v9 = (char *)UICamera_TypeInfo;
                }
                if ( !*((_DWORD *)v9 + 57) )
                {
                  j_il2cpp_runtime_class_init_0(v9, v8);
                  v9 = (char *)UICamera_TypeInfo;
                }
                v73 = *(_QWORD *)(*((_QWORD *)v9 + 23) + 160LL);
                if ( !v73 )
                  goto LABEL_145;
                *(float *)(v73 + 92) = v63;
              }
            }
          }
          else
          {
LABEL_149:
            if ( !*((_DWORD *)v9 + 57) )
            {
              j_il2cpp_runtime_class_init_0(v9, v8);
              v9 = (char *)UICamera_TypeInfo;
            }
            v76 = (struct UICamera_StaticFields *)*((_QWORD *)v9 + 23);
            v77 = v76->currentTouch;
            if ( !v77 )
              goto LABEL_145;
            if ( v77->fields.dragStarted )
            {
              if ( !*((_DWORD *)v9 + 57) )
              {
                j_il2cpp_runtime_class_init_0(v9, v8);
                v9 = (char *)UICamera_TypeInfo;
                v76 = UICamera_TypeInfo->static_fields;
              }
              onDrop = v76->onDrop;
              if ( onDrop )
              {
                if ( !*((_DWORD *)v9 + 57) )
                {
                  j_il2cpp_runtime_class_init_0(v9, v8);
                  v76 = UICamera_TypeInfo->static_fields;
                  onDrop = v76->onDrop;
                }
                v79 = v76->currentTouch;
                if ( !v79 || !onDrop )
                  goto LABEL_145;
                ((void (__fastcall *)(intptr_t, struct UnityEngine_GameObject_o *, struct UnityEngine_GameObject_o *, intptr_t))onDrop->fields.invoke_impl)(
                  onDrop->fields.method_code,
                  v79->fields.current,
                  v79->fields.dragged,
                  onDrop->fields.method);
                v9 = (char *)UICamera_TypeInfo;
              }
              if ( !*((_DWORD *)v9 + 57) )
              {
                j_il2cpp_runtime_class_init_0(v9, v8);
                v9 = (char *)UICamera_TypeInfo;
              }
              v80 = *(_QWORD *)(*((_QWORD *)v9 + 23) + 160LL);
              if ( !v80 )
                goto LABEL_145;
              UICamera__Notify(
                *(UnityEngine_GameObject_o **)(v80 + 64),
                (System_String_o *)StringLiteral_10297/*"OnDrop"*/,
                *(Il2CppObject **)(v80 + 80),
                v16);
            }
          }
        }
        v81 = UICamera_TypeInfo;
        if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v8);
          v81 = UICamera_TypeInfo;
        }
        v9 = (char *)v81->static_fields->currentTouch;
        if ( v9 )
        {
          *((_QWORD *)v9 + 9) = 0;
          v82 = (MissionNaviTransitionBoardItem_o *)(v9 + 72);
          BYTE2(v82->fields.loopIndex) = 0;
          sub_2213A04(v82, 0, v15, (System_String_o *)v16, v17, v18, v19, v20);
          v9 = (char *)UICamera_TypeInfo->static_fields->currentTouch;
          if ( v9 )
          {
            *((_QWORD *)v9 + 10) = 0;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)(v9 + 80), 0, v83, v84, v85, v86, v87, v88);
            return;
          }
        }
      }
    }
LABEL_145:
    sub_2213CDC(v9, v8);
  }
}


// local variable allocation has failed, the output may be wrong!
void UICamera__ProcessTouch(UICamera_o *this, bool pressed, bool released, const MethodInfo *method)
{
  UICamera_c *v7; // x0
  _BOOL4 v8; // w8
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

  if ( (byte_5974F23 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&UICamera_TypeInfo);
    byte_5974F23 = 1;
  }
  v7 = UICamera_TypeInfo;
  if ( *(&UICamera_TypeInfo->_2.cctor_finished + 1) )
  {
    v8 = 0;
  }
  else
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, pressed);
    v7 = UICamera_TypeInfo;
    v8 = *(&UICamera_TypeInfo->_2.cctor_finished + 1) == 0;
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
  if ( v8 )
  {
    j_il2cpp_runtime_class_init_0(v7, pressed);
    static_fields = UICamera_TypeInfo->static_fields;
  }
  currentTouch = static_fields->currentTouch;
  if ( !currentTouch )
    sub_2213CDC(v7, pressed);
  v16 = (UnityEngine_Object_o *)currentTouch->fields.pressed;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, pressed);
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
  int v4; // w8
  struct UICamera_StaticFields *static_fields; // x9
  struct UICamera_GetTouchCountCallback_o *GetInputTouchCount; // x8
  UICamera_c *ignoreFingerIDList; // x0
  const MethodInfo *v8; // x1
  int32_t touchCount; // w0
  const MethodInfo *v10; // x1
  int32_t v11; // w20
  unsigned int v12; // w21
  UICamera_c *v13; // x0
  struct UICamera_GetTouchCallback_o *GetInputTouch; // x8
  int32_t name_high; // w24
  int32_t name; // w26
  UnityEngine_Vector2_o namespaze; // d0
  int data; // w25
  UnityEngine_Vector2_o position; // kr00_8
  int32_t tapCount; // w0
  CTouch_c *v21; // x0
  UICamera_c *v22; // x0
  UICamera_MouseOrTouch_o *Touch; // x0
  struct UICamera_StaticFields *v24; // x8
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  struct UICamera_MouseOrTouch_o *currentTouch; // x8
  int touchBegan; // w29
  struct UICamera_MouseOrTouch_o *v33; // x26
  struct UnityEngine_Vector2_o zeroVector; // d0
  struct UICamera_MouseOrTouch_o *v35; // x8
  struct UICamera_MouseOrTouch_o *v36; // x8
  struct UICamera_MouseOrTouch_o *v37; // x8
  __int64 v38; // x1
  System_String_o *v39; // x2
  System_String_o *v40; // x3
  int32_t v41; // w4
  int32_t v42; // w5
  bool v43; // w6
  bool v44; // w7
  UICamera_c *v45; // x0
  struct UICamera_StaticFields *v46; // x8
  struct UnityEngine_GameObject_o *fallThrough; // x1
  UICamera_c *v48; // x0
  UnityEngine_Object_o *hoveredObject; // x26
  System_String_o *v50; // x2
  System_String_o *v51; // x3
  int32_t v52; // w4
  int32_t v53; // w5
  bool v54; // w6
  bool v55; // w7
  UICamera_c *v56; // x0
  struct UICamera_StaticFields *v57; // x8
  struct UnityEngine_GameObject_o *mGenericHandler; // x1
  UICamera_c *v59; // x0
  Il2CppClass *element_class; // x1
  System_String_o *v61; // x2
  System_String_o *v62; // x3
  int32_t v63; // w4
  int32_t v64; // w5
  bool v65; // w6
  bool v66; // w7
  struct UICamera_StaticFields *v67; // x8
  Il2CppClass *v68; // x1
  System_String_o *v69; // x2
  System_String_o *v70; // x3
  int32_t v71; // w4
  int32_t v72; // w5
  bool v73; // w6
  bool v74; // w7
  struct UICamera_StaticFields *v75; // x8
  struct UICamera_MouseOrTouch_o *v76; // x9
  int v77; // w8
  struct UICamera_StaticFields *v78; // x8
  struct UnityEngine_Camera_o *currentCamera; // x1
  MissionNaviTransitionBoardItem_o *p_this_arg; // x0
  struct UICamera_MouseOrTouch_o *v81; // x8
  UnityEngine_Object_o *pressed; // x26
  UICamera_c *v83; // x0
  Il2CppClass **nestedTypes; // x8
  UICamera_c *v85; // x0
  struct UICamera_MouseOrTouch_o *v86; // x25
  float time; // s0
  unsigned int v88; // w24
  System_String_o *v89; // x2
  System_String_o *v90; // x3
  int32_t v91; // w4
  int32_t v92; // w5
  bool v93; // w6
  bool v94; // w7
  UICamera_c *v95; // x0
  UICamera_c *v96; // x0
  struct UICamera_StaticFields *v97; // x0
  System_String_o *v98; // x2
  System_String_o *v99; // x3
  int32_t v100; // w4
  int32_t v101; // w5
  bool v102; // w6
  bool v103; // w7
  UICamera_c *v104; // x0
  int v105; // w8
  struct UICamera_StaticFields *v106; // x8
  float32x2_t v107; // [xsp+20h] [xbp-110h]
  UnityEngine_Touch_o src; // [xsp+3Ch] [xbp-F4h] BYREF
  UnityEngine_Touch_o dest; // [xsp+80h] [xbp-B0h] BYREF
  UnityEngine_Vector3_o v110; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_5974F1E & 1) == 0 )
  {
    sub_2213A60(&CTouch_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Contains__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&UICamera_TypeInfo);
    byte_5974F1E = 1;
  }
  v3 = UICamera_TypeInfo;
  v4 = *(&UICamera_TypeInfo->_2.cctor_finished + 1);
  memset(&dest, 0, sizeof(dest));
  if ( !v4 )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, method);
    v3 = UICamera_TypeInfo;
  }
  static_fields = v3->static_fields;
  GetInputTouchCount = static_fields->GetInputTouchCount;
  static_fields->currentScheme = 1;
  if ( GetInputTouchCount )
  {
    if ( !*(&v3->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v3, method);
      GetInputTouchCount = UICamera_TypeInfo->static_fields->GetInputTouchCount;
      if ( !GetInputTouchCount )
LABEL_113:
        sub_2213CDC(ignoreFingerIDList, v8);
    }
    touchCount = ((__int64 (__fastcall *)(intptr_t, intptr_t))GetInputTouchCount->fields.invoke_impl)(
                   GetInputTouchCount->fields.method_code,
                   GetInputTouchCount->fields.method);
  }
  else
  {
    touchCount = UnityEngine_Input__get_touchCount(0);
  }
  v11 = touchCount;
  if ( touchCount >= 1 )
  {
    v12 = 0;
    while ( 1 )
    {
      v13 = UICamera_TypeInfo;
      if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v10);
        v13 = UICamera_TypeInfo;
      }
      GetInputTouch = v13->static_fields->GetInputTouch;
      if ( GetInputTouch )
      {
        if ( !*(&v13->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(v13, v10);
          GetInputTouch = UICamera_TypeInfo->static_fields->GetInputTouch;
          if ( !GetInputTouch )
            goto LABEL_113;
        }
        ignoreFingerIDList = (UICamera_c *)((__int64 (__fastcall *)(intptr_t, _QWORD, intptr_t))GetInputTouch->fields.invoke_impl)(
                                             GetInputTouch->fields.method_code,
                                             v12,
                                             GetInputTouch->fields.method);
        if ( !ignoreFingerIDList )
          goto LABEL_113;
        name = (int32_t)ignoreFingerIDList->_1.name;
        name_high = HIDWORD(ignoreFingerIDList->_1.name);
        namespaze = (UnityEngine_Vector2_o)ignoreFingerIDList->_1.namespaze;
        data = (int)ignoreFingerIDList->_1.byval_arg.data;
      }
      else
      {
        UnityEngine_Input__GetTouch(&src, v12, 0);
        memcpy(&dest, &src, sizeof(dest));
        name_high = UnityEngine_Touch__get_phase(&dest, 0);
        name = UnityEngine_Touch__get_fingerId(&dest, 0);
        position = UnityEngine_Touch__get_position(&dest, 0);
        tapCount = UnityEngine_Touch__get_tapCount(&dest, 0);
        namespaze = position;
        data = tapCount;
      }
      v107.n64_u64[0] = (unsigned __int64)namespaze;
      if ( !*(&CTouch_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, v8);
      if ( !byte_596CEAF )
      {
        sub_2213A60(&CTouch_TypeInfo);
        byte_596CEAF = 1;
      }
      v21 = CTouch_TypeInfo;
      if ( !*(&CTouch_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, v8);
        v21 = CTouch_TypeInfo;
      }
      ignoreFingerIDList = (UICamera_c *)v21->static_fields->ignoreFingerIDList;
      if ( !ignoreFingerIDList )
        goto LABEL_113;
      if ( !System_Collections_Generic_List_int___Contains(
              (System_Collections_Generic_List_int__o *)ignoreFingerIDList,
              name,
              (const MethodInfo_44675F0 *)Method_System_Collections_Generic_List_int__Contains__) )
        break;
LABEL_99:
      if ( ++v12 == v11 )
        goto LABEL_100;
    }
    v22 = UICamera_TypeInfo;
    if ( !this->fields.allowMultiTouch )
      name = 1;
    if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v10);
      v22 = UICamera_TypeInfo;
    }
    v22->static_fields->currentTouchID = name;
    Touch = UICamera__GetTouch(name, v10);
    v24 = UICamera_TypeInfo->static_fields;
    v24->currentTouch = Touch;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v24->currentTouch, (int32_t)Touch, v25, v26, v27, v28, v29, v30);
    ignoreFingerIDList = UICamera_TypeInfo;
    if ( name_high )
    {
      if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v8);
        ignoreFingerIDList = UICamera_TypeInfo;
      }
      currentTouch = ignoreFingerIDList->static_fields->currentTouch;
      if ( !currentTouch )
        goto LABEL_113;
      touchBegan = currentTouch->fields.touchBegan;
    }
    else
    {
      touchBegan = 1;
    }
    if ( !*(&ignoreFingerIDList->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(ignoreFingerIDList, v8);
      ignoreFingerIDList = UICamera_TypeInfo;
    }
    v33 = ignoreFingerIDList->static_fields->currentTouch;
    if ( !v33 )
      goto LABEL_113;
    v33->fields.touchBegan = 0;
    if ( touchBegan )
    {
      if ( !byte_59699C0 )
      {
        sub_2213A60(&UnityEngine_Vector2_TypeInfo);
        ignoreFingerIDList = UICamera_TypeInfo;
        byte_59699C0 = 1;
      }
      zeroVector = UnityEngine_Vector2_TypeInfo->static_fields->zeroVector;
    }
    else
    {
      if ( *(&ignoreFingerIDList->_2.cctor_finished + 1) )
      {
        v35 = v33;
      }
      else
      {
        j_il2cpp_runtime_class_init_0(ignoreFingerIDList, v8);
        ignoreFingerIDList = UICamera_TypeInfo;
        v35 = UICamera_TypeInfo->static_fields->currentTouch;
        if ( !v35 )
          goto LABEL_113;
      }
      zeroVector = (struct UnityEngine_Vector2_o)vsub_f32(v107, (float32x2_t)v35->fields.pos).n64_u64[0];
    }
    v33->fields.delta = zeroVector;
    if ( !*(&ignoreFingerIDList->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(ignoreFingerIDList, v8);
      ignoreFingerIDList = UICamera_TypeInfo;
    }
    v36 = ignoreFingerIDList->static_fields->currentTouch;
    if ( !v36 )
      goto LABEL_113;
    v36->fields.pos = (struct UnityEngine_Vector2_o)v107.n64_u64[0];
    v37 = ignoreFingerIDList->static_fields->currentTouch;
    if ( !v37 )
      goto LABEL_113;
    v110.fields.z = 0.0;
    v110.fields.x = v37->fields.pos.fields.x;
    v110.fields.y = v37->fields.pos.fields.y;
    if ( !UICamera__Raycast(v110, (const MethodInfo *)ignoreFingerIDList) )
    {
      v45 = UICamera_TypeInfo;
      if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v38);
        v45 = UICamera_TypeInfo;
      }
      v46 = v45->static_fields;
      fallThrough = v46->fallThrough;
      v46->hoveredObject = fallThrough;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&v46->hoveredObject,
        (int32_t)fallThrough,
        v39,
        v40,
        v41,
        v42,
        v43,
        v44);
    }
    v48 = UICamera_TypeInfo;
    if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v38);
      v48 = UICamera_TypeInfo;
    }
    hoveredObject = (UnityEngine_Object_o *)v48->static_fields->hoveredObject;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v38);
    if ( UnityEngine_Object__op_Equality(hoveredObject, 0, 0) )
    {
      v56 = UICamera_TypeInfo;
      if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v8);
        v56 = UICamera_TypeInfo;
      }
      v57 = v56->static_fields;
      mGenericHandler = v57->mGenericHandler;
      v57->hoveredObject = mGenericHandler;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&v57->hoveredObject,
        (int32_t)mGenericHandler,
        v50,
        v51,
        v52,
        v53,
        v54,
        v55);
    }
    v59 = UICamera_TypeInfo;
    if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v8);
      v59 = UICamera_TypeInfo;
    }
    ignoreFingerIDList = (UICamera_c *)v59->static_fields->currentTouch;
    if ( !ignoreFingerIDList )
      goto LABEL_113;
    element_class = ignoreFingerIDList->_1.element_class;
    *(_QWORD *)&ignoreFingerIDList->_1.this_arg.bits = element_class;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&ignoreFingerIDList->_1.this_arg.bits,
      (int32_t)element_class,
      v50,
      v51,
      v52,
      v53,
      v54,
      v55);
    v67 = UICamera_TypeInfo->static_fields;
    ignoreFingerIDList = (UICamera_c *)v67->currentTouch;
    if ( !ignoreFingerIDList )
      goto LABEL_113;
    v68 = (Il2CppClass *)v67->hoveredObject;
    ignoreFingerIDList->_1.element_class = v68;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&ignoreFingerIDList->_1.element_class,
      (int32_t)v68,
      v61,
      v62,
      v63,
      v64,
      v65,
      v66);
    ignoreFingerIDList = UICamera_TypeInfo;
    v75 = UICamera_TypeInfo->static_fields;
    v76 = v75->currentTouch;
    if ( !v76 )
      goto LABEL_113;
    v75->lastTouchPosition = v76->fields.pos;
    v77 = *(&ignoreFingerIDList->_2.cctor_finished + 1);
    if ( touchBegan )
    {
      if ( !v77 )
      {
        j_il2cpp_runtime_class_init_0(ignoreFingerIDList, v8);
        ignoreFingerIDList = UICamera_TypeInfo;
      }
      v78 = ignoreFingerIDList->static_fields;
      ignoreFingerIDList = (UICamera_c *)v78->currentTouch;
      if ( !ignoreFingerIDList )
        goto LABEL_113;
      currentCamera = v78->currentCamera;
      ignoreFingerIDList->_1.this_arg.data = currentCamera;
      p_this_arg = (MissionNaviTransitionBoardItem_o *)&ignoreFingerIDList->_1.this_arg;
    }
    else
    {
      if ( !v77 )
      {
        j_il2cpp_runtime_class_init_0(ignoreFingerIDList, v8);
        ignoreFingerIDList = UICamera_TypeInfo;
      }
      v81 = ignoreFingerIDList->static_fields->currentTouch;
      if ( !v81 )
        goto LABEL_113;
      pressed = (UnityEngine_Object_o *)v81->fields.pressed;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
      if ( !UnityEngine_Object__op_Inequality(pressed, 0, 0) )
        goto LABEL_86;
      v83 = UICamera_TypeInfo;
      if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v8);
        v83 = UICamera_TypeInfo;
      }
      ignoreFingerIDList = (UICamera_c *)v83->static_fields;
      nestedTypes = ignoreFingerIDList->_1.nestedTypes;
      if ( !nestedTypes )
        goto LABEL_113;
      currentCamera = (struct UnityEngine_Camera_o *)nestedTypes[6];
      ignoreFingerIDList->_1.events = currentCamera;
      p_this_arg = (MissionNaviTransitionBoardItem_o *)&ignoreFingerIDList->_1.events;
    }
    sub_2213A04(p_this_arg, (int32_t)currentCamera, v69, v70, v71, v72, v73, v74);
LABEL_86:
    if ( data >= 2 )
    {
      v85 = UICamera_TypeInfo;
      if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v8);
        v85 = UICamera_TypeInfo;
      }
      v86 = v85->static_fields->currentTouch;
      time = RealTime__get_time(0);
      if ( !v86 )
        goto LABEL_113;
      v86->fields.clickTime = time;
    }
    v88 = name_high - 3;
    UICamera__ProcessTouch(this, touchBegan != 0, v88 < 2, (const MethodInfo *)v70);
    if ( v88 <= 1 )
    {
      v95 = UICamera_TypeInfo;
      if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v8);
        v95 = UICamera_TypeInfo;
      }
      UICamera__RemoveTouch(v95->static_fields->currentTouchID, v8);
    }
    v96 = UICamera_TypeInfo;
    if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v8);
      v96 = UICamera_TypeInfo;
    }
    ignoreFingerIDList = (UICamera_c *)v96->static_fields->currentTouch;
    if ( !ignoreFingerIDList )
      goto LABEL_113;
    *(_QWORD *)&ignoreFingerIDList->_1.this_arg.bits = 0;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&ignoreFingerIDList->_1.this_arg.bits,
      0,
      v89,
      v90,
      v91,
      v92,
      v93,
      v94);
    v97 = UICamera_TypeInfo->static_fields;
    v97->currentTouch = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v97->currentTouch, 0, v98, v99, v100, v101, v102, v103);
    if ( !this->fields.allowMultiTouch )
      goto LABEL_100;
    goto LABEL_99;
  }
LABEL_100:
  v104 = UICamera_TypeInfo;
  v105 = *(&UICamera_TypeInfo->_2.cctor_finished + 1);
  if ( v11 )
  {
    if ( !v105 )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v10);
      v104 = UICamera_TypeInfo;
    }
    v104->static_fields->mUsingTouchEvents = 1;
  }
  else
  {
    if ( !v105 )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v10);
      v104 = UICamera_TypeInfo;
    }
    v106 = v104->static_fields;
    if ( v106->mUsingTouchEvents )
    {
      if ( !*(&v104->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v104, v10);
        v106 = UICamera_TypeInfo->static_fields;
      }
      v106->mUsingTouchEvents = 0;
    }
    else if ( this->fields.useMouse )
    {
      UICamera__ProcessMouse(this, v10);
    }
  }
}


bool UICamera__Raycast(UnityEngine_Vector3_o inPos, const MethodInfo *method)
{
  const MethodInfo *v2; // x1
  float z; // s10
  int32_t v4; // w24
  __int64 currentCamera; // x0
  struct BetterList_UICamera__o *list; // x8
  int32_t size; // w26
  struct UICamera_array *buffer; // x8
  Il2CppClass **v9; // x8
  Il2CppClass *v10; // x20
  __int64 v11; // x1
  UnityEngine_GameObject_o *gameObject; // x21
  UnityEngine_Camera_o *cachedCamera; // x0
  __int64 v14; // x1
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  UICamera_c *v21; // x8
  UnityEngine_Camera_o *v22; // x21
  struct UICamera_StaticFields *static_fields; // x0
  UICamera_c *v24; // x0
  UICamera_c *v25; // x0
  struct UICamera_StaticFields *v26; // x8
  int32_t cullingMask; // w21
  int32_t v28; // w0
  float v29; // s11
  int32_t v30; // w22
  UICamera_c *v31; // x0
  float farClipPlane; // s0
  int data_high; // w8
  int v34; // w9
  __int64 v35; // x9
  __int64 v36; // x20
  unsigned int v37; // w8
  UnityEngine_GameObject_o *v38; // x21
  __int64 v39; // x1
  UnityEngine_Object_o *v40; // x22
  void *v41; // x19
  UICamera_c *v42; // x0
  float *v43; // x8
  float v44; // s5
  float v45; // s13
  float v46; // s7
  float v47; // s11
  __int64 v48; // kr98_8
  float v49; // s15
  float v50; // s9
  float v51; // s8
  float v52; // s14
  struct UnityEngine_Mathf_StaticFields *v53; // x8
  float v54; // s0
  float v55; // s1
  float v56; // s0
  __int64 v57; // x1
  UICamera_c *v58; // x0
  struct UICamera_StaticFields *v59; // x9
  float v60; // s11
  float v61; // s12
  __int64 v62; // x8
  __int64 v63; // x20
  UnityEngine_GameObject_o *v64; // x20
  __int64 v65; // x1
  UnityEngine_Object_o *v66; // x21
  void *v67; // x19
  UICamera_c *v68; // x0
  int v69; // w9
  struct UICamera_StaticFields *v70; // x8
  UICamera_c *v71; // x0
  float *v72; // x8
  float v73; // s5
  float v74; // s13
  float v75; // s7
  float v76; // s11
  __int64 v77; // krA8_8
  float v78; // s15
  float v79; // s9
  float v80; // s8
  float v81; // s14
  struct UnityEngine_Mathf_StaticFields *v82; // x8
  float v83; // s0
  float v84; // s1
  float v85; // s0
  __int64 v86; // x1
  __int64 v87; // x1
  UnityEngine_Object_o *v88; // x21
  unsigned __int64 v89; // x19
  __int64 v90; // x21
  UnityEngine_GameObject_o *v91; // x22
  __int64 v92; // x1
  UnityEngine_Object_o *Component_object; // x23
  void *monitor; // x23
  __int64 v95; // x1
  Il2CppObject *v96; // x23
  int32_t v97; // w8
  __int128 v98; // q0
  __int128 v99; // q1
  struct UnityEngine_Vector2_o v100; // x10
  struct UICamera_StaticFields *v101; // x8
  UnityEngine_GameObject_o *v102; // x0
  struct UICamera_StaticFields *v103; // x8
  System_String_o *v104; // x2
  System_String_o *v105; // x3
  int32_t v106; // w4
  int32_t v107; // w5
  bool v108; // w6
  bool v109; // w7
  struct UICamera_StaticFields *v110; // x8
  BetterList_UICamera_DepthEntry__o *mHits; // x22
  UICamera_c *v112; // x8
  BetterList_UICamera_DepthEntry__o *v113; // x20
  struct UICamera___c_StaticFields *v114; // x8
  BetterList_CompareFunc_UICamera_DepthEntry__o *_9__125_0; // x21
  Il2CppObject *v116; // x22
  struct UICamera___c_StaticFields *v117; // x0
  System_String_o *v118; // x2
  System_String_o *v119; // x3
  int32_t v120; // w4
  int32_t v121; // w5
  bool v122; // w6
  bool v123; // w7
  unsigned __int64 v124; // x20
  __int64 i; // x19
  UICamera_c *v126; // x8
  int v127; // w9
  __int64 v128; // x8
  __int64 v129; // x19
  UnityEngine_GameObject_o *v130; // x21
  __int64 v131; // x1
  UnityEngine_Object_o *v132; // x22
  void *v133; // x22
  UICamera_c *v134; // x0
  __int64 v135; // x1
  Il2CppObject *v136; // x22
  System_String_o *v137; // x2
  System_String_o *v138; // x3
  int32_t v139; // w4
  int32_t v140; // w5
  bool v141; // w6
  bool v142; // w7
  int32_t v143; // w8
  struct UICamera_StaticFields *v144; // x9
  UICamera_c *v145; // x8
  struct UICamera_StaticFields *v146; // x9
  __int64 v147; // x11
  struct UICamera_StaticFields *v148; // x8
  BetterList_UICamera_DepthEntry__o *v149; // x21
  UICamera_c *v150; // x8
  BetterList_UICamera_DepthEntry__o *v151; // x20
  struct UICamera___c_StaticFields *v152; // x8
  BetterList_CompareFunc_UICamera_DepthEntry__o *_9__125_1; // x21
  Il2CppObject *v154; // x22
  struct UICamera___c_StaticFields *v155; // x0
  System_String_o *v156; // x2
  System_String_o *v157; // x3
  int32_t v158; // w4
  int32_t v159; // w5
  bool v160; // w6
  bool v161; // w7
  unsigned __int64 v162; // x20
  __int64 v163; // x19
  __int64 v164; // x8
  __int64 v165; // x1
  Il2CppObject *v166; // x21
  const MethodInfo *v167; // x1
  UnityEngine_GameObject_o *v168; // x21
  __int64 v169; // x1
  Il2CppObject *v170; // x21
  UICamera_c *v171; // x0
  System_String_o *v172; // x2
  System_String_o *v173; // x3
  int32_t v174; // w4
  int32_t v175; // w5
  bool v176; // w6
  bool v177; // w7
  UICamera_c *v178; // x0
  int32_t v179; // w1
  MissionNaviTransitionBoardItem_o *v180; // x0
  UICamera_c *v181; // x0
  UICamera_c *v182; // x8
  __int128 v183; // q1
  __int128 v184; // q2
  struct UICamera_StaticFields *v185; // x9
  int32_t go; // w1
  MissionNaviTransitionBoardItem_o *p_hoveredObject; // x0
  System_String_o *v188; // x2
  System_String_o *v189; // x3
  int32_t v190; // w4
  int32_t v191; // w5
  bool v192; // w6
  bool v193; // w7
  UICamera_c *v194; // x8
  __int64 v195; // x11
  struct UICamera_StaticFields *v196; // x10
  UICamera_c *v197; // x0
  int32_t v198; // w1
  MissionNaviTransitionBoardItem_o *v199; // x0
  System_String_o *v200; // x2
  System_String_o *v201; // x3
  int32_t v202; // w4
  int32_t v203; // w5
  bool v204; // w6
  bool v205; // w7
  UICamera_c *v207; // x0
  UICamera_c *v208; // x8
  UnityEngine_GameObject_o *v209; // x0
  struct UICamera_StaticFields *v210; // x8
  System_String_o *v211; // x2
  System_String_o *v212; // x3
  int32_t v213; // w4
  int32_t v214; // w5
  bool v215; // w6
  bool v216; // w7
  UICamera_c *v217; // x0
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v219; // x1
  UnityEngine_Object_o *RootRigidbody; // x0
  __int64 v221; // x1
  UnityEngine_GameObject_o *v222; // x0
  struct UICamera_StaticFields *v223; // x8
  System_String_o *v224; // x2
  System_String_o *v225; // x3
  int32_t v226; // w4
  int32_t v227; // w5
  bool v228; // w6
  bool v229; // w7
  UICamera_c *v230; // x0
  UnityEngine_Transform_o *v231; // x0
  const MethodInfo *v232; // x1
  UnityEngine_Object_o *v233; // x19
  UnityEngine_GameObject_o *v234; // x0
  __int64 v235; // x1
  UICamera_c *v236; // x8
  struct UnityEngine_GameObject_o *v237; // x19
  struct UICamera_StaticFields *v238; // x8
  __int128 v239; // q1
  __int128 v240; // q2
  int v241; // w8
  __int128 v242; // q1
  _OWORD *v243; // x8
  __int128 v244; // q2
  UICamera_c *v245; // x8
  UnityEngine_GameObject_o *v246; // x0
  unsigned __int64 v247; // kr00_8
  float v248; // [xsp+Ch] [xbp-1B4h]
  float v249; // [xsp+Ch] [xbp-1B4h]
  float v250; // [xsp+10h] [xbp-1B0h]
  float v251; // [xsp+10h] [xbp-1B0h]
  float x; // [xsp+20h] [xbp-1A0h]
  float y; // [xsp+24h] [xbp-19Ch]
  UICamera_DepthEntry_o v254; // [xsp+28h] [xbp-198h] BYREF
  UnityEngine_Ray_o v255; // [xsp+70h] [xbp-150h] BYREF
  UnityEngine_Ray_o v256; // [xsp+90h] [xbp-130h] BYREF
  UnityEngine_Ray_o v257; // [xsp+B0h] [xbp-110h] BYREF
  UICamera_DepthEntry_o dest; // [xsp+D0h] [xbp-F0h] BYREF
  UnityEngine_Vector3_o v259; // 0:kr14_12.12
  UnityEngine_Vector3_o v260; // 0:kr20_12.12
  UnityEngine_Vector3_o v261; // 0:kr34_12.12
  UnityEngine_Vector3_o v262; // 0:kr40_12.12
  UnityEngine_Vector3_o v263; // 0:kr60_12.12
  UnityEngine_Vector3_o point; // 0:kr74_12.12
  UnityEngine_Vector3_o v265; // 0:kr80_12.12
  UnityEngine_Vector2_o v266; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v267; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o v268; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v269; // 0:s0.4,4:s1.4,8:s2.4

  z = inPos.fields.z;
  x = inPos.fields.x;
  y = inPos.fields.y;
  if ( (byte_5974F0B & 1) == 0 )
  {
    sub_2213A60(&Method_BetterList_UICamera_DepthEntry__Add__);
    sub_2213A60(&Method_BetterList_UICamera_DepthEntry__Clear__);
    sub_2213A60(&Method_BetterList_UICamera_DepthEntry__Sort__);
    sub_2213A60(&Method_BetterList_UICamera_DepthEntry__get_Item__);
    sub_2213A60(&Method_BetterList_UICamera__get_Item__);
    sub_2213A60(&BetterList_CompareFunc_UICamera_DepthEntry__TypeInfo);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    sub_2213A60(&Method_NGUITools_FindInParents_UIRect___);
    sub_2213A60(&NGUITools_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&UnityEngine_Physics2D_TypeInfo);
    sub_2213A60(&UnityEngine_Physics_TypeInfo);
    sub_2213A60(&Method_UICamera___c__Raycast_b__125_0__);
    sub_2213A60(&Method_UICamera___c__Raycast_b__125_1__);
    sub_2213A60(&UICamera___c_TypeInfo);
    sub_2213A60(&UICamera_TypeInfo);
    byte_5974F0B = 1;
  }
  v4 = 0;
  memset(&v257, 0, sizeof(v257));
  while ( 1 )
  {
    currentCamera = (__int64)UICamera_TypeInfo;
    if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v2);
      currentCamera = (__int64)UICamera_TypeInfo;
    }
    list = **(struct BetterList_UICamera__o ***)(currentCamera + 184);
    if ( !list )
      goto LABEL_292;
    size = list->fields.size;
    if ( v4 >= size )
      return v4 < size;
    if ( !*(_DWORD *)(currentCamera + 228) )
    {
      j_il2cpp_runtime_class_init_0(currentCamera, v2);
      list = UICamera_TypeInfo->static_fields->list;
      if ( !list )
        goto LABEL_292;
    }
    buffer = list->fields.buffer;
    if ( !buffer )
      goto LABEL_292;
    if ( (unsigned int)v4 >= LODWORD(buffer->max_length) )
      goto LABEL_293;
    v9 = &buffer->obj.klass + v4;
    v10 = v9[4];
    if ( !v10 )
      goto LABEL_292;
    if ( !UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)v9[4], 0) )
      goto LABEL_25;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v10, 0);
    if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v11);
    if ( !NGUITools__GetActive_56411004(gameObject, 0) )
      goto LABEL_25;
    cachedCamera = UICamera__get_cachedCamera((UICamera_o *)v10, v2);
    v21 = UICamera_TypeInfo;
    v22 = cachedCamera;
    if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v14);
      v21 = UICamera_TypeInfo;
    }
    static_fields = v21->static_fields;
    static_fields->currentCamera = v22;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&static_fields->currentCamera,
      (int32_t)v22,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
    currentCamera = (__int64)UICamera_TypeInfo->static_fields->currentCamera;
    if ( !currentCamera )
      goto LABEL_292;
    if ( !UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)currentCamera, 0) )
      goto LABEL_25;
    v24 = UICamera_TypeInfo;
    if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v2);
      v24 = UICamera_TypeInfo;
    }
    currentCamera = (__int64)v24->static_fields->currentCamera;
    if ( !currentCamera )
      goto LABEL_292;
    v268.fields.z = z;
    v268.fields.x = x;
    v268.fields.y = y;
    v247 = (unsigned __int64)UnityEngine_Camera__ScreenToViewportPoint((UnityEngine_Camera_o *)currentCamera, v268, 0);
    if ( (v247 & 0x7FFFFFFF) > 0x7F800000
      || *(float *)&v247 > 1.0
      || *(float *)&v247 < 0.0
      || (HIDWORD(v247) & 0x7FFFFFFFu) > 0x7F800000
      || *((float *)&v247 + 1) < 0.0
      || *((float *)&v247 + 1) > 1.0 )
    {
      goto LABEL_25;
    }
    v25 = UICamera_TypeInfo;
    if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v2);
      v25 = UICamera_TypeInfo;
    }
    currentCamera = (__int64)v25->static_fields->currentCamera;
    if ( !currentCamera )
      goto LABEL_292;
    v269.fields.z = z;
    v269.fields.x = x;
    v269.fields.y = y;
    UnityEngine_Camera__ScreenPointToRay_83198808(
      (UnityEngine_Ray_o *)&dest,
      (UnityEngine_Camera_o *)currentCamera,
      v269,
      0);
    v26 = UICamera_TypeInfo->static_fields;
    v257 = *(UnityEngine_Ray_o *)&dest.fields.depth;
    currentCamera = (__int64)v26->currentCamera;
    if ( !currentCamera )
      goto LABEL_292;
    cullingMask = UnityEngine_Camera__get_cullingMask((UnityEngine_Camera_o *)currentCamera, 0);
    v28 = UnityEngine_LayerMask__op_Implicit((UnityEngine_LayerMask_o)*(&v10->_1.byval_arg.bits + 1), 0);
    v29 = *((float *)&v10->_1.castClass + 1);
    v30 = v28;
    if ( v29 <= 0.0 )
    {
      v31 = UICamera_TypeInfo;
      if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v2);
        v31 = UICamera_TypeInfo;
      }
      currentCamera = (__int64)v31->static_fields->currentCamera;
      if ( !currentCamera )
        goto LABEL_292;
      farClipPlane = UnityEngine_Camera__get_farClipPlane((UnityEngine_Camera_o *)currentCamera, 0);
      currentCamera = (__int64)UICamera_TypeInfo->static_fields->currentCamera;
      if ( !currentCamera )
        goto LABEL_292;
      v29 = farClipPlane - UnityEngine_Camera__get_nearClipPlane((UnityEngine_Camera_o *)currentCamera, 0);
    }
    data_high = HIDWORD(v10->_1.byval_arg.data);
    if ( data_high > 1 )
      break;
    if ( !data_high )
    {
      v69 = *(&UICamera_TypeInfo->_2.cctor_finished + 1);
      *(UnityEngine_Ray_o *)&dest.fields.depth = v257;
      if ( !v69 )
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v2);
      if ( !*(&UnityEngine_Physics_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Physics_TypeInfo, v2);
      *(_OWORD *)&v256.fields.m_Origin.fields.x = *(_OWORD *)&dest.fields.depth;
      v70 = UICamera_TypeInfo->static_fields;
      *(_QWORD *)&v256.fields.m_Direction.fields.y = *(_QWORD *)&dest.fields.hit.fields.m_Normal.fields.x;
      if ( !UnityEngine_Physics__Raycast_83886624(&v256, &v70->lastHit, v29, v30 & cullingMask, 0) )
        goto LABEL_25;
      v207 = UICamera_TypeInfo;
      if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v2);
        v207 = UICamera_TypeInfo;
      }
      point = UnityEngine_RaycastHit__get_point(&v207->static_fields->lastHit, 0);
      v208 = UICamera_TypeInfo;
      UICamera_TypeInfo->static_fields->lastWorldPosition = point;
      currentCamera = (__int64)UnityEngine_RaycastHit__get_collider(&v208->static_fields->lastHit, 0);
      if ( !currentCamera )
        goto LABEL_292;
      v209 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)currentCamera, 0);
      v210 = UICamera_TypeInfo->static_fields;
      v210->hoveredObject = v209;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&v210->hoveredObject,
        (int32_t)v209,
        v211,
        v212,
        v213,
        v214,
        v215,
        v216);
      currentCamera = (__int64)UICamera_TypeInfo->static_fields->list;
      if ( !currentCamera )
        goto LABEL_292;
      currentCamera = (__int64)BetterList_object___get_Item(
                                 (BetterList_T__o *)currentCamera,
                                 0,
                                 (const MethodInfo_3E6F7E8 *)Method_BetterList_UICamera__get_Item__);
      if ( !currentCamera )
        goto LABEL_292;
      if ( *(_BYTE *)(currentCamera + 40) )
        return v4 < size;
      v217 = UICamera_TypeInfo;
      if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v2);
        v217 = UICamera_TypeInfo;
      }
      currentCamera = (__int64)v217->static_fields->hoveredObject;
      if ( !currentCamera )
        goto LABEL_292;
      transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)currentCamera, 0);
      RootRigidbody = (UnityEngine_Object_o *)UICamera__FindRootRigidbody(transform, v219);
      goto LABEL_277;
    }
    if ( data_high != 1 )
      goto LABEL_25;
    *(_OWORD *)&dest.fields.depth = *(_OWORD *)&v257.fields.m_Origin.fields.x;
    v34 = *(&UnityEngine_Physics_TypeInfo->_2.cctor_finished + 1);
    *(_QWORD *)&dest.fields.hit.fields.m_Normal.fields.x = *(_QWORD *)&v257.fields.m_Direction.fields.y;
    if ( !v34 )
      j_il2cpp_runtime_class_init_0(UnityEngine_Physics_TypeInfo, v2);
    v255 = *(UnityEngine_Ray_o *)&dest.fields.depth;
    currentCamera = (__int64)UnityEngine_Physics__RaycastAll_83889396(&v255, v29, v30 & (unsigned int)cullingMask, 0);
    if ( !currentCamera )
      goto LABEL_292;
    v35 = *(_QWORD *)(currentCamera + 24);
    v36 = currentCamera;
    v37 = v35;
    if ( (int)v35 >= 2 )
    {
      v89 = 0;
      v90 = currentCamera + 32;
      while ( 1 )
      {
        if ( v89 >= v37 )
          goto LABEL_293;
        currentCamera = (__int64)UnityEngine_RaycastHit__get_collider((UnityEngine_RaycastHit_o *)v90, 0);
        if ( !currentCamera )
          goto LABEL_292;
        currentCamera = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)currentCamera, 0);
        if ( !currentCamera )
          goto LABEL_292;
        v91 = (UnityEngine_GameObject_o *)currentCamera;
        Component_object = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_object_(
                                                     (UnityEngine_GameObject_o *)currentCamera,
                                                     (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v92);
        currentCamera = UnityEngine_Object__op_Inequality(Component_object, 0, 0);
        if ( (currentCamera & 1) != 0 )
        {
          if ( !Component_object )
            goto LABEL_292;
          currentCamera = UIWidget__get_isVisible((UIWidget_o *)Component_object, 0);
          if ( (currentCamera & 1) != 0 )
          {
            monitor = Component_object[9].monitor;
            if ( !monitor )
              goto LABEL_131;
            if ( v89 >= *(unsigned int *)(v36 + 24) )
              goto LABEL_293;
            v262 = UnityEngine_RaycastHit__get_point((UnityEngine_RaycastHit_o *)v90, 0);
            currentCamera = (*((__int64 (__fastcall **)(_QWORD, _QWORD, float, float, float))monitor + 3))(
                              *((_QWORD *)monitor + 8),
                              *((_QWORD *)monitor + 5),
                              v262.fields.x,
                              v262.fields.y,
                              v262.fields.z);
            if ( (currentCamera & 1) != 0 )
              goto LABEL_131;
          }
        }
        else
        {
          if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v2);
          v96 = NGUITools__FindInParents_object_(
                  v91,
                  (const MethodInfo_38F0B48 *)Method_NGUITools_FindInParents_UIRect___);
          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v95);
          currentCamera = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v96, 0, 0);
          if ( (currentCamera & 1) == 0 )
            goto LABEL_131;
          if ( !v96 )
            goto LABEL_292;
          if ( *(float *)&v96[9].klass >= 0.001 )
          {
LABEL_131:
            if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v2);
            if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v2);
            v97 = NGUITools__CalculateRaycastDepth(v91, 0);
            currentCamera = (__int64)UICamera_TypeInfo;
            UICamera_TypeInfo->static_fields->mHit.fields.depth = v97;
            if ( v97 != 0x7FFFFFFF )
            {
              if ( !*(_DWORD *)(currentCamera + 228) )
                j_il2cpp_runtime_class_init_0(currentCamera, v2);
              if ( v89 >= *(unsigned int *)(v36 + 24) )
                goto LABEL_293;
              v99 = *(_OWORD *)v90;
              v98 = *(_OWORD *)(v90 + 16);
              v100 = *(struct UnityEngine_Vector2_o *)(v90 + 32);
              v101 = UICamera_TypeInfo->static_fields;
              v101->mHit.fields.hit.fields.m_Collider = *(_DWORD *)(v90 + 40);
              *(_OWORD *)&v101->mHit.fields.hit.fields.m_Point.fields.x = v99;
              v101->mHit.fields.hit.fields.m_UV = v100;
              *(_OWORD *)&v101->mHit.fields.hit.fields.m_Normal.fields.y = v98;
              if ( v89 >= *(unsigned int *)(v36 + 24) )
                goto LABEL_293;
              UICamera_TypeInfo->static_fields->mHit.fields.point = UnityEngine_RaycastHit__get_point(
                                                                      (UnityEngine_RaycastHit_o *)v90,
                                                                      0);
              if ( v89 >= *(unsigned int *)(v36 + 24) )
                goto LABEL_293;
              currentCamera = (__int64)UnityEngine_RaycastHit__get_collider((UnityEngine_RaycastHit_o *)v90, 0);
              if ( !currentCamera )
                goto LABEL_292;
              v102 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)currentCamera, 0);
              v103 = UICamera_TypeInfo->static_fields;
              v103->mHit.fields.go = v102;
              sub_2213A04(
                (MissionNaviTransitionBoardItem_o *)&v103->mHit.fields.go,
                (int32_t)v102,
                v104,
                v105,
                v106,
                v107,
                v108,
                v109);
              v110 = UICamera_TypeInfo->static_fields;
              mHits = v110->mHits;
              if ( !mHits )
                goto LABEL_292;
              memcpy(&dest, &v110->mHit, sizeof(dest));
              BetterList_UICamera_DepthEntry___Add(
                mHits,
                &dest,
                (const MethodInfo_3E752C4 *)Method_BetterList_UICamera_DepthEntry__Add__);
            }
          }
        }
        v37 = *(_DWORD *)(v36 + 24);
        ++v89;
        v90 += 44;
        if ( (__int64)v89 >= (int)v37 )
        {
          v112 = UICamera_TypeInfo;
          if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v2);
            v112 = UICamera_TypeInfo;
          }
          currentCamera = (__int64)UICamera___c_TypeInfo;
          v113 = v112->static_fields->mHits;
          if ( !*(&UICamera___c_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(UICamera___c_TypeInfo, v2);
            currentCamera = (__int64)UICamera___c_TypeInfo;
          }
          v114 = *(struct UICamera___c_StaticFields **)(currentCamera + 184);
          _9__125_0 = v114->__9__125_0;
          if ( !_9__125_0 )
          {
            if ( !*(_DWORD *)(currentCamera + 228) )
            {
              j_il2cpp_runtime_class_init_0(currentCamera, v2);
              v114 = UICamera___c_TypeInfo->static_fields;
            }
            v116 = (Il2CppObject *)v114->__9;
            _9__125_0 = (BetterList_CompareFunc_UICamera_DepthEntry__o *)sub_2213CCC(BetterList_CompareFunc_UICamera_DepthEntry__TypeInfo);
            BetterList_CompareFunc_UICamera_DepthEntry____ctor(
              _9__125_0,
              v116,
              Method_UICamera___c__Raycast_b__125_0__,
              0);
            v117 = UICamera___c_TypeInfo->static_fields;
            v117->__9__125_0 = _9__125_0;
            sub_2213A04(
              (MissionNaviTransitionBoardItem_o *)&v117->__9__125_0,
              (int32_t)_9__125_0,
              v118,
              v119,
              v120,
              v121,
              v122,
              v123);
          }
          if ( v113 )
          {
            BetterList_UICamera_DepthEntry___Sort(
              v113,
              (BetterList_CompareFunc_T__o *)_9__125_0,
              (const MethodInfo_3E75A88 *)Method_BetterList_UICamera_DepthEntry__Sort__);
            v124 = 0;
            for ( i = 32; ; i += 72 )
            {
              v126 = UICamera_TypeInfo;
              if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
              {
                j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v2);
                v126 = UICamera_TypeInfo;
              }
              currentCamera = (__int64)v126->static_fields->mHits;
              if ( !currentCamera )
                goto LABEL_292;
              v127 = *(&v126->_2.cctor_finished + 1);
              if ( (__int64)v124 >= *(int *)(currentCamera + 24) )
                goto LABEL_216;
              if ( !v127 )
              {
                j_il2cpp_runtime_class_init_0(v126, v2);
                currentCamera = (__int64)UICamera_TypeInfo->static_fields->mHits;
                if ( !currentCamera )
                  goto LABEL_292;
              }
              v128 = *(_QWORD *)(currentCamera + 16);
              if ( !v128 )
                goto LABEL_292;
              if ( v124 >= *(unsigned int *)(v128 + 24) )
                goto LABEL_293;
              if ( UICamera__IsVisible_56139020((UICamera_DepthEntry_o *)(v128 + i), v2) )
                break;
              ++v124;
            }
            v181 = UICamera_TypeInfo;
            if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
            {
              j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v2);
              v181 = UICamera_TypeInfo;
            }
            currentCamera = (__int64)v181->static_fields->mHits;
            if ( currentCamera )
            {
              BetterList_UICamera_DepthEntry___get_Item(
                &dest,
                (BetterList_UICamera_DepthEntry__o *)currentCamera,
                v124,
                (const MethodInfo_3E75070 *)Method_BetterList_UICamera_DepthEntry__get_Item__);
              v182 = UICamera_TypeInfo;
              v183 = *(_OWORD *)&dest.fields.hit.fields.m_Normal.fields.y;
              v184 = *(_OWORD *)&dest.fields.hit.fields.m_Point.fields.x;
              v185 = UICamera_TypeInfo->static_fields;
              *(_OWORD *)&v185->lastHit.fields.m_Distance = *(_OWORD *)&dest.fields.hit.fields.m_Distance;
              *(_OWORD *)&v185->lastHit.fields.m_Point.fields.x = v184;
              *(_OWORD *)&v185->lastHit.fields.m_Normal.fields.y = v183;
              currentCamera = (__int64)v182->static_fields->mHits;
              if ( currentCamera )
              {
                BetterList_UICamera_DepthEntry___get_Item(
                  &v254,
                  (BetterList_UICamera_DepthEntry__o *)currentCamera,
                  v124,
                  (const MethodInfo_3E75070 *)Method_BetterList_UICamera_DepthEntry__get_Item__);
                go = (int32_t)v254.fields.go;
                p_hoveredObject = (MissionNaviTransitionBoardItem_o *)&UICamera_TypeInfo->static_fields->hoveredObject;
                p_hoveredObject->klass = (MissionNaviTransitionBoardItem_c *)v254.fields.go;
                sub_2213A04(p_hoveredObject, go, v188, v189, v190, v191, v192, v193);
                currentCamera = (__int64)UICamera_TypeInfo->static_fields->mHits;
                if ( currentCamera )
                {
                  BetterList_UICamera_DepthEntry___get_Item(
                    &v254,
                    (BetterList_UICamera_DepthEntry__o *)currentCamera,
                    v124,
                    (const MethodInfo_3E75070 *)Method_BetterList_UICamera_DepthEntry__get_Item__);
                  v194 = UICamera_TypeInfo;
                  v195 = *(_QWORD *)&v254.fields.point.fields.x;
                  v196 = UICamera_TypeInfo->static_fields;
                  v196->lastWorldPosition.fields.z = v254.fields.point.fields.z;
                  *(_QWORD *)&v196->lastWorldPosition.fields.x = v195;
                  goto LABEL_256;
                }
              }
            }
          }
          goto LABEL_292;
        }
      }
    }
    if ( (unsigned int)v35 != 1 )
      goto LABEL_25;
    if ( !(_DWORD)v35 )
      goto LABEL_293;
    currentCamera = (__int64)UnityEngine_RaycastHit__get_collider((UnityEngine_RaycastHit_o *)(currentCamera + 32), 0);
    if ( !currentCamera )
      goto LABEL_292;
    currentCamera = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)currentCamera, 0);
    if ( !currentCamera )
      goto LABEL_292;
    v38 = (UnityEngine_GameObject_o *)currentCamera;
    v40 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_object_(
                                    (UnityEngine_GameObject_o *)currentCamera,
                                    (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v39);
    currentCamera = UnityEngine_Object__op_Inequality(v40, 0, 0);
    if ( (currentCamera & 1) != 0 )
    {
      if ( !v40 )
        goto LABEL_292;
      currentCamera = UIWidget__get_isVisible((UIWidget_o *)v40, 0);
      if ( (currentCamera & 1) == 0 )
        goto LABEL_25;
      v41 = v40[9].monitor;
      if ( v41 )
      {
        if ( !*(_DWORD *)(v36 + 24) )
          goto LABEL_293;
        v259 = UnityEngine_RaycastHit__get_point((UnityEngine_RaycastHit_o *)(v36 + 32), 0);
        currentCamera = (*((__int64 (__fastcall **)(_QWORD, _QWORD, float, float, float))v41 + 3))(
                          *((_QWORD *)v41 + 8),
                          *((_QWORD *)v41 + 5),
                          v259.fields.x,
                          v259.fields.y,
                          v259.fields.z);
        if ( (currentCamera & 1) == 0 )
          goto LABEL_25;
      }
    }
    else
    {
      if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v2);
      v166 = NGUITools__FindInParents_object_(v38, (const MethodInfo_38F0B48 *)Method_NGUITools_FindInParents_UIRect___);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v165);
      currentCamera = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v166, 0, 0);
      if ( (currentCamera & 1) != 0 )
      {
        if ( !v166 )
          goto LABEL_292;
        if ( *(float *)&v166[9].klass < 0.001 )
          goto LABEL_25;
      }
    }
    if ( !*(_DWORD *)(v36 + 24) )
      goto LABEL_293;
    v263 = UnityEngine_RaycastHit__get_point((UnityEngine_RaycastHit_o *)(v36 + 32), 0);
    if ( !*(_DWORD *)(v36 + 24) )
      goto LABEL_293;
    currentCamera = (__int64)UnityEngine_RaycastHit__get_collider((UnityEngine_RaycastHit_o *)(v36 + 32), 0);
    if ( !currentCamera )
      goto LABEL_292;
    v168 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)currentCamera, 0);
    if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v167);
    currentCamera = UICamera__IsVisible(v263, v168, v167);
    if ( (currentCamera & 1) != 0 )
    {
      if ( !*(_DWORD *)(v36 + 24) )
        goto LABEL_293;
      currentCamera = (__int64)UICamera_TypeInfo;
      v239 = *(_OWORD *)(v36 + 48);
      v240 = *(_OWORD *)(v36 + 60);
      v241 = *(&UICamera_TypeInfo->_2.cctor_finished + 1);
      *(_OWORD *)&dest.fields.depth = *(_OWORD *)(v36 + 32);
      *(_OWORD *)&dest.fields.hit.fields.m_Normal.fields.x = v239;
      *(_OWORD *)&dest.fields.hit.fields.m_FaceID = v240;
      if ( !v241 )
      {
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v2);
        currentCamera = (__int64)UICamera_TypeInfo;
      }
      v242 = *(_OWORD *)&dest.fields.hit.fields.m_Normal.fields.x;
      v243 = *(_OWORD **)(currentCamera + 184);
      v244 = *(_OWORD *)&dest.fields.hit.fields.m_FaceID;
      v243[5] = *(_OWORD *)&dest.fields.depth;
      v243[6] = v242;
      *(_OWORD *)((char *)v243 + 108) = v244;
      if ( !*(_DWORD *)(v36 + 24) )
LABEL_293:
        sub_2213CE4(currentCamera);
      v265 = UnityEngine_RaycastHit__get_point((UnityEngine_RaycastHit_o *)(v36 + 32), 0);
      v245 = UICamera_TypeInfo;
      UICamera_TypeInfo->static_fields->lastWorldPosition = v265;
      currentCamera = (__int64)UnityEngine_RaycastHit__get_collider(&v245->static_fields->lastHit, 0);
      if ( !currentCamera )
        goto LABEL_292;
      v246 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)currentCamera, 0);
      v179 = (int)v246;
      v238 = UICamera_TypeInfo->static_fields;
      v238->hoveredObject = v246;
LABEL_290:
      v180 = (MissionNaviTransitionBoardItem_o *)&v238->hoveredObject;
LABEL_291:
      sub_2213A04(v180, v179, v172, v173, v174, v175, v176, v177);
      return v4 < size;
    }
LABEL_25:
    ++v4;
  }
  if ( data_high == 2 )
  {
    v71 = UICamera_TypeInfo;
    if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v2);
      v71 = UICamera_TypeInfo;
    }
    v72 = (float *)v71->static_fields;
    v74 = v257.fields.m_Origin.fields.y;
    v73 = v257.fields.m_Origin.fields.x;
    v75 = v257.fields.m_Origin.fields.z;
    v76 = v257.fields.m_Direction.fields.x;
    v77 = *(_QWORD *)&v257.fields.m_Direction.fields.y;
    v78 = v72[116];
    v79 = v72[117];
    v80 = v72[118];
    v81 = v72[119];
    if ( !byte_5969AE4 )
    {
      v249 = v257.fields.m_Origin.fields.x;
      v251 = v257.fields.m_Origin.fields.z;
      sub_2213A60(&UnityEngine_Mathf_TypeInfo);
      v73 = v249;
      v75 = v251;
      byte_5969AE4 = 1;
    }
    v82 = UnityEngine_Mathf_TypeInfo->static_fields;
    v83 = (float)(*((float *)&v77 + 1) * v80) + (float)((float)(v76 * v78) + (float)(*(float *)&v77 * v79));
    v84 = fmaxf(fabsf(v83), 0.0) * 0.000001;
    if ( v84 <= (float)(v82->Epsilon * 8.0) )
      v84 = v82->Epsilon * 8.0;
    if ( vabds_f32(0.0, v83) < v84 )
      goto LABEL_25;
    v85 = (float)((float)-(float)((float)(v75 * v80) + (float)((float)(v73 * v78) + (float)(v74 * v79))) - v81) / v83;
    if ( v85 <= 0.0 )
      goto LABEL_25;
    v261 = UnityEngine_Ray__GetPoint(&v257, v85, 0);
    if ( !*(&UnityEngine_Physics2D_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Physics2D_TypeInfo, v86);
    v267.fields.x = v261.fields.x;
    v267.fields.y = v261.fields.y;
    v88 = (UnityEngine_Object_o *)UnityEngine_Physics2D__OverlapPoint(v267, v30 & (unsigned int)cullingMask, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v87);
    if ( !UnityEngine_Object__op_Implicit(v88, 0) )
      goto LABEL_25;
    currentCamera = (__int64)UICamera_TypeInfo;
    if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v2);
      currentCamera = (__int64)UICamera_TypeInfo;
    }
    *(UnityEngine_Vector3_o *)(*(_QWORD *)(currentCamera + 184) + 68LL) = v261;
    if ( !v88 )
      goto LABEL_292;
    v222 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v88, 0);
    v223 = UICamera_TypeInfo->static_fields;
    v223->hoveredObject = v222;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&v223->hoveredObject,
      (int32_t)v222,
      v224,
      v225,
      v226,
      v227,
      v228,
      v229);
    if ( LOBYTE(v10->_1.byval_arg.bits) )
      return v4 < size;
    v230 = UICamera_TypeInfo;
    if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v2);
      v230 = UICamera_TypeInfo;
    }
    currentCamera = (__int64)v230->static_fields->hoveredObject;
    if ( !currentCamera )
      goto LABEL_292;
    v231 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)currentCamera, 0);
    RootRigidbody = (UnityEngine_Object_o *)UICamera__FindRootRigidbody2D(v231, v232);
LABEL_277:
    v233 = RootRigidbody;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v221);
    currentCamera = UnityEngine_Object__op_Inequality(v233, 0, 0);
    if ( (currentCamera & 1) == 0 )
      return v4 < size;
    if ( !v233 )
      goto LABEL_292;
    v234 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v233, 0);
    v236 = UICamera_TypeInfo;
    v237 = v234;
    if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v235);
      v236 = UICamera_TypeInfo;
    }
    v238 = v236->static_fields;
    v179 = (int)v237;
    v238->hoveredObject = v237;
    goto LABEL_290;
  }
  if ( data_high != 3 )
    goto LABEL_25;
  v42 = UICamera_TypeInfo;
  if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v2);
    v42 = UICamera_TypeInfo;
  }
  v43 = (float *)v42->static_fields;
  v45 = v257.fields.m_Origin.fields.y;
  v44 = v257.fields.m_Origin.fields.x;
  v46 = v257.fields.m_Origin.fields.z;
  v47 = v257.fields.m_Direction.fields.x;
  v48 = *(_QWORD *)&v257.fields.m_Direction.fields.y;
  v49 = v43[116];
  v50 = v43[117];
  v51 = v43[118];
  v52 = v43[119];
  if ( !byte_5969AE4 )
  {
    v248 = v257.fields.m_Origin.fields.x;
    v250 = v257.fields.m_Origin.fields.z;
    sub_2213A60(&UnityEngine_Mathf_TypeInfo);
    v44 = v248;
    v46 = v250;
    byte_5969AE4 = 1;
  }
  v53 = UnityEngine_Mathf_TypeInfo->static_fields;
  v54 = (float)(*((float *)&v48 + 1) * v51) + (float)((float)(v47 * v49) + (float)(*(float *)&v48 * v50));
  v55 = fmaxf(fabsf(v54), 0.0) * 0.000001;
  if ( v55 <= (float)(v53->Epsilon * 8.0) )
    v55 = v53->Epsilon * 8.0;
  if ( vabds_f32(0.0, v54) < v55 )
    goto LABEL_25;
  v56 = (float)((float)-(float)((float)(v46 * v51) + (float)((float)(v44 * v49) + (float)(v45 * v50))) - v52) / v54;
  if ( v56 <= 0.0 )
    goto LABEL_25;
  v260 = UnityEngine_Ray__GetPoint(&v257, v56, 0);
  v58 = UICamera_TypeInfo;
  if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v57);
    v58 = UICamera_TypeInfo;
  }
  v58->static_fields->lastWorldPosition = v260;
  v59 = v58->static_fields;
  v60 = v59->lastWorldPosition.fields.x;
  v61 = v59->lastWorldPosition.fields.y;
  if ( !*(&UnityEngine_Physics2D_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Physics2D_TypeInfo, v57);
  v266.fields.x = v60;
  v266.fields.y = v61;
  currentCamera = (__int64)UnityEngine_Physics2D__OverlapPointAll(v266, v30 & (unsigned int)cullingMask, 0);
  if ( !currentCamera )
    goto LABEL_292;
  v62 = *(_QWORD *)(currentCamera + 24);
  v63 = currentCamera;
  if ( (int)v62 < 2 )
  {
    if ( (unsigned int)*(_QWORD *)(currentCamera + 24) != 1 )
      goto LABEL_25;
    if ( !(_DWORD)v62 )
      goto LABEL_293;
    currentCamera = *(_QWORD *)(currentCamera + 32);
    if ( !currentCamera )
      goto LABEL_292;
    currentCamera = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)currentCamera, 0);
    if ( !currentCamera )
      goto LABEL_292;
    v64 = (UnityEngine_GameObject_o *)currentCamera;
    v66 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_object_(
                                    (UnityEngine_GameObject_o *)currentCamera,
                                    (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v65);
    currentCamera = UnityEngine_Object__op_Inequality(v66, 0, 0);
    if ( (currentCamera & 1) != 0 )
    {
      if ( !v66 )
        goto LABEL_292;
      if ( !UIWidget__get_isVisible((UIWidget_o *)v66, 0) )
        goto LABEL_25;
      v67 = v66[9].monitor;
      if ( v67 )
      {
        v68 = UICamera_TypeInfo;
        if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v2);
          v68 = UICamera_TypeInfo;
        }
        if ( ((*((__int64 (__fastcall **)(_QWORD, _QWORD, float, float, float))v67 + 3))(
                *((_QWORD *)v67 + 8),
                *((_QWORD *)v67 + 5),
                v68->static_fields->lastWorldPosition.fields.x,
                v68->static_fields->lastWorldPosition.fields.y,
                v68->static_fields->lastWorldPosition.fields.z)
            & 1) == 0 )
          goto LABEL_25;
      }
    }
    else
    {
      if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v2);
      v170 = NGUITools__FindInParents_object_(v64, (const MethodInfo_38F0B48 *)Method_NGUITools_FindInParents_UIRect___);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v169);
      currentCamera = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v170, 0, 0);
      if ( (currentCamera & 1) != 0 )
      {
        if ( !v170 )
          goto LABEL_292;
        if ( *(float *)&v170[9].klass < 0.001 )
          goto LABEL_25;
      }
    }
    v171 = UICamera_TypeInfo;
    if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v2);
      v171 = UICamera_TypeInfo;
    }
    if ( UICamera__IsVisible(v171->static_fields->lastWorldPosition, v64, v2) )
    {
      v178 = UICamera_TypeInfo;
      if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v2);
        v178 = UICamera_TypeInfo;
      }
      v179 = (int)v64;
      v180 = (MissionNaviTransitionBoardItem_o *)&v178->static_fields->hoveredObject;
      v180->klass = (MissionNaviTransitionBoardItem_c *)v64;
      goto LABEL_291;
    }
    goto LABEL_25;
  }
  v129 = 0;
  do
  {
    if ( (unsigned int)v129 >= (unsigned int)v62 )
      goto LABEL_293;
    currentCamera = *(_QWORD *)(v63 + 32 + 8 * v129);
    if ( !currentCamera )
      goto LABEL_292;
    currentCamera = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)currentCamera, 0);
    if ( !currentCamera )
      goto LABEL_292;
    v130 = (UnityEngine_GameObject_o *)currentCamera;
    v132 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_object_(
                                     (UnityEngine_GameObject_o *)currentCamera,
                                     (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v131);
    currentCamera = UnityEngine_Object__op_Inequality(v132, 0, 0);
    if ( (currentCamera & 1) != 0 )
    {
      if ( !v132 )
        goto LABEL_292;
      currentCamera = UIWidget__get_isVisible((UIWidget_o *)v132, 0);
      if ( (currentCamera & 1) == 0 )
        goto LABEL_195;
      v133 = v132[9].monitor;
      if ( v133 )
      {
        v134 = UICamera_TypeInfo;
        if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v2);
          v134 = UICamera_TypeInfo;
        }
        currentCamera = (*((__int64 (__fastcall **)(_QWORD, _QWORD, float, float, float))v133 + 3))(
                          *((_QWORD *)v133 + 8),
                          *((_QWORD *)v133 + 5),
                          v134->static_fields->lastWorldPosition.fields.x,
                          v134->static_fields->lastWorldPosition.fields.y,
                          v134->static_fields->lastWorldPosition.fields.z);
        if ( (currentCamera & 1) == 0 )
          goto LABEL_195;
      }
    }
    else
    {
      if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v2);
      v136 = NGUITools__FindInParents_object_(
               v130,
               (const MethodInfo_38F0B48 *)Method_NGUITools_FindInParents_UIRect___);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v135);
      currentCamera = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v136, 0, 0);
      if ( (currentCamera & 1) != 0 )
      {
        if ( !v136 )
          goto LABEL_292;
        if ( *(float *)&v136[9].klass < 0.001 )
          goto LABEL_195;
      }
    }
    if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v2);
    if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v2);
    v143 = NGUITools__CalculateRaycastDepth(v130, 0);
    currentCamera = (__int64)UICamera_TypeInfo;
    v144 = UICamera_TypeInfo->static_fields;
    v144->mHit.fields.depth = v143;
    if ( v143 != 0x7FFFFFFF )
    {
      if ( !*(_DWORD *)(currentCamera + 228) )
      {
        j_il2cpp_runtime_class_init_0(currentCamera, v2);
        v144 = UICamera_TypeInfo->static_fields;
      }
      v144->mHit.fields.go = v130;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&v144->mHit.fields.go,
        (int32_t)v130,
        v137,
        v138,
        v139,
        v140,
        v141,
        v142);
      v145 = UICamera_TypeInfo;
      v146 = UICamera_TypeInfo->static_fields;
      v147 = *(_QWORD *)&v146->lastWorldPosition.fields.x;
      v146->mHit.fields.point.fields.z = v146->lastWorldPosition.fields.z;
      *(_QWORD *)&v146->mHit.fields.point.fields.x = v147;
      v148 = v145->static_fields;
      v149 = v148->mHits;
      if ( !v149 )
        goto LABEL_292;
      memcpy(&dest, &v148->mHit, sizeof(dest));
      BetterList_UICamera_DepthEntry___Add(
        v149,
        &dest,
        (const MethodInfo_3E752C4 *)Method_BetterList_UICamera_DepthEntry__Add__);
    }
LABEL_195:
    LODWORD(v62) = *(_DWORD *)(v63 + 24);
    ++v129;
  }
  while ( (int)v129 < (int)v62 );
  v150 = UICamera_TypeInfo;
  if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v2);
    v150 = UICamera_TypeInfo;
  }
  currentCamera = (__int64)UICamera___c_TypeInfo;
  v151 = v150->static_fields->mHits;
  if ( !*(&UICamera___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UICamera___c_TypeInfo, v2);
    currentCamera = (__int64)UICamera___c_TypeInfo;
  }
  v152 = *(struct UICamera___c_StaticFields **)(currentCamera + 184);
  _9__125_1 = v152->__9__125_1;
  if ( !_9__125_1 )
  {
    if ( !*(_DWORD *)(currentCamera + 228) )
    {
      j_il2cpp_runtime_class_init_0(currentCamera, v2);
      v152 = UICamera___c_TypeInfo->static_fields;
    }
    v154 = (Il2CppObject *)v152->__9;
    _9__125_1 = (BetterList_CompareFunc_UICamera_DepthEntry__o *)sub_2213CCC(BetterList_CompareFunc_UICamera_DepthEntry__TypeInfo);
    BetterList_CompareFunc_UICamera_DepthEntry____ctor(_9__125_1, v154, Method_UICamera___c__Raycast_b__125_1__, 0);
    v155 = UICamera___c_TypeInfo->static_fields;
    v155->__9__125_1 = _9__125_1;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&v155->__9__125_1,
      (int32_t)_9__125_1,
      v156,
      v157,
      v158,
      v159,
      v160,
      v161);
  }
  if ( !v151 )
    goto LABEL_292;
  BetterList_UICamera_DepthEntry___Sort(
    v151,
    (BetterList_CompareFunc_T__o *)_9__125_1,
    (const MethodInfo_3E75A88 *)Method_BetterList_UICamera_DepthEntry__Sort__);
  v162 = 0;
  v163 = 32;
  while ( 2 )
  {
    v126 = UICamera_TypeInfo;
    if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v2);
      v126 = UICamera_TypeInfo;
    }
    currentCamera = (__int64)v126->static_fields->mHits;
    if ( !currentCamera )
      goto LABEL_292;
    v127 = *(&v126->_2.cctor_finished + 1);
    if ( (__int64)v162 >= *(int *)(currentCamera + 24) )
    {
LABEL_216:
      if ( !v127 )
      {
        j_il2cpp_runtime_class_init_0(v126, v2);
        currentCamera = (__int64)UICamera_TypeInfo->static_fields->mHits;
        if ( !currentCamera )
          goto LABEL_292;
      }
      BetterList_UICamera_DepthEntry___Clear(
        (BetterList_UICamera_DepthEntry__o *)currentCamera,
        (const MethodInfo_3E752AC *)Method_BetterList_UICamera_DepthEntry__Clear__);
      goto LABEL_25;
    }
    if ( !v127 )
    {
      j_il2cpp_runtime_class_init_0(v126, v2);
      currentCamera = (__int64)UICamera_TypeInfo->static_fields->mHits;
      if ( !currentCamera )
        goto LABEL_292;
    }
    v164 = *(_QWORD *)(currentCamera + 16);
    if ( !v164 )
      goto LABEL_292;
    if ( v162 >= *(unsigned int *)(v164 + 24) )
      goto LABEL_293;
    if ( !UICamera__IsVisible_56139020((UICamera_DepthEntry_o *)(v164 + v163), v2) )
    {
      ++v162;
      v163 += 72;
      continue;
    }
    break;
  }
  v197 = UICamera_TypeInfo;
  if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v2);
    v197 = UICamera_TypeInfo;
  }
  currentCamera = (__int64)v197->static_fields->mHits;
  if ( !currentCamera )
    goto LABEL_292;
  BetterList_UICamera_DepthEntry___get_Item(
    &dest,
    (BetterList_UICamera_DepthEntry__o *)currentCamera,
    v162,
    (const MethodInfo_3E75070 *)Method_BetterList_UICamera_DepthEntry__get_Item__);
  v198 = (int32_t)dest.fields.go;
  v199 = (MissionNaviTransitionBoardItem_o *)&UICamera_TypeInfo->static_fields->hoveredObject;
  v199->klass = (MissionNaviTransitionBoardItem_c *)dest.fields.go;
  sub_2213A04(v199, v198, v200, v201, v202, v203, v204, v205);
  v194 = UICamera_TypeInfo;
LABEL_256:
  currentCamera = (__int64)v194->static_fields->mHits;
  if ( !currentCamera )
LABEL_292:
    sub_2213CDC(currentCamera, v2);
  BetterList_UICamera_DepthEntry___Clear(
    (BetterList_UICamera_DepthEntry__o *)currentCamera,
    (const MethodInfo_3E752AC *)Method_BetterList_UICamera_DepthEntry__Clear__);
  return v4 < size;
}


void UICamera__RemoveTouch(int32_t id, const MethodInfo *method)
{
  UICamera_c *v3; // x0
  System_Collections_Generic_Dictionary_int__object__o *mTouches; // x0

  if ( (byte_5974F16 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__UICamera_MouseOrTouch__Remove__);
    sub_2213A60(&UICamera_TypeInfo);
    byte_5974F16 = 1;
  }
  v3 = UICamera_TypeInfo;
  if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, method);
    v3 = UICamera_TypeInfo;
  }
  mTouches = (System_Collections_Generic_Dictionary_int__object__o *)v3->static_fields->mTouches;
  if ( !mTouches )
    sub_2213CDC(0, method);
  System_Collections_Generic_Dictionary_int__object___Remove(
    mTouches,
    id,
    (const MethodInfo_3F9D958 *)Method_System_Collections_Generic_Dictionary_int__UICamera_MouseOrTouch__Remove__);
}


// local variable allocation has failed, the output may be wrong!
void UICamera__ShowTooltip(UICamera_o *this, bool val, const MethodInfo *method)
{
  UICamera_c *v5; // x0
  struct UICamera_BoolDelegate_o *onTooltip; // x8
  __int64 v7; // x0
  __int64 v8; // x1
  MissionNaviTransitionBoardItem_o *p_mTooltip; // x19
  UnityEngine_GameObject_o *v10; // x21
  struct UnityEngine_GameObject_o *mTooltip; // t1
  __int64 v12; // x1
  const MethodInfo *v13; // x3
  Il2CppObject *v14; // x22
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  bool v21[4]; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_5974F24 & 1) == 0 )
  {
    sub_2213A60(&UICamera_TypeInfo);
    sub_2213A60(&StringLiteral_10375/*"OnTooltip"*/);
    byte_5974F24 = 1;
  }
  v5 = UICamera_TypeInfo;
  this->fields.mTooltipTime = 0.0;
  if ( !*(&v5->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v5, val);
    v5 = UICamera_TypeInfo;
  }
  onTooltip = v5->static_fields->onTooltip;
  if ( onTooltip )
  {
    if ( !*(&v5->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v5, val);
      onTooltip = UICamera_TypeInfo->static_fields->onTooltip;
      if ( !onTooltip )
        sub_2213CDC(v7, v8);
    }
    ((void (__fastcall *)(intptr_t, struct UnityEngine_GameObject_o *, bool, intptr_t))onTooltip->fields.invoke_impl)(
      onTooltip->fields.method_code,
      this->fields.mTooltip,
      val,
      onTooltip->fields.method);
  }
  mTooltip = this->fields.mTooltip;
  p_mTooltip = (MissionNaviTransitionBoardItem_o *)&this->fields.mTooltip;
  v10 = mTooltip;
  v21[0] = val;
  v14 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984328, v21);
  if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v12);
  UICamera__Notify(v10, (System_String_o *)StringLiteral_10375/*"OnTooltip"*/, v14, v13);
  if ( !val )
  {
    p_mTooltip->klass = 0;
    sub_2213A04(p_mTooltip, 0, v15, v16, v17, v18, v19, v20);
  }
}


void UICamera__Start(UICamera_o *this, const MethodInfo *method)
{
  UnityEngine_Camera_o *cachedCamera; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x1
  UICamera_c *v6; // x0
  UnityEngine_Object_o *fallThrough; // x20
  const MethodInfo *v8; // x1
  __int64 v9; // x1
  UnityEngine_GameObject_o *gameObject; // x20
  __int64 v11; // x1
  Il2CppObject *v12; // x20
  UnityEngine_Transform_o *v13; // x20
  __int64 v14; // x1
  UnityEngine_Object_o *parent; // x21
  bool v16; // w8
  UnityEngine_GameObject_o *v17; // x0
  __int64 v18; // x1
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  UICamera_c *v25; // x8
  UnityEngine_GameObject_o *v26; // x20
  struct UICamera_StaticFields *static_fields; // x0
  __int64 v28; // x1
  _BOOL4 debug; // w19

  if ( (byte_5974F1A & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Application_TypeInfo);
    sub_2213A60(&NGUIDebug_TypeInfo);
    sub_2213A60(&Method_NGUITools_FindInParents_UIRoot___);
    sub_2213A60(&NGUITools_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&UICamera_TypeInfo);
    byte_5974F1A = 1;
  }
  if ( this->fields.eventType )
  {
    cachedCamera = UICamera__get_cachedCamera(this, method);
    if ( !cachedCamera )
      goto LABEL_38;
    if ( UnityEngine_Camera__get_transparencySortMode(cachedCamera, 0) != 2 )
    {
      cachedCamera = UICamera__get_cachedCamera(this, method);
      if ( !cachedCamera )
        goto LABEL_38;
      UnityEngine_Camera__set_transparencySortMode(cachedCamera, 2, 0);
    }
  }
  if ( !*(&UnityEngine_Application_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo, method);
  if ( UnityEngine_Application__get_isPlaying(0) )
  {
    v6 = UICamera_TypeInfo;
    if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v5);
      v6 = UICamera_TypeInfo;
    }
    fallThrough = (UnityEngine_Object_o *)v6->static_fields->fallThrough;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
    if ( UnityEngine_Object__op_Equality(fallThrough, 0, 0) )
    {
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v9);
      v12 = NGUITools__FindInParents_object_(
              gameObject,
              (const MethodInfo_38F0B48 *)Method_NGUITools_FindInParents_UIRoot___);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
      cachedCamera = (UnityEngine_Camera_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v12, 0, 0);
      if ( ((unsigned __int8)cachedCamera & 1) != 0 )
      {
        if ( !v12 )
          goto LABEL_38;
        cachedCamera = (UnityEngine_Camera_o *)v12;
      }
      else
      {
        cachedCamera = (UnityEngine_Camera_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
        if ( !cachedCamera )
          goto LABEL_38;
        v13 = (UnityEngine_Transform_o *)cachedCamera;
        parent = (UnityEngine_Object_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)cachedCamera, 0);
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14);
        v16 = UnityEngine_Object__op_Inequality(parent, 0, 0);
        cachedCamera = (UnityEngine_Camera_o *)this;
        if ( v16 )
        {
          cachedCamera = (UnityEngine_Camera_o *)UnityEngine_Transform__get_parent(v13, 0);
          if ( !cachedCamera )
            goto LABEL_38;
        }
      }
      v17 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)cachedCamera, 0);
      v25 = UICamera_TypeInfo;
      v26 = v17;
      if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v18);
        v25 = UICamera_TypeInfo;
      }
      static_fields = v25->static_fields;
      static_fields->fallThrough = v26;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&static_fields->fallThrough,
        (int32_t)v26,
        v19,
        v20,
        v21,
        v22,
        v23,
        v24);
    }
    cachedCamera = UICamera__get_cachedCamera(this, v8);
    if ( cachedCamera )
    {
      UnityEngine_Camera__set_eventMask(cachedCamera, 0, 0);
      goto LABEL_33;
    }
LABEL_38:
    sub_2213CDC(cachedCamera, v4);
  }
LABEL_33:
  if ( UICamera__get_handlesEvents(this, v5) )
  {
    debug = this->fields.debug;
    if ( !*(&NGUIDebug_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NGUIDebug_TypeInfo, v28);
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
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7

  if ( (byte_5974F00 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_Camera___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5974F00 = 1;
  }
  mCam = (UnityEngine_Object_o *)this->fields.mCam;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Equality(mCam, 0, 0) )
  {
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)this,
                         (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_Camera___);
    this->fields.mCam = (struct UnityEngine_Camera_o *)Component_object;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.mCam,
      (int32_t)Component_object,
      v5,
      v6,
      v7,
      v8,
      v9,
      v10);
  }
  return this->fields.mCam;
}


UnityEngine_Ray_o *UICamera__get_currentRay(UnityEngine_Ray_o *__return_ptr retstr, const MethodInfo *method)
{
  __int64 v2; // x1
  UICamera_c *v4; // x0
  UnityEngine_Object_o *currentCamera; // x20
  UnityEngine_Ray_o *result; // x0
  __int64 v7; // x1
  struct UICamera_StaticFields *static_fields; // x9
  struct UICamera_MouseOrTouch_o *currentTouch; // x8
  UnityEngine_Camera_o *v10; // x0
  __int64 v11; // x8
  UnityEngine_Ray_o v12; // [xsp+8h] [xbp-38h] BYREF
  UnityEngine_Vector3_o v13; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_5974EFC & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&UICamera_TypeInfo);
    byte_5974EFC = 1;
  }
  v4 = UICamera_TypeInfo;
  if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v2);
    v4 = UICamera_TypeInfo;
  }
  currentCamera = (UnityEngine_Object_o *)v4->static_fields->currentCamera;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v2);
  result = (UnityEngine_Ray_o *)UnityEngine_Object__op_Inequality(currentCamera, 0, 0);
  if ( ((unsigned __int8)result & 1) == 0 )
    goto LABEL_15;
  result = (UnityEngine_Ray_o *)UICamera_TypeInfo;
  if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v7);
    result = (UnityEngine_Ray_o *)UICamera_TypeInfo;
  }
  static_fields = *(struct UICamera_StaticFields **)&result[7].fields.m_Direction.fields.y;
  currentTouch = static_fields->currentTouch;
  if ( currentTouch )
  {
    if ( !LODWORD(result[9].fields.m_Direction.fields.x)
      && (j_il2cpp_runtime_class_init_0(result, v7),
          static_fields = UICamera_TypeInfo->static_fields,
          (currentTouch = static_fields->currentTouch) == 0)
      || (v10 = static_fields->currentCamera) == 0 )
    {
      sub_2213CDC(v10, v7);
    }
    v13.fields.z = 0.0;
    v13.fields.x = currentTouch->fields.pos.fields.x;
    v13.fields.y = currentTouch->fields.pos.fields.y;
    result = UnityEngine_Camera__ScreenPointToRay_83198808(&v12, v10, v13, 0);
    v11 = *(_QWORD *)&v12.fields.m_Direction.fields.y;
    *(_OWORD *)&retstr->fields.m_Origin.fields.x = *(_OWORD *)&v12.fields.m_Origin.fields.x;
    *(_QWORD *)&retstr->fields.m_Direction.fields.y = v11;
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
  int v3; // w8
  UICamera_c *mTouches; // x0
  int v5; // w21
  _BOOL8 v6; // x0
  __int64 v7; // x1
  Il2CppClass *klass; // x19
  unsigned int i; // w23
  struct UICamera_StaticFields *static_fields; // x9
  struct UICamera_MouseOrTouch_array *mMouse; // x8
  int v12; // w10
  UICamera_MouseOrTouch_o *v13; // x8
  UnityEngine_Object_o *dragged; // x19
  struct UICamera_MouseOrTouch_o *controller; // x8
  UnityEngine_Object_o *v16; // x19
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v18; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v19; // [xsp+30h] [xbp-70h] BYREF

  if ( (byte_5974F06 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__UICamera_MouseOrTouch__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_Enumerator_int__UICamera_MouseOrTouch__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_Enumerator_int__UICamera_MouseOrTouch__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_Enumerator_int__UICamera_MouseOrTouch__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_KeyValuePair_int__UICamera_MouseOrTouch__get_Value__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&UICamera_TypeInfo);
    byte_5974F06 = 1;
  }
  v2 = UICamera_TypeInfo;
  v3 = *(&UICamera_TypeInfo->_2.cctor_finished + 1);
  memset(&v19, 0, sizeof(v19));
  if ( !v3 )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v1);
    v2 = UICamera_TypeInfo;
  }
  mTouches = (UICamera_c *)v2->static_fields->mTouches;
  if ( !mTouches )
    goto LABEL_30;
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v18,
    (System_Collections_Generic_Dictionary_int__object__o *)mTouches,
    (const MethodInfo_3F9C8EC *)Method_System_Collections_Generic_Dictionary_int__UICamera_MouseOrTouch__GetEnumerator__);
  v5 = 0;
  v19 = v18;
  v18.fields._dictionary = 0;
  *(_QWORD *)&v18.fields._version = &v19;
  while ( 1 )
  {
    v6 = System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
           &v19,
           (const MethodInfo_4158548 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__UICamera_MouseOrTouch__MoveNext__);
    if ( !v6 )
      break;
    if ( !v19.fields._current.fields.value )
      sub_2213CDC(v6, v7);
    klass = v19.fields._current.fields.value[5].klass;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
    v5 += UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)klass, 0, 0);
  }
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v19,
    (const MethodInfo_415866C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__UICamera_MouseOrTouch__Dispose__);
  for ( i = 0; ; ++i )
  {
    mTouches = UICamera_TypeInfo;
    if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v1);
      mTouches = UICamera_TypeInfo;
    }
    static_fields = mTouches->static_fields;
    mMouse = static_fields->mMouse;
    if ( !mMouse )
      goto LABEL_30;
    v12 = *(&mTouches->_2.cctor_finished + 1);
    if ( (signed int)i >= SLODWORD(mMouse->max_length) )
      break;
    if ( !v12 )
    {
      j_il2cpp_runtime_class_init_0(mTouches, v1);
      mMouse = UICamera_TypeInfo->static_fields->mMouse;
      if ( !mMouse )
        goto LABEL_30;
    }
    if ( i >= LODWORD(mMouse->max_length) )
      sub_2213CE4(mTouches);
    v13 = mMouse->m_Items[i];
    if ( !v13 )
      goto LABEL_30;
    dragged = (UnityEngine_Object_o *)v13->fields.dragged;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v1);
    v5 += UnityEngine_Object__op_Inequality(dragged, 0, 0);
  }
  if ( !v12 )
  {
    j_il2cpp_runtime_class_init_0(mTouches, v1);
    static_fields = UICamera_TypeInfo->static_fields;
  }
  controller = static_fields->controller;
  if ( !controller )
LABEL_30:
    sub_2213CDC(mTouches, v1);
  v16 = (UnityEngine_Object_o *)controller->fields.dragged;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v1);
  return v5 + UnityEngine_Object__op_Inequality(v16, 0, 0);
}


UICamera_o *UICamera__get_eventHandler(const MethodInfo *method)
{
  __int64 v1; // x1
  unsigned __int64 i; // x24
  UICamera_c *v3; // x0
  struct BetterList_UICamera__o *list; // x8
  struct UICamera_array *buffer; // x8
  UnityEngine_Object_o *v6; // x19
  __int64 v7; // x1
  UnityEngine_GameObject_o *gameObject; // x20

  if ( (byte_5974F08 & 1) == 0 )
  {
    sub_2213A60(&NGUITools_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&UICamera_TypeInfo);
    byte_5974F08 = 1;
  }
  for ( i = 0; ; ++i )
  {
    v3 = UICamera_TypeInfo;
    if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v1);
      v3 = UICamera_TypeInfo;
    }
    list = v3->static_fields->list;
    if ( !list )
LABEL_23:
      sub_2213CDC(v3, v1);
    if ( (__int64)i >= list->fields.size )
      break;
    if ( !*(&v3->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v3, v1);
      list = UICamera_TypeInfo->static_fields->list;
      if ( !list )
        goto LABEL_23;
    }
    buffer = list->fields.buffer;
    if ( !buffer )
      goto LABEL_23;
    if ( i >= LODWORD(buffer->max_length) )
      sub_2213CE4(v3);
    v6 = (UnityEngine_Object_o *)buffer->m_Items[i];
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v1);
    v3 = (UICamera_c *)UnityEngine_Object__op_Equality(v6, 0, 0);
    if ( ((unsigned __int8)v3 & 1) == 0 )
    {
      if ( !v6 )
        goto LABEL_23;
      if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)v6, 0) )
      {
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v6, 0);
        if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v7);
        if ( NGUITools__GetActive_56411004(gameObject, 0) )
          return (UICamera_o *)v6;
      }
    }
  }
  return 0;
}


UnityEngine_GameObject_o *UICamera__get_genericEventHandler(const MethodInfo *method)
{
  __int64 v1; // x1
  UICamera_c *v2; // x0

  if ( (byte_5974EFD & 1) == 0 )
  {
    sub_2213A60(&UICamera_TypeInfo);
    byte_5974EFD = 1;
  }
  v2 = UICamera_TypeInfo;
  if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v1);
    v2 = UICamera_TypeInfo;
  }
  return v2->static_fields->mGenericHandler;
}


bool UICamera__get_handlesEvents(UICamera_o *this, const MethodInfo *method)
{
  UICamera_c *v3; // x0
  __int64 v4; // x1
  UnityEngine_Object_o *eventHandler; // x20

  if ( (byte_5974EFF & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&UICamera_TypeInfo);
    byte_5974EFF = 1;
  }
  v3 = UICamera_TypeInfo;
  if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, method);
  eventHandler = (UnityEngine_Object_o *)UICamera__get_eventHandler((const MethodInfo *)v3);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
  return UnityEngine_Object__op_Equality(eventHandler, (UnityEngine_Object_o *)this, 0);
}


bool UICamera__get_isOverUI(const MethodInfo *method)
{
  const MethodInfo *v1; // x1
  UICamera_c *v2; // x0
  struct UICamera_StaticFields *static_fields; // x9
  int v4; // w10
  UICamera_MouseOrTouch_o *currentTouch; // x8
  __int64 v6; // x0
  UnityEngine_Object_o *hoveredObject; // x19
  __int64 v9; // x1
  UICamera_c *v10; // x0
  struct UICamera_StaticFields *v11; // x9
  UnityEngine_Object_o *v12; // x19
  UnityEngine_Object_o *fallThrough; // x20
  __int64 v14; // x1
  UICamera_c *v15; // x0
  UnityEngine_GameObject_o *v16; // x19
  __int64 v17; // x1
  Il2CppObject *v18; // x19

  if ( (byte_5974F01 & 1) == 0 )
  {
    sub_2213A60(&Method_NGUITools_FindInParents_UIRoot___);
    sub_2213A60(&NGUITools_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&UICamera_TypeInfo);
    byte_5974F01 = 1;
  }
  v2 = UICamera_TypeInfo;
  if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v1);
    v2 = UICamera_TypeInfo;
  }
  static_fields = v2->static_fields;
  v4 = *(&v2->_2.cctor_finished + 1);
  currentTouch = static_fields->currentTouch;
  if ( currentTouch )
  {
    if ( !v4 )
    {
      j_il2cpp_runtime_class_init_0(v2, v1);
      currentTouch = UICamera_TypeInfo->static_fields->currentTouch;
      if ( !currentTouch )
        sub_2213CDC(v6, v1);
    }
    return UICamera_MouseOrTouch__get_isOverUI(currentTouch, v1);
  }
  else
  {
    if ( !v4 )
    {
      j_il2cpp_runtime_class_init_0(v2, v1);
      static_fields = UICamera_TypeInfo->static_fields;
    }
    hoveredObject = (UnityEngine_Object_o *)static_fields->hoveredObject;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v1);
    if ( UnityEngine_Object__op_Equality(hoveredObject, 0, 0) )
      return 0;
    v10 = UICamera_TypeInfo;
    if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v9);
      v10 = UICamera_TypeInfo;
    }
    v11 = v10->static_fields;
    v12 = (UnityEngine_Object_o *)v11->hoveredObject;
    fallThrough = (UnityEngine_Object_o *)v11->fallThrough;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
    if ( UnityEngine_Object__op_Equality(v12, fallThrough, 0) )
    {
      return 0;
    }
    else
    {
      v15 = UICamera_TypeInfo;
      if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v14);
        v15 = UICamera_TypeInfo;
      }
      v16 = v15->static_fields->hoveredObject;
      if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v14);
      v18 = NGUITools__FindInParents_object_(v16, (const MethodInfo_38F0B48 *)Method_NGUITools_FindInParents_UIRoot___);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17);
      return UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v18, 0, 0);
    }
  }
}


UnityEngine_Camera_o *UICamera__get_mainCamera(const MethodInfo *method)
{
  __int64 v1; // x1
  UICamera_c *v2; // x0
  __int64 v3; // x1
  UnityEngine_Object_o *eventHandler; // x19
  _BOOL8 v5; // x0
  const MethodInfo *v6; // x1

  if ( (byte_5974F07 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&UICamera_TypeInfo);
    byte_5974F07 = 1;
  }
  v2 = UICamera_TypeInfo;
  if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v1);
  eventHandler = (UnityEngine_Object_o *)UICamera__get_eventHandler((const MethodInfo *)v2);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v3);
  v5 = UnityEngine_Object__op_Inequality(eventHandler, 0, 0);
  if ( !v5 )
    return 0;
  if ( !eventHandler )
    sub_2213CDC(v5, v6);
  return UICamera__get_cachedCamera((UICamera_o *)eventHandler, v6);
}


UnityEngine_GameObject_o *UICamera__get_selectedObject(const MethodInfo *method)
{
  __int64 v1; // x1
  UICamera_c *v2; // x0
  UnityEngine_Object_o *mCurrentSelection; // x19
  __int64 v4; // x1
  bool v5; // w8
  UnityEngine_GameObject_o *result; // x0
  UICamera_c *v7; // x0

  if ( (byte_5974F02 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&UICamera_TypeInfo);
    byte_5974F02 = 1;
  }
  v2 = UICamera_TypeInfo;
  if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v1);
    v2 = UICamera_TypeInfo;
  }
  mCurrentSelection = (UnityEngine_Object_o *)v2->static_fields->mCurrentSelection;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v1);
  v5 = UnityEngine_Object__op_Implicit(mCurrentSelection, 0);
  result = 0;
  if ( v5 )
  {
    v7 = UICamera_TypeInfo;
    if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v4);
      v7 = UICamera_TypeInfo;
    }
    return v7->static_fields->mCurrentSelection;
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
  int v3; // w8
  UICamera_c *mTouches; // x0
  int v5; // w21
  _BOOL8 v6; // x0
  __int64 v7; // x1
  UnityEngine_Object_o *monitor; // x19
  unsigned int i; // w23
  struct UICamera_StaticFields *static_fields; // x9
  struct UICamera_MouseOrTouch_array *mMouse; // x8
  int v12; // w10
  UICamera_MouseOrTouch_o *v13; // x8
  UnityEngine_Object_o *pressed; // x19
  struct UICamera_MouseOrTouch_o *controller; // x8
  UnityEngine_Object_o *v16; // x19
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v18; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v19; // [xsp+30h] [xbp-70h] BYREF

  if ( (byte_5974F05 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__UICamera_MouseOrTouch__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_Enumerator_int__UICamera_MouseOrTouch__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_Enumerator_int__UICamera_MouseOrTouch__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_Enumerator_int__UICamera_MouseOrTouch__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_KeyValuePair_int__UICamera_MouseOrTouch__get_Value__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&UICamera_TypeInfo);
    byte_5974F05 = 1;
  }
  v2 = UICamera_TypeInfo;
  v3 = *(&UICamera_TypeInfo->_2.cctor_finished + 1);
  memset(&v19, 0, sizeof(v19));
  if ( !v3 )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v1);
    v2 = UICamera_TypeInfo;
  }
  mTouches = (UICamera_c *)v2->static_fields->mTouches;
  if ( !mTouches )
    goto LABEL_30;
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v18,
    (System_Collections_Generic_Dictionary_int__object__o *)mTouches,
    (const MethodInfo_3F9C8EC *)Method_System_Collections_Generic_Dictionary_int__UICamera_MouseOrTouch__GetEnumerator__);
  v5 = 0;
  v19 = v18;
  v18.fields._dictionary = 0;
  *(_QWORD *)&v18.fields._version = &v19;
  while ( 1 )
  {
    v6 = System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
           &v19,
           (const MethodInfo_4158548 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__UICamera_MouseOrTouch__MoveNext__);
    if ( !v6 )
      break;
    if ( !v19.fields._current.fields.value )
      sub_2213CDC(v6, v7);
    monitor = (UnityEngine_Object_o *)v19.fields._current.fields.value[4].monitor;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
    v5 += UnityEngine_Object__op_Inequality(monitor, 0, 0);
  }
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v19,
    (const MethodInfo_415866C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__UICamera_MouseOrTouch__Dispose__);
  for ( i = 0; ; ++i )
  {
    mTouches = UICamera_TypeInfo;
    if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v1);
      mTouches = UICamera_TypeInfo;
    }
    static_fields = mTouches->static_fields;
    mMouse = static_fields->mMouse;
    if ( !mMouse )
      goto LABEL_30;
    v12 = *(&mTouches->_2.cctor_finished + 1);
    if ( (signed int)i >= SLODWORD(mMouse->max_length) )
      break;
    if ( !v12 )
    {
      j_il2cpp_runtime_class_init_0(mTouches, v1);
      mMouse = UICamera_TypeInfo->static_fields->mMouse;
      if ( !mMouse )
        goto LABEL_30;
    }
    if ( i >= LODWORD(mMouse->max_length) )
      sub_2213CE4(mTouches);
    v13 = mMouse->m_Items[i];
    if ( !v13 )
      goto LABEL_30;
    pressed = (UnityEngine_Object_o *)v13->fields.pressed;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v1);
    v5 += UnityEngine_Object__op_Inequality(pressed, 0, 0);
  }
  if ( !v12 )
  {
    j_il2cpp_runtime_class_init_0(mTouches, v1);
    static_fields = UICamera_TypeInfo->static_fields;
  }
  controller = static_fields->controller;
  if ( !controller )
LABEL_30:
    sub_2213CDC(mTouches, v1);
  v16 = (UnityEngine_Object_o *)controller->fields.pressed;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v1);
  return v5 + UnityEngine_Object__op_Inequality(v16, 0, 0);
}


void UICamera__set_genericEventHandler(UnityEngine_GameObject_o *value, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  UICamera_c *v9; // x0
  struct UICamera_StaticFields *static_fields; // x0

  if ( (byte_5974EFE & 1) == 0 )
  {
    sub_2213A60(&UICamera_TypeInfo);
    byte_5974EFE = 1;
  }
  v9 = UICamera_TypeInfo;
  if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, method);
    v9 = UICamera_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->mGenericHandler = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&static_fields->mGenericHandler,
    (int32_t)value,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void UICamera__set_selectedObject(UnityEngine_GameObject_o *value, const MethodInfo *method)
{
  UICamera_c *v3; // x0
  UnityEngine_Object_o *mCurrentSelection; // x20
  const MethodInfo *v5; // x1
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  void *selectedObject; // x0
  struct UICamera_StaticFields *static_fields; // x8
  struct UICamera_MouseOrTouch_o *currentTouch; // x22
  struct UICamera_MouseOrTouch_array *mMouse; // x9
  struct UICamera_MouseOrTouch_o *v16; // x1
  __int64 v17; // x8
  struct UICamera_BoolDelegate_o *onSelect; // x20
  const MethodInfo *v19; // x0
  __int64 v20; // x8
  UnityEngine_GameObject_o *v21; // x20
  Il2CppObject *v22; // x0
  const MethodInfo *v23; // x3
  MissionNaviTransitionBoardItem_o *p_mCurrentSelection; // x0
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  __int64 v31; // x1
  UnityEngine_Object_o *v32; // x19
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7
  UICamera_c *v39; // x0
  UnityEngine_Object_o *v40; // x19
  bool v41; // w8
  UICamera_c *v42; // x0
  int v43; // w9
  int32_t layer; // w0
  const MethodInfo *v45; // x1
  UICamera_o *CameraForLayer; // x0
  __int64 v47; // x1
  UICamera_o *v48; // x19
  System_String_o *v49; // x2
  System_String_o *v50; // x3
  int32_t v51; // w4
  int32_t v52; // w5
  bool v53; // w6
  bool v54; // w7
  UICamera_c *v55; // x0
  struct UICamera_StaticFields *v56; // x0
  UnityEngine_Camera_o *cachedCamera; // x0
  struct UICamera_StaticFields *v58; // x8
  System_String_o *v59; // x2
  System_String_o *v60; // x3
  int32_t v61; // w4
  int32_t v62; // w5
  bool v63; // w6
  bool v64; // w7
  UICamera_c *v65; // x0
  UICamera_c *v66; // x0
  __int64 v67; // x1
  Il2CppObject *Component_object; // x19
  bool v69; // w19
  UICamera_c *v70; // x0
  struct UICamera_StaticFields *v71; // x8
  struct UICamera_BoolDelegate_o *v72; // x9
  UnityEngine_GameObject_o *v73; // x19
  Il2CppObject *v74; // x0
  const MethodInfo *v75; // x3
  UICamera_c *v76; // x0
  struct UICamera_StaticFields *v77; // x0
  struct UICamera_StaticFields *v78; // x0
  System_String_o *v79; // x2
  System_String_o *v80; // x3
  int32_t v81; // w4
  int32_t v82; // w5
  bool v83; // w6
  bool v84; // w7
  struct UICamera_StaticFields *v85; // x0
  System_String_o *v86; // x2
  System_String_o *v87; // x3
  int32_t v88; // w4
  int32_t v89; // w5
  bool v90; // w6
  bool v91; // w7
  char v92[4]; // [xsp+8h] [xbp-48h] BYREF
  _BYTE v93[4]; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_5974F03 & 1) == 0 )
  {
    sub_2213A60(&Method_BetterList_UICamera__get_Item__);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_UIInput___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&UICamera_TypeInfo);
    sub_2213A60(&StringLiteral_10360/*"OnSelect"*/);
    byte_5974F03 = 1;
  }
  v3 = UICamera_TypeInfo;
  if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, method);
    v3 = UICamera_TypeInfo;
  }
  mCurrentSelection = (UnityEngine_Object_o *)v3->static_fields->mCurrentSelection;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Equality(mCurrentSelection, (UnityEngine_Object_o *)value, 0) )
  {
    selectedObject = UICamera_TypeInfo;
    if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v5);
      selectedObject = UICamera_TypeInfo;
    }
    static_fields = (struct UICamera_StaticFields *)*((_QWORD *)selectedObject + 23);
    currentTouch = static_fields->currentTouch;
    if ( !currentTouch )
    {
      if ( !*((_DWORD *)selectedObject + 57) )
      {
        j_il2cpp_runtime_class_init_0(selectedObject, v5);
        static_fields = UICamera_TypeInfo->static_fields;
      }
      mMouse = static_fields->mMouse;
      static_fields->currentTouchID = -1;
      if ( !mMouse )
        goto LABEL_74;
      if ( !LODWORD(mMouse->max_length) )
        sub_2213CE4(selectedObject);
      v16 = mMouse->m_Items[0];
      static_fields->currentTouch = v16;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&static_fields->currentTouch,
        (int32_t)v16,
        v6,
        v7,
        v8,
        v9,
        v10,
        v11);
      selectedObject = UICamera_TypeInfo;
      UICamera_TypeInfo->static_fields->currentScheme = 0;
    }
    if ( !*((_DWORD *)selectedObject + 57) )
    {
      j_il2cpp_runtime_class_init_0(selectedObject, v5);
      selectedObject = UICamera_TypeInfo;
    }
    v17 = *((_QWORD *)selectedObject + 23);
    onSelect = *(struct UICamera_BoolDelegate_o **)(v17 + 224);
    *(_BYTE *)(v17 + 168) = 0;
    if ( onSelect )
    {
      if ( *((_DWORD *)selectedObject + 57) )
      {
        selectedObject = UICamera__get_selectedObject((const MethodInfo *)selectedObject);
      }
      else
      {
        j_il2cpp_runtime_class_init_0(selectedObject, v5);
        onSelect = UICamera_TypeInfo->static_fields->onSelect;
        selectedObject = UICamera__get_selectedObject(v19);
        if ( !onSelect )
          goto LABEL_74;
      }
      ((void (__fastcall *)(intptr_t, void *, _QWORD, intptr_t))onSelect->fields.invoke_impl)(
        onSelect->fields.method_code,
        selectedObject,
        0,
        onSelect->fields.method);
      selectedObject = UICamera_TypeInfo;
    }
    if ( !*((_DWORD *)selectedObject + 57) )
    {
      j_il2cpp_runtime_class_init_0(selectedObject, v5);
      selectedObject = UICamera_TypeInfo;
    }
    v20 = *((_QWORD *)selectedObject + 23);
    v93[0] = 0;
    v21 = *(UnityEngine_GameObject_o **)(v20 + 312);
    v22 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984328, v93);
    UICamera__Notify(v21, (System_String_o *)StringLiteral_10360/*"OnSelect"*/, v22, v23);
    p_mCurrentSelection = (MissionNaviTransitionBoardItem_o *)&UICamera_TypeInfo->static_fields->mCurrentSelection;
    p_mCurrentSelection->klass = (MissionNaviTransitionBoardItem_c *)value;
    sub_2213A04(p_mCurrentSelection, (int32_t)value, v25, v26, v27, v28, v29, v30);
    v32 = (UnityEngine_Object_o *)UICamera_TypeInfo->static_fields->mCurrentSelection;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v31);
    if ( !UnityEngine_Object__op_Inequality(v32, 0, 0) )
      goto LABEL_69;
    if ( !currentTouch )
    {
      v39 = UICamera_TypeInfo;
      if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v5);
        v39 = UICamera_TypeInfo;
      }
      v40 = (UnityEngine_Object_o *)v39->static_fields->mCurrentSelection;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
      v41 = UnityEngine_Object__op_Inequality(v40, 0, 0);
      v42 = UICamera_TypeInfo;
      v43 = *(&UICamera_TypeInfo->_2.cctor_finished + 1);
      if ( v41 )
      {
        if ( !v43 )
        {
          j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v5);
          v42 = UICamera_TypeInfo;
        }
        selectedObject = v42->static_fields->mCurrentSelection;
        if ( !selectedObject )
          goto LABEL_74;
        layer = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)selectedObject, 0);
        CameraForLayer = UICamera__FindCameraForLayer(layer, v45);
      }
      else
      {
        if ( !v43 )
        {
          j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v5);
          v42 = UICamera_TypeInfo;
        }
        selectedObject = v42->static_fields->list;
        if ( !selectedObject )
          goto LABEL_74;
        CameraForLayer = (UICamera_o *)BetterList_object___get_Item(
                                         (BetterList_T__o *)selectedObject,
                                         0,
                                         (const MethodInfo_3E6F7E8 *)Method_BetterList_UICamera__get_Item__);
      }
      v48 = CameraForLayer;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v47);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v48, 0, 0) )
      {
        v55 = UICamera_TypeInfo;
        if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v5);
          v55 = UICamera_TypeInfo;
        }
        v56 = v55->static_fields;
        v56->current = v48;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)&v56->current, (int32_t)v48, v49, v50, v51, v52, v53, v54);
        if ( !v48 )
          goto LABEL_74;
        cachedCamera = UICamera__get_cachedCamera(v48, v5);
        v58 = UICamera_TypeInfo->static_fields;
        v58->currentCamera = cachedCamera;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&v58->currentCamera,
          (int32_t)cachedCamera,
          v59,
          v60,
          v61,
          v62,
          v63,
          v64);
      }
    }
    v65 = UICamera_TypeInfo;
    if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v5);
      v65 = UICamera_TypeInfo;
    }
    selectedObject = v65->static_fields->mCurrentSelection;
    if ( selectedObject )
    {
      if ( UnityEngine_GameObject__get_activeInHierarchy((UnityEngine_GameObject_o *)selectedObject, 0) )
      {
        v66 = UICamera_TypeInfo;
        if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v5);
          v66 = UICamera_TypeInfo;
        }
        selectedObject = v66->static_fields->mCurrentSelection;
        if ( !selectedObject )
          goto LABEL_74;
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)selectedObject,
                             (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UIInput___);
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v67);
        v69 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
      }
      else
      {
        v69 = 0;
      }
      v70 = UICamera_TypeInfo;
      if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v5);
        v70 = UICamera_TypeInfo;
      }
      v71 = v70->static_fields;
      v72 = v71->onSelect;
      v71->inputHasFocus = v69;
      if ( !v72 )
        goto LABEL_66;
      if ( *(&v70->_2.cctor_finished + 1)
        || (j_il2cpp_runtime_class_init_0(v70, v5), v71 = UICamera_TypeInfo->static_fields, (v72 = v71->onSelect) != 0) )
      {
        ((void (__fastcall *)(intptr_t, struct UnityEngine_GameObject_o *, __int64, intptr_t))v72->fields.invoke_impl)(
          v72->fields.method_code,
          v71->mCurrentSelection,
          1,
          v72->fields.method);
        v70 = UICamera_TypeInfo;
LABEL_66:
        if ( !*(&v70->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(v70, v5);
          v70 = UICamera_TypeInfo;
        }
        v73 = v70->static_fields->mCurrentSelection;
        v92[0] = 1;
        v74 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984328, v92);
        UICamera__Notify(v73, (System_String_o *)StringLiteral_10360/*"OnSelect"*/, v74, v75);
LABEL_69:
        if ( !currentTouch )
        {
          v76 = UICamera_TypeInfo;
          if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v5);
            v76 = UICamera_TypeInfo;
          }
          v77 = v76->static_fields;
          v77->current = 0;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)&v77->current, 0, v33, v34, v35, v36, v37, v38);
          v78 = UICamera_TypeInfo->static_fields;
          v78->currentCamera = 0;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)&v78->currentCamera, 0, v79, v80, v81, v82, v83, v84);
          v85 = UICamera_TypeInfo->static_fields;
          v85->currentTouch = 0;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)&v85->currentTouch, 0, v86, v87, v88, v89, v90, v91);
          UICamera_TypeInfo->static_fields->currentTouchID = -100;
        }
        return;
      }
    }
LABEL_74:
    sub_2213CDC(selectedObject, v5);
  }
}


void UICamera_BoolDelegate___ctor(
        UICamera_BoolDelegate_o *this,
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
  if ( (sub_2213B38(method) & 1) == 0 )
  {
    if ( v12 == 1 )
    {
      v13 = sub_20165A4;
      goto LABEL_6;
    }
    if ( !object )
    {
      v15 = sub_2213CF8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_2213BA0(v15, 0);
    }
LABEL_8:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_9;
  }
  if ( v12 != 2 )
    goto LABEL_8;
  v13 = sub_20165C8;
LABEL_6:
  this->fields.invoke_impl = (intptr_t)v13;
LABEL_9:
  this->fields.extra_arg = (intptr_t)sub_201654C;
}


System_IAsyncResult_o *UICamera_BoolDelegate__BeginInvoke(
        UICamera_BoolDelegate_o *this,
        UnityEngine_GameObject_o *go,
        bool state,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v10[3]; // [xsp+0h] [xbp-40h] BYREF
  bool v11[4]; // [xsp+1Ch] [xbp-24h] BYREF

  v11[0] = state;
  v10[0] = go;
  v10[2] = 0;
  v10[1] = j_il2cpp_value_box_0(qword_5984328, v11);
  return sub_2213A14(this, v10, callback, object);
}


void UICamera_BoolDelegate__EndInvoke(
        UICamera_BoolDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_2213A18(result, 0, method);
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
  if ( (sub_2213B38(method) & 1) == 0 )
  {
    if ( v12 == 1 )
    {
      v13 = sub_2016634;
      goto LABEL_6;
    }
    if ( !object )
    {
      v15 = sub_2213CF8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_2213BA0(v15, 0);
    }
LABEL_8:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_9;
  }
  if ( v12 != 2 )
    goto LABEL_8;
  v13 = sub_2016650;
LABEL_6:
  this->fields.invoke_impl = (intptr_t)v13;
LABEL_9:
  this->fields.extra_arg = (intptr_t)sub_20165DC;
}


System_IAsyncResult_o *UICamera_FloatDelegate__BeginInvoke(
        UICamera_FloatDelegate_o *this,
        UnityEngine_GameObject_o *go,
        float delta,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v10[3]; // [xsp+0h] [xbp-40h] BYREF
  float v11; // [xsp+1Ch] [xbp-24h] BYREF

  v11 = delta;
  v10[0] = go;
  v10[2] = 0;
  v10[1] = j_il2cpp_value_box_0(qword_5984378, &v11);
  return sub_2213A14(this, v10, callback, object);
}


void UICamera_FloatDelegate__EndInvoke(
        UICamera_FloatDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_2213A18(result, 0, method);
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
      v13 = sub_2016374;
LABEL_8:
      this->fields.invoke_impl = (intptr_t)v13;
      goto LABEL_9;
    }
  }
  else
  {
    if ( !v12 )
    {
      v13 = sub_2016358;
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
  this->fields.extra_arg = (intptr_t)sub_2016308;
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
  return sub_2213A14(this, &v6, callback, object);
}


float UICamera_GetAxisFunc__EndInvoke(
        UICamera_GetAxisFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  __int64 v5; // x2

  v3 = sub_2213A18(result, 0, method);
  if ( !v3 )
    sub_2213CDC(0, v4);
  return *(float *)j_il2cpp_object_unbox_0(v3, v4, v5);
}


float UICamera_GetAxisFunc__Invoke(UICamera_GetAxisFunc_o *this, System_String_o *name, const MethodInfo *method)
{
  return ((float (__fastcall *)(intptr_t, System_String_o *, intptr_t))this->fields.invoke_impl)(
           this->fields.method_code,
           name,
           this->fields.method);
}


void UICamera_GetKeyStateFunc___ctor(
        UICamera_GetKeyStateFunc_o *this,
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
  if ( v12 != 1 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_20162D8;
LABEL_6:
  this->fields.extra_arg = (intptr_t)&loc_2016284;
}


System_IAsyncResult_o *UICamera_GetKeyStateFunc__BeginInvoke(
        UICamera_GetKeyStateFunc_o *this,
        int32_t key,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-48h] BYREF
  int32_t v10; // [xsp+1Ch] [xbp-34h] BYREF

  v10 = key;
  if ( (byte_5974F29 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_KeyCode_TypeInfo);
    byte_5974F29 = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(UnityEngine_KeyCode_TypeInfo, &v10);
  return sub_2213A14(this, v9, callback, object);
}


bool UICamera_GetKeyStateFunc__EndInvoke(
        UICamera_GetKeyStateFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  __int64 v5; // x2

  v3 = sub_2213A18(result, 0, method);
  if ( !v3 )
    sub_2213CDC(0, v4);
  return *(_BYTE *)j_il2cpp_object_unbox_0(v3, v4, v5);
}


bool UICamera_GetKeyStateFunc__Invoke(UICamera_GetKeyStateFunc_o *this, int32_t key, const MethodInfo *method)
{
  return ((bool (__fastcall *)(intptr_t, int32_t, intptr_t))this->fields.invoke_impl)(
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
  if ( v12 != 1 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_2016974;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_2016924;
}


System_IAsyncResult_o *UICamera_GetTouchCallback__BeginInvoke(
        UICamera_GetTouchCallback_o *this,
        int32_t index,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-38h] BYREF
  int32_t v10; // [xsp+1Ch] [xbp-24h] BYREF

  v10 = index;
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(qword_5984348, &v10);
  return sub_2213A14(this, v9, callback, object);
}


UICamera_Touch_o *UICamera_GetTouchCallback__EndInvoke(
        UICamera_GetTouchCallback_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  return (UICamera_Touch_o *)sub_2213A18(result, 0, method);
}


UICamera_Touch_o *UICamera_GetTouchCallback__Invoke(
        UICamera_GetTouchCallback_o *this,
        int32_t index,
        const MethodInfo *method)
{
  return ((UICamera_Touch_o *(__fastcall *)(intptr_t, int32_t, intptr_t))this->fields.invoke_impl)(
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
  this->fields.invoke_impl = (intptr_t)sub_2016910;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_20168C8;
}


System_IAsyncResult_o *UICamera_GetTouchCountCallback__BeginInvoke(
        UICamera_GetTouchCountCallback_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  char v5; // [xsp+8h] [xbp-8h] BYREF

  return sub_2213A14(this, &v5, callback, object);
}


int32_t UICamera_GetTouchCountCallback__EndInvoke(
        UICamera_GetTouchCountCallback_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  __int64 v5; // x2

  v3 = sub_2213A18(result, 0, method);
  if ( !v3 )
    sub_2213CDC(0, v4);
  return *(_DWORD *)j_il2cpp_object_unbox_0(v3, v4, v5);
}


int32_t UICamera_GetTouchCountCallback__Invoke(UICamera_GetTouchCountCallback_o *this, const MethodInfo *method)
{
  return ((int32_t (__fastcall *)(intptr_t, intptr_t))this->fields.invoke_impl)(
           this->fields.method_code,
           this->fields.method);
}


void UICamera_KeyCodeDelegate___ctor(
        UICamera_KeyCodeDelegate_o *this,
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
  if ( (sub_2213B38(method) & 1) == 0 )
  {
    if ( v12 == 1 )
    {
      v13 = sub_20167D0;
      goto LABEL_6;
    }
    if ( !object )
    {
      v15 = sub_2213CF8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_2213BA0(v15, 0);
    }
LABEL_8:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_9;
  }
  if ( v12 != 2 )
    goto LABEL_8;
  v13 = sub_20167F0;
LABEL_6:
  this->fields.invoke_impl = (intptr_t)v13;
LABEL_9:
  this->fields.extra_arg = (intptr_t)sub_2016778;
}


System_IAsyncResult_o *UICamera_KeyCodeDelegate__BeginInvoke(
        UICamera_KeyCodeDelegate_o *this,
        UnityEngine_GameObject_o *go,
        int32_t key,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v11[3]; // [xsp+8h] [xbp-58h] BYREF
  int32_t v12; // [xsp+2Ch] [xbp-34h] BYREF

  v12 = key;
  if ( (byte_5974F2C & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_KeyCode_TypeInfo);
    byte_5974F2C = 1;
  }
  v11[2] = 0;
  v11[0] = go;
  v11[1] = j_il2cpp_value_box_0(UnityEngine_KeyCode_TypeInfo, &v12);
  return sub_2213A14(this, v11, callback, object);
}


void UICamera_KeyCodeDelegate__EndInvoke(
        UICamera_KeyCodeDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_2213A18(result, 0, method);
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
  __int64 v4; // x1
  UnityEngine_Object_o *v5; // x20
  UICamera_c *v6; // x0
  UnityEngine_Object_o *fallThrough; // x21
  __int64 v8; // x1
  UnityEngine_GameObject_o *v9; // x19
  __int64 v10; // x1
  Il2CppObject *v11; // x19

  if ( (byte_5974F28 & 1) == 0 )
  {
    sub_2213A60(&Method_NGUITools_FindInParents_UIRoot___);
    sub_2213A60(&NGUITools_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&UICamera_TypeInfo);
    byte_5974F28 = 1;
  }
  current = (UnityEngine_Object_o *)this->fields.current;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Inequality(current, 0, 0) )
    return 0;
  v5 = (UnityEngine_Object_o *)this->fields.current;
  v6 = UICamera_TypeInfo;
  if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v4);
    v6 = UICamera_TypeInfo;
  }
  fallThrough = (UnityEngine_Object_o *)v6->static_fields->fallThrough;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
  if ( !UnityEngine_Object__op_Inequality(v5, fallThrough, 0) )
    return 0;
  v9 = this->fields.current;
  if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v8);
  v11 = NGUITools__FindInParents_object_(v9, (const MethodInfo_38F0B48 *)Method_NGUITools_FindInParents_UIRoot___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
  return UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v11, 0, 0);
}


void UICamera_MoveDelegate___ctor(
        UICamera_MoveDelegate_o *this,
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
  if ( v12 != 1 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_20164C4;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_201646C;
}


System_IAsyncResult_o *UICamera_MoveDelegate__BeginInvoke(
        UICamera_MoveDelegate_o *this,
        UnityEngine_Vector2_o delta,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-48h] BYREF
  UnityEngine_Vector2_o v10; // [xsp+18h] [xbp-38h] BYREF

  v10 = delta;
  if ( (byte_5974F2A & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Vector2_TypeInfo);
    byte_5974F2A = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(UnityEngine_Vector2_TypeInfo, &v10);
  return sub_2213A14(this, v9, callback, object);
}


void UICamera_MoveDelegate__EndInvoke(
        UICamera_MoveDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_2213A18(result, 0, method);
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
  if ( (sub_2213B38(method) & 1) == 0 )
  {
    if ( v12 == 1 )
    {
      v13 = sub_2016744;
      goto LABEL_6;
    }
    if ( !object )
    {
      v15 = sub_2213CF8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_2213BA0(v15, 0);
    }
LABEL_8:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_9;
  }
  if ( v12 != 2 )
    goto LABEL_8;
  v13 = sub_2016764;
LABEL_6:
  this->fields.invoke_impl = (intptr_t)v13;
LABEL_9:
  this->fields.extra_arg = (intptr_t)sub_20166EC;
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
  return sub_2213A14(this, v7, callback, object);
}


void UICamera_ObjectDelegate__EndInvoke(
        UICamera_ObjectDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_2213A18(result, 0, method);
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
  this->fields.invoke_impl = (intptr_t)sub_2016458;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_2016418;
}


System_IAsyncResult_o *UICamera_OnCustomInput__BeginInvoke(
        UICamera_OnCustomInput_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  char v5; // [xsp+8h] [xbp-8h] BYREF

  return sub_2213A14(this, &v5, callback, object);
}


void UICamera_OnCustomInput__EndInvoke(
        UICamera_OnCustomInput_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_2213A18(result, 0, method);
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
  this->fields.invoke_impl = (intptr_t)sub_2016404;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_20163C4;
}


System_IAsyncResult_o *UICamera_OnScreenResize__BeginInvoke(
        UICamera_OnScreenResize_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  char v5; // [xsp+8h] [xbp-8h] BYREF

  return sub_2213A14(this, &v5, callback, object);
}


void UICamera_OnScreenResize__EndInvoke(
        UICamera_OnScreenResize_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_2213A18(result, 0, method);
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
  if ( (sub_2213B38(method) & 1) == 0 )
  {
    if ( v12 == 1 )
    {
      v13 = sub_20166C0;
      goto LABEL_6;
    }
    if ( !object )
    {
      v15 = sub_2213CF8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_2213BA0(v15, 0);
    }
LABEL_8:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_9;
  }
  if ( v12 != 2 )
    goto LABEL_8;
  v13 = sub_20166DC;
LABEL_6:
  this->fields.invoke_impl = (intptr_t)v13;
LABEL_9:
  this->fields.extra_arg = (intptr_t)sub_2016660;
}


System_IAsyncResult_o *UICamera_VectorDelegate__BeginInvoke(
        UICamera_VectorDelegate_o *this,
        UnityEngine_GameObject_o *go,
        UnityEngine_Vector2_o delta,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v11[3]; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector2_o v12; // [xsp+28h] [xbp-38h] BYREF

  v12 = delta;
  if ( (byte_5974F2B & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Vector2_TypeInfo);
    byte_5974F2B = 1;
  }
  v11[2] = 0;
  v11[0] = go;
  v11[1] = j_il2cpp_value_box_0(UnityEngine_Vector2_TypeInfo, &v12);
  return sub_2213A14(this, v11, callback, object);
}


void UICamera_VectorDelegate__EndInvoke(
        UICamera_VectorDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_2213A18(result, 0, method);
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
      v13 = sub_201653C;
LABEL_8:
      this->fields.invoke_impl = (intptr_t)v13;
      goto LABEL_9;
    }
  }
  else
  {
    if ( !v12 )
    {
      v13 = sub_2016520;
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
  this->fields.extra_arg = (intptr_t)sub_20164D8;
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
  return sub_2213A14(this, &v6, callback, object);
}


void UICamera_VoidDelegate__EndInvoke(
        UICamera_VoidDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_2213A18(result, 0, method);
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
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5974F2F & 1) == 0 )
  {
    sub_2213A60(&UICamera___c_TypeInfo);
    byte_5974F2F = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(UICamera___c_TypeInfo);
  System_Object___ctor(v1, 0);
  UICamera___c_TypeInfo->static_fields->__9 = (struct UICamera___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)UICamera___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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
  return System_Int32__CompareTo_77138392((int32_t)r2, r1->fields.depth, 0);
}


int32_t UICamera___c___Raycast_b__125_1(
        UICamera___c_o *this,
        UICamera_DepthEntry_o *r1,
        UICamera_DepthEntry_o *r2,
        const MethodInfo *method)
{
  return System_Int32__CompareTo_77138392((int32_t)r2, r1->fields.depth, 0);
}