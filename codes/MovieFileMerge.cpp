void __fastcall MovieFileMerge___ctor(MovieFileMerge_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  System_Collections_Generic_Dictionary_string__uint__o *v7; // x20
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  System_Collections_Generic_Dictionary_string__uint__o *v18; // x20
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7

  if ( (byte_40F7D9D & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__uint___ctor__, method);
    sub_B16FFC(&System_Collections_Generic_Dictionary_string__uint__TypeInfo, v6);
    byte_40F7D9D = 1;
  }
  v7 = (System_Collections_Generic_Dictionary_string__uint__o *)sub_B170CC(
                                                                  System_Collections_Generic_Dictionary_string__uint__TypeInfo,
                                                                  method,
                                                                  v2,
                                                                  v3,
                                                                  v4);
  System_Collections_Generic_Dictionary_string__uint____ctor(
    v7,
    (const MethodInfo_2DB2854 *)Method_System_Collections_Generic_Dictionary_string__uint___ctor__);
  this->fields.AllDownLoadFilePathCRCDictionary = v7;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.AllDownLoadFilePathCRCDictionary,
    (System_Int32_array **)v7,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  v18 = (System_Collections_Generic_Dictionary_string__uint__o *)sub_B170CC(
                                                                   System_Collections_Generic_Dictionary_string__uint__TypeInfo,
                                                                   v14,
                                                                   v15,
                                                                   v16,
                                                                   v17);
  System_Collections_Generic_Dictionary_string__uint____ctor(
    v18,
    (const MethodInfo_2DB2854 *)Method_System_Collections_Generic_Dictionary_string__uint___ctor__);
  this->fields.RequireDownLoadFilePathCRCDictionary = v18;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.RequireDownLoadFilePathCRCDictionary,
    (System_Int32_array **)v18,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
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
  __int64 v18; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  __int64 v25; // x21
  __int64 v26; // x0
  System_Int32_array **v27; // x1
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  __int64 v63; // x8
  unsigned __int64 v64; // x22
  signed __int64 v65; // x23
  Il2CppObject *v66; // x0
  CrashReporter_o *Instance; // x0

  if ( (byte_40F7D9B & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Debug_TypeInfo, errorCode);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__, v5);
    sub_B16FFC(&string___TypeInfo, v6);
    sub_B16FFC(&StringLiteral_14049/*"The request timed out."*/, v7);
    sub_B16FFC(&StringLiteral_13981/*"The network connection was lost."*/, v8);
    sub_B16FFC(&StringLiteral_4226/*"Connection reset by peer"*/, v9);
    sub_B16FFC(&StringLiteral_4590/*"DLErrorType"*/, v10);
    sub_B16FFC(&StringLiteral_4589/*"DLErrorAsset"*/, v11);
    sub_B16FFC(&StringLiteral_4225/*"Connection refused"*/, v12);
    sub_B16FFC(&StringLiteral_9452/*"No address associated with hostname"*/, v13);
    sub_B16FFC(&StringLiteral_2090/*"AssetBundle file download time over"*/, v14);
    sub_B16FFC(&StringLiteral_12858/*"Software caused connection abort"*/, v15);
    sub_B16FFC(&StringLiteral_4227/*"Connection timed out"*/, v16);
    sub_B16FFC(&StringLiteral_2093/*"AssetLoadError"*/, v17);
    byte_40F7D9B = 1;
  }
  v18 = sub_B17014(string___TypeInfo, 8LL, method);
  if ( !v18 )
    goto LABEL_63;
  v25 = v18;
  v26 = StringLiteral_9452/*"No address associated with hostname"*/;
  if ( StringLiteral_9452/*"No address associated with hostname"*/ )
  {
    v26 = sub_B170BC(StringLiteral_9452/*"No address associated with hostname"*/, *(_QWORD *)(*(_QWORD *)v25 + 64LL));
    if ( !v26 )
      goto LABEL_64;
    v27 = (System_Int32_array **)StringLiteral_9452/*"No address associated with hostname"*/;
  }
  else
  {
    v27 = 0LL;
  }
  if ( !*(_DWORD *)(v25 + 24) )
    goto LABEL_50;
  *(_QWORD *)(v25 + 32) = v27;
  sub_B16F98((BattleServantConfConponent_o *)(v25 + 32), v27, v19, v20, v21, v22, v23, v24);
  v26 = StringLiteral_2090/*"AssetBundle file download time over"*/;
  if ( StringLiteral_2090/*"AssetBundle file download time over"*/ )
  {
    v26 = sub_B170BC(StringLiteral_2090/*"AssetBundle file download time over"*/, *(_QWORD *)(*(_QWORD *)v25 + 64LL));
    if ( !v26 )
      goto LABEL_64;
    v27 = (System_Int32_array **)StringLiteral_2090/*"AssetBundle file download time over"*/;
  }
  else
  {
    v27 = 0LL;
  }
  if ( *(_DWORD *)(v25 + 24) <= 1u )
    goto LABEL_50;
  *(_QWORD *)(v25 + 40) = v27;
  sub_B16F98((BattleServantConfConponent_o *)(v25 + 40), v27, v19, v28, v29, v30, v31, v32);
  v26 = StringLiteral_13981/*"The network connection was lost."*/;
  if ( StringLiteral_13981/*"The network connection was lost."*/ )
  {
    v26 = sub_B170BC(StringLiteral_13981/*"The network connection was lost."*/, *(_QWORD *)(*(_QWORD *)v25 + 64LL));
    if ( !v26 )
      goto LABEL_64;
    v27 = (System_Int32_array **)StringLiteral_13981/*"The network connection was lost."*/;
  }
  else
  {
    v27 = 0LL;
  }
  if ( *(_DWORD *)(v25 + 24) <= 2u )
    goto LABEL_50;
  *(_QWORD *)(v25 + 48) = v27;
  sub_B16F98((BattleServantConfConponent_o *)(v25 + 48), v27, v19, v33, v34, v35, v36, v37);
  v26 = StringLiteral_4226/*"Connection reset by peer"*/;
  if ( StringLiteral_4226/*"Connection reset by peer"*/ )
  {
    v26 = sub_B170BC(StringLiteral_4226/*"Connection reset by peer"*/, *(_QWORD *)(*(_QWORD *)v25 + 64LL));
    if ( !v26 )
      goto LABEL_64;
    v27 = (System_Int32_array **)StringLiteral_4226/*"Connection reset by peer"*/;
  }
  else
  {
    v27 = 0LL;
  }
  if ( *(_DWORD *)(v25 + 24) <= 3u )
    goto LABEL_50;
  *(_QWORD *)(v25 + 56) = v27;
  sub_B16F98((BattleServantConfConponent_o *)(v25 + 56), v27, v19, v38, v39, v40, v41, v42);
  v26 = StringLiteral_12858/*"Software caused connection abort"*/;
  if ( StringLiteral_12858/*"Software caused connection abort"*/ )
  {
    v26 = sub_B170BC(StringLiteral_12858/*"Software caused connection abort"*/, *(_QWORD *)(*(_QWORD *)v25 + 64LL));
    if ( !v26 )
      goto LABEL_64;
    v27 = (System_Int32_array **)StringLiteral_12858/*"Software caused connection abort"*/;
  }
  else
  {
    v27 = 0LL;
  }
  if ( *(_DWORD *)(v25 + 24) <= 4u )
    goto LABEL_50;
  *(_QWORD *)(v25 + 64) = v27;
  sub_B16F98((BattleServantConfConponent_o *)(v25 + 64), v27, v19, v43, v44, v45, v46, v47);
  v26 = StringLiteral_4227/*"Connection timed out"*/;
  if ( StringLiteral_4227/*"Connection timed out"*/ )
  {
    v26 = sub_B170BC(StringLiteral_4227/*"Connection timed out"*/, *(_QWORD *)(*(_QWORD *)v25 + 64LL));
    if ( !v26 )
      goto LABEL_64;
    v27 = (System_Int32_array **)StringLiteral_4227/*"Connection timed out"*/;
  }
  else
  {
    v27 = 0LL;
  }
  if ( *(_DWORD *)(v25 + 24) <= 5u )
    goto LABEL_50;
  *(_QWORD *)(v25 + 72) = v27;
  sub_B16F98((BattleServantConfConponent_o *)(v25 + 72), v27, v19, v48, v49, v50, v51, v52);
  v26 = StringLiteral_4225/*"Connection refused"*/;
  if ( StringLiteral_4225/*"Connection refused"*/ )
  {
    v26 = sub_B170BC(StringLiteral_4225/*"Connection refused"*/, *(_QWORD *)(*(_QWORD *)v25 + 64LL));
    if ( !v26 )
      goto LABEL_64;
    v27 = (System_Int32_array **)StringLiteral_4225/*"Connection refused"*/;
  }
  else
  {
    v27 = 0LL;
  }
  if ( *(_DWORD *)(v25 + 24) <= 6u )
    goto LABEL_50;
  *(_QWORD *)(v25 + 80) = v27;
  sub_B16F98((BattleServantConfConponent_o *)(v25 + 80), v27, v19, v53, v54, v55, v56, v57);
  v26 = StringLiteral_14049/*"The request timed out."*/;
  if ( StringLiteral_14049/*"The request timed out."*/ )
  {
    v26 = sub_B170BC(StringLiteral_14049/*"The request timed out."*/, *(_QWORD *)(*(_QWORD *)v25 + 64LL));
    if ( v26 )
    {
      v27 = (System_Int32_array **)StringLiteral_14049/*"The request timed out."*/;
      goto LABEL_43;
    }
LABEL_64:
    sub_B170F4(v26);
    sub_B170A0();
  }
  v27 = 0LL;
LABEL_43:
  if ( *(_DWORD *)(v25 + 24) <= 7u )
    goto LABEL_50;
  *(_QWORD *)(v25 + 88) = v27;
  sub_B16F98((BattleServantConfConponent_o *)(v25 + 88), v27, v19, v58, v59, v60, v61, v62);
  v63 = *(_QWORD *)(v25 + 24);
  if ( (int)v63 < 1 )
  {
LABEL_51:
    if ( (BYTE3(UnityEngine_Debug_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
    }
    v66 = (Il2CppObject *)errorCode;
    goto LABEL_62;
  }
  v64 = 0LL;
  v65 = (int)v63;
  while ( 1 )
  {
    if ( !errorCode )
      goto LABEL_63;
    v26 = System_String__Contains(errorCode, *(System_String_o **)(v25 + 32 + 8 * v64), 0LL);
    if ( (v26 & 1) != 0 )
      break;
    if ( (__int64)++v64 >= v65 )
      goto LABEL_51;
    if ( v64 >= *(unsigned int *)(v25 + 24) )
      goto LABEL_50;
  }
  Instance = (CrashReporter_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
  if ( !Instance )
LABEL_63:
    sub_B170D4();
  CrashReporter__AddCustomKey(Instance, (System_String_o *)StringLiteral_4589/*"DLErrorAsset"*/, this->fields.downloadingURL, 0LL);
  v26 = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
  if ( (unsigned int)v64 >= *(_DWORD *)(v25 + 24) )
  {
LABEL_50:
    sub_B17100(v26, v27, v19);
    sub_B170A0();
  }
  if ( !v26 )
    goto LABEL_63;
  CrashReporter__AddCustomKey(
    (CrashReporter_o *)v26,
    (System_String_o *)StringLiteral_4590/*"DLErrorType"*/,
    *(System_String_o **)(v25 + 32 + 8 * v64),
    0LL);
  if ( (BYTE3(UnityEngine_Debug_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
  }
  v66 = (Il2CppObject *)StringLiteral_2093/*"AssetLoadError"*/;
LABEL_62:
  UnityEngine_Debug__LogError(v66, 0LL);
}


System_Collections_IEnumerator_o *__fastcall MovieFileMerge__CRCDownloadAndCheck(
        MovieFileMerge_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F7D92 & 1) == 0 )
  {
    sub_B16FFC(&MovieFileMerge__CRCDownloadAndCheck_d__33_TypeInfo, method);
    byte_40F7D92 = 1;
  }
  v6 = sub_B170CC(MovieFileMerge__CRCDownloadAndCheck_d__33_TypeInfo, method, v2, v3, v4);
  MovieFileMerge__CRCDownloadAndCheck_d__33___ctor((MovieFileMerge__CRCDownloadAndCheck_d__33_o *)v6, 0, 0LL);
  if ( !v6 )
    sub_B170D4();
  *(_QWORD *)(v6 + 32) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v6 + 32), (System_Int32_array **)this, v7, v8, v9, v10, v11, v12);
  return (System_Collections_IEnumerator_o *)v6;
}


System_Collections_Generic_Dictionary_string__uint__o *__fastcall MovieFileMerge__CreateDic(
        MovieFileMerge_o *this,
        System_String_o *dataPath,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_Dictionary_string__uint__o *v9; // x19
  System_String_array *AllLines; // x0
  System_String_array *v11; // x1
  __int64 v12; // x2
  int max_length; // w8
  System_String_array *v14; // x20
  unsigned int v15; // w22
  System_String_o *v16; // x21
  System_String_array *v17; // x21
  uint32_t result; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_40F7D99 & 1) == 0 )
  {
    sub_B16FFC(&char___TypeInfo, dataPath);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__uint__Add__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__uint___ctor__, v7);
    sub_B16FFC(&System_Collections_Generic_Dictionary_string__uint__TypeInfo, v8);
    byte_40F7D99 = 1;
  }
  result = 0;
  v9 = (System_Collections_Generic_Dictionary_string__uint__o *)sub_B170CC(
                                                                  System_Collections_Generic_Dictionary_string__uint__TypeInfo,
                                                                  dataPath,
                                                                  method,
                                                                  v3,
                                                                  v4);
  System_Collections_Generic_Dictionary_string__uint____ctor(
    v9,
    (const MethodInfo_2DB2854 *)Method_System_Collections_Generic_Dictionary_string__uint___ctor__);
  AllLines = System_IO_File__ReadAllLines(dataPath, 0LL);
  if ( !AllLines )
LABEL_20:
    sub_B170D4();
  max_length = AllLines->max_length;
  v14 = AllLines;
  if ( max_length >= 1 )
  {
    v15 = 0;
    while ( 1 )
    {
      if ( v15 >= max_length )
        goto LABEL_19;
      v16 = v14->m_Items[v15];
      AllLines = (System_String_array *)sub_B17014(char___TypeInfo, 1LL, v12);
      if ( !AllLines )
        goto LABEL_20;
      v11 = AllLines;
      if ( !AllLines->max_length )
      {
LABEL_19:
        sub_B17100(AllLines, v11, v12);
        sub_B170A0();
      }
      LOWORD(AllLines->m_Items[0]) = 44;
      if ( !v16 )
        goto LABEL_20;
      AllLines = System_String__Split(v16, (System_Char_array *)AllLines, 0LL);
      result = 0;
      if ( !AllLines )
        goto LABEL_20;
      v17 = AllLines;
      if ( AllLines->max_length <= 1 )
        goto LABEL_19;
      AllLines = (System_String_array *)System_UInt32__TryParse(AllLines->m_Items[1], &result, 0LL);
      if ( ((unsigned __int8)AllLines & 1) == 0 )
        return 0LL;
      if ( !v17->max_length )
        goto LABEL_19;
      if ( !v9 )
        goto LABEL_20;
      System_Collections_Generic_Dictionary_string__uint___Add(
        v9,
        v17->m_Items[0],
        result,
        (const MethodInfo_2DB3408 *)Method_System_Collections_Generic_Dictionary_string__uint__Add__);
      max_length = v14->max_length;
      if ( (int)++v15 >= max_length )
        return v9;
    }
  }
  return v9;
}


void __fastcall MovieFileMerge__Delete(System_String_o *folder, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x2
  System_Char_array *v7; // x0
  __int64 v8; // x2
  System_String_o *FileName; // x19
  Il2CppObject *LocalDataPath; // x0
  System_String_o *v11; // x19

  if ( (byte_40F7D95 & 1) == 0 )
  {
    sub_B16FFC(&char___TypeInfo, method);
    sub_B16FFC(&System_IO_Path_TypeInfo, v3);
    sub_B16FFC(&StringLiteral_23516/*"{0}/{1}"*/, v4);
    sub_B16FFC(&StringLiteral_871/*"/"*/, v5);
    byte_40F7D95 = 1;
  }
  if ( !folder )
    goto LABEL_14;
  if ( !System_String__EndsWith(folder, (System_String_o *)StringLiteral_871/*"/"*/, 0LL) )
    goto LABEL_8;
  v7 = (System_Char_array *)sub_B17014(char___TypeInfo, 1LL, v6);
  if ( !v7 )
LABEL_14:
    sub_B170D4();
  if ( !v7->max_length )
  {
    sub_B17100(v7, v7, v8);
    sub_B170A0();
  }
  v7->m_Items[2] = 47;
  folder = System_String__TrimEnd(folder, v7, 0LL);
LABEL_8:
  if ( (BYTE3(System_IO_Path_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_IO_Path_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_IO_Path_TypeInfo);
  }
  FileName = System_IO_Path__GetFileName(folder, 0LL);
  LocalDataPath = (Il2CppObject *)MovieFileMerge__GetLocalDataPath((const MethodInfo *)FileName);
  v11 = System_String__Format_43739268(
          (System_String_o *)StringLiteral_23516/*"{0}/{1}"*/,
          LocalDataPath,
          (Il2CppObject *)FileName,
          0LL);
  if ( System_IO_Directory__Exists(v11, 0LL) )
    System_IO_Directory__Delete_43683028(v11, 1, 0LL);
}


void __fastcall MovieFileMerge__Delete_21065788(const MethodInfo *method)
{
  System_String_o *LocalDataPath; // x0
  _BOOL8 v2; // x0
  System_String_o *v3; // x0

  LocalDataPath = MovieFileMerge__GetLocalDataPath(method);
  v2 = System_IO_Directory__Exists(LocalDataPath, 0LL);
  if ( v2 )
  {
    v3 = MovieFileMerge__GetLocalDataPath((const MethodInfo *)v2);
    System_IO_Directory__Delete_43683028(v3, 1, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
System_Collections_IEnumerator_o *__fastcall MovieFileMerge__Download(
        MovieFileMerge_o *this,
        System_String_o *fileName,
        uint32_t crc,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v8; // x22
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

  if ( (byte_40F7D98 & 1) == 0 )
  {
    sub_B16FFC(&MovieFileMerge__Download_d__41_TypeInfo, fileName);
    byte_40F7D98 = 1;
  }
  v8 = sub_B170CC(MovieFileMerge__Download_d__41_TypeInfo, fileName, *(_QWORD *)&crc, method, v4);
  MovieFileMerge__Download_d__41___ctor((MovieFileMerge__Download_d__41_o *)v8, 0, 0LL);
  if ( !v8 )
    sub_B170D4();
  *(_QWORD *)(v8 + 32) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v8 + 32), (System_Int32_array **)this, v9, v10, v11, v12, v13, v14);
  *(_QWORD *)(v8 + 40) = fileName;
  sub_B16F98((BattleServantConfConponent_o *)(v8 + 40), (System_Int32_array **)fileName, v15, v16, v17, v18, v19, v20);
  *(_DWORD *)(v8 + 48) = crc;
  return (System_Collections_IEnumerator_o *)v8;
}


void __fastcall MovieFileMerge__DownloadCancel(MovieFileMerge_o *this, const MethodInfo *method)
{
  this->fields.isDownloadCancel = 1;
}


System_Collections_IEnumerator_o *__fastcall MovieFileMerge__DownloadMovie(
        MovieFileMerge_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F7D93 & 1) == 0 )
  {
    sub_B16FFC(&MovieFileMerge__DownloadMovie_d__34_TypeInfo, method);
    byte_40F7D93 = 1;
  }
  v6 = sub_B170CC(MovieFileMerge__DownloadMovie_d__34_TypeInfo, method, v2, v3, v4);
  MovieFileMerge__DownloadMovie_d__34___ctor((MovieFileMerge__DownloadMovie_d__34_o *)v6, 0, 0LL);
  if ( !v6 )
    sub_B170D4();
  *(_QWORD *)(v6 + 32) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v6 + 32), (System_Int32_array **)this, v7, v8, v9, v10, v11, v12);
  return (System_Collections_IEnumerator_o *)v6;
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
  __int64 v9; // x2
  System_Char_array *v10; // x0
  __int64 v11; // x2
  System_String_o *FileName; // x20
  Il2CppObject *LocalDataPath; // x0
  System_String_o *v14; // x19
  Il2CppObject *v15; // x21
  FileMergeAndSplit_c *v16; // x8
  System_String_o *v17; // x0

  v3 = assetFolderURL;
  if ( (byte_40F7D89 & 1) == 0 )
  {
    sub_B16FFC(&char___TypeInfo, assetFolderURL);
    sub_B16FFC(&FileMergeAndSplit_TypeInfo, v4);
    sub_B16FFC(&System_IO_Path_TypeInfo, v5);
    sub_B16FFC(&StringLiteral_871/*"/"*/, v6);
    sub_B16FFC(&StringLiteral_23521/*"{0}/{1}/{2}"*/, v7);
    sub_B16FFC(&StringLiteral_23520/*"{0}/{1}/{1}.usm"*/, v8);
    byte_40F7D89 = 1;
  }
  if ( !v3 )
    goto LABEL_17;
  if ( !System_String__EndsWith(v3, (System_String_o *)StringLiteral_871/*"/"*/, 0LL) )
    goto LABEL_8;
  v10 = (System_Char_array *)sub_B17014(char___TypeInfo, 1LL, v9);
  if ( !v10 )
LABEL_17:
    sub_B170D4();
  if ( !v10->max_length )
  {
    sub_B17100(v10, v10, v11);
    sub_B170A0();
  }
  v10->m_Items[2] = 47;
  v3 = System_String__TrimEnd(v3, v10, 0LL);
LABEL_8:
  if ( (BYTE3(System_IO_Path_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_IO_Path_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_IO_Path_TypeInfo);
  }
  FileName = System_IO_Path__GetFileName(v3, 0LL);
  LocalDataPath = (Il2CppObject *)MovieFileMerge__GetLocalDataPath((const MethodInfo *)FileName);
  v14 = System_String__Format_43739268(
          (System_String_o *)StringLiteral_23520/*"{0}/{1}/{1}.usm"*/,
          LocalDataPath,
          (Il2CppObject *)FileName,
          0LL);
  v15 = (Il2CppObject *)MovieFileMerge__GetLocalDataPath((const MethodInfo *)v14);
  v16 = FileMergeAndSplit_TypeInfo;
  if ( (BYTE3(FileMergeAndSplit_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FileMergeAndSplit_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FileMergeAndSplit_TypeInfo);
    v16 = FileMergeAndSplit_TypeInfo;
  }
  v17 = System_String__Format_43744796(
          (System_String_o *)StringLiteral_23521/*"{0}/{1}/{2}"*/,
          v15,
          (Il2CppObject *)FileName,
          (Il2CppObject *)v16->static_fields->PathCRCFileName,
          0LL);
  return !System_IO_File__Exists(v17, 0LL) && System_IO_File__Exists(v14, 0LL);
}


float __fastcall MovieFileMerge__GetDownloadProgress(MovieFileMerge_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_string__uint__o *RequireDownLoadFilePathCRCDictionary; // x0
  float v4; // s8
  System_Collections_Generic_Dictionary_string__uint__o *v5; // x0
  int32_t downloadProgress; // s8

  if ( (byte_40F7D8D & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__uint__get_Count__, method);
    byte_40F7D8D = 1;
  }
  RequireDownLoadFilePathCRCDictionary = this->fields.RequireDownLoadFilePathCRCDictionary;
  v4 = 0.0;
  if ( RequireDownLoadFilePathCRCDictionary
    && System_Collections_Generic_Dictionary_string__uint___get_Count(
         RequireDownLoadFilePathCRCDictionary,
         (const MethodInfo_2DB3004 *)Method_System_Collections_Generic_Dictionary_string__uint__get_Count__) )
  {
    v5 = this->fields.RequireDownLoadFilePathCRCDictionary;
    if ( !v5 )
      sub_B170D4();
    downloadProgress = this->fields.downloadProgress;
    return (float)downloadProgress
         / (float)System_Collections_Generic_Dictionary_string__uint___get_Count(
                    v5,
                    (const MethodInfo_2DB3004 *)Method_System_Collections_Generic_Dictionary_string__uint__get_Count__);
  }
  return v4;
}


double __fastcall MovieFileMerge__GetDownloadSize(MovieFileMerge_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_string__uint__o *RequireDownLoadFilePathCRCDictionary; // x0

  if ( (byte_40F7D8C & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__uint__get_Count__, method);
    byte_40F7D8C = 1;
  }
  RequireDownLoadFilePathCRCDictionary = this->fields.RequireDownLoadFilePathCRCDictionary;
  if ( !RequireDownLoadFilePathCRCDictionary )
    sub_B170D4();
  return (double)(System_Collections_Generic_Dictionary_string__uint___get_Count(
                    RequireDownLoadFilePathCRCDictionary,
                    (const MethodInfo_2DB3004 *)Method_System_Collections_Generic_Dictionary_string__uint__get_Count__) << 20);
}


System_String_o *__fastcall MovieFileMerge__GetLocalDataPath(const MethodInfo *method)
{
  __int64 v1; // x1
  System_String_o *persistentDataPath; // x0

  if ( (byte_40F7D8A & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_919/*"/extend-data/movie"*/, v1);
    byte_40F7D8A = 1;
  }
  persistentDataPath = UnityEngine_Application__get_persistentDataPath(0LL);
  return System_String__Concat_43743732(persistentDataPath, (System_String_o *)StringLiteral_919/*"/extend-data/movie"*/, 0LL);
}


System_String_o *__fastcall MovieFileMerge__GetLocalFolderPath(MovieFileMerge_o *this, const MethodInfo *method)
{
  MovieFileMerge_o *v2; // x19
  Il2CppObject *LocalDataPath; // x0

  v2 = this;
  if ( (byte_40F7D96 & 1) == 0 )
  {
    this = (MovieFileMerge_o *)sub_B16FFC(&StringLiteral_23516/*"{0}/{1}"*/, method);
    byte_40F7D96 = 1;
  }
  LocalDataPath = (Il2CppObject *)MovieFileMerge__GetLocalDataPath((const MethodInfo *)this);
  return System_String__Format_43739268(
           (System_String_o *)StringLiteral_23516/*"{0}/{1}"*/,
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
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
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
  System_Collections_Generic_Dictionary_string__uint__o *v16; // x19
  System_Collections_Generic_Dictionary_string__uint__o *AllDownLoadFilePathCRCDictionary; // x0
  const MethodInfo *v18; // x1
  Il2CppObject *key; // x21
  uint32_t value; // w22
  Il2CppObject *LocalFolderPath; // x1
  System_String_o *v22; // x23
  System_Byte_array *AllBytes; // x24
  uint32_t v24; // w1
  System_IO_DirectoryInfo_o *Parent; // x0
  System_IO_DirectoryInfo_o *v26; // x21
  System_String_o *v27; // x0
  System_String_o *v28; // x0
  System_Collections_Generic_Dictionary_Enumerator_string__uint__o v30; // [xsp+0h] [xbp-B0h] BYREF
  uint32_t v31; // [xsp+2Ch] [xbp-84h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_string__uint__o v32; // [xsp+30h] [xbp-80h] BYREF

  if ( (byte_40F7D97 & 1) == 0 )
  {
    sub_B16FFC(&Crc32_TypeInfo, method);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__uint__Add__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__uint__GetEnumerator__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__uint___ctor__, v8);
    sub_B16FFC(&System_Collections_Generic_Dictionary_string__uint__TypeInfo, v9);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_Enumerator_string__uint__Dispose__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_Enumerator_string__uint__MoveNext__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_Enumerator_string__uint__get_Current__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_KeyValuePair_string__uint__get_Key__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_KeyValuePair_string__uint__get_Value__, v14);
    sub_B16FFC(&StringLiteral_23516/*"{0}/{1}"*/, v15);
    byte_40F7D97 = 1;
  }
  memset(&v32, 0, sizeof(v32));
  v31 = 0;
  v16 = (System_Collections_Generic_Dictionary_string__uint__o *)sub_B170CC(
                                                                   System_Collections_Generic_Dictionary_string__uint__TypeInfo,
                                                                   method,
                                                                   v2,
                                                                   v3,
                                                                   v4);
  System_Collections_Generic_Dictionary_string__uint____ctor(
    v16,
    (const MethodInfo_2DB2854 *)Method_System_Collections_Generic_Dictionary_string__uint___ctor__);
  AllDownLoadFilePathCRCDictionary = this->fields.AllDownLoadFilePathCRCDictionary;
  if ( !AllDownLoadFilePathCRCDictionary )
    sub_B170D4();
  System_Collections_Generic_Dictionary_string__uint___GetEnumerator(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v30,
    AllDownLoadFilePathCRCDictionary,
    (const MethodInfo_2DB399C *)Method_System_Collections_Generic_Dictionary_string__uint__GetEnumerator__);
  v32 = v30;
  while ( System_Collections_Generic_Dictionary_Enumerator_string__uint___MoveNext(
            &v32,
            (const MethodInfo_26C1210 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__uint__MoveNext__) )
  {
    key = v32.fields.current.fields.key;
    value = (uint32_t)v32.fields.current.fields.value;
    LocalFolderPath = (Il2CppObject *)MovieFileMerge__GetLocalFolderPath(this, v18);
    v22 = System_String__Format_43739268((System_String_o *)StringLiteral_23516/*"{0}/{1}"*/, LocalFolderPath, key, 0LL);
    if ( !System_IO_File__Exists(v22, 0LL) )
      goto LABEL_12;
    AllBytes = System_IO_File__ReadAllBytes(v22, 0LL);
    v31 = value;
    if ( (BYTE3(Crc32_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Crc32_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
    v24 = Crc32__Compute(AllBytes, 0LL);
    if ( !System_UInt32__Equals_42429628((uint32_t)&v31, v24, 0LL) )
    {
      System_IO_File__Delete(v22, 0LL);
LABEL_12:
      if ( !v16 )
        sub_B170D4();
      System_Collections_Generic_Dictionary_string__uint___Add(
        v16,
        (System_String_o *)key,
        value,
        (const MethodInfo_2DB3408 *)Method_System_Collections_Generic_Dictionary_string__uint__Add__);
      Parent = System_IO_Directory__GetParent(v22, 0LL);
      v26 = Parent;
      if ( !Parent )
        sub_B170D4();
      v27 = (System_String_o *)((__int64 (__fastcall *)(System_IO_DirectoryInfo_o *, Il2CppMethodPointer))Parent->klass->vtable._7_get_FullName.method)(
                                 Parent,
                                 Parent->klass->vtable._8_get_Name.methodPtr);
      if ( !System_IO_Directory__Exists(v27, 0LL) )
      {
        v28 = (System_String_o *)((__int64 (__fastcall *)(System_IO_DirectoryInfo_o *, Il2CppMethodPointer))v26->klass->vtable._7_get_FullName.method)(
                                   v26,
                                   v26->klass->vtable._8_get_Name.methodPtr);
        System_IO_Directory__CreateDirectory(v28, 0LL);
      }
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_string__uint___Dispose(
    &v32,
    (const MethodInfo_26C137C *)Method_System_Collections_Generic_Dictionary_Enumerator_string__uint__Dispose__);
  return v16;
}


System_Collections_Generic_List_string__o *__fastcall MovieFileMerge__GetSplitFileList(
        MovieFileMerge_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v15; // x19
  const MethodInfo *v16; // x1
  System_String_o *LocalFolderPath; // x0
  System_Collections_Generic_Dictionary_string__uint__o *AllDownLoadFilePathCRCDictionary; // x0
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x0
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *v20; // x0
  const MethodInfo *v21; // x1
  Il2CppObject *current; // x21
  Il2CppObject *v23; // x1
  System_String_o *v24; // x1
  System_Collections_Generic_List_Enumerator_T__o v26; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_40F7D9A & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__uint__get_Keys__, method);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToList_string___, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__Add__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__GetEnumerator__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_string___ctor__, v12);
    sub_B16FFC(&System_Collections_Generic_List_string__TypeInfo, v13);
    sub_B16FFC(&StringLiteral_23516/*"{0}/{1}"*/, v14);
    byte_40F7D9A = 1;
  }
  memset(&v26, 0, sizeof(v26));
  v15 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_string__TypeInfo,
                                                                                                  method,
                                                                                                  v2,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v15,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_string___ctor__);
  LocalFolderPath = MovieFileMerge__GetLocalFolderPath(this, v16);
  if ( System_IO_Directory__Exists(LocalFolderPath, 0LL) )
  {
    AllDownLoadFilePathCRCDictionary = this->fields.AllDownLoadFilePathCRCDictionary;
    if ( !AllDownLoadFilePathCRCDictionary
      || (Keys = System_Collections_Generic_Dictionary_string__uint___get_Keys(
                   AllDownLoadFilePathCRCDictionary,
                   (const MethodInfo_2DB3014 *)Method_System_Collections_Generic_Dictionary_string__uint__get_Keys__),
          (v20 = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                                                                  (System_Collections_Generic_IEnumerable_TSource__o *)Keys,
                                                                                                  (const MethodInfo_19C7AA0 *)Method_System_Linq_Enumerable_ToList_string___)) == 0LL) )
    {
      sub_B170D4();
    }
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v26,
      v20,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v26,
              (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
    {
      current = v26.fields.current;
      v23 = (Il2CppObject *)MovieFileMerge__GetLocalFolderPath(this, v21);
      v24 = System_String__Format_43739268((System_String_o *)StringLiteral_23516/*"{0}/{1}"*/, v23, current, 0LL);
      if ( !v15 )
        sub_B170D4();
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v15,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v24,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_string__Add__);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v26,
      (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
  }
  return (System_Collections_Generic_List_string__o *)v15;
}


double __fastcall MovieFileMerge__GetTotalRequireSize(MovieFileMerge_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_string__uint__o *AllDownLoadFilePathCRCDictionary; // x0
  int32_t Count; // w0
  System_Collections_Generic_Dictionary_string__uint__o *RequireDownLoadFilePathCRCDictionary; // x8

  if ( (byte_40F7D8B & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__uint__get_Count__, method);
    byte_40F7D8B = 1;
  }
  AllDownLoadFilePathCRCDictionary = this->fields.AllDownLoadFilePathCRCDictionary;
  if ( !AllDownLoadFilePathCRCDictionary
    || (Count = System_Collections_Generic_Dictionary_string__uint___get_Count(
                  AllDownLoadFilePathCRCDictionary,
                  (const MethodInfo_2DB3004 *)Method_System_Collections_Generic_Dictionary_string__uint__get_Count__),
        (RequireDownLoadFilePathCRCDictionary = this->fields.RequireDownLoadFilePathCRCDictionary) == 0LL) )
  {
    sub_B170D4();
  }
  return (double)((System_Collections_Generic_Dictionary_string__uint___get_Count(
                     RequireDownLoadFilePathCRCDictionary,
                     (const MethodInfo_2DB3004 *)Method_System_Collections_Generic_Dictionary_string__uint__get_Count__)
                 + Count) << 20);
}


void __fastcall MovieFileMerge__Initialize(
        MovieFileMerge_o *this,
        System_String_o *assetFolderURL,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  System_String_o *v5; // x20
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  System_Collections_Generic_Dictionary_string__uint__o *AllDownLoadFilePathCRCDictionary; // x0
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  System_Collections_Generic_Dictionary_string__uint__o *v21; // x22
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  System_Collections_Generic_Dictionary_string__uint__o *RequireDownLoadFilePathCRCDictionary; // x0
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  System_Collections_Generic_Dictionary_string__uint__o *v35; // x22
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  System_Char_array *v54; // x0
  __int64 v55; // x2
  struct System_String_o *FileName; // x0
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  const MethodInfo *v63; // x1
  Il2CppObject *LocalFolderPath; // x0
  struct System_String_o *v65; // x0
  System_String_array **v66; // x2
  System_String_array **v67; // x3
  System_Boolean_array **v68; // x4
  System_Int32_array **v69; // x5
  System_Int32_array *v70; // x6
  System_Int32_array *v71; // x7
  const MethodInfo *v72; // x1
  Il2CppObject *v73; // x0
  struct System_String_o *v74; // x0
  System_String_array **v75; // x2
  System_String_array **v76; // x3
  System_Boolean_array **v77; // x4
  System_Int32_array **v78; // x5
  System_Int32_array *v79; // x6
  System_Int32_array *v80; // x7
  const MethodInfo *v81; // x1
  Il2CppObject *v82; // x20
  FileMergeAndSplit_c *v83; // x8
  struct System_String_o *v84; // x0
  System_String_array **v85; // x2
  System_String_array **v86; // x3
  System_Boolean_array **v87; // x4
  System_Int32_array **v88; // x5
  System_Int32_array *v89; // x6
  System_Int32_array *v90; // x7

  v5 = assetFolderURL;
  if ( (byte_40F7D91 & 1) == 0 )
  {
    sub_B16FFC(&char___TypeInfo, assetFolderURL);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__uint__Clear__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__uint___ctor__, v8);
    sub_B16FFC(&System_Collections_Generic_Dictionary_string__uint__TypeInfo, v9);
    sub_B16FFC(&FileMergeAndSplit_TypeInfo, v10);
    sub_B16FFC(&System_IO_Path_TypeInfo, v11);
    sub_B16FFC(&StringLiteral_23516/*"{0}/{1}"*/, v12);
    sub_B16FFC(&StringLiteral_23512/*"{0}/SplitFile"*/, v13);
    sub_B16FFC(&StringLiteral_871/*"/"*/, v14);
    sub_B16FFC(&StringLiteral_23518/*"{0}/{1}.usm"*/, v15);
    byte_40F7D91 = 1;
  }
  AllDownLoadFilePathCRCDictionary = this->fields.AllDownLoadFilePathCRCDictionary;
  if ( AllDownLoadFilePathCRCDictionary )
  {
    System_Collections_Generic_Dictionary_string__uint___Clear(
      AllDownLoadFilePathCRCDictionary,
      (const MethodInfo_2DB35E4 *)Method_System_Collections_Generic_Dictionary_string__uint__Clear__);
  }
  else
  {
    v21 = (System_Collections_Generic_Dictionary_string__uint__o *)sub_B170CC(
                                                                     System_Collections_Generic_Dictionary_string__uint__TypeInfo,
                                                                     assetFolderURL,
                                                                     method,
                                                                     v3,
                                                                     v4);
    System_Collections_Generic_Dictionary_string__uint____ctor(
      v21,
      (const MethodInfo_2DB2854 *)Method_System_Collections_Generic_Dictionary_string__uint___ctor__);
    this->fields.AllDownLoadFilePathCRCDictionary = v21;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.AllDownLoadFilePathCRCDictionary,
      (System_Int32_array **)v21,
      v22,
      v23,
      v24,
      v25,
      v26,
      v27);
  }
  RequireDownLoadFilePathCRCDictionary = this->fields.RequireDownLoadFilePathCRCDictionary;
  if ( RequireDownLoadFilePathCRCDictionary )
  {
    System_Collections_Generic_Dictionary_string__uint___Clear(
      RequireDownLoadFilePathCRCDictionary,
      (const MethodInfo_2DB35E4 *)Method_System_Collections_Generic_Dictionary_string__uint__Clear__);
  }
  else
  {
    v35 = (System_Collections_Generic_Dictionary_string__uint__o *)sub_B170CC(
                                                                     System_Collections_Generic_Dictionary_string__uint__TypeInfo,
                                                                     v17,
                                                                     v18,
                                                                     v19,
                                                                     v20);
    System_Collections_Generic_Dictionary_string__uint____ctor(
      v35,
      (const MethodInfo_2DB2854 *)Method_System_Collections_Generic_Dictionary_string__uint___ctor__);
    this->fields.RequireDownLoadFilePathCRCDictionary = v35;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.RequireDownLoadFilePathCRCDictionary,
      (System_Int32_array **)v35,
      v36,
      v37,
      v38,
      v39,
      v40,
      v41);
  }
  *(_QWORD *)&this->fields.downloadProgress = 0LL;
  this->fields.isDownloadCancel = 0;
  this->fields.mergeClass = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.mergeClass, 0LL, v29, v30, v31, v32, v33, v34);
  this->fields.crcCheckerClass = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.crcCheckerClass, 0LL, v42, v43, v44, v45, v46, v47);
  if ( !v5 )
    goto LABEL_21;
  if ( !System_String__EndsWith(v5, (System_String_o *)StringLiteral_871/*"/"*/, 0LL) )
    goto LABEL_14;
  v54 = (System_Char_array *)sub_B17014(char___TypeInfo, 1LL, v48);
  if ( !v54 )
LABEL_21:
    sub_B170D4();
  if ( !v54->max_length )
  {
    sub_B17100(v54, v54, v55);
    sub_B170A0();
  }
  v54->m_Items[2] = 47;
  v5 = System_String__TrimEnd(v5, v54, 0LL);
LABEL_14:
  this->fields.assetFolderURL = v5;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.assetFolderURL,
    (System_Int32_array **)v5,
    v48,
    v49,
    v50,
    v51,
    v52,
    v53);
  if ( (BYTE3(System_IO_Path_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_IO_Path_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_IO_Path_TypeInfo);
  }
  FileName = System_IO_Path__GetFileName(v5, 0LL);
  this->fields.assetFolder = FileName;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.assetFolder,
    (System_Int32_array **)FileName,
    v57,
    v58,
    v59,
    v60,
    v61,
    v62);
  LocalFolderPath = (Il2CppObject *)MovieFileMerge__GetLocalFolderPath(this, v63);
  v65 = System_String__Format((System_String_o *)StringLiteral_23512/*"{0}/SplitFile"*/, LocalFolderPath, 0LL);
  this->fields.outputSplitFileFolder = v65;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.outputSplitFileFolder,
    (System_Int32_array **)v65,
    v66,
    v67,
    v68,
    v69,
    v70,
    v71);
  v73 = (Il2CppObject *)MovieFileMerge__GetLocalFolderPath(this, v72);
  v74 = System_String__Format_43739268(
          (System_String_o *)StringLiteral_23518/*"{0}/{1}.usm"*/,
          v73,
          (Il2CppObject *)this->fields.assetFolder,
          0LL);
  this->fields.outputMergeFile = v74;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.outputMergeFile,
    (System_Int32_array **)v74,
    v75,
    v76,
    v77,
    v78,
    v79,
    v80);
  v82 = (Il2CppObject *)MovieFileMerge__GetLocalFolderPath(this, v81);
  v83 = FileMergeAndSplit_TypeInfo;
  if ( (BYTE3(FileMergeAndSplit_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FileMergeAndSplit_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FileMergeAndSplit_TypeInfo);
    v83 = FileMergeAndSplit_TypeInfo;
  }
  v84 = System_String__Format_43739268(
          (System_String_o *)StringLiteral_23516/*"{0}/{1}"*/,
          v82,
          (Il2CppObject *)v83->static_fields->PathCRCFileName,
          0LL);
  this->fields.outputMergeFileCRC = v84;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.outputMergeFileCRC,
    (System_Int32_array **)v84,
    v85,
    v86,
    v87,
    v88,
    v89,
    v90);
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
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F7D94 & 1) == 0 )
  {
    sub_B16FFC(&MovieFileMerge__Merge_d__35_TypeInfo, method);
    byte_40F7D94 = 1;
  }
  v6 = sub_B170CC(MovieFileMerge__Merge_d__35_TypeInfo, method, v2, v3, v4);
  MovieFileMerge__Merge_d__35___ctor((MovieFileMerge__Merge_d__35_o *)v6, 0, 0LL);
  if ( !v6 )
    sub_B170D4();
  *(_QWORD *)(v6 + 32) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v6 + 32), (System_Int32_array **)this, v7, v8, v9, v10, v11, v12);
  return (System_Collections_IEnumerator_o *)v6;
}


System_Collections_IEnumerator_o *__fastcall MovieFileMerge__PlayCRIMovie(
        MovieFileMerge_o *this,
        System_String_o *filePath,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F7D90 & 1) == 0 )
  {
    sub_B16FFC(&MovieFileMerge__PlayCRIMovie_d__31_TypeInfo, filePath);
    byte_40F7D90 = 1;
  }
  v6 = sub_B170CC(MovieFileMerge__PlayCRIMovie_d__31_TypeInfo, filePath, method, v3, v4);
  MovieFileMerge__PlayCRIMovie_d__31___ctor((MovieFileMerge__PlayCRIMovie_d__31_o *)v6, 0, 0LL);
  if ( !v6 )
    sub_B170D4();
  *(_QWORD *)(v6 + 32) = filePath;
  sub_B16F98((BattleServantConfConponent_o *)(v6 + 32), (System_Int32_array **)filePath, v7, v8, v9, v10, v11, v12);
  return (System_Collections_IEnumerator_o *)v6;
}


System_Collections_IEnumerator_o *__fastcall MovieFileMerge__PlayMP4(MovieFileMerge_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F7D8E & 1) == 0 )
  {
    sub_B16FFC(&MovieFileMerge__PlayMP4_d__29_TypeInfo, method);
    byte_40F7D8E = 1;
  }
  v6 = sub_B170CC(MovieFileMerge__PlayMP4_d__29_TypeInfo, method, v2, v3, v4);
  MovieFileMerge__PlayMP4_d__29___ctor((MovieFileMerge__PlayMP4_d__29_o *)v6, 0, 0LL);
  if ( !v6 )
    sub_B170D4();
  *(_QWORD *)(v6 + 32) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v6 + 32), (System_Int32_array **)this, v7, v8, v9, v10, v11, v12);
  return (System_Collections_IEnumerator_o *)v6;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_IEnumerator_o *__fastcall MovieFileMerge__PlayMP4_21063948(
        MovieFileMerge_o *this,
        System_String_o *filePath,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v7; // x21
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7

  if ( (byte_40F7D8F & 1) == 0 )
  {
    sub_B16FFC(&MovieFileMerge__PlayMP4_d__30_TypeInfo, filePath);
    byte_40F7D8F = 1;
  }
  v7 = sub_B170CC(MovieFileMerge__PlayMP4_d__30_TypeInfo, filePath, *(_QWORD *)&mode, method, v4);
  MovieFileMerge__PlayMP4_d__30___ctor((MovieFileMerge__PlayMP4_d__30_o *)v7, 0, 0LL);
  if ( !v7 )
    sub_B170D4();
  *(_QWORD *)(v7 + 40) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v7 + 40), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v7 + 32) = filePath;
  sub_B16F98((BattleServantConfConponent_o *)(v7 + 32), (System_Int32_array **)filePath, v14, v15, v16, v17, v18, v19);
  return (System_Collections_IEnumerator_o *)v7;
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

  if ( (byte_40F7D9C & 1) == 0 )
  {
    sub_B16FFC(&ManagementManager_TypeInfo, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_ManagementManager__get_Instance__, v3);
    byte_40F7D9C = 1;
  }
  loader = this->fields.loader;
  p_loader = (BattleServantConfConponent_o *)&this->fields.loader;
  v4 = loader;
  if ( loader )
  {
    UnityEngine_Networking_UnityWebRequest__Dispose(v4, 0LL);
    p_loader->klass = 0LL;
    sub_B16F98(p_loader, 0LL, v7, v8, v9, v10, v11, v12);
  }
  if ( (BYTE3(ManagementManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagementManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
  }
  if ( !byte_40F7DF6 )
  {
    sub_B16FFC(&ManagementManager_TypeInfo, method);
    byte_40F7DF6 = 1;
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
    UnityEngine_Application__Quit_40644448(0LL);
  }
  else
  {
    Instance = (ManagementManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
    if ( !Instance )
      sub_B170D4();
    ManagementManager__reboot(Instance, 0, 0LL);
  }
}


void __fastcall MovieFileMerge___Merge_b__35_0(MovieFileMerge_o *this, System_Exception_o *e, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_String_o *v11; // x0
  CommonUI_o *Instance; // x20
  System_String_o *v13; // x21
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  ErrorDialog_ClickDelegate_o *v18; // x22
  const MethodInfo *v19; // x2
  System_String_o *v20; // x1

  if ( (byte_40F7D9E & 1) == 0 )
  {
    sub_B16FFC(&ErrorDialog_ClickDelegate_TypeInfo, e);
    sub_B16FFC(&LocalizationManager_TypeInfo, v5);
    sub_B16FFC(&Method_MovieFileMerge_EndMergeRetryDialog__, v6);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_B16FFC(&StringLiteral_5301/*"Disk full"*/, v8);
    sub_B16FFC(&StringLiteral_9255/*"NETWORK_ERROR_DISK_FULL"*/, v9);
    sub_B16FFC(&StringLiteral_1/*""*/, v10);
    byte_40F7D9E = 1;
  }
  if ( !e )
    goto LABEL_13;
  v11 = (System_String_o *)((__int64 (__fastcall *)(System_Exception_o *, Il2CppMethodPointer, const MethodInfo *))e->klass->vtable._5_get_Message.method)(
                             e,
                             e->klass->vtable._6_get_Data.methodPtr,
                             method);
  if ( !v11 )
    goto LABEL_13;
  if ( !System_String__StartsWith(v11, (System_String_o *)StringLiteral_5301/*"Disk full"*/, 0LL) )
  {
    v20 = (System_String_o *)((__int64 (__fastcall *)(System_Exception_o *, Il2CppMethodPointer))e->klass->vtable._5_get_Message.method)(
                               e,
                               e->klass->vtable._6_get_Data.methodPtr);
    goto LABEL_12;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v13 = LocalizationManager__Get((System_String_o *)StringLiteral_9255/*"NETWORK_ERROR_DISK_FULL"*/, 0LL);
  v18 = (ErrorDialog_ClickDelegate_o *)sub_B170CC(ErrorDialog_ClickDelegate_TypeInfo, v14, v15, v16, v17);
  ErrorDialog_ClickDelegate___ctor(v18, (Il2CppObject *)this, Method_MovieFileMerge_EndMergeRetryDialog__, 0LL);
  if ( !Instance )
LABEL_13:
    sub_B170D4();
  CommonUI__OpenErrorDialog(Instance, (System_String_o *)StringLiteral_1/*""*/, v13, v18, 1, 0LL);
  v20 = (System_String_o *)StringLiteral_5301/*"Disk full"*/;
LABEL_12:
  MovieFileMerge__AssetLoadLogError(this, v20, v19);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  int32_t _1__state; // w8
  struct MovieFileMerge_o *_4__this; // x20
  Il2CppObject *v8; // x0
  Il2CppObject **p__2__current; // x19
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
  System_Collections_Generic_Dictionary_string__uint__o *AllDownLoadFilePathCRCDictionary; // x0
  System_String_o *outputMergeFile; // x21
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x0
  System_Collections_Generic_List_uint__o *v27; // x22
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x3
  __int64 v31; // x4
  FileMergeAndSplit_CRCChecker_o *v32; // x23
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  FileMergeAndSplit_CRCChecker_o *crcCheckerClass; // x0
  Il2CppObject *v40; // x0
  Il2CppObject **v41; // x19
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  System_Int32_array **NeedDownloadDictionary; // x0
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7

  if ( (byte_40F8639 & 1) == 0 )
  {
    sub_B16FFC(&FileMergeAndSplit_CRCChecker_TypeInfo, method);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__uint__get_Values__, v3);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToList_uint___, v4);
    sub_B16FFC(&FileMergeAndSplit_TypeInfo, v5);
    byte_40F8639 = 1;
  }
  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  if ( _1__state == 2 )
  {
    this->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_22;
    NeedDownloadDictionary = (System_Int32_array **)MovieFileMerge__GetNeedDownloadDictionary(_4__this, 0LL);
    _4__this->fields.RequireDownLoadFilePathCRCDictionary = (struct System_Collections_Generic_Dictionary_string__uint__o *)NeedDownloadDictionary;
    sub_B16F98(
      (BattleServantConfConponent_o *)&_4__this->fields.RequireDownLoadFilePathCRCDictionary,
      NeedDownloadDictionary,
      v49,
      v50,
      v51,
      v52,
      v53,
      v54);
    if ( MovieFileMerge__IsCRCMatch(_4__this, 0LL) )
    {
      if ( System_IO_Directory__Exists(_4__this->fields.outputSplitFileFolder, 0LL) )
        System_IO_Directory__Delete_43683028(_4__this->fields.outputSplitFileFolder, 1, 0LL);
      if ( System_IO_File__Exists(_4__this->fields.outputMergeFileCRC, 0LL) )
        System_IO_File__Delete(_4__this->fields.outputMergeFileCRC, 0LL);
    }
    return 0;
  }
  if ( _1__state != 1 )
  {
    if ( !_1__state )
    {
      this->fields.__1__state = -1;
      if ( (BYTE3(FileMergeAndSplit_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !FileMergeAndSplit_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FileMergeAndSplit_TypeInfo);
      }
      if ( _4__this )
      {
        v8 = (Il2CppObject *)MovieFileMerge__Download(
                               _4__this,
                               FileMergeAndSplit_TypeInfo->static_fields->PathCRCFileName,
                               0,
                               0LL);
        this->fields.__2__current = v8;
        p__2__current = &this->fields.__2__current;
        sub_B16F98(
          (BattleServantConfConponent_o *)p__2__current,
          (System_Int32_array **)v8,
          v10,
          v11,
          v12,
          v13,
          v14,
          v15);
        result = 1;
        *((_DWORD *)p__2__current - 2) = 1;
        return result;
      }
LABEL_22:
      sub_B170D4();
    }
    return 0;
  }
  this->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_22;
  Dic = (System_Int32_array **)MovieFileMerge__CreateDic(_4__this, _4__this->fields.outputMergeFileCRC, 0LL);
  _4__this->fields.AllDownLoadFilePathCRCDictionary = (struct System_Collections_Generic_Dictionary_string__uint__o *)Dic;
  sub_B16F98(
    (BattleServantConfConponent_o *)&_4__this->fields.AllDownLoadFilePathCRCDictionary,
    Dic,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  AllDownLoadFilePathCRCDictionary = _4__this->fields.AllDownLoadFilePathCRCDictionary;
  if ( !AllDownLoadFilePathCRCDictionary )
    goto LABEL_22;
  outputMergeFile = _4__this->fields.outputMergeFile;
  Values = System_Collections_Generic_Dictionary_string__uint___get_Values(
             AllDownLoadFilePathCRCDictionary,
             (const MethodInfo_2DB31AC *)Method_System_Collections_Generic_Dictionary_string__uint__get_Values__);
  v27 = (System_Collections_Generic_List_uint__o *)System_Linq_Enumerable__ToList_uint_(
                                                     (System_Collections_Generic_IEnumerable_TSource__o *)Values,
                                                     (const MethodInfo_19C7BD0 *)Method_System_Linq_Enumerable_ToList_uint___);
  v32 = (FileMergeAndSplit_CRCChecker_o *)sub_B170CC(FileMergeAndSplit_CRCChecker_TypeInfo, v28, v29, v30, v31);
  FileMergeAndSplit_CRCChecker___ctor(v32, outputMergeFile, v27, 0LL);
  _4__this->fields.crcCheckerClass = v32;
  sub_B16F98(
    (BattleServantConfConponent_o *)&_4__this->fields.crcCheckerClass,
    (System_Int32_array **)v32,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  crcCheckerClass = _4__this->fields.crcCheckerClass;
  if ( !crcCheckerClass )
    goto LABEL_22;
  v40 = (Il2CppObject *)FileMergeAndSplit_CRCChecker__Run(crcCheckerClass, 0LL);
  this->fields.__2__current = v40;
  v41 = &this->fields.__2__current;
  sub_B16F98((BattleServantConfConponent_o *)v41, (System_Int32_array **)v40, v42, v43, v44, v45, v46, v47);
  *((_DWORD *)v41 - 2) = 2;
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
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  __int64 v6; // x4
  System_NotSupportedException_o *v7; // x0
  __int64 v8; // x1

  v2 = sub_B17000(&System_NotSupportedException_TypeInfo, method);
  v7 = (System_NotSupportedException_o *)sub_B170CC(v2, v3, v4, v5, v6);
  System_NotSupportedException___ctor(v7, 0LL);
  sub_B17000(&Method_MovieFileMerge__CRCDownloadAndCheck_d__33_System_Collections_IEnumerator_Reset__, v8);
  sub_B170A0();
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  int32_t _1__state; // w8
  struct MovieFileMerge_o *_4__this; // x20
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
  const MethodInfo *v19; // x1
  bool result; // w0
  Il2CppObject *v21; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v28; // [xsp+28h] [xbp-48h] BYREF

  if ( (byte_40F863B & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__uint__GetEnumerator__, method);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_Enumerator_string__uint__MoveNext__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_Enumerator_string__uint__get_Current__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_KeyValuePair_string__uint__get_Key__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_KeyValuePair_string__uint__get_Value__, v6);
    byte_40F863B = 1;
  }
  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  if ( _1__state == 1 )
  {
    p__7__wrap1 = &this->fields.__7__wrap1;
  }
  else
  {
    if ( _1__state )
      return 0;
    this->fields.__1__state = -1;
    if ( !_4__this )
      sub_B170D4();
    RequireDownLoadFilePathCRCDictionary = _4__this->fields.RequireDownLoadFilePathCRCDictionary;
    _4__this->fields.isDownloading = 1;
    _4__this->fields.downloadProgress = 0;
    if ( !RequireDownLoadFilePathCRCDictionary )
      sub_B170D4();
    System_Collections_Generic_Dictionary_string__uint___GetEnumerator(
      &v28,
      RequireDownLoadFilePathCRCDictionary,
      (const MethodInfo_2DB399C *)Method_System_Collections_Generic_Dictionary_string__uint__GetEnumerator__);
    p__7__wrap1 = &this->fields.__7__wrap1;
    v12 = *(_OWORD *)&v28.fields.dictionary;
    current = v28.fields.current;
    *(_QWORD *)&this->fields.__7__wrap1.fields.getEnumeratorRetType = *(_QWORD *)&v28.fields.getEnumeratorRetType;
    this->fields.__7__wrap1.fields.current = current;
    *(_OWORD *)&this->fields.__7__wrap1.fields.dictionary = v12;
    sub_B16F98((BattleServantConfConponent_o *)&this->fields.__7__wrap1, 0LL, v13, v14, v15, v16, v17, v18);
  }
  this->fields.__1__state = -3;
  if ( System_Collections_Generic_Dictionary_Enumerator_string__uint___MoveNext(
         p__7__wrap1,
         (const MethodInfo_26C1210 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__uint__MoveNext__) )
  {
    if ( !_4__this )
      sub_B170D4();
    if ( _4__this->fields.isDownloadCancel )
    {
      _4__this->fields.isDownloading = 0;
      MovieFileMerge__DownloadMovie_d__34____m__Finally1(this, v19);
      return 0;
    }
    else
    {
      v21 = (Il2CppObject *)MovieFileMerge__Download(
                              _4__this,
                              (System_String_o *)this->fields.__7__wrap1.fields.current.fields.key,
                              (uint32_t)this->fields.__7__wrap1.fields.current.fields.value,
                              0LL);
      this->fields.__2__current = v21;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.__2__current,
        (System_Int32_array **)v21,
        v22,
        v23,
        v24,
        v25,
        v26,
        v27);
      result = 1;
      this->fields.__1__state = 1;
    }
  }
  else
  {
    MovieFileMerge__DownloadMovie_d__34____m__Finally1(this, v19);
    *(_QWORD *)&p__7__wrap1->fields.getEnumeratorRetType = 0LL;
    *(_OWORD *)&p__7__wrap1->fields.dictionary = 0u;
    p__7__wrap1->fields.current = 0u;
    if ( !_4__this )
      sub_B170D4();
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
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  __int64 v6; // x4
  System_NotSupportedException_o *v7; // x0
  __int64 v8; // x1

  v2 = sub_B17000(&System_NotSupportedException_TypeInfo, method);
  v7 = (System_NotSupportedException_o *)sub_B170CC(v2, v3, v4, v5, v6);
  System_NotSupportedException___ctor(v7, 0LL);
  sub_B17000(&Method_MovieFileMerge__DownloadMovie_d__34_System_Collections_IEnumerator_Reset__, v8);
  sub_B170A0();
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
  if ( (byte_40F863C & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_Enumerator_string__uint__Dispose__, method);
    byte_40F863C = 1;
  }
  this->fields.__1__state = -1;
  System_Collections_Generic_Dictionary_Enumerator_string__uint___Dispose(
    &this->fields.__7__wrap1,
    (const MethodInfo_26C137C *)Method_System_Collections_Generic_Dictionary_Enumerator_string__uint__Dispose__);
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
  struct System_String_o *v49; // x0
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
  __int64 v65; // x0
  System_String_array **v66; // x2
  System_String_array **v67; // x3
  System_Boolean_array **v68; // x4
  System_Int32_array **v69; // x5
  System_Int32_array *v70; // x6
  System_Int32_array *v71; // x7
  System_String_array *v72; // x21
  __int64 v73; // x0
  System_Int32_array **v74; // x1
  ManagementManager_c *v75; // x0
  _BOOL4 v76; // w22
  CommonUI_o *v77; // x21
  System_String_o *v78; // x22
  __int64 v79; // x1
  __int64 v80; // x2
  __int64 v81; // x3
  __int64 v82; // x4
  ErrorDialog_ClickDelegate_o *v83; // x23
  System_Byte_array *readData_5__5; // x20
  uint32_t v85; // w0
  Il2CppObject **p__2__current; // x19
  System_String_array **v87; // x2
  System_String_array **v88; // x3
  System_Boolean_array **v89; // x4
  System_Int32_array **v90; // x5
  System_Int32_array *v91; // x6
  System_Int32_array *v92; // x7
  int v93; // w8
  UnityEngine_WaitForEndOfFrame_o *v94; // x20
  System_String_array **v95; // x2
  System_String_array **v96; // x3
  System_Boolean_array **v97; // x4
  System_Int32_array **v98; // x5
  System_Int32_array *v99; // x6
  System_Int32_array *v100; // x7
  __int64 v101; // x1
  __int64 v102; // x2
  __int64 v103; // x3
  __int64 v104; // x4
  float unscaledTime; // s8
  ManagerConfig_c *v106; // x0
  UnityEngine_WaitForEndOfFrame_o *v107; // x21
  System_String_array **v108; // x2
  System_String_array **v109; // x3
  System_Boolean_array **v110; // x4
  System_Int32_array **v111; // x5
  System_Int32_array *v112; // x6
  System_Int32_array *v113; // x7
  UnityEngine_Networking_UnityWebRequest_o *loader; // x0
  UnityEngine_Networking_UnityWebRequest_o **p_loader; // x22
  System_String_array **v116; // x2
  System_String_array **v117; // x3
  System_Boolean_array **v118; // x4
  System_Int32_array **v119; // x5
  System_Int32_array *v120; // x6
  System_Int32_array *v121; // x7
  struct System_String_o **p_errorCode_5__11; // x21
  System_String_array **v123; // x2
  System_String_array **v124; // x3
  System_Boolean_array **v125; // x4
  System_Int32_array **v126; // x5
  System_Int32_array *v127; // x6
  System_Int32_array *v128; // x7
  System_String_o *error; // x0
  UnityEngine_Networking_DownloadHandler_o *downloadHandler; // x0
  struct System_Byte_array *data; // x0
  System_String_array **v132; // x2
  System_String_array **v133; // x3
  System_Boolean_array **v134; // x4
  System_Int32_array **v135; // x5
  System_Int32_array *v136; // x6
  System_Int32_array *v137; // x7
  System_String_array **v138; // x2
  System_String_array **v139; // x3
  System_Boolean_array **v140; // x4
  System_Int32_array **v141; // x5
  System_Int32_array *v142; // x6
  System_Int32_array *v143; // x7
  UnityEngine_Networking_UnityWebRequest_o *v144; // x0
  System_String_array **v145; // x2
  System_String_array **v146; // x3
  System_Boolean_array **v147; // x4
  System_Int32_array **v148; // x5
  System_Int32_array *v149; // x6
  System_Int32_array *v150; // x7
  UnityEngine_Networking_UnityWebRequest_o *v151; // x0
  UnityEngine_WaitForEndOfFrame_o *v152; // x20
  System_String_array **v153; // x2
  System_String_array **v154; // x3
  System_Boolean_array **v155; // x4
  System_Int32_array **v156; // x5
  System_Int32_array *v157; // x6
  System_Int32_array *v158; // x7
  System_Int32_array **v159; // x1
  System_String_array **v160; // x2
  System_String_array **v161; // x3
  System_Boolean_array **v162; // x4
  System_Int32_array **v163; // x5
  System_Int32_array *v164; // x6
  System_Int32_array *v165; // x7
  System_IO_DirectoryInfo_o *Parent; // x0
  System_IO_DirectoryInfo_o *v167; // x21
  System_String_o *v168; // x0
  System_String_o *v169; // x21
  __int64 v170; // x1
  int64_t FreeSize; // x21
  ManagerConfig_c *v172; // x0
  System_String_o *v173; // x22
  __int64 v174; // x1
  __int64 v175; // x2
  __int64 v176; // x3
  __int64 v177; // x4
  ErrorDialog_ClickDelegate_o *v178; // x23
  UnityEngine_WaitForEndOfFrame_o *v179; // x20
  System_String_array **v180; // x2
  System_String_array **v181; // x3
  System_Boolean_array **v182; // x4
  System_Int32_array **v183; // x5
  System_Int32_array *v184; // x6
  System_Int32_array *v185; // x7
  float downloadProgress; // s0
  float loadProgress_5__7; // s9
  float v188; // s8
  float v189; // s0
  bool v190; // zf
  float v191; // s8
  UnityEngine_Networking_UnityWebRequest_o *v192; // x0
  System_String_o *downloadingURL; // x22
  System_String_o *v194; // x0
  System_Int32_array **v195; // x0
  System_String_array **v196; // x2
  System_String_array **v197; // x3
  System_Boolean_array **v198; // x4
  System_Int32_array **v199; // x5
  System_Int32_array *v200; // x6
  System_Int32_array *v201; // x7
  UnityEngine_Networking_UnityWebRequest_o *v202; // x0
  System_Collections_Generic_Dictionary_string__string__o *ResponseHeaders; // x0
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v204; // x22
  __int64 v205; // x2
  System_String_o *v206; // x22
  System_String_array *v207; // x0
  System_String_array *v208; // x22
  System_String_o *v209; // x0
  System_String_o *v210; // x0
  int32_t v211; // w8
  System_String_o *v212; // x23
  System_String_o *v213; // x0
  System_String_array **v214; // x3
  System_Boolean_array **v215; // x4
  System_Int32_array **v216; // x5
  System_Int32_array *v217; // x6
  System_Int32_array *v218; // x7
  System_Int32_array **v219; // x24
  System_String_array **v220; // x3
  System_Boolean_array **v221; // x4
  System_Int32_array **v222; // x5
  System_Int32_array *v223; // x6
  System_Int32_array *v224; // x7
  System_String_array **v225; // x3
  System_Boolean_array **v226; // x4
  System_Int32_array **v227; // x5
  System_Int32_array *v228; // x6
  System_Int32_array *v229; // x7
  System_Int32_array **v230; // x23
  System_String_array **v231; // x3
  System_Boolean_array **v232; // x4
  System_Int32_array **v233; // x5
  System_Int32_array *v234; // x6
  System_Int32_array *v235; // x7
  System_String_array **v236; // x3
  System_Boolean_array **v237; // x4
  System_Int32_array **v238; // x5
  System_Int32_array *v239; // x6
  System_Int32_array *v240; // x7
  System_Int32_array **v241; // x22
  System_String_array **v242; // x3
  System_Boolean_array **v243; // x4
  System_Int32_array **v244; // x5
  System_Int32_array *v245; // x6
  System_Int32_array *v246; // x7
  struct System_String_o *v247; // x0
  System_String_array **v248; // x2
  System_String_array **v249; // x3
  System_Boolean_array **v250; // x4
  System_Int32_array **v251; // x5
  System_Int32_array *v252; // x6
  System_Int32_array *v253; // x7
  ManagerConfig_c *v254; // x0
  WebViewManager_o *Instance; // x0
  System_String_o *errorCode_5__11; // x21
  CommonUI_o *v257; // x22
  __int64 v258; // x1
  __int64 v259; // x2
  __int64 v260; // x3
  __int64 v261; // x4
  ErrorDialog_ClickDelegate_o *v262; // x23
  UnityEngine_WaitForEndOfFrame_o *v263; // x20
  System_String_array **v264; // x2
  System_String_array **v265; // x3
  System_Boolean_array **v266; // x4
  System_Int32_array **v267; // x5
  System_Int32_array *v268; // x6
  System_Int32_array *v269; // x7
  int32_t autoRetryCount_5__3; // w21
  ManagerConfig_c *v271; // x0
  float DOWNLOAD_RETRY_DELAY_TIME; // s8
  UnityEngine_WaitForSeconds_o *v273; // x20
  System_String_array **v274; // x2
  System_String_array **v275; // x3
  System_Boolean_array **v276; // x4
  System_Int32_array **v277; // x5
  System_Int32_array *v278; // x6
  System_Int32_array *v279; // x7
  Il2CppObject *v280; // x21
  NetworkManager_c *v281; // x0
  UnityEngine_Networking_UnityWebRequest_o *v282; // x0
  BattleServantConfConponent_o *v283; // x20
  UnityEngine_Networking_UnityWebRequest_o *v284; // t1
  System_String_array **v285; // x2
  System_String_array **v286; // x3
  System_Boolean_array **v287; // x4
  System_Int32_array **v288; // x5
  System_Int32_array *v289; // x6
  System_Int32_array *v290; // x7
  System_String_array **v291; // x2
  System_String_array **v292; // x3
  System_Boolean_array **v293; // x4
  System_Int32_array **v294; // x5
  System_Int32_array *v295; // x6
  System_Int32_array *v296; // x7
  struct System_Byte_array **v297; // x0
  struct UnityEngine_Networking_UnityWebRequest_o **v298; // x21
  System_String_array **v299; // x2
  System_String_array **v300; // x3
  System_Boolean_array **v301; // x4
  System_Int32_array **v302; // x5
  System_Int32_array *v303; // x6
  System_Int32_array *v304; // x7
  System_String_array **v305; // x2
  System_String_array **v306; // x3
  System_Boolean_array **v307; // x4
  System_Int32_array **v308; // x5
  System_Int32_array *v309; // x6
  System_Int32_array *v310; // x7
  ManagerConfig_c *v311; // x0
  WebViewManager_o *v312; // x0
  System_String_o *v313; // x21
  CommonUI_o *v314; // x22
  __int64 v315; // x1
  __int64 v316; // x2
  __int64 v317; // x3
  __int64 v318; // x4
  ErrorDialog_ClickDelegate_o *v319; // x23
  System_String_array **v320; // x2
  System_String_array **v321; // x3
  System_Boolean_array **v322; // x4
  System_Int32_array **v323; // x5
  System_Int32_array *v324; // x6
  System_Int32_array *v325; // x7
  System_String_array **v326; // x2
  System_String_array **v327; // x3
  System_Boolean_array **v328; // x4
  System_Int32_array **v329; // x5
  System_Int32_array *v330; // x6
  System_Int32_array *v331; // x7
  System_String_array **v332; // x2
  System_String_array **v333; // x3
  System_Boolean_array **v334; // x4
  System_Int32_array **v335; // x5
  System_Int32_array *v336; // x6
  System_Int32_array *v337; // x7
  UnityEngine_WaitForSeconds_o *v338; // x20
  System_String_array **v339; // x2
  System_String_array **v340; // x3
  System_Boolean_array **v341; // x4
  System_Int32_array **v342; // x5
  System_Int32_array *v343; // x6
  System_Int32_array *v344; // x7
  __int64 v345; // x1
  ManagementManager_c *v346; // x0
  _BOOL4 isDuringStartup; // w23
  WebViewManager_o *v348; // x0
  struct System_String_o *errorLocalizeCode_5__12; // x8
  CommonUI_o *v350; // x22
  System_String_o *v351; // x21
  System_String_o *v352; // x23
  System_String_o *v353; // x23
  __int64 v354; // x1
  __int64 v355; // x2
  __int64 v356; // x3
  __int64 v357; // x4
  ErrorDialog_ClickDelegate_o *v358; // x24
  ManagerConfig_c *v359; // x0
  Il2CppObject *wait_5__8; // x1
  System_String_o *v361; // x23
  System_String_o *v362; // x23
  __int64 v363; // x1
  __int64 v364; // x2
  __int64 v365; // x3
  __int64 v366; // x4
  ErrorDialog_ClickDelegate_o *v367; // x24
  __int64 v368; // x0
  __int64 v369; // x1
  __int64 v370; // x2
  __int64 v371; // x3
  __int64 v372; // x4
  System_IO_IOException_o *v373; // x21
  __int64 v374; // x1
  System_String_o *v375; // x0
  __int64 v376; // x1
  System_Int32_array **v377; // x0
  System_String_array **v378; // x2
  System_String_array **v379; // x3
  System_Boolean_array **v380; // x4
  System_Int32_array **v381; // x5
  System_Int32_array *v382; // x6
  System_Int32_array *v383; // x7
  UnityEngine_Networking_UnityWebRequest_o *v384; // x0
  Il2CppObject **v385; // x19
  System_String_array **v386; // x2
  System_String_array **v387; // x3
  System_Boolean_array **v388; // x4
  System_Int32_array **v389; // x5
  System_Int32_array *v390; // x6
  System_Int32_array *v391; // x7
  System_Nullable_Vector2__o effectDistance; // [xsp+0h] [xbp-60h]
  System_Nullable_Vector2__o effectDistancea; // [xsp+0h] [xbp-60h]
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_40F863A & 1) == 0 )
  {
    sub_B16FFC(&char___TypeInfo, method);
    sub_B16FFC(&ErrorDialog_ClickDelegate_TypeInfo, v9);
    sub_B16FFC(&CommonServicePluginScript_TypeInfo, v10);
    sub_B16FFC(&Crc32_TypeInfo, v11);
    sub_B16FFC(&UnityEngine_Debug_TypeInfo, v12);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__string__TryGetValue__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__string__get_Count__, v14);
    sub_B16FFC(&LocalizationManager_TypeInfo, v15);
    sub_B16FFC(&ManagementManager_TypeInfo, v16);
    sub_B16FFC(&ManagerConfig_TypeInfo, v17);
    sub_B16FFC(&Method_MovieFileMerge_EndRetryDialog__, v18);
    sub_B16FFC(&Method_MovieFileMerge_EndWarningDialog__, v19);
    sub_B16FFC(&NetworkManager_TypeInfo, v20);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v21);
    sub_B16FFC(&string___TypeInfo, v22);
    sub_B16FFC(&UnityEngine_WaitForEndOfFrame_TypeInfo, v23);
    sub_B16FFC(&UnityEngine_WaitForSeconds_TypeInfo, v24);
    sub_B16FFC(&StringLiteral_7070/*"HTTP"*/, v25);
    sub_B16FFC(&StringLiteral_654/*")\n\n503 Auto retry count "*/, v26);
    sub_B16FFC(&StringLiteral_657/*")\nfile crc ("*/, v27);
    sub_B16FFC(&StringLiteral_1189/*"503"*/, v28);
    sub_B16FFC(&StringLiteral_1743/*"ASSET_LOADER_ERROR_BOOT_RETRY_MESSAGE"*/, v29);
    sub_B16FFC(&StringLiteral_15682/*"[FFFF80]Download error for debug"*/, v30);
    sub_B16FFC(&StringLiteral_23516/*"{0}/{1}"*/, v31);
    sub_B16FFC(&StringLiteral_12312/*"STATUS"*/, v32);
    sub_B16FFC(&StringLiteral_653/*")\n\n"*/, v33);
    sub_B16FFC(&StringLiteral_585/*"("*/, v34);
    sub_B16FFC(&StringLiteral_655/*")\n\nAssetBundle file check sum error\nlist crc ("*/, v35);
    sub_B16FFC(&StringLiteral_651/*")"*/, v36);
    sub_B16FFC(&StringLiteral_1744/*"ASSET_LOADER_ERROR_TIME_OVER_MESSAGE"*/, v37);
    sub_B16FFC(&StringLiteral_656/*")\n\nAssetBundle file download time over"*/, v38);
    sub_B16FFC(&StringLiteral_1/*""*/, v39);
    byte_40F863A = 1;
  }
  value = 0LL;
  _4__this = this->fields.__4__this;
  switch ( this->fields.__1__state )
  {
    case 0:
      this->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_223;
      v41 = (System_Int32_array **)System_String__Format_43739268(
                                     (System_String_o *)StringLiteral_23516/*"{0}/{1}"*/,
                                     (Il2CppObject *)_4__this->fields.assetFolderURL,
                                     (Il2CppObject *)this->fields.fileName,
                                     0LL);
      _4__this->fields.downloadingURL = (struct System_String_o *)v41;
      sub_B16F98((BattleServantConfConponent_o *)&_4__this->fields.downloadingURL, v41, v42, v43, v44, v45, v46, v47);
      _4__this->fields.downloadingCRC = this->fields.crc;
      LocalFolderPath = (Il2CppObject *)MovieFileMerge__GetLocalFolderPath(_4__this, 0LL);
      v49 = System_String__Format_43739268(
              (System_String_o *)StringLiteral_23516/*"{0}/{1}"*/,
              LocalFolderPath,
              (Il2CppObject *)this->fields.fileName,
              0LL);
      this->fields._dlFilePath_5__2 = v49;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields._dlFilePath_5__2,
        (System_Int32_array **)v49,
        v50,
        v51,
        v52,
        v53,
        v54,
        v55);
      this->fields._isDownload_5__4 = 1;
      p_isDownload_5__4 = &this->fields._isDownload_5__4;
      p_readData_5__5 = (BattleServantConfConponent_o *)&this->fields._readData_5__5;
      this->fields._autoRetryCount_5__3 = 0;
      _4__this->fields.isErrorDialog = 0;
      goto LABEL_218;
    case 1:
      this->fields.__1__state = -1;
      unscaledTime = UnityEngine_Time__get_unscaledTime(0LL);
      v106 = ManagerConfig_TypeInfo;
      if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ManagerConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
        v106 = ManagerConfig_TypeInfo;
      }
      this->fields._requestTime_5__6 = unscaledTime + v106->static_fields->TIMEOUT;
      if ( !_4__this )
        goto LABEL_223;
      this->fields._loadProgress_5__7 = 0.0;
      v107 = (UnityEngine_WaitForEndOfFrame_o *)sub_B170CC(
                                                  UnityEngine_WaitForEndOfFrame_TypeInfo,
                                                  v101,
                                                  v102,
                                                  v103,
                                                  v104);
      UnityEngine_WaitForEndOfFrame___ctor(v107, 0LL);
      this->fields._wait_5__8 = v107;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields._wait_5__8,
        (System_Int32_array **)v107,
        v108,
        v109,
        v110,
        v111,
        v112,
        v113);
LABEL_42:
      p_loader = &_4__this->fields.loader;
      loader = _4__this->fields.loader;
      if ( !loader )
        goto LABEL_223;
      if ( UnityEngine_Networking_UnityWebRequest__get_isDone(loader, 0LL) )
        goto LABEL_44;
      v144 = *p_loader;
      if ( !*p_loader )
        goto LABEL_223;
      if ( _4__this->fields.isDownloadCancel )
      {
        UnityEngine_Networking_UnityWebRequest__Dispose(v144, 0LL);
        _4__this->fields.loader = 0LL;
        sub_B16F98((BattleServantConfConponent_o *)&_4__this->fields.loader, 0LL, v145, v146, v147, v148, v149, v150);
        LOBYTE(v151) = 0;
        _4__this->fields.isDownloading = 0;
        return (char)v151;
      }
      downloadProgress = UnityEngine_Networking_UnityWebRequest__get_downloadProgress(v144, 0LL);
      loadProgress_5__7 = this->fields._loadProgress_5__7;
      v188 = downloadProgress;
      v189 = UnityEngine_Time__get_unscaledTime(0LL);
      v190 = v188 == loadProgress_5__7;
      v191 = v189;
      if ( !v190 )
      {
        v359 = ManagerConfig_TypeInfo;
        if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ManagerConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
          v359 = ManagerConfig_TypeInfo;
        }
        this->fields._requestTime_5__6 = v191 + v359->static_fields->TIMEOUT;
        if ( *p_loader )
        {
          this->fields._loadProgress_5__7 = UnityEngine_Networking_UnityWebRequest__get_downloadProgress(*p_loader, 0LL);
LABEL_205:
          wait_5__8 = (Il2CppObject *)this->fields._wait_5__8;
          this->fields.__2__current = wait_5__8;
          sub_B16F98(
            (BattleServantConfConponent_o *)&this->fields.__2__current,
            (System_Int32_array **)wait_5__8,
            v116,
            v117,
            v118,
            v119,
            v120,
            v121);
          this->fields.__1__state = 2;
          goto LABEL_180;
        }
        goto LABEL_223;
      }
      if ( v189 < this->fields._requestTime_5__6 )
        goto LABEL_205;
LABEL_44:
      *(_WORD *)&this->fields._isAutoRetry_5__9 = 0;
      this->fields._errorCode_5__11 = 0LL;
      p_errorCode_5__11 = &this->fields._errorCode_5__11;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields._errorCode_5__11,
        0LL,
        v116,
        v117,
        v118,
        v119,
        v120,
        v121);
      this->fields._errorLocalizeCode_5__12 = 0LL;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields._errorLocalizeCode_5__12,
        0LL,
        v123,
        v124,
        v125,
        v126,
        v127,
        v128);
      if ( !*p_loader )
LABEL_223:
        sub_B170D4();
      if ( !UnityEngine_Networking_UnityWebRequest__get_isDone(*p_loader, 0LL) )
      {
        v159 = (System_Int32_array **)System_String__Concat_43746016(
                                        (System_String_o *)StringLiteral_585/*"("*/,
                                        _4__this->fields.downloadingURL,
                                        (System_String_o *)StringLiteral_656/*")\n\nAssetBundle file download time over"*/,
                                        0LL);
        *p_errorCode_5__11 = (struct System_String_o *)v159;
LABEL_63:
        sub_B16F98(
          (BattleServantConfConponent_o *)&this->fields._errorCode_5__11,
          v159,
          v160,
          v161,
          v162,
          v163,
          v164,
          v165);
        goto LABEL_133;
      }
      if ( !*p_loader )
        goto LABEL_223;
      error = UnityEngine_Networking_UnityWebRequest__get_error(*p_loader, 0LL);
      if ( System_String__IsNullOrEmpty(error, 0LL) )
      {
        if ( !*p_loader )
          goto LABEL_223;
        downloadHandler = UnityEngine_Networking_UnityWebRequest__get_downloadHandler(*p_loader, 0LL);
        if ( !downloadHandler )
          goto LABEL_223;
        data = UnityEngine_Networking_DownloadHandler__get_data(downloadHandler, 0LL);
        this->fields._readData_5__5 = data;
        sub_B16F98(
          (BattleServantConfConponent_o *)&this->fields._readData_5__5,
          (System_Int32_array **)data,
          v132,
          v133,
          v134,
          v135,
          v136,
          v137);
        this->fields.__2__current = 0LL;
        p__2__current = &this->fields.__2__current;
        sub_B16F98((BattleServantConfConponent_o *)p__2__current, 0LL, v138, v139, v140, v141, v142, v143);
        v93 = 3;
        goto LABEL_179;
      }
      v192 = _4__this->fields.loader;
      if ( !v192 )
        goto LABEL_223;
      downloadingURL = _4__this->fields.downloadingURL;
      v194 = UnityEngine_Networking_UnityWebRequest__get_error(v192, 0LL);
      v195 = (System_Int32_array **)System_String__Concat_43747144(
                                      (System_String_o *)StringLiteral_585/*"("*/,
                                      downloadingURL,
                                      (System_String_o *)StringLiteral_653/*")\n\n"*/,
                                      v194,
                                      0LL);
      *p_errorCode_5__11 = (struct System_String_o *)v195;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields._errorCode_5__11,
        v195,
        v196,
        v197,
        v198,
        v199,
        v200,
        v201);
      v202 = _4__this->fields.loader;
      if ( !v202 )
        goto LABEL_223;
      ResponseHeaders = UnityEngine_Networking_UnityWebRequest__GetResponseHeaders(v202, 0LL);
      if ( !ResponseHeaders )
        goto LABEL_133;
      v204 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)ResponseHeaders;
      if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___get_Count(
             (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)ResponseHeaders,
             (const MethodInfo_2DA3814 *)Method_System_Collections_Generic_Dictionary_string__string__get_Count__) < 1
        || !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
              v204,
              (System_Xml_XmlQualifiedName_o *)StringLiteral_12312/*"STATUS"*/,
              &value,
              (const MethodInfo_2DA5A18 *)Method_System_Collections_Generic_Dictionary_string__string__TryGetValue__) )
      {
        goto LABEL_133;
      }
      v206 = (System_String_o *)value;
      v73 = sub_B17014(char___TypeInfo, 1LL, v205);
      if ( !v73 )
        goto LABEL_223;
      v74 = (System_Int32_array **)v73;
      if ( !*(_DWORD *)(v73 + 24) )
        goto LABEL_214;
      *(_WORD *)(v73 + 32) = 32;
      if ( !v206 )
        goto LABEL_223;
      v207 = System_String__Split_43804516(v206, (System_Char_array *)v73, 1, 0LL);
      if ( !v207 )
        goto LABEL_223;
      v208 = v207;
      if ( (int)v207->max_length < 2 )
        goto LABEL_133;
      v209 = v207->m_Items[0];
      if ( !v209 )
        goto LABEL_223;
      v73 = System_String__StartsWith(v209, (System_String_o *)StringLiteral_7070/*"HTTP"*/, 0LL);
      if ( (v73 & 1) == 0 )
        goto LABEL_133;
      if ( v208->max_length <= 1 )
        goto LABEL_214;
      v210 = v208->m_Items[1];
      if ( !v210 )
        goto LABEL_223;
      if ( System_String__Equals_43731072(v210, (System_String_o *)StringLiteral_1189/*"503"*/, 0LL) )
      {
        v211 = this->fields._autoRetryCount_5__3 + 1;
        this->fields._isAutoRetry_5__9 = 1;
        this->fields._autoRetryCount_5__3 = v211;
        v212 = _4__this->fields.downloadingURL;
        v213 = System_Int32__ToString((int)this + 64, 0LL);
        v159 = (System_Int32_array **)System_String__Concat_43747144(
                                        (System_String_o *)StringLiteral_585/*"("*/,
                                        v212,
                                        (System_String_o *)StringLiteral_654/*")\n\n503 Auto retry count "*/,
                                        v213,
                                        0LL);
        this->fields._errorCode_5__11 = (struct System_String_o *)v159;
        goto LABEL_63;
      }
      goto LABEL_133;
    case 2:
      this->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_223;
      goto LABEL_42;
    case 3:
      this->fields.__1__state = -1;
      readData_5__5 = this->fields._readData_5__5;
      if ( (BYTE3(Crc32_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Crc32_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
      v85 = Crc32__Compute(readData_5__5, 0LL);
      this->fields.__2__current = 0LL;
      p__2__current = &this->fields.__2__current;
      *((_DWORD *)p__2__current + 24) = v85;
      sub_B16F98((BattleServantConfConponent_o *)p__2__current, 0LL, v87, v88, v89, v90, v91, v92);
      v93 = 4;
      goto LABEL_179;
    case 4:
      this->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_223;
      downloadingCRC = _4__this->fields.downloadingCRC;
      if ( this->fields._downloadCrc_5__13 != downloadingCRC && downloadingCRC )
      {
        v65 = sub_B17014(string___TypeInfo, 7LL, v2);
        if ( !v65 )
          goto LABEL_223;
        v72 = (System_String_array *)v65;
        v73 = StringLiteral_585/*"("*/;
        if ( StringLiteral_585/*"("*/ )
        {
          v73 = sub_B170BC(StringLiteral_585/*"("*/, v72->obj.klass->_1.element_class);
          if ( !v73 )
            goto LABEL_215;
          v74 = (System_Int32_array **)StringLiteral_585/*"("*/;
        }
        else
        {
          v74 = 0LL;
        }
        if ( !v72->max_length )
          goto LABEL_214;
        v72->m_Items[0] = (System_String_o *)v74;
        sub_B16F98((BattleServantConfConponent_o *)v72->m_Items, v74, v66, v67, v68, v69, v70, v71);
        v219 = (System_Int32_array **)_4__this->fields.downloadingURL;
        if ( !v219 || (v73 = sub_B170BC(_4__this->fields.downloadingURL, v72->obj.klass->_1.element_class)) != 0 )
        {
          if ( v72->max_length <= 1 )
            goto LABEL_214;
          v72->m_Items[1] = (System_String_o *)v219;
          sub_B16F98((BattleServantConfConponent_o *)&v72->m_Items[1], v219, v66, v214, v215, v216, v217, v218);
          v73 = StringLiteral_655/*")\n\nAssetBundle file check sum error\nlist crc ("*/;
          if ( StringLiteral_655/*")\n\nAssetBundle file check sum error\nlist crc ("*/ )
          {
            v73 = sub_B170BC(StringLiteral_655/*")\n\nAssetBundle file check sum error\nlist crc ("*/, v72->obj.klass->_1.element_class);
            if ( !v73 )
              goto LABEL_215;
            v74 = (System_Int32_array **)StringLiteral_655/*")\n\nAssetBundle file check sum error\nlist crc ("*/;
          }
          else
          {
            v74 = 0LL;
          }
          if ( v72->max_length <= 2 )
            goto LABEL_214;
          v72->m_Items[2] = (System_String_o *)v74;
          sub_B16F98((BattleServantConfConponent_o *)&v72->m_Items[2], v74, v66, v220, v221, v222, v223, v224);
          v73 = (__int64)System_UInt32__ToString((int)_4__this + 88, 0LL);
          v230 = (System_Int32_array **)v73;
          if ( !v73 || (v73 = sub_B170BC(v73, v72->obj.klass->_1.element_class)) != 0 )
          {
            if ( v72->max_length <= 3 )
              goto LABEL_214;
            v72->m_Items[3] = (System_String_o *)v230;
            sub_B16F98((BattleServantConfConponent_o *)&v72->m_Items[3], v230, v66, v225, v226, v227, v228, v229);
            v73 = StringLiteral_657/*")\nfile crc ("*/;
            if ( StringLiteral_657/*")\nfile crc ("*/ )
            {
              v73 = sub_B170BC(StringLiteral_657/*")\nfile crc ("*/, v72->obj.klass->_1.element_class);
              if ( !v73 )
                goto LABEL_215;
              v74 = (System_Int32_array **)StringLiteral_657/*")\nfile crc ("*/;
            }
            else
            {
              v74 = 0LL;
            }
            if ( v72->max_length <= 4 )
              goto LABEL_214;
            v72->m_Items[4] = (System_String_o *)v74;
            sub_B16F98((BattleServantConfConponent_o *)&v72->m_Items[4], v74, v66, v231, v232, v233, v234, v235);
            v73 = (__int64)System_UInt32__ToString((int)this + 120, 0LL);
            v241 = (System_Int32_array **)v73;
            if ( !v73 || (v73 = sub_B170BC(v73, v72->obj.klass->_1.element_class)) != 0 )
            {
              if ( v72->max_length <= 5 )
                goto LABEL_214;
              v72->m_Items[5] = (System_String_o *)v241;
              sub_B16F98((BattleServantConfConponent_o *)&v72->m_Items[5], v241, v66, v236, v237, v238, v239, v240);
              v73 = StringLiteral_651/*")"*/;
              if ( !StringLiteral_651/*")"*/ )
              {
                v74 = 0LL;
LABEL_131:
                if ( v72->max_length > 6 )
                {
                  v72->m_Items[6] = (System_String_o *)v74;
                  sub_B16F98((BattleServantConfConponent_o *)&v72->m_Items[6], v74, v66, v242, v243, v244, v245, v246);
                  v247 = System_String__Concat_43823856(v72, 0LL);
                  this->fields._errorCode_5__11 = v247;
                  sub_B16F98(
                    (BattleServantConfConponent_o *)&this->fields._errorCode_5__11,
                    (System_Int32_array **)v247,
                    v248,
                    v249,
                    v250,
                    v251,
                    v252,
                    v253);
                  this->fields._isCrcError_5__10 = 1;
                  goto LABEL_133;
                }
LABEL_214:
                sub_B17100(v73, v74, v66);
                sub_B170A0();
              }
              v73 = sub_B170BC(StringLiteral_651/*")"*/, v72->obj.klass->_1.element_class);
              if ( v73 )
              {
                v74 = (System_Int32_array **)StringLiteral_651/*")"*/;
                goto LABEL_131;
              }
            }
          }
        }
LABEL_215:
        sub_B170F4(v73);
        sub_B170A0();
      }
      Parent = System_IO_Directory__GetParent(this->fields._dlFilePath_5__2, 0LL);
      v167 = Parent;
      if ( !Parent )
        sub_B170D4();
      if ( (((__int64 (__fastcall *)(System_IO_DirectoryInfo_o *, Il2CppMethodPointer))Parent->klass->vtable._9_get_Exists.method)(
              Parent,
              Parent->klass->vtable._10_Delete.methodPtr) & 1) == 0 )
      {
        v168 = (System_String_o *)((__int64 (__fastcall *)(System_IO_DirectoryInfo_o *, Il2CppMethodPointer))v167->klass->vtable._7_get_FullName.method)(
                                    v167,
                                    v167->klass->vtable._8_get_Name.methodPtr);
        System_IO_Directory__CreateDirectory(v168, 0LL);
      }
      v169 = MovieFileMerge__GetLocalFolderPath(_4__this, 0LL);
      if ( (BYTE3(CommonServicePluginScript_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CommonServicePluginScript_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CommonServicePluginScript_TypeInfo);
      }
      FreeSize = CommonServicePluginScript__GetFreeSize(v169, 0LL);
      if ( FreeSize >= 1 )
      {
        v172 = ManagerConfig_TypeInfo;
        if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ManagerConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
          v172 = ManagerConfig_TypeInfo;
        }
        if ( FreeSize < v172->static_fields->LIMIT_FREE_SIZE )
        {
          v368 = sub_B17000(&System_IO_IOException_TypeInfo, v170);
          v373 = (System_IO_IOException_o *)sub_B170CC(v368, v369, v370, v371, v372);
          v375 = (System_String_o *)sub_B17000(&StringLiteral_5301/*"Disk full"*/, v374);
          System_IO_IOException___ctor_38265584(v373, v375, 0LL);
          sub_B17000(&Method_MovieFileMerge__Download_d__41_MoveNext__, v376);
          sub_B170A0();
        }
      }
      if ( System_IO_File__Exists(this->fields._dlFilePath_5__2, 0LL) )
        System_IO_File__Delete(this->fields._dlFilePath_5__2, 0LL);
      ++_4__this->fields.downloadProgress;
      System_IO_File__WriteAllBytes(this->fields._dlFilePath_5__2, this->fields._readData_5__5, 0LL);
      this->fields._isDownload_5__4 = 0;
LABEL_133:
      method = (const MethodInfo *)this->fields._errorCode_5__11;
      if ( method )
      {
        MovieFileMerge__AssetLoadLogError(_4__this, (System_String_o *)method, 0LL);
        v254 = ManagerConfig_TypeInfo;
        if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ManagerConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
          v254 = ManagerConfig_TypeInfo;
        }
        if ( v254->static_fields->UseDebugCommand )
        {
          _4__this->fields.isErrorDialog = 1;
          Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          errorCode_5__11 = this->fields._errorCode_5__11;
          v257 = (CommonUI_o *)Instance;
          v262 = (ErrorDialog_ClickDelegate_o *)sub_B170CC(ErrorDialog_ClickDelegate_TypeInfo, v258, v259, v260, v261);
          ErrorDialog_ClickDelegate___ctor(
            v262,
            (Il2CppObject *)_4__this,
            Method_MovieFileMerge_EndWarningDialog__,
            0LL);
          if ( !v257 )
            goto LABEL_223;
          effectDistance.fields.value = 0LL;
          *(_DWORD *)&effectDistance.fields.has_value = 0;
          CommonUI__OpenWarningDialog(
            v257,
            (System_String_o *)StringLiteral_15682/*"[FFFF80]Download error for debug"*/,
            errorCode_5__11,
            v262,
            1,
            0,
            -1.0,
            1,
            effectDistance,
            0LL);
LABEL_140:
          if ( _4__this->fields.isErrorDialog )
          {
            v263 = (UnityEngine_WaitForEndOfFrame_o *)sub_B170CC(
                                                        UnityEngine_WaitForEndOfFrame_TypeInfo,
                                                        method,
                                                        v2,
                                                        v3,
                                                        v4);
            UnityEngine_WaitForEndOfFrame___ctor(v263, 0LL);
            this->fields.__2__current = (Il2CppObject *)v263;
            p__2__current = &this->fields.__2__current;
            sub_B16F98(
              (BattleServantConfConponent_o *)p__2__current,
              (System_Int32_array **)v263,
              v264,
              v265,
              v266,
              v267,
              v268,
              v269);
            v93 = 5;
            goto LABEL_179;
          }
        }
        if ( this->fields._isAutoRetry_5__9 )
        {
          autoRetryCount_5__3 = this->fields._autoRetryCount_5__3;
          v271 = ManagerConfig_TypeInfo;
          if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !ManagerConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
            v271 = ManagerConfig_TypeInfo;
          }
          DOWNLOAD_RETRY_DELAY_TIME = v271->static_fields->DOWNLOAD_RETRY_DELAY_TIME;
          v273 = (UnityEngine_WaitForSeconds_o *)sub_B170CC(UnityEngine_WaitForSeconds_TypeInfo, method, v2, v3, v4);
          UnityEngine_WaitForSeconds___ctor(v273, DOWNLOAD_RETRY_DELAY_TIME * (float)autoRetryCount_5__3, 0LL);
          this->fields.__2__current = (Il2CppObject *)v273;
          p__2__current = &this->fields.__2__current;
          sub_B16F98(
            (BattleServantConfConponent_o *)p__2__current,
            (System_Int32_array **)v273,
            v274,
            v275,
            v276,
            v277,
            v278,
            v279);
          v93 = 6;
          goto LABEL_179;
        }
        v280 = (Il2CppObject *)this->fields._errorCode_5__11;
        if ( this->fields._isCrcError_5__10 )
        {
          if ( (BYTE3(UnityEngine_Debug_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
          }
          UnityEngine_Debug__LogError(v280, 0LL);
        }
        else
        {
          MovieFileMerge__AssetLoadLogError(_4__this, this->fields._errorCode_5__11, 0LL);
          _4__this->fields.isErrorDialog = 1;
          if ( (BYTE3(ManagementManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !ManagementManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
          }
          if ( !byte_40F7DF6 )
          {
            sub_B16FFC(&ManagementManager_TypeInfo, v345);
            byte_40F7DF6 = 1;
          }
          v346 = ManagementManager_TypeInfo;
          if ( (BYTE3(ManagementManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !ManagementManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
            v346 = ManagementManager_TypeInfo;
          }
          isDuringStartup = v346->static_fields->isDuringStartup;
          v348 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          errorLocalizeCode_5__12 = this->fields._errorLocalizeCode_5__12;
          v350 = (CommonUI_o *)v348;
          v351 = (System_String_o *)StringLiteral_1/*""*/;
          if ( isDuringStartup )
          {
            if ( errorLocalizeCode_5__12 )
              v352 = this->fields._errorLocalizeCode_5__12;
            else
              v352 = (System_String_o *)StringLiteral_1743/*"ASSET_LOADER_ERROR_BOOT_RETRY_MESSAGE"*/;
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v353 = LocalizationManager__Get(v352, 0LL);
            v358 = (ErrorDialog_ClickDelegate_o *)sub_B170CC(ErrorDialog_ClickDelegate_TypeInfo, v354, v355, v356, v357);
            ErrorDialog_ClickDelegate___ctor(
              v358,
              (Il2CppObject *)_4__this,
              Method_MovieFileMerge_EndRetryDialog__,
              0LL);
            if ( !v350 )
              goto LABEL_223;
            CommonUI__OpenRetryBootDialog(v350, v351, v353, v358, 1, 0LL);
          }
          else
          {
            if ( errorLocalizeCode_5__12 )
              v361 = this->fields._errorLocalizeCode_5__12;
            else
              v361 = (System_String_o *)StringLiteral_1744/*"ASSET_LOADER_ERROR_TIME_OVER_MESSAGE"*/;
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v362 = LocalizationManager__Get(v361, 0LL);
            v367 = (ErrorDialog_ClickDelegate_o *)sub_B170CC(ErrorDialog_ClickDelegate_TypeInfo, v363, v364, v365, v366);
            ErrorDialog_ClickDelegate___ctor(
              v367,
              (Il2CppObject *)_4__this,
              Method_MovieFileMerge_EndRetryDialog__,
              0LL);
            if ( !v350 )
              goto LABEL_223;
            CommonUI__OpenRetryDialog(v350, v351, v362, v367, 1, 0LL);
          }
LABEL_35:
          if ( _4__this->fields.isErrorDialog )
          {
            v94 = (UnityEngine_WaitForEndOfFrame_o *)sub_B170CC(
                                                       UnityEngine_WaitForEndOfFrame_TypeInfo,
                                                       method,
                                                       v2,
                                                       v3,
                                                       v4);
            UnityEngine_WaitForEndOfFrame___ctor(v94, 0LL);
            this->fields.__2__current = (Il2CppObject *)v94;
            p__2__current = &this->fields.__2__current;
            sub_B16F98(
              (BattleServantConfConponent_o *)p__2__current,
              (System_Int32_array **)v94,
              v95,
              v96,
              v97,
              v98,
              v99,
              v100);
            v93 = 7;
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
      if ( !byte_40F7166 )
      {
        sub_B16FFC(&NetworkManager_TypeInfo, method);
        byte_40F7166 = 1;
      }
      v281 = NetworkManager_TypeInfo;
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        v281 = NetworkManager_TypeInfo;
      }
      if ( v281->static_fields->isRebootBlock )
      {
        if ( !_4__this )
          goto LABEL_223;
        v284 = _4__this->fields.loader;
        v283 = (BattleServantConfConponent_o *)&_4__this->fields.loader;
        v282 = v284;
        if ( !v284 )
          goto LABEL_223;
        UnityEngine_Networking_UnityWebRequest__Dispose(v282, 0LL);
        v283->klass = 0LL;
        sub_B16F98(v283, 0LL, v285, v286, v287, v288, v289, v290);
        this->fields._readData_5__5 = 0LL;
        v297 = &this->fields._readData_5__5;
      }
      else
      {
        if ( !_4__this )
          goto LABEL_223;
        p_isDownload_5__4 = &this->fields._isDownload_5__4;
        v298 = &_4__this->fields.loader;
        v151 = _4__this->fields.loader;
        if ( this->fields._isDownload_5__4 )
        {
          if ( !v151 )
            goto LABEL_223;
          UnityEngine_Networking_UnityWebRequest__Dispose(v151, 0LL);
          *v298 = 0LL;
          sub_B16F98((BattleServantConfConponent_o *)&_4__this->fields.loader, 0LL, v299, v300, v301, v302, v303, v304);
          this->fields._readData_5__5 = 0LL;
          p_readData_5__5 = (BattleServantConfConponent_o *)&this->fields._readData_5__5;
          sub_B16F98(
            (BattleServantConfConponent_o *)&this->fields._readData_5__5,
            0LL,
            v305,
            v306,
            v307,
            v308,
            v309,
            v310);
          if ( !this->fields._isCrcError_5__10 )
          {
LABEL_177:
            this->fields._wait_5__8 = 0LL;
            sub_B16F98((BattleServantConfConponent_o *)&this->fields._wait_5__8, 0LL, v2, v3, v4, v5, v6, v7);
            this->fields._errorCode_5__11 = 0LL;
            sub_B16F98(
              (BattleServantConfConponent_o *)&this->fields._errorCode_5__11,
              0LL,
              v320,
              v321,
              v322,
              v323,
              v324,
              v325);
            this->fields._errorLocalizeCode_5__12 = 0LL;
            sub_B16F98(
              (BattleServantConfConponent_o *)&this->fields._errorLocalizeCode_5__12,
              0LL,
              v326,
              v327,
              v328,
              v329,
              v330,
              v331);
            do
            {
              p_readData_5__5->klass = 0LL;
              sub_B16F98(p_readData_5__5, 0LL, v332, v333, v334, v335, v336, v337);
LABEL_218:
              p_readData_5__5->klass = 0LL;
              sub_B16F98(p_readData_5__5, 0LL, v56, v57, v58, v59, v60, v61);
            }
            while ( !*p_isDownload_5__4 );
            v377 = (System_Int32_array **)UnityEngine_Networking_UnityWebRequest__Get(
                                            _4__this->fields.downloadingURL,
                                            0LL);
            _4__this->fields.loader = (struct UnityEngine_Networking_UnityWebRequest_o *)v377;
            sub_B16F98(
              (BattleServantConfConponent_o *)&_4__this->fields.loader,
              v377,
              v378,
              v379,
              v380,
              v381,
              v382,
              v383);
            v384 = _4__this->fields.loader;
            if ( v384 )
            {
              UnityEngine_Networking_UnityWebRequest__SendWebRequest(v384, 0LL);
              this->fields.__2__current = 0LL;
              v385 = &this->fields.__2__current;
              sub_B16F98((BattleServantConfConponent_o *)v385, 0LL, v386, v387, v388, v389, v390, v391);
              LOBYTE(v151) = 1;
              *((_DWORD *)v385 - 2) = 1;
              return (char)v151;
            }
            goto LABEL_223;
          }
          if ( !this->fields._errorCode_5__11 )
            goto LABEL_178;
          v311 = ManagerConfig_TypeInfo;
          if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !ManagerConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
            v311 = ManagerConfig_TypeInfo;
          }
          if ( !v311->static_fields->UseDebugCommand )
            goto LABEL_178;
          _4__this->fields.isErrorDialog = 1;
          v312 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v313 = this->fields._errorCode_5__11;
          v314 = (CommonUI_o *)v312;
          v319 = (ErrorDialog_ClickDelegate_o *)sub_B170CC(ErrorDialog_ClickDelegate_TypeInfo, v315, v316, v317, v318);
          ErrorDialog_ClickDelegate___ctor(
            v319,
            (Il2CppObject *)_4__this,
            Method_MovieFileMerge_EndWarningDialog__,
            0LL);
          if ( !v314 )
            goto LABEL_223;
          effectDistancea.fields.value = 0LL;
          *(_DWORD *)&effectDistancea.fields.has_value = 0;
          CommonUI__OpenWarningDialog(
            v314,
            (System_String_o *)StringLiteral_15682/*"[FFFF80]Download error for debug"*/,
            v313,
            v319,
            1,
            0,
            -1.0,
            1,
            effectDistancea,
            0LL);
LABEL_60:
          if ( _4__this->fields.isErrorDialog )
          {
            v152 = (UnityEngine_WaitForEndOfFrame_o *)sub_B170CC(
                                                        UnityEngine_WaitForEndOfFrame_TypeInfo,
                                                        method,
                                                        v2,
                                                        v3,
                                                        v4);
            UnityEngine_WaitForEndOfFrame___ctor(v152, 0LL);
            this->fields.__2__current = (Il2CppObject *)v152;
            p__2__current = &this->fields.__2__current;
            sub_B16F98(
              (BattleServantConfConponent_o *)p__2__current,
              (System_Int32_array **)v152,
              v153,
              v154,
              v155,
              v156,
              v157,
              v158);
            v93 = 8;
          }
          else
          {
LABEL_178:
            v338 = (UnityEngine_WaitForSeconds_o *)sub_B170CC(UnityEngine_WaitForSeconds_TypeInfo, method, v2, v3, v4);
            UnityEngine_WaitForSeconds___ctor(v338, 1.0, 0LL);
            this->fields.__2__current = (Il2CppObject *)v338;
            p__2__current = &this->fields.__2__current;
            sub_B16F98(
              (BattleServantConfConponent_o *)p__2__current,
              (System_Int32_array **)v338,
              v339,
              v340,
              v341,
              v342,
              v343,
              v344);
            v93 = 9;
          }
LABEL_179:
          *((_DWORD *)p__2__current - 2) = v93;
LABEL_180:
          LOBYTE(v151) = 1;
          return (char)v151;
        }
        if ( !v151 )
          return (char)v151;
        UnityEngine_Networking_UnityWebRequest__Dispose(v151, 0LL);
        v297 = (struct System_Byte_array **)&_4__this->fields.loader;
        *v298 = 0LL;
      }
      sub_B16F98((BattleServantConfConponent_o *)v297, 0LL, v291, v292, v293, v294, v295, v296);
LABEL_165:
      LOBYTE(v151) = 0;
      return (char)v151;
    case 5:
      this->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_223;
      goto LABEL_140;
    case 6:
      this->fields.__1__state = -1;
      goto LABEL_152;
    case 7:
      this->fields.__1__state = -1;
      if ( _4__this )
        goto LABEL_35;
      goto LABEL_223;
    case 8:
      this->fields.__1__state = -1;
      if ( _4__this )
        goto LABEL_60;
      goto LABEL_223;
    case 9:
      this->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_223;
      _4__this->fields.isErrorDialog = 1;
      if ( (BYTE3(ManagementManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ManagementManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
      }
      if ( !byte_40F7DF6 )
      {
        sub_B16FFC(&ManagementManager_TypeInfo, method);
        byte_40F7DF6 = 1;
      }
      v75 = ManagementManager_TypeInfo;
      if ( (BYTE3(ManagementManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ManagementManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
        v75 = ManagementManager_TypeInfo;
      }
      v76 = v75->static_fields->isDuringStartup;
      v77 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( v76 )
      {
        if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v78 = LocalizationManager__Get((System_String_o *)StringLiteral_1743/*"ASSET_LOADER_ERROR_BOOT_RETRY_MESSAGE"*/, 0LL);
        v83 = (ErrorDialog_ClickDelegate_o *)sub_B170CC(ErrorDialog_ClickDelegate_TypeInfo, v79, v80, v81, v82);
        ErrorDialog_ClickDelegate___ctor(v83, (Il2CppObject *)_4__this, Method_MovieFileMerge_EndRetryDialog__, 0LL);
        if ( !v77 )
          goto LABEL_223;
        CommonUI__OpenRetryBootDialog(v77, (System_String_o *)StringLiteral_1/*""*/, v78, v83, 1, 0LL);
      }
      else
      {
        if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v173 = LocalizationManager__Get((System_String_o *)StringLiteral_1744/*"ASSET_LOADER_ERROR_TIME_OVER_MESSAGE"*/, 0LL);
        v178 = (ErrorDialog_ClickDelegate_o *)sub_B170CC(ErrorDialog_ClickDelegate_TypeInfo, v174, v175, v176, v177);
        ErrorDialog_ClickDelegate___ctor(v178, (Il2CppObject *)_4__this, Method_MovieFileMerge_EndRetryDialog__, 0LL);
        if ( !v77 )
          goto LABEL_223;
        CommonUI__OpenRetryDialog(v77, (System_String_o *)StringLiteral_1/*""*/, v173, v178, 1, 0LL);
      }
LABEL_83:
      if ( _4__this->fields.isErrorDialog )
      {
        v179 = (UnityEngine_WaitForEndOfFrame_o *)sub_B170CC(UnityEngine_WaitForEndOfFrame_TypeInfo, method, v2, v3, v4);
        UnityEngine_WaitForEndOfFrame___ctor(v179, 0LL);
        this->fields.__2__current = (Il2CppObject *)v179;
        p__2__current = &this->fields.__2__current;
        sub_B16F98(
          (BattleServantConfConponent_o *)p__2__current,
          (System_Int32_array **)v179,
          v180,
          v181,
          v182,
          v183,
          v184,
          v185);
        v93 = 10;
        goto LABEL_179;
      }
      p_readData_5__5 = (BattleServantConfConponent_o *)&this->fields._readData_5__5;
      p_isDownload_5__4 = &this->fields._isDownload_5__4;
      goto LABEL_177;
    case 0xA:
      this->fields.__1__state = -1;
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
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  __int64 v6; // x4
  System_NotSupportedException_o *v7; // x0
  __int64 v8; // x1

  v2 = sub_B17000(&System_NotSupportedException_TypeInfo, method);
  v7 = (System_NotSupportedException_o *)sub_B170CC(v2, v3, v4, v5, v6);
  System_NotSupportedException___ctor(v7, 0LL);
  sub_B17000(&Method_MovieFileMerge__Download_d__41_System_Collections_IEnumerator_Reset__, v8);
  sub_B170A0();
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
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  FileMergeAndSplit_Merge_o *v18; // x23
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  FileMergeAndSplit_Merge_o *mergeClass; // x21
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  __int64 v29; // x4
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v30; // x22
  Il2CppObject *v31; // x0
  Il2CppObject **p__2__current; // x19
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  bool result; // w0
  struct FileMergeAndSplit_Merge_o *v40; // x8
  System_Collections_Generic_Dictionary_string__uint__o *AllDownLoadFilePathCRCDictionary; // x0
  System_String_o *v42; // x21
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x0
  System_Collections_Generic_List_uint__o *v44; // x22
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x3
  __int64 v48; // x4
  FileMergeAndSplit_CRCChecker_o *v49; // x23
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  FileMergeAndSplit_CRCChecker_o *crcCheckerClass; // x0
  Il2CppObject *v57; // x0
  Il2CppObject **v58; // x19
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7

  if ( (byte_40F863D & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_Exception___ctor__, method);
    sub_B16FFC(&System_Action_Exception__TypeInfo, v3);
    sub_B16FFC(&FileMergeAndSplit_CRCChecker_TypeInfo, v4);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__uint__get_Values__, v5);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToList_uint___, v6);
    sub_B16FFC(&FileMergeAndSplit_Merge_TypeInfo, v7);
    sub_B16FFC(&Method_MovieFileMerge__Merge_b__35_0__, v8);
    byte_40F863D = 1;
  }
  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  if ( _1__state == 2 )
  {
    this->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_22;
    if ( MovieFileMerge__IsCRCMatch(_4__this, 0LL) )
    {
      if ( System_IO_Directory__Exists(_4__this->fields.outputSplitFileFolder, 0LL) )
        System_IO_Directory__Delete_43683028(_4__this->fields.outputSplitFileFolder, 1, 0LL);
      if ( System_IO_File__Exists(_4__this->fields.outputMergeFileCRC, 0LL) )
        System_IO_File__Delete(_4__this->fields.outputMergeFileCRC, 0LL);
    }
    return 0;
  }
  if ( _1__state != 1 )
  {
    if ( !_1__state )
    {
      this->fields.__1__state = -1;
      if ( _4__this )
      {
        _4__this->fields.mergeProgress = 0.0;
        SplitFileList = MovieFileMerge__GetSplitFileList(_4__this, 0LL);
        outputMergeFile = _4__this->fields.outputMergeFile;
        v13 = SplitFileList;
        v18 = (FileMergeAndSplit_Merge_o *)sub_B170CC(FileMergeAndSplit_Merge_TypeInfo, v14, v15, v16, v17);
        FileMergeAndSplit_Merge___ctor(v18, v13, outputMergeFile, 0LL);
        _4__this->fields.mergeClass = v18;
        sub_B16F98(
          (BattleServantConfConponent_o *)&_4__this->fields.mergeClass,
          (System_Int32_array **)v18,
          v19,
          v20,
          v21,
          v22,
          v23,
          v24);
        mergeClass = _4__this->fields.mergeClass;
        v30 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B170CC(
                                                                                     System_Action_Exception__TypeInfo,
                                                                                     v26,
                                                                                     v27,
                                                                                     v28,
                                                                                     v29);
        System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
          v30,
          (Il2CppObject *)_4__this,
          Method_MovieFileMerge__Merge_b__35_0__,
          (const MethodInfo_24B7310 *)Method_System_Action_Exception___ctor__);
        if ( mergeClass )
        {
          v31 = (Il2CppObject *)FileMergeAndSplit_Merge__Run(mergeClass, (System_Action_Exception__o *)v30, 0LL);
          this->fields.__2__current = v31;
          p__2__current = &this->fields.__2__current;
          sub_B16F98(
            (BattleServantConfConponent_o *)p__2__current,
            (System_Int32_array **)v31,
            v33,
            v34,
            v35,
            v36,
            v37,
            v38);
          result = 1;
          *((_DWORD *)p__2__current - 2) = 1;
          return result;
        }
      }
LABEL_22:
      sub_B170D4();
    }
    return 0;
  }
  this->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_22;
  v40 = _4__this->fields.mergeClass;
  if ( !v40 )
    goto LABEL_22;
  if ( v40->fields.isError )
    return 0;
  AllDownLoadFilePathCRCDictionary = _4__this->fields.AllDownLoadFilePathCRCDictionary;
  if ( !AllDownLoadFilePathCRCDictionary )
    goto LABEL_22;
  v42 = _4__this->fields.outputMergeFile;
  Values = System_Collections_Generic_Dictionary_string__uint___get_Values(
             AllDownLoadFilePathCRCDictionary,
             (const MethodInfo_2DB31AC *)Method_System_Collections_Generic_Dictionary_string__uint__get_Values__);
  v44 = (System_Collections_Generic_List_uint__o *)System_Linq_Enumerable__ToList_uint_(
                                                     (System_Collections_Generic_IEnumerable_TSource__o *)Values,
                                                     (const MethodInfo_19C7BD0 *)Method_System_Linq_Enumerable_ToList_uint___);
  v49 = (FileMergeAndSplit_CRCChecker_o *)sub_B170CC(FileMergeAndSplit_CRCChecker_TypeInfo, v45, v46, v47, v48);
  FileMergeAndSplit_CRCChecker___ctor(v49, v42, v44, 0LL);
  _4__this->fields.crcCheckerClass = v49;
  sub_B16F98(
    (BattleServantConfConponent_o *)&_4__this->fields.crcCheckerClass,
    (System_Int32_array **)v49,
    v50,
    v51,
    v52,
    v53,
    v54,
    v55);
  crcCheckerClass = _4__this->fields.crcCheckerClass;
  if ( !crcCheckerClass )
    goto LABEL_22;
  v57 = (Il2CppObject *)FileMergeAndSplit_CRCChecker__Run(crcCheckerClass, 0LL);
  this->fields.__2__current = v57;
  v58 = &this->fields.__2__current;
  sub_B16F98((BattleServantConfConponent_o *)v58, (System_Int32_array **)v57, v59, v60, v61, v62, v63, v64);
  *((_DWORD *)v58 - 2) = 2;
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
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  __int64 v6; // x4
  System_NotSupportedException_o *v7; // x0
  __int64 v8; // x1

  v2 = sub_B17000(&System_NotSupportedException_TypeInfo, method);
  v7 = (System_NotSupportedException_o *)sub_B170CC(v2, v3, v4, v5, v6);
  System_NotSupportedException___ctor(v7, 0LL);
  sub_B17000(&Method_MovieFileMerge__Merge_d__35_System_Collections_IEnumerator_Reset__, v8);
  sub_B170A0();
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
  struct MovieFileMerge___c__DisplayClass31_0_o **p__8__1; // x20
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  UnityEngine_UI_Dropdown_DropdownItem_o *UIAtlas; // x21
  UnityEngine_GameObject_o *v27; // x0
  struct MovieFileMerge___c__DisplayClass31_0_o *v28; // x21
  System_Int32_array **Component_srcLineSprite; // x0
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x3
  __int64 v39; // x4
  CRIMoviePlayer_o *player; // x21
  System_String_o *filePath; // x22
  BgmManager_c *v42; // x0
  Il2CppObject *v43; // x24
  float masterVolume; // s8
  System_Action_o *v45; // x23
  CRIMoviePlayer_o *v46; // x0
  Il2CppObject **p__2__current; // x19
  bool result; // w0

  if ( (byte_40F863E & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&BgmManager_TypeInfo, v9);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_CRIMoviePlayer___, v10);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, v11);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v12);
    sub_B16FFC(&Method_UnityEngine_Resources_Load_GameObject___, v13);
    sub_B16FFC(&Method_MovieFileMerge___c__DisplayClass31_0__PlayCRIMovie_b__0__, v14);
    sub_B16FFC(&MovieFileMerge___c__DisplayClass31_0_TypeInfo, v15);
    sub_B16FFC(&StringLiteral_3423/*"CRIMovie/CRIMoviePlayerWithPanel"*/, v16);
    byte_40F863E = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    p__8__1 = &this->fields.__8__1;
    this->fields.__1__state = -1;
  }
  else
  {
    if ( _1__state )
      return 0;
    this->fields.__1__state = -1;
    v18 = (Il2CppObject *)sub_B170CC(MovieFileMerge___c__DisplayClass31_0_TypeInfo, method, v2, v3, v4);
    System_Object___ctor(v18, 0LL);
    p__8__1 = &this->fields.__8__1;
    this->fields.__8__1 = (struct MovieFileMerge___c__DisplayClass31_0_o *)v18;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.__8__1,
      (System_Int32_array **)v18,
      v20,
      v21,
      v22,
      v23,
      v24,
      v25);
    UIAtlas = (UnityEngine_UI_Dropdown_DropdownItem_o *)UnityEngine_Resources__Load_UIAtlas_(
                                                          (System_String_o *)StringLiteral_3423/*"CRIMovie/CRIMoviePlayerWithPanel"*/,
                                                          (const MethodInfo_19E149C *)Method_UnityEngine_Resources_Load_GameObject___);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v27 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                        UIAtlas,
                                        (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v27 )
      goto LABEL_29;
    v28 = *p__8__1;
    Component_srcLineSprite = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                       v27,
                                                       (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_CRIMoviePlayer___);
    if ( !v28 )
      goto LABEL_29;
    v28->fields.player = (struct CRIMoviePlayer_o *)Component_srcLineSprite;
    sub_B16F98((BattleServantConfConponent_o *)&v28->fields, Component_srcLineSprite, v30, v31, v32, v33, v34, v35);
    if ( !*p__8__1 )
      goto LABEL_29;
    (*p__8__1)->fields.wait = 1;
    if ( !*p__8__1 )
      goto LABEL_29;
    player = (*p__8__1)->fields.player;
    filePath = this->fields.filePath;
    if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BgmManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
    if ( !byte_40F6390 )
    {
      sub_B16FFC(&BgmManager_TypeInfo, v36);
      byte_40F6390 = 1;
    }
    v42 = BgmManager_TypeInfo;
    if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BgmManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
      v42 = BgmManager_TypeInfo;
    }
    v43 = (Il2CppObject *)*p__8__1;
    masterVolume = v42->static_fields->masterVolume;
    v45 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v36, v37, v38, v39);
    System_Action___ctor(v45, v43, Method_MovieFileMerge___c__DisplayClass31_0__PlayCRIMovie_b__0__, 0LL);
    if ( !player
      || (CRIMoviePlayer__Initialize(player, filePath, filePath, masterVolume, 1, 0LL, v45, 1, 0LL, 0, 0, 1, 0LL),
          !*p__8__1)
      || (v46 = (*p__8__1)->fields.player) == 0LL )
    {
LABEL_29:
      sub_B170D4();
    }
    CRIMoviePlayer__MoviePlay(v46, 1, 1, 1, 0LL);
  }
  if ( !*p__8__1 )
    goto LABEL_29;
  if ( (*p__8__1)->fields.wait )
  {
    this->fields.__2__current = 0LL;
    p__2__current = &this->fields.__2__current;
    sub_B16F98((BattleServantConfConponent_o *)p__2__current, 0LL, v2, v3, v4, v5, v6, v7);
    result = 1;
    *((_DWORD *)p__2__current - 2) = 1;
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
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  __int64 v6; // x4
  System_NotSupportedException_o *v7; // x0
  __int64 v8; // x1

  v2 = sub_B17000(&System_NotSupportedException_TypeInfo, method);
  v7 = (System_NotSupportedException_o *)sub_B170CC(v2, v3, v4, v5, v6);
  System_NotSupportedException___ctor(v7, 0LL);
  sub_B17000(&Method_MovieFileMerge__PlayCRIMovie_d__31_System_Collections_IEnumerator_Reset__, v8);
  sub_B170A0();
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
      sub_B170D4();
    v6 = (Il2CppObject *)MovieFileMerge__PlayMP4_21063948(_4__this, _4__this->fields.outputMergeFile, 0, 0LL);
    this->fields.__2__current = v6;
    sub_B16F98(
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
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  __int64 v6; // x4
  System_NotSupportedException_o *v7; // x0
  __int64 v8; // x1

  v2 = sub_B17000(&System_NotSupportedException_TypeInfo, method);
  v7 = (System_NotSupportedException_o *)sub_B170CC(v2, v3, v4, v5, v6);
  System_NotSupportedException___ctor(v7, 0LL);
  sub_B17000(&Method_MovieFileMerge__PlayMP4_d__29_System_Collections_IEnumerator_Reset__, v8);
  sub_B170A0();
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
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  System_String_o *filePath; // x0
  MovieFileMerge_o *_4__this; // x20
  bool result; // w0
  UnityEngine_WaitForEndOfFrame_o *v9; // x20
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  int32_t v16; // w8
  UnityEngine_WaitForEndOfFrame_o *v17; // x20
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  Il2CppObject *v24; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7

  if ( (byte_40F863F & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_WaitForEndOfFrame_TypeInfo, method);
    byte_40F863F = 1;
  }
  switch ( this->fields.__1__state )
  {
    case 0:
      filePath = this->fields.filePath;
      _4__this = this->fields.__4__this;
      this->fields.__1__state = -1;
      if ( System_String__IsNullOrEmpty(filePath, 0LL) )
        goto LABEL_5;
      if ( !_4__this )
        sub_B170D4();
      v24 = (Il2CppObject *)MovieFileMerge__PlayCRIMovie(_4__this, this->fields.filePath, 0LL);
      this->fields.__2__current = v24;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.__2__current,
        (System_Int32_array **)v24,
        v25,
        v26,
        v27,
        v28,
        v29,
        v30);
      result = 1;
      this->fields.__1__state = 1;
      break;
    case 1:
      this->fields.__1__state = -1;
      v17 = (UnityEngine_WaitForEndOfFrame_o *)sub_B170CC(UnityEngine_WaitForEndOfFrame_TypeInfo, method, v2, v3, v4);
      UnityEngine_WaitForEndOfFrame___ctor(v17, 0LL);
      this->fields.__2__current = (Il2CppObject *)v17;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.__2__current,
        (System_Int32_array **)v17,
        v18,
        v19,
        v20,
        v21,
        v22,
        v23);
      v16 = 2;
      goto LABEL_9;
    case 2:
      this->fields.__1__state = -1;
      v9 = (UnityEngine_WaitForEndOfFrame_o *)sub_B170CC(UnityEngine_WaitForEndOfFrame_TypeInfo, method, v2, v3, v4);
      UnityEngine_WaitForEndOfFrame___ctor(v9, 0LL);
      this->fields.__2__current = (Il2CppObject *)v9;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.__2__current,
        (System_Int32_array **)v9,
        v10,
        v11,
        v12,
        v13,
        v14,
        v15);
      v16 = 3;
LABEL_9:
      this->fields.__1__state = v16;
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
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  __int64 v6; // x4
  System_NotSupportedException_o *v7; // x0
  __int64 v8; // x1

  v2 = sub_B17000(&System_NotSupportedException_TypeInfo, method);
  v7 = (System_NotSupportedException_o *)sub_B170CC(v2, v3, v4, v5, v6);
  System_NotSupportedException___ctor(v7, 0LL);
  sub_B17000(&Method_MovieFileMerge__PlayMP4_d__30_System_Collections_IEnumerator_Reset__, v8);
  sub_B170A0();
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
    sub_B170D4();
  CRIMoviePlayer__Dispose(player, 0LL);
  this->fields.wait = 0;
}