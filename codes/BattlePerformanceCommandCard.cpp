void __fastcall BattlePerformanceCommandCard___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_40FC2CD & 1) == 0 )
  {
    sub_B16FFC(&BattlePerformanceCommandCard_TypeInfo, v1);
    byte_40FC2CD = 1;
  }
  BattlePerformanceCommandCard_TypeInfo->static_fields->cardsize_w = 200;
}


void __fastcall BattlePerformanceCommandCard___ctor(BattlePerformanceCommandCard_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Array_o *v11; // x20
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v22; // x20
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  __int64 v29; // x2
  __int64 v30; // x0
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  unsigned int v37; // w8
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x20
  float v41; // s4
  float v42; // s5
  float v43; // s6
  float v44; // s7
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  __int64 v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  unsigned int v56; // w8
  __int64 v57; // x2
  __int64 v58; // x0
  __int64 v59; // x20
  float v60; // s4
  float v61; // s5
  float v62; // s6
  float v63; // s7
  float v64; // s4
  float v65; // s5
  float v66; // s6
  float v67; // s7
  System_String_array **v68; // x3
  System_Boolean_array **v69; // x4
  System_Int32_array **v70; // x5
  System_Int32_array *v71; // x6
  System_Int32_array *v72; // x7
  float v73; // s4
  float v74; // s5
  float v75; // s6
  float v76; // s7
  __int64 v77; // x2
  System_String_array **v78; // x3
  System_Boolean_array **v79; // x4
  System_Int32_array **v80; // x5
  System_Int32_array *v81; // x6
  System_Int32_array *v82; // x7
  unsigned int v83; // w8
  __int64 v84; // x2
  __int64 v85; // x20
  float v86; // s4
  float v87; // s5
  float v88; // s6
  float v89; // s7
  float v90; // s4
  float v91; // s5
  float v92; // s6
  float v93; // s7
  System_String_array **v94; // x3
  System_Boolean_array **v95; // x4
  System_Int32_array **v96; // x5
  System_Int32_array *v97; // x6
  System_Int32_array *v98; // x7
  __int64 v99; // x2
  struct BattleLogic_TutorialStringData_array *v100; // x20
  __int64 v101; // x1
  __int64 v102; // x2
  __int64 v103; // x3
  __int64 v104; // x4
  BattleLogic_TutorialStringData_o *v105; // x0
  System_Int32_array **v106; // x21
  System_String_array **v107; // x3
  System_Boolean_array **v108; // x4
  System_Int32_array **v109; // x5
  System_Int32_array *v110; // x6
  System_Int32_array *v111; // x7
  __int64 v112; // x1
  __int64 v113; // x2
  __int64 v114; // x3
  __int64 v115; // x4
  BattleLogic_TutorialStringData_o *v116; // x0
  System_Int32_array **v117; // x21
  System_String_array **v118; // x3
  System_Boolean_array **v119; // x4
  System_Int32_array **v120; // x5
  System_Int32_array *v121; // x6
  System_Int32_array *v122; // x7
  __int64 v123; // x1
  __int64 v124; // x2
  __int64 v125; // x3
  __int64 v126; // x4
  BattleLogic_TutorialStringData_o *v127; // x0
  System_Int32_array **v128; // x21
  System_String_array **v129; // x3
  System_Boolean_array **v130; // x4
  System_Int32_array **v131; // x5
  System_Int32_array *v132; // x6
  System_Int32_array *v133; // x7
  __int64 v134; // x1
  __int64 v135; // x2
  __int64 v136; // x3
  __int64 v137; // x4
  BattleLogic_TutorialStringData_o *v138; // x0
  System_Int32_array **v139; // x21
  System_String_array **v140; // x3
  System_Boolean_array **v141; // x4
  System_Int32_array **v142; // x5
  System_Int32_array *v143; // x6
  System_Int32_array *v144; // x7
  __int64 v145; // x1
  __int64 v146; // x2
  __int64 v147; // x3
  __int64 v148; // x4
  BattleLogic_TutorialStringData_o *v149; // x0
  System_Int32_array **v150; // x21
  System_String_array **v151; // x3
  System_Boolean_array **v152; // x4
  System_Int32_array **v153; // x5
  System_Int32_array *v154; // x6
  System_Int32_array *v155; // x7
  __int64 v156; // x1
  __int64 v157; // x2
  __int64 v158; // x3
  __int64 v159; // x4
  BattleLogic_TutorialStringData_o *v160; // x0
  System_Int32_array **v161; // x21
  System_String_array **v162; // x3
  System_Boolean_array **v163; // x4
  System_Int32_array **v164; // x5
  System_Int32_array *v165; // x6
  System_Int32_array *v166; // x7
  __int64 v167; // x1
  __int64 v168; // x2
  __int64 v169; // x3
  __int64 v170; // x4
  BattleLogic_TutorialStringData_o *v171; // x0
  System_Int32_array **v172; // x21
  System_String_array **v173; // x3
  System_Boolean_array **v174; // x4
  System_Int32_array **v175; // x5
  System_Int32_array *v176; // x6
  System_Int32_array *v177; // x7
  System_String_array **v178; // x2
  System_String_array **v179; // x3
  System_Boolean_array **v180; // x4
  System_Int32_array **v181; // x5
  System_Int32_array *v182; // x6
  System_Int32_array *v183; // x7
  __int128 v184; // [xsp+0h] [xbp-B0h] BYREF
  MethodInfo methoda; // [xsp+10h] [xbp-A0h] BYREF
  System_RuntimeFieldHandle_o v186; // 0:w1.4
  UnityEngine_Vector2_o v187; // 0:s1.4,4:s2.4
  UnityEngine_Vector2_o v188; // 0:s1.4,4:s2.4
  UnityEngine_Vector2_o v189; // 0:s1.4,4:s2.4
  UnityEngine_Vector2_o v190; // 0:s1.4,4:s2.4
  UnityEngine_Vector2_o v191; // 0:s1.4,4:s2.4
  UnityEngine_Vector2_o v192; // 0:s1.4,4:s2.4
  UnityEngine_Vector2_o v193; // 0:s1.4,4:s2.4
  UnityEngine_Rect_o v194; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v195; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v196; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v197; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v198; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v199; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_40FC2CC & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject___ctor__, method);
    sub_B16FFC(&System_Collections_Generic_List_GameObject__TypeInfo, v4);
    sub_B16FFC(&UnityEngine_Rect___TypeInfo, v5);
    sub_B16FFC(&float___TypeInfo, v6);
    sub_B16FFC(&BattleLogic_TutorialStringData___TypeInfo, v7);
    sub_B16FFC(&BattleLogic_TutorialStringData_TypeInfo, v8);
    sub_B16FFC(
      &Field__PrivateImplementationDetails__799E0516C1E7B26C4E41AED488FCA1AA362E0A983FFBF28FFFB7A165E9BB2096,
      v9);
    sub_B16FFC(&UnityEngine_Vector2___TypeInfo, v10);
    byte_40FC2CC = 1;
  }
  v11 = (System_Array_o *)sub_B17014(float___TypeInfo, 5LL, v2);
  v186.fields.value = Field__PrivateImplementationDetails__799E0516C1E7B26C4E41AED488FCA1AA362E0A983FFBF28FFFB7A165E9BB2096;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_42629164(v11, v186, 0LL);
  this->fields.COMMAND_STAMP_POS_X = (struct System_Single_array *)v11;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.COMMAND_STAMP_POS_X,
    (System_Int32_array **)v11,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  this->fields.COMMAND_STAMP_POS_Y = -121.0;
  this->fields.firstBonusAnimationMaxTime = 3;
  *(_QWORD *)&this->fields.CARD_ROOT_BASE_X = 0xC353000043CD0000LL;
  this->fields.npGaugeEaseType = 15;
  *(_OWORD *)&this->fields.npGaugeEffectMoveDelayTime = xmmword_3146CC0;
  *(int32x2_t *)&this->fields.miniScale.fields.x = vdup_n_s32(0x3E99999Au);
  this->fields.miniScale.fields.z = 1.0;
  v22 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_GameObject__TypeInfo,
                                                                                                  v18,
                                                                                                  v19,
                                                                                                  v20,
                                                                                                  v21);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v22,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.aubelist = (struct System_Collections_Generic_List_GameObject__o *)v22;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.aubelist,
    (System_Int32_array **)v22,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  v30 = sub_B17014(UnityEngine_Vector2___TypeInfo, 3LL, v29);
  if ( !v30 )
    goto LABEL_47;
  v37 = *(_DWORD *)(v30 + 24);
  v38 = v30;
  if ( !v37 )
    goto LABEL_46;
  *(_QWORD *)(v30 + 32) = 0LL;
  if ( v37 == 1 )
    goto LABEL_46;
  *(_QWORD *)(v30 + 40) = 3276275712LL;
  if ( v37 <= 2 )
    goto LABEL_46;
  *(_QWORD *)(v30 + 48) = 3284664320LL;
  this->fields.TutorialArrow01 = (struct UnityEngine_Vector2_array *)v30;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.TutorialArrow01,
    (System_Int32_array **)v30,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
  v40 = sub_B17014(UnityEngine_Rect___TypeInfo, 1LL, v39);
  v194.fields.m_XMin = -500.0;
  v194.fields.m_YMin = -230.0;
  v194.fields.m_Width = 600.0;
  v194.fields.m_Height = 250.0;
  *(_QWORD *)&methoda.token = 0LL;
  *(_QWORD *)&methoda.slot = 0LL;
  UnityEngine_Rect___ctor(v194, v41, v42, v43, v44, (const MethodInfo *)&methoda.token);
  if ( !v40 )
    goto LABEL_47;
  if ( !*(_DWORD *)(v40 + 24) )
    goto LABEL_46;
  *(_OWORD *)(v40 + 32) = *(_OWORD *)&methoda.token;
  this->fields.TutorialSquare01 = (struct UnityEngine_Rect_array *)v40;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.TutorialSquare01,
    (System_Int32_array **)v40,
    v31,
    v45,
    v46,
    v47,
    v48,
    v49);
  v30 = sub_B17014(UnityEngine_Vector2___TypeInfo, 3LL, v50);
  if ( !v30 )
    goto LABEL_47;
  v56 = *(_DWORD *)(v30 + 24);
  v38 = v30;
  if ( !v56 )
    goto LABEL_46;
  *(_QWORD *)(v30 + 32) = 0x43160000C3270000LL;
  if ( v56 == 1 )
    goto LABEL_46;
  *(_QWORD *)(v30 + 40) = 0xC2A00000C3480000LL;
  if ( v56 <= 2 )
    goto LABEL_46;
  *(_QWORD *)(v30 + 48) = 0xC2A00000C3C80000LL;
  this->fields.TutorialArrow05 = (struct UnityEngine_Vector2_array *)v30;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.TutorialArrow05,
    (System_Int32_array **)v30,
    v31,
    v51,
    v52,
    v53,
    v54,
    v55);
  v58 = sub_B17014(UnityEngine_Rect___TypeInfo, 2LL, v57);
  v195.fields.m_XMin = -270.0;
  v195.fields.m_Width = 210.0;
  v59 = v58;
  v195.fields.m_YMin = -30.0;
  v195.fields.m_Height = 250.0;
  methoda.rgctx_data = 0LL;
  methoda.genericMethod = 0LL;
  UnityEngine_Rect___ctor(v195, v60, v61, v62, v63, (const MethodInfo *)&methoda.rgctx_data);
  if ( !v59 )
    goto LABEL_47;
  if ( !*(_DWORD *)(v59 + 24) )
    goto LABEL_46;
  v196.fields.m_Width = 400.0;
  *(_OWORD *)(v59 + 32) = *(_OWORD *)&methoda.rgctx_data;
  v196.fields.m_XMin = -500.0;
  v196.fields.m_YMin = -230.0;
  v196.fields.m_Height = 250.0;
  methoda.return_type = 0LL;
  methoda.parameters = 0LL;
  UnityEngine_Rect___ctor(v196, v64, v65, v66, v67, (const MethodInfo *)&methoda.return_type);
  if ( *(_DWORD *)(v59 + 24) <= 1u )
    goto LABEL_46;
  *(_OWORD *)(v59 + 48) = *(_OWORD *)&methoda.return_type;
  this->fields.TutorialSquare05 = (struct UnityEngine_Rect_array *)v59;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.TutorialSquare05,
    (System_Int32_array **)v59,
    v31,
    v68,
    v69,
    v70,
    v71,
    v72);
  v197.fields.m_XMin = 300.0;
  this->fields.TutorialArrow22 = (struct UnityEngine_Vector2_o)0x4348000043C58000LL;
  v197.fields.m_Height = 100.0;
  v197.fields.m_YMin = 180.0;
  v197.fields.m_Width = 200.0;
  methoda.name = 0LL;
  methoda.klass = 0LL;
  UnityEngine_Rect___ctor(v197, v73, v74, v75, v76, (const MethodInfo *)&methoda.name);
  this->fields.TutorialSquare22 = *(struct UnityEngine_Rect_o *)&methoda.name;
  v30 = sub_B17014(UnityEngine_Vector2___TypeInfo, 3LL, v77);
  if ( !v30 )
    goto LABEL_47;
  v83 = *(_DWORD *)(v30 + 24);
  v38 = v30;
  if ( !v83 )
    goto LABEL_46;
  *(_QWORD *)(v30 + 32) = 0xC248000000000000LL;
  if ( v83 == 1 )
    goto LABEL_46;
  *(_QWORD *)(v30 + 40) = 0xC2480000C3480000LL;
  if ( v83 <= 2 )
    goto LABEL_46;
  *(_QWORD *)(v30 + 48) = 0xC2480000C3C80000LL;
  this->fields.TutorialArrow31 = (struct UnityEngine_Vector2_array *)v30;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.TutorialArrow31,
    (System_Int32_array **)v30,
    v31,
    v78,
    v79,
    v80,
    v81,
    v82);
  v85 = sub_B17014(UnityEngine_Rect___TypeInfo, 2LL, v84);
  v198.fields.m_XMin = -500.0;
  v198.fields.m_YMin = -230.0;
  v198.fields.m_Width = 600.0;
  v198.fields.m_Height = 250.0;
  methoda.methodPointer = 0LL;
  methoda.invoker_method = 0LL;
  UnityEngine_Rect___ctor(v198, v86, v87, v88, v89, &methoda);
  if ( !v85 )
    goto LABEL_47;
  if ( !*(_DWORD *)(v85 + 24) )
    goto LABEL_46;
  *(_OWORD *)(v85 + 32) = *(_OWORD *)&methoda.methodPointer;
  v199.fields.m_XMin = 230.0;
  v199.fields.m_YMin = -290.0;
  v199.fields.m_Height = 70.0;
  v199.fields.m_Width = 130.0;
  v184 = 0uLL;
  UnityEngine_Rect___ctor(v199, v90, v91, v92, v93, (const MethodInfo *)&v184);
  if ( *(_DWORD *)(v85 + 24) <= 1u )
    goto LABEL_46;
  *(_OWORD *)(v85 + 48) = v184;
  this->fields.TutorialSquare32 = (struct UnityEngine_Rect_array *)v85;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.TutorialSquare32,
    (System_Int32_array **)v85,
    v31,
    v94,
    v95,
    v96,
    v97,
    v98);
  v100 = (struct BattleLogic_TutorialStringData_array *)sub_B17014(BattleLogic_TutorialStringData___TypeInfo, 7LL, v99);
  v105 = (BattleLogic_TutorialStringData_o *)sub_B170CC(BattleLogic_TutorialStringData_TypeInfo, v101, v102, v103, v104);
  v187.fields.x = 0.0;
  v187.fields.y = 160.0;
  v106 = (System_Int32_array **)v105;
  BattleLogic_TutorialStringData___ctor(v105, 0.0, v187, 26, 0LL);
  if ( !v100 )
LABEL_47:
    sub_B170D4();
  if ( v106 )
  {
    v30 = sub_B170BC(v106, v100->obj.klass->_1.element_class);
    if ( !v30 )
      goto LABEL_48;
  }
  if ( !v100->max_length )
    goto LABEL_46;
  v100->m_Items[0] = (BattleLogic_TutorialStringData_o *)v106;
  sub_B16F98((BattleServantConfConponent_o *)v100->m_Items, v106, v31, v107, v108, v109, v110, v111);
  v116 = (BattleLogic_TutorialStringData_o *)sub_B170CC(BattleLogic_TutorialStringData_TypeInfo, v112, v113, v114, v115);
  v188.fields.x = 0.0;
  v188.fields.y = 160.0;
  v117 = (System_Int32_array **)v116;
  BattleLogic_TutorialStringData___ctor(v116, 0.0, v188, 26, 0LL);
  if ( v117 )
  {
    v30 = sub_B170BC(v117, v100->obj.klass->_1.element_class);
    if ( !v30 )
      goto LABEL_48;
  }
  if ( v100->max_length <= 1 )
    goto LABEL_46;
  v100->m_Items[1] = (BattleLogic_TutorialStringData_o *)v117;
  sub_B16F98((BattleServantConfConponent_o *)&v100->m_Items[1], v117, v31, v118, v119, v120, v121, v122);
  v127 = (BattleLogic_TutorialStringData_o *)sub_B170CC(BattleLogic_TutorialStringData_TypeInfo, v123, v124, v125, v126);
  v189.fields.x = 0.0;
  v189.fields.y = 160.0;
  v128 = (System_Int32_array **)v127;
  BattleLogic_TutorialStringData___ctor(v127, 0.0, v189, 26, 0LL);
  if ( v128 )
  {
    v30 = sub_B170BC(v128, v100->obj.klass->_1.element_class);
    if ( !v30 )
      goto LABEL_48;
  }
  if ( v100->max_length <= 2 )
    goto LABEL_46;
  v100->m_Items[2] = (BattleLogic_TutorialStringData_o *)v128;
  sub_B16F98((BattleServantConfConponent_o *)&v100->m_Items[2], v128, v31, v129, v130, v131, v132, v133);
  v138 = (BattleLogic_TutorialStringData_o *)sub_B170CC(BattleLogic_TutorialStringData_TypeInfo, v134, v135, v136, v137);
  v190.fields.y = 60.0;
  v190.fields.x = 200.0;
  v139 = (System_Int32_array **)v138;
  BattleLogic_TutorialStringData___ctor(v138, 0.0, v190, 28, 0LL);
  if ( v139 )
  {
    v30 = sub_B170BC(v139, v100->obj.klass->_1.element_class);
    if ( !v30 )
      goto LABEL_48;
  }
  if ( v100->max_length <= 3 )
    goto LABEL_46;
  v100->m_Items[3] = (BattleLogic_TutorialStringData_o *)v139;
  sub_B16F98((BattleServantConfConponent_o *)&v100->m_Items[3], v139, v31, v140, v141, v142, v143, v144);
  v149 = (BattleLogic_TutorialStringData_o *)sub_B170CC(BattleLogic_TutorialStringData_TypeInfo, v145, v146, v147, v148);
  v191.fields.x = 310.0;
  v191.fields.y = -30.0;
  v150 = (System_Int32_array **)v149;
  BattleLogic_TutorialStringData___ctor(v149, 180.0, v191, 26, 0LL);
  if ( v150 )
  {
    v30 = sub_B170BC(v150, v100->obj.klass->_1.element_class);
    if ( !v30 )
      goto LABEL_48;
  }
  if ( v100->max_length <= 4 )
    goto LABEL_46;
  v100->m_Items[4] = (BattleLogic_TutorialStringData_o *)v150;
  sub_B16F98((BattleServantConfConponent_o *)&v100->m_Items[4], v150, v31, v151, v152, v153, v154, v155);
  v160 = (BattleLogic_TutorialStringData_o *)sub_B170CC(BattleLogic_TutorialStringData_TypeInfo, v156, v157, v158, v159);
  v192.fields.y = 140.0;
  v192.fields.x = 0.0;
  v161 = (System_Int32_array **)v160;
  BattleLogic_TutorialStringData___ctor(v160, 0.0, v192, 22, 0LL);
  if ( v161 )
  {
    v30 = sub_B170BC(v161, v100->obj.klass->_1.element_class);
    if ( !v30 )
      goto LABEL_48;
  }
  if ( v100->max_length <= 5 )
    goto LABEL_46;
  v100->m_Items[5] = (BattleLogic_TutorialStringData_o *)v161;
  sub_B16F98((BattleServantConfConponent_o *)&v100->m_Items[5], v161, v31, v162, v163, v164, v165, v166);
  v171 = (BattleLogic_TutorialStringData_o *)sub_B170CC(BattleLogic_TutorialStringData_TypeInfo, v167, v168, v169, v170);
  v193.fields.x = 0.0;
  v193.fields.y = 130.0;
  v172 = (System_Int32_array **)v171;
  BattleLogic_TutorialStringData___ctor(v171, 0.0, v193, 26, 0LL);
  if ( v172 )
  {
    v30 = sub_B170BC(v172, v100->obj.klass->_1.element_class);
    if ( !v30 )
    {
LABEL_48:
      sub_B170F4(v30);
      sub_B170A0();
    }
  }
  if ( v100->max_length <= 6 )
  {
LABEL_46:
    sub_B17100(v30, v38, v31);
    sub_B170A0();
  }
  v100->m_Items[6] = (BattleLogic_TutorialStringData_o *)v172;
  sub_B16F98((BattleServantConfConponent_o *)&v100->m_Items[6], v172, v31, v173, v174, v175, v176, v177);
  this->fields.TSD = v100;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.TSD,
    (System_Int32_array **)v100,
    v178,
    v179,
    v180,
    v181,
    v182,
    v183);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceCommandCard__ActivateFirstBonusObject(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *firstBonusSimpleAnimation; // x20
  UnityEngine_Behaviour_o *v5; // x0
  UnityEngine_Object_o *firstBonusAnimation; // x20
  UnityEngine_GameObject_o *firstBonusObject; // x20
  UnityEngine_Component_o *transform; // x0
  UnityEngine_GameObject_o *v9; // x0
  UnityEngine_Transform_o *v10; // x20
  int v11; // s0
  UnityEngine_GameObject_o *v14; // x0
  UnityEngine_Transform_o *v15; // x0
  float v16; // s0
  float v17; // s1
  float v18; // s2
  UnityEngine_GameObject_o *v19; // x0
  float v20; // s8
  float v21; // s10
  float v22; // s9
  UnityEngine_Transform_o *v23; // x0
  UnityEngine_GameObject_o *v24; // x0
  UnityEngine_GameObject_o *v25; // x0
  UnityEngine_Object_o *v26; // x20
  UnityEngine_Behaviour_o *v27; // x0
  const MethodInfo *v28; // x1
  UnityEngine_Object_o *v29; // x20
  System_Collections_IEnumerator_o *BonusAnimationPlay; // x1
  UnityEngine_Vector3_o v31; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40FC28C & 1) == 0 )
  {
    sub_B16FFC(&FSUtility_TypeInfo, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v3);
    byte_40FC28C = 1;
  }
  firstBonusSimpleAnimation = (UnityEngine_Object_o *)this->fields.firstBonusSimpleAnimation;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(firstBonusSimpleAnimation, 0LL, 0LL) )
  {
    v5 = (UnityEngine_Behaviour_o *)this->fields.firstBonusSimpleAnimation;
    if ( !v5 )
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
    v5 = (UnityEngine_Behaviour_o *)this->fields.firstBonusAnimation;
    if ( !v5 )
      goto LABEL_39;
LABEL_14:
    UnityEngine_Behaviour__set_enabled(v5, 0, 0LL);
  }
  firstBonusObject = this->fields.firstBonusObject;
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SetParent(firstBonusObject, transform, 0LL);
  v9 = this->fields.firstBonusObject;
  if ( !v9 )
    goto LABEL_39;
  v10 = UnityEngine_GameObject__get_transform(v9, 0LL);
  *(UnityEngine_Vector3_o *)&v11 = UnityEngine_Vector3__get_one(0LL);
  if ( !v10 )
    goto LABEL_39;
  UnityEngine_Transform__set_localScale(v10, *(UnityEngine_Vector3_o *)&v11, 0LL);
  if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  if ( !FSUtility__IsUnderVista(0LL) )
  {
    v14 = this->fields.firstBonusObject;
    if ( v14 )
    {
      v15 = UnityEngine_GameObject__get_transform(v14, 0LL);
      if ( v15 )
      {
        *(UnityEngine_Vector3_o *)&v16 = UnityEngine_Transform__get_localPosition(v15, 0LL);
        v19 = this->fields.firstBonusObject;
        if ( v19 )
        {
          v20 = v16;
          v21 = v17;
          v22 = v18;
          v23 = UnityEngine_GameObject__get_transform(v19, 0LL);
          if ( v23 )
          {
            v31.fields.y = v21 + 17.0;
            v31.fields.x = v20;
            v31.fields.z = v22;
            UnityEngine_Transform__set_localPosition(v23, v31, 0LL);
            goto LABEL_26;
          }
        }
      }
    }
LABEL_39:
    sub_B170D4();
  }
LABEL_26:
  v24 = this->fields.firstBonusObject;
  if ( !v24 )
    goto LABEL_39;
  UnityEngine_GameObject__SetActive(v24, 0, 0LL);
  v25 = this->fields.firstBonusObject;
  if ( !v25 )
    goto LABEL_39;
  UnityEngine_GameObject__SetActive(v25, 1, 0LL);
  v26 = (UnityEngine_Object_o *)this->fields.firstBonusSimpleAnimation;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v26, 0LL, 0LL) )
  {
    v27 = (UnityEngine_Behaviour_o *)this->fields.firstBonusSimpleAnimation;
    if ( !v27 )
      goto LABEL_39;
LABEL_33:
    UnityEngine_Behaviour__set_enabled(v27, 1, 0LL);
    goto LABEL_40;
  }
  v29 = (UnityEngine_Object_o *)this->fields.firstBonusAnimation;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v29, 0LL, 0LL) )
  {
    v27 = (UnityEngine_Behaviour_o *)this->fields.firstBonusAnimation;
    if ( !v27 )
      goto LABEL_39;
    goto LABEL_33;
  }
LABEL_40:
  BonusAnimationPlay = BattlePerformanceCommandCard__DelayFirstBonusAnimationPlay(this, v28);
  UnityEngine_MonoBehaviour__StartCoroutine_34804316((UnityEngine_MonoBehaviour_o *)this, BonusAnimationPlay, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceCommandCard__AddExtraCard(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  BattlePerformanceCommandCard_o *v5; // x19
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct BattleCommandComponent_array *selectedcomponents; // x8
  BattleCommandComponent_o *v10; // x8
  BattleCommandData_o *data; // x21
  BattleCommandData_o *v12; // x20
  BattleData_o *Bdata; // x0
  struct BattleCommandComponent_array *v14; // x8
  BattlePerformanceCommandCard_o *v15; // x21
  UnityEngine_Component_o *v16; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Transform_o *transform; // x22
  int v19; // s0
  struct BattleCommandComponent_array *v22; // x8
  UnityEngine_Component_o *v23; // x0
  UnityEngine_GameObject_o *v24; // x0
  UnityEngine_Transform_o *v25; // x0
  UnityEngine_Transform_o *v26; // x22
  int v27; // s0
  struct BattleCommandComponent_array *v30; // x8
  UnityEngine_Component_o *v31; // x0
  UnityEngine_GameObject_o *v32; // x0
  struct BattleCommandComponent_array *v33; // x8
  BattleCommandComponent_o *v34; // x0
  struct BattleCommandComponent_array *v35; // x8
  UnityEngine_Component_o *v36; // x0
  WebViewObject_o *Component_WebViewObject; // x20
  int v38; // s0
  struct BattleCommandComponent_array *v42; // x8
  BattleCommandComponent_o *v43; // x0
  BattleData_o *v44; // x0
  struct BattleCommandComponent_array *v45; // x8
  BattlePerformanceCommandCard_o *v46; // x1
  BattleCommandComponent_o *v47; // x0

  v5 = this;
  if ( (byte_40FC29A & 1) == 0 )
  {
    sub_B16FFC(&BattleCommandData_TypeInfo, method);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_UIWidget___, v6);
    sub_B16FFC(&SeManager_TypeInfo, v7);
    this = (BattlePerformanceCommandCard_o *)sub_B16FFC(&StringLiteral_18116, v8);
    byte_40FC29A = 1;
  }
  selectedcomponents = v5->fields.selectedcomponents;
  if ( !selectedcomponents )
    goto LABEL_43;
  if ( !selectedcomponents->max_length )
    goto LABEL_44;
  v10 = selectedcomponents->m_Items[0];
  if ( !v10 )
    goto LABEL_43;
  data = v10->fields.data;
  v12 = (BattleCommandData_o *)sub_B170CC(BattleCommandData_TypeInfo, method, v2, v3, v4);
  BattleCommandData___ctor_18726640(v12, data, 0LL);
  if ( !v12 )
    goto LABEL_43;
  BattleCommandData__ClearCommandCode(v12, 0LL);
  v12->fields.commandAssistId = 0;
  v12->fields.commandCardParam = 0;
  BattleCommandData__setTypeAddAttack(v12, 0LL);
  Bdata = v5->fields.Bdata;
  if ( !Bdata )
    goto LABEL_43;
  this = (BattlePerformanceCommandCard_o *)BattleData__getServantData(Bdata, v12->fields.uniqueId, 0LL);
  v14 = v5->fields.selectedcomponents;
  if ( !v14 )
    goto LABEL_43;
  if ( v14->max_length <= 3 )
    goto LABEL_44;
  v15 = this;
  v16 = (UnityEngine_Component_o *)v14->m_Items[3];
  if ( !v16 )
    goto LABEL_43;
  gameObject = UnityEngine_Component__get_gameObject(v16, 0LL);
  if ( !gameObject )
    goto LABEL_43;
  transform = UnityEngine_GameObject__get_transform(gameObject, 0LL);
  *(UnityEngine_Vector3_o *)&v19 = UnityEngine_Vector3__get_one(0LL);
  if ( !transform )
    goto LABEL_43;
  UnityEngine_Transform__set_localScale(transform, *(UnityEngine_Vector3_o *)&v19, 0LL);
  v22 = v5->fields.selectedcomponents;
  if ( !v22 )
    goto LABEL_43;
  if ( v22->max_length <= 3 )
    goto LABEL_44;
  v23 = (UnityEngine_Component_o *)v22->m_Items[3];
  if ( !v23 )
    goto LABEL_43;
  v24 = UnityEngine_Component__get_gameObject(v23, 0LL);
  if ( !v24 )
    goto LABEL_43;
  v25 = UnityEngine_GameObject__get_transform(v24, 0LL);
  if ( !v5->fields.extraPos )
    goto LABEL_43;
  v26 = v25;
  *(UnityEngine_Vector3_o *)&v27 = UnityEngine_Transform__get_position(v5->fields.extraPos, 0LL);
  if ( !v26 )
    goto LABEL_43;
  UnityEngine_Transform__set_position(v26, *(UnityEngine_Vector3_o *)&v27, 0LL);
  v30 = v5->fields.selectedcomponents;
  if ( !v30 )
    goto LABEL_43;
  if ( v30->max_length <= 3 )
    goto LABEL_44;
  v31 = (UnityEngine_Component_o *)v30->m_Items[3];
  if ( !v31 )
    goto LABEL_43;
  v32 = UnityEngine_Component__get_gameObject(v31, 0LL);
  if ( !v32 )
    goto LABEL_43;
  UnityEngine_GameObject__SetActive(v32, 1, 0LL);
  v33 = v5->fields.selectedcomponents;
  if ( !v33 )
    goto LABEL_43;
  if ( v33->max_length <= 3 )
    goto LABEL_44;
  v34 = v33->m_Items[3];
  if ( !v34 )
    goto LABEL_43;
  BattleCommandComponent__setData(v34, v12, (BattleServantData_o *)v15, 0, 1, 0, 0LL);
  v35 = v5->fields.selectedcomponents;
  if ( !v35 )
    goto LABEL_43;
  if ( v35->max_length <= 3 )
    goto LABEL_44;
  v36 = (UnityEngine_Component_o *)v35->m_Items[3];
  if ( !v36 )
    goto LABEL_43;
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              v36,
                              (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  *(UnityEngine_Color_o *)&v38 = UnityEngine_Color__get_white(0LL);
  if ( !Component_WebViewObject )
    goto LABEL_43;
  UIWidget__set_color((UIWidget_o *)Component_WebViewObject, *(UnityEngine_Color_o *)&v38, 0LL);
  v42 = v5->fields.selectedcomponents;
  if ( !v42 )
    goto LABEL_43;
  if ( v42->max_length <= 3 )
  {
LABEL_44:
    sub_B17100(this, method, v2);
    sub_B170A0();
  }
  v43 = v42->m_Items[3];
  if ( !v43 )
    goto LABEL_43;
  BattleCommandComponent__attachEffect(v43, (System_String_o *)StringLiteral_18116, 4, 0LL);
  v44 = v5->fields.Bdata;
  if ( !v44 )
    goto LABEL_43;
  this = (BattlePerformanceCommandCard_o *)BattleData__getServantData(v44, v44->fields.globaltargetId, 0LL);
  if ( this )
  {
    v45 = v5->fields.selectedcomponents;
    if ( !v45 )
      goto LABEL_43;
    if ( v45->max_length > 3 )
    {
      v46 = this;
      v47 = v45->m_Items[3];
      if ( v47 )
      {
        BattleCommandComponent__updateClassMag(v47, (BattleServantData_o *)v46, 0LL);
        goto LABEL_39;
      }
LABEL_43:
      sub_B170D4();
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
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40FC28D & 1) == 0 )
  {
    sub_B16FFC(&BattlePerformanceCommandCard__DelayFirstBonusAnimationPlay_d__122_TypeInfo, method);
    byte_40FC28D = 1;
  }
  v6 = sub_B170CC(BattlePerformanceCommandCard__DelayFirstBonusAnimationPlay_d__122_TypeInfo, method, v2, v3, v4);
  BattlePerformanceCommandCard__DelayFirstBonusAnimationPlay_d__122___ctor(
    (BattlePerformanceCommandCard__DelayFirstBonusAnimationPlay_d__122_o *)v6,
    0,
    0LL);
  if ( !v6 )
    sub_B170D4();
  *(_QWORD *)(v6 + 32) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v6 + 32), (System_Int32_array **)this, v7, v8, v9, v10, v11, v12);
  return (System_Collections_IEnumerator_o *)v6;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceCommandCard__DistributeCriticalPoint(
        BattlePerformanceCommandCard_o *this,
        int32_t criticalPercentageToAdd,
        bool applyOnlyToSelectedCards,
        const MethodInfo *method)
{
  __int64 v4; // x4
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
  __int64 v18; // x20
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  System_Collections_Generic_IEnumerable_TSource__o *commandCompArray; // x21
  BattlePerformanceCommandCard___c_c *v30; // x0
  struct BattlePerformanceCommandCard___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__120_0; // x22
  Il2CppObject *v33; // x23
  struct BattlePerformanceCommandCard___c_StaticFields *v34; // x0
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x3
  __int64 v44; // x4
  System_Collections_Generic_IEnumerable_TSource__o *v45; // x21
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v46; // x19
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v47; // x19

  if ( (byte_40FC28B & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_BattleCommandComponent___ctor__, *(_QWORD *)&criticalPercentageToAdd);
    sub_B16FFC(&System_Action_BattleCommandComponent__TypeInfo, v8);
    sub_B16FFC(&Method_BasicHelper_ForEach_BattleCommandComponent___, v9);
    sub_B16FFC(&Method_System_Linq_Enumerable_Where_BattleCommandComponent___, v10);
    sub_B16FFC(&Method_System_Func_BattleCommandComponent__bool___ctor__, v11);
    sub_B16FFC(&System_Func_BattleCommandComponent__bool__TypeInfo, v12);
    sub_B16FFC(&Method_BattlePerformanceCommandCard___c__DistributeCriticalPoint_b__120_0__, v13);
    sub_B16FFC(&Method_BattlePerformanceCommandCard___c__DisplayClass120_0__DistributeCriticalPoint_b__1__, v14);
    sub_B16FFC(&Method_BattlePerformanceCommandCard___c__DisplayClass120_0__DistributeCriticalPoint_b__2__, v15);
    sub_B16FFC(&BattlePerformanceCommandCard___c__DisplayClass120_0_TypeInfo, v16);
    sub_B16FFC(&BattlePerformanceCommandCard___c_TypeInfo, v17);
    byte_40FC28B = 1;
  }
  v18 = sub_B170CC(
          BattlePerformanceCommandCard___c__DisplayClass120_0_TypeInfo,
          *(_QWORD *)&criticalPercentageToAdd,
          applyOnlyToSelectedCards,
          method,
          v4);
  BattlePerformanceCommandCard___c__DisplayClass120_0___ctor(
    (BattlePerformanceCommandCard___c__DisplayClass120_0_o *)v18,
    0LL);
  if ( !v18 )
    sub_B170D4();
  *(_QWORD *)(v18 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v18 + 16), (System_Int32_array **)this, v19, v20, v21, v22, v23, v24);
  *(_DWORD *)(v18 + 24) = criticalPercentageToAdd;
  commandCompArray = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.commandCompArray;
  v30 = BattlePerformanceCommandCard___c_TypeInfo;
  if ( (BYTE3(BattlePerformanceCommandCard___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattlePerformanceCommandCard___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattlePerformanceCommandCard___c_TypeInfo);
    v30 = BattlePerformanceCommandCard___c_TypeInfo;
  }
  static_fields = v30->static_fields;
  _9__120_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__120_0;
  if ( !_9__120_0 )
  {
    if ( (BYTE3(v30->vtable._0_Equals.methodPtr) & 4) != 0 && !v30->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v30);
      static_fields = BattlePerformanceCommandCard___c_TypeInfo->static_fields;
    }
    v33 = (Il2CppObject *)static_fields->__9;
    _9__120_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                                     System_Func_BattleCommandComponent__bool__TypeInfo,
                                                                                     v25,
                                                                                     v26,
                                                                                     v27,
                                                                                     v28);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__120_0,
      v33,
      Method_BattlePerformanceCommandCard___c__DistributeCriticalPoint_b__120_0__,
      (const MethodInfo_2B6AB40 *)Method_System_Func_BattleCommandComponent__bool___ctor__);
    v34 = BattlePerformanceCommandCard___c_TypeInfo->static_fields;
    v34->__9__120_0 = (struct System_Func_BattleCommandComponent__bool__o *)_9__120_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v34->__9__120_0,
      (System_Int32_array **)_9__120_0,
      v35,
      v36,
      v37,
      v38,
      v39,
      v40);
  }
  v45 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          commandCompArray,
          (System_Func_TSource__bool__o *)_9__120_0,
          (const MethodInfo_19C8FE8 *)Method_System_Linq_Enumerable_Where_BattleCommandComponent___);
  if ( applyOnlyToSelectedCards )
  {
    v46 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                               System_Func_BattleCommandComponent__bool__TypeInfo,
                                                                               v41,
                                                                               v42,
                                                                               v43,
                                                                               v44);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      v46,
      (Il2CppObject *)v18,
      Method_BattlePerformanceCommandCard___c__DisplayClass120_0__DistributeCriticalPoint_b__1__,
      (const MethodInfo_2B6AB40 *)Method_System_Func_BattleCommandComponent__bool___ctor__);
    v45 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
            v45,
            (System_Func_TSource__bool__o *)v46,
            (const MethodInfo_19C8FE8 *)Method_System_Linq_Enumerable_Where_BattleCommandComponent___);
  }
  v47 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B170CC(
                                                                               System_Action_BattleCommandComponent__TypeInfo,
                                                                               v41,
                                                                               v42,
                                                                               v43,
                                                                               v44);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v47,
    (Il2CppObject *)v18,
    Method_BattlePerformanceCommandCard___c__DisplayClass120_0__DistributeCriticalPoint_b__2__,
    (const MethodInfo_24B7310 *)Method_System_Action_BattleCommandComponent___ctor__);
  BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
    (System_Collections_Generic_IEnumerable_T__o *)v45,
    (System_Action_T__o *)v47,
    (const MethodInfo_18B756C *)Method_BasicHelper_ForEach_BattleCommandComponent___);
}


float __fastcall BattlePerformanceCommandCard__FSCardRootOffsetY(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  bool IsUnderVista; // w0
  float result; // s0

  if ( (byte_40FC2BA & 1) == 0 )
  {
    sub_B16FFC(&FSUtility_TypeInfo, method);
    byte_40FC2BA = 1;
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
  BattlePerformanceCommandCard_o *v4; // x0
  const MethodInfo *v5; // x1
  __int64 v6; // x2
  struct System_Single_array *COMMAND_STAMP_POS_X; // x8
  UnityEngine_Vector2_array *v8; // x20
  unsigned __int64 v9; // x21
  float *p_COMMAND_STAMP_POS_Z; // x22
  UnityEngine_Vector2_o *v11; // x23
  float x; // w9

  if ( (byte_40FC2BB & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Vector2___TypeInfo, arrow);
    byte_40FC2BB = 1;
  }
  if ( !arrow
    || (v4 = (BattlePerformanceCommandCard_o *)sub_B17014(UnityEngine_Vector2___TypeInfo, arrow->max_length, method)) == 0LL )
  {
    sub_B170D4();
  }
  COMMAND_STAMP_POS_X = v4->fields.COMMAND_STAMP_POS_X;
  v8 = (UnityEngine_Vector2_array *)v4;
  if ( (int)COMMAND_STAMP_POS_X >= 1 )
  {
    v9 = 0LL;
    p_COMMAND_STAMP_POS_Z = &v4->fields.COMMAND_STAMP_POS_Z;
    v11 = &arrow->m_Items[1];
    do
    {
      if ( v9 >= arrow->max_length || v9 >= (unsigned int)COMMAND_STAMP_POS_X )
      {
        sub_B17100(v4, v5, v6);
        sub_B170A0();
      }
      x = v11->fields.x;
      *(p_COMMAND_STAMP_POS_Z - 1) = v11[-1].fields.y;
      *p_COMMAND_STAMP_POS_Z = x;
      *p_COMMAND_STAMP_POS_Z = BattlePerformanceCommandCard__FSCardRootOffsetY(v4, v5) + x;
      p_COMMAND_STAMP_POS_Z += 2;
      LODWORD(COMMAND_STAMP_POS_X) = v8->max_length;
      ++v9;
      ++v11;
    }
    while ( (__int64)v9 < (int)COMMAND_STAMP_POS_X );
  }
  return v8;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Rect_array *__fastcall BattlePerformanceCommandCard__FSTutorialSquareCard(
        BattlePerformanceCommandCard_o *this,
        UnityEngine_Rect_array *square,
        const MethodInfo *method)
{
  __int64 v4; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  int v7; // s1
  __int64 v10; // x8
  UnityEngine_Rect_array *v11; // x20
  unsigned __int64 v12; // x22
  MethodInfo *v13; // x21
  __int128 v14; // q0
  float y; // s0
  BattlePerformanceCommandCard_o *v16; // x0
  const MethodInfo *v17; // x1
  float v18; // s4
  UnityEngine_Rect_o v20; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_40FC2BC & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Rect___TypeInfo, square);
    byte_40FC2BC = 1;
  }
  if ( !square || (v4 = sub_B17014(UnityEngine_Rect___TypeInfo, square->max_length, method)) == 0 )
    sub_B170D4();
  v10 = *(_QWORD *)(v4 + 24);
  v11 = (UnityEngine_Rect_array *)v4;
  if ( (int)v10 >= 1 )
  {
    v12 = 0LL;
    v13 = (MethodInfo *)(v4 + 32);
    do
    {
      if ( v12 >= square->max_length || v12 >= (unsigned int)v10 )
      {
        sub_B17100(v4, v5, v6);
        sub_B170A0();
      }
      v14 = *(_OWORD *)&square->m_Items[v12].fields.m_YMin;
      *(_OWORD *)&v13->methodPointer = v14;
      y = UnityEngine_Rect__get_y(*(UnityEngine_Rect_o *)(&v7 - 1), v13);
      v20.fields.m_XMin = y + BattlePerformanceCommandCard__FSCardRootOffsetY(v16, v17);
      UnityEngine_Rect__set_y(v20, v18, v13);
      LODWORD(v10) = v11->max_length;
      ++v12;
      v13 = (MethodInfo *)((char *)v13 + 16);
    }
    while ( (__int64)v12 < (int)v10 );
  }
  return v11;
}


BattleCommandData_array *__fastcall BattlePerformanceCommandCard__GetBaseCommandCard(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  struct System_Collections_Generic_List_BattleCommandData__o *baseCommandList; // x0
  struct BattleLogic_o *logic; // x8
  struct BattleData_o *data; // x8
  System_Collections_Generic_IEnumerable_T__o *draw_commandlist; // x20
  BattleServantConfConponent_o *p_baseCommandList; // x19
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v13; // x21
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7

  if ( (byte_40FC281 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleCommandData__ToArray__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleCommandData___ctor___66726344, v6);
    sub_B16FFC(&System_Collections_Generic_List_BattleCommandData__TypeInfo, v7);
    byte_40FC281 = 1;
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
          v13 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B170CC(
                                                                                  System_Collections_Generic_List_BattleCommandData__TypeInfo,
                                                                                  method,
                                                                                  v2,
                                                                                  v3,
                                                                                  v4),
          System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
            v13,
            draw_commandlist,
            (const MethodInfo_2F2520C *)Method_System_Collections_Generic_List_BattleCommandData___ctor___66726344),
          p_baseCommandList->klass = (BattleServantConfConponent_c *)v13,
          sub_B16F98(p_baseCommandList, (System_Int32_array **)v13, v14, v15, v16, v17, v18, v19),
          (baseCommandList = (struct System_Collections_Generic_List_BattleCommandData__o *)p_baseCommandList->klass) == 0LL) )
    {
LABEL_8:
      sub_B170D4();
    }
  }
  return (BattleCommandData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                      (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)baseCommandList,
                                      (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_BattleCommandData__ToArray__);
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

  if ( (byte_40FC2AD & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_2374, *(_QWORD *)&status);
    sub_B16FFC(&StringLiteral_2375, v4);
    sub_B16FFC(&StringLiteral_2377, v5);
    sub_B16FFC(&StringLiteral_2380, v6);
    sub_B16FFC(&StringLiteral_2378, v7);
    sub_B16FFC(&StringLiteral_2379, v8);
    sub_B16FFC(&StringLiteral_2376, v9);
    byte_40FC2AD = 1;
  }
  if ( (unsigned int)(status - 3) > 5 )
    v10 = (System_String_o **)&StringLiteral_2374;
  else
    v10 = (System_String_o **)*(&off_3D6A990 + status - 3);
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
  __int64 v6; // x0
  BattleServantParamComponent_o *v7; // x11

  servantStatusObjArray = this->fields.servantStatusObjArray;
  if ( !servantStatusObjArray )
    goto LABEL_14;
  max_length = servantStatusObjArray->max_length;
  if ( max_length >= 1 )
  {
    v5 = 0;
    v6 = 0xFFFFFFFFLL;
    while ( 1 )
    {
      if ( v5 >= max_length )
      {
        sub_B17100(v6, commandData, method);
        sub_B170A0();
      }
      v7 = servantStatusObjArray->m_Items[v5];
      if ( !v7 || !commandData )
        break;
      if ( v7->fields.uniqueID == commandData->fields.uniqueId )
        v6 = v5;
      else
        v6 = (unsigned int)v6;
      if ( (int)++v5 >= max_length )
        return v6;
    }
LABEL_14:
    sub_B170D4();
  }
  LODWORD(v6) = -1;
  return v6;
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

  v4 = this;
  if ( (byte_40FC2AA & 1) == 0 )
  {
    this = (BattlePerformanceCommandCard_o *)sub_B16FFC(&UnityEngine_Object_TypeInfo, commandData);
    byte_40FC2AA = 1;
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
        sub_B17100(this, commandData, method);
        sub_B170A0();
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
    sub_B170D4();
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
  __int64 v2; // x2
  struct UnityEngine_Transform_array *npcardTr; // x8
  __int64 v5; // x20
  int max_length; // w9
  UnityEngine_Component_o *v7; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  npcardTr = this->fields.npcardTr;
  if ( !npcardTr )
LABEL_8:
    sub_B170D4();
  v5 = 0LL;
  while ( 1 )
  {
    max_length = npcardTr->max_length;
    if ( (int)v5 >= max_length )
      break;
    if ( (unsigned int)v5 >= max_length )
    {
      sub_B17100(this, method, v2);
      sub_B170A0();
    }
    v7 = (UnityEngine_Component_o *)npcardTr->m_Items[v5];
    if ( v7 )
    {
      gameObject = UnityEngine_Component__get_gameObject(v7, 0LL);
      if ( gameObject )
      {
        UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
        npcardTr = this->fields.npcardTr;
        ++v5;
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
  struct BattleSealedCommandWindowComponent_o *sealedWindow; // x0
  BattleWindowOuterClickManagerComponent_o *v30; // x21
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x3
  __int64 v34; // x4
  BattleWindowOuterClickComponent_OuterClickCall_o *v35; // x22
  BattleWindowComponent_o *tdConfWindow; // x0
  struct BattleTDConfWIndowComponent_o *v37; // x0
  BattleWindowOuterClickManagerComponent_o *v38; // x21
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x3
  __int64 v42; // x4
  BattleWindowOuterClickComponent_OuterClickCall_o *v43; // x22
  BattleWindowComponent_o *commandAssistDetailWindow; // x0
  struct BattleCommandAssistDetailWindowComponent_o *v45; // x0
  PlayMakerFSM_o *commandfsm; // x0
  HutongGames_PlayMaker_FsmVariables_o *FsmVariables; // x0
  HutongGames_PlayMaker_FsmGameObject_o *FsmGameObject; // x0
  UnityEngine_Component_o *v49; // x8
  HutongGames_PlayMaker_FsmGameObject_o *v50; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  struct Spawner_o *Instance; // x0
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  Spawner_o *spawner; // x0

  if ( (byte_40FC277 & 1) == 0 )
  {
    sub_B16FFC(&Method_BattlePerformanceCommandCard_OnCloseSealedWindow__, inperf);
    sub_B16FFC(&Method_BattlePerformanceCommandCard_OnCloseTdConfWindow__, v12);
    sub_B16FFC(&BattleWindowOuterClickComponent_OuterClickCall_TypeInfo, v13);
    sub_B16FFC(&Method_SingletonMonoBehaviour_Spawner__get_Instance__, v14);
    sub_B16FFC(&StringLiteral_10602, v15);
    byte_40FC277 = 1;
  }
  p_perf = &this->fields.perf;
  this->fields.perf = inperf;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.perf,
    (System_Int32_array **)inperf,
    (System_String_array **)data,
    (System_String_array **)inlogic,
    (System_Boolean_array **)method,
    v5,
    v6,
    v7);
  this->fields.Bdata = data;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.Bdata,
    (System_Int32_array **)data,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  this->fields.logic = inlogic;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.logic,
    (System_Int32_array **)inlogic,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  sealedWindow = this->fields.sealedWindow;
  if ( !sealedWindow )
    goto LABEL_16;
  ((void (__fastcall *)(struct BattleSealedCommandWindowComponent_o *, Il2CppMethodPointer))sealedWindow->klass->vtable._9_setClose.method)(
    sealedWindow,
    sealedWindow->klass->vtable._10_Open.methodPtr);
  v30 = (BattleWindowOuterClickManagerComponent_o *)this->fields.sealedWindow;
  v35 = (BattleWindowOuterClickComponent_OuterClickCall_o *)sub_B170CC(
                                                              BattleWindowOuterClickComponent_OuterClickCall_TypeInfo,
                                                              v31,
                                                              v32,
                                                              v33,
                                                              v34);
  BattleWindowOuterClickComponent_OuterClickCall___ctor(
    v35,
    (Il2CppObject *)this,
    Method_BattlePerformanceCommandCard_OnCloseSealedWindow__,
    0LL);
  if ( !v30 )
    goto LABEL_16;
  BattleWindowOuterClickManagerComponent__setOuterClickCallBack(v30, v35, 0LL);
  tdConfWindow = (BattleWindowComponent_o *)this->fields.tdConfWindow;
  if ( !tdConfWindow )
    goto LABEL_16;
  BattleWindowComponent__setInitData(tdConfWindow, 2, 0.15, 0, 0LL);
  v37 = this->fields.tdConfWindow;
  if ( !v37 )
    goto LABEL_16;
  ((void (__fastcall *)(struct BattleTDConfWIndowComponent_o *, Il2CppMethodPointer))v37->klass->vtable._9_setClose.method)(
    v37,
    v37->klass->vtable._10_Open.methodPtr);
  v38 = (BattleWindowOuterClickManagerComponent_o *)this->fields.tdConfWindow;
  v43 = (BattleWindowOuterClickComponent_OuterClickCall_o *)sub_B170CC(
                                                              BattleWindowOuterClickComponent_OuterClickCall_TypeInfo,
                                                              v39,
                                                              v40,
                                                              v41,
                                                              v42);
  BattleWindowOuterClickComponent_OuterClickCall___ctor(
    v43,
    (Il2CppObject *)this,
    Method_BattlePerformanceCommandCard_OnCloseTdConfWindow__,
    0LL);
  if ( !v38 )
    goto LABEL_16;
  BattleWindowOuterClickManagerComponent__setOuterClickCallBack(v38, v43, 0LL);
  commandAssistDetailWindow = (BattleWindowComponent_o *)this->fields.commandAssistDetailWindow;
  if ( !commandAssistDetailWindow )
    goto LABEL_16;
  BattleWindowComponent__setInitData(commandAssistDetailWindow, 2, 0.15, 0, 0LL);
  v45 = this->fields.commandAssistDetailWindow;
  if ( !v45 )
    goto LABEL_16;
  ((void (__fastcall *)(struct BattleCommandAssistDetailWindowComponent_o *, Il2CppMethodPointer))v45->klass->vtable._9_setClose.method)(
    v45,
    v45->klass->vtable._10_Open.methodPtr);
  commandfsm = this->fields.commandfsm;
  if ( !commandfsm )
    goto LABEL_16;
  FsmVariables = PlayMakerFSM__get_FsmVariables(commandfsm, 0LL);
  if ( !FsmVariables )
    goto LABEL_16;
  FsmGameObject = HutongGames_PlayMaker_FsmVariables__GetFsmGameObject(
                    FsmVariables,
                    (System_String_o *)StringLiteral_10602,
                    0LL);
  v49 = (UnityEngine_Component_o *)*p_perf;
  if ( !*p_perf
    || (v50 = FsmGameObject, gameObject = UnityEngine_Component__get_gameObject(v49, 0LL), !v50)
    || (HutongGames_PlayMaker_FsmGameObject__set_Value(v50, gameObject, 0LL),
        Instance = (struct Spawner_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_Spawner__get_Instance__),
        this->fields.spawner = Instance,
        sub_B16F98(
          (BattleServantConfConponent_o *)&this->fields.spawner,
          (System_Int32_array **)Instance,
          v53,
          v54,
          v55,
          v56,
          v57,
          v58),
        (spawner = this->fields.spawner) == 0LL) )
  {
LABEL_16:
    sub_B170D4();
  }
  Spawner__Precache_24901732(spawner, (UnityEngine_Object_o *)this->fields.selectCommandPrefab, 3, 0LL);
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
  _BOOL8 isTutorial; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  struct BattleCommandComponent_array *commandCompArray; // x8
  unsigned __int64 v13; // x22
  unsigned __int64 max_length; // x9
  BattleCommandComponent_o *v15; // x21
  PlayMakerFSM_o *commandfsm; // x0
  HutongGames_PlayMaker_Fsm_o *Fsm; // x0
  HutongGames_PlayMaker_FsmVariables_o *variables; // x0
  HutongGames_PlayMaker_FsmInt_o *FsmInt; // x0
  PlayMakerFSM_o *v20; // x0
  System_String_o *v21; // x1
  BattleCommandData_o *data; // x0

  if ( (byte_40FC286 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, *(_QWORD *)&markindex);
    sub_B16FFC(&StringLiteral_8416, v5);
    sub_B16FFC(&StringLiteral_8415, v6);
    sub_B16FFC(&StringLiteral_20294, v7);
    byte_40FC286 = 1;
  }
  Bdata = this->fields.Bdata;
  if ( !Bdata )
    goto LABEL_28;
  isTutorial = BattleData__isTutorial(Bdata, 0LL);
  if ( !isTutorial )
  {
    commandCompArray = this->fields.commandCompArray;
    if ( commandCompArray )
    {
      v13 = 0LL;
      do
      {
        max_length = commandCompArray->max_length;
        if ( (__int64)v13 >= (int)max_length )
          return;
        if ( v13 >= max_length )
        {
          sub_B17100(isTutorial, v10, v11);
          sub_B170A0();
        }
        v15 = commandCompArray->m_Items[v13];
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        isTutorial = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v15, 0LL, 0LL);
        if ( !isTutorial )
        {
          if ( !v15 )
            break;
          isTutorial = BattleCommandComponent__checkMark(v15, markindex, 0LL);
          if ( isTutorial )
          {
            commandfsm = this->fields.commandfsm;
            if ( !commandfsm )
              break;
            Fsm = PlayMakerFSM__get_Fsm(commandfsm, 0LL);
            if ( !Fsm )
              break;
            variables = Fsm->fields.variables;
            if ( !variables )
              break;
            FsmInt = HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                       variables,
                       (System_String_o *)StringLiteral_20294,
                       0LL);
            if ( !FsmInt )
              break;
            FsmInt->fields.value = markindex;
            if ( BattleCommandComponent__isTreasureDvc(v15, 0LL) )
            {
              v20 = this->fields.commandfsm;
              if ( !v20 )
                break;
              v21 = (System_String_o *)StringLiteral_8415;
            }
            else
            {
              data = v15->fields.data;
              if ( !data )
                break;
              isTutorial = BattleCommandData__IsEnableCommandAssist(data, 0LL);
              if ( !isTutorial )
                goto LABEL_27;
              v20 = this->fields.commandfsm;
              if ( !v20 )
                break;
              v21 = (System_String_o *)StringLiteral_8416;
            }
            PlayMakerFSM__SendEvent(v20, v21, 0LL);
          }
        }
LABEL_27:
        commandCompArray = this->fields.commandCompArray;
        ++v13;
      }
      while ( commandCompArray );
    }
LABEL_28:
    sub_B170D4();
  }
}


void __fastcall BattlePerformanceCommandCard__MoveExtraCard(
        BattlePerformanceCommandCard_o *this,
        float moveTime,
        const MethodInfo *method)
{
  System_String_array **v3; // x2
  BattlePerformanceCommandCard_o *v5; // x21
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  struct BattleCommandComponent_array *selectedcomponents; // x8
  UnityEngine_Component_o *v15; // x0
  UnityEngine_GameObject_o *gameObject; // x19
  __int64 v17; // x2
  __int64 v18; // x0
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_Object_array *v24; // x20
  struct BattleCommandComponent_array *v25; // x8
  UnityEngine_Component_o *v26; // x0
  UnityEngine_GameObject_o *v27; // x0
  UnityEngine_Transform_o *transform; // x0
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_Int32_array **v34; // x21
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  System_Int32_array **v45; // x21
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  System_Int32_array **v56; // x21
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  System_String_array **v62; // x3
  System_Boolean_array **v63; // x4
  System_Int32_array **v64; // x5
  System_Int32_array *v65; // x6
  System_Int32_array *v66; // x7
  System_Int32_array **v67; // x21
  System_Collections_Hashtable_o *v68; // x0
  char v69[4]; // [xsp+8h] [xbp-38h] BYREF
  int v70; // [xsp+Ch] [xbp-34h] BYREF
  float v71; // [xsp+18h] [xbp-28h] BYREF
  float v72; // [xsp+1Ch] [xbp-24h] BYREF

  v5 = this;
  if ( (byte_40FC29B & 1) == 0 )
  {
    sub_B16FFC(&bool_TypeInfo, method);
    sub_B16FFC(&iTween_EaseType_TypeInfo, v6);
    sub_B16FFC(&object___TypeInfo, v7);
    sub_B16FFC(&float_TypeInfo, v8);
    sub_B16FFC(&StringLiteral_23222, v9);
    sub_B16FFC(&StringLiteral_18046, v10);
    sub_B16FFC(&StringLiteral_22584, v11);
    sub_B16FFC(&StringLiteral_19885, v12);
    this = (BattlePerformanceCommandCard_o *)sub_B16FFC(&iTween_TypeInfo, v13);
    byte_40FC29B = 1;
  }
  selectedcomponents = v5->fields.selectedcomponents;
  if ( !selectedcomponents )
    goto LABEL_49;
  if ( selectedcomponents->max_length <= 3 )
    goto LABEL_48;
  v15 = (UnityEngine_Component_o *)selectedcomponents->m_Items[3];
  if ( !v15 )
    goto LABEL_49;
  gameObject = UnityEngine_Component__get_gameObject(v15, 0LL);
  v18 = sub_B17014(object___TypeInfo, 8LL, v17);
  if ( !v18 )
    goto LABEL_49;
  v24 = (System_Object_array *)v18;
  this = (BattlePerformanceCommandCard_o *)StringLiteral_23222;
  if ( StringLiteral_23222 )
  {
    this = (BattlePerformanceCommandCard_o *)sub_B170BC(StringLiteral_23222, v24->obj.klass->_1.element_class);
    if ( !this )
      goto LABEL_50;
    method = (const MethodInfo *)StringLiteral_23222;
  }
  else
  {
    method = 0LL;
  }
  if ( !v24->max_length )
    goto LABEL_48;
  v24->m_Items[0] = (Il2CppObject *)method;
  sub_B16F98((BattleServantConfConponent_o *)v24->m_Items, (System_Int32_array **)method, v3, v19, v20, v21, v22, v23);
  v25 = v5->fields.selectedcomponents;
  if ( !v25 )
    goto LABEL_49;
  if ( v25->max_length <= 3 )
    goto LABEL_48;
  v26 = (UnityEngine_Component_o *)v25->m_Items[3];
  if ( !v26
    || (v27 = UnityEngine_Component__get_gameObject(v26, 0LL)) == 0LL
    || (transform = UnityEngine_GameObject__get_transform(v27, 0LL)) == 0LL )
  {
LABEL_49:
    sub_B170D4();
  }
  v72 = COERCE_FLOAT(UnityEngine_Transform__get_position(transform, 0LL)) + 250.0;
  this = (BattlePerformanceCommandCard_o *)j_il2cpp_value_box_0(float_TypeInfo, &v72);
  v34 = (System_Int32_array **)this;
  if ( this )
  {
    this = (BattlePerformanceCommandCard_o *)sub_B170BC(this, v24->obj.klass->_1.element_class);
    if ( !this )
      goto LABEL_50;
  }
  if ( v24->max_length <= 1 )
    goto LABEL_48;
  v24->m_Items[1] = (Il2CppObject *)v34;
  sub_B16F98((BattleServantConfConponent_o *)&v24->m_Items[1], v34, v3, v29, v30, v31, v32, v33);
  this = (BattlePerformanceCommandCard_o *)StringLiteral_22584;
  if ( StringLiteral_22584 )
  {
    this = (BattlePerformanceCommandCard_o *)sub_B170BC(StringLiteral_22584, v24->obj.klass->_1.element_class);
    if ( !this )
      goto LABEL_50;
    method = (const MethodInfo *)StringLiteral_22584;
  }
  else
  {
    method = 0LL;
  }
  if ( v24->max_length <= 2 )
    goto LABEL_48;
  v24->m_Items[2] = (Il2CppObject *)method;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v24->m_Items[2],
    (System_Int32_array **)method,
    v3,
    v35,
    v36,
    v37,
    v38,
    v39);
  v71 = moveTime;
  this = (BattlePerformanceCommandCard_o *)j_il2cpp_value_box_0(float_TypeInfo, &v71);
  v45 = (System_Int32_array **)this;
  if ( this )
  {
    this = (BattlePerformanceCommandCard_o *)sub_B170BC(this, v24->obj.klass->_1.element_class);
    if ( !this )
      goto LABEL_50;
  }
  if ( v24->max_length <= 3 )
    goto LABEL_48;
  v24->m_Items[3] = (Il2CppObject *)v45;
  sub_B16F98((BattleServantConfConponent_o *)&v24->m_Items[3], v45, v3, v40, v41, v42, v43, v44);
  this = (BattlePerformanceCommandCard_o *)StringLiteral_18046;
  if ( StringLiteral_18046 )
  {
    this = (BattlePerformanceCommandCard_o *)sub_B170BC(StringLiteral_18046, v24->obj.klass->_1.element_class);
    if ( !this )
      goto LABEL_50;
    method = (const MethodInfo *)StringLiteral_18046;
  }
  else
  {
    method = 0LL;
  }
  if ( v24->max_length <= 4 )
    goto LABEL_48;
  v24->m_Items[4] = (Il2CppObject *)method;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v24->m_Items[4],
    (System_Int32_array **)method,
    v3,
    v46,
    v47,
    v48,
    v49,
    v50);
  v70 = 16;
  this = (BattlePerformanceCommandCard_o *)j_il2cpp_value_box_0(iTween_EaseType_TypeInfo, &v70);
  v56 = (System_Int32_array **)this;
  if ( this )
  {
    this = (BattlePerformanceCommandCard_o *)sub_B170BC(this, v24->obj.klass->_1.element_class);
    if ( !this )
      goto LABEL_50;
  }
  if ( v24->max_length <= 5 )
    goto LABEL_48;
  v24->m_Items[5] = (Il2CppObject *)v56;
  sub_B16F98((BattleServantConfConponent_o *)&v24->m_Items[5], v56, v3, v51, v52, v53, v54, v55);
  this = (BattlePerformanceCommandCard_o *)StringLiteral_19885;
  if ( StringLiteral_19885 )
  {
    this = (BattlePerformanceCommandCard_o *)sub_B170BC(StringLiteral_19885, v24->obj.klass->_1.element_class);
    if ( !this )
      goto LABEL_50;
    method = (const MethodInfo *)StringLiteral_19885;
  }
  else
  {
    method = 0LL;
  }
  if ( v24->max_length <= 6 )
    goto LABEL_48;
  v24->m_Items[6] = (Il2CppObject *)method;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v24->m_Items[6],
    (System_Int32_array **)method,
    v3,
    v57,
    v58,
    v59,
    v60,
    v61);
  v69[0] = 1;
  this = (BattlePerformanceCommandCard_o *)j_il2cpp_value_box_0(bool_TypeInfo, v69);
  v67 = (System_Int32_array **)this;
  if ( this )
  {
    this = (BattlePerformanceCommandCard_o *)sub_B170BC(this, v24->obj.klass->_1.element_class);
    if ( !this )
    {
LABEL_50:
      sub_B170F4(this);
      sub_B170A0();
    }
  }
  if ( v24->max_length <= 7 )
  {
LABEL_48:
    sub_B17100(this, method, v3);
    sub_B170A0();
  }
  v24->m_Items[7] = (Il2CppObject *)v67;
  sub_B16F98((BattleServantConfConponent_o *)&v24->m_Items[7], v67, v3, v62, v63, v64, v65, v66);
  if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  v68 = iTween__Hash(v24, 0LL);
  iTween__MoveFrom_18435792(gameObject, v68, 0LL);
}


void __fastcall BattlePerformanceCommandCard__MoveNotTween(
        BattlePerformanceCommandCard_o *this,
        UnityEngine_Transform_o *target,
        System_Action_GameObject__o *callback,
        const MethodInfo *method)
{
  BattlePerformance_o *perf; // x0
  UnityEngine_GameObject_o *EffectInstantiate; // x0
  BattleMoveObject_o *Component_srcLineSprite; // x0
  BattleMoveObject_o *v10; // x21
  UnityEngine_Transform_o *Transform; // x0
  UnityEngine_Component_o *criticalpointTr; // x8
  UnityEngine_Transform_o *v13; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t layer; // w0
  float x; // s8
  float y; // s9
  float z; // s10
  float v19; // s11
  float v20; // s7
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  UnityEngine_Vector3_o v27; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v29; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v30; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v31; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v32; // 0:s3.4,4:s4.4,8:s5.4

  if ( (byte_40FC2A4 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_BattleMoveObject___, target);
    byte_40FC2A4 = 1;
  }
  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_11;
  EffectInstantiate = BattlePerformance__getEffectInstantiate(perf, 9, this->fields.criticalpointTr, 0LL);
  if ( !EffectInstantiate )
    goto LABEL_11;
  Component_srcLineSprite = (BattleMoveObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                    EffectInstantiate,
                                                    (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_BattleMoveObject___);
  if ( !Component_srcLineSprite )
    goto LABEL_11;
  v10 = Component_srcLineSprite;
  Transform = BattleMoveObject__GetTransform(Component_srcLineSprite, 0LL);
  criticalpointTr = (UnityEngine_Component_o *)this->fields.criticalpointTr;
  if ( !criticalpointTr )
    goto LABEL_11;
  v13 = Transform;
  gameObject = UnityEngine_Component__get_gameObject(criticalpointTr, 0LL);
  if ( !gameObject
    || (layer = UnityEngine_GameObject__get_layer(gameObject, 0LL),
        TransformHelper__ChangeChildsLayer(v13, layer, 0LL),
        !v13)
    || (v27.fields.x = 0.0,
        v27.fields.y = 0.0,
        v27.fields.z = 0.0,
        UnityEngine_Transform__set_localPosition(v13, v27, 0LL),
        BattleMoveObject__SetRigidbodyGravity(v10, 0, 0LL),
        !target) )
  {
LABEL_11:
    sub_B170D4();
  }
  localPosition = UnityEngine_Transform__get_localPosition(target, 0LL);
  localPosition.fields.x = localPosition.fields.x + 0.0;
  localPosition.fields.z = localPosition.fields.z + 0.0;
  localPosition.fields.y = localPosition.fields.y + 70.0;
  v29 = UnityEngine_Transform__TransformPoint(target, localPosition, 0LL);
  v30 = UnityEngine_Transform__InverseTransformPoint(v13, v29, 0LL);
  x = v30.fields.x;
  y = v30.fields.y;
  z = v30.fields.z;
  v19 = UnityEngine_Random__Range(0.3, 0.5, 0LL);
  v20 = UnityEngine_Random__Range(0.0, 0.2, 0LL);
  v31.fields.x = 0.0;
  v31.fields.y = 0.0;
  v31.fields.z = 0.0;
  v32.fields.x = x;
  v32.fields.y = y;
  v32.fields.z = z;
  BattleMoveObject__StartNotTweenMove(v10, v31, v32, v19, v20, callback, 0LL);
  v10->fields.targetTr = target;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v10->fields.targetTr,
    (System_Int32_array **)target,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceCommandCard__MoveNotTween2back(
        BattlePerformanceCommandCard_o *this,
        UnityEngine_Transform_o *from,
        System_Action_GameObject__o *callback,
        const MethodInfo *method)
{
  BattlePerformance_o *perf; // x0
  UnityEngine_GameObject_o *EffectInstantiate; // x0
  BattleMoveObject_o *Component_srcLineSprite; // x0
  BattleMoveObject_o *v10; // x21
  UnityEngine_Transform_o *Transform; // x0
  UnityEngine_Component_o *criticalpointTr; // x8
  UnityEngine_Transform_o *v13; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t layer; // w0
  int v16; // s0
  float x; // s8
  float y; // s9
  float z; // s10
  float v22; // s11
  float v23; // s7
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v31; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v32; // 0:s3.4,4:s4.4,8:s5.4

  if ( (byte_40FC2A5 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_BattleMoveObject___, from);
    byte_40FC2A5 = 1;
  }
  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_11;
  EffectInstantiate = BattlePerformance__getEffectInstantiate(perf, 9, this->fields.criticalpointTr, 0LL);
  if ( !EffectInstantiate )
    goto LABEL_11;
  Component_srcLineSprite = (BattleMoveObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                    EffectInstantiate,
                                                    (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_BattleMoveObject___);
  if ( !Component_srcLineSprite )
    goto LABEL_11;
  v10 = Component_srcLineSprite;
  Transform = BattleMoveObject__GetTransform(Component_srcLineSprite, 0LL);
  criticalpointTr = (UnityEngine_Component_o *)this->fields.criticalpointTr;
  if ( !criticalpointTr
    || (v13 = Transform, (gameObject = UnityEngine_Component__get_gameObject(criticalpointTr, 0LL)) == 0LL)
    || (layer = UnityEngine_GameObject__get_layer(gameObject, 0LL),
        TransformHelper__ChangeChildsLayer(v13, layer, 0LL),
        !from)
    || (*(UnityEngine_Vector3_o *)&v16 = UnityEngine_Transform__get_position(from, 0LL), !v13) )
  {
LABEL_11:
    sub_B170D4();
  }
  UnityEngine_Transform__set_position(v13, *(UnityEngine_Vector3_o *)&v16, 0LL);
  BattleMoveObject__SetRigidbodyGravity(v10, 0, 0LL);
  localPosition = UnityEngine_Transform__get_localPosition(v13, 0LL);
  x = localPosition.fields.x;
  y = localPosition.fields.y;
  z = localPosition.fields.z;
  v22 = UnityEngine_Random__Range(0.3, 0.5, 0LL);
  v23 = UnityEngine_Random__Range(0.0, 0.2, 0LL);
  v32.fields.x = 0.0;
  v32.fields.y = 0.0;
  v32.fields.z = 0.0;
  v31.fields.x = x;
  v31.fields.y = y;
  v31.fields.z = z;
  BattleMoveObject__StartNotTweenMove(v10, v31, v32, v22, v23, callback, 0LL);
  v10->fields.targetTr = from;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v10->fields.targetTr,
    (System_Int32_array **)from,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
}


void __fastcall BattlePerformanceCommandCard__MoveSelectedCard(
        BattlePerformanceCommandCard_o *this,
        float moveTime,
        const MethodInfo *method)
{
  System_String_array **v3; // x2
  BattlePerformanceCommandCard_o *v5; // x19
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x23
  struct BattleCommandComponent_array *selectedcomponents; // x8
  UnityEngine_Component_o *v16; // x0
  UnityEngine_GameObject_o *gameObject; // x20
  __int64 v18; // x2
  __int64 v19; // x0
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_Object_array *v25; // x21
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_Int32_array **v31; // x22
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  System_Int32_array **v42; // x22
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  System_Int32_array **v53; // x22
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  System_String_array **v59; // x3
  System_Boolean_array **v60; // x4
  System_Int32_array **v61; // x5
  System_Int32_array *v62; // x6
  System_Int32_array *v63; // x7
  System_Int32_array **v64; // x22
  System_Collections_Hashtable_o *v65; // x0
  char v66[4]; // [xsp+8h] [xbp-68h] BYREF
  int v67; // [xsp+Ch] [xbp-64h] BYREF
  float v68; // [xsp+18h] [xbp-58h] BYREF
  int v69; // [xsp+1Ch] [xbp-54h] BYREF

  v5 = this;
  if ( (byte_40FC299 & 1) == 0 )
  {
    sub_B16FFC(&bool_TypeInfo, method);
    sub_B16FFC(&iTween_EaseType_TypeInfo, v6);
    sub_B16FFC(&object___TypeInfo, v7);
    sub_B16FFC(&float_TypeInfo, v8);
    sub_B16FFC(&StringLiteral_23222, v9);
    sub_B16FFC(&StringLiteral_18046, v10);
    sub_B16FFC(&StringLiteral_22584, v11);
    sub_B16FFC(&StringLiteral_19885, v12);
    this = (BattlePerformanceCommandCard_o *)sub_B16FFC(&iTween_TypeInfo, v13);
    byte_40FC299 = 1;
  }
  v14 = 0LL;
  do
  {
    selectedcomponents = v5->fields.selectedcomponents;
    if ( !selectedcomponents )
      goto LABEL_47;
    if ( (unsigned int)v14 >= selectedcomponents->max_length )
      goto LABEL_45;
    v16 = (UnityEngine_Component_o *)selectedcomponents->m_Items[v14];
    if ( !v16
      || (gameObject = UnityEngine_Component__get_gameObject(v16, 0LL),
          (v19 = sub_B17014(object___TypeInfo, 8LL, v18)) == 0) )
    {
LABEL_47:
      sub_B170D4();
    }
    v25 = (System_Object_array *)v19;
    this = (BattlePerformanceCommandCard_o *)StringLiteral_23222;
    if ( StringLiteral_23222 )
    {
      this = (BattlePerformanceCommandCard_o *)sub_B170BC(StringLiteral_23222, v25->obj.klass->_1.element_class);
      if ( !this )
        goto LABEL_46;
      method = (const MethodInfo *)StringLiteral_23222;
    }
    else
    {
      method = 0LL;
    }
    if ( !v25->max_length )
      goto LABEL_45;
    v25->m_Items[0] = (Il2CppObject *)method;
    sub_B16F98((BattleServantConfConponent_o *)v25->m_Items, (System_Int32_array **)method, v3, v20, v21, v22, v23, v24);
    v69 = -1081291571;
    this = (BattlePerformanceCommandCard_o *)j_il2cpp_value_box_0(float_TypeInfo, &v69);
    v31 = (System_Int32_array **)this;
    if ( this )
    {
      this = (BattlePerformanceCommandCard_o *)sub_B170BC(this, v25->obj.klass->_1.element_class);
      if ( !this )
      {
LABEL_46:
        sub_B170F4(this);
        sub_B170A0();
      }
    }
    if ( v25->max_length <= 1 )
      goto LABEL_45;
    v25->m_Items[1] = (Il2CppObject *)v31;
    sub_B16F98((BattleServantConfConponent_o *)&v25->m_Items[1], v31, v3, v26, v27, v28, v29, v30);
    this = (BattlePerformanceCommandCard_o *)StringLiteral_22584;
    if ( StringLiteral_22584 )
    {
      this = (BattlePerformanceCommandCard_o *)sub_B170BC(StringLiteral_22584, v25->obj.klass->_1.element_class);
      if ( !this )
        goto LABEL_46;
      method = (const MethodInfo *)StringLiteral_22584;
    }
    else
    {
      method = 0LL;
    }
    if ( v25->max_length <= 2 )
      goto LABEL_45;
    v25->m_Items[2] = (Il2CppObject *)method;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v25->m_Items[2],
      (System_Int32_array **)method,
      v3,
      v32,
      v33,
      v34,
      v35,
      v36);
    v68 = moveTime;
    this = (BattlePerformanceCommandCard_o *)j_il2cpp_value_box_0(float_TypeInfo, &v68);
    v42 = (System_Int32_array **)this;
    if ( this )
    {
      this = (BattlePerformanceCommandCard_o *)sub_B170BC(this, v25->obj.klass->_1.element_class);
      if ( !this )
        goto LABEL_46;
    }
    if ( v25->max_length <= 3 )
      goto LABEL_45;
    v25->m_Items[3] = (Il2CppObject *)v42;
    sub_B16F98((BattleServantConfConponent_o *)&v25->m_Items[3], v42, v3, v37, v38, v39, v40, v41);
    this = (BattlePerformanceCommandCard_o *)StringLiteral_18046;
    if ( StringLiteral_18046 )
    {
      this = (BattlePerformanceCommandCard_o *)sub_B170BC(StringLiteral_18046, v25->obj.klass->_1.element_class);
      if ( !this )
        goto LABEL_46;
      method = (const MethodInfo *)StringLiteral_18046;
    }
    else
    {
      method = 0LL;
    }
    if ( v25->max_length <= 4 )
      goto LABEL_45;
    v25->m_Items[4] = (Il2CppObject *)method;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v25->m_Items[4],
      (System_Int32_array **)method,
      v3,
      v43,
      v44,
      v45,
      v46,
      v47);
    v67 = 1;
    this = (BattlePerformanceCommandCard_o *)j_il2cpp_value_box_0(iTween_EaseType_TypeInfo, &v67);
    v53 = (System_Int32_array **)this;
    if ( this )
    {
      this = (BattlePerformanceCommandCard_o *)sub_B170BC(this, v25->obj.klass->_1.element_class);
      if ( !this )
        goto LABEL_46;
    }
    if ( v25->max_length <= 5 )
      goto LABEL_45;
    v25->m_Items[5] = (Il2CppObject *)v53;
    sub_B16F98((BattleServantConfConponent_o *)&v25->m_Items[5], v53, v3, v48, v49, v50, v51, v52);
    this = (BattlePerformanceCommandCard_o *)StringLiteral_19885;
    if ( StringLiteral_19885 )
    {
      this = (BattlePerformanceCommandCard_o *)sub_B170BC(StringLiteral_19885, v25->obj.klass->_1.element_class);
      if ( !this )
        goto LABEL_46;
      method = (const MethodInfo *)StringLiteral_19885;
    }
    else
    {
      method = 0LL;
    }
    if ( v25->max_length <= 6 )
    {
LABEL_45:
      sub_B17100(this, method, v3);
      sub_B170A0();
    }
    v25->m_Items[6] = (Il2CppObject *)method;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v25->m_Items[6],
      (System_Int32_array **)method,
      v3,
      v54,
      v55,
      v56,
      v57,
      v58);
    v66[0] = 1;
    this = (BattlePerformanceCommandCard_o *)j_il2cpp_value_box_0(bool_TypeInfo, v66);
    v64 = (System_Int32_array **)this;
    if ( this )
    {
      this = (BattlePerformanceCommandCard_o *)sub_B170BC(this, v25->obj.klass->_1.element_class);
      if ( !this )
        goto LABEL_46;
    }
    if ( v25->max_length <= 7 )
      goto LABEL_45;
    v25->m_Items[7] = (Il2CppObject *)v64;
    sub_B16F98((BattleServantConfConponent_o *)&v25->m_Items[7], v64, v3, v59, v60, v61, v62, v63);
    if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
    v65 = iTween__Hash(v25, 0LL);
    iTween__MoveAdd_18438872(gameObject, v65, 0LL);
    ++v14;
  }
  while ( (unsigned int)(v14 - 1) < 2 );
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
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x3
  __int64 v10; // x4
  struct BattleCommandAssistDetailWindowComponent_o *v11; // x20
  BattleWindowComponent_EndCall_o *v12; // x21
  _QWORD *v13; // x0
  System_Reflection_MethodBase_o *v14; // x0

  if ( (byte_40FC2B4 & 1) == 0 )
  {
    sub_B16FFC(&Method_BattlePerformanceCommandCard_OnCloseCommandAssistDetailWindow__, method);
    sub_B16FFC(&Method_BattlePerformanceCommandCard_endCloseCommandAssistDetailWindow__, v3);
    sub_B16FFC(&BattleWindowComponent_EndCall_TypeInfo, v4);
    sub_B16FFC(&StringLiteral_16502, v5);
    byte_40FC2B4 = 1;
  }
  commandAssistDetailWindow = (BattleWindowComponent_o *)this->fields.commandAssistDetailWindow;
  if ( !commandAssistDetailWindow )
    goto LABEL_10;
  if ( !BattleWindowComponent__isOpen(commandAssistDetailWindow, 0LL) )
    return;
  v11 = this->fields.commandAssistDetailWindow;
  v12 = (BattleWindowComponent_EndCall_o *)sub_B170CC(BattleWindowComponent_EndCall_TypeInfo, v7, v8, v9, v10);
  BattleWindowComponent_EndCall___ctor(
    v12,
    (Il2CppObject *)this,
    Method_BattlePerformanceCommandCard_endCloseCommandAssistDetailWindow__,
    0LL);
  if ( !v11 )
LABEL_10:
    sub_B170D4();
  ((void (__fastcall *)(struct BattleCommandAssistDetailWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))v11->klass->vtable._12_Close.method)(
    v11,
    v12,
    v11->klass->vtable._13_CompClose.methodPtr);
  v13 = Method_BattlePerformanceCommandCard_OnCloseCommandAssistDetailWindow__;
  if ( (*((_BYTE *)Method_BattlePerformanceCommandCard_OnCloseCommandAssistDetailWindow__ + 75) & 2) != 0 )
    v13 = (_QWORD *)sub_B17004(Method_BattlePerformanceCommandCard_OnCloseCommandAssistDetailWindow__);
  v14 = (System_Reflection_MethodBase_o *)sub_B16FE0(v13, v13[3]);
  OverwriteAssetSoundName__PlaySe(v14, (System_String_o *)StringLiteral_16502, 0LL);
}


void __fastcall BattlePerformanceCommandCard__OnCloseSealedWindow(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  struct BattleSealedCommandWindowComponent_o *sealedWindow; // x20
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x4
  BattleWindowComponent_EndCall_o *v10; // x21

  if ( (byte_40FC2AE & 1) == 0 )
  {
    sub_B16FFC(&Method_BattlePerformanceCommandCard_endCloseSealedWindow__, method);
    sub_B16FFC(&BattleWindowComponent_EndCall_TypeInfo, v3);
    sub_B16FFC(&SoundManager_TypeInfo, v4);
    byte_40FC2AE = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  sealedWindow = this->fields.sealedWindow;
  v10 = (BattleWindowComponent_EndCall_o *)sub_B170CC(BattleWindowComponent_EndCall_TypeInfo, v6, v7, v8, v9);
  BattleWindowComponent_EndCall___ctor(
    v10,
    (Il2CppObject *)this,
    Method_BattlePerformanceCommandCard_endCloseSealedWindow__,
    0LL);
  if ( !sealedWindow )
    sub_B170D4();
  ((void (__fastcall *)(struct BattleSealedCommandWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))sealedWindow->klass->vtable._12_Close.method)(
    sealedWindow,
    v10,
    sealedWindow->klass->vtable._13_CompClose.methodPtr);
}


void __fastcall BattlePerformanceCommandCard__OnCloseTdConfWindow(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  BattleWindowComponent_o *tdConfWindow; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x4
  struct BattleTDConfWIndowComponent_o *v10; // x20
  BattleWindowComponent_EndCall_o *v11; // x21

  if ( (byte_40FC2B1 & 1) == 0 )
  {
    sub_B16FFC(&Method_BattlePerformanceCommandCard_endCloseTdConfWindow__, method);
    sub_B16FFC(&BattleWindowComponent_EndCall_TypeInfo, v3);
    sub_B16FFC(&SoundManager_TypeInfo, v4);
    byte_40FC2B1 = 1;
  }
  tdConfWindow = (BattleWindowComponent_o *)this->fields.tdConfWindow;
  if ( !tdConfWindow )
    goto LABEL_11;
  if ( !BattleWindowComponent__isOpen(tdConfWindow, 0LL) )
    return;
  v10 = this->fields.tdConfWindow;
  v11 = (BattleWindowComponent_EndCall_o *)sub_B170CC(BattleWindowComponent_EndCall_TypeInfo, v6, v7, v8, v9);
  BattleWindowComponent_EndCall___ctor(
    v11,
    (Il2CppObject *)this,
    Method_BattlePerformanceCommandCard_endCloseTdConfWindow__,
    0LL);
  if ( !v10 )
LABEL_11:
    sub_B170D4();
  ((void (__fastcall *)(struct BattleTDConfWIndowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))v10->klass->vtable._12_Close.method)(
    v10,
    v11,
    v10->klass->vtable._13_CompClose.methodPtr);
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
  BattleCommandAssistDetailWindowComponent_o *commandAssistDetailWindow; // x0
  _QWORD *v13; // x0
  System_Reflection_MethodBase_o *v14; // x0
  struct BattleCommandAssistDetailWindowComponent_o *v15; // x0

  v4 = this;
  if ( (byte_40FC2B3 & 1) == 0 )
  {
    sub_B16FFC(&Method_BattlePerformanceCommandCard_OpenCommandAssistDetailWIndow__, *(_QWORD *)&markIndex);
    this = (BattlePerformanceCommandCard_o *)sub_B16FFC(&StringLiteral_16501, v5);
    byte_40FC2B3 = 1;
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
        sub_B17100(this, *(_QWORD *)&markIndex, method);
        sub_B170A0();
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
      commandAssistDetailWindow = v4->fields.commandAssistDetailWindow;
      if ( commandAssistDetailWindow )
      {
        BattleCommandAssistDetailWindowComponent__SetCommandAssistInfo(commandAssistDetailWindow, methodPtr, 0LL);
        v13 = Method_BattlePerformanceCommandCard_OpenCommandAssistDetailWIndow__;
        if ( (*((_BYTE *)Method_BattlePerformanceCommandCard_OpenCommandAssistDetailWIndow__ + 75) & 2) != 0 )
          v13 = (_QWORD *)sub_B17004(Method_BattlePerformanceCommandCard_OpenCommandAssistDetailWIndow__);
        v14 = (System_Reflection_MethodBase_o *)sub_B16FE0(v13, v13[3]);
        OverwriteAssetSoundName__PlaySe(v14, (System_String_o *)StringLiteral_16501, 0LL);
        v15 = v4->fields.commandAssistDetailWindow;
        if ( v15 )
        {
          ((void (__fastcall *)(struct BattleCommandAssistDetailWindowComponent_o *, _QWORD, Il2CppMethodPointer))v15->klass->vtable._10_Open.method)(
            v15,
            0LL,
            v15->klass->vtable._11_CompOpen.methodPtr);
          return;
        }
      }
LABEL_19:
      sub_B170D4();
    }
  }
}


void __fastcall BattlePerformanceCommandCard__OpenInitiarize(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  BattleLogic_o *logic; // x0
  BattleLogic_o *v4; // x0

  logic = this->fields.logic;
  if ( !logic )
    goto LABEL_7;
  if ( BattleLogic__getTutorialId(logic, 0LL) != 1 )
    goto LABEL_6;
  v4 = this->fields.logic;
  if ( !v4 )
LABEL_7:
    sub_B170D4();
  if ( BattleLogic__getTurn(v4, 0LL) == 4 )
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
  _BOOL8 v9; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  struct BattleCommandComponent_array *commandCompArray; // x8
  __int64 v13; // x22
  int max_length; // w9
  Il2CppClass **v15; // x8
  BattleCommandComponent_o *v16; // x21
  struct BattleSealedCommandWindowComponent_o **p_sealedWindow; // x19
  BattleCommandSealStatus_o *SealStatus; // x0
  BattlePerformanceCommandCard_o *PrioredStatus; // x0
  int v20; // w22
  const MethodInfo *v21; // x2
  System_String_o *SealedWindowMessageLocalizationKey; // x21
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  __int64 v27; // x20
  const MethodInfo_29CF778 *v28; // x2
  BattleSealedCommandWindowComponent_o *sealedWindow; // x22
  System_String_o *v30; // x0
  __int128 v31; // [xsp+0h] [xbp-40h] BYREF
  __int64 v32; // [xsp+18h] [xbp-28h] BYREF
  System_Nullable_int__o v33; // 0:x0.8
  System_Nullable_Vector3__o v34; // 0:x0.16
  UnityEngine_Vector3_o v35; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40FC2AC & 1) == 0 )
  {
    sub_B16FFC(&BattleSealedCommandWindowComponent_LabelAdjustArgs_TypeInfo, *(_QWORD *)&markIndex);
    sub_B16FFC(&LocalizationManager_TypeInfo, v5);
    sub_B16FFC(&Method_System_Nullable_Vector3___ctor__, v6);
    sub_B16FFC(&Method_System_Nullable_int___ctor__, v7);
    sub_B16FFC(&SoundManager_TypeInfo, v8);
    byte_40FC2AC = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(2, 0LL);
  commandCompArray = this->fields.commandCompArray;
  if ( !commandCompArray )
    goto LABEL_13;
  v13 = 0LL;
  while ( 1 )
  {
    max_length = commandCompArray->max_length;
    if ( (int)v13 >= max_length )
    {
      p_sealedWindow = &this->fields.sealedWindow;
      goto LABEL_24;
    }
    if ( (unsigned int)v13 >= max_length )
    {
      sub_B17100(v9, v10, v11);
      sub_B170A0();
    }
    v15 = &commandCompArray->obj.klass + v13;
    v16 = (BattleCommandComponent_o *)v15[4];
    if ( !v16 )
      goto LABEL_13;
    v9 = BattleCommandComponent__checkMark((BattleCommandComponent_o *)v15[4], markIndex, 0LL);
    if ( v9 )
      break;
    commandCompArray = this->fields.commandCompArray;
    ++v13;
    if ( !commandCompArray )
      goto LABEL_13;
  }
  SealStatus = BattleCommandComponent__get_SealStatus(v16, 0LL);
  if ( !SealStatus )
    goto LABEL_13;
  PrioredStatus = (BattlePerformanceCommandCard_o *)BattleCommandSealStatus__get_PrioredStatus(SealStatus, 0LL);
  v20 = (int)PrioredStatus;
  SealedWindowMessageLocalizationKey = BattlePerformanceCommandCard__GetSealedWindowMessageLocalizationKey(
                                         PrioredStatus,
                                         (int32_t)PrioredStatus,
                                         v21);
  v27 = sub_B170CC(BattleSealedCommandWindowComponent_LabelAdjustArgs_TypeInfo, v23, v24, v25, v26);
  BattleSealedCommandWindowComponent_LabelAdjustArgs___ctor(
    (BattleSealedCommandWindowComponent_LabelAdjustArgs_o *)v27,
    0LL);
  if ( v20 == 6 )
  {
    v33 = (System_Nullable_int__o)&v32;
    v32 = 0LL;
    System_Nullable_int____ctor(v33, 26, (const MethodInfo_296877C *)Method_System_Nullable_int___ctor__);
    if ( v27 )
    {
      v35.fields.y = 15.0;
      *(_QWORD *)&v34.fields.value.fields.x = &v31;
      v35.fields.x = 0.0;
      *(_QWORD *)(v27 + 16) = v32;
      v35.fields.z = 0.0;
      v31 = 0uLL;
      *(_QWORD *)&v34.fields.value.fields.z = Method_System_Nullable_Vector3___ctor__;
      System_Nullable_Vector3____ctor(v34, v35, v28);
      *(_OWORD *)(v27 + 24) = v31;
      goto LABEL_19;
    }
LABEL_13:
    sub_B170D4();
  }
LABEL_19:
  sealedWindow = this->fields.sealedWindow;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v30 = LocalizationManager__Get(SealedWindowMessageLocalizationKey, 0LL);
  if ( !sealedWindow )
    goto LABEL_13;
  p_sealedWindow = &this->fields.sealedWindow;
  BattleSealedCommandWindowComponent__setLabel(
    sealedWindow,
    v30,
    (BattleSealedCommandWindowComponent_LabelAdjustArgs_o *)v27,
    0LL);
LABEL_24:
  if ( !*p_sealedWindow )
    goto LABEL_13;
  ((void (__fastcall *)(struct BattleSealedCommandWindowComponent_o *, _QWORD, Il2CppMethodPointer))(*p_sealedWindow)->klass->vtable._10_Open.method)(
    *p_sealedWindow,
    0LL,
    (*p_sealedWindow)->klass->vtable._11_CompOpen.methodPtr);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceCommandCard__OpenTdConfWindow(
        BattlePerformanceCommandCard_o *this,
        int32_t markIndex,
        const MethodInfo *method)
{
  Il2CppObject *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  Il2CppClass *klass; // x8
  __int64 v8; // x26
  int namespaze; // w9
  void **v10; // x8
  BattleCommandComponent_o *v11; // x21
  BattleData_o *v12; // x22
  int32_t UniqueID; // w0
  BattleServantData_o *ServantData; // x0
  BattleServantData_o *v15; // x21
  ServantEntity_o *svtdata; // x0
  ServantLimitAddEntity_o *svtlimitaddent; // x24
  bool IsNameTrueFromBattleSvt; // w0
  System_String_o *OverwriteTDRuby; // x22
  System_String_o *OverwriteTDName; // x23
  BattleData_o *v21; // x0
  bool IsNpDetailActive; // w0
  BattleTDConfWIndowComponent_o *monitor; // x24
  bool v24; // w25
  int32_t TreasureDvcId; // w0
  void *v26; // x20
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x3
  __int64 v30; // x4
  BattleWindowComponent_EndCall_o *v31; // x21

  v4 = (Il2CppObject *)this;
  if ( (byte_40FC2B0 & 1) == 0 )
  {
    sub_B16FFC(&Method_BattlePerformanceCommandCard_endOpenTdConf__, *(_QWORD *)&markIndex);
    sub_B16FFC(&BattleWindowComponent_EndCall_TypeInfo, v5);
    this = (BattlePerformanceCommandCard_o *)sub_B16FFC(&SeManager_TypeInfo, v6);
    byte_40FC2B0 = 1;
  }
  klass = v4[29].klass;
  if ( !klass )
    goto LABEL_19;
  v8 = 0LL;
  while ( 1 )
  {
    namespaze = (int)klass->_1.namespaze;
    if ( (int)v8 >= namespaze )
      break;
    if ( (unsigned int)v8 >= namespaze )
    {
      sub_B17100(this, *(_QWORD *)&markIndex, method);
      sub_B170A0();
    }
    v10 = &klass->_1.image + v8;
    v11 = (BattleCommandComponent_o *)v10[4];
    if ( !v11 )
      goto LABEL_19;
    this = (BattlePerformanceCommandCard_o *)BattleCommandComponent__checkMark(
                                               (BattleCommandComponent_o *)v10[4],
                                               markIndex,
                                               0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v12 = (BattleData_o *)v4[26].klass;
      UniqueID = BattleCommandComponent__getUniqueID(v11, 0LL);
      if ( !v12 )
        goto LABEL_19;
      ServantData = BattleData__getServantData(v12, UniqueID, 0LL);
      if ( !ServantData )
        goto LABEL_19;
      v15 = ServantData;
      svtdata = ServantData->fields.svtdata;
      if ( !svtdata )
        goto LABEL_19;
      svtlimitaddent = v15->fields.svtlimitaddent;
      IsNameTrueFromBattleSvt = ServantEntity__IsNameTrueFromBattleSvt(svtdata, 0LL);
      OverwriteTDRuby = 0LL;
      OverwriteTDName = 0LL;
      if ( svtlimitaddent && IsNameTrueFromBattleSvt )
      {
        OverwriteTDName = ServantLimitAddEntity__GetOverwriteTDName(svtlimitaddent, 0LL);
        OverwriteTDRuby = ServantLimitAddEntity__GetOverwriteTDRuby(svtlimitaddent, 0LL);
      }
      v21 = (BattleData_o *)v4[26].klass;
      if ( !v21 )
        goto LABEL_19;
      IsNpDetailActive = BattleData__IsNpDetailActive(v21, v15, 1, 0LL);
      monitor = (BattleTDConfWIndowComponent_o *)v4[22].monitor;
      v24 = IsNpDetailActive;
      TreasureDvcId = BattleServantData__getTreasureDvcId(v15, 1, 0LL);
      if ( !monitor )
        goto LABEL_19;
      BattleTDConfWIndowComponent__setData(
        monitor,
        TreasureDvcId,
        v15->fields.treasuredvcLevel,
        OverwriteTDName,
        OverwriteTDRuby,
        v24,
        0LL);
    }
    klass = v4[29].klass;
    ++v8;
    if ( !klass )
      goto LABEL_19;
  }
  if ( (BYTE3(SeManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SeManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
  SeManager__PlayCommonSe(9, 0LL);
  v26 = v4[22].monitor;
  v31 = (BattleWindowComponent_EndCall_o *)sub_B170CC(BattleWindowComponent_EndCall_TypeInfo, v27, v28, v29, v30);
  BattleWindowComponent_EndCall___ctor(v31, v4, Method_BattlePerformanceCommandCard_endOpenTdConf__, 0LL);
  if ( !v26 )
LABEL_19:
    sub_B170D4();
  (*(void (__fastcall **)(void *, BattleWindowComponent_EndCall_o *, _QWORD))(*(_QWORD *)v26 + 472LL))(
    v26,
    v31,
    *(_QWORD *)(*(_QWORD *)v26 + 480LL));
}


void __fastcall BattlePerformanceCommandCard__PlayBackStar(
        BattlePerformanceCommandCard_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
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
  __int64 v17; // x22
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
  struct System_Collections_Generic_List_GameObject__o *aubelist; // x0
  BattlePerformance_o *perf; // x0
  struct System_Collections_Generic_List_GameObject__o *v32; // x0
  __int64 v33; // x0
  __int64 v34; // x1
  __int64 v35; // x2
  unsigned int v36; // w25
  struct BattleCommandComponent_array *commandCompArray; // x8
  Il2CppClass **v38; // x8
  BattleCommandComponent_o *v39; // x21
  int32_t CriticalCount; // w22
  __int64 v41; // x3
  __int64 v42; // x4
  int v43; // w26
  struct UnityEngine_Transform_array *commandTransformArray; // x8
  UnityEngine_Transform_o *v45; // x23
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v46; // x24
  const MethodInfo *v47; // x3
  System_Action_o *v49; // x21
  const MethodInfo *v50; // x2
  System_Collections_IEnumerator_o *v51; // x0
  Il2CppObject *object; // [xsp+0h] [xbp-90h]
  System_Collections_Generic_List_Enumerator_T__o v53; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v54; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_40FC2A9 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_GameObject___ctor__, callback);
    sub_B16FFC(&System_Action_GameObject__TypeInfo, v7);
    sub_B16FFC(&System_Action_TypeInfo, v8);
    sub_B16FFC(&Method_BattleCommandComponent_addCriticalBuff__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__Clear__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v14);
    sub_B16FFC(&Method_BattlePerformanceCommandCard___c__DisplayClass175_0__PlayBackStar_b__0__, v15);
    sub_B16FFC(&BattlePerformanceCommandCard___c__DisplayClass175_0_TypeInfo, v16);
    byte_40FC2A9 = 1;
  }
  memset(&v54, 0, sizeof(v54));
  v17 = sub_B170CC(BattlePerformanceCommandCard___c__DisplayClass175_0_TypeInfo, callback, method, v3, v4);
  BattlePerformanceCommandCard___c__DisplayClass175_0___ctor(
    (BattlePerformanceCommandCard___c__DisplayClass175_0_o *)v17,
    0LL);
  if ( !v17 )
    goto LABEL_22;
  *(_QWORD *)(v17 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v17 + 16), (System_Int32_array **)this, v18, v19, v20, v21, v22, v23);
  *(_QWORD *)(v17 + 24) = callback;
  sub_B16F98((BattleServantConfConponent_o *)(v17 + 24), (System_Int32_array **)callback, v24, v25, v26, v27, v28, v29);
  aubelist = this->fields.aubelist;
  if ( !aubelist )
    goto LABEL_22;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v53,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)aubelist,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v54 = v53;
  object = (Il2CppObject *)v17;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v54,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    perf = this->fields.perf;
    if ( !perf )
      sub_B170D4();
    BattlePerformance__destroyInstantiate(perf, (UnityEngine_GameObject_o *)v54.fields.current, 0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v54,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  v32 = this->fields.aubelist;
  if ( !v32 )
    goto LABEL_22;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)v32,
    (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_GameObject__Clear__);
  v36 = 0;
  do
  {
    commandCompArray = this->fields.commandCompArray;
    if ( !commandCompArray )
      goto LABEL_22;
    if ( v36 >= commandCompArray->max_length )
    {
LABEL_23:
      sub_B17100(v33, v34, v35);
      sub_B170A0();
    }
    v38 = &commandCompArray->obj.klass + (int)v36;
    v39 = (BattleCommandComponent_o *)v38[4];
    if ( !v39 )
      goto LABEL_22;
    CriticalCount = BattleCommandComponent__getCriticalCount((BattleCommandComponent_o *)v38[4], 0LL);
    BattleCommandComponent__setCriticalObject(v39, 0, 0LL);
    if ( CriticalCount >= 1 )
    {
      v43 = 0;
      while ( 1 )
      {
        commandTransformArray = this->fields.commandTransformArray;
        if ( !commandTransformArray )
          break;
        if ( v36 >= commandTransformArray->max_length )
          goto LABEL_23;
        v45 = commandTransformArray->m_Items[v36];
        v46 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B170CC(
                                                                                     System_Action_GameObject__TypeInfo,
                                                                                     v34,
                                                                                     v35,
                                                                                     v41,
                                                                                     v42);
        System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
          v46,
          (Il2CppObject *)v39,
          Method_BattleCommandComponent_addCriticalBuff__,
          (const MethodInfo_24B7310 *)Method_System_Action_GameObject___ctor__);
        BattlePerformanceCommandCard__MoveNotTween2back(this, v45, (System_Action_GameObject__o *)v46, v47);
        if ( ++v43 >= CriticalCount )
          goto LABEL_19;
      }
LABEL_22:
      sub_B170D4();
    }
LABEL_19:
    ;
  }
  while ( v36++ < 4 );
  this->fields._IsPlayingBackStar_k__BackingField = 1;
  v49 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v34, v35, v41, v42);
  System_Action___ctor(
    v49,
    object,
    Method_BattlePerformanceCommandCard___c__DisplayClass175_0__PlayBackStar_b__0__,
    0LL);
  v51 = BattlePerformanceCommandCard__waitFunc(this, 0.5, v49, v50);
  UnityEngine_MonoBehaviour__StartCoroutine_34804316((UnityEngine_MonoBehaviour_o *)this, v51, 0LL);
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
  BattlePerformance_o *perf; // x0
  struct System_Collections_Generic_List_GameObject__o *v12; // x0
  __int64 IsMaxViewCritical; // x0
  const MethodInfo *v14; // x1
  __int64 v15; // x2
  unsigned int v16; // w24
  struct BattleCommandComponent_array *commandCompArray; // x8
  Il2CppClass **v18; // x8
  BattleCommandComponent_o *v19; // x20
  __int64 v20; // x3
  __int64 v21; // x4
  int v22; // w21
  int v23; // w25
  struct UnityEngine_Transform_array *commandTransformArray; // x8
  UnityEngine_Transform_o *v25; // x22
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v26; // x23
  const MethodInfo *v27; // x3
  System_Collections_Generic_List_Enumerator_T__o v29; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o i; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_40FC2A7 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_GameObject___ctor__, method);
    sub_B16FFC(&System_Action_GameObject__TypeInfo, v3);
    sub_B16FFC(&Method_BattleCommandComponent_addCriticalBuff__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__Clear__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v9);
    byte_40FC2A7 = 1;
  }
  memset(&i, 0, sizeof(i));
  aubelist = this->fields.aubelist;
  if ( !aubelist )
    goto LABEL_24;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v29,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)aubelist,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  for ( i = v29;
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
          &i,
          (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
        BattlePerformance__destroyInstantiate(perf, (UnityEngine_GameObject_o *)i.fields.current, 0LL) )
  {
    perf = this->fields.perf;
    if ( !perf )
      sub_B170D4();
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &i,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  v12 = this->fields.aubelist;
  if ( !v12 )
    goto LABEL_24;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)v12,
    (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_GameObject__Clear__);
  v16 = 0;
  do
  {
    commandCompArray = this->fields.commandCompArray;
    if ( !commandCompArray )
      goto LABEL_24;
    if ( v16 >= commandCompArray->max_length )
    {
LABEL_25:
      sub_B17100(IsMaxViewCritical, v14, v15);
      sub_B170A0();
    }
    v18 = &commandCompArray->obj.klass + (int)v16;
    v19 = (BattleCommandComponent_o *)v18[4];
    if ( !v19 )
      goto LABEL_24;
    IsMaxViewCritical = BattleCommandComponent__IsMaxViewCritical((BattleCommandComponent_o *)v18[4], 0LL);
    if ( (IsMaxViewCritical & 1) == 0 )
    {
      IsMaxViewCritical = BattleCommandComponent__GetPassStarCount(v19, 0LL);
      if ( (int)IsMaxViewCritical >= 1 )
      {
        v22 = IsMaxViewCritical;
        v23 = 0;
        while ( 1 )
        {
          commandTransformArray = this->fields.commandTransformArray;
          if ( !commandTransformArray )
            break;
          if ( v16 >= commandTransformArray->max_length )
            goto LABEL_25;
          v25 = commandTransformArray->m_Items[v16];
          v26 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B170CC(
                                                                                       System_Action_GameObject__TypeInfo,
                                                                                       v14,
                                                                                       v15,
                                                                                       v20,
                                                                                       v21);
          System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
            v26,
            (Il2CppObject *)v19,
            Method_BattleCommandComponent_addCriticalBuff__,
            (const MethodInfo_24B7310 *)Method_System_Action_GameObject___ctor__);
          BattlePerformanceCommandCard__MoveNotTween(this, v25, (System_Action_GameObject__o *)v26, v27);
          if ( ++v23 >= v22 )
            goto LABEL_19;
        }
LABEL_24:
        sub_B170D4();
      }
LABEL_19:
      BattleCommandComponent__ResetPassStarCount(v19, 0LL);
      if ( v19->fields.selectflg )
        BattleCommandComponent__updateSelectedEffect(v19, 0LL);
    }
  }
  while ( v16++ < 4 );
  BattlePerformanceCommandCard__updateBuffIcon(this, v14);
}


void __fastcall BattlePerformanceCommandCard__PlayFlash(
        BattlePerformanceCommandCard_o *this,
        BattleComboData_o *combo,
        const MethodInfo *method)
{
  struct BattleCommandComponent_array *selectedcomponents; // x8
  BattleCommandComponent_o *v5; // x0
  struct BattleCommandComponent_array *v7; // x8
  BattleCommandComponent_o *v8; // x0
  struct BattleCommandComponent_array *v9; // x8
  BattleCommandComponent_o *v10; // x0

  selectedcomponents = this->fields.selectedcomponents;
  if ( !selectedcomponents )
    goto LABEL_11;
  if ( !selectedcomponents->max_length )
    goto LABEL_12;
  v5 = selectedcomponents->m_Items[0];
  if ( !v5 )
    goto LABEL_11;
  BattleCommandComponent__flashComboType(v5, 0, combo, 0LL);
  v7 = this->fields.selectedcomponents;
  if ( !v7 )
    goto LABEL_11;
  if ( v7->max_length <= 1 )
    goto LABEL_12;
  v8 = v7->m_Items[1];
  if ( !v8 || (BattleCommandComponent__flashComboType(v8, 1, combo, 0LL), (v9 = this->fields.selectedcomponents) == 0LL) )
LABEL_11:
    sub_B170D4();
  if ( v9->max_length <= 2 )
  {
LABEL_12:
    sub_B17100(this, combo, method);
    sub_B170A0();
  }
  v10 = v9->m_Items[2];
  if ( !v10 )
    goto LABEL_11;
  BattleCommandComponent__flashComboType(v10, 2, combo, 0LL);
}


void __fastcall BattlePerformanceCommandCard__PlayFlashComboSvt(
        BattlePerformanceCommandCard_o *this,
        BattleComboData_o *combo,
        const MethodInfo *method)
{
  struct BattleCommandComponent_array *selectedcomponents; // x8
  BattleCommandComponent_o *v5; // x0
  struct BattleCommandComponent_array *v7; // x8
  BattleCommandComponent_o *v8; // x0
  struct BattleCommandComponent_array *v9; // x8
  BattleCommandComponent_o *v10; // x0

  selectedcomponents = this->fields.selectedcomponents;
  if ( !selectedcomponents )
    goto LABEL_11;
  if ( !selectedcomponents->max_length )
    goto LABEL_12;
  v5 = selectedcomponents->m_Items[0];
  if ( !v5 )
    goto LABEL_11;
  BattleCommandComponent__flashComboSvt(v5, 0, combo, 0LL);
  v7 = this->fields.selectedcomponents;
  if ( !v7 )
    goto LABEL_11;
  if ( v7->max_length <= 1 )
    goto LABEL_12;
  v8 = v7->m_Items[1];
  if ( !v8 || (BattleCommandComponent__flashComboSvt(v8, 1, combo, 0LL), (v9 = this->fields.selectedcomponents) == 0LL) )
LABEL_11:
    sub_B170D4();
  if ( v9->max_length <= 2 )
  {
LABEL_12:
    sub_B17100(this, combo, method);
    sub_B170A0();
  }
  v10 = v9->m_Items[2];
  if ( !v10 )
    goto LABEL_11;
  BattleCommandComponent__flashComboSvt(v10, 2, combo, 0LL);
}


void __fastcall BattlePerformanceCommandCard__PlayFlashExtra(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  BattlePerformanceCommandCard_o *v3; // x19
  struct BattleCommandComponent_array *selectedcomponents; // x8
  BattleCommandComponent_o *v5; // x0

  v3 = this;
  if ( (byte_40FC29C & 1) == 0 )
  {
    this = (BattlePerformanceCommandCard_o *)sub_B16FFC(&StringLiteral_18115, method);
    byte_40FC29C = 1;
  }
  selectedcomponents = v3->fields.selectedcomponents;
  if ( !selectedcomponents )
    goto LABEL_7;
  if ( selectedcomponents->max_length <= 3 )
  {
    sub_B17100(this, method, v2);
    sub_B170A0();
  }
  v5 = selectedcomponents->m_Items[3];
  if ( !v5 )
LABEL_7:
    sub_B170D4();
  BattleCommandComponent__attachEffect(v5, (System_String_o *)StringLiteral_18115, 5, 0LL);
}


void __fastcall BattlePerformanceCommandCard__ResetCardCriticalLabel(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  struct BattleCommandComponent_array *commandCompArray; // x8
  __int64 v5; // x20
  int max_length; // w9
  BattleCommandComponent_o *v7; // x0

  commandCompArray = this->fields.commandCompArray;
  if ( !commandCompArray )
LABEL_7:
    sub_B170D4();
  v5 = 0LL;
  while ( 1 )
  {
    max_length = commandCompArray->max_length;
    if ( (int)v5 >= max_length )
      break;
    if ( (unsigned int)v5 >= max_length )
    {
      sub_B17100(this, method, v2);
      sub_B170A0();
    }
    v7 = commandCompArray->m_Items[v5];
    if ( v7 )
    {
      BattleCommandComponent__resetCriticalLabel(v7, 0LL);
      commandCompArray = this->fields.commandCompArray;
      ++v5;
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
  __int64 v2; // x2
  __int64 v4; // x20
  struct BattleCommandComponent_array *commandCompArray; // x8
  BattleCommandComponent_o *v6; // x0

  v4 = 0LL;
  do
  {
    commandCompArray = this->fields.commandCompArray;
    if ( !commandCompArray )
      goto LABEL_7;
    if ( (unsigned int)v4 >= commandCompArray->max_length )
    {
      sub_B17100(this, method, v2);
      sub_B170A0();
    }
    v6 = commandCompArray->m_Items[v4];
    if ( !v6 )
LABEL_7:
      sub_B170D4();
    BattleCommandComponent__ResetPassStarCount(v6, 0LL);
    ++v4;
  }
  while ( (unsigned int)(v4 - 1) < 4 );
}


void __fastcall BattlePerformanceCommandCard__ResetNoblePhantasmCard(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  BattlePerformanceCommandCard_o *v3; // x19
  __int64 v4; // x21
  struct BattleCommandComponent_array *commandCompArray; // x8
  unsigned __int64 v6; // x23
  UnityEngine_Object_o *v7; // x20

  v3 = this;
  if ( (byte_40FC2CB & 1) == 0 )
  {
    this = (BattlePerformanceCommandCard_o *)sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FC2CB = 1;
  }
  v4 = 9LL;
  do
  {
    commandCompArray = v3->fields.commandCompArray;
    if ( !commandCompArray )
LABEL_14:
      sub_B170D4();
    v6 = v4 - 4;
    if ( v4 - 4 >= (unsigned __int64)commandCompArray->max_length )
    {
      sub_B17100(this, method, v2);
      sub_B170A0();
    }
    v7 = (UnityEngine_Object_o *)*((_QWORD *)&commandCompArray->obj.klass + v4);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    this = (BattlePerformanceCommandCard_o *)UnityEngine_Object__op_Inequality(v7, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !v7 )
        goto LABEL_14;
      BattleCommandComponent__setData((BattleCommandComponent_o *)v7, 0LL, 0LL, 0, 1, 0, 0LL);
    }
    ++v4;
  }
  while ( v6 < 7 );
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceCommandCard__SetBackTacticalButton(
        BattlePerformanceCommandCard_o *this,
        bool active,
        const MethodInfo *method)
{
  UnityEngine_Component_o *backTacticalButton; // x0
  UnityEngine_GameObject_o *gameObject; // x20

  if ( (byte_40FC276 & 1) == 0 )
  {
    sub_B16FFC(&AndroidBackKeyManager_TypeInfo, active);
    byte_40FC276 = 1;
  }
  backTacticalButton = (UnityEngine_Component_o *)this->fields.backTacticalButton;
  if ( !backTacticalButton )
    sub_B170D4();
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
  sub_B16F98(
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
  __int64 v2; // x2
  struct BattleCommandComponent_array *commandCompArray; // x8
  __int64 v5; // x20
  int max_length; // w9
  BattleCommandComponent_o *v7; // x0

  commandCompArray = this->fields.commandCompArray;
  if ( !commandCompArray )
LABEL_7:
    sub_B170D4();
  v5 = 0LL;
  while ( 1 )
  {
    max_length = commandCompArray->max_length;
    if ( (int)v5 >= max_length )
      break;
    if ( (unsigned int)v5 >= max_length )
    {
      sub_B17100(this, method, v2);
      sub_B170A0();
    }
    v7 = commandCompArray->m_Items[v5];
    if ( v7 )
    {
      BattleCommandComponent__UpdateCommandCardEffect(v7, 0LL);
      commandCompArray = this->fields.commandCompArray;
      ++v5;
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
  __int64 v10; // x0
  float v11; // s0
  struct BattleCommandComponent_array *v12; // x8
  BattleCommandComponent_o *v13; // x0
  bool v14; // w1

  commandCompArray = this->fields.commandCompArray;
  if ( !commandCompArray )
LABEL_14:
    sub_B170D4();
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
      v10 = *(_QWORD *)(v9 + 336);
      if ( v10 )
      {
        this = (BattlePerformanceCommandCard_o *)(*(__int64 (__fastcall **)(__int64, _QWORD, const MethodInfo *))(*(_QWORD *)v10 + 424LL))(
                                                   v10,
                                                   *(_QWORD *)(*(_QWORD *)v10 + 432LL),
                                                   method);
        v12 = v4->fields.commandCompArray;
        if ( v12 )
        {
          if ( v8 >= v12->max_length )
          {
LABEL_16:
            sub_B17100(this, value, method);
            sub_B170A0();
          }
          v13 = (BattleCommandComponent_o *)*((_QWORD *)&v12->obj.klass + v5);
          if ( v13 )
          {
            v14 = v11 > 0.0 && v6;
            BattleCommandComponent__CardEffectSetActive(v13, v14, 0LL);
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
  __int64 v2; // x2
  struct BattleCommandComponent_array *commandCompArray; // x8
  BattlePerformanceCommandCard_o *v4; // x19
  __int64 v5; // x22
  int max_length; // w9
  unsigned int v7; // w23
  __int64 v8; // x8
  BattleCommandData_o *v9; // x20
  int32_t p_commandlist_high; // w3
  BattlePerformanceCommandCard_o *v11; // x21
  int v12; // w8
  int v13; // w8
  struct BattleCommandComponent_array *v14; // x8
  BattleCommandComponent_o *v15; // x8

  commandCompArray = this->fields.commandCompArray;
  if ( !commandCompArray )
LABEL_19:
    sub_B170D4();
  v4 = this;
  v5 = 4LL;
  while ( 1 )
  {
    max_length = commandCompArray->max_length;
    v7 = v5 - 4;
    if ( (int)v5 - 4 >= max_length )
      break;
    if ( v7 >= max_length )
      goto LABEL_21;
    v8 = *((_QWORD *)&commandCompArray->obj.klass + v5);
    if ( v8 )
    {
      v9 = *(BattleCommandData_o **)(v8 + 352);
      if ( v9 && !BattleCommandData__isTreasureDvc(*(BattleCommandData_o **)(v8 + 352), 0LL) )
      {
        this = (BattlePerformanceCommandCard_o *)BattleCommandData__GetCommandCardTypeChangeBuff(v9, 0LL);
        if ( this )
        {
          v11 = this;
          this = (BattlePerformanceCommandCard_o *)BattleCommandData__IsCommandCardTypeChanged(v9, 0LL);
          v12 = *((_DWORD *)&v11->fields.BaseMonoBehaviour_Fields + 1);
          p_commandlist_high = HIDWORD(v11->fields.p_commandlist);
          v13 = v12 + 1 >= 0 ? v12 + 1 : v12 + 2;
          v2 = (unsigned int)(v13 >> 1);
        }
        else
        {
          p_commandlist_high = 0;
          v2 = 0LL;
        }
      }
      else
      {
        p_commandlist_high = 0;
        v2 = 0LL;
        this = 0LL;
      }
      v14 = v4->fields.commandCompArray;
      if ( v14 )
      {
        if ( v7 >= v14->max_length )
        {
LABEL_21:
          sub_B17100(this, method, v2);
          sub_B170A0();
        }
        v15 = (BattleCommandComponent_o *)*((_QWORD *)&v14->obj.klass + v5);
        if ( v15 )
        {
          BattleCommandComponent__SetCommandCardTypeChange(v15, (unsigned __int8)this & 1, v2, p_commandlist_high, 0LL);
          commandCompArray = v4->fields.commandCompArray;
          ++v5;
          if ( commandCompArray )
            continue;
        }
      }
    }
    goto LABEL_19;
  }
}


void __fastcall BattlePerformanceCommandCard__SetCommandPhaseButtonActive(
        BattlePerformanceCommandCard_o *this,
        bool active,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *highSpeedButton; // x0
  UnityEngine_Component_o *backTacticalButton; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  bool v8; // w20
  const MethodInfo *v9; // x2

  highSpeedButton = this->fields.highSpeedButton;
  if ( !highSpeedButton
    || (UnityEngine_GameObject__SetActive(highSpeedButton, active, 0LL),
        (backTacticalButton = (UnityEngine_Component_o *)this->fields.backTacticalButton) == 0LL)
    || (gameObject = UnityEngine_Component__get_gameObject(backTacticalButton, 0LL)) == 0LL )
  {
    sub_B170D4();
  }
  v8 = active;
  UnityEngine_GameObject__SetActive(gameObject, v8, 0LL);
  BattlePerformanceCommandCard__SetBackTacticalButton(this, v8, v9);
}


void __fastcall BattlePerformanceCommandCard__SetDownloadEventSprite(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  BattlePerformanceCommandCard_o *v3; // x19
  struct BattleCommandComponent_array *commandCompArray; // x8
  unsigned __int64 v5; // x21
  unsigned __int64 max_length; // x9
  UnityEngine_Object_o *v7; // x20

  v3 = this;
  if ( (byte_40FC2C9 & 1) == 0 )
  {
    this = (BattlePerformanceCommandCard_o *)sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FC2C9 = 1;
  }
  commandCompArray = v3->fields.commandCompArray;
  if ( !commandCompArray )
LABEL_14:
    sub_B170D4();
  v5 = 0LL;
  while ( 1 )
  {
    max_length = commandCompArray->max_length;
    if ( (__int64)v5 >= (int)max_length )
      break;
    if ( v5 >= max_length )
    {
      sub_B17100(this, method, v2);
      sub_B170A0();
    }
    v7 = (UnityEngine_Object_o *)commandCompArray->m_Items[v5];
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    this = (BattlePerformanceCommandCard_o *)UnityEngine_Object__op_Inequality(v7, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !v7 )
        goto LABEL_14;
      BattleCommandComponent__SetDownloadEventSprite((BattleCommandComponent_o *)v7, 0LL);
    }
    commandCompArray = v3->fields.commandCompArray;
    ++v5;
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

  v4 = this;
  if ( (byte_40FC2C7 & 1) == 0 )
  {
    this = (BattlePerformanceCommandCard_o *)sub_B16FFC(&UnityEngine_Object_TypeInfo, active);
    byte_40FC2C7 = 1;
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
        sub_B17100(this, active, method);
        sub_B170A0();
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
        sub_B170D4();
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
  float v16; // s0
  float v17; // s1
  float v18; // s2
  float v19; // s3
  float v20; // s4
  float v21; // s5
  float v22; // s6
  float v23; // s7
  UnityEngine_GameObject_o *v24; // x0
  UnityEngine_Component_o *commandrootTransform; // x1
  UnityEngine_GameObject_o *v26; // x21
  UnityEngine_Transform_o *transform; // x22
  int v28; // s0
  BattleSelectCommandComponent_o *Component_srcLineSprite; // x0
  UnityEngine_Transform_o *v32; // x0
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v34; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v35; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o v36; // 0:s3.4,4:s4.4,8:s5.4,12:s6.4

  z = pos.fields.z;
  y = pos.fields.y;
  x = pos.fields.x;
  if ( (byte_40FC289 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_BattleSelectCommandComponent___, *(_QWORD *)&targetindex);
    byte_40FC289 = 1;
  }
  spawner = this->fields.spawner;
  selectCommandPrefab = (UnityEngine_Object_o *)this->fields.selectCommandPrefab;
  zero = UnityEngine_Vector3__get_zero(0LL);
  v13 = zero.fields.x;
  v14 = zero.fields.y;
  v15 = zero.fields.z;
  *(UnityEngine_Quaternion_o *)&v16 = UnityEngine_Quaternion__get_identity(0LL);
  if ( !spawner )
    goto LABEL_10;
  v20 = v16;
  v21 = v17;
  v22 = v18;
  v23 = v19;
  v34.fields.x = v13;
  v34.fields.y = v14;
  v34.fields.z = v15;
  v36.fields.x = v20;
  v36.fields.y = v21;
  v36.fields.z = v22;
  v36.fields.w = v23;
  v24 = Spawner__Spawn_24902380(spawner, selectCommandPrefab, v34, v36, 0LL);
  commandrootTransform = (UnityEngine_Component_o *)this->fields.commandrootTransform;
  v26 = v24;
  GameObjectExtensions__SetParent(v24, commandrootTransform, 0LL);
  if ( !v26
    || (transform = UnityEngine_GameObject__get_transform(v26, 0LL),
        *(UnityEngine_Vector3_o *)&v28 = UnityEngine_Vector3__get_one(0LL),
        !transform)
    || (UnityEngine_Transform__set_localScale(transform, *(UnityEngine_Vector3_o *)&v28, 0LL),
        (Component_srcLineSprite = (BattleSelectCommandComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                       v26,
                                                                       (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_BattleSelectCommandComponent___)) == 0LL)
    || (BattleSelectCommandComponent__setIndex(Component_srcLineSprite, targetindex, 0LL), !bc)
    || (BattleCommandComponent__setSelectStamp(bc, v26, 0LL),
        (v32 = UnityEngine_GameObject__get_transform(v26, 0LL)) == 0LL) )
  {
LABEL_10:
    sub_B170D4();
  }
  v35.fields.x = x;
  v35.fields.y = y;
  v35.fields.z = z;
  UnityEngine_Transform__set_position(v32, v35, 0LL);
  UnityEngine_GameObject__SetActive(v26, 0, 0LL);
  UnityEngine_GameObject__SetActive(v26, 1, 0LL);
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
  sub_B16F98(
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
  AssetData_o *v13; // x20
  struct UnityEngine_GameObject_o *Object_WarBoardWaitTimeSetting; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  struct UnityEngine_GameObject_o *v21; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  struct UnityEngine_GameObject_o *v28; // x0
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  struct UnityEngine_GameObject_o *v35; // x0
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  struct UnityEngine_GameObject_o *v42; // x0
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  Spawner_o *spawner; // x0
  Spawner_o *v50; // x0
  Spawner_o *v51; // x0

  if ( (byte_40FC2CA & 1) == 0 )
  {
    sub_B16FFC(&Method_AssetData_GetObject_GameObject____66802784, method);
    sub_B16FFC(&AssetManager_TypeInfo, v3);
    sub_B16FFC(&BattleDataDefine_TypeInfo, v4);
    sub_B16FFC(&StringLiteral_16661, v5);
    sub_B16FFC(&StringLiteral_16660, v6);
    sub_B16FFC(&StringLiteral_16681, v7);
    sub_B16FFC(&StringLiteral_16682, v8);
    sub_B16FFC(&StringLiteral_16659, v9);
    byte_40FC2CA = 1;
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
  v13 = AssetStorage;
  Object_WarBoardWaitTimeSetting = (struct UnityEngine_GameObject_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                        AssetStorage,
                                                                        (System_String_o *)StringLiteral_16681,
                                                                        (const MethodInfo_18AFC60 *)Method_AssetData_GetObject_GameObject____66802784);
  this->fields.cutin_grand_m = Object_WarBoardWaitTimeSetting;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.cutin_grand_m,
    (System_Int32_array **)Object_WarBoardWaitTimeSetting,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  v21 = (struct UnityEngine_GameObject_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                             v13,
                                             (System_String_o *)StringLiteral_16682,
                                             (const MethodInfo_18AFC60 *)Method_AssetData_GetObject_GameObject____66802784);
  this->fields.cutin_trinity_m = v21;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.cutin_trinity_m,
    (System_Int32_array **)v21,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  v28 = (struct UnityEngine_GameObject_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                             v13,
                                             (System_String_o *)StringLiteral_16661,
                                             (const MethodInfo_18AFC60 *)Method_AssetData_GetObject_GameObject____66802784);
  this->fields.firstbonus_q = v28;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.firstbonus_q,
    (System_Int32_array **)v28,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  v35 = (struct UnityEngine_GameObject_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                             v13,
                                             (System_String_o *)StringLiteral_16659,
                                             (const MethodInfo_18AFC60 *)Method_AssetData_GetObject_GameObject____66802784);
  this->fields.firstbonus_a = v35;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.firstbonus_a,
    (System_Int32_array **)v35,
    v36,
    v37,
    v38,
    v39,
    v40,
    v41);
  v42 = (struct UnityEngine_GameObject_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                             v13,
                                             (System_String_o *)StringLiteral_16660,
                                             (const MethodInfo_18AFC60 *)Method_AssetData_GetObject_GameObject____66802784);
  this->fields.firstbonus_b = v42;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.firstbonus_b,
    (System_Int32_array **)v42,
    v43,
    v44,
    v45,
    v46,
    v47,
    v48);
  spawner = this->fields.spawner;
  if ( !spawner
    || (Spawner__Precache_24901732(spawner, (UnityEngine_Object_o *)this->fields.firstbonus_q, 1, 0LL),
        (v50 = this->fields.spawner) == 0LL)
    || (Spawner__Precache_24901732(v50, (UnityEngine_Object_o *)this->fields.firstbonus_a, 1, 0LL),
        (v51 = this->fields.spawner) == 0LL) )
  {
LABEL_14:
    sub_B170D4();
  }
  Spawner__Precache_24901732(v51, (UnityEngine_Object_o *)this->fields.firstbonus_b, 1, 0LL);
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

  commandCompArray = this->fields.commandCompArray;
  if ( !commandCompArray )
LABEL_12:
    sub_B170D4();
  v4 = this;
  v6 = 0LL;
  while ( 1 )
  {
    max_length = commandCompArray->max_length;
    if ( (int)v6 >= max_length )
      break;
    if ( (unsigned int)v6 >= max_length )
    {
      sub_B17100(this, isZeroStart, method);
      sub_B170A0();
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
  UnityEngine_Touch_array *touches; // x0
  const MethodInfo *v8; // x1
  __int64 v9; // x2
  __int64 v10; // x8
  UnityEngine_Touch_array *v11; // x20
  unsigned __int64 v12; // x23
  struct UnityEngine_Vector2_o *p_m_Position; // x21
  UnityEngine_Animation_o *firstBonusAnimation; // x0
  UnityEngine_Animation_o *v15; // x0
  __int64 v16; // x8
  UnityEngine_Touch_array *v17; // x20
  unsigned __int64 v18; // x22
  struct UnityEngine_Vector2_o *v19; // x21
  UnityEngine_Touch_o v20; // [xsp+0h] [xbp-C0h] BYREF
  UnityEngine_Touch_o v21; // [xsp+48h] [xbp-78h] BYREF

  memset(&v21, 0, sizeof(v21));
  memset(&v20, 0, sizeof(v20));
  firstBonusAnimationWaitTime = this->fields.firstBonusAnimationWaitTime;
  v4 = firstBonusAnimationWaitTime - 1;
  if ( firstBonusAnimationWaitTime >= 1 )
  {
    this->fields.firstBonusAnimationWaitTime = v4;
    v5 = UnityEngine_Mathf__Max_40727628(v4, 0, 0LL);
    v6 = 0;
    this->fields.firstBonusAnimationWaitTime = v5;
    if ( !v5 )
      v6 = this->fields.drawcount == 1 && this->fields.isTouchCanceled;
    touches = UnityEngine_Input__get_touches(0LL);
    if ( !touches )
      goto LABEL_29;
    v10 = *(_QWORD *)&touches->max_length;
    v11 = touches;
    if ( (int)v10 >= 1 )
    {
      v12 = 0LL;
      p_m_Position = &touches->m_Items[0].fields.m_Position;
      while ( v12 < (unsigned int)v10 )
      {
        memmove(&v21, p_m_Position, 0x44u);
        touches = (UnityEngine_Touch_array *)UnityEngine_Touch__get_phase(&v21, 0LL);
        if ( !(_DWORD)touches && this->fields.isTouchCanceled )
          v6 |= this->fields.drawcount == 1;
        LODWORD(v10) = v11->max_length;
        ++v12;
        p_m_Position = (struct UnityEngine_Vector2_o *)((char *)p_m_Position + 68);
        if ( (__int64)v12 >= (int)v10 )
          goto LABEL_14;
      }
LABEL_28:
      sub_B17100(touches, v8, v9);
      sub_B170A0();
    }
LABEL_14:
    if ( (v6 & 1) != 0 )
    {
      firstBonusAnimation = this->fields.firstBonusAnimation;
      if ( firstBonusAnimation )
      {
        UnityEngine_Animation__Stop(firstBonusAnimation, 0LL);
        v15 = this->fields.firstBonusAnimation;
        if ( v15 )
        {
          UnityEngine_Animation__Play(v15, 0LL);
          this->fields.isTouchCanceled = 0;
          goto LABEL_18;
        }
      }
LABEL_29:
      sub_B170D4();
    }
  }
LABEL_18:
  touches = UnityEngine_Input__get_touches(0LL);
  if ( !touches )
    goto LABEL_29;
  v16 = *(_QWORD *)&touches->max_length;
  v17 = touches;
  if ( (int)v16 >= 1 )
  {
    v18 = 0LL;
    v19 = &touches->m_Items[0].fields.m_Position;
    while ( v18 < (unsigned int)v16 )
    {
      memmove(&v20, v19, 0x44u);
      if ( !UnityEngine_Touch__get_phase(&v20, 0LL) )
      {
        *(_WORD *)&this->fields.isTouchBegan = 1;
        this->fields.isTouchCanceled = 0;
      }
      touches = (UnityEngine_Touch_array *)UnityEngine_Touch__get_phase(&v20, 0LL);
      if ( (_DWORD)touches == 3 )
        *(_WORD *)&this->fields.isTouchBegan = 256;
      LODWORD(v16) = v17->max_length;
      ++v18;
      v19 = (struct UnityEngine_Vector2_o *)((char *)v19 + 68);
      if ( (__int64)v18 >= (int)v16 )
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
  __int64 v14; // x19
  __int64 v15; // x8
  unsigned __int64 v16; // x10
  int *v17; // x11
  __int64 v18; // x0
  __int64 v19; // x8
  unsigned __int64 v20; // x10
  int *v21; // x11
  __int64 v22; // x0
  BattleCommandComponent_o *v23; // x21
  __int64 v24; // x8
  unsigned __int64 v25; // x10
  int *v26; // x11
  __int64 v27; // x0

  if ( (byte_40FC2A3 & 1) == 0 )
  {
    sub_B16FFC(&System_IDisposable_TypeInfo, svtData);
    sub_B16FFC(&System_Collections_Generic_IEnumerable_BattleCommandComponent__TypeInfo, v6);
    sub_B16FFC(&System_Collections_Generic_IEnumerator_BattleCommandComponent__TypeInfo, v7);
    sub_B16FFC(&System_Collections_IEnumerator_TypeInfo, v8);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v9);
    byte_40FC2A3 = 1;
  }
  if ( !commandCompEnumerable )
    sub_B170D4();
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
    p_method = sub_AAFEF8(
                 commandCompEnumerable,
                 System_Collections_Generic_IEnumerable_BattleCommandComponent__TypeInfo,
                 0LL);
  }
  v14 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_BattleCommandComponent__o *, _QWORD))p_method)(
          commandCompEnumerable,
          *(_QWORD *)(p_method + 8));
  if ( !v14 )
    sub_B170D4();
  while ( 1 )
  {
    v15 = *(_QWORD *)v14;
    if ( *(_WORD *)(*(_QWORD *)v14 + 298LL) )
    {
      v16 = 0LL;
      v17 = (int *)(*(_QWORD *)(v15 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v17 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v16;
        v17 += 4;
        if ( v16 >= *(unsigned __int16 *)(*(_QWORD *)v14 + 298LL) )
          goto LABEL_15;
      }
      v18 = v15 + 16LL * *v17 + 312;
    }
    else
    {
LABEL_15:
      v18 = sub_AAFEF8(v14, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v18)(v14, *(_QWORD *)(v18 + 8)) & 1) == 0 )
      break;
    v19 = *(_QWORD *)v14;
    if ( *(_WORD *)(*(_QWORD *)v14 + 298LL) )
    {
      v20 = 0LL;
      v21 = (int *)(*(_QWORD *)(v19 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_BattleCommandComponent__c **)v21 - 1) != System_Collections_Generic_IEnumerator_BattleCommandComponent__TypeInfo )
      {
        ++v20;
        v21 += 4;
        if ( v20 >= *(unsigned __int16 *)(*(_QWORD *)v14 + 298LL) )
          goto LABEL_22;
      }
      v22 = v19 + 16LL * *v21 + 312;
    }
    else
    {
LABEL_22:
      v22 = sub_AAFEF8(v14, System_Collections_Generic_IEnumerator_BattleCommandComponent__TypeInfo, 0LL);
    }
    v23 = (BattleCommandComponent_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v22)(v14, *(_QWORD *)(v22 + 8));
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v23, 0LL, 0LL) )
    {
      if ( !v23 )
        sub_B170D4();
      BattleCommandComponent__transformSvtFace(v23, svtData, 0LL);
    }
  }
  v24 = *(_QWORD *)v14;
  if ( *(_WORD *)(*(_QWORD *)v14 + 298LL) )
  {
    v25 = 0LL;
    v26 = (int *)(*(_QWORD *)(v24 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v26 - 1) != System_IDisposable_TypeInfo )
    {
      ++v25;
      v26 += 4;
      if ( v25 >= *(unsigned __int16 *)(*(_QWORD *)v14 + 298LL) )
        goto LABEL_34;
    }
    v27 = v24 + 16LL * *v26 + 312;
  }
  else
  {
LABEL_34:
    v27 = sub_AAFEF8(v14, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v27)(v14, *(_QWORD *)(v27 + 8));
}


void __fastcall BattlePerformanceCommandCard__UpdateCommandCriticalCount(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  struct BattleCommandComponent_array *commandCompArray; // x8
  BattlePerformanceCommandCard_o *v4; // x19
  __int64 v5; // x20
  int max_length; // w9

  commandCompArray = this->fields.commandCompArray;
  if ( !commandCompArray )
LABEL_9:
    sub_B170D4();
  v4 = this;
  v5 = 0LL;
  while ( 1 )
  {
    max_length = commandCompArray->max_length;
    if ( (int)v5 >= max_length )
      break;
    if ( (unsigned int)v5 >= max_length )
    {
      sub_B17100(this, method, v2);
      sub_B170A0();
    }
    this = (BattlePerformanceCommandCard_o *)commandCompArray->m_Items[v5];
    if ( this )
    {
      if ( this->fields.sealedWindow )
      {
        BattleCommandComponent__updateCount((BattleCommandComponent_o *)this, 0, 0LL);
        commandCompArray = v4->fields.commandCompArray;
      }
      ++v5;
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
  struct BattleCommandComponent_array *selectedcomponents; // x0
  __int64 v7; // x8
  __int64 v8; // x22
  __int64 i; // x24
  UnityEngine_Object_o *v10; // x21
  BattleServantData_o *ServantData; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  struct BattleCommandComponent_array *v14; // x8
  __int64 v15; // x8
  __int64 v16; // x8
  BattleData_o *Bdata; // x0
  struct BattleCommandComponent_array *v18; // x8
  BattleCommandComponent_o *v19; // x8

  v3 = nowCardIndex;
  if ( (byte_40FC2C8 & 1) == 0 )
  {
    sub_B16FFC(&Method_BasicHelper_IndexValue_BattleCommandComponent___, *(_QWORD *)&nowCardIndex);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v5);
    byte_40FC2C8 = 1;
  }
  selectedcomponents = this->fields.selectedcomponents;
  if ( !selectedcomponents )
LABEL_23:
    sub_B170D4();
  v7 = *(_QWORD *)&selectedcomponents->max_length;
  if ( (int)v7 > v3 )
  {
    v8 = (int)v7;
    for ( i = v3 + 4LL; ; ++i )
    {
      v10 = (UnityEngine_Object_o *)BasicHelper__IndexValue_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_(
                                      (WellFired_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_array *)selectedcomponents,
                                      v3,
                                      0LL,
                                      (const MethodInfo_18B82A4 *)Method_BasicHelper_IndexValue_BattleCommandComponent___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      ServantData = (BattleServantData_o *)UnityEngine_Object__op_Equality(v10, 0LL, 0LL);
      if ( ((unsigned __int8)ServantData & 1) == 0 )
      {
        v14 = this->fields.selectedcomponents;
        if ( !v14 )
          goto LABEL_23;
        if ( v3 >= v14->max_length )
          goto LABEL_24;
        v15 = *((_QWORD *)&v14->obj.klass + i);
        if ( !v15 )
          goto LABEL_23;
        v16 = *(_QWORD *)(v15 + 352);
        if ( v16 )
        {
          Bdata = this->fields.Bdata;
          if ( !Bdata )
            goto LABEL_23;
          ServantData = BattleData__getServantData(Bdata, *(_DWORD *)(v16 + 40), 0LL);
          if ( ServantData )
          {
            v18 = this->fields.selectedcomponents;
            if ( !v18 )
              goto LABEL_23;
            if ( v3 >= v18->max_length )
            {
LABEL_24:
              sub_B17100(ServantData, v12, v13);
              sub_B170A0();
            }
            v19 = (BattleCommandComponent_o *)*((_QWORD *)&v18->obj.klass + i);
            if ( !v19 )
              goto LABEL_23;
            BattleCommandComponent__setBuffIconList(v19, ServantData->fields.buffData, 0LL);
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
  __int64 v4; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  float deltaTime; // s0
  struct BattleCommandComponent_array *v8; // x8
  float v9; // s8
  __int64 v10; // x20
  int max_length; // w9
  BattleCommandComponent_o *v12; // x0

  commandCompArray = this->fields.commandCompArray;
  if ( commandCompArray && *(_QWORD *)&commandCompArray->max_length )
  {
    deltaTime = UnityEngine_Time__get_deltaTime(0LL);
    v8 = this->fields.commandCompArray;
    if ( !v8 )
LABEL_9:
      sub_B170D4();
    v9 = deltaTime;
    v10 = 0LL;
    while ( 1 )
    {
      max_length = v8->max_length;
      if ( (int)v10 >= max_length )
        break;
      if ( (unsigned int)v10 >= max_length )
      {
        sub_B17100(v4, v5, v6);
        sub_B170A0();
      }
      v12 = v8->m_Items[v10];
      if ( v12 )
      {
        BattleCommandComponent__UpdateSpecialCardBuffIconAlpha(v12, v9, 0LL);
        v8 = this->fields.commandCompArray;
        ++v10;
        if ( v8 )
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

  if ( (byte_40FC2CE & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_11580, method);
    byte_40FC2CE = 1;
  }
  commandfsm = this->fields.commandfsm;
  if ( !commandfsm )
    sub_B170D4();
  PlayMakerFSM__SendEvent(commandfsm, (System_String_o *)StringLiteral_11580, 0LL);
}


void __fastcall BattlePerformanceCommandCard__back2Tactical(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  BattlePerformanceCommandCard_o *v3; // x19
  __int64 v4; // x1
  struct BattleCommandComponent_array *commandCompArray; // x21
  int max_length; // w8
  unsigned int v7; // w22
  Il2CppClass **v8; // x8
  BattleCommandComponent_o *v9; // x20
  int32_t MarkIndex; // w0
  const MethodInfo *v11; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v13; // x1
  BattlePerformance_o *perf; // x0
  const MethodInfo *v15; // x2
  PlayMakerFSM_o *commandfsm; // x0

  v3 = this;
  if ( (byte_40FC2B9 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_3080, method);
    this = (BattlePerformanceCommandCard_o *)sub_B16FFC(&StringLiteral_16282, v4);
    byte_40FC2B9 = 1;
  }
  commandCompArray = v3->fields.commandCompArray;
  if ( !commandCompArray )
    goto LABEL_21;
  max_length = commandCompArray->max_length;
  if ( max_length >= 1 )
  {
    v7 = 0;
    while ( 1 )
    {
      if ( v7 >= max_length )
      {
        sub_B17100(this, method, v2);
        sub_B170A0();
      }
      v8 = &commandCompArray->obj.klass + (int)v7;
      v9 = (BattleCommandComponent_o *)v8[4];
      if ( !v9 )
        break;
      MarkIndex = BattleCommandComponent__getMarkIndex((BattleCommandComponent_o *)v8[4], 0LL);
      if ( (MarkIndex & 0x80000000) == 0 && v9->fields.selectflg )
        BattlePerformanceCommandCard__unselectCommandCard(v3, v9, MarkIndex, v11);
      if ( BattleCommandComponent__isTreasureDvc(v9, 0LL) )
      {
        BattleCommandComponent__stopAnimation(v9, 0LL);
        BattleCommandComponent__ReleaseNobleGaugeEffect(v9, 0LL);
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v9, 0LL);
        if ( !gameObject )
          break;
        UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
      }
      this = (BattlePerformanceCommandCard_o *)BattleCommandComponent__checkCriticalPointValid(v9, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 && !v3->fields.isPrevStar )
        v3->fields.isPrevStar = 1;
      max_length = commandCompArray->max_length;
      if ( (int)++v7 >= max_length )
        goto LABEL_18;
    }
LABEL_21:
    sub_B170D4();
  }
LABEL_18:
  UnityEngine_MonoBehaviour__StopCoroutine_34804984((UnityEngine_MonoBehaviour_o *)v3, v3->fields.openNpCoroutine, 0LL);
  BattlePerformanceCommandCard__cancelFirstBonus(v3, v13);
  perf = v3->fields.perf;
  if ( !perf )
    goto LABEL_21;
  BattlePerformance__backTacticalMode(perf, 0LL);
  BattlePerformanceCommandCard__playAnimation(v3, (System_String_o *)StringLiteral_16282, v15);
  commandfsm = v3->fields.commandfsm;
  if ( !commandfsm )
    goto LABEL_21;
  PlayMakerFSM__SendEvent(commandfsm, (System_String_o *)StringLiteral_3080, 0LL);
}


void __fastcall BattlePerformanceCommandCard__callbackCommandTutorial01(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  float v9; // s4
  float v10; // s5
  float v11; // s6
  float v12; // s7
  unsigned int v13; // w8
  UnityEngine_Vector2_array *v14; // x20
  CommonUI_o *Instance; // x0
  PlayMakerFSM_o *commandfsm; // x0
  UnityEngine_Rect_o v17; // [xsp+0h] [xbp-20h] BYREF
  UnityEngine_Rect_o v18; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_40FC2C1 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    sub_B16FFC(&UnityEngine_Vector2___TypeInfo, v4);
    sub_B16FFC(&StringLiteral_5481, v5);
    byte_40FC2C1 = 1;
  }
  *(_QWORD *)&v17.fields.m_XMin = 0LL;
  *(_QWORD *)&v17.fields.m_Width = 0LL;
  v6 = sub_B17014(UnityEngine_Vector2___TypeInfo, 3LL, v2);
  if ( !v6 )
    goto LABEL_11;
  v13 = *(_DWORD *)(v6 + 24);
  v14 = (UnityEngine_Vector2_array *)v6;
  if ( !v13 || (*(_QWORD *)(v6 + 32) = 0LL, v13 == 1) || (*(_QWORD *)(v6 + 40) = 3276275712LL, v13 <= 2) )
  {
    sub_B17100(v6, v7, v8);
    sub_B170A0();
  }
  v18.fields.m_XMin = -500.0;
  *(_QWORD *)(v6 + 48) = 3284664320LL;
  v18.fields.m_YMin = -230.0;
  v18.fields.m_Width = 600.0;
  v18.fields.m_Height = 250.0;
  UnityEngine_Rect___ctor(v18, v9, v10, v11, v12, (const MethodInfo *)&v17);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__OpenTutorialArrowMark_18263832(Instance, v14, 0.0, v17, 0LL, 0LL),
        (commandfsm = this->fields.commandfsm) == 0LL) )
  {
LABEL_11:
    sub_B170D4();
  }
  PlayMakerFSM__SendEvent(commandfsm, (System_String_o *)StringLiteral_5481, 0LL);
}


void __fastcall BattlePerformanceCommandCard__callbackTutorial50(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *commandfsm; // x0

  if ( (byte_40FC2C2 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_5481, method);
    byte_40FC2C2 = 1;
  }
  commandfsm = this->fields.commandfsm;
  this->fields.isTouchNgInTutorial = 0;
  if ( !commandfsm )
    sub_B170D4();
  PlayMakerFSM__SendEvent(commandfsm, (System_String_o *)StringLiteral_5481, 0LL);
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
  UnityEngine_Vector2_o v11; // 0:s1.4,4:s2.4

  if ( (byte_40FC2C4 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    sub_B16FFC(&StringLiteral_1, v3);
    byte_40FC2C4 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v6 = (BattlePerformanceCommandCard_o *)BattlePerformanceCommandCard__FSTutorialArrowCard(
                                           (BattlePerformanceCommandCard_o *)Instance,
                                           this->fields.TutorialArrow01,
                                           v5);
  TutorialSquare01 = this->fields.TutorialSquare01;
  v8 = (UnityEngine_Vector2_array *)v6;
  v10 = BattlePerformanceCommandCard__FSTutorialSquareCard(v6, TutorialSquare01, v9);
  if ( !Instance )
    sub_B170D4();
  v11.fields.x = 0.0;
  v11.fields.y = 0.0;
  CommonUI__OpenTutorialNotificationDialogArrow_18262100(
    (CommonUI_o *)Instance,
    (System_String_o *)StringLiteral_1,
    v8,
    v10,
    0.0,
    v11,
    -1,
    0LL,
    0LL);
}


void __fastcall BattlePerformanceCommandCard__cancelFirstBonus(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *firstBonusObject; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  Spawner_o *spawner; // x0
  struct BattleCommandComponent_array *commandCompArray; // x8
  __int64 v9; // x21
  int max_length; // w9
  Il2CppClass **v11; // x8
  BattleCommandComponent_o *v12; // x20

  if ( (byte_40FC28F & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FC28F = 1;
  }
  this->fields.firstAuraType = -1;
  firstBonusObject = (UnityEngine_Object_o *)this->fields.firstBonusObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v4 = UnityEngine_Object__op_Inequality(firstBonusObject, 0LL, 0LL);
  if ( v4 )
  {
    spawner = this->fields.spawner;
    if ( !spawner )
      goto LABEL_15;
    Spawner__Despawn(spawner, this->fields.firstBonusObject, 1, 0LL);
  }
  commandCompArray = this->fields.commandCompArray;
  if ( !commandCompArray )
LABEL_15:
    sub_B170D4();
  v9 = 0LL;
  while ( 1 )
  {
    max_length = commandCompArray->max_length;
    if ( (int)v9 >= max_length )
      break;
    if ( (unsigned int)v9 >= max_length )
    {
      sub_B17100(v4, v5, v6);
      sub_B170A0();
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
  struct BattleCommandComponent_array *v10; // x8
  UnityEngine_Object_o *v11; // x21

  v4 = this;
  if ( (byte_40FC2C6 & 1) == 0 )
  {
    this = (BattlePerformanceCommandCard_o *)sub_B16FFC(&UnityEngine_Object_TypeInfo, enable);
    byte_40FC2C6 = 1;
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
        v10 = v4->fields.commandCompArray;
        if ( !v10 )
          goto LABEL_20;
        if ( v8 >= v10->max_length )
        {
LABEL_23:
          sub_B17100(this, enable, method);
          sub_B170A0();
        }
        v11 = (UnityEngine_Object_o *)*((_QWORD *)&v10->obj.klass + v6);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        this = (BattlePerformanceCommandCard_o *)UnityEngine_Object__op_Inequality(v11, 0LL, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !v11 )
            goto LABEL_20;
          BattleCommandComponent__setTouchFlg((BattleCommandComponent_o *)v11, enable, 0LL);
        }
      }
      commandCompArray = v4->fields.commandCompArray;
      ++v6;
      if ( !commandCompArray )
LABEL_20:
        sub_B170D4();
    }
    v4->fields.directCommandCardTouchEnable = enable;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceCommandCard__changeNoSelectCards(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Coroutine_o *openNpCoroutine; // x1
  struct BattleCommandComponent_array *commandCompArray; // x8
  __int64 v6; // x22
  il2cpp_array_size_t max_length; // w9
  il2cpp_array_size_t v8; // w21
  BattleCommandComponent_o *v9; // x20
  struct UnityEngine_GameObject_array *p_commandlist; // x8
  UnityEngine_GameObject_o *v11; // x21
  float g; // s5
  float b; // s6
  float a; // s7
  float v15; // s4
  UnityEngine_Color_o clear; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4 OVERLAPPED

  openNpCoroutine = this->fields.openNpCoroutine;
  if ( openNpCoroutine )
    UnityEngine_MonoBehaviour__StopCoroutine_34804984((UnityEngine_MonoBehaviour_o *)this, openNpCoroutine, 0LL);
  commandCompArray = this->fields.commandCompArray;
  if ( !commandCompArray )
LABEL_13:
    sub_B170D4();
  v6 = 4LL;
  while ( 1 )
  {
    max_length = commandCompArray->max_length;
    v8 = v6 - 4;
    if ( (int)v6 - 4 >= (int)(max_length - 1) )
      break;
    if ( v8 >= max_length )
      goto LABEL_15;
    v9 = (BattleCommandComponent_o *)*((_QWORD *)&commandCompArray->obj.klass + v6);
    if ( v9 )
    {
      BattleCommandComponent__stopAnimation(*((BattleCommandComponent_o **)&commandCompArray->obj.klass + v6), 0LL);
      if ( !v9->fields.selectflg )
      {
        p_commandlist = this->fields.p_commandlist;
        if ( !p_commandlist )
          goto LABEL_13;
        if ( v8 >= p_commandlist->max_length )
        {
LABEL_15:
          sub_B17100(this, openNpCoroutine, v2);
          sub_B170A0();
        }
        v11 = (UnityEngine_GameObject_o *)*((_QWORD *)&p_commandlist->obj.klass + v6);
        clear = UnityEngine_Color__get_clear(0LL);
        g = clear.fields.g;
        b = clear.fields.b;
        a = clear.fields.a;
        clear.fields.g = clear.fields.r;
        clear.fields.b = g;
        clear.fields.a = b;
        v15 = a;
        TweenColor__Begin(v11, 0.2, *(UnityEngine_Color_o *)&clear.fields.g, 0LL);
        BattleCommandComponent__stopFirstAura(v9, 0LL);
        BattleCommandComponent__HideAndCancelCountUpFinishEffect(v9, 0LL);
        BattleCommandComponent__ClearCardEffect(v9, 0LL);
      }
      commandCompArray = this->fields.commandCompArray;
      ++v6;
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

  if ( (byte_40FC2B6 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_9271, method);
    byte_40FC2B6 = 1;
  }
  commandfsm = this->fields.commandfsm;
  if ( !commandfsm )
    sub_B170D4();
  PlayMakerFSM__SendEvent(commandfsm, (System_String_o *)StringLiteral_9271, 0LL);
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
  BattleCommandComponent_o *v11; // x0
  UnityEngine_Object_o *monitor; // x21
  UnityEngine_GameObject_o *v13; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Transform_o *transform; // x0
  System_Int32_array **Object; // x1
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  BattleServantConfConponent_o *p_monitor; // x0

  v3 = (UnityEngine_Component_o *)this;
  if ( (byte_40FC290 & 1) == 0 )
  {
    this = (BattlePerformanceCommandCard_o *)sub_B16FFC(&UnityEngine_Object_TypeInfo, *(_QWORD *)&targetIndex);
    byte_40FC290 = 1;
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
      sub_B17100(this, *(_QWORD *)&targetIndex, method);
      sub_B170A0();
    }
    v11 = (BattleCommandComponent_o *)*((_QWORD *)&v10->_1.image + v6);
    if ( !v11 )
      goto LABEL_31;
    this = (BattlePerformanceCommandCard_o *)BattleCommandComponent__isTreasureDvc(v11, 0LL);
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
    UnityEngine_Object__Destroy_34809464(monitor, 0LL);
    p_monitor = (BattleServantConfConponent_o *)&v3[24].monitor;
    Object = 0LL;
    v3[24].monitor = 0LL;
LABEL_29:
    sub_B16F98(p_monitor, Object, v17, v18, v19, v20, v21, v22);
    return;
  }
  if ( (WORD1(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(monitor, 0LL, 0LL) )
  {
    v13 = (UnityEngine_GameObject_o *)v3[7].monitor;
    gameObject = UnityEngine_Component__get_gameObject(v3, 0LL);
    if ( !gameObject )
LABEL_31:
      sub_B170D4();
    transform = UnityEngine_GameObject__get_transform(gameObject, 0LL);
    Object = (System_Int32_array **)BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)v3, v13, transform, 0LL, 0LL);
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

  if ( (byte_40FC292 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_11588, method);
    byte_40FC292 = 1;
  }
  if ( this->fields.maxdrawcount <= this->fields.drawcount )
  {
    commandfsm = this->fields.commandfsm;
    if ( !commandfsm )
      sub_B170D4();
    PlayMakerFSM__SendEvent(commandfsm, (System_String_o *)StringLiteral_11588, 0LL);
  }
}


void __fastcall BattlePerformanceCommandCard__checkMaskEnemy(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  BattlePerformanceCommandCard_o *v3; // x19
  unsigned __int64 v4; // x22
  struct BattleCommandComponent_array *selectedcomponents; // x8
  UnityEngine_Object_o *v6; // x20
  UnityEngine_Object_o *maskSprite; // x20
  UIWidget_o *v9; // x0
  int32_t v10; // w1
  UnityEngine_Object_o *v11; // x20

  v3 = this;
  if ( (byte_40FC291 & 1) == 0 )
  {
    this = (BattlePerformanceCommandCard_o *)sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FC291 = 1;
  }
  v4 = 0LL;
  while ( 1 )
  {
    selectedcomponents = v3->fields.selectedcomponents;
    if ( !selectedcomponents )
      goto LABEL_27;
    if ( v4 >= selectedcomponents->max_length )
    {
      sub_B17100(this, method, v2);
      sub_B170A0();
    }
    v6 = (UnityEngine_Object_o *)selectedcomponents->m_Items[v4];
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    this = (BattlePerformanceCommandCard_o *)UnityEngine_Object__op_Inequality(v6, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
      break;
    if ( v4++ >= 2 )
    {
      maskSprite = (UnityEngine_Object_o *)v3->fields.maskSprite;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(maskSprite, 0LL, 0LL) )
      {
        v9 = (UIWidget_o *)v3->fields.maskSprite;
        if ( v9 )
        {
          v10 = -31;
          goto LABEL_24;
        }
LABEL_27:
        sub_B170D4();
      }
      return;
    }
  }
  v11 = (UnityEngine_Object_o *)v3->fields.maskSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v11, 0LL, 0LL) )
  {
    v9 = (UIWidget_o *)v3->fields.maskSprite;
    if ( !v9 )
      goto LABEL_27;
    v10 = 0;
LABEL_24:
    UIWidget__set_depth(v9, v10, 0LL);
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
  BattleLogic_o *logic; // x0
  BattleLogic_o *v7; // x0
  struct BattleData_o *v8; // x8
  CommonUI_o *Instance; // x20
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  System_Action_o *v14; // x21
  BattleLogic_o *v15; // x0
  BattleLogic_o *v16; // x0

  if ( (byte_40FC2C3 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_BattlePerformanceCommandCard_callbackTutorialSpeedNext__, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    byte_40FC2C3 = 1;
  }
  Bdata = this->fields.Bdata;
  if ( !Bdata )
    goto LABEL_19;
  if ( !BattleData__isTutorial(Bdata, 0LL) )
    return 0;
  logic = this->fields.logic;
  if ( !logic )
    goto LABEL_19;
  if ( BattleLogic__getTutorialId(logic, 0LL) == 2 )
  {
    v7 = this->fields.logic;
    if ( !v7 )
      goto LABEL_19;
    if ( BattleLogic__getTurn(v7, 0LL) == 2 )
    {
      v8 = this->fields.Bdata;
      if ( !v8 )
        goto LABEL_19;
      if ( v8->fields.tutorialState != 10 )
        return 1;
      v8->fields.tutorialState = 20;
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v14 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v10, v11, v12, v13);
      System_Action___ctor(
        v14,
        (Il2CppObject *)this,
        Method_BattlePerformanceCommandCard_callbackTutorialSpeedNext__,
        0LL);
      if ( !Instance )
        goto LABEL_19;
      CommonUI__CloseTutorialNotificationDialogArrow_18262716(Instance, v14, 0LL);
    }
  }
  v15 = this->fields.logic;
  if ( !v15 )
    goto LABEL_19;
  if ( BattleLogic__getTutorialId(v15, 0LL) != 2 )
    return 0;
  v16 = this->fields.logic;
  if ( !v16 )
LABEL_19:
    sub_B170D4();
  return BattleLogic__getTurn(v16, 0LL) > 2;
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
  int32_t TutorialId; // w0
  int32_t v17; // w20
  int32_t Wave; // w0
  int32_t v19; // w21
  int32_t Turn; // w0
  const MethodInfo *v21; // x1
  const MethodInfo *v22; // x2
  CommonUI_o *Instance; // x20
  System_String_o *v24; // x21
  const MethodInfo *v25; // x2
  BattlePerformanceCommandCard_o *v26; // x22
  const MethodInfo *v27; // x2
  UnityEngine_Rect_array *FSTutorialSquare32; // x0
  __int64 v29; // x1
  __int64 v30; // x2
  struct BattleLogic_TutorialStringData_array *TSD; // x8
  BattleLogic_TutorialStringData_o *v32; // x8
  int32_t v33; // w1
  const MethodInfo *v34; // x2
  struct BattlePerformance_o *perf; // x8
  CommonUI_o *v36; // x20
  System_String_o *v37; // x21
  const MethodInfo *v38; // x1
  UnityEngine_Vector2_o FSTutorialArrow22; // kr00_8
  const MethodInfo *v40; // x1
  float v41; // s0
  float v42; // s1
  float v43; // s2
  float v44; // s3
  struct BattleLogic_TutorialStringData_array *v45; // x8
  BattleLogic_TutorialStringData_o *v46; // x8
  float v47; // s16
  float v48; // s7
  const MethodInfo *v49; // x2
  const MethodInfo *v50; // x2
  struct BattleLogic_TutorialStringData_array *v51; // x8
  int32_t v52; // w1
  const MethodInfo *v53; // x2
  struct BattlePerformance_o *v54; // x8
  const MethodInfo *v55; // x2
  const MethodInfo *v56; // x1
  struct BattleLogic_TutorialStringData_array *v57; // x8
  PlayMakerFSM_o *commandfsm; // x0
  const MethodInfo *v59; // x2
  const MethodInfo *v60; // x2
  struct BattleLogic_TutorialStringData_array *v61; // x8
  const MethodInfo *v62; // x2
  const MethodInfo *v63; // x2
  struct BattleLogic_TutorialStringData_array *v64; // x8
  const MethodInfo *v65; // x2
  const MethodInfo *v66; // x2
  struct BattleLogic_TutorialStringData_array *v67; // x8
  CommonUI_o *v68; // x20
  System_String_o *v69; // x21
  __int64 v70; // x1
  __int64 v71; // x2
  __int64 v72; // x3
  __int64 v73; // x4
  System_Action_o *v74; // x22
  UnityEngine_Rect_o v75; // 0:s2.4,4:s3.4,8:s4.4,12:s5.4

  if ( (byte_40FC2C0 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_BattlePerformanceCommandCard_callbackTutorial50__, v3);
    sub_B16FFC(&LocalizationManager_TypeInfo, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_B16FFC(&StringLiteral_13435, v6);
    sub_B16FFC(&StringLiteral_13431, v7);
    sub_B16FFC(&StringLiteral_13439, v8);
    sub_B16FFC(&StringLiteral_13437, v9);
    sub_B16FFC(&StringLiteral_5481, v10);
    sub_B16FFC(&StringLiteral_13444, v11);
    sub_B16FFC(&StringLiteral_13433, v12);
    sub_B16FFC(&StringLiteral_13446, v13);
    sub_B16FFC(&StringLiteral_13443, v14);
    byte_40FC2C0 = 1;
  }
  logic = this->fields.logic;
  if ( !logic )
    goto LABEL_80;
  TutorialId = BattleLogic__getTutorialId(logic, 0LL);
  if ( !this->fields.logic )
    goto LABEL_80;
  v17 = TutorialId;
  Wave = BattleLogic__getWave(this->fields.logic, 0LL);
  if ( !this->fields.logic )
    goto LABEL_80;
  v19 = Wave;
  Turn = BattleLogic__getTurn(this->fields.logic, 0LL);
  if ( v17 != 3 )
  {
    if ( v17 != 2 )
    {
      if ( v17 == 1 )
      {
        switch ( Turn )
        {
          case 1:
            Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v24 = LocalizationManager__Get((System_String_o *)StringLiteral_13431, 0LL);
            v26 = (BattlePerformanceCommandCard_o *)BattlePerformanceCommandCard__FSTutorialArrowCard(
                                                      (BattlePerformanceCommandCard_o *)v24,
                                                      this->fields.TutorialArrow01,
                                                      v25);
            FSTutorialSquare32 = BattlePerformanceCommandCard__FSTutorialSquareCard(
                                   v26,
                                   this->fields.TutorialSquare01,
                                   v27);
            TSD = this->fields.TSD;
            if ( !TSD )
              goto LABEL_80;
            if ( !TSD->max_length )
              goto LABEL_81;
            v32 = TSD->m_Items[0];
            if ( !v32 )
              goto LABEL_80;
            goto LABEL_36;
          case 2:
            Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v24 = LocalizationManager__Get((System_String_o *)StringLiteral_13433, 0LL);
            v26 = (BattlePerformanceCommandCard_o *)BattlePerformanceCommandCard__FSTutorialArrowCard(
                                                      (BattlePerformanceCommandCard_o *)v24,
                                                      this->fields.TutorialArrow01,
                                                      v65);
            FSTutorialSquare32 = BattlePerformanceCommandCard__FSTutorialSquareCard(
                                   v26,
                                   this->fields.TutorialSquare01,
                                   v66);
            v67 = this->fields.TSD;
            if ( !v67 )
              goto LABEL_80;
            if ( v67->max_length <= 1 )
              goto LABEL_81;
            v32 = v67->m_Items[1];
            if ( !v32 )
              goto LABEL_80;
            goto LABEL_36;
          case 3:
            Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v24 = LocalizationManager__Get((System_String_o *)StringLiteral_13435, 0LL);
            v26 = (BattlePerformanceCommandCard_o *)BattlePerformanceCommandCard__FSTutorialArrowCard(
                                                      (BattlePerformanceCommandCard_o *)v24,
                                                      this->fields.TutorialArrow01,
                                                      v62);
            FSTutorialSquare32 = BattlePerformanceCommandCard__FSTutorialSquareCard(
                                   v26,
                                   this->fields.TutorialSquare01,
                                   v63);
            v64 = this->fields.TSD;
            if ( !v64 )
              goto LABEL_80;
            if ( v64->max_length <= 2 )
              goto LABEL_81;
            v32 = v64->m_Items[2];
            if ( !v32 )
              goto LABEL_80;
            goto LABEL_36;
          case 4:
            v68 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v69 = LocalizationManager__Get((System_String_o *)StringLiteral_13437, 0LL);
            v74 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v70, v71, v72, v73);
            System_Action___ctor(
              v74,
              (Il2CppObject *)this,
              Method_BattlePerformanceCommandCard_callbackTutorial50__,
              0LL);
            if ( !v68 )
              goto LABEL_80;
            CommonUI__OpenTutorialNotificationDialog(v68, v69, -1, v74, 0LL);
            goto LABEL_52;
          case 5:
            Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v24 = LocalizationManager__Get((System_String_o *)StringLiteral_13439, 0LL);
            v26 = (BattlePerformanceCommandCard_o *)BattlePerformanceCommandCard__FSTutorialArrowCard(
                                                      (BattlePerformanceCommandCard_o *)v24,
                                                      this->fields.TutorialArrow05,
                                                      v59);
            FSTutorialSquare32 = BattlePerformanceCommandCard__FSTutorialSquareCard(
                                   v26,
                                   this->fields.TutorialSquare05,
                                   v60);
            v61 = this->fields.TSD;
            if ( !v61 )
              goto LABEL_80;
            if ( v61->max_length <= 3 )
              goto LABEL_81;
            v32 = v61->m_Items[3];
            if ( !v32 )
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
      BattlePerformanceCommandCard__SetCommandPhaseButtonActive(this, 1, v22);
      perf = this->fields.perf;
      if ( !perf || !perf->fields.data )
        goto LABEL_80;
      BattlePerformanceCommandCard__updateHighSpeedObject(this, v33, v34);
      v36 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v37 = LocalizationManager__Get((System_String_o *)StringLiteral_13443, 0LL);
      FSTutorialArrow22 = BattlePerformanceCommandCard__get_FSTutorialArrow22(this, v38);
      *(UnityEngine_Rect_o *)&v41 = BattlePerformanceCommandCard__get_FSTutorialSquare22(this, v40);
      v45 = this->fields.TSD;
      if ( !v45 )
        goto LABEL_80;
      if ( v45->max_length > 4 )
      {
        v46 = v45->m_Items[4];
        if ( v46 && v36 )
        {
          v47 = v43;
          v48 = v44;
          v75.fields.m_XMin = v41;
          v75.fields.m_YMin = v42;
          v75.fields.m_Width = v47;
          v75.fields.m_Height = v48;
          CommonUI__OpenTutorialNotificationDialogArrow(
            v36,
            v37,
            FSTutorialArrow22,
            v75,
            v46->fields.way,
            v46->fields.pos,
            v46->fields.size,
            0LL,
            0LL);
          goto LABEL_52;
        }
LABEL_80:
        sub_B170D4();
      }
LABEL_81:
      sub_B17100(FSTutorialSquare32, v29, v30);
      sub_B170A0();
    }
    if ( Turn >= 3 )
    {
      BattlePerformanceCommandCard__SetCommandPhaseButtonActive(this, 1, v22);
      v54 = this->fields.perf;
      if ( !v54 || !v54->fields.data )
        goto LABEL_80;
      BattlePerformanceCommandCard__updateHighSpeedObject(this, v52, v53);
    }
LABEL_51:
    BattlePerformanceCommandCard__callbackCommandTutorial01(this, v21);
    goto LABEL_52;
  }
  if ( v19 || Turn != 1 )
  {
    if ( v19 != 1 || Turn != 1 )
      goto LABEL_51;
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v24 = LocalizationManager__Get((System_String_o *)StringLiteral_13446, 0LL);
    v26 = (BattlePerformanceCommandCard_o *)BattlePerformanceCommandCard__FSTutorialArrowCard(
                                              (BattlePerformanceCommandCard_o *)v24,
                                              this->fields.TutorialArrow31,
                                              v55);
    FSTutorialSquare32 = BattlePerformanceCommandCard__get_FSTutorialSquare32(this, v56);
    v57 = this->fields.TSD;
    if ( !v57 )
      goto LABEL_80;
    if ( v57->max_length <= 6 )
      goto LABEL_81;
    v32 = v57->m_Items[6];
    if ( !v32 )
      goto LABEL_80;
  }
  else
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v24 = LocalizationManager__Get((System_String_o *)StringLiteral_13444, 0LL);
    v26 = (BattlePerformanceCommandCard_o *)BattlePerformanceCommandCard__FSTutorialArrowCard(
                                              (BattlePerformanceCommandCard_o *)v24,
                                              this->fields.TutorialArrow31,
                                              v49);
    FSTutorialSquare32 = BattlePerformanceCommandCard__FSTutorialSquareCard(v26, this->fields.TutorialSquare01, v50);
    v51 = this->fields.TSD;
    if ( !v51 )
      goto LABEL_80;
    if ( v51->max_length <= 5 )
      goto LABEL_81;
    v32 = v51->m_Items[5];
    if ( !v32 )
      goto LABEL_80;
  }
LABEL_36:
  if ( !Instance )
    goto LABEL_80;
  CommonUI__OpenTutorialNotificationDialogArrow_18262100(
    Instance,
    v24,
    (UnityEngine_Vector2_array *)v26,
    FSTutorialSquare32,
    v32->fields.way,
    v32->fields.pos,
    v32->fields.size,
    0LL,
    0LL);
LABEL_52:
  commandfsm = this->fields.commandfsm;
  if ( !commandfsm )
    goto LABEL_80;
  PlayMakerFSM__SendEvent(commandfsm, (System_String_o *)StringLiteral_5481, 0LL);
}


void __fastcall BattlePerformanceCommandCard__clickBackButton(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  struct BattlePerformance_o *perf; // x8
  BattleData_o *data; // x0
  PlayMakerFSM_o *commandfsm; // x0

  if ( (byte_40FC2B8 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_3105, method);
    byte_40FC2B8 = 1;
  }
  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_8;
  data = perf->fields.data;
  if ( !data )
    goto LABEL_8;
  if ( BattleData__isTutorialCard(data, 0LL) )
    return;
  commandfsm = this->fields.commandfsm;
  if ( !commandfsm )
LABEL_8:
    sub_B170D4();
  PlayMakerFSM__SendEvent(commandfsm, (System_String_o *)StringLiteral_3105, 0LL);
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
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x21
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_40FC28A & 1) == 0 )
  {
    sub_B16FFC(&BattlePerformanceCommandCard__coStartFirstBonus_d__119_TypeInfo, *(_QWORD *)&type);
    byte_40FC28A = 1;
  }
  v7 = sub_B170CC(BattlePerformanceCommandCard__coStartFirstBonus_d__119_TypeInfo, *(_QWORD *)&type, method, v3, v4);
  BattlePerformanceCommandCard__coStartFirstBonus_d__119___ctor(
    (BattlePerformanceCommandCard__coStartFirstBonus_d__119_o *)v7,
    0,
    0LL);
  if ( !v7 )
    sub_B170D4();
  *(_QWORD *)(v7 + 32) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v7 + 32), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  *(_DWORD *)(v7 + 40) = type;
  return (System_Collections_IEnumerator_o *)v7;
}


System_Collections_IEnumerator_o *__fastcall BattlePerformanceCommandCard__colOpenNpCard(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40FC2AB & 1) == 0 )
  {
    sub_B16FFC(&BattlePerformanceCommandCard__colOpenNpCard_d__182_TypeInfo, method);
    byte_40FC2AB = 1;
  }
  v6 = sub_B170CC(BattlePerformanceCommandCard__colOpenNpCard_d__182_TypeInfo, method, v2, v3, v4);
  BattlePerformanceCommandCard__colOpenNpCard_d__182___ctor(
    (BattlePerformanceCommandCard__colOpenNpCard_d__182_o *)v6,
    0,
    0LL);
  if ( !v6 )
    sub_B170D4();
  *(_QWORD *)(v6 + 32) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v6 + 32), (System_Int32_array **)this, v7, v8, v9, v10, v11, v12);
  return (System_Collections_IEnumerator_o *)v6;
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
  BattlePerformance_o *perf; // x0
  struct BattlePerformance_o *v13; // x8
  BattlePerformanceStatus_o *statusPerf; // x0
  struct BattlePerformance_o *v15; // x8
  struct BattleData_o *data; // x8
  UnityEngine_Component_o *backTacticalButton; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v19; // x2
  CommonUI_o *Instance; // x0
  UnityEngine_Object_o *firstBonusObject; // x20
  BattleServantData_o *ServantData; // x0
  __int64 v23; // x1
  System_String_array **v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  Spawner_o *spawner; // x0
  __int64 v28; // x21
  struct System_Int32_array **p_selectcommand; // x26
  struct BattleCommandData_array **p_commandlist; // x25
  struct System_Int32_array *v31; // x8
  struct BattleCommandData_array *v32; // x9
  __int64 v33; // x8
  Il2CppClass **v34; // x8
  BattleCommandData_o *v35; // x20
  struct BattlePerformance_o *v36; // x8
  BattleData_o *v37; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v38; // x20
  struct System_Int32_array *v39; // x9
  struct BattleCommandData_array *v40; // x8
  __int64 v41; // x9
  struct System_Int32_array *v42; // x8
  struct BattleCommandData_array *v43; // x9
  __int64 v44; // x8
  struct System_Int32_array *v45; // x8
  struct BattleCommandData_array *v46; // x9
  __int64 v47; // x8
  BattleData_o *Bdata; // x21
  BattleCommandData_array *v49; // x0
  struct BattlePerformance_o *v50; // x8
  struct BattleData_o *v51; // x9
  struct BattleActionLogManagerInterface_o *actionLogManager; // x21
  BattleActionLogManagerInterface_c *klass; // x8
  unsigned int globaltargetId; // w22
  unsigned __int64 v55; // x10
  BattleActionLogManagerInterface_c **p_offset; // x11
  __int64 p_method; // x0
  struct BattlePerformance_o *v58; // x8
  struct BattleData_o *v59; // x8
  struct System_Int32_array *v60; // x9
  struct BattleActionLogManagerInterface_o *v61; // x21
  BattleActionLogManagerInterface_c *v62; // x8
  unsigned int v63; // w23
  unsigned int v64; // w24
  unsigned int v65; // w22
  unsigned __int64 v66; // x10
  BattleActionLogManagerInterface_c **v67; // x11
  __int64 v68; // x0
  BattleLogic_o *v69; // x0
  struct BattleData_o *v70; // x8
  BattleComboData_o *combodata; // x0
  __int64 v72; // x3
  __int64 v73; // x4
  struct System_Int32_array *v74; // x8
  struct BattleCommandData_array *v75; // x9
  __int64 v76; // x8
  BattleCommandData_o *v77; // x22
  BattleCommandData_o *v78; // x21
  BattleData_o *v79; // x21
  BattleCommandData_array *v80; // x0
  __int64 v81; // x20
  struct BattleCommandComponent_array *selectedcomponents; // x8
  BattleCommandComponent_o *v83; // x0
  System_String_array **v84; // x3
  System_Boolean_array **v85; // x4
  System_Int32_array **v86; // x5
  System_Int32_array *v87; // x6
  System_Int32_array *v88; // x7
  struct BattlePerformance_o *v89; // x8
  struct BattleData_o *v90; // x8
  struct BattlePerformance_o *v91; // x8
  BattleData_o *v92; // x0
  struct BattlePerformance_o *v93; // x8
  BattlePerformanceStatus_o *v94; // x0

  if ( (byte_40FC293 & 1) == 0 )
  {
    sub_B16FFC(&BattleActionLogManagerInterface_TypeInfo, method);
    sub_B16FFC(&BattleCommandData_TypeInfo, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleCommandData__Add__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleCommandData__ToArray__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleCommandData___ctor__, v6);
    sub_B16FFC(&System_Collections_Generic_List_BattleCommandData__TypeInfo, v7);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v8);
    sub_B16FFC(&SeManager_TypeInfo, v9);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10);
    byte_40FC293 = 1;
  }
  if ( this->fields.maxdrawcount > this->fields.drawcount )
    return;
  logic = this->fields.logic;
  if ( !logic )
    goto LABEL_95;
  BattleLogic__SetTimeAccelerationCheckDelayReset(logic, 0, 0LL);
  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_95;
  BattlePerformance__ChangeBattleSpeed(perf, 0LL);
  v13 = this->fields.perf;
  if ( !v13 )
    goto LABEL_95;
  statusPerf = v13->fields.statusPerf;
  if ( !statusPerf )
    goto LABEL_95;
  BattlePerformanceStatus__SetActiveTotalCriticalStar(statusPerf, 0, 0LL);
  v15 = this->fields.perf;
  if ( !v15 )
    goto LABEL_95;
  data = v15->fields.data;
  if ( !data )
    goto LABEL_95;
  data->fields.isCalcCritical = 1;
  backTacticalButton = (UnityEngine_Component_o *)this->fields.backTacticalButton;
  if ( !backTacticalButton )
    goto LABEL_95;
  gameObject = UnityEngine_Component__get_gameObject(backTacticalButton, 0LL);
  if ( !gameObject )
    goto LABEL_95;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  BattlePerformanceCommandCard__SetBackTacticalButton(this, 0, v19);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_95;
  CommonUI__CloseTutorialNotificationDialogArrow(Instance, 0LL);
  firstBonusObject = (UnityEngine_Object_o *)this->fields.firstBonusObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  ServantData = (BattleServantData_o *)UnityEngine_Object__op_Inequality(firstBonusObject, 0LL, 0LL);
  if ( ((unsigned __int8)ServantData & 1) != 0 )
  {
    spawner = this->fields.spawner;
    if ( !spawner )
      goto LABEL_95;
    Spawner__Despawn(spawner, this->fields.firstBonusObject, 1, 0LL);
  }
  if ( this->fields.maxdrawcount > 0 )
  {
    v28 = 0LL;
    p_selectcommand = &this->fields.selectcommand;
    p_commandlist = &this->fields.commandlist;
    while ( 1 )
    {
      v31 = *p_selectcommand;
      if ( !*p_selectcommand )
        break;
      if ( (unsigned int)v28 >= v31->max_length )
        goto LABEL_96;
      v32 = *p_commandlist;
      if ( !*p_commandlist )
        break;
      v33 = v31->m_Items[v28 + 1];
      if ( (unsigned int)v33 >= v32->max_length )
        goto LABEL_96;
      v34 = &v32->obj.klass + v33;
      v35 = (BattleCommandData_o *)v34[4];
      if ( !v35 )
        break;
      if ( BattleCommandData__isTreasureDvc((BattleCommandData_o *)v34[4], 0LL) )
      {
        v36 = this->fields.perf;
        if ( !v36 )
          break;
        v37 = v36->fields.data;
        if ( !v37 )
          break;
        ServantData = BattleData__getServantData(v37, v35->fields.uniqueId, 0LL);
        if ( ServantData )
          BattleServantData__SetSelectedTreasureDevice(ServantData, 0LL);
      }
      else
      {
        BattleCommandData__SetSelectedType(v35, 0LL);
      }
      if ( (int)++v28 >= this->fields.maxdrawcount )
        goto LABEL_35;
    }
LABEL_95:
    sub_B170D4();
  }
  p_commandlist = &this->fields.commandlist;
  p_selectcommand = &this->fields.selectcommand;
LABEL_35:
  v38 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_BattleCommandData__TypeInfo,
                                                                                                  v23,
                                                                                                  v24,
                                                                                                  v25,
                                                                                                  v26);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v38,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_BattleCommandData___ctor__);
  v39 = *p_selectcommand;
  if ( !*p_selectcommand )
    goto LABEL_95;
  if ( !v39->max_length )
    goto LABEL_96;
  v40 = *p_commandlist;
  if ( !*p_commandlist )
    goto LABEL_95;
  v41 = v39->m_Items[1];
  if ( (unsigned int)v41 >= v40->max_length )
    goto LABEL_96;
  if ( !v38 )
    goto LABEL_95;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v38,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v40->m_Items[v41],
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_BattleCommandData__Add__);
  v42 = *p_selectcommand;
  if ( !*p_selectcommand )
    goto LABEL_95;
  if ( v42->max_length <= 1 )
    goto LABEL_96;
  v43 = *p_commandlist;
  if ( !*p_commandlist )
    goto LABEL_95;
  v44 = v42->m_Items[2];
  if ( (unsigned int)v44 >= v43->max_length )
    goto LABEL_96;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v38,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v43->m_Items[v44],
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_BattleCommandData__Add__);
  v45 = *p_selectcommand;
  if ( !*p_selectcommand )
    goto LABEL_95;
  if ( v45->max_length <= 2 )
    goto LABEL_96;
  v46 = *p_commandlist;
  if ( !*p_commandlist )
    goto LABEL_95;
  v47 = v45->m_Items[3];
  if ( (unsigned int)v47 >= v46->max_length )
    goto LABEL_96;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v38,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v46->m_Items[v47],
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_BattleCommandData__Add__);
  Bdata = this->fields.Bdata;
  v49 = (BattleCommandData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                     (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v38,
                                     (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_BattleCommandData__ToArray__);
  if ( !Bdata )
    goto LABEL_95;
  BattleData__setCommandData(Bdata, v49, 0LL);
  v50 = this->fields.perf;
  if ( !v50 )
    goto LABEL_95;
  v51 = v50->fields.data;
  if ( !v51 )
    goto LABEL_95;
  actionLogManager = v51->fields.actionLogManager;
  if ( !actionLogManager )
    goto LABEL_95;
  klass = actionLogManager->klass;
  globaltargetId = v51->fields.globaltargetId;
  if ( *(_WORD *)&actionLogManager->klass->_2.bitflags1 )
  {
    v55 = 0LL;
    p_offset = (BattleActionLogManagerInterface_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != BattleActionLogManagerInterface_TypeInfo )
    {
      ++v55;
      p_offset += 2;
      if ( v55 >= *(unsigned __int16 *)&actionLogManager->klass->_2.bitflags1 )
        goto LABEL_56;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 7].method;
  }
  else
  {
LABEL_56:
    p_method = sub_AAFEF8(actionLogManager, BattleActionLogManagerInterface_TypeInfo, 7LL);
  }
  ServantData = (BattleServantData_o *)(*(__int64 (__fastcall **)(struct BattleActionLogManagerInterface_o *, _QWORD, _QWORD))p_method)(
                                         actionLogManager,
                                         globaltargetId,
                                         *(_QWORD *)(p_method + 8));
  v58 = this->fields.perf;
  if ( !v58 )
    goto LABEL_95;
  v59 = v58->fields.data;
  if ( !v59 )
    goto LABEL_95;
  v60 = *p_selectcommand;
  if ( !*p_selectcommand )
    goto LABEL_95;
  if ( v60->max_length < 3 )
    goto LABEL_96;
  v61 = v59->fields.actionLogManager;
  if ( !v61 )
    goto LABEL_95;
  v62 = v61->klass;
  v64 = v60->m_Items[1];
  v63 = v60->m_Items[2];
  v65 = v60->m_Items[3];
  if ( *(_WORD *)&v61->klass->_2.bitflags1 )
  {
    v66 = 0LL;
    v67 = (BattleActionLogManagerInterface_c **)&v62->_1.interfaceOffsets->offset;
    while ( *(v67 - 1) != BattleActionLogManagerInterface_TypeInfo )
    {
      ++v66;
      v67 += 2;
      if ( v66 >= *(unsigned __int16 *)&v61->klass->_2.bitflags1 )
        goto LABEL_67;
    }
    v68 = (__int64)&v62->vtable[*(_DWORD *)v67 + 8].method;
  }
  else
  {
LABEL_67:
    v68 = sub_AAFEF8(v61, BattleActionLogManagerInterface_TypeInfo, 8LL);
  }
  (*(void (__fastcall **)(struct BattleActionLogManagerInterface_o *, _QWORD, _QWORD, _QWORD, _QWORD))v68)(
    v61,
    v64,
    v63,
    v65,
    *(_QWORD *)(v68 + 8));
  v69 = this->fields.logic;
  if ( !v69 )
    goto LABEL_95;
  BattleLogic__endSelectCommand(v69, 0LL);
  v70 = this->fields.Bdata;
  if ( !v70 )
    goto LABEL_95;
  combodata = v70->fields.combodata;
  if ( !combodata )
    goto LABEL_95;
  ServantData = (BattleServantData_o *)BattleComboData__isExtraAttack(combodata, 0LL);
  if ( ((unsigned __int8)ServantData & 1) == 0 )
    goto LABEL_80;
  v74 = *p_selectcommand;
  if ( !*p_selectcommand )
    goto LABEL_95;
  if ( v74->max_length <= 2 )
    goto LABEL_96;
  v75 = *p_commandlist;
  if ( !*p_commandlist )
    goto LABEL_95;
  v76 = v74->m_Items[3];
  if ( (unsigned int)v76 >= v75->max_length )
  {
LABEL_96:
    sub_B17100(ServantData, v23, v24);
    sub_B170A0();
  }
  v77 = v75->m_Items[v76];
  v78 = (BattleCommandData_o *)sub_B170CC(BattleCommandData_TypeInfo, v23, v24, v72, v73);
  BattleCommandData___ctor_18726640(v78, v77, 0LL);
  if ( !v78 )
    goto LABEL_95;
  BattleCommandData__setTypeAddAttack(v78, 0LL);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v38,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v78,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_BattleCommandData__Add__);
  v79 = this->fields.Bdata;
  v80 = (BattleCommandData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                     (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v38,
                                     (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_BattleCommandData__ToArray__);
  if ( !v79 )
    goto LABEL_95;
  BattleData__setCommandData(v79, v80, 0LL);
LABEL_80:
  v81 = 0LL;
  do
  {
    selectedcomponents = this->fields.selectedcomponents;
    if ( !selectedcomponents )
      goto LABEL_95;
    if ( (unsigned int)v81 >= selectedcomponents->max_length )
      goto LABEL_96;
    v83 = selectedcomponents->m_Items[v81];
    if ( !v83 )
      goto LABEL_95;
    BattleCommandComponent__startComboCard(v83, 0LL);
    ++v81;
  }
  while ( (unsigned int)(v81 - 1) < 2 );
  v89 = this->fields.perf;
  if ( !v89 )
    goto LABEL_95;
  v90 = v89->fields.data;
  if ( !v90 )
    goto LABEL_95;
  v90->fields.commandCriticalArray = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&v90->fields.commandCriticalArray, 0LL, v24, v84, v85, v86, v87, v88);
  v91 = this->fields.perf;
  if ( !v91 )
    goto LABEL_95;
  v92 = v91->fields.data;
  if ( !v92 )
    goto LABEL_95;
  BattleData__ResetAllCriticalInfo(v92, 0LL);
  v93 = this->fields.perf;
  if ( !v93 )
    goto LABEL_95;
  v94 = v93->fields.statusPerf;
  if ( !v94 )
    goto LABEL_95;
  BattlePerformanceStatus__updateCriticalPoint(v94, -1, 0, 0LL);
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
  System_String_array **v2; // x2
  BattlePerformanceCommandCard_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  struct UnityEngine_GameObject_array *p_commandlist; // x8
  struct UnityEngine_GameObject_array **p_p_commandlist; // x20
  unsigned __int64 v14; // x22
  unsigned __int64 max_length; // x9
  UnityEngine_Object_o *v16; // x21
  System_Int32_array **v17; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  __int64 v24; // x2
  System_Int32_array **v25; // x0
  struct BattleCommandComponent_array **p_commandCompArray; // x21
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  __int64 v33; // x2
  System_Int32_array **v34; // x0
  struct UnityEngine_Transform_array **p_commandTransformArray; // x22
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  __int64 v42; // x2
  struct UnityEngine_GameObject_array *v43; // x25
  unsigned int v44; // w28
  int32_t v45; // w23
  __int64 v46; // x26
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  System_Int32_array **v52; // x24
  struct UnityEngine_GameObject_array *v53; // x8
  UnityEngine_GameObject_o *v54; // x0
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  struct BattleCommandComponent_array *v60; // x25
  BattlePerformanceCommandCard_o *v61; // x24
  struct UnityEngine_GameObject_array *v62; // x8
  UnityEngine_GameObject_o *v63; // x0
  struct UnityEngine_Transform_array *v64; // x27
  System_String_array **v65; // x3
  System_Boolean_array **v66; // x4
  System_Int32_array **v67; // x5
  System_Int32_array *v68; // x6
  System_Int32_array *v69; // x7
  System_Int32_array **v70; // x25
  System_Int32_array **gameObject; // x0
  System_String_array **v72; // x2
  System_String_array **v73; // x3
  System_Boolean_array **v74; // x4
  System_Int32_array **v75; // x5
  System_Int32_array *v76; // x6
  System_Int32_array *v77; // x7
  System_Int32_array **perf; // x1
  System_String_array **v79; // x2
  System_String_array **v80; // x3
  System_Boolean_array **v81; // x4
  System_Int32_array **v82; // x5
  System_Int32_array *v83; // x6
  System_Int32_array *v84; // x7
  struct UnityEngine_Transform_array *v85; // x8
  struct UnityEngine_Transform_array *excardTr; // x8
  UnityEngine_Transform_o *v87; // x1
  struct UnityEngine_Transform_array *v88; // x8
  struct UnityEngine_Transform_array *cardTr; // x9
  UnityEngine_Transform_o *v90; // x0
  struct UnityEngine_Transform_array *v91; // x8
  UnityEngine_Transform_o *v92; // x25
  int v93; // s0
  struct UnityEngine_Transform_array *v96; // x8
  UnityEngine_Transform_o *v97; // x25
  int v98; // s0
  struct UnityEngine_Transform_array *npcardTr; // x8
  struct UnityEngine_Transform_array *v103; // x8
  UnityEngine_Transform_o *v104; // x25
  int v105; // s0
  struct UnityEngine_Transform_array *v108; // x8
  UnityEngine_Transform_o *v109; // x25
  int v110; // s0
  struct UnityEngine_GameObject_array *v114; // x8
  UnityEngine_GameObject_o *v115; // x0
  UIWidget_o *Component_srcLineSprite; // x25
  int v117; // s0
  System_Int32_array **v121; // x0
  System_String_array **v122; // x2
  System_String_array **v123; // x3
  System_Boolean_array **v124; // x4
  System_Int32_array **v125; // x5
  System_Int32_array *v126; // x6
  System_Int32_array *v127; // x7
  struct UnityEngine_GameObject_array *v128; // x8
  UnityEngine_GameObject_o *v129; // x0
  struct BattleCommandComponent_array *selectedcomponents; // x20
  System_String_array **v131; // x3
  System_Boolean_array **v132; // x4
  System_Int32_array **v133; // x5
  System_Int32_array *v134; // x6
  System_Int32_array *v135; // x7
  System_Int32_array **v136; // x21
  __int64 v137; // x2
  System_Int32_array **v138; // x0
  System_String_array **v139; // x2
  System_String_array **v140; // x3
  System_Boolean_array **v141; // x4
  System_Int32_array **v142; // x5
  System_Int32_array *v143; // x6
  System_Int32_array *v144; // x7

  v3 = this;
  if ( (byte_40FC278 & 1) == 0 )
  {
    sub_B16FFC(&BattleCommandComponent___TypeInfo, method);
    sub_B16FFC(&UnityEngine_GameObject___TypeInfo, v4);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_BattleCommandComponent___, v5);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_UIWidget___, v6);
    sub_B16FFC(&int___TypeInfo, v7);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v8);
    sub_B16FFC(&UnityEngine_Transform___TypeInfo, v9);
    sub_B16FFC(&StringLiteral_18136, v10);
    this = (BattlePerformanceCommandCard_o *)sub_B16FFC(&StringLiteral_18151, v11);
    byte_40FC278 = 1;
  }
  p_p_commandlist = &v3->fields.p_commandlist;
  p_commandlist = v3->fields.p_commandlist;
  if ( p_commandlist )
  {
    v14 = 0LL;
    while ( 1 )
    {
      max_length = p_commandlist->max_length;
      if ( (__int64)v14 >= (int)max_length )
        break;
      if ( v14 >= max_length )
        goto LABEL_79;
      v16 = (UnityEngine_Object_o *)p_commandlist->m_Items[v14];
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_34809464(v16, 0LL);
      p_commandlist = *p_p_commandlist;
      ++v14;
      if ( !*p_p_commandlist )
        goto LABEL_78;
    }
  }
  v17 = (System_Int32_array **)sub_B17014(UnityEngine_GameObject___TypeInfo, 9LL, v2);
  v3->fields.p_commandlist = (struct UnityEngine_GameObject_array *)v17;
  sub_B16F98((BattleServantConfConponent_o *)&v3->fields.p_commandlist, v17, v18, v19, v20, v21, v22, v23);
  v25 = (System_Int32_array **)sub_B17014(BattleCommandComponent___TypeInfo, 9LL, v24);
  p_commandCompArray = &v3->fields.commandCompArray;
  v3->fields.commandCompArray = (struct BattleCommandComponent_array *)v25;
  sub_B16F98((BattleServantConfConponent_o *)&v3->fields.commandCompArray, v25, v27, v28, v29, v30, v31, v32);
  v34 = (System_Int32_array **)sub_B17014(UnityEngine_Transform___TypeInfo, 9LL, v33);
  p_commandTransformArray = &v3->fields.commandTransformArray;
  v3->fields.commandTransformArray = (struct UnityEngine_Transform_array *)v34;
  sub_B16F98((BattleServantConfConponent_o *)&v3->fields.commandTransformArray, v34, v36, v37, v38, v39, v40, v41);
  v43 = v3->fields.p_commandlist;
  if ( !v43 )
    goto LABEL_78;
  v44 = 0;
  v45 = 30;
  v46 = 32LL;
  while ( (signed int)v44 < (signed int)v43->max_length )
  {
    this = (BattlePerformanceCommandCard_o *)BaseMonoBehaviour__createObject(
                                               (BaseMonoBehaviour_o *)v3,
                                               v3->fields.commandprefab,
                                               v3->fields.commandrootTransform,
                                               0LL,
                                               0LL);
    v52 = (System_Int32_array **)this;
    if ( this )
    {
      this = (BattlePerformanceCommandCard_o *)sub_B170BC(this, v43->obj.klass->_1.element_class);
      if ( !this )
        goto LABEL_80;
    }
    if ( v44 >= v43->max_length )
      goto LABEL_79;
    *(Il2CppClass **)((char *)&v43->obj.klass + v46) = (Il2CppClass *)v52;
    sub_B16F98((BattleServantConfConponent_o *)((char *)v43 + v46), v52, v2, v47, v48, v49, v50, v51);
    v53 = *p_p_commandlist;
    if ( !*p_p_commandlist )
      goto LABEL_78;
    if ( v44 >= v53->max_length )
      goto LABEL_79;
    v54 = *(UnityEngine_GameObject_o **)((char *)&v53->obj.klass + v46);
    if ( !v54 )
      goto LABEL_78;
    this = (BattlePerformanceCommandCard_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                               v54,
                                               (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_BattleCommandComponent___);
    v60 = *p_commandCompArray;
    if ( !*p_commandCompArray )
      goto LABEL_78;
    v61 = this;
    if ( this )
    {
      this = (BattlePerformanceCommandCard_o *)sub_B170BC(this, v60->obj.klass->_1.element_class);
      if ( !this )
        goto LABEL_80;
    }
    if ( v44 >= v60->max_length )
      goto LABEL_79;
    *(Il2CppClass **)((char *)&v60->obj.klass + v46) = (Il2CppClass *)v61;
    sub_B16F98(
      (BattleServantConfConponent_o *)((char *)v60 + v46),
      (System_Int32_array **)v61,
      v2,
      v55,
      v56,
      v57,
      v58,
      v59);
    v62 = *p_p_commandlist;
    if ( !*p_p_commandlist )
      goto LABEL_78;
    if ( v44 >= v62->max_length )
      goto LABEL_79;
    v63 = *(UnityEngine_GameObject_o **)((char *)&v62->obj.klass + v46);
    if ( !v63 )
      goto LABEL_78;
    v64 = *p_commandTransformArray;
    this = (BattlePerformanceCommandCard_o *)UnityEngine_GameObject__get_transform(v63, 0LL);
    if ( !v64 )
      goto LABEL_78;
    v70 = (System_Int32_array **)this;
    if ( this )
    {
      this = (BattlePerformanceCommandCard_o *)sub_B170BC(this, v64->obj.klass->_1.element_class);
      if ( !this )
        goto LABEL_80;
    }
    if ( v44 >= v64->max_length )
      goto LABEL_79;
    *(Il2CppClass **)((char *)&v64->obj.klass + v46) = (Il2CppClass *)v70;
    sub_B16F98((BattleServantConfConponent_o *)((char *)v64 + v46), v70, v2, v65, v66, v67, v68, v69);
    if ( !v61 )
      goto LABEL_78;
    BattleCommandComponent__Initialize((BattleCommandComponent_o *)v61, 0LL);
    LOWORD(v61->fields.cutin_trinity_q) = 256;
    BattleCommandComponent__setData((BattleCommandComponent_o *)v61, 0LL, 0LL, 0, 1, 0, 0LL);
    gameObject = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v3, 0LL);
    v61->fields.commandAssistDetailWindow = (struct BattleCommandAssistDetailWindowComponent_o *)gameObject;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v61->fields.commandAssistDetailWindow,
      gameObject,
      v72,
      v73,
      v74,
      v75,
      v76,
      v77);
    BattleCommandComponent__setDepth((BattleCommandComponent_o *)v61, v45, 0LL);
    perf = (System_Int32_array **)v3->fields.perf;
    v61->fields.backTacticalButton = (struct UIButton_o *)perf;
    sub_B16F98((BattleServantConfConponent_o *)&v61->fields.backTacticalButton, perf, v79, v80, v81, v82, v83, v84);
    if ( v44 <= 4 )
    {
      v88 = *p_commandTransformArray;
      if ( !*p_commandTransformArray )
        goto LABEL_78;
      if ( v44 >= v88->max_length )
        goto LABEL_79;
      cardTr = v3->fields.cardTr;
      if ( !cardTr )
        goto LABEL_78;
      if ( v44 >= cardTr->max_length )
        goto LABEL_79;
      v90 = *(UnityEngine_Transform_o **)((char *)&v88->obj.klass + v46);
      if ( !v90 )
        goto LABEL_78;
      UnityEngine_Transform__SetParent(v90, *(UnityEngine_Transform_o **)((char *)&cardTr->obj.klass + v46), 0LL);
      v91 = *p_commandTransformArray;
      if ( !*p_commandTransformArray )
        goto LABEL_78;
      if ( v44 >= v91->max_length )
        goto LABEL_79;
      v92 = *(UnityEngine_Transform_o **)((char *)&v91->obj.klass + v46);
      *(UnityEngine_Vector3_o *)&v93 = UnityEngine_Vector3__get_zero(0LL);
      if ( !v92 )
        goto LABEL_78;
      UnityEngine_Transform__set_localPosition(v92, *(UnityEngine_Vector3_o *)&v93, 0LL);
      v96 = *p_commandTransformArray;
      if ( !*p_commandTransformArray )
        goto LABEL_78;
      if ( v44 >= v96->max_length )
        goto LABEL_79;
      v97 = *(UnityEngine_Transform_o **)((char *)&v96->obj.klass + v46);
      *(UnityEngine_Quaternion_o *)&v98 = UnityEngine_Quaternion__get_identity(0LL);
      if ( !v97 )
        goto LABEL_78;
      UnityEngine_Transform__set_localRotation(v97, *(UnityEngine_Quaternion_o *)&v98, 0LL);
    }
    else
    {
      v85 = *p_commandTransformArray;
      if ( !*p_commandTransformArray )
        goto LABEL_78;
      if ( v44 >= v85->max_length )
        goto LABEL_79;
      this = *(BattlePerformanceCommandCard_o **)((char *)&v85->obj.klass + v46);
      if ( v44 <= 7 )
      {
        npcardTr = v3->fields.npcardTr;
        if ( !npcardTr )
          goto LABEL_78;
        if ( v44 - 5 >= npcardTr->max_length )
          goto LABEL_79;
        if ( !this )
          goto LABEL_78;
        v87 = *(UnityEngine_Transform_o **)((char *)npcardTr + v46 - 40);
      }
      else
      {
        excardTr = v3->fields.excardTr;
        if ( !excardTr )
          goto LABEL_78;
        if ( v44 - 8 >= excardTr->max_length )
          goto LABEL_79;
        if ( !this )
          goto LABEL_78;
        v87 = *(UnityEngine_Transform_o **)((char *)excardTr + v46 - 64);
      }
      UnityEngine_Transform__SetParent((UnityEngine_Transform_o *)this, v87, 0LL);
      v103 = *p_commandTransformArray;
      if ( !*p_commandTransformArray )
        goto LABEL_78;
      if ( v44 >= v103->max_length )
        goto LABEL_79;
      v104 = *(UnityEngine_Transform_o **)((char *)&v103->obj.klass + v46);
      *(UnityEngine_Vector3_o *)&v105 = UnityEngine_Vector3__get_zero(0LL);
      if ( !v104 )
        goto LABEL_78;
      UnityEngine_Transform__set_localPosition(v104, *(UnityEngine_Vector3_o *)&v105, 0LL);
      v108 = *p_commandTransformArray;
      if ( !*p_commandTransformArray )
        goto LABEL_78;
      if ( v44 >= v108->max_length )
        goto LABEL_79;
      v109 = *(UnityEngine_Transform_o **)((char *)&v108->obj.klass + v46);
      *(UnityEngine_Quaternion_o *)&v110 = UnityEngine_Quaternion__get_identity(0LL);
      if ( !v109 )
        goto LABEL_78;
      UnityEngine_Transform__set_localRotation(v109, *(UnityEngine_Quaternion_o *)&v110, 0LL);
      v114 = *p_p_commandlist;
      if ( !*p_p_commandlist )
        goto LABEL_78;
      if ( v44 >= v114->max_length )
        goto LABEL_79;
      v115 = *(UnityEngine_GameObject_o **)((char *)&v114->obj.klass + v46);
      if ( !v115 )
        goto LABEL_78;
      Component_srcLineSprite = (UIWidget_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                v115,
                                                (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
      *(UnityEngine_Color_o *)&v117 = UnityEngine_Color__get_clear(0LL);
      if ( !Component_srcLineSprite )
        goto LABEL_78;
      UIWidget__set_color(Component_srcLineSprite, *(UnityEngine_Color_o *)&v117, 0LL);
    }
    BattleCommandComponent__addObject((BattleCommandComponent_o *)v61, (System_String_o *)StringLiteral_18136, 0, 0LL);
    BattleCommandComponent__addObject((BattleCommandComponent_o *)v61, (System_String_o *)StringLiteral_18151, 1, 0LL);
    v43 = *p_p_commandlist;
    ++v44;
    v46 += 8LL;
    v45 += 20;
    if ( !*p_p_commandlist )
      goto LABEL_78;
  }
  v121 = (System_Int32_array **)sub_B17014(BattleCommandComponent___TypeInfo, 4LL, v42);
  v3->fields.selectedcomponents = (struct BattleCommandComponent_array *)v121;
  sub_B16F98((BattleServantConfConponent_o *)&v3->fields.selectedcomponents, v121, v122, v123, v124, v125, v126, v127);
  v128 = v3->fields.p_commandlist;
  if ( !v128 )
    goto LABEL_78;
  if ( v128->max_length <= 8 )
    goto LABEL_79;
  v129 = v128->m_Items[8];
  if ( !v129
    || (selectedcomponents = v3->fields.selectedcomponents,
        this = (BattlePerformanceCommandCard_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                   v129,
                                                   (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_BattleCommandComponent___),
        !selectedcomponents) )
  {
LABEL_78:
    sub_B170D4();
  }
  v136 = (System_Int32_array **)this;
  if ( this )
  {
    this = (BattlePerformanceCommandCard_o *)sub_B170BC(this, selectedcomponents->obj.klass->_1.element_class);
    if ( !this )
    {
LABEL_80:
      sub_B170F4(this);
      sub_B170A0();
    }
  }
  if ( selectedcomponents->max_length <= 3 )
  {
LABEL_79:
    sub_B17100(this, method, v2);
    sub_B170A0();
  }
  selectedcomponents->m_Items[3] = (BattleCommandComponent_o *)v136;
  sub_B16F98((BattleServantConfConponent_o *)&selectedcomponents->m_Items[3], v136, v2, v131, v132, v133, v134, v135);
  v138 = (System_Int32_array **)sub_B17014(int___TypeInfo, 9LL, v137);
  v3->fields.selectcommand = (struct System_Int32_array *)v138;
  sub_B16F98((BattleServantConfConponent_o *)&v3->fields.selectcommand, v138, v139, v140, v141, v142, v143, v144);
  v3->fields.drawcount = 0;
}


void __fastcall BattlePerformanceCommandCard__endCloseCommandAssistDetailWindow(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *commandfsm; // x0

  if ( (byte_40FC2B5 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_3105, method);
    byte_40FC2B5 = 1;
  }
  commandfsm = this->fields.commandfsm;
  if ( !commandfsm )
    sub_B170D4();
  PlayMakerFSM__SendEvent(commandfsm, (System_String_o *)StringLiteral_3105, 0LL);
}


void __fastcall BattlePerformanceCommandCard__endCloseSealedWindow(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *commandfsm; // x0

  if ( (byte_40FC2AF & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_3105, method);
    byte_40FC2AF = 1;
  }
  commandfsm = this->fields.commandfsm;
  if ( !commandfsm )
    sub_B170D4();
  PlayMakerFSM__SendEvent(commandfsm, (System_String_o *)StringLiteral_3105, 0LL);
}


void __fastcall BattlePerformanceCommandCard__endCloseTdConfWindow(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *commandfsm; // x0

  if ( (byte_40FC2B2 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_3105, method);
    byte_40FC2B2 = 1;
  }
  commandfsm = this->fields.commandfsm;
  if ( !commandfsm )
    sub_B170D4();
  PlayMakerFSM__SendEvent(commandfsm, (System_String_o *)StringLiteral_3105, 0LL);
}


void __fastcall BattlePerformanceCommandCard__endComboEffect(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  BattleLogic_o *logic; // x0

  if ( (byte_40FC29D & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_5481, method);
    byte_40FC29D = 1;
  }
  logic = this->fields.logic;
  if ( !logic )
    sub_B170D4();
  BattleLogic__sendFsmEvent(logic, (System_String_o *)StringLiteral_5481, 0LL);
}


void __fastcall BattlePerformanceCommandCard__endMoveCard(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  struct BattleCommandComponent_array *commandCompArray; // x8
  __int64 v5; // x20
  int max_length; // w9
  BattleCommandComponent_o *v7; // x0
  struct BattlePerformance_o *perf; // x8
  BattlePerformanceStatus_o *statusPerf; // x0
  struct BattlePerformance_o *v10; // x8
  BattlePerformanceStatus_o *v11; // x0
  struct BattleCommandComponent_array *v12; // x8
  __int64 v13; // x20
  int v14; // w9
  il2cpp_array_size_t v15; // w21
  BattleCommandComponent_o *v16; // x0
  struct BattleCommandComponent_array *v17; // x8
  BattleCommandComponent_o *v18; // x0
  const MethodInfo *v19; // x1
  const MethodInfo *v20; // x1

  commandCompArray = this->fields.commandCompArray;
  this->fields.isPlayingMoveCard = 0;
  if ( !commandCompArray )
    goto LABEL_25;
  v5 = 0LL;
  while ( (unsigned int)v5 <= 4 )
  {
    max_length = commandCompArray->max_length;
    if ( (int)v5 >= max_length )
      break;
    if ( (unsigned int)v5 >= max_length )
    {
LABEL_27:
      sub_B17100(this, method, v2);
      sub_B170A0();
    }
    v7 = commandCompArray->m_Items[v5];
    if ( v7 )
    {
      if ( v7->fields.selectflg )
        BattleCommandComponent__updateSelectedEffect(v7, 0LL);
      else
        BattleCommandComponent__startMoveFloat(v7, 0LL);
      commandCompArray = this->fields.commandCompArray;
      ++v5;
      if ( commandCompArray )
        continue;
    }
    goto LABEL_25;
  }
  perf = this->fields.perf;
  if ( !perf
    || (statusPerf = perf->fields.statusPerf) == 0LL
    || (BattlePerformanceStatus__updateCriticalPoint(statusPerf, -1, 0, 0LL), (v10 = this->fields.perf) == 0LL)
    || (v11 = v10->fields.statusPerf) == 0LL
    || (BattlePerformanceStatus__SetActiveTotalCriticalStar(v11, 1, 0LL), (v12 = this->fields.commandCompArray) == 0LL) )
  {
LABEL_25:
    sub_B170D4();
  }
  v13 = 4LL;
  while ( 1 )
  {
    v14 = v12->max_length;
    v15 = v13 - 4;
    if ( (int)v13 - 4 >= v14 )
      break;
    if ( v15 >= v14 )
      goto LABEL_27;
    v16 = (BattleCommandComponent_o *)*((_QWORD *)&v12->obj.klass + v13);
    if ( v16 )
    {
      BattleCommandComponent__setTouchFlg(v16, 1, 0LL);
      v17 = this->fields.commandCompArray;
      if ( v17 )
      {
        if ( v15 >= v17->max_length )
          goto LABEL_27;
        v18 = (BattleCommandComponent_o *)*((_QWORD *)&v17->obj.klass + v13);
        if ( v18 )
        {
          BattleCommandComponent__ResetCardBuffIconAlphaAnim(v18, 0LL);
          v12 = this->fields.commandCompArray;
          ++v13;
          if ( v12 )
            continue;
        }
      }
    }
    goto LABEL_25;
  }
  BattlePerformanceCommandCard__updateCardFix(this, method);
  BattlePerformanceCommandCard__SetCommandCardTypeChangeBuff(this, v19);
  BattlePerformanceCommandCard__updateTDTypeChange(this, v20);
}


void __fastcall BattlePerformanceCommandCard__endOpenCommandCard(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Component_o *parent; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *Component_srcLineSprite; // x19

  if ( (byte_40FC280 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_UIPanel___, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v3);
    byte_40FC280 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_13;
  parent = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent(transform, 0LL);
  if ( !parent )
    goto LABEL_13;
  gameObject = UnityEngine_Component__get_gameObject(parent, 0LL);
  if ( !gameObject )
    goto LABEL_13;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      gameObject,
                                                      (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UIPanel___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(Component_srcLineSprite, 0LL, 0LL) )
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
    sub_B170D4();
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
  __int64 v2; // x2
  struct BattleCommandComponent_array *commandCompArray; // x8
  __int64 v5; // x20
  int max_length; // w9
  BattleCommandComponent_o *v7; // x0

  commandCompArray = this->fields.commandCompArray;
  if ( !commandCompArray )
LABEL_7:
    sub_B170D4();
  v5 = 0LL;
  while ( 1 )
  {
    max_length = commandCompArray->max_length;
    if ( (int)v5 >= max_length )
      break;
    if ( (unsigned int)v5 >= max_length )
    {
      sub_B17100(this, method, v2);
      sub_B170A0();
    }
    v7 = commandCompArray->m_Items[v5];
    if ( v7 )
    {
      BattleCommandComponent__hideOutCard(v7, 0LL);
      commandCompArray = this->fields.commandCompArray;
      ++v5;
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
  BattlePerformance_o *perf; // x0
  struct System_Collections_Generic_List_GameObject__o *v12; // x0
  __int64 PassStarCount; // x0
  const MethodInfo *v14; // x1
  __int64 v15; // x2
  char v16; // w22
  unsigned int v17; // w24
  struct BattleCommandComponent_array *commandCompArray; // x8
  Il2CppClass **v19; // x8
  Il2CppClass *v20; // x20
  __int64 v21; // x3
  __int64 v22; // x4
  int v23; // w21
  int j; // w25
  struct UnityEngine_Transform_array *commandTransformArray; // x8
  UnityEngine_Transform_o *v26; // x22
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v27; // x23
  const MethodInfo *v28; // x3
  System_Collections_Generic_List_Enumerator_T__o v31; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o i; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_40FC2A6 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_GameObject___ctor__, method);
    sub_B16FFC(&System_Action_GameObject__TypeInfo, v3);
    sub_B16FFC(&Method_BattleCommandComponent_addCriticalBuff__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__Clear__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v9);
    byte_40FC2A6 = 1;
  }
  memset(&i, 0, sizeof(i));
  aubelist = this->fields.aubelist;
  if ( !aubelist )
    goto LABEL_24;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v31,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)aubelist,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  for ( i = v31;
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
          &i,
          (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
        BattlePerformance__destroyInstantiate(perf, (UnityEngine_GameObject_o *)i.fields.current, 0LL) )
  {
    perf = this->fields.perf;
    if ( !perf )
      sub_B170D4();
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &i,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  v12 = this->fields.aubelist;
  if ( !v12 )
LABEL_24:
    sub_B170D4();
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)v12,
    (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_GameObject__Clear__);
  v16 = 0;
  v17 = 0;
  do
  {
    commandCompArray = this->fields.commandCompArray;
    if ( !commandCompArray )
      goto LABEL_24;
    if ( v17 >= commandCompArray->max_length )
    {
LABEL_25:
      sub_B17100(PassStarCount, v14, v15);
      sub_B170A0();
    }
    v19 = &commandCompArray->obj.klass + (int)v17;
    v20 = v19[4];
    if ( !v20 )
      goto LABEL_24;
    PassStarCount = BattleCommandComponent__GetPassStarCount((BattleCommandComponent_o *)v19[4], 0LL);
    if ( (int)PassStarCount >= 1 )
    {
      v23 = PassStarCount;
      for ( j = 0; j < v23; ++j )
      {
        commandTransformArray = this->fields.commandTransformArray;
        if ( !commandTransformArray )
          goto LABEL_24;
        if ( v17 >= commandTransformArray->max_length )
          goto LABEL_25;
        v26 = commandTransformArray->m_Items[v17];
        v27 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B170CC(
                                                                                     System_Action_GameObject__TypeInfo,
                                                                                     v14,
                                                                                     v15,
                                                                                     v21,
                                                                                     v22);
        System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
          v27,
          (Il2CppObject *)v20,
          Method_BattleCommandComponent_addCriticalBuff__,
          (const MethodInfo_24B7310 *)Method_System_Action_GameObject___ctor__);
        BattlePerformanceCommandCard__MoveNotTween(this, v26, (System_Action_GameObject__o *)v27, v28);
      }
      v16 = 1;
    }
    BattleCommandComponent__ResetPassStarCount((BattleCommandComponent_o *)v20, 0LL);
    if ( BYTE4(v20->vtable[4].method) )
      BattleCommandComponent__updateSelectedEffect((BattleCommandComponent_o *)v20, 0LL);
  }
  while ( v17++ < 4 );
  BattlePerformanceCommandCard__updateBuffIcon(this, v14);
  return v16 & 1;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *__fastcall BattlePerformanceCommandCard__getBattleCommandCardObject(
        BattlePerformanceCommandCard_o *this,
        int32_t actionIndex,
        const MethodInfo *method)
{
  struct BattleCommandComponent_array *selectedcomponents; // x8
  int32_t max_length; // w9
  UnityEngine_Component_o *v5; // x0

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
        sub_B17100(this, *(_QWORD *)&actionIndex, method);
        sub_B170A0();
      }
      v5 = (UnityEngine_Component_o *)selectedcomponents->m_Items[actionIndex];
      if ( v5 )
        return UnityEngine_Component__get_gameObject(v5, 0LL);
LABEL_9:
      sub_B170D4();
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

  if ( (byte_40FC29E & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_18159, method);
    sub_B16FFC(&StringLiteral_18162, v3);
    sub_B16FFC(&StringLiteral_18161, v4);
    sub_B16FFC(&StringLiteral_18163, v5);
    sub_B16FFC(&StringLiteral_18160, v6);
    byte_40FC29E = 1;
  }
  perf = this->fields.perf;
  if ( !perf || (data = perf->fields.data) == 0LL || (combodata = data->fields.combodata) == 0LL )
    sub_B170D4();
  flash = combodata->fields.flash;
  samecount = combodata->fields.samecount;
  if ( flash )
  {
    if ( samecount == 2 )
    {
      v12 = &StringLiteral_18161;
    }
    else if ( samecount == 3 )
    {
      v12 = (__int64 *)&StringLiteral_18162;
    }
    else
    {
      v12 = (__int64 *)&StringLiteral_18163;
    }
    return (System_String_o *)*v12;
  }
  if ( samecount == 2 )
  {
    v12 = &StringLiteral_18159;
    return (System_String_o *)*v12;
  }
  if ( samecount == 3 )
    return (System_String_o *)StringLiteral_18160;
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

  if ( (byte_40FC2BE & 1) == 0 )
  {
    sub_B16FFC(&FSUtility_TypeInfo, method);
    byte_40FC2BE = 1;
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

  if ( (byte_40FC2BF & 1) == 0 )
  {
    sub_B16FFC(&FSUtility_TypeInfo, method);
    byte_40FC2BF = 1;
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
  __int64 v6; // x2
  int v7; // s0
  UnityEngine_Rect_array *v11; // x19
  float x; // s8
  float v13; // s4
  UnityEngine_Rect_o v15; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v3 = this;
  if ( (byte_40FC2BD & 1) == 0 )
  {
    this = (BattlePerformanceCommandCard_o *)sub_B16FFC(&FSUtility_TypeInfo, method);
    byte_40FC2BD = 1;
  }
  v4 = BattlePerformanceCommandCard__FSTutorialSquareCard(this, v3->fields.TutorialSquare32, v2);
  if ( !v4 )
    sub_B170D4();
  v11 = v4;
  if ( v4->max_length <= 1 )
  {
    sub_B17100(v4, v5, v6);
    sub_B170A0();
  }
  x = UnityEngine_Rect__get_x(*(UnityEngine_Rect_o *)&v7, (const MethodInfo *)&v4->m_Items[1].fields.m_YMin);
  if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  v15.fields.m_XMin = x + FSUtility__GetOffsetX(88.0, 1, 0LL);
  UnityEngine_Rect__set_x(v15, v13, (const MethodInfo *)&v11->m_Items[1].fields.m_YMin);
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
  __int64 v4; // x1
  _BOOL8 v5; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  struct UnityEngine_GameObject_array *p_commandlist; // x8
  __int64 v9; // x21
  unsigned __int64 max_length; // x9
  unsigned __int64 v11; // x23
  UnityEngine_Object_o *v12; // x20
  struct UnityEngine_GameObject_array *v13; // x8
  UnityEngine_GameObject_o *v14; // x0
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Component_o *parent; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_40FC283 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    sub_B16FFC(&StringLiteral_16281, v4);
    byte_40FC283 = 1;
  }
  BattlePerformanceCommandCard__playAnimation(this, (System_String_o *)StringLiteral_16281, v2);
  p_commandlist = this->fields.p_commandlist;
  if ( p_commandlist )
  {
    v9 = 4LL;
    while ( 1 )
    {
      max_length = p_commandlist->max_length;
      v11 = v9 - 4;
      if ( v9 - 4 >= (int)max_length )
        break;
      if ( v11 >= max_length )
        goto LABEL_21;
      v12 = (UnityEngine_Object_o *)*((_QWORD *)&p_commandlist->obj.klass + v9);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v5 = UnityEngine_Object__op_Inequality(v12, 0LL, 0LL);
      if ( v5 )
      {
        v13 = this->fields.p_commandlist;
        if ( !v13 )
          goto LABEL_19;
        if ( v11 >= v13->max_length )
        {
LABEL_21:
          sub_B17100(v5, v6, v7);
          sub_B170A0();
        }
        v14 = (UnityEngine_GameObject_o *)*((_QWORD *)&v13->obj.klass + v9);
        if ( !v14
          || (transform = UnityEngine_GameObject__get_transform(v14, 0LL)) == 0LL
          || (parent = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent(transform, 0LL)) == 0LL
          || (gameObject = UnityEngine_Component__get_gameObject(parent, 0LL)) == 0LL )
        {
LABEL_19:
          sub_B170D4();
        }
        UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
      }
      p_commandlist = this->fields.p_commandlist;
      ++v9;
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
  __int64 v2; // x2
  BattlePerformanceCommandCard_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x1
  struct UnityEngine_GameObject_array *p_commandlist; // x8
  __int64 v7; // x22
  il2cpp_array_size_t max_length; // w9
  il2cpp_array_size_t v9; // w21
  UnityEngine_GameObject_o *v10; // x0
  UnityEngine_Object_o *Component_srcLineSprite; // x20
  struct BattleCommandComponent_array *commandCompArray; // x8
  BattleCommandComponent_o *v13; // x20
  struct UnityEngine_GameObject_array *v14; // x8
  UnityEngine_GameObject_o *v15; // x0
  UIWidget_o *v16; // x21
  int v17; // s0

  v3 = this;
  if ( (byte_40FC284 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_TweenColor___, method);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_UIWidget___, v4);
    this = (BattlePerformanceCommandCard_o *)sub_B16FFC(&UnityEngine_Object_TypeInfo, v5);
    byte_40FC284 = 1;
  }
  p_commandlist = v3->fields.p_commandlist;
  if ( !p_commandlist )
LABEL_27:
    sub_B170D4();
  v7 = 9LL;
  while ( 1 )
  {
    max_length = p_commandlist->max_length;
    v9 = v7 - 4;
    if ( (int)v7 - 4 >= (int)(max_length - 1) )
      break;
    if ( v9 >= max_length )
      goto LABEL_29;
    v10 = (UnityEngine_GameObject_o *)*((_QWORD *)&p_commandlist->obj.klass + v7);
    if ( !v10 )
      goto LABEL_27;
    Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                        v10,
                                                        (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_TweenColor___);
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
      UnityEngine_Object__DestroyImmediate_34809676(Component_srcLineSprite, 0LL);
    }
    commandCompArray = v3->fields.commandCompArray;
    if ( !commandCompArray )
      goto LABEL_27;
    if ( v9 >= commandCompArray->max_length )
      goto LABEL_29;
    v13 = (BattleCommandComponent_o *)*((_QWORD *)&commandCompArray->obj.klass + v7);
    if ( !v13 )
      goto LABEL_27;
    this = (BattlePerformanceCommandCard_o *)BattleCommandComponent__checkObject(
                                               *((BattleCommandComponent_o **)&commandCompArray->obj.klass + v7),
                                               0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v14 = v3->fields.p_commandlist;
      if ( !v14 )
        goto LABEL_27;
      if ( v9 >= v14->max_length )
      {
LABEL_29:
        sub_B17100(this, method, v2);
        sub_B170A0();
      }
      v15 = (UnityEngine_GameObject_o *)*((_QWORD *)&v14->obj.klass + v7);
      if ( !v15 )
        goto LABEL_27;
      v16 = (UIWidget_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                            v15,
                            (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
      *(UnityEngine_Color_o *)&v17 = UnityEngine_Color__get_white(0LL);
      if ( !v16 )
        goto LABEL_27;
      UIWidget__set_color(v16, *(UnityEngine_Color_o *)&v17, 0LL);
      if ( !v13->fields.selectflg )
        BattleCommandComponent__startMoveFloat(v13, 0LL);
    }
    p_commandlist = v3->fields.p_commandlist;
    ++v7;
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
  TweenColor_o *v6; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  float v9; // s8
  __int64 v10; // x22
  struct UnityEngine_GameObject_array *p_commandlist; // x8
  UnityEngine_GameObject_o *v12; // x21
  float v13; // s0
  float v14; // s1
  float v15; // s2
  float v16; // s3
  float v17; // s5
  float v18; // s6
  float v19; // s7
  struct BattleCommandComponent_array *commandCompArray; // x8
  BattleCommandComponent_o *v21; // x0
  UnityEngine_Color_o v22; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4

  if ( !motionSkip )
LABEL_13:
    sub_B170D4();
  LODWORD(v9) = COERCE_UNSIGNED_INT128(
                  ((long double (__fastcall *)(BaseMotionSkip_o *, void *, float))motionSkip->klass->vtable._11_ConvertSkipDuration.method)(
                    motionSkip,
                    motionSkip->klass[1]._1.image,
                    0.3));
  v10 = 0LL;
  do
  {
    p_commandlist = this->fields.p_commandlist;
    if ( !p_commandlist )
      goto LABEL_13;
    if ( (unsigned int)v10 >= p_commandlist->max_length )
      goto LABEL_14;
    v12 = p_commandlist->m_Items[v10];
    *(UnityEngine_Color_o *)&v13 = flg ? UnityEngine_Color__get_white(0LL) : UnityEngine_Color__get_clear(0LL);
    v17 = v14;
    v18 = v15;
    v19 = v16;
    v22.fields.r = v13;
    v22.fields.g = v17;
    v22.fields.b = v18;
    v22.fields.a = v19;
    v6 = TweenColor__Begin(v12, v9, v22, 0LL);
    commandCompArray = this->fields.commandCompArray;
    if ( !commandCompArray )
      goto LABEL_13;
    if ( (unsigned int)v10 >= commandCompArray->max_length )
    {
LABEL_14:
      sub_B17100(v6, v7, v8);
      sub_B170A0();
    }
    v21 = commandCompArray->m_Items[v10];
    if ( !v21 )
      goto LABEL_13;
    BattleCommandComponent__CardEffectSetActive(v21, flg, 0LL);
    ++v10;
  }
  while ( (unsigned int)(v10 - 1) < 4 );
}


void __fastcall BattlePerformanceCommandCard__initHighSpeedMode(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  struct BattlePerformance_o *perf; // x8
  BattleData_o *data; // x0
  const MethodInfo *v5; // x2
  int32_t v6; // w1
  const MethodInfo *v7; // x2

  perf = this->fields.perf;
  if ( !perf || (data = perf->fields.data) == 0LL )
    sub_B170D4();
  if ( BattleData__isTutorial(data, 0LL) )
  {
    BattlePerformanceCommandCard__SetCommandPhaseButtonActive(this, 0, v5);
  }
  else
  {
    BattlePerformanceCommandCard__SetCommandPhaseButtonActive(this, 1, v5);
    BattlePerformanceCommandCard__updateHighSpeedObject(this, v6, v7);
  }
}


void __fastcall BattlePerformanceCommandCard__initOpen(BattlePerformanceCommandCard_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *commandfsm; // x0

  if ( (byte_40FC279 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_7268, method);
    byte_40FC279 = 1;
  }
  commandfsm = this->fields.commandfsm;
  if ( !commandfsm )
    sub_B170D4();
  PlayMakerFSM__SendEvent(commandfsm, (System_String_o *)StringLiteral_7268, 0LL);
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
  struct System_Collections_Generic_List_GameObject__o *aubelist; // x0
  struct BattleData_o *Bdata; // x8
  int criticalstars; // w8
  int v21; // w23
  signed int v22; // w28
  BattlePerformance_o *perf; // x0
  UnityEngine_GameObject_o *EffectInstantiate; // x0
  UnityEngine_GameObject_o *v25; // x20
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *v27; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t layer; // w0
  UnityEngine_Transform_o *v30; // x0
  UnityEngine_Transform_o *v31; // x21
  int v32; // s0
  UnityEngine_Rigidbody_o *Component_srcLineSprite; // x0
  __int64 v36; // x2
  __int64 v37; // x0
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  System_Object_array *v44; // x21
  __int64 v45; // x0
  System_Int32_array **v46; // x1
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  System_Int32_array **v52; // x22
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  System_Int32_array **v63; // x22
  System_String_array **v64; // x3
  System_Boolean_array **v65; // x4
  System_Int32_array **v66; // x5
  System_Int32_array *v67; // x6
  System_Int32_array *v68; // x7
  System_String_array **v69; // x3
  System_Boolean_array **v70; // x4
  System_Int32_array **v71; // x5
  System_Int32_array *v72; // x6
  System_Int32_array *v73; // x7
  System_Int32_array **v74; // x22
  System_String_array **v75; // x3
  System_Boolean_array **v76; // x4
  System_Int32_array **v77; // x5
  System_Int32_array *v78; // x6
  System_Int32_array *v79; // x7
  System_String_array **v80; // x3
  System_Boolean_array **v81; // x4
  System_Int32_array **v82; // x5
  System_Int32_array *v83; // x6
  System_Int32_array *v84; // x7
  System_Int32_array **v85; // x22
  System_String_array **v86; // x3
  System_Boolean_array **v87; // x4
  System_Int32_array **v88; // x5
  System_Int32_array *v89; // x6
  System_Int32_array *v90; // x7
  System_String_array **v91; // x3
  System_Boolean_array **v92; // x4
  System_Int32_array **v93; // x5
  System_Int32_array *v94; // x6
  System_Int32_array *v95; // x7
  System_Int32_array **v96; // x22
  System_String_array **v97; // x3
  System_Boolean_array **v98; // x4
  System_Int32_array **v99; // x5
  System_Int32_array *v100; // x6
  System_Int32_array *v101; // x7
  System_String_array **v102; // x3
  System_Boolean_array **v103; // x4
  System_Int32_array **v104; // x5
  System_Int32_array *v105; // x6
  System_Int32_array *v106; // x7
  System_Int32_array **v107; // x22
  System_Collections_Hashtable_o *v108; // x0
  struct System_Collections_Generic_List_GameObject__o *v109; // x0
  struct BattlePerformance_o *v110; // x8
  BattlePerformanceStatus_o *statusPerf; // x0
  char v112[4]; // [xsp+0h] [xbp-70h] BYREF
  int v113; // [xsp+4h] [xbp-6Ch] BYREF
  int v114; // [xsp+8h] [xbp-68h] BYREF
  float v115; // [xsp+Ch] [xbp-64h] BYREF
  int v116; // [xsp+18h] [xbp-58h] BYREF
  int32_t v117; // [xsp+1Ch] [xbp-54h] BYREF

  if ( (byte_40FC2A2 & 1) == 0 )
  {
    sub_B16FFC(&bool_TypeInfo, method);
    sub_B16FFC(&iTween_EaseType_TypeInfo, v3);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_Rigidbody___, v4);
    sub_B16FFC(&int_TypeInfo, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__Add__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__Clear__, v7);
    sub_B16FFC(&object___TypeInfo, v8);
    sub_B16FFC(&float_TypeInfo, v9);
    sub_B16FFC(&StringLiteral_23222, v10);
    sub_B16FFC(&StringLiteral_18046, v11);
    sub_B16FFC(&StringLiteral_22584, v12);
    sub_B16FFC(&StringLiteral_17881, v13);
    sub_B16FFC(&StringLiteral_23314, v14);
    sub_B16FFC(&StringLiteral_19885, v15);
    sub_B16FFC(&StringLiteral_18180, v16);
    sub_B16FFC(&iTween_TypeInfo, v17);
    byte_40FC2A2 = 1;
  }
  aubelist = this->fields.aubelist;
  if ( !aubelist )
    goto LABEL_73;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)aubelist,
    (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_GameObject__Clear__);
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
    perf = this->fields.perf;
    if ( !perf )
      goto LABEL_73;
    EffectInstantiate = BattlePerformance__getEffectInstantiate(perf, 4, this->fields.criticalpointTr, 0LL);
    if ( !EffectInstantiate )
      goto LABEL_73;
    v25 = EffectInstantiate;
    transform = UnityEngine_GameObject__get_transform(EffectInstantiate, 0LL);
    if ( !this->fields.criticalpointTr )
      goto LABEL_73;
    v27 = transform;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.criticalpointTr, 0LL);
    if ( !gameObject )
      goto LABEL_73;
    layer = UnityEngine_GameObject__get_layer(gameObject, 0LL);
    TransformHelper__ChangeChildsLayer(v27, layer, 0LL);
    v30 = UnityEngine_GameObject__get_transform(v25, 0LL);
    if ( !v30 )
      goto LABEL_73;
    UnityEngine_Transform__set_parent(v30, this->fields.criticalpointTr, 0LL);
    v31 = UnityEngine_GameObject__get_transform(v25, 0LL);
    *(UnityEngine_Vector3_o *)&v32 = UnityEngine_Vector3__get_zero(0LL);
    if ( !v31 )
      goto LABEL_73;
    UnityEngine_Transform__set_localPosition(v31, *(UnityEngine_Vector3_o *)&v32, 0LL);
    Component_srcLineSprite = (UnityEngine_Rigidbody_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                           v25,
                                                           (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_Rigidbody___);
    if ( !Component_srcLineSprite )
      goto LABEL_73;
    UnityEngine_Rigidbody__set_useGravity(Component_srcLineSprite, 0, 0LL);
    v37 = sub_B17014(object___TypeInfo, 12LL, v36);
    if ( !v37 )
      goto LABEL_73;
    v44 = (System_Object_array *)v37;
    v45 = StringLiteral_23222;
    if ( StringLiteral_23222 )
    {
      v45 = sub_B170BC(StringLiteral_23222, v44->obj.klass->_1.element_class);
      if ( !v45 )
        goto LABEL_74;
      v46 = (System_Int32_array **)StringLiteral_23222;
    }
    else
    {
      v46 = 0LL;
    }
    if ( !v44->max_length )
      goto LABEL_72;
    v44->m_Items[0] = (Il2CppObject *)v46;
    sub_B16F98((BattleServantConfConponent_o *)v44->m_Items, v46, v38, v39, v40, v41, v42, v43);
    v117 = UnityEngine_Random__Range_34843248(-780, 110, 0LL);
    v45 = j_il2cpp_value_box_0(int_TypeInfo, &v117);
    v52 = (System_Int32_array **)v45;
    if ( v45 )
    {
      v45 = sub_B170BC(v45, v44->obj.klass->_1.element_class);
      if ( !v45 )
      {
LABEL_74:
        sub_B170F4(v45);
        sub_B170A0();
      }
    }
    if ( v44->max_length <= 1 )
      goto LABEL_72;
    v44->m_Items[1] = (Il2CppObject *)v52;
    sub_B16F98((BattleServantConfConponent_o *)&v44->m_Items[1], v52, v38, v47, v48, v49, v50, v51);
    v45 = StringLiteral_23314;
    if ( StringLiteral_23314 )
    {
      v45 = sub_B170BC(StringLiteral_23314, v44->obj.klass->_1.element_class);
      if ( !v45 )
        goto LABEL_74;
      v46 = (System_Int32_array **)StringLiteral_23314;
    }
    else
    {
      v46 = 0LL;
    }
    if ( v44->max_length <= 2 )
      goto LABEL_72;
    v44->m_Items[2] = (Il2CppObject *)v46;
    sub_B16F98((BattleServantConfConponent_o *)&v44->m_Items[2], v46, v38, v53, v54, v55, v56, v57);
    v116 = 500;
    v45 = j_il2cpp_value_box_0(int_TypeInfo, &v116);
    v63 = (System_Int32_array **)v45;
    if ( v45 )
    {
      v45 = sub_B170BC(v45, v44->obj.klass->_1.element_class);
      if ( !v45 )
        goto LABEL_74;
    }
    if ( v44->max_length <= 3 )
      goto LABEL_72;
    v44->m_Items[3] = (Il2CppObject *)v63;
    sub_B16F98((BattleServantConfConponent_o *)&v44->m_Items[3], v63, v38, v58, v59, v60, v61, v62);
    v45 = StringLiteral_17881;
    if ( StringLiteral_17881 )
    {
      v45 = sub_B170BC(StringLiteral_17881, v44->obj.klass->_1.element_class);
      if ( !v45 )
        goto LABEL_74;
      v46 = (System_Int32_array **)StringLiteral_17881;
    }
    else
    {
      v46 = 0LL;
    }
    if ( v44->max_length <= 4 )
      goto LABEL_72;
    v44->m_Items[4] = (Il2CppObject *)v46;
    sub_B16F98((BattleServantConfConponent_o *)&v44->m_Items[4], v46, v38, v64, v65, v66, v67, v68);
    v115 = UnityEngine_Random__Range(0.0, 0.3, 0LL);
    v45 = j_il2cpp_value_box_0(float_TypeInfo, &v115);
    v74 = (System_Int32_array **)v45;
    if ( v45 )
    {
      v45 = sub_B170BC(v45, v44->obj.klass->_1.element_class);
      if ( !v45 )
        goto LABEL_74;
    }
    if ( v44->max_length <= 5 )
      goto LABEL_72;
    v44->m_Items[5] = (Il2CppObject *)v74;
    sub_B16F98((BattleServantConfConponent_o *)&v44->m_Items[5], v74, v38, v69, v70, v71, v72, v73);
    v45 = StringLiteral_22584;
    if ( StringLiteral_22584 )
    {
      v45 = sub_B170BC(StringLiteral_22584, v44->obj.klass->_1.element_class);
      if ( !v45 )
        goto LABEL_74;
      v46 = (System_Int32_array **)StringLiteral_22584;
    }
    else
    {
      v46 = 0LL;
    }
    if ( v44->max_length <= 6 )
      goto LABEL_72;
    v44->m_Items[6] = (Il2CppObject *)v46;
    sub_B16F98((BattleServantConfConponent_o *)&v44->m_Items[6], v46, v38, v75, v76, v77, v78, v79);
    v114 = 1050253722;
    v45 = j_il2cpp_value_box_0(float_TypeInfo, &v114);
    v85 = (System_Int32_array **)v45;
    if ( v45 )
    {
      v45 = sub_B170BC(v45, v44->obj.klass->_1.element_class);
      if ( !v45 )
        goto LABEL_74;
    }
    if ( v44->max_length <= 7 )
      goto LABEL_72;
    v44->m_Items[7] = (Il2CppObject *)v85;
    sub_B16F98((BattleServantConfConponent_o *)&v44->m_Items[7], v85, v38, v80, v81, v82, v83, v84);
    v45 = StringLiteral_18046;
    if ( StringLiteral_18046 )
    {
      v45 = sub_B170BC(StringLiteral_18046, v44->obj.klass->_1.element_class);
      if ( !v45 )
        goto LABEL_74;
      v46 = (System_Int32_array **)StringLiteral_18046;
    }
    else
    {
      v46 = 0LL;
    }
    if ( v44->max_length <= 8 )
      goto LABEL_72;
    v44->m_Items[8] = (Il2CppObject *)v46;
    sub_B16F98((BattleServantConfConponent_o *)&v44->m_Items[8], v46, v38, v86, v87, v88, v89, v90);
    v113 = 1;
    v45 = j_il2cpp_value_box_0(iTween_EaseType_TypeInfo, &v113);
    v96 = (System_Int32_array **)v45;
    if ( v45 )
    {
      v45 = sub_B170BC(v45, v44->obj.klass->_1.element_class);
      if ( !v45 )
        goto LABEL_74;
    }
    if ( v44->max_length <= 9 )
      goto LABEL_72;
    v44->m_Items[9] = (Il2CppObject *)v96;
    sub_B16F98((BattleServantConfConponent_o *)&v44->m_Items[9], v96, v38, v91, v92, v93, v94, v95);
    v45 = StringLiteral_19885;
    if ( StringLiteral_19885 )
    {
      v45 = sub_B170BC(StringLiteral_19885, v44->obj.klass->_1.element_class);
      if ( !v45 )
        goto LABEL_74;
      v46 = (System_Int32_array **)StringLiteral_19885;
    }
    else
    {
      v46 = 0LL;
    }
    if ( v44->max_length <= 0xA )
    {
LABEL_72:
      sub_B17100(v45, v46, v38);
      sub_B170A0();
    }
    v44->m_Items[10] = (Il2CppObject *)v46;
    sub_B16F98((BattleServantConfConponent_o *)&v44->m_Items[10], v46, v38, v97, v98, v99, v100, v101);
    v112[0] = 1;
    v45 = j_il2cpp_value_box_0(bool_TypeInfo, v112);
    v107 = (System_Int32_array **)v45;
    if ( v45 )
    {
      v45 = sub_B170BC(v45, v44->obj.klass->_1.element_class);
      if ( !v45 )
        goto LABEL_74;
    }
    if ( v44->max_length <= 0xB )
      goto LABEL_72;
    v44->m_Items[11] = (Il2CppObject *)v107;
    sub_B16F98((BattleServantConfConponent_o *)&v44->m_Items[11], v107, v38, v102, v103, v104, v105, v106);
    if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
    v108 = iTween__Hash(v44, 0LL);
    iTween__MoveTo_18434272(v25, v108, 0LL);
    v109 = this->fields.aubelist;
    if ( !v109 )
      goto LABEL_73;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v109,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v25,
      (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_GameObject__Add__);
    ++v21;
  }
  while ( v21 < v22 );
  BaseMonoBehaviour__createObject_19257936(
    (BaseMonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_18180,
    this->fields.criticalpointTr,
    0LL,
    0LL);
  v110 = this->fields.perf;
  if ( !v110 || (statusPerf = v110->fields.statusPerf) == 0LL )
LABEL_73:
    sub_B170D4();
  BattlePerformanceStatus__updateCriticalPoint(statusPerf, -1, 0, 0LL);
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
  const MethodInfo *v8; // x2
  UIWidget_o *v9; // x0
  UnityEngine_Component_o *backTacticalButton; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v12; // x2
  const MethodInfo *v13; // x1
  System_Collections_IEnumerator_o *v14; // x0
  __int64 v15; // x0
  const MethodInfo *v16; // x1
  __int64 v17; // x2
  struct BattleCommandComponent_array *commandCompArray; // x8
  __int64 v19; // x20
  int max_length; // w9
  il2cpp_array_size_t v21; // w21
  BattleCommandComponent_o *v22; // x0
  struct BattleCommandComponent_array *v23; // x8
  BattleCommandComponent_o *v24; // x0
  struct BattleCommandComponent_array *v25; // x8
  BattleCommandComponent_o *v26; // x0

  if ( (byte_40FC27F & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, isStatTac);
    sub_B16FFC(&SeManager_TypeInfo, v5);
    sub_B16FFC(&StringLiteral_16279, v6);
    byte_40FC27F = 1;
  }
  maskSprite = (UnityEngine_Object_o *)this->fields.maskSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(maskSprite, 0LL, 0LL) )
  {
    v9 = (UIWidget_o *)this->fields.maskSprite;
    if ( !v9 )
      goto LABEL_28;
    UIWidget__set_depth(v9, -31, 0LL);
  }
  BattlePerformanceCommandCard__playAnimation(this, (System_String_o *)StringLiteral_16279, v8);
  backTacticalButton = (UnityEngine_Component_o *)this->fields.backTacticalButton;
  if ( !backTacticalButton )
    goto LABEL_28;
  gameObject = UnityEngine_Component__get_gameObject(backTacticalButton, 0LL);
  if ( !gameObject )
    goto LABEL_28;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  BattlePerformanceCommandCard__SetBackTacticalButton(this, 1, v12);
  if ( isStatTac )
  {
    v14 = BattlePerformanceCommandCard__waitFallStar(this, v13);
    UnityEngine_MonoBehaviour__StartCoroutine_34804316((UnityEngine_MonoBehaviour_o *)this, v14, 0LL);
  }
  if ( (BYTE3(SeManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SeManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
  SeManager__PlayCommonSe(4, 0LL);
  commandCompArray = this->fields.commandCompArray;
  if ( !commandCompArray )
LABEL_28:
    sub_B170D4();
  v19 = 4LL;
  while ( 1 )
  {
    max_length = commandCompArray->max_length;
    v21 = v19 - 4;
    if ( (int)v19 - 4 >= max_length )
      break;
    if ( v21 >= max_length )
      goto LABEL_30;
    v22 = (BattleCommandComponent_o *)*((_QWORD *)&commandCompArray->obj.klass + v19);
    if ( v22 )
    {
      BattleCommandComponent__setTouchFlg(v22, 0, 0LL);
      v23 = this->fields.commandCompArray;
      if ( v23 )
      {
        if ( v21 >= v23->max_length )
          goto LABEL_30;
        v24 = (BattleCommandComponent_o *)*((_QWORD *)&v23->obj.klass + v19);
        if ( v24 )
        {
          BattleCommandComponent__SetCardBuffAlphaAnimFlag(v24, 0, 0LL);
          v25 = this->fields.commandCompArray;
          if ( v25 )
          {
            if ( v21 >= v25->max_length )
            {
LABEL_30:
              sub_B17100(v15, v16, v17);
              sub_B170A0();
            }
            v26 = (BattleCommandComponent_o *)*((_QWORD *)&v25->obj.klass + v19);
            if ( v26 )
            {
              BattleCommandComponent__SetTreasureDeviceTypeChange(v26, 0, 0, 0LL);
              commandCompArray = this->fields.commandCompArray;
              ++v19;
              if ( commandCompArray )
                continue;
            }
          }
        }
      }
    }
    goto LABEL_28;
  }
  BattlePerformanceCommandCard__updateCardMag(this, v16);
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
  UnityEngine_Transform_o *v15; // x0
  UnityEngine_Object_o *Component_WebViewObject; // x21
  UnityEngine_Object_o *v17; // x20
  SimpleAnimation_State_o *v18; // x0
  SimpleAnimation_State_c *klass; // x8
  SimpleAnimation_State_o *v20; // x20
  unsigned __int64 v21; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 p_method; // x0
  UnityEngine_AnimationState_o *Item; // x0
  UnityEngine_Vector3_o v25; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40FC27A & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_Animation___, name);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_SimpleAnimation___, v5);
    sub_B16FFC(&FSUtility_TypeInfo, v6);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v7);
    sub_B16FFC(&SimpleAnimation_State_TypeInfo, v8);
    sub_B16FFC(&StringLiteral_16281, v9);
    byte_40FC27A = 1;
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
    if ( !System_String__op_Equality(name, (System_String_o *)StringLiteral_16281, 0LL) )
    {
      if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
      OffsetX = FSUtility__GetOffsetX(68.0, 0, 0LL);
    }
    v13 = System_String__op_Equality(name, (System_String_o *)StringLiteral_16281, 0LL);
    if ( v13 )
      v11 = BattlePerformanceCommandCard__FSCardRootOffsetY((BattlePerformanceCommandCard_o *)v13, v14);
    v15 = this->fields.cardRoot;
    if ( !v15 )
      goto LABEL_37;
    v25.fields.y = v11 + this->fields.CARD_ROOT_BASE_Y;
    v25.fields.x = OffsetX + this->fields.CARD_ROOT_BASE_X;
    v25.fields.z = 0.0;
    UnityEngine_Transform__set_localPosition(v15, v25, 0LL);
  }
  Component_WebViewObject = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                      (UnityEngine_Component_o *)this,
                                                      (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
  v17 = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                  (UnityEngine_Component_o *)this,
                                  (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_Animation___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(Component_WebViewObject, 0LL, 0LL) )
  {
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Inequality(v17, 0LL, 0LL) )
      return;
    if ( v17 )
    {
      Item = UnityEngine_Animation__get_Item((UnityEngine_Animation_o *)v17, name, 0LL);
      if ( Item )
      {
        UnityEngine_AnimationState__set_time(Item, 0.0, 0LL);
        UnityEngine_Animation__Play_49744236((UnityEngine_Animation_o *)v17, name, 0LL);
        return;
      }
    }
LABEL_37:
    sub_B170D4();
  }
  if ( !Component_WebViewObject )
    goto LABEL_37;
  v18 = SimpleAnimation__get_Item((SimpleAnimation_o *)Component_WebViewObject, name, 0LL);
  if ( !v18 )
    goto LABEL_37;
  klass = v18->klass;
  v20 = v18;
  if ( *(_WORD *)&v18->klass->_2.bitflags1 )
  {
    v21 = 0LL;
    p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
    {
      ++v21;
      p_offset += 2;
      if ( v21 >= *(unsigned __int16 *)&v18->klass->_2.bitflags1 )
        goto LABEL_26;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 4].method;
  }
  else
  {
LABEL_26:
    p_method = sub_AAFEF8(v18, SimpleAnimation_State_TypeInfo, 4LL);
  }
  (*(void (__fastcall **)(SimpleAnimation_State_o *, _QWORD, float))p_method)(v20, *(_QWORD *)(p_method + 8), 0.0);
  SimpleAnimation__Play_16380456((SimpleAnimation_o *)Component_WebViewObject, name, 0LL);
}


void __fastcall BattlePerformanceCommandCard__playComboEffect(
        BattlePerformanceCommandCard_o *this,
        UnityEngine_GameObject_o *prefab,
        int32_t seName,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Transform_o *transform; // x2

  if ( (byte_40FC298 & 1) == 0 )
  {
    sub_B16FFC(&SeManager_TypeInfo, prefab);
    byte_40FC298 = 1;
  }
  if ( (seName & 0x80000000) == 0 )
  {
    if ( (BYTE3(SeManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SeManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
    SeManager__PlayCommonSe(seName, 0LL);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B170D4();
  transform = UnityEngine_GameObject__get_transform(gameObject, 0LL);
  BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, prefab, transform, 0LL, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceCommandCard__playCommandEffect(
        BattlePerformanceCommandCard_o *this,
        int32_t index,
        bool flg,
        const MethodInfo *method)
{
  struct BattleCommandComponent_array *selectedcomponents; // x8
  int32_t max_length; // w9
  BattleCommandComponent_o *v6; // x0

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
        sub_B17100(this, *(_QWORD *)&index, flg);
        sub_B170A0();
      }
      v6 = selectedcomponents->m_Items[index];
      if ( v6 )
      {
        BattleCommandComponent__playAttackEffect(v6, flg, 0LL);
        return;
      }
LABEL_9:
      sub_B170D4();
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceCommandCard__playNobleCardEffect(
        BattlePerformanceCommandCard_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  struct BattleCommandComponent_array *selectedcomponents; // x8
  __int64 v12; // x0
  System_Int32_array **v13; // x1
  System_String_array **v14; // x2
  struct BattleCommandComponent_array *v15; // x8
  UnityEngine_Object_o *v16; // x21
  struct BattleCommandComponent_array *v17; // x8
  UnityEngine_Component_o *v18; // x0
  UnityEngine_GameObject_o *gameObject; // x21
  __int64 v20; // x2
  __int64 v21; // x0
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_Object_array *v27; // x22
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_Int32_array **npTargetTr; // x23
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  System_Int32_array **v44; // x23
  System_Collections_Hashtable_o *v45; // x0
  struct BattleCommandComponent_array *v46; // x8
  BattleCommandComponent_o *v47; // x0
  int v48; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_40FC29F & 1) == 0 )
  {
    sub_B16FFC(&object___TypeInfo, *(_QWORD *)&index);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v5);
    sub_B16FFC(&SeManager_TypeInfo, v6);
    sub_B16FFC(&float_TypeInfo, v7);
    sub_B16FFC(&StringLiteral_22584, v8);
    sub_B16FFC(&StringLiteral_21419, v9);
    sub_B16FFC(&iTween_TypeInfo, v10);
    byte_40FC29F = 1;
  }
  selectedcomponents = this->fields.selectedcomponents;
  if ( !selectedcomponents )
    goto LABEL_43;
  if ( (index & 0x80000000) == 0 && (signed int)selectedcomponents->max_length > index )
  {
    if ( (BYTE3(SeManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SeManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
    SeManager__PlayCommonSe(14, 0LL);
    v15 = this->fields.selectedcomponents;
    if ( !v15 )
      goto LABEL_43;
    if ( v15->max_length <= index )
      goto LABEL_44;
    v16 = (UnityEngine_Object_o *)v15->m_Items[index];
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v12 = UnityEngine_Object__op_Inequality(v16, 0LL, 0LL);
    if ( (v12 & 1) != 0 )
    {
      v17 = this->fields.selectedcomponents;
      if ( !v17 )
        goto LABEL_43;
      if ( v17->max_length <= index )
        goto LABEL_44;
      v18 = (UnityEngine_Component_o *)v17->m_Items[index];
      if ( !v18 )
        goto LABEL_43;
      gameObject = UnityEngine_Component__get_gameObject(v18, 0LL);
      v21 = sub_B17014(object___TypeInfo, 4LL, v20);
      if ( !v21 )
        goto LABEL_43;
      v27 = (System_Object_array *)v21;
      v12 = StringLiteral_21419;
      if ( StringLiteral_21419 )
      {
        v12 = sub_B170BC(StringLiteral_21419, v27->obj.klass->_1.element_class);
        if ( !v12 )
          goto LABEL_45;
        v13 = (System_Int32_array **)StringLiteral_21419;
      }
      else
      {
        v13 = 0LL;
      }
      if ( !v27->max_length )
        goto LABEL_44;
      v27->m_Items[0] = (Il2CppObject *)v13;
      sub_B16F98((BattleServantConfConponent_o *)v27->m_Items, v13, v14, v22, v23, v24, v25, v26);
      npTargetTr = (System_Int32_array **)this->fields.npTargetTr;
      if ( !npTargetTr || (v12 = sub_B170BC(this->fields.npTargetTr, v27->obj.klass->_1.element_class)) != 0 )
      {
        if ( v27->max_length <= 1 )
          goto LABEL_44;
        v27->m_Items[1] = (Il2CppObject *)npTargetTr;
        sub_B16F98((BattleServantConfConponent_o *)&v27->m_Items[1], npTargetTr, v14, v28, v29, v30, v31, v32);
        v12 = StringLiteral_22584;
        if ( StringLiteral_22584 )
        {
          v12 = sub_B170BC(StringLiteral_22584, v27->obj.klass->_1.element_class);
          if ( !v12 )
            goto LABEL_45;
          v13 = (System_Int32_array **)StringLiteral_22584;
        }
        else
        {
          v13 = 0LL;
        }
        if ( v27->max_length <= 2 )
          goto LABEL_44;
        v27->m_Items[2] = (Il2CppObject *)v13;
        sub_B16F98((BattleServantConfConponent_o *)&v27->m_Items[2], v13, v14, v34, v35, v36, v37, v38);
        v48 = 1056964608;
        v12 = j_il2cpp_value_box_0(float_TypeInfo, &v48);
        v44 = (System_Int32_array **)v12;
        if ( !v12 || (v12 = sub_B170BC(v12, v27->obj.klass->_1.element_class)) != 0 )
        {
          if ( v27->max_length > 3 )
          {
            v27->m_Items[3] = (Il2CppObject *)v44;
            sub_B16F98((BattleServantConfConponent_o *)&v27->m_Items[3], v44, v14, v39, v40, v41, v42, v43);
            if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
            v45 = iTween__Hash(v27, 0LL);
            iTween__MoveTo_18434272(gameObject, v45, 0LL);
            v46 = this->fields.selectedcomponents;
            if ( !v46 )
              goto LABEL_43;
            if ( v46->max_length > index )
            {
              v47 = v46->m_Items[index];
              if ( v47 )
              {
                BattleCommandComponent__playNpAttackEffect(v47, 0.5, 0LL);
                return;
              }
LABEL_43:
              sub_B170D4();
            }
          }
LABEL_44:
          sub_B17100(v12, v13, v14);
          sub_B170A0();
        }
      }
LABEL_45:
      sub_B170F4(v12);
      sub_B170A0();
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
  __int64 v5; // x21
  bool v6; // w20
  int max_length; // w9
  BattleCommandComponent_o *v8; // x0

  selectedcomponents = this->fields.selectedcomponents;
  if ( !selectedcomponents )
LABEL_7:
    sub_B170D4();
  v5 = 0LL;
  v6 = flg;
  while ( 1 )
  {
    max_length = selectedcomponents->max_length;
    if ( (int)v5 >= max_length )
      break;
    if ( (unsigned int)v5 >= max_length )
    {
      sub_B17100(this, flg, method);
      sub_B170A0();
    }
    v8 = selectedcomponents->m_Items[v5];
    if ( v8 )
    {
      BattleCommandComponent__flashType(v8, v6, 0LL);
      selectedcomponents = this->fields.selectedcomponents;
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
  BattleServantData_o *ServantData; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  signed int max_length; // w9
  signed int v12; // w8
  __int64 v13; // x24
  Il2CppClass **v14; // x25
  BattleData_o *Bdata; // x0
  Il2CppClass *v16; // x8
  BattleCommandData_o **v17; // x25
  Il2CppClass *v18; // t1
  struct UnityEngine_Transform_array *commandTransformArray; // x8
  UnityEngine_Transform_o *v20; // x22
  BattleServantData_o *v21; // x21
  int v22; // s0
  struct UnityEngine_Transform_array *v25; // x8
  UnityEngine_Transform_o *v26; // x22
  int v27; // s0
  struct BattleCommandComponent_array *commandCompArray; // x8
  BattleCommandComponent_o *v31; // x0
  struct BattleCommandComponent_array *v32; // x8
  BattleCommandComponent_o *v33; // x0
  struct BattleCommandComponent_array *v34; // x8
  BattleCommandComponent_o *v35; // x0
  struct UnityEngine_GameObject_array *p_commandlist; // x8
  UnityEngine_GameObject_o *v37; // x0
  UIWidget_o *Component_srcLineSprite; // x21
  int v39; // s0
  struct UnityEngine_GameObject_array *v43; // x8
  __int64 v44; // x22
  __int64 v45; // x9
  il2cpp_array_size_t v46; // w20
  struct BattleCommandComponent_array *v47; // x8
  BattleCommandComponent_o *v48; // x0
  struct UnityEngine_GameObject_array *v49; // x8
  UnityEngine_GameObject_o *v50; // x0
  UnityEngine_Object_o *v51; // x20
  UnityEngine_Object_o *v52; // x20
  struct BattleCommandComponent_array *v53; // x8
  UnityEngine_Object_o *v54; // x20
  struct BattleCommandComponent_array *v55; // x8
  BattleCommandComponent_o *v56; // x0

  if ( (byte_40FC27B & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_UITweener___, list);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_UIWidget___, v5);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v6);
    sub_B16FFC(&StringLiteral_16282, v7);
    byte_40FC27B = 1;
  }
  BattlePerformanceCommandCard__playAnimation(this, (System_String_o *)StringLiteral_16282, method);
  if ( !list )
    goto LABEL_67;
  max_length = list->max_length;
  if ( max_length >= 1 )
  {
    v12 = 0;
    while ( v12 < (unsigned int)max_length )
    {
      v13 = v12;
      v14 = &list->obj.klass + v12;
      Bdata = this->fields.Bdata;
      v18 = v14[4];
      v17 = (BattleCommandData_o **)(v14 + 4);
      v16 = v18;
      if ( !v18 )
        goto LABEL_67;
      if ( !Bdata )
        goto LABEL_67;
      ServantData = BattleData__getServantData(Bdata, v16->_1.byval_arg.bits, 0LL);
      commandTransformArray = this->fields.commandTransformArray;
      if ( !commandTransformArray )
        goto LABEL_67;
      if ( (unsigned int)v13 >= commandTransformArray->max_length )
        break;
      v20 = commandTransformArray->m_Items[v13];
      v21 = ServantData;
      *(UnityEngine_Vector3_o *)&v22 = UnityEngine_Vector3__get_zero(0LL);
      if ( !v20 )
        goto LABEL_67;
      UnityEngine_Transform__set_localPosition(v20, *(UnityEngine_Vector3_o *)&v22, 0LL);
      v25 = this->fields.commandTransformArray;
      if ( !v25 )
        goto LABEL_67;
      if ( (unsigned int)v13 >= v25->max_length )
        break;
      v26 = v25->m_Items[v13];
      *(UnityEngine_Vector3_o *)&v27 = UnityEngine_Vector3__get_zero(0LL);
      if ( !v26 )
        goto LABEL_67;
      UnityEngine_Transform__set_localScale(v26, *(UnityEngine_Vector3_o *)&v27, 0LL);
      commandCompArray = this->fields.commandCompArray;
      if ( !commandCompArray )
        goto LABEL_67;
      if ( (unsigned int)v13 >= commandCompArray->max_length || (unsigned int)v13 >= list->max_length )
        break;
      v31 = commandCompArray->m_Items[v13];
      if ( !v31 )
        goto LABEL_67;
      BattleCommandComponent__setData(v31, *v17, v21, 0, 1, 0, 0LL);
      v32 = this->fields.commandCompArray;
      if ( !v32 )
        goto LABEL_67;
      if ( (unsigned int)v13 >= v32->max_length )
        break;
      v33 = v32->m_Items[v13];
      if ( !v33 )
        goto LABEL_67;
      BattleCommandComponent__SetPowerUpCardValue(v33, 0, 0LL);
      v34 = this->fields.commandCompArray;
      if ( !v34 )
        goto LABEL_67;
      if ( (unsigned int)v13 >= v34->max_length || (unsigned int)v13 >= list->max_length )
        break;
      if ( !*v17 )
        goto LABEL_67;
      v35 = v34->m_Items[v13];
      if ( !v35 )
        goto LABEL_67;
      BattleCommandComponent__SetPowerUpCardIcon(v35, (*v17)->fields.commandCardParam, 2, 0, 0LL);
      p_commandlist = this->fields.p_commandlist;
      if ( !p_commandlist )
        goto LABEL_67;
      if ( (unsigned int)v13 >= p_commandlist->max_length )
        break;
      v37 = p_commandlist->m_Items[v13];
      if ( !v37 )
        goto LABEL_67;
      Component_srcLineSprite = (UIWidget_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                v37,
                                                (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
      *(UnityEngine_Color_o *)&v39 = UnityEngine_Color__get_white(0LL);
      if ( !Component_srcLineSprite )
        goto LABEL_67;
      UIWidget__set_color(Component_srcLineSprite, *(UnityEngine_Color_o *)&v39, 0LL);
      max_length = list->max_length;
      v12 = v13 + 1;
      if ( (int)v13 + 1 >= max_length )
        goto LABEL_32;
    }
LABEL_68:
    sub_B17100(ServantData, v9, v10);
    sub_B170A0();
  }
LABEL_32:
  v43 = this->fields.p_commandlist;
  if ( !v43 )
    goto LABEL_67;
  v44 = 4LL;
  while ( 1 )
  {
    v45 = *(_QWORD *)&v43->max_length;
    v46 = v44 - 4;
    if ( (int)v44 - 4 >= (int)v45 )
      break;
    v47 = this->fields.commandCompArray;
    if ( !v47 )
      goto LABEL_67;
    if ( v46 >= v47->max_length )
      goto LABEL_68;
    v48 = (BattleCommandComponent_o *)*((_QWORD *)&v47->obj.klass + v44);
    if ( v48 )
    {
      BattleCommandComponent__setTouchFlg(v48, 0, 0LL);
      v49 = this->fields.p_commandlist;
      if ( v49 )
      {
        if ( v46 >= v49->max_length )
          goto LABEL_68;
        v50 = (UnityEngine_GameObject_o *)*((_QWORD *)&v49->obj.klass + v44);
        if ( v50 )
        {
          v51 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                          v50,
                                          (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UITweener___);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          ServantData = (BattleServantData_o *)UnityEngine_Object__op_Inequality(v51, 0LL, 0LL);
          if ( ((unsigned __int8)ServantData & 1) != 0 )
          {
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            UnityEngine_Object__Destroy_34809464(v51, 0LL);
          }
          v43 = this->fields.p_commandlist;
          ++v44;
          if ( v43 )
            continue;
        }
      }
    }
    goto LABEL_67;
  }
  if ( (unsigned int)v45 <= 8 )
    goto LABEL_68;
  v52 = (UnityEngine_Object_o *)v43->m_Items[8];
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  ServantData = (BattleServantData_o *)UnityEngine_Object__op_Inequality(v52, 0LL, 0LL);
  if ( ((unsigned __int8)ServantData & 1) != 0 )
  {
    v53 = this->fields.commandCompArray;
    if ( !v53 )
      goto LABEL_67;
    if ( v53->max_length <= 8 )
      goto LABEL_68;
    v54 = (UnityEngine_Object_o *)v53->m_Items[8];
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    ServantData = (BattleServantData_o *)UnityEngine_Object__op_Inequality(v54, 0LL, 0LL);
    if ( ((unsigned __int8)ServantData & 1) != 0 )
    {
      v55 = this->fields.commandCompArray;
      if ( v55 )
      {
        if ( v55->max_length <= 8 )
          goto LABEL_68;
        v56 = v55->m_Items[8];
        if ( v56 )
        {
          BattleCommandComponent__setData(v56, 0LL, 0LL, 0, 1, 0, 0LL);
          return;
        }
      }
LABEL_67:
      sub_B170D4();
    }
  }
}


void __fastcall BattlePerformanceCommandCard__resetCommandCard(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  struct UnityEngine_GameObject_array *p_commandlist; // x8
  __int64 v9; // x20
  int max_length; // w9
  il2cpp_array_size_t v11; // w22
  UnityEngine_GameObject_o *v12; // x0
  BattleCommandComponent_o *Component_srcLineSprite; // x0
  struct UnityEngine_GameObject_array *v14; // x8
  UnityEngine_GameObject_o *v15; // x0
  BattleCommandComponent_o *v16; // x0

  if ( (byte_40FC27D & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_BattleCommandComponent___, method);
    sub_B16FFC(&StringLiteral_16282, v4);
    byte_40FC27D = 1;
  }
  BattlePerformanceCommandCard__playAnimation(this, (System_String_o *)StringLiteral_16282, v2);
  p_commandlist = this->fields.p_commandlist;
  if ( !p_commandlist )
LABEL_14:
    sub_B170D4();
  v9 = 9LL;
  while ( 1 )
  {
    max_length = p_commandlist->max_length;
    v11 = v9 - 4;
    if ( (int)v9 - 4 >= max_length )
      break;
    if ( v11 >= max_length )
      goto LABEL_16;
    v12 = (UnityEngine_GameObject_o *)*((_QWORD *)&p_commandlist->obj.klass + v9);
    if ( v12 )
    {
      Component_srcLineSprite = (BattleCommandComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                              v12,
                                                              (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_BattleCommandComponent___);
      if ( Component_srcLineSprite )
      {
        BattleCommandComponent__setTouchFlg(Component_srcLineSprite, 0, 0LL);
        v14 = this->fields.p_commandlist;
        if ( v14 )
        {
          if ( v11 >= v14->max_length )
          {
LABEL_16:
            sub_B17100(v5, v6, v7);
            sub_B170A0();
          }
          v15 = (UnityEngine_GameObject_o *)*((_QWORD *)&v14->obj.klass + v9);
          if ( v15 )
          {
            v16 = (BattleCommandComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                v15,
                                                (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_BattleCommandComponent___);
            if ( v16 )
            {
              BattleCommandComponent__initView(v16, 0LL);
              p_commandlist = this->fields.p_commandlist;
              ++v9;
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
  __int64 v2; // x2
  BattlePerformanceCommandCard_o *v3; // x19
  __int64 v4; // x1
  struct BattleCommandComponent_array *commandCompArray; // x8
  __int64 v6; // x21
  int max_length; // w9
  BattleCommandComponent_o *v8; // x20
  int32_t MarkIndex; // w0
  int32_t v10; // w20
  HutongGames_PlayMaker_Fsm_o *Fsm; // x0
  HutongGames_PlayMaker_FsmVariables_o *variables; // x0
  HutongGames_PlayMaker_FsmInt_o *FsmInt; // x0
  PlayMakerFSM_o *commandfsm; // x0

  v3 = this;
  if ( (byte_40FC2B7 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_20294, method);
    this = (BattlePerformanceCommandCard_o *)sub_B16FFC(&StringLiteral_11581, v4);
    byte_40FC2B7 = 1;
  }
  commandCompArray = v3->fields.commandCompArray;
  if ( !commandCompArray )
    goto LABEL_12;
  v6 = 0LL;
  while ( 1 )
  {
    max_length = commandCompArray->max_length;
    if ( (int)v6 >= max_length )
      return;
    if ( (unsigned int)v6 >= max_length )
    {
      sub_B17100(this, method, v2);
      sub_B170A0();
    }
    v8 = commandCompArray->m_Items[v6];
    if ( !v8 )
      goto LABEL_12;
    if ( !v8->fields.selectflg )
      break;
LABEL_11:
    ++v6;
    if ( !commandCompArray )
      goto LABEL_12;
  }
  this = (BattlePerformanceCommandCard_o *)BattleCommandComponent__getMarkIndex(v8, 0LL);
  if ( ((unsigned int)this & 0x80000000) != 0 )
  {
    commandCompArray = v3->fields.commandCompArray;
    goto LABEL_11;
  }
  MarkIndex = BattleCommandComponent__getMarkIndex(v8, 0LL);
  if ( !v3->fields.commandfsm
    || (v10 = MarkIndex, (Fsm = PlayMakerFSM__get_Fsm(v3->fields.commandfsm, 0LL)) == 0LL)
    || (variables = Fsm->fields.variables) == 0LL
    || (FsmInt = HutongGames_PlayMaker_FsmVariables__GetFsmInt(variables, (System_String_o *)StringLiteral_20294, 0LL)) == 0LL
    || (FsmInt->fields.value = v10, (commandfsm = v3->fields.commandfsm) == 0LL) )
  {
LABEL_12:
    sub_B170D4();
  }
  PlayMakerFSM__SendEvent(commandfsm, (System_String_o *)StringLiteral_11581, 0LL);
}


void __fastcall BattlePerformanceCommandCard__selectCommandCard(
        BattlePerformanceCommandCard_o *this,
        int32_t atcount,
        const MethodInfo *method)
{
  struct BattlePerformance_o *perf; // x8

  BattlePerformanceCommandCard__setCountRemaining(this, atcount, method);
  perf = this->fields.perf;
  if ( !perf )
    sub_B170D4();
  perf->fields.istactical = atcount == 3;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceCommandCard__selectOK(
        BattlePerformanceCommandCard_o *this,
        int32_t markindex,
        const MethodInfo *method)
{
  int32_t v3; // w20
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
  PlayMakerFSM_o *commandfsm; // x0
  __int64 *v29; // x8
  signed int v30; // w10
  __int64 v31; // x28
  Il2CppClass **v32; // x8
  BattleCommandComponent_o *v33; // x21
  BattleCommandSealStatus_o *SealStatus; // x0
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x3
  __int64 v38; // x4
  struct BattleCommandComponent_array *selectedcomponents; // x22
  __int64 v40; // x23
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  Il2CppClass **v46; // x0
  PlayMakerFSM_o *v47; // x0
  HutongGames_PlayMaker_Fsm_o *Fsm; // x0
  HutongGames_PlayMaker_FsmVariables_o *variables; // x22
  System_String_o *v50; // x0
  System_String_o *v51; // x0
  struct UnityEngine_GameObject_array *p_commandlist; // x8
  struct UnityEngine_GameObject_array *v53; // x8
  UnityEngine_GameObject_o *v54; // x22
  __int64 v55; // x0
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  System_Object_array *v61; // x23
  System_String_array **v62; // x3
  System_Boolean_array **v63; // x4
  System_Int32_array **v64; // x5
  System_Int32_array *v65; // x6
  System_Int32_array *v66; // x7
  System_Int32_array **v67; // x24
  System_String_array **v68; // x3
  System_Boolean_array **v69; // x4
  System_Int32_array **v70; // x5
  System_Int32_array *v71; // x6
  System_Int32_array *v72; // x7
  System_String_array **v73; // x3
  System_Boolean_array **v74; // x4
  System_Int32_array **v75; // x5
  System_Int32_array *v76; // x6
  System_Int32_array *v77; // x7
  System_Int32_array **v78; // x24
  System_String_array **v79; // x3
  System_Boolean_array **v80; // x4
  System_Int32_array **v81; // x5
  System_Int32_array *v82; // x6
  System_Int32_array *v83; // x7
  System_String_array **v84; // x3
  System_Boolean_array **v85; // x4
  System_Int32_array **v86; // x5
  System_Int32_array *v87; // x6
  System_Int32_array *v88; // x7
  System_Int32_array **v89; // x24
  System_Collections_Hashtable_o *v90; // x0
  float v91; // s10
  struct UnityEngine_Transform_array *commandTransformArray; // x8
  UnityEngine_Transform_o *v93; // x0
  const MethodInfo *v94; // x3
  int v95; // s0
  struct System_Single_array *COMMAND_STAMP_POS_X; // x8
  int32_t v99; // w1
  const MethodInfo *v100; // x2
  int32_t CommandType; // w0
  const MethodInfo *v102; // x2
  System_Collections_IEnumerator_o *started; // x0
  const MethodInfo *v104; // x1
  int32_t drawcount; // w9
  int32_t maxdrawcount; // w8
  int32_t v107; // w9
  struct System_Int32_array *v108; // x8
  System_Action_o *v109; // x20
  char v110[4]; // [xsp+8h] [xbp-78h] BYREF
  int v111; // [xsp+Ch] [xbp-74h] BYREF
  int v112; // [xsp+18h] [xbp-68h] BYREF
  int32_t targetIndex; // [xsp+1Ch] [xbp-64h] BYREF

  v3 = markindex;
  v4 = this;
  if ( (byte_40FC288 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, *(_QWORD *)&markindex);
    sub_B16FFC(&Method_BattlePerformanceCommandCard__selectOK_b__112_0__, v5);
    sub_B16FFC(&bool_TypeInfo, v6);
    sub_B16FFC(&FSUtility_TypeInfo, v7);
    sub_B16FFC(&int_TypeInfo, v8);
    sub_B16FFC(&object___TypeInfo, v9);
    sub_B16FFC(&float_TypeInfo, v10);
    sub_B16FFC(&StringLiteral_4588, v11);
    sub_B16FFC(&StringLiteral_11580, v12);
    sub_B16FFC(&StringLiteral_2912, v13);
    sub_B16FFC(&StringLiteral_22584, v14);
    sub_B16FFC(&StringLiteral_9741, v15);
    sub_B16FFC(&StringLiteral_23314, v16);
    sub_B16FFC(&StringLiteral_19885, v17);
    this = (BattlePerformanceCommandCard_o *)sub_B16FFC(&iTween_TypeInfo, v18);
    byte_40FC288 = 1;
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
                                               v3,
                                               0LL);
    if ( ((unsigned __int8)this & 1) != 0 && v23->fields.selectflg )
    {
      BattlePerformanceCommandCard__unselectCommandCard(v4, v23, v3, v24);
      commandfsm = v4->fields.commandfsm;
      if ( commandfsm )
      {
        v29 = &StringLiteral_2912;
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
    commandfsm = v4->fields.commandfsm;
    if ( commandfsm )
    {
      v29 = &StringLiteral_4588;
LABEL_103:
      PlayMakerFSM__SendEvent(commandfsm, (System_String_o *)*v29, 0LL);
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
      v107 = drawcount + 1;
      v4->fields.drawcount = v107;
      BattlePerformanceCommandCard__selectCommandCard(v4, maxdrawcount - v107, method);
      v108 = v4->fields.selectcommand;
      if ( !v108 )
        goto LABEL_11;
      if ( targetIndex >= v108->max_length )
      {
LABEL_105:
        sub_B17100(this, *(_QWORD *)&markindex, method);
        sub_B170A0();
      }
      v108->m_Items[targetIndex + 1] = v3;
    }
    commandfsm = v4->fields.commandfsm;
    if ( commandfsm )
    {
      v29 = &StringLiteral_11580;
      goto LABEL_103;
    }
LABEL_11:
    sub_B170D4();
  }
  v30 = 0;
  while ( 1 )
  {
    if ( v30 >= (unsigned int)v21 )
      goto LABEL_105;
    v31 = v30;
    v32 = &commandCompArray->obj.klass + v30;
    v33 = (BattleCommandComponent_o *)v32[4];
    if ( !v33 )
      goto LABEL_11;
    this = (BattlePerformanceCommandCard_o *)BattleCommandComponent__checkMark(
                                               (BattleCommandComponent_o *)v32[4],
                                               v3,
                                               0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
      break;
LABEL_93:
    commandCompArray = v4->fields.commandCompArray;
    if ( !commandCompArray )
      goto LABEL_11;
    LODWORD(v21) = commandCompArray->max_length;
    v30 = v31 + 1;
    if ( (int)v31 + 1 >= (int)v21 )
      goto LABEL_95;
  }
  if ( BattleCommandComponent__get_isSealed(v33, 0LL)
    || BattleCommandComponent__isTreasureDvc(v33, 0LL) && BattleCommandComponent__get_isKindOfDontAction(v33, 0LL) )
  {
    commandfsm = v4->fields.commandfsm;
    if ( commandfsm )
    {
      v29 = &StringLiteral_9741;
      goto LABEL_103;
    }
    goto LABEL_11;
  }
  if ( !BattleCommandComponent__isTreasureDvc(v33, 0LL) )
    goto LABEL_36;
  SealStatus = BattleCommandComponent__get_SealStatus(v33, 0LL);
  if ( !SealStatus )
    goto LABEL_11;
  if ( !BattleCommandSealStatus__get_IsTreasureDeviceError(SealStatus, 0LL) )
  {
LABEL_36:
    v33->fields.selectflg = 1;
    selectedcomponents = v4->fields.selectedcomponents;
    if ( !selectedcomponents )
      goto LABEL_11;
    v40 = targetIndex;
    this = (BattlePerformanceCommandCard_o *)sub_B170BC(v33, selectedcomponents->obj.klass->_1.element_class);
    if ( !this )
    {
LABEL_106:
      sub_B170F4(this);
      sub_B170A0();
    }
    if ( (unsigned int)v40 >= selectedcomponents->max_length )
      goto LABEL_105;
    v46 = &selectedcomponents->obj.klass + v40;
    v46[4] = (Il2CppClass *)v33;
    sub_B16F98(
      (BattleServantConfConponent_o *)(v46 + 4),
      (System_Int32_array **)v33,
      (System_String_array **)method,
      v41,
      v42,
      v43,
      v44,
      v45);
    v47 = v4->fields.commandfsm;
    if ( !v47 )
      goto LABEL_11;
    Fsm = PlayMakerFSM__get_Fsm(v47, 0LL);
    if ( !Fsm )
      goto LABEL_11;
    variables = Fsm->fields.variables;
    v50 = System_Int32__ToString((int32_t)&targetIndex, 0LL);
    v51 = System_String__Concat_43743732((System_String_o *)StringLiteral_11580, v50, 0LL);
    if ( !variables )
      goto LABEL_11;
    this = (BattlePerformanceCommandCard_o *)HutongGames_PlayMaker_FsmVariables__GetFsmGameObject(variables, v51, 0LL);
    p_commandlist = v4->fields.p_commandlist;
    if ( !p_commandlist )
      goto LABEL_11;
    if ( (unsigned int)v31 >= p_commandlist->max_length )
      goto LABEL_105;
    if ( !this )
      goto LABEL_11;
    HutongGames_PlayMaker_FsmGameObject__set_Value(
      (HutongGames_PlayMaker_FsmGameObject_o *)this,
      p_commandlist->m_Items[v31],
      0LL);
    v53 = v4->fields.p_commandlist;
    if ( !v53 )
      goto LABEL_11;
    if ( (unsigned int)v31 >= v53->max_length )
      goto LABEL_105;
    v54 = v53->m_Items[v31];
    v55 = sub_B17014(object___TypeInfo, 6LL, method);
    if ( !v55 )
      goto LABEL_11;
    v61 = (System_Object_array *)v55;
    this = (BattlePerformanceCommandCard_o *)StringLiteral_23314;
    if ( StringLiteral_23314 )
    {
      this = (BattlePerformanceCommandCard_o *)sub_B170BC(StringLiteral_23314, v61->obj.klass->_1.element_class);
      if ( !this )
        goto LABEL_106;
      *(_QWORD *)&markindex = StringLiteral_23314;
    }
    else
    {
      *(_QWORD *)&markindex = 0LL;
    }
    if ( !v61->max_length )
      goto LABEL_105;
    v61->m_Items[0] = *(Il2CppObject **)&markindex;
    sub_B16F98(
      (BattleServantConfConponent_o *)v61->m_Items,
      *(System_Int32_array ***)&markindex,
      (System_String_array **)method,
      v56,
      v57,
      v58,
      v59,
      v60);
    v112 = 20;
    this = (BattlePerformanceCommandCard_o *)j_il2cpp_value_box_0(int_TypeInfo, &v112);
    v67 = (System_Int32_array **)this;
    if ( this )
    {
      this = (BattlePerformanceCommandCard_o *)sub_B170BC(this, v61->obj.klass->_1.element_class);
      if ( !this )
        goto LABEL_106;
    }
    if ( v61->max_length <= 1 )
      goto LABEL_105;
    v61->m_Items[1] = (Il2CppObject *)v67;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v61->m_Items[1],
      v67,
      (System_String_array **)method,
      v62,
      v63,
      v64,
      v65,
      v66);
    this = (BattlePerformanceCommandCard_o *)StringLiteral_22584;
    if ( StringLiteral_22584 )
    {
      this = (BattlePerformanceCommandCard_o *)sub_B170BC(StringLiteral_22584, v61->obj.klass->_1.element_class);
      if ( !this )
        goto LABEL_106;
      *(_QWORD *)&markindex = StringLiteral_22584;
    }
    else
    {
      *(_QWORD *)&markindex = 0LL;
    }
    if ( v61->max_length <= 2 )
      goto LABEL_105;
    v61->m_Items[2] = *(Il2CppObject **)&markindex;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v61->m_Items[2],
      *(System_Int32_array ***)&markindex,
      (System_String_array **)method,
      v68,
      v69,
      v70,
      v71,
      v72);
    v111 = 1045220557;
    this = (BattlePerformanceCommandCard_o *)j_il2cpp_value_box_0(float_TypeInfo, &v111);
    v78 = (System_Int32_array **)this;
    if ( this )
    {
      this = (BattlePerformanceCommandCard_o *)sub_B170BC(this, v61->obj.klass->_1.element_class);
      if ( !this )
        goto LABEL_106;
    }
    if ( v61->max_length <= 3 )
      goto LABEL_105;
    v61->m_Items[3] = (Il2CppObject *)v78;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v61->m_Items[3],
      v78,
      (System_String_array **)method,
      v73,
      v74,
      v75,
      v76,
      v77);
    this = (BattlePerformanceCommandCard_o *)StringLiteral_19885;
    if ( StringLiteral_19885 )
    {
      this = (BattlePerformanceCommandCard_o *)sub_B170BC(StringLiteral_19885, v61->obj.klass->_1.element_class);
      if ( !this )
        goto LABEL_106;
      *(_QWORD *)&markindex = StringLiteral_19885;
    }
    else
    {
      *(_QWORD *)&markindex = 0LL;
    }
    if ( v61->max_length <= 4 )
      goto LABEL_105;
    v61->m_Items[4] = *(Il2CppObject **)&markindex;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v61->m_Items[4],
      *(System_Int32_array ***)&markindex,
      (System_String_array **)method,
      v79,
      v80,
      v81,
      v82,
      v83);
    v110[0] = 1;
    this = (BattlePerformanceCommandCard_o *)j_il2cpp_value_box_0(bool_TypeInfo, v110);
    v89 = (System_Int32_array **)this;
    if ( this )
    {
      this = (BattlePerformanceCommandCard_o *)sub_B170BC(this, v61->obj.klass->_1.element_class);
      if ( !this )
        goto LABEL_106;
    }
    if ( v61->max_length <= 5 )
      goto LABEL_105;
    v61->m_Items[5] = (Il2CppObject *)v89;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v61->m_Items[5],
      v89,
      (System_String_array **)method,
      v84,
      v85,
      v86,
      v87,
      v88);
    if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
    v90 = iTween__Hash(v61, 0LL);
    iTween__MoveTo_18434272(v54, v90, 0LL);
    BattleCommandComponent__stopAnimation(v33, 0LL);
    BattleCommandComponent__selectCard(v33, targetIndex, 0LL);
    if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
    this = (BattlePerformanceCommandCard_o *)FSUtility__IsUnderVista(0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
      v91 = 0.0;
    else
      v91 = 17.0;
    if ( (unsigned int)v31 <= 4 )
    {
      this = (BattlePerformanceCommandCard_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v4, 0LL);
      COMMAND_STAMP_POS_X = v4->fields.COMMAND_STAMP_POS_X;
      if ( !COMMAND_STAMP_POS_X )
        goto LABEL_11;
      if ( (unsigned int)v31 >= COMMAND_STAMP_POS_X->max_length )
        goto LABEL_105;
      if ( !this )
        goto LABEL_11;
      *(UnityEngine_Vector3_o *)&v95 = UnityEngine_Transform__TransformPoint_34933176(
                                         (UnityEngine_Transform_o *)this,
                                         COMMAND_STAMP_POS_X->m_Items[v31 + 1],
                                         v91 + v4->fields.COMMAND_STAMP_POS_Y,
                                         v4->fields.COMMAND_STAMP_POS_Z,
                                         0LL);
    }
    else
    {
      commandTransformArray = v4->fields.commandTransformArray;
      if ( !commandTransformArray )
        goto LABEL_11;
      if ( (unsigned int)v31 >= commandTransformArray->max_length )
        goto LABEL_105;
      v93 = commandTransformArray->m_Items[v31];
      if ( !v93 )
        goto LABEL_11;
      *(UnityEngine_Vector3_o *)&v95 = UnityEngine_Transform__get_position(v93, 0LL);
    }
    BattlePerformanceCommandCard__SetSelectStamp(v4, targetIndex, *(UnityEngine_Vector3_o *)&v95, v33, v94);
    if ( !targetIndex )
    {
      CommandType = BattleCommandComponent__getCommandType(v33, 0LL);
      started = BattlePerformanceCommandCard__coStartFirstBonus(v4, CommandType, v102);
      UnityEngine_MonoBehaviour__StartCoroutine_34804316((UnityEngine_MonoBehaviour_o *)v4, started, 0LL);
    }
    BattlePerformanceCommandCard__checkChainBonus(v4, v99, v100);
    BattlePerformanceCommandCard__checkMaskEnemy(v4, v104);
    goto LABEL_93;
  }
  v109 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v35, v36, v37, v38);
  System_Action___ctor(v109, (Il2CppObject *)v4, Method_BattlePerformanceCommandCard__selectOK_b__112_0__, 0LL);
  BattleCommandComponent__PlayTDErrorAnimation(v33, v109, 0LL);
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
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  UnityEngine_GameObject_o *cutin_ordererror; // x1
  int32_t samecount; // w8
  int32_t v20; // w8
  int32_t v21; // w8

  *seName = -1;
  *prefab = 0LL;
  sub_B16F98(
    (BattleServantConfConponent_o *)prefab,
    0LL,
    (System_String_array **)prefab,
    (System_String_array **)seName,
    (System_Boolean_array **)method,
    v5,
    v6,
    v7);
  if ( !combo )
    sub_B170D4();
  if ( combo->fields.chainError )
  {
    *seName = 27;
    cutin_ordererror = this->fields.cutin_ordererror;
LABEL_4:
    *prefab = cutin_ordererror;
    sub_B16F98(
      (BattleServantConfConponent_o *)prefab,
      (System_Int32_array **)cutin_ordererror,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
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
      v20 = combo->fields.samecount;
      if ( (unsigned int)(v20 - 1) < 2 )
      {
        cutin_ordererror = this->fields.cutin_trinity_b;
        goto LABEL_4;
      }
      if ( v20 == 3 )
      {
        *seName = 26;
        cutin_ordererror = this->fields.cutin_grand_b;
        goto LABEL_4;
      }
    }
    else if ( BattleCommand__isQUICK(combo->fields.flashtype, 0LL) )
    {
      v21 = combo->fields.samecount;
      if ( (unsigned int)(v21 - 1) < 2 )
      {
        cutin_ordererror = this->fields.cutin_trinity_q;
        goto LABEL_4;
      }
      if ( v21 == 3 )
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
  System_String_array **v18; // x2
  struct BattleCommandData_array *commandlist; // x8
  unsigned __int64 v20; // x9
  unsigned __int64 max_length; // x10
  BattleCommandData_o *v22; // x10
  struct BattleCommandComponent_array *commandCompArray; // x8
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
  BattleCommandComponent_o **v35; // x23
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
  UnityEngine_GameObject_o *v62; // x0
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
  BattleData_o *Bdata; // x0
  BattleCommandComponent_o *klass; // x23
  BattleServantData_o *ServantData; // x0
  struct UnityEngine_GameObject_array *v76; // x8
  UnityEngine_GameObject_o *v77; // x0
  UIWidget_o *Component_srcLineSprite; // x23
  float v79; // s4
  float v80; // s5
  float v81; // s6
  float v82; // s7
  struct System_Int32_array *selectcommand; // x9
  int32_t klass_high; // w22
  unsigned __int64 v85; // x8
  unsigned __int64 v86; // x11
  struct BattleCommandComponent_array *selectedcomponents; // x8
  unsigned __int64 v88; // x19
  __int64 v89; // x21
  unsigned __int64 v90; // x9
  UnityEngine_Component_o *v91; // x0
  WebViewObject_o *Component_WebViewObject; // x21
  int v93; // s0
  MethodInfo v97; // [xsp+0h] [xbp-70h] BYREF
  UnityEngine_Color_o v98; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v99; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_40FC282 & 1) == 0 )
  {
    sub_B16FFC(&BattleCommandComponent___TypeInfo, list);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_UIWidget___, v11);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_BattleCommandComponent___, v12);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_UIWidget___, v13);
    sub_B16FFC(&iTween_TypeInfo, v14);
    byte_40FC282 = 1;
  }
  p_commandlist = &this->fields.commandlist;
  this->fields.commandlist = list;
  sub_B16F98(
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
  v20 = 0LL;
  while ( 1 )
  {
    max_length = commandlist->max_length;
    if ( (__int64)v20 >= (int)max_length )
      break;
    if ( v20 >= max_length )
      goto LABEL_84;
    v22 = commandlist->m_Items[v20];
    if ( v22 )
    {
      v22->fields.markindex = v20;
      commandlist = *p_commandlist;
    }
    ++v20;
    if ( !commandlist )
      goto LABEL_79;
  }
  commandCompArray = this->fields.commandCompArray;
  if ( !commandCompArray )
    goto LABEL_79;
  ServantNumber = sub_B17014(BattleCommandComponent___TypeInfo, commandCompArray->max_length, v18);
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
        ServantNumber = sub_B170BC(v34, *(_QWORD *)(*(_QWORD *)v30 + 64LL));
        if ( !ServantNumber )
        {
LABEL_85:
          sub_B170F4(ServantNumber);
          sub_B170A0();
        }
      }
      if ( v31 >= v30[6] )
        goto LABEL_84;
      v35 = (BattleCommandComponent_o **)&v30[v32];
      *(_QWORD *)&v30[v32] = v34;
      sub_B16F98((BattleServantConfConponent_o *)&v30[v32], v34, v18, v24, v25, v26, v27, v28);
      if ( v31 >= v30[6] )
        goto LABEL_84;
      if ( *v35 )
      {
        BattleCommandComponent__setData(*v35, 0LL, 0LL, 0, 1, 0, 0LL);
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
                if ( *v35 )
                {
                  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)*v35, 0LL);
                  if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !iTween_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
                  }
                  iTween__Stop_18552136(gameObject, 0LL);
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
  HIDWORD(v97.klass) = maxdrawcount;
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
        ServantNumber = BattlePerformanceCommandCard__GetServantNumber(this, v17, (const MethodInfo *)v18);
        v60 = this->fields.p_commandlist;
        if ( !v60 )
          goto LABEL_79;
        v61 = ServantNumber + 5;
        if ( (unsigned int)(ServantNumber + 5) >= v60->max_length )
          goto LABEL_84;
        v62 = v60->m_Items[v61];
        if ( !v62 )
          goto LABEL_79;
        ServantNumber = (__int64)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                   v62,
                                   (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_BattleCommandComponent___);
        if ( !v30 )
          goto LABEL_79;
        v68 = (System_Int32_array **)ServantNumber;
        if ( ServantNumber )
        {
          ServantNumber = sub_B170BC(ServantNumber, *(_QWORD *)(*(_QWORD *)v30 + 64LL));
          if ( !ServantNumber )
            goto LABEL_85;
        }
        if ( v61 >= v30[6] )
          goto LABEL_84;
        v69 = &v30[2 * v61];
        *((_QWORD *)v69 + 4) = v68;
        v70 = (BattleServantConfConponent_o *)(v69 + 8);
        sub_B16F98(v70, v68, v18, v63, v64, v65, v66, v67);
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
        Bdata = this->fields.Bdata;
        if ( !Bdata )
          goto LABEL_79;
        klass = (BattleCommandComponent_o *)v70->klass;
        ServantData = BattleData__getServantData(Bdata, v72->fields.uniqueId, 0LL);
        if ( !klass )
          goto LABEL_79;
        BattleCommandComponent__setData(klass, v72, ServantData, 0, 1, 0, 0LL);
        v76 = this->fields.p_commandlist;
        if ( !v76 )
          goto LABEL_79;
        if ( v61 >= v76->max_length )
          goto LABEL_84;
        v77 = v76->m_Items[v61];
        if ( !v77 )
          goto LABEL_79;
        Component_srcLineSprite = (UIWidget_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                  v77,
                                                  (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
        v98.fields.r = 0.0;
        v98.fields.g = 0.0;
        v98.fields.b = 0.0;
        v98.fields.a = 0.01;
        v97.methodPointer = 0LL;
        v97.invoker_method = 0LL;
        UnityEngine_Color___ctor(v98, v79, v80, v81, v82, &v97);
        if ( !Component_srcLineSprite )
          goto LABEL_79;
        *(_QWORD *)&v99.fields.r = v97.methodPointer;
        *(_QWORD *)&v99.fields.b = v97.invoker_method;
        UIWidget__set_color(Component_srcLineSprite, v99, 0LL);
        v47 = *p_commandlist;
      }
    }
    ++v48;
    if ( !v47 )
      goto LABEL_79;
  }
  selectcommand = this->fields.selectcommand;
  klass_high = HIDWORD(v97.klass);
  if ( !selectcommand )
    goto LABEL_79;
  v85 = 0LL;
  while ( 1 )
  {
    v86 = selectcommand->max_length;
    if ( (__int64)v85 >= (int)v86 )
      break;
    if ( v85 >= v86 )
      goto LABEL_84;
    selectcommand->m_Items[v85 + 1] = -1;
    selectcommand = this->fields.selectcommand;
    ++v85;
    if ( !selectcommand )
      goto LABEL_79;
  }
  selectedcomponents = this->fields.selectedcomponents;
  if ( !selectedcomponents )
    goto LABEL_79;
  v88 = 0LL;
  v89 = 32LL;
  while ( 1 )
  {
    v90 = selectedcomponents->max_length;
    if ( v88 >= 3 )
      break;
    if ( v88 >= v90 )
      goto LABEL_84;
    *(Il2CppClass **)((char *)&selectedcomponents->obj.klass + v89) = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)((char *)selectedcomponents + v89), 0LL, v18, v24, v25, v26, v27, v28);
    selectedcomponents = this->fields.selectedcomponents;
    ++v88;
    v89 += 8LL;
    if ( !selectedcomponents )
      goto LABEL_79;
  }
  if ( (unsigned int)v90 <= 3 )
  {
LABEL_84:
    sub_B17100(ServantNumber, v17, v18);
    sub_B170A0();
  }
  v91 = (UnityEngine_Component_o *)selectedcomponents->m_Items[3];
  if ( !v91
    || (Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                                    v91,
                                    (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UIWidget___),
        *(UnityEngine_Color_o *)&v93 = UnityEngine_Color__get_clear(0LL),
        !Component_WebViewObject) )
  {
LABEL_79:
    sub_B170D4();
  }
  UIWidget__set_color((UIWidget_o *)Component_WebViewObject, *(UnityEngine_Color_o *)&v93, 0LL);
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
  int32_t v11; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_40FC2A0 & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, *(_QWORD *)&count);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v5);
    sub_B16FFC(&StringLiteral_19353, v6);
    byte_40FC2A0 = 1;
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
    v11 = count;
    v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v11);
    v10 = System_String__Format((System_String_o *)StringLiteral_19353, v9, 0LL);
    if ( !v8 )
      sub_B170D4();
    UISprite__set_spriteName(v8, v10, 0LL);
  }
}


void __fastcall BattlePerformanceCommandCard__setFirstAura(
        BattlePerformanceCommandCard_o *this,
        BattleCommandComponent_o *comp,
        int32_t type,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *firstaura_q; // x1

  if ( BattleCommand__isQUICK(type, 0LL) )
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
  if ( BattleCommand__isARTS(type, 0LL) )
  {
    if ( comp )
    {
      firstaura_q = this->fields.firstaura_a;
      goto LABEL_10;
    }
LABEL_12:
    sub_B170D4();
  }
  if ( BattleCommand__isBUSTER(type, 0LL) )
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
  __int64 v4; // x4
  __int64 v8; // x22
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
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7

  if ( (byte_40FC295 & 1) == 0 )
  {
    sub_B16FFC(&BattlePerformanceCommandCard__showComboEffect_d__133_TypeInfo, combo);
    byte_40FC295 = 1;
  }
  v8 = sub_B170CC(BattlePerformanceCommandCard__showComboEffect_d__133_TypeInfo, combo, endproc, method, v4);
  BattlePerformanceCommandCard__showComboEffect_d__133___ctor(
    (BattlePerformanceCommandCard__showComboEffect_d__133_o *)v8,
    0,
    0LL);
  if ( !v8 )
    sub_B170D4();
  *(_QWORD *)(v8 + 32) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v8 + 32), (System_Int32_array **)this, v9, v10, v11, v12, v13, v14);
  *(_QWORD *)(v8 + 40) = combo;
  sub_B16F98((BattleServantConfConponent_o *)(v8 + 40), (System_Int32_array **)combo, v15, v16, v17, v18, v19, v20);
  *(_QWORD *)(v8 + 48) = endproc;
  sub_B16F98((BattleServantConfConponent_o *)(v8 + 48), (System_Int32_array **)endproc, v21, v22, v23, v24, v25, v26);
  return (System_Collections_IEnumerator_o *)v8;
}


System_Collections_IEnumerator_o *__fastcall BattlePerformanceCommandCard__showComboEffectNormal(
        BattlePerformanceCommandCard_o *this,
        BattleComboData_o *combo,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x21
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

  if ( (byte_40FC297 & 1) == 0 )
  {
    sub_B16FFC(&BattlePerformanceCommandCard__showComboEffectNormal_d__135_TypeInfo, combo);
    byte_40FC297 = 1;
  }
  v7 = sub_B170CC(BattlePerformanceCommandCard__showComboEffectNormal_d__135_TypeInfo, combo, method, v3, v4);
  BattlePerformanceCommandCard__showComboEffectNormal_d__135___ctor(
    (BattlePerformanceCommandCard__showComboEffectNormal_d__135_o *)v7,
    0,
    0LL);
  if ( !v7 )
    sub_B170D4();
  *(_QWORD *)(v7 + 32) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v7 + 32), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v7 + 40) = combo;
  sub_B16F98((BattleServantConfConponent_o *)(v7 + 40), (System_Int32_array **)combo, v14, v15, v16, v17, v18, v19);
  return (System_Collections_IEnumerator_o *)v7;
}


System_Collections_IEnumerator_o *__fastcall BattlePerformanceCommandCard__showComboEffectShort(
        BattlePerformanceCommandCard_o *this,
        BattleComboData_o *combo,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x21
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

  if ( (byte_40FC296 & 1) == 0 )
  {
    sub_B16FFC(&BattlePerformanceCommandCard__showComboEffectShort_d__134_TypeInfo, combo);
    byte_40FC296 = 1;
  }
  v7 = sub_B170CC(BattlePerformanceCommandCard__showComboEffectShort_d__134_TypeInfo, combo, method, v3, v4);
  BattlePerformanceCommandCard__showComboEffectShort_d__134___ctor(
    (BattlePerformanceCommandCard__showComboEffectShort_d__134_o *)v7,
    0,
    0LL);
  if ( !v7 )
    sub_B170D4();
  *(_QWORD *)(v7 + 32) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v7 + 32), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v7 + 40) = combo;
  sub_B16F98((BattleServantConfConponent_o *)(v7 + 40), (System_Int32_array **)combo, v14, v15, v16, v17, v18, v19);
  return (System_Collections_IEnumerator_o *)v7;
}


void __fastcall BattlePerformanceCommandCard__startComboEffect(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  struct BattlePerformance_o *perf; // x8
  struct BattleData_o *data; // x8
  System_Collections_IEnumerator_o *v6; // x1

  if ( (byte_40FC294 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_5481, method);
    byte_40FC294 = 1;
  }
  perf = this->fields.perf;
  if ( !perf || (data = perf->fields.data) == 0LL )
    sub_B170D4();
  v6 = BattlePerformanceCommandCard__showComboEffect(
         this,
         data->fields.combodata,
         (System_String_o *)StringLiteral_5481,
         v2);
  UnityEngine_MonoBehaviour__StartCoroutine_34804316((UnityEngine_MonoBehaviour_o *)this, v6, 0LL);
}


void __fastcall BattlePerformanceCommandCard__startFirstBonus(
        BattlePerformanceCommandCard_o *this,
        int32_t type,
        const MethodInfo *method)
{
  System_Collections_IEnumerator_o *started; // x1

  started = BattlePerformanceCommandCard__coStartFirstBonus(this, type, method);
  UnityEngine_MonoBehaviour__StartCoroutine_34804316((UnityEngine_MonoBehaviour_o *)this, started, 0LL);
}


void __fastcall BattlePerformanceCommandCard__startMiniCard(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  System_String_array **v2; // x2
  BattlePerformanceCommandCard_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x23
  struct BattleCommandComponent_array *selectedcomponents; // x8
  il2cpp_array_size_t v14; // w25
  BattleCommandComponent_o *v15; // x0
  struct BattleCommandComponent_array *v16; // x8
  BattleCommandComponent_o *v17; // x0
  struct BattleCommandComponent_array *v18; // x8
  BattleCommandComponent_o *v19; // x0
  struct BattleCommandComponent_array *v20; // x8
  UnityEngine_Component_o *v21; // x0
  UnityEngine_GameObject_o *gameObject; // x20
  __int64 v23; // x2
  __int64 v24; // x0
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_Object_array *v30; // x21
  struct UnityEngine_Transform_array *miniPos; // x8
  UnityEngine_Transform_o *v32; // x0
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  System_Int32_array **v38; // x22
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  System_Int32_array **v49; // x22
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  System_Int32_array **v60; // x22
  System_Collections_Hashtable_o *v61; // x0
  struct BattleCommandComponent_array *v62; // x8
  UnityEngine_Component_o *v63; // x0
  UnityEngine_GameObject_o *v64; // x20
  __int64 v65; // x2
  __int64 v66; // x0
  System_String_array **v67; // x3
  System_Boolean_array **v68; // x4
  System_Int32_array **v69; // x5
  System_Int32_array *v70; // x6
  System_Int32_array *v71; // x7
  System_Object_array *v72; // x21
  int z_low; // w9
  System_String_array **v74; // x3
  System_Boolean_array **v75; // x4
  System_Int32_array **v76; // x5
  System_Int32_array *v77; // x6
  System_Int32_array *v78; // x7
  System_Int32_array **v79; // x22
  System_String_array **v80; // x3
  System_Boolean_array **v81; // x4
  System_Int32_array **v82; // x5
  System_Int32_array *v83; // x6
  System_Int32_array *v84; // x7
  System_String_array **v85; // x3
  System_Boolean_array **v86; // x4
  System_Int32_array **v87; // x5
  System_Int32_array *v88; // x6
  System_Int32_array *v89; // x7
  System_Int32_array **v90; // x22
  System_String_array **v91; // x3
  System_Boolean_array **v92; // x4
  System_Int32_array **v93; // x5
  System_Int32_array *v94; // x6
  System_Int32_array *v95; // x7
  System_String_array **v96; // x3
  System_Boolean_array **v97; // x4
  System_Int32_array **v98; // x5
  System_Int32_array *v99; // x6
  System_Int32_array *v100; // x7
  System_Int32_array **v101; // x22
  System_Collections_Hashtable_o *v102; // x0
  int v103; // [xsp+0h] [xbp-80h] BYREF
  int v104; // [xsp+4h] [xbp-7Ch] BYREF
  __int64 v105; // [xsp+8h] [xbp-78h] BYREF
  int v106; // [xsp+10h] [xbp-70h]
  int v107; // [xsp+18h] [xbp-68h] BYREF
  int v108; // [xsp+1Ch] [xbp-64h] BYREF
  UnityEngine_Vector3_o position; // [xsp+20h] [xbp-60h] BYREF

  v3 = this;
  if ( (byte_40FC2A1 & 1) == 0 )
  {
    sub_B16FFC(&iTween_EaseType_TypeInfo, method);
    sub_B16FFC(&object___TypeInfo, v4);
    sub_B16FFC(&float_TypeInfo, v5);
    sub_B16FFC(&UnityEngine_Vector3_TypeInfo, v6);
    sub_B16FFC(&StringLiteral_18046, v7);
    sub_B16FFC(&StringLiteral_22584, v8);
    sub_B16FFC(&StringLiteral_21419, v9);
    sub_B16FFC(&StringLiteral_21803, v10);
    this = (BattlePerformanceCommandCard_o *)sub_B16FFC(&iTween_TypeInfo, v11);
    byte_40FC2A1 = 1;
  }
  v12 = 4LL;
  do
  {
    selectedcomponents = v3->fields.selectedcomponents;
    if ( !selectedcomponents )
      goto LABEL_78;
    v14 = v12 - 4;
    if ( (unsigned int)(v12 - 4) >= selectedcomponents->max_length )
      goto LABEL_77;
    v15 = (BattleCommandComponent_o *)*((_QWORD *)&selectedcomponents->obj.klass + v12);
    if ( !v15 )
      goto LABEL_78;
    BattleCommandComponent__setMoveMode(v15, 0LL);
    v16 = v3->fields.selectedcomponents;
    if ( !v16 )
      goto LABEL_78;
    if ( v14 >= v16->max_length )
      goto LABEL_77;
    v17 = (BattleCommandComponent_o *)*((_QWORD *)&v16->obj.klass + v12);
    if ( !v17 )
      goto LABEL_78;
    BattleCommandComponent__SetCardBuffAlphaAnimFlag(v17, 0, 0LL);
    v18 = v3->fields.selectedcomponents;
    if ( !v18 )
      goto LABEL_78;
    if ( v14 >= v18->max_length )
      goto LABEL_77;
    v19 = (BattleCommandComponent_o *)*((_QWORD *)&v18->obj.klass + v12);
    if ( !v19 )
      goto LABEL_78;
    BattleCommandComponent__SetTreasureDeviceTypeChange(v19, 0, 0, 0LL);
    v20 = v3->fields.selectedcomponents;
    if ( !v20 )
      goto LABEL_78;
    if ( v14 >= v20->max_length )
      goto LABEL_77;
    v21 = (UnityEngine_Component_o *)*((_QWORD *)&v20->obj.klass + v12);
    if ( !v21 )
      goto LABEL_78;
    gameObject = UnityEngine_Component__get_gameObject(v21, 0LL);
    v24 = sub_B17014(object___TypeInfo, 6LL, v23);
    if ( !v24 )
      goto LABEL_78;
    v30 = (System_Object_array *)v24;
    this = (BattlePerformanceCommandCard_o *)StringLiteral_21419;
    if ( StringLiteral_21419 )
    {
      this = (BattlePerformanceCommandCard_o *)sub_B170BC(StringLiteral_21419, v30->obj.klass->_1.element_class);
      if ( !this )
        goto LABEL_79;
      method = (const MethodInfo *)StringLiteral_21419;
    }
    else
    {
      method = 0LL;
    }
    if ( !v30->max_length )
      goto LABEL_77;
    v30->m_Items[0] = (Il2CppObject *)method;
    sub_B16F98((BattleServantConfConponent_o *)v30->m_Items, (System_Int32_array **)method, v2, v25, v26, v27, v28, v29);
    miniPos = v3->fields.miniPos;
    if ( !miniPos )
      goto LABEL_78;
    if ( v14 >= miniPos->max_length )
      goto LABEL_77;
    v32 = (UnityEngine_Transform_o *)*((_QWORD *)&miniPos->obj.klass + v12);
    if ( !v32 )
      goto LABEL_78;
    position = UnityEngine_Transform__get_position(v32, 0LL);
    this = (BattlePerformanceCommandCard_o *)j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, &position);
    v38 = (System_Int32_array **)this;
    if ( this )
    {
      this = (BattlePerformanceCommandCard_o *)sub_B170BC(this, v30->obj.klass->_1.element_class);
      if ( !this )
      {
LABEL_79:
        sub_B170F4(this);
        sub_B170A0();
      }
    }
    if ( v30->max_length <= 1 )
      goto LABEL_77;
    v30->m_Items[1] = (Il2CppObject *)v38;
    sub_B16F98((BattleServantConfConponent_o *)&v30->m_Items[1], v38, v2, v33, v34, v35, v36, v37);
    this = (BattlePerformanceCommandCard_o *)StringLiteral_22584;
    if ( StringLiteral_22584 )
    {
      this = (BattlePerformanceCommandCard_o *)sub_B170BC(StringLiteral_22584, v30->obj.klass->_1.element_class);
      if ( !this )
        goto LABEL_79;
      method = (const MethodInfo *)StringLiteral_22584;
    }
    else
    {
      method = 0LL;
    }
    if ( v30->max_length <= 2 )
      goto LABEL_77;
    v30->m_Items[2] = (Il2CppObject *)method;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v30->m_Items[2],
      (System_Int32_array **)method,
      v2,
      v39,
      v40,
      v41,
      v42,
      v43);
    v108 = 1045220557;
    this = (BattlePerformanceCommandCard_o *)j_il2cpp_value_box_0(float_TypeInfo, &v108);
    v49 = (System_Int32_array **)this;
    if ( this )
    {
      this = (BattlePerformanceCommandCard_o *)sub_B170BC(this, v30->obj.klass->_1.element_class);
      if ( !this )
        goto LABEL_79;
    }
    if ( v30->max_length <= 3 )
      goto LABEL_77;
    v30->m_Items[3] = (Il2CppObject *)v49;
    sub_B16F98((BattleServantConfConponent_o *)&v30->m_Items[3], v49, v2, v44, v45, v46, v47, v48);
    this = (BattlePerformanceCommandCard_o *)StringLiteral_18046;
    if ( StringLiteral_18046 )
    {
      this = (BattlePerformanceCommandCard_o *)sub_B170BC(StringLiteral_18046, v30->obj.klass->_1.element_class);
      if ( !this )
        goto LABEL_79;
      method = (const MethodInfo *)StringLiteral_18046;
    }
    else
    {
      method = 0LL;
    }
    if ( v30->max_length <= 4 )
    {
LABEL_77:
      sub_B17100(this, method, v2);
      sub_B170A0();
    }
    v30->m_Items[4] = (Il2CppObject *)method;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v30->m_Items[4],
      (System_Int32_array **)method,
      v2,
      v50,
      v51,
      v52,
      v53,
      v54);
    v107 = 21;
    this = (BattlePerformanceCommandCard_o *)j_il2cpp_value_box_0(iTween_EaseType_TypeInfo, &v107);
    v60 = (System_Int32_array **)this;
    if ( this )
    {
      this = (BattlePerformanceCommandCard_o *)sub_B170BC(this, v30->obj.klass->_1.element_class);
      if ( !this )
        goto LABEL_79;
    }
    if ( v30->max_length <= 5 )
      goto LABEL_77;
    v30->m_Items[5] = (Il2CppObject *)v60;
    sub_B16F98((BattleServantConfConponent_o *)&v30->m_Items[5], v60, v2, v55, v56, v57, v58, v59);
    if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
    v61 = iTween__Hash(v30, 0LL);
    iTween__MoveTo_18434272(gameObject, v61, 0LL);
    v62 = v3->fields.selectedcomponents;
    if ( !v62 )
      goto LABEL_78;
    if ( v14 >= v62->max_length )
      goto LABEL_77;
    v63 = (UnityEngine_Component_o *)*((_QWORD *)&v62->obj.klass + v12);
    if ( !v63
      || (v64 = UnityEngine_Component__get_gameObject(v63, 0LL), (v66 = sub_B17014(object___TypeInfo, 6LL, v65)) == 0) )
    {
LABEL_78:
      sub_B170D4();
    }
    v72 = (System_Object_array *)v66;
    this = (BattlePerformanceCommandCard_o *)StringLiteral_21803;
    if ( StringLiteral_21803 )
    {
      this = (BattlePerformanceCommandCard_o *)sub_B170BC(StringLiteral_21803, v72->obj.klass->_1.element_class);
      if ( !this )
        goto LABEL_79;
      method = (const MethodInfo *)StringLiteral_21803;
    }
    else
    {
      method = 0LL;
    }
    if ( !v72->max_length )
      goto LABEL_77;
    v72->m_Items[0] = (Il2CppObject *)method;
    sub_B16F98((BattleServantConfConponent_o *)v72->m_Items, (System_Int32_array **)method, v2, v67, v68, v69, v70, v71);
    z_low = LODWORD(v3->fields.miniScale.fields.z);
    v105 = *(_QWORD *)&v3->fields.miniScale.fields.x;
    v106 = z_low;
    this = (BattlePerformanceCommandCard_o *)j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, &v105);
    v79 = (System_Int32_array **)this;
    if ( this )
    {
      this = (BattlePerformanceCommandCard_o *)sub_B170BC(this, v72->obj.klass->_1.element_class);
      if ( !this )
        goto LABEL_79;
    }
    if ( v72->max_length <= 1 )
      goto LABEL_77;
    v72->m_Items[1] = (Il2CppObject *)v79;
    sub_B16F98((BattleServantConfConponent_o *)&v72->m_Items[1], v79, v2, v74, v75, v76, v77, v78);
    this = (BattlePerformanceCommandCard_o *)StringLiteral_22584;
    if ( StringLiteral_22584 )
    {
      this = (BattlePerformanceCommandCard_o *)sub_B170BC(StringLiteral_22584, v72->obj.klass->_1.element_class);
      if ( !this )
        goto LABEL_79;
      method = (const MethodInfo *)StringLiteral_22584;
    }
    else
    {
      method = 0LL;
    }
    if ( v72->max_length <= 2 )
      goto LABEL_77;
    v72->m_Items[2] = (Il2CppObject *)method;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v72->m_Items[2],
      (System_Int32_array **)method,
      v2,
      v80,
      v81,
      v82,
      v83,
      v84);
    v104 = 1045220557;
    this = (BattlePerformanceCommandCard_o *)j_il2cpp_value_box_0(float_TypeInfo, &v104);
    v90 = (System_Int32_array **)this;
    if ( this )
    {
      this = (BattlePerformanceCommandCard_o *)sub_B170BC(this, v72->obj.klass->_1.element_class);
      if ( !this )
        goto LABEL_79;
    }
    if ( v72->max_length <= 3 )
      goto LABEL_77;
    v72->m_Items[3] = (Il2CppObject *)v90;
    sub_B16F98((BattleServantConfConponent_o *)&v72->m_Items[3], v90, v2, v85, v86, v87, v88, v89);
    this = (BattlePerformanceCommandCard_o *)StringLiteral_18046;
    if ( StringLiteral_18046 )
    {
      this = (BattlePerformanceCommandCard_o *)sub_B170BC(StringLiteral_18046, v72->obj.klass->_1.element_class);
      if ( !this )
        goto LABEL_79;
      method = (const MethodInfo *)StringLiteral_18046;
    }
    else
    {
      method = 0LL;
    }
    if ( v72->max_length <= 4 )
      goto LABEL_77;
    v72->m_Items[4] = (Il2CppObject *)method;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v72->m_Items[4],
      (System_Int32_array **)method,
      v2,
      v91,
      v92,
      v93,
      v94,
      v95);
    v103 = 21;
    this = (BattlePerformanceCommandCard_o *)j_il2cpp_value_box_0(iTween_EaseType_TypeInfo, &v103);
    v101 = (System_Int32_array **)this;
    if ( this )
    {
      this = (BattlePerformanceCommandCard_o *)sub_B170BC(this, v72->obj.klass->_1.element_class);
      if ( !this )
        goto LABEL_79;
    }
    if ( v72->max_length <= 5 )
      goto LABEL_77;
    v72->m_Items[5] = (Il2CppObject *)v101;
    sub_B16F98((BattleServantConfConponent_o *)&v72->m_Items[5], v101, v2, v96, v97, v98, v99, v100);
    v102 = iTween__Hash(v72, 0LL);
    iTween__ScaleTo_18439972(v64, v102, 0LL);
    ++v12;
  }
  while ( (unsigned int)(v12 - 5) < 3 );
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
  started = UnityEngine_MonoBehaviour__StartCoroutine_34804316((UnityEngine_MonoBehaviour_o *)this, v3, 0LL);
  this->fields.openNpCoroutine = started;
  sub_B16F98(
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
  Spawner_o *spawner; // x0

  if ( (byte_40FC28E & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FC28E = 1;
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
      sub_B170D4();
    Spawner__Despawn(spawner, this->fields.firstBonusObject, 1, 0LL);
  }
}


void __fastcall BattlePerformanceCommandCard__toggleHighSpeedMode(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  struct BattlePerformance_o *perf; // x8
  BattleData_o *data; // x0
  int32_t v5; // w1
  const MethodInfo *v6; // x2

  if ( (byte_40FC2C5 & 1) == 0 )
  {
    sub_B16FFC(&SeManager_TypeInfo, method);
    byte_40FC2C5 = 1;
  }
  if ( !BattlePerformanceCommandCard__checkSpeedButtonTutorial(this, method) )
  {
    perf = this->fields.perf;
    if ( !perf || (data = perf->fields.data) == 0LL )
      sub_B170D4();
    BattleData__toggleHighSpeedMode(data, 0LL);
    if ( (BYTE3(SeManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SeManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
    SeManager__PlayCommonSe(9, 0LL);
    BattlePerformanceCommandCard__updateHighSpeedObject(this, v5, v6);
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
  int32_t TutorialId; // w0
  int32_t v8; // w21
  __int64 Turn; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x2
  struct BattleData_o *Bdata; // x8
  struct BattleCommandComponent_array *commandCompArray; // x8
  __int64 v14; // x22
  int max_length; // w9
  Il2CppClass **v16; // x8
  Il2CppClass *v17; // x21
  struct BattleData_o *v18; // x8
  PlayMakerFSM_o *commandfsm; // x0
  HutongGames_PlayMaker_Fsm_o *Fsm; // x0
  HutongGames_PlayMaker_FsmVariables_o *variables; // x0
  HutongGames_PlayMaker_FsmInt_o *FsmInt; // x0
  PlayMakerFSM_o *v23; // x0

  if ( (byte_40FC285 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_20294, *(_QWORD *)&markindex);
    sub_B16FFC(&StringLiteral_11581, v5);
    byte_40FC285 = 1;
  }
  logic = this->fields.logic;
  if ( !logic )
    goto LABEL_30;
  TutorialId = BattleLogic__getTutorialId(logic, 0LL);
  if ( !this->fields.logic )
    goto LABEL_30;
  v8 = TutorialId;
  Turn = BattleLogic__getTurn(this->fields.logic, 0LL);
  if ( this->fields.isTouchNgInTutorial )
    return;
  if ( v8 == 1 )
  {
    if ( (unsigned int)(Turn - 1) >= 3 )
    {
      if ( (_DWORD)Turn == 5 && ((unsigned int)markindex > 5 || ((1 << markindex) & 0x23) == 0) )
        return;
    }
    else if ( (unsigned int)markindex >= 3 )
    {
      return;
    }
  }
  else if ( (v8 & 0xFFFFFFFE) == 2 )
  {
    if ( v8 == 2 && (_DWORD)Turn == 2 )
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
  v14 = 0LL;
  while ( 1 )
  {
    max_length = commandCompArray->max_length;
    if ( (int)v14 >= max_length )
      return;
    if ( (unsigned int)v14 >= max_length )
    {
      sub_B17100(Turn, v10, v11);
      sub_B170A0();
    }
    v16 = &commandCompArray->obj.klass + v14;
    v17 = v16[4];
    if ( !v17 )
      goto LABEL_30;
    Turn = BattleCommandComponent__checkMark((BattleCommandComponent_o *)v16[4], markindex, 0LL);
    if ( (Turn & 1) != 0 )
      break;
    commandCompArray = this->fields.commandCompArray;
    ++v14;
    if ( !commandCompArray )
      goto LABEL_30;
  }
  v18 = this->fields.Bdata;
  if ( !v18 )
    goto LABEL_30;
  if ( v18->fields.systemflg_selectcancel || !BYTE4(v17->vtable[4].method) )
  {
    if ( this->fields.directCommandCardTouchEnable )
    {
      BattlePerformanceCommandCard__selectOK(this, markindex, v11);
      return;
    }
    commandfsm = this->fields.commandfsm;
    if ( commandfsm )
    {
      Fsm = PlayMakerFSM__get_Fsm(commandfsm, 0LL);
      if ( Fsm )
      {
        variables = Fsm->fields.variables;
        if ( variables )
        {
          FsmInt = HutongGames_PlayMaker_FsmVariables__GetFsmInt(variables, (System_String_o *)StringLiteral_20294, 0LL);
          if ( FsmInt )
          {
            FsmInt->fields.value = markindex;
            v23 = this->fields.commandfsm;
            if ( v23 )
            {
              PlayMakerFSM__SendEvent(v23, (System_String_o *)StringLiteral_11581, 0LL);
              return;
            }
          }
        }
      }
    }
LABEL_30:
    sub_B170D4();
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceCommandCard__unselectCommandCard(
        BattlePerformanceCommandCard_o *this,
        BattleCommandComponent_o *bc,
        int32_t markindex,
        const MethodInfo *method)
{
  BattleCommandComponent_o *v5; // x19
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
  __int64 v23; // x2
  __int64 v24; // x0
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_Object_array *v30; // x22
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  System_Int32_array **v36; // x23
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  System_Int32_array **v47; // x23
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  System_Int32_array **v58; // x23
  System_Collections_Hashtable_o *v59; // x0
  const MethodInfo *v60; // x1
  const MethodInfo *v61; // x3
  System_String_array **v62; // x3
  System_Boolean_array **v63; // x4
  System_Int32_array **v64; // x5
  System_Int32_array *v65; // x6
  System_Int32_array *v66; // x7
  struct BattleCommandComponent_array *v67; // x8
  Il2CppClass **v68; // x0
  int32_t v69; // w1
  const MethodInfo *v70; // x2
  const MethodInfo *v71; // x1
  char v72[4]; // [xsp+4h] [xbp-3Ch] BYREF
  int v73; // [xsp+8h] [xbp-38h] BYREF
  int v74; // [xsp+Ch] [xbp-34h] BYREF

  v5 = bc;
  v6 = this;
  if ( (byte_40FC287 & 1) == 0 )
  {
    sub_B16FFC(&bool_TypeInfo, bc);
    sub_B16FFC(&int_TypeInfo, v7);
    sub_B16FFC(&object___TypeInfo, v8);
    sub_B16FFC(&float_TypeInfo, v9);
    sub_B16FFC(&StringLiteral_22584, v10);
    sub_B16FFC(&StringLiteral_23314, v11);
    sub_B16FFC(&StringLiteral_19885, v12);
    this = (BattlePerformanceCommandCard_o *)sub_B16FFC(&iTween_TypeInfo, v13);
    byte_40FC287 = 1;
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
    if ( !v5 )
      goto LABEL_10;
    v5->fields.selectflg = 0;
    v20 = v6->fields.drawcount - 1;
    v21 = v6->fields.maxdrawcount - v20;
    v6->fields.drawcount = v20;
    BattlePerformanceCommandCard__selectCommandCard(v6, v21, *(const MethodInfo **)&markindex);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v5, 0LL);
    v24 = sub_B17014(object___TypeInfo, 6LL, v23);
    if ( !v24 )
      goto LABEL_10;
    v30 = (System_Object_array *)v24;
    this = (BattlePerformanceCommandCard_o *)StringLiteral_23314;
    if ( StringLiteral_23314 )
    {
      this = (BattlePerformanceCommandCard_o *)sub_B170BC(StringLiteral_23314, v30->obj.klass->_1.element_class);
      if ( !this )
        goto LABEL_51;
      bc = (BattleCommandComponent_o *)StringLiteral_23314;
    }
    else
    {
      bc = 0LL;
    }
    if ( !v30->max_length )
      goto LABEL_50;
    v30->m_Items[0] = (Il2CppObject *)bc;
    sub_B16F98(
      (BattleServantConfConponent_o *)v30->m_Items,
      (System_Int32_array **)bc,
      *(System_String_array ***)&markindex,
      v25,
      v26,
      v27,
      v28,
      v29);
    v74 = 0;
    this = (BattlePerformanceCommandCard_o *)j_il2cpp_value_box_0(int_TypeInfo, &v74);
    v36 = (System_Int32_array **)this;
    if ( !this || (this = (BattlePerformanceCommandCard_o *)sub_B170BC(this, v30->obj.klass->_1.element_class)) != 0LL )
    {
      if ( v30->max_length <= 1 )
        goto LABEL_50;
      v30->m_Items[1] = (Il2CppObject *)v36;
      sub_B16F98(
        (BattleServantConfConponent_o *)&v30->m_Items[1],
        v36,
        *(System_String_array ***)&markindex,
        v31,
        v32,
        v33,
        v34,
        v35);
      this = (BattlePerformanceCommandCard_o *)StringLiteral_22584;
      if ( StringLiteral_22584 )
      {
        this = (BattlePerformanceCommandCard_o *)sub_B170BC(StringLiteral_22584, v30->obj.klass->_1.element_class);
        if ( !this )
          goto LABEL_51;
        bc = (BattleCommandComponent_o *)StringLiteral_22584;
      }
      else
      {
        bc = 0LL;
      }
      if ( v30->max_length <= 2 )
        goto LABEL_50;
      v30->m_Items[2] = (Il2CppObject *)bc;
      sub_B16F98(
        (BattleServantConfConponent_o *)&v30->m_Items[2],
        (System_Int32_array **)bc,
        *(System_String_array ***)&markindex,
        v37,
        v38,
        v39,
        v40,
        v41);
      v73 = 1045220557;
      this = (BattlePerformanceCommandCard_o *)j_il2cpp_value_box_0(float_TypeInfo, &v73);
      v47 = (System_Int32_array **)this;
      if ( !this || (this = (BattlePerformanceCommandCard_o *)sub_B170BC(this, v30->obj.klass->_1.element_class)) != 0LL )
      {
        if ( v30->max_length <= 3 )
          goto LABEL_50;
        v30->m_Items[3] = (Il2CppObject *)v47;
        sub_B16F98(
          (BattleServantConfConponent_o *)&v30->m_Items[3],
          v47,
          *(System_String_array ***)&markindex,
          v42,
          v43,
          v44,
          v45,
          v46);
        this = (BattlePerformanceCommandCard_o *)StringLiteral_19885;
        if ( StringLiteral_19885 )
        {
          this = (BattlePerformanceCommandCard_o *)sub_B170BC(StringLiteral_19885, v30->obj.klass->_1.element_class);
          if ( !this )
            goto LABEL_51;
          bc = (BattleCommandComponent_o *)StringLiteral_19885;
        }
        else
        {
          bc = 0LL;
        }
        if ( v30->max_length <= 4 )
          goto LABEL_50;
        v30->m_Items[4] = (Il2CppObject *)bc;
        sub_B16F98(
          (BattleServantConfConponent_o *)&v30->m_Items[4],
          (System_Int32_array **)bc,
          *(System_String_array ***)&markindex,
          v48,
          v49,
          v50,
          v51,
          v52);
        v72[0] = 1;
        this = (BattlePerformanceCommandCard_o *)j_il2cpp_value_box_0(bool_TypeInfo, v72);
        v58 = (System_Int32_array **)this;
        if ( !this
          || (this = (BattlePerformanceCommandCard_o *)sub_B170BC(this, v30->obj.klass->_1.element_class)) != 0LL )
        {
          if ( v30->max_length <= 5 )
            goto LABEL_50;
          v30->m_Items[5] = (Il2CppObject *)v58;
          sub_B16F98(
            (BattleServantConfConponent_o *)&v30->m_Items[5],
            v58,
            *(System_String_array ***)&markindex,
            v53,
            v54,
            v55,
            v56,
            v57);
          if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
          v59 = iTween__Hash(v30, 0LL);
          iTween__MoveTo_18434272(gameObject, v59, 0LL);
          BattleCommandComponent__startMoveFloat(v5, 0LL);
          if ( v16 )
            BattlePerformanceCommandCard__setFirstAura(v6, v5, v6->fields.firstAuraType, v61);
          else
            BattlePerformanceCommandCard__cancelFirstBonus(v6, v60);
          v67 = v6->fields.selectedcomponents;
          if ( v67 )
          {
            if ( v16 < v67->max_length )
            {
              v68 = &v67->obj.klass + v16;
              v68[4] = 0LL;
              sub_B16F98(
                (BattleServantConfConponent_o *)(v68 + 4),
                0LL,
                *(System_String_array ***)&markindex,
                v62,
                v63,
                v64,
                v65,
                v66);
              BattlePerformanceCommandCard__checkChainBonus(v6, v69, v70);
              BattlePerformanceCommandCard__checkMaskEnemy(v6, v71);
              BattleCommandComponent__resetSelect(v5, 0LL);
              return;
            }
LABEL_50:
            sub_B17100(this, bc, *(_QWORD *)&markindex);
            sub_B170A0();
          }
LABEL_10:
          sub_B170D4();
        }
      }
    }
LABEL_51:
    sub_B170F4(this);
    sub_B170A0();
  }
}


void __fastcall BattlePerformanceCommandCard__updateBuffIcon(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  struct UnityEngine_GameObject_array *p_commandlist; // x8
  BattlePerformanceCommandCard_o *v4; // x19
  __int64 v5; // x22
  struct BattleCommandComponent_array *commandCompArray; // x8
  Il2CppClass **v7; // x8
  BattleCommandComponent_o *v8; // x20
  struct BattlePerformance_o *perf; // x8
  BattleData_o *data; // x21
  int32_t UniqueID; // w0

  p_commandlist = this->fields.p_commandlist;
  if ( !p_commandlist )
LABEL_13:
    sub_B170D4();
  v4 = this;
  v5 = 0LL;
  while ( (int)v5 < (signed int)p_commandlist->max_length )
  {
    commandCompArray = v4->fields.commandCompArray;
    if ( !commandCompArray )
      goto LABEL_13;
    if ( (unsigned int)v5 >= commandCompArray->max_length )
    {
      sub_B17100(this, method, v2);
      sub_B170A0();
    }
    v7 = &commandCompArray->obj.klass + v5;
    v8 = (BattleCommandComponent_o *)v7[4];
    if ( !v8 )
      goto LABEL_13;
    this = (BattlePerformanceCommandCard_o *)UnityEngine_Behaviour__get_isActiveAndEnabled(
                                               (UnityEngine_Behaviour_o *)v7[4],
                                               0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      perf = v4->fields.perf;
      if ( !perf )
        goto LABEL_13;
      data = perf->fields.data;
      UniqueID = BattleCommandComponent__getUniqueID(v8, 0LL);
      if ( !data )
        goto LABEL_13;
      this = (BattlePerformanceCommandCard_o *)BattleData__getServantData(data, UniqueID, 0LL);
      if ( this )
        BattleCommandComponent__setBuffIconList(v8, (BattleBuffData_o *)this[1].fields.COMMAND_STAMP_POS_X, 0LL);
    }
    p_commandlist = v4->fields.p_commandlist;
    ++v5;
    if ( !p_commandlist )
      goto LABEL_13;
  }
}


void __fastcall BattlePerformanceCommandCard__updateCard(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  BattlePerformanceCommandCard_o *v3; // x19
  __int64 v4; // x22
  struct UnityEngine_GameObject_array *p_commandlist; // x8
  unsigned __int64 v6; // x23
  UnityEngine_Object_o *v7; // x20
  struct BattleCommandComponent_array *commandCompArray; // x8
  BattleCommandComponent_o *v9; // x0
  struct BattleCommandComponent_array *v10; // x8
  unsigned __int64 v11; // x22
  unsigned __int64 max_length; // x9
  BattleCommandComponent_o *v13; // x20

  v3 = this;
  if ( (byte_40FC27C & 1) == 0 )
  {
    this = (BattlePerformanceCommandCard_o *)sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FC27C = 1;
  }
  v4 = 9LL;
  do
  {
    p_commandlist = v3->fields.p_commandlist;
    if ( !p_commandlist )
      goto LABEL_30;
    v6 = v4 - 4;
    if ( v4 - 4 >= (unsigned __int64)p_commandlist->max_length )
      goto LABEL_32;
    v7 = (UnityEngine_Object_o *)*((_QWORD *)&p_commandlist->obj.klass + v4);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    this = (BattlePerformanceCommandCard_o *)UnityEngine_Object__op_Inequality(v7, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      commandCompArray = v3->fields.commandCompArray;
      if ( !commandCompArray )
        goto LABEL_30;
      if ( v6 >= commandCompArray->max_length )
      {
LABEL_32:
        sub_B17100(this, method, v2);
        sub_B170A0();
      }
      v9 = (BattleCommandComponent_o *)*((_QWORD *)&commandCompArray->obj.klass + v4);
      if ( !v9 )
        goto LABEL_30;
      BattleCommandComponent__setData(v9, 0LL, 0LL, 0, 1, 0, 0LL);
    }
    ++v4;
  }
  while ( v6 < 7 );
  v10 = v3->fields.commandCompArray;
  if ( !v10 )
LABEL_30:
    sub_B170D4();
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
        && !v3->fields._IsPlayingBackStar_k__BackingField )
      {
        BattleCommandComponent__setCriticalObject(v13, 1, 0LL);
      }
      BattleCommandComponent__UpdateCommandCardEffect(v13, 0LL);
    }
    v10 = v3->fields.commandCompArray;
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
  BattleData_o *data; // x0
  BattleBuffData_BuffData_o *MaximumTurnFixedBuff; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  BattleBuffData_BuffData_o *v8; // x20
  int32_t turn; // w8
  int32_t addOrder; // w21
  int v11; // w8
  int v12; // w22
  struct BattleCommandComponent_array *commandCompArray; // x8
  __int64 v14; // x23
  int max_length; // w9
  il2cpp_array_size_t v16; // w24
  BattleCommandComponent_o *v17; // x0
  struct BattleCommandComponent_array *v18; // x8
  BattleCommandComponent_o *v19; // x8

  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_18;
  data = perf->fields.data;
  if ( !data )
    goto LABEL_18;
  MaximumTurnFixedBuff = BattleData__GetMaximumTurnFixedBuff(data, 0LL);
  v8 = MaximumTurnFixedBuff;
  if ( MaximumTurnFixedBuff )
  {
    turn = MaximumTurnFixedBuff->fields.turn;
    addOrder = MaximumTurnFixedBuff->fields.addOrder;
    v11 = turn + 1 >= 0 ? turn + 1 : turn + 2;
    v12 = v11 >> 1;
  }
  else
  {
    addOrder = 0;
    v12 = 0;
  }
  commandCompArray = this->fields.commandCompArray;
  if ( !commandCompArray )
LABEL_18:
    sub_B170D4();
  v14 = 4LL;
  while ( 1 )
  {
    max_length = commandCompArray->max_length;
    v16 = v14 - 4;
    if ( (int)v14 - 4 >= max_length )
      break;
    if ( v16 >= max_length )
      goto LABEL_20;
    v17 = (BattleCommandComponent_o *)*((_QWORD *)&commandCompArray->obj.klass + v14);
    if ( v17 )
    {
      MaximumTurnFixedBuff = (BattleBuffData_BuffData_o *)BattleCommandComponent__isTreasureDvc(v17, 0LL);
      v18 = this->fields.commandCompArray;
      if ( v18 )
      {
        if ( v16 >= v18->max_length )
        {
LABEL_20:
          sub_B17100(MaximumTurnFixedBuff, v6, v7);
          sub_B170A0();
        }
        v19 = (BattleCommandComponent_o *)*((_QWORD *)&v18->obj.klass + v14);
        if ( v19 )
        {
          BattleCommandComponent__SetFixedCommandCardBuff(
            v19,
            (v8 != 0LL) & ((unsigned __int8)MaximumTurnFixedBuff ^ 1),
            v12,
            addOrder,
            0LL);
          commandCompArray = this->fields.commandCompArray;
          ++v14;
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
  struct BattleData_o *Bdata; // x0
  BattleServantData_o *ServantData; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  struct BattleCommandComponent_array *commandCompArray; // x8
  BattleServantData_o *v8; // x20
  __int64 v9; // x21
  int max_length; // w9
  BattleCommandComponent_o *v11; // x0

  Bdata = this->fields.Bdata;
  if ( !Bdata )
    goto LABEL_10;
  ServantData = BattleData__getServantData(Bdata, Bdata->fields.globaltargetId, 0LL);
  if ( !ServantData || !this->fields.p_commandlist )
    return;
  commandCompArray = this->fields.commandCompArray;
  if ( !commandCompArray )
LABEL_10:
    sub_B170D4();
  v8 = ServantData;
  v9 = 0LL;
  while ( 1 )
  {
    max_length = commandCompArray->max_length;
    if ( (int)v9 >= max_length )
      break;
    if ( (unsigned int)v9 >= max_length )
    {
      sub_B17100(ServantData, v5, v6);
      sub_B170A0();
    }
    v11 = commandCompArray->m_Items[v9];
    if ( v11 )
    {
      BattleCommandComponent__updateClassMag(v11, v8, 0LL);
      commandCompArray = this->fields.commandCompArray;
      ++v9;
      if ( commandCompArray )
        continue;
    }
    goto LABEL_10;
  }
}


void __fastcall BattlePerformanceCommandCard__updateHighSpeedObject(
        BattlePerformanceCommandCard_o *this,
        int32_t speedMode,
        const MethodInfo *method)
{
  BattleLogic_o *logic; // x0
  BattleLogic_o *v5; // x0
  BattleLogic_o *v6; // x0
  struct BattleLogic_o *v7; // x8
  struct BattleData_o *data; // x8
  struct BattlePerformance_o *perf; // x8
  struct BattleData_o *v10; // x8
  UnityEngine_GameObject_o *highSpeedArrowOn; // x0
  int32_t systemflg_acceleration; // w20
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v14; // x0
  UnityEngine_GameObject_o *v15; // x0
  bool v16; // w1
  UnityEngine_GameObject_o *highSpeedArrowOff; // x0

  logic = this->fields.logic;
  if ( !logic )
    goto LABEL_22;
  if ( BattleLogic__isTutorial(logic, 0LL) )
  {
    v5 = this->fields.logic;
    if ( !v5 )
      goto LABEL_22;
    if ( BattleLogic__getTutorialId(v5, 0LL) == 2 )
    {
      v6 = this->fields.logic;
      if ( !v6 )
        goto LABEL_22;
      if ( BattleLogic__getTurn(v6, 0LL) >= 3 )
      {
        v7 = this->fields.logic;
        if ( !v7 )
          goto LABEL_22;
        data = v7->fields.data;
        if ( !data )
          goto LABEL_22;
        data->fields.systemflg_acceleration = 2;
      }
    }
  }
  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_22;
  v10 = perf->fields.data;
  if ( !v10 )
    goto LABEL_22;
  highSpeedArrowOn = this->fields.highSpeedArrowOn;
  if ( !highSpeedArrowOn )
    goto LABEL_22;
  systemflg_acceleration = v10->fields.systemflg_acceleration;
  gameObject = UnityEngine_GameObject__get_gameObject(highSpeedArrowOn, 0LL);
  if ( !gameObject )
    goto LABEL_22;
  if ( systemflg_acceleration != 1 )
  {
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    highSpeedArrowOff = this->fields.highSpeedArrowOff;
    if ( highSpeedArrowOff )
    {
      v15 = UnityEngine_GameObject__get_gameObject(highSpeedArrowOff, 0LL);
      if ( v15 )
      {
        v16 = 0;
        goto LABEL_21;
      }
    }
LABEL_22:
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  v14 = this->fields.highSpeedArrowOff;
  if ( !v14 )
    goto LABEL_22;
  v15 = UnityEngine_GameObject__get_gameObject(v14, 0LL);
  if ( !v15 )
    goto LABEL_22;
  v16 = 1;
LABEL_21:
  UnityEngine_GameObject__SetActive(v15, v16, 0LL);
}


void __fastcall BattlePerformanceCommandCard__updateTDTypeChange(
        BattlePerformanceCommandCard_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  struct BattleCommandComponent_array *commandCompArray; // x8
  __int64 v5; // x20
  int max_length; // w9
  BattleCommandComponent_o *v7; // x0

  commandCompArray = this->fields.commandCompArray;
  if ( !commandCompArray )
LABEL_7:
    sub_B170D4();
  v5 = 0LL;
  while ( 1 )
  {
    max_length = commandCompArray->max_length;
    if ( (int)v5 >= max_length )
      break;
    if ( (unsigned int)v5 >= max_length )
    {
      sub_B17100(this, method, v2);
      sub_B170A0();
    }
    v7 = commandCompArray->m_Items[v5];
    if ( v7 )
    {
      BattleCommandComponent__UpdateTDTypeChange(v7, 0, 0LL);
      commandCompArray = this->fields.commandCompArray;
      ++v5;
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
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40FC27E & 1) == 0 )
  {
    sub_B16FFC(&BattlePerformanceCommandCard__waitFallStar_d__97_TypeInfo, method);
    byte_40FC27E = 1;
  }
  v6 = sub_B170CC(BattlePerformanceCommandCard__waitFallStar_d__97_TypeInfo, method, v2, v3, v4);
  BattlePerformanceCommandCard__waitFallStar_d__97___ctor(
    (BattlePerformanceCommandCard__waitFallStar_d__97_o *)v6,
    0,
    0LL);
  if ( !v6 )
    sub_B170D4();
  *(_QWORD *)(v6 + 32) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v6 + 32), (System_Int32_array **)this, v7, v8, v9, v10, v11, v12);
  return (System_Collections_IEnumerator_o *)v6;
}


System_Collections_IEnumerator_o *__fastcall BattlePerformanceCommandCard__waitFunc(
        BattlePerformanceCommandCard_o *this,
        float waittime,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v4; // x3
  __int64 v5; // x4
  __int64 v9; // x21
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

  if ( (byte_40FC2A8 & 1) == 0 )
  {
    sub_B16FFC(&BattlePerformanceCommandCard__waitFunc_d__171_TypeInfo, callback);
    byte_40FC2A8 = 1;
  }
  v9 = sub_B170CC(BattlePerformanceCommandCard__waitFunc_d__171_TypeInfo, callback, method, v4, v5);
  BattlePerformanceCommandCard__waitFunc_d__171___ctor((BattlePerformanceCommandCard__waitFunc_d__171_o *)v9, 0, 0LL);
  if ( !v9 )
    sub_B170D4();
  *(_QWORD *)(v9 + 32) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v9 + 32), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15);
  *(float *)(v9 + 40) = waittime;
  *(_QWORD *)(v9 + 48) = callback;
  sub_B16F98((BattleServantConfConponent_o *)(v9 + 48), (System_Int32_array **)callback, v16, v17, v18, v19, v20, v21);
  return (System_Collections_IEnumerator_o *)v9;
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
  int32_t _1__state; // w8
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  struct BattlePerformanceCommandCard_o *_4__this; // x20
  UnityEngine_Object_o *firstBonusSimpleAnimation; // x19
  SimpleAnimation_o *v8; // x0
  SimpleAnimation_o *v9; // x0
  UnityEngine_Object_o *firstBonusAnimation; // x19
  UnityEngine_Animation_o *v11; // x0
  UnityEngine_Animation_o *v12; // x0

  if ( (byte_40F7171 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40F7171 = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    _4__this = this->fields.__4__this;
    this->fields.__1__state = -1;
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
        v8 = _4__this->fields.firstBonusSimpleAnimation;
        if ( v8 )
        {
          SimpleAnimation__Stop(v8, 0LL);
          v9 = _4__this->fields.firstBonusSimpleAnimation;
          if ( v9 )
          {
            SimpleAnimation__Play(v9, 0LL);
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
        v11 = _4__this->fields.firstBonusAnimation;
        if ( v11 )
        {
          UnityEngine_Animation__Stop(v11, 0LL);
          v12 = _4__this->fields.firstBonusAnimation;
          if ( v12 )
          {
            UnityEngine_Animation__Play(v12, 0LL);
            return 0;
          }
        }
      }
    }
    sub_B170D4();
  }
  if ( !_1__state )
  {
    this->fields.__2__current = 0LL;
    p__2__current = &this->fields.__2__current;
    *((_DWORD *)p__2__current - 2) = -1;
    sub_B16F98(p__2__current, 0LL);
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
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  __int64 v6; // x4
  System_NotSupportedException_o *v7; // x0
  __int64 v8; // x1

  v2 = sub_B17000(&System_NotSupportedException_TypeInfo, method);
  v7 = (System_NotSupportedException_o *)sub_B170CC(v2, v3, v4, v5, v6);
  System_NotSupportedException___ctor(v7, 0LL);
  sub_B17000(
    &Method_BattlePerformanceCommandCard__DelayFirstBonusAnimationPlay_d__122_System_Collections_IEnumerator_Reset__,
    v8);
  sub_B170A0();
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
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  struct BattlePerformanceCommandCard___c_StaticFields *static_fields; // x0

  if ( (byte_40F716F & 1) == 0 )
  {
    sub_B16FFC(&BattlePerformanceCommandCard___c_TypeInfo, v1);
    byte_40F716F = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(BattlePerformanceCommandCard___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = BattlePerformanceCommandCard___c_TypeInfo->static_fields;
  static_fields->__9 = (struct BattlePerformanceCommandCard___c_o *)v5;
  sub_B16F98(static_fields, v5);
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
    sub_B170D4();
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
    sub_B170D4();
  return x->fields.selectflg;
}


bool __fastcall BattlePerformanceCommandCard___c___showComboEffectShort_b__134_0(
        BattlePerformanceCommandCard___c_o *this,
        BattleCommandComponent_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B170D4();
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
  struct BattlePerformanceCommandCard_o *_4__this; // x8

  if ( (byte_40F7170 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_Contains_BattleCommandComponent___, x);
    byte_40F7170 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B170D4();
  return System_Linq_Enumerable__Contains_string_(
           (System_Collections_Generic_IEnumerable_TSource__o *)_4__this->fields.selectedcomponents,
           (System_String_o *)x,
           (const MethodInfo_18D1D34 *)Method_System_Linq_Enumerable_Contains_BattleCommandComponent___);
}


void __fastcall BattlePerformanceCommandCard___c__DisplayClass120_0___DistributeCriticalPoint_b__2(
        BattlePerformanceCommandCard___c__DisplayClass120_0_o *this,
        BattleCommandComponent_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B170D4();
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
    sub_B170D4();
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
  __int64 v2; // x2
  BattlePerformanceCommandCard__coStartFirstBonus_d__119_o *v3; // x20
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  int32_t _1__state; // w8
  BattlePerformanceCommandCard_o *_4__this; // x19
  UnityEngine_Object_o *firstBonusObject; // x22
  UnityEngine_GameObject_o **p_firstBonusObject; // x21
  Spawner_o *spawner; // x0
  Spawner_o *v16; // x22
  UnityEngine_Object_o *firstbonus_q; // x23
  float x; // s8
  float y; // s9
  float z; // s10
  float v21; // s0
  float v22; // s1
  float v23; // s2
  float v24; // s3
  float v25; // s4
  float v26; // s5
  float v27; // s6
  float v28; // s7
  UnityEngine_GameObject_o *v29; // x0
  UnityEngine_GameObject_o *v30; // x22
  SimpleAnimation_o *ComponentInChildren_SimpleAnimation; // x0
  UnityEngine_GameObject_o *v32; // x0
  SimpleAnimation_o *v33; // x0
  Il2CppObject **p__2__current; // x20
  bool result; // w0
  struct BattleCommandComponent_array *commandCompArray; // x8
  __int64 v37; // x21
  int max_length; // w9
  struct BattlePerformance_o *perf; // x8
  BattleData_o *data; // x0
  int32_t FirstBonusCriticalRate; // w0
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x3
  __int64 v45; // x4
  int32_t v46; // w20
  WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_array *v47; // x21
  BattlePerformanceCommandCard___c_c *v48; // x0
  struct BattlePerformanceCommandCard___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__119_0; // x22
  Il2CppObject *v51; // x23
  struct BattlePerformanceCommandCard___c_StaticFields *v52; // x0
  UnityEngine_Object_o *USFGOActorBattleActionEventConditional_OverwriteParamCondition; // x21
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v55; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o v56; // 0:s3.4,4:s4.4,8:s5.4,12:s6.4

  v3 = this;
  if ( (byte_40F7172 & 1) == 0 )
  {
    sub_B16FFC(&Method_BasicHelper_Find_BattleCommandComponent___, method);
    sub_B16FFC(&Method_System_Func_BattleCommandComponent__bool___ctor__, v4);
    sub_B16FFC(&System_Func_BattleCommandComponent__bool__TypeInfo, v5);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponentInChildren_Animation____66859176, v6);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponentInChildren_SimpleAnimation____66859200, v7);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v8);
    sub_B16FFC(&Method_BattlePerformanceCommandCard___c__coStartFirstBonus_b__119_0__, v9);
    this = (BattlePerformanceCommandCard__coStartFirstBonus_d__119_o *)sub_B16FFC(
                                                                         &BattlePerformanceCommandCard___c_TypeInfo,
                                                                         v10);
    byte_40F7172 = 1;
  }
  _1__state = v3->fields.__1__state;
  _4__this = v3->fields.__4__this;
  if ( _1__state != 1 )
  {
    if ( _1__state )
      return 0;
    v3->fields.__1__state = -1;
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
      spawner = _4__this->fields.spawner;
      if ( !spawner )
        goto LABEL_41;
      Spawner__Despawn(spawner, *p_firstBonusObject, 1, 0LL);
      *p_firstBonusObject = 0LL;
      sub_B16F98(&_4__this->fields.firstBonusObject, 0LL);
    }
    if ( BattleCommand__isQUICK(v3->fields.type, 0LL) )
    {
      v16 = _4__this->fields.spawner;
      firstbonus_q = (UnityEngine_Object_o *)_4__this->fields.firstbonus_q;
    }
    else if ( BattleCommand__isARTS(v3->fields.type, 0LL) )
    {
      v16 = _4__this->fields.spawner;
      firstbonus_q = (UnityEngine_Object_o *)_4__this->fields.firstbonus_a;
    }
    else
    {
      if ( !BattleCommand__isBUSTER(v3->fields.type, 0LL) )
      {
LABEL_22:
        v30 = *p_firstBonusObject;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        this = (BattlePerformanceCommandCard__coStartFirstBonus_d__119_o *)UnityEngine_Object__op_Inequality(
                                                                             (UnityEngine_Object_o *)v30,
                                                                             0LL,
                                                                             0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !*p_firstBonusObject )
            goto LABEL_41;
          ComponentInChildren_SimpleAnimation = UnityEngine_GameObject__GetComponentInChildren_SimpleAnimation_(
                                                  *p_firstBonusObject,
                                                  1,
                                                  (const MethodInfo_19D15B0 *)Method_UnityEngine_GameObject_GetComponentInChildren_SimpleAnimation____66859200);
          _4__this->fields.firstBonusSimpleAnimation = ComponentInChildren_SimpleAnimation;
          sub_B16F98(&_4__this->fields.firstBonusSimpleAnimation, ComponentInChildren_SimpleAnimation);
          v32 = _4__this->fields.firstBonusObject;
          if ( !v32 )
            goto LABEL_41;
          v33 = UnityEngine_GameObject__GetComponentInChildren_SimpleAnimation_(
                  v32,
                  1,
                  (const MethodInfo_19D15B0 *)Method_UnityEngine_GameObject_GetComponentInChildren_Animation____66859176);
          _4__this->fields.firstBonusAnimation = (struct UnityEngine_Animation_o *)v33;
          sub_B16F98(&_4__this->fields.firstBonusAnimation, v33);
          BattlePerformanceCommandCard__ActivateFirstBonusObject(_4__this, 0LL);
        }
        _4__this->fields.firstAuraType = v3->fields.type;
        goto LABEL_30;
      }
      v16 = _4__this->fields.spawner;
      firstbonus_q = (UnityEngine_Object_o *)_4__this->fields.firstbonus_b;
    }
    zero = UnityEngine_Vector3__get_zero(0LL);
    x = zero.fields.x;
    y = zero.fields.y;
    z = zero.fields.z;
    *(UnityEngine_Quaternion_o *)&v21 = UnityEngine_Quaternion__get_identity(0LL);
    if ( !v16 )
      goto LABEL_41;
    v25 = v21;
    v26 = v22;
    v27 = v23;
    v28 = v24;
    v55.fields.x = x;
    v55.fields.y = y;
    v55.fields.z = z;
    v56.fields.x = v25;
    v56.fields.y = v26;
    v56.fields.z = v27;
    v56.fields.w = v28;
    v29 = Spawner__Spawn_24902380(v16, firstbonus_q, v55, v56, 0LL);
    *p_firstBonusObject = v29;
    sub_B16F98(&_4__this->fields.firstBonusObject, v29);
    goto LABEL_22;
  }
  v3->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_41;
LABEL_30:
  if ( _4__this->fields.isPlayingMoveCard )
  {
    v3->fields.__2__current = 0LL;
    p__2__current = &v3->fields.__2__current;
    sub_B16F98(p__2__current, 0LL);
    result = 1;
    *((_DWORD *)p__2__current - 2) = 1;
    return result;
  }
  if ( _4__this->fields.firstAuraType != -1 )
  {
    commandCompArray = _4__this->fields.commandCompArray;
    if ( commandCompArray )
    {
      v37 = 0LL;
      while ( 1 )
      {
        max_length = commandCompArray->max_length;
        if ( (int)v37 >= max_length )
          break;
        if ( (unsigned int)v37 >= max_length )
        {
          sub_B17100(this, method, v2);
          sub_B170A0();
        }
        method = (const MethodInfo *)commandCompArray->m_Items[v37];
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
          ++v37;
          if ( commandCompArray )
            continue;
        }
        goto LABEL_41;
      }
      perf = _4__this->fields.perf;
      if ( perf )
      {
        data = perf->fields.data;
        if ( data )
        {
          FirstBonusCriticalRate = BattleData__GetFirstBonusCriticalRate(data, v3->fields.type, 0LL);
          if ( FirstBonusCriticalRate >= 10 )
          {
            v46 = FirstBonusCriticalRate;
            v47 = (WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_array *)_4__this->fields.commandCompArray;
            v48 = BattlePerformanceCommandCard___c_TypeInfo;
            if ( (BYTE3(BattlePerformanceCommandCard___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !BattlePerformanceCommandCard___c_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BattlePerformanceCommandCard___c_TypeInfo);
              v48 = BattlePerformanceCommandCard___c_TypeInfo;
            }
            static_fields = v48->static_fields;
            _9__119_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__119_0;
            if ( !_9__119_0 )
            {
              if ( (BYTE3(v48->vtable._0_Equals.methodPtr) & 4) != 0 && !v48->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v48);
                static_fields = BattlePerformanceCommandCard___c_TypeInfo->static_fields;
              }
              v51 = (Il2CppObject *)static_fields->__9;
              _9__119_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                                               System_Func_BattleCommandComponent__bool__TypeInfo,
                                                                                               v42,
                                                                                               v43,
                                                                                               v44,
                                                                                               v45);
              System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
                _9__119_0,
                v51,
                Method_BattlePerformanceCommandCard___c__coStartFirstBonus_b__119_0__,
                (const MethodInfo_2B6AB40 *)Method_System_Func_BattleCommandComponent__bool___ctor__);
              v52 = BattlePerformanceCommandCard___c_TypeInfo->static_fields;
              v52->__9__119_0 = (struct System_Func_BattleCommandComponent__bool__o *)_9__119_0;
              sub_B16F98(&v52->__9__119_0, _9__119_0);
            }
            USFGOActorBattleActionEventConditional_OverwriteParamCondition = (UnityEngine_Object_o *)BasicHelper__Find_USFGOActorBattleActionEventConditional_OverwriteParamCondition_(v47, (System_Func_T__bool__o *)_9__119_0, (const MethodInfo_18B650C *)Method_BasicHelper_Find_BattleCommandComponent___);
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
              BattlePerformanceCommandCard__DistributeCriticalPoint(_4__this, v46 / 10, 0, 0LL);
            }
          }
          return 0;
        }
      }
    }
LABEL_41:
    sub_B170D4();
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
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  __int64 v6; // x4
  System_NotSupportedException_o *v7; // x0
  __int64 v8; // x1

  v2 = sub_B17000(&System_NotSupportedException_TypeInfo, method);
  v7 = (System_NotSupportedException_o *)sub_B170CC(v2, v3, v4, v5, v6);
  System_NotSupportedException___ctor(v7, 0LL);
  sub_B17000(&Method_BattlePerformanceCommandCard__coStartFirstBonus_d__119_System_Collections_IEnumerator_Reset__, v8);
  sub_B170A0();
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
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
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
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  int32_t _1__state; // w8
  struct BattlePerformanceCommandCard_o *_4__this; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v27; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **v28; // x21
  UnityEngine_Object_o *npGaugeLightTargetRoot; // x22
  __int64 ServantNumber; // x0
  BattleCommandData_o *v31; // x1
  __int64 v32; // x2
  __int64 v33; // x3
  __int64 v34; // x4
  UnityEngine_Transform_o *v35; // x22
  float CARD_ROOT_BASE_X; // s8
  float CARD_ROOT_BASE_Y; // s9
  float v38; // s0
  struct UnityEngine_GameObject_array *p_commandlist; // x8
  __int64 v40; // x26
  __int64 v41; // x9
  __int64 v42; // x8
  struct BattleCommandData_array *commandlist; // x9
  unsigned __int64 max_length; // x10
  struct BattleCommandComponent_array *commandCompArray; // x8
  il2cpp_array_size_t v46; // w25
  BattleCommandComponent_o **v47; // x8
  BattleCommandComponent_o *v48; // x22
  BattleServantParamComponent_o *StatusUiObj; // x0
  UnityEngine_Component_o *npcomp; // x0
  UnityEngine_Transform_o *transform; // x23
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Transform_o *v53; // x0
  UnityEngine_GameObject_o *v54; // x0
  UnityEngine_Transform_o *v55; // x0
  UnityEngine_GameObject_o *Object_19257936; // x23
  __int64 v57; // x2
  __int64 v58; // x0
  System_Object_array *v59; // x24
  struct UnityEngine_Transform_array *npGaugeLightTarget; // x8
  Il2CppObject *v61; // x25
  Il2CppObject *v62; // x25
  Il2CppObject *v63; // x25
  Il2CppObject *v64; // x25
  System_Collections_Hashtable_o *v65; // x0
  struct System_Collections_Generic_List_BattleCommandComponent__o *v66; // x0
  System_Collections_Generic_List_XWeaponTrail_Element__o *v67; // x0
  struct System_Collections_Generic_List_BattleCommandComponent__o **p_flglist_5__2; // x19
  struct System_Collections_Generic_List_BattleCommandComponent__o *flglist_5__2; // t1
  bool result; // w0
  float npCardEffectDelayTime; // s8
  UnityEngine_WaitForSeconds_o *v72; // x20
  Il2CppObject **v73; // x19
  __int64 v74; // x1
  __int64 v75; // x2
  __int64 v76; // x3
  __int64 v77; // x4
  float npCardDispDelayTime; // s8
  UnityEngine_WaitForSeconds_o *v79; // x20
  Il2CppObject **p__2__current; // x19
  float npGaugeEffectMoveTime; // [xsp+Ch] [xbp-84h] BYREF
  float npGaugeEffectMoveDelayTime; // [xsp+10h] [xbp-80h] BYREF
  int32_t npGaugeEaseType; // [xsp+14h] [xbp-7Ch] BYREF
  System_Collections_Generic_List_Enumerator_T__o v84; // [xsp+18h] [xbp-78h] BYREF
  UnityEngine_Vector3_o v85; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40F7173 & 1) == 0 )
  {
    sub_B16FFC(&iTween_EaseType_TypeInfo, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_BattleCommandComponent__Dispose__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_BattleCommandComponent__MoveNext__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_BattleCommandComponent__get_Current__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleCommandComponent__Add__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleCommandComponent__Clear__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleCommandComponent__GetEnumerator__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleCommandComponent___ctor__, v12);
    sub_B16FFC(&System_Collections_Generic_List_BattleCommandComponent__TypeInfo, v13);
    sub_B16FFC(&object___TypeInfo, v14);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v15);
    sub_B16FFC(&float_TypeInfo, v16);
    sub_B16FFC(&UnityEngine_WaitForSeconds_TypeInfo, v17);
    sub_B16FFC(&StringLiteral_18046, v18);
    sub_B16FFC(&StringLiteral_22584, v19);
    sub_B16FFC(&StringLiteral_18185, v20);
    sub_B16FFC(&StringLiteral_17881, v21);
    sub_B16FFC(&StringLiteral_18186, v22);
    sub_B16FFC(&StringLiteral_21419, v23);
    sub_B16FFC(&iTween_TypeInfo, v24);
    byte_40F7173 = 1;
  }
  memset(&v84, 0, sizeof(v84));
  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  if ( _1__state == 2 )
  {
    flglist_5__2 = this->fields._flglist_5__2;
    p_flglist_5__2 = &this->fields._flglist_5__2;
    v67 = (System_Collections_Generic_List_XWeaponTrail_Element__o *)flglist_5__2;
    *((_DWORD *)p_flglist_5__2 - 6) = -1;
    if ( !flglist_5__2 )
      goto LABEL_69;
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      v67,
      (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_BattleCommandComponent__Clear__);
    *p_flglist_5__2 = 0LL;
    sub_B16F98(p_flglist_5__2, 0LL);
    if ( !_4__this )
      goto LABEL_69;
    BattlePerformanceCommandCard__giveoutNobleCard(_4__this, 0LL);
    return 0;
  }
  if ( _1__state == 1 )
  {
    v66 = this->fields._flglist_5__2;
    this->fields.__1__state = -1;
    if ( v66 )
    {
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        &v84,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v66,
        (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_BattleCommandComponent__GetEnumerator__);
      while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v84,
                (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_BattleCommandComponent__MoveNext__) )
      {
        if ( !v84.fields.current )
          sub_B170D4();
        if ( !BYTE4(v84.fields.current[23].monitor) )
          BattleCommandComponent__playOpenNobleCard((BattleCommandComponent_o *)v84.fields.current, 0LL);
      }
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v84,
        (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_BattleCommandComponent__Dispose__);
      if ( _4__this )
      {
        npCardDispDelayTime = _4__this->fields.npCardDispDelayTime;
        v79 = (UnityEngine_WaitForSeconds_o *)sub_B170CC(UnityEngine_WaitForSeconds_TypeInfo, v74, v75, v76, v77);
        UnityEngine_WaitForSeconds___ctor(v79, npCardDispDelayTime, 0LL);
        this->fields.__2__current = (Il2CppObject *)v79;
        p__2__current = &this->fields.__2__current;
        sub_B16F98(p__2__current, v79);
        *((_DWORD *)p__2__current - 2) = 2;
        return 1;
      }
    }
    goto LABEL_69;
  }
  if ( _1__state )
    return 0;
  this->fields.__1__state = -1;
  v27 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_BattleCommandComponent__TypeInfo,
                                                                                                  method,
                                                                                                  v2,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v27,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_BattleCommandComponent___ctor__);
  v28 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **)&this->fields._flglist_5__2;
  this->fields._flglist_5__2 = (struct System_Collections_Generic_List_BattleCommandComponent__o *)v27;
  sub_B16F98(&this->fields._flglist_5__2, v27);
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
    v35 = _4__this->fields.npGaugeLightTargetRoot;
    CARD_ROOT_BASE_X = _4__this->fields.CARD_ROOT_BASE_X;
    CARD_ROOT_BASE_Y = _4__this->fields.CARD_ROOT_BASE_Y;
    v38 = BattlePerformanceCommandCard__FSCardRootOffsetY(_4__this, 0LL);
    if ( !v35 )
      goto LABEL_69;
    v85.fields.y = CARD_ROOT_BASE_Y + v38;
    v85.fields.z = 0.0;
    v85.fields.x = CARD_ROOT_BASE_X;
    UnityEngine_Transform__set_localPosition(v35, v85, 0LL);
  }
  p_commandlist = _4__this->fields.p_commandlist;
  if ( !p_commandlist )
LABEL_69:
    sub_B170D4();
  v40 = 9LL;
  while ( 1 )
  {
    v41 = *(_QWORD *)&p_commandlist->max_length;
    v42 = v40 - 4;
    if ( v40 - 4 >= ((v41 << 32) - 0x100000000LL) >> 32 )
      break;
    commandlist = _4__this->fields.commandlist;
    if ( !commandlist )
      goto LABEL_69;
    max_length = commandlist->max_length;
    if ( v42 < (int)max_length )
    {
      if ( v42 >= max_length )
        goto LABEL_83;
      v31 = (BattleCommandData_o *)*((_QWORD *)&commandlist->obj.klass + v40);
      if ( v31 )
      {
        ServantNumber = BattlePerformanceCommandCard__GetServantNumber(_4__this, v31, 0LL);
        commandCompArray = _4__this->fields.commandCompArray;
        if ( !commandCompArray )
          goto LABEL_69;
        v46 = ServantNumber;
        if ( (unsigned int)(ServantNumber + 5) >= commandCompArray->max_length )
          goto LABEL_83;
        v47 = &commandCompArray->m_Items[(int)ServantNumber + 1];
        v48 = v47[4];
        if ( !v48 )
          goto LABEL_69;
        ServantNumber = BattleCommandComponent__checkObject(v47[4], 0LL);
        if ( (ServantNumber & 1) != 0 )
        {
          if ( !*v28 )
            goto LABEL_69;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            *v28,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v48,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_BattleCommandComponent__Add__);
          StatusUiObj = BattlePerformanceCommandCard__GetStatusUiObj(_4__this, v48->fields.data, 0LL);
          if ( !StatusUiObj )
            goto LABEL_69;
          npcomp = (UnityEngine_Component_o *)StatusUiObj->fields.npcomp;
          if ( !npcomp )
            goto LABEL_69;
          transform = UnityEngine_Component__get_transform(npcomp, 0LL);
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)_4__this, 0LL);
          if ( !gameObject )
            goto LABEL_69;
          v53 = UnityEngine_GameObject__get_transform(gameObject, 0LL);
          BaseMonoBehaviour__createObject_19257936(
            (BaseMonoBehaviour_o *)_4__this,
            (System_String_o *)StringLiteral_18185,
            v53,
            transform,
            0LL);
          v54 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)_4__this, 0LL);
          if ( !v54 )
            goto LABEL_69;
          v55 = UnityEngine_GameObject__get_transform(v54, 0LL);
          Object_19257936 = BaseMonoBehaviour__createObject_19257936(
                              (BaseMonoBehaviour_o *)_4__this,
                              (System_String_o *)StringLiteral_18186,
                              v55,
                              transform,
                              0LL);
          v58 = sub_B17014(object___TypeInfo, 8LL, v57);
          if ( !v58 )
            goto LABEL_69;
          v59 = (System_Object_array *)v58;
          ServantNumber = StringLiteral_21419;
          if ( StringLiteral_21419 )
          {
            ServantNumber = sub_B170BC(StringLiteral_21419, v59->obj.klass->_1.element_class);
            if ( !ServantNumber )
              goto LABEL_85;
            v31 = (BattleCommandData_o *)StringLiteral_21419;
          }
          else
          {
            v31 = 0LL;
          }
          if ( !v59->max_length )
            goto LABEL_83;
          v59->m_Items[0] = (Il2CppObject *)v31;
          sub_B16F98(v59->m_Items, v31);
          npGaugeLightTarget = _4__this->fields.npGaugeLightTarget;
          if ( !npGaugeLightTarget )
            goto LABEL_69;
          if ( v46 >= npGaugeLightTarget->max_length )
            goto LABEL_83;
          v61 = (Il2CppObject *)npGaugeLightTarget->m_Items[v46];
          if ( v61 )
          {
            ServantNumber = sub_B170BC(v61, v59->obj.klass->_1.element_class);
            if ( !ServantNumber )
            {
LABEL_85:
              sub_B170F4();
              sub_B170A0();
            }
          }
          if ( v59->max_length <= 1 )
            goto LABEL_83;
          v59->m_Items[1] = v61;
          sub_B16F98(&v59->m_Items[1], v61);
          ServantNumber = StringLiteral_18046;
          if ( StringLiteral_18046 )
          {
            ServantNumber = sub_B170BC(StringLiteral_18046, v59->obj.klass->_1.element_class);
            if ( !ServantNumber )
              goto LABEL_85;
            v31 = (BattleCommandData_o *)StringLiteral_18046;
          }
          else
          {
            v31 = 0LL;
          }
          if ( v59->max_length <= 2 )
            goto LABEL_83;
          v59->m_Items[2] = (Il2CppObject *)v31;
          sub_B16F98(&v59->m_Items[2], v31);
          npGaugeEaseType = _4__this->fields.npGaugeEaseType;
          ServantNumber = j_il2cpp_value_box_0(iTween_EaseType_TypeInfo, &npGaugeEaseType);
          v62 = (Il2CppObject *)ServantNumber;
          if ( ServantNumber )
          {
            ServantNumber = sub_B170BC(ServantNumber, v59->obj.klass->_1.element_class);
            if ( !ServantNumber )
              goto LABEL_85;
          }
          if ( v59->max_length <= 3 )
            goto LABEL_83;
          v59->m_Items[3] = v62;
          sub_B16F98(&v59->m_Items[3], v62);
          ServantNumber = StringLiteral_17881;
          if ( StringLiteral_17881 )
          {
            ServantNumber = sub_B170BC(StringLiteral_17881, v59->obj.klass->_1.element_class);
            if ( !ServantNumber )
              goto LABEL_85;
            v31 = (BattleCommandData_o *)StringLiteral_17881;
          }
          else
          {
            v31 = 0LL;
          }
          if ( v59->max_length <= 4 )
            goto LABEL_83;
          v59->m_Items[4] = (Il2CppObject *)v31;
          sub_B16F98(&v59->m_Items[4], v31);
          npGaugeEffectMoveDelayTime = _4__this->fields.npGaugeEffectMoveDelayTime;
          ServantNumber = j_il2cpp_value_box_0(float_TypeInfo, &npGaugeEffectMoveDelayTime);
          v63 = (Il2CppObject *)ServantNumber;
          if ( ServantNumber )
          {
            ServantNumber = sub_B170BC(ServantNumber, v59->obj.klass->_1.element_class);
            if ( !ServantNumber )
              goto LABEL_85;
          }
          if ( v59->max_length <= 5 )
            goto LABEL_83;
          v59->m_Items[5] = v63;
          sub_B16F98(&v59->m_Items[5], v63);
          ServantNumber = StringLiteral_22584;
          if ( StringLiteral_22584 )
          {
            ServantNumber = sub_B170BC(StringLiteral_22584, v59->obj.klass->_1.element_class);
            if ( !ServantNumber )
              goto LABEL_85;
            v31 = (BattleCommandData_o *)StringLiteral_22584;
          }
          else
          {
            v31 = 0LL;
          }
          if ( v59->max_length <= 6 )
          {
LABEL_83:
            sub_B17100(ServantNumber, v31, v32);
            sub_B170A0();
          }
          v59->m_Items[6] = (Il2CppObject *)v31;
          sub_B16F98(&v59->m_Items[6], v31);
          npGaugeEffectMoveTime = _4__this->fields.npGaugeEffectMoveTime;
          ServantNumber = j_il2cpp_value_box_0(float_TypeInfo, &npGaugeEffectMoveTime);
          v64 = (Il2CppObject *)ServantNumber;
          if ( ServantNumber )
          {
            ServantNumber = sub_B170BC(ServantNumber, v59->obj.klass->_1.element_class);
            if ( !ServantNumber )
              goto LABEL_85;
          }
          if ( v59->max_length <= 7 )
            goto LABEL_83;
          v59->m_Items[7] = v64;
          sub_B16F98(&v59->m_Items[7], v64);
          if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
          v65 = iTween__Hash(v59, 0LL);
          iTween__MoveTo_18434272(Object_19257936, v65, 0LL);
          v48->fields.nobleGaugeEffect = Object_19257936;
          sub_B16F98(&v48->fields.nobleGaugeEffect, Object_19257936);
        }
      }
    }
    p_commandlist = _4__this->fields.p_commandlist;
    ++v40;
    if ( !p_commandlist )
      goto LABEL_69;
  }
  npCardEffectDelayTime = _4__this->fields.npCardEffectDelayTime;
  v72 = (UnityEngine_WaitForSeconds_o *)sub_B170CC(UnityEngine_WaitForSeconds_TypeInfo, v31, v32, v33, v34);
  UnityEngine_WaitForSeconds___ctor(v72, npCardEffectDelayTime, 0LL);
  this->fields.__2__current = (Il2CppObject *)v72;
  v73 = &this->fields.__2__current;
  sub_B16F98(v73, v72);
  result = 1;
  *((_DWORD *)v73 - 2) = 1;
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
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  __int64 v6; // x4
  System_NotSupportedException_o *v7; // x0
  __int64 v8; // x1

  v2 = sub_B17000(&System_NotSupportedException_TypeInfo, method);
  v7 = (System_NotSupportedException_o *)sub_B170CC(v2, v3, v4, v5, v6);
  System_NotSupportedException___ctor(v7, 0LL);
  sub_B17000(&Method_BattlePerformanceCommandCard__colOpenNpCard_d__182_System_Collections_IEnumerator_Reset__, v8);
  sub_B170A0();
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
  __int64 v3; // x1
  struct BattlePerformanceCommandCard_o *_4__this; // x20
  BattlePerformance_o *v5; // x0
  struct BattleComboData_o *combo; // x1
  UnityEngine_Object_o *v7; // x21
  DefCoroutine_c *v8; // x0
  Il2CppObject *milliSecNine; // x1
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  BattlePerformance_o *perf; // x0
  BattleLogic_o *logic; // x0
  struct BattleComboData_o *v14; // x8
  DefCoroutine_c *v15; // x0
  Il2CppObject *milliSecThree; // x1
  Il2CppObject **v17; // x19
  int v18; // w8
  DefCoroutine_c *v19; // x0
  Il2CppObject *milliSecTwo; // x1
  BattlePerformance_o *v21; // x0
  DefCoroutine_c *v22; // x0
  Il2CppObject *milliSecFour; // x1
  BattlePerformance_o *v24; // x0
  DefCoroutine_c *v25; // x0
  Il2CppObject *v26; // x1
  BattlePerformance_o *v27; // x0
  Il2CppObject *milliSecEleven; // x1
  int32_t seName; // [xsp+Ch] [xbp-24h] BYREF
  UnityEngine_GameObject_o *prefab; // [xsp+18h] [xbp-18h] BYREF

  if ( (byte_40F7175 & 1) == 0 )
  {
    sub_B16FFC(&DefCoroutine_TypeInfo, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v3);
    byte_40F7175 = 1;
  }
  prefab = 0LL;
  seName = 0;
  _4__this = this->fields.__4__this;
  switch ( this->fields.__1__state )
  {
    case 0:
      this->fields.__1__state = -1;
      prefab = 0LL;
      seName = -1;
      if ( !_4__this )
        goto LABEL_55;
      BattlePerformanceCommandCard__setComboEffectPrefab(_4__this, this->fields.combo, &prefab, &seName, 0LL);
      v7 = (UnityEngine_Object_o *)prefab;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Inequality(v7, 0LL, 0LL) )
        goto LABEL_20;
      BattlePerformanceCommandCard__playComboEffect(_4__this, prefab, seName, 0LL);
      v8 = DefCoroutine_TypeInfo;
      if ( (BYTE3(DefCoroutine_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DefCoroutine_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DefCoroutine_TypeInfo);
        v8 = DefCoroutine_TypeInfo;
      }
      milliSecNine = (Il2CppObject *)v8->static_fields->milliSecNine;
      this->fields.__2__current = milliSecNine;
      p__2__current = &this->fields.__2__current;
      sub_B16F98(p__2__current, milliSecNine);
      result = 1;
      *((_DWORD *)p__2__current - 2) = 1;
      return result;
    case 1:
      this->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_55;
      perf = _4__this->fields.perf;
      if ( !perf )
        goto LABEL_55;
      BattlePerformance__ChangeBattleSpeed(perf, 0LL);
LABEL_20:
      logic = _4__this->fields.logic;
      if ( !logic )
        goto LABEL_55;
      BattleLogic__procComboAct(logic, 0LL);
      combo = this->fields.combo;
      if ( !combo )
        goto LABEL_55;
      if ( combo->fields.flash )
      {
        BattlePerformanceCommandCard__PlayFlash(_4__this, combo, 0LL);
        v14 = this->fields.combo;
        if ( !v14 )
LABEL_55:
          sub_B170D4();
        v15 = DefCoroutine_TypeInfo;
        if ( v14->fields.samecount == 3 )
        {
          if ( (WORD1(DefCoroutine_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !DefCoroutine_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(DefCoroutine_TypeInfo);
            v15 = DefCoroutine_TypeInfo;
          }
          milliSecThree = (Il2CppObject *)v15->static_fields->milliSecThree;
          this->fields.__2__current = milliSecThree;
          v17 = &this->fields.__2__current;
          sub_B16F98(v17, milliSecThree);
          v18 = 2;
        }
        else
        {
          if ( (WORD1(DefCoroutine_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !DefCoroutine_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(DefCoroutine_TypeInfo);
            v15 = DefCoroutine_TypeInfo;
          }
          milliSecEleven = (Il2CppObject *)v15->static_fields->milliSecEleven;
          this->fields.__2__current = milliSecEleven;
          v17 = &this->fields.__2__current;
          sub_B16F98(v17, milliSecEleven);
          v18 = 3;
        }
      }
      else
      {
LABEL_29:
        if ( combo->fields.samecount != 3 )
          return 0;
        BattlePerformanceCommandCard__PlayFlashComboSvt(_4__this, combo, 0LL);
        v19 = DefCoroutine_TypeInfo;
        if ( (BYTE3(DefCoroutine_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DefCoroutine_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DefCoroutine_TypeInfo);
          v19 = DefCoroutine_TypeInfo;
        }
        milliSecTwo = (Il2CppObject *)v19->static_fields->milliSecTwo;
        this->fields.__2__current = milliSecTwo;
        v17 = &this->fields.__2__current;
        sub_B16F98(v17, milliSecTwo);
        v18 = 4;
      }
LABEL_54:
      *((_DWORD *)v17 - 2) = v18;
      return 1;
    case 2:
    case 3:
      this->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_55;
      v5 = _4__this->fields.perf;
      if ( !v5 )
        goto LABEL_55;
      BattlePerformance__ChangeBattleSpeed(v5, 0LL);
      combo = this->fields.combo;
      if ( !combo )
        goto LABEL_55;
      goto LABEL_29;
    case 4:
      this->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_55;
      v21 = _4__this->fields.perf;
      if ( !v21 )
        goto LABEL_55;
      BattlePerformance__ChangeBattleSpeed(v21, 0LL);
      BattlePerformanceCommandCard__MoveSelectedCard(_4__this, 0.3, 0LL);
      BattlePerformanceCommandCard__AddExtraCard(_4__this, 0LL);
      BattlePerformanceCommandCard__MoveExtraCard(_4__this, 0.4, 0LL);
      v22 = DefCoroutine_TypeInfo;
      if ( (BYTE3(DefCoroutine_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DefCoroutine_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DefCoroutine_TypeInfo);
        v22 = DefCoroutine_TypeInfo;
      }
      milliSecFour = (Il2CppObject *)v22->static_fields->milliSecFour;
      this->fields.__2__current = milliSecFour;
      v17 = &this->fields.__2__current;
      sub_B16F98(v17, milliSecFour);
      v18 = 5;
      goto LABEL_54;
    case 5:
      this->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_55;
      v24 = _4__this->fields.perf;
      if ( !v24 )
        goto LABEL_55;
      BattlePerformance__ChangeBattleSpeed(v24, 0LL);
      BattlePerformanceCommandCard__PlayFlashExtra(_4__this, 0LL);
      v25 = DefCoroutine_TypeInfo;
      if ( (BYTE3(DefCoroutine_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DefCoroutine_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DefCoroutine_TypeInfo);
        v25 = DefCoroutine_TypeInfo;
      }
      v26 = (Il2CppObject *)v25->static_fields->milliSecEleven;
      this->fields.__2__current = v26;
      v17 = &this->fields.__2__current;
      sub_B16F98(v17, v26);
      v18 = 6;
      goto LABEL_54;
    case 6:
      this->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_55;
      v27 = _4__this->fields.perf;
      if ( !v27 )
        goto LABEL_55;
      BattlePerformance__ChangeBattleSpeed(v27, 0LL);
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
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  __int64 v6; // x4
  System_NotSupportedException_o *v7; // x0
  __int64 v8; // x1

  v2 = sub_B17000(&System_NotSupportedException_TypeInfo, method);
  v7 = (System_NotSupportedException_o *)sub_B170CC(v2, v3, v4, v5, v6);
  System_NotSupportedException___ctor(v7, 0LL);
  sub_B17000(
    &Method_BattlePerformanceCommandCard__showComboEffectNormal_d__135_System_Collections_IEnumerator_Reset__,
    v8);
  sub_B170A0();
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct BattlePerformanceCommandCard_o *_4__this; // x20
  BattlePerformance_o *perf; // x0
  BattleLogic_o *logic; // x0
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  struct BattleComboData_o *v16; // x1
  BattleComboData_o **p_combo; // x24
  DefCoroutine_c *v18; // x0
  Il2CppObject *milliSecThreeSixSix; // x1
  Il2CppObject **p__2__current; // x19
  int v21; // w8
  Il2CppObject *milliSecEightSixSix; // x1
  BattlePerformance_o *v23; // x0
  System_Collections_Generic_IEnumerable_TSource__o *selectedcomponents; // x21
  BattlePerformanceCommandCard___c_c *v25; // x0
  struct BattlePerformanceCommandCard___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__134_0; // x22
  Il2CppObject *v28; // x23
  struct BattlePerformanceCommandCard___c_StaticFields *v29; // x0
  UICommonButton_o *v30; // x0
  struct BattlePerformance_o *v31; // x8
  BattleData_o *data; // x0
  int32_t FirstBonusCriticalRate; // w0
  bool isExtraAttack; // w0
  DefCoroutine_c *v35; // x8
  Il2CppObject **p_milliSecThreeSixSix; // x8
  BattlePerformance_o *v37; // x0
  Il2CppObject *v38; // x1
  BattlePerformance_o *v39; // x0
  DefCoroutine_c *v40; // x0
  Il2CppObject *milliSecTwo; // x1
  bool result; // w0
  BattlePerformance_o *v43; // x0
  struct BattleComboData_o *v44; // x8
  DefCoroutine_c *v45; // x0
  Il2CppObject *milliSecFour; // x1
  UnityEngine_Object_o *v47; // x21
  BattleComboData_o *combo; // x0
  struct BattleComboData_o *v49; // x8
  DefCoroutine_c *v50; // x0
  Il2CppObject *v51; // x1
  Il2CppObject **v52; // x19
  BattlePerformance_o *v53; // x0
  DefCoroutine_c *v54; // x0
  Il2CppObject *v55; // x1
  Il2CppObject *v56; // x1
  DefCoroutine_c *v57; // x0
  Il2CppObject *milliSecNine; // x1
  DefCoroutine_c *v59; // x0
  Il2CppObject *milliSecThreeThreeThree; // x1
  Il2CppObject *v61; // x1
  DefCoroutine_c *v62; // x0
  Il2CppObject *milliSecTwoSixSix; // x1
  Il2CppObject *milliSecThree; // x1
  int32_t seName; // [xsp+4h] [xbp-4Ch] BYREF
  UnityEngine_GameObject_o *prefab; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_40F7176 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Array_IndexOf_BattleCommandComponent___, method);
    sub_B16FFC(&DefCoroutine_TypeInfo, v3);
    sub_B16FFC(&Method_System_Linq_Enumerable_FirstOrDefault_BattleCommandComponent___, v4);
    sub_B16FFC(&Method_System_Func_BattleCommandComponent__bool___ctor__, v5);
    sub_B16FFC(&System_Func_BattleCommandComponent__bool__TypeInfo, v6);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v7);
    sub_B16FFC(&Method_BattlePerformanceCommandCard___c__showComboEffectShort_b__134_0__, v8);
    sub_B16FFC(&BattlePerformanceCommandCard___c_TypeInfo, v9);
    byte_40F7176 = 1;
  }
  prefab = 0LL;
  seName = 0;
  _4__this = this->fields.__4__this;
  switch ( this->fields.__1__state )
  {
    case 0:
      this->fields.__1__state = -1;
      prefab = 0LL;
      seName = -1;
      if ( !_4__this )
        goto LABEL_116;
      BattlePerformanceCommandCard__setComboEffectPrefab(_4__this, this->fields.combo, &prefab, &seName, 0LL);
      v47 = (UnityEngine_Object_o *)prefab;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Inequality(v47, 0LL, 0LL) )
        goto LABEL_7;
      BattlePerformanceCommandCard__playComboEffect(_4__this, prefab, seName, 0LL);
      combo = this->fields.combo;
      if ( !combo )
        goto LABEL_116;
      if ( !BattleComboData__AchieveAnyChain(combo, 0LL) )
      {
        v57 = DefCoroutine_TypeInfo;
        if ( (BYTE3(DefCoroutine_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DefCoroutine_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DefCoroutine_TypeInfo);
          v57 = DefCoroutine_TypeInfo;
        }
        milliSecNine = (Il2CppObject *)v57->static_fields->milliSecNine;
        this->fields.__2__current = milliSecNine;
        p__2__current = &this->fields.__2__current;
        sub_B16F98(p__2__current, milliSecNine);
        v21 = 6;
        goto LABEL_115;
      }
      v49 = this->fields.combo;
      if ( !v49 )
        goto LABEL_116;
      if ( !v49->fields.flash )
      {
        if ( !v49->fields.isMighty )
          goto LABEL_106;
        if ( BattleComboData__isExtraAttack(this->fields.combo, 0LL) )
        {
          v59 = DefCoroutine_TypeInfo;
          if ( (BYTE3(DefCoroutine_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !DefCoroutine_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(DefCoroutine_TypeInfo);
            v59 = DefCoroutine_TypeInfo;
          }
          milliSecThreeThreeThree = (Il2CppObject *)v59->static_fields->milliSecThreeThreeThree;
          this->fields.__2__current = milliSecThreeThreeThree;
          p__2__current = &this->fields.__2__current;
          sub_B16F98(p__2__current, milliSecThreeThreeThree);
          v21 = 3;
          goto LABEL_115;
        }
        v49 = this->fields.combo;
        if ( v49 )
        {
LABEL_106:
          v62 = DefCoroutine_TypeInfo;
          if ( v49->fields.isMighty )
          {
            if ( (WORD1(DefCoroutine_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
              && !DefCoroutine_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(DefCoroutine_TypeInfo);
              v62 = DefCoroutine_TypeInfo;
            }
            milliSecTwoSixSix = (Il2CppObject *)v62->static_fields->milliSecTwoSixSix;
            this->fields.__2__current = milliSecTwoSixSix;
            p__2__current = &this->fields.__2__current;
            sub_B16F98(p__2__current, milliSecTwoSixSix);
            v21 = 4;
          }
          else
          {
            if ( (WORD1(DefCoroutine_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
              && !DefCoroutine_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(DefCoroutine_TypeInfo);
              v62 = DefCoroutine_TypeInfo;
            }
            milliSecThree = (Il2CppObject *)v62->static_fields->milliSecThree;
            this->fields.__2__current = milliSecThree;
            p__2__current = &this->fields.__2__current;
            sub_B16F98(p__2__current, milliSecThree);
            v21 = 5;
          }
          goto LABEL_115;
        }
LABEL_116:
        sub_B170D4();
      }
      v50 = DefCoroutine_TypeInfo;
      if ( v49->fields.samecount != 3 )
      {
        if ( (WORD1(DefCoroutine_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !DefCoroutine_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DefCoroutine_TypeInfo);
          v50 = DefCoroutine_TypeInfo;
        }
        v61 = (Il2CppObject *)v50->static_fields->milliSecTwoSixSix;
        this->fields.__2__current = v61;
        p__2__current = &this->fields.__2__current;
        sub_B16F98(p__2__current, v61);
        v21 = 2;
LABEL_115:
        *((_DWORD *)p__2__current - 2) = v21;
        return 1;
      }
      if ( (WORD1(DefCoroutine_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !DefCoroutine_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DefCoroutine_TypeInfo);
        v50 = DefCoroutine_TypeInfo;
      }
      v51 = (Il2CppObject *)v50->static_fields->milliSecThreeThreeThree;
      this->fields.__2__current = v51;
      v52 = &this->fields.__2__current;
      sub_B16F98(v52, v51);
      result = 1;
      *((_DWORD *)v52 - 2) = 1;
      return result;
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
      this->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_116;
      perf = _4__this->fields.perf;
      if ( !perf )
        goto LABEL_116;
      BattlePerformance__ChangeBattleSpeed(perf, 0LL);
LABEL_7:
      logic = _4__this->fields.logic;
      if ( !logic )
        goto LABEL_116;
      BattleLogic__procComboAct(logic, 0LL);
      p_combo = &this->fields.combo;
      v16 = this->fields.combo;
      if ( !v16 )
        goto LABEL_116;
      if ( v16->fields.flash )
      {
        BattlePerformanceCommandCard__PlayFlash(_4__this, v16, 0LL);
        if ( *p_combo )
        {
          v18 = DefCoroutine_TypeInfo;
          if ( (*p_combo)->fields.samecount == 3 )
          {
            if ( (WORD1(DefCoroutine_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
              && !DefCoroutine_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(DefCoroutine_TypeInfo);
              v18 = DefCoroutine_TypeInfo;
            }
            milliSecThreeSixSix = (Il2CppObject *)v18->static_fields->milliSecThreeSixSix;
            this->fields.__2__current = milliSecThreeSixSix;
            p__2__current = &this->fields.__2__current;
            sub_B16F98(p__2__current, milliSecThreeSixSix);
            v21 = 7;
          }
          else
          {
            if ( (WORD1(DefCoroutine_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
              && !DefCoroutine_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(DefCoroutine_TypeInfo);
              v18 = DefCoroutine_TypeInfo;
            }
            milliSecEightSixSix = (Il2CppObject *)v18->static_fields->milliSecEightSixSix;
            this->fields.__2__current = milliSecEightSixSix;
            p__2__current = &this->fields.__2__current;
            sub_B16F98(p__2__current, milliSecEightSixSix);
            v21 = 8;
          }
          goto LABEL_115;
        }
      }
      else
      {
LABEL_23:
        if ( !v16->fields.isMighty )
        {
LABEL_53:
          if ( v16->fields.samecount != 3 )
            return 0;
          BattlePerformanceCommandCard__PlayFlashComboSvt(_4__this, v16, 0LL);
          v40 = DefCoroutine_TypeInfo;
          if ( (BYTE3(DefCoroutine_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !DefCoroutine_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(DefCoroutine_TypeInfo);
            v40 = DefCoroutine_TypeInfo;
          }
          milliSecTwo = (Il2CppObject *)v40->static_fields->milliSecTwo;
          this->fields.__2__current = milliSecTwo;
          p__2__current = &this->fields.__2__current;
          sub_B16F98(p__2__current, milliSecTwo);
          v21 = 10;
          goto LABEL_115;
        }
        selectedcomponents = (System_Collections_Generic_IEnumerable_TSource__o *)_4__this->fields.selectedcomponents;
        v25 = BattlePerformanceCommandCard___c_TypeInfo;
        if ( (BYTE3(BattlePerformanceCommandCard___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BattlePerformanceCommandCard___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BattlePerformanceCommandCard___c_TypeInfo);
          v25 = BattlePerformanceCommandCard___c_TypeInfo;
        }
        static_fields = v25->static_fields;
        _9__134_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__134_0;
        if ( !_9__134_0 )
        {
          if ( (BYTE3(v25->vtable._0_Equals.methodPtr) & 4) != 0 && !v25->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v25);
            static_fields = BattlePerformanceCommandCard___c_TypeInfo->static_fields;
          }
          v28 = (Il2CppObject *)static_fields->__9;
          _9__134_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                                           System_Func_BattleCommandComponent__bool__TypeInfo,
                                                                                           v16,
                                                                                           v13,
                                                                                           v14,
                                                                                           v15);
          System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
            _9__134_0,
            v28,
            Method_BattlePerformanceCommandCard___c__showComboEffectShort_b__134_0__,
            (const MethodInfo_2B6AB40 *)Method_System_Func_BattleCommandComponent__bool___ctor__);
          v29 = BattlePerformanceCommandCard___c_TypeInfo->static_fields;
          v29->__9__134_0 = (struct System_Func_BattleCommandComponent__bool__o *)_9__134_0;
          sub_B16F98(&v29->__9__134_0, _9__134_0);
        }
        v30 = (UICommonButton_o *)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                                    selectedcomponents,
                                    (System_Func_TSource__bool__o *)_9__134_0,
                                    (const MethodInfo_18D8450 *)Method_System_Linq_Enumerable_FirstOrDefault_BattleCommandComponent___);
        if ( System_Array__IndexOf_UICommonButton_(
               (UICommonButton_array *)_4__this->fields.selectedcomponents,
               v30,
               (const MethodInfo_20456B0 *)Method_System_Array_IndexOf_BattleCommandComponent___) >= 1 )
        {
          v31 = _4__this->fields.perf;
          if ( !v31 )
            goto LABEL_116;
          data = v31->fields.data;
          if ( !data )
            goto LABEL_116;
          FirstBonusCriticalRate = BattleData__GetFirstBonusCriticalRate(data, 3, 0LL);
          BattlePerformanceCommandCard__DistributeCriticalPoint(_4__this, FirstBonusCriticalRate / 10, 1, 0LL);
        }
        if ( *p_combo )
        {
          isExtraAttack = BattleComboData__isExtraAttack(*p_combo, 0LL);
          v35 = DefCoroutine_TypeInfo;
          if ( isExtraAttack )
          {
            if ( (WORD1(DefCoroutine_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
              && !DefCoroutine_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(DefCoroutine_TypeInfo);
              v35 = DefCoroutine_TypeInfo;
            }
            p_milliSecThreeSixSix = (Il2CppObject **)&v35->static_fields->milliSecThreeSixSix;
          }
          else
          {
            if ( (WORD1(DefCoroutine_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
              && !DefCoroutine_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(DefCoroutine_TypeInfo);
              v35 = DefCoroutine_TypeInfo;
            }
            p_milliSecThreeSixSix = (Il2CppObject **)&v35->static_fields->milliSecEightSixSix;
          }
          v38 = *p_milliSecThreeSixSix;
          this->fields.__2__current = *p_milliSecThreeSixSix;
          p__2__current = &this->fields.__2__current;
          sub_B16F98(p__2__current, v38);
          v21 = 9;
          goto LABEL_115;
        }
      }
      goto LABEL_116;
    case 7:
    case 8:
      this->fields.__1__state = -1;
      if ( _4__this )
      {
        v23 = _4__this->fields.perf;
        if ( v23 )
        {
          BattlePerformance__ChangeBattleSpeed(v23, 0LL);
          p_combo = &this->fields.combo;
          v16 = this->fields.combo;
          if ( v16 )
            goto LABEL_23;
        }
      }
      goto LABEL_116;
    case 9:
      this->fields.__1__state = -1;
      if ( _4__this )
      {
        v39 = _4__this->fields.perf;
        if ( v39 )
        {
          BattlePerformance__ChangeBattleSpeed(v39, 0LL);
          v16 = this->fields.combo;
          if ( v16 )
            goto LABEL_53;
        }
      }
      goto LABEL_116;
    case 0xA:
      this->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_116;
      v53 = _4__this->fields.perf;
      if ( !v53 )
        goto LABEL_116;
      BattlePerformance__ChangeBattleSpeed(v53, 0LL);
      BattlePerformanceCommandCard__MoveSelectedCard(_4__this, 0.3, 0LL);
      BattlePerformanceCommandCard__AddExtraCard(_4__this, 0LL);
      BattlePerformanceCommandCard__MoveExtraCard(_4__this, 0.3, 0LL);
      v54 = DefCoroutine_TypeInfo;
      if ( (BYTE3(DefCoroutine_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DefCoroutine_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DefCoroutine_TypeInfo);
        v54 = DefCoroutine_TypeInfo;
      }
      v55 = (Il2CppObject *)v54->static_fields->milliSecTwoSixSix;
      this->fields.__2__current = v55;
      p__2__current = &this->fields.__2__current;
      sub_B16F98(p__2__current, v55);
      v21 = 11;
      goto LABEL_115;
    case 0xB:
      this->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_116;
      v43 = _4__this->fields.perf;
      if ( !v43 )
        goto LABEL_116;
      BattlePerformance__ChangeBattleSpeed(v43, 0LL);
      BattlePerformanceCommandCard__PlayFlashExtra(_4__this, 0LL);
      v44 = this->fields.combo;
      if ( !v44 )
        goto LABEL_116;
      v45 = DefCoroutine_TypeInfo;
      if ( v44->fields.flash )
      {
        if ( (WORD1(DefCoroutine_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !DefCoroutine_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DefCoroutine_TypeInfo);
          v45 = DefCoroutine_TypeInfo;
        }
        milliSecFour = (Il2CppObject *)v45->static_fields->milliSecFour;
        this->fields.__2__current = milliSecFour;
        p__2__current = &this->fields.__2__current;
        sub_B16F98(p__2__current, milliSecFour);
        v21 = 13;
      }
      else
      {
        if ( (WORD1(DefCoroutine_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !DefCoroutine_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DefCoroutine_TypeInfo);
          v45 = DefCoroutine_TypeInfo;
        }
        v56 = (Il2CppObject *)v45->static_fields->milliSecThreeThreeThree;
        this->fields.__2__current = v56;
        p__2__current = &this->fields.__2__current;
        sub_B16F98(p__2__current, v56);
        v21 = 12;
      }
      goto LABEL_115;
    case 0xC:
    case 0xD:
      this->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_116;
      v37 = _4__this->fields.perf;
      if ( !v37 )
        goto LABEL_116;
      BattlePerformance__ChangeBattleSpeed(v37, 0LL);
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
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  __int64 v6; // x4
  System_NotSupportedException_o *v7; // x0
  __int64 v8; // x1

  v2 = sub_B17000(&System_NotSupportedException_TypeInfo, method);
  v7 = (System_NotSupportedException_o *)sub_B170CC(v2, v3, v4, v5, v6);
  System_NotSupportedException___ctor(v7, 0LL);
  sub_B17000(
    &Method_BattlePerformanceCommandCard__showComboEffectShort_d__134_System_Collections_IEnumerator_Reset__,
    v8);
  sub_B170A0();
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
  __int64 v3; // x1
  struct BattlePerformanceCommandCard_o *_4__this; // x20
  DefCoroutine_c *v5; // x0
  Il2CppObject *milliSecOne; // x1
  Il2CppObject **p__2__current; // x19
  UnityEngine_Object_o *chainBonusObject; // x21
  TweenColor_o *isBLANK; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  UnityEngine_Object_o *v12; // x21
  __int64 v13; // x22
  struct BattleCommandComponent_array *selectedcomponents; // x8
  BattleCommandComponent_o *v15; // x0
  int32_t CommandType; // w0
  struct BattleCommandComponent_array *v17; // x8
  UnityEngine_Component_o *v18; // x0
  UnityEngine_GameObject_o *gameObject; // x21
  float g; // s5
  float b; // s6
  float a; // s7
  float v23; // s4
  struct BattleComboData_o *combo; // x0
  System_Collections_IEnumerator_o *v25; // x0
  Il2CppObject *v26; // x0
  int32_t v27; // w8
  System_Collections_IEnumerator_o *v28; // x0
  Il2CppObject *started; // x0
  bool result; // w0
  BattlePerformance_o *perf; // x0
  PlayMakerFSM_o *commandfsm; // x0
  DefCoroutine_c *v33; // x0
  Il2CppObject *milliSecFour; // x1
  Il2CppObject **v35; // x19
  UnityEngine_Color_o clear; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4 OVERLAPPED

  if ( (byte_40F7174 & 1) == 0 )
  {
    sub_B16FFC(&DefCoroutine_TypeInfo, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v3);
    byte_40F7174 = 1;
  }
  _4__this = this->fields.__4__this;
  switch ( this->fields.__1__state )
  {
    case 0:
      this->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_44;
      chainBonusObject = (UnityEngine_Object_o *)_4__this->fields.chainBonusObject;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      isBLANK = (TweenColor_o *)UnityEngine_Object__op_Inequality(chainBonusObject, 0LL, 0LL);
      if ( ((unsigned __int8)isBLANK & 1) != 0 )
      {
        v12 = (UnityEngine_Object_o *)_4__this->fields.chainBonusObject;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        UnityEngine_Object__Destroy_34809464(v12, 0LL);
      }
      v13 = 0LL;
      break;
    case 1:
      this->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_44;
      v28 = BattlePerformanceCommandCard__showComboEffectNormal(_4__this, this->fields.combo, 0LL);
      started = (Il2CppObject *)UnityEngine_MonoBehaviour__StartCoroutine_34804316(
                                  (UnityEngine_MonoBehaviour_o *)_4__this,
                                  v28,
                                  0LL);
      this->fields.__2__current = started;
      sub_B16F98(&this->fields.__2__current, started);
      v27 = 2;
      goto LABEL_33;
    case 2:
    case 3:
      this->fields.__1__state = -1;
      v5 = DefCoroutine_TypeInfo;
      if ( (BYTE3(DefCoroutine_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DefCoroutine_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DefCoroutine_TypeInfo);
        v5 = DefCoroutine_TypeInfo;
      }
      milliSecOne = (Il2CppObject *)v5->static_fields->milliSecOne;
      this->fields.__2__current = milliSecOne;
      p__2__current = &this->fields.__2__current;
      sub_B16F98(p__2__current, milliSecOne);
      *((_DWORD *)p__2__current - 2) = 4;
      return 1;
    case 4:
      this->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_44;
      perf = _4__this->fields.perf;
      if ( !perf )
        goto LABEL_44;
      BattlePerformance__ChangeBattleSpeed(perf, 0LL);
      commandfsm = _4__this->fields.commandfsm;
      if ( !commandfsm )
        goto LABEL_44;
      PlayMakerFSM__SendEvent(commandfsm, this->fields.endproc, 0LL);
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
    v15 = selectedcomponents->m_Items[v13];
    if ( !v15 )
      goto LABEL_44;
    CommandType = BattleCommandComponent__getCommandType(v15, 0LL);
    isBLANK = (TweenColor_o *)BattleCommand__isBLANK(CommandType, 0LL);
    if ( ((unsigned __int8)isBLANK & 1) != 0 )
    {
      v17 = _4__this->fields.selectedcomponents;
      if ( !v17 )
        goto LABEL_44;
      if ( (unsigned int)v13 >= v17->max_length )
      {
LABEL_45:
        sub_B17100(isBLANK, v10, v11);
        sub_B170A0();
      }
      v18 = (UnityEngine_Component_o *)v17->m_Items[v13];
      if ( !v18 )
        goto LABEL_44;
      gameObject = UnityEngine_Component__get_gameObject(v18, 0LL);
      clear = UnityEngine_Color__get_clear(0LL);
      g = clear.fields.g;
      b = clear.fields.b;
      a = clear.fields.a;
      clear.fields.g = clear.fields.r;
      clear.fields.b = g;
      clear.fields.a = b;
      v23 = a;
      isBLANK = TweenColor__Begin(gameObject, 0.2, *(UnityEngine_Color_o *)&clear.fields.g, 0LL);
    }
    ++v13;
  }
  while ( (unsigned int)(v13 - 1) < 2 );
  combo = this->fields.combo;
  if ( !combo )
LABEL_44:
    sub_B170D4();
  if ( combo->fields.chainError || !BattleComboData__AchieveAnyChain(combo, 0LL) )
  {
    v33 = DefCoroutine_TypeInfo;
    if ( (BYTE3(DefCoroutine_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !DefCoroutine_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(DefCoroutine_TypeInfo);
      v33 = DefCoroutine_TypeInfo;
    }
    milliSecFour = (Il2CppObject *)v33->static_fields->milliSecFour;
    this->fields.__2__current = milliSecFour;
    v35 = &this->fields.__2__current;
    sub_B16F98(v35, milliSecFour);
    result = 1;
    *((_DWORD *)v35 - 2) = 1;
  }
  else
  {
    v25 = BattlePerformanceCommandCard__showComboEffectShort(_4__this, this->fields.combo, 0LL);
    v26 = (Il2CppObject *)UnityEngine_MonoBehaviour__StartCoroutine_34804316(
                            (UnityEngine_MonoBehaviour_o *)_4__this,
                            v25,
                            0LL);
    this->fields.__2__current = v26;
    sub_B16F98(&this->fields.__2__current, v26);
    v27 = 3;
LABEL_33:
    this->fields.__1__state = v27;
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
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  __int64 v6; // x4
  System_NotSupportedException_o *v7; // x0
  __int64 v8; // x1

  v2 = sub_B17000(&System_NotSupportedException_TypeInfo, method);
  v7 = (System_NotSupportedException_o *)sub_B170CC(v2, v3, v4, v5, v6);
  System_NotSupportedException___ctor(v7, 0LL);
  sub_B17000(&Method_BattlePerformanceCommandCard__showComboEffect_d__133_System_Collections_IEnumerator_Reset__, v8);
  sub_B170A0();
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
  __int64 v2; // x2
  BattlePerformanceCommandCard__waitFallStar_d__97_o *v3; // x19
  int32_t _1__state; // w8
  BattlePerformanceCommandCard_o *_4__this; // x20
  struct BattleCommandComponent_array *commandCompArray; // x8
  il2cpp_array_size_t v7; // w21
  il2cpp_array_size_t max_length; // w9
  BattleCommandComponent_o *v9; // x0
  DefCoroutine_c *v10; // x0
  Il2CppObject *milliSecFive; // x1
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  DefCoroutine_c *v14; // x0
  Il2CppObject *milliSecThree; // x1
  Il2CppObject **v16; // x19

  v3 = this;
  if ( (byte_40F7177 & 1) == 0 )
  {
    this = (BattlePerformanceCommandCard__waitFallStar_d__97_o *)sub_B16FFC(&DefCoroutine_TypeInfo, method);
    byte_40F7177 = 1;
  }
  _1__state = v3->fields.__1__state;
  _4__this = v3->fields.__4__this;
  if ( _1__state == 2 )
  {
    v3->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_13;
    BattlePerformanceCommandCard__StartCountupCommandStar(_4__this, 1, 0LL);
    return 0;
  }
  if ( _1__state == 1 )
  {
    v3->fields.__1__state = -1;
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
      milliSecFive = (Il2CppObject *)v10->static_fields->milliSecFive;
      v3->fields.__2__current = milliSecFive;
      p__2__current = &v3->fields.__2__current;
      sub_B16F98(p__2__current, milliSecFive);
      *((_DWORD *)p__2__current - 2) = 2;
      return 1;
    }
    return 0;
  }
  if ( _1__state )
    return 0;
  v3->fields.__1__state = -1;
  if ( !_4__this || (commandCompArray = _4__this->fields.commandCompArray) == 0LL )
LABEL_13:
    sub_B170D4();
  v7 = 0;
  while ( 1 )
  {
    max_length = commandCompArray->max_length;
    if ( (int)v7 >= (int)max_length )
      break;
    if ( v7 >= max_length )
    {
      sub_B17100(this, method, v2);
      sub_B170A0();
    }
    v9 = commandCompArray->m_Items[v7];
    if ( v9 )
    {
      BattleCommandComponent__setCriticalObject(v9, 0, 0LL);
      commandCompArray = _4__this->fields.commandCompArray;
      ++v7;
      if ( commandCompArray )
        continue;
    }
    goto LABEL_13;
  }
  v14 = DefCoroutine_TypeInfo;
  if ( (BYTE3(DefCoroutine_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DefCoroutine_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DefCoroutine_TypeInfo);
    v14 = DefCoroutine_TypeInfo;
  }
  milliSecThree = (Il2CppObject *)v14->static_fields->milliSecThree;
  v3->fields.__2__current = milliSecThree;
  v16 = &v3->fields.__2__current;
  sub_B16F98(v16, milliSecThree);
  result = 1;
  *((_DWORD *)v16 - 2) = 1;
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
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  __int64 v6; // x4
  System_NotSupportedException_o *v7; // x0
  __int64 v8; // x1

  v2 = sub_B17000(&System_NotSupportedException_TypeInfo, method);
  v7 = (System_NotSupportedException_o *)sub_B170CC(v2, v3, v4, v5, v6);
  System_NotSupportedException___ctor(v7, 0LL);
  sub_B17000(&Method_BattlePerformanceCommandCard__waitFallStar_d__97_System_Collections_IEnumerator_Reset__, v8);
  sub_B170A0();
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
  float v5; // s0
  float timer_5__2; // s8
  System_Action_o *callback; // x0
  bool result; // w0
  Il2CppObject **p__2__current; // x19

  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  if ( _1__state == 1 )
  {
    timer_5__2 = this->fields._timer_5__2;
    this->fields.__1__state = -1;
    v5 = timer_5__2 + UnityEngine_Time__get_deltaTime(0LL);
    this->fields._timer_5__2 = v5;
  }
  else
  {
    if ( _1__state )
      return 0;
    this->fields.__1__state = -1;
    this->fields._timer_5__2 = 0.0;
    if ( !_4__this )
LABEL_14:
      sub_B170D4();
    BattlePerformanceCommandCard__setAtkButtonFlg(_4__this, 0, 0LL);
    v5 = this->fields._timer_5__2;
  }
  if ( v5 >= this->fields.waittime )
  {
LABEL_10:
    callback = this->fields.callback;
    if ( callback )
    {
      System_Action__Invoke(callback, 0LL);
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
  this->fields.__2__current = 0LL;
  p__2__current = &this->fields.__2__current;
  sub_B16F98(p__2__current, 0LL);
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
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  __int64 v6; // x4
  System_NotSupportedException_o *v7; // x0
  __int64 v8; // x1

  v2 = sub_B17000(&System_NotSupportedException_TypeInfo, method);
  v7 = (System_NotSupportedException_o *)sub_B170CC(v2, v3, v4, v5, v6);
  System_NotSupportedException___ctor(v7, 0LL);
  sub_B17000(&Method_BattlePerformanceCommandCard__waitFunc_d__171_System_Collections_IEnumerator_Reset__, v8);
  sub_B170A0();
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