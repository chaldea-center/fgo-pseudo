void SeManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x0
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  __int64 v4; // x19
  int32_t v5; // w1
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  int32_t v8; // w1
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  struct SeManager_StaticFields *static_fields; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  struct SeManager_StaticFields *v14; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  struct SeManager_StaticFields *v22; // x8

  if ( (byte_4C4295D & 1) == 0 )
  {
    sub_1C37058(&SeManager_TypeInfo);
    sub_1C37058(&string___TypeInfo);
    sub_1C37058(&StringLiteral_11511/*"SE"*/);
    sub_1C37058(&StringLiteral_11368/*"ResidentSE"*/);
    byte_4C4295D = 1;
  }
  v1 = sub_1C37100(string___TypeInfo, 2);
  if ( !v1 )
    sub_1C372B4(0);
  v4 = v1;
  if ( !*(_DWORD *)(v1 + 24)
    || (v5 = StringLiteral_11368/*"ResidentSE"*/,
        *(_QWORD *)(v1 + 32) = StringLiteral_11368/*"ResidentSE"*/,
        sub_1C36FFC((CGThumbnailListItem_o *)(v1 + 32), v5, v2, v3),
        *(_DWORD *)(v4 + 24) <= 1u) )
  {
    sub_1C372BC(v1);
  }
  v8 = StringLiteral_11511/*"SE"*/;
  *(_QWORD *)(v4 + 40) = StringLiteral_11511/*"SE"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v4 + 40), v8, v6, v7);
  SeManager_TypeInfo->static_fields->LoadSeList = (struct System_String_array *)v4;
  sub_1C36FFC((CGThumbnailListItem_o *)SeManager_TypeInfo->static_fields, v4, v9, v10);
  static_fields = SeManager_TypeInfo->static_fields;
  static_fields->seAssetBundleList = 0;
  static_fields = (struct SeManager_StaticFields *)((char *)static_fields + 16);
  static_fields[-1].loadCounter = 1065353216;
  sub_1C36FFC((CGThumbnailListItem_o *)static_fields, 0, v12, v13);
  v14 = SeManager_TypeInfo->static_fields;
  v14->residentSeAssetBundleList = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)&v14->residentSeAssetBundleList, 0, v15, v16);
  __asm { FMOV            V0.2S, #1.0 }
  v22 = SeManager_TypeInfo->static_fields;
  v22->isMute = 0;
  *(_QWORD *)&v22->masterVolume = _D0;
  v22->IsBusy = 0;
}


void SeManager___ctor(SeManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x0
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  __int64 v6; // x20
  int32_t v7; // w1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  int32_t v10; // w1
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  int32_t v13; // w1
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  int32_t v16; // w1
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  int32_t v19; // w1
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  int32_t v22; // w1
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  int32_t v25; // w1
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  __int64 v30; // x20
  int32_t v31; // w1
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  int32_t v34; // w1
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  int32_t v37; // w1
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  int32_t v40; // w1
  int32_t v41; // w2
  const MethodInfo *v42; // x3
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
  int32_t v59; // w2
  const MethodInfo *v60; // x3
  int32_t v61; // w1
  int32_t v62; // w2
  const MethodInfo *v63; // x3
  int32_t v64; // w1
  int32_t v65; // w2
  const MethodInfo *v66; // x3
  int32_t v67; // w2
  const MethodInfo *v68; // x3
  __int64 v69; // x20
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
  int32_t v86; // w2
  const MethodInfo *v87; // x3
  int32_t v88; // w1
  int32_t v89; // w2
  const MethodInfo *v90; // x3
  int32_t v91; // w1
  int32_t v92; // w2
  const MethodInfo *v93; // x3
  int32_t v94; // w1
  int32_t v95; // w2
  const MethodInfo *v96; // x3
  int32_t v97; // w1
  int32_t v98; // w2
  const MethodInfo *v99; // x3
  int32_t v100; // w1
  int32_t v101; // w2
  const MethodInfo *v102; // x3
  int32_t v103; // w1
  int32_t v104; // w2
  const MethodInfo *v105; // x3
  int32_t v106; // w1
  int32_t v107; // w2
  const MethodInfo *v108; // x3
  int32_t v109; // w1
  int32_t v110; // w2
  const MethodInfo *v111; // x3
  int32_t v112; // w1
  int32_t v113; // w2
  const MethodInfo *v114; // x3
  int32_t v115; // w1
  int32_t v116; // w2
  const MethodInfo *v117; // x3
  int32_t v118; // w1
  int32_t v119; // w2
  const MethodInfo *v120; // x3
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
  int32_t v137; // w2
  const MethodInfo *v138; // x3
  int32_t v139; // w1
  int32_t v140; // w2
  const MethodInfo *v141; // x3
  int32_t v142; // w1
  int32_t v143; // w2
  const MethodInfo *v144; // x3
  int32_t v145; // w1
  int32_t v146; // w2
  const MethodInfo *v147; // x3
  int32_t v148; // w1
  int32_t v149; // w2
  const MethodInfo *v150; // x3
  int32_t v151; // w1
  int32_t v152; // w2
  const MethodInfo *v153; // x3
  int32_t v154; // w1
  int32_t v155; // w2
  const MethodInfo *v156; // x3
  int32_t v157; // w1
  int32_t v158; // w2
  const MethodInfo *v159; // x3

  if ( (byte_4C4295C & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_SeManager___ctor__);
    sub_1C37058(&string___TypeInfo);
    sub_1C37058(&StringLiteral_23894/*"sy4"*/);
    sub_1C37058(&StringLiteral_16849/*"ar102"*/);
    sub_1C37058(&StringLiteral_16983/*"ba17"*/);
    sub_1C37058(&StringLiteral_24068/*"ti1"*/);
    sub_1C37058(&StringLiteral_23898/*"sy8"*/);
    sub_1C37058(&StringLiteral_16850/*"ar112"*/);
    sub_1C37058(&StringLiteral_16978/*"ba11"*/);
    sub_1C37058(&StringLiteral_23895/*"sy5"*/);
    sub_1C37058(&StringLiteral_16976/*"ba10"*/);
    sub_1C37058(&StringLiteral_18032/*"co1"*/);
    sub_1C37058(&StringLiteral_23896/*"sy6"*/);
    sub_1C37058(&StringLiteral_16986/*"ba2"*/);
    sub_1C37058(&StringLiteral_16992/*"ba3"*/);
    sub_1C37058(&StringLiteral_16981/*"ba15"*/);
    sub_1C37058(&StringLiteral_16991/*"ba24"*/);
    sub_1C37058(&StringLiteral_24289/*"um2"*/);
    sub_1C37058(&StringLiteral_21597/*"mis1"*/);
    sub_1C37058(&StringLiteral_23897/*"sy7"*/);
    sub_1C37058(&StringLiteral_16987/*"ba20"*/);
    sub_1C37058(&StringLiteral_16975/*"ba1"*/);
    sub_1C37058(&StringLiteral_16985/*"ba19"*/);
    sub_1C37058(&StringLiteral_23899/*"sy9"*/);
    sub_1C37058(&StringLiteral_16855/*"ar2"*/);
    sub_1C37058(&StringLiteral_16990/*"ba23"*/);
    sub_1C37058(&StringLiteral_24851/*"wo11"*/);
    sub_1C37058(&StringLiteral_16994/*"ba38"*/);
    sub_1C37058(&StringLiteral_23892/*"sy2"*/);
    sub_1C37058(&StringLiteral_24035/*"testSe"*/);
    sub_1C37058(&StringLiteral_16993/*"ba30"*/);
    sub_1C37058(&StringLiteral_24288/*"um1"*/);
    sub_1C37058(&StringLiteral_16996/*"ba7"*/);
    sub_1C37058(&StringLiteral_16988/*"ba21"*/);
    sub_1C37058(&StringLiteral_16984/*"ba18"*/);
    sub_1C37058(&StringLiteral_23890/*"sy1"*/);
    sub_1C37058(&StringLiteral_22845/*"qev79"*/);
    sub_1C37058(&StringLiteral_16980/*"ba13"*/);
    sub_1C37058(&StringLiteral_16982/*"ba16"*/);
    sub_1C37058(&StringLiteral_16979/*"ba12"*/);
    sub_1C37058(&StringLiteral_16989/*"ba22"*/);
    sub_1C37058(&StringLiteral_24850/*"wo1"*/);
    sub_1C37058(&StringLiteral_23893/*"sy3"*/);
    sub_1C37058(&StringLiteral_23891/*"sy1a"*/);
    sub_1C37058(&StringLiteral_16977/*"ba10a"*/);
    byte_4C4295C = 1;
  }
  this->fields.SYSTEM_SE_MAX = 3;
  this->fields.seMax = 8;
  *(int32x2_t *)&this->fields.preDelayTimeForStream = vdup_n_s32(0x43270000u);
  v3 = sub_1C37100(string___TypeInfo, 7);
  if ( !v3 )
    goto LABEL_57;
  v6 = v3;
  if ( !*(_DWORD *)(v3 + 24) )
    goto LABEL_56;
  v7 = StringLiteral_23890/*"sy1"*/;
  *(_QWORD *)(v3 + 32) = StringLiteral_23890/*"sy1"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v3 + 32), v7, v4, v5);
  if ( *(_DWORD *)(v6 + 24) <= 1u )
    goto LABEL_56;
  v10 = StringLiteral_23891/*"sy1a"*/;
  *(_QWORD *)(v6 + 40) = StringLiteral_23891/*"sy1a"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v6 + 40), v10, v8, v9);
  if ( *(_DWORD *)(v6 + 24) <= 2u )
    goto LABEL_56;
  v13 = StringLiteral_23892/*"sy2"*/;
  *(_QWORD *)(v6 + 48) = StringLiteral_23892/*"sy2"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v6 + 48), v13, v11, v12);
  if ( *(_DWORD *)(v6 + 24) <= 3u )
    goto LABEL_56;
  v16 = StringLiteral_23893/*"sy3"*/;
  *(_QWORD *)(v6 + 56) = StringLiteral_23893/*"sy3"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v6 + 56), v16, v14, v15);
  if ( *(_DWORD *)(v6 + 24) <= 4u )
    goto LABEL_56;
  v19 = StringLiteral_23899/*"sy9"*/;
  *(_QWORD *)(v6 + 64) = StringLiteral_23899/*"sy9"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v6 + 64), v19, v17, v18);
  if ( *(_DWORD *)(v6 + 24) <= 5u )
    goto LABEL_56;
  v22 = StringLiteral_24068/*"ti1"*/;
  *(_QWORD *)(v6 + 72) = StringLiteral_24068/*"ti1"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v6 + 72), v22, v20, v21);
  if ( *(_DWORD *)(v6 + 24) <= 6u )
    goto LABEL_56;
  v25 = StringLiteral_16984/*"ba18"*/;
  *(_QWORD *)(v6 + 80) = StringLiteral_16984/*"ba18"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v6 + 80), v25, v23, v24);
  this->fields.ignorePreDelayArray = (struct System_String_array *)v6;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.ignorePreDelayArray, v6, v26, v27);
  v3 = sub_1C37100(string___TypeInfo, 12);
  if ( !v3 )
    goto LABEL_57;
  v30 = v3;
  if ( !*(_DWORD *)(v3 + 24) )
    goto LABEL_56;
  v31 = StringLiteral_23890/*"sy1"*/;
  *(_QWORD *)(v3 + 32) = StringLiteral_23890/*"sy1"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v3 + 32), v31, v28, v29);
  if ( *(_DWORD *)(v30 + 24) <= 1u )
    goto LABEL_56;
  v34 = StringLiteral_23892/*"sy2"*/;
  *(_QWORD *)(v30 + 40) = StringLiteral_23892/*"sy2"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v30 + 40), v34, v32, v33);
  if ( *(_DWORD *)(v30 + 24) <= 2u )
    goto LABEL_56;
  v37 = StringLiteral_23893/*"sy3"*/;
  *(_QWORD *)(v30 + 48) = StringLiteral_23893/*"sy3"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v30 + 48), v37, v35, v36);
  if ( *(_DWORD *)(v30 + 24) <= 3u )
    goto LABEL_56;
  v40 = StringLiteral_23894/*"sy4"*/;
  *(_QWORD *)(v30 + 56) = StringLiteral_23894/*"sy4"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v30 + 56), v40, v38, v39);
  if ( *(_DWORD *)(v30 + 24) <= 4u )
    goto LABEL_56;
  v43 = StringLiteral_23895/*"sy5"*/;
  *(_QWORD *)(v30 + 64) = StringLiteral_23895/*"sy5"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v30 + 64), v43, v41, v42);
  if ( *(_DWORD *)(v30 + 24) <= 5u )
    goto LABEL_56;
  v46 = StringLiteral_23896/*"sy6"*/;
  *(_QWORD *)(v30 + 72) = StringLiteral_23896/*"sy6"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v30 + 72), v46, v44, v45);
  if ( *(_DWORD *)(v30 + 24) <= 6u )
    goto LABEL_56;
  v49 = StringLiteral_23897/*"sy7"*/;
  *(_QWORD *)(v30 + 80) = StringLiteral_23897/*"sy7"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v30 + 80), v49, v47, v48);
  if ( *(_DWORD *)(v30 + 24) <= 7u )
    goto LABEL_56;
  v52 = StringLiteral_23898/*"sy8"*/;
  *(_QWORD *)(v30 + 88) = StringLiteral_23898/*"sy8"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v30 + 88), v52, v50, v51);
  if ( *(_DWORD *)(v30 + 24) <= 8u )
    goto LABEL_56;
  v55 = StringLiteral_23891/*"sy1a"*/;
  *(_QWORD *)(v30 + 96) = StringLiteral_23891/*"sy1a"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v30 + 96), v55, v53, v54);
  if ( *(_DWORD *)(v30 + 24) <= 9u
    || (v58 = StringLiteral_24288/*"um1"*/,
        *(_QWORD *)(v30 + 104) = StringLiteral_24288/*"um1"*/,
        sub_1C36FFC((CGThumbnailListItem_o *)(v30 + 104), v58, v56, v57),
        *(_DWORD *)(v30 + 24) <= 0xAu)
    || (v61 = StringLiteral_24289/*"um2"*/,
        *(_QWORD *)(v30 + 112) = StringLiteral_24289/*"um2"*/,
        sub_1C36FFC((CGThumbnailListItem_o *)(v30 + 112), v61, v59, v60),
        *(_DWORD *)(v30 + 24) <= 0xBu) )
  {
LABEL_56:
    sub_1C372BC(v3);
  }
  v64 = StringLiteral_23899/*"sy9"*/;
  *(_QWORD *)(v30 + 120) = StringLiteral_23899/*"sy9"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v30 + 120), v64, v62, v63);
  this->fields.systemSeClipNames = (struct System_String_array *)v30;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.systemSeClipNames, v30, v65, v66);
  v3 = sub_1C37100(string___TypeInfo, 30);
  if ( !v3 )
LABEL_57:
    sub_1C372B4(v3);
  v69 = v3;
  if ( !*(_DWORD *)(v3 + 24) )
    goto LABEL_56;
  v70 = StringLiteral_16975/*"ba1"*/;
  *(_QWORD *)(v3 + 32) = StringLiteral_16975/*"ba1"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v3 + 32), v70, v67, v68);
  if ( *(_DWORD *)(v69 + 24) <= 1u )
    goto LABEL_56;
  v73 = StringLiteral_16986/*"ba2"*/;
  *(_QWORD *)(v69 + 40) = StringLiteral_16986/*"ba2"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v69 + 40), v73, v71, v72);
  if ( *(_DWORD *)(v69 + 24) <= 2u )
    goto LABEL_56;
  v76 = StringLiteral_16992/*"ba3"*/;
  *(_QWORD *)(v69 + 48) = StringLiteral_16992/*"ba3"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v69 + 48), v76, v74, v75);
  if ( *(_DWORD *)(v69 + 24) <= 3u )
    goto LABEL_56;
  v79 = StringLiteral_16996/*"ba7"*/;
  *(_QWORD *)(v69 + 56) = StringLiteral_16996/*"ba7"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v69 + 56), v79, v77, v78);
  if ( *(_DWORD *)(v69 + 24) <= 4u )
    goto LABEL_56;
  v82 = StringLiteral_16976/*"ba10"*/;
  *(_QWORD *)(v69 + 64) = StringLiteral_16976/*"ba10"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v69 + 64), v82, v80, v81);
  if ( *(_DWORD *)(v69 + 24) <= 5u )
    goto LABEL_56;
  v85 = StringLiteral_16977/*"ba10a"*/;
  *(_QWORD *)(v69 + 72) = StringLiteral_16977/*"ba10a"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v69 + 72), v85, v83, v84);
  if ( *(_DWORD *)(v69 + 24) <= 6u )
    goto LABEL_56;
  v88 = StringLiteral_16978/*"ba11"*/;
  *(_QWORD *)(v69 + 80) = StringLiteral_16978/*"ba11"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v69 + 80), v88, v86, v87);
  if ( *(_DWORD *)(v69 + 24) <= 7u )
    goto LABEL_56;
  v91 = StringLiteral_16979/*"ba12"*/;
  *(_QWORD *)(v69 + 88) = StringLiteral_16979/*"ba12"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v69 + 88), v91, v89, v90);
  if ( *(_DWORD *)(v69 + 24) <= 8u )
    goto LABEL_56;
  v94 = StringLiteral_16982/*"ba16"*/;
  *(_QWORD *)(v69 + 96) = StringLiteral_16982/*"ba16"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v69 + 96), v94, v92, v93);
  if ( *(_DWORD *)(v69 + 24) <= 9u )
    goto LABEL_56;
  v97 = StringLiteral_16984/*"ba18"*/;
  *(_QWORD *)(v69 + 104) = StringLiteral_16984/*"ba18"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v69 + 104), v97, v95, v96);
  if ( *(_DWORD *)(v69 + 24) <= 0xAu )
    goto LABEL_56;
  v100 = StringLiteral_16985/*"ba19"*/;
  *(_QWORD *)(v69 + 112) = StringLiteral_16985/*"ba19"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v69 + 112), v100, v98, v99);
  if ( *(_DWORD *)(v69 + 24) <= 0xBu )
    goto LABEL_56;
  v103 = StringLiteral_16987/*"ba20"*/;
  *(_QWORD *)(v69 + 120) = StringLiteral_16987/*"ba20"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v69 + 120), v103, v101, v102);
  if ( *(_DWORD *)(v69 + 24) <= 0xCu )
    goto LABEL_56;
  v106 = StringLiteral_16988/*"ba21"*/;
  *(_QWORD *)(v69 + 128) = StringLiteral_16988/*"ba21"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v69 + 128), v106, v104, v105);
  if ( *(_DWORD *)(v69 + 24) <= 0xDu )
    goto LABEL_56;
  v109 = StringLiteral_16989/*"ba22"*/;
  *(_QWORD *)(v69 + 136) = StringLiteral_16989/*"ba22"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v69 + 136), v109, v107, v108);
  if ( *(_DWORD *)(v69 + 24) <= 0xEu )
    goto LABEL_56;
  v112 = StringLiteral_16990/*"ba23"*/;
  *(_QWORD *)(v69 + 144) = StringLiteral_16990/*"ba23"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v69 + 144), v112, v110, v111);
  if ( *(_DWORD *)(v69 + 24) <= 0xFu )
    goto LABEL_56;
  v115 = StringLiteral_16991/*"ba24"*/;
  *(_QWORD *)(v69 + 152) = StringLiteral_16991/*"ba24"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v69 + 152), v115, v113, v114);
  if ( *(_DWORD *)(v69 + 24) <= 0x10u )
    goto LABEL_56;
  v118 = StringLiteral_16993/*"ba30"*/;
  *(_QWORD *)(v69 + 160) = StringLiteral_16993/*"ba30"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v69 + 160), v118, v116, v117);
  if ( *(_DWORD *)(v69 + 24) <= 0x11u )
    goto LABEL_56;
  v121 = StringLiteral_16855/*"ar2"*/;
  *(_QWORD *)(v69 + 168) = StringLiteral_16855/*"ar2"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v69 + 168), v121, v119, v120);
  if ( *(_DWORD *)(v69 + 24) <= 0x12u )
    goto LABEL_56;
  v124 = StringLiteral_16849/*"ar102"*/;
  *(_QWORD *)(v69 + 176) = StringLiteral_16849/*"ar102"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v69 + 176), v124, v122, v123);
  if ( *(_DWORD *)(v69 + 24) <= 0x13u )
    goto LABEL_56;
  v127 = StringLiteral_18032/*"co1"*/;
  *(_QWORD *)(v69 + 184) = StringLiteral_18032/*"co1"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v69 + 184), v127, v125, v126);
  if ( *(_DWORD *)(v69 + 24) <= 0x14u )
    goto LABEL_56;
  v130 = StringLiteral_21597/*"mis1"*/;
  *(_QWORD *)(v69 + 192) = StringLiteral_21597/*"mis1"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v69 + 192), v130, v128, v129);
  if ( *(_DWORD *)(v69 + 24) <= 0x15u )
    goto LABEL_56;
  v133 = StringLiteral_24035/*"testSe"*/;
  *(_QWORD *)(v69 + 200) = StringLiteral_24035/*"testSe"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v69 + 200), v133, v131, v132);
  if ( *(_DWORD *)(v69 + 24) <= 0x16u )
    goto LABEL_56;
  v136 = StringLiteral_24850/*"wo1"*/;
  *(_QWORD *)(v69 + 208) = StringLiteral_24850/*"wo1"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v69 + 208), v136, v134, v135);
  if ( *(_DWORD *)(v69 + 24) <= 0x17u )
    goto LABEL_56;
  v139 = StringLiteral_24851/*"wo11"*/;
  *(_QWORD *)(v69 + 216) = StringLiteral_24851/*"wo11"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v69 + 216), v139, v137, v138);
  if ( *(_DWORD *)(v69 + 24) <= 0x18u )
    goto LABEL_56;
  v142 = StringLiteral_16994/*"ba38"*/;
  *(_QWORD *)(v69 + 224) = StringLiteral_16994/*"ba38"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v69 + 224), v142, v140, v141);
  if ( *(_DWORD *)(v69 + 24) <= 0x19u )
    goto LABEL_56;
  v145 = StringLiteral_16980/*"ba13"*/;
  *(_QWORD *)(v69 + 232) = StringLiteral_16980/*"ba13"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v69 + 232), v145, v143, v144);
  if ( *(_DWORD *)(v69 + 24) <= 0x1Au )
    goto LABEL_56;
  v148 = StringLiteral_16981/*"ba15"*/;
  *(_QWORD *)(v69 + 240) = StringLiteral_16981/*"ba15"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v69 + 240), v148, v146, v147);
  if ( *(_DWORD *)(v69 + 24) <= 0x1Bu )
    goto LABEL_56;
  v151 = StringLiteral_16983/*"ba17"*/;
  *(_QWORD *)(v69 + 248) = StringLiteral_16983/*"ba17"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v69 + 248), v151, v149, v150);
  if ( *(_DWORD *)(v69 + 24) <= 0x1Cu )
    goto LABEL_56;
  v154 = StringLiteral_16850/*"ar112"*/;
  *(_QWORD *)(v69 + 256) = StringLiteral_16850/*"ar112"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v69 + 256), v154, v152, v153);
  if ( *(_DWORD *)(v69 + 24) <= 0x1Du )
    goto LABEL_56;
  v157 = StringLiteral_22845/*"qev79"*/;
  *(_QWORD *)(v69 + 264) = StringLiteral_22845/*"qev79"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v69 + 264), v157, v155, v156);
  this->fields.commonSeClipNames = (struct System_String_array *)v69;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.commonSeClipNames, v69, v158, v159);
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_39ED654 *)Method_SingletonMonoBehaviour_SeManager___ctor__);
}


void SeManager__ChangeVolumeSe(System_String_o *name, float volume, float fadeTime, const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  _BOOL8 v8; // x0
  const MethodInfo *v9; // x2

  if ( (byte_4C42944 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_SeManager__get_Instance__);
    byte_4C42944 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_SeManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v8 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( !v8 )
  {
    if ( !Instance )
      sub_1C372B4(v8);
    SeManager__ChangeVolumeSeLocal((SeManager_o *)Instance, name, volume, fadeTime, v9);
  }
}


void SeManager__ChangeVolumeSeLocal(
        SeManager_o *this,
        System_String_o *name,
        float volume,
        float fadeTime,
        const MethodInfo *method)
{
  SePlayer_o *SePlayer_41499400; // x0
  const MethodInfo *v8; // x1

  SePlayer_41499400 = SeManager__GetSePlayer_41499400(this, name, method);
  if ( SePlayer_41499400 )
    SePlayer__ChangeVolume(SePlayer_41499400, volume, fadeTime, v8);
}


void SeManager__ChangeVolumeSeLocal_41494424(
        SeManager_o *this,
        System_String_o *assetName,
        System_String_o *objectName,
        float volume,
        float fadeTime,
        const MethodInfo *method)
{
  SePlayer_o *SePlayer_41499576; // x0
  const MethodInfo *v9; // x1

  SePlayer_41499576 = SeManager__GetSePlayer_41499576(this, assetName, objectName, method);
  if ( SePlayer_41499576 )
    SePlayer__ChangeVolume(SePlayer_41499576, volume, fadeTime, v9);
}


void SeManager__ChangeVolumeVoice(
        System_String_o *assetName,
        System_String_o *objectName,
        float volume,
        float fadeTime,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x21
  _BOOL8 v10; // x0
  const MethodInfo *v11; // x3

  if ( (byte_4C42945 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_SeManager__get_Instance__);
    byte_4C42945 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_SeManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v10 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( !v10 )
  {
    if ( !Instance )
      sub_1C372B4(v10);
    SeManager__ChangeVolumeVoiceLocal((SeManager_o *)Instance, assetName, objectName, volume, fadeTime, v11);
  }
}


void SeManager__ChangeVolumeVoiceLocal(
        SeManager_o *this,
        System_String_o *assetName,
        System_String_o *objectName,
        float volume,
        float fadeTime,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x4
  SePlayer_o *SePlayer_41499992; // x0
  const MethodInfo *v10; // x1

  SePlayer_41499992 = SeManager__GetSePlayer_41499992(this, 1, assetName, objectName, v6);
  if ( SePlayer_41499992 )
    SePlayer__ChangeVolume(SePlayer_41499992, volume, fadeTime, v10);
}


CriAtomSource_o *SeManager__GetAudioSource(SeManager_o *this, SePlayer_o *player, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  int32_t seMax; // w9
  struct SePlayer_array *sePlayerStatusList; // x23
  SeManager_o *v6; // x19
  il2cpp_array_size_t max_length; // x8
  unsigned int v9; // w21
  __int64 i; // x22
  struct CriAtomSource_array *seSources; // x8
  __int64 v13; // x0

  seMax = this->fields.seMax;
  if ( seMax < 1 )
    return 0;
  sePlayerStatusList = this->fields.sePlayerStatusList;
  v6 = this;
  if ( !sePlayerStatusList )
    goto LABEL_16;
  max_length = sePlayerStatusList->max_length;
  v9 = 0;
  for ( i = 32; ; i += 8 )
  {
    if ( v9 >= (unsigned int)max_length )
      goto LABEL_15;
    if ( !*(Il2CppClass **)((char *)&sePlayerStatusList->obj.klass + i) )
      break;
    if ( (int)++v9 >= seMax )
      return 0;
  }
  if ( player )
  {
    this = (SeManager_o *)sub_1C37194(player, sePlayerStatusList->obj.klass->_1.element_class);
    if ( !this )
    {
      v13 = sub_1C372D8(0);
      sub_1C37180(v13, 0);
    }
    max_length = sePlayerStatusList->max_length;
  }
  if ( v9 >= (unsigned int)max_length )
LABEL_15:
    sub_1C372BC(this);
  *(Il2CppClass **)((char *)&sePlayerStatusList->obj.klass + i) = (Il2CppClass *)player;
  sub_1C36FFC((CGThumbnailListItem_o *)((char *)sePlayerStatusList + i), (int32_t)player, (int32_t)method, v3);
  seSources = v6->fields.seSources;
  if ( !seSources )
LABEL_16:
    sub_1C372B4(this);
  if ( v9 >= LODWORD(seSources->max_length) )
    goto LABEL_15;
  return *(CriAtomSource_o **)((char *)&seSources->obj.klass + i);
}


CriAtomSource_o *SeManager__GetAudioSource_41498172(
        SeManager_o *this,
        SePlayer_o *player,
        System_String_o *cueSheet,
        System_String_o *cueName,
        const MethodInfo *method)
{
  SeManager_o *v5; // x20
  unsigned __int64 v9; // x26
  __int64 i; // x25
  struct SePlayer_array *sePlayerStatusList; // x8
  struct CriAtomSource_array *seSources; // x9
  SePlayer_o *v13; // x24
  CriAtomSource_o *v14; // x23
  const MethodInfo *v15; // x1
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  struct SePlayer_array *v19; // x20
  __int64 v20; // x0

  v5 = this;
  if ( this->fields.seMax < 1 )
    return SeManager__GetAudioSource(v5, player, (const MethodInfo *)cueSheet);
  v9 = 0;
  for ( i = 32; ; i += 8 )
  {
    sePlayerStatusList = v5->fields.sePlayerStatusList;
    if ( !sePlayerStatusList )
      goto LABEL_18;
    if ( v9 >= LODWORD(sePlayerStatusList->max_length) )
      goto LABEL_19;
    seSources = v5->fields.seSources;
    if ( !seSources )
      goto LABEL_18;
    if ( v9 >= LODWORD(seSources->max_length) )
      goto LABEL_19;
    v13 = *(SePlayer_o **)((char *)&sePlayerStatusList->obj.klass + i);
    if ( v13 )
    {
      v14 = *(CriAtomSource_o **)((char *)&seSources->obj.klass + i);
      if ( !v14 )
        goto LABEL_18;
      this = (SeManager_o *)System_String__op_Equality(v14->fields._cueSheet, cueSheet, 0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        this = (SeManager_o *)System_String__op_Equality(v14->fields._cueName, cueName, 0);
        if ( ((unsigned __int8)this & 1) != 0 )
          break;
      }
    }
    if ( (__int64)++v9 >= v5->fields.seMax )
      return SeManager__GetAudioSource(v5, player, (const MethodInfo *)cueSheet);
  }
  SePlayer__StopSe(v13, 0.0, v15);
  v19 = v5->fields.sePlayerStatusList;
  if ( !v19 )
LABEL_18:
    sub_1C372B4(this);
  if ( player )
  {
    this = (SeManager_o *)sub_1C37194(player, v19->obj.klass->_1.element_class);
    if ( !this )
    {
      v20 = sub_1C372D8(0);
      sub_1C37180(v20, 0);
    }
  }
  if ( (unsigned int)v9 >= LODWORD(v19->max_length) )
LABEL_19:
    sub_1C372BC(this);
  *(Il2CppClass **)((char *)&v19->obj.klass + i) = (Il2CppClass *)player;
  sub_1C36FFC((CGThumbnailListItem_o *)((char *)v19 + i), (int32_t)player, v17, v18);
  return v14;
}


// local variable allocation has failed, the output may be wrong!
CriAtomSource_o *SeManager__GetAudioSource_41498832(
        SeManager_o *this,
        SePlayer_o *player,
        System_String_o *cueSheet,
        System_String_o *cueName,
        bool notOverwrite,
        const MethodInfo *method)
{
  SeManager_o *v7; // x19
  int32_t seMax; // w9
  struct SePlayer_array *sePlayerStatusList; // x23
  il2cpp_array_size_t max_length; // x8
  unsigned int v11; // w21
  __int64 i; // x22
  struct CriAtomSource_array *seSources; // x10
  struct CriAtomSource_array *v15; // x8
  __int64 v16; // x0

  v7 = this;
  if ( !notOverwrite )
    return SeManager__GetAudioSource_41498172(this, player, cueSheet, cueName, (const MethodInfo *)notOverwrite);
  seMax = this->fields.seMax;
  if ( seMax < 1 )
    return SeManager__GetAudioSource_41498172(this, player, cueSheet, cueName, (const MethodInfo *)notOverwrite);
  sePlayerStatusList = this->fields.sePlayerStatusList;
  if ( !sePlayerStatusList )
    goto LABEL_19;
  max_length = sePlayerStatusList->max_length;
  v11 = 0;
  for ( i = 32; ; i += 8 )
  {
    if ( v11 >= (unsigned int)max_length )
      goto LABEL_18;
    seSources = this->fields.seSources;
    if ( !seSources )
      goto LABEL_19;
    if ( v11 >= LODWORD(seSources->max_length) )
      goto LABEL_18;
    if ( !*(Il2CppClass **)((char *)&sePlayerStatusList->obj.klass + i) )
      break;
    if ( (int)++v11 >= seMax )
      return SeManager__GetAudioSource_41498172(this, player, cueSheet, cueName, (const MethodInfo *)notOverwrite);
  }
  if ( player )
  {
    this = (SeManager_o *)sub_1C37194(player, sePlayerStatusList->obj.klass->_1.element_class);
    if ( !this )
    {
      v16 = sub_1C372D8(0);
      sub_1C37180(v16, 0);
    }
    max_length = sePlayerStatusList->max_length;
  }
  if ( v11 >= (unsigned int)max_length )
LABEL_18:
    sub_1C372BC(this);
  *(Il2CppClass **)((char *)&sePlayerStatusList->obj.klass + i) = (Il2CppClass *)player;
  sub_1C36FFC(
    (CGThumbnailListItem_o *)((char *)sePlayerStatusList + i),
    (int32_t)player,
    (int32_t)cueSheet,
    (const MethodInfo *)cueName);
  v15 = v7->fields.seSources;
  if ( !v15 )
LABEL_19:
    sub_1C372B4(this);
  if ( v11 >= LODWORD(v15->max_length) )
    goto LABEL_18;
  return *(CriAtomSource_o **)((char *)&v15->obj.klass + i);
}


System_String_o *SeManager__GetCommonSeName(int32_t kind, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  const MethodInfo *v4; // x2

  if ( (byte_4C42928 & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_SeManager__get_Instance__);
    byte_4C42928 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_SeManager__get_Instance__);
  if ( !Instance )
    sub_1C372B4(0);
  return SeManager__GetCommonSeNameLocal((SeManager_o *)Instance, kind, v4);
}


System_String_o *SeManager__GetCommonSeNameLocal(SeManager_o *this, int32_t kind, const MethodInfo *method)
{
  struct System_String_array *commonSeClipNames; // x8

  commonSeClipNames = this->fields.commonSeClipNames;
  if ( !commonSeClipNames )
    sub_1C372B4(this);
  if ( LODWORD(commonSeClipNames->max_length) <= kind )
    sub_1C372BC(this);
  return commonSeClipNames->m_Items[kind];
}


float SeManager__GetDefaultPreDelayTime(
        SeManager_o *this,
        System_String_o *cueSheet,
        System_String_o *cueName,
        const MethodInfo *method)
{
  CriAtomExAcb_o *Acb; // x0
  CriAtomEx_WaveformInfo_o v8; // [xsp+0h] [xbp-50h] BYREF

  if ( !this->fields.enablePreDelay )
    return 0.0;
  Acb = CriAtom__GetAcb(cueSheet, 0);
  memset(&v8, 0, sizeof(v8));
  if ( Acb && CriAtomExAcb__GetWaveFormInfo(Acb, cueName, &v8, 0) && !v8.fields.streamingFlag )
    return this->fields.preDelayTimeForMemory;
  else
    return this->fields.preDelayTimeForStream;
}


System_String_o *SeManager__GetPathName(System_String_o *name, const MethodInfo *method)
{
  if ( (byte_4C4291E & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_12654/*"Se/"*/);
    byte_4C4291E = 1;
  }
  return System_String__Concat_63561656((System_String_o *)StringLiteral_12654/*"Se/"*/, name, 0);
}


float SeManager__GetPitchSe(System_String_o *name, const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  _BOOL8 v4; // x0
  const MethodInfo *v5; // x2
  float v6; // s8
  SePlayer_o *SePlayer_41499400; // x0

  if ( (byte_4C42947 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_SeManager__get_Instance__);
    byte_4C42947 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_SeManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  v6 = 0.0;
  if ( !v4 )
  {
    if ( !Instance )
      sub_1C372B4(v4);
    SePlayer_41499400 = SeManager__GetSePlayer_41499400((SeManager_o *)Instance, name, v5);
    if ( SePlayer_41499400 )
      return SePlayer_41499400->fields.pitchValue;
  }
  return v6;
}


float SeManager__GetPitchSeLocal(SeManager_o *this, System_String_o *name, const MethodInfo *method)
{
  SePlayer_o *SePlayer_41499400; // x0

  SePlayer_41499400 = SeManager__GetSePlayer_41499400(this, name, method);
  if ( SePlayer_41499400 )
    return SePlayer_41499400->fields.pitchValue;
  else
    return 0.0;
}


float SeManager__GetPreDelayTime(
        SeManager_o *this,
        System_String_o *cueSheet,
        System_String_o *cueName,
        const MethodInfo *method)
{
  float v7; // s8
  System_Collections_Generic_IEnumerable_TSource__o *ignorePreDelayArray; // x0
  CriAtomExAcb_o *Acb; // x0
  CriAtomEx_WaveformInfo_o v11; // [xsp+0h] [xbp-60h] BYREF

  if ( (byte_4C4294E & 1) == 0 )
  {
    sub_1C37058(&Method_System_Linq_Enumerable_Contains_string___);
    byte_4C4294E = 1;
  }
  v7 = 0.0;
  if ( this->fields.enablePreDelay )
  {
    ignorePreDelayArray = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.ignorePreDelayArray;
    if ( !ignorePreDelayArray
      || !System_Linq_Enumerable__Contains_object_(
            ignorePreDelayArray,
            (Il2CppObject *)cueName,
            (const MethodInfo_3104EFC *)Method_System_Linq_Enumerable_Contains_string___) )
    {
      Acb = CriAtom__GetAcb(cueSheet, 0);
      memset(&v11, 0, sizeof(v11));
      if ( Acb && CriAtomExAcb__GetWaveFormInfo(Acb, cueName, &v11, 0) && !v11.fields.streamingFlag )
        return this->fields.preDelayTimeForMemory;
      else
        return this->fields.preDelayTimeForStream;
    }
  }
  return v7;
}


SePlayer_o *SeManager__GetSePlayer(SeManager_o *this, int32_t num, const MethodInfo *method)
{
  SeManager_o *v4; // x20
  struct System_Collections_Generic_List_SePlayer__o *workSePlayerStatusList; // x8
  int32_t i; // w21

  v4 = this;
  if ( (byte_4C42950 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_SePlayer__get_Count__);
    this = (SeManager_o *)sub_1C37058(&Method_System_Collections_Generic_List_SePlayer__get_Item__);
    byte_4C42950 = 1;
  }
  workSePlayerStatusList = v4->fields.workSePlayerStatusList;
  if ( !workSePlayerStatusList )
LABEL_11:
    sub_1C372B4(this);
  for ( i = workSePlayerStatusList->fields._size - 1; (i & 0x80000000) == 0; --i )
  {
    this = (SeManager_o *)v4->fields.workSePlayerStatusList;
    if ( !this )
      goto LABEL_11;
    this = (SeManager_o *)System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)this,
                            i,
                            (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_SePlayer__get_Item__);
    if ( !this )
      goto LABEL_11;
    if ( HIDWORD(this->fields.m_CachedPtr) == num )
      return (SePlayer_o *)this;
  }
  return 0;
}


SePlayer_o *SeManager__GetSePlayer_41499400(SeManager_o *this, System_String_o *name, const MethodInfo *method)
{
  SeManager_o *v4; // x20
  struct System_Collections_Generic_List_SePlayer__o *workSePlayerStatusList; // x8
  int32_t i; // w21
  SeManager_o *v7; // x22

  v4 = this;
  if ( (byte_4C42951 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_SePlayer__get_Count__);
    this = (SeManager_o *)sub_1C37058(&Method_System_Collections_Generic_List_SePlayer__get_Item__);
    byte_4C42951 = 1;
  }
  workSePlayerStatusList = v4->fields.workSePlayerStatusList;
  if ( !workSePlayerStatusList )
LABEL_12:
    sub_1C372B4(this);
  for ( i = workSePlayerStatusList->fields._size - 1; (i & 0x80000000) == 0; --i )
  {
    this = (SeManager_o *)v4->fields.workSePlayerStatusList;
    if ( !this )
      goto LABEL_12;
    this = (SeManager_o *)System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)this,
                            i,
                            (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_SePlayer__get_Item__);
    if ( !this )
      goto LABEL_12;
    v7 = this;
    if ( System_String__op_Equality((System_String_o *)this->fields.systemSeSources, name, 0) )
      return (SePlayer_o *)v7;
  }
  return 0;
}


SePlayer_o *SeManager__GetSePlayer_41499576(
        SeManager_o *this,
        System_String_o *assetName,
        System_String_o *objectName,
        const MethodInfo *method)
{
  void *workSePlayerStatusList; // x0
  int32_t v8; // w22
  SePlayer_o *v9; // x23

  if ( (byte_4C42952 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_SePlayer__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_SePlayer__get_Item__);
    byte_4C42952 = 1;
  }
  workSePlayerStatusList = this->fields.workSePlayerStatusList;
  if ( !workSePlayerStatusList )
    goto LABEL_10;
  v8 = *((_DWORD *)workSePlayerStatusList + 6) - 1;
  if ( v8 >= 0 )
  {
    do
    {
      workSePlayerStatusList = System_Collections_Generic_List_object___get_Item(
                                 (System_Collections_Generic_List_object__o *)workSePlayerStatusList,
                                 v8,
                                 (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_SePlayer__get_Item__);
      if ( !workSePlayerStatusList )
        break;
      v9 = (SePlayer_o *)workSePlayerStatusList;
      if ( System_String__op_Equality(*((System_String_o **)workSePlayerStatusList + 3), assetName, 0)
        && System_String__op_Equality(v9->fields.objName, objectName, 0) )
      {
        return v9;
      }
      if ( --v8 < 0 )
        return 0;
      workSePlayerStatusList = this->fields.workSePlayerStatusList;
    }
    while ( workSePlayerStatusList );
LABEL_10:
    sub_1C372B4(workSePlayerStatusList);
  }
  return 0;
}


SePlayer_o *SeManager__GetSePlayer_41499792(
        SeManager_o *this,
        int32_t type,
        System_String_o *name,
        const MethodInfo *method)
{
  void *workSePlayerStatusList; // x0
  int32_t v8; // w22
  SePlayer_o *v9; // x23

  if ( (byte_4C42953 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_SePlayer__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_SePlayer__get_Item__);
    byte_4C42953 = 1;
  }
  workSePlayerStatusList = this->fields.workSePlayerStatusList;
  if ( !workSePlayerStatusList )
    goto LABEL_10;
  v8 = *((_DWORD *)workSePlayerStatusList + 6) - 1;
  if ( v8 >= 0 )
  {
    do
    {
      workSePlayerStatusList = System_Collections_Generic_List_object___get_Item(
                                 (System_Collections_Generic_List_object__o *)workSePlayerStatusList,
                                 v8,
                                 (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_SePlayer__get_Item__);
      if ( !workSePlayerStatusList )
        break;
      v9 = (SePlayer_o *)workSePlayerStatusList;
      if ( *((_DWORD *)workSePlayerStatusList + 4) == type
        && System_String__op_Equality(*((System_String_o **)workSePlayerStatusList + 4), name, 0) )
      {
        return v9;
      }
      if ( --v8 < 0 )
        return 0;
      workSePlayerStatusList = this->fields.workSePlayerStatusList;
    }
    while ( workSePlayerStatusList );
LABEL_10:
    sub_1C372B4(workSePlayerStatusList);
  }
  return 0;
}


SePlayer_o *SeManager__GetSePlayer_41499992(
        SeManager_o *this,
        int32_t type,
        System_String_o *assetName,
        System_String_o *objectName,
        const MethodInfo *method)
{
  void *workSePlayerStatusList; // x0
  int32_t v10; // w23
  SePlayer_o *v11; // x24

  if ( (byte_4C42954 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_SePlayer__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_SePlayer__get_Item__);
    byte_4C42954 = 1;
  }
  workSePlayerStatusList = this->fields.workSePlayerStatusList;
  if ( !workSePlayerStatusList )
    goto LABEL_11;
  v10 = *((_DWORD *)workSePlayerStatusList + 6) - 1;
  if ( v10 >= 0 )
  {
    do
    {
      workSePlayerStatusList = System_Collections_Generic_List_object___get_Item(
                                 (System_Collections_Generic_List_object__o *)workSePlayerStatusList,
                                 v10,
                                 (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_SePlayer__get_Item__);
      if ( !workSePlayerStatusList )
        break;
      v11 = (SePlayer_o *)workSePlayerStatusList;
      if ( *((_DWORD *)workSePlayerStatusList + 4) == type
        && System_String__op_Equality(*((System_String_o **)workSePlayerStatusList + 3), assetName, 0)
        && System_String__op_Equality(v11->fields.objName, objectName, 0) )
      {
        return v11;
      }
      if ( --v10 < 0 )
        return 0;
      workSePlayerStatusList = this->fields.workSePlayerStatusList;
    }
    while ( workSePlayerStatusList );
LABEL_11:
    sub_1C372B4(workSePlayerStatusList);
  }
  return 0;
}


void SeManager__Initialize(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3
  SeManager_c *v3; // x0
  struct SeManager_StaticFields *static_fields; // x8
  struct SeManager_StaticFields *v5; // x8
  Il2CppObject *Instance; // x19
  _BOOL8 v7; // x0
  const MethodInfo *v8; // x1

  if ( (byte_4C42919 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&SeManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_SeManager__get_Instance__);
    byte_4C42919 = 1;
  }
  v3 = SeManager_TypeInfo;
  if ( !SeManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
    v3 = SeManager_TypeInfo;
  }
  static_fields = v3->static_fields;
  if ( static_fields->seAssetBundleList )
  {
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      static_fields = SeManager_TypeInfo->static_fields;
    }
    static_fields->seAssetBundleList = 0;
    sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->seAssetBundleList, 0, v1, v2);
    v3 = SeManager_TypeInfo;
  }
  if ( !v3->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v3);
    v3 = SeManager_TypeInfo;
  }
  v5 = v3->static_fields;
  if ( v5->residentSeAssetBundleList )
  {
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v5 = SeManager_TypeInfo->static_fields;
    }
    v5->residentSeAssetBundleList = 0;
    sub_1C36FFC((CGThumbnailListItem_o *)&v5->residentSeAssetBundleList, 0, v1, v2);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_SeManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v7 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( !v7 )
  {
    if ( !Instance )
      sub_1C372B4(v7);
    SeManager__InitializeLocal((SeManager_o *)Instance, v8);
  }
}


void SeManager__InitializeAssetStorage(const MethodInfo *method)
{
  SeManager_c *v1; // x0
  struct SeManager_StaticFields *static_fields; // x8
  Il2CppObject *Instance; // x0
  struct System_String_array *LoadSeList; // x8
  SoundManager_o *v5; // x19
  System_String_o *v6; // x20
  System_Action_o *v7; // x21
  const MethodInfo *v8; // x4
  struct System_String_array *v9; // x8
  SoundManager_o *v10; // x19
  System_String_o *v11; // x20
  System_Action_o *v12; // x21
  const MethodInfo *v13; // x4

  if ( (byte_4C4291A & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_SeManager_LoadEndResidentSeAsset__);
    sub_1C37058(&SeManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    byte_4C4291A = 1;
  }
  v1 = SeManager_TypeInfo;
  if ( !SeManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
    v1 = SeManager_TypeInfo;
  }
  static_fields = v1->static_fields;
  static_fields->IsBusy = 1;
  static_fields->loadCounter = 2;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
  LoadSeList = SeManager_TypeInfo->static_fields->LoadSeList;
  if ( !LoadSeList )
    goto LABEL_12;
  if ( !LODWORD(LoadSeList->max_length) )
    goto LABEL_13;
  v5 = (SoundManager_o *)Instance;
  v6 = LoadSeList->m_Items[0];
  v7 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(v7, 0, Method_SeManager_LoadEndResidentSeAsset__, 0);
  if ( !v5
    || (SoundManager__LoadAudioAssetStorage(v5, v6, v7, 1, v8),
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__),
        (v9 = SeManager_TypeInfo->static_fields->LoadSeList) == 0) )
  {
LABEL_12:
    sub_1C372B4(Instance);
  }
  if ( LODWORD(v9->max_length) <= 1 )
LABEL_13:
    sub_1C372BC(Instance);
  v10 = (SoundManager_o *)Instance;
  v11 = v9->m_Items[1];
  v12 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(v12, 0, Method_SeManager_LoadEndResidentSeAsset__, 0);
  if ( !v10 )
    goto LABEL_12;
  SoundManager__LoadAudioAssetStorage(v10, v11, v12, 1, v13);
}


void SeManager__InitializeLocal(SeManager_o *this, const MethodInfo *method)
{
  struct UnityEngine_GameObject_o **p_playerGameObject; // x20
  UnityEngine_Object_o *playerGameObject; // x21
  const MethodInfo *v5; // x1
  UnityEngine_GameObject_o *v6; // x21
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  UnityEngine_Object_o *gameObject; // x0
  UnityEngine_Transform_o *transform; // x21
  struct CriAtomSource_array *v11; // x0
  struct CriAtomSource_array **p_seSources; // x21
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  struct SePlayer_array *v15; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  struct CriAtomSource_array *v18; // x0
  struct CriAtomSource_array **p_systemSeSources; // x22
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  System_Collections_Generic_List_object__o *v22; // x23
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  struct CriAtomSource_array *v25; // x27
  unsigned int v26; // w24
  __int64 v27; // x25
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  UnityEngine_Object_o *v30; // x23
  __int64 v31; // x8
  struct CriAtomSource_array *v32; // x27
  unsigned int v33; // w23
  __int64 i; // x24
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  UnityEngine_Object_o *v37; // x22
  struct CriAtomSource_array *v38; // x8
  __int64 v39; // x8
  __int64 v40; // x0

  if ( (byte_4C4294B & 1) == 0 )
  {
    sub_1C37058(&CriAtomSource___TypeInfo);
    sub_1C37058(&Method_UnityEngine_GameObject_AddComponent_CriAtomSource___);
    sub_1C37058(&UnityEngine_GameObject_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_SePlayer___ctor__);
    sub_1C37058(&System_Collections_Generic_List_SePlayer__TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&SePlayer___TypeInfo);
    sub_1C37058(&StringLiteral_12655/*"SePlayerObject"*/);
    byte_4C4294B = 1;
  }
  p_playerGameObject = &this->fields.playerGameObject;
  playerGameObject = (UnityEngine_Object_o *)this->fields.playerGameObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(playerGameObject, 0, 0) )
  {
    v6 = (UnityEngine_GameObject_o *)sub_1C372A4(UnityEngine_GameObject_TypeInfo);
    UnityEngine_GameObject___ctor_71248916(v6, 0);
    *p_playerGameObject = v6;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.playerGameObject, (int32_t)v6, v7, v8);
    gameObject = (UnityEngine_Object_o *)*p_playerGameObject;
    if ( !*p_playerGameObject )
      goto LABEL_37;
    UnityEngine_Object__set_name(gameObject, (System_String_o *)StringLiteral_12655/*"SePlayerObject"*/, 0);
    gameObject = (UnityEngine_Object_o *)*p_playerGameObject;
    if ( !*p_playerGameObject )
      goto LABEL_37;
    transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject )
      goto LABEL_37;
    gameObject = (UnityEngine_Object_o *)UnityEngine_GameObject__get_transform(
                                           (UnityEngine_GameObject_o *)gameObject,
                                           0);
    if ( !transform )
      goto LABEL_37;
    UnityEngine_Transform__set_parent(transform, (UnityEngine_Transform_o *)gameObject, 0);
    v11 = (struct CriAtomSource_array *)sub_1C37100(CriAtomSource___TypeInfo, (unsigned int)this->fields.seMax);
    this->fields.seSources = v11;
    p_seSources = &this->fields.seSources;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.seSources, (int32_t)v11, v13, v14);
    v15 = (struct SePlayer_array *)sub_1C37100(SePlayer___TypeInfo, (unsigned int)this->fields.seMax);
    this->fields.sePlayerStatusList = v15;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.sePlayerStatusList, (int32_t)v15, v16, v17);
    v18 = (struct CriAtomSource_array *)sub_1C37100(CriAtomSource___TypeInfo, (unsigned int)this->fields.SYSTEM_SE_MAX);
    this->fields.systemSeSources = v18;
    p_systemSeSources = &this->fields.systemSeSources;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.systemSeSources, (int32_t)v18, v20, v21);
    this->fields.systemSeIdx = 0;
    v22 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_SePlayer__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v22,
      (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_SePlayer___ctor__);
    this->fields.workSePlayerStatusList = (struct System_Collections_Generic_List_SePlayer__o *)v22;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.workSePlayerStatusList, (int32_t)v22, v23, v24);
    if ( this->fields.SYSTEM_SE_MAX >= 1 )
    {
      v25 = *p_systemSeSources;
      v26 = 0;
      v27 = 32;
      while ( 1 )
      {
        gameObject = (UnityEngine_Object_o *)*p_playerGameObject;
        if ( !*p_playerGameObject )
          break;
        gameObject = (UnityEngine_Object_o *)UnityEngine_GameObject__AddComponent_object_(
                                               (UnityEngine_GameObject_o *)gameObject,
                                               (const MethodInfo_313F0F0 *)Method_UnityEngine_GameObject_AddComponent_CriAtomSource___);
        if ( !v25 )
          break;
        v30 = gameObject;
        if ( gameObject )
        {
          gameObject = (UnityEngine_Object_o *)sub_1C37194(gameObject, v25->obj.klass->_1.element_class);
          if ( !gameObject )
          {
LABEL_39:
            v40 = sub_1C372D8(gameObject);
            sub_1C37180(v40, 0);
          }
        }
        if ( v26 >= LODWORD(v25->max_length) )
          goto LABEL_38;
        *(Il2CppClass **)((char *)&v25->obj.klass + v27) = (Il2CppClass *)v30;
        sub_1C36FFC((CGThumbnailListItem_o *)((char *)v25 + v27), (int32_t)v30, v28, v29);
        v25 = *p_systemSeSources;
        if ( !*p_systemSeSources )
          break;
        if ( v26 >= LODWORD(v25->max_length) )
LABEL_38:
          sub_1C372BC(gameObject);
        v31 = *(__int64 *)((char *)&v25->obj.klass + v27);
        if ( !v31 )
          break;
        *(_BYTE *)(v31 + 156) = 1;
        ++v26;
        v27 += 8;
        if ( (signed int)v26 >= this->fields.SYSTEM_SE_MAX )
          goto LABEL_21;
      }
LABEL_37:
      sub_1C372B4(gameObject);
    }
LABEL_21:
    if ( this->fields.seMax >= 1 )
    {
      v32 = *p_seSources;
      v33 = 0;
      for ( i = 32; ; i += 8 )
      {
        gameObject = (UnityEngine_Object_o *)*p_playerGameObject;
        if ( !*p_playerGameObject )
          break;
        gameObject = (UnityEngine_Object_o *)UnityEngine_GameObject__AddComponent_object_(
                                               (UnityEngine_GameObject_o *)gameObject,
                                               (const MethodInfo_313F0F0 *)Method_UnityEngine_GameObject_AddComponent_CriAtomSource___);
        if ( !v32 )
          break;
        v37 = gameObject;
        if ( gameObject )
        {
          gameObject = (UnityEngine_Object_o *)sub_1C37194(gameObject, v32->obj.klass->_1.element_class);
          if ( !gameObject )
            goto LABEL_39;
        }
        if ( v33 >= LODWORD(v32->max_length) )
          goto LABEL_38;
        *(Il2CppClass **)((char *)&v32->obj.klass + i) = (Il2CppClass *)v37;
        sub_1C36FFC((CGThumbnailListItem_o *)((char *)v32 + i), (int32_t)v37, v35, v36);
        v38 = *p_seSources;
        if ( !*p_seSources )
          break;
        if ( v33 >= LODWORD(v38->max_length) )
          goto LABEL_38;
        gameObject = *(UnityEngine_Object_o **)((char *)&v38->obj.klass + i);
        if ( !gameObject )
          break;
        CriAtomSource__set_use3dPositioning((CriAtomSource_o *)gameObject, 0, 0);
        v32 = *p_seSources;
        if ( !*p_seSources )
          break;
        if ( v33 >= LODWORD(v32->max_length) )
          goto LABEL_38;
        v39 = *(__int64 *)((char *)&v32->obj.klass + i);
        if ( !v39 )
          break;
        *(_BYTE *)(v39 + 156) = 1;
        if ( (signed int)++v33 >= this->fields.seMax )
          return;
      }
      goto LABEL_37;
    }
  }
  else
  {
    SeManager__StopSeAllLocal(this, 0.0, v5);
  }
}


void SeManager__InitializePreDelaySetting(const MethodInfo *method)
{
  Il2CppObject *Instance; // x19
  _BOOL8 v2; // x0
  const MethodInfo *v3; // x1

  if ( (byte_4C4291B & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_SeManager__get_Instance__);
    byte_4C4291B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_SeManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v2 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( !v2 )
  {
    if ( !Instance )
      sub_1C372B4(v2);
    SeManager__InitializePreDelaySettingLocal((SeManager_o *)Instance, v3);
  }
}


void SeManager__InitializePreDelaySettingLocal(SeManager_o *this, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  struct DataMasterBase_array *datalist; // x8
  DataMasterBase_o *v5; // x8
  ConstantStrMaster_o *v6; // x20
  struct System_String_array *ValueStringArray; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4C4294C & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_ConstantStrMaster___);
    sub_1C37058(&Method_DataMasterBase_ConstantStrMaster__ConstantStrEntity__string__isEntityExistsFromId__);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    sub_1C37058(&StringLiteral_12028/*"SE_PRE_DELAY_TIME_FOR_MEMORY"*/);
    sub_1C37058(&StringLiteral_12029/*"SE_PRE_DELAY_TIME_FOR_STREAM"*/);
    sub_1C37058(&StringLiteral_12027/*"SE_IGNORE_PRE_DELAY"*/);
    byte_4C4294C = 1;
  }
  this->fields.enablePreDelay = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  datalist = Instance->fields.datalist;
  if ( !datalist )
    goto LABEL_17;
  v5 = datalist->m_Items[5];
  if ( !v5 )
    goto LABEL_17;
  if ( BYTE5(v5[3].fields._MasterName_k__BackingField) )
  {
    this->fields.enablePreDelay = 1;
  }
  else if ( !this->fields.enablePreDelay )
  {
    return;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ConstantStrMaster___)) == 0 )
  {
LABEL_17:
    sub_1C372B4(Instance);
  }
  v6 = (ConstantStrMaster_o *)Instance;
  this->fields.preDelayTimeForStream = ConstantStrMaster__GetFloat(
                                         (ConstantStrMaster_o *)Instance,
                                         (System_String_o *)StringLiteral_12029/*"SE_PRE_DELAY_TIME_FOR_STREAM"*/,
                                         this->fields.preDelayTimeForStream,
                                         0);
  this->fields.preDelayTimeForMemory = ConstantStrMaster__GetFloat(
                                         v6,
                                         (System_String_o *)StringLiteral_12028/*"SE_PRE_DELAY_TIME_FOR_MEMORY"*/,
                                         this->fields.preDelayTimeForMemory,
                                         0);
  if ( DataMasterBase_object__object__object___isEntityExistsFromId_54153952(
         (DataMasterBase_TMaster__TEntity__PKType__o *)v6,
         (System_String_o *)StringLiteral_12027/*"SE_IGNORE_PRE_DELAY"*/,
         (const MethodInfo_33A52E0 *)Method_DataMasterBase_ConstantStrMaster__ConstantStrEntity__string__isEntityExistsFromId__) )
  {
    ValueStringArray = ConstantStrMaster__GetValueStringArray(v6, (System_String_o *)StringLiteral_12027/*"SE_IGNORE_PRE_DELAY"*/, 0, 0);
    this->fields.ignorePreDelayArray = ValueStringArray;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.ignorePreDelayArray, (int32_t)ValueStringArray, v8, v9);
  }
  if ( this->fields.preDelayTimeForStream <= 0.0 && this->fields.preDelayTimeForMemory <= 0.0 )
    this->fields.enablePreDelay = 0;
}


bool SeManager__IsBusyCommonSe(int32_t kind, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  const MethodInfo *v4; // x2

  if ( (byte_4C4292D & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_SeManager__get_Instance__);
    byte_4C4292D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_SeManager__get_Instance__);
  if ( !Instance )
    sub_1C372B4(0);
  return SeManager__IsBusyCommonSeLocal((SeManager_o *)Instance, kind, v4);
}


// local variable allocation has failed, the output may be wrong!
bool SeManager__IsBusyCommonSeLocal(SeManager_o *this, int32_t kind, const MethodInfo *method)
{
  SeManager_o *v4; // x20
  struct System_String_array *commonSeClipNames; // x8
  System_String_o *v6; // x19

  v4 = this;
  if ( (byte_4C4292E & 1) == 0 )
  {
    this = (SeManager_o *)sub_1C37058(&SeManager_TypeInfo);
    byte_4C4292E = 1;
  }
  commonSeClipNames = v4->fields.commonSeClipNames;
  if ( !commonSeClipNames )
    sub_1C372B4(this);
  if ( LODWORD(commonSeClipNames->max_length) <= kind )
    sub_1C372BC(this);
  v6 = commonSeClipNames->m_Items[kind];
  if ( !SeManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
  return SeManager__IsBusySe(v6, *(const MethodInfo **)&kind);
}


bool SeManager__IsBusyLocal(
        SeManager_o *this,
        int32_t seType,
        System_String_o *assetName,
        System_String_o *objectName,
        const MethodInfo *method)
{
  SePlayer_o *SePlayer_41499992; // x0
  const MethodInfo *v10; // x1
  void *workSePlayerStatusList; // x0
  int v12; // w21
  int v13; // w8
  SePlayer_o *v14; // x23
  const MethodInfo *v15; // x1
  int32_t v16; // w22
  SePlayer_o *v17; // x23
  const MethodInfo *v18; // x1
  const MethodInfo *v19; // x1

  if ( (byte_4C42955 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_SePlayer__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_SePlayer__get_Item__);
    byte_4C42955 = 1;
  }
  if ( objectName )
  {
    if ( assetName )
    {
      SePlayer_41499992 = SeManager__GetSePlayer_41499992(this, seType, assetName, objectName, method);
      if ( SePlayer_41499992 )
        LOBYTE(SePlayer_41499992) = SePlayer__get_IsBusy(SePlayer_41499992, v10);
      return (char)SePlayer_41499992;
    }
    workSePlayerStatusList = this->fields.workSePlayerStatusList;
    if ( workSePlayerStatusList )
    {
      v16 = *((_DWORD *)workSePlayerStatusList + 6) - 1;
      if ( v16 >= 0 )
      {
        do
        {
          workSePlayerStatusList = System_Collections_Generic_List_object___get_Item(
                                     (System_Collections_Generic_List_object__o *)workSePlayerStatusList,
                                     v16,
                                     (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_SePlayer__get_Item__);
          if ( !workSePlayerStatusList )
            break;
          v17 = (SePlayer_o *)workSePlayerStatusList;
          if ( *((_DWORD *)workSePlayerStatusList + 4) == seType
            && System_String__op_Equality(*((System_String_o **)workSePlayerStatusList + 4), objectName, 0)
            && SePlayer__get_IsBusy(v17, v18) )
          {
            goto LABEL_35;
          }
          if ( --v16 < 0 )
            goto LABEL_33;
          workSePlayerStatusList = this->fields.workSePlayerStatusList;
        }
        while ( workSePlayerStatusList );
        goto LABEL_32;
      }
LABEL_33:
      LOBYTE(SePlayer_41499992) = 0;
      return (char)SePlayer_41499992;
    }
LABEL_32:
    sub_1C372B4(workSePlayerStatusList);
  }
  workSePlayerStatusList = this->fields.workSePlayerStatusList;
  if ( !workSePlayerStatusList )
    goto LABEL_32;
  v12 = *((_DWORD *)workSePlayerStatusList + 6);
  v13 = v12 - 1;
  if ( assetName )
  {
    if ( v13 < 0 )
      goto LABEL_33;
    do
    {
      workSePlayerStatusList = System_Collections_Generic_List_object___get_Item(
                                 (System_Collections_Generic_List_object__o *)workSePlayerStatusList,
                                 --v12,
                                 (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_SePlayer__get_Item__);
      if ( !workSePlayerStatusList )
        break;
      v14 = (SePlayer_o *)workSePlayerStatusList;
      if ( *((_DWORD *)workSePlayerStatusList + 4) == seType
        && System_String__op_Equality(*((System_String_o **)workSePlayerStatusList + 3), assetName, 0)
        && SePlayer__get_IsBusy(v14, v15) )
      {
        goto LABEL_35;
      }
      if ( v12 < 1 )
        goto LABEL_33;
      workSePlayerStatusList = this->fields.workSePlayerStatusList;
    }
    while ( workSePlayerStatusList );
    goto LABEL_32;
  }
  if ( v13 < 0 )
    goto LABEL_33;
  while ( 1 )
  {
    workSePlayerStatusList = System_Collections_Generic_List_object___get_Item(
                               (System_Collections_Generic_List_object__o *)workSePlayerStatusList,
                               --v12,
                               (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_SePlayer__get_Item__);
    if ( !workSePlayerStatusList )
      goto LABEL_32;
    if ( *((_DWORD *)workSePlayerStatusList + 4) == seType
      && SePlayer__get_IsBusy((SePlayer_o *)workSePlayerStatusList, v19) )
    {
      break;
    }
    if ( v12 < 1 )
      goto LABEL_33;
    workSePlayerStatusList = this->fields.workSePlayerStatusList;
    if ( !workSePlayerStatusList )
      goto LABEL_32;
  }
LABEL_35:
  LOBYTE(SePlayer_41499992) = 1;
  return (char)SePlayer_41499992;
}


bool SeManager__IsBusySe(System_String_o *name, const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  _BOOL8 v4; // x0
  const MethodInfo *v5; // x4

  if ( (byte_4C4292F & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_SeManager__get_Instance__);
    byte_4C4292F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_SeManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( v4 )
    return 0;
  if ( !Instance )
    sub_1C372B4(v4);
  return SeManager__IsBusyLocal((SeManager_o *)Instance, 0, 0, name, v5);
}


bool SeManager__IsBusyVoice(System_String_o *assetName, System_String_o *objectName, const MethodInfo *method)
{
  Il2CppObject *Instance; // x21
  _BOOL8 v6; // x0
  const MethodInfo *v7; // x4

  if ( (byte_4C42930 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_SeManager__get_Instance__);
    byte_4C42930 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_SeManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( v6 )
    return 0;
  if ( !Instance )
    sub_1C372B4(v6);
  return SeManager__IsBusyLocal((SeManager_o *)Instance, 1, assetName, objectName, v7);
}


bool SeManager__IsDownloadFile(System_String_o *pathName, const MethodInfo *method)
{
  SeManager_c *v3; // x0

  if ( (byte_4C4291F & 1) == 0 )
  {
    sub_1C37058(&Method_System_Array_IndexOf_string___);
    sub_1C37058(&SeManager_TypeInfo);
    byte_4C4291F = 1;
  }
  v3 = SeManager_TypeInfo;
  if ( !SeManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
    v3 = SeManager_TypeInfo;
  }
  return System_Array__IndexOf_object_(
           (System_Object_array *)v3->static_fields->seAssetBundleList,
           (Il2CppObject *)pathName,
           (const MethodInfo_31EEE70 *)Method_System_Array_IndexOf_string___) >= 0;
}


void SeManager__LateUpdate(SeManager_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *playerGameObject; // x20
  float deltaTime; // s8
  struct System_Collections_Generic_List_SePlayer__o *workSePlayerStatusList; // x0
  int32_t v6; // w20
  Il2CppObject *Item; // x0
  const MethodInfo *v8; // x1
  SePlayer_o *v9; // x21
  const MethodInfo *v10; // x1
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  int32_t seMax; // w8
  struct SePlayer_array *sePlayerStatusList; // x11
  int32_t v15; // w9
  CGThumbnailListItem_o *m_Items; // x0
  struct System_Action_o *callbackFunc; // x24
  const MethodInfo *v18; // x1

  if ( (byte_4C4295B & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_SePlayer__RemoveAt__);
    sub_1C37058(&Method_System_Collections_Generic_List_SePlayer__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_SePlayer__get_Item__);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C4295B = 1;
  }
  playerGameObject = (UnityEngine_Object_o *)this->fields.playerGameObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(playerGameObject, 0, 0) )
  {
    deltaTime = RealTime__get_deltaTime(0);
    if ( deltaTime > 0.5 )
      deltaTime = UnityEngine_Time__get_deltaTime(0);
    workSePlayerStatusList = this->fields.workSePlayerStatusList;
    if ( workSePlayerStatusList )
    {
      v6 = workSePlayerStatusList->fields._size - 1;
      if ( v6 >= 0 )
      {
        while ( 1 )
        {
          Item = System_Collections_Generic_List_object___get_Item(
                   (System_Collections_Generic_List_object__o *)workSePlayerStatusList,
                   v6,
                   (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_SePlayer__get_Item__);
          if ( Item )
          {
            v9 = (SePlayer_o *)Item;
            if ( !SePlayer__get_IsPause((SePlayer_o *)Item, v8) )
            {
              workSePlayerStatusList = (struct System_Collections_Generic_List_SePlayer__o *)SePlayer__Update(
                                                                                               v9,
                                                                                               deltaTime,
                                                                                               v10);
              if ( ((unsigned __int8)workSePlayerStatusList & 1) == 0 )
              {
                seMax = this->fields.seMax;
                if ( seMax >= 1 )
                {
                  sePlayerStatusList = this->fields.sePlayerStatusList;
                  if ( !sePlayerStatusList )
                    goto LABEL_28;
                  v15 = 0;
                  m_Items = (CGThumbnailListItem_o *)sePlayerStatusList->m_Items;
                  while ( 1 )
                  {
                    if ( (unsigned int)v15 >= LODWORD(sePlayerStatusList->max_length) )
                      sub_1C372BC(m_Items);
                    if ( (SePlayer_o *)m_Items->klass == v9 )
                      break;
                    ++v15;
                    m_Items = (CGThumbnailListItem_o *)((char *)m_Items + 8);
                    if ( v15 >= seMax )
                      goto LABEL_23;
                  }
                  m_Items->klass = 0;
                  sub_1C36FFC(m_Items, 0, v11, v12);
                }
LABEL_23:
                workSePlayerStatusList = this->fields.workSePlayerStatusList;
                if ( !workSePlayerStatusList )
                  goto LABEL_28;
                System_Collections_Generic_List_object___RemoveAt(
                  (System_Collections_Generic_List_object__o *)workSePlayerStatusList,
                  v6,
                  (const MethodInfo_37A47F8 *)Method_System_Collections_Generic_List_SePlayer__RemoveAt__);
                callbackFunc = v9->fields.callbackFunc;
                SePlayer__Destroy(v9, v18);
                if ( callbackFunc )
                  ((void (__fastcall *)(intptr_t, intptr_t))callbackFunc->fields.invoke_impl)(
                    callbackFunc->fields.method_code,
                    callbackFunc->fields.method);
              }
            }
          }
          else
          {
            workSePlayerStatusList = this->fields.workSePlayerStatusList;
            if ( !workSePlayerStatusList )
              goto LABEL_28;
            System_Collections_Generic_List_object___RemoveAt(
              (System_Collections_Generic_List_object__o *)workSePlayerStatusList,
              v6,
              (const MethodInfo_37A47F8 *)Method_System_Collections_Generic_List_SePlayer__RemoveAt__);
          }
          if ( --v6 < 0 )
            return;
          workSePlayerStatusList = this->fields.workSePlayerStatusList;
          if ( !workSePlayerStatusList )
LABEL_28:
            sub_1C372B4(workSePlayerStatusList);
        }
      }
    }
  }
}


void SeManager__LoadEndResidentSeAsset(const MethodInfo *method)
{
  SeManager_c *v1; // x0
  struct SeManager_StaticFields *static_fields; // x8
  int v3; // w9
  Il2CppObject *Instance; // x0
  const MethodInfo *v5; // x2
  SeManager_c *v6; // x8
  SoundManager_o *v7; // x19
  struct System_String_array *LoadSeList; // x8
  System_String_array *CueList; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v10; // x19
  SeManager___c_c *v11; // x0
  System_Func_object__object__o *_9__31_0; // x20
  Il2CppObject *v13; // x21
  struct SeManager___c_StaticFields *v14; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x0
  System_Object_array *v18; // x0
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  SeManager_c *v21; // x8
  System_Object_array *v22; // x19
  struct SeManager_StaticFields *v23; // x0
  const MethodInfo *v24; // x2
  SeManager_c *v25; // x8
  SoundManager_o *v26; // x19
  struct System_String_array *v27; // x8
  System_String_array *v28; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v29; // x19
  SeManager___c_c *v30; // x0
  System_Func_object__object__o *_9__31_1; // x20
  Il2CppObject *v32; // x21
  struct SeManager___c_StaticFields *v33; // x0
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v36; // x0
  System_Object_array *v37; // x0
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  SeManager_c *v40; // x8
  System_Object_array *v41; // x19
  struct SeManager_StaticFields *v42; // x0
  SeManager_c *v43; // x0

  if ( (byte_4C4291C & 1) == 0 )
  {
    sub_1C37058(&Method_System_Linq_Enumerable_Select_string__string___);
    sub_1C37058(&Method_System_Linq_Enumerable_ToArray_string___);
    sub_1C37058(&System_Func_string__string__TypeInfo);
    sub_1C37058(&SeManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    sub_1C37058(&Method_SeManager___c__LoadEndResidentSeAsset_b__31_0__);
    sub_1C37058(&Method_SeManager___c__LoadEndResidentSeAsset_b__31_1__);
    sub_1C37058(&SeManager___c_TypeInfo);
    byte_4C4291C = 1;
  }
  v1 = SeManager_TypeInfo;
  if ( !SeManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
    v1 = SeManager_TypeInfo;
  }
  static_fields = v1->static_fields;
  v3 = static_fields->loadCounter - 1;
  static_fields->loadCounter = v3;
  if ( !v3 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    v6 = SeManager_TypeInfo;
    v7 = (SoundManager_o *)Instance;
    if ( !SeManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
      v6 = SeManager_TypeInfo;
    }
    LoadSeList = v6->static_fields->LoadSeList;
    if ( LoadSeList )
    {
      if ( LODWORD(LoadSeList->max_length) <= 1 )
        goto LABEL_41;
      if ( !v7 )
        goto LABEL_40;
      CueList = SoundManager__GetCueList(v7, LoadSeList->m_Items[1], v5);
      if ( CueList )
      {
        v10 = (System_Collections_Generic_IEnumerable_TSource__o *)CueList;
        v11 = SeManager___c_TypeInfo;
        if ( !SeManager___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SeManager___c_TypeInfo);
          v11 = SeManager___c_TypeInfo;
        }
        _9__31_0 = (System_Func_object__object__o *)v11->static_fields->__9__31_0;
        if ( !_9__31_0 )
        {
          if ( !v11->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v11);
            v11 = SeManager___c_TypeInfo;
          }
          v13 = (Il2CppObject *)v11->static_fields->__9;
          _9__31_0 = (System_Func_object__object__o *)sub_1C372A4(System_Func_string__string__TypeInfo);
          System_Func_object__object____ctor(_9__31_0, v13, Method_SeManager___c__LoadEndResidentSeAsset_b__31_0__, 0);
          v14 = SeManager___c_TypeInfo->static_fields;
          v14->__9__31_0 = (struct System_Func_string__string__o *)_9__31_0;
          sub_1C36FFC((CGThumbnailListItem_o *)&v14->__9__31_0, (int32_t)_9__31_0, v15, v16);
        }
        v17 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                                     v10,
                                                                     (System_Func_TSource__TResult__o *)_9__31_0,
                                                                     (const MethodInfo_311E324 *)Method_System_Linq_Enumerable_Select_string__string___);
        v18 = System_Linq_Enumerable__ToArray_object_(
                v17,
                (const MethodInfo_31272F4 *)Method_System_Linq_Enumerable_ToArray_string___);
        v21 = SeManager_TypeInfo;
        v22 = v18;
        if ( !SeManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
          v21 = SeManager_TypeInfo;
        }
        v23 = v21->static_fields;
        v23->seAssetBundleList = (struct System_String_array *)v22;
        sub_1C36FFC((CGThumbnailListItem_o *)&v23->seAssetBundleList, (int32_t)v22, v19, v20);
      }
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
      v25 = SeManager_TypeInfo;
      v26 = (SoundManager_o *)Instance;
      if ( !SeManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
        v25 = SeManager_TypeInfo;
      }
      v27 = v25->static_fields->LoadSeList;
      if ( !v27 )
        goto LABEL_40;
      if ( !LODWORD(v27->max_length) )
LABEL_41:
        sub_1C372BC(Instance);
      if ( v26 )
      {
        v28 = SoundManager__GetCueList(v26, v27->m_Items[0], v24);
        if ( v28 )
        {
          v29 = (System_Collections_Generic_IEnumerable_TSource__o *)v28;
          v30 = SeManager___c_TypeInfo;
          if ( !SeManager___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SeManager___c_TypeInfo);
            v30 = SeManager___c_TypeInfo;
          }
          _9__31_1 = (System_Func_object__object__o *)v30->static_fields->__9__31_1;
          if ( !_9__31_1 )
          {
            if ( !v30->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v30);
              v30 = SeManager___c_TypeInfo;
            }
            v32 = (Il2CppObject *)v30->static_fields->__9;
            _9__31_1 = (System_Func_object__object__o *)sub_1C372A4(System_Func_string__string__TypeInfo);
            System_Func_object__object____ctor(_9__31_1, v32, Method_SeManager___c__LoadEndResidentSeAsset_b__31_1__, 0);
            v33 = SeManager___c_TypeInfo->static_fields;
            v33->__9__31_1 = (struct System_Func_string__string__o *)_9__31_1;
            sub_1C36FFC((CGThumbnailListItem_o *)&v33->__9__31_1, (int32_t)_9__31_1, v34, v35);
          }
          v36 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                                       v29,
                                                                       (System_Func_TSource__TResult__o *)_9__31_1,
                                                                       (const MethodInfo_311E324 *)Method_System_Linq_Enumerable_Select_string__string___);
          v37 = System_Linq_Enumerable__ToArray_object_(
                  v36,
                  (const MethodInfo_31272F4 *)Method_System_Linq_Enumerable_ToArray_string___);
          v40 = SeManager_TypeInfo;
          v41 = v37;
          if ( !SeManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
            v40 = SeManager_TypeInfo;
          }
          v42 = v40->static_fields;
          v42->residentSeAssetBundleList = (struct System_String_array *)v41;
          sub_1C36FFC((CGThumbnailListItem_o *)&v42->residentSeAssetBundleList, (int32_t)v41, v38, v39);
        }
        v43 = SeManager_TypeInfo;
        if ( !SeManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
          v43 = SeManager_TypeInfo;
        }
        v43->static_fields->IsBusy = 0;
        return;
      }
    }
LABEL_40:
    sub_1C372B4(Instance);
  }
}


void SeManager__LoadSe(System_String_o *name, System_Action_o *callbackFunc, const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  _BOOL8 v5; // x0

  if ( (byte_4C42931 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_SeManager__get_Instance__);
    byte_4C42931 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_SeManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( !v5 )
  {
    if ( !Instance )
      sub_1C372B4(v5);
    if ( callbackFunc )
      ((void (__fastcall *)(intptr_t, intptr_t))callbackFunc->fields.invoke_impl)(
        callbackFunc->fields.method_code,
        callbackFunc->fields.method);
  }
}


void SeManager__LoadSeLocal(
        SeManager_o *this,
        System_String_o *name,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  if ( callbackFunc )
    ((void (__fastcall *)(intptr_t, intptr_t))callbackFunc->fields.invoke_impl)(
      callbackFunc->fields.method_code,
      callbackFunc->fields.method);
}


void SeManager__PauseSe(bool isPause, const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  _BOOL8 v4; // x0
  const MethodInfo *v5; // x3

  if ( (byte_4C42948 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_SeManager__get_Instance__);
    byte_4C42948 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_SeManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( !v4 )
  {
    if ( !Instance )
      sub_1C372B4(v4);
    SeManager__PauseSeLocal((SeManager_o *)Instance, isPause, 0, v5);
  }
}


void SeManager__PauseSeLocal(SeManager_o *this, bool isPause, int32_t seType, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *workSePlayerStatusList; // x0
  int32_t v8; // w21
  bool v9; // w22
  SePlayer_o *Item; // x0
  const MethodInfo *v11; // x2

  if ( (byte_4C4294A & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_SePlayer__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_SePlayer__get_Item__);
    byte_4C4294A = 1;
  }
  workSePlayerStatusList = (System_Collections_Generic_List_object__o *)this->fields.workSePlayerStatusList;
  if ( workSePlayerStatusList )
  {
    v8 = workSePlayerStatusList->fields._size - 1;
    if ( v8 >= 0 )
    {
      v9 = isPause;
      while ( 1 )
      {
        Item = (SePlayer_o *)System_Collections_Generic_List_object___get_Item(
                               workSePlayerStatusList,
                               v8,
                               (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_SePlayer__get_Item__);
        if ( Item && Item->fields.seType == seType )
          SePlayer__SetPause(Item, v9, v11);
        if ( --v8 < 0 )
          break;
        workSePlayerStatusList = (System_Collections_Generic_List_object__o *)this->fields.workSePlayerStatusList;
        if ( !workSePlayerStatusList )
          sub_1C372B4(0);
      }
    }
  }
}


void SeManager__PauseVoice(bool isPause, const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  _BOOL8 v4; // x0
  const MethodInfo *v5; // x3

  if ( (byte_4C42949 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_SeManager__get_Instance__);
    byte_4C42949 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_SeManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( !v4 )
  {
    if ( !Instance )
      sub_1C372B4(v4);
    SeManager__PauseSeLocal((SeManager_o *)Instance, isPause, 1, v5);
  }
}


void SeManager__PlayCommonSe(int32_t kind, bool ignorePreDelay, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  const MethodInfo *v6; // x3

  if ( (byte_4C42929 & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_SeManager__get_Instance__);
    byte_4C42929 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_SeManager__get_Instance__);
  if ( !Instance )
    sub_1C372B4(0);
  SeManager__PlayCommonSeLocal((SeManager_o *)Instance, kind, ignorePreDelay, v6);
}


void SeManager__PlayCommonSeLocal(SeManager_o *this, int32_t kind, bool ignorePreDelay, const MethodInfo *method)
{
  const MethodInfo *v4; // x4
  SeManager_o *v7; // x21
  struct System_String_array *commonSeClipNames; // x8
  System_String_o *v9; // x20
  SeManager_c *v10; // x0

  v7 = this;
  if ( (byte_4C4292C & 1) == 0 )
  {
    this = (SeManager_o *)sub_1C37058(&SeManager_TypeInfo);
    byte_4C4292C = 1;
  }
  commonSeClipNames = v7->fields.commonSeClipNames;
  if ( !commonSeClipNames )
    sub_1C372B4(this);
  if ( LODWORD(commonSeClipNames->max_length) <= kind )
    sub_1C372BC(this);
  v9 = commonSeClipNames->m_Items[kind];
  v10 = SeManager_TypeInfo;
  if ( !SeManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
    v10 = SeManager_TypeInfo;
  }
  SeManager__PlaySe(v9, v10->static_fields->DEFAULT_VOLUME, 0.0, 0, 0, ignorePreDelay, v4);
}


System_Collections_IEnumerator_o *SeManager__PlayCommonSeWithDelay(
        int32_t kind,
        float delay,
        int32_t waitFrameCount,
        bool ignorePreDelay,
        const MethodInfo *method)
{
  bool v9; // w22
  __int64 v10; // x21

  if ( (byte_4C4292B & 1) == 0 )
  {
    sub_1C37058(&SeManager__PlayCommonSeWithDelay_d__50_TypeInfo);
    byte_4C4292B = 1;
  }
  v9 = ignorePreDelay;
  v10 = sub_1C372A4(SeManager__PlayCommonSeWithDelay_d__50_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0);
  *(_DWORD *)(v10 + 16) = 0;
  *(_DWORD *)(v10 + 40) = kind;
  *(float *)(v10 + 36) = delay;
  *(_DWORD *)(v10 + 32) = waitFrameCount;
  *(_BYTE *)(v10 + 44) = v9;
  return (System_Collections_IEnumerator_o *)v10;
}


void SeManager__PlayCommonSe_41488564(
        int32_t kind,
        float delayTime,
        int32_t waitFrameCount,
        bool ignorePreDelay,
        const MethodInfo *method)
{
  const MethodInfo *v9; // x3
  Il2CppObject *Instance; // x22
  System_Collections_IEnumerator_o *v11; // x0

  if ( (byte_4C4292A & 1) == 0 )
  {
    sub_1C37058(&SeManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_SeManager__get_Instance__);
    byte_4C4292A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_SeManager__get_Instance__);
  if ( !SeManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
  v11 = SeManager__PlayCommonSeWithDelay(kind, delayTime, waitFrameCount, ignorePreDelay, v9);
  if ( !Instance )
    sub_1C372B4(v11);
  UnityEngine_MonoBehaviour__StartCoroutine_71252324((UnityEngine_MonoBehaviour_o *)Instance, v11, 0);
}


SePlayer_o *SeManager__PlayLocal(
        SeManager_o *this,
        int32_t seType,
        int32_t assetType,
        System_String_o *pathName,
        System_String_o *name,
        float volume,
        bool isLoop,
        float fadeinTime,
        System_Action_o *callbackFunc,
        bool notOverwrite,
        bool ignorePreDelay,
        const MethodInfo *method)
{
  int32_t v21; // w27
  SePlayer_o *v22; // x19
  int32_t v23; // w3
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  System_Collections_Generic_List_object__o *workSePlayerStatusList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  Il2CppClass **v30; // x8
  const MethodInfo *v32; // [xsp+10h] [xbp-80h]

  if ( (byte_4C42956 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_SePlayer__Add__);
    sub_1C37058(&SePlayer_TypeInfo);
    byte_4C42956 = 1;
  }
  v21 = this->fields.sePlayNum + 1;
  this->fields.sePlayNum = v21;
  v22 = (SePlayer_o *)sub_1C372A4(SePlayer_TypeInfo);
  SePlayer___ctor(
    v22,
    v21,
    seType,
    v23,
    pathName,
    name,
    volume,
    isLoop,
    fadeinTime,
    callbackFunc,
    notOverwrite,
    ignorePreDelay,
    v32);
  workSePlayerStatusList = (System_Collections_Generic_List_object__o *)this->fields.workSePlayerStatusList;
  if ( workSePlayerStatusList )
  {
    items = workSePlayerStatusList->fields._items;
    v28 = Method_System_Collections_Generic_List_SePlayer__Add__;
    ++workSePlayerStatusList->fields._version;
    if ( !items )
      sub_1C372B4(workSePlayerStatusList);
    size = workSePlayerStatusList->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        workSePlayerStatusList,
        (Il2CppObject *)v22,
        *(const MethodInfo_37A3024 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
    }
    else
    {
      v30 = &items->obj.klass + size;
      workSePlayerStatusList->fields._size = size + 1;
      v30[4] = (Il2CppClass *)v22;
      sub_1C36FFC((CGThumbnailListItem_o *)(v30 + 4), (int32_t)v22, v24, v25);
    }
  }
  return v22;
}


SePlayer_o *SeManager__PlaySe(
        System_String_o *name,
        float volume,
        float fadeinTime,
        System_Action_o *callbackFunc,
        bool notOverwrite,
        bool ignorePreDelay,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x23
  _BOOL8 v14; // x0
  const MethodInfo *v15; // x7

  if ( (byte_4C42933 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_SeManager__get_Instance__);
    byte_4C42933 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_SeManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v14 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( v14 )
    return 0;
  if ( !Instance )
    sub_1C372B4(v14);
  return SeManager__PlaySeLocal(
           (SeManager_o *)Instance,
           0,
           name,
           volume,
           0,
           fadeinTime,
           callbackFunc,
           notOverwrite,
           ignorePreDelay,
           v15);
}


SePlayer_o *SeManager__PlaySeLocal(
        SeManager_o *this,
        int32_t seType,
        System_String_o *name,
        float volume,
        bool isLoop,
        float fadeinTime,
        System_Action_o *callbackFunc,
        bool notOverwrite,
        bool ignorePreDelay,
        const MethodInfo *method)
{
  int32_t v19; // w26
  SoundManager_o *Instance; // x0
  const MethodInfo *v21; // x2
  System_String_o *CueSheet; // x0
  System_String_o *v23; // x28
  SePlayer_o *v24; // x27
  int32_t v25; // w3
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  intptr_t m_CachedPtr; // x8
  _QWORD *v29; // x9
  __int64 m_CancellationTokenSource_low; // x10
  intptr_t v31; // x8
  SeManager_c *v32; // x8
  struct SeManager_StaticFields *static_fields; // x9
  System_Object_array *residentSeAssetBundleList; // x27
  Il2CppObject *v35; // x0
  struct System_String_array *LoadSeList; // x8
  struct SeManager_StaticFields *v37; // x9
  System_Object_array *seAssetBundleList; // x27
  Il2CppObject *v39; // x0
  __int64 v40; // x8
  const MethodInfo *v42; // [xsp+10h] [xbp-80h]

  if ( (byte_4C42958 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Array_IndexOf_string___);
    sub_1C37058(&Method_System_Collections_Generic_List_SePlayer__Add__);
    sub_1C37058(&SeManager_TypeInfo);
    sub_1C37058(&SePlayer_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    sub_1C37058(&StringLiteral_11369/*"ResidentSE/"*/);
    sub_1C37058(&StringLiteral_12654/*"Se/"*/);
    byte_4C42958 = 1;
  }
  v19 = this->fields.sePlayNum + 1;
  this->fields.sePlayNum = v19;
  Instance = (SoundManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  CueSheet = SoundManager__GetCueSheet(Instance, name, v21);
  if ( !CueSheet )
  {
    v32 = SeManager_TypeInfo;
    if ( !SeManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
      v32 = SeManager_TypeInfo;
    }
    static_fields = v32->static_fields;
    if ( !static_fields->residentSeAssetBundleList )
      goto LABEL_39;
    if ( !v32->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v32);
      static_fields = SeManager_TypeInfo->static_fields;
    }
    residentSeAssetBundleList = (System_Object_array *)static_fields->residentSeAssetBundleList;
    v35 = (Il2CppObject *)System_String__Concat_63561656((System_String_o *)StringLiteral_11369/*"ResidentSE/"*/, name, 0);
    Instance = (SoundManager_o *)System_Array__IndexOf_object_(
                                   residentSeAssetBundleList,
                                   v35,
                                   (const MethodInfo_31EEE70 *)Method_System_Array_IndexOf_string___);
    v32 = SeManager_TypeInfo;
    if ( ((unsigned int)Instance & 0x80000000) != 0 )
    {
LABEL_39:
      if ( !v32->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v32);
        v32 = SeManager_TypeInfo;
      }
      v37 = v32->static_fields;
      if ( !v37->seAssetBundleList )
        return 0;
      if ( !v32->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v32);
        v37 = SeManager_TypeInfo->static_fields;
      }
      seAssetBundleList = (System_Object_array *)v37->seAssetBundleList;
      v39 = (Il2CppObject *)System_String__Concat_63561656((System_String_o *)StringLiteral_12654/*"Se/"*/, name, 0);
      if ( System_Array__IndexOf_object_(
             seAssetBundleList,
             v39,
             (const MethodInfo_31EEE70 *)Method_System_Array_IndexOf_string___) < 0 )
        return 0;
      Instance = (SoundManager_o *)SeManager_TypeInfo;
      if ( !SeManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
        Instance = (SoundManager_o *)SeManager_TypeInfo;
      }
      v40 = *(_QWORD *)Instance[2].monitor;
      if ( v40 )
      {
        if ( *(_DWORD *)(v40 + 24) > 1u )
        {
          v23 = *(System_String_o **)(v40 + 40);
          goto LABEL_6;
        }
        goto LABEL_36;
      }
    }
    else
    {
      if ( !SeManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
        v32 = SeManager_TypeInfo;
      }
      LoadSeList = v32->static_fields->LoadSeList;
      if ( LoadSeList )
      {
        if ( LODWORD(LoadSeList->max_length) )
        {
          v23 = LoadSeList->m_Items[0];
          goto LABEL_6;
        }
LABEL_36:
        sub_1C372BC(Instance);
      }
    }
LABEL_35:
    sub_1C372B4(Instance);
  }
  v23 = CueSheet;
LABEL_6:
  v24 = (SePlayer_o *)sub_1C372A4(SePlayer_TypeInfo);
  SePlayer___ctor(
    v24,
    v19,
    seType,
    v25,
    v23,
    name,
    volume,
    isLoop,
    fadeinTime,
    callbackFunc,
    notOverwrite,
    ignorePreDelay,
    v42);
  Instance = (SoundManager_o *)this->fields.workSePlayerStatusList;
  if ( !Instance )
    goto LABEL_35;
  m_CachedPtr = Instance->fields.m_CachedPtr;
  v29 = Method_System_Collections_Generic_List_SePlayer__Add__;
  ++HIDWORD(Instance->fields.m_CancellationTokenSource);
  if ( !m_CachedPtr )
    goto LABEL_35;
  m_CancellationTokenSource_low = SLODWORD(Instance->fields.m_CancellationTokenSource);
  if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)Instance,
      (Il2CppObject *)v24,
      *(const MethodInfo_37A3024 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
  }
  else
  {
    v31 = m_CachedPtr + 8 * m_CancellationTokenSource_low;
    LODWORD(Instance->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
    *(_QWORD *)(v31 + 32) = v24;
    sub_1C36FFC((CGThumbnailListItem_o *)(v31 + 32), (int32_t)v24, v26, v27);
  }
  return v24;
}


SePlayer_o *SeManager__PlaySeLocal_41491656(
        SeManager_o *this,
        int32_t seType,
        System_String_o *pathName,
        System_String_o *name,
        float volume,
        bool isLoop,
        float fadeinTime,
        System_Action_o *callbackFunc,
        bool notOverwrite,
        bool ignorePreDelay,
        const MethodInfo *method)
{
  const MethodInfo *v12; // [xsp+8h] [xbp-18h]

  return SeManager__PlayLocal(
           this,
           seType,
           0,
           pathName,
           name,
           volume,
           isLoop,
           fadeinTime,
           callbackFunc,
           notOverwrite,
           ignorePreDelay,
           v12);
}


SePlayer_o *SeManager__PlaySeLoop(
        System_String_o *name,
        float volume,
        float fadeinTime,
        bool ignorePreDelay,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x21
  _BOOL8 v10; // x0
  const MethodInfo *v11; // x7

  if ( (byte_4C42936 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_SeManager__get_Instance__);
    byte_4C42936 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_SeManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v10 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( v10 )
    return 0;
  if ( !Instance )
    sub_1C372B4(v10);
  return SeManager__PlaySeLocal((SeManager_o *)Instance, 0, name, volume, 1, fadeinTime, 0, 0, ignorePreDelay, v11);
}


SePlayer_o *SeManager__PlaySeLoop_41492212(
        System_String_o *assetName,
        System_String_o *objectName,
        float volume,
        float fadeinTime,
        bool ignorePreDelay,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x22
  _BOOL8 v12; // x0
  const MethodInfo *v14; // [xsp+8h] [xbp-58h]

  if ( (byte_4C42937 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_SeManager__get_Instance__);
    byte_4C42937 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_SeManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v12 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( v12 )
    return 0;
  if ( !Instance )
    sub_1C372B4(v12);
  return SeManager__PlayLocal(
           (SeManager_o *)Instance,
           0,
           0,
           assetName,
           objectName,
           volume,
           1,
           fadeinTime,
           0,
           0,
           ignorePreDelay,
           v14);
}


SePlayer_o *SeManager__PlaySeLoop_41492464(
        AssetData_o *assetData,
        System_String_o *objectName,
        float volume,
        float fadeinTime,
        bool ignorePreDelay,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x22
  _BOOL8 v12; // x0
  const MethodInfo *v14; // [xsp+8h] [xbp-58h]

  if ( (byte_4C42938 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_SeManager__get_Instance__);
    byte_4C42938 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_SeManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v12 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( v12 )
    return 0;
  if ( !assetData || !Instance )
    sub_1C372B4(v12);
  return SeManager__PlayLocal(
           (SeManager_o *)Instance,
           0,
           0,
           assetData->fields.name,
           objectName,
           volume,
           1,
           fadeinTime,
           0,
           0,
           ignorePreDelay,
           v14);
}


SePlayer_o *SeManager__PlaySe_41491388(
        System_String_o *assetName,
        System_String_o *objectName,
        float volume,
        float fadeinTime,
        System_Action_o *callbackFunc,
        bool notOverwrite,
        bool ignorePreDelay,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x24
  _BOOL8 v16; // x0
  const MethodInfo *v18; // [xsp+8h] [xbp-68h]

  if ( (byte_4C42934 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_SeManager__get_Instance__);
    byte_4C42934 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_SeManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v16 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( v16 )
    return 0;
  if ( !Instance )
    sub_1C372B4(v16);
  return SeManager__PlayLocal(
           (SeManager_o *)Instance,
           0,
           0,
           assetName,
           objectName,
           volume,
           0,
           fadeinTime,
           callbackFunc,
           notOverwrite,
           ignorePreDelay,
           v18);
}


SePlayer_o *SeManager__PlaySe_41491720(
        AssetData_o *assetData,
        System_String_o *objectName,
        float volume,
        float fadeinTime,
        System_Action_o *callbackFunc,
        bool ignorePreDelay,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x23
  _BOOL8 v14; // x0
  const MethodInfo *v16; // [xsp+8h] [xbp-58h]

  if ( (byte_4C42935 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_SeManager__get_Instance__);
    byte_4C42935 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_SeManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v14 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( v14 )
    return 0;
  if ( !assetData || !Instance )
    sub_1C372B4(v14);
  return SeManager__PlayLocal(
           (SeManager_o *)Instance,
           0,
           0,
           assetData->fields.name,
           objectName,
           volume,
           0,
           fadeinTime,
           callbackFunc,
           0,
           ignorePreDelay,
           v16);
}


CriAtomSource_o *SeManager__PlaySystemSe(int32_t kind, bool ignorePreDelay, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  const MethodInfo *v6; // x3

  if ( (byte_4C42927 & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_SeManager__get_Instance__);
    byte_4C42927 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_SeManager__get_Instance__);
  if ( !Instance )
    sub_1C372B4(0);
  return SeManager__PlaySystemSeLocal((SeManager_o *)Instance, kind, ignorePreDelay, v6);
}


CriAtomSource_o *SeManager__PlaySystemSeLocal(
        SeManager_o *this,
        int32_t kind,
        bool ignorePreDelay,
        const MethodInfo *method)
{
  SeManager_o *v6; // x20
  struct CriAtomSource_array *systemSeSources; // x8
  __int64 systemSeIdx; // x9
  CriAtomSource_o *v9; // x21
  struct CriAtomSource_array *v10; // x8
  int v11; // w9
  struct System_String_array *systemSeClipNames; // x8
  System_String_o *v13; // x23
  struct System_String_o *v14; // x1
  char v15; // w2
  const MethodInfo *v16; // x3
  SeManager_c *v17; // x0
  const MethodInfo *v18; // x3
  CriAtomExPlayer_o *player_k__BackingField; // x24
  float PreDelayTime; // s0
  SoundManager_c *v21; // x0

  v6 = this;
  if ( (byte_4C4294F & 1) == 0 )
  {
    sub_1C37058(&SeManager_TypeInfo);
    this = (SeManager_o *)sub_1C37058(&SoundManager_TypeInfo);
    byte_4C4294F = 1;
  }
  systemSeSources = v6->fields.systemSeSources;
  if ( !systemSeSources )
    goto LABEL_36;
  systemSeIdx = v6->fields.systemSeIdx;
  if ( (unsigned int)systemSeIdx >= LODWORD(systemSeSources->max_length) )
LABEL_37:
    sub_1C372BC(this);
  v9 = systemSeSources->m_Items[systemSeIdx];
  if ( !v9 )
    goto LABEL_36;
  if ( v9->fields._loop )
  {
    this = (SeManager_o *)CriAtomSource__get_status(v9, 0);
    if ( (_DWORD)this == 1 || (this = (SeManager_o *)CriAtomSource__get_status(v9, 0), (_DWORD)this == 2) )
    {
      v10 = v6->fields.systemSeSources;
      v11 = (v6->fields.systemSeIdx + 1) % v6->fields.SYSTEM_SE_MAX;
      v6->fields.systemSeIdx = v11;
      if ( !v10 )
        goto LABEL_36;
      if ( (unsigned int)v11 >= LODWORD(v10->max_length) )
        goto LABEL_37;
      v9 = v10->m_Items[v11];
    }
  }
  if ( !SeManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
  if ( !byte_4C429F4 )
  {
    sub_1C37058(&SeManager_TypeInfo);
    byte_4C429F4 = 1;
  }
  this = (SeManager_o *)SeManager_TypeInfo;
  if ( !SeManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
    this = (SeManager_o *)SeManager_TypeInfo;
  }
  if ( !*(_BYTE *)(*(_QWORD *)&this[1].fields.SYSTEM_SE_MAX + 32LL) )
  {
    systemSeClipNames = v6->fields.systemSeClipNames;
    if ( !systemSeClipNames )
      goto LABEL_36;
    if ( LODWORD(systemSeClipNames->max_length) > kind )
    {
      v13 = systemSeClipNames->m_Items[kind];
      v6->fields.systemSeIdx = (v6->fields.systemSeIdx + 1) % v6->fields.SYSTEM_SE_MAX;
      this = (SeManager_o *)SoundManager_TypeInfo;
      if ( !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        this = (SeManager_o *)SoundManager_TypeInfo;
      }
      if ( v9 )
      {
        v14 = *(struct System_String_o **)(*(_QWORD *)&this[1].fields.SYSTEM_SE_MAX + 8LL);
        v9->fields._cueSheet = v14;
        sub_1C36FFC((CGThumbnailListItem_o *)&v9->fields._cueSheet, (int32_t)v14, ignorePreDelay, method);
        v9->fields._cueName = v13;
        sub_1C36FFC((CGThumbnailListItem_o *)&v9->fields._cueName, (int32_t)v13, v15, v16);
        v17 = SeManager_TypeInfo;
        if ( !SeManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
          v17 = SeManager_TypeInfo;
        }
        CriAtomSource__set_volume(v9, v17->static_fields->masterVolume, 0);
        this = (SeManager_o *)v9->fields._player_k__BackingField;
        if ( this )
        {
          CriAtomExPlayer__Stop((CriAtomExPlayer_o *)this, 1, 0);
          player_k__BackingField = v9->fields._player_k__BackingField;
          PreDelayTime = 0.0;
          v9->fields._loop = 0;
          if ( !ignorePreDelay )
          {
            v21 = SoundManager_TypeInfo;
            if ( !SoundManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
              v21 = SoundManager_TypeInfo;
            }
            PreDelayTime = SeManager__GetPreDelayTime(v6, v21->static_fields->RESIDENT_RESOURCE_SOUND_NAME, v13, v18);
          }
          if ( player_k__BackingField )
          {
            CriAtomExPlayer__SetPreDelayTime(player_k__BackingField, PreDelayTime, 0);
            if ( kind == 3 )
              v9->fields._loop = 1;
            CriAtomSource__Play(v9, 0);
            return v9;
          }
        }
      }
LABEL_36:
      sub_1C372B4(this);
    }
    goto LABEL_37;
  }
  return v9;
}


SePlayer_o *SeManager__PlayVoice(
        System_String_o *name,
        float volume,
        System_Action_o *callbackFunc,
        bool ignorePreDelay,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x22
  _BOOL8 v10; // x0
  const MethodInfo *v11; // x7

  if ( (byte_4C42939 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_SeManager__get_Instance__);
    byte_4C42939 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_SeManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v10 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( v10 )
    return 0;
  if ( !Instance )
    sub_1C372B4(v10);
  return SeManager__PlaySeLocal((SeManager_o *)Instance, 1, name, volume, 0, 0.0, callbackFunc, 0, ignorePreDelay, v11);
}


SePlayer_o *SeManager__PlayVoice_41492964(
        System_String_o *assetName,
        System_String_o *objectName,
        float volume,
        System_Action_o *callbackFunc,
        bool ignorePreDelay,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x23
  _BOOL8 v12; // x0
  const MethodInfo *v14; // [xsp+8h] [xbp-58h]

  if ( (byte_4C4293A & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_SeManager__get_Instance__);
    byte_4C4293A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_SeManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v12 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( v12 )
    return 0;
  if ( !Instance )
    sub_1C372B4(v12);
  return SeManager__PlayLocal(
           (SeManager_o *)Instance,
           1,
           0,
           assetName,
           objectName,
           volume,
           0,
           0.0,
           callbackFunc,
           0,
           ignorePreDelay,
           v14);
}


SePlayer_o *SeManager__PlayVoice_41493216(
        AssetData_o *assetData,
        System_String_o *objectName,
        float volume,
        System_Action_o *callbackFunc,
        bool ignorePreDelay,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x23
  _BOOL8 v12; // x0
  const MethodInfo *v14; // [xsp+8h] [xbp-58h]

  if ( (byte_4C4293B & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_SeManager__get_Instance__);
    byte_4C4293B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_SeManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v12 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( v12 )
    return 0;
  if ( !assetData || !Instance )
    sub_1C372B4(v12);
  return SeManager__PlayLocal(
           (SeManager_o *)Instance,
           1,
           0,
           assetData->fields.name,
           objectName,
           volume,
           0,
           0.0,
           callbackFunc,
           0,
           ignorePreDelay,
           v14);
}


bool SeManager__ReleaseAudioSource(SeManager_o *this, SePlayer_o *player, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  int32_t seMax; // w8
  struct SePlayer_array *sePlayerStatusList; // x9
  SeManager_o *v6; // x19
  unsigned int v7; // w20
  __int64 i; // x21
  struct CriAtomSource_array *seSources; // x8

  seMax = this->fields.seMax;
  if ( seMax < 1 )
    return 0;
  sePlayerStatusList = this->fields.sePlayerStatusList;
  v6 = this;
  if ( !sePlayerStatusList )
    goto LABEL_13;
  v7 = 0;
  for ( i = 32; ; i += 8 )
  {
    if ( v7 >= LODWORD(sePlayerStatusList->max_length) )
      goto LABEL_12;
    if ( *(SePlayer_o **)((char *)&sePlayerStatusList->obj.klass + i) == player )
      break;
    if ( (int)++v7 >= seMax )
      return 0;
  }
  *(Il2CppClass **)((char *)&sePlayerStatusList->obj.klass + i) = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)((char *)sePlayerStatusList + i), 0, (int32_t)method, v3);
  seSources = v6->fields.seSources;
  if ( !seSources )
    goto LABEL_13;
  if ( v7 >= LODWORD(seSources->max_length) )
LABEL_12:
    sub_1C372BC(this);
  this = *(SeManager_o **)((char *)&seSources->obj.klass + i);
  if ( !this )
LABEL_13:
    sub_1C372B4(this);
  CriAtomSource__Stop((CriAtomSource_o *)this, 0);
  return 1;
}


void SeManager__ReleaseSe(System_String_o *name, const MethodInfo *method)
{
  Il2CppObject *Instance; // x19
  _BOOL8 v3; // x0

  if ( (byte_4C42932 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_SeManager__get_Instance__);
    byte_4C42932 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_SeManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v3 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( !Instance && !v3 )
    sub_1C372B4(v3);
}


void SeManager__ReleaseSeLocal(SeManager_o *this, System_String_o *name, const MethodInfo *method)
{
  ;
}


void SeManager__Reset(const MethodInfo *method)
{
  Il2CppObject *Instance; // x19
  _BOOL8 v2; // x0
  const MethodInfo *v3; // x1

  if ( (byte_4C42920 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_SeManager__get_Instance__);
    byte_4C42920 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_SeManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v2 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( !v2 )
  {
    if ( !Instance )
      sub_1C372B4(v2);
    SeManager__StopSeAllLocal((SeManager_o *)Instance, 0.0, v3);
  }
}


void SeManager__ResetLocal(SeManager_o *this, const MethodInfo *method)
{
  SeManager__StopSeAllLocal(this, 0.0, method);
}


void SeManager__SetMasterVolume(float volume, const MethodInfo *method)
{
  SeManager_c *v3; // x0
  struct SeManager_StaticFields *static_fields; // x8
  Il2CppObject *Instance; // x19
  _BOOL8 v6; // x0
  const MethodInfo *v7; // x1

  if ( (byte_4C42925 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&SeManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_SeManager__get_Instance__);
    byte_4C42925 = 1;
  }
  v3 = SeManager_TypeInfo;
  if ( !SeManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
    v3 = SeManager_TypeInfo;
  }
  static_fields = v3->static_fields;
  if ( static_fields->masterVolume != volume )
  {
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      static_fields = SeManager_TypeInfo->static_fields;
    }
    static_fields->masterVolume = volume;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_SeManager__get_Instance__);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
    if ( !v6 )
    {
      if ( !Instance )
        sub_1C372B4(v6);
      SeManager__SetMuteLocal((SeManager_o *)Instance, v7);
    }
  }
}


void SeManager__SetMute(bool isMute, const MethodInfo *method)
{
  SeManager_c *v3; // x0
  _BOOL4 v4; // w19
  struct SeManager_StaticFields *static_fields; // x8
  Il2CppObject *Instance; // x19
  _BOOL8 v7; // x0
  const MethodInfo *v8; // x1

  if ( (byte_4C42922 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&SeManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_SeManager__get_Instance__);
    byte_4C42922 = 1;
  }
  v3 = SeManager_TypeInfo;
  v4 = isMute;
  if ( !SeManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
    v3 = SeManager_TypeInfo;
  }
  static_fields = v3->static_fields;
  if ( static_fields->isMute != v4 )
  {
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      static_fields = SeManager_TypeInfo->static_fields;
    }
    static_fields->isMute = v4;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_SeManager__get_Instance__);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
    if ( !v7 )
    {
      if ( !Instance )
        sub_1C372B4(v7);
      SeManager__SetMuteLocal((SeManager_o *)Instance, v8);
    }
  }
}


void SeManager__SetMuteLocal(SeManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  SeManager_o *workSePlayerStatusList; // x0
  unsigned __int64 v5; // x20
  struct CriAtomSource_array *systemSeSources; // x8
  int32_t v7; // w20
  const MethodInfo *v8; // x1

  if ( (byte_4C4294D & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_SePlayer__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_SePlayer__get_Item__);
    sub_1C37058(&SeManager_TypeInfo);
    byte_4C4294D = 1;
  }
  workSePlayerStatusList = (SeManager_o *)SeManager_TypeInfo;
  if ( !SeManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
    workSePlayerStatusList = (SeManager_o *)SeManager_TypeInfo;
  }
  if ( *(_BYTE *)(*(_QWORD *)&workSePlayerStatusList[1].fields.SYSTEM_SE_MAX + 32LL) && this->fields.SYSTEM_SE_MAX >= 1 )
  {
    v5 = 0;
    while ( 1 )
    {
      systemSeSources = this->fields.systemSeSources;
      if ( !systemSeSources )
        break;
      if ( v5 >= LODWORD(systemSeSources->max_length) )
        sub_1C372BC(workSePlayerStatusList);
      SeManager__StopLocal(workSePlayerStatusList, systemSeSources->m_Items[v5++], v2);
      if ( (__int64)v5 >= this->fields.SYSTEM_SE_MAX )
        goto LABEL_11;
    }
LABEL_16:
    sub_1C372B4(workSePlayerStatusList);
  }
LABEL_11:
  workSePlayerStatusList = (SeManager_o *)this->fields.workSePlayerStatusList;
  if ( workSePlayerStatusList )
  {
    v7 = LODWORD(workSePlayerStatusList->fields.m_CancellationTokenSource) - 1;
    if ( v7 >= 0 )
    {
      do
      {
        workSePlayerStatusList = (SeManager_o *)System_Collections_Generic_List_object___get_Item(
                                                  (System_Collections_Generic_List_object__o *)workSePlayerStatusList,
                                                  v7,
                                                  (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_SePlayer__get_Item__);
        if ( !workSePlayerStatusList )
          break;
        SePlayer__MuteSe((SePlayer_o *)workSePlayerStatusList, v8);
        if ( --v7 < 0 )
          return;
        workSePlayerStatusList = (SeManager_o *)this->fields.workSePlayerStatusList;
      }
      while ( workSePlayerStatusList );
      goto LABEL_16;
    }
  }
}


void SeManager__SetPitchSe(System_String_o *name, float pitch, const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  _BOOL8 v6; // x0
  const MethodInfo *v7; // x2
  SePlayer_o *SePlayer_41499400; // x0

  if ( (byte_4C42946 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_SeManager__get_Instance__);
    byte_4C42946 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_SeManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( !v6 )
  {
    if ( !Instance )
      sub_1C372B4(v6);
    SePlayer_41499400 = SeManager__GetSePlayer_41499400((SeManager_o *)Instance, name, v7);
    if ( SePlayer_41499400 )
    {
      SePlayer_41499400->fields.pitchValue = pitch;
      SePlayer_41499400->fields.changePitchRequest = 1;
    }
  }
}


void SeManager__SetPitchSeLocal(SeManager_o *this, System_String_o *name, float pitch, const MethodInfo *method)
{
  SePlayer_o *SePlayer_41499400; // x0

  SePlayer_41499400 = SeManager__GetSePlayer_41499400(this, name, method);
  if ( SePlayer_41499400 )
  {
    SePlayer_41499400->fields.pitchValue = pitch;
    SePlayer_41499400->fields.changePitchRequest = 1;
  }
}


void SeManager__SetVoiceMasterVolume(float volume, const MethodInfo *method)
{
  SeManager_c *v3; // x0
  struct SeManager_StaticFields *static_fields; // x8
  Il2CppObject *Instance; // x19
  _BOOL8 v6; // x0
  const MethodInfo *v7; // x1

  if ( (byte_4C42926 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&SeManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_SeManager__get_Instance__);
    byte_4C42926 = 1;
  }
  v3 = SeManager_TypeInfo;
  if ( !SeManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
    v3 = SeManager_TypeInfo;
  }
  static_fields = v3->static_fields;
  if ( static_fields->masterVoiceVolume != volume )
  {
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      static_fields = SeManager_TypeInfo->static_fields;
    }
    static_fields->masterVoiceVolume = volume;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_SeManager__get_Instance__);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
    if ( !v6 )
    {
      if ( !Instance )
        sub_1C372B4(v6);
      SeManager__SetMuteLocal((SeManager_o *)Instance, v7);
    }
  }
}


void SeManager__StopLocal(SeManager_o *this, CriAtomSource_o *player, const MethodInfo *method)
{
  _BOOL8 v4; // x0

  if ( (byte_4C42957 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C42957 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)player, 0, 0);
  if ( v4 )
  {
    if ( !player )
      sub_1C372B4(v4);
    if ( CriAtomSource__get_status(player, 0) == 2 )
      CriAtomSource__Stop(player, 0);
  }
}


void SeManager__StopSe(int32_t num, float fadeoutTime, const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  _BOOL8 v6; // x0
  const MethodInfo *v7; // x2

  if ( (byte_4C4293C & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_SeManager__get_Instance__);
    byte_4C4293C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_SeManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( !v6 )
  {
    if ( !Instance )
      sub_1C372B4(v6);
    SeManager__StopSeLocal((SeManager_o *)Instance, num, fadeoutTime, v7);
  }
}


void SeManager__StopSeAll(float fadeoutTime, const MethodInfo *method)
{
  Il2CppObject *Instance; // x19
  _BOOL8 v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_4C42942 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_SeManager__get_Instance__);
    byte_4C42942 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_SeManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( !v4 )
  {
    if ( !Instance )
      sub_1C372B4(v4);
    SeManager__StopSeAllLocal((SeManager_o *)Instance, fadeoutTime, v5);
  }
}


void SeManager__StopSeAllLocal(SeManager_o *this, float fadeoutTime, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *workSePlayerStatusList; // x0
  int32_t v6; // w20
  const MethodInfo *v7; // x1

  if ( (byte_4C42959 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_SePlayer__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_SePlayer__get_Item__);
    byte_4C42959 = 1;
  }
  workSePlayerStatusList = (System_Collections_Generic_List_object__o *)this->fields.workSePlayerStatusList;
  if ( !workSePlayerStatusList )
    goto LABEL_8;
  v6 = workSePlayerStatusList->fields._size - 1;
  if ( v6 >= 0 )
  {
    do
    {
      workSePlayerStatusList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                              workSePlayerStatusList,
                                                                              v6,
                                                                              (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_SePlayer__get_Item__);
      if ( !workSePlayerStatusList )
        break;
      SePlayer__StopSe((SePlayer_o *)workSePlayerStatusList, fadeoutTime, v7);
      if ( --v6 < 0 )
        return;
      workSePlayerStatusList = (System_Collections_Generic_List_object__o *)this->fields.workSePlayerStatusList;
    }
    while ( workSePlayerStatusList );
LABEL_8:
    sub_1C372B4(workSePlayerStatusList);
  }
}


void SeManager__StopSeLocal(SeManager_o *this, int32_t num, float fadeoutTime, const MethodInfo *method)
{
  SePlayer_o *SePlayer; // x0
  const MethodInfo *v6; // x1

  SePlayer = SeManager__GetSePlayer(this, num, method);
  if ( SePlayer )
    SePlayer__StopSe(SePlayer, fadeoutTime, v6);
}


void SeManager__StopSeLocal_41493912(
        SeManager_o *this,
        System_String_o *name,
        float fadeoutTime,
        const MethodInfo *method)
{
  SePlayer_o *SePlayer_41499400; // x0
  const MethodInfo *v6; // x1

  SePlayer_41499400 = SeManager__GetSePlayer_41499400(this, name, method);
  if ( SePlayer_41499400 )
    SePlayer__StopSe(SePlayer_41499400, fadeoutTime, v6);
}


void SeManager__StopSeLocal_41494164(
        SeManager_o *this,
        System_String_o *assetName,
        System_String_o *objectName,
        float fadeoutTime,
        const MethodInfo *method)
{
  SePlayer_o *SePlayer_41499576; // x0
  const MethodInfo *v7; // x1

  SePlayer_41499576 = SeManager__GetSePlayer_41499576(this, assetName, objectName, method);
  if ( SePlayer_41499576 )
    SePlayer__StopSe(SePlayer_41499576, fadeoutTime, v7);
}


void SeManager__StopSe_41493716(System_String_o *name, float fadeoutTime, const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  _BOOL8 v6; // x0
  const MethodInfo *v7; // x2

  if ( (byte_4C4293D & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_SeManager__get_Instance__);
    byte_4C4293D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_SeManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( !v6 )
  {
    if ( !Instance )
      sub_1C372B4(v6);
    SeManager__StopSeLocal_41493912((SeManager_o *)Instance, name, fadeoutTime, v7);
  }
}


void SeManager__StopSe_41493960(
        System_String_o *assetName,
        System_String_o *objectName,
        float fadeoutTime,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x21
  _BOOL8 v8; // x0
  const MethodInfo *v9; // x3

  if ( (byte_4C4293E & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_SeManager__get_Instance__);
    byte_4C4293E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_SeManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v8 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( !v8 )
  {
    if ( !Instance )
      sub_1C372B4(v8);
    SeManager__StopSeLocal_41494164((SeManager_o *)Instance, assetName, objectName, fadeoutTime, v9);
  }
}


void SeManager__StopSe_41494212(
        System_String_o *assetName,
        System_String_o *objectName,
        float volume,
        float fadeTime,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x21
  _BOOL8 v10; // x0
  const MethodInfo *v11; // x3

  if ( (byte_4C4293F & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_SeManager__get_Instance__);
    byte_4C4293F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_SeManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v10 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( !v10 )
  {
    if ( !Instance )
      sub_1C372B4(v10);
    SeManager__ChangeVolumeSeLocal_41494424((SeManager_o *)Instance, assetName, objectName, volume, fadeTime, v11);
  }
}


void SeManager__StopSystemSe(const MethodInfo *method)
{
  Il2CppObject *Instance; // x19
  _BOOL8 v2; // x0
  const MethodInfo *v3; // x1

  if ( (byte_4C42940 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_SeManager__get_Instance__);
    byte_4C42940 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_SeManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v2 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( !v2 )
  {
    if ( !Instance )
      sub_1C372B4(v2);
    SeManager__StopSystemSeLocal((SeManager_o *)Instance, v3);
  }
}


void SeManager__StopSystemSeLocal(SeManager_o *this, const MethodInfo *method)
{
  SeManager_o *v2; // x19
  __int64 v3; // x20
  struct CriAtomSource_array *systemSeSources; // x8

  if ( this->fields.SYSTEM_SE_MAX >= 1 )
  {
    v2 = this;
    v3 = 0;
    do
    {
      systemSeSources = v2->fields.systemSeSources;
      if ( !systemSeSources )
        goto LABEL_8;
      if ( (unsigned int)v3 >= LODWORD(systemSeSources->max_length) )
        sub_1C372BC(this);
      this = (SeManager_o *)systemSeSources->m_Items[v3];
      if ( !this )
LABEL_8:
        sub_1C372B4(this);
      CriAtomSource__Stop((CriAtomSource_o *)this, 0);
      ++v3;
    }
    while ( (int)v3 < v2->fields.SYSTEM_SE_MAX );
  }
}


void SeManager__StopVoice(
        System_String_o *assetName,
        System_String_o *objectName,
        float fadeoutTime,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x21
  _BOOL8 v8; // x0
  const MethodInfo *v9; // x3

  if ( (byte_4C42941 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_SeManager__get_Instance__);
    byte_4C42941 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_SeManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v8 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( !v8 )
  {
    if ( !Instance )
      sub_1C372B4(v8);
    SeManager__StopVoiceLocal((SeManager_o *)Instance, assetName, objectName, fadeoutTime, v9);
  }
}


void SeManager__StopVoiceAll(float fadeoutTime, const MethodInfo *method)
{
  Il2CppObject *Instance; // x19
  _BOOL8 v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_4C42943 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_SeManager__get_Instance__);
    byte_4C42943 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_SeManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( !v4 )
  {
    if ( !Instance )
      sub_1C372B4(v4);
    SeManager__StopVoiceAllLocal((SeManager_o *)Instance, fadeoutTime, v5);
  }
}


void SeManager__StopVoiceAllLocal(SeManager_o *this, float fadeoutTime, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *workSePlayerStatusList; // x0
  int32_t v6; // w20
  const MethodInfo *v7; // x1

  if ( (byte_4C4295A & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_SePlayer__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_SePlayer__get_Item__);
    byte_4C4295A = 1;
  }
  workSePlayerStatusList = (System_Collections_Generic_List_object__o *)this->fields.workSePlayerStatusList;
  if ( !workSePlayerStatusList )
    goto LABEL_10;
  v6 = workSePlayerStatusList->fields._size - 1;
  if ( v6 >= 0 )
  {
    do
    {
      workSePlayerStatusList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                              workSePlayerStatusList,
                                                                              v6,
                                                                              (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_SePlayer__get_Item__);
      if ( !workSePlayerStatusList )
        break;
      if ( LODWORD(workSePlayerStatusList->fields._items) == 1 )
        SePlayer__StopSe((SePlayer_o *)workSePlayerStatusList, fadeoutTime, v7);
      if ( --v6 < 0 )
        return;
      workSePlayerStatusList = (System_Collections_Generic_List_object__o *)this->fields.workSePlayerStatusList;
    }
    while ( workSePlayerStatusList );
LABEL_10:
    sub_1C372B4(workSePlayerStatusList);
  }
}


void SeManager__StopVoiceLocal(
        SeManager_o *this,
        System_String_o *assetName,
        System_String_o *objectName,
        float fadeoutTime,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x4
  SePlayer_o *SePlayer_41499992; // x0
  const MethodInfo *v8; // x1

  SePlayer_41499992 = SeManager__GetSePlayer_41499992(this, 1, assetName, objectName, v5);
  if ( SePlayer_41499992 )
    SePlayer__StopSe(SePlayer_41499992, fadeoutTime, v8);
}


System_String_array *SeManager__getLoadSeNameList(const MethodInfo *method)
{
  SeManager_c *v1; // x0

  if ( (byte_4C4291D & 1) == 0 )
  {
    sub_1C37058(&SeManager_TypeInfo);
    byte_4C4291D = 1;
  }
  v1 = SeManager_TypeInfo;
  if ( !SeManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
    v1 = SeManager_TypeInfo;
  }
  return v1->static_fields->LoadSeList;
}


bool SeManager__get_IsMute(const MethodInfo *method)
{
  SeManager_c *v1; // x0

  if ( (byte_4C42921 & 1) == 0 )
  {
    sub_1C37058(&SeManager_TypeInfo);
    byte_4C42921 = 1;
  }
  v1 = SeManager_TypeInfo;
  if ( !SeManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
    v1 = SeManager_TypeInfo;
  }
  return v1->static_fields->isMute;
}


float SeManager__get_MasterVoiceVolume(const MethodInfo *method)
{
  SeManager_c *v1; // x0

  if ( (byte_4C42924 & 1) == 0 )
  {
    sub_1C37058(&SeManager_TypeInfo);
    byte_4C42924 = 1;
  }
  v1 = SeManager_TypeInfo;
  if ( !SeManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
    v1 = SeManager_TypeInfo;
  }
  return v1->static_fields->masterVoiceVolume;
}


float SeManager__get_MasterVolume(const MethodInfo *method)
{
  SeManager_c *v1; // x0

  if ( (byte_4C42923 & 1) == 0 )
  {
    sub_1C37058(&SeManager_TypeInfo);
    byte_4C42923 = 1;
  }
  v1 = SeManager_TypeInfo;
  if ( !SeManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
    v1 = SeManager_TypeInfo;
  }
  return v1->static_fields->masterVolume;
}


void SeManager__PlayCommonSeWithDelay_d__50___ctor(
        SeManager__PlayCommonSeWithDelay_d__50_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool SeManager__PlayCommonSeWithDelay_d__50__MoveNext(
        SeManager__PlayCommonSeWithDelay_d__50_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  const MethodInfo *v3; // x3
  int32_t _1__state; // w8
  int32_t kind; // w20
  _BOOL4 ignorePreDelay; // w19
  bool result; // w0
  int32_t i_5__2; // w8
  Il2CppObject **v10; // x19
  float delay; // s8
  UnityEngine_WaitForSeconds_o *v12; // x20
  Il2CppObject **p__2__current; // x19
  int32_t v14; // w2
  const MethodInfo *v15; // x3

  if ( (byte_4C42961 & 1) == 0 )
  {
    sub_1C37058(&SeManager_TypeInfo);
    sub_1C37058(&UnityEngine_WaitForSeconds_TypeInfo);
    byte_4C42961 = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 2 )
  {
    this->fields.__1__state = -1;
    kind = this->fields.kind;
    ignorePreDelay = this->fields.ignorePreDelay;
    if ( !SeManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
    SeManager__PlayCommonSe(kind, ignorePreDelay, v2);
    return 0;
  }
  if ( _1__state != 1 )
  {
    if ( !_1__state )
    {
      this->fields.__1__state = -1;
      this->fields._i_5__2 = 0;
      goto LABEL_12;
    }
    return 0;
  }
  i_5__2 = this->fields._i_5__2;
  this->fields.__1__state = -1;
  _1__state = i_5__2 + 1;
  this->fields._i_5__2 = _1__state;
LABEL_12:
  if ( _1__state >= this->fields.waitFrameCount )
  {
    delay = this->fields.delay;
    v12 = (UnityEngine_WaitForSeconds_o *)sub_1C372A4(UnityEngine_WaitForSeconds_TypeInfo);
    UnityEngine_WaitForSeconds___ctor(v12, delay, 0);
    this->fields.__2__current = (Il2CppObject *)v12;
    p__2__current = &this->fields.__2__current;
    sub_1C36FFC((CGThumbnailListItem_o *)p__2__current, (int32_t)v12, v14, v15);
    *((_DWORD *)p__2__current - 2) = 2;
    return 1;
  }
  else
  {
    this->fields.__2__current = 0;
    v10 = &this->fields.__2__current;
    sub_1C36FFC((CGThumbnailListItem_o *)v10, 0, (int32_t)v2, v3);
    result = 1;
    *((_DWORD *)v10 - 2) = 1;
  }
  return result;
}


Il2CppObject *SeManager__PlayCommonSeWithDelay_d__50__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        SeManager__PlayCommonSeWithDelay_d__50_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn SeManager__PlayCommonSeWithDelay_d__50__System_Collections_IEnumerator_Reset(
        SeManager__PlayCommonSeWithDelay_d__50_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C3706C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C372A4(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C3706C(&Method_SeManager__PlayCommonSeWithDelay_d__50_System_Collections_IEnumerator_Reset__);
  sub_1C37180(v3, v4);
}


Il2CppObject *SeManager__PlayCommonSeWithDelay_d__50__System_Collections_IEnumerator_get_Current(
        SeManager__PlayCommonSeWithDelay_d__50_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void SeManager__PlayCommonSeWithDelay_d__50__System_IDisposable_Dispose(
        SeManager__PlayCommonSeWithDelay_d__50_o *this,
        const MethodInfo *method)
{
  ;
}


void SeManager___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C4295E & 1) == 0 )
  {
    sub_1C37058(&SeManager___c_TypeInfo);
    byte_4C4295E = 1;
  }
  v1 = (Il2CppObject *)sub_1C372A4(SeManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  SeManager___c_TypeInfo->static_fields->__9 = (struct SeManager___c_o *)v1;
  sub_1C36FFC((CGThumbnailListItem_o *)SeManager___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void SeManager___c___ctor(SeManager___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


System_String_o *SeManager___c___LoadEndResidentSeAsset_b__31_0(
        SeManager___c_o *this,
        System_String_o *str,
        const MethodInfo *method)
{
  if ( (byte_4C4295F & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_12654/*"Se/"*/);
    byte_4C4295F = 1;
  }
  return System_String__Concat_63561656((System_String_o *)StringLiteral_12654/*"Se/"*/, str, 0);
}


System_String_o *SeManager___c___LoadEndResidentSeAsset_b__31_1(
        SeManager___c_o *this,
        System_String_o *str,
        const MethodInfo *method)
{
  if ( (byte_4C42960 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_11369/*"ResidentSE/"*/);
    byte_4C42960 = 1;
  }
  return System_String__Concat_63561656((System_String_o *)StringLiteral_11369/*"ResidentSE/"*/, str, 0);
}