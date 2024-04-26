void __fastcall MovieFileMerge___ctor(MovieFileMerge_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_string__uint__o *v3; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  System_Collections_Generic_Dictionary_string__uint__o *v10; // x20
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7

  if ( (byte_4350D57 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__uint___ctor__);
    sub_B70694(&System_Collections_Generic_Dictionary_string__uint__TypeInfo);
    byte_4350D57 = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_string__uint__o *)sub_B70764(System_Collections_Generic_Dictionary_string__uint__TypeInfo);
  System_Collections_Generic_Dictionary_string__uint____ctor(
    v3,
    (const MethodInfo_2F5E624 *)Method_System_Collections_Generic_Dictionary_string__uint___ctor__);
  this->fields.AllDownLoadFilePathCRCDictionary = v3;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.AllDownLoadFilePathCRCDictionary,
    (System_Int32_array **)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  v10 = (System_Collections_Generic_Dictionary_string__uint__o *)sub_B70764(System_Collections_Generic_Dictionary_string__uint__TypeInfo);
  System_Collections_Generic_Dictionary_string__uint____ctor(
    v10,
    (const MethodInfo_2F5E624 *)Method_System_Collections_Generic_Dictionary_string__uint___ctor__);
  this->fields.RequireDownLoadFilePathCRCDictionary = v10;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.RequireDownLoadFilePathCRCDictionary,
    (System_Int32_array **)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall MovieFileMerge__AssetLoadLogError(
        MovieFileMerge_o *this,
        System_String_o *errorCode,
        const MethodInfo *method)
{
  __int64 Instance; // x0
  __int64 v6; // x1
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  __int64 v13; // x21
  System_Int32_array **v14; // x1
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_Int32_array **v21; // x1
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  System_Int32_array **v28; // x1
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  System_Int32_array **v35; // x1
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  System_Int32_array **v42; // x1
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  System_Int32_array **v49; // x1
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  System_Int32_array **v56; // x1
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  System_Int32_array **v63; // x1
  __int64 v64; // x8
  unsigned __int64 v65; // x22
  signed __int64 v66; // x23
  __int64 v67; // x0
  Il2CppObject *v68; // x0
  __int64 v69; // x0

  if ( (byte_4350D55 & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Debug_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
    sub_B70694(&string___TypeInfo);
    sub_B70694(&StringLiteral_14291/*"The request timed out."*/);
    sub_B70694(&StringLiteral_14223/*"The network connection was lost."*/);
    sub_B70694(&StringLiteral_4324/*"Connection reset by peer"*/);
    sub_B70694(&StringLiteral_4689/*"DLErrorType"*/);
    sub_B70694(&StringLiteral_4688/*"DLErrorAsset"*/);
    sub_B70694(&StringLiteral_4323/*"Connection refused"*/);
    sub_B70694(&StringLiteral_9595/*"No address associated with hostname"*/);
    sub_B70694(&StringLiteral_2130/*"AssetBundle file download time over"*/);
    sub_B70694(&StringLiteral_13093/*"Software caused connection abort"*/);
    sub_B70694(&StringLiteral_4325/*"Connection timed out"*/);
    sub_B70694(&StringLiteral_2133/*"AssetLoadError"*/);
    byte_4350D55 = 1;
  }
  Instance = sub_B706AC(string___TypeInfo, 8LL);
  if ( !Instance )
    goto LABEL_63;
  v13 = Instance;
  Instance = StringLiteral_9595/*"No address associated with hostname"*/;
  if ( StringLiteral_9595/*"No address associated with hostname"*/ )
  {
    Instance = sub_B70754(StringLiteral_9595/*"No address associated with hostname"*/, *(_QWORD *)(*(_QWORD *)v13 + 64LL));
    if ( !Instance )
      goto LABEL_64;
    v14 = (System_Int32_array **)StringLiteral_9595/*"No address associated with hostname"*/;
  }
  else
  {
    v14 = 0LL;
  }
  if ( !*(_DWORD *)(v13 + 24) )
    goto LABEL_50;
  *(_QWORD *)(v13 + 32) = v14;
  sub_B70630((BattleServantConfConponent_o *)(v13 + 32), v14, v7, v8, v9, v10, v11, v12);
  Instance = StringLiteral_2130/*"AssetBundle file download time over"*/;
  if ( StringLiteral_2130/*"AssetBundle file download time over"*/ )
  {
    Instance = sub_B70754(StringLiteral_2130/*"AssetBundle file download time over"*/, *(_QWORD *)(*(_QWORD *)v13 + 64LL));
    if ( !Instance )
      goto LABEL_64;
    v21 = (System_Int32_array **)StringLiteral_2130/*"AssetBundle file download time over"*/;
  }
  else
  {
    v21 = 0LL;
  }
  if ( *(_DWORD *)(v13 + 24) <= 1u )
    goto LABEL_50;
  *(_QWORD *)(v13 + 40) = v21;
  sub_B70630((BattleServantConfConponent_o *)(v13 + 40), v21, v15, v16, v17, v18, v19, v20);
  Instance = StringLiteral_14223/*"The network connection was lost."*/;
  if ( StringLiteral_14223/*"The network connection was lost."*/ )
  {
    Instance = sub_B70754(StringLiteral_14223/*"The network connection was lost."*/, *(_QWORD *)(*(_QWORD *)v13 + 64LL));
    if ( !Instance )
      goto LABEL_64;
    v28 = (System_Int32_array **)StringLiteral_14223/*"The network connection was lost."*/;
  }
  else
  {
    v28 = 0LL;
  }
  if ( *(_DWORD *)(v13 + 24) <= 2u )
    goto LABEL_50;
  *(_QWORD *)(v13 + 48) = v28;
  sub_B70630((BattleServantConfConponent_o *)(v13 + 48), v28, v22, v23, v24, v25, v26, v27);
  Instance = StringLiteral_4324/*"Connection reset by peer"*/;
  if ( StringLiteral_4324/*"Connection reset by peer"*/ )
  {
    Instance = sub_B70754(StringLiteral_4324/*"Connection reset by peer"*/, *(_QWORD *)(*(_QWORD *)v13 + 64LL));
    if ( !Instance )
      goto LABEL_64;
    v35 = (System_Int32_array **)StringLiteral_4324/*"Connection reset by peer"*/;
  }
  else
  {
    v35 = 0LL;
  }
  if ( *(_DWORD *)(v13 + 24) <= 3u )
    goto LABEL_50;
  *(_QWORD *)(v13 + 56) = v35;
  sub_B70630((BattleServantConfConponent_o *)(v13 + 56), v35, v29, v30, v31, v32, v33, v34);
  Instance = StringLiteral_13093/*"Software caused connection abort"*/;
  if ( StringLiteral_13093/*"Software caused connection abort"*/ )
  {
    Instance = sub_B70754(StringLiteral_13093/*"Software caused connection abort"*/, *(_QWORD *)(*(_QWORD *)v13 + 64LL));
    if ( !Instance )
      goto LABEL_64;
    v42 = (System_Int32_array **)StringLiteral_13093/*"Software caused connection abort"*/;
  }
  else
  {
    v42 = 0LL;
  }
  if ( *(_DWORD *)(v13 + 24) <= 4u )
    goto LABEL_50;
  *(_QWORD *)(v13 + 64) = v42;
  sub_B70630((BattleServantConfConponent_o *)(v13 + 64), v42, v36, v37, v38, v39, v40, v41);
  Instance = StringLiteral_4325/*"Connection timed out"*/;
  if ( StringLiteral_4325/*"Connection timed out"*/ )
  {
    Instance = sub_B70754(StringLiteral_4325/*"Connection timed out"*/, *(_QWORD *)(*(_QWORD *)v13 + 64LL));
    if ( !Instance )
      goto LABEL_64;
    v49 = (System_Int32_array **)StringLiteral_4325/*"Connection timed out"*/;
  }
  else
  {
    v49 = 0LL;
  }
  if ( *(_DWORD *)(v13 + 24) <= 5u )
    goto LABEL_50;
  *(_QWORD *)(v13 + 72) = v49;
  sub_B70630((BattleServantConfConponent_o *)(v13 + 72), v49, v43, v44, v45, v46, v47, v48);
  Instance = StringLiteral_4323/*"Connection refused"*/;
  if ( StringLiteral_4323/*"Connection refused"*/ )
  {
    Instance = sub_B70754(StringLiteral_4323/*"Connection refused"*/, *(_QWORD *)(*(_QWORD *)v13 + 64LL));
    if ( !Instance )
      goto LABEL_64;
    v56 = (System_Int32_array **)StringLiteral_4323/*"Connection refused"*/;
  }
  else
  {
    v56 = 0LL;
  }
  if ( *(_DWORD *)(v13 + 24) <= 6u )
    goto LABEL_50;
  *(_QWORD *)(v13 + 80) = v56;
  sub_B70630((BattleServantConfConponent_o *)(v13 + 80), v56, v50, v51, v52, v53, v54, v55);
  Instance = StringLiteral_14291/*"The request timed out."*/;
  if ( StringLiteral_14291/*"The request timed out."*/ )
  {
    Instance = sub_B70754(StringLiteral_14291/*"The request timed out."*/, *(_QWORD *)(*(_QWORD *)v13 + 64LL));
    if ( Instance )
    {
      v63 = (System_Int32_array **)StringLiteral_14291/*"The request timed out."*/;
      goto LABEL_43;
    }
LABEL_64:
    v69 = sub_B7078C(Instance);
    sub_B70738(v69, 0LL);
  }
  v63 = 0LL;
LABEL_43:
  if ( *(_DWORD *)(v13 + 24) <= 7u )
    goto LABEL_50;
  *(_QWORD *)(v13 + 88) = v63;
  sub_B70630((BattleServantConfConponent_o *)(v13 + 88), v63, v57, v58, v59, v60, v61, v62);
  v64 = *(_QWORD *)(v13 + 24);
  if ( (int)v64 < 1 )
  {
LABEL_51:
    if ( (BYTE3(UnityEngine_Debug_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
    }
    v68 = (Il2CppObject *)errorCode;
    goto LABEL_62;
  }
  v65 = 0LL;
  v66 = (int)v64;
  while ( 1 )
  {
    if ( !errorCode )
      goto LABEL_63;
    Instance = System_String__Contains(errorCode, *(System_String_o **)(v13 + 32 + 8 * v65), 0LL);
    if ( (Instance & 1) != 0 )
      break;
    if ( (__int64)++v65 >= v66 )
      goto LABEL_51;
    if ( v65 >= *(unsigned int *)(v13 + 24) )
      goto LABEL_50;
  }
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
  if ( !Instance )
LABEL_63:
    sub_B7076C(Instance, v6);
  CrashReporter__AddCustomKey(
    (CrashReporter_o *)Instance,
    (System_String_o *)StringLiteral_4688/*"DLErrorAsset"*/,
    this->fields.downloadingURL,
    0LL);
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
  if ( (unsigned int)v65 >= *(_DWORD *)(v13 + 24) )
  {
LABEL_50:
    v67 = sub_B70798(Instance);
    sub_B70738(v67, 0LL);
  }
  if ( !Instance )
    goto LABEL_63;
  CrashReporter__AddCustomKey(
    (CrashReporter_o *)Instance,
    (System_String_o *)StringLiteral_4689/*"DLErrorType"*/,
    *(System_String_o **)(v13 + 32 + 8 * v65),
    0LL);
  if ( (BYTE3(UnityEngine_Debug_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
  }
  v68 = (Il2CppObject *)StringLiteral_2133/*"AssetLoadError"*/;
LABEL_62:
  UnityEngine_Debug__LogError(v68, 0LL);
}


System_Collections_IEnumerator_o *__fastcall MovieFileMerge__CRCDownloadAndCheck(
        MovieFileMerge_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_4350D4C & 1) == 0 )
  {
    sub_B70694(&MovieFileMerge__CRCDownloadAndCheck_d__33_TypeInfo);
    byte_4350D4C = 1;
  }
  v3 = sub_B70764(MovieFileMerge__CRCDownloadAndCheck_d__33_TypeInfo);
  MovieFileMerge__CRCDownloadAndCheck_d__33___ctor((MovieFileMerge__CRCDownloadAndCheck_d__33_o *)v3, 0, 0LL);
  if ( !v3 )
    sub_B7076C(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_B70630((BattleServantConfConponent_o *)(v3 + 32), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v3;
}


System_Collections_Generic_Dictionary_string__uint__o *__fastcall MovieFileMerge__CreateDic(
        MovieFileMerge_o *this,
        System_String_o *dataPath,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_string__uint__o *v4; // x19
  System_String_array *AllLines; // x0
  System_String_array *v6; // x1
  int max_length; // w8
  System_String_array *v8; // x20
  unsigned int v9; // w22
  System_String_o *v10; // x21
  System_String_array *v11; // x21
  __int64 v13; // x0
  uint32_t result; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4350D53 & 1) == 0 )
  {
    sub_B70694(&char___TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__uint__Add__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__uint___ctor__);
    sub_B70694(&System_Collections_Generic_Dictionary_string__uint__TypeInfo);
    byte_4350D53 = 1;
  }
  result = 0;
  v4 = (System_Collections_Generic_Dictionary_string__uint__o *)sub_B70764(System_Collections_Generic_Dictionary_string__uint__TypeInfo);
  System_Collections_Generic_Dictionary_string__uint____ctor(
    v4,
    (const MethodInfo_2F5E624 *)Method_System_Collections_Generic_Dictionary_string__uint___ctor__);
  AllLines = System_IO_File__ReadAllLines(dataPath, 0LL);
  if ( !AllLines )
LABEL_20:
    sub_B7076C(AllLines, v6);
  max_length = AllLines->max_length;
  v8 = AllLines;
  if ( max_length >= 1 )
  {
    v9 = 0;
    while ( 1 )
    {
      if ( v9 >= max_length )
        goto LABEL_19;
      v10 = v8->m_Items[v9];
      AllLines = (System_String_array *)sub_B706AC(char___TypeInfo, 1LL);
      if ( !AllLines )
        goto LABEL_20;
      v6 = AllLines;
      if ( !AllLines->max_length )
      {
LABEL_19:
        v13 = sub_B70798(AllLines);
        sub_B70738(v13, 0LL);
      }
      LOWORD(AllLines->m_Items[0]) = 44;
      if ( !v10 )
        goto LABEL_20;
      AllLines = System_String__Split(v10, (System_Char_array *)AllLines, 0LL);
      result = 0;
      if ( !AllLines )
        goto LABEL_20;
      v11 = AllLines;
      if ( AllLines->max_length <= 1 )
        goto LABEL_19;
      AllLines = (System_String_array *)System_UInt32__TryParse(AllLines->m_Items[1], &result, 0LL);
      if ( ((unsigned __int8)AllLines & 1) == 0 )
        return 0LL;
      if ( !v11->max_length )
        goto LABEL_19;
      if ( !v4 )
        goto LABEL_20;
      System_Collections_Generic_Dictionary_string__uint___Add(
        v4,
        v11->m_Items[0],
        result,
        (const MethodInfo_2F5F1D8 *)Method_System_Collections_Generic_Dictionary_string__uint__Add__);
      max_length = v8->max_length;
      if ( (int)++v9 >= max_length )
        return v4;
    }
  }
  return v4;
}


void __fastcall MovieFileMerge__Delete(System_String_o *folder, const MethodInfo *method)
{
  System_String_o *v2; // x19
  System_String_o *FileName; // x19
  Il2CppObject *LocalDataPath; // x0
  System_String_o *v5; // x19
  __int64 v6; // x0

  v2 = folder;
  if ( (byte_4350D4F & 1) == 0 )
  {
    sub_B70694(&char___TypeInfo);
    sub_B70694(&System_IO_Path_TypeInfo);
    sub_B70694(&StringLiteral_23994/*"{0}/{1}"*/);
    folder = (System_String_o *)sub_B70694(&StringLiteral_890/*"/"*/);
    byte_4350D4F = 1;
  }
  if ( !v2 )
    goto LABEL_14;
  if ( !System_String__EndsWith(v2, (System_String_o *)StringLiteral_890/*"/"*/, 0LL) )
    goto LABEL_8;
  folder = (System_String_o *)sub_B706AC(char___TypeInfo, 1LL);
  if ( !folder )
LABEL_14:
    sub_B7076C(folder, method);
  if ( !LODWORD(folder[1].klass) )
  {
    v6 = sub_B70798(folder);
    sub_B70738(v6, 0LL);
  }
  LOWORD(folder[1].monitor) = 47;
  v2 = System_String__TrimEnd(v2, (System_Char_array *)folder, 0LL);
LABEL_8:
  if ( (BYTE3(System_IO_Path_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_IO_Path_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_IO_Path_TypeInfo);
  }
  FileName = System_IO_Path__GetFileName(v2, 0LL);
  LocalDataPath = (Il2CppObject *)MovieFileMerge__GetLocalDataPath((const MethodInfo *)FileName);
  v5 = System_String__Format_44753704(
         (System_String_o *)StringLiteral_23994/*"{0}/{1}"*/,
         LocalDataPath,
         (Il2CppObject *)FileName,
         0LL);
  if ( System_IO_Directory__Exists(v5, 0LL) )
    System_IO_Directory__Delete_44697464(v5, 1, 0LL);
}


void __fastcall MovieFileMerge__Delete_23431436(const MethodInfo *method)
{
  System_String_o *LocalDataPath; // x0
  _BOOL8 v2; // x0
  System_String_o *v3; // x0

  LocalDataPath = MovieFileMerge__GetLocalDataPath(method);
  v2 = System_IO_Directory__Exists(LocalDataPath, 0LL);
  if ( v2 )
  {
    v3 = MovieFileMerge__GetLocalDataPath((const MethodInfo *)v2);
    System_IO_Directory__Delete_44697464(v3, 1, 0LL);
  }
}


System_Collections_IEnumerator_o *__fastcall MovieFileMerge__Download(
        MovieFileMerge_o *this,
        System_String_o *fileName,
        uint32_t crc,
        const MethodInfo *method)
{
  __int64 v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7

  if ( (byte_4350D52 & 1) == 0 )
  {
    sub_B70694(&MovieFileMerge__Download_d__41_TypeInfo);
    byte_4350D52 = 1;
  }
  v7 = sub_B70764(MovieFileMerge__Download_d__41_TypeInfo);
  MovieFileMerge__Download_d__41___ctor((MovieFileMerge__Download_d__41_o *)v7, 0, 0LL);
  if ( !v7 )
    sub_B7076C(v8, v9);
  *(_QWORD *)(v7 + 32) = this;
  sub_B70630((BattleServantConfConponent_o *)(v7 + 32), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 40) = fileName;
  sub_B70630((BattleServantConfConponent_o *)(v7 + 40), (System_Int32_array **)fileName, v16, v17, v18, v19, v20, v21);
  *(_DWORD *)(v7 + 48) = crc;
  return (System_Collections_IEnumerator_o *)v7;
}


void __fastcall MovieFileMerge__DownloadCancel(MovieFileMerge_o *this, const MethodInfo *method)
{
  this->fields.isDownloadCancel = 1;
}


System_Collections_IEnumerator_o *__fastcall MovieFileMerge__DownloadMovie(
        MovieFileMerge_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_4350D4D & 1) == 0 )
  {
    sub_B70694(&MovieFileMerge__DownloadMovie_d__34_TypeInfo);
    byte_4350D4D = 1;
  }
  v3 = sub_B70764(MovieFileMerge__DownloadMovie_d__34_TypeInfo);
  MovieFileMerge__DownloadMovie_d__34___ctor((MovieFileMerge__DownloadMovie_d__34_o *)v3, 0, 0LL);
  if ( !v3 )
    sub_B7076C(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_B70630((BattleServantConfConponent_o *)(v3 + 32), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v3;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MovieFileMerge__EndMergeRetryDialog(MovieFileMerge_o *this, bool isDecide, const MethodInfo *method)
{
  if ( isDecide )
    this->fields.isErrorDialog = 0;
  else
    MovieFileMerge__Reboot(this, (const MethodInfo *)isDecide);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MovieFileMerge__EndRetryDialog(MovieFileMerge_o *this, bool isDecide, const MethodInfo *method)
{
  if ( isDecide )
    this->fields.isErrorDialog = 0;
  else
    MovieFileMerge__Reboot(this, (const MethodInfo *)isDecide);
}


void __fastcall MovieFileMerge__EndWarningDialog(MovieFileMerge_o *this, bool isDecide, const MethodInfo *method)
{
  this->fields.isErrorDialog = 0;
}


bool __fastcall MovieFileMerge__ExistCRCCheckedMovieFile(
        MovieFileMerge_o *this,
        System_String_o *assetFolderURL,
        const MethodInfo *method)
{
  System_String_o *v3; // x19
  System_String_o *FileName; // x20
  Il2CppObject *LocalDataPath; // x0
  System_String_o *v6; // x19
  Il2CppObject *v7; // x21
  FileMergeAndSplit_c *v8; // x8
  System_String_o *v9; // x0
  __int64 v11; // x0

  v3 = assetFolderURL;
  if ( (byte_4350D43 & 1) == 0 )
  {
    sub_B70694(&char___TypeInfo);
    sub_B70694(&FileMergeAndSplit_TypeInfo);
    sub_B70694(&System_IO_Path_TypeInfo);
    sub_B70694(&StringLiteral_890/*"/"*/);
    sub_B70694(&StringLiteral_23999/*"{0}/{1}/{2}"*/);
    this = (MovieFileMerge_o *)sub_B70694(&StringLiteral_23998/*"{0}/{1}/{1}.usm"*/);
    byte_4350D43 = 1;
  }
  if ( !v3 )
    goto LABEL_17;
  if ( !System_String__EndsWith(v3, (System_String_o *)StringLiteral_890/*"/"*/, 0LL) )
    goto LABEL_8;
  this = (MovieFileMerge_o *)sub_B706AC(char___TypeInfo, 1LL);
  if ( !this )
LABEL_17:
    sub_B7076C(this, assetFolderURL);
  if ( !LODWORD(this->fields.assetFolderURL) )
  {
    v11 = sub_B70798(this);
    sub_B70738(v11, 0LL);
  }
  LOWORD(this->fields.assetFolder) = 47;
  v3 = System_String__TrimEnd(v3, (System_Char_array *)this, 0LL);
LABEL_8:
  if ( (BYTE3(System_IO_Path_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_IO_Path_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_IO_Path_TypeInfo);
  }
  FileName = System_IO_Path__GetFileName(v3, 0LL);
  LocalDataPath = (Il2CppObject *)MovieFileMerge__GetLocalDataPath((const MethodInfo *)FileName);
  v6 = System_String__Format_44753704(
         (System_String_o *)StringLiteral_23998/*"{0}/{1}/{1}.usm"*/,
         LocalDataPath,
         (Il2CppObject *)FileName,
         0LL);
  v7 = (Il2CppObject *)MovieFileMerge__GetLocalDataPath((const MethodInfo *)v6);
  v8 = FileMergeAndSplit_TypeInfo;
  if ( (BYTE3(FileMergeAndSplit_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FileMergeAndSplit_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FileMergeAndSplit_TypeInfo);
    v8 = FileMergeAndSplit_TypeInfo;
  }
  v9 = System_String__Format_44759232(
         (System_String_o *)StringLiteral_23999/*"{0}/{1}/{2}"*/,
         v7,
         (Il2CppObject *)FileName,
         (Il2CppObject *)v8->static_fields->PathCRCFileName,
         0LL);
  return !System_IO_File__Exists(v9, 0LL) && System_IO_File__Exists(v6, 0LL);
}


float __fastcall MovieFileMerge__GetDownloadProgress(MovieFileMerge_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_string__uint__o *RequireDownLoadFilePathCRCDictionary; // x0
  float v4; // s8
  __int64 v5; // x1
  System_Collections_Generic_Dictionary_string__uint__o *v6; // x0
  int32_t downloadProgress; // s8

  if ( (byte_4350D47 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__uint__get_Count__);
    byte_4350D47 = 1;
  }
  RequireDownLoadFilePathCRCDictionary = this->fields.RequireDownLoadFilePathCRCDictionary;
  v4 = 0.0;
  if ( RequireDownLoadFilePathCRCDictionary
    && System_Collections_Generic_Dictionary_string__uint___get_Count(
         RequireDownLoadFilePathCRCDictionary,
         (const MethodInfo_2F5EDD4 *)Method_System_Collections_Generic_Dictionary_string__uint__get_Count__) )
  {
    v6 = this->fields.RequireDownLoadFilePathCRCDictionary;
    if ( !v6 )
      sub_B7076C(0LL, v5);
    downloadProgress = this->fields.downloadProgress;
    return (float)downloadProgress
         / (float)System_Collections_Generic_Dictionary_string__uint___get_Count(
                    v6,
                    (const MethodInfo_2F5EDD4 *)Method_System_Collections_Generic_Dictionary_string__uint__get_Count__);
  }
  return v4;
}


double __fastcall MovieFileMerge__GetDownloadSize(MovieFileMerge_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_string__uint__o *RequireDownLoadFilePathCRCDictionary; // x0

  if ( (byte_4350D46 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__uint__get_Count__);
    byte_4350D46 = 1;
  }
  RequireDownLoadFilePathCRCDictionary = this->fields.RequireDownLoadFilePathCRCDictionary;
  if ( !RequireDownLoadFilePathCRCDictionary )
    sub_B7076C(0LL, method);
  return (double)(System_Collections_Generic_Dictionary_string__uint___get_Count(
                    RequireDownLoadFilePathCRCDictionary,
                    (const MethodInfo_2F5EDD4 *)Method_System_Collections_Generic_Dictionary_string__uint__get_Count__) << 20);
}


System_String_o *__fastcall MovieFileMerge__GetLocalDataPath(const MethodInfo *method)
{
  System_String_o *persistentDataPath; // x0

  if ( (byte_4350D44 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_945/*"/extend-data/movie"*/);
    byte_4350D44 = 1;
  }
  persistentDataPath = UnityEngine_Application__get_persistentDataPath(0LL);
  return System_String__Concat_44758168(persistentDataPath, (System_String_o *)StringLiteral_945/*"/extend-data/movie"*/, 0LL);
}


System_String_o *__fastcall MovieFileMerge__GetLocalFolderPath(MovieFileMerge_o *this, const MethodInfo *method)
{
  MovieFileMerge_o *v2; // x19
  Il2CppObject *LocalDataPath; // x0

  v2 = this;
  if ( (byte_4350D50 & 1) == 0 )
  {
    this = (MovieFileMerge_o *)sub_B70694(&StringLiteral_23994/*"{0}/{1}"*/);
    byte_4350D50 = 1;
  }
  LocalDataPath = (Il2CppObject *)MovieFileMerge__GetLocalDataPath((const MethodInfo *)this);
  return System_String__Format_44753704(
           (System_String_o *)StringLiteral_23994/*"{0}/{1}"*/,
           LocalDataPath,
           (Il2CppObject *)v2->fields.assetFolder,
           0LL);
}


float __fastcall MovieFileMerge__GetMergeProgress(MovieFileMerge_o *this, const MethodInfo *method)
{
  struct FileMergeAndSplit_Merge_o *mergeClass; // x8

  mergeClass = this->fields.mergeClass;
  if ( mergeClass )
    return mergeClass->fields.progress;
  else
    return 0.0;
}


System_Collections_Generic_Dictionary_string__uint__o *__fastcall MovieFileMerge__GetNeedDownloadDictionary(
        MovieFileMerge_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_string__uint__o *v3; // x19
  __int64 v4; // x1
  System_Collections_Generic_Dictionary_string__uint__o *AllDownLoadFilePathCRCDictionary; // x0
  const MethodInfo *v6; // x1
  Il2CppObject *key; // x21
  uint32_t value; // w22
  Il2CppObject *LocalFolderPath; // x1
  System_String_o *v10; // x23
  _BOOL8 v11; // x0
  __int64 v12; // x1
  System_Byte_array *AllBytes; // x24
  uint32_t v14; // w1
  System_IO_DirectoryInfo_o *Parent; // x0
  __int64 v16; // x1
  System_IO_DirectoryInfo_o *v17; // x21
  System_String_o *v18; // x0
  System_String_o *v19; // x0
  System_Collections_Generic_Dictionary_Enumerator_string__uint__o v21; // [xsp+0h] [xbp-B0h] BYREF
  uint32_t v22; // [xsp+2Ch] [xbp-84h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_string__uint__o v23; // [xsp+30h] [xbp-80h] BYREF

  if ( (byte_4350D51 & 1) == 0 )
  {
    sub_B70694(&Crc32_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__uint__Add__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__uint__GetEnumerator__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__uint___ctor__);
    sub_B70694(&System_Collections_Generic_Dictionary_string__uint__TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_Enumerator_string__uint__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_Enumerator_string__uint__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_Enumerator_string__uint__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_KeyValuePair_string__uint__get_Key__);
    sub_B70694(&Method_System_Collections_Generic_KeyValuePair_string__uint__get_Value__);
    sub_B70694(&StringLiteral_23994/*"{0}/{1}"*/);
    byte_4350D51 = 1;
  }
  memset(&v23, 0, sizeof(v23));
  v22 = 0;
  v3 = (System_Collections_Generic_Dictionary_string__uint__o *)sub_B70764(System_Collections_Generic_Dictionary_string__uint__TypeInfo);
  System_Collections_Generic_Dictionary_string__uint____ctor(
    v3,
    (const MethodInfo_2F5E624 *)Method_System_Collections_Generic_Dictionary_string__uint___ctor__);
  AllDownLoadFilePathCRCDictionary = this->fields.AllDownLoadFilePathCRCDictionary;
  if ( !AllDownLoadFilePathCRCDictionary )
    sub_B7076C(0LL, v4);
  System_Collections_Generic_Dictionary_string__uint___GetEnumerator(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v21,
    AllDownLoadFilePathCRCDictionary,
    (const MethodInfo_2F5F76C *)Method_System_Collections_Generic_Dictionary_string__uint__GetEnumerator__);
  v23 = v21;
  while ( System_Collections_Generic_Dictionary_Enumerator_string__uint___MoveNext(
            &v23,
            (const MethodInfo_277F758 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__uint__MoveNext__) )
  {
    key = v23.fields.current.fields.key;
    value = (uint32_t)v23.fields.current.fields.value;
    LocalFolderPath = (Il2CppObject *)MovieFileMerge__GetLocalFolderPath(this, v6);
    v10 = System_String__Format_44753704((System_String_o *)StringLiteral_23994/*"{0}/{1}"*/, LocalFolderPath, key, 0LL);
    v11 = System_IO_File__Exists(v10, 0LL);
    if ( !v11 )
      goto LABEL_12;
    AllBytes = System_IO_File__ReadAllBytes(v10, 0LL);
    v22 = value;
    if ( (BYTE3(Crc32_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Crc32_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
    v14 = Crc32__Compute(AllBytes, 0LL);
    if ( !System_UInt32__Equals_43227888((uint32_t)&v22, v14, 0LL) )
    {
      System_IO_File__Delete(v10, 0LL);
LABEL_12:
      if ( !v3 )
        sub_B7076C(v11, v12);
      System_Collections_Generic_Dictionary_string__uint___Add(
        v3,
        (System_String_o *)key,
        value,
        (const MethodInfo_2F5F1D8 *)Method_System_Collections_Generic_Dictionary_string__uint__Add__);
      Parent = System_IO_Directory__GetParent(v10, 0LL);
      v17 = Parent;
      if ( !Parent )
        sub_B7076C(0LL, v16);
      v18 = (System_String_o *)((__int64 (__fastcall *)(System_IO_DirectoryInfo_o *, Il2CppMethodPointer))Parent->klass->vtable._7_get_FullName.method)(
                                 Parent,
                                 Parent->klass->vtable._8_get_Name.methodPtr);
      if ( !System_IO_Directory__Exists(v18, 0LL) )
      {
        v19 = (System_String_o *)((__int64 (__fastcall *)(System_IO_DirectoryInfo_o *, Il2CppMethodPointer))v17->klass->vtable._7_get_FullName.method)(
                                   v17,
                                   v17->klass->vtable._8_get_Name.methodPtr);
        System_IO_Directory__CreateDirectory(v19, 0LL);
      }
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_string__uint___Dispose(
    &v23,
    (const MethodInfo_277F8C4 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__uint__Dispose__);
  return v3;
}


System_Collections_Generic_List_string__o *__fastcall MovieFileMerge__GetSplitFileList(
        MovieFileMerge_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x19
  const MethodInfo *v4; // x1
  System_String_o *LocalFolderPath; // x0
  __int64 v6; // x1
  System_Collections_Generic_Dictionary_string__uint__o *AllDownLoadFilePathCRCDictionary; // x0
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x0
  const MethodInfo *v9; // x1
  Il2CppObject *current; // x21
  Il2CppObject *v11; // x1
  System_String_o *v12; // x0
  System_Collections_Generic_List_Enumerator_T__o v14; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4350D54 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__uint__get_Keys__);
    sub_B70694(&Method_System_Linq_Enumerable_ToList_string___);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_List_string__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_string__GetEnumerator__);
    sub_B70694(&Method_System_Collections_Generic_List_string___ctor__);
    sub_B70694(&System_Collections_Generic_List_string__TypeInfo);
    sub_B70694(&StringLiteral_23994/*"{0}/{1}"*/);
    byte_4350D54 = 1;
  }
  memset(&v14, 0, sizeof(v14));
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_string___ctor__);
  LocalFolderPath = MovieFileMerge__GetLocalFolderPath(this, v4);
  if ( System_IO_Directory__Exists(LocalFolderPath, 0LL) )
  {
    AllDownLoadFilePathCRCDictionary = this->fields.AllDownLoadFilePathCRCDictionary;
    if ( !AllDownLoadFilePathCRCDictionary
      || (Keys = System_Collections_Generic_Dictionary_string__uint___get_Keys(
                   AllDownLoadFilePathCRCDictionary,
                   (const MethodInfo_2F5EDE4 *)Method_System_Collections_Generic_Dictionary_string__uint__get_Keys__),
          (AllDownLoadFilePathCRCDictionary = (System_Collections_Generic_Dictionary_string__uint__o *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_((System_Collections_Generic_IEnumerable_TSource__o *)Keys, (const MethodInfo_1CCB668 *)Method_System_Linq_Enumerable_ToList_string___)) == 0LL) )
    {
      sub_B7076C(AllDownLoadFilePathCRCDictionary, v6);
    }
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v14,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)AllDownLoadFilePathCRCDictionary,
      (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v14,
              (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
    {
      current = v14.fields.current;
      v11 = (Il2CppObject *)MovieFileMerge__GetLocalFolderPath(this, v9);
      v12 = System_String__Format_44753704((System_String_o *)StringLiteral_23994/*"{0}/{1}"*/, v11, current, 0LL);
      if ( !v3 )
        sub_B7076C(v12, v12);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v3,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v12,
        (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_string__Add__);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v14,
      (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
  }
  return (System_Collections_Generic_List_string__o *)v3;
}


double __fastcall MovieFileMerge__GetTotalRequireSize(MovieFileMerge_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_string__uint__o *AllDownLoadFilePathCRCDictionary; // x0
  System_Collections_Generic_Dictionary_string__uint__o *RequireDownLoadFilePathCRCDictionary; // x8

  if ( (byte_4350D45 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__uint__get_Count__);
    byte_4350D45 = 1;
  }
  AllDownLoadFilePathCRCDictionary = this->fields.AllDownLoadFilePathCRCDictionary;
  if ( !AllDownLoadFilePathCRCDictionary
    || (AllDownLoadFilePathCRCDictionary = (System_Collections_Generic_Dictionary_string__uint__o *)System_Collections_Generic_Dictionary_string__uint___get_Count(AllDownLoadFilePathCRCDictionary, (const MethodInfo_2F5EDD4 *)Method_System_Collections_Generic_Dictionary_string__uint__get_Count__),
        (RequireDownLoadFilePathCRCDictionary = this->fields.RequireDownLoadFilePathCRCDictionary) == 0LL) )
  {
    sub_B7076C(AllDownLoadFilePathCRCDictionary, method);
  }
  return (double)((System_Collections_Generic_Dictionary_string__uint___get_Count(
                     RequireDownLoadFilePathCRCDictionary,
                     (const MethodInfo_2F5EDD4 *)Method_System_Collections_Generic_Dictionary_string__uint__get_Count__)
                 + (int)AllDownLoadFilePathCRCDictionary) << 20);
}


void __fastcall MovieFileMerge__Initialize(
        MovieFileMerge_o *this,
        System_String_o *assetFolderURL,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_string__uint__o *AllDownLoadFilePathCRCDictionary; // x0
  System_Collections_Generic_Dictionary_string__uint__o *v6; // x22
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  System_Collections_Generic_Dictionary_string__uint__o *RequireDownLoadFilePathCRCDictionary; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_Collections_Generic_Dictionary_string__uint__o *v20; // x22
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_Char_array *v33; // x0
  __int64 v34; // x1
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  struct System_String_o *FileName; // x0
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  const MethodInfo *v48; // x1
  Il2CppObject *LocalFolderPath; // x0
  struct System_String_o *v50; // x0
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  const MethodInfo *v57; // x1
  Il2CppObject *v58; // x0
  struct System_String_o *v59; // x0
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  const MethodInfo *v66; // x1
  Il2CppObject *v67; // x20
  FileMergeAndSplit_c *v68; // x8
  struct System_String_o *v69; // x0
  System_String_array **v70; // x2
  System_String_array **v71; // x3
  System_Boolean_array **v72; // x4
  System_Int32_array **v73; // x5
  System_Int32_array *v74; // x6
  System_Int32_array *v75; // x7
  __int64 v76; // x0

  if ( (byte_4350D4B & 1) == 0 )
  {
    sub_B70694(&char___TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__uint__Clear__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__uint___ctor__);
    sub_B70694(&System_Collections_Generic_Dictionary_string__uint__TypeInfo);
    sub_B70694(&FileMergeAndSplit_TypeInfo);
    sub_B70694(&System_IO_Path_TypeInfo);
    sub_B70694(&StringLiteral_23994/*"{0}/{1}"*/);
    sub_B70694(&StringLiteral_23990/*"{0}/SplitFile"*/);
    sub_B70694(&StringLiteral_890/*"/"*/);
    sub_B70694(&StringLiteral_23996/*"{0}/{1}.usm"*/);
    byte_4350D4B = 1;
  }
  AllDownLoadFilePathCRCDictionary = this->fields.AllDownLoadFilePathCRCDictionary;
  if ( AllDownLoadFilePathCRCDictionary )
  {
    System_Collections_Generic_Dictionary_string__uint___Clear(
      AllDownLoadFilePathCRCDictionary,
      (const MethodInfo_2F5F3B4 *)Method_System_Collections_Generic_Dictionary_string__uint__Clear__);
  }
  else
  {
    v6 = (System_Collections_Generic_Dictionary_string__uint__o *)sub_B70764(System_Collections_Generic_Dictionary_string__uint__TypeInfo);
    System_Collections_Generic_Dictionary_string__uint____ctor(
      v6,
      (const MethodInfo_2F5E624 *)Method_System_Collections_Generic_Dictionary_string__uint___ctor__);
    this->fields.AllDownLoadFilePathCRCDictionary = v6;
    sub_B70630(
      (BattleServantConfConponent_o *)&this->fields.AllDownLoadFilePathCRCDictionary,
      (System_Int32_array **)v6,
      v7,
      v8,
      v9,
      v10,
      v11,
      v12);
  }
  RequireDownLoadFilePathCRCDictionary = this->fields.RequireDownLoadFilePathCRCDictionary;
  if ( RequireDownLoadFilePathCRCDictionary )
  {
    System_Collections_Generic_Dictionary_string__uint___Clear(
      RequireDownLoadFilePathCRCDictionary,
      (const MethodInfo_2F5F3B4 *)Method_System_Collections_Generic_Dictionary_string__uint__Clear__);
  }
  else
  {
    v20 = (System_Collections_Generic_Dictionary_string__uint__o *)sub_B70764(System_Collections_Generic_Dictionary_string__uint__TypeInfo);
    System_Collections_Generic_Dictionary_string__uint____ctor(
      v20,
      (const MethodInfo_2F5E624 *)Method_System_Collections_Generic_Dictionary_string__uint___ctor__);
    this->fields.RequireDownLoadFilePathCRCDictionary = v20;
    sub_B70630(
      (BattleServantConfConponent_o *)&this->fields.RequireDownLoadFilePathCRCDictionary,
      (System_Int32_array **)v20,
      v21,
      v22,
      v23,
      v24,
      v25,
      v26);
  }
  *(_QWORD *)&this->fields.downloadProgress = 0LL;
  this->fields.isDownloadCancel = 0;
  this->fields.mergeClass = 0LL;
  sub_B70630((BattleServantConfConponent_o *)&this->fields.mergeClass, 0LL, v14, v15, v16, v17, v18, v19);
  this->fields.crcCheckerClass = 0LL;
  sub_B70630((BattleServantConfConponent_o *)&this->fields.crcCheckerClass, 0LL, v27, v28, v29, v30, v31, v32);
  if ( !assetFolderURL )
    goto LABEL_21;
  if ( !System_String__EndsWith(assetFolderURL, (System_String_o *)StringLiteral_890/*"/"*/, 0LL) )
    goto LABEL_14;
  v33 = (System_Char_array *)sub_B706AC(char___TypeInfo, 1LL);
  if ( !v33 )
LABEL_21:
    sub_B7076C(v33, v34);
  if ( !v33->max_length )
  {
    v76 = sub_B70798(v33);
    sub_B70738(v76, 0LL);
  }
  v33->m_Items[2] = 47;
  assetFolderURL = System_String__TrimEnd(assetFolderURL, v33, 0LL);
LABEL_14:
  this->fields.assetFolderURL = assetFolderURL;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.assetFolderURL,
    (System_Int32_array **)assetFolderURL,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
  if ( (BYTE3(System_IO_Path_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_IO_Path_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_IO_Path_TypeInfo);
  }
  FileName = System_IO_Path__GetFileName(assetFolderURL, 0LL);
  this->fields.assetFolder = FileName;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.assetFolder,
    (System_Int32_array **)FileName,
    v42,
    v43,
    v44,
    v45,
    v46,
    v47);
  LocalFolderPath = (Il2CppObject *)MovieFileMerge__GetLocalFolderPath(this, v48);
  v50 = System_String__Format((System_String_o *)StringLiteral_23990/*"{0}/SplitFile"*/, LocalFolderPath, 0LL);
  this->fields.outputSplitFileFolder = v50;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.outputSplitFileFolder,
    (System_Int32_array **)v50,
    v51,
    v52,
    v53,
    v54,
    v55,
    v56);
  v58 = (Il2CppObject *)MovieFileMerge__GetLocalFolderPath(this, v57);
  v59 = System_String__Format_44753704(
          (System_String_o *)StringLiteral_23996/*"{0}/{1}.usm"*/,
          v58,
          (Il2CppObject *)this->fields.assetFolder,
          0LL);
  this->fields.outputMergeFile = v59;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.outputMergeFile,
    (System_Int32_array **)v59,
    v60,
    v61,
    v62,
    v63,
    v64,
    v65);
  v67 = (Il2CppObject *)MovieFileMerge__GetLocalFolderPath(this, v66);
  v68 = FileMergeAndSplit_TypeInfo;
  if ( (BYTE3(FileMergeAndSplit_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FileMergeAndSplit_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FileMergeAndSplit_TypeInfo);
    v68 = FileMergeAndSplit_TypeInfo;
  }
  v69 = System_String__Format_44753704(
          (System_String_o *)StringLiteral_23994/*"{0}/{1}"*/,
          v67,
          (Il2CppObject *)v68->static_fields->PathCRCFileName,
          0LL);
  this->fields.outputMergeFileCRC = v69;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.outputMergeFileCRC,
    (System_Int32_array **)v69,
    v70,
    v71,
    v72,
    v73,
    v74,
    v75);
}


bool __fastcall MovieFileMerge__IsCRCCheckEnd(MovieFileMerge_o *this, const MethodInfo *method)
{
  struct FileMergeAndSplit_CRCChecker_o *crcCheckerClass; // x8

  crcCheckerClass = this->fields.crcCheckerClass;
  return crcCheckerClass && crcCheckerClass->fields.isCRCCheckEnd;
}


bool __fastcall MovieFileMerge__IsCRCMatch(MovieFileMerge_o *this, const MethodInfo *method)
{
  struct FileMergeAndSplit_CRCChecker_o *crcCheckerClass; // x8

  crcCheckerClass = this->fields.crcCheckerClass;
  return crcCheckerClass && crcCheckerClass->fields.isCRCMatch;
}


bool __fastcall MovieFileMerge__IsDownload(MovieFileMerge_o *this, const MethodInfo *method)
{
  return this->fields.isDownloading;
}


bool __fastcall MovieFileMerge__IsDownloadCancel(MovieFileMerge_o *this, const MethodInfo *method)
{
  return this->fields.isDownloadCancel;
}


bool __fastcall MovieFileMerge__IsMerge(MovieFileMerge_o *this, const MethodInfo *method)
{
  struct FileMergeAndSplit_Merge_o *mergeClass; // x8

  mergeClass = this->fields.mergeClass;
  return mergeClass && mergeClass->fields.isMerge;
}


bool __fastcall MovieFileMerge__IsMergeError(MovieFileMerge_o *this, const MethodInfo *method)
{
  struct FileMergeAndSplit_Merge_o *mergeClass; // x8

  mergeClass = this->fields.mergeClass;
  return mergeClass && mergeClass->fields.isError;
}


System_Collections_IEnumerator_o *__fastcall MovieFileMerge__Merge(MovieFileMerge_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_4350D4E & 1) == 0 )
  {
    sub_B70694(&MovieFileMerge__Merge_d__35_TypeInfo);
    byte_4350D4E = 1;
  }
  v3 = sub_B70764(MovieFileMerge__Merge_d__35_TypeInfo);
  MovieFileMerge__Merge_d__35___ctor((MovieFileMerge__Merge_d__35_o *)v3, 0, 0LL);
  if ( !v3 )
    sub_B7076C(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_B70630((BattleServantConfConponent_o *)(v3 + 32), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v3;
}


System_Collections_IEnumerator_o *__fastcall MovieFileMerge__PlayCRIMovie(
        MovieFileMerge_o *this,
        System_String_o *filePath,
        const MethodInfo *method)
{
  __int64 v4; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_4350D4A & 1) == 0 )
  {
    sub_B70694(&MovieFileMerge__PlayCRIMovie_d__31_TypeInfo);
    byte_4350D4A = 1;
  }
  v4 = sub_B70764(MovieFileMerge__PlayCRIMovie_d__31_TypeInfo);
  MovieFileMerge__PlayCRIMovie_d__31___ctor((MovieFileMerge__PlayCRIMovie_d__31_o *)v4, 0, 0LL);
  if ( !v4 )
    sub_B7076C(v5, v6);
  *(_QWORD *)(v4 + 32) = filePath;
  sub_B70630((BattleServantConfConponent_o *)(v4 + 32), (System_Int32_array **)filePath, v7, v8, v9, v10, v11, v12);
  return (System_Collections_IEnumerator_o *)v4;
}


System_Collections_IEnumerator_o *__fastcall MovieFileMerge__PlayMP4(MovieFileMerge_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_4350D48 & 1) == 0 )
  {
    sub_B70694(&MovieFileMerge__PlayMP4_d__29_TypeInfo);
    byte_4350D48 = 1;
  }
  v3 = sub_B70764(MovieFileMerge__PlayMP4_d__29_TypeInfo);
  MovieFileMerge__PlayMP4_d__29___ctor((MovieFileMerge__PlayMP4_d__29_o *)v3, 0, 0LL);
  if ( !v3 )
    sub_B7076C(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_B70630((BattleServantConfConponent_o *)(v3 + 32), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v3;
}


System_Collections_IEnumerator_o *__fastcall MovieFileMerge__PlayMP4_23429596(
        MovieFileMerge_o *this,
        System_String_o *filePath,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7

  if ( (byte_4350D49 & 1) == 0 )
  {
    sub_B70694(&MovieFileMerge__PlayMP4_d__30_TypeInfo);
    byte_4350D49 = 1;
  }
  v6 = sub_B70764(MovieFileMerge__PlayMP4_d__30_TypeInfo);
  MovieFileMerge__PlayMP4_d__30___ctor((MovieFileMerge__PlayMP4_d__30_o *)v6, 0, 0LL);
  if ( !v6 )
    sub_B7076C(v7, v8);
  *(_QWORD *)(v6 + 40) = this;
  sub_B70630((BattleServantConfConponent_o *)(v6 + 40), (System_Int32_array **)this, v9, v10, v11, v12, v13, v14);
  *(_QWORD *)(v6 + 32) = filePath;
  sub_B70630((BattleServantConfConponent_o *)(v6 + 32), (System_Int32_array **)filePath, v15, v16, v17, v18, v19, v20);
  return (System_Collections_IEnumerator_o *)v6;
}


void __fastcall MovieFileMerge__Reboot(MovieFileMerge_o *this, const MethodInfo *method)
{
  UnityEngine_Networking_UnityWebRequest_o *v3; // x0
  BattleServantConfConponent_o *p_loader; // x19
  struct UnityEngine_Networking_UnityWebRequest_o *loader; // t1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  ManagementManager_c *v12; // x0
  ManagementManager_o *Instance; // x0
  __int64 v14; // x1

  if ( (byte_4350D56 & 1) == 0 )
  {
    sub_B70694(&ManagementManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
    byte_4350D56 = 1;
  }
  loader = this->fields.loader;
  p_loader = (BattleServantConfConponent_o *)&this->fields.loader;
  v3 = loader;
  if ( loader )
  {
    UnityEngine_Networking_UnityWebRequest__Dispose(v3, 0LL);
    p_loader->klass = 0LL;
    sub_B70630(p_loader, 0LL, v6, v7, v8, v9, v10, v11);
  }
  if ( (BYTE3(ManagementManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagementManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
  }
  if ( !byte_434F41E )
  {
    sub_B70694(&ManagementManager_TypeInfo);
    byte_434F41E = 1;
  }
  v12 = ManagementManager_TypeInfo;
  if ( (BYTE3(ManagementManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagementManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
    v12 = ManagementManager_TypeInfo;
  }
  if ( v12->static_fields->isDuringStartup )
  {
    UnityEngine_Application__Quit_41043380(0LL);
  }
  else
  {
    Instance = (ManagementManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
    if ( !Instance )
      sub_B7076C(0LL, v14);
    ManagementManager__reboot(Instance, 0, 0LL);
  }
}


void __fastcall MovieFileMerge___Merge_b__35_0(MovieFileMerge_o *this, System_Exception_o *e, const MethodInfo *method)
{
  Il2CppObject *v4; // x19
  CommonUI_o *Instance; // x20
  System_String_o *v6; // x21
  ErrorDialog_ClickDelegate_o *v7; // x22
  const MethodInfo *v8; // x2
  System_String_o *v9; // x1

  v4 = (Il2CppObject *)this;
  if ( (byte_4350D58 & 1) == 0 )
  {
    sub_B70694(&ErrorDialog_ClickDelegate_TypeInfo);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&Method_MovieFileMerge_EndMergeRetryDialog__);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B70694(&StringLiteral_5406/*"Disk full"*/);
    sub_B70694(&StringLiteral_9395/*"NETWORK_ERROR_DISK_FULL"*/);
    this = (MovieFileMerge_o *)sub_B70694(&StringLiteral_1/*""*/);
    byte_4350D58 = 1;
  }
  if ( !e )
    goto LABEL_13;
  this = (MovieFileMerge_o *)((__int64 (__fastcall *)(System_Exception_o *, Il2CppMethodPointer, const MethodInfo *))e->klass->vtable._5_get_Message.method)(
                               e,
                               e->klass->vtable._6_get_Data.methodPtr,
                               method);
  if ( !this )
    goto LABEL_13;
  if ( !System_String__StartsWith((System_String_o *)this, (System_String_o *)StringLiteral_5406/*"Disk full"*/, 0LL) )
  {
    v9 = (System_String_o *)((__int64 (__fastcall *)(System_Exception_o *, Il2CppMethodPointer))e->klass->vtable._5_get_Message.method)(
                              e,
                              e->klass->vtable._6_get_Data.methodPtr);
    goto LABEL_12;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v6 = LocalizationManager__Get((System_String_o *)StringLiteral_9395/*"NETWORK_ERROR_DISK_FULL"*/, 0LL);
  v7 = (ErrorDialog_ClickDelegate_o *)sub_B70764(ErrorDialog_ClickDelegate_TypeInfo);
  ErrorDialog_ClickDelegate___ctor(v7, v4, Method_MovieFileMerge_EndMergeRetryDialog__, 0LL);
  if ( !Instance )
LABEL_13:
    sub_B7076C(this, e);
  CommonUI__OpenErrorDialog(Instance, (System_String_o *)StringLiteral_1/*""*/, v6, v7, 1, 0LL);
  v9 = (System_String_o *)StringLiteral_5406/*"Disk full"*/;
LABEL_12:
  MovieFileMerge__AssetLoadLogError((MovieFileMerge_o *)v4, v9, v8);
}


void __fastcall MovieFileMerge__CRCDownloadAndCheck_d__33___ctor(
        MovieFileMerge__CRCDownloadAndCheck_d__33_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall MovieFileMerge__CRCDownloadAndCheck_d__33__MoveNext(
        MovieFileMerge__CRCDownloadAndCheck_d__33_o *this,
        const MethodInfo *method)
{
  MovieFileMerge__CRCDownloadAndCheck_d__33_o *v2; // x19
  int32_t _1__state; // w8
  struct MovieFileMerge_o *_4__this; // x20
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  System_String_o *outputMergeFile; // x21
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x0
  System_Collections_Generic_List_uint__o *v9; // x22
  FileMergeAndSplit_CRCChecker_o *v10; // x23
  Il2CppObject **v11; // x19

  v2 = this;
  if ( (byte_434F413 & 1) == 0 )
  {
    sub_B70694(&FileMergeAndSplit_CRCChecker_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__uint__get_Values__);
    sub_B70694(&Method_System_Linq_Enumerable_ToList_uint___);
    this = (MovieFileMerge__CRCDownloadAndCheck_d__33_o *)sub_B70694(&FileMergeAndSplit_TypeInfo);
    byte_434F413 = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state == 2 )
  {
    v2->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_22;
    _4__this->fields.RequireDownLoadFilePathCRCDictionary = MovieFileMerge__GetNeedDownloadDictionary(_4__this, 0LL);
    sub_B70630(&_4__this->fields.RequireDownLoadFilePathCRCDictionary);
    if ( MovieFileMerge__IsCRCMatch(_4__this, 0LL) )
    {
      if ( System_IO_Directory__Exists(_4__this->fields.outputSplitFileFolder, 0LL) )
        System_IO_Directory__Delete_44697464(_4__this->fields.outputSplitFileFolder, 1, 0LL);
      if ( System_IO_File__Exists(_4__this->fields.outputMergeFileCRC, 0LL) )
        System_IO_File__Delete(_4__this->fields.outputMergeFileCRC, 0LL);
    }
    return 0;
  }
  if ( _1__state != 1 )
  {
    if ( !_1__state )
    {
      v2->fields.__1__state = -1;
      this = (MovieFileMerge__CRCDownloadAndCheck_d__33_o *)FileMergeAndSplit_TypeInfo;
      if ( (BYTE3(FileMergeAndSplit_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !FileMergeAndSplit_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FileMergeAndSplit_TypeInfo);
      }
      if ( _4__this )
      {
        v2->fields.__2__current = (Il2CppObject *)MovieFileMerge__Download(
                                                    _4__this,
                                                    FileMergeAndSplit_TypeInfo->static_fields->PathCRCFileName,
                                                    0,
                                                    0LL);
        p__2__current = &v2->fields.__2__current;
        sub_B70630(p__2__current);
        result = 1;
        *((_DWORD *)p__2__current - 2) = 1;
        return result;
      }
LABEL_22:
      sub_B7076C(this, method);
    }
    return 0;
  }
  v2->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_22;
  _4__this->fields.AllDownLoadFilePathCRCDictionary = MovieFileMerge__CreateDic(
                                                        _4__this,
                                                        _4__this->fields.outputMergeFileCRC,
                                                        0LL);
  sub_B70630(&_4__this->fields.AllDownLoadFilePathCRCDictionary);
  this = (MovieFileMerge__CRCDownloadAndCheck_d__33_o *)_4__this->fields.AllDownLoadFilePathCRCDictionary;
  if ( !this )
    goto LABEL_22;
  outputMergeFile = _4__this->fields.outputMergeFile;
  Values = System_Collections_Generic_Dictionary_string__uint___get_Values(
             (System_Collections_Generic_Dictionary_string__uint__o *)this,
             (const MethodInfo_2F5EF7C *)Method_System_Collections_Generic_Dictionary_string__uint__get_Values__);
  v9 = (System_Collections_Generic_List_uint__o *)System_Linq_Enumerable__ToList_uint_(
                                                    (System_Collections_Generic_IEnumerable_TSource__o *)Values,
                                                    (const MethodInfo_1CCB798 *)Method_System_Linq_Enumerable_ToList_uint___);
  v10 = (FileMergeAndSplit_CRCChecker_o *)sub_B70764(FileMergeAndSplit_CRCChecker_TypeInfo);
  FileMergeAndSplit_CRCChecker___ctor(v10, outputMergeFile, v9, 0LL);
  _4__this->fields.crcCheckerClass = v10;
  sub_B70630(&_4__this->fields.crcCheckerClass);
  this = (MovieFileMerge__CRCDownloadAndCheck_d__33_o *)_4__this->fields.crcCheckerClass;
  if ( !this )
    goto LABEL_22;
  v2->fields.__2__current = (Il2CppObject *)FileMergeAndSplit_CRCChecker__Run(
                                              (FileMergeAndSplit_CRCChecker_o *)this,
                                              0LL);
  v11 = &v2->fields.__2__current;
  sub_B70630(v11);
  *((_DWORD *)v11 - 2) = 2;
  return 1;
}


Il2CppObject *__fastcall MovieFileMerge__CRCDownloadAndCheck_d__33__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        MovieFileMerge__CRCDownloadAndCheck_d__33_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn MovieFileMerge__CRCDownloadAndCheck_d__33__System_Collections_IEnumerator_Reset(
        MovieFileMerge__CRCDownloadAndCheck_d__33_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B70698(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B70764(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B70698(&Method_MovieFileMerge__CRCDownloadAndCheck_d__33_System_Collections_IEnumerator_Reset__);
  sub_B70738(v3, v4);
}


Il2CppObject *__fastcall MovieFileMerge__CRCDownloadAndCheck_d__33__System_Collections_IEnumerator_get_Current(
        MovieFileMerge__CRCDownloadAndCheck_d__33_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall MovieFileMerge__CRCDownloadAndCheck_d__33__System_IDisposable_Dispose(
        MovieFileMerge__CRCDownloadAndCheck_d__33_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall MovieFileMerge__DownloadMovie_d__34___ctor(
        MovieFileMerge__DownloadMovie_d__34_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall MovieFileMerge__DownloadMovie_d__34__MoveNext(
        MovieFileMerge__DownloadMovie_d__34_o *this,
        const MethodInfo *method)
{
  MovieFileMerge__DownloadMovie_d__34_o *v2; // x19
  int32_t _1__state; // w8
  MovieFileMerge_o *_4__this; // x20
  System_Collections_Generic_Dictionary_string__uint__o *RequireDownLoadFilePathCRCDictionary; // x0
  struct System_Collections_Generic_Dictionary_Enumerator_string__uint__o *p__7__wrap1; // x21
  struct System_Collections_Generic_KeyValuePair_TKey__TValue__o current; // q0
  __int128 v8; // q1
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  _BOOL8 v15; // x0
  const MethodInfo *v16; // x1
  bool result; // w0
  __int64 v18; // x0
  __int64 v19; // x1
  System_Int32_array **v20; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v27; // [xsp+28h] [xbp-48h] BYREF

  v2 = this;
  if ( (byte_4352A98 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__uint__GetEnumerator__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_Enumerator_string__uint__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_Enumerator_string__uint__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_KeyValuePair_string__uint__get_Key__);
    this = (MovieFileMerge__DownloadMovie_d__34_o *)sub_B70694(&Method_System_Collections_Generic_KeyValuePair_string__uint__get_Value__);
    byte_4352A98 = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state == 1 )
  {
    p__7__wrap1 = &v2->fields.__7__wrap1;
  }
  else
  {
    if ( _1__state )
      return 0;
    v2->fields.__1__state = -1;
    if ( !_4__this )
      sub_B7076C(this, method);
    RequireDownLoadFilePathCRCDictionary = _4__this->fields.RequireDownLoadFilePathCRCDictionary;
    _4__this->fields.isDownloading = 1;
    _4__this->fields.downloadProgress = 0;
    if ( !RequireDownLoadFilePathCRCDictionary )
      sub_B7076C(0LL, method);
    System_Collections_Generic_Dictionary_string__uint___GetEnumerator(
      &v27,
      RequireDownLoadFilePathCRCDictionary,
      (const MethodInfo_2F5F76C *)Method_System_Collections_Generic_Dictionary_string__uint__GetEnumerator__);
    p__7__wrap1 = &v2->fields.__7__wrap1;
    v8 = *(_OWORD *)&v27.fields.dictionary;
    current = v27.fields.current;
    *(_QWORD *)&v2->fields.__7__wrap1.fields.getEnumeratorRetType = *(_QWORD *)&v27.fields.getEnumeratorRetType;
    v2->fields.__7__wrap1.fields.current = current;
    *(_OWORD *)&v2->fields.__7__wrap1.fields.dictionary = v8;
    sub_B70630((BattleServantConfConponent_o *)&v2->fields.__7__wrap1, 0LL, v9, v10, v11, v12, v13, v14);
  }
  v2->fields.__1__state = -3;
  v15 = System_Collections_Generic_Dictionary_Enumerator_string__uint___MoveNext(
          p__7__wrap1,
          (const MethodInfo_277F758 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__uint__MoveNext__);
  if ( v15 )
  {
    if ( !_4__this )
      sub_B7076C(v15, v16);
    if ( _4__this->fields.isDownloadCancel )
    {
      _4__this->fields.isDownloading = 0;
      MovieFileMerge__DownloadMovie_d__34____m__Finally1(v2, v16);
      return 0;
    }
    else
    {
      v20 = (System_Int32_array **)MovieFileMerge__Download(
                                     _4__this,
                                     (System_String_o *)v2->fields.__7__wrap1.fields.current.fields.key,
                                     (uint32_t)v2->fields.__7__wrap1.fields.current.fields.value,
                                     0LL);
      v2->fields.__2__current = (Il2CppObject *)v20;
      sub_B70630((BattleServantConfConponent_o *)&v2->fields.__2__current, v20, v21, v22, v23, v24, v25, v26);
      result = 1;
      v2->fields.__1__state = 1;
    }
  }
  else
  {
    MovieFileMerge__DownloadMovie_d__34____m__Finally1(v2, v16);
    *(_QWORD *)&p__7__wrap1->fields.getEnumeratorRetType = 0LL;
    *(_OWORD *)&p__7__wrap1->fields.dictionary = 0u;
    p__7__wrap1->fields.current = 0u;
    if ( !_4__this )
      sub_B7076C(v18, v19);
    result = 0;
    _4__this->fields.isDownloading = 0;
  }
  return result;
}


Il2CppObject *__fastcall MovieFileMerge__DownloadMovie_d__34__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        MovieFileMerge__DownloadMovie_d__34_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn MovieFileMerge__DownloadMovie_d__34__System_Collections_IEnumerator_Reset(
        MovieFileMerge__DownloadMovie_d__34_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B70698(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B70764(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B70698(&Method_MovieFileMerge__DownloadMovie_d__34_System_Collections_IEnumerator_Reset__);
  sub_B70738(v3, v4);
}


Il2CppObject *__fastcall MovieFileMerge__DownloadMovie_d__34__System_Collections_IEnumerator_get_Current(
        MovieFileMerge__DownloadMovie_d__34_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall MovieFileMerge__DownloadMovie_d__34__System_IDisposable_Dispose(
        MovieFileMerge__DownloadMovie_d__34_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8

  _1__state = this->fields.__1__state;
  if ( _1__state == 1 || _1__state == -3 )
    MovieFileMerge__DownloadMovie_d__34____m__Finally1(this, method);
}


void __fastcall MovieFileMerge__DownloadMovie_d__34____m__Finally1(
        MovieFileMerge__DownloadMovie_d__34_o *this,
        const MethodInfo *method)
{
  if ( (byte_4352A99 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_Dictionary_Enumerator_string__uint__Dispose__);
    byte_4352A99 = 1;
  }
  this->fields.__1__state = -1;
  System_Collections_Generic_Dictionary_Enumerator_string__uint___Dispose(
    &this->fields.__7__wrap1,
    (const MethodInfo_277F8C4 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__uint__Dispose__);
}


void __fastcall MovieFileMerge__Download_d__41___ctor(
        MovieFileMerge__Download_d__41_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall MovieFileMerge__Download_d__41__MoveNext(
        MovieFileMerge__Download_d__41_o *this,
        const MethodInfo *method)
{
  MovieFileMerge__Download_d__41_o *v2; // x19
  struct MovieFileMerge_o *_4__this; // x20
  Il2CppObject *LocalFolderPath; // x0
  bool *p_isDownload_5__4; // x22
  struct System_Byte_array **p_readData_5__5; // x21
  uint32_t downloadingCRC; // w8
  System_String_array *v8; // x21
  __int64 v9; // x1
  ManagementManager_c *v10; // x0
  _BOOL4 v11; // w22
  CommonUI_o *v12; // x21
  System_String_o *v13; // x22
  ErrorDialog_ClickDelegate_o *v14; // x23
  System_Byte_array *readData_5__5; // x20
  uint32_t v16; // w0
  Il2CppObject **p__2__current; // x19
  int v18; // w8
  UnityEngine_WaitForEndOfFrame_o *v19; // x20
  float unscaledTime; // s8
  UnityEngine_WaitForEndOfFrame_o *v21; // x21
  MovieFileMerge__Download_d__41_o **p_loader; // x22
  struct System_String_o **p_errorCode_5__11; // x21
  System_String_o *error; // x0
  UnityEngine_WaitForEndOfFrame_o *v25; // x20
  System_IO_DirectoryInfo_o *Parent; // x0
  __int64 v27; // x1
  System_IO_DirectoryInfo_o *v28; // x21
  System_String_o *v29; // x0
  System_String_o *v30; // x21
  int64_t FreeSize; // x21
  ManagerConfig_c *v32; // x0
  System_String_o *v33; // x22
  ErrorDialog_ClickDelegate_o *v34; // x23
  UnityEngine_WaitForEndOfFrame_o *v35; // x20
  float downloadProgress; // s0
  float loadProgress_5__7; // s9
  float v38; // s8
  float v39; // s0
  bool v40; // zf
  float v41; // s8
  System_String_o *downloadingURL; // x22
  System_String_o *v43; // x0
  System_Collections_Generic_Dictionary_string__string__o *ResponseHeaders; // x0
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v45; // x22
  System_String_o *v46; // x22
  MovieFileMerge__Download_d__41_o *v47; // x22
  int v48; // w8
  System_String_o *v49; // x23
  System_String_o *v50; // x0
  System_String_o *v51; // x24
  __int64 v52; // x1
  MovieFileMerge__Download_d__41_o *v53; // x23
  __int64 v54; // x1
  MovieFileMerge__Download_d__41_o *v55; // x22
  __int64 v56; // x1
  ManagerConfig_c *v57; // x0
  WebViewManager_o *Instance; // x0
  System_String_o *errorCode_5__11; // x21
  CommonUI_o *v60; // x22
  ErrorDialog_ClickDelegate_o *v61; // x23
  UnityEngine_WaitForEndOfFrame_o *v62; // x20
  int autoRetryCount_5__3; // w21
  ManagerConfig_c *v64; // x0
  float DOWNLOAD_RETRY_DELAY_TIME; // s8
  UnityEngine_WaitForSeconds_o *v66; // x20
  Il2CppObject *v67; // x21
  struct UnityEngine_Networking_UnityWebRequest_o **v68; // x20
  MovieFileMerge__Download_d__41_o *loader; // t1
  struct System_Byte_array **v70; // x0
  struct UnityEngine_Networking_UnityWebRequest_o **v71; // x21
  ManagerConfig_c *v72; // x0
  WebViewManager_o *v73; // x0
  System_String_o *v74; // x21
  CommonUI_o *v75; // x22
  ErrorDialog_ClickDelegate_o *v76; // x23
  UnityEngine_WaitForSeconds_o *v77; // x20
  ManagementManager_c *v78; // x0
  _BOOL4 isDuringStartup; // w23
  WebViewManager_o *v80; // x0
  struct System_String_o *errorLocalizeCode_5__12; // x8
  CommonUI_o *v82; // x22
  System_String_o *v83; // x21
  System_String_o *v84; // x23
  System_String_o *v85; // x23
  ErrorDialog_ClickDelegate_o *v86; // x24
  ManagerConfig_c *v87; // x0
  System_String_o *v88; // x23
  System_String_o *v89; // x23
  ErrorDialog_ClickDelegate_o *v90; // x24
  __int64 v91; // x0
  __int64 v92; // x0
  __int64 v93; // x0
  System_IO_IOException_o *v94; // x21
  System_String_o *v95; // x0
  __int64 v96; // x0
  Il2CppObject **v97; // x19
  System_Nullable_Vector2__o effectDistance; // [xsp+0h] [xbp-60h]
  System_Nullable_Vector2__o effectDistancea; // [xsp+0h] [xbp-60h]
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+18h] [xbp-48h] BYREF

  v2 = this;
  if ( (byte_434F414 & 1) == 0 )
  {
    sub_B70694(&char___TypeInfo);
    sub_B70694(&ErrorDialog_ClickDelegate_TypeInfo);
    sub_B70694(&CommonServicePluginScript_TypeInfo);
    sub_B70694(&Crc32_TypeInfo);
    sub_B70694(&UnityEngine_Debug_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__string__TryGetValue__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__string__get_Count__);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&ManagementManager_TypeInfo);
    sub_B70694(&ManagerConfig_TypeInfo);
    sub_B70694(&Method_MovieFileMerge_EndRetryDialog__);
    sub_B70694(&Method_MovieFileMerge_EndWarningDialog__);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B70694(&string___TypeInfo);
    sub_B70694(&UnityEngine_WaitForEndOfFrame_TypeInfo);
    sub_B70694(&UnityEngine_WaitForSeconds_TypeInfo);
    sub_B70694(&StringLiteral_7195/*"HTTP"*/);
    sub_B70694(&StringLiteral_666/*")\n\n503 Auto retry count "*/);
    sub_B70694(&StringLiteral_669/*")\nfile crc ("*/);
    sub_B70694(&StringLiteral_1217/*"503"*/);
    sub_B70694(&StringLiteral_1771/*"ASSET_LOADER_ERROR_BOOT_RETRY_MESSAGE"*/);
    sub_B70694(&StringLiteral_15966/*"[FFFF80]Download error for debug"*/);
    sub_B70694(&StringLiteral_23994/*"{0}/{1}"*/);
    sub_B70694(&StringLiteral_12536/*"STATUS"*/);
    sub_B70694(&StringLiteral_665/*")\n\n"*/);
    sub_B70694(&StringLiteral_596/*"("*/);
    sub_B70694(&StringLiteral_667/*")\n\nAssetBundle file check sum error\nlist crc ("*/);
    sub_B70694(&StringLiteral_663/*")"*/);
    sub_B70694(&StringLiteral_1772/*"ASSET_LOADER_ERROR_TIME_OVER_MESSAGE"*/);
    sub_B70694(&StringLiteral_668/*")\n\nAssetBundle file download time over"*/);
    this = (MovieFileMerge__Download_d__41_o *)sub_B70694(&StringLiteral_1/*""*/);
    byte_434F414 = 1;
  }
  value = 0LL;
  _4__this = v2->fields.__4__this;
  switch ( v2->fields.__1__state )
  {
    case 0:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_223;
      _4__this->fields.downloadingURL = System_String__Format_44753704(
                                          (System_String_o *)StringLiteral_23994/*"{0}/{1}"*/,
                                          (Il2CppObject *)_4__this->fields.assetFolderURL,
                                          (Il2CppObject *)v2->fields.fileName,
                                          0LL);
      sub_B70630(&_4__this->fields.downloadingURL);
      _4__this->fields.downloadingCRC = v2->fields.crc;
      LocalFolderPath = (Il2CppObject *)MovieFileMerge__GetLocalFolderPath(_4__this, 0LL);
      v2->fields._dlFilePath_5__2 = System_String__Format_44753704(
                                      (System_String_o *)StringLiteral_23994/*"{0}/{1}"*/,
                                      LocalFolderPath,
                                      (Il2CppObject *)v2->fields.fileName,
                                      0LL);
      sub_B70630(&v2->fields._dlFilePath_5__2);
      v2->fields._isDownload_5__4 = 1;
      p_isDownload_5__4 = &v2->fields._isDownload_5__4;
      p_readData_5__5 = &v2->fields._readData_5__5;
      v2->fields._autoRetryCount_5__3 = 0;
      _4__this->fields.isErrorDialog = 0;
      goto LABEL_218;
    case 1:
      v2->fields.__1__state = -1;
      unscaledTime = UnityEngine_Time__get_unscaledTime(0LL);
      this = (MovieFileMerge__Download_d__41_o *)ManagerConfig_TypeInfo;
      if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ManagerConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
        this = (MovieFileMerge__Download_d__41_o *)ManagerConfig_TypeInfo;
      }
      v2->fields._requestTime_5__6 = unscaledTime + *(float *)&this[1].fields._dlFilePath_5__2[1].fields.m_stringLength;
      if ( !_4__this )
        goto LABEL_223;
      v2->fields._loadProgress_5__7 = 0.0;
      v21 = (UnityEngine_WaitForEndOfFrame_o *)sub_B70764(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v21, 0LL);
      v2->fields._wait_5__8 = v21;
      sub_B70630(&v2->fields._wait_5__8);
LABEL_42:
      p_loader = (MovieFileMerge__Download_d__41_o **)&_4__this->fields.loader;
      this = (MovieFileMerge__Download_d__41_o *)_4__this->fields.loader;
      if ( !this )
        goto LABEL_223;
      if ( UnityEngine_Networking_UnityWebRequest__get_isDone((UnityEngine_Networking_UnityWebRequest_o *)this, 0LL) )
        goto LABEL_44;
      this = *p_loader;
      if ( !*p_loader )
        goto LABEL_223;
      if ( _4__this->fields.isDownloadCancel )
      {
        UnityEngine_Networking_UnityWebRequest__Dispose((UnityEngine_Networking_UnityWebRequest_o *)this, 0LL);
        _4__this->fields.loader = 0LL;
        sub_B70630(&_4__this->fields.loader);
        LOBYTE(this) = 0;
        _4__this->fields.isDownloading = 0;
        return (char)this;
      }
      downloadProgress = UnityEngine_Networking_UnityWebRequest__get_downloadProgress(
                           (UnityEngine_Networking_UnityWebRequest_o *)this,
                           0LL);
      loadProgress_5__7 = v2->fields._loadProgress_5__7;
      v38 = downloadProgress;
      v39 = UnityEngine_Time__get_unscaledTime(0LL);
      v40 = v38 == loadProgress_5__7;
      v41 = v39;
      if ( !v40 )
      {
        v87 = ManagerConfig_TypeInfo;
        if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ManagerConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
          v87 = ManagerConfig_TypeInfo;
        }
        v2->fields._requestTime_5__6 = v41 + v87->static_fields->TIMEOUT;
        this = *p_loader;
        if ( *p_loader )
        {
          v2->fields._loadProgress_5__7 = UnityEngine_Networking_UnityWebRequest__get_downloadProgress(
                                            (UnityEngine_Networking_UnityWebRequest_o *)this,
                                            0LL);
LABEL_205:
          v2->fields.__2__current = (Il2CppObject *)v2->fields._wait_5__8;
          sub_B70630(&v2->fields.__2__current);
          v2->fields.__1__state = 2;
          goto LABEL_180;
        }
        goto LABEL_223;
      }
      if ( v39 < v2->fields._requestTime_5__6 )
        goto LABEL_205;
LABEL_44:
      *(_WORD *)&v2->fields._isAutoRetry_5__9 = 0;
      v2->fields._errorCode_5__11 = 0LL;
      p_errorCode_5__11 = &v2->fields._errorCode_5__11;
      sub_B70630(&v2->fields._errorCode_5__11);
      v2->fields._errorLocalizeCode_5__12 = 0LL;
      sub_B70630(&v2->fields._errorLocalizeCode_5__12);
      this = *p_loader;
      if ( !*p_loader )
LABEL_223:
        sub_B7076C(this, method);
      if ( !UnityEngine_Networking_UnityWebRequest__get_isDone((UnityEngine_Networking_UnityWebRequest_o *)this, 0LL) )
      {
        *p_errorCode_5__11 = System_String__Concat_44760452(
                               (System_String_o *)StringLiteral_596/*"("*/,
                               _4__this->fields.downloadingURL,
                               (System_String_o *)StringLiteral_668/*")\n\nAssetBundle file download time over"*/,
                               0LL);
LABEL_63:
        sub_B70630(&v2->fields._errorCode_5__11);
        goto LABEL_133;
      }
      this = *p_loader;
      if ( !*p_loader )
        goto LABEL_223;
      error = UnityEngine_Networking_UnityWebRequest__get_error((UnityEngine_Networking_UnityWebRequest_o *)this, 0LL);
      if ( System_String__IsNullOrEmpty(error, 0LL) )
      {
        this = *p_loader;
        if ( !*p_loader )
          goto LABEL_223;
        this = (MovieFileMerge__Download_d__41_o *)UnityEngine_Networking_UnityWebRequest__get_downloadHandler(
                                                     (UnityEngine_Networking_UnityWebRequest_o *)this,
                                                     0LL);
        if ( !this )
          goto LABEL_223;
        v2->fields._readData_5__5 = UnityEngine_Networking_DownloadHandler__get_data(
                                      (UnityEngine_Networking_DownloadHandler_o *)this,
                                      0LL);
        sub_B70630(&v2->fields._readData_5__5);
        v2->fields.__2__current = 0LL;
        p__2__current = &v2->fields.__2__current;
        sub_B70630(p__2__current);
        v18 = 3;
        goto LABEL_179;
      }
      this = (MovieFileMerge__Download_d__41_o *)_4__this->fields.loader;
      if ( !this )
        goto LABEL_223;
      downloadingURL = _4__this->fields.downloadingURL;
      v43 = UnityEngine_Networking_UnityWebRequest__get_error((UnityEngine_Networking_UnityWebRequest_o *)this, 0LL);
      *p_errorCode_5__11 = System_String__Concat_44761580(
                             (System_String_o *)StringLiteral_596/*"("*/,
                             downloadingURL,
                             (System_String_o *)StringLiteral_665/*")\n\n"*/,
                             v43,
                             0LL);
      sub_B70630(&v2->fields._errorCode_5__11);
      this = (MovieFileMerge__Download_d__41_o *)_4__this->fields.loader;
      if ( !this )
        goto LABEL_223;
      ResponseHeaders = UnityEngine_Networking_UnityWebRequest__GetResponseHeaders(
                          (UnityEngine_Networking_UnityWebRequest_o *)this,
                          0LL);
      if ( !ResponseHeaders )
        goto LABEL_133;
      v45 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)ResponseHeaders;
      if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___get_Count(
             (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)ResponseHeaders,
             (const MethodInfo_2F4F5E4 *)Method_System_Collections_Generic_Dictionary_string__string__get_Count__) < 1
        || !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
              v45,
              (System_Xml_XmlQualifiedName_o *)StringLiteral_12536/*"STATUS"*/,
              &value,
              (const MethodInfo_2F517E8 *)Method_System_Collections_Generic_Dictionary_string__string__TryGetValue__) )
      {
        goto LABEL_133;
      }
      v46 = (System_String_o *)value;
      this = (MovieFileMerge__Download_d__41_o *)sub_B706AC(char___TypeInfo, 1LL);
      if ( !this )
        goto LABEL_223;
      method = (const MethodInfo *)this;
      if ( !LODWORD(this->fields.__2__current) )
        goto LABEL_214;
      LOWORD(this->fields.__4__this) = 32;
      if ( !v46 )
        goto LABEL_223;
      this = (MovieFileMerge__Download_d__41_o *)System_String__Split_44818952(v46, (System_Char_array *)this, 1, 0LL);
      if ( !this )
        goto LABEL_223;
      v47 = this;
      if ( SLODWORD(this->fields.__2__current) < 2 )
        goto LABEL_133;
      this = (MovieFileMerge__Download_d__41_o *)this->fields.__4__this;
      if ( !this )
        goto LABEL_223;
      this = (MovieFileMerge__Download_d__41_o *)System_String__StartsWith(
                                                   (System_String_o *)this,
                                                   (System_String_o *)StringLiteral_7195/*"HTTP"*/,
                                                   0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
        goto LABEL_133;
      if ( LODWORD(v47->fields.__2__current) <= 1 )
        goto LABEL_214;
      this = (MovieFileMerge__Download_d__41_o *)v47->fields.fileName;
      if ( !this )
        goto LABEL_223;
      if ( System_String__Equals_44745508((System_String_o *)this, (System_String_o *)StringLiteral_1217/*"503"*/, 0LL) )
      {
        v48 = v2->fields._autoRetryCount_5__3 + 1;
        v2->fields._isAutoRetry_5__9 = 1;
        v2->fields._autoRetryCount_5__3 = v48;
        v49 = _4__this->fields.downloadingURL;
        v50 = System_Int32__ToString((int)v2 + 64, 0LL);
        v2->fields._errorCode_5__11 = System_String__Concat_44761580(
                                        (System_String_o *)StringLiteral_596/*"("*/,
                                        v49,
                                        (System_String_o *)StringLiteral_666/*")\n\n503 Auto retry count "*/,
                                        v50,
                                        0LL);
        goto LABEL_63;
      }
      goto LABEL_133;
    case 2:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_223;
      goto LABEL_42;
    case 3:
      v2->fields.__1__state = -1;
      readData_5__5 = v2->fields._readData_5__5;
      if ( (BYTE3(Crc32_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Crc32_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
      v16 = Crc32__Compute(readData_5__5, 0LL);
      v2->fields.__2__current = 0LL;
      p__2__current = &v2->fields.__2__current;
      *((_DWORD *)p__2__current + 24) = v16;
      sub_B70630(p__2__current);
      v18 = 4;
      goto LABEL_179;
    case 4:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_223;
      downloadingCRC = _4__this->fields.downloadingCRC;
      if ( v2->fields._downloadCrc_5__13 != downloadingCRC && downloadingCRC )
      {
        this = (MovieFileMerge__Download_d__41_o *)sub_B706AC(string___TypeInfo, 7LL);
        if ( !this )
          goto LABEL_223;
        v8 = (System_String_array *)this;
        this = (MovieFileMerge__Download_d__41_o *)StringLiteral_596/*"("*/;
        if ( StringLiteral_596/*"("*/ )
        {
          this = (MovieFileMerge__Download_d__41_o *)sub_B70754(StringLiteral_596/*"("*/, v8->obj.klass->_1.element_class);
          if ( !this )
            goto LABEL_215;
          v9 = StringLiteral_596/*"("*/;
        }
        else
        {
          v9 = 0LL;
        }
        if ( !v8->max_length )
          goto LABEL_214;
        v8->m_Items[0] = (System_String_o *)v9;
        sub_B70630(v8->m_Items);
        v51 = _4__this->fields.downloadingURL;
        if ( !v51
          || (this = (MovieFileMerge__Download_d__41_o *)sub_B70754(
                                                           _4__this->fields.downloadingURL,
                                                           v8->obj.klass->_1.element_class)) != 0LL )
        {
          if ( v8->max_length <= 1 )
            goto LABEL_214;
          v8->m_Items[1] = v51;
          sub_B70630(&v8->m_Items[1]);
          this = (MovieFileMerge__Download_d__41_o *)StringLiteral_667/*")\n\nAssetBundle file check sum error\nlist crc ("*/;
          if ( StringLiteral_667/*")\n\nAssetBundle file check sum error\nlist crc ("*/ )
          {
            this = (MovieFileMerge__Download_d__41_o *)sub_B70754(StringLiteral_667/*")\n\nAssetBundle file check sum error\nlist crc ("*/, v8->obj.klass->_1.element_class);
            if ( !this )
              goto LABEL_215;
            v52 = StringLiteral_667/*")\n\nAssetBundle file check sum error\nlist crc ("*/;
          }
          else
          {
            v52 = 0LL;
          }
          if ( v8->max_length <= 2 )
            goto LABEL_214;
          v8->m_Items[2] = (System_String_o *)v52;
          sub_B70630(&v8->m_Items[2]);
          this = (MovieFileMerge__Download_d__41_o *)System_UInt32__ToString((int)_4__this + 88, 0LL);
          v53 = this;
          if ( !this
            || (this = (MovieFileMerge__Download_d__41_o *)sub_B70754(this, v8->obj.klass->_1.element_class)) != 0LL )
          {
            if ( v8->max_length <= 3 )
              goto LABEL_214;
            v8->m_Items[3] = (System_String_o *)v53;
            sub_B70630(&v8->m_Items[3]);
            this = (MovieFileMerge__Download_d__41_o *)StringLiteral_669/*")\nfile crc ("*/;
            if ( StringLiteral_669/*")\nfile crc ("*/ )
            {
              this = (MovieFileMerge__Download_d__41_o *)sub_B70754(StringLiteral_669/*")\nfile crc ("*/, v8->obj.klass->_1.element_class);
              if ( !this )
                goto LABEL_215;
              v54 = StringLiteral_669/*")\nfile crc ("*/;
            }
            else
            {
              v54 = 0LL;
            }
            if ( v8->max_length <= 4 )
              goto LABEL_214;
            v8->m_Items[4] = (System_String_o *)v54;
            sub_B70630(&v8->m_Items[4]);
            this = (MovieFileMerge__Download_d__41_o *)System_UInt32__ToString((int)v2 + 120, 0LL);
            v55 = this;
            if ( !this
              || (this = (MovieFileMerge__Download_d__41_o *)sub_B70754(this, v8->obj.klass->_1.element_class)) != 0LL )
            {
              if ( v8->max_length <= 5 )
                goto LABEL_214;
              v8->m_Items[5] = (System_String_o *)v55;
              sub_B70630(&v8->m_Items[5]);
              this = (MovieFileMerge__Download_d__41_o *)StringLiteral_663/*")"*/;
              if ( !StringLiteral_663/*")"*/ )
              {
                v56 = 0LL;
LABEL_131:
                if ( v8->max_length > 6 )
                {
                  v8->m_Items[6] = (System_String_o *)v56;
                  sub_B70630(&v8->m_Items[6]);
                  v2->fields._errorCode_5__11 = System_String__Concat_44838292(v8, 0LL);
                  sub_B70630(&v2->fields._errorCode_5__11);
                  v2->fields._isCrcError_5__10 = 1;
                  goto LABEL_133;
                }
LABEL_214:
                v91 = sub_B70798(this);
                sub_B70738(v91, 0LL);
              }
              this = (MovieFileMerge__Download_d__41_o *)sub_B70754(StringLiteral_663/*")"*/, v8->obj.klass->_1.element_class);
              if ( this )
              {
                v56 = StringLiteral_663/*")"*/;
                goto LABEL_131;
              }
            }
          }
        }
LABEL_215:
        v92 = sub_B7078C();
        sub_B70738(v92, 0LL);
      }
      Parent = System_IO_Directory__GetParent(v2->fields._dlFilePath_5__2, 0LL);
      v28 = Parent;
      if ( !Parent )
        sub_B7076C(0LL, v27);
      if ( (((__int64 (__fastcall *)(System_IO_DirectoryInfo_o *, Il2CppMethodPointer))Parent->klass->vtable._9_get_Exists.method)(
              Parent,
              Parent->klass->vtable._10_Delete.methodPtr) & 1) == 0 )
      {
        v29 = (System_String_o *)((__int64 (__fastcall *)(System_IO_DirectoryInfo_o *, Il2CppMethodPointer))v28->klass->vtable._7_get_FullName.method)(
                                   v28,
                                   v28->klass->vtable._8_get_Name.methodPtr);
        System_IO_Directory__CreateDirectory(v29, 0LL);
      }
      v30 = MovieFileMerge__GetLocalFolderPath(_4__this, 0LL);
      if ( (BYTE3(CommonServicePluginScript_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CommonServicePluginScript_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CommonServicePluginScript_TypeInfo);
      }
      FreeSize = CommonServicePluginScript__GetFreeSize(v30, 0LL);
      if ( FreeSize >= 1 )
      {
        v32 = ManagerConfig_TypeInfo;
        if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ManagerConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
          v32 = ManagerConfig_TypeInfo;
        }
        if ( FreeSize < v32->static_fields->LIMIT_FREE_SIZE )
        {
          v93 = sub_B70698(&System_IO_IOException_TypeInfo);
          v94 = (System_IO_IOException_o *)sub_B70764(v93);
          v95 = (System_String_o *)sub_B70698(&StringLiteral_5406/*"Disk full"*/);
          System_IO_IOException___ctor_39273636(v94, v95, 0LL);
          v96 = sub_B70698(&Method_MovieFileMerge__Download_d__41_MoveNext__);
          sub_B70738(v94, v96);
        }
      }
      if ( System_IO_File__Exists(v2->fields._dlFilePath_5__2, 0LL) )
        System_IO_File__Delete(v2->fields._dlFilePath_5__2, 0LL);
      ++_4__this->fields.downloadProgress;
      System_IO_File__WriteAllBytes(v2->fields._dlFilePath_5__2, v2->fields._readData_5__5, 0LL);
      v2->fields._isDownload_5__4 = 0;
LABEL_133:
      method = (const MethodInfo *)v2->fields._errorCode_5__11;
      if ( method )
      {
        MovieFileMerge__AssetLoadLogError(_4__this, (System_String_o *)method, 0LL);
        v57 = ManagerConfig_TypeInfo;
        if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ManagerConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
          v57 = ManagerConfig_TypeInfo;
        }
        if ( v57->static_fields->UseDebugCommand )
        {
          _4__this->fields.isErrorDialog = 1;
          Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          errorCode_5__11 = v2->fields._errorCode_5__11;
          v60 = (CommonUI_o *)Instance;
          v61 = (ErrorDialog_ClickDelegate_o *)sub_B70764(ErrorDialog_ClickDelegate_TypeInfo);
          ErrorDialog_ClickDelegate___ctor(v61, (Il2CppObject *)_4__this, Method_MovieFileMerge_EndWarningDialog__, 0LL);
          if ( !v60 )
            goto LABEL_223;
          effectDistance.fields.value = 0LL;
          *(_DWORD *)&effectDistance.fields.has_value = 0;
          CommonUI__OpenWarningDialog(
            v60,
            (System_String_o *)StringLiteral_15966/*"[FFFF80]Download error for debug"*/,
            errorCode_5__11,
            v61,
            1,
            0,
            -1.0,
            1,
            effectDistance,
            0LL);
LABEL_140:
          if ( _4__this->fields.isErrorDialog )
          {
            v62 = (UnityEngine_WaitForEndOfFrame_o *)sub_B70764(UnityEngine_WaitForEndOfFrame_TypeInfo);
            UnityEngine_WaitForEndOfFrame___ctor(v62, 0LL);
            v2->fields.__2__current = (Il2CppObject *)v62;
            p__2__current = &v2->fields.__2__current;
            sub_B70630(p__2__current);
            v18 = 5;
            goto LABEL_179;
          }
        }
        if ( v2->fields._isAutoRetry_5__9 )
        {
          autoRetryCount_5__3 = v2->fields._autoRetryCount_5__3;
          v64 = ManagerConfig_TypeInfo;
          if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !ManagerConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
            v64 = ManagerConfig_TypeInfo;
          }
          DOWNLOAD_RETRY_DELAY_TIME = v64->static_fields->DOWNLOAD_RETRY_DELAY_TIME;
          v66 = (UnityEngine_WaitForSeconds_o *)sub_B70764(UnityEngine_WaitForSeconds_TypeInfo);
          UnityEngine_WaitForSeconds___ctor(v66, DOWNLOAD_RETRY_DELAY_TIME * (float)autoRetryCount_5__3, 0LL);
          v2->fields.__2__current = (Il2CppObject *)v66;
          p__2__current = &v2->fields.__2__current;
          sub_B70630(p__2__current);
          v18 = 6;
          goto LABEL_179;
        }
        v67 = (Il2CppObject *)v2->fields._errorCode_5__11;
        if ( v2->fields._isCrcError_5__10 )
        {
          if ( (BYTE3(UnityEngine_Debug_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
          }
          UnityEngine_Debug__LogError(v67, 0LL);
        }
        else
        {
          MovieFileMerge__AssetLoadLogError(_4__this, v2->fields._errorCode_5__11, 0LL);
          _4__this->fields.isErrorDialog = 1;
          if ( (BYTE3(ManagementManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !ManagementManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
          }
          if ( !byte_434F41E )
          {
            sub_B70694(&ManagementManager_TypeInfo);
            byte_434F41E = 1;
          }
          v78 = ManagementManager_TypeInfo;
          if ( (BYTE3(ManagementManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !ManagementManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
            v78 = ManagementManager_TypeInfo;
          }
          isDuringStartup = v78->static_fields->isDuringStartup;
          v80 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          errorLocalizeCode_5__12 = v2->fields._errorLocalizeCode_5__12;
          v82 = (CommonUI_o *)v80;
          v83 = (System_String_o *)StringLiteral_1/*""*/;
          if ( isDuringStartup )
          {
            if ( errorLocalizeCode_5__12 )
              v84 = v2->fields._errorLocalizeCode_5__12;
            else
              v84 = (System_String_o *)StringLiteral_1771/*"ASSET_LOADER_ERROR_BOOT_RETRY_MESSAGE"*/;
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v85 = LocalizationManager__Get(v84, 0LL);
            v86 = (ErrorDialog_ClickDelegate_o *)sub_B70764(ErrorDialog_ClickDelegate_TypeInfo);
            ErrorDialog_ClickDelegate___ctor(v86, (Il2CppObject *)_4__this, Method_MovieFileMerge_EndRetryDialog__, 0LL);
            if ( !v82 )
              goto LABEL_223;
            CommonUI__OpenRetryBootDialog(v82, v83, v85, v86, 1, 0LL);
          }
          else
          {
            if ( errorLocalizeCode_5__12 )
              v88 = v2->fields._errorLocalizeCode_5__12;
            else
              v88 = (System_String_o *)StringLiteral_1772/*"ASSET_LOADER_ERROR_TIME_OVER_MESSAGE"*/;
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v89 = LocalizationManager__Get(v88, 0LL);
            v90 = (ErrorDialog_ClickDelegate_o *)sub_B70764(ErrorDialog_ClickDelegate_TypeInfo);
            ErrorDialog_ClickDelegate___ctor(v90, (Il2CppObject *)_4__this, Method_MovieFileMerge_EndRetryDialog__, 0LL);
            if ( !v82 )
              goto LABEL_223;
            CommonUI__OpenRetryDialog(v82, v83, v89, v90, 1, 0LL);
          }
LABEL_35:
          if ( _4__this->fields.isErrorDialog )
          {
            v19 = (UnityEngine_WaitForEndOfFrame_o *)sub_B70764(UnityEngine_WaitForEndOfFrame_TypeInfo);
            UnityEngine_WaitForEndOfFrame___ctor(v19, 0LL);
            v2->fields.__2__current = (Il2CppObject *)v19;
            p__2__current = &v2->fields.__2__current;
            sub_B70630(p__2__current);
            v18 = 7;
            goto LABEL_179;
          }
        }
      }
LABEL_152:
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      if ( !byte_434F41F )
      {
        sub_B70694(&NetworkManager_TypeInfo);
        byte_434F41F = 1;
      }
      this = (MovieFileMerge__Download_d__41_o *)NetworkManager_TypeInfo;
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        this = (MovieFileMerge__Download_d__41_o *)NetworkManager_TypeInfo;
      }
      if ( LOBYTE(this[1].fields._dlFilePath_5__2[5].fields.m_stringLength) )
      {
        if ( !_4__this )
          goto LABEL_223;
        loader = (MovieFileMerge__Download_d__41_o *)_4__this->fields.loader;
        v68 = &_4__this->fields.loader;
        this = loader;
        if ( !loader )
          goto LABEL_223;
        UnityEngine_Networking_UnityWebRequest__Dispose((UnityEngine_Networking_UnityWebRequest_o *)this, 0LL);
        *v68 = 0LL;
        sub_B70630(v68);
        v2->fields._readData_5__5 = 0LL;
        v70 = &v2->fields._readData_5__5;
      }
      else
      {
        if ( !_4__this )
          goto LABEL_223;
        p_isDownload_5__4 = &v2->fields._isDownload_5__4;
        v71 = &_4__this->fields.loader;
        this = (MovieFileMerge__Download_d__41_o *)_4__this->fields.loader;
        if ( v2->fields._isDownload_5__4 )
        {
          if ( !this )
            goto LABEL_223;
          UnityEngine_Networking_UnityWebRequest__Dispose((UnityEngine_Networking_UnityWebRequest_o *)this, 0LL);
          *v71 = 0LL;
          sub_B70630(&_4__this->fields.loader);
          v2->fields._readData_5__5 = 0LL;
          p_readData_5__5 = &v2->fields._readData_5__5;
          sub_B70630(&v2->fields._readData_5__5);
          if ( !v2->fields._isCrcError_5__10 )
          {
LABEL_177:
            v2->fields._wait_5__8 = 0LL;
            sub_B70630(&v2->fields._wait_5__8);
            v2->fields._errorCode_5__11 = 0LL;
            sub_B70630(&v2->fields._errorCode_5__11);
            v2->fields._errorLocalizeCode_5__12 = 0LL;
            sub_B70630(&v2->fields._errorLocalizeCode_5__12);
            do
            {
              *p_readData_5__5 = 0LL;
              sub_B70630(p_readData_5__5);
LABEL_218:
              *p_readData_5__5 = 0LL;
              sub_B70630(p_readData_5__5);
            }
            while ( !*p_isDownload_5__4 );
            _4__this->fields.loader = UnityEngine_Networking_UnityWebRequest__Get(_4__this->fields.downloadingURL, 0LL);
            sub_B70630(&_4__this->fields.loader);
            this = (MovieFileMerge__Download_d__41_o *)_4__this->fields.loader;
            if ( this )
            {
              UnityEngine_Networking_UnityWebRequest__SendWebRequest(
                (UnityEngine_Networking_UnityWebRequest_o *)this,
                0LL);
              v2->fields.__2__current = 0LL;
              v97 = &v2->fields.__2__current;
              sub_B70630(v97);
              LOBYTE(this) = 1;
              *((_DWORD *)v97 - 2) = 1;
              return (char)this;
            }
            goto LABEL_223;
          }
          if ( !v2->fields._errorCode_5__11 )
            goto LABEL_178;
          v72 = ManagerConfig_TypeInfo;
          if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !ManagerConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
            v72 = ManagerConfig_TypeInfo;
          }
          if ( !v72->static_fields->UseDebugCommand )
            goto LABEL_178;
          _4__this->fields.isErrorDialog = 1;
          v73 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v74 = v2->fields._errorCode_5__11;
          v75 = (CommonUI_o *)v73;
          v76 = (ErrorDialog_ClickDelegate_o *)sub_B70764(ErrorDialog_ClickDelegate_TypeInfo);
          ErrorDialog_ClickDelegate___ctor(v76, (Il2CppObject *)_4__this, Method_MovieFileMerge_EndWarningDialog__, 0LL);
          if ( !v75 )
            goto LABEL_223;
          effectDistancea.fields.value = 0LL;
          *(_DWORD *)&effectDistancea.fields.has_value = 0;
          CommonUI__OpenWarningDialog(
            v75,
            (System_String_o *)StringLiteral_15966/*"[FFFF80]Download error for debug"*/,
            v74,
            v76,
            1,
            0,
            -1.0,
            1,
            effectDistancea,
            0LL);
LABEL_60:
          if ( _4__this->fields.isErrorDialog )
          {
            v25 = (UnityEngine_WaitForEndOfFrame_o *)sub_B70764(UnityEngine_WaitForEndOfFrame_TypeInfo);
            UnityEngine_WaitForEndOfFrame___ctor(v25, 0LL);
            v2->fields.__2__current = (Il2CppObject *)v25;
            p__2__current = &v2->fields.__2__current;
            sub_B70630(p__2__current);
            v18 = 8;
          }
          else
          {
LABEL_178:
            v77 = (UnityEngine_WaitForSeconds_o *)sub_B70764(UnityEngine_WaitForSeconds_TypeInfo);
            UnityEngine_WaitForSeconds___ctor(v77, 1.0, 0LL);
            v2->fields.__2__current = (Il2CppObject *)v77;
            p__2__current = &v2->fields.__2__current;
            sub_B70630(p__2__current);
            v18 = 9;
          }
LABEL_179:
          *((_DWORD *)p__2__current - 2) = v18;
LABEL_180:
          LOBYTE(this) = 1;
          return (char)this;
        }
        if ( !this )
          return (char)this;
        UnityEngine_Networking_UnityWebRequest__Dispose((UnityEngine_Networking_UnityWebRequest_o *)this, 0LL);
        v70 = (struct System_Byte_array **)&_4__this->fields.loader;
        *v71 = 0LL;
      }
      sub_B70630(v70);
LABEL_165:
      LOBYTE(this) = 0;
      return (char)this;
    case 5:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_223;
      goto LABEL_140;
    case 6:
      v2->fields.__1__state = -1;
      goto LABEL_152;
    case 7:
      v2->fields.__1__state = -1;
      if ( _4__this )
        goto LABEL_35;
      goto LABEL_223;
    case 8:
      v2->fields.__1__state = -1;
      if ( _4__this )
        goto LABEL_60;
      goto LABEL_223;
    case 9:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_223;
      _4__this->fields.isErrorDialog = 1;
      if ( (BYTE3(ManagementManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ManagementManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
      }
      if ( !byte_434F41E )
      {
        sub_B70694(&ManagementManager_TypeInfo);
        byte_434F41E = 1;
      }
      v10 = ManagementManager_TypeInfo;
      if ( (BYTE3(ManagementManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ManagementManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
        v10 = ManagementManager_TypeInfo;
      }
      v11 = v10->static_fields->isDuringStartup;
      v12 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( v11 )
      {
        if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v13 = LocalizationManager__Get((System_String_o *)StringLiteral_1771/*"ASSET_LOADER_ERROR_BOOT_RETRY_MESSAGE"*/, 0LL);
        v14 = (ErrorDialog_ClickDelegate_o *)sub_B70764(ErrorDialog_ClickDelegate_TypeInfo);
        ErrorDialog_ClickDelegate___ctor(v14, (Il2CppObject *)_4__this, Method_MovieFileMerge_EndRetryDialog__, 0LL);
        if ( !v12 )
          goto LABEL_223;
        CommonUI__OpenRetryBootDialog(v12, (System_String_o *)StringLiteral_1/*""*/, v13, v14, 1, 0LL);
      }
      else
      {
        if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v33 = LocalizationManager__Get((System_String_o *)StringLiteral_1772/*"ASSET_LOADER_ERROR_TIME_OVER_MESSAGE"*/, 0LL);
        v34 = (ErrorDialog_ClickDelegate_o *)sub_B70764(ErrorDialog_ClickDelegate_TypeInfo);
        ErrorDialog_ClickDelegate___ctor(v34, (Il2CppObject *)_4__this, Method_MovieFileMerge_EndRetryDialog__, 0LL);
        if ( !v12 )
          goto LABEL_223;
        CommonUI__OpenRetryDialog(v12, (System_String_o *)StringLiteral_1/*""*/, v33, v34, 1, 0LL);
      }
LABEL_83:
      if ( _4__this->fields.isErrorDialog )
      {
        v35 = (UnityEngine_WaitForEndOfFrame_o *)sub_B70764(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v35, 0LL);
        v2->fields.__2__current = (Il2CppObject *)v35;
        p__2__current = &v2->fields.__2__current;
        sub_B70630(p__2__current);
        v18 = 10;
        goto LABEL_179;
      }
      p_readData_5__5 = &v2->fields._readData_5__5;
      p_isDownload_5__4 = &v2->fields._isDownload_5__4;
      goto LABEL_177;
    case 0xA:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_223;
      goto LABEL_83;
    default:
      goto LABEL_165;
  }
}


Il2CppObject *__fastcall MovieFileMerge__Download_d__41__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        MovieFileMerge__Download_d__41_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn MovieFileMerge__Download_d__41__System_Collections_IEnumerator_Reset(
        MovieFileMerge__Download_d__41_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B70698(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B70764(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B70698(&Method_MovieFileMerge__Download_d__41_System_Collections_IEnumerator_Reset__);
  sub_B70738(v3, v4);
}


Il2CppObject *__fastcall MovieFileMerge__Download_d__41__System_Collections_IEnumerator_get_Current(
        MovieFileMerge__Download_d__41_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall MovieFileMerge__Download_d__41__System_IDisposable_Dispose(
        MovieFileMerge__Download_d__41_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall MovieFileMerge__Merge_d__35___ctor(
        MovieFileMerge__Merge_d__35_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall MovieFileMerge__Merge_d__35__MoveNext(MovieFileMerge__Merge_d__35_o *this, const MethodInfo *method)
{
  MovieFileMerge__Merge_d__35_o *v2; // x19
  int32_t _1__state; // w8
  struct MovieFileMerge_o *_4__this; // x20
  System_Collections_Generic_List_string__o *SplitFileList; // x0
  System_String_o *outputMergeFile; // x21
  System_Collections_Generic_List_string__o *v7; // x22
  FileMergeAndSplit_Merge_o *v8; // x23
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  FileMergeAndSplit_Merge_o *mergeClass; // x21
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v16; // x22
  System_Int32_array **v17; // x0
  BattleServantConfConponent_o *p__2__current; // x19
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  bool result; // w0
  struct FileMergeAndSplit_Merge_o *v26; // x8
  System_String_o *v27; // x21
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x0
  System_Collections_Generic_List_uint__o *v29; // x22
  FileMergeAndSplit_CRCChecker_o *v30; // x23
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  System_Int32_array **v37; // x0
  BattleServantConfConponent_o *v38; // x19
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7

  v2 = this;
  if ( (byte_4352A9A & 1) == 0 )
  {
    sub_B70694(&Method_System_Action_Exception___ctor__);
    sub_B70694(&System_Action_Exception__TypeInfo);
    sub_B70694(&FileMergeAndSplit_CRCChecker_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__uint__get_Values__);
    sub_B70694(&Method_System_Linq_Enumerable_ToList_uint___);
    sub_B70694(&FileMergeAndSplit_Merge_TypeInfo);
    this = (MovieFileMerge__Merge_d__35_o *)sub_B70694(&Method_MovieFileMerge__Merge_b__35_0__);
    byte_4352A9A = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state == 2 )
  {
    v2->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_22;
    if ( MovieFileMerge__IsCRCMatch(_4__this, 0LL) )
    {
      if ( System_IO_Directory__Exists(_4__this->fields.outputSplitFileFolder, 0LL) )
        System_IO_Directory__Delete_44697464(_4__this->fields.outputSplitFileFolder, 1, 0LL);
      if ( System_IO_File__Exists(_4__this->fields.outputMergeFileCRC, 0LL) )
        System_IO_File__Delete(_4__this->fields.outputMergeFileCRC, 0LL);
    }
    return 0;
  }
  if ( _1__state != 1 )
  {
    if ( !_1__state )
    {
      v2->fields.__1__state = -1;
      if ( _4__this )
      {
        _4__this->fields.mergeProgress = 0.0;
        SplitFileList = MovieFileMerge__GetSplitFileList(_4__this, 0LL);
        outputMergeFile = _4__this->fields.outputMergeFile;
        v7 = SplitFileList;
        v8 = (FileMergeAndSplit_Merge_o *)sub_B70764(FileMergeAndSplit_Merge_TypeInfo);
        FileMergeAndSplit_Merge___ctor(v8, v7, outputMergeFile, 0LL);
        _4__this->fields.mergeClass = v8;
        sub_B70630(
          (BattleServantConfConponent_o *)&_4__this->fields.mergeClass,
          (System_Int32_array **)v8,
          v9,
          v10,
          v11,
          v12,
          v13,
          v14);
        mergeClass = _4__this->fields.mergeClass;
        v16 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B70764(System_Action_Exception__TypeInfo);
        System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
          v16,
          (Il2CppObject *)_4__this,
          Method_MovieFileMerge__Merge_b__35_0__,
          (const MethodInfo_264C148 *)Method_System_Action_Exception___ctor__);
        if ( mergeClass )
        {
          v17 = (System_Int32_array **)FileMergeAndSplit_Merge__Run(mergeClass, (System_Action_Exception__o *)v16, 0LL);
          v2->fields.__2__current = (Il2CppObject *)v17;
          p__2__current = (BattleServantConfConponent_o *)&v2->fields.__2__current;
          sub_B70630(p__2__current, v17, v19, v20, v21, v22, v23, v24);
          result = 1;
          *(_DWORD *)&p__2__current[-1].fields.isOpenAfter = 1;
          return result;
        }
      }
LABEL_22:
      sub_B7076C(this, method);
    }
    return 0;
  }
  v2->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_22;
  v26 = _4__this->fields.mergeClass;
  if ( !v26 )
    goto LABEL_22;
  if ( v26->fields.isError )
    return 0;
  this = (MovieFileMerge__Merge_d__35_o *)_4__this->fields.AllDownLoadFilePathCRCDictionary;
  if ( !this )
    goto LABEL_22;
  v27 = _4__this->fields.outputMergeFile;
  Values = System_Collections_Generic_Dictionary_string__uint___get_Values(
             (System_Collections_Generic_Dictionary_string__uint__o *)this,
             (const MethodInfo_2F5EF7C *)Method_System_Collections_Generic_Dictionary_string__uint__get_Values__);
  v29 = (System_Collections_Generic_List_uint__o *)System_Linq_Enumerable__ToList_uint_(
                                                     (System_Collections_Generic_IEnumerable_TSource__o *)Values,
                                                     (const MethodInfo_1CCB798 *)Method_System_Linq_Enumerable_ToList_uint___);
  v30 = (FileMergeAndSplit_CRCChecker_o *)sub_B70764(FileMergeAndSplit_CRCChecker_TypeInfo);
  FileMergeAndSplit_CRCChecker___ctor(v30, v27, v29, 0LL);
  _4__this->fields.crcCheckerClass = v30;
  sub_B70630(
    (BattleServantConfConponent_o *)&_4__this->fields.crcCheckerClass,
    (System_Int32_array **)v30,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
  this = (MovieFileMerge__Merge_d__35_o *)_4__this->fields.crcCheckerClass;
  if ( !this )
    goto LABEL_22;
  v37 = (System_Int32_array **)FileMergeAndSplit_CRCChecker__Run((FileMergeAndSplit_CRCChecker_o *)this, 0LL);
  v2->fields.__2__current = (Il2CppObject *)v37;
  v38 = (BattleServantConfConponent_o *)&v2->fields.__2__current;
  sub_B70630(v38, v37, v39, v40, v41, v42, v43, v44);
  *(_DWORD *)&v38[-1].fields.isOpenAfter = 2;
  return 1;
}


Il2CppObject *__fastcall MovieFileMerge__Merge_d__35__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        MovieFileMerge__Merge_d__35_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn MovieFileMerge__Merge_d__35__System_Collections_IEnumerator_Reset(
        MovieFileMerge__Merge_d__35_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B70698(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B70764(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B70698(&Method_MovieFileMerge__Merge_d__35_System_Collections_IEnumerator_Reset__);
  sub_B70738(v3, v4);
}


Il2CppObject *__fastcall MovieFileMerge__Merge_d__35__System_Collections_IEnumerator_get_Current(
        MovieFileMerge__Merge_d__35_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall MovieFileMerge__Merge_d__35__System_IDisposable_Dispose(
        MovieFileMerge__Merge_d__35_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall MovieFileMerge__PlayCRIMovie_d__31___ctor(
        MovieFileMerge__PlayCRIMovie_d__31_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall MovieFileMerge__PlayCRIMovie_d__31__MoveNext(
        MovieFileMerge__PlayCRIMovie_d__31_o *this,
        const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  MovieFileMerge__PlayCRIMovie_d__31_o *v8; // x19
  int32_t _1__state; // w8
  MovieFileMerge___c__DisplayClass31_0_o *v10; // x21
  Il2CppObject **p__8__1; // x20
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  UnityEngine_UI_Dropdown_DropdownItem_o *UIAtlas; // x21
  Il2CppObject *v19; // x21
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  CRIMoviePlayer_o *klass; // x21
  System_String_o *filePath; // x22
  BgmManager_c *v28; // x0
  Il2CppObject *v29; // x24
  float masterVolume; // s8
  System_Action_o *v31; // x23
  BattleServantConfConponent_o *p__2__current; // x19
  bool result; // w0

  v8 = this;
  if ( (byte_4352A9B & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&BgmManager_TypeInfo);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_CRIMoviePlayer___);
    sub_B70694(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&Method_UnityEngine_Resources_Load_GameObject___);
    sub_B70694(&Method_MovieFileMerge___c__DisplayClass31_0__PlayCRIMovie_b__0__);
    sub_B70694(&MovieFileMerge___c__DisplayClass31_0_TypeInfo);
    this = (MovieFileMerge__PlayCRIMovie_d__31_o *)sub_B70694(&StringLiteral_3511/*"CRIMovie/CRIMoviePlayerWithPanel"*/);
    byte_4352A9B = 1;
  }
  _1__state = v8->fields.__1__state;
  if ( _1__state == 1 )
  {
    p__8__1 = (Il2CppObject **)&v8->fields.__8__1;
    v8->fields.__1__state = -1;
  }
  else
  {
    if ( _1__state )
      return 0;
    v8->fields.__1__state = -1;
    v10 = (MovieFileMerge___c__DisplayClass31_0_o *)sub_B70764(MovieFileMerge___c__DisplayClass31_0_TypeInfo);
    MovieFileMerge___c__DisplayClass31_0___ctor(v10, 0LL);
    p__8__1 = (Il2CppObject **)&v8->fields.__8__1;
    v8->fields.__8__1 = v10;
    sub_B70630(
      (BattleServantConfConponent_o *)&v8->fields.__8__1,
      (System_Int32_array **)v10,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
    UIAtlas = (UnityEngine_UI_Dropdown_DropdownItem_o *)UnityEngine_Resources__Load_UIAtlas_(
                                                          (System_String_o *)StringLiteral_3511/*"CRIMovie/CRIMoviePlayerWithPanel"*/,
                                                          (const MethodInfo_1D5BAD8 *)Method_UnityEngine_Resources_Load_GameObject___);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    this = (MovieFileMerge__PlayCRIMovie_d__31_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                                     UIAtlas,
                                                     (const MethodInfo_1D58764 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !this )
      goto LABEL_29;
    v19 = *p__8__1;
    this = (MovieFileMerge__PlayCRIMovie_d__31_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                     (UnityEngine_GameObject_o *)this,
                                                     (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_CRIMoviePlayer___);
    if ( !v19 )
      goto LABEL_29;
    v19[1].klass = (Il2CppClass *)this;
    sub_B70630((BattleServantConfConponent_o *)&v19[1], (System_Int32_array **)this, v20, v21, v22, v23, v24, v25);
    if ( !*p__8__1 )
      goto LABEL_29;
    LOBYTE((*p__8__1)[1].monitor) = 1;
    if ( !*p__8__1 )
      goto LABEL_29;
    klass = (CRIMoviePlayer_o *)(*p__8__1)[1].klass;
    filePath = v8->fields.filePath;
    if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BgmManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
    if ( !byte_434E401 )
    {
      sub_B70694(&BgmManager_TypeInfo);
      byte_434E401 = 1;
    }
    v28 = BgmManager_TypeInfo;
    if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BgmManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
      v28 = BgmManager_TypeInfo;
    }
    v29 = *p__8__1;
    masterVolume = v28->static_fields->masterVolume;
    v31 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
    System_Action___ctor(v31, v29, Method_MovieFileMerge___c__DisplayClass31_0__PlayCRIMovie_b__0__, 0LL);
    if ( !klass
      || (CRIMoviePlayer__Initialize(klass, filePath, filePath, masterVolume, 1, 0LL, v31, 1, 0LL, 0, 0, 1, 0LL),
          !*p__8__1)
      || (this = (MovieFileMerge__PlayCRIMovie_d__31_o *)(*p__8__1)[1].klass) == 0LL )
    {
LABEL_29:
      sub_B7076C(this, method);
    }
    CRIMoviePlayer__MoviePlay((CRIMoviePlayer_o *)this, 1, 1, 1, 0LL);
  }
  if ( !*p__8__1 )
    goto LABEL_29;
  if ( LOBYTE((*p__8__1)[1].monitor) )
  {
    v8->fields.__2__current = 0LL;
    p__2__current = (BattleServantConfConponent_o *)&v8->fields.__2__current;
    sub_B70630(p__2__current, 0LL, v2, v3, v4, v5, v6, v7);
    result = 1;
    *(_DWORD *)&p__2__current[-1].fields.isOpenAfter = 1;
    return result;
  }
  return 0;
}


Il2CppObject *__fastcall MovieFileMerge__PlayCRIMovie_d__31__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        MovieFileMerge__PlayCRIMovie_d__31_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn MovieFileMerge__PlayCRIMovie_d__31__System_Collections_IEnumerator_Reset(
        MovieFileMerge__PlayCRIMovie_d__31_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B70698(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B70764(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B70698(&Method_MovieFileMerge__PlayCRIMovie_d__31_System_Collections_IEnumerator_Reset__);
  sub_B70738(v3, v4);
}


Il2CppObject *__fastcall MovieFileMerge__PlayCRIMovie_d__31__System_Collections_IEnumerator_get_Current(
        MovieFileMerge__PlayCRIMovie_d__31_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall MovieFileMerge__PlayCRIMovie_d__31__System_IDisposable_Dispose(
        MovieFileMerge__PlayCRIMovie_d__31_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall MovieFileMerge__PlayMP4_d__29___ctor(
        MovieFileMerge__PlayMP4_d__29_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall MovieFileMerge__PlayMP4_d__29__MoveNext(
        MovieFileMerge__PlayMP4_d__29_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8
  bool result; // w0
  struct MovieFileMerge_o *_4__this; // x0
  Il2CppObject *v6; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  int32_t v13; // w8

  _1__state = this->fields.__1__state;
  result = 0;
  if ( _1__state == 1 )
  {
    v13 = -1;
  }
  else
  {
    if ( _1__state )
      return result;
    _4__this = this->fields.__4__this;
    this->fields.__1__state = -1;
    if ( !_4__this )
      sub_B7076C(0LL, method);
    v6 = (Il2CppObject *)MovieFileMerge__PlayMP4_23429596(_4__this, _4__this->fields.outputMergeFile, 0, 0LL);
    this->fields.__2__current = v6;
    sub_B70630(
      (BattleServantConfConponent_o *)&this->fields.__2__current,
      (System_Int32_array **)v6,
      v7,
      v8,
      v9,
      v10,
      v11,
      v12);
    v13 = 1;
    result = 1;
  }
  this->fields.__1__state = v13;
  return result;
}


Il2CppObject *__fastcall MovieFileMerge__PlayMP4_d__29__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        MovieFileMerge__PlayMP4_d__29_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn MovieFileMerge__PlayMP4_d__29__System_Collections_IEnumerator_Reset(
        MovieFileMerge__PlayMP4_d__29_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B70698(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B70764(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B70698(&Method_MovieFileMerge__PlayMP4_d__29_System_Collections_IEnumerator_Reset__);
  sub_B70738(v3, v4);
}


Il2CppObject *__fastcall MovieFileMerge__PlayMP4_d__29__System_Collections_IEnumerator_get_Current(
        MovieFileMerge__PlayMP4_d__29_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall MovieFileMerge__PlayMP4_d__29__System_IDisposable_Dispose(
        MovieFileMerge__PlayMP4_d__29_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall MovieFileMerge__PlayMP4_d__30___ctor(
        MovieFileMerge__PlayMP4_d__30_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall MovieFileMerge__PlayMP4_d__30__MoveNext(
        MovieFileMerge__PlayMP4_d__30_o *this,
        const MethodInfo *method)
{
  System_String_o *filePath; // x0
  MovieFileMerge_o *_4__this; // x20
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v6; // x1
  bool result; // w0
  UnityEngine_WaitForEndOfFrame_o *v8; // x20
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  int32_t v15; // w8
  UnityEngine_WaitForEndOfFrame_o *v16; // x20
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  Il2CppObject *v23; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7

  if ( (byte_4352A9C & 1) == 0 )
  {
    sub_B70694(&UnityEngine_WaitForEndOfFrame_TypeInfo);
    byte_4352A9C = 1;
  }
  switch ( this->fields.__1__state )
  {
    case 0:
      filePath = this->fields.filePath;
      _4__this = this->fields.__4__this;
      this->fields.__1__state = -1;
      IsNullOrEmpty = System_String__IsNullOrEmpty(filePath, 0LL);
      if ( IsNullOrEmpty )
        goto LABEL_5;
      if ( !_4__this )
        sub_B7076C(IsNullOrEmpty, v6);
      v23 = (Il2CppObject *)MovieFileMerge__PlayCRIMovie(_4__this, this->fields.filePath, 0LL);
      this->fields.__2__current = v23;
      sub_B70630(
        (BattleServantConfConponent_o *)&this->fields.__2__current,
        (System_Int32_array **)v23,
        v24,
        v25,
        v26,
        v27,
        v28,
        v29);
      result = 1;
      this->fields.__1__state = 1;
      break;
    case 1:
      this->fields.__1__state = -1;
      v16 = (UnityEngine_WaitForEndOfFrame_o *)sub_B70764(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v16, 0LL);
      this->fields.__2__current = (Il2CppObject *)v16;
      sub_B70630(
        (BattleServantConfConponent_o *)&this->fields.__2__current,
        (System_Int32_array **)v16,
        v17,
        v18,
        v19,
        v20,
        v21,
        v22);
      v15 = 2;
      goto LABEL_9;
    case 2:
      this->fields.__1__state = -1;
      v8 = (UnityEngine_WaitForEndOfFrame_o *)sub_B70764(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v8, 0LL);
      this->fields.__2__current = (Il2CppObject *)v8;
      sub_B70630(
        (BattleServantConfConponent_o *)&this->fields.__2__current,
        (System_Int32_array **)v8,
        v9,
        v10,
        v11,
        v12,
        v13,
        v14);
      v15 = 3;
LABEL_9:
      this->fields.__1__state = v15;
      result = 1;
      break;
    case 3:
      result = 0;
      this->fields.__1__state = -1;
      break;
    default:
LABEL_5:
      result = 0;
      break;
  }
  return result;
}


Il2CppObject *__fastcall MovieFileMerge__PlayMP4_d__30__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        MovieFileMerge__PlayMP4_d__30_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn MovieFileMerge__PlayMP4_d__30__System_Collections_IEnumerator_Reset(
        MovieFileMerge__PlayMP4_d__30_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B70698(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B70764(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B70698(&Method_MovieFileMerge__PlayMP4_d__30_System_Collections_IEnumerator_Reset__);
  sub_B70738(v3, v4);
}


Il2CppObject *__fastcall MovieFileMerge__PlayMP4_d__30__System_Collections_IEnumerator_get_Current(
        MovieFileMerge__PlayMP4_d__30_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall MovieFileMerge__PlayMP4_d__30__System_IDisposable_Dispose(
        MovieFileMerge__PlayMP4_d__30_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall MovieFileMerge___c__DisplayClass31_0___ctor(
        MovieFileMerge___c__DisplayClass31_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MovieFileMerge___c__DisplayClass31_0___PlayCRIMovie_b__0(
        MovieFileMerge___c__DisplayClass31_0_o *this,
        const MethodInfo *method)
{
  CRIMoviePlayer_o *player; // x0

  player = this->fields.player;
  if ( !player )
    sub_B7076C(0LL, method);
  CRIMoviePlayer__Dispose(player, 0LL);
  this->fields.wait = 0;
}