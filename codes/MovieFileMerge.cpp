void __fastcall MovieFileMerge___ctor(MovieFileMerge_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_Dictionary_string__uint__o *v4; // x20
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  System_Collections_Generic_Dictionary_string__uint__o *v11; // x20
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7

  if ( (byte_41873AC & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__uint___ctor__, method);
    sub_B2C35C(&System_Collections_Generic_Dictionary_string__uint__TypeInfo, v3);
    byte_41873AC = 1;
  }
  v4 = (System_Collections_Generic_Dictionary_string__uint__o *)sub_B2C42C(System_Collections_Generic_Dictionary_string__uint__TypeInfo);
  System_Collections_Generic_Dictionary_string__uint____ctor(
    v4,
    (const MethodInfo_2E2EE2C *)Method_System_Collections_Generic_Dictionary_string__uint___ctor__);
  this->fields.AllDownLoadFilePathCRCDictionary = v4;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.AllDownLoadFilePathCRCDictionary,
    (System_Int32_array **)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  v11 = (System_Collections_Generic_Dictionary_string__uint__o *)sub_B2C42C(System_Collections_Generic_Dictionary_string__uint__TypeInfo);
  System_Collections_Generic_Dictionary_string__uint____ctor(
    v11,
    (const MethodInfo_2E2EE2C *)Method_System_Collections_Generic_Dictionary_string__uint___ctor__);
  this->fields.RequireDownLoadFilePathCRCDictionary = v11;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.RequireDownLoadFilePathCRCDictionary,
    (System_Int32_array **)v11,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall MovieFileMerge__AssetLoadLogError(
        MovieFileMerge_o *this,
        System_String_o *errorCode,
        const MethodInfo *method)
{
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
  __int64 Instance; // x0
  __int64 v19; // x1
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  __int64 v26; // x21
  System_Int32_array **v27; // x1
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_Int32_array **v34; // x1
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  System_Int32_array **v41; // x1
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  System_Int32_array **v48; // x1
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  System_Int32_array **v55; // x1
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  System_Int32_array **v62; // x1
  System_String_array **v63; // x2
  System_String_array **v64; // x3
  System_Boolean_array **v65; // x4
  System_Int32_array **v66; // x5
  System_Int32_array *v67; // x6
  System_Int32_array *v68; // x7
  System_Int32_array **v69; // x1
  System_String_array **v70; // x2
  System_String_array **v71; // x3
  System_Boolean_array **v72; // x4
  System_Int32_array **v73; // x5
  System_Int32_array *v74; // x6
  System_Int32_array *v75; // x7
  System_Int32_array **v76; // x1
  __int64 v77; // x8
  unsigned __int64 v78; // x22
  signed __int64 v79; // x23
  __int64 v80; // x0
  Il2CppObject *v81; // x0
  __int64 v82; // x0

  if ( (byte_41873AA & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Debug_TypeInfo, errorCode);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__, v5);
    sub_B2C35C(&string___TypeInfo, v6);
    sub_B2C35C(&StringLiteral_14107/*"The request timed out."*/, v7);
    sub_B2C35C(&StringLiteral_14039/*"The network connection was lost."*/, v8);
    sub_B2C35C(&StringLiteral_4244/*"Connection reset by peer"*/, v9);
    sub_B2C35C(&StringLiteral_4605/*"DLErrorType"*/, v10);
    sub_B2C35C(&StringLiteral_4604/*"DLErrorAsset"*/, v11);
    sub_B2C35C(&StringLiteral_4243/*"Connection refused"*/, v12);
    sub_B2C35C(&StringLiteral_9482/*"No address associated with hostname"*/, v13);
    sub_B2C35C(&StringLiteral_2096/*"AssetBundle file download time over"*/, v14);
    sub_B2C35C(&StringLiteral_12914/*"Software caused connection abort"*/, v15);
    sub_B2C35C(&StringLiteral_4245/*"Connection timed out"*/, v16);
    sub_B2C35C(&StringLiteral_2099/*"AssetLoadError"*/, v17);
    byte_41873AA = 1;
  }
  Instance = sub_B2C374(string___TypeInfo, 8LL);
  if ( !Instance )
    goto LABEL_63;
  v26 = Instance;
  Instance = StringLiteral_9482/*"No address associated with hostname"*/;
  if ( StringLiteral_9482/*"No address associated with hostname"*/ )
  {
    Instance = sub_B2C41C(StringLiteral_9482/*"No address associated with hostname"*/, *(_QWORD *)(*(_QWORD *)v26 + 64LL));
    if ( !Instance )
      goto LABEL_64;
    v27 = (System_Int32_array **)StringLiteral_9482/*"No address associated with hostname"*/;
  }
  else
  {
    v27 = 0LL;
  }
  if ( !*(_DWORD *)(v26 + 24) )
    goto LABEL_50;
  *(_QWORD *)(v26 + 32) = v27;
  sub_B2C2F8((BattleServantConfConponent_o *)(v26 + 32), v27, v20, v21, v22, v23, v24, v25);
  Instance = StringLiteral_2096/*"AssetBundle file download time over"*/;
  if ( StringLiteral_2096/*"AssetBundle file download time over"*/ )
  {
    Instance = sub_B2C41C(StringLiteral_2096/*"AssetBundle file download time over"*/, *(_QWORD *)(*(_QWORD *)v26 + 64LL));
    if ( !Instance )
      goto LABEL_64;
    v34 = (System_Int32_array **)StringLiteral_2096/*"AssetBundle file download time over"*/;
  }
  else
  {
    v34 = 0LL;
  }
  if ( *(_DWORD *)(v26 + 24) <= 1u )
    goto LABEL_50;
  *(_QWORD *)(v26 + 40) = v34;
  sub_B2C2F8((BattleServantConfConponent_o *)(v26 + 40), v34, v28, v29, v30, v31, v32, v33);
  Instance = StringLiteral_14039/*"The network connection was lost."*/;
  if ( StringLiteral_14039/*"The network connection was lost."*/ )
  {
    Instance = sub_B2C41C(StringLiteral_14039/*"The network connection was lost."*/, *(_QWORD *)(*(_QWORD *)v26 + 64LL));
    if ( !Instance )
      goto LABEL_64;
    v41 = (System_Int32_array **)StringLiteral_14039/*"The network connection was lost."*/;
  }
  else
  {
    v41 = 0LL;
  }
  if ( *(_DWORD *)(v26 + 24) <= 2u )
    goto LABEL_50;
  *(_QWORD *)(v26 + 48) = v41;
  sub_B2C2F8((BattleServantConfConponent_o *)(v26 + 48), v41, v35, v36, v37, v38, v39, v40);
  Instance = StringLiteral_4244/*"Connection reset by peer"*/;
  if ( StringLiteral_4244/*"Connection reset by peer"*/ )
  {
    Instance = sub_B2C41C(StringLiteral_4244/*"Connection reset by peer"*/, *(_QWORD *)(*(_QWORD *)v26 + 64LL));
    if ( !Instance )
      goto LABEL_64;
    v48 = (System_Int32_array **)StringLiteral_4244/*"Connection reset by peer"*/;
  }
  else
  {
    v48 = 0LL;
  }
  if ( *(_DWORD *)(v26 + 24) <= 3u )
    goto LABEL_50;
  *(_QWORD *)(v26 + 56) = v48;
  sub_B2C2F8((BattleServantConfConponent_o *)(v26 + 56), v48, v42, v43, v44, v45, v46, v47);
  Instance = StringLiteral_12914/*"Software caused connection abort"*/;
  if ( StringLiteral_12914/*"Software caused connection abort"*/ )
  {
    Instance = sub_B2C41C(StringLiteral_12914/*"Software caused connection abort"*/, *(_QWORD *)(*(_QWORD *)v26 + 64LL));
    if ( !Instance )
      goto LABEL_64;
    v55 = (System_Int32_array **)StringLiteral_12914/*"Software caused connection abort"*/;
  }
  else
  {
    v55 = 0LL;
  }
  if ( *(_DWORD *)(v26 + 24) <= 4u )
    goto LABEL_50;
  *(_QWORD *)(v26 + 64) = v55;
  sub_B2C2F8((BattleServantConfConponent_o *)(v26 + 64), v55, v49, v50, v51, v52, v53, v54);
  Instance = StringLiteral_4245/*"Connection timed out"*/;
  if ( StringLiteral_4245/*"Connection timed out"*/ )
  {
    Instance = sub_B2C41C(StringLiteral_4245/*"Connection timed out"*/, *(_QWORD *)(*(_QWORD *)v26 + 64LL));
    if ( !Instance )
      goto LABEL_64;
    v62 = (System_Int32_array **)StringLiteral_4245/*"Connection timed out"*/;
  }
  else
  {
    v62 = 0LL;
  }
  if ( *(_DWORD *)(v26 + 24) <= 5u )
    goto LABEL_50;
  *(_QWORD *)(v26 + 72) = v62;
  sub_B2C2F8((BattleServantConfConponent_o *)(v26 + 72), v62, v56, v57, v58, v59, v60, v61);
  Instance = StringLiteral_4243/*"Connection refused"*/;
  if ( StringLiteral_4243/*"Connection refused"*/ )
  {
    Instance = sub_B2C41C(StringLiteral_4243/*"Connection refused"*/, *(_QWORD *)(*(_QWORD *)v26 + 64LL));
    if ( !Instance )
      goto LABEL_64;
    v69 = (System_Int32_array **)StringLiteral_4243/*"Connection refused"*/;
  }
  else
  {
    v69 = 0LL;
  }
  if ( *(_DWORD *)(v26 + 24) <= 6u )
    goto LABEL_50;
  *(_QWORD *)(v26 + 80) = v69;
  sub_B2C2F8((BattleServantConfConponent_o *)(v26 + 80), v69, v63, v64, v65, v66, v67, v68);
  Instance = StringLiteral_14107/*"The request timed out."*/;
  if ( StringLiteral_14107/*"The request timed out."*/ )
  {
    Instance = sub_B2C41C(StringLiteral_14107/*"The request timed out."*/, *(_QWORD *)(*(_QWORD *)v26 + 64LL));
    if ( Instance )
    {
      v76 = (System_Int32_array **)StringLiteral_14107/*"The request timed out."*/;
      goto LABEL_43;
    }
LABEL_64:
    v82 = sub_B2C454(Instance);
    sub_B2C400(v82, 0LL);
  }
  v76 = 0LL;
LABEL_43:
  if ( *(_DWORD *)(v26 + 24) <= 7u )
    goto LABEL_50;
  *(_QWORD *)(v26 + 88) = v76;
  sub_B2C2F8((BattleServantConfConponent_o *)(v26 + 88), v76, v70, v71, v72, v73, v74, v75);
  v77 = *(_QWORD *)(v26 + 24);
  if ( (int)v77 < 1 )
  {
LABEL_51:
    if ( (BYTE3(UnityEngine_Debug_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
    }
    v81 = (Il2CppObject *)errorCode;
    goto LABEL_62;
  }
  v78 = 0LL;
  v79 = (int)v77;
  while ( 1 )
  {
    if ( !errorCode )
      goto LABEL_63;
    Instance = System_String__Contains(errorCode, *(System_String_o **)(v26 + 32 + 8 * v78), 0LL);
    if ( (Instance & 1) != 0 )
      break;
    if ( (__int64)++v78 >= v79 )
      goto LABEL_51;
    if ( v78 >= *(unsigned int *)(v26 + 24) )
      goto LABEL_50;
  }
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
  if ( !Instance )
LABEL_63:
    sub_B2C434(Instance, v19);
  CrashReporter__AddCustomKey(
    (CrashReporter_o *)Instance,
    (System_String_o *)StringLiteral_4604/*"DLErrorAsset"*/,
    this->fields.downloadingURL,
    0LL);
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
  if ( (unsigned int)v78 >= *(_DWORD *)(v26 + 24) )
  {
LABEL_50:
    v80 = sub_B2C460(Instance);
    sub_B2C400(v80, 0LL);
  }
  if ( !Instance )
    goto LABEL_63;
  CrashReporter__AddCustomKey(
    (CrashReporter_o *)Instance,
    (System_String_o *)StringLiteral_4605/*"DLErrorType"*/,
    *(System_String_o **)(v26 + 32 + 8 * v78),
    0LL);
  if ( (BYTE3(UnityEngine_Debug_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
  }
  v81 = (Il2CppObject *)StringLiteral_2099/*"AssetLoadError"*/;
LABEL_62:
  UnityEngine_Debug__LogError(v81, 0LL);
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

  if ( (byte_41873A1 & 1) == 0 )
  {
    sub_B2C35C(&MovieFileMerge__CRCDownloadAndCheck_d__33_TypeInfo, method);
    byte_41873A1 = 1;
  }
  v3 = sub_B2C42C(MovieFileMerge__CRCDownloadAndCheck_d__33_TypeInfo);
  MovieFileMerge__CRCDownloadAndCheck_d__33___ctor((MovieFileMerge__CRCDownloadAndCheck_d__33_o *)v3, 0, 0LL);
  if ( !v3 )
    sub_B2C434(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v3 + 32), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v3;
}


System_Collections_Generic_Dictionary_string__uint__o *__fastcall MovieFileMerge__CreateDic(
        MovieFileMerge_o *this,
        System_String_o *dataPath,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_Dictionary_string__uint__o *v7; // x19
  System_String_array *AllLines; // x0
  System_String_array *v9; // x1
  int max_length; // w8
  System_String_array *v11; // x20
  unsigned int v12; // w22
  System_String_o *v13; // x21
  System_String_array *v14; // x21
  __int64 v16; // x0
  uint32_t result; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_41873A8 & 1) == 0 )
  {
    sub_B2C35C(&char___TypeInfo, dataPath);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__uint__Add__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__uint___ctor__, v5);
    sub_B2C35C(&System_Collections_Generic_Dictionary_string__uint__TypeInfo, v6);
    byte_41873A8 = 1;
  }
  result = 0;
  v7 = (System_Collections_Generic_Dictionary_string__uint__o *)sub_B2C42C(System_Collections_Generic_Dictionary_string__uint__TypeInfo);
  System_Collections_Generic_Dictionary_string__uint____ctor(
    v7,
    (const MethodInfo_2E2EE2C *)Method_System_Collections_Generic_Dictionary_string__uint___ctor__);
  AllLines = System_IO_File__ReadAllLines(dataPath, 0LL);
  if ( !AllLines )
LABEL_20:
    sub_B2C434(AllLines, v9);
  max_length = AllLines->max_length;
  v11 = AllLines;
  if ( max_length >= 1 )
  {
    v12 = 0;
    while ( 1 )
    {
      if ( v12 >= max_length )
        goto LABEL_19;
      v13 = v11->m_Items[v12];
      AllLines = (System_String_array *)sub_B2C374(char___TypeInfo, 1LL);
      if ( !AllLines )
        goto LABEL_20;
      v9 = AllLines;
      if ( !AllLines->max_length )
      {
LABEL_19:
        v16 = sub_B2C460(AllLines);
        sub_B2C400(v16, 0LL);
      }
      LOWORD(AllLines->m_Items[0]) = 44;
      if ( !v13 )
        goto LABEL_20;
      AllLines = System_String__Split(v13, (System_Char_array *)AllLines, 0LL);
      result = 0;
      if ( !AllLines )
        goto LABEL_20;
      v14 = AllLines;
      if ( AllLines->max_length <= 1 )
        goto LABEL_19;
      AllLines = (System_String_array *)System_UInt32__TryParse(AllLines->m_Items[1], &result, 0LL);
      if ( ((unsigned __int8)AllLines & 1) == 0 )
        return 0LL;
      if ( !v14->max_length )
        goto LABEL_19;
      if ( !v7 )
        goto LABEL_20;
      System_Collections_Generic_Dictionary_string__uint___Add(
        v7,
        v14->m_Items[0],
        result,
        (const MethodInfo_2E2F9E0 *)Method_System_Collections_Generic_Dictionary_string__uint__Add__);
      max_length = v11->max_length;
      if ( (int)++v12 >= max_length )
        return v7;
    }
  }
  return v7;
}


void __fastcall MovieFileMerge__Delete(System_String_o *folder, const MethodInfo *method)
{
  System_String_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_String_o *FileName; // x19
  Il2CppObject *LocalDataPath; // x0
  System_String_o *v8; // x19
  __int64 v9; // x0

  v2 = folder;
  if ( (byte_41873A4 & 1) == 0 )
  {
    sub_B2C35C(&char___TypeInfo, method);
    sub_B2C35C(&System_IO_Path_TypeInfo, v3);
    sub_B2C35C(&StringLiteral_23610/*"{0}/{1}"*/, v4);
    folder = (System_String_o *)sub_B2C35C(&StringLiteral_872/*"/"*/, v5);
    byte_41873A4 = 1;
  }
  if ( !v2 )
    goto LABEL_14;
  if ( !System_String__EndsWith(v2, (System_String_o *)StringLiteral_872/*"/"*/, 0LL) )
    goto LABEL_8;
  folder = (System_String_o *)sub_B2C374(char___TypeInfo, 1LL);
  if ( !folder )
LABEL_14:
    sub_B2C434(folder, method);
  if ( !LODWORD(folder[1].klass) )
  {
    v9 = sub_B2C460(folder);
    sub_B2C400(v9, 0LL);
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
  v8 = System_String__Format_44301068(
         (System_String_o *)StringLiteral_23610/*"{0}/{1}"*/,
         LocalDataPath,
         (Il2CppObject *)FileName,
         0LL);
  if ( System_IO_Directory__Exists(v8, 0LL) )
    System_IO_Directory__Delete_44244828(v8, 1, 0LL);
}


void __fastcall MovieFileMerge__Delete_24475528(const MethodInfo *method)
{
  System_String_o *LocalDataPath; // x0
  _BOOL8 v2; // x0
  System_String_o *v3; // x0

  LocalDataPath = MovieFileMerge__GetLocalDataPath(method);
  v2 = System_IO_Directory__Exists(LocalDataPath, 0LL);
  if ( v2 )
  {
    v3 = MovieFileMerge__GetLocalDataPath((const MethodInfo *)v2);
    System_IO_Directory__Delete_44244828(v3, 1, 0LL);
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

  if ( (byte_41873A7 & 1) == 0 )
  {
    sub_B2C35C(&MovieFileMerge__Download_d__41_TypeInfo, fileName);
    byte_41873A7 = 1;
  }
  v7 = sub_B2C42C(MovieFileMerge__Download_d__41_TypeInfo);
  MovieFileMerge__Download_d__41___ctor((MovieFileMerge__Download_d__41_o *)v7, 0, 0LL);
  if ( !v7 )
    sub_B2C434(v8, v9);
  *(_QWORD *)(v7 + 32) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v7 + 32), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 40) = fileName;
  sub_B2C2F8((BattleServantConfConponent_o *)(v7 + 40), (System_Int32_array **)fileName, v16, v17, v18, v19, v20, v21);
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

  if ( (byte_41873A2 & 1) == 0 )
  {
    sub_B2C35C(&MovieFileMerge__DownloadMovie_d__34_TypeInfo, method);
    byte_41873A2 = 1;
  }
  v3 = sub_B2C42C(MovieFileMerge__DownloadMovie_d__34_TypeInfo);
  MovieFileMerge__DownloadMovie_d__34___ctor((MovieFileMerge__DownloadMovie_d__34_o *)v3, 0, 0LL);
  if ( !v3 )
    sub_B2C434(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v3 + 32), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
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
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_String_o *FileName; // x20
  Il2CppObject *LocalDataPath; // x0
  System_String_o *v11; // x19
  Il2CppObject *v12; // x21
  FileMergeAndSplit_c *v13; // x8
  System_String_o *v14; // x0
  __int64 v16; // x0

  v3 = assetFolderURL;
  if ( (byte_4187398 & 1) == 0 )
  {
    sub_B2C35C(&char___TypeInfo, assetFolderURL);
    sub_B2C35C(&FileMergeAndSplit_TypeInfo, v4);
    sub_B2C35C(&System_IO_Path_TypeInfo, v5);
    sub_B2C35C(&StringLiteral_872/*"/"*/, v6);
    sub_B2C35C(&StringLiteral_23615/*"{0}/{1}/{2}"*/, v7);
    this = (MovieFileMerge_o *)sub_B2C35C(&StringLiteral_23614/*"{0}/{1}/{1}.usm"*/, v8);
    byte_4187398 = 1;
  }
  if ( !v3 )
    goto LABEL_17;
  if ( !System_String__EndsWith(v3, (System_String_o *)StringLiteral_872/*"/"*/, 0LL) )
    goto LABEL_8;
  this = (MovieFileMerge_o *)sub_B2C374(char___TypeInfo, 1LL);
  if ( !this )
LABEL_17:
    sub_B2C434(this, assetFolderURL);
  if ( !LODWORD(this->fields.assetFolderURL) )
  {
    v16 = sub_B2C460(this);
    sub_B2C400(v16, 0LL);
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
  v11 = System_String__Format_44301068(
          (System_String_o *)StringLiteral_23614/*"{0}/{1}/{1}.usm"*/,
          LocalDataPath,
          (Il2CppObject *)FileName,
          0LL);
  v12 = (Il2CppObject *)MovieFileMerge__GetLocalDataPath((const MethodInfo *)v11);
  v13 = FileMergeAndSplit_TypeInfo;
  if ( (BYTE3(FileMergeAndSplit_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FileMergeAndSplit_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FileMergeAndSplit_TypeInfo);
    v13 = FileMergeAndSplit_TypeInfo;
  }
  v14 = System_String__Format_44306596(
          (System_String_o *)StringLiteral_23615/*"{0}/{1}/{2}"*/,
          v12,
          (Il2CppObject *)FileName,
          (Il2CppObject *)v13->static_fields->PathCRCFileName,
          0LL);
  return !System_IO_File__Exists(v14, 0LL) && System_IO_File__Exists(v11, 0LL);
}


float __fastcall MovieFileMerge__GetDownloadProgress(MovieFileMerge_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_string__uint__o *RequireDownLoadFilePathCRCDictionary; // x0
  float v4; // s8
  __int64 v5; // x1
  System_Collections_Generic_Dictionary_string__uint__o *v6; // x0
  int32_t downloadProgress; // s8

  if ( (byte_418739C & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__uint__get_Count__, method);
    byte_418739C = 1;
  }
  RequireDownLoadFilePathCRCDictionary = this->fields.RequireDownLoadFilePathCRCDictionary;
  v4 = 0.0;
  if ( RequireDownLoadFilePathCRCDictionary
    && System_Collections_Generic_Dictionary_string__uint___get_Count(
         RequireDownLoadFilePathCRCDictionary,
         (const MethodInfo_2E2F5DC *)Method_System_Collections_Generic_Dictionary_string__uint__get_Count__) )
  {
    v6 = this->fields.RequireDownLoadFilePathCRCDictionary;
    if ( !v6 )
      sub_B2C434(0LL, v5);
    downloadProgress = this->fields.downloadProgress;
    return (float)downloadProgress
         / (float)System_Collections_Generic_Dictionary_string__uint___get_Count(
                    v6,
                    (const MethodInfo_2E2F5DC *)Method_System_Collections_Generic_Dictionary_string__uint__get_Count__);
  }
  return v4;
}


double __fastcall MovieFileMerge__GetDownloadSize(MovieFileMerge_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_string__uint__o *RequireDownLoadFilePathCRCDictionary; // x0

  if ( (byte_418739B & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__uint__get_Count__, method);
    byte_418739B = 1;
  }
  RequireDownLoadFilePathCRCDictionary = this->fields.RequireDownLoadFilePathCRCDictionary;
  if ( !RequireDownLoadFilePathCRCDictionary )
    sub_B2C434(0LL, method);
  return (double)(System_Collections_Generic_Dictionary_string__uint___get_Count(
                    RequireDownLoadFilePathCRCDictionary,
                    (const MethodInfo_2E2F5DC *)Method_System_Collections_Generic_Dictionary_string__uint__get_Count__) << 20);
}


System_String_o *__fastcall MovieFileMerge__GetLocalDataPath(const MethodInfo *method)
{
  __int64 v1; // x1
  System_String_o *persistentDataPath; // x0

  if ( (byte_4187399 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_920/*"/extend-data/movie"*/, v1);
    byte_4187399 = 1;
  }
  persistentDataPath = UnityEngine_Application__get_persistentDataPath(0LL);
  return System_String__Concat_44305532(persistentDataPath, (System_String_o *)StringLiteral_920/*"/extend-data/movie"*/, 0LL);
}


System_String_o *__fastcall MovieFileMerge__GetLocalFolderPath(MovieFileMerge_o *this, const MethodInfo *method)
{
  MovieFileMerge_o *v2; // x19
  Il2CppObject *LocalDataPath; // x0

  v2 = this;
  if ( (byte_41873A5 & 1) == 0 )
  {
    this = (MovieFileMerge_o *)sub_B2C35C(&StringLiteral_23610/*"{0}/{1}"*/, method);
    byte_41873A5 = 1;
  }
  LocalDataPath = (Il2CppObject *)MovieFileMerge__GetLocalDataPath((const MethodInfo *)this);
  return System_String__Format_44301068(
           (System_String_o *)StringLiteral_23610/*"{0}/{1}"*/,
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
  System_Collections_Generic_Dictionary_string__uint__o *v13; // x19
  __int64 v14; // x1
  System_Collections_Generic_Dictionary_string__uint__o *AllDownLoadFilePathCRCDictionary; // x0
  const MethodInfo *v16; // x1
  Il2CppObject *key; // x21
  uint32_t value; // w22
  Il2CppObject *LocalFolderPath; // x1
  System_String_o *v20; // x23
  _BOOL8 v21; // x0
  __int64 v22; // x1
  System_Byte_array *AllBytes; // x24
  uint32_t v24; // w1
  System_IO_DirectoryInfo_o *Parent; // x0
  __int64 v26; // x1
  System_IO_DirectoryInfo_o *v27; // x21
  System_String_o *v28; // x0
  System_String_o *v29; // x0
  System_Collections_Generic_Dictionary_Enumerator_string__uint__o v31; // [xsp+0h] [xbp-B0h] BYREF
  uint32_t v32; // [xsp+2Ch] [xbp-84h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_string__uint__o v33; // [xsp+30h] [xbp-80h] BYREF

  if ( (byte_41873A6 & 1) == 0 )
  {
    sub_B2C35C(&Crc32_TypeInfo, method);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__uint__Add__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__uint__GetEnumerator__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__uint___ctor__, v5);
    sub_B2C35C(&System_Collections_Generic_Dictionary_string__uint__TypeInfo, v6);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_Enumerator_string__uint__Dispose__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_Enumerator_string__uint__MoveNext__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_Enumerator_string__uint__get_Current__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_KeyValuePair_string__uint__get_Key__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_KeyValuePair_string__uint__get_Value__, v11);
    sub_B2C35C(&StringLiteral_23610/*"{0}/{1}"*/, v12);
    byte_41873A6 = 1;
  }
  memset(&v33, 0, sizeof(v33));
  v32 = 0;
  v13 = (System_Collections_Generic_Dictionary_string__uint__o *)sub_B2C42C(System_Collections_Generic_Dictionary_string__uint__TypeInfo);
  System_Collections_Generic_Dictionary_string__uint____ctor(
    v13,
    (const MethodInfo_2E2EE2C *)Method_System_Collections_Generic_Dictionary_string__uint___ctor__);
  AllDownLoadFilePathCRCDictionary = this->fields.AllDownLoadFilePathCRCDictionary;
  if ( !AllDownLoadFilePathCRCDictionary )
    sub_B2C434(0LL, v14);
  System_Collections_Generic_Dictionary_string__uint___GetEnumerator(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v31,
    AllDownLoadFilePathCRCDictionary,
    (const MethodInfo_2E2FF74 *)Method_System_Collections_Generic_Dictionary_string__uint__GetEnumerator__);
  v33 = v31;
  while ( System_Collections_Generic_Dictionary_Enumerator_string__uint___MoveNext(
            &v33,
            (const MethodInfo_2756DF0 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__uint__MoveNext__) )
  {
    key = v33.fields.current.fields.key;
    value = (uint32_t)v33.fields.current.fields.value;
    LocalFolderPath = (Il2CppObject *)MovieFileMerge__GetLocalFolderPath(this, v16);
    v20 = System_String__Format_44301068((System_String_o *)StringLiteral_23610/*"{0}/{1}"*/, LocalFolderPath, key, 0LL);
    v21 = System_IO_File__Exists(v20, 0LL);
    if ( !v21 )
      goto LABEL_12;
    AllBytes = System_IO_File__ReadAllBytes(v20, 0LL);
    v32 = value;
    if ( (BYTE3(Crc32_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Crc32_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
    v24 = Crc32__Compute(AllBytes, 0LL);
    if ( !System_UInt32__Equals_42929672((uint32_t)&v32, v24, 0LL) )
    {
      System_IO_File__Delete(v20, 0LL);
LABEL_12:
      if ( !v13 )
        sub_B2C434(v21, v22);
      System_Collections_Generic_Dictionary_string__uint___Add(
        v13,
        (System_String_o *)key,
        value,
        (const MethodInfo_2E2F9E0 *)Method_System_Collections_Generic_Dictionary_string__uint__Add__);
      Parent = System_IO_Directory__GetParent(v20, 0LL);
      v27 = Parent;
      if ( !Parent )
        sub_B2C434(0LL, v26);
      v28 = (System_String_o *)((__int64 (__fastcall *)(System_IO_DirectoryInfo_o *, Il2CppMethodPointer))Parent->klass->vtable._7_get_FullName.method)(
                                 Parent,
                                 Parent->klass->vtable._8_get_Name.methodPtr);
      if ( !System_IO_Directory__Exists(v28, 0LL) )
      {
        v29 = (System_String_o *)((__int64 (__fastcall *)(System_IO_DirectoryInfo_o *, Il2CppMethodPointer))v27->klass->vtable._7_get_FullName.method)(
                                   v27,
                                   v27->klass->vtable._8_get_Name.methodPtr);
        System_IO_Directory__CreateDirectory(v29, 0LL);
      }
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_string__uint___Dispose(
    &v33,
    (const MethodInfo_2756F5C *)Method_System_Collections_Generic_Dictionary_Enumerator_string__uint__Dispose__);
  return v13;
}


System_Collections_Generic_List_string__o *__fastcall MovieFileMerge__GetSplitFileList(
        MovieFileMerge_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v12; // x19
  const MethodInfo *v13; // x1
  System_String_o *LocalFolderPath; // x0
  __int64 v15; // x1
  System_Collections_Generic_Dictionary_string__uint__o *AllDownLoadFilePathCRCDictionary; // x0
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x0
  const MethodInfo *v18; // x1
  Il2CppObject *current; // x21
  Il2CppObject *v20; // x1
  System_String_o *v21; // x0
  System_Collections_Generic_List_Enumerator_T__o v23; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_41873A9 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__uint__get_Keys__, method);
    sub_B2C35C(&Method_System_Linq_Enumerable_ToList_string___, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__Add__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__GetEnumerator__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_string___ctor___67320968, v9);
    sub_B2C35C(&System_Collections_Generic_List_string__TypeInfo, v10);
    sub_B2C35C(&StringLiteral_23610/*"{0}/{1}"*/, v11);
    byte_41873A9 = 1;
  }
  memset(&v23, 0, sizeof(v23));
  v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v12,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_string___ctor___67320968);
  LocalFolderPath = MovieFileMerge__GetLocalFolderPath(this, v13);
  if ( System_IO_Directory__Exists(LocalFolderPath, 0LL) )
  {
    AllDownLoadFilePathCRCDictionary = this->fields.AllDownLoadFilePathCRCDictionary;
    if ( !AllDownLoadFilePathCRCDictionary
      || (Keys = System_Collections_Generic_Dictionary_string__uint___get_Keys(
                   AllDownLoadFilePathCRCDictionary,
                   (const MethodInfo_2E2F5EC *)Method_System_Collections_Generic_Dictionary_string__uint__get_Keys__),
          (AllDownLoadFilePathCRCDictionary = (System_Collections_Generic_Dictionary_string__uint__o *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_((System_Collections_Generic_IEnumerable_TSource__o *)Keys, (const MethodInfo_1A9DE9C *)Method_System_Linq_Enumerable_ToList_string___)) == 0LL) )
    {
      sub_B2C434(AllDownLoadFilePathCRCDictionary, v15);
    }
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v23,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)AllDownLoadFilePathCRCDictionary,
      (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_string__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v23,
              (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
    {
      current = v23.fields.current;
      v20 = (Il2CppObject *)MovieFileMerge__GetLocalFolderPath(this, v18);
      v21 = System_String__Format_44301068((System_String_o *)StringLiteral_23610/*"{0}/{1}"*/, v20, current, 0LL);
      if ( !v12 )
        sub_B2C434(v21, v21);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v12,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v21,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_string__Add__);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v23,
      (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
  }
  return (System_Collections_Generic_List_string__o *)v12;
}


double __fastcall MovieFileMerge__GetTotalRequireSize(MovieFileMerge_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_string__uint__o *AllDownLoadFilePathCRCDictionary; // x0
  System_Collections_Generic_Dictionary_string__uint__o *RequireDownLoadFilePathCRCDictionary; // x8

  if ( (byte_418739A & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__uint__get_Count__, method);
    byte_418739A = 1;
  }
  AllDownLoadFilePathCRCDictionary = this->fields.AllDownLoadFilePathCRCDictionary;
  if ( !AllDownLoadFilePathCRCDictionary
    || (AllDownLoadFilePathCRCDictionary = (System_Collections_Generic_Dictionary_string__uint__o *)System_Collections_Generic_Dictionary_string__uint___get_Count(AllDownLoadFilePathCRCDictionary, (const MethodInfo_2E2F5DC *)Method_System_Collections_Generic_Dictionary_string__uint__get_Count__),
        (RequireDownLoadFilePathCRCDictionary = this->fields.RequireDownLoadFilePathCRCDictionary) == 0LL) )
  {
    sub_B2C434(AllDownLoadFilePathCRCDictionary, method);
  }
  return (double)((System_Collections_Generic_Dictionary_string__uint___get_Count(
                     RequireDownLoadFilePathCRCDictionary,
                     (const MethodInfo_2E2F5DC *)Method_System_Collections_Generic_Dictionary_string__uint__get_Count__)
                 + (int)AllDownLoadFilePathCRCDictionary) << 20);
}


void __fastcall MovieFileMerge__Initialize(
        MovieFileMerge_o *this,
        System_String_o *assetFolderURL,
        const MethodInfo *method)
{
  System_String_o *v3; // x20
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_Dictionary_string__uint__o *AllDownLoadFilePathCRCDictionary; // x0
  System_Collections_Generic_Dictionary_string__uint__o *v15; // x22
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_Collections_Generic_Dictionary_string__uint__o *RequireDownLoadFilePathCRCDictionary; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_Collections_Generic_Dictionary_string__uint__o *v29; // x22
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  System_Char_array *v42; // x0
  __int64 v43; // x1
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  struct System_String_o *FileName; // x0
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  const MethodInfo *v57; // x1
  Il2CppObject *LocalFolderPath; // x0
  struct System_String_o *v59; // x0
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  const MethodInfo *v66; // x1
  Il2CppObject *v67; // x0
  struct System_String_o *v68; // x0
  System_String_array **v69; // x2
  System_String_array **v70; // x3
  System_Boolean_array **v71; // x4
  System_Int32_array **v72; // x5
  System_Int32_array *v73; // x6
  System_Int32_array *v74; // x7
  const MethodInfo *v75; // x1
  Il2CppObject *v76; // x20
  FileMergeAndSplit_c *v77; // x8
  struct System_String_o *v78; // x0
  System_String_array **v79; // x2
  System_String_array **v80; // x3
  System_Boolean_array **v81; // x4
  System_Int32_array **v82; // x5
  System_Int32_array *v83; // x6
  System_Int32_array *v84; // x7
  __int64 v85; // x0

  v3 = assetFolderURL;
  if ( (byte_41873A0 & 1) == 0 )
  {
    sub_B2C35C(&char___TypeInfo, assetFolderURL);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__uint__Clear__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__uint___ctor__, v6);
    sub_B2C35C(&System_Collections_Generic_Dictionary_string__uint__TypeInfo, v7);
    sub_B2C35C(&FileMergeAndSplit_TypeInfo, v8);
    sub_B2C35C(&System_IO_Path_TypeInfo, v9);
    sub_B2C35C(&StringLiteral_23610/*"{0}/{1}"*/, v10);
    sub_B2C35C(&StringLiteral_23606/*"{0}/SplitFile"*/, v11);
    sub_B2C35C(&StringLiteral_872/*"/"*/, v12);
    sub_B2C35C(&StringLiteral_23612/*"{0}/{1}.usm"*/, v13);
    byte_41873A0 = 1;
  }
  AllDownLoadFilePathCRCDictionary = this->fields.AllDownLoadFilePathCRCDictionary;
  if ( AllDownLoadFilePathCRCDictionary )
  {
    System_Collections_Generic_Dictionary_string__uint___Clear(
      AllDownLoadFilePathCRCDictionary,
      (const MethodInfo_2E2FBBC *)Method_System_Collections_Generic_Dictionary_string__uint__Clear__);
  }
  else
  {
    v15 = (System_Collections_Generic_Dictionary_string__uint__o *)sub_B2C42C(System_Collections_Generic_Dictionary_string__uint__TypeInfo);
    System_Collections_Generic_Dictionary_string__uint____ctor(
      v15,
      (const MethodInfo_2E2EE2C *)Method_System_Collections_Generic_Dictionary_string__uint___ctor__);
    this->fields.AllDownLoadFilePathCRCDictionary = v15;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.AllDownLoadFilePathCRCDictionary,
      (System_Int32_array **)v15,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
  }
  RequireDownLoadFilePathCRCDictionary = this->fields.RequireDownLoadFilePathCRCDictionary;
  if ( RequireDownLoadFilePathCRCDictionary )
  {
    System_Collections_Generic_Dictionary_string__uint___Clear(
      RequireDownLoadFilePathCRCDictionary,
      (const MethodInfo_2E2FBBC *)Method_System_Collections_Generic_Dictionary_string__uint__Clear__);
  }
  else
  {
    v29 = (System_Collections_Generic_Dictionary_string__uint__o *)sub_B2C42C(System_Collections_Generic_Dictionary_string__uint__TypeInfo);
    System_Collections_Generic_Dictionary_string__uint____ctor(
      v29,
      (const MethodInfo_2E2EE2C *)Method_System_Collections_Generic_Dictionary_string__uint___ctor__);
    this->fields.RequireDownLoadFilePathCRCDictionary = v29;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.RequireDownLoadFilePathCRCDictionary,
      (System_Int32_array **)v29,
      v30,
      v31,
      v32,
      v33,
      v34,
      v35);
  }
  *(_QWORD *)&this->fields.downloadProgress = 0LL;
  this->fields.isDownloadCancel = 0;
  this->fields.mergeClass = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.mergeClass, 0LL, v23, v24, v25, v26, v27, v28);
  this->fields.crcCheckerClass = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.crcCheckerClass, 0LL, v36, v37, v38, v39, v40, v41);
  if ( !v3 )
    goto LABEL_21;
  if ( !System_String__EndsWith(v3, (System_String_o *)StringLiteral_872/*"/"*/, 0LL) )
    goto LABEL_14;
  v42 = (System_Char_array *)sub_B2C374(char___TypeInfo, 1LL);
  if ( !v42 )
LABEL_21:
    sub_B2C434(v42, v43);
  if ( !v42->max_length )
  {
    v85 = sub_B2C460(v42);
    sub_B2C400(v85, 0LL);
  }
  v42->m_Items[2] = 47;
  v3 = System_String__TrimEnd(v3, v42, 0LL);
LABEL_14:
  this->fields.assetFolderURL = v3;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.assetFolderURL,
    (System_Int32_array **)v3,
    v44,
    v45,
    v46,
    v47,
    v48,
    v49);
  if ( (BYTE3(System_IO_Path_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_IO_Path_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_IO_Path_TypeInfo);
  }
  FileName = System_IO_Path__GetFileName(v3, 0LL);
  this->fields.assetFolder = FileName;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.assetFolder,
    (System_Int32_array **)FileName,
    v51,
    v52,
    v53,
    v54,
    v55,
    v56);
  LocalFolderPath = (Il2CppObject *)MovieFileMerge__GetLocalFolderPath(this, v57);
  v59 = System_String__Format((System_String_o *)StringLiteral_23606/*"{0}/SplitFile"*/, LocalFolderPath, 0LL);
  this->fields.outputSplitFileFolder = v59;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.outputSplitFileFolder,
    (System_Int32_array **)v59,
    v60,
    v61,
    v62,
    v63,
    v64,
    v65);
  v67 = (Il2CppObject *)MovieFileMerge__GetLocalFolderPath(this, v66);
  v68 = System_String__Format_44301068(
          (System_String_o *)StringLiteral_23612/*"{0}/{1}.usm"*/,
          v67,
          (Il2CppObject *)this->fields.assetFolder,
          0LL);
  this->fields.outputMergeFile = v68;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.outputMergeFile,
    (System_Int32_array **)v68,
    v69,
    v70,
    v71,
    v72,
    v73,
    v74);
  v76 = (Il2CppObject *)MovieFileMerge__GetLocalFolderPath(this, v75);
  v77 = FileMergeAndSplit_TypeInfo;
  if ( (BYTE3(FileMergeAndSplit_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FileMergeAndSplit_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FileMergeAndSplit_TypeInfo);
    v77 = FileMergeAndSplit_TypeInfo;
  }
  v78 = System_String__Format_44301068(
          (System_String_o *)StringLiteral_23610/*"{0}/{1}"*/,
          v76,
          (Il2CppObject *)v77->static_fields->PathCRCFileName,
          0LL);
  this->fields.outputMergeFileCRC = v78;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.outputMergeFileCRC,
    (System_Int32_array **)v78,
    v79,
    v80,
    v81,
    v82,
    v83,
    v84);
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

  if ( (byte_41873A3 & 1) == 0 )
  {
    sub_B2C35C(&MovieFileMerge__Merge_d__35_TypeInfo, method);
    byte_41873A3 = 1;
  }
  v3 = sub_B2C42C(MovieFileMerge__Merge_d__35_TypeInfo);
  MovieFileMerge__Merge_d__35___ctor((MovieFileMerge__Merge_d__35_o *)v3, 0, 0LL);
  if ( !v3 )
    sub_B2C434(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v3 + 32), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
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

  if ( (byte_418739F & 1) == 0 )
  {
    sub_B2C35C(&MovieFileMerge__PlayCRIMovie_d__31_TypeInfo, filePath);
    byte_418739F = 1;
  }
  v4 = sub_B2C42C(MovieFileMerge__PlayCRIMovie_d__31_TypeInfo);
  MovieFileMerge__PlayCRIMovie_d__31___ctor((MovieFileMerge__PlayCRIMovie_d__31_o *)v4, 0, 0LL);
  if ( !v4 )
    sub_B2C434(v5, v6);
  *(_QWORD *)(v4 + 32) = filePath;
  sub_B2C2F8((BattleServantConfConponent_o *)(v4 + 32), (System_Int32_array **)filePath, v7, v8, v9, v10, v11, v12);
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

  if ( (byte_418739D & 1) == 0 )
  {
    sub_B2C35C(&MovieFileMerge__PlayMP4_d__29_TypeInfo, method);
    byte_418739D = 1;
  }
  v3 = sub_B2C42C(MovieFileMerge__PlayMP4_d__29_TypeInfo);
  MovieFileMerge__PlayMP4_d__29___ctor((MovieFileMerge__PlayMP4_d__29_o *)v3, 0, 0LL);
  if ( !v3 )
    sub_B2C434(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v3 + 32), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v3;
}


System_Collections_IEnumerator_o *__fastcall MovieFileMerge__PlayMP4_24473688(
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

  if ( (byte_418739E & 1) == 0 )
  {
    sub_B2C35C(&MovieFileMerge__PlayMP4_d__30_TypeInfo, filePath);
    byte_418739E = 1;
  }
  v6 = sub_B2C42C(MovieFileMerge__PlayMP4_d__30_TypeInfo);
  MovieFileMerge__PlayMP4_d__30___ctor((MovieFileMerge__PlayMP4_d__30_o *)v6, 0, 0LL);
  if ( !v6 )
    sub_B2C434(v7, v8);
  *(_QWORD *)(v6 + 40) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v6 + 40), (System_Int32_array **)this, v9, v10, v11, v12, v13, v14);
  *(_QWORD *)(v6 + 32) = filePath;
  sub_B2C2F8((BattleServantConfConponent_o *)(v6 + 32), (System_Int32_array **)filePath, v15, v16, v17, v18, v19, v20);
  return (System_Collections_IEnumerator_o *)v6;
}


void __fastcall MovieFileMerge__Reboot(MovieFileMerge_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Networking_UnityWebRequest_o *v4; // x0
  BattleServantConfConponent_o *p_loader; // x19
  struct UnityEngine_Networking_UnityWebRequest_o *loader; // t1
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  ManagementManager_c *v13; // x0
  ManagementManager_o *Instance; // x0
  __int64 v15; // x1

  if ( (byte_41873AB & 1) == 0 )
  {
    sub_B2C35C(&ManagementManager_TypeInfo, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_ManagementManager__get_Instance__, v3);
    byte_41873AB = 1;
  }
  loader = this->fields.loader;
  p_loader = (BattleServantConfConponent_o *)&this->fields.loader;
  v4 = loader;
  if ( loader )
  {
    UnityEngine_Networking_UnityWebRequest__Dispose(v4, 0LL);
    p_loader->klass = 0LL;
    sub_B2C2F8(p_loader, 0LL, v7, v8, v9, v10, v11, v12);
  }
  if ( (BYTE3(ManagementManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagementManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
  }
  if ( !byte_4185D97 )
  {
    sub_B2C35C(&ManagementManager_TypeInfo, method);
    byte_4185D97 = 1;
  }
  v13 = ManagementManager_TypeInfo;
  if ( (BYTE3(ManagementManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagementManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
    v13 = ManagementManager_TypeInfo;
  }
  if ( v13->static_fields->isDuringStartup )
  {
    UnityEngine_Application__Quit_40611620(0LL);
  }
  else
  {
    Instance = (ManagementManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
    if ( !Instance )
      sub_B2C434(0LL, v15);
    ManagementManager__reboot(Instance, 0, 0LL);
  }
}


void __fastcall MovieFileMerge___Merge_b__35_0(MovieFileMerge_o *this, System_Exception_o *e, const MethodInfo *method)
{
  Il2CppObject *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  CommonUI_o *Instance; // x20
  System_String_o *v12; // x21
  ErrorDialog_ClickDelegate_o *v13; // x22
  const MethodInfo *v14; // x2
  System_String_o *v15; // x1

  v4 = (Il2CppObject *)this;
  if ( (byte_41873AD & 1) == 0 )
  {
    sub_B2C35C(&ErrorDialog_ClickDelegate_TypeInfo, e);
    sub_B2C35C(&LocalizationManager_TypeInfo, v5);
    sub_B2C35C(&Method_MovieFileMerge_EndMergeRetryDialog__, v6);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_B2C35C(&StringLiteral_5320/*"Disk full"*/, v8);
    sub_B2C35C(&StringLiteral_9285/*"NETWORK_ERROR_DISK_FULL"*/, v9);
    this = (MovieFileMerge_o *)sub_B2C35C(&StringLiteral_1/*""*/, v10);
    byte_41873AD = 1;
  }
  if ( !e )
    goto LABEL_13;
  this = (MovieFileMerge_o *)((__int64 (__fastcall *)(System_Exception_o *, Il2CppMethodPointer, const MethodInfo *))e->klass->vtable._5_get_Message.method)(
                               e,
                               e->klass->vtable._6_get_Data.methodPtr,
                               method);
  if ( !this )
    goto LABEL_13;
  if ( !System_String__StartsWith((System_String_o *)this, (System_String_o *)StringLiteral_5320/*"Disk full"*/, 0LL) )
  {
    v15 = (System_String_o *)((__int64 (__fastcall *)(System_Exception_o *, Il2CppMethodPointer))e->klass->vtable._5_get_Message.method)(
                               e,
                               e->klass->vtable._6_get_Data.methodPtr);
    goto LABEL_12;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v12 = LocalizationManager__Get((System_String_o *)StringLiteral_9285/*"NETWORK_ERROR_DISK_FULL"*/, 0LL);
  v13 = (ErrorDialog_ClickDelegate_o *)sub_B2C42C(ErrorDialog_ClickDelegate_TypeInfo);
  ErrorDialog_ClickDelegate___ctor(v13, v4, Method_MovieFileMerge_EndMergeRetryDialog__, 0LL);
  if ( !Instance )
LABEL_13:
    sub_B2C434(this, e);
  CommonUI__OpenErrorDialog(Instance, (System_String_o *)StringLiteral_1/*""*/, v12, v13, 1, 0LL);
  v15 = (System_String_o *)StringLiteral_5320/*"Disk full"*/;
LABEL_12:
  MovieFileMerge__AssetLoadLogError((MovieFileMerge_o *)v4, v15, v14);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  int32_t _1__state; // w8
  struct MovieFileMerge_o *_4__this; // x20
  System_Int32_array **v8; // x0
  BattleServantConfConponent_o *p__2__current; // x19
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  bool result; // w0
  System_Int32_array **Dic; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_String_o *outputMergeFile; // x21
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x0
  System_Collections_Generic_List_uint__o *v26; // x22
  FileMergeAndSplit_CRCChecker_o *v27; // x23
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_Int32_array **v34; // x0
  BattleServantConfConponent_o *v35; // x19
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  System_Int32_array **NeedDownloadDictionary; // x0
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7

  v2 = this;
  if ( (byte_4185D43 & 1) == 0 )
  {
    sub_B2C35C(&FileMergeAndSplit_CRCChecker_TypeInfo, method);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__uint__get_Values__, v3);
    sub_B2C35C(&Method_System_Linq_Enumerable_ToList_uint___, v4);
    this = (MovieFileMerge__CRCDownloadAndCheck_d__33_o *)sub_B2C35C(&FileMergeAndSplit_TypeInfo, v5);
    byte_4185D43 = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state == 2 )
  {
    v2->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_22;
    NeedDownloadDictionary = (System_Int32_array **)MovieFileMerge__GetNeedDownloadDictionary(_4__this, 0LL);
    _4__this->fields.RequireDownLoadFilePathCRCDictionary = (struct System_Collections_Generic_Dictionary_string__uint__o *)NeedDownloadDictionary;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&_4__this->fields.RequireDownLoadFilePathCRCDictionary,
      NeedDownloadDictionary,
      v43,
      v44,
      v45,
      v46,
      v47,
      v48);
    if ( MovieFileMerge__IsCRCMatch(_4__this, 0LL) )
    {
      if ( System_IO_Directory__Exists(_4__this->fields.outputSplitFileFolder, 0LL) )
        System_IO_Directory__Delete_44244828(_4__this->fields.outputSplitFileFolder, 1, 0LL);
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
        v8 = (System_Int32_array **)MovieFileMerge__Download(
                                      _4__this,
                                      FileMergeAndSplit_TypeInfo->static_fields->PathCRCFileName,
                                      0,
                                      0LL);
        v2->fields.__2__current = (Il2CppObject *)v8;
        p__2__current = (BattleServantConfConponent_o *)&v2->fields.__2__current;
        sub_B2C2F8(p__2__current, v8, v10, v11, v12, v13, v14, v15);
        result = 1;
        *(_DWORD *)&p__2__current[-1].fields.isOpenAfter = 1;
        return result;
      }
LABEL_22:
      sub_B2C434(this, method);
    }
    return 0;
  }
  v2->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_22;
  Dic = (System_Int32_array **)MovieFileMerge__CreateDic(_4__this, _4__this->fields.outputMergeFileCRC, 0LL);
  _4__this->fields.AllDownLoadFilePathCRCDictionary = (struct System_Collections_Generic_Dictionary_string__uint__o *)Dic;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&_4__this->fields.AllDownLoadFilePathCRCDictionary,
    Dic,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  this = (MovieFileMerge__CRCDownloadAndCheck_d__33_o *)_4__this->fields.AllDownLoadFilePathCRCDictionary;
  if ( !this )
    goto LABEL_22;
  outputMergeFile = _4__this->fields.outputMergeFile;
  Values = System_Collections_Generic_Dictionary_string__uint___get_Values(
             (System_Collections_Generic_Dictionary_string__uint__o *)this,
             (const MethodInfo_2E2F784 *)Method_System_Collections_Generic_Dictionary_string__uint__get_Values__);
  v26 = (System_Collections_Generic_List_uint__o *)System_Linq_Enumerable__ToList_uint_(
                                                     (System_Collections_Generic_IEnumerable_TSource__o *)Values,
                                                     (const MethodInfo_1A9DFCC *)Method_System_Linq_Enumerable_ToList_uint___);
  v27 = (FileMergeAndSplit_CRCChecker_o *)sub_B2C42C(FileMergeAndSplit_CRCChecker_TypeInfo);
  FileMergeAndSplit_CRCChecker___ctor(v27, outputMergeFile, v26, 0LL);
  _4__this->fields.crcCheckerClass = v27;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&_4__this->fields.crcCheckerClass,
    (System_Int32_array **)v27,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
  this = (MovieFileMerge__CRCDownloadAndCheck_d__33_o *)_4__this->fields.crcCheckerClass;
  if ( !this )
    goto LABEL_22;
  v34 = (System_Int32_array **)FileMergeAndSplit_CRCChecker__Run((FileMergeAndSplit_CRCChecker_o *)this, 0LL);
  v2->fields.__2__current = (Il2CppObject *)v34;
  v35 = (BattleServantConfConponent_o *)&v2->fields.__2__current;
  sub_B2C2F8(v35, v34, v36, v37, v38, v39, v40, v41);
  *(_DWORD *)&v35[-1].fields.isOpenAfter = 2;
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

  v2 = sub_B2C360(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B2C42C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B2C360(&Method_MovieFileMerge__CRCDownloadAndCheck_d__33_System_Collections_IEnumerator_Reset__);
  sub_B2C400(v3, v4);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  int32_t _1__state; // w8
  MovieFileMerge_o *_4__this; // x20
  System_Collections_Generic_Dictionary_string__uint__o *RequireDownLoadFilePathCRCDictionary; // x0
  struct System_Collections_Generic_Dictionary_Enumerator_string__uint__o *p__7__wrap1; // x21
  struct System_Collections_Generic_KeyValuePair_TKey__TValue__o current; // q0
  __int128 v12; // q1
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  _BOOL8 v19; // x0
  const MethodInfo *v20; // x1
  bool result; // w0
  __int64 v22; // x0
  __int64 v23; // x1
  System_Int32_array **v24; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v31; // [xsp+28h] [xbp-48h] BYREF

  v2 = this;
  if ( (byte_4185D45 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__uint__GetEnumerator__, method);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_Enumerator_string__uint__MoveNext__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_Enumerator_string__uint__get_Current__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_KeyValuePair_string__uint__get_Key__, v5);
    this = (MovieFileMerge__DownloadMovie_d__34_o *)sub_B2C35C(
                                                      &Method_System_Collections_Generic_KeyValuePair_string__uint__get_Value__,
                                                      v6);
    byte_4185D45 = 1;
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
      sub_B2C434(this, method);
    RequireDownLoadFilePathCRCDictionary = _4__this->fields.RequireDownLoadFilePathCRCDictionary;
    _4__this->fields.isDownloading = 1;
    _4__this->fields.downloadProgress = 0;
    if ( !RequireDownLoadFilePathCRCDictionary )
      sub_B2C434(0LL, method);
    System_Collections_Generic_Dictionary_string__uint___GetEnumerator(
      &v31,
      RequireDownLoadFilePathCRCDictionary,
      (const MethodInfo_2E2FF74 *)Method_System_Collections_Generic_Dictionary_string__uint__GetEnumerator__);
    p__7__wrap1 = &v2->fields.__7__wrap1;
    v12 = *(_OWORD *)&v31.fields.dictionary;
    current = v31.fields.current;
    *(_QWORD *)&v2->fields.__7__wrap1.fields.getEnumeratorRetType = *(_QWORD *)&v31.fields.getEnumeratorRetType;
    v2->fields.__7__wrap1.fields.current = current;
    *(_OWORD *)&v2->fields.__7__wrap1.fields.dictionary = v12;
    sub_B2C2F8((BattleServantConfConponent_o *)&v2->fields.__7__wrap1, 0LL, v13, v14, v15, v16, v17, v18);
  }
  v2->fields.__1__state = -3;
  v19 = System_Collections_Generic_Dictionary_Enumerator_string__uint___MoveNext(
          p__7__wrap1,
          (const MethodInfo_2756DF0 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__uint__MoveNext__);
  if ( v19 )
  {
    if ( !_4__this )
      sub_B2C434(v19, v20);
    if ( _4__this->fields.isDownloadCancel )
    {
      _4__this->fields.isDownloading = 0;
      MovieFileMerge__DownloadMovie_d__34____m__Finally1(v2, v20);
      return 0;
    }
    else
    {
      v24 = (System_Int32_array **)MovieFileMerge__Download(
                                     _4__this,
                                     (System_String_o *)v2->fields.__7__wrap1.fields.current.fields.key,
                                     (uint32_t)v2->fields.__7__wrap1.fields.current.fields.value,
                                     0LL);
      v2->fields.__2__current = (Il2CppObject *)v24;
      sub_B2C2F8((BattleServantConfConponent_o *)&v2->fields.__2__current, v24, v25, v26, v27, v28, v29, v30);
      result = 1;
      v2->fields.__1__state = 1;
    }
  }
  else
  {
    MovieFileMerge__DownloadMovie_d__34____m__Finally1(v2, v20);
    *(_QWORD *)&p__7__wrap1->fields.getEnumeratorRetType = 0LL;
    *(_OWORD *)&p__7__wrap1->fields.dictionary = 0u;
    p__7__wrap1->fields.current = 0u;
    if ( !_4__this )
      sub_B2C434(v22, v23);
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

  v2 = sub_B2C360(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B2C42C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B2C360(&Method_MovieFileMerge__DownloadMovie_d__34_System_Collections_IEnumerator_Reset__);
  sub_B2C400(v3, v4);
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
  if ( (byte_4185D46 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_Enumerator_string__uint__Dispose__, method);
    byte_4185D46 = 1;
  }
  this->fields.__1__state = -1;
  System_Collections_Generic_Dictionary_Enumerator_string__uint___Dispose(
    &this->fields.__7__wrap1,
    (const MethodInfo_2756F5C *)Method_System_Collections_Generic_Dictionary_Enumerator_string__uint__Dispose__);
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
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  MovieFileMerge__Download_d__41_o *v8; // x19
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
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x1
  __int64 v32; // x1
  __int64 v33; // x1
  __int64 v34; // x1
  __int64 v35; // x1
  __int64 v36; // x1
  __int64 v37; // x1
  __int64 v38; // x1
  __int64 v39; // x1
  struct MovieFileMerge_o *_4__this; // x20
  System_Int32_array **v41; // x0
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  Il2CppObject *LocalFolderPath; // x0
  System_Int32_array **v49; // x0
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  bool *p_isDownload_5__4; // x22
  BattleServantConfConponent_o *p_readData_5__5; // x21
  uint32_t downloadingCRC; // w8
  System_String_array **v65; // x2
  System_String_array **v66; // x3
  System_Boolean_array **v67; // x4
  System_Int32_array **v68; // x5
  System_Int32_array *v69; // x6
  System_Int32_array *v70; // x7
  System_String_array *v71; // x21
  System_Int32_array **v72; // x1
  ManagementManager_c *v73; // x0
  _BOOL4 v74; // w22
  CommonUI_o *v75; // x21
  System_String_o *v76; // x22
  ErrorDialog_ClickDelegate_o *v77; // x23
  System_Byte_array *readData_5__5; // x20
  uint32_t v79; // w0
  Il2CppObject **p__2__current; // x19
  System_String_array **v81; // x2
  System_String_array **v82; // x3
  System_Boolean_array **v83; // x4
  System_Int32_array **v84; // x5
  System_Int32_array *v85; // x6
  System_Int32_array *v86; // x7
  int v87; // w8
  UnityEngine_WaitForEndOfFrame_o *v88; // x20
  System_String_array **v89; // x2
  System_String_array **v90; // x3
  System_Boolean_array **v91; // x4
  System_Int32_array **v92; // x5
  System_Int32_array *v93; // x6
  System_Int32_array *v94; // x7
  float unscaledTime; // s8
  UnityEngine_WaitForEndOfFrame_o *v96; // x21
  System_String_array **v97; // x2
  System_String_array **v98; // x3
  System_Boolean_array **v99; // x4
  System_Int32_array **v100; // x5
  System_Int32_array *v101; // x6
  System_Int32_array *v102; // x7
  MovieFileMerge__Download_d__41_o **p_loader; // x22
  System_String_array **v104; // x2
  System_String_array **v105; // x3
  System_Boolean_array **v106; // x4
  System_Int32_array **v107; // x5
  System_Int32_array *v108; // x6
  System_Int32_array *v109; // x7
  _QWORD *p_errorCode_5__11; // x21
  System_String_array **v111; // x2
  System_String_array **v112; // x3
  System_Boolean_array **v113; // x4
  System_Int32_array **v114; // x5
  System_Int32_array *v115; // x6
  System_Int32_array *v116; // x7
  System_String_o *error; // x0
  System_Int32_array **data; // x0
  System_String_array **v119; // x2
  System_String_array **v120; // x3
  System_Boolean_array **v121; // x4
  System_Int32_array **v122; // x5
  System_Int32_array *v123; // x6
  System_Int32_array *v124; // x7
  System_String_array **v125; // x2
  System_String_array **v126; // x3
  System_Boolean_array **v127; // x4
  System_Int32_array **v128; // x5
  System_Int32_array *v129; // x6
  System_Int32_array *v130; // x7
  System_String_array **v131; // x2
  System_String_array **v132; // x3
  System_Boolean_array **v133; // x4
  System_Int32_array **v134; // x5
  System_Int32_array *v135; // x6
  System_Int32_array *v136; // x7
  UnityEngine_WaitForEndOfFrame_o *v137; // x20
  System_String_array **v138; // x2
  System_String_array **v139; // x3
  System_Boolean_array **v140; // x4
  System_Int32_array **v141; // x5
  System_Int32_array *v142; // x6
  System_Int32_array *v143; // x7
  System_Int32_array **v144; // x1
  System_String_array **v145; // x2
  System_String_array **v146; // x3
  System_Boolean_array **v147; // x4
  System_Int32_array **v148; // x5
  System_Int32_array *v149; // x6
  System_Int32_array *v150; // x7
  System_IO_DirectoryInfo_o *Parent; // x0
  __int64 v152; // x1
  System_IO_DirectoryInfo_o *v153; // x21
  System_String_o *v154; // x0
  System_String_o *v155; // x21
  int64_t FreeSize; // x21
  ManagerConfig_c *v157; // x0
  System_String_o *v158; // x22
  ErrorDialog_ClickDelegate_o *v159; // x23
  UnityEngine_WaitForEndOfFrame_o *v160; // x20
  System_String_array **v161; // x2
  System_String_array **v162; // x3
  System_Boolean_array **v163; // x4
  System_Int32_array **v164; // x5
  System_Int32_array *v165; // x6
  System_Int32_array *v166; // x7
  float downloadProgress; // s0
  float loadProgress_5__7; // s9
  float v169; // s8
  float v170; // s0
  bool v171; // zf
  float v172; // s8
  System_String_o *downloadingURL; // x22
  System_String_o *v174; // x0
  System_Int32_array **v175; // x0
  System_String_array **v176; // x2
  System_String_array **v177; // x3
  System_Boolean_array **v178; // x4
  System_Int32_array **v179; // x5
  System_Int32_array *v180; // x6
  System_Int32_array *v181; // x7
  System_Collections_Generic_Dictionary_string__string__o *ResponseHeaders; // x0
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v183; // x22
  System_String_o *v184; // x22
  MovieFileMerge__Download_d__41_o *v185; // x22
  int v186; // w8
  System_String_o *v187; // x23
  System_String_o *v188; // x0
  System_String_array **v189; // x2
  System_String_array **v190; // x3
  System_Boolean_array **v191; // x4
  System_Int32_array **v192; // x5
  System_Int32_array *v193; // x6
  System_Int32_array *v194; // x7
  System_Int32_array **v195; // x24
  System_String_array **v196; // x2
  System_String_array **v197; // x3
  System_Boolean_array **v198; // x4
  System_Int32_array **v199; // x5
  System_Int32_array *v200; // x6
  System_Int32_array *v201; // x7
  System_Int32_array **v202; // x1
  System_String_array **v203; // x2
  System_String_array **v204; // x3
  System_Boolean_array **v205; // x4
  System_Int32_array **v206; // x5
  System_Int32_array *v207; // x6
  System_Int32_array *v208; // x7
  System_Int32_array **v209; // x23
  System_String_array **v210; // x2
  System_String_array **v211; // x3
  System_Boolean_array **v212; // x4
  System_Int32_array **v213; // x5
  System_Int32_array *v214; // x6
  System_Int32_array *v215; // x7
  System_Int32_array **v216; // x1
  System_String_array **v217; // x2
  System_String_array **v218; // x3
  System_Boolean_array **v219; // x4
  System_Int32_array **v220; // x5
  System_Int32_array *v221; // x6
  System_Int32_array *v222; // x7
  System_Int32_array **v223; // x22
  System_String_array **v224; // x2
  System_String_array **v225; // x3
  System_Boolean_array **v226; // x4
  System_Int32_array **v227; // x5
  System_Int32_array *v228; // x6
  System_Int32_array *v229; // x7
  System_Int32_array **v230; // x1
  System_Int32_array **v231; // x0
  System_String_array **v232; // x2
  System_String_array **v233; // x3
  System_Boolean_array **v234; // x4
  System_Int32_array **v235; // x5
  System_Int32_array *v236; // x6
  System_Int32_array *v237; // x7
  ManagerConfig_c *v238; // x0
  WebViewManager_o *Instance; // x0
  System_String_o *errorCode_5__11; // x21
  CommonUI_o *v241; // x22
  ErrorDialog_ClickDelegate_o *v242; // x23
  UnityEngine_WaitForEndOfFrame_o *v243; // x20
  System_String_array **v244; // x2
  System_String_array **v245; // x3
  System_Boolean_array **v246; // x4
  System_Int32_array **v247; // x5
  System_Int32_array *v248; // x6
  System_Int32_array *v249; // x7
  int autoRetryCount_5__3; // w21
  ManagerConfig_c *v251; // x0
  float DOWNLOAD_RETRY_DELAY_TIME; // s8
  UnityEngine_WaitForSeconds_o *v253; // x20
  System_String_array **v254; // x2
  System_String_array **v255; // x3
  System_Boolean_array **v256; // x4
  System_Int32_array **v257; // x5
  System_Int32_array *v258; // x6
  System_Int32_array *v259; // x7
  Il2CppObject *v260; // x21
  BattleServantConfConponent_o *v261; // x20
  MovieFileMerge__Download_d__41_o *loader; // t1
  System_String_array **v263; // x2
  System_String_array **v264; // x3
  System_Boolean_array **v265; // x4
  System_Int32_array **v266; // x5
  System_Int32_array *v267; // x6
  System_Int32_array *v268; // x7
  System_String_array **v269; // x2
  System_String_array **v270; // x3
  System_Boolean_array **v271; // x4
  System_Int32_array **v272; // x5
  System_Int32_array *v273; // x6
  System_Int32_array *v274; // x7
  BattleServantConfConponent_o *v275; // x0
  struct UnityEngine_Networking_UnityWebRequest_o **v276; // x21
  System_String_array **v277; // x2
  System_String_array **v278; // x3
  System_Boolean_array **v279; // x4
  System_Int32_array **v280; // x5
  System_Int32_array *v281; // x6
  System_Int32_array *v282; // x7
  System_String_array **v283; // x2
  System_String_array **v284; // x3
  System_Boolean_array **v285; // x4
  System_Int32_array **v286; // x5
  System_Int32_array *v287; // x6
  System_Int32_array *v288; // x7
  ManagerConfig_c *v289; // x0
  WebViewManager_o *v290; // x0
  System_String_o *v291; // x21
  CommonUI_o *v292; // x22
  ErrorDialog_ClickDelegate_o *v293; // x23
  System_String_array **v294; // x2
  System_String_array **v295; // x3
  System_Boolean_array **v296; // x4
  System_Int32_array **v297; // x5
  System_Int32_array *v298; // x6
  System_Int32_array *v299; // x7
  System_String_array **v300; // x2
  System_String_array **v301; // x3
  System_Boolean_array **v302; // x4
  System_Int32_array **v303; // x5
  System_Int32_array *v304; // x6
  System_Int32_array *v305; // x7
  System_String_array **v306; // x2
  System_String_array **v307; // x3
  System_Boolean_array **v308; // x4
  System_Int32_array **v309; // x5
  System_Int32_array *v310; // x6
  System_Int32_array *v311; // x7
  UnityEngine_WaitForSeconds_o *v312; // x20
  System_String_array **v313; // x2
  System_String_array **v314; // x3
  System_Boolean_array **v315; // x4
  System_Int32_array **v316; // x5
  System_Int32_array *v317; // x6
  System_Int32_array *v318; // x7
  __int64 v319; // x1
  ManagementManager_c *v320; // x0
  _BOOL4 isDuringStartup; // w23
  WebViewManager_o *v322; // x0
  struct System_String_o *errorLocalizeCode_5__12; // x8
  CommonUI_o *v324; // x22
  System_String_o *v325; // x21
  System_String_o *v326; // x23
  System_String_o *v327; // x23
  ErrorDialog_ClickDelegate_o *v328; // x24
  ManagerConfig_c *v329; // x0
  System_Int32_array **wait_5__8; // x1
  System_String_o *v331; // x23
  System_String_o *v332; // x23
  ErrorDialog_ClickDelegate_o *v333; // x24
  __int64 v334; // x0
  __int64 v335; // x0
  __int64 v336; // x0
  System_IO_IOException_o *v337; // x21
  System_String_o *v338; // x0
  __int64 v339; // x0
  System_Int32_array **v340; // x0
  System_String_array **v341; // x2
  System_String_array **v342; // x3
  System_Boolean_array **v343; // x4
  System_Int32_array **v344; // x5
  System_Int32_array *v345; // x6
  System_Int32_array *v346; // x7
  BattleServantConfConponent_o *v347; // x19
  System_String_array **v348; // x2
  System_String_array **v349; // x3
  System_Boolean_array **v350; // x4
  System_Int32_array **v351; // x5
  System_Int32_array *v352; // x6
  System_Int32_array *v353; // x7
  System_Nullable_Vector2__o effectDistance; // [xsp+0h] [xbp-60h]
  System_Nullable_Vector2__o effectDistancea; // [xsp+0h] [xbp-60h]
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+18h] [xbp-48h] BYREF

  v8 = this;
  if ( (byte_4185D44 & 1) == 0 )
  {
    sub_B2C35C(&char___TypeInfo, method);
    sub_B2C35C(&ErrorDialog_ClickDelegate_TypeInfo, v9);
    sub_B2C35C(&CommonServicePluginScript_TypeInfo, v10);
    sub_B2C35C(&Crc32_TypeInfo, v11);
    sub_B2C35C(&UnityEngine_Debug_TypeInfo, v12);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__string__TryGetValue__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__string__get_Count__, v14);
    sub_B2C35C(&LocalizationManager_TypeInfo, v15);
    sub_B2C35C(&ManagementManager_TypeInfo, v16);
    sub_B2C35C(&ManagerConfig_TypeInfo, v17);
    sub_B2C35C(&Method_MovieFileMerge_EndRetryDialog__, v18);
    sub_B2C35C(&Method_MovieFileMerge_EndWarningDialog__, v19);
    sub_B2C35C(&NetworkManager_TypeInfo, v20);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v21);
    sub_B2C35C(&string___TypeInfo, v22);
    sub_B2C35C(&UnityEngine_WaitForEndOfFrame_TypeInfo, v23);
    sub_B2C35C(&UnityEngine_WaitForSeconds_TypeInfo, v24);
    sub_B2C35C(&StringLiteral_7098/*"HTTP"*/, v25);
    sub_B2C35C(&StringLiteral_655/*")\n\n503 Auto retry count "*/, v26);
    sub_B2C35C(&StringLiteral_658/*")\nfile crc ("*/, v27);
    sub_B2C35C(&StringLiteral_1192/*"503"*/, v28);
    sub_B2C35C(&StringLiteral_1741/*"ASSET_LOADER_ERROR_BOOT_RETRY_MESSAGE"*/, v29);
    sub_B2C35C(&StringLiteral_15745/*"[FFFF80]Download error for debug"*/, v30);
    sub_B2C35C(&StringLiteral_23610/*"{0}/{1}"*/, v31);
    sub_B2C35C(&StringLiteral_12367/*"STATUS"*/, v32);
    sub_B2C35C(&StringLiteral_654/*")\n\n"*/, v33);
    sub_B2C35C(&StringLiteral_586/*"("*/, v34);
    sub_B2C35C(&StringLiteral_656/*")\n\nAssetBundle file check sum error\nlist crc ("*/, v35);
    sub_B2C35C(&StringLiteral_652/*")"*/, v36);
    sub_B2C35C(&StringLiteral_1742/*"ASSET_LOADER_ERROR_TIME_OVER_MESSAGE"*/, v37);
    sub_B2C35C(&StringLiteral_657/*")\n\nAssetBundle file download time over"*/, v38);
    this = (MovieFileMerge__Download_d__41_o *)sub_B2C35C(&StringLiteral_1/*""*/, v39);
    byte_4185D44 = 1;
  }
  value = 0LL;
  _4__this = v8->fields.__4__this;
  switch ( v8->fields.__1__state )
  {
    case 0:
      v8->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_223;
      v41 = (System_Int32_array **)System_String__Format_44301068(
                                     (System_String_o *)StringLiteral_23610/*"{0}/{1}"*/,
                                     (Il2CppObject *)_4__this->fields.assetFolderURL,
                                     (Il2CppObject *)v8->fields.fileName,
                                     0LL);
      _4__this->fields.downloadingURL = (struct System_String_o *)v41;
      sub_B2C2F8((BattleServantConfConponent_o *)&_4__this->fields.downloadingURL, v41, v42, v43, v44, v45, v46, v47);
      _4__this->fields.downloadingCRC = v8->fields.crc;
      LocalFolderPath = (Il2CppObject *)MovieFileMerge__GetLocalFolderPath(_4__this, 0LL);
      v49 = (System_Int32_array **)System_String__Format_44301068(
                                     (System_String_o *)StringLiteral_23610/*"{0}/{1}"*/,
                                     LocalFolderPath,
                                     (Il2CppObject *)v8->fields.fileName,
                                     0LL);
      v8->fields._dlFilePath_5__2 = (struct System_String_o *)v49;
      sub_B2C2F8((BattleServantConfConponent_o *)&v8->fields._dlFilePath_5__2, v49, v50, v51, v52, v53, v54, v55);
      v8->fields._isDownload_5__4 = 1;
      p_isDownload_5__4 = &v8->fields._isDownload_5__4;
      p_readData_5__5 = (BattleServantConfConponent_o *)&v8->fields._readData_5__5;
      v8->fields._autoRetryCount_5__3 = 0;
      _4__this->fields.isErrorDialog = 0;
      goto LABEL_218;
    case 1:
      v8->fields.__1__state = -1;
      unscaledTime = UnityEngine_Time__get_unscaledTime(0LL);
      this = (MovieFileMerge__Download_d__41_o *)ManagerConfig_TypeInfo;
      if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ManagerConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
        this = (MovieFileMerge__Download_d__41_o *)ManagerConfig_TypeInfo;
      }
      v8->fields._requestTime_5__6 = unscaledTime + *(float *)&this[1].fields._dlFilePath_5__2[1].fields.m_stringLength;
      if ( !_4__this )
        goto LABEL_223;
      v8->fields._loadProgress_5__7 = 0.0;
      v96 = (UnityEngine_WaitForEndOfFrame_o *)sub_B2C42C(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v96, 0LL);
      v8->fields._wait_5__8 = v96;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&v8->fields._wait_5__8,
        (System_Int32_array **)v96,
        v97,
        v98,
        v99,
        v100,
        v101,
        v102);
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
        sub_B2C2F8((BattleServantConfConponent_o *)&_4__this->fields.loader, 0LL, v131, v132, v133, v134, v135, v136);
        LOBYTE(this) = 0;
        _4__this->fields.isDownloading = 0;
        return (char)this;
      }
      downloadProgress = UnityEngine_Networking_UnityWebRequest__get_downloadProgress(
                           (UnityEngine_Networking_UnityWebRequest_o *)this,
                           0LL);
      loadProgress_5__7 = v8->fields._loadProgress_5__7;
      v169 = downloadProgress;
      v170 = UnityEngine_Time__get_unscaledTime(0LL);
      v171 = v169 == loadProgress_5__7;
      v172 = v170;
      if ( !v171 )
      {
        v329 = ManagerConfig_TypeInfo;
        if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ManagerConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
          v329 = ManagerConfig_TypeInfo;
        }
        v8->fields._requestTime_5__6 = v172 + v329->static_fields->TIMEOUT;
        this = *p_loader;
        if ( *p_loader )
        {
          v8->fields._loadProgress_5__7 = UnityEngine_Networking_UnityWebRequest__get_downloadProgress(
                                            (UnityEngine_Networking_UnityWebRequest_o *)this,
                                            0LL);
LABEL_205:
          wait_5__8 = (System_Int32_array **)v8->fields._wait_5__8;
          v8->fields.__2__current = (Il2CppObject *)wait_5__8;
          sub_B2C2F8(
            (BattleServantConfConponent_o *)&v8->fields.__2__current,
            wait_5__8,
            v104,
            v105,
            v106,
            v107,
            v108,
            v109);
          v8->fields.__1__state = 2;
          goto LABEL_180;
        }
        goto LABEL_223;
      }
      if ( v170 < v8->fields._requestTime_5__6 )
        goto LABEL_205;
LABEL_44:
      *(_WORD *)&v8->fields._isAutoRetry_5__9 = 0;
      v8->fields._errorCode_5__11 = 0LL;
      p_errorCode_5__11 = &v8->fields._errorCode_5__11;
      sub_B2C2F8((BattleServantConfConponent_o *)&v8->fields._errorCode_5__11, 0LL, v104, v105, v106, v107, v108, v109);
      v8->fields._errorLocalizeCode_5__12 = 0LL;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&v8->fields._errorLocalizeCode_5__12,
        0LL,
        v111,
        v112,
        v113,
        v114,
        v115,
        v116);
      this = *p_loader;
      if ( !*p_loader )
LABEL_223:
        sub_B2C434(this, method);
      if ( !UnityEngine_Networking_UnityWebRequest__get_isDone((UnityEngine_Networking_UnityWebRequest_o *)this, 0LL) )
      {
        v144 = (System_Int32_array **)System_String__Concat_44307816(
                                        (System_String_o *)StringLiteral_586/*"("*/,
                                        _4__this->fields.downloadingURL,
                                        (System_String_o *)StringLiteral_657/*")\n\nAssetBundle file download time over"*/,
                                        0LL);
        *p_errorCode_5__11 = v144;
LABEL_63:
        sub_B2C2F8(
          (BattleServantConfConponent_o *)&v8->fields._errorCode_5__11,
          v144,
          v145,
          v146,
          v147,
          v148,
          v149,
          v150);
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
        data = (System_Int32_array **)UnityEngine_Networking_DownloadHandler__get_data(
                                        (UnityEngine_Networking_DownloadHandler_o *)this,
                                        0LL);
        v8->fields._readData_5__5 = (struct System_Byte_array *)data;
        sub_B2C2F8((BattleServantConfConponent_o *)&v8->fields._readData_5__5, data, v119, v120, v121, v122, v123, v124);
        v8->fields.__2__current = 0LL;
        p__2__current = &v8->fields.__2__current;
        sub_B2C2F8((BattleServantConfConponent_o *)p__2__current, 0LL, v125, v126, v127, v128, v129, v130);
        v87 = 3;
        goto LABEL_179;
      }
      this = (MovieFileMerge__Download_d__41_o *)_4__this->fields.loader;
      if ( !this )
        goto LABEL_223;
      downloadingURL = _4__this->fields.downloadingURL;
      v174 = UnityEngine_Networking_UnityWebRequest__get_error((UnityEngine_Networking_UnityWebRequest_o *)this, 0LL);
      v175 = (System_Int32_array **)System_String__Concat_44308944(
                                      (System_String_o *)StringLiteral_586/*"("*/,
                                      downloadingURL,
                                      (System_String_o *)StringLiteral_654/*")\n\n"*/,
                                      v174,
                                      0LL);
      *p_errorCode_5__11 = v175;
      sub_B2C2F8((BattleServantConfConponent_o *)&v8->fields._errorCode_5__11, v175, v176, v177, v178, v179, v180, v181);
      this = (MovieFileMerge__Download_d__41_o *)_4__this->fields.loader;
      if ( !this )
        goto LABEL_223;
      ResponseHeaders = UnityEngine_Networking_UnityWebRequest__GetResponseHeaders(
                          (UnityEngine_Networking_UnityWebRequest_o *)this,
                          0LL);
      if ( !ResponseHeaders )
        goto LABEL_133;
      v183 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)ResponseHeaders;
      if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___get_Count(
             (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)ResponseHeaders,
             (const MethodInfo_2DB18BC *)Method_System_Collections_Generic_Dictionary_string__string__get_Count__) < 1
        || !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
              v183,
              (System_Xml_XmlQualifiedName_o *)StringLiteral_12367/*"STATUS"*/,
              &value,
              (const MethodInfo_2DB3AC0 *)Method_System_Collections_Generic_Dictionary_string__string__TryGetValue__) )
      {
        goto LABEL_133;
      }
      v184 = (System_String_o *)value;
      this = (MovieFileMerge__Download_d__41_o *)sub_B2C374(char___TypeInfo, 1LL);
      if ( !this )
        goto LABEL_223;
      method = (const MethodInfo *)this;
      if ( !LODWORD(this->fields.__2__current) )
        goto LABEL_214;
      LOWORD(this->fields.__4__this) = 32;
      if ( !v184 )
        goto LABEL_223;
      this = (MovieFileMerge__Download_d__41_o *)System_String__Split_44366316(v184, (System_Char_array *)this, 1, 0LL);
      if ( !this )
        goto LABEL_223;
      v185 = this;
      if ( SLODWORD(this->fields.__2__current) < 2 )
        goto LABEL_133;
      this = (MovieFileMerge__Download_d__41_o *)this->fields.__4__this;
      if ( !this )
        goto LABEL_223;
      this = (MovieFileMerge__Download_d__41_o *)System_String__StartsWith(
                                                   (System_String_o *)this,
                                                   (System_String_o *)StringLiteral_7098/*"HTTP"*/,
                                                   0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
        goto LABEL_133;
      if ( LODWORD(v185->fields.__2__current) <= 1 )
        goto LABEL_214;
      this = (MovieFileMerge__Download_d__41_o *)v185->fields.fileName;
      if ( !this )
        goto LABEL_223;
      if ( System_String__Equals_44292872((System_String_o *)this, (System_String_o *)StringLiteral_1192/*"503"*/, 0LL) )
      {
        v186 = v8->fields._autoRetryCount_5__3 + 1;
        v8->fields._isAutoRetry_5__9 = 1;
        v8->fields._autoRetryCount_5__3 = v186;
        v187 = _4__this->fields.downloadingURL;
        v188 = System_Int32__ToString((int)v8 + 64, 0LL);
        v144 = (System_Int32_array **)System_String__Concat_44308944(
                                        (System_String_o *)StringLiteral_586/*"("*/,
                                        v187,
                                        (System_String_o *)StringLiteral_655/*")\n\n503 Auto retry count "*/,
                                        v188,
                                        0LL);
        v8->fields._errorCode_5__11 = (struct System_String_o *)v144;
        goto LABEL_63;
      }
      goto LABEL_133;
    case 2:
      v8->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_223;
      goto LABEL_42;
    case 3:
      v8->fields.__1__state = -1;
      readData_5__5 = v8->fields._readData_5__5;
      if ( (BYTE3(Crc32_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Crc32_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
      v79 = Crc32__Compute(readData_5__5, 0LL);
      v8->fields.__2__current = 0LL;
      p__2__current = &v8->fields.__2__current;
      *((_DWORD *)p__2__current + 24) = v79;
      sub_B2C2F8((BattleServantConfConponent_o *)p__2__current, 0LL, v81, v82, v83, v84, v85, v86);
      v87 = 4;
      goto LABEL_179;
    case 4:
      v8->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_223;
      downloadingCRC = _4__this->fields.downloadingCRC;
      if ( v8->fields._downloadCrc_5__13 != downloadingCRC && downloadingCRC )
      {
        this = (MovieFileMerge__Download_d__41_o *)sub_B2C374(string___TypeInfo, 7LL);
        if ( !this )
          goto LABEL_223;
        v71 = (System_String_array *)this;
        this = (MovieFileMerge__Download_d__41_o *)StringLiteral_586/*"("*/;
        if ( StringLiteral_586/*"("*/ )
        {
          this = (MovieFileMerge__Download_d__41_o *)sub_B2C41C(StringLiteral_586/*"("*/, v71->obj.klass->_1.element_class);
          if ( !this )
            goto LABEL_215;
          v72 = (System_Int32_array **)StringLiteral_586/*"("*/;
        }
        else
        {
          v72 = 0LL;
        }
        if ( !v71->max_length )
          goto LABEL_214;
        v71->m_Items[0] = (System_String_o *)v72;
        sub_B2C2F8((BattleServantConfConponent_o *)v71->m_Items, v72, v65, v66, v67, v68, v69, v70);
        v195 = (System_Int32_array **)_4__this->fields.downloadingURL;
        if ( !v195
          || (this = (MovieFileMerge__Download_d__41_o *)sub_B2C41C(
                                                           _4__this->fields.downloadingURL,
                                                           v71->obj.klass->_1.element_class)) != 0LL )
        {
          if ( v71->max_length <= 1 )
            goto LABEL_214;
          v71->m_Items[1] = (System_String_o *)v195;
          sub_B2C2F8((BattleServantConfConponent_o *)&v71->m_Items[1], v195, v189, v190, v191, v192, v193, v194);
          this = (MovieFileMerge__Download_d__41_o *)StringLiteral_656/*")\n\nAssetBundle file check sum error\nlist crc ("*/;
          if ( StringLiteral_656/*")\n\nAssetBundle file check sum error\nlist crc ("*/ )
          {
            this = (MovieFileMerge__Download_d__41_o *)sub_B2C41C(StringLiteral_656/*")\n\nAssetBundle file check sum error\nlist crc ("*/, v71->obj.klass->_1.element_class);
            if ( !this )
              goto LABEL_215;
            v202 = (System_Int32_array **)StringLiteral_656/*")\n\nAssetBundle file check sum error\nlist crc ("*/;
          }
          else
          {
            v202 = 0LL;
          }
          if ( v71->max_length <= 2 )
            goto LABEL_214;
          v71->m_Items[2] = (System_String_o *)v202;
          sub_B2C2F8((BattleServantConfConponent_o *)&v71->m_Items[2], v202, v196, v197, v198, v199, v200, v201);
          this = (MovieFileMerge__Download_d__41_o *)System_UInt32__ToString((int)_4__this + 88, 0LL);
          v209 = (System_Int32_array **)this;
          if ( !this
            || (this = (MovieFileMerge__Download_d__41_o *)sub_B2C41C(this, v71->obj.klass->_1.element_class)) != 0LL )
          {
            if ( v71->max_length <= 3 )
              goto LABEL_214;
            v71->m_Items[3] = (System_String_o *)v209;
            sub_B2C2F8((BattleServantConfConponent_o *)&v71->m_Items[3], v209, v203, v204, v205, v206, v207, v208);
            this = (MovieFileMerge__Download_d__41_o *)StringLiteral_658/*")\nfile crc ("*/;
            if ( StringLiteral_658/*")\nfile crc ("*/ )
            {
              this = (MovieFileMerge__Download_d__41_o *)sub_B2C41C(StringLiteral_658/*")\nfile crc ("*/, v71->obj.klass->_1.element_class);
              if ( !this )
                goto LABEL_215;
              v216 = (System_Int32_array **)StringLiteral_658/*")\nfile crc ("*/;
            }
            else
            {
              v216 = 0LL;
            }
            if ( v71->max_length <= 4 )
              goto LABEL_214;
            v71->m_Items[4] = (System_String_o *)v216;
            sub_B2C2F8((BattleServantConfConponent_o *)&v71->m_Items[4], v216, v210, v211, v212, v213, v214, v215);
            this = (MovieFileMerge__Download_d__41_o *)System_UInt32__ToString((int)v8 + 120, 0LL);
            v223 = (System_Int32_array **)this;
            if ( !this
              || (this = (MovieFileMerge__Download_d__41_o *)sub_B2C41C(this, v71->obj.klass->_1.element_class)) != 0LL )
            {
              if ( v71->max_length <= 5 )
                goto LABEL_214;
              v71->m_Items[5] = (System_String_o *)v223;
              sub_B2C2F8((BattleServantConfConponent_o *)&v71->m_Items[5], v223, v217, v218, v219, v220, v221, v222);
              this = (MovieFileMerge__Download_d__41_o *)StringLiteral_652/*")"*/;
              if ( !StringLiteral_652/*")"*/ )
              {
                v230 = 0LL;
LABEL_131:
                if ( v71->max_length > 6 )
                {
                  v71->m_Items[6] = (System_String_o *)v230;
                  sub_B2C2F8((BattleServantConfConponent_o *)&v71->m_Items[6], v230, v224, v225, v226, v227, v228, v229);
                  v231 = (System_Int32_array **)System_String__Concat_44385656(v71, 0LL);
                  v8->fields._errorCode_5__11 = (struct System_String_o *)v231;
                  sub_B2C2F8(
                    (BattleServantConfConponent_o *)&v8->fields._errorCode_5__11,
                    v231,
                    v232,
                    v233,
                    v234,
                    v235,
                    v236,
                    v237);
                  v8->fields._isCrcError_5__10 = 1;
                  goto LABEL_133;
                }
LABEL_214:
                v334 = sub_B2C460(this);
                sub_B2C400(v334, 0LL);
              }
              this = (MovieFileMerge__Download_d__41_o *)sub_B2C41C(StringLiteral_652/*")"*/, v71->obj.klass->_1.element_class);
              if ( this )
              {
                v230 = (System_Int32_array **)StringLiteral_652/*")"*/;
                goto LABEL_131;
              }
            }
          }
        }
LABEL_215:
        v335 = sub_B2C454();
        sub_B2C400(v335, 0LL);
      }
      Parent = System_IO_Directory__GetParent(v8->fields._dlFilePath_5__2, 0LL);
      v153 = Parent;
      if ( !Parent )
        sub_B2C434(0LL, v152);
      if ( (((__int64 (__fastcall *)(System_IO_DirectoryInfo_o *, Il2CppMethodPointer))Parent->klass->vtable._9_get_Exists.method)(
              Parent,
              Parent->klass->vtable._10_Delete.methodPtr) & 1) == 0 )
      {
        v154 = (System_String_o *)((__int64 (__fastcall *)(System_IO_DirectoryInfo_o *, Il2CppMethodPointer))v153->klass->vtable._7_get_FullName.method)(
                                    v153,
                                    v153->klass->vtable._8_get_Name.methodPtr);
        System_IO_Directory__CreateDirectory(v154, 0LL);
      }
      v155 = MovieFileMerge__GetLocalFolderPath(_4__this, 0LL);
      if ( (BYTE3(CommonServicePluginScript_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CommonServicePluginScript_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CommonServicePluginScript_TypeInfo);
      }
      FreeSize = CommonServicePluginScript__GetFreeSize(v155, 0LL);
      if ( FreeSize >= 1 )
      {
        v157 = ManagerConfig_TypeInfo;
        if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ManagerConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
          v157 = ManagerConfig_TypeInfo;
        }
        if ( FreeSize < v157->static_fields->LIMIT_FREE_SIZE )
        {
          v336 = sub_B2C360(&System_IO_IOException_TypeInfo);
          v337 = (System_IO_IOException_o *)sub_B2C42C(v336);
          v338 = (System_String_o *)sub_B2C360(&StringLiteral_5320/*"Disk full"*/);
          System_IO_IOException___ctor_38371192(v337, v338, 0LL);
          v339 = sub_B2C360(&Method_MovieFileMerge__Download_d__41_MoveNext__);
          sub_B2C400(v337, v339);
        }
      }
      if ( System_IO_File__Exists(v8->fields._dlFilePath_5__2, 0LL) )
        System_IO_File__Delete(v8->fields._dlFilePath_5__2, 0LL);
      ++_4__this->fields.downloadProgress;
      System_IO_File__WriteAllBytes(v8->fields._dlFilePath_5__2, v8->fields._readData_5__5, 0LL);
      v8->fields._isDownload_5__4 = 0;
LABEL_133:
      method = (const MethodInfo *)v8->fields._errorCode_5__11;
      if ( method )
      {
        MovieFileMerge__AssetLoadLogError(_4__this, (System_String_o *)method, 0LL);
        v238 = ManagerConfig_TypeInfo;
        if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ManagerConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
          v238 = ManagerConfig_TypeInfo;
        }
        if ( v238->static_fields->UseDebugCommand )
        {
          _4__this->fields.isErrorDialog = 1;
          Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          errorCode_5__11 = v8->fields._errorCode_5__11;
          v241 = (CommonUI_o *)Instance;
          v242 = (ErrorDialog_ClickDelegate_o *)sub_B2C42C(ErrorDialog_ClickDelegate_TypeInfo);
          ErrorDialog_ClickDelegate___ctor(
            v242,
            (Il2CppObject *)_4__this,
            Method_MovieFileMerge_EndWarningDialog__,
            0LL);
          if ( !v241 )
            goto LABEL_223;
          effectDistance.fields.value = 0LL;
          *(_DWORD *)&effectDistance.fields.has_value = 0;
          CommonUI__OpenWarningDialog(
            v241,
            (System_String_o *)StringLiteral_15745/*"[FFFF80]Download error for debug"*/,
            errorCode_5__11,
            v242,
            1,
            0,
            -1.0,
            1,
            effectDistance,
            0LL);
LABEL_140:
          if ( _4__this->fields.isErrorDialog )
          {
            v243 = (UnityEngine_WaitForEndOfFrame_o *)sub_B2C42C(UnityEngine_WaitForEndOfFrame_TypeInfo);
            UnityEngine_WaitForEndOfFrame___ctor(v243, 0LL);
            v8->fields.__2__current = (Il2CppObject *)v243;
            p__2__current = &v8->fields.__2__current;
            sub_B2C2F8(
              (BattleServantConfConponent_o *)p__2__current,
              (System_Int32_array **)v243,
              v244,
              v245,
              v246,
              v247,
              v248,
              v249);
            v87 = 5;
            goto LABEL_179;
          }
        }
        if ( v8->fields._isAutoRetry_5__9 )
        {
          autoRetryCount_5__3 = v8->fields._autoRetryCount_5__3;
          v251 = ManagerConfig_TypeInfo;
          if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !ManagerConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
            v251 = ManagerConfig_TypeInfo;
          }
          DOWNLOAD_RETRY_DELAY_TIME = v251->static_fields->DOWNLOAD_RETRY_DELAY_TIME;
          v253 = (UnityEngine_WaitForSeconds_o *)sub_B2C42C(UnityEngine_WaitForSeconds_TypeInfo);
          UnityEngine_WaitForSeconds___ctor(v253, DOWNLOAD_RETRY_DELAY_TIME * (float)autoRetryCount_5__3, 0LL);
          v8->fields.__2__current = (Il2CppObject *)v253;
          p__2__current = &v8->fields.__2__current;
          sub_B2C2F8(
            (BattleServantConfConponent_o *)p__2__current,
            (System_Int32_array **)v253,
            v254,
            v255,
            v256,
            v257,
            v258,
            v259);
          v87 = 6;
          goto LABEL_179;
        }
        v260 = (Il2CppObject *)v8->fields._errorCode_5__11;
        if ( v8->fields._isCrcError_5__10 )
        {
          if ( (BYTE3(UnityEngine_Debug_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
          }
          UnityEngine_Debug__LogError(v260, 0LL);
        }
        else
        {
          MovieFileMerge__AssetLoadLogError(_4__this, v8->fields._errorCode_5__11, 0LL);
          _4__this->fields.isErrorDialog = 1;
          if ( (BYTE3(ManagementManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !ManagementManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
          }
          if ( !byte_4185D97 )
          {
            sub_B2C35C(&ManagementManager_TypeInfo, v319);
            byte_4185D97 = 1;
          }
          v320 = ManagementManager_TypeInfo;
          if ( (BYTE3(ManagementManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !ManagementManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
            v320 = ManagementManager_TypeInfo;
          }
          isDuringStartup = v320->static_fields->isDuringStartup;
          v322 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          errorLocalizeCode_5__12 = v8->fields._errorLocalizeCode_5__12;
          v324 = (CommonUI_o *)v322;
          v325 = (System_String_o *)StringLiteral_1/*""*/;
          if ( isDuringStartup )
          {
            if ( errorLocalizeCode_5__12 )
              v326 = v8->fields._errorLocalizeCode_5__12;
            else
              v326 = (System_String_o *)StringLiteral_1741/*"ASSET_LOADER_ERROR_BOOT_RETRY_MESSAGE"*/;
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v327 = LocalizationManager__Get(v326, 0LL);
            v328 = (ErrorDialog_ClickDelegate_o *)sub_B2C42C(ErrorDialog_ClickDelegate_TypeInfo);
            ErrorDialog_ClickDelegate___ctor(
              v328,
              (Il2CppObject *)_4__this,
              Method_MovieFileMerge_EndRetryDialog__,
              0LL);
            if ( !v324 )
              goto LABEL_223;
            CommonUI__OpenRetryBootDialog(v324, v325, v327, v328, 1, 0LL);
          }
          else
          {
            if ( errorLocalizeCode_5__12 )
              v331 = v8->fields._errorLocalizeCode_5__12;
            else
              v331 = (System_String_o *)StringLiteral_1742/*"ASSET_LOADER_ERROR_TIME_OVER_MESSAGE"*/;
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v332 = LocalizationManager__Get(v331, 0LL);
            v333 = (ErrorDialog_ClickDelegate_o *)sub_B2C42C(ErrorDialog_ClickDelegate_TypeInfo);
            ErrorDialog_ClickDelegate___ctor(
              v333,
              (Il2CppObject *)_4__this,
              Method_MovieFileMerge_EndRetryDialog__,
              0LL);
            if ( !v324 )
              goto LABEL_223;
            CommonUI__OpenRetryDialog(v324, v325, v332, v333, 1, 0LL);
          }
LABEL_35:
          if ( _4__this->fields.isErrorDialog )
          {
            v88 = (UnityEngine_WaitForEndOfFrame_o *)sub_B2C42C(UnityEngine_WaitForEndOfFrame_TypeInfo);
            UnityEngine_WaitForEndOfFrame___ctor(v88, 0LL);
            v8->fields.__2__current = (Il2CppObject *)v88;
            p__2__current = &v8->fields.__2__current;
            sub_B2C2F8(
              (BattleServantConfConponent_o *)p__2__current,
              (System_Int32_array **)v88,
              v89,
              v90,
              v91,
              v92,
              v93,
              v94);
            v87 = 7;
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
      if ( !byte_4185CE0 )
      {
        sub_B2C35C(&NetworkManager_TypeInfo, method);
        byte_4185CE0 = 1;
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
        v261 = (BattleServantConfConponent_o *)&_4__this->fields.loader;
        this = loader;
        if ( !loader )
          goto LABEL_223;
        UnityEngine_Networking_UnityWebRequest__Dispose((UnityEngine_Networking_UnityWebRequest_o *)this, 0LL);
        v261->klass = 0LL;
        sub_B2C2F8(v261, 0LL, v263, v264, v265, v266, v267, v268);
        v8->fields._readData_5__5 = 0LL;
        v275 = (BattleServantConfConponent_o *)&v8->fields._readData_5__5;
      }
      else
      {
        if ( !_4__this )
          goto LABEL_223;
        p_isDownload_5__4 = &v8->fields._isDownload_5__4;
        v276 = &_4__this->fields.loader;
        this = (MovieFileMerge__Download_d__41_o *)_4__this->fields.loader;
        if ( v8->fields._isDownload_5__4 )
        {
          if ( !this )
            goto LABEL_223;
          UnityEngine_Networking_UnityWebRequest__Dispose((UnityEngine_Networking_UnityWebRequest_o *)this, 0LL);
          *v276 = 0LL;
          sub_B2C2F8((BattleServantConfConponent_o *)&_4__this->fields.loader, 0LL, v277, v278, v279, v280, v281, v282);
          v8->fields._readData_5__5 = 0LL;
          p_readData_5__5 = (BattleServantConfConponent_o *)&v8->fields._readData_5__5;
          sub_B2C2F8(
            (BattleServantConfConponent_o *)&v8->fields._readData_5__5,
            0LL,
            v283,
            v284,
            v285,
            v286,
            v287,
            v288);
          if ( !v8->fields._isCrcError_5__10 )
          {
LABEL_177:
            v8->fields._wait_5__8 = 0LL;
            sub_B2C2F8((BattleServantConfConponent_o *)&v8->fields._wait_5__8, 0LL, v2, v3, v4, v5, v6, v7);
            v8->fields._errorCode_5__11 = 0LL;
            sub_B2C2F8(
              (BattleServantConfConponent_o *)&v8->fields._errorCode_5__11,
              0LL,
              v294,
              v295,
              v296,
              v297,
              v298,
              v299);
            v8->fields._errorLocalizeCode_5__12 = 0LL;
            sub_B2C2F8(
              (BattleServantConfConponent_o *)&v8->fields._errorLocalizeCode_5__12,
              0LL,
              v300,
              v301,
              v302,
              v303,
              v304,
              v305);
            do
            {
              p_readData_5__5->klass = 0LL;
              sub_B2C2F8(p_readData_5__5, 0LL, v306, v307, v308, v309, v310, v311);
LABEL_218:
              p_readData_5__5->klass = 0LL;
              sub_B2C2F8(p_readData_5__5, 0LL, v56, v57, v58, v59, v60, v61);
            }
            while ( !*p_isDownload_5__4 );
            v340 = (System_Int32_array **)UnityEngine_Networking_UnityWebRequest__Get(
                                            _4__this->fields.downloadingURL,
                                            0LL);
            _4__this->fields.loader = (struct UnityEngine_Networking_UnityWebRequest_o *)v340;
            sub_B2C2F8(
              (BattleServantConfConponent_o *)&_4__this->fields.loader,
              v340,
              v341,
              v342,
              v343,
              v344,
              v345,
              v346);
            this = (MovieFileMerge__Download_d__41_o *)_4__this->fields.loader;
            if ( this )
            {
              UnityEngine_Networking_UnityWebRequest__SendWebRequest(
                (UnityEngine_Networking_UnityWebRequest_o *)this,
                0LL);
              v8->fields.__2__current = 0LL;
              v347 = (BattleServantConfConponent_o *)&v8->fields.__2__current;
              sub_B2C2F8(v347, 0LL, v348, v349, v350, v351, v352, v353);
              LOBYTE(this) = 1;
              *(_DWORD *)&v347[-1].fields.isOpenAfter = 1;
              return (char)this;
            }
            goto LABEL_223;
          }
          if ( !v8->fields._errorCode_5__11 )
            goto LABEL_178;
          v289 = ManagerConfig_TypeInfo;
          if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !ManagerConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
            v289 = ManagerConfig_TypeInfo;
          }
          if ( !v289->static_fields->UseDebugCommand )
            goto LABEL_178;
          _4__this->fields.isErrorDialog = 1;
          v290 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v291 = v8->fields._errorCode_5__11;
          v292 = (CommonUI_o *)v290;
          v293 = (ErrorDialog_ClickDelegate_o *)sub_B2C42C(ErrorDialog_ClickDelegate_TypeInfo);
          ErrorDialog_ClickDelegate___ctor(
            v293,
            (Il2CppObject *)_4__this,
            Method_MovieFileMerge_EndWarningDialog__,
            0LL);
          if ( !v292 )
            goto LABEL_223;
          effectDistancea.fields.value = 0LL;
          *(_DWORD *)&effectDistancea.fields.has_value = 0;
          CommonUI__OpenWarningDialog(
            v292,
            (System_String_o *)StringLiteral_15745/*"[FFFF80]Download error for debug"*/,
            v291,
            v293,
            1,
            0,
            -1.0,
            1,
            effectDistancea,
            0LL);
LABEL_60:
          if ( _4__this->fields.isErrorDialog )
          {
            v137 = (UnityEngine_WaitForEndOfFrame_o *)sub_B2C42C(UnityEngine_WaitForEndOfFrame_TypeInfo);
            UnityEngine_WaitForEndOfFrame___ctor(v137, 0LL);
            v8->fields.__2__current = (Il2CppObject *)v137;
            p__2__current = &v8->fields.__2__current;
            sub_B2C2F8(
              (BattleServantConfConponent_o *)p__2__current,
              (System_Int32_array **)v137,
              v138,
              v139,
              v140,
              v141,
              v142,
              v143);
            v87 = 8;
          }
          else
          {
LABEL_178:
            v312 = (UnityEngine_WaitForSeconds_o *)sub_B2C42C(UnityEngine_WaitForSeconds_TypeInfo);
            UnityEngine_WaitForSeconds___ctor(v312, 1.0, 0LL);
            v8->fields.__2__current = (Il2CppObject *)v312;
            p__2__current = &v8->fields.__2__current;
            sub_B2C2F8(
              (BattleServantConfConponent_o *)p__2__current,
              (System_Int32_array **)v312,
              v313,
              v314,
              v315,
              v316,
              v317,
              v318);
            v87 = 9;
          }
LABEL_179:
          *((_DWORD *)p__2__current - 2) = v87;
LABEL_180:
          LOBYTE(this) = 1;
          return (char)this;
        }
        if ( !this )
          return (char)this;
        UnityEngine_Networking_UnityWebRequest__Dispose((UnityEngine_Networking_UnityWebRequest_o *)this, 0LL);
        v275 = (BattleServantConfConponent_o *)&_4__this->fields.loader;
        *v276 = 0LL;
      }
      sub_B2C2F8(v275, 0LL, v269, v270, v271, v272, v273, v274);
LABEL_165:
      LOBYTE(this) = 0;
      return (char)this;
    case 5:
      v8->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_223;
      goto LABEL_140;
    case 6:
      v8->fields.__1__state = -1;
      goto LABEL_152;
    case 7:
      v8->fields.__1__state = -1;
      if ( _4__this )
        goto LABEL_35;
      goto LABEL_223;
    case 8:
      v8->fields.__1__state = -1;
      if ( _4__this )
        goto LABEL_60;
      goto LABEL_223;
    case 9:
      v8->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_223;
      _4__this->fields.isErrorDialog = 1;
      if ( (BYTE3(ManagementManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ManagementManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
      }
      if ( !byte_4185D97 )
      {
        sub_B2C35C(&ManagementManager_TypeInfo, method);
        byte_4185D97 = 1;
      }
      v73 = ManagementManager_TypeInfo;
      if ( (BYTE3(ManagementManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ManagementManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
        v73 = ManagementManager_TypeInfo;
      }
      v74 = v73->static_fields->isDuringStartup;
      v75 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( v74 )
      {
        if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v76 = LocalizationManager__Get((System_String_o *)StringLiteral_1741/*"ASSET_LOADER_ERROR_BOOT_RETRY_MESSAGE"*/, 0LL);
        v77 = (ErrorDialog_ClickDelegate_o *)sub_B2C42C(ErrorDialog_ClickDelegate_TypeInfo);
        ErrorDialog_ClickDelegate___ctor(v77, (Il2CppObject *)_4__this, Method_MovieFileMerge_EndRetryDialog__, 0LL);
        if ( !v75 )
          goto LABEL_223;
        CommonUI__OpenRetryBootDialog(v75, (System_String_o *)StringLiteral_1/*""*/, v76, v77, 1, 0LL);
      }
      else
      {
        if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v158 = LocalizationManager__Get((System_String_o *)StringLiteral_1742/*"ASSET_LOADER_ERROR_TIME_OVER_MESSAGE"*/, 0LL);
        v159 = (ErrorDialog_ClickDelegate_o *)sub_B2C42C(ErrorDialog_ClickDelegate_TypeInfo);
        ErrorDialog_ClickDelegate___ctor(v159, (Il2CppObject *)_4__this, Method_MovieFileMerge_EndRetryDialog__, 0LL);
        if ( !v75 )
          goto LABEL_223;
        CommonUI__OpenRetryDialog(v75, (System_String_o *)StringLiteral_1/*""*/, v158, v159, 1, 0LL);
      }
LABEL_83:
      if ( _4__this->fields.isErrorDialog )
      {
        v160 = (UnityEngine_WaitForEndOfFrame_o *)sub_B2C42C(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v160, 0LL);
        v8->fields.__2__current = (Il2CppObject *)v160;
        p__2__current = &v8->fields.__2__current;
        sub_B2C2F8(
          (BattleServantConfConponent_o *)p__2__current,
          (System_Int32_array **)v160,
          v161,
          v162,
          v163,
          v164,
          v165,
          v166);
        v87 = 10;
        goto LABEL_179;
      }
      p_readData_5__5 = (BattleServantConfConponent_o *)&v8->fields._readData_5__5;
      p_isDownload_5__4 = &v8->fields._isDownload_5__4;
      goto LABEL_177;
    case 0xA:
      v8->fields.__1__state = -1;
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

  v2 = sub_B2C360(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B2C42C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B2C360(&Method_MovieFileMerge__Download_d__41_System_Collections_IEnumerator_Reset__);
  sub_B2C400(v3, v4);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  int32_t _1__state; // w8
  struct MovieFileMerge_o *_4__this; // x20
  System_Collections_Generic_List_string__o *SplitFileList; // x0
  System_String_o *outputMergeFile; // x21
  System_Collections_Generic_List_string__o *v13; // x22
  FileMergeAndSplit_Merge_o *v14; // x23
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  FileMergeAndSplit_Merge_o *mergeClass; // x21
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v22; // x22
  System_Int32_array **v23; // x0
  BattleServantConfConponent_o *p__2__current; // x19
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  bool result; // w0
  struct FileMergeAndSplit_Merge_o *v32; // x8
  System_String_o *v33; // x21
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x0
  System_Collections_Generic_List_uint__o *v35; // x22
  FileMergeAndSplit_CRCChecker_o *v36; // x23
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  System_Int32_array **v43; // x0
  BattleServantConfConponent_o *v44; // x19
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7

  v2 = this;
  if ( (byte_4185D47 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_Exception___ctor__, method);
    sub_B2C35C(&System_Action_Exception__TypeInfo, v3);
    sub_B2C35C(&FileMergeAndSplit_CRCChecker_TypeInfo, v4);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__uint__get_Values__, v5);
    sub_B2C35C(&Method_System_Linq_Enumerable_ToList_uint___, v6);
    sub_B2C35C(&FileMergeAndSplit_Merge_TypeInfo, v7);
    this = (MovieFileMerge__Merge_d__35_o *)sub_B2C35C(&Method_MovieFileMerge__Merge_b__35_0__, v8);
    byte_4185D47 = 1;
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
        System_IO_Directory__Delete_44244828(_4__this->fields.outputSplitFileFolder, 1, 0LL);
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
        v13 = SplitFileList;
        v14 = (FileMergeAndSplit_Merge_o *)sub_B2C42C(FileMergeAndSplit_Merge_TypeInfo);
        FileMergeAndSplit_Merge___ctor(v14, v13, outputMergeFile, 0LL);
        _4__this->fields.mergeClass = v14;
        sub_B2C2F8(
          (BattleServantConfConponent_o *)&_4__this->fields.mergeClass,
          (System_Int32_array **)v14,
          v15,
          v16,
          v17,
          v18,
          v19,
          v20);
        mergeClass = _4__this->fields.mergeClass;
        v22 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B2C42C(System_Action_Exception__TypeInfo);
        System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
          v22,
          (Il2CppObject *)_4__this,
          Method_MovieFileMerge__Merge_b__35_0__,
          (const MethodInfo_24BBAD8 *)Method_System_Action_Exception___ctor__);
        if ( mergeClass )
        {
          v23 = (System_Int32_array **)FileMergeAndSplit_Merge__Run(mergeClass, (System_Action_Exception__o *)v22, 0LL);
          v2->fields.__2__current = (Il2CppObject *)v23;
          p__2__current = (BattleServantConfConponent_o *)&v2->fields.__2__current;
          sub_B2C2F8(p__2__current, v23, v25, v26, v27, v28, v29, v30);
          result = 1;
          *(_DWORD *)&p__2__current[-1].fields.isOpenAfter = 1;
          return result;
        }
      }
LABEL_22:
      sub_B2C434(this, method);
    }
    return 0;
  }
  v2->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_22;
  v32 = _4__this->fields.mergeClass;
  if ( !v32 )
    goto LABEL_22;
  if ( v32->fields.isError )
    return 0;
  this = (MovieFileMerge__Merge_d__35_o *)_4__this->fields.AllDownLoadFilePathCRCDictionary;
  if ( !this )
    goto LABEL_22;
  v33 = _4__this->fields.outputMergeFile;
  Values = System_Collections_Generic_Dictionary_string__uint___get_Values(
             (System_Collections_Generic_Dictionary_string__uint__o *)this,
             (const MethodInfo_2E2F784 *)Method_System_Collections_Generic_Dictionary_string__uint__get_Values__);
  v35 = (System_Collections_Generic_List_uint__o *)System_Linq_Enumerable__ToList_uint_(
                                                     (System_Collections_Generic_IEnumerable_TSource__o *)Values,
                                                     (const MethodInfo_1A9DFCC *)Method_System_Linq_Enumerable_ToList_uint___);
  v36 = (FileMergeAndSplit_CRCChecker_o *)sub_B2C42C(FileMergeAndSplit_CRCChecker_TypeInfo);
  FileMergeAndSplit_CRCChecker___ctor(v36, v33, v35, 0LL);
  _4__this->fields.crcCheckerClass = v36;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&_4__this->fields.crcCheckerClass,
    (System_Int32_array **)v36,
    v37,
    v38,
    v39,
    v40,
    v41,
    v42);
  this = (MovieFileMerge__Merge_d__35_o *)_4__this->fields.crcCheckerClass;
  if ( !this )
    goto LABEL_22;
  v43 = (System_Int32_array **)FileMergeAndSplit_CRCChecker__Run((FileMergeAndSplit_CRCChecker_o *)this, 0LL);
  v2->fields.__2__current = (Il2CppObject *)v43;
  v44 = (BattleServantConfConponent_o *)&v2->fields.__2__current;
  sub_B2C2F8(v44, v43, v45, v46, v47, v48, v49, v50);
  *(_DWORD *)&v44[-1].fields.isOpenAfter = 2;
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

  v2 = sub_B2C360(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B2C42C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B2C360(&Method_MovieFileMerge__Merge_d__35_System_Collections_IEnumerator_Reset__);
  sub_B2C400(v3, v4);
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
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  int32_t _1__state; // w8
  Il2CppObject *v18; // x21
  Il2CppObject **p__8__1; // x20
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  UnityEngine_UI_Dropdown_DropdownItem_o *UIAtlas; // x21
  Il2CppObject *v27; // x21
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  CRIMoviePlayer_o *klass; // x21
  System_String_o *filePath; // x22
  BgmManager_c *v36; // x0
  Il2CppObject *v37; // x24
  float masterVolume; // s8
  System_Action_o *v39; // x23
  BattleServantConfConponent_o *p__2__current; // x19
  bool result; // w0

  v8 = this;
  if ( (byte_4185D48 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&BgmManager_TypeInfo, v9);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_CRIMoviePlayer___, v10);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject___, v11);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v12);
    sub_B2C35C(&Method_UnityEngine_Resources_Load_GameObject___, v13);
    sub_B2C35C(&Method_MovieFileMerge___c__DisplayClass31_0__PlayCRIMovie_b__0__, v14);
    sub_B2C35C(&MovieFileMerge___c__DisplayClass31_0_TypeInfo, v15);
    this = (MovieFileMerge__PlayCRIMovie_d__31_o *)sub_B2C35C(&StringLiteral_3436/*"CRIMovie/CRIMoviePlayerWithPanel"*/, v16);
    byte_4185D48 = 1;
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
    v18 = (Il2CppObject *)sub_B2C42C(MovieFileMerge___c__DisplayClass31_0_TypeInfo);
    System_Object___ctor(v18, 0LL);
    p__8__1 = (Il2CppObject **)&v8->fields.__8__1;
    v8->fields.__8__1 = (struct MovieFileMerge___c__DisplayClass31_0_o *)v18;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v8->fields.__8__1,
      (System_Int32_array **)v18,
      v20,
      v21,
      v22,
      v23,
      v24,
      v25);
    UIAtlas = (UnityEngine_UI_Dropdown_DropdownItem_o *)UnityEngine_Resources__Load_UIAtlas_(
                                                          (System_String_o *)StringLiteral_3436/*"CRIMovie/CRIMoviePlayerWithPanel"*/,
                                                          (const MethodInfo_20990C8 *)Method_UnityEngine_Resources_Load_GameObject___);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    this = (MovieFileMerge__PlayCRIMovie_d__31_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                                     UIAtlas,
                                                     (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !this )
      goto LABEL_29;
    v27 = *p__8__1;
    this = (MovieFileMerge__PlayCRIMovie_d__31_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                     (UnityEngine_GameObject_o *)this,
                                                     (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_CRIMoviePlayer___);
    if ( !v27 )
      goto LABEL_29;
    v27[1].klass = (Il2CppClass *)this;
    sub_B2C2F8((BattleServantConfConponent_o *)&v27[1], (System_Int32_array **)this, v28, v29, v30, v31, v32, v33);
    if ( !*p__8__1 )
      goto LABEL_29;
    LOBYTE((*p__8__1)[1].monitor) = 1;
    if ( !*p__8__1 )
      goto LABEL_29;
    klass = (CRIMoviePlayer_o *)(*p__8__1)[1].klass;
    filePath = v8->fields.filePath;
    if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BgmManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
    if ( !byte_4183DF8 )
    {
      sub_B2C35C(&BgmManager_TypeInfo, method);
      byte_4183DF8 = 1;
    }
    v36 = BgmManager_TypeInfo;
    if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BgmManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
      v36 = BgmManager_TypeInfo;
    }
    v37 = *p__8__1;
    masterVolume = v36->static_fields->masterVolume;
    v39 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(v39, v37, Method_MovieFileMerge___c__DisplayClass31_0__PlayCRIMovie_b__0__, 0LL);
    if ( !klass
      || (CRIMoviePlayer__Initialize(klass, filePath, filePath, masterVolume, 1, 0LL, v39, 1, 0LL, 0, 0, 1, 0LL),
          !*p__8__1)
      || (this = (MovieFileMerge__PlayCRIMovie_d__31_o *)(*p__8__1)[1].klass) == 0LL )
    {
LABEL_29:
      sub_B2C434(this, method);
    }
    CRIMoviePlayer__MoviePlay((CRIMoviePlayer_o *)this, 1, 1, 1, 0LL);
  }
  if ( !*p__8__1 )
    goto LABEL_29;
  if ( LOBYTE((*p__8__1)[1].monitor) )
  {
    v8->fields.__2__current = 0LL;
    p__2__current = (BattleServantConfConponent_o *)&v8->fields.__2__current;
    sub_B2C2F8(p__2__current, 0LL, v2, v3, v4, v5, v6, v7);
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

  v2 = sub_B2C360(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B2C42C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B2C360(&Method_MovieFileMerge__PlayCRIMovie_d__31_System_Collections_IEnumerator_Reset__);
  sub_B2C400(v3, v4);
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
      sub_B2C434(0LL, method);
    v6 = (Il2CppObject *)MovieFileMerge__PlayMP4_24473688(_4__this, _4__this->fields.outputMergeFile, 0, 0LL);
    this->fields.__2__current = v6;
    sub_B2C2F8(
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

  v2 = sub_B2C360(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B2C42C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B2C360(&Method_MovieFileMerge__PlayMP4_d__29_System_Collections_IEnumerator_Reset__);
  sub_B2C400(v3, v4);
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

  if ( (byte_4185D49 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_WaitForEndOfFrame_TypeInfo, method);
    byte_4185D49 = 1;
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
        sub_B2C434(IsNullOrEmpty, v6);
      v23 = (Il2CppObject *)MovieFileMerge__PlayCRIMovie(_4__this, this->fields.filePath, 0LL);
      this->fields.__2__current = v23;
      sub_B2C2F8(
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
      v16 = (UnityEngine_WaitForEndOfFrame_o *)sub_B2C42C(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v16, 0LL);
      this->fields.__2__current = (Il2CppObject *)v16;
      sub_B2C2F8(
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
      v8 = (UnityEngine_WaitForEndOfFrame_o *)sub_B2C42C(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v8, 0LL);
      this->fields.__2__current = (Il2CppObject *)v8;
      sub_B2C2F8(
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

  v2 = sub_B2C360(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B2C42C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B2C360(&Method_MovieFileMerge__PlayMP4_d__30_System_Collections_IEnumerator_Reset__);
  sub_B2C400(v3, v4);
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
    sub_B2C434(0LL, method);
  CRIMoviePlayer__Dispose(player, 0LL);
  this->fields.wait = 0;
}