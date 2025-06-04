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
  struct UICharaGraphRender_StaticFields *static_fields; // x8
  __int64 v23; // x0
  __int64 v24; // x1
  __int64 v25; // x2
  unsigned int v26; // w8
  struct UICharaGraphRender_StaticFields *v27; // x9
  __int64 v28; // d2
  struct UICharaGraphRender_StaticFields *v29; // x9
  __int64 v30; // d2
  struct UICharaGraphRender_StaticFields *v31; // x9
  __int64 v32; // d3
  struct UICharaGraphRender_StaticFields *v33; // x9
  __int64 v34; // d2
  struct UICharaGraphRender_StaticFields *v35; // x9
  __int64 v36; // d3
  struct UICharaGraphRender_StaticFields *v37; // x9
  __int64 v38; // d2
  struct UICharaGraphRender_StaticFields *v39; // x9
  __int64 v40; // d3
  struct UICharaGraphRender_StaticFields *v41; // x9
  __int64 v42; // d2
  struct UICharaGraphRender_StaticFields *v43; // x9
  __int64 v44; // d3
  struct UICharaGraphRender_StaticFields *v45; // x9
  __int64 v46; // d2
  struct UICharaGraphRender_StaticFields *v47; // x9
  __int64 v48; // d3
  struct UICharaGraphRender_StaticFields *v49; // x8
  __int64 v50; // d2
  System_Collections_ObjectModel_ReadOnlyCollection_T__o *Only_Rect; // x0
  struct UICharaGraphRender_StaticFields *v52; // x8
  int32_t v53; // w2
  const MethodInfo *v54; // x3
  UICharaGraphRender_c *v55; // x8
  System_Array_o *v56; // x0
  System_Array_o *v57; // x19
  struct UICharaGraphRender_StaticFields *v58; // x0
  int32_t v59; // w2
  const MethodInfo *v60; // x3
  const MethodInfo *v61; // x3
  __int64 v62; // x19
  int32_t v63; // w1
  const MethodInfo *v64; // x3
  int32_t v65; // w1
  const MethodInfo *v66; // x3
  int32_t v67; // w1
  const MethodInfo *v68; // x3
  int32_t v69; // w1
  const MethodInfo *v70; // x3
  int32_t v71; // w1
  const MethodInfo *v72; // x3
  int32_t v73; // w1
  struct UICharaGraphRender_StaticFields *v74; // x0
  int32_t v75; // w2
  const MethodInfo *v76; // x3
  const MethodInfo *v77; // x3
  __int64 v78; // x19
  int32_t v79; // w1
  const MethodInfo *v80; // x3
  int32_t v81; // w1
  const MethodInfo *v82; // x3
  int32_t v83; // w1
  const MethodInfo *v84; // x3
  int32_t v85; // w1
  const MethodInfo *v86; // x3
  int32_t v87; // w1
  const MethodInfo *v88; // x3
  int32_t v89; // w1
  const MethodInfo *v90; // x3
  int32_t v91; // w1
  const MethodInfo *v92; // x3
  int32_t v93; // w1
  struct UICharaGraphRender_StaticFields *v94; // x0
  int32_t v95; // w2
  const MethodInfo *v96; // x3
  const MethodInfo *v97; // x3
  __int64 v98; // x19
  int32_t v99; // w1
  const MethodInfo *v100; // x3
  int32_t v101; // w1
  const MethodInfo *v102; // x3
  int32_t v103; // w1
  const MethodInfo *v104; // x3
  int32_t v105; // w1
  const MethodInfo *v106; // x3
  int32_t v107; // w1
  const MethodInfo *v108; // x3
  int32_t v109; // w1
  const MethodInfo *v110; // x3
  int32_t v111; // w1
  const MethodInfo *v112; // x3
  int32_t v113; // w1
  struct UICharaGraphRender_StaticFields *v114; // x0
  int32_t v115; // w2
  const MethodInfo *v116; // x3
  const MethodInfo *v117; // x3
  __int64 v118; // x19
  int32_t v119; // w1
  const MethodInfo *v120; // x3
  int32_t v121; // w1
  const MethodInfo *v122; // x3
  int32_t v123; // w1
  const MethodInfo *v124; // x3
  int32_t v125; // w1
  const MethodInfo *v126; // x3
  int32_t v127; // w1
  const MethodInfo *v128; // x3
  int32_t v129; // w1
  struct UICharaGraphRender_StaticFields *v130; // x0
  int32_t v131; // w2
  const MethodInfo *v132; // x3
  System_RuntimeFieldHandle_o v133; // 0:w1.4

  if ( (byte_4B03787 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Array_AsReadOnly_Rect___, v1);
    sub_1BC3008(&int___TypeInfo, v2);
    sub_1BC3008(&UnityEngine_Rect___TypeInfo, v3);
    sub_1BC3008(&string___TypeInfo, v4);
    sub_1BC3008(
      &Field__PrivateImplementationDetails__F239810D17032E35383496434C64894FFE055A198BA7CFB907D73BAF26A70F0C,
      v5);
    sub_1BC3008(&UICharaGraphRender_TypeInfo, v6);
    sub_1BC3008(&StringLiteral_19464/*"frame5"*/, v7);
    sub_1BC3008(&StringLiteral_19457/*"frame10000"*/, v8);
    sub_1BC3008(&StringLiteral_16482/*"a"*/, v9);
    sub_1BC3008(&StringLiteral_19465/*"frame6"*/, v10);
    sub_1BC3008(&StringLiteral_19466/*"frame7"*/, v11);
    sub_1BC3008(&StringLiteral_16819/*"b"*/, v12);
    sub_1BC3008(&StringLiteral_17521/*"c"*/, v13);
    sub_1BC3008(&StringLiteral_19458/*"frame10001"*/, v14);
    sub_1BC3008(&StringLiteral_19460/*"frame10003"*/, v15);
    sub_1BC3008(&StringLiteral_19462/*"frame3"*/, v16);
    sub_1BC3008(&StringLiteral_19456/*"frame1"*/, v17);
    sub_1BC3008(&StringLiteral_19459/*"frame10002"*/, v18);
    sub_1BC3008(&StringLiteral_19455/*"frame0"*/, v19);
    sub_1BC3008(&StringLiteral_19461/*"frame2"*/, v20);
    sub_1BC3008(&StringLiteral_19463/*"frame4"*/, v21);
    byte_4B03787 = 1;
  }
  static_fields = UICharaGraphRender_TypeInfo->static_fields;
  *(_OWORD *)&static_fields->OTHER_IMAGE_LIMIT_COUNT = xmmword_BDE630;
  *(_QWORD *)&static_fields->SERVANT_BODY_SIZE_Y = 0x1FE000002D2LL;
  *(_OWORD *)&static_fields->SERVANT_BODY_U = xmmword_BDF330;
  static_fields->SERVANT_EQUIP_BODY_SIZE_Y = 872;
  *(_OWORD *)&static_fields->SERVANT_EQUIP_BODY_U = xmmword_BDF560;
  v23 = sub_1BC30B0(UnityEngine_Rect___TypeInfo, 12LL);
  if ( !v23 )
    goto LABEL_50;
  v26 = *(_DWORD *)(v23 + 24);
  if ( !v26 )
    goto LABEL_49;
  v27 = UICharaGraphRender_TypeInfo->static_fields;
  v28 = *(_QWORD *)&v27->SERVANT_BODY_W;
  *(float32x2_t *)(v23 + 32) = vadd_f32(*(float32x2_t *)&v27->SERVANT_BODY_U, 0LL);
  *(_QWORD *)(v23 + 40) = v28;
  if ( v26 == 1 )
    goto LABEL_49;
  v29 = UICharaGraphRender_TypeInfo->static_fields;
  v30 = *(_QWORD *)&v29->SERVANT_BODY_W;
  *(float32x2_t *)(v23 + 48) = vadd_f32(*(float32x2_t *)&v29->SERVANT_BODY_U, (float32x2_t)1056964608LL);
  *(_QWORD *)(v23 + 56) = v30;
  if ( v26 <= 2 )
    goto LABEL_49;
  v31 = UICharaGraphRender_TypeInfo->static_fields;
  v32 = *(_QWORD *)&v31->SERVANT_BODY_W;
  *(float32x2_t *)(v23 + 64) = vadd_f32(*(float32x2_t *)&v31->SERVANT_BODY_U, 0LL);
  *(_QWORD *)(v23 + 72) = v32;
  if ( v26 == 3 )
    goto LABEL_49;
  v33 = UICharaGraphRender_TypeInfo->static_fields;
  v34 = *(_QWORD *)&v33->SERVANT_BODY_W;
  *(float32x2_t *)(v23 + 80) = vadd_f32(*(float32x2_t *)&v33->SERVANT_BODY_U, (float32x2_t)1056964608LL);
  *(_QWORD *)(v23 + 88) = v34;
  if ( v26 <= 4 )
    goto LABEL_49;
  v35 = UICharaGraphRender_TypeInfo->static_fields;
  v36 = *(_QWORD *)&v35->SERVANT_BODY_W;
  *(float32x2_t *)(v23 + 96) = vadd_f32(*(float32x2_t *)&v35->SERVANT_BODY_U, 0LL);
  *(_QWORD *)(v23 + 104) = v36;
  if ( v26 == 5 )
    goto LABEL_49;
  v37 = UICharaGraphRender_TypeInfo->static_fields;
  v38 = *(_QWORD *)&v37->SERVANT_BODY_W;
  *(float32x2_t *)(v23 + 112) = vadd_f32(*(float32x2_t *)&v37->SERVANT_BODY_U, (float32x2_t)1056964608LL);
  *(_QWORD *)(v23 + 120) = v38;
  if ( v26 <= 6 )
    goto LABEL_49;
  v39 = UICharaGraphRender_TypeInfo->static_fields;
  v40 = *(_QWORD *)&v39->SERVANT_BODY_W;
  *(float32x2_t *)(v23 + 128) = vadd_f32(*(float32x2_t *)&v39->SERVANT_BODY_U, 0LL);
  *(_QWORD *)(v23 + 136) = v40;
  if ( v26 == 7 )
    goto LABEL_49;
  v41 = UICharaGraphRender_TypeInfo->static_fields;
  v42 = *(_QWORD *)&v41->SERVANT_BODY_W;
  *(float32x2_t *)(v23 + 144) = vadd_f32(*(float32x2_t *)&v41->SERVANT_BODY_U, (float32x2_t)1056964608LL);
  *(_QWORD *)(v23 + 152) = v42;
  if ( v26 <= 8 )
    goto LABEL_49;
  v43 = UICharaGraphRender_TypeInfo->static_fields;
  v44 = *(_QWORD *)&v43->SERVANT_BODY_W;
  *(float32x2_t *)(v23 + 160) = vadd_f32(*(float32x2_t *)&v43->SERVANT_BODY_U, 0LL);
  *(_QWORD *)(v23 + 168) = v44;
  if ( v26 == 9 )
    goto LABEL_49;
  v45 = UICharaGraphRender_TypeInfo->static_fields;
  v46 = *(_QWORD *)&v45->SERVANT_BODY_W;
  *(float32x2_t *)(v23 + 176) = vadd_f32(*(float32x2_t *)&v45->SERVANT_BODY_U, (float32x2_t)1056964608LL);
  *(_QWORD *)(v23 + 184) = v46;
  if ( v26 <= 0xA )
    goto LABEL_49;
  v47 = UICharaGraphRender_TypeInfo->static_fields;
  v48 = *(_QWORD *)&v47->SERVANT_BODY_W;
  *(float32x2_t *)(v23 + 192) = vadd_f32(*(float32x2_t *)&v47->SERVANT_BODY_U, 0LL);
  *(_QWORD *)(v23 + 200) = v48;
  if ( v26 == 11 )
    goto LABEL_49;
  v49 = UICharaGraphRender_TypeInfo->static_fields;
  v50 = *(_QWORD *)&v49->SERVANT_BODY_W;
  *(float32x2_t *)(v23 + 208) = vadd_f32(*(float32x2_t *)&v49->SERVANT_BODY_U, (float32x2_t)1056964608LL);
  *(_QWORD *)(v23 + 216) = v50;
  Only_Rect = System_Array__AsReadOnly_Rect_(
                (UnityEngine_Rect_array *)v23,
                (const MethodInfo_30CCB9C *)Method_System_Array_AsReadOnly_Rect___);
  v52 = UICharaGraphRender_TypeInfo->static_fields;
  v52->servantBodyRectTable = (struct System_Collections_ObjectModel_ReadOnlyCollection_Rect__o *)Only_Rect;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v52->servantBodyRectTable, (int32_t)Only_Rect, v53, v54);
  v55 = UICharaGraphRender_TypeInfo;
  UICharaGraphRender_TypeInfo->static_fields->servantEquipBodyRect = *(struct UnityEngine_Rect_o *)&UICharaGraphRender_TypeInfo->static_fields->SERVANT_EQUIP_BODY_U;
  *(_QWORD *)&v55->static_fields->SERVANT_NAME_UV_DIFF_Y = 0x43E800000LL;
  v56 = (System_Array_o *)sub_1BC30B0(int___TypeInfo, 4LL);
  v133.fields.value = Field__PrivateImplementationDetails__F239810D17032E35383496434C64894FFE055A198BA7CFB907D73BAF26A70F0C;
  v57 = v56;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_63047724(v56, v133, 0LL);
  v58 = UICharaGraphRender_TypeInfo->static_fields;
  v58->SERVANT_NAME_TARGET_LIMIT_COUNT = (struct System_Int32_array *)v57;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v58->SERVANT_NAME_TARGET_LIMIT_COUNT, (int32_t)v57, v59, v60);
  v23 = sub_1BC30B0(string___TypeInfo, 6LL);
  if ( !v23 )
    goto LABEL_50;
  v62 = v23;
  if ( !*(_DWORD *)(v23 + 24) )
    goto LABEL_49;
  v63 = StringLiteral_16482/*"a"*/;
  *(_QWORD *)(v23 + 32) = StringLiteral_16482/*"a"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v23 + 32), v63, v25, v61);
  if ( *(_DWORD *)(v62 + 24) <= 1u )
    goto LABEL_49;
  v65 = StringLiteral_16482/*"a"*/;
  *(_QWORD *)(v62 + 40) = StringLiteral_16482/*"a"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v62 + 40), v65, v25, v64);
  if ( *(_DWORD *)(v62 + 24) <= 2u )
    goto LABEL_49;
  v67 = StringLiteral_16819/*"b"*/;
  *(_QWORD *)(v62 + 48) = StringLiteral_16819/*"b"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v62 + 48), v67, v25, v66);
  if ( *(_DWORD *)(v62 + 24) <= 3u )
    goto LABEL_49;
  v69 = StringLiteral_16819/*"b"*/;
  *(_QWORD *)(v62 + 56) = StringLiteral_16819/*"b"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v62 + 56), v69, v25, v68);
  if ( *(_DWORD *)(v62 + 24) <= 4u )
    goto LABEL_49;
  v71 = (int)StringLiteral_17521/*"c"*/;
  *(_QWORD *)(v62 + 64) = StringLiteral_17521/*"c"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v62 + 64), v71, v25, v70);
  if ( *(_DWORD *)(v62 + 24) <= 5u )
    goto LABEL_49;
  v73 = (int)StringLiteral_17521/*"c"*/;
  *(_QWORD *)(v62 + 72) = StringLiteral_17521/*"c"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v62 + 72), v73, v25, v72);
  v74 = UICharaGraphRender_TypeInfo->static_fields;
  v74->bodyTextureNameTable = (struct System_String_array *)v62;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v74->bodyTextureNameTable, v62, v75, v76);
  v23 = sub_1BC30B0(string___TypeInfo, 8LL);
  if ( !v23 )
    goto LABEL_50;
  v78 = v23;
  if ( !*(_DWORD *)(v23 + 24) )
    goto LABEL_49;
  v79 = StringLiteral_19455/*"frame0"*/;
  *(_QWORD *)(v23 + 32) = StringLiteral_19455/*"frame0"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v23 + 32), v79, v25, v77);
  if ( *(_DWORD *)(v78 + 24) <= 1u )
    goto LABEL_49;
  v81 = StringLiteral_19456/*"frame1"*/;
  *(_QWORD *)(v78 + 40) = StringLiteral_19456/*"frame1"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v78 + 40), v81, v25, v80);
  if ( *(_DWORD *)(v78 + 24) <= 2u )
    goto LABEL_49;
  v83 = StringLiteral_19461/*"frame2"*/;
  *(_QWORD *)(v78 + 48) = StringLiteral_19461/*"frame2"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v78 + 48), v83, v25, v82);
  if ( *(_DWORD *)(v78 + 24) <= 3u )
    goto LABEL_49;
  v85 = StringLiteral_19462/*"frame3"*/;
  *(_QWORD *)(v78 + 56) = StringLiteral_19462/*"frame3"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v78 + 56), v85, v25, v84);
  if ( *(_DWORD *)(v78 + 24) <= 4u )
    goto LABEL_49;
  v87 = StringLiteral_19463/*"frame4"*/;
  *(_QWORD *)(v78 + 64) = StringLiteral_19463/*"frame4"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v78 + 64), v87, v25, v86);
  if ( *(_DWORD *)(v78 + 24) <= 5u )
    goto LABEL_49;
  v89 = StringLiteral_19464/*"frame5"*/;
  *(_QWORD *)(v78 + 72) = StringLiteral_19464/*"frame5"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v78 + 72), v89, v25, v88);
  if ( *(_DWORD *)(v78 + 24) <= 6u )
    goto LABEL_49;
  v91 = StringLiteral_19465/*"frame6"*/;
  *(_QWORD *)(v78 + 80) = StringLiteral_19465/*"frame6"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v78 + 80), v91, v25, v90);
  if ( *(_DWORD *)(v78 + 24) <= 7u )
    goto LABEL_49;
  v93 = StringLiteral_19466/*"frame7"*/;
  *(_QWORD *)(v78 + 88) = StringLiteral_19466/*"frame7"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v78 + 88), v93, v25, v92);
  v94 = UICharaGraphRender_TypeInfo->static_fields;
  v94->baseFrameList = (struct System_String_array *)v78;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v94->baseFrameList, v78, v95, v96);
  v23 = sub_1BC30B0(string___TypeInfo, 8LL);
  if ( !v23 )
    goto LABEL_50;
  v98 = v23;
  if ( !*(_DWORD *)(v23 + 24) )
    goto LABEL_49;
  v99 = StringLiteral_19459/*"frame10002"*/;
  *(_QWORD *)(v23 + 32) = StringLiteral_19459/*"frame10002"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v23 + 32), v99, v25, v97);
  if ( *(_DWORD *)(v98 + 24) <= 1u )
    goto LABEL_49;
  v101 = StringLiteral_19457/*"frame10000"*/;
  *(_QWORD *)(v98 + 40) = StringLiteral_19457/*"frame10000"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v98 + 40), v101, v25, v100);
  if ( *(_DWORD *)(v98 + 24) <= 2u )
    goto LABEL_49;
  v103 = StringLiteral_19457/*"frame10000"*/;
  *(_QWORD *)(v98 + 48) = StringLiteral_19457/*"frame10000"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v98 + 48), v103, v25, v102);
  if ( *(_DWORD *)(v98 + 24) <= 3u )
    goto LABEL_49;
  v105 = StringLiteral_19457/*"frame10000"*/;
  *(_QWORD *)(v98 + 56) = StringLiteral_19457/*"frame10000"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v98 + 56), v105, v25, v104);
  if ( *(_DWORD *)(v98 + 24) <= 4u )
    goto LABEL_49;
  v107 = StringLiteral_19458/*"frame10001"*/;
  *(_QWORD *)(v98 + 64) = StringLiteral_19458/*"frame10001"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v98 + 64), v107, v25, v106);
  if ( *(_DWORD *)(v98 + 24) <= 5u
    || (v109 = StringLiteral_19458/*"frame10001"*/,
        *(_QWORD *)(v98 + 72) = StringLiteral_19458/*"frame10001"*/,
        sub_1BC2FAC((CGThumbnailListItem_o *)(v98 + 72), v109, v25, v108),
        *(_DWORD *)(v98 + 24) <= 6u)
    || (v111 = StringLiteral_19460/*"frame10003"*/,
        *(_QWORD *)(v98 + 80) = StringLiteral_19460/*"frame10003"*/,
        sub_1BC2FAC((CGThumbnailListItem_o *)(v98 + 80), v111, v25, v110),
        *(_DWORD *)(v98 + 24) <= 7u) )
  {
LABEL_49:
    sub_1BC326C(v23, v24, v25);
  }
  v113 = StringLiteral_19460/*"frame10003"*/;
  *(_QWORD *)(v98 + 88) = StringLiteral_19460/*"frame10003"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v98 + 88), v113, v25, v112);
  v114 = UICharaGraphRender_TypeInfo->static_fields;
  v114->BaseGrandFrameList = (struct System_String_array *)v98;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v114->BaseGrandFrameList, v98, v115, v116);
  v23 = sub_1BC30B0(string___TypeInfo, 6LL);
  if ( !v23 )
LABEL_50:
    sub_1BC3264(v23, v24);
  v118 = v23;
  if ( !*(_DWORD *)(v23 + 24) )
    goto LABEL_49;
  v119 = StringLiteral_19455/*"frame0"*/;
  *(_QWORD *)(v23 + 32) = StringLiteral_19455/*"frame0"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v23 + 32), v119, v25, v117);
  if ( *(_DWORD *)(v118 + 24) <= 1u )
    goto LABEL_49;
  v121 = StringLiteral_19456/*"frame1"*/;
  *(_QWORD *)(v118 + 40) = StringLiteral_19456/*"frame1"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v118 + 40), v121, v25, v120);
  if ( *(_DWORD *)(v118 + 24) <= 2u )
    goto LABEL_49;
  v123 = StringLiteral_19456/*"frame1"*/;
  *(_QWORD *)(v118 + 48) = StringLiteral_19456/*"frame1"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v118 + 48), v123, v25, v122);
  if ( *(_DWORD *)(v118 + 24) <= 3u )
    goto LABEL_49;
  v125 = StringLiteral_19461/*"frame2"*/;
  *(_QWORD *)(v118 + 56) = StringLiteral_19461/*"frame2"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v118 + 56), v125, v25, v124);
  if ( *(_DWORD *)(v118 + 24) <= 4u )
    goto LABEL_49;
  v127 = StringLiteral_19462/*"frame3"*/;
  *(_QWORD *)(v118 + 64) = StringLiteral_19462/*"frame3"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v118 + 64), v127, v25, v126);
  if ( *(_DWORD *)(v118 + 24) <= 5u )
    goto LABEL_49;
  v129 = StringLiteral_19462/*"frame3"*/;
  *(_QWORD *)(v118 + 72) = StringLiteral_19462/*"frame3"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v118 + 72), v129, v25, v128);
  v130 = UICharaGraphRender_TypeInfo->static_fields;
  v130->commandCodeBaseFrameList = (struct System_String_array *)v118;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v130->commandCodeBaseFrameList, v118, v131, v132);
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
  if ( (byte_4B03774 & 1) == 0 )
  {
    sub_1BC3008(&AssetManager_TypeInfo, *(_QWORD *)&imageLimitCount);
    sub_1BC3008(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, v4);
    sub_1BC3008(&Method_DataManager_GetMasterData_ServantMaster___, v5);
    sub_1BC3008(&Method_DataManager_GetMaster_ImagePartsGroupMaster___, v6);
    sub_1BC3008(&Method_DataManager_GetMaster_ServantMaster___, v7);
    sub_1BC3008(&Method_DataManager_GetMaster_UserImagePartsGroupMaster___, v8);
    sub_1BC3008(&DataManager_TypeInfo, v9);
    sub_1BC3008(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v10);
    sub_1BC3008(&Method_DataMasterBase_UserImagePartsGroupMaster__UserImagePartsGroupEntity__int__TryGetEntity__, v11);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    sub_1BC3008(&StringLiteral_21198/*"maleImageId"*/, v14);
    sub_1BC3008(&StringLiteral_4348/*"CharaGraph/100000"*/, v15);
    sub_1BC3008(&StringLiteral_20093/*"imagePartsGroupId"*/, v16);
    sub_1BC3008(&StringLiteral_4347/*"CharaGraph/"*/, v17);
    byte_4B03774 = 1;
  }
  entity = 0LL;
  defaultName = 0LL;
  v32 = 0LL;
  v33 = 0LL;
  v31 = 0;
  if ( imageLimitCount >= 11 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_46;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    if ( !Instance )
      goto LABEL_46;
    ServantLimitAddMaster__getCostumeId((ServantLimitAddMaster_o *)Instance, &svtIda, &imageLimitCounta, 0LL);
  }
  v20 = System_Int32__ToString((int32_t)&svtIda, 0LL);
  defaultName = System_String__Concat_62348648((System_String_o *)StringLiteral_4347/*"CharaGraph/"*/, v20, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !Instance )
    goto LABEL_46;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
         &entity,
         svtIda,
         (const MethodInfo_32AF0BC *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
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
                                    (System_String_o *)StringLiteral_21198/*"maleImageId"*/,
                                    0,
                                    0LL);
      v31 = (int)Instance;
      if ( (_DWORD)Instance )
      {
        v21 = System_Int32__ToString((int32_t)&v31, 0LL);
        Instance = (DataManager_o *)System_String__Concat_62348648((System_String_o *)StringLiteral_4347/*"CharaGraph/"*/, v21, 0LL);
        defaultName = (System_String_o *)Instance;
      }
    }
    if ( !entity )
      goto LABEL_46;
    IntValue = EntityScriptUtil__GetIntValue(
                 (System_Collections_Generic_Dictionary_string__object__o *)entity[12].klass,
                 (System_String_o *)StringLiteral_20093/*"imagePartsGroupId"*/,
                 0,
                 0LL);
    if ( IntValue )
    {
      v23 = IntValue;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_UserImagePartsGroupMaster___);
      if ( !Instance )
        goto LABEL_46;
      if ( DataMasterBase_object__object__int___TryGetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             &v32,
             v23,
             (const MethodInfo_32AF0BC *)Method_DataMasterBase_UserImagePartsGroupMaster__UserImagePartsGroupEntity__int__TryGetEntity__) )
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
        Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_ImagePartsGroupMaster___);
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
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_46;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_46;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          &v33,
          svtIda,
          (const MethodInfo_32AF0BC *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
    goto LABEL_44;
  Instance = (DataManager_o *)v33;
  if ( !v33 )
    goto LABEL_46;
  Instance = (DataManager_o *)ServantEntity__get_IsServantMaterialTd((ServantEntity_o *)v33, 0LL);
  if ( ((unsigned __int8)Instance & 1) == 0 )
  {
LABEL_44:
    p_defaultName = (System_String_o **)&StringLiteral_4348/*"CharaGraph/100000"*/;
    return *p_defaultName;
  }
  if ( !v33 )
LABEL_46:
    sub_1BC3264(Instance, v19);
  v27 = v33 + 2;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v38.fields.currentCryptoKey = v27;
  *(_QWORD *)&v38.fields.fakeValue = 0LL;
  v28 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v38, v26);
  defaultName = System_String__Concat_62348648((System_String_o *)StringLiteral_4347/*"CharaGraph/"*/, v28, 0LL);
  v29 = defaultName;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__isExistAssetStorage(v29, 0LL) )
    goto LABEL_44;
LABEL_32:
  p_defaultName = &defaultName;
  return *p_defaultName;
}


System_String_o *__fastcall UICharaGraphRender__GetAssetName_42874608(
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
  if ( (byte_4B03775 & 1) == 0 )
  {
    sub_1BC3008(&AssetManager_TypeInfo, imagePartsGroupIdxs);
    sub_1BC3008(&Method_DataManager_GetMasterData_ServantMaster___, v4);
    sub_1BC3008(&Method_DataManager_GetMaster_ImagePartsGroupMaster___, v5);
    sub_1BC3008(&Method_DataManager_GetMaster_ServantMaster___, v6);
    sub_1BC3008(&Method_DataManager_GetMaster_UserImagePartsGroupMaster___, v7);
    sub_1BC3008(&DataManager_TypeInfo, v8);
    sub_1BC3008(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v9);
    sub_1BC3008(&Method_DataMasterBase_UserImagePartsGroupMaster__UserImagePartsGroupEntity__int__TryGetEntity__, v10);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    sub_1BC3008(&StringLiteral_21198/*"maleImageId"*/, v13);
    sub_1BC3008(&StringLiteral_4348/*"CharaGraph/100000"*/, v14);
    sub_1BC3008(&StringLiteral_20093/*"imagePartsGroupId"*/, v15);
    sub_1BC3008(&StringLiteral_4347/*"CharaGraph/"*/, v16);
    byte_4B03775 = 1;
  }
  entity = 0LL;
  v31 = 0LL;
  v32 = 0LL;
  v35 = 0;
  v17 = System_Int32__ToString((int32_t)&key, 0LL);
  defaultName = System_String__Concat_62348648((System_String_o *)StringLiteral_4347/*"CharaGraph/"*/, v17, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !Master_object )
    goto LABEL_44;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          Master_object,
          &entity,
          key,
          (const MethodInfo_32AF0BC *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
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
                                                                    (System_String_o *)StringLiteral_21198/*"maleImageId"*/,
                                                                    0,
                                                                    0LL);
    v35 = (int)Master_object;
    if ( (_DWORD)Master_object )
    {
      v20 = System_Int32__ToString((int32_t)&v35, 0LL);
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_String__Concat_62348648(
                                                                      (System_String_o *)StringLiteral_4347/*"CharaGraph/"*/,
                                                                      v20,
                                                                      0LL);
      defaultName = (System_String_o *)Master_object;
    }
  }
  if ( !entity )
    goto LABEL_44;
  IntValue = EntityScriptUtil__GetIntValue(
               (System_Collections_Generic_Dictionary_string__object__o *)entity[12].klass,
               (System_String_o *)StringLiteral_20093/*"imagePartsGroupId"*/,
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
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_ImagePartsGroupMaster___);
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
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_UserImagePartsGroupMaster___);
  if ( !Master_object )
    goto LABEL_44;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         Master_object,
         (Il2CppObject **)&v31,
         v22,
         (const MethodInfo_32AF0BC *)Method_DataMasterBase_UserImagePartsGroupMaster__UserImagePartsGroupEntity__int__TryGetEntity__) )
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
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_ImagePartsGroupMaster___);
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
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Master_object )
    goto LABEL_44;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMasterData_object_(
                                                                  (DataManager_o *)Master_object,
                                                                  (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Master_object )
    goto LABEL_44;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          Master_object,
          &v32,
          key,
          (const MethodInfo_32AF0BC *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
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
    p_defaultName = (System_String_o **)&StringLiteral_4348/*"CharaGraph/100000"*/;
    return *p_defaultName;
  }
  if ( !v32 )
LABEL_44:
    sub_1BC3264(Master_object, v19);
  v27 = v32 + 2;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v37.fields.currentCryptoKey = v27;
  *(_QWORD *)&v37.fields.fakeValue = 0LL;
  v28 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v37, v26);
  defaultName = System_String__Concat_62348648((System_String_o *)StringLiteral_4347/*"CharaGraph/"*/, v28, 0LL);
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

  if ( (byte_4B0377C & 1) == 0 )
  {
    sub_1BC3008(&UICharaGraphRender_TypeInfo, method);
    byte_4B0377C = 1;
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
  Il2CppObject *Object_object__50213776; // x22
  UnityEngine_Texture2D_o *result; // x0
  System_String_o *v18; // x1

  v4 = this;
  if ( (byte_4B0377E & 1) == 0 )
  {
    sub_1BC3008(&Method_AssetData_GetObject_Texture2D____76809696, data);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v5);
    sub_1BC3008(&UICharaGraphRender_TypeInfo, v6);
    this = (UICharaGraphRender_o *)sub_1BC3008(&StringLiteral_16482/*"a"*/, v7);
    byte_4B0377E = 1;
  }
  if ( v4->fields.baseKind )
  {
    v4->fields.textureImageLimitCount = 0;
    if ( data )
    {
      LastName = AssetData__get_LastName(data, 0LL);
      v9 = (System_String_o *)StringLiteral_16482/*"a"*/;
      goto LABEL_19;
    }
LABEL_20:
    sub_1BC3264(this, data);
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
      sub_1BC326C(this, data, method);
    p_changeGraphSuffix = (System_String_o **)&monitor[2 * imageLimitCount + 8];
    if ( !data )
      goto LABEL_20;
  }
  v13 = *p_changeGraphSuffix;
  v14 = AssetData__get_LastName(data, 0LL);
  v15 = System_String__Concat_62348648(v14, v13, 0LL);
  Object_object__50213776 = AssetData__GetObject_object__50213776(
                              data,
                              v15,
                              (const MethodInfo_2FE3390 *)Method_AssetData_GetObject_Texture2D____76809696);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Object_object__50213776, 0LL, 0LL) )
  {
    result = (UnityEngine_Texture2D_o *)Object_object__50213776;
    v4->fields.textureImageLimitCount = v4->fields.imageLimitCount;
    return result;
  }
  v4->fields.textureImageLimitCount = 0;
  LastName = AssetData__get_LastName(data, 0LL);
  v9 = v13;
LABEL_19:
  v18 = System_String__Concat_62348648(LastName, v9, 0LL);
  return (UnityEngine_Texture2D_o *)AssetData__GetObject_object__50213776(
                                      data,
                                      v18,
                                      (const MethodInfo_2FE3390 *)Method_AssetData_GetObject_Texture2D____76809696);
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

  if ( (byte_4B0377D & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_ObjectModel_ReadOnlyCollection_Rect__get_Item__, method);
    sub_1BC3008(&UICharaGraphRender_TypeInfo, v3);
    byte_4B0377D = 1;
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
      sub_1BC3264(0LL, method);
    *(UnityEngine_Rect_o *)&m_XMin = System_Collections_ObjectModel_ReadOnlyCollection_Rect___get_Item(
                                       servantBodyRectTable,
                                       this->fields.textureImageLimitCount,
                                       (const MethodInfo_3891E40 *)Method_System_Collections_ObjectModel_ReadOnlyCollection_Rect__get_Item__);
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
  __int64 v8; // x1
  Il2CppObject *Master_object; // x0
  __int64 v10; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v11; // x20
  System_String_o *result; // x0
  int v13; // w20
  int32_t frameType; // w21
  _BOOL4 IsGrandServant_k__BackingField; // w19
  System_String_o *v16; // x19
  System_String_o *v17; // x0
  int32_t AdjustFrameTypeForClass; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B03784 & 1) == 0 )
  {
    sub_1BC3008(&AtlasManager_TypeInfo, method);
    sub_1BC3008(&Method_DataManager_GetMaster_GrandGraphDetailMaster___, v3);
    sub_1BC3008(&Method_DataManager_GetMaster_ServantClassMaster___, v4);
    sub_1BC3008(&DataManager_TypeInfo, v5);
    sub_1BC3008(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__, v6);
    sub_1BC3008(&StringLiteral_15961/*"_"*/, v7);
    sub_1BC3008(&StringLiteral_17816/*"class"*/, v8);
    byte_4B03784 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_ServantClassMaster___);
  v11 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
  if ( this->fields._IsGrandServant_k__BackingField )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_GrandGraphDetailMaster___);
    if ( !Master_object )
LABEL_18:
      sub_1BC3264(Master_object, v10);
    Master_object = (Il2CppObject *)GrandGraphDetailMaster__GetGrandClassId(
                                      (GrandGraphDetailMaster_o *)Master_object,
                                      this->fields.classId,
                                      0LL);
    if ( (int)Master_object <= 0 )
      Master_object = (Il2CppObject *)(unsigned int)this->fields.classId;
    this->fields.classId = (int)Master_object;
  }
  if ( !v11 )
    goto LABEL_18;
  result = (System_String_o *)DataMasterBase_object__object__int___GetEntity(
                                v11,
                                this->fields.classId,
                                (const MethodInfo_32AF070 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  if ( result )
  {
    v13 = (int)result;
    frameType = this->fields.frameType;
    IsGrandServant_k__BackingField = this->fields._IsGrandServant_k__BackingField;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AdjustFrameTypeForClass = AtlasManager__GetAdjustFrameTypeForClass(frameType, IsGrandServant_k__BackingField, 0LL);
    v16 = System_Int32__ToString((int32_t)&AdjustFrameTypeForClass, 0LL);
    v17 = System_Int32__ToString(v13 + 44, 0LL);
    return System_String__Concat_62388900(
             (System_String_o *)StringLiteral_17816/*"class"*/,
             v16,
             (System_String_o *)StringLiteral_15961/*"_"*/,
             v17,
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
  if ( (byte_4B03776 & 1) == 0 )
  {
    sub_1BC3008(&AssetManager_TypeInfo, method);
    sub_1BC3008(&StringLiteral_4551/*"CommandGraph/1000000"*/, v2);
    sub_1BC3008(&StringLiteral_4550/*"CommandGraph/"*/, v3);
    byte_4B03776 = 1;
  }
  v4 = System_Int32__ToString((int32_t)&v7, 0LL);
  v5 = System_String__Concat_62348648((System_String_o *)StringLiteral_4550/*"CommandGraph/"*/, v4, 0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( AssetManager__isExistAssetStorage(v5, 0LL) )
    return v5;
  else
    return (System_String_o *)StringLiteral_4551/*"CommandGraph/1000000"*/;
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
  if ( (byte_4B03777 & 1) == 0 )
  {
    sub_1BC3008(&AssetManager_TypeInfo, method);
    sub_1BC3008(&Method_DataManager_GetMasterData_ServantMaster___, v2);
    sub_1BC3008(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v3);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    sub_1BC3008(&StringLiteral_4350/*"CharaGraph/CharaGraphEx/"*/, v6);
    sub_1BC3008(&StringLiteral_4348/*"CharaGraph/100000"*/, v7);
    sub_1BC3008(&StringLiteral_4347/*"CharaGraph/"*/, v8);
    byte_4B03777 = 1;
  }
  v17 = 0LL;
  v9 = System_Int32__ToString((int32_t)&key, 0LL);
  v10 = System_String__Concat_62348648((System_String_o *)StringLiteral_4350/*"CharaGraph/CharaGraphEx/"*/, v9, 0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( AssetManager__isExistAssetStorage(v10, 0LL) )
    return v10;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_19;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          (Il2CppObject **)&v17,
          key,
          (const MethodInfo_32AF0BC *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
    return (System_String_o *)StringLiteral_4348/*"CharaGraph/100000"*/;
  Instance = (DataManager_o *)v17;
  if ( !v17 )
    goto LABEL_19;
  Instance = (DataManager_o *)ServantEntity__get_IsServantMaterialTd(v17, 0LL);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    return (System_String_o *)StringLiteral_4348/*"CharaGraph/100000"*/;
  if ( !v17 )
LABEL_19:
    sub_1BC3264(Instance, v12);
  p_baseSvtId = &v17->fields.baseSvtId;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v19.fields.currentCryptoKey = p_baseSvtId;
  *(_QWORD *)&v19.fields.fakeValue = 0LL;
  v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v19, v13);
  v10 = System_String__Concat_62348648((System_String_o *)StringLiteral_4347/*"CharaGraph/"*/, v15, 0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__isExistAssetStorage(v10, 0LL) )
    return (System_String_o *)StringLiteral_4348/*"CharaGraph/100000"*/;
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
  __int64 v2; // x2
  UICharaGraphRender_c *v4; // x0
  struct System_Int32_array *SERVANT_NAME_TARGET_LIMIT_COUNT; // x8
  int32_t imageLimitCount; // w9

  if ( (byte_4B0377F & 1) == 0 )
  {
    sub_1BC3008(&UICharaGraphRender_TypeInfo, method);
    byte_4B0377F = 1;
  }
  v4 = UICharaGraphRender_TypeInfo;
  if ( !UICharaGraphRender_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICharaGraphRender_TypeInfo);
    v4 = UICharaGraphRender_TypeInfo;
  }
  SERVANT_NAME_TARGET_LIMIT_COUNT = v4->static_fields->SERVANT_NAME_TARGET_LIMIT_COUNT;
  if ( !SERVANT_NAME_TARGET_LIMIT_COUNT )
    goto LABEL_13;
  imageLimitCount = this->fields.imageLimitCount;
  if ( imageLimitCount >= (signed int)SERVANT_NAME_TARGET_LIMIT_COUNT->max_length )
    return 0;
  if ( !v4->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v4);
    SERVANT_NAME_TARGET_LIMIT_COUNT = UICharaGraphRender_TypeInfo->static_fields->SERVANT_NAME_TARGET_LIMIT_COUNT;
    if ( SERVANT_NAME_TARGET_LIMIT_COUNT )
    {
      imageLimitCount = this->fields.imageLimitCount;
      goto LABEL_10;
    }
LABEL_13:
    sub_1BC3264(v4, method);
  }
LABEL_10:
  if ( imageLimitCount >= SERVANT_NAME_TARGET_LIMIT_COUNT->max_length )
    sub_1BC326C(v4, method, v2);
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
  if ( (byte_4B03780 & 1) == 0 )
  {
    sub_1BC3008(&Method_AssetData_GetObject_Texture2D____76809696, data);
    sub_1BC3008(&StringLiteral_16819/*"b"*/, v5);
    this = (UICharaGraphRender_o *)sub_1BC3008(&StringLiteral_21932/*"name"*/, v6);
    byte_4B03780 = 1;
  }
  if ( v4->fields.isEventJoinNameExist )
  {
    if ( data )
    {
      LastName = AssetData__get_LastName(data, 0LL);
      v8 = (System_String_o *)StringLiteral_21932/*"name"*/;
LABEL_6:
      v9 = System_String__Concat_62348648(LastName, v8, 0LL);
      return (UnityEngine_Texture2D_o *)AssetData__GetObject_object__50213776(
                                          data,
                                          v9,
                                          (const MethodInfo_2FE3390 *)Method_AssetData_GetObject_Texture2D____76809696);
    }
    goto LABEL_11;
  }
  if ( !v4->fields.isNameTrue )
  {
    if ( data )
    {
      LastName = AssetData__get_LastName(data, 0LL);
      v8 = (System_String_o *)StringLiteral_16819/*"b"*/;
      goto LABEL_6;
    }
LABEL_11:
    sub_1BC3264(this, data);
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
  if ( (byte_4B03782 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMasterData_ServantLimitMaster___, method);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    sub_1BC3008(&UICharaGraphRender_TypeInfo, v9);
    byte_4B03782 = 1;
  }
  if ( !this->fields.baseKind )
  {
    entity = 0LL;
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_18;
    MasterData_object = DataManager__GetMasterData_object_(
                          Instance,
                          (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
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
      sub_1BC3264(Instance, v11);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  _BOOL4 IsGrandServant_k__BackingField; // w23
  int32_t v8; // w19
  System_String_o *v9; // x0
  int32_t v10; // w20
  System_String_o *v11; // x21
  System_String_o *v12; // x3
  System_String_o *v13; // x21
  Il2CppObject *Instance; // x0
  __int64 v15; // x1
  System_String_o *v17; // x0
  System_String_o *v18; // x1
  System_String_o *v19; // x19

  if ( (byte_4B03783 & 1) == 0 )
  {
    sub_1BC3008(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__, method);
    sub_1BC3008(&StringLiteral_16433/*"_sp_"*/, v3);
    sub_1BC3008(&StringLiteral_22736/*"rarity"*/, v4);
    sub_1BC3008(&StringLiteral_15961/*"_"*/, v5);
    sub_1BC3008(&StringLiteral_1/*""*/, v6);
    byte_4B03783 = 1;
  }
  IsGrandServant_k__BackingField = this->fields._IsGrandServant_k__BackingField;
  v8 = (_DWORD)this + 496;
  v9 = System_Int32__ToString((int)this + 496, 0LL);
  v10 = (_DWORD)this + 448;
  v11 = v9;
  v12 = System_Int32__ToString(v10, 0LL);
  if ( IsGrandServant_k__BackingField )
  {
    v13 = System_String__Concat_62388900(
            (System_String_o *)StringLiteral_22736/*"rarity"*/,
            v11,
            (System_String_o *)StringLiteral_16433/*"_sp_"*/,
            v12,
            0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
    if ( !Instance )
      sub_1BC3264(0LL, v15);
    if ( AtlasManager__HasCharaGraphOptionAtlas((AtlasManager_o *)Instance, v13, 0LL) )
      return v13;
    v19 = System_Int32__ToString(v8, 0LL);
    v12 = System_Int32__ToString(v10, 0LL);
    v18 = v19;
    v17 = (System_String_o *)StringLiteral_22736/*"rarity"*/;
  }
  else
  {
    v17 = (System_String_o *)StringLiteral_22736/*"rarity"*/;
    v18 = v11;
  }
  return System_String__Concat_62388900(v17, v18, (System_String_o *)StringLiteral_15961/*"_"*/, v12, 0LL);
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

  if ( (byte_4B03781 & 1) == 0 )
  {
    sub_1BC3008(&Method_AssetData_GetObject_Texture2D____76809696, data);
    sub_1BC3008(&Method_DataManager_GetMasterData_ServantLimitMaster___, v5);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    sub_1BC3008(&StringLiteral_16482/*"a"*/, v7);
    sub_1BC3008(&StringLiteral_21932/*"name"*/, v8);
    byte_4B03781 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
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
      v15 = &StringLiteral_16482/*"a"*/;
      goto LABEL_12;
    }
LABEL_13:
    sub_1BC3264(Instance, v10);
  }
  if ( !data )
    goto LABEL_13;
  v15 = &StringLiteral_21932/*"name"*/;
LABEL_12:
  LastName = AssetData__get_LastName(data, 0LL);
  v17 = System_String__Concat_62348648(LastName, (System_String_o *)*v15, 0LL);
  return (UnityEngine_Texture2D_o *)AssetData__GetObject_object__50213776(
                                      data,
                                      v17,
                                      (const MethodInfo_2FE3390 *)Method_AssetData_GetObject_Texture2D____76809696);
}


bool __fastcall UICharaGraphRender__IsAtkBoost(UICharaGraphRender_o *this, const MethodInfo *method)
{
  return this->fields._AddedAtkByGrand_k__BackingField + this->fields.adjustAtk > 0;
}


bool __fastcall UICharaGraphRender__IsHpBoost(UICharaGraphRender_o *this, const MethodInfo *method)
{
  return this->fields._AddedHpByGrand_k__BackingField + this->fields.adjustHp > 0;
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
void __fastcall UICharaGraphRender__MoveAlpha_42881608(
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
  if ( (byte_4B03785 & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, callbackObject);
    byte_4B03785 = 1;
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
      UnityEngine_GameObject__SendMessage_70016176(callbackObject, callbackFunc, 0LL);
    }
  }
  else
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    v23.fields.r = *(float *)&v8;
    v23.fields.g = *(float *)&v7;
    v23.fields.b = *(float *)&v6;
    v23.fields.a = *(float *)&v11;
    v16 = TweenRendererColor__Begin(gameObject, duration, v23, v15);
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
          sub_1BC2FAC((CGThumbnailListItem_o *)&v16->fields.eventReceiver, (int32_t)callbackObject, v19, v20);
          v16->fields.callWhenFinished = callbackFunc;
          sub_1BC2FAC((CGThumbnailListItem_o *)&v16->fields.callWhenFinished, (int32_t)callbackFunc, v21, v22);
          return;
        }
LABEL_18:
        sub_1BC3264(v17, v18);
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
        bool isGrandServant,
        const MethodInfo *method)
{
  __int64 v18; // x1
  BalanceConfig_c *v19; // x0
  int32_t ServantLimitMax; // w8
  const MethodInfo *v21; // x4

  if ( (byte_4B03778 & 1) == 0 )
  {
    sub_1BC3008(&BalanceConfig_TypeInfo, *(_QWORD *)&svtId);
    sub_1BC3008(&ImageLimitCount_TypeInfo, v18);
    byte_4B03778 = 1;
  }
  this->fields.imageSvtId = svtId;
  this->fields.svtId = svtId;
  v19 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v19 = BalanceConfig_TypeInfo;
  }
  ServantLimitMax = limitCount;
  if ( v19->static_fields->ServantLimitMax < limitCount )
  {
    ServantLimitMax = v19->static_fields->ServantLimitMax;
    if ( !v19->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v19);
      ServantLimitMax = BalanceConfig_TypeInfo->static_fields->ServantLimitMax;
    }
  }
  this->fields.limitCount = ServantLimitMax;
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  this->fields.imageLimitCount = ImageLimitCount__GetCardImageLimitCount(svtId, limitCount, isOwn, 0, 0LL);
  this->fields.exceedCount = exceedCount;
  this->fields.lv = lv;
  UICharaGraphRender__SetCharacter_42876560(this, changeNameType, saintGraphType, isGrandServant, v21);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UICharaGraphRender__SetCharacter_42876560(
        UICharaGraphRender_o *this,
        int32_t changeNameType,
        int32_t saintGraphType,
        bool isGrandServant,
        const MethodInfo *method)
{
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
  DataManager_o *Instance; // x0
  __int64 v24; // x1
  Il2CppObject *v25; // x21
  ServantLimitEntity_o *v26; // x24
  struct ServantOverwriteStatus_o *OverwriteStatus_k__BackingField; // x9
  UICharaGraphRender_o *v28; // x8
  UICharaGraphRender_o *v29; // x10
  int32_t Rarity_k__BackingField; // w8
  int32_t *p_ActualRarity_k__BackingField; // x9
  int32_t v32; // w8
  ServantExceedEntity_o *v33; // x23
  int32_t FrameType; // w0
  int32_t rarity; // w24
  int32_t exceedCount; // w8
  int32_t classId; // w24
  __int64 v38; // x2
  const MethodInfo *v39; // x3
  System_String_o *v40; // x0
  struct System_String_o *v41; // x1
  _BOOL4 IsGrandServant_k__BackingField; // w24
  __int64 v43; // x8
  __int64 v44; // x8
  int32_t v45; // w9
  int32_t RarityIcon; // w23
  int32_t v47; // w0
  int v48; // w8
  int EventJoinNameExistSvtId; // w0
  int32_t v50; // w2
  const MethodInfo *v51; // x3
  int32_t v52; // w1
  Il2CppObject *MasterData_object; // x0
  int32_t svtId; // w23
  int32_t imageLimitCount; // w25
  ServantLimitMaster_o *v56; // x24
  int32_t v57; // w0
  int32_t v58; // w23
  struct System_String_o *v59; // x0
  int32_t v60; // w2
  const MethodInfo *v61; // x3
  unsigned int v62; // w8
  ServantLimitEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF
  int32_t FrameId; // [xsp+1Ch] [xbp-54h] BYREF

  if ( (byte_4B0377A & 1) == 0 )
  {
    sub_1BC3008(&AtlasManager_TypeInfo, *(_QWORD *)&changeNameType);
    sub_1BC3008(&Method_DataManager_GetMasterData_ServantExceedMaster___, v9);
    sub_1BC3008(&Method_DataManager_GetMasterData_ServantLimitMaster___, v10);
    sub_1BC3008(&Method_DataManager_GetMasterData_ServantLvDetailMaster___, v11);
    sub_1BC3008(&Method_DataManager_GetMasterData_ServantMaster___, v12);
    sub_1BC3008(&Method_DataManager_GetMaster_CommonReleaseMaster___, v13);
    sub_1BC3008(&Method_DataManager_GetMaster_ServantLvDetailMaster___, v14);
    sub_1BC3008(&DataManager_TypeInfo, v15);
    sub_1BC3008(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v16);
    sub_1BC3008(&ImageLimitCount_TypeInfo, v17);
    sub_1BC3008(&Rarity_TypeInfo, v18);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    sub_1BC3008(&UICharaGraphRender_TypeInfo, v20);
    sub_1BC3008(&StringLiteral_19454/*"frame"*/, v21);
    sub_1BC3008(&StringLiteral_1/*""*/, v22);
    byte_4B0377A = 1;
  }
  FrameId = 0;
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_75;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_75;
  v25 = DataMasterBase_object__object__int___GetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          this->fields.svtId,
          (const MethodInfo_32AF070 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_75;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !Instance )
    goto LABEL_75;
  v26 = ServantLimitMaster__GetEntity(
          (ServantLimitMaster_o *)Instance,
          this->fields.svtId,
          this->fields.limitCount,
          0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_75;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_ServantExceedMaster___);
  if ( !v25 )
    goto LABEL_75;
  *(int32x2_t *)&this->fields.svtType = vrev64_s32((int32x2_t)v25[5].klass);
  OverwriteStatus_k__BackingField = this->fields._OverwriteStatus_k__BackingField;
  v28 = OverwriteStatus_k__BackingField ? 0LL : this;
  v29 = OverwriteStatus_k__BackingField ? this : 0LL;
  if ( OverwriteStatus_k__BackingField )
  {
    if ( !v29 )
      goto LABEL_75;
    Rarity_k__BackingField = OverwriteStatus_k__BackingField->fields._Rarity_k__BackingField;
    p_ActualRarity_k__BackingField = &OverwriteStatus_k__BackingField->fields._ActualRarity_k__BackingField;
    v29->fields.rarity = Rarity_k__BackingField;
  }
  else
  {
    if ( !v26 || !v28 )
      goto LABEL_75;
    p_ActualRarity_k__BackingField = &v26->fields.rarity;
    v28->fields.rarity = v26->fields.rarity;
  }
  v32 = *p_ActualRarity_k__BackingField;
  this->fields._IsGrandServant_k__BackingField = isGrandServant;
  this->fields.actualRarity = v32;
  if ( !Instance )
    goto LABEL_75;
  Instance = (DataManager_o *)ServantExceedMaster__GetEntity(
                                (ServantExceedMaster_o *)Instance,
                                this->fields.actualRarity,
                                this->fields.exceedCount,
                                0LL);
  v33 = (ServantExceedEntity_o *)Instance;
  if ( Instance )
  {
    FrameType = ServantExceedEntity__GetFrameType(
                  (ServantExceedEntity_o *)Instance,
                  this->fields._IsGrandServant_k__BackingField,
                  0LL);
  }
  else
  {
    if ( !v26 )
      goto LABEL_75;
    rarity = v26->fields.rarity;
    if ( !Rarity_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
    FrameType = Rarity__getFrameTypeImage(rarity, 0, 0LL);
  }
  exceedCount = this->fields.exceedCount;
  this->fields.frameType = FrameType;
  if ( exceedCount >= 1 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_75;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_ServantLvDetailMaster___);
    if ( !Instance )
      goto LABEL_75;
    this->fields.frameType = ServantLvDetailMaster__GetFrameType(
                               (ServantLvDetailMaster_o *)Instance,
                               this->fields.actualRarity,
                               this->fields.lv,
                               this->fields.frameType,
                               this->fields._IsGrandServant_k__BackingField,
                               0LL);
  }
  classId = this->fields.classId;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  FrameId = AtlasManager__GetFrameId(classId, 0LL);
  if ( FrameId < 1 )
  {
    IsGrandServant_k__BackingField = this->fields._IsGrandServant_k__BackingField;
    Instance = (DataManager_o *)UICharaGraphRender_TypeInfo;
    if ( !UICharaGraphRender_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UICharaGraphRender_TypeInfo);
      Instance = (DataManager_o *)UICharaGraphRender_TypeInfo;
    }
    v43 = *(_QWORD *)&Instance[1].fields._DispLog;
    if ( IsGrandServant_k__BackingField )
    {
      v44 = *(_QWORD *)(v43 + 120);
      if ( !v44 )
        goto LABEL_75;
    }
    else
    {
      v44 = *(_QWORD *)(v43 + 112);
      if ( !v44 )
        goto LABEL_75;
    }
    v45 = this->fields.frameType;
    if ( (unsigned int)v45 >= *(_DWORD *)(v44 + 24) )
      sub_1BC326C(Instance, v24, v38);
    v41 = *(struct System_String_o **)(v44 + 8LL * v45 + 32);
  }
  else
  {
    v40 = System_Int32__ToString((int32_t)&FrameId, 0LL);
    v41 = System_String__Concat_62348648((System_String_o *)StringLiteral_19454/*"frame"*/, v40, 0LL);
  }
  this->fields.frameName = v41;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.frameName, (int32_t)v41, v38, v39);
  if ( this->fields.exceedCount < 1 )
  {
    v47 = 0;
  }
  else
  {
    if ( v33 )
      RarityIcon = ServantExceedEntity__GetRarityIcon(v33, this->fields._IsGrandServant_k__BackingField, 0LL);
    else
      RarityIcon = 1;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_ServantLvDetailMaster___);
    if ( !Instance )
      goto LABEL_75;
    v47 = ServantLvDetailMaster__GetRarityIcon(
            (ServantLvDetailMaster_o *)Instance,
            this->fields.actualRarity,
            this->fields.lv,
            RarityIcon,
            this->fields._IsGrandServant_k__BackingField,
            0LL);
  }
  this->fields.exceedType = v47;
  if ( ServantEntity__get_IsCombineMaterial((ServantEntity_o *)v25, 0LL) )
    v48 = -1;
  else
    v48 = ServantEntity__get_IsServantMaterialTd((ServantEntity_o *)v25, 0LL) << 31 >> 31;
  this->fields.atk = v48;
  this->fields.hp = v48;
  *(_QWORD *)&this->fields._AddedAtkByGrand_k__BackingField = 0LL;
  *(_QWORD *)&this->fields.adjustAtk = 0LL;
  this->fields.realNameCheck = changeNameType;
  this->fields.saintGraphType = saintGraphType;
  this->fields.isEventJoinNameExist = 0;
  EventJoinNameExistSvtId = ServantEntity__GetEventJoinNameExistSvtId((ServantEntity_o *)v25, 0LL);
  if ( EventJoinNameExistSvtId >= 1 )
  {
    this->fields.imageSvtId = EventJoinNameExistSvtId;
    this->fields.isEventJoinNameExist = 1;
  }
  this->fields.isChangeGraph = 0;
  v52 = (int)StringLiteral_1/*""*/;
  this->fields.changeGraphSuffix = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.changeGraphSuffix, v52, v50, v51);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_75;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  svtId = this->fields.svtId;
  imageLimitCount = this->fields.imageLimitCount;
  v56 = (ServantLimitMaster_o *)MasterData_object;
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  Instance = (DataManager_o *)ImageLimitCount__GetLimitCountByImageLimit(imageLimitCount, 0LL);
  if ( !v56 )
    goto LABEL_75;
  if ( !ServantLimitMaster__TryGetEntity(v56, &entity, svtId, (int32_t)Instance, 0LL) )
    goto LABEL_71;
  Instance = (DataManager_o *)entity;
  if ( !entity )
    goto LABEL_75;
  v57 = ServantLimitEntity__GetChangeGraphCommonReleaseId(entity, -1, 0LL);
  if ( (v57 & 0x80000000) != 0 )
    goto LABEL_71;
  v58 = v57;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  if ( !Instance )
    goto LABEL_75;
  if ( !CommonReleaseMaster__IsOpen((CommonReleaseMaster_o *)Instance, v58, 0LL, 0, 0LL) )
    goto LABEL_71;
  this->fields.isChangeGraph = 1;
  Instance = (DataManager_o *)entity;
  if ( !entity )
LABEL_75:
    sub_1BC3264(Instance, v24);
  v59 = ServantLimitEntity__GetChangeGraphSuffix(entity, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  this->fields.changeGraphSuffix = v59;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.changeGraphSuffix, (int32_t)v59, v60, v61);
LABEL_71:
  if ( (unsigned int)(changeNameType - 1) >= 3 )
    LOBYTE(v62) = ServantEntity__IsNameTrue((ServantEntity_o *)v25, 0LL);
  else
    v62 = 0x100u >> (8 * (changeNameType - 1));
  this->fields.isNameTrue = v62;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UICharaGraphRender__SetCharacter_42878020(
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
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  BalanceConfig_c *v22; // x0
  UICharaGraphRender_c *v23; // x0
  Il2CppObject *Instance; // x0
  __int64 v25; // x1
  BalanceConfig_c *v26; // x0
  int32_t v27; // w8
  const MethodInfo *v28; // x4
  int32_t imageLimitCounta; // [xsp+Ch] [xbp-54h] BYREF

  ServantLimitMax = limitCount;
  imageLimitCounta = imageLimitCount;
  if ( (byte_4B03779 & 1) == 0 )
  {
    sub_1BC3008(&BalanceConfig_TypeInfo, *(_QWORD *)&svtId);
    sub_1BC3008(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, v19);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20);
    sub_1BC3008(&UICharaGraphRender_TypeInfo, v21);
    byte_4B03779 = 1;
  }
  this->fields.imageSvtId = svtId;
  this->fields.svtId = svtId;
  if ( imageLimitCount >= 11 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___)) == 0LL )
    {
      sub_1BC3264(Instance, v25);
    }
    ServantLimitAddMaster__getCostumeId(
      (ServantLimitAddMaster_o *)Instance,
      &this->fields.imageSvtId,
      &imageLimitCounta,
      0LL);
  }
  else
  {
    v22 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v22 = BalanceConfig_TypeInfo;
    }
    if ( v22->static_fields->OtherImageLimitCount == imageLimitCount )
    {
      v23 = UICharaGraphRender_TypeInfo;
      if ( !UICharaGraphRender_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UICharaGraphRender_TypeInfo);
        v23 = UICharaGraphRender_TypeInfo;
      }
      imageLimitCounta = v23->static_fields->OTHER_IMAGE_LIMIT_COUNT;
    }
  }
  v26 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v26 = BalanceConfig_TypeInfo;
  }
  if ( v26->static_fields->ServantLimitMax < ServantLimitMax )
  {
    ServantLimitMax = v26->static_fields->ServantLimitMax;
    if ( !v26->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v26);
      ServantLimitMax = BalanceConfig_TypeInfo->static_fields->ServantLimitMax;
    }
  }
  this->fields.limitCount = ServantLimitMax;
  v27 = imageLimitCounta;
  this->fields.exceedCount = exceedCount;
  this->fields.lv = lv;
  this->fields.imageLimitCount = v27;
  this->fields.imagePartsGroupIdxs = idxs;
  sub_1BC2FAC(
    (CGThumbnailListItem_o *)&this->fields.imagePartsGroupIdxs,
    (int32_t)idxs,
    limitCount,
    *(const MethodInfo **)&imageLimitCount);
  UICharaGraphRender__SetCharacter_42876560(this, changeNameType, saintGraphType, isGrandServant, v28);
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
  __int64 v10; // x2
  const MethodInfo *v11; // x3
  int32_t rarity; // w8
  __int64 v13; // x9
  struct System_String_o *v14; // x1

  if ( (byte_4B0377B & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMasterData_CommandCodeMaster___, *(_QWORD *)&commandCodeId);
    sub_1BC3008(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__, v5);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    sub_1BC3008(&UICharaGraphRender_TypeInfo, v7);
    byte_4B0377B = 1;
  }
  this->fields.commandCodeId = commandCodeId;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_CommandCodeMaster___);
  if ( !Instance )
    goto LABEL_11;
  Instance = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               this->fields.commandCodeId,
               (const MethodInfo_32AF070 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
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
    sub_1BC3264(Instance, v9);
  if ( (unsigned int)rarity >= *(_DWORD *)(v13 + 24) )
    sub_1BC326C(Instance, v9, v10);
  v14 = *(struct System_String_o **)(v13 + 8LL * rarity + 32);
  this->fields.frameName = v14;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.frameName, (int32_t)v14, v10, v11);
  *(_QWORD *)&this->fields.atk = -1LL;
  this->fields.realNameCheck = 0;
  *(_QWORD *)&this->fields._AddedAtkByGrand_k__BackingField = 0LL;
  *(_QWORD *)&this->fields.adjustAtk = 0LL;
  this->fields.isNameTrue = 1;
}


void __fastcall UICharaGraphRender__SetHp(
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


void __fastcall UICharaGraphRender__SetLayer(UICharaGraphRender_o *this, int32_t layer, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1
  UnityEngine_Transform_o *transform; // x1
  const MethodInfo *v8; // x3

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1BC3264(0LL, v6);
  if ( UnityEngine_GameObject__get_layer(gameObject, 0LL) != layer )
  {
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    UICharaGraphRender__SetLayer_42882136(this, transform, layer, v8);
  }
}


void __fastcall UICharaGraphRender__SetLayer_42882136(
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
  if ( (byte_4B03786 & 1) == 0 )
  {
    sub_1BC3008(&System_IDisposable_TypeInfo, tf);
    sub_1BC3008(&System_Collections_IEnumerator_TypeInfo, v7);
    this = (UICharaGraphRender_o *)sub_1BC3008(&UnityEngine_Transform_TypeInfo, v8);
    byte_4B03786 = 1;
  }
  if ( !tf
    || (this = (UICharaGraphRender_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)tf, 0LL)) == 0LL )
  {
LABEL_33:
    sub_1BC3264(this, tf);
  }
  UnityEngine_GameObject__set_layer((UnityEngine_GameObject_o *)this, layer, 0LL);
  Enumerator = UnityEngine_Transform__GetEnumerator(tf, 0LL);
  if ( !Enumerator )
    sub_1BC3264(0LL, v9);
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
      p_method = sub_1C13570(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      v18 = sub_1C13570(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
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
        sub_1BC3524(v19);
        goto LABEL_33;
      }
    }
    UICharaGraphRender__SetLayer_42882136(v6, v19, layer, v20);
  }
  v22 = sub_1BC3144(Enumerator, System_IDisposable_TypeInfo);
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
      v27 = sub_1C13570(v22, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v27)(v24, *(_QWORD *)(v27 + 8));
  }
}


int32_t __fastcall UICharaGraphRender__get_AddedAtkByGrand(UICharaGraphRender_o *this, const MethodInfo *method)
{
  return this->fields._AddedAtkByGrand_k__BackingField;
}


int32_t __fastcall UICharaGraphRender__get_AddedHpByGrand(UICharaGraphRender_o *this, const MethodInfo *method)
{
  return this->fields._AddedHpByGrand_k__BackingField;
}


bool __fastcall UICharaGraphRender__get_IsGrandServant(UICharaGraphRender_o *this, const MethodInfo *method)
{
  return this->fields._IsGrandServant_k__BackingField;
}


ServantOverwriteStatus_o *__fastcall UICharaGraphRender__get_OverwriteStatus(
        UICharaGraphRender_o *this,
        const MethodInfo *method)
{
  return this->fields._OverwriteStatus_k__BackingField;
}


void __fastcall UICharaGraphRender__set_AddedAtkByGrand(
        UICharaGraphRender_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._AddedAtkByGrand_k__BackingField = value;
}


void __fastcall UICharaGraphRender__set_AddedHpByGrand(
        UICharaGraphRender_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._AddedHpByGrand_k__BackingField = value;
}


void __fastcall UICharaGraphRender__set_IsGrandServant(
        UICharaGraphRender_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsGrandServant_k__BackingField = value;
}


void __fastcall UICharaGraphRender__set_OverwriteStatus(
        UICharaGraphRender_o *this,
        ServantOverwriteStatus_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._OverwriteStatus_k__BackingField = value;
  sub_1BC2FAC(
    (CGThumbnailListItem_o *)&this->fields._OverwriteStatus_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}