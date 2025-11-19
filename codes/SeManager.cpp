void SeManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x0
  __int64 v2; // x1
  int32_t v3; // w2
  const MethodInfo *v4; // x3
  __int64 v5; // x19
  int32_t v6; // w1
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  int32_t v9; // w1
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  struct SeManager_StaticFields *static_fields; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  struct SeManager_StaticFields *v15; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  struct SeManager_StaticFields *v23; // x8

  if ( (byte_4CB5C65 & 1) == 0 )
  {
    sub_1C6BA08(&SeManager_TypeInfo);
    sub_1C6BA08(&string___TypeInfo);
    sub_1C6BA08(&StringLiteral_11510/*"SE"*/);
    sub_1C6BA08(&StringLiteral_11367/*"ResidentSE"*/);
    byte_4CB5C65 = 1;
  }
  v1 = sub_1C6BAB0(string___TypeInfo, 2);
  if ( !v1 )
    sub_1C6BC60(0, v2);
  v5 = v1;
  if ( !*(_DWORD *)(v1 + 24)
    || (v6 = StringLiteral_11367/*"ResidentSE"*/,
        *(_QWORD *)(v1 + 32) = StringLiteral_11367/*"ResidentSE"*/,
        sub_1C6B9AC((CGThumbnailListItem_o *)(v1 + 32), v6, v3, v4),
        *(_DWORD *)(v5 + 24) <= 1u) )
  {
    sub_1C6BC68(v1);
  }
  v9 = StringLiteral_11510/*"SE"*/;
  *(_QWORD *)(v5 + 40) = StringLiteral_11510/*"SE"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v5 + 40), v9, v7, v8);
  SeManager_TypeInfo->static_fields->LoadSeList = (struct System_String_array *)v5;
  sub_1C6B9AC((CGThumbnailListItem_o *)SeManager_TypeInfo->static_fields, v5, v10, v11);
  static_fields = SeManager_TypeInfo->static_fields;
  static_fields->seAssetBundleList = 0;
  static_fields = (struct SeManager_StaticFields *)((char *)static_fields + 16);
  static_fields[-1].loadCounter = 1065353216;
  sub_1C6B9AC((CGThumbnailListItem_o *)static_fields, 0, v13, v14);
  v15 = SeManager_TypeInfo->static_fields;
  v15->residentSeAssetBundleList = 0;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v15->residentSeAssetBundleList, 0, v16, v17);
  __asm { FMOV            V0.2S, #1.0 }
  v23 = SeManager_TypeInfo->static_fields;
  v23->isMute = 0;
  *(_QWORD *)&v23->masterVolume = _D0;
  v23->IsBusy = 0;
}


void SeManager___ctor(SeManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  __int64 v7; // x20
  int32_t v8; // w1
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int32_t v11; // w1
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  int32_t v14; // w1
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  int32_t v17; // w1
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  int32_t v20; // w1
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  int32_t v23; // w1
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  int32_t v26; // w1
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  __int64 v31; // x20
  int32_t v32; // w1
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  int32_t v35; // w1
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  int32_t v38; // w1
  int32_t v39; // w2
  const MethodInfo *v40; // x3
  int32_t v41; // w1
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  int32_t v44; // w1
  int32_t v45; // w2
  const MethodInfo *v46; // x3
  int32_t v47; // w1
  int32_t v48; // w2
  const MethodInfo *v49; // x3
  int32_t v50; // w1
  int32_t v51; // w2
  const MethodInfo *v52; // x3
  int32_t v53; // w1
  int32_t v54; // w2
  const MethodInfo *v55; // x3
  int32_t v56; // w1
  int32_t v57; // w2
  const MethodInfo *v58; // x3
  int32_t v59; // w1
  int32_t v60; // w2
  const MethodInfo *v61; // x3
  int32_t v62; // w1
  int32_t v63; // w2
  const MethodInfo *v64; // x3
  int32_t v65; // w1
  int32_t v66; // w2
  const MethodInfo *v67; // x3
  int32_t v68; // w2
  const MethodInfo *v69; // x3
  __int64 v70; // x20
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
  int32_t v87; // w2
  const MethodInfo *v88; // x3
  int32_t v89; // w1
  int32_t v90; // w2
  const MethodInfo *v91; // x3
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
  int32_t v114; // w2
  const MethodInfo *v115; // x3
  int32_t v116; // w1
  int32_t v117; // w2
  const MethodInfo *v118; // x3
  int32_t v119; // w1
  int32_t v120; // w2
  const MethodInfo *v121; // x3
  int32_t v122; // w1
  int32_t v123; // w2
  const MethodInfo *v124; // x3
  int32_t v125; // w1
  int32_t v126; // w2
  const MethodInfo *v127; // x3
  int32_t v128; // w1
  int32_t v129; // w2
  const MethodInfo *v130; // x3
  int32_t v131; // w1
  int32_t v132; // w2
  const MethodInfo *v133; // x3
  int32_t v134; // w1
  int32_t v135; // w2
  const MethodInfo *v136; // x3
  int32_t v137; // w1
  int32_t v138; // w2
  const MethodInfo *v139; // x3
  int32_t v140; // w1
  int32_t v141; // w2
  const MethodInfo *v142; // x3
  int32_t v143; // w1
  int32_t v144; // w2
  const MethodInfo *v145; // x3
  int32_t v146; // w1
  int32_t v147; // w2
  const MethodInfo *v148; // x3
  int32_t v149; // w1
  int32_t v150; // w2
  const MethodInfo *v151; // x3
  int32_t v152; // w1
  int32_t v153; // w2
  const MethodInfo *v154; // x3
  int32_t v155; // w1
  int32_t v156; // w2
  const MethodInfo *v157; // x3
  int32_t v158; // w1
  int32_t v159; // w2
  const MethodInfo *v160; // x3

  if ( (byte_4CB5C64 & 1) == 0 )
  {
    sub_1C6BA08(&Method_SingletonMonoBehaviour_SeManager___ctor__);
    sub_1C6BA08(&string___TypeInfo);
    sub_1C6BA08(&StringLiteral_23990/*"sy4"*/);
    sub_1C6BA08(&StringLiteral_16861/*"ar102"*/);
    sub_1C6BA08(&StringLiteral_16996/*"ba17"*/);
    sub_1C6BA08(&StringLiteral_24166/*"ti1"*/);
    sub_1C6BA08(&StringLiteral_23994/*"sy8"*/);
    sub_1C6BA08(&StringLiteral_16862/*"ar112"*/);
    sub_1C6BA08(&StringLiteral_16991/*"ba11"*/);
    sub_1C6BA08(&StringLiteral_23991/*"sy5"*/);
    sub_1C6BA08(&StringLiteral_16989/*"ba10"*/);
    sub_1C6BA08(&StringLiteral_18047/*"co1"*/);
    sub_1C6BA08(&StringLiteral_23992/*"sy6"*/);
    sub_1C6BA08(&StringLiteral_16999/*"ba2"*/);
    sub_1C6BA08(&StringLiteral_17005/*"ba3"*/);
    sub_1C6BA08(&StringLiteral_16994/*"ba15"*/);
    sub_1C6BA08(&StringLiteral_17004/*"ba24"*/);
    sub_1C6BA08(&StringLiteral_24391/*"um2"*/);
    sub_1C6BA08(&StringLiteral_21682/*"mis1"*/);
    sub_1C6BA08(&StringLiteral_23993/*"sy7"*/);
    sub_1C6BA08(&StringLiteral_17000/*"ba20"*/);
    sub_1C6BA08(&StringLiteral_16988/*"ba1"*/);
    sub_1C6BA08(&StringLiteral_16998/*"ba19"*/);
    sub_1C6BA08(&StringLiteral_23995/*"sy9"*/);
    sub_1C6BA08(&StringLiteral_16867/*"ar2"*/);
    sub_1C6BA08(&StringLiteral_17003/*"ba23"*/);
    sub_1C6BA08(&StringLiteral_24961/*"wo11"*/);
    sub_1C6BA08(&StringLiteral_17007/*"ba38"*/);
    sub_1C6BA08(&StringLiteral_23988/*"sy2"*/);
    sub_1C6BA08(&StringLiteral_24133/*"testSe"*/);
    sub_1C6BA08(&StringLiteral_17006/*"ba30"*/);
    sub_1C6BA08(&StringLiteral_24390/*"um1"*/);
    sub_1C6BA08(&StringLiteral_17009/*"ba7"*/);
    sub_1C6BA08(&StringLiteral_17001/*"ba21"*/);
    sub_1C6BA08(&StringLiteral_16997/*"ba18"*/);
    sub_1C6BA08(&StringLiteral_23986/*"sy1"*/);
    sub_1C6BA08(&StringLiteral_22938/*"qev79"*/);
    sub_1C6BA08(&StringLiteral_16993/*"ba13"*/);
    sub_1C6BA08(&StringLiteral_16995/*"ba16"*/);
    sub_1C6BA08(&StringLiteral_16992/*"ba12"*/);
    sub_1C6BA08(&StringLiteral_17002/*"ba22"*/);
    sub_1C6BA08(&StringLiteral_24960/*"wo1"*/);
    sub_1C6BA08(&StringLiteral_23989/*"sy3"*/);
    sub_1C6BA08(&StringLiteral_23987/*"sy1a"*/);
    sub_1C6BA08(&StringLiteral_16990/*"ba10a"*/);
    byte_4CB5C64 = 1;
  }
  this->fields.SYSTEM_SE_MAX = 3;
  this->fields.seMax = 8;
  *(int32x2_t *)&this->fields.preDelayTimeForStream = vdup_n_s32(0x43270000u);
  v3 = sub_1C6BAB0(string___TypeInfo, 7);
  if ( !v3 )
    goto LABEL_57;
  v7 = v3;
  if ( !*(_DWORD *)(v3 + 24) )
    goto LABEL_56;
  v8 = StringLiteral_23986/*"sy1"*/;
  *(_QWORD *)(v3 + 32) = StringLiteral_23986/*"sy1"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v3 + 32), v8, v5, v6);
  if ( *(_DWORD *)(v7 + 24) <= 1u )
    goto LABEL_56;
  v11 = StringLiteral_23987/*"sy1a"*/;
  *(_QWORD *)(v7 + 40) = StringLiteral_23987/*"sy1a"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v7 + 40), v11, v9, v10);
  if ( *(_DWORD *)(v7 + 24) <= 2u )
    goto LABEL_56;
  v14 = StringLiteral_23988/*"sy2"*/;
  *(_QWORD *)(v7 + 48) = StringLiteral_23988/*"sy2"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v7 + 48), v14, v12, v13);
  if ( *(_DWORD *)(v7 + 24) <= 3u )
    goto LABEL_56;
  v17 = StringLiteral_23989/*"sy3"*/;
  *(_QWORD *)(v7 + 56) = StringLiteral_23989/*"sy3"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v7 + 56), v17, v15, v16);
  if ( *(_DWORD *)(v7 + 24) <= 4u )
    goto LABEL_56;
  v20 = StringLiteral_23995/*"sy9"*/;
  *(_QWORD *)(v7 + 64) = StringLiteral_23995/*"sy9"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v7 + 64), v20, v18, v19);
  if ( *(_DWORD *)(v7 + 24) <= 5u )
    goto LABEL_56;
  v23 = StringLiteral_24166/*"ti1"*/;
  *(_QWORD *)(v7 + 72) = StringLiteral_24166/*"ti1"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v7 + 72), v23, v21, v22);
  if ( *(_DWORD *)(v7 + 24) <= 6u )
    goto LABEL_56;
  v26 = StringLiteral_16997/*"ba18"*/;
  *(_QWORD *)(v7 + 80) = StringLiteral_16997/*"ba18"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v7 + 80), v26, v24, v25);
  this->fields.ignorePreDelayArray = (struct System_String_array *)v7;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.ignorePreDelayArray, v7, v27, v28);
  v3 = sub_1C6BAB0(string___TypeInfo, 12);
  if ( !v3 )
    goto LABEL_57;
  v31 = v3;
  if ( !*(_DWORD *)(v3 + 24) )
    goto LABEL_56;
  v32 = StringLiteral_23986/*"sy1"*/;
  *(_QWORD *)(v3 + 32) = StringLiteral_23986/*"sy1"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v3 + 32), v32, v29, v30);
  if ( *(_DWORD *)(v31 + 24) <= 1u )
    goto LABEL_56;
  v35 = StringLiteral_23988/*"sy2"*/;
  *(_QWORD *)(v31 + 40) = StringLiteral_23988/*"sy2"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v31 + 40), v35, v33, v34);
  if ( *(_DWORD *)(v31 + 24) <= 2u )
    goto LABEL_56;
  v38 = StringLiteral_23989/*"sy3"*/;
  *(_QWORD *)(v31 + 48) = StringLiteral_23989/*"sy3"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v31 + 48), v38, v36, v37);
  if ( *(_DWORD *)(v31 + 24) <= 3u )
    goto LABEL_56;
  v41 = StringLiteral_23990/*"sy4"*/;
  *(_QWORD *)(v31 + 56) = StringLiteral_23990/*"sy4"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v31 + 56), v41, v39, v40);
  if ( *(_DWORD *)(v31 + 24) <= 4u )
    goto LABEL_56;
  v44 = StringLiteral_23991/*"sy5"*/;
  *(_QWORD *)(v31 + 64) = StringLiteral_23991/*"sy5"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v31 + 64), v44, v42, v43);
  if ( *(_DWORD *)(v31 + 24) <= 5u )
    goto LABEL_56;
  v47 = StringLiteral_23992/*"sy6"*/;
  *(_QWORD *)(v31 + 72) = StringLiteral_23992/*"sy6"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v31 + 72), v47, v45, v46);
  if ( *(_DWORD *)(v31 + 24) <= 6u )
    goto LABEL_56;
  v50 = StringLiteral_23993/*"sy7"*/;
  *(_QWORD *)(v31 + 80) = StringLiteral_23993/*"sy7"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v31 + 80), v50, v48, v49);
  if ( *(_DWORD *)(v31 + 24) <= 7u )
    goto LABEL_56;
  v53 = StringLiteral_23994/*"sy8"*/;
  *(_QWORD *)(v31 + 88) = StringLiteral_23994/*"sy8"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v31 + 88), v53, v51, v52);
  if ( *(_DWORD *)(v31 + 24) <= 8u )
    goto LABEL_56;
  v56 = StringLiteral_23987/*"sy1a"*/;
  *(_QWORD *)(v31 + 96) = StringLiteral_23987/*"sy1a"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v31 + 96), v56, v54, v55);
  if ( *(_DWORD *)(v31 + 24) <= 9u
    || (v59 = StringLiteral_24390/*"um1"*/,
        *(_QWORD *)(v31 + 104) = StringLiteral_24390/*"um1"*/,
        sub_1C6B9AC((CGThumbnailListItem_o *)(v31 + 104), v59, v57, v58),
        *(_DWORD *)(v31 + 24) <= 0xAu)
    || (v62 = StringLiteral_24391/*"um2"*/,
        *(_QWORD *)(v31 + 112) = StringLiteral_24391/*"um2"*/,
        sub_1C6B9AC((CGThumbnailListItem_o *)(v31 + 112), v62, v60, v61),
        *(_DWORD *)(v31 + 24) <= 0xBu) )
  {
LABEL_56:
    sub_1C6BC68(v3);
  }
  v65 = StringLiteral_23995/*"sy9"*/;
  *(_QWORD *)(v31 + 120) = StringLiteral_23995/*"sy9"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v31 + 120), v65, v63, v64);
  this->fields.systemSeClipNames = (struct System_String_array *)v31;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.systemSeClipNames, v31, v66, v67);
  v3 = sub_1C6BAB0(string___TypeInfo, 30);
  if ( !v3 )
LABEL_57:
    sub_1C6BC60(v3, v4);
  v70 = v3;
  if ( !*(_DWORD *)(v3 + 24) )
    goto LABEL_56;
  v71 = StringLiteral_16988/*"ba1"*/;
  *(_QWORD *)(v3 + 32) = StringLiteral_16988/*"ba1"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v3 + 32), v71, v68, v69);
  if ( *(_DWORD *)(v70 + 24) <= 1u )
    goto LABEL_56;
  v74 = StringLiteral_16999/*"ba2"*/;
  *(_QWORD *)(v70 + 40) = StringLiteral_16999/*"ba2"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v70 + 40), v74, v72, v73);
  if ( *(_DWORD *)(v70 + 24) <= 2u )
    goto LABEL_56;
  v77 = StringLiteral_17005/*"ba3"*/;
  *(_QWORD *)(v70 + 48) = StringLiteral_17005/*"ba3"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v70 + 48), v77, v75, v76);
  if ( *(_DWORD *)(v70 + 24) <= 3u )
    goto LABEL_56;
  v80 = StringLiteral_17009/*"ba7"*/;
  *(_QWORD *)(v70 + 56) = StringLiteral_17009/*"ba7"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v70 + 56), v80, v78, v79);
  if ( *(_DWORD *)(v70 + 24) <= 4u )
    goto LABEL_56;
  v83 = StringLiteral_16989/*"ba10"*/;
  *(_QWORD *)(v70 + 64) = StringLiteral_16989/*"ba10"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v70 + 64), v83, v81, v82);
  if ( *(_DWORD *)(v70 + 24) <= 5u )
    goto LABEL_56;
  v86 = StringLiteral_16990/*"ba10a"*/;
  *(_QWORD *)(v70 + 72) = StringLiteral_16990/*"ba10a"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v70 + 72), v86, v84, v85);
  if ( *(_DWORD *)(v70 + 24) <= 6u )
    goto LABEL_56;
  v89 = StringLiteral_16991/*"ba11"*/;
  *(_QWORD *)(v70 + 80) = StringLiteral_16991/*"ba11"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v70 + 80), v89, v87, v88);
  if ( *(_DWORD *)(v70 + 24) <= 7u )
    goto LABEL_56;
  v92 = StringLiteral_16992/*"ba12"*/;
  *(_QWORD *)(v70 + 88) = StringLiteral_16992/*"ba12"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v70 + 88), v92, v90, v91);
  if ( *(_DWORD *)(v70 + 24) <= 8u )
    goto LABEL_56;
  v95 = StringLiteral_16995/*"ba16"*/;
  *(_QWORD *)(v70 + 96) = StringLiteral_16995/*"ba16"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v70 + 96), v95, v93, v94);
  if ( *(_DWORD *)(v70 + 24) <= 9u )
    goto LABEL_56;
  v98 = StringLiteral_16997/*"ba18"*/;
  *(_QWORD *)(v70 + 104) = StringLiteral_16997/*"ba18"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v70 + 104), v98, v96, v97);
  if ( *(_DWORD *)(v70 + 24) <= 0xAu )
    goto LABEL_56;
  v101 = StringLiteral_16998/*"ba19"*/;
  *(_QWORD *)(v70 + 112) = StringLiteral_16998/*"ba19"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v70 + 112), v101, v99, v100);
  if ( *(_DWORD *)(v70 + 24) <= 0xBu )
    goto LABEL_56;
  v104 = StringLiteral_17000/*"ba20"*/;
  *(_QWORD *)(v70 + 120) = StringLiteral_17000/*"ba20"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v70 + 120), v104, v102, v103);
  if ( *(_DWORD *)(v70 + 24) <= 0xCu )
    goto LABEL_56;
  v107 = StringLiteral_17001/*"ba21"*/;
  *(_QWORD *)(v70 + 128) = StringLiteral_17001/*"ba21"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v70 + 128), v107, v105, v106);
  if ( *(_DWORD *)(v70 + 24) <= 0xDu )
    goto LABEL_56;
  v110 = StringLiteral_17002/*"ba22"*/;
  *(_QWORD *)(v70 + 136) = StringLiteral_17002/*"ba22"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v70 + 136), v110, v108, v109);
  if ( *(_DWORD *)(v70 + 24) <= 0xEu )
    goto LABEL_56;
  v113 = StringLiteral_17003/*"ba23"*/;
  *(_QWORD *)(v70 + 144) = StringLiteral_17003/*"ba23"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v70 + 144), v113, v111, v112);
  if ( *(_DWORD *)(v70 + 24) <= 0xFu )
    goto LABEL_56;
  v116 = StringLiteral_17004/*"ba24"*/;
  *(_QWORD *)(v70 + 152) = StringLiteral_17004/*"ba24"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v70 + 152), v116, v114, v115);
  if ( *(_DWORD *)(v70 + 24) <= 0x10u )
    goto LABEL_56;
  v119 = StringLiteral_17006/*"ba30"*/;
  *(_QWORD *)(v70 + 160) = StringLiteral_17006/*"ba30"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v70 + 160), v119, v117, v118);
  if ( *(_DWORD *)(v70 + 24) <= 0x11u )
    goto LABEL_56;
  v122 = StringLiteral_16867/*"ar2"*/;
  *(_QWORD *)(v70 + 168) = StringLiteral_16867/*"ar2"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v70 + 168), v122, v120, v121);
  if ( *(_DWORD *)(v70 + 24) <= 0x12u )
    goto LABEL_56;
  v125 = StringLiteral_16861/*"ar102"*/;
  *(_QWORD *)(v70 + 176) = StringLiteral_16861/*"ar102"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v70 + 176), v125, v123, v124);
  if ( *(_DWORD *)(v70 + 24) <= 0x13u )
    goto LABEL_56;
  v128 = StringLiteral_18047/*"co1"*/;
  *(_QWORD *)(v70 + 184) = StringLiteral_18047/*"co1"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v70 + 184), v128, v126, v127);
  if ( *(_DWORD *)(v70 + 24) <= 0x14u )
    goto LABEL_56;
  v131 = StringLiteral_21682/*"mis1"*/;
  *(_QWORD *)(v70 + 192) = StringLiteral_21682/*"mis1"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v70 + 192), v131, v129, v130);
  if ( *(_DWORD *)(v70 + 24) <= 0x15u )
    goto LABEL_56;
  v134 = StringLiteral_24133/*"testSe"*/;
  *(_QWORD *)(v70 + 200) = StringLiteral_24133/*"testSe"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v70 + 200), v134, v132, v133);
  if ( *(_DWORD *)(v70 + 24) <= 0x16u )
    goto LABEL_56;
  v137 = StringLiteral_24960/*"wo1"*/;
  *(_QWORD *)(v70 + 208) = StringLiteral_24960/*"wo1"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v70 + 208), v137, v135, v136);
  if ( *(_DWORD *)(v70 + 24) <= 0x17u )
    goto LABEL_56;
  v140 = StringLiteral_24961/*"wo11"*/;
  *(_QWORD *)(v70 + 216) = StringLiteral_24961/*"wo11"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v70 + 216), v140, v138, v139);
  if ( *(_DWORD *)(v70 + 24) <= 0x18u )
    goto LABEL_56;
  v143 = StringLiteral_17007/*"ba38"*/;
  *(_QWORD *)(v70 + 224) = StringLiteral_17007/*"ba38"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v70 + 224), v143, v141, v142);
  if ( *(_DWORD *)(v70 + 24) <= 0x19u )
    goto LABEL_56;
  v146 = StringLiteral_16993/*"ba13"*/;
  *(_QWORD *)(v70 + 232) = StringLiteral_16993/*"ba13"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v70 + 232), v146, v144, v145);
  if ( *(_DWORD *)(v70 + 24) <= 0x1Au )
    goto LABEL_56;
  v149 = StringLiteral_16994/*"ba15"*/;
  *(_QWORD *)(v70 + 240) = StringLiteral_16994/*"ba15"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v70 + 240), v149, v147, v148);
  if ( *(_DWORD *)(v70 + 24) <= 0x1Bu )
    goto LABEL_56;
  v152 = StringLiteral_16996/*"ba17"*/;
  *(_QWORD *)(v70 + 248) = StringLiteral_16996/*"ba17"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v70 + 248), v152, v150, v151);
  if ( *(_DWORD *)(v70 + 24) <= 0x1Cu )
    goto LABEL_56;
  v155 = StringLiteral_16862/*"ar112"*/;
  *(_QWORD *)(v70 + 256) = StringLiteral_16862/*"ar112"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v70 + 256), v155, v153, v154);
  if ( *(_DWORD *)(v70 + 24) <= 0x1Du )
    goto LABEL_56;
  v158 = StringLiteral_22938/*"qev79"*/;
  *(_QWORD *)(v70 + 264) = StringLiteral_22938/*"qev79"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v70 + 264), v158, v156, v157);
  this->fields.commonSeClipNames = (struct System_String_array *)v70;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.commonSeClipNames, v70, v159, v160);
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_3A4F89C *)Method_SingletonMonoBehaviour_SeManager___ctor__);
}


void SeManager__ChangeVolumeSe(System_String_o *name, float volume, float fadeTime, const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  _BOOL8 v8; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x2

  if ( (byte_4CB5C4C & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_SeManager__get_Instance__);
    byte_4CB5C4C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_SeManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v8 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( !v8 )
  {
    if ( !Instance )
      sub_1C6BC60(v8, v9);
    SeManager__ChangeVolumeSeLocal((SeManager_o *)Instance, name, volume, fadeTime, v10);
  }
}


void SeManager__ChangeVolumeSeLocal(
        SeManager_o *this,
        System_String_o *name,
        float volume,
        float fadeTime,
        const MethodInfo *method)
{
  SePlayer_o *SePlayer_41733348; // x0
  const MethodInfo *v8; // x1

  SePlayer_41733348 = SeManager__GetSePlayer_41733348(this, name, method);
  if ( SePlayer_41733348 )
    SePlayer__ChangeVolume(SePlayer_41733348, volume, fadeTime, v8);
}


void SeManager__ChangeVolumeSeLocal_41728372(
        SeManager_o *this,
        System_String_o *assetName,
        System_String_o *objectName,
        float volume,
        float fadeTime,
        const MethodInfo *method)
{
  SePlayer_o *SePlayer_41733524; // x0
  const MethodInfo *v9; // x1

  SePlayer_41733524 = SeManager__GetSePlayer_41733524(this, assetName, objectName, method);
  if ( SePlayer_41733524 )
    SePlayer__ChangeVolume(SePlayer_41733524, volume, fadeTime, v9);
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
  __int64 v11; // x1
  const MethodInfo *v12; // x3

  if ( (byte_4CB5C4D & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_SeManager__get_Instance__);
    byte_4CB5C4D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_SeManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v10 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( !v10 )
  {
    if ( !Instance )
      sub_1C6BC60(v10, v11);
    SeManager__ChangeVolumeVoiceLocal((SeManager_o *)Instance, assetName, objectName, volume, fadeTime, v12);
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
  SePlayer_o *SePlayer_41733940; // x0
  const MethodInfo *v10; // x1

  SePlayer_41733940 = SeManager__GetSePlayer_41733940(this, 1, assetName, objectName, v6);
  if ( SePlayer_41733940 )
    SePlayer__ChangeVolume(SePlayer_41733940, volume, fadeTime, v10);
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
    this = (SeManager_o *)sub_1C6BB44(player, sePlayerStatusList->obj.klass->_1.element_class);
    if ( !this )
    {
      v13 = sub_1C6BC84(0);
      sub_1C6BB30(v13, 0);
    }
    max_length = sePlayerStatusList->max_length;
  }
  if ( v9 >= (unsigned int)max_length )
LABEL_15:
    sub_1C6BC68(this);
  *(Il2CppClass **)((char *)&sePlayerStatusList->obj.klass + i) = (Il2CppClass *)player;
  sub_1C6B9AC((CGThumbnailListItem_o *)((char *)sePlayerStatusList + i), (int32_t)player, (int32_t)method, v3);
  seSources = v6->fields.seSources;
  if ( !seSources )
LABEL_16:
    sub_1C6BC60(this, player);
  if ( v9 >= LODWORD(seSources->max_length) )
    goto LABEL_15;
  return *(CriAtomSource_o **)((char *)&seSources->obj.klass + i);
}


CriAtomSource_o *SeManager__GetAudioSource_41732120(
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
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  struct SePlayer_array *v18; // x20
  __int64 v19; // x0

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
  SePlayer__StopSe(v13, 0.0, (const MethodInfo *)player);
  v18 = v5->fields.sePlayerStatusList;
  if ( !v18 )
LABEL_18:
    sub_1C6BC60(this, player);
  if ( player )
  {
    this = (SeManager_o *)sub_1C6BB44(player, v18->obj.klass->_1.element_class);
    if ( !this )
    {
      v19 = sub_1C6BC84(0);
      sub_1C6BB30(v19, 0);
    }
  }
  if ( (unsigned int)v9 >= LODWORD(v18->max_length) )
LABEL_19:
    sub_1C6BC68(this);
  *(Il2CppClass **)((char *)&v18->obj.klass + i) = (Il2CppClass *)player;
  sub_1C6B9AC((CGThumbnailListItem_o *)((char *)v18 + i), (int32_t)player, v16, v17);
  return v14;
}


// local variable allocation has failed, the output may be wrong!
CriAtomSource_o *SeManager__GetAudioSource_41732780(
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
    return SeManager__GetAudioSource_41732120(this, player, cueSheet, cueName, (const MethodInfo *)notOverwrite);
  seMax = this->fields.seMax;
  if ( seMax < 1 )
    return SeManager__GetAudioSource_41732120(this, player, cueSheet, cueName, (const MethodInfo *)notOverwrite);
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
      return SeManager__GetAudioSource_41732120(this, player, cueSheet, cueName, (const MethodInfo *)notOverwrite);
  }
  if ( player )
  {
    this = (SeManager_o *)sub_1C6BB44(player, sePlayerStatusList->obj.klass->_1.element_class);
    if ( !this )
    {
      v16 = sub_1C6BC84(0);
      sub_1C6BB30(v16, 0);
    }
    max_length = sePlayerStatusList->max_length;
  }
  if ( v11 >= (unsigned int)max_length )
LABEL_18:
    sub_1C6BC68(this);
  *(Il2CppClass **)((char *)&sePlayerStatusList->obj.klass + i) = (Il2CppClass *)player;
  sub_1C6B9AC(
    (CGThumbnailListItem_o *)((char *)sePlayerStatusList + i),
    (int32_t)player,
    (int32_t)cueSheet,
    (const MethodInfo *)cueName);
  v15 = v7->fields.seSources;
  if ( !v15 )
LABEL_19:
    sub_1C6BC60(this, player);
  if ( v11 >= LODWORD(v15->max_length) )
    goto LABEL_18;
  return *(CriAtomSource_o **)((char *)&v15->obj.klass + i);
}


System_String_o *SeManager__GetCommonSeName(int32_t kind, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x2

  if ( (byte_4CB5C30 & 1) == 0 )
  {
    sub_1C6BA08(&Method_SingletonMonoBehaviour_SeManager__get_Instance__);
    byte_4CB5C30 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_SeManager__get_Instance__);
  if ( !Instance )
    sub_1C6BC60(0, v4);
  return SeManager__GetCommonSeNameLocal((SeManager_o *)Instance, kind, v5);
}


System_String_o *SeManager__GetCommonSeNameLocal(SeManager_o *this, int32_t kind, const MethodInfo *method)
{
  struct System_String_array *commonSeClipNames; // x8

  commonSeClipNames = this->fields.commonSeClipNames;
  if ( !commonSeClipNames )
    sub_1C6BC60(this, kind);
  if ( LODWORD(commonSeClipNames->max_length) <= kind )
    sub_1C6BC68(this);
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
  if ( (byte_4CB5C26 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_12658/*"Se/"*/);
    byte_4CB5C26 = 1;
  }
  return System_String__Concat_63966792((System_String_o *)StringLiteral_12658/*"Se/"*/, name, 0);
}


float SeManager__GetPitchSe(System_String_o *name, const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  float v7; // s8
  SePlayer_o *SePlayer_41733348; // x0

  if ( (byte_4CB5C4F & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_SeManager__get_Instance__);
    byte_4CB5C4F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_SeManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  v7 = 0.0;
  if ( !v4 )
  {
    if ( !Instance )
      sub_1C6BC60(v4, v5);
    SePlayer_41733348 = SeManager__GetSePlayer_41733348((SeManager_o *)Instance, name, v6);
    if ( SePlayer_41733348 )
      return SePlayer_41733348->fields.pitchValue;
  }
  return v7;
}


float SeManager__GetPitchSeLocal(SeManager_o *this, System_String_o *name, const MethodInfo *method)
{
  SePlayer_o *SePlayer_41733348; // x0

  SePlayer_41733348 = SeManager__GetSePlayer_41733348(this, name, method);
  if ( SePlayer_41733348 )
    return SePlayer_41733348->fields.pitchValue;
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

  if ( (byte_4CB5C56 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Linq_Enumerable_Contains_string___);
    byte_4CB5C56 = 1;
  }
  v7 = 0.0;
  if ( this->fields.enablePreDelay )
  {
    ignorePreDelayArray = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.ignorePreDelayArray;
    if ( !ignorePreDelayArray
      || !System_Linq_Enumerable__Contains_object_(
            ignorePreDelayArray,
            (Il2CppObject *)cueName,
            (const MethodInfo_31586E8 *)Method_System_Linq_Enumerable_Contains_string___) )
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


// local variable allocation has failed, the output may be wrong!
SePlayer_o *SeManager__GetSePlayer(SeManager_o *this, int32_t num, const MethodInfo *method)
{
  SeManager_o *v4; // x20
  struct System_Collections_Generic_List_SePlayer__o *workSePlayerStatusList; // x8
  int32_t i; // w21

  v4 = this;
  if ( (byte_4CB5C58 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_SePlayer__get_Count__);
    this = (SeManager_o *)sub_1C6BA08(&Method_System_Collections_Generic_List_SePlayer__get_Item__);
    byte_4CB5C58 = 1;
  }
  workSePlayerStatusList = v4->fields.workSePlayerStatusList;
  if ( !workSePlayerStatusList )
LABEL_11:
    sub_1C6BC60(this, *(_QWORD *)&num);
  for ( i = workSePlayerStatusList->fields._size - 1; (i & 0x80000000) == 0; --i )
  {
    this = (SeManager_o *)v4->fields.workSePlayerStatusList;
    if ( !this )
      goto LABEL_11;
    this = (SeManager_o *)System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)this,
                            i,
                            (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_SePlayer__get_Item__);
    if ( !this )
      goto LABEL_11;
    if ( HIDWORD(this->fields.m_CachedPtr) == num )
      return (SePlayer_o *)this;
  }
  return 0;
}


SePlayer_o *SeManager__GetSePlayer_41733348(SeManager_o *this, System_String_o *name, const MethodInfo *method)
{
  SeManager_o *v4; // x20
  struct System_Collections_Generic_List_SePlayer__o *workSePlayerStatusList; // x8
  int32_t i; // w21
  SeManager_o *v7; // x22

  v4 = this;
  if ( (byte_4CB5C59 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_SePlayer__get_Count__);
    this = (SeManager_o *)sub_1C6BA08(&Method_System_Collections_Generic_List_SePlayer__get_Item__);
    byte_4CB5C59 = 1;
  }
  workSePlayerStatusList = v4->fields.workSePlayerStatusList;
  if ( !workSePlayerStatusList )
LABEL_12:
    sub_1C6BC60(this, name);
  for ( i = workSePlayerStatusList->fields._size - 1; (i & 0x80000000) == 0; --i )
  {
    this = (SeManager_o *)v4->fields.workSePlayerStatusList;
    if ( !this )
      goto LABEL_12;
    this = (SeManager_o *)System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)this,
                            i,
                            (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_SePlayer__get_Item__);
    if ( !this )
      goto LABEL_12;
    v7 = this;
    if ( System_String__op_Equality((System_String_o *)this->fields.systemSeSources, name, 0) )
      return (SePlayer_o *)v7;
  }
  return 0;
}


SePlayer_o *SeManager__GetSePlayer_41733524(
        SeManager_o *this,
        System_String_o *assetName,
        System_String_o *objectName,
        const MethodInfo *method)
{
  void *workSePlayerStatusList; // x0
  int32_t v8; // w22
  SePlayer_o *v9; // x23

  if ( (byte_4CB5C5A & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_SePlayer__get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_SePlayer__get_Item__);
    byte_4CB5C5A = 1;
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
                                 (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_SePlayer__get_Item__);
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
    sub_1C6BC60(workSePlayerStatusList, assetName);
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
SePlayer_o *SeManager__GetSePlayer_41733740(
        SeManager_o *this,
        int32_t type,
        System_String_o *name,
        const MethodInfo *method)
{
  void *workSePlayerStatusList; // x0
  int32_t v8; // w22
  SePlayer_o *v9; // x23

  if ( (byte_4CB5C5B & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_SePlayer__get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_SePlayer__get_Item__);
    byte_4CB5C5B = 1;
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
                                 (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_SePlayer__get_Item__);
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
    sub_1C6BC60(workSePlayerStatusList, *(_QWORD *)&type);
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
SePlayer_o *SeManager__GetSePlayer_41733940(
        SeManager_o *this,
        int32_t type,
        System_String_o *assetName,
        System_String_o *objectName,
        const MethodInfo *method)
{
  void *workSePlayerStatusList; // x0
  int32_t v10; // w23
  SePlayer_o *v11; // x24

  if ( (byte_4CB5C5C & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_SePlayer__get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_SePlayer__get_Item__);
    byte_4CB5C5C = 1;
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
                                 (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_SePlayer__get_Item__);
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
    sub_1C6BC60(workSePlayerStatusList, *(_QWORD *)&type);
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

  if ( (byte_4CB5C21 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&SeManager_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_SeManager__get_Instance__);
    byte_4CB5C21 = 1;
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
    sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->seAssetBundleList, 0, v1, v2);
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
    sub_1C6B9AC((CGThumbnailListItem_o *)&v5->residentSeAssetBundleList, 0, v1, v2);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_SeManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v7 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( !v7 )
  {
    if ( !Instance )
      sub_1C6BC60(v7, v8);
    SeManager__InitializeLocal((SeManager_o *)Instance, v8);
  }
}


void SeManager__InitializeAssetStorage(const MethodInfo *method)
{
  SeManager_c *v1; // x0
  struct SeManager_StaticFields *static_fields; // x8
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  struct System_String_array *LoadSeList; // x8
  SoundManager_o *v6; // x19
  System_String_o *v7; // x20
  System_Action_o *v8; // x21
  const MethodInfo *v9; // x4
  struct System_String_array *v10; // x8
  SoundManager_o *v11; // x19
  System_String_o *v12; // x20
  System_Action_o *v13; // x21
  const MethodInfo *v14; // x4

  if ( (byte_4CB5C22 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_SeManager_LoadEndResidentSeAsset__);
    sub_1C6BA08(&SeManager_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    byte_4CB5C22 = 1;
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
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
  LoadSeList = SeManager_TypeInfo->static_fields->LoadSeList;
  if ( !LoadSeList )
    goto LABEL_12;
  if ( !LODWORD(LoadSeList->max_length) )
    goto LABEL_13;
  v6 = (SoundManager_o *)Instance;
  v7 = LoadSeList->m_Items[0];
  v8 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
  System_Action___ctor(v8, 0, Method_SeManager_LoadEndResidentSeAsset__, 0);
  if ( !v6
    || (SoundManager__LoadAudioAssetStorage(v6, v7, v8, 1, v9),
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__),
        (v10 = SeManager_TypeInfo->static_fields->LoadSeList) == 0) )
  {
LABEL_12:
    sub_1C6BC60(Instance, v4);
  }
  if ( LODWORD(v10->max_length) <= 1 )
LABEL_13:
    sub_1C6BC68(Instance);
  v11 = (SoundManager_o *)Instance;
  v12 = v10->m_Items[1];
  v13 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
  System_Action___ctor(v13, 0, Method_SeManager_LoadEndResidentSeAsset__, 0);
  if ( !v11 )
    goto LABEL_12;
  SoundManager__LoadAudioAssetStorage(v11, v12, v13, 1, v14);
}


void SeManager__InitializeLocal(SeManager_o *this, const MethodInfo *method)
{
  struct UnityEngine_GameObject_o **p_playerGameObject; // x20
  UnityEngine_Object_o *playerGameObject; // x21
  const MethodInfo *v5; // x1
  UnityEngine_GameObject_o *v6; // x21
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  __int64 v9; // x1
  UnityEngine_Object_o *gameObject; // x0
  UnityEngine_Transform_o *transform; // x21
  struct CriAtomSource_array *v12; // x0
  struct CriAtomSource_array **p_seSources; // x21
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  struct SePlayer_array *v16; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  struct CriAtomSource_array *v19; // x0
  struct CriAtomSource_array **p_systemSeSources; // x22
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  System_Collections_Generic_List_object__o *v23; // x23
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  struct CriAtomSource_array *v26; // x27
  unsigned int v27; // w24
  __int64 v28; // x25
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  UnityEngine_Object_o *v31; // x23
  __int64 v32; // x8
  struct CriAtomSource_array *v33; // x27
  unsigned int v34; // w23
  __int64 i; // x24
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  UnityEngine_Object_o *v38; // x22
  struct CriAtomSource_array *v39; // x8
  __int64 v40; // x8
  __int64 v41; // x0

  if ( (byte_4CB5C53 & 1) == 0 )
  {
    sub_1C6BA08(&CriAtomSource___TypeInfo);
    sub_1C6BA08(&Method_UnityEngine_GameObject_AddComponent_CriAtomSource___);
    sub_1C6BA08(&UnityEngine_GameObject_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_SePlayer___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_SePlayer__TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&SePlayer___TypeInfo);
    sub_1C6BA08(&StringLiteral_12659/*"SePlayerObject"*/);
    byte_4CB5C53 = 1;
  }
  p_playerGameObject = &this->fields.playerGameObject;
  playerGameObject = (UnityEngine_Object_o *)this->fields.playerGameObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(playerGameObject, 0, 0) )
  {
    v6 = (UnityEngine_GameObject_o *)sub_1C6BC54(UnityEngine_GameObject_TypeInfo);
    UnityEngine_GameObject___ctor_71641332(v6, 0);
    *p_playerGameObject = v6;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.playerGameObject, (int32_t)v6, v7, v8);
    gameObject = (UnityEngine_Object_o *)*p_playerGameObject;
    if ( !*p_playerGameObject )
      goto LABEL_37;
    UnityEngine_Object__set_name(gameObject, (System_String_o *)StringLiteral_12659/*"SePlayerObject"*/, 0);
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
    v12 = (struct CriAtomSource_array *)sub_1C6BAB0(CriAtomSource___TypeInfo, (unsigned int)this->fields.seMax);
    this->fields.seSources = v12;
    p_seSources = &this->fields.seSources;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.seSources, (int32_t)v12, v14, v15);
    v16 = (struct SePlayer_array *)sub_1C6BAB0(SePlayer___TypeInfo, (unsigned int)this->fields.seMax);
    this->fields.sePlayerStatusList = v16;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.sePlayerStatusList, (int32_t)v16, v17, v18);
    v19 = (struct CriAtomSource_array *)sub_1C6BAB0(CriAtomSource___TypeInfo, (unsigned int)this->fields.SYSTEM_SE_MAX);
    this->fields.systemSeSources = v19;
    p_systemSeSources = &this->fields.systemSeSources;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.systemSeSources, (int32_t)v19, v21, v22);
    this->fields.systemSeIdx = 0;
    v23 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_SePlayer__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v23,
      (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_SePlayer___ctor__);
    this->fields.workSePlayerStatusList = (struct System_Collections_Generic_List_SePlayer__o *)v23;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.workSePlayerStatusList, (int32_t)v23, v24, v25);
    if ( this->fields.SYSTEM_SE_MAX >= 1 )
    {
      v26 = *p_systemSeSources;
      v27 = 0;
      v28 = 32;
      while ( 1 )
      {
        gameObject = (UnityEngine_Object_o *)*p_playerGameObject;
        if ( !*p_playerGameObject )
          break;
        gameObject = (UnityEngine_Object_o *)UnityEngine_GameObject__AddComponent_object_(
                                               (UnityEngine_GameObject_o *)gameObject,
                                               (const MethodInfo_3193044 *)Method_UnityEngine_GameObject_AddComponent_CriAtomSource___);
        if ( !v26 )
          break;
        v31 = gameObject;
        if ( gameObject )
        {
          gameObject = (UnityEngine_Object_o *)sub_1C6BB44(gameObject, v26->obj.klass->_1.element_class);
          if ( !gameObject )
          {
LABEL_39:
            v41 = sub_1C6BC84(gameObject);
            sub_1C6BB30(v41, 0);
          }
        }
        if ( v27 >= LODWORD(v26->max_length) )
          goto LABEL_38;
        *(Il2CppClass **)((char *)&v26->obj.klass + v28) = (Il2CppClass *)v31;
        sub_1C6B9AC((CGThumbnailListItem_o *)((char *)v26 + v28), (int32_t)v31, v29, v30);
        v26 = *p_systemSeSources;
        if ( !*p_systemSeSources )
          break;
        if ( v27 >= LODWORD(v26->max_length) )
LABEL_38:
          sub_1C6BC68(gameObject);
        v32 = *(__int64 *)((char *)&v26->obj.klass + v28);
        if ( !v32 )
          break;
        *(_BYTE *)(v32 + 156) = 1;
        ++v27;
        v28 += 8;
        if ( (signed int)v27 >= this->fields.SYSTEM_SE_MAX )
          goto LABEL_21;
      }
LABEL_37:
      sub_1C6BC60(gameObject, v9);
    }
LABEL_21:
    if ( this->fields.seMax >= 1 )
    {
      v33 = *p_seSources;
      v34 = 0;
      for ( i = 32; ; i += 8 )
      {
        gameObject = (UnityEngine_Object_o *)*p_playerGameObject;
        if ( !*p_playerGameObject )
          break;
        gameObject = (UnityEngine_Object_o *)UnityEngine_GameObject__AddComponent_object_(
                                               (UnityEngine_GameObject_o *)gameObject,
                                               (const MethodInfo_3193044 *)Method_UnityEngine_GameObject_AddComponent_CriAtomSource___);
        if ( !v33 )
          break;
        v38 = gameObject;
        if ( gameObject )
        {
          gameObject = (UnityEngine_Object_o *)sub_1C6BB44(gameObject, v33->obj.klass->_1.element_class);
          if ( !gameObject )
            goto LABEL_39;
        }
        if ( v34 >= LODWORD(v33->max_length) )
          goto LABEL_38;
        *(Il2CppClass **)((char *)&v33->obj.klass + i) = (Il2CppClass *)v38;
        sub_1C6B9AC((CGThumbnailListItem_o *)((char *)v33 + i), (int32_t)v38, v36, v37);
        v39 = *p_seSources;
        if ( !*p_seSources )
          break;
        if ( v34 >= LODWORD(v39->max_length) )
          goto LABEL_38;
        gameObject = *(UnityEngine_Object_o **)((char *)&v39->obj.klass + i);
        if ( !gameObject )
          break;
        CriAtomSource__set_use3dPositioning((CriAtomSource_o *)gameObject, 0, 0);
        v33 = *p_seSources;
        if ( !*p_seSources )
          break;
        if ( v34 >= LODWORD(v33->max_length) )
          goto LABEL_38;
        v40 = *(__int64 *)((char *)&v33->obj.klass + i);
        if ( !v40 )
          break;
        *(_BYTE *)(v40 + 156) = 1;
        if ( (signed int)++v34 >= this->fields.seMax )
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

  if ( (byte_4CB5C23 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_SeManager__get_Instance__);
    byte_4CB5C23 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_SeManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v2 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( !v2 )
  {
    if ( !Instance )
      sub_1C6BC60(v2, v3);
    SeManager__InitializePreDelaySettingLocal((SeManager_o *)Instance, v3);
  }
}


void SeManager__InitializePreDelaySettingLocal(SeManager_o *this, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  struct DataMasterBase_array *datalist; // x8
  DataMasterBase_o *v6; // x8
  ConstantStrMaster_o *v7; // x20
  struct System_String_array *ValueStringArray; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  if ( (byte_4CB5C54 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMasterData_ConstantStrMaster___);
    sub_1C6BA08(&Method_DataMasterBase_ConstantStrMaster__ConstantStrEntity__string__isEntityExistsFromId__);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    sub_1C6BA08(&StringLiteral_12027/*"SE_PRE_DELAY_TIME_FOR_MEMORY"*/);
    sub_1C6BA08(&StringLiteral_12028/*"SE_PRE_DELAY_TIME_FOR_STREAM"*/);
    sub_1C6BA08(&StringLiteral_12026/*"SE_IGNORE_PRE_DELAY"*/);
    byte_4CB5C54 = 1;
  }
  this->fields.enablePreDelay = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  datalist = Instance->fields.datalist;
  if ( !datalist )
    goto LABEL_17;
  v6 = datalist->m_Items[5];
  if ( !v6 )
    goto LABEL_17;
  if ( BYTE5(v6[3].fields._MasterName_k__BackingField) )
  {
    this->fields.enablePreDelay = 1;
  }
  else if ( !this->fields.enablePreDelay )
  {
    return;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_ConstantStrMaster___)) == 0 )
  {
LABEL_17:
    sub_1C6BC60(Instance, v4);
  }
  v7 = (ConstantStrMaster_o *)Instance;
  this->fields.preDelayTimeForStream = ConstantStrMaster__GetFloat(
                                         (ConstantStrMaster_o *)Instance,
                                         (System_String_o *)StringLiteral_12028/*"SE_PRE_DELAY_TIME_FOR_STREAM"*/,
                                         this->fields.preDelayTimeForStream,
                                         0);
  this->fields.preDelayTimeForMemory = ConstantStrMaster__GetFloat(
                                         v7,
                                         (System_String_o *)StringLiteral_12027/*"SE_PRE_DELAY_TIME_FOR_MEMORY"*/,
                                         this->fields.preDelayTimeForMemory,
                                         0);
  if ( DataMasterBase_object__object__object___isEntityExistsFromId_54514460(
         (DataMasterBase_TMaster__TEntity__PKType__o *)v7,
         (System_String_o *)StringLiteral_12026/*"SE_IGNORE_PRE_DELAY"*/,
         (const MethodInfo_33FD31C *)Method_DataMasterBase_ConstantStrMaster__ConstantStrEntity__string__isEntityExistsFromId__) )
  {
    ValueStringArray = ConstantStrMaster__GetValueStringArray(v7, (System_String_o *)StringLiteral_12026/*"SE_IGNORE_PRE_DELAY"*/, 0, 0);
    this->fields.ignorePreDelayArray = ValueStringArray;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.ignorePreDelayArray, (int32_t)ValueStringArray, v9, v10);
  }
  if ( this->fields.preDelayTimeForStream <= 0.0 && this->fields.preDelayTimeForMemory <= 0.0 )
    this->fields.enablePreDelay = 0;
}


bool SeManager__IsBusyCommonSe(int32_t kind, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x2

  if ( (byte_4CB5C35 & 1) == 0 )
  {
    sub_1C6BA08(&Method_SingletonMonoBehaviour_SeManager__get_Instance__);
    byte_4CB5C35 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_SeManager__get_Instance__);
  if ( !Instance )
    sub_1C6BC60(0, v4);
  return SeManager__IsBusyCommonSeLocal((SeManager_o *)Instance, kind, v5);
}


// local variable allocation has failed, the output may be wrong!
bool SeManager__IsBusyCommonSeLocal(SeManager_o *this, int32_t kind, const MethodInfo *method)
{
  SeManager_o *v4; // x20
  struct System_String_array *commonSeClipNames; // x8
  System_String_o *v6; // x19

  v4 = this;
  if ( (byte_4CB5C36 & 1) == 0 )
  {
    this = (SeManager_o *)sub_1C6BA08(&SeManager_TypeInfo);
    byte_4CB5C36 = 1;
  }
  commonSeClipNames = v4->fields.commonSeClipNames;
  if ( !commonSeClipNames )
    sub_1C6BC60(this, *(_QWORD *)&kind);
  if ( LODWORD(commonSeClipNames->max_length) <= kind )
    sub_1C6BC68(this);
  v6 = commonSeClipNames->m_Items[kind];
  if ( !SeManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
  return SeManager__IsBusySe(v6, *(const MethodInfo **)&kind);
}


// local variable allocation has failed, the output may be wrong!
bool SeManager__IsBusyLocal(
        SeManager_o *this,
        int32_t seType,
        System_String_o *assetName,
        System_String_o *objectName,
        const MethodInfo *method)
{
  SePlayer_o *SePlayer_41733940; // x0
  const MethodInfo *v10; // x1
  void *workSePlayerStatusList; // x0
  int v12; // w21
  int v13; // w8
  SePlayer_o *v14; // x23
  int32_t v15; // w22
  SePlayer_o *v16; // x23

  if ( (byte_4CB5C5D & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_SePlayer__get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_SePlayer__get_Item__);
    byte_4CB5C5D = 1;
  }
  if ( objectName )
  {
    if ( assetName )
    {
      SePlayer_41733940 = SeManager__GetSePlayer_41733940(this, seType, assetName, objectName, method);
      if ( SePlayer_41733940 )
        LOBYTE(SePlayer_41733940) = SePlayer__get_IsBusy(SePlayer_41733940, v10);
      return (char)SePlayer_41733940;
    }
    workSePlayerStatusList = this->fields.workSePlayerStatusList;
    if ( workSePlayerStatusList )
    {
      v15 = *((_DWORD *)workSePlayerStatusList + 6) - 1;
      if ( v15 >= 0 )
      {
        do
        {
          workSePlayerStatusList = System_Collections_Generic_List_object___get_Item(
                                     (System_Collections_Generic_List_object__o *)workSePlayerStatusList,
                                     v15,
                                     (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_SePlayer__get_Item__);
          if ( !workSePlayerStatusList )
            break;
          v16 = (SePlayer_o *)workSePlayerStatusList;
          if ( *((_DWORD *)workSePlayerStatusList + 4) == seType
            && System_String__op_Equality(*((System_String_o **)workSePlayerStatusList + 4), objectName, 0)
            && SePlayer__get_IsBusy(v16, *(const MethodInfo **)&seType) )
          {
            goto LABEL_35;
          }
          if ( --v15 < 0 )
            goto LABEL_33;
          workSePlayerStatusList = this->fields.workSePlayerStatusList;
        }
        while ( workSePlayerStatusList );
        goto LABEL_32;
      }
LABEL_33:
      LOBYTE(SePlayer_41733940) = 0;
      return (char)SePlayer_41733940;
    }
LABEL_32:
    sub_1C6BC60(workSePlayerStatusList, *(_QWORD *)&seType);
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
                                 (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_SePlayer__get_Item__);
      if ( !workSePlayerStatusList )
        break;
      v14 = (SePlayer_o *)workSePlayerStatusList;
      if ( *((_DWORD *)workSePlayerStatusList + 4) == seType
        && System_String__op_Equality(*((System_String_o **)workSePlayerStatusList + 3), assetName, 0)
        && SePlayer__get_IsBusy(v14, *(const MethodInfo **)&seType) )
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
                               (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_SePlayer__get_Item__);
    if ( !workSePlayerStatusList )
      goto LABEL_32;
    if ( *((_DWORD *)workSePlayerStatusList + 4) == seType
      && SePlayer__get_IsBusy((SePlayer_o *)workSePlayerStatusList, *(const MethodInfo **)&seType) )
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
  LOBYTE(SePlayer_41733940) = 1;
  return (char)SePlayer_41733940;
}


bool SeManager__IsBusySe(System_String_o *name, const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x4

  if ( (byte_4CB5C37 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_SeManager__get_Instance__);
    byte_4CB5C37 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_SeManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( v4 )
    return 0;
  if ( !Instance )
    sub_1C6BC60(v4, v5);
  return SeManager__IsBusyLocal((SeManager_o *)Instance, 0, 0, name, v6);
}


bool SeManager__IsBusyVoice(System_String_o *assetName, System_String_o *objectName, const MethodInfo *method)
{
  Il2CppObject *Instance; // x21
  _BOOL8 v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x4

  if ( (byte_4CB5C38 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_SeManager__get_Instance__);
    byte_4CB5C38 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_SeManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( v6 )
    return 0;
  if ( !Instance )
    sub_1C6BC60(v6, v7);
  return SeManager__IsBusyLocal((SeManager_o *)Instance, 1, assetName, objectName, v8);
}


bool SeManager__IsDownloadFile(System_String_o *pathName, const MethodInfo *method)
{
  SeManager_c *v3; // x0

  if ( (byte_4CB5C27 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Array_IndexOf_string___);
    sub_1C6BA08(&SeManager_TypeInfo);
    byte_4CB5C27 = 1;
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
           (const MethodInfo_3243314 *)Method_System_Array_IndexOf_string___) >= 0;
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
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  int32_t seMax; // w8
  struct SePlayer_array *sePlayerStatusList; // x11
  int32_t v14; // w9
  CGThumbnailListItem_o *m_Items; // x0
  struct System_Action_o *callbackFunc; // x24
  const MethodInfo *v17; // x1

  if ( (byte_4CB5C63 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_SePlayer__RemoveAt__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_SePlayer__get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_SePlayer__get_Item__);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB5C63 = 1;
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
                   (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_SePlayer__get_Item__);
          if ( Item )
          {
            v9 = (SePlayer_o *)Item;
            if ( !SePlayer__get_IsPause((SePlayer_o *)Item, v8) )
            {
              workSePlayerStatusList = (struct System_Collections_Generic_List_SePlayer__o *)SePlayer__Update(
                                                                                               v9,
                                                                                               deltaTime,
                                                                                               v8);
              if ( ((unsigned __int8)workSePlayerStatusList & 1) == 0 )
              {
                seMax = this->fields.seMax;
                if ( seMax >= 1 )
                {
                  sePlayerStatusList = this->fields.sePlayerStatusList;
                  if ( !sePlayerStatusList )
                    goto LABEL_28;
                  v14 = 0;
                  m_Items = (CGThumbnailListItem_o *)sePlayerStatusList->m_Items;
                  while ( 1 )
                  {
                    if ( (unsigned int)v14 >= LODWORD(sePlayerStatusList->max_length) )
                      sub_1C6BC68(m_Items);
                    if ( (SePlayer_o *)m_Items->klass == v9 )
                      break;
                    ++v14;
                    m_Items = (CGThumbnailListItem_o *)((char *)m_Items + 8);
                    if ( v14 >= seMax )
                      goto LABEL_23;
                  }
                  m_Items->klass = 0;
                  sub_1C6B9AC(m_Items, 0, v10, v11);
                }
LABEL_23:
                workSePlayerStatusList = this->fields.workSePlayerStatusList;
                if ( !workSePlayerStatusList )
                  goto LABEL_28;
                System_Collections_Generic_List_object___RemoveAt(
                  (System_Collections_Generic_List_object__o *)workSePlayerStatusList,
                  v6,
                  (const MethodInfo_3802148 *)Method_System_Collections_Generic_List_SePlayer__RemoveAt__);
                callbackFunc = v9->fields.callbackFunc;
                SePlayer__Destroy(v9, v17);
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
              (const MethodInfo_3802148 *)Method_System_Collections_Generic_List_SePlayer__RemoveAt__);
          }
          if ( --v6 < 0 )
            return;
          workSePlayerStatusList = this->fields.workSePlayerStatusList;
          if ( !workSePlayerStatusList )
LABEL_28:
            sub_1C6BC60(workSePlayerStatusList, v8);
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
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  SeManager_c *v7; // x8
  SoundManager_o *v8; // x19
  struct System_String_array *LoadSeList; // x8
  System_String_array *CueList; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v11; // x19
  SeManager___c_c *v12; // x0
  System_Func_object__object__o *_9__31_0; // x20
  Il2CppObject *v14; // x21
  struct SeManager___c_StaticFields *v15; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x0
  System_Object_array *v19; // x0
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  SeManager_c *v22; // x8
  System_Object_array *v23; // x19
  struct SeManager_StaticFields *v24; // x0
  const MethodInfo *v25; // x2
  SeManager_c *v26; // x8
  SoundManager_o *v27; // x19
  struct System_String_array *v28; // x8
  System_String_array *v29; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v30; // x19
  SeManager___c_c *v31; // x0
  System_Func_object__object__o *_9__31_1; // x20
  Il2CppObject *v33; // x21
  struct SeManager___c_StaticFields *v34; // x0
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v37; // x0
  System_Object_array *v38; // x0
  int32_t v39; // w2
  const MethodInfo *v40; // x3
  SeManager_c *v41; // x8
  System_Object_array *v42; // x19
  struct SeManager_StaticFields *v43; // x0
  SeManager_c *v44; // x0

  if ( (byte_4CB5C24 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Linq_Enumerable_Select_string__string___);
    sub_1C6BA08(&Method_System_Linq_Enumerable_ToArray_string___);
    sub_1C6BA08(&System_Func_string__string__TypeInfo);
    sub_1C6BA08(&SeManager_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    sub_1C6BA08(&Method_SeManager___c__LoadEndResidentSeAsset_b__31_0__);
    sub_1C6BA08(&Method_SeManager___c__LoadEndResidentSeAsset_b__31_1__);
    sub_1C6BA08(&SeManager___c_TypeInfo);
    byte_4CB5C24 = 1;
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
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    v7 = SeManager_TypeInfo;
    v8 = (SoundManager_o *)Instance;
    if ( !SeManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
      v7 = SeManager_TypeInfo;
    }
    LoadSeList = v7->static_fields->LoadSeList;
    if ( LoadSeList )
    {
      if ( LODWORD(LoadSeList->max_length) <= 1 )
        goto LABEL_41;
      if ( !v8 )
        goto LABEL_40;
      CueList = SoundManager__GetCueList(v8, LoadSeList->m_Items[1], v6);
      if ( CueList )
      {
        v11 = (System_Collections_Generic_IEnumerable_TSource__o *)CueList;
        v12 = SeManager___c_TypeInfo;
        if ( !SeManager___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SeManager___c_TypeInfo);
          v12 = SeManager___c_TypeInfo;
        }
        _9__31_0 = (System_Func_object__object__o *)v12->static_fields->__9__31_0;
        if ( !_9__31_0 )
        {
          if ( !v12->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v12);
            v12 = SeManager___c_TypeInfo;
          }
          v14 = (Il2CppObject *)v12->static_fields->__9;
          _9__31_0 = (System_Func_object__object__o *)sub_1C6BC54(System_Func_string__string__TypeInfo);
          System_Func_object__object____ctor(_9__31_0, v14, Method_SeManager___c__LoadEndResidentSeAsset_b__31_0__, 0);
          v15 = SeManager___c_TypeInfo->static_fields;
          v15->__9__31_0 = (struct System_Func_string__string__o *)_9__31_0;
          sub_1C6B9AC((CGThumbnailListItem_o *)&v15->__9__31_0, (int32_t)_9__31_0, v16, v17);
        }
        v18 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                                     v11,
                                                                     (System_Func_TSource__TResult__o *)_9__31_0,
                                                                     (const MethodInfo_3171B10 *)Method_System_Linq_Enumerable_Select_string__string___);
        v19 = System_Linq_Enumerable__ToArray_object_(
                v18,
                (const MethodInfo_317B248 *)Method_System_Linq_Enumerable_ToArray_string___);
        v22 = SeManager_TypeInfo;
        v23 = v19;
        if ( !SeManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
          v22 = SeManager_TypeInfo;
        }
        v24 = v22->static_fields;
        v24->seAssetBundleList = (struct System_String_array *)v23;
        sub_1C6B9AC((CGThumbnailListItem_o *)&v24->seAssetBundleList, (int32_t)v23, v20, v21);
      }
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
      v26 = SeManager_TypeInfo;
      v27 = (SoundManager_o *)Instance;
      if ( !SeManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
        v26 = SeManager_TypeInfo;
      }
      v28 = v26->static_fields->LoadSeList;
      if ( !v28 )
        goto LABEL_40;
      if ( !LODWORD(v28->max_length) )
LABEL_41:
        sub_1C6BC68(Instance);
      if ( v27 )
      {
        v29 = SoundManager__GetCueList(v27, v28->m_Items[0], v25);
        if ( v29 )
        {
          v30 = (System_Collections_Generic_IEnumerable_TSource__o *)v29;
          v31 = SeManager___c_TypeInfo;
          if ( !SeManager___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SeManager___c_TypeInfo);
            v31 = SeManager___c_TypeInfo;
          }
          _9__31_1 = (System_Func_object__object__o *)v31->static_fields->__9__31_1;
          if ( !_9__31_1 )
          {
            if ( !v31->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v31);
              v31 = SeManager___c_TypeInfo;
            }
            v33 = (Il2CppObject *)v31->static_fields->__9;
            _9__31_1 = (System_Func_object__object__o *)sub_1C6BC54(System_Func_string__string__TypeInfo);
            System_Func_object__object____ctor(_9__31_1, v33, Method_SeManager___c__LoadEndResidentSeAsset_b__31_1__, 0);
            v34 = SeManager___c_TypeInfo->static_fields;
            v34->__9__31_1 = (struct System_Func_string__string__o *)_9__31_1;
            sub_1C6B9AC((CGThumbnailListItem_o *)&v34->__9__31_1, (int32_t)_9__31_1, v35, v36);
          }
          v37 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                                       v30,
                                                                       (System_Func_TSource__TResult__o *)_9__31_1,
                                                                       (const MethodInfo_3171B10 *)Method_System_Linq_Enumerable_Select_string__string___);
          v38 = System_Linq_Enumerable__ToArray_object_(
                  v37,
                  (const MethodInfo_317B248 *)Method_System_Linq_Enumerable_ToArray_string___);
          v41 = SeManager_TypeInfo;
          v42 = v38;
          if ( !SeManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
            v41 = SeManager_TypeInfo;
          }
          v43 = v41->static_fields;
          v43->residentSeAssetBundleList = (struct System_String_array *)v42;
          sub_1C6B9AC((CGThumbnailListItem_o *)&v43->residentSeAssetBundleList, (int32_t)v42, v39, v40);
        }
        v44 = SeManager_TypeInfo;
        if ( !SeManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
          v44 = SeManager_TypeInfo;
        }
        v44->static_fields->IsBusy = 0;
        return;
      }
    }
LABEL_40:
    sub_1C6BC60(Instance, v5);
  }
}


void SeManager__LoadSe(System_String_o *name, System_Action_o *callbackFunc, const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  _BOOL8 v5; // x0
  __int64 v6; // x1

  if ( (byte_4CB5C39 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_SeManager__get_Instance__);
    byte_4CB5C39 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_SeManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( !v5 )
  {
    if ( !Instance )
      sub_1C6BC60(v5, v6);
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
  __int64 v5; // x1
  const MethodInfo *v6; // x3

  if ( (byte_4CB5C50 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_SeManager__get_Instance__);
    byte_4CB5C50 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_SeManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( !v4 )
  {
    if ( !Instance )
      sub_1C6BC60(v4, v5);
    SeManager__PauseSeLocal((SeManager_o *)Instance, isPause, 0, v6);
  }
}


void SeManager__PauseSeLocal(SeManager_o *this, bool isPause, int32_t seType, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *workSePlayerStatusList; // x0
  int32_t v8; // w21
  bool v9; // w22
  SePlayer_o *Item; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_4CB5C52 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_SePlayer__get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_SePlayer__get_Item__);
    byte_4CB5C52 = 1;
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
                               (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_SePlayer__get_Item__);
        if ( Item && Item->fields.seType == seType )
          SePlayer__SetPause(Item, v9, v12);
        if ( --v8 < 0 )
          break;
        workSePlayerStatusList = (System_Collections_Generic_List_object__o *)this->fields.workSePlayerStatusList;
        if ( !workSePlayerStatusList )
          sub_1C6BC60(0, v11);
      }
    }
  }
}


void SeManager__PauseVoice(bool isPause, const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x3

  if ( (byte_4CB5C51 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_SeManager__get_Instance__);
    byte_4CB5C51 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_SeManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( !v4 )
  {
    if ( !Instance )
      sub_1C6BC60(v4, v5);
    SeManager__PauseSeLocal((SeManager_o *)Instance, isPause, 1, v6);
  }
}


void SeManager__PlayCommonSe(int32_t kind, bool ignorePreDelay, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x3

  if ( (byte_4CB5C31 & 1) == 0 )
  {
    sub_1C6BA08(&Method_SingletonMonoBehaviour_SeManager__get_Instance__);
    byte_4CB5C31 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_SeManager__get_Instance__);
  if ( !Instance )
    sub_1C6BC60(0, v6);
  SeManager__PlayCommonSeLocal((SeManager_o *)Instance, kind, ignorePreDelay, v7);
}


// local variable allocation has failed, the output may be wrong!
void SeManager__PlayCommonSeLocal(SeManager_o *this, int32_t kind, bool ignorePreDelay, const MethodInfo *method)
{
  const MethodInfo *v4; // x4
  SeManager_o *v7; // x21
  struct System_String_array *commonSeClipNames; // x8
  System_String_o *v9; // x20
  SeManager_c *v10; // x0

  v7 = this;
  if ( (byte_4CB5C34 & 1) == 0 )
  {
    this = (SeManager_o *)sub_1C6BA08(&SeManager_TypeInfo);
    byte_4CB5C34 = 1;
  }
  commonSeClipNames = v7->fields.commonSeClipNames;
  if ( !commonSeClipNames )
    sub_1C6BC60(this, *(_QWORD *)&kind);
  if ( LODWORD(commonSeClipNames->max_length) <= kind )
    sub_1C6BC68(this);
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

  if ( (byte_4CB5C33 & 1) == 0 )
  {
    sub_1C6BA08(&SeManager__PlayCommonSeWithDelay_d__50_TypeInfo);
    byte_4CB5C33 = 1;
  }
  v9 = ignorePreDelay;
  v10 = sub_1C6BC54(SeManager__PlayCommonSeWithDelay_d__50_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0);
  *(_DWORD *)(v10 + 16) = 0;
  *(_DWORD *)(v10 + 40) = kind;
  *(float *)(v10 + 36) = delay;
  *(_DWORD *)(v10 + 32) = waitFrameCount;
  *(_BYTE *)(v10 + 44) = v9;
  return (System_Collections_IEnumerator_o *)v10;
}


void SeManager__PlayCommonSe_41722512(
        int32_t kind,
        float delayTime,
        int32_t waitFrameCount,
        bool ignorePreDelay,
        const MethodInfo *method)
{
  const MethodInfo *v9; // x3
  Il2CppObject *Instance; // x22
  System_Collections_IEnumerator_o *v11; // x0
  __int64 v12; // x1

  if ( (byte_4CB5C32 & 1) == 0 )
  {
    sub_1C6BA08(&SeManager_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_SeManager__get_Instance__);
    byte_4CB5C32 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_SeManager__get_Instance__);
  if ( !SeManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
  v11 = SeManager__PlayCommonSeWithDelay(kind, delayTime, waitFrameCount, ignorePreDelay, v9);
  if ( !Instance )
    sub_1C6BC60(v11, v12);
  UnityEngine_MonoBehaviour__StartCoroutine_71644868((UnityEngine_MonoBehaviour_o *)Instance, v11, 0);
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
  __int64 v24; // x1
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  System_Collections_Generic_List_object__o *workSePlayerStatusList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v29; // x9
  __int64 size; // x10
  Il2CppClass **v31; // x8
  const MethodInfo *v33; // [xsp+10h] [xbp-80h]

  if ( (byte_4CB5C5E & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_SePlayer__Add__);
    sub_1C6BA08(&SePlayer_TypeInfo);
    byte_4CB5C5E = 1;
  }
  v21 = this->fields.sePlayNum + 1;
  this->fields.sePlayNum = v21;
  v22 = (SePlayer_o *)sub_1C6BC54(SePlayer_TypeInfo);
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
    v33);
  workSePlayerStatusList = (System_Collections_Generic_List_object__o *)this->fields.workSePlayerStatusList;
  if ( workSePlayerStatusList )
  {
    items = workSePlayerStatusList->fields._items;
    v29 = Method_System_Collections_Generic_List_SePlayer__Add__;
    ++workSePlayerStatusList->fields._version;
    if ( !items )
      sub_1C6BC60(workSePlayerStatusList, v24);
    size = workSePlayerStatusList->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        workSePlayerStatusList,
        (Il2CppObject *)v22,
        *(const MethodInfo_3800974 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
    }
    else
    {
      v31 = &items->obj.klass + size;
      workSePlayerStatusList->fields._size = size + 1;
      v31[4] = (Il2CppClass *)v22;
      sub_1C6B9AC((CGThumbnailListItem_o *)(v31 + 4), (int32_t)v22, v25, v26);
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
  __int64 v15; // x1
  const MethodInfo *v16; // x7

  if ( (byte_4CB5C3B & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_SeManager__get_Instance__);
    byte_4CB5C3B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_SeManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v14 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( v14 )
    return 0;
  if ( !Instance )
    sub_1C6BC60(v14, v15);
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
           v16);
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
  __int64 v21; // x1
  const MethodInfo *v22; // x2
  System_String_o *CueSheet; // x0
  System_String_o *v24; // x28
  SePlayer_o *v25; // x27
  int32_t v26; // w3
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  intptr_t m_CachedPtr; // x8
  _QWORD *v30; // x9
  __int64 m_CancellationTokenSource_low; // x10
  intptr_t v32; // x8
  SeManager_c *v33; // x8
  struct SeManager_StaticFields *static_fields; // x9
  System_Object_array *residentSeAssetBundleList; // x27
  Il2CppObject *v36; // x0
  struct System_String_array *LoadSeList; // x8
  struct SeManager_StaticFields *v38; // x9
  System_Object_array *seAssetBundleList; // x27
  Il2CppObject *v40; // x0
  __int64 v41; // x8
  const MethodInfo *v43; // [xsp+10h] [xbp-80h]

  if ( (byte_4CB5C60 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Array_IndexOf_string___);
    sub_1C6BA08(&Method_System_Collections_Generic_List_SePlayer__Add__);
    sub_1C6BA08(&SeManager_TypeInfo);
    sub_1C6BA08(&SePlayer_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    sub_1C6BA08(&StringLiteral_11368/*"ResidentSE/"*/);
    sub_1C6BA08(&StringLiteral_12658/*"Se/"*/);
    byte_4CB5C60 = 1;
  }
  v19 = this->fields.sePlayNum + 1;
  this->fields.sePlayNum = v19;
  Instance = (SoundManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  CueSheet = SoundManager__GetCueSheet(Instance, name, v22);
  if ( !CueSheet )
  {
    v33 = SeManager_TypeInfo;
    if ( !SeManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
      v33 = SeManager_TypeInfo;
    }
    static_fields = v33->static_fields;
    if ( !static_fields->residentSeAssetBundleList )
      goto LABEL_39;
    if ( !v33->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v33);
      static_fields = SeManager_TypeInfo->static_fields;
    }
    residentSeAssetBundleList = (System_Object_array *)static_fields->residentSeAssetBundleList;
    v36 = (Il2CppObject *)System_String__Concat_63966792((System_String_o *)StringLiteral_11368/*"ResidentSE/"*/, name, 0);
    Instance = (SoundManager_o *)System_Array__IndexOf_object_(
                                   residentSeAssetBundleList,
                                   v36,
                                   (const MethodInfo_3243314 *)Method_System_Array_IndexOf_string___);
    v33 = SeManager_TypeInfo;
    if ( ((unsigned int)Instance & 0x80000000) != 0 )
    {
LABEL_39:
      if ( !v33->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v33);
        v33 = SeManager_TypeInfo;
      }
      v38 = v33->static_fields;
      if ( !v38->seAssetBundleList )
        return 0;
      if ( !v33->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v33);
        v38 = SeManager_TypeInfo->static_fields;
      }
      seAssetBundleList = (System_Object_array *)v38->seAssetBundleList;
      v40 = (Il2CppObject *)System_String__Concat_63966792((System_String_o *)StringLiteral_12658/*"Se/"*/, name, 0);
      if ( System_Array__IndexOf_object_(
             seAssetBundleList,
             v40,
             (const MethodInfo_3243314 *)Method_System_Array_IndexOf_string___) < 0 )
        return 0;
      Instance = (SoundManager_o *)SeManager_TypeInfo;
      if ( !SeManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
        Instance = (SoundManager_o *)SeManager_TypeInfo;
      }
      v41 = *(_QWORD *)Instance[2].monitor;
      if ( v41 )
      {
        if ( *(_DWORD *)(v41 + 24) > 1u )
        {
          v24 = *(System_String_o **)(v41 + 40);
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
        v33 = SeManager_TypeInfo;
      }
      LoadSeList = v33->static_fields->LoadSeList;
      if ( LoadSeList )
      {
        if ( LODWORD(LoadSeList->max_length) )
        {
          v24 = LoadSeList->m_Items[0];
          goto LABEL_6;
        }
LABEL_36:
        sub_1C6BC68(Instance);
      }
    }
LABEL_35:
    sub_1C6BC60(Instance, v21);
  }
  v24 = CueSheet;
LABEL_6:
  v25 = (SePlayer_o *)sub_1C6BC54(SePlayer_TypeInfo);
  SePlayer___ctor(
    v25,
    v19,
    seType,
    v26,
    v24,
    name,
    volume,
    isLoop,
    fadeinTime,
    callbackFunc,
    notOverwrite,
    ignorePreDelay,
    v43);
  Instance = (SoundManager_o *)this->fields.workSePlayerStatusList;
  if ( !Instance )
    goto LABEL_35;
  m_CachedPtr = Instance->fields.m_CachedPtr;
  v30 = Method_System_Collections_Generic_List_SePlayer__Add__;
  ++HIDWORD(Instance->fields.m_CancellationTokenSource);
  if ( !m_CachedPtr )
    goto LABEL_35;
  m_CancellationTokenSource_low = SLODWORD(Instance->fields.m_CancellationTokenSource);
  if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)Instance,
      (Il2CppObject *)v25,
      *(const MethodInfo_3800974 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
  }
  else
  {
    v32 = m_CachedPtr + 8 * m_CancellationTokenSource_low;
    LODWORD(Instance->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
    *(_QWORD *)(v32 + 32) = v25;
    sub_1C6B9AC((CGThumbnailListItem_o *)(v32 + 32), (int32_t)v25, v27, v28);
  }
  return v25;
}


SePlayer_o *SeManager__PlaySeLocal_41725604(
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
  __int64 v11; // x1
  const MethodInfo *v12; // x7

  if ( (byte_4CB5C3E & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_SeManager__get_Instance__);
    byte_4CB5C3E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_SeManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v10 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( v10 )
    return 0;
  if ( !Instance )
    sub_1C6BC60(v10, v11);
  return SeManager__PlaySeLocal((SeManager_o *)Instance, 0, name, volume, 1, fadeinTime, 0, 0, ignorePreDelay, v12);
}


SePlayer_o *SeManager__PlaySeLoop_41726160(
        System_String_o *assetName,
        System_String_o *objectName,
        float volume,
        float fadeinTime,
        bool ignorePreDelay,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x22
  _BOOL8 v12; // x0
  __int64 v13; // x1
  const MethodInfo *v15; // [xsp+8h] [xbp-58h]

  if ( (byte_4CB5C3F & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_SeManager__get_Instance__);
    byte_4CB5C3F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_SeManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v12 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( v12 )
    return 0;
  if ( !Instance )
    sub_1C6BC60(v12, v13);
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
           v15);
}


SePlayer_o *SeManager__PlaySeLoop_41726412(
        AssetData_o *assetData,
        System_String_o *objectName,
        float volume,
        float fadeinTime,
        bool ignorePreDelay,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x22
  _BOOL8 v12; // x0
  __int64 v13; // x1
  const MethodInfo *v15; // [xsp+8h] [xbp-58h]

  if ( (byte_4CB5C40 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_SeManager__get_Instance__);
    byte_4CB5C40 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_SeManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v12 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( v12 )
    return 0;
  if ( !assetData || !Instance )
    sub_1C6BC60(v12, v13);
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
           v15);
}


SePlayer_o *SeManager__PlaySe_41725336(
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
  __int64 v17; // x1
  const MethodInfo *v19; // [xsp+8h] [xbp-68h]

  if ( (byte_4CB5C3C & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_SeManager__get_Instance__);
    byte_4CB5C3C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_SeManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v16 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( v16 )
    return 0;
  if ( !Instance )
    sub_1C6BC60(v16, v17);
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
           v19);
}


SePlayer_o *SeManager__PlaySe_41725668(
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
  __int64 v15; // x1
  const MethodInfo *v17; // [xsp+8h] [xbp-58h]

  if ( (byte_4CB5C3D & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_SeManager__get_Instance__);
    byte_4CB5C3D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_SeManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v14 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( v14 )
    return 0;
  if ( !assetData || !Instance )
    sub_1C6BC60(v14, v15);
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
           v17);
}


CriAtomSource_o *SeManager__PlaySystemSe(int32_t kind, bool ignorePreDelay, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x3

  if ( (byte_4CB5C2F & 1) == 0 )
  {
    sub_1C6BA08(&Method_SingletonMonoBehaviour_SeManager__get_Instance__);
    byte_4CB5C2F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_SeManager__get_Instance__);
  if ( !Instance )
    sub_1C6BC60(0, v6);
  return SeManager__PlaySystemSeLocal((SeManager_o *)Instance, kind, ignorePreDelay, v7);
}


// local variable allocation has failed, the output may be wrong!
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
  if ( (byte_4CB5C57 & 1) == 0 )
  {
    sub_1C6BA08(&SeManager_TypeInfo);
    this = (SeManager_o *)sub_1C6BA08(&SoundManager_TypeInfo);
    byte_4CB5C57 = 1;
  }
  systemSeSources = v6->fields.systemSeSources;
  if ( !systemSeSources )
    goto LABEL_36;
  systemSeIdx = v6->fields.systemSeIdx;
  if ( (unsigned int)systemSeIdx >= LODWORD(systemSeSources->max_length) )
LABEL_37:
    sub_1C6BC68(this);
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
  if ( !byte_4CB5CFC )
  {
    sub_1C6BA08(&SeManager_TypeInfo);
    byte_4CB5CFC = 1;
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
        sub_1C6B9AC((CGThumbnailListItem_o *)&v9->fields._cueSheet, (int32_t)v14, ignorePreDelay, method);
        v9->fields._cueName = v13;
        sub_1C6B9AC((CGThumbnailListItem_o *)&v9->fields._cueName, (int32_t)v13, v15, v16);
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
      sub_1C6BC60(this, *(_QWORD *)&kind);
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
  __int64 v11; // x1
  const MethodInfo *v12; // x7

  if ( (byte_4CB5C41 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_SeManager__get_Instance__);
    byte_4CB5C41 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_SeManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v10 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( v10 )
    return 0;
  if ( !Instance )
    sub_1C6BC60(v10, v11);
  return SeManager__PlaySeLocal((SeManager_o *)Instance, 1, name, volume, 0, 0.0, callbackFunc, 0, ignorePreDelay, v12);
}


SePlayer_o *SeManager__PlayVoice_41726912(
        System_String_o *assetName,
        System_String_o *objectName,
        float volume,
        System_Action_o *callbackFunc,
        bool ignorePreDelay,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x23
  _BOOL8 v12; // x0
  __int64 v13; // x1
  const MethodInfo *v15; // [xsp+8h] [xbp-58h]

  if ( (byte_4CB5C42 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_SeManager__get_Instance__);
    byte_4CB5C42 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_SeManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v12 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( v12 )
    return 0;
  if ( !Instance )
    sub_1C6BC60(v12, v13);
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
           v15);
}


SePlayer_o *SeManager__PlayVoice_41727164(
        AssetData_o *assetData,
        System_String_o *objectName,
        float volume,
        System_Action_o *callbackFunc,
        bool ignorePreDelay,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x23
  _BOOL8 v12; // x0
  __int64 v13; // x1
  const MethodInfo *v15; // [xsp+8h] [xbp-58h]

  if ( (byte_4CB5C43 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_SeManager__get_Instance__);
    byte_4CB5C43 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_SeManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v12 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( v12 )
    return 0;
  if ( !assetData || !Instance )
    sub_1C6BC60(v12, v13);
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
           v15);
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
  sub_1C6B9AC((CGThumbnailListItem_o *)((char *)sePlayerStatusList + i), 0, (int32_t)method, v3);
  seSources = v6->fields.seSources;
  if ( !seSources )
    goto LABEL_13;
  if ( v7 >= LODWORD(seSources->max_length) )
LABEL_12:
    sub_1C6BC68(this);
  this = *(SeManager_o **)((char *)&seSources->obj.klass + i);
  if ( !this )
LABEL_13:
    sub_1C6BC60(this, player);
  CriAtomSource__Stop((CriAtomSource_o *)this, 0);
  return 1;
}


void SeManager__ReleaseSe(System_String_o *name, const MethodInfo *method)
{
  Il2CppObject *Instance; // x19
  _BOOL8 v3; // x0
  __int64 v4; // x1

  if ( (byte_4CB5C3A & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_SeManager__get_Instance__);
    byte_4CB5C3A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_SeManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v3 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( !Instance && !v3 )
    sub_1C6BC60(v3, v4);
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

  if ( (byte_4CB5C28 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_SeManager__get_Instance__);
    byte_4CB5C28 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_SeManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v2 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( !v2 )
  {
    if ( !Instance )
      sub_1C6BC60(v2, v3);
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

  if ( (byte_4CB5C2D & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&SeManager_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_SeManager__get_Instance__);
    byte_4CB5C2D = 1;
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
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_SeManager__get_Instance__);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
    if ( !v6 )
    {
      if ( !Instance )
        sub_1C6BC60(v6, v7);
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

  if ( (byte_4CB5C2A & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&SeManager_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_SeManager__get_Instance__);
    byte_4CB5C2A = 1;
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
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_SeManager__get_Instance__);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
    if ( !v7 )
    {
      if ( !Instance )
        sub_1C6BC60(v7, v8);
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

  if ( (byte_4CB5C55 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_SePlayer__get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_SePlayer__get_Item__);
    sub_1C6BA08(&SeManager_TypeInfo);
    byte_4CB5C55 = 1;
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
        sub_1C6BC68(workSePlayerStatusList);
      SeManager__StopLocal(workSePlayerStatusList, systemSeSources->m_Items[v5++], v2);
      if ( (__int64)v5 >= this->fields.SYSTEM_SE_MAX )
        goto LABEL_11;
    }
LABEL_16:
    sub_1C6BC60(workSePlayerStatusList, method);
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
                                                  (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_SePlayer__get_Item__);
        if ( !workSePlayerStatusList )
          break;
        SePlayer__MuteSe((SePlayer_o *)workSePlayerStatusList, method);
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
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  SePlayer_o *SePlayer_41733348; // x0

  if ( (byte_4CB5C4E & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_SeManager__get_Instance__);
    byte_4CB5C4E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_SeManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( !v6 )
  {
    if ( !Instance )
      sub_1C6BC60(v6, v7);
    SePlayer_41733348 = SeManager__GetSePlayer_41733348((SeManager_o *)Instance, name, v8);
    if ( SePlayer_41733348 )
    {
      SePlayer_41733348->fields.pitchValue = pitch;
      SePlayer_41733348->fields.changePitchRequest = 1;
    }
  }
}


void SeManager__SetPitchSeLocal(SeManager_o *this, System_String_o *name, float pitch, const MethodInfo *method)
{
  SePlayer_o *SePlayer_41733348; // x0

  SePlayer_41733348 = SeManager__GetSePlayer_41733348(this, name, method);
  if ( SePlayer_41733348 )
  {
    SePlayer_41733348->fields.pitchValue = pitch;
    SePlayer_41733348->fields.changePitchRequest = 1;
  }
}


void SeManager__SetVoiceMasterVolume(float volume, const MethodInfo *method)
{
  SeManager_c *v3; // x0
  struct SeManager_StaticFields *static_fields; // x8
  Il2CppObject *Instance; // x19
  _BOOL8 v6; // x0
  const MethodInfo *v7; // x1

  if ( (byte_4CB5C2E & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&SeManager_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_SeManager__get_Instance__);
    byte_4CB5C2E = 1;
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
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_SeManager__get_Instance__);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
    if ( !v6 )
    {
      if ( !Instance )
        sub_1C6BC60(v6, v7);
      SeManager__SetMuteLocal((SeManager_o *)Instance, v7);
    }
  }
}


void SeManager__StopLocal(SeManager_o *this, CriAtomSource_o *player, const MethodInfo *method)
{
  _BOOL8 v4; // x0
  __int64 v5; // x1

  if ( (byte_4CB5C5F & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB5C5F = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)player, 0, 0);
  if ( v4 )
  {
    if ( !player )
      sub_1C6BC60(v4, v5);
    if ( CriAtomSource__get_status(player, 0) == 2 )
      CriAtomSource__Stop(player, 0);
  }
}


void SeManager__StopSe(int32_t num, float fadeoutTime, const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  _BOOL8 v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2

  if ( (byte_4CB5C44 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_SeManager__get_Instance__);
    byte_4CB5C44 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_SeManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( !v6 )
  {
    if ( !Instance )
      sub_1C6BC60(v6, v7);
    SeManager__StopSeLocal((SeManager_o *)Instance, num, fadeoutTime, v8);
  }
}


void SeManager__StopSeAll(float fadeoutTime, const MethodInfo *method)
{
  Il2CppObject *Instance; // x19
  _BOOL8 v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_4CB5C4A & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_SeManager__get_Instance__);
    byte_4CB5C4A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_SeManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( !v4 )
  {
    if ( !Instance )
      sub_1C6BC60(v4, v5);
    SeManager__StopSeAllLocal((SeManager_o *)Instance, fadeoutTime, v5);
  }
}


void SeManager__StopSeAllLocal(SeManager_o *this, float fadeoutTime, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *workSePlayerStatusList; // x0
  int32_t v6; // w20

  if ( (byte_4CB5C61 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_SePlayer__get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_SePlayer__get_Item__);
    byte_4CB5C61 = 1;
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
                                                                              (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_SePlayer__get_Item__);
      if ( !workSePlayerStatusList )
        break;
      SePlayer__StopSe((SePlayer_o *)workSePlayerStatusList, fadeoutTime, method);
      if ( --v6 < 0 )
        return;
      workSePlayerStatusList = (System_Collections_Generic_List_object__o *)this->fields.workSePlayerStatusList;
    }
    while ( workSePlayerStatusList );
LABEL_8:
    sub_1C6BC60(workSePlayerStatusList, method);
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


void SeManager__StopSeLocal_41727860(
        SeManager_o *this,
        System_String_o *name,
        float fadeoutTime,
        const MethodInfo *method)
{
  SePlayer_o *SePlayer_41733348; // x0
  const MethodInfo *v6; // x1

  SePlayer_41733348 = SeManager__GetSePlayer_41733348(this, name, method);
  if ( SePlayer_41733348 )
    SePlayer__StopSe(SePlayer_41733348, fadeoutTime, v6);
}


void SeManager__StopSeLocal_41728112(
        SeManager_o *this,
        System_String_o *assetName,
        System_String_o *objectName,
        float fadeoutTime,
        const MethodInfo *method)
{
  SePlayer_o *SePlayer_41733524; // x0
  const MethodInfo *v7; // x1

  SePlayer_41733524 = SeManager__GetSePlayer_41733524(this, assetName, objectName, method);
  if ( SePlayer_41733524 )
    SePlayer__StopSe(SePlayer_41733524, fadeoutTime, v7);
}


void SeManager__StopSe_41727664(System_String_o *name, float fadeoutTime, const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  _BOOL8 v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2

  if ( (byte_4CB5C45 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_SeManager__get_Instance__);
    byte_4CB5C45 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_SeManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( !v6 )
  {
    if ( !Instance )
      sub_1C6BC60(v6, v7);
    SeManager__StopSeLocal_41727860((SeManager_o *)Instance, name, fadeoutTime, v8);
  }
}


void SeManager__StopSe_41727908(
        System_String_o *assetName,
        System_String_o *objectName,
        float fadeoutTime,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x21
  _BOOL8 v8; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x3

  if ( (byte_4CB5C46 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_SeManager__get_Instance__);
    byte_4CB5C46 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_SeManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v8 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( !v8 )
  {
    if ( !Instance )
      sub_1C6BC60(v8, v9);
    SeManager__StopSeLocal_41728112((SeManager_o *)Instance, assetName, objectName, fadeoutTime, v10);
  }
}


void SeManager__StopSe_41728160(
        System_String_o *assetName,
        System_String_o *objectName,
        float volume,
        float fadeTime,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x21
  _BOOL8 v10; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x3

  if ( (byte_4CB5C47 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_SeManager__get_Instance__);
    byte_4CB5C47 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_SeManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v10 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( !v10 )
  {
    if ( !Instance )
      sub_1C6BC60(v10, v11);
    SeManager__ChangeVolumeSeLocal_41728372((SeManager_o *)Instance, assetName, objectName, volume, fadeTime, v12);
  }
}


void SeManager__StopSystemSe(const MethodInfo *method)
{
  Il2CppObject *Instance; // x19
  _BOOL8 v2; // x0
  const MethodInfo *v3; // x1

  if ( (byte_4CB5C48 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_SeManager__get_Instance__);
    byte_4CB5C48 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_SeManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v2 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( !v2 )
  {
    if ( !Instance )
      sub_1C6BC60(v2, v3);
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
        sub_1C6BC68(this);
      this = (SeManager_o *)systemSeSources->m_Items[v3];
      if ( !this )
LABEL_8:
        sub_1C6BC60(this, method);
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
  __int64 v9; // x1
  const MethodInfo *v10; // x3

  if ( (byte_4CB5C49 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_SeManager__get_Instance__);
    byte_4CB5C49 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_SeManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v8 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( !v8 )
  {
    if ( !Instance )
      sub_1C6BC60(v8, v9);
    SeManager__StopVoiceLocal((SeManager_o *)Instance, assetName, objectName, fadeoutTime, v10);
  }
}


void SeManager__StopVoiceAll(float fadeoutTime, const MethodInfo *method)
{
  Il2CppObject *Instance; // x19
  _BOOL8 v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_4CB5C4B & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_SeManager__get_Instance__);
    byte_4CB5C4B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_SeManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( !v4 )
  {
    if ( !Instance )
      sub_1C6BC60(v4, v5);
    SeManager__StopVoiceAllLocal((SeManager_o *)Instance, fadeoutTime, v5);
  }
}


void SeManager__StopVoiceAllLocal(SeManager_o *this, float fadeoutTime, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *workSePlayerStatusList; // x0
  int32_t v6; // w20

  if ( (byte_4CB5C62 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_SePlayer__get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_SePlayer__get_Item__);
    byte_4CB5C62 = 1;
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
                                                                              (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_SePlayer__get_Item__);
      if ( !workSePlayerStatusList )
        break;
      if ( LODWORD(workSePlayerStatusList->fields._items) == 1 )
        SePlayer__StopSe((SePlayer_o *)workSePlayerStatusList, fadeoutTime, method);
      if ( --v6 < 0 )
        return;
      workSePlayerStatusList = (System_Collections_Generic_List_object__o *)this->fields.workSePlayerStatusList;
    }
    while ( workSePlayerStatusList );
LABEL_10:
    sub_1C6BC60(workSePlayerStatusList, method);
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
  SePlayer_o *SePlayer_41733940; // x0
  const MethodInfo *v8; // x1

  SePlayer_41733940 = SeManager__GetSePlayer_41733940(this, 1, assetName, objectName, v5);
  if ( SePlayer_41733940 )
    SePlayer__StopSe(SePlayer_41733940, fadeoutTime, v8);
}


System_String_array *SeManager__getLoadSeNameList(const MethodInfo *method)
{
  SeManager_c *v1; // x0

  if ( (byte_4CB5C25 & 1) == 0 )
  {
    sub_1C6BA08(&SeManager_TypeInfo);
    byte_4CB5C25 = 1;
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

  if ( (byte_4CB5C29 & 1) == 0 )
  {
    sub_1C6BA08(&SeManager_TypeInfo);
    byte_4CB5C29 = 1;
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

  if ( (byte_4CB5C2C & 1) == 0 )
  {
    sub_1C6BA08(&SeManager_TypeInfo);
    byte_4CB5C2C = 1;
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

  if ( (byte_4CB5C2B & 1) == 0 )
  {
    sub_1C6BA08(&SeManager_TypeInfo);
    byte_4CB5C2B = 1;
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

  if ( (byte_4CB5C69 & 1) == 0 )
  {
    sub_1C6BA08(&SeManager_TypeInfo);
    sub_1C6BA08(&UnityEngine_WaitForSeconds_TypeInfo);
    byte_4CB5C69 = 1;
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
    v12 = (UnityEngine_WaitForSeconds_o *)sub_1C6BC54(UnityEngine_WaitForSeconds_TypeInfo);
    UnityEngine_WaitForSeconds___ctor(v12, delay, 0);
    this->fields.__2__current = (Il2CppObject *)v12;
    p__2__current = &this->fields.__2__current;
    sub_1C6B9AC((CGThumbnailListItem_o *)p__2__current, (int32_t)v12, v14, v15);
    *((_DWORD *)p__2__current - 2) = 2;
    return 1;
  }
  else
  {
    this->fields.__2__current = 0;
    v10 = &this->fields.__2__current;
    sub_1C6B9AC((CGThumbnailListItem_o *)v10, 0, (int32_t)v2, v3);
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

  v2 = sub_1C6BA1C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C6BC54(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C6BA1C(&Method_SeManager__PlayCommonSeWithDelay_d__50_System_Collections_IEnumerator_Reset__);
  sub_1C6BB30(v3, v4);
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

  if ( (byte_4CB5C66 & 1) == 0 )
  {
    sub_1C6BA08(&SeManager___c_TypeInfo);
    byte_4CB5C66 = 1;
  }
  v1 = (Il2CppObject *)sub_1C6BC54(SeManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  SeManager___c_TypeInfo->static_fields->__9 = (struct SeManager___c_o *)v1;
  sub_1C6B9AC((CGThumbnailListItem_o *)SeManager___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
  if ( (byte_4CB5C67 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_12658/*"Se/"*/);
    byte_4CB5C67 = 1;
  }
  return System_String__Concat_63966792((System_String_o *)StringLiteral_12658/*"Se/"*/, str, 0);
}


System_String_o *SeManager___c___LoadEndResidentSeAsset_b__31_1(
        SeManager___c_o *this,
        System_String_o *str,
        const MethodInfo *method)
{
  if ( (byte_4CB5C68 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_11368/*"ResidentSE/"*/);
    byte_4CB5C68 = 1;
  }
  return System_String__Concat_63966792((System_String_o *)StringLiteral_11368/*"ResidentSE/"*/, str, 0);
}