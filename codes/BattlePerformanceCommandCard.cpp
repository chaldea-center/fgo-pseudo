void __fastcall BattlePerformanceCommandCard___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4189E06 & 1) == 0 )
  {
    sub_B2C35C(&BattlePerformanceCommandCard_TypeInfo, v1);
    byte_4189E06 = 1;
  }
  BattlePerformanceCommandCard_TypeInfo->static_fields->cardsize_w = 200;
}


void __fastcall BattlePerformanceCommandCard___ctor(BattlePerformanceCommandCard_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Array_o *v10; // x20
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v17; // x20
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  __int64 v24; // x0
  __int64 v25; // x1
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  unsigned int v32; // w8
  __int64 v33; // x20
  float v34; // s4
  float v35; // s5
  float v36; // s6
  float v37; // s7
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  unsigned int v50; // w8
  __int64 v51; // x0
  __int64 v52; // x20
  float v53; // s4
  float v54; // s5
  float v55; // s6
  float v56; // s7
  float v57; // s4
  float v58; // s5
  float v59; // s6
  float v60; // s7
  System_String_array **v61; // x2
  System_String_array **v62; // x3
  System_Boolean_array **v63; // x4
  System_Int32_array **v64; // x5
  System_Int32_array *v65; // x6
  System_Int32_array *v66; // x7
  float v67; // s4
  float v68; // s5
  float v69; // s6
  float v70; // s7
  System_String_array **v71; // x2
  System_String_array **v72; // x3
  System_Boolean_array **v73; // x4
  System_Int32_array **v74; // x5
  System_Int32_array *v75; // x6
  System_Int32_array *v76; // x7
  unsigned int v77; // w8
  __int64 v78; // x20
  float v79; // s4
  float v80; // s5
  float v81; // s6
  float v82; // s7
  float v83; // s4
  float v84; // s5
  float v85; // s6
  float v86; // s7
  System_String_array **v87; // x2
  System_String_array **v88; // x3
  System_Boolean_array **v89; // x4
  System_Int32_array **v90; // x5
  System_Int32_array *v91; // x6
  System_Int32_array *v92; // x7
  struct BattleLogic_TutorialStringData_array *v93; // x20
  BattleLogic_TutorialStringData_o *v94; // x0
  System_Int32_array **v95; // x21
  System_String_array **v96; // x2
  System_String_array **v97; // x3
  System_Boolean_array **v98; // x4
  System_Int32_array **v99; // x5
  System_Int32_array *v100; // x6
  System_Int32_array *v101; // x7
  BattleLogic_TutorialStringData_o *v102; // x0
  System_Int32_array **v103; // x21
  System_String_array **v104; // x2
  System_String_array **v105; // x3
  System_Boolean_array **v106; // x4
  System_Int32_array **v107; // x5
  System_Int32_array *v108; // x6
  System_Int32_array *v109; // x7
  BattleLogic_TutorialStringData_o *v110; // x0
  System_Int32_array **v111; // x21
  System_String_array **v112; // x2
  System_String_array **v113; // x3
  System_Boolean_array **v114; // x4
  System_Int32_array **v115; // x5
  System_Int32_array *v116; // x6
  System_Int32_array *v117; // x7
  BattleLogic_TutorialStringData_o *v118; // x0
  System_Int32_array **v119; // x21
  System_String_array **v120; // x2
  System_String_array **v121; // x3
  System_Boolean_array **v122; // x4
  System_Int32_array **v123; // x5
  System_Int32_array *v124; // x6
  System_Int32_array *v125; // x7
  BattleLogic_TutorialStringData_o *v126; // x0
  System_Int32_array **v127; // x21
  System_String_array **v128; // x2
  System_String_array **v129; // x3
  System_Boolean_array **v130; // x4
  System_Int32_array **v131; // x5
  System_Int32_array *v132; // x6
  System_Int32_array *v133; // x7
  BattleLogic_TutorialStringData_o *v134; // x0
  System_Int32_array **v135; // x21
  System_String_array **v136; // x2
  System_String_array **v137; // x3
  System_Boolean_array **v138; // x4
  System_Int32_array **v139; // x5
  System_Int32_array *v140; // x6
  System_Int32_array *v141; // x7
  BattleLogic_TutorialStringData_o *v142; // x0
  System_Int32_array **v143; // x21
  System_String_array **v144; // x2
  System_String_array **v145; // x3
  System_Boolean_array **v146; // x4
  System_Int32_array **v147; // x5
  System_Int32_array *v148; // x6
  System_Int32_array *v149; // x7
  System_String_array **v150; // x2
  System_String_array **v151; // x3
  System_Boolean_array **v152; // x4
  System_Int32_array **v153; // x5
  System_Int32_array *v154; // x6
  System_Int32_array *v155; // x7
  __int64 v156; // x0
  __int64 v157; // x0
  __int128 v158; // [xsp+0h] [xbp-B0h] BYREF
  MethodInfo methoda; // [xsp+10h] [xbp-A0h] BYREF
  System_RuntimeFieldHandle_o v160; // 0:w1.4
  UnityEngine_Vector2_o v161; // 0:s1.4,4:s2.4
  UnityEngine_Vector2_o v162; // 0:s1.4,4:s2.4
  UnityEngine_Vector2_o v163; // 0:s1.4,4:s2.4
  UnityEngine_Vector2_o v164; // 0:s1.4,4:s2.4
  UnityEngine_Vector2_o v165; // 0:s1.4,4:s2.4
  UnityEngine_Vector2_o v166; // 0:s1.4,4:s2.4
  UnityEngine_Vector2_o v167; // 0:s1.4,4:s2.4
  UnityEngine_Rect_o v168; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v169; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v170; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v171; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v172; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v173; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4189E05 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject___ctor__, method);
    sub_B2C35C(&System_Collections_Generic_List_GameObject__TypeInfo, v3);
    sub_B2C35C(&UnityEngine_Rect___TypeInfo, v4);
    sub_B2C35C(&float___TypeInfo, v5);
    sub_B2C35C(&BattleLogic_TutorialStringData___TypeInfo, v6);
    sub_B2C35C(&BattleLogic_TutorialStringData_TypeInfo, v7);
    sub_B2C35C(
      &Field__PrivateImplementationDetails__799E0516C1E7B26C4E41AED488FCA1AA362E0A983FFBF28FFFB7A165E9BB2096,
      v8);
    sub_B2C35C(&UnityEngine_Vector2___TypeInfo, v9);
    byte_4189E05 = 1;
  }
  v10 = (System_Array_o *)sub_B2C374(float___TypeInfo, 5LL);
  v160.fields.value = Field__PrivateImplementationDetails__799E0516C1E7B26C4E41AED488FCA1AA362E0A983FFBF28FFFB7A165E9BB2096;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_43133304(v10, v160, 0LL);
  this->fields.COMMAND_STAMP_POS_X = (struct System_Single_array *)v10;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.COMMAND_STAMP_POS_X,
    (System_Int32_array **)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  this->fields.COMMAND_STAMP_POS_Y = -121.0;
  this->fields.firstBonusAnimationMaxTime = 3;
  *(_QWORD *)&this->fields.CARD_ROOT_BASE_X = 0xC353000043CD0000LL;
  this->fields.npGaugeEaseType = 15;
  *(_OWORD *)&this->fields.npGaugeEffectMoveDelayTime = xmmword_31A40F0;
  *(int32x2_t *)&this->fields.miniScale.fields.x = vdup_n_s32(0x3E99999Au);
  this->fields.miniScale.fields.z = 1.0;
  v17 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v17,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.aubelist = (struct System_Collections_Generic_List_GameObject__o *)v17;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.aubelist,
    (System_Int32_array **)v17,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  v24 = sub_B2C374(UnityEngine_Vector2___TypeInfo, 3LL);
  if ( !v24 )
    goto LABEL_47;
  v32 = *(_DWORD *)(v24 + 24);
  if ( !v32 )
    goto LABEL_46;
  *(_QWORD *)(v24 + 32) = 0LL;
  if ( v32 == 1 )
    goto LABEL_46;
  *(_QWORD *)(v24 + 40) = 3276275712LL;
  if ( v32 <= 2 )
    goto LABEL_46;
  *(_QWORD *)(v24 + 48) = 3284664320LL;
  this->fields.TutorialArrow01 = (struct UnityEngine_Vector2_array *)v24;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.TutorialArrow01,
    (System_Int32_array **)v24,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  v33 = sub_B2C374(UnityEngine_Rect___TypeInfo, 1LL);
  v168.fields.m_XMin = -500.0;
  v168.fields.m_YMin = -230.0;
  v168.fields.m_Width = 600.0;
  v168.fields.m_Height = 250.0;
  *(_QWORD *)&methoda.token = 0LL;
  *(_QWORD *)&methoda.slot = 0LL;
  UnityEngine_Rect___ctor(v168, v34, v35, v36, v37, (const MethodInfo *)&methoda.token);
  if ( !v33 )
    goto LABEL_47;
  if ( !*(_DWORD *)(v33 + 24) )
    goto LABEL_46;
  *(_OWORD *)(v33 + 32) = *(_OWORD *)&methoda.token;
  this->fields.TutorialSquare01 = (struct UnityEngine_Rect_array *)v33;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.TutorialSquare01,
    (System_Int32_array **)v33,
    v38,
    v39,
    v40,
    v41,
    v42,
    v43);
  v24 = sub_B2C374(UnityEngine_Vector2___TypeInfo, 3LL);
  if ( !v24 )
    goto LABEL_47;
  v50 = *(_DWORD *)(v24 + 24);
  if ( !v50 )
    goto LABEL_46;
  *(_QWORD *)(v24 + 32) = 0x43160000C3270000LL;
  if ( v50 == 1 )
    goto LABEL_46;
  *(_QWORD *)(v24 + 40) = 0xC2A00000C3480000LL;
  if ( v50 <= 2 )
    goto LABEL_46;
  *(_QWORD *)(v24 + 48) = 0xC2A00000C3C80000LL;
  this->fields.TutorialArrow05 = (struct UnityEngine_Vector2_array *)v24;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.TutorialArrow05,
    (System_Int32_array **)v24,
    v44,
    v45,
    v46,
    v47,
    v48,
    v49);
  v51 = sub_B2C374(UnityEngine_Rect___TypeInfo, 2LL);
  v169.fields.m_XMin = -270.0;
  v169.fields.m_Width = 210.0;
  v52 = v51;
  v169.fields.m_YMin = -30.0;
  v169.fields.m_Height = 250.0;
  methoda.rgctx_data = 0LL;
  methoda.genericMethod = 0LL;
  UnityEngine_Rect___ctor(v169, v53, v54, v55, v56, (const MethodInfo *)&methoda.rgctx_data);
  if ( !v52 )
    goto LABEL_47;
  if ( !*(_DWORD *)(v52 + 24) )
    goto LABEL_46;
  v170.fields.m_Width = 400.0;
  *(_OWORD *)(v52 + 32) = *(_OWORD *)&methoda.rgctx_data;
  v170.fields.m_XMin = -500.0;
  v170.fields.m_YMin = -230.0;
  v170.fields.m_Height = 250.0;
  methoda.return_type = 0LL;
  methoda.parameters = 0LL;
  UnityEngine_Rect___ctor(v170, v57, v58, v59, v60, (const MethodInfo *)&methoda.return_type);
  if ( *(_DWORD *)(v52 + 24) <= 1u )
    goto LABEL_46;
  *(_OWORD *)(v52 + 48) = *(_OWORD *)&methoda.return_type;
  this->fields.TutorialSquare05 = (struct UnityEngine_Rect_array *)v52;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.TutorialSquare05,
    (System_Int32_array **)v52,
    v61,
    v62,
    v63,
    v64,
    v65,
    v66);
  v171.fields.m_XMin = 300.0;
  this->fields.TutorialArrow22 = (struct UnityEngine_Vector2_o)0x4348000043C58000LL;
  v171.fields.m_Height = 100.0;
  v171.fields.m_YMin = 180.0;
  v171.fields.m_Width = 200.0;
  methoda.name = 0LL;
  methoda.klass = 0LL;
  UnityEngine_Rect___ctor(v171, v67, v68, v69, v70, (const MethodInfo *)&methoda.name);
  this->fields.TutorialSquare22 = *(struct UnityEngine_Rect_o *)&methoda.name;
  v24 = sub_B2C374(UnityEngine_Vector2___TypeInfo, 3LL);
  if ( !v24 )
    goto LABEL_47;
  v77 = *(_DWORD *)(v24 + 24);
  if ( !v77 )
    goto LABEL_46;
  *(_QWORD *)(v24 + 32) = 0xC248000000000000LL;
  if ( v77 == 1 )
    goto LABEL_46;
  *(_QWORD *)(v24 + 40) = 0xC2480000C3480000LL;
  if ( v77 <= 2 )
    goto LABEL_46;
  *(_QWORD *)(v24 + 48) = 0xC2480000C3C80000LL;
  this->fields.TutorialArrow31 = (struct UnityEngine_Vector2_array *)v24;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.TutorialArrow31,
    (System_Int32_array **)v24,
    v71,
    v72,
    v73,
    v74,
    v75,
    v76);
  v78 = sub_B2C374(UnityEngine_Rect___TypeInfo, 2LL);
  v172.fields.m_XMin = -500.0;
  v172.fields.m_YMin = -230.0;
  v172.fields.m_Width = 600.0;
  v172.fields.m_Height = 250.0;
  methoda.methodPointer = 0LL;
  methoda.invoker_method = 0LL;
  UnityEngine_Rect___ctor(v172, v79, v80, v81, v82, &methoda);
  if ( !v78 )
    goto LABEL_47;
  if ( !*(_DWORD *)(v78 + 24) )
    goto LABEL_46;
  *(_OWORD *)(v78 + 32) = *(_OWORD *)&methoda.methodPointer;
  v173.fields.m_XMin = 230.0;
  v173.fields.m_YMin = -290.0;
  v173.fields.m_Height = 70.0;
  v173.fields.m_Width = 130.0;
  v158 = 0uLL;
  UnityEngine_Rect___ctor(v173, v83, v84, v85, v86, (const MethodInfo *)&v158);
  if ( *(_DWORD *)(v78 + 24) <= 1u )
    goto LABEL_46;
  *(_OWORD *)(v78 + 48) = v158;
  this->fields.TutorialSquare32 = (struct UnityEngine_Rect_array *)v78;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.TutorialSquare32,
    (System_Int32_array **)v78,
    v87,
    v88,
    v89,
    v90,
    v91,
    v92);
  v93 = (struct BattleLogic_TutorialStringData_array *)sub_B2C374(BattleLogic_TutorialStringData___TypeInfo, 7LL);
  v94 = (BattleLogic_TutorialStringData_o *)sub_B2C42C(BattleLogic_TutorialStringData_TypeInfo);
  v161.fields.x = 0.0;
  v161.fields.y = 160.0;
  v95 = (System_Int32_array **)v94;
  BattleLogic_TutorialStringData___ctor(v94, 0.0, v161, 26, 0LL);
  if ( !v93 )
LABEL_47:
    sub_B2C434(v24, v25);
  if ( v95 )
  {
    v24 = sub_B2C41C(v95, v93->obj.klass->_1.element_class);
    if ( !v24 )
      goto LABEL_48;
  }
  if ( !v93->max_length )
    goto LABEL_46;
  v93->m_Items[0] = (BattleLogic_TutorialStringData_o *)v95;
  sub_B2C2F8((BattleServantConfConponent_o *)v93->m_Items, v95, v96, v97, v98, v99, v100, v101);
  v102 = (BattleLogic_TutorialStringData_o *)sub_B2C42C(BattleLogic_TutorialStringData_TypeInfo);
  v162.fields.x = 0.0;
  v162.fields.y = 160.0;
  v103 = (System_Int32_array **)v102;
  BattleLogic_TutorialStringData___ctor(v102, 0.0, v162, 26, 0LL);
  if ( v103 )
  {
    v24 = sub_B2C41C(v103, v93->obj.klass->_1.element_class);
    if ( !v24 )
      goto LABEL_48;
  }
  if ( v93->max_length <= 1 )
    goto LABEL_46;
  v93->m_Items[1] = (BattleLogic_TutorialStringData_o *)v103;
  sub_B2C2F8((BattleServantConfConponent_o *)&v93->m_Items[1], v103, v104, v105, v106, v107, v108, v109);
  v110 = (BattleLogic_TutorialStringData_o *)sub_B2C42C(BattleLogic_TutorialStringData_TypeInfo);
  v163.fields.x = 0.0;
  v163.fields.y = 160.0;
  v111 = (System_Int32_array **)v110;
  BattleLogic_TutorialStringData___ctor(v110, 0.0, v163, 26, 0LL);
  if ( v111 )
  {
    v24 = sub_B2C41C(v111, v93->obj.klass->_1.element_class);
    if ( !v24 )
      goto LABEL_48;
  }
  if ( v93->max_length <= 2 )
    goto LABEL_46;
  v93->m_Items[2] = (BattleLogic_TutorialStringData_o *)v111;
  sub_B2C2F8((BattleServantConfConponent_o *)&v93->m_Items[2], v111, v112, v113, v114, v115, v116, v117);
  v118 = (BattleLogic_TutorialStringData_o *)sub_B2C42C(BattleLogic_TutorialStringData_TypeInfo);
  v164.fields.y = 60.0;
  v164.fields.x = 200.0;
  v119 = (System_Int32_array **)v118;
  BattleLogic_TutorialStringData___ctor(v118, 0.0, v164, 28, 0LL);
  if ( v119 )
  {
    v24 = sub_B2C41C(v119, v93->obj.klass->_1.element_class);
    if ( !v24 )
      goto LABEL_48;
  }
  if ( v93->max_length <= 3 )
    goto LABEL_46;
  v93->m_Items[3] = (BattleLogic_TutorialStringData_o *)v119;
  sub_B2C2F8((BattleServantConfConponent_o *)&v93->m_Items[3], v119, v120, v121, v122, v123, v124, v125);
  v126 = (BattleLogic_TutorialStringData_o *)sub_B2C42C(BattleLogic_TutorialStringData_TypeInfo);
  v165.fields.x = 310.0;
  v165.fields.y = -30.0;
  v127 = (System_Int32_array **)v126;
  BattleLogic_TutorialStringData___ctor(v126, 180.0, v165, 26, 0LL);
  if ( v127 )
  {
    v24 = sub_B2C41C(v127, v93->obj.klass->_1.element_class);
    if ( !v24 )
      goto LABEL_48;
  }
  if ( v93->max_length <= 4 )
    goto LABEL_46;
  v93->m_Items[4] = (BattleLogic_TutorialStringData_o *)v127;
  sub_B2C2F8((BattleServantConfConponent_o *)&v93->m_Items[4], v127, v128, v129, v130, v131, v132, v133);
  v134 = (BattleLogic_TutorialStringData_o *)sub_B2C42C(BattleLogic_TutorialStringData_TypeInfo);
  v166.fields.y = 140.0;
  v166.fields.x = 0.0;
  v135 = (System_Int32_array **)v134;
  BattleLogic_TutorialStringData___ctor(v134, 0.0, v166, 22, 0LL);
  if ( v135 )
  {
    v24 = sub_B2C41C(v135, v93->obj.klass->_1.element_class);
    if ( !v24 )
      goto LABEL_48;
  }
  if ( v93->max_length <= 5 )
    goto LABEL_46;
  v93->m_Items[5] = (BattleLogic_TutorialStringData_o *)v135;
  sub_B2C2F8((BattleServantConfConponent_o *)&v93->m_Items[5], v135, v136, v137, v138, v139, v140, v141);
  v142 = (BattleLogic_TutorialStringData_o *)sub_B2C42C(BattleLogic_TutorialStringData_TypeInfo);
  v167.fields.x = 0.0;
  v167.fields.y = 130.0;
  v143 = (System_Int32_array **)v142;
  BattleLogic_TutorialStringData___ctor(v142, 0.0, v167, 26, 0LL);
  if ( v143 )
  {
    v24 = sub_B2C41C(v143, v93->obj.klass->_1.element_class);
    if ( !v24 )
    {
LABEL_48:
      v157 = sub_B2C454(v24);
      sub_B2C400(v157, 0LL);
    }
  }
  if ( v93->max_length <= 6 )
  {
LABEL_46:
    v156 = sub_B2C460(v24);
    sub_B2C400(v156, 0LL);
  }
  v93->m_Items[6] = (BattleLogic_TutorialStringData_o *)v143;
  sub_B2C2F8((BattleServantConfConponent_o *)&v93->m_Items[6], v143, v144, v145, v146, v147, v148, v149);
  this->fields.TSD = v93;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.TSD,
    (System_Int32_array **)v93,
    v150,
    v151,
    v152,
    v153,
    v154,
    v155);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceCommandCard__ActivateFirstBonusObject(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *firstBonusSimpleAnimation; // x20
  const MethodInfo *v5; // x1
  UnityEngine_Behaviour_o *v6; // x0
  UnityEngine_Object_o *firstBonusAnimation; // x20
  UnityEngine_GameObject_o *firstBonusObject; // x20
  UnityEngine_Component_o *transform; // x0
  UnityEngine_Transform_o *v10; // x20
  int v11; // s0
  float v14; // s0
  float v15; // s1
  float v16; // s2
  float v17; // s8
  float v18; // s10
  float v19; // s9
  UnityEngine_Object_o *v20; // x20
  UnityEngine_Object_o *v21; // x20
  System_Collections_IEnumerator_o *BonusAnimationPlay; // x1
  UnityEngine_Vector3_o v23; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4189DC5 & 1) == 0 )
  {
    sub_B2C35C(&FSUtility_TypeInfo, method);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v3);
    byte_4189DC5 = 1;
  }
  firstBonusSimpleAnimation = (UnityEngine_Object_o *)this->fields.firstBonusSimpleAnimation;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(firstBonusSimpleAnimation, 0LL, 0LL) )
  {
    v6 = (UnityEngine_Behaviour_o *)this->fields.firstBonusSimpleAnimation;
    if ( !v6 )
      goto LABEL_39;
    goto LABEL_14;
  }
  firstBonusAnimation = (UnityEngine_Object_o *)this->fields.firstBonusAnimation;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(firstBonusAnimation, 0LL, 0LL) )
  {
    v6 = (UnityEngine_Behaviour_o *)this->fields.firstBonusAnimation;
    if ( !v6 )
      goto LABEL_39;
LABEL_14:
    UnityEngine_Behaviour__set_enabled(v6, 0, 0LL);
  }
  firstBonusObject = this->fields.firstBonusObject;
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SetParent(firstBonusObject, transform, 0LL);
  v6 = (UnityEngine_Behaviour_o *)this->fields.firstBonusObject;
  if ( !v6 )
    goto LABEL_39;
  v10 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v6, 0LL);
  *(UnityEngine_Vector3_o *)&v11 = UnityEngine_Vector3__get_one(0LL);
  if ( !v10 )
    goto LABEL_39;
  UnityEngine_Transform__set_localScale(v10, *(UnityEngine_Vector3_o *)&v11, 0LL);
  if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  if ( !FSUtility__IsUnderVista(0LL) )
  {
    v6 = (UnityEngine_Behaviour_o *)this->fields.firstBonusObject;
    if ( v6 )
    {
      v6 = (UnityEngine_Behaviour_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v6, 0LL);
      if ( v6 )
      {
        *(UnityEngine_Vector3_o *)&v14 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)v6, 0LL);
        v6 = (UnityEngine_Behaviour_o *)this->fields.firstBonusObject;
        if ( v6 )
        {
          v17 = v14;
          v18 = v15;
          v19 = v16;
          v6 = (UnityEngine_Behaviour_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v6, 0LL);
          if ( v6 )
          {
            v23.fields.y = v18 + 17.0;
            v23.fields.x = v17;
            v23.fields.z = v19;
            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)v6, v23, 0LL);
            goto LABEL_26;
          }
        }
      }
    }
LABEL_39:
    sub_B2C434(v6, v5);
  }
LABEL_26:
  v6 = (UnityEngine_Behaviour_o *)this->fields.firstBonusObject;
  if ( !v6 )
    goto LABEL_39;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v6, 0, 0LL);
  v6 = (UnityEngine_Behaviour_o *)this->fields.firstBonusObject;
  if ( !v6 )
    goto LABEL_39;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v6, 1, 0LL);
  v20 = (UnityEngine_Object_o *)this->fields.firstBonusSimpleAnimation;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v20, 0LL, 0LL) )
  {
    v6 = (UnityEngine_Behaviour_o *)this->fields.firstBonusSimpleAnimation;
    if ( !v6 )
      goto LABEL_39;
LABEL_33:
    UnityEngine_Behaviour__set_enabled(v6, 1, 0LL);
    goto LABEL_40;
  }
  v21 = (UnityEngine_Object_o *)this->fields.firstBonusAnimation;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v21, 0LL, 0LL) )
  {
    v6 = (UnityEngine_Behaviour_o *)this->fields.firstBonusAnimation;
    if ( !v6 )
      goto LABEL_39;
    goto LABEL_33;
  }
LABEL_40:
  BonusAnimationPlay = BattlePerformanceCommandCard__DelayFirstBonusAnimationPlay(this, v5);
  UnityEngine_MonoBehaviour__StartCoroutine_35309748((UnityEngine_MonoBehaviour_o *)this, BonusAnimationPlay, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceCommandCard__AddExtraCard(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  BattlePerformanceCommandCard_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct BattleCommandComponent_array *selectedcomponents; // x8
  BattleCommandComponent_o *v7; // x8
  BattleCommandData_o *data; // x21
  BattleCommandData_o *v9; // x20
  struct BattleCommandComponent_array *v10; // x8
  BattlePerformanceCommandCard_o *v11; // x21
  UnityEngine_Transform_o *transform; // x22
  int v13; // s0
  struct BattleCommandComponent_array *v16; // x8
  UnityEngine_Transform_o *v17; // x22
  int v18; // s0
  struct BattleCommandComponent_array *v21; // x8
  struct BattleCommandComponent_array *v22; // x8
  struct BattleCommandComponent_array *v23; // x8
  WebViewObject_o *Component_WebViewObject; // x20
  int v25; // s0
  struct BattleCommandComponent_array *v29; // x8
  struct BattleCommandComponent_array *v30; // x8
  __int64 v31; // x0

  v2 = this;
  if ( (byte_4189DD3 & 1) == 0 )
  {
    sub_B2C35C(&BattleCommandData_TypeInfo, method);
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_UIWidget___, v3);
    sub_B2C35C(&SeManager_TypeInfo, v4);
    this = (BattlePerformanceCommandCard_o *)sub_B2C35C(&StringLiteral_18184/*"ef_excard02"*/, v5);
    byte_4189DD3 = 1;
  }
  selectedcomponents = v2->fields.selectedcomponents;
  if ( !selectedcomponents )
    goto LABEL_43;
  if ( !selectedcomponents->max_length )
    goto LABEL_44;
  v7 = selectedcomponents->m_Items[0];
  if ( !v7 )
    goto LABEL_43;
  data = v7->fields.data;
  v9 = (BattleCommandData_o *)sub_B2C42C(BattleCommandData_TypeInfo);
  BattleCommandData___ctor_18398436(v9, data, 0LL);
  if ( !v9 )
    goto LABEL_43;
  BattleCommandData__ClearCommandCode(v9, 0LL);
  v9->fields.commandAssistId = 0;
  v9->fields.commandCardParam = 0;
  BattleCommandData__setTypeAddAttack(v9, 0LL);
  this = (BattlePerformanceCommandCard_o *)v2->fields.Bdata;
  if ( !this )
    goto LABEL_43;
  this = (BattlePerformanceCommandCard_o *)BattleData__getServantData((BattleData_o *)this, v9->fields.uniqueId, 0LL);
  v10 = v2->fields.selectedcomponents;
  if ( !v10 )
    goto LABEL_43;
  if ( v10->max_length <= 3 )
    goto LABEL_44;
  v11 = this;
  this = (BattlePerformanceCommandCard_o *)v10->m_Items[3];
  if ( !this )
    goto LABEL_43;
  this = (BattlePerformanceCommandCard_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_43;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  *(UnityEngine_Vector3_o *)&v13 = UnityEngine_Vector3__get_one(0LL);
  if ( !transform )
    goto LABEL_43;
  UnityEngine_Transform__set_localScale(transform, *(UnityEngine_Vector3_o *)&v13, 0LL);
  v16 = v2->fields.selectedcomponents;
  if ( !v16 )
    goto LABEL_43;
  if ( v16->max_length <= 3 )
    goto LABEL_44;
  this = (BattlePerformanceCommandCard_o *)v16->m_Items[3];
  if ( !this )
    goto LABEL_43;
  this = (BattlePerformanceCommandCard_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_43;
  this = (BattlePerformanceCommandCard_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  if ( !v2->fields.extraPos )
    goto LABEL_43;
  v17 = (UnityEngine_Transform_o *)this;
  *(UnityEngine_Vector3_o *)&v18 = UnityEngine_Transform__get_position(v2->fields.extraPos, 0LL);
  if ( !v17 )
    goto LABEL_43;
  UnityEngine_Transform__set_position(v17, *(UnityEngine_Vector3_o *)&v18, 0LL);
  v21 = v2->fields.selectedcomponents;
  if ( !v21 )
    goto LABEL_43;
  if ( v21->max_length <= 3 )
    goto LABEL_44;
  this = (BattlePerformanceCommandCard_o *)v21->m_Items[3];
  if ( !this )
    goto LABEL_43;
  this = (BattlePerformanceCommandCard_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_43;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  v22 = v2->fields.selectedcomponents;
  if ( !v22 )
    goto LABEL_43;
  if ( v22->max_length <= 3 )
    goto LABEL_44;
  this = (BattlePerformanceCommandCard_o *)v22->m_Items[3];
  if ( !this )
    goto LABEL_43;
  BattleCommandComponent__setData((BattleCommandComponent_o *)this, v9, (BattleServantData_o *)v11, 0, 1, 0, 0LL);
  v23 = v2->fields.selectedcomponents;
  if ( !v23 )
    goto LABEL_43;
  if ( v23->max_length <= 3 )
    goto LABEL_44;
  this = (BattlePerformanceCommandCard_o *)v23->m_Items[3];
  if ( !this )
    goto LABEL_43;
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              (UnityEngine_Component_o *)this,
                              (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  *(UnityEngine_Color_o *)&v25 = UnityEngine_Color__get_white(0LL);
  if ( !Component_WebViewObject )
    goto LABEL_43;
  UIWidget__set_color((UIWidget_o *)Component_WebViewObject, *(UnityEngine_Color_o *)&v25, 0LL);
  v29 = v2->fields.selectedcomponents;
  if ( !v29 )
    goto LABEL_43;
  if ( v29->max_length <= 3 )
  {
LABEL_44:
    v31 = sub_B2C460(this);
    sub_B2C400(v31, 0LL);
  }
  this = (BattlePerformanceCommandCard_o *)v29->m_Items[3];
  if ( !this )
    goto LABEL_43;
  BattleCommandComponent__attachEffect((BattleCommandComponent_o *)this, (System_String_o *)StringLiteral_18184/*"ef_excard02"*/, 4, 0LL);
  this = (BattlePerformanceCommandCard_o *)v2->fields.Bdata;
  if ( !this )
    goto LABEL_43;
  this = (BattlePerformanceCommandCard_o *)BattleData__getServantData(
                                             (BattleData_o *)this,
                                             (int32_t)this->fields.highSpeedButton,
                                             0LL);
  if ( this )
  {
    v30 = v2->fields.selectedcomponents;
    if ( !v30 )
      goto LABEL_43;
    if ( v30->max_length > 3 )
    {
      method = (const MethodInfo *)this;
      this = (BattlePerformanceCommandCard_o *)v30->m_Items[3];
      if ( this )
      {
        BattleCommandComponent__updateClassMag((BattleCommandComponent_o *)this, (BattleServantData_o *)method, 0LL);
        goto LABEL_39;
      }
LABEL_43:
      sub_B2C434(this, method);
    }
    goto LABEL_44;
  }
LABEL_39:
  if ( (BYTE3(SeManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SeManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
  SeManager__PlayCommonSe(13, 0LL);
}


System_Collections_IEnumerator_o *__fastcall BattlePerformanceCommandCard__DelayFirstBonusAnimationPlay(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_4189DC6 & 1) == 0 )
  {
    sub_B2C35C(&BattlePerformanceCommandCard__DelayFirstBonusAnimationPlay_d__122_TypeInfo, method);
    byte_4189DC6 = 1;
  }
  v3 = sub_B2C42C(BattlePerformanceCommandCard__DelayFirstBonusAnimationPlay_d__122_TypeInfo);
  BattlePerformanceCommandCard__DelayFirstBonusAnimationPlay_d__122___ctor(
    (BattlePerformanceCommandCard__DelayFirstBonusAnimationPlay_d__122_o *)v3,
    0,
    0LL);
  if ( !v3 )
    sub_B2C434(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v3 + 32), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v3;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceCommandCard__DistributeCriticalPoint(
        BattlePerformanceCommandCard_o *this,
        int32_t criticalPercentageToAdd,
        bool applyOnlyToSelectedCards,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x20
  __int64 v18; // x0
  __int64 v19; // x1
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_Collections_Generic_IEnumerable_TSource__o *commandCompArray; // x21
  BattlePerformanceCommandCard___c_c *v27; // x0
  struct BattlePerformanceCommandCard___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__120_0; // x22
  Il2CppObject *v30; // x23
  struct BattlePerformanceCommandCard___c_StaticFields *v31; // x0
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v38; // x21
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v39; // x19
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v40; // x19

  if ( (byte_4189DC4 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_BattleCommandComponent___ctor__, *(_QWORD *)&criticalPercentageToAdd);
    sub_B2C35C(&System_Action_BattleCommandComponent__TypeInfo, v7);
    sub_B2C35C(&Method_BasicHelper_ForEach_BattleCommandComponent___, v8);
    sub_B2C35C(&Method_System_Linq_Enumerable_Where_BattleCommandComponent___, v9);
    sub_B2C35C(&Method_System_Func_BattleCommandComponent__bool___ctor__, v10);
    sub_B2C35C(&System_Func_BattleCommandComponent__bool__TypeInfo, v11);
    sub_B2C35C(&Method_BattlePerformanceCommandCard___c__DistributeCriticalPoint_b__120_0__, v12);
    sub_B2C35C(&Method_BattlePerformanceCommandCard___c__DisplayClass120_0__DistributeCriticalPoint_b__1__, v13);
    sub_B2C35C(&Method_BattlePerformanceCommandCard___c__DisplayClass120_0__DistributeCriticalPoint_b__2__, v14);
    sub_B2C35C(&BattlePerformanceCommandCard___c__DisplayClass120_0_TypeInfo, v15);
    sub_B2C35C(&BattlePerformanceCommandCard___c_TypeInfo, v16);
    byte_4189DC4 = 1;
  }
  v17 = sub_B2C42C(BattlePerformanceCommandCard___c__DisplayClass120_0_TypeInfo);
  BattlePerformanceCommandCard___c__DisplayClass120_0___ctor(
    (BattlePerformanceCommandCard___c__DisplayClass120_0_o *)v17,
    0LL);
  if ( !v17 )
    sub_B2C434(v18, v19);
  *(_QWORD *)(v17 + 16) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v17 + 16), (System_Int32_array **)this, v20, v21, v22, v23, v24, v25);
  *(_DWORD *)(v17 + 24) = criticalPercentageToAdd;
  commandCompArray = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.commandCompArray;
  v27 = BattlePerformanceCommandCard___c_TypeInfo;
  if ( (BYTE3(BattlePerformanceCommandCard___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattlePerformanceCommandCard___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattlePerformanceCommandCard___c_TypeInfo);
    v27 = BattlePerformanceCommandCard___c_TypeInfo;
  }
  static_fields = v27->static_fields;
  _9__120_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__120_0;
  if ( !_9__120_0 )
  {
    if ( (BYTE3(v27->vtable._0_Equals.methodPtr) & 4) != 0 && !v27->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v27);
      static_fields = BattlePerformanceCommandCard___c_TypeInfo->static_fields;
    }
    v30 = (Il2CppObject *)static_fields->__9;
    _9__120_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_BattleCommandComponent__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__120_0,
      v30,
      Method_BattlePerformanceCommandCard___c__DistributeCriticalPoint_b__120_0__,
      (const MethodInfo_2711C04 *)Method_System_Func_BattleCommandComponent__bool___ctor__);
    v31 = BattlePerformanceCommandCard___c_TypeInfo->static_fields;
    v31->__9__120_0 = (struct System_Func_BattleCommandComponent__bool__o *)_9__120_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v31->__9__120_0,
      (System_Int32_array **)_9__120_0,
      v32,
      v33,
      v34,
      v35,
      v36,
      v37);
  }
  v38 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          commandCompArray,
          (System_Func_TSource__bool__o *)_9__120_0,
          (const MethodInfo_1A9F3E4 *)Method_System_Linq_Enumerable_Where_BattleCommandComponent___);
  if ( applyOnlyToSelectedCards )
  {
    v39 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_BattleCommandComponent__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      v39,
      (Il2CppObject *)v17,
      Method_BattlePerformanceCommandCard___c__DisplayClass120_0__DistributeCriticalPoint_b__1__,
      (const MethodInfo_2711C04 *)Method_System_Func_BattleCommandComponent__bool___ctor__);
    v38 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
            v38,
            (System_Func_TSource__bool__o *)v39,
            (const MethodInfo_1A9F3E4 *)Method_System_Linq_Enumerable_Where_BattleCommandComponent___);
  }
  v40 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B2C42C(System_Action_BattleCommandComponent__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v40,
    (Il2CppObject *)v17,
    Method_BattlePerformanceCommandCard___c__DisplayClass120_0__DistributeCriticalPoint_b__2__,
    (const MethodInfo_24BBAD8 *)Method_System_Action_BattleCommandComponent___ctor__);
  BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
    (System_Collections_Generic_IEnumerable_T__o *)v38,
    (System_Action_T__o *)v40,
    (const MethodInfo_1727C50 *)Method_BasicHelper_ForEach_BattleCommandComponent___);
}


float __fastcall BattlePerformanceCommandCard__FSCardRootOffsetY(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  bool IsUnderVista; // w0
  float result; // s0

  if ( (byte_4189DF3 & 1) == 0 )
  {
    sub_B2C35C(&FSUtility_TypeInfo, method);
    byte_4189DF3 = 1;
  }
  if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  IsUnderVista = FSUtility__IsUnderVista(0LL);
  result = 17.0;
  if ( IsUnderVista )
    return 0.0;
  return result;
}


UnityEngine_Vector2_array *__fastcall BattlePerformanceCommandCard__FSTutorialArrowCard(
        BattlePerformanceCommandCard_o *this,
        UnityEngine_Vector2_array *arrow,
        const MethodInfo *method)
{
  struct System_Single_array *COMMAND_STAMP_POS_X; // x8
  UnityEngine_Vector2_array *v5; // x20
  unsigned __int64 v6; // x21
  float *p_COMMAND_STAMP_POS_Z; // x22
  UnityEngine_Vector2_o *v8; // x23
  float x; // w9
  __int64 v11; // x0

  if ( (byte_4189DF4 & 1) == 0 )
  {
    this = (BattlePerformanceCommandCard_o *)sub_B2C35C(&UnityEngine_Vector2___TypeInfo, arrow);
    byte_4189DF4 = 1;
  }
  if ( !arrow
    || (this = (BattlePerformanceCommandCard_o *)sub_B2C374(UnityEngine_Vector2___TypeInfo, arrow->max_length)) == 0LL )
  {
    sub_B2C434(this, arrow);
  }
  COMMAND_STAMP_POS_X = this->fields.COMMAND_STAMP_POS_X;
  v5 = (UnityEngine_Vector2_array *)this;
  if ( (int)COMMAND_STAMP_POS_X >= 1 )
  {
    v6 = 0LL;
    p_COMMAND_STAMP_POS_Z = &this->fields.COMMAND_STAMP_POS_Z;
    v8 = &arrow->m_Items[1];
    do
    {
      if ( v6 >= arrow->max_length || v6 >= (unsigned int)COMMAND_STAMP_POS_X )
      {
        v11 = sub_B2C460(this);
        sub_B2C400(v11, 0LL);
      }
      x = v8->fields.x;
      *(p_COMMAND_STAMP_POS_Z - 1) = v8[-1].fields.y;
      *p_COMMAND_STAMP_POS_Z = x;
      *p_COMMAND_STAMP_POS_Z = BattlePerformanceCommandCard__FSCardRootOffsetY(this, (const MethodInfo *)arrow) + x;
      p_COMMAND_STAMP_POS_Z += 2;
      LODWORD(COMMAND_STAMP_POS_X) = v5->max_length;
      ++v6;
      ++v8;
    }
    while ( (__int64)v6 < (int)COMMAND_STAMP_POS_X );
  }
  return v5;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Rect_array *__fastcall BattlePerformanceCommandCard__FSTutorialSquareCard(
        BattlePerformanceCommandCard_o *this,
        UnityEngine_Rect_array *square,
        const MethodInfo *method)
{
  int v4; // s1
  struct System_Single_array *COMMAND_STAMP_POS_X; // x8
  UnityEngine_Rect_array *v8; // x20
  unsigned __int64 v9; // x22
  MethodInfo *p_COMMAND_STAMP_POS_Y; // x21
  __int128 v11; // q0
  float y; // s0
  BattlePerformanceCommandCard_o *v13; // x0
  const MethodInfo *v14; // x1
  float v15; // s4
  __int64 v17; // x0
  UnityEngine_Rect_o v18; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4189DF5 & 1) == 0 )
  {
    this = (BattlePerformanceCommandCard_o *)sub_B2C35C(&UnityEngine_Rect___TypeInfo, square);
    byte_4189DF5 = 1;
  }
  if ( !square
    || (this = (BattlePerformanceCommandCard_o *)sub_B2C374(UnityEngine_Rect___TypeInfo, square->max_length)) == 0LL )
  {
    sub_B2C434(this, square);
  }
  COMMAND_STAMP_POS_X = this->fields.COMMAND_STAMP_POS_X;
  v8 = (UnityEngine_Rect_array *)this;
  if ( (int)COMMAND_STAMP_POS_X >= 1 )
  {
    v9 = 0LL;
    p_COMMAND_STAMP_POS_Y = (MethodInfo *)&this->fields.COMMAND_STAMP_POS_Y;
    do
    {
      if ( v9 >= square->max_length || v9 >= (unsigned int)COMMAND_STAMP_POS_X )
      {
        v17 = sub_B2C460(this);
        sub_B2C400(v17, 0LL);
      }
      v11 = *(_OWORD *)&square->m_Items[v9].fields.m_YMin;
      *(_OWORD *)&p_COMMAND_STAMP_POS_Y->methodPointer = v11;
      y = UnityEngine_Rect__get_y(*(UnityEngine_Rect_o *)(&v4 - 1), p_COMMAND_STAMP_POS_Y);
      v18.fields.m_XMin = y + BattlePerformanceCommandCard__FSCardRootOffsetY(v13, v14);
      UnityEngine_Rect__set_y(v18, v15, p_COMMAND_STAMP_POS_Y);
      LODWORD(COMMAND_STAMP_POS_X) = v8->max_length;
      ++v9;
      p_COMMAND_STAMP_POS_Y = (MethodInfo *)((char *)p_COMMAND_STAMP_POS_Y + 16);
    }
    while ( (__int64)v9 < (int)COMMAND_STAMP_POS_X );
  }
  return v8;
}


BattleCommandData_array *__fastcall BattlePerformanceCommandCard__GetBaseCommandCard(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  struct System_Collections_Generic_List_BattleCommandData__o *baseCommandList; // x0
  struct BattleLogic_o *logic; // x8
  struct BattleData_o *data; // x8
  System_Collections_Generic_IEnumerable_T__o *draw_commandlist; // x20
  BattleServantConfConponent_o *p_baseCommandList; // x19
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v10; // x21
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7

  if ( (byte_4189DBA & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleCommandData__ToArray__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleCommandData___ctor___67300504, v3);
    sub_B2C35C(&System_Collections_Generic_List_BattleCommandData__TypeInfo, v4);
    byte_4189DBA = 1;
  }
  baseCommandList = this->fields.baseCommandList;
  if ( !baseCommandList )
  {
    logic = this->fields.logic;
    if ( !logic )
      goto LABEL_8;
    data = logic->fields.data;
    if ( !data
      || (draw_commandlist = (System_Collections_Generic_IEnumerable_T__o *)data->fields.draw_commandlist,
          p_baseCommandList = (BattleServantConfConponent_o *)&this->fields.baseCommandList,
          v10 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B2C42C(System_Collections_Generic_List_BattleCommandData__TypeInfo),
          System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
            v10,
            draw_commandlist,
            (const MethodInfo_2EF3994 *)Method_System_Collections_Generic_List_BattleCommandData___ctor___67300504),
          p_baseCommandList->klass = (BattleServantConfConponent_c *)v10,
          sub_B2C2F8(p_baseCommandList, (System_Int32_array **)v10, v11, v12, v13, v14, v15, v16),
          (baseCommandList = (struct System_Collections_Generic_List_BattleCommandData__o *)p_baseCommandList->klass) == 0LL) )
    {
LABEL_8:
      sub_B2C434(baseCommandList, method);
    }
  }
  return (BattleCommandData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                      (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)baseCommandList,
                                      (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_BattleCommandData__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall BattlePerformanceCommandCard__GetSealedWindowMessageLocalizationKey(
        BattlePerformanceCommandCard_o *this,
        int32_t status,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_String_o **v10; // x8

  if ( (byte_4189DE6 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_2384/*"BATTLE_COMMANDDIALOG_DONTACT"*/, *(_QWORD *)&status);
    sub_B2C35C(&StringLiteral_2385/*"BATTLE_COMMANDDIALOG_DONTACTTYPE"*/, v4);
    sub_B2C35C(&StringLiteral_2387/*"BATTLE_COMMANDDIALOG_DONTTD_COND"*/, v5);
    sub_B2C35C(&StringLiteral_2390/*"BATTLE_COMMANDDIALOG_NOFUNC"*/, v6);
    sub_B2C35C(&StringLiteral_2388/*"BATTLE_COMMANDDIALOG_DONTTD_SHORTAGE_CRITICAL_STAR"*/, v7);
    sub_B2C35C(&StringLiteral_2389/*"BATTLE_COMMANDDIALOG_DONTUSE"*/, v8);
    sub_B2C35C(&StringLiteral_2386/*"BATTLE_COMMANDDIALOG_DONTTD"*/, v9);
    byte_4189DE6 = 1;
  }
  if ( (unsigned int)(status - 3) > 5 )
    v10 = (System_String_o **)&StringLiteral_2384/*"BATTLE_COMMANDDIALOG_DONTACT"*/;
  else
    v10 = (System_String_o **)*(&off_3DF1DE0 + status - 3);
  return *v10;
}


int32_t __fastcall BattlePerformanceCommandCard__GetServantNumber(
        BattlePerformanceCommandCard_o *this,
        BattleCommandData_o *commandData,
        const MethodInfo *method)
{
  struct BattleServantParamComponent_array *servantStatusObjArray; // x8
  int max_length; // w9
  unsigned int v5; // w10
  BattleServantParamComponent_o *v6; // x11
  __int64 v7; // x0

  servantStatusObjArray = this->fields.servantStatusObjArray;
  if ( !servantStatusObjArray )
    goto LABEL_14;
  max_length = servantStatusObjArray->max_length;
  if ( max_length >= 1 )
  {
    v5 = 0;
    this = (BattlePerformanceCommandCard_o *)0xFFFFFFFFLL;
    while ( 1 )
    {
      if ( v5 >= max_length )
      {
        v7 = sub_B2C460(this);
        sub_B2C400(v7, 0LL);
      }
      v6 = servantStatusObjArray->m_Items[v5];
      if ( !v6 || !commandData )
        break;
      if ( v6->fields.uniqueID == commandData->fields.uniqueId )
        this = (BattlePerformanceCommandCard_o *)v5;
      else
        this = (BattlePerformanceCommandCard_o *)(unsigned int)this;
      if ( (int)++v5 >= max_length )
        return (int)this;
    }
LABEL_14:
    sub_B2C434(this, commandData);
  }
  LODWORD(this) = -1;
  return (int)this;
}


BattleServantParamComponent_o *__fastcall BattlePerformanceCommandCard__GetStatusUiObj(
        BattlePerformanceCommandCard_o *this,
        BattleCommandData_o *commandData,
        const MethodInfo *method)
{
  BattlePerformanceCommandCard_o *v4; // x20
  struct BattleServantParamComponent_array *servantStatusObjArray; // x8
  int max_length; // w9
  signed int v7; // w10
  UnityEngine_Object_o *v8; // x20
  BattleServantParamComponent_o *v9; // x11
  struct BattleServantData_o *data; // x12
  __int64 v12; // x0

  v4 = this;
  if ( (byte_4189DE3 & 1) == 0 )
  {
    this = (BattlePerformanceCommandCard_o *)sub_B2C35C(&UnityEngine_Object_TypeInfo, commandData);
    byte_4189DE3 = 1;
  }
  servantStatusObjArray = v4->fields.servantStatusObjArray;
  if ( !servantStatusObjArray )
    goto LABEL_19;
  max_length = servantStatusObjArray->max_length;
  if ( max_length >= 1 )
  {
    v7 = 0;
    v8 = 0LL;
    while ( 1 )
    {
      if ( v7 >= (unsigned int)max_length )
      {
        v12 = sub_B2C460(this);
        sub_B2C400(v12, 0LL);
      }
      v9 = servantStatusObjArray->m_Items[v7];
      if ( !v9 )
        break;
      data = v9->fields.data;
      if ( data )
      {
        if ( !commandData )
          break;
        if ( data->fields.uniqueId == commandData->fields.uniqueId )
          v8 = (UnityEngine_Object_o *)servantStatusObjArray->m_Items[v7];
      }
      if ( ++v7 >= max_length )
        goto LABEL_15;
    }
LABEL_19:
    sub_B2C434(this, commandData);
  }
  v8 = 0LL;
LABEL_15:
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__op_Equality(v8, 0LL, 0LL);
  return (BattleServantParamComponent_o *)v8;
}


void __fastcall BattlePerformanceCommandCard__InitResult(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  struct UnityEngine_Transform_array *npcardTr; // x8
  BattlePerformanceCommandCard_o *v3; // x19
  __int64 v4; // x20
  int max_length; // w9
  __int64 v6; // x0

  npcardTr = this->fields.npcardTr;
  if ( !npcardTr )
LABEL_8:
    sub_B2C434(this, method);
  v3 = this;
  v4 = 0LL;
  while ( 1 )
  {
    max_length = npcardTr->max_length;
    if ( (int)v4 >= max_length )
      break;
    if ( (unsigned int)v4 >= max_length )
    {
      v6 = sub_B2C460(this);
      sub_B2C400(v6, 0LL);
    }
    this = (BattlePerformanceCommandCard_o *)npcardTr->m_Items[v4];
    if ( this )
    {
      this = (BattlePerformanceCommandCard_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)this,
                                                 0LL);
      if ( this )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
        npcardTr = v3->fields.npcardTr;
        ++v4;
        if ( npcardTr )
          continue;
      }
    }
    goto LABEL_8;
  }
}


void __fastcall BattlePerformanceCommandCard__Initialize(
        BattlePerformanceCommandCard_o *this,
        BattlePerformance_o *inperf,
        BattleData_o *data,
        BattleLogic_o *inlogic,
        const MethodInfo *method)
{
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  struct BattlePerformance_o **p_perf; // x20
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  __int64 v29; // x1
  BattleWindowComponent_o *sealedWindow; // x0
  BattleWindowOuterClickManagerComponent_o *v31; // x21
  BattleWindowOuterClickComponent_OuterClickCall_o *v32; // x22
  BattleWindowOuterClickManagerComponent_o *tdConfWindow; // x21
  BattleWindowOuterClickComponent_OuterClickCall_o *v34; // x22
  UnityEngine_Component_o *v35; // x8
  HutongGames_PlayMaker_FsmGameObject_o *v36; // x20
  struct Spawner_o *Instance; // x0
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7

  if ( (byte_4189DB0 & 1) == 0 )
  {
    sub_B2C35C(&Method_BattlePerformanceCommandCard_OnCloseSealedWindow__, inperf);
    sub_B2C35C(&Method_BattlePerformanceCommandCard_OnCloseTdConfWindow__, v12);
    sub_B2C35C(&BattleWindowOuterClickComponent_OuterClickCall_TypeInfo, v13);
    sub_B2C35C(&Method_SingletonMonoBehaviour_Spawner__get_Instance__, v14);
    sub_B2C35C(&StringLiteral_10636/*"Performance"*/, v15);
    byte_4189DB0 = 1;
  }
  p_perf = &this->fields.perf;
  this->fields.perf = inperf;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.perf,
    (System_Int32_array **)inperf,
    (System_String_array **)data,
    (System_String_array **)inlogic,
    (System_Boolean_array **)method,
    v5,
    v6,
    v7);
  this->fields.Bdata = data;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.Bdata,
    (System_Int32_array **)data,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  this->fields.logic = inlogic;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.logic,
    (System_Int32_array **)inlogic,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  sealedWindow = (BattleWindowComponent_o *)this->fields.sealedWindow;
  if ( !sealedWindow )
    goto LABEL_16;
  ((void (__fastcall *)(BattleWindowComponent_o *, Il2CppMethodPointer))sealedWindow->klass->vtable._9_setClose.method)(
    sealedWindow,
    sealedWindow->klass->vtable._10_Open.methodPtr);
  v31 = (BattleWindowOuterClickManagerComponent_o *)this->fields.sealedWindow;
  v32 = (BattleWindowOuterClickComponent_OuterClickCall_o *)sub_B2C42C(BattleWindowOuterClickComponent_OuterClickCall_TypeInfo);
  BattleWindowOuterClickComponent_OuterClickCall___ctor(
    v32,
    (Il2CppObject *)this,
    Method_BattlePerformanceCommandCard_OnCloseSealedWindow__,
    0LL);
  if ( !v31 )
    goto LABEL_16;
  BattleWindowOuterClickManagerComponent__setOuterClickCallBack(v31, v32, 0LL);
  sealedWindow = (BattleWindowComponent_o *)this->fields.tdConfWindow;
  if ( !sealedWindow )
    goto LABEL_16;
  BattleWindowComponent__setInitData(sealedWindow, 2, 0.15, 0, 0LL);
  sealedWindow = (BattleWindowComponent_o *)this->fields.tdConfWindow;
  if ( !sealedWindow )
    goto LABEL_16;
  ((void (__fastcall *)(BattleWindowComponent_o *, Il2CppMethodPointer))sealedWindow->klass->vtable._9_setClose.method)(
    sealedWindow,
    sealedWindow->klass->vtable._10_Open.methodPtr);
  tdConfWindow = (BattleWindowOuterClickManagerComponent_o *)this->fields.tdConfWindow;
  v34 = (BattleWindowOuterClickComponent_OuterClickCall_o *)sub_B2C42C(BattleWindowOuterClickComponent_OuterClickCall_TypeInfo);
  BattleWindowOuterClickComponent_OuterClickCall___ctor(
    v34,
    (Il2CppObject *)this,
    Method_BattlePerformanceCommandCard_OnCloseTdConfWindow__,
    0LL);
  if ( !tdConfWindow )
    goto LABEL_16;
  BattleWindowOuterClickManagerComponent__setOuterClickCallBack(tdConfWindow, v34, 0LL);
  sealedWindow = (BattleWindowComponent_o *)this->fields.commandAssistDetailWindow;
  if ( !sealedWindow )
    goto LABEL_16;
  BattleWindowComponent__setInitData(sealedWindow, 2, 0.15, 0, 0LL);
  sealedWindow = (BattleWindowComponent_o *)this->fields.commandAssistDetailWindow;
  if ( !sealedWindow )
    goto LABEL_16;
  ((void (__fastcall *)(BattleWindowComponent_o *, Il2CppMethodPointer))sealedWindow->klass->vtable._9_setClose.method)(
    sealedWindow,
    sealedWindow->klass->vtable._10_Open.methodPtr);
  sealedWindow = (BattleWindowComponent_o *)this->fields.commandfsm;
  if ( !sealedWindow )
    goto LABEL_16;
  sealedWindow = (BattleWindowComponent_o *)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)sealedWindow, 0LL);
  if ( !sealedWindow )
    goto LABEL_16;
  sealedWindow = (BattleWindowComponent_o *)HutongGames_PlayMaker_FsmVariables__GetFsmGameObject(
                                              (HutongGames_PlayMaker_FsmVariables_o *)sealedWindow,
                                              (System_String_o *)StringLiteral_10636/*"Performance"*/,
                                              0LL);
  v35 = (UnityEngine_Component_o *)*p_perf;
  if ( !*p_perf
    || (v36 = (HutongGames_PlayMaker_FsmGameObject_o *)sealedWindow,
        sealedWindow = (BattleWindowComponent_o *)UnityEngine_Component__get_gameObject(v35, 0LL),
        !v36)
    || (HutongGames_PlayMaker_FsmGameObject__set_Value(v36, (UnityEngine_GameObject_o *)sealedWindow, 0LL),
        Instance = (struct Spawner_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_Spawner__get_Instance__),
        this->fields.spawner = Instance,
        sub_B2C2F8(
          (BattleServantConfConponent_o *)&this->fields.spawner,
          (System_Int32_array **)Instance,
          v38,
          v39,
          v40,
          v41,
          v42,
          v43),
        (sealedWindow = (BattleWindowComponent_o *)this->fields.spawner) == 0LL) )
  {
LABEL_16:
    sub_B2C434(sealedWindow, v29);
  }
  Spawner__Precache_24864620(
    (Spawner_o *)sealedWindow,
    (UnityEngine_Object_o *)this->fields.selectCommandPrefab,
    3,
    0LL);
  this->fields.firstBonusAnimationWaitTime = 0;
  *(_WORD *)&this->fields.isTouchBegan = 0;
  this->fields.isTouchCanceled = 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceCommandCard__LongPress(
        BattlePerformanceCommandCard_o *this,
        int32_t markindex,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  BattleData_o *Bdata; // x0
  struct BattleCommandComponent_array *commandCompArray; // x8
  unsigned __int64 v10; // x22
  unsigned __int64 max_length; // x9
  BattleCommandComponent_o *v12; // x21
  System_String_o *v13; // x1
  __int64 v14; // x0

  if ( (byte_4189DBF & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, *(_QWORD *)&markindex);
    sub_B2C35C(&StringLiteral_8445/*"LONG_PRESS_COMMAND_ASSIST"*/, v5);
    sub_B2C35C(&StringLiteral_8444/*"LONG_PRESS"*/, v6);
    sub_B2C35C(&StringLiteral_20377/*"markindex"*/, v7);
    byte_4189DBF = 1;
  }
  Bdata = this->fields.Bdata;
  if ( !Bdata )
    goto LABEL_28;
  Bdata = (BattleData_o *)BattleData__isTutorial(Bdata, 0LL);
  if ( ((unsigned __int8)Bdata & 1) == 0 )
  {
    commandCompArray = this->fields.commandCompArray;
    if ( commandCompArray )
    {
      v10 = 0LL;
      do
      {
        max_length = commandCompArray->max_length;
        if ( (__int64)v10 >= (int)max_length )
          return;
        if ( v10 >= max_length )
        {
          v14 = sub_B2C460(Bdata);
          sub_B2C400(v14, 0LL);
        }
        v12 = commandCompArray->m_Items[v10];
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        Bdata = (BattleData_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v12, 0LL, 0LL);
        if ( ((unsigned __int8)Bdata & 1) == 0 )
        {
          if ( !v12 )
            break;
          Bdata = (BattleData_o *)BattleCommandComponent__checkMark(v12, markindex, 0LL);
          if ( ((unsigned __int8)Bdata & 1) != 0 )
          {
            Bdata = (BattleData_o *)this->fields.commandfsm;
            if ( !Bdata )
              break;
            Bdata = (BattleData_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)Bdata, 0LL);
            if ( !Bdata )
              break;
            Bdata = (BattleData_o *)Bdata->fields.questphase_ent;
            if ( !Bdata )
              break;
            Bdata = (BattleData_o *)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                      (HutongGames_PlayMaker_FsmVariables_o *)Bdata,
                                      (System_String_o *)StringLiteral_20377/*"markindex"*/,
                                      0LL);
            if ( !Bdata )
              break;
            LODWORD(Bdata->fields.perf) = markindex;
            if ( BattleCommandComponent__isTreasureDvc(v12, 0LL) )
            {
              Bdata = (BattleData_o *)this->fields.commandfsm;
              if ( !Bdata )
                break;
              v13 = (System_String_o *)StringLiteral_8444/*"LONG_PRESS"*/;
            }
            else
            {
              Bdata = (BattleData_o *)v12->fields.data;
              if ( !Bdata )
                break;
              Bdata = (BattleData_o *)BattleCommandData__IsEnableCommandAssist((BattleCommandData_o *)Bdata, 0LL);
              if ( ((unsigned __int8)Bdata & 1) == 0 )
                goto LABEL_27;
              Bdata = (BattleData_o *)this->fields.commandfsm;
              if ( !Bdata )
                break;
              v13 = (System_String_o *)StringLiteral_8445/*"LONG_PRESS_COMMAND_ASSIST"*/;
            }
            PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Bdata, v13, 0LL);
          }
        }
LABEL_27:
        commandCompArray = this->fields.commandCompArray;
        ++v10;
      }
      while ( commandCompArray );
    }
LABEL_28:
    sub_B2C434(Bdata, *(_QWORD *)&markindex);
  }
}


void __fastcall BattlePerformanceCommandCard__MoveExtraCard(
        BattlePerformanceCommandCard_o *this,
        float moveTime,
        const MethodInfo *method)
{
  BattlePerformanceCommandCard_o *v4; // x21
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  struct BattleCommandComponent_array *selectedcomponents; // x8
  UnityEngine_GameObject_o *gameObject; // x19
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  BattlePerformanceCommandCard_o *v21; // x20
  System_Int32_array **v22; // x1
  struct BattleCommandComponent_array *v23; // x8
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_Int32_array **v30; // x21
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  System_Int32_array **v37; // x1
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  System_Int32_array **v44; // x21
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  System_Int32_array **v51; // x1
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  System_Int32_array **v58; // x21
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  System_Int32_array **v65; // x1
  System_String_array **v66; // x2
  System_String_array **v67; // x3
  System_Boolean_array **v68; // x4
  System_Int32_array **v69; // x5
  System_Int32_array *v70; // x6
  System_Int32_array *v71; // x7
  System_Int32_array **v72; // x21
  System_Collections_Hashtable_o *v73; // x0
  __int64 v74; // x0
  __int64 v75; // x0
  char v76[4]; // [xsp+8h] [xbp-38h] BYREF
  int v77; // [xsp+Ch] [xbp-34h] BYREF
  float v78; // [xsp+18h] [xbp-28h] BYREF
  float v79; // [xsp+1Ch] [xbp-24h] BYREF

  v4 = this;
  if ( (byte_4189DD4 & 1) == 0 )
  {
    sub_B2C35C(&bool_TypeInfo, method);
    sub_B2C35C(&iTween_EaseType_TypeInfo, v5);
    sub_B2C35C(&object___TypeInfo, v6);
    sub_B2C35C(&float_TypeInfo, v7);
    sub_B2C35C(&StringLiteral_23316/*"x"*/, v8);
    sub_B2C35C(&StringLiteral_18114/*"easetype"*/, v9);
    sub_B2C35C(&StringLiteral_22677/*"time"*/, v10);
    sub_B2C35C(&StringLiteral_19967/*"islocal"*/, v11);
    this = (BattlePerformanceCommandCard_o *)sub_B2C35C(&iTween_TypeInfo, v12);
    byte_4189DD4 = 1;
  }
  selectedcomponents = v4->fields.selectedcomponents;
  if ( !selectedcomponents )
    goto LABEL_49;
  if ( selectedcomponents->max_length <= 3 )
    goto LABEL_48;
  this = (BattlePerformanceCommandCard_o *)selectedcomponents->m_Items[3];
  if ( !this )
    goto LABEL_49;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  this = (BattlePerformanceCommandCard_o *)sub_B2C374(object___TypeInfo, 8LL);
  if ( !this )
    goto LABEL_49;
  v21 = this;
  this = (BattlePerformanceCommandCard_o *)StringLiteral_23316/*"x"*/;
  if ( StringLiteral_23316/*"x"*/ )
  {
    this = (BattlePerformanceCommandCard_o *)sub_B2C41C(StringLiteral_23316/*"x"*/, v21->klass->_1.element_class);
    if ( !this )
      goto LABEL_50;
    v22 = (System_Int32_array **)StringLiteral_23316/*"x"*/;
  }
  else
  {
    v22 = 0LL;
  }
  if ( !LODWORD(v21->fields.COMMAND_STAMP_POS_X) )
    goto LABEL_48;
  *(_QWORD *)&v21->fields.COMMAND_STAMP_POS_Y = v22;
  sub_B2C2F8((BattleServantConfConponent_o *)&v21->fields.COMMAND_STAMP_POS_Y, v22, v15, v16, v17, v18, v19, v20);
  v23 = v4->fields.selectedcomponents;
  if ( !v23 )
    goto LABEL_49;
  if ( v23->max_length <= 3 )
    goto LABEL_48;
  this = (BattlePerformanceCommandCard_o *)v23->m_Items[3];
  if ( !this
    || (this = (BattlePerformanceCommandCard_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)this,
                                                   0LL)) == 0LL
    || (this = (BattlePerformanceCommandCard_o *)UnityEngine_GameObject__get_transform(
                                                   (UnityEngine_GameObject_o *)this,
                                                   0LL)) == 0LL )
  {
LABEL_49:
    sub_B2C434(this, method);
  }
  v79 = COERCE_FLOAT(UnityEngine_Transform__get_position((UnityEngine_Transform_o *)this, 0LL)) + 250.0;
  this = (BattlePerformanceCommandCard_o *)j_il2cpp_value_box_0(float_TypeInfo, &v79);
  v30 = (System_Int32_array **)this;
  if ( this )
  {
    this = (BattlePerformanceCommandCard_o *)sub_B2C41C(this, v21->klass->_1.element_class);
    if ( !this )
      goto LABEL_50;
  }
  if ( LODWORD(v21->fields.COMMAND_STAMP_POS_X) <= 1 )
    goto LABEL_48;
  *(_QWORD *)&v21->fields.CARD_ROOT_BASE_X = v30;
  sub_B2C2F8((BattleServantConfConponent_o *)&v21->fields.CARD_ROOT_BASE_X, v30, v24, v25, v26, v27, v28, v29);
  this = (BattlePerformanceCommandCard_o *)StringLiteral_22677/*"time"*/;
  if ( StringLiteral_22677/*"time"*/ )
  {
    this = (BattlePerformanceCommandCard_o *)sub_B2C41C(StringLiteral_22677/*"time"*/, v21->klass->_1.element_class);
    if ( !this )
      goto LABEL_50;
    v37 = (System_Int32_array **)StringLiteral_22677/*"time"*/;
  }
  else
  {
    v37 = 0LL;
  }
  if ( LODWORD(v21->fields.COMMAND_STAMP_POS_X) <= 2 )
    goto LABEL_48;
  v21->fields.commandfsm = (struct PlayMakerFSM_o *)v37;
  sub_B2C2F8((BattleServantConfConponent_o *)&v21->fields.commandfsm, v37, v31, v32, v33, v34, v35, v36);
  v78 = moveTime;
  this = (BattlePerformanceCommandCard_o *)j_il2cpp_value_box_0(float_TypeInfo, &v78);
  v44 = (System_Int32_array **)this;
  if ( this )
  {
    this = (BattlePerformanceCommandCard_o *)sub_B2C41C(this, v21->klass->_1.element_class);
    if ( !this )
      goto LABEL_50;
  }
  if ( LODWORD(v21->fields.COMMAND_STAMP_POS_X) <= 3 )
    goto LABEL_48;
  v21->fields.commandprefab = (struct UnityEngine_GameObject_o *)v44;
  sub_B2C2F8((BattleServantConfConponent_o *)&v21->fields.commandprefab, v44, v38, v39, v40, v41, v42, v43);
  this = (BattlePerformanceCommandCard_o *)StringLiteral_18114/*"easetype"*/;
  if ( StringLiteral_18114/*"easetype"*/ )
  {
    this = (BattlePerformanceCommandCard_o *)sub_B2C41C(StringLiteral_18114/*"easetype"*/, v21->klass->_1.element_class);
    if ( !this )
      goto LABEL_50;
    v51 = (System_Int32_array **)StringLiteral_18114/*"easetype"*/;
  }
  else
  {
    v51 = 0LL;
  }
  if ( LODWORD(v21->fields.COMMAND_STAMP_POS_X) <= 4 )
    goto LABEL_48;
  v21->fields.selectCommandPrefab = (struct UnityEngine_GameObject_o *)v51;
  sub_B2C2F8((BattleServantConfConponent_o *)&v21->fields.selectCommandPrefab, v51, v45, v46, v47, v48, v49, v50);
  v77 = 16;
  this = (BattlePerformanceCommandCard_o *)j_il2cpp_value_box_0(iTween_EaseType_TypeInfo, &v77);
  v58 = (System_Int32_array **)this;
  if ( this )
  {
    this = (BattlePerformanceCommandCard_o *)sub_B2C41C(this, v21->klass->_1.element_class);
    if ( !this )
      goto LABEL_50;
  }
  if ( LODWORD(v21->fields.COMMAND_STAMP_POS_X) <= 5 )
    goto LABEL_48;
  v21->fields.commandrootTransform = (struct UnityEngine_Transform_o *)v58;
  sub_B2C2F8((BattleServantConfConponent_o *)&v21->fields.commandrootTransform, v58, v52, v53, v54, v55, v56, v57);
  this = (BattlePerformanceCommandCard_o *)StringLiteral_19967/*"islocal"*/;
  if ( StringLiteral_19967/*"islocal"*/ )
  {
    this = (BattlePerformanceCommandCard_o *)sub_B2C41C(StringLiteral_19967/*"islocal"*/, v21->klass->_1.element_class);
    if ( !this )
      goto LABEL_50;
    v65 = (System_Int32_array **)StringLiteral_19967/*"islocal"*/;
  }
  else
  {
    v65 = 0LL;
  }
  if ( LODWORD(v21->fields.COMMAND_STAMP_POS_X) <= 6 )
    goto LABEL_48;
  v21->fields.selectinfo_sprite = (struct UISprite_o *)v65;
  sub_B2C2F8((BattleServantConfConponent_o *)&v21->fields.selectinfo_sprite, v65, v59, v60, v61, v62, v63, v64);
  v76[0] = 1;
  this = (BattlePerformanceCommandCard_o *)j_il2cpp_value_box_0(bool_TypeInfo, v76);
  v72 = (System_Int32_array **)this;
  if ( this )
  {
    this = (BattlePerformanceCommandCard_o *)sub_B2C41C(this, v21->klass->_1.element_class);
    if ( !this )
    {
LABEL_50:
      v75 = sub_B2C454(this);
      sub_B2C400(v75, 0LL);
    }
  }
  if ( LODWORD(v21->fields.COMMAND_STAMP_POS_X) <= 7 )
  {
LABEL_48:
    v74 = sub_B2C460(this);
    sub_B2C400(v74, 0LL);
  }
  v21->fields.firstbonus_q = (struct UnityEngine_GameObject_o *)v72;
  sub_B2C2F8((BattleServantConfConponent_o *)&v21->fields.firstbonus_q, v72, v66, v67, v68, v69, v70, v71);
  if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  v73 = iTween__Hash((System_Object_array *)v21, 0LL);
  iTween__MoveFrom_42734184(gameObject, v73, 0LL);
}


void __fastcall BattlePerformanceCommandCard__MoveNotTween(
        BattlePerformanceCommandCard_o *this,
        UnityEngine_Transform_o *target,
        System_Action_GameObject__o *callback,
        const MethodInfo *method)
{
  BattlePerformance_o *perf; // x0
  BattlePerformance_o *v8; // x21
  UnityEngine_Component_o *criticalpointTr; // x8
  UnityEngine_Transform_o *v10; // x22
  int32_t layer; // w0
  float x; // s8
  float y; // s9
  float z; // s10
  float v15; // s11
  float v16; // s7
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  UnityEngine_Vector3_o v23; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v25; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v26; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v27; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v28; // 0:s3.4,4:s4.4,8:s5.4

  if ( (byte_4189DDD & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_BattleMoveObject___, target);
    byte_4189DDD = 1;
  }
  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_11;
  perf = (BattlePerformance_o *)BattlePerformance__getEffectInstantiate(perf, 9, this->fields.criticalpointTr, 0LL);
  if ( !perf )
    goto LABEL_11;
  perf = (BattlePerformance_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                  (UnityEngine_GameObject_o *)perf,
                                  (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_BattleMoveObject___);
  if ( !perf )
    goto LABEL_11;
  v8 = perf;
  perf = (BattlePerformance_o *)BattleMoveObject__GetTransform((BattleMoveObject_o *)perf, 0LL);
  criticalpointTr = (UnityEngine_Component_o *)this->fields.criticalpointTr;
  if ( !criticalpointTr )
    goto LABEL_11;
  v10 = (UnityEngine_Transform_o *)perf;
  perf = (BattlePerformance_o *)UnityEngine_Component__get_gameObject(criticalpointTr, 0LL);
  if ( !perf
    || (layer = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)perf, 0LL),
        perf = (BattlePerformance_o *)TransformHelper__ChangeChildsLayer(v10, layer, 0LL),
        !v10)
    || (v23.fields.x = 0.0,
        v23.fields.y = 0.0,
        v23.fields.z = 0.0,
        UnityEngine_Transform__set_localPosition(v10, v23, 0LL),
        BattleMoveObject__SetRigidbodyGravity((BattleMoveObject_o *)v8, 0, 0LL),
        !target) )
  {
LABEL_11:
    sub_B2C434(perf, target);
  }
  localPosition = UnityEngine_Transform__get_localPosition(target, 0LL);
  localPosition.fields.x = localPosition.fields.x + 0.0;
  localPosition.fields.z = localPosition.fields.z + 0.0;
  localPosition.fields.y = localPosition.fields.y + 70.0;
  v25 = UnityEngine_Transform__TransformPoint(target, localPosition, 0LL);
  v26 = UnityEngine_Transform__InverseTransformPoint(v10, v25, 0LL);
  x = v26.fields.x;
  y = v26.fields.y;
  z = v26.fields.z;
  v15 = UnityEngine_Random__Range(0.3, 0.5, 0LL);
  v16 = UnityEngine_Random__Range(0.0, 0.2, 0LL);
  v27.fields.x = 0.0;
  v27.fields.y = 0.0;
  v27.fields.z = 0.0;
  v28.fields.x = x;
  v28.fields.y = y;
  v28.fields.z = z;
  BattleMoveObject__StartNotTweenMove((BattleMoveObject_o *)v8, v27, v28, v15, v16, callback, 0LL);
  v8->fields.perf = (struct BattlePerformance_o *)target;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v8->fields.perf,
    (System_Int32_array **)target,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceCommandCard__MoveNotTween2back(
        BattlePerformanceCommandCard_o *this,
        UnityEngine_Transform_o *from,
        System_Action_GameObject__o *callback,
        const MethodInfo *method)
{
  BattlePerformance_o *perf; // x0
  BattlePerformance_o *v8; // x21
  UnityEngine_Component_o *criticalpointTr; // x8
  UnityEngine_Transform_o *v10; // x22
  int32_t layer; // w0
  int v12; // s0
  float x; // s8
  float y; // s9
  float z; // s10
  float v18; // s11
  float v19; // s7
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v27; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v28; // 0:s3.4,4:s4.4,8:s5.4

  if ( (byte_4189DDE & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_BattleMoveObject___, from);
    byte_4189DDE = 1;
  }
  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_11;
  perf = (BattlePerformance_o *)BattlePerformance__getEffectInstantiate(perf, 9, this->fields.criticalpointTr, 0LL);
  if ( !perf )
    goto LABEL_11;
  perf = (BattlePerformance_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                  (UnityEngine_GameObject_o *)perf,
                                  (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_BattleMoveObject___);
  if ( !perf )
    goto LABEL_11;
  v8 = perf;
  perf = (BattlePerformance_o *)BattleMoveObject__GetTransform((BattleMoveObject_o *)perf, 0LL);
  criticalpointTr = (UnityEngine_Component_o *)this->fields.criticalpointTr;
  if ( !criticalpointTr
    || (v10 = (UnityEngine_Transform_o *)perf,
        (perf = (BattlePerformance_o *)UnityEngine_Component__get_gameObject(criticalpointTr, 0LL)) == 0LL)
    || (layer = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)perf, 0LL),
        perf = (BattlePerformance_o *)TransformHelper__ChangeChildsLayer(v10, layer, 0LL),
        !from)
    || (*(UnityEngine_Vector3_o *)&v12 = UnityEngine_Transform__get_position(from, 0LL), !v10) )
  {
LABEL_11:
    sub_B2C434(perf, from);
  }
  UnityEngine_Transform__set_position(v10, *(UnityEngine_Vector3_o *)&v12, 0LL);
  BattleMoveObject__SetRigidbodyGravity((BattleMoveObject_o *)v8, 0, 0LL);
  localPosition = UnityEngine_Transform__get_localPosition(v10, 0LL);
  x = localPosition.fields.x;
  y = localPosition.fields.y;
  z = localPosition.fields.z;
  v18 = UnityEngine_Random__Range(0.3, 0.5, 0LL);
  v19 = UnityEngine_Random__Range(0.0, 0.2, 0LL);
  v28.fields.x = 0.0;
  v28.fields.y = 0.0;
  v28.fields.z = 0.0;
  v27.fields.x = x;
  v27.fields.y = y;
  v27.fields.z = z;
  BattleMoveObject__StartNotTweenMove((BattleMoveObject_o *)v8, v27, v28, v18, v19, callback, 0LL);
  v8->fields.perf = (struct BattlePerformance_o *)from;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v8->fields.perf,
    (System_Int32_array **)from,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
}


void __fastcall BattlePerformanceCommandCard__MoveSelectedCard(
        BattlePerformanceCommandCard_o *this,
        float moveTime,
        const MethodInfo *method)
{
  BattlePerformanceCommandCard_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x23
  struct BattleCommandComponent_array *selectedcomponents; // x8
  UnityEngine_GameObject_o *gameObject; // x20
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  BattlePerformanceCommandCard_o *v22; // x21
  System_Int32_array **v23; // x1
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_Int32_array **v30; // x22
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  System_Int32_array **v37; // x1
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  System_Int32_array **v44; // x22
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  System_Int32_array **v51; // x1
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  System_Int32_array **v58; // x22
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  System_Int32_array **v65; // x1
  System_String_array **v66; // x2
  System_String_array **v67; // x3
  System_Boolean_array **v68; // x4
  System_Int32_array **v69; // x5
  System_Int32_array *v70; // x6
  System_Int32_array *v71; // x7
  System_Int32_array **v72; // x22
  System_Collections_Hashtable_o *v73; // x0
  __int64 v74; // x0
  __int64 v75; // x0
  char v76[4]; // [xsp+8h] [xbp-68h] BYREF
  int v77; // [xsp+Ch] [xbp-64h] BYREF
  float v78; // [xsp+18h] [xbp-58h] BYREF
  int v79; // [xsp+1Ch] [xbp-54h] BYREF

  v4 = this;
  if ( (byte_4189DD2 & 1) == 0 )
  {
    sub_B2C35C(&bool_TypeInfo, method);
    sub_B2C35C(&iTween_EaseType_TypeInfo, v5);
    sub_B2C35C(&object___TypeInfo, v6);
    sub_B2C35C(&float_TypeInfo, v7);
    sub_B2C35C(&StringLiteral_23316/*"x"*/, v8);
    sub_B2C35C(&StringLiteral_18114/*"easetype"*/, v9);
    sub_B2C35C(&StringLiteral_22677/*"time"*/, v10);
    sub_B2C35C(&StringLiteral_19967/*"islocal"*/, v11);
    this = (BattlePerformanceCommandCard_o *)sub_B2C35C(&iTween_TypeInfo, v12);
    byte_4189DD2 = 1;
  }
  v13 = 0LL;
  do
  {
    selectedcomponents = v4->fields.selectedcomponents;
    if ( !selectedcomponents )
      goto LABEL_47;
    if ( (unsigned int)v13 >= selectedcomponents->max_length )
      goto LABEL_45;
    this = (BattlePerformanceCommandCard_o *)selectedcomponents->m_Items[v13];
    if ( !this
      || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL),
          (this = (BattlePerformanceCommandCard_o *)sub_B2C374(object___TypeInfo, 8LL)) == 0LL) )
    {
LABEL_47:
      sub_B2C434(this, method);
    }
    v22 = this;
    this = (BattlePerformanceCommandCard_o *)StringLiteral_23316/*"x"*/;
    if ( StringLiteral_23316/*"x"*/ )
    {
      this = (BattlePerformanceCommandCard_o *)sub_B2C41C(StringLiteral_23316/*"x"*/, v22->klass->_1.element_class);
      if ( !this )
        goto LABEL_46;
      v23 = (System_Int32_array **)StringLiteral_23316/*"x"*/;
    }
    else
    {
      v23 = 0LL;
    }
    if ( !LODWORD(v22->fields.COMMAND_STAMP_POS_X) )
      goto LABEL_45;
    *(_QWORD *)&v22->fields.COMMAND_STAMP_POS_Y = v23;
    sub_B2C2F8((BattleServantConfConponent_o *)&v22->fields.COMMAND_STAMP_POS_Y, v23, v16, v17, v18, v19, v20, v21);
    v79 = -1081291571;
    this = (BattlePerformanceCommandCard_o *)j_il2cpp_value_box_0(float_TypeInfo, &v79);
    v30 = (System_Int32_array **)this;
    if ( this )
    {
      this = (BattlePerformanceCommandCard_o *)sub_B2C41C(this, v22->klass->_1.element_class);
      if ( !this )
      {
LABEL_46:
        v75 = sub_B2C454(this);
        sub_B2C400(v75, 0LL);
      }
    }
    if ( LODWORD(v22->fields.COMMAND_STAMP_POS_X) <= 1 )
      goto LABEL_45;
    *(_QWORD *)&v22->fields.CARD_ROOT_BASE_X = v30;
    sub_B2C2F8((BattleServantConfConponent_o *)&v22->fields.CARD_ROOT_BASE_X, v30, v24, v25, v26, v27, v28, v29);
    this = (BattlePerformanceCommandCard_o *)StringLiteral_22677/*"time"*/;
    if ( StringLiteral_22677/*"time"*/ )
    {
      this = (BattlePerformanceCommandCard_o *)sub_B2C41C(StringLiteral_22677/*"time"*/, v22->klass->_1.element_class);
      if ( !this )
        goto LABEL_46;
      v37 = (System_Int32_array **)StringLiteral_22677/*"time"*/;
    }
    else
    {
      v37 = 0LL;
    }
    if ( LODWORD(v22->fields.COMMAND_STAMP_POS_X) <= 2 )
      goto LABEL_45;
    v22->fields.commandfsm = (struct PlayMakerFSM_o *)v37;
    sub_B2C2F8((BattleServantConfConponent_o *)&v22->fields.commandfsm, v37, v31, v32, v33, v34, v35, v36);
    v78 = moveTime;
    this = (BattlePerformanceCommandCard_o *)j_il2cpp_value_box_0(float_TypeInfo, &v78);
    v44 = (System_Int32_array **)this;
    if ( this )
    {
      this = (BattlePerformanceCommandCard_o *)sub_B2C41C(this, v22->klass->_1.element_class);
      if ( !this )
        goto LABEL_46;
    }
    if ( LODWORD(v22->fields.COMMAND_STAMP_POS_X) <= 3 )
      goto LABEL_45;
    v22->fields.commandprefab = (struct UnityEngine_GameObject_o *)v44;
    sub_B2C2F8((BattleServantConfConponent_o *)&v22->fields.commandprefab, v44, v38, v39, v40, v41, v42, v43);
    this = (BattlePerformanceCommandCard_o *)StringLiteral_18114/*"easetype"*/;
    if ( StringLiteral_18114/*"easetype"*/ )
    {
      this = (BattlePerformanceCommandCard_o *)sub_B2C41C(StringLiteral_18114/*"easetype"*/, v22->klass->_1.element_class);
      if ( !this )
        goto LABEL_46;
      v51 = (System_Int32_array **)StringLiteral_18114/*"easetype"*/;
    }
    else
    {
      v51 = 0LL;
    }
    if ( LODWORD(v22->fields.COMMAND_STAMP_POS_X) <= 4 )
      goto LABEL_45;
    v22->fields.selectCommandPrefab = (struct UnityEngine_GameObject_o *)v51;
    sub_B2C2F8((BattleServantConfConponent_o *)&v22->fields.selectCommandPrefab, v51, v45, v46, v47, v48, v49, v50);
    v77 = 1;
    this = (BattlePerformanceCommandCard_o *)j_il2cpp_value_box_0(iTween_EaseType_TypeInfo, &v77);
    v58 = (System_Int32_array **)this;
    if ( this )
    {
      this = (BattlePerformanceCommandCard_o *)sub_B2C41C(this, v22->klass->_1.element_class);
      if ( !this )
        goto LABEL_46;
    }
    if ( LODWORD(v22->fields.COMMAND_STAMP_POS_X) <= 5 )
      goto LABEL_45;
    v22->fields.commandrootTransform = (struct UnityEngine_Transform_o *)v58;
    sub_B2C2F8((BattleServantConfConponent_o *)&v22->fields.commandrootTransform, v58, v52, v53, v54, v55, v56, v57);
    this = (BattlePerformanceCommandCard_o *)StringLiteral_19967/*"islocal"*/;
    if ( StringLiteral_19967/*"islocal"*/ )
    {
      this = (BattlePerformanceCommandCard_o *)sub_B2C41C(StringLiteral_19967/*"islocal"*/, v22->klass->_1.element_class);
      if ( !this )
        goto LABEL_46;
      v65 = (System_Int32_array **)StringLiteral_19967/*"islocal"*/;
    }
    else
    {
      v65 = 0LL;
    }
    if ( LODWORD(v22->fields.COMMAND_STAMP_POS_X) <= 6 )
    {
LABEL_45:
      v74 = sub_B2C460(this);
      sub_B2C400(v74, 0LL);
    }
    v22->fields.selectinfo_sprite = (struct UISprite_o *)v65;
    sub_B2C2F8((BattleServantConfConponent_o *)&v22->fields.selectinfo_sprite, v65, v59, v60, v61, v62, v63, v64);
    v76[0] = 1;
    this = (BattlePerformanceCommandCard_o *)j_il2cpp_value_box_0(bool_TypeInfo, v76);
    v72 = (System_Int32_array **)this;
    if ( this )
    {
      this = (BattlePerformanceCommandCard_o *)sub_B2C41C(this, v22->klass->_1.element_class);
      if ( !this )
        goto LABEL_46;
    }
    if ( LODWORD(v22->fields.COMMAND_STAMP_POS_X) <= 7 )
      goto LABEL_45;
    v22->fields.firstbonus_q = (struct UnityEngine_GameObject_o *)v72;
    sub_B2C2F8((BattleServantConfConponent_o *)&v22->fields.firstbonus_q, v72, v66, v67, v68, v69, v70, v71);
    if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
    v73 = iTween__Hash((System_Object_array *)v22, 0LL);
    iTween__MoveAdd_42737264(gameObject, v73, 0LL);
    ++v13;
  }
  while ( (unsigned int)(v13 - 1) < 2 );
}


void __fastcall BattlePerformanceCommandCard__OnApplicationPause(
        BattlePerformanceCommandCard_o *this,
        bool pauseStatus,
        const MethodInfo *method)
{
  this->fields.firstBonusAnimationWaitTime = this->fields.firstBonusAnimationMaxTime;
  if ( pauseStatus && this->fields.isTouchBegan && !this->fields.isTouchEnded )
    this->fields.isTouchCanceled = 1;
}


void __fastcall BattlePerformanceCommandCard__OnCloseCommandAssistDetailWindow(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  BattleWindowComponent_o *commandAssistDetailWindow; // x0
  struct BattleCommandAssistDetailWindowComponent_o *v7; // x20
  BattleWindowComponent_EndCall_o *v8; // x21
  _QWORD *v9; // x0
  System_Reflection_MethodBase_o *v10; // x0

  if ( (byte_4189DED & 1) == 0 )
  {
    sub_B2C35C(&Method_BattlePerformanceCommandCard_OnCloseCommandAssistDetailWindow__, method);
    sub_B2C35C(&Method_BattlePerformanceCommandCard_endCloseCommandAssistDetailWindow__, v3);
    sub_B2C35C(&BattleWindowComponent_EndCall_TypeInfo, v4);
    sub_B2C35C(&StringLiteral_16566/*"ba21"*/, v5);
    byte_4189DED = 1;
  }
  commandAssistDetailWindow = (BattleWindowComponent_o *)this->fields.commandAssistDetailWindow;
  if ( !commandAssistDetailWindow )
    goto LABEL_10;
  if ( !BattleWindowComponent__isOpen(commandAssistDetailWindow, 0LL) )
    return;
  v7 = this->fields.commandAssistDetailWindow;
  v8 = (BattleWindowComponent_EndCall_o *)sub_B2C42C(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(
    v8,
    (Il2CppObject *)this,
    Method_BattlePerformanceCommandCard_endCloseCommandAssistDetailWindow__,
    0LL);
  if ( !v7 )
LABEL_10:
    sub_B2C434(commandAssistDetailWindow, method);
  ((void (__fastcall *)(struct BattleCommandAssistDetailWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))v7->klass->vtable._12_Close.method)(
    v7,
    v8,
    v7->klass->vtable._13_CompClose.methodPtr);
  v9 = Method_BattlePerformanceCommandCard_OnCloseCommandAssistDetailWindow__;
  if ( (*((_BYTE *)Method_BattlePerformanceCommandCard_OnCloseCommandAssistDetailWindow__ + 75) & 2) != 0 )
    v9 = (_QWORD *)sub_B2C364(Method_BattlePerformanceCommandCard_OnCloseCommandAssistDetailWindow__);
  v10 = (System_Reflection_MethodBase_o *)sub_B2C340(v9, v9[3]);
  OverwriteAssetSoundName__PlaySe(v10, (System_String_o *)StringLiteral_16566/*"ba21"*/, 0LL);
}


void __fastcall BattlePerformanceCommandCard__OnCloseSealedWindow(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  struct BattleSealedCommandWindowComponent_o *sealedWindow; // x20
  BattleWindowComponent_EndCall_o *v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1

  if ( (byte_4189DE7 & 1) == 0 )
  {
    sub_B2C35C(&Method_BattlePerformanceCommandCard_endCloseSealedWindow__, method);
    sub_B2C35C(&BattleWindowComponent_EndCall_TypeInfo, v3);
    sub_B2C35C(&SoundManager_TypeInfo, v4);
    byte_4189DE7 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  sealedWindow = this->fields.sealedWindow;
  v6 = (BattleWindowComponent_EndCall_o *)sub_B2C42C(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(
    v6,
    (Il2CppObject *)this,
    Method_BattlePerformanceCommandCard_endCloseSealedWindow__,
    0LL);
  if ( !sealedWindow )
    sub_B2C434(v7, v8);
  ((void (__fastcall *)(struct BattleSealedCommandWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))sealedWindow->klass->vtable._12_Close.method)(
    sealedWindow,
    v6,
    sealedWindow->klass->vtable._13_CompClose.methodPtr);
}


void __fastcall BattlePerformanceCommandCard__OnCloseTdConfWindow(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  BattleWindowComponent_o *tdConfWindow; // x0
  struct BattleTDConfWIndowComponent_o *v6; // x20
  BattleWindowComponent_EndCall_o *v7; // x21

  if ( (byte_4189DEA & 1) == 0 )
  {
    sub_B2C35C(&Method_BattlePerformanceCommandCard_endCloseTdConfWindow__, method);
    sub_B2C35C(&BattleWindowComponent_EndCall_TypeInfo, v3);
    sub_B2C35C(&SoundManager_TypeInfo, v4);
    byte_4189DEA = 1;
  }
  tdConfWindow = (BattleWindowComponent_o *)this->fields.tdConfWindow;
  if ( !tdConfWindow )
    goto LABEL_11;
  if ( !BattleWindowComponent__isOpen(tdConfWindow, 0LL) )
    return;
  v6 = this->fields.tdConfWindow;
  v7 = (BattleWindowComponent_EndCall_o *)sub_B2C42C(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(
    v7,
    (Il2CppObject *)this,
    Method_BattlePerformanceCommandCard_endCloseTdConfWindow__,
    0LL);
  if ( !v6 )
LABEL_11:
    sub_B2C434(tdConfWindow, method);
  ((void (__fastcall *)(struct BattleTDConfWIndowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))v6->klass->vtable._12_Close.method)(
    v6,
    v7,
    v6->klass->vtable._13_CompClose.methodPtr);
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceCommandCard__OpenCommandAssistDetailWIndow(
        BattlePerformanceCommandCard_o *this,
        int32_t markIndex,
        const MethodInfo *method)
{
  BattlePerformanceCommandCard_o *v4; // x19
  __int64 v5; // x1
  struct BattleCommandComponent_array *commandCompArray; // x22
  int max_length; // w8
  unsigned int v8; // w23
  Il2CppClass **v9; // x8
  Il2CppClass *v10; // x21
  BattleCommandData_o *methodPtr; // x20
  _QWORD *v12; // x0
  System_Reflection_MethodBase_o *v13; // x0
  __int64 v14; // x0

  v4 = this;
  if ( (byte_4189DEC & 1) == 0 )
  {
    sub_B2C35C(&Method_BattlePerformanceCommandCard_OpenCommandAssistDetailWIndow__, *(_QWORD *)&markIndex);
    this = (BattlePerformanceCommandCard_o *)sub_B2C35C(&StringLiteral_16565/*"ba20"*/, v5);
    byte_4189DEC = 1;
  }
  commandCompArray = v4->fields.commandCompArray;
  if ( !commandCompArray )
    goto LABEL_19;
  max_length = commandCompArray->max_length;
  if ( max_length >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      if ( v8 >= max_length )
      {
        v14 = sub_B2C460(this);
        sub_B2C400(v14, 0LL);
      }
      v9 = &commandCompArray->obj.klass + (int)v8;
      v10 = v9[4];
      if ( !v10 )
        goto LABEL_19;
      this = (BattlePerformanceCommandCard_o *)BattleCommandComponent__checkMark(
                                                 (BattleCommandComponent_o *)v9[4],
                                                 markIndex,
                                                 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
        break;
      max_length = commandCompArray->max_length;
      if ( (int)++v8 >= max_length )
        return;
    }
    methodPtr = (BattleCommandData_o *)v10->vtable[3].methodPtr;
    if ( !methodPtr )
      goto LABEL_19;
    if ( BattleCommandData__IsEnableCommandAssist((BattleCommandData_o *)v10->vtable[3].methodPtr, 0LL) )
    {
      this = (BattlePerformanceCommandCard_o *)v4->fields.commandAssistDetailWindow;
      if ( this )
      {
        BattleCommandAssistDetailWindowComponent__SetCommandAssistInfo(
          (BattleCommandAssistDetailWindowComponent_o *)this,
          methodPtr,
          0LL);
        v12 = Method_BattlePerformanceCommandCard_OpenCommandAssistDetailWIndow__;
        if ( (*((_BYTE *)Method_BattlePerformanceCommandCard_OpenCommandAssistDetailWIndow__ + 75) & 2) != 0 )
          v12 = (_QWORD *)sub_B2C364(Method_BattlePerformanceCommandCard_OpenCommandAssistDetailWIndow__);
        v13 = (System_Reflection_MethodBase_o *)sub_B2C340(v12, v12[3]);
        OverwriteAssetSoundName__PlaySe(v13, (System_String_o *)StringLiteral_16565/*"ba20"*/, 0LL);
        this = (BattlePerformanceCommandCard_o *)v4->fields.commandAssistDetailWindow;
        if ( this )
        {
          ((void (__fastcall *)(BattlePerformanceCommandCard_o *, _QWORD, void *))this->klass[1]._1.typeMetadataHandle)(
            this,
            0LL,
            this->klass[1]._1.interopData);
          return;
        }
      }
LABEL_19:
      sub_B2C434(this, *(_QWORD *)&markIndex);
    }
  }
}


void __fastcall BattlePerformanceCommandCard__OpenInitiarize(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  BattleLogic_o *logic; // x0

  logic = this->fields.logic;
  if ( !logic )
    goto LABEL_7;
  if ( BattleLogic__getTutorialId(logic, 0LL) != 1 )
    goto LABEL_6;
  logic = this->fields.logic;
  if ( !logic )
LABEL_7:
    sub_B2C434(logic, method);
  if ( BattleLogic__getTurn(logic, 0LL) == 4 )
    this->fields.isTouchNgInTutorial = 1;
LABEL_6:
  this->fields.isPlayingMoveCard = 1;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceCommandCard__OpenSealedWindow(
        BattlePerformanceCommandCard_o *this,
        int32_t markIndex,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  BattleCommandSealStatus_o *SealStatus; // x0
  __int64 v10; // x1
  struct BattleCommandComponent_array *commandCompArray; // x8
  __int64 v12; // x22
  int max_length; // w9
  Il2CppClass **v14; // x8
  BattleCommandComponent_o *v15; // x21
  struct BattleSealedCommandWindowComponent_o **p_sealedWindow; // x19
  BattlePerformanceCommandCard_o *PrioredStatus; // x0
  int v18; // w22
  const MethodInfo *v19; // x2
  System_String_o *SealedWindowMessageLocalizationKey; // x21
  __int64 v21; // x20
  const MethodInfo_2155668 *v22; // x2
  BattleSealedCommandWindowComponent_o *sealedWindow; // x22
  __int64 v24; // x0
  __int128 v25; // [xsp+0h] [xbp-40h] BYREF
  __int64 v26; // [xsp+18h] [xbp-28h] BYREF
  System_Nullable_int__o v27; // 0:x0.8
  System_Nullable_Vector3__o v28; // 0:x0.16
  UnityEngine_Vector3_o v29; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4189DE5 & 1) == 0 )
  {
    sub_B2C35C(&BattleSealedCommandWindowComponent_LabelAdjustArgs_TypeInfo, *(_QWORD *)&markIndex);
    sub_B2C35C(&LocalizationManager_TypeInfo, v5);
    sub_B2C35C(&Method_System_Nullable_Vector3___ctor__, v6);
    sub_B2C35C(&Method_System_Nullable_int___ctor__, v7);
    sub_B2C35C(&SoundManager_TypeInfo, v8);
    byte_4189DE5 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(2, 0LL);
  commandCompArray = this->fields.commandCompArray;
  if ( !commandCompArray )
    goto LABEL_13;
  v12 = 0LL;
  while ( 1 )
  {
    max_length = commandCompArray->max_length;
    if ( (int)v12 >= max_length )
    {
      p_sealedWindow = &this->fields.sealedWindow;
      goto LABEL_24;
    }
    if ( (unsigned int)v12 >= max_length )
    {
      v24 = sub_B2C460(SealStatus);
      sub_B2C400(v24, 0LL);
    }
    v14 = &commandCompArray->obj.klass + v12;
    v15 = (BattleCommandComponent_o *)v14[4];
    if ( !v15 )
      goto LABEL_13;
    SealStatus = (BattleCommandSealStatus_o *)BattleCommandComponent__checkMark(
                                                (BattleCommandComponent_o *)v14[4],
                                                markIndex,
                                                0LL);
    if ( ((unsigned __int8)SealStatus & 1) != 0 )
      break;
    commandCompArray = this->fields.commandCompArray;
    ++v12;
    if ( !commandCompArray )
      goto LABEL_13;
  }
  SealStatus = BattleCommandComponent__get_SealStatus(v15, 0LL);
  if ( !SealStatus )
    goto LABEL_13;
  PrioredStatus = (BattlePerformanceCommandCard_o *)BattleCommandSealStatus__get_PrioredStatus(SealStatus, 0LL);
  v18 = (int)PrioredStatus;
  SealedWindowMessageLocalizationKey = BattlePerformanceCommandCard__GetSealedWindowMessageLocalizationKey(
                                         PrioredStatus,
                                         (int32_t)PrioredStatus,
                                         v19);
  v21 = sub_B2C42C(BattleSealedCommandWindowComponent_LabelAdjustArgs_TypeInfo);
  BattleSealedCommandWindowComponent_LabelAdjustArgs___ctor(
    (BattleSealedCommandWindowComponent_LabelAdjustArgs_o *)v21,
    0LL);
  if ( v18 == 6 )
  {
    v27 = (System_Nullable_int__o)&v26;
    v26 = 0LL;
    System_Nullable_int____ctor(v27, 26, (const MethodInfo_2151C1C *)Method_System_Nullable_int___ctor__);
    if ( v21 )
    {
      v29.fields.y = 15.0;
      *(_QWORD *)&v28.fields.value.fields.x = &v25;
      v29.fields.x = 0.0;
      *(_QWORD *)(v21 + 16) = v26;
      v29.fields.z = 0.0;
      v25 = 0uLL;
      *(_QWORD *)&v28.fields.value.fields.z = Method_System_Nullable_Vector3___ctor__;
      System_Nullable_Vector3____ctor(v28, v29, v22);
      *(_OWORD *)(v21 + 24) = v25;
      goto LABEL_19;
    }
LABEL_13:
    sub_B2C434(SealStatus, v10);
  }
LABEL_19:
  sealedWindow = this->fields.sealedWindow;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  SealStatus = (BattleCommandSealStatus_o *)LocalizationManager__Get(SealedWindowMessageLocalizationKey, 0LL);
  if ( !sealedWindow )
    goto LABEL_13;
  p_sealedWindow = &this->fields.sealedWindow;
  BattleSealedCommandWindowComponent__setLabel(
    sealedWindow,
    (System_String_o *)SealStatus,
    (BattleSealedCommandWindowComponent_LabelAdjustArgs_o *)v21,
    0LL);
LABEL_24:
  SealStatus = (BattleCommandSealStatus_o *)*p_sealedWindow;
  if ( !*p_sealedWindow )
    goto LABEL_13;
  ((void (__fastcall *)(BattleCommandSealStatus_o *, _QWORD, void *))SealStatus->klass[1]._1.typeMetadataHandle)(
    SealStatus,
    0LL,
    SealStatus->klass[1]._1.interopData);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceCommandCard__OpenTdConfWindow(
        BattlePerformanceCommandCard_o *this,
        int32_t markIndex,
        const MethodInfo *method)
{
  BattlePerformanceCommandCard_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  struct BattleCommandComponent_array *commandCompArray; // x8
  __int64 v8; // x26
  int max_length; // w9
  Il2CppClass **v10; // x8
  BattleCommandComponent_o *v11; // x21
  BattleData_o *Bdata; // x22
  BattleServantData_o *v13; // x21
  ServantLimitAddEntity_o *svtlimitaddent; // x24
  bool IsNameTrueFromBattleSvt; // w0
  System_String_o *OverwriteTDRuby; // x22
  System_String_o *OverwriteTDName; // x23
  bool IsNpDetailActive; // w0
  BattleTDConfWIndowComponent_o *tdConfWindow; // x24
  bool v20; // w25
  struct BattleTDConfWIndowComponent_o *v21; // x20
  BattleWindowComponent_EndCall_o *v22; // x21
  __int64 v23; // x0

  v4 = this;
  if ( (byte_4189DE9 & 1) == 0 )
  {
    sub_B2C35C(&Method_BattlePerformanceCommandCard_endOpenTdConf__, *(_QWORD *)&markIndex);
    sub_B2C35C(&BattleWindowComponent_EndCall_TypeInfo, v5);
    this = (BattlePerformanceCommandCard_o *)sub_B2C35C(&SeManager_TypeInfo, v6);
    byte_4189DE9 = 1;
  }
  commandCompArray = v4->fields.commandCompArray;
  if ( !commandCompArray )
    goto LABEL_19;
  v8 = 0LL;
  while ( 1 )
  {
    max_length = commandCompArray->max_length;
    if ( (int)v8 >= max_length )
      break;
    if ( (unsigned int)v8 >= max_length )
    {
      v23 = sub_B2C460(this);
      sub_B2C400(v23, 0LL);
    }
    v10 = &commandCompArray->obj.klass + v8;
    v11 = (BattleCommandComponent_o *)v10[4];
    if ( !v11 )
      goto LABEL_19;
    this = (BattlePerformanceCommandCard_o *)BattleCommandComponent__checkMark(
                                               (BattleCommandComponent_o *)v10[4],
                                               markIndex,
                                               0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      Bdata = v4->fields.Bdata;
      this = (BattlePerformanceCommandCard_o *)BattleCommandComponent__getUniqueID(v11, 0LL);
      if ( !Bdata )
        goto LABEL_19;
      this = (BattlePerformanceCommandCard_o *)BattleData__getServantData(Bdata, (int32_t)this, 0LL);
      if ( !this )
        goto LABEL_19;
      v13 = (BattleServantData_o *)this;
      this = (BattlePerformanceCommandCard_o *)this->fields.cutin_trinity_b;
      if ( !this )
        goto LABEL_19;
      svtlimitaddent = v13->fields.svtlimitaddent;
      IsNameTrueFromBattleSvt = ServantEntity__IsNameTrueFromBattleSvt((ServantEntity_o *)this, 0LL);
      OverwriteTDRuby = 0LL;
      OverwriteTDName = 0LL;
      if ( svtlimitaddent && IsNameTrueFromBattleSvt )
      {
        OverwriteTDName = ServantLimitAddEntity__GetOverwriteTDName(svtlimitaddent, 0LL);
        OverwriteTDRuby = ServantLimitAddEntity__GetOverwriteTDRuby(svtlimitaddent, 0LL);
      }
      this = (BattlePerformanceCommandCard_o *)v4->fields.Bdata;
      if ( !this )
        goto LABEL_19;
      IsNpDetailActive = BattleData__IsNpDetailActive((BattleData_o *)this, v13, 1, 0LL);
      tdConfWindow = v4->fields.tdConfWindow;
      v20 = IsNpDetailActive;
      this = (BattlePerformanceCommandCard_o *)BattleServantData__getTreasureDvcId(v13, 1, 0LL);
      if ( !tdConfWindow )
        goto LABEL_19;
      BattleTDConfWIndowComponent__setData(
        tdConfWindow,
        (int32_t)this,
        v13->fields.treasuredvcLevel,
        OverwriteTDName,
        OverwriteTDRuby,
        v20,
        0LL);
    }
    commandCompArray = v4->fields.commandCompArray;
    ++v8;
    if ( !commandCompArray )
      goto LABEL_19;
  }
  if ( (BYTE3(SeManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SeManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
  SeManager__PlayCommonSe(9, 0LL);
  v21 = v4->fields.tdConfWindow;
  v22 = (BattleWindowComponent_EndCall_o *)sub_B2C42C(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(
    v22,
    (Il2CppObject *)v4,
    Method_BattlePerformanceCommandCard_endOpenTdConf__,
    0LL);
  if ( !v21 )
LABEL_19:
    sub_B2C434(this, *(_QWORD *)&markIndex);
  ((void (__fastcall *)(struct BattleTDConfWIndowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))v21->klass->vtable._10_Open.method)(
    v21,
    v22,
    v21->klass->vtable._11_CompOpen.methodPtr);
}


void __fastcall BattlePerformanceCommandCard__PlayBackStar(
        BattlePerformanceCommandCard_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x22
  struct System_Collections_Generic_List_GameObject__o *aubelist; // x0
  __int64 v17; // x1
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  __int64 v30; // x1
  BattlePerformance_o *perf; // x0
  unsigned int v32; // w25
  struct BattleCommandComponent_array *commandCompArray; // x8
  Il2CppClass **v34; // x8
  BattleCommandComponent_o *v35; // x21
  int32_t CriticalCount; // w22
  int v37; // w26
  struct UnityEngine_Transform_array *commandTransformArray; // x8
  UnityEngine_Transform_o *v39; // x23
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v40; // x24
  const MethodInfo *v41; // x3
  System_Action_o *v43; // x21
  const MethodInfo *v44; // x2
  System_Collections_IEnumerator_o *v45; // x0
  __int64 v46; // x0
  Il2CppObject *object; // [xsp+0h] [xbp-90h]
  System_Collections_Generic_List_Enumerator_T__o v48; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v49; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4189DE2 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_GameObject___ctor__, callback);
    sub_B2C35C(&System_Action_GameObject__TypeInfo, v5);
    sub_B2C35C(&System_Action_TypeInfo, v6);
    sub_B2C35C(&Method_BattleCommandComponent_addCriticalBuff__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__Clear__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v12);
    sub_B2C35C(&Method_BattlePerformanceCommandCard___c__DisplayClass175_0__PlayBackStar_b__0__, v13);
    sub_B2C35C(&BattlePerformanceCommandCard___c__DisplayClass175_0_TypeInfo, v14);
    byte_4189DE2 = 1;
  }
  memset(&v49, 0, sizeof(v49));
  v15 = sub_B2C42C(BattlePerformanceCommandCard___c__DisplayClass175_0_TypeInfo);
  BattlePerformanceCommandCard___c__DisplayClass175_0___ctor(
    (BattlePerformanceCommandCard___c__DisplayClass175_0_o *)v15,
    0LL);
  if ( !v15 )
    goto LABEL_22;
  *(_QWORD *)(v15 + 16) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v15 + 16), (System_Int32_array **)this, v18, v19, v20, v21, v22, v23);
  *(_QWORD *)(v15 + 24) = callback;
  sub_B2C2F8((BattleServantConfConponent_o *)(v15 + 24), (System_Int32_array **)callback, v24, v25, v26, v27, v28, v29);
  aubelist = this->fields.aubelist;
  if ( !aubelist )
    goto LABEL_22;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v48,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)aubelist,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v49 = v48;
  object = (Il2CppObject *)v15;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v49,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    perf = this->fields.perf;
    if ( !perf )
      sub_B2C434(0LL, v30);
    BattlePerformance__destroyInstantiate(perf, (UnityEngine_GameObject_o *)v49.fields.current, 0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v49,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  aubelist = this->fields.aubelist;
  if ( !aubelist )
    goto LABEL_22;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)aubelist,
    (const MethodInfo_2EF4868 *)Method_System_Collections_Generic_List_GameObject__Clear__);
  v32 = 0;
  do
  {
    commandCompArray = this->fields.commandCompArray;
    if ( !commandCompArray )
      goto LABEL_22;
    if ( v32 >= commandCompArray->max_length )
    {
LABEL_23:
      v46 = sub_B2C460(aubelist);
      sub_B2C400(v46, 0LL);
    }
    v34 = &commandCompArray->obj.klass + (int)v32;
    v35 = (BattleCommandComponent_o *)v34[4];
    if ( !v35 )
      goto LABEL_22;
    CriticalCount = BattleCommandComponent__getCriticalCount((BattleCommandComponent_o *)v34[4], 0LL);
    BattleCommandComponent__setCriticalObject(v35, 0, 0LL);
    if ( CriticalCount >= 1 )
    {
      v37 = 0;
      while ( 1 )
      {
        commandTransformArray = this->fields.commandTransformArray;
        if ( !commandTransformArray )
          break;
        if ( v32 >= commandTransformArray->max_length )
          goto LABEL_23;
        v39 = commandTransformArray->m_Items[v32];
        v40 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B2C42C(System_Action_GameObject__TypeInfo);
        System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
          v40,
          (Il2CppObject *)v35,
          Method_BattleCommandComponent_addCriticalBuff__,
          (const MethodInfo_24BBAD8 *)Method_System_Action_GameObject___ctor__);
        BattlePerformanceCommandCard__MoveNotTween2back(this, v39, (System_Action_GameObject__o *)v40, v41);
        if ( ++v37 >= CriticalCount )
          goto LABEL_19;
      }
LABEL_22:
      sub_B2C434(aubelist, v17);
    }
LABEL_19:
    ;
  }
  while ( v32++ < 4 );
  this->fields._IsPlayingBackStar_k__BackingField = 1;
  v43 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(
    v43,
    object,
    Method_BattlePerformanceCommandCard___c__DisplayClass175_0__PlayBackStar_b__0__,
    0LL);
  v45 = BattlePerformanceCommandCard__waitFunc(this, 0.5, v43, v44);
  UnityEngine_MonoBehaviour__StartCoroutine_35309748((UnityEngine_MonoBehaviour_o *)this, v45, 0LL);
}


void __fastcall BattlePerformanceCommandCard__PlayFallStar(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct System_Collections_Generic_List_GameObject__o *aubelist; // x0
  __int64 v11; // x1
  BattlePerformance_o *perf; // x0
  unsigned int v13; // w24
  struct BattleCommandComponent_array *commandCompArray; // x8
  Il2CppClass **v15; // x8
  BattleCommandComponent_o *v16; // x20
  int v17; // w21
  int v18; // w25
  struct UnityEngine_Transform_array *commandTransformArray; // x8
  UnityEngine_Transform_o *v20; // x22
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v21; // x23
  const MethodInfo *v22; // x3
  __int64 v24; // x0
  System_Collections_Generic_List_Enumerator_T__o v25; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o i; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4189DE0 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_GameObject___ctor__, method);
    sub_B2C35C(&System_Action_GameObject__TypeInfo, v3);
    sub_B2C35C(&Method_BattleCommandComponent_addCriticalBuff__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__Clear__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v9);
    byte_4189DE0 = 1;
  }
  memset(&i, 0, sizeof(i));
  aubelist = this->fields.aubelist;
  if ( !aubelist )
    goto LABEL_24;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v25,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)aubelist,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  for ( i = v25;
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
          &i,
          (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
        BattlePerformance__destroyInstantiate(perf, (UnityEngine_GameObject_o *)i.fields.current, 0LL) )
  {
    perf = this->fields.perf;
    if ( !perf )
      sub_B2C434(0LL, v11);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &i,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  aubelist = this->fields.aubelist;
  if ( !aubelist )
    goto LABEL_24;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)aubelist,
    (const MethodInfo_2EF4868 *)Method_System_Collections_Generic_List_GameObject__Clear__);
  v13 = 0;
  do
  {
    commandCompArray = this->fields.commandCompArray;
    if ( !commandCompArray )
      goto LABEL_24;
    if ( v13 >= commandCompArray->max_length )
    {
LABEL_25:
      v24 = sub_B2C460(aubelist);
      sub_B2C400(v24, 0LL);
    }
    v15 = &commandCompArray->obj.klass + (int)v13;
    v16 = (BattleCommandComponent_o *)v15[4];
    if ( !v16 )
      goto LABEL_24;
    aubelist = (struct System_Collections_Generic_List_GameObject__o *)BattleCommandComponent__IsMaxViewCritical(
                                                                         (BattleCommandComponent_o *)v15[4],
                                                                         0LL);
    if ( ((unsigned __int8)aubelist & 1) == 0 )
    {
      aubelist = (struct System_Collections_Generic_List_GameObject__o *)BattleCommandComponent__GetPassStarCount(
                                                                           v16,
                                                                           0LL);
      if ( (int)aubelist >= 1 )
      {
        v17 = (int)aubelist;
        v18 = 0;
        while ( 1 )
        {
          commandTransformArray = this->fields.commandTransformArray;
          if ( !commandTransformArray )
            break;
          if ( v13 >= commandTransformArray->max_length )
            goto LABEL_25;
          v20 = commandTransformArray->m_Items[v13];
          v21 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B2C42C(System_Action_GameObject__TypeInfo);
          System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
            v21,
            (Il2CppObject *)v16,
            Method_BattleCommandComponent_addCriticalBuff__,
            (const MethodInfo_24BBAD8 *)Method_System_Action_GameObject___ctor__);
          BattlePerformanceCommandCard__MoveNotTween(this, v20, (System_Action_GameObject__o *)v21, v22);
          if ( ++v18 >= v17 )
            goto LABEL_19;
        }
LABEL_24:
        sub_B2C434(aubelist, method);
      }
LABEL_19:
      BattleCommandComponent__ResetPassStarCount(v16, 0LL);
      if ( v16->fields.selectflg )
        BattleCommandComponent__updateSelectedEffect(v16, 0LL);
    }
  }
  while ( v13++ < 4 );
  BattlePerformanceCommandCard__updateBuffIcon(this, method);
}


void __fastcall BattlePerformanceCommandCard__PlayFlash(
        BattlePerformanceCommandCard_o *this,
        BattleComboData_o *combo,
        const MethodInfo *method)
{
  struct BattleCommandComponent_array *selectedcomponents; // x8
  BattlePerformanceCommandCard_o *v4; // x20
  struct BattleCommandComponent_array *v6; // x8
  struct BattleCommandComponent_array *v7; // x8
  __int64 v8; // x0

  selectedcomponents = this->fields.selectedcomponents;
  if ( !selectedcomponents )
    goto LABEL_11;
  if ( !selectedcomponents->max_length )
    goto LABEL_12;
  v4 = this;
  this = (BattlePerformanceCommandCard_o *)selectedcomponents->m_Items[0];
  if ( !this )
    goto LABEL_11;
  BattleCommandComponent__flashComboType((BattleCommandComponent_o *)this, 0, combo, 0LL);
  v6 = v4->fields.selectedcomponents;
  if ( !v6 )
    goto LABEL_11;
  if ( v6->max_length <= 1 )
    goto LABEL_12;
  this = (BattlePerformanceCommandCard_o *)v6->m_Items[1];
  if ( !this
    || (BattleCommandComponent__flashComboType((BattleCommandComponent_o *)this, 1, combo, 0LL),
        (v7 = v4->fields.selectedcomponents) == 0LL) )
  {
LABEL_11:
    sub_B2C434(this, combo);
  }
  if ( v7->max_length <= 2 )
  {
LABEL_12:
    v8 = sub_B2C460(this);
    sub_B2C400(v8, 0LL);
  }
  this = (BattlePerformanceCommandCard_o *)v7->m_Items[2];
  if ( !this )
    goto LABEL_11;
  BattleCommandComponent__flashComboType((BattleCommandComponent_o *)this, 2, combo, 0LL);
}


void __fastcall BattlePerformanceCommandCard__PlayFlashComboSvt(
        BattlePerformanceCommandCard_o *this,
        BattleComboData_o *combo,
        const MethodInfo *method)
{
  struct BattleCommandComponent_array *selectedcomponents; // x8
  BattlePerformanceCommandCard_o *v4; // x20
  struct BattleCommandComponent_array *v6; // x8
  struct BattleCommandComponent_array *v7; // x8
  __int64 v8; // x0

  selectedcomponents = this->fields.selectedcomponents;
  if ( !selectedcomponents )
    goto LABEL_11;
  if ( !selectedcomponents->max_length )
    goto LABEL_12;
  v4 = this;
  this = (BattlePerformanceCommandCard_o *)selectedcomponents->m_Items[0];
  if ( !this )
    goto LABEL_11;
  BattleCommandComponent__flashComboSvt((BattleCommandComponent_o *)this, 0, combo, 0LL);
  v6 = v4->fields.selectedcomponents;
  if ( !v6 )
    goto LABEL_11;
  if ( v6->max_length <= 1 )
    goto LABEL_12;
  this = (BattlePerformanceCommandCard_o *)v6->m_Items[1];
  if ( !this
    || (BattleCommandComponent__flashComboSvt((BattleCommandComponent_o *)this, 1, combo, 0LL),
        (v7 = v4->fields.selectedcomponents) == 0LL) )
  {
LABEL_11:
    sub_B2C434(this, combo);
  }
  if ( v7->max_length <= 2 )
  {
LABEL_12:
    v8 = sub_B2C460(this);
    sub_B2C400(v8, 0LL);
  }
  this = (BattlePerformanceCommandCard_o *)v7->m_Items[2];
  if ( !this )
    goto LABEL_11;
  BattleCommandComponent__flashComboSvt((BattleCommandComponent_o *)this, 2, combo, 0LL);
}


void __fastcall BattlePerformanceCommandCard__PlayFlashExtra(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  BattlePerformanceCommandCard_o *v2; // x19
  struct BattleCommandComponent_array *selectedcomponents; // x8
  __int64 v4; // x0

  v2 = this;
  if ( (byte_4189DD5 & 1) == 0 )
  {
    this = (BattlePerformanceCommandCard_o *)sub_B2C35C(&StringLiteral_18183/*"ef_excard01"*/, method);
    byte_4189DD5 = 1;
  }
  selectedcomponents = v2->fields.selectedcomponents;
  if ( !selectedcomponents )
    goto LABEL_7;
  if ( selectedcomponents->max_length <= 3 )
  {
    v4 = sub_B2C460(this);
    sub_B2C400(v4, 0LL);
  }
  this = (BattlePerformanceCommandCard_o *)selectedcomponents->m_Items[3];
  if ( !this )
LABEL_7:
    sub_B2C434(this, method);
  BattleCommandComponent__attachEffect((BattleCommandComponent_o *)this, (System_String_o *)StringLiteral_18183/*"ef_excard01"*/, 5, 0LL);
}


void __fastcall BattlePerformanceCommandCard__ResetCardCriticalLabel(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  struct BattleCommandComponent_array *commandCompArray; // x8
  BattlePerformanceCommandCard_o *v3; // x19
  __int64 v4; // x20
  int max_length; // w9
  __int64 v6; // x0

  commandCompArray = this->fields.commandCompArray;
  if ( !commandCompArray )
LABEL_7:
    sub_B2C434(this, method);
  v3 = this;
  v4 = 0LL;
  while ( 1 )
  {
    max_length = commandCompArray->max_length;
    if ( (int)v4 >= max_length )
      break;
    if ( (unsigned int)v4 >= max_length )
    {
      v6 = sub_B2C460(this);
      sub_B2C400(v6, 0LL);
    }
    this = (BattlePerformanceCommandCard_o *)commandCompArray->m_Items[v4];
    if ( this )
    {
      BattleCommandComponent__resetCriticalLabel((BattleCommandComponent_o *)this, 0LL);
      commandCompArray = v3->fields.commandCompArray;
      ++v4;
      if ( commandCompArray )
        continue;
    }
    goto LABEL_7;
  }
}


void __fastcall BattlePerformanceCommandCard__ResetCommandCardPassData(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  BattlePerformanceCommandCard_o *v2; // x19
  __int64 v3; // x20
  struct BattleCommandComponent_array *commandCompArray; // x8
  __int64 v5; // x0

  v2 = this;
  v3 = 0LL;
  do
  {
    commandCompArray = v2->fields.commandCompArray;
    if ( !commandCompArray )
      goto LABEL_7;
    if ( (unsigned int)v3 >= commandCompArray->max_length )
    {
      v5 = sub_B2C460(this);
      sub_B2C400(v5, 0LL);
    }
    this = (BattlePerformanceCommandCard_o *)commandCompArray->m_Items[v3];
    if ( !this )
LABEL_7:
      sub_B2C434(this, method);
    BattleCommandComponent__ResetPassStarCount((BattleCommandComponent_o *)this, 0LL);
    ++v3;
  }
  while ( (unsigned int)(v3 - 1) < 4 );
}


void __fastcall BattlePerformanceCommandCard__ResetNoblePhantasmCard(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  BattlePerformanceCommandCard_o *v2; // x19
  __int64 v3; // x21
  struct BattleCommandComponent_array *commandCompArray; // x8
  unsigned __int64 v5; // x23
  UnityEngine_Object_o *v6; // x20
  __int64 v7; // x0

  v2 = this;
  if ( (byte_4189E04 & 1) == 0 )
  {
    this = (BattlePerformanceCommandCard_o *)sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_4189E04 = 1;
  }
  v3 = 9LL;
  do
  {
    commandCompArray = v2->fields.commandCompArray;
    if ( !commandCompArray )
LABEL_14:
      sub_B2C434(this, method);
    v5 = v3 - 4;
    if ( v3 - 4 >= (unsigned __int64)commandCompArray->max_length )
    {
      v7 = sub_B2C460(this);
      sub_B2C400(v7, 0LL);
    }
    v6 = (UnityEngine_Object_o *)*((_QWORD *)&commandCompArray->obj.klass + v3);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    this = (BattlePerformanceCommandCard_o *)UnityEngine_Object__op_Inequality(v6, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !v6 )
        goto LABEL_14;
      BattleCommandComponent__setData((BattleCommandComponent_o *)v6, 0LL, 0LL, 0, 1, 0, 0LL);
    }
    ++v3;
  }
  while ( v5 < 7 );
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceCommandCard__SetBackTacticalButton(
        BattlePerformanceCommandCard_o *this,
        bool active,
        const MethodInfo *method)
{
  UnityEngine_Component_o *backTacticalButton; // x0
  UnityEngine_GameObject_o *gameObject; // x20

  if ( (byte_4189DAF & 1) == 0 )
  {
    sub_B2C35C(&AndroidBackKeyManager_TypeInfo, active);
    byte_4189DAF = 1;
  }
  backTacticalButton = (UnityEngine_Component_o *)this->fields.backTacticalButton;
  if ( !backTacticalButton )
    sub_B2C434(0LL, active);
  gameObject = UnityEngine_Component__get_gameObject(backTacticalButton, 0LL);
  if ( active )
  {
    if ( (WORD1(AndroidBackKeyManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !AndroidBackKeyManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AndroidBackKeyManager_TypeInfo);
    }
    AndroidBackKeyManager__AddBackBtn(gameObject, 0LL);
  }
  else
  {
    if ( (WORD1(AndroidBackKeyManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !AndroidBackKeyManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AndroidBackKeyManager_TypeInfo);
    }
    AndroidBackKeyManager__RemoveBackBtn(gameObject, 0LL);
  }
}


void __fastcall BattlePerformanceCommandCard__SetBaseCommandCard(
        BattlePerformanceCommandCard_o *this,
        System_Collections_Generic_List_BattleCommandData__o *baselist,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields.baseCommandList = baselist;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.baseCommandList,
    (System_Int32_array **)baselist,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall BattlePerformanceCommandCard__SetCommandCardEffect(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  struct BattleCommandComponent_array *commandCompArray; // x8
  BattlePerformanceCommandCard_o *v3; // x19
  __int64 v4; // x20
  int max_length; // w9
  __int64 v6; // x0

  commandCompArray = this->fields.commandCompArray;
  if ( !commandCompArray )
LABEL_7:
    sub_B2C434(this, method);
  v3 = this;
  v4 = 0LL;
  while ( 1 )
  {
    max_length = commandCompArray->max_length;
    if ( (int)v4 >= max_length )
      break;
    if ( (unsigned int)v4 >= max_length )
    {
      v6 = sub_B2C460(this);
      sub_B2C400(v6, 0LL);
    }
    this = (BattlePerformanceCommandCard_o *)commandCompArray->m_Items[v4];
    if ( this )
    {
      BattleCommandComponent__UpdateCommandCardEffect((BattleCommandComponent_o *)this, 0LL);
      commandCompArray = v3->fields.commandCompArray;
      ++v4;
      if ( commandCompArray )
        continue;
    }
    goto LABEL_7;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceCommandCard__SetCommandCardEffectActive(
        BattlePerformanceCommandCard_o *this,
        bool value,
        const MethodInfo *method)
{
  struct BattleCommandComponent_array *commandCompArray; // x8
  BattlePerformanceCommandCard_o *v4; // x19
  __int64 v5; // x21
  bool v6; // w20
  int max_length; // w9
  unsigned int v8; // w22
  __int64 v9; // x8
  float v10; // s0
  struct BattleCommandComponent_array *v11; // x8
  bool v12; // w1
  __int64 v13; // x0

  commandCompArray = this->fields.commandCompArray;
  if ( !commandCompArray )
LABEL_14:
    sub_B2C434(this, value);
  v4 = this;
  v5 = 4LL;
  v6 = value;
  while ( 1 )
  {
    max_length = commandCompArray->max_length;
    v8 = v5 - 4;
    if ( (int)v5 - 4 >= max_length )
      break;
    if ( v8 >= max_length )
      goto LABEL_16;
    v9 = *((_QWORD *)&commandCompArray->obj.klass + v5);
    if ( v9 )
    {
      this = *(BattlePerformanceCommandCard_o **)(v9 + 336);
      if ( this )
      {
        this = (BattlePerformanceCommandCard_o *)(*(__int64 (__fastcall **)(BattlePerformanceCommandCard_o *, Il2CppClass *, const MethodInfo *))&this->klass[1]._1.this_arg.bits)(
                                                   this,
                                                   this->klass[1]._1.element_class,
                                                   method);
        v11 = v4->fields.commandCompArray;
        if ( v11 )
        {
          if ( v8 >= v11->max_length )
          {
LABEL_16:
            v13 = sub_B2C460(this);
            sub_B2C400(v13, 0LL);
          }
          this = (BattlePerformanceCommandCard_o *)*((_QWORD *)&v11->obj.klass + v5);
          if ( this )
          {
            v12 = v10 > 0.0 && v6;
            BattleCommandComponent__CardEffectSetActive((BattleCommandComponent_o *)this, v12, 0LL);
            commandCompArray = v4->fields.commandCompArray;
            ++v5;
            if ( commandCompArray )
              continue;
          }
        }
      }
    }
    goto LABEL_14;
  }
}


void __fastcall BattlePerformanceCommandCard__SetCommandCardTypeChangeBuff(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  struct BattleCommandComponent_array *commandCompArray; // x8
  BattlePerformanceCommandCard_o *v3; // x19
  __int64 v4; // x22
  int max_length; // w9
  unsigned int v6; // w23
  __int64 v7; // x8
  BattleCommandData_o *v8; // x20
  int32_t p_commandlist_high; // w3
  int v10; // w2
  BattlePerformanceCommandCard_o *v11; // x21
  int v12; // w8
  int v13; // w8
  struct BattleCommandComponent_array *v14; // x8
  BattleCommandComponent_o *v15; // x8
  __int64 v16; // x0

  commandCompArray = this->fields.commandCompArray;
  if ( !commandCompArray )
LABEL_19:
    sub_B2C434(this, method);
  v3 = this;
  v4 = 4LL;
  while ( 1 )
  {
    max_length = commandCompArray->max_length;
    v6 = v4 - 4;
    if ( (int)v4 - 4 >= max_length )
      break;
    if ( v6 >= max_length )
      goto LABEL_21;
    v7 = *((_QWORD *)&commandCompArray->obj.klass + v4);
    if ( v7 )
    {
      v8 = *(BattleCommandData_o **)(v7 + 352);
      if ( v8 && !BattleCommandData__isTreasureDvc(*(BattleCommandData_o **)(v7 + 352), 0LL) )
      {
        this = (BattlePerformanceCommandCard_o *)BattleCommandData__GetCommandCardTypeChangeBuff(v8, 0LL);
        if ( this )
        {
          v11 = this;
          this = (BattlePerformanceCommandCard_o *)BattleCommandData__IsCommandCardTypeChanged(v8, 0LL);
          v12 = *((_DWORD *)&v11->fields.BaseMonoBehaviour_Fields + 1);
          p_commandlist_high = HIDWORD(v11->fields.p_commandlist);
          v13 = v12 + 1 >= 0 ? v12 + 1 : v12 + 2;
          v10 = v13 >> 1;
        }
        else
        {
          p_commandlist_high = 0;
          v10 = 0;
        }
      }
      else
      {
        p_commandlist_high = 0;
        v10 = 0;
        this = 0LL;
      }
      v14 = v3->fields.commandCompArray;
      if ( v14 )
      {
        if ( v6 >= v14->max_length )
        {
LABEL_21:
          v16 = sub_B2C460(this);
          sub_B2C400(v16, 0LL);
        }
        v15 = (BattleCommandComponent_o *)*((_QWORD *)&v14->obj.klass + v4);
        if ( v15 )
        {
          BattleCommandComponent__SetCommandCardTypeChange(v15, (unsigned __int8)this & 1, v10, p_commandlist_high, 0LL);
          commandCompArray = v3->fields.commandCompArray;
          ++v4;
          if ( commandCompArray )
            continue;
        }
      }
    }
    goto LABEL_19;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceCommandCard__SetCommandPhaseButtonActive(
        BattlePerformanceCommandCard_o *this,
        bool active,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *highSpeedButton; // x0
  bool v6; // w20
  const MethodInfo *v7; // x2

  highSpeedButton = this->fields.highSpeedButton;
  if ( !highSpeedButton
    || (UnityEngine_GameObject__SetActive(highSpeedButton, active, 0LL),
        (highSpeedButton = (UnityEngine_GameObject_o *)this->fields.backTacticalButton) == 0LL)
    || (highSpeedButton = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)highSpeedButton, 0LL)) == 0LL )
  {
    sub_B2C434(highSpeedButton, active);
  }
  v6 = active;
  UnityEngine_GameObject__SetActive(highSpeedButton, v6, 0LL);
  BattlePerformanceCommandCard__SetBackTacticalButton(this, v6, v7);
}


void __fastcall BattlePerformanceCommandCard__SetDownloadEventSprite(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  BattlePerformanceCommandCard_o *v2; // x19
  struct BattleCommandComponent_array *commandCompArray; // x8
  unsigned __int64 v4; // x21
  unsigned __int64 max_length; // x9
  UnityEngine_Object_o *v6; // x20
  __int64 v7; // x0

  v2 = this;
  if ( (byte_4189E02 & 1) == 0 )
  {
    this = (BattlePerformanceCommandCard_o *)sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_4189E02 = 1;
  }
  commandCompArray = v2->fields.commandCompArray;
  if ( !commandCompArray )
LABEL_14:
    sub_B2C434(this, method);
  v4 = 0LL;
  while ( 1 )
  {
    max_length = commandCompArray->max_length;
    if ( (__int64)v4 >= (int)max_length )
      break;
    if ( v4 >= max_length )
    {
      v7 = sub_B2C460(this);
      sub_B2C400(v7, 0LL);
    }
    v6 = (UnityEngine_Object_o *)commandCompArray->m_Items[v4];
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    this = (BattlePerformanceCommandCard_o *)UnityEngine_Object__op_Inequality(v6, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !v6 )
        goto LABEL_14;
      BattleCommandComponent__SetDownloadEventSprite((BattleCommandComponent_o *)v6, 0LL);
    }
    commandCompArray = v2->fields.commandCompArray;
    ++v4;
    if ( !commandCompArray )
      goto LABEL_14;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceCommandCard__SetLabelActive(
        BattlePerformanceCommandCard_o *this,
        bool active,
        const MethodInfo *method)
{
  BattlePerformanceCommandCard_o *v4; // x19
  struct BattleCommandComponent_array *commandCompArray; // x8
  unsigned __int64 v6; // x22
  bool v7; // w20
  unsigned __int64 max_length; // x9
  UnityEngine_Object_o *v9; // x21
  __int64 v10; // x1
  __int64 v11; // x0

  v4 = this;
  if ( (byte_4189E00 & 1) == 0 )
  {
    this = (BattlePerformanceCommandCard_o *)sub_B2C35C(&UnityEngine_Object_TypeInfo, active);
    byte_4189E00 = 1;
  }
  commandCompArray = v4->fields.commandCompArray;
  if ( commandCompArray )
  {
    v6 = 0LL;
    v7 = active;
    while ( 1 )
    {
      max_length = commandCompArray->max_length;
      if ( (__int64)v6 >= (int)max_length )
        break;
      if ( v6 >= max_length )
      {
        v11 = sub_B2C460(this);
        sub_B2C400(v11, 0LL);
      }
      v9 = (UnityEngine_Object_o *)commandCompArray->m_Items[v6];
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      this = (BattlePerformanceCommandCard_o *)UnityEngine_Object__op_Inequality(v9, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !v9 )
          goto LABEL_14;
        BattleCommandComponent__SetLabelActive((BattleCommandComponent_o *)v9, v7, 0LL);
        BattleCommandComponent__SetLabelAssistActive((BattleCommandComponent_o *)v9, v7, 0LL);
      }
      commandCompArray = v4->fields.commandCompArray;
      ++v6;
      if ( !commandCompArray )
LABEL_14:
        sub_B2C434(this, v10);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceCommandCard__SetSelectStamp(
        BattlePerformanceCommandCard_o *this,
        int32_t targetindex,
        UnityEngine_Vector3_o pos,
        BattleCommandComponent_o *bc,
        const MethodInfo *method)
{
  float z; // s8
  float y; // s9
  float x; // s10
  Spawner_o *spawner; // x22
  UnityEngine_Object_o *selectCommandPrefab; // x23
  float v13; // s11
  float v14; // s12
  float v15; // s13
  BattleSelectCommandComponent_o *Component_srcLineSprite; // x0
  __int64 v17; // x1
  float v18; // s0
  float v19; // s1
  float v20; // s2
  float v21; // s3
  float v22; // s4
  float v23; // s5
  float v24; // s6
  float v25; // s7
  UnityEngine_GameObject_o *v26; // x0
  UnityEngine_Component_o *commandrootTransform; // x1
  UnityEngine_GameObject_o *v28; // x21
  UnityEngine_Transform_o *transform; // x22
  int v30; // s0
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v34; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v35; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o v36; // 0:s3.4,4:s4.4,8:s5.4,12:s6.4

  z = pos.fields.z;
  y = pos.fields.y;
  x = pos.fields.x;
  if ( (byte_4189DC2 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_BattleSelectCommandComponent___, *(_QWORD *)&targetindex);
    byte_4189DC2 = 1;
  }
  spawner = this->fields.spawner;
  selectCommandPrefab = (UnityEngine_Object_o *)this->fields.selectCommandPrefab;
  zero = UnityEngine_Vector3__get_zero(0LL);
  v13 = zero.fields.x;
  v14 = zero.fields.y;
  v15 = zero.fields.z;
  *(UnityEngine_Quaternion_o *)&v18 = UnityEngine_Quaternion__get_identity(0LL);
  if ( !spawner )
    goto LABEL_10;
  v22 = v18;
  v23 = v19;
  v24 = v20;
  v25 = v21;
  v34.fields.x = v13;
  v34.fields.y = v14;
  v34.fields.z = v15;
  v36.fields.x = v22;
  v36.fields.y = v23;
  v36.fields.z = v24;
  v36.fields.w = v25;
  v26 = Spawner__Spawn_24865268(spawner, selectCommandPrefab, v34, v36, 0LL);
  commandrootTransform = (UnityEngine_Component_o *)this->fields.commandrootTransform;
  v28 = v26;
  GameObjectExtensions__SetParent(v26, commandrootTransform, 0LL);
  if ( !v28
    || (transform = UnityEngine_GameObject__get_transform(v28, 0LL),
        *(UnityEngine_Vector3_o *)&v30 = UnityEngine_Vector3__get_one(0LL),
        !transform)
    || (UnityEngine_Transform__set_localScale(transform, *(UnityEngine_Vector3_o *)&v30, 0LL),
        (Component_srcLineSprite = (BattleSelectCommandComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                       v28,
                                                                       (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_BattleSelectCommandComponent___)) == 0LL)
    || (BattleSelectCommandComponent__setIndex(Component_srcLineSprite, targetindex, 0LL), !bc)
    || (BattleCommandComponent__setSelectStamp(bc, v28, 0LL),
        (Component_srcLineSprite = (BattleSelectCommandComponent_o *)UnityEngine_GameObject__get_transform(v28, 0LL)) == 0LL) )
  {
LABEL_10:
    sub_B2C434(Component_srcLineSprite, v17);
  }
  v35.fields.x = x;
  v35.fields.y = y;
  v35.fields.z = z;
  UnityEngine_Transform__set_position((UnityEngine_Transform_o *)Component_srcLineSprite, v35, 0LL);
  UnityEngine_GameObject__SetActive(v28, 0, 0LL);
  UnityEngine_GameObject__SetActive(v28, 1, 0LL);
}


void __fastcall BattlePerformanceCommandCard__SetSpecialCommandCardBuff(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  BattlePerformanceCommandCard__updateCardFix(this, method);
  BattlePerformanceCommandCard__SetCommandCardTypeChangeBuff(this, v3);
}


void __fastcall BattlePerformanceCommandCard__SetStatusObjArray(
        BattlePerformanceCommandCard_o *this,
        BattleServantParamComponent_array *statusObjArray,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields.servantStatusObjArray = statusObjArray;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.servantStatusObjArray,
    (System_Int32_array **)statusObjArray,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall BattlePerformanceCommandCard__SetupCommandCardCommonPrefabs(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  BattleDataDefine_c *v10; // x0
  System_String_o *ASSET_BATTLE_COMMON; // x20
  AssetData_o *AssetStorage; // x0
  __int64 v13; // x1
  AssetData_o *v14; // x20
  struct UnityEngine_GameObject_o *Object_WarBoardWaitTimeSetting; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  struct UnityEngine_GameObject_o *v22; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  struct UnityEngine_GameObject_o *v29; // x0
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  struct UnityEngine_GameObject_o *v36; // x0
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  struct UnityEngine_GameObject_o *v43; // x0
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7

  if ( (byte_4189E03 & 1) == 0 )
  {
    sub_B2C35C(&Method_AssetData_GetObject_GameObject____67377624, method);
    sub_B2C35C(&AssetManager_TypeInfo, v3);
    sub_B2C35C(&BattleDataDefine_TypeInfo, v4);
    sub_B2C35C(&StringLiteral_16725/*"bit_1stbonus_q"*/, v5);
    sub_B2C35C(&StringLiteral_16724/*"bit_1stbonus_b"*/, v6);
    sub_B2C35C(&StringLiteral_16745/*"bit_com_grand_m"*/, v7);
    sub_B2C35C(&StringLiteral_16746/*"bit_com_trinity_m"*/, v8);
    sub_B2C35C(&StringLiteral_16723/*"bit_1stbonus_a"*/, v9);
    byte_4189E03 = 1;
  }
  v10 = BattleDataDefine_TypeInfo;
  if ( (BYTE3(BattleDataDefine_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleDataDefine_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
    v10 = BattleDataDefine_TypeInfo;
  }
  ASSET_BATTLE_COMMON = v10->static_fields->ASSET_BATTLE_COMMON;
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__getAssetStorage(ASSET_BATTLE_COMMON, 0LL);
  if ( !AssetStorage )
    goto LABEL_14;
  v14 = AssetStorage;
  Object_WarBoardWaitTimeSetting = (struct UnityEngine_GameObject_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                        AssetStorage,
                                                                        (System_String_o *)StringLiteral_16745/*"bit_com_grand_m"*/,
                                                                        (const MethodInfo_1720344 *)Method_AssetData_GetObject_GameObject____67377624);
  this->fields.cutin_grand_m = Object_WarBoardWaitTimeSetting;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.cutin_grand_m,
    (System_Int32_array **)Object_WarBoardWaitTimeSetting,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  v22 = (struct UnityEngine_GameObject_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                             v14,
                                             (System_String_o *)StringLiteral_16746/*"bit_com_trinity_m"*/,
                                             (const MethodInfo_1720344 *)Method_AssetData_GetObject_GameObject____67377624);
  this->fields.cutin_trinity_m = v22;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.cutin_trinity_m,
    (System_Int32_array **)v22,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  v29 = (struct UnityEngine_GameObject_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                             v14,
                                             (System_String_o *)StringLiteral_16725/*"bit_1stbonus_q"*/,
                                             (const MethodInfo_1720344 *)Method_AssetData_GetObject_GameObject____67377624);
  this->fields.firstbonus_q = v29;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.firstbonus_q,
    (System_Int32_array **)v29,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
  v36 = (struct UnityEngine_GameObject_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                             v14,
                                             (System_String_o *)StringLiteral_16723/*"bit_1stbonus_a"*/,
                                             (const MethodInfo_1720344 *)Method_AssetData_GetObject_GameObject____67377624);
  this->fields.firstbonus_a = v36;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.firstbonus_a,
    (System_Int32_array **)v36,
    v37,
    v38,
    v39,
    v40,
    v41,
    v42);
  v43 = (struct UnityEngine_GameObject_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                             v14,
                                             (System_String_o *)StringLiteral_16724/*"bit_1stbonus_b"*/,
                                             (const MethodInfo_1720344 *)Method_AssetData_GetObject_GameObject____67377624);
  this->fields.firstbonus_b = v43;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.firstbonus_b,
    (System_Int32_array **)v43,
    v44,
    v45,
    v46,
    v47,
    v48,
    v49);
  AssetStorage = (AssetData_o *)this->fields.spawner;
  if ( !AssetStorage
    || (Spawner__Precache_24864620((Spawner_o *)AssetStorage, (UnityEngine_Object_o *)this->fields.firstbonus_q, 1, 0LL),
        (AssetStorage = (AssetData_o *)this->fields.spawner) == 0LL)
    || (Spawner__Precache_24864620((Spawner_o *)AssetStorage, (UnityEngine_Object_o *)this->fields.firstbonus_a, 1, 0LL),
        (AssetStorage = (AssetData_o *)this->fields.spawner) == 0LL) )
  {
LABEL_14:
    sub_B2C434(AssetStorage, v13);
  }
  Spawner__Precache_24864620((Spawner_o *)AssetStorage, (UnityEngine_Object_o *)this->fields.firstbonus_b, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceCommandCard__StartCountupCommandStar(
        BattlePerformanceCommandCard_o *this,
        bool isZeroStart,
        const MethodInfo *method)
{
  struct BattleCommandComponent_array *commandCompArray; // x8
  BattlePerformanceCommandCard_o *v4; // x19
  __int64 v6; // x22
  int max_length; // w9
  Il2CppClass **v8; // x8
  BattleCommandComponent_o *v9; // x21
  __int64 v10; // x0

  commandCompArray = this->fields.commandCompArray;
  if ( !commandCompArray )
LABEL_12:
    sub_B2C434(this, isZeroStart);
  v4 = this;
  v6 = 0LL;
  while ( 1 )
  {
    max_length = commandCompArray->max_length;
    if ( (int)v6 >= max_length )
      break;
    if ( (unsigned int)v6 >= max_length )
    {
      v10 = sub_B2C460(this);
      sub_B2C400(v10, 0LL);
    }
    v8 = &commandCompArray->obj.klass + v6;
    v9 = (BattleCommandComponent_o *)v8[4];
    if ( v9 )
    {
      this = (BattlePerformanceCommandCard_o *)BattleCommandComponent__IsMaxViewCritical(
                                                 (BattleCommandComponent_o *)v8[4],
                                                 0LL);
      if ( ((unsigned __int8)this & 1) == 0 && v9->fields.data )
      {
        if ( isZeroStart )
          BattleCommandComponent__startCountUp(v9, 0LL);
        else
          BattleCommandComponent__updateCount(v9, 0, 0LL);
      }
      commandCompArray = v4->fields.commandCompArray;
      ++v6;
      if ( commandCompArray )
        continue;
    }
    goto LABEL_12;
  }
}


void __fastcall BattlePerformanceCommandCard__Update(BattlePerformanceCommandCard_o *this, const MethodInfo *method)
{
  int32_t firstBonusAnimationWaitTime; // w8
  int32_t v4; // w0
  int32_t v5; // w0
  char v6; // w22
  UnityEngine_Animation_o *touches; // x0
  const MethodInfo *v8; // x1
  UnityEngine_Animation_c *klass; // x8
  UnityEngine_Animation_o *v10; // x20
  unsigned __int64 v11; // x23
  void **p_monitor; // x21
  UnityEngine_Animation_c *v13; // x8
  UnityEngine_Animation_o *v14; // x20
  unsigned __int64 v15; // x22
  void **v16; // x21
  __int64 v17; // x0
  UnityEngine_Touch_o v18; // [xsp+0h] [xbp-C0h] BYREF
  UnityEngine_Touch_o v19; // [xsp+48h] [xbp-78h] BYREF

  memset(&v19, 0, sizeof(v19));
  memset(&v18, 0, sizeof(v18));
  firstBonusAnimationWaitTime = this->fields.firstBonusAnimationWaitTime;
  v4 = firstBonusAnimationWaitTime - 1;
  if ( firstBonusAnimationWaitTime >= 1 )
  {
    this->fields.firstBonusAnimationWaitTime = v4;
    v5 = UnityEngine_Mathf__Max_40694800(v4, 0, 0LL);
    v6 = 0;
    this->fields.firstBonusAnimationWaitTime = v5;
    if ( !v5 )
      v6 = this->fields.drawcount == 1 && this->fields.isTouchCanceled;
    touches = (UnityEngine_Animation_o *)UnityEngine_Input__get_touches(0LL);
    if ( !touches )
      goto LABEL_29;
    klass = touches[1].klass;
    v10 = touches;
    if ( (int)klass >= 1 )
    {
      v11 = 0LL;
      p_monitor = &touches[1].monitor;
      while ( v11 < (unsigned int)klass )
      {
        memmove(&v19, p_monitor, 0x44u);
        touches = (UnityEngine_Animation_o *)UnityEngine_Touch__get_phase(&v19, 0LL);
        if ( !(_DWORD)touches && this->fields.isTouchCanceled )
          v6 |= this->fields.drawcount == 1;
        LODWORD(klass) = v10[1].klass;
        ++v11;
        p_monitor = (void **)((char *)p_monitor + 68);
        if ( (__int64)v11 >= (int)klass )
          goto LABEL_14;
      }
LABEL_28:
      v17 = sub_B2C460(touches);
      sub_B2C400(v17, 0LL);
    }
LABEL_14:
    if ( (v6 & 1) != 0 )
    {
      touches = this->fields.firstBonusAnimation;
      if ( touches )
      {
        UnityEngine_Animation__Stop(touches, 0LL);
        touches = this->fields.firstBonusAnimation;
        if ( touches )
        {
          UnityEngine_Animation__Play(touches, 0LL);
          this->fields.isTouchCanceled = 0;
          goto LABEL_18;
        }
      }
LABEL_29:
      sub_B2C434(touches, v8);
    }
  }
LABEL_18:
  touches = (UnityEngine_Animation_o *)UnityEngine_Input__get_touches(0LL);
  if ( !touches )
    goto LABEL_29;
  v13 = touches[1].klass;
  v14 = touches;
  if ( (int)v13 >= 1 )
  {
    v15 = 0LL;
    v16 = &touches[1].monitor;
    while ( v15 < (unsigned int)v13 )
    {
      memmove(&v18, v16, 0x44u);
      if ( !UnityEngine_Touch__get_phase(&v18, 0LL) )
      {
        *(_WORD *)&this->fields.isTouchBegan = 1;
        this->fields.isTouchCanceled = 0;
      }
      touches = (UnityEngine_Animation_o *)UnityEngine_Touch__get_phase(&v18, 0LL);
      if ( (_DWORD)touches == 3 )
        *(_WORD *)&this->fields.isTouchBegan = 256;
      LODWORD(v13) = v14[1].klass;
      ++v15;
      v16 = (void **)((char *)v16 + 68);
      if ( (__int64)v15 >= (int)v13 )
        goto LABEL_27;
    }
    goto LABEL_28;
  }
LABEL_27:
  BattlePerformanceCommandCard__UpdateSpecialCommandCardBuffIcon(this, v8);
}


void __fastcall BattlePerformanceCommandCard__UpdateCommandCardServantFace(
        BattlePerformanceCommandCard_o *this,
        BattleServantData_o *svtData,
        System_Collections_Generic_IEnumerable_BattleCommandComponent__o *commandCompEnumerable,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_IEnumerable_BattleCommandComponent__c *klass; // x8
  unsigned __int64 v11; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v14; // x1
  __int64 v15; // x3
  __int64 v16; // x19
  __int64 v17; // x8
  unsigned __int64 v18; // x10
  int *v19; // x11
  __int64 v20; // x0
  __int64 v21; // x3
  __int64 v22; // x8
  unsigned __int64 v23; // x10
  int *v24; // x11
  __int64 v25; // x0
  UnityEngine_Object_o *v26; // x21
  _BOOL8 v27; // x0
  __int64 v28; // x1
  __int64 v29; // x8
  unsigned __int64 v30; // x10
  int *v31; // x11
  __int64 v32; // x0

  if ( (byte_4189DDC & 1) == 0 )
  {
    sub_B2C35C(&System_IDisposable_TypeInfo, svtData);
    sub_B2C35C(&System_Collections_Generic_IEnumerable_BattleCommandComponent__TypeInfo, v6);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_BattleCommandComponent__TypeInfo, v7);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v8);
    this = (BattlePerformanceCommandCard_o *)sub_B2C35C(&UnityEngine_Object_TypeInfo, v9);
    byte_4189DDC = 1;
  }
  if ( !commandCompEnumerable )
    sub_B2C434(this, svtData);
  klass = commandCompEnumerable->klass;
  if ( *(_WORD *)&commandCompEnumerable->klass->_2.bitflags1 )
  {
    v11 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_BattleCommandComponent__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BattleCommandComponent__TypeInfo )
    {
      ++v11;
      p_offset += 4;
      if ( v11 >= *(unsigned __int16 *)&commandCompEnumerable->klass->_2.bitflags1 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_8:
    p_method = sub_AC5258(
                 commandCompEnumerable,
                 System_Collections_Generic_IEnumerable_BattleCommandComponent__TypeInfo,
                 0LL,
                 method);
  }
  v16 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_BattleCommandComponent__o *, _QWORD))p_method)(
          commandCompEnumerable,
          *(_QWORD *)(p_method + 8));
  if ( !v16 )
    sub_B2C434(0LL, v14);
  while ( 1 )
  {
    v17 = *(_QWORD *)v16;
    if ( *(_WORD *)(*(_QWORD *)v16 + 298LL) )
    {
      v18 = 0LL;
      v19 = (int *)(*(_QWORD *)(v17 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v19 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v18;
        v19 += 4;
        if ( v18 >= *(unsigned __int16 *)(*(_QWORD *)v16 + 298LL) )
          goto LABEL_15;
      }
      v20 = v17 + 16LL * *v19 + 312;
    }
    else
    {
LABEL_15:
      v20 = sub_AC5258(v16, System_Collections_IEnumerator_TypeInfo, 0LL, v15);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v20)(v16, *(_QWORD *)(v20 + 8)) & 1) == 0 )
      break;
    v22 = *(_QWORD *)v16;
    if ( *(_WORD *)(*(_QWORD *)v16 + 298LL) )
    {
      v23 = 0LL;
      v24 = (int *)(*(_QWORD *)(v22 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_BattleCommandComponent__c **)v24 - 1) != System_Collections_Generic_IEnumerator_BattleCommandComponent__TypeInfo )
      {
        ++v23;
        v24 += 4;
        if ( v23 >= *(unsigned __int16 *)(*(_QWORD *)v16 + 298LL) )
          goto LABEL_22;
      }
      v25 = v22 + 16LL * *v24 + 312;
    }
    else
    {
LABEL_22:
      v25 = sub_AC5258(v16, System_Collections_Generic_IEnumerator_BattleCommandComponent__TypeInfo, 0LL, v21);
    }
    v26 = (UnityEngine_Object_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v25)(v16, *(_QWORD *)(v25 + 8));
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v27 = UnityEngine_Object__op_Equality(v26, 0LL, 0LL);
    if ( !v27 )
    {
      if ( !v26 )
        sub_B2C434(v27, v28);
      BattleCommandComponent__transformSvtFace((BattleCommandComponent_o *)v26, svtData, 0LL);
    }
  }
  v29 = *(_QWORD *)v16;
  if ( *(_WORD *)(*(_QWORD *)v16 + 298LL) )
  {
    v30 = 0LL;
    v31 = (int *)(*(_QWORD *)(v29 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v31 - 1) != System_IDisposable_TypeInfo )
    {
      ++v30;
      v31 += 4;
      if ( v30 >= *(unsigned __int16 *)(*(_QWORD *)v16 + 298LL) )
        goto LABEL_34;
    }
    v32 = v29 + 16LL * *v31 + 312;
  }
  else
  {
LABEL_34:
    v32 = sub_AC5258(v16, System_IDisposable_TypeInfo, 0LL, v21);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v32)(v16, *(_QWORD *)(v32 + 8));
}


void __fastcall BattlePerformanceCommandCard__UpdateCommandCriticalCount(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  struct BattleCommandComponent_array *commandCompArray; // x8
  BattlePerformanceCommandCard_o *v3; // x19
  __int64 v4; // x20
  int max_length; // w9
  __int64 v6; // x0

  commandCompArray = this->fields.commandCompArray;
  if ( !commandCompArray )
LABEL_9:
    sub_B2C434(this, method);
  v3 = this;
  v4 = 0LL;
  while ( 1 )
  {
    max_length = commandCompArray->max_length;
    if ( (int)v4 >= max_length )
      break;
    if ( (unsigned int)v4 >= max_length )
    {
      v6 = sub_B2C460(this);
      sub_B2C400(v6, 0LL);
    }
    this = (BattlePerformanceCommandCard_o *)commandCompArray->m_Items[v4];
    if ( this )
    {
      if ( this->fields.sealedWindow )
      {
        BattleCommandComponent__updateCount((BattleCommandComponent_o *)this, 0, 0LL);
        commandCompArray = v3->fields.commandCompArray;
      }
      ++v4;
      if ( commandCompArray )
        continue;
    }
    goto LABEL_9;
  }
}


void __fastcall BattlePerformanceCommandCard__UpdateDrawnCommandCardServantFace(
        BattlePerformanceCommandCard_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  BattlePerformanceCommandCard__UpdateCommandCardServantFace(
    this,
    svtData,
    (System_Collections_Generic_IEnumerable_BattleCommandComponent__o *)this->fields.commandCompArray,
    v3);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceCommandCard__UpdateRemainingCardBuff(
        BattlePerformanceCommandCard_o *this,
        int32_t nowCardIndex,
        const MethodInfo *method)
{
  int v3; // w19
  __int64 v5; // x1
  void *selectedcomponents; // x0
  __int64 v7; // x8
  __int64 v8; // x22
  __int64 i; // x24
  UnityEngine_Object_o *v10; // x21
  struct BattleCommandComponent_array *v11; // x8
  __int64 v12; // x8
  __int64 v13; // x8
  struct BattleCommandComponent_array *v14; // x8
  BattleCommandComponent_o *v15; // x8
  __int64 v16; // x0

  v3 = nowCardIndex;
  if ( (byte_4189E01 & 1) == 0 )
  {
    sub_B2C35C(&Method_BasicHelper_IndexValue_BattleCommandComponent___, *(_QWORD *)&nowCardIndex);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v5);
    byte_4189E01 = 1;
  }
  selectedcomponents = this->fields.selectedcomponents;
  if ( !selectedcomponents )
LABEL_23:
    sub_B2C434(selectedcomponents, *(_QWORD *)&nowCardIndex);
  v7 = *((_QWORD *)selectedcomponents + 3);
  if ( (int)v7 > v3 )
  {
    v8 = (int)v7;
    for ( i = v3 + 4LL; ; ++i )
    {
      v10 = (UnityEngine_Object_o *)BasicHelper__IndexValue_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_(
                                      (WellFired_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_array *)selectedcomponents,
                                      v3,
                                      0LL,
                                      (const MethodInfo_1728A0C *)Method_BasicHelper_IndexValue_BattleCommandComponent___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      selectedcomponents = (void *)UnityEngine_Object__op_Equality(v10, 0LL, 0LL);
      if ( ((unsigned __int8)selectedcomponents & 1) == 0 )
      {
        v11 = this->fields.selectedcomponents;
        if ( !v11 )
          goto LABEL_23;
        if ( v3 >= v11->max_length )
          goto LABEL_24;
        v12 = *((_QWORD *)&v11->obj.klass + i);
        if ( !v12 )
          goto LABEL_23;
        v13 = *(_QWORD *)(v12 + 352);
        if ( v13 )
        {
          selectedcomponents = this->fields.Bdata;
          if ( !selectedcomponents )
            goto LABEL_23;
          selectedcomponents = BattleData__getServantData(
                                 (BattleData_o *)selectedcomponents,
                                 *(_DWORD *)(v13 + 40),
                                 0LL);
          if ( selectedcomponents )
          {
            v14 = this->fields.selectedcomponents;
            if ( !v14 )
              goto LABEL_23;
            if ( v3 >= v14->max_length )
            {
LABEL_24:
              v16 = sub_B2C460(selectedcomponents);
              sub_B2C400(v16, 0LL);
            }
            v15 = (BattleCommandComponent_o *)*((_QWORD *)&v14->obj.klass + i);
            if ( !v15 )
              goto LABEL_23;
            BattleCommandComponent__setBuffIconList(v15, *((BattleBuffData_o **)selectedcomponents + 95), 0LL);
          }
        }
      }
      if ( i - 3 >= v8 )
        return;
      selectedcomponents = this->fields.selectedcomponents;
      ++v3;
    }
  }
}


void __fastcall BattlePerformanceCommandCard__UpdateSelectedCommandCardServantFace(
        BattlePerformanceCommandCard_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  BattlePerformanceCommandCard__UpdateCommandCardServantFace(
    this,
    svtData,
    (System_Collections_Generic_IEnumerable_BattleCommandComponent__o *)this->fields.selectedcomponents,
    v3);
}


void __fastcall BattlePerformanceCommandCard__UpdateSpecialCommandCardBuffIcon(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  struct BattleCommandComponent_array *commandCompArray; // x8
  BattleCommandComponent_o *v4; // x0
  __int64 v5; // x1
  float deltaTime; // s0
  struct BattleCommandComponent_array *v7; // x8
  float v8; // s8
  __int64 v9; // x20
  int max_length; // w9
  __int64 v11; // x0

  commandCompArray = this->fields.commandCompArray;
  if ( commandCompArray && *(_QWORD *)&commandCompArray->max_length )
  {
    deltaTime = UnityEngine_Time__get_deltaTime(0LL);
    v7 = this->fields.commandCompArray;
    if ( !v7 )
LABEL_9:
      sub_B2C434(v4, v5);
    v8 = deltaTime;
    v9 = 0LL;
    while ( 1 )
    {
      max_length = v7->max_length;
      if ( (int)v9 >= max_length )
        break;
      if ( (unsigned int)v9 >= max_length )
      {
        v11 = sub_B2C460(v4);
        sub_B2C400(v11, 0LL);
      }
      v4 = v7->m_Items[v9];
      if ( v4 )
      {
        BattleCommandComponent__UpdateSpecialCardBuffIconAlpha(v4, v8, 0LL);
        v7 = this->fields.commandCompArray;
        ++v9;
        if ( v7 )
          continue;
      }
      goto LABEL_9;
    }
  }
}


void __fastcall BattlePerformanceCommandCard___selectOK_b__112_0(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *commandfsm; // x0

  if ( (byte_4189E07 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_11616/*"SELECT"*/, method);
    byte_4189E07 = 1;
  }
  commandfsm = this->fields.commandfsm;
  if ( !commandfsm )
    sub_B2C434(0LL, method);
  PlayMakerFSM__SendEvent(commandfsm, (System_String_o *)StringLiteral_11616/*"SELECT"*/, 0LL);
}


void __fastcall BattlePerformanceCommandCard__back2Tactical(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  BattlePerformanceCommandCard_o *v2; // x19
  __int64 v3; // x1
  struct BattleCommandComponent_array *commandCompArray; // x21
  int max_length; // w8
  unsigned int v6; // w22
  Il2CppClass **v7; // x8
  BattleCommandComponent_o *v8; // x20
  int32_t MarkIndex; // w0
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x1
  const MethodInfo *v12; // x2
  __int64 v13; // x0

  v2 = this;
  if ( (byte_4189DF2 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_3089/*"CLOSE"*/, method);
    this = (BattlePerformanceCommandCard_o *)sub_B2C35C(&StringLiteral_16346/*"anim_wait"*/, v3);
    byte_4189DF2 = 1;
  }
  commandCompArray = v2->fields.commandCompArray;
  if ( !commandCompArray )
    goto LABEL_21;
  max_length = commandCompArray->max_length;
  if ( max_length >= 1 )
  {
    v6 = 0;
    while ( 1 )
    {
      if ( v6 >= max_length )
      {
        v13 = sub_B2C460(this);
        sub_B2C400(v13, 0LL);
      }
      v7 = &commandCompArray->obj.klass + (int)v6;
      v8 = (BattleCommandComponent_o *)v7[4];
      if ( !v8 )
        break;
      MarkIndex = BattleCommandComponent__getMarkIndex((BattleCommandComponent_o *)v7[4], 0LL);
      if ( (MarkIndex & 0x80000000) == 0 && v8->fields.selectflg )
        BattlePerformanceCommandCard__unselectCommandCard(v2, v8, MarkIndex, v10);
      if ( BattleCommandComponent__isTreasureDvc(v8, 0LL) )
      {
        BattleCommandComponent__stopAnimation(v8, 0LL);
        BattleCommandComponent__ReleaseNobleGaugeEffect(v8, 0LL);
        this = (BattlePerformanceCommandCard_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)v8,
                                                   0LL);
        if ( !this )
          break;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      }
      this = (BattlePerformanceCommandCard_o *)BattleCommandComponent__checkCriticalPointValid(v8, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 && !v2->fields.isPrevStar )
        v2->fields.isPrevStar = 1;
      max_length = commandCompArray->max_length;
      if ( (int)++v6 >= max_length )
        goto LABEL_18;
    }
LABEL_21:
    sub_B2C434(this, method);
  }
LABEL_18:
  UnityEngine_MonoBehaviour__StopCoroutine_35310416((UnityEngine_MonoBehaviour_o *)v2, v2->fields.openNpCoroutine, 0LL);
  BattlePerformanceCommandCard__cancelFirstBonus(v2, v11);
  this = (BattlePerformanceCommandCard_o *)v2->fields.perf;
  if ( !this )
    goto LABEL_21;
  BattlePerformance__backTacticalMode((BattlePerformance_o *)this, 0LL);
  BattlePerformanceCommandCard__playAnimation(v2, (System_String_o *)StringLiteral_16346/*"anim_wait"*/, v12);
  this = (BattlePerformanceCommandCard_o *)v2->fields.commandfsm;
  if ( !this )
    goto LABEL_21;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_3089/*"CLOSE"*/, 0LL);
}


void __fastcall BattlePerformanceCommandCard__callbackCommandTutorial01(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Vector2_array *Instance; // x0
  __int64 v6; // x1
  float v7; // s4
  float v8; // s5
  float v9; // s6
  float v10; // s7
  unsigned int max_length; // w8
  UnityEngine_Vector2_array *v12; // x20
  __int64 v13; // x0
  UnityEngine_Rect_o v14; // [xsp+0h] [xbp-20h] BYREF
  UnityEngine_Rect_o v15; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4189DFA & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    sub_B2C35C(&UnityEngine_Vector2___TypeInfo, v3);
    sub_B2C35C(&StringLiteral_5496/*"END_PROC"*/, v4);
    byte_4189DFA = 1;
  }
  *(_QWORD *)&v14.fields.m_XMin = 0LL;
  *(_QWORD *)&v14.fields.m_Width = 0LL;
  Instance = (UnityEngine_Vector2_array *)sub_B2C374(UnityEngine_Vector2___TypeInfo, 3LL);
  if ( !Instance )
    goto LABEL_11;
  max_length = Instance->max_length;
  v12 = Instance;
  if ( !max_length
    || (*(_QWORD *)&Instance->m_Items[0].fields.y = 0LL, max_length == 1)
    || (*(_QWORD *)&Instance->m_Items[1].fields.y = 3276275712LL, max_length <= 2) )
  {
    v13 = sub_B2C460(Instance);
    sub_B2C400(v13, 0LL);
  }
  v15.fields.m_XMin = -500.0;
  *(_QWORD *)&Instance->m_Items[2].fields.y = 3284664320LL;
  v15.fields.m_YMin = -230.0;
  v15.fields.m_Width = 600.0;
  v15.fields.m_Height = 250.0;
  UnityEngine_Rect___ctor(v15, v7, v8, v9, v10, (const MethodInfo *)&v14);
  Instance = (UnityEngine_Vector2_array *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__OpenTutorialArrowMark_17997596((CommonUI_o *)Instance, v12, 0.0, v14, 0LL, 0LL),
        (Instance = (UnityEngine_Vector2_array *)this->fields.commandfsm) == 0LL) )
  {
LABEL_11:
    sub_B2C434(Instance, v6);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_5496/*"END_PROC"*/, 0LL);
}


void __fastcall BattlePerformanceCommandCard__callbackTutorial50(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *commandfsm; // x0

  if ( (byte_4189DFB & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_5496/*"END_PROC"*/, method);
    byte_4189DFB = 1;
  }
  commandfsm = this->fields.commandfsm;
  this->fields.isTouchNgInTutorial = 0;
  if ( !commandfsm )
    sub_B2C434(0LL, method);
  PlayMakerFSM__SendEvent(commandfsm, (System_String_o *)StringLiteral_5496/*"END_PROC"*/, 0LL);
}


void __fastcall BattlePerformanceCommandCard__callbackTutorialSpeedNext(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  WebViewManager_o *Instance; // x19
  const MethodInfo *v5; // x2
  BattlePerformanceCommandCard_o *v6; // x0
  UnityEngine_Rect_array *TutorialSquare01; // x1
  UnityEngine_Vector2_array *v8; // x20
  const MethodInfo *v9; // x2
  UnityEngine_Rect_array *v10; // x0
  __int64 v11; // x1
  UnityEngine_Vector2_o v12; // 0:s1.4,4:s2.4

  if ( (byte_4189DFD & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    sub_B2C35C(&StringLiteral_1/*""*/, v3);
    byte_4189DFD = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v6 = (BattlePerformanceCommandCard_o *)BattlePerformanceCommandCard__FSTutorialArrowCard(
                                           (BattlePerformanceCommandCard_o *)Instance,
                                           this->fields.TutorialArrow01,
                                           v5);
  TutorialSquare01 = this->fields.TutorialSquare01;
  v8 = (UnityEngine_Vector2_array *)v6;
  v10 = BattlePerformanceCommandCard__FSTutorialSquareCard(v6, TutorialSquare01, v9);
  if ( !Instance )
    sub_B2C434(v10, v11);
  v12.fields.x = 0.0;
  v12.fields.y = 0.0;
  CommonUI__OpenTutorialNotificationDialogArrow_17995864(
    (CommonUI_o *)Instance,
    (System_String_o *)StringLiteral_1/*""*/,
    v8,
    v10,
    0.0,
    v12,
    -1,
    0LL,
    0LL);
}


void __fastcall BattlePerformanceCommandCard__cancelFirstBonus(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *firstBonusObject; // x20
  Spawner_o *spawner; // x0
  __int64 v5; // x1
  struct BattleCommandComponent_array *commandCompArray; // x8
  __int64 v7; // x21
  int max_length; // w9
  Il2CppClass **v9; // x8
  BattleCommandComponent_o *v10; // x20
  __int64 v11; // x0

  if ( (byte_4189DC8 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_4189DC8 = 1;
  }
  this->fields.firstAuraType = -1;
  firstBonusObject = (UnityEngine_Object_o *)this->fields.firstBonusObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  spawner = (Spawner_o *)UnityEngine_Object__op_Inequality(firstBonusObject, 0LL, 0LL);
  if ( ((unsigned __int8)spawner & 1) != 0 )
  {
    spawner = this->fields.spawner;
    if ( !spawner )
      goto LABEL_15;
    Spawner__Despawn(spawner, this->fields.firstBonusObject, 1, 0LL);
  }
  commandCompArray = this->fields.commandCompArray;
  if ( !commandCompArray )
LABEL_15:
    sub_B2C434(spawner, v5);
  v7 = 0LL;
  while ( 1 )
  {
    max_length = commandCompArray->max_length;
    if ( (int)v7 >= max_length )
      break;
    if ( (unsigned int)v7 >= max_length )
    {
      v11 = sub_B2C460(spawner);
      sub_B2C400(v11, 0LL);
    }
    v9 = &commandCompArray->obj.klass + v7;
    v10 = (BattleCommandComponent_o *)v9[4];
    if ( v10 )
    {
      BattleCommandComponent__stopFirstAura((BattleCommandComponent_o *)v9[4], 0LL);
      BattleCommandComponent__ResetBoostedCriticalRate(v10, 0LL);
      commandCompArray = this->fields.commandCompArray;
      ++v7;
      if ( commandCompArray )
        continue;
    }
    goto LABEL_15;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceCommandCard__changeDirectCommandCardTouch(
        BattlePerformanceCommandCard_o *this,
        bool enable,
        const MethodInfo *method)
{
  BattlePerformanceCommandCard_o *v4; // x20
  struct BattleCommandComponent_array *commandCompArray; // x8
  __int64 v6; // x22
  unsigned __int64 max_length; // x9
  unsigned __int64 v8; // x24
  UnityEngine_Object_o *v9; // x21
  __int64 v10; // x1
  struct BattleCommandComponent_array *v11; // x8
  UnityEngine_Object_o *v12; // x21
  __int64 v13; // x0

  v4 = this;
  if ( (byte_4189DFF & 1) == 0 )
  {
    this = (BattlePerformanceCommandCard_o *)sub_B2C35C(&UnityEngine_Object_TypeInfo, enable);
    byte_4189DFF = 1;
  }
  commandCompArray = v4->fields.commandCompArray;
  if ( commandCompArray )
  {
    v6 = 4LL;
    while ( 1 )
    {
      max_length = commandCompArray->max_length;
      v8 = v6 - 4;
      if ( v6 - 4 >= (int)max_length )
        break;
      if ( v8 >= max_length )
        goto LABEL_23;
      v9 = (UnityEngine_Object_o *)*((_QWORD *)&commandCompArray->obj.klass + v6);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      this = (BattlePerformanceCommandCard_o *)UnityEngine_Object__op_Inequality(v9, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v11 = v4->fields.commandCompArray;
        if ( !v11 )
          goto LABEL_20;
        if ( v8 >= v11->max_length )
        {
LABEL_23:
          v13 = sub_B2C460(this);
          sub_B2C400(v13, 0LL);
        }
        v12 = (UnityEngine_Object_o *)*((_QWORD *)&v11->obj.klass + v6);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        this = (BattlePerformanceCommandCard_o *)UnityEngine_Object__op_Inequality(v12, 0LL, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !v12 )
            goto LABEL_20;
          BattleCommandComponent__setTouchFlg((BattleCommandComponent_o *)v12, enable, 0LL);
        }
      }
      commandCompArray = v4->fields.commandCompArray;
      ++v6;
      if ( !commandCompArray )
LABEL_20:
        sub_B2C434(this, v10);
    }
    v4->fields.directCommandCardTouchEnable = enable;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceCommandCard__changeNoSelectCards(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  UnityEngine_Coroutine_o *openNpCoroutine; // x1
  struct BattleCommandComponent_array *commandCompArray; // x8
  __int64 v5; // x22
  il2cpp_array_size_t max_length; // w9
  il2cpp_array_size_t v7; // w21
  BattleCommandComponent_o *v8; // x20
  struct UnityEngine_GameObject_array *p_commandlist; // x8
  UnityEngine_GameObject_o *v10; // x21
  float g; // s5
  float b; // s6
  float a; // s7
  float v14; // s4
  __int64 v15; // x0
  UnityEngine_Color_o clear; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4 OVERLAPPED

  openNpCoroutine = this->fields.openNpCoroutine;
  if ( openNpCoroutine )
    UnityEngine_MonoBehaviour__StopCoroutine_35310416((UnityEngine_MonoBehaviour_o *)this, openNpCoroutine, 0LL);
  commandCompArray = this->fields.commandCompArray;
  if ( !commandCompArray )
LABEL_13:
    sub_B2C434(this, openNpCoroutine);
  v5 = 4LL;
  while ( 1 )
  {
    max_length = commandCompArray->max_length;
    v7 = v5 - 4;
    if ( (int)v5 - 4 >= (int)(max_length - 1) )
      break;
    if ( v7 >= max_length )
      goto LABEL_15;
    v8 = (BattleCommandComponent_o *)*((_QWORD *)&commandCompArray->obj.klass + v5);
    if ( v8 )
    {
      BattleCommandComponent__stopAnimation(*((BattleCommandComponent_o **)&commandCompArray->obj.klass + v5), 0LL);
      if ( !v8->fields.selectflg )
      {
        p_commandlist = this->fields.p_commandlist;
        if ( !p_commandlist )
          goto LABEL_13;
        if ( v7 >= p_commandlist->max_length )
        {
LABEL_15:
          v15 = sub_B2C460(this);
          sub_B2C400(v15, 0LL);
        }
        v10 = (UnityEngine_GameObject_o *)*((_QWORD *)&p_commandlist->obj.klass + v5);
        clear = UnityEngine_Color__get_clear(0LL);
        g = clear.fields.g;
        b = clear.fields.b;
        a = clear.fields.a;
        clear.fields.g = clear.fields.r;
        clear.fields.b = g;
        clear.fields.a = b;
        v14 = a;
        TweenColor__Begin(v10, 0.2, *(UnityEngine_Color_o *)&clear.fields.g, 0LL);
        BattleCommandComponent__stopFirstAura(v8, 0LL);
        BattleCommandComponent__HideAndCancelCountUpFinishEffect(v8, 0LL);
        BattleCommandComponent__ClearCardEffect(v8, 0LL);
      }
      commandCompArray = this->fields.commandCompArray;
      ++v5;
      if ( commandCompArray )
        continue;
    }
    goto LABEL_13;
  }
}


void __fastcall BattlePerformanceCommandCard__checkAutoBattle(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *commandfsm; // x0

  if ( (byte_4189DEF & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_9301/*"NG"*/, method);
    byte_4189DEF = 1;
  }
  commandfsm = this->fields.commandfsm;
  if ( !commandfsm )
    sub_B2C434(0LL, method);
  PlayMakerFSM__SendEvent(commandfsm, (System_String_o *)StringLiteral_9301/*"NG"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceCommandCard__checkChainBonus(
        BattlePerformanceCommandCard_o *this,
        int32_t targetIndex,
        const MethodInfo *method)
{
  UnityEngine_Component_o *v3; // x19
  char v4; // w22
  int v5; // w24
  __int64 v6; // x23
  UnityEngine_Component_c *klass; // x8
  unsigned __int64 v8; // x25
  UnityEngine_Object_o *v9; // x20
  UnityEngine_Component_c *v10; // x8
  UnityEngine_Object_o *monitor; // x21
  UnityEngine_GameObject_o *v12; // x21
  UnityEngine_Transform_o *transform; // x0
  System_Int32_array **Object; // x1
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  BattleServantConfConponent_o *p_monitor; // x0
  __int64 v22; // x0

  v3 = (UnityEngine_Component_o *)this;
  if ( (byte_4189DC9 & 1) == 0 )
  {
    this = (BattlePerformanceCommandCard_o *)sub_B2C35C(&UnityEngine_Object_TypeInfo, *(_QWORD *)&targetIndex);
    byte_4189DC9 = 1;
  }
  v4 = 0;
  v5 = 0;
  v6 = 4LL;
  do
  {
    klass = v3[18].klass;
    if ( !klass )
      goto LABEL_31;
    v8 = v6 - 4;
    if ( v6 - 4 >= (unsigned __int64)LODWORD(klass->_1.namespaze) )
      goto LABEL_32;
    v9 = (UnityEngine_Object_o *)*((_QWORD *)&klass->_1.image + v6);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    this = (BattlePerformanceCommandCard_o *)UnityEngine_Object__op_Inequality(v9, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
      goto LABEL_16;
    v10 = v3[18].klass;
    if ( !v10 )
      goto LABEL_31;
    if ( v8 >= LODWORD(v10->_1.namespaze) )
    {
LABEL_32:
      v22 = sub_B2C460(this);
      sub_B2C400(v22, 0LL);
    }
    this = (BattlePerformanceCommandCard_o *)*((_QWORD *)&v10->_1.image + v6);
    if ( !this )
      goto LABEL_31;
    this = (BattlePerformanceCommandCard_o *)BattleCommandComponent__isTreasureDvc(
                                               (BattleCommandComponent_o *)this,
                                               0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( ++v5 > 1 )
        v4 = 1;
    }
    else
    {
LABEL_16:
      v5 = 0;
    }
    ++v6;
  }
  while ( v8 < 2 );
  monitor = (UnityEngine_Object_o *)v3[24].monitor;
  if ( (v4 & 1) == 0 )
  {
    if ( (WORD1(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35314896(monitor, 0LL);
    p_monitor = (BattleServantConfConponent_o *)&v3[24].monitor;
    Object = 0LL;
    v3[24].monitor = 0LL;
LABEL_29:
    sub_B2C2F8(p_monitor, Object, v15, v16, v17, v18, v19, v20);
    return;
  }
  if ( (WORD1(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(monitor, 0LL, 0LL) )
  {
    v12 = (UnityEngine_GameObject_o *)v3[7].monitor;
    this = (BattlePerformanceCommandCard_o *)UnityEngine_Component__get_gameObject(v3, 0LL);
    if ( !this )
LABEL_31:
      sub_B2C434(this, *(_QWORD *)&targetIndex);
    transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
    Object = (System_Int32_array **)BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)v3, v12, transform, 0LL, 0LL);
    v3[24].monitor = Object;
    p_monitor = (BattleServantConfConponent_o *)&v3[24].monitor;
    goto LABEL_29;
  }
}


void __fastcall BattlePerformanceCommandCard__checkDrawCount(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *commandfsm; // x0

  if ( (byte_4189DCB & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_11624/*"SELECT_EXE"*/, method);
    byte_4189DCB = 1;
  }
  if ( this->fields.maxdrawcount <= this->fields.drawcount )
  {
    commandfsm = this->fields.commandfsm;
    if ( !commandfsm )
      sub_B2C434(0LL, method);
    PlayMakerFSM__SendEvent(commandfsm, (System_String_o *)StringLiteral_11624/*"SELECT_EXE"*/, 0LL);
  }
}


void __fastcall BattlePerformanceCommandCard__checkMaskEnemy(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  BattlePerformanceCommandCard_o *v2; // x19
  unsigned __int64 v3; // x22
  struct BattleCommandComponent_array *selectedcomponents; // x8
  UnityEngine_Object_o *v5; // x20
  UnityEngine_Object_o *maskSprite; // x20
  int32_t v8; // w1
  UnityEngine_Object_o *v9; // x20
  __int64 v10; // x0

  v2 = this;
  if ( (byte_4189DCA & 1) == 0 )
  {
    this = (BattlePerformanceCommandCard_o *)sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_4189DCA = 1;
  }
  v3 = 0LL;
  while ( 1 )
  {
    selectedcomponents = v2->fields.selectedcomponents;
    if ( !selectedcomponents )
      goto LABEL_27;
    if ( v3 >= selectedcomponents->max_length )
    {
      v10 = sub_B2C460(this);
      sub_B2C400(v10, 0LL);
    }
    v5 = (UnityEngine_Object_o *)selectedcomponents->m_Items[v3];
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    this = (BattlePerformanceCommandCard_o *)UnityEngine_Object__op_Inequality(v5, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
      break;
    if ( v3++ >= 2 )
    {
      maskSprite = (UnityEngine_Object_o *)v2->fields.maskSprite;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(maskSprite, 0LL, 0LL) )
      {
        this = (BattlePerformanceCommandCard_o *)v2->fields.maskSprite;
        if ( this )
        {
          v8 = -31;
          goto LABEL_24;
        }
LABEL_27:
        sub_B2C434(this, method);
      }
      return;
    }
  }
  v9 = (UnityEngine_Object_o *)v2->fields.maskSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v9, 0LL, 0LL) )
  {
    this = (BattlePerformanceCommandCard_o *)v2->fields.maskSprite;
    if ( !this )
      goto LABEL_27;
    v8 = 0;
LABEL_24:
    UIWidget__set_depth((UIWidget_o *)this, v8, 0LL);
  }
}


bool __fastcall BattlePerformanceCommandCard__checkPrevStars(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  return this->fields.isPrevStar;
}


bool __fastcall BattlePerformanceCommandCard__checkSpeedButtonTutorial(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  BattleData_o *Bdata; // x0
  struct BattleData_o *v6; // x8
  CommonUI_o *Instance; // x20
  System_Action_o *v8; // x21

  if ( (byte_4189DFC & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_BattlePerformanceCommandCard_callbackTutorialSpeedNext__, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    byte_4189DFC = 1;
  }
  Bdata = this->fields.Bdata;
  if ( !Bdata )
    goto LABEL_19;
  if ( !BattleData__isTutorial(Bdata, 0LL) )
    return 0;
  Bdata = (BattleData_o *)this->fields.logic;
  if ( !Bdata )
    goto LABEL_19;
  if ( BattleLogic__getTutorialId((BattleLogic_o *)Bdata, 0LL) == 2 )
  {
    Bdata = (BattleData_o *)this->fields.logic;
    if ( !Bdata )
      goto LABEL_19;
    Bdata = (BattleData_o *)BattleLogic__getTurn((BattleLogic_o *)Bdata, 0LL);
    if ( (_DWORD)Bdata == 2 )
    {
      v6 = this->fields.Bdata;
      if ( !v6 )
        goto LABEL_19;
      if ( v6->fields.tutorialState != 10 )
        return 1;
      v6->fields.tutorialState = 20;
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v8 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(
        v8,
        (Il2CppObject *)this,
        Method_BattlePerformanceCommandCard_callbackTutorialSpeedNext__,
        0LL);
      if ( !Instance )
        goto LABEL_19;
      CommonUI__CloseTutorialNotificationDialogArrow_17996480(Instance, v8, 0LL);
    }
  }
  Bdata = (BattleData_o *)this->fields.logic;
  if ( !Bdata )
    goto LABEL_19;
  if ( BattleLogic__getTutorialId((BattleLogic_o *)Bdata, 0LL) != 2 )
    return 0;
  Bdata = (BattleData_o *)this->fields.logic;
  if ( !Bdata )
LABEL_19:
    sub_B2C434(Bdata, method);
  return BattleLogic__getTurn((BattleLogic_o *)Bdata, 0LL) > 2;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceCommandCard__checkTutorial(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  BattleLogic_o *logic; // x0
  int v16; // w20
  int v17; // w21
  int32_t Turn; // w0
  const MethodInfo *v19; // x2
  CommonUI_o *Instance; // x20
  System_String_o *v21; // x21
  const MethodInfo *v22; // x2
  BattlePerformanceCommandCard_o *v23; // x22
  const MethodInfo *v24; // x2
  struct BattleLogic_TutorialStringData_array *TSD; // x8
  BattleLogic_TutorialStringData_o *v26; // x8
  const MethodInfo *v27; // x2
  struct BattlePerformance_o *perf; // x8
  CommonUI_o *v29; // x20
  System_String_o *v30; // x21
  const MethodInfo *v31; // x1
  UnityEngine_Vector2_o FSTutorialArrow22; // kr00_8
  const MethodInfo *v33; // x1
  float v34; // s0
  float v35; // s1
  float v36; // s2
  float v37; // s3
  struct BattleLogic_TutorialStringData_array *v38; // x8
  BattleLogic_TutorialStringData_o *v39; // x8
  float v40; // s16
  float v41; // s7
  const MethodInfo *v42; // x2
  const MethodInfo *v43; // x2
  struct BattleLogic_TutorialStringData_array *v44; // x8
  const MethodInfo *v45; // x2
  struct BattlePerformance_o *v46; // x8
  const MethodInfo *v47; // x2
  const MethodInfo *v48; // x1
  struct BattleLogic_TutorialStringData_array *v49; // x8
  const MethodInfo *v50; // x2
  const MethodInfo *v51; // x2
  struct BattleLogic_TutorialStringData_array *v52; // x8
  const MethodInfo *v53; // x2
  const MethodInfo *v54; // x2
  struct BattleLogic_TutorialStringData_array *v55; // x8
  const MethodInfo *v56; // x2
  const MethodInfo *v57; // x2
  struct BattleLogic_TutorialStringData_array *v58; // x8
  CommonUI_o *v59; // x20
  System_String_o *v60; // x21
  System_Action_o *v61; // x22
  __int64 v62; // x0
  UnityEngine_Rect_o v63; // 0:s2.4,4:s3.4,8:s4.4,12:s5.4

  if ( (byte_4189DF9 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_BattlePerformanceCommandCard_callbackTutorial50__, v3);
    sub_B2C35C(&LocalizationManager_TypeInfo, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_B2C35C(&StringLiteral_13491/*"TUTORIAL_MESSAGE_BATTLE_131"*/, v6);
    sub_B2C35C(&StringLiteral_13487/*"TUTORIAL_MESSAGE_BATTLE_111"*/, v7);
    sub_B2C35C(&StringLiteral_13495/*"TUTORIAL_MESSAGE_BATTLE_153"*/, v8);
    sub_B2C35C(&StringLiteral_13493/*"TUTORIAL_MESSAGE_BATTLE_141"*/, v9);
    sub_B2C35C(&StringLiteral_5496/*"END_PROC"*/, v10);
    sub_B2C35C(&StringLiteral_13500/*"TUTORIAL_MESSAGE_BATTLE_230"*/, v11);
    sub_B2C35C(&StringLiteral_13489/*"TUTORIAL_MESSAGE_BATTLE_122"*/, v12);
    sub_B2C35C(&StringLiteral_13502/*"TUTORIAL_MESSAGE_BATTLE_321"*/, v13);
    sub_B2C35C(&StringLiteral_13499/*"TUTORIAL_MESSAGE_BATTLE_223"*/, v14);
    byte_4189DF9 = 1;
  }
  logic = this->fields.logic;
  if ( !logic )
    goto LABEL_80;
  logic = (BattleLogic_o *)BattleLogic__getTutorialId(logic, 0LL);
  if ( !this->fields.logic )
    goto LABEL_80;
  v16 = (int)logic;
  logic = (BattleLogic_o *)BattleLogic__getWave(this->fields.logic, 0LL);
  if ( !this->fields.logic )
    goto LABEL_80;
  v17 = (int)logic;
  Turn = BattleLogic__getTurn(this->fields.logic, 0LL);
  if ( v16 != 3 )
  {
    if ( v16 != 2 )
    {
      if ( v16 == 1 )
      {
        switch ( Turn )
        {
          case 1:
            Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v21 = LocalizationManager__Get((System_String_o *)StringLiteral_13487/*"TUTORIAL_MESSAGE_BATTLE_111"*/, 0LL);
            v23 = (BattlePerformanceCommandCard_o *)BattlePerformanceCommandCard__FSTutorialArrowCard(
                                                      (BattlePerformanceCommandCard_o *)v21,
                                                      this->fields.TutorialArrow01,
                                                      v22);
            logic = (BattleLogic_o *)BattlePerformanceCommandCard__FSTutorialSquareCard(
                                       v23,
                                       this->fields.TutorialSquare01,
                                       v24);
            TSD = this->fields.TSD;
            if ( !TSD )
              goto LABEL_80;
            if ( !TSD->max_length )
              goto LABEL_81;
            v26 = TSD->m_Items[0];
            if ( !v26 )
              goto LABEL_80;
            goto LABEL_36;
          case 2:
            Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v21 = LocalizationManager__Get((System_String_o *)StringLiteral_13489/*"TUTORIAL_MESSAGE_BATTLE_122"*/, 0LL);
            v23 = (BattlePerformanceCommandCard_o *)BattlePerformanceCommandCard__FSTutorialArrowCard(
                                                      (BattlePerformanceCommandCard_o *)v21,
                                                      this->fields.TutorialArrow01,
                                                      v56);
            logic = (BattleLogic_o *)BattlePerformanceCommandCard__FSTutorialSquareCard(
                                       v23,
                                       this->fields.TutorialSquare01,
                                       v57);
            v58 = this->fields.TSD;
            if ( !v58 )
              goto LABEL_80;
            if ( v58->max_length <= 1 )
              goto LABEL_81;
            v26 = v58->m_Items[1];
            if ( !v26 )
              goto LABEL_80;
            goto LABEL_36;
          case 3:
            Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v21 = LocalizationManager__Get((System_String_o *)StringLiteral_13491/*"TUTORIAL_MESSAGE_BATTLE_131"*/, 0LL);
            v23 = (BattlePerformanceCommandCard_o *)BattlePerformanceCommandCard__FSTutorialArrowCard(
                                                      (BattlePerformanceCommandCard_o *)v21,
                                                      this->fields.TutorialArrow01,
                                                      v53);
            logic = (BattleLogic_o *)BattlePerformanceCommandCard__FSTutorialSquareCard(
                                       v23,
                                       this->fields.TutorialSquare01,
                                       v54);
            v55 = this->fields.TSD;
            if ( !v55 )
              goto LABEL_80;
            if ( v55->max_length <= 2 )
              goto LABEL_81;
            v26 = v55->m_Items[2];
            if ( !v26 )
              goto LABEL_80;
            goto LABEL_36;
          case 4:
            v59 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v60 = LocalizationManager__Get((System_String_o *)StringLiteral_13493/*"TUTORIAL_MESSAGE_BATTLE_141"*/, 0LL);
            v61 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
            System_Action___ctor(
              v61,
              (Il2CppObject *)this,
              Method_BattlePerformanceCommandCard_callbackTutorial50__,
              0LL);
            if ( !v59 )
              goto LABEL_80;
            CommonUI__OpenTutorialNotificationDialog(v59, v60, -1, v61, 0LL);
            goto LABEL_52;
          case 5:
            Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v21 = LocalizationManager__Get((System_String_o *)StringLiteral_13495/*"TUTORIAL_MESSAGE_BATTLE_153"*/, 0LL);
            v23 = (BattlePerformanceCommandCard_o *)BattlePerformanceCommandCard__FSTutorialArrowCard(
                                                      (BattlePerformanceCommandCard_o *)v21,
                                                      this->fields.TutorialArrow05,
                                                      v50);
            logic = (BattleLogic_o *)BattlePerformanceCommandCard__FSTutorialSquareCard(
                                       v23,
                                       this->fields.TutorialSquare05,
                                       v51);
            v52 = this->fields.TSD;
            if ( !v52 )
              goto LABEL_80;
            if ( v52->max_length <= 3 )
              goto LABEL_81;
            v26 = v52->m_Items[3];
            if ( !v26 )
              goto LABEL_80;
            goto LABEL_36;
          default:
            goto LABEL_52;
        }
      }
      goto LABEL_52;
    }
    if ( Turn == 2 )
    {
      BattlePerformanceCommandCard__SetCommandPhaseButtonActive(this, 1, v19);
      perf = this->fields.perf;
      if ( !perf || !perf->fields.data )
        goto LABEL_80;
      BattlePerformanceCommandCard__updateHighSpeedObject(this, (int32_t)method, v27);
      v29 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v30 = LocalizationManager__Get((System_String_o *)StringLiteral_13499/*"TUTORIAL_MESSAGE_BATTLE_223"*/, 0LL);
      FSTutorialArrow22 = BattlePerformanceCommandCard__get_FSTutorialArrow22(this, v31);
      *(UnityEngine_Rect_o *)&v34 = BattlePerformanceCommandCard__get_FSTutorialSquare22(this, v33);
      v38 = this->fields.TSD;
      if ( !v38 )
        goto LABEL_80;
      if ( v38->max_length > 4 )
      {
        v39 = v38->m_Items[4];
        if ( v39 && v29 )
        {
          v40 = v36;
          v41 = v37;
          v63.fields.m_XMin = v34;
          v63.fields.m_YMin = v35;
          v63.fields.m_Width = v40;
          v63.fields.m_Height = v41;
          CommonUI__OpenTutorialNotificationDialogArrow(
            v29,
            v30,
            FSTutorialArrow22,
            v63,
            v39->fields.way,
            v39->fields.pos,
            v39->fields.size,
            0LL,
            0LL);
          goto LABEL_52;
        }
LABEL_80:
        sub_B2C434(logic, method);
      }
LABEL_81:
      v62 = sub_B2C460(logic);
      sub_B2C400(v62, 0LL);
    }
    if ( Turn >= 3 )
    {
      BattlePerformanceCommandCard__SetCommandPhaseButtonActive(this, 1, v19);
      v46 = this->fields.perf;
      if ( !v46 || !v46->fields.data )
        goto LABEL_80;
      BattlePerformanceCommandCard__updateHighSpeedObject(this, (int32_t)method, v45);
    }
LABEL_51:
    BattlePerformanceCommandCard__callbackCommandTutorial01(this, method);
    goto LABEL_52;
  }
  if ( v17 || Turn != 1 )
  {
    if ( v17 != 1 || Turn != 1 )
      goto LABEL_51;
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v21 = LocalizationManager__Get((System_String_o *)StringLiteral_13502/*"TUTORIAL_MESSAGE_BATTLE_321"*/, 0LL);
    v23 = (BattlePerformanceCommandCard_o *)BattlePerformanceCommandCard__FSTutorialArrowCard(
                                              (BattlePerformanceCommandCard_o *)v21,
                                              this->fields.TutorialArrow31,
                                              v47);
    logic = (BattleLogic_o *)BattlePerformanceCommandCard__get_FSTutorialSquare32(this, v48);
    v49 = this->fields.TSD;
    if ( !v49 )
      goto LABEL_80;
    if ( v49->max_length <= 6 )
      goto LABEL_81;
    v26 = v49->m_Items[6];
    if ( !v26 )
      goto LABEL_80;
  }
  else
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v21 = LocalizationManager__Get((System_String_o *)StringLiteral_13500/*"TUTORIAL_MESSAGE_BATTLE_230"*/, 0LL);
    v23 = (BattlePerformanceCommandCard_o *)BattlePerformanceCommandCard__FSTutorialArrowCard(
                                              (BattlePerformanceCommandCard_o *)v21,
                                              this->fields.TutorialArrow31,
                                              v42);
    logic = (BattleLogic_o *)BattlePerformanceCommandCard__FSTutorialSquareCard(v23, this->fields.TutorialSquare01, v43);
    v44 = this->fields.TSD;
    if ( !v44 )
      goto LABEL_80;
    if ( v44->max_length <= 5 )
      goto LABEL_81;
    v26 = v44->m_Items[5];
    if ( !v26 )
      goto LABEL_80;
  }
LABEL_36:
  if ( !Instance )
    goto LABEL_80;
  CommonUI__OpenTutorialNotificationDialogArrow_17995864(
    Instance,
    v21,
    (UnityEngine_Vector2_array *)v23,
    (UnityEngine_Rect_array *)logic,
    v26->fields.way,
    v26->fields.pos,
    v26->fields.size,
    0LL,
    0LL);
LABEL_52:
  logic = (BattleLogic_o *)this->fields.commandfsm;
  if ( !logic )
    goto LABEL_80;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)logic, (System_String_o *)StringLiteral_5496/*"END_PROC"*/, 0LL);
}


void __fastcall BattlePerformanceCommandCard__clickBackButton(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  BattlePerformanceCommandCard_o *v2; // x19
  struct BattlePerformance_o *perf; // x8

  v2 = this;
  if ( (byte_4189DF1 & 1) == 0 )
  {
    this = (BattlePerformanceCommandCard_o *)sub_B2C35C(&StringLiteral_3114/*"CLOSE_WINDOW"*/, method);
    byte_4189DF1 = 1;
  }
  perf = v2->fields.perf;
  if ( !perf )
    goto LABEL_8;
  this = (BattlePerformanceCommandCard_o *)perf->fields.data;
  if ( !this )
    goto LABEL_8;
  if ( BattleData__isTutorialCard((BattleData_o *)this, 0LL) )
    return;
  this = (BattlePerformanceCommandCard_o *)v2->fields.commandfsm;
  if ( !this )
LABEL_8:
    sub_B2C434(this, method);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_3114/*"CLOSE_WINDOW"*/, 0LL);
}


void __fastcall BattlePerformanceCommandCard__closeWindow(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_IEnumerator_o *__fastcall BattlePerformanceCommandCard__coStartFirstBonus(
        BattlePerformanceCommandCard_o *this,
        int32_t type,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_4189DC3 & 1) == 0 )
  {
    sub_B2C35C(&BattlePerformanceCommandCard__coStartFirstBonus_d__119_TypeInfo, *(_QWORD *)&type);
    byte_4189DC3 = 1;
  }
  v5 = sub_B2C42C(BattlePerformanceCommandCard__coStartFirstBonus_d__119_TypeInfo);
  BattlePerformanceCommandCard__coStartFirstBonus_d__119___ctor(
    (BattlePerformanceCommandCard__coStartFirstBonus_d__119_o *)v5,
    0,
    0LL);
  if ( !v5 )
    sub_B2C434(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v5 + 32), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  *(_DWORD *)(v5 + 40) = type;
  return (System_Collections_IEnumerator_o *)v5;
}


System_Collections_IEnumerator_o *__fastcall BattlePerformanceCommandCard__colOpenNpCard(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_4189DE4 & 1) == 0 )
  {
    sub_B2C35C(&BattlePerformanceCommandCard__colOpenNpCard_d__182_TypeInfo, method);
    byte_4189DE4 = 1;
  }
  v3 = sub_B2C42C(BattlePerformanceCommandCard__colOpenNpCard_d__182_TypeInfo);
  BattlePerformanceCommandCard__colOpenNpCard_d__182___ctor(
    (BattlePerformanceCommandCard__colOpenNpCard_d__182_o *)v3,
    0,
    0LL);
  if ( !v3 )
    sub_B2C434(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v3 + 32), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v3;
}


void __fastcall BattlePerformanceCommandCard__comboExecute(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  BattleLogic_o *logic; // x0
  struct BattlePerformance_o *perf; // x8
  struct BattlePerformance_o *v13; // x8
  struct BattleData_o *data; // x8
  const MethodInfo *v15; // x2
  UnityEngine_Object_o *firstBonusObject; // x20
  __int64 v17; // x21
  struct System_Int32_array **p_selectcommand; // x26
  struct BattleCommandData_array **p_commandlist; // x25
  struct System_Int32_array *v20; // x8
  struct BattleCommandData_array *v21; // x9
  __int64 v22; // x8
  Il2CppClass **v23; // x8
  BattleCommandData_o *v24; // x20
  struct BattlePerformance_o *v25; // x8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v26; // x20
  struct System_Int32_array *v27; // x9
  struct BattleCommandData_array *v28; // x8
  __int64 v29; // x9
  struct System_Int32_array *v30; // x8
  struct BattleCommandData_array *v31; // x9
  __int64 v32; // x8
  struct System_Int32_array *v33; // x8
  struct BattleCommandData_array *v34; // x9
  __int64 v35; // x8
  BattleData_o *Bdata; // x21
  __int64 v37; // x3
  struct BattlePerformance_o *v38; // x8
  struct BattleData_o *v39; // x9
  struct BattleActionLogManagerInterface_o *actionLogManager; // x21
  BattleActionLogManagerInterface_c *klass; // x8
  unsigned int globaltargetId; // w22
  unsigned __int64 v43; // x10
  BattleActionLogManagerInterface_c **p_offset; // x11
  __int64 p_method; // x0
  __int64 v46; // x3
  struct BattlePerformance_o *v47; // x8
  struct BattleData_o *v48; // x8
  struct System_Int32_array *v49; // x9
  struct BattleActionLogManagerInterface_o *v50; // x21
  BattleActionLogManagerInterface_c *v51; // x8
  unsigned int v52; // w23
  unsigned int v53; // w24
  unsigned int v54; // w22
  unsigned __int64 v55; // x10
  BattleActionLogManagerInterface_c **v56; // x11
  __int64 v57; // x0
  struct BattleData_o *v58; // x8
  struct System_Int32_array *v59; // x8
  struct BattleCommandData_array *v60; // x9
  __int64 v61; // x8
  BattleCommandData_o *v62; // x22
  BattleCommandData_o *v63; // x21
  BattleData_o *v64; // x21
  __int64 v65; // x20
  struct BattleCommandComponent_array *selectedcomponents; // x8
  System_String_array **v67; // x2
  System_String_array **v68; // x3
  System_Boolean_array **v69; // x4
  System_Int32_array **v70; // x5
  System_Int32_array *v71; // x6
  System_Int32_array *v72; // x7
  struct BattlePerformance_o *v73; // x8
  struct BattleData_o *v74; // x8
  struct BattlePerformance_o *v75; // x8
  struct BattlePerformance_o *v76; // x8
  __int64 v77; // x0

  if ( (byte_4189DCC & 1) == 0 )
  {
    sub_B2C35C(&BattleActionLogManagerInterface_TypeInfo, method);
    sub_B2C35C(&BattleCommandData_TypeInfo, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleCommandData__Add__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleCommandData__ToArray__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleCommandData___ctor__, v6);
    sub_B2C35C(&System_Collections_Generic_List_BattleCommandData__TypeInfo, v7);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v8);
    sub_B2C35C(&SeManager_TypeInfo, v9);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10);
    byte_4189DCC = 1;
  }
  if ( this->fields.maxdrawcount > this->fields.drawcount )
    return;
  logic = this->fields.logic;
  if ( !logic )
    goto LABEL_95;
  BattleLogic__SetTimeAccelerationCheckDelayReset(logic, 0, 0LL);
  logic = (BattleLogic_o *)this->fields.perf;
  if ( !logic )
    goto LABEL_95;
  BattlePerformance__ChangeBattleSpeed((BattlePerformance_o *)logic, 0LL);
  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_95;
  logic = (BattleLogic_o *)perf->fields.statusPerf;
  if ( !logic )
    goto LABEL_95;
  BattlePerformanceStatus__SetActiveTotalCriticalStar((BattlePerformanceStatus_o *)logic, 0, 0LL);
  v13 = this->fields.perf;
  if ( !v13 )
    goto LABEL_95;
  data = v13->fields.data;
  if ( !data )
    goto LABEL_95;
  data->fields.isCalcCritical = 1;
  logic = (BattleLogic_o *)this->fields.backTacticalButton;
  if ( !logic )
    goto LABEL_95;
  logic = (BattleLogic_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)logic, 0LL);
  if ( !logic )
    goto LABEL_95;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)logic, 0, 0LL);
  BattlePerformanceCommandCard__SetBackTacticalButton(this, 0, v15);
  logic = (BattleLogic_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !logic )
    goto LABEL_95;
  CommonUI__CloseTutorialNotificationDialogArrow((CommonUI_o *)logic, 0LL);
  firstBonusObject = (UnityEngine_Object_o *)this->fields.firstBonusObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  logic = (BattleLogic_o *)UnityEngine_Object__op_Inequality(firstBonusObject, 0LL, 0LL);
  if ( ((unsigned __int8)logic & 1) != 0 )
  {
    logic = (BattleLogic_o *)this->fields.spawner;
    if ( !logic )
      goto LABEL_95;
    Spawner__Despawn((Spawner_o *)logic, this->fields.firstBonusObject, 1, 0LL);
  }
  if ( this->fields.maxdrawcount > 0 )
  {
    v17 = 0LL;
    p_selectcommand = &this->fields.selectcommand;
    p_commandlist = &this->fields.commandlist;
    while ( 1 )
    {
      v20 = *p_selectcommand;
      if ( !*p_selectcommand )
        break;
      if ( (unsigned int)v17 >= v20->max_length )
        goto LABEL_96;
      v21 = *p_commandlist;
      if ( !*p_commandlist )
        break;
      v22 = v20->m_Items[v17 + 1];
      if ( (unsigned int)v22 >= v21->max_length )
        goto LABEL_96;
      v23 = &v21->obj.klass + v22;
      v24 = (BattleCommandData_o *)v23[4];
      if ( !v24 )
        break;
      logic = (BattleLogic_o *)BattleCommandData__isTreasureDvc((BattleCommandData_o *)v23[4], 0LL);
      if ( ((unsigned __int8)logic & 1) != 0 )
      {
        v25 = this->fields.perf;
        if ( !v25 )
          break;
        logic = (BattleLogic_o *)v25->fields.data;
        if ( !logic )
          break;
        logic = (BattleLogic_o *)BattleData__getServantData((BattleData_o *)logic, v24->fields.uniqueId, 0LL);
        if ( logic )
          BattleServantData__SetSelectedTreasureDevice((BattleServantData_o *)logic, 0LL);
      }
      else
      {
        BattleCommandData__SetSelectedType(v24, 0LL);
      }
      if ( (int)++v17 >= this->fields.maxdrawcount )
        goto LABEL_35;
    }
LABEL_95:
    sub_B2C434(logic, method);
  }
  p_commandlist = &this->fields.commandlist;
  p_selectcommand = &this->fields.selectcommand;
LABEL_35:
  v26 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_BattleCommandData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v26,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_BattleCommandData___ctor__);
  v27 = *p_selectcommand;
  if ( !*p_selectcommand )
    goto LABEL_95;
  if ( !v27->max_length )
    goto LABEL_96;
  v28 = *p_commandlist;
  if ( !*p_commandlist )
    goto LABEL_95;
  v29 = v27->m_Items[1];
  if ( (unsigned int)v29 >= v28->max_length )
    goto LABEL_96;
  if ( !v26 )
    goto LABEL_95;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v26,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v28->m_Items[v29],
    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_BattleCommandData__Add__);
  v30 = *p_selectcommand;
  if ( !*p_selectcommand )
    goto LABEL_95;
  if ( v30->max_length <= 1 )
    goto LABEL_96;
  v31 = *p_commandlist;
  if ( !*p_commandlist )
    goto LABEL_95;
  v32 = v30->m_Items[2];
  if ( (unsigned int)v32 >= v31->max_length )
    goto LABEL_96;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v26,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v31->m_Items[v32],
    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_BattleCommandData__Add__);
  v33 = *p_selectcommand;
  if ( !*p_selectcommand )
    goto LABEL_95;
  if ( v33->max_length <= 2 )
    goto LABEL_96;
  v34 = *p_commandlist;
  if ( !*p_commandlist )
    goto LABEL_95;
  v35 = v33->m_Items[3];
  if ( (unsigned int)v35 >= v34->max_length )
    goto LABEL_96;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v26,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v34->m_Items[v35],
    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_BattleCommandData__Add__);
  Bdata = this->fields.Bdata;
  logic = (BattleLogic_o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                             (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v26,
                             (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_BattleCommandData__ToArray__);
  if ( !Bdata )
    goto LABEL_95;
  BattleData__setCommandData(Bdata, (BattleCommandData_array *)logic, 0LL);
  v38 = this->fields.perf;
  if ( !v38 )
    goto LABEL_95;
  v39 = v38->fields.data;
  if ( !v39 )
    goto LABEL_95;
  actionLogManager = v39->fields.actionLogManager;
  if ( !actionLogManager )
    goto LABEL_95;
  klass = actionLogManager->klass;
  globaltargetId = v39->fields.globaltargetId;
  if ( *(_WORD *)&actionLogManager->klass->_2.bitflags1 )
  {
    v43 = 0LL;
    p_offset = (BattleActionLogManagerInterface_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != BattleActionLogManagerInterface_TypeInfo )
    {
      ++v43;
      p_offset += 2;
      if ( v43 >= *(unsigned __int16 *)&actionLogManager->klass->_2.bitflags1 )
        goto LABEL_56;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 7].method;
  }
  else
  {
LABEL_56:
    p_method = sub_AC5258(actionLogManager, BattleActionLogManagerInterface_TypeInfo, 7LL, v37);
  }
  logic = (BattleLogic_o *)(*(__int64 (__fastcall **)(struct BattleActionLogManagerInterface_o *, _QWORD, _QWORD))p_method)(
                             actionLogManager,
                             globaltargetId,
                             *(_QWORD *)(p_method + 8));
  v47 = this->fields.perf;
  if ( !v47 )
    goto LABEL_95;
  v48 = v47->fields.data;
  if ( !v48 )
    goto LABEL_95;
  v49 = *p_selectcommand;
  if ( !*p_selectcommand )
    goto LABEL_95;
  if ( v49->max_length < 3 )
    goto LABEL_96;
  v50 = v48->fields.actionLogManager;
  if ( !v50 )
    goto LABEL_95;
  v51 = v50->klass;
  v53 = v49->m_Items[1];
  v52 = v49->m_Items[2];
  v54 = v49->m_Items[3];
  if ( *(_WORD *)&v50->klass->_2.bitflags1 )
  {
    v55 = 0LL;
    v56 = (BattleActionLogManagerInterface_c **)&v51->_1.interfaceOffsets->offset;
    while ( *(v56 - 1) != BattleActionLogManagerInterface_TypeInfo )
    {
      ++v55;
      v56 += 2;
      if ( v55 >= *(unsigned __int16 *)&v50->klass->_2.bitflags1 )
        goto LABEL_67;
    }
    v57 = (__int64)&v51->vtable[*(_DWORD *)v56 + 8].method;
  }
  else
  {
LABEL_67:
    v57 = sub_AC5258(v50, BattleActionLogManagerInterface_TypeInfo, 8LL, v46);
  }
  (*(void (__fastcall **)(struct BattleActionLogManagerInterface_o *, _QWORD, _QWORD, _QWORD, _QWORD))v57)(
    v50,
    v53,
    v52,
    v54,
    *(_QWORD *)(v57 + 8));
  logic = this->fields.logic;
  if ( !logic )
    goto LABEL_95;
  BattleLogic__endSelectCommand(logic, 0LL);
  v58 = this->fields.Bdata;
  if ( !v58 )
    goto LABEL_95;
  logic = (BattleLogic_o *)v58->fields.combodata;
  if ( !logic )
    goto LABEL_95;
  logic = (BattleLogic_o *)BattleComboData__isExtraAttack((BattleComboData_o *)logic, 0LL);
  if ( ((unsigned __int8)logic & 1) == 0 )
    goto LABEL_80;
  v59 = *p_selectcommand;
  if ( !*p_selectcommand )
    goto LABEL_95;
  if ( v59->max_length <= 2 )
    goto LABEL_96;
  v60 = *p_commandlist;
  if ( !*p_commandlist )
    goto LABEL_95;
  v61 = v59->m_Items[3];
  if ( (unsigned int)v61 >= v60->max_length )
  {
LABEL_96:
    v77 = sub_B2C460(logic);
    sub_B2C400(v77, 0LL);
  }
  v62 = v60->m_Items[v61];
  v63 = (BattleCommandData_o *)sub_B2C42C(BattleCommandData_TypeInfo);
  BattleCommandData___ctor_18398436(v63, v62, 0LL);
  if ( !v63 )
    goto LABEL_95;
  BattleCommandData__setTypeAddAttack(v63, 0LL);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v26,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v63,
    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_BattleCommandData__Add__);
  v64 = this->fields.Bdata;
  logic = (BattleLogic_o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                             (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v26,
                             (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_BattleCommandData__ToArray__);
  if ( !v64 )
    goto LABEL_95;
  BattleData__setCommandData(v64, (BattleCommandData_array *)logic, 0LL);
LABEL_80:
  v65 = 0LL;
  do
  {
    selectedcomponents = this->fields.selectedcomponents;
    if ( !selectedcomponents )
      goto LABEL_95;
    if ( (unsigned int)v65 >= selectedcomponents->max_length )
      goto LABEL_96;
    logic = (BattleLogic_o *)selectedcomponents->m_Items[v65];
    if ( !logic )
      goto LABEL_95;
    BattleCommandComponent__startComboCard((BattleCommandComponent_o *)logic, 0LL);
    ++v65;
  }
  while ( (unsigned int)(v65 - 1) < 2 );
  v73 = this->fields.perf;
  if ( !v73 )
    goto LABEL_95;
  v74 = v73->fields.data;
  if ( !v74 )
    goto LABEL_95;
  v74->fields.commandCriticalArray = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&v74->fields.commandCriticalArray, 0LL, v67, v68, v69, v70, v71, v72);
  v75 = this->fields.perf;
  if ( !v75 )
    goto LABEL_95;
  logic = (BattleLogic_o *)v75->fields.data;
  if ( !logic )
    goto LABEL_95;
  BattleData__ResetAllCriticalInfo((BattleData_o *)logic, 0LL);
  v76 = this->fields.perf;
  if ( !v76 )
    goto LABEL_95;
  logic = (BattleLogic_o *)v76->fields.statusPerf;
  if ( !logic )
    goto LABEL_95;
  BattlePerformanceStatus__updateCriticalPoint((BattlePerformanceStatus_o *)logic, -1, 0, 0LL);
  if ( (BYTE3(SeManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SeManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
  SeManager__PlayCommonSe(6, 0LL);
}


void __fastcall BattlePerformanceCommandCard__countupStarPoint(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceCommandCard__createCommandCard(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  BattlePerformanceCommandCard_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  struct UnityEngine_GameObject_array *p_commandlist; // x8
  struct UnityEngine_GameObject_array **p_p_commandlist; // x20
  unsigned __int64 v13; // x22
  unsigned __int64 max_length; // x9
  UnityEngine_Object_o *v15; // x21
  __int64 v16; // x1
  System_Int32_array **v17; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_Int32_array **v24; // x0
  struct BattleCommandComponent_array **p_commandCompArray; // x21
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  System_Int32_array **v32; // x0
  struct UnityEngine_Transform_array **p_commandTransformArray; // x22
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  struct UnityEngine_GameObject_array *v40; // x25
  unsigned int v41; // w28
  int32_t v42; // w23
  __int64 v43; // x26
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  System_Int32_array **v50; // x24
  struct UnityEngine_GameObject_array *v51; // x8
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  struct BattleCommandComponent_array *v58; // x25
  BattlePerformanceCommandCard_o *v59; // x24
  struct UnityEngine_GameObject_array *v60; // x8
  struct UnityEngine_Transform_array *v61; // x27
  System_String_array **v62; // x2
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  System_Int32_array **v68; // x25
  System_Int32_array **gameObject; // x0
  System_String_array **v70; // x2
  System_String_array **v71; // x3
  System_Boolean_array **v72; // x4
  System_Int32_array **v73; // x5
  System_Int32_array *v74; // x6
  System_Int32_array *v75; // x7
  System_Int32_array **perf; // x1
  System_String_array **v77; // x2
  System_String_array **v78; // x3
  System_Boolean_array **v79; // x4
  System_Int32_array **v80; // x5
  System_Int32_array *v81; // x6
  System_Int32_array *v82; // x7
  struct UnityEngine_Transform_array *v83; // x8
  struct UnityEngine_Transform_array *excardTr; // x8
  UnityEngine_Transform_o *v85; // x1
  struct UnityEngine_Transform_array *v86; // x8
  struct UnityEngine_Transform_array *cardTr; // x9
  struct UnityEngine_Transform_array *v88; // x8
  UnityEngine_Transform_o *v89; // x25
  int v90; // s0
  struct UnityEngine_Transform_array *v93; // x8
  UnityEngine_Transform_o *v94; // x25
  int v95; // s0
  struct UnityEngine_Transform_array *npcardTr; // x8
  struct UnityEngine_Transform_array *v100; // x8
  UnityEngine_Transform_o *v101; // x25
  int v102; // s0
  struct UnityEngine_Transform_array *v105; // x8
  UnityEngine_Transform_o *v106; // x25
  int v107; // s0
  struct UnityEngine_GameObject_array *v111; // x8
  UIWidget_o *Component_srcLineSprite; // x25
  int v113; // s0
  System_Int32_array **v117; // x0
  System_String_array **v118; // x2
  System_String_array **v119; // x3
  System_Boolean_array **v120; // x4
  System_Int32_array **v121; // x5
  System_Int32_array *v122; // x6
  System_Int32_array *v123; // x7
  struct UnityEngine_GameObject_array *v124; // x8
  struct BattleCommandComponent_array *selectedcomponents; // x20
  System_String_array **v126; // x2
  System_String_array **v127; // x3
  System_Boolean_array **v128; // x4
  System_Int32_array **v129; // x5
  System_Int32_array *v130; // x6
  System_Int32_array *v131; // x7
  System_Int32_array **v132; // x21
  System_Int32_array **v133; // x0
  System_String_array **v134; // x2
  System_String_array **v135; // x3
  System_Boolean_array **v136; // x4
  System_Int32_array **v137; // x5
  System_Int32_array *v138; // x6
  System_Int32_array *v139; // x7
  __int64 v140; // x0
  __int64 v141; // x0

  v2 = this;
  if ( (byte_4189DB1 & 1) == 0 )
  {
    sub_B2C35C(&BattleCommandComponent___TypeInfo, method);
    sub_B2C35C(&UnityEngine_GameObject___TypeInfo, v3);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_BattleCommandComponent___, v4);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_UIWidget___, v5);
    sub_B2C35C(&int___TypeInfo, v6);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v7);
    sub_B2C35C(&UnityEngine_Transform___TypeInfo, v8);
    sub_B2C35C(&StringLiteral_18204/*"ef_resistarrow"*/, v9);
    this = (BattlePerformanceCommandCard_o *)sub_B2C35C(&StringLiteral_18219/*"ef_weakarrow"*/, v10);
    byte_4189DB1 = 1;
  }
  p_p_commandlist = &v2->fields.p_commandlist;
  p_commandlist = v2->fields.p_commandlist;
  if ( p_commandlist )
  {
    v13 = 0LL;
    while ( 1 )
    {
      max_length = p_commandlist->max_length;
      if ( (__int64)v13 >= (int)max_length )
        break;
      if ( v13 >= max_length )
        goto LABEL_79;
      v15 = (UnityEngine_Object_o *)p_commandlist->m_Items[v13];
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_35314896(v15, 0LL);
      p_commandlist = *p_p_commandlist;
      ++v13;
      if ( !*p_p_commandlist )
        goto LABEL_78;
    }
  }
  v17 = (System_Int32_array **)sub_B2C374(UnityEngine_GameObject___TypeInfo, 9LL);
  v2->fields.p_commandlist = (struct UnityEngine_GameObject_array *)v17;
  sub_B2C2F8((BattleServantConfConponent_o *)&v2->fields.p_commandlist, v17, v18, v19, v20, v21, v22, v23);
  v24 = (System_Int32_array **)sub_B2C374(BattleCommandComponent___TypeInfo, 9LL);
  p_commandCompArray = &v2->fields.commandCompArray;
  v2->fields.commandCompArray = (struct BattleCommandComponent_array *)v24;
  sub_B2C2F8((BattleServantConfConponent_o *)&v2->fields.commandCompArray, v24, v26, v27, v28, v29, v30, v31);
  v32 = (System_Int32_array **)sub_B2C374(UnityEngine_Transform___TypeInfo, 9LL);
  p_commandTransformArray = &v2->fields.commandTransformArray;
  v2->fields.commandTransformArray = (struct UnityEngine_Transform_array *)v32;
  sub_B2C2F8((BattleServantConfConponent_o *)&v2->fields.commandTransformArray, v32, v34, v35, v36, v37, v38, v39);
  v40 = v2->fields.p_commandlist;
  if ( !v40 )
    goto LABEL_78;
  v41 = 0;
  v42 = 30;
  v43 = 32LL;
  while ( (signed int)v41 < (signed int)v40->max_length )
  {
    this = (BattlePerformanceCommandCard_o *)BaseMonoBehaviour__createObject(
                                               (BaseMonoBehaviour_o *)v2,
                                               v2->fields.commandprefab,
                                               v2->fields.commandrootTransform,
                                               0LL,
                                               0LL);
    v50 = (System_Int32_array **)this;
    if ( this )
    {
      this = (BattlePerformanceCommandCard_o *)sub_B2C41C(this, v40->obj.klass->_1.element_class);
      if ( !this )
        goto LABEL_80;
    }
    if ( v41 >= v40->max_length )
      goto LABEL_79;
    *(Il2CppClass **)((char *)&v40->obj.klass + v43) = (Il2CppClass *)v50;
    sub_B2C2F8((BattleServantConfConponent_o *)((char *)v40 + v43), v50, v44, v45, v46, v47, v48, v49);
    v51 = *p_p_commandlist;
    if ( !*p_p_commandlist )
      goto LABEL_78;
    if ( v41 >= v51->max_length )
      goto LABEL_79;
    this = *(BattlePerformanceCommandCard_o **)((char *)&v51->obj.klass + v43);
    if ( !this )
      goto LABEL_78;
    this = (BattlePerformanceCommandCard_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                               (UnityEngine_GameObject_o *)this,
                                               (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_BattleCommandComponent___);
    v58 = *p_commandCompArray;
    if ( !*p_commandCompArray )
      goto LABEL_78;
    v59 = this;
    if ( this )
    {
      this = (BattlePerformanceCommandCard_o *)sub_B2C41C(this, v58->obj.klass->_1.element_class);
      if ( !this )
        goto LABEL_80;
    }
    if ( v41 >= v58->max_length )
      goto LABEL_79;
    *(Il2CppClass **)((char *)&v58->obj.klass + v43) = (Il2CppClass *)v59;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)((char *)v58 + v43),
      (System_Int32_array **)v59,
      v52,
      v53,
      v54,
      v55,
      v56,
      v57);
    v60 = *p_p_commandlist;
    if ( !*p_p_commandlist )
      goto LABEL_78;
    if ( v41 >= v60->max_length )
      goto LABEL_79;
    this = *(BattlePerformanceCommandCard_o **)((char *)&v60->obj.klass + v43);
    if ( !this )
      goto LABEL_78;
    v61 = *p_commandTransformArray;
    this = (BattlePerformanceCommandCard_o *)UnityEngine_GameObject__get_transform(
                                               (UnityEngine_GameObject_o *)this,
                                               0LL);
    if ( !v61 )
      goto LABEL_78;
    v68 = (System_Int32_array **)this;
    if ( this )
    {
      this = (BattlePerformanceCommandCard_o *)sub_B2C41C(this, v61->obj.klass->_1.element_class);
      if ( !this )
        goto LABEL_80;
    }
    if ( v41 >= v61->max_length )
      goto LABEL_79;
    *(Il2CppClass **)((char *)&v61->obj.klass + v43) = (Il2CppClass *)v68;
    sub_B2C2F8((BattleServantConfConponent_o *)((char *)v61 + v43), v68, v62, v63, v64, v65, v66, v67);
    if ( !v59 )
      goto LABEL_78;
    BattleCommandComponent__Initialize((BattleCommandComponent_o *)v59, 0LL);
    LOWORD(v59->fields.cutin_trinity_q) = 256;
    BattleCommandComponent__setData((BattleCommandComponent_o *)v59, 0LL, 0LL, 0, 1, 0, 0LL);
    gameObject = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v2, 0LL);
    v59->fields.commandAssistDetailWindow = (struct BattleCommandAssistDetailWindowComponent_o *)gameObject;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v59->fields.commandAssistDetailWindow,
      gameObject,
      v70,
      v71,
      v72,
      v73,
      v74,
      v75);
    BattleCommandComponent__setDepth((BattleCommandComponent_o *)v59, v42, 0LL);
    perf = (System_Int32_array **)v2->fields.perf;
    v59->fields.backTacticalButton = (struct UIButton_o *)perf;
    sub_B2C2F8((BattleServantConfConponent_o *)&v59->fields.backTacticalButton, perf, v77, v78, v79, v80, v81, v82);
    if ( v41 <= 4 )
    {
      v86 = *p_commandTransformArray;
      if ( !*p_commandTransformArray )
        goto LABEL_78;
      if ( v41 >= v86->max_length )
        goto LABEL_79;
      cardTr = v2->fields.cardTr;
      if ( !cardTr )
        goto LABEL_78;
      if ( v41 >= cardTr->max_length )
        goto LABEL_79;
      this = *(BattlePerformanceCommandCard_o **)((char *)&v86->obj.klass + v43);
      if ( !this )
        goto LABEL_78;
      UnityEngine_Transform__SetParent(
        (UnityEngine_Transform_o *)this,
        *(UnityEngine_Transform_o **)((char *)&cardTr->obj.klass + v43),
        0LL);
      v88 = *p_commandTransformArray;
      if ( !*p_commandTransformArray )
        goto LABEL_78;
      if ( v41 >= v88->max_length )
        goto LABEL_79;
      v89 = *(UnityEngine_Transform_o **)((char *)&v88->obj.klass + v43);
      *(UnityEngine_Vector3_o *)&v90 = UnityEngine_Vector3__get_zero(0LL);
      if ( !v89 )
        goto LABEL_78;
      UnityEngine_Transform__set_localPosition(v89, *(UnityEngine_Vector3_o *)&v90, 0LL);
      v93 = *p_commandTransformArray;
      if ( !*p_commandTransformArray )
        goto LABEL_78;
      if ( v41 >= v93->max_length )
        goto LABEL_79;
      v94 = *(UnityEngine_Transform_o **)((char *)&v93->obj.klass + v43);
      *(UnityEngine_Quaternion_o *)&v95 = UnityEngine_Quaternion__get_identity(0LL);
      if ( !v94 )
        goto LABEL_78;
      UnityEngine_Transform__set_localRotation(v94, *(UnityEngine_Quaternion_o *)&v95, 0LL);
    }
    else
    {
      v83 = *p_commandTransformArray;
      if ( !*p_commandTransformArray )
        goto LABEL_78;
      if ( v41 >= v83->max_length )
        goto LABEL_79;
      this = *(BattlePerformanceCommandCard_o **)((char *)&v83->obj.klass + v43);
      if ( v41 <= 7 )
      {
        npcardTr = v2->fields.npcardTr;
        if ( !npcardTr )
          goto LABEL_78;
        if ( v41 - 5 >= npcardTr->max_length )
          goto LABEL_79;
        if ( !this )
          goto LABEL_78;
        v85 = *(UnityEngine_Transform_o **)((char *)npcardTr + v43 - 40);
      }
      else
      {
        excardTr = v2->fields.excardTr;
        if ( !excardTr )
          goto LABEL_78;
        if ( v41 - 8 >= excardTr->max_length )
          goto LABEL_79;
        if ( !this )
          goto LABEL_78;
        v85 = *(UnityEngine_Transform_o **)((char *)excardTr + v43 - 64);
      }
      UnityEngine_Transform__SetParent((UnityEngine_Transform_o *)this, v85, 0LL);
      v100 = *p_commandTransformArray;
      if ( !*p_commandTransformArray )
        goto LABEL_78;
      if ( v41 >= v100->max_length )
        goto LABEL_79;
      v101 = *(UnityEngine_Transform_o **)((char *)&v100->obj.klass + v43);
      *(UnityEngine_Vector3_o *)&v102 = UnityEngine_Vector3__get_zero(0LL);
      if ( !v101 )
        goto LABEL_78;
      UnityEngine_Transform__set_localPosition(v101, *(UnityEngine_Vector3_o *)&v102, 0LL);
      v105 = *p_commandTransformArray;
      if ( !*p_commandTransformArray )
        goto LABEL_78;
      if ( v41 >= v105->max_length )
        goto LABEL_79;
      v106 = *(UnityEngine_Transform_o **)((char *)&v105->obj.klass + v43);
      *(UnityEngine_Quaternion_o *)&v107 = UnityEngine_Quaternion__get_identity(0LL);
      if ( !v106 )
        goto LABEL_78;
      UnityEngine_Transform__set_localRotation(v106, *(UnityEngine_Quaternion_o *)&v107, 0LL);
      v111 = *p_p_commandlist;
      if ( !*p_p_commandlist )
        goto LABEL_78;
      if ( v41 >= v111->max_length )
        goto LABEL_79;
      this = *(BattlePerformanceCommandCard_o **)((char *)&v111->obj.klass + v43);
      if ( !this )
        goto LABEL_78;
      Component_srcLineSprite = (UIWidget_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                (UnityEngine_GameObject_o *)this,
                                                (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
      *(UnityEngine_Color_o *)&v113 = UnityEngine_Color__get_clear(0LL);
      if ( !Component_srcLineSprite )
        goto LABEL_78;
      UIWidget__set_color(Component_srcLineSprite, *(UnityEngine_Color_o *)&v113, 0LL);
    }
    BattleCommandComponent__addObject((BattleCommandComponent_o *)v59, (System_String_o *)StringLiteral_18204/*"ef_resistarrow"*/, 0, 0LL);
    BattleCommandComponent__addObject((BattleCommandComponent_o *)v59, (System_String_o *)StringLiteral_18219/*"ef_weakarrow"*/, 1, 0LL);
    v40 = *p_p_commandlist;
    ++v41;
    v43 += 8LL;
    v42 += 20;
    if ( !*p_p_commandlist )
      goto LABEL_78;
  }
  v117 = (System_Int32_array **)sub_B2C374(BattleCommandComponent___TypeInfo, 4LL);
  v2->fields.selectedcomponents = (struct BattleCommandComponent_array *)v117;
  sub_B2C2F8((BattleServantConfConponent_o *)&v2->fields.selectedcomponents, v117, v118, v119, v120, v121, v122, v123);
  v124 = v2->fields.p_commandlist;
  if ( !v124 )
    goto LABEL_78;
  if ( v124->max_length <= 8 )
    goto LABEL_79;
  this = (BattlePerformanceCommandCard_o *)v124->m_Items[8];
  if ( !this
    || (selectedcomponents = v2->fields.selectedcomponents,
        this = (BattlePerformanceCommandCard_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                   (UnityEngine_GameObject_o *)this,
                                                   (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_BattleCommandComponent___),
        !selectedcomponents) )
  {
LABEL_78:
    sub_B2C434(this, v16);
  }
  v132 = (System_Int32_array **)this;
  if ( this )
  {
    this = (BattlePerformanceCommandCard_o *)sub_B2C41C(this, selectedcomponents->obj.klass->_1.element_class);
    if ( !this )
    {
LABEL_80:
      v141 = sub_B2C454(this);
      sub_B2C400(v141, 0LL);
    }
  }
  if ( selectedcomponents->max_length <= 3 )
  {
LABEL_79:
    v140 = sub_B2C460(this);
    sub_B2C400(v140, 0LL);
  }
  selectedcomponents->m_Items[3] = (BattleCommandComponent_o *)v132;
  sub_B2C2F8((BattleServantConfConponent_o *)&selectedcomponents->m_Items[3], v132, v126, v127, v128, v129, v130, v131);
  v133 = (System_Int32_array **)sub_B2C374(int___TypeInfo, 9LL);
  v2->fields.selectcommand = (struct System_Int32_array *)v133;
  sub_B2C2F8((BattleServantConfConponent_o *)&v2->fields.selectcommand, v133, v134, v135, v136, v137, v138, v139);
  v2->fields.drawcount = 0;
}


void __fastcall BattlePerformanceCommandCard__endCloseCommandAssistDetailWindow(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *commandfsm; // x0

  if ( (byte_4189DEE & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_3114/*"CLOSE_WINDOW"*/, method);
    byte_4189DEE = 1;
  }
  commandfsm = this->fields.commandfsm;
  if ( !commandfsm )
    sub_B2C434(0LL, method);
  PlayMakerFSM__SendEvent(commandfsm, (System_String_o *)StringLiteral_3114/*"CLOSE_WINDOW"*/, 0LL);
}


void __fastcall BattlePerformanceCommandCard__endCloseSealedWindow(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *commandfsm; // x0

  if ( (byte_4189DE8 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_3114/*"CLOSE_WINDOW"*/, method);
    byte_4189DE8 = 1;
  }
  commandfsm = this->fields.commandfsm;
  if ( !commandfsm )
    sub_B2C434(0LL, method);
  PlayMakerFSM__SendEvent(commandfsm, (System_String_o *)StringLiteral_3114/*"CLOSE_WINDOW"*/, 0LL);
}


void __fastcall BattlePerformanceCommandCard__endCloseTdConfWindow(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *commandfsm; // x0

  if ( (byte_4189DEB & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_3114/*"CLOSE_WINDOW"*/, method);
    byte_4189DEB = 1;
  }
  commandfsm = this->fields.commandfsm;
  if ( !commandfsm )
    sub_B2C434(0LL, method);
  PlayMakerFSM__SendEvent(commandfsm, (System_String_o *)StringLiteral_3114/*"CLOSE_WINDOW"*/, 0LL);
}


void __fastcall BattlePerformanceCommandCard__endComboEffect(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  BattleLogic_o *logic; // x0

  if ( (byte_4189DD6 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_5496/*"END_PROC"*/, method);
    byte_4189DD6 = 1;
  }
  logic = this->fields.logic;
  if ( !logic )
    sub_B2C434(0LL, method);
  BattleLogic__sendFsmEvent(logic, (System_String_o *)StringLiteral_5496/*"END_PROC"*/, 0LL);
}


void __fastcall BattlePerformanceCommandCard__endMoveCard(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  struct BattleCommandComponent_array *commandCompArray; // x8
  BattlePerformanceCommandCard_o *v3; // x19
  __int64 v4; // x20
  int max_length; // w9
  struct BattlePerformance_o *perf; // x8
  struct BattlePerformance_o *v7; // x8
  struct BattleCommandComponent_array *v8; // x8
  __int64 v9; // x20
  int v10; // w9
  unsigned int v11; // w21
  struct BattleCommandComponent_array *v12; // x8
  const MethodInfo *v13; // x1
  const MethodInfo *v14; // x1
  __int64 v15; // x0

  commandCompArray = this->fields.commandCompArray;
  this->fields.isPlayingMoveCard = 0;
  if ( !commandCompArray )
    goto LABEL_25;
  v3 = this;
  v4 = 0LL;
  while ( (unsigned int)v4 <= 4 )
  {
    max_length = commandCompArray->max_length;
    if ( (int)v4 >= max_length )
      break;
    if ( (unsigned int)v4 >= max_length )
    {
LABEL_27:
      v15 = sub_B2C460(this);
      sub_B2C400(v15, 0LL);
    }
    this = (BattlePerformanceCommandCard_o *)commandCompArray->m_Items[v4];
    if ( this )
    {
      if ( BYTE4(this->fields.logic) )
        BattleCommandComponent__updateSelectedEffect((BattleCommandComponent_o *)this, 0LL);
      else
        BattleCommandComponent__startMoveFloat((BattleCommandComponent_o *)this, 0LL);
      commandCompArray = v3->fields.commandCompArray;
      ++v4;
      if ( commandCompArray )
        continue;
    }
    goto LABEL_25;
  }
  perf = v3->fields.perf;
  if ( !perf
    || (this = (BattlePerformanceCommandCard_o *)perf->fields.statusPerf) == 0LL
    || (BattlePerformanceStatus__updateCriticalPoint((BattlePerformanceStatus_o *)this, -1, 0, 0LL),
        (v7 = v3->fields.perf) == 0LL)
    || (this = (BattlePerformanceCommandCard_o *)v7->fields.statusPerf) == 0LL
    || (BattlePerformanceStatus__SetActiveTotalCriticalStar((BattlePerformanceStatus_o *)this, 1, 0LL),
        (v8 = v3->fields.commandCompArray) == 0LL) )
  {
LABEL_25:
    sub_B2C434(this, method);
  }
  v9 = 4LL;
  while ( 1 )
  {
    v10 = v8->max_length;
    v11 = v9 - 4;
    if ( (int)v9 - 4 >= v10 )
      break;
    if ( v11 >= v10 )
      goto LABEL_27;
    this = (BattlePerformanceCommandCard_o *)*((_QWORD *)&v8->obj.klass + v9);
    if ( this )
    {
      BattleCommandComponent__setTouchFlg((BattleCommandComponent_o *)this, 1, 0LL);
      v12 = v3->fields.commandCompArray;
      if ( v12 )
      {
        if ( v11 >= v12->max_length )
          goto LABEL_27;
        this = (BattlePerformanceCommandCard_o *)*((_QWORD *)&v12->obj.klass + v9);
        if ( this )
        {
          BattleCommandComponent__ResetCardBuffIconAlphaAnim((BattleCommandComponent_o *)this, 0LL);
          v8 = v3->fields.commandCompArray;
          ++v9;
          if ( v8 )
            continue;
        }
      }
    }
    goto LABEL_25;
  }
  BattlePerformanceCommandCard__updateCardFix(v3, method);
  BattlePerformanceCommandCard__SetCommandCardTypeChangeBuff(v3, v13);
  BattlePerformanceCommandCard__updateTDTypeChange(v3, v14);
}


void __fastcall BattlePerformanceCommandCard__endOpenCommandCard(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Transform_o *transform; // x0
  __int64 v5; // x1
  UnityEngine_Object_o *Component_srcLineSprite; // x19

  if ( (byte_4189DB9 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_UIPanel___, method);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v3);
    byte_4189DB9 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_13;
  transform = UnityEngine_Transform__get_parent(transform, 0LL);
  if ( !transform )
    goto LABEL_13;
  transform = (UnityEngine_Transform_o *)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)transform,
                                           0LL);
  if ( !transform )
    goto LABEL_13;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      (UnityEngine_GameObject_o *)transform,
                                                      (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_UIPanel___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality(Component_srcLineSprite, 0LL, 0LL);
  if ( ((unsigned __int8)transform & 1) != 0 )
  {
    if ( Component_srcLineSprite )
    {
      ((void (__fastcall *)(UnityEngine_Object_o *, __int64, void *))Component_srcLineSprite->klass[1]._1.events)(
        Component_srcLineSprite,
        1LL,
        Component_srcLineSprite->klass[1]._1.properties);
      return;
    }
LABEL_13:
    sub_B2C434(transform, v5);
  }
}


void __fastcall BattlePerformanceCommandCard__endOpenTdConf(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattlePerformanceCommandCard__fadeOutAllCard(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  struct BattleCommandComponent_array *commandCompArray; // x8
  BattlePerformanceCommandCard_o *v3; // x19
  __int64 v4; // x20
  int max_length; // w9
  __int64 v6; // x0

  commandCompArray = this->fields.commandCompArray;
  if ( !commandCompArray )
LABEL_7:
    sub_B2C434(this, method);
  v3 = this;
  v4 = 0LL;
  while ( 1 )
  {
    max_length = commandCompArray->max_length;
    if ( (int)v4 >= max_length )
      break;
    if ( (unsigned int)v4 >= max_length )
    {
      v6 = sub_B2C460(this);
      sub_B2C400(v6, 0LL);
    }
    this = (BattlePerformanceCommandCard_o *)commandCompArray->m_Items[v4];
    if ( this )
    {
      BattleCommandComponent__hideOutCard((BattleCommandComponent_o *)this, 0LL);
      commandCompArray = v3->fields.commandCompArray;
      ++v4;
      if ( commandCompArray )
        continue;
    }
    goto LABEL_7;
  }
}


bool __fastcall BattlePerformanceCommandCard__fallStar(BattlePerformanceCommandCard_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct System_Collections_Generic_List_GameObject__o *aubelist; // x0
  __int64 v11; // x1
  BattlePerformance_o *perf; // x0
  char v13; // w22
  unsigned int v14; // w24
  struct BattleCommandComponent_array *commandCompArray; // x8
  Il2CppClass **v16; // x8
  Il2CppClass *v17; // x20
  int v18; // w21
  int j; // w25
  struct UnityEngine_Transform_array *commandTransformArray; // x8
  UnityEngine_Transform_o *v21; // x22
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v22; // x23
  const MethodInfo *v23; // x3
  __int64 v26; // x0
  System_Collections_Generic_List_Enumerator_T__o v27; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o i; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4189DDF & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_GameObject___ctor__, method);
    sub_B2C35C(&System_Action_GameObject__TypeInfo, v3);
    sub_B2C35C(&Method_BattleCommandComponent_addCriticalBuff__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__Clear__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v9);
    byte_4189DDF = 1;
  }
  memset(&i, 0, sizeof(i));
  aubelist = this->fields.aubelist;
  if ( !aubelist )
    goto LABEL_24;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v27,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)aubelist,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  for ( i = v27;
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
          &i,
          (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
        BattlePerformance__destroyInstantiate(perf, (UnityEngine_GameObject_o *)i.fields.current, 0LL) )
  {
    perf = this->fields.perf;
    if ( !perf )
      sub_B2C434(0LL, v11);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &i,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  aubelist = this->fields.aubelist;
  if ( !aubelist )
LABEL_24:
    sub_B2C434(aubelist, method);
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)aubelist,
    (const MethodInfo_2EF4868 *)Method_System_Collections_Generic_List_GameObject__Clear__);
  v13 = 0;
  v14 = 0;
  do
  {
    commandCompArray = this->fields.commandCompArray;
    if ( !commandCompArray )
      goto LABEL_24;
    if ( v14 >= commandCompArray->max_length )
    {
LABEL_25:
      v26 = sub_B2C460(aubelist);
      sub_B2C400(v26, 0LL);
    }
    v16 = &commandCompArray->obj.klass + (int)v14;
    v17 = v16[4];
    if ( !v17 )
      goto LABEL_24;
    aubelist = (struct System_Collections_Generic_List_GameObject__o *)BattleCommandComponent__GetPassStarCount(
                                                                         (BattleCommandComponent_o *)v16[4],
                                                                         0LL);
    if ( (int)aubelist >= 1 )
    {
      v18 = (int)aubelist;
      for ( j = 0; j < v18; ++j )
      {
        commandTransformArray = this->fields.commandTransformArray;
        if ( !commandTransformArray )
          goto LABEL_24;
        if ( v14 >= commandTransformArray->max_length )
          goto LABEL_25;
        v21 = commandTransformArray->m_Items[v14];
        v22 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B2C42C(System_Action_GameObject__TypeInfo);
        System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
          v22,
          (Il2CppObject *)v17,
          Method_BattleCommandComponent_addCriticalBuff__,
          (const MethodInfo_24BBAD8 *)Method_System_Action_GameObject___ctor__);
        BattlePerformanceCommandCard__MoveNotTween(this, v21, (System_Action_GameObject__o *)v22, v23);
      }
      v13 = 1;
    }
    BattleCommandComponent__ResetPassStarCount((BattleCommandComponent_o *)v17, 0LL);
    if ( BYTE4(v17->vtable[4].method) )
      BattleCommandComponent__updateSelectedEffect((BattleCommandComponent_o *)v17, 0LL);
  }
  while ( v14++ < 4 );
  BattlePerformanceCommandCard__updateBuffIcon(this, method);
  return v13 & 1;
}


UnityEngine_GameObject_o *__fastcall BattlePerformanceCommandCard__getBattleCommandCardObject(
        BattlePerformanceCommandCard_o *this,
        int32_t actionIndex,
        const MethodInfo *method)
{
  struct BattleCommandComponent_array *selectedcomponents; // x8
  int32_t max_length; // w9
  __int64 v6; // x0

  selectedcomponents = this->fields.selectedcomponents;
  if ( !selectedcomponents )
    goto LABEL_9;
  if ( (actionIndex & 0x80000000) == 0 )
  {
    max_length = selectedcomponents->max_length;
    if ( max_length > actionIndex )
    {
      if ( max_length <= (unsigned int)actionIndex )
      {
        v6 = sub_B2C460(this);
        sub_B2C400(v6, 0LL);
      }
      this = (BattlePerformanceCommandCard_o *)selectedcomponents->m_Items[actionIndex];
      if ( this )
        return UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
LABEL_9:
      sub_B2C434(this, actionIndex);
    }
  }
  return 0LL;
}


UnityEngine_Transform_o *__fastcall BattlePerformanceCommandCard__getCollectCriticalTransform(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  return this->fields.criticalpointTr;
}


System_String_o *__fastcall BattlePerformanceCommandCard__getComboCutIn(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  BattlePerformanceCommandCard_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct BattlePerformance_o *perf; // x8
  struct BattleData_o *data; // x8
  struct BattleComboData_o *combodata; // x8
  _BOOL4 flash; // w9
  int32_t samecount; // w8
  __int64 *v12; // x8

  v2 = this;
  if ( (byte_4189DD7 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_18227/*"effect/BitEffect/bit_cut_2a"*/, method);
    sub_B2C35C(&StringLiteral_18230/*"effect/BitEffect/bit_cut_u3"*/, v3);
    sub_B2C35C(&StringLiteral_18229/*"effect/BitEffect/bit_cut_u2"*/, v4);
    sub_B2C35C(&StringLiteral_18231/*"effect/BitEffect/bit_cut_ua"*/, v5);
    this = (BattlePerformanceCommandCard_o *)sub_B2C35C(&StringLiteral_18228/*"effect/BitEffect/bit_cut_3a"*/, v6);
    byte_4189DD7 = 1;
  }
  perf = v2->fields.perf;
  if ( !perf || (data = perf->fields.data) == 0LL || (combodata = data->fields.combodata) == 0LL )
    sub_B2C434(this, method);
  flash = combodata->fields.flash;
  samecount = combodata->fields.samecount;
  if ( flash )
  {
    if ( samecount == 2 )
    {
      v12 = &StringLiteral_18229/*"effect/BitEffect/bit_cut_u2"*/;
    }
    else if ( samecount == 3 )
    {
      v12 = (__int64 *)&StringLiteral_18230/*"effect/BitEffect/bit_cut_u3"*/;
    }
    else
    {
      v12 = (__int64 *)&StringLiteral_18231/*"effect/BitEffect/bit_cut_ua"*/;
    }
    return (System_String_o *)*v12;
  }
  if ( samecount == 2 )
  {
    v12 = &StringLiteral_18227/*"effect/BitEffect/bit_cut_2a"*/;
    return (System_String_o *)*v12;
  }
  if ( samecount == 3 )
    return (System_String_o *)StringLiteral_18228/*"effect/BitEffect/bit_cut_3a"*/;
  else
    return 0LL;
}


UnityEngine_Vector2_array *__fastcall BattlePerformanceCommandCard__get_FSTutorialArrow01(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return BattlePerformanceCommandCard__FSTutorialArrowCard(this, this->fields.TutorialArrow01, v2);
}


UnityEngine_Vector2_array *__fastcall BattlePerformanceCommandCard__get_FSTutorialArrow05(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return BattlePerformanceCommandCard__FSTutorialArrowCard(this, this->fields.TutorialArrow05, v2);
}


UnityEngine_Vector2_o __fastcall BattlePerformanceCommandCard__get_FSTutorialArrow22(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  float x; // s9
  float y; // s8
  float v5; // s0
  float v6; // s1
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  if ( (byte_4189DF7 & 1) == 0 )
  {
    sub_B2C35C(&FSUtility_TypeInfo, method);
    byte_4189DF7 = 1;
  }
  x = this->fields.TutorialArrow22.fields.x;
  y = this->fields.TutorialArrow22.fields.y;
  if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  v5 = x + FSUtility__GetOffsetX(40.0, 0, 0LL);
  v6 = y;
  result.fields.y = v6;
  result.fields.x = v5;
  return result;
}


UnityEngine_Vector2_array *__fastcall BattlePerformanceCommandCard__get_FSTutorialArrow31(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return BattlePerformanceCommandCard__FSTutorialArrowCard(this, this->fields.TutorialArrow31, v2);
}


UnityEngine_Rect_array *__fastcall BattlePerformanceCommandCard__get_FSTutorialSquare01(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return BattlePerformanceCommandCard__FSTutorialSquareCard(this, this->fields.TutorialSquare01, v2);
}


UnityEngine_Rect_array *__fastcall BattlePerformanceCommandCard__get_FSTutorialSquare05(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return BattlePerformanceCommandCard__FSTutorialSquareCard(this, this->fields.TutorialSquare05, v2);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Rect_o __fastcall BattlePerformanceCommandCard__get_FSTutorialSquare22(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  int v2; // s1
  float m_XMin; // s0
  float x; // s8
  float v8; // s4
  float v9; // s0
  float m_YMin; // s1
  float m_Width; // s2
  float m_Height; // s3
  struct UnityEngine_Rect_o TutorialSquare22; // [xsp+0h] [xbp-30h] BYREF
  UnityEngine_Rect_o v14; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4189DF8 & 1) == 0 )
  {
    sub_B2C35C(&FSUtility_TypeInfo, method);
    byte_4189DF8 = 1;
  }
  TutorialSquare22 = this->fields.TutorialSquare22;
  m_XMin = TutorialSquare22.fields.m_XMin;
  x = UnityEngine_Rect__get_x(*(UnityEngine_Rect_o *)(&v2 - 1), (const MethodInfo *)&TutorialSquare22);
  if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  v14.fields.m_XMin = x + FSUtility__GetOffsetX(40.0, 0, 0LL);
  UnityEngine_Rect__set_x(v14, v8, (const MethodInfo *)&TutorialSquare22);
  m_YMin = TutorialSquare22.fields.m_YMin;
  v9 = TutorialSquare22.fields.m_XMin;
  m_Height = TutorialSquare22.fields.m_Height;
  m_Width = TutorialSquare22.fields.m_Width;
  result.fields.m_Height = m_Height;
  result.fields.m_Width = m_Width;
  result.fields.m_YMin = m_YMin;
  result.fields.m_XMin = v9;
  return result;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Rect_array *__fastcall BattlePerformanceCommandCard__get_FSTutorialSquare32(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  BattlePerformanceCommandCard_o *v3; // x19
  UnityEngine_Rect_array *v4; // x0
  __int64 v5; // x1
  int v6; // s0
  UnityEngine_Rect_array *v10; // x19
  float x; // s8
  float v12; // s4
  __int64 v14; // x0
  UnityEngine_Rect_o v15; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v3 = this;
  if ( (byte_4189DF6 & 1) == 0 )
  {
    this = (BattlePerformanceCommandCard_o *)sub_B2C35C(&FSUtility_TypeInfo, method);
    byte_4189DF6 = 1;
  }
  v4 = BattlePerformanceCommandCard__FSTutorialSquareCard(this, v3->fields.TutorialSquare32, v2);
  if ( !v4 )
    sub_B2C434(0LL, v5);
  v10 = v4;
  if ( v4->max_length <= 1 )
  {
    v14 = sub_B2C460(v4);
    sub_B2C400(v14, 0LL);
  }
  x = UnityEngine_Rect__get_x(*(UnityEngine_Rect_o *)&v6, (const MethodInfo *)&v4->m_Items[1].fields.m_YMin);
  if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  v15.fields.m_XMin = x + FSUtility__GetOffsetX(88.0, 1, 0LL);
  UnityEngine_Rect__set_x(v15, v12, (const MethodInfo *)&v10->m_Items[1].fields.m_YMin);
  return v10;
}


bool __fastcall BattlePerformanceCommandCard__get_IsPlayingBackStar(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  return this->fields._IsPlayingBackStar_k__BackingField;
}


void __fastcall BattlePerformanceCommandCard__giveoutCard(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  UnityEngine_GameObject_o *transform; // x0
  struct UnityEngine_GameObject_array *p_commandlist; // x8
  __int64 v7; // x21
  unsigned __int64 max_length; // x9
  unsigned __int64 v9; // x23
  UnityEngine_Object_o *v10; // x20
  __int64 v11; // x1
  struct UnityEngine_GameObject_array *v12; // x8
  __int64 v13; // x0

  if ( (byte_4189DBC & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    sub_B2C35C(&StringLiteral_16345/*"anim_giveout"*/, v4);
    byte_4189DBC = 1;
  }
  BattlePerformanceCommandCard__playAnimation(this, (System_String_o *)StringLiteral_16345/*"anim_giveout"*/, v2);
  p_commandlist = this->fields.p_commandlist;
  if ( p_commandlist )
  {
    v7 = 4LL;
    while ( 1 )
    {
      max_length = p_commandlist->max_length;
      v9 = v7 - 4;
      if ( v7 - 4 >= (int)max_length )
        break;
      if ( v9 >= max_length )
        goto LABEL_21;
      v10 = (UnityEngine_Object_o *)*((_QWORD *)&p_commandlist->obj.klass + v7);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      transform = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(v10, 0LL, 0LL);
      if ( ((unsigned __int8)transform & 1) != 0 )
      {
        v12 = this->fields.p_commandlist;
        if ( !v12 )
          goto LABEL_19;
        if ( v9 >= v12->max_length )
        {
LABEL_21:
          v13 = sub_B2C460(transform);
          sub_B2C400(v13, 0LL);
        }
        transform = (UnityEngine_GameObject_o *)*((_QWORD *)&v12->obj.klass + v7);
        if ( !transform
          || (transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL)) == 0LL
          || (transform = (UnityEngine_GameObject_o *)UnityEngine_Transform__get_parent(
                                                        (UnityEngine_Transform_o *)transform,
                                                        0LL)) == 0LL
          || (transform = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL)) == 0LL )
        {
LABEL_19:
          sub_B2C434(transform, v11);
        }
        UnityEngine_GameObject__SetActive(transform, 1, 0LL);
      }
      p_commandlist = this->fields.p_commandlist;
      ++v7;
      if ( !p_commandlist )
        goto LABEL_19;
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceCommandCard__giveoutNobleCard(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  BattlePerformanceCommandCard_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  struct UnityEngine_GameObject_array *p_commandlist; // x8
  __int64 v6; // x22
  il2cpp_array_size_t max_length; // w9
  il2cpp_array_size_t v8; // w21
  UnityEngine_Object_o *Component_srcLineSprite; // x20
  struct BattleCommandComponent_array *commandCompArray; // x8
  BattleCommandComponent_o *v11; // x20
  struct UnityEngine_GameObject_array *v12; // x8
  UIWidget_o *v13; // x21
  int v14; // s0
  __int64 v18; // x0

  v2 = this;
  if ( (byte_4189DBD & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_TweenColor___, method);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_UIWidget___, v3);
    this = (BattlePerformanceCommandCard_o *)sub_B2C35C(&UnityEngine_Object_TypeInfo, v4);
    byte_4189DBD = 1;
  }
  p_commandlist = v2->fields.p_commandlist;
  if ( !p_commandlist )
LABEL_27:
    sub_B2C434(this, method);
  v6 = 9LL;
  while ( 1 )
  {
    max_length = p_commandlist->max_length;
    v8 = v6 - 4;
    if ( (int)v6 - 4 >= (int)(max_length - 1) )
      break;
    if ( v8 >= max_length )
      goto LABEL_29;
    this = (BattlePerformanceCommandCard_o *)*((_QWORD *)&p_commandlist->obj.klass + v6);
    if ( !this )
      goto LABEL_27;
    Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                        (UnityEngine_GameObject_o *)this,
                                                        (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_TweenColor___);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    this = (BattlePerformanceCommandCard_o *)UnityEngine_Object__op_Inequality(Component_srcLineSprite, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__DestroyImmediate_35315108(Component_srcLineSprite, 0LL);
    }
    commandCompArray = v2->fields.commandCompArray;
    if ( !commandCompArray )
      goto LABEL_27;
    if ( v8 >= commandCompArray->max_length )
      goto LABEL_29;
    v11 = (BattleCommandComponent_o *)*((_QWORD *)&commandCompArray->obj.klass + v6);
    if ( !v11 )
      goto LABEL_27;
    this = (BattlePerformanceCommandCard_o *)BattleCommandComponent__checkObject(
                                               *((BattleCommandComponent_o **)&commandCompArray->obj.klass + v6),
                                               0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v12 = v2->fields.p_commandlist;
      if ( !v12 )
        goto LABEL_27;
      if ( v8 >= v12->max_length )
      {
LABEL_29:
        v18 = sub_B2C460(this);
        sub_B2C400(v18, 0LL);
      }
      this = (BattlePerformanceCommandCard_o *)*((_QWORD *)&v12->obj.klass + v6);
      if ( !this )
        goto LABEL_27;
      v13 = (UIWidget_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                            (UnityEngine_GameObject_o *)this,
                            (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
      *(UnityEngine_Color_o *)&v14 = UnityEngine_Color__get_white(0LL);
      if ( !v13 )
        goto LABEL_27;
      UIWidget__set_color(v13, *(UnityEngine_Color_o *)&v14, 0LL);
      if ( !v11->fields.selectflg )
        BattleCommandComponent__startMoveFloat(v11, 0LL);
    }
    p_commandlist = v2->fields.p_commandlist;
    ++v6;
    if ( !p_commandlist )
      goto LABEL_27;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceCommandCard__hideCommandCard(
        BattlePerformanceCommandCard_o *this,
        bool flg,
        BaseMotionSkip_o *motionSkip,
        const MethodInfo *method)
{
  BattlePerformanceCommandCard_o *v5; // x20
  float v6; // s8
  __int64 v7; // x22
  struct UnityEngine_GameObject_array *p_commandlist; // x8
  UnityEngine_GameObject_o *v9; // x21
  float v10; // s0
  float v11; // s1
  float v12; // s2
  float v13; // s3
  float v14; // s5
  float v15; // s6
  float v16; // s7
  struct BattleCommandComponent_array *commandCompArray; // x8
  __int64 v18; // x0
  UnityEngine_Color_o v19; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4

  if ( !motionSkip )
LABEL_13:
    sub_B2C434(this, flg);
  v5 = this;
  LODWORD(v6) = COERCE_UNSIGNED_INT128(
                  ((long double (__fastcall *)(BaseMotionSkip_o *, void *, float))motionSkip->klass->vtable._11_ConvertSkipDuration.method)(
                    motionSkip,
                    motionSkip->klass[1]._1.image,
                    0.3));
  v7 = 0LL;
  do
  {
    p_commandlist = v5->fields.p_commandlist;
    if ( !p_commandlist )
      goto LABEL_13;
    if ( (unsigned int)v7 >= p_commandlist->max_length )
      goto LABEL_14;
    v9 = p_commandlist->m_Items[v7];
    *(UnityEngine_Color_o *)&v10 = flg ? UnityEngine_Color__get_white(0LL) : UnityEngine_Color__get_clear(0LL);
    v14 = v11;
    v15 = v12;
    v16 = v13;
    v19.fields.r = v10;
    v19.fields.g = v14;
    v19.fields.b = v15;
    v19.fields.a = v16;
    this = (BattlePerformanceCommandCard_o *)TweenColor__Begin(v9, v6, v19, 0LL);
    commandCompArray = v5->fields.commandCompArray;
    if ( !commandCompArray )
      goto LABEL_13;
    if ( (unsigned int)v7 >= commandCompArray->max_length )
    {
LABEL_14:
      v18 = sub_B2C460(this);
      sub_B2C400(v18, 0LL);
    }
    this = (BattlePerformanceCommandCard_o *)commandCompArray->m_Items[v7];
    if ( !this )
      goto LABEL_13;
    BattleCommandComponent__CardEffectSetActive((BattleCommandComponent_o *)this, flg, 0LL);
    ++v7;
  }
  while ( (unsigned int)(v7 - 1) < 4 );
}


void __fastcall BattlePerformanceCommandCard__initHighSpeedMode(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  struct BattlePerformance_o *perf; // x8
  BattlePerformanceCommandCard_o *v3; // x19
  const MethodInfo *v4; // x2
  int32_t v5; // w1
  const MethodInfo *v6; // x2

  perf = this->fields.perf;
  if ( !perf || (v3 = this, (this = (BattlePerformanceCommandCard_o *)perf->fields.data) == 0LL) )
    sub_B2C434(this, method);
  if ( BattleData__isTutorial((BattleData_o *)this, 0LL) )
  {
    BattlePerformanceCommandCard__SetCommandPhaseButtonActive(v3, 0, v4);
  }
  else
  {
    BattlePerformanceCommandCard__SetCommandPhaseButtonActive(v3, 1, v4);
    BattlePerformanceCommandCard__updateHighSpeedObject(v3, v5, v6);
  }
}


void __fastcall BattlePerformanceCommandCard__initOpen(BattlePerformanceCommandCard_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *commandfsm; // x0

  if ( (byte_4189DB2 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_7296/*"INIT_OPEN"*/, method);
    byte_4189DB2 = 1;
  }
  commandfsm = this->fields.commandfsm;
  if ( !commandfsm )
    sub_B2C434(0LL, method);
  PlayMakerFSM__SendEvent(commandfsm, (System_String_o *)StringLiteral_7296/*"INIT_OPEN"*/, 0LL);
}


// attributes: thunk
void __fastcall BattlePerformanceCommandCard__initQuest(BattlePerformanceCommandCard_o *this, const MethodInfo *method)
{
  BattlePerformanceCommandCard__initHighSpeedMode(this, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceCommandCard__moveupStars(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  System_Collections_Generic_List_XWeaponTrail_Element__o *aubelist; // x0
  struct BattleData_o *Bdata; // x8
  int criticalstars; // w8
  int v21; // w23
  signed int v22; // w28
  UnityEngine_GameObject_o *v23; // x20
  UnityEngine_Transform_o *v24; // x21
  int32_t layer; // w0
  UnityEngine_Transform_o *transform; // x21
  int v27; // s0
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  System_Object_array *v36; // x21
  __int64 v37; // x0
  System_Int32_array **v38; // x1
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  System_Int32_array **v45; // x22
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  System_Int32_array **v52; // x1
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  System_Int32_array **v59; // x22
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  System_Int32_array **v66; // x1
  System_String_array **v67; // x2
  System_String_array **v68; // x3
  System_Boolean_array **v69; // x4
  System_Int32_array **v70; // x5
  System_Int32_array *v71; // x6
  System_Int32_array *v72; // x7
  System_Int32_array **v73; // x22
  System_String_array **v74; // x2
  System_String_array **v75; // x3
  System_Boolean_array **v76; // x4
  System_Int32_array **v77; // x5
  System_Int32_array *v78; // x6
  System_Int32_array *v79; // x7
  System_Int32_array **v80; // x1
  System_String_array **v81; // x2
  System_String_array **v82; // x3
  System_Boolean_array **v83; // x4
  System_Int32_array **v84; // x5
  System_Int32_array *v85; // x6
  System_Int32_array *v86; // x7
  System_Int32_array **v87; // x22
  System_String_array **v88; // x2
  System_String_array **v89; // x3
  System_Boolean_array **v90; // x4
  System_Int32_array **v91; // x5
  System_Int32_array *v92; // x6
  System_Int32_array *v93; // x7
  System_Int32_array **v94; // x1
  System_String_array **v95; // x2
  System_String_array **v96; // x3
  System_Boolean_array **v97; // x4
  System_Int32_array **v98; // x5
  System_Int32_array *v99; // x6
  System_Int32_array *v100; // x7
  System_Int32_array **v101; // x22
  System_String_array **v102; // x2
  System_String_array **v103; // x3
  System_Boolean_array **v104; // x4
  System_Int32_array **v105; // x5
  System_Int32_array *v106; // x6
  System_Int32_array *v107; // x7
  System_Int32_array **v108; // x1
  System_String_array **v109; // x2
  System_String_array **v110; // x3
  System_Boolean_array **v111; // x4
  System_Int32_array **v112; // x5
  System_Int32_array *v113; // x6
  System_Int32_array *v114; // x7
  System_Int32_array **v115; // x22
  System_Collections_Hashtable_o *v116; // x0
  struct BattlePerformance_o *perf; // x8
  __int64 v118; // x0
  __int64 v119; // x0
  char v120[4]; // [xsp+0h] [xbp-70h] BYREF
  int v121; // [xsp+4h] [xbp-6Ch] BYREF
  int v122; // [xsp+8h] [xbp-68h] BYREF
  float v123; // [xsp+Ch] [xbp-64h] BYREF
  int v124; // [xsp+18h] [xbp-58h] BYREF
  int32_t v125; // [xsp+1Ch] [xbp-54h] BYREF

  if ( (byte_4189DDB & 1) == 0 )
  {
    sub_B2C35C(&bool_TypeInfo, method);
    sub_B2C35C(&iTween_EaseType_TypeInfo, v3);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_Rigidbody___, v4);
    sub_B2C35C(&int_TypeInfo, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__Add__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__Clear__, v7);
    sub_B2C35C(&object___TypeInfo, v8);
    sub_B2C35C(&float_TypeInfo, v9);
    sub_B2C35C(&StringLiteral_23316/*"x"*/, v10);
    sub_B2C35C(&StringLiteral_18114/*"easetype"*/, v11);
    sub_B2C35C(&StringLiteral_22677/*"time"*/, v12);
    sub_B2C35C(&StringLiteral_17949/*"delay"*/, v13);
    sub_B2C35C(&StringLiteral_23408/*"y"*/, v14);
    sub_B2C35C(&StringLiteral_19967/*"islocal"*/, v15);
    sub_B2C35C(&StringLiteral_18248/*"effect/ef_critlaunch"*/, v16);
    sub_B2C35C(&iTween_TypeInfo, v17);
    byte_4189DDB = 1;
  }
  aubelist = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.aubelist;
  if ( !aubelist )
    goto LABEL_73;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    aubelist,
    (const MethodInfo_2EF4868 *)Method_System_Collections_Generic_List_GameObject__Clear__);
  Bdata = this->fields.Bdata;
  if ( !Bdata )
    goto LABEL_73;
  criticalstars = Bdata->fields.criticalstars;
  if ( criticalstars < 1 )
    return;
  v21 = -1;
  v22 = criticalstars / 5u;
  do
  {
    aubelist = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.perf;
    if ( !aubelist )
      goto LABEL_73;
    aubelist = (System_Collections_Generic_List_XWeaponTrail_Element__o *)BattlePerformance__getEffectInstantiate(
                                                                            (BattlePerformance_o *)aubelist,
                                                                            4,
                                                                            this->fields.criticalpointTr,
                                                                            0LL);
    if ( !aubelist )
      goto LABEL_73;
    v23 = (UnityEngine_GameObject_o *)aubelist;
    aubelist = (System_Collections_Generic_List_XWeaponTrail_Element__o *)UnityEngine_GameObject__get_transform(
                                                                            (UnityEngine_GameObject_o *)aubelist,
                                                                            0LL);
    if ( !this->fields.criticalpointTr )
      goto LABEL_73;
    v24 = (UnityEngine_Transform_o *)aubelist;
    aubelist = (System_Collections_Generic_List_XWeaponTrail_Element__o *)UnityEngine_Component__get_gameObject(
                                                                            (UnityEngine_Component_o *)this->fields.criticalpointTr,
                                                                            0LL);
    if ( !aubelist )
      goto LABEL_73;
    layer = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)aubelist, 0LL);
    TransformHelper__ChangeChildsLayer(v24, layer, 0LL);
    aubelist = (System_Collections_Generic_List_XWeaponTrail_Element__o *)UnityEngine_GameObject__get_transform(
                                                                            v23,
                                                                            0LL);
    if ( !aubelist )
      goto LABEL_73;
    UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)aubelist, this->fields.criticalpointTr, 0LL);
    transform = UnityEngine_GameObject__get_transform(v23, 0LL);
    *(UnityEngine_Vector3_o *)&v27 = UnityEngine_Vector3__get_zero(0LL);
    if ( !transform )
      goto LABEL_73;
    UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v27, 0LL);
    aubelist = (System_Collections_Generic_List_XWeaponTrail_Element__o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                            v23,
                                                                            (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_Rigidbody___);
    if ( !aubelist )
      goto LABEL_73;
    UnityEngine_Rigidbody__set_useGravity((UnityEngine_Rigidbody_o *)aubelist, 0, 0LL);
    aubelist = (System_Collections_Generic_List_XWeaponTrail_Element__o *)sub_B2C374(object___TypeInfo, 12LL);
    if ( !aubelist )
      goto LABEL_73;
    v36 = (System_Object_array *)aubelist;
    v37 = StringLiteral_23316/*"x"*/;
    if ( StringLiteral_23316/*"x"*/ )
    {
      v37 = sub_B2C41C(StringLiteral_23316/*"x"*/, v36->obj.klass->_1.element_class);
      if ( !v37 )
        goto LABEL_74;
      v38 = (System_Int32_array **)StringLiteral_23316/*"x"*/;
    }
    else
    {
      v38 = 0LL;
    }
    if ( !v36->max_length )
      goto LABEL_72;
    v36->m_Items[0] = (Il2CppObject *)v38;
    sub_B2C2F8((BattleServantConfConponent_o *)v36->m_Items, v38, v30, v31, v32, v33, v34, v35);
    v125 = UnityEngine_Random__Range_35348680(-780, 110, 0LL);
    v37 = j_il2cpp_value_box_0(int_TypeInfo, &v125);
    v45 = (System_Int32_array **)v37;
    if ( v37 )
    {
      v37 = sub_B2C41C(v37, v36->obj.klass->_1.element_class);
      if ( !v37 )
      {
LABEL_74:
        v119 = sub_B2C454(v37);
        sub_B2C400(v119, 0LL);
      }
    }
    if ( v36->max_length <= 1 )
      goto LABEL_72;
    v36->m_Items[1] = (Il2CppObject *)v45;
    sub_B2C2F8((BattleServantConfConponent_o *)&v36->m_Items[1], v45, v39, v40, v41, v42, v43, v44);
    v37 = StringLiteral_23408/*"y"*/;
    if ( StringLiteral_23408/*"y"*/ )
    {
      v37 = sub_B2C41C(StringLiteral_23408/*"y"*/, v36->obj.klass->_1.element_class);
      if ( !v37 )
        goto LABEL_74;
      v52 = (System_Int32_array **)StringLiteral_23408/*"y"*/;
    }
    else
    {
      v52 = 0LL;
    }
    if ( v36->max_length <= 2 )
      goto LABEL_72;
    v36->m_Items[2] = (Il2CppObject *)v52;
    sub_B2C2F8((BattleServantConfConponent_o *)&v36->m_Items[2], v52, v46, v47, v48, v49, v50, v51);
    v124 = 500;
    v37 = j_il2cpp_value_box_0(int_TypeInfo, &v124);
    v59 = (System_Int32_array **)v37;
    if ( v37 )
    {
      v37 = sub_B2C41C(v37, v36->obj.klass->_1.element_class);
      if ( !v37 )
        goto LABEL_74;
    }
    if ( v36->max_length <= 3 )
      goto LABEL_72;
    v36->m_Items[3] = (Il2CppObject *)v59;
    sub_B2C2F8((BattleServantConfConponent_o *)&v36->m_Items[3], v59, v53, v54, v55, v56, v57, v58);
    v37 = StringLiteral_17949/*"delay"*/;
    if ( StringLiteral_17949/*"delay"*/ )
    {
      v37 = sub_B2C41C(StringLiteral_17949/*"delay"*/, v36->obj.klass->_1.element_class);
      if ( !v37 )
        goto LABEL_74;
      v66 = (System_Int32_array **)StringLiteral_17949/*"delay"*/;
    }
    else
    {
      v66 = 0LL;
    }
    if ( v36->max_length <= 4 )
      goto LABEL_72;
    v36->m_Items[4] = (Il2CppObject *)v66;
    sub_B2C2F8((BattleServantConfConponent_o *)&v36->m_Items[4], v66, v60, v61, v62, v63, v64, v65);
    v123 = UnityEngine_Random__Range(0.0, 0.3, 0LL);
    v37 = j_il2cpp_value_box_0(float_TypeInfo, &v123);
    v73 = (System_Int32_array **)v37;
    if ( v37 )
    {
      v37 = sub_B2C41C(v37, v36->obj.klass->_1.element_class);
      if ( !v37 )
        goto LABEL_74;
    }
    if ( v36->max_length <= 5 )
      goto LABEL_72;
    v36->m_Items[5] = (Il2CppObject *)v73;
    sub_B2C2F8((BattleServantConfConponent_o *)&v36->m_Items[5], v73, v67, v68, v69, v70, v71, v72);
    v37 = StringLiteral_22677/*"time"*/;
    if ( StringLiteral_22677/*"time"*/ )
    {
      v37 = sub_B2C41C(StringLiteral_22677/*"time"*/, v36->obj.klass->_1.element_class);
      if ( !v37 )
        goto LABEL_74;
      v80 = (System_Int32_array **)StringLiteral_22677/*"time"*/;
    }
    else
    {
      v80 = 0LL;
    }
    if ( v36->max_length <= 6 )
      goto LABEL_72;
    v36->m_Items[6] = (Il2CppObject *)v80;
    sub_B2C2F8((BattleServantConfConponent_o *)&v36->m_Items[6], v80, v74, v75, v76, v77, v78, v79);
    v122 = 1050253722;
    v37 = j_il2cpp_value_box_0(float_TypeInfo, &v122);
    v87 = (System_Int32_array **)v37;
    if ( v37 )
    {
      v37 = sub_B2C41C(v37, v36->obj.klass->_1.element_class);
      if ( !v37 )
        goto LABEL_74;
    }
    if ( v36->max_length <= 7 )
      goto LABEL_72;
    v36->m_Items[7] = (Il2CppObject *)v87;
    sub_B2C2F8((BattleServantConfConponent_o *)&v36->m_Items[7], v87, v81, v82, v83, v84, v85, v86);
    v37 = StringLiteral_18114/*"easetype"*/;
    if ( StringLiteral_18114/*"easetype"*/ )
    {
      v37 = sub_B2C41C(StringLiteral_18114/*"easetype"*/, v36->obj.klass->_1.element_class);
      if ( !v37 )
        goto LABEL_74;
      v94 = (System_Int32_array **)StringLiteral_18114/*"easetype"*/;
    }
    else
    {
      v94 = 0LL;
    }
    if ( v36->max_length <= 8 )
      goto LABEL_72;
    v36->m_Items[8] = (Il2CppObject *)v94;
    sub_B2C2F8((BattleServantConfConponent_o *)&v36->m_Items[8], v94, v88, v89, v90, v91, v92, v93);
    v121 = 1;
    v37 = j_il2cpp_value_box_0(iTween_EaseType_TypeInfo, &v121);
    v101 = (System_Int32_array **)v37;
    if ( v37 )
    {
      v37 = sub_B2C41C(v37, v36->obj.klass->_1.element_class);
      if ( !v37 )
        goto LABEL_74;
    }
    if ( v36->max_length <= 9 )
      goto LABEL_72;
    v36->m_Items[9] = (Il2CppObject *)v101;
    sub_B2C2F8((BattleServantConfConponent_o *)&v36->m_Items[9], v101, v95, v96, v97, v98, v99, v100);
    v37 = StringLiteral_19967/*"islocal"*/;
    if ( StringLiteral_19967/*"islocal"*/ )
    {
      v37 = sub_B2C41C(StringLiteral_19967/*"islocal"*/, v36->obj.klass->_1.element_class);
      if ( !v37 )
        goto LABEL_74;
      v108 = (System_Int32_array **)StringLiteral_19967/*"islocal"*/;
    }
    else
    {
      v108 = 0LL;
    }
    if ( v36->max_length <= 0xA )
    {
LABEL_72:
      v118 = sub_B2C460(v37);
      sub_B2C400(v118, 0LL);
    }
    v36->m_Items[10] = (Il2CppObject *)v108;
    sub_B2C2F8((BattleServantConfConponent_o *)&v36->m_Items[10], v108, v102, v103, v104, v105, v106, v107);
    v120[0] = 1;
    v37 = j_il2cpp_value_box_0(bool_TypeInfo, v120);
    v115 = (System_Int32_array **)v37;
    if ( v37 )
    {
      v37 = sub_B2C41C(v37, v36->obj.klass->_1.element_class);
      if ( !v37 )
        goto LABEL_74;
    }
    if ( v36->max_length <= 0xB )
      goto LABEL_72;
    v36->m_Items[11] = (Il2CppObject *)v115;
    sub_B2C2F8((BattleServantConfConponent_o *)&v36->m_Items[11], v115, v109, v110, v111, v112, v113, v114);
    if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
    v116 = iTween__Hash(v36, 0LL);
    iTween__MoveTo_42732664(v23, v116, 0LL);
    aubelist = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.aubelist;
    if ( !aubelist )
      goto LABEL_73;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)aubelist,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v23,
      (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_GameObject__Add__);
    ++v21;
  }
  while ( v21 < v22 );
  aubelist = (System_Collections_Generic_List_XWeaponTrail_Element__o *)BaseMonoBehaviour__createObject_19214240(
                                                                          (BaseMonoBehaviour_o *)this,
                                                                          (System_String_o *)StringLiteral_18248/*"effect/ef_critlaunch"*/,
                                                                          this->fields.criticalpointTr,
                                                                          0LL,
                                                                          0LL);
  perf = this->fields.perf;
  if ( !perf || (aubelist = (System_Collections_Generic_List_XWeaponTrail_Element__o *)perf->fields.statusPerf) == 0LL )
LABEL_73:
    sub_B2C434(aubelist, method);
  BattlePerformanceStatus__updateCriticalPoint((BattlePerformanceStatus_o *)aubelist, -1, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceCommandCard__openCommandCard(
        BattlePerformanceCommandCard_o *this,
        bool isStatTac,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_Object_o *maskSprite; // x21
  const MethodInfo *v8; // x1
  const MethodInfo *v9; // x2
  UIWidget_o *backTacticalButton; // x0
  const MethodInfo *v11; // x2
  const MethodInfo *v12; // x1
  System_Collections_IEnumerator_o *v13; // x0
  struct BattleCommandComponent_array *commandCompArray; // x8
  __int64 v15; // x20
  int max_length; // w9
  il2cpp_array_size_t v17; // w21
  struct BattleCommandComponent_array *v18; // x8
  struct BattleCommandComponent_array *v19; // x8
  __int64 v20; // x0

  if ( (byte_4189DB8 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, isStatTac);
    sub_B2C35C(&SeManager_TypeInfo, v5);
    sub_B2C35C(&StringLiteral_16343/*"anim_draw"*/, v6);
    byte_4189DB8 = 1;
  }
  maskSprite = (UnityEngine_Object_o *)this->fields.maskSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(maskSprite, 0LL, 0LL) )
  {
    backTacticalButton = (UIWidget_o *)this->fields.maskSprite;
    if ( !backTacticalButton )
      goto LABEL_28;
    UIWidget__set_depth(backTacticalButton, -31, 0LL);
  }
  BattlePerformanceCommandCard__playAnimation(this, (System_String_o *)StringLiteral_16343/*"anim_draw"*/, v9);
  backTacticalButton = (UIWidget_o *)this->fields.backTacticalButton;
  if ( !backTacticalButton )
    goto LABEL_28;
  backTacticalButton = (UIWidget_o *)UnityEngine_Component__get_gameObject(
                                       (UnityEngine_Component_o *)backTacticalButton,
                                       0LL);
  if ( !backTacticalButton )
    goto LABEL_28;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)backTacticalButton, 1, 0LL);
  BattlePerformanceCommandCard__SetBackTacticalButton(this, 1, v11);
  if ( isStatTac )
  {
    v13 = BattlePerformanceCommandCard__waitFallStar(this, v12);
    UnityEngine_MonoBehaviour__StartCoroutine_35309748((UnityEngine_MonoBehaviour_o *)this, v13, 0LL);
  }
  if ( (BYTE3(SeManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SeManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
  SeManager__PlayCommonSe(4, 0LL);
  commandCompArray = this->fields.commandCompArray;
  if ( !commandCompArray )
LABEL_28:
    sub_B2C434(backTacticalButton, v8);
  v15 = 4LL;
  while ( 1 )
  {
    max_length = commandCompArray->max_length;
    v17 = v15 - 4;
    if ( (int)v15 - 4 >= max_length )
      break;
    if ( v17 >= max_length )
      goto LABEL_30;
    backTacticalButton = (UIWidget_o *)*((_QWORD *)&commandCompArray->obj.klass + v15);
    if ( backTacticalButton )
    {
      BattleCommandComponent__setTouchFlg((BattleCommandComponent_o *)backTacticalButton, 0, 0LL);
      v18 = this->fields.commandCompArray;
      if ( v18 )
      {
        if ( v17 >= v18->max_length )
          goto LABEL_30;
        backTacticalButton = (UIWidget_o *)*((_QWORD *)&v18->obj.klass + v15);
        if ( backTacticalButton )
        {
          BattleCommandComponent__SetCardBuffAlphaAnimFlag((BattleCommandComponent_o *)backTacticalButton, 0, 0LL);
          v19 = this->fields.commandCompArray;
          if ( v19 )
          {
            if ( v17 >= v19->max_length )
            {
LABEL_30:
              v20 = sub_B2C460(backTacticalButton);
              sub_B2C400(v20, 0LL);
            }
            backTacticalButton = (UIWidget_o *)*((_QWORD *)&v19->obj.klass + v15);
            if ( backTacticalButton )
            {
              BattleCommandComponent__SetTreasureDeviceTypeChange(
                (BattleCommandComponent_o *)backTacticalButton,
                0,
                0,
                0LL);
              commandCompArray = this->fields.commandCompArray;
              ++v15;
              if ( commandCompArray )
                continue;
            }
          }
        }
      }
    }
    goto LABEL_28;
  }
  BattlePerformanceCommandCard__updateCardMag(this, v8);
}


void __fastcall BattlePerformanceCommandCard__playAnimation(
        BattlePerformanceCommandCard_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  UnityEngine_Object_o *cardRoot; // x21
  float v11; // s8
  float OffsetX; // s9
  _BOOL8 v13; // x0
  const MethodInfo *v14; // x1
  UnityEngine_Transform_o *Item; // x0
  UnityEngine_Object_o *Component_WebViewObject; // x21
  UnityEngine_Object_o *v17; // x20
  __int64 v18; // x3
  UnityEngine_Transform_c *klass; // x8
  UnityEngine_Transform_o *v20; // x20
  unsigned __int64 v21; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 v23; // x0
  UnityEngine_Vector3_o v24; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4189DB3 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_Animation___, name);
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_SimpleAnimation___, v5);
    sub_B2C35C(&FSUtility_TypeInfo, v6);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v7);
    sub_B2C35C(&SimpleAnimation_State_TypeInfo, v8);
    sub_B2C35C(&StringLiteral_16345/*"anim_giveout"*/, v9);
    byte_4189DB3 = 1;
  }
  cardRoot = (UnityEngine_Object_o *)this->fields.cardRoot;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(cardRoot, 0LL, 0LL) )
  {
    v11 = 0.0;
    OffsetX = 0.0;
    if ( !System_String__op_Equality(name, (System_String_o *)StringLiteral_16345/*"anim_giveout"*/, 0LL) )
    {
      if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
      OffsetX = FSUtility__GetOffsetX(68.0, 0, 0LL);
    }
    v13 = System_String__op_Equality(name, (System_String_o *)StringLiteral_16345/*"anim_giveout"*/, 0LL);
    if ( v13 )
      v11 = BattlePerformanceCommandCard__FSCardRootOffsetY((BattlePerformanceCommandCard_o *)v13, v14);
    Item = this->fields.cardRoot;
    if ( !Item )
      goto LABEL_37;
    v24.fields.y = v11 + this->fields.CARD_ROOT_BASE_Y;
    v24.fields.x = OffsetX + this->fields.CARD_ROOT_BASE_X;
    v24.fields.z = 0.0;
    UnityEngine_Transform__set_localPosition(Item, v24, 0LL);
  }
  Component_WebViewObject = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                      (UnityEngine_Component_o *)this,
                                                      (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
  v17 = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                  (UnityEngine_Component_o *)this,
                                  (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_Animation___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  Item = (UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality(Component_WebViewObject, 0LL, 0LL);
  if ( ((unsigned __int8)Item & 1) == 0 )
  {
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    Item = (UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality(v17, 0LL, 0LL);
    if ( ((unsigned __int8)Item & 1) == 0 )
      return;
    if ( v17 )
    {
      Item = (UnityEngine_Transform_o *)UnityEngine_Animation__get_Item((UnityEngine_Animation_o *)v17, name, 0LL);
      if ( Item )
      {
        UnityEngine_AnimationState__set_time((UnityEngine_AnimationState_o *)Item, 0.0, 0LL);
        UnityEngine_Animation__Play_50201580((UnityEngine_Animation_o *)v17, name, 0LL);
        return;
      }
    }
LABEL_37:
    sub_B2C434(Item, v14);
  }
  if ( !Component_WebViewObject )
    goto LABEL_37;
  Item = (UnityEngine_Transform_o *)SimpleAnimation__get_Item((SimpleAnimation_o *)Component_WebViewObject, name, 0LL);
  if ( !Item )
    goto LABEL_37;
  klass = Item->klass;
  v20 = Item;
  if ( *(_WORD *)&Item->klass->_2.bitflags1 )
  {
    v21 = 0LL;
    p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
    {
      ++v21;
      p_offset += 2;
      if ( v21 >= *(unsigned __int16 *)&Item->klass->_2.bitflags1 )
        goto LABEL_26;
    }
    v23 = (__int64)(&klass->vtable._4_GetEnumerator.method + 2 * *(_DWORD *)p_offset);
  }
  else
  {
LABEL_26:
    v23 = sub_AC5258(Item, SimpleAnimation_State_TypeInfo, 4LL, v18);
  }
  (*(void (__fastcall **)(UnityEngine_Transform_o *, _QWORD, float))v23)(v20, *(_QWORD *)(v23 + 8), 0.0);
  SimpleAnimation__Play_16486620((SimpleAnimation_o *)Component_WebViewObject, name, 0LL);
}


void __fastcall BattlePerformanceCommandCard__playComboEffect(
        BattlePerformanceCommandCard_o *this,
        UnityEngine_GameObject_o *prefab,
        int32_t seName,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v8; // x1
  UnityEngine_Transform_o *transform; // x2

  if ( (byte_4189DD1 & 1) == 0 )
  {
    sub_B2C35C(&SeManager_TypeInfo, prefab);
    byte_4189DD1 = 1;
  }
  if ( (seName & 0x80000000) == 0 )
  {
    if ( (BYTE3(SeManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SeManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
    SeManager__PlayCommonSe(seName, 0LL);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B2C434(0LL, v8);
  transform = UnityEngine_GameObject__get_transform(gameObject, 0LL);
  BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, prefab, transform, 0LL, 0LL);
}


void __fastcall BattlePerformanceCommandCard__playCommandEffect(
        BattlePerformanceCommandCard_o *this,
        int32_t index,
        bool flg,
        const MethodInfo *method)
{
  struct BattleCommandComponent_array *selectedcomponents; // x8
  int32_t max_length; // w9
  __int64 v6; // x0

  selectedcomponents = this->fields.selectedcomponents;
  if ( !selectedcomponents )
    goto LABEL_9;
  if ( (index & 0x80000000) == 0 )
  {
    max_length = selectedcomponents->max_length;
    if ( max_length > index )
    {
      if ( max_length <= (unsigned int)index )
      {
        v6 = sub_B2C460(this);
        sub_B2C400(v6, 0LL);
      }
      this = (BattlePerformanceCommandCard_o *)selectedcomponents->m_Items[index];
      if ( this )
      {
        BattleCommandComponent__playAttackEffect((BattleCommandComponent_o *)this, flg, 0LL);
        return;
      }
LABEL_9:
      sub_B2C434(this, index);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceCommandCard__playNobleCardEffect(
        BattlePerformanceCommandCard_o *this,
        int32_t index,
        const MethodInfo *method)
{
  BattlePerformanceCommandCard_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  struct BattleCommandComponent_array *selectedcomponents; // x8
  struct BattleCommandComponent_array *v12; // x8
  UnityEngine_Object_o *v13; // x21
  struct BattleCommandComponent_array *v14; // x8
  UnityEngine_GameObject_o *gameObject; // x21
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_Object_array *v22; // x22
  System_Int32_array **v23; // x1
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_Int32_array **npTargetTr; // x23
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  System_Int32_array **v37; // x1
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  System_Int32_array **v44; // x23
  System_Collections_Hashtable_o *v45; // x0
  struct BattleCommandComponent_array *v46; // x8
  __int64 v47; // x0
  __int64 v48; // x0
  int v49; // [xsp+Ch] [xbp-34h] BYREF

  v4 = this;
  if ( (byte_4189DD8 & 1) == 0 )
  {
    sub_B2C35C(&object___TypeInfo, *(_QWORD *)&index);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v5);
    sub_B2C35C(&SeManager_TypeInfo, v6);
    sub_B2C35C(&float_TypeInfo, v7);
    sub_B2C35C(&StringLiteral_22677/*"time"*/, v8);
    sub_B2C35C(&StringLiteral_21511/*"position"*/, v9);
    this = (BattlePerformanceCommandCard_o *)sub_B2C35C(&iTween_TypeInfo, v10);
    byte_4189DD8 = 1;
  }
  selectedcomponents = v4->fields.selectedcomponents;
  if ( !selectedcomponents )
    goto LABEL_43;
  if ( (index & 0x80000000) == 0 && (signed int)selectedcomponents->max_length > index )
  {
    if ( (BYTE3(SeManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SeManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
    SeManager__PlayCommonSe(14, 0LL);
    v12 = v4->fields.selectedcomponents;
    if ( !v12 )
      goto LABEL_43;
    if ( v12->max_length <= index )
      goto LABEL_44;
    v13 = (UnityEngine_Object_o *)v12->m_Items[index];
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    this = (BattlePerformanceCommandCard_o *)UnityEngine_Object__op_Inequality(v13, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v14 = v4->fields.selectedcomponents;
      if ( !v14 )
        goto LABEL_43;
      if ( v14->max_length <= index )
        goto LABEL_44;
      this = (BattlePerformanceCommandCard_o *)v14->m_Items[index];
      if ( !this )
        goto LABEL_43;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      this = (BattlePerformanceCommandCard_o *)sub_B2C374(object___TypeInfo, 4LL);
      if ( !this )
        goto LABEL_43;
      v22 = (System_Object_array *)this;
      this = (BattlePerformanceCommandCard_o *)StringLiteral_21511/*"position"*/;
      if ( StringLiteral_21511/*"position"*/ )
      {
        this = (BattlePerformanceCommandCard_o *)sub_B2C41C(StringLiteral_21511/*"position"*/, v22->obj.klass->_1.element_class);
        if ( !this )
          goto LABEL_45;
        v23 = (System_Int32_array **)StringLiteral_21511/*"position"*/;
      }
      else
      {
        v23 = 0LL;
      }
      if ( !v22->max_length )
        goto LABEL_44;
      v22->m_Items[0] = (Il2CppObject *)v23;
      sub_B2C2F8((BattleServantConfConponent_o *)v22->m_Items, v23, v16, v17, v18, v19, v20, v21);
      npTargetTr = (System_Int32_array **)v4->fields.npTargetTr;
      if ( !npTargetTr
        || (this = (BattlePerformanceCommandCard_o *)sub_B2C41C(v4->fields.npTargetTr, v22->obj.klass->_1.element_class)) != 0LL )
      {
        if ( v22->max_length <= 1 )
          goto LABEL_44;
        v22->m_Items[1] = (Il2CppObject *)npTargetTr;
        sub_B2C2F8((BattleServantConfConponent_o *)&v22->m_Items[1], npTargetTr, v24, v25, v26, v27, v28, v29);
        this = (BattlePerformanceCommandCard_o *)StringLiteral_22677/*"time"*/;
        if ( StringLiteral_22677/*"time"*/ )
        {
          this = (BattlePerformanceCommandCard_o *)sub_B2C41C(StringLiteral_22677/*"time"*/, v22->obj.klass->_1.element_class);
          if ( !this )
            goto LABEL_45;
          v37 = (System_Int32_array **)StringLiteral_22677/*"time"*/;
        }
        else
        {
          v37 = 0LL;
        }
        if ( v22->max_length <= 2 )
          goto LABEL_44;
        v22->m_Items[2] = (Il2CppObject *)v37;
        sub_B2C2F8((BattleServantConfConponent_o *)&v22->m_Items[2], v37, v31, v32, v33, v34, v35, v36);
        v49 = 1056964608;
        this = (BattlePerformanceCommandCard_o *)j_il2cpp_value_box_0(float_TypeInfo, &v49);
        v44 = (System_Int32_array **)this;
        if ( !this
          || (this = (BattlePerformanceCommandCard_o *)sub_B2C41C(this, v22->obj.klass->_1.element_class)) != 0LL )
        {
          if ( v22->max_length > 3 )
          {
            v22->m_Items[3] = (Il2CppObject *)v44;
            sub_B2C2F8((BattleServantConfConponent_o *)&v22->m_Items[3], v44, v38, v39, v40, v41, v42, v43);
            if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
            v45 = iTween__Hash(v22, 0LL);
            iTween__MoveTo_42732664(gameObject, v45, 0LL);
            v46 = v4->fields.selectedcomponents;
            if ( !v46 )
              goto LABEL_43;
            if ( v46->max_length > index )
            {
              this = (BattlePerformanceCommandCard_o *)v46->m_Items[index];
              if ( this )
              {
                BattleCommandComponent__playNpAttackEffect((BattleCommandComponent_o *)this, 0.5, 0LL);
                return;
              }
LABEL_43:
              sub_B2C434(this, *(_QWORD *)&index);
            }
          }
LABEL_44:
          v47 = sub_B2C460(this);
          sub_B2C400(v47, 0LL);
        }
      }
LABEL_45:
      v48 = sub_B2C454(this);
      sub_B2C400(v48, 0LL);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceCommandCard__playTypeEffect(
        BattlePerformanceCommandCard_o *this,
        bool flg,
        const MethodInfo *method)
{
  struct BattleCommandComponent_array *selectedcomponents; // x8
  BattlePerformanceCommandCard_o *v4; // x19
  __int64 v5; // x21
  bool v6; // w20
  int max_length; // w9
  __int64 v8; // x0

  selectedcomponents = this->fields.selectedcomponents;
  if ( !selectedcomponents )
LABEL_7:
    sub_B2C434(this, flg);
  v4 = this;
  v5 = 0LL;
  v6 = flg;
  while ( 1 )
  {
    max_length = selectedcomponents->max_length;
    if ( (int)v5 >= max_length )
      break;
    if ( (unsigned int)v5 >= max_length )
    {
      v8 = sub_B2C460(this);
      sub_B2C400(v8, 0LL);
    }
    this = (BattlePerformanceCommandCard_o *)selectedcomponents->m_Items[v5];
    if ( this )
    {
      BattleCommandComponent__flashType((BattleCommandComponent_o *)this, v6, 0LL);
      selectedcomponents = v4->fields.selectedcomponents;
      ++v5;
      if ( selectedcomponents )
        continue;
    }
    goto LABEL_7;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceCommandCard__registCommandCard(
        BattlePerformanceCommandCard_o *this,
        BattleCommandData_array *list,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  BattleCommandComponent_o *Bdata; // x0
  __int64 v9; // x1
  signed int max_length; // w9
  signed int v11; // w8
  __int64 v12; // x24
  Il2CppClass **v13; // x25
  Il2CppClass *v14; // x8
  BattleCommandData_o **v15; // x25
  Il2CppClass *v16; // t1
  struct UnityEngine_Transform_array *commandTransformArray; // x8
  UnityEngine_Transform_o *v18; // x22
  BattleServantData_o *v19; // x21
  int v20; // s0
  struct UnityEngine_Transform_array *v23; // x8
  UnityEngine_Transform_o *v24; // x22
  int v25; // s0
  struct BattleCommandComponent_array *commandCompArray; // x8
  struct BattleCommandComponent_array *v29; // x8
  struct BattleCommandComponent_array *v30; // x8
  struct UnityEngine_GameObject_array *p_commandlist; // x8
  UIWidget_o *Component_srcLineSprite; // x21
  int v33; // s0
  struct UnityEngine_GameObject_array *v37; // x8
  __int64 v38; // x22
  __int64 v39; // x9
  il2cpp_array_size_t v40; // w20
  struct BattleCommandComponent_array *v41; // x8
  struct UnityEngine_GameObject_array *v42; // x8
  UnityEngine_Object_o *v43; // x20
  UnityEngine_Object_o *v44; // x20
  struct BattleCommandComponent_array *v45; // x8
  UnityEngine_Object_o *v46; // x20
  struct BattleCommandComponent_array *v47; // x8
  __int64 v48; // x0

  if ( (byte_4189DB4 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_UITweener___, list);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_UIWidget___, v5);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v6);
    sub_B2C35C(&StringLiteral_16346/*"anim_wait"*/, v7);
    byte_4189DB4 = 1;
  }
  BattlePerformanceCommandCard__playAnimation(this, (System_String_o *)StringLiteral_16346/*"anim_wait"*/, method);
  if ( !list )
    goto LABEL_67;
  max_length = list->max_length;
  if ( max_length >= 1 )
  {
    v11 = 0;
    while ( v11 < (unsigned int)max_length )
    {
      v12 = v11;
      v13 = &list->obj.klass + v11;
      Bdata = (BattleCommandComponent_o *)this->fields.Bdata;
      v16 = v13[4];
      v15 = (BattleCommandData_o **)(v13 + 4);
      v14 = v16;
      if ( !v16 )
        goto LABEL_67;
      if ( !Bdata )
        goto LABEL_67;
      Bdata = (BattleCommandComponent_o *)BattleData__getServantData((BattleData_o *)Bdata, v14->_1.byval_arg.bits, 0LL);
      commandTransformArray = this->fields.commandTransformArray;
      if ( !commandTransformArray )
        goto LABEL_67;
      if ( (unsigned int)v12 >= commandTransformArray->max_length )
        break;
      v18 = commandTransformArray->m_Items[v12];
      v19 = (BattleServantData_o *)Bdata;
      *(UnityEngine_Vector3_o *)&v20 = UnityEngine_Vector3__get_zero(0LL);
      if ( !v18 )
        goto LABEL_67;
      UnityEngine_Transform__set_localPosition(v18, *(UnityEngine_Vector3_o *)&v20, 0LL);
      v23 = this->fields.commandTransformArray;
      if ( !v23 )
        goto LABEL_67;
      if ( (unsigned int)v12 >= v23->max_length )
        break;
      v24 = v23->m_Items[v12];
      *(UnityEngine_Vector3_o *)&v25 = UnityEngine_Vector3__get_zero(0LL);
      if ( !v24 )
        goto LABEL_67;
      UnityEngine_Transform__set_localScale(v24, *(UnityEngine_Vector3_o *)&v25, 0LL);
      commandCompArray = this->fields.commandCompArray;
      if ( !commandCompArray )
        goto LABEL_67;
      if ( (unsigned int)v12 >= commandCompArray->max_length || (unsigned int)v12 >= list->max_length )
        break;
      Bdata = commandCompArray->m_Items[v12];
      if ( !Bdata )
        goto LABEL_67;
      BattleCommandComponent__setData(Bdata, *v15, v19, 0, 1, 0, 0LL);
      v29 = this->fields.commandCompArray;
      if ( !v29 )
        goto LABEL_67;
      if ( (unsigned int)v12 >= v29->max_length )
        break;
      Bdata = v29->m_Items[v12];
      if ( !Bdata )
        goto LABEL_67;
      BattleCommandComponent__SetPowerUpCardValue(Bdata, 0, 0LL);
      v30 = this->fields.commandCompArray;
      if ( !v30 )
        goto LABEL_67;
      if ( (unsigned int)v12 >= v30->max_length || (unsigned int)v12 >= list->max_length )
        break;
      if ( !*v15 )
        goto LABEL_67;
      Bdata = v30->m_Items[v12];
      if ( !Bdata )
        goto LABEL_67;
      BattleCommandComponent__SetPowerUpCardIcon(Bdata, (*v15)->fields.commandCardParam, 2, 0, 0LL);
      p_commandlist = this->fields.p_commandlist;
      if ( !p_commandlist )
        goto LABEL_67;
      if ( (unsigned int)v12 >= p_commandlist->max_length )
        break;
      Bdata = (BattleCommandComponent_o *)p_commandlist->m_Items[v12];
      if ( !Bdata )
        goto LABEL_67;
      Component_srcLineSprite = (UIWidget_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                (UnityEngine_GameObject_o *)Bdata,
                                                (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
      *(UnityEngine_Color_o *)&v33 = UnityEngine_Color__get_white(0LL);
      if ( !Component_srcLineSprite )
        goto LABEL_67;
      UIWidget__set_color(Component_srcLineSprite, *(UnityEngine_Color_o *)&v33, 0LL);
      max_length = list->max_length;
      v11 = v12 + 1;
      if ( (int)v12 + 1 >= max_length )
        goto LABEL_32;
    }
LABEL_68:
    v48 = sub_B2C460(Bdata);
    sub_B2C400(v48, 0LL);
  }
LABEL_32:
  v37 = this->fields.p_commandlist;
  if ( !v37 )
    goto LABEL_67;
  v38 = 4LL;
  while ( 1 )
  {
    v39 = *(_QWORD *)&v37->max_length;
    v40 = v38 - 4;
    if ( (int)v38 - 4 >= (int)v39 )
      break;
    v41 = this->fields.commandCompArray;
    if ( !v41 )
      goto LABEL_67;
    if ( v40 >= v41->max_length )
      goto LABEL_68;
    Bdata = (BattleCommandComponent_o *)*((_QWORD *)&v41->obj.klass + v38);
    if ( Bdata )
    {
      BattleCommandComponent__setTouchFlg(Bdata, 0, 0LL);
      v42 = this->fields.p_commandlist;
      if ( v42 )
      {
        if ( v40 >= v42->max_length )
          goto LABEL_68;
        Bdata = (BattleCommandComponent_o *)*((_QWORD *)&v42->obj.klass + v38);
        if ( Bdata )
        {
          v43 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                          (UnityEngine_GameObject_o *)Bdata,
                                          (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_UITweener___);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          Bdata = (BattleCommandComponent_o *)UnityEngine_Object__op_Inequality(v43, 0LL, 0LL);
          if ( ((unsigned __int8)Bdata & 1) != 0 )
          {
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            UnityEngine_Object__Destroy_35314896(v43, 0LL);
          }
          v37 = this->fields.p_commandlist;
          ++v38;
          if ( v37 )
            continue;
        }
      }
    }
    goto LABEL_67;
  }
  if ( (unsigned int)v39 <= 8 )
    goto LABEL_68;
  v44 = (UnityEngine_Object_o *)v37->m_Items[8];
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  Bdata = (BattleCommandComponent_o *)UnityEngine_Object__op_Inequality(v44, 0LL, 0LL);
  if ( ((unsigned __int8)Bdata & 1) != 0 )
  {
    v45 = this->fields.commandCompArray;
    if ( !v45 )
      goto LABEL_67;
    if ( v45->max_length <= 8 )
      goto LABEL_68;
    v46 = (UnityEngine_Object_o *)v45->m_Items[8];
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    Bdata = (BattleCommandComponent_o *)UnityEngine_Object__op_Inequality(v46, 0LL, 0LL);
    if ( ((unsigned __int8)Bdata & 1) != 0 )
    {
      v47 = this->fields.commandCompArray;
      if ( v47 )
      {
        if ( v47->max_length <= 8 )
          goto LABEL_68;
        Bdata = v47->m_Items[8];
        if ( Bdata )
        {
          BattleCommandComponent__setData(Bdata, 0LL, 0LL, 0, 1, 0, 0LL);
          return;
        }
      }
LABEL_67:
      sub_B2C434(Bdata, v9);
    }
  }
}


void __fastcall BattlePerformanceCommandCard__resetCommandCard(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  UnityEngine_GameObject_o *Component_srcLineSprite; // x0
  __int64 v6; // x1
  struct UnityEngine_GameObject_array *p_commandlist; // x8
  __int64 v8; // x20
  int max_length; // w9
  il2cpp_array_size_t v10; // w22
  struct UnityEngine_GameObject_array *v11; // x8
  __int64 v12; // x0

  if ( (byte_4189DB6 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_BattleCommandComponent___, method);
    sub_B2C35C(&StringLiteral_16346/*"anim_wait"*/, v4);
    byte_4189DB6 = 1;
  }
  BattlePerformanceCommandCard__playAnimation(this, (System_String_o *)StringLiteral_16346/*"anim_wait"*/, v2);
  p_commandlist = this->fields.p_commandlist;
  if ( !p_commandlist )
LABEL_14:
    sub_B2C434(Component_srcLineSprite, v6);
  v8 = 9LL;
  while ( 1 )
  {
    max_length = p_commandlist->max_length;
    v10 = v8 - 4;
    if ( (int)v8 - 4 >= max_length )
      break;
    if ( v10 >= max_length )
      goto LABEL_16;
    Component_srcLineSprite = (UnityEngine_GameObject_o *)*((_QWORD *)&p_commandlist->obj.klass + v8);
    if ( Component_srcLineSprite )
    {
      Component_srcLineSprite = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                              Component_srcLineSprite,
                                                              (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_BattleCommandComponent___);
      if ( Component_srcLineSprite )
      {
        BattleCommandComponent__setTouchFlg((BattleCommandComponent_o *)Component_srcLineSprite, 0, 0LL);
        v11 = this->fields.p_commandlist;
        if ( v11 )
        {
          if ( v10 >= v11->max_length )
          {
LABEL_16:
            v12 = sub_B2C460(Component_srcLineSprite);
            sub_B2C400(v12, 0LL);
          }
          Component_srcLineSprite = (UnityEngine_GameObject_o *)*((_QWORD *)&v11->obj.klass + v8);
          if ( Component_srcLineSprite )
          {
            Component_srcLineSprite = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                    Component_srcLineSprite,
                                                                    (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_BattleCommandComponent___);
            if ( Component_srcLineSprite )
            {
              BattleCommandComponent__initView((BattleCommandComponent_o *)Component_srcLineSprite, 0LL);
              p_commandlist = this->fields.p_commandlist;
              ++v8;
              if ( p_commandlist )
                continue;
            }
          }
        }
      }
    }
    goto LABEL_14;
  }
}


void __fastcall BattlePerformanceCommandCard__selectAutoCard(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  BattlePerformanceCommandCard_o *v2; // x19
  __int64 v3; // x1
  struct BattleCommandComponent_array *commandCompArray; // x8
  __int64 v5; // x21
  int max_length; // w9
  BattleCommandComponent_o *v7; // x20
  int v8; // w20
  __int64 v9; // x0

  v2 = this;
  if ( (byte_4189DF0 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_20377/*"markindex"*/, method);
    this = (BattlePerformanceCommandCard_o *)sub_B2C35C(&StringLiteral_11617/*"SELECTCARD"*/, v3);
    byte_4189DF0 = 1;
  }
  commandCompArray = v2->fields.commandCompArray;
  if ( !commandCompArray )
    goto LABEL_12;
  v5 = 0LL;
  while ( 1 )
  {
    max_length = commandCompArray->max_length;
    if ( (int)v5 >= max_length )
      return;
    if ( (unsigned int)v5 >= max_length )
    {
      v9 = sub_B2C460(this);
      sub_B2C400(v9, 0LL);
    }
    v7 = commandCompArray->m_Items[v5];
    if ( !v7 )
      goto LABEL_12;
    if ( !v7->fields.selectflg )
      break;
LABEL_11:
    ++v5;
    if ( !commandCompArray )
      goto LABEL_12;
  }
  this = (BattlePerformanceCommandCard_o *)BattleCommandComponent__getMarkIndex(v7, 0LL);
  if ( ((unsigned int)this & 0x80000000) != 0 )
  {
    commandCompArray = v2->fields.commandCompArray;
    goto LABEL_11;
  }
  this = (BattlePerformanceCommandCard_o *)BattleCommandComponent__getMarkIndex(v7, 0LL);
  if ( !v2->fields.commandfsm
    || (v8 = (int)this,
        (this = (BattlePerformanceCommandCard_o *)PlayMakerFSM__get_Fsm(v2->fields.commandfsm, 0LL)) == 0LL)
    || (this = (BattlePerformanceCommandCard_o *)this->fields.firstbonus_q) == 0LL
    || (this = (BattlePerformanceCommandCard_o *)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                                   (HutongGames_PlayMaker_FsmVariables_o *)this,
                                                   (System_String_o *)StringLiteral_20377/*"markindex"*/,
                                                   0LL)) == 0LL
    || (LODWORD(this->fields.commandprefab) = v8, (this = (BattlePerformanceCommandCard_o *)v2->fields.commandfsm) == 0LL) )
  {
LABEL_12:
    sub_B2C434(this, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_11617/*"SELECTCARD"*/, 0LL);
}


void __fastcall BattlePerformanceCommandCard__selectCommandCard(
        BattlePerformanceCommandCard_o *this,
        int32_t atcount,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  struct BattlePerformance_o *perf; // x8

  BattlePerformanceCommandCard__setCountRemaining(this, atcount, method);
  perf = this->fields.perf;
  if ( !perf )
    sub_B2C434(v5, v6);
  perf->fields.istactical = atcount == 3;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceCommandCard__selectOK(
        BattlePerformanceCommandCard_o *this,
        int32_t markindex,
        const MethodInfo *method)
{
  BattlePerformanceCommandCard_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  struct BattleCommandComponent_array *commandCompArray; // x8
  int v20; // w22
  __int64 v21; // x9
  Il2CppClass **v22; // x8
  BattleCommandComponent_o *v23; // x21
  const MethodInfo *v24; // x3
  struct System_Int32_array *selectcommand; // x10
  int max_length; // w11
  int32_t v27; // w12
  __int64 *v28; // x8
  signed int v29; // w10
  __int64 v30; // x28
  Il2CppClass **v31; // x8
  BattleCommandComponent_o *v32; // x21
  struct BattleCommandComponent_array *selectedcomponents; // x22
  __int64 v34; // x23
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  Il2CppClass **v41; // x0
  struct UnityEngine_GameObject_o *firstbonus_q; // x22
  System_String_o *v43; // x0
  struct UnityEngine_GameObject_array *p_commandlist; // x8
  struct UnityEngine_GameObject_array *v45; // x8
  UnityEngine_GameObject_o *v46; // x22
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  BattlePerformanceCommandCard_o *v53; // x23
  System_Int32_array **v54; // x1
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  System_Int32_array **v61; // x24
  System_String_array **v62; // x2
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  System_Int32_array **v68; // x1
  System_String_array **v69; // x2
  System_String_array **v70; // x3
  System_Boolean_array **v71; // x4
  System_Int32_array **v72; // x5
  System_Int32_array *v73; // x6
  System_Int32_array *v74; // x7
  System_Int32_array **v75; // x24
  System_String_array **v76; // x2
  System_String_array **v77; // x3
  System_Boolean_array **v78; // x4
  System_Int32_array **v79; // x5
  System_Int32_array *v80; // x6
  System_Int32_array *v81; // x7
  System_Int32_array **v82; // x1
  System_String_array **v83; // x2
  System_String_array **v84; // x3
  System_Boolean_array **v85; // x4
  System_Int32_array **v86; // x5
  System_Int32_array *v87; // x6
  System_Int32_array *v88; // x7
  System_Int32_array **v89; // x24
  System_Collections_Hashtable_o *v90; // x0
  float v91; // s10
  struct UnityEngine_Transform_array *commandTransformArray; // x8
  const MethodInfo *v93; // x3
  int v94; // s0
  struct System_Single_array *COMMAND_STAMP_POS_X; // x8
  int32_t v98; // w1
  const MethodInfo *v99; // x2
  int32_t CommandType; // w0
  const MethodInfo *v101; // x2
  System_Collections_IEnumerator_o *started; // x0
  const MethodInfo *v103; // x1
  int32_t drawcount; // w9
  int32_t maxdrawcount; // w8
  int32_t v106; // w9
  struct System_Int32_array *v107; // x8
  System_Action_o *v108; // x20
  __int64 v109; // x0
  __int64 v110; // x0
  char v111[4]; // [xsp+8h] [xbp-78h] BYREF
  int v112; // [xsp+Ch] [xbp-74h] BYREF
  int v113; // [xsp+18h] [xbp-68h] BYREF
  int32_t targetIndex; // [xsp+1Ch] [xbp-64h] BYREF

  v4 = this;
  if ( (byte_4189DC1 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&markindex);
    sub_B2C35C(&Method_BattlePerformanceCommandCard__selectOK_b__112_0__, v5);
    sub_B2C35C(&bool_TypeInfo, v6);
    sub_B2C35C(&FSUtility_TypeInfo, v7);
    sub_B2C35C(&int_TypeInfo, v8);
    sub_B2C35C(&object___TypeInfo, v9);
    sub_B2C35C(&float_TypeInfo, v10);
    sub_B2C35C(&StringLiteral_4603/*"DISSELECT"*/, v11);
    sub_B2C35C(&StringLiteral_11616/*"SELECT"*/, v12);
    sub_B2C35C(&StringLiteral_2920/*"CANCEL"*/, v13);
    sub_B2C35C(&StringLiteral_22677/*"time"*/, v14);
    sub_B2C35C(&StringLiteral_9771/*"OPEN_SEALED"*/, v15);
    sub_B2C35C(&StringLiteral_23408/*"y"*/, v16);
    sub_B2C35C(&StringLiteral_19967/*"islocal"*/, v17);
    this = (BattlePerformanceCommandCard_o *)sub_B2C35C(&iTween_TypeInfo, v18);
    byte_4189DC1 = 1;
  }
  targetIndex = 0;
  commandCompArray = v4->fields.commandCompArray;
  if ( !commandCompArray )
    goto LABEL_11;
  v20 = 0;
  while ( 1 )
  {
    v21 = *(_QWORD *)&commandCompArray->max_length;
    if ( v20 >= (int)v21 )
      break;
    if ( v20 >= (unsigned int)v21 )
      goto LABEL_105;
    v22 = &commandCompArray->obj.klass + v20;
    v23 = (BattleCommandComponent_o *)v22[4];
    if ( !v23 )
      goto LABEL_11;
    this = (BattlePerformanceCommandCard_o *)BattleCommandComponent__checkMark(
                                               (BattleCommandComponent_o *)v22[4],
                                               markindex,
                                               0LL);
    if ( ((unsigned __int8)this & 1) != 0 && v23->fields.selectflg )
    {
      BattlePerformanceCommandCard__unselectCommandCard(v4, v23, markindex, v24);
      this = (BattlePerformanceCommandCard_o *)v4->fields.commandfsm;
      if ( this )
      {
        v28 = &StringLiteral_2920/*"CANCEL"*/;
        goto LABEL_103;
      }
      goto LABEL_11;
    }
    commandCompArray = v4->fields.commandCompArray;
    ++v20;
    if ( !commandCompArray )
      goto LABEL_11;
  }
  if ( v4->fields.maxdrawcount <= v4->fields.drawcount )
  {
    this = (BattlePerformanceCommandCard_o *)v4->fields.commandfsm;
    if ( this )
    {
      v28 = &StringLiteral_4603/*"DISSELECT"*/;
LABEL_103:
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)*v28, 0LL);
      return;
    }
    goto LABEL_11;
  }
  targetIndex = -1;
  selectcommand = v4->fields.selectcommand;
  if ( !selectcommand )
    goto LABEL_11;
  max_length = selectcommand->max_length;
  if ( max_length >= 1 )
  {
    v27 = 0;
    while ( 1 )
    {
      if ( v27 >= (unsigned int)max_length )
        goto LABEL_105;
      if ( selectcommand->m_Items[v27 + 1] == -1 )
        break;
      if ( ++v27 >= max_length )
        goto LABEL_25;
    }
    targetIndex = v27;
  }
LABEL_25:
  if ( (int)v21 < 1 )
  {
LABEL_95:
    drawcount = v4->fields.drawcount;
    maxdrawcount = v4->fields.maxdrawcount;
    if ( drawcount < maxdrawcount )
    {
      v106 = drawcount + 1;
      v4->fields.drawcount = v106;
      BattlePerformanceCommandCard__selectCommandCard(v4, maxdrawcount - v106, method);
      v107 = v4->fields.selectcommand;
      if ( !v107 )
        goto LABEL_11;
      if ( targetIndex >= v107->max_length )
      {
LABEL_105:
        v109 = sub_B2C460(this);
        sub_B2C400(v109, 0LL);
      }
      v107->m_Items[targetIndex + 1] = markindex;
    }
    this = (BattlePerformanceCommandCard_o *)v4->fields.commandfsm;
    if ( this )
    {
      v28 = &StringLiteral_11616/*"SELECT"*/;
      goto LABEL_103;
    }
LABEL_11:
    sub_B2C434(this, *(_QWORD *)&markindex);
  }
  v29 = 0;
  while ( 1 )
  {
    if ( v29 >= (unsigned int)v21 )
      goto LABEL_105;
    v30 = v29;
    v31 = &commandCompArray->obj.klass + v29;
    v32 = (BattleCommandComponent_o *)v31[4];
    if ( !v32 )
      goto LABEL_11;
    this = (BattlePerformanceCommandCard_o *)BattleCommandComponent__checkMark(
                                               (BattleCommandComponent_o *)v31[4],
                                               markindex,
                                               0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
      break;
LABEL_93:
    commandCompArray = v4->fields.commandCompArray;
    if ( !commandCompArray )
      goto LABEL_11;
    LODWORD(v21) = commandCompArray->max_length;
    v29 = v30 + 1;
    if ( (int)v30 + 1 >= (int)v21 )
      goto LABEL_95;
  }
  if ( BattleCommandComponent__get_isSealed(v32, 0LL)
    || BattleCommandComponent__isTreasureDvc(v32, 0LL) && BattleCommandComponent__get_isKindOfDontAction(v32, 0LL) )
  {
    this = (BattlePerformanceCommandCard_o *)v4->fields.commandfsm;
    if ( this )
    {
      v28 = &StringLiteral_9771/*"OPEN_SEALED"*/;
      goto LABEL_103;
    }
    goto LABEL_11;
  }
  this = (BattlePerformanceCommandCard_o *)BattleCommandComponent__isTreasureDvc(v32, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
    goto LABEL_36;
  this = (BattlePerformanceCommandCard_o *)BattleCommandComponent__get_SealStatus(v32, 0LL);
  if ( !this )
    goto LABEL_11;
  this = (BattlePerformanceCommandCard_o *)BattleCommandSealStatus__get_IsTreasureDeviceError(
                                             (BattleCommandSealStatus_o *)this,
                                             0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
LABEL_36:
    v32->fields.selectflg = 1;
    selectedcomponents = v4->fields.selectedcomponents;
    if ( !selectedcomponents )
      goto LABEL_11;
    v34 = targetIndex;
    this = (BattlePerformanceCommandCard_o *)sub_B2C41C(v32, selectedcomponents->obj.klass->_1.element_class);
    if ( !this )
    {
LABEL_106:
      v110 = sub_B2C454(this);
      sub_B2C400(v110, 0LL);
    }
    if ( (unsigned int)v34 >= selectedcomponents->max_length )
      goto LABEL_105;
    v41 = &selectedcomponents->obj.klass + v34;
    v41[4] = (Il2CppClass *)v32;
    sub_B2C2F8((BattleServantConfConponent_o *)(v41 + 4), (System_Int32_array **)v32, v35, v36, v37, v38, v39, v40);
    this = (BattlePerformanceCommandCard_o *)v4->fields.commandfsm;
    if ( !this )
      goto LABEL_11;
    this = (BattlePerformanceCommandCard_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)this, 0LL);
    if ( !this )
      goto LABEL_11;
    firstbonus_q = this->fields.firstbonus_q;
    v43 = System_Int32__ToString((int32_t)&targetIndex, 0LL);
    this = (BattlePerformanceCommandCard_o *)System_String__Concat_44305532(
                                               (System_String_o *)StringLiteral_11616/*"SELECT"*/,
                                               v43,
                                               0LL);
    if ( !firstbonus_q )
      goto LABEL_11;
    this = (BattlePerformanceCommandCard_o *)HutongGames_PlayMaker_FsmVariables__GetFsmGameObject(
                                               (HutongGames_PlayMaker_FsmVariables_o *)firstbonus_q,
                                               (System_String_o *)this,
                                               0LL);
    p_commandlist = v4->fields.p_commandlist;
    if ( !p_commandlist )
      goto LABEL_11;
    if ( (unsigned int)v30 >= p_commandlist->max_length )
      goto LABEL_105;
    if ( !this )
      goto LABEL_11;
    HutongGames_PlayMaker_FsmGameObject__set_Value(
      (HutongGames_PlayMaker_FsmGameObject_o *)this,
      p_commandlist->m_Items[v30],
      0LL);
    v45 = v4->fields.p_commandlist;
    if ( !v45 )
      goto LABEL_11;
    if ( (unsigned int)v30 >= v45->max_length )
      goto LABEL_105;
    v46 = v45->m_Items[v30];
    this = (BattlePerformanceCommandCard_o *)sub_B2C374(object___TypeInfo, 6LL);
    if ( !this )
      goto LABEL_11;
    v53 = this;
    this = (BattlePerformanceCommandCard_o *)StringLiteral_23408/*"y"*/;
    if ( StringLiteral_23408/*"y"*/ )
    {
      this = (BattlePerformanceCommandCard_o *)sub_B2C41C(StringLiteral_23408/*"y"*/, v53->klass->_1.element_class);
      if ( !this )
        goto LABEL_106;
      v54 = (System_Int32_array **)StringLiteral_23408/*"y"*/;
    }
    else
    {
      v54 = 0LL;
    }
    if ( !LODWORD(v53->fields.COMMAND_STAMP_POS_X) )
      goto LABEL_105;
    *(_QWORD *)&v53->fields.COMMAND_STAMP_POS_Y = v54;
    sub_B2C2F8((BattleServantConfConponent_o *)&v53->fields.COMMAND_STAMP_POS_Y, v54, v47, v48, v49, v50, v51, v52);
    v113 = 20;
    this = (BattlePerformanceCommandCard_o *)j_il2cpp_value_box_0(int_TypeInfo, &v113);
    v61 = (System_Int32_array **)this;
    if ( this )
    {
      this = (BattlePerformanceCommandCard_o *)sub_B2C41C(this, v53->klass->_1.element_class);
      if ( !this )
        goto LABEL_106;
    }
    if ( LODWORD(v53->fields.COMMAND_STAMP_POS_X) <= 1 )
      goto LABEL_105;
    *(_QWORD *)&v53->fields.CARD_ROOT_BASE_X = v61;
    sub_B2C2F8((BattleServantConfConponent_o *)&v53->fields.CARD_ROOT_BASE_X, v61, v55, v56, v57, v58, v59, v60);
    this = (BattlePerformanceCommandCard_o *)StringLiteral_22677/*"time"*/;
    if ( StringLiteral_22677/*"time"*/ )
    {
      this = (BattlePerformanceCommandCard_o *)sub_B2C41C(StringLiteral_22677/*"time"*/, v53->klass->_1.element_class);
      if ( !this )
        goto LABEL_106;
      v68 = (System_Int32_array **)StringLiteral_22677/*"time"*/;
    }
    else
    {
      v68 = 0LL;
    }
    if ( LODWORD(v53->fields.COMMAND_STAMP_POS_X) <= 2 )
      goto LABEL_105;
    v53->fields.commandfsm = (struct PlayMakerFSM_o *)v68;
    sub_B2C2F8((BattleServantConfConponent_o *)&v53->fields.commandfsm, v68, v62, v63, v64, v65, v66, v67);
    v112 = 1045220557;
    this = (BattlePerformanceCommandCard_o *)j_il2cpp_value_box_0(float_TypeInfo, &v112);
    v75 = (System_Int32_array **)this;
    if ( this )
    {
      this = (BattlePerformanceCommandCard_o *)sub_B2C41C(this, v53->klass->_1.element_class);
      if ( !this )
        goto LABEL_106;
    }
    if ( LODWORD(v53->fields.COMMAND_STAMP_POS_X) <= 3 )
      goto LABEL_105;
    v53->fields.commandprefab = (struct UnityEngine_GameObject_o *)v75;
    sub_B2C2F8((BattleServantConfConponent_o *)&v53->fields.commandprefab, v75, v69, v70, v71, v72, v73, v74);
    this = (BattlePerformanceCommandCard_o *)StringLiteral_19967/*"islocal"*/;
    if ( StringLiteral_19967/*"islocal"*/ )
    {
      this = (BattlePerformanceCommandCard_o *)sub_B2C41C(StringLiteral_19967/*"islocal"*/, v53->klass->_1.element_class);
      if ( !this )
        goto LABEL_106;
      v82 = (System_Int32_array **)StringLiteral_19967/*"islocal"*/;
    }
    else
    {
      v82 = 0LL;
    }
    if ( LODWORD(v53->fields.COMMAND_STAMP_POS_X) <= 4 )
      goto LABEL_105;
    v53->fields.selectCommandPrefab = (struct UnityEngine_GameObject_o *)v82;
    sub_B2C2F8((BattleServantConfConponent_o *)&v53->fields.selectCommandPrefab, v82, v76, v77, v78, v79, v80, v81);
    v111[0] = 1;
    this = (BattlePerformanceCommandCard_o *)j_il2cpp_value_box_0(bool_TypeInfo, v111);
    v89 = (System_Int32_array **)this;
    if ( this )
    {
      this = (BattlePerformanceCommandCard_o *)sub_B2C41C(this, v53->klass->_1.element_class);
      if ( !this )
        goto LABEL_106;
    }
    if ( LODWORD(v53->fields.COMMAND_STAMP_POS_X) <= 5 )
      goto LABEL_105;
    v53->fields.commandrootTransform = (struct UnityEngine_Transform_o *)v89;
    sub_B2C2F8((BattleServantConfConponent_o *)&v53->fields.commandrootTransform, v89, v83, v84, v85, v86, v87, v88);
    if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
    v90 = iTween__Hash((System_Object_array *)v53, 0LL);
    iTween__MoveTo_42732664(v46, v90, 0LL);
    BattleCommandComponent__stopAnimation(v32, 0LL);
    BattleCommandComponent__selectCard(v32, targetIndex, 0LL);
    if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
    this = (BattlePerformanceCommandCard_o *)FSUtility__IsUnderVista(0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
      v91 = 0.0;
    else
      v91 = 17.0;
    if ( (unsigned int)v30 <= 4 )
    {
      this = (BattlePerformanceCommandCard_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v4, 0LL);
      COMMAND_STAMP_POS_X = v4->fields.COMMAND_STAMP_POS_X;
      if ( !COMMAND_STAMP_POS_X )
        goto LABEL_11;
      if ( (unsigned int)v30 >= COMMAND_STAMP_POS_X->max_length )
        goto LABEL_105;
      if ( !this )
        goto LABEL_11;
      *(UnityEngine_Vector3_o *)&v94 = UnityEngine_Transform__TransformPoint_35438660(
                                         (UnityEngine_Transform_o *)this,
                                         COMMAND_STAMP_POS_X->m_Items[v30 + 1],
                                         v91 + v4->fields.COMMAND_STAMP_POS_Y,
                                         v4->fields.COMMAND_STAMP_POS_Z,
                                         0LL);
    }
    else
    {
      commandTransformArray = v4->fields.commandTransformArray;
      if ( !commandTransformArray )
        goto LABEL_11;
      if ( (unsigned int)v30 >= commandTransformArray->max_length )
        goto LABEL_105;
      this = (BattlePerformanceCommandCard_o *)commandTransformArray->m_Items[v30];
      if ( !this )
        goto LABEL_11;
      *(UnityEngine_Vector3_o *)&v94 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)this, 0LL);
    }
    BattlePerformanceCommandCard__SetSelectStamp(v4, targetIndex, *(UnityEngine_Vector3_o *)&v94, v32, v93);
    if ( !targetIndex )
    {
      CommandType = BattleCommandComponent__getCommandType(v32, 0LL);
      started = BattlePerformanceCommandCard__coStartFirstBonus(v4, CommandType, v101);
      UnityEngine_MonoBehaviour__StartCoroutine_35309748((UnityEngine_MonoBehaviour_o *)v4, started, 0LL);
    }
    BattlePerformanceCommandCard__checkChainBonus(v4, v98, v99);
    BattlePerformanceCommandCard__checkMaskEnemy(v4, v103);
    goto LABEL_93;
  }
  v108 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v108, (Il2CppObject *)v4, Method_BattlePerformanceCommandCard__selectOK_b__112_0__, 0LL);
  BattleCommandComponent__PlayTDErrorAnimation(v32, v108, 0LL);
}


void __fastcall BattlePerformanceCommandCard__setAtkButtonFlg(
        BattlePerformanceCommandCard_o *this,
        bool flg,
        const MethodInfo *method)
{
  bool v3; // w1

  v3 = flg;
  this->fields.isPressAtkBtn = v3;
  BattlePerformanceCommandCard__SetBackTacticalButton(this, v3, method);
}


void __fastcall BattlePerformanceCommandCard__setComboEffectPrefab(
        BattlePerformanceCommandCard_o *this,
        BattleComboData_o *combo,
        UnityEngine_GameObject_o **prefab,
        int32_t *seName,
        const MethodInfo *method)
{
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v12; // x0
  __int64 v13; // x1
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  UnityEngine_GameObject_o *cutin_ordererror; // x1
  int32_t samecount; // w8
  int32_t v22; // w8
  int32_t v23; // w8

  *seName = -1;
  *prefab = 0LL;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)prefab,
    0LL,
    (System_String_array **)prefab,
    (System_String_array **)seName,
    (System_Boolean_array **)method,
    v5,
    v6,
    v7);
  if ( !combo )
    sub_B2C434(v12, v13);
  if ( combo->fields.chainError )
  {
    *seName = 27;
    cutin_ordererror = this->fields.cutin_ordererror;
LABEL_4:
    *prefab = cutin_ordererror;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)prefab,
      (System_Int32_array **)cutin_ordererror,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
    return;
  }
  if ( combo->fields.flash )
  {
    *seName = 25;
    if ( BattleCommand__isARTS(combo->fields.flashtype, 0LL) )
    {
      samecount = combo->fields.samecount;
      if ( (unsigned int)(samecount - 1) < 2 )
      {
        cutin_ordererror = this->fields.cutin_trinity_a;
        goto LABEL_4;
      }
      if ( samecount == 3 )
      {
        *seName = 26;
        cutin_ordererror = this->fields.cutin_grand_a;
        goto LABEL_4;
      }
    }
    else if ( BattleCommand__isBUSTER(combo->fields.flashtype, 0LL) )
    {
      v22 = combo->fields.samecount;
      if ( (unsigned int)(v22 - 1) < 2 )
      {
        cutin_ordererror = this->fields.cutin_trinity_b;
        goto LABEL_4;
      }
      if ( v22 == 3 )
      {
        *seName = 26;
        cutin_ordererror = this->fields.cutin_grand_b;
        goto LABEL_4;
      }
    }
    else if ( BattleCommand__isQUICK(combo->fields.flashtype, 0LL) )
    {
      v23 = combo->fields.samecount;
      if ( (unsigned int)(v23 - 1) < 2 )
      {
        cutin_ordererror = this->fields.cutin_trinity_q;
        goto LABEL_4;
      }
      if ( v23 == 3 )
      {
        *seName = 26;
        cutin_ordererror = this->fields.cutin_grand_q;
        goto LABEL_4;
      }
    }
  }
  else
  {
    if ( combo->fields.isMighty )
    {
      if ( BattleComboData__isExtraAttack(combo, 0LL) )
      {
        *seName = 26;
        cutin_ordererror = this->fields.cutin_grand_m;
      }
      else
      {
        *seName = 25;
        cutin_ordererror = this->fields.cutin_trinity_m;
      }
      goto LABEL_4;
    }
    if ( combo->fields.samecount == 3 )
    {
      *seName = 26;
      cutin_ordererror = this->fields.cutin_single;
      goto LABEL_4;
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceCommandCard__setCommandCard(
        BattlePerformanceCommandCard_o *this,
        BattleCommandData_array *list,
        int32_t maxdrawcount,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  struct BattleCommandData_array **p_commandlist; // x21
  __int64 ServantNumber; // x0
  BattleCommandData_o *v17; // x1
  struct BattleCommandData_array *commandlist; // x8
  unsigned __int64 v19; // x9
  unsigned __int64 max_length; // x10
  BattleCommandData_o *v21; // x10
  struct BattleCommandComponent_array *commandCompArray; // x8
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  struct BattleCommandComponent_array *v29; // x8
  _DWORD *v30; // x22
  unsigned int v31; // w25
  __int64 v32; // x26
  unsigned int v33; // w9
  System_Int32_array **v34; // x24
  __int64 *v35; // x23
  struct UnityEngine_Transform_array *commandTransformArray; // x8
  UnityEngine_Transform_o *v37; // x24
  int v38; // s0
  struct UnityEngine_Transform_array *v41; // x8
  UnityEngine_Transform_o *v42; // x24
  int v43; // s0
  UnityEngine_GameObject_o *gameObject; // x23
  struct BattleCommandData_array *v47; // x8
  __int64 v48; // x25
  unsigned int v49; // w28
  struct UnityEngine_Transform_array *v50; // x8
  UnityEngine_Transform_o *v51; // x23
  int v52; // s0
  struct UnityEngine_Transform_array *v55; // x8
  UnityEngine_Transform_o *v56; // x23
  int v57; // s0
  struct UnityEngine_GameObject_array *v60; // x8
  il2cpp_array_size_t v61; // w19
  System_String_array **v62; // x2
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  System_Int32_array **v68; // x24
  _DWORD *v69; // x23
  BattleServantConfConponent_o *v70; // x23
  struct BattleCommandData_array *v71; // x8
  BattleCommandData_o *v72; // x24
  BattleCommandComponent_o *klass; // x23
  struct UnityEngine_GameObject_array *v74; // x8
  UIWidget_o *Component_srcLineSprite; // x23
  float v76; // s4
  float v77; // s5
  float v78; // s6
  float v79; // s7
  struct System_Int32_array *selectcommand; // x9
  int32_t klass_high; // w22
  unsigned __int64 v82; // x8
  unsigned __int64 v83; // x11
  struct BattleCommandComponent_array *selectedcomponents; // x8
  unsigned __int64 v85; // x19
  __int64 v86; // x21
  unsigned __int64 v87; // x9
  WebViewObject_o *Component_WebViewObject; // x21
  int v89; // s0
  __int64 v93; // x0
  __int64 v94; // x0
  MethodInfo v95; // [xsp+0h] [xbp-70h] BYREF
  UnityEngine_Color_o v96; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v97; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4189DBB & 1) == 0 )
  {
    sub_B2C35C(&BattleCommandComponent___TypeInfo, list);
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_UIWidget___, v11);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_BattleCommandComponent___, v12);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_UIWidget___, v13);
    sub_B2C35C(&iTween_TypeInfo, v14);
    byte_4189DBB = 1;
  }
  p_commandlist = &this->fields.commandlist;
  this->fields.commandlist = list;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.commandlist,
    (System_Int32_array **)list,
    *(System_String_array ***)&maxdrawcount,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  commandlist = this->fields.commandlist;
  if ( !commandlist )
    goto LABEL_79;
  v19 = 0LL;
  while ( 1 )
  {
    max_length = commandlist->max_length;
    if ( (__int64)v19 >= (int)max_length )
      break;
    if ( v19 >= max_length )
      goto LABEL_84;
    v21 = commandlist->m_Items[v19];
    if ( v21 )
    {
      v21->fields.markindex = v19;
      commandlist = *p_commandlist;
    }
    ++v19;
    if ( !commandlist )
      goto LABEL_79;
  }
  commandCompArray = this->fields.commandCompArray;
  if ( !commandCompArray )
    goto LABEL_79;
  ServantNumber = sub_B2C374(BattleCommandComponent___TypeInfo, commandCompArray->max_length);
  v29 = this->fields.commandCompArray;
  if ( !v29 )
    goto LABEL_79;
  v30 = (_DWORD *)ServantNumber;
  v31 = 5;
  v32 = 18LL;
  while ( 1 )
  {
    v33 = v29->max_length;
    if ( (int)v31 >= (int)v33 )
      break;
    if ( v31 >= v33 )
      goto LABEL_84;
    if ( v30 )
    {
      v34 = *(System_Int32_array ***)((char *)&v29->obj.klass + v32 * 4);
      if ( v34 )
      {
        ServantNumber = sub_B2C41C(v34, *(_QWORD *)(*(_QWORD *)v30 + 64LL));
        if ( !ServantNumber )
        {
LABEL_85:
          v94 = sub_B2C454(ServantNumber);
          sub_B2C400(v94, 0LL);
        }
      }
      if ( v31 >= v30[6] )
        goto LABEL_84;
      v35 = (__int64 *)&v30[v32];
      *(_QWORD *)&v30[v32] = v34;
      sub_B2C2F8((BattleServantConfConponent_o *)&v30[v32], v34, v23, v24, v25, v26, v27, v28);
      if ( v31 >= v30[6] )
        goto LABEL_84;
      ServantNumber = *v35;
      if ( *v35 )
      {
        BattleCommandComponent__setData((BattleCommandComponent_o *)ServantNumber, 0LL, 0LL, 0, 1, 0, 0LL);
        commandTransformArray = this->fields.commandTransformArray;
        if ( commandTransformArray )
        {
          if ( v31 >= commandTransformArray->max_length )
            goto LABEL_84;
          v37 = *(UnityEngine_Transform_o **)((char *)&commandTransformArray->obj.klass + v32 * 4);
          *(UnityEngine_Vector3_o *)&v38 = UnityEngine_Vector3__get_zero(0LL);
          if ( v37 )
          {
            UnityEngine_Transform__set_localPosition(v37, *(UnityEngine_Vector3_o *)&v38, 0LL);
            v41 = this->fields.commandTransformArray;
            if ( v41 )
            {
              if ( v31 >= v41->max_length )
                goto LABEL_84;
              v42 = *(UnityEngine_Transform_o **)((char *)&v41->obj.klass + v32 * 4);
              *(UnityEngine_Vector3_o *)&v43 = UnityEngine_Vector3__get_zero(0LL);
              if ( v42 )
              {
                UnityEngine_Transform__set_localScale(v42, *(UnityEngine_Vector3_o *)&v43, 0LL);
                if ( v31 >= v30[6] )
                  goto LABEL_84;
                ServantNumber = *v35;
                if ( *v35 )
                {
                  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)ServantNumber, 0LL);
                  if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !iTween_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
                  }
                  iTween__Stop_42850528(gameObject, 0LL);
                  v29 = this->fields.commandCompArray;
                  ++v31;
                  v32 += 2LL;
                  if ( v29 )
                    continue;
                }
              }
            }
          }
        }
      }
    }
    goto LABEL_79;
  }
  v47 = *p_commandlist;
  HIDWORD(v95.klass) = maxdrawcount;
  if ( !v47 )
    goto LABEL_79;
  v48 = 4LL;
  while ( 1 )
  {
    v49 = v48 - 4;
    if ( (int)v48 - 4 >= (signed int)v47->max_length )
      break;
    v50 = this->fields.commandTransformArray;
    if ( !v50 )
      goto LABEL_79;
    if ( v49 >= v50->max_length )
      goto LABEL_84;
    v51 = (UnityEngine_Transform_o *)*((_QWORD *)&v50->obj.klass + v48);
    *(UnityEngine_Vector3_o *)&v52 = UnityEngine_Vector3__get_zero(0LL);
    if ( !v51 )
      goto LABEL_79;
    UnityEngine_Transform__set_localPosition(v51, *(UnityEngine_Vector3_o *)&v52, 0LL);
    v55 = this->fields.commandTransformArray;
    if ( !v55 )
      goto LABEL_79;
    if ( v49 >= v55->max_length )
      goto LABEL_84;
    v56 = (UnityEngine_Transform_o *)*((_QWORD *)&v55->obj.klass + v48);
    *(UnityEngine_Vector3_o *)&v57 = UnityEngine_Vector3__get_one(0LL);
    if ( !v56 )
      goto LABEL_79;
    UnityEngine_Transform__set_localScale(v56, *(UnityEngine_Vector3_o *)&v57, 0LL);
    v47 = *p_commandlist;
    if ( !*p_commandlist )
      goto LABEL_79;
    if ( v49 >= v47->max_length )
      goto LABEL_84;
    if ( v49 >= 5 )
    {
      v17 = (BattleCommandData_o *)*((_QWORD *)&v47->obj.klass + v48);
      if ( v17 )
      {
        ServantNumber = BattlePerformanceCommandCard__GetServantNumber(this, v17, (const MethodInfo *)v23);
        v60 = this->fields.p_commandlist;
        if ( !v60 )
          goto LABEL_79;
        v61 = ServantNumber + 5;
        if ( (unsigned int)(ServantNumber + 5) >= v60->max_length )
          goto LABEL_84;
        ServantNumber = (__int64)v60->m_Items[v61];
        if ( !ServantNumber )
          goto LABEL_79;
        ServantNumber = (__int64)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                   (UnityEngine_GameObject_o *)ServantNumber,
                                   (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_BattleCommandComponent___);
        if ( !v30 )
          goto LABEL_79;
        v68 = (System_Int32_array **)ServantNumber;
        if ( ServantNumber )
        {
          ServantNumber = sub_B2C41C(ServantNumber, *(_QWORD *)(*(_QWORD *)v30 + 64LL));
          if ( !ServantNumber )
            goto LABEL_85;
        }
        if ( v61 >= v30[6] )
          goto LABEL_84;
        v69 = &v30[2 * v61];
        *((_QWORD *)v69 + 4) = v68;
        v70 = (BattleServantConfConponent_o *)(v69 + 8);
        sub_B2C2F8(v70, v68, v62, v63, v64, v65, v66, v67);
        if ( v61 >= v30[6] )
          goto LABEL_84;
        v71 = *p_commandlist;
        if ( !*p_commandlist )
          goto LABEL_79;
        if ( v49 >= v71->max_length )
          goto LABEL_84;
        v72 = (BattleCommandData_o *)*((_QWORD *)&v71->obj.klass + v48);
        if ( !v72 )
          goto LABEL_79;
        ServantNumber = (__int64)this->fields.Bdata;
        if ( !ServantNumber )
          goto LABEL_79;
        klass = (BattleCommandComponent_o *)v70->klass;
        ServantNumber = (__int64)BattleData__getServantData((BattleData_o *)ServantNumber, v72->fields.uniqueId, 0LL);
        if ( !klass )
          goto LABEL_79;
        BattleCommandComponent__setData(klass, v72, (BattleServantData_o *)ServantNumber, 0, 1, 0, 0LL);
        v74 = this->fields.p_commandlist;
        if ( !v74 )
          goto LABEL_79;
        if ( v61 >= v74->max_length )
          goto LABEL_84;
        ServantNumber = (__int64)v74->m_Items[v61];
        if ( !ServantNumber )
          goto LABEL_79;
        Component_srcLineSprite = (UIWidget_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                  (UnityEngine_GameObject_o *)ServantNumber,
                                                  (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
        v96.fields.r = 0.0;
        v96.fields.g = 0.0;
        v96.fields.b = 0.0;
        v96.fields.a = 0.01;
        v95.methodPointer = 0LL;
        v95.invoker_method = 0LL;
        UnityEngine_Color___ctor(v96, v76, v77, v78, v79, &v95);
        if ( !Component_srcLineSprite )
          goto LABEL_79;
        *(_QWORD *)&v97.fields.r = v95.methodPointer;
        *(_QWORD *)&v97.fields.b = v95.invoker_method;
        UIWidget__set_color(Component_srcLineSprite, v97, 0LL);
        v47 = *p_commandlist;
      }
    }
    ++v48;
    if ( !v47 )
      goto LABEL_79;
  }
  selectcommand = this->fields.selectcommand;
  klass_high = HIDWORD(v95.klass);
  if ( !selectcommand )
    goto LABEL_79;
  v82 = 0LL;
  while ( 1 )
  {
    v83 = selectcommand->max_length;
    if ( (__int64)v82 >= (int)v83 )
      break;
    if ( v82 >= v83 )
      goto LABEL_84;
    selectcommand->m_Items[v82 + 1] = -1;
    selectcommand = this->fields.selectcommand;
    ++v82;
    if ( !selectcommand )
      goto LABEL_79;
  }
  selectedcomponents = this->fields.selectedcomponents;
  if ( !selectedcomponents )
    goto LABEL_79;
  v85 = 0LL;
  v86 = 32LL;
  while ( 1 )
  {
    v87 = selectedcomponents->max_length;
    if ( v85 >= 3 )
      break;
    if ( v85 >= v87 )
      goto LABEL_84;
    *(Il2CppClass **)((char *)&selectedcomponents->obj.klass + v86) = 0LL;
    sub_B2C2F8((BattleServantConfConponent_o *)((char *)selectedcomponents + v86), 0LL, v23, v24, v25, v26, v27, v28);
    selectedcomponents = this->fields.selectedcomponents;
    ++v85;
    v86 += 8LL;
    if ( !selectedcomponents )
      goto LABEL_79;
  }
  if ( (unsigned int)v87 <= 3 )
  {
LABEL_84:
    v93 = sub_B2C460(ServantNumber);
    sub_B2C400(v93, 0LL);
  }
  ServantNumber = (__int64)selectedcomponents->m_Items[3];
  if ( !ServantNumber
    || (Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                                    (UnityEngine_Component_o *)ServantNumber,
                                    (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_UIWidget___),
        *(UnityEngine_Color_o *)&v89 = UnityEngine_Color__get_clear(0LL),
        !Component_WebViewObject) )
  {
LABEL_79:
    sub_B2C434(ServantNumber, v17);
  }
  UIWidget__set_color((UIWidget_o *)Component_WebViewObject, *(UnityEngine_Color_o *)&v89, 0LL);
  this->fields.drawcount = 0;
  this->fields.maxdrawcount = klass_high;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceCommandCard__setCountRemaining(
        BattlePerformanceCommandCard_o *this,
        int32_t count,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_Object_o *selectinfo_sprite; // x21
  UISprite_o *v8; // x20
  Il2CppObject *v9; // x0
  System_String_o *v10; // x0
  __int64 v11; // x1
  int32_t v12; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_4189DD9 & 1) == 0 )
  {
    sub_B2C35C(&int_TypeInfo, *(_QWORD *)&count);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v5);
    sub_B2C35C(&StringLiteral_19427/*"img_battle_select{0:0}"*/, v6);
    byte_4189DD9 = 1;
  }
  selectinfo_sprite = (UnityEngine_Object_o *)this->fields.selectinfo_sprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(selectinfo_sprite, 0LL, 0LL) )
  {
    v8 = this->fields.selectinfo_sprite;
    v12 = count;
    v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v12);
    v10 = System_String__Format((System_String_o *)StringLiteral_19427/*"img_battle_select{0:0}"*/, v9, 0LL);
    if ( !v8 )
      sub_B2C434(v10, v11);
    UISprite__set_spriteName(v8, v10, 0LL);
  }
}


void __fastcall BattlePerformanceCommandCard__setFirstAura(
        BattlePerformanceCommandCard_o *this,
        BattleCommandComponent_o *comp,
        int32_t type,
        const MethodInfo *method)
{
  _BOOL8 isQUICK; // x0
  __int64 v8; // x1
  UnityEngine_GameObject_o *firstaura_q; // x1

  isQUICK = BattleCommand__isQUICK(type, 0LL);
  if ( isQUICK )
  {
    if ( comp )
    {
      firstaura_q = this->fields.firstaura_q;
LABEL_10:
      BattleCommandComponent__addFirstAura(comp, firstaura_q, 0LL);
      return;
    }
    goto LABEL_12;
  }
  isQUICK = BattleCommand__isARTS(type, 0LL);
  if ( isQUICK )
  {
    if ( comp )
    {
      firstaura_q = this->fields.firstaura_a;
      goto LABEL_10;
    }
LABEL_12:
    sub_B2C434(isQUICK, v8);
  }
  isQUICK = BattleCommand__isBUSTER(type, 0LL);
  if ( isQUICK )
  {
    if ( comp )
    {
      firstaura_q = this->fields.firstaura_b;
      goto LABEL_10;
    }
    goto LABEL_12;
  }
}


void __fastcall BattlePerformanceCommandCard__setPrevStarsFlg(
        BattlePerformanceCommandCard_o *this,
        bool flg,
        const MethodInfo *method)
{
  this->fields.isPrevStar = flg;
}


void __fastcall BattlePerformanceCommandCard__set_IsPlayingBackStar(
        BattlePerformanceCommandCard_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsPlayingBackStar_k__BackingField = value;
}


System_Collections_IEnumerator_o *__fastcall BattlePerformanceCommandCard__showComboEffect(
        BattlePerformanceCommandCard_o *this,
        BattleComboData_o *combo,
        System_String_o *endproc,
        const MethodInfo *method)
{
  __int64 v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7

  if ( (byte_4189DCE & 1) == 0 )
  {
    sub_B2C35C(&BattlePerformanceCommandCard__showComboEffect_d__133_TypeInfo, combo);
    byte_4189DCE = 1;
  }
  v7 = sub_B2C42C(BattlePerformanceCommandCard__showComboEffect_d__133_TypeInfo);
  BattlePerformanceCommandCard__showComboEffect_d__133___ctor(
    (BattlePerformanceCommandCard__showComboEffect_d__133_o *)v7,
    0,
    0LL);
  if ( !v7 )
    sub_B2C434(v8, v9);
  *(_QWORD *)(v7 + 32) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v7 + 32), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 40) = combo;
  sub_B2C2F8((BattleServantConfConponent_o *)(v7 + 40), (System_Int32_array **)combo, v16, v17, v18, v19, v20, v21);
  *(_QWORD *)(v7 + 48) = endproc;
  sub_B2C2F8((BattleServantConfConponent_o *)(v7 + 48), (System_Int32_array **)endproc, v22, v23, v24, v25, v26, v27);
  return (System_Collections_IEnumerator_o *)v7;
}


System_Collections_IEnumerator_o *__fastcall BattlePerformanceCommandCard__showComboEffectNormal(
        BattlePerformanceCommandCard_o *this,
        BattleComboData_o *combo,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7

  if ( (byte_4189DD0 & 1) == 0 )
  {
    sub_B2C35C(&BattlePerformanceCommandCard__showComboEffectNormal_d__135_TypeInfo, combo);
    byte_4189DD0 = 1;
  }
  v5 = sub_B2C42C(BattlePerformanceCommandCard__showComboEffectNormal_d__135_TypeInfo);
  BattlePerformanceCommandCard__showComboEffectNormal_d__135___ctor(
    (BattlePerformanceCommandCard__showComboEffectNormal_d__135_o *)v5,
    0,
    0LL);
  if ( !v5 )
    sub_B2C434(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v5 + 32), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 40) = combo;
  sub_B2C2F8((BattleServantConfConponent_o *)(v5 + 40), (System_Int32_array **)combo, v14, v15, v16, v17, v18, v19);
  return (System_Collections_IEnumerator_o *)v5;
}


System_Collections_IEnumerator_o *__fastcall BattlePerformanceCommandCard__showComboEffectShort(
        BattlePerformanceCommandCard_o *this,
        BattleComboData_o *combo,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7

  if ( (byte_4189DCF & 1) == 0 )
  {
    sub_B2C35C(&BattlePerformanceCommandCard__showComboEffectShort_d__134_TypeInfo, combo);
    byte_4189DCF = 1;
  }
  v5 = sub_B2C42C(BattlePerformanceCommandCard__showComboEffectShort_d__134_TypeInfo);
  BattlePerformanceCommandCard__showComboEffectShort_d__134___ctor(
    (BattlePerformanceCommandCard__showComboEffectShort_d__134_o *)v5,
    0,
    0LL);
  if ( !v5 )
    sub_B2C434(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v5 + 32), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 40) = combo;
  sub_B2C2F8((BattleServantConfConponent_o *)(v5 + 40), (System_Int32_array **)combo, v14, v15, v16, v17, v18, v19);
  return (System_Collections_IEnumerator_o *)v5;
}


void __fastcall BattlePerformanceCommandCard__startComboEffect(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  BattlePerformanceCommandCard_o *v3; // x19
  struct BattlePerformance_o *perf; // x8
  struct BattleData_o *data; // x8
  System_Collections_IEnumerator_o *v6; // x1

  v3 = this;
  if ( (byte_4189DCD & 1) == 0 )
  {
    this = (BattlePerformanceCommandCard_o *)sub_B2C35C(&StringLiteral_5496/*"END_PROC"*/, method);
    byte_4189DCD = 1;
  }
  perf = v3->fields.perf;
  if ( !perf || (data = perf->fields.data) == 0LL )
    sub_B2C434(this, method);
  v6 = BattlePerformanceCommandCard__showComboEffect(
         v3,
         data->fields.combodata,
         (System_String_o *)StringLiteral_5496/*"END_PROC"*/,
         v2);
  UnityEngine_MonoBehaviour__StartCoroutine_35309748((UnityEngine_MonoBehaviour_o *)v3, v6, 0LL);
}


void __fastcall BattlePerformanceCommandCard__startFirstBonus(
        BattlePerformanceCommandCard_o *this,
        int32_t type,
        const MethodInfo *method)
{
  System_Collections_IEnumerator_o *started; // x1

  started = BattlePerformanceCommandCard__coStartFirstBonus(this, type, method);
  UnityEngine_MonoBehaviour__StartCoroutine_35309748((UnityEngine_MonoBehaviour_o *)this, started, 0LL);
}


void __fastcall BattlePerformanceCommandCard__startMiniCard(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  BattlePerformanceCommandCard_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x23
  struct BattleCommandComponent_array *selectedcomponents; // x8
  il2cpp_array_size_t v13; // w25
  struct BattleCommandComponent_array *v14; // x8
  struct BattleCommandComponent_array *v15; // x8
  struct BattleCommandComponent_array *v16; // x8
  UnityEngine_GameObject_o *gameObject; // x20
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  BattlePerformanceCommandCard_o *v24; // x21
  System_Int32_array **v25; // x1
  struct UnityEngine_Transform_array *miniPos; // x8
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_Int32_array **v33; // x22
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  System_Int32_array **v40; // x1
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  System_Int32_array **v47; // x22
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  System_Int32_array **v54; // x1
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  System_Int32_array **v61; // x22
  System_Collections_Hashtable_o *v62; // x0
  struct BattleCommandComponent_array *v63; // x8
  UnityEngine_GameObject_o *v64; // x20
  System_String_array **v65; // x2
  System_String_array **v66; // x3
  System_Boolean_array **v67; // x4
  System_Int32_array **v68; // x5
  System_Int32_array *v69; // x6
  System_Int32_array *v70; // x7
  BattlePerformanceCommandCard_o *v71; // x21
  System_Int32_array **v72; // x1
  int z_low; // w9
  System_String_array **v74; // x2
  System_String_array **v75; // x3
  System_Boolean_array **v76; // x4
  System_Int32_array **v77; // x5
  System_Int32_array *v78; // x6
  System_Int32_array *v79; // x7
  System_Int32_array **v80; // x22
  System_String_array **v81; // x2
  System_String_array **v82; // x3
  System_Boolean_array **v83; // x4
  System_Int32_array **v84; // x5
  System_Int32_array *v85; // x6
  System_Int32_array *v86; // x7
  System_Int32_array **v87; // x1
  System_String_array **v88; // x2
  System_String_array **v89; // x3
  System_Boolean_array **v90; // x4
  System_Int32_array **v91; // x5
  System_Int32_array *v92; // x6
  System_Int32_array *v93; // x7
  System_Int32_array **v94; // x22
  System_String_array **v95; // x2
  System_String_array **v96; // x3
  System_Boolean_array **v97; // x4
  System_Int32_array **v98; // x5
  System_Int32_array *v99; // x6
  System_Int32_array *v100; // x7
  System_Int32_array **v101; // x1
  System_String_array **v102; // x2
  System_String_array **v103; // x3
  System_Boolean_array **v104; // x4
  System_Int32_array **v105; // x5
  System_Int32_array *v106; // x6
  System_Int32_array *v107; // x7
  System_Int32_array **v108; // x22
  System_Collections_Hashtable_o *v109; // x0
  __int64 v110; // x0
  __int64 v111; // x0
  int v112; // [xsp+0h] [xbp-80h] BYREF
  int v113; // [xsp+4h] [xbp-7Ch] BYREF
  __int64 v114; // [xsp+8h] [xbp-78h] BYREF
  int v115; // [xsp+10h] [xbp-70h]
  int v116; // [xsp+18h] [xbp-68h] BYREF
  int v117; // [xsp+1Ch] [xbp-64h] BYREF
  UnityEngine_Vector3_o position; // [xsp+20h] [xbp-60h] BYREF

  v2 = this;
  if ( (byte_4189DDA & 1) == 0 )
  {
    sub_B2C35C(&iTween_EaseType_TypeInfo, method);
    sub_B2C35C(&object___TypeInfo, v3);
    sub_B2C35C(&float_TypeInfo, v4);
    sub_B2C35C(&UnityEngine_Vector3_TypeInfo, v5);
    sub_B2C35C(&StringLiteral_18114/*"easetype"*/, v6);
    sub_B2C35C(&StringLiteral_22677/*"time"*/, v7);
    sub_B2C35C(&StringLiteral_21511/*"position"*/, v8);
    sub_B2C35C(&StringLiteral_21895/*"scale"*/, v9);
    this = (BattlePerformanceCommandCard_o *)sub_B2C35C(&iTween_TypeInfo, v10);
    byte_4189DDA = 1;
  }
  v11 = 4LL;
  do
  {
    selectedcomponents = v2->fields.selectedcomponents;
    if ( !selectedcomponents )
      goto LABEL_78;
    v13 = v11 - 4;
    if ( (unsigned int)(v11 - 4) >= selectedcomponents->max_length )
      goto LABEL_77;
    this = (BattlePerformanceCommandCard_o *)*((_QWORD *)&selectedcomponents->obj.klass + v11);
    if ( !this )
      goto LABEL_78;
    BattleCommandComponent__setMoveMode((BattleCommandComponent_o *)this, 0LL);
    v14 = v2->fields.selectedcomponents;
    if ( !v14 )
      goto LABEL_78;
    if ( v13 >= v14->max_length )
      goto LABEL_77;
    this = (BattlePerformanceCommandCard_o *)*((_QWORD *)&v14->obj.klass + v11);
    if ( !this )
      goto LABEL_78;
    BattleCommandComponent__SetCardBuffAlphaAnimFlag((BattleCommandComponent_o *)this, 0, 0LL);
    v15 = v2->fields.selectedcomponents;
    if ( !v15 )
      goto LABEL_78;
    if ( v13 >= v15->max_length )
      goto LABEL_77;
    this = (BattlePerformanceCommandCard_o *)*((_QWORD *)&v15->obj.klass + v11);
    if ( !this )
      goto LABEL_78;
    BattleCommandComponent__SetTreasureDeviceTypeChange((BattleCommandComponent_o *)this, 0, 0, 0LL);
    v16 = v2->fields.selectedcomponents;
    if ( !v16 )
      goto LABEL_78;
    if ( v13 >= v16->max_length )
      goto LABEL_77;
    this = (BattlePerformanceCommandCard_o *)*((_QWORD *)&v16->obj.klass + v11);
    if ( !this )
      goto LABEL_78;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    this = (BattlePerformanceCommandCard_o *)sub_B2C374(object___TypeInfo, 6LL);
    if ( !this )
      goto LABEL_78;
    v24 = this;
    this = (BattlePerformanceCommandCard_o *)StringLiteral_21511/*"position"*/;
    if ( StringLiteral_21511/*"position"*/ )
    {
      this = (BattlePerformanceCommandCard_o *)sub_B2C41C(StringLiteral_21511/*"position"*/, v24->klass->_1.element_class);
      if ( !this )
        goto LABEL_79;
      v25 = (System_Int32_array **)StringLiteral_21511/*"position"*/;
    }
    else
    {
      v25 = 0LL;
    }
    if ( !LODWORD(v24->fields.COMMAND_STAMP_POS_X) )
      goto LABEL_77;
    *(_QWORD *)&v24->fields.COMMAND_STAMP_POS_Y = v25;
    sub_B2C2F8((BattleServantConfConponent_o *)&v24->fields.COMMAND_STAMP_POS_Y, v25, v18, v19, v20, v21, v22, v23);
    miniPos = v2->fields.miniPos;
    if ( !miniPos )
      goto LABEL_78;
    if ( v13 >= miniPos->max_length )
      goto LABEL_77;
    this = (BattlePerformanceCommandCard_o *)*((_QWORD *)&miniPos->obj.klass + v11);
    if ( !this )
      goto LABEL_78;
    position = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)this, 0LL);
    this = (BattlePerformanceCommandCard_o *)j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, &position);
    v33 = (System_Int32_array **)this;
    if ( this )
    {
      this = (BattlePerformanceCommandCard_o *)sub_B2C41C(this, v24->klass->_1.element_class);
      if ( !this )
      {
LABEL_79:
        v111 = sub_B2C454(this);
        sub_B2C400(v111, 0LL);
      }
    }
    if ( LODWORD(v24->fields.COMMAND_STAMP_POS_X) <= 1 )
      goto LABEL_77;
    *(_QWORD *)&v24->fields.CARD_ROOT_BASE_X = v33;
    sub_B2C2F8((BattleServantConfConponent_o *)&v24->fields.CARD_ROOT_BASE_X, v33, v27, v28, v29, v30, v31, v32);
    this = (BattlePerformanceCommandCard_o *)StringLiteral_22677/*"time"*/;
    if ( StringLiteral_22677/*"time"*/ )
    {
      this = (BattlePerformanceCommandCard_o *)sub_B2C41C(StringLiteral_22677/*"time"*/, v24->klass->_1.element_class);
      if ( !this )
        goto LABEL_79;
      v40 = (System_Int32_array **)StringLiteral_22677/*"time"*/;
    }
    else
    {
      v40 = 0LL;
    }
    if ( LODWORD(v24->fields.COMMAND_STAMP_POS_X) <= 2 )
      goto LABEL_77;
    v24->fields.commandfsm = (struct PlayMakerFSM_o *)v40;
    sub_B2C2F8((BattleServantConfConponent_o *)&v24->fields.commandfsm, v40, v34, v35, v36, v37, v38, v39);
    v117 = 1045220557;
    this = (BattlePerformanceCommandCard_o *)j_il2cpp_value_box_0(float_TypeInfo, &v117);
    v47 = (System_Int32_array **)this;
    if ( this )
    {
      this = (BattlePerformanceCommandCard_o *)sub_B2C41C(this, v24->klass->_1.element_class);
      if ( !this )
        goto LABEL_79;
    }
    if ( LODWORD(v24->fields.COMMAND_STAMP_POS_X) <= 3 )
      goto LABEL_77;
    v24->fields.commandprefab = (struct UnityEngine_GameObject_o *)v47;
    sub_B2C2F8((BattleServantConfConponent_o *)&v24->fields.commandprefab, v47, v41, v42, v43, v44, v45, v46);
    this = (BattlePerformanceCommandCard_o *)StringLiteral_18114/*"easetype"*/;
    if ( StringLiteral_18114/*"easetype"*/ )
    {
      this = (BattlePerformanceCommandCard_o *)sub_B2C41C(StringLiteral_18114/*"easetype"*/, v24->klass->_1.element_class);
      if ( !this )
        goto LABEL_79;
      v54 = (System_Int32_array **)StringLiteral_18114/*"easetype"*/;
    }
    else
    {
      v54 = 0LL;
    }
    if ( LODWORD(v24->fields.COMMAND_STAMP_POS_X) <= 4 )
    {
LABEL_77:
      v110 = sub_B2C460(this);
      sub_B2C400(v110, 0LL);
    }
    v24->fields.selectCommandPrefab = (struct UnityEngine_GameObject_o *)v54;
    sub_B2C2F8((BattleServantConfConponent_o *)&v24->fields.selectCommandPrefab, v54, v48, v49, v50, v51, v52, v53);
    v116 = 21;
    this = (BattlePerformanceCommandCard_o *)j_il2cpp_value_box_0(iTween_EaseType_TypeInfo, &v116);
    v61 = (System_Int32_array **)this;
    if ( this )
    {
      this = (BattlePerformanceCommandCard_o *)sub_B2C41C(this, v24->klass->_1.element_class);
      if ( !this )
        goto LABEL_79;
    }
    if ( LODWORD(v24->fields.COMMAND_STAMP_POS_X) <= 5 )
      goto LABEL_77;
    v24->fields.commandrootTransform = (struct UnityEngine_Transform_o *)v61;
    sub_B2C2F8((BattleServantConfConponent_o *)&v24->fields.commandrootTransform, v61, v55, v56, v57, v58, v59, v60);
    if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
    v62 = iTween__Hash((System_Object_array *)v24, 0LL);
    iTween__MoveTo_42732664(gameObject, v62, 0LL);
    v63 = v2->fields.selectedcomponents;
    if ( !v63 )
      goto LABEL_78;
    if ( v13 >= v63->max_length )
      goto LABEL_77;
    this = (BattlePerformanceCommandCard_o *)*((_QWORD *)&v63->obj.klass + v11);
    if ( !this
      || (v64 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL),
          (this = (BattlePerformanceCommandCard_o *)sub_B2C374(object___TypeInfo, 6LL)) == 0LL) )
    {
LABEL_78:
      sub_B2C434(this, method);
    }
    v71 = this;
    this = (BattlePerformanceCommandCard_o *)StringLiteral_21895/*"scale"*/;
    if ( StringLiteral_21895/*"scale"*/ )
    {
      this = (BattlePerformanceCommandCard_o *)sub_B2C41C(StringLiteral_21895/*"scale"*/, v71->klass->_1.element_class);
      if ( !this )
        goto LABEL_79;
      v72 = (System_Int32_array **)StringLiteral_21895/*"scale"*/;
    }
    else
    {
      v72 = 0LL;
    }
    if ( !LODWORD(v71->fields.COMMAND_STAMP_POS_X) )
      goto LABEL_77;
    *(_QWORD *)&v71->fields.COMMAND_STAMP_POS_Y = v72;
    sub_B2C2F8((BattleServantConfConponent_o *)&v71->fields.COMMAND_STAMP_POS_Y, v72, v65, v66, v67, v68, v69, v70);
    z_low = LODWORD(v2->fields.miniScale.fields.z);
    v114 = *(_QWORD *)&v2->fields.miniScale.fields.x;
    v115 = z_low;
    this = (BattlePerformanceCommandCard_o *)j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, &v114);
    v80 = (System_Int32_array **)this;
    if ( this )
    {
      this = (BattlePerformanceCommandCard_o *)sub_B2C41C(this, v71->klass->_1.element_class);
      if ( !this )
        goto LABEL_79;
    }
    if ( LODWORD(v71->fields.COMMAND_STAMP_POS_X) <= 1 )
      goto LABEL_77;
    *(_QWORD *)&v71->fields.CARD_ROOT_BASE_X = v80;
    sub_B2C2F8((BattleServantConfConponent_o *)&v71->fields.CARD_ROOT_BASE_X, v80, v74, v75, v76, v77, v78, v79);
    this = (BattlePerformanceCommandCard_o *)StringLiteral_22677/*"time"*/;
    if ( StringLiteral_22677/*"time"*/ )
    {
      this = (BattlePerformanceCommandCard_o *)sub_B2C41C(StringLiteral_22677/*"time"*/, v71->klass->_1.element_class);
      if ( !this )
        goto LABEL_79;
      v87 = (System_Int32_array **)StringLiteral_22677/*"time"*/;
    }
    else
    {
      v87 = 0LL;
    }
    if ( LODWORD(v71->fields.COMMAND_STAMP_POS_X) <= 2 )
      goto LABEL_77;
    v71->fields.commandfsm = (struct PlayMakerFSM_o *)v87;
    sub_B2C2F8((BattleServantConfConponent_o *)&v71->fields.commandfsm, v87, v81, v82, v83, v84, v85, v86);
    v113 = 1045220557;
    this = (BattlePerformanceCommandCard_o *)j_il2cpp_value_box_0(float_TypeInfo, &v113);
    v94 = (System_Int32_array **)this;
    if ( this )
    {
      this = (BattlePerformanceCommandCard_o *)sub_B2C41C(this, v71->klass->_1.element_class);
      if ( !this )
        goto LABEL_79;
    }
    if ( LODWORD(v71->fields.COMMAND_STAMP_POS_X) <= 3 )
      goto LABEL_77;
    v71->fields.commandprefab = (struct UnityEngine_GameObject_o *)v94;
    sub_B2C2F8((BattleServantConfConponent_o *)&v71->fields.commandprefab, v94, v88, v89, v90, v91, v92, v93);
    this = (BattlePerformanceCommandCard_o *)StringLiteral_18114/*"easetype"*/;
    if ( StringLiteral_18114/*"easetype"*/ )
    {
      this = (BattlePerformanceCommandCard_o *)sub_B2C41C(StringLiteral_18114/*"easetype"*/, v71->klass->_1.element_class);
      if ( !this )
        goto LABEL_79;
      v101 = (System_Int32_array **)StringLiteral_18114/*"easetype"*/;
    }
    else
    {
      v101 = 0LL;
    }
    if ( LODWORD(v71->fields.COMMAND_STAMP_POS_X) <= 4 )
      goto LABEL_77;
    v71->fields.selectCommandPrefab = (struct UnityEngine_GameObject_o *)v101;
    sub_B2C2F8((BattleServantConfConponent_o *)&v71->fields.selectCommandPrefab, v101, v95, v96, v97, v98, v99, v100);
    v112 = 21;
    this = (BattlePerformanceCommandCard_o *)j_il2cpp_value_box_0(iTween_EaseType_TypeInfo, &v112);
    v108 = (System_Int32_array **)this;
    if ( this )
    {
      this = (BattlePerformanceCommandCard_o *)sub_B2C41C(this, v71->klass->_1.element_class);
      if ( !this )
        goto LABEL_79;
    }
    if ( LODWORD(v71->fields.COMMAND_STAMP_POS_X) <= 5 )
      goto LABEL_77;
    v71->fields.commandrootTransform = (struct UnityEngine_Transform_o *)v108;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v71->fields.commandrootTransform,
      v108,
      v102,
      v103,
      v104,
      v105,
      v106,
      v107);
    v109 = iTween__Hash((System_Object_array *)v71, 0LL);
    iTween__ScaleTo_42738364(v64, v109, 0LL);
    ++v11;
  }
  while ( (unsigned int)(v11 - 5) < 3 );
}


void __fastcall BattlePerformanceCommandCard__startOpenNpCard(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  System_Collections_IEnumerator_o *v3; // x0
  struct UnityEngine_Coroutine_o *started; // x1
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  v3 = BattlePerformanceCommandCard__colOpenNpCard(this, method);
  started = UnityEngine_MonoBehaviour__StartCoroutine_35309748((UnityEngine_MonoBehaviour_o *)this, v3, 0LL);
  this->fields.openNpCoroutine = started;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.openNpCoroutine,
    (System_Int32_array **)started,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


void __fastcall BattlePerformanceCommandCard__stopFirstBonus(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *firstBonusObject; // x20
  __int64 v4; // x1
  Spawner_o *spawner; // x0

  if ( (byte_4189DC7 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_4189DC7 = 1;
  }
  firstBonusObject = (UnityEngine_Object_o *)this->fields.firstBonusObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(firstBonusObject, 0LL, 0LL) )
  {
    spawner = this->fields.spawner;
    if ( !spawner )
      sub_B2C434(0LL, v4);
    Spawner__Despawn(spawner, this->fields.firstBonusObject, 1, 0LL);
  }
}


void __fastcall BattlePerformanceCommandCard__toggleHighSpeedMode(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  BattleData_o *data; // x0
  __int64 v4; // x1
  struct BattlePerformance_o *perf; // x8
  int32_t v6; // w1
  const MethodInfo *v7; // x2

  if ( (byte_4189DFE & 1) == 0 )
  {
    sub_B2C35C(&SeManager_TypeInfo, method);
    byte_4189DFE = 1;
  }
  data = (BattleData_o *)BattlePerformanceCommandCard__checkSpeedButtonTutorial(this, method);
  if ( ((unsigned __int8)data & 1) == 0 )
  {
    perf = this->fields.perf;
    if ( !perf || (data = perf->fields.data) == 0LL )
      sub_B2C434(data, v4);
    BattleData__toggleHighSpeedMode(data, 0LL);
    if ( (BYTE3(SeManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SeManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
    SeManager__PlayCommonSe(9, 0LL);
    BattlePerformanceCommandCard__updateHighSpeedObject(this, v6, v7);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceCommandCard__touchCommandCard(
        BattlePerformanceCommandCard_o *this,
        int32_t markindex,
        const MethodInfo *method)
{
  __int64 v5; // x1
  BattleLogic_o *logic; // x0
  int v7; // w21
  struct BattleData_o *Bdata; // x8
  struct BattleCommandComponent_array *commandCompArray; // x8
  __int64 v10; // x22
  int max_length; // w9
  Il2CppClass **v12; // x8
  Il2CppClass *v13; // x21
  const MethodInfo *v14; // x2
  struct BattleData_o *v15; // x8
  __int64 v16; // x0

  if ( (byte_4189DBE & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_20377/*"markindex"*/, *(_QWORD *)&markindex);
    sub_B2C35C(&StringLiteral_11617/*"SELECTCARD"*/, v5);
    byte_4189DBE = 1;
  }
  logic = this->fields.logic;
  if ( !logic )
    goto LABEL_30;
  logic = (BattleLogic_o *)BattleLogic__getTutorialId(logic, 0LL);
  if ( !this->fields.logic )
    goto LABEL_30;
  v7 = (int)logic;
  logic = (BattleLogic_o *)BattleLogic__getTurn(this->fields.logic, 0LL);
  if ( this->fields.isTouchNgInTutorial )
    return;
  if ( v7 == 1 )
  {
    if ( (unsigned int)((_DWORD)logic - 1) >= 3 )
    {
      if ( (_DWORD)logic == 5 && ((unsigned int)markindex > 5 || ((1 << markindex) & 0x23) == 0) )
        return;
    }
    else if ( (unsigned int)markindex >= 3 )
    {
      return;
    }
  }
  else if ( (v7 & 0xFFFFFFFE) == 2 )
  {
    if ( v7 == 2 && (_DWORD)logic == 2 )
    {
      Bdata = this->fields.Bdata;
      if ( !Bdata )
        goto LABEL_30;
      if ( (unsigned int)markindex > 2 || Bdata->fields.tutorialState == 10 )
        return;
    }
    else if ( (unsigned int)markindex > 2 )
    {
      return;
    }
  }
  commandCompArray = this->fields.commandCompArray;
  if ( !commandCompArray )
    goto LABEL_30;
  v10 = 0LL;
  while ( 1 )
  {
    max_length = commandCompArray->max_length;
    if ( (int)v10 >= max_length )
      return;
    if ( (unsigned int)v10 >= max_length )
    {
      v16 = sub_B2C460(logic);
      sub_B2C400(v16, 0LL);
    }
    v12 = &commandCompArray->obj.klass + v10;
    v13 = v12[4];
    if ( !v13 )
      goto LABEL_30;
    logic = (BattleLogic_o *)BattleCommandComponent__checkMark((BattleCommandComponent_o *)v12[4], markindex, 0LL);
    if ( ((unsigned __int8)logic & 1) != 0 )
      break;
    commandCompArray = this->fields.commandCompArray;
    ++v10;
    if ( !commandCompArray )
      goto LABEL_30;
  }
  v15 = this->fields.Bdata;
  if ( !v15 )
    goto LABEL_30;
  if ( v15->fields.systemflg_selectcancel || !BYTE4(v13->vtable[4].method) )
  {
    if ( this->fields.directCommandCardTouchEnable )
    {
      BattlePerformanceCommandCard__selectOK(this, markindex, v14);
      return;
    }
    logic = (BattleLogic_o *)this->fields.commandfsm;
    if ( logic )
    {
      logic = (BattleLogic_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)logic, 0LL);
      if ( logic )
      {
        logic = (BattleLogic_o *)logic->fields.funclist;
        if ( logic )
        {
          logic = (BattleLogic_o *)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                     (HutongGames_PlayMaker_FsmVariables_o *)logic,
                                     (System_String_o *)StringLiteral_20377/*"markindex"*/,
                                     0LL);
          if ( logic )
          {
            LODWORD(logic->fields.brandom) = markindex;
            logic = (BattleLogic_o *)this->fields.commandfsm;
            if ( logic )
            {
              PlayMakerFSM__SendEvent((PlayMakerFSM_o *)logic, (System_String_o *)StringLiteral_11617/*"SELECTCARD"*/, 0LL);
              return;
            }
          }
        }
      }
    }
LABEL_30:
    sub_B2C434(logic, *(_QWORD *)&markindex);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceCommandCard__unselectCommandCard(
        BattlePerformanceCommandCard_o *this,
        BattleCommandComponent_o *bc,
        int32_t markindex,
        const MethodInfo *method)
{
  BattlePerformanceCommandCard_o *v6; // x20
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  struct System_Int32_array *selectcommand; // x8
  unsigned __int64 v15; // x9
  int v16; // w24
  unsigned __int64 max_length; // x11
  char *v18; // x11
  struct BattleCommandComponent_array *selectedcomponents; // x8
  int v20; // w8
  int32_t v21; // w1
  UnityEngine_GameObject_o *gameObject; // x21
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  BattlePerformanceCommandCard_o *v29; // x22
  System_Int32_array **v30; // x1
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  System_Int32_array **v37; // x23
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  System_Int32_array **v44; // x1
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  System_Int32_array **v51; // x23
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  System_Int32_array **v58; // x1
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  System_Int32_array **v65; // x23
  System_Collections_Hashtable_o *v66; // x0
  const MethodInfo *v67; // x1
  const MethodInfo *v68; // x3
  System_String_array **v69; // x2
  System_String_array **v70; // x3
  System_Boolean_array **v71; // x4
  System_Int32_array **v72; // x5
  System_Int32_array *v73; // x6
  System_Int32_array *v74; // x7
  struct BattleCommandComponent_array *v75; // x8
  Il2CppClass **v76; // x0
  int32_t v77; // w1
  const MethodInfo *v78; // x2
  const MethodInfo *v79; // x1
  __int64 v80; // x0
  __int64 v81; // x0
  char v82[4]; // [xsp+4h] [xbp-3Ch] BYREF
  int v83; // [xsp+8h] [xbp-38h] BYREF
  int v84; // [xsp+Ch] [xbp-34h] BYREF

  v6 = this;
  if ( (byte_4189DC0 & 1) == 0 )
  {
    sub_B2C35C(&bool_TypeInfo, bc);
    sub_B2C35C(&int_TypeInfo, v7);
    sub_B2C35C(&object___TypeInfo, v8);
    sub_B2C35C(&float_TypeInfo, v9);
    sub_B2C35C(&StringLiteral_22677/*"time"*/, v10);
    sub_B2C35C(&StringLiteral_23408/*"y"*/, v11);
    sub_B2C35C(&StringLiteral_19967/*"islocal"*/, v12);
    this = (BattlePerformanceCommandCard_o *)sub_B2C35C(&iTween_TypeInfo, v13);
    byte_4189DC0 = 1;
  }
  selectcommand = v6->fields.selectcommand;
  if ( !selectcommand )
    goto LABEL_10;
  v15 = 0LL;
  v16 = -1;
  while ( 1 )
  {
    max_length = selectcommand->max_length;
    if ( (__int64)v15 >= (int)max_length )
      break;
    if ( v15 >= max_length )
      goto LABEL_50;
    v18 = (char *)selectcommand + 4 * v15;
    if ( *((_DWORD *)v18 + 8) == markindex )
    {
      *((_DWORD *)v18 + 8) = -1;
      selectcommand = v6->fields.selectcommand;
      v16 = v15;
    }
    ++v15;
    if ( !selectcommand )
      goto LABEL_10;
  }
  if ( (v16 & 0x80000000) == 0 )
  {
    selectedcomponents = v6->fields.selectedcomponents;
    if ( !selectedcomponents )
      goto LABEL_10;
    if ( v16 >= (signed int)selectedcomponents->max_length )
      return;
    if ( !bc )
      goto LABEL_10;
    bc->fields.selectflg = 0;
    v20 = v6->fields.drawcount - 1;
    v21 = v6->fields.maxdrawcount - v20;
    v6->fields.drawcount = v20;
    BattlePerformanceCommandCard__selectCommandCard(v6, v21, *(const MethodInfo **)&markindex);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)bc, 0LL);
    this = (BattlePerformanceCommandCard_o *)sub_B2C374(object___TypeInfo, 6LL);
    if ( !this )
      goto LABEL_10;
    v29 = this;
    this = (BattlePerformanceCommandCard_o *)StringLiteral_23408/*"y"*/;
    if ( StringLiteral_23408/*"y"*/ )
    {
      this = (BattlePerformanceCommandCard_o *)sub_B2C41C(StringLiteral_23408/*"y"*/, v29->klass->_1.element_class);
      if ( !this )
        goto LABEL_51;
      v30 = (System_Int32_array **)StringLiteral_23408/*"y"*/;
    }
    else
    {
      v30 = 0LL;
    }
    if ( !LODWORD(v29->fields.COMMAND_STAMP_POS_X) )
      goto LABEL_50;
    *(_QWORD *)&v29->fields.COMMAND_STAMP_POS_Y = v30;
    sub_B2C2F8((BattleServantConfConponent_o *)&v29->fields.COMMAND_STAMP_POS_Y, v30, v23, v24, v25, v26, v27, v28);
    v84 = 0;
    this = (BattlePerformanceCommandCard_o *)j_il2cpp_value_box_0(int_TypeInfo, &v84);
    v37 = (System_Int32_array **)this;
    if ( !this || (this = (BattlePerformanceCommandCard_o *)sub_B2C41C(this, v29->klass->_1.element_class)) != 0LL )
    {
      if ( LODWORD(v29->fields.COMMAND_STAMP_POS_X) <= 1 )
        goto LABEL_50;
      *(_QWORD *)&v29->fields.CARD_ROOT_BASE_X = v37;
      sub_B2C2F8((BattleServantConfConponent_o *)&v29->fields.CARD_ROOT_BASE_X, v37, v31, v32, v33, v34, v35, v36);
      this = (BattlePerformanceCommandCard_o *)StringLiteral_22677/*"time"*/;
      if ( StringLiteral_22677/*"time"*/ )
      {
        this = (BattlePerformanceCommandCard_o *)sub_B2C41C(StringLiteral_22677/*"time"*/, v29->klass->_1.element_class);
        if ( !this )
          goto LABEL_51;
        v44 = (System_Int32_array **)StringLiteral_22677/*"time"*/;
      }
      else
      {
        v44 = 0LL;
      }
      if ( LODWORD(v29->fields.COMMAND_STAMP_POS_X) <= 2 )
        goto LABEL_50;
      v29->fields.commandfsm = (struct PlayMakerFSM_o *)v44;
      sub_B2C2F8((BattleServantConfConponent_o *)&v29->fields.commandfsm, v44, v38, v39, v40, v41, v42, v43);
      v83 = 1045220557;
      this = (BattlePerformanceCommandCard_o *)j_il2cpp_value_box_0(float_TypeInfo, &v83);
      v51 = (System_Int32_array **)this;
      if ( !this || (this = (BattlePerformanceCommandCard_o *)sub_B2C41C(this, v29->klass->_1.element_class)) != 0LL )
      {
        if ( LODWORD(v29->fields.COMMAND_STAMP_POS_X) <= 3 )
          goto LABEL_50;
        v29->fields.commandprefab = (struct UnityEngine_GameObject_o *)v51;
        sub_B2C2F8((BattleServantConfConponent_o *)&v29->fields.commandprefab, v51, v45, v46, v47, v48, v49, v50);
        this = (BattlePerformanceCommandCard_o *)StringLiteral_19967/*"islocal"*/;
        if ( StringLiteral_19967/*"islocal"*/ )
        {
          this = (BattlePerformanceCommandCard_o *)sub_B2C41C(StringLiteral_19967/*"islocal"*/, v29->klass->_1.element_class);
          if ( !this )
            goto LABEL_51;
          v58 = (System_Int32_array **)StringLiteral_19967/*"islocal"*/;
        }
        else
        {
          v58 = 0LL;
        }
        if ( LODWORD(v29->fields.COMMAND_STAMP_POS_X) <= 4 )
          goto LABEL_50;
        v29->fields.selectCommandPrefab = (struct UnityEngine_GameObject_o *)v58;
        sub_B2C2F8((BattleServantConfConponent_o *)&v29->fields.selectCommandPrefab, v58, v52, v53, v54, v55, v56, v57);
        v82[0] = 1;
        this = (BattlePerformanceCommandCard_o *)j_il2cpp_value_box_0(bool_TypeInfo, v82);
        v65 = (System_Int32_array **)this;
        if ( !this || (this = (BattlePerformanceCommandCard_o *)sub_B2C41C(this, v29->klass->_1.element_class)) != 0LL )
        {
          if ( LODWORD(v29->fields.COMMAND_STAMP_POS_X) <= 5 )
            goto LABEL_50;
          v29->fields.commandrootTransform = (struct UnityEngine_Transform_o *)v65;
          sub_B2C2F8(
            (BattleServantConfConponent_o *)&v29->fields.commandrootTransform,
            v65,
            v59,
            v60,
            v61,
            v62,
            v63,
            v64);
          if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
          v66 = iTween__Hash((System_Object_array *)v29, 0LL);
          iTween__MoveTo_42732664(gameObject, v66, 0LL);
          BattleCommandComponent__startMoveFloat(bc, 0LL);
          if ( v16 )
            BattlePerformanceCommandCard__setFirstAura(v6, bc, v6->fields.firstAuraType, v68);
          else
            BattlePerformanceCommandCard__cancelFirstBonus(v6, v67);
          v75 = v6->fields.selectedcomponents;
          if ( v75 )
          {
            if ( v16 < v75->max_length )
            {
              v76 = &v75->obj.klass + v16;
              v76[4] = 0LL;
              sub_B2C2F8((BattleServantConfConponent_o *)(v76 + 4), 0LL, v69, v70, v71, v72, v73, v74);
              BattlePerformanceCommandCard__checkChainBonus(v6, v77, v78);
              BattlePerformanceCommandCard__checkMaskEnemy(v6, v79);
              BattleCommandComponent__resetSelect(bc, 0LL);
              return;
            }
LABEL_50:
            v80 = sub_B2C460(this);
            sub_B2C400(v80, 0LL);
          }
LABEL_10:
          sub_B2C434(this, bc);
        }
      }
    }
LABEL_51:
    v81 = sub_B2C454(this);
    sub_B2C400(v81, 0LL);
  }
}


void __fastcall BattlePerformanceCommandCard__updateBuffIcon(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  struct UnityEngine_GameObject_array *p_commandlist; // x8
  BattlePerformanceCommandCard_o *v3; // x19
  __int64 v4; // x22
  struct BattleCommandComponent_array *commandCompArray; // x8
  Il2CppClass **v6; // x8
  BattleCommandComponent_o *v7; // x20
  struct BattlePerformance_o *perf; // x8
  BattleData_o *data; // x21
  __int64 v10; // x0

  p_commandlist = this->fields.p_commandlist;
  if ( !p_commandlist )
LABEL_13:
    sub_B2C434(this, method);
  v3 = this;
  v4 = 0LL;
  while ( (int)v4 < (signed int)p_commandlist->max_length )
  {
    commandCompArray = v3->fields.commandCompArray;
    if ( !commandCompArray )
      goto LABEL_13;
    if ( (unsigned int)v4 >= commandCompArray->max_length )
    {
      v10 = sub_B2C460(this);
      sub_B2C400(v10, 0LL);
    }
    v6 = &commandCompArray->obj.klass + v4;
    v7 = (BattleCommandComponent_o *)v6[4];
    if ( !v7 )
      goto LABEL_13;
    this = (BattlePerformanceCommandCard_o *)UnityEngine_Behaviour__get_isActiveAndEnabled(
                                               (UnityEngine_Behaviour_o *)v6[4],
                                               0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      perf = v3->fields.perf;
      if ( !perf )
        goto LABEL_13;
      data = perf->fields.data;
      this = (BattlePerformanceCommandCard_o *)BattleCommandComponent__getUniqueID(v7, 0LL);
      if ( !data )
        goto LABEL_13;
      this = (BattlePerformanceCommandCard_o *)BattleData__getServantData(data, (int32_t)this, 0LL);
      if ( this )
        BattleCommandComponent__setBuffIconList(v7, (BattleBuffData_o *)this[1].fields.commandfsm, 0LL);
    }
    p_commandlist = v3->fields.p_commandlist;
    ++v4;
    if ( !p_commandlist )
      goto LABEL_13;
  }
}


void __fastcall BattlePerformanceCommandCard__updateCard(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  BattlePerformanceCommandCard_o *v2; // x19
  __int64 v3; // x22
  struct UnityEngine_GameObject_array *p_commandlist; // x8
  unsigned __int64 v5; // x23
  UnityEngine_Object_o *v6; // x20
  struct BattleCommandComponent_array *commandCompArray; // x8
  struct BattleCommandComponent_array *v8; // x8
  unsigned __int64 v9; // x22
  unsigned __int64 max_length; // x9
  BattleCommandComponent_o *v11; // x20
  __int64 v12; // x0

  v2 = this;
  if ( (byte_4189DB5 & 1) == 0 )
  {
    this = (BattlePerformanceCommandCard_o *)sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_4189DB5 = 1;
  }
  v3 = 9LL;
  do
  {
    p_commandlist = v2->fields.p_commandlist;
    if ( !p_commandlist )
      goto LABEL_30;
    v5 = v3 - 4;
    if ( v3 - 4 >= (unsigned __int64)p_commandlist->max_length )
      goto LABEL_32;
    v6 = (UnityEngine_Object_o *)*((_QWORD *)&p_commandlist->obj.klass + v3);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    this = (BattlePerformanceCommandCard_o *)UnityEngine_Object__op_Inequality(v6, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      commandCompArray = v2->fields.commandCompArray;
      if ( !commandCompArray )
        goto LABEL_30;
      if ( v5 >= commandCompArray->max_length )
      {
LABEL_32:
        v12 = sub_B2C460(this);
        sub_B2C400(v12, 0LL);
      }
      this = (BattlePerformanceCommandCard_o *)*((_QWORD *)&commandCompArray->obj.klass + v3);
      if ( !this )
        goto LABEL_30;
      BattleCommandComponent__setData((BattleCommandComponent_o *)this, 0LL, 0LL, 0, 1, 0, 0LL);
    }
    ++v3;
  }
  while ( v5 < 7 );
  v8 = v2->fields.commandCompArray;
  if ( !v8 )
LABEL_30:
    sub_B2C434(this, method);
  v9 = 0LL;
  while ( 1 )
  {
    max_length = v8->max_length;
    if ( (__int64)v9 >= (int)max_length )
      break;
    if ( v9 >= max_length )
      goto LABEL_32;
    v11 = v8->m_Items[v9];
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    this = (BattlePerformanceCommandCard_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v11, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !v11 )
        goto LABEL_30;
      BattleCommandComponent__updateView(v11, 0, 0, 1, 0, 0, 0LL);
      if ( v11->fields.data
        && BattleCommandComponent__getCriticalCount(v11, 0LL) >= 1
        && !v2->fields._IsPlayingBackStar_k__BackingField )
      {
        BattleCommandComponent__setCriticalObject(v11, 1, 0LL);
      }
      BattleCommandComponent__UpdateCommandCardEffect(v11, 0LL);
    }
    v8 = v2->fields.commandCompArray;
    ++v9;
    if ( !v8 )
      goto LABEL_30;
  }
}


void __fastcall BattlePerformanceCommandCard__updateCardFix(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  struct BattlePerformance_o *perf; // x8
  BattlePerformanceCommandCard_o *v3; // x19
  BattlePerformanceCommandCard_o *v4; // x20
  int v5; // w8
  int32_t p_commandlist_high; // w21
  int v7; // w8
  int v8; // w22
  struct BattleCommandComponent_array *commandCompArray; // x8
  __int64 v10; // x23
  int max_length; // w9
  unsigned int v12; // w24
  struct BattleCommandComponent_array *v13; // x8
  BattleCommandComponent_o *v14; // x8
  __int64 v15; // x0

  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_18;
  v3 = this;
  this = (BattlePerformanceCommandCard_o *)perf->fields.data;
  if ( !this )
    goto LABEL_18;
  this = (BattlePerformanceCommandCard_o *)BattleData__GetMaximumTurnFixedBuff((BattleData_o *)this, 0LL);
  v4 = this;
  if ( this )
  {
    v5 = *((_DWORD *)&this->fields.BaseMonoBehaviour_Fields + 1);
    p_commandlist_high = HIDWORD(this->fields.p_commandlist);
    v7 = v5 + 1 >= 0 ? v5 + 1 : v5 + 2;
    v8 = v7 >> 1;
  }
  else
  {
    p_commandlist_high = 0;
    v8 = 0;
  }
  commandCompArray = v3->fields.commandCompArray;
  if ( !commandCompArray )
LABEL_18:
    sub_B2C434(this, method);
  v10 = 4LL;
  while ( 1 )
  {
    max_length = commandCompArray->max_length;
    v12 = v10 - 4;
    if ( (int)v10 - 4 >= max_length )
      break;
    if ( v12 >= max_length )
      goto LABEL_20;
    this = (BattlePerformanceCommandCard_o *)*((_QWORD *)&commandCompArray->obj.klass + v10);
    if ( this )
    {
      this = (BattlePerformanceCommandCard_o *)BattleCommandComponent__isTreasureDvc(
                                                 (BattleCommandComponent_o *)this,
                                                 0LL);
      v13 = v3->fields.commandCompArray;
      if ( v13 )
      {
        if ( v12 >= v13->max_length )
        {
LABEL_20:
          v15 = sub_B2C460(this);
          sub_B2C400(v15, 0LL);
        }
        v14 = (BattleCommandComponent_o *)*((_QWORD *)&v13->obj.klass + v10);
        if ( v14 )
        {
          BattleCommandComponent__SetFixedCommandCardBuff(
            v14,
            (v4 != 0LL) & ((unsigned __int8)this ^ 1),
            v8,
            p_commandlist_high,
            0LL);
          commandCompArray = v3->fields.commandCompArray;
          ++v10;
          if ( commandCompArray )
            continue;
        }
      }
    }
    goto LABEL_18;
  }
}


void __fastcall BattlePerformanceCommandCard__updateCardMag(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  BattleData_o *Bdata; // x0
  struct BattleCommandComponent_array *commandCompArray; // x8
  BattleServantData_o *v5; // x20
  __int64 v6; // x21
  int max_length; // w9
  __int64 v8; // x0

  Bdata = this->fields.Bdata;
  if ( !Bdata )
    goto LABEL_10;
  Bdata = (BattleData_o *)BattleData__getServantData(Bdata, Bdata->fields.globaltargetId, 0LL);
  if ( !Bdata || !this->fields.p_commandlist )
    return;
  commandCompArray = this->fields.commandCompArray;
  if ( !commandCompArray )
LABEL_10:
    sub_B2C434(Bdata, method);
  v5 = (BattleServantData_o *)Bdata;
  v6 = 0LL;
  while ( 1 )
  {
    max_length = commandCompArray->max_length;
    if ( (int)v6 >= max_length )
      break;
    if ( (unsigned int)v6 >= max_length )
    {
      v8 = sub_B2C460(Bdata);
      sub_B2C400(v8, 0LL);
    }
    Bdata = (BattleData_o *)commandCompArray->m_Items[v6];
    if ( Bdata )
    {
      BattleCommandComponent__updateClassMag((BattleCommandComponent_o *)Bdata, v5, 0LL);
      commandCompArray = this->fields.commandCompArray;
      ++v6;
      if ( commandCompArray )
        continue;
    }
    goto LABEL_10;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceCommandCard__updateHighSpeedObject(
        BattlePerformanceCommandCard_o *this,
        int32_t speedMode,
        const MethodInfo *method)
{
  BattleLogic_o *logic; // x0
  struct BattleLogic_o *v5; // x8
  struct BattleData_o *data; // x8
  struct BattlePerformance_o *perf; // x8
  struct BattleData_o *v8; // x8
  int32_t systemflg_acceleration; // w20
  bool v10; // w1

  logic = this->fields.logic;
  if ( !logic )
    goto LABEL_22;
  logic = (BattleLogic_o *)BattleLogic__isTutorial(logic, 0LL);
  if ( ((unsigned __int8)logic & 1) != 0 )
  {
    logic = this->fields.logic;
    if ( !logic )
      goto LABEL_22;
    logic = (BattleLogic_o *)BattleLogic__getTutorialId(logic, 0LL);
    if ( (_DWORD)logic == 2 )
    {
      logic = this->fields.logic;
      if ( !logic )
        goto LABEL_22;
      logic = (BattleLogic_o *)BattleLogic__getTurn(logic, 0LL);
      if ( (int)logic >= 3 )
      {
        v5 = this->fields.logic;
        if ( !v5 )
          goto LABEL_22;
        data = v5->fields.data;
        if ( !data )
          goto LABEL_22;
        data->fields.systemflg_acceleration = 2;
      }
    }
  }
  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_22;
  v8 = perf->fields.data;
  if ( !v8 )
    goto LABEL_22;
  logic = (BattleLogic_o *)this->fields.highSpeedArrowOn;
  if ( !logic )
    goto LABEL_22;
  systemflg_acceleration = v8->fields.systemflg_acceleration;
  logic = (BattleLogic_o *)UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)logic, 0LL);
  if ( !logic )
    goto LABEL_22;
  if ( systemflg_acceleration != 1 )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)logic, 1, 0LL);
    logic = (BattleLogic_o *)this->fields.highSpeedArrowOff;
    if ( logic )
    {
      logic = (BattleLogic_o *)UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)logic, 0LL);
      if ( logic )
      {
        v10 = 0;
        goto LABEL_21;
      }
    }
LABEL_22:
    sub_B2C434(logic, *(_QWORD *)&speedMode);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)logic, 0, 0LL);
  logic = (BattleLogic_o *)this->fields.highSpeedArrowOff;
  if ( !logic )
    goto LABEL_22;
  logic = (BattleLogic_o *)UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)logic, 0LL);
  if ( !logic )
    goto LABEL_22;
  v10 = 1;
LABEL_21:
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)logic, v10, 0LL);
}


void __fastcall BattlePerformanceCommandCard__updateTDTypeChange(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  struct BattleCommandComponent_array *commandCompArray; // x8
  BattlePerformanceCommandCard_o *v3; // x19
  __int64 v4; // x20
  int max_length; // w9
  __int64 v6; // x0

  commandCompArray = this->fields.commandCompArray;
  if ( !commandCompArray )
LABEL_7:
    sub_B2C434(this, method);
  v3 = this;
  v4 = 0LL;
  while ( 1 )
  {
    max_length = commandCompArray->max_length;
    if ( (int)v4 >= max_length )
      break;
    if ( (unsigned int)v4 >= max_length )
    {
      v6 = sub_B2C460(this);
      sub_B2C400(v6, 0LL);
    }
    this = (BattlePerformanceCommandCard_o *)commandCompArray->m_Items[v4];
    if ( this )
    {
      BattleCommandComponent__UpdateTDTypeChange((BattleCommandComponent_o *)this, 0, 0LL);
      commandCompArray = v3->fields.commandCompArray;
      ++v4;
      if ( commandCompArray )
        continue;
    }
    goto LABEL_7;
  }
}


System_Collections_IEnumerator_o *__fastcall BattlePerformanceCommandCard__waitFallStar(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_4189DB7 & 1) == 0 )
  {
    sub_B2C35C(&BattlePerformanceCommandCard__waitFallStar_d__97_TypeInfo, method);
    byte_4189DB7 = 1;
  }
  v3 = sub_B2C42C(BattlePerformanceCommandCard__waitFallStar_d__97_TypeInfo);
  BattlePerformanceCommandCard__waitFallStar_d__97___ctor(
    (BattlePerformanceCommandCard__waitFallStar_d__97_o *)v3,
    0,
    0LL);
  if ( !v3 )
    sub_B2C434(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v3 + 32), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v3;
}


System_Collections_IEnumerator_o *__fastcall BattlePerformanceCommandCard__waitFunc(
        BattlePerformanceCommandCard_o *this,
        float waittime,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7

  if ( (byte_4189DE1 & 1) == 0 )
  {
    sub_B2C35C(&BattlePerformanceCommandCard__waitFunc_d__171_TypeInfo, callback);
    byte_4189DE1 = 1;
  }
  v7 = sub_B2C42C(BattlePerformanceCommandCard__waitFunc_d__171_TypeInfo);
  BattlePerformanceCommandCard__waitFunc_d__171___ctor((BattlePerformanceCommandCard__waitFunc_d__171_o *)v7, 0, 0LL);
  if ( !v7 )
    sub_B2C434(v8, v9);
  *(_QWORD *)(v7 + 32) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v7 + 32), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15);
  *(float *)(v7 + 40) = waittime;
  *(_QWORD *)(v7 + 48) = callback;
  sub_B2C2F8((BattleServantConfConponent_o *)(v7 + 48), (System_Int32_array **)callback, v16, v17, v18, v19, v20, v21);
  return (System_Collections_IEnumerator_o *)v7;
}


void __fastcall BattlePerformanceCommandCard__DelayFirstBonusAnimationPlay_d__122___ctor(
        BattlePerformanceCommandCard__DelayFirstBonusAnimationPlay_d__122_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattlePerformanceCommandCard__DelayFirstBonusAnimationPlay_d__122__MoveNext(
        BattlePerformanceCommandCard__DelayFirstBonusAnimationPlay_d__122_o *this,
        const MethodInfo *method)
{
  BattlePerformanceCommandCard__DelayFirstBonusAnimationPlay_d__122_o *v2; // x19
  int32_t _1__state; // w8
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  struct BattlePerformanceCommandCard_o *_4__this; // x20
  UnityEngine_Object_o *firstBonusSimpleAnimation; // x19
  UnityEngine_Object_o *firstBonusAnimation; // x19

  v2 = this;
  if ( (byte_418507A & 1) == 0 )
  {
    this = (BattlePerformanceCommandCard__DelayFirstBonusAnimationPlay_d__122_o *)sub_B2C35C(
                                                                                    &UnityEngine_Object_TypeInfo,
                                                                                    method);
    byte_418507A = 1;
  }
  _1__state = v2->fields.__1__state;
  if ( _1__state == 1 )
  {
    _4__this = v2->fields.__4__this;
    v2->fields.__1__state = -1;
    if ( _4__this )
    {
      firstBonusSimpleAnimation = (UnityEngine_Object_o *)_4__this->fields.firstBonusSimpleAnimation;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(firstBonusSimpleAnimation, 0LL, 0LL) )
      {
        this = (BattlePerformanceCommandCard__DelayFirstBonusAnimationPlay_d__122_o *)_4__this->fields.firstBonusSimpleAnimation;
        if ( this )
        {
          SimpleAnimation__Stop((SimpleAnimation_o *)this, 0LL);
          this = (BattlePerformanceCommandCard__DelayFirstBonusAnimationPlay_d__122_o *)_4__this->fields.firstBonusSimpleAnimation;
          if ( this )
          {
            SimpleAnimation__Play((SimpleAnimation_o *)this, 0LL);
            return 0;
          }
        }
      }
      else
      {
        firstBonusAnimation = (UnityEngine_Object_o *)_4__this->fields.firstBonusAnimation;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( !UnityEngine_Object__op_Inequality(firstBonusAnimation, 0LL, 0LL) )
          return 0;
        this = (BattlePerformanceCommandCard__DelayFirstBonusAnimationPlay_d__122_o *)_4__this->fields.firstBonusAnimation;
        if ( this )
        {
          UnityEngine_Animation__Stop((UnityEngine_Animation_o *)this, 0LL);
          this = (BattlePerformanceCommandCard__DelayFirstBonusAnimationPlay_d__122_o *)_4__this->fields.firstBonusAnimation;
          if ( this )
          {
            UnityEngine_Animation__Play((UnityEngine_Animation_o *)this, 0LL);
            return 0;
          }
        }
      }
    }
    sub_B2C434(this, method);
  }
  if ( !_1__state )
  {
    v2->fields.__2__current = 0LL;
    p__2__current = &v2->fields.__2__current;
    *((_DWORD *)p__2__current - 2) = -1;
    sub_B2C2F8(p__2__current, 0LL);
    result = 1;
    *((_DWORD *)p__2__current - 2) = 1;
    return result;
  }
  return 0;
}


Il2CppObject *__fastcall BattlePerformanceCommandCard__DelayFirstBonusAnimationPlay_d__122__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattlePerformanceCommandCard__DelayFirstBonusAnimationPlay_d__122_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattlePerformanceCommandCard__DelayFirstBonusAnimationPlay_d__122__System_Collections_IEnumerator_Reset(
        BattlePerformanceCommandCard__DelayFirstBonusAnimationPlay_d__122_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B2C360(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B2C42C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B2C360(&Method_BattlePerformanceCommandCard__DelayFirstBonusAnimationPlay_d__122_System_Collections_IEnumerator_Reset__);
  sub_B2C400(v3, v4);
}


Il2CppObject *__fastcall BattlePerformanceCommandCard__DelayFirstBonusAnimationPlay_d__122__System_Collections_IEnumerator_get_Current(
        BattlePerformanceCommandCard__DelayFirstBonusAnimationPlay_d__122_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattlePerformanceCommandCard__DelayFirstBonusAnimationPlay_d__122__System_IDisposable_Dispose(
        BattlePerformanceCommandCard__DelayFirstBonusAnimationPlay_d__122_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattlePerformanceCommandCard___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  struct BattlePerformanceCommandCard___c_StaticFields *static_fields; // x0

  if ( (byte_4185078 & 1) == 0 )
  {
    sub_B2C35C(&BattlePerformanceCommandCard___c_TypeInfo, v1);
    byte_4185078 = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(BattlePerformanceCommandCard___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = BattlePerformanceCommandCard___c_TypeInfo->static_fields;
  static_fields->__9 = (struct BattlePerformanceCommandCard___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
}


void __fastcall BattlePerformanceCommandCard___c___ctor(
        BattlePerformanceCommandCard___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattlePerformanceCommandCard___c___DistributeCriticalPoint_b__120_0(
        BattlePerformanceCommandCard___c_o *this,
        BattleCommandComponent_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B2C434(this, 0LL);
  return x->fields.data
      && !BattleCommandComponent__isTreasureDvc(x, 0LL)
      && BattleCommandComponent__getCommandType(x, 0LL) != 4;
}


bool __fastcall BattlePerformanceCommandCard___c___coStartFirstBonus_b__119_0(
        BattlePerformanceCommandCard___c_o *this,
        BattleCommandComponent_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B2C434(this, 0LL);
  return x->fields.selectflg;
}


bool __fastcall BattlePerformanceCommandCard___c___showComboEffectShort_b__134_0(
        BattlePerformanceCommandCard___c_o *this,
        BattleCommandComponent_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B2C434(this, 0LL);
  return BattleCommandComponent__getCommandType(x, 0LL) == 3;
}


void __fastcall BattlePerformanceCommandCard___c__DisplayClass120_0___ctor(
        BattlePerformanceCommandCard___c__DisplayClass120_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattlePerformanceCommandCard___c__DisplayClass120_0___DistributeCriticalPoint_b__1(
        BattlePerformanceCommandCard___c__DisplayClass120_0_o *this,
        BattleCommandComponent_o *x,
        const MethodInfo *method)
{
  BattlePerformanceCommandCard___c__DisplayClass120_0_o *v4; // x20
  struct BattlePerformanceCommandCard_o *_4__this; // x8

  v4 = this;
  if ( (byte_4185079 & 1) == 0 )
  {
    this = (BattlePerformanceCommandCard___c__DisplayClass120_0_o *)sub_B2C35C(
                                                                      &Method_System_Linq_Enumerable_Contains_BattleCommandComponent___,
                                                                      x);
    byte_4185079 = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    sub_B2C434(this, x);
  return System_Linq_Enumerable__Contains_string_(
           (System_Collections_Generic_IEnumerable_TSource__o *)_4__this->fields.selectedcomponents,
           (System_String_o *)x,
           (const MethodInfo_1A8A5EC *)Method_System_Linq_Enumerable_Contains_BattleCommandComponent___);
}


void __fastcall BattlePerformanceCommandCard___c__DisplayClass120_0___DistributeCriticalPoint_b__2(
        BattlePerformanceCommandCard___c__DisplayClass120_0_o *this,
        BattleCommandComponent_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B2C434(this, 0LL);
  BattleCommandComponent__AddBoostedCriticalRate(x, this->fields.criticalPercentageToAdd, 0LL);
}


void __fastcall BattlePerformanceCommandCard___c__DisplayClass175_0___ctor(
        BattlePerformanceCommandCard___c__DisplayClass175_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattlePerformanceCommandCard___c__DisplayClass175_0___PlayBackStar_b__0(
        BattlePerformanceCommandCard___c__DisplayClass175_0_o *this,
        const MethodInfo *method)
{
  struct BattlePerformanceCommandCard_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B2C434(this, method);
  _4__this->fields._IsPlayingBackStar_k__BackingField = 0;
  ActionExtensions__Call(this->fields.callback, 0LL);
}


void __fastcall BattlePerformanceCommandCard__coStartFirstBonus_d__119___ctor(
        BattlePerformanceCommandCard__coStartFirstBonus_d__119_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattlePerformanceCommandCard__coStartFirstBonus_d__119__MoveNext(
        BattlePerformanceCommandCard__coStartFirstBonus_d__119_o *this,
        const MethodInfo *method)
{
  BattlePerformanceCommandCard__coStartFirstBonus_d__119_o *v2; // x20
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  int32_t _1__state; // w8
  struct BattlePerformanceCommandCard_o *_4__this; // x19
  UnityEngine_Object_o *firstBonusObject; // x22
  UnityEngine_GameObject_o **p_firstBonusObject; // x21
  Spawner_o *spawner; // x22
  UnityEngine_Object_o *firstbonus_q; // x23
  float x; // s8
  float y; // s9
  float z; // s10
  float v19; // s0
  float v20; // s1
  float v21; // s2
  float v22; // s3
  float v23; // s4
  float v24; // s5
  float v25; // s6
  float v26; // s7
  UnityEngine_GameObject_o *v27; // x0
  UnityEngine_GameObject_o *v28; // x22
  SimpleAnimation_o *ComponentInChildren_SimpleAnimation; // x0
  SimpleAnimation_o *v30; // x0
  Il2CppObject **p__2__current; // x20
  bool result; // w0
  struct BattleCommandComponent_array *commandCompArray; // x8
  __int64 v34; // x21
  int max_length; // w9
  struct BattlePerformance_o *perf; // x8
  int32_t FirstBonusCriticalRate; // w0
  int32_t v38; // w20
  WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_array *v39; // x21
  BattlePerformanceCommandCard___c_c *v40; // x0
  struct BattlePerformanceCommandCard___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__119_0; // x22
  Il2CppObject *v43; // x23
  struct BattlePerformanceCommandCard___c_StaticFields *v44; // x0
  UnityEngine_Object_o *USFGOActorBattleActionEventConditional_OverwriteParamCondition; // x21
  __int64 v46; // x0
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v48; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o v49; // 0:s3.4,4:s4.4,8:s5.4,12:s6.4

  v2 = this;
  if ( (byte_418507B & 1) == 0 )
  {
    sub_B2C35C(&Method_BasicHelper_Find_BattleCommandComponent___, method);
    sub_B2C35C(&Method_System_Func_BattleCommandComponent__bool___ctor__, v3);
    sub_B2C35C(&System_Func_BattleCommandComponent__bool__TypeInfo, v4);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponentInChildren_Animation____67434752, v5);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponentInChildren_SimpleAnimation____67434776, v6);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v7);
    sub_B2C35C(&Method_BattlePerformanceCommandCard___c__coStartFirstBonus_b__119_0__, v8);
    this = (BattlePerformanceCommandCard__coStartFirstBonus_d__119_o *)sub_B2C35C(
                                                                         &BattlePerformanceCommandCard___c_TypeInfo,
                                                                         v9);
    byte_418507B = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state != 1 )
  {
    if ( _1__state )
      return 0;
    v2->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_41;
    firstBonusObject = (UnityEngine_Object_o *)_4__this->fields.firstBonusObject;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    p_firstBonusObject = &_4__this->fields.firstBonusObject;
    if ( UnityEngine_Object__op_Inequality(firstBonusObject, 0LL, 0LL) )
    {
      this = (BattlePerformanceCommandCard__coStartFirstBonus_d__119_o *)_4__this->fields.spawner;
      if ( !this )
        goto LABEL_41;
      Spawner__Despawn((Spawner_o *)this, *p_firstBonusObject, 1, 0LL);
      *p_firstBonusObject = 0LL;
      sub_B2C2F8(&_4__this->fields.firstBonusObject, 0LL);
    }
    if ( BattleCommand__isQUICK(v2->fields.type, 0LL) )
    {
      spawner = _4__this->fields.spawner;
      firstbonus_q = (UnityEngine_Object_o *)_4__this->fields.firstbonus_q;
    }
    else if ( BattleCommand__isARTS(v2->fields.type, 0LL) )
    {
      spawner = _4__this->fields.spawner;
      firstbonus_q = (UnityEngine_Object_o *)_4__this->fields.firstbonus_a;
    }
    else
    {
      if ( !BattleCommand__isBUSTER(v2->fields.type, 0LL) )
      {
LABEL_22:
        v28 = *p_firstBonusObject;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        this = (BattlePerformanceCommandCard__coStartFirstBonus_d__119_o *)UnityEngine_Object__op_Inequality(
                                                                             (UnityEngine_Object_o *)v28,
                                                                             0LL,
                                                                             0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          this = (BattlePerformanceCommandCard__coStartFirstBonus_d__119_o *)*p_firstBonusObject;
          if ( !*p_firstBonusObject )
            goto LABEL_41;
          ComponentInChildren_SimpleAnimation = UnityEngine_GameObject__GetComponentInChildren_SimpleAnimation_(
                                                  (UnityEngine_GameObject_o *)this,
                                                  1,
                                                  (const MethodInfo_1AA79AC *)Method_UnityEngine_GameObject_GetComponentInChildren_SimpleAnimation____67434776);
          _4__this->fields.firstBonusSimpleAnimation = ComponentInChildren_SimpleAnimation;
          sub_B2C2F8(&_4__this->fields.firstBonusSimpleAnimation, ComponentInChildren_SimpleAnimation);
          this = (BattlePerformanceCommandCard__coStartFirstBonus_d__119_o *)_4__this->fields.firstBonusObject;
          if ( !this )
            goto LABEL_41;
          v30 = UnityEngine_GameObject__GetComponentInChildren_SimpleAnimation_(
                  (UnityEngine_GameObject_o *)this,
                  1,
                  (const MethodInfo_1AA79AC *)Method_UnityEngine_GameObject_GetComponentInChildren_Animation____67434752);
          _4__this->fields.firstBonusAnimation = (struct UnityEngine_Animation_o *)v30;
          sub_B2C2F8(&_4__this->fields.firstBonusAnimation, v30);
          BattlePerformanceCommandCard__ActivateFirstBonusObject(_4__this, 0LL);
        }
        _4__this->fields.firstAuraType = v2->fields.type;
        goto LABEL_30;
      }
      spawner = _4__this->fields.spawner;
      firstbonus_q = (UnityEngine_Object_o *)_4__this->fields.firstbonus_b;
    }
    zero = UnityEngine_Vector3__get_zero(0LL);
    x = zero.fields.x;
    y = zero.fields.y;
    z = zero.fields.z;
    *(UnityEngine_Quaternion_o *)&v19 = UnityEngine_Quaternion__get_identity(0LL);
    if ( !spawner )
      goto LABEL_41;
    v23 = v19;
    v24 = v20;
    v25 = v21;
    v26 = v22;
    v48.fields.x = x;
    v48.fields.y = y;
    v48.fields.z = z;
    v49.fields.x = v23;
    v49.fields.y = v24;
    v49.fields.z = v25;
    v49.fields.w = v26;
    v27 = Spawner__Spawn_24865268(spawner, firstbonus_q, v48, v49, 0LL);
    *p_firstBonusObject = v27;
    sub_B2C2F8(&_4__this->fields.firstBonusObject, v27);
    goto LABEL_22;
  }
  v2->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_41;
LABEL_30:
  if ( _4__this->fields.isPlayingMoveCard )
  {
    v2->fields.__2__current = 0LL;
    p__2__current = &v2->fields.__2__current;
    sub_B2C2F8(p__2__current, 0LL);
    result = 1;
    *((_DWORD *)p__2__current - 2) = 1;
    return result;
  }
  if ( _4__this->fields.firstAuraType != -1 )
  {
    commandCompArray = _4__this->fields.commandCompArray;
    if ( commandCompArray )
    {
      v34 = 0LL;
      while ( 1 )
      {
        max_length = commandCompArray->max_length;
        if ( (int)v34 >= max_length )
          break;
        if ( (unsigned int)v34 >= max_length )
        {
          v46 = sub_B2C460(this);
          sub_B2C400(v46, 0LL);
        }
        method = (const MethodInfo *)commandCompArray->m_Items[v34];
        if ( method )
        {
          if ( !BYTE4(method[4].genericContainerHandle) )
          {
            BattlePerformanceCommandCard__setFirstAura(
              _4__this,
              (BattleCommandComponent_o *)method,
              _4__this->fields.firstAuraType,
              0LL);
            commandCompArray = _4__this->fields.commandCompArray;
          }
          ++v34;
          if ( commandCompArray )
            continue;
        }
        goto LABEL_41;
      }
      perf = _4__this->fields.perf;
      if ( perf )
      {
        this = (BattlePerformanceCommandCard__coStartFirstBonus_d__119_o *)perf->fields.data;
        if ( this )
        {
          FirstBonusCriticalRate = BattleData__GetFirstBonusCriticalRate((BattleData_o *)this, v2->fields.type, 0LL);
          if ( FirstBonusCriticalRate >= 10 )
          {
            v38 = FirstBonusCriticalRate;
            v39 = (WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_array *)_4__this->fields.commandCompArray;
            v40 = BattlePerformanceCommandCard___c_TypeInfo;
            if ( (BYTE3(BattlePerformanceCommandCard___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !BattlePerformanceCommandCard___c_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BattlePerformanceCommandCard___c_TypeInfo);
              v40 = BattlePerformanceCommandCard___c_TypeInfo;
            }
            static_fields = v40->static_fields;
            _9__119_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__119_0;
            if ( !_9__119_0 )
            {
              if ( (BYTE3(v40->vtable._0_Equals.methodPtr) & 4) != 0 && !v40->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v40);
                static_fields = BattlePerformanceCommandCard___c_TypeInfo->static_fields;
              }
              v43 = (Il2CppObject *)static_fields->__9;
              _9__119_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_BattleCommandComponent__bool__TypeInfo);
              System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
                _9__119_0,
                v43,
                Method_BattlePerformanceCommandCard___c__coStartFirstBonus_b__119_0__,
                (const MethodInfo_2711C04 *)Method_System_Func_BattleCommandComponent__bool___ctor__);
              v44 = BattlePerformanceCommandCard___c_TypeInfo->static_fields;
              v44->__9__119_0 = (struct System_Func_BattleCommandComponent__bool__o *)_9__119_0;
              sub_B2C2F8(&v44->__9__119_0, _9__119_0);
            }
            USFGOActorBattleActionEventConditional_OverwriteParamCondition = (UnityEngine_Object_o *)BasicHelper__Find_USFGOActorBattleActionEventConditional_OverwriteParamCondition_(v39, (System_Func_T__bool__o *)_9__119_0, (const MethodInfo_1726BF0 *)Method_BasicHelper_Find_BattleCommandComponent___);
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            if ( UnityEngine_Object__op_Inequality(
                   USFGOActorBattleActionEventConditional_OverwriteParamCondition,
                   0LL,
                   0LL) )
            {
              BattlePerformanceCommandCard__DistributeCriticalPoint(_4__this, v38 / 10, 0, 0LL);
            }
          }
          return 0;
        }
      }
    }
LABEL_41:
    sub_B2C434(this, method);
  }
  return 0;
}


Il2CppObject *__fastcall BattlePerformanceCommandCard__coStartFirstBonus_d__119__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattlePerformanceCommandCard__coStartFirstBonus_d__119_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattlePerformanceCommandCard__coStartFirstBonus_d__119__System_Collections_IEnumerator_Reset(
        BattlePerformanceCommandCard__coStartFirstBonus_d__119_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B2C360(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B2C42C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B2C360(&Method_BattlePerformanceCommandCard__coStartFirstBonus_d__119_System_Collections_IEnumerator_Reset__);
  sub_B2C400(v3, v4);
}


Il2CppObject *__fastcall BattlePerformanceCommandCard__coStartFirstBonus_d__119__System_Collections_IEnumerator_get_Current(
        BattlePerformanceCommandCard__coStartFirstBonus_d__119_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattlePerformanceCommandCard__coStartFirstBonus_d__119__System_IDisposable_Dispose(
        BattlePerformanceCommandCard__coStartFirstBonus_d__119_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattlePerformanceCommandCard__colOpenNpCard_d__182___ctor(
        BattlePerformanceCommandCard__colOpenNpCard_d__182_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattlePerformanceCommandCard__colOpenNpCard_d__182__MoveNext(
        BattlePerformanceCommandCard__colOpenNpCard_d__182_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  int32_t _1__state; // w8
  struct BattlePerformanceCommandCard_o *_4__this; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v24; // x22
  struct System_Collections_Generic_List_BattleCommandComponent__o **v25; // x21
  __int64 ServantNumber; // x0
  UnityEngine_Object_o *npGaugeLightTargetRoot; // x22
  UnityEngine_Transform_o *v28; // x22
  float CARD_ROOT_BASE_X; // s8
  float CARD_ROOT_BASE_Y; // s9
  float v31; // s0
  struct UnityEngine_GameObject_array *p_commandlist; // x8
  __int64 v33; // x26
  __int64 v34; // x9
  __int64 v35; // x8
  struct BattleCommandData_array *commandlist; // x9
  unsigned __int64 max_length; // x10
  struct BattleCommandComponent_array *commandCompArray; // x8
  il2cpp_array_size_t v39; // w25
  BattleCommandComponent_o **v40; // x8
  BattleCommandComponent_o *v41; // x22
  UnityEngine_Transform_o *transform; // x23
  UnityEngine_Transform_o *v43; // x0
  UnityEngine_Transform_o *v44; // x0
  UnityEngine_GameObject_o *Object_19214240; // x23
  System_Object_array *v46; // x24
  __int64 v47; // x1
  struct UnityEngine_Transform_array *npGaugeLightTarget; // x8
  Il2CppObject *v49; // x25
  __int64 v50; // x1
  Il2CppObject *v51; // x25
  __int64 v52; // x1
  Il2CppObject *v53; // x25
  __int64 v54; // x1
  Il2CppObject *v55; // x25
  System_Collections_Hashtable_o *v56; // x0
  _BOOL8 v57; // x0
  __int64 v58; // x1
  struct System_Collections_Generic_List_BattleCommandComponent__o **p_flglist_5__2; // x19
  struct System_Collections_Generic_List_BattleCommandComponent__o *flglist_5__2; // t1
  bool result; // w0
  float npCardEffectDelayTime; // s8
  UnityEngine_WaitForSeconds_o *v63; // x20
  Il2CppObject **v64; // x19
  float npCardDispDelayTime; // s8
  UnityEngine_WaitForSeconds_o *v66; // x20
  Il2CppObject **p__2__current; // x19
  __int64 v68; // x0
  __int64 v69; // x0
  float npGaugeEffectMoveTime; // [xsp+Ch] [xbp-84h] BYREF
  float npGaugeEffectMoveDelayTime; // [xsp+10h] [xbp-80h] BYREF
  int32_t npGaugeEaseType; // [xsp+14h] [xbp-7Ch] BYREF
  System_Collections_Generic_List_Enumerator_T__o v73; // [xsp+18h] [xbp-78h] BYREF
  UnityEngine_Vector3_o v74; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_418507C & 1) == 0 )
  {
    sub_B2C35C(&iTween_EaseType_TypeInfo, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_BattleCommandComponent__Dispose__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_BattleCommandComponent__MoveNext__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_BattleCommandComponent__get_Current__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleCommandComponent__Add__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleCommandComponent__Clear__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleCommandComponent__GetEnumerator__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleCommandComponent___ctor__, v9);
    sub_B2C35C(&System_Collections_Generic_List_BattleCommandComponent__TypeInfo, v10);
    sub_B2C35C(&object___TypeInfo, v11);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v12);
    sub_B2C35C(&float_TypeInfo, v13);
    sub_B2C35C(&UnityEngine_WaitForSeconds_TypeInfo, v14);
    sub_B2C35C(&StringLiteral_18114/*"easetype"*/, v15);
    sub_B2C35C(&StringLiteral_22677/*"time"*/, v16);
    sub_B2C35C(&StringLiteral_18253/*"effect/ef_noblegauge01"*/, v17);
    sub_B2C35C(&StringLiteral_17949/*"delay"*/, v18);
    sub_B2C35C(&StringLiteral_18254/*"effect/ef_noblegauge02"*/, v19);
    sub_B2C35C(&StringLiteral_21511/*"position"*/, v20);
    sub_B2C35C(&iTween_TypeInfo, v21);
    byte_418507C = 1;
  }
  memset(&v73, 0, sizeof(v73));
  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  if ( _1__state == 2 )
  {
    flglist_5__2 = this->fields._flglist_5__2;
    p_flglist_5__2 = &this->fields._flglist_5__2;
    ServantNumber = (__int64)flglist_5__2;
    *((_DWORD *)p_flglist_5__2 - 6) = -1;
    if ( !flglist_5__2 )
      goto LABEL_69;
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)ServantNumber,
      (const MethodInfo_2EF4868 *)Method_System_Collections_Generic_List_BattleCommandComponent__Clear__);
    *p_flglist_5__2 = 0LL;
    sub_B2C2F8(p_flglist_5__2, 0LL);
    if ( !_4__this )
      goto LABEL_69;
    BattlePerformanceCommandCard__giveoutNobleCard(_4__this, 0LL);
    return 0;
  }
  if ( _1__state == 1 )
  {
    ServantNumber = (__int64)this->fields._flglist_5__2;
    this->fields.__1__state = -1;
    if ( ServantNumber )
    {
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        &v73,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)ServantNumber,
        (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_BattleCommandComponent__GetEnumerator__);
      while ( 1 )
      {
        v57 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v73,
                (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_BattleCommandComponent__MoveNext__);
        if ( !v57 )
          break;
        if ( !v73.fields.current )
          sub_B2C434(v57, v58);
        if ( !BYTE4(v73.fields.current[23].monitor) )
          BattleCommandComponent__playOpenNobleCard((BattleCommandComponent_o *)v73.fields.current, 0LL);
      }
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v73,
        (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_BattleCommandComponent__Dispose__);
      if ( _4__this )
      {
        npCardDispDelayTime = _4__this->fields.npCardDispDelayTime;
        v66 = (UnityEngine_WaitForSeconds_o *)sub_B2C42C(UnityEngine_WaitForSeconds_TypeInfo);
        UnityEngine_WaitForSeconds___ctor(v66, npCardDispDelayTime, 0LL);
        this->fields.__2__current = (Il2CppObject *)v66;
        p__2__current = &this->fields.__2__current;
        sub_B2C2F8(p__2__current, v66);
        *((_DWORD *)p__2__current - 2) = 2;
        return 1;
      }
    }
    goto LABEL_69;
  }
  if ( _1__state )
    return 0;
  this->fields.__1__state = -1;
  v24 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_BattleCommandComponent__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v24,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_BattleCommandComponent___ctor__);
  v25 = &this->fields._flglist_5__2;
  this->fields._flglist_5__2 = (struct System_Collections_Generic_List_BattleCommandComponent__o *)v24;
  sub_B2C2F8(&this->fields._flglist_5__2, v24);
  if ( !_4__this )
    goto LABEL_69;
  npGaugeLightTargetRoot = (UnityEngine_Object_o *)_4__this->fields.npGaugeLightTargetRoot;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  ServantNumber = UnityEngine_Object__op_Inequality(npGaugeLightTargetRoot, 0LL, 0LL);
  if ( (ServantNumber & 1) != 0 )
  {
    v28 = _4__this->fields.npGaugeLightTargetRoot;
    CARD_ROOT_BASE_X = _4__this->fields.CARD_ROOT_BASE_X;
    CARD_ROOT_BASE_Y = _4__this->fields.CARD_ROOT_BASE_Y;
    v31 = BattlePerformanceCommandCard__FSCardRootOffsetY(_4__this, 0LL);
    if ( !v28 )
      goto LABEL_69;
    v74.fields.y = CARD_ROOT_BASE_Y + v31;
    v74.fields.z = 0.0;
    v74.fields.x = CARD_ROOT_BASE_X;
    UnityEngine_Transform__set_localPosition(v28, v74, 0LL);
  }
  p_commandlist = _4__this->fields.p_commandlist;
  if ( !p_commandlist )
LABEL_69:
    sub_B2C434(ServantNumber, method);
  v33 = 9LL;
  while ( 1 )
  {
    v34 = *(_QWORD *)&p_commandlist->max_length;
    v35 = v33 - 4;
    if ( v33 - 4 >= ((v34 << 32) - 0x100000000LL) >> 32 )
      break;
    commandlist = _4__this->fields.commandlist;
    if ( !commandlist )
      goto LABEL_69;
    max_length = commandlist->max_length;
    if ( v35 < (int)max_length )
    {
      if ( v35 >= max_length )
        goto LABEL_83;
      method = (const MethodInfo *)*((_QWORD *)&commandlist->obj.klass + v33);
      if ( method )
      {
        ServantNumber = BattlePerformanceCommandCard__GetServantNumber(_4__this, (BattleCommandData_o *)method, 0LL);
        commandCompArray = _4__this->fields.commandCompArray;
        if ( !commandCompArray )
          goto LABEL_69;
        v39 = ServantNumber;
        if ( (unsigned int)(ServantNumber + 5) >= commandCompArray->max_length )
          goto LABEL_83;
        v40 = &commandCompArray->m_Items[(int)ServantNumber + 1];
        v41 = v40[4];
        if ( !v41 )
          goto LABEL_69;
        ServantNumber = BattleCommandComponent__checkObject(v40[4], 0LL);
        if ( (ServantNumber & 1) != 0 )
        {
          ServantNumber = (__int64)*v25;
          if ( !*v25 )
            goto LABEL_69;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)ServantNumber,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v41,
            (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_BattleCommandComponent__Add__);
          ServantNumber = (__int64)BattlePerformanceCommandCard__GetStatusUiObj(_4__this, v41->fields.data, 0LL);
          if ( !ServantNumber )
            goto LABEL_69;
          ServantNumber = *(_QWORD *)(ServantNumber + 160);
          if ( !ServantNumber )
            goto LABEL_69;
          transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)ServantNumber, 0LL);
          ServantNumber = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)_4__this, 0LL);
          if ( !ServantNumber )
            goto LABEL_69;
          v43 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)ServantNumber, 0LL);
          BaseMonoBehaviour__createObject_19214240(
            (BaseMonoBehaviour_o *)_4__this,
            (System_String_o *)StringLiteral_18253/*"effect/ef_noblegauge01"*/,
            v43,
            transform,
            0LL);
          ServantNumber = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)_4__this, 0LL);
          if ( !ServantNumber )
            goto LABEL_69;
          v44 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)ServantNumber, 0LL);
          Object_19214240 = BaseMonoBehaviour__createObject_19214240(
                              (BaseMonoBehaviour_o *)_4__this,
                              (System_String_o *)StringLiteral_18254/*"effect/ef_noblegauge02"*/,
                              v44,
                              transform,
                              0LL);
          ServantNumber = sub_B2C374(object___TypeInfo, 8LL);
          if ( !ServantNumber )
            goto LABEL_69;
          v46 = (System_Object_array *)ServantNumber;
          ServantNumber = StringLiteral_21511/*"position"*/;
          if ( StringLiteral_21511/*"position"*/ )
          {
            ServantNumber = sub_B2C41C(StringLiteral_21511/*"position"*/, v46->obj.klass->_1.element_class);
            if ( !ServantNumber )
              goto LABEL_85;
            v47 = StringLiteral_21511/*"position"*/;
          }
          else
          {
            v47 = 0LL;
          }
          if ( !v46->max_length )
            goto LABEL_83;
          v46->m_Items[0] = (Il2CppObject *)v47;
          sub_B2C2F8(v46->m_Items, v47);
          npGaugeLightTarget = _4__this->fields.npGaugeLightTarget;
          if ( !npGaugeLightTarget )
            goto LABEL_69;
          if ( v39 >= npGaugeLightTarget->max_length )
            goto LABEL_83;
          v49 = (Il2CppObject *)npGaugeLightTarget->m_Items[v39];
          if ( v49 )
          {
            ServantNumber = sub_B2C41C(v49, v46->obj.klass->_1.element_class);
            if ( !ServantNumber )
            {
LABEL_85:
              v69 = sub_B2C454();
              sub_B2C400(v69, 0LL);
            }
          }
          if ( v46->max_length <= 1 )
            goto LABEL_83;
          v46->m_Items[1] = v49;
          sub_B2C2F8(&v46->m_Items[1], v49);
          ServantNumber = StringLiteral_18114/*"easetype"*/;
          if ( StringLiteral_18114/*"easetype"*/ )
          {
            ServantNumber = sub_B2C41C(StringLiteral_18114/*"easetype"*/, v46->obj.klass->_1.element_class);
            if ( !ServantNumber )
              goto LABEL_85;
            v50 = StringLiteral_18114/*"easetype"*/;
          }
          else
          {
            v50 = 0LL;
          }
          if ( v46->max_length <= 2 )
            goto LABEL_83;
          v46->m_Items[2] = (Il2CppObject *)v50;
          sub_B2C2F8(&v46->m_Items[2], v50);
          npGaugeEaseType = _4__this->fields.npGaugeEaseType;
          ServantNumber = j_il2cpp_value_box_0(iTween_EaseType_TypeInfo, &npGaugeEaseType);
          v51 = (Il2CppObject *)ServantNumber;
          if ( ServantNumber )
          {
            ServantNumber = sub_B2C41C(ServantNumber, v46->obj.klass->_1.element_class);
            if ( !ServantNumber )
              goto LABEL_85;
          }
          if ( v46->max_length <= 3 )
            goto LABEL_83;
          v46->m_Items[3] = v51;
          sub_B2C2F8(&v46->m_Items[3], v51);
          ServantNumber = StringLiteral_17949/*"delay"*/;
          if ( StringLiteral_17949/*"delay"*/ )
          {
            ServantNumber = sub_B2C41C(StringLiteral_17949/*"delay"*/, v46->obj.klass->_1.element_class);
            if ( !ServantNumber )
              goto LABEL_85;
            v52 = StringLiteral_17949/*"delay"*/;
          }
          else
          {
            v52 = 0LL;
          }
          if ( v46->max_length <= 4 )
            goto LABEL_83;
          v46->m_Items[4] = (Il2CppObject *)v52;
          sub_B2C2F8(&v46->m_Items[4], v52);
          npGaugeEffectMoveDelayTime = _4__this->fields.npGaugeEffectMoveDelayTime;
          ServantNumber = j_il2cpp_value_box_0(float_TypeInfo, &npGaugeEffectMoveDelayTime);
          v53 = (Il2CppObject *)ServantNumber;
          if ( ServantNumber )
          {
            ServantNumber = sub_B2C41C(ServantNumber, v46->obj.klass->_1.element_class);
            if ( !ServantNumber )
              goto LABEL_85;
          }
          if ( v46->max_length <= 5 )
            goto LABEL_83;
          v46->m_Items[5] = v53;
          sub_B2C2F8(&v46->m_Items[5], v53);
          ServantNumber = StringLiteral_22677/*"time"*/;
          if ( StringLiteral_22677/*"time"*/ )
          {
            ServantNumber = sub_B2C41C(StringLiteral_22677/*"time"*/, v46->obj.klass->_1.element_class);
            if ( !ServantNumber )
              goto LABEL_85;
            v54 = StringLiteral_22677/*"time"*/;
          }
          else
          {
            v54 = 0LL;
          }
          if ( v46->max_length <= 6 )
          {
LABEL_83:
            v68 = sub_B2C460(ServantNumber);
            sub_B2C400(v68, 0LL);
          }
          v46->m_Items[6] = (Il2CppObject *)v54;
          sub_B2C2F8(&v46->m_Items[6], v54);
          npGaugeEffectMoveTime = _4__this->fields.npGaugeEffectMoveTime;
          ServantNumber = j_il2cpp_value_box_0(float_TypeInfo, &npGaugeEffectMoveTime);
          v55 = (Il2CppObject *)ServantNumber;
          if ( ServantNumber )
          {
            ServantNumber = sub_B2C41C(ServantNumber, v46->obj.klass->_1.element_class);
            if ( !ServantNumber )
              goto LABEL_85;
          }
          if ( v46->max_length <= 7 )
            goto LABEL_83;
          v46->m_Items[7] = v55;
          sub_B2C2F8(&v46->m_Items[7], v55);
          if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
          v56 = iTween__Hash(v46, 0LL);
          iTween__MoveTo_42732664(Object_19214240, v56, 0LL);
          v41->fields.nobleGaugeEffect = Object_19214240;
          sub_B2C2F8(&v41->fields.nobleGaugeEffect, Object_19214240);
        }
      }
    }
    p_commandlist = _4__this->fields.p_commandlist;
    ++v33;
    if ( !p_commandlist )
      goto LABEL_69;
  }
  npCardEffectDelayTime = _4__this->fields.npCardEffectDelayTime;
  v63 = (UnityEngine_WaitForSeconds_o *)sub_B2C42C(UnityEngine_WaitForSeconds_TypeInfo);
  UnityEngine_WaitForSeconds___ctor(v63, npCardEffectDelayTime, 0LL);
  this->fields.__2__current = (Il2CppObject *)v63;
  v64 = &this->fields.__2__current;
  sub_B2C2F8(v64, v63);
  result = 1;
  *((_DWORD *)v64 - 2) = 1;
  return result;
}


Il2CppObject *__fastcall BattlePerformanceCommandCard__colOpenNpCard_d__182__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattlePerformanceCommandCard__colOpenNpCard_d__182_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattlePerformanceCommandCard__colOpenNpCard_d__182__System_Collections_IEnumerator_Reset(
        BattlePerformanceCommandCard__colOpenNpCard_d__182_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B2C360(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B2C42C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B2C360(&Method_BattlePerformanceCommandCard__colOpenNpCard_d__182_System_Collections_IEnumerator_Reset__);
  sub_B2C400(v3, v4);
}


Il2CppObject *__fastcall BattlePerformanceCommandCard__colOpenNpCard_d__182__System_Collections_IEnumerator_get_Current(
        BattlePerformanceCommandCard__colOpenNpCard_d__182_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattlePerformanceCommandCard__colOpenNpCard_d__182__System_IDisposable_Dispose(
        BattlePerformanceCommandCard__colOpenNpCard_d__182_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattlePerformanceCommandCard__showComboEffectNormal_d__135___ctor(
        BattlePerformanceCommandCard__showComboEffectNormal_d__135_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattlePerformanceCommandCard__showComboEffectNormal_d__135__MoveNext(
        BattlePerformanceCommandCard__showComboEffectNormal_d__135_o *this,
        const MethodInfo *method)
{
  BattlePerformanceCommandCard__showComboEffectNormal_d__135_o *v2; // x19
  __int64 v3; // x1
  struct BattlePerformanceCommandCard_o *_4__this; // x20
  UnityEngine_Object_o *v5; // x21
  DefCoroutine_c *v6; // x0
  Il2CppObject *milliSecNine; // x1
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  struct BattleComboData_o *combo; // x8
  DefCoroutine_c *v11; // x0
  Il2CppObject *milliSecThree; // x1
  Il2CppObject **v13; // x19
  int v14; // w8
  DefCoroutine_c *v15; // x0
  Il2CppObject *milliSecTwo; // x1
  DefCoroutine_c *v17; // x0
  Il2CppObject *milliSecFour; // x1
  DefCoroutine_c *v19; // x0
  Il2CppObject *v20; // x1
  Il2CppObject *milliSecEleven; // x1
  int32_t seName; // [xsp+Ch] [xbp-24h] BYREF
  UnityEngine_GameObject_o *prefab; // [xsp+18h] [xbp-18h] BYREF

  v2 = this;
  if ( (byte_418507E & 1) == 0 )
  {
    sub_B2C35C(&DefCoroutine_TypeInfo, method);
    this = (BattlePerformanceCommandCard__showComboEffectNormal_d__135_o *)sub_B2C35C(&UnityEngine_Object_TypeInfo, v3);
    byte_418507E = 1;
  }
  prefab = 0LL;
  seName = 0;
  _4__this = v2->fields.__4__this;
  switch ( v2->fields.__1__state )
  {
    case 0:
      v2->fields.__1__state = -1;
      prefab = 0LL;
      seName = -1;
      if ( !_4__this )
        goto LABEL_55;
      BattlePerformanceCommandCard__setComboEffectPrefab(_4__this, v2->fields.combo, &prefab, &seName, 0LL);
      v5 = (UnityEngine_Object_o *)prefab;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Inequality(v5, 0LL, 0LL) )
        goto LABEL_20;
      BattlePerformanceCommandCard__playComboEffect(_4__this, prefab, seName, 0LL);
      v6 = DefCoroutine_TypeInfo;
      if ( (BYTE3(DefCoroutine_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DefCoroutine_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DefCoroutine_TypeInfo);
        v6 = DefCoroutine_TypeInfo;
      }
      milliSecNine = (Il2CppObject *)v6->static_fields->milliSecNine;
      v2->fields.__2__current = milliSecNine;
      p__2__current = &v2->fields.__2__current;
      sub_B2C2F8(p__2__current, milliSecNine);
      result = 1;
      *((_DWORD *)p__2__current - 2) = 1;
      return result;
    case 1:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_55;
      this = (BattlePerformanceCommandCard__showComboEffectNormal_d__135_o *)_4__this->fields.perf;
      if ( !this )
        goto LABEL_55;
      BattlePerformance__ChangeBattleSpeed((BattlePerformance_o *)this, 0LL);
LABEL_20:
      this = (BattlePerformanceCommandCard__showComboEffectNormal_d__135_o *)_4__this->fields.logic;
      if ( !this )
        goto LABEL_55;
      BattleLogic__procComboAct((BattleLogic_o *)this, 0LL);
      method = (const MethodInfo *)v2->fields.combo;
      if ( !method )
        goto LABEL_55;
      if ( LOBYTE(method->name) )
      {
        BattlePerformanceCommandCard__PlayFlash(_4__this, (BattleComboData_o *)method, 0LL);
        combo = v2->fields.combo;
        if ( !combo )
LABEL_55:
          sub_B2C434(this, method);
        v11 = DefCoroutine_TypeInfo;
        if ( combo->fields.samecount == 3 )
        {
          if ( (WORD1(DefCoroutine_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !DefCoroutine_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(DefCoroutine_TypeInfo);
            v11 = DefCoroutine_TypeInfo;
          }
          milliSecThree = (Il2CppObject *)v11->static_fields->milliSecThree;
          v2->fields.__2__current = milliSecThree;
          v13 = &v2->fields.__2__current;
          sub_B2C2F8(v13, milliSecThree);
          v14 = 2;
        }
        else
        {
          if ( (WORD1(DefCoroutine_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !DefCoroutine_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(DefCoroutine_TypeInfo);
            v11 = DefCoroutine_TypeInfo;
          }
          milliSecEleven = (Il2CppObject *)v11->static_fields->milliSecEleven;
          v2->fields.__2__current = milliSecEleven;
          v13 = &v2->fields.__2__current;
          sub_B2C2F8(v13, milliSecEleven);
          v14 = 3;
        }
      }
      else
      {
LABEL_29:
        if ( HIDWORD(method->name) != 3 )
          return 0;
        BattlePerformanceCommandCard__PlayFlashComboSvt(_4__this, (BattleComboData_o *)method, 0LL);
        v15 = DefCoroutine_TypeInfo;
        if ( (BYTE3(DefCoroutine_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DefCoroutine_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DefCoroutine_TypeInfo);
          v15 = DefCoroutine_TypeInfo;
        }
        milliSecTwo = (Il2CppObject *)v15->static_fields->milliSecTwo;
        v2->fields.__2__current = milliSecTwo;
        v13 = &v2->fields.__2__current;
        sub_B2C2F8(v13, milliSecTwo);
        v14 = 4;
      }
LABEL_54:
      *((_DWORD *)v13 - 2) = v14;
      return 1;
    case 2:
    case 3:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_55;
      this = (BattlePerformanceCommandCard__showComboEffectNormal_d__135_o *)_4__this->fields.perf;
      if ( !this )
        goto LABEL_55;
      BattlePerformance__ChangeBattleSpeed((BattlePerformance_o *)this, 0LL);
      method = (const MethodInfo *)v2->fields.combo;
      if ( !method )
        goto LABEL_55;
      goto LABEL_29;
    case 4:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_55;
      this = (BattlePerformanceCommandCard__showComboEffectNormal_d__135_o *)_4__this->fields.perf;
      if ( !this )
        goto LABEL_55;
      BattlePerformance__ChangeBattleSpeed((BattlePerformance_o *)this, 0LL);
      BattlePerformanceCommandCard__MoveSelectedCard(_4__this, 0.3, 0LL);
      BattlePerformanceCommandCard__AddExtraCard(_4__this, 0LL);
      BattlePerformanceCommandCard__MoveExtraCard(_4__this, 0.4, 0LL);
      v17 = DefCoroutine_TypeInfo;
      if ( (BYTE3(DefCoroutine_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DefCoroutine_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DefCoroutine_TypeInfo);
        v17 = DefCoroutine_TypeInfo;
      }
      milliSecFour = (Il2CppObject *)v17->static_fields->milliSecFour;
      v2->fields.__2__current = milliSecFour;
      v13 = &v2->fields.__2__current;
      sub_B2C2F8(v13, milliSecFour);
      v14 = 5;
      goto LABEL_54;
    case 5:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_55;
      this = (BattlePerformanceCommandCard__showComboEffectNormal_d__135_o *)_4__this->fields.perf;
      if ( !this )
        goto LABEL_55;
      BattlePerformance__ChangeBattleSpeed((BattlePerformance_o *)this, 0LL);
      BattlePerformanceCommandCard__PlayFlashExtra(_4__this, 0LL);
      v19 = DefCoroutine_TypeInfo;
      if ( (BYTE3(DefCoroutine_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DefCoroutine_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DefCoroutine_TypeInfo);
        v19 = DefCoroutine_TypeInfo;
      }
      v20 = (Il2CppObject *)v19->static_fields->milliSecEleven;
      v2->fields.__2__current = v20;
      v13 = &v2->fields.__2__current;
      sub_B2C2F8(v13, v20);
      v14 = 6;
      goto LABEL_54;
    case 6:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_55;
      this = (BattlePerformanceCommandCard__showComboEffectNormal_d__135_o *)_4__this->fields.perf;
      if ( !this )
        goto LABEL_55;
      BattlePerformance__ChangeBattleSpeed((BattlePerformance_o *)this, 0LL);
      return 0;
    default:
      return 0;
  }
}


Il2CppObject *__fastcall BattlePerformanceCommandCard__showComboEffectNormal_d__135__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattlePerformanceCommandCard__showComboEffectNormal_d__135_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattlePerformanceCommandCard__showComboEffectNormal_d__135__System_Collections_IEnumerator_Reset(
        BattlePerformanceCommandCard__showComboEffectNormal_d__135_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B2C360(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B2C42C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B2C360(&Method_BattlePerformanceCommandCard__showComboEffectNormal_d__135_System_Collections_IEnumerator_Reset__);
  sub_B2C400(v3, v4);
}


Il2CppObject *__fastcall BattlePerformanceCommandCard__showComboEffectNormal_d__135__System_Collections_IEnumerator_get_Current(
        BattlePerformanceCommandCard__showComboEffectNormal_d__135_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattlePerformanceCommandCard__showComboEffectNormal_d__135__System_IDisposable_Dispose(
        BattlePerformanceCommandCard__showComboEffectNormal_d__135_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattlePerformanceCommandCard__showComboEffectShort_d__134___ctor(
        BattlePerformanceCommandCard__showComboEffectShort_d__134_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattlePerformanceCommandCard__showComboEffectShort_d__134__MoveNext(
        BattlePerformanceCommandCard__showComboEffectShort_d__134_o *this,
        const MethodInfo *method)
{
  BattlePerformanceCommandCard__showComboEffectShort_d__134_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct BattlePerformanceCommandCard_o *_4__this; // x20
  BattlePerformanceCommandCard__showComboEffectShort_d__134_o **p_combo; // x24
  DefCoroutine_c *v12; // x0
  Il2CppObject *milliSecThreeSixSix; // x1
  Il2CppObject **p__2__current; // x19
  int v15; // w8
  Il2CppObject *milliSecEightSixSix; // x1
  System_Collections_Generic_IEnumerable_TSource__o *selectedcomponents; // x21
  BattlePerformanceCommandCard___c_c *v18; // x0
  struct BattlePerformanceCommandCard___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__134_0; // x22
  Il2CppObject *v21; // x23
  struct BattlePerformanceCommandCard___c_StaticFields *v22; // x0
  UICommonButton_o *v23; // x0
  struct BattlePerformance_o *perf; // x8
  int32_t FirstBonusCriticalRate; // w0
  bool isExtraAttack; // w0
  DefCoroutine_c *v27; // x8
  Il2CppObject **p_milliSecThreeSixSix; // x8
  Il2CppObject *v29; // x1
  DefCoroutine_c *v30; // x0
  Il2CppObject *milliSecTwo; // x1
  bool result; // w0
  struct BattleComboData_o *v33; // x8
  DefCoroutine_c *v34; // x0
  Il2CppObject *milliSecFour; // x1
  UnityEngine_Object_o *v36; // x21
  struct BattleComboData_o *combo; // x8
  DefCoroutine_c *v38; // x0
  Il2CppObject *v39; // x1
  Il2CppObject **v40; // x19
  DefCoroutine_c *v41; // x0
  Il2CppObject *v42; // x1
  Il2CppObject *v43; // x1
  DefCoroutine_c *v44; // x0
  Il2CppObject *milliSecNine; // x1
  DefCoroutine_c *v46; // x0
  Il2CppObject *milliSecThreeThreeThree; // x1
  Il2CppObject *v48; // x1
  DefCoroutine_c *v49; // x0
  Il2CppObject *milliSecTwoSixSix; // x1
  Il2CppObject *milliSecThree; // x1
  int32_t seName; // [xsp+4h] [xbp-4Ch] BYREF
  UnityEngine_GameObject_o *prefab; // [xsp+8h] [xbp-48h] BYREF

  v2 = this;
  if ( (byte_418507F & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Array_IndexOf_BattleCommandComponent___, method);
    sub_B2C35C(&DefCoroutine_TypeInfo, v3);
    sub_B2C35C(&Method_System_Linq_Enumerable_FirstOrDefault_BattleCommandComponent___, v4);
    sub_B2C35C(&Method_System_Func_BattleCommandComponent__bool___ctor__, v5);
    sub_B2C35C(&System_Func_BattleCommandComponent__bool__TypeInfo, v6);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v7);
    sub_B2C35C(&Method_BattlePerformanceCommandCard___c__showComboEffectShort_b__134_0__, v8);
    this = (BattlePerformanceCommandCard__showComboEffectShort_d__134_o *)sub_B2C35C(
                                                                            &BattlePerformanceCommandCard___c_TypeInfo,
                                                                            v9);
    byte_418507F = 1;
  }
  prefab = 0LL;
  seName = 0;
  _4__this = v2->fields.__4__this;
  switch ( v2->fields.__1__state )
  {
    case 0:
      v2->fields.__1__state = -1;
      prefab = 0LL;
      seName = -1;
      if ( !_4__this )
        goto LABEL_116;
      BattlePerformanceCommandCard__setComboEffectPrefab(_4__this, v2->fields.combo, &prefab, &seName, 0LL);
      v36 = (UnityEngine_Object_o *)prefab;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Inequality(v36, 0LL, 0LL) )
        goto LABEL_7;
      BattlePerformanceCommandCard__playComboEffect(_4__this, prefab, seName, 0LL);
      this = (BattlePerformanceCommandCard__showComboEffectShort_d__134_o *)v2->fields.combo;
      if ( !this )
        goto LABEL_116;
      this = (BattlePerformanceCommandCard__showComboEffectShort_d__134_o *)BattleComboData__AchieveAnyChain(
                                                                              (BattleComboData_o *)this,
                                                                              0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        v44 = DefCoroutine_TypeInfo;
        if ( (BYTE3(DefCoroutine_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DefCoroutine_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DefCoroutine_TypeInfo);
          v44 = DefCoroutine_TypeInfo;
        }
        milliSecNine = (Il2CppObject *)v44->static_fields->milliSecNine;
        v2->fields.__2__current = milliSecNine;
        p__2__current = &v2->fields.__2__current;
        sub_B2C2F8(p__2__current, milliSecNine);
        v15 = 6;
        goto LABEL_115;
      }
      combo = v2->fields.combo;
      if ( !combo )
        goto LABEL_116;
      if ( !combo->fields.flash )
      {
        if ( !combo->fields.isMighty )
          goto LABEL_106;
        this = (BattlePerformanceCommandCard__showComboEffectShort_d__134_o *)BattleComboData__isExtraAttack(
                                                                                v2->fields.combo,
                                                                                0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          v46 = DefCoroutine_TypeInfo;
          if ( (BYTE3(DefCoroutine_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !DefCoroutine_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(DefCoroutine_TypeInfo);
            v46 = DefCoroutine_TypeInfo;
          }
          milliSecThreeThreeThree = (Il2CppObject *)v46->static_fields->milliSecThreeThreeThree;
          v2->fields.__2__current = milliSecThreeThreeThree;
          p__2__current = &v2->fields.__2__current;
          sub_B2C2F8(p__2__current, milliSecThreeThreeThree);
          v15 = 3;
          goto LABEL_115;
        }
        combo = v2->fields.combo;
        if ( combo )
        {
LABEL_106:
          v49 = DefCoroutine_TypeInfo;
          if ( combo->fields.isMighty )
          {
            if ( (WORD1(DefCoroutine_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
              && !DefCoroutine_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(DefCoroutine_TypeInfo);
              v49 = DefCoroutine_TypeInfo;
            }
            milliSecTwoSixSix = (Il2CppObject *)v49->static_fields->milliSecTwoSixSix;
            v2->fields.__2__current = milliSecTwoSixSix;
            p__2__current = &v2->fields.__2__current;
            sub_B2C2F8(p__2__current, milliSecTwoSixSix);
            v15 = 4;
          }
          else
          {
            if ( (WORD1(DefCoroutine_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
              && !DefCoroutine_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(DefCoroutine_TypeInfo);
              v49 = DefCoroutine_TypeInfo;
            }
            milliSecThree = (Il2CppObject *)v49->static_fields->milliSecThree;
            v2->fields.__2__current = milliSecThree;
            p__2__current = &v2->fields.__2__current;
            sub_B2C2F8(p__2__current, milliSecThree);
            v15 = 5;
          }
          goto LABEL_115;
        }
LABEL_116:
        sub_B2C434(this, method);
      }
      v38 = DefCoroutine_TypeInfo;
      if ( combo->fields.samecount != 3 )
      {
        if ( (WORD1(DefCoroutine_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !DefCoroutine_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DefCoroutine_TypeInfo);
          v38 = DefCoroutine_TypeInfo;
        }
        v48 = (Il2CppObject *)v38->static_fields->milliSecTwoSixSix;
        v2->fields.__2__current = v48;
        p__2__current = &v2->fields.__2__current;
        sub_B2C2F8(p__2__current, v48);
        v15 = 2;
LABEL_115:
        *((_DWORD *)p__2__current - 2) = v15;
        return 1;
      }
      if ( (WORD1(DefCoroutine_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !DefCoroutine_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DefCoroutine_TypeInfo);
        v38 = DefCoroutine_TypeInfo;
      }
      v39 = (Il2CppObject *)v38->static_fields->milliSecThreeThreeThree;
      v2->fields.__2__current = v39;
      v40 = &v2->fields.__2__current;
      sub_B2C2F8(v40, v39);
      result = 1;
      *((_DWORD *)v40 - 2) = 1;
      return result;
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_116;
      this = (BattlePerformanceCommandCard__showComboEffectShort_d__134_o *)_4__this->fields.perf;
      if ( !this )
        goto LABEL_116;
      BattlePerformance__ChangeBattleSpeed((BattlePerformance_o *)this, 0LL);
LABEL_7:
      this = (BattlePerformanceCommandCard__showComboEffectShort_d__134_o *)_4__this->fields.logic;
      if ( !this )
        goto LABEL_116;
      BattleLogic__procComboAct((BattleLogic_o *)this, 0LL);
      p_combo = (BattlePerformanceCommandCard__showComboEffectShort_d__134_o **)&v2->fields.combo;
      method = (const MethodInfo *)v2->fields.combo;
      if ( !method )
        goto LABEL_116;
      if ( LOBYTE(method->name) )
      {
        BattlePerformanceCommandCard__PlayFlash(_4__this, (BattleComboData_o *)method, 0LL);
        if ( *p_combo )
        {
          v12 = DefCoroutine_TypeInfo;
          if ( *(&(*p_combo)->fields.__1__state + 1) == 3 )
          {
            if ( (WORD1(DefCoroutine_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
              && !DefCoroutine_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(DefCoroutine_TypeInfo);
              v12 = DefCoroutine_TypeInfo;
            }
            milliSecThreeSixSix = (Il2CppObject *)v12->static_fields->milliSecThreeSixSix;
            v2->fields.__2__current = milliSecThreeSixSix;
            p__2__current = &v2->fields.__2__current;
            sub_B2C2F8(p__2__current, milliSecThreeSixSix);
            v15 = 7;
          }
          else
          {
            if ( (WORD1(DefCoroutine_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
              && !DefCoroutine_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(DefCoroutine_TypeInfo);
              v12 = DefCoroutine_TypeInfo;
            }
            milliSecEightSixSix = (Il2CppObject *)v12->static_fields->milliSecEightSixSix;
            v2->fields.__2__current = milliSecEightSixSix;
            p__2__current = &v2->fields.__2__current;
            sub_B2C2F8(p__2__current, milliSecEightSixSix);
            v15 = 8;
          }
          goto LABEL_115;
        }
      }
      else
      {
LABEL_23:
        if ( !BYTE1(method->name) )
        {
LABEL_53:
          if ( HIDWORD(method->name) != 3 )
            return 0;
          BattlePerformanceCommandCard__PlayFlashComboSvt(_4__this, (BattleComboData_o *)method, 0LL);
          v30 = DefCoroutine_TypeInfo;
          if ( (BYTE3(DefCoroutine_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !DefCoroutine_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(DefCoroutine_TypeInfo);
            v30 = DefCoroutine_TypeInfo;
          }
          milliSecTwo = (Il2CppObject *)v30->static_fields->milliSecTwo;
          v2->fields.__2__current = milliSecTwo;
          p__2__current = &v2->fields.__2__current;
          sub_B2C2F8(p__2__current, milliSecTwo);
          v15 = 10;
          goto LABEL_115;
        }
        selectedcomponents = (System_Collections_Generic_IEnumerable_TSource__o *)_4__this->fields.selectedcomponents;
        v18 = BattlePerformanceCommandCard___c_TypeInfo;
        if ( (BYTE3(BattlePerformanceCommandCard___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BattlePerformanceCommandCard___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BattlePerformanceCommandCard___c_TypeInfo);
          v18 = BattlePerformanceCommandCard___c_TypeInfo;
        }
        static_fields = v18->static_fields;
        _9__134_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__134_0;
        if ( !_9__134_0 )
        {
          if ( (BYTE3(v18->vtable._0_Equals.methodPtr) & 4) != 0 && !v18->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v18);
            static_fields = BattlePerformanceCommandCard___c_TypeInfo->static_fields;
          }
          v21 = (Il2CppObject *)static_fields->__9;
          _9__134_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_BattleCommandComponent__bool__TypeInfo);
          System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
            _9__134_0,
            v21,
            Method_BattlePerformanceCommandCard___c__showComboEffectShort_b__134_0__,
            (const MethodInfo_2711C04 *)Method_System_Func_BattleCommandComponent__bool___ctor__);
          v22 = BattlePerformanceCommandCard___c_TypeInfo->static_fields;
          v22->__9__134_0 = (struct System_Func_BattleCommandComponent__bool__o *)_9__134_0;
          sub_B2C2F8(&v22->__9__134_0, _9__134_0);
        }
        v23 = (UICommonButton_o *)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                                    selectedcomponents,
                                    (System_Func_TSource__bool__o *)_9__134_0,
                                    (const MethodInfo_1A9113C *)Method_System_Linq_Enumerable_FirstOrDefault_BattleCommandComponent___);
        this = (BattlePerformanceCommandCard__showComboEffectShort_d__134_o *)System_Array__IndexOf_UICommonButton_(
                                                                                (UICommonButton_array *)_4__this->fields.selectedcomponents,
                                                                                v23,
                                                                                (const MethodInfo_1FFD67C *)Method_System_Array_IndexOf_BattleCommandComponent___);
        if ( (int)this >= 1 )
        {
          perf = _4__this->fields.perf;
          if ( !perf )
            goto LABEL_116;
          this = (BattlePerformanceCommandCard__showComboEffectShort_d__134_o *)perf->fields.data;
          if ( !this )
            goto LABEL_116;
          FirstBonusCriticalRate = BattleData__GetFirstBonusCriticalRate((BattleData_o *)this, 3, 0LL);
          BattlePerformanceCommandCard__DistributeCriticalPoint(_4__this, FirstBonusCriticalRate / 10, 1, 0LL);
        }
        this = *p_combo;
        if ( *p_combo )
        {
          isExtraAttack = BattleComboData__isExtraAttack((BattleComboData_o *)this, 0LL);
          v27 = DefCoroutine_TypeInfo;
          if ( isExtraAttack )
          {
            if ( (WORD1(DefCoroutine_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
              && !DefCoroutine_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(DefCoroutine_TypeInfo);
              v27 = DefCoroutine_TypeInfo;
            }
            p_milliSecThreeSixSix = (Il2CppObject **)&v27->static_fields->milliSecThreeSixSix;
          }
          else
          {
            if ( (WORD1(DefCoroutine_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
              && !DefCoroutine_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(DefCoroutine_TypeInfo);
              v27 = DefCoroutine_TypeInfo;
            }
            p_milliSecThreeSixSix = (Il2CppObject **)&v27->static_fields->milliSecEightSixSix;
          }
          v29 = *p_milliSecThreeSixSix;
          v2->fields.__2__current = *p_milliSecThreeSixSix;
          p__2__current = &v2->fields.__2__current;
          sub_B2C2F8(p__2__current, v29);
          v15 = 9;
          goto LABEL_115;
        }
      }
      goto LABEL_116;
    case 7:
    case 8:
      v2->fields.__1__state = -1;
      if ( _4__this )
      {
        this = (BattlePerformanceCommandCard__showComboEffectShort_d__134_o *)_4__this->fields.perf;
        if ( this )
        {
          BattlePerformance__ChangeBattleSpeed((BattlePerformance_o *)this, 0LL);
          p_combo = (BattlePerformanceCommandCard__showComboEffectShort_d__134_o **)&v2->fields.combo;
          method = (const MethodInfo *)v2->fields.combo;
          if ( method )
            goto LABEL_23;
        }
      }
      goto LABEL_116;
    case 9:
      v2->fields.__1__state = -1;
      if ( _4__this )
      {
        this = (BattlePerformanceCommandCard__showComboEffectShort_d__134_o *)_4__this->fields.perf;
        if ( this )
        {
          BattlePerformance__ChangeBattleSpeed((BattlePerformance_o *)this, 0LL);
          method = (const MethodInfo *)v2->fields.combo;
          if ( method )
            goto LABEL_53;
        }
      }
      goto LABEL_116;
    case 0xA:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_116;
      this = (BattlePerformanceCommandCard__showComboEffectShort_d__134_o *)_4__this->fields.perf;
      if ( !this )
        goto LABEL_116;
      BattlePerformance__ChangeBattleSpeed((BattlePerformance_o *)this, 0LL);
      BattlePerformanceCommandCard__MoveSelectedCard(_4__this, 0.3, 0LL);
      BattlePerformanceCommandCard__AddExtraCard(_4__this, 0LL);
      BattlePerformanceCommandCard__MoveExtraCard(_4__this, 0.3, 0LL);
      v41 = DefCoroutine_TypeInfo;
      if ( (BYTE3(DefCoroutine_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DefCoroutine_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DefCoroutine_TypeInfo);
        v41 = DefCoroutine_TypeInfo;
      }
      v42 = (Il2CppObject *)v41->static_fields->milliSecTwoSixSix;
      v2->fields.__2__current = v42;
      p__2__current = &v2->fields.__2__current;
      sub_B2C2F8(p__2__current, v42);
      v15 = 11;
      goto LABEL_115;
    case 0xB:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_116;
      this = (BattlePerformanceCommandCard__showComboEffectShort_d__134_o *)_4__this->fields.perf;
      if ( !this )
        goto LABEL_116;
      BattlePerformance__ChangeBattleSpeed((BattlePerformance_o *)this, 0LL);
      BattlePerformanceCommandCard__PlayFlashExtra(_4__this, 0LL);
      v33 = v2->fields.combo;
      if ( !v33 )
        goto LABEL_116;
      v34 = DefCoroutine_TypeInfo;
      if ( v33->fields.flash )
      {
        if ( (WORD1(DefCoroutine_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !DefCoroutine_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DefCoroutine_TypeInfo);
          v34 = DefCoroutine_TypeInfo;
        }
        milliSecFour = (Il2CppObject *)v34->static_fields->milliSecFour;
        v2->fields.__2__current = milliSecFour;
        p__2__current = &v2->fields.__2__current;
        sub_B2C2F8(p__2__current, milliSecFour);
        v15 = 13;
      }
      else
      {
        if ( (WORD1(DefCoroutine_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !DefCoroutine_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DefCoroutine_TypeInfo);
          v34 = DefCoroutine_TypeInfo;
        }
        v43 = (Il2CppObject *)v34->static_fields->milliSecThreeThreeThree;
        v2->fields.__2__current = v43;
        p__2__current = &v2->fields.__2__current;
        sub_B2C2F8(p__2__current, v43);
        v15 = 12;
      }
      goto LABEL_115;
    case 0xC:
    case 0xD:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_116;
      this = (BattlePerformanceCommandCard__showComboEffectShort_d__134_o *)_4__this->fields.perf;
      if ( !this )
        goto LABEL_116;
      BattlePerformance__ChangeBattleSpeed((BattlePerformance_o *)this, 0LL);
      return 0;
    default:
      return 0;
  }
}


Il2CppObject *__fastcall BattlePerformanceCommandCard__showComboEffectShort_d__134__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattlePerformanceCommandCard__showComboEffectShort_d__134_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattlePerformanceCommandCard__showComboEffectShort_d__134__System_Collections_IEnumerator_Reset(
        BattlePerformanceCommandCard__showComboEffectShort_d__134_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B2C360(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B2C42C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B2C360(&Method_BattlePerformanceCommandCard__showComboEffectShort_d__134_System_Collections_IEnumerator_Reset__);
  sub_B2C400(v3, v4);
}


Il2CppObject *__fastcall BattlePerformanceCommandCard__showComboEffectShort_d__134__System_Collections_IEnumerator_get_Current(
        BattlePerformanceCommandCard__showComboEffectShort_d__134_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattlePerformanceCommandCard__showComboEffectShort_d__134__System_IDisposable_Dispose(
        BattlePerformanceCommandCard__showComboEffectShort_d__134_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattlePerformanceCommandCard__showComboEffect_d__133___ctor(
        BattlePerformanceCommandCard__showComboEffect_d__133_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattlePerformanceCommandCard__showComboEffect_d__133__MoveNext(
        BattlePerformanceCommandCard__showComboEffect_d__133_o *this,
        const MethodInfo *method)
{
  BattlePerformanceCommandCard__showComboEffect_d__133_o *v2; // x19
  __int64 v3; // x1
  struct BattlePerformanceCommandCard_o *_4__this; // x20
  DefCoroutine_c *v5; // x0
  Il2CppObject *milliSecOne; // x1
  Il2CppObject **p__2__current; // x19
  UnityEngine_Object_o *chainBonusObject; // x21
  UnityEngine_Object_o *v9; // x21
  __int64 v10; // x22
  struct BattleCommandComponent_array *selectedcomponents; // x8
  int32_t CommandType; // w0
  struct BattleCommandComponent_array *v13; // x8
  UnityEngine_GameObject_o *gameObject; // x21
  float g; // s5
  float b; // s6
  float a; // s7
  float v18; // s4
  System_Collections_IEnumerator_o *v19; // x0
  UnityEngine_Coroutine_o *v20; // x0
  int v21; // w8
  System_Collections_IEnumerator_o *v22; // x0
  UnityEngine_Coroutine_o *started; // x0
  bool result; // w0
  DefCoroutine_c *v25; // x0
  Il2CppObject *milliSecFour; // x1
  Il2CppObject **v27; // x19
  __int64 v28; // x0
  UnityEngine_Color_o clear; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4 OVERLAPPED

  v2 = this;
  if ( (byte_418507D & 1) == 0 )
  {
    sub_B2C35C(&DefCoroutine_TypeInfo, method);
    this = (BattlePerformanceCommandCard__showComboEffect_d__133_o *)sub_B2C35C(&UnityEngine_Object_TypeInfo, v3);
    byte_418507D = 1;
  }
  _4__this = v2->fields.__4__this;
  switch ( v2->fields.__1__state )
  {
    case 0:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_44;
      chainBonusObject = (UnityEngine_Object_o *)_4__this->fields.chainBonusObject;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      this = (BattlePerformanceCommandCard__showComboEffect_d__133_o *)UnityEngine_Object__op_Inequality(
                                                                         chainBonusObject,
                                                                         0LL,
                                                                         0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v9 = (UnityEngine_Object_o *)_4__this->fields.chainBonusObject;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        UnityEngine_Object__Destroy_35314896(v9, 0LL);
      }
      v10 = 0LL;
      break;
    case 1:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_44;
      v22 = BattlePerformanceCommandCard__showComboEffectNormal(_4__this, v2->fields.combo, 0LL);
      started = UnityEngine_MonoBehaviour__StartCoroutine_35309748((UnityEngine_MonoBehaviour_o *)_4__this, v22, 0LL);
      v2->fields.__2__current = (Il2CppObject *)started;
      sub_B2C2F8(&v2->fields.__2__current, started);
      v21 = 2;
      goto LABEL_33;
    case 2:
    case 3:
      v2->fields.__1__state = -1;
      v5 = DefCoroutine_TypeInfo;
      if ( (BYTE3(DefCoroutine_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DefCoroutine_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DefCoroutine_TypeInfo);
        v5 = DefCoroutine_TypeInfo;
      }
      milliSecOne = (Il2CppObject *)v5->static_fields->milliSecOne;
      v2->fields.__2__current = milliSecOne;
      p__2__current = &v2->fields.__2__current;
      sub_B2C2F8(p__2__current, milliSecOne);
      *((_DWORD *)p__2__current - 2) = 4;
      return 1;
    case 4:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_44;
      this = (BattlePerformanceCommandCard__showComboEffect_d__133_o *)_4__this->fields.perf;
      if ( !this )
        goto LABEL_44;
      BattlePerformance__ChangeBattleSpeed((BattlePerformance_o *)this, 0LL);
      this = (BattlePerformanceCommandCard__showComboEffect_d__133_o *)_4__this->fields.commandfsm;
      if ( !this )
        goto LABEL_44;
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, v2->fields.endproc, 0LL);
      return 0;
    default:
      return 0;
  }
  do
  {
    selectedcomponents = _4__this->fields.selectedcomponents;
    if ( !selectedcomponents )
      goto LABEL_44;
    if ( (unsigned int)v10 >= selectedcomponents->max_length )
      goto LABEL_45;
    this = (BattlePerformanceCommandCard__showComboEffect_d__133_o *)selectedcomponents->m_Items[v10];
    if ( !this )
      goto LABEL_44;
    CommandType = BattleCommandComponent__getCommandType((BattleCommandComponent_o *)this, 0LL);
    this = (BattlePerformanceCommandCard__showComboEffect_d__133_o *)BattleCommand__isBLANK(CommandType, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v13 = _4__this->fields.selectedcomponents;
      if ( !v13 )
        goto LABEL_44;
      if ( (unsigned int)v10 >= v13->max_length )
      {
LABEL_45:
        v28 = sub_B2C460(this);
        sub_B2C400(v28, 0LL);
      }
      this = (BattlePerformanceCommandCard__showComboEffect_d__133_o *)v13->m_Items[v10];
      if ( !this )
        goto LABEL_44;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      clear = UnityEngine_Color__get_clear(0LL);
      g = clear.fields.g;
      b = clear.fields.b;
      a = clear.fields.a;
      clear.fields.g = clear.fields.r;
      clear.fields.b = g;
      clear.fields.a = b;
      v18 = a;
      this = (BattlePerformanceCommandCard__showComboEffect_d__133_o *)TweenColor__Begin(
                                                                         gameObject,
                                                                         0.2,
                                                                         *(UnityEngine_Color_o *)&clear.fields.g,
                                                                         0LL);
    }
    ++v10;
  }
  while ( (unsigned int)(v10 - 1) < 2 );
  this = (BattlePerformanceCommandCard__showComboEffect_d__133_o *)v2->fields.combo;
  if ( !this )
LABEL_44:
    sub_B2C434(this, method);
  if ( BYTE2(this->fields.__1__state) || !BattleComboData__AchieveAnyChain((BattleComboData_o *)this, 0LL) )
  {
    v25 = DefCoroutine_TypeInfo;
    if ( (BYTE3(DefCoroutine_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !DefCoroutine_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(DefCoroutine_TypeInfo);
      v25 = DefCoroutine_TypeInfo;
    }
    milliSecFour = (Il2CppObject *)v25->static_fields->milliSecFour;
    v2->fields.__2__current = milliSecFour;
    v27 = &v2->fields.__2__current;
    sub_B2C2F8(v27, milliSecFour);
    result = 1;
    *((_DWORD *)v27 - 2) = 1;
  }
  else
  {
    v19 = BattlePerformanceCommandCard__showComboEffectShort(_4__this, v2->fields.combo, 0LL);
    v20 = UnityEngine_MonoBehaviour__StartCoroutine_35309748((UnityEngine_MonoBehaviour_o *)_4__this, v19, 0LL);
    v2->fields.__2__current = (Il2CppObject *)v20;
    sub_B2C2F8(&v2->fields.__2__current, v20);
    v21 = 3;
LABEL_33:
    v2->fields.__1__state = v21;
    return 1;
  }
  return result;
}


Il2CppObject *__fastcall BattlePerformanceCommandCard__showComboEffect_d__133__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattlePerformanceCommandCard__showComboEffect_d__133_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattlePerformanceCommandCard__showComboEffect_d__133__System_Collections_IEnumerator_Reset(
        BattlePerformanceCommandCard__showComboEffect_d__133_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B2C360(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B2C42C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B2C360(&Method_BattlePerformanceCommandCard__showComboEffect_d__133_System_Collections_IEnumerator_Reset__);
  sub_B2C400(v3, v4);
}


Il2CppObject *__fastcall BattlePerformanceCommandCard__showComboEffect_d__133__System_Collections_IEnumerator_get_Current(
        BattlePerformanceCommandCard__showComboEffect_d__133_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattlePerformanceCommandCard__showComboEffect_d__133__System_IDisposable_Dispose(
        BattlePerformanceCommandCard__showComboEffect_d__133_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattlePerformanceCommandCard__waitFallStar_d__97___ctor(
        BattlePerformanceCommandCard__waitFallStar_d__97_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattlePerformanceCommandCard__waitFallStar_d__97__MoveNext(
        BattlePerformanceCommandCard__waitFallStar_d__97_o *this,
        const MethodInfo *method)
{
  BattlePerformanceCommandCard__waitFallStar_d__97_o *v2; // x19
  int32_t _1__state; // w8
  BattlePerformanceCommandCard_o *_4__this; // x20
  struct BattleCommandComponent_array *commandCompArray; // x8
  il2cpp_array_size_t v6; // w21
  il2cpp_array_size_t max_length; // w9
  DefCoroutine_c *v8; // x0
  Il2CppObject *milliSecFive; // x1
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  DefCoroutine_c *v12; // x0
  Il2CppObject *milliSecThree; // x1
  Il2CppObject **v14; // x19
  __int64 v15; // x0

  v2 = this;
  if ( (byte_4185080 & 1) == 0 )
  {
    this = (BattlePerformanceCommandCard__waitFallStar_d__97_o *)sub_B2C35C(&DefCoroutine_TypeInfo, method);
    byte_4185080 = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state == 2 )
  {
    v2->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_13;
    BattlePerformanceCommandCard__StartCountupCommandStar(_4__this, 1, 0LL);
    return 0;
  }
  if ( _1__state == 1 )
  {
    v2->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_13;
    if ( BattlePerformanceCommandCard__fallStar(_4__this, 0LL) )
    {
      v8 = DefCoroutine_TypeInfo;
      if ( (BYTE3(DefCoroutine_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DefCoroutine_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DefCoroutine_TypeInfo);
        v8 = DefCoroutine_TypeInfo;
      }
      milliSecFive = (Il2CppObject *)v8->static_fields->milliSecFive;
      v2->fields.__2__current = milliSecFive;
      p__2__current = &v2->fields.__2__current;
      sub_B2C2F8(p__2__current, milliSecFive);
      *((_DWORD *)p__2__current - 2) = 2;
      return 1;
    }
    return 0;
  }
  if ( _1__state )
    return 0;
  v2->fields.__1__state = -1;
  if ( !_4__this || (commandCompArray = _4__this->fields.commandCompArray) == 0LL )
LABEL_13:
    sub_B2C434(this, method);
  v6 = 0;
  while ( 1 )
  {
    max_length = commandCompArray->max_length;
    if ( (int)v6 >= (int)max_length )
      break;
    if ( v6 >= max_length )
    {
      v15 = sub_B2C460(this);
      sub_B2C400(v15, 0LL);
    }
    this = (BattlePerformanceCommandCard__waitFallStar_d__97_o *)commandCompArray->m_Items[v6];
    if ( this )
    {
      BattleCommandComponent__setCriticalObject((BattleCommandComponent_o *)this, 0, 0LL);
      commandCompArray = _4__this->fields.commandCompArray;
      ++v6;
      if ( commandCompArray )
        continue;
    }
    goto LABEL_13;
  }
  v12 = DefCoroutine_TypeInfo;
  if ( (BYTE3(DefCoroutine_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DefCoroutine_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DefCoroutine_TypeInfo);
    v12 = DefCoroutine_TypeInfo;
  }
  milliSecThree = (Il2CppObject *)v12->static_fields->milliSecThree;
  v2->fields.__2__current = milliSecThree;
  v14 = &v2->fields.__2__current;
  sub_B2C2F8(v14, milliSecThree);
  result = 1;
  *((_DWORD *)v14 - 2) = 1;
  return result;
}


Il2CppObject *__fastcall BattlePerformanceCommandCard__waitFallStar_d__97__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattlePerformanceCommandCard__waitFallStar_d__97_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattlePerformanceCommandCard__waitFallStar_d__97__System_Collections_IEnumerator_Reset(
        BattlePerformanceCommandCard__waitFallStar_d__97_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B2C360(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B2C42C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B2C360(&Method_BattlePerformanceCommandCard__waitFallStar_d__97_System_Collections_IEnumerator_Reset__);
  sub_B2C400(v3, v4);
}


Il2CppObject *__fastcall BattlePerformanceCommandCard__waitFallStar_d__97__System_Collections_IEnumerator_get_Current(
        BattlePerformanceCommandCard__waitFallStar_d__97_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattlePerformanceCommandCard__waitFallStar_d__97__System_IDisposable_Dispose(
        BattlePerformanceCommandCard__waitFallStar_d__97_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattlePerformanceCommandCard__waitFunc_d__171___ctor(
        BattlePerformanceCommandCard__waitFunc_d__171_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattlePerformanceCommandCard__waitFunc_d__171__MoveNext(
        BattlePerformanceCommandCard__waitFunc_d__171_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8
  struct BattlePerformanceCommandCard_o *_4__this; // x20
  BattlePerformanceCommandCard__waitFunc_d__171_o *v4; // x19
  float v5; // s0
  float timer_5__2; // s8
  bool result; // w0
  Il2CppObject **p__2__current; // x19

  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  v4 = this;
  if ( _1__state == 1 )
  {
    timer_5__2 = this->fields._timer_5__2;
    this->fields.__1__state = -1;
    v5 = timer_5__2 + UnityEngine_Time__get_deltaTime(0LL);
    v4->fields._timer_5__2 = v5;
  }
  else
  {
    if ( _1__state )
      return 0;
    this->fields.__1__state = -1;
    this->fields._timer_5__2 = 0.0;
    if ( !_4__this )
LABEL_14:
      sub_B2C434(this, method);
    BattlePerformanceCommandCard__setAtkButtonFlg(_4__this, 0, 0LL);
    v5 = v4->fields._timer_5__2;
  }
  if ( v5 >= v4->fields.waittime )
  {
LABEL_10:
    this = (BattlePerformanceCommandCard__waitFunc_d__171_o *)v4->fields.callback;
    if ( this )
    {
      System_Action__Invoke((System_Action_o *)this, 0LL);
      return 0;
    }
    goto LABEL_14;
  }
  if ( !_4__this )
    goto LABEL_14;
  if ( _4__this->fields.isPressAtkBtn )
  {
    BattlePerformanceCommandCard__setAtkButtonFlg(_4__this, 0, 0LL);
    goto LABEL_10;
  }
  v4->fields.__2__current = 0LL;
  p__2__current = &v4->fields.__2__current;
  sub_B2C2F8(p__2__current, 0LL);
  result = 1;
  *((_DWORD *)p__2__current - 2) = 1;
  return result;
}


Il2CppObject *__fastcall BattlePerformanceCommandCard__waitFunc_d__171__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattlePerformanceCommandCard__waitFunc_d__171_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattlePerformanceCommandCard__waitFunc_d__171__System_Collections_IEnumerator_Reset(
        BattlePerformanceCommandCard__waitFunc_d__171_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B2C360(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B2C42C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B2C360(&Method_BattlePerformanceCommandCard__waitFunc_d__171_System_Collections_IEnumerator_Reset__);
  sub_B2C400(v3, v4);
}


Il2CppObject *__fastcall BattlePerformanceCommandCard__waitFunc_d__171__System_Collections_IEnumerator_get_Current(
        BattlePerformanceCommandCard__waitFunc_d__171_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattlePerformanceCommandCard__waitFunc_d__171__System_IDisposable_Dispose(
        BattlePerformanceCommandCard__waitFunc_d__171_o *this,
        const MethodInfo *method)
{
  ;
}