void SoundTestMenu___cctor(const MethodInfo *method)
{
  __int64 v1; // x0
  __int64 v2; // x1
  int32_t v3; // w2
  int32_t v4; // w3
  System_String_o *v5; // x4
  int32_t v6; // w5
  int64_t v7; // x6
  System_String_o *v8; // x7
  __int64 v9; // x19
  int32_t v10; // w1
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  int32_t v17; // w1
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  int32_t v24; // w1
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  int32_t v31; // w1
  int32_t v32; // w2
  int32_t v33; // w3
  System_String_o *v34; // x4
  int32_t v35; // w5
  int64_t v36; // x6
  System_String_o *v37; // x7
  int32_t v38; // w1
  int32_t v39; // w2
  int32_t v40; // w3
  System_String_o *v41; // x4
  int32_t v42; // w5
  int64_t v43; // x6
  System_String_o *v44; // x7
  int32_t v45; // w1
  int32_t v46; // w2
  int32_t v47; // w3
  System_String_o *v48; // x4
  int32_t v49; // w5
  int64_t v50; // x6
  System_String_o *v51; // x7
  int32_t v52; // w1
  int32_t v53; // w2
  int32_t v54; // w3
  System_String_o *v55; // x4
  int32_t v56; // w5
  int64_t v57; // x6
  System_String_o *v58; // x7
  int32_t v59; // w1
  int32_t v60; // w2
  int32_t v61; // w3
  System_String_o *v62; // x4
  int32_t v63; // w5
  int64_t v64; // x6
  System_String_o *v65; // x7
  int32_t v66; // w1
  int32_t v67; // w2
  int32_t v68; // w3
  System_String_o *v69; // x4
  int32_t v70; // w5
  int64_t v71; // x6
  System_String_o *v72; // x7
  int32_t v73; // w1
  int32_t v74; // w2
  int32_t v75; // w3
  System_String_o *v76; // x4
  int32_t v77; // w5
  int64_t v78; // x6
  System_String_o *v79; // x7
  int32_t v80; // w2
  int32_t v81; // w3
  System_String_o *v82; // x4
  int32_t v83; // w5
  int64_t v84; // x6
  System_String_o *v85; // x7
  __int64 v86; // x19
  int32_t v87; // w1
  int32_t v88; // w2
  int32_t v89; // w3
  System_String_o *v90; // x4
  int32_t v91; // w5
  int64_t v92; // x6
  System_String_o *v93; // x7
  int32_t v94; // w1
  int32_t v95; // w2
  int32_t v96; // w3
  System_String_o *v97; // x4
  int32_t v98; // w5
  int64_t v99; // x6
  System_String_o *v100; // x7
  int32_t v101; // w1
  struct SoundTestMenu_StaticFields *static_fields; // x0
  int32_t v103; // w2
  int32_t v104; // w3
  System_String_o *v105; // x4
  int32_t v106; // w5
  int64_t v107; // x6
  System_String_o *v108; // x7

  if ( (byte_4CEBD2F & 1) == 0 )
  {
    sub_1C7BAE8(&SoundTestMenu_TypeInfo);
    sub_1C7BAE8(&string___TypeInfo);
    sub_1C7BAE8(&StringLiteral_12076/*"SE_"*/);
    sub_1C7BAE8(&StringLiteral_9544/*"NoblePhantasm_"*/);
    sub_1C7BAE8(&StringLiteral_25742/*"昇順"*/);
    sub_1C7BAE8(&StringLiteral_11561/*"SE"*/);
    sub_1C7BAE8(&StringLiteral_4428/*"ChrVoice_"*/);
    sub_1C7BAE8(&StringLiteral_12818/*"Servants_"*/);
    sub_1C7BAE8(&StringLiteral_15305/*"ValVoice_"*/);
    sub_1C7BAE8(&StringLiteral_25770/*"降順"*/);
    sub_1C7BAE8(&StringLiteral_11425/*"ResourceSound"*/);
    sub_1C7BAE8(&StringLiteral_11417/*"ResidentSE"*/);
    sub_1C7BAE8(&StringLiteral_9302/*"NONE"*/);
    sub_1C7BAE8(&StringLiteral_3085/*"Battle"*/);
    sub_1C7BAE8(&StringLiteral_25661/*"キュー順"*/);
    byte_4CEBD2F = 1;
  }
  v1 = sub_1C7BB90(string___TypeInfo, 10);
  if ( !v1 )
    goto LABEL_20;
  v9 = v1;
  if ( !*(_DWORD *)(v1 + 24) )
    goto LABEL_19;
  v10 = StringLiteral_4428/*"ChrVoice_"*/;
  *(_QWORD *)(v1 + 32) = StringLiteral_4428/*"ChrVoice_"*/;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v1 + 32), v10, v3, v4, v5, v6, v7, v8);
  if ( *(_DWORD *)(v9 + 24) <= 1u )
    goto LABEL_19;
  v17 = StringLiteral_9544/*"NoblePhantasm_"*/;
  *(_QWORD *)(v9 + 40) = StringLiteral_9544/*"NoblePhantasm_"*/;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v9 + 40), v17, v11, v12, v13, v14, v15, v16);
  if ( *(_DWORD *)(v9 + 24) <= 2u )
    goto LABEL_19;
  v24 = StringLiteral_12818/*"Servants_"*/;
  *(_QWORD *)(v9 + 48) = StringLiteral_12818/*"Servants_"*/;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v9 + 48), v24, v18, v19, v20, v21, v22, v23);
  if ( *(_DWORD *)(v9 + 24) <= 3u )
    goto LABEL_19;
  v31 = StringLiteral_15305/*"ValVoice_"*/;
  *(_QWORD *)(v9 + 56) = StringLiteral_15305/*"ValVoice_"*/;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v9 + 56), v31, v25, v26, v27, v28, v29, v30);
  if ( *(_DWORD *)(v9 + 24) <= 4u )
    goto LABEL_19;
  v38 = StringLiteral_12076/*"SE_"*/;
  *(_QWORD *)(v9 + 64) = StringLiteral_12076/*"SE_"*/;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v9 + 64), v38, v32, v33, v34, v35, v36, v37);
  if ( *(_DWORD *)(v9 + 24) <= 5u )
    goto LABEL_19;
  v45 = StringLiteral_11417/*"ResidentSE"*/;
  *(_QWORD *)(v9 + 72) = StringLiteral_11417/*"ResidentSE"*/;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v9 + 72), v45, v39, v40, v41, v42, v43, v44);
  if ( *(_DWORD *)(v9 + 24) <= 6u )
    goto LABEL_19;
  v52 = StringLiteral_11561/*"SE"*/;
  *(_QWORD *)(v9 + 80) = StringLiteral_11561/*"SE"*/;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v9 + 80), v52, v46, v47, v48, v49, v50, v51);
  if ( *(_DWORD *)(v9 + 24) <= 7u
    || (v59 = StringLiteral_3085/*"Battle"*/,
        *(_QWORD *)(v9 + 88) = StringLiteral_3085/*"Battle"*/,
        sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v9 + 88), v59, v53, v54, v55, v56, v57, v58),
        *(_DWORD *)(v9 + 24) <= 8u)
    || (v66 = StringLiteral_11425/*"ResourceSound"*/,
        *(_QWORD *)(v9 + 96) = StringLiteral_11425/*"ResourceSound"*/,
        sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v9 + 96), v66, v60, v61, v62, v63, v64, v65),
        *(_DWORD *)(v9 + 24) <= 9u) )
  {
LABEL_19:
    sub_1C7BD48(v1);
  }
  v73 = StringLiteral_9302/*"NONE"*/;
  *(_QWORD *)(v9 + 104) = StringLiteral_9302/*"NONE"*/;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v9 + 104), v73, v67, v68, v69, v70, v71, v72);
  SoundTestMenu_TypeInfo->static_fields->sePrefixList = (struct System_String_array *)v9;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)SoundTestMenu_TypeInfo->static_fields, v9, v74, v75, v76, v77, v78, v79);
  v1 = sub_1C7BB90(string___TypeInfo, 3);
  if ( !v1 )
LABEL_20:
    sub_1C7BD40(v1, v2);
  v86 = v1;
  if ( !*(_DWORD *)(v1 + 24) )
    goto LABEL_19;
  v87 = StringLiteral_25661/*"キュー順"*/;
  *(_QWORD *)(v1 + 32) = StringLiteral_25661/*"キュー順"*/;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v1 + 32), v87, v80, v81, v82, v83, v84, v85);
  if ( *(_DWORD *)(v86 + 24) <= 1u )
    goto LABEL_19;
  v94 = StringLiteral_25742/*"昇順"*/;
  *(_QWORD *)(v86 + 40) = StringLiteral_25742/*"昇順"*/;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v86 + 40), v94, v88, v89, v90, v91, v92, v93);
  if ( *(_DWORD *)(v86 + 24) <= 2u )
    goto LABEL_19;
  v101 = StringLiteral_25770/*"降順"*/;
  *(_QWORD *)(v86 + 48) = StringLiteral_25770/*"降順"*/;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v86 + 48), v101, v95, v96, v97, v98, v99, v100);
  static_fields = SoundTestMenu_TypeInfo->static_fields;
  static_fields->sortNameList = (struct System_String_array *)v86;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&static_fields->sortNameList, v86, v103, v104, v105, v106, v107, v108);
}


void SoundTestMenu___ctor(SoundTestMenu_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  int32_t v9; // w1
  System_Collections_Generic_List_object__o *v10; // x20
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  System_Collections_Generic_List_object__o *v17; // x20
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  System_Collections_Generic_List_object__o *v24; // x20
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  System_Collections_Generic_List_object__o *v31; // x20
  int32_t v32; // w2
  int32_t v33; // w3
  System_String_o *v34; // x4
  int32_t v35; // w5
  int64_t v36; // x6
  System_String_o *v37; // x7
  int32_t v38; // w1
  int32_t v39; // w2
  int32_t v40; // w3
  System_String_o *v41; // x4
  int32_t v42; // w5
  int64_t v43; // x6
  System_String_o *v44; // x7
  System_Collections_Generic_List_object__o *v45; // x20
  int32_t v46; // w2
  int32_t v47; // w3
  System_String_o *v48; // x4
  int32_t v49; // w5
  int64_t v50; // x6
  System_String_o *v51; // x7
  int32_t v52; // w1
  int32_t v53; // w2
  int32_t v54; // w3
  System_String_o *v55; // x4
  int32_t v56; // w5
  int64_t v57; // x6
  System_String_o *v58; // x7
  System_Collections_Generic_Dictionary_TKey__TValue__o *v59; // x20
  int32_t v60; // w2
  int32_t v61; // w3
  System_String_o *v62; // x4
  int32_t v63; // w5
  int64_t v64; // x6
  System_String_o *v65; // x7

  if ( (byte_4CEBD2E & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_string__long___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_Dictionary_string__long__TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C7BAE8(&StringLiteral_998/*"./OutputCueList/"*/);
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    byte_4CEBD2E = 1;
  }
  v9 = StringLiteral_998/*"./OutputCueList/"*/;
  this->fields.cueListOutputPath = (struct System_String_o *)StringLiteral_998/*"./OutputCueList/"*/;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.cueListOutputPath, v9, v2, v3, v4, v5, v6, v7);
  v10 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.inputBgmCueName = (struct System_Collections_Generic_List_string__o *)v10;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.inputBgmCueName, (int32_t)v10, v11, v12, v13, v14, v15, v16);
  v17 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.bgmCpkList = (struct System_Collections_Generic_List_string__o *)v17;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.bgmCpkList, (int32_t)v17, v18, v19, v20, v21, v22, v23);
  v24 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v24,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.inputSeCueName = (struct System_Collections_Generic_List_string__o *)v24;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.inputSeCueName, (int32_t)v24, v25, v26, v27, v28, v29, v30);
  v31 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v31,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.exclusionList = (struct System_Collections_Generic_List_string__o *)v31;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.exclusionList, (int32_t)v31, v32, v33, v34, v35, v36, v37);
  v38 = StringLiteral_1/*""*/;
  this->fields.pathDiffDirectory = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.pathDiffDirectory, v38, v39, v40, v41, v42, v43, v44);
  v45 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v45,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.seCpkList = (struct System_Collections_Generic_List_string__o *)v45;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.seCpkList, (int32_t)v45, v46, v47, v48, v49, v50, v51);
  v52 = StringLiteral_1/*""*/;
  this->fields.currentAssetVersionName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.currentAssetVersionName, v52, v53, v54, v55, v56, v57, v58);
  v59 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1C7BD34(System_Collections_Generic_Dictionary_string__long__TypeInfo);
  System_Collections_Generic_Dictionary_object__long____ctor(
    v59,
    (const MethodInfo_34EEBD8 *)Method_System_Collections_Generic_Dictionary_string__long___ctor__);
  this->fields.bgmCpkData = (struct System_Collections_Generic_Dictionary_string__long__o *)v59;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.bgmCpkData, (int32_t)v59, v60, v61, v62, v63, v64, v65);
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
  unsigned int v15; // w29
  Il2CppObject *v16; // x26
  int64_t v17; // x27
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  struct System_Object_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  Il2CppClass **v33; // x0
  struct System_Object_array *v34; // x8
  _QWORD *v35; // x9
  __int64 v36; // x10
  Il2CppClass **v37; // x0
  _BOOL8 v38; // x0
  __int64 v39; // x1
  int32_t v40; // w2
  int32_t v41; // w3
  System_String_o *v42; // x4
  int32_t v43; // w5
  int64_t v44; // x6
  System_String_o *v45; // x7
  Il2CppObject *key; // x1
  struct System_Object_array *v47; // x8
  _QWORD *v48; // x9
  __int64 v49; // x10
  Il2CppClass **v50; // x0
  System_String_o *v51; // x24
  const MethodInfo *v52; // x5
  const MethodInfo *v53; // x5
  const MethodInfo *v54; // x5
  SoundTestMenu_o *v55; // [xsp+0h] [xbp-A0h]
  System_String_o *v56; // [xsp+8h] [xbp-98h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v57; // [xsp+10h] [xbp-90h] BYREF

  if ( (byte_4CEBD21 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_string__long__ContainsKey__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_string__long__GetEnumerator__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_string__long__Remove__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_string__long___ctor___78696960);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_string__long__get_Item__);
    sub_1C7BAE8(&System_Collections_Generic_Dictionary_string__long__TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_Enumerator_string__long__Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_Enumerator_string__long__MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_Enumerator_string__long__get_Current__);
    sub_1C7BAE8(&Method_System_Collections_Generic_KeyValuePair_string__long__get_Key__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C7BAE8(&StringLiteral_1020/*".csv"*/);
    sub_1C7BAE8(&StringLiteral_1058/*"/BGM/"*/);
    sub_1C7BAE8(&StringLiteral_1059/*"/BGM/Diff"*/);
    sub_1C7BAE8(&StringLiteral_4367/*"ChangeFiles"*/);
    sub_1C7BAE8(&StringLiteral_2149/*"AddFiles"*/);
    sub_1C7BAE8(&StringLiteral_5231/*"DeleteFiles"*/);
    byte_4CEBD21 = 1;
  }
  memset(&v57, 0, sizeof(v57));
  bgmCpkData = (System_Collections_Generic_IDictionary_TKey__TValue__o *)this->fields.bgmCpkData;
  v6 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1C7BD34(System_Collections_Generic_Dictionary_string__long__TypeInfo);
  System_Collections_Generic_Dictionary_object__long____ctor_55504056(
    v6,
    bgmCpkData,
    (const MethodInfo_34EECB8 *)Method_System_Collections_Generic_Dictionary_string__long___ctor___78696960);
  v55 = this;
  v56 = compareVersion;
  v7 = System_String__Concat_64217180(
         this->fields.pathDiffDirectory,
         (System_String_o *)StringLiteral_1058/*"/BGM/"*/,
         compareVersion,
         (System_String_o *)StringLiteral_1020/*".csv"*/,
         0);
  v8 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_string___ctor__);
  v9 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_string___ctor__);
  v10 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_string___ctor__);
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
        sub_1C7BD48(AllLines);
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
                   (const MethodInfo_34EF77C *)Method_System_Collections_Generic_Dictionary_string__long__ContainsKey__);
      if ( (AllLines & 1) != 0 )
      {
        AllLines = System_Collections_Generic_Dictionary_object__long___get_Item(
                     v6,
                     v16,
                     (const MethodInfo_34EF508 *)Method_System_Collections_Generic_Dictionary_string__long__get_Item__);
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
              *(const MethodInfo_383EDFC **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
          }
          else
          {
            v33 = &items->obj.klass + size;
            v9->fields._size = size + 1;
            v33[4] = (Il2CppClass *)v16;
            sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v33 + 4), (int32_t)v16, v24, v25, v26, v27, v28, v29);
          }
        }
        AllLines = System_Collections_Generic_Dictionary_object__long___Remove(
                     v6,
                     v16,
                     (const MethodInfo_34F0A2C *)Method_System_Collections_Generic_Dictionary_string__long__Remove__);
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
            *(const MethodInfo_383EDFC **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
        }
        else
        {
          v37 = &v34->obj.klass + v36;
          v10->fields._size = v36 + 1;
          v37[4] = (Il2CppClass *)v16;
          sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v37 + 4), (int32_t)v16, v18, v19, v20, v21, v22, v23);
        }
      }
      v13 = *(_DWORD *)(v14 + 24);
      if ( (int)++v15 >= v13 )
        goto LABEL_25;
    }
LABEL_37:
    sub_1C7BD40(AllLines, v12);
  }
LABEL_25:
  if ( !v6 )
    goto LABEL_37;
  System_Collections_Generic_Dictionary_object__long___GetEnumerator(
    &v57,
    v6,
    (const MethodInfo_34EF974 *)Method_System_Collections_Generic_Dictionary_string__long__GetEnumerator__);
  while ( 1 )
  {
    v38 = System_Collections_Generic_Dictionary_Enumerator_object__long___MoveNext(
            &v57,
            (const MethodInfo_35F0514 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__long__MoveNext__);
    if ( !v38 )
      break;
    if ( !v8 )
      sub_1C7BD40(v38, v39);
    key = v57.fields._current.fields.key;
    v47 = v8->fields._items;
    v48 = Method_System_Collections_Generic_List_string__Add__;
    ++v8->fields._version;
    if ( !v47 )
      sub_1C7BD40(v38, key);
    v49 = v8->fields._size;
    if ( (unsigned int)v49 >= LODWORD(v47->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v8,
        key,
        *(const MethodInfo_383EDFC **)(*(_QWORD *)(v48[4] + 192LL) + 112LL));
    }
    else
    {
      v50 = &v47->obj.klass + v49;
      v8->fields._size = v49 + 1;
      v50[4] = (Il2CppClass *)key;
      sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v50 + 4), (int32_t)key, v40, v41, v42, v43, v44, v45);
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_object__long___Dispose(
    &v57,
    (const MethodInfo_35F0634 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__long__Dispose__);
  v51 = System_String__Concat_64176912(v55->fields.pathDiffDirectory, (System_String_o *)StringLiteral_1059/*"/BGM/Diff"*/, 0);
  if ( System_IO_Directory__Exists(v51, 0) )
    System_IO_Directory__Delete(v51, 1, 0);
  System_IO_Directory__CreateDirectory(v51, 0);
  SoundTestMenu__OutputBgmDiffResult(
    v55,
    v51,
    (System_String_o *)StringLiteral_2149/*"AddFiles"*/,
    v56,
    (System_Collections_Generic_List_string__o *)v8,
    v52);
  SoundTestMenu__OutputBgmDiffResult(
    v55,
    v51,
    (System_String_o *)StringLiteral_4367/*"ChangeFiles"*/,
    v56,
    (System_Collections_Generic_List_string__o *)v9,
    v53);
  SoundTestMenu__OutputBgmDiffResult(
    v55,
    v51,
    (System_String_o *)StringLiteral_5231/*"DeleteFiles"*/,
    v56,
    (System_Collections_Generic_List_string__o *)v10,
    v54);
}


System_Collections_IEnumerator_o *SoundTestMenu__CheckSeVersionDiff(
        SoundTestMenu_o *this,
        System_String_o *compareVersion,
        const MethodInfo *method)
{
  __int64 v5; // x21
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7

  if ( (byte_4CEBD19 & 1) == 0 )
  {
    sub_1C7BAE8(&SoundTestMenu__CheckSeVersionDiff_d__116_TypeInfo);
    byte_4CEBD19 = 1;
  }
  v5 = sub_1C7BD34(SoundTestMenu__CheckSeVersionDiff_d__116_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v5 + 32), (int32_t)this, v6, v7, v8, v9, v10, v11);
  *(_QWORD *)(v5 + 56) = compareVersion;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v5 + 56), (int32_t)compareVersion, v12, v13, v14, v15, v16, v17);
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
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  Il2CppObject *key; // x23
  Il2CppObject *value; // x29
  int64_t Item; // x0
  __int64 v23; // x1
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  struct System_String_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  Il2CppClass **v33; // x0
  struct System_String_array *v34; // x8
  _QWORD *v35; // x9
  __int64 v36; // x10
  Il2CppClass **v37; // x0
  SoundTestMenu___c_c *v38; // x0
  System_Func_T__TResult__o *_9__117_1; // x21
  Il2CppObject *v40; // x22
  int32_t v41; // w2
  int32_t v42; // w3
  System_String_o *v43; // x4
  int32_t v44; // w5
  int64_t v45; // x6
  System_String_o *v46; // x7
  struct SoundTestMenu___c_StaticFields *static_fields; // x0
  GrandQuestFolderBoardItem_o *p__9__117_1; // x0
  SoundTestMenu___c_c *v49; // x0
  Il2CppObject *v50; // x22
  struct SoundTestMenu___c_StaticFields *v51; // x0
  System_Collections_Generic_IEnumerable_T__o *v52; // x0
  __int64 v53; // x1
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v54; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v55; // [xsp+30h] [xbp-90h] BYREF

  if ( (byte_4CEBD1A & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_string__long__ContainsKey__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_string__long__GetEnumerator__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_string__long__Remove__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_string__long__get_Item__);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_Select_KeyValuePair_string__long___string___);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_Enumerator_string__long__Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_Enumerator_string__long__MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_Enumerator_string__long__get_Current__);
    sub_1C7BAE8(&System_Func_KeyValuePair_string__long___string__TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_KeyValuePair_string__long__get_Key__);
    sub_1C7BAE8(&Method_System_Collections_Generic_KeyValuePair_string__long__get_Value__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_string__AddRange__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C7BAE8(&Method_SoundTestMenu___c__CompareCueList_b__117_0__);
    sub_1C7BAE8(&Method_SoundTestMenu___c__CompareCueList_b__117_1__);
    sub_1C7BAE8(&SoundTestMenu___c_TypeInfo);
    byte_4CEBD1A = 1;
  }
  memset(&v55, 0, sizeof(v55));
  if ( (unsigned __int64)oldList | (unsigned __int64)nowList )
  {
    if ( nowList )
    {
      System_Collections_Generic_Dictionary_object__long___GetEnumerator(
        &v54,
        (System_Collections_Generic_Dictionary_TKey__TValue__o *)nowList,
        (const MethodInfo_34EF974 *)Method_System_Collections_Generic_Dictionary_string__long__GetEnumerator__);
      v55 = v54;
      while ( 1 )
      {
        v12 = System_Collections_Generic_Dictionary_Enumerator_object__long___MoveNext(
                &v55,
                (const MethodInfo_35F0514 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__long__MoveNext__);
        if ( !v12 )
          break;
        key = v55.fields._current.fields.key;
        if ( oldList
          && (value = v55.fields._current.fields.value,
              v12 = System_Collections_Generic_Dictionary_object__long___ContainsKey(
                      (System_Collections_Generic_Dictionary_TKey__TValue__o *)oldList,
                      v55.fields._current.fields.key,
                      (const MethodInfo_34EF77C *)Method_System_Collections_Generic_Dictionary_string__long__ContainsKey__)) )
        {
          Item = System_Collections_Generic_Dictionary_object__long___get_Item(
                   (System_Collections_Generic_Dictionary_TKey__TValue__o *)oldList,
                   key,
                   (const MethodInfo_34EF508 *)Method_System_Collections_Generic_Dictionary_string__long__get_Item__);
          if ( value != (Il2CppObject *)Item )
          {
            if ( !changedList )
              sub_1C7BD40(Item, v23);
            items = changedList->fields._items;
            v31 = Method_System_Collections_Generic_List_string__Add__;
            ++changedList->fields._version;
            if ( !items )
              sub_1C7BD40(Item, v23);
            size = changedList->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)changedList,
                key,
                *(const MethodInfo_383EDFC **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
            }
            else
            {
              v33 = &items->obj.klass + size;
              changedList->fields._size = size + 1;
              v33[4] = (Il2CppClass *)key;
              sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v33 + 4), (int32_t)key, v24, v25, v26, v27, v28, v29);
            }
          }
          System_Collections_Generic_Dictionary_object__long___Remove(
            (System_Collections_Generic_Dictionary_TKey__TValue__o *)oldList,
            key,
            (const MethodInfo_34F0A2C *)Method_System_Collections_Generic_Dictionary_string__long__Remove__);
        }
        else
        {
          if ( !addedList )
            sub_1C7BD40(v12, v13);
          v34 = addedList->fields._items;
          v35 = Method_System_Collections_Generic_List_string__Add__;
          ++addedList->fields._version;
          if ( !v34 )
            sub_1C7BD40(v12, v13);
          v36 = addedList->fields._size;
          if ( (unsigned int)v36 >= LODWORD(v34->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)addedList,
              key,
              *(const MethodInfo_383EDFC **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
          }
          else
          {
            v37 = &v34->obj.klass + v36;
            addedList->fields._size = v36 + 1;
            v37[4] = (Il2CppClass *)key;
            sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v37 + 4), (int32_t)key, v14, v15, v16, v17, v18, v19);
          }
        }
      }
      System_Collections_Generic_Dictionary_Enumerator_object__long___Dispose(
        &v55,
        (const MethodInfo_35F0634 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__long__Dispose__);
      v38 = SoundTestMenu___c_TypeInfo;
      if ( !SoundTestMenu___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundTestMenu___c_TypeInfo);
        v38 = SoundTestMenu___c_TypeInfo;
      }
      _9__117_1 = (System_Func_T__TResult__o *)v38->static_fields->__9__117_1;
      if ( _9__117_1 )
        goto LABEL_34;
      if ( !v38->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v38);
        v38 = SoundTestMenu___c_TypeInfo;
      }
      v40 = (Il2CppObject *)v38->static_fields->__9;
      _9__117_1 = (System_Func_T__TResult__o *)sub_1C7BD34(System_Func_KeyValuePair_string__long___string__TypeInfo);
      System_Func_KeyValuePair_object__long___object____ctor(
        _9__117_1,
        v40,
        Method_SoundTestMenu___c__CompareCueList_b__117_1__,
        0);
      static_fields = SoundTestMenu___c_TypeInfo->static_fields;
      static_fields->__9__117_1 = (struct System_Func_KeyValuePair_string__long___string__o *)_9__117_1;
      p__9__117_1 = (GrandQuestFolderBoardItem_o *)&static_fields->__9__117_1;
    }
    else
    {
      v49 = SoundTestMenu___c_TypeInfo;
      if ( !SoundTestMenu___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundTestMenu___c_TypeInfo);
        v49 = SoundTestMenu___c_TypeInfo;
      }
      _9__117_1 = (System_Func_T__TResult__o *)v49->static_fields->__9__117_0;
      if ( _9__117_1 )
        goto LABEL_34;
      if ( !v49->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v49);
        v49 = SoundTestMenu___c_TypeInfo;
      }
      v50 = (Il2CppObject *)v49->static_fields->__9;
      _9__117_1 = (System_Func_T__TResult__o *)sub_1C7BD34(System_Func_KeyValuePair_string__long___string__TypeInfo);
      System_Func_KeyValuePair_object__long___object____ctor(
        _9__117_1,
        v50,
        Method_SoundTestMenu___c__CompareCueList_b__117_0__,
        0);
      v51 = SoundTestMenu___c_TypeInfo->static_fields;
      v51->__9__117_0 = (struct System_Func_KeyValuePair_string__long___string__o *)_9__117_1;
      p__9__117_1 = (GrandQuestFolderBoardItem_o *)&v51->__9__117_0;
    }
    sub_1C7BA8C(p__9__117_1, (int32_t)_9__117_1, v41, v42, v43, v44, v45, v46);
LABEL_34:
    v52 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_KeyValuePair_object__long___object_(
                                                           (System_Collections_Generic_IEnumerable_TSource__o *)oldList,
                                                           (System_Func_TSource__TResult__o *)_9__117_1,
                                                           (const MethodInfo_31A1710 *)Method_System_Linq_Enumerable_Select_KeyValuePair_string__long___string___);
    if ( !deletedList )
      sub_1C7BD40(v52, v53);
    System_Collections_Generic_List_object___AddRange(
      (System_Collections_Generic_List_object__o *)deletedList,
      v52,
      (const MethodInfo_383F008 *)Method_System_Collections_Generic_List_string__AddRange__);
  }
}


void SoundTestMenu__OnClickBgmDiffButton(SoundTestMenu_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *gameObject; // x0
  __int64 v4; // x1
  UnityEngine_GameObject_o *v5; // x21
  bool activeSelf; // w20
  const MethodInfo *v7; // x1

  if ( (byte_4CEBD1D & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_8897/*"MainRoot"*/);
    sub_1C7BAE8(&StringLiteral_5270/*"DiffRoot"*/);
    byte_4CEBD1D = 1;
  }
  gameObject = (UnityEngine_Component_o *)GameObjectExtensions__Find(
                                            this->fields.bgmRoot,
                                            (System_String_o *)StringLiteral_8897/*"MainRoot"*/,
                                            0);
  if ( !gameObject
    || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0)) == 0
    || (v5 = (UnityEngine_GameObject_o *)gameObject,
        activeSelf = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)gameObject, 0),
        UnityEngine_GameObject__SetActive(v5, !activeSelf, 0),
        (gameObject = (UnityEngine_Component_o *)GameObjectExtensions__Find(
                                                   this->fields.bgmRoot,
                                                   (System_String_o *)StringLiteral_5270/*"DiffRoot"*/,
                                                   0)) == 0)
    || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0)) == 0 )
  {
    sub_1C7BD40(gameObject, v4);
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
  if ( (byte_4CEBD20 & 1) == 0 )
  {
    this = (SoundTestMenu_o *)sub_1C7BAE8(&StringLiteral_9559/*"None"*/);
    byte_4CEBD20 = 1;
  }
  bgmVersionList = v2->fields.bgmVersionList;
  if ( !bgmVersionList )
    goto LABEL_7;
  this = (SoundTestMenu_o *)System_String__op_Equality(
                              bgmVersionList->fields.mSelectedItem,
                              (System_String_o *)StringLiteral_9559/*"None"*/,
                              0);
  if ( ((unsigned __int8)this & 1) != 0 )
    return;
  v5 = v2->fields.bgmVersionList;
  if ( !v5 )
LABEL_7:
    sub_1C7BD40(this, method);
  SoundTestMenu__CheckBgmVersionDiff(v2, v5->fields.mSelectedItem, v4);
}


void SoundTestMenu__OnClickOutputCurrentVersionBgmList(SoundTestMenu_o *this, const MethodInfo *method)
{
  System_String_o *v3; // x20
  __int64 v4; // x1
  System_Collections_Generic_Dictionary_TKey__TValue__o *bgmCpkData; // x0
  struct System_Collections_Generic_KeyValuePair_TKey__TValue__o current; // kr00_16
  System_String_o *v7; // x21
  System_String_o *v8; // x1
  System_String_o *v9; // x0
  System_String_o *v10; // x1
  const MethodInfo *v11; // x3
  Il2CppObject *value; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v13; // [xsp+10h] [xbp-80h] BYREF

  if ( (byte_4CEBD1F & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_string__long__GetEnumerator__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_Enumerator_string__long__Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_Enumerator_string__long__MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_Enumerator_string__long__get_Current__);
    sub_1C7BAE8(&Method_System_Collections_Generic_KeyValuePair_string__long__get_Key__);
    sub_1C7BAE8(&Method_System_Collections_Generic_KeyValuePair_string__long__get_Value__);
    sub_1C7BAE8(&StringLiteral_43/*"\n"*/);
    sub_1C7BAE8(&StringLiteral_1020/*".csv"*/);
    sub_1C7BAE8(&StringLiteral_1058/*"/BGM/"*/);
    sub_1C7BAE8(&StringLiteral_2911/*"BGM"*/);
    sub_1C7BAE8(&StringLiteral_809/*","*/);
    byte_4CEBD1F = 1;
  }
  value = 0;
  memset(&v13, 0, sizeof(v13));
  v3 = System_String__Concat_64217180(
         this->fields.pathDiffDirectory,
         (System_String_o *)StringLiteral_1058/*"/BGM/"*/,
         this->fields.currentAssetVersionName,
         (System_String_o *)StringLiteral_1020/*".csv"*/,
         0);
  if ( System_IO_File__Exists(v3, 0) )
    System_IO_File__Delete(v3, 0);
  bgmCpkData = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.bgmCpkData;
  if ( !bgmCpkData )
    sub_1C7BD40(0, v4);
  System_Collections_Generic_Dictionary_object__long___GetEnumerator(
    &v13,
    bgmCpkData,
    (const MethodInfo_34EF974 *)Method_System_Collections_Generic_Dictionary_string__long__GetEnumerator__);
  while ( System_Collections_Generic_Dictionary_Enumerator_object__long___MoveNext(
            &v13,
            (const MethodInfo_35F0514 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__long__MoveNext__) )
  {
    current = v13.fields._current;
    v7 = System_String__Concat_64176912(
           (System_String_o *)v13.fields._current.fields.key,
           (System_String_o *)StringLiteral_809/*","*/,
           0);
    value = current.fields.value;
    v8 = System_Int64__ToString((int64_t)&value, 0);
    v9 = System_String__Concat_64176912(v7, v8, 0);
    v10 = System_String__Concat_64176912(v9, (System_String_o *)StringLiteral_43/*"\n"*/, 0);
    System_IO_File__AppendAllText(v3, v10, 0);
  }
  System_Collections_Generic_Dictionary_Enumerator_object__long___Dispose(
    &v13,
    (const MethodInfo_35F0634 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__long__Dispose__);
  SoundTestMenu__SetupVersionList(this, this->fields.bgmVersionList, (System_String_o *)StringLiteral_2911/*"BGM"*/, v11);
}


void SoundTestMenu__OnClickOutputCurrentVersionSeList(SoundTestMenu_o *this, const MethodInfo *method)
{
  System_Collections_IEnumerator_o *v3; // x1

  v3 = SoundTestMenu__OutputCurrentSeList(this, method);
  UnityEngine_MonoBehaviour__StartCoroutine_71855340((UnityEngine_MonoBehaviour_o *)this, v3, 0);
}


void SoundTestMenu__OnClickOutputSeVersionDiff(SoundTestMenu_o *this, const MethodInfo *method)
{
  SoundTestMenu_o *v2; // x19
  struct UIPopupList_o *versionList; // x8
  System_String_o *mSelectedItem; // x20
  const MethodInfo *v5; // x2
  System_Collections_IEnumerator_o *v6; // x1

  v2 = this;
  if ( (byte_4CEBD18 & 1) == 0 )
  {
    this = (SoundTestMenu_o *)sub_1C7BAE8(&StringLiteral_9559/*"None"*/);
    byte_4CEBD18 = 1;
  }
  versionList = v2->fields.versionList;
  if ( !versionList )
    sub_1C7BD40(this, method);
  mSelectedItem = versionList->fields.mSelectedItem;
  if ( !System_String__op_Equality(mSelectedItem, (System_String_o *)StringLiteral_9559/*"None"*/, 0) )
  {
    v6 = SoundTestMenu__CheckSeVersionDiff(v2, mSelectedItem, v5);
    UnityEngine_MonoBehaviour__StartCoroutine_71855340((UnityEngine_MonoBehaviour_o *)v2, v6, 0);
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
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+8h] [xbp-78h] BYREF

  if ( (byte_4CEBD22 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Linq_Enumerable_Count_string___);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_string__GetEnumerator__);
    sub_1C7BAE8(&StringLiteral_43/*"\n"*/);
    sub_1C7BAE8(&StringLiteral_25644/*"このバージョン間では差分はありません。"*/);
    sub_1C7BAE8(&StringLiteral_1038/*".txt"*/);
    sub_1C7BAE8(&StringLiteral_1042/*"/"*/);
    sub_1C7BAE8(&StringLiteral_167/*" <--> "*/);
    sub_1C7BAE8(&StringLiteral_44/*"\n\n"*/);
    byte_4CEBD22 = 1;
  }
  memset(&v16, 0, sizeof(v16));
  v11 = System_String__Concat_64217180(
          outputDir,
          (System_String_o *)StringLiteral_1042/*"/"*/,
          fileName,
          (System_String_o *)StringLiteral_1038/*".txt"*/,
          0);
  if ( System_IO_File__Exists(v11, 0) )
    System_IO_File__Delete(v11, 0);
  v12 = System_String__Concat_64217180(
          this->fields.currentAssetVersionName,
          (System_String_o *)StringLiteral_167/*" <--> "*/,
          targetVersionName,
          (System_String_o *)StringLiteral_44/*"\n\n"*/,
          0);
  System_IO_File__AppendAllText(v11, v12, 0);
  v13 = System_Linq_Enumerable__Count_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)diffList,
          (const MethodInfo_318FACC *)Method_System_Linq_Enumerable_Count_string___);
  if ( (_DWORD)v13 )
  {
    if ( !diffList )
      sub_1C7BD40(v13, v14);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v16,
      (System_Collections_Generic_List_object__o *)diffList,
      (const MethodInfo_383F8F4 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v16,
              (const MethodInfo_35BDF98 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
    {
      current = v16.fields._current;
      System_IO_File__AppendAllText(v11, (System_String_o *)StringLiteral_43/*"\n"*/, 0);
      System_IO_File__AppendAllText(v11, (System_String_o *)current, 0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v16,
      (const MethodInfo_35BDF94 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
  }
  else
  {
    System_IO_File__AppendAllText(v11, (System_String_o *)StringLiteral_25644/*"このバージョン間では差分はありません。"*/, 0);
  }
}


System_Collections_IEnumerator_o *SoundTestMenu__OutputCurrentSeList(SoundTestMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  if ( (byte_4CEBD17 & 1) == 0 )
  {
    sub_1C7BAE8(&SoundTestMenu__OutputCurrentSeList_d__114_TypeInfo);
    byte_4CEBD17 = 1;
  }
  v3 = sub_1C7BD34(SoundTestMenu__OutputCurrentSeList_d__114_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v3 + 32), (int32_t)this, v4, v5, v6, v7, v8, v9);
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
  System_String_o *v19; // x0
  System_String_o *v20; // x1
  __int64 v21; // x0
  __int64 v22; // x1
  Il2CppObject *v23; // x20
  System_String_o *v24; // x1
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v25; // [xsp+8h] [xbp-D8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v26; // [xsp+30h] [xbp-B0h] BYREF
  int32_t v27; // [xsp+4Ch] [xbp-94h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v28; // [xsp+50h] [xbp-90h] BYREF

  if ( (byte_4CEBD1B & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_string__List_string___GetEnumerator__);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_Count_KeyValuePair_string__List_string_____);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_Count_string___);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_Enumerator_string__List_string___Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_Enumerator_string__List_string___MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_Enumerator_string__List_string___get_Current__);
    sub_1C7BAE8(&Method_System_Collections_Generic_KeyValuePair_string__List_string___get_Key__);
    sub_1C7BAE8(&Method_System_Collections_Generic_KeyValuePair_string__List_string___get_Value__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_string__GetEnumerator__);
    sub_1C7BAE8(&StringLiteral_43/*"\n"*/);
    sub_1C7BAE8(&StringLiteral_19598/*"files)"*/);
    sub_1C7BAE8(&StringLiteral_25644/*"このバージョン間では差分はありません。"*/);
    sub_1C7BAE8(&StringLiteral_1038/*".txt"*/);
    sub_1C7BAE8(&StringLiteral_1042/*"/"*/);
    sub_1C7BAE8(&StringLiteral_1017/*".cpk ("*/);
    sub_1C7BAE8(&StringLiteral_167/*" <--> "*/);
    sub_1C7BAE8(&StringLiteral_44/*"\n\n"*/);
    sub_1C7BAE8(&StringLiteral_1019/*".cpkの差分\n"*/);
    sub_1C7BAE8(&StringLiteral_25609/*"┗"*/);
    byte_4CEBD1B = 1;
  }
  v27 = 0;
  memset(&v28, 0, sizeof(v28));
  memset(&v26, 0, sizeof(v26));
  v13 = System_String__Concat_64217180(
          outputDir,
          (System_String_o *)StringLiteral_1042/*"/"*/,
          fileName,
          (System_String_o *)StringLiteral_1038/*".txt"*/,
          0);
  if ( System_IO_File__Exists(v13, 0) )
    System_IO_File__Delete(v13, 0);
  v14 = System_String__Concat_64217180(
          this->fields.currentAssetVersionName,
          (System_String_o *)StringLiteral_167/*" <--> "*/,
          targetVersionName,
          (System_String_o *)StringLiteral_44/*"\n\n"*/,
          0);
  System_IO_File__AppendAllText(v13, v14, 0);
  if ( !filterCpk )
    goto LABEL_19;
  if ( filterCpk->fields._stringLength >= 1 )
  {
    v17 = System_String__Concat_64176912(filterCpk, (System_String_o *)StringLiteral_1019/*".cpkの差分\n"*/, 0);
    System_IO_File__AppendAllText(v13, v17, 0);
  }
  v15 = System_Linq_Enumerable__Count_KeyValuePair_object__object__(
          (System_Collections_Generic_IEnumerable_TSource__o *)diffList,
          (const MethodInfo_318EF68 *)Method_System_Linq_Enumerable_Count_KeyValuePair_string__List_string_____);
  if ( !(_DWORD)v15 )
  {
    System_IO_File__AppendAllText(v13, (System_String_o *)StringLiteral_25644/*"このバージョン間では差分はありません。"*/, 0);
    return;
  }
  if ( !diffList )
LABEL_19:
    sub_1C7BD40(v15, v16);
  System_Collections_Generic_Dictionary_object__object___GetEnumerator(
    &v25,
    (System_Collections_Generic_Dictionary_object__object__o *)diffList,
    (const MethodInfo_34F28BC *)Method_System_Collections_Generic_Dictionary_string__List_string___GetEnumerator__);
  v28 = v25;
  while ( System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
            &v28,
            (const MethodInfo_35F10F0 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__List_string___MoveNext__) )
  {
    current = v28.fields._current;
    System_IO_File__AppendAllText(v13, (System_String_o *)StringLiteral_43/*"\n"*/, 0);
    v27 = System_Linq_Enumerable__Count_object_(
            (System_Collections_Generic_IEnumerable_TSource__o *)current.fields.value,
            (const MethodInfo_318FACC *)Method_System_Linq_Enumerable_Count_string___);
    v19 = System_Int32__ToString((int32_t)&v27, 0);
    v20 = System_String__Concat_64217180(
            (System_String_o *)current.fields.key,
            (System_String_o *)StringLiteral_1017/*".cpk ("*/,
            v19,
            (System_String_o *)StringLiteral_19598/*"files)"*/,
            0);
    System_IO_File__AppendAllText(v13, v20, 0);
    if ( !current.fields.value )
      sub_1C7BD40(v21, v22);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v25,
      (System_Collections_Generic_List_object__o *)current.fields.value,
      (const MethodInfo_383F8F4 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
    *(_OWORD *)&v26.fields._list = *(_OWORD *)&v25.fields._dictionary;
    v26.fields._current = v25.fields._current.fields.key;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v26,
              (const MethodInfo_35BDF98 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
    {
      v23 = v26.fields._current;
      System_IO_File__AppendAllText(v13, (System_String_o *)StringLiteral_43/*"\n"*/, 0);
      v24 = System_String__Concat_64176912((System_String_o *)StringLiteral_25609/*"┗"*/, (System_String_o *)v23, 0);
      System_IO_File__AppendAllText(v13, v24, 0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v26,
      (const MethodInfo_35BDF94 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
  }
  System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
    &v28,
    (const MethodInfo_35F1210 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__List_string___Dispose__);
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
    sub_1C7BD40(bgmProgressLoopStart, method);
  }
  UIProgressBar__set_value((UIProgressBar_o *)bgmProgressLoopStart, 0.0, 0);
}


void SoundTestMenu__SetDiffSwitchButtonLabel(SoundTestMenu_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *gameObject; // x0
  __int64 v4; // x1
  UILabel_o *diffSwitchButtonLabel; // x19
  System_String_o **v6; // x8

  if ( (byte_4CEBD1E & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_8897/*"MainRoot"*/);
    sub_1C7BAE8(&StringLiteral_25727/*"差分チェック"*/);
    sub_1C7BAE8(&StringLiteral_25728/*"差分チェック\n終了"*/);
    byte_4CEBD1E = 1;
  }
  gameObject = (UnityEngine_Component_o *)GameObjectExtensions__Find(
                                            this->fields.bgmRoot,
                                            (System_String_o *)StringLiteral_8897/*"MainRoot"*/,
                                            0);
  if ( !gameObject
    || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0)) == 0
    || (diffSwitchButtonLabel = this->fields.diffSwitchButtonLabel,
        gameObject = (UnityEngine_Component_o *)UnityEngine_GameObject__get_activeSelf(
                                                  (UnityEngine_GameObject_o *)gameObject,
                                                  0),
        !diffSwitchButtonLabel) )
  {
    sub_1C7BD40(gameObject, v4);
  }
  v6 = (System_String_o **)&StringLiteral_25727/*"差分チェック"*/;
  if ( ((unsigned __int8)gameObject & 1) == 0 )
    v6 = (System_String_o **)&StringLiteral_25728/*"差分チェック\n終了"*/;
  UILabel__set_text(diffSwitchButtonLabel, *v6, 0);
}


void SoundTestMenu__SetupBgmProgressBar(SoundTestMenu_o *this, const MethodInfo *method)
{
  System_Collections_IEnumerator_o *updated; // x1

  updated = SoundTestMenu__UpdateBgmProgressBarCoroutine(this, method);
  UnityEngine_MonoBehaviour__StartCoroutine_71855340((UnityEngine_MonoBehaviour_o *)this, updated, 0);
}


void SoundTestMenu__SetupVersionDiff(SoundTestMenu_o *this, const MethodInfo *method)
{
  System_String_o *DatFileSavePath; // x0
  struct System_String_o *v4; // x0
  System_String_o **p_pathDiffDirectory; // x20
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  System_String_o *v12; // x21
  System_String_o *v13; // x20
  System_String_o *v14; // x0
  ManagerConfig_c *v15; // x8
  System_String_o *v16; // x20
  __int64 v17; // x1
  System_String_o *v18; // x20
  NetworkManager_c *v19; // x0
  System_String_o *dataServerFolder; // x0
  System_String_o *v21; // x0
  struct System_String_o *v22; // x0
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  const MethodInfo *v29; // x3
  const MethodInfo *v30; // x3
  struct System_Collections_Generic_List_string__o *seCpkList; // x8
  int32_t size; // w2
  int v33; // w9

  if ( (byte_4CEBD1C & 1) == 0 )
  {
    sub_1C7BAE8(&AndroidUtil_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_string__long__Clear__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_string__Clear__);
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&ManagerConfig_TypeInfo);
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    sub_1C7BAE8(&StringLiteral_11561/*"SE"*/);
    sub_1C7BAE8(&StringLiteral_16165/*"_"*/);
    sub_1C7BAE8(&StringLiteral_1057/*"/BGM"*/);
    sub_1C7BAE8(&StringLiteral_1042/*"/"*/);
    sub_1C7BAE8(&StringLiteral_2019/*"APP_VERSION_BASE"*/);
    sub_1C7BAE8(&StringLiteral_1082/*"/SE"*/);
    sub_1C7BAE8(&StringLiteral_2911/*"BGM"*/);
    sub_1C7BAE8(&StringLiteral_1080/*"/OutputVersionData"*/);
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    byte_4CEBD1C = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0);
  v4 = System_String__Concat_64176912(DatFileSavePath, (System_String_o *)StringLiteral_1080/*"/OutputVersionData"*/, 0);
  p_pathDiffDirectory = &this->fields.pathDiffDirectory;
  this->fields.pathDiffDirectory = v4;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.pathDiffDirectory, (int32_t)v4, v6, v7, v8, v9, v10, v11);
  if ( !System_IO_Directory__Exists(this->fields.pathDiffDirectory, 0) )
    System_IO_Directory__CreateDirectory(*p_pathDiffDirectory, 0);
  v12 = System_String__Concat_64176912(*p_pathDiffDirectory, (System_String_o *)StringLiteral_1082/*"/SE"*/, 0);
  if ( !System_IO_Directory__Exists(v12, 0) )
    System_IO_Directory__CreateDirectory(v12, 0);
  v13 = System_String__Concat_64176912(*p_pathDiffDirectory, (System_String_o *)StringLiteral_1057/*"/BGM"*/, 0);
  if ( !System_IO_Directory__Exists(v13, 0) )
    System_IO_Directory__CreateDirectory(v13, 0);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v14 = LocalizationManager__Get((System_String_o *)StringLiteral_2019/*"APP_VERSION_BASE"*/, 0);
  v15 = ManagerConfig_TypeInfo;
  v16 = v14;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v15 = ManagerConfig_TypeInfo;
  }
  v18 = System_String__Format(v16, (Il2CppObject *)v15->static_fields->AppVer, 0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4CEBBA5 )
  {
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    byte_4CEBBA5 = 1;
  }
  v19 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v19 = NetworkManager_TypeInfo;
  }
  dataServerFolder = v19->static_fields->dataServerFolder;
  if ( !dataServerFolder )
    goto LABEL_27;
  v21 = System_String__Replace_64223476(
          dataServerFolder,
          (System_String_o *)StringLiteral_1042/*"/"*/,
          (System_String_o *)StringLiteral_1/*""*/,
          0);
  v22 = System_String__Concat_64215176(v18, (System_String_o *)StringLiteral_16165/*"_"*/, v21, 0);
  this->fields.currentAssetVersionName = v22;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.currentAssetVersionName,
    (int32_t)v22,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  SoundTestMenu__SetupVersionList(this, this->fields.versionList, (System_String_o *)StringLiteral_11561/*"SE"*/, v29);
  SoundTestMenu__SetupVersionList(this, this->fields.bgmVersionList, (System_String_o *)StringLiteral_2911/*"BGM"*/, v30);
  seCpkList = this->fields.seCpkList;
  if ( !seCpkList )
    goto LABEL_27;
  size = seCpkList->fields._size;
  v33 = seCpkList->fields._version + 1;
  seCpkList->fields._size = 0;
  seCpkList->fields._version = v33;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)seCpkList->fields._items, 0, size, 0);
  dataServerFolder = (System_String_o *)this->fields.bgmCpkData;
  if ( !dataServerFolder )
LABEL_27:
    sub_1C7BD40(dataServerFolder, v17);
  System_Collections_Generic_Dictionary_object__long___Clear(
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)dataServerFolder,
    (const MethodInfo_34EF710 *)Method_System_Collections_Generic_Dictionary_string__long__Clear__);
}


void SoundTestMenu__SetupVersionList(
        SoundTestMenu_o *this,
        UIPopupList_o *popupList,
        System_String_o *directory,
        const MethodInfo *method)
{
  SoundTestMenu_o *v6; // x21
  System_String_o *v7; // x0
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  SoundTestMenu_o *v9; // x20
  unsigned __int64 v10; // x22
  System_String_o *v11; // x21
  System_String_o *FileNameWithoutExtension; // x0
  Il2CppObject *Item; // x1

  v6 = this;
  if ( (byte_4CEBD23 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_1C7BAE8(&System_IO_Path_TypeInfo);
    sub_1C7BAE8(&StringLiteral_795/*"*.csv"*/);
    sub_1C7BAE8(&StringLiteral_9559/*"None"*/);
    this = (SoundTestMenu_o *)sub_1C7BAE8(&StringLiteral_1042/*"/"*/);
    byte_4CEBD23 = 1;
  }
  if ( !popupList )
    goto LABEL_16;
  UIPopupList__Clear(popupList, 0);
  v7 = System_String__Concat_64215176(v6->fields.pathDiffDirectory, (System_String_o *)StringLiteral_1042/*"/"*/, directory, 0);
  this = (SoundTestMenu_o *)System_IO_Directory__GetFiles_65037232(v7, (System_String_o *)StringLiteral_795/*"*.csv"*/, 1, 0);
  if ( !this )
    goto LABEL_16;
  m_CancellationTokenSource = this->fields.m_CancellationTokenSource;
  v9 = this;
  if ( m_CancellationTokenSource )
  {
    if ( (int)m_CancellationTokenSource >= 1 )
    {
      v10 = 0;
      do
      {
        if ( v10 >= (unsigned int)m_CancellationTokenSource )
          sub_1C7BD48(this);
        v11 = (System_String_o *)*((_QWORD *)&v9->fields.group + v10);
        if ( !System_IO_Path_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_IO_Path_TypeInfo);
        FileNameWithoutExtension = System_IO_Path__GetFileNameWithoutExtension(v11, 0);
        UIPopupList__AddItem(popupList, FileNameWithoutExtension, 0);
        LODWORD(m_CancellationTokenSource) = v9->fields.m_CancellationTokenSource;
        ++v10;
      }
      while ( (__int64)v10 < (int)m_CancellationTokenSource );
    }
    this = (SoundTestMenu_o *)popupList->fields.items;
    if ( this )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)this,
               0,
               (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_string__get_Item__);
      UIPopupList__set_value(popupList, (System_String_o *)Item, 0);
      return;
    }
LABEL_16:
    sub_1C7BD40(this, popupList);
  }
  UIPopupList__AddItem(popupList, (System_String_o *)StringLiteral_9559/*"None"*/, 0);
}


void SoundTestMenu__StartMenu(SoundTestMenu_o *this, const MethodInfo *method)
{
  SoundTestMenu_CallbackFunc_o *v3; // x20
  const MethodInfo *v4; // x3
  const MethodInfo *v5; // x2

  if ( (byte_4CEBD03 & 1) == 0 )
  {
    sub_1C7BAE8(&SoundTestMenu_CallbackFunc_TypeInfo);
    sub_1C7BAE8(&Method_SoundTestMenu__StartMenu_b__78_0__);
    byte_4CEBD03 = 1;
  }
  TestScript_DebugTest_DebugItem_DebugItemMenuBase__StartMenu(
    (TestScript_DebugTest_DebugItem_DebugItemMenuBase_o *)this,
    0);
  v3 = (SoundTestMenu_CallbackFunc_o *)sub_1C7BD34(SoundTestMenu_CallbackFunc_TypeInfo);
  SoundTestMenu_CallbackFunc___ctor(v3, (Il2CppObject *)this, Method_SoundTestMenu__StartMenu_b__78_0__, v4);
  SoundTestMenu__open(this, v3, v5);
}


System_Collections_IEnumerator_o *SoundTestMenu__UpdateBgmProgressBarCoroutine(
        SoundTestMenu_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x19

  if ( (byte_4CEBD2D & 1) == 0 )
  {
    sub_1C7BAE8(&SoundTestMenu__UpdateBgmProgressBarCoroutine_d__145_TypeInfo);
    byte_4CEBD2D = 1;
  }
  v2 = sub_1C7BD34(SoundTestMenu__UpdateBgmProgressBarCoroutine_d__145_TypeInfo);
  System_Object___ctor((Il2CppObject *)v2, 0);
  *(_DWORD *)(v2 + 16) = 0;
  return (System_Collections_IEnumerator_o *)v2;
}


void SoundTestMenu___createBgmPlayList_b__83_0(SoundTestMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x7
  struct UILabel_o *ItemBgm; // x0
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  __int64 v11; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x2
  struct System_Collections_Generic_List_string__o *inputBgmCueName; // x8

  if ( (byte_4CEBD30 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_string__get_Count__);
    byte_4CEBD30 = 1;
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
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.selectBgmObj, (int32_t)ItemBgm, v5, v6, v7, v8, v9, v10);
  inputBgmCueName = this->fields.inputBgmCueName;
  if ( !inputBgmCueName )
    sub_1C7BD40(v11, v12);
  SoundTestMenu__updateBgmPrevNextButton(this, inputBgmCueName->fields._size > 1, v13);
}


void SoundTestMenu__add_endCallbackFunc(
        SoundTestMenu_o *this,
        SoundTestMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *endCallbackFunc; // x21
  struct SoundTestMenu_CallbackFunc_o **p_endCallbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  SoundTestMenu_o *v10; // x0
  SoundTestMenu_CallbackFunc_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_4CEBD01 & 1) == 0 )
  {
    sub_1C7BAE8(&SoundTestMenu_CallbackFunc_TypeInfo);
    byte_4CEBD01 = 1;
  }
  endCallbackFunc = (System_Delegate_o *)this->fields.endCallbackFunc;
  p_endCallbackFunc = &this->fields.endCallbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(endCallbackFunc, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (SoundTestMenu_CallbackFunc_c *)v7->klass != SoundTestMenu_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1CD78BC(p_endCallbackFunc, v7, endCallbackFunc);
    v9 = endCallbackFunc == (System_Delegate_o *)v8;
    endCallbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C7C0DC(v7);
  SoundTestMenu__remove_endCallbackFunc(v10, v11, v12);
}


System_Collections_IEnumerator_o *SoundTestMenu__allCpkCueListup(SoundTestMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  if ( (byte_4CEBD16 & 1) == 0 )
  {
    sub_1C7BAE8(&SoundTestMenu__allCpkCueListup_d__112_TypeInfo);
    byte_4CEBD16 = 1;
  }
  v3 = sub_1C7BD34(SoundTestMenu__allCpkCueListup_d__112_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v3 + 32), (int32_t)this, v4, v5, v6, v7, v8, v9);
  return (System_Collections_IEnumerator_o *)v3;
}


// local variable allocation has failed, the output may be wrong!
void SoundTestMenu__bgmPlay(SoundTestMenu_o *this, int32_t addIdxVal, const MethodInfo *method)
{
  const MethodInfo *v5; // x6
  const MethodInfo *v6; // x1
  struct System_String_o *loadBgmCueSheetName; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7

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
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.playBgmCueSheetName,
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
    sub_1C7BD40(0, v3);
  UnityEngine_GameObject__SetActive(rootObject, 0, 0);
}


void SoundTestMenu__createBgmPlayList(SoundTestMenu_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *selectBgmCpkObj; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  struct UILabel_o *v6; // x8
  System_String_o *mText; // x20
  const MethodInfo *v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  System_Collections_Generic_List_string__o *inputBgmCueName; // x21
  System_Action_o *v15; // x22
  const MethodInfo *v16; // x4

  if ( (byte_4CEBD06 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&Method_SoundTestMenu__createBgmPlayList_b__83_0__);
    byte_4CEBD06 = 1;
  }
  selectBgmCpkObj = (UnityEngine_Object_o *)this->fields.selectBgmCpkObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality(selectBgmCpkObj, 0, 0);
  if ( !v4 )
  {
    v6 = this->fields.selectBgmCpkObj;
    if ( !v6 )
      sub_1C7BD40(v4, v5);
    mText = v6->fields.mText;
    if ( System_String__op_Inequality(this->fields.loadBgmCueSheetName, mText, 0)
      && System_String__op_Inequality(this->fields.playBgmCueSheetName, this->fields.loadBgmCueSheetName, 0) )
    {
      SoundTestMenu__releaseBgm(this, this->fields.loadBgmCueSheetName, v8);
    }
    this->fields.loadBgmCueSheetName = mText;
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)&this->fields.loadBgmCueSheetName,
      (int32_t)mText,
      (int32_t)v8,
      v9,
      v10,
      v11,
      v12,
      v13);
    inputBgmCueName = this->fields.inputBgmCueName;
    v15 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
    System_Action___ctor(v15, (Il2CppObject *)this, Method_SoundTestMenu__createBgmPlayList_b__83_0__, 0);
    SoundTestMenu__openCueList(this, mText, inputBgmCueName, v15, v16);
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
  float cellHeight; // s9
  int32_t size; // w25
  UnityEngine_Vector2_o ViewSize; // kr00_8
  UILabel_o *bgmCount; // x23
  System_String_o *v20; // x0
  UILabel_o *v21; // x23
  Il2CppObject *v22; // x24
  int v23; // s1 OVERLAPPED
  int v24; // s2
  float v25; // s3
  float v26; // s0
  Il2CppObject *Item; // x0
  UnityEngine_Transform_o *v28; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v30; // x0
  int32_t index[2]; // [xsp+8h] [xbp-68h] BYREF

  v14 = this;
  if ( (byte_4CEBD08 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_UnityEngine_Component_GetComponent_UIPanel___);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_1C7BAE8(&Method_UnityEngine_Object_Instantiate_UILabel___);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    this = (SoundTestMenu_o *)sub_1C7BAE8(&StringLiteral_25748/*"曲数 : "*/);
    byte_4CEBD08 = 1;
  }
  *(_QWORD *)index = 0;
  if ( !itemParent )
    goto LABEL_30;
  transform = UnityEngine_GameObject__get_transform(itemParent, 0);
  TransformHelper__DestroyChildren(transform, 0, 0);
  this = (SoundTestMenu_o *)UnityEngine_GameObject__get_transform(itemParent, 0);
  if ( !this )
    goto LABEL_30;
  UnityEngine_Transform__DetachChildren((UnityEngine_Transform_o *)this, 0);
  if ( !itemGrid )
    goto LABEL_30;
  if ( !itemNameList )
    goto LABEL_30;
  if ( !scrollView )
    goto LABEL_30;
  cellHeight = itemGrid->fields.cellHeight;
  size = itemNameList->fields._size;
  this = (SoundTestMenu_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)scrollView, 0);
  if ( !this )
    goto LABEL_30;
  this = (SoundTestMenu_o *)UnityEngine_Component__GetComponent_object_(
                              (UnityEngine_Component_o *)this,
                              (const MethodInfo_3166BC4 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
  if ( !this )
    goto LABEL_30;
  ViewSize = UIPanel__GetViewSize((UIPanel_o *)this, 0);
  this = (SoundTestMenu_o *)scrollView->fields.verticalScrollBar;
  if ( !this )
    goto LABEL_30;
  this = (SoundTestMenu_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !this )
    goto LABEL_30;
  UnityEngine_GameObject__SetActive(
    (UnityEngine_GameObject_o *)this,
    (float)(cellHeight * (float)size) > ViewSize.fields.y,
    0);
  if ( cntCalc )
  {
    bgmCount = v14->fields.bgmCount;
    index[1] = itemNameList->fields._size;
    v20 = System_Int32__ToString((int32_t)&index[1], 0);
    this = (SoundTestMenu_o *)System_String__Concat_64176912((System_String_o *)StringLiteral_25748/*"曲数 : "*/, v20, 0);
    if ( !bgmCount )
      goto LABEL_30;
    UILabel__set_text(bgmCount, (System_String_o *)this, 0);
  }
  index[0] = 0;
  if ( itemNameList->fields._size >= 1 )
  {
    v21 = 0;
    while ( 1 )
    {
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v22 = UnityEngine_Object__Instantiate_object_(
              (Il2CppObject *)itemLabelSeed,
              (const MethodInfo_31FBEB0 *)Method_UnityEngine_Object_Instantiate_UILabel___);
      this = (SoundTestMenu_o *)System_Int32__ToString((int32_t)index, 0);
      if ( !v22 )
        break;
      UnityEngine_Object__set_name((UnityEngine_Object_o *)v22, (System_String_o *)this, 0);
      v23 = 0;
      v24 = 0;
      v25 = 1.0;
      v26 = index[0] ? 0.0 : 1.0;
      if ( !index[0] )
        v21 = (UILabel_o *)v22;
      UIWidget__set_color((UIWidget_o *)v22, *(UnityEngine_Color_o *)(&v23 - 1), 0);
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)itemNameList,
               index[0],
               (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_string__get_Item__);
      UILabel__set_text((UILabel_o *)v22, (System_String_o *)Item, 0);
      this = (SoundTestMenu_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v22, 0);
      if ( !this )
        break;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
      v28 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v22, 0);
      UIGrid__AddChild(itemGrid, v28, 0);
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v22, 0);
      GameObjectExtensions__ResetLocalPosition(gameObject, 0);
      v30 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v22, 0);
      GameObjectExtensions__ResetLocalScale(v30, 0);
      if ( ++index[0] >= itemNameList->fields._size )
        goto LABEL_29;
    }
LABEL_30:
    sub_1C7BD40(this, itemParent);
  }
  v21 = 0;
LABEL_29:
  ((void (__fastcall *)(UIGrid_o *, const MethodInfo *))itemGrid->klass->vtable._8_Reposition.methodPtr)(
    itemGrid,
    itemGrid->klass->vtable._8_Reposition.method);
  UIScrollView__ResetPosition(scrollView, 0);
  return v21;
}


// local variable allocation has failed, the output may be wrong!
void SoundTestMenu__createSeItem(SoundTestMenu_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *seItemParent; // x0
  UnityEngine_Transform_o *transform; // x0
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  struct UIGrid_o *seGrid; // x8
  struct System_Collections_Generic_List_string__o *inputSeCueName; // x9
  float cellHeight; // s9
  int size; // w21
  UnityEngine_Vector2_o ViewSize; // kr00_8
  struct UIScrollView_o *seScrollView; // x8
  struct System_Collections_Generic_List_string__o *v17; // x8
  UILabel_o *seCount; // x21
  System_String_o *v19; // x0
  struct System_Collections_Generic_List_string__o *v20; // x9
  int32_t v21; // w8
  Il2CppObject *seItemLabelSeed; // x21
  Il2CppObject *v23; // x21
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  float v30; // s3
  float v31; // s0 OVERLAPPED
  int v32; // s1
  int v33; // s2
  Il2CppObject *Item; // x0
  UnityEngine_Transform_o *v35; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t index; // [xsp+8h] [xbp-58h] BYREF
  int32_t v38; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4CEBD13 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_UnityEngine_Component_GetComponent_UIPanel___);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_1C7BAE8(&Method_UnityEngine_Object_Instantiate_UILabel___);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&StringLiteral_11562/*"SE Count : "*/);
    byte_4CEBD13 = 1;
  }
  index = 0;
  seItemParent = this->fields.seItemParent;
  if ( !seItemParent )
    goto LABEL_34;
  transform = UnityEngine_GameObject__get_transform(seItemParent, 0);
  TransformHelper__DestroyChildren(transform, 0, 0);
  seItemParent = this->fields.seItemParent;
  if ( !seItemParent )
    goto LABEL_34;
  seItemParent = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(seItemParent, 0);
  if ( !seItemParent )
    goto LABEL_34;
  UnityEngine_Transform__DetachChildren((UnityEngine_Transform_o *)seItemParent, 0);
  this->fields.selectSeObj = 0;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.selectSeObj, 0, v5, v6, v7, v8, v9, v10);
  seGrid = this->fields.seGrid;
  if ( !seGrid )
    goto LABEL_34;
  inputSeCueName = this->fields.inputSeCueName;
  if ( !inputSeCueName )
    goto LABEL_34;
  seItemParent = (UnityEngine_GameObject_o *)this->fields.seScrollView;
  if ( !seItemParent )
    goto LABEL_34;
  cellHeight = seGrid->fields.cellHeight;
  size = inputSeCueName->fields._size;
  seItemParent = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                               (UnityEngine_Component_o *)seItemParent,
                                               0);
  if ( !seItemParent )
    goto LABEL_34;
  seItemParent = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                               (UnityEngine_Component_o *)seItemParent,
                                               (const MethodInfo_3166BC4 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
  if ( !seItemParent )
    goto LABEL_34;
  ViewSize = UIPanel__GetViewSize((UIPanel_o *)seItemParent, 0);
  seScrollView = this->fields.seScrollView;
  if ( !seScrollView )
    goto LABEL_34;
  seItemParent = (UnityEngine_GameObject_o *)seScrollView->fields.verticalScrollBar;
  if ( !seItemParent )
    goto LABEL_34;
  seItemParent = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)seItemParent, 0);
  if ( !seItemParent )
    goto LABEL_34;
  UnityEngine_GameObject__SetActive(seItemParent, (float)(cellHeight * (float)size) > ViewSize.fields.y, 0);
  v17 = this->fields.inputSeCueName;
  if ( !v17 )
    goto LABEL_34;
  seCount = this->fields.seCount;
  v38 = v17->fields._size;
  v19 = System_Int32__ToString((int32_t)&v38, 0);
  seItemParent = (UnityEngine_GameObject_o *)System_String__Concat_64176912(
                                               (System_String_o *)StringLiteral_11562/*"SE Count : "*/,
                                               v19,
                                               0);
  if ( !seCount )
    goto LABEL_34;
  UILabel__set_text(seCount, (System_String_o *)seItemParent, 0);
  index = 0;
  v20 = this->fields.inputSeCueName;
  if ( !v20 )
    goto LABEL_34;
  v21 = 0;
  while ( v21 < v20->fields._size )
  {
    seItemLabelSeed = (Il2CppObject *)this->fields.seItemLabelSeed;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v23 = UnityEngine_Object__Instantiate_object_(
            seItemLabelSeed,
            (const MethodInfo_31FBEB0 *)Method_UnityEngine_Object_Instantiate_UILabel___);
    seItemParent = (UnityEngine_GameObject_o *)System_Int32__ToString((int32_t)&index, 0);
    if ( v23 )
    {
      UnityEngine_Object__set_name((UnityEngine_Object_o *)v23, (System_String_o *)seItemParent, 0);
      if ( index )
      {
        v30 = 1.0;
        v31 = 0.0;
        v32 = 0;
        v33 = 0;
      }
      else
      {
        this->fields.selectSeObj = (struct UILabel_o *)v23;
        sub_1C7BA8C(
          (GrandQuestFolderBoardItem_o *)&this->fields.selectSeObj,
          (int32_t)v23,
          v24,
          v25,
          v26,
          v27,
          v28,
          v29);
        v31 = 1.0;
        v32 = 0;
        v33 = 0;
        v30 = 1.0;
      }
      UIWidget__set_color((UIWidget_o *)v23, *(UnityEngine_Color_o *)&v31, 0);
      seItemParent = (UnityEngine_GameObject_o *)this->fields.inputSeCueName;
      if ( seItemParent )
      {
        Item = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)seItemParent,
                 index,
                 (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_string__get_Item__);
        UILabel__set_text((UILabel_o *)v23, (System_String_o *)Item, 0);
        seItemParent = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v23, 0);
        if ( seItemParent )
        {
          UnityEngine_GameObject__SetActive(seItemParent, 1, 0);
          seItemParent = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                       (UnityEngine_Component_o *)v23,
                                                       0);
          if ( this->fields.seGrid )
          {
            v35 = (UnityEngine_Transform_o *)seItemParent;
            seItemParent = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                         (UnityEngine_Component_o *)this->fields.seGrid,
                                                         0);
            if ( v35 )
            {
              UnityEngine_Transform__set_parent(v35, (UnityEngine_Transform_o *)seItemParent, 0);
              gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v23, 0);
              GameObjectExtensions__ResetLocalScale(gameObject, 0);
              v21 = ++index;
              v20 = this->fields.inputSeCueName;
              if ( v20 )
                continue;
            }
          }
        }
      }
    }
    goto LABEL_34;
  }
  seItemParent = (UnityEngine_GameObject_o *)this->fields.seGrid;
  if ( !seItemParent
    || (((void (__fastcall *)(UnityEngine_GameObject_o *, Il2CppClass *))seItemParent->klass[1]._1.element_class)(
          seItemParent,
          seItemParent->klass[1]._1.castClass),
        (seItemParent = (UnityEngine_GameObject_o *)this->fields.seScrollView) == 0) )
  {
LABEL_34:
    sub_1C7BD40(seItemParent, method);
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
    sub_1C7BD40(0, a);
  activeSelf = UnityEngine_GameObject__get_activeSelf(seRoot, 0);
  v10 = 512;
  if ( activeSelf )
    v10 = 508;
  return SoundTestMenu__sort((SoundTestMenu_o *)activeSelf, a, b, *(_DWORD *)((char *)&this->klass + v10), v9);
}


void SoundTestMenu__endCallback(SoundTestMenu_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct SoundTestMenu_CallbackFunc_o *endCallbackFunc; // x19
  GrandQuestFolderBoardItem_o *p_endCallbackFunc; // x0

  endCallbackFunc = this->fields.endCallbackFunc;
  if ( endCallbackFunc )
  {
    p_endCallbackFunc = (GrandQuestFolderBoardItem_o *)&this->fields.endCallbackFunc;
    p_endCallbackFunc->klass = 0;
    sub_1C7BA8C(p_endCallbackFunc, 0, v2, v3, v4, v5, v6, v7);
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
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  UILineInput_o *seAssetNameInput; // x0
  struct System_Collections_Generic_List_string__o *bgmCpkList; // x8
  int32_t size; // w2
  int v16; // w9

  if ( (byte_4CEBD05 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_string__Clear__);
    byte_4CEBD05 = 1;
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
      sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.loadSeCueSheetName, 0, v7, v8, v9, v10, v11, v12);
    }
    seAssetNameInput = this->fields.seAssetNameInput;
    if ( !seAssetNameInput
      || (UILineInput__SetInputEnable(seAssetNameInput, 0, 0), (bgmCpkList = this->fields.bgmCpkList) == 0) )
    {
      sub_1C7BD40(seAssetNameInput, loadSeCueSheetName);
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

  if ( (byte_4CEBD11 & 1) == 0 )
  {
    sub_1C7BAE8(&SeManager_TypeInfo);
    sub_1C7BAE8(&SoundManager_TypeInfo);
    byte_4CEBD11 = 1;
  }
  if ( !SeManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
  if ( !byte_4CEBDBB )
  {
    sub_1C7BAE8(&SeManager_TypeInfo);
    byte_4CEBDBB = 1;
  }
  v6 = SeManager_TypeInfo;
  if ( !SeManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
    v6 = SeManager_TypeInfo;
  }
  LoadSeList = v6->static_fields->LoadSeList;
  if ( !LoadSeList )
    sub_1C7BD40(v6, cueSheetName);
  max_length = LoadSeList->max_length;
  if ( (int)max_length < 1 )
  {
LABEL_15:
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__loadAudioAssetStorage(cueSheetName, callBack, 1, 0);
  }
  else
  {
    v9 = 0;
    while ( 1 )
    {
      if ( v9 >= (unsigned int)max_length )
        sub_1C7BD48(v6);
      v6 = (SeManager_c *)System_String__Compare_64209096(cueSheetName, LoadSeList->m_Items[v9], 1, 0);
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
    sub_1C7BD40(this, scrollView);
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
  System_Collections_Generic_List_object__o *v12; // x25
  int32_t v13; // w24
  SoundTestMenu_o *v14; // x26
  Il2CppObject *Component_object; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  SoundTestMenu_o *gameObject; // x0
  const MethodInfo *v23; // x3
  UnityEngine_Color_o v24; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v25; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4CEBD0C & 1) == 0 )
  {
    sub_1C7BAE8(&Method_UnityEngine_Component_GetComponent_UILabel___);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Transform__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_string__get_Count__);
    this = (SoundTestMenu_o *)sub_1C7BAE8(&Method_System_Collections_Generic_List_Transform__get_Item__);
    byte_4CEBD0C = 1;
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
                                    (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_Transform__get_Item__);
        if ( !this )
          break;
        this = (SoundTestMenu_o *)UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
        if ( !*selectObj )
          break;
        v14 = this;
        this = (SoundTestMenu_o *)UnityEngine_Object__get_name((UnityEngine_Object_o *)*selectObj, 0);
        if ( !v14 )
          break;
        if ( System_String__Equals_64212232((System_String_o *)v14, (System_String_o *)this, 0) )
          goto LABEL_16;
        if ( ++v13 >= v12->fields._size )
          goto LABEL_15;
      }
LABEL_21:
      sub_1C7BD40(this, scrollView);
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
                         (const MethodInfo_3166BC4 *)Method_UnityEngine_Component_GetComponent_UILabel___);
    *selectObj = (UILabel_o *)Component_object;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)selectObj, (int32_t)Component_object, v16, v17, v18, v19, v20, v21);
    this = (SoundTestMenu_o *)*selectObj;
    if ( !*selectObj )
      goto LABEL_21;
    v25.fields.r = 1.0;
    v25.fields.g = 0.0;
    v25.fields.b = 0.0;
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
  UnityEngine_MonoBehaviour__StartCoroutine_71855340((UnityEngine_MonoBehaviour_o *)this, v3, 0);
}


void SoundTestMenu__onClickBgmCpkItem(SoundTestMenu_o *this, UnityEngine_GameObject_o *obj, const MethodInfo *method)
{
  UnityEngine_Object_o *selectBgmCpkObj; // x22
  struct UILabel_o **p_selectBgmCpkObj; // x21
  _BOOL8 v7; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x3
  struct System_String_StaticFields *p_mText; // x8
  System_String_o *Empty; // x22
  const MethodInfo *v12; // x1

  if ( (byte_4CEBD09 & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&string_TypeInfo);
    byte_4CEBD09 = 1;
  }
  selectBgmCpkObj = (UnityEngine_Object_o *)this->fields.selectBgmCpkObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  p_selectBgmCpkObj = &this->fields.selectBgmCpkObj;
  v7 = UnityEngine_Object__op_Inequality(selectBgmCpkObj, 0, 0);
  if ( v7 )
  {
    if ( !*p_selectBgmCpkObj )
      goto LABEL_13;
    p_mText = (struct System_String_StaticFields *)&(*p_selectBgmCpkObj)->fields.mText;
  }
  else
  {
    p_mText = string_TypeInfo->static_fields;
  }
  Empty = p_mText->Empty;
  SoundTestMenu__selectItem((SoundTestMenu_o *)v7, &this->fields.selectBgmCpkObj, obj, v9);
  if ( !*p_selectBgmCpkObj )
LABEL_13:
    sub_1C7BD40(v7, v8);
  if ( System_String__op_Inequality((*p_selectBgmCpkObj)->fields.mText, Empty, 0) )
    SoundTestMenu__createBgmPlayList(this, v12);
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
    sub_1C7BD40(this, method);
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
  __int64 v3; // x25
  __int64 v4; // x1
  UIGrid_o *bgmCpkGrid; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v6; // x26
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  struct System_String_o **v13; // x23
  System_Collections_Generic_List_string__o *bgmCpkList; // x22
  bool v15; // w27
  System_Func_object__bool__o *v16; // x28
  UIGrid_c *klass; // x8
  UIGrid_o *v18; // x25
  char v19; // w27
  __int64 v20; // x9
  int32_t *p_offset; // x10
  __int64 v22; // x0
  __int64 v23; // x1
  __int64 v24; // x25
  UnityEngine_Object_o *v25; // x26
  __int64 v26; // x8
  __int64 v27; // x9
  int *v28; // x10
  __int64 v29; // x0
  __int64 v30; // x8
  __int64 v31; // x9
  int *v32; // x10
  __int64 v33; // x0
  UnityEngine_Component_o *v34; // x28
  _BOOL8 v35; // x0
  __int64 v36; // x1
  __int64 v37; // x1
  UnityEngine_Object_o *gameObject; // x27
  UnityEngine_Object_o *v39; // x28
  __int64 v40; // x8
  __int64 v41; // x9
  int *v42; // x10
  __int64 v43; // x0
  int32_t v44; // w2
  int32_t v45; // w3
  System_String_o *v46; // x4
  int32_t v47; // w5
  int64_t v48; // x6
  System_String_o *v49; // x7
  struct System_String_o *v50; // x1
  SoundTestMenu_o *v51; // x0
  const MethodInfo *v52; // x3
  const MethodInfo *v53; // x6
  int32_t v54; // w1
  int32_t v55; // w2
  int32_t v56; // w3
  System_String_o *v57; // x4
  int32_t v58; // w5
  int64_t v59; // x6
  System_String_o *v60; // x7
  const MethodInfo *v61; // x1
  CommonUI_o *v62; // x19
  SoundTestMenu___c_c *v63; // x8
  System_Action_o *_9__139_1; // x22
  System_String_o *v65; // x20
  System_String_o *v66; // x21
  Il2CppObject *v67; // x23
  struct SoundTestMenu___c_StaticFields *static_fields; // x0
  int32_t v69; // w2
  int32_t v70; // w3
  System_String_o *v71; // x4
  int32_t v72; // w5
  int64_t v73; // x6
  System_String_o *v74; // x7
  UIGrid_o *v75; // [xsp+38h] [xbp-78h]
  UIScrollView_o *bgmCpkScrollView; // [xsp+40h] [xbp-70h]
  UnityEngine_Component_o *selectBgmCpkObj; // [xsp+48h] [xbp-68h] BYREF

  if ( (byte_4CEBD2A & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_UnityEngine_Component_GetComponent_UILabel___);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_Where_Transform___);
    sub_1C7BAE8(&System_Func_Transform__bool__TypeInfo);
    sub_1C7BAE8(&System_IDisposable_TypeInfo);
    sub_1C7BAE8(&System_Collections_Generic_IEnumerable_Transform__TypeInfo);
    sub_1C7BAE8(&System_Collections_Generic_IEnumerator_Transform__TypeInfo);
    sub_1C7BAE8(&System_Collections_IEnumerator_TypeInfo);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C7BAE8(&Method_SoundTestMenu___c__onClickCpkSearchButton_b__139_1__);
    sub_1C7BAE8(&Method_SoundTestMenu___c__DisplayClass139_0__onClickCpkSearchButton_b__0__);
    sub_1C7BAE8(&SoundTestMenu___c__DisplayClass139_0_TypeInfo);
    sub_1C7BAE8(&SoundTestMenu___c_TypeInfo);
    sub_1C7BAE8(&StringLiteral_25645/*"そのサウンドはcpkリスト内に存在しません"*/);
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    byte_4CEBD2A = 1;
  }
  v3 = sub_1C7BD34(SoundTestMenu___c__DisplayClass139_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  bgmCpkGrid = this->fields.bgmCpkGrid;
  if ( !bgmCpkGrid )
    goto LABEL_68;
  bgmCpkGrid = (UIGrid_o *)UIGrid__GetChildList(bgmCpkGrid, 0);
  if ( !this->fields.bgmCpkSearchNameInput )
    goto LABEL_68;
  v6 = (System_Collections_Generic_IEnumerable_TSource__o *)bgmCpkGrid;
  bgmCpkGrid = (UIGrid_o *)UILineInput__GetText(this->fields.bgmCpkSearchNameInput, 0);
  if ( !v3 )
    goto LABEL_68;
  *(_QWORD *)(v3 + 16) = bgmCpkGrid;
  v13 = (struct System_String_o **)(v3 + 16);
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v3 + 16), (int32_t)bgmCpkGrid, v7, v8, v9, v10, v11, v12);
  selectBgmCpkObj = (UnityEngine_Component_o *)this->fields.selectBgmCpkObj;
  bgmCpkGrid = *(UIGrid_o **)(v3 + 16);
  if ( !bgmCpkGrid )
    goto LABEL_68;
  v75 = this->fields.bgmCpkGrid;
  bgmCpkScrollView = this->fields.bgmCpkScrollView;
  bgmCpkList = this->fields.bgmCpkList;
  v15 = System_String__Equals_64212232((System_String_o *)bgmCpkGrid, this->fields.cpkSearchNamePrev, 0);
  v16 = (System_Func_object__bool__o *)sub_1C7BD34(System_Func_Transform__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v16,
    (Il2CppObject *)v3,
    Method_SoundTestMenu___c__DisplayClass139_0__onClickCpkSearchButton_b__0__,
    0);
  bgmCpkGrid = (UIGrid_o *)System_Linq_Enumerable__Where_object_(
                             v6,
                             (System_Func_TSource__bool__o *)v16,
                             (const MethodInfo_31B6300 *)Method_System_Linq_Enumerable_Where_Transform___);
  if ( !bgmCpkGrid )
    goto LABEL_68;
  klass = bgmCpkGrid->klass;
  v18 = bgmCpkGrid;
  v19 = !v15;
  v20 = *(unsigned __int16 *)&bgmCpkGrid->klass->_2.rank;
  if ( *(_WORD *)&bgmCpkGrid->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_Transform__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_Transform__TypeInfo )
    {
      --v20;
      p_offset += 4;
      if ( !v20 )
        goto LABEL_12;
    }
    v22 = (__int64)&klass->vtable + 16 * *p_offset;
  }
  else
  {
LABEL_12:
    v22 = sub_1C51E70(bgmCpkGrid, System_Collections_Generic_IEnumerable_Transform__TypeInfo, 0);
  }
  v24 = (*(__int64 (__fastcall **)(UIGrid_o *, _QWORD))v22)(v18, *(_QWORD *)(v22 + 8));
  if ( !v24 )
    sub_1C7BD40(0, v23);
  v25 = 0;
  while ( 1 )
  {
    v26 = *(_QWORD *)v24;
    v27 = *(unsigned __int16 *)(*(_QWORD *)v24 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v24 + 302LL) )
    {
      v28 = (int *)(*(_QWORD *)(v26 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v28 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v27;
        v28 += 4;
        if ( !v27 )
          goto LABEL_20;
      }
      v29 = v26 + 16LL * *v28 + 312;
    }
    else
    {
LABEL_20:
      v29 = sub_1C51E70(v24, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v29)(v24, *(_QWORD *)(v29 + 8)) & 1) == 0 )
    {
      v34 = 0;
      goto LABEL_41;
    }
    v30 = *(_QWORD *)v24;
    v31 = *(unsigned __int16 *)(*(_QWORD *)v24 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v24 + 302LL) )
    {
      v32 = (int *)(*(_QWORD *)(v30 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_Transform__c **)v32 - 1) != System_Collections_Generic_IEnumerator_Transform__TypeInfo )
      {
        --v31;
        v32 += 4;
        if ( !v31 )
          goto LABEL_27;
      }
      v33 = v30 + 16LL * *v32 + 312;
    }
    else
    {
LABEL_27:
      v33 = sub_1C51E70(v24, System_Collections_Generic_IEnumerator_Transform__TypeInfo, 0);
    }
    v34 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v33)(v24, *(_QWORD *)(v33 + 8));
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v35 = UnityEngine_Object__op_Equality(v25, 0, 0);
    if ( v35 )
      v25 = (UnityEngine_Object_o *)v34;
    if ( (v19 & 1) != 0 )
      break;
    if ( !v34 )
      sub_1C7BD40(v35, v36);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v34, 0);
    if ( !selectBgmCpkObj )
      sub_1C7BD40(0, v37);
    v39 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(selectBgmCpkObj, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v19 = UnityEngine_Object__op_Equality(gameObject, v39, 0);
  }
  v19 = 1;
LABEL_41:
  v40 = *(_QWORD *)v24;
  v41 = *(unsigned __int16 *)(*(_QWORD *)v24 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v24 + 302LL) )
  {
    v42 = (int *)(*(_QWORD *)(v40 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v42 - 1) != System_IDisposable_TypeInfo )
    {
      --v41;
      v42 += 4;
      if ( !v41 )
        goto LABEL_45;
    }
    v43 = v40 + 16LL * *v42 + 312;
  }
  else
  {
LABEL_45:
    v43 = sub_1C51E70(v24, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v43)(v24, *(_QWORD *)(v43 + 8));
  if ( (v19 & 1) != 0 )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v34, 0, 0) )
      v34 = (UnityEngine_Component_o *)v25;
  }
  v50 = *v13;
  this->fields.cpkSearchNamePrev = *v13;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.cpkSearchNamePrev,
    (int32_t)v50,
    v44,
    v45,
    v46,
    v47,
    v48,
    v49);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  bgmCpkGrid = (UIGrid_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v34, 0, 0);
  if ( ((unsigned __int8)bgmCpkGrid & 1) != 0 )
  {
    if ( v34 )
    {
      bgmCpkGrid = (UIGrid_o *)UnityEngine_Component__GetComponent_object_(
                                 v34,
                                 (const MethodInfo_3166BC4 *)Method_UnityEngine_Component_GetComponent_UILabel___);
      if ( bgmCpkGrid )
      {
        v51 = (SoundTestMenu_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)bgmCpkGrid, 0);
        SoundTestMenu__selectItem(v51, (UILabel_o **)&selectBgmCpkObj, (UnityEngine_GameObject_o *)v51, v52);
        SoundTestMenu__offsetSelectObj(this, bgmCpkScrollView, (UILabel_o **)&selectBgmCpkObj, v75, bgmCpkList, 0, v53);
        v54 = (int)selectBgmCpkObj;
        this->fields.selectBgmCpkObj = (struct UILabel_o *)selectBgmCpkObj;
        sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.selectBgmCpkObj, v54, v55, v56, v57, v58, v59, v60);
        SoundTestMenu__createBgmPlayList(this, v61);
        return;
      }
    }
LABEL_68:
    sub_1C7BD40(bgmCpkGrid, v4);
  }
  bgmCpkGrid = (UIGrid_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v62 = (CommonUI_o *)bgmCpkGrid;
  v63 = SoundTestMenu___c_TypeInfo;
  if ( !SoundTestMenu___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SoundTestMenu___c_TypeInfo);
    v63 = SoundTestMenu___c_TypeInfo;
  }
  _9__139_1 = v63->static_fields->__9__139_1;
  v65 = (System_String_o *)StringLiteral_25645/*"そのサウンドはcpkリスト内に存在しません"*/;
  v66 = (System_String_o *)StringLiteral_1/*""*/;
  if ( !_9__139_1 )
  {
    if ( !v63->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v63);
      v63 = SoundTestMenu___c_TypeInfo;
    }
    v67 = (Il2CppObject *)v63->static_fields->__9;
    _9__139_1 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
    System_Action___ctor(_9__139_1, v67, Method_SoundTestMenu___c__onClickCpkSearchButton_b__139_1__, 0);
    static_fields = SoundTestMenu___c_TypeInfo->static_fields;
    static_fields->__9__139_1 = _9__139_1;
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__139_1,
      (int32_t)_9__139_1,
      v69,
      v70,
      v71,
      v72,
      v73,
      v74);
  }
  if ( !v62 )
    goto LABEL_68;
  CommonUI__OpenNotificationDialog(v62, v66, v65, _9__139_1, -1, 0, 0, 0, 0, 0, 1, 0, 0, 0.0, 0, 0);
}


void SoundTestMenu__onClickCpkSortButton(SoundTestMenu_o *this, const MethodInfo *method)
{
  int32_t sortCpkType; // w21
  Il2CppType *v4; // x20
  System_RuntimeTypeHandle_o v5; // x0
  System_Type_o *TypeFromHandle; // x20
  System_String_array *Names; // x0
  const MethodInfo *v8; // x1

  if ( (byte_4CEBD2B & 1) == 0 )
  {
    sub_1C7BAE8(&System_Enum_TypeInfo);
    sub_1C7BAE8(&SoundTestMenu_SortType_var);
    sub_1C7BAE8(&System_Type_TypeInfo);
    byte_4CEBD2B = 1;
  }
  sortCpkType = this->fields.sortCpkType;
  v4 = SoundTestMenu_SortType_var;
  if ( !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v5.fields.value = (intptr_t)v4;
  TypeFromHandle = System_Type__GetTypeFromHandle(v5, 0);
  if ( !System_Enum_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Enum_TypeInfo);
  Names = System_Enum__GetNames(TypeFromHandle, 0);
  if ( !Names )
    sub_1C7BD40(0, v8);
  this->fields.sortCpkType = (sortCpkType + 1) % SLODWORD(Names->max_length);
  SoundTestMenu__sortCpkApply(this, v8);
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
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  struct UIPopupList_o *voicePrefixList; // x8
  System_String_o *mSelectedItem; // x22
  System_String_o *Text; // x0
  System_String_o **v15; // x21
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  _BOOL8 v28; // x0
  const MethodInfo *v29; // x2
  System_String_o *loadSeCueSheetName; // x1
  int32_t v31; // w2
  int32_t v32; // w3
  System_String_o *v33; // x4
  int32_t v34; // w5
  int64_t v35; // x6
  System_String_o *v36; // x7
  System_Collections_Generic_List_string__o *inputSeCueName; // x21
  System_String_o *v38; // x22
  System_Action_o *v39; // x23
  const MethodInfo *v40; // x4

  if ( (byte_4CEBD0D & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_string__Contains__);
    sub_1C7BAE8(&Method_SoundTestMenu___c__DisplayClass100_0__onClickSeOpenCue_b__0__);
    sub_1C7BAE8(&SoundTestMenu___c__DisplayClass100_0_TypeInfo);
    sub_1C7BAE8(&StringLiteral_9302/*"NONE"*/);
    byte_4CEBD0D = 1;
  }
  v3 = sub_1C7BD34(SoundTestMenu___c__DisplayClass100_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    goto LABEL_18;
  *(_QWORD *)(v3 + 16) = this;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v3 + 16), (int32_t)this, v6, v7, v8, v9, v10, v11);
  voicePrefixList = this->fields.voicePrefixList;
  if ( !voicePrefixList
    || (seAssetNameInput = this->fields.seAssetNameInput) == 0
    || (mSelectedItem = voicePrefixList->fields.mSelectedItem,
        Text = UILineInput__GetText(seAssetNameInput, 0),
        *(_QWORD *)(v3 + 24) = Text,
        v15 = (System_String_o **)(v3 + 24),
        sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v3 + 24), (int32_t)Text, v16, v17, v18, v19, v20, v21),
        (seAssetNameInput = (UILineInput_o *)this->fields.exclusionList) == 0) )
  {
LABEL_18:
    sub_1C7BD40(seAssetNameInput, v5);
  }
  if ( System_Collections_Generic_List_object___Contains(
         (System_Collections_Generic_List_object__o *)seAssetNameInput,
         (Il2CppObject *)mSelectedItem,
         (const MethodInfo_383F18C *)Method_System_Collections_Generic_List_string__Contains__) )
  {
    if ( !System_String__op_Inequality(mSelectedItem, (System_String_o *)StringLiteral_9302/*"NONE"*/, 0) )
      goto LABEL_12;
  }
  else
  {
    mSelectedItem = System_String__Concat_64176912(mSelectedItem, *v15, 0);
  }
  *v15 = mSelectedItem;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v3 + 24), (int32_t)mSelectedItem, v22, v23, v24, v25, v26, v27);
LABEL_12:
  v28 = System_String__op_Equality(this->fields.loadSeCueSheetName, *v15, 0);
  if ( !v28 && !this->fields.isLoadingSeCueSheet )
  {
    loadSeCueSheetName = this->fields.loadSeCueSheetName;
    if ( loadSeCueSheetName )
    {
      SoundTestMenu__releaseSe((SoundTestMenu_o *)v28, loadSeCueSheetName, v29);
      this->fields.loadSeCueSheetName = 0;
      sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.loadSeCueSheetName, 0, v31, v32, v33, v34, v35, v36);
    }
    inputSeCueName = this->fields.inputSeCueName;
    this->fields.isLoadingSeCueSheet = 1;
    v38 = *(System_String_o **)(v3 + 24);
    v39 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
    System_Action___ctor(
      v39,
      (Il2CppObject *)v3,
      Method_SoundTestMenu___c__DisplayClass100_0__onClickSeOpenCue_b__0__,
      0);
    SoundTestMenu__openCueList(this, v38, inputSeCueName, v39, v40);
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
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  System_String_o **v13; // x21
  bool activeSelf; // w0
  __int64 v15; // x8
  bool v16; // w8
  bool v17; // zf
  __int64 v18; // x8
  UIScrollView_o *v19; // x20
  bool v20; // w8
  __int64 v21; // x8
  UIGrid_o *v22; // x22
  bool v23; // w8
  __int64 v24; // x8
  System_String_o **v25; // x9
  bool v26; // w26
  System_Func_object__bool__o *v27; // x27
  UnityEngine_GameObject_c *klass; // x8
  UnityEngine_GameObject_o *v29; // x24
  char v30; // w26
  __int64 v31; // x9
  int32_t *p_offset; // x10
  __int64 v33; // x0
  __int64 v34; // x1
  __int64 v35; // x24
  UnityEngine_Object_o *v36; // x25
  __int64 v37; // x8
  __int64 v38; // x9
  int *v39; // x10
  __int64 v40; // x0
  __int64 v41; // x8
  __int64 v42; // x9
  int *v43; // x10
  __int64 v44; // x0
  UnityEngine_Component_o *v45; // x27
  _BOOL8 v46; // x0
  __int64 v47; // x1
  __int64 v48; // x1
  UnityEngine_Object_o *gameObject; // x26
  UnityEngine_Object_o *v50; // x27
  __int64 v51; // x8
  __int64 v52; // x9
  int *v53; // x10
  __int64 v54; // x0
  bool v55; // w0
  int32_t v56; // w2
  int32_t v57; // w3
  System_String_o *v58; // x4
  int32_t v59; // w5
  int64_t v60; // x6
  System_String_o *v61; // x7
  System_String_o *v62; // x1
  GrandQuestFolderBoardItem_o *p_seSearchNamePrev; // x0
  SoundTestMenu_o *v64; // x0
  const MethodInfo *v65; // x3
  const MethodInfo *v66; // x6
  bool v67; // w0
  int32_t v68; // w2
  int32_t v69; // w3
  System_String_o *v70; // x4
  int32_t v71; // w5
  int64_t v72; // x6
  System_String_o *v73; // x7
  int32_t v74; // w1
  GrandQuestFolderBoardItem_o *p_selectSeObj; // x0
  CommonUI_o *v76; // x19
  SoundTestMenu___c_c *v77; // x8
  System_Action_o *_9__134_1; // x22
  System_String_o *v79; // x20
  System_String_o *v80; // x21
  Il2CppObject *v81; // x23
  struct SoundTestMenu___c_StaticFields *static_fields; // x0
  int32_t v83; // w2
  int32_t v84; // w3
  System_String_o *v85; // x4
  int32_t v86; // w5
  int64_t v87; // x6
  System_String_o *v88; // x7
  System_Collections_Generic_List_string__o *cueNameList; // [xsp+40h] [xbp-80h]
  UnityEngine_Component_o *v90; // [xsp+58h] [xbp-68h] BYREF

  if ( (byte_4CEBD28 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_UnityEngine_Component_GetComponent_UILabel___);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_Where_Transform___);
    sub_1C7BAE8(&System_Func_Transform__bool__TypeInfo);
    sub_1C7BAE8(&System_IDisposable_TypeInfo);
    sub_1C7BAE8(&System_Collections_Generic_IEnumerable_Transform__TypeInfo);
    sub_1C7BAE8(&System_Collections_Generic_IEnumerator_Transform__TypeInfo);
    sub_1C7BAE8(&System_Collections_IEnumerator_TypeInfo);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C7BAE8(&Method_SoundTestMenu___c__onClickSearchButton_b__134_1__);
    sub_1C7BAE8(&Method_SoundTestMenu___c__DisplayClass134_0__onClickSearchButton_b__0__);
    sub_1C7BAE8(&SoundTestMenu___c__DisplayClass134_0_TypeInfo);
    sub_1C7BAE8(&SoundTestMenu___c_TypeInfo);
    sub_1C7BAE8(&StringLiteral_25646/*"そのサウンドはcpk内に存在しません"*/);
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    byte_4CEBD28 = 1;
  }
  v3 = sub_1C7BD34(SoundTestMenu___c__DisplayClass134_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  seRoot = this->fields.seRoot;
  if ( !seRoot )
    goto LABEL_100;
  if ( UnityEngine_GameObject__get_activeSelf(seRoot, 0) )
  {
    seRoot = (UnityEngine_GameObject_o *)this->fields.seGrid;
    if ( !seRoot )
      goto LABEL_100;
  }
  else
  {
    seRoot = (UnityEngine_GameObject_o *)this->fields.bgmGrid;
    if ( !seRoot )
      goto LABEL_100;
  }
  seRoot = (UnityEngine_GameObject_o *)UIGrid__GetChildList((UIGrid_o *)seRoot, 0);
  if ( !this->fields.seRoot )
    goto LABEL_100;
  v6 = (System_Collections_Generic_IEnumerable_TSource__o *)seRoot;
  if ( UnityEngine_GameObject__get_activeSelf(this->fields.seRoot, 0) )
  {
    seRoot = (UnityEngine_GameObject_o *)this->fields.seSearchNameInput;
    if ( !seRoot )
      goto LABEL_100;
  }
  else
  {
    seRoot = (UnityEngine_GameObject_o *)this->fields.bgmSearchNameInput;
    if ( !seRoot )
      goto LABEL_100;
  }
  seRoot = (UnityEngine_GameObject_o *)UILineInput__GetText((UILineInput_o *)seRoot, 0);
  if ( !v3 )
    goto LABEL_100;
  *(_QWORD *)(v3 + 16) = seRoot;
  v13 = (System_String_o **)(v3 + 16);
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v3 + 16), (int32_t)seRoot, v7, v8, v9, v10, v11, v12);
  seRoot = this->fields.seRoot;
  if ( !seRoot )
    goto LABEL_100;
  activeSelf = UnityEngine_GameObject__get_activeSelf(seRoot, 0);
  v15 = 264;
  if ( activeSelf )
    v15 = 416;
  v90 = *(UnityEngine_Component_o **)((char *)&this->klass + v15);
  seRoot = this->fields.seRoot;
  if ( !seRoot )
    goto LABEL_100;
  v16 = UnityEngine_GameObject__get_activeSelf(seRoot, 0);
  seRoot = this->fields.seRoot;
  v17 = !v16;
  v18 = 152;
  if ( !v17 )
    v18 = 392;
  if ( !seRoot )
    goto LABEL_100;
  v19 = *(UIScrollView_o **)((char *)&this->klass + v18);
  v20 = UnityEngine_GameObject__get_activeSelf(seRoot, 0);
  seRoot = this->fields.seRoot;
  v17 = !v20;
  v21 = 248;
  if ( !v17 )
    v21 = 408;
  if ( !seRoot )
    goto LABEL_100;
  v22 = *(UIGrid_o **)((char *)&this->klass + v21);
  v23 = UnityEngine_GameObject__get_activeSelf(seRoot, 0);
  seRoot = this->fields.seRoot;
  v17 = !v23;
  v24 = 280;
  if ( !v17 )
    v24 = 424;
  if ( !seRoot )
    goto LABEL_100;
  cueNameList = *(System_Collections_Generic_List_string__o **)((char *)&this->klass + v24);
  seRoot = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_activeSelf(seRoot, 0);
  if ( !*v13 )
    goto LABEL_100;
  v25 = ((unsigned __int8)seRoot & 1) != 0 ? &this->fields.seSearchNamePrev : &this->fields.bgmSearchNamePrev;
  v26 = System_String__Equals_64212232(*v13, *v25, 0);
  v27 = (System_Func_object__bool__o *)sub_1C7BD34(System_Func_Transform__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v27,
    (Il2CppObject *)v3,
    Method_SoundTestMenu___c__DisplayClass134_0__onClickSearchButton_b__0__,
    0);
  seRoot = (UnityEngine_GameObject_o *)System_Linq_Enumerable__Where_object_(
                                         v6,
                                         (System_Func_TSource__bool__o *)v27,
                                         (const MethodInfo_31B6300 *)Method_System_Linq_Enumerable_Where_Transform___);
  if ( !seRoot )
    goto LABEL_100;
  klass = seRoot->klass;
  v29 = seRoot;
  v30 = !v26;
  v31 = *(unsigned __int16 *)&seRoot->klass->_2.rank;
  if ( *(_WORD *)&seRoot->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_Transform__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_Transform__TypeInfo )
    {
      --v31;
      p_offset += 4;
      if ( !v31 )
        goto LABEL_36;
    }
    v33 = (__int64)&klass->vtable + 16 * *p_offset;
  }
  else
  {
LABEL_36:
    v33 = sub_1C51E70(seRoot, System_Collections_Generic_IEnumerable_Transform__TypeInfo, 0);
  }
  v35 = (*(__int64 (__fastcall **)(UnityEngine_GameObject_o *, _QWORD))v33)(v29, *(_QWORD *)(v33 + 8));
  if ( !v35 )
    sub_1C7BD40(0, v34);
  v36 = 0;
  while ( 1 )
  {
    v37 = *(_QWORD *)v35;
    v38 = *(unsigned __int16 *)(*(_QWORD *)v35 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v35 + 302LL) )
    {
      v39 = (int *)(*(_QWORD *)(v37 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v39 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v38;
        v39 += 4;
        if ( !v38 )
          goto LABEL_44;
      }
      v40 = v37 + 16LL * *v39 + 312;
    }
    else
    {
LABEL_44:
      v40 = sub_1C51E70(v35, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v40)(v35, *(_QWORD *)(v40 + 8)) & 1) == 0 )
    {
      v45 = 0;
      goto LABEL_65;
    }
    v41 = *(_QWORD *)v35;
    v42 = *(unsigned __int16 *)(*(_QWORD *)v35 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v35 + 302LL) )
    {
      v43 = (int *)(*(_QWORD *)(v41 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_Transform__c **)v43 - 1) != System_Collections_Generic_IEnumerator_Transform__TypeInfo )
      {
        --v42;
        v43 += 4;
        if ( !v42 )
          goto LABEL_51;
      }
      v44 = v41 + 16LL * *v43 + 312;
    }
    else
    {
LABEL_51:
      v44 = sub_1C51E70(v35, System_Collections_Generic_IEnumerator_Transform__TypeInfo, 0);
    }
    v45 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v44)(v35, *(_QWORD *)(v44 + 8));
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v46 = UnityEngine_Object__op_Equality(v36, 0, 0);
    if ( v46 )
      v36 = (UnityEngine_Object_o *)v45;
    if ( (v30 & 1) != 0 )
      break;
    if ( !v45 )
      sub_1C7BD40(v46, v47);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v45, 0);
    if ( !v90 )
      sub_1C7BD40(0, v48);
    v50 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v90, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v30 = UnityEngine_Object__op_Equality(gameObject, v50, 0);
  }
  v30 = 1;
LABEL_65:
  v51 = *(_QWORD *)v35;
  v52 = *(unsigned __int16 *)(*(_QWORD *)v35 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v35 + 302LL) )
  {
    v53 = (int *)(*(_QWORD *)(v51 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v53 - 1) != System_IDisposable_TypeInfo )
    {
      --v52;
      v53 += 4;
      if ( !v52 )
        goto LABEL_69;
    }
    v54 = v51 + 16LL * *v53 + 312;
  }
  else
  {
LABEL_69:
    v54 = sub_1C51E70(v35, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v54)(v35, *(_QWORD *)(v54 + 8));
  if ( (v30 & 1) != 0 )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v45, 0, 0) )
      v45 = (UnityEngine_Component_o *)v36;
  }
  seRoot = this->fields.seRoot;
  if ( !seRoot )
    goto LABEL_100;
  v55 = UnityEngine_GameObject__get_activeSelf(seRoot, 0);
  v62 = *v13;
  if ( v55 )
    p_seSearchNamePrev = (GrandQuestFolderBoardItem_o *)&this->fields.seSearchNamePrev;
  else
    p_seSearchNamePrev = (GrandQuestFolderBoardItem_o *)&this->fields.bgmSearchNamePrev;
  p_seSearchNamePrev->klass = (GrandQuestFolderBoardItem_c *)v62;
  sub_1C7BA8C(p_seSearchNamePrev, (int32_t)v62, v56, v57, v58, v59, v60, v61);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  seRoot = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v45, 0, 0);
  if ( ((unsigned __int8)seRoot & 1) == 0 )
  {
    seRoot = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v76 = (CommonUI_o *)seRoot;
    v77 = SoundTestMenu___c_TypeInfo;
    if ( !SoundTestMenu___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundTestMenu___c_TypeInfo);
      v77 = SoundTestMenu___c_TypeInfo;
    }
    _9__134_1 = v77->static_fields->__9__134_1;
    v79 = (System_String_o *)StringLiteral_25646/*"そのサウンドはcpk内に存在しません"*/;
    v80 = (System_String_o *)StringLiteral_1/*""*/;
    if ( !_9__134_1 )
    {
      if ( !v77->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v77);
        v77 = SoundTestMenu___c_TypeInfo;
      }
      v81 = (Il2CppObject *)v77->static_fields->__9;
      _9__134_1 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
      System_Action___ctor(_9__134_1, v81, Method_SoundTestMenu___c__onClickSearchButton_b__134_1__, 0);
      static_fields = SoundTestMenu___c_TypeInfo->static_fields;
      static_fields->__9__134_1 = _9__134_1;
      sub_1C7BA8C(
        (GrandQuestFolderBoardItem_o *)&static_fields->__9__134_1,
        (int32_t)_9__134_1,
        v83,
        v84,
        v85,
        v86,
        v87,
        v88);
    }
    if ( v76 )
    {
      CommonUI__OpenNotificationDialog(v76, v80, v79, _9__134_1, -1, 0, 0, 0, 0, 0, 1, 0, 0, 0.0, 0, 0);
      return;
    }
LABEL_100:
    sub_1C7BD40(seRoot, v4);
  }
  if ( !v45 )
    goto LABEL_100;
  seRoot = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                         v45,
                                         (const MethodInfo_3166BC4 *)Method_UnityEngine_Component_GetComponent_UILabel___);
  if ( !seRoot )
    goto LABEL_100;
  v64 = (SoundTestMenu_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)seRoot, 0);
  SoundTestMenu__selectItem(v64, (UILabel_o **)&v90, (UnityEngine_GameObject_o *)v64, v65);
  SoundTestMenu__offsetSelectObj(this, v19, (UILabel_o **)&v90, v22, cueNameList, 0, v66);
  seRoot = this->fields.seRoot;
  if ( !seRoot )
    goto LABEL_100;
  v67 = UnityEngine_GameObject__get_activeSelf(seRoot, 0);
  v74 = (int)v90;
  if ( v67 )
    p_selectSeObj = (GrandQuestFolderBoardItem_o *)&this->fields.selectSeObj;
  else
    p_selectSeObj = (GrandQuestFolderBoardItem_o *)&this->fields.selectBgmObj;
  p_selectSeObj->klass = (GrandQuestFolderBoardItem_c *)v90;
  sub_1C7BA8C(p_selectSeObj, v74, v68, v69, v70, v71, v72, v73);
}


void SoundTestMenu__onClickSortButton(SoundTestMenu_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *seRoot; // x0
  int32_t sortTypeSe; // w21
  Il2CppType *v5; // x20
  System_RuntimeTypeHandle_o v6; // x0
  System_Type_o *v7; // x20
  int32_t sortTypeBgm; // w21
  Il2CppType *v9; // x20
  System_RuntimeTypeHandle_o v10; // x0
  System_Type_o *TypeFromHandle; // x20

  if ( (byte_4CEBD25 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Enum_TypeInfo);
    sub_1C7BAE8(&SoundTestMenu_SortType_var);
    sub_1C7BAE8(&System_Type_TypeInfo);
    byte_4CEBD25 = 1;
  }
  seRoot = this->fields.seRoot;
  if ( !seRoot )
    goto LABEL_18;
  if ( !UnityEngine_GameObject__get_activeSelf(seRoot, 0) )
  {
    sortTypeBgm = this->fields.sortTypeBgm;
    v9 = SoundTestMenu_SortType_var;
    if ( !System_Type_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
    v10.fields.value = (intptr_t)v9;
    TypeFromHandle = System_Type__GetTypeFromHandle(v10, 0);
    if ( !System_Enum_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Enum_TypeInfo);
    seRoot = (UnityEngine_GameObject_o *)System_Enum__GetNames(TypeFromHandle, 0);
    if ( seRoot )
    {
      this->fields.sortTypeBgm = (sortTypeBgm + 1) % SLODWORD(seRoot[1].klass);
      goto LABEL_17;
    }
LABEL_18:
    sub_1C7BD40(seRoot, method);
  }
  sortTypeSe = this->fields.sortTypeSe;
  v5 = SoundTestMenu_SortType_var;
  if ( !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v6.fields.value = (intptr_t)v5;
  v7 = System_Type__GetTypeFromHandle(v6, 0);
  if ( !System_Enum_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Enum_TypeInfo);
  seRoot = (UnityEngine_GameObject_o *)System_Enum__GetNames(v7, 0);
  if ( !seRoot )
    goto LABEL_18;
  this->fields.sortTypeSe = (sortTypeSe + 1) % SLODWORD(seRoot[1].klass);
LABEL_17:
  SoundTestMenu__sortApply(this, method);
}


void SoundTestMenu__open(SoundTestMenu_o *this, SoundTestMenu_CallbackFunc_o *callback, const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct SoundTestMenu_CallbackFunc_o *v8; // x20
  int *rootObject; // x0
  Il2CppObject *Component_object; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  struct UIGrid_o *bgmGrid; // x20
  System_Comparison_T__o *v19; // x21
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  Il2CppObject *v26; // x0
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x4
  int32_t v30; // w5
  int64_t v31; // x6
  System_String_o *v32; // x7
  struct UIGrid_o *bgmCpkGrid; // x20
  System_Comparison_T__o *v34; // x21
  int32_t v35; // w2
  int32_t v36; // w3
  System_String_o *v37; // x4
  int32_t v38; // w5
  int64_t v39; // x6
  System_String_o *v40; // x7
  Il2CppObject *v41; // x0
  int32_t v42; // w2
  int32_t v43; // w3
  System_String_o *v44; // x4
  int32_t v45; // w5
  int64_t v46; // x6
  System_String_o *v47; // x7
  struct UIGrid_o *seGrid; // x20
  System_Comparison_T__o *v49; // x21
  int32_t v50; // w2
  int32_t v51; // w3
  System_String_o *v52; // x4
  int32_t v53; // w5
  int64_t v54; // x6
  System_String_o *v55; // x7
  struct System_Collections_Generic_List_string__o *bgmCpkList; // x8
  int32_t size; // w2
  int v58; // w9
  System_String_o *CpkPath; // x0
  const MethodInfo *v60; // x7
  int v61; // w8
  int *v62; // x20
  __int64 v63; // x22
  System_String_o *v64; // x21
  System_String_o *v65; // x21
  int32_t v66; // w2
  int32_t v67; // w3
  System_String_o *v68; // x4
  int32_t v69; // w5
  int64_t v70; // x6
  System_String_o *v71; // x7
  __int64 v72; // x9
  int *v73; // x8
  char *v74; // x8
  __int64 v75; // x9
  _QWORD *v76; // x8
  __int64 v77; // x10
  __int64 v78; // x8
  struct UILabel_o *ItemBgm; // x0
  int32_t v80; // w2
  int32_t v81; // w3
  System_String_o *v82; // x4
  int32_t v83; // w5
  int64_t v84; // x6
  System_String_o *v85; // x7
  struct System_Collections_Generic_List_string__o *v86; // x8
  UILabel_o *bgmCpkCount; // x20
  System_String_o *v88; // x0
  const MethodInfo *v89; // x1
  const MethodInfo *v90; // x2
  struct System_Collections_Generic_List_string__o *v91; // x8
  int32_t v92; // w3
  System_String_o *v93; // x4
  int32_t v94; // w5
  int64_t v95; // x6
  System_String_o *v96; // x7
  unsigned __int64 i; // x22
  struct System_String_array *sePrefixList; // x8
  UIPopupList_o *voicePrefixList; // x20
  struct System_Collections_Generic_List_string__o *exclusionList; // x8
  int32_t v101; // w2
  int v102; // w9
  __int64 j; // x22
  System_Collections_Generic_List_object__o *v104; // x20
  __int64 v105; // x8
  struct System_Object_array *items; // x8
  _QWORD *v107; // x9
  __int64 v108; // x10
  Il2CppClass **v109; // x0
  const MethodInfo *v110; // x1
  const MethodInfo *v111; // x1
  const MethodInfo *v112; // x1
  const MethodInfo *v113; // x1
  int32_t v114; // [xsp+Ch] [xbp-64h] BYREF

  v8 = callback;
  if ( (byte_4CEBD04 & 1) == 0 )
  {
    sub_1C7BAE8(&AssetData_TypeInfo);
    sub_1C7BAE8(&System_Comparison_Transform__TypeInfo);
    sub_1C7BAE8(&Method_UnityEngine_Component_GetComponent_Collider___);
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_UIGrid___);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_string__Clear__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1C7BAE8(&System_IO_Path_TypeInfo);
    sub_1C7BAE8(&SoundManager_TypeInfo);
    sub_1C7BAE8(&Method_SoundTestMenu_customCpkSort__);
    sub_1C7BAE8(&Method_SoundTestMenu_customSort__);
    sub_1C7BAE8(&SoundTestMenu_TypeInfo);
    sub_1C7BAE8(&StringLiteral_1018/*".cpk.bytes"*/);
    sub_1C7BAE8(&StringLiteral_800/*"*BGM_*.cpk.bytes"*/);
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    sub_1C7BAE8(&StringLiteral_4836/*"Cpk数 : "*/);
    byte_4CEBD04 = 1;
  }
  v114 = 0;
  if ( !this->fields.state )
  {
    this->fields.endCallbackFunc = v8;
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)&this->fields.endCallbackFunc,
      (int32_t)v8,
      (int32_t)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    rootObject = (int *)this->fields.rootObject;
    if ( !rootObject )
      goto LABEL_67;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)rootObject, 1, 0);
    rootObject = (int *)this->fields.seAssetNameInput;
    if ( !rootObject )
      goto LABEL_67;
    UILineInput__SetInputEnable((UILineInput_o *)rootObject, 1, 0);
    rootObject = (int *)this->fields.bgmItemParent;
    if ( !rootObject )
      goto LABEL_67;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)rootObject,
                         (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_UIGrid___);
    this->fields.bgmGrid = (struct UIGrid_o *)Component_object;
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)&this->fields.bgmGrid,
      (int32_t)Component_object,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
    bgmGrid = this->fields.bgmGrid;
    v19 = (System_Comparison_T__o *)sub_1C7BD34(System_Comparison_Transform__TypeInfo);
    System_Comparison_object____ctor(v19, (Il2CppObject *)this, Method_SoundTestMenu_customSort__, 0);
    if ( !bgmGrid )
      goto LABEL_67;
    bgmGrid->fields.onCustomSort = (struct System_Comparison_Transform__o *)v19;
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)&bgmGrid->fields.onCustomSort,
      (int32_t)v19,
      v20,
      v21,
      v22,
      v23,
      v24,
      v25);
    rootObject = (int *)this->fields.bgmCpkItemParent;
    if ( !rootObject )
      goto LABEL_67;
    v26 = UnityEngine_GameObject__GetComponent_object_(
            (UnityEngine_GameObject_o *)rootObject,
            (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_UIGrid___);
    this->fields.bgmCpkGrid = (struct UIGrid_o *)v26;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.bgmCpkGrid, (int32_t)v26, v27, v28, v29, v30, v31, v32);
    bgmCpkGrid = this->fields.bgmCpkGrid;
    v34 = (System_Comparison_T__o *)sub_1C7BD34(System_Comparison_Transform__TypeInfo);
    System_Comparison_object____ctor(v34, (Il2CppObject *)this, Method_SoundTestMenu_customCpkSort__, 0);
    if ( !bgmCpkGrid )
      goto LABEL_67;
    bgmCpkGrid->fields.onCustomSort = (struct System_Comparison_Transform__o *)v34;
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)&bgmCpkGrid->fields.onCustomSort,
      (int32_t)v34,
      v35,
      v36,
      v37,
      v38,
      v39,
      v40);
    rootObject = (int *)this->fields.seItemParent;
    if ( !rootObject )
      goto LABEL_67;
    v41 = UnityEngine_GameObject__GetComponent_object_(
            (UnityEngine_GameObject_o *)rootObject,
            (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_UIGrid___);
    this->fields.seGrid = (struct UIGrid_o *)v41;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.seGrid, (int32_t)v41, v42, v43, v44, v45, v46, v47);
    seGrid = this->fields.seGrid;
    v49 = (System_Comparison_T__o *)sub_1C7BD34(System_Comparison_Transform__TypeInfo);
    System_Comparison_object____ctor(v49, (Il2CppObject *)this, Method_SoundTestMenu_customSort__, 0);
    if ( !seGrid )
      goto LABEL_67;
    seGrid->fields.onCustomSort = (struct System_Comparison_Transform__o *)v49;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&seGrid->fields.onCustomSort, (int32_t)v49, v50, v51, v52, v53, v54, v55);
    bgmCpkList = this->fields.bgmCpkList;
    if ( !bgmCpkList )
      goto LABEL_67;
    size = bgmCpkList->fields._size;
    v58 = bgmCpkList->fields._version + 1;
    bgmCpkList->fields._size = 0;
    bgmCpkList->fields._version = v58;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)bgmCpkList->fields._items, 0, size, 0);
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    CpkPath = SoundManager__getCpkPath(0);
    rootObject = (int *)System_IO_Directory__GetFiles_65037232(CpkPath, (System_String_o *)StringLiteral_800/*"*BGM_*.cpk.bytes"*/, 1, 0);
    if ( !rootObject )
      goto LABEL_67;
    v61 = rootObject[6];
    v62 = rootObject;
    if ( v61 >= 1 )
    {
      v63 = 0;
      while ( 1 )
      {
        if ( (unsigned int)v63 >= v61 )
LABEL_68:
          sub_1C7BD48(rootObject);
        v64 = *(System_String_o **)&v62[2 * v63 + 8];
        if ( !System_IO_Path_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_IO_Path_TypeInfo);
        rootObject = (int *)System_IO_Path__GetFileName(v64, 0);
        if ( !rootObject )
          break;
        rootObject = (int *)System_String__Replace_64223476(
                              (System_String_o *)rootObject,
                              (System_String_o *)StringLiteral_1018/*".cpk.bytes"*/,
                              (System_String_o *)StringLiteral_1/*""*/,
                              0);
        v65 = (System_String_o *)rootObject;
        if ( !AssetData_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AssetData_TypeInfo);
        if ( !v65 )
          break;
        rootObject = (int *)System_String__Split(
                              v65,
                              AssetData_TypeInfo->static_fields->ASSETBUNDLE_SPLIT_CACHE_CHAR,
                              0,
                              0);
        if ( !rootObject )
          break;
        v72 = *((_QWORD *)rootObject + 3);
        v73 = rootObject;
        if ( !(_DWORD)v72 )
          goto LABEL_68;
        rootObject = (int *)this->fields.bgmCpkList;
        if ( !rootObject )
          break;
        v74 = (char *)v73 + (((v72 << 32) - 0x100000000LL) >> 29);
        v75 = *((_QWORD *)rootObject + 2);
        callback = (SoundTestMenu_CallbackFunc_o *)*((_QWORD *)v74 + 4);
        v76 = Method_System_Collections_Generic_List_string__Add__;
        ++rootObject[7];
        if ( !v75 )
          break;
        v77 = rootObject[6];
        if ( (unsigned int)v77 >= *(_DWORD *)(v75 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)rootObject,
            (Il2CppObject *)callback,
            *(const MethodInfo_383EDFC **)(*(_QWORD *)(v76[4] + 192LL) + 112LL));
        }
        else
        {
          v78 = v75 + 8 * v77;
          rootObject[6] = v77 + 1;
          *(_QWORD *)(v78 + 32) = callback;
          sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v78 + 32), (int32_t)callback, v66, v67, v68, v69, v70, v71);
        }
        v114 = ++v63;
        v61 = v62[6];
        if ( (int)v63 >= v61 )
          goto LABEL_35;
      }
LABEL_67:
      sub_1C7BD40(rootObject, callback);
    }
LABEL_35:
    ItemBgm = SoundTestMenu__createItemBgm(
                this,
                this->fields.bgmCpkItemParent,
                this->fields.bgmCpkList,
                this->fields.bgmCpkGrid,
                this->fields.bgmCpkScrollView,
                this->fields.bgmCpkItemLabelSeed,
                0,
                v60);
    this->fields.selectBgmCpkObj = ItemBgm;
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)&this->fields.selectBgmCpkObj,
      (int32_t)ItemBgm,
      v80,
      v81,
      v82,
      v83,
      v84,
      v85);
    v86 = this->fields.bgmCpkList;
    if ( !v86 )
      goto LABEL_67;
    bgmCpkCount = this->fields.bgmCpkCount;
    v114 = v86->fields._size;
    v88 = System_Int32__ToString((int32_t)&v114, 0);
    rootObject = (int *)System_String__Concat_64176912((System_String_o *)StringLiteral_4836/*"Cpk数 : "*/, v88, 0);
    if ( !bgmCpkCount )
      goto LABEL_67;
    UILabel__set_text(bgmCpkCount, (System_String_o *)rootObject, 0);
    SoundTestMenu__createBgmPlayList(this, v89);
    v91 = this->fields.bgmCpkList;
    if ( !v91 )
      goto LABEL_67;
    SoundTestMenu__updateBgmPrevNextButton(this, v91->fields._size > 1, v90);
    rootObject = (int *)this->fields.voicePrefixList;
    if ( !rootObject )
      goto LABEL_67;
    UIPopupList__Clear((UIPopupList_o *)rootObject, 0);
    for ( i = 0; ; UIPopupList__AddItem(voicePrefixList, sePrefixList->m_Items[i++], 0) )
    {
      rootObject = (int *)SoundTestMenu_TypeInfo;
      if ( !SoundTestMenu_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundTestMenu_TypeInfo);
        rootObject = (int *)SoundTestMenu_TypeInfo;
      }
      sePrefixList = (struct System_String_array *)**((_QWORD **)rootObject + 23);
      if ( !sePrefixList )
        goto LABEL_67;
      if ( (__int64)i >= SLODWORD(sePrefixList->max_length) )
        break;
      voicePrefixList = this->fields.voicePrefixList;
      if ( !rootObject[56] )
      {
        j_il2cpp_runtime_class_init_0(rootObject);
        sePrefixList = SoundTestMenu_TypeInfo->static_fields->sePrefixList;
        if ( !sePrefixList )
          goto LABEL_67;
      }
      if ( i >= LODWORD(sePrefixList->max_length) )
        goto LABEL_68;
      if ( !voicePrefixList )
        goto LABEL_67;
    }
    exclusionList = this->fields.exclusionList;
    if ( !exclusionList )
      goto LABEL_67;
    v101 = exclusionList->fields._size;
    v102 = exclusionList->fields._version + 1;
    exclusionList->fields._size = 0;
    exclusionList->fields._version = v102;
    if ( v101 >= 1 )
      System_Array__Clear((System_Array_o *)exclusionList->fields._items, 0, v101, 0);
    for ( j = 9; j != 14; ++j )
    {
      rootObject = (int *)SoundTestMenu_TypeInfo;
      v104 = (System_Collections_Generic_List_object__o *)this->fields.exclusionList;
      if ( !SoundTestMenu_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundTestMenu_TypeInfo);
        rootObject = (int *)SoundTestMenu_TypeInfo;
      }
      v105 = **((_QWORD **)rootObject + 23);
      if ( !v105 )
        goto LABEL_67;
      if ( j - 4 >= (unsigned __int64)*(unsigned int *)(v105 + 24) )
        goto LABEL_68;
      if ( !v104 )
        goto LABEL_67;
      callback = *(SoundTestMenu_CallbackFunc_o **)(v105 + 8 * j);
      items = v104->fields._items;
      v107 = Method_System_Collections_Generic_List_string__Add__;
      ++v104->fields._version;
      if ( !items )
        goto LABEL_67;
      v108 = v104->fields._size;
      if ( (unsigned int)v108 >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v104,
          (Il2CppObject *)callback,
          *(const MethodInfo_383EDFC **)(*(_QWORD *)(v107[4] + 192LL) + 112LL));
      }
      else
      {
        v109 = &items->obj.klass + v108;
        v104->fields._size = v108 + 1;
        v109[4] = (Il2CppClass *)callback;
        sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v109 + 4), (int32_t)callback, v101, v92, v93, v94, v95, v96);
      }
    }
    this->fields.state = 1;
  }
  SoundTestMenu__sortApply(this, (const MethodInfo *)callback);
  SoundTestMenu__switchButtonLabelChange(this, v110);
  this->fields.isPlayBgm = 0;
  this->fields.isPlaySe = 0;
  SoundTestMenu__ResetBgmProgressBar(this, v111);
  SoundTestMenu__SetupVersionDiff(this, v112);
  SoundTestMenu__SetDiffSwitchButtonLabel(this, v113);
  rootObject = (int *)this->fields.cueListOutputButton;
  if ( !rootObject )
    goto LABEL_67;
  rootObject = (int *)UnityEngine_Component__GetComponent_object_(
                        (UnityEngine_Component_o *)rootObject,
                        (const MethodInfo_3166BC4 *)Method_UnityEngine_Component_GetComponent_Collider___);
  if ( !rootObject )
    goto LABEL_67;
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
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  int32_t v30; // w2
  int32_t v31; // w3
  System_String_o *v32; // x4
  int32_t v33; // w5
  int64_t v34; // x6
  System_String_o *v35; // x7
  CriAtomExAcb_o *Acb; // x0
  int32_t v37; // w2
  int32_t v38; // w3
  System_String_o *v39; // x4
  int32_t v40; // w5
  int64_t v41; // x6
  System_String_o *v42; // x7
  SoundTestMenu_o *v43; // x0
  const MethodInfo *v44; // x3
  CriAtomExAcb_o *v45; // x2
  System_String_o *v46; // x20
  System_Action_o *v47; // x21
  SoundTestMenu_o *v48; // x0
  const MethodInfo *v49; // x3

  if ( (byte_4CEBD14 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_SoundTestMenu___c__DisplayClass109_0__openCueList_b__0__);
    sub_1C7BAE8(&SoundTestMenu___c__DisplayClass109_0_TypeInfo);
    byte_4CEBD14 = 1;
  }
  v9 = sub_1C7BD34(SoundTestMenu___c__DisplayClass109_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    sub_1C7BD40(v10, v11);
  *(_QWORD *)(v9 + 24) = cueSheetName;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v9 + 24), (int32_t)cueSheetName, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v9 + 32) = this;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v9 + 32), (int32_t)this, v18, v19, v20, v21, v22, v23);
  *(_QWORD *)(v9 + 40) = cueNameList;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v9 + 40), (int32_t)cueNameList, v24, v25, v26, v27, v28, v29);
  *(_QWORD *)(v9 + 48) = callBack;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v9 + 48), (int32_t)callBack, v30, v31, v32, v33, v34, v35);
  Acb = CriAtom__GetAcb(*(System_String_o **)(v9 + 24), 0);
  *(_QWORD *)(v9 + 16) = Acb;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v9 + 16), (int32_t)Acb, v37, v38, v39, v40, v41, v42);
  v45 = *(CriAtomExAcb_o **)(v9 + 16);
  if ( v45 )
  {
    SoundTestMenu__setupCueNameList(v43, *(System_Collections_Generic_List_string__o **)(v9 + 40), v45, v44);
    ActionExtensions__Call(*(System_Action_o **)(v9 + 48), 0);
  }
  else
  {
    v46 = *(System_String_o **)(v9 + 24);
    v47 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
    System_Action___ctor(v47, (Il2CppObject *)v9, Method_SoundTestMenu___c__DisplayClass109_0__openCueList_b__0__, 0);
    SoundTestMenu__loadSE(v48, v46, v47, v49);
  }
}


void SoundTestMenu__playBgm(SoundTestMenu_o *this, const MethodInfo *method)
{
  struct UILabel_o *selectBgmObj; // x0
  System_String_o *name; // x0
  Il2CppObject *Item; // x20
  const MethodInfo *v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  System_String_o *playBgmCueSheetName; // x0
  struct System_String_o *loadBgmCueSheetName; // x1

  if ( (byte_4CEBD0A & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_1C7BAE8(&SoundManager_TypeInfo);
    sub_1C7BAE8(&StringLiteral_13142/*"Stop"*/);
    byte_4CEBD0A = 1;
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
               (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_string__get_Item__);
      if ( !SoundManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      SoundManager__playBgm((System_String_o *)Item, 0);
      selectBgmObj = this->fields.bgmPlayLabel;
      if ( !selectBgmObj )
LABEL_16:
        sub_1C7BD40(selectBgmObj, method);
      UILabel__set_text(selectBgmObj, (System_String_o *)StringLiteral_13142/*"Stop"*/, 0);
      playBgmCueSheetName = this->fields.playBgmCueSheetName;
      this->fields.isPlayBgm = 1;
      if ( playBgmCueSheetName )
      {
        if ( System_String__op_Inequality(playBgmCueSheetName, this->fields.loadBgmCueSheetName, 0) )
          SoundTestMenu__releaseBgm(this, this->fields.playBgmCueSheetName, v6);
      }
      loadBgmCueSheetName = this->fields.loadBgmCueSheetName;
      this->fields.playBgmCueSheetName = loadBgmCueSheetName;
      sub_1C7BA8C(
        (GrandQuestFolderBoardItem_o *)&this->fields.playBgmCueSheetName,
        (int32_t)loadBgmCueSheetName,
        (int32_t)v6,
        v7,
        v8,
        v9,
        v10,
        v11);
    }
  }
}


void SoundTestMenu__playSe(SoundTestMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  UILineInput_o *seAssetNameInput; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  System_String_o *Text; // x0
  System_String_o **v13; // x21
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  struct UIPopupList_o *voicePrefixList; // x8
  System_String_o *mSelectedItem; // x22
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  UnityEngine_Object_o *selectSeObj; // x22
  bool v29; // w0
  System_String_o *v30; // x22
  struct System_Collections_Generic_List_string__o *inputSeCueName; // x21
  System_Action_o *v32; // x23
  const MethodInfo *v33; // x4
  SoundTestMenu_o *v34; // x0
  System_String_o *v35; // x1
  System_Collections_Generic_List_string__o *v36; // x2
  _QWORD *v37; // x0
  System_Reflection_MethodBase_o *v38; // x0
  System_String_o **p_loadSeCueSheetName; // x22
  _BOOL8 v40; // x0
  const MethodInfo *v41; // x2
  char v42; // w22
  int32_t v43; // w2
  int32_t v44; // w3
  System_String_o *v45; // x4
  int32_t v46; // w5
  int64_t v47; // x6
  System_String_o *v48; // x7
  CriAtomExAcb_o *Acb; // x0
  const MethodInfo *v50; // x2
  System_String_o *v51; // x21
  struct System_Collections_Generic_List_string__o *v52; // x22

  if ( (byte_4CEBD0E & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_string__Contains__);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&Method_SoundTestMenu_playSe__);
    sub_1C7BAE8(&Method_SoundTestMenu___c__DisplayClass102_0__playSe_b__0__);
    sub_1C7BAE8(&Method_SoundTestMenu___c__DisplayClass102_0__playSe_b__1__);
    sub_1C7BAE8(&SoundTestMenu___c__DisplayClass102_0_TypeInfo);
    sub_1C7BAE8(&StringLiteral_9302/*"NONE"*/);
    byte_4CEBD0E = 1;
  }
  v3 = sub_1C7BD34(SoundTestMenu___c__DisplayClass102_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    goto LABEL_30;
  *(_QWORD *)(v3 + 24) = this;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v3 + 24), (int32_t)this, v6, v7, v8, v9, v10, v11);
  seAssetNameInput = this->fields.seAssetNameInput;
  if ( !seAssetNameInput )
    goto LABEL_30;
  Text = UILineInput__GetText(seAssetNameInput, 0);
  *(_QWORD *)(v3 + 16) = Text;
  v13 = (System_String_o **)(v3 + 16);
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v3 + 16), (int32_t)Text, v14, v15, v16, v17, v18, v19);
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
          (const MethodInfo_383F18C *)Method_System_Collections_Generic_List_string__Contains__) )
  {
    mSelectedItem = System_String__Concat_64176912(mSelectedItem, *v13, 0);
    goto LABEL_11;
  }
  if ( System_String__op_Inequality(mSelectedItem, (System_String_o *)StringLiteral_9302/*"NONE"*/, 0) )
  {
LABEL_11:
    *v13 = mSelectedItem;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v3 + 16), (int32_t)mSelectedItem, v22, v23, v24, v25, v26, v27);
  }
  selectSeObj = (UnityEngine_Object_o *)this->fields.selectSeObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v29 = UnityEngine_Object__op_Equality(selectSeObj, 0, 0);
  v30 = *v13;
  if ( v29 )
  {
    inputSeCueName = this->fields.inputSeCueName;
    v32 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
    System_Action___ctor(v32, (Il2CppObject *)v3, Method_SoundTestMenu___c__DisplayClass102_0__playSe_b__0__, 0);
    v34 = this;
    v35 = v30;
    v36 = inputSeCueName;
LABEL_29:
    SoundTestMenu__openCueList(v34, v35, v36, v32, v33);
    return;
  }
  if ( !System_String__IsNullOrEmpty(*v13, 0) )
  {
    if ( System_String__IsNullOrEmpty(this->fields.loadSeCueSheetName, 0) )
      goto LABEL_23;
    p_loadSeCueSheetName = &this->fields.loadSeCueSheetName;
    seAssetNameInput = (UILineInput_o *)this->fields.loadSeCueSheetName;
    if ( seAssetNameInput )
    {
      v40 = System_String__Equals_64212232((System_String_o *)seAssetNameInput, *v13, 0);
      if ( !v40 )
      {
        SoundTestMenu__releaseSe((SoundTestMenu_o *)v40, *p_loadSeCueSheetName, v41);
        *p_loadSeCueSheetName = 0;
        sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.loadSeCueSheetName, 0, v43, v44, v45, v46, v47, v48);
        v42 = 1;
LABEL_25:
        Acb = CriAtom__GetAcb(*v13, 0);
        v51 = *v13;
        if ( (v42 & 1) == 0 && Acb )
        {
          SoundTestMenu__playSeLocal(this, v51, v50);
          return;
        }
        v52 = this->fields.inputSeCueName;
        v32 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
        System_Action___ctor(v32, (Il2CppObject *)v3, Method_SoundTestMenu___c__DisplayClass102_0__playSe_b__1__, 0);
        v34 = this;
        v35 = v51;
        v36 = v52;
        goto LABEL_29;
      }
LABEL_23:
      v42 = 0;
      goto LABEL_25;
    }
LABEL_30:
    sub_1C7BD40(seAssetNameInput, v5);
  }
  v37 = Method_SoundTestMenu_playSe__;
  if ( (*((_BYTE *)Method_SoundTestMenu_playSe__ + 83) & 2) != 0 )
    v37 = (_QWORD *)sub_1C7BB00(Method_SoundTestMenu_playSe__);
  v38 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v37, v37[4]);
  OverwriteAssetSoundName__PlaySystemSe(v38, 2, 0, 0);
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
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7

  if ( (byte_4CEBD0F & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_1C7BAE8(&Method_SoundTestMenu_playSeLocal__);
    sub_1C7BAE8(&Method_SoundTestMenu_stopSe__);
    sub_1C7BAE8(&StringLiteral_13142/*"Stop"*/);
    byte_4CEBD0F = 1;
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
           (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_string__get_Item__);
  v8 = Method_SoundTestMenu_playSeLocal__;
  v9 = (System_String_o *)Item;
  if ( (*((_BYTE *)Method_SoundTestMenu_playSeLocal__ + 83) & 2) != 0 )
    v8 = (_QWORD *)sub_1C7BB00(Method_SoundTestMenu_playSeLocal__);
  v10 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v8, v8[4]);
  v11 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_SoundTestMenu_stopSe__, 0);
  v12 = OverwriteAssetSoundName__PlaySe_41996976(v10, inputCueSheetName, v9, 0.7, v11, 0, 0);
  this->fields.sePlayer = v12;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.sePlayer, (int32_t)v12, v13, v14, v15, v16, v17, v18);
  selectSeObj = this->fields.sePlayLabel;
  if ( !selectSeObj )
LABEL_9:
    sub_1C7BD40(selectSeObj, inputCueSheetName);
  UILabel__set_text(selectSeObj, (System_String_o *)StringLiteral_13142/*"Stop"*/, 0);
  this->fields.isPlaySe = 1;
}


void SoundTestMenu__releaseBgm(SoundTestMenu_o *this, System_String_o *cueSheetName, const MethodInfo *method)
{
  UnityEngine_Object_o *selectBgmObj; // x20

  if ( (byte_4CEBD07 & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&SoundManager_TypeInfo);
    byte_4CEBD07 = 1;
  }
  selectBgmObj = (UnityEngine_Object_o *)this->fields.selectBgmObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(selectBgmObj, 0, 0) && !System_String__IsNullOrEmpty(cueSheetName, 0) )
  {
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__releaseAudioAssetStorage(cueSheetName, 0);
  }
}


void SoundTestMenu__releaseSe(SoundTestMenu_o *this, System_String_o *cueSheetName, const MethodInfo *method)
{
  SoundManager_o *Instance; // x0
  __int64 v5; // x20
  __int64 v6; // x8
  unsigned __int64 v7; // x21

  if ( (byte_4CEBD12 & 1) == 0 )
  {
    sub_1C7BAE8(&SeManager_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    byte_4CEBD12 = 1;
  }
  if ( !SeManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
  if ( !byte_4CEBDBB )
  {
    sub_1C7BAE8(&SeManager_TypeInfo);
    byte_4CEBDBB = 1;
  }
  Instance = (SoundManager_o *)SeManager_TypeInfo;
  if ( !SeManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
    Instance = (SoundManager_o *)SeManager_TypeInfo;
  }
  v5 = *(_QWORD *)Instance[2].monitor;
  if ( !v5 )
    goto LABEL_19;
  v6 = *(_QWORD *)(v5 + 24);
  if ( (int)v6 < 1 )
  {
LABEL_15:
    Instance = (SoundManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    if ( Instance )
    {
      SoundManager__ReleaseAudioAssetStorage(Instance, cueSheetName, 0);
      return;
    }
LABEL_19:
    sub_1C7BD40(Instance, cueSheetName);
  }
  v7 = 0;
  while ( 1 )
  {
    if ( v7 >= (unsigned int)v6 )
      sub_1C7BD48(Instance);
    Instance = (SoundManager_o *)System_String__Compare_64209096(
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
  struct SoundTestMenu_CallbackFunc_o **p_endCallbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  SoundTestMenu_o *v10; // x0
  const MethodInfo *v11; // x1

  if ( (byte_4CEBD02 & 1) == 0 )
  {
    sub_1C7BAE8(&SoundTestMenu_CallbackFunc_TypeInfo);
    byte_4CEBD02 = 1;
  }
  endCallbackFunc = (System_Delegate_o *)this->fields.endCallbackFunc;
  p_endCallbackFunc = &this->fields.endCallbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(endCallbackFunc, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (SoundTestMenu_CallbackFunc_c *)v7->klass != SoundTestMenu_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1CD78BC(p_endCallbackFunc, v7, endCallbackFunc);
    v9 = endCallbackFunc == (System_Delegate_o *)v8;
    endCallbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C7C0DC(v7);
  SoundTestMenu__Awake(v10, v11);
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
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  UnityEngine_Color_o v14; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v15; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4CEBD29 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_UILabel___);
    byte_4CEBD29 = 1;
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
                             (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_UILabel___),
        *prevSelectLabel = (UILabel_o *)Component_object,
        sub_1C7BA8C(
          (GrandQuestFolderBoardItem_o *)prevSelectLabel,
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
    sub_1C7BD40(v6, prevSelectLabel);
  }
  v15.fields.r = 1.0;
  v15.fields.g = 0.0;
  v15.fields.b = 0.0;
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
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  SoundTestMenu_o *v15; // x20
  unsigned __int64 v16; // x21
  struct System_String_o **i; // x22
  struct System_String_array *items; // x8
  _QWORD *v19; // x9
  __int64 v20; // x10
  Il2CppClass **v21; // x0

  v5 = cueNameList;
  if ( (byte_4CEBD15 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_string__Add__);
    this = (SoundTestMenu_o *)sub_1C7BAE8(&Method_System_Collections_Generic_List_string__Clear__);
    byte_4CEBD15 = 1;
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
          sub_1C7BD48(this);
        cueNameList = (System_Collections_Generic_List_string__o *)*i;
        items = v5->fields._items;
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
            *(const MethodInfo_383EDFC **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
        }
        else
        {
          v21 = &items->obj.klass + v20;
          v5->fields._size = v20 + 1;
          v21[4] = (Il2CppClass *)cueNameList;
          sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v21 + 4), (int32_t)cueNameList, v8, v9, v10, v11, v12, v13);
        }
        LODWORD(m_CancellationTokenSource) = v15->fields.m_CancellationTokenSource;
        if ( (__int64)++v16 >= (int)m_CancellationTokenSource )
          return;
      }
LABEL_17:
      sub_1C7BD40(this, cueNameList);
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
  struct UILabel_o *selectSeObj; // x0
  struct UILabel_o *v13; // x1
  int32_t result[2]; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4CEBD27 & 1) == 0 )
  {
    this = (SoundTestMenu_o *)sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_UILabel___);
    byte_4CEBD27 = 1;
  }
  *(_QWORD *)result = 0;
  if ( !a )
    goto LABEL_20;
  this = (SoundTestMenu_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)a, 0);
  if ( !this )
    goto LABEL_20;
  this = (SoundTestMenu_o *)UnityEngine_GameObject__GetComponent_object_(
                              (UnityEngine_GameObject_o *)this,
                              (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
  if ( !b )
    goto LABEL_20;
  v8 = this;
  this = (SoundTestMenu_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)b, 0);
  if ( !this )
    goto LABEL_20;
  this = (SoundTestMenu_o *)UnityEngine_GameObject__GetComponent_object_(
                              (UnityEngine_GameObject_o *)this,
                              (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
  if ( type == 2 )
  {
    if ( this && v8 )
    {
      selectSeObj = this->fields.selectSeObj;
      v13 = v8->fields.selectSeObj;
      return System_String__Compare((System_String_o *)selectSeObj, (System_String_o *)v13, 0);
    }
LABEL_20:
    sub_1C7BD40(this, a);
  }
  if ( type == 1 )
  {
    if ( v8 && this )
    {
      v13 = this->fields.selectSeObj;
      selectSeObj = v8->fields.selectSeObj;
      return System_String__Compare((System_String_o *)selectSeObj, (System_String_o *)v13, 0);
    }
    goto LABEL_20;
  }
  if ( type )
    return 0;
  name = UnityEngine_Object__get_name((UnityEngine_Object_o *)a, 0);
  System_Int32__TryParse(name, &result[1], 0);
  v10 = UnityEngine_Object__get_name((UnityEngine_Object_o *)b, 0);
  System_Int32__TryParse(v10, result, 0);
  return System_Int32__CompareTo_65685096((int32_t)&result[1], result[0], 0);
}


void SoundTestMenu__sortApply(SoundTestMenu_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *seRoot; // x0
  SoundTestMenu_c *v4; // x8
  UILabel_o *sortButtonLabel; // x20
  char v6; // w21
  struct System_String_array *sortNameList; // x8
  __int64 sortTypeSe; // x9
  __int64 sortTypeBgm; // x9

  if ( (byte_4CEBD26 & 1) == 0 )
  {
    sub_1C7BAE8(&SoundTestMenu_TypeInfo);
    byte_4CEBD26 = 1;
  }
  seRoot = this->fields.seRoot;
  if ( !seRoot )
    goto LABEL_17;
  seRoot = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_activeSelf(seRoot, 0);
  v4 = SoundTestMenu_TypeInfo;
  sortButtonLabel = this->fields.sortButtonLabel;
  v6 = (char)seRoot;
  if ( !SoundTestMenu_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SoundTestMenu_TypeInfo);
    v4 = SoundTestMenu_TypeInfo;
  }
  sortNameList = v4->static_fields->sortNameList;
  if ( (v6 & 1) == 0 )
  {
    if ( !sortNameList )
      goto LABEL_17;
    sortTypeBgm = this->fields.sortTypeBgm;
    if ( (unsigned int)sortTypeBgm >= LODWORD(sortNameList->max_length) )
LABEL_18:
      sub_1C7BD48(seRoot);
    if ( sortButtonLabel )
    {
      UILabel__set_text(sortButtonLabel, sortNameList->m_Items[sortTypeBgm], 0);
      seRoot = (UnityEngine_GameObject_o *)this->fields.bgmGrid;
      if ( seRoot )
        goto LABEL_16;
    }
LABEL_17:
    sub_1C7BD40(seRoot, method);
  }
  if ( !sortNameList )
    goto LABEL_17;
  sortTypeSe = this->fields.sortTypeSe;
  if ( (unsigned int)sortTypeSe >= LODWORD(sortNameList->max_length) )
    goto LABEL_18;
  if ( !sortButtonLabel )
    goto LABEL_17;
  UILabel__set_text(sortButtonLabel, sortNameList->m_Items[sortTypeSe], 0);
  seRoot = (UnityEngine_GameObject_o *)this->fields.seGrid;
  if ( !seRoot )
    goto LABEL_17;
LABEL_16:
  ((void (__fastcall *)(UnityEngine_GameObject_o *, Il2CppClass *))seRoot->klass[1]._1.element_class)(
    seRoot,
    seRoot->klass[1]._1.castClass);
}


void SoundTestMenu__sortCpkApply(SoundTestMenu_o *this, const MethodInfo *method)
{
  _QWORD *p_image; // x0
  UILabel_o *sortCpkButtonLabel; // x20
  __int64 v5; // x8
  __int64 sortCpkType; // x9

  if ( (byte_4CEBD2C & 1) == 0 )
  {
    sub_1C7BAE8(&SoundTestMenu_TypeInfo);
    byte_4CEBD2C = 1;
  }
  p_image = &SoundTestMenu_TypeInfo->_1.image;
  sortCpkButtonLabel = this->fields.sortCpkButtonLabel;
  if ( !SoundTestMenu_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SoundTestMenu_TypeInfo);
    p_image = &SoundTestMenu_TypeInfo->_1.image;
  }
  v5 = *(_QWORD *)(p_image[23] + 8LL);
  if ( !v5 )
    goto LABEL_10;
  sortCpkType = this->fields.sortCpkType;
  if ( (unsigned int)sortCpkType >= *(_DWORD *)(v5 + 24) )
    sub_1C7BD48(p_image);
  if ( !sortCpkButtonLabel
    || (UILabel__set_text(sortCpkButtonLabel, *(System_String_o **)(v5 + 8 * sortCpkType + 32), 0),
        (p_image = &this->fields.bgmCpkGrid->klass) == 0) )
  {
LABEL_10:
    sub_1C7BD40(p_image, method);
  }
  (*(void (__fastcall **)(_QWORD *, _QWORD))(*p_image + 440LL))(p_image, *(_QWORD *)(*p_image + 448LL));
}


void SoundTestMenu__stopBgm(SoundTestMenu_o *this, const MethodInfo *method)
{
  UILabel_o *bgmPlayLabel; // x0
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  System_String_o *playBgmCueSheetName; // x0

  if ( (byte_4CEBD0B & 1) == 0 )
  {
    sub_1C7BAE8(&SoundManager_TypeInfo);
    sub_1C7BAE8(&StringLiteral_10676/*"Play"*/);
    byte_4CEBD0B = 1;
  }
  if ( this->fields.state == 1 )
  {
    bgmPlayLabel = this->fields.bgmPlayLabel;
    if ( !bgmPlayLabel )
      sub_1C7BD40(0, method);
    UILabel__set_text(bgmPlayLabel, (System_String_o *)StringLiteral_10676/*"Play"*/, 0);
    this->fields.isPlayBgm = 0;
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__stopBgm(0);
    SoundTestMenu__ResetBgmProgressBar(this, v4);
    playBgmCueSheetName = this->fields.playBgmCueSheetName;
    if ( playBgmCueSheetName )
    {
      if ( System_String__op_Inequality(playBgmCueSheetName, this->fields.loadBgmCueSheetName, 0) )
        SoundTestMenu__releaseBgm(this, this->fields.playBgmCueSheetName, v5);
    }
    this->fields.playBgmCueSheetName = 0;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.playBgmCueSheetName, 0, (int32_t)v5, v6, v7, v8, v9, v10);
  }
}


void SoundTestMenu__stopSe(SoundTestMenu_o *this, const MethodInfo *method)
{
  SePlayer_o *sePlayer; // x0
  SePlayer_o *v4; // x20
  System_Action_o *v5; // x21
  UILabel_o *sePlayLabel; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7

  if ( (byte_4CEBD10 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_SoundTestMenu_stopSe__);
    sub_1C7BAE8(&StringLiteral_10676/*"Play"*/);
    byte_4CEBD10 = 1;
  }
  sePlayer = this->fields.sePlayer;
  if ( sePlayer )
  {
    SePlayer__StopSe(sePlayer, 0.0, 0);
    v4 = this->fields.sePlayer;
    v5 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
    System_Action___ctor(v5, (Il2CppObject *)this, Method_SoundTestMenu_stopSe__, 0);
    if ( !v4
      || (SePlayer__RemoveCallback(v4, v5, 0),
          this->fields.sePlayer = 0,
          sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.sePlayer, 0, v8, v9, v10, v11, v12, v13),
          (sePlayLabel = this->fields.sePlayLabel) == 0) )
    {
      sub_1C7BD40(sePlayLabel, v7);
    }
    UILabel__set_text(sePlayLabel, (System_String_o *)StringLiteral_10676/*"Play"*/, 0);
    this->fields.isPlaySe = 0;
  }
}


void SoundTestMenu__switchButtonLabelChange(SoundTestMenu_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *seRoot; // x0
  UILabel_o *sortButtonLabel; // x20
  __int64 v5; // x8
  int32_t sortTypeSe; // w9

  if ( (byte_4CEBD24 & 1) == 0 )
  {
    sub_1C7BAE8(&SoundTestMenu_TypeInfo);
    sub_1C7BAE8(&StringLiteral_12080/*"SEテストに\n変更"*/);
    sub_1C7BAE8(&StringLiteral_2928/*"BGMテストに\n変更"*/);
    byte_4CEBD24 = 1;
  }
  seRoot = this->fields.seRoot;
  if ( !seRoot )
    goto LABEL_17;
  seRoot = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_activeSelf(seRoot, 0);
  if ( !this->fields.switchButtonLabel )
    goto LABEL_17;
  if ( ((unsigned __int8)seRoot & 1) != 0 )
  {
    UILabel__set_text(this->fields.switchButtonLabel, (System_String_o *)StringLiteral_2928/*"BGMテストに\n変更"*/, 0);
    sortButtonLabel = this->fields.sortButtonLabel;
    seRoot = (UnityEngine_GameObject_o *)SoundTestMenu_TypeInfo;
    if ( !SoundTestMenu_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundTestMenu_TypeInfo);
      seRoot = (UnityEngine_GameObject_o *)SoundTestMenu_TypeInfo;
    }
    v5 = *(_QWORD *)(seRoot[7].fields.m_CachedPtr + 8);
    if ( v5 )
    {
      sortTypeSe = this->fields.sortTypeSe;
      goto LABEL_14;
    }
LABEL_17:
    sub_1C7BD40(seRoot, method);
  }
  UILabel__set_text(this->fields.switchButtonLabel, (System_String_o *)StringLiteral_12080/*"SEテストに\n変更"*/, 0);
  sortButtonLabel = this->fields.sortButtonLabel;
  seRoot = (UnityEngine_GameObject_o *)SoundTestMenu_TypeInfo;
  if ( !SoundTestMenu_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SoundTestMenu_TypeInfo);
    seRoot = (UnityEngine_GameObject_o *)SoundTestMenu_TypeInfo;
  }
  v5 = *(_QWORD *)(seRoot[7].fields.m_CachedPtr + 8);
  if ( !v5 )
    goto LABEL_17;
  sortTypeSe = this->fields.sortTypeBgm;
LABEL_14:
  if ( (unsigned int)sortTypeSe >= *(_DWORD *)(v5 + 24) )
    sub_1C7BD48(seRoot);
  if ( !sortButtonLabel )
    goto LABEL_17;
  UILabel__set_text(sortButtonLabel, *(System_String_o **)(v5 + 8LL * sortTypeSe + 32), 0);
}


// local variable allocation has failed, the output may be wrong!
void SoundTestMenu__updateBgmPrevNextButton(SoundTestMenu_o *this, bool onFlg, const MethodInfo *method)
{
  UnityEngine_GameObject_o *bgmPrevButton; // x0
  bool v5; // w20

  bgmPrevButton = this->fields.bgmPrevButton;
  if ( !bgmPrevButton
    || (v5 = onFlg,
        UnityEngine_GameObject__SetActive(bgmPrevButton, onFlg, 0),
        (bgmPrevButton = this->fields.bgmNextButton) == 0) )
  {
    sub_1C7BD40(bgmPrevButton, onFlg);
  }
  UnityEngine_GameObject__SetActive(bgmPrevButton, v5, 0);
}


void SoundTestMenu_CallbackFunc___ctor(
        SoundTestMenu_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C7BBA8(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C7BD5C(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C7BC10(v14, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1AAEF6C;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1AAEF2C;
}


System_IAsyncResult_o *SoundTestMenu_CallbackFunc__BeginInvoke(
        SoundTestMenu_CallbackFunc_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0;
  return (System_IAsyncResult_o *)sub_1C7BA9C(this, &v5, callback, object);
}


void SoundTestMenu_CallbackFunc__EndInvoke(
        SoundTestMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C7BAA0(result, 0, method);
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
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C7BBA8(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C7BD5C(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C7BC10(v14, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1AAEFCC;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1AAEF80;
}


System_IAsyncResult_o *SoundTestMenu_IsValidPlaySound__BeginInvoke(
        SoundTestMenu_IsValidPlaySound_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0;
  return (System_IAsyncResult_o *)sub_1C7BA9C(this, &v5, callback, object);
}


bool SoundTestMenu_IsValidPlaySound__EndInvoke(
        SoundTestMenu_IsValidPlaySound_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  __int64 v3; // x1

  if ( !sub_1C7BAA0(result, 0, method) )
    sub_1C7BD40(0, v3);
  return *(_BYTE *)j_il2cpp_object_unbox_0();
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
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  int32_t _1__state; // w8
  struct SoundTestMenu_o *_4__this; // x20
  bool result; // w0
  Il2CppObject *v12; // x22
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  __int64 _8__1; // x0
  struct SoundTestMenu_o *v26; // x1
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x4
  int32_t v30; // w5
  int64_t v31; // x6
  System_String_o *v32; // x7
  struct UILabel_o *outputLabel; // x8
  struct System_String_o *mText; // x1
  System_String_o *Text; // x21
  struct System_String_o *FileNameWithoutExtension; // x0
  int32_t v37; // w2
  int32_t v38; // w3
  System_String_o *v39; // x4
  int32_t v40; // w5
  int64_t v41; // x6
  System_String_o *v42; // x7
  struct SoundTestMenu___c__DisplayClass116_0_o *v43; // x21
  System_Collections_Generic_Dictionary_object__object__o *v44; // x22
  int32_t v45; // w2
  int32_t v46; // w3
  System_String_o *v47; // x4
  int32_t v48; // w5
  int64_t v49; // x6
  System_String_o *v50; // x7
  int v51; // w8
  Il2CppObject *v52; // x22
  struct SoundTestMenu___c__DisplayClass116_1_o **p__8__2; // x21
  int32_t v54; // w2
  int32_t v55; // w3
  System_String_o *v56; // x4
  int32_t v57; // w5
  int64_t v58; // x6
  System_String_o *v59; // x7
  int32_t v60; // w2
  int32_t v61; // w3
  System_String_o *v62; // x4
  int32_t v63; // w5
  int64_t v64; // x6
  System_String_o *v65; // x7
  struct SoundTestMenu___c__DisplayClass116_0_o *v66; // x1
  struct SoundTestMenu___c__DisplayClass116_1_o *v67; // x22
  Il2CppObject *Item; // x23
  int32_t v69; // w2
  int32_t v70; // w3
  System_String_o *v71; // x4
  int32_t v72; // w5
  int64_t v73; // x6
  System_String_o *v74; // x7
  int32_t v75; // w2
  int32_t v76; // w3
  System_String_o *v77; // x4
  int32_t v78; // w5
  int64_t v79; // x6
  System_String_o *v80; // x7
  __int64 v81; // x22
  int32_t v82; // w1
  int32_t v83; // w2
  int32_t v84; // w3
  System_String_o *v85; // x4
  int32_t v86; // w5
  int64_t v87; // x6
  System_String_o *v88; // x7
  int32_t v89; // w2
  int32_t v90; // w3
  System_String_o *v91; // x4
  int32_t v92; // w5
  int64_t v93; // x6
  System_String_o *v94; // x7
  int32_t v95; // w1
  struct System_Collections_Generic_List_string__o *v96; // x8
  int32_t v97; // w2
  int32_t v98; // w3
  System_String_o *v99; // x4
  int32_t v100; // w5
  int64_t v101; // x6
  System_String_o *v102; // x7
  int32_t v103; // w2
  int32_t v104; // w3
  System_String_o *v105; // x4
  int32_t v106; // w5
  int64_t v107; // x6
  System_String_o *v108; // x7
  int32_t v109; // w1
  System_String_o *v110; // x0
  UILabel_o *v111; // x22
  struct SoundTestMenu___c__DisplayClass116_1_o *v112; // x21
  System_String_o *cpkName; // x22
  System_Action_o *v114; // x23
  SoundTestMenu_o *v115; // x0
  const MethodInfo *v116; // x3
  struct SoundTestMenu___c__DisplayClass116_1_o *_8__2; // x8
  struct System_Collections_Generic_List_string__o *seCpkList; // x9
  System_Collections_Generic_Dictionary_object__object__o *v119; // x24
  System_String_o *v120; // x21
  int v121; // w8
  __int64 v122; // x21
  int v123; // w27
  int32_t v124; // w23
  System_Collections_Generic_Dictionary_TKey__TValue__o *v125; // x25
  __int64 v126; // x29
  int v127; // w22
  Il2CppObject *v128; // x26
  System_Collections_Generic_Dictionary_object__object__o *v129; // x23
  System_Collections_Generic_Dictionary_object__object__o *v130; // x22
  struct SoundTestMenu___c__DisplayClass116_0_o *v131; // x8
  System_Collections_Generic_Dictionary_object__object__o *v132; // x21
  struct System_Collections_Generic_KeyValuePair_TKey__TValue__o current; // kr00_16
  System_Collections_Generic_List_object__o *v134; // x28
  System_Collections_Generic_List_object__o *v135; // x27
  System_Collections_Generic_List_object__o *v136; // x26
  __int64 v137; // x0
  __int64 v138; // x1
  Il2CppObject *v139; // x0
  const MethodInfo *v140; // x6
  __int64 v141; // x0
  __int64 v142; // x1
  SoundTestMenu___c_c *v143; // x8
  System_Func_T__TResult__o *_9__116_1; // x21
  Il2CppObject *v145; // x22
  struct SoundTestMenu___c_StaticFields *static_fields; // x0
  int32_t v147; // w2
  int32_t v148; // w3
  System_String_o *v149; // x4
  int32_t v150; // w5
  int64_t v151; // x6
  System_String_o *v152; // x7
  System_Func_TSource__TResult__o *v153; // x1
  System_Collections_Generic_IEnumerable_T__o *v154; // x0
  Il2CppObject **p__2__current; // x19
  System_String_o *v156; // x24
  const MethodInfo *v157; // x6
  const MethodInfo *v158; // x6
  const MethodInfo *v159; // x6
  Il2CppObject **v160; // x19
  int32_t v161; // w2
  int32_t v162; // w3
  System_String_o *v163; // x4
  int32_t v164; // w5
  int64_t v165; // x6
  System_String_o *v166; // x7
  System_Collections_Generic_Dictionary_object__object__o *v167; // [xsp+0h] [xbp-D0h]
  System_Collections_Generic_Dictionary_object__object__o *v168; // [xsp+8h] [xbp-C8h]
  Il2CppObject *key; // [xsp+10h] [xbp-C0h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v170; // [xsp+18h] [xbp-B8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v171; // [xsp+40h] [xbp-90h] BYREF
  int32_t size; // [xsp+6Ch] [xbp-64h] BYREF

  if ( (byte_4CEBD3D & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_string__Dictionary_string__long___Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_string__long__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_string__Dictionary_string__long___ContainsKey__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_string__Dictionary_string__long___GetEnumerator__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_string__long___ctor__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_string__Dictionary_string__long____ctor__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_string__List_string____ctor__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_string__Dictionary_string__long___get_Item__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_string__List_string___set_Item__);
    sub_1C7BAE8(&System_Collections_Generic_Dictionary_string__Dictionary_string__long___TypeInfo);
    sub_1C7BAE8(&System_Collections_Generic_Dictionary_string__List_string___TypeInfo);
    sub_1C7BAE8(&System_Collections_Generic_Dictionary_string__long__TypeInfo);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_Select_KeyValuePair_string__long___string___);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_Enumerator_string__Dictionary_string__long___Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_Enumerator_string__Dictionary_string__long___MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_Enumerator_string__Dictionary_string__long___get_Current__);
    sub_1C7BAE8(&System_Func_KeyValuePair_string__long___string__TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_KeyValuePair_string__Dictionary_string__long___get_Key__);
    sub_1C7BAE8(&Method_System_Collections_Generic_KeyValuePair_string__Dictionary_string__long___get_Value__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_string__AddRange__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_1C7BAE8(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C7BAE8(&System_IO_Path_TypeInfo);
    sub_1C7BAE8(&string___TypeInfo);
    sub_1C7BAE8(&Method_SoundTestMenu___c__CheckSeVersionDiff_b__116_1__);
    sub_1C7BAE8(&SoundTestMenu___c__DisplayClass116_0_TypeInfo);
    sub_1C7BAE8(&Method_SoundTestMenu___c__DisplayClass116_1__CheckSeVersionDiff_b__0__);
    sub_1C7BAE8(&SoundTestMenu___c__DisplayClass116_1_TypeInfo);
    sub_1C7BAE8(&SoundTestMenu___c_TypeInfo);
    sub_1C7BAE8(&StringLiteral_1083/*"/SE/"*/);
    sub_1C7BAE8(&StringLiteral_1020/*".csv"*/);
    sub_1C7BAE8(&StringLiteral_161/*" / "*/);
    sub_1C7BAE8(&StringLiteral_1084/*"/SE/Diff"*/);
    sub_1C7BAE8(&StringLiteral_4367/*"ChangeFiles"*/);
    sub_1C7BAE8(&StringLiteral_651/*"("*/);
    sub_1C7BAE8(&StringLiteral_757/*")"*/);
    sub_1C7BAE8(&StringLiteral_2149/*"AddFiles"*/);
    sub_1C7BAE8(&StringLiteral_5231/*"DeleteFiles"*/);
    byte_4CEBD3D = 1;
  }
  size = 0;
  memset(&v171, 0, sizeof(v171));
  _1__state = this->fields.__1__state;
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
    v12 = (Il2CppObject *)sub_1C7BD34(SoundTestMenu___c__DisplayClass116_0_TypeInfo);
    System_Object___ctor(v12, 0);
    this->fields.__8__1 = (struct SoundTestMenu___c__DisplayClass116_0_o *)v12;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.__8__1, (int32_t)v12, v13, v14, v15, v16, v17, v18);
    _8__1 = (__int64)this->fields.__8__1;
    if ( !_8__1 )
      goto LABEL_99;
    v26 = this->fields.__4__this;
    *(_QWORD *)(_8__1 + 24) = v26;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(_8__1 + 24), (int32_t)v26, v19, v20, v21, v22, v23, v24);
    if ( !_4__this )
      goto LABEL_99;
    _8__1 = (__int64)_4__this->fields.outputMask;
    if ( !_8__1 )
      goto LABEL_99;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)_8__1, 1, 0);
    outputLabel = _4__this->fields.outputLabel;
    if ( !outputLabel )
      goto LABEL_99;
    mText = outputLabel->fields.mText;
    this->fields._labelText_5__2 = mText;
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)&this->fields._labelText_5__2,
      (int32_t)mText,
      v27,
      v28,
      v29,
      v30,
      v31,
      v32);
    _8__1 = (__int64)_4__this->fields.targetCpkInput;
    if ( !_8__1 )
      goto LABEL_99;
    Text = UILineInput__GetText((UILineInput_o *)_8__1, 0);
    if ( !System_IO_Path_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_IO_Path_TypeInfo);
    FileNameWithoutExtension = System_IO_Path__GetFileNameWithoutExtension(Text, 0);
    this->fields._targetCpk_5__3 = FileNameWithoutExtension;
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)&this->fields._targetCpk_5__3,
      (int32_t)FileNameWithoutExtension,
      v37,
      v38,
      v39,
      v40,
      v41,
      v42);
    v43 = this->fields.__8__1;
    v44 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C7BD34(System_Collections_Generic_Dictionary_string__Dictionary_string__long___TypeInfo);
    System_Collections_Generic_Dictionary_object__object____ctor(
      v44,
      (const MethodInfo_34F1ADC *)Method_System_Collections_Generic_Dictionary_string__Dictionary_string__long____ctor__);
    if ( !v43 )
      goto LABEL_99;
    v43->fields.currentCpkList = (struct System_Collections_Generic_Dictionary_string__Dictionary_string__long___o *)v44;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v43->fields, (int32_t)v44, v45, v46, v47, v48, v49, v50);
    v51 = 0;
    this->fields._i_5__4 = 0;
    while ( 1 )
    {
      seCpkList = _4__this->fields.seCpkList;
      if ( !seCpkList )
        goto LABEL_99;
      if ( v51 >= seCpkList->fields._size )
        break;
      v52 = (Il2CppObject *)sub_1C7BD34(SoundTestMenu___c__DisplayClass116_1_TypeInfo);
      System_Object___ctor(v52, 0);
      this->fields.__8__2 = (struct SoundTestMenu___c__DisplayClass116_1_o *)v52;
      p__8__2 = &this->fields.__8__2;
      sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.__8__2, (int32_t)v52, v54, v55, v56, v57, v58, v59);
      _8__1 = (__int64)this->fields.__8__2;
      if ( !_8__1 )
        goto LABEL_99;
      v66 = this->fields.__8__1;
      *(_QWORD *)(_8__1 + 32) = v66;
      sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(_8__1 + 32), (int32_t)v66, v60, v61, v62, v63, v64, v65);
      _8__1 = (__int64)_4__this->fields.seCpkList;
      if ( !_8__1 )
        goto LABEL_99;
      v67 = *p__8__2;
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)_8__1,
               this->fields._i_5__4,
               (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_string__get_Item__);
      if ( !System_IO_Path_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_IO_Path_TypeInfo);
      _8__1 = (__int64)System_IO_Path__GetFileNameWithoutExtension((System_String_o *)Item, 0);
      if ( !v67 )
        goto LABEL_99;
      v67->fields.cpkName = (struct System_String_o *)_8__1;
      sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v67->fields, _8__1, v69, v70, v71, v72, v73, v74);
      _8__1 = (__int64)this->fields._targetCpk_5__3;
      if ( !_8__1 )
        goto LABEL_99;
      if ( *(int *)(_8__1 + 16) < 1 )
        goto LABEL_26;
      if ( !*p__8__2 )
        goto LABEL_99;
      _8__1 = System_String__op_Inequality((System_String_o *)_8__1, (*p__8__2)->fields.cpkName, 0);
      if ( (_8__1 & 1) == 0 )
      {
LABEL_26:
        _8__1 = sub_1C7BB90(string___TypeInfo, 5);
        if ( !_8__1 )
          goto LABEL_99;
        v81 = _8__1;
        if ( !*(_DWORD *)(_8__1 + 24) )
          goto LABEL_100;
        v82 = StringLiteral_651/*"("*/;
        *(_QWORD *)(_8__1 + 32) = StringLiteral_651/*"("*/;
        sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(_8__1 + 32), v82, v75, v76, v77, v78, v79, v80);
        size = this->fields._i_5__4 + 1;
        _8__1 = (__int64)System_Int32__ToString((int32_t)&size, 0);
        if ( *(_DWORD *)(v81 + 24) <= 1u )
          goto LABEL_100;
        *(_QWORD *)(v81 + 40) = _8__1;
        sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v81 + 40), _8__1, v83, v84, v85, v86, v87, v88);
        if ( *(_DWORD *)(v81 + 24) <= 2u )
          goto LABEL_100;
        v95 = StringLiteral_161/*" / "*/;
        *(_QWORD *)(v81 + 48) = StringLiteral_161/*" / "*/;
        sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v81 + 48), v95, v89, v90, v91, v92, v93, v94);
        v96 = _4__this->fields.seCpkList;
        if ( !v96 )
          goto LABEL_99;
        size = v96->fields._size;
        _8__1 = (__int64)System_Int32__ToString((int32_t)&size, 0);
        if ( *(_DWORD *)(v81 + 24) <= 3u )
          goto LABEL_100;
        *(_QWORD *)(v81 + 56) = _8__1;
        sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v81 + 56), _8__1, v97, v98, v99, v100, v101, v102);
        if ( *(_DWORD *)(v81 + 24) <= 4u )
          goto LABEL_100;
        v109 = StringLiteral_757/*")"*/;
        *(_QWORD *)(v81 + 64) = StringLiteral_757/*")"*/;
        sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v81 + 64), v109, v103, v104, v105, v106, v107, v108);
        v110 = System_String__Concat_64217444((System_String_array *)v81, 0);
        v111 = _4__this->fields.outputLabel;
        _8__1 = (__int64)System_String__Concat_64176912(this->fields._labelText_5__2, v110, 0);
        if ( !v111 )
          goto LABEL_99;
        UILabel__set_text(v111, (System_String_o *)_8__1, 0);
        v112 = *p__8__2;
        if ( !v112 )
          goto LABEL_99;
        v112->fields.check = 0;
        cpkName = v112->fields.cpkName;
        v114 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
        System_Action___ctor(
          v114,
          (Il2CppObject *)v112,
          Method_SoundTestMenu___c__DisplayClass116_1__CheckSeVersionDiff_b__0__,
          0);
        SoundTestMenu__loadSE(v115, cpkName, v114, v116);
LABEL_36:
        _8__1 = (__int64)&this->fields.__8__2;
        _8__2 = this->fields.__8__2;
        if ( !_8__2 )
          goto LABEL_99;
        if ( !_8__2->fields.check )
        {
          this->fields.__2__current = 0;
          p__2__current = &this->fields.__2__current;
          sub_1C7BA8C((GrandQuestFolderBoardItem_o *)p__2__current, 0, v2, v3, v4, v5, v6, v7);
          result = 1;
          *((_DWORD *)p__2__current - 2) = 1;
          return result;
        }
        *(_QWORD *)_8__1 = 0;
        sub_1C7BA8C((GrandQuestFolderBoardItem_o *)_8__1, 0, v2, v3, v4, v5, v6, v7);
      }
      size = this->fields._i_5__4;
      v51 = size + 1;
      this->fields._i_5__4 = size + 1;
      if ( !_4__this )
        goto LABEL_99;
    }
    v119 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C7BD34(System_Collections_Generic_Dictionary_string__Dictionary_string__long___TypeInfo);
    System_Collections_Generic_Dictionary_object__object____ctor(
      v119,
      (const MethodInfo_34F1ADC *)Method_System_Collections_Generic_Dictionary_string__Dictionary_string__long____ctor__);
    v120 = System_String__Concat_64217180(
             _4__this->fields.pathDiffDirectory,
             (System_String_o *)StringLiteral_1083/*"/SE/"*/,
             this->fields.compareVersion,
             (System_String_o *)StringLiteral_1020/*".csv"*/,
             0);
    if ( !System_IO_File__Exists(v120, 0) )
      return 0;
    _8__1 = (__int64)System_IO_File__ReadAllLines(v120, 0);
    if ( !_8__1 )
LABEL_99:
      sub_1C7BD40(_8__1, method);
    v121 = *(_DWORD *)(_8__1 + 24);
    v122 = _8__1;
    if ( v121 >= 1 )
    {
      v123 = 0;
      while ( 1 )
      {
        if ( v123 >= (unsigned int)v121 )
          goto LABEL_100;
        _8__1 = *(_QWORD *)(v122 + 8LL * v123 + 32);
        if ( !_8__1 )
          goto LABEL_99;
        _8__1 = (__int64)System_String__Split((System_String_o *)_8__1, 0x2Cu, 0, 0);
        if ( !_8__1 )
          goto LABEL_99;
        if ( *(_DWORD *)(_8__1 + 24) != 3 )
          break;
        key = *(Il2CppObject **)(_8__1 + 40);
        v124 = System_Int32__Parse(*(System_String_o **)(_8__1 + 48), 0);
        v125 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1C7BD34(System_Collections_Generic_Dictionary_string__long__TypeInfo);
        System_Collections_Generic_Dictionary_object__long____ctor(
          v125,
          (const MethodInfo_34EEBD8 *)Method_System_Collections_Generic_Dictionary_string__long___ctor__);
        if ( v124 >= 1 )
        {
          v126 = (unsigned int)v124;
          v127 = v123 + 1;
          while ( (unsigned int)v127 < *(_DWORD *)(v122 + 24) )
          {
            _8__1 = *(_QWORD *)(v122 + 8LL * v127 + 32);
            if ( !_8__1 )
              goto LABEL_99;
            _8__1 = (__int64)System_String__Split((System_String_o *)_8__1, 0x2Cu, 0, 0);
            if ( !_8__1 )
              goto LABEL_99;
            if ( *(_DWORD *)(_8__1 + 24) != 2 )
              goto LABEL_90;
            v128 = *(Il2CppObject **)(_8__1 + 32);
            _8__1 = System_Int64__Parse(*(System_String_o **)(_8__1 + 40), 0);
            if ( !v125 )
              goto LABEL_99;
            System_Collections_Generic_Dictionary_object__long___Add(
              v125,
              v128,
              _8__1,
              (const MethodInfo_34EF588 *)Method_System_Collections_Generic_Dictionary_string__long__Add__);
            --v126;
            ++v127;
            if ( !v126 )
              goto LABEL_58;
          }
LABEL_100:
          sub_1C7BD48(_8__1);
        }
LABEL_58:
        if ( !v119 )
          goto LABEL_99;
        _8__1 = System_Collections_Generic_Dictionary_object__object___ContainsKey(
                  v119,
                  key,
                  (const MethodInfo_34F2680 *)Method_System_Collections_Generic_Dictionary_string__Dictionary_string__long___ContainsKey__);
        if ( (_8__1 & 1) == 0 )
          System_Collections_Generic_Dictionary_object__object___Add(
            v119,
            key,
            (Il2CppObject *)v125,
            (const MethodInfo_34F248C *)Method_System_Collections_Generic_Dictionary_string__Dictionary_string__long___Add__);
        v121 = *(_DWORD *)(v122 + 24);
        v123 += v124 + 1;
        if ( v123 >= v121 )
          goto LABEL_62;
      }
LABEL_90:
      _8__1 = (__int64)_4__this->fields.outputMask;
      if ( _8__1 )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)_8__1, 0, 0);
        return 0;
      }
      goto LABEL_99;
    }
LABEL_62:
    v129 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C7BD34(System_Collections_Generic_Dictionary_string__List_string___TypeInfo);
    System_Collections_Generic_Dictionary_object__object____ctor(
      v129,
      (const MethodInfo_34F1ADC *)Method_System_Collections_Generic_Dictionary_string__List_string____ctor__);
    v168 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C7BD34(System_Collections_Generic_Dictionary_string__List_string___TypeInfo);
    System_Collections_Generic_Dictionary_object__object____ctor(
      v168,
      (const MethodInfo_34F1ADC *)Method_System_Collections_Generic_Dictionary_string__List_string____ctor__);
    v130 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C7BD34(System_Collections_Generic_Dictionary_string__List_string___TypeInfo);
    System_Collections_Generic_Dictionary_object__object____ctor(
      v130,
      (const MethodInfo_34F1ADC *)Method_System_Collections_Generic_Dictionary_string__List_string____ctor__);
    v131 = this->fields.__8__1;
    if ( !v131 )
      goto LABEL_99;
    _8__1 = (__int64)v131->fields.currentCpkList;
    if ( !_8__1 )
      goto LABEL_99;
    System_Collections_Generic_Dictionary_object__object___GetEnumerator(
      &v170,
      (System_Collections_Generic_Dictionary_object__object__o *)_8__1,
      (const MethodInfo_34F28BC *)Method_System_Collections_Generic_Dictionary_string__Dictionary_string__long___GetEnumerator__);
    v132 = v168;
    v171 = v170;
    v167 = v130;
    while ( System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
              &v171,
              (const MethodInfo_35F10F0 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__Dictionary_string__long___MoveNext__) )
    {
      current = v171.fields._current;
      v134 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_string__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v134,
        (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_string___ctor__);
      v135 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_string__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v135,
        (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_string___ctor__);
      v136 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_string__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v136,
        (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_string___ctor__);
      if ( !v119 )
        sub_1C7BD40(v137, v138);
      if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
             v119,
             current.fields.key,
             (const MethodInfo_34F2680 *)Method_System_Collections_Generic_Dictionary_string__Dictionary_string__long___ContainsKey__) )
      {
        v139 = System_Collections_Generic_Dictionary_object__object___get_Item(
                 v119,
                 current.fields.key,
                 (const MethodInfo_34F240C *)Method_System_Collections_Generic_Dictionary_string__Dictionary_string__long___get_Item__);
        SoundTestMenu__CompareCueList(
          (SoundTestMenu_o *)v139,
          (System_Collections_Generic_Dictionary_string__long__o *)v139,
          (System_Collections_Generic_Dictionary_string__long__o *)current.fields.value,
          (System_Collections_Generic_List_string__o *)v134,
          (System_Collections_Generic_List_string__o *)v135,
          (System_Collections_Generic_List_string__o *)v136,
          v140);
        if ( !v134 )
          sub_1C7BD40(v141, v142);
      }
      else
      {
        v143 = SoundTestMenu___c_TypeInfo;
        if ( !SoundTestMenu___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundTestMenu___c_TypeInfo);
          v143 = SoundTestMenu___c_TypeInfo;
        }
        _9__116_1 = (System_Func_T__TResult__o *)v143->static_fields->__9__116_1;
        if ( !_9__116_1 )
        {
          if ( !v143->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v143);
            v143 = SoundTestMenu___c_TypeInfo;
          }
          v145 = (Il2CppObject *)v143->static_fields->__9;
          _9__116_1 = (System_Func_T__TResult__o *)sub_1C7BD34(System_Func_KeyValuePair_string__long___string__TypeInfo);
          System_Func_KeyValuePair_object__long___object____ctor(
            _9__116_1,
            v145,
            Method_SoundTestMenu___c__CheckSeVersionDiff_b__116_1__,
            0);
          static_fields = SoundTestMenu___c_TypeInfo->static_fields;
          static_fields->__9__116_1 = (struct System_Func_KeyValuePair_string__long___string__o *)_9__116_1;
          v130 = v167;
          sub_1C7BA8C(
            (GrandQuestFolderBoardItem_o *)&static_fields->__9__116_1,
            (int32_t)_9__116_1,
            v147,
            v148,
            v149,
            v150,
            v151,
            v152);
        }
        v153 = (System_Func_TSource__TResult__o *)_9__116_1;
        v132 = v168;
        v154 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_KeyValuePair_object__long___object_(
                                                                (System_Collections_Generic_IEnumerable_TSource__o *)current.fields.value,
                                                                v153,
                                                                (const MethodInfo_31A1710 *)Method_System_Linq_Enumerable_Select_KeyValuePair_string__long___string___);
        if ( !v134 )
          sub_1C7BD40(v154, v154);
        System_Collections_Generic_List_object___AddRange(
          v134,
          v154,
          (const MethodInfo_383F008 *)Method_System_Collections_Generic_List_string__AddRange__);
      }
      if ( v134->fields._size )
      {
        if ( !v129 )
          sub_1C7BD40(0, v142);
        System_Collections_Generic_Dictionary_object__object___set_Item(
          v129,
          current.fields.key,
          (Il2CppObject *)v134,
          (const MethodInfo_34F2478 *)Method_System_Collections_Generic_Dictionary_string__List_string___set_Item__);
      }
      if ( !v135 )
        sub_1C7BD40(v141, v142);
      if ( v135->fields._size )
      {
        if ( !v132 )
          sub_1C7BD40(v141, v142);
        System_Collections_Generic_Dictionary_object__object___set_Item(
          v132,
          current.fields.key,
          (Il2CppObject *)v135,
          (const MethodInfo_34F2478 *)Method_System_Collections_Generic_Dictionary_string__List_string___set_Item__);
      }
      if ( !v136 )
        sub_1C7BD40(v141, v142);
      if ( v136->fields._size )
      {
        if ( !v130 )
          sub_1C7BD40(v141, v142);
        System_Collections_Generic_Dictionary_object__object___set_Item(
          v130,
          current.fields.key,
          (Il2CppObject *)v136,
          (const MethodInfo_34F2478 *)Method_System_Collections_Generic_Dictionary_string__List_string___set_Item__);
      }
    }
    System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
      &v171,
      (const MethodInfo_35F1210 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__Dictionary_string__long___Dispose__);
    v156 = System_String__Concat_64176912(_4__this->fields.pathDiffDirectory, (System_String_o *)StringLiteral_1084/*"/SE/Diff"*/, 0);
    if ( System_IO_Directory__Exists(v156, 0) )
      System_IO_Directory__Delete(v156, 1, 0);
    System_IO_Directory__CreateDirectory(v156, 0);
    SoundTestMenu__OutputDiffFile(
      _4__this,
      v156,
      (System_String_o *)StringLiteral_2149/*"AddFiles"*/,
      this->fields.compareVersion,
      (System_Collections_Generic_Dictionary_string__List_string___o *)v129,
      this->fields._targetCpk_5__3,
      v157);
    SoundTestMenu__OutputDiffFile(
      _4__this,
      v156,
      (System_String_o *)StringLiteral_4367/*"ChangeFiles"*/,
      this->fields.compareVersion,
      (System_Collections_Generic_Dictionary_string__List_string___o *)v132,
      this->fields._targetCpk_5__3,
      v158);
    SoundTestMenu__OutputDiffFile(
      _4__this,
      v156,
      (System_String_o *)StringLiteral_5231/*"DeleteFiles"*/,
      this->fields.compareVersion,
      (System_Collections_Generic_Dictionary_string__List_string___o *)v130,
      this->fields._targetCpk_5__3,
      v159);
    _8__1 = (__int64)_4__this->fields.outputLabel;
    if ( !_8__1 )
      goto LABEL_99;
    UILabel__set_text((UILabel_o *)_8__1, this->fields._labelText_5__2, 0);
    _8__1 = (__int64)_4__this->fields.outputMask;
    if ( !_8__1 )
      goto LABEL_99;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)_8__1, 0, 0);
    this->fields.__2__current = 0;
    v160 = &this->fields.__2__current;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)v160, 0, v161, v162, v163, v164, v165, v166);
    *((_DWORD *)v160 - 2) = 2;
    return 1;
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

  v2 = sub_1C7BAFC(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C7BD34(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C7BAFC(&Method_SoundTestMenu__CheckSeVersionDiff_d__116_System_Collections_IEnumerator_Reset__);
  sub_1C7BC10(v3, v4);
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
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  int32_t _1__state; // w8
  bool result; // w0
  struct SoundTestMenu_o *_4__this; // x20
  Il2CppObject *v12; // x22
  struct SoundTestMenu___c__DisplayClass114_0_o **p__8__1; // x21
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  __int64 _8__1; // x0
  struct SoundTestMenu_o *v27; // x1
  int32_t v28; // w2
  int32_t v29; // w3
  System_String_o *v30; // x4
  int32_t v31; // w5
  int64_t v32; // x6
  System_String_o *v33; // x7
  struct UILabel_o *outputLabel; // x8
  struct System_String_o *mText; // x1
  struct SoundTestMenu___c__DisplayClass114_0_o *v36; // x22
  int32_t v37; // w2
  int32_t v38; // w3
  System_String_o *v39; // x4
  int32_t v40; // w5
  int64_t v41; // x6
  System_String_o *v42; // x7
  int v43; // w8
  int32_t v44; // w20
  Il2CppObject *v45; // x22
  struct SoundTestMenu___c__DisplayClass114_1_o **p__8__2; // x21
  int32_t v47; // w2
  int32_t v48; // w3
  System_String_o *v49; // x4
  int32_t v50; // w5
  int64_t v51; // x6
  System_String_o *v52; // x7
  int32_t v53; // w2
  int32_t v54; // w3
  System_String_o *v55; // x4
  int32_t v56; // w5
  int64_t v57; // x6
  System_String_o *v58; // x7
  struct SoundTestMenu___c__DisplayClass114_0_o *v59; // x1
  int32_t v60; // w2
  int32_t v61; // w3
  System_String_o *v62; // x4
  int32_t v63; // w5
  int64_t v64; // x6
  System_String_o *v65; // x7
  __int64 v66; // x23
  int32_t v67; // w1
  int32_t v68; // w2
  int32_t v69; // w3
  System_String_o *v70; // x4
  int32_t v71; // w5
  int64_t v72; // x6
  System_String_o *v73; // x7
  int32_t v74; // w2
  int32_t v75; // w3
  System_String_o *v76; // x4
  int32_t v77; // w5
  int64_t v78; // x6
  System_String_o *v79; // x7
  int32_t v80; // w1
  struct System_Collections_Generic_List_string__o *v81; // x8
  int32_t v82; // w2
  int32_t v83; // w3
  System_String_o *v84; // x4
  int32_t v85; // w5
  int64_t v86; // x6
  System_String_o *v87; // x7
  int32_t v88; // w2
  int32_t v89; // w3
  System_String_o *v90; // x4
  int32_t v91; // w5
  int64_t v92; // x6
  System_String_o *v93; // x7
  int32_t v94; // w1
  System_String_o *v95; // x0
  UILabel_o *v96; // x23
  struct SoundTestMenu___c__DisplayClass114_0_o *CS___8__locals1; // x8
  struct SoundTestMenu___c__DisplayClass114_1_o *v98; // x23
  Il2CppObject *Item; // x0
  int32_t v100; // w2
  int32_t v101; // w3
  System_String_o *v102; // x4
  int32_t v103; // w5
  int64_t v104; // x6
  System_String_o *v105; // x7
  Il2CppObject *v106; // x21
  System_String_o *klass; // x22
  System_Action_o *v108; // x23
  SoundTestMenu_o *v109; // x0
  const MethodInfo *v110; // x3
  struct SoundTestMenu___c__DisplayClass114_1_o *_8__2; // x8
  struct System_Collections_Generic_List_string__o *seCpkList; // x9
  const MethodInfo *v113; // x3
  int32_t size; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4CEBD3E & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_1C7BAE8(&string___TypeInfo);
    sub_1C7BAE8(&SoundTestMenu___c__DisplayClass114_0_TypeInfo);
    sub_1C7BAE8(&Method_SoundTestMenu___c__DisplayClass114_1__OutputCurrentSeList_b__0__);
    sub_1C7BAE8(&SoundTestMenu___c__DisplayClass114_1_TypeInfo);
    sub_1C7BAE8(&StringLiteral_43/*"\n"*/);
    sub_1C7BAE8(&StringLiteral_1083/*"/SE/"*/);
    sub_1C7BAE8(&StringLiteral_1020/*".csv"*/);
    sub_1C7BAE8(&StringLiteral_11561/*"SE"*/);
    sub_1C7BAE8(&StringLiteral_161/*" / "*/);
    sub_1C7BAE8(&StringLiteral_651/*"("*/);
    sub_1C7BAE8(&StringLiteral_757/*")"*/);
    byte_4CEBD3E = 1;
  }
  size = 0;
  _1__state = this->fields.__1__state;
  result = 0;
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
    v12 = (Il2CppObject *)sub_1C7BD34(SoundTestMenu___c__DisplayClass114_0_TypeInfo);
    System_Object___ctor(v12, 0);
    this->fields.__8__1 = (struct SoundTestMenu___c__DisplayClass114_0_o *)v12;
    p__8__1 = &this->fields.__8__1;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.__8__1, (int32_t)v12, v14, v15, v16, v17, v18, v19);
    _8__1 = (__int64)this->fields.__8__1;
    if ( _8__1 )
    {
      v27 = this->fields.__4__this;
      *(_QWORD *)(_8__1 + 24) = v27;
      sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(_8__1 + 24), (int32_t)v27, v20, v21, v22, v23, v24, v25);
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
            sub_1C7BA8C(
              (GrandQuestFolderBoardItem_o *)&this->fields._labelText_5__2,
              (int32_t)mText,
              v28,
              v29,
              v30,
              v31,
              v32,
              v33);
            v36 = this->fields.__8__1;
            _8__1 = (__int64)System_String__Concat_64217180(
                               _4__this->fields.pathDiffDirectory,
                               (System_String_o *)StringLiteral_1083/*"/SE/"*/,
                               _4__this->fields.currentAssetVersionName,
                               (System_String_o *)StringLiteral_1020/*".csv"*/,
                               0);
            if ( v36 )
            {
              v36->fields.filePath = (struct System_String_o *)_8__1;
              sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v36->fields, _8__1, v37, v38, v39, v40, v41, v42);
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
                this->fields._isTop_5__3 = 1;
                for ( this->fields._i_5__4 = 0; ; this->fields._i_5__4 = size + 1 )
                {
                  if ( !_4__this )
                    goto LABEL_49;
                  seCpkList = _4__this->fields.seCpkList;
                  if ( !seCpkList )
                    goto LABEL_49;
                  if ( v43 >= seCpkList->fields._size )
                    break;
                  v45 = (Il2CppObject *)sub_1C7BD34(SoundTestMenu___c__DisplayClass114_1_TypeInfo);
                  System_Object___ctor(v45, 0);
                  this->fields.__8__2 = (struct SoundTestMenu___c__DisplayClass114_1_o *)v45;
                  p__8__2 = &this->fields.__8__2;
                  sub_1C7BA8C(
                    (GrandQuestFolderBoardItem_o *)&this->fields.__8__2,
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
                  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(_8__1 + 32), (int32_t)v59, v53, v54, v55, v56, v57, v58);
                  _8__1 = sub_1C7BB90(string___TypeInfo, 5);
                  if ( !_8__1 )
                    goto LABEL_49;
                  v66 = _8__1;
                  if ( !*(_DWORD *)(_8__1 + 24) )
                    goto LABEL_50;
                  v67 = StringLiteral_651/*"("*/;
                  *(_QWORD *)(_8__1 + 32) = StringLiteral_651/*"("*/;
                  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(_8__1 + 32), v67, v60, v61, v62, v63, v64, v65);
                  _8__1 = (__int64)System_Int32__ToString((int)this + 68, 0);
                  if ( *(_DWORD *)(v66 + 24) <= 1u )
                    goto LABEL_50;
                  *(_QWORD *)(v66 + 40) = _8__1;
                  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v66 + 40), _8__1, v68, v69, v70, v71, v72, v73);
                  if ( *(_DWORD *)(v66 + 24) <= 2u )
                    goto LABEL_50;
                  v80 = StringLiteral_161/*" / "*/;
                  *(_QWORD *)(v66 + 48) = StringLiteral_161/*" / "*/;
                  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v66 + 48), v80, v74, v75, v76, v77, v78, v79);
                  v81 = _4__this->fields.seCpkList;
                  if ( !v81 )
                    goto LABEL_49;
                  size = v81->fields._size;
                  _8__1 = (__int64)System_Int32__ToString((int32_t)&size, 0);
                  if ( *(_DWORD *)(v66 + 24) <= 3u
                    || (*(_QWORD *)(v66 + 56) = _8__1,
                        sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v66 + 56), _8__1, v82, v83, v84, v85, v86, v87),
                        *(_DWORD *)(v66 + 24) <= 4u) )
                  {
LABEL_50:
                    sub_1C7BD48(_8__1);
                  }
                  v94 = StringLiteral_757/*")"*/;
                  *(_QWORD *)(v66 + 64) = StringLiteral_757/*")"*/;
                  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v66 + 64), v94, v88, v89, v90, v91, v92, v93);
                  v95 = System_String__Concat_64217444((System_String_array *)v66, 0);
                  v96 = _4__this->fields.outputLabel;
                  _8__1 = (__int64)System_String__Concat_64176912(this->fields._labelText_5__2, v95, 0);
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
                  v98->fields.check = 0;
                  _8__1 = (__int64)_4__this->fields.seCpkList;
                  if ( !_8__1 )
                    goto LABEL_49;
                  Item = System_Collections_Generic_List_object___get_Item(
                           (System_Collections_Generic_List_object__o *)_8__1,
                           this->fields._i_5__4,
                           (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_string__get_Item__);
                  v98->fields.cpkName = (struct System_String_o *)Item;
                  sub_1C7BA8C(
                    (GrandQuestFolderBoardItem_o *)&v98->fields,
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
                  v108 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
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
                    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.__2__current, 0, v2, v3, v4, v5, v6, v7);
                    result = 1;
LABEL_47:
                    this->fields.__1__state = v44;
                    return result;
                  }
                  this->fields.__8__2 = 0;
                  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)_8__1, 0, v2, v3, v4, v5, v6, v7);
                  size = this->fields._i_5__4;
                  v43 = size + 1;
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
                      (System_String_o *)StringLiteral_11561/*"SE"*/,
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
    sub_1C7BD40(_8__1, method);
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

  v2 = sub_1C7BAFC(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C7BD34(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C7BAFC(&Method_SoundTestMenu__OutputCurrentSeList_d__114_System_Collections_IEnumerator_Reset__);
  sub_1C7BC10(v3, v4);
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

  v2 = sub_1C7BAFC(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C7BD34(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C7BAFC(&Method_SoundTestMenu__UpdateBgmProgressBarCoroutine_d__145_System_Collections_IEnumerator_Reset__);
  sub_1C7BC10(v3, v4);
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
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4CEBD31 & 1) == 0 )
  {
    sub_1C7BAE8(&SoundTestMenu___c_TypeInfo);
    byte_4CEBD31 = 1;
  }
  v1 = (Il2CppObject *)sub_1C7BD34(SoundTestMenu___c_TypeInfo);
  System_Object___ctor(v1, 0);
  SoundTestMenu___c_TypeInfo->static_fields->__9 = (struct SoundTestMenu___c_o *)v1;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)SoundTestMenu___c_TypeInfo->static_fields,
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
  if ( (byte_4CEBD32 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_KeyValuePair_string__long__get_Key__);
    byte_4CEBD32 = 1;
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
  if ( (byte_4CEBD33 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_KeyValuePair_string__long__get_Key__);
    byte_4CEBD33 = 1;
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
  if ( (byte_4CEBD34 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_KeyValuePair_string__long__get_Key__);
    byte_4CEBD34 = 1;
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
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  struct SoundTestMenu_o *v11; // x8
  struct System_String_o *inputCueSheetName; // x1
  System_String_o *v13; // x19
  CommonUI_o *v14; // x20
  SoundTestMenu___c_c *v15; // x8
  System_Action_o *_9__100_1; // x22
  System_String_o *v17; // x21
  Il2CppObject *v18; // x23
  struct SoundTestMenu___c_StaticFields *static_fields; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7

  if ( (byte_4CEBD35 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C7BAE8(&Method_SoundTestMenu___c__onClickSeOpenCue_b__100_1__);
    sub_1C7BAE8(&SoundTestMenu___c_TypeInfo);
    sub_1C7BAE8(&StringLiteral_43/*"\n"*/);
    sub_1C7BAE8(&StringLiteral_25643/*"このアセットは存在しません。"*/);
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    byte_4CEBD35 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_16;
  SoundTestMenu__createSeItem(_4__this, method);
  v4 = this->fields.__4__this;
  if ( !v4 )
    goto LABEL_16;
  v4->fields.isLoadingSeCueSheet = 0;
  _4__this = (SoundTestMenu_o *)CriAtom__GetAcb(this->fields.inputCueSheetName, 0);
  if ( _4__this )
  {
    v11 = this->fields.__4__this;
    if ( v11 )
    {
      inputCueSheetName = this->fields.inputCueSheetName;
      v11->fields.loadSeCueSheetName = inputCueSheetName;
      sub_1C7BA8C(
        (GrandQuestFolderBoardItem_o *)&v11->fields.loadSeCueSheetName,
        (int32_t)inputCueSheetName,
        v5,
        v6,
        v7,
        v8,
        v9,
        v10);
      return;
    }
LABEL_16:
    sub_1C7BD40(_4__this, method);
  }
  v13 = System_String__Concat_64215176(
          this->fields.inputCueSheetName,
          (System_String_o *)StringLiteral_43/*"\n"*/,
          (System_String_o *)StringLiteral_25643/*"このアセットは存在しません。"*/,
          0);
  _4__this = (SoundTestMenu_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v14 = (CommonUI_o *)_4__this;
  v15 = SoundTestMenu___c_TypeInfo;
  if ( !SoundTestMenu___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SoundTestMenu___c_TypeInfo);
    v15 = SoundTestMenu___c_TypeInfo;
  }
  _9__100_1 = v15->static_fields->__9__100_1;
  v17 = (System_String_o *)StringLiteral_1/*""*/;
  if ( !_9__100_1 )
  {
    if ( !v15->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v15);
      v15 = SoundTestMenu___c_TypeInfo;
    }
    v18 = (Il2CppObject *)v15->static_fields->__9;
    _9__100_1 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
    System_Action___ctor(_9__100_1, v18, Method_SoundTestMenu___c__onClickSeOpenCue_b__100_1__, 0);
    static_fields = SoundTestMenu___c_TypeInfo->static_fields;
    static_fields->__9__100_1 = _9__100_1;
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__100_1,
      (int32_t)_9__100_1,
      v20,
      v21,
      v22,
      v23,
      v24,
      v25);
  }
  if ( !v14 )
    goto LABEL_16;
  CommonUI__OpenNotificationDialog(v14, v17, v13, _9__100_1, -1, 0, 0, 0, 0, 0, 1, 0, 0, 0.0, 0, 0);
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
  CommonUI_o *v6; // x20
  SoundTestMenu___c_c *v7; // x8
  System_Action_o *_9__102_2; // x22
  System_String_o *v9; // x21
  Il2CppObject *v10; // x23
  struct SoundTestMenu___c_StaticFields *static_fields; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7

  if ( (byte_4CEBD36 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C7BAE8(&Method_SoundTestMenu___c__playSe_b__102_2__);
    sub_1C7BAE8(&SoundTestMenu___c_TypeInfo);
    sub_1C7BAE8(&StringLiteral_43/*"\n"*/);
    sub_1C7BAE8(&StringLiteral_25643/*"このアセットは存在しません。"*/);
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    byte_4CEBD36 = 1;
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
    sub_1C7BD40(_4__this, v3);
  }
  v5 = System_String__Concat_64215176(
         this->fields.inputCueSheetName,
         (System_String_o *)StringLiteral_43/*"\n"*/,
         (System_String_o *)StringLiteral_25643/*"このアセットは存在しません。"*/,
         0);
  _4__this = (SoundTestMenu_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v6 = (CommonUI_o *)_4__this;
  v7 = SoundTestMenu___c_TypeInfo;
  if ( !SoundTestMenu___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SoundTestMenu___c_TypeInfo);
    v7 = SoundTestMenu___c_TypeInfo;
  }
  _9__102_2 = v7->static_fields->__9__102_2;
  v9 = (System_String_o *)StringLiteral_1/*""*/;
  if ( !_9__102_2 )
  {
    if ( !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      v7 = SoundTestMenu___c_TypeInfo;
    }
    v10 = (Il2CppObject *)v7->static_fields->__9;
    _9__102_2 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
    System_Action___ctor(_9__102_2, v10, Method_SoundTestMenu___c__playSe_b__102_2__, 0);
    static_fields = SoundTestMenu___c_TypeInfo->static_fields;
    static_fields->__9__102_2 = _9__102_2;
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__102_2,
      (int32_t)_9__102_2,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
  }
  if ( !v6 )
    goto LABEL_15;
  CommonUI__OpenNotificationDialog(v6, v9, v5, _9__102_2, -1, 0, 0, 0, 0, 0, 1, 0, 0, 0.0, 0, 0);
}


void SoundTestMenu___c__DisplayClass102_0___playSe_b__1(
        SoundTestMenu___c__DisplayClass102_0_o *this,
        const MethodInfo *method)
{
  SoundTestMenu_o *_4__this; // x0
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  struct SoundTestMenu_o *v10; // x8
  struct System_String_o *inputCueSheetName; // x1
  const MethodInfo *v12; // x2
  System_String_o *v13; // x19
  CommonUI_o *v14; // x20
  SoundTestMenu___c_c *v15; // x8
  System_Action_o *_9__102_3; // x22
  System_String_o *v17; // x21
  Il2CppObject *v18; // x23
  struct SoundTestMenu___c_StaticFields *static_fields; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7

  if ( (byte_4CEBD37 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C7BAE8(&Method_SoundTestMenu___c__playSe_b__102_3__);
    sub_1C7BAE8(&SoundTestMenu___c_TypeInfo);
    sub_1C7BAE8(&StringLiteral_43/*"\n"*/);
    sub_1C7BAE8(&StringLiteral_25643/*"このアセットは存在しません。"*/);
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    byte_4CEBD37 = 1;
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
      sub_1C7BA8C(
        (GrandQuestFolderBoardItem_o *)&v10->fields.loadSeCueSheetName,
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
    sub_1C7BD40(_4__this, method);
  }
  v13 = System_String__Concat_64215176(
          this->fields.inputCueSheetName,
          (System_String_o *)StringLiteral_43/*"\n"*/,
          (System_String_o *)StringLiteral_25643/*"このアセットは存在しません。"*/,
          0);
  _4__this = (SoundTestMenu_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v14 = (CommonUI_o *)_4__this;
  v15 = SoundTestMenu___c_TypeInfo;
  if ( !SoundTestMenu___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SoundTestMenu___c_TypeInfo);
    v15 = SoundTestMenu___c_TypeInfo;
  }
  _9__102_3 = v15->static_fields->__9__102_3;
  v17 = (System_String_o *)StringLiteral_1/*""*/;
  if ( !_9__102_3 )
  {
    if ( !v15->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v15);
      v15 = SoundTestMenu___c_TypeInfo;
    }
    v18 = (Il2CppObject *)v15->static_fields->__9;
    _9__102_3 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
    System_Action___ctor(_9__102_3, v18, Method_SoundTestMenu___c__playSe_b__102_3__, 0);
    static_fields = SoundTestMenu___c_TypeInfo->static_fields;
    static_fields->__9__102_3 = _9__102_3;
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__102_3,
      (int32_t)_9__102_3,
      v20,
      v21,
      v22,
      v23,
      v24,
      v25);
  }
  if ( !v14 )
    goto LABEL_16;
  CommonUI__OpenNotificationDialog(v14, v17, v13, _9__102_3, -1, 0, 0, 0, 0, 0, 1, 0, 0, 0.0, 0, 0);
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
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  SoundTestMenu_o *v10; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x3

  Acb = CriAtom__GetAcb(this->fields.cueSheetName, 0);
  this->fields.acb = Acb;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)Acb, v4, v5, v6, v7, v8, v9);
  if ( !this->fields.__4__this )
    sub_1C7BD40(v10, v11);
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

  if ( (byte_4CEBD38 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    sub_1C7BAE8(&StringLiteral_1038/*".txt"*/);
    byte_4CEBD38 = 1;
  }
  Instance = (System_String_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
  if ( !Instance
    || (Instance = SoundManager__GetCueList((SoundManager_o *)Instance, this->fields.fileName, 0),
        (_4__this = this->fields.__4__this) == 0)
    || (v6 = Instance,
        v7 = System_String__Concat_64215176(
               _4__this->fields.cueListOutputPath,
               this->fields.fileName,
               (System_String_o *)StringLiteral_1038/*".txt"*/,
               0),
        System_IO_File__WriteAllLines(v7, v6, 0),
        !this->fields.__4__this) )
  {
    sub_1C7BD40(Instance, v4);
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
  struct SoundTestMenu___c__DisplayClass114_0_o *v10; // x8
  unsigned __int64 v11; // x24
  int64_t p_SoundBinders; // x21
  __int64 v13; // x0
  System_String_o *v14; // x22
  System_String_o *v15; // x0
  struct SoundTestMenu___c__DisplayClass114_0_o *v16; // x8
  int m_CancellationTokenSource; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4CEBD39 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    sub_1C7BAE8(&StringLiteral_43/*"\n"*/);
    sub_1C7BAE8(&StringLiteral_809/*","*/);
    sub_1C7BAE8(&StringLiteral_16489/*"__CPK__,"*/);
    byte_4CEBD39 = 1;
  }
  Instance = (SoundManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = (SoundManager_o *)SoundManager__GetCueInfoList(Instance, this->fields.cpkName, 0);
  if ( !Instance )
    goto LABEL_12;
  v5 = Instance;
  m_CancellationTokenSource = (int)Instance->fields.m_CancellationTokenSource;
  cpkName = this->fields.cpkName;
  v7 = System_Int32__ToString((int32_t)&m_CancellationTokenSource, 0);
  Instance = (SoundManager_o *)System_String__Concat_64217180(
                                 (System_String_o *)StringLiteral_16489/*"__CPK__,"*/,
                                 cpkName,
                                 (System_String_o *)StringLiteral_809/*","*/,
                                 v7,
                                 0);
  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_12;
  System_IO_File__AppendAllText(CS___8__locals1->fields.filePath, (System_String_o *)Instance, 0);
  v10 = this->fields.CS___8__locals1;
  if ( !v10 )
    goto LABEL_12;
  v11 = 0;
  p_SoundBinders = (int64_t)&v5->fields.SoundBinders;
  while ( (__int64)v11 < m_CancellationTokenSource )
  {
    System_IO_File__AppendAllText(v10->fields.filePath, (System_String_o *)StringLiteral_43/*"\n"*/, 0);
    if ( v11 >= LODWORD(v5->fields.m_CancellationTokenSource) )
      sub_1C7BD48(v13);
    v14 = *(System_String_o **)(p_SoundBinders - 16);
    v15 = System_Int64__ToString(p_SoundBinders, 0);
    Instance = (SoundManager_o *)System_String__Concat_64215176(v14, (System_String_o *)StringLiteral_809/*","*/, v15, 0);
    v16 = this->fields.CS___8__locals1;
    if ( v16 )
    {
      ++v11;
      p_SoundBinders += 152LL;
      System_IO_File__AppendAllText(v16->fields.filePath, (System_String_o *)Instance, 0);
      v10 = this->fields.CS___8__locals1;
      if ( v10 )
        continue;
    }
    goto LABEL_12;
  }
  if ( !v10->fields.__4__this )
LABEL_12:
    sub_1C7BD40(Instance, v4);
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

  if ( (byte_4CEBD3A & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_string__Dictionary_string__long___Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_string__long__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_string__long___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_Dictionary_string__long__TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    byte_4CEBD3A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  CueInfoList = SoundManager__GetCueInfoList((SoundManager_o *)Instance, this->fields.cpkName, 0);
  v6 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1C7BD34(System_Collections_Generic_Dictionary_string__long__TypeInfo);
  System_Collections_Generic_Dictionary_object__long____ctor(
    v6,
    (const MethodInfo_34EEBD8 *)Method_System_Collections_Generic_Dictionary_string__long___ctor__);
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
        sub_1C7BD48(Instance);
      if ( !v6 )
        break;
      System_Collections_Generic_Dictionary_object__long___Add(
        v6,
        (Il2CppObject *)*(p_length - 2),
        *p_length,
        (const MethodInfo_34EF588 *)Method_System_Collections_Generic_Dictionary_string__long__Add__);
      LODWORD(max_length) = CueInfoList->max_length;
      ++v8;
      p_length += 19;
      if ( (__int64)v8 >= (int)max_length )
        goto LABEL_10;
    }
LABEL_15:
    sub_1C7BD40(Instance, v4);
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
    (const MethodInfo_34F248C *)Method_System_Collections_Generic_Dictionary_string__Dictionary_string__long___Add__);
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
  if ( (byte_4CEBD3B & 1) == 0 )
  {
    this = (SoundTestMenu___c__DisplayClass134_0_o *)sub_1C7BAE8(&Method_UnityEngine_Component_GetComponent_UILabel___);
    byte_4CEBD3B = 1;
  }
  if ( !x
    || (this = (SoundTestMenu___c__DisplayClass134_0_o *)UnityEngine_Component__GetComponent_object_(
                                                           (UnityEngine_Component_o *)x,
                                                           (const MethodInfo_3166BC4 *)Method_UnityEngine_Component_GetComponent_UILabel___)) == 0
    || (this = (SoundTestMenu___c__DisplayClass134_0_o *)this[17].monitor) == 0 )
  {
    sub_1C7BD40(this, x);
  }
  return System_String__IndexOf_64233884((System_String_o *)this, v4->fields.searchName, 5, 0) >= 0;
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
  if ( (byte_4CEBD3C & 1) == 0 )
  {
    this = (SoundTestMenu___c__DisplayClass139_0_o *)sub_1C7BAE8(&Method_UnityEngine_Component_GetComponent_UILabel___);
    byte_4CEBD3C = 1;
  }
  if ( !x
    || (this = (SoundTestMenu___c__DisplayClass139_0_o *)UnityEngine_Component__GetComponent_object_(
                                                           (UnityEngine_Component_o *)x,
                                                           (const MethodInfo_3166BC4 *)Method_UnityEngine_Component_GetComponent_UILabel___)) == 0
    || (this = (SoundTestMenu___c__DisplayClass139_0_o *)this[17].monitor) == 0 )
  {
    sub_1C7BD40(this, x);
  }
  return System_String__IndexOf_64233884((System_String_o *)this, v4->fields.searchName, 5, 0) >= 0;
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
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  int32_t _1__state; // w8
  void *outputMask; // x0
  struct SoundTestMenu_o *_4__this; // x20
  System_String_o *CpkPath; // x0
  struct System_String_array *Files_65037232; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  int32_t v20; // w8
  int32_t v21; // w20
  Il2CppObject *v22; // x22
  struct SoundTestMenu___c__DisplayClass112_0_o **p__8__1; // x21
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  int32_t v30; // w2
  int32_t v31; // w3
  System_String_o *v32; // x4
  int32_t v33; // w5
  int64_t v34; // x6
  System_String_o *v35; // x7
  struct SoundTestMenu___c__DisplayClass112_0_o *v36; // x22
  struct System_String_array *v37; // x8
  __int64 ii_5__3; // x9
  System_String_o *v39; // x23
  System_String_o *FileNameWithoutExtension; // x0
  int32_t v41; // w2
  int32_t v42; // w3
  System_String_o *v43; // x4
  int32_t v44; // w5
  int64_t v45; // x6
  System_String_o *v46; // x7
  struct SoundTestMenu___c__DisplayClass112_0_o *v47; // x22
  GrandQuestFolderBoardItem_o *p_fields; // x22
  System_String_o *fileName; // t1
  System_String_o *v50; // x0
  int32_t v51; // w2
  int32_t v52; // w3
  System_String_o *v53; // x4
  int32_t v54; // w5
  int64_t v55; // x6
  System_String_o *v56; // x7
  Il2CppObject *v57; // x22
  System_String_o *klass; // x21
  System_Action_o *v59; // x23
  const MethodInfo *v60; // x3
  struct SoundTestMenu___c__DisplayClass112_0_o *_8__1; // x8
  struct System_String_array *files_5__2; // x9

  if ( (byte_4CEBD3F & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&System_IO_Path_TypeInfo);
    sub_1C7BAE8(&SoundManager_TypeInfo);
    sub_1C7BAE8(&Method_SoundTestMenu___c__DisplayClass112_0__allCpkCueListup_b__0__);
    sub_1C7BAE8(&SoundTestMenu___c__DisplayClass112_0_TypeInfo);
    sub_1C7BAE8(&StringLiteral_793/*"*.cpk.bytes"*/);
    byte_4CEBD3F = 1;
  }
  _1__state = this->fields.__1__state;
  outputMask = 0;
  if ( _1__state == 2 )
  {
    v21 = -1;
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
        if ( !SoundManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        CpkPath = SoundManager__getCpkPath(0);
        Files_65037232 = System_IO_Directory__GetFiles_65037232(CpkPath, (System_String_o *)StringLiteral_793/*"*.cpk.bytes"*/, 1, 0);
        this->fields._files_5__2 = Files_65037232;
        sub_1C7BA8C(
          (GrandQuestFolderBoardItem_o *)&this->fields._files_5__2,
          (int32_t)Files_65037232,
          v14,
          v15,
          v16,
          v17,
          v18,
          v19);
        outputMask = (void *)System_IO_Directory__Exists(_4__this->fields.cueListOutputPath, 0);
        if ( ((unsigned __int8)outputMask & 1) == 0 )
          outputMask = System_IO_Directory__CreateDirectory(_4__this->fields.cueListOutputPath, 0);
        v20 = 0;
        for ( this->fields._ii_5__3 = 0; ; this->fields._ii_5__3 = v20 )
        {
          files_5__2 = this->fields._files_5__2;
          if ( !files_5__2 )
            goto LABEL_37;
          if ( v20 >= SLODWORD(files_5__2->max_length) )
            break;
          v22 = (Il2CppObject *)sub_1C7BD34(SoundTestMenu___c__DisplayClass112_0_TypeInfo);
          System_Object___ctor(v22, 0);
          this->fields.__8__1 = (struct SoundTestMenu___c__DisplayClass112_0_o *)v22;
          p__8__1 = &this->fields.__8__1;
          sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.__8__1, (int32_t)v22, v24, v25, v26, v27, v28, v29);
          outputMask = this->fields.__8__1;
          if ( !outputMask )
            goto LABEL_37;
          *((_QWORD *)outputMask + 4) = _4__this;
          sub_1C7BA8C(
            (GrandQuestFolderBoardItem_o *)((char *)outputMask + 32),
            (int32_t)_4__this,
            v30,
            v31,
            v32,
            v33,
            v34,
            v35);
          v36 = *p__8__1;
          if ( !*p__8__1 )
            goto LABEL_37;
          v36->fields.check = 0;
          v37 = this->fields._files_5__2;
          if ( !v37 )
            goto LABEL_37;
          ii_5__3 = this->fields._ii_5__3;
          if ( (unsigned int)ii_5__3 >= LODWORD(v37->max_length) )
            sub_1C7BD48(outputMask);
          v39 = v37->m_Items[ii_5__3];
          if ( !System_IO_Path_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_IO_Path_TypeInfo);
          FileNameWithoutExtension = System_IO_Path__GetFileNameWithoutExtension(v39, 0);
          v36->fields.fileName = FileNameWithoutExtension;
          sub_1C7BA8C(
            (GrandQuestFolderBoardItem_o *)&v36->fields,
            (int32_t)FileNameWithoutExtension,
            v41,
            v42,
            v43,
            v44,
            v45,
            v46);
          v47 = *p__8__1;
          if ( !*p__8__1 )
            goto LABEL_37;
          fileName = v47->fields.fileName;
          p_fields = (GrandQuestFolderBoardItem_o *)&v47->fields;
          v50 = System_IO_Path__GetFileNameWithoutExtension(fileName, 0);
          p_fields->klass = (GrandQuestFolderBoardItem_c *)v50;
          sub_1C7BA8C(p_fields, (int32_t)v50, v51, v52, v53, v54, v55, v56);
          v57 = (Il2CppObject *)*p__8__1;
          if ( !*p__8__1 )
            goto LABEL_37;
          klass = (System_String_o *)v57[1].klass;
          v59 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
          System_Action___ctor(v59, v57, Method_SoundTestMenu___c__DisplayClass112_0__allCpkCueListup_b__0__, 0);
          if ( !_4__this )
            goto LABEL_37;
          SoundTestMenu__loadSE((SoundTestMenu_o *)outputMask, klass, v59, v60);
LABEL_25:
          outputMask = &this->fields.__8__1;
          _8__1 = this->fields.__8__1;
          if ( !_8__1 )
            goto LABEL_37;
          if ( !_8__1->fields.check )
          {
            v21 = 1;
LABEL_34:
            this->fields.__2__current = 0;
            sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.__2__current, 0, v2, v3, v4, v5, v6, v7);
            LOBYTE(outputMask) = 1;
LABEL_35:
            this->fields.__1__state = v21;
            return (char)outputMask;
          }
          this->fields.__8__1 = 0;
          sub_1C7BA8C((GrandQuestFolderBoardItem_o *)outputMask, 0, v2, v3, v4, v5, v6, v7);
          v20 = this->fields._ii_5__3 + 1;
        }
        if ( _4__this )
        {
          outputMask = _4__this->fields.outputMask;
          if ( outputMask )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)outputMask, 0, 0);
            v21 = 2;
            goto LABEL_34;
          }
        }
      }
    }
LABEL_37:
    sub_1C7BD40(outputMask, method);
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

  v2 = sub_1C7BAFC(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C7BD34(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C7BAFC(&Method_SoundTestMenu__allCpkCueListup_d__112_System_Collections_IEnumerator_Reset__);
  sub_1C7BC10(v3, v4);
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