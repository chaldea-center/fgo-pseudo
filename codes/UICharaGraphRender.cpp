void UICharaGraphRender___cctor(const MethodInfo *method)
{
  struct UICharaGraphRender_StaticFields *static_fields; // x8
  __int64 v2; // x0
  __int64 v3; // x1
  unsigned int v4; // w8
  struct UICharaGraphRender_StaticFields *v5; // x9
  __int64 v6; // d2
  struct UICharaGraphRender_StaticFields *v7; // x9
  __int64 v8; // d2
  struct UICharaGraphRender_StaticFields *v9; // x9
  __int64 v10; // d3
  struct UICharaGraphRender_StaticFields *v11; // x9
  __int64 v12; // d2
  struct UICharaGraphRender_StaticFields *v13; // x9
  __int64 v14; // d3
  struct UICharaGraphRender_StaticFields *v15; // x9
  __int64 v16; // d2
  struct UICharaGraphRender_StaticFields *v17; // x9
  __int64 v18; // d3
  struct UICharaGraphRender_StaticFields *v19; // x9
  __int64 v20; // d2
  struct UICharaGraphRender_StaticFields *v21; // x9
  __int64 v22; // d3
  struct UICharaGraphRender_StaticFields *v23; // x9
  __int64 v24; // d2
  struct UICharaGraphRender_StaticFields *v25; // x9
  __int64 v26; // d3
  struct UICharaGraphRender_StaticFields *v27; // x8
  __int64 v28; // d2
  System_Collections_ObjectModel_ReadOnlyCollection_T__o *Only_Rect; // x0
  struct UICharaGraphRender_StaticFields *v30; // x8
  int32_t v31; // w2
  int32_t v32; // w3
  System_String_o *v33; // x4
  int32_t v34; // w5
  int64_t v35; // x6
  System_String_o *v36; // x7
  UICharaGraphRender_c *v37; // x8
  System_Array_o *v38; // x0
  System_RuntimeFieldHandle_o v39; // x1
  System_Array_o *v40; // x19
  struct UICharaGraphRender_StaticFields *v41; // x0
  int32_t v42; // w2
  int32_t v43; // w3
  System_String_o *v44; // x4
  int32_t v45; // w5
  int64_t v46; // x6
  System_String_o *v47; // x7
  int32_t v48; // w2
  int32_t v49; // w3
  System_String_o *v50; // x4
  int32_t v51; // w5
  int64_t v52; // x6
  System_String_o *v53; // x7
  __int64 v54; // x19
  int32_t v55; // w1
  int32_t v56; // w2
  int32_t v57; // w3
  System_String_o *v58; // x4
  int32_t v59; // w5
  int64_t v60; // x6
  System_String_o *v61; // x7
  int32_t v62; // w1
  int32_t v63; // w2
  int32_t v64; // w3
  System_String_o *v65; // x4
  int32_t v66; // w5
  int64_t v67; // x6
  System_String_o *v68; // x7
  int32_t v69; // w1
  int32_t v70; // w2
  int32_t v71; // w3
  System_String_o *v72; // x4
  int32_t v73; // w5
  int64_t v74; // x6
  System_String_o *v75; // x7
  int32_t v76; // w1
  int32_t v77; // w2
  int32_t v78; // w3
  System_String_o *v79; // x4
  int32_t v80; // w5
  int64_t v81; // x6
  System_String_o *v82; // x7
  int32_t v83; // w1
  int32_t v84; // w2
  int32_t v85; // w3
  System_String_o *v86; // x4
  int32_t v87; // w5
  int64_t v88; // x6
  System_String_o *v89; // x7
  int32_t v90; // w1
  struct UICharaGraphRender_StaticFields *v91; // x0
  int32_t v92; // w2
  int32_t v93; // w3
  System_String_o *v94; // x4
  int32_t v95; // w5
  int64_t v96; // x6
  System_String_o *v97; // x7
  int32_t v98; // w2
  int32_t v99; // w3
  System_String_o *v100; // x4
  int32_t v101; // w5
  int64_t v102; // x6
  System_String_o *v103; // x7
  __int64 v104; // x19
  int32_t v105; // w1
  int32_t v106; // w2
  int32_t v107; // w3
  System_String_o *v108; // x4
  int32_t v109; // w5
  int64_t v110; // x6
  System_String_o *v111; // x7
  int32_t v112; // w1
  int32_t v113; // w2
  int32_t v114; // w3
  System_String_o *v115; // x4
  int32_t v116; // w5
  int64_t v117; // x6
  System_String_o *v118; // x7
  int32_t v119; // w1
  int32_t v120; // w2
  int32_t v121; // w3
  System_String_o *v122; // x4
  int32_t v123; // w5
  int64_t v124; // x6
  System_String_o *v125; // x7
  int32_t v126; // w1
  int32_t v127; // w2
  int32_t v128; // w3
  System_String_o *v129; // x4
  int32_t v130; // w5
  int64_t v131; // x6
  System_String_o *v132; // x7
  int32_t v133; // w1
  int32_t v134; // w2
  int32_t v135; // w3
  System_String_o *v136; // x4
  int32_t v137; // w5
  int64_t v138; // x6
  System_String_o *v139; // x7
  int32_t v140; // w1
  int32_t v141; // w2
  int32_t v142; // w3
  System_String_o *v143; // x4
  int32_t v144; // w5
  int64_t v145; // x6
  System_String_o *v146; // x7
  int32_t v147; // w1
  int32_t v148; // w2
  int32_t v149; // w3
  System_String_o *v150; // x4
  int32_t v151; // w5
  int64_t v152; // x6
  System_String_o *v153; // x7
  int32_t v154; // w1
  struct UICharaGraphRender_StaticFields *v155; // x0
  int32_t v156; // w2
  int32_t v157; // w3
  System_String_o *v158; // x4
  int32_t v159; // w5
  int64_t v160; // x6
  System_String_o *v161; // x7
  int32_t v162; // w2
  int32_t v163; // w3
  System_String_o *v164; // x4
  int32_t v165; // w5
  int64_t v166; // x6
  System_String_o *v167; // x7
  __int64 v168; // x19
  int32_t v169; // w1
  int32_t v170; // w2
  int32_t v171; // w3
  System_String_o *v172; // x4
  int32_t v173; // w5
  int64_t v174; // x6
  System_String_o *v175; // x7
  int32_t v176; // w1
  int32_t v177; // w2
  int32_t v178; // w3
  System_String_o *v179; // x4
  int32_t v180; // w5
  int64_t v181; // x6
  System_String_o *v182; // x7
  int32_t v183; // w1
  int32_t v184; // w2
  int32_t v185; // w3
  System_String_o *v186; // x4
  int32_t v187; // w5
  int64_t v188; // x6
  System_String_o *v189; // x7
  int32_t v190; // w1
  int32_t v191; // w2
  int32_t v192; // w3
  System_String_o *v193; // x4
  int32_t v194; // w5
  int64_t v195; // x6
  System_String_o *v196; // x7
  int32_t v197; // w1
  int32_t v198; // w2
  int32_t v199; // w3
  System_String_o *v200; // x4
  int32_t v201; // w5
  int64_t v202; // x6
  System_String_o *v203; // x7
  int32_t v204; // w1
  int32_t v205; // w2
  int32_t v206; // w3
  System_String_o *v207; // x4
  int32_t v208; // w5
  int64_t v209; // x6
  System_String_o *v210; // x7
  int32_t v211; // w1
  int32_t v212; // w2
  int32_t v213; // w3
  System_String_o *v214; // x4
  int32_t v215; // w5
  int64_t v216; // x6
  System_String_o *v217; // x7
  int32_t v218; // w1
  struct UICharaGraphRender_StaticFields *v219; // x0
  int32_t v220; // w2
  int32_t v221; // w3
  System_String_o *v222; // x4
  int32_t v223; // w5
  int64_t v224; // x6
  System_String_o *v225; // x7
  int32_t v226; // w2
  int32_t v227; // w3
  System_String_o *v228; // x4
  int32_t v229; // w5
  int64_t v230; // x6
  System_String_o *v231; // x7
  __int64 v232; // x19
  int32_t v233; // w1
  int32_t v234; // w2
  int32_t v235; // w3
  System_String_o *v236; // x4
  int32_t v237; // w5
  int64_t v238; // x6
  System_String_o *v239; // x7
  int32_t v240; // w1
  int32_t v241; // w2
  int32_t v242; // w3
  System_String_o *v243; // x4
  int32_t v244; // w5
  int64_t v245; // x6
  System_String_o *v246; // x7
  int32_t v247; // w1
  int32_t v248; // w2
  int32_t v249; // w3
  System_String_o *v250; // x4
  int32_t v251; // w5
  int64_t v252; // x6
  System_String_o *v253; // x7
  int32_t v254; // w1
  int32_t v255; // w2
  int32_t v256; // w3
  System_String_o *v257; // x4
  int32_t v258; // w5
  int64_t v259; // x6
  System_String_o *v260; // x7
  int32_t v261; // w1
  int32_t v262; // w2
  int32_t v263; // w3
  System_String_o *v264; // x4
  int32_t v265; // w5
  int64_t v266; // x6
  System_String_o *v267; // x7
  int32_t v268; // w1
  struct UICharaGraphRender_StaticFields *v269; // x0
  int32_t v270; // w2
  int32_t v271; // w3
  System_String_o *v272; // x4
  int32_t v273; // w5
  int64_t v274; // x6
  System_String_o *v275; // x7

  if ( (byte_4CEFE15 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Array_AsReadOnly_Rect___);
    sub_1C7BAE8(&int___TypeInfo);
    sub_1C7BAE8(&UnityEngine_Rect___TypeInfo);
    sub_1C7BAE8(&string___TypeInfo);
    sub_1C7BAE8(&Field__PrivateImplementationDetails__F239810D17032E35383496434C64894FFE055A198BA7CFB907D73BAF26A70F0C);
    sub_1C7BAE8(&UICharaGraphRender_TypeInfo);
    sub_1C7BAE8(&StringLiteral_19806/*"frame5"*/);
    sub_1C7BAE8(&StringLiteral_19799/*"frame10000"*/);
    sub_1C7BAE8(&StringLiteral_16692/*"a"*/);
    sub_1C7BAE8(&StringLiteral_19807/*"frame6"*/);
    sub_1C7BAE8(&StringLiteral_19808/*"frame7"*/);
    sub_1C7BAE8(&StringLiteral_17049/*"b"*/);
    sub_1C7BAE8(&StringLiteral_17770/*"c"*/);
    sub_1C7BAE8(&StringLiteral_19800/*"frame10001"*/);
    sub_1C7BAE8(&StringLiteral_19802/*"frame10003"*/);
    sub_1C7BAE8(&StringLiteral_19804/*"frame3"*/);
    sub_1C7BAE8(&StringLiteral_19798/*"frame1"*/);
    sub_1C7BAE8(&StringLiteral_19801/*"frame10002"*/);
    sub_1C7BAE8(&StringLiteral_19797/*"frame0"*/);
    sub_1C7BAE8(&StringLiteral_19803/*"frame2"*/);
    sub_1C7BAE8(&StringLiteral_19805/*"frame4"*/);
    byte_4CEFE15 = 1;
  }
  static_fields = UICharaGraphRender_TypeInfo->static_fields;
  *(_OWORD *)&static_fields->OTHER_IMAGE_LIMIT_COUNT = xmmword_CF5A30;
  *(_QWORD *)&static_fields->SERVANT_BODY_SIZE_Y = 0x1FE000002D2LL;
  *(_OWORD *)&static_fields->SERVANT_BODY_U = xmmword_CF6790;
  static_fields->SERVANT_EQUIP_BODY_SIZE_Y = 872;
  *(_OWORD *)&static_fields->SERVANT_EQUIP_BODY_U = xmmword_CF69E0;
  v2 = sub_1C7BB90(UnityEngine_Rect___TypeInfo, 12);
  if ( !v2 )
    goto LABEL_50;
  v4 = *(_DWORD *)(v2 + 24);
  if ( !v4 )
    goto LABEL_49;
  v5 = UICharaGraphRender_TypeInfo->static_fields;
  v6 = *(_QWORD *)&v5->SERVANT_BODY_W;
  *(float32x2_t *)(v2 + 32) = vadd_f32(*(float32x2_t *)&v5->SERVANT_BODY_U, 0);
  *(_QWORD *)(v2 + 40) = v6;
  if ( v4 == 1 )
    goto LABEL_49;
  v7 = UICharaGraphRender_TypeInfo->static_fields;
  v8 = *(_QWORD *)&v7->SERVANT_BODY_W;
  *(float32x2_t *)(v2 + 48) = vadd_f32(*(float32x2_t *)&v7->SERVANT_BODY_U, (float32x2_t)1056964608LL);
  *(_QWORD *)(v2 + 56) = v8;
  if ( v4 <= 2 )
    goto LABEL_49;
  v9 = UICharaGraphRender_TypeInfo->static_fields;
  v10 = *(_QWORD *)&v9->SERVANT_BODY_W;
  *(float32x2_t *)(v2 + 64) = vadd_f32(*(float32x2_t *)&v9->SERVANT_BODY_U, 0);
  *(_QWORD *)(v2 + 72) = v10;
  if ( v4 == 3 )
    goto LABEL_49;
  v11 = UICharaGraphRender_TypeInfo->static_fields;
  v12 = *(_QWORD *)&v11->SERVANT_BODY_W;
  *(float32x2_t *)(v2 + 80) = vadd_f32(*(float32x2_t *)&v11->SERVANT_BODY_U, (float32x2_t)1056964608LL);
  *(_QWORD *)(v2 + 88) = v12;
  if ( v4 <= 4 )
    goto LABEL_49;
  v13 = UICharaGraphRender_TypeInfo->static_fields;
  v14 = *(_QWORD *)&v13->SERVANT_BODY_W;
  *(float32x2_t *)(v2 + 96) = vadd_f32(*(float32x2_t *)&v13->SERVANT_BODY_U, 0);
  *(_QWORD *)(v2 + 104) = v14;
  if ( v4 == 5 )
    goto LABEL_49;
  v15 = UICharaGraphRender_TypeInfo->static_fields;
  v16 = *(_QWORD *)&v15->SERVANT_BODY_W;
  *(float32x2_t *)(v2 + 112) = vadd_f32(*(float32x2_t *)&v15->SERVANT_BODY_U, (float32x2_t)1056964608LL);
  *(_QWORD *)(v2 + 120) = v16;
  if ( v4 <= 6 )
    goto LABEL_49;
  v17 = UICharaGraphRender_TypeInfo->static_fields;
  v18 = *(_QWORD *)&v17->SERVANT_BODY_W;
  *(float32x2_t *)(v2 + 128) = vadd_f32(*(float32x2_t *)&v17->SERVANT_BODY_U, 0);
  *(_QWORD *)(v2 + 136) = v18;
  if ( v4 == 7 )
    goto LABEL_49;
  v19 = UICharaGraphRender_TypeInfo->static_fields;
  v20 = *(_QWORD *)&v19->SERVANT_BODY_W;
  *(float32x2_t *)(v2 + 144) = vadd_f32(*(float32x2_t *)&v19->SERVANT_BODY_U, (float32x2_t)1056964608LL);
  *(_QWORD *)(v2 + 152) = v20;
  if ( v4 <= 8 )
    goto LABEL_49;
  v21 = UICharaGraphRender_TypeInfo->static_fields;
  v22 = *(_QWORD *)&v21->SERVANT_BODY_W;
  *(float32x2_t *)(v2 + 160) = vadd_f32(*(float32x2_t *)&v21->SERVANT_BODY_U, 0);
  *(_QWORD *)(v2 + 168) = v22;
  if ( v4 == 9 )
    goto LABEL_49;
  v23 = UICharaGraphRender_TypeInfo->static_fields;
  v24 = *(_QWORD *)&v23->SERVANT_BODY_W;
  *(float32x2_t *)(v2 + 176) = vadd_f32(*(float32x2_t *)&v23->SERVANT_BODY_U, (float32x2_t)1056964608LL);
  *(_QWORD *)(v2 + 184) = v24;
  if ( v4 <= 0xA )
    goto LABEL_49;
  v25 = UICharaGraphRender_TypeInfo->static_fields;
  v26 = *(_QWORD *)&v25->SERVANT_BODY_W;
  *(float32x2_t *)(v2 + 192) = vadd_f32(*(float32x2_t *)&v25->SERVANT_BODY_U, 0);
  *(_QWORD *)(v2 + 200) = v26;
  if ( v4 == 11 )
    goto LABEL_49;
  v27 = UICharaGraphRender_TypeInfo->static_fields;
  v28 = *(_QWORD *)&v27->SERVANT_BODY_W;
  *(float32x2_t *)(v2 + 208) = vadd_f32(*(float32x2_t *)&v27->SERVANT_BODY_U, (float32x2_t)1056964608LL);
  *(_QWORD *)(v2 + 216) = v28;
  Only_Rect = System_Array__AsReadOnly_Rect_(
                (UnityEngine_Rect_array *)v2,
                (const MethodInfo_3236D4C *)Method_System_Array_AsReadOnly_Rect___);
  v30 = UICharaGraphRender_TypeInfo->static_fields;
  v30->servantBodyRectTable = (struct System_Collections_ObjectModel_ReadOnlyCollection_Rect__o *)Only_Rect;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&v30->servantBodyRectTable,
    (int32_t)Only_Rect,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
  v37 = UICharaGraphRender_TypeInfo;
  UICharaGraphRender_TypeInfo->static_fields->servantEquipBodyRect = *(struct UnityEngine_Rect_o *)&UICharaGraphRender_TypeInfo->static_fields->SERVANT_EQUIP_BODY_U;
  *(_QWORD *)&v37->static_fields->SERVANT_NAME_UV_DIFF_Y = 0x43E800000LL;
  v38 = (System_Array_o *)sub_1C7BB90(int___TypeInfo, 4);
  v39.fields.value = Field__PrivateImplementationDetails__F239810D17032E35383496434C64894FFE055A198BA7CFB907D73BAF26A70F0C;
  v40 = v38;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_64876136(v38, v39, 0);
  v41 = UICharaGraphRender_TypeInfo->static_fields;
  v41->SERVANT_NAME_TARGET_LIMIT_COUNT = (struct System_Int32_array *)v40;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&v41->SERVANT_NAME_TARGET_LIMIT_COUNT,
    (int32_t)v40,
    v42,
    v43,
    v44,
    v45,
    v46,
    v47);
  v2 = sub_1C7BB90(string___TypeInfo, 6);
  if ( !v2 )
    goto LABEL_50;
  v54 = v2;
  if ( !*(_DWORD *)(v2 + 24) )
    goto LABEL_49;
  v55 = StringLiteral_16692/*"a"*/;
  *(_QWORD *)(v2 + 32) = StringLiteral_16692/*"a"*/;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v2 + 32), v55, v48, v49, v50, v51, v52, v53);
  if ( *(_DWORD *)(v54 + 24) <= 1u )
    goto LABEL_49;
  v62 = StringLiteral_16692/*"a"*/;
  *(_QWORD *)(v54 + 40) = StringLiteral_16692/*"a"*/;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v54 + 40), v62, v56, v57, v58, v59, v60, v61);
  if ( *(_DWORD *)(v54 + 24) <= 2u )
    goto LABEL_49;
  v69 = StringLiteral_17049/*"b"*/;
  *(_QWORD *)(v54 + 48) = StringLiteral_17049/*"b"*/;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v54 + 48), v69, v63, v64, v65, v66, v67, v68);
  if ( *(_DWORD *)(v54 + 24) <= 3u )
    goto LABEL_49;
  v76 = StringLiteral_17049/*"b"*/;
  *(_QWORD *)(v54 + 56) = StringLiteral_17049/*"b"*/;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v54 + 56), v76, v70, v71, v72, v73, v74, v75);
  if ( *(_DWORD *)(v54 + 24) <= 4u )
    goto LABEL_49;
  v83 = (int)StringLiteral_17770/*"c"*/;
  *(_QWORD *)(v54 + 64) = StringLiteral_17770/*"c"*/;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v54 + 64), v83, v77, v78, v79, v80, v81, v82);
  if ( *(_DWORD *)(v54 + 24) <= 5u )
    goto LABEL_49;
  v90 = (int)StringLiteral_17770/*"c"*/;
  *(_QWORD *)(v54 + 72) = StringLiteral_17770/*"c"*/;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v54 + 72), v90, v84, v85, v86, v87, v88, v89);
  v91 = UICharaGraphRender_TypeInfo->static_fields;
  v91->bodyTextureNameTable = (struct System_String_array *)v54;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v91->bodyTextureNameTable, v54, v92, v93, v94, v95, v96, v97);
  v2 = sub_1C7BB90(string___TypeInfo, 8);
  if ( !v2 )
    goto LABEL_50;
  v104 = v2;
  if ( !*(_DWORD *)(v2 + 24) )
    goto LABEL_49;
  v105 = StringLiteral_19797/*"frame0"*/;
  *(_QWORD *)(v2 + 32) = StringLiteral_19797/*"frame0"*/;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v2 + 32), v105, v98, v99, v100, v101, v102, v103);
  if ( *(_DWORD *)(v104 + 24) <= 1u )
    goto LABEL_49;
  v112 = StringLiteral_19798/*"frame1"*/;
  *(_QWORD *)(v104 + 40) = StringLiteral_19798/*"frame1"*/;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v104 + 40), v112, v106, v107, v108, v109, v110, v111);
  if ( *(_DWORD *)(v104 + 24) <= 2u )
    goto LABEL_49;
  v119 = StringLiteral_19803/*"frame2"*/;
  *(_QWORD *)(v104 + 48) = StringLiteral_19803/*"frame2"*/;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v104 + 48), v119, v113, v114, v115, v116, v117, v118);
  if ( *(_DWORD *)(v104 + 24) <= 3u )
    goto LABEL_49;
  v126 = StringLiteral_19804/*"frame3"*/;
  *(_QWORD *)(v104 + 56) = StringLiteral_19804/*"frame3"*/;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v104 + 56), v126, v120, v121, v122, v123, v124, v125);
  if ( *(_DWORD *)(v104 + 24) <= 4u )
    goto LABEL_49;
  v133 = StringLiteral_19805/*"frame4"*/;
  *(_QWORD *)(v104 + 64) = StringLiteral_19805/*"frame4"*/;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v104 + 64), v133, v127, v128, v129, v130, v131, v132);
  if ( *(_DWORD *)(v104 + 24) <= 5u )
    goto LABEL_49;
  v140 = StringLiteral_19806/*"frame5"*/;
  *(_QWORD *)(v104 + 72) = StringLiteral_19806/*"frame5"*/;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v104 + 72), v140, v134, v135, v136, v137, v138, v139);
  if ( *(_DWORD *)(v104 + 24) <= 6u )
    goto LABEL_49;
  v147 = StringLiteral_19807/*"frame6"*/;
  *(_QWORD *)(v104 + 80) = StringLiteral_19807/*"frame6"*/;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v104 + 80), v147, v141, v142, v143, v144, v145, v146);
  if ( *(_DWORD *)(v104 + 24) <= 7u )
    goto LABEL_49;
  v154 = StringLiteral_19808/*"frame7"*/;
  *(_QWORD *)(v104 + 88) = StringLiteral_19808/*"frame7"*/;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v104 + 88), v154, v148, v149, v150, v151, v152, v153);
  v155 = UICharaGraphRender_TypeInfo->static_fields;
  v155->baseFrameList = (struct System_String_array *)v104;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v155->baseFrameList, v104, v156, v157, v158, v159, v160, v161);
  v2 = sub_1C7BB90(string___TypeInfo, 8);
  if ( !v2 )
    goto LABEL_50;
  v168 = v2;
  if ( !*(_DWORD *)(v2 + 24) )
    goto LABEL_49;
  v169 = StringLiteral_19801/*"frame10002"*/;
  *(_QWORD *)(v2 + 32) = StringLiteral_19801/*"frame10002"*/;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v2 + 32), v169, v162, v163, v164, v165, v166, v167);
  if ( *(_DWORD *)(v168 + 24) <= 1u )
    goto LABEL_49;
  v176 = StringLiteral_19799/*"frame10000"*/;
  *(_QWORD *)(v168 + 40) = StringLiteral_19799/*"frame10000"*/;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v168 + 40), v176, v170, v171, v172, v173, v174, v175);
  if ( *(_DWORD *)(v168 + 24) <= 2u )
    goto LABEL_49;
  v183 = StringLiteral_19799/*"frame10000"*/;
  *(_QWORD *)(v168 + 48) = StringLiteral_19799/*"frame10000"*/;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v168 + 48), v183, v177, v178, v179, v180, v181, v182);
  if ( *(_DWORD *)(v168 + 24) <= 3u )
    goto LABEL_49;
  v190 = StringLiteral_19799/*"frame10000"*/;
  *(_QWORD *)(v168 + 56) = StringLiteral_19799/*"frame10000"*/;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v168 + 56), v190, v184, v185, v186, v187, v188, v189);
  if ( *(_DWORD *)(v168 + 24) <= 4u )
    goto LABEL_49;
  v197 = StringLiteral_19800/*"frame10001"*/;
  *(_QWORD *)(v168 + 64) = StringLiteral_19800/*"frame10001"*/;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v168 + 64), v197, v191, v192, v193, v194, v195, v196);
  if ( *(_DWORD *)(v168 + 24) <= 5u
    || (v204 = StringLiteral_19800/*"frame10001"*/,
        *(_QWORD *)(v168 + 72) = StringLiteral_19800/*"frame10001"*/,
        sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v168 + 72), v204, v198, v199, v200, v201, v202, v203),
        *(_DWORD *)(v168 + 24) <= 6u)
    || (v211 = StringLiteral_19802/*"frame10003"*/,
        *(_QWORD *)(v168 + 80) = StringLiteral_19802/*"frame10003"*/,
        sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v168 + 80), v211, v205, v206, v207, v208, v209, v210),
        *(_DWORD *)(v168 + 24) <= 7u) )
  {
LABEL_49:
    sub_1C7BD48(v2);
  }
  v218 = StringLiteral_19802/*"frame10003"*/;
  *(_QWORD *)(v168 + 88) = StringLiteral_19802/*"frame10003"*/;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v168 + 88), v218, v212, v213, v214, v215, v216, v217);
  v219 = UICharaGraphRender_TypeInfo->static_fields;
  v219->BaseGrandFrameList = (struct System_String_array *)v168;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v219->BaseGrandFrameList, v168, v220, v221, v222, v223, v224, v225);
  v2 = sub_1C7BB90(string___TypeInfo, 6);
  if ( !v2 )
LABEL_50:
    sub_1C7BD40(v2, v3);
  v232 = v2;
  if ( !*(_DWORD *)(v2 + 24) )
    goto LABEL_49;
  v233 = StringLiteral_19797/*"frame0"*/;
  *(_QWORD *)(v2 + 32) = StringLiteral_19797/*"frame0"*/;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v2 + 32), v233, v226, v227, v228, v229, v230, v231);
  if ( *(_DWORD *)(v232 + 24) <= 1u )
    goto LABEL_49;
  v240 = StringLiteral_19798/*"frame1"*/;
  *(_QWORD *)(v232 + 40) = StringLiteral_19798/*"frame1"*/;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v232 + 40), v240, v234, v235, v236, v237, v238, v239);
  if ( *(_DWORD *)(v232 + 24) <= 2u )
    goto LABEL_49;
  v247 = StringLiteral_19798/*"frame1"*/;
  *(_QWORD *)(v232 + 48) = StringLiteral_19798/*"frame1"*/;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v232 + 48), v247, v241, v242, v243, v244, v245, v246);
  if ( *(_DWORD *)(v232 + 24) <= 3u )
    goto LABEL_49;
  v254 = StringLiteral_19803/*"frame2"*/;
  *(_QWORD *)(v232 + 56) = StringLiteral_19803/*"frame2"*/;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v232 + 56), v254, v248, v249, v250, v251, v252, v253);
  if ( *(_DWORD *)(v232 + 24) <= 4u )
    goto LABEL_49;
  v261 = StringLiteral_19804/*"frame3"*/;
  *(_QWORD *)(v232 + 64) = StringLiteral_19804/*"frame3"*/;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v232 + 64), v261, v255, v256, v257, v258, v259, v260);
  if ( *(_DWORD *)(v232 + 24) <= 5u )
    goto LABEL_49;
  v268 = StringLiteral_19804/*"frame3"*/;
  *(_QWORD *)(v232 + 72) = StringLiteral_19804/*"frame3"*/;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v232 + 72), v268, v262, v263, v264, v265, v266, v267);
  v269 = UICharaGraphRender_TypeInfo->static_fields;
  v269->commandCodeBaseFrameList = (struct System_String_array *)v232;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v269->commandCodeBaseFrameList, v232, v270, v271, v272, v273, v274, v275);
}


void UICharaGraphRender___ctor(UICharaGraphRender_o *this, const MethodInfo *method)
{
  UITweenRenderer___ctor((UITweenRenderer_o *)this, 0);
}


System_String_o *UICharaGraphRender__GetAssetName(int32_t svtId, int32_t imageLimitCount, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v5; // x1
  System_String_o *v6; // x0
  System_String_o *v7; // x0
  int32_t IntValue; // w0
  int32_t v9; // w19
  System_String_o *v10; // x19
  System_String_o **p_defaultName; // x8
  const MethodInfo *v12; // x2
  Il2CppObject *v13; // x19
  System_String_o *v14; // x0
  System_String_o *v15; // x19
  int v17; // [xsp+4h] [xbp-5Ch] BYREF
  Il2CppObject *v18; // [xsp+8h] [xbp-58h] BYREF
  Il2CppObject *v19; // [xsp+10h] [xbp-50h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-48h] BYREF
  System_String_o *defaultName; // [xsp+20h] [xbp-40h] BYREF
  int32_t imageLimitCounta; // [xsp+28h] [xbp-38h] BYREF
  int32_t svtIda; // [xsp+2Ch] [xbp-34h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v24; // 0:x0.16

  imageLimitCounta = imageLimitCount;
  svtIda = svtId;
  if ( (byte_4CEFE02 & 1) == 0 )
  {
    sub_1C7BAE8(&AssetManager_TypeInfo);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMaster_ImagePartsGroupMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMaster_UserImagePartsGroupMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    sub_1C7BAE8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_1C7BAE8(&Method_DataMasterBase_UserImagePartsGroupMaster__UserImagePartsGroupEntity__int__TryGetEntity__);
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C7BAE8(&StringLiteral_21608/*"maleImageId"*/);
    sub_1C7BAE8(&StringLiteral_4390/*"CharaGraph/100000"*/);
    sub_1C7BAE8(&StringLiteral_20457/*"imagePartsGroupId"*/);
    sub_1C7BAE8(&StringLiteral_4389/*"CharaGraph/"*/);
    byte_4CEFE02 = 1;
  }
  entity = 0;
  defaultName = 0;
  v18 = 0;
  v19 = 0;
  v17 = 0;
  if ( imageLimitCount >= 11 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_46;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    if ( !Instance )
      goto LABEL_46;
    ServantLimitAddMaster__getCostumeId((ServantLimitAddMaster_o *)Instance, &svtIda, &imageLimitCounta, 0);
  }
  v6 = System_Int32__ToString((int32_t)&svtIda, 0);
  defaultName = System_String__Concat_64176912((System_String_o *)StringLiteral_4389/*"CharaGraph/"*/, v6, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !Instance )
    goto LABEL_46;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
         &entity,
         svtIda,
         (const MethodInfo_342E348 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
  {
    Instance = (DataManager_o *)UserGameMaster__getSelfUserGame(0);
    if ( !Instance )
      goto LABEL_46;
    Instance = (DataManager_o *)UserGameEntity__IsMale((UserGameEntity_o *)Instance, 0);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( !entity )
        goto LABEL_46;
      Instance = (DataManager_o *)EntityScriptUtil__GetIntValue(
                                    (System_Collections_Generic_Dictionary_string__object__o *)entity[12].klass,
                                    (System_String_o *)StringLiteral_21608/*"maleImageId"*/,
                                    0,
                                    0);
      v17 = (int)Instance;
      if ( (_DWORD)Instance )
      {
        v7 = System_Int32__ToString((int32_t)&v17, 0);
        Instance = (DataManager_o *)System_String__Concat_64176912((System_String_o *)StringLiteral_4389/*"CharaGraph/"*/, v7, 0);
        defaultName = (System_String_o *)Instance;
      }
    }
    if ( !entity )
      goto LABEL_46;
    IntValue = EntityScriptUtil__GetIntValue(
                 (System_Collections_Generic_Dictionary_string__object__o *)entity[12].klass,
                 (System_String_o *)StringLiteral_20457/*"imagePartsGroupId"*/,
                 0,
                 0);
    if ( IntValue )
    {
      v9 = IntValue;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_UserImagePartsGroupMaster___);
      if ( !Instance )
        goto LABEL_46;
      if ( DataMasterBase_object__object__int___TryGetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             &v18,
             v9,
             (const MethodInfo_342E348 *)Method_DataMasterBase_UserImagePartsGroupMaster__UserImagePartsGroupEntity__int__TryGetEntity__) )
      {
        Instance = (DataManager_o *)v18;
        if ( !v18 )
          goto LABEL_46;
        UserImagePartsGroupEntity__ConcatImageValues((UserImagePartsGroupEntity_o *)v18, &defaultName, 0);
      }
      else if ( v9 >= 1 )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_ImagePartsGroupMaster___);
        if ( !Instance )
          goto LABEL_46;
        ImagePartsGroupMaster__ConcatDefaultImageValues((ImagePartsGroupMaster_o *)Instance, v9, &defaultName, 0);
      }
    }
  }
  v10 = defaultName;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( AssetManager__isExistAssetStorage(v10, 0) )
    goto LABEL_32;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_46;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_46;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          &v19,
          svtIda,
          (const MethodInfo_342E348 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
    goto LABEL_44;
  Instance = (DataManager_o *)v19;
  if ( !v19 )
    goto LABEL_46;
  Instance = (DataManager_o *)ServantEntity__get_IsServantMaterialTd((ServantEntity_o *)v19, 0);
  if ( ((unsigned __int8)Instance & 1) == 0 )
  {
LABEL_44:
    p_defaultName = (System_String_o **)&StringLiteral_4390/*"CharaGraph/100000"*/;
    return *p_defaultName;
  }
  if ( !v19 )
LABEL_46:
    sub_1C7BD40(Instance, v5);
  v13 = v19 + 2;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v24.fields.currentCryptoKey = v13;
  *(_QWORD *)&v24.fields.fakeValue = 0;
  v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v24, v12);
  defaultName = System_String__Concat_64176912((System_String_o *)StringLiteral_4389/*"CharaGraph/"*/, v14, 0);
  v15 = defaultName;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__isExistAssetStorage(v15, 0) )
    goto LABEL_44;
LABEL_32:
  p_defaultName = &defaultName;
  return *p_defaultName;
}


System_String_o *UICharaGraphRender__GetAssetName_44432688(
        int32_t imageSvtId,
        System_Int32_array *imagePartsGroupIdxs,
        const MethodInfo *method)
{
  System_String_o *v4; // x0
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  __int64 v6; // x1
  System_String_o *v7; // x0
  int32_t IntValue; // w0
  int32_t v9; // w20
  bool IsNullOrEmpty; // w21
  System_String_o *v11; // x19
  System_String_o **p_defaultName; // x8
  const MethodInfo *v13; // x2
  Il2CppObject *v14; // x19
  System_String_o *v15; // x0
  System_String_o *v16; // x19
  UserImagePartsGroupEntity_o *v18; // [xsp+0h] [xbp-60h] BYREF
  Il2CppObject *v19; // [xsp+8h] [xbp-58h] BYREF
  Il2CppObject *entity; // [xsp+10h] [xbp-50h] BYREF
  System_String_o *defaultName; // [xsp+18h] [xbp-48h] BYREF
  int v22; // [xsp+28h] [xbp-38h] BYREF
  int32_t key; // [xsp+2Ch] [xbp-34h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v24; // 0:x0.16

  key = imageSvtId;
  if ( (byte_4CEFE03 & 1) == 0 )
  {
    sub_1C7BAE8(&AssetManager_TypeInfo);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMaster_ImagePartsGroupMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMaster_UserImagePartsGroupMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    sub_1C7BAE8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_1C7BAE8(&Method_DataMasterBase_UserImagePartsGroupMaster__UserImagePartsGroupEntity__int__TryGetEntity__);
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C7BAE8(&StringLiteral_21608/*"maleImageId"*/);
    sub_1C7BAE8(&StringLiteral_4390/*"CharaGraph/100000"*/);
    sub_1C7BAE8(&StringLiteral_20457/*"imagePartsGroupId"*/);
    sub_1C7BAE8(&StringLiteral_4389/*"CharaGraph/"*/);
    byte_4CEFE03 = 1;
  }
  entity = 0;
  v18 = 0;
  v19 = 0;
  v22 = 0;
  v4 = System_Int32__ToString((int32_t)&key, 0);
  defaultName = System_String__Concat_64176912((System_String_o *)StringLiteral_4389/*"CharaGraph/"*/, v4, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !Master_object )
    goto LABEL_44;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          Master_object,
          &entity,
          key,
          (const MethodInfo_342E348 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
    goto LABEL_27;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UserGameMaster__getSelfUserGame(0);
  if ( !Master_object )
    goto LABEL_44;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UserGameEntity__IsMale(
                                                                  (UserGameEntity_o *)Master_object,
                                                                  0);
  if ( ((unsigned __int8)Master_object & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_44;
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)EntityScriptUtil__GetIntValue(
                                                                    (System_Collections_Generic_Dictionary_string__object__o *)entity[12].klass,
                                                                    (System_String_o *)StringLiteral_21608/*"maleImageId"*/,
                                                                    0,
                                                                    0);
    v22 = (int)Master_object;
    if ( (_DWORD)Master_object )
    {
      v7 = System_Int32__ToString((int32_t)&v22, 0);
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_String__Concat_64176912(
                                                                      (System_String_o *)StringLiteral_4389/*"CharaGraph/"*/,
                                                                      v7,
                                                                      0);
      defaultName = (System_String_o *)Master_object;
    }
  }
  if ( !entity )
    goto LABEL_44;
  IntValue = EntityScriptUtil__GetIntValue(
               (System_Collections_Generic_Dictionary_string__object__o *)entity[12].klass,
               (System_String_o *)StringLiteral_20457/*"imagePartsGroupId"*/,
               0,
               0);
  if ( !IntValue )
    goto LABEL_27;
  v9 = IntValue;
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)imagePartsGroupIdxs, 0);
  if ( DataManager_TypeInfo->_2.cctor_finished )
  {
    if ( IsNullOrEmpty )
      goto LABEL_16;
LABEL_21:
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_ImagePartsGroupMaster___);
    if ( !Master_object )
      goto LABEL_44;
    ImagePartsGroupMaster__ConcatImageValues(
      (ImagePartsGroupMaster_o *)Master_object,
      v9,
      imagePartsGroupIdxs,
      &defaultName,
      0);
    goto LABEL_27;
  }
  j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  if ( !IsNullOrEmpty )
    goto LABEL_21;
LABEL_16:
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_UserImagePartsGroupMaster___);
  if ( !Master_object )
    goto LABEL_44;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         Master_object,
         (Il2CppObject **)&v18,
         v9,
         (const MethodInfo_342E348 *)Method_DataMasterBase_UserImagePartsGroupMaster__UserImagePartsGroupEntity__int__TryGetEntity__) )
  {
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)v18;
    if ( !v18 )
      goto LABEL_44;
    UserImagePartsGroupEntity__ConcatImageValues(v18, &defaultName, 0);
  }
  else
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_ImagePartsGroupMaster___);
    if ( !Master_object )
      goto LABEL_44;
    ImagePartsGroupMaster__ConcatDefaultImageValues((ImagePartsGroupMaster_o *)Master_object, v9, &defaultName, 0);
  }
LABEL_27:
  v11 = defaultName;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( AssetManager__isExistAssetStorage(v11, 0) )
    goto LABEL_30;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Master_object )
    goto LABEL_44;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMasterData_object_(
                                                                  (DataManager_o *)Master_object,
                                                                  (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Master_object )
    goto LABEL_44;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          Master_object,
          &v19,
          key,
          (const MethodInfo_342E348 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
    goto LABEL_42;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)v19;
  if ( !v19 )
    goto LABEL_44;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)ServantEntity__get_IsServantMaterialTd(
                                                                  (ServantEntity_o *)v19,
                                                                  0);
  if ( ((unsigned __int8)Master_object & 1) == 0 )
  {
LABEL_42:
    p_defaultName = (System_String_o **)&StringLiteral_4390/*"CharaGraph/100000"*/;
    return *p_defaultName;
  }
  if ( !v19 )
LABEL_44:
    sub_1C7BD40(Master_object, v6);
  v14 = v19 + 2;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v24.fields.currentCryptoKey = v14;
  *(_QWORD *)&v24.fields.fakeValue = 0;
  v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v24, v13);
  defaultName = System_String__Concat_64176912((System_String_o *)StringLiteral_4389/*"CharaGraph/"*/, v15, 0);
  v16 = defaultName;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__isExistAssetStorage(v16, 0) )
    goto LABEL_42;
LABEL_30:
  p_defaultName = &defaultName;
  return *p_defaultName;
}


int32_t UICharaGraphRender__GetBaseKind(UICharaGraphRender_o *this, const MethodInfo *method)
{
  return this->fields.baseKind;
}


UnityEngine_Vector2_o UICharaGraphRender__GetBodySize(UICharaGraphRender_o *this, const MethodInfo *method)
{
  UICharaGraphRender_c *v3; // x0
  int32_t baseKind; // w19
  struct UICharaGraphRender_StaticFields *static_fields; // x8
  __int64 v6; // x9
  __int64 v7; // x10
  float v8; // s0
  float v9; // s1
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  if ( (byte_4CEFE0A & 1) == 0 )
  {
    sub_1C7BAE8(&UICharaGraphRender_TypeInfo);
    byte_4CEFE0A = 1;
  }
  v3 = UICharaGraphRender_TypeInfo;
  baseKind = this->fields.baseKind;
  if ( !UICharaGraphRender_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICharaGraphRender_TypeInfo);
    v3 = UICharaGraphRender_TypeInfo;
  }
  static_fields = v3->static_fields;
  v6 = 24;
  if ( baseKind )
  {
    v7 = 20;
  }
  else
  {
    v6 = 16;
    v7 = 12;
  }
  v8 = (float)*(int *)((char *)&static_fields->OTHER_IMAGE_LIMIT_COUNT + v7);
  v9 = (float)*(int *)((char *)&static_fields->OTHER_IMAGE_LIMIT_COUNT + v6);
  result.fields.y = v9;
  result.fields.x = v8;
  return result;
}


UnityEngine_Texture2D_o *UICharaGraphRender__GetBodyTexture(
        UICharaGraphRender_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  UICharaGraphRender_o *v4; // x20
  System_String_o *LastName; // x0
  System_String_o *v6; // x1
  System_String_o **p_changeGraphSuffix; // x8
  struct System_DelegateData_o *v8; // x8
  __int64 imageLimitCount; // x9
  System_String_o *v10; // x21
  System_String_o *v11; // x0
  System_String_o *v12; // x0
  Il2CppObject *Object_object__51713432; // x22
  UnityEngine_Texture2D_o *result; // x0
  System_String_o *v15; // x1

  v4 = this;
  if ( (byte_4CEFE0C & 1) == 0 )
  {
    sub_1C7BAE8(&Method_AssetData_GetObject_Texture2D____78791600);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&UICharaGraphRender_TypeInfo);
    this = (UICharaGraphRender_o *)sub_1C7BAE8(&StringLiteral_16692/*"a"*/);
    byte_4CEFE0C = 1;
  }
  if ( v4->fields.baseKind )
  {
    v4->fields.textureImageLimitCount = 0;
    if ( data )
    {
      LastName = AssetData__get_LastName(data, 0);
      v6 = (System_String_o *)StringLiteral_16692/*"a"*/;
      goto LABEL_19;
    }
LABEL_20:
    sub_1C7BD40(this, data);
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
    v8 = this->fields.onChange->fields.data;
    if ( !v8 )
      goto LABEL_20;
    imageLimitCount = v4->fields.imageLimitCount;
    if ( (unsigned int)imageLimitCount >= LODWORD(v8->fields.method_name) )
      sub_1C7BD48(this);
    p_changeGraphSuffix = (System_String_o **)(&v8->fields.curried_first_arg + 8 * imageLimitCount);
    if ( !data )
      goto LABEL_20;
  }
  v10 = *p_changeGraphSuffix;
  v11 = AssetData__get_LastName(data, 0);
  v12 = System_String__Concat_64176912(v11, v10, 0);
  Object_object__51713432 = AssetData__GetObject_object__51713432(
                              data,
                              v12,
                              (const MethodInfo_3151598 *)Method_AssetData_GetObject_Texture2D____78791600);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Object_object__51713432, 0, 0) )
  {
    result = (UnityEngine_Texture2D_o *)Object_object__51713432;
    v4->fields.textureImageLimitCount = v4->fields.imageLimitCount;
    return result;
  }
  v4->fields.textureImageLimitCount = 0;
  LastName = AssetData__get_LastName(data, 0);
  v6 = v10;
LABEL_19:
  v15 = System_String__Concat_64176912(LastName, v6, 0);
  return (UnityEngine_Texture2D_o *)AssetData__GetObject_object__51713432(
                                      data,
                                      v15,
                                      (const MethodInfo_3151598 *)Method_AssetData_GetObject_Texture2D____78791600);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Rect_o UICharaGraphRender__GetBodyUvRect(UICharaGraphRender_o *this, const MethodInfo *method)
{
  UICharaGraphRender_c *v3; // x0
  int32_t baseKind; // w21
  struct UICharaGraphRender_StaticFields *static_fields; // x8
  float m_XMin; // s0 OVERLAPPED
  float m_YMin; // s1
  float m_Width; // s2
  float m_Height; // s3
  System_Collections_ObjectModel_ReadOnlyCollection_Rect__o *servantBodyRectTable; // x0
  UnityEngine_Rect_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4CEFE0B & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_ObjectModel_ReadOnlyCollection_Rect__get_Item__);
    sub_1C7BAE8(&UICharaGraphRender_TypeInfo);
    byte_4CEFE0B = 1;
  }
  v3 = UICharaGraphRender_TypeInfo;
  baseKind = this->fields.baseKind;
  if ( !UICharaGraphRender_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICharaGraphRender_TypeInfo);
    v3 = UICharaGraphRender_TypeInfo;
  }
  static_fields = v3->static_fields;
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
      sub_1C7BD40(0, method);
    *(UnityEngine_Rect_o *)&m_XMin = System_Collections_ObjectModel_ReadOnlyCollection_Rect___get_Item(
                                       servantBodyRectTable,
                                       this->fields.textureImageLimitCount,
                                       (const MethodInfo_3A3D8B8 *)Method_System_Collections_ObjectModel_ReadOnlyCollection_Rect__get_Item__);
  }
  result.fields.m_Height = m_Height;
  result.fields.m_Width = m_Width;
  result.fields.m_YMin = m_YMin;
  result.fields.m_XMin = m_XMin;
  return result;
}


System_String_o *UICharaGraphRender__GetClassSprite(UICharaGraphRender_o *this, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v4; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v5; // x20
  System_String_o *result; // x0
  int v7; // w20
  int32_t frameType; // w21
  _BOOL4 IsGrandServant_k__BackingField; // w19
  System_String_o *v10; // x19
  System_String_o *v11; // x0
  int32_t AdjustFrameTypeForClass; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4CEFE12 & 1) == 0 )
  {
    sub_1C7BAE8(&AtlasManager_TypeInfo);
    sub_1C7BAE8(&Method_DataManager_GetMaster_GrandGraphDetailMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMaster_ServantClassMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    sub_1C7BAE8(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
    sub_1C7BAE8(&StringLiteral_16165/*"_"*/);
    sub_1C7BAE8(&StringLiteral_18071/*"class"*/);
    byte_4CEFE12 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_ServantClassMaster___);
  v5 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
  if ( this->fields._IsGrandServant_k__BackingField )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_GrandGraphDetailMaster___);
    if ( !Master_object )
LABEL_18:
      sub_1C7BD40(Master_object, v4);
    Master_object = (Il2CppObject *)GrandGraphDetailMaster__GetGrandClassId(
                                      (GrandGraphDetailMaster_o *)Master_object,
                                      this->fields.classId,
                                      0);
    if ( (int)Master_object <= 0 )
      Master_object = (Il2CppObject *)(unsigned int)this->fields.classId;
    this->fields.classId = (int)Master_object;
  }
  if ( !v5 )
    goto LABEL_18;
  result = (System_String_o *)DataMasterBase_object__object__int___GetEntity(
                                v5,
                                this->fields.classId,
                                (const MethodInfo_342E2FC *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  if ( result )
  {
    v7 = (int)result;
    frameType = this->fields.frameType;
    IsGrandServant_k__BackingField = this->fields._IsGrandServant_k__BackingField;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AdjustFrameTypeForClass = AtlasManager__GetAdjustFrameTypeForClass(frameType, IsGrandServant_k__BackingField, 0);
    v10 = System_Int32__ToString((int32_t)&AdjustFrameTypeForClass, 0);
    v11 = System_Int32__ToString(v7 + 44, 0);
    return System_String__Concat_64217180(
             (System_String_o *)StringLiteral_18071/*"class"*/,
             v10,
             (System_String_o *)StringLiteral_16165/*"_"*/,
             v11,
             0);
  }
  return result;
}


System_String_o *UICharaGraphRender__GetCommandAssetName(int32_t commandCodeId, const MethodInfo *method)
{
  System_String_o *v2; // x0
  System_String_o *v3; // x19
  int32_t v5; // [xsp+Ch] [xbp-24h] BYREF

  v5 = commandCodeId;
  if ( (byte_4CEFE04 & 1) == 0 )
  {
    sub_1C7BAE8(&AssetManager_TypeInfo);
    sub_1C7BAE8(&StringLiteral_4595/*"CommandGraph/1000000"*/);
    sub_1C7BAE8(&StringLiteral_4594/*"CommandGraph/"*/);
    byte_4CEFE04 = 1;
  }
  v2 = System_Int32__ToString((int32_t)&v5, 0);
  v3 = System_String__Concat_64176912((System_String_o *)StringLiteral_4594/*"CommandGraph/"*/, v2, 0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( AssetManager__isExistAssetStorage(v3, 0) )
    return v3;
  else
    return (System_String_o *)StringLiteral_4595/*"CommandGraph/1000000"*/;
}


System_String_o *UICharaGraphRender__GetExCharaGraphAssetName(int32_t svtId, const MethodInfo *method)
{
  System_String_o *v2; // x0
  System_String_o *v3; // x19
  DataManager_o *Instance; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *p_baseSvtId; // x19
  System_String_o *v8; // x0
  ServantEntity_o *v10; // [xsp+0h] [xbp-30h] BYREF
  int32_t key; // [xsp+Ch] [xbp-24h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v12; // 0:x0.16

  key = svtId;
  if ( (byte_4CEFE05 & 1) == 0 )
  {
    sub_1C7BAE8(&AssetManager_TypeInfo);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C7BAE8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C7BAE8(&StringLiteral_4392/*"CharaGraph/CharaGraphEx/"*/);
    sub_1C7BAE8(&StringLiteral_4390/*"CharaGraph/100000"*/);
    sub_1C7BAE8(&StringLiteral_4389/*"CharaGraph/"*/);
    byte_4CEFE05 = 1;
  }
  v10 = 0;
  v2 = System_Int32__ToString((int32_t)&key, 0);
  v3 = System_String__Concat_64176912((System_String_o *)StringLiteral_4392/*"CharaGraph/CharaGraphEx/"*/, v2, 0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( AssetManager__isExistAssetStorage(v3, 0) )
    return v3;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_19;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          (Il2CppObject **)&v10,
          key,
          (const MethodInfo_342E348 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
    return (System_String_o *)StringLiteral_4390/*"CharaGraph/100000"*/;
  Instance = (DataManager_o *)v10;
  if ( !v10 )
    goto LABEL_19;
  Instance = (DataManager_o *)ServantEntity__get_IsServantMaterialTd(v10, 0);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    return (System_String_o *)StringLiteral_4390/*"CharaGraph/100000"*/;
  if ( !v10 )
LABEL_19:
    sub_1C7BD40(Instance, v5);
  p_baseSvtId = &v10->fields.baseSvtId;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v12.fields.currentCryptoKey = p_baseSvtId;
  *(_QWORD *)&v12.fields.fakeValue = 0;
  v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v12, v6);
  v3 = System_String__Concat_64176912((System_String_o *)StringLiteral_4389/*"CharaGraph/"*/, v8, 0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__isExistAssetStorage(v3, 0) )
    return (System_String_o *)StringLiteral_4390/*"CharaGraph/100000"*/;
  return v3;
}


UnityEngine_Texture2D_o *UICharaGraphRender__GetName2Texture(
        UICharaGraphRender_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  if ( this->fields.realNameCheck == 3 )
    return UICharaGraphRender__GetTrueNameTexture(this, data, method);
  else
    return 0;
}


int32_t UICharaGraphRender__GetNameTargetLimitCount(UICharaGraphRender_o *this, const MethodInfo *method)
{
  UICharaGraphRender_c *v3; // x0
  struct System_Int32_array *SERVANT_NAME_TARGET_LIMIT_COUNT; // x8
  int32_t imageLimitCount; // w9

  if ( (byte_4CEFE0D & 1) == 0 )
  {
    sub_1C7BAE8(&UICharaGraphRender_TypeInfo);
    byte_4CEFE0D = 1;
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
  if ( imageLimitCount >= SLODWORD(SERVANT_NAME_TARGET_LIMIT_COUNT->max_length) )
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
    sub_1C7BD40(v3, method);
  }
LABEL_10:
  if ( (unsigned int)imageLimitCount >= LODWORD(SERVANT_NAME_TARGET_LIMIT_COUNT->max_length) )
    sub_1C7BD48(v3);
  return SERVANT_NAME_TARGET_LIMIT_COUNT->m_Items[imageLimitCount];
}


UnityEngine_Texture2D_o *UICharaGraphRender__GetNameTexture(
        UICharaGraphRender_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  UICharaGraphRender_o *v4; // x20
  System_String_o *LastName; // x0
  System_String_o *v6; // x1
  System_String_o *v7; // x1

  v4 = this;
  if ( (byte_4CEFE0E & 1) == 0 )
  {
    sub_1C7BAE8(&Method_AssetData_GetObject_Texture2D____78791600);
    sub_1C7BAE8(&StringLiteral_17049/*"b"*/);
    this = (UICharaGraphRender_o *)sub_1C7BAE8(&StringLiteral_22354/*"name"*/);
    byte_4CEFE0E = 1;
  }
  if ( v4->fields.isEventJoinNameExist )
  {
    if ( data )
    {
      LastName = AssetData__get_LastName(data, 0);
      v6 = (System_String_o *)StringLiteral_22354/*"name"*/;
LABEL_6:
      v7 = System_String__Concat_64176912(LastName, v6, 0);
      return (UnityEngine_Texture2D_o *)AssetData__GetObject_object__51713432(
                                          data,
                                          v7,
                                          (const MethodInfo_3151598 *)Method_AssetData_GetObject_Texture2D____78791600);
    }
    goto LABEL_11;
  }
  if ( !v4->fields.isNameTrue )
  {
    if ( data )
    {
      LastName = AssetData__get_LastName(data, 0);
      v6 = (System_String_o *)StringLiteral_17049/*"b"*/;
      goto LABEL_6;
    }
LABEL_11:
    sub_1C7BD40(this, data);
  }
  return UICharaGraphRender__GetTrueNameTexture(v4, data, method);
}


UnityEngine_Rect_o UICharaGraphRender__GetNameUvRect(
        UICharaGraphRender_o *this,
        UnityEngine_Rect_o defaultValue,
        const MethodInfo *method)
{
  float m_Height; // s8
  float m_Width; // s9
  float m_YMin; // s11
  float m_XMin; // s10
  DataManager_o *Instance; // x0
  __int64 v9; // x1
  Il2CppObject *MasterData_object; // x0
  int32_t svtId; // w20
  ServantLimitMaster_o *v12; // x21
  const MethodInfo *v13; // x1
  int32_t SaintGraphNameIndex; // w0
  int v15; // w19
  UICharaGraphRender_c *v16; // x0
  struct UICharaGraphRender_StaticFields *static_fields; // x8
  float v18; // s0
  float v19; // s1
  float v20; // s2
  float v21; // s3
  ServantLimitEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF
  UnityEngine_Rect_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  m_Height = defaultValue.fields.m_Height;
  m_Width = defaultValue.fields.m_Width;
  m_YMin = defaultValue.fields.m_YMin;
  m_XMin = defaultValue.fields.m_XMin;
  if ( (byte_4CEFE10 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C7BAE8(&UICharaGraphRender_TypeInfo);
    byte_4CEFE10 = 1;
  }
  if ( !this->fields.baseKind )
  {
    entity = 0;
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_18;
    MasterData_object = DataManager__GetMasterData_object_(
                          Instance,
                          (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
    svtId = this->fields.svtId;
    v12 = (ServantLimitMaster_o *)MasterData_object;
    Instance = (DataManager_o *)UICharaGraphRender__GetNameTargetLimitCount(this, v13);
    if ( !v12 )
      goto LABEL_18;
    m_YMin = 0.0;
    if ( !ServantLimitMaster__TryGetEntity(v12, &entity, svtId, (int32_t)Instance, 0) )
      goto LABEL_17;
    Instance = (DataManager_o *)entity;
    if ( !entity )
      goto LABEL_18;
    if ( !ServantLimitEntity__IsNeedChangeSaintGraphName(entity, 0) )
      goto LABEL_17;
    Instance = (DataManager_o *)entity;
    if ( !entity )
LABEL_18:
      sub_1C7BD40(Instance, v9);
    SaintGraphNameIndex = ServantLimitEntity__GetSaintGraphNameIndex(entity, -1, 0);
    if ( (SaintGraphNameIndex & 0x80000000) == 0 )
    {
      v15 = SaintGraphNameIndex;
      v16 = UICharaGraphRender_TypeInfo;
      if ( !UICharaGraphRender_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UICharaGraphRender_TypeInfo);
        v16 = UICharaGraphRender_TypeInfo;
      }
      static_fields = v16->static_fields;
      if ( v15 < static_fields->MAX_SERVANT_NAME_UV_DIFF_COUNT )
      {
        if ( !v16->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v16);
          static_fields = UICharaGraphRender_TypeInfo->static_fields;
        }
        m_YMin = static_fields->SERVANT_NAME_UV_DIFF_Y * (float)v15;
      }
    }
  }
LABEL_17:
  v18 = m_XMin;
  v19 = m_YMin;
  v20 = m_Width;
  v21 = m_Height;
  result.fields.m_Height = v21;
  result.fields.m_Width = v20;
  result.fields.m_YMin = v19;
  result.fields.m_XMin = v18;
  return result;
}


System_String_o *UICharaGraphRender__GetRaritySprite(UICharaGraphRender_o *this, const MethodInfo *method)
{
  _BOOL4 IsGrandServant_k__BackingField; // w23
  int32_t v4; // w19
  System_String_o *v5; // x0
  int32_t v6; // w20
  System_String_o *v7; // x21
  System_String_o *v8; // x3
  System_String_o *v9; // x21
  Il2CppObject *Instance; // x0
  __int64 v11; // x1
  System_String_o *v13; // x0
  System_String_o *v14; // x1
  System_String_o *v15; // x19

  if ( (byte_4CEFE11 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
    sub_1C7BAE8(&StringLiteral_16643/*"_sp_"*/);
    sub_1C7BAE8(&StringLiteral_23182/*"rarity"*/);
    sub_1C7BAE8(&StringLiteral_16165/*"_"*/);
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    byte_4CEFE11 = 1;
  }
  IsGrandServant_k__BackingField = this->fields._IsGrandServant_k__BackingField;
  v4 = (_DWORD)this + 496;
  v5 = System_Int32__ToString((int)this + 496, 0);
  v6 = (_DWORD)this + 448;
  v7 = v5;
  v8 = System_Int32__ToString(v6, 0);
  if ( IsGrandServant_k__BackingField )
  {
    v9 = System_String__Concat_64217180(
           (System_String_o *)StringLiteral_23182/*"rarity"*/,
           v7,
           (System_String_o *)StringLiteral_16643/*"_sp_"*/,
           v8,
           0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
    if ( !Instance )
      sub_1C7BD40(0, v11);
    if ( AtlasManager__HasCharaGraphOptionAtlas((AtlasManager_o *)Instance, v9, 0) )
      return v9;
    v15 = System_Int32__ToString(v4, 0);
    v8 = System_Int32__ToString(v6, 0);
    v14 = v15;
    v13 = (System_String_o *)StringLiteral_23182/*"rarity"*/;
  }
  else
  {
    v13 = (System_String_o *)StringLiteral_23182/*"rarity"*/;
    v14 = v7;
  }
  return System_String__Concat_64217180(v13, v14, (System_String_o *)StringLiteral_16165/*"_"*/, v8, 0);
}


UnityEngine_Texture2D_o *UICharaGraphRender__GetTrueNameTexture(
        UICharaGraphRender_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  UICharaGraphRender_o *v4; // x20
  System_String_o *LastName; // x0
  System_String_o *v6; // x0
  Il2CppObject *Object_object__51713432; // x0
  UnityEngine_Object_o *v8; // x21
  Il2CppObject *MasterData_object; // x0
  int32_t svtId; // w21
  ServantLimitMaster_o *v11; // x22
  const MethodInfo *v12; // x1
  __int64 *v13; // x20
  System_String_o *v14; // x0
  System_String_o *v15; // x0
  ServantLimitEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  v4 = this;
  if ( (byte_4CEFE0F & 1) == 0 )
  {
    sub_1C7BAE8(&Method_AssetData_GetObject_Texture2D____78791600);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C7BAE8(&StringLiteral_16692/*"a"*/);
    sub_1C7BAE8(&StringLiteral_19879/*"g"*/);
    this = (UICharaGraphRender_o *)sub_1C7BAE8(&StringLiteral_22354/*"name"*/);
    byte_4CEFE0F = 1;
  }
  if ( !data )
    goto LABEL_17;
  LastName = AssetData__get_LastName(data, 0);
  v6 = System_String__Concat_64176912(LastName, (System_String_o *)StringLiteral_19879/*"g"*/, 0);
  Object_object__51713432 = AssetData__GetObject_object__51713432(
                              data,
                              v6,
                              (const MethodInfo_3151598 *)Method_AssetData_GetObject_Texture2D____78791600);
  if ( !v4->fields._IsGrandServant_k__BackingField )
    goto LABEL_8;
  v8 = (UnityEngine_Object_o *)Object_object__51713432;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Implicit(v8, 0) )
  {
LABEL_8:
    entity = 0;
    this = (UICharaGraphRender_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( this )
    {
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)this,
                            (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
      svtId = v4->fields.svtId;
      v11 = (ServantLimitMaster_o *)MasterData_object;
      this = (UICharaGraphRender_o *)UICharaGraphRender__GetNameTargetLimitCount(v4, v12);
      if ( v11 )
      {
        if ( !ServantLimitMaster__TryGetEntity(v11, &entity, svtId, (int32_t)this, 0) )
          goto LABEL_14;
        this = (UICharaGraphRender_o *)entity;
        if ( entity )
        {
          if ( ServantLimitEntity__IsNeedChangeSaintGraphName(entity, 0) )
          {
            v13 = &StringLiteral_22354/*"name"*/;
LABEL_15:
            v14 = AssetData__get_LastName(data, 0);
            v15 = System_String__Concat_64176912(v14, (System_String_o *)*v13, 0);
            return (UnityEngine_Texture2D_o *)AssetData__GetObject_object__51713432(
                                                data,
                                                v15,
                                                (const MethodInfo_3151598 *)Method_AssetData_GetObject_Texture2D____78791600);
          }
LABEL_14:
          v13 = &StringLiteral_16692/*"a"*/;
          goto LABEL_15;
        }
      }
    }
LABEL_17:
    sub_1C7BD40(this, data);
  }
  return (UnityEngine_Texture2D_o *)v8;
}


bool UICharaGraphRender__IsAtkBoost(UICharaGraphRender_o *this, const MethodInfo *method)
{
  return this->fields._AddedAtkByGrand_k__BackingField + this->fields.adjustAtk > 0;
}


bool UICharaGraphRender__IsHpBoost(UICharaGraphRender_o *this, const MethodInfo *method)
{
  return this->fields._AddedHpByGrand_k__BackingField + this->fields.adjustHp > 0;
}


// local variable allocation has failed, the output may be wrong!
void UICharaGraphRender__MoveAlpha(UICharaGraphRender_o *this, float duration, float alpha, const MethodInfo *method)
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
    ((void (__fastcall *)(UICharaGraphRender_o *, const MethodInfo *, long double, long double, long double, long double))this->klass->vtable._39_SetTweenColor.methodPtr)(
      this,
      this->klass->vtable._39_SetTweenColor.method,
      v6,
      v5,
      v4,
      *(long double *)&alpha);
  }
  else
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    v11.fields.r = *(float *)&v6;
    v11.fields.g = *(float *)&v5;
    v11.fields.b = *(float *)&v4;
    v11.fields.a = alpha;
    TweenRendererColor__Begin(gameObject, duration, v11, v10);
  }
}


// local variable allocation has failed, the output may be wrong!
void UICharaGraphRender__MoveAlpha_44439824(
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
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  UnityEngine_Color_o v31; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4

  v11 = *(long double *)&alpha;
  if ( (byte_4CEFE13 & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CEFE13 = 1;
  }
  *(float *)&v8 = this->fields.mColor.fields.r;
  *(float *)&v7 = this->fields.mColor.fields.g;
  *(float *)&v6 = this->fields.mColor.fields.b;
  if ( duration <= 0.0 )
  {
    ((void (__fastcall *)(UICharaGraphRender_o *, const MethodInfo *, System_String_o *, const MethodInfo *, long double, long double, long double, long double))this->klass->vtable._39_SetTweenColor.methodPtr)(
      this,
      this->klass->vtable._39_SetTweenColor.method,
      callbackFunc,
      method,
      v8,
      v7,
      v6,
      v11);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v17 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)callbackObject, 0, 0);
    if ( v17 )
    {
      if ( !callbackObject )
        goto LABEL_18;
      UnityEngine_GameObject__SendMessage_71851516(callbackObject, callbackFunc, 0);
    }
  }
  else
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    v31.fields.r = *(float *)&v8;
    v31.fields.g = *(float *)&v7;
    v31.fields.b = *(float *)&v6;
    v31.fields.a = *(float *)&v11;
    v16 = TweenRendererColor__Begin(gameObject, duration, v31, v15);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)callbackObject, 0, 0) )
    {
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v17 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v16, 0, 0);
      if ( v17 )
      {
        if ( v16 )
        {
          v16->fields.eventReceiver = callbackObject;
          sub_1C7BA8C(
            (GrandQuestFolderBoardItem_o *)&v16->fields.eventReceiver,
            (int32_t)callbackObject,
            v19,
            v20,
            v21,
            v22,
            v23,
            v24);
          v16->fields.callWhenFinished = callbackFunc;
          sub_1C7BA8C(
            (GrandQuestFolderBoardItem_o *)&v16->fields.callWhenFinished,
            (int32_t)callbackFunc,
            v25,
            v26,
            v27,
            v28,
            v29,
            v30);
          return;
        }
LABEL_18:
        sub_1C7BD40(v17, v18);
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void UICharaGraphRender__SetAlpha(UICharaGraphRender_o *this, float alpha, const MethodInfo *method)
{
  long double v3; // q3

  *(float *)&v3 = this->fields.mColor.fields.r;
  ((void (__fastcall *)(UICharaGraphRender_o *, const MethodInfo *, long double, float, float, long double))this->klass->vtable._39_SetTweenColor.methodPtr)(
    this,
    this->klass->vtable._39_SetTweenColor.method,
    v3,
    this->fields.mColor.fields.g,
    this->fields.mColor.fields.b,
    *(long double *)&alpha);
}


void UICharaGraphRender__SetAtk(
        UICharaGraphRender_o *this,
        int32_t atk,
        int32_t adjustAtk,
        int32_t addedAtkByGrand,
        const MethodInfo *method)
{
  if ( (this->fields.atk & 0x80000000) == 0 )
  {
    this->fields.atk = atk;
    this->fields.adjustAtk = adjustAtk;
    this->fields._AddedAtkByGrand_k__BackingField = addedAtkByGrand;
  }
}


void UICharaGraphRender__SetCharacter(
        UICharaGraphRender_o *this,
        int32_t svtId,
        int32_t limitCount,
        int32_t exceedCount,
        bool isOwn,
        int32_t lv,
        int32_t changeNameType,
        int32_t saintGraphType,
        bool isGrandServant,
        const MethodInfo *method)
{
  BalanceConfig_c *v18; // x0
  int32_t ServantLimitMax; // w8
  const MethodInfo *v20; // x4

  if ( (byte_4CEFE06 & 1) == 0 )
  {
    sub_1C7BAE8(&BalanceConfig_TypeInfo);
    sub_1C7BAE8(&ImageLimitCount_TypeInfo);
    byte_4CEFE06 = 1;
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
  this->fields.imageLimitCount = ImageLimitCount__GetCardImageLimitCount(svtId, limitCount, isOwn, 0, 0);
  this->fields.exceedCount = exceedCount;
  this->fields.lv = lv;
  UICharaGraphRender__SetCharacter_44434640(this, changeNameType, saintGraphType, isGrandServant, v20);
}


void UICharaGraphRender__SetCharacter_44434640(
        UICharaGraphRender_o *this,
        int32_t changeNameType,
        int32_t saintGraphType,
        bool isGrandServant,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v10; // x1
  Il2CppObject *v11; // x21
  ServantLimitEntity_o *v12; // x24
  struct ServantOverwriteStatus_o *OverwriteStatus_k__BackingField; // x9
  UICharaGraphRender_o *v14; // x8
  UICharaGraphRender_o *v15; // x10
  int32_t Rarity_k__BackingField; // w8
  int32_t *p_ActualRarity_k__BackingField; // x9
  int32_t v18; // w8
  ServantExceedEntity_o *v19; // x23
  int32_t FrameType; // w0
  int32_t rarity; // w24
  int32_t exceedCount; // w8
  int32_t classId; // w24
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  System_String_o *v30; // x0
  struct System_String_o *v31; // x1
  _BOOL4 IsGrandServant_k__BackingField; // w24
  __int64 v33; // x8
  __int64 v34; // x8
  int32_t v35; // w9
  int32_t RarityIcon; // w23
  int32_t v37; // w0
  int32_t v38; // w8
  int EventJoinNameExistSvtId; // w0
  int32_t v40; // w2
  int32_t v41; // w3
  System_String_o *v42; // x4
  int32_t v43; // w5
  int64_t v44; // x6
  System_String_o *v45; // x7
  int32_t v46; // w1
  Il2CppObject *MasterData_object; // x0
  int32_t svtId; // w23
  int32_t imageLimitCount; // w25
  ServantLimitMaster_o *v50; // x24
  int32_t v51; // w0
  int32_t v52; // w23
  struct System_String_o *v53; // x0
  int32_t v54; // w2
  int32_t v55; // w3
  System_String_o *v56; // x4
  int32_t v57; // w5
  int64_t v58; // x6
  System_String_o *v59; // x7
  unsigned int v60; // w8
  ServantLimitEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF
  int32_t FrameId; // [xsp+1Ch] [xbp-54h] BYREF

  if ( (byte_4CEFE08 & 1) == 0 )
  {
    sub_1C7BAE8(&AtlasManager_TypeInfo);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_ServantExceedMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_ServantLvDetailMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMaster_CommonReleaseMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMaster_ServantLvDetailMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    sub_1C7BAE8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C7BAE8(&ImageLimitCount_TypeInfo);
    sub_1C7BAE8(&Rarity_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C7BAE8(&UICharaGraphRender_TypeInfo);
    sub_1C7BAE8(&StringLiteral_19796/*"frame"*/);
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    byte_4CEFE08 = 1;
  }
  FrameId = 0;
  entity = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_75;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_75;
  v11 = DataMasterBase_object__object__int___GetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          this->fields.svtId,
          (const MethodInfo_342E2FC *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_75;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !Instance )
    goto LABEL_75;
  v12 = ServantLimitMaster__GetEntity((ServantLimitMaster_o *)Instance, this->fields.svtId, this->fields.limitCount, 0);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_75;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_ServantExceedMaster___);
  if ( !v11 )
    goto LABEL_75;
  *(int32x2_t *)&this->fields.svtType = vrev64_s32((int32x2_t)v11[5].klass);
  OverwriteStatus_k__BackingField = this->fields._OverwriteStatus_k__BackingField;
  v14 = OverwriteStatus_k__BackingField ? 0LL : this;
  v15 = OverwriteStatus_k__BackingField ? this : 0LL;
  if ( OverwriteStatus_k__BackingField )
  {
    if ( !v15 )
      goto LABEL_75;
    Rarity_k__BackingField = OverwriteStatus_k__BackingField->fields._Rarity_k__BackingField;
    p_ActualRarity_k__BackingField = &OverwriteStatus_k__BackingField->fields._ActualRarity_k__BackingField;
    v15->fields.rarity = Rarity_k__BackingField;
  }
  else
  {
    if ( !v12 || !v14 )
      goto LABEL_75;
    p_ActualRarity_k__BackingField = &v12->fields.rarity;
    v14->fields.rarity = v12->fields.rarity;
  }
  v18 = *p_ActualRarity_k__BackingField;
  this->fields._IsGrandServant_k__BackingField = isGrandServant;
  this->fields.actualRarity = v18;
  if ( !Instance )
    goto LABEL_75;
  Instance = (DataManager_o *)ServantExceedMaster__GetEntity(
                                (ServantExceedMaster_o *)Instance,
                                this->fields.actualRarity,
                                this->fields.exceedCount,
                                0);
  v19 = (ServantExceedEntity_o *)Instance;
  if ( Instance )
  {
    FrameType = ServantExceedEntity__GetFrameType(
                  (ServantExceedEntity_o *)Instance,
                  this->fields._IsGrandServant_k__BackingField,
                  0);
  }
  else
  {
    if ( !v12 )
      goto LABEL_75;
    rarity = v12->fields.rarity;
    if ( !Rarity_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
    FrameType = Rarity__getFrameTypeImage(rarity, 0, 0);
  }
  exceedCount = this->fields.exceedCount;
  this->fields.frameType = FrameType;
  if ( exceedCount >= 1 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_75;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_ServantLvDetailMaster___);
    if ( !Instance )
      goto LABEL_75;
    this->fields.frameType = ServantLvDetailMaster__GetFrameType(
                               (ServantLvDetailMaster_o *)Instance,
                               this->fields.actualRarity,
                               this->fields.lv,
                               this->fields.frameType,
                               this->fields._IsGrandServant_k__BackingField,
                               0);
  }
  classId = this->fields.classId;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  FrameId = AtlasManager__GetFrameId(classId, 0);
  if ( FrameId < 1 )
  {
    IsGrandServant_k__BackingField = this->fields._IsGrandServant_k__BackingField;
    Instance = (DataManager_o *)UICharaGraphRender_TypeInfo;
    if ( !UICharaGraphRender_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UICharaGraphRender_TypeInfo);
      Instance = (DataManager_o *)UICharaGraphRender_TypeInfo;
    }
    v33 = *(_QWORD *)&Instance[1].fields._DispLog;
    if ( IsGrandServant_k__BackingField )
    {
      v34 = *(_QWORD *)(v33 + 120);
      if ( !v34 )
        goto LABEL_75;
    }
    else
    {
      v34 = *(_QWORD *)(v33 + 112);
      if ( !v34 )
        goto LABEL_75;
    }
    v35 = this->fields.frameType;
    if ( (unsigned int)v35 >= *(_DWORD *)(v34 + 24) )
      sub_1C7BD48(Instance);
    v31 = *(struct System_String_o **)(v34 + 8LL * v35 + 32);
  }
  else
  {
    v30 = System_Int32__ToString((int32_t)&FrameId, 0);
    v31 = System_String__Concat_64176912((System_String_o *)StringLiteral_19796/*"frame"*/, v30, 0);
  }
  this->fields.frameName = v31;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.frameName, (int32_t)v31, v24, v25, v26, v27, v28, v29);
  if ( this->fields.exceedCount < 1 )
  {
    v37 = 0;
  }
  else
  {
    if ( v19 )
      RarityIcon = ServantExceedEntity__GetRarityIcon(v19, this->fields._IsGrandServant_k__BackingField, 0);
    else
      RarityIcon = 1;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_ServantLvDetailMaster___);
    if ( !Instance )
      goto LABEL_75;
    v37 = ServantLvDetailMaster__GetRarityIcon(
            (ServantLvDetailMaster_o *)Instance,
            this->fields.actualRarity,
            this->fields.lv,
            RarityIcon,
            this->fields._IsGrandServant_k__BackingField,
            0);
  }
  this->fields.exceedType = v37;
  if ( ServantEntity__get_IsCombineMaterial((ServantEntity_o *)v11, 0) )
    v38 = -1;
  else
    v38 = ServantEntity__get_IsServantMaterialTd((ServantEntity_o *)v11, 0) << 31 >> 31;
  this->fields.atk = v38;
  this->fields.hp = v38;
  *(_QWORD *)&this->fields._AddedAtkByGrand_k__BackingField = 0;
  *(_QWORD *)&this->fields.adjustAtk = 0;
  this->fields.realNameCheck = changeNameType;
  this->fields.saintGraphType = saintGraphType;
  this->fields.isEventJoinNameExist = 0;
  EventJoinNameExistSvtId = ServantEntity__GetEventJoinNameExistSvtId((ServantEntity_o *)v11, 0);
  if ( EventJoinNameExistSvtId >= 1 )
  {
    this->fields.imageSvtId = EventJoinNameExistSvtId;
    this->fields.isEventJoinNameExist = 1;
  }
  this->fields.isChangeGraph = 0;
  v46 = StringLiteral_1/*""*/;
  this->fields.changeGraphSuffix = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.changeGraphSuffix, v46, v40, v41, v42, v43, v44, v45);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_75;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  svtId = this->fields.svtId;
  imageLimitCount = this->fields.imageLimitCount;
  v50 = (ServantLimitMaster_o *)MasterData_object;
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  Instance = (DataManager_o *)ImageLimitCount__GetLimitCountByImageLimit(imageLimitCount, 0);
  if ( !v50 )
    goto LABEL_75;
  if ( !ServantLimitMaster__TryGetEntity(v50, &entity, svtId, (int32_t)Instance, 0) )
    goto LABEL_71;
  Instance = (DataManager_o *)entity;
  if ( !entity )
    goto LABEL_75;
  v51 = ServantLimitEntity__GetChangeGraphCommonReleaseId(entity, -1, 0);
  if ( v51 < 0 )
    goto LABEL_71;
  v52 = v51;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  if ( !Instance )
    goto LABEL_75;
  if ( !CommonReleaseMaster__IsOpen((CommonReleaseMaster_o *)Instance, v52, 0, 0, 0) )
    goto LABEL_71;
  this->fields.isChangeGraph = 1;
  Instance = (DataManager_o *)entity;
  if ( !entity )
LABEL_75:
    sub_1C7BD40(Instance, v10);
  v53 = ServantLimitEntity__GetChangeGraphSuffix(entity, (System_String_o *)StringLiteral_1/*""*/, 0);
  this->fields.changeGraphSuffix = v53;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.changeGraphSuffix,
    (int32_t)v53,
    v54,
    v55,
    v56,
    v57,
    v58,
    v59);
LABEL_71:
  if ( (unsigned int)(changeNameType - 1) >= 3 )
    LOBYTE(v60) = ServantEntity__IsNameTrue((ServantEntity_o *)v11, 0);
  else
    v60 = 0x100u >> (8 * (changeNameType - 1));
  this->fields.isNameTrue = v60;
}


// local variable allocation has failed, the output may be wrong!
void UICharaGraphRender__SetCharacter_44436100(
        UICharaGraphRender_o *this,
        int32_t svtId,
        int32_t limitCount,
        int32_t imageLimitCount,
        int32_t exceedCount,
        int32_t lv,
        int32_t changeNameType,
        int32_t saintGraphType,
        System_Int32_array *idxs,
        bool isGrandServant,
        const MethodInfo *method)
{
  int32_t ServantLimitMax; // w24
  BalanceConfig_c *v19; // x0
  UICharaGraphRender_c *v20; // x0
  Il2CppObject *Instance; // x0
  __int64 v22; // x1
  BalanceConfig_c *v23; // x0
  int32_t v24; // w8
  const MethodInfo *v25; // x4
  int32_t imageLimitCounta; // [xsp+Ch] [xbp-54h] BYREF

  ServantLimitMax = limitCount;
  imageLimitCounta = imageLimitCount;
  if ( (byte_4CEFE07 & 1) == 0 )
  {
    sub_1C7BAE8(&BalanceConfig_TypeInfo);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C7BAE8(&UICharaGraphRender_TypeInfo);
    byte_4CEFE07 = 1;
  }
  this->fields.imageSvtId = svtId;
  this->fields.svtId = svtId;
  if ( imageLimitCount >= 11 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___)) == 0 )
    {
      sub_1C7BD40(Instance, v22);
    }
    ServantLimitAddMaster__getCostumeId(
      (ServantLimitAddMaster_o *)Instance,
      &this->fields.imageSvtId,
      &imageLimitCounta,
      0);
  }
  else
  {
    v19 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v19 = BalanceConfig_TypeInfo;
    }
    if ( v19->static_fields->OtherImageLimitCount == imageLimitCount )
    {
      v20 = UICharaGraphRender_TypeInfo;
      if ( !UICharaGraphRender_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UICharaGraphRender_TypeInfo);
        v20 = UICharaGraphRender_TypeInfo;
      }
      imageLimitCounta = v20->static_fields->OTHER_IMAGE_LIMIT_COUNT;
    }
  }
  v23 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v23 = BalanceConfig_TypeInfo;
  }
  if ( v23->static_fields->ServantLimitMax < ServantLimitMax )
  {
    ServantLimitMax = v23->static_fields->ServantLimitMax;
    if ( !v23->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v23);
      ServantLimitMax = BalanceConfig_TypeInfo->static_fields->ServantLimitMax;
    }
  }
  this->fields.limitCount = ServantLimitMax;
  v24 = imageLimitCounta;
  this->fields.exceedCount = exceedCount;
  this->fields.lv = lv;
  this->fields.imageLimitCount = v24;
  this->fields.imagePartsGroupIdxs = idxs;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.imagePartsGroupIdxs,
    (int32_t)idxs,
    limitCount,
    imageLimitCount,
    *(System_String_o **)&exceedCount,
    lv,
    *(int64_t *)&changeNameType,
    *(System_String_o **)&saintGraphType);
  UICharaGraphRender__SetCharacter_44434640(this, changeNameType, saintGraphType, isGrandServant, v25);
}


void UICharaGraphRender__SetCommand(UICharaGraphRender_o *this, int32_t commandCodeId, const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  int32_t rarity; // w8
  __int64 v14; // x9
  struct System_String_o *v15; // x1

  if ( (byte_4CEFE09 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMasterData_CommandCodeMaster___);
    sub_1C7BAE8(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C7BAE8(&UICharaGraphRender_TypeInfo);
    byte_4CEFE09 = 1;
  }
  this->fields.commandCodeId = commandCodeId;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_CommandCodeMaster___);
  if ( !Instance )
    goto LABEL_11;
  Instance = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               this->fields.commandCodeId,
               (const MethodInfo_342E2FC *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
  *(_QWORD *)&this->fields.svtType = 0;
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
  v14 = *(_QWORD *)(*((_QWORD *)Instance + 23) + 128LL);
  if ( !v14 )
LABEL_11:
    sub_1C7BD40(Instance, v6);
  if ( (unsigned int)rarity >= *(_DWORD *)(v14 + 24) )
    sub_1C7BD48(Instance);
  v15 = *(struct System_String_o **)(v14 + 8LL * rarity + 32);
  this->fields.frameName = v15;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.frameName, (int32_t)v15, v7, v8, v9, v10, v11, v12);
  *(_QWORD *)&this->fields.atk = -1;
  this->fields.realNameCheck = 0;
  *(_QWORD *)&this->fields._AddedAtkByGrand_k__BackingField = 0;
  *(_QWORD *)&this->fields.adjustAtk = 0;
  this->fields.isNameTrue = 1;
}


void UICharaGraphRender__SetHp(
        UICharaGraphRender_o *this,
        int32_t hp,
        int32_t adjustHp,
        int32_t addedHpByGrand,
        const MethodInfo *method)
{
  if ( (this->fields.hp & 0x80000000) == 0 )
  {
    this->fields.hp = hp;
    this->fields.adjustHp = adjustHp;
    this->fields._AddedHpByGrand_k__BackingField = addedHpByGrand;
  }
}


void UICharaGraphRender__SetLayer(UICharaGraphRender_o *this, int32_t layer, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1
  UnityEngine_Transform_o *transform; // x1
  const MethodInfo *v8; // x3

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C7BD40(0, v6);
  if ( UnityEngine_GameObject__get_layer(gameObject, 0) != layer )
  {
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    UICharaGraphRender__SetLayer_44440352(this, transform, layer, v8);
  }
}


void UICharaGraphRender__SetLayer_44440352(
        UICharaGraphRender_o *this,
        UnityEngine_Transform_o *tf,
        int32_t layer,
        const MethodInfo *method)
{
  UICharaGraphRender_o *v6; // x21
  __int64 v7; // x1
  System_Collections_IEnumerator_o *Enumerator; // x19
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v10; // x9
  int32_t *p_offset; // x10
  __int64 v12; // x0
  System_Collections_IEnumerator_c *v13; // x8
  __int64 v14; // x9
  System_Collections_IEnumerator_c **v15; // x10
  __int64 v16; // x0
  UnityEngine_Transform_o *v17; // x0
  const MethodInfo *v18; // x3
  __int64 naturalAligment; // x10
  __int64 v20; // x0
  __int64 v21; // x8
  __int64 v22; // x19
  __int64 v23; // x9
  int *v24; // x10
  __int64 v25; // x0

  v6 = this;
  if ( (byte_4CEFE14 & 1) == 0 )
  {
    sub_1C7BAE8(&System_IDisposable_TypeInfo);
    sub_1C7BAE8(&System_Collections_IEnumerator_TypeInfo);
    this = (UICharaGraphRender_o *)sub_1C7BAE8(&UnityEngine_Transform_TypeInfo);
    byte_4CEFE14 = 1;
  }
  if ( !tf
    || (this = (UICharaGraphRender_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)tf, 0)) == 0 )
  {
LABEL_33:
    sub_1C7BD40(this, tf);
  }
  UnityEngine_GameObject__set_layer((UnityEngine_GameObject_o *)this, layer, 0);
  Enumerator = UnityEngine_Transform__GetEnumerator(tf, 0);
  if ( !Enumerator )
    sub_1C7BD40(0, v7);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v10 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v10;
        p_offset += 4;
        if ( !v10 )
          goto LABEL_10;
      }
      v12 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_10:
      v12 = sub_1C51E70(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v12)(Enumerator, *(_QWORD *)(v12 + 8))
        & 1) == 0 )
      break;
    v13 = Enumerator->klass;
    v14 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v15 = (System_Collections_IEnumerator_c **)&v13->_1.interfaceOffsets->offset;
      while ( *(v15 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v14;
        v15 += 2;
        if ( !v14 )
          goto LABEL_17;
      }
      v16 = (__int64)&v13->vtable[*(_DWORD *)v15 + 1];
    }
    else
    {
LABEL_17:
      v16 = sub_1C51E70(Enumerator, System_Collections_IEnumerator_TypeInfo, 1);
    }
    v17 = (UnityEngine_Transform_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v16)(
                                       Enumerator,
                                       *(_QWORD *)(v16 + 8));
    if ( v17 )
    {
      naturalAligment = UnityEngine_Transform_TypeInfo->_2.naturalAligment;
      if ( v17->klass->_2.naturalAligment < (unsigned int)naturalAligment
        || (UnityEngine_Transform_c *)v17->klass->_2.typeHierarchy[naturalAligment - 1] != UnityEngine_Transform_TypeInfo )
      {
        sub_1C7C0DC(v17);
        goto LABEL_33;
      }
    }
    UICharaGraphRender__SetLayer_44440352(v6, v17, layer, v18);
  }
  v20 = sub_1C7BC24(Enumerator, System_IDisposable_TypeInfo);
  if ( v20 )
  {
    v21 = *(_QWORD *)v20;
    v22 = v20;
    v23 = *(unsigned __int16 *)(*(_QWORD *)v20 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v20 + 302LL) )
    {
      v24 = (int *)(*(_QWORD *)(v21 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v24 - 1) != System_IDisposable_TypeInfo )
      {
        --v23;
        v24 += 4;
        if ( !v23 )
          goto LABEL_28;
      }
      v25 = v21 + 16LL * *v24 + 312;
    }
    else
    {
LABEL_28:
      v25 = sub_1C51E70(v20, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v25)(v22, *(_QWORD *)(v25 + 8));
  }
}


int32_t UICharaGraphRender__get_AddedAtkByGrand(UICharaGraphRender_o *this, const MethodInfo *method)
{
  return this->fields._AddedAtkByGrand_k__BackingField;
}


int32_t UICharaGraphRender__get_AddedHpByGrand(UICharaGraphRender_o *this, const MethodInfo *method)
{
  return this->fields._AddedHpByGrand_k__BackingField;
}


bool UICharaGraphRender__get_IsGrandServant(UICharaGraphRender_o *this, const MethodInfo *method)
{
  return this->fields._IsGrandServant_k__BackingField;
}


ServantOverwriteStatus_o *UICharaGraphRender__get_OverwriteStatus(UICharaGraphRender_o *this, const MethodInfo *method)
{
  return this->fields._OverwriteStatus_k__BackingField;
}


void UICharaGraphRender__set_AddedAtkByGrand(UICharaGraphRender_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._AddedAtkByGrand_k__BackingField = value;
}


void UICharaGraphRender__set_AddedHpByGrand(UICharaGraphRender_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._AddedHpByGrand_k__BackingField = value;
}


void UICharaGraphRender__set_IsGrandServant(UICharaGraphRender_o *this, bool value, const MethodInfo *method)
{
  this->fields._IsGrandServant_k__BackingField = value;
}


void UICharaGraphRender__set_OverwriteStatus(
        UICharaGraphRender_o *this,
        ServantOverwriteStatus_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._OverwriteStatus_k__BackingField = value;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields._OverwriteStatus_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}