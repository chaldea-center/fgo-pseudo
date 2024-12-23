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
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  struct UICharaGraphRender_StaticFields *static_fields; // x8
  __int64 v26; // x0
  __int64 v27; // x1
  unsigned int v28; // w8
  struct UICharaGraphRender_StaticFields *v29; // x9
  __int64 v30; // d2
  struct UICharaGraphRender_StaticFields *v31; // x9
  __int64 v32; // d2
  struct UICharaGraphRender_StaticFields *v33; // x9
  __int64 v34; // d3
  struct UICharaGraphRender_StaticFields *v35; // x9
  __int64 v36; // d2
  struct UICharaGraphRender_StaticFields *v37; // x9
  __int64 v38; // d3
  struct UICharaGraphRender_StaticFields *v39; // x9
  __int64 v40; // d2
  struct UICharaGraphRender_StaticFields *v41; // x9
  __int64 v42; // d3
  struct UICharaGraphRender_StaticFields *v43; // x9
  __int64 v44; // d2
  struct UICharaGraphRender_StaticFields *v45; // x9
  __int64 v46; // d3
  struct UICharaGraphRender_StaticFields *v47; // x9
  __int64 v48; // d2
  struct UICharaGraphRender_StaticFields *v49; // x9
  __int64 v50; // d3
  struct UICharaGraphRender_StaticFields *v51; // x8
  __int64 v52; // d2
  System_Collections_ObjectModel_ReadOnlyCollection_T__o *Only_Rect; // x0
  struct UICharaGraphRender_StaticFields *v54; // x8
  int64_t v55; // x2
  int32_t v56; // w3
  System_String_o *v57; // x4
  BattleSetupInfo_o *v58; // x5
  FollowerInfo_o *v59; // x6
  PartyListViewItem_o *v60; // x7
  UICharaGraphRender_c *v61; // x8
  System_Array_o *v62; // x0
  int64_t v63; // x19
  struct UICharaGraphRender_StaticFields *v64; // x0
  int64_t v65; // x2
  int32_t v66; // w3
  System_String_o *v67; // x4
  BattleSetupInfo_o *v68; // x5
  FollowerInfo_o *v69; // x6
  PartyListViewItem_o *v70; // x7
  int64_t v71; // x2
  int32_t v72; // w3
  System_String_o *v73; // x4
  BattleSetupInfo_o *v74; // x5
  FollowerInfo_o *v75; // x6
  PartyListViewItem_o *v76; // x7
  int64_t v77; // x19
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
  int64_t v99; // x1
  int64_t v100; // x2
  int32_t v101; // w3
  System_String_o *v102; // x4
  BattleSetupInfo_o *v103; // x5
  FollowerInfo_o *v104; // x6
  PartyListViewItem_o *v105; // x7
  void *v106; // x1
  int64_t v107; // x2
  int32_t v108; // w3
  System_String_o *v109; // x4
  BattleSetupInfo_o *v110; // x5
  FollowerInfo_o *v111; // x6
  PartyListViewItem_o *v112; // x7
  void *v113; // x1
  struct UICharaGraphRender_StaticFields *v114; // x0
  int64_t v115; // x2
  int32_t v116; // w3
  System_String_o *v117; // x4
  BattleSetupInfo_o *v118; // x5
  FollowerInfo_o *v119; // x6
  PartyListViewItem_o *v120; // x7
  int64_t v121; // x2
  int32_t v122; // w3
  System_String_o *v123; // x4
  BattleSetupInfo_o *v124; // x5
  FollowerInfo_o *v125; // x6
  PartyListViewItem_o *v126; // x7
  int64_t v127; // x19
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
  int64_t v171; // x2
  int32_t v172; // w3
  System_String_o *v173; // x4
  BattleSetupInfo_o *v174; // x5
  FollowerInfo_o *v175; // x6
  PartyListViewItem_o *v176; // x7
  int64_t v177; // x1
  struct UICharaGraphRender_StaticFields *v178; // x0
  int64_t v179; // x2
  int32_t v180; // w3
  System_String_o *v181; // x4
  BattleSetupInfo_o *v182; // x5
  FollowerInfo_o *v183; // x6
  PartyListViewItem_o *v184; // x7
  System_Collections_Generic_Dictionary_int__object__o *v185; // x19
  int64_t v186; // x2
  int32_t v187; // w3
  System_String_o *v188; // x4
  BattleSetupInfo_o *v189; // x5
  FollowerInfo_o *v190; // x6
  PartyListViewItem_o *v191; // x7
  __int64 v192; // x20
  int64_t v193; // x1
  int64_t v194; // x2
  int32_t v195; // w3
  System_String_o *v196; // x4
  BattleSetupInfo_o *v197; // x5
  FollowerInfo_o *v198; // x6
  PartyListViewItem_o *v199; // x7
  int64_t v200; // x1
  int64_t v201; // x2
  int32_t v202; // w3
  System_String_o *v203; // x4
  BattleSetupInfo_o *v204; // x5
  FollowerInfo_o *v205; // x6
  PartyListViewItem_o *v206; // x7
  int64_t v207; // x1
  int64_t v208; // x2
  int32_t v209; // w3
  System_String_o *v210; // x4
  BattleSetupInfo_o *v211; // x5
  FollowerInfo_o *v212; // x6
  PartyListViewItem_o *v213; // x7
  int64_t v214; // x1
  int64_t v215; // x2
  int32_t v216; // w3
  System_String_o *v217; // x4
  BattleSetupInfo_o *v218; // x5
  FollowerInfo_o *v219; // x6
  PartyListViewItem_o *v220; // x7
  __int64 v221; // x20
  int64_t v222; // x1
  int64_t v223; // x2
  int32_t v224; // w3
  System_String_o *v225; // x4
  BattleSetupInfo_o *v226; // x5
  FollowerInfo_o *v227; // x6
  PartyListViewItem_o *v228; // x7
  int64_t v229; // x1
  int64_t v230; // x2
  int32_t v231; // w3
  System_String_o *v232; // x4
  BattleSetupInfo_o *v233; // x5
  FollowerInfo_o *v234; // x6
  PartyListViewItem_o *v235; // x7
  int64_t v236; // x1
  int64_t v237; // x2
  int32_t v238; // w3
  System_String_o *v239; // x4
  BattleSetupInfo_o *v240; // x5
  FollowerInfo_o *v241; // x6
  PartyListViewItem_o *v242; // x7
  int64_t v243; // x1
  int64_t v244; // x2
  int32_t v245; // w3
  System_String_o *v246; // x4
  BattleSetupInfo_o *v247; // x5
  FollowerInfo_o *v248; // x6
  PartyListViewItem_o *v249; // x7
  __int64 v250; // x20
  int64_t v251; // x1
  int64_t v252; // x2
  int32_t v253; // w3
  System_String_o *v254; // x4
  BattleSetupInfo_o *v255; // x5
  FollowerInfo_o *v256; // x6
  PartyListViewItem_o *v257; // x7
  int64_t v258; // x1
  int64_t v259; // x2
  int32_t v260; // w3
  System_String_o *v261; // x4
  BattleSetupInfo_o *v262; // x5
  FollowerInfo_o *v263; // x6
  PartyListViewItem_o *v264; // x7
  int64_t v265; // x1
  int64_t v266; // x2
  int32_t v267; // w3
  System_String_o *v268; // x4
  BattleSetupInfo_o *v269; // x5
  FollowerInfo_o *v270; // x6
  PartyListViewItem_o *v271; // x7
  int64_t v272; // x1
  int64_t v273; // x2
  int32_t v274; // w3
  System_String_o *v275; // x4
  BattleSetupInfo_o *v276; // x5
  FollowerInfo_o *v277; // x6
  PartyListViewItem_o *v278; // x7
  __int64 v279; // x20
  int64_t v280; // x1
  int64_t v281; // x2
  int32_t v282; // w3
  System_String_o *v283; // x4
  BattleSetupInfo_o *v284; // x5
  FollowerInfo_o *v285; // x6
  PartyListViewItem_o *v286; // x7
  int64_t v287; // x1
  int64_t v288; // x2
  int32_t v289; // w3
  System_String_o *v290; // x4
  BattleSetupInfo_o *v291; // x5
  FollowerInfo_o *v292; // x6
  PartyListViewItem_o *v293; // x7
  int64_t v294; // x1
  int64_t v295; // x2
  int32_t v296; // w3
  System_String_o *v297; // x4
  BattleSetupInfo_o *v298; // x5
  FollowerInfo_o *v299; // x6
  PartyListViewItem_o *v300; // x7
  int64_t v301; // x1
  struct UICharaGraphRender_StaticFields *v302; // x0
  int64_t v303; // x2
  int32_t v304; // w3
  System_String_o *v305; // x4
  BattleSetupInfo_o *v306; // x5
  FollowerInfo_o *v307; // x6
  PartyListViewItem_o *v308; // x7
  int64_t v309; // x2
  int32_t v310; // w3
  System_String_o *v311; // x4
  BattleSetupInfo_o *v312; // x5
  FollowerInfo_o *v313; // x6
  PartyListViewItem_o *v314; // x7
  int64_t v315; // x19
  int64_t v316; // x1
  int64_t v317; // x2
  int32_t v318; // w3
  System_String_o *v319; // x4
  BattleSetupInfo_o *v320; // x5
  FollowerInfo_o *v321; // x6
  PartyListViewItem_o *v322; // x7
  int64_t v323; // x1
  int64_t v324; // x2
  int32_t v325; // w3
  System_String_o *v326; // x4
  BattleSetupInfo_o *v327; // x5
  FollowerInfo_o *v328; // x6
  PartyListViewItem_o *v329; // x7
  int64_t v330; // x1
  int64_t v331; // x2
  int32_t v332; // w3
  System_String_o *v333; // x4
  BattleSetupInfo_o *v334; // x5
  FollowerInfo_o *v335; // x6
  PartyListViewItem_o *v336; // x7
  int64_t v337; // x1
  int64_t v338; // x2
  int32_t v339; // w3
  System_String_o *v340; // x4
  BattleSetupInfo_o *v341; // x5
  FollowerInfo_o *v342; // x6
  PartyListViewItem_o *v343; // x7
  int64_t v344; // x1
  int64_t v345; // x2
  int32_t v346; // w3
  System_String_o *v347; // x4
  BattleSetupInfo_o *v348; // x5
  FollowerInfo_o *v349; // x6
  PartyListViewItem_o *v350; // x7
  int64_t v351; // x1
  struct UICharaGraphRender_StaticFields *v352; // x0
  int64_t v353; // x2
  int32_t v354; // w3
  System_String_o *v355; // x4
  BattleSetupInfo_o *v356; // x5
  FollowerInfo_o *v357; // x6
  PartyListViewItem_o *v358; // x7
  System_RuntimeFieldHandle_o v359; // 0:w1.4

  if ( (byte_4B680FD & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Array_AsReadOnly_Rect___, v1);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_int__string____Add__, v2);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_int__string_____ctor__, v3);
    sub_1BE4ACC(&System_Collections_Generic_Dictionary_int__string____TypeInfo, v4);
    sub_1BE4ACC(&int___TypeInfo, v5);
    sub_1BE4ACC(&UnityEngine_Rect___TypeInfo, v6);
    sub_1BE4ACC(&string___TypeInfo, v7);
    sub_1BE4ACC(
      &Field__PrivateImplementationDetails__F239810D17032E35383496434C64894FFE055A198BA7CFB907D73BAF26A70F0C,
      v8);
    sub_1BE4ACC(&UICharaGraphRender_TypeInfo, v9);
    sub_1BE4ACC(&StringLiteral_19875/*"frame5"*/, v10);
    sub_1BE4ACC(&StringLiteral_16831/*"a"*/, v11);
    sub_1BE4ACC(&StringLiteral_19876/*"frame6"*/, v12);
    sub_1BE4ACC(&StringLiteral_19877/*"frame7"*/, v13);
    sub_1BE4ACC(&StringLiteral_19873/*"frame37"*/, v14);
    sub_1BE4ACC(&StringLiteral_17211/*"b"*/, v15);
    sub_1BE4ACC(&StringLiteral_17914/*"c"*/, v16);
    sub_1BE4ACC(&StringLiteral_19870/*"frame20"*/, v17);
    sub_1BE4ACC(&StringLiteral_19872/*"frame36"*/, v18);
    sub_1BE4ACC(&StringLiteral_19871/*"frame3"*/, v19);
    sub_1BE4ACC(&StringLiteral_19867/*"frame1"*/, v20);
    sub_1BE4ACC(&StringLiteral_19866/*"frame0"*/, v21);
    sub_1BE4ACC(&StringLiteral_19868/*"frame17"*/, v22);
    sub_1BE4ACC(&StringLiteral_19869/*"frame2"*/, v23);
    sub_1BE4ACC(&StringLiteral_19874/*"frame4"*/, v24);
    byte_4B680FD = 1;
  }
  static_fields = UICharaGraphRender_TypeInfo->static_fields;
  *(_OWORD *)&static_fields->OTHER_IMAGE_LIMIT_COUNT = xmmword_BE1EB0;
  *(_QWORD *)&static_fields->SERVANT_BODY_SIZE_Y = 0x1FE000002D2LL;
  *(_OWORD *)&static_fields->SERVANT_BODY_U = xmmword_BE2B80;
  static_fields->SERVANT_EQUIP_BODY_SIZE_Y = 872;
  *(_OWORD *)&static_fields->SERVANT_EQUIP_BODY_U = xmmword_BE2DA0;
  v26 = sub_1BE4B74(UnityEngine_Rect___TypeInfo, 12LL);
  if ( !v26 )
    goto LABEL_62;
  v28 = *(_DWORD *)(v26 + 24);
  if ( !v28 )
    goto LABEL_61;
  v29 = UICharaGraphRender_TypeInfo->static_fields;
  v30 = *(_QWORD *)&v29->SERVANT_BODY_W;
  *(float32x2_t *)(v26 + 32) = vadd_f32(*(float32x2_t *)&v29->SERVANT_BODY_U, 0LL);
  *(_QWORD *)(v26 + 40) = v30;
  if ( v28 == 1 )
    goto LABEL_61;
  v31 = UICharaGraphRender_TypeInfo->static_fields;
  v32 = *(_QWORD *)&v31->SERVANT_BODY_W;
  *(float32x2_t *)(v26 + 48) = vadd_f32(*(float32x2_t *)&v31->SERVANT_BODY_U, (float32x2_t)1056964608LL);
  *(_QWORD *)(v26 + 56) = v32;
  if ( v28 <= 2 )
    goto LABEL_61;
  v33 = UICharaGraphRender_TypeInfo->static_fields;
  v34 = *(_QWORD *)&v33->SERVANT_BODY_W;
  *(float32x2_t *)(v26 + 64) = vadd_f32(*(float32x2_t *)&v33->SERVANT_BODY_U, 0LL);
  *(_QWORD *)(v26 + 72) = v34;
  if ( v28 == 3 )
    goto LABEL_61;
  v35 = UICharaGraphRender_TypeInfo->static_fields;
  v36 = *(_QWORD *)&v35->SERVANT_BODY_W;
  *(float32x2_t *)(v26 + 80) = vadd_f32(*(float32x2_t *)&v35->SERVANT_BODY_U, (float32x2_t)1056964608LL);
  *(_QWORD *)(v26 + 88) = v36;
  if ( v28 <= 4 )
    goto LABEL_61;
  v37 = UICharaGraphRender_TypeInfo->static_fields;
  v38 = *(_QWORD *)&v37->SERVANT_BODY_W;
  *(float32x2_t *)(v26 + 96) = vadd_f32(*(float32x2_t *)&v37->SERVANT_BODY_U, 0LL);
  *(_QWORD *)(v26 + 104) = v38;
  if ( v28 == 5 )
    goto LABEL_61;
  v39 = UICharaGraphRender_TypeInfo->static_fields;
  v40 = *(_QWORD *)&v39->SERVANT_BODY_W;
  *(float32x2_t *)(v26 + 112) = vadd_f32(*(float32x2_t *)&v39->SERVANT_BODY_U, (float32x2_t)1056964608LL);
  *(_QWORD *)(v26 + 120) = v40;
  if ( v28 <= 6 )
    goto LABEL_61;
  v41 = UICharaGraphRender_TypeInfo->static_fields;
  v42 = *(_QWORD *)&v41->SERVANT_BODY_W;
  *(float32x2_t *)(v26 + 128) = vadd_f32(*(float32x2_t *)&v41->SERVANT_BODY_U, 0LL);
  *(_QWORD *)(v26 + 136) = v42;
  if ( v28 == 7 )
    goto LABEL_61;
  v43 = UICharaGraphRender_TypeInfo->static_fields;
  v44 = *(_QWORD *)&v43->SERVANT_BODY_W;
  *(float32x2_t *)(v26 + 144) = vadd_f32(*(float32x2_t *)&v43->SERVANT_BODY_U, (float32x2_t)1056964608LL);
  *(_QWORD *)(v26 + 152) = v44;
  if ( v28 <= 8 )
    goto LABEL_61;
  v45 = UICharaGraphRender_TypeInfo->static_fields;
  v46 = *(_QWORD *)&v45->SERVANT_BODY_W;
  *(float32x2_t *)(v26 + 160) = vadd_f32(*(float32x2_t *)&v45->SERVANT_BODY_U, 0LL);
  *(_QWORD *)(v26 + 168) = v46;
  if ( v28 == 9 )
    goto LABEL_61;
  v47 = UICharaGraphRender_TypeInfo->static_fields;
  v48 = *(_QWORD *)&v47->SERVANT_BODY_W;
  *(float32x2_t *)(v26 + 176) = vadd_f32(*(float32x2_t *)&v47->SERVANT_BODY_U, (float32x2_t)1056964608LL);
  *(_QWORD *)(v26 + 184) = v48;
  if ( v28 <= 0xA )
    goto LABEL_61;
  v49 = UICharaGraphRender_TypeInfo->static_fields;
  v50 = *(_QWORD *)&v49->SERVANT_BODY_W;
  *(float32x2_t *)(v26 + 192) = vadd_f32(*(float32x2_t *)&v49->SERVANT_BODY_U, 0LL);
  *(_QWORD *)(v26 + 200) = v50;
  if ( v28 == 11 )
    goto LABEL_61;
  v51 = UICharaGraphRender_TypeInfo->static_fields;
  v52 = *(_QWORD *)&v51->SERVANT_BODY_W;
  *(float32x2_t *)(v26 + 208) = vadd_f32(*(float32x2_t *)&v51->SERVANT_BODY_U, (float32x2_t)1056964608LL);
  *(_QWORD *)(v26 + 216) = v52;
  Only_Rect = System_Array__AsReadOnly_Rect_(
                (UnityEngine_Rect_array *)v26,
                (const MethodInfo_30233C4 *)Method_System_Array_AsReadOnly_Rect___);
  v54 = UICharaGraphRender_TypeInfo->static_fields;
  v54->servantBodyRectTable = (struct System_Collections_ObjectModel_ReadOnlyCollection_Rect__o *)Only_Rect;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v54->servantBodyRectTable,
    (int64_t)Only_Rect,
    v55,
    v56,
    v57,
    v58,
    v59,
    v60);
  v61 = UICharaGraphRender_TypeInfo;
  UICharaGraphRender_TypeInfo->static_fields->servantEquipBodyRect = *(struct UnityEngine_Rect_o *)&UICharaGraphRender_TypeInfo->static_fields->SERVANT_EQUIP_BODY_U;
  *(_QWORD *)&v61->static_fields->SERVANT_NAME_UV_DIFF_Y = 0x43E800000LL;
  v62 = (System_Array_o *)sub_1BE4B74(int___TypeInfo, 4LL);
  v359.fields.value = Field__PrivateImplementationDetails__F239810D17032E35383496434C64894FFE055A198BA7CFB907D73BAF26A70F0C;
  v63 = (int64_t)v62;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_62606144(v62, v359, 0LL);
  v64 = UICharaGraphRender_TypeInfo->static_fields;
  v64->SERVANT_NAME_TARGET_LIMIT_COUNT = (struct System_Int32_array *)v63;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v64->SERVANT_NAME_TARGET_LIMIT_COUNT, v63, v65, v66, v67, v68, v69, v70);
  v26 = sub_1BE4B74(string___TypeInfo, 6LL);
  if ( !v26 )
    goto LABEL_62;
  v77 = v26;
  if ( !*(_DWORD *)(v26 + 24) )
    goto LABEL_61;
  v78 = StringLiteral_16831/*"a"*/;
  *(_QWORD *)(v26 + 32) = StringLiteral_16831/*"a"*/;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v26 + 32), v78, v71, v72, v73, v74, v75, v76);
  if ( *(_DWORD *)(v77 + 24) <= 1u )
    goto LABEL_61;
  v85 = StringLiteral_16831/*"a"*/;
  *(_QWORD *)(v77 + 40) = StringLiteral_16831/*"a"*/;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v77 + 40), v85, v79, v80, v81, v82, v83, v84);
  if ( *(_DWORD *)(v77 + 24) <= 2u )
    goto LABEL_61;
  v92 = StringLiteral_17211/*"b"*/;
  *(_QWORD *)(v77 + 48) = StringLiteral_17211/*"b"*/;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v77 + 48), v92, v86, v87, v88, v89, v90, v91);
  if ( *(_DWORD *)(v77 + 24) <= 3u )
    goto LABEL_61;
  v99 = StringLiteral_17211/*"b"*/;
  *(_QWORD *)(v77 + 56) = StringLiteral_17211/*"b"*/;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v77 + 56), v99, v93, v94, v95, v96, v97, v98);
  if ( *(_DWORD *)(v77 + 24) <= 4u )
    goto LABEL_61;
  v106 = StringLiteral_17914/*"c"*/;
  *(_QWORD *)(v77 + 64) = StringLiteral_17914/*"c"*/;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v77 + 64), (int64_t)v106, v100, v101, v102, v103, v104, v105);
  if ( *(_DWORD *)(v77 + 24) <= 5u )
    goto LABEL_61;
  v113 = StringLiteral_17914/*"c"*/;
  *(_QWORD *)(v77 + 72) = StringLiteral_17914/*"c"*/;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v77 + 72), (int64_t)v113, v107, v108, v109, v110, v111, v112);
  v114 = UICharaGraphRender_TypeInfo->static_fields;
  v114->bodyTextureNameTable = (struct System_String_array *)v77;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v114->bodyTextureNameTable, v77, v115, v116, v117, v118, v119, v120);
  v26 = sub_1BE4B74(string___TypeInfo, 8LL);
  if ( !v26 )
    goto LABEL_62;
  v127 = v26;
  if ( !*(_DWORD *)(v26 + 24) )
    goto LABEL_61;
  v128 = StringLiteral_19866/*"frame0"*/;
  *(_QWORD *)(v26 + 32) = StringLiteral_19866/*"frame0"*/;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v26 + 32), v128, v121, v122, v123, v124, v125, v126);
  if ( *(_DWORD *)(v127 + 24) <= 1u )
    goto LABEL_61;
  v135 = StringLiteral_19867/*"frame1"*/;
  *(_QWORD *)(v127 + 40) = StringLiteral_19867/*"frame1"*/;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v127 + 40), v135, v129, v130, v131, v132, v133, v134);
  if ( *(_DWORD *)(v127 + 24) <= 2u )
    goto LABEL_61;
  v142 = StringLiteral_19869/*"frame2"*/;
  *(_QWORD *)(v127 + 48) = StringLiteral_19869/*"frame2"*/;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v127 + 48), v142, v136, v137, v138, v139, v140, v141);
  if ( *(_DWORD *)(v127 + 24) <= 3u )
    goto LABEL_61;
  v149 = StringLiteral_19871/*"frame3"*/;
  *(_QWORD *)(v127 + 56) = StringLiteral_19871/*"frame3"*/;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v127 + 56), v149, v143, v144, v145, v146, v147, v148);
  if ( *(_DWORD *)(v127 + 24) <= 4u )
    goto LABEL_61;
  v156 = StringLiteral_19874/*"frame4"*/;
  *(_QWORD *)(v127 + 64) = StringLiteral_19874/*"frame4"*/;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v127 + 64), v156, v150, v151, v152, v153, v154, v155);
  if ( *(_DWORD *)(v127 + 24) <= 5u )
    goto LABEL_61;
  v163 = StringLiteral_19875/*"frame5"*/;
  *(_QWORD *)(v127 + 72) = StringLiteral_19875/*"frame5"*/;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v127 + 72), v163, v157, v158, v159, v160, v161, v162);
  if ( *(_DWORD *)(v127 + 24) <= 6u )
    goto LABEL_61;
  v170 = StringLiteral_19876/*"frame6"*/;
  *(_QWORD *)(v127 + 80) = StringLiteral_19876/*"frame6"*/;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v127 + 80), v170, v164, v165, v166, v167, v168, v169);
  if ( *(_DWORD *)(v127 + 24) <= 7u )
    goto LABEL_61;
  v177 = StringLiteral_19877/*"frame7"*/;
  *(_QWORD *)(v127 + 88) = StringLiteral_19877/*"frame7"*/;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v127 + 88), v177, v171, v172, v173, v174, v175, v176);
  v178 = UICharaGraphRender_TypeInfo->static_fields;
  v178->baseFrameList = (struct System_String_array *)v127;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v178->baseFrameList, v127, v179, v180, v181, v182, v183, v184);
  v185 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1BE4D18(System_Collections_Generic_Dictionary_int__string____TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v185,
    (const MethodInfo_324FE94 *)Method_System_Collections_Generic_Dictionary_int__string_____ctor__);
  v26 = sub_1BE4B74(string___TypeInfo, 4LL);
  if ( !v26 )
    goto LABEL_62;
  v192 = v26;
  if ( !*(_DWORD *)(v26 + 24) )
    goto LABEL_61;
  v193 = StringLiteral_19868/*"frame17"*/;
  *(_QWORD *)(v26 + 32) = StringLiteral_19868/*"frame17"*/;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v26 + 32), v193, v186, v187, v188, v189, v190, v191);
  if ( *(_DWORD *)(v192 + 24) <= 1u )
    goto LABEL_61;
  v200 = StringLiteral_19868/*"frame17"*/;
  *(_QWORD *)(v192 + 40) = StringLiteral_19868/*"frame17"*/;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v192 + 40), v200, v194, v195, v196, v197, v198, v199);
  if ( *(_DWORD *)(v192 + 24) <= 2u )
    goto LABEL_61;
  v207 = StringLiteral_19868/*"frame17"*/;
  *(_QWORD *)(v192 + 48) = StringLiteral_19868/*"frame17"*/;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v192 + 48), v207, v201, v202, v203, v204, v205, v206);
  if ( *(_DWORD *)(v192 + 24) <= 3u )
    goto LABEL_61;
  v214 = StringLiteral_19868/*"frame17"*/;
  *(_QWORD *)(v192 + 56) = StringLiteral_19868/*"frame17"*/;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v192 + 56), v214, v208, v209, v210, v211, v212, v213);
  if ( !v185
    || (System_Collections_Generic_Dictionary_int__object___Add(
          v185,
          17,
          (Il2CppObject *)v192,
          (const MethodInfo_3250868 *)Method_System_Collections_Generic_Dictionary_int__string____Add__),
        (v26 = sub_1BE4B74(string___TypeInfo, 4LL)) == 0) )
  {
LABEL_62:
    sub_1BE4D28(v26, v27);
  }
  v221 = v26;
  if ( !*(_DWORD *)(v26 + 24) )
    goto LABEL_61;
  v222 = StringLiteral_19870/*"frame20"*/;
  *(_QWORD *)(v26 + 32) = StringLiteral_19870/*"frame20"*/;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v26 + 32), v222, v215, v216, v217, v218, v219, v220);
  if ( *(_DWORD *)(v221 + 24) <= 1u )
    goto LABEL_61;
  v229 = StringLiteral_19870/*"frame20"*/;
  *(_QWORD *)(v221 + 40) = StringLiteral_19870/*"frame20"*/;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v221 + 40), v229, v223, v224, v225, v226, v227, v228);
  if ( *(_DWORD *)(v221 + 24) <= 2u )
    goto LABEL_61;
  v236 = StringLiteral_19870/*"frame20"*/;
  *(_QWORD *)(v221 + 48) = StringLiteral_19870/*"frame20"*/;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v221 + 48), v236, v230, v231, v232, v233, v234, v235);
  if ( *(_DWORD *)(v221 + 24) <= 3u )
    goto LABEL_61;
  v243 = StringLiteral_19870/*"frame20"*/;
  *(_QWORD *)(v221 + 56) = StringLiteral_19870/*"frame20"*/;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v221 + 56), v243, v237, v238, v239, v240, v241, v242);
  System_Collections_Generic_Dictionary_int__object___Add(
    v185,
    20,
    (Il2CppObject *)v221,
    (const MethodInfo_3250868 *)Method_System_Collections_Generic_Dictionary_int__string____Add__);
  v26 = sub_1BE4B74(string___TypeInfo, 4LL);
  if ( !v26 )
    goto LABEL_62;
  v250 = v26;
  if ( !*(_DWORD *)(v26 + 24) )
    goto LABEL_61;
  v251 = StringLiteral_19872/*"frame36"*/;
  *(_QWORD *)(v26 + 32) = StringLiteral_19872/*"frame36"*/;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v26 + 32), v251, v244, v245, v246, v247, v248, v249);
  if ( *(_DWORD *)(v250 + 24) <= 1u )
    goto LABEL_61;
  v258 = StringLiteral_19872/*"frame36"*/;
  *(_QWORD *)(v250 + 40) = StringLiteral_19872/*"frame36"*/;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v250 + 40), v258, v252, v253, v254, v255, v256, v257);
  if ( *(_DWORD *)(v250 + 24) <= 2u )
    goto LABEL_61;
  v265 = StringLiteral_19872/*"frame36"*/;
  *(_QWORD *)(v250 + 48) = StringLiteral_19872/*"frame36"*/;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v250 + 48), v265, v259, v260, v261, v262, v263, v264);
  if ( *(_DWORD *)(v250 + 24) <= 3u )
    goto LABEL_61;
  v272 = StringLiteral_19872/*"frame36"*/;
  *(_QWORD *)(v250 + 56) = StringLiteral_19872/*"frame36"*/;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v250 + 56), v272, v266, v267, v268, v269, v270, v271);
  System_Collections_Generic_Dictionary_int__object___Add(
    v185,
    36,
    (Il2CppObject *)v250,
    (const MethodInfo_3250868 *)Method_System_Collections_Generic_Dictionary_int__string____Add__);
  v26 = sub_1BE4B74(string___TypeInfo, 4LL);
  if ( !v26 )
    goto LABEL_62;
  v279 = v26;
  if ( !*(_DWORD *)(v26 + 24) )
    goto LABEL_61;
  v280 = StringLiteral_19873/*"frame37"*/;
  *(_QWORD *)(v26 + 32) = StringLiteral_19873/*"frame37"*/;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v26 + 32), v280, v273, v274, v275, v276, v277, v278);
  if ( *(_DWORD *)(v279 + 24) <= 1u
    || (v287 = StringLiteral_19873/*"frame37"*/,
        *(_QWORD *)(v279 + 40) = StringLiteral_19873/*"frame37"*/,
        sub_1BE4A70((PartyOrganizationUtility_o *)(v279 + 40), v287, v281, v282, v283, v284, v285, v286),
        *(_DWORD *)(v279 + 24) <= 2u)
    || (v294 = StringLiteral_19873/*"frame37"*/,
        *(_QWORD *)(v279 + 48) = StringLiteral_19873/*"frame37"*/,
        sub_1BE4A70((PartyOrganizationUtility_o *)(v279 + 48), v294, v288, v289, v290, v291, v292, v293),
        *(_DWORD *)(v279 + 24) <= 3u) )
  {
LABEL_61:
    sub_1BE4D30(v26, v27);
  }
  v301 = StringLiteral_19873/*"frame37"*/;
  *(_QWORD *)(v279 + 56) = StringLiteral_19873/*"frame37"*/;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v279 + 56), v301, v295, v296, v297, v298, v299, v300);
  System_Collections_Generic_Dictionary_int__object___Add(
    v185,
    37,
    (Il2CppObject *)v279,
    (const MethodInfo_3250868 *)Method_System_Collections_Generic_Dictionary_int__string____Add__);
  v302 = UICharaGraphRender_TypeInfo->static_fields;
  v302->baseFrameTable = (struct System_Collections_Generic_Dictionary_int__string____o *)v185;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v302->baseFrameTable, (int64_t)v185, v303, v304, v305, v306, v307, v308);
  v26 = sub_1BE4B74(string___TypeInfo, 6LL);
  if ( !v26 )
    goto LABEL_62;
  v315 = v26;
  if ( !*(_DWORD *)(v26 + 24) )
    goto LABEL_61;
  v316 = StringLiteral_19866/*"frame0"*/;
  *(_QWORD *)(v26 + 32) = StringLiteral_19866/*"frame0"*/;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v26 + 32), v316, v309, v310, v311, v312, v313, v314);
  if ( *(_DWORD *)(v315 + 24) <= 1u )
    goto LABEL_61;
  v323 = StringLiteral_19867/*"frame1"*/;
  *(_QWORD *)(v315 + 40) = StringLiteral_19867/*"frame1"*/;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v315 + 40), v323, v317, v318, v319, v320, v321, v322);
  if ( *(_DWORD *)(v315 + 24) <= 2u )
    goto LABEL_61;
  v330 = StringLiteral_19867/*"frame1"*/;
  *(_QWORD *)(v315 + 48) = StringLiteral_19867/*"frame1"*/;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v315 + 48), v330, v324, v325, v326, v327, v328, v329);
  if ( *(_DWORD *)(v315 + 24) <= 3u )
    goto LABEL_61;
  v337 = StringLiteral_19869/*"frame2"*/;
  *(_QWORD *)(v315 + 56) = StringLiteral_19869/*"frame2"*/;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v315 + 56), v337, v331, v332, v333, v334, v335, v336);
  if ( *(_DWORD *)(v315 + 24) <= 4u )
    goto LABEL_61;
  v344 = StringLiteral_19871/*"frame3"*/;
  *(_QWORD *)(v315 + 64) = StringLiteral_19871/*"frame3"*/;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v315 + 64), v344, v338, v339, v340, v341, v342, v343);
  if ( *(_DWORD *)(v315 + 24) <= 5u )
    goto LABEL_61;
  v351 = StringLiteral_19871/*"frame3"*/;
  *(_QWORD *)(v315 + 72) = StringLiteral_19871/*"frame3"*/;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v315 + 72), v351, v345, v346, v347, v348, v349, v350);
  v352 = UICharaGraphRender_TypeInfo->static_fields;
  v352->commandCodeBaseFrameList = (struct System_String_array *)v315;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v352->commandCodeBaseFrameList, v315, v353, v354, v355, v356, v357, v358);
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
  DataManager_o *Instance; // x0
  __int64 v15; // x1
  System_String_o *v16; // x0
  System_String_o *v17; // x19
  System_String_o *v18; // x0
  const MethodInfo *v19; // x2
  Il2CppObject *v20; // x19
  System_String_o *v21; // x0
  int32_t IntValue; // [xsp+Ch] [xbp-44h] BYREF
  Il2CppObject *v24; // [xsp+10h] [xbp-40h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-38h] BYREF
  int32_t imageLimitCounta; // [xsp+28h] [xbp-28h] BYREF
  int32_t svtIda; // [xsp+2Ch] [xbp-24h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v28; // 0:x0.16

  imageLimitCounta = imageLimitCount;
  svtIda = svtId;
  if ( (byte_4B680EA & 1) == 0 )
  {
    sub_1BE4ACC(&AssetManager_TypeInfo, *(_QWORD *)&imageLimitCount);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, v4);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_ServantMaster___, v5);
    sub_1BE4ACC(&Method_DataManager_GetMaster_ServantMaster___, v6);
    sub_1BE4ACC(&DataManager_TypeInfo, v7);
    sub_1BE4ACC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v8);
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    sub_1BE4ACC(&StringLiteral_21567/*"maleImageId"*/, v11);
    sub_1BE4ACC(&StringLiteral_4509/*"CharaGraph/100000"*/, v12);
    sub_1BE4ACC(&StringLiteral_4508/*"CharaGraph/"*/, v13);
    byte_4B680EA = 1;
  }
  v24 = 0LL;
  entity = 0LL;
  IntValue = 0;
  if ( imageLimitCount >= 11 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_32;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    if ( !Instance )
      goto LABEL_32;
    ServantLimitAddMaster__getCostumeId((ServantLimitAddMaster_o *)Instance, &svtIda, &imageLimitCounta, 0LL);
  }
  v16 = System_Int32__ToString((int32_t)&svtIda, 0LL);
  v17 = System_String__Concat_62698808((System_String_o *)StringLiteral_4508/*"CharaGraph/"*/, v16, 0LL);
  Instance = (DataManager_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !Instance )
    goto LABEL_32;
  if ( UserGameEntity__IsMale((UserGameEntity_o *)Instance, 0LL) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_ServantMaster___);
    if ( !Instance )
      goto LABEL_32;
    Instance = (DataManager_o *)DataMasterBase_object__object__int___TryGetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                  &entity,
                                  svtIda,
                                  (const MethodInfo_31FD818 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( !entity )
        goto LABEL_32;
      IntValue = EntityScriptUtil__GetIntValue(
                   (System_Collections_Generic_Dictionary_string__object__o *)entity[12].klass,
                   (System_String_o *)StringLiteral_21567/*"maleImageId"*/,
                   0,
                   0LL);
      if ( IntValue )
      {
        v18 = System_Int32__ToString((int32_t)&IntValue, 0LL);
        v17 = System_String__Concat_62698808((System_String_o *)StringLiteral_4508/*"CharaGraph/"*/, v18, 0LL);
      }
    }
  }
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( AssetManager__isExistAssetStorage(v17, 0LL) )
    return v17;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_32;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          &v24,
          svtIda,
          (const MethodInfo_31FD818 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
    return (System_String_o *)StringLiteral_4509/*"CharaGraph/100000"*/;
  Instance = (DataManager_o *)v24;
  if ( !v24 )
    goto LABEL_32;
  Instance = (DataManager_o *)ServantEntity__get_IsServantMaterialTd((ServantEntity_o *)v24, 0LL);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    return (System_String_o *)StringLiteral_4509/*"CharaGraph/100000"*/;
  if ( !v24 )
LABEL_32:
    sub_1BE4D28(Instance, v15);
  v20 = v24 + 2;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v28.fields.currentCryptoKey = v20;
  *(_QWORD *)&v28.fields.fakeValue = 0LL;
  v21 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v28, v19);
  v17 = System_String__Concat_62698808((System_String_o *)StringLiteral_4508/*"CharaGraph/"*/, v21, 0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__isExistAssetStorage(v17, 0LL) )
    return (System_String_o *)StringLiteral_4509/*"CharaGraph/100000"*/;
  return v17;
}


System_String_o *__fastcall UICharaGraphRender__GetAssetName_41785652(int32_t imageSvtId, const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_String_o *v11; // x0
  System_String_o *v12; // x19
  DataMasterBase_TMaster__TEntity__PKType__o *SelfUserGame; // x0
  __int64 v14; // x1
  System_String_o *v15; // x0
  const MethodInfo *v16; // x2
  Il2CppObject *v17; // x19
  System_String_o *v18; // x0
  int32_t IntValue; // [xsp+4h] [xbp-3Ch] BYREF
  Il2CppObject *v21; // [xsp+8h] [xbp-38h] BYREF
  Il2CppObject *entity; // [xsp+10h] [xbp-30h] BYREF
  int32_t key; // [xsp+1Ch] [xbp-24h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v24; // 0:x0.16

  key = imageSvtId;
  if ( (byte_4B680EB & 1) == 0 )
  {
    sub_1BE4ACC(&AssetManager_TypeInfo, method);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_ServantMaster___, v2);
    sub_1BE4ACC(&Method_DataManager_GetMaster_ServantMaster___, v3);
    sub_1BE4ACC(&DataManager_TypeInfo, v4);
    sub_1BE4ACC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v5);
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_1BE4ACC(&StringLiteral_21567/*"maleImageId"*/, v8);
    sub_1BE4ACC(&StringLiteral_4509/*"CharaGraph/100000"*/, v9);
    sub_1BE4ACC(&StringLiteral_4508/*"CharaGraph/"*/, v10);
    byte_4B680EB = 1;
  }
  v21 = 0LL;
  entity = 0LL;
  IntValue = 0;
  v11 = System_Int32__ToString((int32_t)&key, 0LL);
  v12 = System_String__Concat_62698808((System_String_o *)StringLiteral_4508/*"CharaGraph/"*/, v11, 0LL);
  SelfUserGame = (DataMasterBase_TMaster__TEntity__PKType__o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    goto LABEL_28;
  if ( UserGameEntity__IsMale((UserGameEntity_o *)SelfUserGame, 0LL) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    SelfUserGame = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_ServantMaster___);
    if ( !SelfUserGame )
      goto LABEL_28;
    SelfUserGame = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                   SelfUserGame,
                                                                   &entity,
                                                                   key,
                                                                   (const MethodInfo_31FD818 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)SelfUserGame & 1) != 0 )
    {
      if ( !entity )
        goto LABEL_28;
      IntValue = EntityScriptUtil__GetIntValue(
                   (System_Collections_Generic_Dictionary_string__object__o *)entity[12].klass,
                   (System_String_o *)StringLiteral_21567/*"maleImageId"*/,
                   0,
                   0LL);
      if ( IntValue )
      {
        v15 = System_Int32__ToString((int32_t)&IntValue, 0LL);
        v12 = System_String__Concat_62698808((System_String_o *)StringLiteral_4508/*"CharaGraph/"*/, v15, 0LL);
      }
    }
  }
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( AssetManager__isExistAssetStorage(v12, 0LL) )
    return v12;
  SelfUserGame = (DataMasterBase_TMaster__TEntity__PKType__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !SelfUserGame )
    goto LABEL_28;
  SelfUserGame = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMasterData_object_(
                                                                 (DataManager_o *)SelfUserGame,
                                                                 (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !SelfUserGame )
    goto LABEL_28;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          SelfUserGame,
          &v21,
          key,
          (const MethodInfo_31FD818 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
    return (System_String_o *)StringLiteral_4509/*"CharaGraph/100000"*/;
  SelfUserGame = (DataMasterBase_TMaster__TEntity__PKType__o *)v21;
  if ( !v21 )
    goto LABEL_28;
  SelfUserGame = (DataMasterBase_TMaster__TEntity__PKType__o *)ServantEntity__get_IsServantMaterialTd(
                                                                 (ServantEntity_o *)v21,
                                                                 0LL);
  if ( ((unsigned __int8)SelfUserGame & 1) == 0 )
    return (System_String_o *)StringLiteral_4509/*"CharaGraph/100000"*/;
  if ( !v21 )
LABEL_28:
    sub_1BE4D28(SelfUserGame, v14);
  v17 = v21 + 2;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v24.fields.currentCryptoKey = v17;
  *(_QWORD *)&v24.fields.fakeValue = 0LL;
  v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v24, v16);
  v12 = System_String__Concat_62698808((System_String_o *)StringLiteral_4508/*"CharaGraph/"*/, v18, 0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__isExistAssetStorage(v12, 0LL) )
    return (System_String_o *)StringLiteral_4509/*"CharaGraph/100000"*/;
  return v12;
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

  if ( (byte_4B680F2 & 1) == 0 )
  {
    sub_1BE4ACC(&UICharaGraphRender_TypeInfo, method);
    byte_4B680F2 = 1;
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
  Il2CppObject *Object_object__49525204; // x22
  UnityEngine_Texture2D_o *result; // x0
  System_String_o *v18; // x1

  v4 = this;
  if ( (byte_4B680F4 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_AssetData_GetObject_Texture2D____77158432, data);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v5);
    sub_1BE4ACC(&UICharaGraphRender_TypeInfo, v6);
    this = (UICharaGraphRender_o *)sub_1BE4ACC(&StringLiteral_16831/*"a"*/, v7);
    byte_4B680F4 = 1;
  }
  if ( v4->fields.baseKind )
  {
    v4->fields.textureImageLimitCount = 0;
    if ( data )
    {
      LastName = AssetData__get_LastName(data, 0LL);
      v9 = (System_String_o *)StringLiteral_16831/*"a"*/;
      goto LABEL_19;
    }
LABEL_20:
    sub_1BE4D28(this, data);
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
      sub_1BE4D30(this, data);
    p_changeGraphSuffix = (System_String_o **)&monitor[2 * imageLimitCount + 8];
    if ( !data )
      goto LABEL_20;
  }
  v13 = *p_changeGraphSuffix;
  v14 = AssetData__get_LastName(data, 0LL);
  v15 = System_String__Concat_62698808(v14, v13, 0LL);
  Object_object__49525204 = AssetData__GetObject_object__49525204(
                              data,
                              v15,
                              (const MethodInfo_2F3B1D4 *)Method_AssetData_GetObject_Texture2D____77158432);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Object_object__49525204, 0LL, 0LL) )
  {
    result = (UnityEngine_Texture2D_o *)Object_object__49525204;
    v4->fields.textureImageLimitCount = v4->fields.imageLimitCount;
    return result;
  }
  v4->fields.textureImageLimitCount = 0;
  LastName = AssetData__get_LastName(data, 0LL);
  v9 = v13;
LABEL_19:
  v18 = System_String__Concat_62698808(LastName, v9, 0LL);
  return (UnityEngine_Texture2D_o *)AssetData__GetObject_object__49525204(
                                      data,
                                      v18,
                                      (const MethodInfo_2F3B1D4 *)Method_AssetData_GetObject_Texture2D____77158432);
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

  if ( (byte_4B680F3 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_ReadOnlyCollection_Rect__get_Item__, method);
    sub_1BE4ACC(&UICharaGraphRender_TypeInfo, v3);
    byte_4B680F3 = 1;
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
      sub_1BE4D28(0LL, method);
    *(UnityEngine_Rect_o *)&m_XMin = System_Collections_ObjectModel_ReadOnlyCollection_Rect___get_Item(
                                       servantBodyRectTable,
                                       this->fields.textureImageLimitCount,
                                       (const MethodInfo_37DB1A8 *)Method_System_Collections_ObjectModel_ReadOnlyCollection_Rect__get_Item__);
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

  if ( (byte_4B680FA & 1) == 0 )
  {
    sub_1BE4ACC(&AtlasManager_TypeInfo, method);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_ServantClassMaster___, v3);
    sub_1BE4ACC(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__, v4);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    sub_1BE4ACC(&StringLiteral_16330/*"_"*/, v6);
    sub_1BE4ACC(&StringLiteral_18216/*"class"*/, v7);
    byte_4B680FA = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_ServantClassMaster___)) == 0LL )
  {
    sub_1BE4D28(Instance, v9);
  }
  result = (System_String_o *)DataMasterBase_object__object__int___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                this->fields.classId,
                                (const MethodInfo_31FD7C4 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  if ( result )
  {
    v11 = (int)result;
    frameType = this->fields.frameType;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AdjustFrameTypeForClass = AtlasManager__GetAdjustFrameTypeForClass(frameType, 0LL);
    v13 = System_Int32__ToString((int32_t)&AdjustFrameTypeForClass, 0LL);
    v14 = System_Int32__ToString(v11 + 44, 0LL);
    return System_String__Concat_62712072(
             (System_String_o *)StringLiteral_18216/*"class"*/,
             v13,
             (System_String_o *)StringLiteral_16330/*"_"*/,
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
  if ( (byte_4B680EC & 1) == 0 )
  {
    sub_1BE4ACC(&AssetManager_TypeInfo, method);
    sub_1BE4ACC(&StringLiteral_4699/*"CommandGraph/1000000"*/, v2);
    sub_1BE4ACC(&StringLiteral_4698/*"CommandGraph/"*/, v3);
    byte_4B680EC = 1;
  }
  v4 = System_Int32__ToString((int32_t)&v7, 0LL);
  v5 = System_String__Concat_62698808((System_String_o *)StringLiteral_4698/*"CommandGraph/"*/, v4, 0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( AssetManager__isExistAssetStorage(v5, 0LL) )
    return v5;
  else
    return (System_String_o *)StringLiteral_4699/*"CommandGraph/1000000"*/;
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
  if ( (byte_4B680ED & 1) == 0 )
  {
    sub_1BE4ACC(&AssetManager_TypeInfo, method);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_ServantMaster___, v2);
    sub_1BE4ACC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v3);
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    sub_1BE4ACC(&StringLiteral_4511/*"CharaGraph/CharaGraphEx/"*/, v6);
    sub_1BE4ACC(&StringLiteral_4509/*"CharaGraph/100000"*/, v7);
    sub_1BE4ACC(&StringLiteral_4508/*"CharaGraph/"*/, v8);
    byte_4B680ED = 1;
  }
  v17 = 0LL;
  v9 = System_Int32__ToString((int32_t)&key, 0LL);
  v10 = System_String__Concat_62698808((System_String_o *)StringLiteral_4511/*"CharaGraph/CharaGraphEx/"*/, v9, 0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( AssetManager__isExistAssetStorage(v10, 0LL) )
    return v10;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_19;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          (Il2CppObject **)&v17,
          key,
          (const MethodInfo_31FD818 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
    return (System_String_o *)StringLiteral_4509/*"CharaGraph/100000"*/;
  Instance = (DataManager_o *)v17;
  if ( !v17 )
    goto LABEL_19;
  Instance = (DataManager_o *)ServantEntity__get_IsServantMaterialTd(v17, 0LL);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    return (System_String_o *)StringLiteral_4509/*"CharaGraph/100000"*/;
  if ( !v17 )
LABEL_19:
    sub_1BE4D28(Instance, v12);
  p_baseSvtId = &v17->fields.baseSvtId;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v19.fields.currentCryptoKey = p_baseSvtId;
  *(_QWORD *)&v19.fields.fakeValue = 0LL;
  v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v19, v13);
  v10 = System_String__Concat_62698808((System_String_o *)StringLiteral_4508/*"CharaGraph/"*/, v15, 0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__isExistAssetStorage(v10, 0LL) )
    return (System_String_o *)StringLiteral_4509/*"CharaGraph/100000"*/;
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

  if ( (byte_4B680F5 & 1) == 0 )
  {
    sub_1BE4ACC(&UICharaGraphRender_TypeInfo, method);
    byte_4B680F5 = 1;
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
    sub_1BE4D28(v3, method);
  }
LABEL_10:
  if ( imageLimitCount >= SERVANT_NAME_TARGET_LIMIT_COUNT->max_length )
    sub_1BE4D30(v3, method);
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
  if ( (byte_4B680F6 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_AssetData_GetObject_Texture2D____77158432, data);
    sub_1BE4ACC(&StringLiteral_17211/*"b"*/, v5);
    this = (UICharaGraphRender_o *)sub_1BE4ACC(&StringLiteral_22297/*"name"*/, v6);
    byte_4B680F6 = 1;
  }
  if ( v4->fields.isEventJoinNameExist )
  {
    if ( data )
    {
      LastName = AssetData__get_LastName(data, 0LL);
      v8 = (System_String_o *)StringLiteral_22297/*"name"*/;
LABEL_6:
      v9 = System_String__Concat_62698808(LastName, v8, 0LL);
      return (UnityEngine_Texture2D_o *)AssetData__GetObject_object__49525204(
                                          data,
                                          v9,
                                          (const MethodInfo_2F3B1D4 *)Method_AssetData_GetObject_Texture2D____77158432);
    }
    goto LABEL_11;
  }
  if ( !v4->fields.isNameTrue )
  {
    if ( data )
    {
      LastName = AssetData__get_LastName(data, 0LL);
      v8 = (System_String_o *)StringLiteral_17211/*"b"*/;
      goto LABEL_6;
    }
LABEL_11:
    sub_1BE4D28(this, data);
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
  if ( (byte_4B680F8 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMasterData_ServantLimitMaster___, method);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    sub_1BE4ACC(&UICharaGraphRender_TypeInfo, v9);
    byte_4B680F8 = 1;
  }
  if ( !this->fields.baseKind )
  {
    entity = 0LL;
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_18;
    MasterData_object = DataManager__GetMasterData_object_(
                          Instance,
                          (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
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
      sub_1BE4D28(Instance, v11);
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
  if ( (byte_4B680F9 & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_23108/*"rarity"*/, method);
    sub_1BE4ACC(&StringLiteral_16330/*"_"*/, v3);
    byte_4B680F9 = 1;
  }
  v4 = System_Int32__ToString(v2 + 488, 0LL);
  v5 = System_Int32__ToString(v2 + 448, 0LL);
  return System_String__Concat_62712072(
           (System_String_o *)StringLiteral_23108/*"rarity"*/,
           v4,
           (System_String_o *)StringLiteral_16330/*"_"*/,
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

  if ( (byte_4B680F7 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_AssetData_GetObject_Texture2D____77158432, data);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_ServantLimitMaster___, v5);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    sub_1BE4ACC(&StringLiteral_16831/*"a"*/, v7);
    sub_1BE4ACC(&StringLiteral_22297/*"name"*/, v8);
    byte_4B680F7 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
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
      v15 = &StringLiteral_16831/*"a"*/;
      goto LABEL_12;
    }
LABEL_13:
    sub_1BE4D28(Instance, v10);
  }
  if ( !data )
    goto LABEL_13;
  v15 = &StringLiteral_22297/*"name"*/;
LABEL_12:
  LastName = AssetData__get_LastName(data, 0LL);
  v17 = System_String__Concat_62698808(LastName, (System_String_o *)*v15, 0LL);
  return (UnityEngine_Texture2D_o *)AssetData__GetObject_object__49525204(
                                      data,
                                      v17,
                                      (const MethodInfo_2F3B1D4 *)Method_AssetData_GetObject_Texture2D____77158432);
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
void __fastcall UICharaGraphRender__MoveAlpha_41791844(
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
  if ( (byte_4B680FB & 1) == 0 )
  {
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, callbackObject);
    byte_4B680FB = 1;
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
      UnityEngine_GameObject__SendMessage_70433460(callbackObject, callbackFunc, 0LL);
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
          sub_1BE4A70(
            (PartyOrganizationUtility_o *)&v16->fields.eventReceiver,
            (int64_t)callbackObject,
            v19,
            v20,
            v21,
            v22,
            v23,
            v24);
          v16->fields.callWhenFinished = callbackFunc;
          sub_1BE4A70(
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
        sub_1BE4D28(v17, v18);
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

  if ( (byte_4B680EE & 1) == 0 )
  {
    sub_1BE4ACC(&BalanceConfig_TypeInfo, *(_QWORD *)&svtId);
    sub_1BE4ACC(&ImageLimitCount_TypeInfo, v17);
    byte_4B680EE = 1;
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
  UICharaGraphRender__SetCharacter_41787260(this, changeNameType, saintGraphType, v20);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UICharaGraphRender__SetCharacter_41787260(
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
  __int64 v21; // x1
  DataManager_o *Instance; // x0
  __int64 rarity; // x1
  Il2CppObject *v24; // x21
  ServantLimitEntity_o *v25; // x24
  ServantExceedEntity_o *v26; // x0
  ServantExceedEntity_o *v27; // x23
  int32_t frameType; // w0
  int32_t v29; // w24
  int32_t exceedCount; // w8
  int32_t classId; // w24
  int32_t FrameId; // w0
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  int32_t v39; // w24
  UICharaGraphRender_c *v40; // x0
  UICharaGraphRender_c *v41; // x0
  __int64 v42; // x8
  DataManager_c **v43; // x8
  __int64 v44; // x8
  __int64 v45; // x9
  struct System_String_o *v46; // x1
  int32_t rarityIcon; // w23
  int32_t v48; // w0
  int v49; // w8
  int EventJoinNameExistSvtId; // w0
  int64_t v51; // x2
  int32_t v52; // w3
  System_String_o *v53; // x4
  BattleSetupInfo_o *v54; // x5
  FollowerInfo_o *v55; // x6
  PartyListViewItem_o *v56; // x7
  void *v57; // x1
  Il2CppObject *MasterData_object; // x0
  int32_t svtId; // w23
  int32_t imageLimitCount; // w25
  ServantLimitMaster_o *v61; // x24
  int32_t v62; // w0
  int32_t v63; // w23
  struct System_String_o *v64; // x0
  int64_t v65; // x2
  int32_t v66; // w3
  System_String_o *v67; // x4
  BattleSetupInfo_o *v68; // x5
  FollowerInfo_o *v69; // x6
  PartyListViewItem_o *v70; // x7
  unsigned int v71; // w8
  ServantLimitEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4B680F0 & 1) == 0 )
  {
    sub_1BE4ACC(&AtlasManager_TypeInfo, *(_QWORD *)&changeNameType);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_ServantExceedMaster___, v7);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_ServantLimitMaster___, v8);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_ServantLvDetailMaster___, v9);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_ServantMaster___, v10);
    sub_1BE4ACC(&Method_DataManager_GetMaster_CommonReleaseMaster___, v11);
    sub_1BE4ACC(&Method_DataManager_GetMaster_ServantLvDetailMaster___, v12);
    sub_1BE4ACC(&DataManager_TypeInfo, v13);
    sub_1BE4ACC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v14);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_int__string____ContainsKey__, v15);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_int__string____get_Item__, v16);
    sub_1BE4ACC(&ImageLimitCount_TypeInfo, v17);
    sub_1BE4ACC(&Rarity_TypeInfo, v18);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    sub_1BE4ACC(&UICharaGraphRender_TypeInfo, v20);
    sub_1BE4ACC(&StringLiteral_1/*""*/, v21);
    byte_4B680F0 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_69;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_69;
  v24 = DataMasterBase_object__object__int___GetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          this->fields.svtId,
          (const MethodInfo_31FD7C4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_69;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !Instance )
    goto LABEL_69;
  v25 = ServantLimitMaster__GetEntity(
          (ServantLimitMaster_o *)Instance,
          this->fields.svtId,
          this->fields.limitCount,
          0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_69;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_ServantExceedMaster___);
  if ( !v24 )
    goto LABEL_69;
  *(int32x2_t *)&this->fields.svtType = vrev64_s32((int32x2_t)v24[5].klass);
  if ( !v25 )
    goto LABEL_69;
  rarity = (unsigned int)v25->fields.rarity;
  this->fields.rarity = rarity;
  if ( !Instance )
    goto LABEL_69;
  v26 = ServantExceedMaster__GetEntity((ServantExceedMaster_o *)Instance, rarity, this->fields.exceedCount, 0LL);
  v27 = v26;
  if ( v26 )
  {
    frameType = v26->fields.frameType;
  }
  else
  {
    v29 = v25->fields.rarity;
    if ( !Rarity_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
    frameType = Rarity__getFrameTypeImage(v29, 0, 0LL);
  }
  exceedCount = this->fields.exceedCount;
  this->fields.frameType = frameType;
  if ( exceedCount >= 1 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_69;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_ServantLvDetailMaster___);
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
    v39 = FrameId;
    v40 = UICharaGraphRender_TypeInfo;
    if ( !UICharaGraphRender_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UICharaGraphRender_TypeInfo);
      v40 = UICharaGraphRender_TypeInfo;
    }
    Instance = (DataManager_o *)v40->static_fields->baseFrameTable;
    if ( !Instance )
      goto LABEL_69;
    if ( System_Collections_Generic_Dictionary_int__object___ContainsKey(
           (System_Collections_Generic_Dictionary_int__object__o *)Instance,
           v39,
           (const MethodInfo_3250A5C *)Method_System_Collections_Generic_Dictionary_int__string____ContainsKey__) )
    {
      v41 = UICharaGraphRender_TypeInfo;
      if ( !UICharaGraphRender_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UICharaGraphRender_TypeInfo);
        v41 = UICharaGraphRender_TypeInfo;
      }
      Instance = (DataManager_o *)v41->static_fields->baseFrameTable;
      if ( !Instance )
        goto LABEL_69;
      Instance = (DataManager_o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                    (System_Collections_Generic_Dictionary_int__object__o *)Instance,
                                    v39,
                                    (const MethodInfo_32507C8 *)Method_System_Collections_Generic_Dictionary_int__string____get_Item__);
      if ( !Instance )
        goto LABEL_69;
      v42 = this->fields.frameType;
      if ( (unsigned int)v42 < LODWORD(Instance->fields.m_CancellationTokenSource) )
      {
        v43 = &Instance->klass + v42;
        goto LABEL_38;
      }
LABEL_70:
      sub_1BE4D30(Instance, rarity);
    }
  }
  Instance = (DataManager_o *)UICharaGraphRender_TypeInfo;
  if ( !UICharaGraphRender_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICharaGraphRender_TypeInfo);
    Instance = (DataManager_o *)UICharaGraphRender_TypeInfo;
  }
  v44 = *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 112LL);
  if ( !v44 )
    goto LABEL_69;
  v45 = this->fields.frameType;
  if ( (unsigned int)v45 >= *(_DWORD *)(v44 + 24) )
    goto LABEL_70;
  v43 = (DataManager_c **)(v44 + 8 * v45);
LABEL_38:
  v46 = (struct System_String_o *)v43[4];
  this->fields.frameName = v46;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.frameName, (int64_t)v46, v33, v34, v35, v36, v37, v38);
  if ( this->fields.exceedCount < 1 )
  {
    v48 = 0;
  }
  else
  {
    if ( v27 )
      rarityIcon = v27->fields.rarityIcon;
    else
      rarityIcon = 1;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_ServantLvDetailMaster___);
    if ( !Instance )
      goto LABEL_69;
    v48 = ServantLvDetailMaster__GetRarityIcon(
            (ServantLvDetailMaster_o *)Instance,
            this->fields.rarity,
            this->fields.lv,
            rarityIcon,
            0LL);
  }
  this->fields.exceedType = v48;
  if ( ServantEntity__get_IsCombineMaterial((ServantEntity_o *)v24, 0LL) )
    v49 = -1;
  else
    v49 = ServantEntity__get_IsServantMaterialTd((ServantEntity_o *)v24, 0LL) << 31 >> 31;
  this->fields.atk = v49;
  this->fields.hp = v49;
  *(_QWORD *)&this->fields.adjustAtk = 0LL;
  this->fields.realNameCheck = changeNameType;
  this->fields.saintGraphType = saintGraphType;
  this->fields.isEventJoinNameExist = 0;
  EventJoinNameExistSvtId = ServantEntity__GetEventJoinNameExistSvtId((ServantEntity_o *)v24, 0LL);
  if ( EventJoinNameExistSvtId >= 1 )
  {
    this->fields.imageSvtId = EventJoinNameExistSvtId;
    this->fields.isEventJoinNameExist = 1;
  }
  this->fields.isChangeGraph = 0;
  v57 = StringLiteral_1/*""*/;
  this->fields.changeGraphSuffix = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.changeGraphSuffix, (int64_t)v57, v51, v52, v53, v54, v55, v56);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_69;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  svtId = this->fields.svtId;
  imageLimitCount = this->fields.imageLimitCount;
  v61 = (ServantLimitMaster_o *)MasterData_object;
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  Instance = (DataManager_o *)ImageLimitCount__GetLimitCountByImageLimit(imageLimitCount, 0LL);
  if ( !v61 )
    goto LABEL_69;
  if ( !ServantLimitMaster__TryGetEntity(v61, &entity, svtId, (int32_t)Instance, 0LL) )
    goto LABEL_65;
  Instance = (DataManager_o *)entity;
  if ( !entity )
    goto LABEL_69;
  v62 = ServantLimitEntity__GetChangeGraphCommonReleaseId(entity, -1, 0LL);
  if ( (v62 & 0x80000000) != 0 )
    goto LABEL_65;
  v63 = v62;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  if ( !Instance )
    goto LABEL_69;
  if ( !CommonReleaseMaster__IsOpen((CommonReleaseMaster_o *)Instance, v63, 0LL, 0, 0LL) )
    goto LABEL_65;
  this->fields.isChangeGraph = 1;
  Instance = (DataManager_o *)entity;
  if ( !entity )
LABEL_69:
    sub_1BE4D28(Instance, rarity);
  v64 = ServantLimitEntity__GetChangeGraphSuffix(entity, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  this->fields.changeGraphSuffix = v64;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.changeGraphSuffix, (int64_t)v64, v65, v66, v67, v68, v69, v70);
LABEL_65:
  if ( (unsigned int)(changeNameType - 1) >= 3 )
    LOBYTE(v71) = ServantEntity__IsNameTrue((ServantEntity_o *)v24, 0LL);
  else
    v71 = 0x100u >> (8 * (changeNameType - 1));
  this->fields.isNameTrue = v71;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UICharaGraphRender__SetCharacter_41788672(
        UICharaGraphRender_o *this,
        int32_t svtId,
        int32_t limitCount,
        int32_t imageLimitCount,
        int32_t exceedCount,
        int32_t lv,
        int32_t changeNameType,
        int32_t saintGraphType,
        const MethodInfo *method)
{
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  BalanceConfig_c *v20; // x0
  UICharaGraphRender_c *v21; // x0
  Il2CppObject *Instance; // x0
  __int64 v23; // x1
  BalanceConfig_c *v24; // x0
  int32_t v25; // w8
  int32_t imageLimitCounta; // [xsp+Ch] [xbp-54h] BYREF

  imageLimitCounta = imageLimitCount;
  if ( (byte_4B680EF & 1) == 0 )
  {
    sub_1BE4ACC(&BalanceConfig_TypeInfo, *(_QWORD *)&svtId);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, v17);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    sub_1BE4ACC(&UICharaGraphRender_TypeInfo, v19);
    byte_4B680EF = 1;
  }
  this->fields.imageSvtId = svtId;
  this->fields.svtId = svtId;
  if ( imageLimitCount >= 11 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___)) == 0LL )
    {
      sub_1BE4D28(Instance, v23);
    }
    ServantLimitAddMaster__getCostumeId(
      (ServantLimitAddMaster_o *)Instance,
      &this->fields.imageSvtId,
      &imageLimitCounta,
      0LL);
  }
  else
  {
    v20 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v20 = BalanceConfig_TypeInfo;
    }
    if ( v20->static_fields->OtherImageLimitCount == imageLimitCount )
    {
      v21 = UICharaGraphRender_TypeInfo;
      if ( !UICharaGraphRender_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UICharaGraphRender_TypeInfo);
        v21 = UICharaGraphRender_TypeInfo;
      }
      imageLimitCounta = v21->static_fields->OTHER_IMAGE_LIMIT_COUNT;
    }
  }
  v24 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v24 = BalanceConfig_TypeInfo;
  }
  if ( v24->static_fields->ServantLimitMax < limitCount )
  {
    limitCount = v24->static_fields->ServantLimitMax;
    if ( !v24->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v24);
      limitCount = BalanceConfig_TypeInfo->static_fields->ServantLimitMax;
    }
  }
  this->fields.limitCount = limitCount;
  v25 = imageLimitCounta;
  this->fields.exceedCount = exceedCount;
  this->fields.imageLimitCount = v25;
  this->fields.lv = lv;
  UICharaGraphRender__SetCharacter_41787260(
    this,
    changeNameType,
    saintGraphType,
    *(const MethodInfo **)&imageLimitCount);
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

  if ( (byte_4B680F1 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMasterData_CommandCodeMaster___, *(_QWORD *)&commandCodeId);
    sub_1BE4ACC(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__, v5);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    sub_1BE4ACC(&UICharaGraphRender_TypeInfo, v7);
    byte_4B680F1 = 1;
  }
  this->fields.commandCodeId = commandCodeId;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_CommandCodeMaster___);
  if ( !Instance )
    goto LABEL_11;
  Instance = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               this->fields.commandCodeId,
               (const MethodInfo_31FD7C4 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
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
  v17 = *(_QWORD *)(*((_QWORD *)Instance + 23) + 128LL);
  if ( !v17 )
LABEL_11:
    sub_1BE4D28(Instance, v9);
  if ( (unsigned int)rarity >= *(_DWORD *)(v17 + 24) )
    sub_1BE4D30(Instance, v9);
  v18 = *(struct System_String_o **)(v17 + 8LL * rarity + 32);
  this->fields.frameName = v18;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.frameName, (int64_t)v18, v10, v11, v12, v13, v14, v15);
  *(_OWORD *)&this->fields.atk = xmmword_BE20B0;
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
    sub_1BE4D28(0LL, v6);
  if ( UnityEngine_GameObject__get_layer(gameObject, 0LL) != layer )
  {
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    UICharaGraphRender__SetLayer_41792372(this, transform, layer, v8);
  }
}


void __fastcall UICharaGraphRender__SetLayer_41792372(
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
  if ( (byte_4B680FC & 1) == 0 )
  {
    sub_1BE4ACC(&System_IDisposable_TypeInfo, tf);
    sub_1BE4ACC(&System_Collections_IEnumerator_TypeInfo, v7);
    this = (UICharaGraphRender_o *)sub_1BE4ACC(&UnityEngine_Transform_TypeInfo, v8);
    byte_4B680FC = 1;
  }
  if ( !tf
    || (this = (UICharaGraphRender_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)tf, 0LL)) == 0LL )
  {
LABEL_33:
    sub_1BE4D28(this, tf);
  }
  UnityEngine_GameObject__set_layer((UnityEngine_GameObject_o *)this, layer, 0LL);
  Enumerator = UnityEngine_Transform__GetEnumerator(tf, 0LL);
  if ( !Enumerator )
    sub_1BE4D28(0LL, v9);
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
      p_method = sub_1C36AAC(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      v18 = sub_1C36AAC(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
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
        sub_1BE4FE8(v19);
        goto LABEL_33;
      }
    }
    UICharaGraphRender__SetLayer_41792372(v6, v19, layer, v20);
  }
  v22 = sub_1BE4C08(Enumerator, System_IDisposable_TypeInfo);
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
      v27 = sub_1C36AAC(v22, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v27)(v24, *(_QWORD *)(v27 + 8));
  }
}