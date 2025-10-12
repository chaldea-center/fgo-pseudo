void UICharaGraphRender___cctor(const MethodInfo *method)
{
  struct UICharaGraphRender_StaticFields *static_fields; // x8
  __int64 v2; // x0
  unsigned int v3; // w8
  struct UICharaGraphRender_StaticFields *v4; // x9
  __int64 v5; // d2
  struct UICharaGraphRender_StaticFields *v6; // x9
  __int64 v7; // d2
  struct UICharaGraphRender_StaticFields *v8; // x9
  __int64 v9; // d3
  struct UICharaGraphRender_StaticFields *v10; // x9
  __int64 v11; // d2
  struct UICharaGraphRender_StaticFields *v12; // x9
  __int64 v13; // d3
  struct UICharaGraphRender_StaticFields *v14; // x9
  __int64 v15; // d2
  struct UICharaGraphRender_StaticFields *v16; // x9
  __int64 v17; // d3
  struct UICharaGraphRender_StaticFields *v18; // x9
  __int64 v19; // d2
  struct UICharaGraphRender_StaticFields *v20; // x9
  __int64 v21; // d3
  struct UICharaGraphRender_StaticFields *v22; // x9
  __int64 v23; // d2
  struct UICharaGraphRender_StaticFields *v24; // x9
  __int64 v25; // d3
  struct UICharaGraphRender_StaticFields *v26; // x8
  __int64 v27; // d2
  System_Collections_ObjectModel_ReadOnlyCollection_T__o *Only_Rect; // x0
  struct UICharaGraphRender_StaticFields *v29; // x8
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  UICharaGraphRender_c *v32; // x8
  System_Array_o *v33; // x0
  System_RuntimeFieldHandle_o v34; // x1
  System_Array_o *v35; // x19
  struct UICharaGraphRender_StaticFields *v36; // x0
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  int32_t v39; // w2
  const MethodInfo *v40; // x3
  __int64 v41; // x19
  int32_t v42; // w1
  int32_t v43; // w2
  const MethodInfo *v44; // x3
  int32_t v45; // w1
  int32_t v46; // w2
  const MethodInfo *v47; // x3
  int32_t v48; // w1
  int32_t v49; // w2
  const MethodInfo *v50; // x3
  int32_t v51; // w1
  int32_t v52; // w2
  const MethodInfo *v53; // x3
  int32_t v54; // w1
  int32_t v55; // w2
  const MethodInfo *v56; // x3
  int32_t v57; // w1
  struct UICharaGraphRender_StaticFields *v58; // x0
  int32_t v59; // w2
  const MethodInfo *v60; // x3
  int32_t v61; // w2
  const MethodInfo *v62; // x3
  __int64 v63; // x19
  int32_t v64; // w1
  int32_t v65; // w2
  const MethodInfo *v66; // x3
  int32_t v67; // w1
  int32_t v68; // w2
  const MethodInfo *v69; // x3
  int32_t v70; // w1
  int32_t v71; // w2
  const MethodInfo *v72; // x3
  int32_t v73; // w1
  int32_t v74; // w2
  const MethodInfo *v75; // x3
  int32_t v76; // w1
  int32_t v77; // w2
  const MethodInfo *v78; // x3
  int32_t v79; // w1
  int32_t v80; // w2
  const MethodInfo *v81; // x3
  int32_t v82; // w1
  int32_t v83; // w2
  const MethodInfo *v84; // x3
  int32_t v85; // w1
  struct UICharaGraphRender_StaticFields *v86; // x0
  int32_t v87; // w2
  const MethodInfo *v88; // x3
  int32_t v89; // w2
  const MethodInfo *v90; // x3
  __int64 v91; // x19
  int32_t v92; // w1
  int32_t v93; // w2
  const MethodInfo *v94; // x3
  int32_t v95; // w1
  int32_t v96; // w2
  const MethodInfo *v97; // x3
  int32_t v98; // w1
  int32_t v99; // w2
  const MethodInfo *v100; // x3
  int32_t v101; // w1
  int32_t v102; // w2
  const MethodInfo *v103; // x3
  int32_t v104; // w1
  int32_t v105; // w2
  const MethodInfo *v106; // x3
  int32_t v107; // w1
  int32_t v108; // w2
  const MethodInfo *v109; // x3
  int32_t v110; // w1
  int32_t v111; // w2
  const MethodInfo *v112; // x3
  int32_t v113; // w1
  struct UICharaGraphRender_StaticFields *v114; // x0
  int32_t v115; // w2
  const MethodInfo *v116; // x3
  int32_t v117; // w2
  const MethodInfo *v118; // x3
  __int64 v119; // x19
  int32_t v120; // w1
  int32_t v121; // w2
  const MethodInfo *v122; // x3
  int32_t v123; // w1
  int32_t v124; // w2
  const MethodInfo *v125; // x3
  int32_t v126; // w1
  int32_t v127; // w2
  const MethodInfo *v128; // x3
  int32_t v129; // w1
  int32_t v130; // w2
  const MethodInfo *v131; // x3
  int32_t v132; // w1
  int32_t v133; // w2
  const MethodInfo *v134; // x3
  int32_t v135; // w1
  struct UICharaGraphRender_StaticFields *v136; // x0
  int32_t v137; // w2
  const MethodInfo *v138; // x3

  if ( (byte_4C391A7 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Array_AsReadOnly_Rect___);
    sub_1C32C20(&int___TypeInfo);
    sub_1C32C20(&UnityEngine_Rect___TypeInfo);
    sub_1C32C20(&string___TypeInfo);
    sub_1C32C20(&Field__PrivateImplementationDetails__F239810D17032E35383496434C64894FFE055A198BA7CFB907D73BAF26A70F0C);
    sub_1C32C20(&UICharaGraphRender_TypeInfo);
    sub_1C32C20(&StringLiteral_19647/*"frame5"*/);
    sub_1C32C20(&StringLiteral_19640/*"frame10000"*/);
    sub_1C32C20(&StringLiteral_16629/*"a"*/);
    sub_1C32C20(&StringLiteral_19648/*"frame6"*/);
    sub_1C32C20(&StringLiteral_19649/*"frame7"*/);
    sub_1C32C20(&StringLiteral_16967/*"b"*/);
    sub_1C32C20(&StringLiteral_17677/*"c"*/);
    sub_1C32C20(&StringLiteral_19641/*"frame10001"*/);
    sub_1C32C20(&StringLiteral_19643/*"frame10003"*/);
    sub_1C32C20(&StringLiteral_19645/*"frame3"*/);
    sub_1C32C20(&StringLiteral_19639/*"frame1"*/);
    sub_1C32C20(&StringLiteral_19642/*"frame10002"*/);
    sub_1C32C20(&StringLiteral_19638/*"frame0"*/);
    sub_1C32C20(&StringLiteral_19644/*"frame2"*/);
    sub_1C32C20(&StringLiteral_19646/*"frame4"*/);
    byte_4C391A7 = 1;
  }
  static_fields = UICharaGraphRender_TypeInfo->static_fields;
  *(_OWORD *)&static_fields->OTHER_IMAGE_LIMIT_COUNT = xmmword_C0CB80;
  *(_QWORD *)&static_fields->SERVANT_BODY_SIZE_Y = 0x1FE000002D2LL;
  *(_OWORD *)&static_fields->SERVANT_BODY_U = xmmword_C0D8D0;
  static_fields->SERVANT_EQUIP_BODY_SIZE_Y = 872;
  *(_OWORD *)&static_fields->SERVANT_EQUIP_BODY_U = xmmword_C0DB20;
  v2 = sub_1C32CC8(UnityEngine_Rect___TypeInfo, 12);
  if ( !v2 )
    goto LABEL_50;
  v3 = *(_DWORD *)(v2 + 24);
  if ( !v3 )
    goto LABEL_49;
  v4 = UICharaGraphRender_TypeInfo->static_fields;
  v5 = *(_QWORD *)&v4->SERVANT_BODY_W;
  *(float32x2_t *)(v2 + 32) = vadd_f32(*(float32x2_t *)&v4->SERVANT_BODY_U, 0);
  *(_QWORD *)(v2 + 40) = v5;
  if ( v3 == 1 )
    goto LABEL_49;
  v6 = UICharaGraphRender_TypeInfo->static_fields;
  v7 = *(_QWORD *)&v6->SERVANT_BODY_W;
  *(float32x2_t *)(v2 + 48) = vadd_f32(*(float32x2_t *)&v6->SERVANT_BODY_U, (float32x2_t)1056964608LL);
  *(_QWORD *)(v2 + 56) = v7;
  if ( v3 <= 2 )
    goto LABEL_49;
  v8 = UICharaGraphRender_TypeInfo->static_fields;
  v9 = *(_QWORD *)&v8->SERVANT_BODY_W;
  *(float32x2_t *)(v2 + 64) = vadd_f32(*(float32x2_t *)&v8->SERVANT_BODY_U, 0);
  *(_QWORD *)(v2 + 72) = v9;
  if ( v3 == 3 )
    goto LABEL_49;
  v10 = UICharaGraphRender_TypeInfo->static_fields;
  v11 = *(_QWORD *)&v10->SERVANT_BODY_W;
  *(float32x2_t *)(v2 + 80) = vadd_f32(*(float32x2_t *)&v10->SERVANT_BODY_U, (float32x2_t)1056964608LL);
  *(_QWORD *)(v2 + 88) = v11;
  if ( v3 <= 4 )
    goto LABEL_49;
  v12 = UICharaGraphRender_TypeInfo->static_fields;
  v13 = *(_QWORD *)&v12->SERVANT_BODY_W;
  *(float32x2_t *)(v2 + 96) = vadd_f32(*(float32x2_t *)&v12->SERVANT_BODY_U, 0);
  *(_QWORD *)(v2 + 104) = v13;
  if ( v3 == 5 )
    goto LABEL_49;
  v14 = UICharaGraphRender_TypeInfo->static_fields;
  v15 = *(_QWORD *)&v14->SERVANT_BODY_W;
  *(float32x2_t *)(v2 + 112) = vadd_f32(*(float32x2_t *)&v14->SERVANT_BODY_U, (float32x2_t)1056964608LL);
  *(_QWORD *)(v2 + 120) = v15;
  if ( v3 <= 6 )
    goto LABEL_49;
  v16 = UICharaGraphRender_TypeInfo->static_fields;
  v17 = *(_QWORD *)&v16->SERVANT_BODY_W;
  *(float32x2_t *)(v2 + 128) = vadd_f32(*(float32x2_t *)&v16->SERVANT_BODY_U, 0);
  *(_QWORD *)(v2 + 136) = v17;
  if ( v3 == 7 )
    goto LABEL_49;
  v18 = UICharaGraphRender_TypeInfo->static_fields;
  v19 = *(_QWORD *)&v18->SERVANT_BODY_W;
  *(float32x2_t *)(v2 + 144) = vadd_f32(*(float32x2_t *)&v18->SERVANT_BODY_U, (float32x2_t)1056964608LL);
  *(_QWORD *)(v2 + 152) = v19;
  if ( v3 <= 8 )
    goto LABEL_49;
  v20 = UICharaGraphRender_TypeInfo->static_fields;
  v21 = *(_QWORD *)&v20->SERVANT_BODY_W;
  *(float32x2_t *)(v2 + 160) = vadd_f32(*(float32x2_t *)&v20->SERVANT_BODY_U, 0);
  *(_QWORD *)(v2 + 168) = v21;
  if ( v3 == 9 )
    goto LABEL_49;
  v22 = UICharaGraphRender_TypeInfo->static_fields;
  v23 = *(_QWORD *)&v22->SERVANT_BODY_W;
  *(float32x2_t *)(v2 + 176) = vadd_f32(*(float32x2_t *)&v22->SERVANT_BODY_U, (float32x2_t)1056964608LL);
  *(_QWORD *)(v2 + 184) = v23;
  if ( v3 <= 0xA )
    goto LABEL_49;
  v24 = UICharaGraphRender_TypeInfo->static_fields;
  v25 = *(_QWORD *)&v24->SERVANT_BODY_W;
  *(float32x2_t *)(v2 + 192) = vadd_f32(*(float32x2_t *)&v24->SERVANT_BODY_U, 0);
  *(_QWORD *)(v2 + 200) = v25;
  if ( v3 == 11 )
    goto LABEL_49;
  v26 = UICharaGraphRender_TypeInfo->static_fields;
  v27 = *(_QWORD *)&v26->SERVANT_BODY_W;
  *(float32x2_t *)(v2 + 208) = vadd_f32(*(float32x2_t *)&v26->SERVANT_BODY_U, (float32x2_t)1056964608LL);
  *(_QWORD *)(v2 + 216) = v27;
  Only_Rect = System_Array__AsReadOnly_Rect_(
                (UnityEngine_Rect_array *)v2,
                (const MethodInfo_31AAAFC *)Method_System_Array_AsReadOnly_Rect___);
  v29 = UICharaGraphRender_TypeInfo->static_fields;
  v29->servantBodyRectTable = (struct System_Collections_ObjectModel_ReadOnlyCollection_Rect__o *)Only_Rect;
  sub_1C32BC4((CGThumbnailListItem_o *)&v29->servantBodyRectTable, (int32_t)Only_Rect, v30, v31);
  v32 = UICharaGraphRender_TypeInfo;
  UICharaGraphRender_TypeInfo->static_fields->servantEquipBodyRect = *(struct UnityEngine_Rect_o *)&UICharaGraphRender_TypeInfo->static_fields->SERVANT_EQUIP_BODY_U;
  *(_QWORD *)&v32->static_fields->SERVANT_NAME_UV_DIFF_Y = 0x43E800000LL;
  v33 = (System_Array_o *)sub_1C32CC8(int___TypeInfo, 4);
  v34.fields.value = Field__PrivateImplementationDetails__F239810D17032E35383496434C64894FFE055A198BA7CFB907D73BAF26A70F0C;
  v35 = v33;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_64219320(v33, v34, 0);
  v36 = UICharaGraphRender_TypeInfo->static_fields;
  v36->SERVANT_NAME_TARGET_LIMIT_COUNT = (struct System_Int32_array *)v35;
  sub_1C32BC4((CGThumbnailListItem_o *)&v36->SERVANT_NAME_TARGET_LIMIT_COUNT, (int32_t)v35, v37, v38);
  v2 = sub_1C32CC8(string___TypeInfo, 6);
  if ( !v2 )
    goto LABEL_50;
  v41 = v2;
  if ( !*(_DWORD *)(v2 + 24) )
    goto LABEL_49;
  v42 = StringLiteral_16629/*"a"*/;
  *(_QWORD *)(v2 + 32) = StringLiteral_16629/*"a"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)(v2 + 32), v42, v39, v40);
  if ( *(_DWORD *)(v41 + 24) <= 1u )
    goto LABEL_49;
  v45 = StringLiteral_16629/*"a"*/;
  *(_QWORD *)(v41 + 40) = StringLiteral_16629/*"a"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)(v41 + 40), v45, v43, v44);
  if ( *(_DWORD *)(v41 + 24) <= 2u )
    goto LABEL_49;
  v48 = StringLiteral_16967/*"b"*/;
  *(_QWORD *)(v41 + 48) = StringLiteral_16967/*"b"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)(v41 + 48), v48, v46, v47);
  if ( *(_DWORD *)(v41 + 24) <= 3u )
    goto LABEL_49;
  v51 = StringLiteral_16967/*"b"*/;
  *(_QWORD *)(v41 + 56) = StringLiteral_16967/*"b"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)(v41 + 56), v51, v49, v50);
  if ( *(_DWORD *)(v41 + 24) <= 4u )
    goto LABEL_49;
  v54 = (int)StringLiteral_17677/*"c"*/;
  *(_QWORD *)(v41 + 64) = StringLiteral_17677/*"c"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)(v41 + 64), v54, v52, v53);
  if ( *(_DWORD *)(v41 + 24) <= 5u )
    goto LABEL_49;
  v57 = (int)StringLiteral_17677/*"c"*/;
  *(_QWORD *)(v41 + 72) = StringLiteral_17677/*"c"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)(v41 + 72), v57, v55, v56);
  v58 = UICharaGraphRender_TypeInfo->static_fields;
  v58->bodyTextureNameTable = (struct System_String_array *)v41;
  sub_1C32BC4((CGThumbnailListItem_o *)&v58->bodyTextureNameTable, v41, v59, v60);
  v2 = sub_1C32CC8(string___TypeInfo, 8);
  if ( !v2 )
    goto LABEL_50;
  v63 = v2;
  if ( !*(_DWORD *)(v2 + 24) )
    goto LABEL_49;
  v64 = StringLiteral_19638/*"frame0"*/;
  *(_QWORD *)(v2 + 32) = StringLiteral_19638/*"frame0"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)(v2 + 32), v64, v61, v62);
  if ( *(_DWORD *)(v63 + 24) <= 1u )
    goto LABEL_49;
  v67 = StringLiteral_19639/*"frame1"*/;
  *(_QWORD *)(v63 + 40) = StringLiteral_19639/*"frame1"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)(v63 + 40), v67, v65, v66);
  if ( *(_DWORD *)(v63 + 24) <= 2u )
    goto LABEL_49;
  v70 = StringLiteral_19644/*"frame2"*/;
  *(_QWORD *)(v63 + 48) = StringLiteral_19644/*"frame2"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)(v63 + 48), v70, v68, v69);
  if ( *(_DWORD *)(v63 + 24) <= 3u )
    goto LABEL_49;
  v73 = StringLiteral_19645/*"frame3"*/;
  *(_QWORD *)(v63 + 56) = StringLiteral_19645/*"frame3"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)(v63 + 56), v73, v71, v72);
  if ( *(_DWORD *)(v63 + 24) <= 4u )
    goto LABEL_49;
  v76 = StringLiteral_19646/*"frame4"*/;
  *(_QWORD *)(v63 + 64) = StringLiteral_19646/*"frame4"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)(v63 + 64), v76, v74, v75);
  if ( *(_DWORD *)(v63 + 24) <= 5u )
    goto LABEL_49;
  v79 = StringLiteral_19647/*"frame5"*/;
  *(_QWORD *)(v63 + 72) = StringLiteral_19647/*"frame5"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)(v63 + 72), v79, v77, v78);
  if ( *(_DWORD *)(v63 + 24) <= 6u )
    goto LABEL_49;
  v82 = StringLiteral_19648/*"frame6"*/;
  *(_QWORD *)(v63 + 80) = StringLiteral_19648/*"frame6"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)(v63 + 80), v82, v80, v81);
  if ( *(_DWORD *)(v63 + 24) <= 7u )
    goto LABEL_49;
  v85 = StringLiteral_19649/*"frame7"*/;
  *(_QWORD *)(v63 + 88) = StringLiteral_19649/*"frame7"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)(v63 + 88), v85, v83, v84);
  v86 = UICharaGraphRender_TypeInfo->static_fields;
  v86->baseFrameList = (struct System_String_array *)v63;
  sub_1C32BC4((CGThumbnailListItem_o *)&v86->baseFrameList, v63, v87, v88);
  v2 = sub_1C32CC8(string___TypeInfo, 8);
  if ( !v2 )
    goto LABEL_50;
  v91 = v2;
  if ( !*(_DWORD *)(v2 + 24) )
    goto LABEL_49;
  v92 = StringLiteral_19642/*"frame10002"*/;
  *(_QWORD *)(v2 + 32) = StringLiteral_19642/*"frame10002"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)(v2 + 32), v92, v89, v90);
  if ( *(_DWORD *)(v91 + 24) <= 1u )
    goto LABEL_49;
  v95 = StringLiteral_19640/*"frame10000"*/;
  *(_QWORD *)(v91 + 40) = StringLiteral_19640/*"frame10000"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)(v91 + 40), v95, v93, v94);
  if ( *(_DWORD *)(v91 + 24) <= 2u )
    goto LABEL_49;
  v98 = StringLiteral_19640/*"frame10000"*/;
  *(_QWORD *)(v91 + 48) = StringLiteral_19640/*"frame10000"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)(v91 + 48), v98, v96, v97);
  if ( *(_DWORD *)(v91 + 24) <= 3u )
    goto LABEL_49;
  v101 = StringLiteral_19640/*"frame10000"*/;
  *(_QWORD *)(v91 + 56) = StringLiteral_19640/*"frame10000"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)(v91 + 56), v101, v99, v100);
  if ( *(_DWORD *)(v91 + 24) <= 4u )
    goto LABEL_49;
  v104 = StringLiteral_19641/*"frame10001"*/;
  *(_QWORD *)(v91 + 64) = StringLiteral_19641/*"frame10001"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)(v91 + 64), v104, v102, v103);
  if ( *(_DWORD *)(v91 + 24) <= 5u
    || (v107 = StringLiteral_19641/*"frame10001"*/,
        *(_QWORD *)(v91 + 72) = StringLiteral_19641/*"frame10001"*/,
        sub_1C32BC4((CGThumbnailListItem_o *)(v91 + 72), v107, v105, v106),
        *(_DWORD *)(v91 + 24) <= 6u)
    || (v110 = StringLiteral_19643/*"frame10003"*/,
        *(_QWORD *)(v91 + 80) = StringLiteral_19643/*"frame10003"*/,
        sub_1C32BC4((CGThumbnailListItem_o *)(v91 + 80), v110, v108, v109),
        *(_DWORD *)(v91 + 24) <= 7u) )
  {
LABEL_49:
    sub_1C32E84(v2);
  }
  v113 = StringLiteral_19643/*"frame10003"*/;
  *(_QWORD *)(v91 + 88) = StringLiteral_19643/*"frame10003"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)(v91 + 88), v113, v111, v112);
  v114 = UICharaGraphRender_TypeInfo->static_fields;
  v114->BaseGrandFrameList = (struct System_String_array *)v91;
  sub_1C32BC4((CGThumbnailListItem_o *)&v114->BaseGrandFrameList, v91, v115, v116);
  v2 = sub_1C32CC8(string___TypeInfo, 6);
  if ( !v2 )
LABEL_50:
    sub_1C32E7C(v2);
  v119 = v2;
  if ( !*(_DWORD *)(v2 + 24) )
    goto LABEL_49;
  v120 = StringLiteral_19638/*"frame0"*/;
  *(_QWORD *)(v2 + 32) = StringLiteral_19638/*"frame0"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)(v2 + 32), v120, v117, v118);
  if ( *(_DWORD *)(v119 + 24) <= 1u )
    goto LABEL_49;
  v123 = StringLiteral_19639/*"frame1"*/;
  *(_QWORD *)(v119 + 40) = StringLiteral_19639/*"frame1"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)(v119 + 40), v123, v121, v122);
  if ( *(_DWORD *)(v119 + 24) <= 2u )
    goto LABEL_49;
  v126 = StringLiteral_19639/*"frame1"*/;
  *(_QWORD *)(v119 + 48) = StringLiteral_19639/*"frame1"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)(v119 + 48), v126, v124, v125);
  if ( *(_DWORD *)(v119 + 24) <= 3u )
    goto LABEL_49;
  v129 = StringLiteral_19644/*"frame2"*/;
  *(_QWORD *)(v119 + 56) = StringLiteral_19644/*"frame2"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)(v119 + 56), v129, v127, v128);
  if ( *(_DWORD *)(v119 + 24) <= 4u )
    goto LABEL_49;
  v132 = StringLiteral_19645/*"frame3"*/;
  *(_QWORD *)(v119 + 64) = StringLiteral_19645/*"frame3"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)(v119 + 64), v132, v130, v131);
  if ( *(_DWORD *)(v119 + 24) <= 5u )
    goto LABEL_49;
  v135 = StringLiteral_19645/*"frame3"*/;
  *(_QWORD *)(v119 + 72) = StringLiteral_19645/*"frame3"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)(v119 + 72), v135, v133, v134);
  v136 = UICharaGraphRender_TypeInfo->static_fields;
  v136->commandCodeBaseFrameList = (struct System_String_array *)v119;
  sub_1C32BC4((CGThumbnailListItem_o *)&v136->commandCodeBaseFrameList, v119, v137, v138);
}


void UICharaGraphRender___ctor(UICharaGraphRender_o *this, const MethodInfo *method)
{
  UITweenRenderer___ctor((UITweenRenderer_o *)this, 0);
}


System_String_o *UICharaGraphRender__GetAssetName(int32_t svtId, int32_t imageLimitCount, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  System_String_o *v5; // x0
  System_String_o *v6; // x0
  int32_t IntValue; // w0
  int32_t v8; // w19
  System_String_o *v9; // x19
  System_String_o **p_defaultName; // x8
  const MethodInfo *v11; // x2
  Il2CppObject *v12; // x19
  System_String_o *v13; // x0
  System_String_o *v14; // x19
  int v16; // [xsp+4h] [xbp-5Ch] BYREF
  Il2CppObject *v17; // [xsp+8h] [xbp-58h] BYREF
  Il2CppObject *v18; // [xsp+10h] [xbp-50h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-48h] BYREF
  System_String_o *defaultName; // [xsp+20h] [xbp-40h] BYREF
  int32_t imageLimitCounta; // [xsp+28h] [xbp-38h] BYREF
  int32_t svtIda; // [xsp+2Ch] [xbp-34h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v23; // 0:x0.16

  imageLimitCounta = imageLimitCount;
  svtIda = svtId;
  if ( (byte_4C39194 & 1) == 0 )
  {
    sub_1C32C20(&AssetManager_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_ImagePartsGroupMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_UserImagePartsGroupMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_1C32C20(&Method_DataMasterBase_UserImagePartsGroupMaster__UserImagePartsGroupEntity__int__TryGetEntity__);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&StringLiteral_21406/*"maleImageId"*/);
    sub_1C32C20(&StringLiteral_4386/*"CharaGraph/100000"*/);
    sub_1C32C20(&StringLiteral_20286/*"imagePartsGroupId"*/);
    sub_1C32C20(&StringLiteral_4385/*"CharaGraph/"*/);
    byte_4C39194 = 1;
  }
  entity = 0;
  defaultName = 0;
  v17 = 0;
  v18 = 0;
  v16 = 0;
  if ( imageLimitCount >= 11 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_46;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    if ( !Instance )
      goto LABEL_46;
    ServantLimitAddMaster__getCostumeId((ServantLimitAddMaster_o *)Instance, &svtIda, &imageLimitCounta, 0);
  }
  v5 = System_Int32__ToString((int32_t)&svtIda, 0);
  defaultName = System_String__Concat_63518544((System_String_o *)StringLiteral_4385/*"CharaGraph/"*/, v5, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !Instance )
    goto LABEL_46;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
         &entity,
         svtIda,
         (const MethodInfo_3396884 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
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
                                    (System_String_o *)StringLiteral_21406/*"maleImageId"*/,
                                    0,
                                    0);
      v16 = (int)Instance;
      if ( (_DWORD)Instance )
      {
        v6 = System_Int32__ToString((int32_t)&v16, 0);
        Instance = (DataManager_o *)System_String__Concat_63518544((System_String_o *)StringLiteral_4385/*"CharaGraph/"*/, v6, 0);
        defaultName = (System_String_o *)Instance;
      }
    }
    if ( !entity )
      goto LABEL_46;
    IntValue = EntityScriptUtil__GetIntValue(
                 (System_Collections_Generic_Dictionary_string__object__o *)entity[12].klass,
                 (System_String_o *)StringLiteral_20286/*"imagePartsGroupId"*/,
                 0,
                 0);
    if ( IntValue )
    {
      v8 = IntValue;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_UserImagePartsGroupMaster___);
      if ( !Instance )
        goto LABEL_46;
      if ( DataMasterBase_object__object__int___TryGetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             &v17,
             v8,
             (const MethodInfo_3396884 *)Method_DataMasterBase_UserImagePartsGroupMaster__UserImagePartsGroupEntity__int__TryGetEntity__) )
      {
        Instance = (DataManager_o *)v17;
        if ( !v17 )
          goto LABEL_46;
        UserImagePartsGroupEntity__ConcatImageValues((UserImagePartsGroupEntity_o *)v17, &defaultName, 0);
      }
      else if ( v8 >= 1 )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_ImagePartsGroupMaster___);
        if ( !Instance )
          goto LABEL_46;
        ImagePartsGroupMaster__ConcatDefaultImageValues((ImagePartsGroupMaster_o *)Instance, v8, &defaultName, 0);
      }
    }
  }
  v9 = defaultName;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( AssetManager__isExistAssetStorage(v9, 0) )
    goto LABEL_32;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_46;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_46;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          &v18,
          svtIda,
          (const MethodInfo_3396884 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
    goto LABEL_44;
  Instance = (DataManager_o *)v18;
  if ( !v18 )
    goto LABEL_46;
  Instance = (DataManager_o *)ServantEntity__get_IsServantMaterialTd((ServantEntity_o *)v18, 0);
  if ( ((unsigned __int8)Instance & 1) == 0 )
  {
LABEL_44:
    p_defaultName = (System_String_o **)&StringLiteral_4386/*"CharaGraph/100000"*/;
    return *p_defaultName;
  }
  if ( !v18 )
LABEL_46:
    sub_1C32E7C(Instance);
  v12 = v18 + 2;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v23.fields.currentCryptoKey = v12;
  *(_QWORD *)&v23.fields.fakeValue = 0;
  v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v23, v11);
  defaultName = System_String__Concat_63518544((System_String_o *)StringLiteral_4385/*"CharaGraph/"*/, v13, 0);
  v14 = defaultName;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__isExistAssetStorage(v14, 0) )
    goto LABEL_44;
LABEL_32:
  p_defaultName = &defaultName;
  return *p_defaultName;
}


System_String_o *UICharaGraphRender__GetAssetName_43807572(
        int32_t imageSvtId,
        System_Int32_array *imagePartsGroupIdxs,
        const MethodInfo *method)
{
  System_String_o *v4; // x0
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  System_String_o *v6; // x0
  int32_t IntValue; // w0
  int32_t v8; // w20
  bool IsNullOrEmpty; // w21
  System_String_o *v10; // x19
  System_String_o **p_defaultName; // x8
  const MethodInfo *v12; // x2
  Il2CppObject *v13; // x19
  System_String_o *v14; // x0
  System_String_o *v15; // x19
  UserImagePartsGroupEntity_o *v17; // [xsp+0h] [xbp-60h] BYREF
  Il2CppObject *v18; // [xsp+8h] [xbp-58h] BYREF
  Il2CppObject *entity; // [xsp+10h] [xbp-50h] BYREF
  System_String_o *defaultName; // [xsp+18h] [xbp-48h] BYREF
  int v21; // [xsp+28h] [xbp-38h] BYREF
  int32_t key; // [xsp+2Ch] [xbp-34h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v23; // 0:x0.16

  key = imageSvtId;
  if ( (byte_4C39195 & 1) == 0 )
  {
    sub_1C32C20(&AssetManager_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_ImagePartsGroupMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_UserImagePartsGroupMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_1C32C20(&Method_DataMasterBase_UserImagePartsGroupMaster__UserImagePartsGroupEntity__int__TryGetEntity__);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&StringLiteral_21406/*"maleImageId"*/);
    sub_1C32C20(&StringLiteral_4386/*"CharaGraph/100000"*/);
    sub_1C32C20(&StringLiteral_20286/*"imagePartsGroupId"*/);
    sub_1C32C20(&StringLiteral_4385/*"CharaGraph/"*/);
    byte_4C39195 = 1;
  }
  entity = 0;
  v17 = 0;
  v18 = 0;
  v21 = 0;
  v4 = System_Int32__ToString((int32_t)&key, 0);
  defaultName = System_String__Concat_63518544((System_String_o *)StringLiteral_4385/*"CharaGraph/"*/, v4, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !Master_object )
    goto LABEL_44;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          Master_object,
          &entity,
          key,
          (const MethodInfo_3396884 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
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
                                                                    (System_String_o *)StringLiteral_21406/*"maleImageId"*/,
                                                                    0,
                                                                    0);
    v21 = (int)Master_object;
    if ( (_DWORD)Master_object )
    {
      v6 = System_Int32__ToString((int32_t)&v21, 0);
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_String__Concat_63518544(
                                                                      (System_String_o *)StringLiteral_4385/*"CharaGraph/"*/,
                                                                      v6,
                                                                      0);
      defaultName = (System_String_o *)Master_object;
    }
  }
  if ( !entity )
    goto LABEL_44;
  IntValue = EntityScriptUtil__GetIntValue(
               (System_Collections_Generic_Dictionary_string__object__o *)entity[12].klass,
               (System_String_o *)StringLiteral_20286/*"imagePartsGroupId"*/,
               0,
               0);
  if ( !IntValue )
    goto LABEL_27;
  v8 = IntValue;
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)imagePartsGroupIdxs, 0);
  if ( DataManager_TypeInfo->_2.cctor_finished )
  {
    if ( IsNullOrEmpty )
      goto LABEL_16;
LABEL_21:
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_ImagePartsGroupMaster___);
    if ( !Master_object )
      goto LABEL_44;
    ImagePartsGroupMaster__ConcatImageValues(
      (ImagePartsGroupMaster_o *)Master_object,
      v8,
      imagePartsGroupIdxs,
      &defaultName,
      0);
    goto LABEL_27;
  }
  j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  if ( !IsNullOrEmpty )
    goto LABEL_21;
LABEL_16:
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_UserImagePartsGroupMaster___);
  if ( !Master_object )
    goto LABEL_44;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         Master_object,
         (Il2CppObject **)&v17,
         v8,
         (const MethodInfo_3396884 *)Method_DataMasterBase_UserImagePartsGroupMaster__UserImagePartsGroupEntity__int__TryGetEntity__) )
  {
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)v17;
    if ( !v17 )
      goto LABEL_44;
    UserImagePartsGroupEntity__ConcatImageValues(v17, &defaultName, 0);
  }
  else
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_ImagePartsGroupMaster___);
    if ( !Master_object )
      goto LABEL_44;
    ImagePartsGroupMaster__ConcatDefaultImageValues((ImagePartsGroupMaster_o *)Master_object, v8, &defaultName, 0);
  }
LABEL_27:
  v10 = defaultName;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( AssetManager__isExistAssetStorage(v10, 0) )
    goto LABEL_30;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Master_object )
    goto LABEL_44;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMasterData_object_(
                                                                  (DataManager_o *)Master_object,
                                                                  (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Master_object )
    goto LABEL_44;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          Master_object,
          &v18,
          key,
          (const MethodInfo_3396884 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
    goto LABEL_42;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)v18;
  if ( !v18 )
    goto LABEL_44;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)ServantEntity__get_IsServantMaterialTd(
                                                                  (ServantEntity_o *)v18,
                                                                  0);
  if ( ((unsigned __int8)Master_object & 1) == 0 )
  {
LABEL_42:
    p_defaultName = (System_String_o **)&StringLiteral_4386/*"CharaGraph/100000"*/;
    return *p_defaultName;
  }
  if ( !v18 )
LABEL_44:
    sub_1C32E7C(Master_object);
  v13 = v18 + 2;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v23.fields.currentCryptoKey = v13;
  *(_QWORD *)&v23.fields.fakeValue = 0;
  v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v23, v12);
  defaultName = System_String__Concat_63518544((System_String_o *)StringLiteral_4385/*"CharaGraph/"*/, v14, 0);
  v15 = defaultName;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__isExistAssetStorage(v15, 0) )
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

  if ( (byte_4C3919C & 1) == 0 )
  {
    sub_1C32C20(&UICharaGraphRender_TypeInfo);
    byte_4C3919C = 1;
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
  Il2CppObject *Object_object__51111776; // x22
  UnityEngine_Texture2D_o *result; // x0
  System_String_o *v15; // x1

  v4 = this;
  if ( (byte_4C3919E & 1) == 0 )
  {
    sub_1C32C20(&Method_AssetData_GetObject_Texture2D____78059424);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&UICharaGraphRender_TypeInfo);
    this = (UICharaGraphRender_o *)sub_1C32C20(&StringLiteral_16629/*"a"*/);
    byte_4C3919E = 1;
  }
  if ( v4->fields.baseKind )
  {
    v4->fields.textureImageLimitCount = 0;
    if ( data )
    {
      LastName = AssetData__get_LastName(data, 0);
      v6 = (System_String_o *)StringLiteral_16629/*"a"*/;
      goto LABEL_19;
    }
LABEL_20:
    sub_1C32E7C(this);
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
      sub_1C32E84(this);
    p_changeGraphSuffix = (System_String_o **)(&v8->fields.curried_first_arg + 8 * imageLimitCount);
    if ( !data )
      goto LABEL_20;
  }
  v10 = *p_changeGraphSuffix;
  v11 = AssetData__get_LastName(data, 0);
  v12 = System_String__Concat_63518544(v11, v10, 0);
  Object_object__51111776 = AssetData__GetObject_object__51111776(
                              data,
                              v12,
                              (const MethodInfo_30BE760 *)Method_AssetData_GetObject_Texture2D____78059424);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Object_object__51111776, 0, 0) )
  {
    result = (UnityEngine_Texture2D_o *)Object_object__51111776;
    v4->fields.textureImageLimitCount = v4->fields.imageLimitCount;
    return result;
  }
  v4->fields.textureImageLimitCount = 0;
  LastName = AssetData__get_LastName(data, 0);
  v6 = v10;
LABEL_19:
  v15 = System_String__Concat_63518544(LastName, v6, 0);
  return (UnityEngine_Texture2D_o *)AssetData__GetObject_object__51111776(
                                      data,
                                      v15,
                                      (const MethodInfo_30BE760 *)Method_AssetData_GetObject_Texture2D____78059424);
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

  if ( (byte_4C3919D & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_ObjectModel_ReadOnlyCollection_Rect__get_Item__);
    sub_1C32C20(&UICharaGraphRender_TypeInfo);
    byte_4C3919D = 1;
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
      sub_1C32E7C(0);
    *(UnityEngine_Rect_o *)&m_XMin = System_Collections_ObjectModel_ReadOnlyCollection_Rect___get_Item(
                                       servantBodyRectTable,
                                       this->fields.textureImageLimitCount,
                                       (const MethodInfo_39949F8 *)Method_System_Collections_ObjectModel_ReadOnlyCollection_Rect__get_Item__);
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
  DataMasterBase_TMaster__TEntity__PKType__o *v4; // x20
  System_String_o *result; // x0
  int v6; // w20
  int32_t frameType; // w21
  _BOOL4 IsGrandServant_k__BackingField; // w19
  System_String_o *v9; // x19
  System_String_o *v10; // x0
  int32_t AdjustFrameTypeForClass; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C391A4 & 1) == 0 )
  {
    sub_1C32C20(&AtlasManager_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMaster_GrandGraphDetailMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_ServantClassMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
    sub_1C32C20(&StringLiteral_16107/*"_"*/);
    sub_1C32C20(&StringLiteral_17977/*"class"*/);
    byte_4C391A4 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_ServantClassMaster___);
  v4 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
  if ( this->fields._IsGrandServant_k__BackingField )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_GrandGraphDetailMaster___);
    if ( !Master_object )
LABEL_18:
      sub_1C32E7C(Master_object);
    Master_object = (Il2CppObject *)GrandGraphDetailMaster__GetGrandClassId(
                                      (GrandGraphDetailMaster_o *)Master_object,
                                      this->fields.classId,
                                      0);
    if ( (int)Master_object <= 0 )
      Master_object = (Il2CppObject *)(unsigned int)this->fields.classId;
    this->fields.classId = (int)Master_object;
  }
  if ( !v4 )
    goto LABEL_18;
  result = (System_String_o *)DataMasterBase_object__object__int___GetEntity(
                                v4,
                                this->fields.classId,
                                (const MethodInfo_3396838 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  if ( result )
  {
    v6 = (int)result;
    frameType = this->fields.frameType;
    IsGrandServant_k__BackingField = this->fields._IsGrandServant_k__BackingField;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AdjustFrameTypeForClass = AtlasManager__GetAdjustFrameTypeForClass(frameType, IsGrandServant_k__BackingField, 0);
    v9 = System_Int32__ToString((int32_t)&AdjustFrameTypeForClass, 0);
    v10 = System_Int32__ToString(v6 + 44, 0);
    return System_String__Concat_63558796(
             (System_String_o *)StringLiteral_17977/*"class"*/,
             v9,
             (System_String_o *)StringLiteral_16107/*"_"*/,
             v10,
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
  if ( (byte_4C39196 & 1) == 0 )
  {
    sub_1C32C20(&AssetManager_TypeInfo);
    sub_1C32C20(&StringLiteral_4591/*"CommandGraph/1000000"*/);
    sub_1C32C20(&StringLiteral_4590/*"CommandGraph/"*/);
    byte_4C39196 = 1;
  }
  v2 = System_Int32__ToString((int32_t)&v5, 0);
  v3 = System_String__Concat_63518544((System_String_o *)StringLiteral_4590/*"CommandGraph/"*/, v2, 0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( AssetManager__isExistAssetStorage(v3, 0) )
    return v3;
  else
    return (System_String_o *)StringLiteral_4591/*"CommandGraph/1000000"*/;
}


System_String_o *UICharaGraphRender__GetExCharaGraphAssetName(int32_t svtId, const MethodInfo *method)
{
  System_String_o *v2; // x0
  System_String_o *v3; // x19
  DataManager_o *Instance; // x0
  const MethodInfo *v5; // x2
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *p_baseSvtId; // x19
  System_String_o *v7; // x0
  ServantEntity_o *v9; // [xsp+0h] [xbp-30h] BYREF
  int32_t key; // [xsp+Ch] [xbp-24h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v11; // 0:x0.16

  key = svtId;
  if ( (byte_4C39197 & 1) == 0 )
  {
    sub_1C32C20(&AssetManager_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C32C20(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&StringLiteral_4388/*"CharaGraph/CharaGraphEx/"*/);
    sub_1C32C20(&StringLiteral_4386/*"CharaGraph/100000"*/);
    sub_1C32C20(&StringLiteral_4385/*"CharaGraph/"*/);
    byte_4C39197 = 1;
  }
  v9 = 0;
  v2 = System_Int32__ToString((int32_t)&key, 0);
  v3 = System_String__Concat_63518544((System_String_o *)StringLiteral_4388/*"CharaGraph/CharaGraphEx/"*/, v2, 0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( AssetManager__isExistAssetStorage(v3, 0) )
    return v3;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_19;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          (Il2CppObject **)&v9,
          key,
          (const MethodInfo_3396884 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
    return (System_String_o *)StringLiteral_4386/*"CharaGraph/100000"*/;
  Instance = (DataManager_o *)v9;
  if ( !v9 )
    goto LABEL_19;
  Instance = (DataManager_o *)ServantEntity__get_IsServantMaterialTd(v9, 0);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    return (System_String_o *)StringLiteral_4386/*"CharaGraph/100000"*/;
  if ( !v9 )
LABEL_19:
    sub_1C32E7C(Instance);
  p_baseSvtId = &v9->fields.baseSvtId;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v11.fields.currentCryptoKey = p_baseSvtId;
  *(_QWORD *)&v11.fields.fakeValue = 0;
  v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v11, v5);
  v3 = System_String__Concat_63518544((System_String_o *)StringLiteral_4385/*"CharaGraph/"*/, v7, 0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__isExistAssetStorage(v3, 0) )
    return (System_String_o *)StringLiteral_4386/*"CharaGraph/100000"*/;
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

  if ( (byte_4C3919F & 1) == 0 )
  {
    sub_1C32C20(&UICharaGraphRender_TypeInfo);
    byte_4C3919F = 1;
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
    sub_1C32E7C(v3);
  }
LABEL_10:
  if ( (unsigned int)imageLimitCount >= LODWORD(SERVANT_NAME_TARGET_LIMIT_COUNT->max_length) )
    sub_1C32E84(v3);
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
  if ( (byte_4C391A0 & 1) == 0 )
  {
    sub_1C32C20(&Method_AssetData_GetObject_Texture2D____78059424);
    sub_1C32C20(&StringLiteral_16967/*"b"*/);
    this = (UICharaGraphRender_o *)sub_1C32C20(&StringLiteral_22147/*"name"*/);
    byte_4C391A0 = 1;
  }
  if ( v4->fields.isEventJoinNameExist )
  {
    if ( data )
    {
      LastName = AssetData__get_LastName(data, 0);
      v6 = (System_String_o *)StringLiteral_22147/*"name"*/;
LABEL_6:
      v7 = System_String__Concat_63518544(LastName, v6, 0);
      return (UnityEngine_Texture2D_o *)AssetData__GetObject_object__51111776(
                                          data,
                                          v7,
                                          (const MethodInfo_30BE760 *)Method_AssetData_GetObject_Texture2D____78059424);
    }
    goto LABEL_11;
  }
  if ( !v4->fields.isNameTrue )
  {
    if ( data )
    {
      LastName = AssetData__get_LastName(data, 0);
      v6 = (System_String_o *)StringLiteral_16967/*"b"*/;
      goto LABEL_6;
    }
LABEL_11:
    sub_1C32E7C(this);
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
  Il2CppObject *MasterData_object; // x0
  int32_t svtId; // w20
  ServantLimitMaster_o *v11; // x21
  const MethodInfo *v12; // x1
  int32_t SaintGraphNameIndex; // w0
  int v14; // w19
  UICharaGraphRender_c *v15; // x0
  struct UICharaGraphRender_StaticFields *static_fields; // x8
  float v17; // s0
  float v18; // s1
  float v19; // s2
  float v20; // s3
  ServantLimitEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF
  UnityEngine_Rect_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  m_Height = defaultValue.fields.m_Height;
  m_Width = defaultValue.fields.m_Width;
  m_YMin = defaultValue.fields.m_YMin;
  m_XMin = defaultValue.fields.m_XMin;
  if ( (byte_4C391A2 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&UICharaGraphRender_TypeInfo);
    byte_4C391A2 = 1;
  }
  if ( !this->fields.baseKind )
  {
    entity = 0;
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_18;
    MasterData_object = DataManager__GetMasterData_object_(
                          Instance,
                          (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
    svtId = this->fields.svtId;
    v11 = (ServantLimitMaster_o *)MasterData_object;
    Instance = (DataManager_o *)UICharaGraphRender__GetNameTargetLimitCount(this, v12);
    if ( !v11 )
      goto LABEL_18;
    m_YMin = 0.0;
    if ( !ServantLimitMaster__TryGetEntity(v11, &entity, svtId, (int32_t)Instance, 0) )
      goto LABEL_17;
    Instance = (DataManager_o *)entity;
    if ( !entity )
      goto LABEL_18;
    if ( !ServantLimitEntity__IsNeedChangeSaintGraphName(entity, 0) )
      goto LABEL_17;
    Instance = (DataManager_o *)entity;
    if ( !entity )
LABEL_18:
      sub_1C32E7C(Instance);
    SaintGraphNameIndex = ServantLimitEntity__GetSaintGraphNameIndex(entity, -1, 0);
    if ( (SaintGraphNameIndex & 0x80000000) == 0 )
    {
      v14 = SaintGraphNameIndex;
      v15 = UICharaGraphRender_TypeInfo;
      if ( !UICharaGraphRender_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UICharaGraphRender_TypeInfo);
        v15 = UICharaGraphRender_TypeInfo;
      }
      static_fields = v15->static_fields;
      if ( v14 < static_fields->MAX_SERVANT_NAME_UV_DIFF_COUNT )
      {
        if ( !v15->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v15);
          static_fields = UICharaGraphRender_TypeInfo->static_fields;
        }
        m_YMin = static_fields->SERVANT_NAME_UV_DIFF_Y * (float)v14;
      }
    }
  }
LABEL_17:
  v17 = m_XMin;
  v18 = m_YMin;
  v19 = m_Width;
  v20 = m_Height;
  result.fields.m_Height = v20;
  result.fields.m_Width = v19;
  result.fields.m_YMin = v18;
  result.fields.m_XMin = v17;
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
  System_String_o *v12; // x0
  System_String_o *v13; // x1
  System_String_o *v14; // x19

  if ( (byte_4C391A3 & 1) == 0 )
  {
    sub_1C32C20(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
    sub_1C32C20(&StringLiteral_16580/*"_sp_"*/);
    sub_1C32C20(&StringLiteral_22958/*"rarity"*/);
    sub_1C32C20(&StringLiteral_16107/*"_"*/);
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C391A3 = 1;
  }
  IsGrandServant_k__BackingField = this->fields._IsGrandServant_k__BackingField;
  v4 = (_DWORD)this + 496;
  v5 = System_Int32__ToString((int)this + 496, 0);
  v6 = (_DWORD)this + 448;
  v7 = v5;
  v8 = System_Int32__ToString(v6, 0);
  if ( IsGrandServant_k__BackingField )
  {
    v9 = System_String__Concat_63558796(
           (System_String_o *)StringLiteral_22958/*"rarity"*/,
           v7,
           (System_String_o *)StringLiteral_16580/*"_sp_"*/,
           v8,
           0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
    if ( !Instance )
      sub_1C32E7C(0);
    if ( AtlasManager__HasCharaGraphOptionAtlas((AtlasManager_o *)Instance, v9, 0) )
      return v9;
    v14 = System_Int32__ToString(v4, 0);
    v8 = System_Int32__ToString(v6, 0);
    v13 = v14;
    v12 = (System_String_o *)StringLiteral_22958/*"rarity"*/;
  }
  else
  {
    v12 = (System_String_o *)StringLiteral_22958/*"rarity"*/;
    v13 = v7;
  }
  return System_String__Concat_63558796(v12, v13, (System_String_o *)StringLiteral_16107/*"_"*/, v8, 0);
}


UnityEngine_Texture2D_o *UICharaGraphRender__GetTrueNameTexture(
        UICharaGraphRender_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  UICharaGraphRender_o *v4; // x20
  System_String_o *LastName; // x0
  System_String_o *v6; // x0
  Il2CppObject *Object_object__51111776; // x0
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
  if ( (byte_4C391A1 & 1) == 0 )
  {
    sub_1C32C20(&Method_AssetData_GetObject_Texture2D____78059424);
    sub_1C32C20(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&StringLiteral_16629/*"a"*/);
    sub_1C32C20(&StringLiteral_19720/*"g"*/);
    this = (UICharaGraphRender_o *)sub_1C32C20(&StringLiteral_22147/*"name"*/);
    byte_4C391A1 = 1;
  }
  if ( !data )
    goto LABEL_17;
  LastName = AssetData__get_LastName(data, 0);
  v6 = System_String__Concat_63518544(LastName, (System_String_o *)StringLiteral_19720/*"g"*/, 0);
  Object_object__51111776 = AssetData__GetObject_object__51111776(
                              data,
                              v6,
                              (const MethodInfo_30BE760 *)Method_AssetData_GetObject_Texture2D____78059424);
  if ( !v4->fields._IsGrandServant_k__BackingField )
    goto LABEL_8;
  v8 = (UnityEngine_Object_o *)Object_object__51111776;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Implicit(v8, 0) )
  {
LABEL_8:
    entity = 0;
    this = (UICharaGraphRender_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( this )
    {
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)this,
                            (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
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
            v13 = &StringLiteral_22147/*"name"*/;
LABEL_15:
            v14 = AssetData__get_LastName(data, 0);
            v15 = System_String__Concat_63518544(v14, (System_String_o *)*v13, 0);
            return (UnityEngine_Texture2D_o *)AssetData__GetObject_object__51111776(
                                                data,
                                                v15,
                                                (const MethodInfo_30BE760 *)Method_AssetData_GetObject_Texture2D____78059424);
          }
LABEL_14:
          v13 = &StringLiteral_16629/*"a"*/;
          goto LABEL_15;
        }
      }
    }
LABEL_17:
    sub_1C32E7C(this);
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
  UnityEngine_Color_o v10; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4

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
    v10.fields.r = *(float *)&v6;
    v10.fields.g = *(float *)&v5;
    v10.fields.b = *(float *)&v4;
    v10.fields.a = alpha;
    TweenRendererColor__Begin(gameObject, duration, v10, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void UICharaGraphRender__MoveAlpha_43814712(
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
  TweenRendererColor_o *v15; // x21
  _BOOL8 v16; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  UnityEngine_Color_o v21; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4

  v11 = *(long double *)&alpha;
  if ( (byte_4C391A5 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C391A5 = 1;
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
    v16 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)callbackObject, 0, 0);
    if ( v16 )
    {
      if ( !callbackObject )
        goto LABEL_18;
      UnityEngine_GameObject__SendMessage_71205516(callbackObject, callbackFunc, 0);
    }
  }
  else
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    v21.fields.r = *(float *)&v8;
    v21.fields.g = *(float *)&v7;
    v21.fields.b = *(float *)&v6;
    v21.fields.a = *(float *)&v11;
    v15 = TweenRendererColor__Begin(gameObject, duration, v21, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)callbackObject, 0, 0) )
    {
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v16 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v15, 0, 0);
      if ( v16 )
      {
        if ( v15 )
        {
          v15->fields.eventReceiver = callbackObject;
          sub_1C32BC4((CGThumbnailListItem_o *)&v15->fields.eventReceiver, (int32_t)callbackObject, v17, v18);
          v15->fields.callWhenFinished = callbackFunc;
          sub_1C32BC4((CGThumbnailListItem_o *)&v15->fields.callWhenFinished, (int32_t)callbackFunc, v19, v20);
          return;
        }
LABEL_18:
        sub_1C32E7C(v16);
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

  if ( (byte_4C39198 & 1) == 0 )
  {
    sub_1C32C20(&BalanceConfig_TypeInfo);
    sub_1C32C20(&ImageLimitCount_TypeInfo);
    byte_4C39198 = 1;
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
  UICharaGraphRender__SetCharacter_43809524(this, changeNameType, saintGraphType, isGrandServant, v20);
}


void UICharaGraphRender__SetCharacter_43809524(
        UICharaGraphRender_o *this,
        int32_t changeNameType,
        int32_t saintGraphType,
        bool isGrandServant,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  Il2CppObject *v10; // x21
  ServantLimitEntity_o *v11; // x24
  struct ServantOverwriteStatus_o *OverwriteStatus_k__BackingField; // x9
  UICharaGraphRender_o *v13; // x8
  UICharaGraphRender_o *v14; // x10
  int32_t Rarity_k__BackingField; // w8
  int32_t *p_ActualRarity_k__BackingField; // x9
  int32_t v17; // w8
  ServantExceedEntity_o *v18; // x23
  int32_t FrameType; // w0
  int32_t rarity; // w24
  int32_t exceedCount; // w8
  int32_t classId; // w24
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  System_String_o *v25; // x0
  struct System_String_o *v26; // x1
  _BOOL4 IsGrandServant_k__BackingField; // w24
  __int64 v28; // x8
  __int64 v29; // x8
  int32_t v30; // w9
  int32_t RarityIcon; // w23
  int32_t v32; // w0
  int32_t v33; // w8
  int EventJoinNameExistSvtId; // w0
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  int32_t v37; // w1
  Il2CppObject *MasterData_object; // x0
  int32_t svtId; // w23
  int32_t imageLimitCount; // w25
  ServantLimitMaster_o *v41; // x24
  int32_t v42; // w0
  int32_t v43; // w23
  struct System_String_o *v44; // x0
  int32_t v45; // w2
  const MethodInfo *v46; // x3
  unsigned int v47; // w8
  ServantLimitEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF
  int32_t FrameId; // [xsp+1Ch] [xbp-54h] BYREF

  if ( (byte_4C3919A & 1) == 0 )
  {
    sub_1C32C20(&AtlasManager_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMasterData_ServantExceedMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_ServantLvDetailMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_CommonReleaseMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_ServantLvDetailMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C32C20(&ImageLimitCount_TypeInfo);
    sub_1C32C20(&Rarity_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&UICharaGraphRender_TypeInfo);
    sub_1C32C20(&StringLiteral_19637/*"frame"*/);
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C3919A = 1;
  }
  FrameId = 0;
  entity = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_75;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_75;
  v10 = DataMasterBase_object__object__int___GetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          this->fields.svtId,
          (const MethodInfo_3396838 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_75;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !Instance )
    goto LABEL_75;
  v11 = ServantLimitMaster__GetEntity((ServantLimitMaster_o *)Instance, this->fields.svtId, this->fields.limitCount, 0);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_75;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ServantExceedMaster___);
  if ( !v10 )
    goto LABEL_75;
  *(int32x2_t *)&this->fields.svtType = vrev64_s32((int32x2_t)v10[5].klass);
  OverwriteStatus_k__BackingField = this->fields._OverwriteStatus_k__BackingField;
  v13 = OverwriteStatus_k__BackingField ? 0LL : this;
  v14 = OverwriteStatus_k__BackingField ? this : 0LL;
  if ( OverwriteStatus_k__BackingField )
  {
    if ( !v14 )
      goto LABEL_75;
    Rarity_k__BackingField = OverwriteStatus_k__BackingField->fields._Rarity_k__BackingField;
    p_ActualRarity_k__BackingField = &OverwriteStatus_k__BackingField->fields._ActualRarity_k__BackingField;
    v14->fields.rarity = Rarity_k__BackingField;
  }
  else
  {
    if ( !v11 || !v13 )
      goto LABEL_75;
    p_ActualRarity_k__BackingField = &v11->fields.rarity;
    v13->fields.rarity = v11->fields.rarity;
  }
  v17 = *p_ActualRarity_k__BackingField;
  this->fields._IsGrandServant_k__BackingField = isGrandServant;
  this->fields.actualRarity = v17;
  if ( !Instance )
    goto LABEL_75;
  Instance = (DataManager_o *)ServantExceedMaster__GetEntity(
                                (ServantExceedMaster_o *)Instance,
                                this->fields.actualRarity,
                                this->fields.exceedCount,
                                0);
  v18 = (ServantExceedEntity_o *)Instance;
  if ( Instance )
  {
    FrameType = ServantExceedEntity__GetFrameType(
                  (ServantExceedEntity_o *)Instance,
                  this->fields._IsGrandServant_k__BackingField,
                  0);
  }
  else
  {
    if ( !v11 )
      goto LABEL_75;
    rarity = v11->fields.rarity;
    if ( !Rarity_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
    FrameType = Rarity__getFrameTypeImage(rarity, 0, 0);
  }
  exceedCount = this->fields.exceedCount;
  this->fields.frameType = FrameType;
  if ( exceedCount >= 1 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_75;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ServantLvDetailMaster___);
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
    v28 = *(_QWORD *)&Instance[1].fields._DispLog;
    if ( IsGrandServant_k__BackingField )
    {
      v29 = *(_QWORD *)(v28 + 120);
      if ( !v29 )
        goto LABEL_75;
    }
    else
    {
      v29 = *(_QWORD *)(v28 + 112);
      if ( !v29 )
        goto LABEL_75;
    }
    v30 = this->fields.frameType;
    if ( (unsigned int)v30 >= *(_DWORD *)(v29 + 24) )
      sub_1C32E84(Instance);
    v26 = *(struct System_String_o **)(v29 + 8LL * v30 + 32);
  }
  else
  {
    v25 = System_Int32__ToString((int32_t)&FrameId, 0);
    v26 = System_String__Concat_63518544((System_String_o *)StringLiteral_19637/*"frame"*/, v25, 0);
  }
  this->fields.frameName = v26;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.frameName, (int32_t)v26, v23, v24);
  if ( this->fields.exceedCount < 1 )
  {
    v32 = 0;
  }
  else
  {
    if ( v18 )
      RarityIcon = ServantExceedEntity__GetRarityIcon(v18, this->fields._IsGrandServant_k__BackingField, 0);
    else
      RarityIcon = 1;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_ServantLvDetailMaster___);
    if ( !Instance )
      goto LABEL_75;
    v32 = ServantLvDetailMaster__GetRarityIcon(
            (ServantLvDetailMaster_o *)Instance,
            this->fields.actualRarity,
            this->fields.lv,
            RarityIcon,
            this->fields._IsGrandServant_k__BackingField,
            0);
  }
  this->fields.exceedType = v32;
  if ( ServantEntity__get_IsCombineMaterial((ServantEntity_o *)v10, 0) )
    v33 = -1;
  else
    v33 = ServantEntity__get_IsServantMaterialTd((ServantEntity_o *)v10, 0) << 31 >> 31;
  this->fields.atk = v33;
  this->fields.hp = v33;
  *(_QWORD *)&this->fields._AddedAtkByGrand_k__BackingField = 0;
  *(_QWORD *)&this->fields.adjustAtk = 0;
  this->fields.realNameCheck = changeNameType;
  this->fields.saintGraphType = saintGraphType;
  this->fields.isEventJoinNameExist = 0;
  EventJoinNameExistSvtId = ServantEntity__GetEventJoinNameExistSvtId((ServantEntity_o *)v10, 0);
  if ( EventJoinNameExistSvtId >= 1 )
  {
    this->fields.imageSvtId = EventJoinNameExistSvtId;
    this->fields.isEventJoinNameExist = 1;
  }
  this->fields.isChangeGraph = 0;
  v37 = StringLiteral_1/*""*/;
  this->fields.changeGraphSuffix = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.changeGraphSuffix, v37, v35, v36);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_75;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  svtId = this->fields.svtId;
  imageLimitCount = this->fields.imageLimitCount;
  v41 = (ServantLimitMaster_o *)MasterData_object;
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  Instance = (DataManager_o *)ImageLimitCount__GetLimitCountByImageLimit(imageLimitCount, 0);
  if ( !v41 )
    goto LABEL_75;
  if ( !ServantLimitMaster__TryGetEntity(v41, &entity, svtId, (int32_t)Instance, 0) )
    goto LABEL_71;
  Instance = (DataManager_o *)entity;
  if ( !entity )
    goto LABEL_75;
  v42 = ServantLimitEntity__GetChangeGraphCommonReleaseId(entity, -1, 0);
  if ( v42 < 0 )
    goto LABEL_71;
  v43 = v42;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  if ( !Instance )
    goto LABEL_75;
  if ( !CommonReleaseMaster__IsOpen((CommonReleaseMaster_o *)Instance, v43, 0, 0, 0) )
    goto LABEL_71;
  this->fields.isChangeGraph = 1;
  Instance = (DataManager_o *)entity;
  if ( !entity )
LABEL_75:
    sub_1C32E7C(Instance);
  v44 = ServantLimitEntity__GetChangeGraphSuffix(entity, (System_String_o *)StringLiteral_1/*""*/, 0);
  this->fields.changeGraphSuffix = v44;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.changeGraphSuffix, (int32_t)v44, v45, v46);
LABEL_71:
  if ( (unsigned int)(changeNameType - 1) >= 3 )
    LOBYTE(v47) = ServantEntity__IsNameTrue((ServantEntity_o *)v10, 0);
  else
    v47 = 0x100u >> (8 * (changeNameType - 1));
  this->fields.isNameTrue = v47;
}


// local variable allocation has failed, the output may be wrong!
void UICharaGraphRender__SetCharacter_43810984(
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
  BalanceConfig_c *v22; // x0
  int32_t v23; // w8
  const MethodInfo *v24; // x4
  int32_t imageLimitCounta; // [xsp+Ch] [xbp-54h] BYREF

  ServantLimitMax = limitCount;
  imageLimitCounta = imageLimitCount;
  if ( (byte_4C39199 & 1) == 0 )
  {
    sub_1C32C20(&BalanceConfig_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&UICharaGraphRender_TypeInfo);
    byte_4C39199 = 1;
  }
  this->fields.imageSvtId = svtId;
  this->fields.svtId = svtId;
  if ( imageLimitCount >= 11 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___)) == 0 )
    {
      sub_1C32E7C(Instance);
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
  sub_1C32BC4(
    (CGThumbnailListItem_o *)&this->fields.imagePartsGroupIdxs,
    (int32_t)idxs,
    limitCount,
    *(const MethodInfo **)&imageLimitCount);
  UICharaGraphRender__SetCharacter_43809524(this, changeNameType, saintGraphType, isGrandServant, v24);
}


void UICharaGraphRender__SetCommand(UICharaGraphRender_o *this, int32_t commandCodeId, const MethodInfo *method)
{
  void *Instance; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  int32_t rarity; // w8
  __int64 v9; // x9
  struct System_String_o *v10; // x1

  if ( (byte_4C3919B & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_CommandCodeMaster___);
    sub_1C32C20(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&UICharaGraphRender_TypeInfo);
    byte_4C3919B = 1;
  }
  this->fields.commandCodeId = commandCodeId;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_CommandCodeMaster___);
  if ( !Instance )
    goto LABEL_11;
  Instance = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               this->fields.commandCodeId,
               (const MethodInfo_3396838 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
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
  v9 = *(_QWORD *)(*((_QWORD *)Instance + 23) + 128LL);
  if ( !v9 )
LABEL_11:
    sub_1C32E7C(Instance);
  if ( (unsigned int)rarity >= *(_DWORD *)(v9 + 24) )
    sub_1C32E84(Instance);
  v10 = *(struct System_String_o **)(v9 + 8LL * rarity + 32);
  this->fields.frameName = v10;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.frameName, (int32_t)v10, v6, v7);
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
  UnityEngine_Transform_o *transform; // x1
  const MethodInfo *v7; // x3

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C32E7C(0);
  if ( UnityEngine_GameObject__get_layer(gameObject, 0) != layer )
  {
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    UICharaGraphRender__SetLayer_43815244(this, transform, layer, v7);
  }
}


void UICharaGraphRender__SetLayer_43815244(
        UICharaGraphRender_o *this,
        UnityEngine_Transform_o *tf,
        int32_t layer,
        const MethodInfo *method)
{
  UICharaGraphRender_o *v6; // x21
  System_Collections_IEnumerator_o *Enumerator; // x19
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v9; // x9
  int32_t *p_offset; // x10
  __int64 v11; // x0
  System_Collections_IEnumerator_c *v12; // x8
  __int64 v13; // x9
  System_Collections_IEnumerator_c **v14; // x10
  __int64 v15; // x0
  UnityEngine_Transform_o *v16; // x0
  const MethodInfo *v17; // x3
  __int64 naturalAligment; // x10
  __int64 v19; // x0
  __int64 v20; // x8
  __int64 v21; // x19
  __int64 v22; // x9
  int *v23; // x10
  __int64 v24; // x0

  v6 = this;
  if ( (byte_4C391A6 & 1) == 0 )
  {
    sub_1C32C20(&System_IDisposable_TypeInfo);
    sub_1C32C20(&System_Collections_IEnumerator_TypeInfo);
    this = (UICharaGraphRender_o *)sub_1C32C20(&UnityEngine_Transform_TypeInfo);
    byte_4C391A6 = 1;
  }
  if ( !tf
    || (this = (UICharaGraphRender_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)tf, 0)) == 0 )
  {
LABEL_33:
    sub_1C32E7C(this);
  }
  UnityEngine_GameObject__set_layer((UnityEngine_GameObject_o *)this, layer, 0);
  Enumerator = UnityEngine_Transform__GetEnumerator(tf, 0);
  if ( !Enumerator )
    sub_1C32E7C(0);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v9 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v9;
        p_offset += 4;
        if ( !v9 )
          goto LABEL_10;
      }
      v11 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_10:
      v11 = sub_1C83438(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v11)(Enumerator, *(_QWORD *)(v11 + 8))
        & 1) == 0 )
      break;
    v12 = Enumerator->klass;
    v13 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v14 = (System_Collections_IEnumerator_c **)&v12->_1.interfaceOffsets->offset;
      while ( *(v14 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v13;
        v14 += 2;
        if ( !v13 )
          goto LABEL_17;
      }
      v15 = (__int64)&v12->vtable[*(_DWORD *)v14 + 1];
    }
    else
    {
LABEL_17:
      v15 = sub_1C83438(Enumerator, System_Collections_IEnumerator_TypeInfo, 1);
    }
    v16 = (UnityEngine_Transform_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v15)(
                                       Enumerator,
                                       *(_QWORD *)(v15 + 8));
    if ( v16 )
    {
      naturalAligment = UnityEngine_Transform_TypeInfo->_2.naturalAligment;
      if ( v16->klass->_2.naturalAligment < (unsigned int)naturalAligment
        || (UnityEngine_Transform_c *)v16->klass->_2.typeHierarchy[naturalAligment - 1] != UnityEngine_Transform_TypeInfo )
      {
        sub_1C3313C(v16);
        goto LABEL_33;
      }
    }
    UICharaGraphRender__SetLayer_43815244(v6, v16, layer, v17);
  }
  v19 = sub_1C32D5C(Enumerator, System_IDisposable_TypeInfo);
  if ( v19 )
  {
    v20 = *(_QWORD *)v19;
    v21 = v19;
    v22 = *(unsigned __int16 *)(*(_QWORD *)v19 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v19 + 302LL) )
    {
      v23 = (int *)(*(_QWORD *)(v20 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v23 - 1) != System_IDisposable_TypeInfo )
      {
        --v22;
        v23 += 4;
        if ( !v22 )
          goto LABEL_28;
      }
      v24 = v20 + 16LL * *v23 + 312;
    }
    else
    {
LABEL_28:
      v24 = sub_1C83438(v19, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v24)(v21, *(_QWORD *)(v24 + 8));
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
  sub_1C32BC4(
    (CGThumbnailListItem_o *)&this->fields._OverwriteStatus_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}