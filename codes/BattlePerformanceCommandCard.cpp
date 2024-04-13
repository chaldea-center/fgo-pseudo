void __fastcall BattlePerformanceCommandCard___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E9E97 & 1) == 0 )
  {
    sub_B5D5C4(&BattlePerformanceCommandCard_TypeInfo, v1, v2, v3);
    byte_42E9E97 = 1;
  }
  BattlePerformanceCommandCard_TypeInfo->static_fields->cardsize_w = 200;
}


void __fastcall BattlePerformanceCommandCard___ctor(BattlePerformanceCommandCard_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  System_Array_o *v26; // x20
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v33; // x20
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  __int64 v40; // x0
  __int64 v41; // x1
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  unsigned int v48; // w8
  __int64 v49; // x20
  float v50; // s4
  float v51; // s5
  float v52; // s6
  float v53; // s7
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  unsigned int v66; // w8
  __int64 v67; // x0
  __int64 v68; // x20
  float v69; // s4
  float v70; // s5
  float v71; // s6
  float v72; // s7
  float v73; // s4
  float v74; // s5
  float v75; // s6
  float v76; // s7
  System_String_array **v77; // x2
  System_String_array **v78; // x3
  System_Boolean_array **v79; // x4
  System_Int32_array **v80; // x5
  System_Int32_array *v81; // x6
  System_Int32_array *v82; // x7
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
  unsigned int v93; // w8
  __int64 v94; // x20
  float v95; // s4
  float v96; // s5
  float v97; // s6
  float v98; // s7
  float v99; // s4
  float v100; // s5
  float v101; // s6
  float v102; // s7
  System_String_array **v103; // x2
  System_String_array **v104; // x3
  System_Boolean_array **v105; // x4
  System_Int32_array **v106; // x5
  System_Int32_array *v107; // x6
  System_Int32_array *v108; // x7
  struct BattleLogic_TutorialStringData_array *v109; // x20
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
  BattleLogic_TutorialStringData_o *v150; // x0
  System_Int32_array **v151; // x21
  System_String_array **v152; // x2
  System_String_array **v153; // x3
  System_Boolean_array **v154; // x4
  System_Int32_array **v155; // x5
  System_Int32_array *v156; // x6
  System_Int32_array *v157; // x7
  BattleLogic_TutorialStringData_o *v158; // x0
  System_Int32_array **v159; // x21
  System_String_array **v160; // x2
  System_String_array **v161; // x3
  System_Boolean_array **v162; // x4
  System_Int32_array **v163; // x5
  System_Int32_array *v164; // x6
  System_Int32_array *v165; // x7
  System_String_array **v166; // x2
  System_String_array **v167; // x3
  System_Boolean_array **v168; // x4
  System_Int32_array **v169; // x5
  System_Int32_array *v170; // x6
  System_Int32_array *v171; // x7
  __int64 v172; // x0
  __int64 v173; // x0
  __int128 v174; // [xsp+0h] [xbp-B0h] BYREF
  MethodInfo methoda; // [xsp+10h] [xbp-A0h] BYREF
  System_RuntimeFieldHandle_o v176; // 0:w1.4
  UnityEngine_Vector2_o v177; // 0:s1.4,4:s2.4
  UnityEngine_Vector2_o v178; // 0:s1.4,4:s2.4
  UnityEngine_Vector2_o v179; // 0:s1.4,4:s2.4
  UnityEngine_Vector2_o v180; // 0:s1.4,4:s2.4
  UnityEngine_Vector2_o v181; // 0:s1.4,4:s2.4
  UnityEngine_Vector2_o v182; // 0:s1.4,4:s2.4
  UnityEngine_Vector2_o v183; // 0:s1.4,4:s2.4
  UnityEngine_Rect_o v184; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v185; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v186; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v187; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v188; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v189; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42E9E96 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Collections_Generic_List_GameObject__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&UnityEngine_Rect___TypeInfo, v8, v9, v10);
    sub_B5D5C4(&float___TypeInfo, v11, v12, v13);
    sub_B5D5C4(&BattleLogic_TutorialStringData___TypeInfo, v14, v15, v16);
    sub_B5D5C4(&BattleLogic_TutorialStringData_TypeInfo, v17, v18, v19);
    sub_B5D5C4(
      &Field__PrivateImplementationDetails__799E0516C1E7B26C4E41AED488FCA1AA362E0A983FFBF28FFFB7A165E9BB2096,
      v20,
      v21,
      v22);
    sub_B5D5C4(&UnityEngine_Vector2___TypeInfo, v23, v24, v25);
    byte_42E9E96 = 1;
  }
  v26 = (System_Array_o *)sub_B5D5DC(float___TypeInfo, 5LL);
  v176.fields.value = Field__PrivateImplementationDetails__799E0516C1E7B26C4E41AED488FCA1AA362E0A983FFBF28FFFB7A165E9BB2096;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_43674272(v26, v176, 0LL);
  this->fields.COMMAND_STAMP_POS_X = (struct System_Single_array *)v26;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.COMMAND_STAMP_POS_X,
    (System_Int32_array **)v26,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  this->fields.COMMAND_STAMP_POS_Y = -121.0;
  this->fields.firstBonusAnimationMaxTime = 3;
  *(_QWORD *)&this->fields.CARD_ROOT_BASE_X = 0xC353000043CD0000LL;
  this->fields.npGaugeEaseType = 15;
  *(_OWORD *)&this->fields.npGaugeEffectMoveDelayTime = xmmword_32A45E0;
  *(int32x2_t *)&this->fields.miniScale.fields.x = vdup_n_s32(0x3E99999Au);
  this->fields.miniScale.fields.z = 1.0;
  v33 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v33,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.aubelist = (struct System_Collections_Generic_List_GameObject__o *)v33;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.aubelist,
    (System_Int32_array **)v33,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
  v40 = sub_B5D5DC(UnityEngine_Vector2___TypeInfo, 3LL);
  if ( !v40 )
    goto LABEL_47;
  v48 = *(_DWORD *)(v40 + 24);
  if ( !v48 )
    goto LABEL_46;
  *(_QWORD *)(v40 + 32) = 0LL;
  if ( v48 == 1 )
    goto LABEL_46;
  *(_QWORD *)(v40 + 40) = 3276275712LL;
  if ( v48 <= 2 )
    goto LABEL_46;
  *(_QWORD *)(v40 + 48) = 3284664320LL;
  this->fields.TutorialArrow01 = (struct UnityEngine_Vector2_array *)v40;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.TutorialArrow01,
    (System_Int32_array **)v40,
    v42,
    v43,
    v44,
    v45,
    v46,
    v47);
  v49 = sub_B5D5DC(UnityEngine_Rect___TypeInfo, 1LL);
  v184.fields.m_XMin = -500.0;
  v184.fields.m_YMin = -230.0;
  v184.fields.m_Width = 600.0;
  v184.fields.m_Height = 250.0;
  *(_QWORD *)&methoda.token = 0LL;
  *(_QWORD *)&methoda.slot = 0LL;
  UnityEngine_Rect___ctor(v184, v50, v51, v52, v53, (const MethodInfo *)&methoda.token);
  if ( !v49 )
    goto LABEL_47;
  if ( !*(_DWORD *)(v49 + 24) )
    goto LABEL_46;
  *(_OWORD *)(v49 + 32) = *(_OWORD *)&methoda.token;
  this->fields.TutorialSquare01 = (struct UnityEngine_Rect_array *)v49;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.TutorialSquare01,
    (System_Int32_array **)v49,
    v54,
    v55,
    v56,
    v57,
    v58,
    v59);
  v40 = sub_B5D5DC(UnityEngine_Vector2___TypeInfo, 3LL);
  if ( !v40 )
    goto LABEL_47;
  v66 = *(_DWORD *)(v40 + 24);
  if ( !v66 )
    goto LABEL_46;
  *(_QWORD *)(v40 + 32) = 0x43160000C3270000LL;
  if ( v66 == 1 )
    goto LABEL_46;
  *(_QWORD *)(v40 + 40) = 0xC2A00000C3480000LL;
  if ( v66 <= 2 )
    goto LABEL_46;
  *(_QWORD *)(v40 + 48) = 0xC2A00000C3C80000LL;
  this->fields.TutorialArrow05 = (struct UnityEngine_Vector2_array *)v40;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.TutorialArrow05,
    (System_Int32_array **)v40,
    v60,
    v61,
    v62,
    v63,
    v64,
    v65);
  v67 = sub_B5D5DC(UnityEngine_Rect___TypeInfo, 2LL);
  v185.fields.m_XMin = -270.0;
  v185.fields.m_Width = 210.0;
  v68 = v67;
  v185.fields.m_YMin = -30.0;
  v185.fields.m_Height = 250.0;
  methoda.rgctx_data = 0LL;
  methoda.genericMethod = 0LL;
  UnityEngine_Rect___ctor(v185, v69, v70, v71, v72, (const MethodInfo *)&methoda.rgctx_data);
  if ( !v68 )
    goto LABEL_47;
  if ( !*(_DWORD *)(v68 + 24) )
    goto LABEL_46;
  v186.fields.m_Width = 400.0;
  *(_OWORD *)(v68 + 32) = *(_OWORD *)&methoda.rgctx_data;
  v186.fields.m_XMin = -500.0;
  v186.fields.m_YMin = -230.0;
  v186.fields.m_Height = 250.0;
  methoda.return_type = 0LL;
  methoda.parameters = 0LL;
  UnityEngine_Rect___ctor(v186, v73, v74, v75, v76, (const MethodInfo *)&methoda.return_type);
  if ( *(_DWORD *)(v68 + 24) <= 1u )
    goto LABEL_46;
  *(_OWORD *)(v68 + 48) = *(_OWORD *)&methoda.return_type;
  this->fields.TutorialSquare05 = (struct UnityEngine_Rect_array *)v68;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.TutorialSquare05,
    (System_Int32_array **)v68,
    v77,
    v78,
    v79,
    v80,
    v81,
    v82);
  v187.fields.m_XMin = 300.0;
  this->fields.TutorialArrow22 = (struct UnityEngine_Vector2_o)0x4348000043C58000LL;
  v187.fields.m_Height = 100.0;
  v187.fields.m_YMin = 180.0;
  v187.fields.m_Width = 200.0;
  methoda.name = 0LL;
  methoda.klass = 0LL;
  UnityEngine_Rect___ctor(v187, v83, v84, v85, v86, (const MethodInfo *)&methoda.name);
  this->fields.TutorialSquare22 = *(struct UnityEngine_Rect_o *)&methoda.name;
  v40 = sub_B5D5DC(UnityEngine_Vector2___TypeInfo, 3LL);
  if ( !v40 )
    goto LABEL_47;
  v93 = *(_DWORD *)(v40 + 24);
  if ( !v93 )
    goto LABEL_46;
  *(_QWORD *)(v40 + 32) = 0xC248000000000000LL;
  if ( v93 == 1 )
    goto LABEL_46;
  *(_QWORD *)(v40 + 40) = 0xC2480000C3480000LL;
  if ( v93 <= 2 )
    goto LABEL_46;
  *(_QWORD *)(v40 + 48) = 0xC2480000C3C80000LL;
  this->fields.TutorialArrow31 = (struct UnityEngine_Vector2_array *)v40;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.TutorialArrow31,
    (System_Int32_array **)v40,
    v87,
    v88,
    v89,
    v90,
    v91,
    v92);
  v94 = sub_B5D5DC(UnityEngine_Rect___TypeInfo, 2LL);
  v188.fields.m_XMin = -500.0;
  v188.fields.m_YMin = -230.0;
  v188.fields.m_Width = 600.0;
  v188.fields.m_Height = 250.0;
  methoda.methodPointer = 0LL;
  methoda.invoker_method = 0LL;
  UnityEngine_Rect___ctor(v188, v95, v96, v97, v98, &methoda);
  if ( !v94 )
    goto LABEL_47;
  if ( !*(_DWORD *)(v94 + 24) )
    goto LABEL_46;
  *(_OWORD *)(v94 + 32) = *(_OWORD *)&methoda.methodPointer;
  v189.fields.m_XMin = 230.0;
  v189.fields.m_YMin = -290.0;
  v189.fields.m_Height = 70.0;
  v189.fields.m_Width = 130.0;
  v174 = 0uLL;
  UnityEngine_Rect___ctor(v189, v99, v100, v101, v102, (const MethodInfo *)&v174);
  if ( *(_DWORD *)(v94 + 24) <= 1u )
    goto LABEL_46;
  *(_OWORD *)(v94 + 48) = v174;
  this->fields.TutorialSquare32 = (struct UnityEngine_Rect_array *)v94;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.TutorialSquare32,
    (System_Int32_array **)v94,
    v103,
    v104,
    v105,
    v106,
    v107,
    v108);
  v109 = (struct BattleLogic_TutorialStringData_array *)sub_B5D5DC(BattleLogic_TutorialStringData___TypeInfo, 7LL);
  v110 = (BattleLogic_TutorialStringData_o *)sub_B5D694(BattleLogic_TutorialStringData_TypeInfo);
  v177.fields.x = 0.0;
  v177.fields.y = 160.0;
  v111 = (System_Int32_array **)v110;
  BattleLogic_TutorialStringData___ctor(v110, 0.0, v177, 26, 0LL);
  if ( !v109 )
LABEL_47:
    sub_B5D69C(v40, v41);
  if ( v111 )
  {
    v40 = sub_B5D684(v111, v109->obj.klass->_1.element_class);
    if ( !v40 )
      goto LABEL_48;
  }
  if ( !v109->max_length )
    goto LABEL_46;
  v109->m_Items[0] = (BattleLogic_TutorialStringData_o *)v111;
  sub_B5D560((BattleServantConfConponent_o *)v109->m_Items, v111, v112, v113, v114, v115, v116, v117);
  v118 = (BattleLogic_TutorialStringData_o *)sub_B5D694(BattleLogic_TutorialStringData_TypeInfo);
  v178.fields.x = 0.0;
  v178.fields.y = 160.0;
  v119 = (System_Int32_array **)v118;
  BattleLogic_TutorialStringData___ctor(v118, 0.0, v178, 26, 0LL);
  if ( v119 )
  {
    v40 = sub_B5D684(v119, v109->obj.klass->_1.element_class);
    if ( !v40 )
      goto LABEL_48;
  }
  if ( v109->max_length <= 1 )
    goto LABEL_46;
  v109->m_Items[1] = (BattleLogic_TutorialStringData_o *)v119;
  sub_B5D560((BattleServantConfConponent_o *)&v109->m_Items[1], v119, v120, v121, v122, v123, v124, v125);
  v126 = (BattleLogic_TutorialStringData_o *)sub_B5D694(BattleLogic_TutorialStringData_TypeInfo);
  v179.fields.x = 0.0;
  v179.fields.y = 160.0;
  v127 = (System_Int32_array **)v126;
  BattleLogic_TutorialStringData___ctor(v126, 0.0, v179, 26, 0LL);
  if ( v127 )
  {
    v40 = sub_B5D684(v127, v109->obj.klass->_1.element_class);
    if ( !v40 )
      goto LABEL_48;
  }
  if ( v109->max_length <= 2 )
    goto LABEL_46;
  v109->m_Items[2] = (BattleLogic_TutorialStringData_o *)v127;
  sub_B5D560((BattleServantConfConponent_o *)&v109->m_Items[2], v127, v128, v129, v130, v131, v132, v133);
  v134 = (BattleLogic_TutorialStringData_o *)sub_B5D694(BattleLogic_TutorialStringData_TypeInfo);
  v180.fields.y = 60.0;
  v180.fields.x = 200.0;
  v135 = (System_Int32_array **)v134;
  BattleLogic_TutorialStringData___ctor(v134, 0.0, v180, 28, 0LL);
  if ( v135 )
  {
    v40 = sub_B5D684(v135, v109->obj.klass->_1.element_class);
    if ( !v40 )
      goto LABEL_48;
  }
  if ( v109->max_length <= 3 )
    goto LABEL_46;
  v109->m_Items[3] = (BattleLogic_TutorialStringData_o *)v135;
  sub_B5D560((BattleServantConfConponent_o *)&v109->m_Items[3], v135, v136, v137, v138, v139, v140, v141);
  v142 = (BattleLogic_TutorialStringData_o *)sub_B5D694(BattleLogic_TutorialStringData_TypeInfo);
  v181.fields.x = 310.0;
  v181.fields.y = -30.0;
  v143 = (System_Int32_array **)v142;
  BattleLogic_TutorialStringData___ctor(v142, 180.0, v181, 26, 0LL);
  if ( v143 )
  {
    v40 = sub_B5D684(v143, v109->obj.klass->_1.element_class);
    if ( !v40 )
      goto LABEL_48;
  }
  if ( v109->max_length <= 4 )
    goto LABEL_46;
  v109->m_Items[4] = (BattleLogic_TutorialStringData_o *)v143;
  sub_B5D560((BattleServantConfConponent_o *)&v109->m_Items[4], v143, v144, v145, v146, v147, v148, v149);
  v150 = (BattleLogic_TutorialStringData_o *)sub_B5D694(BattleLogic_TutorialStringData_TypeInfo);
  v182.fields.y = 140.0;
  v182.fields.x = 0.0;
  v151 = (System_Int32_array **)v150;
  BattleLogic_TutorialStringData___ctor(v150, 0.0, v182, 22, 0LL);
  if ( v151 )
  {
    v40 = sub_B5D684(v151, v109->obj.klass->_1.element_class);
    if ( !v40 )
      goto LABEL_48;
  }
  if ( v109->max_length <= 5 )
    goto LABEL_46;
  v109->m_Items[5] = (BattleLogic_TutorialStringData_o *)v151;
  sub_B5D560((BattleServantConfConponent_o *)&v109->m_Items[5], v151, v152, v153, v154, v155, v156, v157);
  v158 = (BattleLogic_TutorialStringData_o *)sub_B5D694(BattleLogic_TutorialStringData_TypeInfo);
  v183.fields.x = 0.0;
  v183.fields.y = 130.0;
  v159 = (System_Int32_array **)v158;
  BattleLogic_TutorialStringData___ctor(v158, 0.0, v183, 26, 0LL);
  if ( v159 )
  {
    v40 = sub_B5D684(v159, v109->obj.klass->_1.element_class);
    if ( !v40 )
    {
LABEL_48:
      v173 = sub_B5D6BC(v40);
      sub_B5D668(v173, 0LL);
    }
  }
  if ( v109->max_length <= 6 )
  {
LABEL_46:
    v172 = sub_B5D6C8(v40);
    sub_B5D668(v172, 0LL);
  }
  v109->m_Items[6] = (BattleLogic_TutorialStringData_o *)v159;
  sub_B5D560((BattleServantConfConponent_o *)&v109->m_Items[6], v159, v160, v161, v162, v163, v164, v165);
  this->fields.TSD = v109;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.TSD,
    (System_Int32_array **)v109,
    v166,
    v167,
    v168,
    v169,
    v170,
    v171);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceCommandCard__ActivateFirstBonusObject(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_Object_o *firstBonusSimpleAnimation; // x20
  const MethodInfo *v9; // x1
  UnityEngine_Behaviour_o *v10; // x0
  UnityEngine_Object_o *firstBonusAnimation; // x20
  UnityEngine_GameObject_o *firstBonusObject; // x20
  UnityEngine_Component_o *transform; // x0
  UnityEngine_Transform_o *v14; // x20
  int v15; // s0
  float v18; // s0
  float v19; // s1
  float v20; // s2
  float v21; // s8
  float v22; // s10
  float v23; // s9
  UnityEngine_Object_o *v24; // x20
  UnityEngine_Object_o *v25; // x20
  System_Collections_IEnumerator_o *BonusAnimationPlay; // x1
  UnityEngine_Vector3_o v27; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42E9E56 & 1) == 0 )
  {
    sub_B5D5C4(&FSUtility_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    byte_42E9E56 = 1;
  }
  firstBonusSimpleAnimation = (UnityEngine_Object_o *)this->fields.firstBonusSimpleAnimation;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(firstBonusSimpleAnimation, 0LL, 0LL) )
  {
    v10 = (UnityEngine_Behaviour_o *)this->fields.firstBonusSimpleAnimation;
    if ( !v10 )
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
    v10 = (UnityEngine_Behaviour_o *)this->fields.firstBonusAnimation;
    if ( !v10 )
      goto LABEL_39;
LABEL_14:
    UnityEngine_Behaviour__set_enabled(v10, 0, 0LL);
  }
  firstBonusObject = this->fields.firstBonusObject;
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SetParent(firstBonusObject, transform, 0LL);
  v10 = (UnityEngine_Behaviour_o *)this->fields.firstBonusObject;
  if ( !v10 )
    goto LABEL_39;
  v14 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v10, 0LL);
  *(UnityEngine_Vector3_o *)&v15 = UnityEngine_Vector3__get_one(0LL);
  if ( !v14 )
    goto LABEL_39;
  UnityEngine_Transform__set_localScale(v14, *(UnityEngine_Vector3_o *)&v15, 0LL);
  if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  if ( !FSUtility__IsUnderVista(0LL) )
  {
    v10 = (UnityEngine_Behaviour_o *)this->fields.firstBonusObject;
    if ( v10 )
    {
      v10 = (UnityEngine_Behaviour_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v10, 0LL);
      if ( v10 )
      {
        *(UnityEngine_Vector3_o *)&v18 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)v10, 0LL);
        v10 = (UnityEngine_Behaviour_o *)this->fields.firstBonusObject;
        if ( v10 )
        {
          v21 = v18;
          v22 = v19;
          v23 = v20;
          v10 = (UnityEngine_Behaviour_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v10, 0LL);
          if ( v10 )
          {
            v27.fields.y = v22 + 17.0;
            v27.fields.x = v21;
            v27.fields.z = v23;
            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)v10, v27, 0LL);
            goto LABEL_26;
          }
        }
      }
    }
LABEL_39:
    sub_B5D69C(v10, v9);
  }
LABEL_26:
  v10 = (UnityEngine_Behaviour_o *)this->fields.firstBonusObject;
  if ( !v10 )
    goto LABEL_39;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v10, 0, 0LL);
  v10 = (UnityEngine_Behaviour_o *)this->fields.firstBonusObject;
  if ( !v10 )
    goto LABEL_39;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v10, 1, 0LL);
  v24 = (UnityEngine_Object_o *)this->fields.firstBonusSimpleAnimation;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v24, 0LL, 0LL) )
  {
    v10 = (UnityEngine_Behaviour_o *)this->fields.firstBonusSimpleAnimation;
    if ( !v10 )
      goto LABEL_39;
LABEL_33:
    UnityEngine_Behaviour__set_enabled(v10, 1, 0LL);
    goto LABEL_40;
  }
  v25 = (UnityEngine_Object_o *)this->fields.firstBonusAnimation;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v25, 0LL, 0LL) )
  {
    v10 = (UnityEngine_Behaviour_o *)this->fields.firstBonusAnimation;
    if ( !v10 )
      goto LABEL_39;
    goto LABEL_33;
  }
LABEL_40:
  BonusAnimationPlay = BattlePerformanceCommandCard__DelayFirstBonusAnimationPlay(this, v9);
  UnityEngine_MonoBehaviour__StartCoroutine_35615088((UnityEngine_MonoBehaviour_o *)this, BonusAnimationPlay, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceCommandCard__AddExtraCard(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  BattlePerformanceCommandCard_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  struct BattleCommandComponent_array *selectedcomponents; // x8
  BattleCommandComponent_o *v15; // x8
  BattleCommandData_o *data; // x21
  BattleCommandData_o *v17; // x20
  struct BattleCommandComponent_array *v18; // x8
  BattlePerformanceCommandCard_o *v19; // x21
  UnityEngine_Transform_o *transform; // x22
  int v21; // s0
  struct BattleCommandComponent_array *v24; // x8
  UnityEngine_Transform_o *v25; // x22
  int v26; // s0
  struct BattleCommandComponent_array *v29; // x8
  struct BattleCommandComponent_array *v30; // x8
  struct BattleCommandComponent_array *v31; // x8
  WebViewObject_o *Component_WebViewObject; // x20
  int v33; // s0
  struct BattleCommandComponent_array *v37; // x8
  struct BattleCommandComponent_array *v38; // x8
  __int64 v39; // x0

  v4 = this;
  if ( (byte_42E9E64 & 1) == 0 )
  {
    sub_B5D5C4(&BattleCommandData_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_UIWidget___, v5, v6, v7);
    sub_B5D5C4(&SeManager_TypeInfo, v8, v9, v10);
    this = (BattlePerformanceCommandCard_o *)sub_B5D5C4(&StringLiteral_18412/*"ef_excard02"*/, v11, v12, v13);
    byte_42E9E64 = 1;
  }
  selectedcomponents = v4->fields.selectedcomponents;
  if ( !selectedcomponents )
    goto LABEL_43;
  if ( !selectedcomponents->max_length )
    goto LABEL_44;
  v15 = selectedcomponents->m_Items[0];
  if ( !v15 )
    goto LABEL_43;
  data = v15->fields.data;
  v17 = (BattleCommandData_o *)sub_B5D694(BattleCommandData_TypeInfo);
  BattleCommandData___ctor_18916004(v17, data, 0LL);
  if ( !v17 )
    goto LABEL_43;
  BattleCommandData__ClearCommandCode(v17, 0LL);
  v17->fields.commandAssistId = 0;
  v17->fields.commandCardParam = 0;
  BattleCommandData__setTypeAddAttack(v17, 0LL);
  this = (BattlePerformanceCommandCard_o *)v4->fields.Bdata;
  if ( !this )
    goto LABEL_43;
  this = (BattlePerformanceCommandCard_o *)BattleData__getServantData((BattleData_o *)this, v17->fields.uniqueId, 0LL);
  v18 = v4->fields.selectedcomponents;
  if ( !v18 )
    goto LABEL_43;
  if ( v18->max_length <= 3 )
    goto LABEL_44;
  v19 = this;
  this = (BattlePerformanceCommandCard_o *)v18->m_Items[3];
  if ( !this )
    goto LABEL_43;
  this = (BattlePerformanceCommandCard_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_43;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  *(UnityEngine_Vector3_o *)&v21 = UnityEngine_Vector3__get_one(0LL);
  if ( !transform )
    goto LABEL_43;
  UnityEngine_Transform__set_localScale(transform, *(UnityEngine_Vector3_o *)&v21, 0LL);
  v24 = v4->fields.selectedcomponents;
  if ( !v24 )
    goto LABEL_43;
  if ( v24->max_length <= 3 )
    goto LABEL_44;
  this = (BattlePerformanceCommandCard_o *)v24->m_Items[3];
  if ( !this )
    goto LABEL_43;
  this = (BattlePerformanceCommandCard_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_43;
  this = (BattlePerformanceCommandCard_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  if ( !v4->fields.extraPos )
    goto LABEL_43;
  v25 = (UnityEngine_Transform_o *)this;
  *(UnityEngine_Vector3_o *)&v26 = UnityEngine_Transform__get_position(v4->fields.extraPos, 0LL);
  if ( !v25 )
    goto LABEL_43;
  UnityEngine_Transform__set_position(v25, *(UnityEngine_Vector3_o *)&v26, 0LL);
  v29 = v4->fields.selectedcomponents;
  if ( !v29 )
    goto LABEL_43;
  if ( v29->max_length <= 3 )
    goto LABEL_44;
  this = (BattlePerformanceCommandCard_o *)v29->m_Items[3];
  if ( !this )
    goto LABEL_43;
  this = (BattlePerformanceCommandCard_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_43;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  v30 = v4->fields.selectedcomponents;
  if ( !v30 )
    goto LABEL_43;
  if ( v30->max_length <= 3 )
    goto LABEL_44;
  this = (BattlePerformanceCommandCard_o *)v30->m_Items[3];
  if ( !this )
    goto LABEL_43;
  BattleCommandComponent__setData((BattleCommandComponent_o *)this, v17, (BattleServantData_o *)v19, 0, 1, 0, 0LL);
  v31 = v4->fields.selectedcomponents;
  if ( !v31 )
    goto LABEL_43;
  if ( v31->max_length <= 3 )
    goto LABEL_44;
  this = (BattlePerformanceCommandCard_o *)v31->m_Items[3];
  if ( !this )
    goto LABEL_43;
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              (UnityEngine_Component_o *)this,
                              (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  *(UnityEngine_Color_o *)&v33 = UnityEngine_Color__get_white(0LL);
  if ( !Component_WebViewObject )
    goto LABEL_43;
  UIWidget__set_color((UIWidget_o *)Component_WebViewObject, *(UnityEngine_Color_o *)&v33, 0LL);
  v37 = v4->fields.selectedcomponents;
  if ( !v37 )
    goto LABEL_43;
  if ( v37->max_length <= 3 )
  {
LABEL_44:
    v39 = sub_B5D6C8(this);
    sub_B5D668(v39, 0LL);
  }
  this = (BattlePerformanceCommandCard_o *)v37->m_Items[3];
  if ( !this )
    goto LABEL_43;
  BattleCommandComponent__attachEffect((BattleCommandComponent_o *)this, (System_String_o *)StringLiteral_18412/*"ef_excard02"*/, 4, 0LL);
  this = (BattlePerformanceCommandCard_o *)v4->fields.Bdata;
  if ( !this )
    goto LABEL_43;
  this = (BattlePerformanceCommandCard_o *)BattleData__getServantData(
                                             (BattleData_o *)this,
                                             (int32_t)this->fields.highSpeedButton,
                                             0LL);
  if ( this )
  {
    v38 = v4->fields.selectedcomponents;
    if ( !v38 )
      goto LABEL_43;
    if ( v38->max_length > 3 )
    {
      method = (const MethodInfo *)this;
      this = (BattlePerformanceCommandCard_o *)v38->m_Items[3];
      if ( this )
      {
        BattleCommandComponent__updateClassMag((BattleCommandComponent_o *)this, (BattleServantData_o *)method, 0LL);
        goto LABEL_39;
      }
LABEL_43:
      sub_B5D69C(this, method);
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
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_42E9E57 & 1) == 0 )
  {
    sub_B5D5C4(&BattlePerformanceCommandCard__DelayFirstBonusAnimationPlay_d__122_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E9E57 = 1;
  }
  v5 = sub_B5D694(BattlePerformanceCommandCard__DelayFirstBonusAnimationPlay_d__122_TypeInfo);
  BattlePerformanceCommandCard__DelayFirstBonusAnimationPlay_d__122___ctor(
    (BattlePerformanceCommandCard__DelayFirstBonusAnimationPlay_d__122_o *)v5,
    0,
    0LL);
  if ( !v5 )
    sub_B5D69C(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v5 + 32), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  return (System_Collections_IEnumerator_o *)v5;
}


void __fastcall BattlePerformanceCommandCard__DistributeCriticalPoint(
        BattlePerformanceCommandCard_o *this,
        int32_t criticalPercentageToAdd,
        bool applyOnlyToSelectedCards,
        const MethodInfo *method)
{
  int v7; // w1
  char v8; // w2
  __int64 v9; // x3
  int v10; // w1
  char v11; // w2
  __int64 v12; // x3
  int v13; // w1
  char v14; // w2
  __int64 v15; // x3
  int v16; // w1
  char v17; // w2
  __int64 v18; // x3
  int v19; // w1
  char v20; // w2
  __int64 v21; // x3
  int v22; // w1
  char v23; // w2
  __int64 v24; // x3
  int v25; // w1
  char v26; // w2
  __int64 v27; // x3
  int v28; // w1
  char v29; // w2
  __int64 v30; // x3
  int v31; // w1
  char v32; // w2
  __int64 v33; // x3
  int v34; // w1
  char v35; // w2
  __int64 v36; // x3
  __int64 v37; // x20
  __int64 v38; // x0
  __int64 v39; // x1
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  System_Collections_Generic_IEnumerable_TSource__o *commandCompArray; // x21
  BattlePerformanceCommandCard___c_c *v47; // x0
  struct BattlePerformanceCommandCard___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__120_0; // x22
  Il2CppObject *v50; // x23
  struct BattlePerformanceCommandCard___c_StaticFields *v51; // x0
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v58; // x21
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v59; // x19
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v60; // x19

  if ( (byte_42E9E55 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Action_BattleCommandComponent___ctor__,
      criticalPercentageToAdd,
      applyOnlyToSelectedCards,
      method);
    sub_B5D5C4(&System_Action_BattleCommandComponent__TypeInfo, v7, v8, v9);
    sub_B5D5C4(&Method_BasicHelper_ForEach_BattleCommandComponent___, v10, v11, v12);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Where_BattleCommandComponent___, v13, v14, v15);
    sub_B5D5C4(&Method_System_Func_BattleCommandComponent__bool___ctor__, v16, v17, v18);
    sub_B5D5C4(&System_Func_BattleCommandComponent__bool__TypeInfo, v19, v20, v21);
    sub_B5D5C4(&Method_BattlePerformanceCommandCard___c__DistributeCriticalPoint_b__120_0__, v22, v23, v24);
    sub_B5D5C4(
      &Method_BattlePerformanceCommandCard___c__DisplayClass120_0__DistributeCriticalPoint_b__1__,
      v25,
      v26,
      v27);
    sub_B5D5C4(
      &Method_BattlePerformanceCommandCard___c__DisplayClass120_0__DistributeCriticalPoint_b__2__,
      v28,
      v29,
      v30);
    sub_B5D5C4(&BattlePerformanceCommandCard___c__DisplayClass120_0_TypeInfo, v31, v32, v33);
    sub_B5D5C4(&BattlePerformanceCommandCard___c_TypeInfo, v34, v35, v36);
    byte_42E9E55 = 1;
  }
  v37 = sub_B5D694(BattlePerformanceCommandCard___c__DisplayClass120_0_TypeInfo);
  BattlePerformanceCommandCard___c__DisplayClass120_0___ctor(
    (BattlePerformanceCommandCard___c__DisplayClass120_0_o *)v37,
    0LL);
  if ( !v37 )
    sub_B5D69C(v38, v39);
  *(_QWORD *)(v37 + 16) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v37 + 16), (System_Int32_array **)this, v40, v41, v42, v43, v44, v45);
  *(_DWORD *)(v37 + 24) = criticalPercentageToAdd;
  commandCompArray = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.commandCompArray;
  v47 = BattlePerformanceCommandCard___c_TypeInfo;
  if ( (BYTE3(BattlePerformanceCommandCard___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattlePerformanceCommandCard___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattlePerformanceCommandCard___c_TypeInfo);
    v47 = BattlePerformanceCommandCard___c_TypeInfo;
  }
  static_fields = v47->static_fields;
  _9__120_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__120_0;
  if ( !_9__120_0 )
  {
    if ( (BYTE3(v47->vtable._0_Equals.methodPtr) & 4) != 0 && !v47->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v47);
      static_fields = BattlePerformanceCommandCard___c_TypeInfo->static_fields;
    }
    v50 = (Il2CppObject *)static_fields->__9;
    _9__120_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_BattleCommandComponent__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__120_0,
      v50,
      Method_BattlePerformanceCommandCard___c__DistributeCriticalPoint_b__120_0__,
      (const MethodInfo_2C2ECD0 *)Method_System_Func_BattleCommandComponent__bool___ctor__);
    v51 = BattlePerformanceCommandCard___c_TypeInfo->static_fields;
    v51->__9__120_0 = (struct System_Func_BattleCommandComponent__bool__o *)_9__120_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v51->__9__120_0,
      (System_Int32_array **)_9__120_0,
      v52,
      v53,
      v54,
      v55,
      v56,
      v57);
  }
  v58 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          commandCompArray,
          (System_Func_TSource__bool__o *)_9__120_0,
          (const MethodInfo_1CBBF10 *)Method_System_Linq_Enumerable_Where_BattleCommandComponent___);
  if ( applyOnlyToSelectedCards )
  {
    v59 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_BattleCommandComponent__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      v59,
      (Il2CppObject *)v37,
      Method_BattlePerformanceCommandCard___c__DisplayClass120_0__DistributeCriticalPoint_b__1__,
      (const MethodInfo_2C2ECD0 *)Method_System_Func_BattleCommandComponent__bool___ctor__);
    v58 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
            v58,
            (System_Func_TSource__bool__o *)v59,
            (const MethodInfo_1CBBF10 *)Method_System_Linq_Enumerable_Where_BattleCommandComponent___);
  }
  v60 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_BattleCommandComponent__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v60,
    (Il2CppObject *)v37,
    Method_BattlePerformanceCommandCard___c__DisplayClass120_0__DistributeCriticalPoint_b__2__,
    (const MethodInfo_258B320 *)Method_System_Action_BattleCommandComponent___ctor__);
  BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
    (System_Collections_Generic_IEnumerable_T__o *)v58,
    (System_Action_T__o *)v60,
    (const MethodInfo_1AD82D8 *)Method_BasicHelper_ForEach_BattleCommandComponent___);
}


float __fastcall BattlePerformanceCommandCard__FSCardRootOffsetY(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  bool IsUnderVista; // w0
  float result; // s0

  if ( (byte_42E9E84 & 1) == 0 )
  {
    sub_B5D5C4(&FSUtility_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E9E84 = 1;
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
  __int64 v3; // x3
  struct System_Single_array *COMMAND_STAMP_POS_X; // x8
  UnityEngine_Vector2_array *v6; // x20
  unsigned __int64 v7; // x21
  float *p_COMMAND_STAMP_POS_Z; // x22
  UnityEngine_Vector2_o *v9; // x23
  float x; // w9
  __int64 v12; // x0

  if ( (byte_42E9E85 & 1) == 0 )
  {
    this = (BattlePerformanceCommandCard_o *)sub_B5D5C4(
                                               &UnityEngine_Vector2___TypeInfo,
                                               (_DWORD)arrow,
                                               (_DWORD)method,
                                               v3);
    byte_42E9E85 = 1;
  }
  if ( !arrow
    || (this = (BattlePerformanceCommandCard_o *)sub_B5D5DC(UnityEngine_Vector2___TypeInfo, arrow->max_length)) == 0LL )
  {
    sub_B5D69C(this, arrow);
  }
  COMMAND_STAMP_POS_X = this->fields.COMMAND_STAMP_POS_X;
  v6 = (UnityEngine_Vector2_array *)this;
  if ( (int)COMMAND_STAMP_POS_X >= 1 )
  {
    v7 = 0LL;
    p_COMMAND_STAMP_POS_Z = &this->fields.COMMAND_STAMP_POS_Z;
    v9 = &arrow->m_Items[1];
    do
    {
      if ( v7 >= arrow->max_length || v7 >= (unsigned int)COMMAND_STAMP_POS_X )
      {
        v12 = sub_B5D6C8(this);
        sub_B5D668(v12, 0LL);
      }
      x = v9->fields.x;
      *(p_COMMAND_STAMP_POS_Z - 1) = v9[-1].fields.y;
      *p_COMMAND_STAMP_POS_Z = x;
      *p_COMMAND_STAMP_POS_Z = BattlePerformanceCommandCard__FSCardRootOffsetY(this, (const MethodInfo *)arrow) + x;
      p_COMMAND_STAMP_POS_Z += 2;
      LODWORD(COMMAND_STAMP_POS_X) = v6->max_length;
      ++v7;
      ++v9;
    }
    while ( (__int64)v7 < (int)COMMAND_STAMP_POS_X );
  }
  return v6;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Rect_array *__fastcall BattlePerformanceCommandCard__FSTutorialSquareCard(
        BattlePerformanceCommandCard_o *this,
        UnityEngine_Rect_array *square,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // s1
  struct System_Single_array *COMMAND_STAMP_POS_X; // x8
  UnityEngine_Rect_array *v9; // x20
  unsigned __int64 v10; // x22
  MethodInfo *p_COMMAND_STAMP_POS_Y; // x21
  __int128 v12; // q0
  float y; // s0
  BattlePerformanceCommandCard_o *v14; // x0
  const MethodInfo *v15; // x1
  float v16; // s4
  __int64 v18; // x0
  UnityEngine_Rect_o v19; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42E9E86 & 1) == 0 )
  {
    this = (BattlePerformanceCommandCard_o *)sub_B5D5C4(
                                               &UnityEngine_Rect___TypeInfo,
                                               (_DWORD)square,
                                               (_DWORD)method,
                                               v3);
    byte_42E9E86 = 1;
  }
  if ( !square
    || (this = (BattlePerformanceCommandCard_o *)sub_B5D5DC(UnityEngine_Rect___TypeInfo, square->max_length)) == 0LL )
  {
    sub_B5D69C(this, square);
  }
  COMMAND_STAMP_POS_X = this->fields.COMMAND_STAMP_POS_X;
  v9 = (UnityEngine_Rect_array *)this;
  if ( (int)COMMAND_STAMP_POS_X >= 1 )
  {
    v10 = 0LL;
    p_COMMAND_STAMP_POS_Y = (MethodInfo *)&this->fields.COMMAND_STAMP_POS_Y;
    do
    {
      if ( v10 >= square->max_length || v10 >= (unsigned int)COMMAND_STAMP_POS_X )
      {
        v18 = sub_B5D6C8(this);
        sub_B5D668(v18, 0LL);
      }
      v12 = *(_OWORD *)&square->m_Items[v10].fields.m_YMin;
      *(_OWORD *)&p_COMMAND_STAMP_POS_Y->methodPointer = v12;
      y = UnityEngine_Rect__get_y(*(UnityEngine_Rect_o *)(&v5 - 1), p_COMMAND_STAMP_POS_Y);
      v19.fields.m_XMin = y + BattlePerformanceCommandCard__FSCardRootOffsetY(v14, v15);
      UnityEngine_Rect__set_y(v19, v16, p_COMMAND_STAMP_POS_Y);
      LODWORD(COMMAND_STAMP_POS_X) = v9->max_length;
      ++v10;
      p_COMMAND_STAMP_POS_Y = (MethodInfo *)((char *)p_COMMAND_STAMP_POS_Y + 16);
    }
    while ( (__int64)v10 < (int)COMMAND_STAMP_POS_X );
  }
  return v9;
}


BattleCommandData_array *__fastcall BattlePerformanceCommandCard__GetBaseCommandCard(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  struct System_Collections_Generic_List_BattleCommandData__o *baseCommandList; // x0
  struct BattleLogic_o *logic; // x8
  struct BattleData_o *data; // x8
  System_Collections_Generic_IEnumerable_T__o *draw_commandlist; // x20
  BattleServantConfConponent_o *p_baseCommandList; // x19
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v16; // x21
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7

  if ( (byte_42E9E4B & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleCommandData__ToArray__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleCommandData___ctor___68729208, v5, v6, v7);
    sub_B5D5C4(&System_Collections_Generic_List_BattleCommandData__TypeInfo, v8, v9, v10);
    byte_42E9E4B = 1;
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
          v16 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B5D694(System_Collections_Generic_List_BattleCommandData__TypeInfo),
          System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
            v16,
            draw_commandlist,
            (const MethodInfo_30564F4 *)Method_System_Collections_Generic_List_BattleCommandData___ctor___68729208),
          p_baseCommandList->klass = (BattleServantConfConponent_c *)v16,
          sub_B5D560(p_baseCommandList, (System_Int32_array **)v16, v17, v18, v19, v20, v21, v22),
          (baseCommandList = (struct System_Collections_Generic_List_BattleCommandData__o *)p_baseCommandList->klass) == 0LL) )
    {
LABEL_8:
      sub_B5D69C(baseCommandList, method);
    }
  }
  return (BattleCommandData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                      (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)baseCommandList,
                                      (const MethodInfo_305910C *)Method_System_Collections_Generic_List_BattleCommandData__ToArray__);
}


System_String_o *__fastcall BattlePerformanceCommandCard__GetSealedWindowMessageLocalizationKey(
        BattlePerformanceCommandCard_o *this,
        int32_t status,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  System_String_o **v23; // x8

  if ( (byte_42E9E77 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_2423/*"BATTLE_COMMANDDIALOG_DONTACT"*/, status, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_2424/*"BATTLE_COMMANDDIALOG_DONTACTTYPE"*/, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_2426/*"BATTLE_COMMANDDIALOG_DONTTD_COND"*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_2429/*"BATTLE_COMMANDDIALOG_NOFUNC"*/, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_2427/*"BATTLE_COMMANDDIALOG_DONTTD_SHORTAGE_CRITICAL_STAR"*/, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_2428/*"BATTLE_COMMANDDIALOG_DONTUSE"*/, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_2425/*"BATTLE_COMMANDDIALOG_DONTTD"*/, v20, v21, v22);
    byte_42E9E77 = 1;
  }
  if ( (unsigned int)(status - 3) > 5 )
    v23 = (System_String_o **)&StringLiteral_2423/*"BATTLE_COMMANDDIALOG_DONTACT"*/;
  else
    v23 = (System_String_o **)*(&off_3F3FB60 + status - 3);
  return *v23;
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
        v7 = sub_B5D6C8(this);
        sub_B5D668(v7, 0LL);
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
    sub_B5D69C(this, commandData);
  }
  LODWORD(this) = -1;
  return (int)this;
}


BattleServantParamComponent_o *__fastcall BattlePerformanceCommandCard__GetStatusUiObj(
        BattlePerformanceCommandCard_o *this,
        BattleCommandData_o *commandData,
        const MethodInfo *method)
{
  __int64 v3; // x3
  BattlePerformanceCommandCard_o *v5; // x20
  struct BattleServantParamComponent_array *servantStatusObjArray; // x8
  int max_length; // w9
  signed int v8; // w10
  UnityEngine_Object_o *v9; // x20
  BattleServantParamComponent_o *v10; // x11
  struct BattleServantData_o *data; // x12
  __int64 v13; // x0

  v5 = this;
  if ( (byte_42E9E74 & 1) == 0 )
  {
    this = (BattlePerformanceCommandCard_o *)sub_B5D5C4(
                                               &UnityEngine_Object_TypeInfo,
                                               (_DWORD)commandData,
                                               (_DWORD)method,
                                               v3);
    byte_42E9E74 = 1;
  }
  servantStatusObjArray = v5->fields.servantStatusObjArray;
  if ( !servantStatusObjArray )
    goto LABEL_19;
  max_length = servantStatusObjArray->max_length;
  if ( max_length >= 1 )
  {
    v8 = 0;
    v9 = 0LL;
    while ( 1 )
    {
      if ( v8 >= (unsigned int)max_length )
      {
        v13 = sub_B5D6C8(this);
        sub_B5D668(v13, 0LL);
      }
      v10 = servantStatusObjArray->m_Items[v8];
      if ( !v10 )
        break;
      data = v10->fields.data;
      if ( data )
      {
        if ( !commandData )
          break;
        if ( data->fields.uniqueId == commandData->fields.uniqueId )
          v9 = (UnityEngine_Object_o *)servantStatusObjArray->m_Items[v8];
      }
      if ( ++v8 >= max_length )
        goto LABEL_15;
    }
LABEL_19:
    sub_B5D69C(this, commandData);
  }
  v9 = 0LL;
LABEL_15:
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__op_Equality(v9, 0LL, 0LL);
  return (BattleServantParamComponent_o *)v9;
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
    sub_B5D69C(this, method);
  v3 = this;
  v4 = 0LL;
  while ( 1 )
  {
    max_length = npcardTr->max_length;
    if ( (int)v4 >= max_length )
      break;
    if ( (unsigned int)v4 >= max_length )
    {
      v6 = sub_B5D6C8(this);
      sub_B5D668(v6, 0LL);
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
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  struct BattlePerformance_o **p_perf; // x20
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  __int64 v37; // x1
  BattleWindowComponent_o *sealedWindow; // x0
  BattleWindowOuterClickManagerComponent_o *v39; // x21
  BattleWindowOuterClickComponent_OuterClickCall_o *v40; // x22
  BattleWindowOuterClickManagerComponent_o *tdConfWindow; // x21
  BattleWindowOuterClickComponent_OuterClickCall_o *v42; // x22
  UnityEngine_Component_o *v43; // x8
  HutongGames_PlayMaker_FsmGameObject_o *v44; // x20
  struct Spawner_o *Instance; // x0
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7

  if ( (byte_42E9E41 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BattlePerformanceCommandCard_OnCloseSealedWindow__, (_DWORD)inperf, (_DWORD)data, inlogic);
    sub_B5D5C4(&Method_BattlePerformanceCommandCard_OnCloseTdConfWindow__, v12, v13, v14);
    sub_B5D5C4(&BattleWindowOuterClickComponent_OuterClickCall_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_Spawner__get_Instance__, v18, v19, v20);
    sub_B5D5C4(&StringLiteral_10756/*"Performance"*/, v21, v22, v23);
    byte_42E9E41 = 1;
  }
  p_perf = &this->fields.perf;
  this->fields.perf = inperf;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.perf,
    (System_Int32_array **)inperf,
    (System_String_array **)data,
    (System_String_array **)inlogic,
    (System_Boolean_array **)method,
    v5,
    v6,
    v7);
  this->fields.Bdata = data;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.Bdata,
    (System_Int32_array **)data,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  this->fields.logic = inlogic;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.logic,
    (System_Int32_array **)inlogic,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
  sealedWindow = (BattleWindowComponent_o *)this->fields.sealedWindow;
  if ( !sealedWindow )
    goto LABEL_16;
  ((void (__fastcall *)(BattleWindowComponent_o *, Il2CppMethodPointer))sealedWindow->klass->vtable._9_setClose.method)(
    sealedWindow,
    sealedWindow->klass->vtable._10_Open.methodPtr);
  v39 = (BattleWindowOuterClickManagerComponent_o *)this->fields.sealedWindow;
  v40 = (BattleWindowOuterClickComponent_OuterClickCall_o *)sub_B5D694(BattleWindowOuterClickComponent_OuterClickCall_TypeInfo);
  BattleWindowOuterClickComponent_OuterClickCall___ctor(
    v40,
    (Il2CppObject *)this,
    Method_BattlePerformanceCommandCard_OnCloseSealedWindow__,
    0LL);
  if ( !v39 )
    goto LABEL_16;
  BattleWindowOuterClickManagerComponent__setOuterClickCallBack(v39, v40, 0LL);
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
  v42 = (BattleWindowOuterClickComponent_OuterClickCall_o *)sub_B5D694(BattleWindowOuterClickComponent_OuterClickCall_TypeInfo);
  BattleWindowOuterClickComponent_OuterClickCall___ctor(
    v42,
    (Il2CppObject *)this,
    Method_BattlePerformanceCommandCard_OnCloseTdConfWindow__,
    0LL);
  if ( !tdConfWindow )
    goto LABEL_16;
  BattleWindowOuterClickManagerComponent__setOuterClickCallBack(tdConfWindow, v42, 0LL);
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
                                              (System_String_o *)StringLiteral_10756/*"Performance"*/,
                                              0LL);
  v43 = (UnityEngine_Component_o *)*p_perf;
  if ( !*p_perf
    || (v44 = (HutongGames_PlayMaker_FsmGameObject_o *)sealedWindow,
        sealedWindow = (BattleWindowComponent_o *)UnityEngine_Component__get_gameObject(v43, 0LL),
        !v44)
    || (HutongGames_PlayMaker_FsmGameObject__set_Value(v44, (UnityEngine_GameObject_o *)sealedWindow, 0LL),
        Instance = (struct Spawner_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_Spawner__get_Instance__),
        this->fields.spawner = Instance,
        sub_B5D560(
          (BattleServantConfConponent_o *)&this->fields.spawner,
          (System_Int32_array **)Instance,
          v46,
          v47,
          v48,
          v49,
          v50,
          v51),
        (sealedWindow = (BattleWindowComponent_o *)this->fields.spawner) == 0LL) )
  {
LABEL_16:
    sub_B5D69C(sealedWindow, v37);
  }
  Spawner__Precache_26157212(
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  BattleData_o *Bdata; // x0
  struct BattleCommandComponent_array *commandCompArray; // x8
  unsigned __int64 v17; // x22
  unsigned __int64 max_length; // x9
  BattleCommandComponent_o *v19; // x21
  System_String_o *v20; // x1
  __int64 v21; // x0

  if ( (byte_42E9E50 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, markindex, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_8530/*"LONG_PRESS_COMMAND_ASSIST"*/, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_8529/*"LONG_PRESS"*/, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_20637/*"markindex"*/, v12, v13, v14);
    byte_42E9E50 = 1;
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
      v17 = 0LL;
      do
      {
        max_length = commandCompArray->max_length;
        if ( (__int64)v17 >= (int)max_length )
          return;
        if ( v17 >= max_length )
        {
          v21 = sub_B5D6C8(Bdata);
          sub_B5D668(v21, 0LL);
        }
        v19 = commandCompArray->m_Items[v17];
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        Bdata = (BattleData_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v19, 0LL, 0LL);
        if ( ((unsigned __int8)Bdata & 1) == 0 )
        {
          if ( !v19 )
            break;
          Bdata = (BattleData_o *)BattleCommandComponent__checkMark(v19, markindex, 0LL);
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
                                      (System_String_o *)StringLiteral_20637/*"markindex"*/,
                                      0LL);
            if ( !Bdata )
              break;
            LODWORD(Bdata->fields.perf) = markindex;
            if ( BattleCommandComponent__isTreasureDvc(v19, 0LL) )
            {
              Bdata = (BattleData_o *)this->fields.commandfsm;
              if ( !Bdata )
                break;
              v20 = (System_String_o *)StringLiteral_8529/*"LONG_PRESS"*/;
            }
            else
            {
              Bdata = (BattleData_o *)v19->fields.data;
              if ( !Bdata )
                break;
              Bdata = (BattleData_o *)BattleCommandData__IsEnableCommandAssist((BattleCommandData_o *)Bdata, 0LL);
              if ( ((unsigned __int8)Bdata & 1) == 0 )
                goto LABEL_27;
              Bdata = (BattleData_o *)this->fields.commandfsm;
              if ( !Bdata )
                break;
              v20 = (System_String_o *)StringLiteral_8530/*"LONG_PRESS_COMMAND_ASSIST"*/;
            }
            PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Bdata, v20, 0LL);
          }
        }
LABEL_27:
        commandCompArray = this->fields.commandCompArray;
        ++v17;
      }
      while ( commandCompArray );
    }
LABEL_28:
    sub_B5D69C(Bdata, *(_QWORD *)&markindex);
  }
}


void __fastcall BattlePerformanceCommandCard__MoveExtraCard(
        BattlePerformanceCommandCard_o *this,
        float moveTime,
        const MethodInfo *method)
{
  int v3; // w2
  __int64 v4; // x3
  BattlePerformanceCommandCard_o *v6; // x21
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  struct BattleCommandComponent_array *selectedcomponents; // x8
  UnityEngine_GameObject_o *gameObject; // x19
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  BattlePerformanceCommandCard_o *v39; // x20
  System_Int32_array **v40; // x1
  struct BattleCommandComponent_array *v41; // x8
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  System_Int32_array **v48; // x21
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  System_Int32_array **v55; // x1
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  System_Int32_array **v62; // x21
  System_String_array **v63; // x2
  System_String_array **v64; // x3
  System_Boolean_array **v65; // x4
  System_Int32_array **v66; // x5
  System_Int32_array *v67; // x6
  System_Int32_array *v68; // x7
  System_Int32_array **v69; // x1
  System_String_array **v70; // x2
  System_String_array **v71; // x3
  System_Boolean_array **v72; // x4
  System_Int32_array **v73; // x5
  System_Int32_array *v74; // x6
  System_Int32_array *v75; // x7
  System_Int32_array **v76; // x21
  System_String_array **v77; // x2
  System_String_array **v78; // x3
  System_Boolean_array **v79; // x4
  System_Int32_array **v80; // x5
  System_Int32_array *v81; // x6
  System_Int32_array *v82; // x7
  System_Int32_array **v83; // x1
  System_String_array **v84; // x2
  System_String_array **v85; // x3
  System_Boolean_array **v86; // x4
  System_Int32_array **v87; // x5
  System_Int32_array *v88; // x6
  System_Int32_array *v89; // x7
  System_Int32_array **v90; // x21
  System_Collections_Hashtable_o *v91; // x0
  __int64 v92; // x0
  __int64 v93; // x0
  char v94[4]; // [xsp+8h] [xbp-38h] BYREF
  int v95; // [xsp+Ch] [xbp-34h] BYREF
  float v96; // [xsp+18h] [xbp-28h] BYREF
  float v97; // [xsp+1Ch] [xbp-24h] BYREF

  v6 = this;
  if ( (byte_42E9E65 & 1) == 0 )
  {
    sub_B5D5C4(&bool_TypeInfo, (_DWORD)method, v3, v4);
    sub_B5D5C4(&iTween_EaseType_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&object___TypeInfo, v10, v11, v12);
    sub_B5D5C4(&float_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&StringLiteral_23627/*"x"*/, v16, v17, v18);
    sub_B5D5C4(&StringLiteral_18341/*"easetype"*/, v19, v20, v21);
    sub_B5D5C4(&StringLiteral_22982/*"time"*/, v22, v23, v24);
    sub_B5D5C4(&StringLiteral_20221/*"islocal"*/, v25, v26, v27);
    this = (BattlePerformanceCommandCard_o *)sub_B5D5C4(&iTween_TypeInfo, v28, v29, v30);
    byte_42E9E65 = 1;
  }
  selectedcomponents = v6->fields.selectedcomponents;
  if ( !selectedcomponents )
    goto LABEL_49;
  if ( selectedcomponents->max_length <= 3 )
    goto LABEL_48;
  this = (BattlePerformanceCommandCard_o *)selectedcomponents->m_Items[3];
  if ( !this )
    goto LABEL_49;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  this = (BattlePerformanceCommandCard_o *)sub_B5D5DC(object___TypeInfo, 8LL);
  if ( !this )
    goto LABEL_49;
  v39 = this;
  this = (BattlePerformanceCommandCard_o *)StringLiteral_23627/*"x"*/;
  if ( StringLiteral_23627/*"x"*/ )
  {
    this = (BattlePerformanceCommandCard_o *)sub_B5D684(StringLiteral_23627/*"x"*/, v39->klass->_1.element_class);
    if ( !this )
      goto LABEL_50;
    v40 = (System_Int32_array **)StringLiteral_23627/*"x"*/;
  }
  else
  {
    v40 = 0LL;
  }
  if ( !LODWORD(v39->fields.COMMAND_STAMP_POS_X) )
    goto LABEL_48;
  *(_QWORD *)&v39->fields.COMMAND_STAMP_POS_Y = v40;
  sub_B5D560((BattleServantConfConponent_o *)&v39->fields.COMMAND_STAMP_POS_Y, v40, v33, v34, v35, v36, v37, v38);
  v41 = v6->fields.selectedcomponents;
  if ( !v41 )
    goto LABEL_49;
  if ( v41->max_length <= 3 )
    goto LABEL_48;
  this = (BattlePerformanceCommandCard_o *)v41->m_Items[3];
  if ( !this
    || (this = (BattlePerformanceCommandCard_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)this,
                                                   0LL)) == 0LL
    || (this = (BattlePerformanceCommandCard_o *)UnityEngine_GameObject__get_transform(
                                                   (UnityEngine_GameObject_o *)this,
                                                   0LL)) == 0LL )
  {
LABEL_49:
    sub_B5D69C(this, method);
  }
  v97 = COERCE_FLOAT(UnityEngine_Transform__get_position((UnityEngine_Transform_o *)this, 0LL)) + 250.0;
  this = (BattlePerformanceCommandCard_o *)j_il2cpp_value_box_0(float_TypeInfo, &v97);
  v48 = (System_Int32_array **)this;
  if ( this )
  {
    this = (BattlePerformanceCommandCard_o *)sub_B5D684(this, v39->klass->_1.element_class);
    if ( !this )
      goto LABEL_50;
  }
  if ( LODWORD(v39->fields.COMMAND_STAMP_POS_X) <= 1 )
    goto LABEL_48;
  *(_QWORD *)&v39->fields.CARD_ROOT_BASE_X = v48;
  sub_B5D560((BattleServantConfConponent_o *)&v39->fields.CARD_ROOT_BASE_X, v48, v42, v43, v44, v45, v46, v47);
  this = (BattlePerformanceCommandCard_o *)StringLiteral_22982/*"time"*/;
  if ( StringLiteral_22982/*"time"*/ )
  {
    this = (BattlePerformanceCommandCard_o *)sub_B5D684(StringLiteral_22982/*"time"*/, v39->klass->_1.element_class);
    if ( !this )
      goto LABEL_50;
    v55 = (System_Int32_array **)StringLiteral_22982/*"time"*/;
  }
  else
  {
    v55 = 0LL;
  }
  if ( LODWORD(v39->fields.COMMAND_STAMP_POS_X) <= 2 )
    goto LABEL_48;
  v39->fields.commandfsm = (struct PlayMakerFSM_o *)v55;
  sub_B5D560((BattleServantConfConponent_o *)&v39->fields.commandfsm, v55, v49, v50, v51, v52, v53, v54);
  v96 = moveTime;
  this = (BattlePerformanceCommandCard_o *)j_il2cpp_value_box_0(float_TypeInfo, &v96);
  v62 = (System_Int32_array **)this;
  if ( this )
  {
    this = (BattlePerformanceCommandCard_o *)sub_B5D684(this, v39->klass->_1.element_class);
    if ( !this )
      goto LABEL_50;
  }
  if ( LODWORD(v39->fields.COMMAND_STAMP_POS_X) <= 3 )
    goto LABEL_48;
  v39->fields.commandprefab = (struct UnityEngine_GameObject_o *)v62;
  sub_B5D560((BattleServantConfConponent_o *)&v39->fields.commandprefab, v62, v56, v57, v58, v59, v60, v61);
  this = (BattlePerformanceCommandCard_o *)StringLiteral_18341/*"easetype"*/;
  if ( StringLiteral_18341/*"easetype"*/ )
  {
    this = (BattlePerformanceCommandCard_o *)sub_B5D684(StringLiteral_18341/*"easetype"*/, v39->klass->_1.element_class);
    if ( !this )
      goto LABEL_50;
    v69 = (System_Int32_array **)StringLiteral_18341/*"easetype"*/;
  }
  else
  {
    v69 = 0LL;
  }
  if ( LODWORD(v39->fields.COMMAND_STAMP_POS_X) <= 4 )
    goto LABEL_48;
  v39->fields.selectCommandPrefab = (struct UnityEngine_GameObject_o *)v69;
  sub_B5D560((BattleServantConfConponent_o *)&v39->fields.selectCommandPrefab, v69, v63, v64, v65, v66, v67, v68);
  v95 = 16;
  this = (BattlePerformanceCommandCard_o *)j_il2cpp_value_box_0(iTween_EaseType_TypeInfo, &v95);
  v76 = (System_Int32_array **)this;
  if ( this )
  {
    this = (BattlePerformanceCommandCard_o *)sub_B5D684(this, v39->klass->_1.element_class);
    if ( !this )
      goto LABEL_50;
  }
  if ( LODWORD(v39->fields.COMMAND_STAMP_POS_X) <= 5 )
    goto LABEL_48;
  v39->fields.commandrootTransform = (struct UnityEngine_Transform_o *)v76;
  sub_B5D560((BattleServantConfConponent_o *)&v39->fields.commandrootTransform, v76, v70, v71, v72, v73, v74, v75);
  this = (BattlePerformanceCommandCard_o *)StringLiteral_20221/*"islocal"*/;
  if ( StringLiteral_20221/*"islocal"*/ )
  {
    this = (BattlePerformanceCommandCard_o *)sub_B5D684(StringLiteral_20221/*"islocal"*/, v39->klass->_1.element_class);
    if ( !this )
      goto LABEL_50;
    v83 = (System_Int32_array **)StringLiteral_20221/*"islocal"*/;
  }
  else
  {
    v83 = 0LL;
  }
  if ( LODWORD(v39->fields.COMMAND_STAMP_POS_X) <= 6 )
    goto LABEL_48;
  v39->fields.selectinfo_sprite = (struct UISprite_o *)v83;
  sub_B5D560((BattleServantConfConponent_o *)&v39->fields.selectinfo_sprite, v83, v77, v78, v79, v80, v81, v82);
  v94[0] = 1;
  this = (BattlePerformanceCommandCard_o *)j_il2cpp_value_box_0(bool_TypeInfo, v94);
  v90 = (System_Int32_array **)this;
  if ( this )
  {
    this = (BattlePerformanceCommandCard_o *)sub_B5D684(this, v39->klass->_1.element_class);
    if ( !this )
    {
LABEL_50:
      v93 = sub_B5D6BC(this);
      sub_B5D668(v93, 0LL);
    }
  }
  if ( LODWORD(v39->fields.COMMAND_STAMP_POS_X) <= 7 )
  {
LABEL_48:
    v92 = sub_B5D6C8(this);
    sub_B5D668(v92, 0LL);
  }
  v39->fields.firstbonus_q = (struct UnityEngine_GameObject_o *)v90;
  sub_B5D560((BattleServantConfConponent_o *)&v39->fields.firstbonus_q, v90, v84, v85, v86, v87, v88, v89);
  if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  v91 = iTween__Hash((System_Object_array *)v39, 0LL);
  iTween__MoveFrom_43184584(gameObject, v91, 0LL);
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

  if ( (byte_42E9E6E & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_UnityEngine_GameObject_GetComponent_BattleMoveObject___,
      (_DWORD)target,
      (_DWORD)callback,
      method);
    byte_42E9E6E = 1;
  }
  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_11;
  perf = (BattlePerformance_o *)BattlePerformance__getEffectInstantiate(perf, 9, this->fields.criticalpointTr, 0LL);
  if ( !perf )
    goto LABEL_11;
  perf = (BattlePerformance_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                  (UnityEngine_GameObject_o *)perf,
                                  (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_BattleMoveObject___);
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
    sub_B5D69C(perf, target);
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
  sub_B5D560(
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

  if ( (byte_42E9E6F & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_BattleMoveObject___, (_DWORD)from, (_DWORD)callback, method);
    byte_42E9E6F = 1;
  }
  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_11;
  perf = (BattlePerformance_o *)BattlePerformance__getEffectInstantiate(perf, 9, this->fields.criticalpointTr, 0LL);
  if ( !perf )
    goto LABEL_11;
  perf = (BattlePerformance_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                  (UnityEngine_GameObject_o *)perf,
                                  (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_BattleMoveObject___);
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
    sub_B5D69C(perf, from);
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
  sub_B5D560(
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
  int v3; // w2
  __int64 v4; // x3
  BattlePerformanceCommandCard_o *v6; // x19
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  __int64 v31; // x23
  struct BattleCommandComponent_array *selectedcomponents; // x8
  UnityEngine_GameObject_o *gameObject; // x20
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  BattlePerformanceCommandCard_o *v40; // x21
  System_Int32_array **v41; // x1
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  System_Int32_array **v48; // x22
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  System_Int32_array **v55; // x1
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  System_Int32_array **v62; // x22
  System_String_array **v63; // x2
  System_String_array **v64; // x3
  System_Boolean_array **v65; // x4
  System_Int32_array **v66; // x5
  System_Int32_array *v67; // x6
  System_Int32_array *v68; // x7
  System_Int32_array **v69; // x1
  System_String_array **v70; // x2
  System_String_array **v71; // x3
  System_Boolean_array **v72; // x4
  System_Int32_array **v73; // x5
  System_Int32_array *v74; // x6
  System_Int32_array *v75; // x7
  System_Int32_array **v76; // x22
  System_String_array **v77; // x2
  System_String_array **v78; // x3
  System_Boolean_array **v79; // x4
  System_Int32_array **v80; // x5
  System_Int32_array *v81; // x6
  System_Int32_array *v82; // x7
  System_Int32_array **v83; // x1
  System_String_array **v84; // x2
  System_String_array **v85; // x3
  System_Boolean_array **v86; // x4
  System_Int32_array **v87; // x5
  System_Int32_array *v88; // x6
  System_Int32_array *v89; // x7
  System_Int32_array **v90; // x22
  System_Collections_Hashtable_o *v91; // x0
  __int64 v92; // x0
  __int64 v93; // x0
  char v94[4]; // [xsp+8h] [xbp-68h] BYREF
  int v95; // [xsp+Ch] [xbp-64h] BYREF
  float v96; // [xsp+18h] [xbp-58h] BYREF
  int v97; // [xsp+1Ch] [xbp-54h] BYREF

  v6 = this;
  if ( (byte_42E9E63 & 1) == 0 )
  {
    sub_B5D5C4(&bool_TypeInfo, (_DWORD)method, v3, v4);
    sub_B5D5C4(&iTween_EaseType_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&object___TypeInfo, v10, v11, v12);
    sub_B5D5C4(&float_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&StringLiteral_23627/*"x"*/, v16, v17, v18);
    sub_B5D5C4(&StringLiteral_18341/*"easetype"*/, v19, v20, v21);
    sub_B5D5C4(&StringLiteral_22982/*"time"*/, v22, v23, v24);
    sub_B5D5C4(&StringLiteral_20221/*"islocal"*/, v25, v26, v27);
    this = (BattlePerformanceCommandCard_o *)sub_B5D5C4(&iTween_TypeInfo, v28, v29, v30);
    byte_42E9E63 = 1;
  }
  v31 = 0LL;
  do
  {
    selectedcomponents = v6->fields.selectedcomponents;
    if ( !selectedcomponents )
      goto LABEL_47;
    if ( (unsigned int)v31 >= selectedcomponents->max_length )
      goto LABEL_45;
    this = (BattlePerformanceCommandCard_o *)selectedcomponents->m_Items[v31];
    if ( !this
      || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL),
          (this = (BattlePerformanceCommandCard_o *)sub_B5D5DC(object___TypeInfo, 8LL)) == 0LL) )
    {
LABEL_47:
      sub_B5D69C(this, method);
    }
    v40 = this;
    this = (BattlePerformanceCommandCard_o *)StringLiteral_23627/*"x"*/;
    if ( StringLiteral_23627/*"x"*/ )
    {
      this = (BattlePerformanceCommandCard_o *)sub_B5D684(StringLiteral_23627/*"x"*/, v40->klass->_1.element_class);
      if ( !this )
        goto LABEL_46;
      v41 = (System_Int32_array **)StringLiteral_23627/*"x"*/;
    }
    else
    {
      v41 = 0LL;
    }
    if ( !LODWORD(v40->fields.COMMAND_STAMP_POS_X) )
      goto LABEL_45;
    *(_QWORD *)&v40->fields.COMMAND_STAMP_POS_Y = v41;
    sub_B5D560((BattleServantConfConponent_o *)&v40->fields.COMMAND_STAMP_POS_Y, v41, v34, v35, v36, v37, v38, v39);
    v97 = -1081291571;
    this = (BattlePerformanceCommandCard_o *)j_il2cpp_value_box_0(float_TypeInfo, &v97);
    v48 = (System_Int32_array **)this;
    if ( this )
    {
      this = (BattlePerformanceCommandCard_o *)sub_B5D684(this, v40->klass->_1.element_class);
      if ( !this )
      {
LABEL_46:
        v93 = sub_B5D6BC(this);
        sub_B5D668(v93, 0LL);
      }
    }
    if ( LODWORD(v40->fields.COMMAND_STAMP_POS_X) <= 1 )
      goto LABEL_45;
    *(_QWORD *)&v40->fields.CARD_ROOT_BASE_X = v48;
    sub_B5D560((BattleServantConfConponent_o *)&v40->fields.CARD_ROOT_BASE_X, v48, v42, v43, v44, v45, v46, v47);
    this = (BattlePerformanceCommandCard_o *)StringLiteral_22982/*"time"*/;
    if ( StringLiteral_22982/*"time"*/ )
    {
      this = (BattlePerformanceCommandCard_o *)sub_B5D684(StringLiteral_22982/*"time"*/, v40->klass->_1.element_class);
      if ( !this )
        goto LABEL_46;
      v55 = (System_Int32_array **)StringLiteral_22982/*"time"*/;
    }
    else
    {
      v55 = 0LL;
    }
    if ( LODWORD(v40->fields.COMMAND_STAMP_POS_X) <= 2 )
      goto LABEL_45;
    v40->fields.commandfsm = (struct PlayMakerFSM_o *)v55;
    sub_B5D560((BattleServantConfConponent_o *)&v40->fields.commandfsm, v55, v49, v50, v51, v52, v53, v54);
    v96 = moveTime;
    this = (BattlePerformanceCommandCard_o *)j_il2cpp_value_box_0(float_TypeInfo, &v96);
    v62 = (System_Int32_array **)this;
    if ( this )
    {
      this = (BattlePerformanceCommandCard_o *)sub_B5D684(this, v40->klass->_1.element_class);
      if ( !this )
        goto LABEL_46;
    }
    if ( LODWORD(v40->fields.COMMAND_STAMP_POS_X) <= 3 )
      goto LABEL_45;
    v40->fields.commandprefab = (struct UnityEngine_GameObject_o *)v62;
    sub_B5D560((BattleServantConfConponent_o *)&v40->fields.commandprefab, v62, v56, v57, v58, v59, v60, v61);
    this = (BattlePerformanceCommandCard_o *)StringLiteral_18341/*"easetype"*/;
    if ( StringLiteral_18341/*"easetype"*/ )
    {
      this = (BattlePerformanceCommandCard_o *)sub_B5D684(StringLiteral_18341/*"easetype"*/, v40->klass->_1.element_class);
      if ( !this )
        goto LABEL_46;
      v69 = (System_Int32_array **)StringLiteral_18341/*"easetype"*/;
    }
    else
    {
      v69 = 0LL;
    }
    if ( LODWORD(v40->fields.COMMAND_STAMP_POS_X) <= 4 )
      goto LABEL_45;
    v40->fields.selectCommandPrefab = (struct UnityEngine_GameObject_o *)v69;
    sub_B5D560((BattleServantConfConponent_o *)&v40->fields.selectCommandPrefab, v69, v63, v64, v65, v66, v67, v68);
    v95 = 1;
    this = (BattlePerformanceCommandCard_o *)j_il2cpp_value_box_0(iTween_EaseType_TypeInfo, &v95);
    v76 = (System_Int32_array **)this;
    if ( this )
    {
      this = (BattlePerformanceCommandCard_o *)sub_B5D684(this, v40->klass->_1.element_class);
      if ( !this )
        goto LABEL_46;
    }
    if ( LODWORD(v40->fields.COMMAND_STAMP_POS_X) <= 5 )
      goto LABEL_45;
    v40->fields.commandrootTransform = (struct UnityEngine_Transform_o *)v76;
    sub_B5D560((BattleServantConfConponent_o *)&v40->fields.commandrootTransform, v76, v70, v71, v72, v73, v74, v75);
    this = (BattlePerformanceCommandCard_o *)StringLiteral_20221/*"islocal"*/;
    if ( StringLiteral_20221/*"islocal"*/ )
    {
      this = (BattlePerformanceCommandCard_o *)sub_B5D684(StringLiteral_20221/*"islocal"*/, v40->klass->_1.element_class);
      if ( !this )
        goto LABEL_46;
      v83 = (System_Int32_array **)StringLiteral_20221/*"islocal"*/;
    }
    else
    {
      v83 = 0LL;
    }
    if ( LODWORD(v40->fields.COMMAND_STAMP_POS_X) <= 6 )
    {
LABEL_45:
      v92 = sub_B5D6C8(this);
      sub_B5D668(v92, 0LL);
    }
    v40->fields.selectinfo_sprite = (struct UISprite_o *)v83;
    sub_B5D560((BattleServantConfConponent_o *)&v40->fields.selectinfo_sprite, v83, v77, v78, v79, v80, v81, v82);
    v94[0] = 1;
    this = (BattlePerformanceCommandCard_o *)j_il2cpp_value_box_0(bool_TypeInfo, v94);
    v90 = (System_Int32_array **)this;
    if ( this )
    {
      this = (BattlePerformanceCommandCard_o *)sub_B5D684(this, v40->klass->_1.element_class);
      if ( !this )
        goto LABEL_46;
    }
    if ( LODWORD(v40->fields.COMMAND_STAMP_POS_X) <= 7 )
      goto LABEL_45;
    v40->fields.firstbonus_q = (struct UnityEngine_GameObject_o *)v90;
    sub_B5D560((BattleServantConfConponent_o *)&v40->fields.firstbonus_q, v90, v84, v85, v86, v87, v88, v89);
    if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
    v91 = iTween__Hash((System_Object_array *)v40, 0LL);
    iTween__MoveAdd_43187664(gameObject, v91, 0LL);
    ++v31;
  }
  while ( (unsigned int)(v31 - 1) < 2 );
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  BattleWindowComponent_o *commandAssistDetailWindow; // x0
  struct BattleCommandAssistDetailWindowComponent_o *v15; // x20
  BattleWindowComponent_EndCall_o *v16; // x21
  _QWORD *v17; // x0
  System_Reflection_MethodBase_o *v18; // x0

  if ( (byte_42E9E7E & 1) == 0 )
  {
    sub_B5D5C4(&Method_BattlePerformanceCommandCard_OnCloseCommandAssistDetailWindow__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_BattlePerformanceCommandCard_endCloseCommandAssistDetailWindow__, v5, v6, v7);
    sub_B5D5C4(&BattleWindowComponent_EndCall_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_16766/*"ba21"*/, v11, v12, v13);
    byte_42E9E7E = 1;
  }
  commandAssistDetailWindow = (BattleWindowComponent_o *)this->fields.commandAssistDetailWindow;
  if ( !commandAssistDetailWindow )
    goto LABEL_10;
  if ( !BattleWindowComponent__isOpen(commandAssistDetailWindow, 0LL) )
    return;
  v15 = this->fields.commandAssistDetailWindow;
  v16 = (BattleWindowComponent_EndCall_o *)sub_B5D694(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(
    v16,
    (Il2CppObject *)this,
    Method_BattlePerformanceCommandCard_endCloseCommandAssistDetailWindow__,
    0LL);
  if ( !v15 )
LABEL_10:
    sub_B5D69C(commandAssistDetailWindow, method);
  ((void (__fastcall *)(struct BattleCommandAssistDetailWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))v15->klass->vtable._12_Close.method)(
    v15,
    v16,
    v15->klass->vtable._13_CompClose.methodPtr);
  v17 = Method_BattlePerformanceCommandCard_OnCloseCommandAssistDetailWindow__;
  if ( (*((_BYTE *)Method_BattlePerformanceCommandCard_OnCloseCommandAssistDetailWindow__ + 75) & 2) != 0 )
    v17 = (_QWORD *)sub_B5D5CC(Method_BattlePerformanceCommandCard_OnCloseCommandAssistDetailWindow__);
  v18 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v17, v17[3]);
  OverwriteAssetSoundName__PlaySe(v18, (System_String_o *)StringLiteral_16766/*"ba21"*/, 0LL);
}


void __fastcall BattlePerformanceCommandCard__OnCloseSealedWindow(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  struct BattleSealedCommandWindowComponent_o *sealedWindow; // x20
  BattleWindowComponent_EndCall_o *v12; // x21
  __int64 v13; // x0
  __int64 v14; // x1

  if ( (byte_42E9E78 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BattlePerformanceCommandCard_endCloseSealedWindow__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&BattleWindowComponent_EndCall_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&SoundManager_TypeInfo, v8, v9, v10);
    byte_42E9E78 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  sealedWindow = this->fields.sealedWindow;
  v12 = (BattleWindowComponent_EndCall_o *)sub_B5D694(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(
    v12,
    (Il2CppObject *)this,
    Method_BattlePerformanceCommandCard_endCloseSealedWindow__,
    0LL);
  if ( !sealedWindow )
    sub_B5D69C(v13, v14);
  ((void (__fastcall *)(struct BattleSealedCommandWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))sealedWindow->klass->vtable._12_Close.method)(
    sealedWindow,
    v12,
    sealedWindow->klass->vtable._13_CompClose.methodPtr);
}


void __fastcall BattlePerformanceCommandCard__OnCloseTdConfWindow(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  BattleWindowComponent_o *tdConfWindow; // x0
  struct BattleTDConfWIndowComponent_o *v12; // x20
  BattleWindowComponent_EndCall_o *v13; // x21

  if ( (byte_42E9E7B & 1) == 0 )
  {
    sub_B5D5C4(&Method_BattlePerformanceCommandCard_endCloseTdConfWindow__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&BattleWindowComponent_EndCall_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&SoundManager_TypeInfo, v8, v9, v10);
    byte_42E9E7B = 1;
  }
  tdConfWindow = (BattleWindowComponent_o *)this->fields.tdConfWindow;
  if ( !tdConfWindow )
    goto LABEL_11;
  if ( !BattleWindowComponent__isOpen(tdConfWindow, 0LL) )
    return;
  v12 = this->fields.tdConfWindow;
  v13 = (BattleWindowComponent_EndCall_o *)sub_B5D694(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(
    v13,
    (Il2CppObject *)this,
    Method_BattlePerformanceCommandCard_endCloseTdConfWindow__,
    0LL);
  if ( !v12 )
LABEL_11:
    sub_B5D69C(tdConfWindow, method);
  ((void (__fastcall *)(struct BattleTDConfWIndowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))v12->klass->vtable._12_Close.method)(
    v12,
    v13,
    v12->klass->vtable._13_CompClose.methodPtr);
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
  __int64 v3; // x3
  BattlePerformanceCommandCard_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  struct BattleCommandComponent_array *commandCompArray; // x22
  int max_length; // w8
  unsigned int v11; // w23
  Il2CppClass **v12; // x8
  Il2CppClass *v13; // x21
  BattleCommandData_o *methodPtr; // x20
  _QWORD *v15; // x0
  System_Reflection_MethodBase_o *v16; // x0
  __int64 v17; // x0

  v5 = this;
  if ( (byte_42E9E7D & 1) == 0 )
  {
    sub_B5D5C4(&Method_BattlePerformanceCommandCard_OpenCommandAssistDetailWIndow__, markIndex, (_DWORD)method, v3);
    this = (BattlePerformanceCommandCard_o *)sub_B5D5C4(&StringLiteral_16765/*"ba20"*/, v6, v7, v8);
    byte_42E9E7D = 1;
  }
  commandCompArray = v5->fields.commandCompArray;
  if ( !commandCompArray )
    goto LABEL_19;
  max_length = commandCompArray->max_length;
  if ( max_length >= 1 )
  {
    v11 = 0;
    while ( 1 )
    {
      if ( v11 >= max_length )
      {
        v17 = sub_B5D6C8(this);
        sub_B5D668(v17, 0LL);
      }
      v12 = &commandCompArray->obj.klass + (int)v11;
      v13 = v12[4];
      if ( !v13 )
        goto LABEL_19;
      this = (BattlePerformanceCommandCard_o *)BattleCommandComponent__checkMark(
                                                 (BattleCommandComponent_o *)v12[4],
                                                 markIndex,
                                                 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
        break;
      max_length = commandCompArray->max_length;
      if ( (int)++v11 >= max_length )
        return;
    }
    methodPtr = (BattleCommandData_o *)v13->vtable[3].methodPtr;
    if ( !methodPtr )
      goto LABEL_19;
    if ( BattleCommandData__IsEnableCommandAssist((BattleCommandData_o *)v13->vtable[3].methodPtr, 0LL) )
    {
      this = (BattlePerformanceCommandCard_o *)v5->fields.commandAssistDetailWindow;
      if ( this )
      {
        BattleCommandAssistDetailWindowComponent__SetCommandAssistInfo(
          (BattleCommandAssistDetailWindowComponent_o *)this,
          methodPtr,
          0LL);
        v15 = Method_BattlePerformanceCommandCard_OpenCommandAssistDetailWIndow__;
        if ( (*((_BYTE *)Method_BattlePerformanceCommandCard_OpenCommandAssistDetailWIndow__ + 75) & 2) != 0 )
          v15 = (_QWORD *)sub_B5D5CC(Method_BattlePerformanceCommandCard_OpenCommandAssistDetailWIndow__);
        v16 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v15, v15[3]);
        OverwriteAssetSoundName__PlaySe(v16, (System_String_o *)StringLiteral_16765/*"ba20"*/, 0LL);
        this = (BattlePerformanceCommandCard_o *)v5->fields.commandAssistDetailWindow;
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
      sub_B5D69C(this, *(_QWORD *)&markIndex);
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
    sub_B5D69C(logic, method);
  if ( BattleLogic__getTurn(logic, 0LL) == 4 )
    this->fields.isTouchNgInTutorial = 1;
LABEL_6:
  this->fields.isPlayingMoveCard = 1;
}


void __fastcall BattlePerformanceCommandCard__OpenSealedWindow(
        BattlePerformanceCommandCard_o *this,
        int32_t markIndex,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  BattleCommandSealStatus_o *SealStatus; // x0
  __int64 v19; // x1
  struct BattleCommandComponent_array *commandCompArray; // x8
  __int64 v21; // x22
  int max_length; // w9
  Il2CppClass **v23; // x8
  BattleCommandComponent_o *v24; // x21
  struct BattleSealedCommandWindowComponent_o **p_sealedWindow; // x19
  BattlePerformanceCommandCard_o *PrioredStatus; // x0
  int v27; // w22
  const MethodInfo *v28; // x2
  System_String_o *SealedWindowMessageLocalizationKey; // x21
  __int64 v30; // x20
  const MethodInfo_234ED3C *v31; // x2
  BattleSealedCommandWindowComponent_o *sealedWindow; // x22
  __int64 v33; // x0
  __int128 v34; // [xsp+0h] [xbp-40h] BYREF
  __int64 v35; // [xsp+18h] [xbp-28h] BYREF
  System_Nullable_int__o v36; // 0:x0.8
  System_Nullable_Vector3__o v37; // 0:x0.16
  UnityEngine_Vector3_o v38; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42E9E76 & 1) == 0 )
  {
    sub_B5D5C4(&BattleSealedCommandWindowComponent_LabelAdjustArgs_TypeInfo, markIndex, (_DWORD)method, v3);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_System_Nullable_Vector3___ctor__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Nullable_int___ctor__, v12, v13, v14);
    sub_B5D5C4(&SoundManager_TypeInfo, v15, v16, v17);
    byte_42E9E76 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(2, 0LL);
  commandCompArray = this->fields.commandCompArray;
  if ( !commandCompArray )
    goto LABEL_13;
  v21 = 0LL;
  while ( 1 )
  {
    max_length = commandCompArray->max_length;
    if ( (int)v21 >= max_length )
    {
      p_sealedWindow = &this->fields.sealedWindow;
      goto LABEL_24;
    }
    if ( (unsigned int)v21 >= max_length )
    {
      v33 = sub_B5D6C8(SealStatus);
      sub_B5D668(v33, 0LL);
    }
    v23 = &commandCompArray->obj.klass + v21;
    v24 = (BattleCommandComponent_o *)v23[4];
    if ( !v24 )
      goto LABEL_13;
    SealStatus = (BattleCommandSealStatus_o *)BattleCommandComponent__checkMark(
                                                (BattleCommandComponent_o *)v23[4],
                                                markIndex,
                                                0LL);
    if ( ((unsigned __int8)SealStatus & 1) != 0 )
      break;
    commandCompArray = this->fields.commandCompArray;
    ++v21;
    if ( !commandCompArray )
      goto LABEL_13;
  }
  SealStatus = BattleCommandComponent__get_SealStatus(v24, 0LL);
  if ( !SealStatus )
    goto LABEL_13;
  PrioredStatus = (BattlePerformanceCommandCard_o *)BattleCommandSealStatus__get_PrioredStatus(SealStatus, 0LL);
  v27 = (int)PrioredStatus;
  SealedWindowMessageLocalizationKey = BattlePerformanceCommandCard__GetSealedWindowMessageLocalizationKey(
                                         PrioredStatus,
                                         (int32_t)PrioredStatus,
                                         v28);
  v30 = sub_B5D694(BattleSealedCommandWindowComponent_LabelAdjustArgs_TypeInfo);
  BattleSealedCommandWindowComponent_LabelAdjustArgs___ctor(
    (BattleSealedCommandWindowComponent_LabelAdjustArgs_o *)v30,
    0LL);
  if ( v27 == 6 )
  {
    v36 = (System_Nullable_int__o)&v35;
    v35 = 0LL;
    System_Nullable_int____ctor(v36, 26, (const MethodInfo_234B2F0 *)Method_System_Nullable_int___ctor__);
    if ( v30 )
    {
      v38.fields.y = 15.0;
      *(_QWORD *)&v37.fields.value.fields.x = &v34;
      v38.fields.x = 0.0;
      *(_QWORD *)(v30 + 16) = v35;
      v38.fields.z = 0.0;
      v34 = 0uLL;
      *(_QWORD *)&v37.fields.value.fields.z = Method_System_Nullable_Vector3___ctor__;
      System_Nullable_Vector3____ctor(v37, v38, v31);
      *(_OWORD *)(v30 + 24) = v34;
      goto LABEL_19;
    }
LABEL_13:
    sub_B5D69C(SealStatus, v19);
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
    (BattleSealedCommandWindowComponent_LabelAdjustArgs_o *)v30,
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
  __int64 v3; // x3
  BattlePerformanceCommandCard_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  struct BattleCommandComponent_array *commandCompArray; // x8
  __int64 v13; // x26
  int max_length; // w9
  Il2CppClass **v15; // x8
  BattleCommandComponent_o *v16; // x21
  BattleData_o *Bdata; // x22
  BattleServantData_o *v18; // x21
  ServantLimitAddEntity_o *svtlimitaddent; // x24
  bool IsNameTrueFromBattleSvt; // w0
  System_String_o *OverwriteTDRuby; // x22
  System_String_o *OverwriteTDName; // x23
  bool IsNpDetailActive; // w0
  BattleTDConfWIndowComponent_o *tdConfWindow; // x24
  bool v25; // w25
  struct BattleTDConfWIndowComponent_o *v26; // x20
  BattleWindowComponent_EndCall_o *v27; // x21
  __int64 v28; // x0

  v5 = this;
  if ( (byte_42E9E7A & 1) == 0 )
  {
    sub_B5D5C4(&Method_BattlePerformanceCommandCard_endOpenTdConf__, markIndex, (_DWORD)method, v3);
    sub_B5D5C4(&BattleWindowComponent_EndCall_TypeInfo, v6, v7, v8);
    this = (BattlePerformanceCommandCard_o *)sub_B5D5C4(&SeManager_TypeInfo, v9, v10, v11);
    byte_42E9E7A = 1;
  }
  commandCompArray = v5->fields.commandCompArray;
  if ( !commandCompArray )
    goto LABEL_19;
  v13 = 0LL;
  while ( 1 )
  {
    max_length = commandCompArray->max_length;
    if ( (int)v13 >= max_length )
      break;
    if ( (unsigned int)v13 >= max_length )
    {
      v28 = sub_B5D6C8(this);
      sub_B5D668(v28, 0LL);
    }
    v15 = &commandCompArray->obj.klass + v13;
    v16 = (BattleCommandComponent_o *)v15[4];
    if ( !v16 )
      goto LABEL_19;
    this = (BattlePerformanceCommandCard_o *)BattleCommandComponent__checkMark(
                                               (BattleCommandComponent_o *)v15[4],
                                               markIndex,
                                               0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      Bdata = v5->fields.Bdata;
      this = (BattlePerformanceCommandCard_o *)BattleCommandComponent__getUniqueID(v16, 0LL);
      if ( !Bdata )
        goto LABEL_19;
      this = (BattlePerformanceCommandCard_o *)BattleData__getServantData(Bdata, (int32_t)this, 0LL);
      if ( !this )
        goto LABEL_19;
      v18 = (BattleServantData_o *)this;
      this = (BattlePerformanceCommandCard_o *)this->fields.cutin_trinity_b;
      if ( !this )
        goto LABEL_19;
      svtlimitaddent = v18->fields.svtlimitaddent;
      IsNameTrueFromBattleSvt = ServantEntity__IsNameTrueFromBattleSvt((ServantEntity_o *)this, 0LL);
      OverwriteTDRuby = 0LL;
      OverwriteTDName = 0LL;
      if ( svtlimitaddent && IsNameTrueFromBattleSvt )
      {
        OverwriteTDName = ServantLimitAddEntity__GetOverwriteTDName(svtlimitaddent, 0LL);
        OverwriteTDRuby = ServantLimitAddEntity__GetOverwriteTDRuby(svtlimitaddent, 0LL);
      }
      this = (BattlePerformanceCommandCard_o *)v5->fields.Bdata;
      if ( !this )
        goto LABEL_19;
      IsNpDetailActive = BattleData__IsNpDetailActive((BattleData_o *)this, v18, 1, 0LL);
      tdConfWindow = v5->fields.tdConfWindow;
      v25 = IsNpDetailActive;
      this = (BattlePerformanceCommandCard_o *)BattleServantData__getTreasureDvcId(v18, 1, 0LL);
      if ( !tdConfWindow )
        goto LABEL_19;
      BattleTDConfWIndowComponent__setData(
        tdConfWindow,
        (int32_t)this,
        v18->fields.treasuredvcLevel,
        OverwriteTDName,
        OverwriteTDRuby,
        v25,
        0LL);
    }
    commandCompArray = v5->fields.commandCompArray;
    ++v13;
    if ( !commandCompArray )
      goto LABEL_19;
  }
  if ( (BYTE3(SeManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SeManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
  SeManager__PlayCommonSe(9, 0LL);
  v26 = v5->fields.tdConfWindow;
  v27 = (BattleWindowComponent_EndCall_o *)sub_B5D694(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(
    v27,
    (Il2CppObject *)v5,
    Method_BattlePerformanceCommandCard_endOpenTdConf__,
    0LL);
  if ( !v26 )
LABEL_19:
    sub_B5D69C(this, *(_QWORD *)&markIndex);
  ((void (__fastcall *)(struct BattleTDConfWIndowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))v26->klass->vtable._10_Open.method)(
    v26,
    v27,
    v26->klass->vtable._11_CompOpen.methodPtr);
}


void __fastcall BattlePerformanceCommandCard__PlayBackStar(
        BattlePerformanceCommandCard_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  __int64 v36; // x22
  struct System_Collections_Generic_List_GameObject__o *aubelist; // x0
  __int64 v38; // x1
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  __int64 v51; // x1
  BattlePerformance_o *perf; // x0
  unsigned int v53; // w25
  struct BattleCommandComponent_array *commandCompArray; // x8
  Il2CppClass **v55; // x8
  BattleCommandComponent_o *v56; // x21
  int32_t CriticalCount; // w22
  int v58; // w26
  struct UnityEngine_Transform_array *commandTransformArray; // x8
  UnityEngine_Transform_o *v60; // x23
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v61; // x24
  const MethodInfo *v62; // x3
  System_Action_o *v64; // x21
  const MethodInfo *v65; // x2
  System_Collections_IEnumerator_o *v66; // x0
  __int64 v67; // x0
  Il2CppObject *object; // [xsp+0h] [xbp-90h]
  System_Collections_Generic_List_Enumerator_T__o v69; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v70; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_42E9E73 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_GameObject___ctor__, (_DWORD)callback, (_DWORD)method, v3);
    sub_B5D5C4(&System_Action_GameObject__TypeInfo, v6, v7, v8);
    sub_B5D5C4(&System_Action_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_BattleCommandComponent_addCriticalBuff__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v21, v22, v23);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__Clear__, v24, v25, v26);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v27, v28, v29);
    sub_B5D5C4(&Method_BattlePerformanceCommandCard___c__DisplayClass175_0__PlayBackStar_b__0__, v30, v31, v32);
    sub_B5D5C4(&BattlePerformanceCommandCard___c__DisplayClass175_0_TypeInfo, v33, v34, v35);
    byte_42E9E73 = 1;
  }
  memset(&v70, 0, sizeof(v70));
  v36 = sub_B5D694(BattlePerformanceCommandCard___c__DisplayClass175_0_TypeInfo);
  BattlePerformanceCommandCard___c__DisplayClass175_0___ctor(
    (BattlePerformanceCommandCard___c__DisplayClass175_0_o *)v36,
    0LL);
  if ( !v36 )
    goto LABEL_22;
  *(_QWORD *)(v36 + 16) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v36 + 16), (System_Int32_array **)this, v39, v40, v41, v42, v43, v44);
  *(_QWORD *)(v36 + 24) = callback;
  sub_B5D560((BattleServantConfConponent_o *)(v36 + 24), (System_Int32_array **)callback, v45, v46, v47, v48, v49, v50);
  aubelist = this->fields.aubelist;
  if ( !aubelist )
    goto LABEL_22;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v69,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)aubelist,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v70 = v69;
  object = (Il2CppObject *)v36;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v70,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    perf = this->fields.perf;
    if ( !perf )
      sub_B5D69C(0LL, v51);
    BattlePerformance__destroyInstantiate(perf, (UnityEngine_GameObject_o *)v70.fields.current, 0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v70,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  aubelist = this->fields.aubelist;
  if ( !aubelist )
    goto LABEL_22;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)aubelist,
    (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_GameObject__Clear__);
  v53 = 0;
  do
  {
    commandCompArray = this->fields.commandCompArray;
    if ( !commandCompArray )
      goto LABEL_22;
    if ( v53 >= commandCompArray->max_length )
    {
LABEL_23:
      v67 = sub_B5D6C8(aubelist);
      sub_B5D668(v67, 0LL);
    }
    v55 = &commandCompArray->obj.klass + (int)v53;
    v56 = (BattleCommandComponent_o *)v55[4];
    if ( !v56 )
      goto LABEL_22;
    CriticalCount = BattleCommandComponent__getCriticalCount((BattleCommandComponent_o *)v55[4], 0LL);
    BattleCommandComponent__setCriticalObject(v56, 0, 0LL);
    if ( CriticalCount >= 1 )
    {
      v58 = 0;
      while ( 1 )
      {
        commandTransformArray = this->fields.commandTransformArray;
        if ( !commandTransformArray )
          break;
        if ( v53 >= commandTransformArray->max_length )
          goto LABEL_23;
        v60 = commandTransformArray->m_Items[v53];
        v61 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_GameObject__TypeInfo);
        System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
          v61,
          (Il2CppObject *)v56,
          Method_BattleCommandComponent_addCriticalBuff__,
          (const MethodInfo_258B320 *)Method_System_Action_GameObject___ctor__);
        BattlePerformanceCommandCard__MoveNotTween2back(this, v60, (System_Action_GameObject__o *)v61, v62);
        if ( ++v58 >= CriticalCount )
          goto LABEL_19;
      }
LABEL_22:
      sub_B5D69C(aubelist, v38);
    }
LABEL_19:
    ;
  }
  while ( v53++ < 4 );
  this->fields._IsPlayingBackStar_k__BackingField = 1;
  v64 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v64,
    object,
    Method_BattlePerformanceCommandCard___c__DisplayClass175_0__PlayBackStar_b__0__,
    0LL);
  v66 = BattlePerformanceCommandCard__waitFunc(this, 0.5, v64, v65);
  UnityEngine_MonoBehaviour__StartCoroutine_35615088((UnityEngine_MonoBehaviour_o *)this, v66, 0LL);
}


void __fastcall BattlePerformanceCommandCard__PlayFallStar(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  struct System_Collections_Generic_List_GameObject__o *aubelist; // x0
  __int64 v27; // x1
  BattlePerformance_o *perf; // x0
  unsigned int v29; // w24
  struct BattleCommandComponent_array *commandCompArray; // x8
  Il2CppClass **v31; // x8
  BattleCommandComponent_o *v32; // x20
  int v33; // w21
  int v34; // w25
  struct UnityEngine_Transform_array *commandTransformArray; // x8
  UnityEngine_Transform_o *v36; // x22
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v37; // x23
  const MethodInfo *v38; // x3
  __int64 v40; // x0
  System_Collections_Generic_List_Enumerator_T__o v41; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o i; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_42E9E71 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_GameObject___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Action_GameObject__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_BattleCommandComponent_addCriticalBuff__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__Clear__, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v23, v24, v25);
    byte_42E9E71 = 1;
  }
  memset(&i, 0, sizeof(i));
  aubelist = this->fields.aubelist;
  if ( !aubelist )
    goto LABEL_24;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v41,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)aubelist,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  for ( i = v41;
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
          &i,
          (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
        BattlePerformance__destroyInstantiate(perf, (UnityEngine_GameObject_o *)i.fields.current, 0LL) )
  {
    perf = this->fields.perf;
    if ( !perf )
      sub_B5D69C(0LL, v27);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &i,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  aubelist = this->fields.aubelist;
  if ( !aubelist )
    goto LABEL_24;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)aubelist,
    (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_GameObject__Clear__);
  v29 = 0;
  do
  {
    commandCompArray = this->fields.commandCompArray;
    if ( !commandCompArray )
      goto LABEL_24;
    if ( v29 >= commandCompArray->max_length )
    {
LABEL_25:
      v40 = sub_B5D6C8(aubelist);
      sub_B5D668(v40, 0LL);
    }
    v31 = &commandCompArray->obj.klass + (int)v29;
    v32 = (BattleCommandComponent_o *)v31[4];
    if ( !v32 )
      goto LABEL_24;
    aubelist = (struct System_Collections_Generic_List_GameObject__o *)BattleCommandComponent__IsMaxViewCritical(
                                                                         (BattleCommandComponent_o *)v31[4],
                                                                         0LL);
    if ( ((unsigned __int8)aubelist & 1) == 0 )
    {
      aubelist = (struct System_Collections_Generic_List_GameObject__o *)BattleCommandComponent__GetPassStarCount(
                                                                           v32,
                                                                           0LL);
      if ( (int)aubelist >= 1 )
      {
        v33 = (int)aubelist;
        v34 = 0;
        while ( 1 )
        {
          commandTransformArray = this->fields.commandTransformArray;
          if ( !commandTransformArray )
            break;
          if ( v29 >= commandTransformArray->max_length )
            goto LABEL_25;
          v36 = commandTransformArray->m_Items[v29];
          v37 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_GameObject__TypeInfo);
          System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
            v37,
            (Il2CppObject *)v32,
            Method_BattleCommandComponent_addCriticalBuff__,
            (const MethodInfo_258B320 *)Method_System_Action_GameObject___ctor__);
          BattlePerformanceCommandCard__MoveNotTween(this, v36, (System_Action_GameObject__o *)v37, v38);
          if ( ++v34 >= v33 )
            goto LABEL_19;
        }
LABEL_24:
        sub_B5D69C(aubelist, method);
      }
LABEL_19:
      BattleCommandComponent__ResetPassStarCount(v32, 0LL);
      if ( v32->fields.selectflg )
        BattleCommandComponent__updateSelectedEffect(v32, 0LL);
    }
  }
  while ( v29++ < 4 );
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
    sub_B5D69C(this, combo);
  }
  if ( v7->max_length <= 2 )
  {
LABEL_12:
    v8 = sub_B5D6C8(this);
    sub_B5D668(v8, 0LL);
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
    sub_B5D69C(this, combo);
  }
  if ( v7->max_length <= 2 )
  {
LABEL_12:
    v8 = sub_B5D6C8(this);
    sub_B5D668(v8, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  BattlePerformanceCommandCard_o *v4; // x19
  struct BattleCommandComponent_array *selectedcomponents; // x8
  __int64 v6; // x0

  v4 = this;
  if ( (byte_42E9E66 & 1) == 0 )
  {
    this = (BattlePerformanceCommandCard_o *)sub_B5D5C4(&StringLiteral_18411/*"ef_excard01"*/, (_DWORD)method, v2, v3);
    byte_42E9E66 = 1;
  }
  selectedcomponents = v4->fields.selectedcomponents;
  if ( !selectedcomponents )
    goto LABEL_7;
  if ( selectedcomponents->max_length <= 3 )
  {
    v6 = sub_B5D6C8(this);
    sub_B5D668(v6, 0LL);
  }
  this = (BattlePerformanceCommandCard_o *)selectedcomponents->m_Items[3];
  if ( !this )
LABEL_7:
    sub_B5D69C(this, method);
  BattleCommandComponent__attachEffect((BattleCommandComponent_o *)this, (System_String_o *)StringLiteral_18411/*"ef_excard01"*/, 5, 0LL);
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
    sub_B5D69C(this, method);
  v3 = this;
  v4 = 0LL;
  while ( 1 )
  {
    max_length = commandCompArray->max_length;
    if ( (int)v4 >= max_length )
      break;
    if ( (unsigned int)v4 >= max_length )
    {
      v6 = sub_B5D6C8(this);
      sub_B5D668(v6, 0LL);
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
      v5 = sub_B5D6C8(this);
      sub_B5D668(v5, 0LL);
    }
    this = (BattlePerformanceCommandCard_o *)commandCompArray->m_Items[v3];
    if ( !this )
LABEL_7:
      sub_B5D69C(this, method);
    BattleCommandComponent__ResetPassStarCount((BattleCommandComponent_o *)this, 0LL);
    ++v3;
  }
  while ( (unsigned int)(v3 - 1) < 4 );
}


void __fastcall BattlePerformanceCommandCard__ResetNoblePhantasmCard(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  BattlePerformanceCommandCard_o *v4; // x19
  __int64 v5; // x21
  struct BattleCommandComponent_array *commandCompArray; // x8
  unsigned __int64 v7; // x23
  UnityEngine_Object_o *v8; // x20
  __int64 v9; // x0

  v4 = this;
  if ( (byte_42E9E95 & 1) == 0 )
  {
    this = (BattlePerformanceCommandCard_o *)sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E9E95 = 1;
  }
  v5 = 9LL;
  do
  {
    commandCompArray = v4->fields.commandCompArray;
    if ( !commandCompArray )
LABEL_14:
      sub_B5D69C(this, method);
    v7 = v5 - 4;
    if ( v5 - 4 >= (unsigned __int64)commandCompArray->max_length )
    {
      v9 = sub_B5D6C8(this);
      sub_B5D668(v9, 0LL);
    }
    v8 = (UnityEngine_Object_o *)*((_QWORD *)&commandCompArray->obj.klass + v5);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    this = (BattlePerformanceCommandCard_o *)UnityEngine_Object__op_Inequality(v8, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !v8 )
        goto LABEL_14;
      BattleCommandComponent__setData((BattleCommandComponent_o *)v8, 0LL, 0LL, 0, 1, 0, 0LL);
    }
    ++v5;
  }
  while ( v7 < 7 );
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceCommandCard__SetBackTacticalButton(
        BattlePerformanceCommandCard_o *this,
        bool active,
        const MethodInfo *method)
{
  __int64 v3; // x3
  UnityEngine_Component_o *backTacticalButton; // x0
  UnityEngine_GameObject_o *gameObject; // x20

  if ( (byte_42E9E40 & 1) == 0 )
  {
    sub_B5D5C4(&AndroidBackKeyManager_TypeInfo, active, (_DWORD)method, v3);
    byte_42E9E40 = 1;
  }
  backTacticalButton = (UnityEngine_Component_o *)this->fields.backTacticalButton;
  if ( !backTacticalButton )
    sub_B5D69C(0LL, active);
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
  sub_B5D560(
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
    sub_B5D69C(this, method);
  v3 = this;
  v4 = 0LL;
  while ( 1 )
  {
    max_length = commandCompArray->max_length;
    if ( (int)v4 >= max_length )
      break;
    if ( (unsigned int)v4 >= max_length )
    {
      v6 = sub_B5D6C8(this);
      sub_B5D668(v6, 0LL);
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
    sub_B5D69C(this, value);
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
            v13 = sub_B5D6C8(this);
            sub_B5D668(v13, 0LL);
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
    sub_B5D69C(this, method);
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
          v16 = sub_B5D6C8(this);
          sub_B5D668(v16, 0LL);
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
    sub_B5D69C(highSpeedButton, active);
  }
  v6 = active;
  UnityEngine_GameObject__SetActive(highSpeedButton, v6, 0LL);
  BattlePerformanceCommandCard__SetBackTacticalButton(this, v6, v7);
}


void __fastcall BattlePerformanceCommandCard__SetDownloadEventSprite(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  BattlePerformanceCommandCard_o *v4; // x19
  struct BattleCommandComponent_array *commandCompArray; // x8
  unsigned __int64 v6; // x21
  unsigned __int64 max_length; // x9
  UnityEngine_Object_o *v8; // x20
  __int64 v9; // x0

  v4 = this;
  if ( (byte_42E9E93 & 1) == 0 )
  {
    this = (BattlePerformanceCommandCard_o *)sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E9E93 = 1;
  }
  commandCompArray = v4->fields.commandCompArray;
  if ( !commandCompArray )
LABEL_14:
    sub_B5D69C(this, method);
  v6 = 0LL;
  while ( 1 )
  {
    max_length = commandCompArray->max_length;
    if ( (__int64)v6 >= (int)max_length )
      break;
    if ( v6 >= max_length )
    {
      v9 = sub_B5D6C8(this);
      sub_B5D668(v9, 0LL);
    }
    v8 = (UnityEngine_Object_o *)commandCompArray->m_Items[v6];
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    this = (BattlePerformanceCommandCard_o *)UnityEngine_Object__op_Inequality(v8, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !v8 )
        goto LABEL_14;
      BattleCommandComponent__SetDownloadEventSprite((BattleCommandComponent_o *)v8, 0LL);
    }
    commandCompArray = v4->fields.commandCompArray;
    ++v6;
    if ( !commandCompArray )
      goto LABEL_14;
  }
}


void __fastcall BattlePerformanceCommandCard__SetLabelActive(
        BattlePerformanceCommandCard_o *this,
        bool active,
        const MethodInfo *method)
{
  __int64 v3; // x3
  BattlePerformanceCommandCard_o *v5; // x19
  struct BattleCommandComponent_array *commandCompArray; // x8
  unsigned __int64 v7; // x22
  bool v8; // w20
  unsigned __int64 max_length; // x9
  UnityEngine_Object_o *v10; // x21
  __int64 v11; // x1
  __int64 v12; // x0

  v5 = this;
  if ( (byte_42E9E91 & 1) == 0 )
  {
    this = (BattlePerformanceCommandCard_o *)sub_B5D5C4(&UnityEngine_Object_TypeInfo, active, (_DWORD)method, v3);
    byte_42E9E91 = 1;
  }
  commandCompArray = v5->fields.commandCompArray;
  if ( commandCompArray )
  {
    v7 = 0LL;
    v8 = active;
    while ( 1 )
    {
      max_length = commandCompArray->max_length;
      if ( (__int64)v7 >= (int)max_length )
        break;
      if ( v7 >= max_length )
      {
        v12 = sub_B5D6C8(this);
        sub_B5D668(v12, 0LL);
      }
      v10 = (UnityEngine_Object_o *)commandCompArray->m_Items[v7];
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      this = (BattlePerformanceCommandCard_o *)UnityEngine_Object__op_Inequality(v10, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !v10 )
          goto LABEL_14;
        BattleCommandComponent__SetLabelActive((BattleCommandComponent_o *)v10, v8, 0LL);
        BattleCommandComponent__SetLabelAssistActive((BattleCommandComponent_o *)v10, v8, 0LL);
      }
      commandCompArray = v5->fields.commandCompArray;
      ++v7;
      if ( !commandCompArray )
LABEL_14:
        sub_B5D69C(this, v11);
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
  if ( (byte_42E9E53 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_UnityEngine_GameObject_GetComponent_BattleSelectCommandComponent___,
      targetindex,
      (_DWORD)bc,
      method);
    byte_42E9E53 = 1;
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
  v26 = Spawner__Spawn_26157860(spawner, selectCommandPrefab, v34, v36, 0LL);
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
                                                                       (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_BattleSelectCommandComponent___)) == 0LL)
    || (BattleSelectCommandComponent__setIndex(Component_srcLineSprite, targetindex, 0LL), !bc)
    || (BattleCommandComponent__setSelectStamp(bc, v28, 0LL),
        (Component_srcLineSprite = (BattleSelectCommandComponent_o *)UnityEngine_GameObject__get_transform(v28, 0LL)) == 0LL) )
  {
LABEL_10:
    sub_B5D69C(Component_srcLineSprite, v17);
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
  sub_B5D560(
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  BattleDataDefine_c *v26; // x0
  System_String_o *ASSET_BATTLE_COMMON; // x20
  AssetData_o *AssetStorage; // x0
  __int64 v29; // x1
  AssetData_o *v30; // x20
  struct UnityEngine_GameObject_o *Object_WarBoardWaitTimeSetting; // x0
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  struct UnityEngine_GameObject_o *v38; // x0
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  struct UnityEngine_GameObject_o *v45; // x0
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  struct UnityEngine_GameObject_o *v52; // x0
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  struct UnityEngine_GameObject_o *v59; // x0
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7

  if ( (byte_42E9E94 & 1) == 0 )
  {
    sub_B5D5C4(&Method_AssetData_GetObject_GameObject____68807504, (_DWORD)method, v2, v3);
    sub_B5D5C4(&AssetManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&BattleDataDefine_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_16931/*"bit_1stbonus_q"*/, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_16930/*"bit_1stbonus_b"*/, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_16951/*"bit_com_grand_m"*/, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_16952/*"bit_com_trinity_m"*/, v20, v21, v22);
    sub_B5D5C4(&StringLiteral_16929/*"bit_1stbonus_a"*/, v23, v24, v25);
    byte_42E9E94 = 1;
  }
  v26 = BattleDataDefine_TypeInfo;
  if ( (BYTE3(BattleDataDefine_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleDataDefine_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
    v26 = BattleDataDefine_TypeInfo;
  }
  ASSET_BATTLE_COMMON = v26->static_fields->ASSET_BATTLE_COMMON;
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__getAssetStorage(ASSET_BATTLE_COMMON, 0LL);
  if ( !AssetStorage )
    goto LABEL_14;
  v30 = AssetStorage;
  Object_WarBoardWaitTimeSetting = (struct UnityEngine_GameObject_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                        AssetStorage,
                                                                        (System_String_o *)StringLiteral_16951/*"bit_com_grand_m"*/,
                                                                        (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_GameObject____68807504);
  this->fields.cutin_grand_m = Object_WarBoardWaitTimeSetting;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.cutin_grand_m,
    (System_Int32_array **)Object_WarBoardWaitTimeSetting,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  v38 = (struct UnityEngine_GameObject_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                             v30,
                                             (System_String_o *)StringLiteral_16952/*"bit_com_trinity_m"*/,
                                             (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_GameObject____68807504);
  this->fields.cutin_trinity_m = v38;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.cutin_trinity_m,
    (System_Int32_array **)v38,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
  v45 = (struct UnityEngine_GameObject_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                             v30,
                                             (System_String_o *)StringLiteral_16931/*"bit_1stbonus_q"*/,
                                             (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_GameObject____68807504);
  this->fields.firstbonus_q = v45;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.firstbonus_q,
    (System_Int32_array **)v45,
    v46,
    v47,
    v48,
    v49,
    v50,
    v51);
  v52 = (struct UnityEngine_GameObject_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                             v30,
                                             (System_String_o *)StringLiteral_16929/*"bit_1stbonus_a"*/,
                                             (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_GameObject____68807504);
  this->fields.firstbonus_a = v52;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.firstbonus_a,
    (System_Int32_array **)v52,
    v53,
    v54,
    v55,
    v56,
    v57,
    v58);
  v59 = (struct UnityEngine_GameObject_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                             v30,
                                             (System_String_o *)StringLiteral_16930/*"bit_1stbonus_b"*/,
                                             (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_GameObject____68807504);
  this->fields.firstbonus_b = v59;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.firstbonus_b,
    (System_Int32_array **)v59,
    v60,
    v61,
    v62,
    v63,
    v64,
    v65);
  AssetStorage = (AssetData_o *)this->fields.spawner;
  if ( !AssetStorage
    || (Spawner__Precache_26157212((Spawner_o *)AssetStorage, (UnityEngine_Object_o *)this->fields.firstbonus_q, 1, 0LL),
        (AssetStorage = (AssetData_o *)this->fields.spawner) == 0LL)
    || (Spawner__Precache_26157212((Spawner_o *)AssetStorage, (UnityEngine_Object_o *)this->fields.firstbonus_a, 1, 0LL),
        (AssetStorage = (AssetData_o *)this->fields.spawner) == 0LL) )
  {
LABEL_14:
    sub_B5D69C(AssetStorage, v29);
  }
  Spawner__Precache_26157212((Spawner_o *)AssetStorage, (UnityEngine_Object_o *)this->fields.firstbonus_b, 1, 0LL);
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
    sub_B5D69C(this, isZeroStart);
  v4 = this;
  v6 = 0LL;
  while ( 1 )
  {
    max_length = commandCompArray->max_length;
    if ( (int)v6 >= max_length )
      break;
    if ( (unsigned int)v6 >= max_length )
    {
      v10 = sub_B5D6C8(this);
      sub_B5D668(v10, 0LL);
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
    v5 = UnityEngine_Mathf__Max_41629432(v4, 0, 0LL);
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
      v17 = sub_B5D6C8(touches);
      sub_B5D668(v17, 0LL);
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
      sub_B5D69C(touches, v8);
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
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  System_Collections_Generic_IEnumerable_BattleCommandComponent__c *klass; // x8
  unsigned __int64 v19; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v22; // x1
  __int64 v23; // x3
  __int64 v24; // x19
  __int64 v25; // x8
  unsigned __int64 v26; // x10
  int *v27; // x11
  __int64 v28; // x0
  __int64 v29; // x3
  __int64 v30; // x8
  unsigned __int64 v31; // x10
  int *v32; // x11
  __int64 v33; // x0
  UnityEngine_Object_o *v34; // x21
  _BOOL8 v35; // x0
  __int64 v36; // x1
  __int64 v37; // x8
  unsigned __int64 v38; // x10
  int *v39; // x11
  __int64 v40; // x0

  if ( (byte_42E9E6D & 1) == 0 )
  {
    sub_B5D5C4(&System_IDisposable_TypeInfo, (_DWORD)svtData, (_DWORD)commandCompEnumerable, method);
    sub_B5D5C4(&System_Collections_Generic_IEnumerable_BattleCommandComponent__TypeInfo, v6, v7, v8);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_BattleCommandComponent__TypeInfo, v9, v10, v11);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v12, v13, v14);
    this = (BattlePerformanceCommandCard_o *)sub_B5D5C4(&UnityEngine_Object_TypeInfo, v15, v16, v17);
    byte_42E9E6D = 1;
  }
  if ( !commandCompEnumerable )
    sub_B5D69C(this, svtData);
  klass = commandCompEnumerable->klass;
  if ( *(_WORD *)&commandCompEnumerable->klass->_2.bitflags1 )
  {
    v19 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_BattleCommandComponent__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BattleCommandComponent__TypeInfo )
    {
      ++v19;
      p_offset += 4;
      if ( v19 >= *(unsigned __int16 *)&commandCompEnumerable->klass->_2.bitflags1 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_8:
    p_method = sub_AF54C0(
                 commandCompEnumerable,
                 System_Collections_Generic_IEnumerable_BattleCommandComponent__TypeInfo,
                 0LL,
                 method);
  }
  v24 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_BattleCommandComponent__o *, _QWORD))p_method)(
          commandCompEnumerable,
          *(_QWORD *)(p_method + 8));
  if ( !v24 )
    sub_B5D69C(0LL, v22);
  while ( 1 )
  {
    v25 = *(_QWORD *)v24;
    if ( *(_WORD *)(*(_QWORD *)v24 + 298LL) )
    {
      v26 = 0LL;
      v27 = (int *)(*(_QWORD *)(v25 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v27 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v26;
        v27 += 4;
        if ( v26 >= *(unsigned __int16 *)(*(_QWORD *)v24 + 298LL) )
          goto LABEL_15;
      }
      v28 = v25 + 16LL * *v27 + 312;
    }
    else
    {
LABEL_15:
      v28 = sub_AF54C0(v24, System_Collections_IEnumerator_TypeInfo, 0LL, v23);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v28)(v24, *(_QWORD *)(v28 + 8)) & 1) == 0 )
      break;
    v30 = *(_QWORD *)v24;
    if ( *(_WORD *)(*(_QWORD *)v24 + 298LL) )
    {
      v31 = 0LL;
      v32 = (int *)(*(_QWORD *)(v30 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_BattleCommandComponent__c **)v32 - 1) != System_Collections_Generic_IEnumerator_BattleCommandComponent__TypeInfo )
      {
        ++v31;
        v32 += 4;
        if ( v31 >= *(unsigned __int16 *)(*(_QWORD *)v24 + 298LL) )
          goto LABEL_22;
      }
      v33 = v30 + 16LL * *v32 + 312;
    }
    else
    {
LABEL_22:
      v33 = sub_AF54C0(v24, System_Collections_Generic_IEnumerator_BattleCommandComponent__TypeInfo, 0LL, v29);
    }
    v34 = (UnityEngine_Object_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v33)(v24, *(_QWORD *)(v33 + 8));
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v35 = UnityEngine_Object__op_Equality(v34, 0LL, 0LL);
    if ( !v35 )
    {
      if ( !v34 )
        sub_B5D69C(v35, v36);
      BattleCommandComponent__transformSvtFace((BattleCommandComponent_o *)v34, svtData, 0LL);
    }
  }
  v37 = *(_QWORD *)v24;
  if ( *(_WORD *)(*(_QWORD *)v24 + 298LL) )
  {
    v38 = 0LL;
    v39 = (int *)(*(_QWORD *)(v37 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v39 - 1) != System_IDisposable_TypeInfo )
    {
      ++v38;
      v39 += 4;
      if ( v38 >= *(unsigned __int16 *)(*(_QWORD *)v24 + 298LL) )
        goto LABEL_34;
    }
    v40 = v37 + 16LL * *v39 + 312;
  }
  else
  {
LABEL_34:
    v40 = sub_AF54C0(v24, System_IDisposable_TypeInfo, 0LL, v29);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v40)(v24, *(_QWORD *)(v40 + 8));
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
    sub_B5D69C(this, method);
  v3 = this;
  v4 = 0LL;
  while ( 1 )
  {
    max_length = commandCompArray->max_length;
    if ( (int)v4 >= max_length )
      break;
    if ( (unsigned int)v4 >= max_length )
    {
      v6 = sub_B5D6C8(this);
      sub_B5D668(v6, 0LL);
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
  __int64 v3; // x3
  int v4; // w19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  void *selectedcomponents; // x0
  __int64 v10; // x8
  __int64 v11; // x22
  __int64 i; // x24
  UnityEngine_Object_o *v13; // x21
  struct BattleCommandComponent_array *v14; // x8
  __int64 v15; // x8
  __int64 v16; // x8
  struct BattleCommandComponent_array *v17; // x8
  BattleCommandComponent_o *v18; // x8
  __int64 v19; // x0

  v4 = nowCardIndex;
  if ( (byte_42E9E92 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BasicHelper_IndexValue_BattleCommandComponent___, nowCardIndex, (_DWORD)method, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v6, v7, v8);
    byte_42E9E92 = 1;
  }
  selectedcomponents = this->fields.selectedcomponents;
  if ( !selectedcomponents )
LABEL_23:
    sub_B5D69C(selectedcomponents, *(_QWORD *)&nowCardIndex);
  v10 = *((_QWORD *)selectedcomponents + 3);
  if ( (int)v10 > v4 )
  {
    v11 = (int)v10;
    for ( i = v4 + 4LL; ; ++i )
    {
      v13 = (UnityEngine_Object_o *)BasicHelper__IndexValue_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_(
                                      (WellFired_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_array *)selectedcomponents,
                                      v4,
                                      0LL,
                                      (const MethodInfo_1AD9094 *)Method_BasicHelper_IndexValue_BattleCommandComponent___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      selectedcomponents = (void *)UnityEngine_Object__op_Equality(v13, 0LL, 0LL);
      if ( ((unsigned __int8)selectedcomponents & 1) == 0 )
      {
        v14 = this->fields.selectedcomponents;
        if ( !v14 )
          goto LABEL_23;
        if ( v4 >= v14->max_length )
          goto LABEL_24;
        v15 = *((_QWORD *)&v14->obj.klass + i);
        if ( !v15 )
          goto LABEL_23;
        v16 = *(_QWORD *)(v15 + 352);
        if ( v16 )
        {
          selectedcomponents = this->fields.Bdata;
          if ( !selectedcomponents )
            goto LABEL_23;
          selectedcomponents = BattleData__getServantData(
                                 (BattleData_o *)selectedcomponents,
                                 *(_DWORD *)(v16 + 40),
                                 0LL);
          if ( selectedcomponents )
          {
            v17 = this->fields.selectedcomponents;
            if ( !v17 )
              goto LABEL_23;
            if ( v4 >= v17->max_length )
            {
LABEL_24:
              v19 = sub_B5D6C8(selectedcomponents);
              sub_B5D668(v19, 0LL);
            }
            v18 = (BattleCommandComponent_o *)*((_QWORD *)&v17->obj.klass + i);
            if ( !v18 )
              goto LABEL_23;
            BattleCommandComponent__setBuffIconList(v18, *((BattleBuffData_o **)selectedcomponents + 95), 0LL);
          }
        }
      }
      if ( i - 3 >= v11 )
        return;
      selectedcomponents = this->fields.selectedcomponents;
      ++v4;
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
      sub_B5D69C(v4, v5);
    v8 = deltaTime;
    v9 = 0LL;
    while ( 1 )
    {
      max_length = v7->max_length;
      if ( (int)v9 >= max_length )
        break;
      if ( (unsigned int)v9 >= max_length )
      {
        v11 = sub_B5D6C8(v4);
        sub_B5D668(v11, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  PlayMakerFSM_o *commandfsm; // x0

  if ( (byte_42E9E98 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_11749/*"SELECT"*/, (_DWORD)method, v2, v3);
    byte_42E9E98 = 1;
  }
  commandfsm = this->fields.commandfsm;
  if ( !commandfsm )
    sub_B5D69C(0LL, method);
  PlayMakerFSM__SendEvent(commandfsm, (System_String_o *)StringLiteral_11749/*"SELECT"*/, 0LL);
}


void __fastcall BattlePerformanceCommandCard__back2Tactical(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  BattlePerformanceCommandCard_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct BattleCommandComponent_array *commandCompArray; // x21
  int max_length; // w8
  unsigned int v10; // w22
  Il2CppClass **v11; // x8
  BattleCommandComponent_o *v12; // x20
  int32_t MarkIndex; // w0
  const MethodInfo *v14; // x3
  const MethodInfo *v15; // x1
  const MethodInfo *v16; // x2
  __int64 v17; // x0

  v4 = this;
  if ( (byte_42E9E83 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_3154/*"CLOSE"*/, (_DWORD)method, v2, v3);
    this = (BattlePerformanceCommandCard_o *)sub_B5D5C4(&StringLiteral_16544/*"anim_wait"*/, v5, v6, v7);
    byte_42E9E83 = 1;
  }
  commandCompArray = v4->fields.commandCompArray;
  if ( !commandCompArray )
    goto LABEL_21;
  max_length = commandCompArray->max_length;
  if ( max_length >= 1 )
  {
    v10 = 0;
    while ( 1 )
    {
      if ( v10 >= max_length )
      {
        v17 = sub_B5D6C8(this);
        sub_B5D668(v17, 0LL);
      }
      v11 = &commandCompArray->obj.klass + (int)v10;
      v12 = (BattleCommandComponent_o *)v11[4];
      if ( !v12 )
        break;
      MarkIndex = BattleCommandComponent__getMarkIndex((BattleCommandComponent_o *)v11[4], 0LL);
      if ( (MarkIndex & 0x80000000) == 0 && v12->fields.selectflg )
        BattlePerformanceCommandCard__unselectCommandCard(v4, v12, MarkIndex, v14);
      if ( BattleCommandComponent__isTreasureDvc(v12, 0LL) )
      {
        BattleCommandComponent__stopAnimation(v12, 0LL);
        BattleCommandComponent__ReleaseNobleGaugeEffect(v12, 0LL);
        this = (BattlePerformanceCommandCard_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)v12,
                                                   0LL);
        if ( !this )
          break;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      }
      this = (BattlePerformanceCommandCard_o *)BattleCommandComponent__checkCriticalPointValid(v12, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 && !v4->fields.isPrevStar )
        v4->fields.isPrevStar = 1;
      max_length = commandCompArray->max_length;
      if ( (int)++v10 >= max_length )
        goto LABEL_18;
    }
LABEL_21:
    sub_B5D69C(this, method);
  }
LABEL_18:
  UnityEngine_MonoBehaviour__StopCoroutine_35615756((UnityEngine_MonoBehaviour_o *)v4, v4->fields.openNpCoroutine, 0LL);
  BattlePerformanceCommandCard__cancelFirstBonus(v4, v15);
  this = (BattlePerformanceCommandCard_o *)v4->fields.perf;
  if ( !this )
    goto LABEL_21;
  BattlePerformance__backTacticalMode((BattlePerformance_o *)this, 0LL);
  BattlePerformanceCommandCard__playAnimation(v4, (System_String_o *)StringLiteral_16544/*"anim_wait"*/, v16);
  this = (BattlePerformanceCommandCard_o *)v4->fields.commandfsm;
  if ( !this )
    goto LABEL_21;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_3154/*"CLOSE"*/, 0LL);
}


void __fastcall BattlePerformanceCommandCard__callbackCommandTutorial01(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  UnityEngine_Vector2_array *Instance; // x0
  __int64 v12; // x1
  float v13; // s4
  float v14; // s5
  float v15; // s6
  float v16; // s7
  unsigned int max_length; // w8
  UnityEngine_Vector2_array *v18; // x20
  __int64 v19; // x0
  UnityEngine_Rect_o v20; // [xsp+0h] [xbp-20h] BYREF
  UnityEngine_Rect_o v21; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42E9E8B & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Vector2___TypeInfo, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_5573/*"END_PROC"*/, v8, v9, v10);
    byte_42E9E8B = 1;
  }
  *(_QWORD *)&v20.fields.m_XMin = 0LL;
  *(_QWORD *)&v20.fields.m_Width = 0LL;
  Instance = (UnityEngine_Vector2_array *)sub_B5D5DC(UnityEngine_Vector2___TypeInfo, 3LL);
  if ( !Instance )
    goto LABEL_11;
  max_length = Instance->max_length;
  v18 = Instance;
  if ( !max_length
    || (*(_QWORD *)&Instance->m_Items[0].fields.y = 0LL, max_length == 1)
    || (*(_QWORD *)&Instance->m_Items[1].fields.y = 3276275712LL, max_length <= 2) )
  {
    v19 = sub_B5D6C8(Instance);
    sub_B5D668(v19, 0LL);
  }
  v21.fields.m_XMin = -500.0;
  *(_QWORD *)&Instance->m_Items[2].fields.y = 3284664320LL;
  v21.fields.m_YMin = -230.0;
  v21.fields.m_Width = 600.0;
  v21.fields.m_Height = 250.0;
  UnityEngine_Rect___ctor(v21, v13, v14, v15, v16, (const MethodInfo *)&v20);
  Instance = (UnityEngine_Vector2_array *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__OpenTutorialArrowMark_18228476((CommonUI_o *)Instance, v18, 0.0, v20, 0LL, 0LL),
        (Instance = (UnityEngine_Vector2_array *)this->fields.commandfsm) == 0LL) )
  {
LABEL_11:
    sub_B5D69C(Instance, v12);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_5573/*"END_PROC"*/, 0LL);
}


void __fastcall BattlePerformanceCommandCard__callbackTutorial50(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  PlayMakerFSM_o *commandfsm; // x0

  if ( (byte_42E9E8C & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_5573/*"END_PROC"*/, (_DWORD)method, v2, v3);
    byte_42E9E8C = 1;
  }
  commandfsm = this->fields.commandfsm;
  this->fields.isTouchNgInTutorial = 0;
  if ( !commandfsm )
    sub_B5D69C(0LL, method);
  PlayMakerFSM__SendEvent(commandfsm, (System_String_o *)StringLiteral_5573/*"END_PROC"*/, 0LL);
}


void __fastcall BattlePerformanceCommandCard__callbackTutorialSpeedNext(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  WebViewManager_o *Instance; // x19
  const MethodInfo *v9; // x2
  BattlePerformanceCommandCard_o *v10; // x0
  UnityEngine_Rect_array *TutorialSquare01; // x1
  UnityEngine_Vector2_array *v12; // x20
  const MethodInfo *v13; // x2
  UnityEngine_Rect_array *v14; // x0
  __int64 v15; // x1
  UnityEngine_Vector2_o v16; // 0:s1.4,4:s2.4

  if ( (byte_42E9E8E & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_1/*""*/, v5, v6, v7);
    byte_42E9E8E = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v10 = (BattlePerformanceCommandCard_o *)BattlePerformanceCommandCard__FSTutorialArrowCard(
                                            (BattlePerformanceCommandCard_o *)Instance,
                                            this->fields.TutorialArrow01,
                                            v9);
  TutorialSquare01 = this->fields.TutorialSquare01;
  v12 = (UnityEngine_Vector2_array *)v10;
  v14 = BattlePerformanceCommandCard__FSTutorialSquareCard(v10, TutorialSquare01, v13);
  if ( !Instance )
    sub_B5D69C(v14, v15);
  v16.fields.x = 0.0;
  v16.fields.y = 0.0;
  CommonUI__OpenTutorialNotificationDialogArrow_18226744(
    (CommonUI_o *)Instance,
    (System_String_o *)StringLiteral_1/*""*/,
    v12,
    v14,
    0.0,
    v16,
    -1,
    0LL,
    0LL);
}


void __fastcall BattlePerformanceCommandCard__cancelFirstBonus(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *firstBonusObject; // x20
  Spawner_o *spawner; // x0
  __int64 v7; // x1
  struct BattleCommandComponent_array *commandCompArray; // x8
  __int64 v9; // x21
  int max_length; // w9
  Il2CppClass **v11; // x8
  BattleCommandComponent_o *v12; // x20
  __int64 v13; // x0

  if ( (byte_42E9E59 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E9E59 = 1;
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
    sub_B5D69C(spawner, v7);
  v9 = 0LL;
  while ( 1 )
  {
    max_length = commandCompArray->max_length;
    if ( (int)v9 >= max_length )
      break;
    if ( (unsigned int)v9 >= max_length )
    {
      v13 = sub_B5D6C8(spawner);
      sub_B5D668(v13, 0LL);
    }
    v11 = &commandCompArray->obj.klass + v9;
    v12 = (BattleCommandComponent_o *)v11[4];
    if ( v12 )
    {
      BattleCommandComponent__stopFirstAura((BattleCommandComponent_o *)v11[4], 0LL);
      BattleCommandComponent__ResetBoostedCriticalRate(v12, 0LL);
      commandCompArray = this->fields.commandCompArray;
      ++v9;
      if ( commandCompArray )
        continue;
    }
    goto LABEL_15;
  }
}


void __fastcall BattlePerformanceCommandCard__changeDirectCommandCardTouch(
        BattlePerformanceCommandCard_o *this,
        bool enable,
        const MethodInfo *method)
{
  __int64 v3; // x3
  BattlePerformanceCommandCard_o *v5; // x20
  struct BattleCommandComponent_array *commandCompArray; // x8
  __int64 v7; // x22
  unsigned __int64 max_length; // x9
  unsigned __int64 v9; // x24
  UnityEngine_Object_o *v10; // x21
  __int64 v11; // x1
  struct BattleCommandComponent_array *v12; // x8
  UnityEngine_Object_o *v13; // x21
  __int64 v14; // x0

  v5 = this;
  if ( (byte_42E9E90 & 1) == 0 )
  {
    this = (BattlePerformanceCommandCard_o *)sub_B5D5C4(&UnityEngine_Object_TypeInfo, enable, (_DWORD)method, v3);
    byte_42E9E90 = 1;
  }
  commandCompArray = v5->fields.commandCompArray;
  if ( commandCompArray )
  {
    v7 = 4LL;
    while ( 1 )
    {
      max_length = commandCompArray->max_length;
      v9 = v7 - 4;
      if ( v7 - 4 >= (int)max_length )
        break;
      if ( v9 >= max_length )
        goto LABEL_23;
      v10 = (UnityEngine_Object_o *)*((_QWORD *)&commandCompArray->obj.klass + v7);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      this = (BattlePerformanceCommandCard_o *)UnityEngine_Object__op_Inequality(v10, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v12 = v5->fields.commandCompArray;
        if ( !v12 )
          goto LABEL_20;
        if ( v9 >= v12->max_length )
        {
LABEL_23:
          v14 = sub_B5D6C8(this);
          sub_B5D668(v14, 0LL);
        }
        v13 = (UnityEngine_Object_o *)*((_QWORD *)&v12->obj.klass + v7);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        this = (BattlePerformanceCommandCard_o *)UnityEngine_Object__op_Inequality(v13, 0LL, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !v13 )
            goto LABEL_20;
          BattleCommandComponent__setTouchFlg((BattleCommandComponent_o *)v13, enable, 0LL);
        }
      }
      commandCompArray = v5->fields.commandCompArray;
      ++v7;
      if ( !commandCompArray )
LABEL_20:
        sub_B5D69C(this, v11);
    }
    v5->fields.directCommandCardTouchEnable = enable;
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
    UnityEngine_MonoBehaviour__StopCoroutine_35615756((UnityEngine_MonoBehaviour_o *)this, openNpCoroutine, 0LL);
  commandCompArray = this->fields.commandCompArray;
  if ( !commandCompArray )
LABEL_13:
    sub_B5D69C(this, openNpCoroutine);
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
          v15 = sub_B5D6C8(this);
          sub_B5D668(v15, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  PlayMakerFSM_o *commandfsm; // x0

  if ( (byte_42E9E80 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_9396/*"NG"*/, (_DWORD)method, v2, v3);
    byte_42E9E80 = 1;
  }
  commandfsm = this->fields.commandfsm;
  if ( !commandfsm )
    sub_B5D69C(0LL, method);
  PlayMakerFSM__SendEvent(commandfsm, (System_String_o *)StringLiteral_9396/*"NG"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceCommandCard__checkChainBonus(
        BattlePerformanceCommandCard_o *this,
        int32_t targetIndex,
        const MethodInfo *method)
{
  __int64 v3; // x3
  UnityEngine_Component_o *v4; // x19
  char v5; // w22
  int v6; // w24
  __int64 v7; // x23
  UnityEngine_Component_c *klass; // x8
  unsigned __int64 v9; // x25
  UnityEngine_Object_o *v10; // x20
  UnityEngine_Component_c *v11; // x8
  UnityEngine_Object_o *monitor; // x21
  UnityEngine_GameObject_o *v13; // x21
  UnityEngine_Transform_o *transform; // x0
  System_Int32_array **Object; // x1
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  BattleServantConfConponent_o *p_monitor; // x0
  __int64 v23; // x0

  v4 = (UnityEngine_Component_o *)this;
  if ( (byte_42E9E5A & 1) == 0 )
  {
    this = (BattlePerformanceCommandCard_o *)sub_B5D5C4(&UnityEngine_Object_TypeInfo, targetIndex, (_DWORD)method, v3);
    byte_42E9E5A = 1;
  }
  v5 = 0;
  v6 = 0;
  v7 = 4LL;
  do
  {
    klass = v4[18].klass;
    if ( !klass )
      goto LABEL_31;
    v9 = v7 - 4;
    if ( v7 - 4 >= (unsigned __int64)LODWORD(klass->_1.namespaze) )
      goto LABEL_32;
    v10 = (UnityEngine_Object_o *)*((_QWORD *)&klass->_1.image + v7);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    this = (BattlePerformanceCommandCard_o *)UnityEngine_Object__op_Inequality(v10, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
      goto LABEL_16;
    v11 = v4[18].klass;
    if ( !v11 )
      goto LABEL_31;
    if ( v9 >= LODWORD(v11->_1.namespaze) )
    {
LABEL_32:
      v23 = sub_B5D6C8(this);
      sub_B5D668(v23, 0LL);
    }
    this = (BattlePerformanceCommandCard_o *)*((_QWORD *)&v11->_1.image + v7);
    if ( !this )
      goto LABEL_31;
    this = (BattlePerformanceCommandCard_o *)BattleCommandComponent__isTreasureDvc(
                                               (BattleCommandComponent_o *)this,
                                               0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( ++v6 > 1 )
        v5 = 1;
    }
    else
    {
LABEL_16:
      v6 = 0;
    }
    ++v7;
  }
  while ( v9 < 2 );
  monitor = (UnityEngine_Object_o *)v4[24].monitor;
  if ( (v5 & 1) == 0 )
  {
    if ( (WORD1(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35620236(monitor, 0LL);
    p_monitor = (BattleServantConfConponent_o *)&v4[24].monitor;
    Object = 0LL;
    v4[24].monitor = 0LL;
LABEL_29:
    sub_B5D560(p_monitor, Object, v16, v17, v18, v19, v20, v21);
    return;
  }
  if ( (WORD1(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(monitor, 0LL, 0LL) )
  {
    v13 = (UnityEngine_GameObject_o *)v4[7].monitor;
    this = (BattlePerformanceCommandCard_o *)UnityEngine_Component__get_gameObject(v4, 0LL);
    if ( !this )
LABEL_31:
      sub_B5D69C(this, *(_QWORD *)&targetIndex);
    transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
    Object = (System_Int32_array **)BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)v4, v13, transform, 0LL, 0LL);
    v4[24].monitor = Object;
    p_monitor = (BattleServantConfConponent_o *)&v4[24].monitor;
    goto LABEL_29;
  }
}


void __fastcall BattlePerformanceCommandCard__checkDrawCount(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  PlayMakerFSM_o *commandfsm; // x0

  if ( (byte_42E9E5C & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_11757/*"SELECT_EXE"*/, (_DWORD)method, v2, v3);
    byte_42E9E5C = 1;
  }
  if ( this->fields.maxdrawcount <= this->fields.drawcount )
  {
    commandfsm = this->fields.commandfsm;
    if ( !commandfsm )
      sub_B5D69C(0LL, method);
    PlayMakerFSM__SendEvent(commandfsm, (System_String_o *)StringLiteral_11757/*"SELECT_EXE"*/, 0LL);
  }
}


void __fastcall BattlePerformanceCommandCard__checkMaskEnemy(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  BattlePerformanceCommandCard_o *v4; // x19
  unsigned __int64 v5; // x22
  struct BattleCommandComponent_array *selectedcomponents; // x8
  UnityEngine_Object_o *v7; // x20
  UnityEngine_Object_o *maskSprite; // x20
  int32_t v10; // w1
  UnityEngine_Object_o *v11; // x20
  __int64 v12; // x0

  v4 = this;
  if ( (byte_42E9E5B & 1) == 0 )
  {
    this = (BattlePerformanceCommandCard_o *)sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E9E5B = 1;
  }
  v5 = 0LL;
  while ( 1 )
  {
    selectedcomponents = v4->fields.selectedcomponents;
    if ( !selectedcomponents )
      goto LABEL_27;
    if ( v5 >= selectedcomponents->max_length )
    {
      v12 = sub_B5D6C8(this);
      sub_B5D668(v12, 0LL);
    }
    v7 = (UnityEngine_Object_o *)selectedcomponents->m_Items[v5];
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    this = (BattlePerformanceCommandCard_o *)UnityEngine_Object__op_Inequality(v7, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
      break;
    if ( v5++ >= 2 )
    {
      maskSprite = (UnityEngine_Object_o *)v4->fields.maskSprite;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(maskSprite, 0LL, 0LL) )
      {
        this = (BattlePerformanceCommandCard_o *)v4->fields.maskSprite;
        if ( this )
        {
          v10 = -31;
          goto LABEL_24;
        }
LABEL_27:
        sub_B5D69C(this, method);
      }
      return;
    }
  }
  v11 = (UnityEngine_Object_o *)v4->fields.maskSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v11, 0LL, 0LL) )
  {
    this = (BattlePerformanceCommandCard_o *)v4->fields.maskSprite;
    if ( !this )
      goto LABEL_27;
    v10 = 0;
LABEL_24:
    UIWidget__set_depth((UIWidget_o *)this, v10, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  BattleData_o *Bdata; // x0
  struct BattleData_o *v12; // x8
  CommonUI_o *Instance; // x20
  System_Action_o *v14; // x21

  if ( (byte_42E9E8D & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_BattlePerformanceCommandCard_callbackTutorialSpeedNext__, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9, v10);
    byte_42E9E8D = 1;
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
      v12 = this->fields.Bdata;
      if ( !v12 )
        goto LABEL_19;
      if ( v12->fields.tutorialState != 10 )
        return 1;
      v12->fields.tutorialState = 20;
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v14 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(
        v14,
        (Il2CppObject *)this,
        Method_BattlePerformanceCommandCard_callbackTutorialSpeedNext__,
        0LL);
      if ( !Instance )
        goto LABEL_19;
      CommonUI__CloseTutorialNotificationDialogArrow_18227360(Instance, v14, 0LL);
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
    sub_B5D69C(Bdata, method);
  return BattleLogic__getTurn((BattleLogic_o *)Bdata, 0LL) > 2;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceCommandCard__checkTutorial(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  BattleLogic_o *logic; // x0
  int v42; // w20
  int v43; // w21
  int32_t Turn; // w0
  const MethodInfo *v45; // x2
  CommonUI_o *Instance; // x20
  System_String_o *v47; // x21
  const MethodInfo *v48; // x2
  BattlePerformanceCommandCard_o *v49; // x22
  const MethodInfo *v50; // x2
  struct BattleLogic_TutorialStringData_array *TSD; // x8
  BattleLogic_TutorialStringData_o *v52; // x8
  const MethodInfo *v53; // x2
  struct BattlePerformance_o *perf; // x8
  CommonUI_o *v55; // x20
  System_String_o *v56; // x21
  const MethodInfo *v57; // x1
  UnityEngine_Vector2_o FSTutorialArrow22; // kr00_8
  const MethodInfo *v59; // x1
  float v60; // s0
  float v61; // s1
  float v62; // s2
  float v63; // s3
  struct BattleLogic_TutorialStringData_array *v64; // x8
  BattleLogic_TutorialStringData_o *v65; // x8
  float v66; // s16
  float v67; // s7
  const MethodInfo *v68; // x2
  const MethodInfo *v69; // x2
  struct BattleLogic_TutorialStringData_array *v70; // x8
  const MethodInfo *v71; // x2
  struct BattlePerformance_o *v72; // x8
  const MethodInfo *v73; // x2
  const MethodInfo *v74; // x1
  struct BattleLogic_TutorialStringData_array *v75; // x8
  const MethodInfo *v76; // x2
  const MethodInfo *v77; // x2
  struct BattleLogic_TutorialStringData_array *v78; // x8
  const MethodInfo *v79; // x2
  const MethodInfo *v80; // x2
  struct BattleLogic_TutorialStringData_array *v81; // x8
  const MethodInfo *v82; // x2
  const MethodInfo *v83; // x2
  struct BattleLogic_TutorialStringData_array *v84; // x8
  CommonUI_o *v85; // x20
  System_String_o *v86; // x21
  System_Action_o *v87; // x22
  __int64 v88; // x0
  UnityEngine_Rect_o v89; // 0:s2.4,4:s3.4,8:s4.4,12:s5.4

  if ( (byte_42E9E8A & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_BattlePerformanceCommandCard_callbackTutorial50__, v5, v6, v7);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_13647/*"TUTORIAL_MESSAGE_BATTLE_131"*/, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_13643/*"TUTORIAL_MESSAGE_BATTLE_111"*/, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_13651/*"TUTORIAL_MESSAGE_BATTLE_153"*/, v20, v21, v22);
    sub_B5D5C4(&StringLiteral_13649/*"TUTORIAL_MESSAGE_BATTLE_141"*/, v23, v24, v25);
    sub_B5D5C4(&StringLiteral_5573/*"END_PROC"*/, v26, v27, v28);
    sub_B5D5C4(&StringLiteral_13656/*"TUTORIAL_MESSAGE_BATTLE_230"*/, v29, v30, v31);
    sub_B5D5C4(&StringLiteral_13645/*"TUTORIAL_MESSAGE_BATTLE_122"*/, v32, v33, v34);
    sub_B5D5C4(&StringLiteral_13658/*"TUTORIAL_MESSAGE_BATTLE_321"*/, v35, v36, v37);
    sub_B5D5C4(&StringLiteral_13655/*"TUTORIAL_MESSAGE_BATTLE_223"*/, v38, v39, v40);
    byte_42E9E8A = 1;
  }
  logic = this->fields.logic;
  if ( !logic )
    goto LABEL_80;
  logic = (BattleLogic_o *)BattleLogic__getTutorialId(logic, 0LL);
  if ( !this->fields.logic )
    goto LABEL_80;
  v42 = (int)logic;
  logic = (BattleLogic_o *)BattleLogic__getWave(this->fields.logic, 0LL);
  if ( !this->fields.logic )
    goto LABEL_80;
  v43 = (int)logic;
  Turn = BattleLogic__getTurn(this->fields.logic, 0LL);
  if ( v42 != 3 )
  {
    if ( v42 != 2 )
    {
      if ( v42 == 1 )
      {
        switch ( Turn )
        {
          case 1:
            Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v47 = LocalizationManager__Get((System_String_o *)StringLiteral_13643/*"TUTORIAL_MESSAGE_BATTLE_111"*/, 0LL);
            v49 = (BattlePerformanceCommandCard_o *)BattlePerformanceCommandCard__FSTutorialArrowCard(
                                                      (BattlePerformanceCommandCard_o *)v47,
                                                      this->fields.TutorialArrow01,
                                                      v48);
            logic = (BattleLogic_o *)BattlePerformanceCommandCard__FSTutorialSquareCard(
                                       v49,
                                       this->fields.TutorialSquare01,
                                       v50);
            TSD = this->fields.TSD;
            if ( !TSD )
              goto LABEL_80;
            if ( !TSD->max_length )
              goto LABEL_81;
            v52 = TSD->m_Items[0];
            if ( !v52 )
              goto LABEL_80;
            goto LABEL_36;
          case 2:
            Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v47 = LocalizationManager__Get((System_String_o *)StringLiteral_13645/*"TUTORIAL_MESSAGE_BATTLE_122"*/, 0LL);
            v49 = (BattlePerformanceCommandCard_o *)BattlePerformanceCommandCard__FSTutorialArrowCard(
                                                      (BattlePerformanceCommandCard_o *)v47,
                                                      this->fields.TutorialArrow01,
                                                      v82);
            logic = (BattleLogic_o *)BattlePerformanceCommandCard__FSTutorialSquareCard(
                                       v49,
                                       this->fields.TutorialSquare01,
                                       v83);
            v84 = this->fields.TSD;
            if ( !v84 )
              goto LABEL_80;
            if ( v84->max_length <= 1 )
              goto LABEL_81;
            v52 = v84->m_Items[1];
            if ( !v52 )
              goto LABEL_80;
            goto LABEL_36;
          case 3:
            Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v47 = LocalizationManager__Get((System_String_o *)StringLiteral_13647/*"TUTORIAL_MESSAGE_BATTLE_131"*/, 0LL);
            v49 = (BattlePerformanceCommandCard_o *)BattlePerformanceCommandCard__FSTutorialArrowCard(
                                                      (BattlePerformanceCommandCard_o *)v47,
                                                      this->fields.TutorialArrow01,
                                                      v79);
            logic = (BattleLogic_o *)BattlePerformanceCommandCard__FSTutorialSquareCard(
                                       v49,
                                       this->fields.TutorialSquare01,
                                       v80);
            v81 = this->fields.TSD;
            if ( !v81 )
              goto LABEL_80;
            if ( v81->max_length <= 2 )
              goto LABEL_81;
            v52 = v81->m_Items[2];
            if ( !v52 )
              goto LABEL_80;
            goto LABEL_36;
          case 4:
            v85 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v86 = LocalizationManager__Get((System_String_o *)StringLiteral_13649/*"TUTORIAL_MESSAGE_BATTLE_141"*/, 0LL);
            v87 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
            System_Action___ctor(
              v87,
              (Il2CppObject *)this,
              Method_BattlePerformanceCommandCard_callbackTutorial50__,
              0LL);
            if ( !v85 )
              goto LABEL_80;
            CommonUI__OpenTutorialNotificationDialog(v85, v86, -1, v87, 0LL);
            goto LABEL_52;
          case 5:
            Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v47 = LocalizationManager__Get((System_String_o *)StringLiteral_13651/*"TUTORIAL_MESSAGE_BATTLE_153"*/, 0LL);
            v49 = (BattlePerformanceCommandCard_o *)BattlePerformanceCommandCard__FSTutorialArrowCard(
                                                      (BattlePerformanceCommandCard_o *)v47,
                                                      this->fields.TutorialArrow05,
                                                      v76);
            logic = (BattleLogic_o *)BattlePerformanceCommandCard__FSTutorialSquareCard(
                                       v49,
                                       this->fields.TutorialSquare05,
                                       v77);
            v78 = this->fields.TSD;
            if ( !v78 )
              goto LABEL_80;
            if ( v78->max_length <= 3 )
              goto LABEL_81;
            v52 = v78->m_Items[3];
            if ( !v52 )
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
      BattlePerformanceCommandCard__SetCommandPhaseButtonActive(this, 1, v45);
      perf = this->fields.perf;
      if ( !perf || !perf->fields.data )
        goto LABEL_80;
      BattlePerformanceCommandCard__updateHighSpeedObject(this, (int32_t)method, v53);
      v55 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v56 = LocalizationManager__Get((System_String_o *)StringLiteral_13655/*"TUTORIAL_MESSAGE_BATTLE_223"*/, 0LL);
      FSTutorialArrow22 = BattlePerformanceCommandCard__get_FSTutorialArrow22(this, v57);
      *(UnityEngine_Rect_o *)&v60 = BattlePerformanceCommandCard__get_FSTutorialSquare22(this, v59);
      v64 = this->fields.TSD;
      if ( !v64 )
        goto LABEL_80;
      if ( v64->max_length > 4 )
      {
        v65 = v64->m_Items[4];
        if ( v65 && v55 )
        {
          v66 = v62;
          v67 = v63;
          v89.fields.m_XMin = v60;
          v89.fields.m_YMin = v61;
          v89.fields.m_Width = v66;
          v89.fields.m_Height = v67;
          CommonUI__OpenTutorialNotificationDialogArrow(
            v55,
            v56,
            FSTutorialArrow22,
            v89,
            v65->fields.way,
            v65->fields.pos,
            v65->fields.size,
            0LL,
            0LL);
          goto LABEL_52;
        }
LABEL_80:
        sub_B5D69C(logic, method);
      }
LABEL_81:
      v88 = sub_B5D6C8(logic);
      sub_B5D668(v88, 0LL);
    }
    if ( Turn >= 3 )
    {
      BattlePerformanceCommandCard__SetCommandPhaseButtonActive(this, 1, v45);
      v72 = this->fields.perf;
      if ( !v72 || !v72->fields.data )
        goto LABEL_80;
      BattlePerformanceCommandCard__updateHighSpeedObject(this, (int32_t)method, v71);
    }
LABEL_51:
    BattlePerformanceCommandCard__callbackCommandTutorial01(this, method);
    goto LABEL_52;
  }
  if ( v43 || Turn != 1 )
  {
    if ( v43 != 1 || Turn != 1 )
      goto LABEL_51;
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v47 = LocalizationManager__Get((System_String_o *)StringLiteral_13658/*"TUTORIAL_MESSAGE_BATTLE_321"*/, 0LL);
    v49 = (BattlePerformanceCommandCard_o *)BattlePerformanceCommandCard__FSTutorialArrowCard(
                                              (BattlePerformanceCommandCard_o *)v47,
                                              this->fields.TutorialArrow31,
                                              v73);
    logic = (BattleLogic_o *)BattlePerformanceCommandCard__get_FSTutorialSquare32(this, v74);
    v75 = this->fields.TSD;
    if ( !v75 )
      goto LABEL_80;
    if ( v75->max_length <= 6 )
      goto LABEL_81;
    v52 = v75->m_Items[6];
    if ( !v52 )
      goto LABEL_80;
  }
  else
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v47 = LocalizationManager__Get((System_String_o *)StringLiteral_13656/*"TUTORIAL_MESSAGE_BATTLE_230"*/, 0LL);
    v49 = (BattlePerformanceCommandCard_o *)BattlePerformanceCommandCard__FSTutorialArrowCard(
                                              (BattlePerformanceCommandCard_o *)v47,
                                              this->fields.TutorialArrow31,
                                              v68);
    logic = (BattleLogic_o *)BattlePerformanceCommandCard__FSTutorialSquareCard(v49, this->fields.TutorialSquare01, v69);
    v70 = this->fields.TSD;
    if ( !v70 )
      goto LABEL_80;
    if ( v70->max_length <= 5 )
      goto LABEL_81;
    v52 = v70->m_Items[5];
    if ( !v52 )
      goto LABEL_80;
  }
LABEL_36:
  if ( !Instance )
    goto LABEL_80;
  CommonUI__OpenTutorialNotificationDialogArrow_18226744(
    Instance,
    v47,
    (UnityEngine_Vector2_array *)v49,
    (UnityEngine_Rect_array *)logic,
    v52->fields.way,
    v52->fields.pos,
    v52->fields.size,
    0LL,
    0LL);
LABEL_52:
  logic = (BattleLogic_o *)this->fields.commandfsm;
  if ( !logic )
    goto LABEL_80;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)logic, (System_String_o *)StringLiteral_5573/*"END_PROC"*/, 0LL);
}


void __fastcall BattlePerformanceCommandCard__clickBackButton(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  BattlePerformanceCommandCard_o *v4; // x19
  struct BattlePerformance_o *perf; // x8

  v4 = this;
  if ( (byte_42E9E82 & 1) == 0 )
  {
    this = (BattlePerformanceCommandCard_o *)sub_B5D5C4(&StringLiteral_3179/*"CLOSE_WINDOW"*/, (_DWORD)method, v2, v3);
    byte_42E9E82 = 1;
  }
  perf = v4->fields.perf;
  if ( !perf )
    goto LABEL_8;
  this = (BattlePerformanceCommandCard_o *)perf->fields.data;
  if ( !this )
    goto LABEL_8;
  if ( BattleData__isTutorialCard((BattleData_o *)this, 0LL) )
    return;
  this = (BattlePerformanceCommandCard_o *)v4->fields.commandfsm;
  if ( !this )
LABEL_8:
    sub_B5D69C(this, method);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_3179/*"CLOSE_WINDOW"*/, 0LL);
}


void __fastcall BattlePerformanceCommandCard__closeWindow(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  ;
}


System_Collections_IEnumerator_o *__fastcall BattlePerformanceCommandCard__coStartFirstBonus(
        BattlePerformanceCommandCard_o *this,
        int32_t type,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_42E9E54 & 1) == 0 )
  {
    sub_B5D5C4(&BattlePerformanceCommandCard__coStartFirstBonus_d__119_TypeInfo, type, (_DWORD)method, v3);
    byte_42E9E54 = 1;
  }
  v6 = sub_B5D694(BattlePerformanceCommandCard__coStartFirstBonus_d__119_TypeInfo);
  BattlePerformanceCommandCard__coStartFirstBonus_d__119___ctor(
    (BattlePerformanceCommandCard__coStartFirstBonus_d__119_o *)v6,
    0,
    0LL);
  if ( !v6 )
    sub_B5D69C(v7, v8);
  *(_QWORD *)(v6 + 32) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v6 + 32), (System_Int32_array **)this, v9, v10, v11, v12, v13, v14);
  *(_DWORD *)(v6 + 40) = type;
  return (System_Collections_IEnumerator_o *)v6;
}


System_Collections_IEnumerator_o *__fastcall BattlePerformanceCommandCard__colOpenNpCard(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_42E9E75 & 1) == 0 )
  {
    sub_B5D5C4(&BattlePerformanceCommandCard__colOpenNpCard_d__182_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E9E75 = 1;
  }
  v5 = sub_B5D694(BattlePerformanceCommandCard__colOpenNpCard_d__182_TypeInfo);
  BattlePerformanceCommandCard__colOpenNpCard_d__182___ctor(
    (BattlePerformanceCommandCard__colOpenNpCard_d__182_o *)v5,
    0,
    0LL);
  if ( !v5 )
    sub_B5D69C(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v5 + 32), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  return (System_Collections_IEnumerator_o *)v5;
}


void __fastcall BattlePerformanceCommandCard__comboExecute(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  BattleLogic_o *logic; // x0
  struct BattlePerformance_o *perf; // x8
  struct BattlePerformance_o *v31; // x8
  struct BattleData_o *data; // x8
  const MethodInfo *v33; // x2
  UnityEngine_Object_o *firstBonusObject; // x20
  __int64 v35; // x21
  struct System_Int32_array **p_selectcommand; // x26
  struct BattleCommandData_array **p_commandlist; // x25
  struct System_Int32_array *v38; // x8
  struct BattleCommandData_array *v39; // x9
  __int64 v40; // x8
  Il2CppClass **v41; // x8
  BattleCommandData_o *v42; // x20
  struct BattlePerformance_o *v43; // x8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v44; // x20
  struct System_Int32_array *v45; // x9
  struct BattleCommandData_array *v46; // x8
  __int64 v47; // x9
  struct System_Int32_array *v48; // x8
  struct BattleCommandData_array *v49; // x9
  __int64 v50; // x8
  struct System_Int32_array *v51; // x8
  struct BattleCommandData_array *v52; // x9
  __int64 v53; // x8
  BattleData_o *Bdata; // x21
  __int64 v55; // x3
  struct BattlePerformance_o *v56; // x8
  struct BattleData_o *v57; // x9
  struct BattleActionLogManagerInterface_o *actionLogManager; // x21
  BattleActionLogManagerInterface_c *klass; // x8
  unsigned int globaltargetId; // w22
  unsigned __int64 v61; // x10
  BattleActionLogManagerInterface_c **p_offset; // x11
  __int64 p_method; // x0
  __int64 v64; // x3
  struct BattlePerformance_o *v65; // x8
  struct BattleData_o *v66; // x8
  struct System_Int32_array *v67; // x9
  struct BattleActionLogManagerInterface_o *v68; // x21
  BattleActionLogManagerInterface_c *v69; // x8
  unsigned int v70; // w23
  unsigned int v71; // w24
  unsigned int v72; // w22
  unsigned __int64 v73; // x10
  BattleActionLogManagerInterface_c **v74; // x11
  __int64 v75; // x0
  struct BattleData_o *v76; // x8
  struct System_Int32_array *v77; // x8
  struct BattleCommandData_array *v78; // x9
  __int64 v79; // x8
  BattleCommandData_o *v80; // x22
  BattleCommandData_o *v81; // x21
  BattleData_o *v82; // x21
  __int64 v83; // x20
  struct BattleCommandComponent_array *selectedcomponents; // x8
  System_String_array **v85; // x2
  System_String_array **v86; // x3
  System_Boolean_array **v87; // x4
  System_Int32_array **v88; // x5
  System_Int32_array *v89; // x6
  System_Int32_array *v90; // x7
  struct BattlePerformance_o *v91; // x8
  struct BattleData_o *v92; // x8
  struct BattlePerformance_o *v93; // x8
  struct BattlePerformance_o *v94; // x8
  __int64 v95; // x0

  if ( (byte_42E9E5D & 1) == 0 )
  {
    sub_B5D5C4(&BattleActionLogManagerInterface_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&BattleCommandData_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleCommandData__Add__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleCommandData__ToArray__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleCommandData___ctor__, v14, v15, v16);
    sub_B5D5C4(&System_Collections_Generic_List_BattleCommandData__TypeInfo, v17, v18, v19);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&SeManager_TypeInfo, v23, v24, v25);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v26, v27, v28);
    byte_42E9E5D = 1;
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
  v31 = this->fields.perf;
  if ( !v31 )
    goto LABEL_95;
  data = v31->fields.data;
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
  BattlePerformanceCommandCard__SetBackTacticalButton(this, 0, v33);
  logic = (BattleLogic_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
    v35 = 0LL;
    p_selectcommand = &this->fields.selectcommand;
    p_commandlist = &this->fields.commandlist;
    while ( 1 )
    {
      v38 = *p_selectcommand;
      if ( !*p_selectcommand )
        break;
      if ( (unsigned int)v35 >= v38->max_length )
        goto LABEL_96;
      v39 = *p_commandlist;
      if ( !*p_commandlist )
        break;
      v40 = v38->m_Items[v35 + 1];
      if ( (unsigned int)v40 >= v39->max_length )
        goto LABEL_96;
      v41 = &v39->obj.klass + v40;
      v42 = (BattleCommandData_o *)v41[4];
      if ( !v42 )
        break;
      logic = (BattleLogic_o *)BattleCommandData__isTreasureDvc((BattleCommandData_o *)v41[4], 0LL);
      if ( ((unsigned __int8)logic & 1) != 0 )
      {
        v43 = this->fields.perf;
        if ( !v43 )
          break;
        logic = (BattleLogic_o *)v43->fields.data;
        if ( !logic )
          break;
        logic = (BattleLogic_o *)BattleData__getServantData((BattleData_o *)logic, v42->fields.uniqueId, 0LL);
        if ( logic )
          BattleServantData__SetSelectedTreasureDevice((BattleServantData_o *)logic, 0LL);
      }
      else
      {
        BattleCommandData__SetSelectedType(v42, 0LL);
      }
      if ( (int)++v35 >= this->fields.maxdrawcount )
        goto LABEL_35;
    }
LABEL_95:
    sub_B5D69C(logic, method);
  }
  p_commandlist = &this->fields.commandlist;
  p_selectcommand = &this->fields.selectcommand;
LABEL_35:
  v44 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_BattleCommandData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v44,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_BattleCommandData___ctor__);
  v45 = *p_selectcommand;
  if ( !*p_selectcommand )
    goto LABEL_95;
  if ( !v45->max_length )
    goto LABEL_96;
  v46 = *p_commandlist;
  if ( !*p_commandlist )
    goto LABEL_95;
  v47 = v45->m_Items[1];
  if ( (unsigned int)v47 >= v46->max_length )
    goto LABEL_96;
  if ( !v44 )
    goto LABEL_95;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v44,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v46->m_Items[v47],
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_BattleCommandData__Add__);
  v48 = *p_selectcommand;
  if ( !*p_selectcommand )
    goto LABEL_95;
  if ( v48->max_length <= 1 )
    goto LABEL_96;
  v49 = *p_commandlist;
  if ( !*p_commandlist )
    goto LABEL_95;
  v50 = v48->m_Items[2];
  if ( (unsigned int)v50 >= v49->max_length )
    goto LABEL_96;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v44,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v49->m_Items[v50],
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_BattleCommandData__Add__);
  v51 = *p_selectcommand;
  if ( !*p_selectcommand )
    goto LABEL_95;
  if ( v51->max_length <= 2 )
    goto LABEL_96;
  v52 = *p_commandlist;
  if ( !*p_commandlist )
    goto LABEL_95;
  v53 = v51->m_Items[3];
  if ( (unsigned int)v53 >= v52->max_length )
    goto LABEL_96;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v44,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v52->m_Items[v53],
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_BattleCommandData__Add__);
  Bdata = this->fields.Bdata;
  logic = (BattleLogic_o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                             (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v44,
                             (const MethodInfo_305910C *)Method_System_Collections_Generic_List_BattleCommandData__ToArray__);
  if ( !Bdata )
    goto LABEL_95;
  BattleData__setCommandData(Bdata, (BattleCommandData_array *)logic, 0LL);
  v56 = this->fields.perf;
  if ( !v56 )
    goto LABEL_95;
  v57 = v56->fields.data;
  if ( !v57 )
    goto LABEL_95;
  actionLogManager = v57->fields.actionLogManager;
  if ( !actionLogManager )
    goto LABEL_95;
  klass = actionLogManager->klass;
  globaltargetId = v57->fields.globaltargetId;
  if ( *(_WORD *)&actionLogManager->klass->_2.bitflags1 )
  {
    v61 = 0LL;
    p_offset = (BattleActionLogManagerInterface_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != BattleActionLogManagerInterface_TypeInfo )
    {
      ++v61;
      p_offset += 2;
      if ( v61 >= *(unsigned __int16 *)&actionLogManager->klass->_2.bitflags1 )
        goto LABEL_56;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 7].method;
  }
  else
  {
LABEL_56:
    p_method = sub_AF54C0(actionLogManager, BattleActionLogManagerInterface_TypeInfo, 7LL, v55);
  }
  logic = (BattleLogic_o *)(*(__int64 (__fastcall **)(struct BattleActionLogManagerInterface_o *, _QWORD, _QWORD))p_method)(
                             actionLogManager,
                             globaltargetId,
                             *(_QWORD *)(p_method + 8));
  v65 = this->fields.perf;
  if ( !v65 )
    goto LABEL_95;
  v66 = v65->fields.data;
  if ( !v66 )
    goto LABEL_95;
  v67 = *p_selectcommand;
  if ( !*p_selectcommand )
    goto LABEL_95;
  if ( v67->max_length < 3 )
    goto LABEL_96;
  v68 = v66->fields.actionLogManager;
  if ( !v68 )
    goto LABEL_95;
  v69 = v68->klass;
  v71 = v67->m_Items[1];
  v70 = v67->m_Items[2];
  v72 = v67->m_Items[3];
  if ( *(_WORD *)&v68->klass->_2.bitflags1 )
  {
    v73 = 0LL;
    v74 = (BattleActionLogManagerInterface_c **)&v69->_1.interfaceOffsets->offset;
    while ( *(v74 - 1) != BattleActionLogManagerInterface_TypeInfo )
    {
      ++v73;
      v74 += 2;
      if ( v73 >= *(unsigned __int16 *)&v68->klass->_2.bitflags1 )
        goto LABEL_67;
    }
    v75 = (__int64)&v69->vtable[*(_DWORD *)v74 + 8].method;
  }
  else
  {
LABEL_67:
    v75 = sub_AF54C0(v68, BattleActionLogManagerInterface_TypeInfo, 8LL, v64);
  }
  (*(void (__fastcall **)(struct BattleActionLogManagerInterface_o *, _QWORD, _QWORD, _QWORD, _QWORD))v75)(
    v68,
    v71,
    v70,
    v72,
    *(_QWORD *)(v75 + 8));
  logic = this->fields.logic;
  if ( !logic )
    goto LABEL_95;
  BattleLogic__endSelectCommand(logic, 0LL);
  v76 = this->fields.Bdata;
  if ( !v76 )
    goto LABEL_95;
  logic = (BattleLogic_o *)v76->fields.combodata;
  if ( !logic )
    goto LABEL_95;
  logic = (BattleLogic_o *)BattleComboData__isExtraAttack((BattleComboData_o *)logic, 0LL);
  if ( ((unsigned __int8)logic & 1) == 0 )
    goto LABEL_80;
  v77 = *p_selectcommand;
  if ( !*p_selectcommand )
    goto LABEL_95;
  if ( v77->max_length <= 2 )
    goto LABEL_96;
  v78 = *p_commandlist;
  if ( !*p_commandlist )
    goto LABEL_95;
  v79 = v77->m_Items[3];
  if ( (unsigned int)v79 >= v78->max_length )
  {
LABEL_96:
    v95 = sub_B5D6C8(logic);
    sub_B5D668(v95, 0LL);
  }
  v80 = v78->m_Items[v79];
  v81 = (BattleCommandData_o *)sub_B5D694(BattleCommandData_TypeInfo);
  BattleCommandData___ctor_18916004(v81, v80, 0LL);
  if ( !v81 )
    goto LABEL_95;
  BattleCommandData__setTypeAddAttack(v81, 0LL);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v44,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v81,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_BattleCommandData__Add__);
  v82 = this->fields.Bdata;
  logic = (BattleLogic_o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                             (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v44,
                             (const MethodInfo_305910C *)Method_System_Collections_Generic_List_BattleCommandData__ToArray__);
  if ( !v82 )
    goto LABEL_95;
  BattleData__setCommandData(v82, (BattleCommandData_array *)logic, 0LL);
LABEL_80:
  v83 = 0LL;
  do
  {
    selectedcomponents = this->fields.selectedcomponents;
    if ( !selectedcomponents )
      goto LABEL_95;
    if ( (unsigned int)v83 >= selectedcomponents->max_length )
      goto LABEL_96;
    logic = (BattleLogic_o *)selectedcomponents->m_Items[v83];
    if ( !logic )
      goto LABEL_95;
    BattleCommandComponent__startComboCard((BattleCommandComponent_o *)logic, 0LL);
    ++v83;
  }
  while ( (unsigned int)(v83 - 1) < 2 );
  v91 = this->fields.perf;
  if ( !v91 )
    goto LABEL_95;
  v92 = v91->fields.data;
  if ( !v92 )
    goto LABEL_95;
  v92->fields.commandCriticalArray = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&v92->fields.commandCriticalArray, 0LL, v85, v86, v87, v88, v89, v90);
  v93 = this->fields.perf;
  if ( !v93 )
    goto LABEL_95;
  logic = (BattleLogic_o *)v93->fields.data;
  if ( !logic )
    goto LABEL_95;
  BattleData__ResetAllCriticalInfo((BattleData_o *)logic, 0LL);
  v94 = this->fields.perf;
  if ( !v94 )
    goto LABEL_95;
  logic = (BattleLogic_o *)v94->fields.statusPerf;
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
  int v2; // w2
  __int64 v3; // x3
  BattlePerformanceCommandCard_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  struct UnityEngine_GameObject_array *p_commandlist; // x8
  struct UnityEngine_GameObject_array **p_p_commandlist; // x20
  unsigned __int64 v31; // x22
  unsigned __int64 max_length; // x9
  UnityEngine_Object_o *v33; // x21
  __int64 v34; // x1
  System_Int32_array **v35; // x0
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  System_Int32_array **v42; // x0
  struct BattleCommandComponent_array **p_commandCompArray; // x21
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  System_Int32_array **v50; // x0
  struct UnityEngine_Transform_array **p_commandTransformArray; // x22
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  struct UnityEngine_GameObject_array *v58; // x25
  unsigned int v59; // w28
  int32_t v60; // w23
  __int64 v61; // x26
  System_String_array **v62; // x2
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  System_Int32_array **v68; // x24
  struct UnityEngine_GameObject_array *v69; // x8
  System_String_array **v70; // x2
  System_String_array **v71; // x3
  System_Boolean_array **v72; // x4
  System_Int32_array **v73; // x5
  System_Int32_array *v74; // x6
  System_Int32_array *v75; // x7
  struct BattleCommandComponent_array *v76; // x25
  BattlePerformanceCommandCard_o *v77; // x24
  struct UnityEngine_GameObject_array *v78; // x8
  struct UnityEngine_Transform_array *v79; // x27
  System_String_array **v80; // x2
  System_String_array **v81; // x3
  System_Boolean_array **v82; // x4
  System_Int32_array **v83; // x5
  System_Int32_array *v84; // x6
  System_Int32_array *v85; // x7
  System_Int32_array **v86; // x25
  System_Int32_array **gameObject; // x0
  System_String_array **v88; // x2
  System_String_array **v89; // x3
  System_Boolean_array **v90; // x4
  System_Int32_array **v91; // x5
  System_Int32_array *v92; // x6
  System_Int32_array *v93; // x7
  System_Int32_array **perf; // x1
  System_String_array **v95; // x2
  System_String_array **v96; // x3
  System_Boolean_array **v97; // x4
  System_Int32_array **v98; // x5
  System_Int32_array *v99; // x6
  System_Int32_array *v100; // x7
  struct UnityEngine_Transform_array *v101; // x8
  struct UnityEngine_Transform_array *excardTr; // x8
  UnityEngine_Transform_o *v103; // x1
  struct UnityEngine_Transform_array *v104; // x8
  struct UnityEngine_Transform_array *cardTr; // x9
  struct UnityEngine_Transform_array *v106; // x8
  UnityEngine_Transform_o *v107; // x25
  int v108; // s0
  struct UnityEngine_Transform_array *v111; // x8
  UnityEngine_Transform_o *v112; // x25
  int v113; // s0
  struct UnityEngine_Transform_array *npcardTr; // x8
  struct UnityEngine_Transform_array *v118; // x8
  UnityEngine_Transform_o *v119; // x25
  int v120; // s0
  struct UnityEngine_Transform_array *v123; // x8
  UnityEngine_Transform_o *v124; // x25
  int v125; // s0
  struct UnityEngine_GameObject_array *v129; // x8
  UIWidget_o *Component_srcLineSprite; // x25
  int v131; // s0
  System_Int32_array **v135; // x0
  System_String_array **v136; // x2
  System_String_array **v137; // x3
  System_Boolean_array **v138; // x4
  System_Int32_array **v139; // x5
  System_Int32_array *v140; // x6
  System_Int32_array *v141; // x7
  struct UnityEngine_GameObject_array *v142; // x8
  struct BattleCommandComponent_array *selectedcomponents; // x20
  System_String_array **v144; // x2
  System_String_array **v145; // x3
  System_Boolean_array **v146; // x4
  System_Int32_array **v147; // x5
  System_Int32_array *v148; // x6
  System_Int32_array *v149; // x7
  System_Int32_array **v150; // x21
  System_Int32_array **v151; // x0
  System_String_array **v152; // x2
  System_String_array **v153; // x3
  System_Boolean_array **v154; // x4
  System_Int32_array **v155; // x5
  System_Int32_array *v156; // x6
  System_Int32_array *v157; // x7
  __int64 v158; // x0
  __int64 v159; // x0

  v4 = this;
  if ( (byte_42E9E42 & 1) == 0 )
  {
    sub_B5D5C4(&BattleCommandComponent___TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_GameObject___TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_BattleCommandComponent___, v8, v9, v10);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_UIWidget___, v11, v12, v13);
    sub_B5D5C4(&int___TypeInfo, v14, v15, v16);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&UnityEngine_Transform___TypeInfo, v20, v21, v22);
    sub_B5D5C4(&StringLiteral_18433/*"ef_resistarrow"*/, v23, v24, v25);
    this = (BattlePerformanceCommandCard_o *)sub_B5D5C4(&StringLiteral_18448/*"ef_weakarrow"*/, v26, v27, v28);
    byte_42E9E42 = 1;
  }
  p_p_commandlist = &v4->fields.p_commandlist;
  p_commandlist = v4->fields.p_commandlist;
  if ( p_commandlist )
  {
    v31 = 0LL;
    while ( 1 )
    {
      max_length = p_commandlist->max_length;
      if ( (__int64)v31 >= (int)max_length )
        break;
      if ( v31 >= max_length )
        goto LABEL_79;
      v33 = (UnityEngine_Object_o *)p_commandlist->m_Items[v31];
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_35620236(v33, 0LL);
      p_commandlist = *p_p_commandlist;
      ++v31;
      if ( !*p_p_commandlist )
        goto LABEL_78;
    }
  }
  v35 = (System_Int32_array **)sub_B5D5DC(UnityEngine_GameObject___TypeInfo, 9LL);
  v4->fields.p_commandlist = (struct UnityEngine_GameObject_array *)v35;
  sub_B5D560((BattleServantConfConponent_o *)&v4->fields.p_commandlist, v35, v36, v37, v38, v39, v40, v41);
  v42 = (System_Int32_array **)sub_B5D5DC(BattleCommandComponent___TypeInfo, 9LL);
  p_commandCompArray = &v4->fields.commandCompArray;
  v4->fields.commandCompArray = (struct BattleCommandComponent_array *)v42;
  sub_B5D560((BattleServantConfConponent_o *)&v4->fields.commandCompArray, v42, v44, v45, v46, v47, v48, v49);
  v50 = (System_Int32_array **)sub_B5D5DC(UnityEngine_Transform___TypeInfo, 9LL);
  p_commandTransformArray = &v4->fields.commandTransformArray;
  v4->fields.commandTransformArray = (struct UnityEngine_Transform_array *)v50;
  sub_B5D560((BattleServantConfConponent_o *)&v4->fields.commandTransformArray, v50, v52, v53, v54, v55, v56, v57);
  v58 = v4->fields.p_commandlist;
  if ( !v58 )
    goto LABEL_78;
  v59 = 0;
  v60 = 30;
  v61 = 32LL;
  while ( (signed int)v59 < (signed int)v58->max_length )
  {
    this = (BattlePerformanceCommandCard_o *)BaseMonoBehaviour__createObject(
                                               (BaseMonoBehaviour_o *)v4,
                                               v4->fields.commandprefab,
                                               v4->fields.commandrootTransform,
                                               0LL,
                                               0LL);
    v68 = (System_Int32_array **)this;
    if ( this )
    {
      this = (BattlePerformanceCommandCard_o *)sub_B5D684(this, v58->obj.klass->_1.element_class);
      if ( !this )
        goto LABEL_80;
    }
    if ( v59 >= v58->max_length )
      goto LABEL_79;
    *(Il2CppClass **)((char *)&v58->obj.klass + v61) = (Il2CppClass *)v68;
    sub_B5D560((BattleServantConfConponent_o *)((char *)v58 + v61), v68, v62, v63, v64, v65, v66, v67);
    v69 = *p_p_commandlist;
    if ( !*p_p_commandlist )
      goto LABEL_78;
    if ( v59 >= v69->max_length )
      goto LABEL_79;
    this = *(BattlePerformanceCommandCard_o **)((char *)&v69->obj.klass + v61);
    if ( !this )
      goto LABEL_78;
    this = (BattlePerformanceCommandCard_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                               (UnityEngine_GameObject_o *)this,
                                               (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_BattleCommandComponent___);
    v76 = *p_commandCompArray;
    if ( !*p_commandCompArray )
      goto LABEL_78;
    v77 = this;
    if ( this )
    {
      this = (BattlePerformanceCommandCard_o *)sub_B5D684(this, v76->obj.klass->_1.element_class);
      if ( !this )
        goto LABEL_80;
    }
    if ( v59 >= v76->max_length )
      goto LABEL_79;
    *(Il2CppClass **)((char *)&v76->obj.klass + v61) = (Il2CppClass *)v77;
    sub_B5D560(
      (BattleServantConfConponent_o *)((char *)v76 + v61),
      (System_Int32_array **)v77,
      v70,
      v71,
      v72,
      v73,
      v74,
      v75);
    v78 = *p_p_commandlist;
    if ( !*p_p_commandlist )
      goto LABEL_78;
    if ( v59 >= v78->max_length )
      goto LABEL_79;
    this = *(BattlePerformanceCommandCard_o **)((char *)&v78->obj.klass + v61);
    if ( !this )
      goto LABEL_78;
    v79 = *p_commandTransformArray;
    this = (BattlePerformanceCommandCard_o *)UnityEngine_GameObject__get_transform(
                                               (UnityEngine_GameObject_o *)this,
                                               0LL);
    if ( !v79 )
      goto LABEL_78;
    v86 = (System_Int32_array **)this;
    if ( this )
    {
      this = (BattlePerformanceCommandCard_o *)sub_B5D684(this, v79->obj.klass->_1.element_class);
      if ( !this )
        goto LABEL_80;
    }
    if ( v59 >= v79->max_length )
      goto LABEL_79;
    *(Il2CppClass **)((char *)&v79->obj.klass + v61) = (Il2CppClass *)v86;
    sub_B5D560((BattleServantConfConponent_o *)((char *)v79 + v61), v86, v80, v81, v82, v83, v84, v85);
    if ( !v77 )
      goto LABEL_78;
    BattleCommandComponent__Initialize((BattleCommandComponent_o *)v77, 0LL);
    LOWORD(v77->fields.cutin_trinity_q) = 256;
    BattleCommandComponent__setData((BattleCommandComponent_o *)v77, 0LL, 0LL, 0, 1, 0, 0LL);
    gameObject = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v4, 0LL);
    v77->fields.commandAssistDetailWindow = (struct BattleCommandAssistDetailWindowComponent_o *)gameObject;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v77->fields.commandAssistDetailWindow,
      gameObject,
      v88,
      v89,
      v90,
      v91,
      v92,
      v93);
    BattleCommandComponent__setDepth((BattleCommandComponent_o *)v77, v60, 0LL);
    perf = (System_Int32_array **)v4->fields.perf;
    v77->fields.backTacticalButton = (struct UIButton_o *)perf;
    sub_B5D560((BattleServantConfConponent_o *)&v77->fields.backTacticalButton, perf, v95, v96, v97, v98, v99, v100);
    if ( v59 <= 4 )
    {
      v104 = *p_commandTransformArray;
      if ( !*p_commandTransformArray )
        goto LABEL_78;
      if ( v59 >= v104->max_length )
        goto LABEL_79;
      cardTr = v4->fields.cardTr;
      if ( !cardTr )
        goto LABEL_78;
      if ( v59 >= cardTr->max_length )
        goto LABEL_79;
      this = *(BattlePerformanceCommandCard_o **)((char *)&v104->obj.klass + v61);
      if ( !this )
        goto LABEL_78;
      UnityEngine_Transform__SetParent(
        (UnityEngine_Transform_o *)this,
        *(UnityEngine_Transform_o **)((char *)&cardTr->obj.klass + v61),
        0LL);
      v106 = *p_commandTransformArray;
      if ( !*p_commandTransformArray )
        goto LABEL_78;
      if ( v59 >= v106->max_length )
        goto LABEL_79;
      v107 = *(UnityEngine_Transform_o **)((char *)&v106->obj.klass + v61);
      *(UnityEngine_Vector3_o *)&v108 = UnityEngine_Vector3__get_zero(0LL);
      if ( !v107 )
        goto LABEL_78;
      UnityEngine_Transform__set_localPosition(v107, *(UnityEngine_Vector3_o *)&v108, 0LL);
      v111 = *p_commandTransformArray;
      if ( !*p_commandTransformArray )
        goto LABEL_78;
      if ( v59 >= v111->max_length )
        goto LABEL_79;
      v112 = *(UnityEngine_Transform_o **)((char *)&v111->obj.klass + v61);
      *(UnityEngine_Quaternion_o *)&v113 = UnityEngine_Quaternion__get_identity(0LL);
      if ( !v112 )
        goto LABEL_78;
      UnityEngine_Transform__set_localRotation(v112, *(UnityEngine_Quaternion_o *)&v113, 0LL);
    }
    else
    {
      v101 = *p_commandTransformArray;
      if ( !*p_commandTransformArray )
        goto LABEL_78;
      if ( v59 >= v101->max_length )
        goto LABEL_79;
      this = *(BattlePerformanceCommandCard_o **)((char *)&v101->obj.klass + v61);
      if ( v59 <= 7 )
      {
        npcardTr = v4->fields.npcardTr;
        if ( !npcardTr )
          goto LABEL_78;
        if ( v59 - 5 >= npcardTr->max_length )
          goto LABEL_79;
        if ( !this )
          goto LABEL_78;
        v103 = *(UnityEngine_Transform_o **)((char *)npcardTr + v61 - 40);
      }
      else
      {
        excardTr = v4->fields.excardTr;
        if ( !excardTr )
          goto LABEL_78;
        if ( v59 - 8 >= excardTr->max_length )
          goto LABEL_79;
        if ( !this )
          goto LABEL_78;
        v103 = *(UnityEngine_Transform_o **)((char *)excardTr + v61 - 64);
      }
      UnityEngine_Transform__SetParent((UnityEngine_Transform_o *)this, v103, 0LL);
      v118 = *p_commandTransformArray;
      if ( !*p_commandTransformArray )
        goto LABEL_78;
      if ( v59 >= v118->max_length )
        goto LABEL_79;
      v119 = *(UnityEngine_Transform_o **)((char *)&v118->obj.klass + v61);
      *(UnityEngine_Vector3_o *)&v120 = UnityEngine_Vector3__get_zero(0LL);
      if ( !v119 )
        goto LABEL_78;
      UnityEngine_Transform__set_localPosition(v119, *(UnityEngine_Vector3_o *)&v120, 0LL);
      v123 = *p_commandTransformArray;
      if ( !*p_commandTransformArray )
        goto LABEL_78;
      if ( v59 >= v123->max_length )
        goto LABEL_79;
      v124 = *(UnityEngine_Transform_o **)((char *)&v123->obj.klass + v61);
      *(UnityEngine_Quaternion_o *)&v125 = UnityEngine_Quaternion__get_identity(0LL);
      if ( !v124 )
        goto LABEL_78;
      UnityEngine_Transform__set_localRotation(v124, *(UnityEngine_Quaternion_o *)&v125, 0LL);
      v129 = *p_p_commandlist;
      if ( !*p_p_commandlist )
        goto LABEL_78;
      if ( v59 >= v129->max_length )
        goto LABEL_79;
      this = *(BattlePerformanceCommandCard_o **)((char *)&v129->obj.klass + v61);
      if ( !this )
        goto LABEL_78;
      Component_srcLineSprite = (UIWidget_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                (UnityEngine_GameObject_o *)this,
                                                (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
      *(UnityEngine_Color_o *)&v131 = UnityEngine_Color__get_clear(0LL);
      if ( !Component_srcLineSprite )
        goto LABEL_78;
      UIWidget__set_color(Component_srcLineSprite, *(UnityEngine_Color_o *)&v131, 0LL);
    }
    BattleCommandComponent__addObject((BattleCommandComponent_o *)v77, (System_String_o *)StringLiteral_18433/*"ef_resistarrow"*/, 0, 0LL);
    BattleCommandComponent__addObject((BattleCommandComponent_o *)v77, (System_String_o *)StringLiteral_18448/*"ef_weakarrow"*/, 1, 0LL);
    v58 = *p_p_commandlist;
    ++v59;
    v61 += 8LL;
    v60 += 20;
    if ( !*p_p_commandlist )
      goto LABEL_78;
  }
  v135 = (System_Int32_array **)sub_B5D5DC(BattleCommandComponent___TypeInfo, 4LL);
  v4->fields.selectedcomponents = (struct BattleCommandComponent_array *)v135;
  sub_B5D560((BattleServantConfConponent_o *)&v4->fields.selectedcomponents, v135, v136, v137, v138, v139, v140, v141);
  v142 = v4->fields.p_commandlist;
  if ( !v142 )
    goto LABEL_78;
  if ( v142->max_length <= 8 )
    goto LABEL_79;
  this = (BattlePerformanceCommandCard_o *)v142->m_Items[8];
  if ( !this
    || (selectedcomponents = v4->fields.selectedcomponents,
        this = (BattlePerformanceCommandCard_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                   (UnityEngine_GameObject_o *)this,
                                                   (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_BattleCommandComponent___),
        !selectedcomponents) )
  {
LABEL_78:
    sub_B5D69C(this, v34);
  }
  v150 = (System_Int32_array **)this;
  if ( this )
  {
    this = (BattlePerformanceCommandCard_o *)sub_B5D684(this, selectedcomponents->obj.klass->_1.element_class);
    if ( !this )
    {
LABEL_80:
      v159 = sub_B5D6BC(this);
      sub_B5D668(v159, 0LL);
    }
  }
  if ( selectedcomponents->max_length <= 3 )
  {
LABEL_79:
    v158 = sub_B5D6C8(this);
    sub_B5D668(v158, 0LL);
  }
  selectedcomponents->m_Items[3] = (BattleCommandComponent_o *)v150;
  sub_B5D560((BattleServantConfConponent_o *)&selectedcomponents->m_Items[3], v150, v144, v145, v146, v147, v148, v149);
  v151 = (System_Int32_array **)sub_B5D5DC(int___TypeInfo, 9LL);
  v4->fields.selectcommand = (struct System_Int32_array *)v151;
  sub_B5D560((BattleServantConfConponent_o *)&v4->fields.selectcommand, v151, v152, v153, v154, v155, v156, v157);
  v4->fields.drawcount = 0;
}


void __fastcall BattlePerformanceCommandCard__endCloseCommandAssistDetailWindow(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  PlayMakerFSM_o *commandfsm; // x0

  if ( (byte_42E9E7F & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_3179/*"CLOSE_WINDOW"*/, (_DWORD)method, v2, v3);
    byte_42E9E7F = 1;
  }
  commandfsm = this->fields.commandfsm;
  if ( !commandfsm )
    sub_B5D69C(0LL, method);
  PlayMakerFSM__SendEvent(commandfsm, (System_String_o *)StringLiteral_3179/*"CLOSE_WINDOW"*/, 0LL);
}


void __fastcall BattlePerformanceCommandCard__endCloseSealedWindow(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  PlayMakerFSM_o *commandfsm; // x0

  if ( (byte_42E9E79 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_3179/*"CLOSE_WINDOW"*/, (_DWORD)method, v2, v3);
    byte_42E9E79 = 1;
  }
  commandfsm = this->fields.commandfsm;
  if ( !commandfsm )
    sub_B5D69C(0LL, method);
  PlayMakerFSM__SendEvent(commandfsm, (System_String_o *)StringLiteral_3179/*"CLOSE_WINDOW"*/, 0LL);
}


void __fastcall BattlePerformanceCommandCard__endCloseTdConfWindow(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  PlayMakerFSM_o *commandfsm; // x0

  if ( (byte_42E9E7C & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_3179/*"CLOSE_WINDOW"*/, (_DWORD)method, v2, v3);
    byte_42E9E7C = 1;
  }
  commandfsm = this->fields.commandfsm;
  if ( !commandfsm )
    sub_B5D69C(0LL, method);
  PlayMakerFSM__SendEvent(commandfsm, (System_String_o *)StringLiteral_3179/*"CLOSE_WINDOW"*/, 0LL);
}


void __fastcall BattlePerformanceCommandCard__endComboEffect(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  BattleLogic_o *logic; // x0

  if ( (byte_42E9E67 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_5573/*"END_PROC"*/, (_DWORD)method, v2, v3);
    byte_42E9E67 = 1;
  }
  logic = this->fields.logic;
  if ( !logic )
    sub_B5D69C(0LL, method);
  BattleLogic__sendFsmEvent(logic, (System_String_o *)StringLiteral_5573/*"END_PROC"*/, 0LL);
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
      v15 = sub_B5D6C8(this);
      sub_B5D668(v15, 0LL);
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
    sub_B5D69C(this, method);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_Transform_o *transform; // x0
  __int64 v9; // x1
  UnityEngine_Object_o *Component_srcLineSprite; // x19

  if ( (byte_42E9E4A & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_UIPanel___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    byte_42E9E4A = 1;
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
                                                      (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UIPanel___);
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
    sub_B5D69C(transform, v9);
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
    sub_B5D69C(this, method);
  v3 = this;
  v4 = 0LL;
  while ( 1 )
  {
    max_length = commandCompArray->max_length;
    if ( (int)v4 >= max_length )
      break;
    if ( (unsigned int)v4 >= max_length )
    {
      v6 = sub_B5D6C8(this);
      sub_B5D668(v6, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  struct System_Collections_Generic_List_GameObject__o *aubelist; // x0
  __int64 v27; // x1
  BattlePerformance_o *perf; // x0
  char v29; // w22
  unsigned int v30; // w24
  struct BattleCommandComponent_array *commandCompArray; // x8
  Il2CppClass **v32; // x8
  Il2CppClass *v33; // x20
  int v34; // w21
  int j; // w25
  struct UnityEngine_Transform_array *commandTransformArray; // x8
  UnityEngine_Transform_o *v37; // x22
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v38; // x23
  const MethodInfo *v39; // x3
  __int64 v42; // x0
  System_Collections_Generic_List_Enumerator_T__o v43; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o i; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_42E9E70 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_GameObject___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Action_GameObject__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_BattleCommandComponent_addCriticalBuff__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__Clear__, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v23, v24, v25);
    byte_42E9E70 = 1;
  }
  memset(&i, 0, sizeof(i));
  aubelist = this->fields.aubelist;
  if ( !aubelist )
    goto LABEL_24;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v43,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)aubelist,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  for ( i = v43;
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
          &i,
          (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
        BattlePerformance__destroyInstantiate(perf, (UnityEngine_GameObject_o *)i.fields.current, 0LL) )
  {
    perf = this->fields.perf;
    if ( !perf )
      sub_B5D69C(0LL, v27);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &i,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  aubelist = this->fields.aubelist;
  if ( !aubelist )
LABEL_24:
    sub_B5D69C(aubelist, method);
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)aubelist,
    (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_GameObject__Clear__);
  v29 = 0;
  v30 = 0;
  do
  {
    commandCompArray = this->fields.commandCompArray;
    if ( !commandCompArray )
      goto LABEL_24;
    if ( v30 >= commandCompArray->max_length )
    {
LABEL_25:
      v42 = sub_B5D6C8(aubelist);
      sub_B5D668(v42, 0LL);
    }
    v32 = &commandCompArray->obj.klass + (int)v30;
    v33 = v32[4];
    if ( !v33 )
      goto LABEL_24;
    aubelist = (struct System_Collections_Generic_List_GameObject__o *)BattleCommandComponent__GetPassStarCount(
                                                                         (BattleCommandComponent_o *)v32[4],
                                                                         0LL);
    if ( (int)aubelist >= 1 )
    {
      v34 = (int)aubelist;
      for ( j = 0; j < v34; ++j )
      {
        commandTransformArray = this->fields.commandTransformArray;
        if ( !commandTransformArray )
          goto LABEL_24;
        if ( v30 >= commandTransformArray->max_length )
          goto LABEL_25;
        v37 = commandTransformArray->m_Items[v30];
        v38 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_GameObject__TypeInfo);
        System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
          v38,
          (Il2CppObject *)v33,
          Method_BattleCommandComponent_addCriticalBuff__,
          (const MethodInfo_258B320 *)Method_System_Action_GameObject___ctor__);
        BattlePerformanceCommandCard__MoveNotTween(this, v37, (System_Action_GameObject__o *)v38, v39);
      }
      v29 = 1;
    }
    BattleCommandComponent__ResetPassStarCount((BattleCommandComponent_o *)v33, 0LL);
    if ( BYTE4(v33->vtable[4].method) )
      BattleCommandComponent__updateSelectedEffect((BattleCommandComponent_o *)v33, 0LL);
  }
  while ( v30++ < 4 );
  BattlePerformanceCommandCard__updateBuffIcon(this, method);
  return v29 & 1;
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
        v6 = sub_B5D6C8(this);
        sub_B5D668(v6, 0LL);
      }
      this = (BattlePerformanceCommandCard_o *)selectedcomponents->m_Items[actionIndex];
      if ( this )
        return UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
LABEL_9:
      sub_B5D69C(this, actionIndex);
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
  int v2; // w2
  __int64 v3; // x3
  BattlePerformanceCommandCard_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  struct BattlePerformance_o *perf; // x8
  struct BattleData_o *data; // x8
  struct BattleComboData_o *combodata; // x8
  _BOOL4 flash; // w9
  int32_t samecount; // w8
  __int64 *v22; // x8

  v4 = this;
  if ( (byte_42E9E68 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_18456/*"effect/BitEffect/bit_cut_2a"*/, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_18459/*"effect/BitEffect/bit_cut_u3"*/, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_18458/*"effect/BitEffect/bit_cut_u2"*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_18460/*"effect/BitEffect/bit_cut_ua"*/, v11, v12, v13);
    this = (BattlePerformanceCommandCard_o *)sub_B5D5C4(&StringLiteral_18457/*"effect/BitEffect/bit_cut_3a"*/, v14, v15, v16);
    byte_42E9E68 = 1;
  }
  perf = v4->fields.perf;
  if ( !perf || (data = perf->fields.data) == 0LL || (combodata = data->fields.combodata) == 0LL )
    sub_B5D69C(this, method);
  flash = combodata->fields.flash;
  samecount = combodata->fields.samecount;
  if ( flash )
  {
    if ( samecount == 2 )
    {
      v22 = &StringLiteral_18458/*"effect/BitEffect/bit_cut_u2"*/;
    }
    else if ( samecount == 3 )
    {
      v22 = (__int64 *)&StringLiteral_18459/*"effect/BitEffect/bit_cut_u3"*/;
    }
    else
    {
      v22 = (__int64 *)&StringLiteral_18460/*"effect/BitEffect/bit_cut_ua"*/;
    }
    return (System_String_o *)*v22;
  }
  if ( samecount == 2 )
  {
    v22 = &StringLiteral_18456/*"effect/BitEffect/bit_cut_2a"*/;
    return (System_String_o *)*v22;
  }
  if ( samecount == 3 )
    return (System_String_o *)StringLiteral_18457/*"effect/BitEffect/bit_cut_3a"*/;
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
  int v2; // w2
  __int64 v3; // x3
  float x; // s9
  float y; // s8
  float v7; // s0
  float v8; // s1
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  if ( (byte_42E9E88 & 1) == 0 )
  {
    sub_B5D5C4(&FSUtility_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E9E88 = 1;
  }
  x = this->fields.TutorialArrow22.fields.x;
  y = this->fields.TutorialArrow22.fields.y;
  if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  v7 = x + FSUtility__GetOffsetX(40.0, 0, 0LL);
  v8 = y;
  result.fields.y = v8;
  result.fields.x = v7;
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
  int v2; // w2
  __int64 v3; // x3
  int v4; // s1
  float m_XMin; // s0
  float x; // s8
  float v10; // s4
  float v11; // s0
  float m_YMin; // s1
  float m_Width; // s2
  float m_Height; // s3
  struct UnityEngine_Rect_o TutorialSquare22; // [xsp+0h] [xbp-30h] BYREF
  UnityEngine_Rect_o v16; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42E9E89 & 1) == 0 )
  {
    sub_B5D5C4(&FSUtility_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E9E89 = 1;
  }
  TutorialSquare22 = this->fields.TutorialSquare22;
  m_XMin = TutorialSquare22.fields.m_XMin;
  x = UnityEngine_Rect__get_x(*(UnityEngine_Rect_o *)(&v4 - 1), (const MethodInfo *)&TutorialSquare22);
  if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  v16.fields.m_XMin = x + FSUtility__GetOffsetX(40.0, 0, 0LL);
  UnityEngine_Rect__set_x(v16, v10, (const MethodInfo *)&TutorialSquare22);
  m_YMin = TutorialSquare22.fields.m_YMin;
  v11 = TutorialSquare22.fields.m_XMin;
  m_Height = TutorialSquare22.fields.m_Height;
  m_Width = TutorialSquare22.fields.m_Width;
  result.fields.m_Height = m_Height;
  result.fields.m_Width = m_Width;
  result.fields.m_YMin = m_YMin;
  result.fields.m_XMin = v11;
  return result;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Rect_array *__fastcall BattlePerformanceCommandCard__get_FSTutorialSquare32(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v3; // x3
  BattlePerformanceCommandCard_o *v4; // x19
  UnityEngine_Rect_array *v5; // x0
  __int64 v6; // x1
  int v7; // s0
  UnityEngine_Rect_array *v11; // x19
  float x; // s8
  float v13; // s4
  __int64 v15; // x0
  UnityEngine_Rect_o v16; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v4 = this;
  if ( (byte_42E9E87 & 1) == 0 )
  {
    this = (BattlePerformanceCommandCard_o *)sub_B5D5C4(&FSUtility_TypeInfo, (_DWORD)method, (_DWORD)v2, v3);
    byte_42E9E87 = 1;
  }
  v5 = BattlePerformanceCommandCard__FSTutorialSquareCard(this, v4->fields.TutorialSquare32, v2);
  if ( !v5 )
    sub_B5D69C(0LL, v6);
  v11 = v5;
  if ( v5->max_length <= 1 )
  {
    v15 = sub_B5D6C8(v5);
    sub_B5D668(v15, 0LL);
  }
  x = UnityEngine_Rect__get_x(*(UnityEngine_Rect_o *)&v7, (const MethodInfo *)&v5->m_Items[1].fields.m_YMin);
  if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  v16.fields.m_XMin = x + FSUtility__GetOffsetX(88.0, 1, 0LL);
  UnityEngine_Rect__set_x(v16, v13, (const MethodInfo *)&v11->m_Items[1].fields.m_YMin);
  return v11;
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
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_GameObject_o *transform; // x0
  struct UnityEngine_GameObject_array *p_commandlist; // x8
  __int64 v10; // x21
  unsigned __int64 max_length; // x9
  unsigned __int64 v12; // x23
  UnityEngine_Object_o *v13; // x20
  __int64 v14; // x1
  struct UnityEngine_GameObject_array *v15; // x8
  __int64 v16; // x0

  if ( (byte_42E9E4D & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, (_DWORD)v2, v3);
    sub_B5D5C4(&StringLiteral_16543/*"anim_giveout"*/, v5, v6, v7);
    byte_42E9E4D = 1;
  }
  BattlePerformanceCommandCard__playAnimation(this, (System_String_o *)StringLiteral_16543/*"anim_giveout"*/, v2);
  p_commandlist = this->fields.p_commandlist;
  if ( p_commandlist )
  {
    v10 = 4LL;
    while ( 1 )
    {
      max_length = p_commandlist->max_length;
      v12 = v10 - 4;
      if ( v10 - 4 >= (int)max_length )
        break;
      if ( v12 >= max_length )
        goto LABEL_21;
      v13 = (UnityEngine_Object_o *)*((_QWORD *)&p_commandlist->obj.klass + v10);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      transform = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(v13, 0LL, 0LL);
      if ( ((unsigned __int8)transform & 1) != 0 )
      {
        v15 = this->fields.p_commandlist;
        if ( !v15 )
          goto LABEL_19;
        if ( v12 >= v15->max_length )
        {
LABEL_21:
          v16 = sub_B5D6C8(transform);
          sub_B5D668(v16, 0LL);
        }
        transform = (UnityEngine_GameObject_o *)*((_QWORD *)&v15->obj.klass + v10);
        if ( !transform
          || (transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL)) == 0LL
          || (transform = (UnityEngine_GameObject_o *)UnityEngine_Transform__get_parent(
                                                        (UnityEngine_Transform_o *)transform,
                                                        0LL)) == 0LL
          || (transform = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL)) == 0LL )
        {
LABEL_19:
          sub_B5D69C(transform, v14);
        }
        UnityEngine_GameObject__SetActive(transform, 1, 0LL);
      }
      p_commandlist = this->fields.p_commandlist;
      ++v10;
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
  int v2; // w2
  __int64 v3; // x3
  BattlePerformanceCommandCard_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  struct UnityEngine_GameObject_array *p_commandlist; // x8
  __int64 v12; // x22
  il2cpp_array_size_t max_length; // w9
  il2cpp_array_size_t v14; // w21
  UnityEngine_Object_o *Component_srcLineSprite; // x20
  struct BattleCommandComponent_array *commandCompArray; // x8
  BattleCommandComponent_o *v17; // x20
  struct UnityEngine_GameObject_array *v18; // x8
  UIWidget_o *v19; // x21
  int v20; // s0
  __int64 v24; // x0

  v4 = this;
  if ( (byte_42E9E4E & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_TweenColor___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_UIWidget___, v5, v6, v7);
    this = (BattlePerformanceCommandCard_o *)sub_B5D5C4(&UnityEngine_Object_TypeInfo, v8, v9, v10);
    byte_42E9E4E = 1;
  }
  p_commandlist = v4->fields.p_commandlist;
  if ( !p_commandlist )
LABEL_27:
    sub_B5D69C(this, method);
  v12 = 9LL;
  while ( 1 )
  {
    max_length = p_commandlist->max_length;
    v14 = v12 - 4;
    if ( (int)v12 - 4 >= (int)(max_length - 1) )
      break;
    if ( v14 >= max_length )
      goto LABEL_29;
    this = (BattlePerformanceCommandCard_o *)*((_QWORD *)&p_commandlist->obj.klass + v12);
    if ( !this )
      goto LABEL_27;
    Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                        (UnityEngine_GameObject_o *)this,
                                                        (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_TweenColor___);
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
      UnityEngine_Object__DestroyImmediate_35620448(Component_srcLineSprite, 0LL);
    }
    commandCompArray = v4->fields.commandCompArray;
    if ( !commandCompArray )
      goto LABEL_27;
    if ( v14 >= commandCompArray->max_length )
      goto LABEL_29;
    v17 = (BattleCommandComponent_o *)*((_QWORD *)&commandCompArray->obj.klass + v12);
    if ( !v17 )
      goto LABEL_27;
    this = (BattlePerformanceCommandCard_o *)BattleCommandComponent__checkObject(
                                               *((BattleCommandComponent_o **)&commandCompArray->obj.klass + v12),
                                               0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v18 = v4->fields.p_commandlist;
      if ( !v18 )
        goto LABEL_27;
      if ( v14 >= v18->max_length )
      {
LABEL_29:
        v24 = sub_B5D6C8(this);
        sub_B5D668(v24, 0LL);
      }
      this = (BattlePerformanceCommandCard_o *)*((_QWORD *)&v18->obj.klass + v12);
      if ( !this )
        goto LABEL_27;
      v19 = (UIWidget_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                            (UnityEngine_GameObject_o *)this,
                            (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
      *(UnityEngine_Color_o *)&v20 = UnityEngine_Color__get_white(0LL);
      if ( !v19 )
        goto LABEL_27;
      UIWidget__set_color(v19, *(UnityEngine_Color_o *)&v20, 0LL);
      if ( !v17->fields.selectflg )
        BattleCommandComponent__startMoveFloat(v17, 0LL);
    }
    p_commandlist = v4->fields.p_commandlist;
    ++v12;
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
    sub_B5D69C(this, flg);
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
      v18 = sub_B5D6C8(this);
      sub_B5D668(v18, 0LL);
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
    sub_B5D69C(this, method);
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
  int v2; // w2
  __int64 v3; // x3
  PlayMakerFSM_o *commandfsm; // x0

  if ( (byte_42E9E43 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_7378/*"INIT_OPEN"*/, (_DWORD)method, v2, v3);
    byte_42E9E43 = 1;
  }
  commandfsm = this->fields.commandfsm;
  if ( !commandfsm )
    sub_B5D69C(0LL, method);
  PlayMakerFSM__SendEvent(commandfsm, (System_String_o *)StringLiteral_7378/*"INIT_OPEN"*/, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  System_Collections_Generic_List_XWeaponTrail_Element__o *aubelist; // x0
  struct BattleData_o *Bdata; // x8
  int criticalstars; // w8
  int v53; // w23
  signed int v54; // w28
  UnityEngine_GameObject_o *v55; // x20
  UnityEngine_Transform_o *v56; // x21
  int32_t layer; // w0
  UnityEngine_Transform_o *transform; // x21
  int v59; // s0
  System_String_array **v62; // x2
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  System_Object_array *v68; // x21
  __int64 v69; // x0
  System_Int32_array **v70; // x1
  System_String_array **v71; // x2
  System_String_array **v72; // x3
  System_Boolean_array **v73; // x4
  System_Int32_array **v74; // x5
  System_Int32_array *v75; // x6
  System_Int32_array *v76; // x7
  System_Int32_array **v77; // x22
  System_String_array **v78; // x2
  System_String_array **v79; // x3
  System_Boolean_array **v80; // x4
  System_Int32_array **v81; // x5
  System_Int32_array *v82; // x6
  System_Int32_array *v83; // x7
  System_Int32_array **v84; // x1
  System_String_array **v85; // x2
  System_String_array **v86; // x3
  System_Boolean_array **v87; // x4
  System_Int32_array **v88; // x5
  System_Int32_array *v89; // x6
  System_Int32_array *v90; // x7
  System_Int32_array **v91; // x22
  System_String_array **v92; // x2
  System_String_array **v93; // x3
  System_Boolean_array **v94; // x4
  System_Int32_array **v95; // x5
  System_Int32_array *v96; // x6
  System_Int32_array *v97; // x7
  System_Int32_array **v98; // x1
  System_String_array **v99; // x2
  System_String_array **v100; // x3
  System_Boolean_array **v101; // x4
  System_Int32_array **v102; // x5
  System_Int32_array *v103; // x6
  System_Int32_array *v104; // x7
  System_Int32_array **v105; // x22
  System_String_array **v106; // x2
  System_String_array **v107; // x3
  System_Boolean_array **v108; // x4
  System_Int32_array **v109; // x5
  System_Int32_array *v110; // x6
  System_Int32_array *v111; // x7
  System_Int32_array **v112; // x1
  System_String_array **v113; // x2
  System_String_array **v114; // x3
  System_Boolean_array **v115; // x4
  System_Int32_array **v116; // x5
  System_Int32_array *v117; // x6
  System_Int32_array *v118; // x7
  System_Int32_array **v119; // x22
  System_String_array **v120; // x2
  System_String_array **v121; // x3
  System_Boolean_array **v122; // x4
  System_Int32_array **v123; // x5
  System_Int32_array *v124; // x6
  System_Int32_array *v125; // x7
  System_Int32_array **v126; // x1
  System_String_array **v127; // x2
  System_String_array **v128; // x3
  System_Boolean_array **v129; // x4
  System_Int32_array **v130; // x5
  System_Int32_array *v131; // x6
  System_Int32_array *v132; // x7
  System_Int32_array **v133; // x22
  System_String_array **v134; // x2
  System_String_array **v135; // x3
  System_Boolean_array **v136; // x4
  System_Int32_array **v137; // x5
  System_Int32_array *v138; // x6
  System_Int32_array *v139; // x7
  System_Int32_array **v140; // x1
  System_String_array **v141; // x2
  System_String_array **v142; // x3
  System_Boolean_array **v143; // x4
  System_Int32_array **v144; // x5
  System_Int32_array *v145; // x6
  System_Int32_array *v146; // x7
  System_Int32_array **v147; // x22
  System_Collections_Hashtable_o *v148; // x0
  struct BattlePerformance_o *perf; // x8
  __int64 v150; // x0
  __int64 v151; // x0
  char v152[4]; // [xsp+0h] [xbp-70h] BYREF
  int v153; // [xsp+4h] [xbp-6Ch] BYREF
  int v154; // [xsp+8h] [xbp-68h] BYREF
  float v155; // [xsp+Ch] [xbp-64h] BYREF
  int v156; // [xsp+18h] [xbp-58h] BYREF
  int32_t v157; // [xsp+1Ch] [xbp-54h] BYREF

  if ( (byte_42E9E6C & 1) == 0 )
  {
    sub_B5D5C4(&bool_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&iTween_EaseType_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_Rigidbody___, v8, v9, v10);
    sub_B5D5C4(&int_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__Add__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__Clear__, v17, v18, v19);
    sub_B5D5C4(&object___TypeInfo, v20, v21, v22);
    sub_B5D5C4(&float_TypeInfo, v23, v24, v25);
    sub_B5D5C4(&StringLiteral_23627/*"x"*/, v26, v27, v28);
    sub_B5D5C4(&StringLiteral_18341/*"easetype"*/, v29, v30, v31);
    sub_B5D5C4(&StringLiteral_22982/*"time"*/, v32, v33, v34);
    sub_B5D5C4(&StringLiteral_18173/*"delay"*/, v35, v36, v37);
    sub_B5D5C4(&StringLiteral_23719/*"y"*/, v38, v39, v40);
    sub_B5D5C4(&StringLiteral_20221/*"islocal"*/, v41, v42, v43);
    sub_B5D5C4(&StringLiteral_18477/*"effect/ef_critlaunch"*/, v44, v45, v46);
    sub_B5D5C4(&iTween_TypeInfo, v47, v48, v49);
    byte_42E9E6C = 1;
  }
  aubelist = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.aubelist;
  if ( !aubelist )
    goto LABEL_73;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    aubelist,
    (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_GameObject__Clear__);
  Bdata = this->fields.Bdata;
  if ( !Bdata )
    goto LABEL_73;
  criticalstars = Bdata->fields.criticalstars;
  if ( criticalstars < 1 )
    return;
  v53 = -1;
  v54 = criticalstars / 5u;
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
    v55 = (UnityEngine_GameObject_o *)aubelist;
    aubelist = (System_Collections_Generic_List_XWeaponTrail_Element__o *)UnityEngine_GameObject__get_transform(
                                                                            (UnityEngine_GameObject_o *)aubelist,
                                                                            0LL);
    if ( !this->fields.criticalpointTr )
      goto LABEL_73;
    v56 = (UnityEngine_Transform_o *)aubelist;
    aubelist = (System_Collections_Generic_List_XWeaponTrail_Element__o *)UnityEngine_Component__get_gameObject(
                                                                            (UnityEngine_Component_o *)this->fields.criticalpointTr,
                                                                            0LL);
    if ( !aubelist )
      goto LABEL_73;
    layer = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)aubelist, 0LL);
    TransformHelper__ChangeChildsLayer(v56, layer, 0LL);
    aubelist = (System_Collections_Generic_List_XWeaponTrail_Element__o *)UnityEngine_GameObject__get_transform(
                                                                            v55,
                                                                            0LL);
    if ( !aubelist )
      goto LABEL_73;
    UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)aubelist, this->fields.criticalpointTr, 0LL);
    transform = UnityEngine_GameObject__get_transform(v55, 0LL);
    *(UnityEngine_Vector3_o *)&v59 = UnityEngine_Vector3__get_zero(0LL);
    if ( !transform )
      goto LABEL_73;
    UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v59, 0LL);
    aubelist = (System_Collections_Generic_List_XWeaponTrail_Element__o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                            v55,
                                                                            (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_Rigidbody___);
    if ( !aubelist )
      goto LABEL_73;
    UnityEngine_Rigidbody__set_useGravity((UnityEngine_Rigidbody_o *)aubelist, 0, 0LL);
    aubelist = (System_Collections_Generic_List_XWeaponTrail_Element__o *)sub_B5D5DC(object___TypeInfo, 12LL);
    if ( !aubelist )
      goto LABEL_73;
    v68 = (System_Object_array *)aubelist;
    v69 = StringLiteral_23627/*"x"*/;
    if ( StringLiteral_23627/*"x"*/ )
    {
      v69 = sub_B5D684(StringLiteral_23627/*"x"*/, v68->obj.klass->_1.element_class);
      if ( !v69 )
        goto LABEL_74;
      v70 = (System_Int32_array **)StringLiteral_23627/*"x"*/;
    }
    else
    {
      v70 = 0LL;
    }
    if ( !v68->max_length )
      goto LABEL_72;
    v68->m_Items[0] = (Il2CppObject *)v70;
    sub_B5D560((BattleServantConfConponent_o *)v68->m_Items, v70, v62, v63, v64, v65, v66, v67);
    v157 = UnityEngine_Random__Range_35654020(-780, 110, 0LL);
    v69 = j_il2cpp_value_box_0(int_TypeInfo, &v157);
    v77 = (System_Int32_array **)v69;
    if ( v69 )
    {
      v69 = sub_B5D684(v69, v68->obj.klass->_1.element_class);
      if ( !v69 )
      {
LABEL_74:
        v151 = sub_B5D6BC(v69);
        sub_B5D668(v151, 0LL);
      }
    }
    if ( v68->max_length <= 1 )
      goto LABEL_72;
    v68->m_Items[1] = (Il2CppObject *)v77;
    sub_B5D560((BattleServantConfConponent_o *)&v68->m_Items[1], v77, v71, v72, v73, v74, v75, v76);
    v69 = StringLiteral_23719/*"y"*/;
    if ( StringLiteral_23719/*"y"*/ )
    {
      v69 = sub_B5D684(StringLiteral_23719/*"y"*/, v68->obj.klass->_1.element_class);
      if ( !v69 )
        goto LABEL_74;
      v84 = (System_Int32_array **)StringLiteral_23719/*"y"*/;
    }
    else
    {
      v84 = 0LL;
    }
    if ( v68->max_length <= 2 )
      goto LABEL_72;
    v68->m_Items[2] = (Il2CppObject *)v84;
    sub_B5D560((BattleServantConfConponent_o *)&v68->m_Items[2], v84, v78, v79, v80, v81, v82, v83);
    v156 = 500;
    v69 = j_il2cpp_value_box_0(int_TypeInfo, &v156);
    v91 = (System_Int32_array **)v69;
    if ( v69 )
    {
      v69 = sub_B5D684(v69, v68->obj.klass->_1.element_class);
      if ( !v69 )
        goto LABEL_74;
    }
    if ( v68->max_length <= 3 )
      goto LABEL_72;
    v68->m_Items[3] = (Il2CppObject *)v91;
    sub_B5D560((BattleServantConfConponent_o *)&v68->m_Items[3], v91, v85, v86, v87, v88, v89, v90);
    v69 = StringLiteral_18173/*"delay"*/;
    if ( StringLiteral_18173/*"delay"*/ )
    {
      v69 = sub_B5D684(StringLiteral_18173/*"delay"*/, v68->obj.klass->_1.element_class);
      if ( !v69 )
        goto LABEL_74;
      v98 = (System_Int32_array **)StringLiteral_18173/*"delay"*/;
    }
    else
    {
      v98 = 0LL;
    }
    if ( v68->max_length <= 4 )
      goto LABEL_72;
    v68->m_Items[4] = (Il2CppObject *)v98;
    sub_B5D560((BattleServantConfConponent_o *)&v68->m_Items[4], v98, v92, v93, v94, v95, v96, v97);
    v155 = UnityEngine_Random__Range(0.0, 0.3, 0LL);
    v69 = j_il2cpp_value_box_0(float_TypeInfo, &v155);
    v105 = (System_Int32_array **)v69;
    if ( v69 )
    {
      v69 = sub_B5D684(v69, v68->obj.klass->_1.element_class);
      if ( !v69 )
        goto LABEL_74;
    }
    if ( v68->max_length <= 5 )
      goto LABEL_72;
    v68->m_Items[5] = (Il2CppObject *)v105;
    sub_B5D560((BattleServantConfConponent_o *)&v68->m_Items[5], v105, v99, v100, v101, v102, v103, v104);
    v69 = StringLiteral_22982/*"time"*/;
    if ( StringLiteral_22982/*"time"*/ )
    {
      v69 = sub_B5D684(StringLiteral_22982/*"time"*/, v68->obj.klass->_1.element_class);
      if ( !v69 )
        goto LABEL_74;
      v112 = (System_Int32_array **)StringLiteral_22982/*"time"*/;
    }
    else
    {
      v112 = 0LL;
    }
    if ( v68->max_length <= 6 )
      goto LABEL_72;
    v68->m_Items[6] = (Il2CppObject *)v112;
    sub_B5D560((BattleServantConfConponent_o *)&v68->m_Items[6], v112, v106, v107, v108, v109, v110, v111);
    v154 = 1050253722;
    v69 = j_il2cpp_value_box_0(float_TypeInfo, &v154);
    v119 = (System_Int32_array **)v69;
    if ( v69 )
    {
      v69 = sub_B5D684(v69, v68->obj.klass->_1.element_class);
      if ( !v69 )
        goto LABEL_74;
    }
    if ( v68->max_length <= 7 )
      goto LABEL_72;
    v68->m_Items[7] = (Il2CppObject *)v119;
    sub_B5D560((BattleServantConfConponent_o *)&v68->m_Items[7], v119, v113, v114, v115, v116, v117, v118);
    v69 = StringLiteral_18341/*"easetype"*/;
    if ( StringLiteral_18341/*"easetype"*/ )
    {
      v69 = sub_B5D684(StringLiteral_18341/*"easetype"*/, v68->obj.klass->_1.element_class);
      if ( !v69 )
        goto LABEL_74;
      v126 = (System_Int32_array **)StringLiteral_18341/*"easetype"*/;
    }
    else
    {
      v126 = 0LL;
    }
    if ( v68->max_length <= 8 )
      goto LABEL_72;
    v68->m_Items[8] = (Il2CppObject *)v126;
    sub_B5D560((BattleServantConfConponent_o *)&v68->m_Items[8], v126, v120, v121, v122, v123, v124, v125);
    v153 = 1;
    v69 = j_il2cpp_value_box_0(iTween_EaseType_TypeInfo, &v153);
    v133 = (System_Int32_array **)v69;
    if ( v69 )
    {
      v69 = sub_B5D684(v69, v68->obj.klass->_1.element_class);
      if ( !v69 )
        goto LABEL_74;
    }
    if ( v68->max_length <= 9 )
      goto LABEL_72;
    v68->m_Items[9] = (Il2CppObject *)v133;
    sub_B5D560((BattleServantConfConponent_o *)&v68->m_Items[9], v133, v127, v128, v129, v130, v131, v132);
    v69 = StringLiteral_20221/*"islocal"*/;
    if ( StringLiteral_20221/*"islocal"*/ )
    {
      v69 = sub_B5D684(StringLiteral_20221/*"islocal"*/, v68->obj.klass->_1.element_class);
      if ( !v69 )
        goto LABEL_74;
      v140 = (System_Int32_array **)StringLiteral_20221/*"islocal"*/;
    }
    else
    {
      v140 = 0LL;
    }
    if ( v68->max_length <= 0xA )
    {
LABEL_72:
      v150 = sub_B5D6C8(v69);
      sub_B5D668(v150, 0LL);
    }
    v68->m_Items[10] = (Il2CppObject *)v140;
    sub_B5D560((BattleServantConfConponent_o *)&v68->m_Items[10], v140, v134, v135, v136, v137, v138, v139);
    v152[0] = 1;
    v69 = j_il2cpp_value_box_0(bool_TypeInfo, v152);
    v147 = (System_Int32_array **)v69;
    if ( v69 )
    {
      v69 = sub_B5D684(v69, v68->obj.klass->_1.element_class);
      if ( !v69 )
        goto LABEL_74;
    }
    if ( v68->max_length <= 0xB )
      goto LABEL_72;
    v68->m_Items[11] = (Il2CppObject *)v147;
    sub_B5D560((BattleServantConfConponent_o *)&v68->m_Items[11], v147, v141, v142, v143, v144, v145, v146);
    if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
    v148 = iTween__Hash(v68, 0LL);
    iTween__MoveTo_43183064(v55, v148, 0LL);
    aubelist = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.aubelist;
    if ( !aubelist )
      goto LABEL_73;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)aubelist,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v55,
      (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_GameObject__Add__);
    ++v53;
  }
  while ( v53 < v54 );
  aubelist = (System_Collections_Generic_List_XWeaponTrail_Element__o *)BaseMonoBehaviour__createObject_21082944(
                                                                          (BaseMonoBehaviour_o *)this,
                                                                          (System_String_o *)StringLiteral_18477/*"effect/ef_critlaunch"*/,
                                                                          this->fields.criticalpointTr,
                                                                          0LL,
                                                                          0LL);
  perf = this->fields.perf;
  if ( !perf || (aubelist = (System_Collections_Generic_List_XWeaponTrail_Element__o *)perf->fields.statusPerf) == 0LL )
LABEL_73:
    sub_B5D69C(aubelist, method);
  BattlePerformanceStatus__updateCriticalPoint((BattlePerformanceStatus_o *)aubelist, -1, 0, 0LL);
}


void __fastcall BattlePerformanceCommandCard__openCommandCard(
        BattlePerformanceCommandCard_o *this,
        bool isStatTac,
        const MethodInfo *method)
{
  __int64 v3; // x3
  char v6; // w1
  int v7; // w2
  __int64 v8; // x3
  char v9; // w1
  int v10; // w2
  __int64 v11; // x3
  UnityEngine_Object_o *maskSprite; // x21
  const MethodInfo *v13; // x1
  const MethodInfo *v14; // x2
  UIWidget_o *backTacticalButton; // x0
  const MethodInfo *v16; // x2
  const MethodInfo *v17; // x1
  System_Collections_IEnumerator_o *v18; // x0
  struct BattleCommandComponent_array *commandCompArray; // x8
  __int64 v20; // x20
  int max_length; // w9
  il2cpp_array_size_t v22; // w21
  struct BattleCommandComponent_array *v23; // x8
  struct BattleCommandComponent_array *v24; // x8
  __int64 v25; // x0

  if ( (byte_42E9E49 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, isStatTac, (_DWORD)method, v3);
    sub_B5D5C4(&SeManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_16541/*"anim_draw"*/, v9, v10, v11);
    byte_42E9E49 = 1;
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
  BattlePerformanceCommandCard__playAnimation(this, (System_String_o *)StringLiteral_16541/*"anim_draw"*/, v14);
  backTacticalButton = (UIWidget_o *)this->fields.backTacticalButton;
  if ( !backTacticalButton )
    goto LABEL_28;
  backTacticalButton = (UIWidget_o *)UnityEngine_Component__get_gameObject(
                                       (UnityEngine_Component_o *)backTacticalButton,
                                       0LL);
  if ( !backTacticalButton )
    goto LABEL_28;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)backTacticalButton, 1, 0LL);
  BattlePerformanceCommandCard__SetBackTacticalButton(this, 1, v16);
  if ( isStatTac )
  {
    v18 = BattlePerformanceCommandCard__waitFallStar(this, v17);
    UnityEngine_MonoBehaviour__StartCoroutine_35615088((UnityEngine_MonoBehaviour_o *)this, v18, 0LL);
  }
  if ( (BYTE3(SeManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SeManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
  SeManager__PlayCommonSe(4, 0LL);
  commandCompArray = this->fields.commandCompArray;
  if ( !commandCompArray )
LABEL_28:
    sub_B5D69C(backTacticalButton, v13);
  v20 = 4LL;
  while ( 1 )
  {
    max_length = commandCompArray->max_length;
    v22 = v20 - 4;
    if ( (int)v20 - 4 >= max_length )
      break;
    if ( v22 >= max_length )
      goto LABEL_30;
    backTacticalButton = (UIWidget_o *)*((_QWORD *)&commandCompArray->obj.klass + v20);
    if ( backTacticalButton )
    {
      BattleCommandComponent__setTouchFlg((BattleCommandComponent_o *)backTacticalButton, 0, 0LL);
      v23 = this->fields.commandCompArray;
      if ( v23 )
      {
        if ( v22 >= v23->max_length )
          goto LABEL_30;
        backTacticalButton = (UIWidget_o *)*((_QWORD *)&v23->obj.klass + v20);
        if ( backTacticalButton )
        {
          BattleCommandComponent__SetCardBuffAlphaAnimFlag((BattleCommandComponent_o *)backTacticalButton, 0, 0LL);
          v24 = this->fields.commandCompArray;
          if ( v24 )
          {
            if ( v22 >= v24->max_length )
            {
LABEL_30:
              v25 = sub_B5D6C8(backTacticalButton);
              sub_B5D668(v25, 0LL);
            }
            backTacticalButton = (UIWidget_o *)*((_QWORD *)&v24->obj.klass + v20);
            if ( backTacticalButton )
            {
              BattleCommandComponent__SetTreasureDeviceTypeChange(
                (BattleCommandComponent_o *)backTacticalButton,
                0,
                0,
                0LL);
              commandCompArray = this->fields.commandCompArray;
              ++v20;
              if ( commandCompArray )
                continue;
            }
          }
        }
      }
    }
    goto LABEL_28;
  }
  BattlePerformanceCommandCard__updateCardMag(this, v13);
}


void __fastcall BattlePerformanceCommandCard__playAnimation(
        BattlePerformanceCommandCard_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  UnityEngine_Object_o *cardRoot; // x21
  float v22; // s8
  float OffsetX; // s9
  _BOOL8 v24; // x0
  const MethodInfo *v25; // x1
  UnityEngine_Transform_o *Item; // x0
  UnityEngine_Object_o *Component_WebViewObject; // x21
  UnityEngine_Object_o *v28; // x20
  __int64 v29; // x3
  UnityEngine_Transform_c *klass; // x8
  UnityEngine_Transform_o *v31; // x20
  unsigned __int64 v32; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 v34; // x0
  UnityEngine_Vector3_o v35; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42E9E44 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_Animation___, (_DWORD)name, (_DWORD)method, v3);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_SimpleAnimation___, v6, v7, v8);
    sub_B5D5C4(&FSUtility_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&SimpleAnimation_State_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&StringLiteral_16543/*"anim_giveout"*/, v18, v19, v20);
    byte_42E9E44 = 1;
  }
  cardRoot = (UnityEngine_Object_o *)this->fields.cardRoot;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(cardRoot, 0LL, 0LL) )
  {
    v22 = 0.0;
    OffsetX = 0.0;
    if ( !System_String__op_Equality(name, (System_String_o *)StringLiteral_16543/*"anim_giveout"*/, 0LL) )
    {
      if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
      OffsetX = FSUtility__GetOffsetX(68.0, 0, 0LL);
    }
    v24 = System_String__op_Equality(name, (System_String_o *)StringLiteral_16543/*"anim_giveout"*/, 0LL);
    if ( v24 )
      v22 = BattlePerformanceCommandCard__FSCardRootOffsetY((BattlePerformanceCommandCard_o *)v24, v25);
    Item = this->fields.cardRoot;
    if ( !Item )
      goto LABEL_37;
    v35.fields.y = v22 + this->fields.CARD_ROOT_BASE_Y;
    v35.fields.x = OffsetX + this->fields.CARD_ROOT_BASE_X;
    v35.fields.z = 0.0;
    UnityEngine_Transform__set_localPosition(Item, v35, 0LL);
  }
  Component_WebViewObject = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                      (UnityEngine_Component_o *)this,
                                                      (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
  v28 = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                  (UnityEngine_Component_o *)this,
                                  (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_Animation___);
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
    Item = (UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality(v28, 0LL, 0LL);
    if ( ((unsigned __int8)Item & 1) == 0 )
      return;
    if ( v28 )
    {
      Item = (UnityEngine_Transform_o *)UnityEngine_Animation__get_Item((UnityEngine_Animation_o *)v28, name, 0LL);
      if ( Item )
      {
        UnityEngine_AnimationState__set_time((UnityEngine_AnimationState_o *)Item, 0.0, 0LL);
        UnityEngine_Animation__Play_51249124((UnityEngine_Animation_o *)v28, name, 0LL);
        return;
      }
    }
LABEL_37:
    sub_B5D69C(Item, v25);
  }
  if ( !Component_WebViewObject )
    goto LABEL_37;
  Item = (UnityEngine_Transform_o *)SimpleAnimation__get_Item((SimpleAnimation_o *)Component_WebViewObject, name, 0LL);
  if ( !Item )
    goto LABEL_37;
  klass = Item->klass;
  v31 = Item;
  if ( *(_WORD *)&Item->klass->_2.bitflags1 )
  {
    v32 = 0LL;
    p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
    {
      ++v32;
      p_offset += 2;
      if ( v32 >= *(unsigned __int16 *)&Item->klass->_2.bitflags1 )
        goto LABEL_26;
    }
    v34 = (__int64)(&klass->vtable._4_GetEnumerator.method + 2 * *(_DWORD *)p_offset);
  }
  else
  {
LABEL_26:
    v34 = sub_AF54C0(Item, SimpleAnimation_State_TypeInfo, 4LL, v29);
  }
  (*(void (__fastcall **)(UnityEngine_Transform_o *, _QWORD, float))v34)(v31, *(_QWORD *)(v34 + 8), 0.0);
  SimpleAnimation__Play_16676044((SimpleAnimation_o *)Component_WebViewObject, name, 0LL);
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

  if ( (byte_42E9E62 & 1) == 0 )
  {
    sub_B5D5C4(&SeManager_TypeInfo, (_DWORD)prefab, seName, method);
    byte_42E9E62 = 1;
  }
  if ( (seName & 0x80000000) == 0 )
  {
    if ( (BYTE3(SeManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SeManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
    SeManager__PlayCommonSe(seName, 0LL);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B5D69C(0LL, v8);
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
        v6 = sub_B5D6C8(this);
        sub_B5D668(v6, 0LL);
      }
      this = (BattlePerformanceCommandCard_o *)selectedcomponents->m_Items[index];
      if ( this )
      {
        BattleCommandComponent__playAttackEffect((BattleCommandComponent_o *)this, flg, 0LL);
        return;
      }
LABEL_9:
      sub_B5D69C(this, index);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceCommandCard__playNobleCardEffect(
        BattlePerformanceCommandCard_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v3; // x3
  BattlePerformanceCommandCard_o *v5; // x20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  struct BattleCommandComponent_array *selectedcomponents; // x8
  struct BattleCommandComponent_array *v25; // x8
  UnityEngine_Object_o *v26; // x21
  struct BattleCommandComponent_array *v27; // x8
  UnityEngine_GameObject_o *gameObject; // x21
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  System_Object_array *v35; // x22
  System_Int32_array **v36; // x1
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  System_Int32_array **npTargetTr; // x23
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  System_Int32_array **v50; // x1
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  System_Int32_array **v57; // x23
  System_Collections_Hashtable_o *v58; // x0
  struct BattleCommandComponent_array *v59; // x8
  __int64 v60; // x0
  __int64 v61; // x0
  int v62; // [xsp+Ch] [xbp-34h] BYREF

  v5 = this;
  if ( (byte_42E9E69 & 1) == 0 )
  {
    sub_B5D5C4(&object___TypeInfo, index, (_DWORD)method, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&SeManager_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&float_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_22982/*"time"*/, v15, v16, v17);
    sub_B5D5C4(&StringLiteral_21800/*"position"*/, v18, v19, v20);
    this = (BattlePerformanceCommandCard_o *)sub_B5D5C4(&iTween_TypeInfo, v21, v22, v23);
    byte_42E9E69 = 1;
  }
  selectedcomponents = v5->fields.selectedcomponents;
  if ( !selectedcomponents )
    goto LABEL_43;
  if ( (index & 0x80000000) == 0 && (signed int)selectedcomponents->max_length > index )
  {
    if ( (BYTE3(SeManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SeManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
    SeManager__PlayCommonSe(14, 0LL);
    v25 = v5->fields.selectedcomponents;
    if ( !v25 )
      goto LABEL_43;
    if ( v25->max_length <= index )
      goto LABEL_44;
    v26 = (UnityEngine_Object_o *)v25->m_Items[index];
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    this = (BattlePerformanceCommandCard_o *)UnityEngine_Object__op_Inequality(v26, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v27 = v5->fields.selectedcomponents;
      if ( !v27 )
        goto LABEL_43;
      if ( v27->max_length <= index )
        goto LABEL_44;
      this = (BattlePerformanceCommandCard_o *)v27->m_Items[index];
      if ( !this )
        goto LABEL_43;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      this = (BattlePerformanceCommandCard_o *)sub_B5D5DC(object___TypeInfo, 4LL);
      if ( !this )
        goto LABEL_43;
      v35 = (System_Object_array *)this;
      this = (BattlePerformanceCommandCard_o *)StringLiteral_21800/*"position"*/;
      if ( StringLiteral_21800/*"position"*/ )
      {
        this = (BattlePerformanceCommandCard_o *)sub_B5D684(StringLiteral_21800/*"position"*/, v35->obj.klass->_1.element_class);
        if ( !this )
          goto LABEL_45;
        v36 = (System_Int32_array **)StringLiteral_21800/*"position"*/;
      }
      else
      {
        v36 = 0LL;
      }
      if ( !v35->max_length )
        goto LABEL_44;
      v35->m_Items[0] = (Il2CppObject *)v36;
      sub_B5D560((BattleServantConfConponent_o *)v35->m_Items, v36, v29, v30, v31, v32, v33, v34);
      npTargetTr = (System_Int32_array **)v5->fields.npTargetTr;
      if ( !npTargetTr
        || (this = (BattlePerformanceCommandCard_o *)sub_B5D684(v5->fields.npTargetTr, v35->obj.klass->_1.element_class)) != 0LL )
      {
        if ( v35->max_length <= 1 )
          goto LABEL_44;
        v35->m_Items[1] = (Il2CppObject *)npTargetTr;
        sub_B5D560((BattleServantConfConponent_o *)&v35->m_Items[1], npTargetTr, v37, v38, v39, v40, v41, v42);
        this = (BattlePerformanceCommandCard_o *)StringLiteral_22982/*"time"*/;
        if ( StringLiteral_22982/*"time"*/ )
        {
          this = (BattlePerformanceCommandCard_o *)sub_B5D684(StringLiteral_22982/*"time"*/, v35->obj.klass->_1.element_class);
          if ( !this )
            goto LABEL_45;
          v50 = (System_Int32_array **)StringLiteral_22982/*"time"*/;
        }
        else
        {
          v50 = 0LL;
        }
        if ( v35->max_length <= 2 )
          goto LABEL_44;
        v35->m_Items[2] = (Il2CppObject *)v50;
        sub_B5D560((BattleServantConfConponent_o *)&v35->m_Items[2], v50, v44, v45, v46, v47, v48, v49);
        v62 = 1056964608;
        this = (BattlePerformanceCommandCard_o *)j_il2cpp_value_box_0(float_TypeInfo, &v62);
        v57 = (System_Int32_array **)this;
        if ( !this
          || (this = (BattlePerformanceCommandCard_o *)sub_B5D684(this, v35->obj.klass->_1.element_class)) != 0LL )
        {
          if ( v35->max_length > 3 )
          {
            v35->m_Items[3] = (Il2CppObject *)v57;
            sub_B5D560((BattleServantConfConponent_o *)&v35->m_Items[3], v57, v51, v52, v53, v54, v55, v56);
            if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
            v58 = iTween__Hash(v35, 0LL);
            iTween__MoveTo_43183064(gameObject, v58, 0LL);
            v59 = v5->fields.selectedcomponents;
            if ( !v59 )
              goto LABEL_43;
            if ( v59->max_length > index )
            {
              this = (BattlePerformanceCommandCard_o *)v59->m_Items[index];
              if ( this )
              {
                BattleCommandComponent__playNpAttackEffect((BattleCommandComponent_o *)this, 0.5, 0LL);
                return;
              }
LABEL_43:
              sub_B5D69C(this, *(_QWORD *)&index);
            }
          }
LABEL_44:
          v60 = sub_B5D6C8(this);
          sub_B5D668(v60, 0LL);
        }
      }
LABEL_45:
      v61 = sub_B5D6BC(this);
      sub_B5D668(v61, 0LL);
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
    sub_B5D69C(this, flg);
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
      v8 = sub_B5D6C8(this);
      sub_B5D668(v8, 0LL);
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  BattleCommandComponent_o *Bdata; // x0
  __int64 v16; // x1
  signed int max_length; // w9
  signed int v18; // w8
  __int64 v19; // x24
  Il2CppClass **v20; // x25
  Il2CppClass *v21; // x8
  BattleCommandData_o **v22; // x25
  Il2CppClass *v23; // t1
  struct UnityEngine_Transform_array *commandTransformArray; // x8
  UnityEngine_Transform_o *v25; // x22
  BattleServantData_o *v26; // x21
  int v27; // s0
  struct UnityEngine_Transform_array *v30; // x8
  UnityEngine_Transform_o *v31; // x22
  int v32; // s0
  struct BattleCommandComponent_array *commandCompArray; // x8
  struct BattleCommandComponent_array *v36; // x8
  struct BattleCommandComponent_array *v37; // x8
  struct UnityEngine_GameObject_array *p_commandlist; // x8
  UIWidget_o *Component_srcLineSprite; // x21
  int v40; // s0
  struct UnityEngine_GameObject_array *v44; // x8
  __int64 v45; // x22
  __int64 v46; // x9
  il2cpp_array_size_t v47; // w20
  struct BattleCommandComponent_array *v48; // x8
  struct UnityEngine_GameObject_array *v49; // x8
  UnityEngine_Object_o *v50; // x20
  UnityEngine_Object_o *v51; // x20
  struct BattleCommandComponent_array *v52; // x8
  UnityEngine_Object_o *v53; // x20
  struct BattleCommandComponent_array *v54; // x8
  __int64 v55; // x0

  if ( (byte_42E9E45 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_UITweener___, (_DWORD)list, (_DWORD)method, v3);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_UIWidget___, v6, v7, v8);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_16544/*"anim_wait"*/, v12, v13, v14);
    byte_42E9E45 = 1;
  }
  BattlePerformanceCommandCard__playAnimation(this, (System_String_o *)StringLiteral_16544/*"anim_wait"*/, method);
  if ( !list )
    goto LABEL_67;
  max_length = list->max_length;
  if ( max_length >= 1 )
  {
    v18 = 0;
    while ( v18 < (unsigned int)max_length )
    {
      v19 = v18;
      v20 = &list->obj.klass + v18;
      Bdata = (BattleCommandComponent_o *)this->fields.Bdata;
      v23 = v20[4];
      v22 = (BattleCommandData_o **)(v20 + 4);
      v21 = v23;
      if ( !v23 )
        goto LABEL_67;
      if ( !Bdata )
        goto LABEL_67;
      Bdata = (BattleCommandComponent_o *)BattleData__getServantData((BattleData_o *)Bdata, v21->_1.byval_arg.bits, 0LL);
      commandTransformArray = this->fields.commandTransformArray;
      if ( !commandTransformArray )
        goto LABEL_67;
      if ( (unsigned int)v19 >= commandTransformArray->max_length )
        break;
      v25 = commandTransformArray->m_Items[v19];
      v26 = (BattleServantData_o *)Bdata;
      *(UnityEngine_Vector3_o *)&v27 = UnityEngine_Vector3__get_zero(0LL);
      if ( !v25 )
        goto LABEL_67;
      UnityEngine_Transform__set_localPosition(v25, *(UnityEngine_Vector3_o *)&v27, 0LL);
      v30 = this->fields.commandTransformArray;
      if ( !v30 )
        goto LABEL_67;
      if ( (unsigned int)v19 >= v30->max_length )
        break;
      v31 = v30->m_Items[v19];
      *(UnityEngine_Vector3_o *)&v32 = UnityEngine_Vector3__get_zero(0LL);
      if ( !v31 )
        goto LABEL_67;
      UnityEngine_Transform__set_localScale(v31, *(UnityEngine_Vector3_o *)&v32, 0LL);
      commandCompArray = this->fields.commandCompArray;
      if ( !commandCompArray )
        goto LABEL_67;
      if ( (unsigned int)v19 >= commandCompArray->max_length || (unsigned int)v19 >= list->max_length )
        break;
      Bdata = commandCompArray->m_Items[v19];
      if ( !Bdata )
        goto LABEL_67;
      BattleCommandComponent__setData(Bdata, *v22, v26, 0, 1, 0, 0LL);
      v36 = this->fields.commandCompArray;
      if ( !v36 )
        goto LABEL_67;
      if ( (unsigned int)v19 >= v36->max_length )
        break;
      Bdata = v36->m_Items[v19];
      if ( !Bdata )
        goto LABEL_67;
      BattleCommandComponent__SetPowerUpCardValue(Bdata, 0, 0LL);
      v37 = this->fields.commandCompArray;
      if ( !v37 )
        goto LABEL_67;
      if ( (unsigned int)v19 >= v37->max_length || (unsigned int)v19 >= list->max_length )
        break;
      if ( !*v22 )
        goto LABEL_67;
      Bdata = v37->m_Items[v19];
      if ( !Bdata )
        goto LABEL_67;
      BattleCommandComponent__SetPowerUpCardIcon(Bdata, (*v22)->fields.commandCardParam, 2, 0, 0LL);
      p_commandlist = this->fields.p_commandlist;
      if ( !p_commandlist )
        goto LABEL_67;
      if ( (unsigned int)v19 >= p_commandlist->max_length )
        break;
      Bdata = (BattleCommandComponent_o *)p_commandlist->m_Items[v19];
      if ( !Bdata )
        goto LABEL_67;
      Component_srcLineSprite = (UIWidget_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                (UnityEngine_GameObject_o *)Bdata,
                                                (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
      *(UnityEngine_Color_o *)&v40 = UnityEngine_Color__get_white(0LL);
      if ( !Component_srcLineSprite )
        goto LABEL_67;
      UIWidget__set_color(Component_srcLineSprite, *(UnityEngine_Color_o *)&v40, 0LL);
      max_length = list->max_length;
      v18 = v19 + 1;
      if ( (int)v19 + 1 >= max_length )
        goto LABEL_32;
    }
LABEL_68:
    v55 = sub_B5D6C8(Bdata);
    sub_B5D668(v55, 0LL);
  }
LABEL_32:
  v44 = this->fields.p_commandlist;
  if ( !v44 )
    goto LABEL_67;
  v45 = 4LL;
  while ( 1 )
  {
    v46 = *(_QWORD *)&v44->max_length;
    v47 = v45 - 4;
    if ( (int)v45 - 4 >= (int)v46 )
      break;
    v48 = this->fields.commandCompArray;
    if ( !v48 )
      goto LABEL_67;
    if ( v47 >= v48->max_length )
      goto LABEL_68;
    Bdata = (BattleCommandComponent_o *)*((_QWORD *)&v48->obj.klass + v45);
    if ( Bdata )
    {
      BattleCommandComponent__setTouchFlg(Bdata, 0, 0LL);
      v49 = this->fields.p_commandlist;
      if ( v49 )
      {
        if ( v47 >= v49->max_length )
          goto LABEL_68;
        Bdata = (BattleCommandComponent_o *)*((_QWORD *)&v49->obj.klass + v45);
        if ( Bdata )
        {
          v50 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                          (UnityEngine_GameObject_o *)Bdata,
                                          (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UITweener___);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          Bdata = (BattleCommandComponent_o *)UnityEngine_Object__op_Inequality(v50, 0LL, 0LL);
          if ( ((unsigned __int8)Bdata & 1) != 0 )
          {
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            UnityEngine_Object__Destroy_35620236(v50, 0LL);
          }
          v44 = this->fields.p_commandlist;
          ++v45;
          if ( v44 )
            continue;
        }
      }
    }
    goto LABEL_67;
  }
  if ( (unsigned int)v46 <= 8 )
    goto LABEL_68;
  v51 = (UnityEngine_Object_o *)v44->m_Items[8];
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  Bdata = (BattleCommandComponent_o *)UnityEngine_Object__op_Inequality(v51, 0LL, 0LL);
  if ( ((unsigned __int8)Bdata & 1) != 0 )
  {
    v52 = this->fields.commandCompArray;
    if ( !v52 )
      goto LABEL_67;
    if ( v52->max_length <= 8 )
      goto LABEL_68;
    v53 = (UnityEngine_Object_o *)v52->m_Items[8];
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    Bdata = (BattleCommandComponent_o *)UnityEngine_Object__op_Inequality(v53, 0LL, 0LL);
    if ( ((unsigned __int8)Bdata & 1) != 0 )
    {
      v54 = this->fields.commandCompArray;
      if ( v54 )
      {
        if ( v54->max_length <= 8 )
          goto LABEL_68;
        Bdata = v54->m_Items[8];
        if ( Bdata )
        {
          BattleCommandComponent__setData(Bdata, 0LL, 0LL, 0, 1, 0, 0LL);
          return;
        }
      }
LABEL_67:
      sub_B5D69C(Bdata, v16);
    }
  }
}


void __fastcall BattlePerformanceCommandCard__resetCommandCard(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_GameObject_o *Component_srcLineSprite; // x0
  __int64 v9; // x1
  struct UnityEngine_GameObject_array *p_commandlist; // x8
  __int64 v11; // x20
  int max_length; // w9
  il2cpp_array_size_t v13; // w22
  struct UnityEngine_GameObject_array *v14; // x8
  __int64 v15; // x0

  if ( (byte_42E9E47 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_BattleCommandComponent___, (_DWORD)method, (_DWORD)v2, v3);
    sub_B5D5C4(&StringLiteral_16544/*"anim_wait"*/, v5, v6, v7);
    byte_42E9E47 = 1;
  }
  BattlePerformanceCommandCard__playAnimation(this, (System_String_o *)StringLiteral_16544/*"anim_wait"*/, v2);
  p_commandlist = this->fields.p_commandlist;
  if ( !p_commandlist )
LABEL_14:
    sub_B5D69C(Component_srcLineSprite, v9);
  v11 = 9LL;
  while ( 1 )
  {
    max_length = p_commandlist->max_length;
    v13 = v11 - 4;
    if ( (int)v11 - 4 >= max_length )
      break;
    if ( v13 >= max_length )
      goto LABEL_16;
    Component_srcLineSprite = (UnityEngine_GameObject_o *)*((_QWORD *)&p_commandlist->obj.klass + v11);
    if ( Component_srcLineSprite )
    {
      Component_srcLineSprite = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                              Component_srcLineSprite,
                                                              (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_BattleCommandComponent___);
      if ( Component_srcLineSprite )
      {
        BattleCommandComponent__setTouchFlg((BattleCommandComponent_o *)Component_srcLineSprite, 0, 0LL);
        v14 = this->fields.p_commandlist;
        if ( v14 )
        {
          if ( v13 >= v14->max_length )
          {
LABEL_16:
            v15 = sub_B5D6C8(Component_srcLineSprite);
            sub_B5D668(v15, 0LL);
          }
          Component_srcLineSprite = (UnityEngine_GameObject_o *)*((_QWORD *)&v14->obj.klass + v11);
          if ( Component_srcLineSprite )
          {
            Component_srcLineSprite = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                    Component_srcLineSprite,
                                                                    (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_BattleCommandComponent___);
            if ( Component_srcLineSprite )
            {
              BattleCommandComponent__initView((BattleCommandComponent_o *)Component_srcLineSprite, 0LL);
              p_commandlist = this->fields.p_commandlist;
              ++v11;
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
  int v2; // w2
  __int64 v3; // x3
  BattlePerformanceCommandCard_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct BattleCommandComponent_array *commandCompArray; // x8
  __int64 v9; // x21
  int max_length; // w9
  BattleCommandComponent_o *v11; // x20
  int v12; // w20
  __int64 v13; // x0

  v4 = this;
  if ( (byte_42E9E81 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_20637/*"markindex"*/, (_DWORD)method, v2, v3);
    this = (BattlePerformanceCommandCard_o *)sub_B5D5C4(&StringLiteral_11750/*"SELECTCARD"*/, v5, v6, v7);
    byte_42E9E81 = 1;
  }
  commandCompArray = v4->fields.commandCompArray;
  if ( !commandCompArray )
    goto LABEL_12;
  v9 = 0LL;
  while ( 1 )
  {
    max_length = commandCompArray->max_length;
    if ( (int)v9 >= max_length )
      return;
    if ( (unsigned int)v9 >= max_length )
    {
      v13 = sub_B5D6C8(this);
      sub_B5D668(v13, 0LL);
    }
    v11 = commandCompArray->m_Items[v9];
    if ( !v11 )
      goto LABEL_12;
    if ( !v11->fields.selectflg )
      break;
LABEL_11:
    ++v9;
    if ( !commandCompArray )
      goto LABEL_12;
  }
  this = (BattlePerformanceCommandCard_o *)BattleCommandComponent__getMarkIndex(v11, 0LL);
  if ( ((unsigned int)this & 0x80000000) != 0 )
  {
    commandCompArray = v4->fields.commandCompArray;
    goto LABEL_11;
  }
  this = (BattlePerformanceCommandCard_o *)BattleCommandComponent__getMarkIndex(v11, 0LL);
  if ( !v4->fields.commandfsm
    || (v12 = (int)this,
        (this = (BattlePerformanceCommandCard_o *)PlayMakerFSM__get_Fsm(v4->fields.commandfsm, 0LL)) == 0LL)
    || (this = (BattlePerformanceCommandCard_o *)this->fields.firstbonus_q) == 0LL
    || (this = (BattlePerformanceCommandCard_o *)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                                   (HutongGames_PlayMaker_FsmVariables_o *)this,
                                                   (System_String_o *)StringLiteral_20637/*"markindex"*/,
                                                   0LL)) == 0LL
    || (LODWORD(this->fields.commandprefab) = v12,
        (this = (BattlePerformanceCommandCard_o *)v4->fields.commandfsm) == 0LL) )
  {
LABEL_12:
    sub_B5D69C(this, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_11750/*"SELECTCARD"*/, 0LL);
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
    sub_B5D69C(v5, v6);
  perf->fields.istactical = atcount == 3;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceCommandCard__selectOK(
        BattlePerformanceCommandCard_o *this,
        int32_t markindex,
        const MethodInfo *method)
{
  __int64 v3; // x3
  BattlePerformanceCommandCard_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  struct BattleCommandComponent_array *commandCompArray; // x8
  int v49; // w22
  __int64 v50; // x9
  Il2CppClass **v51; // x8
  BattleCommandComponent_o *v52; // x21
  const MethodInfo *v53; // x3
  struct System_Int32_array *selectcommand; // x10
  int max_length; // w11
  int32_t v56; // w12
  __int64 *v57; // x8
  signed int v58; // w10
  __int64 v59; // x28
  Il2CppClass **v60; // x8
  BattleCommandComponent_o *v61; // x21
  struct BattleCommandComponent_array *selectedcomponents; // x22
  __int64 v63; // x23
  System_String_array **v64; // x2
  System_String_array **v65; // x3
  System_Boolean_array **v66; // x4
  System_Int32_array **v67; // x5
  System_Int32_array *v68; // x6
  System_Int32_array *v69; // x7
  Il2CppClass **v70; // x0
  struct UnityEngine_GameObject_o *firstbonus_q; // x22
  System_String_o *v72; // x0
  struct UnityEngine_GameObject_array *p_commandlist; // x8
  struct UnityEngine_GameObject_array *v74; // x8
  UnityEngine_GameObject_o *v75; // x22
  System_String_array **v76; // x2
  System_String_array **v77; // x3
  System_Boolean_array **v78; // x4
  System_Int32_array **v79; // x5
  System_Int32_array *v80; // x6
  System_Int32_array *v81; // x7
  BattlePerformanceCommandCard_o *v82; // x23
  System_Int32_array **v83; // x1
  System_String_array **v84; // x2
  System_String_array **v85; // x3
  System_Boolean_array **v86; // x4
  System_Int32_array **v87; // x5
  System_Int32_array *v88; // x6
  System_Int32_array *v89; // x7
  System_Int32_array **v90; // x24
  System_String_array **v91; // x2
  System_String_array **v92; // x3
  System_Boolean_array **v93; // x4
  System_Int32_array **v94; // x5
  System_Int32_array *v95; // x6
  System_Int32_array *v96; // x7
  System_Int32_array **v97; // x1
  System_String_array **v98; // x2
  System_String_array **v99; // x3
  System_Boolean_array **v100; // x4
  System_Int32_array **v101; // x5
  System_Int32_array *v102; // x6
  System_Int32_array *v103; // x7
  System_Int32_array **v104; // x24
  System_String_array **v105; // x2
  System_String_array **v106; // x3
  System_Boolean_array **v107; // x4
  System_Int32_array **v108; // x5
  System_Int32_array *v109; // x6
  System_Int32_array *v110; // x7
  System_Int32_array **v111; // x1
  System_String_array **v112; // x2
  System_String_array **v113; // x3
  System_Boolean_array **v114; // x4
  System_Int32_array **v115; // x5
  System_Int32_array *v116; // x6
  System_Int32_array *v117; // x7
  System_Int32_array **v118; // x24
  System_Collections_Hashtable_o *v119; // x0
  float v120; // s10
  struct UnityEngine_Transform_array *commandTransformArray; // x8
  const MethodInfo *v122; // x3
  int v123; // s0
  struct System_Single_array *COMMAND_STAMP_POS_X; // x8
  int32_t v127; // w1
  const MethodInfo *v128; // x2
  int32_t CommandType; // w0
  const MethodInfo *v130; // x2
  System_Collections_IEnumerator_o *started; // x0
  const MethodInfo *v132; // x1
  int32_t drawcount; // w9
  int32_t maxdrawcount; // w8
  int32_t v135; // w9
  struct System_Int32_array *v136; // x8
  System_Action_o *v137; // x20
  __int64 v138; // x0
  __int64 v139; // x0
  char v140[4]; // [xsp+8h] [xbp-78h] BYREF
  int v141; // [xsp+Ch] [xbp-74h] BYREF
  int v142; // [xsp+18h] [xbp-68h] BYREF
  int32_t targetIndex; // [xsp+1Ch] [xbp-64h] BYREF

  v5 = this;
  if ( (byte_42E9E52 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, markindex, (_DWORD)method, v3);
    sub_B5D5C4(&Method_BattlePerformanceCommandCard__selectOK_b__112_0__, v6, v7, v8);
    sub_B5D5C4(&bool_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&FSUtility_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&int_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&object___TypeInfo, v18, v19, v20);
    sub_B5D5C4(&float_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&StringLiteral_4677/*"DISSELECT"*/, v24, v25, v26);
    sub_B5D5C4(&StringLiteral_11749/*"SELECT"*/, v27, v28, v29);
    sub_B5D5C4(&StringLiteral_2976/*"CANCEL"*/, v30, v31, v32);
    sub_B5D5C4(&StringLiteral_22982/*"time"*/, v33, v34, v35);
    sub_B5D5C4(&StringLiteral_9870/*"OPEN_SEALED"*/, v36, v37, v38);
    sub_B5D5C4(&StringLiteral_23719/*"y"*/, v39, v40, v41);
    sub_B5D5C4(&StringLiteral_20221/*"islocal"*/, v42, v43, v44);
    this = (BattlePerformanceCommandCard_o *)sub_B5D5C4(&iTween_TypeInfo, v45, v46, v47);
    byte_42E9E52 = 1;
  }
  targetIndex = 0;
  commandCompArray = v5->fields.commandCompArray;
  if ( !commandCompArray )
    goto LABEL_11;
  v49 = 0;
  while ( 1 )
  {
    v50 = *(_QWORD *)&commandCompArray->max_length;
    if ( v49 >= (int)v50 )
      break;
    if ( v49 >= (unsigned int)v50 )
      goto LABEL_105;
    v51 = &commandCompArray->obj.klass + v49;
    v52 = (BattleCommandComponent_o *)v51[4];
    if ( !v52 )
      goto LABEL_11;
    this = (BattlePerformanceCommandCard_o *)BattleCommandComponent__checkMark(
                                               (BattleCommandComponent_o *)v51[4],
                                               markindex,
                                               0LL);
    if ( ((unsigned __int8)this & 1) != 0 && v52->fields.selectflg )
    {
      BattlePerformanceCommandCard__unselectCommandCard(v5, v52, markindex, v53);
      this = (BattlePerformanceCommandCard_o *)v5->fields.commandfsm;
      if ( this )
      {
        v57 = &StringLiteral_2976/*"CANCEL"*/;
        goto LABEL_103;
      }
      goto LABEL_11;
    }
    commandCompArray = v5->fields.commandCompArray;
    ++v49;
    if ( !commandCompArray )
      goto LABEL_11;
  }
  if ( v5->fields.maxdrawcount <= v5->fields.drawcount )
  {
    this = (BattlePerformanceCommandCard_o *)v5->fields.commandfsm;
    if ( this )
    {
      v57 = &StringLiteral_4677/*"DISSELECT"*/;
LABEL_103:
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)*v57, 0LL);
      return;
    }
    goto LABEL_11;
  }
  targetIndex = -1;
  selectcommand = v5->fields.selectcommand;
  if ( !selectcommand )
    goto LABEL_11;
  max_length = selectcommand->max_length;
  if ( max_length >= 1 )
  {
    v56 = 0;
    while ( 1 )
    {
      if ( v56 >= (unsigned int)max_length )
        goto LABEL_105;
      if ( selectcommand->m_Items[v56 + 1] == -1 )
        break;
      if ( ++v56 >= max_length )
        goto LABEL_25;
    }
    targetIndex = v56;
  }
LABEL_25:
  if ( (int)v50 < 1 )
  {
LABEL_95:
    drawcount = v5->fields.drawcount;
    maxdrawcount = v5->fields.maxdrawcount;
    if ( drawcount < maxdrawcount )
    {
      v135 = drawcount + 1;
      v5->fields.drawcount = v135;
      BattlePerformanceCommandCard__selectCommandCard(v5, maxdrawcount - v135, method);
      v136 = v5->fields.selectcommand;
      if ( !v136 )
        goto LABEL_11;
      if ( targetIndex >= v136->max_length )
      {
LABEL_105:
        v138 = sub_B5D6C8(this);
        sub_B5D668(v138, 0LL);
      }
      v136->m_Items[targetIndex + 1] = markindex;
    }
    this = (BattlePerformanceCommandCard_o *)v5->fields.commandfsm;
    if ( this )
    {
      v57 = &StringLiteral_11749/*"SELECT"*/;
      goto LABEL_103;
    }
LABEL_11:
    sub_B5D69C(this, *(_QWORD *)&markindex);
  }
  v58 = 0;
  while ( 1 )
  {
    if ( v58 >= (unsigned int)v50 )
      goto LABEL_105;
    v59 = v58;
    v60 = &commandCompArray->obj.klass + v58;
    v61 = (BattleCommandComponent_o *)v60[4];
    if ( !v61 )
      goto LABEL_11;
    this = (BattlePerformanceCommandCard_o *)BattleCommandComponent__checkMark(
                                               (BattleCommandComponent_o *)v60[4],
                                               markindex,
                                               0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
      break;
LABEL_93:
    commandCompArray = v5->fields.commandCompArray;
    if ( !commandCompArray )
      goto LABEL_11;
    LODWORD(v50) = commandCompArray->max_length;
    v58 = v59 + 1;
    if ( (int)v59 + 1 >= (int)v50 )
      goto LABEL_95;
  }
  if ( BattleCommandComponent__get_isSealed(v61, 0LL)
    || BattleCommandComponent__isTreasureDvc(v61, 0LL) && BattleCommandComponent__get_isKindOfDontAction(v61, 0LL) )
  {
    this = (BattlePerformanceCommandCard_o *)v5->fields.commandfsm;
    if ( this )
    {
      v57 = &StringLiteral_9870/*"OPEN_SEALED"*/;
      goto LABEL_103;
    }
    goto LABEL_11;
  }
  this = (BattlePerformanceCommandCard_o *)BattleCommandComponent__isTreasureDvc(v61, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
    goto LABEL_36;
  this = (BattlePerformanceCommandCard_o *)BattleCommandComponent__get_SealStatus(v61, 0LL);
  if ( !this )
    goto LABEL_11;
  this = (BattlePerformanceCommandCard_o *)BattleCommandSealStatus__get_IsTreasureDeviceError(
                                             (BattleCommandSealStatus_o *)this,
                                             0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
LABEL_36:
    v61->fields.selectflg = 1;
    selectedcomponents = v5->fields.selectedcomponents;
    if ( !selectedcomponents )
      goto LABEL_11;
    v63 = targetIndex;
    this = (BattlePerformanceCommandCard_o *)sub_B5D684(v61, selectedcomponents->obj.klass->_1.element_class);
    if ( !this )
    {
LABEL_106:
      v139 = sub_B5D6BC(this);
      sub_B5D668(v139, 0LL);
    }
    if ( (unsigned int)v63 >= selectedcomponents->max_length )
      goto LABEL_105;
    v70 = &selectedcomponents->obj.klass + v63;
    v70[4] = (Il2CppClass *)v61;
    sub_B5D560((BattleServantConfConponent_o *)(v70 + 4), (System_Int32_array **)v61, v64, v65, v66, v67, v68, v69);
    this = (BattlePerformanceCommandCard_o *)v5->fields.commandfsm;
    if ( !this )
      goto LABEL_11;
    this = (BattlePerformanceCommandCard_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)this, 0LL);
    if ( !this )
      goto LABEL_11;
    firstbonus_q = this->fields.firstbonus_q;
    v72 = System_Int32__ToString((int32_t)&targetIndex, 0LL);
    this = (BattlePerformanceCommandCard_o *)System_String__Concat_44577788(
                                               (System_String_o *)StringLiteral_11749/*"SELECT"*/,
                                               v72,
                                               0LL);
    if ( !firstbonus_q )
      goto LABEL_11;
    this = (BattlePerformanceCommandCard_o *)HutongGames_PlayMaker_FsmVariables__GetFsmGameObject(
                                               (HutongGames_PlayMaker_FsmVariables_o *)firstbonus_q,
                                               (System_String_o *)this,
                                               0LL);
    p_commandlist = v5->fields.p_commandlist;
    if ( !p_commandlist )
      goto LABEL_11;
    if ( (unsigned int)v59 >= p_commandlist->max_length )
      goto LABEL_105;
    if ( !this )
      goto LABEL_11;
    HutongGames_PlayMaker_FsmGameObject__set_Value(
      (HutongGames_PlayMaker_FsmGameObject_o *)this,
      p_commandlist->m_Items[v59],
      0LL);
    v74 = v5->fields.p_commandlist;
    if ( !v74 )
      goto LABEL_11;
    if ( (unsigned int)v59 >= v74->max_length )
      goto LABEL_105;
    v75 = v74->m_Items[v59];
    this = (BattlePerformanceCommandCard_o *)sub_B5D5DC(object___TypeInfo, 6LL);
    if ( !this )
      goto LABEL_11;
    v82 = this;
    this = (BattlePerformanceCommandCard_o *)StringLiteral_23719/*"y"*/;
    if ( StringLiteral_23719/*"y"*/ )
    {
      this = (BattlePerformanceCommandCard_o *)sub_B5D684(StringLiteral_23719/*"y"*/, v82->klass->_1.element_class);
      if ( !this )
        goto LABEL_106;
      v83 = (System_Int32_array **)StringLiteral_23719/*"y"*/;
    }
    else
    {
      v83 = 0LL;
    }
    if ( !LODWORD(v82->fields.COMMAND_STAMP_POS_X) )
      goto LABEL_105;
    *(_QWORD *)&v82->fields.COMMAND_STAMP_POS_Y = v83;
    sub_B5D560((BattleServantConfConponent_o *)&v82->fields.COMMAND_STAMP_POS_Y, v83, v76, v77, v78, v79, v80, v81);
    v142 = 20;
    this = (BattlePerformanceCommandCard_o *)j_il2cpp_value_box_0(int_TypeInfo, &v142);
    v90 = (System_Int32_array **)this;
    if ( this )
    {
      this = (BattlePerformanceCommandCard_o *)sub_B5D684(this, v82->klass->_1.element_class);
      if ( !this )
        goto LABEL_106;
    }
    if ( LODWORD(v82->fields.COMMAND_STAMP_POS_X) <= 1 )
      goto LABEL_105;
    *(_QWORD *)&v82->fields.CARD_ROOT_BASE_X = v90;
    sub_B5D560((BattleServantConfConponent_o *)&v82->fields.CARD_ROOT_BASE_X, v90, v84, v85, v86, v87, v88, v89);
    this = (BattlePerformanceCommandCard_o *)StringLiteral_22982/*"time"*/;
    if ( StringLiteral_22982/*"time"*/ )
    {
      this = (BattlePerformanceCommandCard_o *)sub_B5D684(StringLiteral_22982/*"time"*/, v82->klass->_1.element_class);
      if ( !this )
        goto LABEL_106;
      v97 = (System_Int32_array **)StringLiteral_22982/*"time"*/;
    }
    else
    {
      v97 = 0LL;
    }
    if ( LODWORD(v82->fields.COMMAND_STAMP_POS_X) <= 2 )
      goto LABEL_105;
    v82->fields.commandfsm = (struct PlayMakerFSM_o *)v97;
    sub_B5D560((BattleServantConfConponent_o *)&v82->fields.commandfsm, v97, v91, v92, v93, v94, v95, v96);
    v141 = 1045220557;
    this = (BattlePerformanceCommandCard_o *)j_il2cpp_value_box_0(float_TypeInfo, &v141);
    v104 = (System_Int32_array **)this;
    if ( this )
    {
      this = (BattlePerformanceCommandCard_o *)sub_B5D684(this, v82->klass->_1.element_class);
      if ( !this )
        goto LABEL_106;
    }
    if ( LODWORD(v82->fields.COMMAND_STAMP_POS_X) <= 3 )
      goto LABEL_105;
    v82->fields.commandprefab = (struct UnityEngine_GameObject_o *)v104;
    sub_B5D560((BattleServantConfConponent_o *)&v82->fields.commandprefab, v104, v98, v99, v100, v101, v102, v103);
    this = (BattlePerformanceCommandCard_o *)StringLiteral_20221/*"islocal"*/;
    if ( StringLiteral_20221/*"islocal"*/ )
    {
      this = (BattlePerformanceCommandCard_o *)sub_B5D684(StringLiteral_20221/*"islocal"*/, v82->klass->_1.element_class);
      if ( !this )
        goto LABEL_106;
      v111 = (System_Int32_array **)StringLiteral_20221/*"islocal"*/;
    }
    else
    {
      v111 = 0LL;
    }
    if ( LODWORD(v82->fields.COMMAND_STAMP_POS_X) <= 4 )
      goto LABEL_105;
    v82->fields.selectCommandPrefab = (struct UnityEngine_GameObject_o *)v111;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v82->fields.selectCommandPrefab,
      v111,
      v105,
      v106,
      v107,
      v108,
      v109,
      v110);
    v140[0] = 1;
    this = (BattlePerformanceCommandCard_o *)j_il2cpp_value_box_0(bool_TypeInfo, v140);
    v118 = (System_Int32_array **)this;
    if ( this )
    {
      this = (BattlePerformanceCommandCard_o *)sub_B5D684(this, v82->klass->_1.element_class);
      if ( !this )
        goto LABEL_106;
    }
    if ( LODWORD(v82->fields.COMMAND_STAMP_POS_X) <= 5 )
      goto LABEL_105;
    v82->fields.commandrootTransform = (struct UnityEngine_Transform_o *)v118;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v82->fields.commandrootTransform,
      v118,
      v112,
      v113,
      v114,
      v115,
      v116,
      v117);
    if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
    v119 = iTween__Hash((System_Object_array *)v82, 0LL);
    iTween__MoveTo_43183064(v75, v119, 0LL);
    BattleCommandComponent__stopAnimation(v61, 0LL);
    BattleCommandComponent__selectCard(v61, targetIndex, 0LL);
    if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
    this = (BattlePerformanceCommandCard_o *)FSUtility__IsUnderVista(0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
      v120 = 0.0;
    else
      v120 = 17.0;
    if ( (unsigned int)v59 <= 4 )
    {
      this = (BattlePerformanceCommandCard_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v5, 0LL);
      COMMAND_STAMP_POS_X = v5->fields.COMMAND_STAMP_POS_X;
      if ( !COMMAND_STAMP_POS_X )
        goto LABEL_11;
      if ( (unsigned int)v59 >= COMMAND_STAMP_POS_X->max_length )
        goto LABEL_105;
      if ( !this )
        goto LABEL_11;
      *(UnityEngine_Vector3_o *)&v123 = UnityEngine_Transform__TransformPoint_35744104(
                                          (UnityEngine_Transform_o *)this,
                                          COMMAND_STAMP_POS_X->m_Items[v59 + 1],
                                          v120 + v5->fields.COMMAND_STAMP_POS_Y,
                                          v5->fields.COMMAND_STAMP_POS_Z,
                                          0LL);
    }
    else
    {
      commandTransformArray = v5->fields.commandTransformArray;
      if ( !commandTransformArray )
        goto LABEL_11;
      if ( (unsigned int)v59 >= commandTransformArray->max_length )
        goto LABEL_105;
      this = (BattlePerformanceCommandCard_o *)commandTransformArray->m_Items[v59];
      if ( !this )
        goto LABEL_11;
      *(UnityEngine_Vector3_o *)&v123 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)this, 0LL);
    }
    BattlePerformanceCommandCard__SetSelectStamp(v5, targetIndex, *(UnityEngine_Vector3_o *)&v123, v61, v122);
    if ( !targetIndex )
    {
      CommandType = BattleCommandComponent__getCommandType(v61, 0LL);
      started = BattlePerformanceCommandCard__coStartFirstBonus(v5, CommandType, v130);
      UnityEngine_MonoBehaviour__StartCoroutine_35615088((UnityEngine_MonoBehaviour_o *)v5, started, 0LL);
    }
    BattlePerformanceCommandCard__checkChainBonus(v5, v127, v128);
    BattlePerformanceCommandCard__checkMaskEnemy(v5, v132);
    goto LABEL_93;
  }
  v137 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v137, (Il2CppObject *)v5, Method_BattlePerformanceCommandCard__selectOK_b__112_0__, 0LL);
  BattleCommandComponent__PlayTDErrorAnimation(v61, v137, 0LL);
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
  sub_B5D560(
    (BattleServantConfConponent_o *)prefab,
    0LL,
    (System_String_array **)prefab,
    (System_String_array **)seName,
    (System_Boolean_array **)method,
    v5,
    v6,
    v7);
  if ( !combo )
    sub_B5D69C(v12, v13);
  if ( combo->fields.chainError )
  {
    *seName = 27;
    cutin_ordererror = this->fields.cutin_ordererror;
LABEL_4:
    *prefab = cutin_ordererror;
    sub_B5D560(
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
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  struct BattleCommandData_array **p_commandlist; // x21
  __int64 ServantNumber; // x0
  BattleCommandData_o *v25; // x1
  struct BattleCommandData_array *commandlist; // x8
  unsigned __int64 v27; // x9
  unsigned __int64 max_length; // x10
  BattleCommandData_o *v29; // x10
  struct BattleCommandComponent_array *commandCompArray; // x8
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  struct BattleCommandComponent_array *v37; // x8
  _DWORD *v38; // x22
  unsigned int v39; // w25
  __int64 v40; // x26
  unsigned int v41; // w9
  System_Int32_array **v42; // x24
  __int64 *v43; // x23
  struct UnityEngine_Transform_array *commandTransformArray; // x8
  UnityEngine_Transform_o *v45; // x24
  int v46; // s0
  struct UnityEngine_Transform_array *v49; // x8
  UnityEngine_Transform_o *v50; // x24
  int v51; // s0
  UnityEngine_GameObject_o *gameObject; // x23
  struct BattleCommandData_array *v55; // x8
  __int64 v56; // x25
  unsigned int v57; // w28
  struct UnityEngine_Transform_array *v58; // x8
  UnityEngine_Transform_o *v59; // x23
  int v60; // s0
  struct UnityEngine_Transform_array *v63; // x8
  UnityEngine_Transform_o *v64; // x23
  int v65; // s0
  struct UnityEngine_GameObject_array *v68; // x8
  il2cpp_array_size_t v69; // w19
  System_String_array **v70; // x2
  System_String_array **v71; // x3
  System_Boolean_array **v72; // x4
  System_Int32_array **v73; // x5
  System_Int32_array *v74; // x6
  System_Int32_array *v75; // x7
  System_Int32_array **v76; // x24
  _DWORD *v77; // x23
  BattleServantConfConponent_o *v78; // x23
  struct BattleCommandData_array *v79; // x8
  BattleCommandData_o *v80; // x24
  BattleCommandComponent_o *klass; // x23
  struct UnityEngine_GameObject_array *v82; // x8
  UIWidget_o *Component_srcLineSprite; // x23
  float v84; // s4
  float v85; // s5
  float v86; // s6
  float v87; // s7
  struct System_Int32_array *selectcommand; // x9
  int32_t klass_high; // w22
  unsigned __int64 v90; // x8
  unsigned __int64 v91; // x11
  struct BattleCommandComponent_array *selectedcomponents; // x8
  unsigned __int64 v93; // x19
  __int64 v94; // x21
  unsigned __int64 v95; // x9
  WebViewObject_o *Component_WebViewObject; // x21
  int v97; // s0
  __int64 v101; // x0
  __int64 v102; // x0
  MethodInfo v103; // [xsp+0h] [xbp-70h] BYREF
  UnityEngine_Color_o v104; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v105; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42E9E4C & 1) == 0 )
  {
    sub_B5D5C4(&BattleCommandComponent___TypeInfo, (_DWORD)list, maxdrawcount, method);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_UIWidget___, v11, v12, v13);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_BattleCommandComponent___, v14, v15, v16);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_UIWidget___, v17, v18, v19);
    sub_B5D5C4(&iTween_TypeInfo, v20, v21, v22);
    byte_42E9E4C = 1;
  }
  p_commandlist = &this->fields.commandlist;
  this->fields.commandlist = list;
  sub_B5D560(
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
  v27 = 0LL;
  while ( 1 )
  {
    max_length = commandlist->max_length;
    if ( (__int64)v27 >= (int)max_length )
      break;
    if ( v27 >= max_length )
      goto LABEL_84;
    v29 = commandlist->m_Items[v27];
    if ( v29 )
    {
      v29->fields.markindex = v27;
      commandlist = *p_commandlist;
    }
    ++v27;
    if ( !commandlist )
      goto LABEL_79;
  }
  commandCompArray = this->fields.commandCompArray;
  if ( !commandCompArray )
    goto LABEL_79;
  ServantNumber = sub_B5D5DC(BattleCommandComponent___TypeInfo, commandCompArray->max_length);
  v37 = this->fields.commandCompArray;
  if ( !v37 )
    goto LABEL_79;
  v38 = (_DWORD *)ServantNumber;
  v39 = 5;
  v40 = 18LL;
  while ( 1 )
  {
    v41 = v37->max_length;
    if ( (int)v39 >= (int)v41 )
      break;
    if ( v39 >= v41 )
      goto LABEL_84;
    if ( v38 )
    {
      v42 = *(System_Int32_array ***)((char *)&v37->obj.klass + v40 * 4);
      if ( v42 )
      {
        ServantNumber = sub_B5D684(v42, *(_QWORD *)(*(_QWORD *)v38 + 64LL));
        if ( !ServantNumber )
        {
LABEL_85:
          v102 = sub_B5D6BC(ServantNumber);
          sub_B5D668(v102, 0LL);
        }
      }
      if ( v39 >= v38[6] )
        goto LABEL_84;
      v43 = (__int64 *)&v38[v40];
      *(_QWORD *)&v38[v40] = v42;
      sub_B5D560((BattleServantConfConponent_o *)&v38[v40], v42, v31, v32, v33, v34, v35, v36);
      if ( v39 >= v38[6] )
        goto LABEL_84;
      ServantNumber = *v43;
      if ( *v43 )
      {
        BattleCommandComponent__setData((BattleCommandComponent_o *)ServantNumber, 0LL, 0LL, 0, 1, 0, 0LL);
        commandTransformArray = this->fields.commandTransformArray;
        if ( commandTransformArray )
        {
          if ( v39 >= commandTransformArray->max_length )
            goto LABEL_84;
          v45 = *(UnityEngine_Transform_o **)((char *)&commandTransformArray->obj.klass + v40 * 4);
          *(UnityEngine_Vector3_o *)&v46 = UnityEngine_Vector3__get_zero(0LL);
          if ( v45 )
          {
            UnityEngine_Transform__set_localPosition(v45, *(UnityEngine_Vector3_o *)&v46, 0LL);
            v49 = this->fields.commandTransformArray;
            if ( v49 )
            {
              if ( v39 >= v49->max_length )
                goto LABEL_84;
              v50 = *(UnityEngine_Transform_o **)((char *)&v49->obj.klass + v40 * 4);
              *(UnityEngine_Vector3_o *)&v51 = UnityEngine_Vector3__get_zero(0LL);
              if ( v50 )
              {
                UnityEngine_Transform__set_localScale(v50, *(UnityEngine_Vector3_o *)&v51, 0LL);
                if ( v39 >= v38[6] )
                  goto LABEL_84;
                ServantNumber = *v43;
                if ( *v43 )
                {
                  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)ServantNumber, 0LL);
                  if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !iTween_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
                  }
                  iTween__Stop_43300928(gameObject, 0LL);
                  v37 = this->fields.commandCompArray;
                  ++v39;
                  v40 += 2LL;
                  if ( v37 )
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
  v55 = *p_commandlist;
  HIDWORD(v103.klass) = maxdrawcount;
  if ( !v55 )
    goto LABEL_79;
  v56 = 4LL;
  while ( 1 )
  {
    v57 = v56 - 4;
    if ( (int)v56 - 4 >= (signed int)v55->max_length )
      break;
    v58 = this->fields.commandTransformArray;
    if ( !v58 )
      goto LABEL_79;
    if ( v57 >= v58->max_length )
      goto LABEL_84;
    v59 = (UnityEngine_Transform_o *)*((_QWORD *)&v58->obj.klass + v56);
    *(UnityEngine_Vector3_o *)&v60 = UnityEngine_Vector3__get_zero(0LL);
    if ( !v59 )
      goto LABEL_79;
    UnityEngine_Transform__set_localPosition(v59, *(UnityEngine_Vector3_o *)&v60, 0LL);
    v63 = this->fields.commandTransformArray;
    if ( !v63 )
      goto LABEL_79;
    if ( v57 >= v63->max_length )
      goto LABEL_84;
    v64 = (UnityEngine_Transform_o *)*((_QWORD *)&v63->obj.klass + v56);
    *(UnityEngine_Vector3_o *)&v65 = UnityEngine_Vector3__get_one(0LL);
    if ( !v64 )
      goto LABEL_79;
    UnityEngine_Transform__set_localScale(v64, *(UnityEngine_Vector3_o *)&v65, 0LL);
    v55 = *p_commandlist;
    if ( !*p_commandlist )
      goto LABEL_79;
    if ( v57 >= v55->max_length )
      goto LABEL_84;
    if ( v57 >= 5 )
    {
      v25 = (BattleCommandData_o *)*((_QWORD *)&v55->obj.klass + v56);
      if ( v25 )
      {
        ServantNumber = BattlePerformanceCommandCard__GetServantNumber(this, v25, (const MethodInfo *)v31);
        v68 = this->fields.p_commandlist;
        if ( !v68 )
          goto LABEL_79;
        v69 = ServantNumber + 5;
        if ( (unsigned int)(ServantNumber + 5) >= v68->max_length )
          goto LABEL_84;
        ServantNumber = (__int64)v68->m_Items[v69];
        if ( !ServantNumber )
          goto LABEL_79;
        ServantNumber = (__int64)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                   (UnityEngine_GameObject_o *)ServantNumber,
                                   (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_BattleCommandComponent___);
        if ( !v38 )
          goto LABEL_79;
        v76 = (System_Int32_array **)ServantNumber;
        if ( ServantNumber )
        {
          ServantNumber = sub_B5D684(ServantNumber, *(_QWORD *)(*(_QWORD *)v38 + 64LL));
          if ( !ServantNumber )
            goto LABEL_85;
        }
        if ( v69 >= v38[6] )
          goto LABEL_84;
        v77 = &v38[2 * v69];
        *((_QWORD *)v77 + 4) = v76;
        v78 = (BattleServantConfConponent_o *)(v77 + 8);
        sub_B5D560(v78, v76, v70, v71, v72, v73, v74, v75);
        if ( v69 >= v38[6] )
          goto LABEL_84;
        v79 = *p_commandlist;
        if ( !*p_commandlist )
          goto LABEL_79;
        if ( v57 >= v79->max_length )
          goto LABEL_84;
        v80 = (BattleCommandData_o *)*((_QWORD *)&v79->obj.klass + v56);
        if ( !v80 )
          goto LABEL_79;
        ServantNumber = (__int64)this->fields.Bdata;
        if ( !ServantNumber )
          goto LABEL_79;
        klass = (BattleCommandComponent_o *)v78->klass;
        ServantNumber = (__int64)BattleData__getServantData((BattleData_o *)ServantNumber, v80->fields.uniqueId, 0LL);
        if ( !klass )
          goto LABEL_79;
        BattleCommandComponent__setData(klass, v80, (BattleServantData_o *)ServantNumber, 0, 1, 0, 0LL);
        v82 = this->fields.p_commandlist;
        if ( !v82 )
          goto LABEL_79;
        if ( v69 >= v82->max_length )
          goto LABEL_84;
        ServantNumber = (__int64)v82->m_Items[v69];
        if ( !ServantNumber )
          goto LABEL_79;
        Component_srcLineSprite = (UIWidget_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                  (UnityEngine_GameObject_o *)ServantNumber,
                                                  (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
        v104.fields.r = 0.0;
        v104.fields.g = 0.0;
        v104.fields.b = 0.0;
        v104.fields.a = 0.01;
        v103.methodPointer = 0LL;
        v103.invoker_method = 0LL;
        UnityEngine_Color___ctor(v104, v84, v85, v86, v87, &v103);
        if ( !Component_srcLineSprite )
          goto LABEL_79;
        *(_QWORD *)&v105.fields.r = v103.methodPointer;
        *(_QWORD *)&v105.fields.b = v103.invoker_method;
        UIWidget__set_color(Component_srcLineSprite, v105, 0LL);
        v55 = *p_commandlist;
      }
    }
    ++v56;
    if ( !v55 )
      goto LABEL_79;
  }
  selectcommand = this->fields.selectcommand;
  klass_high = HIDWORD(v103.klass);
  if ( !selectcommand )
    goto LABEL_79;
  v90 = 0LL;
  while ( 1 )
  {
    v91 = selectcommand->max_length;
    if ( (__int64)v90 >= (int)v91 )
      break;
    if ( v90 >= v91 )
      goto LABEL_84;
    selectcommand->m_Items[v90 + 1] = -1;
    selectcommand = this->fields.selectcommand;
    ++v90;
    if ( !selectcommand )
      goto LABEL_79;
  }
  selectedcomponents = this->fields.selectedcomponents;
  if ( !selectedcomponents )
    goto LABEL_79;
  v93 = 0LL;
  v94 = 32LL;
  while ( 1 )
  {
    v95 = selectedcomponents->max_length;
    if ( v93 >= 3 )
      break;
    if ( v93 >= v95 )
      goto LABEL_84;
    *(Il2CppClass **)((char *)&selectedcomponents->obj.klass + v94) = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)((char *)selectedcomponents + v94), 0LL, v31, v32, v33, v34, v35, v36);
    selectedcomponents = this->fields.selectedcomponents;
    ++v93;
    v94 += 8LL;
    if ( !selectedcomponents )
      goto LABEL_79;
  }
  if ( (unsigned int)v95 <= 3 )
  {
LABEL_84:
    v101 = sub_B5D6C8(ServantNumber);
    sub_B5D668(v101, 0LL);
  }
  ServantNumber = (__int64)selectedcomponents->m_Items[3];
  if ( !ServantNumber
    || (Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                                    (UnityEngine_Component_o *)ServantNumber,
                                    (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UIWidget___),
        *(UnityEngine_Color_o *)&v97 = UnityEngine_Color__get_clear(0LL),
        !Component_WebViewObject) )
  {
LABEL_79:
    sub_B5D69C(ServantNumber, v25);
  }
  UIWidget__set_color((UIWidget_o *)Component_WebViewObject, *(UnityEngine_Color_o *)&v97, 0LL);
  this->fields.drawcount = 0;
  this->fields.maxdrawcount = klass_high;
}


void __fastcall BattlePerformanceCommandCard__setCountRemaining(
        BattlePerformanceCommandCard_o *this,
        int32_t count,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  UnityEngine_Object_o *selectinfo_sprite; // x21
  UISprite_o *v13; // x20
  Il2CppObject *v14; // x0
  System_String_o *v15; // x0
  __int64 v16; // x1
  int32_t v17; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42E9E6A & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, count, (_DWORD)method, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_19672/*"img_battle_select{0:0}"*/, v9, v10, v11);
    byte_42E9E6A = 1;
  }
  selectinfo_sprite = (UnityEngine_Object_o *)this->fields.selectinfo_sprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(selectinfo_sprite, 0LL, 0LL) )
  {
    v13 = this->fields.selectinfo_sprite;
    v17 = count;
    v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v17);
    v15 = System_String__Format((System_String_o *)StringLiteral_19672/*"img_battle_select{0:0}"*/, v14, 0LL);
    if ( !v13 )
      sub_B5D69C(v15, v16);
    UISprite__set_spriteName(v13, v15, 0LL);
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
    sub_B5D69C(isQUICK, v8);
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

  if ( (byte_42E9E5F & 1) == 0 )
  {
    sub_B5D5C4(&BattlePerformanceCommandCard__showComboEffect_d__133_TypeInfo, (_DWORD)combo, (_DWORD)endproc, method);
    byte_42E9E5F = 1;
  }
  v7 = sub_B5D694(BattlePerformanceCommandCard__showComboEffect_d__133_TypeInfo);
  BattlePerformanceCommandCard__showComboEffect_d__133___ctor(
    (BattlePerformanceCommandCard__showComboEffect_d__133_o *)v7,
    0,
    0LL);
  if ( !v7 )
    sub_B5D69C(v8, v9);
  *(_QWORD *)(v7 + 32) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v7 + 32), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 40) = combo;
  sub_B5D560((BattleServantConfConponent_o *)(v7 + 40), (System_Int32_array **)combo, v16, v17, v18, v19, v20, v21);
  *(_QWORD *)(v7 + 48) = endproc;
  sub_B5D560((BattleServantConfConponent_o *)(v7 + 48), (System_Int32_array **)endproc, v22, v23, v24, v25, v26, v27);
  return (System_Collections_IEnumerator_o *)v7;
}


System_Collections_IEnumerator_o *__fastcall BattlePerformanceCommandCard__showComboEffectNormal(
        BattlePerformanceCommandCard_o *this,
        BattleComboData_o *combo,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7

  if ( (byte_42E9E61 & 1) == 0 )
  {
    sub_B5D5C4(&BattlePerformanceCommandCard__showComboEffectNormal_d__135_TypeInfo, (_DWORD)combo, (_DWORD)method, v3);
    byte_42E9E61 = 1;
  }
  v6 = sub_B5D694(BattlePerformanceCommandCard__showComboEffectNormal_d__135_TypeInfo);
  BattlePerformanceCommandCard__showComboEffectNormal_d__135___ctor(
    (BattlePerformanceCommandCard__showComboEffectNormal_d__135_o *)v6,
    0,
    0LL);
  if ( !v6 )
    sub_B5D69C(v7, v8);
  *(_QWORD *)(v6 + 32) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v6 + 32), (System_Int32_array **)this, v9, v10, v11, v12, v13, v14);
  *(_QWORD *)(v6 + 40) = combo;
  sub_B5D560((BattleServantConfConponent_o *)(v6 + 40), (System_Int32_array **)combo, v15, v16, v17, v18, v19, v20);
  return (System_Collections_IEnumerator_o *)v6;
}


System_Collections_IEnumerator_o *__fastcall BattlePerformanceCommandCard__showComboEffectShort(
        BattlePerformanceCommandCard_o *this,
        BattleComboData_o *combo,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7

  if ( (byte_42E9E60 & 1) == 0 )
  {
    sub_B5D5C4(&BattlePerformanceCommandCard__showComboEffectShort_d__134_TypeInfo, (_DWORD)combo, (_DWORD)method, v3);
    byte_42E9E60 = 1;
  }
  v6 = sub_B5D694(BattlePerformanceCommandCard__showComboEffectShort_d__134_TypeInfo);
  BattlePerformanceCommandCard__showComboEffectShort_d__134___ctor(
    (BattlePerformanceCommandCard__showComboEffectShort_d__134_o *)v6,
    0,
    0LL);
  if ( !v6 )
    sub_B5D69C(v7, v8);
  *(_QWORD *)(v6 + 32) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v6 + 32), (System_Int32_array **)this, v9, v10, v11, v12, v13, v14);
  *(_QWORD *)(v6 + 40) = combo;
  sub_B5D560((BattleServantConfConponent_o *)(v6 + 40), (System_Int32_array **)combo, v15, v16, v17, v18, v19, v20);
  return (System_Collections_IEnumerator_o *)v6;
}


void __fastcall BattlePerformanceCommandCard__startComboEffect(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3
  BattlePerformanceCommandCard_o *v4; // x19
  struct BattlePerformance_o *perf; // x8
  struct BattleData_o *data; // x8
  System_Collections_IEnumerator_o *v7; // x1

  v4 = this;
  if ( (byte_42E9E5E & 1) == 0 )
  {
    this = (BattlePerformanceCommandCard_o *)sub_B5D5C4(&StringLiteral_5573/*"END_PROC"*/, (_DWORD)method, v2, v3);
    byte_42E9E5E = 1;
  }
  perf = v4->fields.perf;
  if ( !perf || (data = perf->fields.data) == 0LL )
    sub_B5D69C(this, method);
  v7 = BattlePerformanceCommandCard__showComboEffect(
         v4,
         data->fields.combodata,
         (System_String_o *)StringLiteral_5573/*"END_PROC"*/,
         v3);
  UnityEngine_MonoBehaviour__StartCoroutine_35615088((UnityEngine_MonoBehaviour_o *)v4, v7, 0LL);
}


void __fastcall BattlePerformanceCommandCard__startFirstBonus(
        BattlePerformanceCommandCard_o *this,
        int32_t type,
        const MethodInfo *method)
{
  System_Collections_IEnumerator_o *started; // x1

  started = BattlePerformanceCommandCard__coStartFirstBonus(this, type, method);
  UnityEngine_MonoBehaviour__StartCoroutine_35615088((UnityEngine_MonoBehaviour_o *)this, started, 0LL);
}


void __fastcall BattlePerformanceCommandCard__startMiniCard(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  BattlePerformanceCommandCard_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  __int64 v29; // x23
  struct BattleCommandComponent_array *selectedcomponents; // x8
  il2cpp_array_size_t v31; // w25
  struct BattleCommandComponent_array *v32; // x8
  struct BattleCommandComponent_array *v33; // x8
  struct BattleCommandComponent_array *v34; // x8
  UnityEngine_GameObject_o *gameObject; // x20
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  BattlePerformanceCommandCard_o *v42; // x21
  System_Int32_array **v43; // x1
  struct UnityEngine_Transform_array *miniPos; // x8
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  System_Int32_array **v51; // x22
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
  System_Int32_array **v65; // x22
  System_String_array **v66; // x2
  System_String_array **v67; // x3
  System_Boolean_array **v68; // x4
  System_Int32_array **v69; // x5
  System_Int32_array *v70; // x6
  System_Int32_array *v71; // x7
  System_Int32_array **v72; // x1
  System_String_array **v73; // x2
  System_String_array **v74; // x3
  System_Boolean_array **v75; // x4
  System_Int32_array **v76; // x5
  System_Int32_array *v77; // x6
  System_Int32_array *v78; // x7
  System_Int32_array **v79; // x22
  System_Collections_Hashtable_o *v80; // x0
  struct BattleCommandComponent_array *v81; // x8
  UnityEngine_GameObject_o *v82; // x20
  System_String_array **v83; // x2
  System_String_array **v84; // x3
  System_Boolean_array **v85; // x4
  System_Int32_array **v86; // x5
  System_Int32_array *v87; // x6
  System_Int32_array *v88; // x7
  BattlePerformanceCommandCard_o *v89; // x21
  System_Int32_array **v90; // x1
  int z_low; // w9
  System_String_array **v92; // x2
  System_String_array **v93; // x3
  System_Boolean_array **v94; // x4
  System_Int32_array **v95; // x5
  System_Int32_array *v96; // x6
  System_Int32_array *v97; // x7
  System_Int32_array **v98; // x22
  System_String_array **v99; // x2
  System_String_array **v100; // x3
  System_Boolean_array **v101; // x4
  System_Int32_array **v102; // x5
  System_Int32_array *v103; // x6
  System_Int32_array *v104; // x7
  System_Int32_array **v105; // x1
  System_String_array **v106; // x2
  System_String_array **v107; // x3
  System_Boolean_array **v108; // x4
  System_Int32_array **v109; // x5
  System_Int32_array *v110; // x6
  System_Int32_array *v111; // x7
  System_Int32_array **v112; // x22
  System_String_array **v113; // x2
  System_String_array **v114; // x3
  System_Boolean_array **v115; // x4
  System_Int32_array **v116; // x5
  System_Int32_array *v117; // x6
  System_Int32_array *v118; // x7
  System_Int32_array **v119; // x1
  System_String_array **v120; // x2
  System_String_array **v121; // x3
  System_Boolean_array **v122; // x4
  System_Int32_array **v123; // x5
  System_Int32_array *v124; // x6
  System_Int32_array *v125; // x7
  System_Int32_array **v126; // x22
  System_Collections_Hashtable_o *v127; // x0
  __int64 v128; // x0
  __int64 v129; // x0
  int v130; // [xsp+0h] [xbp-80h] BYREF
  int v131; // [xsp+4h] [xbp-7Ch] BYREF
  __int64 v132; // [xsp+8h] [xbp-78h] BYREF
  int v133; // [xsp+10h] [xbp-70h]
  int v134; // [xsp+18h] [xbp-68h] BYREF
  int v135; // [xsp+1Ch] [xbp-64h] BYREF
  UnityEngine_Vector3_o position; // [xsp+20h] [xbp-60h] BYREF

  v4 = this;
  if ( (byte_42E9E6B & 1) == 0 )
  {
    sub_B5D5C4(&iTween_EaseType_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&object___TypeInfo, v5, v6, v7);
    sub_B5D5C4(&float_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&UnityEngine_Vector3_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_18341/*"easetype"*/, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_22982/*"time"*/, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_21800/*"position"*/, v20, v21, v22);
    sub_B5D5C4(&StringLiteral_22193/*"scale"*/, v23, v24, v25);
    this = (BattlePerformanceCommandCard_o *)sub_B5D5C4(&iTween_TypeInfo, v26, v27, v28);
    byte_42E9E6B = 1;
  }
  v29 = 4LL;
  do
  {
    selectedcomponents = v4->fields.selectedcomponents;
    if ( !selectedcomponents )
      goto LABEL_78;
    v31 = v29 - 4;
    if ( (unsigned int)(v29 - 4) >= selectedcomponents->max_length )
      goto LABEL_77;
    this = (BattlePerformanceCommandCard_o *)*((_QWORD *)&selectedcomponents->obj.klass + v29);
    if ( !this )
      goto LABEL_78;
    BattleCommandComponent__setMoveMode((BattleCommandComponent_o *)this, 0LL);
    v32 = v4->fields.selectedcomponents;
    if ( !v32 )
      goto LABEL_78;
    if ( v31 >= v32->max_length )
      goto LABEL_77;
    this = (BattlePerformanceCommandCard_o *)*((_QWORD *)&v32->obj.klass + v29);
    if ( !this )
      goto LABEL_78;
    BattleCommandComponent__SetCardBuffAlphaAnimFlag((BattleCommandComponent_o *)this, 0, 0LL);
    v33 = v4->fields.selectedcomponents;
    if ( !v33 )
      goto LABEL_78;
    if ( v31 >= v33->max_length )
      goto LABEL_77;
    this = (BattlePerformanceCommandCard_o *)*((_QWORD *)&v33->obj.klass + v29);
    if ( !this )
      goto LABEL_78;
    BattleCommandComponent__SetTreasureDeviceTypeChange((BattleCommandComponent_o *)this, 0, 0, 0LL);
    v34 = v4->fields.selectedcomponents;
    if ( !v34 )
      goto LABEL_78;
    if ( v31 >= v34->max_length )
      goto LABEL_77;
    this = (BattlePerformanceCommandCard_o *)*((_QWORD *)&v34->obj.klass + v29);
    if ( !this )
      goto LABEL_78;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    this = (BattlePerformanceCommandCard_o *)sub_B5D5DC(object___TypeInfo, 6LL);
    if ( !this )
      goto LABEL_78;
    v42 = this;
    this = (BattlePerformanceCommandCard_o *)StringLiteral_21800/*"position"*/;
    if ( StringLiteral_21800/*"position"*/ )
    {
      this = (BattlePerformanceCommandCard_o *)sub_B5D684(StringLiteral_21800/*"position"*/, v42->klass->_1.element_class);
      if ( !this )
        goto LABEL_79;
      v43 = (System_Int32_array **)StringLiteral_21800/*"position"*/;
    }
    else
    {
      v43 = 0LL;
    }
    if ( !LODWORD(v42->fields.COMMAND_STAMP_POS_X) )
      goto LABEL_77;
    *(_QWORD *)&v42->fields.COMMAND_STAMP_POS_Y = v43;
    sub_B5D560((BattleServantConfConponent_o *)&v42->fields.COMMAND_STAMP_POS_Y, v43, v36, v37, v38, v39, v40, v41);
    miniPos = v4->fields.miniPos;
    if ( !miniPos )
      goto LABEL_78;
    if ( v31 >= miniPos->max_length )
      goto LABEL_77;
    this = (BattlePerformanceCommandCard_o *)*((_QWORD *)&miniPos->obj.klass + v29);
    if ( !this )
      goto LABEL_78;
    position = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)this, 0LL);
    this = (BattlePerformanceCommandCard_o *)j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, &position);
    v51 = (System_Int32_array **)this;
    if ( this )
    {
      this = (BattlePerformanceCommandCard_o *)sub_B5D684(this, v42->klass->_1.element_class);
      if ( !this )
      {
LABEL_79:
        v129 = sub_B5D6BC(this);
        sub_B5D668(v129, 0LL);
      }
    }
    if ( LODWORD(v42->fields.COMMAND_STAMP_POS_X) <= 1 )
      goto LABEL_77;
    *(_QWORD *)&v42->fields.CARD_ROOT_BASE_X = v51;
    sub_B5D560((BattleServantConfConponent_o *)&v42->fields.CARD_ROOT_BASE_X, v51, v45, v46, v47, v48, v49, v50);
    this = (BattlePerformanceCommandCard_o *)StringLiteral_22982/*"time"*/;
    if ( StringLiteral_22982/*"time"*/ )
    {
      this = (BattlePerformanceCommandCard_o *)sub_B5D684(StringLiteral_22982/*"time"*/, v42->klass->_1.element_class);
      if ( !this )
        goto LABEL_79;
      v58 = (System_Int32_array **)StringLiteral_22982/*"time"*/;
    }
    else
    {
      v58 = 0LL;
    }
    if ( LODWORD(v42->fields.COMMAND_STAMP_POS_X) <= 2 )
      goto LABEL_77;
    v42->fields.commandfsm = (struct PlayMakerFSM_o *)v58;
    sub_B5D560((BattleServantConfConponent_o *)&v42->fields.commandfsm, v58, v52, v53, v54, v55, v56, v57);
    v135 = 1045220557;
    this = (BattlePerformanceCommandCard_o *)j_il2cpp_value_box_0(float_TypeInfo, &v135);
    v65 = (System_Int32_array **)this;
    if ( this )
    {
      this = (BattlePerformanceCommandCard_o *)sub_B5D684(this, v42->klass->_1.element_class);
      if ( !this )
        goto LABEL_79;
    }
    if ( LODWORD(v42->fields.COMMAND_STAMP_POS_X) <= 3 )
      goto LABEL_77;
    v42->fields.commandprefab = (struct UnityEngine_GameObject_o *)v65;
    sub_B5D560((BattleServantConfConponent_o *)&v42->fields.commandprefab, v65, v59, v60, v61, v62, v63, v64);
    this = (BattlePerformanceCommandCard_o *)StringLiteral_18341/*"easetype"*/;
    if ( StringLiteral_18341/*"easetype"*/ )
    {
      this = (BattlePerformanceCommandCard_o *)sub_B5D684(StringLiteral_18341/*"easetype"*/, v42->klass->_1.element_class);
      if ( !this )
        goto LABEL_79;
      v72 = (System_Int32_array **)StringLiteral_18341/*"easetype"*/;
    }
    else
    {
      v72 = 0LL;
    }
    if ( LODWORD(v42->fields.COMMAND_STAMP_POS_X) <= 4 )
    {
LABEL_77:
      v128 = sub_B5D6C8(this);
      sub_B5D668(v128, 0LL);
    }
    v42->fields.selectCommandPrefab = (struct UnityEngine_GameObject_o *)v72;
    sub_B5D560((BattleServantConfConponent_o *)&v42->fields.selectCommandPrefab, v72, v66, v67, v68, v69, v70, v71);
    v134 = 21;
    this = (BattlePerformanceCommandCard_o *)j_il2cpp_value_box_0(iTween_EaseType_TypeInfo, &v134);
    v79 = (System_Int32_array **)this;
    if ( this )
    {
      this = (BattlePerformanceCommandCard_o *)sub_B5D684(this, v42->klass->_1.element_class);
      if ( !this )
        goto LABEL_79;
    }
    if ( LODWORD(v42->fields.COMMAND_STAMP_POS_X) <= 5 )
      goto LABEL_77;
    v42->fields.commandrootTransform = (struct UnityEngine_Transform_o *)v79;
    sub_B5D560((BattleServantConfConponent_o *)&v42->fields.commandrootTransform, v79, v73, v74, v75, v76, v77, v78);
    if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
    v80 = iTween__Hash((System_Object_array *)v42, 0LL);
    iTween__MoveTo_43183064(gameObject, v80, 0LL);
    v81 = v4->fields.selectedcomponents;
    if ( !v81 )
      goto LABEL_78;
    if ( v31 >= v81->max_length )
      goto LABEL_77;
    this = (BattlePerformanceCommandCard_o *)*((_QWORD *)&v81->obj.klass + v29);
    if ( !this
      || (v82 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL),
          (this = (BattlePerformanceCommandCard_o *)sub_B5D5DC(object___TypeInfo, 6LL)) == 0LL) )
    {
LABEL_78:
      sub_B5D69C(this, method);
    }
    v89 = this;
    this = (BattlePerformanceCommandCard_o *)StringLiteral_22193/*"scale"*/;
    if ( StringLiteral_22193/*"scale"*/ )
    {
      this = (BattlePerformanceCommandCard_o *)sub_B5D684(StringLiteral_22193/*"scale"*/, v89->klass->_1.element_class);
      if ( !this )
        goto LABEL_79;
      v90 = (System_Int32_array **)StringLiteral_22193/*"scale"*/;
    }
    else
    {
      v90 = 0LL;
    }
    if ( !LODWORD(v89->fields.COMMAND_STAMP_POS_X) )
      goto LABEL_77;
    *(_QWORD *)&v89->fields.COMMAND_STAMP_POS_Y = v90;
    sub_B5D560((BattleServantConfConponent_o *)&v89->fields.COMMAND_STAMP_POS_Y, v90, v83, v84, v85, v86, v87, v88);
    z_low = LODWORD(v4->fields.miniScale.fields.z);
    v132 = *(_QWORD *)&v4->fields.miniScale.fields.x;
    v133 = z_low;
    this = (BattlePerformanceCommandCard_o *)j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, &v132);
    v98 = (System_Int32_array **)this;
    if ( this )
    {
      this = (BattlePerformanceCommandCard_o *)sub_B5D684(this, v89->klass->_1.element_class);
      if ( !this )
        goto LABEL_79;
    }
    if ( LODWORD(v89->fields.COMMAND_STAMP_POS_X) <= 1 )
      goto LABEL_77;
    *(_QWORD *)&v89->fields.CARD_ROOT_BASE_X = v98;
    sub_B5D560((BattleServantConfConponent_o *)&v89->fields.CARD_ROOT_BASE_X, v98, v92, v93, v94, v95, v96, v97);
    this = (BattlePerformanceCommandCard_o *)StringLiteral_22982/*"time"*/;
    if ( StringLiteral_22982/*"time"*/ )
    {
      this = (BattlePerformanceCommandCard_o *)sub_B5D684(StringLiteral_22982/*"time"*/, v89->klass->_1.element_class);
      if ( !this )
        goto LABEL_79;
      v105 = (System_Int32_array **)StringLiteral_22982/*"time"*/;
    }
    else
    {
      v105 = 0LL;
    }
    if ( LODWORD(v89->fields.COMMAND_STAMP_POS_X) <= 2 )
      goto LABEL_77;
    v89->fields.commandfsm = (struct PlayMakerFSM_o *)v105;
    sub_B5D560((BattleServantConfConponent_o *)&v89->fields.commandfsm, v105, v99, v100, v101, v102, v103, v104);
    v131 = 1045220557;
    this = (BattlePerformanceCommandCard_o *)j_il2cpp_value_box_0(float_TypeInfo, &v131);
    v112 = (System_Int32_array **)this;
    if ( this )
    {
      this = (BattlePerformanceCommandCard_o *)sub_B5D684(this, v89->klass->_1.element_class);
      if ( !this )
        goto LABEL_79;
    }
    if ( LODWORD(v89->fields.COMMAND_STAMP_POS_X) <= 3 )
      goto LABEL_77;
    v89->fields.commandprefab = (struct UnityEngine_GameObject_o *)v112;
    sub_B5D560((BattleServantConfConponent_o *)&v89->fields.commandprefab, v112, v106, v107, v108, v109, v110, v111);
    this = (BattlePerformanceCommandCard_o *)StringLiteral_18341/*"easetype"*/;
    if ( StringLiteral_18341/*"easetype"*/ )
    {
      this = (BattlePerformanceCommandCard_o *)sub_B5D684(StringLiteral_18341/*"easetype"*/, v89->klass->_1.element_class);
      if ( !this )
        goto LABEL_79;
      v119 = (System_Int32_array **)StringLiteral_18341/*"easetype"*/;
    }
    else
    {
      v119 = 0LL;
    }
    if ( LODWORD(v89->fields.COMMAND_STAMP_POS_X) <= 4 )
      goto LABEL_77;
    v89->fields.selectCommandPrefab = (struct UnityEngine_GameObject_o *)v119;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v89->fields.selectCommandPrefab,
      v119,
      v113,
      v114,
      v115,
      v116,
      v117,
      v118);
    v130 = 21;
    this = (BattlePerformanceCommandCard_o *)j_il2cpp_value_box_0(iTween_EaseType_TypeInfo, &v130);
    v126 = (System_Int32_array **)this;
    if ( this )
    {
      this = (BattlePerformanceCommandCard_o *)sub_B5D684(this, v89->klass->_1.element_class);
      if ( !this )
        goto LABEL_79;
    }
    if ( LODWORD(v89->fields.COMMAND_STAMP_POS_X) <= 5 )
      goto LABEL_77;
    v89->fields.commandrootTransform = (struct UnityEngine_Transform_o *)v126;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v89->fields.commandrootTransform,
      v126,
      v120,
      v121,
      v122,
      v123,
      v124,
      v125);
    v127 = iTween__Hash((System_Object_array *)v89, 0LL);
    iTween__ScaleTo_43188764(v82, v127, 0LL);
    ++v29;
  }
  while ( (unsigned int)(v29 - 5) < 3 );
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
  started = UnityEngine_MonoBehaviour__StartCoroutine_35615088((UnityEngine_MonoBehaviour_o *)this, v3, 0LL);
  this->fields.openNpCoroutine = started;
  sub_B5D560(
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
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *firstBonusObject; // x20
  __int64 v6; // x1
  Spawner_o *spawner; // x0

  if ( (byte_42E9E58 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E9E58 = 1;
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
      sub_B5D69C(0LL, v6);
    Spawner__Despawn(spawner, this->fields.firstBonusObject, 1, 0LL);
  }
}


void __fastcall BattlePerformanceCommandCard__toggleHighSpeedMode(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  BattleData_o *data; // x0
  __int64 v6; // x1
  struct BattlePerformance_o *perf; // x8
  int32_t v8; // w1
  const MethodInfo *v9; // x2

  if ( (byte_42E9E8F & 1) == 0 )
  {
    sub_B5D5C4(&SeManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E9E8F = 1;
  }
  data = (BattleData_o *)BattlePerformanceCommandCard__checkSpeedButtonTutorial(this, method);
  if ( ((unsigned __int8)data & 1) == 0 )
  {
    perf = this->fields.perf;
    if ( !perf || (data = perf->fields.data) == 0LL )
      sub_B5D69C(data, v6);
    BattleData__toggleHighSpeedMode(data, 0LL);
    if ( (BYTE3(SeManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SeManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
    SeManager__PlayCommonSe(9, 0LL);
    BattlePerformanceCommandCard__updateHighSpeedObject(this, v8, v9);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceCommandCard__touchCommandCard(
        BattlePerformanceCommandCard_o *this,
        int32_t markindex,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  BattleLogic_o *logic; // x0
  int v10; // w21
  struct BattleData_o *Bdata; // x8
  struct BattleCommandComponent_array *commandCompArray; // x8
  __int64 v13; // x22
  int max_length; // w9
  Il2CppClass **v15; // x8
  Il2CppClass *v16; // x21
  const MethodInfo *v17; // x2
  struct BattleData_o *v18; // x8
  __int64 v19; // x0

  if ( (byte_42E9E4F & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_20637/*"markindex"*/, markindex, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_11750/*"SELECTCARD"*/, v6, v7, v8);
    byte_42E9E4F = 1;
  }
  logic = this->fields.logic;
  if ( !logic )
    goto LABEL_30;
  logic = (BattleLogic_o *)BattleLogic__getTutorialId(logic, 0LL);
  if ( !this->fields.logic )
    goto LABEL_30;
  v10 = (int)logic;
  logic = (BattleLogic_o *)BattleLogic__getTurn(this->fields.logic, 0LL);
  if ( this->fields.isTouchNgInTutorial )
    return;
  if ( v10 == 1 )
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
  else if ( (v10 & 0xFFFFFFFE) == 2 )
  {
    if ( v10 == 2 && (_DWORD)logic == 2 )
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
  v13 = 0LL;
  while ( 1 )
  {
    max_length = commandCompArray->max_length;
    if ( (int)v13 >= max_length )
      return;
    if ( (unsigned int)v13 >= max_length )
    {
      v19 = sub_B5D6C8(logic);
      sub_B5D668(v19, 0LL);
    }
    v15 = &commandCompArray->obj.klass + v13;
    v16 = v15[4];
    if ( !v16 )
      goto LABEL_30;
    logic = (BattleLogic_o *)BattleCommandComponent__checkMark((BattleCommandComponent_o *)v15[4], markindex, 0LL);
    if ( ((unsigned __int8)logic & 1) != 0 )
      break;
    commandCompArray = this->fields.commandCompArray;
    ++v13;
    if ( !commandCompArray )
      goto LABEL_30;
  }
  v18 = this->fields.Bdata;
  if ( !v18 )
    goto LABEL_30;
  if ( v18->fields.systemflg_selectcancel || !BYTE4(v16->vtable[4].method) )
  {
    if ( this->fields.directCommandCardTouchEnable )
    {
      BattlePerformanceCommandCard__selectOK(this, markindex, v17);
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
                                     (System_String_o *)StringLiteral_20637/*"markindex"*/,
                                     0LL);
          if ( logic )
          {
            LODWORD(logic->fields.brandom) = markindex;
            logic = (BattleLogic_o *)this->fields.commandfsm;
            if ( logic )
            {
              PlayMakerFSM__SendEvent((PlayMakerFSM_o *)logic, (System_String_o *)StringLiteral_11750/*"SELECTCARD"*/, 0LL);
              return;
            }
          }
        }
      }
    }
LABEL_30:
    sub_B5D69C(logic, *(_QWORD *)&markindex);
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
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  struct System_Int32_array *selectcommand; // x8
  unsigned __int64 v29; // x9
  int v30; // w24
  unsigned __int64 max_length; // x11
  char *v32; // x11
  struct BattleCommandComponent_array *selectedcomponents; // x8
  int v34; // w8
  int32_t v35; // w1
  UnityEngine_GameObject_o *gameObject; // x21
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  BattlePerformanceCommandCard_o *v43; // x22
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
  System_String_array **v66; // x2
  System_String_array **v67; // x3
  System_Boolean_array **v68; // x4
  System_Int32_array **v69; // x5
  System_Int32_array *v70; // x6
  System_Int32_array *v71; // x7
  System_Int32_array **v72; // x1
  System_String_array **v73; // x2
  System_String_array **v74; // x3
  System_Boolean_array **v75; // x4
  System_Int32_array **v76; // x5
  System_Int32_array *v77; // x6
  System_Int32_array *v78; // x7
  System_Int32_array **v79; // x23
  System_Collections_Hashtable_o *v80; // x0
  const MethodInfo *v81; // x1
  const MethodInfo *v82; // x3
  System_String_array **v83; // x2
  System_String_array **v84; // x3
  System_Boolean_array **v85; // x4
  System_Int32_array **v86; // x5
  System_Int32_array *v87; // x6
  System_Int32_array *v88; // x7
  struct BattleCommandComponent_array *v89; // x8
  Il2CppClass **v90; // x0
  int32_t v91; // w1
  const MethodInfo *v92; // x2
  const MethodInfo *v93; // x1
  __int64 v94; // x0
  __int64 v95; // x0
  char v96[4]; // [xsp+4h] [xbp-3Ch] BYREF
  int v97; // [xsp+8h] [xbp-38h] BYREF
  int v98; // [xsp+Ch] [xbp-34h] BYREF

  v6 = this;
  if ( (byte_42E9E51 & 1) == 0 )
  {
    sub_B5D5C4(&bool_TypeInfo, (_DWORD)bc, markindex, method);
    sub_B5D5C4(&int_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&object___TypeInfo, v10, v11, v12);
    sub_B5D5C4(&float_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&StringLiteral_22982/*"time"*/, v16, v17, v18);
    sub_B5D5C4(&StringLiteral_23719/*"y"*/, v19, v20, v21);
    sub_B5D5C4(&StringLiteral_20221/*"islocal"*/, v22, v23, v24);
    this = (BattlePerformanceCommandCard_o *)sub_B5D5C4(&iTween_TypeInfo, v25, v26, v27);
    byte_42E9E51 = 1;
  }
  selectcommand = v6->fields.selectcommand;
  if ( !selectcommand )
    goto LABEL_10;
  v29 = 0LL;
  v30 = -1;
  while ( 1 )
  {
    max_length = selectcommand->max_length;
    if ( (__int64)v29 >= (int)max_length )
      break;
    if ( v29 >= max_length )
      goto LABEL_50;
    v32 = (char *)selectcommand + 4 * v29;
    if ( *((_DWORD *)v32 + 8) == markindex )
    {
      *((_DWORD *)v32 + 8) = -1;
      selectcommand = v6->fields.selectcommand;
      v30 = v29;
    }
    ++v29;
    if ( !selectcommand )
      goto LABEL_10;
  }
  if ( (v30 & 0x80000000) == 0 )
  {
    selectedcomponents = v6->fields.selectedcomponents;
    if ( !selectedcomponents )
      goto LABEL_10;
    if ( v30 >= (signed int)selectedcomponents->max_length )
      return;
    if ( !bc )
      goto LABEL_10;
    bc->fields.selectflg = 0;
    v34 = v6->fields.drawcount - 1;
    v35 = v6->fields.maxdrawcount - v34;
    v6->fields.drawcount = v34;
    BattlePerformanceCommandCard__selectCommandCard(v6, v35, *(const MethodInfo **)&markindex);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)bc, 0LL);
    this = (BattlePerformanceCommandCard_o *)sub_B5D5DC(object___TypeInfo, 6LL);
    if ( !this )
      goto LABEL_10;
    v43 = this;
    this = (BattlePerformanceCommandCard_o *)StringLiteral_23719/*"y"*/;
    if ( StringLiteral_23719/*"y"*/ )
    {
      this = (BattlePerformanceCommandCard_o *)sub_B5D684(StringLiteral_23719/*"y"*/, v43->klass->_1.element_class);
      if ( !this )
        goto LABEL_51;
      v44 = (System_Int32_array **)StringLiteral_23719/*"y"*/;
    }
    else
    {
      v44 = 0LL;
    }
    if ( !LODWORD(v43->fields.COMMAND_STAMP_POS_X) )
      goto LABEL_50;
    *(_QWORD *)&v43->fields.COMMAND_STAMP_POS_Y = v44;
    sub_B5D560((BattleServantConfConponent_o *)&v43->fields.COMMAND_STAMP_POS_Y, v44, v37, v38, v39, v40, v41, v42);
    v98 = 0;
    this = (BattlePerformanceCommandCard_o *)j_il2cpp_value_box_0(int_TypeInfo, &v98);
    v51 = (System_Int32_array **)this;
    if ( !this || (this = (BattlePerformanceCommandCard_o *)sub_B5D684(this, v43->klass->_1.element_class)) != 0LL )
    {
      if ( LODWORD(v43->fields.COMMAND_STAMP_POS_X) <= 1 )
        goto LABEL_50;
      *(_QWORD *)&v43->fields.CARD_ROOT_BASE_X = v51;
      sub_B5D560((BattleServantConfConponent_o *)&v43->fields.CARD_ROOT_BASE_X, v51, v45, v46, v47, v48, v49, v50);
      this = (BattlePerformanceCommandCard_o *)StringLiteral_22982/*"time"*/;
      if ( StringLiteral_22982/*"time"*/ )
      {
        this = (BattlePerformanceCommandCard_o *)sub_B5D684(StringLiteral_22982/*"time"*/, v43->klass->_1.element_class);
        if ( !this )
          goto LABEL_51;
        v58 = (System_Int32_array **)StringLiteral_22982/*"time"*/;
      }
      else
      {
        v58 = 0LL;
      }
      if ( LODWORD(v43->fields.COMMAND_STAMP_POS_X) <= 2 )
        goto LABEL_50;
      v43->fields.commandfsm = (struct PlayMakerFSM_o *)v58;
      sub_B5D560((BattleServantConfConponent_o *)&v43->fields.commandfsm, v58, v52, v53, v54, v55, v56, v57);
      v97 = 1045220557;
      this = (BattlePerformanceCommandCard_o *)j_il2cpp_value_box_0(float_TypeInfo, &v97);
      v65 = (System_Int32_array **)this;
      if ( !this || (this = (BattlePerformanceCommandCard_o *)sub_B5D684(this, v43->klass->_1.element_class)) != 0LL )
      {
        if ( LODWORD(v43->fields.COMMAND_STAMP_POS_X) <= 3 )
          goto LABEL_50;
        v43->fields.commandprefab = (struct UnityEngine_GameObject_o *)v65;
        sub_B5D560((BattleServantConfConponent_o *)&v43->fields.commandprefab, v65, v59, v60, v61, v62, v63, v64);
        this = (BattlePerformanceCommandCard_o *)StringLiteral_20221/*"islocal"*/;
        if ( StringLiteral_20221/*"islocal"*/ )
        {
          this = (BattlePerformanceCommandCard_o *)sub_B5D684(StringLiteral_20221/*"islocal"*/, v43->klass->_1.element_class);
          if ( !this )
            goto LABEL_51;
          v72 = (System_Int32_array **)StringLiteral_20221/*"islocal"*/;
        }
        else
        {
          v72 = 0LL;
        }
        if ( LODWORD(v43->fields.COMMAND_STAMP_POS_X) <= 4 )
          goto LABEL_50;
        v43->fields.selectCommandPrefab = (struct UnityEngine_GameObject_o *)v72;
        sub_B5D560((BattleServantConfConponent_o *)&v43->fields.selectCommandPrefab, v72, v66, v67, v68, v69, v70, v71);
        v96[0] = 1;
        this = (BattlePerformanceCommandCard_o *)j_il2cpp_value_box_0(bool_TypeInfo, v96);
        v79 = (System_Int32_array **)this;
        if ( !this || (this = (BattlePerformanceCommandCard_o *)sub_B5D684(this, v43->klass->_1.element_class)) != 0LL )
        {
          if ( LODWORD(v43->fields.COMMAND_STAMP_POS_X) <= 5 )
            goto LABEL_50;
          v43->fields.commandrootTransform = (struct UnityEngine_Transform_o *)v79;
          sub_B5D560(
            (BattleServantConfConponent_o *)&v43->fields.commandrootTransform,
            v79,
            v73,
            v74,
            v75,
            v76,
            v77,
            v78);
          if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
          v80 = iTween__Hash((System_Object_array *)v43, 0LL);
          iTween__MoveTo_43183064(gameObject, v80, 0LL);
          BattleCommandComponent__startMoveFloat(bc, 0LL);
          if ( v30 )
            BattlePerformanceCommandCard__setFirstAura(v6, bc, v6->fields.firstAuraType, v82);
          else
            BattlePerformanceCommandCard__cancelFirstBonus(v6, v81);
          v89 = v6->fields.selectedcomponents;
          if ( v89 )
          {
            if ( v30 < v89->max_length )
            {
              v90 = &v89->obj.klass + v30;
              v90[4] = 0LL;
              sub_B5D560((BattleServantConfConponent_o *)(v90 + 4), 0LL, v83, v84, v85, v86, v87, v88);
              BattlePerformanceCommandCard__checkChainBonus(v6, v91, v92);
              BattlePerformanceCommandCard__checkMaskEnemy(v6, v93);
              BattleCommandComponent__resetSelect(bc, 0LL);
              return;
            }
LABEL_50:
            v94 = sub_B5D6C8(this);
            sub_B5D668(v94, 0LL);
          }
LABEL_10:
          sub_B5D69C(this, bc);
        }
      }
    }
LABEL_51:
    v95 = sub_B5D6BC(this);
    sub_B5D668(v95, 0LL);
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
    sub_B5D69C(this, method);
  v3 = this;
  v4 = 0LL;
  while ( (int)v4 < (signed int)p_commandlist->max_length )
  {
    commandCompArray = v3->fields.commandCompArray;
    if ( !commandCompArray )
      goto LABEL_13;
    if ( (unsigned int)v4 >= commandCompArray->max_length )
    {
      v10 = sub_B5D6C8(this);
      sub_B5D668(v10, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  BattlePerformanceCommandCard_o *v4; // x19
  __int64 v5; // x22
  struct UnityEngine_GameObject_array *p_commandlist; // x8
  unsigned __int64 v7; // x23
  UnityEngine_Object_o *v8; // x20
  struct BattleCommandComponent_array *commandCompArray; // x8
  struct BattleCommandComponent_array *v10; // x8
  unsigned __int64 v11; // x22
  unsigned __int64 max_length; // x9
  BattleCommandComponent_o *v13; // x20
  __int64 v14; // x0

  v4 = this;
  if ( (byte_42E9E46 & 1) == 0 )
  {
    this = (BattlePerformanceCommandCard_o *)sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E9E46 = 1;
  }
  v5 = 9LL;
  do
  {
    p_commandlist = v4->fields.p_commandlist;
    if ( !p_commandlist )
      goto LABEL_30;
    v7 = v5 - 4;
    if ( v5 - 4 >= (unsigned __int64)p_commandlist->max_length )
      goto LABEL_32;
    v8 = (UnityEngine_Object_o *)*((_QWORD *)&p_commandlist->obj.klass + v5);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    this = (BattlePerformanceCommandCard_o *)UnityEngine_Object__op_Inequality(v8, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      commandCompArray = v4->fields.commandCompArray;
      if ( !commandCompArray )
        goto LABEL_30;
      if ( v7 >= commandCompArray->max_length )
      {
LABEL_32:
        v14 = sub_B5D6C8(this);
        sub_B5D668(v14, 0LL);
      }
      this = (BattlePerformanceCommandCard_o *)*((_QWORD *)&commandCompArray->obj.klass + v5);
      if ( !this )
        goto LABEL_30;
      BattleCommandComponent__setData((BattleCommandComponent_o *)this, 0LL, 0LL, 0, 1, 0, 0LL);
    }
    ++v5;
  }
  while ( v7 < 7 );
  v10 = v4->fields.commandCompArray;
  if ( !v10 )
LABEL_30:
    sub_B5D69C(this, method);
  v11 = 0LL;
  while ( 1 )
  {
    max_length = v10->max_length;
    if ( (__int64)v11 >= (int)max_length )
      break;
    if ( v11 >= max_length )
      goto LABEL_32;
    v13 = v10->m_Items[v11];
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    this = (BattlePerformanceCommandCard_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v13, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !v13 )
        goto LABEL_30;
      BattleCommandComponent__updateView(v13, 0, 0, 1, 0, 0, 0LL);
      if ( v13->fields.data
        && BattleCommandComponent__getCriticalCount(v13, 0LL) >= 1
        && !v4->fields._IsPlayingBackStar_k__BackingField )
      {
        BattleCommandComponent__setCriticalObject(v13, 1, 0LL);
      }
      BattleCommandComponent__UpdateCommandCardEffect(v13, 0LL);
    }
    v10 = v4->fields.commandCompArray;
    ++v11;
    if ( !v10 )
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
    sub_B5D69C(this, method);
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
          v15 = sub_B5D6C8(this);
          sub_B5D668(v15, 0LL);
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
    sub_B5D69C(Bdata, method);
  v5 = (BattleServantData_o *)Bdata;
  v6 = 0LL;
  while ( 1 )
  {
    max_length = commandCompArray->max_length;
    if ( (int)v6 >= max_length )
      break;
    if ( (unsigned int)v6 >= max_length )
    {
      v8 = sub_B5D6C8(Bdata);
      sub_B5D668(v8, 0LL);
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
    sub_B5D69C(logic, *(_QWORD *)&speedMode);
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
    sub_B5D69C(this, method);
  v3 = this;
  v4 = 0LL;
  while ( 1 )
  {
    max_length = commandCompArray->max_length;
    if ( (int)v4 >= max_length )
      break;
    if ( (unsigned int)v4 >= max_length )
    {
      v6 = sub_B5D6C8(this);
      sub_B5D668(v6, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_42E9E48 & 1) == 0 )
  {
    sub_B5D5C4(&BattlePerformanceCommandCard__waitFallStar_d__97_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E9E48 = 1;
  }
  v5 = sub_B5D694(BattlePerformanceCommandCard__waitFallStar_d__97_TypeInfo);
  BattlePerformanceCommandCard__waitFallStar_d__97___ctor(
    (BattlePerformanceCommandCard__waitFallStar_d__97_o *)v5,
    0,
    0LL);
  if ( !v5 )
    sub_B5D69C(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v5 + 32), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  return (System_Collections_IEnumerator_o *)v5;
}


System_Collections_IEnumerator_o *__fastcall BattlePerformanceCommandCard__waitFunc(
        BattlePerformanceCommandCard_o *this,
        float waittime,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v4; // x3
  __int64 v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7

  if ( (byte_42E9E72 & 1) == 0 )
  {
    sub_B5D5C4(&BattlePerformanceCommandCard__waitFunc_d__171_TypeInfo, (_DWORD)callback, (_DWORD)method, v4);
    byte_42E9E72 = 1;
  }
  v8 = sub_B5D694(BattlePerformanceCommandCard__waitFunc_d__171_TypeInfo);
  BattlePerformanceCommandCard__waitFunc_d__171___ctor((BattlePerformanceCommandCard__waitFunc_d__171_o *)v8, 0, 0LL);
  if ( !v8 )
    sub_B5D69C(v9, v10);
  *(_QWORD *)(v8 + 32) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v8 + 32), (System_Int32_array **)this, v11, v12, v13, v14, v15, v16);
  *(float *)(v8 + 40) = waittime;
  *(_QWORD *)(v8 + 48) = callback;
  sub_B5D560((BattleServantConfConponent_o *)(v8 + 48), (System_Int32_array **)callback, v17, v18, v19, v20, v21, v22);
  return (System_Collections_IEnumerator_o *)v8;
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
  int v2; // w2
  __int64 v3; // x3
  BattlePerformanceCommandCard__DelayFirstBonusAnimationPlay_d__122_o *v4; // x19
  int32_t _1__state; // w8
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  struct BattlePerformanceCommandCard_o *_4__this; // x20
  UnityEngine_Object_o *firstBonusSimpleAnimation; // x19
  UnityEngine_Object_o *firstBonusAnimation; // x19

  v4 = this;
  if ( (byte_42E608A & 1) == 0 )
  {
    this = (BattlePerformanceCommandCard__DelayFirstBonusAnimationPlay_d__122_o *)sub_B5D5C4(
                                                                                    &UnityEngine_Object_TypeInfo,
                                                                                    (_DWORD)method,
                                                                                    v2,
                                                                                    v3);
    byte_42E608A = 1;
  }
  _1__state = v4->fields.__1__state;
  if ( _1__state == 1 )
  {
    _4__this = v4->fields.__4__this;
    v4->fields.__1__state = -1;
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
    sub_B5D69C(this, method);
  }
  if ( !_1__state )
  {
    v4->fields.__2__current = 0LL;
    p__2__current = &v4->fields.__2__current;
    *((_DWORD *)p__2__current - 2) = -1;
    sub_B5D560(p__2__current);
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

  v2 = sub_B5D5C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B5D694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B5D5C8(&Method_BattlePerformanceCommandCard__DelayFirstBonusAnimationPlay_d__122_System_Collections_IEnumerator_Reset__);
  sub_B5D668(v3, v4);
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
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct BattlePerformanceCommandCard___c_StaticFields *static_fields; // x0

  if ( (byte_42E6088 & 1) == 0 )
  {
    sub_B5D5C4(&BattlePerformanceCommandCard___c_TypeInfo, v1, v2, v3);
    byte_42E6088 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(BattlePerformanceCommandCard___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = BattlePerformanceCommandCard___c_TypeInfo->static_fields;
  static_fields->__9 = (struct BattlePerformanceCommandCard___c_o *)v4;
  sub_B5D560(static_fields);
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
    sub_B5D69C(this, 0LL);
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
    sub_B5D69C(this, 0LL);
  return x->fields.selectflg;
}


bool __fastcall BattlePerformanceCommandCard___c___showComboEffectShort_b__134_0(
        BattlePerformanceCommandCard___c_o *this,
        BattleCommandComponent_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B5D69C(this, 0LL);
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
  __int64 v3; // x3
  BattlePerformanceCommandCard___c__DisplayClass120_0_o *v5; // x20
  struct BattlePerformanceCommandCard_o *_4__this; // x8

  v5 = this;
  if ( (byte_42E6089 & 1) == 0 )
  {
    this = (BattlePerformanceCommandCard___c__DisplayClass120_0_o *)sub_B5D5C4(
                                                                      &Method_System_Linq_Enumerable_Contains_BattleCommandComponent___,
                                                                      (_DWORD)x,
                                                                      (_DWORD)method,
                                                                      v3);
    byte_42E6089 = 1;
  }
  _4__this = v5->fields.__4__this;
  if ( !_4__this )
    sub_B5D69C(this, x);
  return System_Linq_Enumerable__Contains_string_(
           (System_Collections_Generic_IEnumerable_TSource__o *)_4__this->fields.selectedcomponents,
           (System_String_o *)x,
           (const MethodInfo_1CA5180 *)Method_System_Linq_Enumerable_Contains_BattleCommandComponent___);
}


void __fastcall BattlePerformanceCommandCard___c__DisplayClass120_0___DistributeCriticalPoint_b__2(
        BattlePerformanceCommandCard___c__DisplayClass120_0_o *this,
        BattleCommandComponent_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B5D69C(this, 0LL);
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
    sub_B5D69C(this, method);
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
  int v2; // w2
  __int64 v3; // x3
  BattlePerformanceCommandCard__coStartFirstBonus_d__119_o *v4; // x20
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int32_t _1__state; // w8
  struct BattlePerformanceCommandCard_o *_4__this; // x19
  UnityEngine_Object_o *firstBonusObject; // x22
  UnityEngine_GameObject_o **p_firstBonusObject; // x21
  Spawner_o *spawner; // x22
  UnityEngine_Object_o *firstbonus_q; // x23
  float x; // s8
  float y; // s9
  float z; // s10
  float v35; // s0
  float v36; // s1
  float v37; // s2
  float v38; // s3
  float v39; // s4
  float v40; // s5
  float v41; // s6
  float v42; // s7
  UnityEngine_GameObject_o *v43; // x22
  Il2CppObject **p__2__current; // x20
  bool result; // w0
  struct BattleCommandComponent_array *commandCompArray; // x8
  __int64 v47; // x21
  int max_length; // w9
  struct BattlePerformance_o *perf; // x8
  int32_t FirstBonusCriticalRate; // w0
  int32_t v51; // w20
  WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_array *v52; // x21
  BattlePerformanceCommandCard___c_c *v53; // x0
  struct BattlePerformanceCommandCard___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__119_0; // x22
  Il2CppObject *v56; // x23
  struct BattlePerformanceCommandCard___c_StaticFields *v57; // x0
  UnityEngine_Object_o *USFGOActorBattleActionEventConditional_OverwriteParamCondition; // x21
  __int64 v59; // x0
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v61; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o v62; // 0:s3.4,4:s4.4,8:s5.4,12:s6.4

  v4 = this;
  if ( (byte_42E608B & 1) == 0 )
  {
    sub_B5D5C4(&Method_BasicHelper_Find_BattleCommandComponent___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Func_BattleCommandComponent__bool___ctor__, v5, v6, v7);
    sub_B5D5C4(&System_Func_BattleCommandComponent__bool__TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponentInChildren_Animation____68866776, v11, v12, v13);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponentInChildren_SimpleAnimation____68866800, v14, v15, v16);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&Method_BattlePerformanceCommandCard___c__coStartFirstBonus_b__119_0__, v20, v21, v22);
    this = (BattlePerformanceCommandCard__coStartFirstBonus_d__119_o *)sub_B5D5C4(
                                                                         &BattlePerformanceCommandCard___c_TypeInfo,
                                                                         v23,
                                                                         v24,
                                                                         v25);
    byte_42E608B = 1;
  }
  _1__state = v4->fields.__1__state;
  _4__this = v4->fields.__4__this;
  if ( _1__state != 1 )
  {
    if ( _1__state )
      return 0;
    v4->fields.__1__state = -1;
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
      sub_B5D560(&_4__this->fields.firstBonusObject);
    }
    if ( BattleCommand__isQUICK(v4->fields.type, 0LL) )
    {
      spawner = _4__this->fields.spawner;
      firstbonus_q = (UnityEngine_Object_o *)_4__this->fields.firstbonus_q;
    }
    else if ( BattleCommand__isARTS(v4->fields.type, 0LL) )
    {
      spawner = _4__this->fields.spawner;
      firstbonus_q = (UnityEngine_Object_o *)_4__this->fields.firstbonus_a;
    }
    else
    {
      if ( !BattleCommand__isBUSTER(v4->fields.type, 0LL) )
      {
LABEL_22:
        v43 = *p_firstBonusObject;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        this = (BattlePerformanceCommandCard__coStartFirstBonus_d__119_o *)UnityEngine_Object__op_Inequality(
                                                                             (UnityEngine_Object_o *)v43,
                                                                             0LL,
                                                                             0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          this = (BattlePerformanceCommandCard__coStartFirstBonus_d__119_o *)*p_firstBonusObject;
          if ( !*p_firstBonusObject )
            goto LABEL_41;
          _4__this->fields.firstBonusSimpleAnimation = UnityEngine_GameObject__GetComponentInChildren_SimpleAnimation_(
                                                         (UnityEngine_GameObject_o *)this,
                                                         1,
                                                         (const MethodInfo_1CC446C *)Method_UnityEngine_GameObject_GetComponentInChildren_SimpleAnimation____68866800);
          sub_B5D560(&_4__this->fields.firstBonusSimpleAnimation);
          this = (BattlePerformanceCommandCard__coStartFirstBonus_d__119_o *)_4__this->fields.firstBonusObject;
          if ( !this )
            goto LABEL_41;
          _4__this->fields.firstBonusAnimation = (struct UnityEngine_Animation_o *)UnityEngine_GameObject__GetComponentInChildren_SimpleAnimation_(
                                                                                     (UnityEngine_GameObject_o *)this,
                                                                                     1,
                                                                                     (const MethodInfo_1CC446C *)Method_UnityEngine_GameObject_GetComponentInChildren_Animation____68866776);
          sub_B5D560(&_4__this->fields.firstBonusAnimation);
          BattlePerformanceCommandCard__ActivateFirstBonusObject(_4__this, 0LL);
        }
        _4__this->fields.firstAuraType = v4->fields.type;
        goto LABEL_30;
      }
      spawner = _4__this->fields.spawner;
      firstbonus_q = (UnityEngine_Object_o *)_4__this->fields.firstbonus_b;
    }
    zero = UnityEngine_Vector3__get_zero(0LL);
    x = zero.fields.x;
    y = zero.fields.y;
    z = zero.fields.z;
    *(UnityEngine_Quaternion_o *)&v35 = UnityEngine_Quaternion__get_identity(0LL);
    if ( !spawner )
      goto LABEL_41;
    v39 = v35;
    v40 = v36;
    v41 = v37;
    v42 = v38;
    v61.fields.x = x;
    v61.fields.y = y;
    v61.fields.z = z;
    v62.fields.x = v39;
    v62.fields.y = v40;
    v62.fields.z = v41;
    v62.fields.w = v42;
    *p_firstBonusObject = Spawner__Spawn_26157860(spawner, firstbonus_q, v61, v62, 0LL);
    sub_B5D560(&_4__this->fields.firstBonusObject);
    goto LABEL_22;
  }
  v4->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_41;
LABEL_30:
  if ( _4__this->fields.isPlayingMoveCard )
  {
    v4->fields.__2__current = 0LL;
    p__2__current = &v4->fields.__2__current;
    sub_B5D560(p__2__current);
    result = 1;
    *((_DWORD *)p__2__current - 2) = 1;
    return result;
  }
  if ( _4__this->fields.firstAuraType != -1 )
  {
    commandCompArray = _4__this->fields.commandCompArray;
    if ( commandCompArray )
    {
      v47 = 0LL;
      while ( 1 )
      {
        max_length = commandCompArray->max_length;
        if ( (int)v47 >= max_length )
          break;
        if ( (unsigned int)v47 >= max_length )
        {
          v59 = sub_B5D6C8(this);
          sub_B5D668(v59, 0LL);
        }
        method = (const MethodInfo *)commandCompArray->m_Items[v47];
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
          ++v47;
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
          FirstBonusCriticalRate = BattleData__GetFirstBonusCriticalRate((BattleData_o *)this, v4->fields.type, 0LL);
          if ( FirstBonusCriticalRate >= 10 )
          {
            v51 = FirstBonusCriticalRate;
            v52 = (WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_array *)_4__this->fields.commandCompArray;
            v53 = BattlePerformanceCommandCard___c_TypeInfo;
            if ( (BYTE3(BattlePerformanceCommandCard___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !BattlePerformanceCommandCard___c_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BattlePerformanceCommandCard___c_TypeInfo);
              v53 = BattlePerformanceCommandCard___c_TypeInfo;
            }
            static_fields = v53->static_fields;
            _9__119_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__119_0;
            if ( !_9__119_0 )
            {
              if ( (BYTE3(v53->vtable._0_Equals.methodPtr) & 4) != 0 && !v53->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v53);
                static_fields = BattlePerformanceCommandCard___c_TypeInfo->static_fields;
              }
              v56 = (Il2CppObject *)static_fields->__9;
              _9__119_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_BattleCommandComponent__bool__TypeInfo);
              System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
                _9__119_0,
                v56,
                Method_BattlePerformanceCommandCard___c__coStartFirstBonus_b__119_0__,
                (const MethodInfo_2C2ECD0 *)Method_System_Func_BattleCommandComponent__bool___ctor__);
              v57 = BattlePerformanceCommandCard___c_TypeInfo->static_fields;
              v57->__9__119_0 = (struct System_Func_BattleCommandComponent__bool__o *)_9__119_0;
              sub_B5D560(&v57->__9__119_0);
            }
            USFGOActorBattleActionEventConditional_OverwriteParamCondition = (UnityEngine_Object_o *)BasicHelper__Find_USFGOActorBattleActionEventConditional_OverwriteParamCondition_(v52, (System_Func_T__bool__o *)_9__119_0, (const MethodInfo_1AD7278 *)Method_BasicHelper_Find_BattleCommandComponent___);
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
              BattlePerformanceCommandCard__DistributeCriticalPoint(_4__this, v51 / 10, 0, 0LL);
            }
          }
          return 0;
        }
      }
    }
LABEL_41:
    sub_B5D69C(this, method);
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

  v2 = sub_B5D5C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B5D694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B5D5C8(&Method_BattlePerformanceCommandCard__coStartFirstBonus_d__119_System_Collections_IEnumerator_Reset__);
  sub_B5D668(v3, v4);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  int v50; // w1
  int v51; // w2
  __int64 v52; // x3
  int v53; // w1
  int v54; // w2
  __int64 v55; // x3
  int v56; // w1
  int v57; // w2
  __int64 v58; // x3
  int v59; // w1
  int v60; // w2
  __int64 v61; // x3
  int32_t _1__state; // w8
  struct BattlePerformanceCommandCard_o *_4__this; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v64; // x22
  struct System_Collections_Generic_List_BattleCommandComponent__o **v65; // x21
  __int64 ServantNumber; // x0
  UnityEngine_Object_o *npGaugeLightTargetRoot; // x22
  UnityEngine_Transform_o *v68; // x22
  float CARD_ROOT_BASE_X; // s8
  float CARD_ROOT_BASE_Y; // s9
  float v71; // s0
  struct UnityEngine_GameObject_array *p_commandlist; // x8
  __int64 v73; // x26
  __int64 v74; // x9
  __int64 v75; // x8
  struct BattleCommandData_array *commandlist; // x9
  unsigned __int64 max_length; // x10
  struct BattleCommandComponent_array *commandCompArray; // x8
  il2cpp_array_size_t v79; // w25
  BattleCommandComponent_o **v80; // x8
  BattleCommandComponent_o *v81; // x22
  UnityEngine_Transform_o *transform; // x23
  UnityEngine_Transform_o *v83; // x0
  UnityEngine_Transform_o *v84; // x0
  UnityEngine_GameObject_o *Object_21082944; // x23
  System_Object_array *v86; // x24
  __int64 v87; // x1
  struct UnityEngine_Transform_array *npGaugeLightTarget; // x8
  Il2CppObject *v89; // x25
  __int64 v90; // x1
  Il2CppObject *v91; // x25
  __int64 v92; // x1
  Il2CppObject *v93; // x25
  __int64 v94; // x1
  Il2CppObject *v95; // x25
  System_Collections_Hashtable_o *v96; // x0
  _BOOL8 v97; // x0
  __int64 v98; // x1
  struct System_Collections_Generic_List_BattleCommandComponent__o **p_flglist_5__2; // x19
  struct System_Collections_Generic_List_BattleCommandComponent__o *flglist_5__2; // t1
  bool result; // w0
  float npCardEffectDelayTime; // s8
  UnityEngine_WaitForSeconds_o *v103; // x20
  Il2CppObject **v104; // x19
  float npCardDispDelayTime; // s8
  UnityEngine_WaitForSeconds_o *v106; // x20
  Il2CppObject **p__2__current; // x19
  __int64 v108; // x0
  __int64 v109; // x0
  float npGaugeEffectMoveTime; // [xsp+Ch] [xbp-84h] BYREF
  float npGaugeEffectMoveDelayTime; // [xsp+10h] [xbp-80h] BYREF
  int32_t npGaugeEaseType; // [xsp+14h] [xbp-7Ch] BYREF
  System_Collections_Generic_List_Enumerator_T__o v113; // [xsp+18h] [xbp-78h] BYREF
  UnityEngine_Vector3_o v114; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42E608C & 1) == 0 )
  {
    sub_B5D5C4(&iTween_EaseType_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_BattleCommandComponent__Dispose__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_BattleCommandComponent__MoveNext__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_BattleCommandComponent__get_Current__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleCommandComponent__Add__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleCommandComponent__Clear__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleCommandComponent__GetEnumerator__, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleCommandComponent___ctor__, v23, v24, v25);
    sub_B5D5C4(&System_Collections_Generic_List_BattleCommandComponent__TypeInfo, v26, v27, v28);
    sub_B5D5C4(&object___TypeInfo, v29, v30, v31);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v32, v33, v34);
    sub_B5D5C4(&float_TypeInfo, v35, v36, v37);
    sub_B5D5C4(&UnityEngine_WaitForSeconds_TypeInfo, v38, v39, v40);
    sub_B5D5C4(&StringLiteral_18341/*"easetype"*/, v41, v42, v43);
    sub_B5D5C4(&StringLiteral_22982/*"time"*/, v44, v45, v46);
    sub_B5D5C4(&StringLiteral_18481/*"effect/ef_noblegauge01"*/, v47, v48, v49);
    sub_B5D5C4(&StringLiteral_18173/*"delay"*/, v50, v51, v52);
    sub_B5D5C4(&StringLiteral_18482/*"effect/ef_noblegauge02"*/, v53, v54, v55);
    sub_B5D5C4(&StringLiteral_21800/*"position"*/, v56, v57, v58);
    sub_B5D5C4(&iTween_TypeInfo, v59, v60, v61);
    byte_42E608C = 1;
  }
  memset(&v113, 0, sizeof(v113));
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
      (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_BattleCommandComponent__Clear__);
    *p_flglist_5__2 = 0LL;
    sub_B5D560(p_flglist_5__2);
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
        &v113,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)ServantNumber,
        (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_BattleCommandComponent__GetEnumerator__);
      while ( 1 )
      {
        v97 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v113,
                (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_BattleCommandComponent__MoveNext__);
        if ( !v97 )
          break;
        if ( !v113.fields.current )
          sub_B5D69C(v97, v98);
        if ( !BYTE4(v113.fields.current[23].monitor) )
          BattleCommandComponent__playOpenNobleCard((BattleCommandComponent_o *)v113.fields.current, 0LL);
      }
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v113,
        (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_BattleCommandComponent__Dispose__);
      if ( _4__this )
      {
        npCardDispDelayTime = _4__this->fields.npCardDispDelayTime;
        v106 = (UnityEngine_WaitForSeconds_o *)sub_B5D694(UnityEngine_WaitForSeconds_TypeInfo);
        UnityEngine_WaitForSeconds___ctor(v106, npCardDispDelayTime, 0LL);
        this->fields.__2__current = (Il2CppObject *)v106;
        p__2__current = &this->fields.__2__current;
        sub_B5D560(p__2__current);
        *((_DWORD *)p__2__current - 2) = 2;
        return 1;
      }
    }
    goto LABEL_69;
  }
  if ( _1__state )
    return 0;
  this->fields.__1__state = -1;
  v64 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_BattleCommandComponent__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v64,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_BattleCommandComponent___ctor__);
  v65 = &this->fields._flglist_5__2;
  this->fields._flglist_5__2 = (struct System_Collections_Generic_List_BattleCommandComponent__o *)v64;
  sub_B5D560(&this->fields._flglist_5__2);
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
    v68 = _4__this->fields.npGaugeLightTargetRoot;
    CARD_ROOT_BASE_X = _4__this->fields.CARD_ROOT_BASE_X;
    CARD_ROOT_BASE_Y = _4__this->fields.CARD_ROOT_BASE_Y;
    v71 = BattlePerformanceCommandCard__FSCardRootOffsetY(_4__this, 0LL);
    if ( !v68 )
      goto LABEL_69;
    v114.fields.y = CARD_ROOT_BASE_Y + v71;
    v114.fields.z = 0.0;
    v114.fields.x = CARD_ROOT_BASE_X;
    UnityEngine_Transform__set_localPosition(v68, v114, 0LL);
  }
  p_commandlist = _4__this->fields.p_commandlist;
  if ( !p_commandlist )
LABEL_69:
    sub_B5D69C(ServantNumber, method);
  v73 = 9LL;
  while ( 1 )
  {
    v74 = *(_QWORD *)&p_commandlist->max_length;
    v75 = v73 - 4;
    if ( v73 - 4 >= ((v74 << 32) - 0x100000000LL) >> 32 )
      break;
    commandlist = _4__this->fields.commandlist;
    if ( !commandlist )
      goto LABEL_69;
    max_length = commandlist->max_length;
    if ( v75 < (int)max_length )
    {
      if ( v75 >= max_length )
        goto LABEL_83;
      method = (const MethodInfo *)*((_QWORD *)&commandlist->obj.klass + v73);
      if ( method )
      {
        ServantNumber = BattlePerformanceCommandCard__GetServantNumber(_4__this, (BattleCommandData_o *)method, 0LL);
        commandCompArray = _4__this->fields.commandCompArray;
        if ( !commandCompArray )
          goto LABEL_69;
        v79 = ServantNumber;
        if ( (unsigned int)(ServantNumber + 5) >= commandCompArray->max_length )
          goto LABEL_83;
        v80 = &commandCompArray->m_Items[(int)ServantNumber + 1];
        v81 = v80[4];
        if ( !v81 )
          goto LABEL_69;
        ServantNumber = BattleCommandComponent__checkObject(v80[4], 0LL);
        if ( (ServantNumber & 1) != 0 )
        {
          ServantNumber = (__int64)*v65;
          if ( !*v65 )
            goto LABEL_69;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)ServantNumber,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v81,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_BattleCommandComponent__Add__);
          ServantNumber = (__int64)BattlePerformanceCommandCard__GetStatusUiObj(_4__this, v81->fields.data, 0LL);
          if ( !ServantNumber )
            goto LABEL_69;
          ServantNumber = *(_QWORD *)(ServantNumber + 160);
          if ( !ServantNumber )
            goto LABEL_69;
          transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)ServantNumber, 0LL);
          ServantNumber = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)_4__this, 0LL);
          if ( !ServantNumber )
            goto LABEL_69;
          v83 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)ServantNumber, 0LL);
          BaseMonoBehaviour__createObject_21082944(
            (BaseMonoBehaviour_o *)_4__this,
            (System_String_o *)StringLiteral_18481/*"effect/ef_noblegauge01"*/,
            v83,
            transform,
            0LL);
          ServantNumber = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)_4__this, 0LL);
          if ( !ServantNumber )
            goto LABEL_69;
          v84 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)ServantNumber, 0LL);
          Object_21082944 = BaseMonoBehaviour__createObject_21082944(
                              (BaseMonoBehaviour_o *)_4__this,
                              (System_String_o *)StringLiteral_18482/*"effect/ef_noblegauge02"*/,
                              v84,
                              transform,
                              0LL);
          ServantNumber = sub_B5D5DC(object___TypeInfo, 8LL);
          if ( !ServantNumber )
            goto LABEL_69;
          v86 = (System_Object_array *)ServantNumber;
          ServantNumber = StringLiteral_21800/*"position"*/;
          if ( StringLiteral_21800/*"position"*/ )
          {
            ServantNumber = sub_B5D684(StringLiteral_21800/*"position"*/, v86->obj.klass->_1.element_class);
            if ( !ServantNumber )
              goto LABEL_85;
            v87 = StringLiteral_21800/*"position"*/;
          }
          else
          {
            v87 = 0LL;
          }
          if ( !v86->max_length )
            goto LABEL_83;
          v86->m_Items[0] = (Il2CppObject *)v87;
          sub_B5D560(v86->m_Items);
          npGaugeLightTarget = _4__this->fields.npGaugeLightTarget;
          if ( !npGaugeLightTarget )
            goto LABEL_69;
          if ( v79 >= npGaugeLightTarget->max_length )
            goto LABEL_83;
          v89 = (Il2CppObject *)npGaugeLightTarget->m_Items[v79];
          if ( v89 )
          {
            ServantNumber = sub_B5D684(v89, v86->obj.klass->_1.element_class);
            if ( !ServantNumber )
            {
LABEL_85:
              v109 = sub_B5D6BC();
              sub_B5D668(v109, 0LL);
            }
          }
          if ( v86->max_length <= 1 )
            goto LABEL_83;
          v86->m_Items[1] = v89;
          sub_B5D560(&v86->m_Items[1]);
          ServantNumber = StringLiteral_18341/*"easetype"*/;
          if ( StringLiteral_18341/*"easetype"*/ )
          {
            ServantNumber = sub_B5D684(StringLiteral_18341/*"easetype"*/, v86->obj.klass->_1.element_class);
            if ( !ServantNumber )
              goto LABEL_85;
            v90 = StringLiteral_18341/*"easetype"*/;
          }
          else
          {
            v90 = 0LL;
          }
          if ( v86->max_length <= 2 )
            goto LABEL_83;
          v86->m_Items[2] = (Il2CppObject *)v90;
          sub_B5D560(&v86->m_Items[2]);
          npGaugeEaseType = _4__this->fields.npGaugeEaseType;
          ServantNumber = j_il2cpp_value_box_0(iTween_EaseType_TypeInfo, &npGaugeEaseType);
          v91 = (Il2CppObject *)ServantNumber;
          if ( ServantNumber )
          {
            ServantNumber = sub_B5D684(ServantNumber, v86->obj.klass->_1.element_class);
            if ( !ServantNumber )
              goto LABEL_85;
          }
          if ( v86->max_length <= 3 )
            goto LABEL_83;
          v86->m_Items[3] = v91;
          sub_B5D560(&v86->m_Items[3]);
          ServantNumber = StringLiteral_18173/*"delay"*/;
          if ( StringLiteral_18173/*"delay"*/ )
          {
            ServantNumber = sub_B5D684(StringLiteral_18173/*"delay"*/, v86->obj.klass->_1.element_class);
            if ( !ServantNumber )
              goto LABEL_85;
            v92 = StringLiteral_18173/*"delay"*/;
          }
          else
          {
            v92 = 0LL;
          }
          if ( v86->max_length <= 4 )
            goto LABEL_83;
          v86->m_Items[4] = (Il2CppObject *)v92;
          sub_B5D560(&v86->m_Items[4]);
          npGaugeEffectMoveDelayTime = _4__this->fields.npGaugeEffectMoveDelayTime;
          ServantNumber = j_il2cpp_value_box_0(float_TypeInfo, &npGaugeEffectMoveDelayTime);
          v93 = (Il2CppObject *)ServantNumber;
          if ( ServantNumber )
          {
            ServantNumber = sub_B5D684(ServantNumber, v86->obj.klass->_1.element_class);
            if ( !ServantNumber )
              goto LABEL_85;
          }
          if ( v86->max_length <= 5 )
            goto LABEL_83;
          v86->m_Items[5] = v93;
          sub_B5D560(&v86->m_Items[5]);
          ServantNumber = StringLiteral_22982/*"time"*/;
          if ( StringLiteral_22982/*"time"*/ )
          {
            ServantNumber = sub_B5D684(StringLiteral_22982/*"time"*/, v86->obj.klass->_1.element_class);
            if ( !ServantNumber )
              goto LABEL_85;
            v94 = StringLiteral_22982/*"time"*/;
          }
          else
          {
            v94 = 0LL;
          }
          if ( v86->max_length <= 6 )
          {
LABEL_83:
            v108 = sub_B5D6C8(ServantNumber);
            sub_B5D668(v108, 0LL);
          }
          v86->m_Items[6] = (Il2CppObject *)v94;
          sub_B5D560(&v86->m_Items[6]);
          npGaugeEffectMoveTime = _4__this->fields.npGaugeEffectMoveTime;
          ServantNumber = j_il2cpp_value_box_0(float_TypeInfo, &npGaugeEffectMoveTime);
          v95 = (Il2CppObject *)ServantNumber;
          if ( ServantNumber )
          {
            ServantNumber = sub_B5D684(ServantNumber, v86->obj.klass->_1.element_class);
            if ( !ServantNumber )
              goto LABEL_85;
          }
          if ( v86->max_length <= 7 )
            goto LABEL_83;
          v86->m_Items[7] = v95;
          sub_B5D560(&v86->m_Items[7]);
          if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
          v96 = iTween__Hash(v86, 0LL);
          iTween__MoveTo_43183064(Object_21082944, v96, 0LL);
          v81->fields.nobleGaugeEffect = Object_21082944;
          sub_B5D560(&v81->fields.nobleGaugeEffect);
        }
      }
    }
    p_commandlist = _4__this->fields.p_commandlist;
    ++v73;
    if ( !p_commandlist )
      goto LABEL_69;
  }
  npCardEffectDelayTime = _4__this->fields.npCardEffectDelayTime;
  v103 = (UnityEngine_WaitForSeconds_o *)sub_B5D694(UnityEngine_WaitForSeconds_TypeInfo);
  UnityEngine_WaitForSeconds___ctor(v103, npCardEffectDelayTime, 0LL);
  this->fields.__2__current = (Il2CppObject *)v103;
  v104 = &this->fields.__2__current;
  sub_B5D560(v104);
  result = 1;
  *((_DWORD *)v104 - 2) = 1;
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

  v2 = sub_B5D5C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B5D694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B5D5C8(&Method_BattlePerformanceCommandCard__colOpenNpCard_d__182_System_Collections_IEnumerator_Reset__);
  sub_B5D668(v3, v4);
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
  int v2; // w2
  __int64 v3; // x3
  BattlePerformanceCommandCard__showComboEffectNormal_d__135_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct BattlePerformanceCommandCard_o *_4__this; // x20
  UnityEngine_Object_o *v9; // x21
  DefCoroutine_c *v10; // x0
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  struct BattleComboData_o *combo; // x8
  DefCoroutine_c *v14; // x0
  Il2CppObject **v15; // x19
  int v16; // w8
  DefCoroutine_c *v17; // x0
  DefCoroutine_c *v18; // x0
  DefCoroutine_c *v19; // x0
  int32_t seName; // [xsp+Ch] [xbp-24h] BYREF
  UnityEngine_GameObject_o *prefab; // [xsp+18h] [xbp-18h] BYREF

  v4 = this;
  if ( (byte_42E608E & 1) == 0 )
  {
    sub_B5D5C4(&DefCoroutine_TypeInfo, (_DWORD)method, v2, v3);
    this = (BattlePerformanceCommandCard__showComboEffectNormal_d__135_o *)sub_B5D5C4(
                                                                             &UnityEngine_Object_TypeInfo,
                                                                             v5,
                                                                             v6,
                                                                             v7);
    byte_42E608E = 1;
  }
  prefab = 0LL;
  seName = 0;
  _4__this = v4->fields.__4__this;
  switch ( v4->fields.__1__state )
  {
    case 0:
      v4->fields.__1__state = -1;
      prefab = 0LL;
      seName = -1;
      if ( !_4__this )
        goto LABEL_55;
      BattlePerformanceCommandCard__setComboEffectPrefab(_4__this, v4->fields.combo, &prefab, &seName, 0LL);
      v9 = (UnityEngine_Object_o *)prefab;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Inequality(v9, 0LL, 0LL) )
        goto LABEL_20;
      BattlePerformanceCommandCard__playComboEffect(_4__this, prefab, seName, 0LL);
      v10 = DefCoroutine_TypeInfo;
      if ( (BYTE3(DefCoroutine_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DefCoroutine_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DefCoroutine_TypeInfo);
        v10 = DefCoroutine_TypeInfo;
      }
      v4->fields.__2__current = (Il2CppObject *)v10->static_fields->milliSecNine;
      p__2__current = &v4->fields.__2__current;
      sub_B5D560(p__2__current);
      result = 1;
      *((_DWORD *)p__2__current - 2) = 1;
      return result;
    case 1:
      v4->fields.__1__state = -1;
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
      method = (const MethodInfo *)v4->fields.combo;
      if ( !method )
        goto LABEL_55;
      if ( LOBYTE(method->name) )
      {
        BattlePerformanceCommandCard__PlayFlash(_4__this, (BattleComboData_o *)method, 0LL);
        combo = v4->fields.combo;
        if ( !combo )
LABEL_55:
          sub_B5D69C(this, method);
        v14 = DefCoroutine_TypeInfo;
        if ( combo->fields.samecount == 3 )
        {
          if ( (WORD1(DefCoroutine_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !DefCoroutine_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(DefCoroutine_TypeInfo);
            v14 = DefCoroutine_TypeInfo;
          }
          v4->fields.__2__current = (Il2CppObject *)v14->static_fields->milliSecThree;
          v15 = &v4->fields.__2__current;
          sub_B5D560(v15);
          v16 = 2;
        }
        else
        {
          if ( (WORD1(DefCoroutine_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !DefCoroutine_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(DefCoroutine_TypeInfo);
            v14 = DefCoroutine_TypeInfo;
          }
          v4->fields.__2__current = (Il2CppObject *)v14->static_fields->milliSecEleven;
          v15 = &v4->fields.__2__current;
          sub_B5D560(v15);
          v16 = 3;
        }
      }
      else
      {
LABEL_29:
        if ( HIDWORD(method->name) != 3 )
          return 0;
        BattlePerformanceCommandCard__PlayFlashComboSvt(_4__this, (BattleComboData_o *)method, 0LL);
        v17 = DefCoroutine_TypeInfo;
        if ( (BYTE3(DefCoroutine_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DefCoroutine_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DefCoroutine_TypeInfo);
          v17 = DefCoroutine_TypeInfo;
        }
        v4->fields.__2__current = (Il2CppObject *)v17->static_fields->milliSecTwo;
        v15 = &v4->fields.__2__current;
        sub_B5D560(v15);
        v16 = 4;
      }
LABEL_54:
      *((_DWORD *)v15 - 2) = v16;
      return 1;
    case 2:
    case 3:
      v4->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_55;
      this = (BattlePerformanceCommandCard__showComboEffectNormal_d__135_o *)_4__this->fields.perf;
      if ( !this )
        goto LABEL_55;
      BattlePerformance__ChangeBattleSpeed((BattlePerformance_o *)this, 0LL);
      method = (const MethodInfo *)v4->fields.combo;
      if ( !method )
        goto LABEL_55;
      goto LABEL_29;
    case 4:
      v4->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_55;
      this = (BattlePerformanceCommandCard__showComboEffectNormal_d__135_o *)_4__this->fields.perf;
      if ( !this )
        goto LABEL_55;
      BattlePerformance__ChangeBattleSpeed((BattlePerformance_o *)this, 0LL);
      BattlePerformanceCommandCard__MoveSelectedCard(_4__this, 0.3, 0LL);
      BattlePerformanceCommandCard__AddExtraCard(_4__this, 0LL);
      BattlePerformanceCommandCard__MoveExtraCard(_4__this, 0.4, 0LL);
      v18 = DefCoroutine_TypeInfo;
      if ( (BYTE3(DefCoroutine_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DefCoroutine_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DefCoroutine_TypeInfo);
        v18 = DefCoroutine_TypeInfo;
      }
      v4->fields.__2__current = (Il2CppObject *)v18->static_fields->milliSecFour;
      v15 = &v4->fields.__2__current;
      sub_B5D560(v15);
      v16 = 5;
      goto LABEL_54;
    case 5:
      v4->fields.__1__state = -1;
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
      v4->fields.__2__current = (Il2CppObject *)v19->static_fields->milliSecEleven;
      v15 = &v4->fields.__2__current;
      sub_B5D560(v15);
      v16 = 6;
      goto LABEL_54;
    case 6:
      v4->fields.__1__state = -1;
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

  v2 = sub_B5D5C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B5D694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B5D5C8(&Method_BattlePerformanceCommandCard__showComboEffectNormal_d__135_System_Collections_IEnumerator_Reset__);
  sub_B5D668(v3, v4);
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
  int v2; // w2
  __int64 v3; // x3
  BattlePerformanceCommandCard__showComboEffectShort_d__134_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  struct BattlePerformanceCommandCard_o *_4__this; // x20
  BattlePerformanceCommandCard__showComboEffectShort_d__134_o **p_combo; // x24
  DefCoroutine_c *v28; // x0
  Il2CppObject **p__2__current; // x19
  int v30; // w8
  System_Collections_Generic_IEnumerable_TSource__o *selectedcomponents; // x21
  BattlePerformanceCommandCard___c_c *v32; // x0
  struct BattlePerformanceCommandCard___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__134_0; // x22
  Il2CppObject *v35; // x23
  struct BattlePerformanceCommandCard___c_StaticFields *v36; // x0
  UICommonButton_o *v37; // x0
  struct BattlePerformance_o *perf; // x8
  int32_t FirstBonusCriticalRate; // w0
  bool isExtraAttack; // w0
  DefCoroutine_c *v41; // x8
  Il2CppObject **p_milliSecThreeSixSix; // x8
  DefCoroutine_c *v43; // x0
  bool result; // w0
  struct BattleComboData_o *v45; // x8
  DefCoroutine_c *v46; // x0
  UnityEngine_Object_o *v47; // x21
  struct BattleComboData_o *combo; // x8
  DefCoroutine_c *v49; // x0
  Il2CppObject **v50; // x19
  DefCoroutine_c *v51; // x0
  DefCoroutine_c *v52; // x0
  DefCoroutine_c *v53; // x0
  DefCoroutine_c *v54; // x0
  int32_t seName; // [xsp+4h] [xbp-4Ch] BYREF
  UnityEngine_GameObject_o *prefab; // [xsp+8h] [xbp-48h] BYREF

  v4 = this;
  if ( (byte_42E608F & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Array_IndexOf_BattleCommandComponent___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&DefCoroutine_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_System_Linq_Enumerable_FirstOrDefault_BattleCommandComponent___, v8, v9, v10);
    sub_B5D5C4(&Method_System_Func_BattleCommandComponent__bool___ctor__, v11, v12, v13);
    sub_B5D5C4(&System_Func_BattleCommandComponent__bool__TypeInfo, v14, v15, v16);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&Method_BattlePerformanceCommandCard___c__showComboEffectShort_b__134_0__, v20, v21, v22);
    this = (BattlePerformanceCommandCard__showComboEffectShort_d__134_o *)sub_B5D5C4(
                                                                            &BattlePerformanceCommandCard___c_TypeInfo,
                                                                            v23,
                                                                            v24,
                                                                            v25);
    byte_42E608F = 1;
  }
  prefab = 0LL;
  seName = 0;
  _4__this = v4->fields.__4__this;
  switch ( v4->fields.__1__state )
  {
    case 0:
      v4->fields.__1__state = -1;
      prefab = 0LL;
      seName = -1;
      if ( !_4__this )
        goto LABEL_116;
      BattlePerformanceCommandCard__setComboEffectPrefab(_4__this, v4->fields.combo, &prefab, &seName, 0LL);
      v47 = (UnityEngine_Object_o *)prefab;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Inequality(v47, 0LL, 0LL) )
        goto LABEL_7;
      BattlePerformanceCommandCard__playComboEffect(_4__this, prefab, seName, 0LL);
      this = (BattlePerformanceCommandCard__showComboEffectShort_d__134_o *)v4->fields.combo;
      if ( !this )
        goto LABEL_116;
      this = (BattlePerformanceCommandCard__showComboEffectShort_d__134_o *)BattleComboData__AchieveAnyChain(
                                                                              (BattleComboData_o *)this,
                                                                              0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        v52 = DefCoroutine_TypeInfo;
        if ( (BYTE3(DefCoroutine_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DefCoroutine_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DefCoroutine_TypeInfo);
          v52 = DefCoroutine_TypeInfo;
        }
        v4->fields.__2__current = (Il2CppObject *)v52->static_fields->milliSecNine;
        p__2__current = &v4->fields.__2__current;
        sub_B5D560(p__2__current);
        v30 = 6;
        goto LABEL_115;
      }
      combo = v4->fields.combo;
      if ( !combo )
        goto LABEL_116;
      if ( !combo->fields.flash )
      {
        if ( !combo->fields.isMighty )
          goto LABEL_106;
        this = (BattlePerformanceCommandCard__showComboEffectShort_d__134_o *)BattleComboData__isExtraAttack(
                                                                                v4->fields.combo,
                                                                                0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          v53 = DefCoroutine_TypeInfo;
          if ( (BYTE3(DefCoroutine_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !DefCoroutine_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(DefCoroutine_TypeInfo);
            v53 = DefCoroutine_TypeInfo;
          }
          v4->fields.__2__current = (Il2CppObject *)v53->static_fields->milliSecThreeThreeThree;
          p__2__current = &v4->fields.__2__current;
          sub_B5D560(p__2__current);
          v30 = 3;
          goto LABEL_115;
        }
        combo = v4->fields.combo;
        if ( combo )
        {
LABEL_106:
          v54 = DefCoroutine_TypeInfo;
          if ( combo->fields.isMighty )
          {
            if ( (WORD1(DefCoroutine_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
              && !DefCoroutine_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(DefCoroutine_TypeInfo);
              v54 = DefCoroutine_TypeInfo;
            }
            v4->fields.__2__current = (Il2CppObject *)v54->static_fields->milliSecTwoSixSix;
            p__2__current = &v4->fields.__2__current;
            sub_B5D560(p__2__current);
            v30 = 4;
          }
          else
          {
            if ( (WORD1(DefCoroutine_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
              && !DefCoroutine_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(DefCoroutine_TypeInfo);
              v54 = DefCoroutine_TypeInfo;
            }
            v4->fields.__2__current = (Il2CppObject *)v54->static_fields->milliSecThree;
            p__2__current = &v4->fields.__2__current;
            sub_B5D560(p__2__current);
            v30 = 5;
          }
          goto LABEL_115;
        }
LABEL_116:
        sub_B5D69C(this, method);
      }
      v49 = DefCoroutine_TypeInfo;
      if ( combo->fields.samecount != 3 )
      {
        if ( (WORD1(DefCoroutine_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !DefCoroutine_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DefCoroutine_TypeInfo);
          v49 = DefCoroutine_TypeInfo;
        }
        v4->fields.__2__current = (Il2CppObject *)v49->static_fields->milliSecTwoSixSix;
        p__2__current = &v4->fields.__2__current;
        sub_B5D560(p__2__current);
        v30 = 2;
LABEL_115:
        *((_DWORD *)p__2__current - 2) = v30;
        return 1;
      }
      if ( (WORD1(DefCoroutine_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !DefCoroutine_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DefCoroutine_TypeInfo);
        v49 = DefCoroutine_TypeInfo;
      }
      v4->fields.__2__current = (Il2CppObject *)v49->static_fields->milliSecThreeThreeThree;
      v50 = &v4->fields.__2__current;
      sub_B5D560(v50);
      result = 1;
      *((_DWORD *)v50 - 2) = 1;
      return result;
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
      v4->fields.__1__state = -1;
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
      p_combo = (BattlePerformanceCommandCard__showComboEffectShort_d__134_o **)&v4->fields.combo;
      method = (const MethodInfo *)v4->fields.combo;
      if ( !method )
        goto LABEL_116;
      if ( LOBYTE(method->name) )
      {
        BattlePerformanceCommandCard__PlayFlash(_4__this, (BattleComboData_o *)method, 0LL);
        if ( *p_combo )
        {
          v28 = DefCoroutine_TypeInfo;
          if ( *(&(*p_combo)->fields.__1__state + 1) == 3 )
          {
            if ( (WORD1(DefCoroutine_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
              && !DefCoroutine_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(DefCoroutine_TypeInfo);
              v28 = DefCoroutine_TypeInfo;
            }
            v4->fields.__2__current = (Il2CppObject *)v28->static_fields->milliSecThreeSixSix;
            p__2__current = &v4->fields.__2__current;
            sub_B5D560(p__2__current);
            v30 = 7;
          }
          else
          {
            if ( (WORD1(DefCoroutine_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
              && !DefCoroutine_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(DefCoroutine_TypeInfo);
              v28 = DefCoroutine_TypeInfo;
            }
            v4->fields.__2__current = (Il2CppObject *)v28->static_fields->milliSecEightSixSix;
            p__2__current = &v4->fields.__2__current;
            sub_B5D560(p__2__current);
            v30 = 8;
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
          v43 = DefCoroutine_TypeInfo;
          if ( (BYTE3(DefCoroutine_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !DefCoroutine_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(DefCoroutine_TypeInfo);
            v43 = DefCoroutine_TypeInfo;
          }
          v4->fields.__2__current = (Il2CppObject *)v43->static_fields->milliSecTwo;
          p__2__current = &v4->fields.__2__current;
          sub_B5D560(p__2__current);
          v30 = 10;
          goto LABEL_115;
        }
        selectedcomponents = (System_Collections_Generic_IEnumerable_TSource__o *)_4__this->fields.selectedcomponents;
        v32 = BattlePerformanceCommandCard___c_TypeInfo;
        if ( (BYTE3(BattlePerformanceCommandCard___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BattlePerformanceCommandCard___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BattlePerformanceCommandCard___c_TypeInfo);
          v32 = BattlePerformanceCommandCard___c_TypeInfo;
        }
        static_fields = v32->static_fields;
        _9__134_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__134_0;
        if ( !_9__134_0 )
        {
          if ( (BYTE3(v32->vtable._0_Equals.methodPtr) & 4) != 0 && !v32->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v32);
            static_fields = BattlePerformanceCommandCard___c_TypeInfo->static_fields;
          }
          v35 = (Il2CppObject *)static_fields->__9;
          _9__134_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_BattleCommandComponent__bool__TypeInfo);
          System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
            _9__134_0,
            v35,
            Method_BattlePerformanceCommandCard___c__showComboEffectShort_b__134_0__,
            (const MethodInfo_2C2ECD0 *)Method_System_Func_BattleCommandComponent__bool___ctor__);
          v36 = BattlePerformanceCommandCard___c_TypeInfo->static_fields;
          v36->__9__134_0 = (struct System_Func_BattleCommandComponent__bool__o *)_9__134_0;
          sub_B5D560(&v36->__9__134_0);
        }
        v37 = (UICommonButton_o *)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                                    selectedcomponents,
                                    (System_Func_TSource__bool__o *)_9__134_0,
                                    (const MethodInfo_1CAC850 *)Method_System_Linq_Enumerable_FirstOrDefault_BattleCommandComponent___);
        this = (BattlePerformanceCommandCard__showComboEffectShort_d__134_o *)System_Array__IndexOf_UICommonButton_(
                                                                                (UICommonButton_array *)_4__this->fields.selectedcomponents,
                                                                                v37,
                                                                                (const MethodInfo_1FC18BC *)Method_System_Array_IndexOf_BattleCommandComponent___);
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
          v41 = DefCoroutine_TypeInfo;
          if ( isExtraAttack )
          {
            if ( (WORD1(DefCoroutine_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
              && !DefCoroutine_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(DefCoroutine_TypeInfo);
              v41 = DefCoroutine_TypeInfo;
            }
            p_milliSecThreeSixSix = (Il2CppObject **)&v41->static_fields->milliSecThreeSixSix;
          }
          else
          {
            if ( (WORD1(DefCoroutine_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
              && !DefCoroutine_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(DefCoroutine_TypeInfo);
              v41 = DefCoroutine_TypeInfo;
            }
            p_milliSecThreeSixSix = (Il2CppObject **)&v41->static_fields->milliSecEightSixSix;
          }
          v4->fields.__2__current = *p_milliSecThreeSixSix;
          p__2__current = &v4->fields.__2__current;
          sub_B5D560(p__2__current);
          v30 = 9;
          goto LABEL_115;
        }
      }
      goto LABEL_116;
    case 7:
    case 8:
      v4->fields.__1__state = -1;
      if ( _4__this )
      {
        this = (BattlePerformanceCommandCard__showComboEffectShort_d__134_o *)_4__this->fields.perf;
        if ( this )
        {
          BattlePerformance__ChangeBattleSpeed((BattlePerformance_o *)this, 0LL);
          p_combo = (BattlePerformanceCommandCard__showComboEffectShort_d__134_o **)&v4->fields.combo;
          method = (const MethodInfo *)v4->fields.combo;
          if ( method )
            goto LABEL_23;
        }
      }
      goto LABEL_116;
    case 9:
      v4->fields.__1__state = -1;
      if ( _4__this )
      {
        this = (BattlePerformanceCommandCard__showComboEffectShort_d__134_o *)_4__this->fields.perf;
        if ( this )
        {
          BattlePerformance__ChangeBattleSpeed((BattlePerformance_o *)this, 0LL);
          method = (const MethodInfo *)v4->fields.combo;
          if ( method )
            goto LABEL_53;
        }
      }
      goto LABEL_116;
    case 0xA:
      v4->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_116;
      this = (BattlePerformanceCommandCard__showComboEffectShort_d__134_o *)_4__this->fields.perf;
      if ( !this )
        goto LABEL_116;
      BattlePerformance__ChangeBattleSpeed((BattlePerformance_o *)this, 0LL);
      BattlePerformanceCommandCard__MoveSelectedCard(_4__this, 0.3, 0LL);
      BattlePerformanceCommandCard__AddExtraCard(_4__this, 0LL);
      BattlePerformanceCommandCard__MoveExtraCard(_4__this, 0.3, 0LL);
      v51 = DefCoroutine_TypeInfo;
      if ( (BYTE3(DefCoroutine_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DefCoroutine_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DefCoroutine_TypeInfo);
        v51 = DefCoroutine_TypeInfo;
      }
      v4->fields.__2__current = (Il2CppObject *)v51->static_fields->milliSecTwoSixSix;
      p__2__current = &v4->fields.__2__current;
      sub_B5D560(p__2__current);
      v30 = 11;
      goto LABEL_115;
    case 0xB:
      v4->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_116;
      this = (BattlePerformanceCommandCard__showComboEffectShort_d__134_o *)_4__this->fields.perf;
      if ( !this )
        goto LABEL_116;
      BattlePerformance__ChangeBattleSpeed((BattlePerformance_o *)this, 0LL);
      BattlePerformanceCommandCard__PlayFlashExtra(_4__this, 0LL);
      v45 = v4->fields.combo;
      if ( !v45 )
        goto LABEL_116;
      v46 = DefCoroutine_TypeInfo;
      if ( v45->fields.flash )
      {
        if ( (WORD1(DefCoroutine_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !DefCoroutine_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DefCoroutine_TypeInfo);
          v46 = DefCoroutine_TypeInfo;
        }
        v4->fields.__2__current = (Il2CppObject *)v46->static_fields->milliSecFour;
        p__2__current = &v4->fields.__2__current;
        sub_B5D560(p__2__current);
        v30 = 13;
      }
      else
      {
        if ( (WORD1(DefCoroutine_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !DefCoroutine_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DefCoroutine_TypeInfo);
          v46 = DefCoroutine_TypeInfo;
        }
        v4->fields.__2__current = (Il2CppObject *)v46->static_fields->milliSecThreeThreeThree;
        p__2__current = &v4->fields.__2__current;
        sub_B5D560(p__2__current);
        v30 = 12;
      }
      goto LABEL_115;
    case 0xC:
    case 0xD:
      v4->fields.__1__state = -1;
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

  v2 = sub_B5D5C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B5D694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B5D5C8(&Method_BattlePerformanceCommandCard__showComboEffectShort_d__134_System_Collections_IEnumerator_Reset__);
  sub_B5D668(v3, v4);
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
  int v2; // w2
  __int64 v3; // x3
  BattlePerformanceCommandCard__showComboEffect_d__133_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct BattlePerformanceCommandCard_o *_4__this; // x20
  DefCoroutine_c *v9; // x0
  Il2CppObject **p__2__current; // x19
  UnityEngine_Object_o *chainBonusObject; // x21
  UnityEngine_Object_o *v12; // x21
  __int64 v13; // x22
  struct BattleCommandComponent_array *selectedcomponents; // x8
  int32_t CommandType; // w0
  struct BattleCommandComponent_array *v16; // x8
  UnityEngine_GameObject_o *gameObject; // x21
  float g; // s5
  float b; // s6
  float a; // s7
  float v21; // s4
  System_Collections_IEnumerator_o *v22; // x0
  int v23; // w8
  System_Collections_IEnumerator_o *v24; // x0
  bool result; // w0
  DefCoroutine_c *v26; // x0
  Il2CppObject **v27; // x19
  __int64 v28; // x0
  UnityEngine_Color_o clear; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4 OVERLAPPED

  v4 = this;
  if ( (byte_42E608D & 1) == 0 )
  {
    sub_B5D5C4(&DefCoroutine_TypeInfo, (_DWORD)method, v2, v3);
    this = (BattlePerformanceCommandCard__showComboEffect_d__133_o *)sub_B5D5C4(
                                                                       &UnityEngine_Object_TypeInfo,
                                                                       v5,
                                                                       v6,
                                                                       v7);
    byte_42E608D = 1;
  }
  _4__this = v4->fields.__4__this;
  switch ( v4->fields.__1__state )
  {
    case 0:
      v4->fields.__1__state = -1;
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
        v12 = (UnityEngine_Object_o *)_4__this->fields.chainBonusObject;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        UnityEngine_Object__Destroy_35620236(v12, 0LL);
      }
      v13 = 0LL;
      break;
    case 1:
      v4->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_44;
      v24 = BattlePerformanceCommandCard__showComboEffectNormal(_4__this, v4->fields.combo, 0LL);
      v4->fields.__2__current = (Il2CppObject *)UnityEngine_MonoBehaviour__StartCoroutine_35615088(
                                                  (UnityEngine_MonoBehaviour_o *)_4__this,
                                                  v24,
                                                  0LL);
      sub_B5D560(&v4->fields.__2__current);
      v23 = 2;
      goto LABEL_33;
    case 2:
    case 3:
      v4->fields.__1__state = -1;
      v9 = DefCoroutine_TypeInfo;
      if ( (BYTE3(DefCoroutine_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DefCoroutine_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DefCoroutine_TypeInfo);
        v9 = DefCoroutine_TypeInfo;
      }
      v4->fields.__2__current = (Il2CppObject *)v9->static_fields->milliSecOne;
      p__2__current = &v4->fields.__2__current;
      sub_B5D560(p__2__current);
      *((_DWORD *)p__2__current - 2) = 4;
      return 1;
    case 4:
      v4->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_44;
      this = (BattlePerformanceCommandCard__showComboEffect_d__133_o *)_4__this->fields.perf;
      if ( !this )
        goto LABEL_44;
      BattlePerformance__ChangeBattleSpeed((BattlePerformance_o *)this, 0LL);
      this = (BattlePerformanceCommandCard__showComboEffect_d__133_o *)_4__this->fields.commandfsm;
      if ( !this )
        goto LABEL_44;
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, v4->fields.endproc, 0LL);
      return 0;
    default:
      return 0;
  }
  do
  {
    selectedcomponents = _4__this->fields.selectedcomponents;
    if ( !selectedcomponents )
      goto LABEL_44;
    if ( (unsigned int)v13 >= selectedcomponents->max_length )
      goto LABEL_45;
    this = (BattlePerformanceCommandCard__showComboEffect_d__133_o *)selectedcomponents->m_Items[v13];
    if ( !this )
      goto LABEL_44;
    CommandType = BattleCommandComponent__getCommandType((BattleCommandComponent_o *)this, 0LL);
    this = (BattlePerformanceCommandCard__showComboEffect_d__133_o *)BattleCommand__isBLANK(CommandType, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v16 = _4__this->fields.selectedcomponents;
      if ( !v16 )
        goto LABEL_44;
      if ( (unsigned int)v13 >= v16->max_length )
      {
LABEL_45:
        v28 = sub_B5D6C8(this);
        sub_B5D668(v28, 0LL);
      }
      this = (BattlePerformanceCommandCard__showComboEffect_d__133_o *)v16->m_Items[v13];
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
      v21 = a;
      this = (BattlePerformanceCommandCard__showComboEffect_d__133_o *)TweenColor__Begin(
                                                                         gameObject,
                                                                         0.2,
                                                                         *(UnityEngine_Color_o *)&clear.fields.g,
                                                                         0LL);
    }
    ++v13;
  }
  while ( (unsigned int)(v13 - 1) < 2 );
  this = (BattlePerformanceCommandCard__showComboEffect_d__133_o *)v4->fields.combo;
  if ( !this )
LABEL_44:
    sub_B5D69C(this, method);
  if ( BYTE2(this->fields.__1__state) || !BattleComboData__AchieveAnyChain((BattleComboData_o *)this, 0LL) )
  {
    v26 = DefCoroutine_TypeInfo;
    if ( (BYTE3(DefCoroutine_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !DefCoroutine_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(DefCoroutine_TypeInfo);
      v26 = DefCoroutine_TypeInfo;
    }
    v4->fields.__2__current = (Il2CppObject *)v26->static_fields->milliSecFour;
    v27 = &v4->fields.__2__current;
    sub_B5D560(v27);
    result = 1;
    *((_DWORD *)v27 - 2) = 1;
  }
  else
  {
    v22 = BattlePerformanceCommandCard__showComboEffectShort(_4__this, v4->fields.combo, 0LL);
    v4->fields.__2__current = (Il2CppObject *)UnityEngine_MonoBehaviour__StartCoroutine_35615088(
                                                (UnityEngine_MonoBehaviour_o *)_4__this,
                                                v22,
                                                0LL);
    sub_B5D560(&v4->fields.__2__current);
    v23 = 3;
LABEL_33:
    v4->fields.__1__state = v23;
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

  v2 = sub_B5D5C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B5D694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B5D5C8(&Method_BattlePerformanceCommandCard__showComboEffect_d__133_System_Collections_IEnumerator_Reset__);
  sub_B5D668(v3, v4);
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
  int v2; // w2
  __int64 v3; // x3
  BattlePerformanceCommandCard__waitFallStar_d__97_o *v4; // x19
  int32_t _1__state; // w8
  BattlePerformanceCommandCard_o *_4__this; // x20
  struct BattleCommandComponent_array *commandCompArray; // x8
  il2cpp_array_size_t v8; // w21
  il2cpp_array_size_t max_length; // w9
  DefCoroutine_c *v10; // x0
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  DefCoroutine_c *v13; // x0
  Il2CppObject **v14; // x19
  __int64 v15; // x0

  v4 = this;
  if ( (byte_42E6090 & 1) == 0 )
  {
    this = (BattlePerformanceCommandCard__waitFallStar_d__97_o *)sub_B5D5C4(
                                                                   &DefCoroutine_TypeInfo,
                                                                   (_DWORD)method,
                                                                   v2,
                                                                   v3);
    byte_42E6090 = 1;
  }
  _1__state = v4->fields.__1__state;
  _4__this = v4->fields.__4__this;
  if ( _1__state == 2 )
  {
    v4->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_13;
    BattlePerformanceCommandCard__StartCountupCommandStar(_4__this, 1, 0LL);
    return 0;
  }
  if ( _1__state == 1 )
  {
    v4->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_13;
    if ( BattlePerformanceCommandCard__fallStar(_4__this, 0LL) )
    {
      v10 = DefCoroutine_TypeInfo;
      if ( (BYTE3(DefCoroutine_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DefCoroutine_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DefCoroutine_TypeInfo);
        v10 = DefCoroutine_TypeInfo;
      }
      v4->fields.__2__current = (Il2CppObject *)v10->static_fields->milliSecFive;
      p__2__current = &v4->fields.__2__current;
      sub_B5D560(p__2__current);
      *((_DWORD *)p__2__current - 2) = 2;
      return 1;
    }
    return 0;
  }
  if ( _1__state )
    return 0;
  v4->fields.__1__state = -1;
  if ( !_4__this || (commandCompArray = _4__this->fields.commandCompArray) == 0LL )
LABEL_13:
    sub_B5D69C(this, method);
  v8 = 0;
  while ( 1 )
  {
    max_length = commandCompArray->max_length;
    if ( (int)v8 >= (int)max_length )
      break;
    if ( v8 >= max_length )
    {
      v15 = sub_B5D6C8(this);
      sub_B5D668(v15, 0LL);
    }
    this = (BattlePerformanceCommandCard__waitFallStar_d__97_o *)commandCompArray->m_Items[v8];
    if ( this )
    {
      BattleCommandComponent__setCriticalObject((BattleCommandComponent_o *)this, 0, 0LL);
      commandCompArray = _4__this->fields.commandCompArray;
      ++v8;
      if ( commandCompArray )
        continue;
    }
    goto LABEL_13;
  }
  v13 = DefCoroutine_TypeInfo;
  if ( (BYTE3(DefCoroutine_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DefCoroutine_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DefCoroutine_TypeInfo);
    v13 = DefCoroutine_TypeInfo;
  }
  v4->fields.__2__current = (Il2CppObject *)v13->static_fields->milliSecThree;
  v14 = &v4->fields.__2__current;
  sub_B5D560(v14);
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

  v2 = sub_B5D5C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B5D694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B5D5C8(&Method_BattlePerformanceCommandCard__waitFallStar_d__97_System_Collections_IEnumerator_Reset__);
  sub_B5D668(v3, v4);
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
      sub_B5D69C(this, method);
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
  sub_B5D560(p__2__current);
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

  v2 = sub_B5D5C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B5D694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B5D5C8(&Method_BattlePerformanceCommandCard__waitFunc_d__171_System_Collections_IEnumerator_Reset__);
  sub_B5D668(v3, v4);
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