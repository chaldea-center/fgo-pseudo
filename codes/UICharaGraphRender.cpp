void __fastcall UICharaGraphRender___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
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
  struct UICharaGraphRender_StaticFields *static_fields; // x8
  __int64 v19; // x0
  __int64 v20; // x1
  unsigned int v21; // w8
  struct UICharaGraphRender_StaticFields *v22; // x9
  __int64 v23; // d2
  struct UICharaGraphRender_StaticFields *v24; // x9
  __int64 v25; // d2
  struct UICharaGraphRender_StaticFields *v26; // x9
  __int64 v27; // d3
  struct UICharaGraphRender_StaticFields *v28; // x9
  __int64 v29; // d2
  struct UICharaGraphRender_StaticFields *v30; // x9
  __int64 v31; // d3
  struct UICharaGraphRender_StaticFields *v32; // x9
  __int64 v33; // d2
  struct UICharaGraphRender_StaticFields *v34; // x9
  __int64 v35; // d3
  struct UICharaGraphRender_StaticFields *v36; // x9
  __int64 v37; // d2
  struct UICharaGraphRender_StaticFields *v38; // x9
  __int64 v39; // d3
  struct UICharaGraphRender_StaticFields *v40; // x9
  __int64 v41; // d2
  struct UICharaGraphRender_StaticFields *v42; // x9
  __int64 v43; // d3
  struct UICharaGraphRender_StaticFields *v44; // x8
  __int64 v45; // d2
  System_Collections_ObjectModel_ReadOnlyCollection_T__o *Only_Rect; // x0
  struct UICharaGraphRender_StaticFields *v47; // x8
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  UICharaGraphRender_c *v54; // x8
  System_Array_o *v55; // x0
  int64_t v56; // x19
  struct UICharaGraphRender_StaticFields *v57; // x0
  int64_t v58; // x2
  int32_t v59; // w3
  System_String_o *v60; // x4
  BattleSetupInfo_o *v61; // x5
  FollowerInfo_o *v62; // x6
  PartyListViewItem_o *v63; // x7
  int64_t v64; // x2
  int32_t v65; // w3
  System_String_o *v66; // x4
  BattleSetupInfo_o *v67; // x5
  FollowerInfo_o *v68; // x6
  PartyListViewItem_o *v69; // x7
  int64_t v70; // x19
  int64_t v71; // x1
  int64_t v72; // x2
  int32_t v73; // w3
  System_String_o *v74; // x4
  BattleSetupInfo_o *v75; // x5
  FollowerInfo_o *v76; // x6
  PartyListViewItem_o *v77; // x7
  int64_t v78; // x1
  int64_t v79; // x2
  int32_t v80; // w3
  System_String_o *v81; // x4
  BattleSetupInfo_o *v82; // x5
  FollowerInfo_o *v83; // x6
  PartyListViewItem_o *v84; // x7
  int64_t v85; // x1
  int64_t v86; // x2
  int32_t v87; // w3
  System_String_o *v88; // x4
  BattleSetupInfo_o *v89; // x5
  FollowerInfo_o *v90; // x6
  PartyListViewItem_o *v91; // x7
  int64_t v92; // x1
  int64_t v93; // x2
  int32_t v94; // w3
  System_String_o *v95; // x4
  BattleSetupInfo_o *v96; // x5
  FollowerInfo_o *v97; // x6
  PartyListViewItem_o *v98; // x7
  void *v99; // x1
  int64_t v100; // x2
  int32_t v101; // w3
  System_String_o *v102; // x4
  BattleSetupInfo_o *v103; // x5
  FollowerInfo_o *v104; // x6
  PartyListViewItem_o *v105; // x7
  void *v106; // x1
  struct UICharaGraphRender_StaticFields *v107; // x0
  int64_t v108; // x2
  int32_t v109; // w3
  System_String_o *v110; // x4
  BattleSetupInfo_o *v111; // x5
  FollowerInfo_o *v112; // x6
  PartyListViewItem_o *v113; // x7
  int64_t v114; // x2
  int32_t v115; // w3
  System_String_o *v116; // x4
  BattleSetupInfo_o *v117; // x5
  FollowerInfo_o *v118; // x6
  PartyListViewItem_o *v119; // x7
  int64_t v120; // x19
  int64_t v121; // x1
  int64_t v122; // x2
  int32_t v123; // w3
  System_String_o *v124; // x4
  BattleSetupInfo_o *v125; // x5
  FollowerInfo_o *v126; // x6
  PartyListViewItem_o *v127; // x7
  int64_t v128; // x1
  int64_t v129; // x2
  int32_t v130; // w3
  System_String_o *v131; // x4
  BattleSetupInfo_o *v132; // x5
  FollowerInfo_o *v133; // x6
  PartyListViewItem_o *v134; // x7
  int64_t v135; // x1
  int64_t v136; // x2
  int32_t v137; // w3
  System_String_o *v138; // x4
  BattleSetupInfo_o *v139; // x5
  FollowerInfo_o *v140; // x6
  PartyListViewItem_o *v141; // x7
  int64_t v142; // x1
  int64_t v143; // x2
  int32_t v144; // w3
  System_String_o *v145; // x4
  BattleSetupInfo_o *v146; // x5
  FollowerInfo_o *v147; // x6
  PartyListViewItem_o *v148; // x7
  int64_t v149; // x1
  int64_t v150; // x2
  int32_t v151; // w3
  System_String_o *v152; // x4
  BattleSetupInfo_o *v153; // x5
  FollowerInfo_o *v154; // x6
  PartyListViewItem_o *v155; // x7
  int64_t v156; // x1
  int64_t v157; // x2
  int32_t v158; // w3
  System_String_o *v159; // x4
  BattleSetupInfo_o *v160; // x5
  FollowerInfo_o *v161; // x6
  PartyListViewItem_o *v162; // x7
  int64_t v163; // x1
  int64_t v164; // x2
  int32_t v165; // w3
  System_String_o *v166; // x4
  BattleSetupInfo_o *v167; // x5
  FollowerInfo_o *v168; // x6
  PartyListViewItem_o *v169; // x7
  int64_t v170; // x1
  struct UICharaGraphRender_StaticFields *v171; // x0
  int64_t v172; // x2
  int32_t v173; // w3
  System_String_o *v174; // x4
  BattleSetupInfo_o *v175; // x5
  FollowerInfo_o *v176; // x6
  PartyListViewItem_o *v177; // x7
  int64_t v178; // x2
  int32_t v179; // w3
  System_String_o *v180; // x4
  BattleSetupInfo_o *v181; // x5
  FollowerInfo_o *v182; // x6
  PartyListViewItem_o *v183; // x7
  int64_t v184; // x19
  int64_t v185; // x1
  int64_t v186; // x2
  int32_t v187; // w3
  System_String_o *v188; // x4
  BattleSetupInfo_o *v189; // x5
  FollowerInfo_o *v190; // x6
  PartyListViewItem_o *v191; // x7
  int64_t v192; // x1
  int64_t v193; // x2
  int32_t v194; // w3
  System_String_o *v195; // x4
  BattleSetupInfo_o *v196; // x5
  FollowerInfo_o *v197; // x6
  PartyListViewItem_o *v198; // x7
  int64_t v199; // x1
  int64_t v200; // x2
  int32_t v201; // w3
  System_String_o *v202; // x4
  BattleSetupInfo_o *v203; // x5
  FollowerInfo_o *v204; // x6
  PartyListViewItem_o *v205; // x7
  int64_t v206; // x1
  int64_t v207; // x2
  int32_t v208; // w3
  System_String_o *v209; // x4
  BattleSetupInfo_o *v210; // x5
  FollowerInfo_o *v211; // x6
  PartyListViewItem_o *v212; // x7
  int64_t v213; // x1
  int64_t v214; // x2
  int32_t v215; // w3
  System_String_o *v216; // x4
  BattleSetupInfo_o *v217; // x5
  FollowerInfo_o *v218; // x6
  PartyListViewItem_o *v219; // x7
  int64_t v220; // x1
  struct UICharaGraphRender_StaticFields *v221; // x0
  int64_t v222; // x2
  int32_t v223; // w3
  System_String_o *v224; // x4
  BattleSetupInfo_o *v225; // x5
  FollowerInfo_o *v226; // x6
  PartyListViewItem_o *v227; // x7
  System_RuntimeFieldHandle_o v228; // 0:w1.4

  if ( (byte_4BFECFC & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Array_AsReadOnly_Rect___, v1);
    sub_1C2E12C(&int___TypeInfo, v2);
    sub_1C2E12C(&UnityEngine_Rect___TypeInfo, v3);
    sub_1C2E12C(&string___TypeInfo, v4);
    sub_1C2E12C(
      &Field__PrivateImplementationDetails__F239810D17032E35383496434C64894FFE055A198BA7CFB907D73BAF26A70F0C,
      v5);
    sub_1C2E12C(&UICharaGraphRender_TypeInfo, v6);
    sub_1C2E12C(&StringLiteral_19963/*"frame5"*/, v7);
    sub_1C2E12C(&StringLiteral_16912/*"a"*/, v8);
    sub_1C2E12C(&StringLiteral_19964/*"frame6"*/, v9);
    sub_1C2E12C(&StringLiteral_19965/*"frame7"*/, v10);
    sub_1C2E12C(&StringLiteral_17297/*"b"*/, v11);
    sub_1C2E12C(&StringLiteral_17998/*"c"*/, v12);
    sub_1C2E12C(&StringLiteral_19961/*"frame3"*/, v13);
    sub_1C2E12C(&StringLiteral_19959/*"frame1"*/, v14);
    sub_1C2E12C(&StringLiteral_19958/*"frame0"*/, v15);
    sub_1C2E12C(&StringLiteral_19960/*"frame2"*/, v16);
    sub_1C2E12C(&StringLiteral_19962/*"frame4"*/, v17);
    byte_4BFECFC = 1;
  }
  static_fields = UICharaGraphRender_TypeInfo->static_fields;
  *(_OWORD *)&static_fields->OTHER_IMAGE_LIMIT_COUNT = xmmword_C06330;
  *(_QWORD *)&static_fields->SERVANT_BODY_SIZE_Y = 0x1FE000002D2LL;
  *(_OWORD *)&static_fields->SERVANT_BODY_U = xmmword_C06FD0;
  static_fields->SERVANT_EQUIP_BODY_SIZE_Y = 872;
  *(_OWORD *)&static_fields->SERVANT_EQUIP_BODY_U = xmmword_C071F0;
  v19 = sub_1C2E1D4(UnityEngine_Rect___TypeInfo, 12LL);
  if ( !v19 )
    goto LABEL_41;
  v21 = *(_DWORD *)(v19 + 24);
  if ( !v21 )
    goto LABEL_40;
  v22 = UICharaGraphRender_TypeInfo->static_fields;
  v23 = *(_QWORD *)&v22->SERVANT_BODY_W;
  *(float32x2_t *)(v19 + 32) = vadd_f32(*(float32x2_t *)&v22->SERVANT_BODY_U, 0LL);
  *(_QWORD *)(v19 + 40) = v23;
  if ( v21 == 1 )
    goto LABEL_40;
  v24 = UICharaGraphRender_TypeInfo->static_fields;
  v25 = *(_QWORD *)&v24->SERVANT_BODY_W;
  *(float32x2_t *)(v19 + 48) = vadd_f32(*(float32x2_t *)&v24->SERVANT_BODY_U, (float32x2_t)1056964608LL);
  *(_QWORD *)(v19 + 56) = v25;
  if ( v21 <= 2 )
    goto LABEL_40;
  v26 = UICharaGraphRender_TypeInfo->static_fields;
  v27 = *(_QWORD *)&v26->SERVANT_BODY_W;
  *(float32x2_t *)(v19 + 64) = vadd_f32(*(float32x2_t *)&v26->SERVANT_BODY_U, 0LL);
  *(_QWORD *)(v19 + 72) = v27;
  if ( v21 == 3 )
    goto LABEL_40;
  v28 = UICharaGraphRender_TypeInfo->static_fields;
  v29 = *(_QWORD *)&v28->SERVANT_BODY_W;
  *(float32x2_t *)(v19 + 80) = vadd_f32(*(float32x2_t *)&v28->SERVANT_BODY_U, (float32x2_t)1056964608LL);
  *(_QWORD *)(v19 + 88) = v29;
  if ( v21 <= 4 )
    goto LABEL_40;
  v30 = UICharaGraphRender_TypeInfo->static_fields;
  v31 = *(_QWORD *)&v30->SERVANT_BODY_W;
  *(float32x2_t *)(v19 + 96) = vadd_f32(*(float32x2_t *)&v30->SERVANT_BODY_U, 0LL);
  *(_QWORD *)(v19 + 104) = v31;
  if ( v21 == 5 )
    goto LABEL_40;
  v32 = UICharaGraphRender_TypeInfo->static_fields;
  v33 = *(_QWORD *)&v32->SERVANT_BODY_W;
  *(float32x2_t *)(v19 + 112) = vadd_f32(*(float32x2_t *)&v32->SERVANT_BODY_U, (float32x2_t)1056964608LL);
  *(_QWORD *)(v19 + 120) = v33;
  if ( v21 <= 6 )
    goto LABEL_40;
  v34 = UICharaGraphRender_TypeInfo->static_fields;
  v35 = *(_QWORD *)&v34->SERVANT_BODY_W;
  *(float32x2_t *)(v19 + 128) = vadd_f32(*(float32x2_t *)&v34->SERVANT_BODY_U, 0LL);
  *(_QWORD *)(v19 + 136) = v35;
  if ( v21 == 7 )
    goto LABEL_40;
  v36 = UICharaGraphRender_TypeInfo->static_fields;
  v37 = *(_QWORD *)&v36->SERVANT_BODY_W;
  *(float32x2_t *)(v19 + 144) = vadd_f32(*(float32x2_t *)&v36->SERVANT_BODY_U, (float32x2_t)1056964608LL);
  *(_QWORD *)(v19 + 152) = v37;
  if ( v21 <= 8 )
    goto LABEL_40;
  v38 = UICharaGraphRender_TypeInfo->static_fields;
  v39 = *(_QWORD *)&v38->SERVANT_BODY_W;
  *(float32x2_t *)(v19 + 160) = vadd_f32(*(float32x2_t *)&v38->SERVANT_BODY_U, 0LL);
  *(_QWORD *)(v19 + 168) = v39;
  if ( v21 == 9 )
    goto LABEL_40;
  v40 = UICharaGraphRender_TypeInfo->static_fields;
  v41 = *(_QWORD *)&v40->SERVANT_BODY_W;
  *(float32x2_t *)(v19 + 176) = vadd_f32(*(float32x2_t *)&v40->SERVANT_BODY_U, (float32x2_t)1056964608LL);
  *(_QWORD *)(v19 + 184) = v41;
  if ( v21 <= 0xA )
    goto LABEL_40;
  v42 = UICharaGraphRender_TypeInfo->static_fields;
  v43 = *(_QWORD *)&v42->SERVANT_BODY_W;
  *(float32x2_t *)(v19 + 192) = vadd_f32(*(float32x2_t *)&v42->SERVANT_BODY_U, 0LL);
  *(_QWORD *)(v19 + 200) = v43;
  if ( v21 == 11 )
    goto LABEL_40;
  v44 = UICharaGraphRender_TypeInfo->static_fields;
  v45 = *(_QWORD *)&v44->SERVANT_BODY_W;
  *(float32x2_t *)(v19 + 208) = vadd_f32(*(float32x2_t *)&v44->SERVANT_BODY_U, (float32x2_t)1056964608LL);
  *(_QWORD *)(v19 + 216) = v45;
  Only_Rect = System_Array__AsReadOnly_Rect_(
                (UnityEngine_Rect_array *)v19,
                (const MethodInfo_309BFB0 *)Method_System_Array_AsReadOnly_Rect___);
  v47 = UICharaGraphRender_TypeInfo->static_fields;
  v47->servantBodyRectTable = (struct System_Collections_ObjectModel_ReadOnlyCollection_Rect__o *)Only_Rect;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v47->servantBodyRectTable,
    (int64_t)Only_Rect,
    v48,
    v49,
    v50,
    v51,
    v52,
    v53);
  v54 = UICharaGraphRender_TypeInfo;
  UICharaGraphRender_TypeInfo->static_fields->servantEquipBodyRect = *(struct UnityEngine_Rect_o *)&UICharaGraphRender_TypeInfo->static_fields->SERVANT_EQUIP_BODY_U;
  *(_QWORD *)&v54->static_fields->SERVANT_NAME_UV_DIFF_Y = 0x43E800000LL;
  v55 = (System_Array_o *)sub_1C2E1D4(int___TypeInfo, 4LL);
  v228.fields.value = Field__PrivateImplementationDetails__F239810D17032E35383496434C64894FFE055A198BA7CFB907D73BAF26A70F0C;
  v56 = (int64_t)v55;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_63142920(v55, v228, 0LL);
  v57 = UICharaGraphRender_TypeInfo->static_fields;
  v57->SERVANT_NAME_TARGET_LIMIT_COUNT = (struct System_Int32_array *)v56;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v57->SERVANT_NAME_TARGET_LIMIT_COUNT, v56, v58, v59, v60, v61, v62, v63);
  v19 = sub_1C2E1D4(string___TypeInfo, 6LL);
  if ( !v19 )
    goto LABEL_41;
  v70 = v19;
  if ( !*(_DWORD *)(v19 + 24) )
    goto LABEL_40;
  v71 = StringLiteral_16912/*"a"*/;
  *(_QWORD *)(v19 + 32) = StringLiteral_16912/*"a"*/;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v19 + 32), v71, v64, v65, v66, v67, v68, v69);
  if ( *(_DWORD *)(v70 + 24) <= 1u )
    goto LABEL_40;
  v78 = StringLiteral_16912/*"a"*/;
  *(_QWORD *)(v70 + 40) = StringLiteral_16912/*"a"*/;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v70 + 40), v78, v72, v73, v74, v75, v76, v77);
  if ( *(_DWORD *)(v70 + 24) <= 2u )
    goto LABEL_40;
  v85 = StringLiteral_17297/*"b"*/;
  *(_QWORD *)(v70 + 48) = StringLiteral_17297/*"b"*/;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v70 + 48), v85, v79, v80, v81, v82, v83, v84);
  if ( *(_DWORD *)(v70 + 24) <= 3u )
    goto LABEL_40;
  v92 = StringLiteral_17297/*"b"*/;
  *(_QWORD *)(v70 + 56) = StringLiteral_17297/*"b"*/;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v70 + 56), v92, v86, v87, v88, v89, v90, v91);
  if ( *(_DWORD *)(v70 + 24) <= 4u )
    goto LABEL_40;
  v99 = StringLiteral_17998/*"c"*/;
  *(_QWORD *)(v70 + 64) = StringLiteral_17998/*"c"*/;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v70 + 64), (int64_t)v99, v93, v94, v95, v96, v97, v98);
  if ( *(_DWORD *)(v70 + 24) <= 5u )
    goto LABEL_40;
  v106 = StringLiteral_17998/*"c"*/;
  *(_QWORD *)(v70 + 72) = StringLiteral_17998/*"c"*/;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v70 + 72), (int64_t)v106, v100, v101, v102, v103, v104, v105);
  v107 = UICharaGraphRender_TypeInfo->static_fields;
  v107->bodyTextureNameTable = (struct System_String_array *)v70;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v107->bodyTextureNameTable, v70, v108, v109, v110, v111, v112, v113);
  v19 = sub_1C2E1D4(string___TypeInfo, 8LL);
  if ( !v19 )
    goto LABEL_41;
  v120 = v19;
  if ( !*(_DWORD *)(v19 + 24) )
    goto LABEL_40;
  v121 = StringLiteral_19958/*"frame0"*/;
  *(_QWORD *)(v19 + 32) = StringLiteral_19958/*"frame0"*/;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v19 + 32), v121, v114, v115, v116, v117, v118, v119);
  if ( *(_DWORD *)(v120 + 24) <= 1u )
    goto LABEL_40;
  v128 = StringLiteral_19959/*"frame1"*/;
  *(_QWORD *)(v120 + 40) = StringLiteral_19959/*"frame1"*/;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v120 + 40), v128, v122, v123, v124, v125, v126, v127);
  if ( *(_DWORD *)(v120 + 24) <= 2u )
    goto LABEL_40;
  v135 = StringLiteral_19960/*"frame2"*/;
  *(_QWORD *)(v120 + 48) = StringLiteral_19960/*"frame2"*/;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v120 + 48), v135, v129, v130, v131, v132, v133, v134);
  if ( *(_DWORD *)(v120 + 24) <= 3u )
    goto LABEL_40;
  v142 = StringLiteral_19961/*"frame3"*/;
  *(_QWORD *)(v120 + 56) = StringLiteral_19961/*"frame3"*/;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v120 + 56), v142, v136, v137, v138, v139, v140, v141);
  if ( *(_DWORD *)(v120 + 24) <= 4u )
    goto LABEL_40;
  v149 = StringLiteral_19962/*"frame4"*/;
  *(_QWORD *)(v120 + 64) = StringLiteral_19962/*"frame4"*/;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v120 + 64), v149, v143, v144, v145, v146, v147, v148);
  if ( *(_DWORD *)(v120 + 24) <= 5u
    || (v156 = StringLiteral_19963/*"frame5"*/,
        *(_QWORD *)(v120 + 72) = StringLiteral_19963/*"frame5"*/,
        sub_1C2E0D0((PartyOrganizationUtility_o *)(v120 + 72), v156, v150, v151, v152, v153, v154, v155),
        *(_DWORD *)(v120 + 24) <= 6u)
    || (v163 = StringLiteral_19964/*"frame6"*/,
        *(_QWORD *)(v120 + 80) = StringLiteral_19964/*"frame6"*/,
        sub_1C2E0D0((PartyOrganizationUtility_o *)(v120 + 80), v163, v157, v158, v159, v160, v161, v162),
        *(_DWORD *)(v120 + 24) <= 7u) )
  {
LABEL_40:
    sub_1C2E390(v19, v20);
  }
  v170 = StringLiteral_19965/*"frame7"*/;
  *(_QWORD *)(v120 + 88) = StringLiteral_19965/*"frame7"*/;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v120 + 88), v170, v164, v165, v166, v167, v168, v169);
  v171 = UICharaGraphRender_TypeInfo->static_fields;
  v171->baseFrameList = (struct System_String_array *)v120;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v171->baseFrameList, v120, v172, v173, v174, v175, v176, v177);
  v19 = sub_1C2E1D4(string___TypeInfo, 6LL);
  if ( !v19 )
LABEL_41:
    sub_1C2E388(v19, v20);
  v184 = v19;
  if ( !*(_DWORD *)(v19 + 24) )
    goto LABEL_40;
  v185 = StringLiteral_19958/*"frame0"*/;
  *(_QWORD *)(v19 + 32) = StringLiteral_19958/*"frame0"*/;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v19 + 32), v185, v178, v179, v180, v181, v182, v183);
  if ( *(_DWORD *)(v184 + 24) <= 1u )
    goto LABEL_40;
  v192 = StringLiteral_19959/*"frame1"*/;
  *(_QWORD *)(v184 + 40) = StringLiteral_19959/*"frame1"*/;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v184 + 40), v192, v186, v187, v188, v189, v190, v191);
  if ( *(_DWORD *)(v184 + 24) <= 2u )
    goto LABEL_40;
  v199 = StringLiteral_19959/*"frame1"*/;
  *(_QWORD *)(v184 + 48) = StringLiteral_19959/*"frame1"*/;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v184 + 48), v199, v193, v194, v195, v196, v197, v198);
  if ( *(_DWORD *)(v184 + 24) <= 3u )
    goto LABEL_40;
  v206 = StringLiteral_19960/*"frame2"*/;
  *(_QWORD *)(v184 + 56) = StringLiteral_19960/*"frame2"*/;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v184 + 56), v206, v200, v201, v202, v203, v204, v205);
  if ( *(_DWORD *)(v184 + 24) <= 4u )
    goto LABEL_40;
  v213 = StringLiteral_19961/*"frame3"*/;
  *(_QWORD *)(v184 + 64) = StringLiteral_19961/*"frame3"*/;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v184 + 64), v213, v207, v208, v209, v210, v211, v212);
  if ( *(_DWORD *)(v184 + 24) <= 5u )
    goto LABEL_40;
  v220 = StringLiteral_19961/*"frame3"*/;
  *(_QWORD *)(v184 + 72) = StringLiteral_19961/*"frame3"*/;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v184 + 72), v220, v214, v215, v216, v217, v218, v219);
  v221 = UICharaGraphRender_TypeInfo->static_fields;
  v221->commandCodeBaseFrameList = (struct System_String_array *)v184;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v221->commandCodeBaseFrameList, v184, v222, v223, v224, v225, v226, v227);
}


void __fastcall UICharaGraphRender___ctor(UICharaGraphRender_o *this, const MethodInfo *method)
{
  UITweenRenderer___ctor((UITweenRenderer_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall UICharaGraphRender__GetAssetName(
        int32_t svtId,
        int32_t imageLimitCount,
        const MethodInfo *method)
{
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
  DataManager_o *Instance; // x0
  __int64 v19; // x1
  System_String_o *v20; // x0
  System_String_o *v21; // x0
  int32_t IntValue; // w0
  int32_t v23; // w19
  System_String_o *v24; // x19
  System_String_o **p_defaultName; // x8
  const MethodInfo *v26; // x2
  Il2CppObject *v27; // x19
  System_String_o *v28; // x0
  System_String_o *v29; // x19
  int v31; // [xsp+4h] [xbp-5Ch] BYREF
  Il2CppObject *v32; // [xsp+8h] [xbp-58h] BYREF
  Il2CppObject *v33; // [xsp+10h] [xbp-50h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-48h] BYREF
  System_String_o *defaultName; // [xsp+20h] [xbp-40h] BYREF
  int32_t imageLimitCounta; // [xsp+28h] [xbp-38h] BYREF
  int32_t svtIda; // [xsp+2Ch] [xbp-34h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v38; // 0:x0.16

  imageLimitCounta = imageLimitCount;
  svtIda = svtId;
  if ( (byte_4BFECE9 & 1) == 0 )
  {
    sub_1C2E12C(&AssetManager_TypeInfo, *(_QWORD *)&imageLimitCount);
    sub_1C2E12C(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, v4);
    sub_1C2E12C(&Method_DataManager_GetMasterData_ServantMaster___, v5);
    sub_1C2E12C(&Method_DataManager_GetMaster_ImagePartsGroupMaster___, v6);
    sub_1C2E12C(&Method_DataManager_GetMaster_ServantMaster___, v7);
    sub_1C2E12C(&Method_DataManager_GetMaster_UserImagePartsGroupMaster___, v8);
    sub_1C2E12C(&DataManager_TypeInfo, v9);
    sub_1C2E12C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v10);
    sub_1C2E12C(&Method_DataMasterBase_UserImagePartsGroupMaster__UserImagePartsGroupEntity__int__TryGetEntity__, v11);
    sub_1C2E12C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    sub_1C2E12C(&StringLiteral_21659/*"maleImageId"*/, v14);
    sub_1C2E12C(&StringLiteral_4512/*"CharaGraph/100000"*/, v15);
    sub_1C2E12C(&StringLiteral_20604/*"imagePartsGroupId"*/, v16);
    sub_1C2E12C(&StringLiteral_4511/*"CharaGraph/"*/, v17);
    byte_4BFECE9 = 1;
  }
  entity = 0LL;
  defaultName = 0LL;
  v32 = 0LL;
  v33 = 0LL;
  v31 = 0;
  if ( imageLimitCount >= 11 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_46;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    if ( !Instance )
      goto LABEL_46;
    ServantLimitAddMaster__getCostumeId((ServantLimitAddMaster_o *)Instance, &svtIda, &imageLimitCounta, 0LL);
  }
  v20 = System_Int32__ToString((int32_t)&svtIda, 0LL);
  defaultName = System_String__Concat_63235584((System_String_o *)StringLiteral_4511/*"CharaGraph/"*/, v20, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_2FD17DC *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !Instance )
    goto LABEL_46;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
         &entity,
         svtIda,
         (const MethodInfo_327B1CC *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
  {
    Instance = (DataManager_o *)UserGameMaster__getSelfUserGame(0LL);
    if ( !Instance )
      goto LABEL_46;
    Instance = (DataManager_o *)UserGameEntity__IsMale((UserGameEntity_o *)Instance, 0LL);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( !entity )
        goto LABEL_46;
      Instance = (DataManager_o *)EntityScriptUtil__GetIntValue(
                                    (System_Collections_Generic_Dictionary_string__object__o *)entity[12].klass,
                                    (System_String_o *)StringLiteral_21659/*"maleImageId"*/,
                                    0,
                                    0LL);
      v31 = (int)Instance;
      if ( (_DWORD)Instance )
      {
        v21 = System_Int32__ToString((int32_t)&v31, 0LL);
        Instance = (DataManager_o *)System_String__Concat_63235584((System_String_o *)StringLiteral_4511/*"CharaGraph/"*/, v21, 0LL);
        defaultName = (System_String_o *)Instance;
      }
    }
    if ( !entity )
      goto LABEL_46;
    IntValue = EntityScriptUtil__GetIntValue(
                 (System_Collections_Generic_Dictionary_string__object__o *)entity[12].klass,
                 (System_String_o *)StringLiteral_20604/*"imagePartsGroupId"*/,
                 0,
                 0LL);
    if ( IntValue )
    {
      v23 = IntValue;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_2FD17DC *)Method_DataManager_GetMaster_UserImagePartsGroupMaster___);
      if ( !Instance )
        goto LABEL_46;
      if ( DataMasterBase_object__object__int___TryGetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             &v32,
             v23,
             (const MethodInfo_327B1CC *)Method_DataMasterBase_UserImagePartsGroupMaster__UserImagePartsGroupEntity__int__TryGetEntity__) )
      {
        Instance = (DataManager_o *)v32;
        if ( !v32 )
          goto LABEL_46;
        UserImagePartsGroupEntity__ConcatImageValues((UserImagePartsGroupEntity_o *)v32, &defaultName, 0LL);
      }
      else if ( v23 >= 1 )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_2FD17DC *)Method_DataManager_GetMaster_ImagePartsGroupMaster___);
        if ( !Instance )
          goto LABEL_46;
        ImagePartsGroupMaster__ConcatDefaultImageValues((ImagePartsGroupMaster_o *)Instance, v23, &defaultName, 0LL);
      }
    }
  }
  v24 = defaultName;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( AssetManager__isExistAssetStorage(v24, 0LL) )
    goto LABEL_32;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_46;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_46;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          &v33,
          svtIda,
          (const MethodInfo_327B1CC *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
    goto LABEL_44;
  Instance = (DataManager_o *)v33;
  if ( !v33 )
    goto LABEL_46;
  Instance = (DataManager_o *)ServantEntity__get_IsServantMaterialTd((ServantEntity_o *)v33, 0LL);
  if ( ((unsigned __int8)Instance & 1) == 0 )
  {
LABEL_44:
    p_defaultName = (System_String_o **)&StringLiteral_4512/*"CharaGraph/100000"*/;
    return *p_defaultName;
  }
  if ( !v33 )
LABEL_46:
    sub_1C2E388(Instance, v19);
  v27 = v33 + 2;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v38.fields.currentCryptoKey = v27;
  *(_QWORD *)&v38.fields.fakeValue = 0LL;
  v28 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v38, v26);
  defaultName = System_String__Concat_63235584((System_String_o *)StringLiteral_4511/*"CharaGraph/"*/, v28, 0LL);
  v29 = defaultName;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__isExistAssetStorage(v29, 0LL) )
    goto LABEL_44;
LABEL_32:
  p_defaultName = &defaultName;
  return *p_defaultName;
}


System_String_o *__fastcall UICharaGraphRender__GetAssetName_42185220(
        int32_t imageSvtId,
        System_Int32_array *imagePartsGroupIdxs,
        const MethodInfo *method)
{
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
  System_String_o *v17; // x0
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  __int64 v19; // x1
  System_String_o *v20; // x0
  int32_t IntValue; // w0
  int32_t v22; // w20
  bool IsNullOrEmpty; // w21
  System_String_o *v24; // x19
  System_String_o **p_defaultName; // x8
  const MethodInfo *v26; // x2
  Il2CppObject *v27; // x19
  System_String_o *v28; // x0
  System_String_o *v29; // x19
  UserImagePartsGroupEntity_o *v31; // [xsp+0h] [xbp-60h] BYREF
  Il2CppObject *v32; // [xsp+8h] [xbp-58h] BYREF
  Il2CppObject *entity; // [xsp+10h] [xbp-50h] BYREF
  System_String_o *defaultName; // [xsp+18h] [xbp-48h] BYREF
  int v35; // [xsp+28h] [xbp-38h] BYREF
  int32_t key; // [xsp+2Ch] [xbp-34h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v37; // 0:x0.16

  key = imageSvtId;
  if ( (byte_4BFECEA & 1) == 0 )
  {
    sub_1C2E12C(&AssetManager_TypeInfo, imagePartsGroupIdxs);
    sub_1C2E12C(&Method_DataManager_GetMasterData_ServantMaster___, v4);
    sub_1C2E12C(&Method_DataManager_GetMaster_ImagePartsGroupMaster___, v5);
    sub_1C2E12C(&Method_DataManager_GetMaster_ServantMaster___, v6);
    sub_1C2E12C(&Method_DataManager_GetMaster_UserImagePartsGroupMaster___, v7);
    sub_1C2E12C(&DataManager_TypeInfo, v8);
    sub_1C2E12C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v9);
    sub_1C2E12C(&Method_DataMasterBase_UserImagePartsGroupMaster__UserImagePartsGroupEntity__int__TryGetEntity__, v10);
    sub_1C2E12C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    sub_1C2E12C(&StringLiteral_21659/*"maleImageId"*/, v13);
    sub_1C2E12C(&StringLiteral_4512/*"CharaGraph/100000"*/, v14);
    sub_1C2E12C(&StringLiteral_20604/*"imagePartsGroupId"*/, v15);
    sub_1C2E12C(&StringLiteral_4511/*"CharaGraph/"*/, v16);
    byte_4BFECEA = 1;
  }
  entity = 0LL;
  v31 = 0LL;
  v32 = 0LL;
  v35 = 0;
  v17 = System_Int32__ToString((int32_t)&key, 0LL);
  defaultName = System_String__Concat_63235584((System_String_o *)StringLiteral_4511/*"CharaGraph/"*/, v17, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2FD17DC *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !Master_object )
    goto LABEL_44;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          Master_object,
          &entity,
          key,
          (const MethodInfo_327B1CC *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
    goto LABEL_27;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !Master_object )
    goto LABEL_44;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UserGameEntity__IsMale(
                                                                  (UserGameEntity_o *)Master_object,
                                                                  0LL);
  if ( ((unsigned __int8)Master_object & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_44;
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)EntityScriptUtil__GetIntValue(
                                                                    (System_Collections_Generic_Dictionary_string__object__o *)entity[12].klass,
                                                                    (System_String_o *)StringLiteral_21659/*"maleImageId"*/,
                                                                    0,
                                                                    0LL);
    v35 = (int)Master_object;
    if ( (_DWORD)Master_object )
    {
      v20 = System_Int32__ToString((int32_t)&v35, 0LL);
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_String__Concat_63235584(
                                                                      (System_String_o *)StringLiteral_4511/*"CharaGraph/"*/,
                                                                      v20,
                                                                      0LL);
      defaultName = (System_String_o *)Master_object;
    }
  }
  if ( !entity )
    goto LABEL_44;
  IntValue = EntityScriptUtil__GetIntValue(
               (System_Collections_Generic_Dictionary_string__object__o *)entity[12].klass,
               (System_String_o *)StringLiteral_20604/*"imagePartsGroupId"*/,
               0,
               0LL);
  if ( !IntValue )
    goto LABEL_27;
  v22 = IntValue;
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)imagePartsGroupIdxs, 0LL);
  if ( DataManager_TypeInfo->_2.cctor_finished )
  {
    if ( IsNullOrEmpty )
      goto LABEL_16;
LABEL_21:
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2FD17DC *)Method_DataManager_GetMaster_ImagePartsGroupMaster___);
    if ( !Master_object )
      goto LABEL_44;
    ImagePartsGroupMaster__ConcatImageValues(
      (ImagePartsGroupMaster_o *)Master_object,
      v22,
      imagePartsGroupIdxs,
      &defaultName,
      0LL);
    goto LABEL_27;
  }
  j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  if ( !IsNullOrEmpty )
    goto LABEL_21;
LABEL_16:
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2FD17DC *)Method_DataManager_GetMaster_UserImagePartsGroupMaster___);
  if ( !Master_object )
    goto LABEL_44;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         Master_object,
         (Il2CppObject **)&v31,
         v22,
         (const MethodInfo_327B1CC *)Method_DataMasterBase_UserImagePartsGroupMaster__UserImagePartsGroupEntity__int__TryGetEntity__) )
  {
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)v31;
    if ( !v31 )
      goto LABEL_44;
    UserImagePartsGroupEntity__ConcatImageValues(v31, &defaultName, 0LL);
  }
  else
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2FD17DC *)Method_DataManager_GetMaster_ImagePartsGroupMaster___);
    if ( !Master_object )
      goto LABEL_44;
    ImagePartsGroupMaster__ConcatDefaultImageValues((ImagePartsGroupMaster_o *)Master_object, v22, &defaultName, 0LL);
  }
LABEL_27:
  v24 = defaultName;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( AssetManager__isExistAssetStorage(v24, 0LL) )
    goto LABEL_30;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Master_object )
    goto LABEL_44;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMasterData_object_(
                                                                  (DataManager_o *)Master_object,
                                                                  (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Master_object )
    goto LABEL_44;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          Master_object,
          &v32,
          key,
          (const MethodInfo_327B1CC *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
    goto LABEL_42;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)v32;
  if ( !v32 )
    goto LABEL_44;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)ServantEntity__get_IsServantMaterialTd(
                                                                  (ServantEntity_o *)v32,
                                                                  0LL);
  if ( ((unsigned __int8)Master_object & 1) == 0 )
  {
LABEL_42:
    p_defaultName = (System_String_o **)&StringLiteral_4512/*"CharaGraph/100000"*/;
    return *p_defaultName;
  }
  if ( !v32 )
LABEL_44:
    sub_1C2E388(Master_object, v19);
  v27 = v32 + 2;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v37.fields.currentCryptoKey = v27;
  *(_QWORD *)&v37.fields.fakeValue = 0LL;
  v28 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v37, v26);
  defaultName = System_String__Concat_63235584((System_String_o *)StringLiteral_4511/*"CharaGraph/"*/, v28, 0LL);
  v29 = defaultName;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__isExistAssetStorage(v29, 0LL) )
    goto LABEL_42;
LABEL_30:
  p_defaultName = &defaultName;
  return *p_defaultName;
}


int32_t __fastcall UICharaGraphRender__GetBaseKind(UICharaGraphRender_o *this, const MethodInfo *method)
{
  return this->fields.baseKind;
}


UnityEngine_Vector2_o __fastcall UICharaGraphRender__GetBodySize(UICharaGraphRender_o *this, const MethodInfo *method)
{
  UICharaGraphRender_c *v3; // x0
  int32_t baseKind; // w19
  struct UICharaGraphRender_StaticFields *static_fields; // x8
  __int64 v6; // x9
  __int64 v7; // x10
  float v8; // s0
  float v9; // s1
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  if ( (byte_4BFECF1 & 1) == 0 )
  {
    sub_1C2E12C(&UICharaGraphRender_TypeInfo, method);
    byte_4BFECF1 = 1;
  }
  v3 = UICharaGraphRender_TypeInfo;
  baseKind = this->fields.baseKind;
  if ( !UICharaGraphRender_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICharaGraphRender_TypeInfo);
    v3 = UICharaGraphRender_TypeInfo;
  }
  static_fields = v3->static_fields;
  v6 = 24LL;
  if ( !baseKind )
    v6 = 16LL;
  if ( baseKind )
    v7 = 20LL;
  else
    v7 = 12LL;
  v8 = (float)*(int *)((char *)&static_fields->OTHER_IMAGE_LIMIT_COUNT + v7);
  v9 = (float)*(int *)((char *)&static_fields->OTHER_IMAGE_LIMIT_COUNT + v6);
  result.fields.y = v9;
  result.fields.x = v8;
  return result;
}


UnityEngine_Texture2D_o *__fastcall UICharaGraphRender__GetBodyTexture(
        UICharaGraphRender_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  UICharaGraphRender_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_String_o *LastName; // x0
  System_String_o *v9; // x1
  System_String_o **p_changeGraphSuffix; // x8
  _DWORD *monitor; // x8
  __int64 imageLimitCount; // x9
  System_String_o *v13; // x21
  System_String_o *v14; // x0
  System_String_o *v15; // x0
  Il2CppObject *Object_object__50017172; // x22
  UnityEngine_Texture2D_o *result; // x0
  System_String_o *v18; // x1

  v4 = this;
  if ( (byte_4BFECF3 & 1) == 0 )
  {
    sub_1C2E12C(&Method_AssetData_GetObject_Texture2D____77757336, data);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v5);
    sub_1C2E12C(&UICharaGraphRender_TypeInfo, v6);
    this = (UICharaGraphRender_o *)sub_1C2E12C(&StringLiteral_16912/*"a"*/, v7);
    byte_4BFECF3 = 1;
  }
  if ( v4->fields.baseKind )
  {
    v4->fields.textureImageLimitCount = 0;
    if ( data )
    {
      LastName = AssetData__get_LastName(data, 0LL);
      v9 = (System_String_o *)StringLiteral_16912/*"a"*/;
      goto LABEL_19;
    }
LABEL_20:
    sub_1C2E388(this, data);
  }
  if ( v4->fields.isChangeGraph )
  {
    p_changeGraphSuffix = &v4->fields.changeGraphSuffix;
    if ( !data )
      goto LABEL_20;
  }
  else
  {
    this = (UICharaGraphRender_o *)UICharaGraphRender_TypeInfo;
    if ( !UICharaGraphRender_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UICharaGraphRender_TypeInfo);
      this = (UICharaGraphRender_o *)UICharaGraphRender_TypeInfo;
    }
    monitor = this->fields.onChange[1].monitor;
    if ( !monitor )
      goto LABEL_20;
    imageLimitCount = v4->fields.imageLimitCount;
    if ( (unsigned int)imageLimitCount >= monitor[6] )
      sub_1C2E390(this, data);
    p_changeGraphSuffix = (System_String_o **)&monitor[2 * imageLimitCount + 8];
    if ( !data )
      goto LABEL_20;
  }
  v13 = *p_changeGraphSuffix;
  v14 = AssetData__get_LastName(data, 0LL);
  v15 = System_String__Concat_63235584(v14, v13, 0LL);
  Object_object__50017172 = AssetData__GetObject_object__50017172(
                              data,
                              v15,
                              (const MethodInfo_2FB3394 *)Method_AssetData_GetObject_Texture2D____77757336);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Object_object__50017172, 0LL, 0LL) )
  {
    result = (UnityEngine_Texture2D_o *)Object_object__50017172;
    v4->fields.textureImageLimitCount = v4->fields.imageLimitCount;
    return result;
  }
  v4->fields.textureImageLimitCount = 0;
  LastName = AssetData__get_LastName(data, 0LL);
  v9 = v13;
LABEL_19:
  v18 = System_String__Concat_63235584(LastName, v9, 0LL);
  return (UnityEngine_Texture2D_o *)AssetData__GetObject_object__50017172(
                                      data,
                                      v18,
                                      (const MethodInfo_2FB3394 *)Method_AssetData_GetObject_Texture2D____77757336);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Rect_o __fastcall UICharaGraphRender__GetBodyUvRect(UICharaGraphRender_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UICharaGraphRender_c *v4; // x0
  int32_t baseKind; // w21
  struct UICharaGraphRender_StaticFields *static_fields; // x8
  float m_XMin; // s0
  float m_YMin; // s1
  float m_Width; // s2
  float m_Height; // s3
  System_Collections_ObjectModel_ReadOnlyCollection_Rect__o *servantBodyRectTable; // x0
  UnityEngine_Rect_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4BFECF2 & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_ObjectModel_ReadOnlyCollection_Rect__get_Item__, method);
    sub_1C2E12C(&UICharaGraphRender_TypeInfo, v3);
    byte_4BFECF2 = 1;
  }
  v4 = UICharaGraphRender_TypeInfo;
  baseKind = this->fields.baseKind;
  if ( !UICharaGraphRender_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICharaGraphRender_TypeInfo);
    v4 = UICharaGraphRender_TypeInfo;
  }
  static_fields = v4->static_fields;
  if ( baseKind )
  {
    m_XMin = static_fields->servantEquipBodyRect.fields.m_XMin;
    m_YMin = static_fields->servantEquipBodyRect.fields.m_YMin;
    m_Width = static_fields->servantEquipBodyRect.fields.m_Width;
    m_Height = static_fields->servantEquipBodyRect.fields.m_Height;
  }
  else
  {
    servantBodyRectTable = static_fields->servantBodyRectTable;
    if ( !servantBodyRectTable )
      sub_1C2E388(0LL, method);
    *(UnityEngine_Rect_o *)&m_XMin = System_Collections_ObjectModel_ReadOnlyCollection_Rect___get_Item(
                                       servantBodyRectTable,
                                       this->fields.textureImageLimitCount,
                                       (const MethodInfo_385AB20 *)Method_System_Collections_ObjectModel_ReadOnlyCollection_Rect__get_Item__);
  }
  result.fields.m_Height = m_Height;
  result.fields.m_Width = m_Width;
  result.fields.m_YMin = m_YMin;
  result.fields.m_XMin = m_XMin;
  return result;
}


System_String_o *__fastcall UICharaGraphRender__GetClassSprite(UICharaGraphRender_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  System_String_o *result; // x0
  int v11; // w20
  int32_t frameType; // w19
  System_String_o *v13; // x19
  System_String_o *v14; // x0
  int32_t AdjustFrameTypeForClass; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4BFECF9 & 1) == 0 )
  {
    sub_1C2E12C(&AtlasManager_TypeInfo, method);
    sub_1C2E12C(&Method_DataManager_GetMasterData_ServantClassMaster___, v3);
    sub_1C2E12C(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__, v4);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    sub_1C2E12C(&StringLiteral_16410/*"_"*/, v6);
    sub_1C2E12C(&StringLiteral_18297/*"class"*/, v7);
    byte_4BFECF9 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_ServantClassMaster___)) == 0LL )
  {
    sub_1C2E388(Instance, v9);
  }
  result = (System_String_o *)DataMasterBase_object__object__int___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                this->fields.classId,
                                (const MethodInfo_327B180 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  if ( result )
  {
    v11 = (int)result;
    frameType = this->fields.frameType;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AdjustFrameTypeForClass = AtlasManager__GetAdjustFrameTypeForClass(frameType, 0LL);
    v13 = System_Int32__ToString((int32_t)&AdjustFrameTypeForClass, 0LL);
    v14 = System_Int32__ToString(v11 + 44, 0LL);
    return System_String__Concat_63248848(
             (System_String_o *)StringLiteral_18297/*"class"*/,
             v13,
             (System_String_o *)StringLiteral_16410/*"_"*/,
             v14,
             0LL);
  }
  return result;
}


System_String_o *__fastcall UICharaGraphRender__GetCommandAssetName(int32_t commandCodeId, const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x1
  System_String_o *v4; // x0
  System_String_o *v5; // x19
  int32_t v7; // [xsp+Ch] [xbp-24h] BYREF

  v7 = commandCodeId;
  if ( (byte_4BFECEB & 1) == 0 )
  {
    sub_1C2E12C(&AssetManager_TypeInfo, method);
    sub_1C2E12C(&StringLiteral_4702/*"CommandGraph/1000000"*/, v2);
    sub_1C2E12C(&StringLiteral_4701/*"CommandGraph/"*/, v3);
    byte_4BFECEB = 1;
  }
  v4 = System_Int32__ToString((int32_t)&v7, 0LL);
  v5 = System_String__Concat_63235584((System_String_o *)StringLiteral_4701/*"CommandGraph/"*/, v4, 0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( AssetManager__isExistAssetStorage(v5, 0LL) )
    return v5;
  else
    return (System_String_o *)StringLiteral_4702/*"CommandGraph/1000000"*/;
}


System_String_o *__fastcall UICharaGraphRender__GetExCharaGraphAssetName(int32_t svtId, const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_String_o *v9; // x0
  System_String_o *v10; // x19
  DataManager_o *Instance; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x2
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *p_baseSvtId; // x19
  System_String_o *v15; // x0
  ServantEntity_o *v17; // [xsp+0h] [xbp-30h] BYREF
  int32_t key; // [xsp+Ch] [xbp-24h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // 0:x0.16

  key = svtId;
  if ( (byte_4BFECEC & 1) == 0 )
  {
    sub_1C2E12C(&AssetManager_TypeInfo, method);
    sub_1C2E12C(&Method_DataManager_GetMasterData_ServantMaster___, v2);
    sub_1C2E12C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v3);
    sub_1C2E12C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    sub_1C2E12C(&StringLiteral_4514/*"CharaGraph/CharaGraphEx/"*/, v6);
    sub_1C2E12C(&StringLiteral_4512/*"CharaGraph/100000"*/, v7);
    sub_1C2E12C(&StringLiteral_4511/*"CharaGraph/"*/, v8);
    byte_4BFECEC = 1;
  }
  v17 = 0LL;
  v9 = System_Int32__ToString((int32_t)&key, 0LL);
  v10 = System_String__Concat_63235584((System_String_o *)StringLiteral_4514/*"CharaGraph/CharaGraphEx/"*/, v9, 0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( AssetManager__isExistAssetStorage(v10, 0LL) )
    return v10;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_19;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          (Il2CppObject **)&v17,
          key,
          (const MethodInfo_327B1CC *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
    return (System_String_o *)StringLiteral_4512/*"CharaGraph/100000"*/;
  Instance = (DataManager_o *)v17;
  if ( !v17 )
    goto LABEL_19;
  Instance = (DataManager_o *)ServantEntity__get_IsServantMaterialTd(v17, 0LL);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    return (System_String_o *)StringLiteral_4512/*"CharaGraph/100000"*/;
  if ( !v17 )
LABEL_19:
    sub_1C2E388(Instance, v12);
  p_baseSvtId = &v17->fields.baseSvtId;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v19.fields.currentCryptoKey = p_baseSvtId;
  *(_QWORD *)&v19.fields.fakeValue = 0LL;
  v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v19, v13);
  v10 = System_String__Concat_63235584((System_String_o *)StringLiteral_4511/*"CharaGraph/"*/, v15, 0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__isExistAssetStorage(v10, 0LL) )
    return (System_String_o *)StringLiteral_4512/*"CharaGraph/100000"*/;
  return v10;
}


UnityEngine_Texture2D_o *__fastcall UICharaGraphRender__GetName2Texture(
        UICharaGraphRender_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  if ( this->fields.realNameCheck == 3 )
    return UICharaGraphRender__GetTrueNameTexture(this, data, method);
  else
    return 0LL;
}


int32_t __fastcall UICharaGraphRender__GetNameTargetLimitCount(UICharaGraphRender_o *this, const MethodInfo *method)
{
  UICharaGraphRender_c *v3; // x0
  struct System_Int32_array *SERVANT_NAME_TARGET_LIMIT_COUNT; // x8
  int32_t imageLimitCount; // w9

  if ( (byte_4BFECF4 & 1) == 0 )
  {
    sub_1C2E12C(&UICharaGraphRender_TypeInfo, method);
    byte_4BFECF4 = 1;
  }
  v3 = UICharaGraphRender_TypeInfo;
  if ( !UICharaGraphRender_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICharaGraphRender_TypeInfo);
    v3 = UICharaGraphRender_TypeInfo;
  }
  SERVANT_NAME_TARGET_LIMIT_COUNT = v3->static_fields->SERVANT_NAME_TARGET_LIMIT_COUNT;
  if ( !SERVANT_NAME_TARGET_LIMIT_COUNT )
    goto LABEL_13;
  imageLimitCount = this->fields.imageLimitCount;
  if ( imageLimitCount >= (signed int)SERVANT_NAME_TARGET_LIMIT_COUNT->max_length )
    return 0;
  if ( !v3->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v3);
    SERVANT_NAME_TARGET_LIMIT_COUNT = UICharaGraphRender_TypeInfo->static_fields->SERVANT_NAME_TARGET_LIMIT_COUNT;
    if ( SERVANT_NAME_TARGET_LIMIT_COUNT )
    {
      imageLimitCount = this->fields.imageLimitCount;
      goto LABEL_10;
    }
LABEL_13:
    sub_1C2E388(v3, method);
  }
LABEL_10:
  if ( imageLimitCount >= SERVANT_NAME_TARGET_LIMIT_COUNT->max_length )
    sub_1C2E390(v3, method);
  return SERVANT_NAME_TARGET_LIMIT_COUNT->m_Items[imageLimitCount + 1];
}


UnityEngine_Texture2D_o *__fastcall UICharaGraphRender__GetNameTexture(
        UICharaGraphRender_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  UICharaGraphRender_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x1
  System_String_o *LastName; // x0
  System_String_o *v8; // x1
  System_String_o *v9; // x1

  v4 = this;
  if ( (byte_4BFECF5 & 1) == 0 )
  {
    sub_1C2E12C(&Method_AssetData_GetObject_Texture2D____77757336, data);
    sub_1C2E12C(&StringLiteral_17297/*"b"*/, v5);
    this = (UICharaGraphRender_o *)sub_1C2E12C(&StringLiteral_22395/*"name"*/, v6);
    byte_4BFECF5 = 1;
  }
  if ( v4->fields.isEventJoinNameExist )
  {
    if ( data )
    {
      LastName = AssetData__get_LastName(data, 0LL);
      v8 = (System_String_o *)StringLiteral_22395/*"name"*/;
LABEL_6:
      v9 = System_String__Concat_63235584(LastName, v8, 0LL);
      return (UnityEngine_Texture2D_o *)AssetData__GetObject_object__50017172(
                                          data,
                                          v9,
                                          (const MethodInfo_2FB3394 *)Method_AssetData_GetObject_Texture2D____77757336);
    }
    goto LABEL_11;
  }
  if ( !v4->fields.isNameTrue )
  {
    if ( data )
    {
      LastName = AssetData__get_LastName(data, 0LL);
      v8 = (System_String_o *)StringLiteral_17297/*"b"*/;
      goto LABEL_6;
    }
LABEL_11:
    sub_1C2E388(this, data);
  }
  return UICharaGraphRender__GetTrueNameTexture(v4, data, method);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Rect_o __fastcall UICharaGraphRender__GetNameUvRect(
        UICharaGraphRender_o *this,
        UnityEngine_Rect_o defaultValue,
        const MethodInfo *method)
{
  float m_Height; // s8
  float m_Width; // s9
  float m_YMin; // s11
  float m_XMin; // s10
  __int64 v8; // x1
  __int64 v9; // x1
  DataManager_o *Instance; // x0
  __int64 v11; // x1
  Il2CppObject *MasterData_object; // x0
  int32_t svtId; // w20
  ServantLimitMaster_o *v14; // x21
  const MethodInfo *v15; // x1
  int32_t SaintGraphNameIndex; // w0
  int v17; // w19
  UICharaGraphRender_c *v18; // x0
  struct UICharaGraphRender_StaticFields *static_fields; // x8
  float v20; // s0
  float v21; // s1
  float v22; // s2
  float v23; // s3
  ServantLimitEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF
  UnityEngine_Rect_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  m_Height = defaultValue.fields.m_Height;
  m_Width = defaultValue.fields.m_Width;
  m_YMin = defaultValue.fields.m_YMin;
  m_XMin = defaultValue.fields.m_XMin;
  if ( (byte_4BFECF7 & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataManager_GetMasterData_ServantLimitMaster___, method);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    sub_1C2E12C(&UICharaGraphRender_TypeInfo, v9);
    byte_4BFECF7 = 1;
  }
  if ( !this->fields.baseKind )
  {
    entity = 0LL;
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_18;
    MasterData_object = DataManager__GetMasterData_object_(
                          Instance,
                          (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
    svtId = this->fields.svtId;
    v14 = (ServantLimitMaster_o *)MasterData_object;
    Instance = (DataManager_o *)UICharaGraphRender__GetNameTargetLimitCount(this, v15);
    if ( !v14 )
      goto LABEL_18;
    m_YMin = 0.0;
    if ( !ServantLimitMaster__TryGetEntity(v14, &entity, svtId, (int32_t)Instance, 0LL) )
      goto LABEL_17;
    Instance = (DataManager_o *)entity;
    if ( !entity )
      goto LABEL_18;
    if ( !ServantLimitEntity__IsNeedChangeSaintGraphName(entity, 0LL) )
      goto LABEL_17;
    Instance = (DataManager_o *)entity;
    if ( !entity )
LABEL_18:
      sub_1C2E388(Instance, v11);
    SaintGraphNameIndex = ServantLimitEntity__GetSaintGraphNameIndex(entity, -1, 0LL);
    if ( (SaintGraphNameIndex & 0x80000000) == 0 )
    {
      v17 = SaintGraphNameIndex;
      v18 = UICharaGraphRender_TypeInfo;
      if ( !UICharaGraphRender_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UICharaGraphRender_TypeInfo);
        v18 = UICharaGraphRender_TypeInfo;
      }
      static_fields = v18->static_fields;
      if ( v17 < static_fields->MAX_SERVANT_NAME_UV_DIFF_COUNT )
      {
        if ( !v18->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v18);
          static_fields = UICharaGraphRender_TypeInfo->static_fields;
        }
        m_YMin = static_fields->SERVANT_NAME_UV_DIFF_Y * (float)v17;
      }
    }
  }
LABEL_17:
  v20 = m_XMin;
  v21 = m_YMin;
  v22 = m_Width;
  v23 = m_Height;
  result.fields.m_Height = v23;
  result.fields.m_Width = v22;
  result.fields.m_YMin = v21;
  result.fields.m_XMin = v20;
  return result;
}


System_String_o *__fastcall UICharaGraphRender__GetRaritySprite(UICharaGraphRender_o *this, const MethodInfo *method)
{
  int v2; // w19
  __int64 v3; // x1
  System_String_o *v4; // x20
  System_String_o *v5; // x0

  v2 = (int)this;
  if ( (byte_4BFECF8 & 1) == 0 )
  {
    sub_1C2E12C(&StringLiteral_23216/*"rarity"*/, method);
    sub_1C2E12C(&StringLiteral_16410/*"_"*/, v3);
    byte_4BFECF8 = 1;
  }
  v4 = System_Int32__ToString(v2 + 488, 0LL);
  v5 = System_Int32__ToString(v2 + 448, 0LL);
  return System_String__Concat_63248848(
           (System_String_o *)StringLiteral_23216/*"rarity"*/,
           v4,
           (System_String_o *)StringLiteral_16410/*"_"*/,
           v5,
           0LL);
}


UnityEngine_Texture2D_o *__fastcall UICharaGraphRender__GetTrueNameTexture(
        UICharaGraphRender_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  DataManager_o *Instance; // x0
  __int64 v10; // x1
  Il2CppObject *MasterData_object; // x0
  int32_t svtId; // w21
  ServantLimitMaster_o *v13; // x22
  const MethodInfo *v14; // x1
  __int64 *v15; // x20
  System_String_o *LastName; // x0
  System_String_o *v17; // x0
  ServantLimitEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4BFECF6 & 1) == 0 )
  {
    sub_1C2E12C(&Method_AssetData_GetObject_Texture2D____77757336, data);
    sub_1C2E12C(&Method_DataManager_GetMasterData_ServantLimitMaster___, v5);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    sub_1C2E12C(&StringLiteral_16912/*"a"*/, v7);
    sub_1C2E12C(&StringLiteral_22395/*"name"*/, v8);
    byte_4BFECF6 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  svtId = this->fields.svtId;
  v13 = (ServantLimitMaster_o *)MasterData_object;
  Instance = (DataManager_o *)UICharaGraphRender__GetNameTargetLimitCount(this, v14);
  if ( !v13 )
    goto LABEL_13;
  Instance = (DataManager_o *)ServantLimitMaster__TryGetEntity(v13, &entity, svtId, (int32_t)Instance, 0LL);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    goto LABEL_10;
  Instance = (DataManager_o *)entity;
  if ( !entity )
    goto LABEL_13;
  Instance = (DataManager_o *)ServantLimitEntity__IsNeedChangeSaintGraphName(entity, 0LL);
  if ( ((unsigned __int8)Instance & 1) == 0 )
  {
LABEL_10:
    if ( data )
    {
      v15 = &StringLiteral_16912/*"a"*/;
      goto LABEL_12;
    }
LABEL_13:
    sub_1C2E388(Instance, v10);
  }
  if ( !data )
    goto LABEL_13;
  v15 = &StringLiteral_22395/*"name"*/;
LABEL_12:
  LastName = AssetData__get_LastName(data, 0LL);
  v17 = System_String__Concat_63235584(LastName, (System_String_o *)*v15, 0LL);
  return (UnityEngine_Texture2D_o *)AssetData__GetObject_object__50017172(
                                      data,
                                      v17,
                                      (const MethodInfo_2FB3394 *)Method_AssetData_GetObject_Texture2D____77757336);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UICharaGraphRender__MoveAlpha(
        UICharaGraphRender_o *this,
        float duration,
        float alpha,
        const MethodInfo *method)
{
  long double v4; // q9
  long double v5; // q10
  long double v6; // q11
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v10; // x1
  UnityEngine_Color_o v11; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4

  *(float *)&v6 = this->fields.mColor.fields.r;
  *(float *)&v5 = this->fields.mColor.fields.g;
  *(float *)&v4 = this->fields.mColor.fields.b;
  if ( duration <= 0.0 )
  {
    ((void (__fastcall *)(UICharaGraphRender_o *, Il2CppMethodPointer, long double, long double, long double, long double))this->klass->vtable._39_SetTweenColor.method)(
      this,
      this->klass->vtable._40_GetTweenColor.methodPtr,
      v6,
      v5,
      v4,
      *(long double *)&alpha);
  }
  else
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    v11.fields.r = *(float *)&v6;
    v11.fields.g = *(float *)&v5;
    v11.fields.b = *(float *)&v4;
    v11.fields.a = alpha;
    TweenRendererColor__Begin(gameObject, duration, v11, v10);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UICharaGraphRender__MoveAlpha_42191672(
        UICharaGraphRender_o *this,
        float duration,
        float alpha,
        UnityEngine_GameObject_o *callbackObject,
        System_String_o *callbackFunc,
        const MethodInfo *method)
{
  long double v6; // q10
  long double v7; // q11
  long double v8; // q12
  long double v11; // q8
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v15; // x1
  TweenRendererColor_o *v16; // x21
  _BOOL8 v17; // x0
  __int64 v18; // x1
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  UnityEngine_Color_o v31; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4

  v11 = *(long double *)&alpha;
  if ( (byte_4BFECFA & 1) == 0 )
  {
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, callbackObject);
    byte_4BFECFA = 1;
  }
  *(float *)&v8 = this->fields.mColor.fields.r;
  *(float *)&v7 = this->fields.mColor.fields.g;
  *(float *)&v6 = this->fields.mColor.fields.b;
  if ( duration <= 0.0 )
  {
    ((void (__fastcall *)(UICharaGraphRender_o *, Il2CppMethodPointer, System_String_o *, const MethodInfo *, long double, long double, long double, long double))this->klass->vtable._39_SetTweenColor.method)(
      this,
      this->klass->vtable._40_GetTweenColor.methodPtr,
      callbackFunc,
      method,
      v8,
      v7,
      v6,
      v11);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v17 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)callbackObject, 0LL, 0LL);
    if ( v17 )
    {
      if ( !callbackObject )
        goto LABEL_18;
      UnityEngine_GameObject__SendMessage_70971180(callbackObject, callbackFunc, 0LL);
    }
  }
  else
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    v31.fields.r = *(float *)&v8;
    v31.fields.g = *(float *)&v7;
    v31.fields.b = *(float *)&v6;
    v31.fields.a = *(float *)&v11;
    v16 = TweenRendererColor__Begin(gameObject, duration, v31, v15);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)callbackObject, 0LL, 0LL) )
    {
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v17 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v16, 0LL, 0LL);
      if ( v17 )
      {
        if ( v16 )
        {
          v16->fields.eventReceiver = callbackObject;
          sub_1C2E0D0(
            (PartyOrganizationUtility_o *)&v16->fields.eventReceiver,
            (int64_t)callbackObject,
            v19,
            v20,
            v21,
            v22,
            v23,
            v24);
          v16->fields.callWhenFinished = callbackFunc;
          sub_1C2E0D0(
            (PartyOrganizationUtility_o *)&v16->fields.callWhenFinished,
            (int64_t)callbackFunc,
            v25,
            v26,
            v27,
            v28,
            v29,
            v30);
          return;
        }
LABEL_18:
        sub_1C2E388(v17, v18);
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UICharaGraphRender__SetAlpha(UICharaGraphRender_o *this, float alpha, const MethodInfo *method)
{
  long double v3; // q3

  *(float *)&v3 = this->fields.mColor.fields.r;
  ((void (__fastcall *)(UICharaGraphRender_o *, Il2CppMethodPointer, long double, float, float, long double))this->klass->vtable._39_SetTweenColor.method)(
    this,
    this->klass->vtable._40_GetTweenColor.methodPtr,
    v3,
    this->fields.mColor.fields.g,
    this->fields.mColor.fields.b,
    *(long double *)&alpha);
}


void __fastcall UICharaGraphRender__SetAtk(
        UICharaGraphRender_o *this,
        int32_t atk,
        int32_t adjustAtk,
        const MethodInfo *method)
{
  if ( (this->fields.atk & 0x80000000) == 0 )
  {
    this->fields.atk = atk;
    this->fields.adjustAtk = adjustAtk;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UICharaGraphRender__SetCharacter(
        UICharaGraphRender_o *this,
        int32_t svtId,
        int32_t limitCount,
        int32_t exceedCount,
        bool isOwn,
        int32_t lv,
        int32_t changeNameType,
        int32_t saintGraphType,
        const MethodInfo *method)
{
  __int64 v17; // x1
  BalanceConfig_c *v18; // x0
  int32_t ServantLimitMax; // w8
  const MethodInfo *v20; // x3

  if ( (byte_4BFECED & 1) == 0 )
  {
    sub_1C2E12C(&BalanceConfig_TypeInfo, *(_QWORD *)&svtId);
    sub_1C2E12C(&ImageLimitCount_TypeInfo, v17);
    byte_4BFECED = 1;
  }
  this->fields.imageSvtId = svtId;
  this->fields.svtId = svtId;
  v18 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v18 = BalanceConfig_TypeInfo;
  }
  ServantLimitMax = limitCount;
  if ( v18->static_fields->ServantLimitMax < limitCount )
  {
    ServantLimitMax = v18->static_fields->ServantLimitMax;
    if ( !v18->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v18);
      ServantLimitMax = BalanceConfig_TypeInfo->static_fields->ServantLimitMax;
    }
  }
  this->fields.limitCount = ServantLimitMax;
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  this->fields.imageLimitCount = ImageLimitCount__GetCardImageLimitCount(svtId, limitCount, isOwn, 0, 0LL);
  this->fields.exceedCount = exceedCount;
  this->fields.lv = lv;
  UICharaGraphRender__SetCharacter_42187164(this, changeNameType, saintGraphType, v20);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UICharaGraphRender__SetCharacter_42187164(
        UICharaGraphRender_o *this,
        int32_t changeNameType,
        int32_t saintGraphType,
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
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  DataManager_o *Instance; // x0
  __int64 rarity; // x1
  Il2CppObject *Entity; // x21
  ServantLimitEntity_o *v24; // x24
  ServantExceedEntity_o *v25; // x0
  ServantExceedEntity_o *v26; // x23
  int32_t frameType; // w0
  int32_t v28; // w24
  int32_t exceedCount; // w8
  int32_t classId; // w24
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  System_String_o *v37; // x0
  struct System_String_o *v38; // x1
  __int64 v39; // x8
  __int64 v40; // x9
  int32_t rarityIcon; // w23
  int32_t v42; // w0
  int v43; // w8
  int EventJoinNameExistSvtId; // w0
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  void *v51; // x1
  Il2CppObject *MasterData_object; // x0
  int32_t svtId; // w23
  int32_t imageLimitCount; // w25
  ServantLimitMaster_o *v55; // x24
  int32_t v56; // w0
  int32_t v57; // w23
  struct System_String_o *v58; // x0
  int64_t v59; // x2
  int32_t v60; // w3
  System_String_o *v61; // x4
  BattleSetupInfo_o *v62; // x5
  FollowerInfo_o *v63; // x6
  PartyListViewItem_o *v64; // x7
  unsigned int v65; // w8
  ServantLimitEntity_o *v66; // [xsp+0h] [xbp-70h] BYREF
  int32_t FrameId; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_4BFECEF & 1) == 0 )
  {
    sub_1C2E12C(&AtlasManager_TypeInfo, *(_QWORD *)&changeNameType);
    sub_1C2E12C(&Method_DataManager_GetMasterData_ServantExceedMaster___, v7);
    sub_1C2E12C(&Method_DataManager_GetMasterData_ServantLimitMaster___, v8);
    sub_1C2E12C(&Method_DataManager_GetMasterData_ServantLvDetailMaster___, v9);
    sub_1C2E12C(&Method_DataManager_GetMasterData_ServantMaster___, v10);
    sub_1C2E12C(&Method_DataManager_GetMaster_CommonReleaseMaster___, v11);
    sub_1C2E12C(&Method_DataManager_GetMaster_ServantLvDetailMaster___, v12);
    sub_1C2E12C(&DataManager_TypeInfo, v13);
    sub_1C2E12C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v14);
    sub_1C2E12C(&ImageLimitCount_TypeInfo, v15);
    sub_1C2E12C(&Rarity_TypeInfo, v16);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    sub_1C2E12C(&UICharaGraphRender_TypeInfo, v18);
    sub_1C2E12C(&StringLiteral_19957/*"frame"*/, v19);
    sub_1C2E12C(&StringLiteral_1/*""*/, v20);
    byte_4BFECEF = 1;
  }
  FrameId = 0;
  v66 = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_60;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_60;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             this->fields.svtId,
             (const MethodInfo_327B180 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_60;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !Instance )
    goto LABEL_60;
  v24 = ServantLimitMaster__GetEntity(
          (ServantLimitMaster_o *)Instance,
          this->fields.svtId,
          this->fields.limitCount,
          0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_60;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_ServantExceedMaster___);
  if ( !Entity )
    goto LABEL_60;
  *(int32x2_t *)&this->fields.svtType = vrev64_s32((int32x2_t)Entity[5].klass);
  if ( !v24 )
    goto LABEL_60;
  rarity = (unsigned int)v24->fields.rarity;
  this->fields.rarity = rarity;
  if ( !Instance )
    goto LABEL_60;
  v25 = ServantExceedMaster__GetEntity((ServantExceedMaster_o *)Instance, rarity, this->fields.exceedCount, 0LL);
  v26 = v25;
  if ( v25 )
  {
    frameType = v25->fields.frameType;
  }
  else
  {
    v28 = v24->fields.rarity;
    if ( !Rarity_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
    frameType = Rarity__getFrameTypeImage(v28, 0, 0LL);
  }
  exceedCount = this->fields.exceedCount;
  this->fields.frameType = frameType;
  if ( exceedCount >= 1 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_60;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_ServantLvDetailMaster___);
    if ( !Instance )
      goto LABEL_60;
    this->fields.frameType = ServantLvDetailMaster__GetFrameType(
                               (ServantLvDetailMaster_o *)Instance,
                               this->fields.rarity,
                               this->fields.lv,
                               this->fields.frameType,
                               0LL);
  }
  classId = this->fields.classId;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  FrameId = AtlasManager__GetFrameId(classId, 0LL);
  if ( FrameId < 1 )
  {
    Instance = (DataManager_o *)UICharaGraphRender_TypeInfo;
    if ( !UICharaGraphRender_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UICharaGraphRender_TypeInfo);
      Instance = (DataManager_o *)UICharaGraphRender_TypeInfo;
    }
    v39 = *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 112LL);
    if ( !v39 )
      goto LABEL_60;
    v40 = this->fields.frameType;
    if ( (unsigned int)v40 >= *(_DWORD *)(v39 + 24) )
      sub_1C2E390(Instance, rarity);
    v38 = *(struct System_String_o **)(v39 + 8 * v40 + 32);
  }
  else
  {
    v37 = System_Int32__ToString((int32_t)&FrameId, 0LL);
    v38 = System_String__Concat_63235584((System_String_o *)StringLiteral_19957/*"frame"*/, v37, 0LL);
  }
  this->fields.frameName = v38;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.frameName, (int64_t)v38, v31, v32, v33, v34, v35, v36);
  if ( this->fields.exceedCount < 1 )
  {
    v42 = 0;
  }
  else
  {
    if ( v26 )
      rarityIcon = v26->fields.rarityIcon;
    else
      rarityIcon = 1;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_2FD17DC *)Method_DataManager_GetMaster_ServantLvDetailMaster___);
    if ( !Instance )
      goto LABEL_60;
    v42 = ServantLvDetailMaster__GetRarityIcon(
            (ServantLvDetailMaster_o *)Instance,
            this->fields.rarity,
            this->fields.lv,
            rarityIcon,
            0LL);
  }
  this->fields.exceedType = v42;
  if ( ServantEntity__get_IsCombineMaterial((ServantEntity_o *)Entity, 0LL) )
    v43 = -1;
  else
    v43 = ServantEntity__get_IsServantMaterialTd((ServantEntity_o *)Entity, 0LL) << 31 >> 31;
  this->fields.atk = v43;
  this->fields.hp = v43;
  *(_QWORD *)&this->fields.adjustAtk = 0LL;
  this->fields.realNameCheck = changeNameType;
  this->fields.saintGraphType = saintGraphType;
  this->fields.isEventJoinNameExist = 0;
  EventJoinNameExistSvtId = ServantEntity__GetEventJoinNameExistSvtId((ServantEntity_o *)Entity, 0LL);
  if ( EventJoinNameExistSvtId >= 1 )
  {
    this->fields.imageSvtId = EventJoinNameExistSvtId;
    this->fields.isEventJoinNameExist = 1;
  }
  this->fields.isChangeGraph = 0;
  v51 = StringLiteral_1/*""*/;
  this->fields.changeGraphSuffix = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.changeGraphSuffix, (int64_t)v51, v45, v46, v47, v48, v49, v50);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_60;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  svtId = this->fields.svtId;
  imageLimitCount = this->fields.imageLimitCount;
  v55 = (ServantLimitMaster_o *)MasterData_object;
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  Instance = (DataManager_o *)ImageLimitCount__GetLimitCountByImageLimit(imageLimitCount, 0LL);
  if ( !v55 )
    goto LABEL_60;
  if ( !ServantLimitMaster__TryGetEntity(v55, &v66, svtId, (int32_t)Instance, 0LL) )
    goto LABEL_56;
  Instance = (DataManager_o *)v66;
  if ( !v66 )
    goto LABEL_60;
  v56 = ServantLimitEntity__GetChangeGraphCommonReleaseId(v66, -1, 0LL);
  if ( (v56 & 0x80000000) != 0 )
    goto LABEL_56;
  v57 = v56;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_2FD17DC *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  if ( !Instance )
    goto LABEL_60;
  if ( !CommonReleaseMaster__IsOpen((CommonReleaseMaster_o *)Instance, v57, 0LL, 0, 0LL) )
    goto LABEL_56;
  this->fields.isChangeGraph = 1;
  Instance = (DataManager_o *)v66;
  if ( !v66 )
LABEL_60:
    sub_1C2E388(Instance, rarity);
  v58 = ServantLimitEntity__GetChangeGraphSuffix(v66, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  this->fields.changeGraphSuffix = v58;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.changeGraphSuffix, (int64_t)v58, v59, v60, v61, v62, v63, v64);
LABEL_56:
  if ( (unsigned int)(changeNameType - 1) >= 3 )
    LOBYTE(v65) = ServantEntity__IsNameTrue((ServantEntity_o *)Entity, 0LL);
  else
    v65 = 0x100u >> (8 * (changeNameType - 1));
  this->fields.isNameTrue = v65;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UICharaGraphRender__SetCharacter_42188480(
        UICharaGraphRender_o *this,
        int32_t svtId,
        int32_t limitCount,
        int32_t imageLimitCount,
        int32_t exceedCount,
        int32_t lv,
        int32_t changeNameType,
        int32_t saintGraphType,
        System_Int32_array *idxs,
        const MethodInfo *method)
{
  int32_t ServantLimitMax; // w24
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  BalanceConfig_c *v21; // x0
  UICharaGraphRender_c *v22; // x0
  Il2CppObject *Instance; // x0
  __int64 v24; // x1
  BalanceConfig_c *v25; // x0
  int32_t v26; // w8
  const MethodInfo *v27; // x3
  int32_t imageLimitCounta; // [xsp+Ch] [xbp-54h] BYREF

  ServantLimitMax = limitCount;
  imageLimitCounta = imageLimitCount;
  if ( (byte_4BFECEE & 1) == 0 )
  {
    sub_1C2E12C(&BalanceConfig_TypeInfo, *(_QWORD *)&svtId);
    sub_1C2E12C(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, v18);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    sub_1C2E12C(&UICharaGraphRender_TypeInfo, v20);
    byte_4BFECEE = 1;
  }
  this->fields.imageSvtId = svtId;
  this->fields.svtId = svtId;
  if ( imageLimitCount >= 11 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___)) == 0LL )
    {
      sub_1C2E388(Instance, v24);
    }
    ServantLimitAddMaster__getCostumeId(
      (ServantLimitAddMaster_o *)Instance,
      &this->fields.imageSvtId,
      &imageLimitCounta,
      0LL);
  }
  else
  {
    v21 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v21 = BalanceConfig_TypeInfo;
    }
    if ( v21->static_fields->OtherImageLimitCount == imageLimitCount )
    {
      v22 = UICharaGraphRender_TypeInfo;
      if ( !UICharaGraphRender_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UICharaGraphRender_TypeInfo);
        v22 = UICharaGraphRender_TypeInfo;
      }
      imageLimitCounta = v22->static_fields->OTHER_IMAGE_LIMIT_COUNT;
    }
  }
  v25 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v25 = BalanceConfig_TypeInfo;
  }
  if ( v25->static_fields->ServantLimitMax < ServantLimitMax )
  {
    ServantLimitMax = v25->static_fields->ServantLimitMax;
    if ( !v25->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v25);
      ServantLimitMax = BalanceConfig_TypeInfo->static_fields->ServantLimitMax;
    }
  }
  this->fields.limitCount = ServantLimitMax;
  v26 = imageLimitCounta;
  this->fields.exceedCount = exceedCount;
  this->fields.lv = lv;
  this->fields.imageLimitCount = v26;
  this->fields.imagePartsGroupIdxs = idxs;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&this->fields.imagePartsGroupIdxs,
    (int64_t)idxs,
    *(int64_t *)&limitCount,
    imageLimitCount,
    *(System_String_o **)&exceedCount,
    *(BattleSetupInfo_o **)&lv,
    *(FollowerInfo_o **)&changeNameType,
    *(PartyListViewItem_o **)&saintGraphType);
  UICharaGraphRender__SetCharacter_42187164(this, changeNameType, saintGraphType, v27);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UICharaGraphRender__SetCommand(
        UICharaGraphRender_o *this,
        int32_t commandCodeId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  void *Instance; // x0
  __int64 v9; // x1
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  int32_t rarity; // w8
  __int64 v17; // x9
  struct System_String_o *v18; // x1

  if ( (byte_4BFECF0 & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataManager_GetMasterData_CommandCodeMaster___, *(_QWORD *)&commandCodeId);
    sub_1C2E12C(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__, v5);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    sub_1C2E12C(&UICharaGraphRender_TypeInfo, v7);
    byte_4BFECF0 = 1;
  }
  this->fields.commandCodeId = commandCodeId;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_CommandCodeMaster___);
  if ( !Instance )
    goto LABEL_11;
  Instance = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               this->fields.commandCodeId,
               (const MethodInfo_327B180 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
  *(_QWORD *)&this->fields.svtType = 0LL;
  if ( !Instance )
    goto LABEL_11;
  rarity = *((_DWORD *)Instance + 16);
  this->fields.rarity = rarity;
  Instance = UICharaGraphRender_TypeInfo;
  if ( !UICharaGraphRender_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICharaGraphRender_TypeInfo);
    Instance = UICharaGraphRender_TypeInfo;
    rarity = this->fields.rarity;
  }
  v17 = *(_QWORD *)(*((_QWORD *)Instance + 23) + 120LL);
  if ( !v17 )
LABEL_11:
    sub_1C2E388(Instance, v9);
  if ( (unsigned int)rarity >= *(_DWORD *)(v17 + 24) )
    sub_1C2E390(Instance, v9);
  v18 = *(struct System_String_o **)(v17 + 8LL * rarity + 32);
  this->fields.frameName = v18;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.frameName, (int64_t)v18, v10, v11, v12, v13, v14, v15);
  *(_OWORD *)&this->fields.atk = xmmword_C06510;
  this->fields.realNameCheck = 0;
  this->fields.isNameTrue = 1;
}


void __fastcall UICharaGraphRender__SetHp(
        UICharaGraphRender_o *this,
        int32_t hp,
        int32_t adjustHp,
        const MethodInfo *method)
{
  if ( (this->fields.hp & 0x80000000) == 0 )
  {
    this->fields.hp = hp;
    this->fields.adjustHp = adjustHp;
  }
}


void __fastcall UICharaGraphRender__SetLayer(UICharaGraphRender_o *this, int32_t layer, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1
  UnityEngine_Transform_o *transform; // x1
  const MethodInfo *v8; // x3

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1C2E388(0LL, v6);
  if ( UnityEngine_GameObject__get_layer(gameObject, 0LL) != layer )
  {
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    UICharaGraphRender__SetLayer_42192200(this, transform, layer, v8);
  }
}


void __fastcall UICharaGraphRender__SetLayer_42192200(
        UICharaGraphRender_o *this,
        UnityEngine_Transform_o *tf,
        int32_t layer,
        const MethodInfo *method)
{
  UICharaGraphRender_o *v6; // x21
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_IEnumerator_o *Enumerator; // x19
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v12; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_IEnumerator_c *v15; // x8
  __int64 v16; // x9
  System_Collections_IEnumerator_c **v17; // x10
  __int64 v18; // x0
  UnityEngine_Transform_o *v19; // x0
  const MethodInfo *v20; // x3
  __int64 methodPtr_low; // x10
  __int64 v22; // x0
  __int64 v23; // x8
  __int64 v24; // x19
  __int64 v25; // x9
  int *v26; // x10
  __int64 v27; // x0

  v6 = this;
  if ( (byte_4BFECFB & 1) == 0 )
  {
    sub_1C2E12C(&System_IDisposable_TypeInfo, tf);
    sub_1C2E12C(&System_Collections_IEnumerator_TypeInfo, v7);
    this = (UICharaGraphRender_o *)sub_1C2E12C(&UnityEngine_Transform_TypeInfo, v8);
    byte_4BFECFB = 1;
  }
  if ( !tf
    || (this = (UICharaGraphRender_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)tf, 0LL)) == 0LL )
  {
LABEL_33:
    sub_1C2E388(this, tf);
  }
  UnityEngine_GameObject__set_layer((UnityEngine_GameObject_o *)this, layer, 0LL);
  Enumerator = UnityEngine_Transform__GetEnumerator(tf, 0LL);
  if ( !Enumerator )
    sub_1C2E388(0LL, v9);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v12 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v12;
        p_offset += 4;
        if ( !v12 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_1C8010C(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v15 = Enumerator->klass;
    v16 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v17 = (System_Collections_IEnumerator_c **)&v15->_1.interfaceOffsets->offset;
      while ( *(v17 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v16;
        v17 += 2;
        if ( !v16 )
          goto LABEL_17;
      }
      v18 = (__int64)&v15->vtable[*(_DWORD *)v17 + 1].method;
    }
    else
    {
LABEL_17:
      v18 = sub_1C8010C(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
    }
    v19 = (UnityEngine_Transform_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v18)(
                                       Enumerator,
                                       *(_QWORD *)(v18 + 8));
    if ( v19 )
    {
      methodPtr_low = LOBYTE(UnityEngine_Transform_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(v19->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (UnityEngine_Transform_c *)v19->klass->_2.typeHierarchy[methodPtr_low - 1] != UnityEngine_Transform_TypeInfo )
      {
        sub_1C2E648(v19);
        goto LABEL_33;
      }
    }
    UICharaGraphRender__SetLayer_42192200(v6, v19, layer, v20);
  }
  v22 = sub_1C2E268(Enumerator, System_IDisposable_TypeInfo);
  if ( v22 )
  {
    v23 = *(_QWORD *)v22;
    v24 = v22;
    v25 = *(unsigned __int16 *)(*(_QWORD *)v22 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v22 + 302LL) )
    {
      v26 = (int *)(*(_QWORD *)(v23 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v26 - 1) != System_IDisposable_TypeInfo )
      {
        --v25;
        v26 += 4;
        if ( !v25 )
          goto LABEL_28;
      }
      v27 = v23 + 16LL * *v26 + 312;
    }
    else
    {
LABEL_28:
      v27 = sub_1C8010C(v22, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v27)(v24, *(_QWORD *)(v27 + 8));
  }
}