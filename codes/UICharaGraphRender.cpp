void __fastcall UICharaGraphRender___cctor(const MethodInfo *method)
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
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  UICharaGraphRender_c *v37; // x8
  System_Array_o *v38; // x0
  int64_t v39; // x19
  struct UICharaGraphRender_StaticFields *v40; // x0
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  int64_t v53; // x19
  int64_t v54; // x1
  int64_t v55; // x2
  int32_t v56; // w3
  System_String_o *v57; // x4
  BattleSetupInfo_o *v58; // x5
  FollowerInfo_o *v59; // x6
  PartyListViewItem_o *v60; // x7
  int64_t v61; // x1
  int64_t v62; // x2
  int32_t v63; // w3
  System_String_o *v64; // x4
  BattleSetupInfo_o *v65; // x5
  FollowerInfo_o *v66; // x6
  PartyListViewItem_o *v67; // x7
  int64_t v68; // x1
  int64_t v69; // x2
  int32_t v70; // w3
  System_String_o *v71; // x4
  BattleSetupInfo_o *v72; // x5
  FollowerInfo_o *v73; // x6
  PartyListViewItem_o *v74; // x7
  int64_t v75; // x1
  int64_t v76; // x2
  int32_t v77; // w3
  System_String_o *v78; // x4
  BattleSetupInfo_o *v79; // x5
  FollowerInfo_o *v80; // x6
  PartyListViewItem_o *v81; // x7
  void *v82; // x1
  int64_t v83; // x2
  int32_t v84; // w3
  System_String_o *v85; // x4
  BattleSetupInfo_o *v86; // x5
  FollowerInfo_o *v87; // x6
  PartyListViewItem_o *v88; // x7
  void *v89; // x1
  struct UICharaGraphRender_StaticFields *v90; // x0
  int64_t v91; // x2
  int32_t v92; // w3
  System_String_o *v93; // x4
  BattleSetupInfo_o *v94; // x5
  FollowerInfo_o *v95; // x6
  PartyListViewItem_o *v96; // x7
  int64_t v97; // x2
  int32_t v98; // w3
  System_String_o *v99; // x4
  BattleSetupInfo_o *v100; // x5
  FollowerInfo_o *v101; // x6
  PartyListViewItem_o *v102; // x7
  int64_t v103; // x19
  int64_t v104; // x1
  int64_t v105; // x2
  int32_t v106; // w3
  System_String_o *v107; // x4
  BattleSetupInfo_o *v108; // x5
  FollowerInfo_o *v109; // x6
  PartyListViewItem_o *v110; // x7
  int64_t v111; // x1
  int64_t v112; // x2
  int32_t v113; // w3
  System_String_o *v114; // x4
  BattleSetupInfo_o *v115; // x5
  FollowerInfo_o *v116; // x6
  PartyListViewItem_o *v117; // x7
  int64_t v118; // x1
  int64_t v119; // x2
  int32_t v120; // w3
  System_String_o *v121; // x4
  BattleSetupInfo_o *v122; // x5
  FollowerInfo_o *v123; // x6
  PartyListViewItem_o *v124; // x7
  int64_t v125; // x1
  int64_t v126; // x2
  int32_t v127; // w3
  System_String_o *v128; // x4
  BattleSetupInfo_o *v129; // x5
  FollowerInfo_o *v130; // x6
  PartyListViewItem_o *v131; // x7
  int64_t v132; // x1
  int64_t v133; // x2
  int32_t v134; // w3
  System_String_o *v135; // x4
  BattleSetupInfo_o *v136; // x5
  FollowerInfo_o *v137; // x6
  PartyListViewItem_o *v138; // x7
  int64_t v139; // x1
  int64_t v140; // x2
  int32_t v141; // w3
  System_String_o *v142; // x4
  BattleSetupInfo_o *v143; // x5
  FollowerInfo_o *v144; // x6
  PartyListViewItem_o *v145; // x7
  int64_t v146; // x1
  int64_t v147; // x2
  int32_t v148; // w3
  System_String_o *v149; // x4
  BattleSetupInfo_o *v150; // x5
  FollowerInfo_o *v151; // x6
  PartyListViewItem_o *v152; // x7
  int64_t v153; // x1
  struct UICharaGraphRender_StaticFields *v154; // x0
  int64_t v155; // x2
  int32_t v156; // w3
  System_String_o *v157; // x4
  BattleSetupInfo_o *v158; // x5
  FollowerInfo_o *v159; // x6
  PartyListViewItem_o *v160; // x7
  System_Collections_Generic_Dictionary_int__object__o *v161; // x19
  int64_t v162; // x2
  int32_t v163; // w3
  System_String_o *v164; // x4
  BattleSetupInfo_o *v165; // x5
  FollowerInfo_o *v166; // x6
  PartyListViewItem_o *v167; // x7
  __int64 v168; // x20
  int64_t v169; // x1
  int64_t v170; // x2
  int32_t v171; // w3
  System_String_o *v172; // x4
  BattleSetupInfo_o *v173; // x5
  FollowerInfo_o *v174; // x6
  PartyListViewItem_o *v175; // x7
  int64_t v176; // x1
  int64_t v177; // x2
  int32_t v178; // w3
  System_String_o *v179; // x4
  BattleSetupInfo_o *v180; // x5
  FollowerInfo_o *v181; // x6
  PartyListViewItem_o *v182; // x7
  int64_t v183; // x1
  int64_t v184; // x2
  int32_t v185; // w3
  System_String_o *v186; // x4
  BattleSetupInfo_o *v187; // x5
  FollowerInfo_o *v188; // x6
  PartyListViewItem_o *v189; // x7
  int64_t v190; // x1
  int64_t v191; // x2
  int32_t v192; // w3
  System_String_o *v193; // x4
  BattleSetupInfo_o *v194; // x5
  FollowerInfo_o *v195; // x6
  PartyListViewItem_o *v196; // x7
  __int64 v197; // x20
  int64_t v198; // x1
  int64_t v199; // x2
  int32_t v200; // w3
  System_String_o *v201; // x4
  BattleSetupInfo_o *v202; // x5
  FollowerInfo_o *v203; // x6
  PartyListViewItem_o *v204; // x7
  int64_t v205; // x1
  int64_t v206; // x2
  int32_t v207; // w3
  System_String_o *v208; // x4
  BattleSetupInfo_o *v209; // x5
  FollowerInfo_o *v210; // x6
  PartyListViewItem_o *v211; // x7
  int64_t v212; // x1
  int64_t v213; // x2
  int32_t v214; // w3
  System_String_o *v215; // x4
  BattleSetupInfo_o *v216; // x5
  FollowerInfo_o *v217; // x6
  PartyListViewItem_o *v218; // x7
  int64_t v219; // x1
  int64_t v220; // x2
  int32_t v221; // w3
  System_String_o *v222; // x4
  BattleSetupInfo_o *v223; // x5
  FollowerInfo_o *v224; // x6
  PartyListViewItem_o *v225; // x7
  __int64 v226; // x20
  int64_t v227; // x1
  int64_t v228; // x2
  int32_t v229; // w3
  System_String_o *v230; // x4
  BattleSetupInfo_o *v231; // x5
  FollowerInfo_o *v232; // x6
  PartyListViewItem_o *v233; // x7
  int64_t v234; // x1
  int64_t v235; // x2
  int32_t v236; // w3
  System_String_o *v237; // x4
  BattleSetupInfo_o *v238; // x5
  FollowerInfo_o *v239; // x6
  PartyListViewItem_o *v240; // x7
  int64_t v241; // x1
  int64_t v242; // x2
  int32_t v243; // w3
  System_String_o *v244; // x4
  BattleSetupInfo_o *v245; // x5
  FollowerInfo_o *v246; // x6
  PartyListViewItem_o *v247; // x7
  int64_t v248; // x1
  int64_t v249; // x2
  int32_t v250; // w3
  System_String_o *v251; // x4
  BattleSetupInfo_o *v252; // x5
  FollowerInfo_o *v253; // x6
  PartyListViewItem_o *v254; // x7
  __int64 v255; // x20
  int64_t v256; // x1
  int64_t v257; // x2
  int32_t v258; // w3
  System_String_o *v259; // x4
  BattleSetupInfo_o *v260; // x5
  FollowerInfo_o *v261; // x6
  PartyListViewItem_o *v262; // x7
  int64_t v263; // x1
  int64_t v264; // x2
  int32_t v265; // w3
  System_String_o *v266; // x4
  BattleSetupInfo_o *v267; // x5
  FollowerInfo_o *v268; // x6
  PartyListViewItem_o *v269; // x7
  int64_t v270; // x1
  int64_t v271; // x2
  int32_t v272; // w3
  System_String_o *v273; // x4
  BattleSetupInfo_o *v274; // x5
  FollowerInfo_o *v275; // x6
  PartyListViewItem_o *v276; // x7
  int64_t v277; // x1
  struct UICharaGraphRender_StaticFields *v278; // x0
  int64_t v279; // x2
  int32_t v280; // w3
  System_String_o *v281; // x4
  BattleSetupInfo_o *v282; // x5
  FollowerInfo_o *v283; // x6
  PartyListViewItem_o *v284; // x7
  int64_t v285; // x2
  int32_t v286; // w3
  System_String_o *v287; // x4
  BattleSetupInfo_o *v288; // x5
  FollowerInfo_o *v289; // x6
  PartyListViewItem_o *v290; // x7
  int64_t v291; // x19
  int64_t v292; // x1
  int64_t v293; // x2
  int32_t v294; // w3
  System_String_o *v295; // x4
  BattleSetupInfo_o *v296; // x5
  FollowerInfo_o *v297; // x6
  PartyListViewItem_o *v298; // x7
  int64_t v299; // x1
  int64_t v300; // x2
  int32_t v301; // w3
  System_String_o *v302; // x4
  BattleSetupInfo_o *v303; // x5
  FollowerInfo_o *v304; // x6
  PartyListViewItem_o *v305; // x7
  int64_t v306; // x1
  int64_t v307; // x2
  int32_t v308; // w3
  System_String_o *v309; // x4
  BattleSetupInfo_o *v310; // x5
  FollowerInfo_o *v311; // x6
  PartyListViewItem_o *v312; // x7
  int64_t v313; // x1
  int64_t v314; // x2
  int32_t v315; // w3
  System_String_o *v316; // x4
  BattleSetupInfo_o *v317; // x5
  FollowerInfo_o *v318; // x6
  PartyListViewItem_o *v319; // x7
  int64_t v320; // x1
  int64_t v321; // x2
  int32_t v322; // w3
  System_String_o *v323; // x4
  BattleSetupInfo_o *v324; // x5
  FollowerInfo_o *v325; // x6
  PartyListViewItem_o *v326; // x7
  int64_t v327; // x1
  struct UICharaGraphRender_StaticFields *v328; // x0
  int64_t v329; // x2
  int32_t v330; // w3
  System_String_o *v331; // x4
  BattleSetupInfo_o *v332; // x5
  FollowerInfo_o *v333; // x6
  PartyListViewItem_o *v334; // x7
  System_RuntimeFieldHandle_o v335; // 0:w1.4

  if ( (byte_4BDDABA & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Array_AsReadOnly_Rect___);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__string____Add__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__string_____ctor__);
    sub_1C21E38(&System_Collections_Generic_Dictionary_int__string____TypeInfo);
    sub_1C21E38(&int___TypeInfo);
    sub_1C21E38(&UnityEngine_Rect___TypeInfo);
    sub_1C21E38(&string___TypeInfo);
    sub_1C21E38(&Field__PrivateImplementationDetails__F239810D17032E35383496434C64894FFE055A198BA7CFB907D73BAF26A70F0C);
    sub_1C21E38(&UICharaGraphRender_TypeInfo);
    sub_1C21E38(&StringLiteral_19948/*"frame5"*/);
    sub_1C21E38(&StringLiteral_16901/*"a"*/);
    sub_1C21E38(&StringLiteral_19949/*"frame6"*/);
    sub_1C21E38(&StringLiteral_19950/*"frame7"*/);
    sub_1C21E38(&StringLiteral_19946/*"frame37"*/);
    sub_1C21E38(&StringLiteral_17283/*"b"*/);
    sub_1C21E38(&StringLiteral_17983/*"c"*/);
    sub_1C21E38(&StringLiteral_19943/*"frame20"*/);
    sub_1C21E38(&StringLiteral_19945/*"frame36"*/);
    sub_1C21E38(&StringLiteral_19944/*"frame3"*/);
    sub_1C21E38(&StringLiteral_19940/*"frame1"*/);
    sub_1C21E38(&StringLiteral_19939/*"frame0"*/);
    sub_1C21E38(&StringLiteral_19941/*"frame17"*/);
    sub_1C21E38(&StringLiteral_19942/*"frame2"*/);
    sub_1C21E38(&StringLiteral_19947/*"frame4"*/);
    byte_4BDDABA = 1;
  }
  static_fields = UICharaGraphRender_TypeInfo->static_fields;
  *(_OWORD *)&static_fields->OTHER_IMAGE_LIMIT_COUNT = xmmword_BFE2B0;
  *(_QWORD *)&static_fields->SERVANT_BODY_SIZE_Y = 0x1FE000002D2LL;
  *(_OWORD *)&static_fields->SERVANT_BODY_U = xmmword_BFEF60;
  static_fields->SERVANT_EQUIP_BODY_SIZE_Y = 872;
  *(_OWORD *)&static_fields->SERVANT_EQUIP_BODY_U = xmmword_BFF170;
  v2 = sub_1C21EE0(UnityEngine_Rect___TypeInfo, 12LL);
  if ( !v2 )
    goto LABEL_62;
  v4 = *(_DWORD *)(v2 + 24);
  if ( !v4 )
    goto LABEL_61;
  v5 = UICharaGraphRender_TypeInfo->static_fields;
  v6 = *(_QWORD *)&v5->SERVANT_BODY_W;
  *(float32x2_t *)(v2 + 32) = vadd_f32(*(float32x2_t *)&v5->SERVANT_BODY_U, 0LL);
  *(_QWORD *)(v2 + 40) = v6;
  if ( v4 == 1 )
    goto LABEL_61;
  v7 = UICharaGraphRender_TypeInfo->static_fields;
  v8 = *(_QWORD *)&v7->SERVANT_BODY_W;
  *(float32x2_t *)(v2 + 48) = vadd_f32(*(float32x2_t *)&v7->SERVANT_BODY_U, (float32x2_t)1056964608LL);
  *(_QWORD *)(v2 + 56) = v8;
  if ( v4 <= 2 )
    goto LABEL_61;
  v9 = UICharaGraphRender_TypeInfo->static_fields;
  v10 = *(_QWORD *)&v9->SERVANT_BODY_W;
  *(float32x2_t *)(v2 + 64) = vadd_f32(*(float32x2_t *)&v9->SERVANT_BODY_U, 0LL);
  *(_QWORD *)(v2 + 72) = v10;
  if ( v4 == 3 )
    goto LABEL_61;
  v11 = UICharaGraphRender_TypeInfo->static_fields;
  v12 = *(_QWORD *)&v11->SERVANT_BODY_W;
  *(float32x2_t *)(v2 + 80) = vadd_f32(*(float32x2_t *)&v11->SERVANT_BODY_U, (float32x2_t)1056964608LL);
  *(_QWORD *)(v2 + 88) = v12;
  if ( v4 <= 4 )
    goto LABEL_61;
  v13 = UICharaGraphRender_TypeInfo->static_fields;
  v14 = *(_QWORD *)&v13->SERVANT_BODY_W;
  *(float32x2_t *)(v2 + 96) = vadd_f32(*(float32x2_t *)&v13->SERVANT_BODY_U, 0LL);
  *(_QWORD *)(v2 + 104) = v14;
  if ( v4 == 5 )
    goto LABEL_61;
  v15 = UICharaGraphRender_TypeInfo->static_fields;
  v16 = *(_QWORD *)&v15->SERVANT_BODY_W;
  *(float32x2_t *)(v2 + 112) = vadd_f32(*(float32x2_t *)&v15->SERVANT_BODY_U, (float32x2_t)1056964608LL);
  *(_QWORD *)(v2 + 120) = v16;
  if ( v4 <= 6 )
    goto LABEL_61;
  v17 = UICharaGraphRender_TypeInfo->static_fields;
  v18 = *(_QWORD *)&v17->SERVANT_BODY_W;
  *(float32x2_t *)(v2 + 128) = vadd_f32(*(float32x2_t *)&v17->SERVANT_BODY_U, 0LL);
  *(_QWORD *)(v2 + 136) = v18;
  if ( v4 == 7 )
    goto LABEL_61;
  v19 = UICharaGraphRender_TypeInfo->static_fields;
  v20 = *(_QWORD *)&v19->SERVANT_BODY_W;
  *(float32x2_t *)(v2 + 144) = vadd_f32(*(float32x2_t *)&v19->SERVANT_BODY_U, (float32x2_t)1056964608LL);
  *(_QWORD *)(v2 + 152) = v20;
  if ( v4 <= 8 )
    goto LABEL_61;
  v21 = UICharaGraphRender_TypeInfo->static_fields;
  v22 = *(_QWORD *)&v21->SERVANT_BODY_W;
  *(float32x2_t *)(v2 + 160) = vadd_f32(*(float32x2_t *)&v21->SERVANT_BODY_U, 0LL);
  *(_QWORD *)(v2 + 168) = v22;
  if ( v4 == 9 )
    goto LABEL_61;
  v23 = UICharaGraphRender_TypeInfo->static_fields;
  v24 = *(_QWORD *)&v23->SERVANT_BODY_W;
  *(float32x2_t *)(v2 + 176) = vadd_f32(*(float32x2_t *)&v23->SERVANT_BODY_U, (float32x2_t)1056964608LL);
  *(_QWORD *)(v2 + 184) = v24;
  if ( v4 <= 0xA )
    goto LABEL_61;
  v25 = UICharaGraphRender_TypeInfo->static_fields;
  v26 = *(_QWORD *)&v25->SERVANT_BODY_W;
  *(float32x2_t *)(v2 + 192) = vadd_f32(*(float32x2_t *)&v25->SERVANT_BODY_U, 0LL);
  *(_QWORD *)(v2 + 200) = v26;
  if ( v4 == 11 )
    goto LABEL_61;
  v27 = UICharaGraphRender_TypeInfo->static_fields;
  v28 = *(_QWORD *)&v27->SERVANT_BODY_W;
  *(float32x2_t *)(v2 + 208) = vadd_f32(*(float32x2_t *)&v27->SERVANT_BODY_U, (float32x2_t)1056964608LL);
  *(_QWORD *)(v2 + 216) = v28;
  Only_Rect = System_Array__AsReadOnly_Rect_(
                (UnityEngine_Rect_array *)v2,
                (const MethodInfo_307A29C *)Method_System_Array_AsReadOnly_Rect___);
  v30 = UICharaGraphRender_TypeInfo->static_fields;
  v30->servantBodyRectTable = (struct System_Collections_ObjectModel_ReadOnlyCollection_Rect__o *)Only_Rect;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&v30->servantBodyRectTable,
    (int64_t)Only_Rect,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
  v37 = UICharaGraphRender_TypeInfo;
  UICharaGraphRender_TypeInfo->static_fields->servantEquipBodyRect = *(struct UnityEngine_Rect_o *)&UICharaGraphRender_TypeInfo->static_fields->SERVANT_EQUIP_BODY_U;
  *(_QWORD *)&v37->static_fields->SERVANT_NAME_UV_DIFF_Y = 0x43E800000LL;
  v38 = (System_Array_o *)sub_1C21EE0(int___TypeInfo, 4LL);
  v335.fields.value = Field__PrivateImplementationDetails__F239810D17032E35383496434C64894FFE055A198BA7CFB907D73BAF26A70F0C;
  v39 = (int64_t)v38;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_63022812(v38, v335, 0LL);
  v40 = UICharaGraphRender_TypeInfo->static_fields;
  v40->SERVANT_NAME_TARGET_LIMIT_COUNT = (struct System_Int32_array *)v39;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v40->SERVANT_NAME_TARGET_LIMIT_COUNT, v39, v41, v42, v43, v44, v45, v46);
  v2 = sub_1C21EE0(string___TypeInfo, 6LL);
  if ( !v2 )
    goto LABEL_62;
  v53 = v2;
  if ( !*(_DWORD *)(v2 + 24) )
    goto LABEL_61;
  v54 = StringLiteral_16901/*"a"*/;
  *(_QWORD *)(v2 + 32) = StringLiteral_16901/*"a"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v2 + 32), v54, v47, v48, v49, v50, v51, v52);
  if ( *(_DWORD *)(v53 + 24) <= 1u )
    goto LABEL_61;
  v61 = StringLiteral_16901/*"a"*/;
  *(_QWORD *)(v53 + 40) = StringLiteral_16901/*"a"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v53 + 40), v61, v55, v56, v57, v58, v59, v60);
  if ( *(_DWORD *)(v53 + 24) <= 2u )
    goto LABEL_61;
  v68 = StringLiteral_17283/*"b"*/;
  *(_QWORD *)(v53 + 48) = StringLiteral_17283/*"b"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v53 + 48), v68, v62, v63, v64, v65, v66, v67);
  if ( *(_DWORD *)(v53 + 24) <= 3u )
    goto LABEL_61;
  v75 = StringLiteral_17283/*"b"*/;
  *(_QWORD *)(v53 + 56) = StringLiteral_17283/*"b"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v53 + 56), v75, v69, v70, v71, v72, v73, v74);
  if ( *(_DWORD *)(v53 + 24) <= 4u )
    goto LABEL_61;
  v82 = StringLiteral_17983/*"c"*/;
  *(_QWORD *)(v53 + 64) = StringLiteral_17983/*"c"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v53 + 64), (int64_t)v82, v76, v77, v78, v79, v80, v81);
  if ( *(_DWORD *)(v53 + 24) <= 5u )
    goto LABEL_61;
  v89 = StringLiteral_17983/*"c"*/;
  *(_QWORD *)(v53 + 72) = StringLiteral_17983/*"c"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v53 + 72), (int64_t)v89, v83, v84, v85, v86, v87, v88);
  v90 = UICharaGraphRender_TypeInfo->static_fields;
  v90->bodyTextureNameTable = (struct System_String_array *)v53;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v90->bodyTextureNameTable, v53, v91, v92, v93, v94, v95, v96);
  v2 = sub_1C21EE0(string___TypeInfo, 8LL);
  if ( !v2 )
    goto LABEL_62;
  v103 = v2;
  if ( !*(_DWORD *)(v2 + 24) )
    goto LABEL_61;
  v104 = StringLiteral_19939/*"frame0"*/;
  *(_QWORD *)(v2 + 32) = StringLiteral_19939/*"frame0"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v2 + 32), v104, v97, v98, v99, v100, v101, v102);
  if ( *(_DWORD *)(v103 + 24) <= 1u )
    goto LABEL_61;
  v111 = StringLiteral_19940/*"frame1"*/;
  *(_QWORD *)(v103 + 40) = StringLiteral_19940/*"frame1"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v103 + 40), v111, v105, v106, v107, v108, v109, v110);
  if ( *(_DWORD *)(v103 + 24) <= 2u )
    goto LABEL_61;
  v118 = StringLiteral_19942/*"frame2"*/;
  *(_QWORD *)(v103 + 48) = StringLiteral_19942/*"frame2"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v103 + 48), v118, v112, v113, v114, v115, v116, v117);
  if ( *(_DWORD *)(v103 + 24) <= 3u )
    goto LABEL_61;
  v125 = StringLiteral_19944/*"frame3"*/;
  *(_QWORD *)(v103 + 56) = StringLiteral_19944/*"frame3"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v103 + 56), v125, v119, v120, v121, v122, v123, v124);
  if ( *(_DWORD *)(v103 + 24) <= 4u )
    goto LABEL_61;
  v132 = StringLiteral_19947/*"frame4"*/;
  *(_QWORD *)(v103 + 64) = StringLiteral_19947/*"frame4"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v103 + 64), v132, v126, v127, v128, v129, v130, v131);
  if ( *(_DWORD *)(v103 + 24) <= 5u )
    goto LABEL_61;
  v139 = StringLiteral_19948/*"frame5"*/;
  *(_QWORD *)(v103 + 72) = StringLiteral_19948/*"frame5"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v103 + 72), v139, v133, v134, v135, v136, v137, v138);
  if ( *(_DWORD *)(v103 + 24) <= 6u )
    goto LABEL_61;
  v146 = StringLiteral_19949/*"frame6"*/;
  *(_QWORD *)(v103 + 80) = StringLiteral_19949/*"frame6"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v103 + 80), v146, v140, v141, v142, v143, v144, v145);
  if ( *(_DWORD *)(v103 + 24) <= 7u )
    goto LABEL_61;
  v153 = StringLiteral_19950/*"frame7"*/;
  *(_QWORD *)(v103 + 88) = StringLiteral_19950/*"frame7"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v103 + 88), v153, v147, v148, v149, v150, v151, v152);
  v154 = UICharaGraphRender_TypeInfo->static_fields;
  v154->baseFrameList = (struct System_String_array *)v103;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v154->baseFrameList, v103, v155, v156, v157, v158, v159, v160);
  v161 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C22084(System_Collections_Generic_Dictionary_int__string____TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v161,
    (const MethodInfo_32B5078 *)Method_System_Collections_Generic_Dictionary_int__string_____ctor__);
  v2 = sub_1C21EE0(string___TypeInfo, 4LL);
  if ( !v2 )
    goto LABEL_62;
  v168 = v2;
  if ( !*(_DWORD *)(v2 + 24) )
    goto LABEL_61;
  v169 = StringLiteral_19941/*"frame17"*/;
  *(_QWORD *)(v2 + 32) = StringLiteral_19941/*"frame17"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v2 + 32), v169, v162, v163, v164, v165, v166, v167);
  if ( *(_DWORD *)(v168 + 24) <= 1u )
    goto LABEL_61;
  v176 = StringLiteral_19941/*"frame17"*/;
  *(_QWORD *)(v168 + 40) = StringLiteral_19941/*"frame17"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v168 + 40), v176, v170, v171, v172, v173, v174, v175);
  if ( *(_DWORD *)(v168 + 24) <= 2u )
    goto LABEL_61;
  v183 = StringLiteral_19941/*"frame17"*/;
  *(_QWORD *)(v168 + 48) = StringLiteral_19941/*"frame17"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v168 + 48), v183, v177, v178, v179, v180, v181, v182);
  if ( *(_DWORD *)(v168 + 24) <= 3u )
    goto LABEL_61;
  v190 = StringLiteral_19941/*"frame17"*/;
  *(_QWORD *)(v168 + 56) = StringLiteral_19941/*"frame17"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v168 + 56), v190, v184, v185, v186, v187, v188, v189);
  if ( !v161
    || (System_Collections_Generic_Dictionary_int__object___Add(
          v161,
          17,
          (Il2CppObject *)v168,
          (const MethodInfo_32B5A4C *)Method_System_Collections_Generic_Dictionary_int__string____Add__),
        (v2 = sub_1C21EE0(string___TypeInfo, 4LL)) == 0) )
  {
LABEL_62:
    sub_1C22094(v2, v3);
  }
  v197 = v2;
  if ( !*(_DWORD *)(v2 + 24) )
    goto LABEL_61;
  v198 = StringLiteral_19943/*"frame20"*/;
  *(_QWORD *)(v2 + 32) = StringLiteral_19943/*"frame20"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v2 + 32), v198, v191, v192, v193, v194, v195, v196);
  if ( *(_DWORD *)(v197 + 24) <= 1u )
    goto LABEL_61;
  v205 = StringLiteral_19943/*"frame20"*/;
  *(_QWORD *)(v197 + 40) = StringLiteral_19943/*"frame20"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v197 + 40), v205, v199, v200, v201, v202, v203, v204);
  if ( *(_DWORD *)(v197 + 24) <= 2u )
    goto LABEL_61;
  v212 = StringLiteral_19943/*"frame20"*/;
  *(_QWORD *)(v197 + 48) = StringLiteral_19943/*"frame20"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v197 + 48), v212, v206, v207, v208, v209, v210, v211);
  if ( *(_DWORD *)(v197 + 24) <= 3u )
    goto LABEL_61;
  v219 = StringLiteral_19943/*"frame20"*/;
  *(_QWORD *)(v197 + 56) = StringLiteral_19943/*"frame20"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v197 + 56), v219, v213, v214, v215, v216, v217, v218);
  System_Collections_Generic_Dictionary_int__object___Add(
    v161,
    20,
    (Il2CppObject *)v197,
    (const MethodInfo_32B5A4C *)Method_System_Collections_Generic_Dictionary_int__string____Add__);
  v2 = sub_1C21EE0(string___TypeInfo, 4LL);
  if ( !v2 )
    goto LABEL_62;
  v226 = v2;
  if ( !*(_DWORD *)(v2 + 24) )
    goto LABEL_61;
  v227 = StringLiteral_19945/*"frame36"*/;
  *(_QWORD *)(v2 + 32) = StringLiteral_19945/*"frame36"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v2 + 32), v227, v220, v221, v222, v223, v224, v225);
  if ( *(_DWORD *)(v226 + 24) <= 1u )
    goto LABEL_61;
  v234 = StringLiteral_19945/*"frame36"*/;
  *(_QWORD *)(v226 + 40) = StringLiteral_19945/*"frame36"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v226 + 40), v234, v228, v229, v230, v231, v232, v233);
  if ( *(_DWORD *)(v226 + 24) <= 2u )
    goto LABEL_61;
  v241 = StringLiteral_19945/*"frame36"*/;
  *(_QWORD *)(v226 + 48) = StringLiteral_19945/*"frame36"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v226 + 48), v241, v235, v236, v237, v238, v239, v240);
  if ( *(_DWORD *)(v226 + 24) <= 3u )
    goto LABEL_61;
  v248 = StringLiteral_19945/*"frame36"*/;
  *(_QWORD *)(v226 + 56) = StringLiteral_19945/*"frame36"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v226 + 56), v248, v242, v243, v244, v245, v246, v247);
  System_Collections_Generic_Dictionary_int__object___Add(
    v161,
    36,
    (Il2CppObject *)v226,
    (const MethodInfo_32B5A4C *)Method_System_Collections_Generic_Dictionary_int__string____Add__);
  v2 = sub_1C21EE0(string___TypeInfo, 4LL);
  if ( !v2 )
    goto LABEL_62;
  v255 = v2;
  if ( !*(_DWORD *)(v2 + 24) )
    goto LABEL_61;
  v256 = StringLiteral_19946/*"frame37"*/;
  *(_QWORD *)(v2 + 32) = StringLiteral_19946/*"frame37"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v2 + 32), v256, v249, v250, v251, v252, v253, v254);
  if ( *(_DWORD *)(v255 + 24) <= 1u
    || (v263 = StringLiteral_19946/*"frame37"*/,
        *(_QWORD *)(v255 + 40) = StringLiteral_19946/*"frame37"*/,
        sub_1C21DDC((PartyOrganizationUtility_o *)(v255 + 40), v263, v257, v258, v259, v260, v261, v262),
        *(_DWORD *)(v255 + 24) <= 2u)
    || (v270 = StringLiteral_19946/*"frame37"*/,
        *(_QWORD *)(v255 + 48) = StringLiteral_19946/*"frame37"*/,
        sub_1C21DDC((PartyOrganizationUtility_o *)(v255 + 48), v270, v264, v265, v266, v267, v268, v269),
        *(_DWORD *)(v255 + 24) <= 3u) )
  {
LABEL_61:
    sub_1C2209C(v2, v3);
  }
  v277 = StringLiteral_19946/*"frame37"*/;
  *(_QWORD *)(v255 + 56) = StringLiteral_19946/*"frame37"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v255 + 56), v277, v271, v272, v273, v274, v275, v276);
  System_Collections_Generic_Dictionary_int__object___Add(
    v161,
    37,
    (Il2CppObject *)v255,
    (const MethodInfo_32B5A4C *)Method_System_Collections_Generic_Dictionary_int__string____Add__);
  v278 = UICharaGraphRender_TypeInfo->static_fields;
  v278->baseFrameTable = (struct System_Collections_Generic_Dictionary_int__string____o *)v161;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v278->baseFrameTable, (int64_t)v161, v279, v280, v281, v282, v283, v284);
  v2 = sub_1C21EE0(string___TypeInfo, 6LL);
  if ( !v2 )
    goto LABEL_62;
  v291 = v2;
  if ( !*(_DWORD *)(v2 + 24) )
    goto LABEL_61;
  v292 = StringLiteral_19939/*"frame0"*/;
  *(_QWORD *)(v2 + 32) = StringLiteral_19939/*"frame0"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v2 + 32), v292, v285, v286, v287, v288, v289, v290);
  if ( *(_DWORD *)(v291 + 24) <= 1u )
    goto LABEL_61;
  v299 = StringLiteral_19940/*"frame1"*/;
  *(_QWORD *)(v291 + 40) = StringLiteral_19940/*"frame1"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v291 + 40), v299, v293, v294, v295, v296, v297, v298);
  if ( *(_DWORD *)(v291 + 24) <= 2u )
    goto LABEL_61;
  v306 = StringLiteral_19940/*"frame1"*/;
  *(_QWORD *)(v291 + 48) = StringLiteral_19940/*"frame1"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v291 + 48), v306, v300, v301, v302, v303, v304, v305);
  if ( *(_DWORD *)(v291 + 24) <= 3u )
    goto LABEL_61;
  v313 = StringLiteral_19942/*"frame2"*/;
  *(_QWORD *)(v291 + 56) = StringLiteral_19942/*"frame2"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v291 + 56), v313, v307, v308, v309, v310, v311, v312);
  if ( *(_DWORD *)(v291 + 24) <= 4u )
    goto LABEL_61;
  v320 = StringLiteral_19944/*"frame3"*/;
  *(_QWORD *)(v291 + 64) = StringLiteral_19944/*"frame3"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v291 + 64), v320, v314, v315, v316, v317, v318, v319);
  if ( *(_DWORD *)(v291 + 24) <= 5u )
    goto LABEL_61;
  v327 = StringLiteral_19944/*"frame3"*/;
  *(_QWORD *)(v291 + 72) = StringLiteral_19944/*"frame3"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v291 + 72), v327, v321, v322, v323, v324, v325, v326);
  v328 = UICharaGraphRender_TypeInfo->static_fields;
  v328->commandCodeBaseFrameList = (struct System_String_array *)v291;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v328->commandCodeBaseFrameList, v291, v329, v330, v331, v332, v333, v334);
}


void __fastcall UICharaGraphRender___ctor(UICharaGraphRender_o *this, const MethodInfo *method)
{
  UITweenRenderer___ctor((UITweenRenderer_o *)this, 0LL);
}


System_String_o *__fastcall UICharaGraphRender__GetAssetName(
        int32_t svtId,
        int32_t imageLimitCount,
        const MethodInfo *method)
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
  if ( (byte_4BDDAA7 & 1) == 0 )
  {
    sub_1C21E38(&AssetManager_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_ImagePartsGroupMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_UserImagePartsGroupMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_1C21E38(&Method_DataMasterBase_UserImagePartsGroupMaster__UserImagePartsGroupEntity__int__TryGetEntity__);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&StringLiteral_21648/*"maleImageId"*/);
    sub_1C21E38(&StringLiteral_4524/*"CharaGraph/100000"*/);
    sub_1C21E38(&StringLiteral_20593/*"imagePartsGroupId"*/);
    sub_1C21E38(&StringLiteral_4523/*"CharaGraph/"*/);
    byte_4BDDAA7 = 1;
  }
  entity = 0LL;
  defaultName = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  v17 = 0;
  if ( imageLimitCount >= 11 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_46;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    if ( !Instance )
      goto LABEL_46;
    ServantLimitAddMaster__getCostumeId((ServantLimitAddMaster_o *)Instance, &svtIda, &imageLimitCounta, 0LL);
  }
  v6 = System_Int32__ToString((int32_t)&svtIda, 0LL);
  defaultName = System_String__Concat_63115476((System_String_o *)StringLiteral_4523/*"CharaGraph/"*/, v6, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !Instance )
    goto LABEL_46;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
         &entity,
         svtIda,
         (const MethodInfo_325BE14 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
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
                                    (System_String_o *)StringLiteral_21648/*"maleImageId"*/,
                                    0,
                                    0LL);
      v17 = (int)Instance;
      if ( (_DWORD)Instance )
      {
        v7 = System_Int32__ToString((int32_t)&v17, 0LL);
        Instance = (DataManager_o *)System_String__Concat_63115476((System_String_o *)StringLiteral_4523/*"CharaGraph/"*/, v7, 0LL);
        defaultName = (System_String_o *)Instance;
      }
    }
    if ( !entity )
      goto LABEL_46;
    IntValue = EntityScriptUtil__GetIntValue(
                 (System_Collections_Generic_Dictionary_string__object__o *)entity[12].klass,
                 (System_String_o *)StringLiteral_20593/*"imagePartsGroupId"*/,
                 0,
                 0LL);
    if ( IntValue )
    {
      v9 = IntValue;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_UserImagePartsGroupMaster___);
      if ( !Instance )
        goto LABEL_46;
      if ( DataMasterBase_object__object__int___TryGetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             &v18,
             v9,
             (const MethodInfo_325BE14 *)Method_DataMasterBase_UserImagePartsGroupMaster__UserImagePartsGroupEntity__int__TryGetEntity__) )
      {
        Instance = (DataManager_o *)v18;
        if ( !v18 )
          goto LABEL_46;
        UserImagePartsGroupEntity__ConcatImageValues((UserImagePartsGroupEntity_o *)v18, &defaultName, 0LL);
      }
      else if ( v9 >= 1 )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_ImagePartsGroupMaster___);
        if ( !Instance )
          goto LABEL_46;
        ImagePartsGroupMaster__ConcatDefaultImageValues((ImagePartsGroupMaster_o *)Instance, v9, &defaultName, 0LL);
      }
    }
  }
  v10 = defaultName;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( AssetManager__isExistAssetStorage(v10, 0LL) )
    goto LABEL_32;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_46;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_46;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          &v19,
          svtIda,
          (const MethodInfo_325BE14 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
    goto LABEL_44;
  Instance = (DataManager_o *)v19;
  if ( !v19 )
    goto LABEL_46;
  Instance = (DataManager_o *)ServantEntity__get_IsServantMaterialTd((ServantEntity_o *)v19, 0LL);
  if ( ((unsigned __int8)Instance & 1) == 0 )
  {
LABEL_44:
    p_defaultName = (System_String_o **)&StringLiteral_4524/*"CharaGraph/100000"*/;
    return *p_defaultName;
  }
  if ( !v19 )
LABEL_46:
    sub_1C22094(Instance, v5);
  v13 = v19 + 2;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v24.fields.currentCryptoKey = v13;
  *(_QWORD *)&v24.fields.fakeValue = 0LL;
  v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v24, v12);
  defaultName = System_String__Concat_63115476((System_String_o *)StringLiteral_4523/*"CharaGraph/"*/, v14, 0LL);
  v15 = defaultName;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__isExistAssetStorage(v15, 0LL) )
    goto LABEL_44;
LABEL_32:
  p_defaultName = &defaultName;
  return *p_defaultName;
}


System_String_o *__fastcall UICharaGraphRender__GetAssetName_42095520(
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
  if ( (byte_4BDDAA8 & 1) == 0 )
  {
    sub_1C21E38(&AssetManager_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_ImagePartsGroupMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_UserImagePartsGroupMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_1C21E38(&Method_DataMasterBase_UserImagePartsGroupMaster__UserImagePartsGroupEntity__int__TryGetEntity__);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&StringLiteral_21648/*"maleImageId"*/);
    sub_1C21E38(&StringLiteral_4524/*"CharaGraph/100000"*/);
    sub_1C21E38(&StringLiteral_20593/*"imagePartsGroupId"*/);
    sub_1C21E38(&StringLiteral_4523/*"CharaGraph/"*/);
    byte_4BDDAA8 = 1;
  }
  entity = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  v22 = 0;
  v4 = System_Int32__ToString((int32_t)&key, 0LL);
  defaultName = System_String__Concat_63115476((System_String_o *)StringLiteral_4523/*"CharaGraph/"*/, v4, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !Master_object )
    goto LABEL_44;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          Master_object,
          &entity,
          key,
          (const MethodInfo_325BE14 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
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
                                                                    (System_String_o *)StringLiteral_21648/*"maleImageId"*/,
                                                                    0,
                                                                    0LL);
    v22 = (int)Master_object;
    if ( (_DWORD)Master_object )
    {
      v7 = System_Int32__ToString((int32_t)&v22, 0LL);
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_String__Concat_63115476(
                                                                      (System_String_o *)StringLiteral_4523/*"CharaGraph/"*/,
                                                                      v7,
                                                                      0LL);
      defaultName = (System_String_o *)Master_object;
    }
  }
  if ( !entity )
    goto LABEL_44;
  IntValue = EntityScriptUtil__GetIntValue(
               (System_Collections_Generic_Dictionary_string__object__o *)entity[12].klass,
               (System_String_o *)StringLiteral_20593/*"imagePartsGroupId"*/,
               0,
               0LL);
  if ( !IntValue )
    goto LABEL_27;
  v9 = IntValue;
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)imagePartsGroupIdxs, 0LL);
  if ( DataManager_TypeInfo->_2.cctor_finished )
  {
    if ( IsNullOrEmpty )
      goto LABEL_16;
LABEL_21:
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_ImagePartsGroupMaster___);
    if ( !Master_object )
      goto LABEL_44;
    ImagePartsGroupMaster__ConcatImageValues(
      (ImagePartsGroupMaster_o *)Master_object,
      v9,
      imagePartsGroupIdxs,
      &defaultName,
      0LL);
    goto LABEL_27;
  }
  j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  if ( !IsNullOrEmpty )
    goto LABEL_21;
LABEL_16:
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_UserImagePartsGroupMaster___);
  if ( !Master_object )
    goto LABEL_44;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         Master_object,
         (Il2CppObject **)&v18,
         v9,
         (const MethodInfo_325BE14 *)Method_DataMasterBase_UserImagePartsGroupMaster__UserImagePartsGroupEntity__int__TryGetEntity__) )
  {
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)v18;
    if ( !v18 )
      goto LABEL_44;
    UserImagePartsGroupEntity__ConcatImageValues(v18, &defaultName, 0LL);
  }
  else
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_ImagePartsGroupMaster___);
    if ( !Master_object )
      goto LABEL_44;
    ImagePartsGroupMaster__ConcatDefaultImageValues((ImagePartsGroupMaster_o *)Master_object, v9, &defaultName, 0LL);
  }
LABEL_27:
  v11 = defaultName;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( AssetManager__isExistAssetStorage(v11, 0LL) )
    goto LABEL_30;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Master_object )
    goto LABEL_44;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMasterData_object_(
                                                                  (DataManager_o *)Master_object,
                                                                  (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Master_object )
    goto LABEL_44;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          Master_object,
          &v19,
          key,
          (const MethodInfo_325BE14 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
    goto LABEL_42;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)v19;
  if ( !v19 )
    goto LABEL_44;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)ServantEntity__get_IsServantMaterialTd(
                                                                  (ServantEntity_o *)v19,
                                                                  0LL);
  if ( ((unsigned __int8)Master_object & 1) == 0 )
  {
LABEL_42:
    p_defaultName = (System_String_o **)&StringLiteral_4524/*"CharaGraph/100000"*/;
    return *p_defaultName;
  }
  if ( !v19 )
LABEL_44:
    sub_1C22094(Master_object, v6);
  v14 = v19 + 2;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v24.fields.currentCryptoKey = v14;
  *(_QWORD *)&v24.fields.fakeValue = 0LL;
  v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v24, v13);
  defaultName = System_String__Concat_63115476((System_String_o *)StringLiteral_4523/*"CharaGraph/"*/, v15, 0LL);
  v16 = defaultName;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__isExistAssetStorage(v16, 0LL) )
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

  if ( (byte_4BDDAAF & 1) == 0 )
  {
    sub_1C21E38(&UICharaGraphRender_TypeInfo);
    byte_4BDDAAF = 1;
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
  System_String_o *LastName; // x0
  System_String_o *v6; // x1
  System_String_o **p_changeGraphSuffix; // x8
  _DWORD *monitor; // x8
  __int64 imageLimitCount; // x9
  System_String_o *v10; // x21
  System_String_o *v11; // x0
  System_String_o *v12; // x0
  Il2CppObject *Object_object__49880776; // x22
  UnityEngine_Texture2D_o *result; // x0
  System_String_o *v15; // x1

  v4 = this;
  if ( (byte_4BDDAB1 & 1) == 0 )
  {
    sub_1C21E38(&Method_AssetData_GetObject_Texture2D____77626312);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&UICharaGraphRender_TypeInfo);
    this = (UICharaGraphRender_o *)sub_1C21E38(&StringLiteral_16901/*"a"*/);
    byte_4BDDAB1 = 1;
  }
  if ( v4->fields.baseKind )
  {
    v4->fields.textureImageLimitCount = 0;
    if ( data )
    {
      LastName = AssetData__get_LastName(data, 0LL);
      v6 = (System_String_o *)StringLiteral_16901/*"a"*/;
      goto LABEL_19;
    }
LABEL_20:
    sub_1C22094(this, data);
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
      sub_1C2209C(this, data);
    p_changeGraphSuffix = (System_String_o **)&monitor[2 * imageLimitCount + 8];
    if ( !data )
      goto LABEL_20;
  }
  v10 = *p_changeGraphSuffix;
  v11 = AssetData__get_LastName(data, 0LL);
  v12 = System_String__Concat_63115476(v11, v10, 0LL);
  Object_object__49880776 = AssetData__GetObject_object__49880776(
                              data,
                              v12,
                              (const MethodInfo_2F91EC8 *)Method_AssetData_GetObject_Texture2D____77626312);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Object_object__49880776, 0LL, 0LL) )
  {
    result = (UnityEngine_Texture2D_o *)Object_object__49880776;
    v4->fields.textureImageLimitCount = v4->fields.imageLimitCount;
    return result;
  }
  v4->fields.textureImageLimitCount = 0;
  LastName = AssetData__get_LastName(data, 0LL);
  v6 = v10;
LABEL_19:
  v15 = System_String__Concat_63115476(LastName, v6, 0LL);
  return (UnityEngine_Texture2D_o *)AssetData__GetObject_object__49880776(
                                      data,
                                      v15,
                                      (const MethodInfo_2F91EC8 *)Method_AssetData_GetObject_Texture2D____77626312);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Rect_o __fastcall UICharaGraphRender__GetBodyUvRect(UICharaGraphRender_o *this, const MethodInfo *method)
{
  UICharaGraphRender_c *v3; // x0
  int32_t baseKind; // w21
  struct UICharaGraphRender_StaticFields *static_fields; // x8
  float m_XMin; // s0
  float m_YMin; // s1
  float m_Width; // s2
  float m_Height; // s3
  System_Collections_ObjectModel_ReadOnlyCollection_Rect__o *servantBodyRectTable; // x0
  UnityEngine_Rect_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4BDDAB0 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_ObjectModel_ReadOnlyCollection_Rect__get_Item__);
    sub_1C21E38(&UICharaGraphRender_TypeInfo);
    byte_4BDDAB0 = 1;
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
      sub_1C22094(0LL, method);
    *(UnityEngine_Rect_o *)&m_XMin = System_Collections_ObjectModel_ReadOnlyCollection_Rect___get_Item(
                                       servantBodyRectTable,
                                       this->fields.textureImageLimitCount,
                                       (const MethodInfo_383F438 *)Method_System_Collections_ObjectModel_ReadOnlyCollection_Rect__get_Item__);
  }
  result.fields.m_Height = m_Height;
  result.fields.m_Width = m_Width;
  result.fields.m_YMin = m_YMin;
  result.fields.m_XMin = m_XMin;
  return result;
}


System_String_o *__fastcall UICharaGraphRender__GetClassSprite(UICharaGraphRender_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  System_String_o *result; // x0
  int v6; // w20
  int32_t frameType; // w19
  System_String_o *v8; // x19
  System_String_o *v9; // x0
  int32_t AdjustFrameTypeForClass; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4BDDAB7 & 1) == 0 )
  {
    sub_1C21E38(&AtlasManager_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMasterData_ServantClassMaster___);
    sub_1C21E38(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&StringLiteral_16399/*"_"*/);
    sub_1C21E38(&StringLiteral_18287/*"class"*/);
    byte_4BDDAB7 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ServantClassMaster___)) == 0LL )
  {
    sub_1C22094(Instance, v4);
  }
  result = (System_String_o *)DataMasterBase_object__object__int___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                this->fields.classId,
                                (const MethodInfo_325BDC8 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  if ( result )
  {
    v6 = (int)result;
    frameType = this->fields.frameType;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AdjustFrameTypeForClass = AtlasManager__GetAdjustFrameTypeForClass(frameType, 0LL);
    v8 = System_Int32__ToString((int32_t)&AdjustFrameTypeForClass, 0LL);
    v9 = System_Int32__ToString(v6 + 44, 0LL);
    return System_String__Concat_63128740(
             (System_String_o *)StringLiteral_18287/*"class"*/,
             v8,
             (System_String_o *)StringLiteral_16399/*"_"*/,
             v9,
             0LL);
  }
  return result;
}


System_String_o *__fastcall UICharaGraphRender__GetCommandAssetName(int32_t commandCodeId, const MethodInfo *method)
{
  System_String_o *v2; // x0
  System_String_o *v3; // x19
  int32_t v5; // [xsp+Ch] [xbp-24h] BYREF

  v5 = commandCodeId;
  if ( (byte_4BDDAA9 & 1) == 0 )
  {
    sub_1C21E38(&AssetManager_TypeInfo);
    sub_1C21E38(&StringLiteral_4714/*"CommandGraph/1000000"*/);
    sub_1C21E38(&StringLiteral_4713/*"CommandGraph/"*/);
    byte_4BDDAA9 = 1;
  }
  v2 = System_Int32__ToString((int32_t)&v5, 0LL);
  v3 = System_String__Concat_63115476((System_String_o *)StringLiteral_4713/*"CommandGraph/"*/, v2, 0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( AssetManager__isExistAssetStorage(v3, 0LL) )
    return v3;
  else
    return (System_String_o *)StringLiteral_4714/*"CommandGraph/1000000"*/;
}


System_String_o *__fastcall UICharaGraphRender__GetExCharaGraphAssetName(int32_t svtId, const MethodInfo *method)
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
  if ( (byte_4BDDAAA & 1) == 0 )
  {
    sub_1C21E38(&AssetManager_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C21E38(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&StringLiteral_4526/*"CharaGraph/CharaGraphEx/"*/);
    sub_1C21E38(&StringLiteral_4524/*"CharaGraph/100000"*/);
    sub_1C21E38(&StringLiteral_4523/*"CharaGraph/"*/);
    byte_4BDDAAA = 1;
  }
  v10 = 0LL;
  v2 = System_Int32__ToString((int32_t)&key, 0LL);
  v3 = System_String__Concat_63115476((System_String_o *)StringLiteral_4526/*"CharaGraph/CharaGraphEx/"*/, v2, 0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( AssetManager__isExistAssetStorage(v3, 0LL) )
    return v3;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_19;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          (Il2CppObject **)&v10,
          key,
          (const MethodInfo_325BE14 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
    return (System_String_o *)StringLiteral_4524/*"CharaGraph/100000"*/;
  Instance = (DataManager_o *)v10;
  if ( !v10 )
    goto LABEL_19;
  Instance = (DataManager_o *)ServantEntity__get_IsServantMaterialTd(v10, 0LL);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    return (System_String_o *)StringLiteral_4524/*"CharaGraph/100000"*/;
  if ( !v10 )
LABEL_19:
    sub_1C22094(Instance, v5);
  p_baseSvtId = &v10->fields.baseSvtId;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v12.fields.currentCryptoKey = p_baseSvtId;
  *(_QWORD *)&v12.fields.fakeValue = 0LL;
  v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v12, v6);
  v3 = System_String__Concat_63115476((System_String_o *)StringLiteral_4523/*"CharaGraph/"*/, v8, 0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__isExistAssetStorage(v3, 0LL) )
    return (System_String_o *)StringLiteral_4524/*"CharaGraph/100000"*/;
  return v3;
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

  if ( (byte_4BDDAB2 & 1) == 0 )
  {
    sub_1C21E38(&UICharaGraphRender_TypeInfo);
    byte_4BDDAB2 = 1;
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
    sub_1C22094(v3, method);
  }
LABEL_10:
  if ( imageLimitCount >= SERVANT_NAME_TARGET_LIMIT_COUNT->max_length )
    sub_1C2209C(v3, method);
  return SERVANT_NAME_TARGET_LIMIT_COUNT->m_Items[imageLimitCount + 1];
}


UnityEngine_Texture2D_o *__fastcall UICharaGraphRender__GetNameTexture(
        UICharaGraphRender_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  UICharaGraphRender_o *v4; // x20
  System_String_o *LastName; // x0
  System_String_o *v6; // x1
  System_String_o *v7; // x1

  v4 = this;
  if ( (byte_4BDDAB3 & 1) == 0 )
  {
    sub_1C21E38(&Method_AssetData_GetObject_Texture2D____77626312);
    sub_1C21E38(&StringLiteral_17283/*"b"*/);
    this = (UICharaGraphRender_o *)sub_1C21E38(&StringLiteral_22383/*"name"*/);
    byte_4BDDAB3 = 1;
  }
  if ( v4->fields.isEventJoinNameExist )
  {
    if ( data )
    {
      LastName = AssetData__get_LastName(data, 0LL);
      v6 = (System_String_o *)StringLiteral_22383/*"name"*/;
LABEL_6:
      v7 = System_String__Concat_63115476(LastName, v6, 0LL);
      return (UnityEngine_Texture2D_o *)AssetData__GetObject_object__49880776(
                                          data,
                                          v7,
                                          (const MethodInfo_2F91EC8 *)Method_AssetData_GetObject_Texture2D____77626312);
    }
    goto LABEL_11;
  }
  if ( !v4->fields.isNameTrue )
  {
    if ( data )
    {
      LastName = AssetData__get_LastName(data, 0LL);
      v6 = (System_String_o *)StringLiteral_17283/*"b"*/;
      goto LABEL_6;
    }
LABEL_11:
    sub_1C22094(this, data);
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
  if ( (byte_4BDDAB5 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&UICharaGraphRender_TypeInfo);
    byte_4BDDAB5 = 1;
  }
  if ( !this->fields.baseKind )
  {
    entity = 0LL;
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_18;
    MasterData_object = DataManager__GetMasterData_object_(
                          Instance,
                          (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
    svtId = this->fields.svtId;
    v12 = (ServantLimitMaster_o *)MasterData_object;
    Instance = (DataManager_o *)UICharaGraphRender__GetNameTargetLimitCount(this, v13);
    if ( !v12 )
      goto LABEL_18;
    m_YMin = 0.0;
    if ( !ServantLimitMaster__TryGetEntity(v12, &entity, svtId, (int32_t)Instance, 0LL) )
      goto LABEL_17;
    Instance = (DataManager_o *)entity;
    if ( !entity )
      goto LABEL_18;
    if ( !ServantLimitEntity__IsNeedChangeSaintGraphName(entity, 0LL) )
      goto LABEL_17;
    Instance = (DataManager_o *)entity;
    if ( !entity )
LABEL_18:
      sub_1C22094(Instance, v9);
    SaintGraphNameIndex = ServantLimitEntity__GetSaintGraphNameIndex(entity, -1, 0LL);
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


System_String_o *__fastcall UICharaGraphRender__GetRaritySprite(UICharaGraphRender_o *this, const MethodInfo *method)
{
  int v2; // w19
  System_String_o *v3; // x20
  System_String_o *v4; // x0

  v2 = (int)this;
  if ( (byte_4BDDAB6 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_23200/*"rarity"*/);
    sub_1C21E38(&StringLiteral_16399/*"_"*/);
    byte_4BDDAB6 = 1;
  }
  v3 = System_Int32__ToString(v2 + 488, 0LL);
  v4 = System_Int32__ToString(v2 + 448, 0LL);
  return System_String__Concat_63128740(
           (System_String_o *)StringLiteral_23200/*"rarity"*/,
           v3,
           (System_String_o *)StringLiteral_16399/*"_"*/,
           v4,
           0LL);
}


UnityEngine_Texture2D_o *__fastcall UICharaGraphRender__GetTrueNameTexture(
        UICharaGraphRender_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *MasterData_object; // x0
  int32_t svtId; // w21
  ServantLimitMaster_o *v9; // x22
  const MethodInfo *v10; // x1
  __int64 *v11; // x20
  System_String_o *LastName; // x0
  System_String_o *v13; // x0
  ServantLimitEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4BDDAB4 & 1) == 0 )
  {
    sub_1C21E38(&Method_AssetData_GetObject_Texture2D____77626312);
    sub_1C21E38(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&StringLiteral_16901/*"a"*/);
    sub_1C21E38(&StringLiteral_22383/*"name"*/);
    byte_4BDDAB4 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  svtId = this->fields.svtId;
  v9 = (ServantLimitMaster_o *)MasterData_object;
  Instance = (DataManager_o *)UICharaGraphRender__GetNameTargetLimitCount(this, v10);
  if ( !v9 )
    goto LABEL_13;
  Instance = (DataManager_o *)ServantLimitMaster__TryGetEntity(v9, &entity, svtId, (int32_t)Instance, 0LL);
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
      v11 = &StringLiteral_16901/*"a"*/;
      goto LABEL_12;
    }
LABEL_13:
    sub_1C22094(Instance, v6);
  }
  if ( !data )
    goto LABEL_13;
  v11 = &StringLiteral_22383/*"name"*/;
LABEL_12:
  LastName = AssetData__get_LastName(data, 0LL);
  v13 = System_String__Concat_63115476(LastName, (System_String_o *)*v11, 0LL);
  return (UnityEngine_Texture2D_o *)AssetData__GetObject_object__49880776(
                                      data,
                                      v13,
                                      (const MethodInfo_2F91EC8 *)Method_AssetData_GetObject_Texture2D____77626312);
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
void __fastcall UICharaGraphRender__MoveAlpha_42102068(
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
  if ( (byte_4BDDAB8 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDDAB8 = 1;
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
      UnityEngine_GameObject__SendMessage_70851072(callbackObject, callbackFunc, 0LL);
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
          sub_1C21DDC(
            (PartyOrganizationUtility_o *)&v16->fields.eventReceiver,
            (int64_t)callbackObject,
            v19,
            v20,
            v21,
            v22,
            v23,
            v24);
          v16->fields.callWhenFinished = callbackFunc;
          sub_1C21DDC(
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
        sub_1C22094(v17, v18);
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
  BalanceConfig_c *v17; // x0
  int32_t ServantLimitMax; // w8
  const MethodInfo *v19; // x3

  if ( (byte_4BDDAAB & 1) == 0 )
  {
    sub_1C21E38(&BalanceConfig_TypeInfo);
    sub_1C21E38(&ImageLimitCount_TypeInfo);
    byte_4BDDAAB = 1;
  }
  this->fields.imageSvtId = svtId;
  this->fields.svtId = svtId;
  v17 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v17 = BalanceConfig_TypeInfo;
  }
  ServantLimitMax = limitCount;
  if ( v17->static_fields->ServantLimitMax < limitCount )
  {
    ServantLimitMax = v17->static_fields->ServantLimitMax;
    if ( !v17->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v17);
      ServantLimitMax = BalanceConfig_TypeInfo->static_fields->ServantLimitMax;
    }
  }
  this->fields.limitCount = ServantLimitMax;
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  this->fields.imageLimitCount = ImageLimitCount__GetCardImageLimitCount(svtId, limitCount, isOwn, 0, 0LL);
  this->fields.exceedCount = exceedCount;
  this->fields.lv = lv;
  UICharaGraphRender__SetCharacter_42097464(this, changeNameType, saintGraphType, v19);
}


void __fastcall UICharaGraphRender__SetCharacter_42097464(
        UICharaGraphRender_o *this,
        int32_t changeNameType,
        int32_t saintGraphType,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 rarity; // x1
  Il2CppObject *v9; // x21
  ServantLimitEntity_o *v10; // x24
  ServantExceedEntity_o *v11; // x0
  ServantExceedEntity_o *v12; // x23
  int32_t frameType; // w0
  int32_t v14; // w24
  int32_t exceedCount; // w8
  int32_t classId; // w24
  int32_t FrameId; // w0
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  int32_t v24; // w24
  UICharaGraphRender_c *v25; // x0
  UICharaGraphRender_c *v26; // x0
  __int64 v27; // x8
  DataManager_c **v28; // x8
  __int64 v29; // x8
  __int64 v30; // x9
  struct System_String_o *v31; // x1
  int32_t rarityIcon; // w23
  int32_t v33; // w0
  int v34; // w8
  int EventJoinNameExistSvtId; // w0
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  void *v42; // x1
  Il2CppObject *MasterData_object; // x0
  int32_t svtId; // w23
  int32_t imageLimitCount; // w25
  ServantLimitMaster_o *v46; // x24
  int32_t v47; // w0
  int32_t v48; // w23
  struct System_String_o *v49; // x0
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  unsigned int v56; // w8
  ServantLimitEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4BDDAAD & 1) == 0 )
  {
    sub_1C21E38(&AtlasManager_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMasterData_ServantExceedMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_ServantLvDetailMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_CommonReleaseMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_ServantLvDetailMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__string____ContainsKey__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__string____get_Item__);
    sub_1C21E38(&ImageLimitCount_TypeInfo);
    sub_1C21E38(&Rarity_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&UICharaGraphRender_TypeInfo);
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BDDAAD = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_69;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_69;
  v9 = DataMasterBase_object__object__int___GetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
         this->fields.svtId,
         (const MethodInfo_325BDC8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_69;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !Instance )
    goto LABEL_69;
  v10 = ServantLimitMaster__GetEntity(
          (ServantLimitMaster_o *)Instance,
          this->fields.svtId,
          this->fields.limitCount,
          0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_69;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ServantExceedMaster___);
  if ( !v9 )
    goto LABEL_69;
  *(int32x2_t *)&this->fields.svtType = vrev64_s32((int32x2_t)v9[5].klass);
  if ( !v10 )
    goto LABEL_69;
  rarity = (unsigned int)v10->fields.rarity;
  this->fields.rarity = rarity;
  if ( !Instance )
    goto LABEL_69;
  v11 = ServantExceedMaster__GetEntity((ServantExceedMaster_o *)Instance, rarity, this->fields.exceedCount, 0LL);
  v12 = v11;
  if ( v11 )
  {
    frameType = v11->fields.frameType;
  }
  else
  {
    v14 = v10->fields.rarity;
    if ( !Rarity_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
    frameType = Rarity__getFrameTypeImage(v14, 0, 0LL);
  }
  exceedCount = this->fields.exceedCount;
  this->fields.frameType = frameType;
  if ( exceedCount >= 1 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_69;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ServantLvDetailMaster___);
    if ( !Instance )
      goto LABEL_69;
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
  if ( FrameId >= 1 )
  {
    v24 = FrameId;
    v25 = UICharaGraphRender_TypeInfo;
    if ( !UICharaGraphRender_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UICharaGraphRender_TypeInfo);
      v25 = UICharaGraphRender_TypeInfo;
    }
    Instance = (DataManager_o *)v25->static_fields->baseFrameTable;
    if ( !Instance )
      goto LABEL_69;
    if ( System_Collections_Generic_Dictionary_int__object___ContainsKey(
           (System_Collections_Generic_Dictionary_int__object__o *)Instance,
           v24,
           (const MethodInfo_32B5C40 *)Method_System_Collections_Generic_Dictionary_int__string____ContainsKey__) )
    {
      v26 = UICharaGraphRender_TypeInfo;
      if ( !UICharaGraphRender_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UICharaGraphRender_TypeInfo);
        v26 = UICharaGraphRender_TypeInfo;
      }
      Instance = (DataManager_o *)v26->static_fields->baseFrameTable;
      if ( !Instance )
        goto LABEL_69;
      Instance = (DataManager_o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                    (System_Collections_Generic_Dictionary_int__object__o *)Instance,
                                    v24,
                                    (const MethodInfo_32B59AC *)Method_System_Collections_Generic_Dictionary_int__string____get_Item__);
      if ( !Instance )
        goto LABEL_69;
      v27 = this->fields.frameType;
      if ( (unsigned int)v27 < LODWORD(Instance->fields.m_CancellationTokenSource) )
      {
        v28 = &Instance->klass + v27;
        goto LABEL_38;
      }
LABEL_70:
      sub_1C2209C(Instance, rarity);
    }
  }
  Instance = (DataManager_o *)UICharaGraphRender_TypeInfo;
  if ( !UICharaGraphRender_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICharaGraphRender_TypeInfo);
    Instance = (DataManager_o *)UICharaGraphRender_TypeInfo;
  }
  v29 = *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 112LL);
  if ( !v29 )
    goto LABEL_69;
  v30 = this->fields.frameType;
  if ( (unsigned int)v30 >= *(_DWORD *)(v29 + 24) )
    goto LABEL_70;
  v28 = (DataManager_c **)(v29 + 8 * v30);
LABEL_38:
  v31 = (struct System_String_o *)v28[4];
  this->fields.frameName = v31;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.frameName, (int64_t)v31, v18, v19, v20, v21, v22, v23);
  if ( this->fields.exceedCount < 1 )
  {
    v33 = 0;
  }
  else
  {
    if ( v12 )
      rarityIcon = v12->fields.rarityIcon;
    else
      rarityIcon = 1;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_ServantLvDetailMaster___);
    if ( !Instance )
      goto LABEL_69;
    v33 = ServantLvDetailMaster__GetRarityIcon(
            (ServantLvDetailMaster_o *)Instance,
            this->fields.rarity,
            this->fields.lv,
            rarityIcon,
            0LL);
  }
  this->fields.exceedType = v33;
  if ( ServantEntity__get_IsCombineMaterial((ServantEntity_o *)v9, 0LL) )
    v34 = -1;
  else
    v34 = ServantEntity__get_IsServantMaterialTd((ServantEntity_o *)v9, 0LL) << 31 >> 31;
  this->fields.atk = v34;
  this->fields.hp = v34;
  *(_QWORD *)&this->fields.adjustAtk = 0LL;
  this->fields.realNameCheck = changeNameType;
  this->fields.saintGraphType = saintGraphType;
  this->fields.isEventJoinNameExist = 0;
  EventJoinNameExistSvtId = ServantEntity__GetEventJoinNameExistSvtId((ServantEntity_o *)v9, 0LL);
  if ( EventJoinNameExistSvtId >= 1 )
  {
    this->fields.imageSvtId = EventJoinNameExistSvtId;
    this->fields.isEventJoinNameExist = 1;
  }
  this->fields.isChangeGraph = 0;
  v42 = StringLiteral_1/*""*/;
  this->fields.changeGraphSuffix = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.changeGraphSuffix, (int64_t)v42, v36, v37, v38, v39, v40, v41);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_69;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  svtId = this->fields.svtId;
  imageLimitCount = this->fields.imageLimitCount;
  v46 = (ServantLimitMaster_o *)MasterData_object;
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  Instance = (DataManager_o *)ImageLimitCount__GetLimitCountByImageLimit(imageLimitCount, 0LL);
  if ( !v46 )
    goto LABEL_69;
  if ( !ServantLimitMaster__TryGetEntity(v46, &entity, svtId, (int32_t)Instance, 0LL) )
    goto LABEL_65;
  Instance = (DataManager_o *)entity;
  if ( !entity )
    goto LABEL_69;
  v47 = ServantLimitEntity__GetChangeGraphCommonReleaseId(entity, -1, 0LL);
  if ( (v47 & 0x80000000) != 0 )
    goto LABEL_65;
  v48 = v47;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  if ( !Instance )
    goto LABEL_69;
  if ( !CommonReleaseMaster__IsOpen((CommonReleaseMaster_o *)Instance, v48, 0LL, 0, 0LL) )
    goto LABEL_65;
  this->fields.isChangeGraph = 1;
  Instance = (DataManager_o *)entity;
  if ( !entity )
LABEL_69:
    sub_1C22094(Instance, rarity);
  v49 = ServantLimitEntity__GetChangeGraphSuffix(entity, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  this->fields.changeGraphSuffix = v49;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.changeGraphSuffix, (int64_t)v49, v50, v51, v52, v53, v54, v55);
LABEL_65:
  if ( (unsigned int)(changeNameType - 1) >= 3 )
    LOBYTE(v56) = ServantEntity__IsNameTrue((ServantEntity_o *)v9, 0LL);
  else
    v56 = 0x100u >> (8 * (changeNameType - 1));
  this->fields.isNameTrue = v56;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UICharaGraphRender__SetCharacter_42098876(
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
  BalanceConfig_c *v18; // x0
  UICharaGraphRender_c *v19; // x0
  Il2CppObject *Instance; // x0
  __int64 v21; // x1
  BalanceConfig_c *v22; // x0
  int32_t v23; // w8
  const MethodInfo *v24; // x3
  int32_t imageLimitCounta; // [xsp+Ch] [xbp-54h] BYREF

  ServantLimitMax = limitCount;
  imageLimitCounta = imageLimitCount;
  if ( (byte_4BDDAAC & 1) == 0 )
  {
    sub_1C21E38(&BalanceConfig_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&UICharaGraphRender_TypeInfo);
    byte_4BDDAAC = 1;
  }
  this->fields.imageSvtId = svtId;
  this->fields.svtId = svtId;
  if ( imageLimitCount >= 11 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___)) == 0LL )
    {
      sub_1C22094(Instance, v21);
    }
    ServantLimitAddMaster__getCostumeId(
      (ServantLimitAddMaster_o *)Instance,
      &this->fields.imageSvtId,
      &imageLimitCounta,
      0LL);
  }
  else
  {
    v18 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v18 = BalanceConfig_TypeInfo;
    }
    if ( v18->static_fields->OtherImageLimitCount == imageLimitCount )
    {
      v19 = UICharaGraphRender_TypeInfo;
      if ( !UICharaGraphRender_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UICharaGraphRender_TypeInfo);
        v19 = UICharaGraphRender_TypeInfo;
      }
      imageLimitCounta = v19->static_fields->OTHER_IMAGE_LIMIT_COUNT;
    }
  }
  v22 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v22 = BalanceConfig_TypeInfo;
  }
  if ( v22->static_fields->ServantLimitMax < ServantLimitMax )
  {
    ServantLimitMax = v22->static_fields->ServantLimitMax;
    if ( !v22->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v22);
      ServantLimitMax = BalanceConfig_TypeInfo->static_fields->ServantLimitMax;
    }
  }
  this->fields.limitCount = ServantLimitMax;
  v23 = imageLimitCounta;
  this->fields.exceedCount = exceedCount;
  this->fields.lv = lv;
  this->fields.imageLimitCount = v23;
  this->fields.imagePartsGroupIdxs = idxs;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.imagePartsGroupIdxs,
    (int64_t)idxs,
    *(int64_t *)&limitCount,
    imageLimitCount,
    *(System_String_o **)&exceedCount,
    *(BattleSetupInfo_o **)&lv,
    *(FollowerInfo_o **)&changeNameType,
    *(PartyListViewItem_o **)&saintGraphType);
  UICharaGraphRender__SetCharacter_42097464(this, changeNameType, saintGraphType, v24);
}


void __fastcall UICharaGraphRender__SetCommand(
        UICharaGraphRender_o *this,
        int32_t commandCodeId,
        const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v6; // x1
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  int32_t rarity; // w8
  __int64 v14; // x9
  struct System_String_o *v15; // x1

  if ( (byte_4BDDAAE & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_CommandCodeMaster___);
    sub_1C21E38(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&UICharaGraphRender_TypeInfo);
    byte_4BDDAAE = 1;
  }
  this->fields.commandCodeId = commandCodeId;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_CommandCodeMaster___);
  if ( !Instance )
    goto LABEL_11;
  Instance = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               this->fields.commandCodeId,
               (const MethodInfo_325BDC8 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
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
  v14 = *(_QWORD *)(*((_QWORD *)Instance + 23) + 128LL);
  if ( !v14 )
LABEL_11:
    sub_1C22094(Instance, v6);
  if ( (unsigned int)rarity >= *(_DWORD *)(v14 + 24) )
    sub_1C2209C(Instance, v6);
  v15 = *(struct System_String_o **)(v14 + 8LL * rarity + 32);
  this->fields.frameName = v15;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.frameName, (int64_t)v15, v7, v8, v9, v10, v11, v12);
  *(_OWORD *)&this->fields.atk = xmmword_BFE4A0;
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
    sub_1C22094(0LL, v6);
  if ( UnityEngine_GameObject__get_layer(gameObject, 0LL) != layer )
  {
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    UICharaGraphRender__SetLayer_42102596(this, transform, layer, v8);
  }
}


void __fastcall UICharaGraphRender__SetLayer_42102596(
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
  __int64 p_method; // x0
  System_Collections_IEnumerator_c *v13; // x8
  __int64 v14; // x9
  System_Collections_IEnumerator_c **v15; // x10
  __int64 v16; // x0
  UnityEngine_Transform_o *v17; // x0
  const MethodInfo *v18; // x3
  __int64 methodPtr_low; // x10
  __int64 v20; // x0
  __int64 v21; // x8
  __int64 v22; // x19
  __int64 v23; // x9
  int *v24; // x10
  __int64 v25; // x0

  v6 = this;
  if ( (byte_4BDDAB9 & 1) == 0 )
  {
    sub_1C21E38(&System_IDisposable_TypeInfo);
    sub_1C21E38(&System_Collections_IEnumerator_TypeInfo);
    this = (UICharaGraphRender_o *)sub_1C21E38(&UnityEngine_Transform_TypeInfo);
    byte_4BDDAB9 = 1;
  }
  if ( !tf
    || (this = (UICharaGraphRender_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)tf, 0LL)) == 0LL )
  {
LABEL_33:
    sub_1C22094(this, tf);
  }
  UnityEngine_GameObject__set_layer((UnityEngine_GameObject_o *)this, layer, 0LL);
  Enumerator = UnityEngine_Transform__GetEnumerator(tf, 0LL);
  if ( !Enumerator )
    sub_1C22094(0LL, v7);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v10 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v10;
        p_offset += 4;
        if ( !v10 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_1C73E18(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v13 = Enumerator->klass;
    v14 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v15 = (System_Collections_IEnumerator_c **)&v13->_1.interfaceOffsets->offset;
      while ( *(v15 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v14;
        v15 += 2;
        if ( !v14 )
          goto LABEL_17;
      }
      v16 = (__int64)&v13->vtable[*(_DWORD *)v15 + 1].method;
    }
    else
    {
LABEL_17:
      v16 = sub_1C73E18(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
    }
    v17 = (UnityEngine_Transform_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v16)(
                                       Enumerator,
                                       *(_QWORD *)(v16 + 8));
    if ( v17 )
    {
      methodPtr_low = LOBYTE(UnityEngine_Transform_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(v17->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (UnityEngine_Transform_c *)v17->klass->_2.typeHierarchy[methodPtr_low - 1] != UnityEngine_Transform_TypeInfo )
      {
        sub_1C22354(v17);
        goto LABEL_33;
      }
    }
    UICharaGraphRender__SetLayer_42102596(v6, v17, layer, v18);
  }
  v20 = sub_1C21F74(Enumerator, System_IDisposable_TypeInfo);
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
      v25 = sub_1C73E18(v20, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v25)(v22, *(_QWORD *)(v25 + 8));
  }
}