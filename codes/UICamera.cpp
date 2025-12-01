void UICamera___cctor(const MethodInfo *method)
{
  BetterList_T__o *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  UICamera_GetKeyStateFunc_o *v8; // x19
  const MethodInfo *v9; // x3
  struct UICamera_StaticFields *static_fields; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  UICamera_GetKeyStateFunc_o *v17; // x19
  const MethodInfo *v18; // x3
  struct UICamera_StaticFields *v19; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  UICamera_GetKeyStateFunc_o *v26; // x19
  const MethodInfo *v27; // x3
  struct UICamera_StaticFields *v28; // x0
  int32_t v29; // w2
  int32_t v30; // w3
  System_String_o *v31; // x4
  int32_t v32; // w5
  int64_t v33; // x6
  System_String_o *v34; // x7
  UICamera_GetAxisFunc_o *v35; // x19
  const MethodInfo *v36; // x3
  struct UICamera_StaticFields *v37; // x0
  int32_t v38; // w2
  int32_t v39; // w3
  System_String_o *v40; // x4
  int32_t v41; // w5
  int64_t v42; // x6
  System_String_o *v43; // x7
  int32_t v44; // w2
  int32_t v45; // w3
  System_String_o *v46; // x4
  int32_t v47; // w5
  int64_t v48; // x6
  System_String_o *v49; // x7
  UICamera_c *v50; // x8
  struct UICamera_StaticFields *v51; // x9
  struct UICamera_StaticFields *v52; // x10
  struct UnityEngine_Vector3_StaticFields *v53; // x9
  float z; // s1
  struct UICamera_StaticFields *v55; // x0
  struct UICamera_StaticFields *v56; // x0
  int32_t v57; // w2
  int32_t v58; // w3
  System_String_o *v59; // x4
  int32_t v60; // w5
  int64_t v61; // x6
  System_String_o *v62; // x7
  GrandQuestFolderBoardItem_o *v63; // x0
  int32_t v64; // w2
  int32_t v65; // w3
  System_String_o *v66; // x4
  int32_t v67; // w5
  int64_t v68; // x6
  System_String_o *v69; // x7
  struct UICamera_StaticFields *v70; // x8
  int32_t v71; // w2
  int32_t v72; // w3
  System_String_o *v73; // x4
  int32_t v74; // w5
  int64_t v75; // x6
  System_String_o *v76; // x7
  __int64 v77; // x19
  __int64 v78; // x20
  __int64 v79; // x0
  __int64 v80; // x1
  __int64 v81; // x0
  int32_t v82; // w2
  int32_t v83; // w3
  System_String_o *v84; // x4
  int32_t v85; // w5
  int64_t v86; // x6
  System_String_o *v87; // x7
  __int64 v88; // x20
  int32_t v89; // w2
  int32_t v90; // w3
  System_String_o *v91; // x4
  int32_t v92; // w5
  int64_t v93; // x6
  System_String_o *v94; // x7
  __int64 v95; // x20
  int32_t v96; // w2
  int32_t v97; // w3
  System_String_o *v98; // x4
  int32_t v99; // w5
  int64_t v100; // x6
  System_String_o *v101; // x7
  GrandQuestFolderBoardItem_o *p_mMouse; // x0
  int32_t v103; // w2
  int32_t v104; // w3
  System_String_o *v105; // x4
  int32_t v106; // w5
  int64_t v107; // x6
  System_String_o *v108; // x7
  __int64 v109; // x19
  GrandQuestFolderBoardItem_o *p_controller; // x0
  int32_t v111; // w2
  int32_t v112; // w3
  System_String_o *v113; // x4
  int32_t v114; // w5
  int64_t v115; // x6
  System_String_o *v116; // x7
  System_Collections_Generic_Dictionary_int__object__o *v117; // x19
  GrandQuestFolderBoardItem_o *p_mTouches; // x0
  int32_t v119; // w2
  int32_t v120; // w3
  System_String_o *v121; // x4
  int32_t v122; // w5
  int64_t v123; // x6
  System_String_o *v124; // x7
  struct UICamera_StaticFields *v125; // x8
  BetterList_UICamera_DepthEntry__o *v126; // x19
  GrandQuestFolderBoardItem_o *p_mHits; // x0
  int32_t v128; // w2
  int32_t v129; // w3
  System_String_o *v130; // x4
  int32_t v131; // w5
  int64_t v132; // x6
  System_String_o *v133; // x7
  int32x2_t v134; // d1
  struct UnityEngine_Vector3_StaticFields *v135; // x8
  float32x2_t v136; // d9
  float v137; // s8
  unsigned __int64 v138; // d0
  float v139; // s1
  struct UnityEngine_Vector3_StaticFields *v140; // x8
  UICamera_c *v141; // x8
  struct UICamera_StaticFields *v142; // x9
  struct UICamera_StaticFields *v143; // x8
  __int64 v144; // x0

  if ( (byte_4CCBA15 & 1) == 0 )
  {
    sub_1C713B0(&Method_BetterList_UICamera___ctor__);
    sub_1C713B0(&Method_BetterList_UICamera_DepthEntry___ctor__);
    sub_1C713B0(&BetterList_UICamera__TypeInfo);
    sub_1C713B0(&BetterList_UICamera_DepthEntry__TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_int__UICamera_MouseOrTouch___ctor__);
    sub_1C713B0(&System_Collections_Generic_Dictionary_int__UICamera_MouseOrTouch__TypeInfo);
    sub_1C713B0(&UICamera_GetAxisFunc_TypeInfo);
    sub_1C713B0(&UICamera_GetKeyStateFunc_TypeInfo);
    sub_1C713B0(&Method_UnityEngine_Input_GetAxis__);
    sub_1C713B0(&Method_UnityEngine_Input_GetKeyDown__);
    sub_1C713B0(&Method_UnityEngine_Input_GetKeyUp__);
    sub_1C713B0(&Method_UnityEngine_Input_GetKey__);
    sub_1C713B0(&UICamera_MouseOrTouch___TypeInfo);
    sub_1C713B0(&UICamera_MouseOrTouch_TypeInfo);
    sub_1C713B0(&UICamera_TypeInfo);
    byte_4CCBA15 = 1;
  }
  v1 = (BetterList_T__o *)sub_1C715FC(BetterList_UICamera__TypeInfo);
  BetterList_object____ctor(v1, (const MethodInfo_3381E0C *)Method_BetterList_UICamera___ctor__);
  UICamera_TypeInfo->static_fields->list = (struct BetterList_UICamera__o *)v1;
  sub_1C71354((GrandQuestFolderBoardItem_o *)UICamera_TypeInfo->static_fields, (int32_t)v1, v2, v3, v4, v5, v6, v7);
  v8 = (UICamera_GetKeyStateFunc_o *)sub_1C715FC(UICamera_GetKeyStateFunc_TypeInfo);
  UICamera_GetKeyStateFunc___ctor(v8, 0, Method_UnityEngine_Input_GetKeyDown__, v9);
  static_fields = UICamera_TypeInfo->static_fields;
  static_fields->GetKeyDown = v8;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&static_fields->GetKeyDown, (int32_t)v8, v11, v12, v13, v14, v15, v16);
  v17 = (UICamera_GetKeyStateFunc_o *)sub_1C715FC(UICamera_GetKeyStateFunc_TypeInfo);
  UICamera_GetKeyStateFunc___ctor(v17, 0, Method_UnityEngine_Input_GetKeyUp__, v18);
  v19 = UICamera_TypeInfo->static_fields;
  v19->GetKeyUp = v17;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v19->GetKeyUp, (int32_t)v17, v20, v21, v22, v23, v24, v25);
  v26 = (UICamera_GetKeyStateFunc_o *)sub_1C715FC(UICamera_GetKeyStateFunc_TypeInfo);
  UICamera_GetKeyStateFunc___ctor(v26, 0, Method_UnityEngine_Input_GetKey__, v27);
  v28 = UICamera_TypeInfo->static_fields;
  v28->GetKey = v26;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v28->GetKey, (int32_t)v26, v29, v30, v31, v32, v33, v34);
  v35 = (UICamera_GetAxisFunc_o *)sub_1C715FC(UICamera_GetAxisFunc_TypeInfo);
  UICamera_GetAxisFunc___ctor(v35, 0, Method_UnityEngine_Input_GetAxis__, v36);
  v37 = UICamera_TypeInfo->static_fields;
  v37->GetAxis = v35;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v37->GetAxis, (int32_t)v35, v38, v39, v40, v41, v42, v43);
  v50 = UICamera_TypeInfo;
  v51 = UICamera_TypeInfo->static_fields;
  v51->showTooltips = 1;
  if ( !byte_4CC0BE9 )
  {
    sub_1C713B0(&UnityEngine_Vector2_TypeInfo);
    v50 = UICamera_TypeInfo;
    byte_4CC0BE9 = 1;
    v51 = UICamera_TypeInfo->static_fields;
  }
  v51->lastTouchPosition = UnityEngine_Vector2_TypeInfo->static_fields->zeroVector;
  if ( !byte_4CC0D09 )
  {
    sub_1C713B0(&UnityEngine_Vector3_TypeInfo);
    v50 = UICamera_TypeInfo;
    byte_4CC0D09 = 1;
  }
  v52 = v50->static_fields;
  v53 = UnityEngine_Vector3_TypeInfo->static_fields;
  z = v53->zeroVector.fields.z;
  *(_QWORD *)&v52->lastWorldPosition.fields.x = *(_QWORD *)&v53->zeroVector.fields.x;
  v52->lastWorldPosition.fields.z = z;
  v55 = v50->static_fields;
  v55->current = 0;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v55->current, 0, v44, v45, v46, v47, v48, v49);
  v56 = UICamera_TypeInfo->static_fields;
  v56->currentCamera = 0;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v56->currentCamera, 0, v57, v58, v59, v60, v61, v62);
  v63 = (GrandQuestFolderBoardItem_o *)UICamera_TypeInfo->static_fields;
  v63[1].klass = 0;
  ++v63;
  v63[-1].fields._ListCreatedTime_k__BackingField = 0xFFFFFF9C00000000LL;
  LODWORD(v63[-1].fields._ClosedMessage_k__BackingField) = 0;
  sub_1C71354(v63, 0, v64, v65, v66, v67, v68, v69);
  v70 = UICamera_TypeInfo->static_fields;
  v70->inputHasFocus = 0;
  v70->mCurrentSelection = 0;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v70->mCurrentSelection, 0, v71, v72, v73, v74, v75, v76);
  v77 = sub_1C71458(UICamera_MouseOrTouch___TypeInfo, 3);
  v78 = sub_1C715FC(UICamera_MouseOrTouch_TypeInfo);
  *(_DWORD *)(v78 + 96) = 1;
  *(_BYTE *)(v78 + 100) = 1;
  System_Object___ctor((Il2CppObject *)v78, 0);
  if ( !v77 )
    sub_1C71608(v79, v80);
  v81 = sub_1C714EC(v78, *(_QWORD *)(*(_QWORD *)v77 + 64LL));
  if ( !v81 )
    goto LABEL_26;
  if ( !*(_DWORD *)(v77 + 24) )
    goto LABEL_27;
  *(_QWORD *)(v77 + 32) = v78;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v77 + 32), v78, v82, v83, v84, v85, v86, v87);
  v88 = sub_1C715FC(UICamera_MouseOrTouch_TypeInfo);
  *(_DWORD *)(v88 + 96) = 1;
  *(_BYTE *)(v88 + 100) = 1;
  System_Object___ctor((Il2CppObject *)v88, 0);
  v81 = sub_1C714EC(v88, *(_QWORD *)(*(_QWORD *)v77 + 64LL));
  if ( !v81 )
    goto LABEL_26;
  if ( *(_DWORD *)(v77 + 24) <= 1u )
    goto LABEL_27;
  *(_QWORD *)(v77 + 40) = v88;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v77 + 40), v88, v89, v90, v91, v92, v93, v94);
  v95 = sub_1C715FC(UICamera_MouseOrTouch_TypeInfo);
  *(_DWORD *)(v95 + 96) = 1;
  *(_BYTE *)(v95 + 100) = 1;
  System_Object___ctor((Il2CppObject *)v95, 0);
  v81 = sub_1C714EC(v95, *(_QWORD *)(*(_QWORD *)v77 + 64LL));
  if ( !v81 )
  {
LABEL_26:
    v144 = sub_1C7162C(v81);
    sub_1C714D8(v144, 0);
  }
  if ( *(_DWORD *)(v77 + 24) <= 2u )
LABEL_27:
    sub_1C71610(v81);
  *(_QWORD *)(v77 + 48) = v95;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v77 + 48), v95, v96, v97, v98, v99, v100, v101);
  p_mMouse = (GrandQuestFolderBoardItem_o *)&UICamera_TypeInfo->static_fields->mMouse;
  p_mMouse->klass = (GrandQuestFolderBoardItem_c *)v77;
  sub_1C71354(p_mMouse, v77, v103, v104, v105, v106, v107, v108);
  v109 = sub_1C715FC(UICamera_MouseOrTouch_TypeInfo);
  *(_DWORD *)(v109 + 96) = 1;
  *(_BYTE *)(v109 + 100) = 1;
  System_Object___ctor((Il2CppObject *)v109, 0);
  p_controller = (GrandQuestFolderBoardItem_o *)&UICamera_TypeInfo->static_fields->controller;
  p_controller->klass = (GrandQuestFolderBoardItem_c *)v109;
  sub_1C71354(p_controller, v109, v111, v112, v113, v114, v115, v116);
  UICamera_TypeInfo->static_fields->mNextEvent = 0.0;
  v117 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C715FC(System_Collections_Generic_Dictionary_int__UICamera_MouseOrTouch__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v117,
    (const MethodInfo_34618C0 *)Method_System_Collections_Generic_Dictionary_int__UICamera_MouseOrTouch___ctor__);
  p_mTouches = (GrandQuestFolderBoardItem_o *)&UICamera_TypeInfo->static_fields->mTouches;
  p_mTouches->klass = (GrandQuestFolderBoardItem_c *)v117;
  sub_1C71354(p_mTouches, (int32_t)v117, v119, v120, v121, v122, v123, v124);
  v125 = UICamera_TypeInfo->static_fields;
  v125->mHit.fields.go = 0;
  *(_OWORD *)&v125->mHit.fields.hit.fields.m_Distance = 0u;
  *(_OWORD *)&v125->mHit.fields.point.fields.x = 0u;
  *(_OWORD *)&v125->mHit.fields.depth = 0u;
  *(_OWORD *)&v125->mHit.fields.hit.fields.m_Normal.fields.x = 0u;
  *(_QWORD *)&v125->mWidth = 0;
  v125->isDragging = 0;
  v126 = (BetterList_UICamera_DepthEntry__o *)sub_1C715FC(BetterList_UICamera_DepthEntry__TypeInfo);
  BetterList_UICamera_DepthEntry____ctor(
    v126,
    (const MethodInfo_3387C38 *)Method_BetterList_UICamera_DepthEntry___ctor__);
  p_mHits = (GrandQuestFolderBoardItem_o *)&UICamera_TypeInfo->static_fields->mHits;
  p_mHits->klass = (GrandQuestFolderBoardItem_c *)v126;
  sub_1C71354(p_mHits, (int32_t)v126, v128, v129, v130, v131, v132, v133);
  if ( !byte_4CC3BD7 )
  {
    sub_1C713B0(&UnityEngine_Vector3_TypeInfo);
    byte_4CC3BD7 = 1;
  }
  v135 = UnityEngine_Vector3_TypeInfo->static_fields;
  v136.n64_u64[0] = *(unsigned __int64 *)&v135->backVector.fields.x;
  v137 = v135->backVector.fields.z;
  if ( !byte_4CC0D0C )
  {
    sub_1C713B0(&System_Math_TypeInfo);
    byte_4CC0D0C = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v134.n64_f32[0] = sqrtf((float)(v137 * v137) + vaddv_f32(vmul_f32(v136, v136)));
  if ( v134.n64_f32[0] <= 0.00001 )
  {
    if ( !byte_4CC0D09 )
    {
      sub_1C713B0(&UnityEngine_Vector3_TypeInfo);
      byte_4CC0D09 = 1;
    }
    v140 = UnityEngine_Vector3_TypeInfo->static_fields;
    v138 = *(_QWORD *)&v140->zeroVector.fields.x;
    v139 = v140->zeroVector.fields.z;
  }
  else
  {
    v138 = vdiv_f32(v136, vdup_lane_s32(v134, 0)).n64_u64[0];
    v139 = v137 / v134.n64_f32[0];
  }
  v141 = UICamera_TypeInfo;
  v142 = UICamera_TypeInfo->static_fields;
  *(_QWORD *)&v142->m2DPlane.fields.m_Normal.fields.x = v138;
  v142->m2DPlane.fields.m_Normal.fields.z = v139;
  v142->m2DPlane.fields.m_Distance = 0.0;
  v143 = v141->static_fields;
  v143->mNotifying = 0;
  v143->mUsingTouchEvents = 1;
}


void UICamera___ctor(UICamera_o *this, const MethodInfo *method)
{
  int32_t v3; // w1
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  int32_t v10; // w1
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  int32_t v17; // w1
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7

  if ( (byte_4CCBA14 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_15325/*"Vertical"*/);
    sub_1C713B0(&StringLiteral_7344/*"Horizontal"*/);
    sub_1C713B0(&StringLiteral_9168/*"Mouse ScrollWheel"*/);
    byte_4CCBA14 = 1;
  }
  this->fields.eventType = 1;
  this->fields.eventReceiverMask = UnityEngine_LayerMask__op_Implicit_71706896(-1, 0);
  *(_DWORD *)&this->fields.useMouse = 16843009;
  *(_WORD *)&this->fields.useController = 257;
  *(_OWORD *)&this->fields.tooltipDelay = xmmword_CEF230;
  *(_QWORD *)&this->fields.touchClickThreshold = 0xBF80000042200000LL;
  v3 = StringLiteral_9168/*"Mouse ScrollWheel"*/;
  this->fields.scrollAxisName = (struct System_String_o *)StringLiteral_9168/*"Mouse ScrollWheel"*/;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.scrollAxisName, v3, v4, v5, v6, v7, v8, v9);
  v10 = StringLiteral_15325/*"Vertical"*/;
  this->fields.verticalAxisName = (struct System_String_o *)StringLiteral_15325/*"Vertical"*/;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.verticalAxisName, v10, v11, v12, v13, v14, v15, v16);
  v17 = StringLiteral_7344/*"Horizontal"*/;
  this->fields.horizontalAxisName = (struct System_String_o *)StringLiteral_7344/*"Horizontal"*/;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.horizontalAxisName, v17, v18, v19, v20, v21, v22, v23);
  this->fields.commandClick = 1;
  *(_OWORD *)&this->fields.submitKey0 = xmmword_CEF240;
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

  if ( (byte_4CCBA05 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Application_TypeInfo);
    sub_1C713B0(&UICamera_TypeInfo);
    byte_4CCBA05 = 1;
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
    sub_1C71610(v7);
  v19 = (struct UnityEngine_Vector2_o *)v12->m_Items[0];
  if ( !v19 )
LABEL_33:
    sub_1C71608(v7, v6);
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
    sub_1C71608(a, b);
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

  if ( (byte_4CCBA0A & 1) == 0 )
  {
    sub_1C713B0(&UICamera_TypeInfo);
    sub_1C713B0(&UIRoot_TypeInfo);
    sub_1C713B0(&StringLiteral_15183/*"UpdateAnchors"*/);
    byte_4CCBA0A = 1;
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
      UIRoot__Broadcast((System_String_o *)StringLiteral_15183/*"UpdateAnchors"*/, 0);
      onScreenResize = UICamera_TypeInfo->static_fields->onScreenResize;
      if ( onScreenResize )
      {
        if ( !UICamera_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
          onScreenResize = UICamera_TypeInfo->static_fields->onScreenResize;
          if ( !onScreenResize )
            sub_1C71608(v9, v10);
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
  int32_t v4; // w3
  System_String_o *v5; // x4
  int32_t v6; // w5
  int64_t v7; // x6
  System_String_o *v8; // x7
  UICamera_c *v9; // x0
  struct UICamera_StaticFields *static_fields; // x0
  const MethodInfo *v11; // x1
  UICamera_c *v12; // x0
  struct UICamera_OnCustomInput_o *onCustomInput; // x8
  void *v14; // x0
  const MethodInfo *v15; // x1
  UICamera_c *v16; // x0
  UnityEngine_Object_o *mCurrentSelection; // x20
  __int64 v18; // x8
  UICamera_c *v19; // x0
  struct UICamera_StaticFields *v20; // x8
  int32_t cancelKey0; // w9
  __int64 v22; // x8
  UICamera_c *v23; // x0
  UICamera_c *v24; // x0
  UnityEngine_Object_o *v25; // x20
  bool v26; // w0
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x4
  int32_t v30; // w5
  int64_t v31; // x6
  System_String_o *v32; // x7
  UICamera_c *v33; // x8
  bool v34; // w20
  struct UICamera_StaticFields *v35; // x8
  UnityEngine_Object_o *v36; // x20
  UICamera_c *v37; // x0
  UICamera_c *v38; // x0
  struct UICamera_StaticFields *v39; // x8
  UICamera_c *v40; // x0
  UnityEngine_Object_o *v41; // x20
  const MethodInfo *v42; // x1
  UICamera_c *v43; // x0
  UnityEngine_Object_o *mHover; // x20
  __int64 v45; // x8
  long double v46; // q0
  UICamera_c *v47; // x0
  long double v48; // q8
  struct UICamera_StaticFields *v49; // x9
  struct UICamera_FloatDelegate_o *onScroll; // x8
  UnityEngine_GameObject_o *v51; // x20
  Il2CppObject *v52; // x0
  const MethodInfo *v53; // x3
  UICamera_c *v54; // x0
  float mTooltipTime; // s8
  __int64 v56; // x8
  __int64 v57; // x8
  UICamera_c *v58; // x0
  struct UnityEngine_GameObject_o *v59; // x1
  int32_t v60; // w2
  int32_t v61; // w3
  System_String_o *v62; // x4
  int32_t v63; // w5
  int64_t v64; // x6
  System_String_o *v65; // x7
  __int64 v66; // x8
  __int64 v67; // x1
  const MethodInfo *v68; // x2
  UICamera_c *v69; // x0
  struct UICamera_StaticFields *v70; // x0
  int v71; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4CCBA09 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&float_TypeInfo);
    sub_1C713B0(&UICamera_TypeInfo);
    sub_1C713B0(&StringLiteral_9954/*"OnScroll"*/);
    byte_4CCBA09 = 1;
  }
  if ( UICamera__get_handlesEvents(this, method) )
  {
    v9 = UICamera_TypeInfo;
    if ( !UICamera_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
      v9 = UICamera_TypeInfo;
    }
    static_fields = v9->static_fields;
    static_fields->current = this;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&static_fields->current, (int32_t)this, v3, v4, v5, v6, v7, v8);
    if ( this->fields.useTouch )
    {
      UICamera__ProcessTouches(this, v11);
    }
    else if ( this->fields.useMouse )
    {
      UICamera__ProcessMouse(this, v11);
    }
    v12 = UICamera_TypeInfo;
    if ( !UICamera_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
      v12 = UICamera_TypeInfo;
    }
    onCustomInput = v12->static_fields->onCustomInput;
    if ( onCustomInput )
    {
      if ( !v12->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v12);
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
      v16 = UICamera_TypeInfo;
      if ( !UICamera_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
        v16 = UICamera_TypeInfo;
      }
      mCurrentSelection = (UnityEngine_Object_o *)v16->static_fields->mCurrentSelection;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(mCurrentSelection, 0, 0) )
      {
        if ( !this->fields.cancelKey0 )
          goto LABEL_34;
        v14 = UICamera_TypeInfo;
        if ( !UICamera_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
          v14 = UICamera_TypeInfo;
        }
        v18 = *(_QWORD *)(*((_QWORD *)v14 + 23) + 8LL);
        if ( !v18 )
          goto LABEL_107;
        if ( ((*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(v18 + 24))(
                *(_QWORD *)(v18 + 64),
                (unsigned int)this->fields.cancelKey0,
                *(_QWORD *)(v18 + 40))
            & 1) != 0 )
        {
          v19 = UICamera_TypeInfo;
          if ( !UICamera_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
            v19 = UICamera_TypeInfo;
          }
          v20 = v19->static_fields;
          v20->currentScheme = 2;
          cancelKey0 = this->fields.cancelKey0;
        }
        else
        {
LABEL_34:
          if ( !this->fields.cancelKey1 )
            goto LABEL_39;
          v14 = UICamera_TypeInfo;
          if ( !UICamera_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
            v14 = UICamera_TypeInfo;
          }
          v22 = *(_QWORD *)(*((_QWORD *)v14 + 23) + 8LL);
          if ( !v22 )
            goto LABEL_107;
          if ( ((*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(v22 + 24))(
                  *(_QWORD *)(v22 + 64),
                  (unsigned int)this->fields.cancelKey1,
                  *(_QWORD *)(v22 + 40))
              & 1) == 0 )
            goto LABEL_39;
          v23 = UICamera_TypeInfo;
          if ( !UICamera_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
            v23 = UICamera_TypeInfo;
          }
          v20 = v23->static_fields;
          v20->currentScheme = 2;
          cancelKey0 = this->fields.cancelKey1;
        }
        v20->currentKey = cancelKey0;
        UICamera__set_selectedObject(0, v15);
      }
    }
LABEL_39:
    v24 = UICamera_TypeInfo;
    if ( !UICamera_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
      v24 = UICamera_TypeInfo;
    }
    v25 = (UnityEngine_Object_o *)v24->static_fields->mCurrentSelection;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v26 = UnityEngine_Object__op_Equality(v25, 0, 0);
    v33 = UICamera_TypeInfo;
    v34 = v26;
    if ( !UICamera_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
      v33 = UICamera_TypeInfo;
    }
    v35 = v33->static_fields;
    if ( v34 )
    {
      v35->inputHasFocus = 0;
    }
    else
    {
      v36 = (UnityEngine_Object_o *)v35->mCurrentSelection;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Implicit(v36, 0) )
        goto LABEL_54;
      v37 = UICamera_TypeInfo;
      if ( !UICamera_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
        v37 = UICamera_TypeInfo;
      }
      v14 = v37->static_fields->mCurrentSelection;
      if ( !v14 )
        goto LABEL_107;
      if ( !UnityEngine_GameObject__get_activeInHierarchy((UnityEngine_GameObject_o *)v14, 0) )
      {
LABEL_54:
        v38 = UICamera_TypeInfo;
        if ( !UICamera_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
          v38 = UICamera_TypeInfo;
        }
        v39 = v38->static_fields;
        v39->inputHasFocus = 0;
        v39->mCurrentSelection = 0;
        sub_1C71354((GrandQuestFolderBoardItem_o *)&v39->mCurrentSelection, 0, v27, v28, v29, v30, v31, v32);
      }
    }
    if ( this->fields.useKeyboard || this->fields.useController )
    {
      v40 = UICamera_TypeInfo;
      if ( !UICamera_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
        v40 = UICamera_TypeInfo;
      }
      v41 = (UnityEngine_Object_o *)v40->static_fields->mCurrentSelection;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v41, 0, 0) )
        UICamera__ProcessOthers(this, v42);
    }
    if ( !this->fields.useMouse )
      goto LABEL_103;
    v43 = UICamera_TypeInfo;
    if ( !UICamera_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
      v43 = UICamera_TypeInfo;
    }
    mHover = (UnityEngine_Object_o *)v43->static_fields->mHover;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(mHover, 0, 0) )
      goto LABEL_103;
    if ( !System_String__IsNullOrEmpty(this->fields.scrollAxisName, 0) )
    {
      v14 = UICamera_TypeInfo;
      if ( !UICamera_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
        v14 = UICamera_TypeInfo;
      }
      v45 = *(_QWORD *)(*((_QWORD *)v14 + 23) + 32LL);
      if ( !v45 )
        goto LABEL_107;
      *(float *)&v46 = (*(float (__fastcall **)(_QWORD, struct System_String_o *, _QWORD))(v45 + 24))(
                         *(_QWORD *)(v45 + 64),
                         this->fields.scrollAxisName,
                         *(_QWORD *)(v45 + 40));
      if ( *(float *)&v46 != 0.0 )
      {
        v47 = UICamera_TypeInfo;
        v48 = v46;
        if ( !UICamera_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
          v47 = UICamera_TypeInfo;
        }
        v49 = v47->static_fields;
        onScroll = v49->onScroll;
        if ( onScroll )
        {
          if ( !v47->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v47);
            v49 = UICamera_TypeInfo->static_fields;
            onScroll = v49->onScroll;
            if ( !onScroll )
              goto LABEL_107;
          }
          ((void (__fastcall *)(intptr_t, struct UnityEngine_GameObject_o *, intptr_t, long double))onScroll->fields.invoke_impl)(
            onScroll->fields.method_code,
            v49->mHover,
            onScroll->fields.method,
            v48);
          v47 = UICamera_TypeInfo;
        }
        if ( !v47->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v47);
          v47 = UICamera_TypeInfo;
        }
        v51 = v47->static_fields->mHover;
        v71 = LODWORD(v48);
        v52 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v71);
        UICamera__Notify(v51, (System_String_o *)StringLiteral_9954/*"OnScroll"*/, v52, v53);
      }
    }
    v54 = UICamera_TypeInfo;
    if ( !UICamera_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
      v54 = UICamera_TypeInfo;
    }
    if ( !v54->static_fields->showTooltips )
      goto LABEL_103;
    mTooltipTime = this->fields.mTooltipTime;
    if ( mTooltipTime == 0.0 )
      goto LABEL_103;
    if ( mTooltipTime >= RealTime__get_time(0) )
    {
      v14 = UICamera_TypeInfo;
      if ( !UICamera_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
        v14 = UICamera_TypeInfo;
      }
      v56 = *(_QWORD *)(*((_QWORD *)v14 + 23) + 24LL);
      if ( !v56 )
        goto LABEL_107;
      if ( ((*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(v56 + 24))(
              *(_QWORD *)(v56 + 64),
              304,
              *(_QWORD *)(v56 + 40))
          & 1) == 0 )
      {
        v14 = UICamera_TypeInfo;
        if ( !UICamera_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
          v14 = UICamera_TypeInfo;
        }
        v57 = *(_QWORD *)(*((_QWORD *)v14 + 23) + 24LL);
        if ( !v57 )
          goto LABEL_107;
        if ( ((*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(v57 + 24))(
                *(_QWORD *)(v57 + 64),
                303,
                *(_QWORD *)(v57 + 40))
            & 1) == 0 )
        {
LABEL_103:
          v69 = UICamera_TypeInfo;
          if ( !UICamera_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
            v69 = UICamera_TypeInfo;
          }
          v70 = v69->static_fields;
          v70->current = 0;
          sub_1C71354((GrandQuestFolderBoardItem_o *)&v70->current, 0, v27, v28, v29, v30, v31, v32);
          UICamera_TypeInfo->static_fields->currentTouchID = -100;
          return;
        }
      }
    }
    v58 = UICamera_TypeInfo;
    if ( !UICamera_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
      v58 = UICamera_TypeInfo;
    }
    v59 = v58->static_fields->mHover;
    this->fields.mTooltip = v59;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.mTooltip, (int32_t)v59, v27, v28, v29, v30, v31, v32);
    v14 = UICamera_TypeInfo->static_fields;
    v66 = *((_QWORD *)v14 + 40);
    if ( v66 )
    {
      if ( !*(_DWORD *)(v66 + 24) )
        sub_1C71610(v14);
      v67 = *(_QWORD *)(v66 + 32);
      *((_QWORD *)v14 + 20) = v67;
      sub_1C71354((GrandQuestFolderBoardItem_o *)v14 + 1, v67, v60, v61, v62, v63, v64, v65);
      UICamera_TypeInfo->static_fields->currentTouchID = -1;
      UICamera__ShowTooltip(this, 1, v68);
      goto LABEL_103;
    }
LABEL_107:
    sub_1C71608(v14, v15);
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
  if ( (byte_4CCB9FD & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&UICamera_TypeInfo);
    byte_4CCB9FD = 1;
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
      sub_1C71608(v5, method);
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
      sub_1C71610(v5);
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

  if ( (byte_4CCB9F7 & 1) == 0 )
  {
    sub_1C713B0(&Method_UnityEngine_Component_GetComponent_Rigidbody___);
    sub_1C713B0(&Method_UnityEngine_Component_GetComponent_UIPanel___);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CCB9F7 = 1;
  }
  while ( 1 )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v3 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)trans, 0, 0);
    if ( !v3 )
      break;
    if ( !trans )
      sub_1C71608(v3, v4);
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)trans,
                         (const MethodInfo_31418DC *)Method_UnityEngine_Component_GetComponent_UIPanel___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0) )
      break;
    v6 = UnityEngine_Component__GetComponent_object_(
           (UnityEngine_Component_o *)trans,
           (const MethodInfo_31418DC *)Method_UnityEngine_Component_GetComponent_Rigidbody___);
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

  if ( (byte_4CCB9F8 & 1) == 0 )
  {
    sub_1C713B0(&Method_UnityEngine_Component_GetComponent_Rigidbody2D___);
    sub_1C713B0(&Method_UnityEngine_Component_GetComponent_UIPanel___);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CCB9F8 = 1;
  }
  while ( 1 )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v3 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)trans, 0, 0);
    if ( !v3 )
      break;
    if ( !trans )
      sub_1C71608(v3, v4);
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)trans,
                         (const MethodInfo_31418DC *)Method_UnityEngine_Component_GetComponent_UIPanel___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0) )
      break;
    v6 = UnityEngine_Component__GetComponent_object_(
           (UnityEngine_Component_o *)trans,
           (const MethodInfo_31418DC *)Method_UnityEngine_Component_GetComponent_Rigidbody2D___);
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

  if ( (byte_4CCB9FE & 1) == 0 )
  {
    sub_1C713B0(&UICamera_TypeInfo);
    byte_4CCB9FE = 1;
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
    sub_1C71608(v5, *(_QWORD *)&down);
  return (int)(((unsigned int (__fastcall *)(intptr_t, _QWORD, intptr_t))v8->fields.invoke_impl)(
                 v8->fields.method_code,
                 (unsigned int)down,
                 v8->fields.method) << 31) >> 31;
}


// local variable allocation has failed, the output may be wrong!
int32_t UICamera__GetDirection_49441412(
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

  if ( (byte_4CCB9FF & 1) == 0 )
  {
    sub_1C713B0(&UICamera_TypeInfo);
    byte_4CCB9FF = 1;
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
    sub_1C71608(v9, *(_QWORD *)&up1);
  return (int)(((unsigned int (__fastcall *)(intptr_t, _QWORD, intptr_t))v14->fields.invoke_impl)(
                 v14->fields.method_code,
                 (unsigned int)down1,
                 v14->fields.method) << 31) >> 31;
}


int32_t UICamera__GetDirection_49441748(System_String_o *axis, const MethodInfo *method)
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

  if ( (byte_4CCBA00 & 1) == 0 )
  {
    sub_1C713B0(&UICamera_TypeInfo);
    byte_4CCBA00 = 1;
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
    sub_1C71608(v8, v6);
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

  if ( (byte_4CCBA02 & 1) == 0 )
  {
    sub_1C713B0(&UICamera_TypeInfo);
    byte_4CCBA02 = 1;
  }
  v3 = UICamera_TypeInfo;
  if ( !UICamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    v3 = UICamera_TypeInfo;
  }
  mMouse = v3->static_fields->mMouse;
  if ( !mMouse )
    sub_1C71608(v3, method);
  if ( LODWORD(mMouse->max_length) <= button )
    sub_1C71610(v3);
  return mMouse->m_Items[button];
}


UICamera_MouseOrTouch_o *UICamera__GetTouch(int32_t id, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__object__o *mTouches; // x0
  __int64 v4; // x20
  UICamera_c *v5; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4CCBA03 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_int__UICamera_MouseOrTouch__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_int__UICamera_MouseOrTouch__TryGetValue__);
    sub_1C713B0(&UICamera_MouseOrTouch_TypeInfo);
    sub_1C713B0(&UICamera_TypeInfo);
    byte_4CCBA03 = 1;
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
               (const MethodInfo_3463A20 *)Method_System_Collections_Generic_Dictionary_int__UICamera_MouseOrTouch__TryGetValue__) )
        {
          return (UICamera_MouseOrTouch_o *)value;
        }
        v4 = sub_1C715FC(UICamera_MouseOrTouch_TypeInfo);
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
              (const MethodInfo_3462294 *)Method_System_Collections_Generic_Dictionary_int__UICamera_MouseOrTouch__Add__);
            return (UICamera_MouseOrTouch_o *)value;
          }
        }
      }
      sub_1C71608(mTouches, method);
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

  if ( (byte_4CCB9FC & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&UICamera_TypeInfo);
    byte_4CCB9FC = 1;
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

  if ( (byte_4CCB9F2 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_int__UICamera_MouseOrTouch__GetEnumerator__);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_Enumerator_int__UICamera_MouseOrTouch__Dispose__);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_Enumerator_int__UICamera_MouseOrTouch__MoveNext__);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_Enumerator_int__UICamera_MouseOrTouch__get_Current__);
    sub_1C713B0(&Method_System_Collections_Generic_KeyValuePair_int__UICamera_MouseOrTouch__get_Value__);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&UICamera_TypeInfo);
    byte_4CCB9F2 = 1;
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
      sub_1C71610(key);
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
    (const MethodInfo_34626CC *)Method_System_Collections_Generic_Dictionary_int__UICamera_MouseOrTouch__GetEnumerator__);
  v17 = v16;
  while ( 1 )
  {
    v9 = System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
           &v17,
           (const MethodInfo_35BA0B4 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__UICamera_MouseOrTouch__MoveNext__);
    if ( !v9 )
      break;
    if ( !v17.fields._current.fields.value )
      sub_1C71608(v9, v10);
    monitor = (UnityEngine_Object_o *)v17.fields._current.fields.value[4].monitor;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(monitor, (UnityEngine_Object_o *)go, 0) )
    {
      System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
        &v17,
        (const MethodInfo_35BA1D8 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__UICamera_MouseOrTouch__Dispose__);
      return 1;
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v17,
    (const MethodInfo_35BA1D8 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__UICamera_MouseOrTouch__Dispose__);
  key = (System_Collections_Generic_Dictionary_int__object__o *)UICamera_TypeInfo;
  if ( !UICamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    key = (System_Collections_Generic_Dictionary_int__object__o *)UICamera_TypeInfo;
  }
  value = key[2].fields._entries->m_Items[12].fields.value;
  if ( !value )
LABEL_30:
    sub_1C71608(key, method);
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
  if ( (byte_4CCB9FA & 1) == 0 )
  {
    sub_1C713B0(&Method_NGUITools_FindInParents_UIPanel___);
    sub_1C713B0(&NGUITools_TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CCB9FA = 1;
  }
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  for ( i = (UnityEngine_Object_o *)NGUITools__FindInParents_object_(
                                      go,
                                      (const MethodInfo_31D5C14 *)Method_NGUITools_FindInParents_UIPanel___);
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
      sub_1C71608(v8, v9);
    v12.fields.x = x;
    v12.fields.y = y;
    v12.fields.z = z;
    if ( !UIPanel__IsVisible_49440772((UIPanel_o *)i, v12, v9) )
      break;
  }
  return !v10;
}


bool UICamera__IsVisible_49440288(UICamera_DepthEntry_o *de, const MethodInfo *method)
{
  UnityEngine_GameObject_o *go; // x20
  UnityEngine_Object_o *i; // x20
  _BOOL8 v5; // x0
  const MethodInfo *v6; // x1
  bool v7; // w21

  if ( (byte_4CCB9FB & 1) == 0 )
  {
    sub_1C713B0(&Method_NGUITools_FindInParents_UIPanel___);
    sub_1C713B0(&NGUITools_TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CCB9FB = 1;
  }
  go = de->fields.go;
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  for ( i = (UnityEngine_Object_o *)NGUITools__FindInParents_object_(
                                      go,
                                      (const MethodInfo_31D5C14 *)Method_NGUITools_FindInParents_UIPanel___);
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
      sub_1C71608(v5, v6);
    if ( !UIPanel__IsVisible_49440772((UIPanel_o *)i, de->fields.point, v6) )
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

  if ( (byte_4CCBA01 & 1) == 0 )
  {
    sub_1C713B0(&NGUITools_TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&UICamera_TypeInfo);
    byte_4CCBA01 = 1;
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
    if ( NGUITools__GetActive_49712152(go, 0) )
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
        UnityEngine_GameObject__SendMessage_71704892(go, funcName, obj, 1, 0);
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
          UnityEngine_GameObject__SendMessage_71704892(v9, funcName, obj, 1, 0);
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
      sub_1C71608(v9, v8);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  UICamera_c *v9; // x0
  GrandQuestFolderBoardItem_c *currentTouch; // x20
  BetterList_int__o *v11; // x21
  UICamera_c *v12; // x0
  char *mTouches; // x0
  Il2CppObject *value; // x22
  int32_t key; // w26
  UnityEngine_Object_o *monitor; // x23
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  UICamera_c *v23; // x0
  GrandQuestFolderBoardItem_o *static_fields; // x0
  __int64 v25; // x0
  __int64 v26; // x1
  const MethodInfo *v27; // x3
  struct UICamera_StaticFields *v28; // x9
  struct UICamera_MouseOrTouch_o *v29; // x8
  __int64 v30; // x0
  __int64 v31; // x1
  int32_t v32; // w22
  const MethodInfo *v33; // x1
  int32_t Item; // w23
  unsigned int v35; // w22
  int v36; // w23
  __int64 v37; // x8
  __int64 v38; // x8
  UnityEngine_Object_o *v39; // x21
  UICamera_c *v40; // x0
  __int64 v41; // x8
  __int64 v42; // x1
  const MethodInfo *v43; // x3
  struct UICamera_StaticFields *v44; // x9
  struct UICamera_MouseOrTouch_o *v45; // x8
  __int64 v46; // x8
  UnityEngine_Object_o *v47; // x21
  UICamera_c *v48; // x0
  struct UICamera_StaticFields *v49; // x0
  struct UICamera_MouseOrTouch_o *controller; // x1
  int32_t v51; // w2
  int32_t v52; // w3
  System_String_o *v53; // x4
  int32_t v54; // w5
  int64_t v55; // x6
  System_String_o *v56; // x7
  struct UICamera_StaticFields *v57; // x8
  __int64 v58; // x1
  int32_t v59; // w2
  int32_t v60; // w3
  System_String_o *v61; // x4
  int32_t v62; // w5
  int64_t v63; // x6
  System_String_o *v64; // x7
  struct UICamera_StaticFields *v65; // x8
  struct UnityEngine_GameObject_o *mCurrentSelection; // x1
  const MethodInfo *v67; // x3
  struct UICamera_MouseOrTouch_o *v68; // x8
  int32_t v69; // w2
  int32_t v70; // w3
  System_String_o *v71; // x4
  int32_t v72; // w5
  int64_t v73; // x6
  System_String_o *v74; // x7
  UICamera_c *v75; // x0
  GrandQuestFolderBoardItem_o *v76; // x0
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v77; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v78; // [xsp+30h] [xbp-90h] BYREF

  if ( (byte_4CCBA13 & 1) == 0 )
  {
    sub_1C713B0(&Method_BetterList_int__Add__);
    sub_1C713B0(&Method_BetterList_int___ctor__);
    sub_1C713B0(&Method_BetterList_int__get_Item__);
    sub_1C713B0(&BetterList_int__TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_int__UICamera_MouseOrTouch__GetEnumerator__);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_Enumerator_int__UICamera_MouseOrTouch__Dispose__);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_Enumerator_int__UICamera_MouseOrTouch__MoveNext__);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_Enumerator_int__UICamera_MouseOrTouch__get_Current__);
    sub_1C713B0(&Method_System_Collections_Generic_KeyValuePair_int__UICamera_MouseOrTouch__get_Key__);
    sub_1C713B0(&Method_System_Collections_Generic_KeyValuePair_int__UICamera_MouseOrTouch__get_Value__);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&UICamera_TypeInfo);
    byte_4CCBA13 = 1;
  }
  v9 = UICamera_TypeInfo;
  memset(&v78, 0, sizeof(v78));
  if ( !UICamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    v9 = UICamera_TypeInfo;
  }
  currentTouch = (GrandQuestFolderBoardItem_c *)v9->static_fields->currentTouch;
  if ( this->fields.useTouch )
  {
    v11 = (BetterList_int__o *)sub_1C715FC(BetterList_int__TypeInfo);
    BetterList_int____ctor(v11, (const MethodInfo_3381438 *)Method_BetterList_int___ctor__);
    v12 = UICamera_TypeInfo;
    if ( !UICamera_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
      v12 = UICamera_TypeInfo;
    }
    mTouches = (char *)v12->static_fields->mTouches;
    if ( !mTouches )
      goto LABEL_60;
    System_Collections_Generic_Dictionary_int__object___GetEnumerator(
      &v77,
      (System_Collections_Generic_Dictionary_int__object__o *)mTouches,
      (const MethodInfo_34626CC *)Method_System_Collections_Generic_Dictionary_int__UICamera_MouseOrTouch__GetEnumerator__);
    v78 = v77;
    while ( System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
              &v78,
              (const MethodInfo_35BA0B4 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__UICamera_MouseOrTouch__MoveNext__) )
    {
      value = v78.fields._current.fields.value;
      if ( v78.fields._current.fields.value )
      {
        key = (int32_t)v78.fields._current.fields.key;
        monitor = (UnityEngine_Object_o *)v78.fields._current.fields.value[4].monitor;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Implicit(monitor, 0) )
        {
          v23 = UICamera_TypeInfo;
          if ( !UICamera_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
            v23 = UICamera_TypeInfo;
          }
          static_fields = (GrandQuestFolderBoardItem_o *)v23->static_fields;
          static_fields[1].klass = (GrandQuestFolderBoardItem_c *)value;
          sub_1C71354(static_fields + 1, (int32_t)value, v17, v18, v19, v20, v21, v22);
          v28 = UICamera_TypeInfo->static_fields;
          v29 = v28->currentTouch;
          v28->currentScheme = 1;
          v28->currentTouchID = key;
          if ( !v29 )
            sub_1C71608(v25, v26);
          v29->fields.clickNotification = 0;
          UICamera__ProcessTouch(this, 0, 1, v27);
          if ( !v11 )
            sub_1C71608(v30, v31);
          BetterList_int___Add(
            v11,
            UICamera_TypeInfo->static_fields->currentTouchID,
            (const MethodInfo_3380DD8 *)Method_BetterList_int__Add__);
        }
      }
    }
    System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
      &v78,
      (const MethodInfo_35BA1D8 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__UICamera_MouseOrTouch__Dispose__);
    if ( !v11 )
      goto LABEL_60;
    if ( v11->fields.size >= 1 )
    {
      v32 = 0;
      do
      {
        Item = BetterList_int___get_Item(v11, v32, (const MethodInfo_3380BD4 *)Method_BetterList_int__get_Item__);
        if ( !UICamera_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
        UICamera__RemoveTouch(Item, v33);
        ++v32;
      }
      while ( v32 < v11->fields.size );
    }
  }
  if ( this->fields.useMouse )
  {
    v35 = 0;
    v36 = -1;
    while ( 1 )
    {
      mTouches = (char *)UICamera_TypeInfo;
      if ( !UICamera_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
        mTouches = (char *)UICamera_TypeInfo;
      }
      v37 = *(_QWORD *)(*((_QWORD *)mTouches + 23) + 320LL);
      if ( !v37 )
        break;
      if ( v35 >= *(_DWORD *)(v37 + 24) )
        goto LABEL_61;
      v38 = *(_QWORD *)(v37 + 8LL * (int)v35 + 32);
      if ( !v38 )
        break;
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
        mTouches = (char *)v40->static_fields;
        v41 = *((_QWORD *)mTouches + 40);
        if ( !v41 )
          break;
        if ( v35 >= *(_DWORD *)(v41 + 24) )
LABEL_61:
          sub_1C71610(mTouches);
        v42 = *(_QWORD *)(v41 + 8LL * (int)v35 + 32);
        *((_QWORD *)mTouches + 20) = v42;
        sub_1C71354((GrandQuestFolderBoardItem_o *)mTouches + 1, v42, v2, v3, v4, v5, v6, v7);
        v44 = UICamera_TypeInfo->static_fields;
        v45 = v44->currentTouch;
        v44->currentTouchID = v36;
        v44->currentKey = v35 + 323;
        v44->currentScheme = 0;
        if ( !v45 )
          break;
        v45->fields.clickNotification = 0;
        UICamera__ProcessTouch(this, 0, 1, v43);
      }
      ++v35;
      --v36;
      if ( v35 == 3 )
        goto LABEL_43;
    }
LABEL_60:
    sub_1C71608(mTouches, method);
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
    v46 = *(_QWORD *)(*((_QWORD *)mTouches + 23) + 336LL);
    if ( !v46 )
      goto LABEL_60;
    v47 = *(UnityEngine_Object_o **)(v46 + 72);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Implicit(v47, 0) )
    {
      v48 = UICamera_TypeInfo;
      if ( !UICamera_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
        v48 = UICamera_TypeInfo;
      }
      v49 = v48->static_fields;
      controller = v49->controller;
      v49->currentTouch = controller;
      sub_1C71354((GrandQuestFolderBoardItem_o *)&v49->currentTouch, (int32_t)controller, v2, v3, v4, v5, v6, v7);
      v57 = UICamera_TypeInfo->static_fields;
      mTouches = (char *)v57->currentTouch;
      *(_QWORD *)&v57->currentScheme = 0xFFFFFF9C00000002LL;
      if ( !mTouches )
        goto LABEL_60;
      v58 = *((_QWORD *)mTouches + 8);
      *((_QWORD *)mTouches + 7) = v58;
      sub_1C71354((GrandQuestFolderBoardItem_o *)(mTouches + 56), v58, v51, v52, v53, v54, v55, v56);
      v65 = UICamera_TypeInfo->static_fields;
      mTouches = (char *)v65->currentTouch;
      if ( !mTouches )
        goto LABEL_60;
      mCurrentSelection = v65->mCurrentSelection;
      *((_QWORD *)mTouches + 8) = mCurrentSelection;
      sub_1C71354(
        (GrandQuestFolderBoardItem_o *)(mTouches + 64),
        (int32_t)mCurrentSelection,
        v59,
        v60,
        v61,
        v62,
        v63,
        v64);
      v68 = UICamera_TypeInfo->static_fields->currentTouch;
      if ( !v68 )
        goto LABEL_60;
      v68->fields.clickNotification = 0;
      UICamera__ProcessTouch(this, 0, 1, v67);
      mTouches = (char *)UICamera_TypeInfo->static_fields->currentTouch;
      if ( !mTouches )
        goto LABEL_60;
      *((_QWORD *)mTouches + 7) = 0;
      sub_1C71354((GrandQuestFolderBoardItem_o *)(mTouches + 56), 0, v69, v70, v71, v72, v73, v74);
    }
  }
  v75 = UICamera_TypeInfo;
  if ( !UICamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    v75 = UICamera_TypeInfo;
  }
  v76 = (GrandQuestFolderBoardItem_o *)v75->static_fields;
  v76[1].klass = currentTouch;
  sub_1C71354(v76 + 1, (int32_t)currentTouch, v2, v3, v4, v5, v6, v7);
}


void UICamera__OnDisable(UICamera_o *this, const MethodInfo *method)
{
  UICamera_c *v3; // x0
  BetterList_T__o *list; // x0

  if ( (byte_4CCBA07 & 1) == 0 )
  {
    sub_1C713B0(&Method_BetterList_UICamera__Remove__);
    sub_1C713B0(&UICamera_TypeInfo);
    byte_4CCBA07 = 1;
  }
  v3 = UICamera_TypeInfo;
  if ( !UICamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    v3 = UICamera_TypeInfo;
  }
  list = (BetterList_T__o *)v3->static_fields->list;
  if ( !list )
    sub_1C71608(0, method);
  BetterList_object___Remove(
    list,
    (Il2CppObject *)this,
    (const MethodInfo_3381998 *)Method_BetterList_UICamera__Remove__);
}


void UICamera__OnEnable(UICamera_o *this, const MethodInfo *method)
{
  UICamera_c *v3; // x0
  BetterList_T__o *list; // x0
  BetterList_T__o *v5; // x19
  BetterList_CompareFunc_T__o *v6; // x20

  if ( (byte_4CCBA06 & 1) == 0 )
  {
    sub_1C713B0(&Method_BetterList_UICamera__Add__);
    sub_1C713B0(&Method_BetterList_UICamera__Sort__);
    sub_1C713B0(&BetterList_CompareFunc_UICamera__TypeInfo);
    sub_1C713B0(&Method_UICamera_CompareFunc__);
    sub_1C713B0(&UICamera_TypeInfo);
    byte_4CCBA06 = 1;
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
          (const MethodInfo_33816E0 *)Method_BetterList_UICamera__Add__),
        v5 = (BetterList_T__o *)UICamera_TypeInfo->static_fields->list,
        v6 = (BetterList_CompareFunc_T__o *)sub_1C715FC(BetterList_CompareFunc_UICamera__TypeInfo),
        BetterList_CompareFunc_object____ctor(v6, 0, Method_UICamera_CompareFunc__, 0),
        !v5) )
  {
    sub_1C71608(list, method);
  }
  BetterList_object___Sort(v5, v6, (const MethodInfo_3381C74 *)Method_BetterList_UICamera__Sort__);
}


void UICamera__ProcessFakeTouches(UICamera_o *this, const MethodInfo *method)
{
  bool MouseButtonDown; // w21
  bool MouseButtonUp; // w20
  bool MouseButton; // w0
  const MethodInfo *v6; // x1
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
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
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x4
  int32_t v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7
  UICamera_c *v32; // x0
  struct UICamera_StaticFields *v33; // x8
  struct UnityEngine_GameObject_o *fallThrough; // x1
  UICamera_c *v35; // x0
  UnityEngine_Object_o *hoveredObject; // x22
  int32_t v37; // w2
  int32_t v38; // w3
  System_String_o *v39; // x4
  int32_t v40; // w5
  int64_t v41; // x6
  System_String_o *v42; // x7
  UICamera_c *v43; // x0
  struct UICamera_StaticFields *v44; // x8
  struct UnityEngine_GameObject_o *mGenericHandler; // x1
  UICamera_c *v46; // x0
  __int64 v47; // x1
  int32_t v48; // w2
  int32_t v49; // w3
  System_String_o *v50; // x4
  int32_t v51; // w5
  int64_t v52; // x6
  System_String_o *v53; // x7
  struct UICamera_StaticFields *v54; // x8
  struct UnityEngine_GameObject_o *v55; // x1
  int32_t v56; // w2
  const MethodInfo *v57; // x3
  System_String_o *v58; // x4
  int32_t v59; // w5
  int64_t v60; // x6
  System_String_o *v61; // x7
  struct UICamera_StaticFields *v62; // x8
  struct UICamera_MouseOrTouch_o *v63; // x9
  __int64 v64; // x8
  __int64 v65; // x1
  GrandQuestFolderBoardItem_o *v66; // x0
  UnityEngine_Object_o *v67; // x22
  UICamera_c *v68; // x0
  __int64 v69; // x8
  int32_t v70; // w2
  int32_t v71; // w3
  System_String_o *v72; // x4
  int32_t v73; // w5
  int64_t v74; // x6
  System_String_o *v75; // x7
  UICamera_c *v76; // x0
  UICamera_c *v77; // x0
  GrandQuestFolderBoardItem_o *v78; // x0
  int32_t v79; // w2
  int32_t v80; // w3
  System_String_o *v81; // x4
  int32_t v82; // w5
  int64_t v83; // x6
  System_String_o *v84; // x7
  float y; // [xsp+0h] [xbp-60h]
  float x; // [xsp+10h] [xbp-50h]
  UnityEngine_Vector3_o mousePosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v88; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4CCBA0D & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&UICamera_TypeInfo);
    byte_4CCBA0D = 1;
  }
  MouseButtonDown = UnityEngine_Input__GetMouseButtonDown(0, 0);
  MouseButtonUp = UnityEngine_Input__GetMouseButtonUp(0, 0);
  MouseButton = UnityEngine_Input__GetMouseButton(0, 0);
  if ( MouseButtonDown || MouseButtonUp || MouseButton )
  {
    v13 = UICamera_TypeInfo;
    if ( !UICamera_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
      v13 = UICamera_TypeInfo;
    }
    static_fields = (__int64)v13->static_fields;
    v15 = *(_QWORD *)(static_fields + 320);
    *(_DWORD *)(static_fields + 148) = 1;
    if ( !v15 )
      goto LABEL_70;
    if ( !*(_DWORD *)(v15 + 24) )
      sub_1C71610(static_fields);
    v16 = *(_QWORD *)(v15 + 32);
    *(_QWORD *)(static_fields + 160) = v16;
    sub_1C71354((GrandQuestFolderBoardItem_o *)(static_fields + 160), v16, v7, v8, v9, v10, v11, v12);
    static_fields = (__int64)UICamera_TypeInfo;
    currentTouch = UICamera_TypeInfo->static_fields->currentTouch;
    if ( !currentTouch )
      goto LABEL_70;
    v18 = MouseButtonDown;
    currentTouch->fields.touchBegan = v18;
    if ( v18 )
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
    v20 = *(_QWORD *)(static_fields + 184);
    v21 = *(struct UnityEngine_Vector2_o **)(v20 + 160);
    if ( v18 )
    {
      if ( !byte_4CC0BE9 )
      {
        static_fields = sub_1C713B0(&UnityEngine_Vector2_TypeInfo);
        mousePosition.fields.y = y;
        mousePosition.fields.x = x;
        byte_4CC0BE9 = 1;
      }
      zeroVector = UnityEngine_Vector2_TypeInfo->static_fields->zeroVector;
    }
    else
    {
      v23 = *(struct UICamera_MouseOrTouch_o **)(v20 + 160);
      if ( !*(_DWORD *)(static_fields + 224) )
      {
        j_il2cpp_runtime_class_init_0(static_fields);
        mousePosition.fields.y = y;
        mousePosition.fields.x = x;
        v23 = UICamera_TypeInfo->static_fields->currentTouch;
      }
      if ( !v23 )
        goto LABEL_70;
      zeroVector = (struct UnityEngine_Vector2_o)vsub_f32(
                                                   *(float32x2_t *)&mousePosition.fields.x,
                                                   (float32x2_t)v23->fields.pos).n64_u64[0];
    }
    if ( !v21 )
      goto LABEL_70;
    v21[4] = zeroVector;
    static_fields = (__int64)UICamera_TypeInfo;
    if ( !UICamera_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
      mousePosition.fields.y = y;
      mousePosition.fields.x = x;
      static_fields = (__int64)UICamera_TypeInfo;
    }
    v24 = *(_QWORD *)(*(_QWORD *)(static_fields + 184) + 160LL);
    if ( !v24 )
      goto LABEL_70;
    *(float *)(v24 + 16) = mousePosition.fields.x;
    *(float *)(v24 + 20) = mousePosition.fields.y;
    v25 = *(_QWORD *)(*(_QWORD *)(static_fields + 184) + 160LL);
    if ( !v25 )
      goto LABEL_70;
    v88.fields.x = *(float *)(v25 + 16);
    v88.fields.y = *(float *)(v25 + 20);
    v88.fields.z = 0.0;
    if ( !UICamera__Raycast(v88, (const MethodInfo *)static_fields) )
    {
      v32 = UICamera_TypeInfo;
      if ( !UICamera_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
        v32 = UICamera_TypeInfo;
      }
      v33 = v32->static_fields;
      fallThrough = v33->fallThrough;
      v33->hoveredObject = fallThrough;
      sub_1C71354(
        (GrandQuestFolderBoardItem_o *)&v33->hoveredObject,
        (int32_t)fallThrough,
        v26,
        v27,
        v28,
        v29,
        v30,
        v31);
    }
    v35 = UICamera_TypeInfo;
    if ( !UICamera_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
      v35 = UICamera_TypeInfo;
    }
    hoveredObject = (UnityEngine_Object_o *)v35->static_fields->hoveredObject;
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
      sub_1C71354(
        (GrandQuestFolderBoardItem_o *)&v44->hoveredObject,
        (int32_t)mGenericHandler,
        v37,
        v38,
        v39,
        v40,
        v41,
        v42);
    }
    v46 = UICamera_TypeInfo;
    if ( !UICamera_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
      v46 = UICamera_TypeInfo;
    }
    static_fields = (__int64)v46->static_fields->currentTouch;
    if ( !static_fields )
      goto LABEL_70;
    v47 = *(_QWORD *)(static_fields + 64);
    *(_QWORD *)(static_fields + 56) = v47;
    sub_1C71354((GrandQuestFolderBoardItem_o *)(static_fields + 56), v47, v37, v38, v39, v40, v41, v42);
    v54 = UICamera_TypeInfo->static_fields;
    static_fields = (__int64)v54->currentTouch;
    if ( !static_fields )
      goto LABEL_70;
    v55 = v54->hoveredObject;
    *(_QWORD *)(static_fields + 64) = v55;
    sub_1C71354((GrandQuestFolderBoardItem_o *)(static_fields + 64), (int32_t)v55, v48, v49, v50, v51, v52, v53);
    static_fields = (__int64)UICamera_TypeInfo;
    v62 = UICamera_TypeInfo->static_fields;
    v63 = v62->currentTouch;
    if ( !v63 )
      goto LABEL_70;
    v62->lastTouchPosition = v63->fields.pos;
    if ( !*(_DWORD *)(static_fields + 224) )
    {
      j_il2cpp_runtime_class_init_0(static_fields);
      static_fields = (__int64)UICamera_TypeInfo;
    }
    v64 = *(_QWORD *)(static_fields + 184);
    static_fields = *(_QWORD *)(v64 + 160);
    if ( v18 )
    {
      if ( !static_fields )
        goto LABEL_70;
      v65 = *(_QWORD *)(v64 + 136);
      *(_QWORD *)(static_fields + 48) = v65;
      v66 = (GrandQuestFolderBoardItem_o *)(static_fields + 48);
    }
    else
    {
      if ( !static_fields )
        goto LABEL_70;
      v67 = *(UnityEngine_Object_o **)(static_fields + 72);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Inequality(v67, 0, 0) )
        goto LABEL_62;
      v68 = UICamera_TypeInfo;
      if ( !UICamera_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
        v68 = UICamera_TypeInfo;
      }
      static_fields = (__int64)v68->static_fields;
      v69 = *(_QWORD *)(static_fields + 160);
      if ( !v69 )
        goto LABEL_70;
      v65 = *(_QWORD *)(v69 + 48);
      *(_QWORD *)(static_fields + 136) = v65;
      v66 = (GrandQuestFolderBoardItem_o *)(static_fields + 136);
    }
    sub_1C71354(v66, v65, v56, (int32_t)v57, v58, v59, v60, v61);
LABEL_62:
    UICamera__ProcessTouch(this, v18, MouseButtonUp, v57);
    if ( MouseButtonUp )
    {
      v76 = UICamera_TypeInfo;
      if ( !UICamera_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
        v76 = UICamera_TypeInfo;
      }
      UICamera__RemoveTouch(v76->static_fields->currentTouchID, v6);
    }
    v77 = UICamera_TypeInfo;
    if ( !UICamera_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
      v77 = UICamera_TypeInfo;
    }
    static_fields = (__int64)v77->static_fields->currentTouch;
    if ( static_fields )
    {
      *(_QWORD *)(static_fields + 56) = 0;
      sub_1C71354((GrandQuestFolderBoardItem_o *)(static_fields + 56), 0, v70, v71, v72, v73, v74, v75);
      v78 = (GrandQuestFolderBoardItem_o *)UICamera_TypeInfo->static_fields;
      v78[1].klass = 0;
      sub_1C71354(v78 + 1, 0, v79, v80, v81, v82, v83, v84);
      return;
    }
LABEL_70:
    sub_1C71608(static_fields, v6);
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
  int32_t v34; // w3
  System_String_o *v35; // x4
  int32_t v36; // w5
  int64_t v37; // x6
  System_String_o *v38; // x7
  UICamera_c *v39; // x0
  struct UICamera_StaticFields *static_fields; // x8
  struct UnityEngine_GameObject_o *fallThrough; // x1
  UICamera_c *v42; // x0
  UnityEngine_Object_o *hoveredObject; // x20
  int32_t v44; // w2
  int32_t v45; // w3
  System_String_o *v46; // x4
  int32_t v47; // w5
  int64_t v48; // x6
  System_String_o *v49; // x7
  UICamera_c *v50; // x0
  struct UICamera_StaticFields *v51; // x8
  struct UnityEngine_GameObject_o *mGenericHandler; // x1
  __int64 v53; // x20
  struct UnityEngine_GameObject_o *v54; // x8
  _DWORD *v55; // x9
  struct UnityEngine_GameObject_o *m_CachedPtr; // x1
  _DWORD *v57; // x8
  __int64 v58; // x8
  UnityEngine_Object_o *v59; // x20
  UnityEngine_Object_o *v60; // x21
  _BOOL4 v61; // w0
  int32_t v62; // w2
  int32_t v63; // w3
  System_String_o *v64; // x4
  int32_t v65; // w5
  int64_t v66; // x6
  System_String_o *v67; // x7
  UICamera_c *v68; // x8
  _BOOL4 v69; // w20
  void *v70; // x8
  struct UnityEngine_GameObject_o *v71; // x1
  UICamera_c *v72; // x0
  UnityEngine_Object_o *mTooltip; // x21
  const MethodInfo *v74; // x2
  int v75; // w29
  struct UICamera_StaticFields *v76; // x9
  struct UICamera_MoveDelegate_o *onMouseMove; // x8
  struct UICamera_MouseOrTouch_o *currentTouch; // x9
  GrandQuestFolderBoardItem_o *v79; // x0
  int32_t v80; // w2
  int32_t v81; // w3
  System_String_o *v82; // x4
  int32_t v83; // w5
  int64_t v84; // x6
  System_String_o *v85; // x7
  UnityEngine_Object_o *mHover; // x21
  _BOOL4 v87; // w8
  UICamera_c *v88; // x0
  UnityEngine_Object_o *v89; // x21
  const MethodInfo *v90; // x2
  UICamera_c *v91; // x0
  struct UICamera_StaticFields *v92; // x9
  struct UICamera_BoolDelegate_o *onHover; // x8
  UnityEngine_GameObject_o *v94; // x21
  Il2CppObject *v95; // x0
  const MethodInfo *v96; // x3
  GrandQuestFolderBoardItem_o *p_mHover; // x0
  int32_t v98; // w2
  int32_t v99; // w3
  System_String_o *v100; // x4
  int32_t v101; // w5
  int64_t v102; // x6
  System_String_o *v103; // x7
  unsigned __int64 v104; // x21
  int v105; // w26
  bool MouseButtonDown; // w22
  bool MouseButtonUp; // w0
  int32_t v108; // w2
  int32_t v109; // w3
  System_String_o *v110; // x4
  int32_t v111; // w5
  int64_t v112; // x6
  System_String_o *v113; // x7
  UICamera_c *v114; // x8
  bool v115; // w23
  _QWORD *v116; // x8
  struct UnityEngine_GameObject_o *v117; // x1
  int32_t v118; // w2
  const MethodInfo *v119; // x3
  System_String_o *v120; // x4
  int32_t v121; // w5
  int64_t v122; // x6
  System_String_o *v123; // x7
  UICamera_c *v124; // x0
  struct UICamera_StaticFields *v125; // x8
  struct UnityEngine_Camera_o *currentCamera; // x1
  GrandQuestFolderBoardItem_o *p_pressedCam; // x0
  UnityEngine_Object_o *pressed; // x24
  UICamera_c *v129; // x0
  struct UnityEngine_GameObject_o *last; // x8
  int32_t v131; // w2
  int32_t v132; // w3
  System_String_o *v133; // x4
  int32_t v134; // w5
  int64_t v135; // x6
  System_String_o *v136; // x7
  UICamera_c *v137; // x0
  struct UICamera_StaticFields *v138; // x8
  int32_t v139; // w2
  int32_t v140; // w3
  System_String_o *v141; // x4
  int32_t v142; // w5
  int64_t v143; // x6
  System_String_o *v144; // x7
  struct UICamera_StaticFields *v145; // x8
  struct UICamera_MouseOrTouch_array *mMouse; // x9
  UICamera_MouseOrTouch_o *v147; // x9
  struct UnityEngine_GameObject_o *current; // x1
  int32_t v149; // w2
  int32_t v150; // w3
  System_String_o *v151; // x4
  int32_t v152; // w5
  int64_t v153; // x6
  System_String_o *v154; // x7
  void *v155; // x8
  struct UnityEngine_GameObject_o *v156; // x1
  UICamera_c *v157; // x0
  struct UICamera_StaticFields *v158; // x8
  struct UICamera_BoolDelegate_o *v159; // x9
  UnityEngine_GameObject_o *v160; // x19
  Il2CppObject *v161; // x0
  const MethodInfo *v162; // x3
  GrandQuestFolderBoardItem_o *v163; // x0
  int32_t v164; // w2
  int32_t v165; // w3
  System_String_o *v166; // x4
  int32_t v167; // w5
  int64_t v168; // x6
  System_String_o *v169; // x7
  struct UICamera_MouseOrTouch_array *v170; // x8
  struct UnityEngine_GameObject_o *v171; // x1
  int32_t v172; // w2
  int32_t v173; // w3
  System_String_o *v174; // x4
  int32_t v175; // w5
  int64_t v176; // x6
  System_String_o *v177; // x7
  __int64 v178; // x19
  _DWORD *v179; // x8
  __int64 v180; // x9
  struct UnityEngine_GameObject_o *v181; // x1
  char v182[4]; // [xsp+8h] [xbp-88h] BYREF
  char v183[4]; // [xsp+Ch] [xbp-84h] BYREF
  UnityEngine_Vector3_o mousePosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v185; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v186; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4CCBA0B & 1) == 0 )
  {
    sub_1C713B0(&bool_TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&UICamera_TypeInfo);
    sub_1C713B0(&StringLiteral_9915/*"OnHover"*/);
    byte_4CCBA0B = 1;
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
    v185 = UnityEngine_Input__get_mousePosition(0);
    v29 = UICamera_TypeInfo;
    v30 = v185.fields.x;
    v31 = v185.fields.y;
    z = v185.fields.z;
    if ( !UICamera_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    v186.fields.x = v30;
    v186.fields.y = v31;
    v186.fields.z = z;
    if ( !UICamera__Raycast(v186, (const MethodInfo *)v29) )
    {
      v39 = UICamera_TypeInfo;
      if ( !UICamera_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
        v39 = UICamera_TypeInfo;
      }
      static_fields = v39->static_fields;
      fallThrough = static_fields->fallThrough;
      static_fields->hoveredObject = fallThrough;
      sub_1C71354(
        (GrandQuestFolderBoardItem_o *)&static_fields->hoveredObject,
        (int32_t)fallThrough,
        v33,
        v34,
        v35,
        v36,
        v37,
        v38);
    }
    v42 = UICamera_TypeInfo;
    if ( !UICamera_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
      v42 = UICamera_TypeInfo;
    }
    hoveredObject = (UnityEngine_Object_o *)v42->static_fields->hoveredObject;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(hoveredObject, 0, 0) )
    {
      v50 = UICamera_TypeInfo;
      if ( !UICamera_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
        v50 = UICamera_TypeInfo;
      }
      v51 = v50->static_fields;
      mGenericHandler = v51->mGenericHandler;
      v51->hoveredObject = mGenericHandler;
      sub_1C71354(
        (GrandQuestFolderBoardItem_o *)&v51->hoveredObject,
        (int32_t)mGenericHandler,
        v44,
        v45,
        v46,
        v47,
        v48,
        v49);
    }
    v53 = 0;
    while ( 1 )
    {
      v4 = (UICamera_MouseOrTouch_o *)UICamera_TypeInfo;
      if ( !UICamera_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
        v4 = (UICamera_MouseOrTouch_o *)UICamera_TypeInfo;
      }
      v54 = v4[1].fields.dragged;
      v55 = v54[13].monitor;
      if ( !v55 )
        break;
      if ( (unsigned int)v53 >= v55[6] )
        goto LABEL_175;
      v4 = *(UICamera_MouseOrTouch_o **)&v55[2 * v53 + 8];
      if ( !v4 )
        break;
      m_CachedPtr = (struct UnityEngine_GameObject_o *)v54[15].fields.m_CachedPtr;
      v4->fields.current = m_CachedPtr;
      sub_1C71354(
        (GrandQuestFolderBoardItem_o *)&v4->fields.current,
        (int32_t)m_CachedPtr,
        v44,
        v45,
        v46,
        v47,
        v48,
        v49);
      if ( (_DWORD)++v53 == 3 )
        goto LABEL_59;
    }
LABEL_174:
    sub_1C71608(v4, v3);
  }
LABEL_59:
  v4 = (UICamera_MouseOrTouch_o *)UICamera_TypeInfo;
  if ( !UICamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    v4 = (UICamera_MouseOrTouch_o *)UICamera_TypeInfo;
  }
  v57 = v4[1].fields.dragged[13].monitor;
  if ( !v57 )
    goto LABEL_174;
  if ( !v57[6] )
    goto LABEL_175;
  v58 = *((_QWORD *)v57 + 4);
  if ( !v58 )
    goto LABEL_174;
  v60 = *(UnityEngine_Object_o **)(v58 + 56);
  v59 = *(UnityEngine_Object_o **)(v58 + 64);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v61 = UnityEngine_Object__op_Inequality(v60, v59, 0);
  v68 = UICamera_TypeInfo;
  v69 = v61;
  if ( v61 )
  {
    if ( !UICamera_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
      v68 = UICamera_TypeInfo;
    }
    v68->static_fields->currentScheme = 0;
  }
  if ( !v68->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v68);
    v68 = UICamera_TypeInfo;
  }
  v4 = (UICamera_MouseOrTouch_o *)v68->static_fields;
  v70 = v4[3].monitor;
  if ( !v70 )
    goto LABEL_174;
  if ( !*((_DWORD *)v70 + 6) )
    goto LABEL_175;
  v71 = (struct UnityEngine_GameObject_o *)*((_QWORD *)v70 + 4);
  v4[1].fields.last = v71;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v4[1].fields.last, (int32_t)v71, v62, v63, v64, v65, v66, v67);
  v72 = UICamera_TypeInfo;
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
    v75 = 1;
    goto LABEL_96;
  }
  if ( !this->fields.stickyTooltip || v69 )
  {
    if ( this->fields.mTooltipTime == 0.0 )
    {
      mTooltip = (UnityEngine_Object_o *)this->fields.mTooltip;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(mTooltip, 0, 0) )
        UICamera__ShowTooltip(this, 0, v74);
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
  v76 = (struct UICamera_StaticFields *)v4[1].fields.dragged;
  onMouseMove = v76->onMouseMove;
  if ( onMouseMove )
  {
    if ( !LODWORD(v4[2].fields.pos.fields.x) )
    {
      j_il2cpp_runtime_class_init_0(v4);
      v76 = UICamera_TypeInfo->static_fields;
      onMouseMove = v76->onMouseMove;
    }
    currentTouch = v76->currentTouch;
    if ( !currentTouch || !onMouseMove )
      goto LABEL_174;
    ((void (__fastcall *)(intptr_t, intptr_t, float, float))onMouseMove->fields.invoke_impl)(
      onMouseMove->fields.method_code,
      onMouseMove->fields.method,
      currentTouch->fields.delta.fields.x,
      currentTouch->fields.delta.fields.y);
    v79 = (GrandQuestFolderBoardItem_o *)UICamera_TypeInfo->static_fields;
    v79[1].klass = 0;
    sub_1C71354(v79 + 1, 0, v80, v81, v82, v83, v84, v85);
  }
LABEL_94:
  v75 = v24 ^ 1;
  if ( ((v25 | v24 ^ 1) & 1) != 0 )
  {
    v72 = UICamera_TypeInfo;
LABEL_96:
    if ( !v72->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v72);
      v72 = UICamera_TypeInfo;
    }
    mHover = (UnityEngine_Object_o *)v72->static_fields->mHover;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v87 = UnityEngine_Object__op_Inequality(mHover, 0, 0);
  }
  else
  {
    v75 = 0;
    v87 = 0;
  }
  if ( v69 && v87 )
  {
    v88 = UICamera_TypeInfo;
    if ( !UICamera_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
      v88 = UICamera_TypeInfo;
    }
    v88->static_fields->currentScheme = 0;
    v89 = (UnityEngine_Object_o *)this->fields.mTooltip;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v89, 0, 0) )
      UICamera__ShowTooltip(this, 0, v90);
    v91 = UICamera_TypeInfo;
    if ( !UICamera_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
      v91 = UICamera_TypeInfo;
    }
    v92 = v91->static_fields;
    onHover = v92->onHover;
    if ( onHover )
    {
      if ( !v91->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v91);
        v92 = UICamera_TypeInfo->static_fields;
        onHover = v92->onHover;
        if ( !onHover )
          goto LABEL_174;
      }
      ((void (__fastcall *)(intptr_t, struct UnityEngine_GameObject_o *, _QWORD, intptr_t))onHover->fields.invoke_impl)(
        onHover->fields.method_code,
        v92->mHover,
        0,
        onHover->fields.method);
      v91 = UICamera_TypeInfo;
    }
    if ( !v91->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v91);
      v91 = UICamera_TypeInfo;
    }
    v94 = v91->static_fields->mHover;
    v183[0] = 0;
    v95 = (Il2CppObject *)j_il2cpp_value_box_0(bool_TypeInfo, v183);
    UICamera__Notify(v94, (System_String_o *)StringLiteral_9915/*"OnHover"*/, v95, v96);
    p_mHover = (GrandQuestFolderBoardItem_o *)&UICamera_TypeInfo->static_fields->mHover;
    p_mHover->klass = 0;
    sub_1C71354(p_mHover, 0, v98, v99, v100, v101, v102, v103);
  }
  v104 = 0;
  v105 = -1;
  while ( 2 )
  {
    MouseButtonDown = UnityEngine_Input__GetMouseButtonDown(v104, 0);
    MouseButtonUp = UnityEngine_Input__GetMouseButtonUp(v104, 0);
    v114 = UICamera_TypeInfo;
    v115 = MouseButtonUp;
    if ( MouseButtonDown || MouseButtonUp )
    {
      if ( !UICamera_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
        v114 = UICamera_TypeInfo;
      }
      v114->static_fields->currentScheme = 0;
    }
    if ( !v114->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v114);
      v114 = UICamera_TypeInfo;
    }
    v4 = (UICamera_MouseOrTouch_o *)v114->static_fields;
    v116 = v4[3].monitor;
    if ( !v116 )
      goto LABEL_174;
    if ( v104 >= *((unsigned int *)v116 + 6) )
      goto LABEL_175;
    v117 = (struct UnityEngine_GameObject_o *)v116[v104 + 4];
    v4[1].fields.last = v117;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&v4[1].fields.last, (int32_t)v117, v108, v109, v110, v111, v112, v113);
    v124 = UICamera_TypeInfo;
    v125 = UICamera_TypeInfo->static_fields;
    v125->currentTouchID = v105;
    v125->currentKey = v104 + 323;
    if ( !v124->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v124);
      v125 = UICamera_TypeInfo->static_fields;
    }
    v4 = v125->currentTouch;
    if ( MouseButtonDown )
    {
      if ( !v4 )
        goto LABEL_174;
      currentCamera = v125->currentCamera;
      v4->fields.pressedCam = currentCamera;
      p_pressedCam = (GrandQuestFolderBoardItem_o *)&v4->fields.pressedCam;
      goto LABEL_141;
    }
    if ( !v4 )
      goto LABEL_174;
    pressed = (UnityEngine_Object_o *)v4->fields.pressed;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(pressed, 0, 0) )
    {
      v129 = UICamera_TypeInfo;
      if ( !UICamera_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
        v129 = UICamera_TypeInfo;
      }
      v4 = (UICamera_MouseOrTouch_o *)v129->static_fields;
      last = v4[1].fields.last;
      if ( !last )
        goto LABEL_174;
      currentCamera = (struct UnityEngine_Camera_o *)last[2].klass;
      v4[1].fields.delta = (struct UnityEngine_Vector2_o)currentCamera;
      p_pressedCam = (GrandQuestFolderBoardItem_o *)&v4[1].fields.delta;
LABEL_141:
      sub_1C71354(p_pressedCam, (int32_t)currentCamera, v118, (int32_t)v119, v120, v121, v122, v123);
    }
    UICamera__ProcessTouch(this, MouseButtonDown, v115, v119);
    v137 = UICamera_TypeInfo;
    if ( !UICamera_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
      v137 = UICamera_TypeInfo;
    }
    v138 = v137->static_fields;
    ++v104;
    --v105;
    v138->currentKey = 0;
    if ( v104 != 3 )
      continue;
    break;
  }
  if ( (v69 & v75 & 1) == 0 )
    goto LABEL_160;
  if ( !v137->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v137);
    v138 = UICamera_TypeInfo->static_fields;
  }
  v138->currentScheme = 0;
  this->fields.mTooltipTime = RealTime__get_time(0) + this->fields.tooltipDelay;
  v145 = UICamera_TypeInfo->static_fields;
  mMouse = v145->mMouse;
  if ( !mMouse )
    goto LABEL_174;
  if ( !LODWORD(mMouse->max_length) )
    goto LABEL_175;
  v147 = mMouse->m_Items[0];
  if ( !v147 )
    goto LABEL_174;
  current = v147->fields.current;
  v145->mHover = current;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v145->mHover, (int32_t)current, v139, v140, v141, v142, v143, v144);
  v4 = (UICamera_MouseOrTouch_o *)UICamera_TypeInfo->static_fields;
  v155 = v4[3].monitor;
  if ( !v155 )
    goto LABEL_174;
  if ( !*((_DWORD *)v155 + 6) )
    goto LABEL_175;
  v156 = (struct UnityEngine_GameObject_o *)*((_QWORD *)v155 + 4);
  v4[1].fields.last = v156;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v4[1].fields.last, (int32_t)v156, v149, v150, v151, v152, v153, v154);
  v157 = UICamera_TypeInfo;
  v158 = UICamera_TypeInfo->static_fields;
  v159 = v158->onHover;
  v158->currentTouchID = -1;
  if ( !v159 )
    goto LABEL_157;
  if ( !v157->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v157);
    v158 = UICamera_TypeInfo->static_fields;
    v159 = v158->onHover;
    if ( !v159 )
      goto LABEL_174;
  }
  ((void (__fastcall *)(intptr_t, struct UnityEngine_GameObject_o *, __int64, intptr_t))v159->fields.invoke_impl)(
    v159->fields.method_code,
    v158->mHover,
    1,
    v159->fields.method);
  v157 = UICamera_TypeInfo;
LABEL_157:
  if ( !v157->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v157);
    v157 = UICamera_TypeInfo;
  }
  v160 = v157->static_fields->mHover;
  v182[0] = 1;
  v161 = (Il2CppObject *)j_il2cpp_value_box_0(bool_TypeInfo, v182);
  UICamera__Notify(v160, (System_String_o *)StringLiteral_9915/*"OnHover"*/, v161, v162);
  v137 = UICamera_TypeInfo;
LABEL_160:
  if ( !v137->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v137);
    v137 = UICamera_TypeInfo;
  }
  v163 = (GrandQuestFolderBoardItem_o *)v137->static_fields;
  v163[1].klass = 0;
  sub_1C71354(v163 + 1, 0, v131, v132, v133, v134, v135, v136);
  v170 = UICamera_TypeInfo->static_fields->mMouse;
  if ( !v170 )
    goto LABEL_174;
  if ( !LODWORD(v170->max_length) )
LABEL_175:
    sub_1C71610(v4);
  v4 = v170->m_Items[0];
  if ( !v4 )
    goto LABEL_174;
  v171 = v4->fields.current;
  v4->fields.last = v171;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v4->fields.last, (int32_t)v171, v164, v165, v166, v167, v168, v169);
  v178 = 5;
  do
  {
    v4 = (UICamera_MouseOrTouch_o *)UICamera_TypeInfo;
    if ( !UICamera_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
      v4 = (UICamera_MouseOrTouch_o *)UICamera_TypeInfo;
    }
    v179 = v4[1].fields.dragged[13].monitor;
    if ( !v179 )
      goto LABEL_174;
    if ( (unsigned int)(v178 - 4) >= v179[6] )
      goto LABEL_175;
    v180 = *((_QWORD *)v179 + 4);
    if ( !v180 )
      goto LABEL_174;
    v4 = *(UICamera_MouseOrTouch_o **)&v179[2 * v178];
    if ( !v4 )
      goto LABEL_174;
    v181 = *(struct UnityEngine_GameObject_o **)(v180 + 56);
    v4->fields.last = v181;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&v4->fields.last, (int32_t)v181, v172, v173, v174, v175, v176, v177);
    ++v178;
  }
  while ( (_DWORD)v178 != 7 );
}


void UICamera__ProcessOthers(UICamera_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  UICamera_c *v9; // x0
  struct UICamera_StaticFields *static_fields; // x0
  struct UICamera_MouseOrTouch_o *controller; // x1
  const MethodInfo *v12; // x1
  const MethodInfo *v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
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
  int32_t v35; // w2
  int32_t v36; // w3
  System_String_o *v37; // x4
  int32_t v38; // w5
  int64_t v39; // x6
  System_String_o *v40; // x7
  struct UICamera_StaticFields *v41; // x8
  struct UnityEngine_GameObject_o *mCurrentSelection; // x1
  const MethodInfo *v43; // x3
  int32_t v44; // w2
  int32_t v45; // w3
  System_String_o *v46; // x4
  int32_t v47; // w5
  int64_t v48; // x6
  System_String_o *v49; // x7
  int32_t Direction_49441412; // w21
  const MethodInfo *v51; // x2
  int32_t Direction; // w0
  int v53; // w20
  _BOOL4 inputHasFocus; // w20
  const MethodInfo *v55; // x4
  const MethodInfo *v56; // x1
  System_String_o *verticalAxisName; // x22
  System_String_o *horizontalAxisName; // x22
  UICamera_c *v59; // x0
  uint32_t cctor_finished; // w9
  struct UICamera_StaticFields *v61; // x8
  unsigned int v62; // w21
  struct UICamera_KeyCodeDelegate_o *onKey; // x9
  UnityEngine_GameObject_o *v64; // x22
  Il2CppObject *v65; // x0
  const MethodInfo *v66; // x3
  UICamera_c *v67; // x0
  uint32_t v68; // w9
  struct UICamera_StaticFields *v69; // x8
  unsigned int v70; // w20
  struct UICamera_KeyCodeDelegate_o *v71; // x9
  UnityEngine_GameObject_o *v72; // x21
  Il2CppObject *v73; // x0
  const MethodInfo *v74; // x3
  __int64 v75; // x8
  UICamera_c *v76; // x0
  struct UICamera_StaticFields *v77; // x8
  struct UICamera_KeyCodeDelegate_o *v78; // x9
  UnityEngine_GameObject_o *v79; // x20
  Il2CppObject *v80; // x0
  const MethodInfo *v81; // x3
  __int64 v82; // x8
  UICamera_c *v83; // x0
  int32_t cancelKey0; // w20
  struct UICamera_StaticFields *v85; // x8
  struct UICamera_KeyCodeDelegate_o *v86; // x9
  UnityEngine_GameObject_o *v87; // x20
  Il2CppObject *v88; // x0
  const MethodInfo *v89; // x3
  __int64 v90; // x8
  UICamera_c *v91; // x0
  int32_t cancelKey1; // w19
  struct UICamera_StaticFields *v93; // x8
  struct UICamera_KeyCodeDelegate_o *v94; // x9
  UnityEngine_GameObject_o *v95; // x19
  Il2CppObject *v96; // x0
  const MethodInfo *v97; // x3
  UICamera_c *v98; // x0
  GrandQuestFolderBoardItem_o *v99; // x0
  int v100; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4CCBA0E & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_KeyCode_TypeInfo);
    sub_1C713B0(&UICamera_TypeInfo);
    sub_1C713B0(&StringLiteral_9920/*"OnKey"*/);
    byte_4CCBA0E = 1;
  }
  v9 = UICamera_TypeInfo;
  if ( !UICamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    v9 = UICamera_TypeInfo;
  }
  static_fields = v9->static_fields;
  controller = static_fields->controller;
  static_fields->currentTouch = controller;
  static_fields = (struct UICamera_StaticFields *)((char *)static_fields + 160);
  HIDWORD(static_fields[-1].GetInputTouchCount) = -100;
  sub_1C71354((GrandQuestFolderBoardItem_o *)static_fields, (int32_t)controller, v2, v3, v4, v5, v6, v7);
  if ( !this->fields.submitKey0 )
    goto LABEL_13;
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
          (unsigned int)this->fields.submitKey0,
          *(_QWORD *)(v20 + 40))
      & 1) != 0 )
  {
    v21 = UICamera_TypeInfo;
    submitKey0 = this->fields.submitKey0;
    if ( !UICamera_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
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
    if ( !UICamera_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
      currentTouch = (char *)UICamera_TypeInfo;
    }
    v24 = *(_QWORD *)(*((_QWORD *)currentTouch + 23) + 8LL);
    if ( !v24 )
      goto LABEL_142;
    if ( ((*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(v24 + 24))(
            *(_QWORD *)(v24 + 64),
            (unsigned int)this->fields.submitKey1,
            *(_QWORD *)(v24 + 40))
        & 1) != 0 )
    {
      v25 = UICamera_TypeInfo;
      submitKey1 = this->fields.submitKey1;
      if ( !UICamera_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
        v25 = UICamera_TypeInfo;
      }
      v25->static_fields->currentKey = submitKey1;
      v23 = 1;
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
  v27 = *(_QWORD *)(*((_QWORD *)currentTouch + 23) + 16LL);
  if ( !v27 )
    goto LABEL_142;
  if ( ((*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(v27 + 24))(
          *(_QWORD *)(v27 + 64),
          (unsigned int)this->fields.submitKey0,
          *(_QWORD *)(v27 + 40))
      & 1) != 0 )
  {
    v28 = UICamera_TypeInfo;
    v29 = this->fields.submitKey0;
    if ( !UICamera_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
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
  if ( !UICamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    currentTouch = (char *)UICamera_TypeInfo;
  }
  v31 = *(_QWORD *)(*((_QWORD *)currentTouch + 23) + 16LL);
  if ( !v31 )
    goto LABEL_142;
  if ( ((*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(v31 + 24))(
          *(_QWORD *)(v31 + 64),
          (unsigned int)this->fields.submitKey1,
          *(_QWORD *)(v31 + 40))
      & 1) != 0 )
  {
    v32 = UICamera_TypeInfo;
    v30 = this->fields.submitKey1;
    if ( !UICamera_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
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
  if ( !v32->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v32);
    v32 = UICamera_TypeInfo;
  }
  v33 = v32->static_fields;
  currentTouch = (char *)v33->currentTouch;
  v33->currentScheme = 2;
  if ( !currentTouch )
    goto LABEL_142;
  v34 = *((_QWORD *)currentTouch + 8);
  *((_QWORD *)currentTouch + 7) = v34;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(currentTouch + 56), v34, (int32_t)v13, v14, v15, v16, v17, v18);
  v41 = UICamera_TypeInfo->static_fields;
  currentTouch = (char *)v41->currentTouch;
  if ( !currentTouch )
    goto LABEL_142;
  mCurrentSelection = v41->mCurrentSelection;
  *((_QWORD *)currentTouch + 8) = mCurrentSelection;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)(currentTouch + 64),
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
    goto LABEL_142;
  *((_QWORD *)currentTouch + 7) = 0;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(currentTouch + 56), 0, v44, v45, v46, v47, v48, v49);
LABEL_47:
  if ( !this->fields.useKeyboard )
  {
    v53 = 0;
    Direction_49441412 = 0;
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
    Direction_49441412 = UICamera__GetDirection_49441412(119, 273, 115, 274, (const MethodInfo *)v15);
    Direction = UICamera__GetDirection_49441412(100, 275, 97, 276, v55);
    goto LABEL_55;
  }
  if ( !UICamera_TypeInfo->static_fields->inputHasFocus )
    goto LABEL_54;
LABEL_50:
  Direction_49441412 = UICamera__GetDirection(273, 274, v13);
  Direction = UICamera__GetDirection(275, 276, v51);
LABEL_55:
  v53 = Direction;
LABEL_56:
  if ( this->fields.useController )
  {
    if ( !System_String__IsNullOrEmpty(this->fields.verticalAxisName, 0) )
    {
      verticalAxisName = this->fields.verticalAxisName;
      if ( !UICamera_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
      Direction_49441412 += UICamera__GetDirection_49441748(verticalAxisName, v56);
    }
    if ( !System_String__IsNullOrEmpty(this->fields.horizontalAxisName, 0) )
    {
      horizontalAxisName = this->fields.horizontalAxisName;
      if ( !UICamera_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
      v53 += UICamera__GetDirection_49441748(horizontalAxisName, v12);
    }
  }
  if ( Direction_49441412 )
  {
    v59 = UICamera_TypeInfo;
    cctor_finished = UICamera_TypeInfo->_2.cctor_finished;
    if ( !cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
      v59 = UICamera_TypeInfo;
      cctor_finished = UICamera_TypeInfo->_2.cctor_finished;
    }
    v61 = v59->static_fields;
    if ( Direction_49441412 > 0 )
      v62 = 273;
    else
      v62 = 274;
    v61->currentScheme = 2;
    if ( !cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v59);
      v59 = UICamera_TypeInfo;
      v61 = UICamera_TypeInfo->static_fields;
    }
    onKey = v61->onKey;
    if ( onKey )
    {
      if ( !v59->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v59);
        v61 = UICamera_TypeInfo->static_fields;
        onKey = v61->onKey;
        if ( !onKey )
          goto LABEL_142;
      }
      ((void (__fastcall *)(intptr_t, struct UnityEngine_GameObject_o *, _QWORD, intptr_t))onKey->fields.invoke_impl)(
        onKey->fields.method_code,
        v61->mCurrentSelection,
        v62,
        onKey->fields.method);
      v59 = UICamera_TypeInfo;
    }
    if ( !v59->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v59);
      v59 = UICamera_TypeInfo;
    }
    v64 = v59->static_fields->mCurrentSelection;
    v100 = v62;
    v65 = (Il2CppObject *)j_il2cpp_value_box_0(UnityEngine_KeyCode_TypeInfo, &v100);
    UICamera__Notify(v64, (System_String_o *)StringLiteral_9920/*"OnKey"*/, v65, v66);
  }
  if ( v53 )
  {
    v67 = UICamera_TypeInfo;
    v68 = UICamera_TypeInfo->_2.cctor_finished;
    if ( !v68 )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
      v67 = UICamera_TypeInfo;
      v68 = UICamera_TypeInfo->_2.cctor_finished;
    }
    v69 = v67->static_fields;
    if ( v53 > 0 )
      v70 = 275;
    else
      v70 = 276;
    v69->currentScheme = 2;
    if ( !v68 )
    {
      j_il2cpp_runtime_class_init_0(v67);
      v67 = UICamera_TypeInfo;
      v69 = UICamera_TypeInfo->static_fields;
    }
    v71 = v69->onKey;
    if ( v71 )
    {
      if ( !v67->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v67);
        v69 = UICamera_TypeInfo->static_fields;
        v71 = v69->onKey;
        if ( !v71 )
          goto LABEL_142;
      }
      ((void (__fastcall *)(intptr_t, struct UnityEngine_GameObject_o *, _QWORD, intptr_t))v71->fields.invoke_impl)(
        v71->fields.method_code,
        v69->mCurrentSelection,
        v70,
        v71->fields.method);
      v67 = UICamera_TypeInfo;
    }
    if ( !v67->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v67);
      v67 = UICamera_TypeInfo;
    }
    v72 = v67->static_fields->mCurrentSelection;
    v100 = v70;
    v73 = (Il2CppObject *)j_il2cpp_value_box_0(UnityEngine_KeyCode_TypeInfo, &v100);
    UICamera__Notify(v72, (System_String_o *)StringLiteral_9920/*"OnKey"*/, v73, v74);
  }
  if ( this->fields.useKeyboard )
  {
    currentTouch = (char *)UICamera_TypeInfo;
    if ( !UICamera_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
      currentTouch = (char *)UICamera_TypeInfo;
    }
    v75 = *(_QWORD *)(*((_QWORD *)currentTouch + 23) + 8LL);
    if ( !v75 )
      goto LABEL_142;
    if ( ((*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(v75 + 24))(
            *(_QWORD *)(v75 + 64),
            9,
            *(_QWORD *)(v75 + 40))
        & 1) != 0 )
    {
      v76 = UICamera_TypeInfo;
      if ( !UICamera_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
        v76 = UICamera_TypeInfo;
      }
      v77 = v76->static_fields;
      v78 = v77->onKey;
      v77->currentKey = 9;
      v77->currentScheme = 2;
      if ( v78 )
      {
        if ( !v76->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v76);
          v77 = UICamera_TypeInfo->static_fields;
          v78 = v77->onKey;
          if ( !v78 )
            goto LABEL_142;
        }
        ((void (__fastcall *)(intptr_t, struct UnityEngine_GameObject_o *, __int64, intptr_t))v78->fields.invoke_impl)(
          v78->fields.method_code,
          v77->mCurrentSelection,
          9,
          v78->fields.method);
        v76 = UICamera_TypeInfo;
      }
      if ( !v76->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v76);
        v76 = UICamera_TypeInfo;
      }
      v79 = v76->static_fields->mCurrentSelection;
      v100 = 9;
      v80 = (Il2CppObject *)j_il2cpp_value_box_0(UnityEngine_KeyCode_TypeInfo, &v100);
      UICamera__Notify(v79, (System_String_o *)StringLiteral_9920/*"OnKey"*/, v80, v81);
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
    v82 = *(_QWORD *)(*((_QWORD *)currentTouch + 23) + 8LL);
    if ( !v82 )
      goto LABEL_142;
    if ( ((*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(v82 + 24))(
            *(_QWORD *)(v82 + 64),
            (unsigned int)this->fields.cancelKey0,
            *(_QWORD *)(v82 + 40))
        & 1) != 0 )
    {
      v83 = UICamera_TypeInfo;
      cancelKey0 = this->fields.cancelKey0;
      if ( !UICamera_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
        v83 = UICamera_TypeInfo;
      }
      v85 = v83->static_fields;
      v86 = v85->onKey;
      v85->currentKey = cancelKey0;
      v85->currentScheme = 2;
      if ( v86 )
      {
        if ( !v83->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v83);
          v85 = UICamera_TypeInfo->static_fields;
          v86 = v85->onKey;
          if ( !v86 )
            goto LABEL_142;
        }
        ((void (__fastcall *)(intptr_t, struct UnityEngine_GameObject_o *, __int64, intptr_t))v86->fields.invoke_impl)(
          v86->fields.method_code,
          v85->mCurrentSelection,
          27,
          v86->fields.method);
        v83 = UICamera_TypeInfo;
      }
      if ( !v83->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v83);
        v83 = UICamera_TypeInfo;
      }
      v87 = v83->static_fields->mCurrentSelection;
      v100 = 27;
      v88 = (Il2CppObject *)j_il2cpp_value_box_0(UnityEngine_KeyCode_TypeInfo, &v100);
      UICamera__Notify(v87, (System_String_o *)StringLiteral_9920/*"OnKey"*/, v88, v89);
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
  v90 = *(_QWORD *)(*((_QWORD *)currentTouch + 23) + 8LL);
  if ( !v90 )
LABEL_142:
    sub_1C71608(currentTouch, v12);
  if ( ((*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(v90 + 24))(
          *(_QWORD *)(v90 + 64),
          (unsigned int)this->fields.cancelKey1,
          *(_QWORD *)(v90 + 40))
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
  v96 = (Il2CppObject *)j_il2cpp_value_box_0(UnityEngine_KeyCode_TypeInfo, &v100);
  UICamera__Notify(v95, (System_String_o *)StringLiteral_9920/*"OnKey"*/, v96, v97);
LABEL_137:
  v98 = UICamera_TypeInfo;
  if ( !UICamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    v98 = UICamera_TypeInfo;
  }
  v99 = (GrandQuestFolderBoardItem_o *)v98->static_fields;
  v99[1].klass = 0;
  sub_1C71354(v99 + 1, 0, (int32_t)v13, v14, v15, v16, v17, v18);
  UICamera_TypeInfo->static_fields->currentKey = 0;
}


// local variable allocation has failed, the output may be wrong!
void UICamera__ProcessPress(UICamera_o *this, bool pressed, float click, float drag, const MethodInfo *method)
{
  UnityEngine_Object_o *mTooltip; // x20
  const MethodInfo *v10; // x2
  __int64 v11; // x0
  __int64 v12; // x9
  struct UICamera_MouseOrTouch_o *currentTouch; // x8
  UnityEngine_Object_o *v14; // x20
  __int64 v15; // x9
  __int64 v16; // x8
  __int64 v17; // x9
  __int64 v18; // x8
  UnityEngine_GameObject_o *v19; // x20
  Il2CppObject *v20; // x0
  const MethodInfo *v21; // x3
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  __int64 v28; // x1
  int32_t v29; // w2
  int32_t v30; // w3
  System_String_o *v31; // x4
  int32_t v32; // w5
  int64_t v33; // x6
  System_String_o *v34; // x7
  __int64 v35; // x1
  struct UICamera_MouseOrTouch_o *v36; // x20
  __int64 v37; // x9
  struct UICamera_MouseOrTouch_o *v38; // x8
  UnityEngine_Object_o *v39; // x20
  __int64 v40; // x9
  __int64 v41; // x8
  __int64 v42; // x9
  UnityEngine_Vector2_o *v43; // x8
  struct UICamera_MouseOrTouch_o *v44; // x8
  UnityEngine_GameObject_o *v45; // x20
  Il2CppObject *v46; // x0
  const MethodInfo *v47; // x3
  UnityEngine_Object_o *v48; // x20
  const MethodInfo *v49; // x2
  __int64 v50; // x8
  __int64 v51; // x8
  UnityEngine_Object_o *v52; // x20
  UICamera_c *v53; // x8
  struct UICamera_MouseOrTouch_o *v54; // x9
  UnityEngine_Object_o *last; // x20
  UnityEngine_Object_o *current; // x21
  float32x2_t *v57; // x9
  struct UICamera_MouseOrTouch_o *v58; // x9
  float v59; // s10
  UnityEngine_Object_o *v60; // x20
  UnityEngine_Object_o *v61; // x21
  const MethodInfo *v62; // x3
  struct UICamera_MouseOrTouch_o *v63; // x9
  struct UnityEngine_Vector2_o v64; // x10
  struct UICamera_StaticFields *static_fields; // x10
  struct UICamera_VoidDelegate_o *onDragStart; // x9
  struct UICamera_MouseOrTouch_o *v67; // x8
  struct UICamera_MouseOrTouch_o *v68; // x8
  const MethodInfo *v69; // x3
  struct UICamera_StaticFields *v70; // x9
  struct UICamera_ObjectDelegate_o *onDragOver; // x8
  struct UICamera_MouseOrTouch_o *v72; // x9
  __int64 v73; // x8
  int v74; // w25
  struct UICamera_MouseOrTouch_o *v75; // x9
  struct UnityEngine_Vector2_o totalDelta; // x10
  struct UICamera_MouseOrTouch_o *v77; // x8
  UnityEngine_Object_o *v78; // x20
  const MethodInfo *v79; // x2
  __int64 v80; // x9
  struct UICamera_MouseOrTouch_o *v81; // x8
  _BOOL4 v82; // w21
  const MethodInfo *v83; // x3
  _BOOL4 v84; // w24
  struct UICamera_StaticFields *v85; // x9
  struct UICamera_VoidDelegate_o *v86; // x8
  struct UICamera_MouseOrTouch_o *v87; // x9
  __int64 v88; // x8
  const MethodInfo *v89; // x3
  struct UICamera_StaticFields *v90; // x9
  struct UICamera_ObjectDelegate_o *v91; // x8
  struct UICamera_MouseOrTouch_o *v92; // x9
  __int64 v93; // x8
  struct UICamera_MouseOrTouch_o *v94; // x8
  UnityEngine_Object_o *v95; // x19
  UnityEngine_Object_o *v96; // x20
  const MethodInfo *v97; // x3
  struct UICamera_StaticFields *v98; // x9
  struct UICamera_VoidDelegate_o *v99; // x8
  struct UICamera_MouseOrTouch_o *v100; // x9
  __int64 v101; // x8
  struct UICamera_StaticFields *v102; // x9
  struct UICamera_ObjectDelegate_o *v103; // x8
  struct UICamera_MouseOrTouch_o *v104; // x9
  struct UICamera_StaticFields *v105; // x9
  struct UICamera_VectorDelegate_o *onDrag; // x8
  struct UICamera_MouseOrTouch_o *v107; // x9
  __int64 v108; // x8
  UnityEngine_GameObject_o *v109; // x19
  Il2CppObject *v110; // x0
  const MethodInfo *v111; // x3
  int32_t v112; // w2
  int32_t v113; // w3
  System_String_o *v114; // x4
  int32_t v115; // w5
  int64_t v116; // x6
  System_String_o *v117; // x7
  __int64 v118; // x1
  struct UICamera_StaticFields *v119; // x8
  struct UICamera_MouseOrTouch_o *v120; // x8
  __int64 v121; // [xsp+8h] [xbp-68h] BYREF
  char v122[4]; // [xsp+18h] [xbp-58h] BYREF
  char v123[4]; // [xsp+1Ch] [xbp-54h] BYREF

  if ( (byte_4CCBA0F & 1) == 0 )
  {
    sub_1C713B0(&bool_TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&UICamera_TypeInfo);
    sub_1C713B0(&UnityEngine_Vector2_TypeInfo);
    sub_1C713B0(&StringLiteral_9896/*"OnDragStart"*/);
    sub_1C713B0(&StringLiteral_9892/*"OnDrag"*/);
    sub_1C713B0(&StringLiteral_9946/*"OnPress"*/);
    sub_1C713B0(&StringLiteral_9894/*"OnDragOut"*/);
    sub_1C713B0(&StringLiteral_9895/*"OnDragOver"*/);
    byte_4CCBA0F = 1;
  }
  if ( pressed )
  {
    mTooltip = (UnityEngine_Object_o *)this->fields.mTooltip;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(mTooltip, 0, 0) )
      UICamera__ShowTooltip(this, 0, v10);
    v11 = (__int64)UICamera_TypeInfo;
    if ( !UICamera_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
      v11 = (__int64)UICamera_TypeInfo;
    }
    v12 = *(_QWORD *)(v11 + 184);
    currentTouch = *(struct UICamera_MouseOrTouch_o **)(v12 + 160);
    if ( currentTouch )
    {
      currentTouch->fields.pressStarted = 1;
      if ( *(_QWORD *)(v12 + 216) )
      {
        if ( !*(_DWORD *)(v11 + 224) )
        {
          j_il2cpp_runtime_class_init_0(v11);
          currentTouch = UICamera_TypeInfo->static_fields->currentTouch;
          if ( !currentTouch )
            goto LABEL_196;
        }
        v14 = (UnityEngine_Object_o *)currentTouch->fields.pressed;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Implicit(v14, 0) )
        {
          v11 = (__int64)UICamera_TypeInfo;
          if ( !UICamera_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
            v11 = (__int64)UICamera_TypeInfo;
          }
          v15 = *(_QWORD *)(v11 + 184);
          v16 = *(_QWORD *)(v15 + 160);
          if ( !v16 )
            goto LABEL_196;
          v17 = *(_QWORD *)(v15 + 216);
          if ( !v17 )
            goto LABEL_196;
          (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(v17 + 24))(
            *(_QWORD *)(v17 + 64),
            *(_QWORD *)(v16 + 72),
            0,
            *(_QWORD *)(v17 + 40));
        }
      }
      v11 = (__int64)UICamera_TypeInfo;
      if ( !UICamera_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
        v11 = (__int64)UICamera_TypeInfo;
      }
      v18 = *(_QWORD *)(*(_QWORD *)(v11 + 184) + 160LL);
      if ( v18 )
      {
        v19 = *(UnityEngine_GameObject_o **)(v18 + 72);
        v123[0] = 0;
        v20 = (Il2CppObject *)j_il2cpp_value_box_0(bool_TypeInfo, v123);
        UICamera__Notify(v19, (System_String_o *)StringLiteral_9946/*"OnPress"*/, v20, v21);
        v11 = (__int64)UICamera_TypeInfo->static_fields->currentTouch;
        if ( v11 )
        {
          v28 = *(_QWORD *)(v11 + 64);
          *(_QWORD *)(v11 + 72) = v28;
          sub_1C71354((GrandQuestFolderBoardItem_o *)(v11 + 72), v28, v22, v23, v24, v25, v26, v27);
          v11 = (__int64)UICamera_TypeInfo->static_fields->currentTouch;
          if ( v11 )
          {
            v35 = *(_QWORD *)(v11 + 64);
            *(_QWORD *)(v11 + 80) = v35;
            sub_1C71354((GrandQuestFolderBoardItem_o *)(v11 + 80), v35, v29, v30, v31, v32, v33, v34);
            v11 = (__int64)UICamera_TypeInfo;
            v36 = UICamera_TypeInfo->static_fields->currentTouch;
            if ( v36 )
            {
              v36->fields.clickNotification = 2;
              if ( !byte_4CC0BE9 )
              {
                sub_1C713B0(&UnityEngine_Vector2_TypeInfo);
                v11 = (__int64)UICamera_TypeInfo;
                byte_4CC0BE9 = 1;
              }
              v36->fields.totalDelta = UnityEngine_Vector2_TypeInfo->static_fields->zeroVector;
              v37 = *(_QWORD *)(v11 + 184);
              v38 = *(struct UICamera_MouseOrTouch_o **)(v37 + 160);
              if ( v38 )
              {
                v38->fields.dragStarted = 0;
                if ( *(_QWORD *)(v37 + 216) )
                {
                  if ( !*(_DWORD *)(v11 + 224) )
                  {
                    j_il2cpp_runtime_class_init_0(v11);
                    v38 = UICamera_TypeInfo->static_fields->currentTouch;
                    if ( !v38 )
                      goto LABEL_196;
                  }
                  v39 = (UnityEngine_Object_o *)v38->fields.pressed;
                  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                  if ( UnityEngine_Object__op_Implicit(v39, 0) )
                  {
                    v11 = (__int64)UICamera_TypeInfo;
                    if ( !UICamera_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
                      v11 = (__int64)UICamera_TypeInfo;
                    }
                    v40 = *(_QWORD *)(v11 + 184);
                    v41 = *(_QWORD *)(v40 + 160);
                    if ( !v41 )
                      goto LABEL_196;
                    v42 = *(_QWORD *)(v40 + 216);
                    if ( !v42 )
                      goto LABEL_196;
                    (*(void (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD))(v42 + 24))(
                      *(_QWORD *)(v42 + 64),
                      *(_QWORD *)(v41 + 72),
                      1,
                      *(_QWORD *)(v42 + 40));
                  }
                }
                v11 = (__int64)UICamera_TypeInfo;
                if ( !UICamera_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
                  v11 = (__int64)UICamera_TypeInfo;
                }
                v43 = *(UnityEngine_Vector2_o **)(*(_QWORD *)(v11 + 184) + 160LL);
                if ( v43 )
                {
                  NguiTouchEffectManager__Press(v43[2], (const MethodInfo *)v11);
                  v44 = UICamera_TypeInfo->static_fields->currentTouch;
                  if ( v44 )
                  {
                    v45 = v44->fields.pressed;
                    v122[0] = 1;
                    v46 = (Il2CppObject *)j_il2cpp_value_box_0(bool_TypeInfo, v122);
                    UICamera__Notify(v45, (System_String_o *)StringLiteral_9946/*"OnPress"*/, v46, v47);
                    v48 = (UnityEngine_Object_o *)this->fields.mTooltip;
                    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                    if ( UnityEngine_Object__op_Inequality(v48, 0, 0) )
                      UICamera__ShowTooltip(this, 0, v49);
                    v11 = (__int64)UICamera_TypeInfo;
                    if ( !UICamera_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
                      v11 = (__int64)UICamera_TypeInfo;
                    }
                    v50 = *(_QWORD *)(*(_QWORD *)(v11 + 184) + 160LL);
                    if ( v50 )
                    {
                      UICamera__set_selectedObject(
                        *(UnityEngine_GameObject_o **)(v50 + 72),
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
    sub_1C71608(v11, pressed);
  }
  v11 = (__int64)UICamera_TypeInfo;
  if ( !UICamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    v11 = (__int64)UICamera_TypeInfo;
  }
  v51 = *(_QWORD *)(*(_QWORD *)(v11 + 184) + 160LL);
  if ( !v51 )
    goto LABEL_196;
  v52 = *(UnityEngine_Object_o **)(v51 + 72);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v11 = UnityEngine_Object__op_Inequality(v52, 0, 0);
  if ( (v11 & 1) != 0 )
  {
    v53 = UICamera_TypeInfo;
    if ( !UICamera_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
      v53 = UICamera_TypeInfo;
    }
    v54 = v53->static_fields->currentTouch;
    if ( !v54 )
      goto LABEL_196;
    if ( (float)((float)(v54->fields.delta.fields.x * v54->fields.delta.fields.x)
               + (float)(v54->fields.delta.fields.y * v54->fields.delta.fields.y)) == 0.0 )
    {
      if ( !v53->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v53);
        v54 = UICamera_TypeInfo->static_fields->currentTouch;
        if ( !v54 )
          goto LABEL_196;
      }
      last = (UnityEngine_Object_o *)v54->fields.last;
      current = (UnityEngine_Object_o *)v54->fields.current;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v11 = UnityEngine_Object__op_Inequality(current, last, 0);
      if ( (v11 & 1) == 0 )
        return;
      v53 = UICamera_TypeInfo;
    }
    if ( !v53->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v53);
      v53 = UICamera_TypeInfo;
    }
    v57 = (float32x2_t *)v53->static_fields->currentTouch;
    if ( !v57 )
      goto LABEL_196;
    v57[5].n64_u64[0] = vadd_f32(v57[5], v57[4]).n64_u64[0];
    v58 = v53->static_fields->currentTouch;
    if ( !v58 )
      goto LABEL_196;
    v59 = (float)(v58->fields.totalDelta.fields.x * v58->fields.totalDelta.fields.x)
        + (float)(v58->fields.totalDelta.fields.y * v58->fields.totalDelta.fields.y);
    if ( v58->fields.dragStarted )
      goto LABEL_199;
    if ( !v53->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v53);
      v58 = UICamera_TypeInfo->static_fields->currentTouch;
      if ( !v58 )
        goto LABEL_196;
    }
    v61 = (UnityEngine_Object_o *)v58->fields.last;
    v60 = (UnityEngine_Object_o *)v58->fields.current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v11 = UnityEngine_Object__op_Inequality(v61, v60, 0);
    v53 = UICamera_TypeInfo;
    if ( (v11 & 1) == 0 )
    {
LABEL_199:
      if ( !v53->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v53);
        v53 = UICamera_TypeInfo;
      }
      v75 = v53->static_fields->currentTouch;
      if ( !v75 )
        goto LABEL_196;
      v74 = 0;
      if ( v59 > drag && !v75->fields.dragStarted )
      {
        if ( !v53->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v53);
          v53 = UICamera_TypeInfo;
          v75 = UICamera_TypeInfo->static_fields->currentTouch;
          if ( !v75 )
            goto LABEL_196;
        }
        totalDelta = v75->fields.totalDelta;
        v74 = 1;
        v75->fields.dragStarted = 1;
        v75->fields.delta = totalDelta;
      }
    }
    else
    {
      if ( !UICamera_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
        v53 = UICamera_TypeInfo;
      }
      v63 = v53->static_fields->currentTouch;
      if ( !v63 )
        goto LABEL_196;
      v64 = v63->fields.totalDelta;
      v63->fields.dragStarted = 1;
      v63->fields.delta = v64;
      static_fields = v53->static_fields;
      onDragStart = static_fields->onDragStart;
      static_fields->isDragging = 1;
      if ( onDragStart )
      {
        if ( !v53->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v53);
          static_fields = UICamera_TypeInfo->static_fields;
          onDragStart = static_fields->onDragStart;
        }
        v67 = static_fields->currentTouch;
        if ( !v67 || !onDragStart )
          goto LABEL_196;
        v11 = ((__int64 (__fastcall *)(intptr_t, struct UnityEngine_GameObject_o *, intptr_t))onDragStart->fields.invoke_impl)(
                onDragStart->fields.method_code,
                v67->fields.dragged,
                onDragStart->fields.method);
        v53 = UICamera_TypeInfo;
      }
      if ( !v53->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v53);
        v53 = UICamera_TypeInfo;
      }
      v68 = v53->static_fields->currentTouch;
      if ( !v68 )
        goto LABEL_196;
      UICamera__Notify(v68->fields.dragged, (System_String_o *)StringLiteral_9896/*"OnDragStart"*/, 0, v62);
      v11 = (__int64)UICamera_TypeInfo;
      v70 = UICamera_TypeInfo->static_fields;
      onDragOver = v70->onDragOver;
      if ( onDragOver )
      {
        if ( !UICamera_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
          v70 = UICamera_TypeInfo->static_fields;
          onDragOver = v70->onDragOver;
        }
        v72 = v70->currentTouch;
        if ( !v72 || !onDragOver )
          goto LABEL_196;
        ((void (__fastcall *)(intptr_t, struct UnityEngine_GameObject_o *, struct UnityEngine_GameObject_o *, intptr_t))onDragOver->fields.invoke_impl)(
          onDragOver->fields.method_code,
          v72->fields.last,
          v72->fields.dragged,
          onDragOver->fields.method);
        v11 = (__int64)UICamera_TypeInfo;
      }
      if ( !*(_DWORD *)(v11 + 224) )
      {
        j_il2cpp_runtime_class_init_0(v11);
        v11 = (__int64)UICamera_TypeInfo;
      }
      v73 = *(_QWORD *)(*(_QWORD *)(v11 + 184) + 160LL);
      if ( !v73 )
        goto LABEL_196;
      UICamera__Notify(
        *(UnityEngine_GameObject_o **)(v73 + 56),
        (System_String_o *)StringLiteral_9895/*"OnDragOver"*/,
        *(Il2CppObject **)(v73 + 80),
        v69);
      v53 = UICamera_TypeInfo;
      v74 = 0;
      UICamera_TypeInfo->static_fields->isDragging = 0;
    }
    if ( !v53->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v53);
      v53 = UICamera_TypeInfo;
    }
    v77 = v53->static_fields->currentTouch;
    if ( !v77 )
      goto LABEL_196;
    if ( v77->fields.dragStarted )
    {
      v78 = (UnityEngine_Object_o *)this->fields.mTooltip;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v78, 0, 0) )
        UICamera__ShowTooltip(this, 0, v79);
      v11 = (__int64)UICamera_TypeInfo;
      if ( !UICamera_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
        v11 = (__int64)UICamera_TypeInfo;
      }
      v80 = *(_QWORD *)(v11 + 184);
      v81 = *(struct UICamera_MouseOrTouch_o **)(v80 + 160);
      *(_BYTE *)(v80 + 368) = 1;
      if ( !v81 )
        goto LABEL_196;
      v82 = v81->fields.clickNotification == 0;
      if ( !*(_DWORD *)(v11 + 224) )
      {
        j_il2cpp_runtime_class_init_0(v11);
        v81 = UICamera_TypeInfo->static_fields->currentTouch;
        if ( !v81 )
          goto LABEL_196;
      }
      NguiTouchEffectManager__Drag(v81->fields.delta, (const MethodInfo *)v11);
      v11 = (__int64)UICamera_TypeInfo;
      if ( v74 )
        v84 = 0;
      else
        v84 = v82;
      if ( !UICamera_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
        v11 = (__int64)UICamera_TypeInfo;
      }
      v85 = *(struct UICamera_StaticFields **)(v11 + 184);
      if ( v74 )
      {
        v86 = v85->onDragStart;
        if ( v86 )
        {
          if ( !*(_DWORD *)(v11 + 224) )
          {
            j_il2cpp_runtime_class_init_0(v11);
            v85 = UICamera_TypeInfo->static_fields;
            v86 = v85->onDragStart;
          }
          v87 = v85->currentTouch;
          if ( !v87 || !v86 )
            goto LABEL_196;
          ((void (__fastcall *)(intptr_t, struct UnityEngine_GameObject_o *, intptr_t))v86->fields.invoke_impl)(
            v86->fields.method_code,
            v87->fields.dragged,
            v86->fields.method);
          v11 = (__int64)UICamera_TypeInfo;
        }
        if ( !*(_DWORD *)(v11 + 224) )
        {
          j_il2cpp_runtime_class_init_0(v11);
          v11 = (__int64)UICamera_TypeInfo;
        }
        v88 = *(_QWORD *)(*(_QWORD *)(v11 + 184) + 160LL);
        if ( !v88 )
          goto LABEL_196;
        UICamera__Notify(*(UnityEngine_GameObject_o **)(v88 + 80), (System_String_o *)StringLiteral_9896/*"OnDragStart"*/, 0, v83);
        v11 = (__int64)UICamera_TypeInfo;
        v90 = UICamera_TypeInfo->static_fields;
        v91 = v90->onDragOver;
        if ( v91 )
        {
          if ( !UICamera_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
            v90 = UICamera_TypeInfo->static_fields;
            v91 = v90->onDragOver;
          }
          v92 = v90->currentTouch;
          if ( !v92 || !v91 )
            goto LABEL_196;
          ((void (__fastcall *)(intptr_t, struct UnityEngine_GameObject_o *, struct UnityEngine_GameObject_o *, intptr_t))v91->fields.invoke_impl)(
            v91->fields.method_code,
            v92->fields.last,
            v92->fields.dragged,
            v91->fields.method);
          v11 = (__int64)UICamera_TypeInfo;
        }
        if ( !*(_DWORD *)(v11 + 224) )
        {
          j_il2cpp_runtime_class_init_0(v11);
          v11 = (__int64)UICamera_TypeInfo;
        }
        v93 = *(_QWORD *)(*(_QWORD *)(v11 + 184) + 160LL);
        if ( !v93 )
          goto LABEL_196;
      }
      else
      {
        v94 = v85->currentTouch;
        if ( !v94 )
          goto LABEL_196;
        v96 = (UnityEngine_Object_o *)v94->fields.last;
        v95 = (UnityEngine_Object_o *)v94->fields.current;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( !UnityEngine_Object__op_Inequality(v96, v95, 0) )
          goto LABEL_174;
        v11 = (__int64)UICamera_TypeInfo;
        if ( !UICamera_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
          v11 = (__int64)UICamera_TypeInfo;
        }
        v98 = *(struct UICamera_StaticFields **)(v11 + 184);
        v99 = v98->onDragStart;
        if ( v99 )
        {
          if ( !*(_DWORD *)(v11 + 224) )
          {
            j_il2cpp_runtime_class_init_0(v11);
            v98 = UICamera_TypeInfo->static_fields;
            v99 = v98->onDragStart;
          }
          v100 = v98->currentTouch;
          if ( !v100 || !v99 )
            goto LABEL_196;
          ((void (__fastcall *)(intptr_t, struct UnityEngine_GameObject_o *, intptr_t))v99->fields.invoke_impl)(
            v99->fields.method_code,
            v100->fields.dragged,
            v99->fields.method);
          v11 = (__int64)UICamera_TypeInfo;
        }
        if ( !*(_DWORD *)(v11 + 224) )
        {
          j_il2cpp_runtime_class_init_0(v11);
          v11 = (__int64)UICamera_TypeInfo;
        }
        v101 = *(_QWORD *)(*(_QWORD *)(v11 + 184) + 160LL);
        if ( !v101 )
          goto LABEL_196;
        UICamera__Notify(
          *(UnityEngine_GameObject_o **)(v101 + 56),
          (System_String_o *)StringLiteral_9894/*"OnDragOut"*/,
          *(Il2CppObject **)(v101 + 80),
          v97);
        v11 = (__int64)UICamera_TypeInfo;
        v102 = UICamera_TypeInfo->static_fields;
        v103 = v102->onDragOver;
        if ( v103 )
        {
          if ( !UICamera_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
            v102 = UICamera_TypeInfo->static_fields;
            v103 = v102->onDragOver;
          }
          v104 = v102->currentTouch;
          if ( !v104 || !v103 )
            goto LABEL_196;
          ((void (__fastcall *)(intptr_t, struct UnityEngine_GameObject_o *, struct UnityEngine_GameObject_o *, intptr_t))v103->fields.invoke_impl)(
            v103->fields.method_code,
            v104->fields.last,
            v104->fields.dragged,
            v103->fields.method);
          v11 = (__int64)UICamera_TypeInfo;
        }
        if ( !*(_DWORD *)(v11 + 224) )
        {
          j_il2cpp_runtime_class_init_0(v11);
          v11 = (__int64)UICamera_TypeInfo;
        }
        v93 = *(_QWORD *)(*(_QWORD *)(v11 + 184) + 160LL);
        if ( !v93 )
          goto LABEL_196;
        v82 = v84;
      }
      UICamera__Notify(
        *(UnityEngine_GameObject_o **)(v93 + 64),
        (System_String_o *)StringLiteral_9895/*"OnDragOver"*/,
        *(Il2CppObject **)(v93 + 80),
        v89);
LABEL_174:
      v11 = (__int64)UICamera_TypeInfo;
      if ( !UICamera_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
        v11 = (__int64)UICamera_TypeInfo;
      }
      v105 = *(struct UICamera_StaticFields **)(v11 + 184);
      onDrag = v105->onDrag;
      if ( onDrag )
      {
        if ( !*(_DWORD *)(v11 + 224) )
        {
          j_il2cpp_runtime_class_init_0(v11);
          v105 = UICamera_TypeInfo->static_fields;
          onDrag = v105->onDrag;
        }
        v107 = v105->currentTouch;
        if ( !v107 || !onDrag )
          goto LABEL_196;
        ((void (__fastcall *)(intptr_t, struct UnityEngine_GameObject_o *, intptr_t, float, float))onDrag->fields.invoke_impl)(
          onDrag->fields.method_code,
          v107->fields.dragged,
          onDrag->fields.method,
          v107->fields.delta.fields.x,
          v107->fields.delta.fields.y);
        v11 = (__int64)UICamera_TypeInfo;
      }
      if ( !*(_DWORD *)(v11 + 224) )
      {
        j_il2cpp_runtime_class_init_0(v11);
        v11 = (__int64)UICamera_TypeInfo;
      }
      v108 = *(_QWORD *)(*(_QWORD *)(v11 + 184) + 160LL);
      if ( !v108 )
        goto LABEL_196;
      v109 = *(UnityEngine_GameObject_o **)(v108 + 80);
      v121 = *(_QWORD *)(v108 + 32);
      v110 = (Il2CppObject *)j_il2cpp_value_box_0(UnityEngine_Vector2_TypeInfo, &v121);
      UICamera__Notify(v109, (System_String_o *)StringLiteral_9892/*"OnDrag"*/, v110, v111);
      v11 = (__int64)UICamera_TypeInfo->static_fields->currentTouch;
      if ( !v11 )
        goto LABEL_196;
      v118 = *(_QWORD *)(v11 + 64);
      *(_QWORD *)(v11 + 56) = v118;
      sub_1C71354((GrandQuestFolderBoardItem_o *)(v11 + 56), v118, v112, v113, v114, v115, v116, v117);
      v11 = (__int64)UICamera_TypeInfo;
      v119 = UICamera_TypeInfo->static_fields;
      v119->isDragging = 0;
      if ( !*(_DWORD *)(v11 + 224) )
      {
        j_il2cpp_runtime_class_init_0(v11);
        v11 = (__int64)UICamera_TypeInfo;
        v119 = UICamera_TypeInfo->static_fields;
      }
      v120 = v119->currentTouch;
      if ( !v120 )
        goto LABEL_196;
      if ( v82 )
        goto LABEL_190;
      if ( v59 > click && v120->fields.clickNotification == 2 )
      {
        if ( !*(_DWORD *)(v11 + 224) )
        {
          j_il2cpp_runtime_class_init_0(v11);
          v120 = UICamera_TypeInfo->static_fields->currentTouch;
          if ( !v120 )
            goto LABEL_196;
        }
LABEL_190:
        v120->fields.clickNotification = 0;
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
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
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
  int32_t v38; // w2
  int32_t v39; // w3
  System_String_o *v40; // x4
  int32_t v41; // w5
  int64_t v42; // x6
  System_String_o *v43; // x7
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
  int32_t v84; // w3
  System_String_o *v85; // x4
  int32_t v86; // w5
  int64_t v87; // x6
  System_String_o *v88; // x7
  char v89[4]; // [xsp+8h] [xbp-38h] BYREF
  _BYTE v90[4]; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4CCBA10 & 1) == 0 )
  {
    sub_1C713B0(&bool_TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&UICamera_TypeInfo);
    sub_1C713B0(&StringLiteral_9893/*"OnDragEnd"*/);
    sub_1C713B0(&StringLiteral_9839/*"OnClick"*/);
    sub_1C713B0(&StringLiteral_9890/*"OnDoubleClick"*/);
    sub_1C713B0(&StringLiteral_9897/*"OnDrop"*/);
    sub_1C713B0(&StringLiteral_9915/*"OnHover"*/);
    sub_1C713B0(&StringLiteral_9946/*"OnPress"*/);
    sub_1C713B0(&StringLiteral_9894/*"OnDragOut"*/);
    byte_4CCBA10 = 1;
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
              (System_String_o *)StringLiteral_9894/*"OnDragOut"*/,
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
            UICamera__Notify(*(UnityEngine_GameObject_o **)(v30 + 80), (System_String_o *)StringLiteral_9893/*"OnDragEnd"*/, 0, v26);
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
          v90[0] = 0;
          v36 = (Il2CppObject *)j_il2cpp_value_box_0(bool_TypeInfo, v90);
          UICamera__Notify(v35, (System_String_o *)StringLiteral_9946/*"OnPress"*/, v36, v37);
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
            v89[0] = 1;
            v49 = (Il2CppObject *)j_il2cpp_value_box_0(bool_TypeInfo, v89);
            UICamera__Notify(v48, (System_String_o *)StringLiteral_9915/*"OnHover"*/, v49, v50);
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
          sub_1C71354((GrandQuestFolderBoardItem_o *)(v51 + 328), v53, v38, v39, v40, v41, v42, v43);
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
                  (System_String_o *)StringLiteral_9839/*"OnClick"*/,
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
                    (System_String_o *)StringLiteral_9890/*"OnDoubleClick"*/,
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
                (System_String_o *)StringLiteral_9897/*"OnDrop"*/,
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
          sub_1C71354((GrandQuestFolderBoardItem_o *)v82, 0, v15, (int32_t)v16, v17, v18, v19, v20);
          v9 = (__int64)UICamera_TypeInfo->static_fields->currentTouch;
          if ( v9 )
          {
            *(_QWORD *)(v9 + 80) = 0;
            sub_1C71354((GrandQuestFolderBoardItem_o *)(v9 + 80), 0, v83, v84, v85, v86, v87, v88);
            return;
          }
        }
      }
    }
LABEL_145:
    sub_1C71608(v9, v8);
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

  if ( (byte_4CCBA11 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&UICamera_TypeInfo);
    byte_4CCBA11 = 1;
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
    sub_1C71608(v7, pressed);
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
  GrandQuestFolderBoardItem_o *v23; // x8
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  struct UICamera_MouseOrTouch_o *currentTouch; // x8
  int touchBegan; // w29
  struct UICamera_MouseOrTouch_o *v32; // x26
  struct UnityEngine_Vector2_StaticFields *v33; // x8
  float v34; // s0
  float v35; // s1
  struct UICamera_MouseOrTouch_o *v36; // x8
  struct UICamera_MouseOrTouch_o *v37; // x8
  struct UICamera_MouseOrTouch_o *v38; // x8
  int32_t v39; // w2
  int32_t v40; // w3
  System_String_o *v41; // x4
  int32_t v42; // w5
  int64_t v43; // x6
  System_String_o *v44; // x7
  UICamera_c *v45; // x0
  struct UICamera_StaticFields *v46; // x8
  struct UnityEngine_GameObject_o *fallThrough; // x1
  UICamera_c *v48; // x0
  UnityEngine_Object_o *hoveredObject; // x26
  int32_t v50; // w2
  int32_t v51; // w3
  System_String_o *v52; // x4
  int32_t v53; // w5
  int64_t v54; // x6
  System_String_o *v55; // x7
  UICamera_c *v56; // x0
  struct UICamera_StaticFields *v57; // x8
  struct UnityEngine_GameObject_o *mGenericHandler; // x1
  UICamera_c *v59; // x0
  Il2CppClass *element_class; // x1
  int32_t v61; // w2
  int32_t v62; // w3
  System_String_o *v63; // x4
  int32_t v64; // w5
  int64_t v65; // x6
  System_String_o *v66; // x7
  struct UICamera_StaticFields *v67; // x8
  Il2CppClass *v68; // x1
  int32_t v69; // w2
  const MethodInfo *v70; // x3
  System_String_o *v71; // x4
  int32_t v72; // w5
  int64_t v73; // x6
  System_String_o *v74; // x7
  struct UICamera_StaticFields *v75; // x8
  struct UICamera_MouseOrTouch_o *v76; // x9
  struct UICamera_StaticFields *v77; // x8
  struct UnityEngine_Camera_o *currentCamera; // x1
  GrandQuestFolderBoardItem_o *p_this_arg; // x0
  UnityEngine_Object_o *castClass; // x26
  UICamera_c *v81; // x0
  Il2CppClass **nestedTypes; // x8
  UICamera_c *v83; // x0
  struct UICamera_MouseOrTouch_o *v84; // x25
  float time; // s0
  unsigned int v86; // w24
  int32_t v87; // w2
  int32_t v88; // w3
  System_String_o *v89; // x4
  int32_t v90; // w5
  int64_t v91; // x6
  System_String_o *v92; // x7
  UICamera_c *v93; // x0
  UICamera_c *v94; // x0
  GrandQuestFolderBoardItem_o *v95; // x0
  int32_t v96; // w2
  int32_t v97; // w3
  System_String_o *v98; // x4
  int32_t v99; // w5
  int64_t v100; // x6
  System_String_o *v101; // x7
  UICamera_c *v102; // x0
  struct UICamera_StaticFields *v103; // x8
  UnityEngine_Touch_o src; // [xsp+8h] [xbp-108h] BYREF
  UnityEngine_Touch_o dest; // [xsp+50h] [xbp-C0h] BYREF
  UnityEngine_Vector3_o v106; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4CCBA0C & 1) == 0 )
  {
    sub_1C713B0(&CTouch_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&UICamera_TypeInfo);
    byte_4CCBA0C = 1;
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
        sub_1C71608(ignoreFingerIDList, v7);
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
      if ( !byte_4CC3C8F )
      {
        sub_1C713B0(&CTouch_TypeInfo);
        byte_4CC3C8F = 1;
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
              (const MethodInfo_37F3A6C *)Method_System_Collections_Generic_List_int__Contains__) )
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
    v23 = (GrandQuestFolderBoardItem_o *)UICamera_TypeInfo->static_fields;
    v23[1].klass = (GrandQuestFolderBoardItem_c *)Touch;
    sub_1C71354(v23 + 1, (int32_t)Touch, v24, v25, v26, v27, v28, v29);
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
    v32 = ignoreFingerIDList->static_fields->currentTouch;
    if ( !v32 )
      goto LABEL_109;
    v32->fields.touchBegan = 0;
    if ( touchBegan )
    {
      if ( !byte_4CC0BE9 )
      {
        sub_1C713B0(&UnityEngine_Vector2_TypeInfo);
        ignoreFingerIDList = UICamera_TypeInfo;
        byte_4CC0BE9 = 1;
      }
      v33 = UnityEngine_Vector2_TypeInfo->static_fields;
      v34 = v33->zeroVector.fields.x;
      v35 = v33->zeroVector.fields.y;
    }
    else
    {
      if ( ignoreFingerIDList->_2.cctor_finished )
      {
        v36 = v32;
      }
      else
      {
        j_il2cpp_runtime_class_init_0(ignoreFingerIDList);
        ignoreFingerIDList = UICamera_TypeInfo;
        v36 = UICamera_TypeInfo->static_fields->currentTouch;
        if ( !v36 )
          goto LABEL_109;
      }
      v34 = x - v36->fields.pos.fields.x;
      v35 = y - v36->fields.pos.fields.y;
    }
    v32->fields.delta.fields.x = v34;
    v32->fields.delta.fields.y = v35;
    if ( !ignoreFingerIDList->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ignoreFingerIDList);
      ignoreFingerIDList = UICamera_TypeInfo;
    }
    v37 = ignoreFingerIDList->static_fields->currentTouch;
    if ( !v37 )
      goto LABEL_109;
    v37->fields.pos.fields.x = x;
    v37->fields.pos.fields.y = y;
    v38 = ignoreFingerIDList->static_fields->currentTouch;
    if ( !v38 )
      goto LABEL_109;
    v106.fields.x = v38->fields.pos.fields.x;
    v106.fields.y = v38->fields.pos.fields.y;
    v106.fields.z = 0.0;
    if ( !UICamera__Raycast(v106, (const MethodInfo *)ignoreFingerIDList) )
    {
      v45 = UICamera_TypeInfo;
      if ( !UICamera_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
        v45 = UICamera_TypeInfo;
      }
      v46 = v45->static_fields;
      fallThrough = v46->fallThrough;
      v46->hoveredObject = fallThrough;
      sub_1C71354(
        (GrandQuestFolderBoardItem_o *)&v46->hoveredObject,
        (int32_t)fallThrough,
        v39,
        v40,
        v41,
        v42,
        v43,
        v44);
    }
    v48 = UICamera_TypeInfo;
    if ( !UICamera_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
      v48 = UICamera_TypeInfo;
    }
    hoveredObject = (UnityEngine_Object_o *)v48->static_fields->hoveredObject;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(hoveredObject, 0, 0) )
    {
      v56 = UICamera_TypeInfo;
      if ( !UICamera_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
        v56 = UICamera_TypeInfo;
      }
      v57 = v56->static_fields;
      mGenericHandler = v57->mGenericHandler;
      v57->hoveredObject = mGenericHandler;
      sub_1C71354(
        (GrandQuestFolderBoardItem_o *)&v57->hoveredObject,
        (int32_t)mGenericHandler,
        v50,
        v51,
        v52,
        v53,
        v54,
        v55);
    }
    v59 = UICamera_TypeInfo;
    if ( !UICamera_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
      v59 = UICamera_TypeInfo;
    }
    ignoreFingerIDList = (UICamera_c *)v59->static_fields->currentTouch;
    if ( !ignoreFingerIDList )
      goto LABEL_109;
    element_class = ignoreFingerIDList->_1.element_class;
    *(_QWORD *)&ignoreFingerIDList->_1.this_arg.bits = element_class;
    sub_1C71354(
      (GrandQuestFolderBoardItem_o *)&ignoreFingerIDList->_1.this_arg.bits,
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
      goto LABEL_109;
    v68 = (Il2CppClass *)v67->hoveredObject;
    ignoreFingerIDList->_1.element_class = v68;
    sub_1C71354(
      (GrandQuestFolderBoardItem_o *)&ignoreFingerIDList->_1.element_class,
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
      goto LABEL_109;
    v75->lastTouchPosition = v76->fields.pos;
    if ( !ignoreFingerIDList->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ignoreFingerIDList);
      ignoreFingerIDList = UICamera_TypeInfo;
    }
    v77 = ignoreFingerIDList->static_fields;
    ignoreFingerIDList = (UICamera_c *)v77->currentTouch;
    if ( touchBegan )
    {
      if ( !ignoreFingerIDList )
        goto LABEL_109;
      currentCamera = v77->currentCamera;
      ignoreFingerIDList->_1.this_arg.data = currentCamera;
      p_this_arg = (GrandQuestFolderBoardItem_o *)&ignoreFingerIDList->_1.this_arg;
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
      v81 = UICamera_TypeInfo;
      if ( !UICamera_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
        v81 = UICamera_TypeInfo;
      }
      ignoreFingerIDList = (UICamera_c *)v81->static_fields;
      nestedTypes = ignoreFingerIDList->_1.nestedTypes;
      if ( !nestedTypes )
        goto LABEL_109;
      currentCamera = (struct UnityEngine_Camera_o *)nestedTypes[6];
      ignoreFingerIDList->_1.events = currentCamera;
      p_this_arg = (GrandQuestFolderBoardItem_o *)&ignoreFingerIDList->_1.events;
    }
    sub_1C71354(p_this_arg, (int32_t)currentCamera, v69, (int32_t)v70, v71, v72, v73, v74);
LABEL_84:
    if ( data >= 2 )
    {
      v83 = UICamera_TypeInfo;
      if ( !UICamera_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
        v83 = UICamera_TypeInfo;
      }
      v84 = v83->static_fields->currentTouch;
      time = RealTime__get_time(0);
      if ( !v84 )
        goto LABEL_109;
      v84->fields.clickTime = time;
    }
    v86 = name_high - 3;
    UICamera__ProcessTouch(this, touchBegan != 0, v86 < 2, v70);
    if ( v86 <= 1 )
    {
      v93 = UICamera_TypeInfo;
      if ( !UICamera_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
        v93 = UICamera_TypeInfo;
      }
      UICamera__RemoveTouch(v93->static_fields->currentTouchID, v7);
    }
    v94 = UICamera_TypeInfo;
    if ( !UICamera_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
      v94 = UICamera_TypeInfo;
    }
    ignoreFingerIDList = (UICamera_c *)v94->static_fields->currentTouch;
    if ( !ignoreFingerIDList )
      goto LABEL_109;
    *(_QWORD *)&ignoreFingerIDList->_1.this_arg.bits = 0;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&ignoreFingerIDList->_1.this_arg.bits, 0, v87, v88, v89, v90, v91, v92);
    v95 = (GrandQuestFolderBoardItem_o *)UICamera_TypeInfo->static_fields;
    v95[1].klass = 0;
    sub_1C71354(v95 + 1, 0, v96, v97, v98, v99, v100, v101);
    if ( !this->fields.allowMultiTouch )
      goto LABEL_98;
    goto LABEL_97;
  }
LABEL_98:
  v102 = UICamera_TypeInfo;
  if ( !UICamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    v102 = UICamera_TypeInfo;
  }
  v103 = v102->static_fields;
  if ( v10 )
  {
    v103->mUsingTouchEvents = 1;
  }
  else if ( v103->mUsingTouchEvents )
  {
    if ( !v102->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v102);
      v103 = UICamera_TypeInfo->static_fields;
    }
    v103->mUsingTouchEvents = 0;
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
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  UICamera_c *v18; // x8
  UnityEngine_Camera_o *v19; // x21
  struct UICamera_StaticFields *static_fields; // x0
  UICamera_c *v21; // x0
  UICamera_c *v22; // x0
  int32_t cullingMask; // w21
  UnityEngine_LayerMask_o v24; // w0
  int32_t v25; // w0
  float v26; // s11
  int32_t v27; // w22
  UICamera_c *v28; // x0
  float farClipPlane; // s0
  int32_t v30; // w21
  __int64 v31; // x8
  __int64 v32; // x20
  __int128 *v33; // x21
  UnityEngine_GameObject_o *v34; // x22
  UnityEngine_Object_o *v35; // x23
  void *v36; // x22
  UICamera_c *v37; // x0
  float *v38; // x8
  float v39; // s7
  float v40; // s13
  __int64 v41; // kr10_8
  __int64 v42; // kr18_8
  float v43; // s9
  float v44; // s8
  float v45; // s14
  float v46; // s16
  float v47; // s0
  float v48; // s2
  float v49; // s1
  float v50; // s0
  float v51; // s11
  float v52; // s12
  float v53; // s13
  UnityEngine_Object_o *v54; // x21
  UICamera_c *v55; // x0
  float *v56; // x8
  float v57; // s7
  float v58; // s13
  __int64 v59; // kr28_8
  __int64 v60; // kr30_8
  float v61; // s9
  float v62; // s8
  float v63; // s14
  float v64; // s16
  float v65; // s0
  float v66; // s2
  float v67; // s1
  float v68; // s0
  UICamera_c *v69; // x0
  float v70; // s11
  float v71; // s12
  float v72; // s13
  float *v73; // x8
  struct UICamera_StaticFields *v74; // x9
  float v75; // s11
  float v76; // s12
  int v77; // w8
  __int64 v78; // x20
  UnityEngine_GameObject_o *v79; // x20
  UnityEngine_Object_o *v80; // x21
  void *v81; // x21
  UICamera_c *v82; // x0
  unsigned __int64 v83; // x26
  __int64 v84; // x21
  UnityEngine_GameObject_o *v85; // x22
  UnityEngine_Object_o *Component_object; // x23
  void *monitor; // x23
  Il2CppObject *v88; // x23
  UICamera_c *v89; // x8
  __int128 v90; // q1
  __int128 v91; // q2
  struct UICamera_StaticFields *v92; // x8
  UnityEngine_GameObject_o *v93; // x1
  GrandQuestFolderBoardItem_o *p_go; // x0
  int32_t v95; // w2
  int32_t v96; // w3
  System_String_o *v97; // x4
  int32_t v98; // w5
  int64_t v99; // x6
  System_String_o *v100; // x7
  struct UICamera_StaticFields *v101; // x8
  BetterList_UICamera_DepthEntry__o *mHits; // x22
  const MethodInfo_3387178 *v103; // x23
  UICamera_c *v104; // x8
  BetterList_UICamera_DepthEntry__o *v105; // x20
  BetterList_CompareFunc_UICamera_DepthEntry__o *v106; // x21
  Il2CppObject *v107; // x22
  struct UICamera___c_StaticFields *v108; // x0
  int32_t v109; // w2
  int32_t v110; // w3
  System_String_o *v111; // x4
  int32_t v112; // w5
  int64_t v113; // x6
  System_String_o *v114; // x7
  unsigned __int64 v115; // x20
  __int64 i; // x21
  struct BetterList_UICamera_DepthEntry__o *v117; // x8
  signed __int64 size; // x22
  struct UICamera_DepthEntry_array *v119; // x8
  Il2CppObject *v120; // x22
  float v121; // s11
  float v122; // s12
  float v123; // s13
  const MethodInfo *v124; // x1
  UnityEngine_GameObject_o *v125; // x22
  __int64 v126; // x23
  UnityEngine_GameObject_o *v127; // x21
  UnityEngine_Object_o *v128; // x22
  void *v129; // x22
  UICamera_c *v130; // x0
  Il2CppObject *v131; // x22
  int32_t v132; // w2
  int32_t v133; // w3
  System_String_o *v134; // x4
  int32_t v135; // w5
  int64_t v136; // x6
  System_String_o *v137; // x7
  UICamera_c *v138; // x8
  struct UICamera_StaticFields *v139; // x9
  UICamera_c *v140; // x8
  struct UICamera_StaticFields *v141; // x9
  float v142; // w11
  struct UICamera_StaticFields *v143; // x8
  BetterList_UICamera_DepthEntry__o *v144; // x21
  const MethodInfo_3387178 *v145; // x22
  UICamera_c *v146; // x8
  BetterList_UICamera_DepthEntry__o *v147; // x20
  BetterList_CompareFunc_UICamera_DepthEntry__o *v148; // x21
  Il2CppObject *v149; // x22
  struct UICamera___c_StaticFields *v150; // x0
  int32_t v151; // w2
  int32_t v152; // w3
  System_String_o *v153; // x4
  int32_t v154; // w5
  int64_t v155; // x6
  System_String_o *v156; // x7
  unsigned __int64 v157; // x20
  __int64 v158; // x21
  signed __int64 v159; // x22
  struct UICamera_DepthEntry_array *v160; // x8
  Il2CppObject *v161; // x21
  UICamera_c *v162; // x0
  int32_t v163; // w2
  int32_t v164; // w3
  System_String_o *v165; // x4
  int32_t v166; // w5
  int64_t v167; // x6
  System_String_o *v168; // x7
  UICamera_c *v169; // x0
  UnityEngine_GameObject_o *v170; // x1
  GrandQuestFolderBoardItem_o *v171; // x0
  UICamera_c *v173; // x0
  UICamera_c *v174; // x8
  __int128 v175; // q1
  __int128 v176; // q2
  struct UICamera_StaticFields *v177; // x9
  int32_t go; // w1
  GrandQuestFolderBoardItem_o *v179; // x0
  int32_t v180; // w2
  int32_t v181; // w3
  System_String_o *v182; // x4
  int32_t v183; // w5
  int64_t v184; // x6
  System_String_o *v185; // x7
  UICamera_c *v186; // x8
  __int64 v187; // x11
  struct UICamera_StaticFields *v188; // x10
  UICamera_c *v189; // x0
  int32_t v190; // w1
  GrandQuestFolderBoardItem_o *v191; // x0
  int32_t v192; // w2
  int32_t v193; // w3
  System_String_o *v194; // x4
  int32_t v195; // w5
  int64_t v196; // x6
  System_String_o *v197; // x7
  UICamera_c *v198; // x0
  UICamera_c *v199; // x8
  UnityEngine_GameObject_o *v200; // x1
  GrandQuestFolderBoardItem_o *p_hoveredObject; // x0
  int32_t v202; // w2
  int32_t v203; // w3
  System_String_o *v204; // x4
  int32_t v205; // w5
  int64_t v206; // x6
  System_String_o *v207; // x7
  UICamera_c *v208; // x0
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v210; // x1
  UnityEngine_Object_o *RootRigidbody; // x0
  float *v212; // x8
  UnityEngine_GameObject_o *v213; // x1
  GrandQuestFolderBoardItem_o *v214; // x0
  int32_t v215; // w2
  int32_t v216; // w3
  System_String_o *v217; // x4
  int32_t v218; // w5
  int64_t v219; // x6
  System_String_o *v220; // x7
  UICamera_c *v221; // x0
  UnityEngine_Transform_o *v222; // x0
  const MethodInfo *v223; // x1
  UnityEngine_Object_o *v224; // x19
  UnityEngine_GameObject_o *v225; // x0
  UICamera_c *v226; // x8
  GrandQuestFolderBoardItem_c *v227; // x19
  __int128 v228; // q1
  __int128 v229; // q2
  _OWORD *v230; // x8
  __int128 v231; // q1
  __int128 v232; // q2
  UICamera_c *v233; // x8
  float v234; // [xsp+14h] [xbp-1FCh]
  float v235; // [xsp+14h] [xbp-1FCh]
  float v236; // [xsp+18h] [xbp-1F8h]
  float v237; // [xsp+18h] [xbp-1F8h]
  float x; // [xsp+28h] [xbp-1E8h]
  float y; // [xsp+2Ch] [xbp-1E4h]
  UICamera_DepthEntry_o src; // [xsp+30h] [xbp-1E0h] BYREF
  UICamera_DepthEntry_o dest; // [xsp+78h] [xbp-198h] BYREF
  UnityEngine_Ray_o v242; // [xsp+C0h] [xbp-150h] BYREF
  UnityEngine_Ray_o v243; // [xsp+E0h] [xbp-130h] BYREF
  UnityEngine_Ray_o v244; // [xsp+100h] [xbp-110h] BYREF
  UICamera_DepthEntry_o v245; // [xsp+120h] [xbp-F0h] BYREF
  UnityEngine_Vector2_o v246; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v247; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o v248; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v249; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v250; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v251; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED
  UnityEngine_Vector3_o v252; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v253; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v254; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED
  UnityEngine_Vector3_o v255; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v256; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o point; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v258; // 0:s0.4,4:s1.4,8:s2.4

  z = inPos.fields.z;
  x = inPos.fields.x;
  y = inPos.fields.y;
  if ( (byte_4CCB9F9 & 1) == 0 )
  {
    sub_1C713B0(&Method_BetterList_UICamera_DepthEntry__Add__);
    sub_1C713B0(&Method_BetterList_UICamera_DepthEntry__Clear__);
    sub_1C713B0(&Method_BetterList_UICamera_DepthEntry__Sort__);
    sub_1C713B0(&Method_BetterList_UICamera_DepthEntry__get_Item__);
    sub_1C713B0(&Method_BetterList_UICamera__get_Item__);
    sub_1C713B0(&BetterList_CompareFunc_UICamera_DepthEntry__TypeInfo);
    sub_1C713B0(&Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    sub_1C713B0(&Method_NGUITools_FindInParents_UIRect___);
    sub_1C713B0(&NGUITools_TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&UnityEngine_Physics2D_TypeInfo);
    sub_1C713B0(&UnityEngine_Physics_TypeInfo);
    sub_1C713B0(&Method_UICamera___c__Raycast_b__125_0__);
    sub_1C713B0(&Method_UICamera___c__Raycast_b__125_1__);
    sub_1C713B0(&UICamera___c_TypeInfo);
    sub_1C713B0(&UICamera_TypeInfo);
    byte_4CCB9F9 = 1;
  }
  v4 = 0;
  memset(&v244, 0, sizeof(v244));
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
    if ( !NGUITools__GetActive_49712152(gameObject, 0) )
      goto LABEL_25;
    cachedCamera = UICamera__get_cachedCamera((UICamera_o *)v9, v2);
    v18 = UICamera_TypeInfo;
    v19 = cachedCamera;
    if ( !UICamera_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
      v18 = UICamera_TypeInfo;
    }
    static_fields = v18->static_fields;
    static_fields->currentCamera = v19;
    sub_1C71354(
      (GrandQuestFolderBoardItem_o *)&static_fields->currentCamera,
      (int32_t)v19,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
    currentCamera = (__int64)UICamera_TypeInfo->static_fields->currentCamera;
    if ( !currentCamera )
      goto LABEL_284;
    if ( !UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)currentCamera, 0) )
      goto LABEL_25;
    v21 = UICamera_TypeInfo;
    if ( !UICamera_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
      v21 = UICamera_TypeInfo;
    }
    currentCamera = (__int64)v21->static_fields->currentCamera;
    if ( !currentCamera )
      goto LABEL_284;
    v248.fields.x = x;
    v248.fields.y = y;
    v248.fields.z = z;
    v249 = UnityEngine_Camera__ScreenToViewportPoint((UnityEngine_Camera_o *)currentCamera, v248, 0);
    if ( (LODWORD(v249.fields.x) & 0x7FFFFFFFu) > 0x7F800000
      || v249.fields.y > 1.0
      || v249.fields.y < 0.0
      || v249.fields.x > 1.0
      || v249.fields.x < 0.0
      || (LODWORD(v249.fields.y) & 0x7FFFFFFFu) > 0x7F800000 )
    {
      goto LABEL_25;
    }
    v22 = UICamera_TypeInfo;
    if ( !UICamera_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
      v22 = UICamera_TypeInfo;
    }
    currentCamera = (__int64)v22->static_fields->currentCamera;
    if ( !currentCamera )
      goto LABEL_284;
    v250.fields.x = x;
    v250.fields.y = y;
    v250.fields.z = z;
    UnityEngine_Camera__ScreenPointToRay_71529668(
      (UnityEngine_Ray_o *)&v245,
      (UnityEngine_Camera_o *)currentCamera,
      v250,
      0);
    *(_OWORD *)&v244.fields.m_Origin.fields.x = *(_OWORD *)&v245.fields.depth;
    *(_QWORD *)&v244.fields.m_Direction.fields.y = *(_QWORD *)&v245.fields.hit.fields.m_Normal.fields.x;
    currentCamera = (__int64)UICamera_TypeInfo->static_fields->currentCamera;
    if ( !currentCamera )
      goto LABEL_284;
    cullingMask = UnityEngine_Camera__get_cullingMask((UnityEngine_Camera_o *)currentCamera, 0);
    v24.fields.m_Mask = *(&v9->_1.byval_arg.bits + 1);
    v25 = UnityEngine_LayerMask__op_Implicit(v24, 0);
    v26 = *((float *)&v9->_1.castClass + 1);
    v27 = v25;
    if ( v26 <= 0.0 )
    {
      v28 = UICamera_TypeInfo;
      if ( !UICamera_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
        v28 = UICamera_TypeInfo;
      }
      currentCamera = (__int64)v28->static_fields->currentCamera;
      if ( !currentCamera )
        goto LABEL_284;
      farClipPlane = UnityEngine_Camera__get_farClipPlane((UnityEngine_Camera_o *)currentCamera, 0);
      currentCamera = (__int64)UICamera_TypeInfo->static_fields->currentCamera;
      if ( !currentCamera )
        goto LABEL_284;
      v26 = farClipPlane - UnityEngine_Camera__get_nearClipPlane((UnityEngine_Camera_o *)currentCamera, 0);
    }
    v30 = v27 & cullingMask;
    switch ( HIDWORD(v9->_1.byval_arg.data) )
    {
      case 0:
        *(_OWORD *)&v245.fields.depth = *(_OWORD *)&v244.fields.m_Origin.fields.x;
        *(_QWORD *)&v245.fields.hit.fields.m_Normal.fields.x = *(_QWORD *)&v244.fields.m_Direction.fields.y;
        if ( !UICamera_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
        if ( !UnityEngine_Physics_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Physics_TypeInfo);
        *(_OWORD *)&v243.fields.m_Origin.fields.x = *(_OWORD *)&v245.fields.depth;
        *(_QWORD *)&v243.fields.m_Direction.fields.y = *(_QWORD *)&v245.fields.hit.fields.m_Normal.fields.x;
        if ( !UnityEngine_Physics__Raycast_72042916(&v243, &UICamera_TypeInfo->static_fields->lastHit, v26, v30, 0) )
          goto LABEL_25;
        v198 = UICamera_TypeInfo;
        if ( !UICamera_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
          v198 = UICamera_TypeInfo;
        }
        point = UnityEngine_RaycastHit__get_point(&v198->static_fields->lastHit, 0);
        v199 = UICamera_TypeInfo;
        UICamera_TypeInfo->static_fields->lastWorldPosition = point;
        currentCamera = (__int64)UnityEngine_RaycastHit__get_collider(&v199->static_fields->lastHit, 0);
        if ( !currentCamera )
          goto LABEL_284;
        v200 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)currentCamera, 0);
        p_hoveredObject = (GrandQuestFolderBoardItem_o *)&UICamera_TypeInfo->static_fields->hoveredObject;
        p_hoveredObject->klass = (GrandQuestFolderBoardItem_c *)v200;
        sub_1C71354(p_hoveredObject, (int32_t)v200, v202, v203, v204, v205, v206, v207);
        currentCamera = (__int64)UICamera_TypeInfo->static_fields->list;
        if ( !currentCamera )
          goto LABEL_284;
        currentCamera = (__int64)BetterList_object___get_Item(
                                   (BetterList_T__o *)currentCamera,
                                   0,
                                   (const MethodInfo_33814B8 *)Method_BetterList_UICamera__get_Item__);
        if ( !currentCamera )
          goto LABEL_284;
        if ( *(_BYTE *)(currentCamera + 40) )
          return 1;
        v208 = UICamera_TypeInfo;
        if ( !UICamera_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
          v208 = UICamera_TypeInfo;
        }
        currentCamera = (__int64)v208->static_fields->hoveredObject;
        if ( !currentCamera )
          goto LABEL_284;
        transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)currentCamera, 0);
        RootRigidbody = (UnityEngine_Object_o *)UICamera__FindRootRigidbody(transform, v210);
        goto LABEL_270;
      case 1:
        *(_OWORD *)&v245.fields.depth = *(_OWORD *)&v244.fields.m_Origin.fields.x;
        *(_QWORD *)&v245.fields.hit.fields.m_Normal.fields.x = *(_QWORD *)&v244.fields.m_Direction.fields.y;
        if ( !UnityEngine_Physics_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Physics_TypeInfo);
        *(_OWORD *)&v242.fields.m_Origin.fields.x = *(_OWORD *)&v245.fields.depth;
        *(_QWORD *)&v242.fields.m_Direction.fields.y = *(_QWORD *)&v245.fields.hit.fields.m_Normal.fields.x;
        currentCamera = (__int64)UnityEngine_Physics__RaycastAll_72045528(&v242, v26, v30, 0);
        if ( !currentCamera )
          goto LABEL_284;
        v31 = *(_QWORD *)(currentCamera + 24);
        v32 = currentCamera;
        if ( (int)v31 >= 2 )
        {
          v83 = 0;
          v84 = currentCamera + 32;
          while ( 1 )
          {
            if ( v83 >= (unsigned int)v31 )
              goto LABEL_285;
            currentCamera = (__int64)UnityEngine_RaycastHit__get_collider((UnityEngine_RaycastHit_o *)v84, 0);
            if ( !currentCamera )
              goto LABEL_284;
            currentCamera = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)currentCamera, 0);
            if ( !currentCamera )
              goto LABEL_284;
            v85 = (UnityEngine_GameObject_o *)currentCamera;
            Component_object = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_object_(
                                                         (UnityEngine_GameObject_o *)currentCamera,
                                                         (const MethodInfo_31A2ED0 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
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
                if ( v83 >= *(unsigned int *)(v32 + 24) )
                  goto LABEL_285;
                v254 = UnityEngine_RaycastHit__get_point((UnityEngine_RaycastHit_o *)v84, 0);
                currentCamera = (*((__int64 (__fastcall **)(_QWORD, _QWORD, long double, long double, long double))monitor
                                 + 3))(
                                  *((_QWORD *)monitor + 8),
                                  *((_QWORD *)monitor + 5),
                                  *(long double *)&v254.fields.x,
                                  *(long double *)&v254.fields.y,
                                  *(long double *)&v254.fields.z);
                if ( (currentCamera & 1) != 0 )
                  goto LABEL_125;
              }
            }
            else
            {
              if ( !NGUITools_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
              v88 = NGUITools__FindInParents_object_(
                      v85,
                      (const MethodInfo_31D5C14 *)Method_NGUITools_FindInParents_UIRect___);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              currentCamera = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v88, 0, 0);
              if ( (currentCamera & 1) == 0 )
                goto LABEL_125;
              if ( !v88 )
                goto LABEL_284;
              if ( *(float *)&v88[9].klass >= 0.001 )
              {
LABEL_125:
                if ( !UICamera_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
                if ( !NGUITools_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
                currentCamera = NGUITools__CalculateRaycastDepth(v85, 0);
                v89 = UICamera_TypeInfo;
                UICamera_TypeInfo->static_fields->mHit.fields.depth = currentCamera;
                if ( (_DWORD)currentCamera != 0x7FFFFFFF )
                {
                  if ( !v89->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(v89);
                  if ( v83 >= *(unsigned int *)(v32 + 24) )
                    goto LABEL_285;
                  v91 = *(_OWORD *)v84;
                  v90 = *(_OWORD *)(v84 + 16);
                  *(_OWORD *)&src.fields.hit.fields.m_FaceID = *(_OWORD *)(v84 + 28);
                  *(_OWORD *)&src.fields.depth = v91;
                  *(_OWORD *)&src.fields.hit.fields.m_Normal.fields.x = v90;
                  v92 = UICamera_TypeInfo->static_fields;
                  *(_OWORD *)&v92->mHit.fields.hit.fields.m_Distance = *(_OWORD *)&src.fields.hit.fields.m_FaceID;
                  *(_OWORD *)&v92->mHit.fields.hit.fields.m_Point.fields.x = v91;
                  *(_OWORD *)&v92->mHit.fields.hit.fields.m_Normal.fields.y = v90;
                  if ( v83 >= *(unsigned int *)(v32 + 24) )
                    goto LABEL_285;
                  UICamera_TypeInfo->static_fields->mHit.fields.point = UnityEngine_RaycastHit__get_point(
                                                                          (UnityEngine_RaycastHit_o *)v84,
                                                                          0);
                  if ( v83 >= *(unsigned int *)(v32 + 24) )
                    goto LABEL_285;
                  currentCamera = (__int64)UnityEngine_RaycastHit__get_collider((UnityEngine_RaycastHit_o *)v84, 0);
                  if ( !currentCamera )
                    goto LABEL_284;
                  v93 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)currentCamera, 0);
                  p_go = (GrandQuestFolderBoardItem_o *)&UICamera_TypeInfo->static_fields->mHit.fields.go;
                  p_go->klass = (GrandQuestFolderBoardItem_c *)v93;
                  sub_1C71354(p_go, (int32_t)v93, v95, v96, v97, v98, v99, v100);
                  v101 = UICamera_TypeInfo->static_fields;
                  mHits = v101->mHits;
                  currentCamera = (__int64)memcpy(&dest, &v101->mHit, sizeof(dest));
                  if ( !mHits )
                    goto LABEL_284;
                  v103 = (const MethodInfo_3387178 *)Method_BetterList_UICamera_DepthEntry__Add__;
                  memcpy(&v245, &dest, sizeof(v245));
                  BetterList_UICamera_DepthEntry___Add(mHits, &v245, v103);
                }
              }
            }
            LODWORD(v31) = *(_DWORD *)(v32 + 24);
            ++v83;
            v84 += 44;
            if ( (__int64)v83 >= (int)v31 )
            {
              v104 = UICamera_TypeInfo;
              if ( !UICamera_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
                v104 = UICamera_TypeInfo;
              }
              currentCamera = (__int64)UICamera___c_TypeInfo;
              v105 = v104->static_fields->mHits;
              if ( !UICamera___c_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UICamera___c_TypeInfo);
                currentCamera = (__int64)UICamera___c_TypeInfo;
              }
              v106 = *(BetterList_CompareFunc_UICamera_DepthEntry__o **)(*(_QWORD *)(currentCamera + 184) + 8LL);
              if ( !v106 )
              {
                if ( !*(_DWORD *)(currentCamera + 224) )
                {
                  j_il2cpp_runtime_class_init_0(currentCamera);
                  currentCamera = (__int64)UICamera___c_TypeInfo;
                }
                v107 = **(Il2CppObject ***)(currentCamera + 184);
                v106 = (BetterList_CompareFunc_UICamera_DepthEntry__o *)sub_1C715FC(BetterList_CompareFunc_UICamera_DepthEntry__TypeInfo);
                BetterList_CompareFunc_UICamera_DepthEntry____ctor(
                  v106,
                  v107,
                  Method_UICamera___c__Raycast_b__125_0__,
                  0);
                v108 = UICamera___c_TypeInfo->static_fields;
                v108->__9__125_0 = v106;
                sub_1C71354(
                  (GrandQuestFolderBoardItem_o *)&v108->__9__125_0,
                  (int32_t)v106,
                  v109,
                  v110,
                  v111,
                  v112,
                  v113,
                  v114);
              }
              if ( v105 )
              {
                BetterList_UICamera_DepthEntry___Sort(
                  v105,
                  (BetterList_CompareFunc_T__o *)v106,
                  (const MethodInfo_3387A44 *)Method_BetterList_UICamera_DepthEntry__Sort__);
                v115 = 0;
                for ( i = 32; ; i += 72 )
                {
                  currentCamera = (__int64)UICamera_TypeInfo;
                  if ( !UICamera_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
                    currentCamera = (__int64)UICamera_TypeInfo;
                  }
                  v117 = *(struct BetterList_UICamera_DepthEntry__o **)(*(_QWORD *)(currentCamera + 184) + 456LL);
                  if ( !v117 )
                    goto LABEL_284;
                  size = v117->fields.size;
                  if ( !*(_DWORD *)(currentCamera + 224) )
                  {
                    j_il2cpp_runtime_class_init_0(currentCamera);
                    v117 = UICamera_TypeInfo->static_fields->mHits;
                    if ( !v117 )
                      goto LABEL_284;
                  }
                  if ( (__int64)v115 >= size )
                    goto LABEL_224;
                  v119 = v117->fields.buffer;
                  if ( !v119 )
                    goto LABEL_284;
                  if ( v115 >= LODWORD(v119->max_length) )
                    goto LABEL_285;
                  if ( UICamera__IsVisible_49440288((UICamera_DepthEntry_o *)((char *)v119 + i), v2) )
                    break;
                  ++v115;
                }
                v173 = UICamera_TypeInfo;
                if ( !UICamera_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
                  v173 = UICamera_TypeInfo;
                }
                currentCamera = (__int64)v173->static_fields->mHits;
                if ( currentCamera )
                {
                  BetterList_UICamera_DepthEntry___get_Item(
                    &dest,
                    (BetterList_UICamera_DepthEntry__o *)currentCamera,
                    v115,
                    (const MethodInfo_3386EB0 *)Method_BetterList_UICamera_DepthEntry__get_Item__);
                  memcpy(&v245, &dest, sizeof(v245));
                  v174 = UICamera_TypeInfo;
                  v175 = *(_OWORD *)&v245.fields.hit.fields.m_Normal.fields.y;
                  v176 = *(_OWORD *)&v245.fields.hit.fields.m_Point.fields.x;
                  v177 = UICamera_TypeInfo->static_fields;
                  *(_OWORD *)&v177->lastHit.fields.m_Distance = *(_OWORD *)&v245.fields.hit.fields.m_Distance;
                  *(_OWORD *)&v177->lastHit.fields.m_Point.fields.x = v176;
                  *(_OWORD *)&v177->lastHit.fields.m_Normal.fields.y = v175;
                  currentCamera = (__int64)v174->static_fields->mHits;
                  if ( currentCamera )
                  {
                    BetterList_UICamera_DepthEntry___get_Item(
                      &dest,
                      (BetterList_UICamera_DepthEntry__o *)currentCamera,
                      v115,
                      (const MethodInfo_3386EB0 *)Method_BetterList_UICamera_DepthEntry__get_Item__);
                    go = (int32_t)dest.fields.go;
                    v179 = (GrandQuestFolderBoardItem_o *)&UICamera_TypeInfo->static_fields->hoveredObject;
                    v179->klass = (GrandQuestFolderBoardItem_c *)dest.fields.go;
                    sub_1C71354(v179, go, v180, v181, v182, v183, v184, v185);
                    currentCamera = (__int64)UICamera_TypeInfo->static_fields->mHits;
                    if ( currentCamera )
                    {
                      BetterList_UICamera_DepthEntry___get_Item(
                        &src,
                        (BetterList_UICamera_DepthEntry__o *)currentCamera,
                        v115,
                        (const MethodInfo_3386EB0 *)Method_BetterList_UICamera_DepthEntry__get_Item__);
                      memcpy(&dest, &src, sizeof(dest));
                      v186 = UICamera_TypeInfo;
                      v187 = *(_QWORD *)&dest.fields.point.fields.x;
                      v188 = UICamera_TypeInfo->static_fields;
                      v188->lastWorldPosition.fields.z = dest.fields.point.fields.z;
                      *(_QWORD *)&v188->lastWorldPosition.fields.x = v187;
                      goto LABEL_245;
                    }
                  }
                }
              }
              goto LABEL_284;
            }
          }
        }
        if ( (_DWORD)v31 != 1 )
          goto LABEL_25;
        v33 = (__int128 *)(currentCamera + 32);
        currentCamera = (__int64)UnityEngine_RaycastHit__get_collider(
                                   (UnityEngine_RaycastHit_o *)(currentCamera + 32),
                                   0);
        if ( !currentCamera )
          goto LABEL_284;
        currentCamera = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)currentCamera, 0);
        if ( !currentCamera )
          goto LABEL_284;
        v34 = (UnityEngine_GameObject_o *)currentCamera;
        v35 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_object_(
                                        (UnityEngine_GameObject_o *)currentCamera,
                                        (const MethodInfo_31A2ED0 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        currentCamera = UnityEngine_Object__op_Inequality(v35, 0, 0);
        if ( (currentCamera & 1) != 0 )
        {
          if ( !v35 )
            goto LABEL_284;
          currentCamera = UIWidget__get_isVisible((UIWidget_o *)v35, 0);
          if ( (currentCamera & 1) == 0 )
            goto LABEL_25;
          v36 = v35[9].monitor;
          if ( v36 )
          {
            if ( !*(_DWORD *)(v32 + 24) )
              goto LABEL_285;
            v251 = UnityEngine_RaycastHit__get_point((UnityEngine_RaycastHit_o *)(v32 + 32), 0);
            currentCamera = (*((__int64 (__fastcall **)(_QWORD, _QWORD, long double, long double, long double))v36 + 3))(
                              *((_QWORD *)v36 + 8),
                              *((_QWORD *)v36 + 5),
                              *(long double *)&v251.fields.x,
                              *(long double *)&v251.fields.y,
                              *(long double *)&v251.fields.z);
            if ( (currentCamera & 1) == 0 )
              goto LABEL_25;
          }
        }
        else
        {
          if ( !NGUITools_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
          v120 = NGUITools__FindInParents_object_(
                   v34,
                   (const MethodInfo_31D5C14 *)Method_NGUITools_FindInParents_UIRect___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          currentCamera = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v120, 0, 0);
          if ( (currentCamera & 1) != 0 )
          {
            if ( !v120 )
              goto LABEL_284;
            if ( *(float *)&v120[9].klass < 0.001 )
              goto LABEL_25;
          }
        }
        if ( !*(_DWORD *)(v32 + 24) )
          goto LABEL_285;
        v255 = UnityEngine_RaycastHit__get_point((UnityEngine_RaycastHit_o *)(v32 + 32), 0);
        if ( !*(_DWORD *)(v32 + 24) )
          goto LABEL_285;
        v121 = v255.fields.x;
        v122 = v255.fields.y;
        v123 = v255.fields.z;
        currentCamera = (__int64)UnityEngine_RaycastHit__get_collider((UnityEngine_RaycastHit_o *)(v32 + 32), 0);
        if ( !currentCamera )
          goto LABEL_284;
        v125 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)currentCamera, 0);
        if ( !UICamera_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
        v256.fields.x = v121;
        v256.fields.y = v122;
        v256.fields.z = v123;
        currentCamera = UICamera__IsVisible(v256, v125, v124);
        if ( (currentCamera & 1) != 0 )
        {
          if ( !*(_DWORD *)(v32 + 24) )
            goto LABEL_285;
          v229 = *v33;
          v228 = *(_OWORD *)(v32 + 48);
          currentCamera = (__int64)UICamera_TypeInfo;
          *(_OWORD *)&v245.fields.hit.fields.m_FaceID = *(_OWORD *)(v32 + 60);
          *(_OWORD *)&v245.fields.depth = v229;
          *(_OWORD *)&v245.fields.hit.fields.m_Normal.fields.x = v228;
          if ( !UICamera_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
            currentCamera = (__int64)UICamera_TypeInfo;
          }
          v230 = *(_OWORD **)(currentCamera + 184);
          v232 = *(_OWORD *)&v245.fields.depth;
          v231 = *(_OWORD *)&v245.fields.hit.fields.m_Normal.fields.x;
          *(_OWORD *)((char *)v230 + 108) = *(_OWORD *)&v245.fields.hit.fields.m_FaceID;
          v230[5] = v232;
          v230[6] = v231;
          if ( !*(_DWORD *)(v32 + 24) )
LABEL_285:
            sub_1C71610(currentCamera);
          v258 = UnityEngine_RaycastHit__get_point((UnityEngine_RaycastHit_o *)(v32 + 32), 0);
          v233 = UICamera_TypeInfo;
          UICamera_TypeInfo->static_fields->lastWorldPosition = v258;
          currentCamera = (__int64)UnityEngine_RaycastHit__get_collider(&v233->static_fields->lastHit, 0);
          if ( !currentCamera )
            goto LABEL_284;
          v170 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)currentCamera, 0);
          v171 = (GrandQuestFolderBoardItem_o *)&UICamera_TypeInfo->static_fields->hoveredObject;
          v171->klass = (GrandQuestFolderBoardItem_c *)v170;
LABEL_283:
          sub_1C71354(v171, (int32_t)v170, v163, v164, v165, v166, v167, v168);
          return 1;
        }
LABEL_25:
        ++v4;
        continue;
      case 2:
        v37 = UICamera_TypeInfo;
        if ( !UICamera_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
          v37 = UICamera_TypeInfo;
        }
        v38 = (float *)v37->static_fields;
        v39 = v244.fields.m_Origin.fields.y;
        v40 = v244.fields.m_Origin.fields.x;
        v41 = *(_QWORD *)&v244.fields.m_Origin.fields.z;
        v42 = *(_QWORD *)&v244.fields.m_Direction.fields.y;
        v43 = v38[116];
        v44 = v38[117];
        v45 = v38[118];
        v46 = v38[119];
        if ( !byte_4CC0D0D )
        {
          v234 = v38[119];
          v236 = v244.fields.m_Origin.fields.y;
          sub_1C713B0(&UnityEngine_Mathf_TypeInfo);
          v46 = v234;
          v39 = v236;
          byte_4CC0D0D = 1;
        }
        v47 = (float)(*((float *)&v42 + 1) * v45)
            + (float)((float)(*((float *)&v41 + 1) * v43) + (float)(*(float *)&v42 * v44));
        v48 = fmaxf(fabsf(v47), 0.0) * 0.000001;
        v49 = UnityEngine_Mathf_TypeInfo->static_fields->Epsilon * 8.0;
        if ( v48 > v49 )
          v49 = v48;
        if ( vabds_f32(0.0, v47) < v49 )
          goto LABEL_25;
        v50 = (float)((float)-(float)((float)(*(float *)&v41 * v45) + (float)((float)(v40 * v43) + (float)(v39 * v44)))
                    - v46)
            / v47;
        if ( v50 <= 0.0 )
          goto LABEL_25;
        v252 = UnityEngine_Ray__GetPoint(&v244, v50, 0);
        v51 = v252.fields.x;
        v52 = v252.fields.y;
        v53 = v252.fields.z;
        if ( !UnityEngine_Physics2D_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Physics2D_TypeInfo);
        v246.fields.x = v51;
        v246.fields.y = v52;
        v54 = (UnityEngine_Object_o *)UnityEngine_Physics2D__OverlapPoint(v246, v30, 0);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( !UnityEngine_Object__op_Implicit(v54, 0) )
          goto LABEL_25;
        currentCamera = (__int64)UICamera_TypeInfo;
        if ( !UICamera_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
          currentCamera = (__int64)UICamera_TypeInfo;
        }
        v212 = *(float **)(currentCamera + 184);
        v212[17] = v51;
        v212[18] = v52;
        v212[19] = v53;
        if ( !v54 )
          goto LABEL_284;
        v213 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v54, 0);
        v214 = (GrandQuestFolderBoardItem_o *)&UICamera_TypeInfo->static_fields->hoveredObject;
        v214->klass = (GrandQuestFolderBoardItem_c *)v213;
        sub_1C71354(v214, (int32_t)v213, v215, v216, v217, v218, v219, v220);
        if ( LOBYTE(v9->_1.byval_arg.bits) )
          return 1;
        v221 = UICamera_TypeInfo;
        if ( !UICamera_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
          v221 = UICamera_TypeInfo;
        }
        currentCamera = (__int64)v221->static_fields->hoveredObject;
        if ( !currentCamera )
          goto LABEL_284;
        v222 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)currentCamera, 0);
        RootRigidbody = (UnityEngine_Object_o *)UICamera__FindRootRigidbody2D(v222, v223);
LABEL_270:
        v224 = RootRigidbody;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        currentCamera = UnityEngine_Object__op_Inequality(v224, 0, 0);
        if ( (currentCamera & 1) == 0 )
          return 1;
        if ( !v224 )
          goto LABEL_284;
        v225 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v224, 0);
        v226 = UICamera_TypeInfo;
        v227 = (GrandQuestFolderBoardItem_c *)v225;
        if ( !UICamera_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
          v226 = UICamera_TypeInfo;
        }
        LODWORD(v170) = (_DWORD)v227;
        v171 = (GrandQuestFolderBoardItem_o *)&v226->static_fields->hoveredObject;
        v171->klass = v227;
        goto LABEL_283;
      case 3:
        v55 = UICamera_TypeInfo;
        if ( !UICamera_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
          v55 = UICamera_TypeInfo;
        }
        v56 = (float *)v55->static_fields;
        v57 = v244.fields.m_Origin.fields.y;
        v58 = v244.fields.m_Origin.fields.x;
        v59 = *(_QWORD *)&v244.fields.m_Origin.fields.z;
        v60 = *(_QWORD *)&v244.fields.m_Direction.fields.y;
        v61 = v56[116];
        v62 = v56[117];
        v63 = v56[118];
        v64 = v56[119];
        if ( !byte_4CC0D0D )
        {
          v235 = v56[119];
          v237 = v244.fields.m_Origin.fields.y;
          sub_1C713B0(&UnityEngine_Mathf_TypeInfo);
          v64 = v235;
          v57 = v237;
          byte_4CC0D0D = 1;
        }
        v65 = (float)(*((float *)&v60 + 1) * v63)
            + (float)((float)(*((float *)&v59 + 1) * v61) + (float)(*(float *)&v60 * v62));
        v66 = fmaxf(fabsf(v65), 0.0) * 0.000001;
        v67 = UnityEngine_Mathf_TypeInfo->static_fields->Epsilon * 8.0;
        if ( v66 > v67 )
          v67 = v66;
        if ( vabds_f32(0.0, v65) < v67 )
          goto LABEL_25;
        v68 = (float)((float)-(float)((float)(*(float *)&v59 * v63) + (float)((float)(v58 * v61) + (float)(v57 * v62)))
                    - v64)
            / v65;
        if ( v68 <= 0.0 )
          goto LABEL_25;
        v253 = UnityEngine_Ray__GetPoint(&v244, v68, 0);
        v69 = UICamera_TypeInfo;
        v70 = v253.fields.x;
        v71 = v253.fields.y;
        v72 = v253.fields.z;
        if ( !UICamera_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
          v69 = UICamera_TypeInfo;
        }
        v73 = (float *)v69->static_fields;
        v73[17] = v70;
        v73[18] = v71;
        v73[19] = v72;
        v74 = v69->static_fields;
        v76 = v74->lastWorldPosition.fields.x;
        v75 = v74->lastWorldPosition.fields.y;
        if ( !UnityEngine_Physics2D_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Physics2D_TypeInfo);
        v247.fields.x = v76;
        v247.fields.y = v75;
        currentCamera = (__int64)UnityEngine_Physics2D__OverlapPointAll(v247, v30, 0);
        if ( !currentCamera )
          goto LABEL_284;
        v77 = *(_DWORD *)(currentCamera + 24);
        v78 = currentCamera;
        if ( v77 < 2 )
        {
          if ( v77 != 1 )
            goto LABEL_25;
          currentCamera = *(_QWORD *)(currentCamera + 32);
          if ( !currentCamera )
            goto LABEL_284;
          currentCamera = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)currentCamera, 0);
          if ( !currentCamera )
            goto LABEL_284;
          v79 = (UnityEngine_GameObject_o *)currentCamera;
          v80 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_object_(
                                          (UnityEngine_GameObject_o *)currentCamera,
                                          (const MethodInfo_31A2ED0 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          currentCamera = UnityEngine_Object__op_Inequality(v80, 0, 0);
          if ( (currentCamera & 1) != 0 )
          {
            if ( !v80 )
              goto LABEL_284;
            if ( !UIWidget__get_isVisible((UIWidget_o *)v80, 0) )
              goto LABEL_25;
            v81 = v80[9].monitor;
            if ( v81 )
            {
              v82 = UICamera_TypeInfo;
              if ( !UICamera_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
                v82 = UICamera_TypeInfo;
              }
              if ( ((*((__int64 (__fastcall **)(_QWORD, _QWORD, float, float, float))v81 + 3))(
                      *((_QWORD *)v81 + 8),
                      *((_QWORD *)v81 + 5),
                      v82->static_fields->lastWorldPosition.fields.x,
                      v82->static_fields->lastWorldPosition.fields.y,
                      v82->static_fields->lastWorldPosition.fields.z)
                  & 1) == 0 )
                goto LABEL_25;
            }
          }
          else
          {
            if ( !NGUITools_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
            v161 = NGUITools__FindInParents_object_(
                     v79,
                     (const MethodInfo_31D5C14 *)Method_NGUITools_FindInParents_UIRect___);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            currentCamera = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v161, 0, 0);
            if ( (currentCamera & 1) != 0 )
            {
              if ( !v161 )
                goto LABEL_284;
              if ( *(float *)&v161[9].klass < 0.001 )
                goto LABEL_25;
            }
          }
          v162 = UICamera_TypeInfo;
          if ( !UICamera_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
            v162 = UICamera_TypeInfo;
          }
          if ( UICamera__IsVisible(v162->static_fields->lastWorldPosition, v79, v2) )
          {
            v169 = UICamera_TypeInfo;
            if ( !UICamera_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
              v169 = UICamera_TypeInfo;
            }
            LODWORD(v170) = (_DWORD)v79;
            v171 = (GrandQuestFolderBoardItem_o *)&v169->static_fields->hoveredObject;
            v171->klass = (GrandQuestFolderBoardItem_c *)v79;
            goto LABEL_283;
          }
          goto LABEL_25;
        }
        v126 = 0;
        break;
      default:
        goto LABEL_25;
    }
    break;
  }
  do
  {
    if ( (unsigned int)v126 >= v77 )
      goto LABEL_285;
    currentCamera = *(_QWORD *)(v78 + 32 + 8 * v126);
    if ( !currentCamera )
      goto LABEL_284;
    currentCamera = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)currentCamera, 0);
    if ( !currentCamera )
      goto LABEL_284;
    v127 = (UnityEngine_GameObject_o *)currentCamera;
    v128 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_object_(
                                     (UnityEngine_GameObject_o *)currentCamera,
                                     (const MethodInfo_31A2ED0 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    currentCamera = UnityEngine_Object__op_Inequality(v128, 0, 0);
    if ( (currentCamera & 1) != 0 )
    {
      if ( !v128 )
        goto LABEL_284;
      currentCamera = UIWidget__get_isVisible((UIWidget_o *)v128, 0);
      if ( (currentCamera & 1) == 0 )
        goto LABEL_203;
      v129 = v128[9].monitor;
      if ( v129 )
      {
        v130 = UICamera_TypeInfo;
        if ( !UICamera_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
          v130 = UICamera_TypeInfo;
        }
        currentCamera = (*((__int64 (__fastcall **)(_QWORD, _QWORD, float, float, float))v129 + 3))(
                          *((_QWORD *)v129 + 8),
                          *((_QWORD *)v129 + 5),
                          v130->static_fields->lastWorldPosition.fields.x,
                          v130->static_fields->lastWorldPosition.fields.y,
                          v130->static_fields->lastWorldPosition.fields.z);
        if ( (currentCamera & 1) == 0 )
          goto LABEL_203;
      }
    }
    else
    {
      if ( !NGUITools_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
      v131 = NGUITools__FindInParents_object_(
               v127,
               (const MethodInfo_31D5C14 *)Method_NGUITools_FindInParents_UIRect___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      currentCamera = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v131, 0, 0);
      if ( (currentCamera & 1) != 0 )
      {
        if ( !v131 )
          goto LABEL_284;
        if ( *(float *)&v131[9].klass < 0.001 )
          goto LABEL_203;
      }
    }
    if ( !UICamera_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    if ( !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    currentCamera = NGUITools__CalculateRaycastDepth(v127, 0);
    v138 = UICamera_TypeInfo;
    v139 = UICamera_TypeInfo->static_fields;
    v139->mHit.fields.depth = currentCamera;
    if ( (_DWORD)currentCamera != 0x7FFFFFFF )
    {
      if ( !v138->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v138);
        v139 = UICamera_TypeInfo->static_fields;
      }
      v139->mHit.fields.go = v127;
      sub_1C71354(
        (GrandQuestFolderBoardItem_o *)&v139->mHit.fields.go,
        (int32_t)v127,
        v132,
        v133,
        v134,
        v135,
        v136,
        v137);
      v140 = UICamera_TypeInfo;
      v141 = UICamera_TypeInfo->static_fields;
      v142 = v141->lastWorldPosition.fields.z;
      *(_QWORD *)&v141->mHit.fields.point.fields.x = *(_QWORD *)&v141->lastWorldPosition.fields.x;
      v141->mHit.fields.point.fields.z = v142;
      v143 = v140->static_fields;
      v144 = v143->mHits;
      currentCamera = (__int64)memcpy(&dest, &v143->mHit, sizeof(dest));
      if ( !v144 )
        goto LABEL_284;
      v145 = (const MethodInfo_3387178 *)Method_BetterList_UICamera_DepthEntry__Add__;
      memcpy(&v245, &dest, sizeof(v245));
      BetterList_UICamera_DepthEntry___Add(v144, &v245, v145);
    }
LABEL_203:
    v77 = *(_DWORD *)(v78 + 24);
    ++v126;
  }
  while ( (int)v126 < v77 );
  v146 = UICamera_TypeInfo;
  if ( !UICamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    v146 = UICamera_TypeInfo;
  }
  currentCamera = (__int64)UICamera___c_TypeInfo;
  v147 = v146->static_fields->mHits;
  if ( !UICamera___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICamera___c_TypeInfo);
    currentCamera = (__int64)UICamera___c_TypeInfo;
  }
  v148 = *(BetterList_CompareFunc_UICamera_DepthEntry__o **)(*(_QWORD *)(currentCamera + 184) + 16LL);
  if ( !v148 )
  {
    if ( !*(_DWORD *)(currentCamera + 224) )
    {
      j_il2cpp_runtime_class_init_0(currentCamera);
      currentCamera = (__int64)UICamera___c_TypeInfo;
    }
    v149 = **(Il2CppObject ***)(currentCamera + 184);
    v148 = (BetterList_CompareFunc_UICamera_DepthEntry__o *)sub_1C715FC(BetterList_CompareFunc_UICamera_DepthEntry__TypeInfo);
    BetterList_CompareFunc_UICamera_DepthEntry____ctor(v148, v149, Method_UICamera___c__Raycast_b__125_1__, 0);
    v150 = UICamera___c_TypeInfo->static_fields;
    v150->__9__125_1 = v148;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&v150->__9__125_1, (int32_t)v148, v151, v152, v153, v154, v155, v156);
  }
  if ( !v147 )
    goto LABEL_284;
  BetterList_UICamera_DepthEntry___Sort(
    v147,
    (BetterList_CompareFunc_T__o *)v148,
    (const MethodInfo_3387A44 *)Method_BetterList_UICamera_DepthEntry__Sort__);
  v157 = 0;
  v158 = 32;
  while ( 2 )
  {
    currentCamera = (__int64)UICamera_TypeInfo;
    if ( !UICamera_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
      currentCamera = (__int64)UICamera_TypeInfo;
    }
    v117 = *(struct BetterList_UICamera_DepthEntry__o **)(*(_QWORD *)(currentCamera + 184) + 456LL);
    if ( !v117 )
      goto LABEL_284;
    v159 = v117->fields.size;
    if ( !*(_DWORD *)(currentCamera + 224) )
    {
      j_il2cpp_runtime_class_init_0(currentCamera);
      v117 = UICamera_TypeInfo->static_fields->mHits;
      if ( !v117 )
        goto LABEL_284;
    }
    if ( (__int64)v157 >= v159 )
    {
LABEL_224:
      BetterList_UICamera_DepthEntry___Clear(
        v117,
        (const MethodInfo_3387160 *)Method_BetterList_UICamera_DepthEntry__Clear__);
      goto LABEL_25;
    }
    v160 = v117->fields.buffer;
    if ( !v160 )
      goto LABEL_284;
    if ( v157 >= LODWORD(v160->max_length) )
      goto LABEL_285;
    if ( !UICamera__IsVisible_49440288((UICamera_DepthEntry_o *)((char *)v160 + v158), v2) )
    {
      ++v157;
      v158 += 72;
      continue;
    }
    break;
  }
  v189 = UICamera_TypeInfo;
  if ( !UICamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    v189 = UICamera_TypeInfo;
  }
  currentCamera = (__int64)v189->static_fields->mHits;
  if ( !currentCamera )
    goto LABEL_284;
  BetterList_UICamera_DepthEntry___get_Item(
    &v245,
    (BetterList_UICamera_DepthEntry__o *)currentCamera,
    v157,
    (const MethodInfo_3386EB0 *)Method_BetterList_UICamera_DepthEntry__get_Item__);
  v190 = (int32_t)v245.fields.go;
  v191 = (GrandQuestFolderBoardItem_o *)&UICamera_TypeInfo->static_fields->hoveredObject;
  v191->klass = (GrandQuestFolderBoardItem_c *)v245.fields.go;
  sub_1C71354(v191, v190, v192, v193, v194, v195, v196, v197);
  v186 = UICamera_TypeInfo;
LABEL_245:
  currentCamera = (__int64)v186->static_fields->mHits;
  if ( !currentCamera )
LABEL_284:
    sub_1C71608(currentCamera, v2);
  BetterList_UICamera_DepthEntry___Clear(
    (BetterList_UICamera_DepthEntry__o *)currentCamera,
    (const MethodInfo_3387160 *)Method_BetterList_UICamera_DepthEntry__Clear__);
  return 1;
}


void UICamera__RemoveTouch(int32_t id, const MethodInfo *method)
{
  UICamera_c *v3; // x0
  System_Collections_Generic_Dictionary_int__object__o *mTouches; // x0

  if ( (byte_4CCBA04 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_int__UICamera_MouseOrTouch__Remove__);
    sub_1C713B0(&UICamera_TypeInfo);
    byte_4CCBA04 = 1;
  }
  v3 = UICamera_TypeInfo;
  if ( !UICamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    v3 = UICamera_TypeInfo;
  }
  mTouches = (System_Collections_Generic_Dictionary_int__object__o *)v3->static_fields->mTouches;
  if ( !mTouches )
    sub_1C71608(0, method);
  System_Collections_Generic_Dictionary_int__object___Remove(
    mTouches,
    id,
    (const MethodInfo_346371C *)Method_System_Collections_Generic_Dictionary_int__UICamera_MouseOrTouch__Remove__);
}


void UICamera__ShowTooltip(UICamera_o *this, bool val, const MethodInfo *method)
{
  UICamera_c *v5; // x0
  struct UICamera_BoolDelegate_o *onTooltip; // x8
  __int64 v7; // x0
  __int64 v8; // x1
  GrandQuestFolderBoardItem_o *p_mTooltip; // x19
  UnityEngine_GameObject_o *v10; // x21
  struct UnityEngine_GameObject_o *mTooltip; // t1
  const MethodInfo *v12; // x3
  Il2CppObject *v13; // x22
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  bool v20[4]; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4CCBA12 & 1) == 0 )
  {
    sub_1C713B0(&bool_TypeInfo);
    sub_1C713B0(&UICamera_TypeInfo);
    sub_1C713B0(&StringLiteral_9973/*"OnTooltip"*/);
    byte_4CCBA12 = 1;
  }
  this->fields.mTooltipTime = 0.0;
  v5 = UICamera_TypeInfo;
  if ( !UICamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    v5 = UICamera_TypeInfo;
  }
  onTooltip = v5->static_fields->onTooltip;
  if ( onTooltip )
  {
    if ( !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      onTooltip = UICamera_TypeInfo->static_fields->onTooltip;
      if ( !onTooltip )
        sub_1C71608(v7, v8);
    }
    ((void (__fastcall *)(intptr_t, struct UnityEngine_GameObject_o *, bool, intptr_t))onTooltip->fields.invoke_impl)(
      onTooltip->fields.method_code,
      this->fields.mTooltip,
      val,
      onTooltip->fields.method);
  }
  mTooltip = this->fields.mTooltip;
  p_mTooltip = (GrandQuestFolderBoardItem_o *)&this->fields.mTooltip;
  v10 = mTooltip;
  v20[0] = val;
  v13 = (Il2CppObject *)j_il2cpp_value_box_0(bool_TypeInfo, v20);
  if ( !UICamera_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
  UICamera__Notify(v10, (System_String_o *)StringLiteral_9973/*"OnTooltip"*/, v13, v12);
  if ( !val )
  {
    p_mTooltip->klass = 0;
    sub_1C71354(p_mTooltip, 0, v14, v15, v16, v17, v18, v19);
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
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  UICamera_c *v22; // x8
  UnityEngine_GameObject_o *v23; // x20
  struct UICamera_StaticFields *static_fields; // x0
  _BOOL4 debug; // w19

  if ( (byte_4CCBA08 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Application_TypeInfo);
    sub_1C713B0(&NGUIDebug_TypeInfo);
    sub_1C713B0(&Method_NGUITools_FindInParents_UIRoot___);
    sub_1C713B0(&NGUITools_TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&UICamera_TypeInfo);
    byte_4CCBA08 = 1;
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
              (const MethodInfo_31D5C14 *)Method_NGUITools_FindInParents_UIRoot___);
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
      v22 = UICamera_TypeInfo;
      v23 = v15;
      if ( !UICamera_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
        v22 = UICamera_TypeInfo;
      }
      static_fields = v22->static_fields;
      static_fields->fallThrough = v23;
      sub_1C71354(
        (GrandQuestFolderBoardItem_o *)&static_fields->fallThrough,
        (int32_t)v23,
        v16,
        v17,
        v18,
        v19,
        v20,
        v21);
    }
    cachedCamera = UICamera__get_cachedCamera(this, v9);
    if ( cachedCamera )
    {
      UnityEngine_Camera__set_eventMask(cachedCamera, 0, 0);
      goto LABEL_33;
    }
LABEL_38:
    sub_1C71608(cachedCamera, v4);
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
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7

  if ( (byte_4CCB9EE & 1) == 0 )
  {
    sub_1C713B0(&Method_UnityEngine_Component_GetComponent_Camera___);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CCB9EE = 1;
  }
  mCam = (UnityEngine_Object_o *)this->fields.mCam;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(mCam, 0, 0) )
  {
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)this,
                         (const MethodInfo_31418DC *)Method_UnityEngine_Component_GetComponent_Camera___);
    this->fields.mCam = (struct UnityEngine_Camera_o *)Component_object;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.mCam, (int32_t)Component_object, v5, v6, v7, v8, v9, v10);
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

  if ( (byte_4CCB9EA & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&UICamera_TypeInfo);
    byte_4CCB9EA = 1;
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
      sub_1C71608(v9, v6);
    }
    v12.fields.x = currentTouch->fields.pos.fields.x;
    v12.fields.y = currentTouch->fields.pos.fields.y;
    v12.fields.z = 0.0;
    result = UnityEngine_Camera__ScreenPointToRay_71529668(&v11, v9, v12, 0);
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

  if ( (byte_4CCB9F4 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_int__UICamera_MouseOrTouch__GetEnumerator__);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_Enumerator_int__UICamera_MouseOrTouch__Dispose__);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_Enumerator_int__UICamera_MouseOrTouch__MoveNext__);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_Enumerator_int__UICamera_MouseOrTouch__get_Current__);
    sub_1C713B0(&Method_System_Collections_Generic_KeyValuePair_int__UICamera_MouseOrTouch__get_Value__);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&UICamera_TypeInfo);
    byte_4CCB9F4 = 1;
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
    (const MethodInfo_34626CC *)Method_System_Collections_Generic_Dictionary_int__UICamera_MouseOrTouch__GetEnumerator__);
  v4 = 0;
  v19 = v18;
  while ( 1 )
  {
    v5 = System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
           &v19,
           (const MethodInfo_35BA0B4 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__UICamera_MouseOrTouch__MoveNext__);
    if ( !v5 )
      break;
    if ( !v19.fields._current.fields.value )
      sub_1C71608(v5, v6);
    klass = v19.fields._current.fields.value[5].klass;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v4 += UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)klass, 0, 0);
  }
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v19,
    (const MethodInfo_35BA1D8 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__UICamera_MouseOrTouch__Dispose__);
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
      sub_1C71610(mTouches);
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
    sub_1C71608(mTouches, v1);
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

  if ( (byte_4CCB9F6 & 1) == 0 )
  {
    sub_1C713B0(&NGUITools_TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&UICamera_TypeInfo);
    byte_4CCB9F6 = 1;
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
      sub_1C71608(v3, v1);
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
      sub_1C71610(v3);
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
        if ( NGUITools__GetActive_49712152(gameObject, 0) )
          return (UICamera_o *)v6;
      }
    }
  }
  return 0;
}


UnityEngine_GameObject_o *UICamera__get_genericEventHandler(const MethodInfo *method)
{
  UICamera_c *v1; // x0

  if ( (byte_4CCB9EB & 1) == 0 )
  {
    sub_1C713B0(&UICamera_TypeInfo);
    byte_4CCB9EB = 1;
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

  if ( (byte_4CCB9ED & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&UICamera_TypeInfo);
    byte_4CCB9ED = 1;
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

  if ( (byte_4CCB9EF & 1) == 0 )
  {
    sub_1C713B0(&Method_NGUITools_FindInParents_UIRoot___);
    sub_1C713B0(&NGUITools_TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&UICamera_TypeInfo);
    byte_4CCB9EF = 1;
  }
  if ( UICamera_TypeInfo->_2.cctor_finished )
  {
    static_fields = UICamera_TypeInfo->static_fields;
    if ( static_fields->currentTouch )
    {
LABEL_5:
      currentTouch = static_fields->currentTouch;
      if ( !currentTouch )
        sub_1C71608(0, v1);
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
  v13 = NGUITools__FindInParents_object_(v12, (const MethodInfo_31D5C14 *)Method_NGUITools_FindInParents_UIRoot___);
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

  if ( (byte_4CCB9F5 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&UICamera_TypeInfo);
    byte_4CCB9F5 = 1;
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
    sub_1C71608(v3, v4);
  return UICamera__get_cachedCamera((UICamera_o *)eventHandler, v4);
}


UnityEngine_GameObject_o *UICamera__get_selectedObject(const MethodInfo *method)
{
  UICamera_c *v1; // x0
  UnityEngine_Object_o *mCurrentSelection; // x19
  bool v3; // w8
  UnityEngine_GameObject_o *result; // x0
  UICamera_c *v5; // x0

  if ( (byte_4CCB9F0 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&UICamera_TypeInfo);
    byte_4CCB9F0 = 1;
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

  if ( (byte_4CCB9F3 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_int__UICamera_MouseOrTouch__GetEnumerator__);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_Enumerator_int__UICamera_MouseOrTouch__Dispose__);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_Enumerator_int__UICamera_MouseOrTouch__MoveNext__);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_Enumerator_int__UICamera_MouseOrTouch__get_Current__);
    sub_1C713B0(&Method_System_Collections_Generic_KeyValuePair_int__UICamera_MouseOrTouch__get_Value__);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&UICamera_TypeInfo);
    byte_4CCB9F3 = 1;
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
    (const MethodInfo_34626CC *)Method_System_Collections_Generic_Dictionary_int__UICamera_MouseOrTouch__GetEnumerator__);
  v4 = 0;
  v19 = v18;
  while ( 1 )
  {
    v5 = System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
           &v19,
           (const MethodInfo_35BA0B4 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__UICamera_MouseOrTouch__MoveNext__);
    if ( !v5 )
      break;
    if ( !v19.fields._current.fields.value )
      sub_1C71608(v5, v6);
    monitor = (UnityEngine_Object_o *)v19.fields._current.fields.value[4].monitor;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v4 += UnityEngine_Object__op_Inequality(monitor, 0, 0);
  }
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v19,
    (const MethodInfo_35BA1D8 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__UICamera_MouseOrTouch__Dispose__);
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
      sub_1C71610(mTouches);
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
    sub_1C71608(mTouches, v1);
  v16 = (UnityEngine_Object_o *)controller->fields.pressed;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  return v4 + UnityEngine_Object__op_Inequality(v16, 0, 0);
}


void UICamera__set_genericEventHandler(UnityEngine_GameObject_o *value, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  UICamera_c *v9; // x0
  struct UICamera_StaticFields *static_fields; // x0

  if ( (byte_4CCB9EC & 1) == 0 )
  {
    sub_1C713B0(&UICamera_TypeInfo);
    byte_4CCB9EC = 1;
  }
  v9 = UICamera_TypeInfo;
  if ( !UICamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    v9 = UICamera_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->mGenericHandler = value;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&static_fields->mGenericHandler, (int32_t)value, v2, v3, v4, v5, v6, v7);
}


void UICamera__set_selectedObject(UnityEngine_GameObject_o *value, const MethodInfo *method)
{
  UICamera_c *v3; // x0
  UnityEngine_Object_o *mCurrentSelection; // x20
  const MethodInfo *v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
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
  GrandQuestFolderBoardItem_o *p_mCurrentSelection; // x0
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  UnityEngine_Object_o *v30; // x19
  int32_t v31; // w2
  int32_t v32; // w3
  System_String_o *v33; // x4
  int32_t v34; // w5
  int64_t v35; // x6
  System_String_o *v36; // x7
  UICamera_c *v37; // x0
  UnityEngine_Object_o *v38; // x19
  bool v39; // w0
  UICamera_c *v40; // x8
  bool v41; // w19
  struct UICamera_StaticFields *v42; // x8
  int32_t layer; // w0
  const MethodInfo *v44; // x1
  UICamera_o *CameraForLayer; // x0
  UICamera_o *v46; // x19
  int32_t v47; // w2
  int32_t v48; // w3
  System_String_o *v49; // x4
  int32_t v50; // w5
  int64_t v51; // x6
  System_String_o *v52; // x7
  UICamera_c *v53; // x0
  struct UICamera_StaticFields *v54; // x0
  UnityEngine_Camera_o *cachedCamera; // x0
  struct UICamera_StaticFields *v56; // x8
  int32_t v57; // w2
  int32_t v58; // w3
  System_String_o *v59; // x4
  int32_t v60; // w5
  int64_t v61; // x6
  System_String_o *v62; // x7
  UICamera_c *v63; // x0
  UICamera_c *v64; // x0
  Il2CppObject *Component_object; // x19
  bool v66; // w19
  UICamera_c *v67; // x0
  struct UICamera_StaticFields *v68; // x8
  struct UICamera_BoolDelegate_o *v69; // x9
  UnityEngine_GameObject_o *v70; // x19
  Il2CppObject *v71; // x0
  const MethodInfo *v72; // x3
  UICamera_c *v73; // x0
  struct UICamera_StaticFields *v74; // x0
  struct UICamera_StaticFields *v75; // x0
  int32_t v76; // w2
  int32_t v77; // w3
  System_String_o *v78; // x4
  int32_t v79; // w5
  int64_t v80; // x6
  System_String_o *v81; // x7
  GrandQuestFolderBoardItem_o *v82; // x0
  int32_t v83; // w2
  int32_t v84; // w3
  System_String_o *v85; // x4
  int32_t v86; // w5
  int64_t v87; // x6
  System_String_o *v88; // x7
  char v89[4]; // [xsp+8h] [xbp-48h] BYREF
  _BYTE v90[4]; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4CCB9F1 & 1) == 0 )
  {
    sub_1C713B0(&Method_BetterList_UICamera__get_Item__);
    sub_1C713B0(&bool_TypeInfo);
    sub_1C713B0(&Method_UnityEngine_GameObject_GetComponent_UIInput___);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&UICamera_TypeInfo);
    sub_1C713B0(&StringLiteral_9958/*"OnSelect"*/);
    byte_4CCB9F1 = 1;
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
        sub_1C71610(selectedObject);
      v16 = mMouse->m_Items[0];
      static_fields->currentTouch = v16;
      sub_1C71354((GrandQuestFolderBoardItem_o *)&static_fields->currentTouch, (int32_t)v16, v6, v7, v8, v9, v10, v11);
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
    v90[0] = 0;
    v21 = (Il2CppObject *)j_il2cpp_value_box_0(bool_TypeInfo, v90);
    UICamera__Notify(v20, (System_String_o *)StringLiteral_9958/*"OnSelect"*/, v21, v22);
    p_mCurrentSelection = (GrandQuestFolderBoardItem_o *)&UICamera_TypeInfo->static_fields->mCurrentSelection;
    p_mCurrentSelection->klass = (GrandQuestFolderBoardItem_c *)value;
    sub_1C71354(p_mCurrentSelection, (int32_t)value, v24, v25, v26, v27, v28, v29);
    v30 = (UnityEngine_Object_o *)UICamera_TypeInfo->static_fields->mCurrentSelection;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(v30, 0, 0) )
      goto LABEL_67;
    if ( !currentTouch )
    {
      v37 = UICamera_TypeInfo;
      if ( !UICamera_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
        v37 = UICamera_TypeInfo;
      }
      v38 = (UnityEngine_Object_o *)v37->static_fields->mCurrentSelection;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v39 = UnityEngine_Object__op_Inequality(v38, 0, 0);
      v40 = UICamera_TypeInfo;
      v41 = v39;
      if ( !UICamera_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
        v40 = UICamera_TypeInfo;
      }
      v42 = v40->static_fields;
      if ( v41 )
      {
        selectedObject = v42->mCurrentSelection;
        if ( !selectedObject )
          goto LABEL_72;
        layer = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)selectedObject, 0);
        CameraForLayer = UICamera__FindCameraForLayer(layer, v44);
      }
      else
      {
        selectedObject = v42->list;
        if ( !v42->list )
          goto LABEL_72;
        CameraForLayer = (UICamera_o *)BetterList_object___get_Item(
                                         (BetterList_T__o *)selectedObject,
                                         0,
                                         (const MethodInfo_33814B8 *)Method_BetterList_UICamera__get_Item__);
      }
      v46 = CameraForLayer;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v46, 0, 0) )
      {
        v53 = UICamera_TypeInfo;
        if ( !UICamera_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
          v53 = UICamera_TypeInfo;
        }
        v54 = v53->static_fields;
        v54->current = v46;
        sub_1C71354((GrandQuestFolderBoardItem_o *)&v54->current, (int32_t)v46, v47, v48, v49, v50, v51, v52);
        if ( !v46 )
          goto LABEL_72;
        cachedCamera = UICamera__get_cachedCamera(v46, v5);
        v56 = UICamera_TypeInfo->static_fields;
        v56->currentCamera = cachedCamera;
        sub_1C71354(
          (GrandQuestFolderBoardItem_o *)&v56->currentCamera,
          (int32_t)cachedCamera,
          v57,
          v58,
          v59,
          v60,
          v61,
          v62);
      }
    }
    v63 = UICamera_TypeInfo;
    if ( !UICamera_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
      v63 = UICamera_TypeInfo;
    }
    selectedObject = v63->static_fields->mCurrentSelection;
    if ( selectedObject )
    {
      if ( UnityEngine_GameObject__get_activeInHierarchy((UnityEngine_GameObject_o *)selectedObject, 0) )
      {
        v64 = UICamera_TypeInfo;
        if ( !UICamera_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
          v64 = UICamera_TypeInfo;
        }
        selectedObject = v64->static_fields->mCurrentSelection;
        if ( !selectedObject )
          goto LABEL_72;
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)selectedObject,
                             (const MethodInfo_31A2ED0 *)Method_UnityEngine_GameObject_GetComponent_UIInput___);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v66 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
      }
      else
      {
        v66 = 0;
      }
      v67 = UICamera_TypeInfo;
      if ( !UICamera_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
        v67 = UICamera_TypeInfo;
      }
      v68 = v67->static_fields;
      v69 = v68->onSelect;
      v68->inputHasFocus = v66;
      if ( !v69 )
        goto LABEL_64;
      if ( v67->_2.cctor_finished
        || (j_il2cpp_runtime_class_init_0(v67), v68 = UICamera_TypeInfo->static_fields, (v69 = v68->onSelect) != 0) )
      {
        ((void (__fastcall *)(intptr_t, struct UnityEngine_GameObject_o *, __int64, intptr_t))v69->fields.invoke_impl)(
          v69->fields.method_code,
          v68->mCurrentSelection,
          1,
          v69->fields.method);
        v67 = UICamera_TypeInfo;
LABEL_64:
        if ( !v67->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v67);
          v67 = UICamera_TypeInfo;
        }
        v70 = v67->static_fields->mCurrentSelection;
        v89[0] = 1;
        v71 = (Il2CppObject *)j_il2cpp_value_box_0(bool_TypeInfo, v89);
        UICamera__Notify(v70, (System_String_o *)StringLiteral_9958/*"OnSelect"*/, v71, v72);
LABEL_67:
        if ( !currentTouch )
        {
          v73 = UICamera_TypeInfo;
          if ( !UICamera_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
            v73 = UICamera_TypeInfo;
          }
          v74 = v73->static_fields;
          v74->current = 0;
          sub_1C71354((GrandQuestFolderBoardItem_o *)&v74->current, 0, v31, v32, v33, v34, v35, v36);
          v75 = UICamera_TypeInfo->static_fields;
          v75->currentCamera = 0;
          sub_1C71354((GrandQuestFolderBoardItem_o *)&v75->currentCamera, 0, v76, v77, v78, v79, v80, v81);
          v82 = (GrandQuestFolderBoardItem_o *)UICamera_TypeInfo->static_fields;
          v82[1].klass = 0;
          sub_1C71354(v82 + 1, 0, v83, v84, v85, v86, v87, v88);
          UICamera_TypeInfo->static_fields->currentTouchID = -100;
        }
        return;
      }
    }
LABEL_72:
    sub_1C71608(selectedObject, v5);
  }
}


void UICamera_BoolDelegate___ctor(
        UICamera_BoolDelegate_o *this,
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
  sub_1C71354(
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
  if ( (sub_1C71470(method) & 1) == 0 )
  {
    if ( v12 == 1 )
    {
      v13 = sub_1AAD9C0;
      goto LABEL_6;
    }
    if ( !object )
    {
      v15 = sub_1C71624(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C714D8(v15, 0);
    }
LABEL_8:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_9;
  }
  if ( v12 != 2 )
    goto LABEL_8;
  v13 = sub_1AAD9E8;
LABEL_6:
  this->fields.invoke_impl = (intptr_t)v13;
LABEL_9:
  this->fields.extra_arg = (intptr_t)sub_1AAD968;
}


System_IAsyncResult_o *UICamera_BoolDelegate__BeginInvoke(
        UICamera_BoolDelegate_o *this,
        UnityEngine_GameObject_o *go,
        bool state,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v11[3]; // [xsp+8h] [xbp-58h] BYREF
  bool v12[4]; // [xsp+2Ch] [xbp-34h] BYREF

  v12[0] = state;
  if ( (byte_4CCBA19 & 1) == 0 )
  {
    sub_1C713B0(&bool_TypeInfo);
    byte_4CCBA19 = 1;
  }
  v11[2] = 0;
  v11[0] = go;
  v11[1] = j_il2cpp_value_box_0(bool_TypeInfo, v12);
  return (System_IAsyncResult_o *)sub_1C71364(this, v11, callback, object);
}


void UICamera_BoolDelegate__EndInvoke(
        UICamera_BoolDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C71368(result, 0, method);
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
  sub_1C71354(
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
  if ( (sub_1C71470(method) & 1) == 0 )
  {
    if ( v12 == 1 )
    {
      v13 = sub_1AADA58;
      goto LABEL_6;
    }
    if ( !object )
    {
      v15 = sub_1C71624(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C714D8(v15, 0);
    }
LABEL_8:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_9;
  }
  if ( v12 != 2 )
    goto LABEL_8;
  v13 = sub_1AADA78;
LABEL_6:
  this->fields.invoke_impl = (intptr_t)v13;
LABEL_9:
  this->fields.extra_arg = (intptr_t)sub_1AADA00;
}


System_IAsyncResult_o *UICamera_FloatDelegate__BeginInvoke(
        UICamera_FloatDelegate_o *this,
        UnityEngine_GameObject_o *go,
        float delta,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v11[3]; // [xsp+8h] [xbp-58h] BYREF
  float v12; // [xsp+2Ch] [xbp-34h] BYREF

  v12 = delta;
  if ( (byte_4CCBA1A & 1) == 0 )
  {
    sub_1C713B0(&float_TypeInfo);
    byte_4CCBA1A = 1;
  }
  v11[2] = 0;
  v11[0] = go;
  v11[1] = j_il2cpp_value_box_0(float_TypeInfo, &v12);
  return (System_IAsyncResult_o *)sub_1C71364(this, v11, callback, object);
}


void UICamera_FloatDelegate__EndInvoke(
        UICamera_FloatDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C71368(result, 0, method);
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
  sub_1C71354(
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
  if ( (sub_1C71470(method) & 1) != 0 )
  {
    if ( v12 == 1 )
    {
      v13 = sub_1AAD78C;
LABEL_8:
      this->fields.invoke_impl = (intptr_t)v13;
      goto LABEL_9;
    }
  }
  else
  {
    if ( !v12 )
    {
      v13 = sub_1AAD76C;
      goto LABEL_8;
    }
    if ( !object )
    {
      v15 = sub_1C71624(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C714D8(v15, 0);
    }
  }
  m_target = this->fields.m_target;
  this->fields.invoke_impl = this->fields.method_ptr;
  this->fields.method_code = (intptr_t)m_target;
LABEL_9:
  this->fields.extra_arg = (intptr_t)sub_1AAD71C;
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
  return (System_IAsyncResult_o *)sub_1C71364(this, &v6, callback, object);
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

  v3 = sub_1C71368(result, 0, method);
  if ( !v3 )
    sub_1C71608(0, v4);
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
  sub_1C71354(
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
  if ( (sub_1C71470(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C71624(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C714D8(v14, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1AAD6EC;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1AAD698;
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
  if ( (byte_4CCBA17 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_KeyCode_TypeInfo);
    byte_4CCBA17 = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(UnityEngine_KeyCode_TypeInfo, &v10);
  return (System_IAsyncResult_o *)sub_1C71364(this, v9, callback, object);
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

  v3 = sub_1C71368(result, 0, method);
  if ( !v3 )
    sub_1C71608(0, v4);
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
  sub_1C71354(
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
  if ( (sub_1C71470(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C71624(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C714D8(v14, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1AADDA8;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1AADD58;
}


System_IAsyncResult_o *UICamera_GetTouchCallback__BeginInvoke(
        UICamera_GetTouchCallback_o *this,
        int32_t index,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-48h] BYREF
  int32_t v10; // [xsp+1Ch] [xbp-34h] BYREF

  v10 = index;
  if ( (byte_4CCBA1F & 1) == 0 )
  {
    sub_1C713B0(&int_TypeInfo);
    byte_4CCBA1F = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(int_TypeInfo, &v10);
  return (System_IAsyncResult_o *)sub_1C71364(this, v9, callback, object);
}


UICamera_Touch_o *UICamera_GetTouchCallback__EndInvoke(
        UICamera_GetTouchCallback_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  return (UICamera_Touch_o *)sub_1C71368(result, 0, method);
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
  sub_1C71354(
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
  if ( (sub_1C71470(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C71624(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C714D8(v14, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1AADD44;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1AADCFC;
}


System_IAsyncResult_o *UICamera_GetTouchCountCallback__BeginInvoke(
        UICamera_GetTouchCountCallback_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0;
  return (System_IAsyncResult_o *)sub_1C71364(this, &v5, callback, object);
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

  v3 = sub_1C71368(result, 0, method);
  if ( !v3 )
    sub_1C71608(0, v4);
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
  sub_1C71354(
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
  if ( (sub_1C71470(method) & 1) == 0 )
  {
    if ( v12 == 1 )
    {
      v13 = sub_1AADC00;
      goto LABEL_6;
    }
    if ( !object )
    {
      v15 = sub_1C71624(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C714D8(v15, 0);
    }
LABEL_8:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_9;
  }
  if ( v12 != 2 )
    goto LABEL_8;
  v13 = sub_1AADC24;
LABEL_6:
  this->fields.invoke_impl = (intptr_t)v13;
LABEL_9:
  this->fields.extra_arg = (intptr_t)sub_1AADBA8;
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
  if ( (byte_4CCBA1C & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_KeyCode_TypeInfo);
    byte_4CCBA1C = 1;
  }
  v11[2] = 0;
  v11[0] = go;
  v11[1] = j_il2cpp_value_box_0(UnityEngine_KeyCode_TypeInfo, &v12);
  return (System_IAsyncResult_o *)sub_1C71364(this, v11, callback, object);
}


void UICamera_KeyCodeDelegate__EndInvoke(
        UICamera_KeyCodeDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C71368(result, 0, method);
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

  if ( (byte_4CCBA16 & 1) == 0 )
  {
    sub_1C713B0(&Method_NGUITools_FindInParents_UIRoot___);
    sub_1C713B0(&NGUITools_TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&UICamera_TypeInfo);
    byte_4CCBA16 = 1;
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
  v8 = NGUITools__FindInParents_object_(v7, (const MethodInfo_31D5C14 *)Method_NGUITools_FindInParents_UIRoot___);
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
  sub_1C71354(
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
  if ( (sub_1C71470(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C71624(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C714D8(v14, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1AAD8DC;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1AAD884;
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
  if ( (byte_4CCBA18 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Vector2_TypeInfo);
    byte_4CCBA18 = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(UnityEngine_Vector2_TypeInfo, &v10);
  return (System_IAsyncResult_o *)sub_1C71364(this, v9, callback, object);
}


void UICamera_MoveDelegate__EndInvoke(
        UICamera_MoveDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C71368(result, 0, method);
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
  sub_1C71354(
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
  if ( (sub_1C71470(method) & 1) == 0 )
  {
    if ( v12 == 1 )
    {
      v13 = sub_1AADB70;
      goto LABEL_6;
    }
    if ( !object )
    {
      v15 = sub_1C71624(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C714D8(v15, 0);
    }
LABEL_8:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_9;
  }
  if ( v12 != 2 )
    goto LABEL_8;
  v13 = sub_1AADB94;
LABEL_6:
  this->fields.invoke_impl = (intptr_t)v13;
LABEL_9:
  this->fields.extra_arg = (intptr_t)sub_1AADB18;
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
  return (System_IAsyncResult_o *)sub_1C71364(this, v7, callback, object);
}


void UICamera_ObjectDelegate__EndInvoke(
        UICamera_ObjectDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C71368(result, 0, method);
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
  sub_1C71354(
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
  if ( (sub_1C71470(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C71624(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C714D8(v14, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1AAD870;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1AAD830;
}


System_IAsyncResult_o *UICamera_OnCustomInput__BeginInvoke(
        UICamera_OnCustomInput_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0;
  return (System_IAsyncResult_o *)sub_1C71364(this, &v5, callback, object);
}


void UICamera_OnCustomInput__EndInvoke(
        UICamera_OnCustomInput_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C71368(result, 0, method);
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
  sub_1C71354(
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
  if ( (sub_1C71470(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C71624(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C714D8(v14, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1AAD81C;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1AAD7DC;
}


System_IAsyncResult_o *UICamera_OnScreenResize__BeginInvoke(
        UICamera_OnScreenResize_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0;
  return (System_IAsyncResult_o *)sub_1C71364(this, &v5, callback, object);
}


void UICamera_OnScreenResize__EndInvoke(
        UICamera_OnScreenResize_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C71368(result, 0, method);
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
  sub_1C71354(
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
  if ( (sub_1C71470(method) & 1) == 0 )
  {
    if ( v12 == 1 )
    {
      v13 = sub_1AADAE8;
      goto LABEL_6;
    }
    if ( !object )
    {
      v15 = sub_1C71624(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C714D8(v15, 0);
    }
LABEL_8:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_9;
  }
  if ( v12 != 2 )
    goto LABEL_8;
  v13 = sub_1AADB08;
LABEL_6:
  this->fields.invoke_impl = (intptr_t)v13;
LABEL_9:
  this->fields.extra_arg = (intptr_t)sub_1AADA88;
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
  if ( (byte_4CCBA1B & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Vector2_TypeInfo);
    byte_4CCBA1B = 1;
  }
  v11[2] = 0;
  v11[0] = go;
  v11[1] = j_il2cpp_value_box_0(UnityEngine_Vector2_TypeInfo, &v12);
  return (System_IAsyncResult_o *)sub_1C71364(this, v11, callback, object);
}


void UICamera_VectorDelegate__EndInvoke(
        UICamera_VectorDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C71368(result, 0, method);
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
  sub_1C71354(
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
  if ( (sub_1C71470(method) & 1) != 0 )
  {
    if ( v12 == 1 )
    {
      v13 = sub_1AAD958;
LABEL_8:
      this->fields.invoke_impl = (intptr_t)v13;
      goto LABEL_9;
    }
  }
  else
  {
    if ( !v12 )
    {
      v13 = sub_1AAD938;
      goto LABEL_8;
    }
    if ( !object )
    {
      v15 = sub_1C71624(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C714D8(v15, 0);
    }
  }
  m_target = this->fields.m_target;
  this->fields.invoke_impl = this->fields.method_ptr;
  this->fields.method_code = (intptr_t)m_target;
LABEL_9:
  this->fields.extra_arg = (intptr_t)sub_1AAD8F0;
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
  return (System_IAsyncResult_o *)sub_1C71364(this, &v6, callback, object);
}


void UICamera_VoidDelegate__EndInvoke(
        UICamera_VoidDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C71368(result, 0, method);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4CCBA20 & 1) == 0 )
  {
    sub_1C713B0(&UICamera___c_TypeInfo);
    byte_4CCBA20 = 1;
  }
  v1 = (Il2CppObject *)sub_1C715FC(UICamera___c_TypeInfo);
  System_Object___ctor(v1, 0);
  UICamera___c_TypeInfo->static_fields->__9 = (struct UICamera___c_o *)v1;
  sub_1C71354((GrandQuestFolderBoardItem_o *)UICamera___c_TypeInfo->static_fields, (int32_t)v1, v2, v3, v4, v5, v6, v7);
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
  return System_Int32__CompareTo_65539900((int32_t)r2, r1->fields.depth, 0);
}


int32_t UICamera___c___Raycast_b__125_1(
        UICamera___c_o *this,
        UICamera_DepthEntry_o *r1,
        UICamera_DepthEntry_o *r2,
        const MethodInfo *method)
{
  return System_Int32__CompareTo_65539900((int32_t)r2, r1->fields.depth, 0);
}