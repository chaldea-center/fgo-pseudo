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
  int32_t v55; // w2
  int32_t v56; // w3
  UICharaGraphRender_c *v57; // x8
  System_Array_o *v58; // x0
  System_Array_o *v59; // x19
  struct UICharaGraphRender_StaticFields *v60; // x0
  int32_t v61; // w2
  int32_t v62; // w3
  int32_t v63; // w2
  int32_t v64; // w3
  __int64 v65; // x19
  int32_t v66; // w1
  int32_t v67; // w2
  int32_t v68; // w3
  int32_t v69; // w1
  int32_t v70; // w2
  int32_t v71; // w3
  int32_t v72; // w1
  int32_t v73; // w2
  int32_t v74; // w3
  int32_t v75; // w1
  int32_t v76; // w2
  int32_t v77; // w3
  int32_t v78; // w1
  int32_t v79; // w2
  int32_t v80; // w3
  int32_t v81; // w1
  struct UICharaGraphRender_StaticFields *v82; // x0
  int32_t v83; // w2
  int32_t v84; // w3
  int32_t v85; // w2
  int32_t v86; // w3
  __int64 v87; // x19
  int32_t v88; // w1
  int32_t v89; // w2
  int32_t v90; // w3
  int32_t v91; // w1
  int32_t v92; // w2
  int32_t v93; // w3
  int32_t v94; // w1
  int32_t v95; // w2
  int32_t v96; // w3
  int32_t v97; // w1
  int32_t v98; // w2
  int32_t v99; // w3
  int32_t v100; // w1
  int32_t v101; // w2
  int32_t v102; // w3
  int32_t v103; // w1
  int32_t v104; // w2
  int32_t v105; // w3
  int32_t v106; // w1
  int32_t v107; // w2
  int32_t v108; // w3
  int32_t v109; // w1
  struct UICharaGraphRender_StaticFields *v110; // x0
  int32_t v111; // w2
  int32_t v112; // w3
  __int64 v113; // x1
  __int64 v114; // x2
  System_Collections_Generic_Dictionary_int__object__o *v115; // x19
  int32_t v116; // w2
  int32_t v117; // w3
  __int64 v118; // x20
  int32_t v119; // w1
  int32_t v120; // w2
  int32_t v121; // w3
  int32_t v122; // w1
  int32_t v123; // w2
  int32_t v124; // w3
  int32_t v125; // w1
  int32_t v126; // w2
  int32_t v127; // w3
  int32_t v128; // w1
  int32_t v129; // w2
  int32_t v130; // w3
  __int64 v131; // x20
  int32_t v132; // w1
  int32_t v133; // w2
  int32_t v134; // w3
  int32_t v135; // w1
  int32_t v136; // w2
  int32_t v137; // w3
  int32_t v138; // w1
  int32_t v139; // w2
  int32_t v140; // w3
  int32_t v141; // w1
  int32_t v142; // w2
  int32_t v143; // w3
  __int64 v144; // x20
  int32_t v145; // w1
  int32_t v146; // w2
  int32_t v147; // w3
  int32_t v148; // w1
  int32_t v149; // w2
  int32_t v150; // w3
  int32_t v151; // w1
  int32_t v152; // w2
  int32_t v153; // w3
  int32_t v154; // w1
  int32_t v155; // w2
  int32_t v156; // w3
  __int64 v157; // x20
  int32_t v158; // w1
  int32_t v159; // w2
  int32_t v160; // w3
  int32_t v161; // w1
  int32_t v162; // w2
  int32_t v163; // w3
  int32_t v164; // w1
  int32_t v165; // w2
  int32_t v166; // w3
  int32_t v167; // w1
  struct UICharaGraphRender_StaticFields *v168; // x0
  int32_t v169; // w2
  int32_t v170; // w3
  int32_t v171; // w2
  int32_t v172; // w3
  __int64 v173; // x19
  int32_t v174; // w1
  int32_t v175; // w2
  int32_t v176; // w3
  int32_t v177; // w1
  int32_t v178; // w2
  int32_t v179; // w3
  int32_t v180; // w1
  int32_t v181; // w2
  int32_t v182; // w3
  int32_t v183; // w1
  int32_t v184; // w2
  int32_t v185; // w3
  int32_t v186; // w1
  int32_t v187; // w2
  int32_t v188; // w3
  int32_t v189; // w1
  struct UICharaGraphRender_StaticFields *v190; // x0
  int32_t v191; // w2
  int32_t v192; // w3
  System_RuntimeFieldHandle_o v193; // 0:w1.4

  if ( (byte_49FD8B4 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Array_AsReadOnly_Rect___, v1);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__string____Add__, v2);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__string_____ctor__, v3);
    sub_1B640C8(&System_Collections_Generic_Dictionary_int__string____TypeInfo, v4);
    sub_1B640C8(&int___TypeInfo, v5);
    sub_1B640C8(&UnityEngine_Rect___TypeInfo, v6);
    sub_1B640C8(&string___TypeInfo, v7);
    sub_1B640C8(
      &Field__PrivateImplementationDetails__F239810D17032E35383496434C64894FFE055A198BA7CFB907D73BAF26A70F0C,
      v8);
    sub_1B640C8(&UICharaGraphRender_TypeInfo, v9);
    sub_1B640C8(&StringLiteral_19536/*"frame5"*/, v10);
    sub_1B640C8(&StringLiteral_16551/*"a"*/, v11);
    sub_1B640C8(&StringLiteral_19537/*"frame6"*/, v12);
    sub_1B640C8(&StringLiteral_19538/*"frame7"*/, v13);
    sub_1B640C8(&StringLiteral_19534/*"frame37"*/, v14);
    sub_1B640C8(&StringLiteral_16929/*"b"*/, v15);
    sub_1B640C8(&StringLiteral_17615/*"c"*/, v16);
    sub_1B640C8(&StringLiteral_19531/*"frame20"*/, v17);
    sub_1B640C8(&StringLiteral_19533/*"frame36"*/, v18);
    sub_1B640C8(&StringLiteral_19532/*"frame3"*/, v19);
    sub_1B640C8(&StringLiteral_19528/*"frame1"*/, v20);
    sub_1B640C8(&StringLiteral_19527/*"frame0"*/, v21);
    sub_1B640C8(&StringLiteral_19529/*"frame17"*/, v22);
    sub_1B640C8(&StringLiteral_19530/*"frame2"*/, v23);
    sub_1B640C8(&StringLiteral_19535/*"frame4"*/, v24);
    byte_49FD8B4 = 1;
  }
  static_fields = UICharaGraphRender_TypeInfo->static_fields;
  *(_OWORD *)&static_fields->OTHER_IMAGE_LIMIT_COUNT = xmmword_BA2F70;
  *(_QWORD *)&static_fields->SERVANT_BODY_SIZE_Y = 0x1FE000002D2LL;
  *(_OWORD *)&static_fields->SERVANT_BODY_U = xmmword_BA3C60;
  static_fields->SERVANT_EQUIP_BODY_SIZE_Y = 872;
  *(_OWORD *)&static_fields->SERVANT_EQUIP_BODY_U = xmmword_BA3E70;
  v26 = sub_1B64170(UnityEngine_Rect___TypeInfo, 12LL);
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
                (const MethodInfo_2F070F4 *)Method_System_Array_AsReadOnly_Rect___);
  v54 = UICharaGraphRender_TypeInfo->static_fields;
  v54->servantBodyRectTable = (struct System_Collections_ObjectModel_ReadOnlyCollection_Rect__o *)Only_Rect;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v54->servantBodyRectTable, (int32_t)Only_Rect, v55, v56);
  v57 = UICharaGraphRender_TypeInfo;
  UICharaGraphRender_TypeInfo->static_fields->servantEquipBodyRect = *(struct UnityEngine_Rect_o *)&UICharaGraphRender_TypeInfo->static_fields->SERVANT_EQUIP_BODY_U;
  *(_QWORD *)&v57->static_fields->SERVANT_NAME_UV_DIFF_Y = 0x43E800000LL;
  v58 = (System_Array_o *)sub_1B64170(int___TypeInfo, 4LL);
  v193.fields.value = Field__PrivateImplementationDetails__F239810D17032E35383496434C64894FFE055A198BA7CFB907D73BAF26A70F0C;
  v59 = v58;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_61282732(v58, v193, 0LL);
  v60 = UICharaGraphRender_TypeInfo->static_fields;
  v60->SERVANT_NAME_TARGET_LIMIT_COUNT = (struct System_Int32_array *)v59;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v60->SERVANT_NAME_TARGET_LIMIT_COUNT, (int32_t)v59, v61, v62);
  v26 = sub_1B64170(string___TypeInfo, 6LL);
  if ( !v26 )
    goto LABEL_62;
  v65 = v26;
  if ( !*(_DWORD *)(v26 + 24) )
    goto LABEL_61;
  v66 = StringLiteral_16551/*"a"*/;
  *(_QWORD *)(v26 + 32) = StringLiteral_16551/*"a"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v26 + 32), v66, v63, v64);
  if ( *(_DWORD *)(v65 + 24) <= 1u )
    goto LABEL_61;
  v69 = StringLiteral_16551/*"a"*/;
  *(_QWORD *)(v65 + 40) = StringLiteral_16551/*"a"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v65 + 40), v69, v67, v68);
  if ( *(_DWORD *)(v65 + 24) <= 2u )
    goto LABEL_61;
  v72 = StringLiteral_16929/*"b"*/;
  *(_QWORD *)(v65 + 48) = StringLiteral_16929/*"b"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v65 + 48), v72, v70, v71);
  if ( *(_DWORD *)(v65 + 24) <= 3u )
    goto LABEL_61;
  v75 = StringLiteral_16929/*"b"*/;
  *(_QWORD *)(v65 + 56) = StringLiteral_16929/*"b"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v65 + 56), v75, v73, v74);
  if ( *(_DWORD *)(v65 + 24) <= 4u )
    goto LABEL_61;
  v78 = (int)StringLiteral_17615/*"c"*/;
  *(_QWORD *)(v65 + 64) = StringLiteral_17615/*"c"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v65 + 64), v78, v76, v77);
  if ( *(_DWORD *)(v65 + 24) <= 5u )
    goto LABEL_61;
  v81 = (int)StringLiteral_17615/*"c"*/;
  *(_QWORD *)(v65 + 72) = StringLiteral_17615/*"c"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v65 + 72), v81, v79, v80);
  v82 = UICharaGraphRender_TypeInfo->static_fields;
  v82->bodyTextureNameTable = (struct System_String_array *)v65;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v82->bodyTextureNameTable, v65, v83, v84);
  v26 = sub_1B64170(string___TypeInfo, 8LL);
  if ( !v26 )
    goto LABEL_62;
  v87 = v26;
  if ( !*(_DWORD *)(v26 + 24) )
    goto LABEL_61;
  v88 = StringLiteral_19527/*"frame0"*/;
  *(_QWORD *)(v26 + 32) = StringLiteral_19527/*"frame0"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v26 + 32), v88, v85, v86);
  if ( *(_DWORD *)(v87 + 24) <= 1u )
    goto LABEL_61;
  v91 = StringLiteral_19528/*"frame1"*/;
  *(_QWORD *)(v87 + 40) = StringLiteral_19528/*"frame1"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v87 + 40), v91, v89, v90);
  if ( *(_DWORD *)(v87 + 24) <= 2u )
    goto LABEL_61;
  v94 = StringLiteral_19530/*"frame2"*/;
  *(_QWORD *)(v87 + 48) = StringLiteral_19530/*"frame2"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v87 + 48), v94, v92, v93);
  if ( *(_DWORD *)(v87 + 24) <= 3u )
    goto LABEL_61;
  v97 = StringLiteral_19532/*"frame3"*/;
  *(_QWORD *)(v87 + 56) = StringLiteral_19532/*"frame3"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v87 + 56), v97, v95, v96);
  if ( *(_DWORD *)(v87 + 24) <= 4u )
    goto LABEL_61;
  v100 = StringLiteral_19535/*"frame4"*/;
  *(_QWORD *)(v87 + 64) = StringLiteral_19535/*"frame4"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v87 + 64), v100, v98, v99);
  if ( *(_DWORD *)(v87 + 24) <= 5u )
    goto LABEL_61;
  v103 = StringLiteral_19536/*"frame5"*/;
  *(_QWORD *)(v87 + 72) = StringLiteral_19536/*"frame5"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v87 + 72), v103, v101, v102);
  if ( *(_DWORD *)(v87 + 24) <= 6u )
    goto LABEL_61;
  v106 = StringLiteral_19537/*"frame6"*/;
  *(_QWORD *)(v87 + 80) = StringLiteral_19537/*"frame6"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v87 + 80), v106, v104, v105);
  if ( *(_DWORD *)(v87 + 24) <= 7u )
    goto LABEL_61;
  v109 = StringLiteral_19538/*"frame7"*/;
  *(_QWORD *)(v87 + 88) = StringLiteral_19538/*"frame7"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v87 + 88), v109, v107, v108);
  v110 = UICharaGraphRender_TypeInfo->static_fields;
  v110->baseFrameList = (struct System_String_array *)v87;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v110->baseFrameList, v87, v111, v112);
  v115 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B64314(
                                                                   System_Collections_Generic_Dictionary_int__string____TypeInfo,
                                                                   v113,
                                                                   v114);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v115,
    (const MethodInfo_3122FB0 *)Method_System_Collections_Generic_Dictionary_int__string_____ctor__);
  v26 = sub_1B64170(string___TypeInfo, 4LL);
  if ( !v26 )
    goto LABEL_62;
  v118 = v26;
  if ( !*(_DWORD *)(v26 + 24) )
    goto LABEL_61;
  v119 = StringLiteral_19529/*"frame17"*/;
  *(_QWORD *)(v26 + 32) = StringLiteral_19529/*"frame17"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v26 + 32), v119, v116, v117);
  if ( *(_DWORD *)(v118 + 24) <= 1u )
    goto LABEL_61;
  v122 = StringLiteral_19529/*"frame17"*/;
  *(_QWORD *)(v118 + 40) = StringLiteral_19529/*"frame17"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v118 + 40), v122, v120, v121);
  if ( *(_DWORD *)(v118 + 24) <= 2u )
    goto LABEL_61;
  v125 = StringLiteral_19529/*"frame17"*/;
  *(_QWORD *)(v118 + 48) = StringLiteral_19529/*"frame17"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v118 + 48), v125, v123, v124);
  if ( *(_DWORD *)(v118 + 24) <= 3u )
    goto LABEL_61;
  v128 = StringLiteral_19529/*"frame17"*/;
  *(_QWORD *)(v118 + 56) = StringLiteral_19529/*"frame17"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v118 + 56), v128, v126, v127);
  if ( !v115
    || (System_Collections_Generic_Dictionary_int__object___Add(
          v115,
          17,
          (Il2CppObject *)v118,
          (const MethodInfo_3123984 *)Method_System_Collections_Generic_Dictionary_int__string____Add__),
        (v26 = sub_1B64170(string___TypeInfo, 4LL)) == 0) )
  {
LABEL_62:
    sub_1B64324(v26);
  }
  v131 = v26;
  if ( !*(_DWORD *)(v26 + 24) )
    goto LABEL_61;
  v132 = StringLiteral_19531/*"frame20"*/;
  *(_QWORD *)(v26 + 32) = StringLiteral_19531/*"frame20"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v26 + 32), v132, v129, v130);
  if ( *(_DWORD *)(v131 + 24) <= 1u )
    goto LABEL_61;
  v135 = StringLiteral_19531/*"frame20"*/;
  *(_QWORD *)(v131 + 40) = StringLiteral_19531/*"frame20"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v131 + 40), v135, v133, v134);
  if ( *(_DWORD *)(v131 + 24) <= 2u )
    goto LABEL_61;
  v138 = StringLiteral_19531/*"frame20"*/;
  *(_QWORD *)(v131 + 48) = StringLiteral_19531/*"frame20"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v131 + 48), v138, v136, v137);
  if ( *(_DWORD *)(v131 + 24) <= 3u )
    goto LABEL_61;
  v141 = StringLiteral_19531/*"frame20"*/;
  *(_QWORD *)(v131 + 56) = StringLiteral_19531/*"frame20"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v131 + 56), v141, v139, v140);
  System_Collections_Generic_Dictionary_int__object___Add(
    v115,
    20,
    (Il2CppObject *)v131,
    (const MethodInfo_3123984 *)Method_System_Collections_Generic_Dictionary_int__string____Add__);
  v26 = sub_1B64170(string___TypeInfo, 4LL);
  if ( !v26 )
    goto LABEL_62;
  v144 = v26;
  if ( !*(_DWORD *)(v26 + 24) )
    goto LABEL_61;
  v145 = StringLiteral_19533/*"frame36"*/;
  *(_QWORD *)(v26 + 32) = StringLiteral_19533/*"frame36"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v26 + 32), v145, v142, v143);
  if ( *(_DWORD *)(v144 + 24) <= 1u )
    goto LABEL_61;
  v148 = StringLiteral_19533/*"frame36"*/;
  *(_QWORD *)(v144 + 40) = StringLiteral_19533/*"frame36"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v144 + 40), v148, v146, v147);
  if ( *(_DWORD *)(v144 + 24) <= 2u )
    goto LABEL_61;
  v151 = StringLiteral_19533/*"frame36"*/;
  *(_QWORD *)(v144 + 48) = StringLiteral_19533/*"frame36"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v144 + 48), v151, v149, v150);
  if ( *(_DWORD *)(v144 + 24) <= 3u )
    goto LABEL_61;
  v154 = StringLiteral_19533/*"frame36"*/;
  *(_QWORD *)(v144 + 56) = StringLiteral_19533/*"frame36"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v144 + 56), v154, v152, v153);
  System_Collections_Generic_Dictionary_int__object___Add(
    v115,
    36,
    (Il2CppObject *)v144,
    (const MethodInfo_3123984 *)Method_System_Collections_Generic_Dictionary_int__string____Add__);
  v26 = sub_1B64170(string___TypeInfo, 4LL);
  if ( !v26 )
    goto LABEL_62;
  v157 = v26;
  if ( !*(_DWORD *)(v26 + 24) )
    goto LABEL_61;
  v158 = StringLiteral_19534/*"frame37"*/;
  *(_QWORD *)(v26 + 32) = StringLiteral_19534/*"frame37"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v26 + 32), v158, v155, v156);
  if ( *(_DWORD *)(v157 + 24) <= 1u
    || (v161 = StringLiteral_19534/*"frame37"*/,
        *(_QWORD *)(v157 + 40) = StringLiteral_19534/*"frame37"*/,
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v157 + 40), v161, v159, v160),
        *(_DWORD *)(v157 + 24) <= 2u)
    || (v164 = StringLiteral_19534/*"frame37"*/,
        *(_QWORD *)(v157 + 48) = StringLiteral_19534/*"frame37"*/,
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v157 + 48), v164, v162, v163),
        *(_DWORD *)(v157 + 24) <= 3u) )
  {
LABEL_61:
    sub_1B6432C(v26, v27);
  }
  v167 = StringLiteral_19534/*"frame37"*/;
  *(_QWORD *)(v157 + 56) = StringLiteral_19534/*"frame37"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v157 + 56), v167, v165, v166);
  System_Collections_Generic_Dictionary_int__object___Add(
    v115,
    37,
    (Il2CppObject *)v157,
    (const MethodInfo_3123984 *)Method_System_Collections_Generic_Dictionary_int__string____Add__);
  v168 = UICharaGraphRender_TypeInfo->static_fields;
  v168->baseFrameTable = (struct System_Collections_Generic_Dictionary_int__string____o *)v115;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v168->baseFrameTable, (int32_t)v115, v169, v170);
  v26 = sub_1B64170(string___TypeInfo, 6LL);
  if ( !v26 )
    goto LABEL_62;
  v173 = v26;
  if ( !*(_DWORD *)(v26 + 24) )
    goto LABEL_61;
  v174 = StringLiteral_19527/*"frame0"*/;
  *(_QWORD *)(v26 + 32) = StringLiteral_19527/*"frame0"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v26 + 32), v174, v171, v172);
  if ( *(_DWORD *)(v173 + 24) <= 1u )
    goto LABEL_61;
  v177 = StringLiteral_19528/*"frame1"*/;
  *(_QWORD *)(v173 + 40) = StringLiteral_19528/*"frame1"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v173 + 40), v177, v175, v176);
  if ( *(_DWORD *)(v173 + 24) <= 2u )
    goto LABEL_61;
  v180 = StringLiteral_19528/*"frame1"*/;
  *(_QWORD *)(v173 + 48) = StringLiteral_19528/*"frame1"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v173 + 48), v180, v178, v179);
  if ( *(_DWORD *)(v173 + 24) <= 3u )
    goto LABEL_61;
  v183 = StringLiteral_19530/*"frame2"*/;
  *(_QWORD *)(v173 + 56) = StringLiteral_19530/*"frame2"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v173 + 56), v183, v181, v182);
  if ( *(_DWORD *)(v173 + 24) <= 4u )
    goto LABEL_61;
  v186 = StringLiteral_19532/*"frame3"*/;
  *(_QWORD *)(v173 + 64) = StringLiteral_19532/*"frame3"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v173 + 64), v186, v184, v185);
  if ( *(_DWORD *)(v173 + 24) <= 5u )
    goto LABEL_61;
  v189 = StringLiteral_19532/*"frame3"*/;
  *(_QWORD *)(v173 + 72) = StringLiteral_19532/*"frame3"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v173 + 72), v189, v187, v188);
  v190 = UICharaGraphRender_TypeInfo->static_fields;
  v190->commandCodeBaseFrameList = (struct System_String_array *)v173;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v190->commandCodeBaseFrameList, v173, v191, v192);
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
  System_String_o *v15; // x0
  System_String_o *v16; // x19
  System_String_o *v17; // x0
  const MethodInfo *v18; // x2
  Il2CppObject *v19; // x19
  System_String_o *v20; // x0
  int32_t IntValue; // [xsp+Ch] [xbp-44h] BYREF
  Il2CppObject *v23; // [xsp+10h] [xbp-40h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-38h] BYREF
  int32_t imageLimitCounta; // [xsp+28h] [xbp-28h] BYREF
  int32_t svtIda; // [xsp+2Ch] [xbp-24h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v27; // 0:x0.16

  imageLimitCounta = imageLimitCount;
  svtIda = svtId;
  if ( (byte_49FD8A1 & 1) == 0 )
  {
    sub_1B640C8(&AssetManager_TypeInfo, *(_QWORD *)&imageLimitCount);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, v4);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantMaster___, v5);
    sub_1B640C8(&Method_DataManager_GetMaster_ServantMaster___, v6);
    sub_1B640C8(&DataManager_TypeInfo, v7);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v8);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    sub_1B640C8(&StringLiteral_21179/*"maleImageId"*/, v11);
    sub_1B640C8(&StringLiteral_4408/*"CharaGraph/100000"*/, v12);
    sub_1B640C8(&StringLiteral_4407/*"CharaGraph/"*/, v13);
    byte_49FD8A1 = 1;
  }
  v23 = 0LL;
  entity = 0LL;
  IntValue = 0;
  if ( imageLimitCount >= 11 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_32;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    if ( !Instance )
      goto LABEL_32;
    ServantLimitAddMaster__getCostumeId((ServantLimitAddMaster_o *)Instance, &svtIda, &imageLimitCounta, 0LL);
  }
  v15 = System_Int32__ToString((int32_t)&svtIda, 0LL);
  v16 = System_String__Concat_61375396((System_String_o *)StringLiteral_4407/*"CharaGraph/"*/, v15, 0LL);
  Instance = (DataManager_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !Instance )
    goto LABEL_32;
  if ( UserGameEntity__IsMale((UserGameEntity_o *)Instance, 0LL) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ServantMaster___);
    if ( !Instance )
      goto LABEL_32;
    Instance = (DataManager_o *)DataMasterBase_object__object__int___TryGetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                  &entity,
                                  svtIda,
                                  (const MethodInfo_30D3EF8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( !entity )
        goto LABEL_32;
      IntValue = EntityScriptUtil__GetIntValue(
                   (System_Collections_Generic_Dictionary_string__object__o *)entity[12].klass,
                   (System_String_o *)StringLiteral_21179/*"maleImageId"*/,
                   0,
                   0LL);
      if ( IntValue )
      {
        v17 = System_Int32__ToString((int32_t)&IntValue, 0LL);
        v16 = System_String__Concat_61375396((System_String_o *)StringLiteral_4407/*"CharaGraph/"*/, v17, 0LL);
      }
    }
  }
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( AssetManager__isExistAssetStorage(v16, 0LL) )
    return v16;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_32;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          &v23,
          svtIda,
          (const MethodInfo_30D3EF8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
    return (System_String_o *)StringLiteral_4408/*"CharaGraph/100000"*/;
  Instance = (DataManager_o *)v23;
  if ( !v23 )
    goto LABEL_32;
  Instance = (DataManager_o *)ServantEntity__get_IsServantMaterialTd((ServantEntity_o *)v23, 0LL);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    return (System_String_o *)StringLiteral_4408/*"CharaGraph/100000"*/;
  if ( !v23 )
LABEL_32:
    sub_1B64324(Instance);
  v19 = v23 + 2;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v27.fields.currentCryptoKey = v19;
  *(_QWORD *)&v27.fields.fakeValue = 0LL;
  v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v27, v18);
  v16 = System_String__Concat_61375396((System_String_o *)StringLiteral_4407/*"CharaGraph/"*/, v20, 0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__isExistAssetStorage(v16, 0LL) )
    return (System_String_o *)StringLiteral_4408/*"CharaGraph/100000"*/;
  return v16;
}


System_String_o *__fastcall UICharaGraphRender__GetAssetName_40491196(int32_t imageSvtId, const MethodInfo *method)
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
  System_String_o *v14; // x0
  const MethodInfo *v15; // x2
  Il2CppObject *v16; // x19
  System_String_o *v17; // x0
  int32_t IntValue; // [xsp+4h] [xbp-3Ch] BYREF
  Il2CppObject *v20; // [xsp+8h] [xbp-38h] BYREF
  Il2CppObject *entity; // [xsp+10h] [xbp-30h] BYREF
  int32_t key; // [xsp+1Ch] [xbp-24h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v23; // 0:x0.16

  key = imageSvtId;
  if ( (byte_49FD8A2 & 1) == 0 )
  {
    sub_1B640C8(&AssetManager_TypeInfo, method);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantMaster___, v2);
    sub_1B640C8(&Method_DataManager_GetMaster_ServantMaster___, v3);
    sub_1B640C8(&DataManager_TypeInfo, v4);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v5);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_1B640C8(&StringLiteral_21179/*"maleImageId"*/, v8);
    sub_1B640C8(&StringLiteral_4408/*"CharaGraph/100000"*/, v9);
    sub_1B640C8(&StringLiteral_4407/*"CharaGraph/"*/, v10);
    byte_49FD8A2 = 1;
  }
  v20 = 0LL;
  entity = 0LL;
  IntValue = 0;
  v11 = System_Int32__ToString((int32_t)&key, 0LL);
  v12 = System_String__Concat_61375396((System_String_o *)StringLiteral_4407/*"CharaGraph/"*/, v11, 0LL);
  SelfUserGame = (DataMasterBase_TMaster__TEntity__PKType__o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    goto LABEL_28;
  if ( UserGameEntity__IsMale((UserGameEntity_o *)SelfUserGame, 0LL) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    SelfUserGame = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ServantMaster___);
    if ( !SelfUserGame )
      goto LABEL_28;
    SelfUserGame = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                   SelfUserGame,
                                                                   &entity,
                                                                   key,
                                                                   (const MethodInfo_30D3EF8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)SelfUserGame & 1) != 0 )
    {
      if ( !entity )
        goto LABEL_28;
      IntValue = EntityScriptUtil__GetIntValue(
                   (System_Collections_Generic_Dictionary_string__object__o *)entity[12].klass,
                   (System_String_o *)StringLiteral_21179/*"maleImageId"*/,
                   0,
                   0LL);
      if ( IntValue )
      {
        v14 = System_Int32__ToString((int32_t)&IntValue, 0LL);
        v12 = System_String__Concat_61375396((System_String_o *)StringLiteral_4407/*"CharaGraph/"*/, v14, 0LL);
      }
    }
  }
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( AssetManager__isExistAssetStorage(v12, 0LL) )
    return v12;
  SelfUserGame = (DataMasterBase_TMaster__TEntity__PKType__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !SelfUserGame )
    goto LABEL_28;
  SelfUserGame = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMasterData_object_(
                                                                 (DataManager_o *)SelfUserGame,
                                                                 (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !SelfUserGame )
    goto LABEL_28;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          SelfUserGame,
          &v20,
          key,
          (const MethodInfo_30D3EF8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
    return (System_String_o *)StringLiteral_4408/*"CharaGraph/100000"*/;
  SelfUserGame = (DataMasterBase_TMaster__TEntity__PKType__o *)v20;
  if ( !v20 )
    goto LABEL_28;
  SelfUserGame = (DataMasterBase_TMaster__TEntity__PKType__o *)ServantEntity__get_IsServantMaterialTd(
                                                                 (ServantEntity_o *)v20,
                                                                 0LL);
  if ( ((unsigned __int8)SelfUserGame & 1) == 0 )
    return (System_String_o *)StringLiteral_4408/*"CharaGraph/100000"*/;
  if ( !v20 )
LABEL_28:
    sub_1B64324(SelfUserGame);
  v16 = v20 + 2;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v23.fields.currentCryptoKey = v16;
  *(_QWORD *)&v23.fields.fakeValue = 0LL;
  v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v23, v15);
  v12 = System_String__Concat_61375396((System_String_o *)StringLiteral_4407/*"CharaGraph/"*/, v17, 0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__isExistAssetStorage(v12, 0LL) )
    return (System_String_o *)StringLiteral_4408/*"CharaGraph/100000"*/;
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

  if ( (byte_49FD8A9 & 1) == 0 )
  {
    sub_1B640C8(&UICharaGraphRender_TypeInfo, method);
    byte_49FD8A9 = 1;
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
  Il2CppObject *Object_object__48347676; // x22
  UnityEngine_Texture2D_o *result; // x0
  System_String_o *v18; // x1

  v4 = this;
  if ( (byte_49FD8AB & 1) == 0 )
  {
    sub_1B640C8(&Method_AssetData_GetObject_Texture2D____75705984, data);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v5);
    sub_1B640C8(&UICharaGraphRender_TypeInfo, v6);
    this = (UICharaGraphRender_o *)sub_1B640C8(&StringLiteral_16551/*"a"*/, v7);
    byte_49FD8AB = 1;
  }
  if ( v4->fields.baseKind )
  {
    v4->fields.textureImageLimitCount = 0;
    if ( data )
    {
      LastName = AssetData__get_LastName(data, 0LL);
      v9 = (System_String_o *)StringLiteral_16551/*"a"*/;
      goto LABEL_19;
    }
LABEL_20:
    sub_1B64324(this);
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
      sub_1B6432C(this, data);
    p_changeGraphSuffix = (System_String_o **)&monitor[2 * imageLimitCount + 8];
    if ( !data )
      goto LABEL_20;
  }
  v13 = *p_changeGraphSuffix;
  v14 = AssetData__get_LastName(data, 0LL);
  v15 = System_String__Concat_61375396(v14, v13, 0LL);
  Object_object__48347676 = AssetData__GetObject_object__48347676(
                              data,
                              v15,
                              (const MethodInfo_2E1BA1C *)Method_AssetData_GetObject_Texture2D____75705984);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Object_object__48347676, 0LL, 0LL) )
  {
    result = (UnityEngine_Texture2D_o *)Object_object__48347676;
    v4->fields.textureImageLimitCount = v4->fields.imageLimitCount;
    return result;
  }
  v4->fields.textureImageLimitCount = 0;
  LastName = AssetData__get_LastName(data, 0LL);
  v9 = v13;
LABEL_19:
  v18 = System_String__Concat_61375396(LastName, v9, 0LL);
  return (UnityEngine_Texture2D_o *)AssetData__GetObject_object__48347676(
                                      data,
                                      v18,
                                      (const MethodInfo_2E1BA1C *)Method_AssetData_GetObject_Texture2D____75705984);
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

  if ( (byte_49FD8AA & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_ReadOnlyCollection_Rect__get_Item__, method);
    sub_1B640C8(&UICharaGraphRender_TypeInfo, v3);
    byte_49FD8AA = 1;
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
      sub_1B64324(0LL);
    *(UnityEngine_Rect_o *)&m_XMin = System_Collections_ObjectModel_ReadOnlyCollection_Rect___get_Item(
                                       servantBodyRectTable,
                                       this->fields.textureImageLimitCount,
                                       (const MethodInfo_36744C4 *)Method_System_Collections_ObjectModel_ReadOnlyCollection_Rect__get_Item__);
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
  System_String_o *result; // x0
  int v10; // w20
  int32_t frameType; // w19
  System_String_o *v12; // x19
  System_String_o *v13; // x0
  int32_t AdjustFrameTypeForClass; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_49FD8B1 & 1) == 0 )
  {
    sub_1B640C8(&AtlasManager_TypeInfo, method);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantClassMaster___, v3);
    sub_1B640C8(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__, v4);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    sub_1B640C8(&StringLiteral_16054/*"_"*/, v6);
    sub_1B640C8(&StringLiteral_17914/*"class"*/, v7);
    byte_49FD8B1 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantClassMaster___)) == 0LL )
  {
    sub_1B64324(Instance);
  }
  result = (System_String_o *)DataMasterBase_object__object__int___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                this->fields.classId,
                                (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  if ( result )
  {
    v10 = (int)result;
    frameType = this->fields.frameType;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AdjustFrameTypeForClass = AtlasManager__GetAdjustFrameTypeForClass(frameType, 0LL);
    v12 = System_Int32__ToString((int32_t)&AdjustFrameTypeForClass, 0LL);
    v13 = System_Int32__ToString(v10 + 44, 0LL);
    return System_String__Concat_61388660(
             (System_String_o *)StringLiteral_17914/*"class"*/,
             v12,
             (System_String_o *)StringLiteral_16054/*"_"*/,
             v13,
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
  if ( (byte_49FD8A3 & 1) == 0 )
  {
    sub_1B640C8(&AssetManager_TypeInfo, method);
    sub_1B640C8(&StringLiteral_4598/*"CommandGraph/1000000"*/, v2);
    sub_1B640C8(&StringLiteral_4597/*"CommandGraph/"*/, v3);
    byte_49FD8A3 = 1;
  }
  v4 = System_Int32__ToString((int32_t)&v7, 0LL);
  v5 = System_String__Concat_61375396((System_String_o *)StringLiteral_4597/*"CommandGraph/"*/, v4, 0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( AssetManager__isExistAssetStorage(v5, 0LL) )
    return v5;
  else
    return (System_String_o *)StringLiteral_4598/*"CommandGraph/1000000"*/;
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
  const MethodInfo *v12; // x2
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *p_baseSvtId; // x19
  System_String_o *v14; // x0
  ServantEntity_o *v16; // [xsp+0h] [xbp-30h] BYREF
  int32_t key; // [xsp+Ch] [xbp-24h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  key = svtId;
  if ( (byte_49FD8A4 & 1) == 0 )
  {
    sub_1B640C8(&AssetManager_TypeInfo, method);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantMaster___, v2);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v3);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    sub_1B640C8(&StringLiteral_4410/*"CharaGraph/CharaGraphEx/"*/, v6);
    sub_1B640C8(&StringLiteral_4408/*"CharaGraph/100000"*/, v7);
    sub_1B640C8(&StringLiteral_4407/*"CharaGraph/"*/, v8);
    byte_49FD8A4 = 1;
  }
  v16 = 0LL;
  v9 = System_Int32__ToString((int32_t)&key, 0LL);
  v10 = System_String__Concat_61375396((System_String_o *)StringLiteral_4410/*"CharaGraph/CharaGraphEx/"*/, v9, 0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( AssetManager__isExistAssetStorage(v10, 0LL) )
    return v10;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_19;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          (Il2CppObject **)&v16,
          key,
          (const MethodInfo_30D3EF8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
    return (System_String_o *)StringLiteral_4408/*"CharaGraph/100000"*/;
  Instance = (DataManager_o *)v16;
  if ( !v16 )
    goto LABEL_19;
  Instance = (DataManager_o *)ServantEntity__get_IsServantMaterialTd(v16, 0LL);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    return (System_String_o *)StringLiteral_4408/*"CharaGraph/100000"*/;
  if ( !v16 )
LABEL_19:
    sub_1B64324(Instance);
  p_baseSvtId = &v16->fields.baseSvtId;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v18.fields.currentCryptoKey = p_baseSvtId;
  *(_QWORD *)&v18.fields.fakeValue = 0LL;
  v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v18, v12);
  v10 = System_String__Concat_61375396((System_String_o *)StringLiteral_4407/*"CharaGraph/"*/, v14, 0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__isExistAssetStorage(v10, 0LL) )
    return (System_String_o *)StringLiteral_4408/*"CharaGraph/100000"*/;
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

  if ( (byte_49FD8AC & 1) == 0 )
  {
    sub_1B640C8(&UICharaGraphRender_TypeInfo, method);
    byte_49FD8AC = 1;
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
    sub_1B64324(v3);
  }
LABEL_10:
  if ( imageLimitCount >= SERVANT_NAME_TARGET_LIMIT_COUNT->max_length )
    sub_1B6432C(v3, method);
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
  if ( (byte_49FD8AD & 1) == 0 )
  {
    sub_1B640C8(&Method_AssetData_GetObject_Texture2D____75705984, data);
    sub_1B640C8(&StringLiteral_16929/*"b"*/, v5);
    this = (UICharaGraphRender_o *)sub_1B640C8(&StringLiteral_21895/*"name"*/, v6);
    byte_49FD8AD = 1;
  }
  if ( v4->fields.isEventJoinNameExist )
  {
    if ( data )
    {
      LastName = AssetData__get_LastName(data, 0LL);
      v8 = (System_String_o *)StringLiteral_21895/*"name"*/;
LABEL_6:
      v9 = System_String__Concat_61375396(LastName, v8, 0LL);
      return (UnityEngine_Texture2D_o *)AssetData__GetObject_object__48347676(
                                          data,
                                          v9,
                                          (const MethodInfo_2E1BA1C *)Method_AssetData_GetObject_Texture2D____75705984);
    }
    goto LABEL_11;
  }
  if ( !v4->fields.isNameTrue )
  {
    if ( data )
    {
      LastName = AssetData__get_LastName(data, 0LL);
      v8 = (System_String_o *)StringLiteral_16929/*"b"*/;
      goto LABEL_6;
    }
LABEL_11:
    sub_1B64324(this);
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
  Il2CppObject *MasterData_object; // x0
  int32_t svtId; // w20
  ServantLimitMaster_o *v13; // x21
  const MethodInfo *v14; // x1
  int32_t SaintGraphNameIndex; // w0
  int v16; // w19
  UICharaGraphRender_c *v17; // x0
  struct UICharaGraphRender_StaticFields *static_fields; // x8
  float v19; // s0
  float v20; // s1
  float v21; // s2
  float v22; // s3
  ServantLimitEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF
  UnityEngine_Rect_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  m_Height = defaultValue.fields.m_Height;
  m_Width = defaultValue.fields.m_Width;
  m_YMin = defaultValue.fields.m_YMin;
  m_XMin = defaultValue.fields.m_XMin;
  if ( (byte_49FD8AF & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantLimitMaster___, method);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    sub_1B640C8(&UICharaGraphRender_TypeInfo, v9);
    byte_49FD8AF = 1;
  }
  if ( !this->fields.baseKind )
  {
    entity = 0LL;
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_18;
    MasterData_object = DataManager__GetMasterData_object_(
                          Instance,
                          (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantLimitMaster___);
    svtId = this->fields.svtId;
    v13 = (ServantLimitMaster_o *)MasterData_object;
    Instance = (DataManager_o *)UICharaGraphRender__GetNameTargetLimitCount(this, v14);
    if ( !v13 )
      goto LABEL_18;
    m_YMin = 0.0;
    if ( !ServantLimitMaster__TryGetEntity(v13, &entity, svtId, (int32_t)Instance, 0LL) )
      goto LABEL_17;
    Instance = (DataManager_o *)entity;
    if ( !entity )
      goto LABEL_18;
    if ( !ServantLimitEntity__IsNeedChangeSaintGraphName(entity, 0LL) )
      goto LABEL_17;
    Instance = (DataManager_o *)entity;
    if ( !entity )
LABEL_18:
      sub_1B64324(Instance);
    SaintGraphNameIndex = ServantLimitEntity__GetSaintGraphNameIndex(entity, -1, 0LL);
    if ( (SaintGraphNameIndex & 0x80000000) == 0 )
    {
      v16 = SaintGraphNameIndex;
      v17 = UICharaGraphRender_TypeInfo;
      if ( !UICharaGraphRender_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UICharaGraphRender_TypeInfo);
        v17 = UICharaGraphRender_TypeInfo;
      }
      static_fields = v17->static_fields;
      if ( v16 < static_fields->MAX_SERVANT_NAME_UV_DIFF_COUNT )
      {
        if ( !v17->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v17);
          static_fields = UICharaGraphRender_TypeInfo->static_fields;
        }
        m_YMin = static_fields->SERVANT_NAME_UV_DIFF_Y * (float)v16;
      }
    }
  }
LABEL_17:
  v19 = m_XMin;
  v20 = m_YMin;
  v21 = m_Width;
  v22 = m_Height;
  result.fields.m_Height = v22;
  result.fields.m_Width = v21;
  result.fields.m_YMin = v20;
  result.fields.m_XMin = v19;
  return result;
}


System_String_o *__fastcall UICharaGraphRender__GetRaritySprite(UICharaGraphRender_o *this, const MethodInfo *method)
{
  int v2; // w19
  __int64 v3; // x1
  System_String_o *v4; // x20
  System_String_o *v5; // x0

  v2 = (int)this;
  if ( (byte_49FD8B0 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_22693/*"rarity"*/, method);
    sub_1B640C8(&StringLiteral_16054/*"_"*/, v3);
    byte_49FD8B0 = 1;
  }
  v4 = System_Int32__ToString(v2 + 488, 0LL);
  v5 = System_Int32__ToString(v2 + 448, 0LL);
  return System_String__Concat_61388660(
           (System_String_o *)StringLiteral_22693/*"rarity"*/,
           v4,
           (System_String_o *)StringLiteral_16054/*"_"*/,
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
  Il2CppObject *MasterData_object; // x0
  int32_t svtId; // w21
  ServantLimitMaster_o *v12; // x22
  const MethodInfo *v13; // x1
  __int64 *v14; // x20
  System_String_o *LastName; // x0
  System_String_o *v16; // x0
  ServantLimitEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_49FD8AE & 1) == 0 )
  {
    sub_1B640C8(&Method_AssetData_GetObject_Texture2D____75705984, data);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantLimitMaster___, v5);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    sub_1B640C8(&StringLiteral_16551/*"a"*/, v7);
    sub_1B640C8(&StringLiteral_21895/*"name"*/, v8);
    byte_49FD8AE = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  svtId = this->fields.svtId;
  v12 = (ServantLimitMaster_o *)MasterData_object;
  Instance = (DataManager_o *)UICharaGraphRender__GetNameTargetLimitCount(this, v13);
  if ( !v12 )
    goto LABEL_13;
  Instance = (DataManager_o *)ServantLimitMaster__TryGetEntity(v12, &entity, svtId, (int32_t)Instance, 0LL);
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
      v14 = &StringLiteral_16551/*"a"*/;
      goto LABEL_12;
    }
LABEL_13:
    sub_1B64324(Instance);
  }
  if ( !data )
    goto LABEL_13;
  v14 = &StringLiteral_21895/*"name"*/;
LABEL_12:
  LastName = AssetData__get_LastName(data, 0LL);
  v16 = System_String__Concat_61375396(LastName, (System_String_o *)*v14, 0LL);
  return (UnityEngine_Texture2D_o *)AssetData__GetObject_object__48347676(
                                      data,
                                      v16,
                                      (const MethodInfo_2E1BA1C *)Method_AssetData_GetObject_Texture2D____75705984);
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
void __fastcall UICharaGraphRender__MoveAlpha_40497388(
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
  int32_t v18; // w2
  int32_t v19; // w3
  int32_t v20; // w2
  int32_t v21; // w3
  UnityEngine_Color_o v22; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4

  v11 = *(long double *)&alpha;
  if ( (byte_49FD8B2 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, callbackObject);
    byte_49FD8B2 = 1;
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
      UnityEngine_GameObject__SendMessage_69109196(callbackObject, callbackFunc, 0LL);
    }
  }
  else
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    v22.fields.r = *(float *)&v8;
    v22.fields.g = *(float *)&v7;
    v22.fields.b = *(float *)&v6;
    v22.fields.a = *(float *)&v11;
    v16 = TweenRendererColor__Begin(gameObject, duration, v22, v15);
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
          sub_1B6406C(
            (ServantStatusBattleListViewItem_o *)&v16->fields.eventReceiver,
            (int32_t)callbackObject,
            v18,
            v19);
          v16->fields.callWhenFinished = callbackFunc;
          sub_1B6406C(
            (ServantStatusBattleListViewItem_o *)&v16->fields.callWhenFinished,
            (int32_t)callbackFunc,
            v20,
            v21);
          return;
        }
LABEL_18:
        sub_1B64324(v17);
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

  if ( (byte_49FD8A5 & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, *(_QWORD *)&svtId);
    sub_1B640C8(&ImageLimitCount_TypeInfo, v17);
    byte_49FD8A5 = 1;
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
  UICharaGraphRender__SetCharacter_40492804(this, changeNameType, saintGraphType, v20);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UICharaGraphRender__SetCharacter_40492804(
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
  Il2CppObject *v23; // x21
  ServantLimitEntity_o *v24; // x24
  int32_t rarity; // w1
  ServantExceedEntity_o *v26; // x0
  ServantExceedEntity_o *v27; // x23
  int32_t frameType; // w0
  int32_t v29; // w24
  int32_t exceedCount; // w8
  int32_t classId; // w24
  int32_t FrameId; // w0
  __int64 v33; // x1
  int32_t v34; // w2
  int32_t v35; // w3
  int32_t v36; // w24
  UICharaGraphRender_c *v37; // x0
  UICharaGraphRender_c *v38; // x0
  __int64 v39; // x8
  DataManager_c **v40; // x8
  __int64 v41; // x8
  __int64 v42; // x9
  struct System_String_o *v43; // x1
  int32_t rarityIcon; // w23
  int32_t v45; // w0
  int v46; // w8
  int EventJoinNameExistSvtId; // w0
  int32_t v48; // w2
  int32_t v49; // w3
  int32_t v50; // w1
  Il2CppObject *MasterData_object; // x0
  int32_t svtId; // w23
  int32_t imageLimitCount; // w25
  ServantLimitMaster_o *v54; // x24
  int32_t v55; // w0
  int32_t v56; // w23
  struct System_String_o *v57; // x0
  int32_t v58; // w2
  int32_t v59; // w3
  unsigned int v60; // w8
  ServantLimitEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_49FD8A7 & 1) == 0 )
  {
    sub_1B640C8(&AtlasManager_TypeInfo, *(_QWORD *)&changeNameType);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantExceedMaster___, v7);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantLimitMaster___, v8);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantLvDetailMaster___, v9);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantMaster___, v10);
    sub_1B640C8(&Method_DataManager_GetMaster_CommonReleaseMaster___, v11);
    sub_1B640C8(&Method_DataManager_GetMaster_ServantLvDetailMaster___, v12);
    sub_1B640C8(&DataManager_TypeInfo, v13);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v14);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__string____ContainsKey__, v15);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__string____get_Item__, v16);
    sub_1B640C8(&ImageLimitCount_TypeInfo, v17);
    sub_1B640C8(&Rarity_TypeInfo, v18);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    sub_1B640C8(&UICharaGraphRender_TypeInfo, v20);
    sub_1B640C8(&StringLiteral_1/*""*/, v21);
    byte_49FD8A7 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_69;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_69;
  v23 = DataMasterBase_object__object__int___GetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          this->fields.svtId,
          (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_69;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !Instance )
    goto LABEL_69;
  v24 = ServantLimitMaster__GetEntity(
          (ServantLimitMaster_o *)Instance,
          this->fields.svtId,
          this->fields.limitCount,
          0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_69;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantExceedMaster___);
  if ( !v23 )
    goto LABEL_69;
  *(int32x2_t *)&this->fields.svtType = vrev64_s32((int32x2_t)v23[5].klass);
  if ( !v24 )
    goto LABEL_69;
  rarity = v24->fields.rarity;
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
    v29 = v24->fields.rarity;
    if ( !Rarity_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
    frameType = Rarity__getFrameTypeImage(v29, 0, 0LL);
  }
  exceedCount = this->fields.exceedCount;
  this->fields.frameType = frameType;
  if ( exceedCount >= 1 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_69;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantLvDetailMaster___);
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
    v36 = FrameId;
    v37 = UICharaGraphRender_TypeInfo;
    if ( !UICharaGraphRender_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UICharaGraphRender_TypeInfo);
      v37 = UICharaGraphRender_TypeInfo;
    }
    Instance = (DataManager_o *)v37->static_fields->baseFrameTable;
    if ( !Instance )
      goto LABEL_69;
    if ( System_Collections_Generic_Dictionary_int__object___ContainsKey(
           (System_Collections_Generic_Dictionary_int__object__o *)Instance,
           v36,
           (const MethodInfo_3123B78 *)Method_System_Collections_Generic_Dictionary_int__string____ContainsKey__) )
    {
      v38 = UICharaGraphRender_TypeInfo;
      if ( !UICharaGraphRender_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UICharaGraphRender_TypeInfo);
        v38 = UICharaGraphRender_TypeInfo;
      }
      Instance = (DataManager_o *)v38->static_fields->baseFrameTable;
      if ( !Instance )
        goto LABEL_69;
      Instance = (DataManager_o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                    (System_Collections_Generic_Dictionary_int__object__o *)Instance,
                                    v36,
                                    (const MethodInfo_31238E4 *)Method_System_Collections_Generic_Dictionary_int__string____get_Item__);
      if ( !Instance )
        goto LABEL_69;
      v39 = this->fields.frameType;
      if ( (unsigned int)v39 < LODWORD(Instance->fields.m_CancellationTokenSource) )
      {
        v40 = &Instance->klass + v39;
        goto LABEL_38;
      }
LABEL_70:
      sub_1B6432C(Instance, v33);
    }
  }
  Instance = (DataManager_o *)UICharaGraphRender_TypeInfo;
  if ( !UICharaGraphRender_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICharaGraphRender_TypeInfo);
    Instance = (DataManager_o *)UICharaGraphRender_TypeInfo;
  }
  v41 = *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 112LL);
  if ( !v41 )
    goto LABEL_69;
  v42 = this->fields.frameType;
  if ( (unsigned int)v42 >= *(_DWORD *)(v41 + 24) )
    goto LABEL_70;
  v40 = (DataManager_c **)(v41 + 8 * v42);
LABEL_38:
  v43 = (struct System_String_o *)v40[4];
  this->fields.frameName = v43;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.frameName, (int32_t)v43, v34, v35);
  if ( this->fields.exceedCount < 1 )
  {
    v45 = 0;
  }
  else
  {
    if ( v27 )
      rarityIcon = v27->fields.rarityIcon;
    else
      rarityIcon = 1;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ServantLvDetailMaster___);
    if ( !Instance )
      goto LABEL_69;
    v45 = ServantLvDetailMaster__GetRarityIcon(
            (ServantLvDetailMaster_o *)Instance,
            this->fields.rarity,
            this->fields.lv,
            rarityIcon,
            0LL);
  }
  this->fields.exceedType = v45;
  if ( ServantEntity__get_IsCombineMaterial((ServantEntity_o *)v23, 0LL) )
    v46 = -1;
  else
    v46 = ServantEntity__get_IsServantMaterialTd((ServantEntity_o *)v23, 0LL) << 31 >> 31;
  this->fields.atk = v46;
  this->fields.hp = v46;
  *(_QWORD *)&this->fields.adjustAtk = 0LL;
  this->fields.realNameCheck = changeNameType;
  this->fields.saintGraphType = saintGraphType;
  this->fields.isEventJoinNameExist = 0;
  EventJoinNameExistSvtId = ServantEntity__GetEventJoinNameExistSvtId((ServantEntity_o *)v23, 0LL);
  if ( EventJoinNameExistSvtId >= 1 )
  {
    this->fields.imageSvtId = EventJoinNameExistSvtId;
    this->fields.isEventJoinNameExist = 1;
  }
  this->fields.isChangeGraph = 0;
  v50 = (int)StringLiteral_1/*""*/;
  this->fields.changeGraphSuffix = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.changeGraphSuffix, v50, v48, v49);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_69;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  svtId = this->fields.svtId;
  imageLimitCount = this->fields.imageLimitCount;
  v54 = (ServantLimitMaster_o *)MasterData_object;
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  Instance = (DataManager_o *)ImageLimitCount__GetLimitCountByImageLimit(imageLimitCount, 0LL);
  if ( !v54 )
    goto LABEL_69;
  if ( !ServantLimitMaster__TryGetEntity(v54, &entity, svtId, (int32_t)Instance, 0LL) )
    goto LABEL_65;
  Instance = (DataManager_o *)entity;
  if ( !entity )
    goto LABEL_69;
  v55 = ServantLimitEntity__GetChangeGraphCommonReleaseId(entity, -1, 0LL);
  if ( (v55 & 0x80000000) != 0 )
    goto LABEL_65;
  v56 = v55;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  if ( !Instance )
    goto LABEL_69;
  if ( !CommonReleaseMaster__IsOpen((CommonReleaseMaster_o *)Instance, v56, 0LL, 0, 0LL) )
    goto LABEL_65;
  this->fields.isChangeGraph = 1;
  Instance = (DataManager_o *)entity;
  if ( !entity )
LABEL_69:
    sub_1B64324(Instance);
  v57 = ServantLimitEntity__GetChangeGraphSuffix(entity, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  this->fields.changeGraphSuffix = v57;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.changeGraphSuffix, (int32_t)v57, v58, v59);
LABEL_65:
  if ( (unsigned int)(changeNameType - 1) >= 3 )
    LOBYTE(v60) = ServantEntity__IsNameTrue((ServantEntity_o *)v23, 0LL);
  else
    v60 = 0x100u >> (8 * (changeNameType - 1));
  this->fields.isNameTrue = v60;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UICharaGraphRender__SetCharacter_40494216(
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
  BalanceConfig_c *v23; // x0
  int32_t v24; // w8
  int32_t imageLimitCounta; // [xsp+Ch] [xbp-54h] BYREF

  imageLimitCounta = imageLimitCount;
  if ( (byte_49FD8A6 & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, *(_QWORD *)&svtId);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, v17);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    sub_1B640C8(&UICharaGraphRender_TypeInfo, v19);
    byte_49FD8A6 = 1;
  }
  this->fields.imageSvtId = svtId;
  this->fields.svtId = svtId;
  if ( imageLimitCount >= 11 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantLimitAddMaster___)) == 0LL )
    {
      sub_1B64324(Instance);
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
  v23 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v23 = BalanceConfig_TypeInfo;
  }
  if ( v23->static_fields->ServantLimitMax < limitCount )
  {
    limitCount = v23->static_fields->ServantLimitMax;
    if ( !v23->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v23);
      limitCount = BalanceConfig_TypeInfo->static_fields->ServantLimitMax;
    }
  }
  this->fields.limitCount = limitCount;
  v24 = imageLimitCounta;
  this->fields.exceedCount = exceedCount;
  this->fields.imageLimitCount = v24;
  this->fields.lv = lv;
  UICharaGraphRender__SetCharacter_40492804(
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
  int32_t v10; // w2
  int32_t v11; // w3
  int32_t rarity; // w8
  __int64 v13; // x9
  struct System_String_o *v14; // x1

  if ( (byte_49FD8A8 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_CommandCodeMaster___, *(_QWORD *)&commandCodeId);
    sub_1B640C8(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__, v5);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    sub_1B640C8(&UICharaGraphRender_TypeInfo, v7);
    byte_49FD8A8 = 1;
  }
  this->fields.commandCodeId = commandCodeId;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_CommandCodeMaster___);
  if ( !Instance )
    goto LABEL_11;
  Instance = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               this->fields.commandCodeId,
               (const MethodInfo_30D3EA4 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
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
  v13 = *(_QWORD *)(*((_QWORD *)Instance + 23) + 128LL);
  if ( !v13 )
LABEL_11:
    sub_1B64324(Instance);
  if ( (unsigned int)rarity >= *(_DWORD *)(v13 + 24) )
    sub_1B6432C(Instance, v9);
  v14 = *(struct System_String_o **)(v13 + 8LL * rarity + 32);
  this->fields.frameName = v14;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.frameName, (int32_t)v14, v10, v11);
  *(_OWORD *)&this->fields.atk = xmmword_BA3190;
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
  UnityEngine_Transform_o *transform; // x1
  const MethodInfo *v7; // x3

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1B64324(0LL);
  if ( UnityEngine_GameObject__get_layer(gameObject, 0LL) != layer )
  {
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    UICharaGraphRender__SetLayer_40497916(this, transform, layer, v7);
  }
}


void __fastcall UICharaGraphRender__SetLayer_40497916(
        UICharaGraphRender_o *this,
        UnityEngine_Transform_o *tf,
        int32_t layer,
        const MethodInfo *method)
{
  UICharaGraphRender_o *v6; // x21
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_IEnumerator_o *Enumerator; // x19
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v11; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_IEnumerator_c *v14; // x8
  __int64 v15; // x9
  System_Collections_IEnumerator_c **v16; // x10
  __int64 v17; // x0
  UnityEngine_Transform_o *v18; // x0
  const MethodInfo *v19; // x3
  __int64 methodPtr_low; // x10
  __int64 v21; // x0
  __int64 v22; // x8
  __int64 v23; // x19
  __int64 v24; // x9
  int *v25; // x10
  __int64 v26; // x0

  v6 = this;
  if ( (byte_49FD8B3 & 1) == 0 )
  {
    sub_1B640C8(&System_IDisposable_TypeInfo, tf);
    sub_1B640C8(&System_Collections_IEnumerator_TypeInfo, v7);
    this = (UICharaGraphRender_o *)sub_1B640C8(&UnityEngine_Transform_TypeInfo, v8);
    byte_49FD8B3 = 1;
  }
  if ( !tf
    || (this = (UICharaGraphRender_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)tf, 0LL)) == 0LL )
  {
LABEL_33:
    sub_1B64324(this);
  }
  UnityEngine_GameObject__set_layer((UnityEngine_GameObject_o *)this, layer, 0LL);
  Enumerator = UnityEngine_Transform__GetEnumerator(tf, 0LL);
  if ( !Enumerator )
    sub_1B64324(0LL);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v11 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v11;
        p_offset += 4;
        if ( !v11 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_1BB60A8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v14 = Enumerator->klass;
    v15 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v16 = (System_Collections_IEnumerator_c **)&v14->_1.interfaceOffsets->offset;
      while ( *(v16 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v15;
        v16 += 2;
        if ( !v15 )
          goto LABEL_17;
      }
      v17 = (__int64)&v14->vtable[*(_DWORD *)v16 + 1].method;
    }
    else
    {
LABEL_17:
      v17 = sub_1BB60A8(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
    }
    v18 = (UnityEngine_Transform_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v17)(
                                       Enumerator,
                                       *(_QWORD *)(v17 + 8));
    if ( v18 )
    {
      methodPtr_low = LOBYTE(UnityEngine_Transform_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(v18->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (UnityEngine_Transform_c *)v18->klass->_2.typeHierarchy[methodPtr_low - 1] != UnityEngine_Transform_TypeInfo )
      {
        sub_1B645E4(v18);
        goto LABEL_33;
      }
    }
    UICharaGraphRender__SetLayer_40497916(v6, v18, layer, v19);
  }
  v21 = sub_1B64204(Enumerator, System_IDisposable_TypeInfo);
  if ( v21 )
  {
    v22 = *(_QWORD *)v21;
    v23 = v21;
    v24 = *(unsigned __int16 *)(*(_QWORD *)v21 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v21 + 302LL) )
    {
      v25 = (int *)(*(_QWORD *)(v22 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v25 - 1) != System_IDisposable_TypeInfo )
      {
        --v24;
        v25 += 4;
        if ( !v24 )
          goto LABEL_28;
      }
      v26 = v22 + 16LL * *v25 + 312;
    }
    else
    {
LABEL_28:
      v26 = sub_1BB60A8(v21, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v26)(v23, *(_QWORD *)(v26 + 8));
  }
}