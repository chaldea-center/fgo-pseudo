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
  const MethodInfo *v32; // x3
  UICharaGraphRender_c *v33; // x8
  System_Array_o *v34; // x0
  System_RuntimeFieldHandle_o v35; // x1
  System_Array_o *v36; // x19
  struct UICharaGraphRender_StaticFields *v37; // x0
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  __int64 v42; // x19
  int32_t v43; // w1
  int32_t v44; // w2
  const MethodInfo *v45; // x3
  int32_t v46; // w1
  int32_t v47; // w2
  const MethodInfo *v48; // x3
  int32_t v49; // w1
  int32_t v50; // w2
  const MethodInfo *v51; // x3
  int32_t v52; // w1
  int32_t v53; // w2
  const MethodInfo *v54; // x3
  int32_t v55; // w1
  int32_t v56; // w2
  const MethodInfo *v57; // x3
  int32_t v58; // w1
  struct UICharaGraphRender_StaticFields *v59; // x0
  int32_t v60; // w2
  const MethodInfo *v61; // x3
  int32_t v62; // w2
  const MethodInfo *v63; // x3
  __int64 v64; // x19
  int32_t v65; // w1
  int32_t v66; // w2
  const MethodInfo *v67; // x3
  int32_t v68; // w1
  int32_t v69; // w2
  const MethodInfo *v70; // x3
  int32_t v71; // w1
  int32_t v72; // w2
  const MethodInfo *v73; // x3
  int32_t v74; // w1
  int32_t v75; // w2
  const MethodInfo *v76; // x3
  int32_t v77; // w1
  int32_t v78; // w2
  const MethodInfo *v79; // x3
  int32_t v80; // w1
  int32_t v81; // w2
  const MethodInfo *v82; // x3
  int32_t v83; // w1
  int32_t v84; // w2
  const MethodInfo *v85; // x3
  int32_t v86; // w1
  struct UICharaGraphRender_StaticFields *v87; // x0
  int32_t v88; // w2
  const MethodInfo *v89; // x3
  int32_t v90; // w2
  const MethodInfo *v91; // x3
  __int64 v92; // x19
  int32_t v93; // w1
  int32_t v94; // w2
  const MethodInfo *v95; // x3
  int32_t v96; // w1
  int32_t v97; // w2
  const MethodInfo *v98; // x3
  int32_t v99; // w1
  int32_t v100; // w2
  const MethodInfo *v101; // x3
  int32_t v102; // w1
  int32_t v103; // w2
  const MethodInfo *v104; // x3
  int32_t v105; // w1
  int32_t v106; // w2
  const MethodInfo *v107; // x3
  int32_t v108; // w1
  int32_t v109; // w2
  const MethodInfo *v110; // x3
  int32_t v111; // w1
  int32_t v112; // w2
  const MethodInfo *v113; // x3
  int32_t v114; // w1
  struct UICharaGraphRender_StaticFields *v115; // x0
  int32_t v116; // w2
  const MethodInfo *v117; // x3
  int32_t v118; // w2
  const MethodInfo *v119; // x3
  __int64 v120; // x19
  int32_t v121; // w1
  int32_t v122; // w2
  const MethodInfo *v123; // x3
  int32_t v124; // w1
  int32_t v125; // w2
  const MethodInfo *v126; // x3
  int32_t v127; // w1
  int32_t v128; // w2
  const MethodInfo *v129; // x3
  int32_t v130; // w1
  int32_t v131; // w2
  const MethodInfo *v132; // x3
  int32_t v133; // w1
  int32_t v134; // w2
  const MethodInfo *v135; // x3
  int32_t v136; // w1
  struct UICharaGraphRender_StaticFields *v137; // x0
  int32_t v138; // w2
  const MethodInfo *v139; // x3

  if ( (byte_4CB7AE3 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Array_AsReadOnly_Rect___);
    sub_1C6BA08(&int___TypeInfo);
    sub_1C6BA08(&UnityEngine_Rect___TypeInfo);
    sub_1C6BA08(&string___TypeInfo);
    sub_1C6BA08(&Field__PrivateImplementationDetails__F239810D17032E35383496434C64894FFE055A198BA7CFB907D73BAF26A70F0C);
    sub_1C6BA08(&UICharaGraphRender_TypeInfo);
    sub_1C6BA08(&StringLiteral_19713/*"frame5"*/);
    sub_1C6BA08(&StringLiteral_19706/*"frame10000"*/);
    sub_1C6BA08(&StringLiteral_16625/*"a"*/);
    sub_1C6BA08(&StringLiteral_19714/*"frame6"*/);
    sub_1C6BA08(&StringLiteral_19715/*"frame7"*/);
    sub_1C6BA08(&StringLiteral_16982/*"b"*/);
    sub_1C6BA08(&StringLiteral_17694/*"c"*/);
    sub_1C6BA08(&StringLiteral_19707/*"frame10001"*/);
    sub_1C6BA08(&StringLiteral_19709/*"frame10003"*/);
    sub_1C6BA08(&StringLiteral_19711/*"frame3"*/);
    sub_1C6BA08(&StringLiteral_19705/*"frame1"*/);
    sub_1C6BA08(&StringLiteral_19708/*"frame10002"*/);
    sub_1C6BA08(&StringLiteral_19704/*"frame0"*/);
    sub_1C6BA08(&StringLiteral_19710/*"frame2"*/);
    sub_1C6BA08(&StringLiteral_19712/*"frame4"*/);
    byte_4CB7AE3 = 1;
  }
  static_fields = UICharaGraphRender_TypeInfo->static_fields;
  *(_OWORD *)&static_fields->OTHER_IMAGE_LIMIT_COUNT = xmmword_CEC440;
  *(_QWORD *)&static_fields->SERVANT_BODY_SIZE_Y = 0x1FE000002D2LL;
  *(_OWORD *)&static_fields->SERVANT_BODY_U = xmmword_CED180;
  static_fields->SERVANT_EQUIP_BODY_SIZE_Y = 872;
  *(_OWORD *)&static_fields->SERVANT_EQUIP_BODY_U = xmmword_CED3D0;
  v2 = sub_1C6BAB0(UnityEngine_Rect___TypeInfo, 12);
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
                (const MethodInfo_3204970 *)Method_System_Array_AsReadOnly_Rect___);
  v30 = UICharaGraphRender_TypeInfo->static_fields;
  v30->servantBodyRectTable = (struct System_Collections_ObjectModel_ReadOnlyCollection_Rect__o *)Only_Rect;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v30->servantBodyRectTable, (int32_t)Only_Rect, v31, v32);
  v33 = UICharaGraphRender_TypeInfo;
  UICharaGraphRender_TypeInfo->static_fields->servantEquipBodyRect = *(struct UnityEngine_Rect_o *)&UICharaGraphRender_TypeInfo->static_fields->SERVANT_EQUIP_BODY_U;
  *(_QWORD *)&v33->static_fields->SERVANT_NAME_UV_DIFF_Y = 0x43E800000LL;
  v34 = (System_Array_o *)sub_1C6BAB0(int___TypeInfo, 4);
  v35.fields.value = Field__PrivateImplementationDetails__F239810D17032E35383496434C64894FFE055A198BA7CFB907D73BAF26A70F0C;
  v36 = v34;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_64666016(v34, v35, 0);
  v37 = UICharaGraphRender_TypeInfo->static_fields;
  v37->SERVANT_NAME_TARGET_LIMIT_COUNT = (struct System_Int32_array *)v36;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v37->SERVANT_NAME_TARGET_LIMIT_COUNT, (int32_t)v36, v38, v39);
  v2 = sub_1C6BAB0(string___TypeInfo, 6);
  if ( !v2 )
    goto LABEL_50;
  v42 = v2;
  if ( !*(_DWORD *)(v2 + 24) )
    goto LABEL_49;
  v43 = StringLiteral_16625/*"a"*/;
  *(_QWORD *)(v2 + 32) = StringLiteral_16625/*"a"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v2 + 32), v43, v40, v41);
  if ( *(_DWORD *)(v42 + 24) <= 1u )
    goto LABEL_49;
  v46 = StringLiteral_16625/*"a"*/;
  *(_QWORD *)(v42 + 40) = StringLiteral_16625/*"a"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v42 + 40), v46, v44, v45);
  if ( *(_DWORD *)(v42 + 24) <= 2u )
    goto LABEL_49;
  v49 = StringLiteral_16982/*"b"*/;
  *(_QWORD *)(v42 + 48) = StringLiteral_16982/*"b"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v42 + 48), v49, v47, v48);
  if ( *(_DWORD *)(v42 + 24) <= 3u )
    goto LABEL_49;
  v52 = StringLiteral_16982/*"b"*/;
  *(_QWORD *)(v42 + 56) = StringLiteral_16982/*"b"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v42 + 56), v52, v50, v51);
  if ( *(_DWORD *)(v42 + 24) <= 4u )
    goto LABEL_49;
  v55 = (int)StringLiteral_17694/*"c"*/;
  *(_QWORD *)(v42 + 64) = StringLiteral_17694/*"c"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v42 + 64), v55, v53, v54);
  if ( *(_DWORD *)(v42 + 24) <= 5u )
    goto LABEL_49;
  v58 = (int)StringLiteral_17694/*"c"*/;
  *(_QWORD *)(v42 + 72) = StringLiteral_17694/*"c"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v42 + 72), v58, v56, v57);
  v59 = UICharaGraphRender_TypeInfo->static_fields;
  v59->bodyTextureNameTable = (struct System_String_array *)v42;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v59->bodyTextureNameTable, v42, v60, v61);
  v2 = sub_1C6BAB0(string___TypeInfo, 8);
  if ( !v2 )
    goto LABEL_50;
  v64 = v2;
  if ( !*(_DWORD *)(v2 + 24) )
    goto LABEL_49;
  v65 = StringLiteral_19704/*"frame0"*/;
  *(_QWORD *)(v2 + 32) = StringLiteral_19704/*"frame0"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v2 + 32), v65, v62, v63);
  if ( *(_DWORD *)(v64 + 24) <= 1u )
    goto LABEL_49;
  v68 = StringLiteral_19705/*"frame1"*/;
  *(_QWORD *)(v64 + 40) = StringLiteral_19705/*"frame1"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v64 + 40), v68, v66, v67);
  if ( *(_DWORD *)(v64 + 24) <= 2u )
    goto LABEL_49;
  v71 = StringLiteral_19710/*"frame2"*/;
  *(_QWORD *)(v64 + 48) = StringLiteral_19710/*"frame2"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v64 + 48), v71, v69, v70);
  if ( *(_DWORD *)(v64 + 24) <= 3u )
    goto LABEL_49;
  v74 = StringLiteral_19711/*"frame3"*/;
  *(_QWORD *)(v64 + 56) = StringLiteral_19711/*"frame3"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v64 + 56), v74, v72, v73);
  if ( *(_DWORD *)(v64 + 24) <= 4u )
    goto LABEL_49;
  v77 = StringLiteral_19712/*"frame4"*/;
  *(_QWORD *)(v64 + 64) = StringLiteral_19712/*"frame4"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v64 + 64), v77, v75, v76);
  if ( *(_DWORD *)(v64 + 24) <= 5u )
    goto LABEL_49;
  v80 = StringLiteral_19713/*"frame5"*/;
  *(_QWORD *)(v64 + 72) = StringLiteral_19713/*"frame5"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v64 + 72), v80, v78, v79);
  if ( *(_DWORD *)(v64 + 24) <= 6u )
    goto LABEL_49;
  v83 = StringLiteral_19714/*"frame6"*/;
  *(_QWORD *)(v64 + 80) = StringLiteral_19714/*"frame6"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v64 + 80), v83, v81, v82);
  if ( *(_DWORD *)(v64 + 24) <= 7u )
    goto LABEL_49;
  v86 = StringLiteral_19715/*"frame7"*/;
  *(_QWORD *)(v64 + 88) = StringLiteral_19715/*"frame7"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v64 + 88), v86, v84, v85);
  v87 = UICharaGraphRender_TypeInfo->static_fields;
  v87->baseFrameList = (struct System_String_array *)v64;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v87->baseFrameList, v64, v88, v89);
  v2 = sub_1C6BAB0(string___TypeInfo, 8);
  if ( !v2 )
    goto LABEL_50;
  v92 = v2;
  if ( !*(_DWORD *)(v2 + 24) )
    goto LABEL_49;
  v93 = StringLiteral_19708/*"frame10002"*/;
  *(_QWORD *)(v2 + 32) = StringLiteral_19708/*"frame10002"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v2 + 32), v93, v90, v91);
  if ( *(_DWORD *)(v92 + 24) <= 1u )
    goto LABEL_49;
  v96 = StringLiteral_19706/*"frame10000"*/;
  *(_QWORD *)(v92 + 40) = StringLiteral_19706/*"frame10000"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v92 + 40), v96, v94, v95);
  if ( *(_DWORD *)(v92 + 24) <= 2u )
    goto LABEL_49;
  v99 = StringLiteral_19706/*"frame10000"*/;
  *(_QWORD *)(v92 + 48) = StringLiteral_19706/*"frame10000"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v92 + 48), v99, v97, v98);
  if ( *(_DWORD *)(v92 + 24) <= 3u )
    goto LABEL_49;
  v102 = StringLiteral_19706/*"frame10000"*/;
  *(_QWORD *)(v92 + 56) = StringLiteral_19706/*"frame10000"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v92 + 56), v102, v100, v101);
  if ( *(_DWORD *)(v92 + 24) <= 4u )
    goto LABEL_49;
  v105 = StringLiteral_19707/*"frame10001"*/;
  *(_QWORD *)(v92 + 64) = StringLiteral_19707/*"frame10001"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v92 + 64), v105, v103, v104);
  if ( *(_DWORD *)(v92 + 24) <= 5u
    || (v108 = StringLiteral_19707/*"frame10001"*/,
        *(_QWORD *)(v92 + 72) = StringLiteral_19707/*"frame10001"*/,
        sub_1C6B9AC((CGThumbnailListItem_o *)(v92 + 72), v108, v106, v107),
        *(_DWORD *)(v92 + 24) <= 6u)
    || (v111 = StringLiteral_19709/*"frame10003"*/,
        *(_QWORD *)(v92 + 80) = StringLiteral_19709/*"frame10003"*/,
        sub_1C6B9AC((CGThumbnailListItem_o *)(v92 + 80), v111, v109, v110),
        *(_DWORD *)(v92 + 24) <= 7u) )
  {
LABEL_49:
    sub_1C6BC68(v2);
  }
  v114 = StringLiteral_19709/*"frame10003"*/;
  *(_QWORD *)(v92 + 88) = StringLiteral_19709/*"frame10003"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v92 + 88), v114, v112, v113);
  v115 = UICharaGraphRender_TypeInfo->static_fields;
  v115->BaseGrandFrameList = (struct System_String_array *)v92;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v115->BaseGrandFrameList, v92, v116, v117);
  v2 = sub_1C6BAB0(string___TypeInfo, 6);
  if ( !v2 )
LABEL_50:
    sub_1C6BC60(v2, v3);
  v120 = v2;
  if ( !*(_DWORD *)(v2 + 24) )
    goto LABEL_49;
  v121 = StringLiteral_19704/*"frame0"*/;
  *(_QWORD *)(v2 + 32) = StringLiteral_19704/*"frame0"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v2 + 32), v121, v118, v119);
  if ( *(_DWORD *)(v120 + 24) <= 1u )
    goto LABEL_49;
  v124 = StringLiteral_19705/*"frame1"*/;
  *(_QWORD *)(v120 + 40) = StringLiteral_19705/*"frame1"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v120 + 40), v124, v122, v123);
  if ( *(_DWORD *)(v120 + 24) <= 2u )
    goto LABEL_49;
  v127 = StringLiteral_19705/*"frame1"*/;
  *(_QWORD *)(v120 + 48) = StringLiteral_19705/*"frame1"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v120 + 48), v127, v125, v126);
  if ( *(_DWORD *)(v120 + 24) <= 3u )
    goto LABEL_49;
  v130 = StringLiteral_19710/*"frame2"*/;
  *(_QWORD *)(v120 + 56) = StringLiteral_19710/*"frame2"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v120 + 56), v130, v128, v129);
  if ( *(_DWORD *)(v120 + 24) <= 4u )
    goto LABEL_49;
  v133 = StringLiteral_19711/*"frame3"*/;
  *(_QWORD *)(v120 + 64) = StringLiteral_19711/*"frame3"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v120 + 64), v133, v131, v132);
  if ( *(_DWORD *)(v120 + 24) <= 5u )
    goto LABEL_49;
  v136 = StringLiteral_19711/*"frame3"*/;
  *(_QWORD *)(v120 + 72) = StringLiteral_19711/*"frame3"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v120 + 72), v136, v134, v135);
  v137 = UICharaGraphRender_TypeInfo->static_fields;
  v137->commandCodeBaseFrameList = (struct System_String_array *)v120;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v137->commandCodeBaseFrameList, v120, v138, v139);
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
  if ( (byte_4CB7AD0 & 1) == 0 )
  {
    sub_1C6BA08(&AssetManager_TypeInfo);
    sub_1C6BA08(&Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    sub_1C6BA08(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C6BA08(&Method_DataManager_GetMaster_ImagePartsGroupMaster___);
    sub_1C6BA08(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C6BA08(&Method_DataManager_GetMaster_UserImagePartsGroupMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    sub_1C6BA08(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_1C6BA08(&Method_DataMasterBase_UserImagePartsGroupMaster__UserImagePartsGroupEntity__int__TryGetEntity__);
    sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C6BA08(&StringLiteral_21494/*"maleImageId"*/);
    sub_1C6BA08(&StringLiteral_4376/*"CharaGraph/100000"*/);
    sub_1C6BA08(&StringLiteral_20354/*"imagePartsGroupId"*/);
    sub_1C6BA08(&StringLiteral_4375/*"CharaGraph/"*/);
    byte_4CB7AD0 = 1;
  }
  entity = 0;
  defaultName = 0;
  v18 = 0;
  v19 = 0;
  v17 = 0;
  if ( imageLimitCount >= 11 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_46;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    if ( !Instance )
      goto LABEL_46;
    ServantLimitAddMaster__getCostumeId((ServantLimitAddMaster_o *)Instance, &svtIda, &imageLimitCounta, 0);
  }
  v6 = System_Int32__ToString((int32_t)&svtIda, 0);
  defaultName = System_String__Concat_63966792((System_String_o *)StringLiteral_4375/*"CharaGraph/"*/, v6, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !Instance )
    goto LABEL_46;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
         &entity,
         svtIda,
         (const MethodInfo_33F9128 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
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
                                    (System_String_o *)StringLiteral_21494/*"maleImageId"*/,
                                    0,
                                    0);
      v17 = (int)Instance;
      if ( (_DWORD)Instance )
      {
        v7 = System_Int32__ToString((int32_t)&v17, 0);
        Instance = (DataManager_o *)System_String__Concat_63966792((System_String_o *)StringLiteral_4375/*"CharaGraph/"*/, v7, 0);
        defaultName = (System_String_o *)Instance;
      }
    }
    if ( !entity )
      goto LABEL_46;
    IntValue = EntityScriptUtil__GetIntValue(
                 (System_Collections_Generic_Dictionary_string__object__o *)entity[12].klass,
                 (System_String_o *)StringLiteral_20354/*"imagePartsGroupId"*/,
                 0,
                 0);
    if ( IntValue )
    {
      v9 = IntValue;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_UserImagePartsGroupMaster___);
      if ( !Instance )
        goto LABEL_46;
      if ( DataMasterBase_object__object__int___TryGetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             &v18,
             v9,
             (const MethodInfo_33F9128 *)Method_DataMasterBase_UserImagePartsGroupMaster__UserImagePartsGroupEntity__int__TryGetEntity__) )
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
        Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_ImagePartsGroupMaster___);
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
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_46;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_46;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          &v19,
          svtIda,
          (const MethodInfo_33F9128 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
    goto LABEL_44;
  Instance = (DataManager_o *)v19;
  if ( !v19 )
    goto LABEL_46;
  Instance = (DataManager_o *)ServantEntity__get_IsServantMaterialTd((ServantEntity_o *)v19, 0);
  if ( ((unsigned __int8)Instance & 1) == 0 )
  {
LABEL_44:
    p_defaultName = (System_String_o **)&StringLiteral_4376/*"CharaGraph/100000"*/;
    return *p_defaultName;
  }
  if ( !v19 )
LABEL_46:
    sub_1C6BC60(Instance, v5);
  v13 = v19 + 2;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v24.fields.currentCryptoKey = v13;
  *(_QWORD *)&v24.fields.fakeValue = 0;
  v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v24, v12);
  defaultName = System_String__Concat_63966792((System_String_o *)StringLiteral_4375/*"CharaGraph/"*/, v14, 0);
  v15 = defaultName;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__isExistAssetStorage(v15, 0) )
    goto LABEL_44;
LABEL_32:
  p_defaultName = &defaultName;
  return *p_defaultName;
}


System_String_o *UICharaGraphRender__GetAssetName_44158396(
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
  if ( (byte_4CB7AD1 & 1) == 0 )
  {
    sub_1C6BA08(&AssetManager_TypeInfo);
    sub_1C6BA08(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C6BA08(&Method_DataManager_GetMaster_ImagePartsGroupMaster___);
    sub_1C6BA08(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C6BA08(&Method_DataManager_GetMaster_UserImagePartsGroupMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    sub_1C6BA08(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_1C6BA08(&Method_DataMasterBase_UserImagePartsGroupMaster__UserImagePartsGroupEntity__int__TryGetEntity__);
    sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C6BA08(&StringLiteral_21494/*"maleImageId"*/);
    sub_1C6BA08(&StringLiteral_4376/*"CharaGraph/100000"*/);
    sub_1C6BA08(&StringLiteral_20354/*"imagePartsGroupId"*/);
    sub_1C6BA08(&StringLiteral_4375/*"CharaGraph/"*/);
    byte_4CB7AD1 = 1;
  }
  entity = 0;
  v18 = 0;
  v19 = 0;
  v22 = 0;
  v4 = System_Int32__ToString((int32_t)&key, 0);
  defaultName = System_String__Concat_63966792((System_String_o *)StringLiteral_4375/*"CharaGraph/"*/, v4, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !Master_object )
    goto LABEL_44;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          Master_object,
          &entity,
          key,
          (const MethodInfo_33F9128 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
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
                                                                    (System_String_o *)StringLiteral_21494/*"maleImageId"*/,
                                                                    0,
                                                                    0);
    v22 = (int)Master_object;
    if ( (_DWORD)Master_object )
    {
      v7 = System_Int32__ToString((int32_t)&v22, 0);
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_String__Concat_63966792(
                                                                      (System_String_o *)StringLiteral_4375/*"CharaGraph/"*/,
                                                                      v7,
                                                                      0);
      defaultName = (System_String_o *)Master_object;
    }
  }
  if ( !entity )
    goto LABEL_44;
  IntValue = EntityScriptUtil__GetIntValue(
               (System_Collections_Generic_Dictionary_string__object__o *)entity[12].klass,
               (System_String_o *)StringLiteral_20354/*"imagePartsGroupId"*/,
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
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_ImagePartsGroupMaster___);
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
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_UserImagePartsGroupMaster___);
  if ( !Master_object )
    goto LABEL_44;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         Master_object,
         (Il2CppObject **)&v18,
         v9,
         (const MethodInfo_33F9128 *)Method_DataMasterBase_UserImagePartsGroupMaster__UserImagePartsGroupEntity__int__TryGetEntity__) )
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
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_ImagePartsGroupMaster___);
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
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Master_object )
    goto LABEL_44;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMasterData_object_(
                                                                  (DataManager_o *)Master_object,
                                                                  (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Master_object )
    goto LABEL_44;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          Master_object,
          &v19,
          key,
          (const MethodInfo_33F9128 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
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
    p_defaultName = (System_String_o **)&StringLiteral_4376/*"CharaGraph/100000"*/;
    return *p_defaultName;
  }
  if ( !v19 )
LABEL_44:
    sub_1C6BC60(Master_object, v6);
  v14 = v19 + 2;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v24.fields.currentCryptoKey = v14;
  *(_QWORD *)&v24.fields.fakeValue = 0;
  v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v24, v13);
  defaultName = System_String__Concat_63966792((System_String_o *)StringLiteral_4375/*"CharaGraph/"*/, v15, 0);
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

  if ( (byte_4CB7AD8 & 1) == 0 )
  {
    sub_1C6BA08(&UICharaGraphRender_TypeInfo);
    byte_4CB7AD8 = 1;
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
  Il2CppObject *Object_object__51495936; // x22
  UnityEngine_Texture2D_o *result; // x0
  System_String_o *v15; // x1

  v4 = this;
  if ( (byte_4CB7ADA & 1) == 0 )
  {
    sub_1C6BA08(&Method_AssetData_GetObject_Texture2D____78568232);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&UICharaGraphRender_TypeInfo);
    this = (UICharaGraphRender_o *)sub_1C6BA08(&StringLiteral_16625/*"a"*/);
    byte_4CB7ADA = 1;
  }
  if ( v4->fields.baseKind )
  {
    v4->fields.textureImageLimitCount = 0;
    if ( data )
    {
      LastName = AssetData__get_LastName(data, 0);
      v6 = (System_String_o *)StringLiteral_16625/*"a"*/;
      goto LABEL_19;
    }
LABEL_20:
    sub_1C6BC60(this, data);
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
      sub_1C6BC68(this);
    p_changeGraphSuffix = (System_String_o **)(&v8->fields.curried_first_arg + 8 * imageLimitCount);
    if ( !data )
      goto LABEL_20;
  }
  v10 = *p_changeGraphSuffix;
  v11 = AssetData__get_LastName(data, 0);
  v12 = System_String__Concat_63966792(v11, v10, 0);
  Object_object__51495936 = AssetData__GetObject_object__51495936(
                              data,
                              v12,
                              (const MethodInfo_311C400 *)Method_AssetData_GetObject_Texture2D____78568232);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Object_object__51495936, 0, 0) )
  {
    result = (UnityEngine_Texture2D_o *)Object_object__51495936;
    v4->fields.textureImageLimitCount = v4->fields.imageLimitCount;
    return result;
  }
  v4->fields.textureImageLimitCount = 0;
  LastName = AssetData__get_LastName(data, 0);
  v6 = v10;
LABEL_19:
  v15 = System_String__Concat_63966792(LastName, v6, 0);
  return (UnityEngine_Texture2D_o *)AssetData__GetObject_object__51495936(
                                      data,
                                      v15,
                                      (const MethodInfo_311C400 *)Method_AssetData_GetObject_Texture2D____78568232);
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

  if ( (byte_4CB7AD9 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_ObjectModel_ReadOnlyCollection_Rect__get_Item__);
    sub_1C6BA08(&UICharaGraphRender_TypeInfo);
    byte_4CB7AD9 = 1;
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
      sub_1C6BC60(0, method);
    *(UnityEngine_Rect_o *)&m_XMin = System_Collections_ObjectModel_ReadOnlyCollection_Rect___get_Item(
                                       servantBodyRectTable,
                                       this->fields.textureImageLimitCount,
                                       (const MethodInfo_3A006C8 *)Method_System_Collections_ObjectModel_ReadOnlyCollection_Rect__get_Item__);
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

  if ( (byte_4CB7AE0 & 1) == 0 )
  {
    sub_1C6BA08(&AtlasManager_TypeInfo);
    sub_1C6BA08(&Method_DataManager_GetMaster_GrandGraphDetailMaster___);
    sub_1C6BA08(&Method_DataManager_GetMaster_ServantClassMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    sub_1C6BA08(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
    sub_1C6BA08(&StringLiteral_16102/*"_"*/);
    sub_1C6BA08(&StringLiteral_17996/*"class"*/);
    byte_4CB7AE0 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_ServantClassMaster___);
  v5 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
  if ( this->fields._IsGrandServant_k__BackingField )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_GrandGraphDetailMaster___);
    if ( !Master_object )
LABEL_18:
      sub_1C6BC60(Master_object, v4);
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
                                (const MethodInfo_33F90DC *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
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
    return System_String__Concat_64007060(
             (System_String_o *)StringLiteral_17996/*"class"*/,
             v10,
             (System_String_o *)StringLiteral_16102/*"_"*/,
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
  if ( (byte_4CB7AD2 & 1) == 0 )
  {
    sub_1C6BA08(&AssetManager_TypeInfo);
    sub_1C6BA08(&StringLiteral_4581/*"CommandGraph/1000000"*/);
    sub_1C6BA08(&StringLiteral_4580/*"CommandGraph/"*/);
    byte_4CB7AD2 = 1;
  }
  v2 = System_Int32__ToString((int32_t)&v5, 0);
  v3 = System_String__Concat_63966792((System_String_o *)StringLiteral_4580/*"CommandGraph/"*/, v2, 0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( AssetManager__isExistAssetStorage(v3, 0) )
    return v3;
  else
    return (System_String_o *)StringLiteral_4581/*"CommandGraph/1000000"*/;
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
  if ( (byte_4CB7AD3 & 1) == 0 )
  {
    sub_1C6BA08(&AssetManager_TypeInfo);
    sub_1C6BA08(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C6BA08(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C6BA08(&StringLiteral_4378/*"CharaGraph/CharaGraphEx/"*/);
    sub_1C6BA08(&StringLiteral_4376/*"CharaGraph/100000"*/);
    sub_1C6BA08(&StringLiteral_4375/*"CharaGraph/"*/);
    byte_4CB7AD3 = 1;
  }
  v10 = 0;
  v2 = System_Int32__ToString((int32_t)&key, 0);
  v3 = System_String__Concat_63966792((System_String_o *)StringLiteral_4378/*"CharaGraph/CharaGraphEx/"*/, v2, 0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( AssetManager__isExistAssetStorage(v3, 0) )
    return v3;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_19;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          (Il2CppObject **)&v10,
          key,
          (const MethodInfo_33F9128 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
    return (System_String_o *)StringLiteral_4376/*"CharaGraph/100000"*/;
  Instance = (DataManager_o *)v10;
  if ( !v10 )
    goto LABEL_19;
  Instance = (DataManager_o *)ServantEntity__get_IsServantMaterialTd(v10, 0);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    return (System_String_o *)StringLiteral_4376/*"CharaGraph/100000"*/;
  if ( !v10 )
LABEL_19:
    sub_1C6BC60(Instance, v5);
  p_baseSvtId = &v10->fields.baseSvtId;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v12.fields.currentCryptoKey = p_baseSvtId;
  *(_QWORD *)&v12.fields.fakeValue = 0;
  v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v12, v6);
  v3 = System_String__Concat_63966792((System_String_o *)StringLiteral_4375/*"CharaGraph/"*/, v8, 0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__isExistAssetStorage(v3, 0) )
    return (System_String_o *)StringLiteral_4376/*"CharaGraph/100000"*/;
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

  if ( (byte_4CB7ADB & 1) == 0 )
  {
    sub_1C6BA08(&UICharaGraphRender_TypeInfo);
    byte_4CB7ADB = 1;
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
    sub_1C6BC60(v3, method);
  }
LABEL_10:
  if ( (unsigned int)imageLimitCount >= LODWORD(SERVANT_NAME_TARGET_LIMIT_COUNT->max_length) )
    sub_1C6BC68(v3);
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
  if ( (byte_4CB7ADC & 1) == 0 )
  {
    sub_1C6BA08(&Method_AssetData_GetObject_Texture2D____78568232);
    sub_1C6BA08(&StringLiteral_16982/*"b"*/);
    this = (UICharaGraphRender_o *)sub_1C6BA08(&StringLiteral_22236/*"name"*/);
    byte_4CB7ADC = 1;
  }
  if ( v4->fields.isEventJoinNameExist )
  {
    if ( data )
    {
      LastName = AssetData__get_LastName(data, 0);
      v6 = (System_String_o *)StringLiteral_22236/*"name"*/;
LABEL_6:
      v7 = System_String__Concat_63966792(LastName, v6, 0);
      return (UnityEngine_Texture2D_o *)AssetData__GetObject_object__51495936(
                                          data,
                                          v7,
                                          (const MethodInfo_311C400 *)Method_AssetData_GetObject_Texture2D____78568232);
    }
    goto LABEL_11;
  }
  if ( !v4->fields.isNameTrue )
  {
    if ( data )
    {
      LastName = AssetData__get_LastName(data, 0);
      v6 = (System_String_o *)StringLiteral_16982/*"b"*/;
      goto LABEL_6;
    }
LABEL_11:
    sub_1C6BC60(this, data);
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
  if ( (byte_4CB7ADE & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C6BA08(&UICharaGraphRender_TypeInfo);
    byte_4CB7ADE = 1;
  }
  if ( !this->fields.baseKind )
  {
    entity = 0;
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_18;
    MasterData_object = DataManager__GetMasterData_object_(
                          Instance,
                          (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
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
      sub_1C6BC60(Instance, v9);
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

  if ( (byte_4CB7ADF & 1) == 0 )
  {
    sub_1C6BA08(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
    sub_1C6BA08(&StringLiteral_16576/*"_sp_"*/);
    sub_1C6BA08(&StringLiteral_23055/*"rarity"*/);
    sub_1C6BA08(&StringLiteral_16102/*"_"*/);
    sub_1C6BA08(&StringLiteral_1/*""*/);
    byte_4CB7ADF = 1;
  }
  IsGrandServant_k__BackingField = this->fields._IsGrandServant_k__BackingField;
  v4 = (_DWORD)this + 496;
  v5 = System_Int32__ToString((int)this + 496, 0);
  v6 = (_DWORD)this + 448;
  v7 = v5;
  v8 = System_Int32__ToString(v6, 0);
  if ( IsGrandServant_k__BackingField )
  {
    v9 = System_String__Concat_64007060(
           (System_String_o *)StringLiteral_23055/*"rarity"*/,
           v7,
           (System_String_o *)StringLiteral_16576/*"_sp_"*/,
           v8,
           0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
    if ( !Instance )
      sub_1C6BC60(0, v11);
    if ( AtlasManager__HasCharaGraphOptionAtlas((AtlasManager_o *)Instance, v9, 0) )
      return v9;
    v15 = System_Int32__ToString(v4, 0);
    v8 = System_Int32__ToString(v6, 0);
    v14 = v15;
    v13 = (System_String_o *)StringLiteral_23055/*"rarity"*/;
  }
  else
  {
    v13 = (System_String_o *)StringLiteral_23055/*"rarity"*/;
    v14 = v7;
  }
  return System_String__Concat_64007060(v13, v14, (System_String_o *)StringLiteral_16102/*"_"*/, v8, 0);
}


UnityEngine_Texture2D_o *UICharaGraphRender__GetTrueNameTexture(
        UICharaGraphRender_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  UICharaGraphRender_o *v4; // x20
  System_String_o *LastName; // x0
  System_String_o *v6; // x0
  Il2CppObject *Object_object__51495936; // x0
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
  if ( (byte_4CB7ADD & 1) == 0 )
  {
    sub_1C6BA08(&Method_AssetData_GetObject_Texture2D____78568232);
    sub_1C6BA08(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C6BA08(&StringLiteral_16625/*"a"*/);
    sub_1C6BA08(&StringLiteral_19786/*"g"*/);
    this = (UICharaGraphRender_o *)sub_1C6BA08(&StringLiteral_22236/*"name"*/);
    byte_4CB7ADD = 1;
  }
  if ( !data )
    goto LABEL_17;
  LastName = AssetData__get_LastName(data, 0);
  v6 = System_String__Concat_63966792(LastName, (System_String_o *)StringLiteral_19786/*"g"*/, 0);
  Object_object__51495936 = AssetData__GetObject_object__51495936(
                              data,
                              v6,
                              (const MethodInfo_311C400 *)Method_AssetData_GetObject_Texture2D____78568232);
  if ( !v4->fields._IsGrandServant_k__BackingField )
    goto LABEL_8;
  v8 = (UnityEngine_Object_o *)Object_object__51495936;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Implicit(v8, 0) )
  {
LABEL_8:
    entity = 0;
    this = (UICharaGraphRender_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( this )
    {
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)this,
                            (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
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
            v13 = &StringLiteral_22236/*"name"*/;
LABEL_15:
            v14 = AssetData__get_LastName(data, 0);
            v15 = System_String__Concat_63966792(v14, (System_String_o *)*v13, 0);
            return (UnityEngine_Texture2D_o *)AssetData__GetObject_object__51495936(
                                                data,
                                                v15,
                                                (const MethodInfo_311C400 *)Method_AssetData_GetObject_Texture2D____78568232);
          }
LABEL_14:
          v13 = &StringLiteral_16625/*"a"*/;
          goto LABEL_15;
        }
      }
    }
LABEL_17:
    sub_1C6BC60(this, data);
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
void UICharaGraphRender__MoveAlpha_44165532(
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
  const MethodInfo *v20; // x3
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  UnityEngine_Color_o v23; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4

  v11 = *(long double *)&alpha;
  if ( (byte_4CB7AE1 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB7AE1 = 1;
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
      UnityEngine_GameObject__SendMessage_71641044(callbackObject, callbackFunc, 0);
    }
  }
  else
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    v23.fields.r = *(float *)&v8;
    v23.fields.g = *(float *)&v7;
    v23.fields.b = *(float *)&v6;
    v23.fields.a = *(float *)&v11;
    v16 = TweenRendererColor__Begin(gameObject, duration, v23, v15);
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
          sub_1C6B9AC((CGThumbnailListItem_o *)&v16->fields.eventReceiver, (int32_t)callbackObject, v19, v20);
          v16->fields.callWhenFinished = callbackFunc;
          sub_1C6B9AC((CGThumbnailListItem_o *)&v16->fields.callWhenFinished, (int32_t)callbackFunc, v21, v22);
          return;
        }
LABEL_18:
        sub_1C6BC60(v17, v18);
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

  if ( (byte_4CB7AD4 & 1) == 0 )
  {
    sub_1C6BA08(&BalanceConfig_TypeInfo);
    sub_1C6BA08(&ImageLimitCount_TypeInfo);
    byte_4CB7AD4 = 1;
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
  UICharaGraphRender__SetCharacter_44160348(this, changeNameType, saintGraphType, isGrandServant, v20);
}


void UICharaGraphRender__SetCharacter_44160348(
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
  const MethodInfo *v25; // x3
  System_String_o *v26; // x0
  struct System_String_o *v27; // x1
  _BOOL4 IsGrandServant_k__BackingField; // w24
  __int64 v29; // x8
  __int64 v30; // x8
  int32_t v31; // w9
  int32_t RarityIcon; // w23
  int32_t v33; // w0
  int32_t v34; // w8
  int EventJoinNameExistSvtId; // w0
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  int32_t v38; // w1
  Il2CppObject *MasterData_object; // x0
  int32_t svtId; // w23
  int32_t imageLimitCount; // w25
  ServantLimitMaster_o *v42; // x24
  int32_t v43; // w0
  int32_t v44; // w23
  struct System_String_o *v45; // x0
  int32_t v46; // w2
  const MethodInfo *v47; // x3
  unsigned int v48; // w8
  ServantLimitEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF
  int32_t FrameId; // [xsp+1Ch] [xbp-54h] BYREF

  if ( (byte_4CB7AD6 & 1) == 0 )
  {
    sub_1C6BA08(&AtlasManager_TypeInfo);
    sub_1C6BA08(&Method_DataManager_GetMasterData_ServantExceedMaster___);
    sub_1C6BA08(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1C6BA08(&Method_DataManager_GetMasterData_ServantLvDetailMaster___);
    sub_1C6BA08(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C6BA08(&Method_DataManager_GetMaster_CommonReleaseMaster___);
    sub_1C6BA08(&Method_DataManager_GetMaster_ServantLvDetailMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    sub_1C6BA08(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C6BA08(&ImageLimitCount_TypeInfo);
    sub_1C6BA08(&Rarity_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C6BA08(&UICharaGraphRender_TypeInfo);
    sub_1C6BA08(&StringLiteral_19703/*"frame"*/);
    sub_1C6BA08(&StringLiteral_1/*""*/);
    byte_4CB7AD6 = 1;
  }
  FrameId = 0;
  entity = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_75;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_75;
  v11 = DataMasterBase_object__object__int___GetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          this->fields.svtId,
          (const MethodInfo_33F90DC *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_75;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !Instance )
    goto LABEL_75;
  v12 = ServantLimitMaster__GetEntity((ServantLimitMaster_o *)Instance, this->fields.svtId, this->fields.limitCount, 0);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_75;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_ServantExceedMaster___);
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
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_75;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_ServantLvDetailMaster___);
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
    v29 = *(_QWORD *)&Instance[1].fields._DispLog;
    if ( IsGrandServant_k__BackingField )
    {
      v30 = *(_QWORD *)(v29 + 120);
      if ( !v30 )
        goto LABEL_75;
    }
    else
    {
      v30 = *(_QWORD *)(v29 + 112);
      if ( !v30 )
        goto LABEL_75;
    }
    v31 = this->fields.frameType;
    if ( (unsigned int)v31 >= *(_DWORD *)(v30 + 24) )
      sub_1C6BC68(Instance);
    v27 = *(struct System_String_o **)(v30 + 8LL * v31 + 32);
  }
  else
  {
    v26 = System_Int32__ToString((int32_t)&FrameId, 0);
    v27 = System_String__Concat_63966792((System_String_o *)StringLiteral_19703/*"frame"*/, v26, 0);
  }
  this->fields.frameName = v27;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.frameName, (int32_t)v27, v24, v25);
  if ( this->fields.exceedCount < 1 )
  {
    v33 = 0;
  }
  else
  {
    if ( v19 )
      RarityIcon = ServantExceedEntity__GetRarityIcon(v19, this->fields._IsGrandServant_k__BackingField, 0);
    else
      RarityIcon = 1;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_ServantLvDetailMaster___);
    if ( !Instance )
      goto LABEL_75;
    v33 = ServantLvDetailMaster__GetRarityIcon(
            (ServantLvDetailMaster_o *)Instance,
            this->fields.actualRarity,
            this->fields.lv,
            RarityIcon,
            this->fields._IsGrandServant_k__BackingField,
            0);
  }
  this->fields.exceedType = v33;
  if ( ServantEntity__get_IsCombineMaterial((ServantEntity_o *)v11, 0) )
    v34 = -1;
  else
    v34 = ServantEntity__get_IsServantMaterialTd((ServantEntity_o *)v11, 0) << 31 >> 31;
  this->fields.atk = v34;
  this->fields.hp = v34;
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
  v38 = StringLiteral_1/*""*/;
  this->fields.changeGraphSuffix = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.changeGraphSuffix, v38, v36, v37);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_75;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  svtId = this->fields.svtId;
  imageLimitCount = this->fields.imageLimitCount;
  v42 = (ServantLimitMaster_o *)MasterData_object;
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  Instance = (DataManager_o *)ImageLimitCount__GetLimitCountByImageLimit(imageLimitCount, 0);
  if ( !v42 )
    goto LABEL_75;
  if ( !ServantLimitMaster__TryGetEntity(v42, &entity, svtId, (int32_t)Instance, 0) )
    goto LABEL_71;
  Instance = (DataManager_o *)entity;
  if ( !entity )
    goto LABEL_75;
  v43 = ServantLimitEntity__GetChangeGraphCommonReleaseId(entity, -1, 0);
  if ( v43 < 0 )
    goto LABEL_71;
  v44 = v43;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  if ( !Instance )
    goto LABEL_75;
  if ( !CommonReleaseMaster__IsOpen((CommonReleaseMaster_o *)Instance, v44, 0, 0, 0) )
    goto LABEL_71;
  this->fields.isChangeGraph = 1;
  Instance = (DataManager_o *)entity;
  if ( !entity )
LABEL_75:
    sub_1C6BC60(Instance, v10);
  v45 = ServantLimitEntity__GetChangeGraphSuffix(entity, (System_String_o *)StringLiteral_1/*""*/, 0);
  this->fields.changeGraphSuffix = v45;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.changeGraphSuffix, (int32_t)v45, v46, v47);
LABEL_71:
  if ( (unsigned int)(changeNameType - 1) >= 3 )
    LOBYTE(v48) = ServantEntity__IsNameTrue((ServantEntity_o *)v11, 0);
  else
    v48 = 0x100u >> (8 * (changeNameType - 1));
  this->fields.isNameTrue = v48;
}


// local variable allocation has failed, the output may be wrong!
void UICharaGraphRender__SetCharacter_44161808(
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
  if ( (byte_4CB7AD5 & 1) == 0 )
  {
    sub_1C6BA08(&BalanceConfig_TypeInfo);
    sub_1C6BA08(&Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C6BA08(&UICharaGraphRender_TypeInfo);
    byte_4CB7AD5 = 1;
  }
  this->fields.imageSvtId = svtId;
  this->fields.svtId = svtId;
  if ( imageLimitCount >= 11 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___)) == 0 )
    {
      sub_1C6BC60(Instance, v22);
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
  sub_1C6B9AC(
    (CGThumbnailListItem_o *)&this->fields.imagePartsGroupIdxs,
    (int32_t)idxs,
    limitCount,
    *(const MethodInfo **)&imageLimitCount);
  UICharaGraphRender__SetCharacter_44160348(this, changeNameType, saintGraphType, isGrandServant, v25);
}


void UICharaGraphRender__SetCommand(UICharaGraphRender_o *this, int32_t commandCodeId, const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  int32_t rarity; // w8
  __int64 v10; // x9
  struct System_String_o *v11; // x1

  if ( (byte_4CB7AD7 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMasterData_CommandCodeMaster___);
    sub_1C6BA08(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C6BA08(&UICharaGraphRender_TypeInfo);
    byte_4CB7AD7 = 1;
  }
  this->fields.commandCodeId = commandCodeId;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_CommandCodeMaster___);
  if ( !Instance )
    goto LABEL_11;
  Instance = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               this->fields.commandCodeId,
               (const MethodInfo_33F90DC *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
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
  v10 = *(_QWORD *)(*((_QWORD *)Instance + 23) + 128LL);
  if ( !v10 )
LABEL_11:
    sub_1C6BC60(Instance, v6);
  if ( (unsigned int)rarity >= *(_DWORD *)(v10 + 24) )
    sub_1C6BC68(Instance);
  v11 = *(struct System_String_o **)(v10 + 8LL * rarity + 32);
  this->fields.frameName = v11;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.frameName, (int32_t)v11, v7, v8);
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
    sub_1C6BC60(0, v6);
  if ( UnityEngine_GameObject__get_layer(gameObject, 0) != layer )
  {
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    UICharaGraphRender__SetLayer_44166060(this, transform, layer, v8);
  }
}


void UICharaGraphRender__SetLayer_44166060(
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
  if ( (byte_4CB7AE2 & 1) == 0 )
  {
    sub_1C6BA08(&System_IDisposable_TypeInfo);
    sub_1C6BA08(&System_Collections_IEnumerator_TypeInfo);
    this = (UICharaGraphRender_o *)sub_1C6BA08(&UnityEngine_Transform_TypeInfo);
    byte_4CB7AE2 = 1;
  }
  if ( !tf
    || (this = (UICharaGraphRender_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)tf, 0)) == 0 )
  {
LABEL_33:
    sub_1C6BC60(this, tf);
  }
  UnityEngine_GameObject__set_layer((UnityEngine_GameObject_o *)this, layer, 0);
  Enumerator = UnityEngine_Transform__GetEnumerator(tf, 0);
  if ( !Enumerator )
    sub_1C6BC60(0, v7);
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
      v12 = sub_1C41D90(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
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
      v16 = sub_1C41D90(Enumerator, System_Collections_IEnumerator_TypeInfo, 1);
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
        sub_1C6BFFC(v17);
        goto LABEL_33;
      }
    }
    UICharaGraphRender__SetLayer_44166060(v6, v17, layer, v18);
  }
  v20 = sub_1C6BB44(Enumerator, System_IDisposable_TypeInfo);
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
      v25 = sub_1C41D90(v20, System_IDisposable_TypeInfo, 0);
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
  const MethodInfo *v3; // x3

  this->fields._OverwriteStatus_k__BackingField = value;
  sub_1C6B9AC(
    (CGThumbnailListItem_o *)&this->fields._OverwriteStatus_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}