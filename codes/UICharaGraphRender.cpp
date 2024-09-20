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
  int32_t v31; // w2
  int32_t v32; // w3
  UICharaGraphRender_c *v33; // x8
  System_Array_o *v34; // x0
  System_Array_o *v35; // x19
  struct UICharaGraphRender_StaticFields *v36; // x0
  int32_t v37; // w2
  int32_t v38; // w3
  int32_t v39; // w2
  int32_t v40; // w3
  __int64 v41; // x19
  int32_t v42; // w1
  int32_t v43; // w2
  int32_t v44; // w3
  int32_t v45; // w1
  int32_t v46; // w2
  int32_t v47; // w3
  int32_t v48; // w1
  int32_t v49; // w2
  int32_t v50; // w3
  int32_t v51; // w1
  int32_t v52; // w2
  int32_t v53; // w3
  int32_t v54; // w1
  int32_t v55; // w2
  int32_t v56; // w3
  int32_t v57; // w1
  struct UICharaGraphRender_StaticFields *v58; // x0
  int32_t v59; // w2
  int32_t v60; // w3
  int32_t v61; // w2
  int32_t v62; // w3
  __int64 v63; // x19
  int32_t v64; // w1
  int32_t v65; // w2
  int32_t v66; // w3
  int32_t v67; // w1
  int32_t v68; // w2
  int32_t v69; // w3
  int32_t v70; // w1
  int32_t v71; // w2
  int32_t v72; // w3
  int32_t v73; // w1
  int32_t v74; // w2
  int32_t v75; // w3
  int32_t v76; // w1
  int32_t v77; // w2
  int32_t v78; // w3
  int32_t v79; // w1
  int32_t v80; // w2
  int32_t v81; // w3
  int32_t v82; // w1
  int32_t v83; // w2
  int32_t v84; // w3
  int32_t v85; // w1
  struct UICharaGraphRender_StaticFields *v86; // x0
  int32_t v87; // w2
  int32_t v88; // w3
  System_Collections_Generic_Dictionary_int__object__o *v89; // x19
  int32_t v90; // w2
  int32_t v91; // w3
  __int64 v92; // x20
  int32_t v93; // w1
  int32_t v94; // w2
  int32_t v95; // w3
  int32_t v96; // w1
  int32_t v97; // w2
  int32_t v98; // w3
  int32_t v99; // w1
  int32_t v100; // w2
  int32_t v101; // w3
  int32_t v102; // w1
  int32_t v103; // w2
  int32_t v104; // w3
  __int64 v105; // x20
  int32_t v106; // w1
  int32_t v107; // w2
  int32_t v108; // w3
  int32_t v109; // w1
  int32_t v110; // w2
  int32_t v111; // w3
  int32_t v112; // w1
  int32_t v113; // w2
  int32_t v114; // w3
  int32_t v115; // w1
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
  struct UICharaGraphRender_StaticFields *v142; // x0
  int32_t v143; // w2
  int32_t v144; // w3
  int32_t v145; // w2
  int32_t v146; // w3
  __int64 v147; // x19
  int32_t v148; // w1
  int32_t v149; // w2
  int32_t v150; // w3
  int32_t v151; // w1
  int32_t v152; // w2
  int32_t v153; // w3
  int32_t v154; // w1
  int32_t v155; // w2
  int32_t v156; // w3
  int32_t v157; // w1
  int32_t v158; // w2
  int32_t v159; // w3
  int32_t v160; // w1
  int32_t v161; // w2
  int32_t v162; // w3
  int32_t v163; // w1
  struct UICharaGraphRender_StaticFields *v164; // x0
  int32_t v165; // w2
  int32_t v166; // w3
  System_RuntimeFieldHandle_o v167; // 0:w1.4

  if ( (byte_4A5C63A & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Array_AsReadOnly_Rect___);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__string____Add__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__string_____ctor__);
    sub_1B885B0(&System_Collections_Generic_Dictionary_int__string____TypeInfo);
    sub_1B885B0(&int___TypeInfo);
    sub_1B885B0(&UnityEngine_Rect___TypeInfo);
    sub_1B885B0(&string___TypeInfo);
    sub_1B885B0(&Field__PrivateImplementationDetails__F239810D17032E35383496434C64894FFE055A198BA7CFB907D73BAF26A70F0C);
    sub_1B885B0(&UICharaGraphRender_TypeInfo);
    sub_1B885B0(&StringLiteral_19614/*"frame5"*/);
    sub_1B885B0(&StringLiteral_16620/*"a"*/);
    sub_1B885B0(&StringLiteral_19615/*"frame6"*/);
    sub_1B885B0(&StringLiteral_19616/*"frame7"*/);
    sub_1B885B0(&StringLiteral_19612/*"frame37"*/);
    sub_1B885B0(&StringLiteral_16998/*"b"*/);
    sub_1B885B0(&StringLiteral_17685/*"c"*/);
    sub_1B885B0(&StringLiteral_19609/*"frame20"*/);
    sub_1B885B0(&StringLiteral_19611/*"frame36"*/);
    sub_1B885B0(&StringLiteral_19610/*"frame3"*/);
    sub_1B885B0(&StringLiteral_19606/*"frame1"*/);
    sub_1B885B0(&StringLiteral_19605/*"frame0"*/);
    sub_1B885B0(&StringLiteral_19607/*"frame17"*/);
    sub_1B885B0(&StringLiteral_19608/*"frame2"*/);
    sub_1B885B0(&StringLiteral_19613/*"frame4"*/);
    byte_4A5C63A = 1;
  }
  static_fields = UICharaGraphRender_TypeInfo->static_fields;
  *(_OWORD *)&static_fields->OTHER_IMAGE_LIMIT_COUNT = xmmword_BB4770;
  *(_QWORD *)&static_fields->SERVANT_BODY_SIZE_Y = 0x1FE000002D2LL;
  *(_OWORD *)&static_fields->SERVANT_BODY_U = xmmword_BB5450;
  static_fields->SERVANT_EQUIP_BODY_SIZE_Y = 872;
  *(_OWORD *)&static_fields->SERVANT_EQUIP_BODY_U = xmmword_BB5680;
  v2 = sub_1B88658(UnityEngine_Rect___TypeInfo, 12LL);
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
                (const MethodInfo_2F4A534 *)Method_System_Array_AsReadOnly_Rect___);
  v30 = UICharaGraphRender_TypeInfo->static_fields;
  v30->servantBodyRectTable = (struct System_Collections_ObjectModel_ReadOnlyCollection_Rect__o *)Only_Rect;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v30->servantBodyRectTable, (int32_t)Only_Rect, v31, v32);
  v33 = UICharaGraphRender_TypeInfo;
  UICharaGraphRender_TypeInfo->static_fields->servantEquipBodyRect = *(struct UnityEngine_Rect_o *)&UICharaGraphRender_TypeInfo->static_fields->SERVANT_EQUIP_BODY_U;
  *(_QWORD *)&v33->static_fields->SERVANT_NAME_UV_DIFF_Y = 0x43E800000LL;
  v34 = (System_Array_o *)sub_1B88658(int___TypeInfo, 4LL);
  v167.fields.value = Field__PrivateImplementationDetails__F239810D17032E35383496434C64894FFE055A198BA7CFB907D73BAF26A70F0C;
  v35 = v34;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_61615112(v34, v167, 0LL);
  v36 = UICharaGraphRender_TypeInfo->static_fields;
  v36->SERVANT_NAME_TARGET_LIMIT_COUNT = (struct System_Int32_array *)v35;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v36->SERVANT_NAME_TARGET_LIMIT_COUNT, (int32_t)v35, v37, v38);
  v2 = sub_1B88658(string___TypeInfo, 6LL);
  if ( !v2 )
    goto LABEL_62;
  v41 = v2;
  if ( !*(_DWORD *)(v2 + 24) )
    goto LABEL_61;
  v42 = StringLiteral_16620/*"a"*/;
  *(_QWORD *)(v2 + 32) = StringLiteral_16620/*"a"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v2 + 32), v42, v39, v40);
  if ( *(_DWORD *)(v41 + 24) <= 1u )
    goto LABEL_61;
  v45 = StringLiteral_16620/*"a"*/;
  *(_QWORD *)(v41 + 40) = StringLiteral_16620/*"a"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v41 + 40), v45, v43, v44);
  if ( *(_DWORD *)(v41 + 24) <= 2u )
    goto LABEL_61;
  v48 = StringLiteral_16998/*"b"*/;
  *(_QWORD *)(v41 + 48) = StringLiteral_16998/*"b"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v41 + 48), v48, v46, v47);
  if ( *(_DWORD *)(v41 + 24) <= 3u )
    goto LABEL_61;
  v51 = StringLiteral_16998/*"b"*/;
  *(_QWORD *)(v41 + 56) = StringLiteral_16998/*"b"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v41 + 56), v51, v49, v50);
  if ( *(_DWORD *)(v41 + 24) <= 4u )
    goto LABEL_61;
  v54 = (int)StringLiteral_17685/*"c"*/;
  *(_QWORD *)(v41 + 64) = StringLiteral_17685/*"c"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v41 + 64), v54, v52, v53);
  if ( *(_DWORD *)(v41 + 24) <= 5u )
    goto LABEL_61;
  v57 = (int)StringLiteral_17685/*"c"*/;
  *(_QWORD *)(v41 + 72) = StringLiteral_17685/*"c"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v41 + 72), v57, v55, v56);
  v58 = UICharaGraphRender_TypeInfo->static_fields;
  v58->bodyTextureNameTable = (struct System_String_array *)v41;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v58->bodyTextureNameTable, v41, v59, v60);
  v2 = sub_1B88658(string___TypeInfo, 8LL);
  if ( !v2 )
    goto LABEL_62;
  v63 = v2;
  if ( !*(_DWORD *)(v2 + 24) )
    goto LABEL_61;
  v64 = StringLiteral_19605/*"frame0"*/;
  *(_QWORD *)(v2 + 32) = StringLiteral_19605/*"frame0"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v2 + 32), v64, v61, v62);
  if ( *(_DWORD *)(v63 + 24) <= 1u )
    goto LABEL_61;
  v67 = StringLiteral_19606/*"frame1"*/;
  *(_QWORD *)(v63 + 40) = StringLiteral_19606/*"frame1"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v63 + 40), v67, v65, v66);
  if ( *(_DWORD *)(v63 + 24) <= 2u )
    goto LABEL_61;
  v70 = StringLiteral_19608/*"frame2"*/;
  *(_QWORD *)(v63 + 48) = StringLiteral_19608/*"frame2"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v63 + 48), v70, v68, v69);
  if ( *(_DWORD *)(v63 + 24) <= 3u )
    goto LABEL_61;
  v73 = StringLiteral_19610/*"frame3"*/;
  *(_QWORD *)(v63 + 56) = StringLiteral_19610/*"frame3"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v63 + 56), v73, v71, v72);
  if ( *(_DWORD *)(v63 + 24) <= 4u )
    goto LABEL_61;
  v76 = StringLiteral_19613/*"frame4"*/;
  *(_QWORD *)(v63 + 64) = StringLiteral_19613/*"frame4"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v63 + 64), v76, v74, v75);
  if ( *(_DWORD *)(v63 + 24) <= 5u )
    goto LABEL_61;
  v79 = StringLiteral_19614/*"frame5"*/;
  *(_QWORD *)(v63 + 72) = StringLiteral_19614/*"frame5"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v63 + 72), v79, v77, v78);
  if ( *(_DWORD *)(v63 + 24) <= 6u )
    goto LABEL_61;
  v82 = StringLiteral_19615/*"frame6"*/;
  *(_QWORD *)(v63 + 80) = StringLiteral_19615/*"frame6"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v63 + 80), v82, v80, v81);
  if ( *(_DWORD *)(v63 + 24) <= 7u )
    goto LABEL_61;
  v85 = StringLiteral_19616/*"frame7"*/;
  *(_QWORD *)(v63 + 88) = StringLiteral_19616/*"frame7"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v63 + 88), v85, v83, v84);
  v86 = UICharaGraphRender_TypeInfo->static_fields;
  v86->baseFrameList = (struct System_String_array *)v63;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v86->baseFrameList, v63, v87, v88);
  v89 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B887FC(System_Collections_Generic_Dictionary_int__string____TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v89,
    (const MethodInfo_316CF84 *)Method_System_Collections_Generic_Dictionary_int__string_____ctor__);
  v2 = sub_1B88658(string___TypeInfo, 4LL);
  if ( !v2 )
    goto LABEL_62;
  v92 = v2;
  if ( !*(_DWORD *)(v2 + 24) )
    goto LABEL_61;
  v93 = StringLiteral_19607/*"frame17"*/;
  *(_QWORD *)(v2 + 32) = StringLiteral_19607/*"frame17"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v2 + 32), v93, v90, v91);
  if ( *(_DWORD *)(v92 + 24) <= 1u )
    goto LABEL_61;
  v96 = StringLiteral_19607/*"frame17"*/;
  *(_QWORD *)(v92 + 40) = StringLiteral_19607/*"frame17"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v92 + 40), v96, v94, v95);
  if ( *(_DWORD *)(v92 + 24) <= 2u )
    goto LABEL_61;
  v99 = StringLiteral_19607/*"frame17"*/;
  *(_QWORD *)(v92 + 48) = StringLiteral_19607/*"frame17"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v92 + 48), v99, v97, v98);
  if ( *(_DWORD *)(v92 + 24) <= 3u )
    goto LABEL_61;
  v102 = StringLiteral_19607/*"frame17"*/;
  *(_QWORD *)(v92 + 56) = StringLiteral_19607/*"frame17"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v92 + 56), v102, v100, v101);
  if ( !v89
    || (System_Collections_Generic_Dictionary_int__object___Add(
          v89,
          17,
          (Il2CppObject *)v92,
          (const MethodInfo_316D958 *)Method_System_Collections_Generic_Dictionary_int__string____Add__),
        (v2 = sub_1B88658(string___TypeInfo, 4LL)) == 0) )
  {
LABEL_62:
    sub_1B8880C(v2, v3);
  }
  v105 = v2;
  if ( !*(_DWORD *)(v2 + 24) )
    goto LABEL_61;
  v106 = StringLiteral_19609/*"frame20"*/;
  *(_QWORD *)(v2 + 32) = StringLiteral_19609/*"frame20"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v2 + 32), v106, v103, v104);
  if ( *(_DWORD *)(v105 + 24) <= 1u )
    goto LABEL_61;
  v109 = StringLiteral_19609/*"frame20"*/;
  *(_QWORD *)(v105 + 40) = StringLiteral_19609/*"frame20"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v105 + 40), v109, v107, v108);
  if ( *(_DWORD *)(v105 + 24) <= 2u )
    goto LABEL_61;
  v112 = StringLiteral_19609/*"frame20"*/;
  *(_QWORD *)(v105 + 48) = StringLiteral_19609/*"frame20"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v105 + 48), v112, v110, v111);
  if ( *(_DWORD *)(v105 + 24) <= 3u )
    goto LABEL_61;
  v115 = StringLiteral_19609/*"frame20"*/;
  *(_QWORD *)(v105 + 56) = StringLiteral_19609/*"frame20"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v105 + 56), v115, v113, v114);
  System_Collections_Generic_Dictionary_int__object___Add(
    v89,
    20,
    (Il2CppObject *)v105,
    (const MethodInfo_316D958 *)Method_System_Collections_Generic_Dictionary_int__string____Add__);
  v2 = sub_1B88658(string___TypeInfo, 4LL);
  if ( !v2 )
    goto LABEL_62;
  v118 = v2;
  if ( !*(_DWORD *)(v2 + 24) )
    goto LABEL_61;
  v119 = StringLiteral_19611/*"frame36"*/;
  *(_QWORD *)(v2 + 32) = StringLiteral_19611/*"frame36"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v2 + 32), v119, v116, v117);
  if ( *(_DWORD *)(v118 + 24) <= 1u )
    goto LABEL_61;
  v122 = StringLiteral_19611/*"frame36"*/;
  *(_QWORD *)(v118 + 40) = StringLiteral_19611/*"frame36"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v118 + 40), v122, v120, v121);
  if ( *(_DWORD *)(v118 + 24) <= 2u )
    goto LABEL_61;
  v125 = StringLiteral_19611/*"frame36"*/;
  *(_QWORD *)(v118 + 48) = StringLiteral_19611/*"frame36"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v118 + 48), v125, v123, v124);
  if ( *(_DWORD *)(v118 + 24) <= 3u )
    goto LABEL_61;
  v128 = StringLiteral_19611/*"frame36"*/;
  *(_QWORD *)(v118 + 56) = StringLiteral_19611/*"frame36"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v118 + 56), v128, v126, v127);
  System_Collections_Generic_Dictionary_int__object___Add(
    v89,
    36,
    (Il2CppObject *)v118,
    (const MethodInfo_316D958 *)Method_System_Collections_Generic_Dictionary_int__string____Add__);
  v2 = sub_1B88658(string___TypeInfo, 4LL);
  if ( !v2 )
    goto LABEL_62;
  v131 = v2;
  if ( !*(_DWORD *)(v2 + 24) )
    goto LABEL_61;
  v132 = StringLiteral_19612/*"frame37"*/;
  *(_QWORD *)(v2 + 32) = StringLiteral_19612/*"frame37"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v2 + 32), v132, v129, v130);
  if ( *(_DWORD *)(v131 + 24) <= 1u
    || (v135 = StringLiteral_19612/*"frame37"*/,
        *(_QWORD *)(v131 + 40) = StringLiteral_19612/*"frame37"*/,
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v131 + 40), v135, v133, v134),
        *(_DWORD *)(v131 + 24) <= 2u)
    || (v138 = StringLiteral_19612/*"frame37"*/,
        *(_QWORD *)(v131 + 48) = StringLiteral_19612/*"frame37"*/,
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v131 + 48), v138, v136, v137),
        *(_DWORD *)(v131 + 24) <= 3u) )
  {
LABEL_61:
    sub_1B88814(v2, v3);
  }
  v141 = StringLiteral_19612/*"frame37"*/;
  *(_QWORD *)(v131 + 56) = StringLiteral_19612/*"frame37"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v131 + 56), v141, v139, v140);
  System_Collections_Generic_Dictionary_int__object___Add(
    v89,
    37,
    (Il2CppObject *)v131,
    (const MethodInfo_316D958 *)Method_System_Collections_Generic_Dictionary_int__string____Add__);
  v142 = UICharaGraphRender_TypeInfo->static_fields;
  v142->baseFrameTable = (struct System_Collections_Generic_Dictionary_int__string____o *)v89;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v142->baseFrameTable, (int32_t)v89, v143, v144);
  v2 = sub_1B88658(string___TypeInfo, 6LL);
  if ( !v2 )
    goto LABEL_62;
  v147 = v2;
  if ( !*(_DWORD *)(v2 + 24) )
    goto LABEL_61;
  v148 = StringLiteral_19605/*"frame0"*/;
  *(_QWORD *)(v2 + 32) = StringLiteral_19605/*"frame0"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v2 + 32), v148, v145, v146);
  if ( *(_DWORD *)(v147 + 24) <= 1u )
    goto LABEL_61;
  v151 = StringLiteral_19606/*"frame1"*/;
  *(_QWORD *)(v147 + 40) = StringLiteral_19606/*"frame1"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v147 + 40), v151, v149, v150);
  if ( *(_DWORD *)(v147 + 24) <= 2u )
    goto LABEL_61;
  v154 = StringLiteral_19606/*"frame1"*/;
  *(_QWORD *)(v147 + 48) = StringLiteral_19606/*"frame1"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v147 + 48), v154, v152, v153);
  if ( *(_DWORD *)(v147 + 24) <= 3u )
    goto LABEL_61;
  v157 = StringLiteral_19608/*"frame2"*/;
  *(_QWORD *)(v147 + 56) = StringLiteral_19608/*"frame2"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v147 + 56), v157, v155, v156);
  if ( *(_DWORD *)(v147 + 24) <= 4u )
    goto LABEL_61;
  v160 = StringLiteral_19610/*"frame3"*/;
  *(_QWORD *)(v147 + 64) = StringLiteral_19610/*"frame3"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v147 + 64), v160, v158, v159);
  if ( *(_DWORD *)(v147 + 24) <= 5u )
    goto LABEL_61;
  v163 = StringLiteral_19610/*"frame3"*/;
  *(_QWORD *)(v147 + 72) = StringLiteral_19610/*"frame3"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v147 + 72), v163, v161, v162);
  v164 = UICharaGraphRender_TypeInfo->static_fields;
  v164->commandCodeBaseFrameList = (struct System_String_array *)v147;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v164->commandCodeBaseFrameList, v147, v165, v166);
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
  System_String_o *v7; // x19
  System_String_o *v8; // x0
  const MethodInfo *v9; // x2
  Il2CppObject *v10; // x19
  System_String_o *v11; // x0
  int32_t IntValue; // [xsp+Ch] [xbp-44h] BYREF
  Il2CppObject *v14; // [xsp+10h] [xbp-40h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-38h] BYREF
  int32_t imageLimitCounta; // [xsp+28h] [xbp-28h] BYREF
  int32_t svtIda; // [xsp+2Ch] [xbp-24h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  imageLimitCounta = imageLimitCount;
  svtIda = svtId;
  if ( (byte_4A5C627 & 1) == 0 )
  {
    sub_1B885B0(&AssetManager_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&StringLiteral_21261/*"maleImageId"*/);
    sub_1B885B0(&StringLiteral_4430/*"CharaGraph/100000"*/);
    sub_1B885B0(&StringLiteral_4429/*"CharaGraph/"*/);
    byte_4A5C627 = 1;
  }
  v14 = 0LL;
  entity = 0LL;
  IntValue = 0;
  if ( imageLimitCount >= 11 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_32;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    if ( !Instance )
      goto LABEL_32;
    ServantLimitAddMaster__getCostumeId((ServantLimitAddMaster_o *)Instance, &svtIda, &imageLimitCounta, 0LL);
  }
  v6 = System_Int32__ToString((int32_t)&svtIda, 0LL);
  v7 = System_String__Concat_61707032((System_String_o *)StringLiteral_4429/*"CharaGraph/"*/, v6, 0LL);
  Instance = (DataManager_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !Instance )
    goto LABEL_32;
  if ( UserGameEntity__IsMale((UserGameEntity_o *)Instance, 0LL) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ServantMaster___);
    if ( !Instance )
      goto LABEL_32;
    Instance = (DataManager_o *)DataMasterBase_object__object__int___TryGetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                  &entity,
                                  svtIda,
                                  (const MethodInfo_311D988 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( !entity )
        goto LABEL_32;
      IntValue = EntityScriptUtil__GetIntValue(
                   (System_Collections_Generic_Dictionary_string__object__o *)entity[12].klass,
                   (System_String_o *)StringLiteral_21261/*"maleImageId"*/,
                   0,
                   0LL);
      if ( IntValue )
      {
        v8 = System_Int32__ToString((int32_t)&IntValue, 0LL);
        v7 = System_String__Concat_61707032((System_String_o *)StringLiteral_4429/*"CharaGraph/"*/, v8, 0LL);
      }
    }
  }
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( AssetManager__isExistAssetStorage(v7, 0LL) )
    return v7;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_32;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          &v14,
          svtIda,
          (const MethodInfo_311D988 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
    return (System_String_o *)StringLiteral_4430/*"CharaGraph/100000"*/;
  Instance = (DataManager_o *)v14;
  if ( !v14 )
    goto LABEL_32;
  Instance = (DataManager_o *)ServantEntity__get_IsServantMaterialTd((ServantEntity_o *)v14, 0LL);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    return (System_String_o *)StringLiteral_4430/*"CharaGraph/100000"*/;
  if ( !v14 )
LABEL_32:
    sub_1B8880C(Instance, v5);
  v10 = v14 + 2;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v18.fields.currentCryptoKey = v10;
  *(_QWORD *)&v18.fields.fakeValue = 0LL;
  v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v18, v9);
  v7 = System_String__Concat_61707032((System_String_o *)StringLiteral_4429/*"CharaGraph/"*/, v11, 0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__isExistAssetStorage(v7, 0LL) )
    return (System_String_o *)StringLiteral_4430/*"CharaGraph/100000"*/;
  return v7;
}


System_String_o *__fastcall UICharaGraphRender__GetAssetName_40824236(int32_t imageSvtId, const MethodInfo *method)
{
  System_String_o *v2; // x0
  System_String_o *v3; // x19
  DataMasterBase_TMaster__TEntity__PKType__o *SelfUserGame; // x0
  __int64 v5; // x1
  System_String_o *v6; // x0
  const MethodInfo *v7; // x2
  Il2CppObject *v8; // x19
  System_String_o *v9; // x0
  int32_t IntValue; // [xsp+4h] [xbp-3Ch] BYREF
  Il2CppObject *v12; // [xsp+8h] [xbp-38h] BYREF
  Il2CppObject *entity; // [xsp+10h] [xbp-30h] BYREF
  int32_t key; // [xsp+1Ch] [xbp-24h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16

  key = imageSvtId;
  if ( (byte_4A5C628 & 1) == 0 )
  {
    sub_1B885B0(&AssetManager_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&StringLiteral_21261/*"maleImageId"*/);
    sub_1B885B0(&StringLiteral_4430/*"CharaGraph/100000"*/);
    sub_1B885B0(&StringLiteral_4429/*"CharaGraph/"*/);
    byte_4A5C628 = 1;
  }
  v12 = 0LL;
  entity = 0LL;
  IntValue = 0;
  v2 = System_Int32__ToString((int32_t)&key, 0LL);
  v3 = System_String__Concat_61707032((System_String_o *)StringLiteral_4429/*"CharaGraph/"*/, v2, 0LL);
  SelfUserGame = (DataMasterBase_TMaster__TEntity__PKType__o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    goto LABEL_28;
  if ( UserGameEntity__IsMale((UserGameEntity_o *)SelfUserGame, 0LL) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    SelfUserGame = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ServantMaster___);
    if ( !SelfUserGame )
      goto LABEL_28;
    SelfUserGame = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                   SelfUserGame,
                                                                   &entity,
                                                                   key,
                                                                   (const MethodInfo_311D988 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)SelfUserGame & 1) != 0 )
    {
      if ( !entity )
        goto LABEL_28;
      IntValue = EntityScriptUtil__GetIntValue(
                   (System_Collections_Generic_Dictionary_string__object__o *)entity[12].klass,
                   (System_String_o *)StringLiteral_21261/*"maleImageId"*/,
                   0,
                   0LL);
      if ( IntValue )
      {
        v6 = System_Int32__ToString((int32_t)&IntValue, 0LL);
        v3 = System_String__Concat_61707032((System_String_o *)StringLiteral_4429/*"CharaGraph/"*/, v6, 0LL);
      }
    }
  }
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( AssetManager__isExistAssetStorage(v3, 0LL) )
    return v3;
  SelfUserGame = (DataMasterBase_TMaster__TEntity__PKType__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !SelfUserGame )
    goto LABEL_28;
  SelfUserGame = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMasterData_object_(
                                                                 (DataManager_o *)SelfUserGame,
                                                                 (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !SelfUserGame )
    goto LABEL_28;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          SelfUserGame,
          &v12,
          key,
          (const MethodInfo_311D988 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
    return (System_String_o *)StringLiteral_4430/*"CharaGraph/100000"*/;
  SelfUserGame = (DataMasterBase_TMaster__TEntity__PKType__o *)v12;
  if ( !v12 )
    goto LABEL_28;
  SelfUserGame = (DataMasterBase_TMaster__TEntity__PKType__o *)ServantEntity__get_IsServantMaterialTd(
                                                                 (ServantEntity_o *)v12,
                                                                 0LL);
  if ( ((unsigned __int8)SelfUserGame & 1) == 0 )
    return (System_String_o *)StringLiteral_4430/*"CharaGraph/100000"*/;
  if ( !v12 )
LABEL_28:
    sub_1B8880C(SelfUserGame, v5);
  v8 = v12 + 2;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v15.fields.currentCryptoKey = v8;
  *(_QWORD *)&v15.fields.fakeValue = 0LL;
  v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v15, v7);
  v3 = System_String__Concat_61707032((System_String_o *)StringLiteral_4429/*"CharaGraph/"*/, v9, 0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__isExistAssetStorage(v3, 0LL) )
    return (System_String_o *)StringLiteral_4430/*"CharaGraph/100000"*/;
  return v3;
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

  if ( (byte_4A5C62F & 1) == 0 )
  {
    sub_1B885B0(&UICharaGraphRender_TypeInfo);
    byte_4A5C62F = 1;
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
  Il2CppObject *Object_object__48635516; // x22
  UnityEngine_Texture2D_o *result; // x0
  System_String_o *v15; // x1

  v4 = this;
  if ( (byte_4A5C631 & 1) == 0 )
  {
    sub_1B885B0(&Method_AssetData_GetObject_Texture2D____76085376);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&UICharaGraphRender_TypeInfo);
    this = (UICharaGraphRender_o *)sub_1B885B0(&StringLiteral_16620/*"a"*/);
    byte_4A5C631 = 1;
  }
  if ( v4->fields.baseKind )
  {
    v4->fields.textureImageLimitCount = 0;
    if ( data )
    {
      LastName = AssetData__get_LastName(data, 0LL);
      v6 = (System_String_o *)StringLiteral_16620/*"a"*/;
      goto LABEL_19;
    }
LABEL_20:
    sub_1B8880C(this, data);
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
      sub_1B88814(this, data);
    p_changeGraphSuffix = (System_String_o **)&monitor[2 * imageLimitCount + 8];
    if ( !data )
      goto LABEL_20;
  }
  v10 = *p_changeGraphSuffix;
  v11 = AssetData__get_LastName(data, 0LL);
  v12 = System_String__Concat_61707032(v11, v10, 0LL);
  Object_object__48635516 = AssetData__GetObject_object__48635516(
                              data,
                              v12,
                              (const MethodInfo_2E61E7C *)Method_AssetData_GetObject_Texture2D____76085376);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Object_object__48635516, 0LL, 0LL) )
  {
    result = (UnityEngine_Texture2D_o *)Object_object__48635516;
    v4->fields.textureImageLimitCount = v4->fields.imageLimitCount;
    return result;
  }
  v4->fields.textureImageLimitCount = 0;
  LastName = AssetData__get_LastName(data, 0LL);
  v6 = v10;
LABEL_19:
  v15 = System_String__Concat_61707032(LastName, v6, 0LL);
  return (UnityEngine_Texture2D_o *)AssetData__GetObject_object__48635516(
                                      data,
                                      v15,
                                      (const MethodInfo_2E61E7C *)Method_AssetData_GetObject_Texture2D____76085376);
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

  if ( (byte_4A5C630 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_ReadOnlyCollection_Rect__get_Item__);
    sub_1B885B0(&UICharaGraphRender_TypeInfo);
    byte_4A5C630 = 1;
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
      sub_1B8880C(0LL, method);
    *(UnityEngine_Rect_o *)&m_XMin = System_Collections_ObjectModel_ReadOnlyCollection_Rect___get_Item(
                                       servantBodyRectTable,
                                       this->fields.textureImageLimitCount,
                                       (const MethodInfo_36EC2A8 *)Method_System_Collections_ObjectModel_ReadOnlyCollection_Rect__get_Item__);
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

  if ( (byte_4A5C637 & 1) == 0 )
  {
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantClassMaster___);
    sub_1B885B0(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&StringLiteral_16123/*"_"*/);
    sub_1B885B0(&StringLiteral_17984/*"class"*/);
    byte_4A5C637 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantClassMaster___)) == 0LL )
  {
    sub_1B8880C(Instance, v4);
  }
  result = (System_String_o *)DataMasterBase_object__object__int___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                this->fields.classId,
                                (const MethodInfo_311D934 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  if ( result )
  {
    v6 = (int)result;
    frameType = this->fields.frameType;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AdjustFrameTypeForClass = AtlasManager__GetAdjustFrameTypeForClass(frameType, 0LL);
    v8 = System_Int32__ToString((int32_t)&AdjustFrameTypeForClass, 0LL);
    v9 = System_Int32__ToString(v6 + 44, 0LL);
    return System_String__Concat_61720296(
             (System_String_o *)StringLiteral_17984/*"class"*/,
             v8,
             (System_String_o *)StringLiteral_16123/*"_"*/,
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
  if ( (byte_4A5C629 & 1) == 0 )
  {
    sub_1B885B0(&AssetManager_TypeInfo);
    sub_1B885B0(&StringLiteral_4621/*"CommandGraph/1000000"*/);
    sub_1B885B0(&StringLiteral_4620/*"CommandGraph/"*/);
    byte_4A5C629 = 1;
  }
  v2 = System_Int32__ToString((int32_t)&v5, 0LL);
  v3 = System_String__Concat_61707032((System_String_o *)StringLiteral_4620/*"CommandGraph/"*/, v2, 0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( AssetManager__isExistAssetStorage(v3, 0LL) )
    return v3;
  else
    return (System_String_o *)StringLiteral_4621/*"CommandGraph/1000000"*/;
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
  if ( (byte_4A5C62A & 1) == 0 )
  {
    sub_1B885B0(&AssetManager_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&StringLiteral_4432/*"CharaGraph/CharaGraphEx/"*/);
    sub_1B885B0(&StringLiteral_4430/*"CharaGraph/100000"*/);
    sub_1B885B0(&StringLiteral_4429/*"CharaGraph/"*/);
    byte_4A5C62A = 1;
  }
  v10 = 0LL;
  v2 = System_Int32__ToString((int32_t)&key, 0LL);
  v3 = System_String__Concat_61707032((System_String_o *)StringLiteral_4432/*"CharaGraph/CharaGraphEx/"*/, v2, 0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( AssetManager__isExistAssetStorage(v3, 0LL) )
    return v3;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_19;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          (Il2CppObject **)&v10,
          key,
          (const MethodInfo_311D988 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
    return (System_String_o *)StringLiteral_4430/*"CharaGraph/100000"*/;
  Instance = (DataManager_o *)v10;
  if ( !v10 )
    goto LABEL_19;
  Instance = (DataManager_o *)ServantEntity__get_IsServantMaterialTd(v10, 0LL);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    return (System_String_o *)StringLiteral_4430/*"CharaGraph/100000"*/;
  if ( !v10 )
LABEL_19:
    sub_1B8880C(Instance, v5);
  p_baseSvtId = &v10->fields.baseSvtId;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v12.fields.currentCryptoKey = p_baseSvtId;
  *(_QWORD *)&v12.fields.fakeValue = 0LL;
  v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v12, v6);
  v3 = System_String__Concat_61707032((System_String_o *)StringLiteral_4429/*"CharaGraph/"*/, v8, 0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__isExistAssetStorage(v3, 0LL) )
    return (System_String_o *)StringLiteral_4430/*"CharaGraph/100000"*/;
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

  if ( (byte_4A5C632 & 1) == 0 )
  {
    sub_1B885B0(&UICharaGraphRender_TypeInfo);
    byte_4A5C632 = 1;
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
    sub_1B8880C(v3, method);
  }
LABEL_10:
  if ( imageLimitCount >= SERVANT_NAME_TARGET_LIMIT_COUNT->max_length )
    sub_1B88814(v3, method);
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
  if ( (byte_4A5C633 & 1) == 0 )
  {
    sub_1B885B0(&Method_AssetData_GetObject_Texture2D____76085376);
    sub_1B885B0(&StringLiteral_16998/*"b"*/);
    this = (UICharaGraphRender_o *)sub_1B885B0(&StringLiteral_21982/*"name"*/);
    byte_4A5C633 = 1;
  }
  if ( v4->fields.isEventJoinNameExist )
  {
    if ( data )
    {
      LastName = AssetData__get_LastName(data, 0LL);
      v6 = (System_String_o *)StringLiteral_21982/*"name"*/;
LABEL_6:
      v7 = System_String__Concat_61707032(LastName, v6, 0LL);
      return (UnityEngine_Texture2D_o *)AssetData__GetObject_object__48635516(
                                          data,
                                          v7,
                                          (const MethodInfo_2E61E7C *)Method_AssetData_GetObject_Texture2D____76085376);
    }
    goto LABEL_11;
  }
  if ( !v4->fields.isNameTrue )
  {
    if ( data )
    {
      LastName = AssetData__get_LastName(data, 0LL);
      v6 = (System_String_o *)StringLiteral_16998/*"b"*/;
      goto LABEL_6;
    }
LABEL_11:
    sub_1B8880C(this, data);
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
  if ( (byte_4A5C635 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&UICharaGraphRender_TypeInfo);
    byte_4A5C635 = 1;
  }
  if ( !this->fields.baseKind )
  {
    entity = 0LL;
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_18;
    MasterData_object = DataManager__GetMasterData_object_(
                          Instance,
                          (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
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
      sub_1B8880C(Instance, v9);
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
  if ( (byte_4A5C636 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_22786/*"rarity"*/);
    sub_1B885B0(&StringLiteral_16123/*"_"*/);
    byte_4A5C636 = 1;
  }
  v3 = System_Int32__ToString(v2 + 488, 0LL);
  v4 = System_Int32__ToString(v2 + 448, 0LL);
  return System_String__Concat_61720296(
           (System_String_o *)StringLiteral_22786/*"rarity"*/,
           v3,
           (System_String_o *)StringLiteral_16123/*"_"*/,
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

  if ( (byte_4A5C634 & 1) == 0 )
  {
    sub_1B885B0(&Method_AssetData_GetObject_Texture2D____76085376);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&StringLiteral_16620/*"a"*/);
    sub_1B885B0(&StringLiteral_21982/*"name"*/);
    byte_4A5C634 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
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
      v11 = &StringLiteral_16620/*"a"*/;
      goto LABEL_12;
    }
LABEL_13:
    sub_1B8880C(Instance, v6);
  }
  if ( !data )
    goto LABEL_13;
  v11 = &StringLiteral_21982/*"name"*/;
LABEL_12:
  LastName = AssetData__get_LastName(data, 0LL);
  v13 = System_String__Concat_61707032(LastName, (System_String_o *)*v11, 0LL);
  return (UnityEngine_Texture2D_o *)AssetData__GetObject_object__48635516(
                                      data,
                                      v13,
                                      (const MethodInfo_2E61E7C *)Method_AssetData_GetObject_Texture2D____76085376);
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
void __fastcall UICharaGraphRender__MoveAlpha_40830428(
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
  int32_t v21; // w2
  int32_t v22; // w3
  UnityEngine_Color_o v23; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4

  v11 = *(long double *)&alpha;
  if ( (byte_4A5C638 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5C638 = 1;
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
      UnityEngine_GameObject__SendMessage_69440840(callbackObject, callbackFunc, 0LL);
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
          sub_1B88554(
            (ServantStatusBattleListViewItem_o *)&v16->fields.eventReceiver,
            (int32_t)callbackObject,
            v19,
            v20);
          v16->fields.callWhenFinished = callbackFunc;
          sub_1B88554(
            (ServantStatusBattleListViewItem_o *)&v16->fields.callWhenFinished,
            (int32_t)callbackFunc,
            v21,
            v22);
          return;
        }
LABEL_18:
        sub_1B8880C(v17, v18);
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

  if ( (byte_4A5C62B & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&ImageLimitCount_TypeInfo);
    byte_4A5C62B = 1;
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
  UICharaGraphRender__SetCharacter_40825844(this, changeNameType, saintGraphType, v19);
}


void __fastcall UICharaGraphRender__SetCharacter_40825844(
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
  int32_t v18; // w2
  int32_t v19; // w3
  int32_t v20; // w24
  UICharaGraphRender_c *v21; // x0
  UICharaGraphRender_c *v22; // x0
  __int64 v23; // x8
  DataManager_c **v24; // x8
  __int64 v25; // x8
  __int64 v26; // x9
  struct System_String_o *v27; // x1
  int32_t rarityIcon; // w23
  int32_t v29; // w0
  int v30; // w8
  int EventJoinNameExistSvtId; // w0
  int32_t v32; // w2
  int32_t v33; // w3
  int32_t v34; // w1
  Il2CppObject *MasterData_object; // x0
  int32_t svtId; // w23
  int32_t imageLimitCount; // w25
  ServantLimitMaster_o *v38; // x24
  int32_t v39; // w0
  int32_t v40; // w23
  struct System_String_o *v41; // x0
  int32_t v42; // w2
  int32_t v43; // w3
  unsigned int v44; // w8
  ServantLimitEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4A5C62D & 1) == 0 )
  {
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantExceedMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantLvDetailMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_CommonReleaseMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_ServantLvDetailMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__string____ContainsKey__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__string____get_Item__);
    sub_1B885B0(&ImageLimitCount_TypeInfo);
    sub_1B885B0(&Rarity_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&UICharaGraphRender_TypeInfo);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5C62D = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_69;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_69;
  v9 = DataMasterBase_object__object__int___GetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
         this->fields.svtId,
         (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_69;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !Instance )
    goto LABEL_69;
  v10 = ServantLimitMaster__GetEntity(
          (ServantLimitMaster_o *)Instance,
          this->fields.svtId,
          this->fields.limitCount,
          0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_69;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantExceedMaster___);
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
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_69;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantLvDetailMaster___);
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
    v20 = FrameId;
    v21 = UICharaGraphRender_TypeInfo;
    if ( !UICharaGraphRender_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UICharaGraphRender_TypeInfo);
      v21 = UICharaGraphRender_TypeInfo;
    }
    Instance = (DataManager_o *)v21->static_fields->baseFrameTable;
    if ( !Instance )
      goto LABEL_69;
    if ( System_Collections_Generic_Dictionary_int__object___ContainsKey(
           (System_Collections_Generic_Dictionary_int__object__o *)Instance,
           v20,
           (const MethodInfo_316DB4C *)Method_System_Collections_Generic_Dictionary_int__string____ContainsKey__) )
    {
      v22 = UICharaGraphRender_TypeInfo;
      if ( !UICharaGraphRender_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UICharaGraphRender_TypeInfo);
        v22 = UICharaGraphRender_TypeInfo;
      }
      Instance = (DataManager_o *)v22->static_fields->baseFrameTable;
      if ( !Instance )
        goto LABEL_69;
      Instance = (DataManager_o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                    (System_Collections_Generic_Dictionary_int__object__o *)Instance,
                                    v20,
                                    (const MethodInfo_316D8B8 *)Method_System_Collections_Generic_Dictionary_int__string____get_Item__);
      if ( !Instance )
        goto LABEL_69;
      v23 = this->fields.frameType;
      if ( (unsigned int)v23 < LODWORD(Instance->fields.m_CancellationTokenSource) )
      {
        v24 = &Instance->klass + v23;
        goto LABEL_38;
      }
LABEL_70:
      sub_1B88814(Instance, rarity);
    }
  }
  Instance = (DataManager_o *)UICharaGraphRender_TypeInfo;
  if ( !UICharaGraphRender_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICharaGraphRender_TypeInfo);
    Instance = (DataManager_o *)UICharaGraphRender_TypeInfo;
  }
  v25 = *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 112LL);
  if ( !v25 )
    goto LABEL_69;
  v26 = this->fields.frameType;
  if ( (unsigned int)v26 >= *(_DWORD *)(v25 + 24) )
    goto LABEL_70;
  v24 = (DataManager_c **)(v25 + 8 * v26);
LABEL_38:
  v27 = (struct System_String_o *)v24[4];
  this->fields.frameName = v27;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.frameName, (int32_t)v27, v18, v19);
  if ( this->fields.exceedCount < 1 )
  {
    v29 = 0;
  }
  else
  {
    if ( v12 )
      rarityIcon = v12->fields.rarityIcon;
    else
      rarityIcon = 1;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ServantLvDetailMaster___);
    if ( !Instance )
      goto LABEL_69;
    v29 = ServantLvDetailMaster__GetRarityIcon(
            (ServantLvDetailMaster_o *)Instance,
            this->fields.rarity,
            this->fields.lv,
            rarityIcon,
            0LL);
  }
  this->fields.exceedType = v29;
  if ( ServantEntity__get_IsCombineMaterial((ServantEntity_o *)v9, 0LL) )
    v30 = -1;
  else
    v30 = ServantEntity__get_IsServantMaterialTd((ServantEntity_o *)v9, 0LL) << 31 >> 31;
  this->fields.atk = v30;
  this->fields.hp = v30;
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
  v34 = (int)StringLiteral_1/*""*/;
  this->fields.changeGraphSuffix = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.changeGraphSuffix, v34, v32, v33);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_69;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  svtId = this->fields.svtId;
  imageLimitCount = this->fields.imageLimitCount;
  v38 = (ServantLimitMaster_o *)MasterData_object;
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  Instance = (DataManager_o *)ImageLimitCount__GetLimitCountByImageLimit(imageLimitCount, 0LL);
  if ( !v38 )
    goto LABEL_69;
  if ( !ServantLimitMaster__TryGetEntity(v38, &entity, svtId, (int32_t)Instance, 0LL) )
    goto LABEL_65;
  Instance = (DataManager_o *)entity;
  if ( !entity )
    goto LABEL_69;
  v39 = ServantLimitEntity__GetChangeGraphCommonReleaseId(entity, -1, 0LL);
  if ( (v39 & 0x80000000) != 0 )
    goto LABEL_65;
  v40 = v39;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  if ( !Instance )
    goto LABEL_69;
  if ( !CommonReleaseMaster__IsOpen((CommonReleaseMaster_o *)Instance, v40, 0LL, 0, 0LL) )
    goto LABEL_65;
  this->fields.isChangeGraph = 1;
  Instance = (DataManager_o *)entity;
  if ( !entity )
LABEL_69:
    sub_1B8880C(Instance, rarity);
  v41 = ServantLimitEntity__GetChangeGraphSuffix(entity, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  this->fields.changeGraphSuffix = v41;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.changeGraphSuffix, (int32_t)v41, v42, v43);
LABEL_65:
  if ( (unsigned int)(changeNameType - 1) >= 3 )
    LOBYTE(v44) = ServantEntity__IsNameTrue((ServantEntity_o *)v9, 0LL);
  else
    v44 = 0x100u >> (8 * (changeNameType - 1));
  this->fields.isNameTrue = v44;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UICharaGraphRender__SetCharacter_40827256(
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
  BalanceConfig_c *v17; // x0
  UICharaGraphRender_c *v18; // x0
  Il2CppObject *Instance; // x0
  __int64 v20; // x1
  BalanceConfig_c *v21; // x0
  int32_t v22; // w8
  int32_t imageLimitCounta; // [xsp+Ch] [xbp-54h] BYREF

  imageLimitCounta = imageLimitCount;
  if ( (byte_4A5C62C & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&UICharaGraphRender_TypeInfo);
    byte_4A5C62C = 1;
  }
  this->fields.imageSvtId = svtId;
  this->fields.svtId = svtId;
  if ( imageLimitCount >= 11 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___)) == 0LL )
    {
      sub_1B8880C(Instance, v20);
    }
    ServantLimitAddMaster__getCostumeId(
      (ServantLimitAddMaster_o *)Instance,
      &this->fields.imageSvtId,
      &imageLimitCounta,
      0LL);
  }
  else
  {
    v17 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v17 = BalanceConfig_TypeInfo;
    }
    if ( v17->static_fields->OtherImageLimitCount == imageLimitCount )
    {
      v18 = UICharaGraphRender_TypeInfo;
      if ( !UICharaGraphRender_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UICharaGraphRender_TypeInfo);
        v18 = UICharaGraphRender_TypeInfo;
      }
      imageLimitCounta = v18->static_fields->OTHER_IMAGE_LIMIT_COUNT;
    }
  }
  v21 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v21 = BalanceConfig_TypeInfo;
  }
  if ( v21->static_fields->ServantLimitMax < limitCount )
  {
    limitCount = v21->static_fields->ServantLimitMax;
    if ( !v21->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v21);
      limitCount = BalanceConfig_TypeInfo->static_fields->ServantLimitMax;
    }
  }
  this->fields.limitCount = limitCount;
  v22 = imageLimitCounta;
  this->fields.exceedCount = exceedCount;
  this->fields.imageLimitCount = v22;
  this->fields.lv = lv;
  UICharaGraphRender__SetCharacter_40825844(
    this,
    changeNameType,
    saintGraphType,
    *(const MethodInfo **)&imageLimitCount);
}


void __fastcall UICharaGraphRender__SetCommand(
        UICharaGraphRender_o *this,
        int32_t commandCodeId,
        const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  int32_t v8; // w3
  int32_t rarity; // w8
  __int64 v10; // x9
  struct System_String_o *v11; // x1

  if ( (byte_4A5C62E & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_CommandCodeMaster___);
    sub_1B885B0(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&UICharaGraphRender_TypeInfo);
    byte_4A5C62E = 1;
  }
  this->fields.commandCodeId = commandCodeId;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_CommandCodeMaster___);
  if ( !Instance )
    goto LABEL_11;
  Instance = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               this->fields.commandCodeId,
               (const MethodInfo_311D934 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
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
  v10 = *(_QWORD *)(*((_QWORD *)Instance + 23) + 128LL);
  if ( !v10 )
LABEL_11:
    sub_1B8880C(Instance, v6);
  if ( (unsigned int)rarity >= *(_DWORD *)(v10 + 24) )
    sub_1B88814(Instance, v6);
  v11 = *(struct System_String_o **)(v10 + 8LL * rarity + 32);
  this->fields.frameName = v11;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.frameName, (int32_t)v11, v7, v8);
  *(_OWORD *)&this->fields.atk = xmmword_BB4980;
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
    sub_1B8880C(0LL, v6);
  if ( UnityEngine_GameObject__get_layer(gameObject, 0LL) != layer )
  {
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    UICharaGraphRender__SetLayer_40830956(this, transform, layer, v8);
  }
}


void __fastcall UICharaGraphRender__SetLayer_40830956(
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
  if ( (byte_4A5C639 & 1) == 0 )
  {
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    this = (UICharaGraphRender_o *)sub_1B885B0(&UnityEngine_Transform_TypeInfo);
    byte_4A5C639 = 1;
  }
  if ( !tf
    || (this = (UICharaGraphRender_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)tf, 0LL)) == 0LL )
  {
LABEL_33:
    sub_1B8880C(this, tf);
  }
  UnityEngine_GameObject__set_layer((UnityEngine_GameObject_o *)this, layer, 0LL);
  Enumerator = UnityEngine_Transform__GetEnumerator(tf, 0LL);
  if ( !Enumerator )
    sub_1B8880C(0LL, v7);
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
      p_method = sub_1BDA590(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      v16 = sub_1BDA590(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
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
        sub_1B88ACC(v17);
        goto LABEL_33;
      }
    }
    UICharaGraphRender__SetLayer_40830956(v6, v17, layer, v18);
  }
  v20 = sub_1B886EC(Enumerator, System_IDisposable_TypeInfo);
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
      v25 = sub_1BDA590(v20, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v25)(v22, *(_QWORD *)(v25 + 8));
  }
}