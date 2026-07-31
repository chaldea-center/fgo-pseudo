void SoundTestMenu___cctor(const MethodInfo *method)
{
  __int64 v1; // x0
  __int64 v2; // x1
  System_String_o *v3; // x2
  System_String_o *v4; // x3
  int32_t v5; // w4
  int32_t v6; // w5
  bool v7; // w6
  bool v8; // w7
  __int64 v9; // x19
  int32_t v10; // w1
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  int32_t v17; // w1
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  int32_t v24; // w1
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  int32_t v31; // w1
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7
  int32_t v38; // w1
  System_String_o *v39; // x2
  System_String_o *v40; // x3
  int32_t v41; // w4
  int32_t v42; // w5
  bool v43; // w6
  bool v44; // w7
  int32_t v45; // w1
  System_String_o *v46; // x2
  System_String_o *v47; // x3
  int32_t v48; // w4
  int32_t v49; // w5
  bool v50; // w6
  bool v51; // w7
  int32_t v52; // w1
  System_String_o *v53; // x2
  System_String_o *v54; // x3
  int32_t v55; // w4
  int32_t v56; // w5
  bool v57; // w6
  bool v58; // w7
  int32_t v59; // w1
  System_String_o *v60; // x2
  System_String_o *v61; // x3
  int32_t v62; // w4
  int32_t v63; // w5
  bool v64; // w6
  bool v65; // w7
  int32_t v66; // w1
  System_String_o *v67; // x2
  System_String_o *v68; // x3
  int32_t v69; // w4
  int32_t v70; // w5
  bool v71; // w6
  bool v72; // w7
  int32_t v73; // w1
  System_String_o *v74; // x2
  System_String_o *v75; // x3
  int32_t v76; // w4
  int32_t v77; // w5
  bool v78; // w6
  bool v79; // w7
  System_String_o *v80; // x2
  System_String_o *v81; // x3
  int32_t v82; // w4
  int32_t v83; // w5
  bool v84; // w6
  bool v85; // w7
  __int64 v86; // x19
  int32_t v87; // w1
  System_String_o *v88; // x2
  System_String_o *v89; // x3
  int32_t v90; // w4
  int32_t v91; // w5
  bool v92; // w6
  bool v93; // w7
  int32_t v94; // w1
  System_String_o *v95; // x2
  System_String_o *v96; // x3
  int32_t v97; // w4
  int32_t v98; // w5
  bool v99; // w6
  bool v100; // w7
  int32_t v101; // w1
  struct SoundTestMenu_StaticFields *static_fields; // x0
  System_String_o *v103; // x2
  System_String_o *v104; // x3
  int32_t v105; // w4
  int32_t v106; // w5
  bool v107; // w6
  bool v108; // w7

  if ( (byte_5935CA3 & 1) == 0 )
  {
    sub_21FFC50(&SoundTestMenu_TypeInfo);
    sub_21FFC50(&string___TypeInfo);
    sub_21FFC50(&StringLiteral_12515/*"SE_"*/);
    sub_21FFC50(&StringLiteral_9898/*"NoblePhantasm_"*/);
    sub_21FFC50(&StringLiteral_26835/*"昇順"*/);
    sub_21FFC50(&StringLiteral_11996/*"SE"*/);
    sub_21FFC50(&StringLiteral_4588/*"ChrVoice_"*/);
    sub_21FFC50(&StringLiteral_13274/*"Servants_"*/);
    sub_21FFC50(&StringLiteral_15826/*"ValVoice_"*/);
    sub_21FFC50(&StringLiteral_26863/*"降順"*/);
    sub_21FFC50(&StringLiteral_11850/*"ResourceSound"*/);
    sub_21FFC50(&StringLiteral_11842/*"ResidentSE"*/);
    sub_21FFC50(&StringLiteral_9648/*"NONE"*/);
    sub_21FFC50(&StringLiteral_3201/*"Battle"*/);
    sub_21FFC50(&StringLiteral_26755/*"キュー順"*/);
    byte_5935CA3 = 1;
  }
  v1 = sub_21FFD10(string___TypeInfo, 10);
  if ( !v1 )
    goto LABEL_20;
  v9 = v1;
  if ( !*(_DWORD *)(v1 + 24) )
    goto LABEL_19;
  v10 = StringLiteral_4588/*"ChrVoice_"*/;
  *(_QWORD *)(v1 + 32) = StringLiteral_4588/*"ChrVoice_"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v1 + 32), v10, v3, v4, v5, v6, v7, v8);
  if ( (*(_DWORD *)(v9 + 24) & 0xFFFFFFFE) == 0 )
    goto LABEL_19;
  v17 = StringLiteral_9898/*"NoblePhantasm_"*/;
  *(_QWORD *)(v9 + 40) = StringLiteral_9898/*"NoblePhantasm_"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v9 + 40), v17, v11, v12, v13, v14, v15, v16);
  if ( *(_DWORD *)(v9 + 24) <= 2u )
    goto LABEL_19;
  v24 = StringLiteral_13274/*"Servants_"*/;
  *(_QWORD *)(v9 + 48) = StringLiteral_13274/*"Servants_"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v9 + 48), v24, v18, v19, v20, v21, v22, v23);
  if ( (*(_DWORD *)(v9 + 24) & 0xFFFFFFFC) == 0 )
    goto LABEL_19;
  v31 = StringLiteral_15826/*"ValVoice_"*/;
  *(_QWORD *)(v9 + 56) = StringLiteral_15826/*"ValVoice_"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v9 + 56), v31, v25, v26, v27, v28, v29, v30);
  if ( *(_DWORD *)(v9 + 24) <= 4u )
    goto LABEL_19;
  v38 = StringLiteral_12515/*"SE_"*/;
  *(_QWORD *)(v9 + 64) = StringLiteral_12515/*"SE_"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v9 + 64), v38, v32, v33, v34, v35, v36, v37);
  if ( *(_DWORD *)(v9 + 24) <= 5u )
    goto LABEL_19;
  v45 = StringLiteral_11842/*"ResidentSE"*/;
  *(_QWORD *)(v9 + 72) = StringLiteral_11842/*"ResidentSE"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v9 + 72), v45, v39, v40, v41, v42, v43, v44);
  if ( *(_DWORD *)(v9 + 24) <= 6u )
    goto LABEL_19;
  v52 = StringLiteral_11996/*"SE"*/;
  *(_QWORD *)(v9 + 80) = StringLiteral_11996/*"SE"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v9 + 80), v52, v46, v47, v48, v49, v50, v51);
  if ( (*(_DWORD *)(v9 + 24) & 0xFFFFFFF8) == 0
    || (v59 = StringLiteral_3201/*"Battle"*/,
        *(_QWORD *)(v9 + 88) = StringLiteral_3201/*"Battle"*/,
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v9 + 88), v59, v53, v54, v55, v56, v57, v58),
        *(_DWORD *)(v9 + 24) <= 8u)
    || (v66 = StringLiteral_11850/*"ResourceSound"*/,
        *(_QWORD *)(v9 + 96) = StringLiteral_11850/*"ResourceSound"*/,
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v9 + 96), v66, v60, v61, v62, v63, v64, v65),
        *(_DWORD *)(v9 + 24) <= 9u) )
  {
LABEL_19:
    sub_21FFED4(v1);
  }
  v73 = StringLiteral_9648/*"NONE"*/;
  *(_QWORD *)(v9 + 104) = StringLiteral_9648/*"NONE"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v9 + 104), v73, v67, v68, v69, v70, v71, v72);
  SoundTestMenu_TypeInfo->static_fields->sePrefixList = (struct System_String_array *)v9;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)SoundTestMenu_TypeInfo->static_fields,
    v9,
    v74,
    v75,
    v76,
    v77,
    v78,
    v79);
  v1 = sub_21FFD10(string___TypeInfo, 3);
  if ( !v1 )
LABEL_20:
    sub_21FFECC(v1, v2);
  v86 = v1;
  if ( !*(_DWORD *)(v1 + 24) )
    goto LABEL_19;
  v87 = StringLiteral_26755/*"キュー順"*/;
  *(_QWORD *)(v1 + 32) = StringLiteral_26755/*"キュー順"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v1 + 32), v87, v80, v81, v82, v83, v84, v85);
  if ( (*(_DWORD *)(v86 + 24) & 0xFFFFFFFE) == 0 )
    goto LABEL_19;
  v94 = StringLiteral_26835/*"昇順"*/;
  *(_QWORD *)(v86 + 40) = StringLiteral_26835/*"昇順"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v86 + 40), v94, v88, v89, v90, v91, v92, v93);
  if ( *(_DWORD *)(v86 + 24) <= 2u )
    goto LABEL_19;
  v101 = StringLiteral_26863/*"降順"*/;
  *(_QWORD *)(v86 + 48) = StringLiteral_26863/*"降順"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v86 + 48), v101, v95, v96, v97, v98, v99, v100);
  static_fields = SoundTestMenu_TypeInfo->static_fields;
  static_fields->sortNameList = (struct System_String_array *)v86;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&static_fields->sortNameList, v86, v103, v104, v105, v106, v107, v108);
}


void SoundTestMenu___ctor(SoundTestMenu_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  int32_t v9; // w1
  System_Collections_Generic_List_object__o *v10; // x20
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  System_Collections_Generic_List_object__o *v17; // x20
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  System_Collections_Generic_List_object__o *v24; // x20
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  System_Collections_Generic_List_object__o *v31; // x20
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7
  int32_t v38; // w1
  System_String_o *v39; // x2
  System_String_o *v40; // x3
  int32_t v41; // w4
  int32_t v42; // w5
  bool v43; // w6
  bool v44; // w7
  System_Collections_Generic_List_object__o *v45; // x20
  System_String_o *v46; // x2
  System_String_o *v47; // x3
  int32_t v48; // w4
  int32_t v49; // w5
  bool v50; // w6
  bool v51; // w7
  int32_t v52; // w1
  System_String_o *v53; // x2
  System_String_o *v54; // x3
  int32_t v55; // w4
  int32_t v56; // w5
  bool v57; // w6
  bool v58; // w7
  System_Collections_Generic_Dictionary_TKey__TValue__o *v59; // x20
  System_String_o *v60; // x2
  System_String_o *v61; // x3
  int32_t v62; // w4
  int32_t v63; // w5
  bool v64; // w6
  bool v65; // w7

  if ( (byte_5935CA2 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__long___ctor__);
    sub_21FFC50(&System_Collections_Generic_Dictionary_string__long__TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_string___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_string__TypeInfo);
    sub_21FFC50(&StringLiteral_1080/*"./OutputCueList/"*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_5935CA2 = 1;
  }
  v9 = StringLiteral_1080/*"./OutputCueList/"*/;
  this->fields.cueListOutputPath = (struct System_String_o *)StringLiteral_1080/*"./OutputCueList/"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.cueListOutputPath, v9, v2, v3, v4, v5, v6, v7);
  v10 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.inputBgmCueName = (struct System_Collections_Generic_List_string__o *)v10;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.inputBgmCueName,
    (int32_t)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  v17 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.bgmCpkList = (struct System_Collections_Generic_List_string__o *)v17;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.bgmCpkList, (int32_t)v17, v18, v19, v20, v21, v22, v23);
  v24 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v24,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.inputSeCueName = (struct System_Collections_Generic_List_string__o *)v24;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.inputSeCueName,
    (int32_t)v24,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  v31 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v31,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.exclusionList = (struct System_Collections_Generic_List_string__o *)v31;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.exclusionList,
    (int32_t)v31,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  v38 = (int)StringLiteral_1/*""*/;
  this->fields.pathDiffDirectory = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.pathDiffDirectory, v38, v39, v40, v41, v42, v43, v44);
  v45 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v45,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.seCpkList = (struct System_Collections_Generic_List_string__o *)v45;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.seCpkList, (int32_t)v45, v46, v47, v48, v49, v50, v51);
  v52 = (int)StringLiteral_1/*""*/;
  this->fields.currentAssetVersionName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.currentAssetVersionName,
    v52,
    v53,
    v54,
    v55,
    v56,
    v57,
    v58);
  v59 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_21FFEBC(System_Collections_Generic_Dictionary_string__long__TypeInfo);
  System_Collections_Generic_Dictionary_object__long____ctor(
    v59,
    (const MethodInfo_3FC676C *)Method_System_Collections_Generic_Dictionary_string__long___ctor__);
  this->fields.bgmCpkData = (struct System_Collections_Generic_Dictionary_string__long__o *)v59;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.bgmCpkData, (int32_t)v59, v60, v61, v62, v63, v64, v65);
  TestScript_DebugTest_DebugItem_DebugItemMenuBase___ctor((TestScript_DebugTest_DebugItem_DebugItemMenuBase_o *)this, 0);
}


void SoundTestMenu__Awake(SoundTestMenu_o *this, const MethodInfo *method)
{
  ;
}


void SoundTestMenu__CheckBgmVersionDiff(
        SoundTestMenu_o *this,
        System_String_o *compareVersion,
        const MethodInfo *method)
{
  System_Collections_Generic_IDictionary_TKey__TValue__o *bgmCpkData; // x21
  System_Collections_Generic_Dictionary_TKey__TValue__o *v6; // x24
  System_String_o *v7; // x25
  System_Collections_Generic_List_object__o *v8; // x21
  System_Collections_Generic_List_object__o *v9; // x22
  System_Collections_Generic_List_object__o *v10; // x23
  int64_t AllLines; // x0
  __int64 v12; // x1
  int v13; // w8
  int64_t v14; // x25
  unsigned int v15; // w19
  Il2CppObject *v16; // x26
  int64_t v17; // x27
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  struct System_Object_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  Il2CppClass **v33; // x0
  struct System_Object_array *v34; // x8
  _QWORD *v35; // x9
  __int64 v36; // x10
  Il2CppClass **v37; // x0
  _BOOL8 v38; // x0
  Il2CppObject *key; // x1
  System_String_o *v40; // x2
  System_String_o *v41; // x3
  int32_t v42; // w4
  int32_t v43; // w5
  bool v44; // w6
  bool v45; // w7
  struct System_Object_array *v46; // x8
  _QWORD *v47; // x9
  __int64 v48; // x10
  Il2CppClass **v49; // x0
  System_String_o *v50; // x24
  const MethodInfo *v51; // x5
  const MethodInfo *v52; // x5
  const MethodInfo *v53; // x5
  SoundTestMenu_o *v54; // [xsp+0h] [xbp-B0h]
  System_String_o *v55; // [xsp+8h] [xbp-A8h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v56; // [xsp+20h] [xbp-90h] BYREF

  if ( (byte_5935C95 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__long__ContainsKey__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__long__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__long__Remove__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__long___ctor___91378280);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__long__get_Item__);
    sub_21FFC50(&System_Collections_Generic_Dictionary_string__long__TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_Enumerator_string__long__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_Enumerator_string__long__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_Enumerator_string__long__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_KeyValuePair_string__long__get_Key__);
    sub_21FFC50(&Method_System_Collections_Generic_List_string__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_string___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_string__TypeInfo);
    sub_21FFC50(&StringLiteral_1101/*".csv"*/);
    sub_21FFC50(&StringLiteral_1140/*"/BGM/"*/);
    sub_21FFC50(&StringLiteral_1141/*"/BGM/Diff"*/);
    sub_21FFC50(&StringLiteral_4524/*"ChangeFiles"*/);
    sub_21FFC50(&StringLiteral_2250/*"AddFiles"*/);
    sub_21FFC50(&StringLiteral_5405/*"DeleteFiles"*/);
    byte_5935C95 = 1;
  }
  bgmCpkData = (System_Collections_Generic_IDictionary_TKey__TValue__o *)this->fields.bgmCpkData;
  memset(&v56, 0, sizeof(v56));
  v6 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_21FFEBC(System_Collections_Generic_Dictionary_string__long__TypeInfo);
  System_Collections_Generic_Dictionary_object__long____ctor_66873416(
    v6,
    bgmCpkData,
    (const MethodInfo_3FC6848 *)Method_System_Collections_Generic_Dictionary_string__long___ctor___91378280);
  v54 = this;
  v55 = compareVersion;
  v7 = System_String__Concat_75483552(
         this->fields.pathDiffDirectory,
         (System_String_o *)StringLiteral_1140/*"/BGM/"*/,
         compareVersion,
         (System_String_o *)StringLiteral_1101/*".csv"*/,
         0);
  v8 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_string___ctor__);
  v9 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_string___ctor__);
  v10 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_string___ctor__);
  AllLines = (int64_t)System_IO_File__ReadAllLines(v7, 0);
  if ( !AllLines )
    goto LABEL_37;
  v13 = *(_DWORD *)(AllLines + 24);
  v14 = AllLines;
  if ( v13 >= 1 )
  {
    v15 = 0;
    while ( 1 )
    {
      if ( v15 >= v13 )
        sub_21FFED4(AllLines);
      AllLines = *(_QWORD *)(v14 + 8LL * (int)v15 + 32);
      if ( !AllLines )
        break;
      AllLines = (int64_t)System_String__Split((System_String_o *)AllLines, 0x2Cu, 0, 0);
      if ( !AllLines )
        break;
      if ( *(_DWORD *)(AllLines + 24) != 2 )
        return;
      v16 = *(Il2CppObject **)(AllLines + 32);
      AllLines = System_Int64__Parse(*(System_String_o **)(AllLines + 40), 0);
      if ( !v6 )
        break;
      v17 = AllLines;
      AllLines = System_Collections_Generic_Dictionary_object__long___ContainsKey(
                   v6,
                   v16,
                   (const MethodInfo_3FC72F0 *)Method_System_Collections_Generic_Dictionary_string__long__ContainsKey__);
      if ( (AllLines & 1) != 0 )
      {
        AllLines = System_Collections_Generic_Dictionary_object__long___get_Item(
                     v6,
                     v16,
                     (const MethodInfo_3FC707C *)Method_System_Collections_Generic_Dictionary_string__long__get_Item__);
        if ( v17 != AllLines )
        {
          if ( !v9 )
            break;
          items = v9->fields._items;
          v31 = Method_System_Collections_Generic_List_string__Add__;
          ++v9->fields._version;
          if ( !items )
            break;
          size = v9->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v9,
              v16,
              *(const MethodInfo_444FB2C **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
          }
          else
          {
            v33 = &items->obj.klass + size;
            v9->fields._size = size + 1;
            v33[4] = (Il2CppClass *)v16;
            sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v33 + 4), (int32_t)v16, v24, v25, v26, v27, v28, v29);
          }
        }
        AllLines = System_Collections_Generic_Dictionary_object__long___Remove(
                     v6,
                     v16,
                     (const MethodInfo_3FC85CC *)Method_System_Collections_Generic_Dictionary_string__long__Remove__);
      }
      else
      {
        if ( !v10 )
          break;
        v34 = v10->fields._items;
        v35 = Method_System_Collections_Generic_List_string__Add__;
        ++v10->fields._version;
        if ( !v34 )
          break;
        v36 = v10->fields._size;
        if ( (unsigned int)v36 >= LODWORD(v34->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v10,
            v16,
            *(const MethodInfo_444FB2C **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
        }
        else
        {
          v37 = &v34->obj.klass + v36;
          v10->fields._size = v36 + 1;
          v37[4] = (Il2CppClass *)v16;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v37 + 4), (int32_t)v16, v18, v19, v20, v21, v22, v23);
        }
      }
      v13 = *(_DWORD *)(v14 + 24);
      if ( (int)++v15 >= v13 )
        goto LABEL_25;
    }
LABEL_37:
    sub_21FFECC(AllLines, v12);
  }
LABEL_25:
  if ( !v6 )
    goto LABEL_37;
  System_Collections_Generic_Dictionary_object__long___GetEnumerator(
    &v56,
    v6,
    (const MethodInfo_3FC74F4 *)Method_System_Collections_Generic_Dictionary_string__long__GetEnumerator__);
  while ( 1 )
  {
    v38 = System_Collections_Generic_Dictionary_Enumerator_object__long___MoveNext(
            &v56,
            (const MethodInfo_41348E4 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__long__MoveNext__);
    if ( !v38 )
      break;
    if ( !v8
      || (v46 = v8->fields._items,
          key = v56.fields._current.fields.key,
          v47 = Method_System_Collections_Generic_List_string__Add__,
          ++v8->fields._version,
          !v46) )
    {
      sub_21FFECC(v38, key);
    }
    v48 = v8->fields._size;
    if ( (unsigned int)v48 >= LODWORD(v46->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v8,
        key,
        *(const MethodInfo_444FB2C **)(*(_QWORD *)(v47[4] + 192LL) + 112LL));
    }
    else
    {
      v49 = &v46->obj.klass + v48;
      v8->fields._size = v48 + 1;
      v49[4] = (Il2CppClass *)key;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v49 + 4), (int32_t)key, v40, v41, v42, v43, v44, v45);
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_object__long___Dispose(
    &v56,
    (const MethodInfo_4134A04 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__long__Dispose__);
  v50 = System_String__Concat_75438412(v54->fields.pathDiffDirectory, (System_String_o *)StringLiteral_1141/*"/BGM/Diff"*/, 0);
  if ( System_IO_Directory__Exists(v50, 0) )
    System_IO_Directory__Delete(v50, 1, 0);
  System_IO_Directory__CreateDirectory(v50, 0);
  SoundTestMenu__OutputBgmDiffResult(
    v54,
    v50,
    (System_String_o *)StringLiteral_2250/*"AddFiles"*/,
    v55,
    (System_Collections_Generic_List_string__o *)v8,
    v51);
  SoundTestMenu__OutputBgmDiffResult(
    v54,
    v50,
    (System_String_o *)StringLiteral_4524/*"ChangeFiles"*/,
    v55,
    (System_Collections_Generic_List_string__o *)v9,
    v52);
  SoundTestMenu__OutputBgmDiffResult(
    v54,
    v50,
    (System_String_o *)StringLiteral_5405/*"DeleteFiles"*/,
    v55,
    (System_Collections_Generic_List_string__o *)v10,
    v53);
}


System_Collections_IEnumerator_o *SoundTestMenu__CheckSeVersionDiff(
        SoundTestMenu_o *this,
        System_String_o *compareVersion,
        const MethodInfo *method)
{
  __int64 v5; // x21
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7

  if ( (byte_5935C8D & 1) == 0 )
  {
    sub_21FFC50(&SoundTestMenu__CheckSeVersionDiff_d__116_TypeInfo);
    byte_5935C8D = 1;
  }
  v5 = sub_21FFEBC(SoundTestMenu__CheckSeVersionDiff_d__116_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 32), (int32_t)this, v6, v7, v8, v9, v10, v11);
  *(_QWORD *)(v5 + 56) = compareVersion;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 56), (int32_t)compareVersion, v12, v13, v14, v15, v16, v17);
  return (System_Collections_IEnumerator_o *)v5;
}


void SoundTestMenu__CompareCueList(
        SoundTestMenu_o *this,
        System_Collections_Generic_Dictionary_string__long__o *oldList,
        System_Collections_Generic_Dictionary_string__long__o *nowList,
        System_Collections_Generic_List_string__o *addedList,
        System_Collections_Generic_List_string__o *changedList,
        System_Collections_Generic_List_string__o *deletedList,
        const MethodInfo *method)
{
  _BOOL8 v12; // x0
  __int64 v13; // x1
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  Il2CppObject *key; // x23
  Il2CppObject *value; // x29
  int64_t Item; // x0
  __int64 v23; // x1
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  struct System_String_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  Il2CppClass **v33; // x0
  struct System_String_array *v34; // x8
  _QWORD *v35; // x9
  __int64 v36; // x10
  Il2CppClass **v37; // x0
  __int64 v38; // x1
  __int64 v39; // x2
  SoundTestMenu___c_c *v40; // x0
  struct SoundTestMenu___c_StaticFields *static_fields; // x8
  System_Func_T__TResult__o *_9__117_1; // x21
  Il2CppObject *v43; // x22
  struct SoundTestMenu___c_StaticFields *v44; // x0
  System_String_o *v45; // x2
  System_String_o *v46; // x3
  int32_t v47; // w4
  int32_t v48; // w5
  bool v49; // w6
  bool v50; // w7
  System_Collections_Generic_IEnumerable_T__o *v51; // x0
  __int64 v52; // x1
  SoundTestMenu___c_c *v53; // x0
  struct SoundTestMenu___c_StaticFields *v54; // x8
  System_Func_T__TResult__o *_9__117_0; // x21
  Il2CppObject *v56; // x22
  struct SoundTestMenu___c_StaticFields *v57; // x0
  System_String_o *v58; // x2
  System_String_o *v59; // x3
  int32_t v60; // w4
  int32_t v61; // w5
  bool v62; // w6
  bool v63; // w7
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v64; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v65; // [xsp+30h] [xbp-90h] BYREF

  if ( (byte_5935C8E & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__long__ContainsKey__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__long__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__long__Remove__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__long__get_Item__);
    sub_21FFC50(&Method_System_Linq_Enumerable_Select_KeyValuePair_string__long___string___);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_Enumerator_string__long__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_Enumerator_string__long__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_Enumerator_string__long__get_Current__);
    sub_21FFC50(&System_Func_KeyValuePair_string__long___string__TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_KeyValuePair_string__long__get_Key__);
    sub_21FFC50(&Method_System_Collections_Generic_KeyValuePair_string__long__get_Value__);
    sub_21FFC50(&Method_System_Collections_Generic_List_string__AddRange__);
    sub_21FFC50(&Method_System_Collections_Generic_List_string__Add__);
    sub_21FFC50(&Method_SoundTestMenu___c__CompareCueList_b__117_0__);
    sub_21FFC50(&Method_SoundTestMenu___c__CompareCueList_b__117_1__);
    sub_21FFC50(&SoundTestMenu___c_TypeInfo);
    byte_5935C8E = 1;
  }
  memset(&v65, 0, sizeof(v65));
  if ( (unsigned __int64)oldList | (unsigned __int64)nowList )
  {
    if ( nowList )
    {
      System_Collections_Generic_Dictionary_object__long___GetEnumerator(
        &v64,
        (System_Collections_Generic_Dictionary_TKey__TValue__o *)nowList,
        (const MethodInfo_3FC74F4 *)Method_System_Collections_Generic_Dictionary_string__long__GetEnumerator__);
      v65 = v64;
      v64.fields._dictionary = 0;
      *(_QWORD *)&v64.fields._version = &v65;
      while ( 1 )
      {
        v12 = System_Collections_Generic_Dictionary_Enumerator_object__long___MoveNext(
                &v65,
                (const MethodInfo_41348E4 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__long__MoveNext__);
        if ( !v12 )
          break;
        key = v65.fields._current.fields.key;
        if ( oldList
          && (value = v65.fields._current.fields.value,
              v12 = System_Collections_Generic_Dictionary_object__long___ContainsKey(
                      (System_Collections_Generic_Dictionary_TKey__TValue__o *)oldList,
                      v65.fields._current.fields.key,
                      (const MethodInfo_3FC72F0 *)Method_System_Collections_Generic_Dictionary_string__long__ContainsKey__)) )
        {
          Item = System_Collections_Generic_Dictionary_object__long___get_Item(
                   (System_Collections_Generic_Dictionary_TKey__TValue__o *)oldList,
                   key,
                   (const MethodInfo_3FC707C *)Method_System_Collections_Generic_Dictionary_string__long__get_Item__);
          if ( value != (Il2CppObject *)Item )
          {
            if ( !changedList
              || (items = changedList->fields._items,
                  v31 = Method_System_Collections_Generic_List_string__Add__,
                  ++changedList->fields._version,
                  !items) )
            {
              sub_21FFECC(Item, v23);
            }
            size = changedList->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)changedList,
                key,
                *(const MethodInfo_444FB2C **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
            }
            else
            {
              v33 = &items->obj.klass + size;
              changedList->fields._size = size + 1;
              v33[4] = (Il2CppClass *)key;
              sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v33 + 4), (int32_t)key, v24, v25, v26, v27, v28, v29);
            }
          }
          System_Collections_Generic_Dictionary_object__long___Remove(
            (System_Collections_Generic_Dictionary_TKey__TValue__o *)oldList,
            key,
            (const MethodInfo_3FC85CC *)Method_System_Collections_Generic_Dictionary_string__long__Remove__);
        }
        else
        {
          if ( !addedList
            || (v34 = addedList->fields._items,
                v35 = Method_System_Collections_Generic_List_string__Add__,
                ++addedList->fields._version,
                !v34) )
          {
            sub_21FFECC(v12, v13);
          }
          v36 = addedList->fields._size;
          if ( (unsigned int)v36 >= LODWORD(v34->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)addedList,
              key,
              *(const MethodInfo_444FB2C **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
          }
          else
          {
            v37 = &v34->obj.klass + v36;
            addedList->fields._size = v36 + 1;
            v37[4] = (Il2CppClass *)key;
            sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v37 + 4), (int32_t)key, v14, v15, v16, v17, v18, v19);
          }
        }
      }
      System_Collections_Generic_Dictionary_Enumerator_object__long___Dispose(
        &v65,
        (const MethodInfo_4134A04 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__long__Dispose__);
      v40 = SoundTestMenu___c_TypeInfo;
      if ( !*(&SoundTestMenu___c_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(SoundTestMenu___c_TypeInfo, v38, v39);
        v40 = SoundTestMenu___c_TypeInfo;
      }
      static_fields = v40->static_fields;
      _9__117_1 = (System_Func_T__TResult__o *)static_fields->__9__117_1;
      if ( !_9__117_1 )
      {
        if ( !*(&v40->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(v40, v38, v39);
          static_fields = SoundTestMenu___c_TypeInfo->static_fields;
        }
        v43 = (Il2CppObject *)static_fields->__9;
        _9__117_1 = (System_Func_T__TResult__o *)sub_21FFEBC(System_Func_KeyValuePair_string__long___string__TypeInfo);
        System_Func_KeyValuePair_object__long___object____ctor(
          _9__117_1,
          v43,
          Method_SoundTestMenu___c__CompareCueList_b__117_1__,
          0);
        v44 = SoundTestMenu___c_TypeInfo->static_fields;
        v44->__9__117_1 = (struct System_Func_KeyValuePair_string__long___string__o *)_9__117_1;
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)&v44->__9__117_1,
          (int32_t)_9__117_1,
          v45,
          v46,
          v47,
          v48,
          v49,
          v50);
      }
      v51 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_KeyValuePair_object__long___object_(
                                                             (System_Collections_Generic_IEnumerable_TSource__o *)oldList,
                                                             (System_Func_TSource__TResult__o *)_9__117_1,
                                                             (const MethodInfo_3858744 *)Method_System_Linq_Enumerable_Select_KeyValuePair_string__long___string___);
      if ( deletedList )
      {
        System_Collections_Generic_List_object___AddRange(
          (System_Collections_Generic_List_object__o *)deletedList,
          v51,
          (const MethodInfo_444FD3C *)Method_System_Collections_Generic_List_string__AddRange__);
        return;
      }
    }
    else
    {
      v53 = SoundTestMenu___c_TypeInfo;
      if ( !*(&SoundTestMenu___c_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(SoundTestMenu___c_TypeInfo, oldList, nowList);
        v53 = SoundTestMenu___c_TypeInfo;
      }
      v54 = v53->static_fields;
      _9__117_0 = (System_Func_T__TResult__o *)v54->__9__117_0;
      if ( !_9__117_0 )
      {
        if ( !*(&v53->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(v53, oldList, nowList);
          v54 = SoundTestMenu___c_TypeInfo->static_fields;
        }
        v56 = (Il2CppObject *)v54->__9;
        _9__117_0 = (System_Func_T__TResult__o *)sub_21FFEBC(System_Func_KeyValuePair_string__long___string__TypeInfo);
        System_Func_KeyValuePair_object__long___object____ctor(
          _9__117_0,
          v56,
          Method_SoundTestMenu___c__CompareCueList_b__117_0__,
          0);
        v57 = SoundTestMenu___c_TypeInfo->static_fields;
        v57->__9__117_0 = (struct System_Func_KeyValuePair_string__long___string__o *)_9__117_0;
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)&v57->__9__117_0,
          (int32_t)_9__117_0,
          v58,
          v59,
          v60,
          v61,
          v62,
          v63);
      }
      v51 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_KeyValuePair_object__long___object_(
                                                             (System_Collections_Generic_IEnumerable_TSource__o *)oldList,
                                                             (System_Func_TSource__TResult__o *)_9__117_0,
                                                             (const MethodInfo_3858744 *)Method_System_Linq_Enumerable_Select_KeyValuePair_string__long___string___);
      if ( deletedList )
      {
        System_Collections_Generic_List_object___AddRange(
          (System_Collections_Generic_List_object__o *)deletedList,
          v51,
          (const MethodInfo_444FD3C *)Method_System_Collections_Generic_List_string__AddRange__);
        return;
      }
    }
    sub_21FFECC(v51, v52);
  }
}


void SoundTestMenu__OnClickBgmDiffButton(SoundTestMenu_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *gameObject; // x0
  __int64 v4; // x1
  UnityEngine_GameObject_o *v5; // x21
  bool activeSelf; // w20
  const MethodInfo *v7; // x1

  if ( (byte_5935C91 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_9228/*"MainRoot"*/);
    sub_21FFC50(&StringLiteral_5445/*"DiffRoot"*/);
    byte_5935C91 = 1;
  }
  gameObject = (UnityEngine_Component_o *)GameObjectExtensions__Find(
                                            this->fields.bgmRoot,
                                            (System_String_o *)StringLiteral_9228/*"MainRoot"*/,
                                            0);
  if ( !gameObject
    || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0)) == 0
    || (v5 = (UnityEngine_GameObject_o *)gameObject,
        activeSelf = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)gameObject, 0),
        UnityEngine_GameObject__SetActive(v5, !activeSelf, 0),
        (gameObject = (UnityEngine_Component_o *)GameObjectExtensions__Find(
                                                   this->fields.bgmRoot,
                                                   (System_String_o *)StringLiteral_5445/*"DiffRoot"*/,
                                                   0)) == 0)
    || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0)) == 0 )
  {
    sub_21FFECC(gameObject, v4);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, activeSelf, 0);
  SoundTestMenu__SetDiffSwitchButtonLabel(this, v7);
}


void SoundTestMenu__OnClickOutputBgmVersionDiff(SoundTestMenu_o *this, const MethodInfo *method)
{
  SoundTestMenu_o *v2; // x19
  struct UIPopupList_o *bgmVersionList; // x8
  const MethodInfo *v4; // x2
  struct UIPopupList_o *v5; // x8

  v2 = this;
  if ( (byte_5935C94 & 1) == 0 )
  {
    this = (SoundTestMenu_o *)sub_21FFC50(&StringLiteral_9913/*"None"*/);
    byte_5935C94 = 1;
  }
  bgmVersionList = v2->fields.bgmVersionList;
  if ( !bgmVersionList )
    goto LABEL_7;
  this = (SoundTestMenu_o *)System_String__op_Equality(
                              bgmVersionList->fields.mSelectedItem,
                              (System_String_o *)StringLiteral_9913/*"None"*/,
                              0);
  if ( ((unsigned __int8)this & 1) != 0 )
    return;
  v5 = v2->fields.bgmVersionList;
  if ( !v5 )
LABEL_7:
    sub_21FFECC(this, method);
  SoundTestMenu__CheckBgmVersionDiff(v2, v5->fields.mSelectedItem, v4);
}


void SoundTestMenu__OnClickOutputCurrentVersionBgmList(SoundTestMenu_o *this, const MethodInfo *method)
{
  System_String_o *pathDiffDirectory; // x0
  System_String_o *currentAssetVersionName; // x2
  System_String_o *v5; // x20
  __int64 v6; // x1
  System_Collections_Generic_Dictionary_TKey__TValue__o *bgmCpkData; // x0
  struct System_Collections_Generic_KeyValuePair_TKey__TValue__o current; // kr00_16
  System_String_o *v9; // x21
  System_String_o *v10; // x1
  System_String_o *v11; // x0
  System_String_o *v12; // x1
  const MethodInfo *v13; // x3
  __int64 v14; // [xsp+8h] [xbp-98h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *v15; // [xsp+10h] [xbp-90h]
  Il2CppObject *value; // [xsp+18h] [xbp-88h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v17; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_5935C93 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__long__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_Enumerator_string__long__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_Enumerator_string__long__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_Enumerator_string__long__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_KeyValuePair_string__long__get_Key__);
    sub_21FFC50(&Method_System_Collections_Generic_KeyValuePair_string__long__get_Value__);
    sub_21FFC50(&StringLiteral_43/*"\n"*/);
    sub_21FFC50(&StringLiteral_1101/*".csv"*/);
    sub_21FFC50(&StringLiteral_1140/*"/BGM/"*/);
    sub_21FFC50(&StringLiteral_3027/*"BGM"*/);
    sub_21FFC50(&StringLiteral_869/*","*/);
    byte_5935C93 = 1;
  }
  pathDiffDirectory = this->fields.pathDiffDirectory;
  currentAssetVersionName = this->fields.currentAssetVersionName;
  value = 0;
  memset(&v17, 0, sizeof(v17));
  v5 = System_String__Concat_75483552(
         pathDiffDirectory,
         (System_String_o *)StringLiteral_1140/*"/BGM/"*/,
         currentAssetVersionName,
         (System_String_o *)StringLiteral_1101/*".csv"*/,
         0);
  if ( System_IO_File__Exists(v5, 0) )
    System_IO_File__Delete(v5, 0);
  bgmCpkData = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.bgmCpkData;
  if ( !bgmCpkData )
    sub_21FFECC(0, v6);
  System_Collections_Generic_Dictionary_object__long___GetEnumerator(
    &v17,
    bgmCpkData,
    (const MethodInfo_3FC74F4 *)Method_System_Collections_Generic_Dictionary_string__long__GetEnumerator__);
  v14 = 0;
  v15 = &v17;
  while ( System_Collections_Generic_Dictionary_Enumerator_object__long___MoveNext(
            &v17,
            (const MethodInfo_41348E4 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__long__MoveNext__) )
  {
    current = v17.fields._current;
    v9 = System_String__Concat_75438412(
           (System_String_o *)v17.fields._current.fields.key,
           (System_String_o *)StringLiteral_869/*","*/,
           0);
    value = current.fields.value;
    v10 = System_Int64__ToString((int64_t)&value, 0);
    v11 = System_String__Concat_75438412(v9, v10, 0);
    v12 = System_String__Concat_75438412(v11, (System_String_o *)StringLiteral_43/*"\n"*/, 0);
    System_IO_File__AppendAllText(v5, v12, 0);
  }
  System_Collections_Generic_Dictionary_Enumerator_object__long___Dispose(
    &v17,
    (const MethodInfo_4134A04 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__long__Dispose__);
  SoundTestMenu__SetupVersionList(this, this->fields.bgmVersionList, (System_String_o *)StringLiteral_3027/*"BGM"*/, v13);
}


void SoundTestMenu__OnClickOutputCurrentVersionSeList(SoundTestMenu_o *this, const MethodInfo *method)
{
  System_Collections_IEnumerator_o *v3; // x1

  v3 = SoundTestMenu__OutputCurrentSeList(this, method);
  UnityEngine_MonoBehaviour__StartCoroutine_83231452((UnityEngine_MonoBehaviour_o *)this, v3, 0);
}


void SoundTestMenu__OnClickOutputSeVersionDiff(SoundTestMenu_o *this, const MethodInfo *method)
{
  SoundTestMenu_o *v2; // x19
  struct UIPopupList_o *versionList; // x8
  System_String_o *mSelectedItem; // x20
  const MethodInfo *v5; // x2
  System_Collections_IEnumerator_o *v6; // x1

  v2 = this;
  if ( (byte_5935C8C & 1) == 0 )
  {
    this = (SoundTestMenu_o *)sub_21FFC50(&StringLiteral_9913/*"None"*/);
    byte_5935C8C = 1;
  }
  versionList = v2->fields.versionList;
  if ( !versionList )
    sub_21FFECC(this, method);
  mSelectedItem = versionList->fields.mSelectedItem;
  if ( !System_String__op_Equality(mSelectedItem, (System_String_o *)StringLiteral_9913/*"None"*/, 0) )
  {
    v6 = SoundTestMenu__CheckSeVersionDiff(v2, mSelectedItem, v5);
    UnityEngine_MonoBehaviour__StartCoroutine_83231452((UnityEngine_MonoBehaviour_o *)v2, v6, 0);
  }
}


void SoundTestMenu__OutputBgmDiffResult(
        SoundTestMenu_o *this,
        System_String_o *outputDir,
        System_String_o *fileName,
        System_String_o *targetVersionName,
        System_Collections_Generic_List_string__o *diffList,
        const MethodInfo *method)
{
  System_String_o *v11; // x19
  System_String_o *v12; // x0
  __int64 v13; // x0
  __int64 v14; // x1
  Il2CppObject *current; // x20
  __int64 v16; // [xsp+8h] [xbp-88h]
  System_Collections_Generic_List_Enumerator_object__o *v17; // [xsp+10h] [xbp-80h]
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+18h] [xbp-78h] BYREF

  if ( (byte_5935C96 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_Count_string___);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_string__GetEnumerator__);
    sub_21FFC50(&StringLiteral_43/*"\n"*/);
    sub_21FFC50(&StringLiteral_26738/*"このバージョン間では差分はありません。"*/);
    sub_21FFC50(&StringLiteral_1119/*".txt"*/);
    sub_21FFC50(&StringLiteral_1123/*"/"*/);
    sub_21FFC50(&StringLiteral_166/*" <--> "*/);
    sub_21FFC50(&StringLiteral_44/*"\n\n"*/);
    byte_5935C96 = 1;
  }
  memset(&v18, 0, sizeof(v18));
  v11 = System_String__Concat_75483552(
          outputDir,
          (System_String_o *)StringLiteral_1123/*"/"*/,
          fileName,
          (System_String_o *)StringLiteral_1119/*".txt"*/,
          0);
  if ( System_IO_File__Exists(v11, 0) )
    System_IO_File__Delete(v11, 0);
  v12 = System_String__Concat_75483552(
          this->fields.currentAssetVersionName,
          (System_String_o *)StringLiteral_166/*" <--> "*/,
          targetVersionName,
          (System_String_o *)StringLiteral_44/*"\n\n"*/,
          0);
  System_IO_File__AppendAllText(v11, v12, 0);
  v13 = System_Linq_Enumerable__Count_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)diffList,
          (const MethodInfo_384633C *)Method_System_Linq_Enumerable_Count_string___);
  if ( (_DWORD)v13 )
  {
    if ( !diffList )
      sub_21FFECC(v13, v14);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v18,
      (System_Collections_Generic_List_object__o *)diffList,
      (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
    v16 = 0;
    v17 = &v18;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v18,
              (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
    {
      current = v18.fields._current;
      System_IO_File__AppendAllText(v11, (System_String_o *)StringLiteral_43/*"\n"*/, 0);
      System_IO_File__AppendAllText(v11, (System_String_o *)current, 0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v18,
      (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
  }
  else
  {
    System_IO_File__AppendAllText(v11, (System_String_o *)StringLiteral_26738/*"このバージョン間では差分はありません。"*/, 0);
  }
}


System_Collections_IEnumerator_o *SoundTestMenu__OutputCurrentSeList(SoundTestMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_5935C8B & 1) == 0 )
  {
    sub_21FFC50(&SoundTestMenu__OutputCurrentSeList_d__114_TypeInfo);
    byte_5935C8B = 1;
  }
  v3 = sub_21FFEBC(SoundTestMenu__OutputCurrentSeList_d__114_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v3 + 32), (int32_t)this, v4, v5, v6, v7, v8, v9);
  return (System_Collections_IEnumerator_o *)v3;
}


void SoundTestMenu__OutputDiffFile(
        SoundTestMenu_o *this,
        System_String_o *outputDir,
        System_String_o *fileName,
        System_String_o *targetVersionName,
        System_Collections_Generic_Dictionary_string__List_string___o *diffList,
        System_String_o *filterCpk,
        const MethodInfo *method)
{
  System_String_o *v13; // x19
  System_String_o *v14; // x0
  __int64 v15; // x0
  __int64 v16; // x1
  System_String_o *v17; // x0
  struct System_Collections_Generic_KeyValuePair_TKey__TValue__o current; // kr00_16
  System_String_o *v19; // x2
  System_String_o *v20; // x1
  __int64 v21; // x0
  __int64 v22; // x1
  __int128 v23; // q0
  Il2CppObject *v24; // x20
  System_String_o *v25; // x1
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v26; // [xsp+18h] [xbp-D8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+40h] [xbp-B0h] BYREF
  int32_t v28; // [xsp+5Ch] [xbp-94h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v29; // [xsp+60h] [xbp-90h] BYREF

  if ( (byte_5935C8F & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__List_string___GetEnumerator__);
    sub_21FFC50(&Method_System_Linq_Enumerable_Count_KeyValuePair_string__List_string_____);
    sub_21FFC50(&Method_System_Linq_Enumerable_Count_string___);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_Enumerator_string__List_string___Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_Enumerator_string__List_string___MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_Enumerator_string__List_string___get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_KeyValuePair_string__List_string___get_Key__);
    sub_21FFC50(&Method_System_Collections_Generic_KeyValuePair_string__List_string___get_Value__);
    sub_21FFC50(&Method_System_Collections_Generic_List_string__GetEnumerator__);
    sub_21FFC50(&StringLiteral_43/*"\n"*/);
    sub_21FFC50(&StringLiteral_20311/*"files)"*/);
    sub_21FFC50(&StringLiteral_26738/*"このバージョン間では差分はありません。"*/);
    sub_21FFC50(&StringLiteral_1119/*".txt"*/);
    sub_21FFC50(&StringLiteral_1123/*"/"*/);
    sub_21FFC50(&StringLiteral_1098/*".cpk ("*/);
    sub_21FFC50(&StringLiteral_166/*" <--> "*/);
    sub_21FFC50(&StringLiteral_44/*"\n\n"*/);
    sub_21FFC50(&StringLiteral_1100/*".cpkの差分\n"*/);
    sub_21FFC50(&StringLiteral_26703/*"┗"*/);
    byte_5935C8F = 1;
  }
  v28 = 0;
  memset(&v29, 0, sizeof(v29));
  memset(&v27, 0, sizeof(v27));
  v13 = System_String__Concat_75483552(
          outputDir,
          (System_String_o *)StringLiteral_1123/*"/"*/,
          fileName,
          (System_String_o *)StringLiteral_1119/*".txt"*/,
          0);
  if ( System_IO_File__Exists(v13, 0) )
    System_IO_File__Delete(v13, 0);
  v14 = System_String__Concat_75483552(
          this->fields.currentAssetVersionName,
          (System_String_o *)StringLiteral_166/*" <--> "*/,
          targetVersionName,
          (System_String_o *)StringLiteral_44/*"\n\n"*/,
          0);
  System_IO_File__AppendAllText(v13, v14, 0);
  if ( !filterCpk )
    goto LABEL_20;
  if ( filterCpk->fields._stringLength >= 1 )
  {
    v17 = System_String__Concat_75438412(filterCpk, (System_String_o *)StringLiteral_1100/*".cpkの差分\n"*/, 0);
    System_IO_File__AppendAllText(v13, v17, 0);
  }
  v15 = System_Linq_Enumerable__Count_KeyValuePair_object__object__(
          (System_Collections_Generic_IEnumerable_TSource__o *)diffList,
          (const MethodInfo_3845874 *)Method_System_Linq_Enumerable_Count_KeyValuePair_string__List_string_____);
  if ( !(_DWORD)v15 )
  {
    System_IO_File__AppendAllText(v13, (System_String_o *)StringLiteral_26738/*"このバージョン間では差分はありません。"*/, 0);
    return;
  }
  if ( !diffList )
LABEL_20:
    sub_21FFECC(v15, v16);
  System_Collections_Generic_Dictionary_object__object___GetEnumerator(
    &v26,
    (System_Collections_Generic_Dictionary_object__object__o *)diffList,
    (const MethodInfo_3FCA89C *)Method_System_Collections_Generic_Dictionary_string__List_string___GetEnumerator__);
  v29 = v26;
  while ( System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
            &v29,
            (const MethodInfo_4135514 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__List_string___MoveNext__) )
  {
    current = v29.fields._current;
    System_IO_File__AppendAllText(v13, (System_String_o *)StringLiteral_43/*"\n"*/, 0);
    v28 = System_Linq_Enumerable__Count_object_(
            (System_Collections_Generic_IEnumerable_TSource__o *)current.fields.value,
            (const MethodInfo_384633C *)Method_System_Linq_Enumerable_Count_string___);
    v19 = System_Int32__ToString((int32_t)&v28, 0);
    v20 = System_String__Concat_75483552(
            (System_String_o *)current.fields.key,
            (System_String_o *)StringLiteral_1098/*".cpk ("*/,
            v19,
            (System_String_o *)StringLiteral_20311/*"files)"*/,
            0);
    System_IO_File__AppendAllText(v13, v20, 0);
    if ( !current.fields.value )
      sub_21FFECC(v21, v22);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v26,
      (System_Collections_Generic_List_object__o *)current.fields.value,
      (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
    v23 = *(_OWORD *)&v26.fields._dictionary;
    v26.fields._dictionary = 0;
    *(_QWORD *)&v26.fields._version = &v27;
    *(_OWORD *)&v27.fields._list = v23;
    v27.fields._current = v26.fields._current.fields.key;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v27,
              (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
    {
      v24 = v27.fields._current;
      System_IO_File__AppendAllText(v13, (System_String_o *)StringLiteral_43/*"\n"*/, 0);
      v25 = System_String__Concat_75438412((System_String_o *)StringLiteral_26703/*"┗"*/, (System_String_o *)v24, 0);
      System_IO_File__AppendAllText(v13, v25, 0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v27,
      (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
  }
  System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
    &v29,
    (const MethodInfo_4135634 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__List_string___Dispose__);
}


void SoundTestMenu__ResetBgmProgressBar(SoundTestMenu_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *bgmProgressLoopStart; // x0

  bgmProgressLoopStart = this->fields.bgmProgressLoopStart;
  if ( !bgmProgressLoopStart
    || (UnityEngine_GameObject__SetActive(bgmProgressLoopStart, 0, 0),
        (bgmProgressLoopStart = this->fields.bgmProgressLoopEnd) == 0)
    || (UnityEngine_GameObject__SetActive(bgmProgressLoopStart, 0, 0),
        (bgmProgressLoopStart = (UnityEngine_GameObject_o *)this->fields.bgmProgressBar) == 0) )
  {
    sub_21FFECC(bgmProgressLoopStart, method);
  }
  UIProgressBar__set_value((UIProgressBar_o *)bgmProgressLoopStart, 0.0, 0);
}


void SoundTestMenu__SetDiffSwitchButtonLabel(SoundTestMenu_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *gameObject; // x0
  __int64 v4; // x1
  UILabel_o *diffSwitchButtonLabel; // x19
  System_String_o **v6; // x8

  if ( (byte_5935C92 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_9228/*"MainRoot"*/);
    sub_21FFC50(&StringLiteral_26820/*"差分チェック"*/);
    sub_21FFC50(&StringLiteral_26821/*"差分チェック\n終了"*/);
    byte_5935C92 = 1;
  }
  gameObject = (UnityEngine_Component_o *)GameObjectExtensions__Find(
                                            this->fields.bgmRoot,
                                            (System_String_o *)StringLiteral_9228/*"MainRoot"*/,
                                            0);
  if ( !gameObject
    || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0)) == 0
    || (diffSwitchButtonLabel = this->fields.diffSwitchButtonLabel,
        gameObject = (UnityEngine_Component_o *)UnityEngine_GameObject__get_activeSelf(
                                                  (UnityEngine_GameObject_o *)gameObject,
                                                  0),
        !diffSwitchButtonLabel) )
  {
    sub_21FFECC(gameObject, v4);
  }
  v6 = (System_String_o **)&StringLiteral_26820/*"差分チェック"*/;
  if ( ((unsigned __int8)gameObject & 1) == 0 )
    v6 = (System_String_o **)&StringLiteral_26821/*"差分チェック\n終了"*/;
  UILabel__set_text(diffSwitchButtonLabel, *v6, 0);
}


void SoundTestMenu__SetupBgmProgressBar(SoundTestMenu_o *this, const MethodInfo *method)
{
  System_Collections_IEnumerator_o *updated; // x1

  updated = SoundTestMenu__UpdateBgmProgressBarCoroutine(this, method);
  UnityEngine_MonoBehaviour__StartCoroutine_83231452((UnityEngine_MonoBehaviour_o *)this, updated, 0);
}


void SoundTestMenu__SetupVersionDiff(SoundTestMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  System_String_o *DatFileSavePath; // x0
  struct System_String_o *v5; // x0
  System_String_o **p_pathDiffDirectory; // x20
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  System_String_o *v13; // x21
  System_String_o *v14; // x20
  __int64 v15; // x1
  __int64 v16; // x2
  System_String_o *v17; // x0
  __int64 v18; // x1
  __int64 v19; // x2
  ManagerConfig_c *v20; // x8
  System_String_o *v21; // x20
  __int64 v22; // x1
  __int64 v23; // x2
  System_String_o *v24; // x20
  NetworkManager_c *v25; // x0
  System_String_o *dataServerFolder; // x0
  System_String_o *v27; // x0
  struct System_String_o *v28; // x0
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7
  const MethodInfo *v35; // x3
  const MethodInfo *v36; // x3
  struct System_Collections_Generic_List_string__o *seCpkList; // x8
  int32_t size; // w2
  int v39; // w9

  if ( (byte_5935C90 & 1) == 0 )
  {
    sub_21FFC50(&AndroidUtil_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__long__Clear__);
    sub_21FFC50(&Method_System_Collections_Generic_List_string__Clear__);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&ManagerConfig_TypeInfo);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&StringLiteral_11996/*"SE"*/);
    sub_21FFC50(&StringLiteral_16714/*"_"*/);
    sub_21FFC50(&StringLiteral_1139/*"/BGM"*/);
    sub_21FFC50(&StringLiteral_1123/*"/"*/);
    sub_21FFC50(&StringLiteral_2116/*"APP_VERSION_BASE"*/);
    sub_21FFC50(&StringLiteral_1164/*"/SE"*/);
    sub_21FFC50(&StringLiteral_3027/*"BGM"*/);
    sub_21FFC50(&StringLiteral_1162/*"/OutputVersionData"*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_5935C90 = 1;
  }
  if ( !*(&AndroidUtil_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo, method, v2);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0);
  v5 = System_String__Concat_75438412(DatFileSavePath, (System_String_o *)StringLiteral_1162/*"/OutputVersionData"*/, 0);
  p_pathDiffDirectory = &this->fields.pathDiffDirectory;
  this->fields.pathDiffDirectory = v5;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.pathDiffDirectory,
    (int32_t)v5,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  if ( !System_IO_Directory__Exists(this->fields.pathDiffDirectory, 0) )
    System_IO_Directory__CreateDirectory(*p_pathDiffDirectory, 0);
  v13 = System_String__Concat_75438412(*p_pathDiffDirectory, (System_String_o *)StringLiteral_1164/*"/SE"*/, 0);
  if ( !System_IO_Directory__Exists(v13, 0) )
    System_IO_Directory__CreateDirectory(v13, 0);
  v14 = System_String__Concat_75438412(*p_pathDiffDirectory, (System_String_o *)StringLiteral_1139/*"/BGM"*/, 0);
  if ( !System_IO_Directory__Exists(v14, 0) )
    System_IO_Directory__CreateDirectory(v14, 0);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v15, v16);
  v17 = LocalizationManager__Get((System_String_o *)StringLiteral_2116/*"APP_VERSION_BASE"*/, 0);
  v20 = ManagerConfig_TypeInfo;
  v21 = v17;
  if ( !*(&ManagerConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, v18, v19);
    v20 = ManagerConfig_TypeInfo;
  }
  v24 = System_String__Format(v21, (Il2CppObject *)v20->static_fields->AppVer, 0);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v22, v23);
  if ( !byte_5935B45 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    byte_5935B45 = 1;
  }
  v25 = NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v22, v23);
    v25 = NetworkManager_TypeInfo;
  }
  dataServerFolder = v25->static_fields->dataServerFolder;
  if ( !dataServerFolder )
    goto LABEL_27;
  v27 = System_String__Replace_75490096(
          dataServerFolder,
          (System_String_o *)StringLiteral_1123/*"/"*/,
          (System_String_o *)StringLiteral_1/*""*/,
          0);
  v28 = System_String__Concat_75481624(v24, (System_String_o *)StringLiteral_16714/*"_"*/, v27, 0);
  this->fields.currentAssetVersionName = v28;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.currentAssetVersionName,
    (int32_t)v28,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  SoundTestMenu__SetupVersionList(this, this->fields.versionList, (System_String_o *)StringLiteral_11996/*"SE"*/, v35);
  SoundTestMenu__SetupVersionList(this, this->fields.bgmVersionList, (System_String_o *)StringLiteral_3027/*"BGM"*/, v36);
  seCpkList = this->fields.seCpkList;
  if ( !seCpkList )
    goto LABEL_27;
  size = seCpkList->fields._size;
  v39 = seCpkList->fields._version + 1;
  seCpkList->fields._size = 0;
  seCpkList->fields._version = v39;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)seCpkList->fields._items, 0, size, 0);
  dataServerFolder = (System_String_o *)this->fields.bgmCpkData;
  if ( !dataServerFolder )
LABEL_27:
    sub_21FFECC(dataServerFolder, v22);
  System_Collections_Generic_Dictionary_object__long___Clear(
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)dataServerFolder,
    (const MethodInfo_3FC7284 *)Method_System_Collections_Generic_Dictionary_string__long__Clear__);
}


void SoundTestMenu__SetupVersionList(
        SoundTestMenu_o *this,
        UIPopupList_o *popupList,
        System_String_o *directory,
        const MethodInfo *method)
{
  SoundTestMenu_o *v6; // x21
  System_String_o *v7; // x0
  __int64 v8; // x2
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  SoundTestMenu_o *v10; // x20
  unsigned __int64 v11; // x22
  System_String_o *v12; // x21
  System_String_o *FileNameWithoutExtension; // x0
  Il2CppObject *Item; // x1

  v6 = this;
  if ( (byte_5935C97 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_21FFC50(&System_IO_Path_TypeInfo);
    sub_21FFC50(&StringLiteral_855/*"*.csv"*/);
    sub_21FFC50(&StringLiteral_9913/*"None"*/);
    this = (SoundTestMenu_o *)sub_21FFC50(&StringLiteral_1123/*"/"*/);
    byte_5935C97 = 1;
  }
  if ( !popupList )
    goto LABEL_16;
  UIPopupList__Clear(popupList, 0);
  v7 = System_String__Concat_75481624(v6->fields.pathDiffDirectory, (System_String_o *)StringLiteral_1123/*"/"*/, directory, 0);
  this = (SoundTestMenu_o *)System_IO_Directory__GetFiles_76702204(v7, (System_String_o *)StringLiteral_855/*"*.csv"*/, 1, 0);
  if ( !this )
    goto LABEL_16;
  m_CancellationTokenSource = this->fields.m_CancellationTokenSource;
  v10 = this;
  if ( m_CancellationTokenSource )
  {
    if ( (int)m_CancellationTokenSource >= 1 )
    {
      v11 = 0;
      do
      {
        if ( v11 >= (unsigned int)m_CancellationTokenSource )
          sub_21FFED4(this);
        v12 = (System_String_o *)*((_QWORD *)&v10->fields.group + v11);
        if ( !*(&System_IO_Path_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(System_IO_Path_TypeInfo, popupList, v8);
        FileNameWithoutExtension = System_IO_Path__GetFileNameWithoutExtension(v12, 0);
        UIPopupList__AddItem(popupList, FileNameWithoutExtension, 0);
        LODWORD(m_CancellationTokenSource) = v10->fields.m_CancellationTokenSource;
        ++v11;
      }
      while ( (__int64)v11 < (int)m_CancellationTokenSource );
    }
    this = (SoundTestMenu_o *)popupList->fields.items;
    if ( this )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)this,
               0,
               (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_string__get_Item__);
      UIPopupList__set_value(popupList, (System_String_o *)Item, 0);
      return;
    }
LABEL_16:
    sub_21FFECC(this, popupList);
  }
  UIPopupList__AddItem(popupList, (System_String_o *)StringLiteral_9913/*"None"*/, 0);
}


void SoundTestMenu__StartMenu(SoundTestMenu_o *this, const MethodInfo *method)
{
  SoundTestMenu_CallbackFunc_o *v3; // x20
  const MethodInfo *v4; // x3
  const MethodInfo *v5; // x2

  if ( (byte_5935C77 & 1) == 0 )
  {
    sub_21FFC50(&SoundTestMenu_CallbackFunc_TypeInfo);
    sub_21FFC50(&Method_SoundTestMenu__StartMenu_b__78_0__);
    byte_5935C77 = 1;
  }
  TestScript_DebugTest_DebugItem_DebugItemMenuBase__StartMenu(
    (TestScript_DebugTest_DebugItem_DebugItemMenuBase_o *)this,
    0);
  v3 = (SoundTestMenu_CallbackFunc_o *)sub_21FFEBC(SoundTestMenu_CallbackFunc_TypeInfo);
  SoundTestMenu_CallbackFunc___ctor(v3, (Il2CppObject *)this, Method_SoundTestMenu__StartMenu_b__78_0__, v4);
  SoundTestMenu__open(this, v3, v5);
}


System_Collections_IEnumerator_o *SoundTestMenu__UpdateBgmProgressBarCoroutine(
        SoundTestMenu_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x19
  System_Collections_IEnumerator_o *result; // x0

  if ( (byte_5935CA1 & 1) == 0 )
  {
    sub_21FFC50(&SoundTestMenu__UpdateBgmProgressBarCoroutine_d__145_TypeInfo);
    byte_5935CA1 = 1;
  }
  v2 = sub_21FFEBC(SoundTestMenu__UpdateBgmProgressBarCoroutine_d__145_TypeInfo);
  System_Object___ctor((Il2CppObject *)v2, 0);
  result = (System_Collections_IEnumerator_o *)v2;
  *(_DWORD *)(v2 + 16) = 0;
  return result;
}


void SoundTestMenu___createBgmPlayList_b__83_0(SoundTestMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x7
  struct UILabel_o *ItemBgm; // x0
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  __int64 v11; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x2
  struct System_Collections_Generic_List_string__o *inputBgmCueName; // x8

  if ( (byte_5935CA4 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_string__get_Count__);
    byte_5935CA4 = 1;
  }
  ItemBgm = SoundTestMenu__createItemBgm(
              this,
              this->fields.bgmItemParent,
              this->fields.inputBgmCueName,
              this->fields.bgmGrid,
              this->fields.bgmScrollView,
              this->fields.bgmItemLabelSeed,
              1,
              v2);
  this->fields.selectBgmObj = ItemBgm;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.selectBgmObj, (int32_t)ItemBgm, v5, v6, v7, v8, v9, v10);
  inputBgmCueName = this->fields.inputBgmCueName;
  if ( !inputBgmCueName )
    sub_21FFECC(v11, v12);
  SoundTestMenu__updateBgmPrevNextButton(this, inputBgmCueName->fields._size > 1, v13);
}


void SoundTestMenu__add_endCallbackFunc(
        SoundTestMenu_o *this,
        SoundTestMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *endCallbackFunc; // x21
  System_Delegate_o *v6; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x0
  bool v10; // zf
  SoundTestMenu_o *v11; // x0
  SoundTestMenu_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_5935C75 & 1) == 0 )
  {
    sub_21FFC50(&SoundTestMenu_CallbackFunc_TypeInfo);
    byte_5935C75 = 1;
  }
  endCallbackFunc = (System_Delegate_o *)this->fields.endCallbackFunc;
  while ( 1 )
  {
    v6 = System_Delegate__Combine(endCallbackFunc, (System_Delegate_o *)value, 0);
    if ( v6 )
    {
      if ( (SoundTestMenu_CallbackFunc_c *)v6->klass != SoundTestMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_223767C(&this->fields.endCallbackFunc, v6, endCallbackFunc);
    v10 = v9 == (_QWORD)endCallbackFunc;
    endCallbackFunc = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_220024C(v6, SoundTestMenu_CallbackFunc_TypeInfo, v7, v8);
  SoundTestMenu__remove_endCallbackFunc(v11, v12, v13);
}


System_Collections_IEnumerator_o *SoundTestMenu__allCpkCueListup(SoundTestMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_5935C8A & 1) == 0 )
  {
    sub_21FFC50(&SoundTestMenu__allCpkCueListup_d__112_TypeInfo);
    byte_5935C8A = 1;
  }
  v3 = sub_21FFEBC(SoundTestMenu__allCpkCueListup_d__112_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v3 + 32), (int32_t)this, v4, v5, v6, v7, v8, v9);
  return (System_Collections_IEnumerator_o *)v3;
}


// local variable allocation has failed, the output may be wrong!
void SoundTestMenu__bgmPlay(SoundTestMenu_o *this, int32_t addIdxVal, const MethodInfo *method)
{
  const MethodInfo *v5; // x6
  const MethodInfo *v6; // x1
  struct System_String_o *loadBgmCueSheetName; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7

  SoundTestMenu__stopBgm(this, *(const MethodInfo **)&addIdxVal);
  SoundTestMenu__offsetSelectObj(
    this,
    this->fields.bgmScrollView,
    &this->fields.selectBgmObj,
    this->fields.bgmGrid,
    this->fields.inputBgmCueName,
    addIdxVal,
    v5);
  SoundTestMenu__playBgm(this, v6);
  loadBgmCueSheetName = this->fields.loadBgmCueSheetName;
  this->fields.playBgmCueSheetName = loadBgmCueSheetName;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.playBgmCueSheetName,
    (int32_t)loadBgmCueSheetName,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
}


void SoundTestMenu__close(SoundTestMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *rootObject; // x0

  SoundTestMenu__endInput(this, method);
  rootObject = this->fields.rootObject;
  this->fields.state = 0;
  if ( !rootObject )
    sub_21FFECC(0, v3);
  UnityEngine_GameObject__SetActive(rootObject, 0, 0);
}


void SoundTestMenu__createBgmPlayList(SoundTestMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *selectBgmCpkObj; // x20
  _BOOL8 v5; // x0
  __int64 v6; // x1
  struct UILabel_o *v7; // x8
  System_String_o *mText; // x20
  MethodInfo *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  System_Collections_Generic_List_string__o *inputBgmCueName; // x21
  System_Action_o *v16; // x22
  const MethodInfo *v17; // x4

  if ( (byte_5935C7A & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_SoundTestMenu__createBgmPlayList_b__83_0__);
    byte_5935C7A = 1;
  }
  selectBgmCpkObj = (UnityEngine_Object_o *)this->fields.selectBgmCpkObj;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  v5 = UnityEngine_Object__op_Equality(selectBgmCpkObj, 0, 0);
  if ( !v5 )
  {
    v7 = this->fields.selectBgmCpkObj;
    if ( !v7 )
      sub_21FFECC(v5, v6);
    mText = v7->fields.mText;
    if ( System_String__op_Inequality(this->fields.loadBgmCueSheetName, mText, 0)
      && System_String__op_Inequality(this->fields.playBgmCueSheetName, this->fields.loadBgmCueSheetName, 0) )
    {
      SoundTestMenu__releaseBgm(this, this->fields.loadBgmCueSheetName, v9);
    }
    this->fields.loadBgmCueSheetName = mText;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.loadBgmCueSheetName,
      (int32_t)mText,
      (System_String_o *)v9,
      v10,
      v11,
      v12,
      v13,
      v14);
    inputBgmCueName = this->fields.inputBgmCueName;
    v16 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(v16, (Il2CppObject *)this, Method_SoundTestMenu__createBgmPlayList_b__83_0__, 0);
    SoundTestMenu__openCueList(this, mText, inputBgmCueName, v16, v17);
  }
}


// local variable allocation has failed, the output may be wrong!
UILabel_o *SoundTestMenu__createItemBgm(
        SoundTestMenu_o *this,
        UnityEngine_GameObject_o *itemParent,
        System_Collections_Generic_List_string__o *itemNameList,
        UIGrid_o *itemGrid,
        UIScrollView_o *scrollView,
        UILabel_o *itemLabelSeed,
        bool cntCalc,
        const MethodInfo *method)
{
  SoundTestMenu_o *v14; // x24
  UnityEngine_Transform_o *transform; // x0
  float cellHeight; // s8
  int32_t size; // w25
  UnityEngine_Vector2_o ViewSize; // kr00_8
  bool v19; // w1
  __int64 v20; // x1
  __int64 v21; // x2
  UILabel_o *bgmCount; // x23
  System_String_o *v23; // x0
  int32_t v24; // w8
  UILabel_o *v25; // x23
  Il2CppObject *v26; // x24
  int32_t v27; // w28
  int v28; // s1 OVERLAPPED
  int v29; // s2
  float v30; // s3
  float v31; // s0
  Il2CppObject *Item; // x0
  UnityEngine_Transform_o *v33; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v35; // x0
  int32_t v36; // w9
  int32_t index[2]; // [xsp+18h] [xbp-58h] BYREF

  v14 = this;
  if ( (byte_5935C7C & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_UIPanel___);
    sub_21FFC50(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_21FFC50(&Method_UnityEngine_Object_Instantiate_UILabel___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    this = (SoundTestMenu_o *)sub_21FFC50(&StringLiteral_26841/*"曲数 : "*/);
    byte_5935C7C = 1;
  }
  *(_QWORD *)index = 0;
  if ( !itemParent )
    goto LABEL_35;
  transform = UnityEngine_GameObject__get_transform(itemParent, 0);
  TransformHelper__DestroyChildren(transform, 0, 0);
  this = (SoundTestMenu_o *)UnityEngine_GameObject__get_transform(itemParent, 0);
  if ( !this )
    goto LABEL_35;
  UnityEngine_Transform__DetachChildren((UnityEngine_Transform_o *)this, 0);
  if ( !itemGrid )
    goto LABEL_35;
  if ( !itemNameList )
    goto LABEL_35;
  if ( !scrollView )
    goto LABEL_35;
  cellHeight = itemGrid->fields.cellHeight;
  size = itemNameList->fields._size;
  this = (SoundTestMenu_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)scrollView, 0);
  if ( !this )
    goto LABEL_35;
  this = (SoundTestMenu_o *)UnityEngine_Component__GetComponent_object_(
                              (UnityEngine_Component_o *)this,
                              (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
  if ( !this )
    goto LABEL_35;
  ViewSize = UIPanel__GetViewSize((UIPanel_o *)this, 0);
  this = (SoundTestMenu_o *)scrollView->fields.verticalScrollBar;
  if ( (float)(cellHeight * (float)size) <= ViewSize.fields.y )
  {
    if ( !this )
      goto LABEL_35;
    this = (SoundTestMenu_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !this )
      goto LABEL_35;
    v19 = 0;
  }
  else
  {
    if ( !this )
      goto LABEL_35;
    this = (SoundTestMenu_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !this )
      goto LABEL_35;
    v19 = 1;
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v19, 0);
  if ( cntCalc )
  {
    bgmCount = v14->fields.bgmCount;
    index[1] = itemNameList->fields._size;
    v23 = System_Int32__ToString((int32_t)&index[1], 0);
    this = (SoundTestMenu_o *)System_String__Concat_75438412((System_String_o *)StringLiteral_26841/*"曲数 : "*/, v23, 0);
    if ( !bgmCount )
      goto LABEL_35;
    UILabel__set_text(bgmCount, (System_String_o *)this, 0);
  }
  v24 = itemNameList->fields._size;
  index[0] = 0;
  if ( v24 >= 1 )
  {
    v25 = 0;
    while ( 1 )
    {
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v20, v21);
      v26 = UnityEngine_Object__Instantiate_object_(
              (Il2CppObject *)itemLabelSeed,
              (const MethodInfo_38C0004 *)Method_UnityEngine_Object_Instantiate_UILabel___);
      this = (SoundTestMenu_o *)System_Int32__ToString((int32_t)index, 0);
      if ( !v26 )
        break;
      UnityEngine_Object__set_name((UnityEngine_Object_o *)v26, (System_String_o *)this, 0);
      v27 = index[0];
      v28 = 0;
      v29 = 0;
      v30 = 1.0;
      v31 = index[0] ? 0.0 : 1.0;
      UIWidget__set_color((UIWidget_o *)v26, *(UnityEngine_Color_o *)(&v28 - 1), 0);
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)itemNameList,
               index[0],
               (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_string__get_Item__);
      UILabel__set_text((UILabel_o *)v26, (System_String_o *)Item, 0);
      this = (SoundTestMenu_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v26, 0);
      if ( !this )
        break;
      if ( !v27 )
        v25 = (UILabel_o *)v26;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
      v33 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v26, 0);
      UIGrid__AddChild(itemGrid, v33, 0);
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v26, 0);
      GameObjectExtensions__ResetLocalPosition(gameObject, 0);
      v35 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v26, 0);
      GameObjectExtensions__ResetLocalScale(v35, 0);
      v36 = itemNameList->fields._size;
      if ( ++index[0] >= v36 )
        goto LABEL_34;
    }
LABEL_35:
    sub_21FFECC(this, itemParent);
  }
  v25 = 0;
LABEL_34:
  ((void (__fastcall *)(UIGrid_o *, const MethodInfo *))itemGrid->klass->vtable._8_Reposition.methodPtr)(
    itemGrid,
    itemGrid->klass->vtable._8_Reposition.method);
  UIScrollView__ResetPosition(scrollView, 0);
  return v25;
}


// local variable allocation has failed, the output may be wrong!
void SoundTestMenu__createSeItem(SoundTestMenu_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *seItemParent; // x0
  UnityEngine_Transform_o *transform; // x0
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  struct UIGrid_o *seGrid; // x8
  struct System_Collections_Generic_List_string__o *inputSeCueName; // x9
  float cellHeight; // s8
  int size; // w20
  UnityEngine_Vector2_o ViewSize; // kr00_8
  struct UIScrollView_o *seScrollView; // x8
  bool v17; // w1
  struct System_Collections_Generic_List_string__o *v18; // x8
  UILabel_o *seCount; // x20
  System_String_o *v20; // x0
  __int64 v21; // x2
  struct System_Collections_Generic_List_string__o *v22; // x8
  int32_t v23; // w9
  Il2CppObject *seItemLabelSeed; // x20
  Il2CppObject *v25; // x20
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  float v32; // s0 OVERLAPPED
  int v33; // s1
  int v34; // s2
  float v35; // s3
  Il2CppObject *Item; // x0
  UnityEngine_Transform_o *v37; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t index[2]; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_5935C87 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_UIPanel___);
    sub_21FFC50(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_21FFC50(&Method_UnityEngine_Object_Instantiate_UILabel___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_11997/*"SE Count : "*/);
    byte_5935C87 = 1;
  }
  seItemParent = this->fields.seItemParent;
  *(_QWORD *)index = 0;
  if ( !seItemParent )
    goto LABEL_36;
  transform = UnityEngine_GameObject__get_transform(seItemParent, 0);
  TransformHelper__DestroyChildren(transform, 0, 0);
  seItemParent = this->fields.seItemParent;
  if ( !seItemParent )
    goto LABEL_36;
  seItemParent = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(seItemParent, 0);
  if ( !seItemParent )
    goto LABEL_36;
  UnityEngine_Transform__DetachChildren((UnityEngine_Transform_o *)seItemParent, 0);
  this->fields.selectSeObj = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.selectSeObj, 0, v5, v6, v7, v8, v9, v10);
  seGrid = this->fields.seGrid;
  if ( !seGrid )
    goto LABEL_36;
  inputSeCueName = this->fields.inputSeCueName;
  if ( !inputSeCueName )
    goto LABEL_36;
  seItemParent = (UnityEngine_GameObject_o *)this->fields.seScrollView;
  if ( !seItemParent )
    goto LABEL_36;
  cellHeight = seGrid->fields.cellHeight;
  size = inputSeCueName->fields._size;
  seItemParent = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                               (UnityEngine_Component_o *)seItemParent,
                                               0);
  if ( !seItemParent )
    goto LABEL_36;
  seItemParent = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                               (UnityEngine_Component_o *)seItemParent,
                                               (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
  if ( !seItemParent )
    goto LABEL_36;
  ViewSize = UIPanel__GetViewSize((UIPanel_o *)seItemParent, 0);
  seScrollView = this->fields.seScrollView;
  if ( (float)(cellHeight * (float)size) <= ViewSize.fields.y )
  {
    if ( !seScrollView )
      goto LABEL_36;
    seItemParent = (UnityEngine_GameObject_o *)seScrollView->fields.verticalScrollBar;
    if ( !seItemParent )
      goto LABEL_36;
    seItemParent = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)seItemParent, 0);
    if ( !seItemParent )
      goto LABEL_36;
    v17 = 0;
  }
  else
  {
    if ( !seScrollView )
      goto LABEL_36;
    seItemParent = (UnityEngine_GameObject_o *)seScrollView->fields.verticalScrollBar;
    if ( !seItemParent )
      goto LABEL_36;
    seItemParent = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)seItemParent, 0);
    if ( !seItemParent )
      goto LABEL_36;
    v17 = 1;
  }
  UnityEngine_GameObject__SetActive(seItemParent, v17, 0);
  v18 = this->fields.inputSeCueName;
  if ( !v18 )
    goto LABEL_36;
  seCount = this->fields.seCount;
  index[1] = v18->fields._size;
  v20 = System_Int32__ToString((int32_t)&index[1], 0);
  seItemParent = (UnityEngine_GameObject_o *)System_String__Concat_75438412(
                                               (System_String_o *)StringLiteral_11997/*"SE Count : "*/,
                                               v20,
                                               0);
  if ( !seCount )
    goto LABEL_36;
  UILabel__set_text(seCount, (System_String_o *)seItemParent, 0);
  v22 = this->fields.inputSeCueName;
  index[0] = 0;
  if ( !v22 )
    goto LABEL_36;
  v23 = 0;
  while ( v23 < v22->fields._size )
  {
    seItemLabelSeed = (Il2CppObject *)this->fields.seItemLabelSeed;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v21);
    v25 = UnityEngine_Object__Instantiate_object_(
            seItemLabelSeed,
            (const MethodInfo_38C0004 *)Method_UnityEngine_Object_Instantiate_UILabel___);
    seItemParent = (UnityEngine_GameObject_o *)System_Int32__ToString((int32_t)index, 0);
    if ( v25 )
    {
      UnityEngine_Object__set_name((UnityEngine_Object_o *)v25, (System_String_o *)seItemParent, 0);
      if ( index[0] )
      {
        v32 = 0.0;
        v33 = 0;
        v34 = 0;
      }
      else
      {
        this->fields.selectSeObj = (struct UILabel_o *)v25;
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)&this->fields.selectSeObj,
          (int32_t)v25,
          v26,
          v27,
          v28,
          v29,
          v30,
          v31);
        v33 = 0;
        v34 = 0;
        v32 = 1.0;
      }
      v35 = 1.0;
      UIWidget__set_color((UIWidget_o *)v25, *(UnityEngine_Color_o *)&v32, 0);
      seItemParent = (UnityEngine_GameObject_o *)this->fields.inputSeCueName;
      if ( seItemParent )
      {
        Item = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)seItemParent,
                 index[0],
                 (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_string__get_Item__);
        UILabel__set_text((UILabel_o *)v25, (System_String_o *)Item, 0);
        seItemParent = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v25, 0);
        if ( seItemParent )
        {
          UnityEngine_GameObject__SetActive(seItemParent, 1, 0);
          seItemParent = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                       (UnityEngine_Component_o *)v25,
                                                       0);
          if ( this->fields.seGrid )
          {
            v37 = (UnityEngine_Transform_o *)seItemParent;
            seItemParent = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                         (UnityEngine_Component_o *)this->fields.seGrid,
                                                         0);
            if ( v37 )
            {
              UnityEngine_Transform__set_parent(v37, (UnityEngine_Transform_o *)seItemParent, 0);
              gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v25, 0);
              GameObjectExtensions__ResetLocalScale(gameObject, 0);
              v22 = this->fields.inputSeCueName;
              v23 = ++index[0];
              if ( v22 )
                continue;
            }
          }
        }
      }
    }
    goto LABEL_36;
  }
  seItemParent = (UnityEngine_GameObject_o *)this->fields.seGrid;
  if ( !seItemParent
    || (((void (__fastcall *)(UnityEngine_GameObject_o *, Il2CppClass *))seItemParent->klass[1]._1.element_class)(
          seItemParent,
          seItemParent->klass[1]._1.castClass),
        (seItemParent = (UnityEngine_GameObject_o *)this->fields.seScrollView) == 0) )
  {
LABEL_36:
    sub_21FFECC(seItemParent, method);
  }
  UIScrollView__ResetPosition((UIScrollView_o *)seItemParent, 0);
}


int32_t SoundTestMenu__customCpkSort(
        SoundTestMenu_o *this,
        UnityEngine_Transform_o *a,
        UnityEngine_Transform_o *b,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4

  return SoundTestMenu__sort(this, a, b, this->fields.sortCpkType, v4);
}


int32_t SoundTestMenu__customSort(
        SoundTestMenu_o *this,
        UnityEngine_Transform_o *a,
        UnityEngine_Transform_o *b,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *seRoot; // x0
  _BOOL8 activeSelf; // x0
  const MethodInfo *v9; // x4
  __int64 v10; // x8

  seRoot = this->fields.seRoot;
  if ( !seRoot )
    sub_21FFECC(0, a);
  activeSelf = UnityEngine_GameObject__get_activeSelf(seRoot, 0);
  v10 = 512;
  if ( activeSelf )
    v10 = 508;
  return SoundTestMenu__sort((SoundTestMenu_o *)activeSelf, a, b, *(_DWORD *)((char *)&this->klass + v10), v9);
}


void SoundTestMenu__endCallback(SoundTestMenu_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct SoundTestMenu_CallbackFunc_o *endCallbackFunc; // x19
  MissionNaviTransitionBoardItem_o *p_endCallbackFunc; // x0

  endCallbackFunc = this->fields.endCallbackFunc;
  if ( endCallbackFunc )
  {
    p_endCallbackFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.endCallbackFunc;
    p_endCallbackFunc->klass = 0;
    sub_21FFBF4(p_endCallbackFunc, 0, v2, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(intptr_t, intptr_t))endCallbackFunc->fields.invoke_impl)(
      endCallbackFunc->fields.method_code,
      endCallbackFunc->fields.method);
  }
}


void SoundTestMenu__endInput(SoundTestMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  SoundTestMenu_o *v4; // x0
  const MethodInfo *v5; // x2
  System_String_o *loadSeCueSheetName; // x1
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  UILineInput_o *seAssetNameInput; // x0
  struct System_Collections_Generic_List_string__o *bgmCpkList; // x8
  int32_t size; // w2
  int v16; // w9

  if ( (byte_5935C79 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_string__Clear__);
    byte_5935C79 = 1;
  }
  if ( this->fields.state )
  {
    SoundTestMenu__stopBgm(this, method);
    SoundTestMenu__stopSe(this, v3);
    loadSeCueSheetName = this->fields.loadSeCueSheetName;
    if ( loadSeCueSheetName )
    {
      SoundTestMenu__releaseSe(v4, loadSeCueSheetName, v5);
      this->fields.loadSeCueSheetName = 0;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.loadSeCueSheetName, 0, v7, v8, v9, v10, v11, v12);
    }
    seAssetNameInput = this->fields.seAssetNameInput;
    if ( !seAssetNameInput
      || (UILineInput__SetInputEnable(seAssetNameInput, 0, 0), (bgmCpkList = this->fields.bgmCpkList) == 0) )
    {
      sub_21FFECC(seAssetNameInput, loadSeCueSheetName);
    }
    size = bgmCpkList->fields._size;
    v16 = bgmCpkList->fields._version + 1;
    bgmCpkList->fields._size = 0;
    bgmCpkList->fields._version = v16;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)bgmCpkList->fields._items, 0, size, 0);
    UnityEngine_Input__set_imeCompositionMode(0, 0);
  }
}


void SoundTestMenu__loadSE(
        SoundTestMenu_o *this,
        System_String_o *cueSheetName,
        System_Action_o *callBack,
        const MethodInfo *method)
{
  SeManager_c *v6; // x0
  struct System_String_array *LoadSeList; // x21
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v9; // x22

  if ( (byte_5935C85 & 1) == 0 )
  {
    sub_21FFC50(&SeManager_TypeInfo);
    sub_21FFC50(&SoundManager_TypeInfo);
    byte_5935C85 = 1;
  }
  if ( !*(&SeManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo, cueSheetName, callBack);
  if ( !byte_5935CFA )
  {
    sub_21FFC50(&SeManager_TypeInfo);
    byte_5935CFA = 1;
  }
  v6 = SeManager_TypeInfo;
  if ( !*(&SeManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo, cueSheetName, callBack);
    v6 = SeManager_TypeInfo;
  }
  LoadSeList = v6->static_fields->LoadSeList;
  if ( !LoadSeList )
    sub_21FFECC(v6, cueSheetName);
  max_length = LoadSeList->max_length;
  if ( (int)max_length < 1 )
  {
LABEL_15:
    if ( !*(&SoundManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, cueSheetName, callBack);
    SoundManager__loadAudioAssetStorage(cueSheetName, callBack, 1, 0);
  }
  else
  {
    v9 = 0;
    while ( 1 )
    {
      if ( v9 >= (unsigned int)max_length )
        sub_21FFED4(v6);
      v6 = (SeManager_c *)System_String__Compare_75470196(cueSheetName, LoadSeList->m_Items[v9], 1, 0);
      if ( !(_DWORD)v6 )
        break;
      LODWORD(max_length) = LoadSeList->max_length;
      if ( (__int64)++v9 >= (int)max_length )
        goto LABEL_15;
    }
    if ( callBack )
      ActionExtensions__Call(callBack, 0);
  }
}


void SoundTestMenu__moveScrollViewSelectItem(
        SoundTestMenu_o *this,
        UIScrollView_o *scrollView,
        UnityEngine_GameObject_o *selectObj,
        const MethodInfo *method)
{
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v6; // 0:s0.4,4:s1.4,8:s2.4

  if ( !selectObj
    || (this = (SoundTestMenu_o *)UnityEngine_GameObject__get_transform(selectObj, 0)) == 0
    || (position = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)this, 0), !scrollView) )
  {
    sub_21FFECC(this, scrollView);
  }
  v6.fields.y = -position.fields.y;
  v6.fields.x = 0.0;
  v6.fields.z = 0.0;
  UIScrollView__MoveAbsolute(scrollView, v6, 0);
  UIScrollView__UpdatePosition(scrollView, 0);
}


void SoundTestMenu__offsetSelectObj(
        SoundTestMenu_o *this,
        UIScrollView_o *scrollView,
        UILabel_o **selectObj,
        UIGrid_o *parentGrid,
        System_Collections_Generic_List_string__o *cueNameList,
        int32_t addIdxVal,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v12; // x24
  int32_t v13; // w25
  SoundTestMenu_o *v14; // x26
  Il2CppObject *Component_object; // x0
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  SoundTestMenu_o *gameObject; // x0
  const MethodInfo *v23; // x3
  UnityEngine_Color_o v24; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v25; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_5935C80 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_UILabel___);
    sub_21FFC50(&Method_System_Collections_Generic_List_Transform__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_string__get_Count__);
    this = (SoundTestMenu_o *)sub_21FFC50(&Method_System_Collections_Generic_List_Transform__get_Item__);
    byte_5935C80 = 1;
  }
  if ( !cueNameList )
    goto LABEL_21;
  if ( cueNameList->fields._size )
  {
    this = (SoundTestMenu_o *)*selectObj;
    if ( !*selectObj )
      goto LABEL_21;
    v24.fields.r = 0.0;
    v24.fields.g = 0.0;
    v24.fields.b = 0.0;
    v24.fields.a = 1.0;
    UIWidget__set_color((UIWidget_o *)this, v24, 0);
    if ( !parentGrid )
      goto LABEL_21;
    this = (SoundTestMenu_o *)UIGrid__GetChildList(parentGrid, 0);
    if ( !this )
      goto LABEL_21;
    v12 = (System_Collections_Generic_List_object__o *)this;
    if ( SLODWORD(this->fields.m_CancellationTokenSource) >= 1 )
    {
      v13 = 0;
      while ( 1 )
      {
        this = (SoundTestMenu_o *)System_Collections_Generic_List_object___get_Item(
                                    v12,
                                    v13,
                                    (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_Transform__get_Item__);
        if ( !this )
          break;
        this = (SoundTestMenu_o *)UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
        if ( !*selectObj )
          break;
        v14 = this;
        this = (SoundTestMenu_o *)UnityEngine_Object__get_name((UnityEngine_Object_o *)*selectObj, 0);
        if ( !v14 )
          break;
        if ( System_String__Equals_75473208((System_String_o *)v14, (System_String_o *)this, 0) )
          goto LABEL_16;
        if ( ++v13 >= v12->fields._size )
          goto LABEL_15;
      }
LABEL_21:
      sub_21FFECC(this, scrollView);
    }
LABEL_15:
    v13 = 0;
LABEL_16:
    this = (SoundTestMenu_o *)UIGrid__GetChild(
                                parentGrid,
                                (v13 + addIdxVal + cueNameList->fields._size) % cueNameList->fields._size,
                                0);
    if ( !this )
      goto LABEL_21;
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)this,
                         (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_UILabel___);
    *selectObj = (UILabel_o *)Component_object;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)selectObj, (int32_t)Component_object, v16, v17, v18, v19, v20, v21);
    this = (SoundTestMenu_o *)*selectObj;
    if ( !*selectObj )
      goto LABEL_21;
    v25.fields.g = 0.0;
    v25.fields.b = 0.0;
    v25.fields.r = 1.0;
    v25.fields.a = 1.0;
    UIWidget__set_color((UIWidget_o *)this, v25, 0);
    this = (SoundTestMenu_o *)*selectObj;
    if ( !*selectObj )
      goto LABEL_21;
    gameObject = (SoundTestMenu_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    SoundTestMenu__moveScrollViewSelectItem(gameObject, scrollView, (UnityEngine_GameObject_o *)gameObject, v23);
  }
}


void SoundTestMenu__onClickAllCpkCueListup(SoundTestMenu_o *this, const MethodInfo *method)
{
  System_Collections_IEnumerator_o *v3; // x1

  v3 = SoundTestMenu__allCpkCueListup(this, method);
  UnityEngine_MonoBehaviour__StartCoroutine_83231452((UnityEngine_MonoBehaviour_o *)this, v3, 0);
}


void SoundTestMenu__onClickBgmCpkItem(SoundTestMenu_o *this, UnityEngine_GameObject_o *obj, const MethodInfo *method)
{
  UnityEngine_Object_o *selectBgmCpkObj; // x21
  _BOOL8 v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x3
  struct UILabel_o *v9; // x8
  System_String_o **p_mText; // x8
  System_String_o *v11; // x21
  struct UILabel_o *v12; // x8
  const MethodInfo *v13; // x1

  if ( (byte_5935C7D & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5935C7D = 1;
  }
  selectBgmCpkObj = (UnityEngine_Object_o *)this->fields.selectBgmCpkObj;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, obj, method);
  v6 = UnityEngine_Object__op_Inequality(selectBgmCpkObj, 0, 0);
  if ( v6 )
  {
    v9 = this->fields.selectBgmCpkObj;
    if ( !v9 )
      goto LABEL_13;
    p_mText = &v9->fields.mText;
  }
  else
  {
    p_mText = *(System_String_o ***)(qword_594C0B8 + 184);
  }
  v11 = *p_mText;
  SoundTestMenu__selectItem((SoundTestMenu_o *)v6, &this->fields.selectBgmCpkObj, obj, v8);
  v12 = this->fields.selectBgmCpkObj;
  if ( !v12 )
LABEL_13:
    sub_21FFECC(v6, v7);
  if ( System_String__op_Inequality(v12->fields.mText, v11, 0) )
    SoundTestMenu__createBgmPlayList(this, v13);
}


void SoundTestMenu__onClickBgmItem(SoundTestMenu_o *this, UnityEngine_GameObject_o *obj, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  SoundTestMenu__selectItem(this, &this->fields.selectBgmObj, obj, v3);
}


void SoundTestMenu__onClickBgmNext(SoundTestMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  SoundTestMenu__bgmPlay(this, 1, v2);
}


void SoundTestMenu__onClickBgmPrev(SoundTestMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  SoundTestMenu__bgmPlay(this, -1, v2);
}


void SoundTestMenu__onClickCancel(SoundTestMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  if ( this->fields.state == 1 )
  {
    SoundTestMenu__endInput(this, method);
    this->fields.state = 3;
    SoundTestMenu__endCallback(this, v3);
  }
}


void SoundTestMenu__onClickChangeSoundTestType(SoundTestMenu_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *seRoot; // x20
  SoundTestMenu_o *v3; // x19
  bool activeSelf; // w0
  UnityEngine_GameObject_o *bgmRoot; // x20
  bool v6; // w0
  const MethodInfo *v7; // x1
  const MethodInfo *v8; // x1
  const MethodInfo *v9; // x1

  seRoot = this->fields.seRoot;
  if ( !seRoot )
    goto LABEL_7;
  v3 = this;
  activeSelf = UnityEngine_GameObject__get_activeSelf(this->fields.seRoot, 0);
  UnityEngine_GameObject__SetActive(seRoot, !activeSelf, 0);
  bgmRoot = v3->fields.bgmRoot;
  if ( !bgmRoot
    || (v6 = UnityEngine_GameObject__get_activeSelf(v3->fields.bgmRoot, 0),
        UnityEngine_GameObject__SetActive(bgmRoot, !v6, 0),
        SoundTestMenu__switchButtonLabelChange(v3, v7),
        SoundTestMenu__sortApply(v3, v8),
        (this = (SoundTestMenu_o *)v3->fields.bgmRoot) == 0) )
  {
LABEL_7:
    sub_21FFECC(this, method);
  }
  if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)this, 0) )
    SoundTestMenu__sortCpkApply(v3, v9);
}


void SoundTestMenu__onClickCpkNext(SoundTestMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x6
  const MethodInfo *v4; // x1

  SoundTestMenu__offsetSelectObj(
    this,
    this->fields.bgmCpkScrollView,
    &this->fields.selectBgmCpkObj,
    this->fields.bgmCpkGrid,
    this->fields.bgmCpkList,
    1,
    v2);
  SoundTestMenu__createBgmPlayList(this, v4);
}


void SoundTestMenu__onClickCpkPrev(SoundTestMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x6
  const MethodInfo *v4; // x1

  SoundTestMenu__offsetSelectObj(
    this,
    this->fields.bgmCpkScrollView,
    &this->fields.selectBgmCpkObj,
    this->fields.bgmCpkGrid,
    this->fields.bgmCpkList,
    -1,
    v2);
  SoundTestMenu__createBgmPlayList(this, v4);
}


void SoundTestMenu__onClickCpkSearchButton(SoundTestMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x24
  __int64 v4; // x1
  UIGrid_o *bgmCpkGrid; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v6; // x25
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  struct System_String_o **v13; // x23
  UILabel_o *selectBgmCpkObj; // x26
  UIGrid_o *v15; // x21
  System_Collections_Generic_List_string__o *bgmCpkList; // x22
  bool v17; // w27
  System_Func_object__bool__o *v18; // x28
  UIGrid_c *klass; // x8
  UIGrid_o *v20; // x24
  char v21; // w25
  __int64 v22; // x9
  int32_t *p_offset; // x10
  __int64 v24; // x0
  __int64 v25; // x0
  __int64 v26; // x1
  __int64 v27; // x27
  UnityEngine_Object_o *v28; // x24
  __int64 v29; // x8
  __int64 v30; // x9
  int *v31; // x10
  __int64 v32; // x0
  __int64 v33; // x0
  __int64 v34; // x1
  System_String_o *v35; // x2
  System_String_o *v36; // x3
  int32_t v37; // w4
  int32_t v38; // w5
  bool v39; // w6
  bool v40; // w7
  __int64 v41; // x8
  __int64 v42; // x9
  int *v43; // x10
  __int64 v44; // x0
  __int64 v45; // x1
  __int64 v46; // x2
  UnityEngine_Component_o *v47; // x27
  _BOOL8 v48; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v50; // x1
  UnityEngine_Object_o *v51; // x25
  __int64 v52; // x1
  __int64 v53; // x2
  UnityEngine_Object_o *v54; // x27
  bool v55; // w0
  __int64 v56; // x8
  __int64 v57; // x9
  int *v58; // x10
  __int64 v59; // x0
  struct System_String_o *v60; // x1
  __int64 v61; // x1
  __int64 v62; // x2
  SoundTestMenu_o *v63; // x0
  const MethodInfo *v64; // x3
  const MethodInfo *v65; // x6
  int32_t v66; // w1
  System_String_o *v67; // x2
  System_String_o *v68; // x3
  int32_t v69; // w4
  int32_t v70; // w5
  bool v71; // w6
  bool v72; // w7
  const MethodInfo *v73; // x1
  __int64 v74; // x2
  CommonUI_o *v75; // x19
  SoundTestMenu___c_c *v76; // x8
  struct SoundTestMenu___c_StaticFields *static_fields; // x9
  System_Action_o *_9__139_1; // x22
  System_String_o *v79; // x20
  System_String_o *v80; // x21
  Il2CppObject *v81; // x23
  struct SoundTestMenu___c_StaticFields *v82; // x0
  System_String_o *v83; // x2
  System_String_o *v84; // x3
  int32_t v85; // w4
  int32_t v86; // w5
  bool v87; // w6
  bool v88; // w7
  UIScrollView_o *scrollView; // [xsp+38h] [xbp-88h]
  __int64 v90; // [xsp+50h] [xbp-70h]
  UILabel_o *prevSelectLabel; // [xsp+58h] [xbp-68h] BYREF

  if ( (byte_5935C9E & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_UILabel___);
    sub_21FFC50(&Method_System_Linq_Enumerable_Where_Transform___);
    sub_21FFC50(&System_Func_Transform__bool__TypeInfo);
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IEnumerable_Transform__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IEnumerator_Transform__TypeInfo);
    sub_21FFC50(&System_Collections_IEnumerator_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&Method_SoundTestMenu___c__onClickCpkSearchButton_b__139_1__);
    sub_21FFC50(&Method_SoundTestMenu___c__DisplayClass139_0__onClickCpkSearchButton_b__0__);
    sub_21FFC50(&SoundTestMenu___c__DisplayClass139_0_TypeInfo);
    sub_21FFC50(&SoundTestMenu___c_TypeInfo);
    sub_21FFC50(&StringLiteral_26739/*"そのサウンドはcpkリスト内に存在しません"*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_5935C9E = 1;
  }
  prevSelectLabel = 0;
  v3 = sub_21FFEBC(SoundTestMenu___c__DisplayClass139_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  bgmCpkGrid = this->fields.bgmCpkGrid;
  if ( !bgmCpkGrid )
    goto LABEL_72;
  bgmCpkGrid = (UIGrid_o *)UIGrid__GetChildList(bgmCpkGrid, 0);
  if ( !this->fields.bgmCpkSearchNameInput )
    goto LABEL_72;
  v6 = (System_Collections_Generic_IEnumerable_TSource__o *)bgmCpkGrid;
  bgmCpkGrid = (UIGrid_o *)UILineInput__GetText(this->fields.bgmCpkSearchNameInput, 0);
  if ( !v3 )
    goto LABEL_72;
  *(_QWORD *)(v3 + 16) = bgmCpkGrid;
  v13 = (struct System_String_o **)(v3 + 16);
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v3 + 16), (int32_t)bgmCpkGrid, v7, v8, v9, v10, v11, v12);
  selectBgmCpkObj = this->fields.selectBgmCpkObj;
  bgmCpkGrid = *(UIGrid_o **)(v3 + 16);
  prevSelectLabel = selectBgmCpkObj;
  if ( !bgmCpkGrid )
    goto LABEL_72;
  v15 = this->fields.bgmCpkGrid;
  bgmCpkList = this->fields.bgmCpkList;
  scrollView = this->fields.bgmCpkScrollView;
  v17 = System_String__Equals_75473208((System_String_o *)bgmCpkGrid, this->fields.cpkSearchNamePrev, 0);
  v18 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_Transform__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v18,
    (Il2CppObject *)v3,
    Method_SoundTestMenu___c__DisplayClass139_0__onClickCpkSearchButton_b__0__,
    0);
  bgmCpkGrid = (UIGrid_o *)System_Linq_Enumerable__Where_object_(
                             v6,
                             (System_Func_TSource__bool__o *)v18,
                             (const MethodInfo_386FFB0 *)Method_System_Linq_Enumerable_Where_Transform___);
  if ( !bgmCpkGrid )
    goto LABEL_72;
  klass = bgmCpkGrid->klass;
  v20 = bgmCpkGrid;
  v21 = !v17;
  v22 = *(unsigned __int16 *)&bgmCpkGrid->klass->_2.rank;
  if ( *(_WORD *)&bgmCpkGrid->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_Transform__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_Transform__TypeInfo )
    {
      --v22;
      p_offset += 4;
      if ( !v22 )
        goto LABEL_12;
    }
    v24 = (__int64)&klass->vtable + 16 * *p_offset;
  }
  else
  {
LABEL_12:
    v24 = sub_2237E2C(bgmCpkGrid, System_Collections_Generic_IEnumerable_Transform__TypeInfo, 0);
  }
  v25 = (*(__int64 (__fastcall **)(UIGrid_o *, _QWORD))v24)(v20, *(_QWORD *)(v24 + 8));
  v90 = v25;
  if ( !v25 )
    sub_21FFECC(v25, v26);
  v27 = v25;
  v28 = 0;
  while ( 1 )
  {
    v29 = *(_QWORD *)v27;
    v30 = *(unsigned __int16 *)(*(_QWORD *)v27 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v27 + 302LL) )
    {
      v31 = (int *)(*(_QWORD *)(v29 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v31 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v30;
        v31 += 4;
        if ( !v30 )
          goto LABEL_20;
      }
      v32 = v29 + 16LL * *v31 + 312;
    }
    else
    {
LABEL_20:
      v32 = sub_2237E2C(v27, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v33 = (*(__int64 (__fastcall **)(__int64, _QWORD))v32)(v27, *(_QWORD *)(v32 + 8));
    if ( (v33 & 1) == 0 )
    {
      v47 = 0;
      goto LABEL_42;
    }
    if ( !v90 )
      sub_21FFECC(v33, v34);
    v41 = *(_QWORD *)v90;
    v42 = *(unsigned __int16 *)(*(_QWORD *)v90 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v90 + 302LL) )
    {
      v43 = (int *)(*(_QWORD *)(v41 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_Transform__c **)v43 - 1) != System_Collections_Generic_IEnumerator_Transform__TypeInfo )
      {
        --v42;
        v43 += 4;
        if ( !v42 )
          goto LABEL_28;
      }
      v44 = v41 + 16LL * *v43 + 312;
    }
    else
    {
LABEL_28:
      v44 = sub_2237E2C(v90, System_Collections_Generic_IEnumerator_Transform__TypeInfo, 0);
    }
    v47 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v44)(v90, *(_QWORD *)(v44 + 8));
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v45, v46);
    v48 = UnityEngine_Object__op_Equality(v28, 0, 0);
    if ( v48 )
      v28 = (UnityEngine_Object_o *)v47;
    if ( (v21 & 1) != 0 )
      break;
    if ( !v47 )
      sub_21FFECC(v48, v34);
    gameObject = UnityEngine_Component__get_gameObject(v47, 0);
    if ( !selectBgmCpkObj )
      sub_21FFECC(gameObject, v50);
    v51 = (UnityEngine_Object_o *)gameObject;
    v54 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)selectBgmCpkObj, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v52, v53);
    v55 = UnityEngine_Object__op_Equality(v51, v54, 0);
    v27 = v90;
    v21 = v55;
  }
  v21 = 1;
LABEL_42:
  if ( v90 )
  {
    v56 = *(_QWORD *)v90;
    v57 = *(unsigned __int16 *)(*(_QWORD *)v90 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v90 + 302LL) )
    {
      v58 = (int *)(*(_QWORD *)(v56 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v58 - 1) != System_IDisposable_TypeInfo )
      {
        --v57;
        v58 += 4;
        if ( !v57 )
          goto LABEL_47;
      }
      v59 = v56 + 16LL * *v58 + 312;
    }
    else
    {
LABEL_47:
      v59 = sub_2237E2C(v90, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v59)(v90, *(_QWORD *)(v59 + 8));
  }
  if ( (v21 & 1) != 0 )
  {
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v34, v35);
    if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v47, 0, 0) )
      v47 = (UnityEngine_Component_o *)v28;
  }
  v60 = *v13;
  this->fields.cpkSearchNamePrev = *v13;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.cpkSearchNamePrev,
    (int32_t)v60,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v61, v62);
  bgmCpkGrid = (UIGrid_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v47, 0, 0);
  if ( ((unsigned __int8)bgmCpkGrid & 1) != 0 )
  {
    if ( v47 )
    {
      bgmCpkGrid = (UIGrid_o *)UnityEngine_Component__GetComponent_object_(
                                 v47,
                                 (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_UILabel___);
      if ( bgmCpkGrid )
      {
        v63 = (SoundTestMenu_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)bgmCpkGrid, 0);
        SoundTestMenu__selectItem(v63, &prevSelectLabel, (UnityEngine_GameObject_o *)v63, v64);
        SoundTestMenu__offsetSelectObj(this, scrollView, &prevSelectLabel, v15, bgmCpkList, 0, v65);
        v66 = (int)prevSelectLabel;
        this->fields.selectBgmCpkObj = prevSelectLabel;
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)&this->fields.selectBgmCpkObj,
          v66,
          v67,
          v68,
          v69,
          v70,
          v71,
          v72);
        SoundTestMenu__createBgmPlayList(this, v73);
        return;
      }
    }
LABEL_72:
    sub_21FFECC(bgmCpkGrid, v4);
  }
  bgmCpkGrid = (UIGrid_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v75 = (CommonUI_o *)bgmCpkGrid;
  v76 = SoundTestMenu___c_TypeInfo;
  if ( !*(&SoundTestMenu___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(SoundTestMenu___c_TypeInfo, v4, v74);
    v76 = SoundTestMenu___c_TypeInfo;
  }
  static_fields = v76->static_fields;
  _9__139_1 = static_fields->__9__139_1;
  v79 = (System_String_o *)StringLiteral_26739/*"そのサウンドはcpkリスト内に存在しません"*/;
  v80 = (System_String_o *)StringLiteral_1/*""*/;
  if ( !_9__139_1 )
  {
    if ( !*(&v76->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v76, v4, v74);
      static_fields = SoundTestMenu___c_TypeInfo->static_fields;
    }
    v81 = (Il2CppObject *)static_fields->__9;
    _9__139_1 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(_9__139_1, v81, Method_SoundTestMenu___c__onClickCpkSearchButton_b__139_1__, 0);
    v82 = SoundTestMenu___c_TypeInfo->static_fields;
    v82->__9__139_1 = _9__139_1;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v82->__9__139_1, (int32_t)_9__139_1, v83, v84, v85, v86, v87, v88);
  }
  if ( !v75 )
    goto LABEL_72;
  CommonUI__OpenNotificationDialog(v75, v80, v79, _9__139_1, -1, 0, 0, 0, 0, 0, 1, 0, 0, 0.0, 0, 0);
}


void SoundTestMenu__onClickCpkSortButton(SoundTestMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  int32_t sortCpkType; // w21
  Il2CppType *v5; // x20
  System_RuntimeTypeHandle_o v6; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  System_Type_o *TypeFromHandle; // x20
  System_String_array *Names; // x0
  const MethodInfo *v11; // x1

  if ( (byte_5935C9F & 1) == 0 )
  {
    sub_21FFC50(&SoundTestMenu_SortType_var);
    byte_5935C9F = 1;
  }
  sortCpkType = this->fields.sortCpkType;
  v5 = SoundTestMenu_SortType_var;
  if ( !*(_DWORD *)(qword_594C108 + 228) )
    j_il2cpp_runtime_class_init_0(qword_594C108, method, v2);
  v6.fields.value = (intptr_t)v5;
  TypeFromHandle = System_Type__GetTypeFromHandle(v6, 0);
  if ( !*(_DWORD *)(qword_594C0C0 + 228) )
    j_il2cpp_runtime_class_init_0(qword_594C0C0, v7, v8);
  Names = System_Enum__GetNames(TypeFromHandle, 0);
  if ( !Names )
    sub_21FFECC(0, v11);
  this->fields.sortCpkType = (sortCpkType + 1) % SLODWORD(Names->max_length);
  SoundTestMenu__sortCpkApply(this, v11);
}


void SoundTestMenu__onClickSeItem(SoundTestMenu_o *this, UnityEngine_GameObject_o *obj, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  SoundTestMenu__selectItem(this, &this->fields.selectSeObj, obj, v3);
}


void SoundTestMenu__onClickSeNext(SoundTestMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  SoundTestMenu__sePlay(this, 1, v2);
}


void SoundTestMenu__onClickSeOpenCue(SoundTestMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  UILineInput_o *seAssetNameInput; // x0
  __int64 v5; // x1
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  struct UIPopupList_o *voicePrefixList; // x8
  System_String_o *mSelectedItem; // x22
  System_String_o *Text; // x0
  System_String_o **v15; // x21
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  _BOOL8 v28; // x0
  const MethodInfo *v29; // x2
  System_String_o *loadSeCueSheetName; // x1
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7
  System_String_o *v37; // x21
  System_Collections_Generic_List_string__o *inputSeCueName; // x22
  System_Action_o *v39; // x23
  const MethodInfo *v40; // x4

  if ( (byte_5935C81 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_string__Contains__);
    sub_21FFC50(&Method_SoundTestMenu___c__DisplayClass100_0__onClickSeOpenCue_b__0__);
    sub_21FFC50(&SoundTestMenu___c__DisplayClass100_0_TypeInfo);
    sub_21FFC50(&StringLiteral_9648/*"NONE"*/);
    byte_5935C81 = 1;
  }
  v3 = sub_21FFEBC(SoundTestMenu___c__DisplayClass100_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    goto LABEL_18;
  *(_QWORD *)(v3 + 16) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v3 + 16), (int32_t)this, v6, v7, v8, v9, v10, v11);
  voicePrefixList = this->fields.voicePrefixList;
  if ( !voicePrefixList
    || (seAssetNameInput = this->fields.seAssetNameInput) == 0
    || (mSelectedItem = voicePrefixList->fields.mSelectedItem,
        Text = UILineInput__GetText(seAssetNameInput, 0),
        *(_QWORD *)(v3 + 24) = Text,
        v15 = (System_String_o **)(v3 + 24),
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v3 + 24), (int32_t)Text, v16, v17, v18, v19, v20, v21),
        (seAssetNameInput = (UILineInput_o *)this->fields.exclusionList) == 0) )
  {
LABEL_18:
    sub_21FFECC(seAssetNameInput, v5);
  }
  if ( System_Collections_Generic_List_object___Contains(
         (System_Collections_Generic_List_object__o *)seAssetNameInput,
         (Il2CppObject *)mSelectedItem,
         (const MethodInfo_444FEC8 *)Method_System_Collections_Generic_List_string__Contains__) )
  {
    if ( !System_String__op_Inequality(mSelectedItem, (System_String_o *)StringLiteral_9648/*"NONE"*/, 0) )
      goto LABEL_12;
  }
  else
  {
    mSelectedItem = System_String__Concat_75438412(mSelectedItem, *v15, 0);
  }
  *v15 = mSelectedItem;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v3 + 24), (int32_t)mSelectedItem, v22, v23, v24, v25, v26, v27);
LABEL_12:
  v28 = System_String__op_Equality(this->fields.loadSeCueSheetName, *v15, 0);
  if ( !v28 && !this->fields.isLoadingSeCueSheet )
  {
    loadSeCueSheetName = this->fields.loadSeCueSheetName;
    if ( loadSeCueSheetName )
    {
      SoundTestMenu__releaseSe((SoundTestMenu_o *)v28, loadSeCueSheetName, v29);
      this->fields.loadSeCueSheetName = 0;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.loadSeCueSheetName, 0, v31, v32, v33, v34, v35, v36);
    }
    v37 = *(System_String_o **)(v3 + 24);
    inputSeCueName = this->fields.inputSeCueName;
    this->fields.isLoadingSeCueSheet = 1;
    v39 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(
      v39,
      (Il2CppObject *)v3,
      Method_SoundTestMenu___c__DisplayClass100_0__onClickSeOpenCue_b__0__,
      0);
    SoundTestMenu__openCueList(this, v37, inputSeCueName, v39, v40);
  }
}


void SoundTestMenu__onClickSePlay(SoundTestMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( this->fields.state == 1 )
  {
    if ( this->fields.isPlaySe )
      SoundTestMenu__stopSe(this, method);
    else
      SoundTestMenu__sePlay(this, 0, v2);
  }
}


void SoundTestMenu__onClickSePrev(SoundTestMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  SoundTestMenu__sePlay(this, -1, v2);
}


void SoundTestMenu__onClickSearchButton(SoundTestMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x24
  __int64 v4; // x1
  UnityEngine_GameObject_o *seRoot; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v6; // x25
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  System_String_o **v13; // x21
  bool activeSelf; // w0
  __int64 v15; // x8
  UILabel_o *v16; // x26
  bool v17; // w8
  bool v18; // zf
  __int64 v19; // x8
  UIScrollView_o *v20; // x20
  bool v21; // w8
  __int64 v22; // x8
  UIGrid_o *v23; // x22
  bool v24; // w8
  __int64 v25; // x8
  System_String_o **p_seSearchNamePrev; // x9
  bool v27; // w27
  System_Func_object__bool__o *v28; // x28
  UnityEngine_GameObject_c *klass; // x8
  UnityEngine_GameObject_o *v30; // x24
  char v31; // w25
  __int64 v32; // x9
  int32_t *p_offset; // x10
  __int64 v34; // x0
  __int64 v35; // x0
  __int64 v36; // x1
  __int64 v37; // x27
  UnityEngine_Object_o *v38; // x24
  __int64 v39; // x8
  __int64 v40; // x9
  int *v41; // x10
  __int64 v42; // x0
  __int64 v43; // x0
  __int64 v44; // x2
  __int64 v45; // x8
  __int64 v46; // x9
  int *v47; // x10
  __int64 v48; // x0
  __int64 v49; // x1
  __int64 v50; // x2
  UnityEngine_Component_o *v51; // x27
  _BOOL8 v52; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v54; // x1
  UnityEngine_Object_o *v55; // x25
  __int64 v56; // x1
  __int64 v57; // x2
  UnityEngine_Object_o *v58; // x27
  bool v59; // w0
  __int64 v60; // x8
  __int64 v61; // x9
  int *v62; // x10
  __int64 v63; // x0
  bool v64; // w0
  System_String_o *v65; // x2
  System_String_o *v66; // x3
  int32_t v67; // w4
  int32_t v68; // w5
  bool v69; // w6
  bool v70; // w7
  System_String_o *v71; // x1
  MissionNaviTransitionBoardItem_o *p_bgmSearchNamePrev; // x0
  __int64 v73; // x1
  __int64 v74; // x2
  SoundTestMenu_o *v75; // x0
  const MethodInfo *v76; // x3
  const MethodInfo *v77; // x6
  bool v78; // w0
  System_String_o *v79; // x2
  System_String_o *v80; // x3
  int32_t v81; // w4
  int32_t v82; // w5
  bool v83; // w6
  bool v84; // w7
  int32_t v85; // w1
  struct UILabel_o **p_selectSeObj; // x0
  __int64 v87; // x2
  CommonUI_o *v88; // x19
  SoundTestMenu___c_c *v89; // x8
  struct SoundTestMenu___c_StaticFields *static_fields; // x9
  System_Action_o *_9__134_1; // x22
  System_String_o *v92; // x20
  System_String_o *v93; // x21
  Il2CppObject *v94; // x23
  struct SoundTestMenu___c_StaticFields *v95; // x0
  System_String_o *v96; // x2
  System_String_o *v97; // x3
  int32_t v98; // w4
  int32_t v99; // w5
  bool v100; // w6
  bool v101; // w7
  System_Collections_Generic_List_string__o *cueNameList; // [xsp+40h] [xbp-A0h]
  __int64 v103; // [xsp+70h] [xbp-70h]
  UILabel_o *prevSelectLabel; // [xsp+78h] [xbp-68h] BYREF

  if ( (byte_5935C9C & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_UILabel___);
    sub_21FFC50(&Method_System_Linq_Enumerable_Where_Transform___);
    sub_21FFC50(&System_Func_Transform__bool__TypeInfo);
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IEnumerable_Transform__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IEnumerator_Transform__TypeInfo);
    sub_21FFC50(&System_Collections_IEnumerator_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&Method_SoundTestMenu___c__onClickSearchButton_b__134_1__);
    sub_21FFC50(&Method_SoundTestMenu___c__DisplayClass134_0__onClickSearchButton_b__0__);
    sub_21FFC50(&SoundTestMenu___c__DisplayClass134_0_TypeInfo);
    sub_21FFC50(&SoundTestMenu___c_TypeInfo);
    sub_21FFC50(&StringLiteral_26740/*"そのサウンドはcpk内に存在しません"*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_5935C9C = 1;
  }
  prevSelectLabel = 0;
  v3 = sub_21FFEBC(SoundTestMenu___c__DisplayClass134_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  seRoot = this->fields.seRoot;
  if ( !seRoot )
    goto LABEL_103;
  if ( UnityEngine_GameObject__get_activeSelf(seRoot, 0) )
  {
    seRoot = (UnityEngine_GameObject_o *)this->fields.seGrid;
    if ( !seRoot )
      goto LABEL_103;
  }
  else
  {
    seRoot = (UnityEngine_GameObject_o *)this->fields.bgmGrid;
    if ( !seRoot )
      goto LABEL_103;
  }
  seRoot = (UnityEngine_GameObject_o *)UIGrid__GetChildList((UIGrid_o *)seRoot, 0);
  if ( !this->fields.seRoot )
    goto LABEL_103;
  v6 = (System_Collections_Generic_IEnumerable_TSource__o *)seRoot;
  if ( UnityEngine_GameObject__get_activeSelf(this->fields.seRoot, 0) )
  {
    seRoot = (UnityEngine_GameObject_o *)this->fields.seSearchNameInput;
    if ( !seRoot )
      goto LABEL_103;
  }
  else
  {
    seRoot = (UnityEngine_GameObject_o *)this->fields.bgmSearchNameInput;
    if ( !seRoot )
      goto LABEL_103;
  }
  seRoot = (UnityEngine_GameObject_o *)UILineInput__GetText((UILineInput_o *)seRoot, 0);
  if ( !v3 )
    goto LABEL_103;
  *(_QWORD *)(v3 + 16) = seRoot;
  v13 = (System_String_o **)(v3 + 16);
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v3 + 16), (int32_t)seRoot, v7, v8, v9, v10, v11, v12);
  seRoot = this->fields.seRoot;
  if ( !seRoot )
    goto LABEL_103;
  activeSelf = UnityEngine_GameObject__get_activeSelf(seRoot, 0);
  v15 = 264;
  if ( activeSelf )
    v15 = 416;
  seRoot = this->fields.seRoot;
  v16 = *(UILabel_o **)((char *)&this->klass + v15);
  prevSelectLabel = v16;
  if ( !seRoot )
    goto LABEL_103;
  v17 = UnityEngine_GameObject__get_activeSelf(seRoot, 0);
  seRoot = this->fields.seRoot;
  v18 = !v17;
  v19 = 152;
  if ( !v18 )
    v19 = 392;
  if ( !seRoot )
    goto LABEL_103;
  v20 = *(UIScrollView_o **)((char *)&this->klass + v19);
  v21 = UnityEngine_GameObject__get_activeSelf(seRoot, 0);
  seRoot = this->fields.seRoot;
  v18 = !v21;
  v22 = 248;
  if ( !v18 )
    v22 = 408;
  if ( !seRoot )
    goto LABEL_103;
  v23 = *(UIGrid_o **)((char *)&this->klass + v22);
  v24 = UnityEngine_GameObject__get_activeSelf(seRoot, 0);
  seRoot = this->fields.seRoot;
  v18 = !v24;
  v25 = 280;
  if ( !v18 )
    v25 = 424;
  if ( !seRoot )
    goto LABEL_103;
  cueNameList = *(System_Collections_Generic_List_string__o **)((char *)&this->klass + v25);
  seRoot = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_activeSelf(seRoot, 0);
  if ( !*v13 )
    goto LABEL_103;
  p_seSearchNamePrev = &this->fields.seSearchNamePrev;
  if ( ((unsigned __int8)seRoot & 1) == 0 )
    p_seSearchNamePrev = &this->fields.bgmSearchNamePrev;
  v27 = System_String__Equals_75473208(*v13, *p_seSearchNamePrev, 0);
  v28 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_Transform__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v28,
    (Il2CppObject *)v3,
    Method_SoundTestMenu___c__DisplayClass134_0__onClickSearchButton_b__0__,
    0);
  seRoot = (UnityEngine_GameObject_o *)System_Linq_Enumerable__Where_object_(
                                         v6,
                                         (System_Func_TSource__bool__o *)v28,
                                         (const MethodInfo_386FFB0 *)Method_System_Linq_Enumerable_Where_Transform___);
  if ( !seRoot )
    goto LABEL_103;
  klass = seRoot->klass;
  v30 = seRoot;
  v31 = !v27;
  v32 = *(unsigned __int16 *)&seRoot->klass->_2.rank;
  if ( *(_WORD *)&seRoot->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_Transform__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_Transform__TypeInfo )
    {
      --v32;
      p_offset += 4;
      if ( !v32 )
        goto LABEL_35;
    }
    v34 = (__int64)&klass->vtable + 16 * *p_offset;
  }
  else
  {
LABEL_35:
    v34 = sub_2237E2C(seRoot, System_Collections_Generic_IEnumerable_Transform__TypeInfo, 0);
  }
  v35 = (*(__int64 (__fastcall **)(UnityEngine_GameObject_o *, _QWORD))v34)(v30, *(_QWORD *)(v34 + 8));
  v103 = v35;
  if ( !v35 )
    sub_21FFECC(v35, v36);
  v37 = v35;
  v38 = 0;
  while ( 1 )
  {
    v39 = *(_QWORD *)v37;
    v40 = *(unsigned __int16 *)(*(_QWORD *)v37 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v37 + 302LL) )
    {
      v41 = (int *)(*(_QWORD *)(v39 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v41 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v40;
        v41 += 4;
        if ( !v40 )
          goto LABEL_43;
      }
      v42 = v39 + 16LL * *v41 + 312;
    }
    else
    {
LABEL_43:
      v42 = sub_2237E2C(v37, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v43 = (*(__int64 (__fastcall **)(__int64, _QWORD))v42)(v37, *(_QWORD *)(v42 + 8));
    if ( (v43 & 1) == 0 )
    {
      v51 = 0;
      goto LABEL_65;
    }
    if ( !v103 )
      sub_21FFECC(v43, v4);
    v45 = *(_QWORD *)v103;
    v46 = *(unsigned __int16 *)(*(_QWORD *)v103 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v103 + 302LL) )
    {
      v47 = (int *)(*(_QWORD *)(v45 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_Transform__c **)v47 - 1) != System_Collections_Generic_IEnumerator_Transform__TypeInfo )
      {
        --v46;
        v47 += 4;
        if ( !v46 )
          goto LABEL_51;
      }
      v48 = v45 + 16LL * *v47 + 312;
    }
    else
    {
LABEL_51:
      v48 = sub_2237E2C(v103, System_Collections_Generic_IEnumerator_Transform__TypeInfo, 0);
    }
    v51 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v48)(v103, *(_QWORD *)(v48 + 8));
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v49, v50);
    v52 = UnityEngine_Object__op_Equality(v38, 0, 0);
    if ( v52 )
      v38 = (UnityEngine_Object_o *)v51;
    if ( (v31 & 1) != 0 )
      break;
    if ( !v51 )
      sub_21FFECC(v52, v4);
    gameObject = UnityEngine_Component__get_gameObject(v51, 0);
    if ( !v16 )
      sub_21FFECC(gameObject, v54);
    v55 = (UnityEngine_Object_o *)gameObject;
    v58 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v16, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v56, v57);
    v59 = UnityEngine_Object__op_Equality(v55, v58, 0);
    v37 = v103;
    v31 = v59;
  }
  v31 = 1;
LABEL_65:
  if ( v103 )
  {
    v60 = *(_QWORD *)v103;
    v61 = *(unsigned __int16 *)(*(_QWORD *)v103 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v103 + 302LL) )
    {
      v62 = (int *)(*(_QWORD *)(v60 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v62 - 1) != System_IDisposable_TypeInfo )
      {
        --v61;
        v62 += 4;
        if ( !v61 )
          goto LABEL_70;
      }
      v63 = v60 + 16LL * *v62 + 312;
    }
    else
    {
LABEL_70:
      v63 = sub_2237E2C(v103, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v63)(v103, *(_QWORD *)(v63 + 8));
  }
  if ( (v31 & 1) != 0 )
  {
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4, v44);
    if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v51, 0, 0) )
      v51 = (UnityEngine_Component_o *)v38;
  }
  seRoot = this->fields.seRoot;
  if ( !seRoot )
    goto LABEL_103;
  v64 = UnityEngine_GameObject__get_activeSelf(seRoot, 0);
  v71 = *v13;
  if ( v64 )
    p_bgmSearchNamePrev = (MissionNaviTransitionBoardItem_o *)&this->fields.seSearchNamePrev;
  else
    p_bgmSearchNamePrev = (MissionNaviTransitionBoardItem_o *)&this->fields.bgmSearchNamePrev;
  p_bgmSearchNamePrev->klass = (MissionNaviTransitionBoardItem_c *)v71;
  sub_21FFBF4(p_bgmSearchNamePrev, (int32_t)v71, v65, v66, v67, v68, v69, v70);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v73, v74);
  seRoot = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v51, 0, 0);
  if ( ((unsigned __int8)seRoot & 1) == 0 )
  {
    seRoot = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v88 = (CommonUI_o *)seRoot;
    v89 = SoundTestMenu___c_TypeInfo;
    if ( !*(&SoundTestMenu___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(SoundTestMenu___c_TypeInfo, v4, v87);
      v89 = SoundTestMenu___c_TypeInfo;
    }
    static_fields = v89->static_fields;
    _9__134_1 = static_fields->__9__134_1;
    v92 = (System_String_o *)StringLiteral_26740/*"そのサウンドはcpk内に存在しません"*/;
    v93 = (System_String_o *)StringLiteral_1/*""*/;
    if ( !_9__134_1 )
    {
      if ( !*(&v89->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v89, v4, v87);
        static_fields = SoundTestMenu___c_TypeInfo->static_fields;
      }
      v94 = (Il2CppObject *)static_fields->__9;
      _9__134_1 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
      System_Action___ctor(_9__134_1, v94, Method_SoundTestMenu___c__onClickSearchButton_b__134_1__, 0);
      v95 = SoundTestMenu___c_TypeInfo->static_fields;
      v95->__9__134_1 = _9__134_1;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&v95->__9__134_1,
        (int32_t)_9__134_1,
        v96,
        v97,
        v98,
        v99,
        v100,
        v101);
    }
    if ( v88 )
    {
      CommonUI__OpenNotificationDialog(v88, v93, v92, _9__134_1, -1, 0, 0, 0, 0, 0, 1, 0, 0, 0.0, 0, 0);
      return;
    }
LABEL_103:
    sub_21FFECC(seRoot, v4);
  }
  if ( !v51 )
    goto LABEL_103;
  seRoot = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                         v51,
                                         (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_UILabel___);
  if ( !seRoot )
    goto LABEL_103;
  v75 = (SoundTestMenu_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)seRoot, 0);
  SoundTestMenu__selectItem(v75, &prevSelectLabel, (UnityEngine_GameObject_o *)v75, v76);
  SoundTestMenu__offsetSelectObj(this, v20, &prevSelectLabel, v23, cueNameList, 0, v77);
  seRoot = this->fields.seRoot;
  if ( !seRoot )
    goto LABEL_103;
  v78 = UnityEngine_GameObject__get_activeSelf(seRoot, 0);
  v85 = (int)prevSelectLabel;
  if ( v78 )
  {
    p_selectSeObj = &this->fields.selectSeObj;
    this->fields.selectSeObj = prevSelectLabel;
  }
  else
  {
    p_selectSeObj = &this->fields.selectBgmObj;
    this->fields.selectBgmObj = prevSelectLabel;
  }
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)p_selectSeObj, v85, v79, v80, v81, v82, v83, v84);
}


void SoundTestMenu__onClickSortButton(SoundTestMenu_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *seRoot; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  bool activeSelf; // w8
  Il2CppType *v7; // x20
  int v8; // w9
  int32_t sortTypeSe; // w22
  System_RuntimeTypeHandle_o v10; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  System_Type_o *v13; // x20
  int32_t sortTypeBgm; // w22
  System_RuntimeTypeHandle_o v15; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  System_Type_o *TypeFromHandle; // x20

  if ( (byte_5935C99 & 1) == 0 )
  {
    sub_21FFC50(&SoundTestMenu_SortType_var);
    byte_5935C99 = 1;
  }
  seRoot = this->fields.seRoot;
  if ( !seRoot )
    goto LABEL_18;
  activeSelf = UnityEngine_GameObject__get_activeSelf(seRoot, 0);
  v7 = SoundTestMenu_SortType_var;
  v8 = *(_DWORD *)(qword_594C108 + 228);
  if ( !activeSelf )
  {
    sortTypeBgm = this->fields.sortTypeBgm;
    if ( !v8 )
      j_il2cpp_runtime_class_init_0(qword_594C108, v4, v5);
    v15.fields.value = (intptr_t)v7;
    TypeFromHandle = System_Type__GetTypeFromHandle(v15, 0);
    if ( !*(_DWORD *)(qword_594C0C0 + 228) )
      j_il2cpp_runtime_class_init_0(qword_594C0C0, v16, v17);
    seRoot = (UnityEngine_GameObject_o *)System_Enum__GetNames(TypeFromHandle, 0);
    if ( seRoot )
    {
      this->fields.sortTypeBgm = (sortTypeBgm + 1) % SLODWORD(seRoot[1].klass);
      goto LABEL_17;
    }
LABEL_18:
    sub_21FFECC(seRoot, method);
  }
  sortTypeSe = this->fields.sortTypeSe;
  if ( !v8 )
    j_il2cpp_runtime_class_init_0(qword_594C108, v4, v5);
  v10.fields.value = (intptr_t)v7;
  v13 = System_Type__GetTypeFromHandle(v10, 0);
  if ( !*(_DWORD *)(qword_594C0C0 + 228) )
    j_il2cpp_runtime_class_init_0(qword_594C0C0, v11, v12);
  seRoot = (UnityEngine_GameObject_o *)System_Enum__GetNames(v13, 0);
  if ( !seRoot )
    goto LABEL_18;
  this->fields.sortTypeSe = (sortTypeSe + 1) % SLODWORD(seRoot[1].klass);
LABEL_17:
  SoundTestMenu__sortApply(this, method);
}


void SoundTestMenu__open(SoundTestMenu_o *this, SoundTestMenu_CallbackFunc_o *callback, const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct SoundTestMenu_CallbackFunc_o *v8; // x20
  int32_t state; // w8
  void *rootObject; // x0
  Il2CppObject *Component_object; // x0
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  struct UIGrid_o *bgmGrid; // x20
  System_Comparison_T__o *v20; // x21
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  Il2CppObject *v27; // x0
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  struct UIGrid_o *bgmCpkGrid; // x20
  System_Comparison_T__o *v35; // x21
  System_String_o *v36; // x2
  System_String_o *v37; // x3
  int32_t v38; // w4
  int32_t v39; // w5
  bool v40; // w6
  bool v41; // w7
  Il2CppObject *v42; // x0
  System_String_o *v43; // x2
  System_String_o *v44; // x3
  int32_t v45; // w4
  int32_t v46; // w5
  bool v47; // w6
  bool v48; // w7
  struct UIGrid_o *seGrid; // x20
  System_Comparison_T__o *v50; // x21
  System_String_o *v51; // x2
  System_String_o *v52; // x3
  int32_t v53; // w4
  int32_t v54; // w5
  bool v55; // w6
  bool v56; // w7
  struct System_Collections_Generic_List_string__o *bgmCpkList; // x8
  __int64 size; // x2
  int v59; // w9
  System_String_o *CpkPath; // x0
  System_String_o *Files_76702204; // x0
  __int64 v62; // x1
  __int64 v63; // x2
  const MethodInfo *v64; // x7
  System_String_c *klass; // x8
  System_String_o *v66; // x20
  unsigned __int64 v67; // x22
  System_String_o *v68; // x21
  Il2CppObject *v69; // x1
  __int64 v70; // x2
  System_String_o *v71; // x21
  System_String_o *v72; // x2
  System_String_o *v73; // x3
  int32_t v74; // w4
  int32_t v75; // w5
  bool v76; // w6
  bool v77; // w7
  __int64 klass_low; // x9
  System_String_o *v79; // x8
  char *v80; // x9
  System_String_Fields fields; // x8
  __int64 v82; // x10
  __int64 v83; // x8
  UnityEngine_GameObject_o *bgmCpkItemParent; // x1
  UIScrollView_o *bgmCpkScrollView; // x4
  System_Collections_Generic_List_string__o *v86; // x2
  UIGrid_o *v87; // x3
  UILabel_o *bgmCpkItemLabelSeed; // x5
  struct UILabel_o *ItemBgm; // x0
  System_String_o *v90; // x2
  System_String_o *v91; // x3
  int32_t v92; // w4
  int32_t v93; // w5
  bool v94; // w6
  bool v95; // w7
  struct System_Collections_Generic_List_string__o *v96; // x8
  UILabel_o *bgmCpkCount; // x20
  System_String_o *v98; // x0
  const MethodInfo *v99; // x1
  const MethodInfo *v100; // x2
  struct System_Collections_Generic_List_string__o *v101; // x8
  __int64 v102; // x2
  System_String_o *v103; // x3
  int32_t v104; // w4
  int32_t v105; // w5
  bool v106; // w6
  bool v107; // w7
  unsigned __int64 i; // x22
  struct System_String_array *sePrefixList; // x8
  UIPopupList_o *voicePrefixList; // x20
  struct System_Collections_Generic_List_string__o *exclusionList; // x8
  System_String_o *v112; // x2
  int v113; // w9
  __int64 j; // x23
  System_Collections_Generic_List_object__o *v115; // x20
  __int64 v116; // x8
  struct System_Object_array *items; // x9
  _QWORD *v118; // x8
  __int64 v119; // x10
  Il2CppClass **v120; // x0
  const MethodInfo *v121; // x1
  const MethodInfo *v122; // x1
  const MethodInfo *v123; // x1
  const MethodInfo *v124; // x1
  int v125; // [xsp+Ch] [xbp-64h] BYREF

  v8 = callback;
  if ( (byte_5935C78 & 1) == 0 )
  {
    sub_21FFC50(&AssetData_TypeInfo);
    sub_21FFC50(&System_Comparison_Transform__TypeInfo);
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_Collider___);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_UIGrid___);
    sub_21FFC50(&Method_System_Collections_Generic_List_string__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_string__Clear__);
    sub_21FFC50(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_21FFC50(&System_IO_Path_TypeInfo);
    sub_21FFC50(&SoundManager_TypeInfo);
    sub_21FFC50(&Method_SoundTestMenu_customCpkSort__);
    sub_21FFC50(&Method_SoundTestMenu_customSort__);
    sub_21FFC50(&SoundTestMenu_TypeInfo);
    sub_21FFC50(&StringLiteral_1099/*".cpk.bytes"*/);
    sub_21FFC50(&StringLiteral_860/*"*BGM_*.cpk.bytes"*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    sub_21FFC50(&StringLiteral_5005/*"Cpk数 : "*/);
    byte_5935C78 = 1;
  }
  state = this->fields.state;
  v125 = 0;
  if ( !state )
  {
    this->fields.endCallbackFunc = v8;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.endCallbackFunc,
      (int32_t)v8,
      (System_String_o *)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    rootObject = this->fields.rootObject;
    if ( !rootObject )
      goto LABEL_69;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)rootObject, 1, 0);
    rootObject = this->fields.seAssetNameInput;
    if ( !rootObject )
      goto LABEL_69;
    UILineInput__SetInputEnable((UILineInput_o *)rootObject, 1, 0);
    rootObject = this->fields.bgmItemParent;
    if ( !rootObject )
      goto LABEL_69;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)rootObject,
                         (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_UIGrid___);
    this->fields.bgmGrid = (struct UIGrid_o *)Component_object;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.bgmGrid,
      (int32_t)Component_object,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
    bgmGrid = this->fields.bgmGrid;
    v20 = (System_Comparison_T__o *)sub_21FFEBC(System_Comparison_Transform__TypeInfo);
    System_Comparison_object____ctor(v20, (Il2CppObject *)this, Method_SoundTestMenu_customSort__, 0);
    if ( !bgmGrid )
      goto LABEL_69;
    bgmGrid->fields.onCustomSort = (struct System_Comparison_Transform__o *)v20;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&bgmGrid->fields.onCustomSort,
      (int32_t)v20,
      v21,
      v22,
      v23,
      v24,
      v25,
      v26);
    rootObject = this->fields.bgmCpkItemParent;
    if ( !rootObject )
      goto LABEL_69;
    v27 = UnityEngine_GameObject__GetComponent_object_(
            (UnityEngine_GameObject_o *)rootObject,
            (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_UIGrid___);
    this->fields.bgmCpkGrid = (struct UIGrid_o *)v27;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.bgmCpkGrid,
      (int32_t)v27,
      v28,
      v29,
      v30,
      v31,
      v32,
      v33);
    bgmCpkGrid = this->fields.bgmCpkGrid;
    v35 = (System_Comparison_T__o *)sub_21FFEBC(System_Comparison_Transform__TypeInfo);
    System_Comparison_object____ctor(v35, (Il2CppObject *)this, Method_SoundTestMenu_customCpkSort__, 0);
    if ( !bgmCpkGrid )
      goto LABEL_69;
    bgmCpkGrid->fields.onCustomSort = (struct System_Comparison_Transform__o *)v35;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&bgmCpkGrid->fields.onCustomSort,
      (int32_t)v35,
      v36,
      v37,
      v38,
      v39,
      v40,
      v41);
    rootObject = this->fields.seItemParent;
    if ( !rootObject )
      goto LABEL_69;
    v42 = UnityEngine_GameObject__GetComponent_object_(
            (UnityEngine_GameObject_o *)rootObject,
            (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_UIGrid___);
    this->fields.seGrid = (struct UIGrid_o *)v42;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.seGrid, (int32_t)v42, v43, v44, v45, v46, v47, v48);
    seGrid = this->fields.seGrid;
    v50 = (System_Comparison_T__o *)sub_21FFEBC(System_Comparison_Transform__TypeInfo);
    System_Comparison_object____ctor(v50, (Il2CppObject *)this, Method_SoundTestMenu_customSort__, 0);
    if ( !seGrid )
      goto LABEL_69;
    seGrid->fields.onCustomSort = (struct System_Comparison_Transform__o *)v50;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&seGrid->fields.onCustomSort,
      (int32_t)v50,
      v51,
      v52,
      v53,
      v54,
      v55,
      v56);
    bgmCpkList = this->fields.bgmCpkList;
    if ( !bgmCpkList )
      goto LABEL_69;
    size = (unsigned int)bgmCpkList->fields._size;
    v59 = bgmCpkList->fields._version + 1;
    bgmCpkList->fields._size = 0;
    bgmCpkList->fields._version = v59;
    if ( (int)size >= 1 )
      System_Array__Clear((System_Array_o *)bgmCpkList->fields._items, 0, size, 0);
    if ( !*(&SoundManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, callback, size);
    CpkPath = SoundManager__getCpkPath(0);
    Files_76702204 = (System_String_o *)System_IO_Directory__GetFiles_76702204(
                                          CpkPath,
                                          (System_String_o *)StringLiteral_860/*"*BGM_*.cpk.bytes"*/,
                                          1,
                                          0);
    if ( !Files_76702204 )
    {
      v125 = 0;
      sub_21FFECC(0, v62);
    }
    klass = Files_76702204[1].klass;
    v66 = Files_76702204;
    if ( (int)klass < 1 )
    {
      LODWORD(v67) = 0;
    }
    else
    {
      v67 = 0;
      do
      {
        if ( v67 >= (unsigned int)klass )
        {
LABEL_72:
          v125 = v67;
          sub_21FFED4(Files_76702204);
        }
        v68 = (System_String_o *)*((_QWORD *)&v66[1].monitor + v67);
        if ( !*(&System_IO_Path_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(System_IO_Path_TypeInfo, v62, v63);
        Files_76702204 = System_IO_Path__GetFileName(v68, 0);
        if ( !Files_76702204 )
          goto LABEL_70;
        Files_76702204 = System_String__Replace_75490096(
                           Files_76702204,
                           (System_String_o *)StringLiteral_1099/*".cpk.bytes"*/,
                           (System_String_o *)StringLiteral_1/*""*/,
                           0);
        v71 = Files_76702204;
        if ( !*(&AssetData_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(AssetData_TypeInfo, v69, v70);
        if ( !v71 )
          goto LABEL_70;
        Files_76702204 = (System_String_o *)System_String__Split(
                                              v71,
                                              AssetData_TypeInfo->static_fields->ASSETBUNDLE_SPLIT_CACHE_CHAR,
                                              0,
                                              0);
        if ( !Files_76702204 )
          goto LABEL_70;
        klass_low = LODWORD(Files_76702204[1].klass);
        v79 = Files_76702204;
        if ( !LODWORD(Files_76702204[1].klass) )
          goto LABEL_72;
        Files_76702204 = (System_String_o *)this->fields.bgmCpkList;
        if ( !Files_76702204
          || (v80 = (char *)v79 + (((klass_low << 32) - 0x100000000LL) >> 29),
              fields = Files_76702204->fields,
              ++HIDWORD(Files_76702204[1].klass),
              v69 = (Il2CppObject *)*((_QWORD *)v80 + 4),
              !*(_QWORD *)&fields) )
        {
LABEL_70:
          v125 = v67;
          sub_21FFECC(Files_76702204, v69);
        }
        v82 = SLODWORD(Files_76702204[1].klass);
        if ( (unsigned int)v82 >= *(_DWORD *)(*(_QWORD *)&fields + 24LL) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)Files_76702204,
            v69,
            *(const MethodInfo_444FB2C **)(*(_QWORD *)(*((_QWORD *)Method_System_Collections_Generic_List_string__Add__
                                                       + 4)
                                                     + 192LL)
                                         + 112LL));
        }
        else
        {
          v83 = *(_QWORD *)&fields + 8 * v82;
          LODWORD(Files_76702204[1].klass) = v82 + 1;
          *(_QWORD *)(v83 + 32) = v69;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v83 + 32), (int32_t)v69, v72, v73, v74, v75, v76, v77);
        }
        LODWORD(klass) = v66[1].klass;
        ++v67;
      }
      while ( (__int64)v67 < (int)klass );
    }
    bgmCpkItemParent = this->fields.bgmCpkItemParent;
    bgmCpkScrollView = this->fields.bgmCpkScrollView;
    v86 = this->fields.bgmCpkList;
    v87 = this->fields.bgmCpkGrid;
    bgmCpkItemLabelSeed = this->fields.bgmCpkItemLabelSeed;
    v125 = v67;
    ItemBgm = SoundTestMenu__createItemBgm(
                this,
                bgmCpkItemParent,
                v86,
                v87,
                bgmCpkScrollView,
                bgmCpkItemLabelSeed,
                0,
                v64);
    this->fields.selectBgmCpkObj = ItemBgm;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.selectBgmCpkObj,
      (int32_t)ItemBgm,
      v90,
      v91,
      v92,
      v93,
      v94,
      v95);
    v96 = this->fields.bgmCpkList;
    if ( !v96 )
      goto LABEL_69;
    bgmCpkCount = this->fields.bgmCpkCount;
    v125 = v96->fields._size;
    v98 = System_Int32__ToString((int32_t)&v125, 0);
    rootObject = System_String__Concat_75438412((System_String_o *)StringLiteral_5005/*"Cpk数 : "*/, v98, 0);
    if ( !bgmCpkCount )
      goto LABEL_69;
    UILabel__set_text(bgmCpkCount, (System_String_o *)rootObject, 0);
    SoundTestMenu__createBgmPlayList(this, v99);
    v101 = this->fields.bgmCpkList;
    if ( !v101 )
      goto LABEL_69;
    SoundTestMenu__updateBgmPrevNextButton(this, v101->fields._size > 1, v100);
    rootObject = this->fields.voicePrefixList;
    if ( !rootObject )
      goto LABEL_69;
    UIPopupList__Clear((UIPopupList_o *)rootObject, 0);
    for ( i = 0; ; UIPopupList__AddItem(voicePrefixList, sePrefixList->m_Items[i++], 0) )
    {
      rootObject = SoundTestMenu_TypeInfo;
      if ( !*(&SoundTestMenu_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(SoundTestMenu_TypeInfo, callback, v102);
        rootObject = SoundTestMenu_TypeInfo;
      }
      sePrefixList = (struct System_String_array *)**((_QWORD **)rootObject + 23);
      if ( !sePrefixList )
        goto LABEL_69;
      if ( (__int64)i >= SLODWORD(sePrefixList->max_length) )
        break;
      voicePrefixList = this->fields.voicePrefixList;
      if ( !*((_DWORD *)rootObject + 57) )
      {
        j_il2cpp_runtime_class_init_0(rootObject, callback, v102);
        sePrefixList = SoundTestMenu_TypeInfo->static_fields->sePrefixList;
        if ( !sePrefixList )
          goto LABEL_69;
      }
      if ( i >= LODWORD(sePrefixList->max_length) )
LABEL_71:
        sub_21FFED4(rootObject);
      if ( !voicePrefixList )
        goto LABEL_69;
    }
    exclusionList = this->fields.exclusionList;
    if ( !exclusionList )
LABEL_69:
      sub_21FFECC(rootObject, callback);
    v112 = (System_String_o *)(unsigned int)exclusionList->fields._size;
    v113 = exclusionList->fields._version + 1;
    exclusionList->fields._size = 0;
    exclusionList->fields._version = v113;
    if ( (int)v112 >= 1 )
      System_Array__Clear((System_Array_o *)exclusionList->fields._items, 0, (int32_t)v112, 0);
    for ( j = 9; j != 14; ++j )
    {
      rootObject = SoundTestMenu_TypeInfo;
      v115 = (System_Collections_Generic_List_object__o *)this->fields.exclusionList;
      if ( !*(&SoundTestMenu_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(SoundTestMenu_TypeInfo, callback, v112);
        rootObject = SoundTestMenu_TypeInfo;
      }
      v116 = **((_QWORD **)rootObject + 23);
      if ( !v116 )
        goto LABEL_69;
      if ( j - 4 >= (unsigned __int64)*(unsigned int *)(v116 + 24) )
        goto LABEL_71;
      if ( !v115 )
        goto LABEL_69;
      items = v115->fields._items;
      callback = *(SoundTestMenu_CallbackFunc_o **)(v116 + 8 * j);
      v118 = Method_System_Collections_Generic_List_string__Add__;
      ++v115->fields._version;
      if ( !items )
        goto LABEL_69;
      v119 = v115->fields._size;
      if ( (unsigned int)v119 >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v115,
          (Il2CppObject *)callback,
          *(const MethodInfo_444FB2C **)(*(_QWORD *)(v118[4] + 192LL) + 112LL));
      }
      else
      {
        v120 = &items->obj.klass + v119;
        v115->fields._size = v119 + 1;
        v120[4] = (Il2CppClass *)callback;
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)(v120 + 4),
          (int32_t)callback,
          v112,
          v103,
          v104,
          v105,
          v106,
          v107);
      }
    }
    this->fields.state = 1;
  }
  SoundTestMenu__sortApply(this, (const MethodInfo *)callback);
  SoundTestMenu__switchButtonLabelChange(this, v121);
  this->fields.isPlayBgm = 0;
  this->fields.isPlaySe = 0;
  SoundTestMenu__ResetBgmProgressBar(this, v122);
  SoundTestMenu__SetupVersionDiff(this, v123);
  SoundTestMenu__SetDiffSwitchButtonLabel(this, v124);
  rootObject = this->fields.cueListOutputButton;
  if ( !rootObject )
    goto LABEL_69;
  rootObject = UnityEngine_Component__GetComponent_object_(
                 (UnityEngine_Component_o *)rootObject,
                 (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_Collider___);
  if ( !rootObject )
    goto LABEL_69;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)rootObject, 0, 0);
}


void SoundTestMenu__openCueList(
        SoundTestMenu_o *this,
        System_String_o *cueSheetName,
        System_Collections_Generic_List_string__o *cueNameList,
        System_Action_o *callBack,
        const MethodInfo *method)
{
  __int64 v9; // x19
  __int64 v10; // x0
  __int64 v11; // x1
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7
  CriAtomExAcb_o *Acb; // x0
  System_String_o *v37; // x2
  System_String_o *v38; // x3
  int32_t v39; // w4
  int32_t v40; // w5
  bool v41; // w6
  bool v42; // w7
  SoundTestMenu_o *v43; // x0
  const MethodInfo *v44; // x3
  CriAtomExAcb_o *v45; // x2
  System_String_o *v46; // x20
  System_Action_o *v47; // x21
  SoundTestMenu_o *v48; // x0
  const MethodInfo *v49; // x3

  if ( (byte_5935C88 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_SoundTestMenu___c__DisplayClass109_0__openCueList_b__0__);
    sub_21FFC50(&SoundTestMenu___c__DisplayClass109_0_TypeInfo);
    byte_5935C88 = 1;
  }
  v9 = sub_21FFEBC(SoundTestMenu___c__DisplayClass109_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    sub_21FFECC(v10, v11);
  *(_QWORD *)(v9 + 24) = cueSheetName;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v9 + 24), (int32_t)cueSheetName, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v9 + 32) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v9 + 32), (int32_t)this, v18, v19, v20, v21, v22, v23);
  *(_QWORD *)(v9 + 40) = cueNameList;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v9 + 40), (int32_t)cueNameList, v24, v25, v26, v27, v28, v29);
  *(_QWORD *)(v9 + 48) = callBack;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v9 + 48), (int32_t)callBack, v30, v31, v32, v33, v34, v35);
  Acb = CriAtom__GetAcb(*(System_String_o **)(v9 + 24), 0);
  *(_QWORD *)(v9 + 16) = Acb;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v9 + 16), (int32_t)Acb, v37, v38, v39, v40, v41, v42);
  v45 = *(CriAtomExAcb_o **)(v9 + 16);
  if ( v45 )
  {
    SoundTestMenu__setupCueNameList(v43, *(System_Collections_Generic_List_string__o **)(v9 + 40), v45, v44);
    ActionExtensions__Call(*(System_Action_o **)(v9 + 48), 0);
  }
  else
  {
    v46 = *(System_String_o **)(v9 + 24);
    v47 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(v47, (Il2CppObject *)v9, Method_SoundTestMenu___c__DisplayClass109_0__openCueList_b__0__, 0);
    SoundTestMenu__loadSE(v48, v46, v47, v49);
  }
}


void SoundTestMenu__playBgm(SoundTestMenu_o *this, const MethodInfo *method)
{
  struct UILabel_o *selectBgmObj; // x0
  System_String_o *name; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  Il2CppObject *Item; // x20
  MethodInfo *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_String_o *playBgmCueSheetName; // x0
  struct System_String_o *loadBgmCueSheetName; // x1

  if ( (byte_5935C7E & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_21FFC50(&SoundManager_TypeInfo);
    sub_21FFC50(&StringLiteral_13608/*"Stop"*/);
    byte_5935C7E = 1;
  }
  if ( this->fields.state == 1 )
  {
    if ( this->fields.isPlayBgm )
    {
      SoundTestMenu__stopBgm(this, method);
    }
    else
    {
      selectBgmObj = this->fields.selectBgmObj;
      if ( !selectBgmObj )
        goto LABEL_16;
      name = UnityEngine_Object__get_name((UnityEngine_Object_o *)selectBgmObj, 0);
      selectBgmObj = (struct UILabel_o *)System_Int32__Parse(name, 0);
      if ( !this->fields.inputBgmCueName )
        goto LABEL_16;
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)this->fields.inputBgmCueName,
               (int32_t)selectBgmObj,
               (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_string__get_Item__);
      if ( !*(&SoundManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v5, v6);
      SoundManager__playBgm((System_String_o *)Item, 0);
      selectBgmObj = this->fields.bgmPlayLabel;
      if ( !selectBgmObj )
LABEL_16:
        sub_21FFECC(selectBgmObj, method);
      UILabel__set_text(selectBgmObj, (System_String_o *)StringLiteral_13608/*"Stop"*/, 0);
      playBgmCueSheetName = this->fields.playBgmCueSheetName;
      this->fields.isPlayBgm = 1;
      if ( playBgmCueSheetName )
      {
        if ( System_String__op_Inequality(playBgmCueSheetName, this->fields.loadBgmCueSheetName, 0) )
          SoundTestMenu__releaseBgm(this, this->fields.playBgmCueSheetName, v8);
      }
      loadBgmCueSheetName = this->fields.loadBgmCueSheetName;
      this->fields.playBgmCueSheetName = loadBgmCueSheetName;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&this->fields.playBgmCueSheetName,
        (int32_t)loadBgmCueSheetName,
        (System_String_o *)v8,
        v9,
        v10,
        v11,
        v12,
        v13);
    }
  }
}


void SoundTestMenu__playSe(SoundTestMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  UILineInput_o *seAssetNameInput; // x0
  __int64 v5; // x1
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  System_String_o *Text; // x0
  System_String_o **v13; // x21
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  struct UIPopupList_o *voicePrefixList; // x8
  System_String_o *mSelectedItem; // x22
  __int64 v22; // x1
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  UnityEngine_Object_o *selectSeObj; // x22
  bool v30; // w0
  System_String_o *v31; // x22
  struct System_Collections_Generic_List_string__o *inputSeCueName; // x21
  System_Action_o *v33; // x23
  const MethodInfo *v34; // x4
  SoundTestMenu_o *v35; // x0
  System_String_o *v36; // x1
  System_Collections_Generic_List_string__o *v37; // x2
  _QWORD *v38; // x0
  System_Reflection_MethodBase_o *v39; // x0
  _BOOL8 v40; // x0
  const MethodInfo *v41; // x2
  char v42; // w22
  System_String_o *v43; // x2
  System_String_o *v44; // x3
  int32_t v45; // w4
  int32_t v46; // w5
  bool v47; // w6
  bool v48; // w7
  CriAtomExAcb_o *Acb; // x0
  const MethodInfo *v50; // x2
  System_String_o *v51; // x21
  struct System_Collections_Generic_List_string__o *v52; // x22

  if ( (byte_5935C82 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_string__Contains__);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_SoundTestMenu_playSe__);
    sub_21FFC50(&Method_SoundTestMenu___c__DisplayClass102_0__playSe_b__0__);
    sub_21FFC50(&Method_SoundTestMenu___c__DisplayClass102_0__playSe_b__1__);
    sub_21FFC50(&SoundTestMenu___c__DisplayClass102_0_TypeInfo);
    sub_21FFC50(&StringLiteral_9648/*"NONE"*/);
    byte_5935C82 = 1;
  }
  v3 = sub_21FFEBC(SoundTestMenu___c__DisplayClass102_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    goto LABEL_30;
  *(_QWORD *)(v3 + 24) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v3 + 24), (int32_t)this, v6, v7, v8, v9, v10, v11);
  seAssetNameInput = this->fields.seAssetNameInput;
  if ( !seAssetNameInput )
    goto LABEL_30;
  Text = UILineInput__GetText(seAssetNameInput, 0);
  *(_QWORD *)(v3 + 16) = Text;
  v13 = (System_String_o **)(v3 + 16);
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v3 + 16), (int32_t)Text, v14, v15, v16, v17, v18, v19);
  voicePrefixList = this->fields.voicePrefixList;
  if ( !voicePrefixList )
    goto LABEL_30;
  seAssetNameInput = (UILineInput_o *)this->fields.exclusionList;
  if ( !seAssetNameInput )
    goto LABEL_30;
  mSelectedItem = voicePrefixList->fields.mSelectedItem;
  if ( !System_Collections_Generic_List_object___Contains(
          (System_Collections_Generic_List_object__o *)seAssetNameInput,
          (Il2CppObject *)mSelectedItem,
          (const MethodInfo_444FEC8 *)Method_System_Collections_Generic_List_string__Contains__) )
  {
    mSelectedItem = System_String__Concat_75438412(mSelectedItem, *v13, 0);
    goto LABEL_11;
  }
  if ( System_String__op_Inequality(mSelectedItem, (System_String_o *)StringLiteral_9648/*"NONE"*/, 0) )
  {
LABEL_11:
    *v13 = mSelectedItem;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v3 + 16), (int32_t)mSelectedItem, v23, v24, v25, v26, v27, v28);
  }
  selectSeObj = (UnityEngine_Object_o *)this->fields.selectSeObj;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v22, v23);
  v30 = UnityEngine_Object__op_Equality(selectSeObj, 0, 0);
  v31 = *v13;
  if ( v30 )
  {
    inputSeCueName = this->fields.inputSeCueName;
    v33 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(v33, (Il2CppObject *)v3, Method_SoundTestMenu___c__DisplayClass102_0__playSe_b__0__, 0);
    v35 = this;
    v36 = v31;
    v37 = inputSeCueName;
LABEL_16:
    SoundTestMenu__openCueList(v35, v36, v37, v33, v34);
    return;
  }
  if ( System_String__IsNullOrEmpty(*v13, 0) )
  {
    v38 = Method_SoundTestMenu_playSe__;
    if ( (*((_BYTE *)Method_SoundTestMenu_playSe__ + 83) & 2) != 0 )
      v38 = (_QWORD *)sub_21FFC68(Method_SoundTestMenu_playSe__);
    v39 = (System_Reflection_MethodBase_o *)sub_21FFC34(v38, v38[4]);
    OverwriteAssetSoundName__PlaySystemSe(v39, 2, 0, 0);
    return;
  }
  if ( System_String__IsNullOrEmpty(this->fields.loadSeCueSheetName, 0) )
    goto LABEL_24;
  seAssetNameInput = (UILineInput_o *)this->fields.loadSeCueSheetName;
  if ( !seAssetNameInput )
LABEL_30:
    sub_21FFECC(seAssetNameInput, v5);
  v40 = System_String__Equals_75473208((System_String_o *)seAssetNameInput, *v13, 0);
  if ( v40 )
  {
LABEL_24:
    v42 = 0;
    goto LABEL_26;
  }
  SoundTestMenu__releaseSe((SoundTestMenu_o *)v40, this->fields.loadSeCueSheetName, v41);
  this->fields.loadSeCueSheetName = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.loadSeCueSheetName, 0, v43, v44, v45, v46, v47, v48);
  v42 = 1;
LABEL_26:
  Acb = CriAtom__GetAcb(*v13, 0);
  v51 = *v13;
  if ( (v42 & 1) != 0 || !Acb )
  {
    v52 = this->fields.inputSeCueName;
    v33 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(v33, (Il2CppObject *)v3, Method_SoundTestMenu___c__DisplayClass102_0__playSe_b__1__, 0);
    v35 = this;
    v36 = v51;
    v37 = v52;
    goto LABEL_16;
  }
  SoundTestMenu__playSeLocal(this, v51, v50);
}


void SoundTestMenu__playSeLocal(SoundTestMenu_o *this, System_String_o *inputCueSheetName, const MethodInfo *method)
{
  struct UILabel_o *selectSeObj; // x0
  System_String_o *name; // x0
  Il2CppObject *Item; // x0
  _QWORD *v8; // x8
  System_String_o *v9; // x21
  System_Reflection_MethodBase_o *v10; // x22
  System_Action_o *v11; // x23
  struct SePlayer_o *v12; // x0
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7

  if ( (byte_5935C83 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_21FFC50(&Method_SoundTestMenu_playSeLocal__);
    sub_21FFC50(&Method_SoundTestMenu_stopSe__);
    sub_21FFC50(&StringLiteral_13608/*"Stop"*/);
    byte_5935C83 = 1;
  }
  selectSeObj = this->fields.selectSeObj;
  if ( !selectSeObj )
    goto LABEL_9;
  name = UnityEngine_Object__get_name((UnityEngine_Object_o *)selectSeObj, 0);
  selectSeObj = (struct UILabel_o *)System_Int32__Parse(name, 0);
  if ( !this->fields.inputSeCueName )
    goto LABEL_9;
  Item = System_Collections_Generic_List_object___get_Item(
           (System_Collections_Generic_List_object__o *)this->fields.inputSeCueName,
           (int32_t)selectSeObj,
           (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_string__get_Item__);
  v8 = Method_SoundTestMenu_playSeLocal__;
  v9 = (System_String_o *)Item;
  if ( (*((_BYTE *)Method_SoundTestMenu_playSeLocal__ + 83) & 2) != 0 )
    v8 = (_QWORD *)sub_21FFC68(Method_SoundTestMenu_playSeLocal__);
  v10 = (System_Reflection_MethodBase_o *)sub_21FFC34(v8, v8[4]);
  v11 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_SoundTestMenu_stopSe__, 0);
  v12 = OverwriteAssetSoundName__PlaySe_48366604(v10, inputCueSheetName, v9, 0.7, v11, 0, 0);
  this->fields.sePlayer = v12;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.sePlayer, (int32_t)v12, v13, v14, v15, v16, v17, v18);
  selectSeObj = this->fields.sePlayLabel;
  if ( !selectSeObj )
LABEL_9:
    sub_21FFECC(selectSeObj, inputCueSheetName);
  UILabel__set_text(selectSeObj, (System_String_o *)StringLiteral_13608/*"Stop"*/, 0);
  this->fields.isPlaySe = 1;
}


void SoundTestMenu__releaseBgm(SoundTestMenu_o *this, System_String_o *cueSheetName, const MethodInfo *method)
{
  UnityEngine_Object_o *selectBgmObj; // x20
  __int64 v6; // x1
  __int64 v7; // x2

  if ( (byte_5935C7B & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&SoundManager_TypeInfo);
    byte_5935C7B = 1;
  }
  selectBgmObj = (UnityEngine_Object_o *)this->fields.selectBgmObj;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, cueSheetName, method);
  if ( !UnityEngine_Object__op_Equality(selectBgmObj, 0, 0) && !System_String__IsNullOrEmpty(cueSheetName, 0) )
  {
    if ( !*(&SoundManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v6, v7);
    SoundManager__releaseAudioAssetStorage(cueSheetName, 0);
  }
}


void SoundTestMenu__releaseSe(SoundTestMenu_o *this, System_String_o *cueSheetName, const MethodInfo *method)
{
  SoundManager_o *Instance; // x0
  __int64 v5; // x20
  __int64 v6; // x8
  unsigned __int64 v7; // x21

  if ( (byte_5935C86 & 1) == 0 )
  {
    sub_21FFC50(&SeManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    byte_5935C86 = 1;
  }
  if ( !*(&SeManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo, cueSheetName, method);
  if ( !byte_5935CFA )
  {
    sub_21FFC50(&SeManager_TypeInfo);
    byte_5935CFA = 1;
  }
  Instance = (SoundManager_o *)SeManager_TypeInfo;
  if ( !*(&SeManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo, cueSheetName, method);
    Instance = (SoundManager_o *)SeManager_TypeInfo;
  }
  v5 = *(_QWORD *)Instance[2].monitor;
  if ( !v5 )
    goto LABEL_19;
  v6 = *(_QWORD *)(v5 + 24);
  if ( (int)v6 < 1 )
  {
LABEL_15:
    Instance = (SoundManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    if ( Instance )
    {
      SoundManager__ReleaseAudioAssetStorage(Instance, cueSheetName, 0);
      return;
    }
LABEL_19:
    sub_21FFECC(Instance, cueSheetName);
  }
  v7 = 0;
  while ( 1 )
  {
    if ( v7 >= (unsigned int)v6 )
      sub_21FFED4(Instance);
    Instance = (SoundManager_o *)System_String__Compare_75470196(
                                   cueSheetName,
                                   *(System_String_o **)(v5 + 32 + 8 * v7),
                                   1,
                                   0);
    if ( !(_DWORD)Instance )
      break;
    LODWORD(v6) = *(_DWORD *)(v5 + 24);
    if ( (__int64)++v7 >= (int)v6 )
      goto LABEL_15;
  }
}


void SoundTestMenu__remove_endCallbackFunc(
        SoundTestMenu_o *this,
        SoundTestMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *endCallbackFunc; // x21
  System_Delegate_o *v6; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x0
  bool v10; // zf
  SoundTestMenu_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_5935C76 & 1) == 0 )
  {
    sub_21FFC50(&SoundTestMenu_CallbackFunc_TypeInfo);
    byte_5935C76 = 1;
  }
  endCallbackFunc = (System_Delegate_o *)this->fields.endCallbackFunc;
  while ( 1 )
  {
    v6 = System_Delegate__Remove(endCallbackFunc, (System_Delegate_o *)value, 0);
    if ( v6 )
    {
      if ( (SoundTestMenu_CallbackFunc_c *)v6->klass != SoundTestMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_223767C(&this->fields.endCallbackFunc, v6, endCallbackFunc);
    v10 = v9 == (_QWORD)endCallbackFunc;
    endCallbackFunc = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_220024C(v6, SoundTestMenu_CallbackFunc_TypeInfo, v7, v8);
  SoundTestMenu__Awake(v11, v12);
}


// local variable allocation has failed, the output may be wrong!
void SoundTestMenu__sePlay(SoundTestMenu_o *this, int32_t addIdxVal, const MethodInfo *method)
{
  const MethodInfo *v5; // x6
  const MethodInfo *v6; // x1

  SoundTestMenu__stopSe(this, *(const MethodInfo **)&addIdxVal);
  SoundTestMenu__offsetSelectObj(
    this,
    this->fields.seScrollView,
    &this->fields.selectSeObj,
    this->fields.seGrid,
    this->fields.inputSeCueName,
    addIdxVal,
    v5);
  SoundTestMenu__playSe(this, v6);
}


void SoundTestMenu__selectItem(
        SoundTestMenu_o *this,
        UILabel_o **prevSelectLabel,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  UIWidget_o *v6; // x0
  Il2CppObject *Component_object; // x0
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  UnityEngine_Color_o v14; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v15; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_5935C9D & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_UILabel___);
    byte_5935C9D = 1;
  }
  v6 = (UIWidget_o *)*prevSelectLabel;
  if ( !*prevSelectLabel )
    goto LABEL_7;
  v14.fields.r = 0.0;
  v14.fields.g = 0.0;
  v14.fields.b = 0.0;
  v14.fields.a = 1.0;
  UIWidget__set_color(v6, v14, 0);
  if ( !obj
    || (Component_object = UnityEngine_GameObject__GetComponent_object_(
                             obj,
                             (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_UILabel___),
        *prevSelectLabel = (UILabel_o *)Component_object,
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)prevSelectLabel,
          (int32_t)Component_object,
          v8,
          v9,
          v10,
          v11,
          v12,
          v13),
        (v6 = (UIWidget_o *)*prevSelectLabel) == 0) )
  {
LABEL_7:
    sub_21FFECC(v6, prevSelectLabel);
  }
  v15.fields.g = 0.0;
  v15.fields.b = 0.0;
  v15.fields.r = 1.0;
  v15.fields.a = 1.0;
  UIWidget__set_color(v6, v15, 0);
}


void SoundTestMenu__setupCueNameList(
        SoundTestMenu_o *this,
        System_Collections_Generic_List_string__o *cueNameList,
        CriAtomExAcb_o *acb,
        const MethodInfo *method)
{
  System_Collections_Generic_List_string__o *v5; // x19
  int32_t size; // w2
  int v7; // w8
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  SoundTestMenu_o *v15; // x20
  unsigned __int64 v16; // x21
  struct System_String_o **i; // x23
  struct System_String_array *items; // x8
  _QWORD *v19; // x9
  __int64 v20; // x10
  Il2CppClass **v21; // x0

  v5 = cueNameList;
  if ( (byte_5935C89 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_string__Add__);
    this = (SoundTestMenu_o *)sub_21FFC50(&Method_System_Collections_Generic_List_string__Clear__);
    byte_5935C89 = 1;
  }
  if ( !v5 )
    goto LABEL_17;
  size = v5->fields._size;
  v7 = v5->fields._version + 1;
  v5->fields._size = 0;
  v5->fields._version = v7;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v5->fields._items, 0, size, 0);
  if ( acb )
  {
    this = (SoundTestMenu_o *)CriAtomExAcb__GetCueInfoList(acb, 0);
    if ( !this )
      goto LABEL_17;
    m_CancellationTokenSource = this->fields.m_CancellationTokenSource;
    v15 = this;
    if ( (int)m_CancellationTokenSource >= 1 )
    {
      v16 = 0;
      for ( i = &this->fields.itemName; ; i += 19 )
      {
        if ( v16 >= (unsigned int)m_CancellationTokenSource )
          sub_21FFED4(this);
        items = v5->fields._items;
        cueNameList = (System_Collections_Generic_List_string__o *)*i;
        v19 = Method_System_Collections_Generic_List_string__Add__;
        ++v5->fields._version;
        if ( !items )
          break;
        v20 = v5->fields._size;
        if ( (unsigned int)v20 >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)v5,
            (Il2CppObject *)cueNameList,
            *(const MethodInfo_444FB2C **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
        }
        else
        {
          v21 = &items->obj.klass + v20;
          v5->fields._size = v20 + 1;
          v21[4] = (Il2CppClass *)cueNameList;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v21 + 4), (int32_t)cueNameList, v8, v9, v10, v11, v12, v13);
        }
        LODWORD(m_CancellationTokenSource) = v15->fields.m_CancellationTokenSource;
        if ( (__int64)++v16 >= (int)m_CancellationTokenSource )
          return;
      }
LABEL_17:
      sub_21FFECC(this, cueNameList);
    }
  }
}


int32_t SoundTestMenu__sort(
        SoundTestMenu_o *this,
        UnityEngine_Transform_o *a,
        UnityEngine_Transform_o *b,
        int32_t type,
        const MethodInfo *method)
{
  SoundTestMenu_o *v8; // x22
  System_String_o *name; // x0
  System_String_o *v10; // x0
  struct UILabel_o *v12; // x1
  struct UILabel_o *selectSeObj; // x0
  int32_t result[2]; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_5935C9B & 1) == 0 )
  {
    this = (SoundTestMenu_o *)sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_UILabel___);
    byte_5935C9B = 1;
  }
  *(_QWORD *)result = 0;
  if ( !a )
    goto LABEL_20;
  this = (SoundTestMenu_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)a, 0);
  if ( !this )
    goto LABEL_20;
  this = (SoundTestMenu_o *)UnityEngine_GameObject__GetComponent_object_(
                              (UnityEngine_GameObject_o *)this,
                              (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
  if ( !b )
    goto LABEL_20;
  v8 = this;
  this = (SoundTestMenu_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)b, 0);
  if ( !this )
    goto LABEL_20;
  this = (SoundTestMenu_o *)UnityEngine_GameObject__GetComponent_object_(
                              (UnityEngine_GameObject_o *)this,
                              (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
  if ( type == 2 )
  {
    if ( this && v8 )
    {
      selectSeObj = this->fields.selectSeObj;
      v12 = v8->fields.selectSeObj;
      return System_String__Compare((System_String_o *)selectSeObj, (System_String_o *)v12, 0);
    }
LABEL_20:
    sub_21FFECC(this, a);
  }
  if ( type == 1 )
  {
    if ( v8 && this )
    {
      v12 = this->fields.selectSeObj;
      selectSeObj = v8->fields.selectSeObj;
      return System_String__Compare((System_String_o *)selectSeObj, (System_String_o *)v12, 0);
    }
    goto LABEL_20;
  }
  if ( type )
    return 0;
  name = UnityEngine_Object__get_name((UnityEngine_Object_o *)a, 0);
  System_Int32__TryParse(name, &result[1], 0);
  v10 = UnityEngine_Object__get_name((UnityEngine_Object_o *)b, 0);
  System_Int32__TryParse(v10, result, 0);
  return System_Int32__CompareTo_76925088((int32_t)&result[1], result[0], 0);
}


void SoundTestMenu__sortApply(SoundTestMenu_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *seRoot; // x0
  __int64 v4; // x2
  bool activeSelf; // w8
  UILabel_o *sortButtonLabel; // x20
  int v7; // w9
  __int64 v8; // x8
  __int64 sortTypeSe; // x9
  __int64 v10; // x8
  __int64 sortTypeBgm; // x9

  if ( (byte_5935C9A & 1) == 0 )
  {
    sub_21FFC50(&SoundTestMenu_TypeInfo);
    byte_5935C9A = 1;
  }
  seRoot = this->fields.seRoot;
  if ( !seRoot )
    goto LABEL_19;
  activeSelf = UnityEngine_GameObject__get_activeSelf(seRoot, 0);
  seRoot = (UnityEngine_GameObject_o *)SoundTestMenu_TypeInfo;
  sortButtonLabel = this->fields.sortButtonLabel;
  v7 = *(&SoundTestMenu_TypeInfo->_2.cctor_finished + 1);
  if ( !activeSelf )
  {
    if ( !v7 )
    {
      j_il2cpp_runtime_class_init_0(SoundTestMenu_TypeInfo, method, v4);
      seRoot = (UnityEngine_GameObject_o *)SoundTestMenu_TypeInfo;
    }
    v10 = *(_QWORD *)(seRoot[7].fields.m_CachedPtr + 8);
    if ( v10 )
    {
      sortTypeBgm = this->fields.sortTypeBgm;
      if ( (unsigned int)sortTypeBgm >= *(_DWORD *)(v10 + 24) )
LABEL_20:
        sub_21FFED4(seRoot);
      if ( sortButtonLabel )
      {
        UILabel__set_text(sortButtonLabel, *(System_String_o **)(v10 + 8 * sortTypeBgm + 32), 0);
        seRoot = (UnityEngine_GameObject_o *)this->fields.bgmGrid;
        if ( seRoot )
          goto LABEL_18;
      }
    }
LABEL_19:
    sub_21FFECC(seRoot, method);
  }
  if ( !v7 )
  {
    j_il2cpp_runtime_class_init_0(SoundTestMenu_TypeInfo, method, v4);
    seRoot = (UnityEngine_GameObject_o *)SoundTestMenu_TypeInfo;
  }
  v8 = *(_QWORD *)(seRoot[7].fields.m_CachedPtr + 8);
  if ( !v8 )
    goto LABEL_19;
  sortTypeSe = this->fields.sortTypeSe;
  if ( (unsigned int)sortTypeSe >= *(_DWORD *)(v8 + 24) )
    goto LABEL_20;
  if ( !sortButtonLabel )
    goto LABEL_19;
  UILabel__set_text(sortButtonLabel, *(System_String_o **)(v8 + 8 * sortTypeSe + 32), 0);
  seRoot = (UnityEngine_GameObject_o *)this->fields.seGrid;
  if ( !seRoot )
    goto LABEL_19;
LABEL_18:
  ((void (__fastcall *)(UnityEngine_GameObject_o *, Il2CppClass *))seRoot->klass[1]._1.element_class)(
    seRoot,
    seRoot->klass[1]._1.castClass);
}


void SoundTestMenu__sortCpkApply(SoundTestMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *p_image; // x0
  UILabel_o *sortCpkButtonLabel; // x20
  __int64 v6; // x8
  __int64 sortCpkType; // x9

  if ( (byte_5935CA0 & 1) == 0 )
  {
    sub_21FFC50(&SoundTestMenu_TypeInfo);
    byte_5935CA0 = 1;
  }
  p_image = &SoundTestMenu_TypeInfo->_1.image;
  sortCpkButtonLabel = this->fields.sortCpkButtonLabel;
  if ( !*(&SoundTestMenu_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(SoundTestMenu_TypeInfo, method, v2);
    p_image = &SoundTestMenu_TypeInfo->_1.image;
  }
  v6 = *(_QWORD *)(p_image[23] + 8LL);
  if ( !v6 )
    goto LABEL_10;
  sortCpkType = this->fields.sortCpkType;
  if ( (unsigned int)sortCpkType >= *(_DWORD *)(v6 + 24) )
    sub_21FFED4(p_image);
  if ( !sortCpkButtonLabel
    || (UILabel__set_text(sortCpkButtonLabel, *(System_String_o **)(v6 + 8 * sortCpkType + 32), 0),
        (p_image = &this->fields.bgmCpkGrid->klass) == 0) )
  {
LABEL_10:
    sub_21FFECC(p_image, method);
  }
  (*(void (__fastcall **)(_QWORD *, _QWORD))(*p_image + 440LL))(p_image, *(_QWORD *)(*p_image + 448LL));
}


void SoundTestMenu__stopBgm(SoundTestMenu_o *this, const MethodInfo *method)
{
  UILabel_o *bgmPlayLabel; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  const MethodInfo *v6; // x1
  MethodInfo *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  System_String_o *playBgmCueSheetName; // x0

  if ( (byte_5935C7F & 1) == 0 )
  {
    sub_21FFC50(&SoundManager_TypeInfo);
    sub_21FFC50(&StringLiteral_11068/*"Play"*/);
    byte_5935C7F = 1;
  }
  if ( this->fields.state == 1 )
  {
    bgmPlayLabel = this->fields.bgmPlayLabel;
    if ( !bgmPlayLabel )
      sub_21FFECC(0, method);
    UILabel__set_text(bgmPlayLabel, (System_String_o *)StringLiteral_11068/*"Play"*/, 0);
    this->fields.isPlayBgm = 0;
    if ( !*(&SoundManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v4, v5);
    SoundManager__stopBgm(0);
    SoundTestMenu__ResetBgmProgressBar(this, v6);
    playBgmCueSheetName = this->fields.playBgmCueSheetName;
    if ( playBgmCueSheetName )
    {
      if ( System_String__op_Inequality(playBgmCueSheetName, this->fields.loadBgmCueSheetName, 0) )
        SoundTestMenu__releaseBgm(this, this->fields.playBgmCueSheetName, v7);
    }
    this->fields.playBgmCueSheetName = 0;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.playBgmCueSheetName,
      0,
      (System_String_o *)v7,
      v8,
      v9,
      v10,
      v11,
      v12);
  }
}


void SoundTestMenu__stopSe(SoundTestMenu_o *this, const MethodInfo *method)
{
  SePlayer_o *sePlayer; // x0
  SePlayer_o *v4; // x20
  System_Action_o *v5; // x21
  UILabel_o *sePlayLabel; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7

  if ( (byte_5935C84 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_SoundTestMenu_stopSe__);
    sub_21FFC50(&StringLiteral_11068/*"Play"*/);
    byte_5935C84 = 1;
  }
  sePlayer = this->fields.sePlayer;
  if ( sePlayer )
  {
    SePlayer__StopSe(sePlayer, 0.0, 0);
    v4 = this->fields.sePlayer;
    v5 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(v5, (Il2CppObject *)this, Method_SoundTestMenu_stopSe__, 0);
    if ( !v4
      || (SePlayer__RemoveCallback(v4, v5, 0),
          this->fields.sePlayer = 0,
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.sePlayer, 0, v8, v9, v10, v11, v12, v13),
          (sePlayLabel = this->fields.sePlayLabel) == 0) )
    {
      sub_21FFECC(sePlayLabel, v7);
    }
    UILabel__set_text(sePlayLabel, (System_String_o *)StringLiteral_11068/*"Play"*/, 0);
    this->fields.isPlaySe = 0;
  }
}


void SoundTestMenu__switchButtonLabelChange(SoundTestMenu_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *seRoot; // x0
  bool activeSelf; // w8
  __int64 v5; // x2
  UILabel_o *sortButtonLabel; // x20
  __int64 v7; // x8
  int32_t sortTypeSe; // w9
  __int64 v9; // x2

  if ( (byte_5935C98 & 1) == 0 )
  {
    sub_21FFC50(&SoundTestMenu_TypeInfo);
    sub_21FFC50(&StringLiteral_12519/*"SEテストに\n変更"*/);
    sub_21FFC50(&StringLiteral_3045/*"BGMテストに\n変更"*/);
    byte_5935C98 = 1;
  }
  seRoot = this->fields.seRoot;
  if ( !seRoot )
    goto LABEL_18;
  activeSelf = UnityEngine_GameObject__get_activeSelf(seRoot, 0);
  seRoot = (UnityEngine_GameObject_o *)this->fields.switchButtonLabel;
  if ( activeSelf )
  {
    if ( seRoot )
    {
      UILabel__set_text((UILabel_o *)seRoot, (System_String_o *)StringLiteral_3045/*"BGMテストに\n変更"*/, 0);
      sortButtonLabel = this->fields.sortButtonLabel;
      seRoot = (UnityEngine_GameObject_o *)SoundTestMenu_TypeInfo;
      if ( !*(&SoundTestMenu_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(SoundTestMenu_TypeInfo, method, v5);
        seRoot = (UnityEngine_GameObject_o *)SoundTestMenu_TypeInfo;
      }
      v7 = *(_QWORD *)(seRoot[7].fields.m_CachedPtr + 8);
      if ( v7 )
      {
        sortTypeSe = this->fields.sortTypeSe;
        goto LABEL_15;
      }
    }
LABEL_18:
    sub_21FFECC(seRoot, method);
  }
  if ( !seRoot )
    goto LABEL_18;
  UILabel__set_text((UILabel_o *)seRoot, (System_String_o *)StringLiteral_12519/*"SEテストに\n変更"*/, 0);
  sortButtonLabel = this->fields.sortButtonLabel;
  seRoot = (UnityEngine_GameObject_o *)SoundTestMenu_TypeInfo;
  if ( !*(&SoundTestMenu_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(SoundTestMenu_TypeInfo, method, v9);
    seRoot = (UnityEngine_GameObject_o *)SoundTestMenu_TypeInfo;
  }
  v7 = *(_QWORD *)(seRoot[7].fields.m_CachedPtr + 8);
  if ( !v7 )
    goto LABEL_18;
  sortTypeSe = this->fields.sortTypeBgm;
LABEL_15:
  if ( (unsigned int)sortTypeSe >= *(_DWORD *)(v7 + 24) )
    sub_21FFED4(seRoot);
  if ( !sortButtonLabel )
    goto LABEL_18;
  UILabel__set_text(sortButtonLabel, *(System_String_o **)(v7 + 8LL * sortTypeSe + 32), 0);
}


// local variable allocation has failed, the output may be wrong!
void SoundTestMenu__updateBgmPrevNextButton(SoundTestMenu_o *this, bool onFlg, const MethodInfo *method)
{
  UnityEngine_GameObject_o *bgmPrevButton; // x0

  bgmPrevButton = this->fields.bgmPrevButton;
  if ( !bgmPrevButton
    || (UnityEngine_GameObject__SetActive(bgmPrevButton, onFlg, 0), (bgmPrevButton = this->fields.bgmNextButton) == 0) )
  {
    sub_21FFECC(bgmPrevButton, onFlg);
  }
  UnityEngine_GameObject__SetActive(bgmPrevButton, onFlg, 0);
}


void SoundTestMenu_CallbackFunc___ctor(
        SoundTestMenu_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    (System_String_o *)method,
    (System_String_o *)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_21FFD28(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_21FFEE8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_21FFD90(v14, 0);
    }
    goto LABEL_5;
  }
  if ( v12 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1FF5EC8;
LABEL_6:
  this->fields.extra_arg = (intptr_t)&loc_1FF5E88;
}


System_IAsyncResult_o *SoundTestMenu_CallbackFunc__BeginInvoke(
        SoundTestMenu_CallbackFunc_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  return (System_IAsyncResult_o *)sub_21FFC04(this, &v5, callback, object);
}


void SoundTestMenu_CallbackFunc__EndInvoke(
        SoundTestMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_21FFC08(result, 0, method);
}


void SoundTestMenu_CallbackFunc__Invoke(SoundTestMenu_CallbackFunc_o *this, const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, intptr_t))this->fields.invoke_impl)(this->fields.method_code, this->fields.method);
}


void SoundTestMenu_IsValidPlaySound___ctor(
        SoundTestMenu_IsValidPlaySound_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    (System_String_o *)method,
    (System_String_o *)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_21FFD28(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_21FFEE8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_21FFD90(v14, 0);
    }
    goto LABEL_5;
  }
  if ( v12 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1FF5F28;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1FF5EDC;
}


System_IAsyncResult_o *SoundTestMenu_IsValidPlaySound__BeginInvoke(
        SoundTestMenu_IsValidPlaySound_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  return (System_IAsyncResult_o *)sub_21FFC04(this, &v5, callback, object);
}


bool SoundTestMenu_IsValidPlaySound__EndInvoke(
        SoundTestMenu_IsValidPlaySound_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x3

  v3 = sub_21FFC08(result, 0, method);
  if ( !v3 )
    sub_21FFECC(0, v4);
  return *(_BYTE *)j_il2cpp_object_unbox_0(v3, v4, v5, v6);
}


bool SoundTestMenu_IsValidPlaySound__Invoke(SoundTestMenu_IsValidPlaySound_o *this, const MethodInfo *method)
{
  return ((__int64 (__fastcall *)(intptr_t, intptr_t))this->fields.invoke_impl)(
           this->fields.method_code,
           this->fields.method);
}


void SoundTestMenu__CheckSeVersionDiff_d__116___ctor(
        SoundTestMenu__CheckSeVersionDiff_d__116_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool SoundTestMenu__CheckSeVersionDiff_d__116__MoveNext(
        SoundTestMenu__CheckSeVersionDiff_d__116_o *this,
        const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  int32_t _1__state; // w8
  struct SoundTestMenu_o *_4__this; // x20
  bool result; // w0
  Il2CppObject *v12; // x21
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  __int64 _8__1; // x0
  struct SoundTestMenu_o *v26; // x1
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  struct UILabel_o *outputLabel; // x8
  struct System_String_o *mText; // x1
  __int64 v35; // x1
  __int64 v36; // x2
  System_String_o *Text; // x21
  struct System_String_o *FileNameWithoutExtension; // x0
  System_String_o *v39; // x2
  System_String_o *v40; // x3
  int32_t v41; // w4
  int32_t v42; // w5
  bool v43; // w6
  bool v44; // w7
  struct SoundTestMenu___c__DisplayClass116_0_o *v45; // x21
  System_Collections_Generic_Dictionary_object__object__o *v46; // x22
  System_String_o *v47; // x2
  System_String_o *v48; // x3
  int32_t v49; // w4
  int32_t v50; // w5
  bool v51; // w6
  bool v52; // w7
  int v53; // w8
  Il2CppObject *v54; // x22
  struct SoundTestMenu___c__DisplayClass116_1_o **p__8__2; // x21
  System_String_o *v56; // x2
  System_String_o *v57; // x3
  int32_t v58; // w4
  int32_t v59; // w5
  bool v60; // w6
  bool v61; // w7
  System_String_o *v62; // x2
  System_String_o *v63; // x3
  int32_t v64; // w4
  int32_t v65; // w5
  bool v66; // w6
  bool v67; // w7
  struct SoundTestMenu___c__DisplayClass116_0_o *v68; // x1
  struct SoundTestMenu___c__DisplayClass116_1_o *_8__2; // x22
  __int64 v70; // x1
  __int64 v71; // x2
  Il2CppObject *Item; // x23
  System_String_o *v73; // x2
  System_String_o *v74; // x3
  int32_t v75; // w4
  int32_t v76; // w5
  bool v77; // w6
  bool v78; // w7
  System_String_o *v79; // x2
  System_String_o *v80; // x3
  int32_t v81; // w4
  int32_t v82; // w5
  bool v83; // w6
  bool v84; // w7
  __int64 v85; // x22
  int32_t v86; // w1
  System_String_o *v87; // x2
  System_String_o *v88; // x3
  int32_t v89; // w4
  int32_t v90; // w5
  bool v91; // w6
  bool v92; // w7
  System_String_o *v93; // x2
  System_String_o *v94; // x3
  int32_t v95; // w4
  int32_t v96; // w5
  bool v97; // w6
  bool v98; // w7
  int32_t v99; // w1
  struct System_Collections_Generic_List_string__o *v100; // x8
  System_String_o *v101; // x2
  System_String_o *v102; // x3
  int32_t v103; // w4
  int32_t v104; // w5
  bool v105; // w6
  bool v106; // w7
  System_String_o *v107; // x2
  System_String_o *v108; // x3
  int32_t v109; // w4
  int32_t v110; // w5
  bool v111; // w6
  bool v112; // w7
  int32_t v113; // w1
  System_String_o *v114; // x0
  UILabel_o *v115; // x22
  struct SoundTestMenu___c__DisplayClass116_1_o *v116; // x21
  System_Action_c *v117; // x0
  System_String_o *cpkName; // x22
  System_Action_o *v119; // x23
  SoundTestMenu_o *v120; // x0
  const MethodInfo *v121; // x3
  struct SoundTestMenu___c__DisplayClass116_1_o *v122; // x8
  struct System_Collections_Generic_List_string__o *seCpkList; // x9
  System_Collections_Generic_Dictionary_object__object__o *v124; // x24
  System_String_o *v125; // x21
  int v126; // w8
  __int64 v127; // x21
  int v128; // w27
  int32_t v129; // w23
  System_Collections_Generic_Dictionary_TKey__TValue__o *v130; // x25
  int v131; // w28
  __int64 v132; // x22
  Il2CppObject *v133; // x26
  System_Collections_Generic_Dictionary_object__object__o *v134; // x23
  System_Collections_Generic_Dictionary_object__object__o *v135; // x22
  struct SoundTestMenu___c__DisplayClass116_0_o *v136; // x8
  __int128 v137; // q0
  System_Collections_Generic_Dictionary_object__object__o *v138; // x21
  struct System_Collections_Generic_KeyValuePair_TKey__TValue__o current; // kr00_16
  System_Collections_Generic_List_object__o *v140; // x28
  System_Collections_Generic_List_object__o *v141; // x27
  System_Collections_Generic_List_object__o *v142; // x26
  __int64 v143; // x0
  __int64 v144; // x1
  __int64 v145; // x1
  __int64 v146; // x2
  Il2CppObject *v147; // x0
  const MethodInfo *v148; // x6
  __int64 v149; // x0
  __int64 v150; // x1
  SoundTestMenu___c_c *v151; // x0
  struct SoundTestMenu___c_StaticFields *static_fields; // x8
  System_Func_T__TResult__o *_9__116_1; // x21
  Il2CppObject *v154; // x22
  struct SoundTestMenu___c_StaticFields *v155; // x0
  System_String_o *v156; // x2
  System_String_o *v157; // x3
  int32_t v158; // w4
  int32_t v159; // w5
  bool v160; // w6
  bool v161; // w7
  System_Func_TSource__TResult__o *v162; // x1
  System_Collections_Generic_IEnumerable_T__o *v163; // x0
  Il2CppObject **p__2__current; // x19
  System_String_o *v165; // x24
  const MethodInfo *v166; // x6
  const MethodInfo *v167; // x6
  const MethodInfo *v168; // x6
  Il2CppObject **v169; // x19
  System_String_o *v170; // x2
  System_String_o *v171; // x3
  int32_t v172; // w4
  int32_t v173; // w5
  bool v174; // w6
  bool v175; // w7
  System_Collections_Generic_Dictionary_object__object__o *v176; // [xsp+0h] [xbp-D0h]
  System_Collections_Generic_Dictionary_object__object__o *v177; // [xsp+8h] [xbp-C8h]
  Il2CppObject *key; // [xsp+10h] [xbp-C0h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v179; // [xsp+18h] [xbp-B8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v180; // [xsp+40h] [xbp-90h] BYREF
  int32_t size; // [xsp+6Ch] [xbp-64h] BYREF

  if ( (byte_5935CB1 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__Dictionary_string__long___Add__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__long__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__Dictionary_string__long___ContainsKey__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__Dictionary_string__long___GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__long___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__Dictionary_string__long____ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__List_string____ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__Dictionary_string__long___get_Item__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__List_string___set_Item__);
    sub_21FFC50(&System_Collections_Generic_Dictionary_string__Dictionary_string__long___TypeInfo);
    sub_21FFC50(&System_Collections_Generic_Dictionary_string__List_string___TypeInfo);
    sub_21FFC50(&System_Collections_Generic_Dictionary_string__long__TypeInfo);
    sub_21FFC50(&Method_System_Linq_Enumerable_Select_KeyValuePair_string__long___string___);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_Enumerator_string__Dictionary_string__long___Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_Enumerator_string__Dictionary_string__long___MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_Enumerator_string__Dictionary_string__long___get_Current__);
    sub_21FFC50(&System_Func_KeyValuePair_string__long___string__TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_KeyValuePair_string__Dictionary_string__long___get_Key__);
    sub_21FFC50(&Method_System_Collections_Generic_KeyValuePair_string__Dictionary_string__long___get_Value__);
    sub_21FFC50(&Method_System_Collections_Generic_List_string__AddRange__);
    sub_21FFC50(&Method_System_Collections_Generic_List_string___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_21FFC50(&System_Collections_Generic_List_string__TypeInfo);
    sub_21FFC50(&System_IO_Path_TypeInfo);
    sub_21FFC50(&string___TypeInfo);
    sub_21FFC50(&Method_SoundTestMenu___c__CheckSeVersionDiff_b__116_1__);
    sub_21FFC50(&SoundTestMenu___c__DisplayClass116_0_TypeInfo);
    sub_21FFC50(&Method_SoundTestMenu___c__DisplayClass116_1__CheckSeVersionDiff_b__0__);
    sub_21FFC50(&SoundTestMenu___c__DisplayClass116_1_TypeInfo);
    sub_21FFC50(&SoundTestMenu___c_TypeInfo);
    sub_21FFC50(&StringLiteral_1165/*"/SE/"*/);
    sub_21FFC50(&StringLiteral_1101/*".csv"*/);
    sub_21FFC50(&StringLiteral_160/*" / "*/);
    sub_21FFC50(&StringLiteral_1166/*"/SE/Diff"*/);
    sub_21FFC50(&StringLiteral_4524/*"ChangeFiles"*/);
    sub_21FFC50(&StringLiteral_681/*"("*/);
    sub_21FFC50(&StringLiteral_789/*")"*/);
    sub_21FFC50(&StringLiteral_2250/*"AddFiles"*/);
    sub_21FFC50(&StringLiteral_5405/*"DeleteFiles"*/);
    byte_5935CB1 = 1;
  }
  _1__state = this->fields.__1__state;
  size = 0;
  memset(&v180, 0, sizeof(v180));
  if ( _1__state == 2 )
  {
    result = 0;
    this->fields.__1__state = -1;
    return result;
  }
  _4__this = this->fields.__4__this;
  if ( _1__state == 1 )
  {
    this->fields.__1__state = -1;
    goto LABEL_36;
  }
  result = 0;
  if ( !_1__state )
  {
    this->fields.__1__state = -1;
    v12 = (Il2CppObject *)sub_21FFEBC(SoundTestMenu___c__DisplayClass116_0_TypeInfo);
    System_Object___ctor(v12, 0);
    this->fields.__8__1 = (struct SoundTestMenu___c__DisplayClass116_0_o *)v12;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.__8__1, (int32_t)v12, v13, v14, v15, v16, v17, v18);
    _8__1 = (__int64)this->fields.__8__1;
    if ( !_8__1 )
      goto LABEL_107;
    v26 = this->fields.__4__this;
    *(_QWORD *)(_8__1 + 24) = v26;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(_8__1 + 24), (int32_t)v26, v19, v20, v21, v22, v23, v24);
    if ( !_4__this )
      goto LABEL_107;
    _8__1 = (__int64)_4__this->fields.outputMask;
    if ( !_8__1 )
      goto LABEL_107;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)_8__1, 1, 0);
    outputLabel = _4__this->fields.outputLabel;
    if ( !outputLabel )
      goto LABEL_107;
    mText = outputLabel->fields.mText;
    this->fields._labelText_5__2 = mText;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields._labelText_5__2,
      (int32_t)mText,
      v27,
      v28,
      v29,
      v30,
      v31,
      v32);
    _8__1 = (__int64)_4__this->fields.targetCpkInput;
    if ( !_8__1 )
      goto LABEL_107;
    Text = UILineInput__GetText((UILineInput_o *)_8__1, 0);
    if ( !*(&System_IO_Path_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(System_IO_Path_TypeInfo, v35, v36);
    FileNameWithoutExtension = System_IO_Path__GetFileNameWithoutExtension(Text, 0);
    this->fields._targetCpk_5__3 = FileNameWithoutExtension;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields._targetCpk_5__3,
      (int32_t)FileNameWithoutExtension,
      v39,
      v40,
      v41,
      v42,
      v43,
      v44);
    v45 = this->fields.__8__1;
    v46 = (System_Collections_Generic_Dictionary_object__object__o *)sub_21FFEBC(System_Collections_Generic_Dictionary_string__Dictionary_string__long___TypeInfo);
    System_Collections_Generic_Dictionary_object__object____ctor(
      v46,
      (const MethodInfo_3FC9AD8 *)Method_System_Collections_Generic_Dictionary_string__Dictionary_string__long____ctor__);
    if ( !v45 )
      goto LABEL_107;
    v45->fields.currentCpkList = (struct System_Collections_Generic_Dictionary_string__Dictionary_string__long___o *)v46;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v45->fields, (int32_t)v46, v47, v48, v49, v50, v51, v52);
    v53 = 0;
    this->fields._i_5__4 = 0;
    while ( 1 )
    {
      seCpkList = _4__this->fields.seCpkList;
      if ( !seCpkList )
        goto LABEL_107;
      if ( v53 >= seCpkList->fields._size )
        break;
      v54 = (Il2CppObject *)sub_21FFEBC(SoundTestMenu___c__DisplayClass116_1_TypeInfo);
      System_Object___ctor(v54, 0);
      this->fields.__8__2 = (struct SoundTestMenu___c__DisplayClass116_1_o *)v54;
      p__8__2 = &this->fields.__8__2;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.__8__2, (int32_t)v54, v56, v57, v58, v59, v60, v61);
      _8__1 = (__int64)this->fields.__8__2;
      if ( !_8__1 )
        goto LABEL_107;
      v68 = this->fields.__8__1;
      *(_QWORD *)(_8__1 + 32) = v68;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(_8__1 + 32), (int32_t)v68, v62, v63, v64, v65, v66, v67);
      _8__1 = (__int64)_4__this->fields.seCpkList;
      if ( !_8__1 )
        goto LABEL_107;
      _8__2 = this->fields.__8__2;
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)_8__1,
               this->fields._i_5__4,
               (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_string__get_Item__);
      if ( !*(&System_IO_Path_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(System_IO_Path_TypeInfo, v70, v71);
      _8__1 = (__int64)System_IO_Path__GetFileNameWithoutExtension((System_String_o *)Item, 0);
      if ( !_8__2 )
        goto LABEL_107;
      _8__2->fields.cpkName = (struct System_String_o *)_8__1;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&_8__2->fields, _8__1, v73, v74, v75, v76, v77, v78);
      _8__1 = (__int64)this->fields._targetCpk_5__3;
      if ( !_8__1 )
        goto LABEL_107;
      if ( *(int *)(_8__1 + 16) < 1 )
        goto LABEL_26;
      if ( !*p__8__2 )
        goto LABEL_107;
      _8__1 = System_String__op_Inequality((System_String_o *)_8__1, (*p__8__2)->fields.cpkName, 0);
      if ( (_8__1 & 1) == 0 )
      {
LABEL_26:
        _8__1 = sub_21FFD10(string___TypeInfo, 5);
        if ( !_8__1 )
          goto LABEL_107;
        v85 = _8__1;
        if ( !*(_DWORD *)(_8__1 + 24) )
          goto LABEL_93;
        v86 = StringLiteral_681/*"("*/;
        *(_QWORD *)(_8__1 + 32) = StringLiteral_681/*"("*/;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(_8__1 + 32), v86, v79, v80, v81, v82, v83, v84);
        size = this->fields._i_5__4 + 1;
        _8__1 = (__int64)System_Int32__ToString((int32_t)&size, 0);
        if ( (*(_DWORD *)(v85 + 24) & 0xFFFFFFFE) == 0 )
          goto LABEL_93;
        *(_QWORD *)(v85 + 40) = _8__1;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v85 + 40), _8__1, v87, v88, v89, v90, v91, v92);
        if ( *(_DWORD *)(v85 + 24) <= 2u )
          goto LABEL_93;
        v99 = StringLiteral_160/*" / "*/;
        *(_QWORD *)(v85 + 48) = StringLiteral_160/*" / "*/;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v85 + 48), v99, v93, v94, v95, v96, v97, v98);
        v100 = _4__this->fields.seCpkList;
        if ( !v100 )
          goto LABEL_107;
        size = v100->fields._size;
        _8__1 = (__int64)System_Int32__ToString((int32_t)&size, 0);
        if ( (*(_DWORD *)(v85 + 24) & 0xFFFFFFFC) == 0 )
          goto LABEL_93;
        *(_QWORD *)(v85 + 56) = _8__1;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v85 + 56), _8__1, v101, v102, v103, v104, v105, v106);
        if ( *(_DWORD *)(v85 + 24) <= 4u )
          goto LABEL_93;
        v113 = StringLiteral_789/*")"*/;
        *(_QWORD *)(v85 + 64) = StringLiteral_789/*")"*/;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v85 + 64), v113, v107, v108, v109, v110, v111, v112);
        v114 = System_String__Concat_75483816((System_String_array *)v85, 0);
        v115 = _4__this->fields.outputLabel;
        _8__1 = (__int64)System_String__Concat_75438412(this->fields._labelText_5__2, v114, 0);
        if ( !v115 )
          goto LABEL_107;
        UILabel__set_text(v115, (System_String_o *)_8__1, 0);
        v116 = *p__8__2;
        if ( !v116 )
          goto LABEL_107;
        v117 = System_Action_TypeInfo;
        cpkName = v116->fields.cpkName;
        v116->fields.check = 0;
        v119 = (System_Action_o *)sub_21FFEBC(v117);
        System_Action___ctor(
          v119,
          (Il2CppObject *)v116,
          Method_SoundTestMenu___c__DisplayClass116_1__CheckSeVersionDiff_b__0__,
          0);
        SoundTestMenu__loadSE(v120, cpkName, v119, v121);
LABEL_36:
        _8__1 = (__int64)&this->fields.__8__2;
        v122 = this->fields.__8__2;
        if ( !v122 )
          goto LABEL_107;
        if ( !v122->fields.check )
        {
          this->fields.__2__current = 0;
          p__2__current = &this->fields.__2__current;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)p__2__current, 0, v2, v3, v4, v5, v6, v7);
          result = 1;
          *((_DWORD *)p__2__current - 2) = 1;
          return result;
        }
        *(_QWORD *)_8__1 = 0;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)_8__1, 0, v2, v3, v4, v5, v6, v7);
      }
      size = this->fields._i_5__4;
      v53 = size + 1;
      this->fields._i_5__4 = size + 1;
      if ( !_4__this )
        goto LABEL_107;
    }
    v124 = (System_Collections_Generic_Dictionary_object__object__o *)sub_21FFEBC(System_Collections_Generic_Dictionary_string__Dictionary_string__long___TypeInfo);
    System_Collections_Generic_Dictionary_object__object____ctor(
      v124,
      (const MethodInfo_3FC9AD8 *)Method_System_Collections_Generic_Dictionary_string__Dictionary_string__long____ctor__);
    v125 = System_String__Concat_75483552(
             _4__this->fields.pathDiffDirectory,
             (System_String_o *)StringLiteral_1165/*"/SE/"*/,
             this->fields.compareVersion,
             (System_String_o *)StringLiteral_1101/*".csv"*/,
             0);
    if ( !System_IO_File__Exists(v125, 0) )
      return 0;
    _8__1 = (__int64)System_IO_File__ReadAllLines(v125, 0);
    if ( !_8__1 )
LABEL_107:
      sub_21FFECC(_8__1, method);
    v126 = *(_DWORD *)(_8__1 + 24);
    v127 = _8__1;
    if ( v126 >= 1 )
    {
      v128 = 0;
      while ( 1 )
      {
        if ( v128 >= (unsigned int)v126 )
          goto LABEL_93;
        _8__1 = *(_QWORD *)(v127 + 8LL * v128 + 32);
        if ( !_8__1 )
          goto LABEL_107;
        _8__1 = (__int64)System_String__Split((System_String_o *)_8__1, 0x2Cu, 0, 0);
        if ( !_8__1 )
          goto LABEL_107;
        if ( *(_DWORD *)(_8__1 + 24) != 3 )
          break;
        key = *(Il2CppObject **)(_8__1 + 40);
        v129 = System_Int32__Parse(*(System_String_o **)(_8__1 + 48), 0);
        v130 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_21FFEBC(System_Collections_Generic_Dictionary_string__long__TypeInfo);
        System_Collections_Generic_Dictionary_object__long____ctor(
          v130,
          (const MethodInfo_3FC676C *)Method_System_Collections_Generic_Dictionary_string__long___ctor__);
        if ( v129 >= 1 )
        {
          v131 = v128 + 1;
          v132 = (unsigned int)v129;
          while ( (unsigned int)v131 < *(_DWORD *)(v127 + 24) )
          {
            _8__1 = *(_QWORD *)(v127 + 8LL * v131 + 32);
            if ( !_8__1 )
              goto LABEL_107;
            _8__1 = (__int64)System_String__Split((System_String_o *)_8__1, 0x2Cu, 0, 0);
            if ( !_8__1 )
              goto LABEL_107;
            if ( *(_DWORD *)(_8__1 + 24) != 2 )
              goto LABEL_90;
            v133 = *(Il2CppObject **)(_8__1 + 32);
            _8__1 = System_Int64__Parse(*(System_String_o **)(_8__1 + 40), 0);
            if ( !v130 )
              goto LABEL_107;
            System_Collections_Generic_Dictionary_object__long___Add(
              v130,
              v133,
              _8__1,
              (const MethodInfo_3FC70FC *)Method_System_Collections_Generic_Dictionary_string__long__Add__);
            --v132;
            ++v131;
            if ( !v132 )
              goto LABEL_58;
          }
LABEL_93:
          sub_21FFED4(_8__1);
        }
LABEL_58:
        if ( !v124 )
          goto LABEL_107;
        _8__1 = System_Collections_Generic_Dictionary_object__object___ContainsKey(
                  v124,
                  key,
                  (const MethodInfo_3FCA65C *)Method_System_Collections_Generic_Dictionary_string__Dictionary_string__long___ContainsKey__);
        if ( (_8__1 & 1) == 0 )
          System_Collections_Generic_Dictionary_object__object___Add(
            v124,
            key,
            (Il2CppObject *)v130,
            (const MethodInfo_3FCA468 *)Method_System_Collections_Generic_Dictionary_string__Dictionary_string__long___Add__);
        v126 = *(_DWORD *)(v127 + 24);
        v128 += v129 + 1;
        if ( v128 >= v126 )
          goto LABEL_62;
      }
LABEL_90:
      _8__1 = (__int64)_4__this->fields.outputMask;
      if ( _8__1 )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)_8__1, 0, 0);
        return 0;
      }
      goto LABEL_107;
    }
LABEL_62:
    v134 = (System_Collections_Generic_Dictionary_object__object__o *)sub_21FFEBC(System_Collections_Generic_Dictionary_string__List_string___TypeInfo);
    System_Collections_Generic_Dictionary_object__object____ctor(
      v134,
      (const MethodInfo_3FC9AD8 *)Method_System_Collections_Generic_Dictionary_string__List_string____ctor__);
    v177 = (System_Collections_Generic_Dictionary_object__object__o *)sub_21FFEBC(System_Collections_Generic_Dictionary_string__List_string___TypeInfo);
    System_Collections_Generic_Dictionary_object__object____ctor(
      v177,
      (const MethodInfo_3FC9AD8 *)Method_System_Collections_Generic_Dictionary_string__List_string____ctor__);
    v135 = (System_Collections_Generic_Dictionary_object__object__o *)sub_21FFEBC(System_Collections_Generic_Dictionary_string__List_string___TypeInfo);
    System_Collections_Generic_Dictionary_object__object____ctor(
      v135,
      (const MethodInfo_3FC9AD8 *)Method_System_Collections_Generic_Dictionary_string__List_string____ctor__);
    v136 = this->fields.__8__1;
    if ( !v136 )
      goto LABEL_107;
    _8__1 = (__int64)v136->fields.currentCpkList;
    if ( !_8__1 )
      goto LABEL_107;
    System_Collections_Generic_Dictionary_object__object___GetEnumerator(
      &v179,
      (System_Collections_Generic_Dictionary_object__object__o *)_8__1,
      (const MethodInfo_3FCA89C *)Method_System_Collections_Generic_Dictionary_string__Dictionary_string__long___GetEnumerator__);
    v137 = *(_OWORD *)&v179.fields._dictionary;
    v138 = v177;
    v176 = v135;
    *(_QWORD *)&v180.fields._getEnumeratorRetType = *(_QWORD *)&v179.fields._getEnumeratorRetType;
    v179.fields._dictionary = 0;
    *(_QWORD *)&v179.fields._version = &v180;
    *(_OWORD *)&v180.fields._dictionary = v137;
    v180.fields._current = v179.fields._current;
    while ( System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
              &v180,
              (const MethodInfo_4135514 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__Dictionary_string__long___MoveNext__) )
    {
      current = v180.fields._current;
      v140 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_string__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v140,
        (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_string___ctor__);
      v141 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_string__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v141,
        (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_string___ctor__);
      v142 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_string__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v142,
        (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_string___ctor__);
      if ( !v124 )
        sub_21FFECC(v143, v144);
      if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
             v124,
             current.fields.key,
             (const MethodInfo_3FCA65C *)Method_System_Collections_Generic_Dictionary_string__Dictionary_string__long___ContainsKey__) )
      {
        v147 = System_Collections_Generic_Dictionary_object__object___get_Item(
                 v124,
                 current.fields.key,
                 (const MethodInfo_3FCA3E8 *)Method_System_Collections_Generic_Dictionary_string__Dictionary_string__long___get_Item__);
        SoundTestMenu__CompareCueList(
          (SoundTestMenu_o *)v147,
          (System_Collections_Generic_Dictionary_string__long__o *)v147,
          (System_Collections_Generic_Dictionary_string__long__o *)current.fields.value,
          (System_Collections_Generic_List_string__o *)v140,
          (System_Collections_Generic_List_string__o *)v141,
          (System_Collections_Generic_List_string__o *)v142,
          v148);
        if ( !v140 )
          sub_21FFECC(v149, v150);
      }
      else
      {
        v151 = SoundTestMenu___c_TypeInfo;
        if ( !*(&SoundTestMenu___c_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(SoundTestMenu___c_TypeInfo, v145, v146);
          v151 = SoundTestMenu___c_TypeInfo;
        }
        static_fields = v151->static_fields;
        _9__116_1 = (System_Func_T__TResult__o *)static_fields->__9__116_1;
        if ( !_9__116_1 )
        {
          if ( !*(&v151->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(v151, v145, v146);
            static_fields = SoundTestMenu___c_TypeInfo->static_fields;
          }
          v154 = (Il2CppObject *)static_fields->__9;
          _9__116_1 = (System_Func_T__TResult__o *)sub_21FFEBC(System_Func_KeyValuePair_string__long___string__TypeInfo);
          System_Func_KeyValuePair_object__long___object____ctor(
            _9__116_1,
            v154,
            Method_SoundTestMenu___c__CheckSeVersionDiff_b__116_1__,
            0);
          v155 = SoundTestMenu___c_TypeInfo->static_fields;
          v155->__9__116_1 = (struct System_Func_KeyValuePair_string__long___string__o *)_9__116_1;
          v135 = v176;
          sub_21FFBF4(
            (MissionNaviTransitionBoardItem_o *)&v155->__9__116_1,
            (int32_t)_9__116_1,
            v156,
            v157,
            v158,
            v159,
            v160,
            v161);
        }
        v162 = (System_Func_TSource__TResult__o *)_9__116_1;
        v138 = v177;
        v163 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_KeyValuePair_object__long___object_(
                                                                (System_Collections_Generic_IEnumerable_TSource__o *)current.fields.value,
                                                                v162,
                                                                (const MethodInfo_3858744 *)Method_System_Linq_Enumerable_Select_KeyValuePair_string__long___string___);
        if ( !v140 )
          sub_21FFECC(v163, v163);
        System_Collections_Generic_List_object___AddRange(
          v140,
          v163,
          (const MethodInfo_444FD3C *)Method_System_Collections_Generic_List_string__AddRange__);
      }
      if ( v140->fields._size )
      {
        if ( !v134 )
          sub_21FFECC(0, v150);
        System_Collections_Generic_Dictionary_object__object___set_Item(
          v134,
          current.fields.key,
          (Il2CppObject *)v140,
          (const MethodInfo_3FCA454 *)Method_System_Collections_Generic_Dictionary_string__List_string___set_Item__);
      }
      if ( !v141 )
        sub_21FFECC(v149, v150);
      if ( v141->fields._size )
      {
        if ( !v138 )
          sub_21FFECC(v149, v150);
        System_Collections_Generic_Dictionary_object__object___set_Item(
          v138,
          current.fields.key,
          (Il2CppObject *)v141,
          (const MethodInfo_3FCA454 *)Method_System_Collections_Generic_Dictionary_string__List_string___set_Item__);
      }
      if ( !v142 )
        sub_21FFECC(v149, v150);
      if ( v142->fields._size )
      {
        if ( !v135 )
          sub_21FFECC(v149, v150);
        System_Collections_Generic_Dictionary_object__object___set_Item(
          v135,
          current.fields.key,
          (Il2CppObject *)v142,
          (const MethodInfo_3FCA454 *)Method_System_Collections_Generic_Dictionary_string__List_string___set_Item__);
      }
    }
    sub_1FF5F50(&v179);
    v165 = System_String__Concat_75438412(_4__this->fields.pathDiffDirectory, (System_String_o *)StringLiteral_1166/*"/SE/Diff"*/, 0);
    if ( System_IO_Directory__Exists(v165, 0) )
      System_IO_Directory__Delete(v165, 1, 0);
    System_IO_Directory__CreateDirectory(v165, 0);
    SoundTestMenu__OutputDiffFile(
      _4__this,
      v165,
      (System_String_o *)StringLiteral_2250/*"AddFiles"*/,
      this->fields.compareVersion,
      (System_Collections_Generic_Dictionary_string__List_string___o *)v134,
      this->fields._targetCpk_5__3,
      v166);
    SoundTestMenu__OutputDiffFile(
      _4__this,
      v165,
      (System_String_o *)StringLiteral_4524/*"ChangeFiles"*/,
      this->fields.compareVersion,
      (System_Collections_Generic_Dictionary_string__List_string___o *)v138,
      this->fields._targetCpk_5__3,
      v167);
    SoundTestMenu__OutputDiffFile(
      _4__this,
      v165,
      (System_String_o *)StringLiteral_5405/*"DeleteFiles"*/,
      this->fields.compareVersion,
      (System_Collections_Generic_Dictionary_string__List_string___o *)v135,
      this->fields._targetCpk_5__3,
      v168);
    _8__1 = (__int64)_4__this->fields.outputLabel;
    if ( !_8__1 )
      goto LABEL_107;
    UILabel__set_text((UILabel_o *)_8__1, this->fields._labelText_5__2, 0);
    _8__1 = (__int64)_4__this->fields.outputMask;
    if ( !_8__1 )
      goto LABEL_107;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)_8__1, 0, 0);
    this->fields.__2__current = 0;
    v169 = &this->fields.__2__current;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)v169, 0, v170, v171, v172, v173, v174, v175);
    result = 1;
    *((_DWORD *)v169 - 2) = 2;
  }
  return result;
}


Il2CppObject *SoundTestMenu__CheckSeVersionDiff_d__116__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        SoundTestMenu__CheckSeVersionDiff_d__116_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn SoundTestMenu__CheckSeVersionDiff_d__116__System_Collections_IEnumerator_Reset(
        SoundTestMenu__CheckSeVersionDiff_d__116_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_21FFC64(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_21FFEBC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_21FFC64(&Method_SoundTestMenu__CheckSeVersionDiff_d__116_System_Collections_IEnumerator_Reset__);
  sub_21FFD90(v3, v4);
}


Il2CppObject *SoundTestMenu__CheckSeVersionDiff_d__116__System_Collections_IEnumerator_get_Current(
        SoundTestMenu__CheckSeVersionDiff_d__116_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void SoundTestMenu__CheckSeVersionDiff_d__116__System_IDisposable_Dispose(
        SoundTestMenu__CheckSeVersionDiff_d__116_o *this,
        const MethodInfo *method)
{
  ;
}


void SoundTestMenu__OutputCurrentSeList_d__114___ctor(
        SoundTestMenu__OutputCurrentSeList_d__114_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool SoundTestMenu__OutputCurrentSeList_d__114__MoveNext(
        SoundTestMenu__OutputCurrentSeList_d__114_o *this,
        const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  int32_t _1__state; // w8
  bool result; // w0
  struct SoundTestMenu_o *_4__this; // x20
  Il2CppObject *v12; // x22
  struct SoundTestMenu___c__DisplayClass114_0_o **p__8__1; // x21
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  __int64 _8__1; // x0
  struct SoundTestMenu_o *v27; // x1
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  struct UILabel_o *outputLabel; // x8
  struct System_String_o *mText; // x1
  struct SoundTestMenu___c__DisplayClass114_0_o *v36; // x22
  System_String_o *v37; // x2
  System_String_o *v38; // x3
  int32_t v39; // w4
  int32_t v40; // w5
  bool v41; // w6
  bool v42; // w7
  int v43; // w8
  int32_t v44; // w20
  Il2CppObject *v45; // x22
  struct SoundTestMenu___c__DisplayClass114_1_o **p__8__2; // x21
  System_String_o *v47; // x2
  System_String_o *v48; // x3
  int32_t v49; // w4
  int32_t v50; // w5
  bool v51; // w6
  bool v52; // w7
  System_String_o *v53; // x2
  System_String_o *v54; // x3
  int32_t v55; // w4
  int32_t v56; // w5
  bool v57; // w6
  bool v58; // w7
  struct SoundTestMenu___c__DisplayClass114_0_o *v59; // x1
  System_String_o *v60; // x2
  System_String_o *v61; // x3
  int32_t v62; // w4
  int32_t v63; // w5
  bool v64; // w6
  bool v65; // w7
  __int64 v66; // x22
  int32_t v67; // w1
  System_String_o *v68; // x2
  System_String_o *v69; // x3
  int32_t v70; // w4
  int32_t v71; // w5
  bool v72; // w6
  bool v73; // w7
  System_String_o *v74; // x2
  System_String_o *v75; // x3
  int32_t v76; // w4
  int32_t v77; // w5
  bool v78; // w6
  bool v79; // w7
  int32_t v80; // w1
  struct System_Collections_Generic_List_string__o *v81; // x8
  System_String_o *v82; // x2
  System_String_o *v83; // x3
  int32_t v84; // w4
  int32_t v85; // w5
  bool v86; // w6
  bool v87; // w7
  System_String_o *v88; // x2
  System_String_o *v89; // x3
  int32_t v90; // w4
  int32_t v91; // w5
  bool v92; // w6
  bool v93; // w7
  int32_t v94; // w1
  System_String_o *v95; // x0
  UILabel_o *v96; // x22
  struct SoundTestMenu___c__DisplayClass114_0_o *CS___8__locals1; // x8
  struct SoundTestMenu___c__DisplayClass114_1_o *v98; // x22
  Il2CppObject *Item; // x0
  System_String_o *v100; // x2
  System_String_o *v101; // x3
  int32_t v102; // w4
  int32_t v103; // w5
  bool v104; // w6
  bool v105; // w7
  Il2CppObject *v106; // x21
  System_String_o *klass; // x22
  System_Action_o *v108; // x23
  SoundTestMenu_o *v109; // x0
  const MethodInfo *v110; // x3
  struct SoundTestMenu___c__DisplayClass114_1_o *_8__2; // x8
  struct System_Collections_Generic_List_string__o *seCpkList; // x9
  const MethodInfo *v113; // x3
  int32_t size; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_5935CB2 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_21FFC50(&string___TypeInfo);
    sub_21FFC50(&SoundTestMenu___c__DisplayClass114_0_TypeInfo);
    sub_21FFC50(&Method_SoundTestMenu___c__DisplayClass114_1__OutputCurrentSeList_b__0__);
    sub_21FFC50(&SoundTestMenu___c__DisplayClass114_1_TypeInfo);
    sub_21FFC50(&StringLiteral_43/*"\n"*/);
    sub_21FFC50(&StringLiteral_1165/*"/SE/"*/);
    sub_21FFC50(&StringLiteral_1101/*".csv"*/);
    sub_21FFC50(&StringLiteral_11996/*"SE"*/);
    sub_21FFC50(&StringLiteral_160/*" / "*/);
    sub_21FFC50(&StringLiteral_681/*"("*/);
    sub_21FFC50(&StringLiteral_789/*")"*/);
    byte_5935CB2 = 1;
  }
  _1__state = this->fields.__1__state;
  result = 0;
  size = 0;
  if ( _1__state == 2 )
  {
    v44 = -1;
    goto LABEL_47;
  }
  _4__this = this->fields.__4__this;
  if ( _1__state == 1 )
  {
    this->fields.__1__state = -1;
    goto LABEL_36;
  }
  if ( !_1__state )
  {
    this->fields.__1__state = -1;
    v12 = (Il2CppObject *)sub_21FFEBC(SoundTestMenu___c__DisplayClass114_0_TypeInfo);
    System_Object___ctor(v12, 0);
    this->fields.__8__1 = (struct SoundTestMenu___c__DisplayClass114_0_o *)v12;
    p__8__1 = &this->fields.__8__1;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.__8__1, (int32_t)v12, v14, v15, v16, v17, v18, v19);
    _8__1 = (__int64)this->fields.__8__1;
    if ( _8__1 )
    {
      v27 = this->fields.__4__this;
      *(_QWORD *)(_8__1 + 24) = v27;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(_8__1 + 24), (int32_t)v27, v20, v21, v22, v23, v24, v25);
      if ( _4__this )
      {
        _8__1 = (__int64)_4__this->fields.outputMask;
        if ( _8__1 )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)_8__1, 1, 0);
          outputLabel = _4__this->fields.outputLabel;
          if ( outputLabel )
          {
            mText = outputLabel->fields.mText;
            this->fields._labelText_5__2 = mText;
            sub_21FFBF4(
              (MissionNaviTransitionBoardItem_o *)&this->fields._labelText_5__2,
              (int32_t)mText,
              v28,
              v29,
              v30,
              v31,
              v32,
              v33);
            v36 = this->fields.__8__1;
            _8__1 = (__int64)System_String__Concat_75483552(
                               _4__this->fields.pathDiffDirectory,
                               (System_String_o *)StringLiteral_1165/*"/SE/"*/,
                               _4__this->fields.currentAssetVersionName,
                               (System_String_o *)StringLiteral_1101/*".csv"*/,
                               0);
            if ( v36 )
            {
              v36->fields.filePath = (struct System_String_o *)_8__1;
              sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v36->fields, _8__1, v37, v38, v39, v40, v41, v42);
              if ( *p__8__1 )
              {
                _8__1 = System_IO_File__Exists((*p__8__1)->fields.filePath, 0);
                if ( (_8__1 & 1) != 0 )
                {
                  if ( !*p__8__1 )
                    goto LABEL_49;
                  System_IO_File__Delete((*p__8__1)->fields.filePath, 0);
                }
                v43 = 0;
                this->fields._i_5__4 = 0;
                this->fields._isTop_5__3 = 1;
                while ( 1 )
                {
                  if ( !_4__this )
                    goto LABEL_49;
                  seCpkList = _4__this->fields.seCpkList;
                  if ( !seCpkList )
                    goto LABEL_49;
                  if ( v43 >= seCpkList->fields._size )
                    break;
                  v45 = (Il2CppObject *)sub_21FFEBC(SoundTestMenu___c__DisplayClass114_1_TypeInfo);
                  System_Object___ctor(v45, 0);
                  this->fields.__8__2 = (struct SoundTestMenu___c__DisplayClass114_1_o *)v45;
                  p__8__2 = &this->fields.__8__2;
                  sub_21FFBF4(
                    (MissionNaviTransitionBoardItem_o *)&this->fields.__8__2,
                    (int32_t)v45,
                    v47,
                    v48,
                    v49,
                    v50,
                    v51,
                    v52);
                  _8__1 = (__int64)this->fields.__8__2;
                  if ( !_8__1 )
                    goto LABEL_49;
                  v59 = this->fields.__8__1;
                  *(_QWORD *)(_8__1 + 32) = v59;
                  sub_21FFBF4(
                    (MissionNaviTransitionBoardItem_o *)(_8__1 + 32),
                    (int32_t)v59,
                    v53,
                    v54,
                    v55,
                    v56,
                    v57,
                    v58);
                  _8__1 = sub_21FFD10(string___TypeInfo, 5);
                  if ( !_8__1 )
                    goto LABEL_49;
                  v66 = _8__1;
                  if ( !*(_DWORD *)(_8__1 + 24) )
                    goto LABEL_50;
                  v67 = StringLiteral_681/*"("*/;
                  *(_QWORD *)(_8__1 + 32) = StringLiteral_681/*"("*/;
                  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(_8__1 + 32), v67, v60, v61, v62, v63, v64, v65);
                  _8__1 = (__int64)System_Int32__ToString((int)this + 68, 0);
                  if ( (*(_DWORD *)(v66 + 24) & 0xFFFFFFFE) == 0 )
                    goto LABEL_50;
                  *(_QWORD *)(v66 + 40) = _8__1;
                  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v66 + 40), _8__1, v68, v69, v70, v71, v72, v73);
                  if ( *(_DWORD *)(v66 + 24) <= 2u )
                    goto LABEL_50;
                  v80 = StringLiteral_160/*" / "*/;
                  *(_QWORD *)(v66 + 48) = StringLiteral_160/*" / "*/;
                  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v66 + 48), v80, v74, v75, v76, v77, v78, v79);
                  v81 = _4__this->fields.seCpkList;
                  if ( !v81 )
                    goto LABEL_49;
                  size = v81->fields._size;
                  _8__1 = (__int64)System_Int32__ToString((int32_t)&size, 0);
                  if ( (*(_DWORD *)(v66 + 24) & 0xFFFFFFFC) == 0
                    || (*(_QWORD *)(v66 + 56) = _8__1,
                        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v66 + 56), _8__1, v82, v83, v84, v85, v86, v87),
                        *(_DWORD *)(v66 + 24) <= 4u) )
                  {
LABEL_50:
                    sub_21FFED4(_8__1);
                  }
                  v94 = StringLiteral_789/*")"*/;
                  *(_QWORD *)(v66 + 64) = StringLiteral_789/*")"*/;
                  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v66 + 64), v94, v88, v89, v90, v91, v92, v93);
                  v95 = System_String__Concat_75483816((System_String_array *)v66, 0);
                  v96 = _4__this->fields.outputLabel;
                  _8__1 = (__int64)System_String__Concat_75438412(this->fields._labelText_5__2, v95, 0);
                  if ( !v96 )
                    goto LABEL_49;
                  UILabel__set_text(v96, (System_String_o *)_8__1, 0);
                  if ( this->fields._isTop_5__3 )
                  {
                    this->fields._isTop_5__3 = 0;
                  }
                  else
                  {
                    if ( !*p__8__2 )
                      goto LABEL_49;
                    CS___8__locals1 = (*p__8__2)->fields.CS___8__locals1;
                    if ( !CS___8__locals1 )
                      goto LABEL_49;
                    System_IO_File__AppendAllText(
                      CS___8__locals1->fields.filePath,
                      (System_String_o *)StringLiteral_43/*"\n"*/,
                      0);
                  }
                  v98 = *p__8__2;
                  if ( !*p__8__2 )
                    goto LABEL_49;
                  _8__1 = (__int64)_4__this->fields.seCpkList;
                  v98->fields.check = 0;
                  if ( !_8__1 )
                    goto LABEL_49;
                  Item = System_Collections_Generic_List_object___get_Item(
                           (System_Collections_Generic_List_object__o *)_8__1,
                           this->fields._i_5__4,
                           (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_string__get_Item__);
                  v98->fields.cpkName = (struct System_String_o *)Item;
                  sub_21FFBF4(
                    (MissionNaviTransitionBoardItem_o *)&v98->fields,
                    (int32_t)Item,
                    v100,
                    v101,
                    v102,
                    v103,
                    v104,
                    v105);
                  v106 = (Il2CppObject *)*p__8__2;
                  if ( !v106 )
                    goto LABEL_49;
                  klass = (System_String_o *)v106[1].klass;
                  v108 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
                  System_Action___ctor(
                    v108,
                    v106,
                    Method_SoundTestMenu___c__DisplayClass114_1__OutputCurrentSeList_b__0__,
                    0);
                  SoundTestMenu__loadSE(v109, klass, v108, v110);
LABEL_36:
                  _8__1 = (__int64)&this->fields.__8__2;
                  _8__2 = this->fields.__8__2;
                  if ( !_8__2 )
                    goto LABEL_49;
                  if ( !_8__2->fields.check )
                  {
                    v44 = 1;
LABEL_46:
                    this->fields.__2__current = 0;
                    sub_21FFBF4(
                      (MissionNaviTransitionBoardItem_o *)&this->fields.__2__current,
                      0,
                      v2,
                      v3,
                      v4,
                      v5,
                      v6,
                      v7);
                    result = 1;
LABEL_47:
                    this->fields.__1__state = v44;
                    return result;
                  }
                  this->fields.__8__2 = 0;
                  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)_8__1, 0, v2, v3, v4, v5, v6, v7);
                  size = this->fields._i_5__4;
                  v43 = size + 1;
                  this->fields._i_5__4 = size + 1;
                }
                _8__1 = (__int64)_4__this->fields.outputLabel;
                if ( _8__1 )
                {
                  UILabel__set_text((UILabel_o *)_8__1, this->fields._labelText_5__2, 0);
                  _8__1 = (__int64)_4__this->fields.outputMask;
                  if ( _8__1 )
                  {
                    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)_8__1, 0, 0);
                    SoundTestMenu__SetupVersionList(
                      _4__this,
                      _4__this->fields.versionList,
                      (System_String_o *)StringLiteral_11996/*"SE"*/,
                      v113);
                    v44 = 2;
                    goto LABEL_46;
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_49:
    sub_21FFECC(_8__1, method);
  }
  return result;
}


Il2CppObject *SoundTestMenu__OutputCurrentSeList_d__114__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        SoundTestMenu__OutputCurrentSeList_d__114_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn SoundTestMenu__OutputCurrentSeList_d__114__System_Collections_IEnumerator_Reset(
        SoundTestMenu__OutputCurrentSeList_d__114_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_21FFC64(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_21FFEBC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_21FFC64(&Method_SoundTestMenu__OutputCurrentSeList_d__114_System_Collections_IEnumerator_Reset__);
  sub_21FFD90(v3, v4);
}


Il2CppObject *SoundTestMenu__OutputCurrentSeList_d__114__System_Collections_IEnumerator_get_Current(
        SoundTestMenu__OutputCurrentSeList_d__114_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void SoundTestMenu__OutputCurrentSeList_d__114__System_IDisposable_Dispose(
        SoundTestMenu__OutputCurrentSeList_d__114_o *this,
        const MethodInfo *method)
{
  ;
}


void SoundTestMenu__UpdateBgmProgressBarCoroutine_d__145___ctor(
        SoundTestMenu__UpdateBgmProgressBarCoroutine_d__145_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool SoundTestMenu__UpdateBgmProgressBarCoroutine_d__145__MoveNext(
        SoundTestMenu__UpdateBgmProgressBarCoroutine_d__145_o *this,
        const MethodInfo *method)
{
  if ( !this->fields.__1__state )
    this->fields.__1__state = -1;
  return 0;
}


Il2CppObject *SoundTestMenu__UpdateBgmProgressBarCoroutine_d__145__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        SoundTestMenu__UpdateBgmProgressBarCoroutine_d__145_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn SoundTestMenu__UpdateBgmProgressBarCoroutine_d__145__System_Collections_IEnumerator_Reset(
        SoundTestMenu__UpdateBgmProgressBarCoroutine_d__145_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_21FFC64(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_21FFEBC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_21FFC64(&Method_SoundTestMenu__UpdateBgmProgressBarCoroutine_d__145_System_Collections_IEnumerator_Reset__);
  sub_21FFD90(v3, v4);
}


Il2CppObject *SoundTestMenu__UpdateBgmProgressBarCoroutine_d__145__System_Collections_IEnumerator_get_Current(
        SoundTestMenu__UpdateBgmProgressBarCoroutine_d__145_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void SoundTestMenu__UpdateBgmProgressBarCoroutine_d__145__System_IDisposable_Dispose(
        SoundTestMenu__UpdateBgmProgressBarCoroutine_d__145_o *this,
        const MethodInfo *method)
{
  ;
}


void SoundTestMenu___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5935CA5 & 1) == 0 )
  {
    sub_21FFC50(&SoundTestMenu___c_TypeInfo);
    byte_5935CA5 = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(SoundTestMenu___c_TypeInfo);
  System_Object___ctor(v1, 0);
  SoundTestMenu___c_TypeInfo->static_fields->__9 = (struct SoundTestMenu___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)SoundTestMenu___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void SoundTestMenu___c___ctor(SoundTestMenu___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


System_String_o *SoundTestMenu___c___CheckSeVersionDiff_b__116_1(
        SoundTestMenu___c_o *this,
        System_Collections_Generic_KeyValuePair_string__long__o cue,
        const MethodInfo *method)
{
  System_String_o *key; // x19

  key = cue.fields.key;
  if ( (byte_5935CA6 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_KeyValuePair_string__long__get_Key__);
    byte_5935CA6 = 1;
  }
  return key;
}


System_String_o *SoundTestMenu___c___CompareCueList_b__117_0(
        SoundTestMenu___c_o *this,
        System_Collections_Generic_KeyValuePair_string__long__o cue,
        const MethodInfo *method)
{
  System_String_o *key; // x19

  key = cue.fields.key;
  if ( (byte_5935CA7 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_KeyValuePair_string__long__get_Key__);
    byte_5935CA7 = 1;
  }
  return key;
}


System_String_o *SoundTestMenu___c___CompareCueList_b__117_1(
        SoundTestMenu___c_o *this,
        System_Collections_Generic_KeyValuePair_string__long__o oldCue,
        const MethodInfo *method)
{
  System_String_o *key; // x19

  key = oldCue.fields.key;
  if ( (byte_5935CA8 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_KeyValuePair_string__long__get_Key__);
    byte_5935CA8 = 1;
  }
  return key;
}


void SoundTestMenu___c___onClickCpkSearchButton_b__139_1(SoundTestMenu___c_o *this, const MethodInfo *method)
{
  ;
}


void SoundTestMenu___c___onClickSeOpenCue_b__100_1(SoundTestMenu___c_o *this, const MethodInfo *method)
{
  ;
}


void SoundTestMenu___c___onClickSearchButton_b__134_1(SoundTestMenu___c_o *this, const MethodInfo *method)
{
  ;
}


void SoundTestMenu___c___playSe_b__102_2(SoundTestMenu___c_o *this, const MethodInfo *method)
{
  ;
}


void SoundTestMenu___c___playSe_b__102_3(SoundTestMenu___c_o *this, const MethodInfo *method)
{
  ;
}


void SoundTestMenu___c__DisplayClass100_0___ctor(
        SoundTestMenu___c__DisplayClass100_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void SoundTestMenu___c__DisplayClass100_0___onClickSeOpenCue_b__0(
        SoundTestMenu___c__DisplayClass100_0_o *this,
        const MethodInfo *method)
{
  SoundTestMenu_o *_4__this; // x0
  struct SoundTestMenu_o *v4; // x8
  System_String_o *inputCueSheetName; // x0
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  struct SoundTestMenu_o *v12; // x8
  struct System_String_o *v13; // x1
  System_String_o *v14; // x19
  __int64 v15; // x2
  CommonUI_o *v16; // x20
  SoundTestMenu___c_c *v17; // x8
  struct SoundTestMenu___c_StaticFields *static_fields; // x9
  System_Action_o *_9__100_1; // x22
  System_String_o *v20; // x21
  Il2CppObject *v21; // x23
  struct SoundTestMenu___c_StaticFields *v22; // x0
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7

  if ( (byte_5935CA9 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&Method_SoundTestMenu___c__onClickSeOpenCue_b__100_1__);
    sub_21FFC50(&SoundTestMenu___c_TypeInfo);
    sub_21FFC50(&StringLiteral_43/*"\n"*/);
    sub_21FFC50(&StringLiteral_26737/*"このアセットは存在しません。"*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_5935CA9 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_16;
  SoundTestMenu__createSeItem(_4__this, method);
  v4 = this->fields.__4__this;
  if ( !v4 )
    goto LABEL_16;
  inputCueSheetName = this->fields.inputCueSheetName;
  v4->fields.isLoadingSeCueSheet = 0;
  _4__this = (SoundTestMenu_o *)CriAtom__GetAcb(inputCueSheetName, 0);
  if ( _4__this )
  {
    v12 = this->fields.__4__this;
    if ( v12 )
    {
      v13 = this->fields.inputCueSheetName;
      v12->fields.loadSeCueSheetName = v13;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&v12->fields.loadSeCueSheetName,
        (int32_t)v13,
        v6,
        v7,
        v8,
        v9,
        v10,
        v11);
      return;
    }
LABEL_16:
    sub_21FFECC(_4__this, method);
  }
  v14 = System_String__Concat_75481624(
          this->fields.inputCueSheetName,
          (System_String_o *)StringLiteral_43/*"\n"*/,
          (System_String_o *)StringLiteral_26737/*"このアセットは存在しません。"*/,
          0);
  _4__this = (SoundTestMenu_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v16 = (CommonUI_o *)_4__this;
  v17 = SoundTestMenu___c_TypeInfo;
  if ( !*(&SoundTestMenu___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(SoundTestMenu___c_TypeInfo, method, v15);
    v17 = SoundTestMenu___c_TypeInfo;
  }
  static_fields = v17->static_fields;
  _9__100_1 = static_fields->__9__100_1;
  v20 = (System_String_o *)StringLiteral_1/*""*/;
  if ( !_9__100_1 )
  {
    if ( !*(&v17->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v17, method, v15);
      static_fields = SoundTestMenu___c_TypeInfo->static_fields;
    }
    v21 = (Il2CppObject *)static_fields->__9;
    _9__100_1 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(_9__100_1, v21, Method_SoundTestMenu___c__onClickSeOpenCue_b__100_1__, 0);
    v22 = SoundTestMenu___c_TypeInfo->static_fields;
    v22->__9__100_1 = _9__100_1;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v22->__9__100_1, (int32_t)_9__100_1, v23, v24, v25, v26, v27, v28);
  }
  if ( !v16 )
    goto LABEL_16;
  CommonUI__OpenNotificationDialog(v16, v20, v14, _9__100_1, -1, 0, 0, 0, 0, 0, 1, 0, 0, 0.0, 0, 0);
}


void SoundTestMenu___c__DisplayClass102_0___ctor(
        SoundTestMenu___c__DisplayClass102_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void SoundTestMenu___c__DisplayClass102_0___playSe_b__0(
        SoundTestMenu___c__DisplayClass102_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  SoundTestMenu_o *_4__this; // x0
  System_String_o *v5; // x19
  __int64 v6; // x2
  CommonUI_o *v7; // x20
  SoundTestMenu___c_c *v8; // x8
  struct SoundTestMenu___c_StaticFields *static_fields; // x9
  System_Action_o *_9__102_2; // x22
  System_String_o *v11; // x21
  Il2CppObject *v12; // x23
  struct SoundTestMenu___c_StaticFields *v13; // x0
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7

  if ( (byte_5935CAA & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&Method_SoundTestMenu___c__playSe_b__102_2__);
    sub_21FFC50(&SoundTestMenu___c_TypeInfo);
    sub_21FFC50(&StringLiteral_43/*"\n"*/);
    sub_21FFC50(&StringLiteral_26737/*"このアセットは存在しません。"*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_5935CAA = 1;
  }
  if ( CriAtom__GetAcb(this->fields.inputCueSheetName, 0) )
  {
    _4__this = this->fields.__4__this;
    if ( _4__this )
    {
      SoundTestMenu__createSeItem(_4__this, v3);
      _4__this = this->fields.__4__this;
      if ( _4__this )
      {
        SoundTestMenu__playSe(_4__this, v3);
        return;
      }
    }
LABEL_15:
    sub_21FFECC(_4__this, v3);
  }
  v5 = System_String__Concat_75481624(
         this->fields.inputCueSheetName,
         (System_String_o *)StringLiteral_43/*"\n"*/,
         (System_String_o *)StringLiteral_26737/*"このアセットは存在しません。"*/,
         0);
  _4__this = (SoundTestMenu_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (CommonUI_o *)_4__this;
  v8 = SoundTestMenu___c_TypeInfo;
  if ( !*(&SoundTestMenu___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(SoundTestMenu___c_TypeInfo, v3, v6);
    v8 = SoundTestMenu___c_TypeInfo;
  }
  static_fields = v8->static_fields;
  _9__102_2 = static_fields->__9__102_2;
  v11 = (System_String_o *)StringLiteral_1/*""*/;
  if ( !_9__102_2 )
  {
    if ( !*(&v8->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v8, v3, v6);
      static_fields = SoundTestMenu___c_TypeInfo->static_fields;
    }
    v12 = (Il2CppObject *)static_fields->__9;
    _9__102_2 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(_9__102_2, v12, Method_SoundTestMenu___c__playSe_b__102_2__, 0);
    v13 = SoundTestMenu___c_TypeInfo->static_fields;
    v13->__9__102_2 = _9__102_2;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v13->__9__102_2, (int32_t)_9__102_2, v14, v15, v16, v17, v18, v19);
  }
  if ( !v7 )
    goto LABEL_15;
  CommonUI__OpenNotificationDialog(v7, v11, v5, _9__102_2, -1, 0, 0, 0, 0, 0, 1, 0, 0, 0.0, 0, 0);
}


void SoundTestMenu___c__DisplayClass102_0___playSe_b__1(
        SoundTestMenu___c__DisplayClass102_0_o *this,
        const MethodInfo *method)
{
  SoundTestMenu_o *_4__this; // x0
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  struct SoundTestMenu_o *v10; // x8
  struct System_String_o *inputCueSheetName; // x1
  const MethodInfo *v12; // x2
  System_String_o *v13; // x19
  __int64 v14; // x2
  CommonUI_o *v15; // x20
  SoundTestMenu___c_c *v16; // x8
  struct SoundTestMenu___c_StaticFields *static_fields; // x9
  System_Action_o *_9__102_3; // x22
  System_String_o *v19; // x21
  Il2CppObject *v20; // x23
  struct SoundTestMenu___c_StaticFields *v21; // x0
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7

  if ( (byte_5935CAB & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&Method_SoundTestMenu___c__playSe_b__102_3__);
    sub_21FFC50(&SoundTestMenu___c_TypeInfo);
    sub_21FFC50(&StringLiteral_43/*"\n"*/);
    sub_21FFC50(&StringLiteral_26737/*"このアセットは存在しません。"*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_5935CAB = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_16;
  SoundTestMenu__createSeItem(_4__this, method);
  _4__this = (SoundTestMenu_o *)CriAtom__GetAcb(this->fields.inputCueSheetName, 0);
  if ( _4__this )
  {
    v10 = this->fields.__4__this;
    if ( v10 )
    {
      inputCueSheetName = this->fields.inputCueSheetName;
      v10->fields.loadSeCueSheetName = inputCueSheetName;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&v10->fields.loadSeCueSheetName,
        (int32_t)inputCueSheetName,
        v4,
        v5,
        v6,
        v7,
        v8,
        v9);
      _4__this = this->fields.__4__this;
      if ( _4__this )
      {
        SoundTestMenu__playSeLocal(_4__this, this->fields.inputCueSheetName, v12);
        return;
      }
    }
LABEL_16:
    sub_21FFECC(_4__this, method);
  }
  v13 = System_String__Concat_75481624(
          this->fields.inputCueSheetName,
          (System_String_o *)StringLiteral_43/*"\n"*/,
          (System_String_o *)StringLiteral_26737/*"このアセットは存在しません。"*/,
          0);
  _4__this = (SoundTestMenu_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v15 = (CommonUI_o *)_4__this;
  v16 = SoundTestMenu___c_TypeInfo;
  if ( !*(&SoundTestMenu___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(SoundTestMenu___c_TypeInfo, method, v14);
    v16 = SoundTestMenu___c_TypeInfo;
  }
  static_fields = v16->static_fields;
  _9__102_3 = static_fields->__9__102_3;
  v19 = (System_String_o *)StringLiteral_1/*""*/;
  if ( !_9__102_3 )
  {
    if ( !*(&v16->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v16, method, v14);
      static_fields = SoundTestMenu___c_TypeInfo->static_fields;
    }
    v20 = (Il2CppObject *)static_fields->__9;
    _9__102_3 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(_9__102_3, v20, Method_SoundTestMenu___c__playSe_b__102_3__, 0);
    v21 = SoundTestMenu___c_TypeInfo->static_fields;
    v21->__9__102_3 = _9__102_3;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v21->__9__102_3, (int32_t)_9__102_3, v22, v23, v24, v25, v26, v27);
  }
  if ( !v15 )
    goto LABEL_16;
  CommonUI__OpenNotificationDialog(v15, v19, v13, _9__102_3, -1, 0, 0, 0, 0, 0, 1, 0, 0, 0.0, 0, 0);
}


void SoundTestMenu___c__DisplayClass109_0___ctor(
        SoundTestMenu___c__DisplayClass109_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void SoundTestMenu___c__DisplayClass109_0___openCueList_b__0(
        SoundTestMenu___c__DisplayClass109_0_o *this,
        const MethodInfo *method)
{
  struct CriAtomExAcb_o *Acb; // x0
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  SoundTestMenu_o *v10; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x3

  Acb = CriAtom__GetAcb(this->fields.cueSheetName, 0);
  this->fields.acb = Acb;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)Acb, v4, v5, v6, v7, v8, v9);
  if ( !this->fields.__4__this )
    sub_21FFECC(v10, v11);
  SoundTestMenu__setupCueNameList(v10, this->fields.cueNameList, this->fields.acb, v12);
  ActionExtensions__Call(this->fields.callBack, 0);
}


void SoundTestMenu___c__DisplayClass112_0___ctor(
        SoundTestMenu___c__DisplayClass112_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void SoundTestMenu___c__DisplayClass112_0___allCpkCueListup_b__0(
        SoundTestMenu___c__DisplayClass112_0_o *this,
        const MethodInfo *method)
{
  System_String_array *Instance; // x0
  __int64 v4; // x1
  struct SoundTestMenu_o *_4__this; // x8
  System_String_array *v6; // x20
  System_String_o *v7; // x0
  const MethodInfo *v8; // x2

  if ( (byte_5935CAC & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    sub_21FFC50(&StringLiteral_1119/*".txt"*/);
    byte_5935CAC = 1;
  }
  Instance = (System_String_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
  if ( !Instance
    || (Instance = SoundManager__GetCueList((SoundManager_o *)Instance, this->fields.fileName, 0),
        (_4__this = this->fields.__4__this) == 0)
    || (v6 = Instance,
        v7 = System_String__Concat_75481624(
               _4__this->fields.cueListOutputPath,
               this->fields.fileName,
               (System_String_o *)StringLiteral_1119/*".txt"*/,
               0),
        System_IO_File__WriteAllLines(v7, v6, 0),
        !this->fields.__4__this) )
  {
    sub_21FFECC(Instance, v4);
  }
  SoundTestMenu__releaseSe((SoundTestMenu_o *)Instance, this->fields.fileName, v8);
  this->fields.check = 1;
}


void SoundTestMenu___c__DisplayClass114_0___ctor(
        SoundTestMenu___c__DisplayClass114_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void SoundTestMenu___c__DisplayClass114_1___ctor(
        SoundTestMenu___c__DisplayClass114_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void SoundTestMenu___c__DisplayClass114_1___OutputCurrentSeList_b__0(
        SoundTestMenu___c__DisplayClass114_1_o *this,
        const MethodInfo *method)
{
  SoundManager_o *Instance; // x0
  __int64 v4; // x1
  SoundManager_o *v5; // x20
  System_String_o *cpkName; // x21
  System_String_o *v7; // x0
  struct SoundTestMenu___c__DisplayClass114_0_o *CS___8__locals1; // x8
  const MethodInfo *v9; // x2
  unsigned __int64 v10; // x24
  int64_t p_SoundBinders; // x21
  struct SoundTestMenu___c__DisplayClass114_0_o *v12; // x8
  __int64 v13; // x0
  System_String_o *v14; // x22
  System_String_o *v15; // x0
  struct SoundTestMenu___c__DisplayClass114_0_o *v16; // x8
  struct SoundTestMenu___c__DisplayClass114_0_o *v17; // x8
  int m_CancellationTokenSource; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_5935CAD & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    sub_21FFC50(&StringLiteral_43/*"\n"*/);
    sub_21FFC50(&StringLiteral_869/*","*/);
    sub_21FFC50(&StringLiteral_17051/*"__CPK__,"*/);
    byte_5935CAD = 1;
  }
  m_CancellationTokenSource = 0;
  Instance = (SoundManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = (SoundManager_o *)SoundManager__GetCueInfoList(Instance, this->fields.cpkName, 0);
  if ( !Instance )
    goto LABEL_15;
  v5 = Instance;
  cpkName = this->fields.cpkName;
  m_CancellationTokenSource = (int)Instance->fields.m_CancellationTokenSource;
  v7 = System_Int32__ToString((int32_t)&m_CancellationTokenSource, 0);
  Instance = (SoundManager_o *)System_String__Concat_75483552(
                                 (System_String_o *)StringLiteral_17051/*"__CPK__,"*/,
                                 cpkName,
                                 (System_String_o *)StringLiteral_869/*","*/,
                                 v7,
                                 0);
  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_15;
  System_IO_File__AppendAllText(CS___8__locals1->fields.filePath, (System_String_o *)Instance, 0);
  if ( m_CancellationTokenSource >= 1 )
  {
    v10 = 0;
    p_SoundBinders = (int64_t)&v5->fields.SoundBinders;
    while ( 1 )
    {
      v12 = this->fields.CS___8__locals1;
      if ( !v12 )
        break;
      System_IO_File__AppendAllText(v12->fields.filePath, (System_String_o *)StringLiteral_43/*"\n"*/, 0);
      if ( v10 >= LODWORD(v5->fields.m_CancellationTokenSource) )
        sub_21FFED4(v13);
      v14 = *(System_String_o **)(p_SoundBinders - 16);
      v15 = System_Int64__ToString(p_SoundBinders, 0);
      Instance = (SoundManager_o *)System_String__Concat_75481624(v14, (System_String_o *)StringLiteral_869/*","*/, v15, 0);
      v16 = this->fields.CS___8__locals1;
      if ( !v16 )
        break;
      System_IO_File__AppendAllText(v16->fields.filePath, (System_String_o *)Instance, 0);
      ++v10;
      p_SoundBinders += 152LL;
      if ( (__int64)v10 >= m_CancellationTokenSource )
        goto LABEL_12;
    }
LABEL_15:
    sub_21FFECC(Instance, v4);
  }
LABEL_12:
  v17 = this->fields.CS___8__locals1;
  if ( !v17 || !v17->fields.__4__this )
    goto LABEL_15;
  SoundTestMenu__releaseSe((SoundTestMenu_o *)Instance, this->fields.cpkName, v9);
  this->fields.check = 1;
}


void SoundTestMenu___c__DisplayClass116_0___ctor(
        SoundTestMenu___c__DisplayClass116_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void SoundTestMenu___c__DisplayClass116_1___ctor(
        SoundTestMenu___c__DisplayClass116_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void SoundTestMenu___c__DisplayClass116_1___CheckSeVersionDiff_b__0(
        SoundTestMenu___c__DisplayClass116_1_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  CriAtomEx_CueInfo_array *CueInfoList; // x21
  System_Collections_Generic_Dictionary_TKey__TValue__o *v6; // x20
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v8; // x22
  int64_t *p_length; // x24
  struct SoundTestMenu___c__DisplayClass116_0_o *CS___8__locals1; // x8
  const MethodInfo *v11; // x2
  struct SoundTestMenu___c__DisplayClass116_0_o *v12; // x8

  if ( (byte_5935CAE & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__Dictionary_string__long___Add__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__long__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__long___ctor__);
    sub_21FFC50(&System_Collections_Generic_Dictionary_string__long__TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    byte_5935CAE = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  CueInfoList = SoundManager__GetCueInfoList((SoundManager_o *)Instance, this->fields.cpkName, 0);
  v6 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_21FFEBC(System_Collections_Generic_Dictionary_string__long__TypeInfo);
  System_Collections_Generic_Dictionary_object__long____ctor(
    v6,
    (const MethodInfo_3FC676C *)Method_System_Collections_Generic_Dictionary_string__long___ctor__);
  if ( !CueInfoList )
    goto LABEL_15;
  max_length = CueInfoList->max_length;
  if ( (int)max_length >= 1 )
  {
    v8 = 0;
    p_length = &CueInfoList->m_Items[0].fields.length;
    while ( 1 )
    {
      if ( v8 >= (unsigned int)max_length )
        sub_21FFED4(Instance);
      if ( !v6 )
        break;
      System_Collections_Generic_Dictionary_object__long___Add(
        v6,
        (Il2CppObject *)*(p_length - 2),
        *p_length,
        (const MethodInfo_3FC70FC *)Method_System_Collections_Generic_Dictionary_string__long__Add__);
      LODWORD(max_length) = CueInfoList->max_length;
      ++v8;
      p_length += 19;
      if ( (__int64)v8 >= (int)max_length )
        goto LABEL_10;
    }
LABEL_15:
    sub_21FFECC(Instance, v4);
  }
LABEL_10:
  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_15;
  Instance = (Il2CppObject *)CS___8__locals1->fields.currentCpkList;
  if ( !Instance )
    goto LABEL_15;
  System_Collections_Generic_Dictionary_object__object___Add(
    (System_Collections_Generic_Dictionary_object__object__o *)Instance,
    (Il2CppObject *)this->fields.cpkName,
    (Il2CppObject *)v6,
    (const MethodInfo_3FCA468 *)Method_System_Collections_Generic_Dictionary_string__Dictionary_string__long___Add__);
  v12 = this->fields.CS___8__locals1;
  if ( !v12 || !v12->fields.__4__this )
    goto LABEL_15;
  SoundTestMenu__releaseSe((SoundTestMenu_o *)Instance, this->fields.cpkName, v11);
  this->fields.check = 1;
}


void SoundTestMenu___c__DisplayClass134_0___ctor(
        SoundTestMenu___c__DisplayClass134_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool SoundTestMenu___c__DisplayClass134_0___onClickSearchButton_b__0(
        SoundTestMenu___c__DisplayClass134_0_o *this,
        UnityEngine_Transform_o *x,
        const MethodInfo *method)
{
  SoundTestMenu___c__DisplayClass134_0_o *v4; // x19

  v4 = this;
  if ( (byte_5935CAF & 1) == 0 )
  {
    this = (SoundTestMenu___c__DisplayClass134_0_o *)sub_21FFC50(&Method_UnityEngine_Component_GetComponent_UILabel___);
    byte_5935CAF = 1;
  }
  if ( !x
    || (this = (SoundTestMenu___c__DisplayClass134_0_o *)UnityEngine_Component__GetComponent_object_(
                                                           (UnityEngine_Component_o *)x,
                                                           (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_UILabel___)) == 0
    || (this = (SoundTestMenu___c__DisplayClass134_0_o *)this[17].monitor) == 0 )
  {
    sub_21FFECC(this, x);
  }
  return System_String__IndexOf_75500444((System_String_o *)this, v4->fields.searchName, 5, 0) >= 0;
}


void SoundTestMenu___c__DisplayClass139_0___ctor(
        SoundTestMenu___c__DisplayClass139_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool SoundTestMenu___c__DisplayClass139_0___onClickCpkSearchButton_b__0(
        SoundTestMenu___c__DisplayClass139_0_o *this,
        UnityEngine_Transform_o *x,
        const MethodInfo *method)
{
  SoundTestMenu___c__DisplayClass139_0_o *v4; // x19

  v4 = this;
  if ( (byte_5935CB0 & 1) == 0 )
  {
    this = (SoundTestMenu___c__DisplayClass139_0_o *)sub_21FFC50(&Method_UnityEngine_Component_GetComponent_UILabel___);
    byte_5935CB0 = 1;
  }
  if ( !x
    || (this = (SoundTestMenu___c__DisplayClass139_0_o *)UnityEngine_Component__GetComponent_object_(
                                                           (UnityEngine_Component_o *)x,
                                                           (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_UILabel___)) == 0
    || (this = (SoundTestMenu___c__DisplayClass139_0_o *)this[17].monitor) == 0 )
  {
    sub_21FFECC(this, x);
  }
  return System_String__IndexOf_75500444((System_String_o *)this, v4->fields.searchName, 5, 0) >= 0;
}


void SoundTestMenu__allCpkCueListup_d__112___ctor(
        SoundTestMenu__allCpkCueListup_d__112_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool SoundTestMenu__allCpkCueListup_d__112__MoveNext(
        SoundTestMenu__allCpkCueListup_d__112_o *this,
        const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  int32_t _1__state; // w8
  void *outputMask; // x0
  struct SoundTestMenu_o *_4__this; // x20
  __int64 v12; // x1
  __int64 v13; // x2
  System_String_o *CpkPath; // x0
  struct System_String_array *Files_76702204; // x0
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  int32_t v22; // w8
  int32_t v23; // w20
  Il2CppObject *v24; // x22
  struct SoundTestMenu___c__DisplayClass112_0_o **p__8__1; // x21
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7
  __int64 v38; // x2
  struct SoundTestMenu___c__DisplayClass112_0_o *v39; // x22
  struct System_String_array *v40; // x8
  __int64 ii_5__3; // x9
  System_String_o *v42; // x23
  System_String_o *FileNameWithoutExtension; // x0
  System_String_o *v44; // x2
  System_String_o *v45; // x3
  int32_t v46; // w4
  int32_t v47; // w5
  bool v48; // w6
  bool v49; // w7
  struct SoundTestMenu___c__DisplayClass112_0_o *v50; // x22
  MissionNaviTransitionBoardItem_o *p_fields; // x22
  System_String_o *fileName; // t1
  System_String_o *v53; // x0
  System_String_o *v54; // x2
  System_String_o *v55; // x3
  int32_t v56; // w4
  int32_t v57; // w5
  bool v58; // w6
  bool v59; // w7
  Il2CppObject *v60; // x22
  System_String_o *klass; // x21
  System_Action_o *v62; // x23
  const MethodInfo *v63; // x3
  struct SoundTestMenu___c__DisplayClass112_0_o *_8__1; // x8
  struct System_String_array *files_5__2; // x9

  if ( (byte_5935CB3 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&System_IO_Path_TypeInfo);
    sub_21FFC50(&SoundManager_TypeInfo);
    sub_21FFC50(&Method_SoundTestMenu___c__DisplayClass112_0__allCpkCueListup_b__0__);
    sub_21FFC50(&SoundTestMenu___c__DisplayClass112_0_TypeInfo);
    sub_21FFC50(&StringLiteral_853/*"*.cpk.bytes"*/);
    byte_5935CB3 = 1;
  }
  _1__state = this->fields.__1__state;
  outputMask = 0;
  if ( _1__state == 2 )
  {
    v23 = -1;
    goto LABEL_35;
  }
  _4__this = this->fields.__4__this;
  if ( _1__state == 1 )
  {
    this->fields.__1__state = -1;
    goto LABEL_25;
  }
  if ( !_1__state )
  {
    this->fields.__1__state = -1;
    if ( _4__this )
    {
      outputMask = _4__this->fields.outputMask;
      if ( outputMask )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)outputMask, 1, 0);
        if ( !*(&SoundManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v12, v13);
        CpkPath = SoundManager__getCpkPath(0);
        Files_76702204 = System_IO_Directory__GetFiles_76702204(CpkPath, (System_String_o *)StringLiteral_853/*"*.cpk.bytes"*/, 1, 0);
        this->fields._files_5__2 = Files_76702204;
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)&this->fields._files_5__2,
          (int32_t)Files_76702204,
          v16,
          v17,
          v18,
          v19,
          v20,
          v21);
        outputMask = (void *)System_IO_Directory__Exists(_4__this->fields.cueListOutputPath, 0);
        if ( ((unsigned __int8)outputMask & 1) == 0 )
          outputMask = System_IO_Directory__CreateDirectory(_4__this->fields.cueListOutputPath, 0);
        v22 = 0;
        for ( this->fields._ii_5__3 = 0; ; this->fields._ii_5__3 = v22 )
        {
          files_5__2 = this->fields._files_5__2;
          if ( !files_5__2 )
            goto LABEL_37;
          if ( v22 >= SLODWORD(files_5__2->max_length) )
            break;
          v24 = (Il2CppObject *)sub_21FFEBC(SoundTestMenu___c__DisplayClass112_0_TypeInfo);
          System_Object___ctor(v24, 0);
          this->fields.__8__1 = (struct SoundTestMenu___c__DisplayClass112_0_o *)v24;
          p__8__1 = &this->fields.__8__1;
          sub_21FFBF4(
            (MissionNaviTransitionBoardItem_o *)&this->fields.__8__1,
            (int32_t)v24,
            v26,
            v27,
            v28,
            v29,
            v30,
            v31);
          outputMask = this->fields.__8__1;
          if ( !outputMask )
            goto LABEL_37;
          *((_QWORD *)outputMask + 4) = _4__this;
          sub_21FFBF4(
            (MissionNaviTransitionBoardItem_o *)((char *)outputMask + 32),
            (int32_t)_4__this,
            v32,
            v33,
            v34,
            v35,
            v36,
            v37);
          v39 = *p__8__1;
          if ( !*p__8__1 )
            goto LABEL_37;
          v40 = this->fields._files_5__2;
          v39->fields.check = 0;
          if ( !v40 )
            goto LABEL_37;
          ii_5__3 = this->fields._ii_5__3;
          if ( (unsigned int)ii_5__3 >= LODWORD(v40->max_length) )
            sub_21FFED4(outputMask);
          v42 = v40->m_Items[ii_5__3];
          if ( !*(&System_IO_Path_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(System_IO_Path_TypeInfo, method, v38);
          FileNameWithoutExtension = System_IO_Path__GetFileNameWithoutExtension(v42, 0);
          v39->fields.fileName = FileNameWithoutExtension;
          sub_21FFBF4(
            (MissionNaviTransitionBoardItem_o *)&v39->fields,
            (int32_t)FileNameWithoutExtension,
            v44,
            v45,
            v46,
            v47,
            v48,
            v49);
          v50 = *p__8__1;
          if ( !*p__8__1 )
            goto LABEL_37;
          fileName = v50->fields.fileName;
          p_fields = (MissionNaviTransitionBoardItem_o *)&v50->fields;
          v53 = System_IO_Path__GetFileNameWithoutExtension(fileName, 0);
          p_fields->klass = (MissionNaviTransitionBoardItem_c *)v53;
          sub_21FFBF4(p_fields, (int32_t)v53, v54, v55, v56, v57, v58, v59);
          v60 = (Il2CppObject *)*p__8__1;
          if ( !*p__8__1 )
            goto LABEL_37;
          klass = (System_String_o *)v60[1].klass;
          v62 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
          System_Action___ctor(v62, v60, Method_SoundTestMenu___c__DisplayClass112_0__allCpkCueListup_b__0__, 0);
          if ( !_4__this )
            goto LABEL_37;
          SoundTestMenu__loadSE((SoundTestMenu_o *)outputMask, klass, v62, v63);
LABEL_25:
          outputMask = &this->fields.__8__1;
          _8__1 = this->fields.__8__1;
          if ( !_8__1 )
            goto LABEL_37;
          if ( !_8__1->fields.check )
          {
            v23 = 1;
LABEL_34:
            this->fields.__2__current = 0;
            sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.__2__current, 0, v2, v3, v4, v5, v6, v7);
            LOBYTE(outputMask) = 1;
LABEL_35:
            this->fields.__1__state = v23;
            return (char)outputMask;
          }
          this->fields.__8__1 = 0;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)outputMask, 0, v2, v3, v4, v5, v6, v7);
          v22 = this->fields._ii_5__3 + 1;
        }
        if ( _4__this )
        {
          outputMask = _4__this->fields.outputMask;
          if ( outputMask )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)outputMask, 0, 0);
            v23 = 2;
            goto LABEL_34;
          }
        }
      }
    }
LABEL_37:
    sub_21FFECC(outputMask, method);
  }
  return (char)outputMask;
}


Il2CppObject *SoundTestMenu__allCpkCueListup_d__112__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        SoundTestMenu__allCpkCueListup_d__112_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn SoundTestMenu__allCpkCueListup_d__112__System_Collections_IEnumerator_Reset(
        SoundTestMenu__allCpkCueListup_d__112_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_21FFC64(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_21FFEBC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_21FFC64(&Method_SoundTestMenu__allCpkCueListup_d__112_System_Collections_IEnumerator_Reset__);
  sub_21FFD90(v3, v4);
}


Il2CppObject *SoundTestMenu__allCpkCueListup_d__112__System_Collections_IEnumerator_get_Current(
        SoundTestMenu__allCpkCueListup_d__112_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void SoundTestMenu__allCpkCueListup_d__112__System_IDisposable_Dispose(
        SoundTestMenu__allCpkCueListup_d__112_o *this,
        const MethodInfo *method)
{
  ;
}