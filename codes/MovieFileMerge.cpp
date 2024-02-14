void __fastcall MovieFileMerge___ctor(MovieFileMerge_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  System_Collections_Generic_Dictionary_string__uint__o *v5; // x20
  __int64 v6; // x1
  __int64 v7; // x2
  System_Collections_Generic_Dictionary_string__uint__o *v8; // x20

  if ( (byte_42123A8 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__uint___ctor__, method);
    sub_B0D8A4(&System_Collections_Generic_Dictionary_string__uint__TypeInfo, v4);
    byte_42123A8 = 1;
  }
  v5 = (System_Collections_Generic_Dictionary_string__uint__o *)sub_B0D974(
                                                                  System_Collections_Generic_Dictionary_string__uint__TypeInfo,
                                                                  method,
                                                                  v2);
  System_Collections_Generic_Dictionary_string__uint____ctor(
    v5,
    (const MethodInfo_2E752C0 *)Method_System_Collections_Generic_Dictionary_string__uint___ctor__);
  this->fields.AllDownLoadFilePathCRCDictionary = v5;
  sub_B0D840(&this->fields.AllDownLoadFilePathCRCDictionary, v5);
  v8 = (System_Collections_Generic_Dictionary_string__uint__o *)sub_B0D974(
                                                                  System_Collections_Generic_Dictionary_string__uint__TypeInfo,
                                                                  v6,
                                                                  v7);
  System_Collections_Generic_Dictionary_string__uint____ctor(
    v8,
    (const MethodInfo_2E752C0 *)Method_System_Collections_Generic_Dictionary_string__uint___ctor__);
  this->fields.RequireDownLoadFilePathCRCDictionary = v8;
  sub_B0D840(&this->fields.RequireDownLoadFilePathCRCDictionary, v8);
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
  __int64 v19; // x21
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x8
  unsigned __int64 v29; // x22
  signed __int64 v30; // x23
  __int64 v31; // x0
  Il2CppObject *v32; // x0
  __int64 v33; // x0

  if ( (byte_42123A6 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Debug_TypeInfo, errorCode);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__, v5);
    sub_B0D8A4(&string___TypeInfo, v6);
    sub_B0D8A4(&StringLiteral_14151/*"The request timed out."*/, v7);
    sub_B0D8A4(&StringLiteral_14083/*"The network connection was lost."*/, v8);
    sub_B0D8A4(&StringLiteral_4259/*"Connection reset by peer"*/, v9);
    sub_B0D8A4(&StringLiteral_4621/*"DLErrorType"*/, v10);
    sub_B0D8A4(&StringLiteral_4620/*"DLErrorAsset"*/, v11);
    sub_B0D8A4(&StringLiteral_4258/*"Connection refused"*/, v12);
    sub_B0D8A4(&StringLiteral_9506/*"No address associated with hostname"*/, v13);
    sub_B0D8A4(&StringLiteral_2106/*"AssetBundle file download time over"*/, v14);
    sub_B0D8A4(&StringLiteral_12958/*"Software caused connection abort"*/, v15);
    sub_B0D8A4(&StringLiteral_4260/*"Connection timed out"*/, v16);
    sub_B0D8A4(&StringLiteral_2109/*"AssetLoadError"*/, v17);
    byte_42123A6 = 1;
  }
  Instance = sub_B0D8BC(string___TypeInfo, 8LL);
  if ( !Instance )
    goto LABEL_63;
  v19 = Instance;
  Instance = StringLiteral_9506/*"No address associated with hostname"*/;
  if ( StringLiteral_9506/*"No address associated with hostname"*/ )
  {
    Instance = sub_B0D964(StringLiteral_9506/*"No address associated with hostname"*/, *(_QWORD *)(*(_QWORD *)v19 + 64LL));
    if ( !Instance )
      goto LABEL_64;
    v20 = StringLiteral_9506/*"No address associated with hostname"*/;
  }
  else
  {
    v20 = 0LL;
  }
  if ( !*(_DWORD *)(v19 + 24) )
    goto LABEL_50;
  *(_QWORD *)(v19 + 32) = v20;
  sub_B0D840(v19 + 32, v20);
  Instance = StringLiteral_2106/*"AssetBundle file download time over"*/;
  if ( StringLiteral_2106/*"AssetBundle file download time over"*/ )
  {
    Instance = sub_B0D964(StringLiteral_2106/*"AssetBundle file download time over"*/, *(_QWORD *)(*(_QWORD *)v19 + 64LL));
    if ( !Instance )
      goto LABEL_64;
    v21 = StringLiteral_2106/*"AssetBundle file download time over"*/;
  }
  else
  {
    v21 = 0LL;
  }
  if ( *(_DWORD *)(v19 + 24) <= 1u )
    goto LABEL_50;
  *(_QWORD *)(v19 + 40) = v21;
  sub_B0D840(v19 + 40, v21);
  Instance = StringLiteral_14083/*"The network connection was lost."*/;
  if ( StringLiteral_14083/*"The network connection was lost."*/ )
  {
    Instance = sub_B0D964(StringLiteral_14083/*"The network connection was lost."*/, *(_QWORD *)(*(_QWORD *)v19 + 64LL));
    if ( !Instance )
      goto LABEL_64;
    v22 = StringLiteral_14083/*"The network connection was lost."*/;
  }
  else
  {
    v22 = 0LL;
  }
  if ( *(_DWORD *)(v19 + 24) <= 2u )
    goto LABEL_50;
  *(_QWORD *)(v19 + 48) = v22;
  sub_B0D840(v19 + 48, v22);
  Instance = StringLiteral_4259/*"Connection reset by peer"*/;
  if ( StringLiteral_4259/*"Connection reset by peer"*/ )
  {
    Instance = sub_B0D964(StringLiteral_4259/*"Connection reset by peer"*/, *(_QWORD *)(*(_QWORD *)v19 + 64LL));
    if ( !Instance )
      goto LABEL_64;
    v23 = StringLiteral_4259/*"Connection reset by peer"*/;
  }
  else
  {
    v23 = 0LL;
  }
  if ( *(_DWORD *)(v19 + 24) <= 3u )
    goto LABEL_50;
  *(_QWORD *)(v19 + 56) = v23;
  sub_B0D840(v19 + 56, v23);
  Instance = StringLiteral_12958/*"Software caused connection abort"*/;
  if ( StringLiteral_12958/*"Software caused connection abort"*/ )
  {
    Instance = sub_B0D964(StringLiteral_12958/*"Software caused connection abort"*/, *(_QWORD *)(*(_QWORD *)v19 + 64LL));
    if ( !Instance )
      goto LABEL_64;
    v24 = StringLiteral_12958/*"Software caused connection abort"*/;
  }
  else
  {
    v24 = 0LL;
  }
  if ( *(_DWORD *)(v19 + 24) <= 4u )
    goto LABEL_50;
  *(_QWORD *)(v19 + 64) = v24;
  sub_B0D840(v19 + 64, v24);
  Instance = StringLiteral_4260/*"Connection timed out"*/;
  if ( StringLiteral_4260/*"Connection timed out"*/ )
  {
    Instance = sub_B0D964(StringLiteral_4260/*"Connection timed out"*/, *(_QWORD *)(*(_QWORD *)v19 + 64LL));
    if ( !Instance )
      goto LABEL_64;
    v25 = StringLiteral_4260/*"Connection timed out"*/;
  }
  else
  {
    v25 = 0LL;
  }
  if ( *(_DWORD *)(v19 + 24) <= 5u )
    goto LABEL_50;
  *(_QWORD *)(v19 + 72) = v25;
  sub_B0D840(v19 + 72, v25);
  Instance = StringLiteral_4258/*"Connection refused"*/;
  if ( StringLiteral_4258/*"Connection refused"*/ )
  {
    Instance = sub_B0D964(StringLiteral_4258/*"Connection refused"*/, *(_QWORD *)(*(_QWORD *)v19 + 64LL));
    if ( !Instance )
      goto LABEL_64;
    v26 = StringLiteral_4258/*"Connection refused"*/;
  }
  else
  {
    v26 = 0LL;
  }
  if ( *(_DWORD *)(v19 + 24) <= 6u )
    goto LABEL_50;
  *(_QWORD *)(v19 + 80) = v26;
  sub_B0D840(v19 + 80, v26);
  Instance = StringLiteral_14151/*"The request timed out."*/;
  if ( StringLiteral_14151/*"The request timed out."*/ )
  {
    Instance = sub_B0D964(StringLiteral_14151/*"The request timed out."*/, *(_QWORD *)(*(_QWORD *)v19 + 64LL));
    if ( Instance )
    {
      v27 = StringLiteral_14151/*"The request timed out."*/;
      goto LABEL_43;
    }
LABEL_64:
    v33 = sub_B0D99C();
    sub_B0D948(v33, 0LL);
  }
  v27 = 0LL;
LABEL_43:
  if ( *(_DWORD *)(v19 + 24) <= 7u )
    goto LABEL_50;
  *(_QWORD *)(v19 + 88) = v27;
  sub_B0D840(v19 + 88, v27);
  v28 = *(_QWORD *)(v19 + 24);
  if ( (int)v28 < 1 )
  {
LABEL_51:
    if ( (BYTE3(UnityEngine_Debug_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
    }
    v32 = (Il2CppObject *)errorCode;
    goto LABEL_62;
  }
  v29 = 0LL;
  v30 = (int)v28;
  while ( 1 )
  {
    if ( !errorCode )
      goto LABEL_63;
    Instance = System_String__Contains(errorCode, *(System_String_o **)(v19 + 32 + 8 * v29), 0LL);
    if ( (Instance & 1) != 0 )
      break;
    if ( (__int64)++v29 >= v30 )
      goto LABEL_51;
    if ( v29 >= *(unsigned int *)(v19 + 24) )
      goto LABEL_50;
  }
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
  if ( !Instance )
LABEL_63:
    sub_B0D97C(Instance);
  CrashReporter__AddCustomKey(
    (CrashReporter_o *)Instance,
    (System_String_o *)StringLiteral_4620/*"DLErrorAsset"*/,
    this->fields.downloadingURL,
    0LL);
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
  if ( (unsigned int)v29 >= *(_DWORD *)(v19 + 24) )
  {
LABEL_50:
    v31 = sub_B0D9A8(Instance);
    sub_B0D948(v31, 0LL);
  }
  if ( !Instance )
    goto LABEL_63;
  CrashReporter__AddCustomKey(
    (CrashReporter_o *)Instance,
    (System_String_o *)StringLiteral_4621/*"DLErrorType"*/,
    *(System_String_o **)(v19 + 32 + 8 * v29),
    0LL);
  if ( (BYTE3(UnityEngine_Debug_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
  }
  v32 = (Il2CppObject *)StringLiteral_2109/*"AssetLoadError"*/;
LABEL_62:
  UnityEngine_Debug__LogError(v32, 0LL);
}


System_Collections_IEnumerator_o *__fastcall MovieFileMerge__CRCDownloadAndCheck(
        MovieFileMerge_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  MovieFileMerge__CRCDownloadAndCheck_d__33_o *v4; // x20
  __int64 v5; // x0

  if ( (byte_421239D & 1) == 0 )
  {
    sub_B0D8A4(&MovieFileMerge__CRCDownloadAndCheck_d__33_TypeInfo, method);
    byte_421239D = 1;
  }
  v4 = (MovieFileMerge__CRCDownloadAndCheck_d__33_o *)sub_B0D974(
                                                        MovieFileMerge__CRCDownloadAndCheck_d__33_TypeInfo,
                                                        method,
                                                        v2);
  MovieFileMerge__CRCDownloadAndCheck_d__33___ctor(v4, 0, 0LL);
  if ( !v4 )
    sub_B0D97C(v5);
  v4->fields.__4__this = this;
  sub_B0D840(&v4->fields.__4__this, this);
  return (System_Collections_IEnumerator_o *)v4;
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
  int max_length; // w8
  System_String_array *v10; // x20
  unsigned int v11; // w22
  System_String_o *v12; // x21
  System_String_array *v13; // x21
  __int64 v15; // x0
  uint32_t result; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_42123A4 & 1) == 0 )
  {
    sub_B0D8A4(&char___TypeInfo, dataPath);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__uint__Add__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__uint___ctor__, v5);
    sub_B0D8A4(&System_Collections_Generic_Dictionary_string__uint__TypeInfo, v6);
    byte_42123A4 = 1;
  }
  result = 0;
  v7 = (System_Collections_Generic_Dictionary_string__uint__o *)sub_B0D974(
                                                                  System_Collections_Generic_Dictionary_string__uint__TypeInfo,
                                                                  dataPath,
                                                                  method);
  System_Collections_Generic_Dictionary_string__uint____ctor(
    v7,
    (const MethodInfo_2E752C0 *)Method_System_Collections_Generic_Dictionary_string__uint___ctor__);
  AllLines = System_IO_File__ReadAllLines(dataPath, 0LL);
  if ( !AllLines )
LABEL_20:
    sub_B0D97C(AllLines);
  max_length = AllLines->max_length;
  v10 = AllLines;
  if ( max_length >= 1 )
  {
    v11 = 0;
    while ( 1 )
    {
      if ( v11 >= max_length )
        goto LABEL_19;
      v12 = v10->m_Items[v11];
      AllLines = (System_String_array *)sub_B0D8BC(char___TypeInfo, 1LL);
      if ( !AllLines )
        goto LABEL_20;
      if ( !AllLines->max_length )
      {
LABEL_19:
        v15 = sub_B0D9A8(AllLines);
        sub_B0D948(v15, 0LL);
      }
      LOWORD(AllLines->m_Items[0]) = 44;
      if ( !v12 )
        goto LABEL_20;
      AllLines = System_String__Split(v12, (System_Char_array *)AllLines, 0LL);
      result = 0;
      if ( !AllLines )
        goto LABEL_20;
      v13 = AllLines;
      if ( AllLines->max_length <= 1 )
        goto LABEL_19;
      AllLines = (System_String_array *)System_UInt32__TryParse(AllLines->m_Items[1], &result, 0LL);
      if ( ((unsigned __int8)AllLines & 1) == 0 )
        return 0LL;
      if ( !v13->max_length )
        goto LABEL_19;
      if ( !v7 )
        goto LABEL_20;
      System_Collections_Generic_Dictionary_string__uint___Add(
        v7,
        v13->m_Items[0],
        result,
        (const MethodInfo_2E75E74 *)Method_System_Collections_Generic_Dictionary_string__uint__Add__);
      max_length = v10->max_length;
      if ( (int)++v11 >= max_length )
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
  if ( (byte_42123A0 & 1) == 0 )
  {
    sub_B0D8A4(&char___TypeInfo, method);
    sub_B0D8A4(&System_IO_Path_TypeInfo, v3);
    sub_B0D8A4(&StringLiteral_23688/*"{0}/{1}"*/, v4);
    folder = (System_String_o *)sub_B0D8A4(&StringLiteral_879/*"/"*/, v5);
    byte_42123A0 = 1;
  }
  if ( !v2 )
    goto LABEL_14;
  if ( !System_String__EndsWith(v2, (System_String_o *)StringLiteral_879/*"/"*/, 0LL) )
    goto LABEL_8;
  folder = (System_String_o *)sub_B0D8BC(char___TypeInfo, 1LL);
  if ( !folder )
LABEL_14:
    sub_B0D97C(folder);
  if ( !LODWORD(folder[1].klass) )
  {
    v9 = sub_B0D9A8(folder);
    sub_B0D948(v9, 0LL);
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
  v8 = System_String__Format_43845440(
         (System_String_o *)StringLiteral_23688/*"{0}/{1}"*/,
         LocalDataPath,
         (Il2CppObject *)FileName,
         0LL);
  if ( System_IO_Directory__Exists(v8, 0LL) )
    System_IO_Directory__Delete_43785104(v8, 1, 0LL);
}


void __fastcall MovieFileMerge__Delete_20212788(const MethodInfo *method)
{
  System_String_o *LocalDataPath; // x0
  _BOOL8 v2; // x0
  System_String_o *v3; // x0

  LocalDataPath = MovieFileMerge__GetLocalDataPath(method);
  v2 = System_IO_Directory__Exists(LocalDataPath, 0LL);
  if ( v2 )
  {
    v3 = MovieFileMerge__GetLocalDataPath((const MethodInfo *)v2);
    System_IO_Directory__Delete_43785104(v3, 1, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
System_Collections_IEnumerator_o *__fastcall MovieFileMerge__Download(
        MovieFileMerge_o *this,
        System_String_o *fileName,
        uint32_t crc,
        const MethodInfo *method)
{
  MovieFileMerge__Download_d__41_o *v7; // x22
  __int64 v8; // x0

  if ( (byte_42123A3 & 1) == 0 )
  {
    sub_B0D8A4(&MovieFileMerge__Download_d__41_TypeInfo, fileName);
    byte_42123A3 = 1;
  }
  v7 = (MovieFileMerge__Download_d__41_o *)sub_B0D974(
                                             MovieFileMerge__Download_d__41_TypeInfo,
                                             fileName,
                                             *(_QWORD *)&crc);
  MovieFileMerge__Download_d__41___ctor(v7, 0, 0LL);
  if ( !v7 )
    sub_B0D97C(v8);
  v7->fields.__4__this = this;
  sub_B0D840(&v7->fields.__4__this, this);
  v7->fields.fileName = fileName;
  sub_B0D840(&v7->fields.fileName, fileName);
  v7->fields.crc = crc;
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
  __int64 v2; // x2
  MovieFileMerge__DownloadMovie_d__34_o *v4; // x20
  __int64 v5; // x0

  if ( (byte_421239E & 1) == 0 )
  {
    sub_B0D8A4(&MovieFileMerge__DownloadMovie_d__34_TypeInfo, method);
    byte_421239E = 1;
  }
  v4 = (MovieFileMerge__DownloadMovie_d__34_o *)sub_B0D974(MovieFileMerge__DownloadMovie_d__34_TypeInfo, method, v2);
  MovieFileMerge__DownloadMovie_d__34___ctor(v4, 0, 0LL);
  if ( !v4 )
    sub_B0D97C(v5);
  v4->fields.__4__this = this;
  sub_B0D840(&v4->fields.__4__this, this);
  return (System_Collections_IEnumerator_o *)v4;
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
  if ( (byte_4212394 & 1) == 0 )
  {
    sub_B0D8A4(&char___TypeInfo, assetFolderURL);
    sub_B0D8A4(&FileMergeAndSplit_TypeInfo, v4);
    sub_B0D8A4(&System_IO_Path_TypeInfo, v5);
    sub_B0D8A4(&StringLiteral_879/*"/"*/, v6);
    sub_B0D8A4(&StringLiteral_23693/*"{0}/{1}/{2}"*/, v7);
    this = (MovieFileMerge_o *)sub_B0D8A4(&StringLiteral_23692/*"{0}/{1}/{1}.usm"*/, v8);
    byte_4212394 = 1;
  }
  if ( !v3 )
    goto LABEL_17;
  if ( !System_String__EndsWith(v3, (System_String_o *)StringLiteral_879/*"/"*/, 0LL) )
    goto LABEL_8;
  this = (MovieFileMerge_o *)sub_B0D8BC(char___TypeInfo, 1LL);
  if ( !this )
LABEL_17:
    sub_B0D97C(this);
  if ( !LODWORD(this->fields.assetFolderURL) )
  {
    v16 = sub_B0D9A8(this);
    sub_B0D948(v16, 0LL);
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
  v11 = System_String__Format_43845440(
          (System_String_o *)StringLiteral_23692/*"{0}/{1}/{1}.usm"*/,
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
  v14 = System_String__Format_43850968(
          (System_String_o *)StringLiteral_23693/*"{0}/{1}/{2}"*/,
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
  System_Collections_Generic_Dictionary_string__uint__o *v5; // x0
  int32_t downloadProgress; // s8

  if ( (byte_4212398 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__uint__get_Count__, method);
    byte_4212398 = 1;
  }
  RequireDownLoadFilePathCRCDictionary = this->fields.RequireDownLoadFilePathCRCDictionary;
  v4 = 0.0;
  if ( RequireDownLoadFilePathCRCDictionary
    && System_Collections_Generic_Dictionary_string__uint___get_Count(
         RequireDownLoadFilePathCRCDictionary,
         (const MethodInfo_2E75A70 *)Method_System_Collections_Generic_Dictionary_string__uint__get_Count__) )
  {
    v5 = this->fields.RequireDownLoadFilePathCRCDictionary;
    if ( !v5 )
      sub_B0D97C(0LL);
    downloadProgress = this->fields.downloadProgress;
    return (float)downloadProgress
         / (float)System_Collections_Generic_Dictionary_string__uint___get_Count(
                    v5,
                    (const MethodInfo_2E75A70 *)Method_System_Collections_Generic_Dictionary_string__uint__get_Count__);
  }
  return v4;
}


double __fastcall MovieFileMerge__GetDownloadSize(MovieFileMerge_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_string__uint__o *RequireDownLoadFilePathCRCDictionary; // x0

  if ( (byte_4212397 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__uint__get_Count__, method);
    byte_4212397 = 1;
  }
  RequireDownLoadFilePathCRCDictionary = this->fields.RequireDownLoadFilePathCRCDictionary;
  if ( !RequireDownLoadFilePathCRCDictionary )
    sub_B0D97C(0LL);
  return (double)(System_Collections_Generic_Dictionary_string__uint___get_Count(
                    RequireDownLoadFilePathCRCDictionary,
                    (const MethodInfo_2E75A70 *)Method_System_Collections_Generic_Dictionary_string__uint__get_Count__) << 20);
}


System_String_o *__fastcall MovieFileMerge__GetLocalDataPath(const MethodInfo *method)
{
  __int64 v1; // x1
  System_String_o *persistentDataPath; // x0

  if ( (byte_4212395 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_927/*"/extend-data/movie"*/, v1);
    byte_4212395 = 1;
  }
  persistentDataPath = UnityEngine_Application__get_persistentDataPath(0LL);
  return System_String__Concat_43849904(persistentDataPath, (System_String_o *)StringLiteral_927/*"/extend-data/movie"*/, 0LL);
}


System_String_o *__fastcall MovieFileMerge__GetLocalFolderPath(MovieFileMerge_o *this, const MethodInfo *method)
{
  MovieFileMerge_o *v2; // x19
  Il2CppObject *LocalDataPath; // x0

  v2 = this;
  if ( (byte_42123A1 & 1) == 0 )
  {
    this = (MovieFileMerge_o *)sub_B0D8A4(&StringLiteral_23688/*"{0}/{1}"*/, method);
    byte_42123A1 = 1;
  }
  LocalDataPath = (Il2CppObject *)MovieFileMerge__GetLocalDataPath((const MethodInfo *)this);
  return System_String__Format_43845440(
           (System_String_o *)StringLiteral_23688/*"{0}/{1}"*/,
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
  System_Collections_Generic_Dictionary_string__uint__o *v14; // x19
  System_Collections_Generic_Dictionary_string__uint__o *AllDownLoadFilePathCRCDictionary; // x0
  const MethodInfo *v16; // x1
  Il2CppObject *key; // x21
  uint32_t value; // w22
  Il2CppObject *LocalFolderPath; // x1
  System_String_o *v20; // x23
  _BOOL8 v21; // x0
  System_Byte_array *AllBytes; // x24
  uint32_t v23; // w1
  System_IO_DirectoryInfo_o *Parent; // x0
  System_IO_DirectoryInfo_o *v25; // x21
  System_String_o *v26; // x0
  System_String_o *v27; // x0
  System_Collections_Generic_Dictionary_Enumerator_string__uint__o v29; // [xsp+0h] [xbp-B0h] BYREF
  uint32_t v30; // [xsp+2Ch] [xbp-84h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_string__uint__o v31; // [xsp+30h] [xbp-80h] BYREF

  if ( (byte_42123A2 & 1) == 0 )
  {
    sub_B0D8A4(&Crc32_TypeInfo, method);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__uint__Add__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__uint__GetEnumerator__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__uint___ctor__, v6);
    sub_B0D8A4(&System_Collections_Generic_Dictionary_string__uint__TypeInfo, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_Enumerator_string__uint__Dispose__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_Enumerator_string__uint__MoveNext__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_Enumerator_string__uint__get_Current__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_KeyValuePair_string__uint__get_Key__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_KeyValuePair_string__uint__get_Value__, v12);
    sub_B0D8A4(&StringLiteral_23688/*"{0}/{1}"*/, v13);
    byte_42123A2 = 1;
  }
  memset(&v31, 0, sizeof(v31));
  v30 = 0;
  v14 = (System_Collections_Generic_Dictionary_string__uint__o *)sub_B0D974(
                                                                   System_Collections_Generic_Dictionary_string__uint__TypeInfo,
                                                                   method,
                                                                   v2);
  System_Collections_Generic_Dictionary_string__uint____ctor(
    v14,
    (const MethodInfo_2E752C0 *)Method_System_Collections_Generic_Dictionary_string__uint___ctor__);
  AllDownLoadFilePathCRCDictionary = this->fields.AllDownLoadFilePathCRCDictionary;
  if ( !AllDownLoadFilePathCRCDictionary )
    sub_B0D97C(0LL);
  System_Collections_Generic_Dictionary_string__uint___GetEnumerator(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v29,
    AllDownLoadFilePathCRCDictionary,
    (const MethodInfo_2E76408 *)Method_System_Collections_Generic_Dictionary_string__uint__GetEnumerator__);
  v31 = v29;
  while ( System_Collections_Generic_Dictionary_Enumerator_string__uint___MoveNext(
            &v31,
            (const MethodInfo_26CD540 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__uint__MoveNext__) )
  {
    key = v31.fields.current.fields.key;
    value = (uint32_t)v31.fields.current.fields.value;
    LocalFolderPath = (Il2CppObject *)MovieFileMerge__GetLocalFolderPath(this, v16);
    v20 = System_String__Format_43845440((System_String_o *)StringLiteral_23688/*"{0}/{1}"*/, LocalFolderPath, key, 0LL);
    v21 = System_IO_File__Exists(v20, 0LL);
    if ( !v21 )
      goto LABEL_12;
    AllBytes = System_IO_File__ReadAllBytes(v20, 0LL);
    v30 = value;
    if ( (BYTE3(Crc32_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Crc32_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
    v23 = Crc32__Compute(AllBytes, 0LL);
    if ( !System_UInt32__Equals_42676372((uint32_t)&v30, v23, 0LL) )
    {
      System_IO_File__Delete(v20, 0LL);
LABEL_12:
      if ( !v14 )
        sub_B0D97C(v21);
      System_Collections_Generic_Dictionary_string__uint___Add(
        v14,
        (System_String_o *)key,
        value,
        (const MethodInfo_2E75E74 *)Method_System_Collections_Generic_Dictionary_string__uint__Add__);
      Parent = System_IO_Directory__GetParent(v20, 0LL);
      v25 = Parent;
      if ( !Parent )
        sub_B0D97C(0LL);
      v26 = (System_String_o *)((__int64 (__fastcall *)(System_IO_DirectoryInfo_o *, Il2CppMethodPointer))Parent->klass->vtable._7_get_FullName.method)(
                                 Parent,
                                 Parent->klass->vtable._8_get_Name.methodPtr);
      if ( !System_IO_Directory__Exists(v26, 0LL) )
      {
        v27 = (System_String_o *)((__int64 (__fastcall *)(System_IO_DirectoryInfo_o *, Il2CppMethodPointer))v25->klass->vtable._7_get_FullName.method)(
                                   v25,
                                   v25->klass->vtable._8_get_Name.methodPtr);
        System_IO_Directory__CreateDirectory(v27, 0LL);
      }
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_string__uint___Dispose(
    &v31,
    (const MethodInfo_26CD6AC *)Method_System_Collections_Generic_Dictionary_Enumerator_string__uint__Dispose__);
  return v14;
}


System_Collections_Generic_List_string__o *__fastcall MovieFileMerge__GetSplitFileList(
        MovieFileMerge_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v13; // x19
  const MethodInfo *v14; // x1
  System_String_o *LocalFolderPath; // x0
  System_Collections_Generic_Dictionary_string__uint__o *AllDownLoadFilePathCRCDictionary; // x0
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x0
  const MethodInfo *v18; // x1
  Il2CppObject *current; // x21
  Il2CppObject *v20; // x1
  System_String_o *v21; // x0
  System_Collections_Generic_List_Enumerator_T__o v23; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_42123A5 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__uint__get_Keys__, method);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToList_string___, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__Add__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__GetEnumerator__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string___ctor__, v10);
    sub_B0D8A4(&System_Collections_Generic_List_string__TypeInfo, v11);
    sub_B0D8A4(&StringLiteral_23688/*"{0}/{1}"*/, v12);
    byte_42123A5 = 1;
  }
  memset(&v23, 0, sizeof(v23));
  v13 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_string__TypeInfo,
                                                                                                  method,
                                                                                                  v2);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v13,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_string___ctor__);
  LocalFolderPath = MovieFileMerge__GetLocalFolderPath(this, v14);
  if ( System_IO_Directory__Exists(LocalFolderPath, 0LL) )
  {
    AllDownLoadFilePathCRCDictionary = this->fields.AllDownLoadFilePathCRCDictionary;
    if ( !AllDownLoadFilePathCRCDictionary
      || (Keys = System_Collections_Generic_Dictionary_string__uint___get_Keys(
                   AllDownLoadFilePathCRCDictionary,
                   (const MethodInfo_2E75A80 *)Method_System_Collections_Generic_Dictionary_string__uint__get_Keys__),
          (AllDownLoadFilePathCRCDictionary = (System_Collections_Generic_Dictionary_string__uint__o *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_((System_Collections_Generic_IEnumerable_TSource__o *)Keys, (const MethodInfo_1B59168 *)Method_System_Linq_Enumerable_ToList_string___)) == 0LL) )
    {
      sub_B0D97C(AllDownLoadFilePathCRCDictionary);
    }
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v23,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)AllDownLoadFilePathCRCDictionary,
      (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v23,
              (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
    {
      current = v23.fields.current;
      v20 = (Il2CppObject *)MovieFileMerge__GetLocalFolderPath(this, v18);
      v21 = System_String__Format_43845440((System_String_o *)StringLiteral_23688/*"{0}/{1}"*/, v20, current, 0LL);
      if ( !v13 )
        sub_B0D97C(v21);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v13,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v21,
        (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_string__Add__);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v23,
      (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
  }
  return (System_Collections_Generic_List_string__o *)v13;
}


double __fastcall MovieFileMerge__GetTotalRequireSize(MovieFileMerge_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_string__uint__o *AllDownLoadFilePathCRCDictionary; // x0
  System_Collections_Generic_Dictionary_string__uint__o *RequireDownLoadFilePathCRCDictionary; // x8

  if ( (byte_4212396 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__uint__get_Count__, method);
    byte_4212396 = 1;
  }
  AllDownLoadFilePathCRCDictionary = this->fields.AllDownLoadFilePathCRCDictionary;
  if ( !AllDownLoadFilePathCRCDictionary
    || (AllDownLoadFilePathCRCDictionary = (System_Collections_Generic_Dictionary_string__uint__o *)System_Collections_Generic_Dictionary_string__uint___get_Count(AllDownLoadFilePathCRCDictionary, (const MethodInfo_2E75A70 *)Method_System_Collections_Generic_Dictionary_string__uint__get_Count__),
        (RequireDownLoadFilePathCRCDictionary = this->fields.RequireDownLoadFilePathCRCDictionary) == 0LL) )
  {
    sub_B0D97C(AllDownLoadFilePathCRCDictionary);
  }
  return (double)((System_Collections_Generic_Dictionary_string__uint___get_Count(
                     RequireDownLoadFilePathCRCDictionary,
                     (const MethodInfo_2E75A70 *)Method_System_Collections_Generic_Dictionary_string__uint__get_Count__)
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
  __int64 v15; // x1
  __int64 v16; // x2
  System_Collections_Generic_Dictionary_string__uint__o *v17; // x22
  System_Collections_Generic_Dictionary_string__uint__o *RequireDownLoadFilePathCRCDictionary; // x0
  System_Collections_Generic_Dictionary_string__uint__o *v19; // x22
  System_Char_array *v20; // x0
  struct System_String_o *FileName; // x0
  const MethodInfo *v22; // x1
  Il2CppObject *LocalFolderPath; // x0
  struct System_String_o *v24; // x0
  const MethodInfo *v25; // x1
  Il2CppObject *v26; // x0
  struct System_String_o *v27; // x0
  const MethodInfo *v28; // x1
  Il2CppObject *v29; // x20
  FileMergeAndSplit_c *v30; // x8
  struct System_String_o *v31; // x0
  __int64 v32; // x0

  v3 = assetFolderURL;
  if ( (byte_421239C & 1) == 0 )
  {
    sub_B0D8A4(&char___TypeInfo, assetFolderURL);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__uint__Clear__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__uint___ctor__, v6);
    sub_B0D8A4(&System_Collections_Generic_Dictionary_string__uint__TypeInfo, v7);
    sub_B0D8A4(&FileMergeAndSplit_TypeInfo, v8);
    sub_B0D8A4(&System_IO_Path_TypeInfo, v9);
    sub_B0D8A4(&StringLiteral_23688/*"{0}/{1}"*/, v10);
    sub_B0D8A4(&StringLiteral_23684/*"{0}/SplitFile"*/, v11);
    sub_B0D8A4(&StringLiteral_879/*"/"*/, v12);
    sub_B0D8A4(&StringLiteral_23690/*"{0}/{1}.usm"*/, v13);
    byte_421239C = 1;
  }
  AllDownLoadFilePathCRCDictionary = this->fields.AllDownLoadFilePathCRCDictionary;
  if ( AllDownLoadFilePathCRCDictionary )
  {
    System_Collections_Generic_Dictionary_string__uint___Clear(
      AllDownLoadFilePathCRCDictionary,
      (const MethodInfo_2E76050 *)Method_System_Collections_Generic_Dictionary_string__uint__Clear__);
  }
  else
  {
    v17 = (System_Collections_Generic_Dictionary_string__uint__o *)sub_B0D974(
                                                                     System_Collections_Generic_Dictionary_string__uint__TypeInfo,
                                                                     assetFolderURL,
                                                                     method);
    System_Collections_Generic_Dictionary_string__uint____ctor(
      v17,
      (const MethodInfo_2E752C0 *)Method_System_Collections_Generic_Dictionary_string__uint___ctor__);
    this->fields.AllDownLoadFilePathCRCDictionary = v17;
    sub_B0D840(&this->fields.AllDownLoadFilePathCRCDictionary, v17);
  }
  RequireDownLoadFilePathCRCDictionary = this->fields.RequireDownLoadFilePathCRCDictionary;
  if ( RequireDownLoadFilePathCRCDictionary )
  {
    System_Collections_Generic_Dictionary_string__uint___Clear(
      RequireDownLoadFilePathCRCDictionary,
      (const MethodInfo_2E76050 *)Method_System_Collections_Generic_Dictionary_string__uint__Clear__);
  }
  else
  {
    v19 = (System_Collections_Generic_Dictionary_string__uint__o *)sub_B0D974(
                                                                     System_Collections_Generic_Dictionary_string__uint__TypeInfo,
                                                                     v15,
                                                                     v16);
    System_Collections_Generic_Dictionary_string__uint____ctor(
      v19,
      (const MethodInfo_2E752C0 *)Method_System_Collections_Generic_Dictionary_string__uint___ctor__);
    this->fields.RequireDownLoadFilePathCRCDictionary = v19;
    sub_B0D840(&this->fields.RequireDownLoadFilePathCRCDictionary, v19);
  }
  *(_QWORD *)&this->fields.downloadProgress = 0LL;
  this->fields.isDownloadCancel = 0;
  this->fields.mergeClass = 0LL;
  sub_B0D840(&this->fields.mergeClass, 0LL);
  this->fields.crcCheckerClass = 0LL;
  sub_B0D840(&this->fields.crcCheckerClass, 0LL);
  if ( !v3 )
    goto LABEL_21;
  if ( !System_String__EndsWith(v3, (System_String_o *)StringLiteral_879/*"/"*/, 0LL) )
    goto LABEL_14;
  v20 = (System_Char_array *)sub_B0D8BC(char___TypeInfo, 1LL);
  if ( !v20 )
LABEL_21:
    sub_B0D97C(v20);
  if ( !v20->max_length )
  {
    v32 = sub_B0D9A8(v20);
    sub_B0D948(v32, 0LL);
  }
  v20->m_Items[2] = 47;
  v3 = System_String__TrimEnd(v3, v20, 0LL);
LABEL_14:
  this->fields.assetFolderURL = v3;
  sub_B0D840(&this->fields.assetFolderURL, v3);
  if ( (BYTE3(System_IO_Path_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_IO_Path_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_IO_Path_TypeInfo);
  }
  FileName = System_IO_Path__GetFileName(v3, 0LL);
  this->fields.assetFolder = FileName;
  sub_B0D840(&this->fields.assetFolder, FileName);
  LocalFolderPath = (Il2CppObject *)MovieFileMerge__GetLocalFolderPath(this, v22);
  v24 = System_String__Format((System_String_o *)StringLiteral_23684/*"{0}/SplitFile"*/, LocalFolderPath, 0LL);
  this->fields.outputSplitFileFolder = v24;
  sub_B0D840(&this->fields.outputSplitFileFolder, v24);
  v26 = (Il2CppObject *)MovieFileMerge__GetLocalFolderPath(this, v25);
  v27 = System_String__Format_43845440(
          (System_String_o *)StringLiteral_23690/*"{0}/{1}.usm"*/,
          v26,
          (Il2CppObject *)this->fields.assetFolder,
          0LL);
  this->fields.outputMergeFile = v27;
  sub_B0D840(&this->fields.outputMergeFile, v27);
  v29 = (Il2CppObject *)MovieFileMerge__GetLocalFolderPath(this, v28);
  v30 = FileMergeAndSplit_TypeInfo;
  if ( (BYTE3(FileMergeAndSplit_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FileMergeAndSplit_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FileMergeAndSplit_TypeInfo);
    v30 = FileMergeAndSplit_TypeInfo;
  }
  v31 = System_String__Format_43845440(
          (System_String_o *)StringLiteral_23688/*"{0}/{1}"*/,
          v29,
          (Il2CppObject *)v30->static_fields->PathCRCFileName,
          0LL);
  this->fields.outputMergeFileCRC = v31;
  sub_B0D840(&this->fields.outputMergeFileCRC, v31);
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
  MovieFileMerge__Merge_d__35_o *v4; // x20
  __int64 v5; // x0

  if ( (byte_421239F & 1) == 0 )
  {
    sub_B0D8A4(&MovieFileMerge__Merge_d__35_TypeInfo, method);
    byte_421239F = 1;
  }
  v4 = (MovieFileMerge__Merge_d__35_o *)sub_B0D974(MovieFileMerge__Merge_d__35_TypeInfo, method, v2);
  MovieFileMerge__Merge_d__35___ctor(v4, 0, 0LL);
  if ( !v4 )
    sub_B0D97C(v5);
  v4->fields.__4__this = this;
  sub_B0D840(&v4->fields.__4__this, this);
  return (System_Collections_IEnumerator_o *)v4;
}


System_Collections_IEnumerator_o *__fastcall MovieFileMerge__PlayCRIMovie(
        MovieFileMerge_o *this,
        System_String_o *filePath,
        const MethodInfo *method)
{
  MovieFileMerge__PlayCRIMovie_d__31_o *v4; // x20
  __int64 v5; // x0

  if ( (byte_421239B & 1) == 0 )
  {
    sub_B0D8A4(&MovieFileMerge__PlayCRIMovie_d__31_TypeInfo, filePath);
    byte_421239B = 1;
  }
  v4 = (MovieFileMerge__PlayCRIMovie_d__31_o *)sub_B0D974(MovieFileMerge__PlayCRIMovie_d__31_TypeInfo, filePath, method);
  MovieFileMerge__PlayCRIMovie_d__31___ctor(v4, 0, 0LL);
  if ( !v4 )
    sub_B0D97C(v5);
  v4->fields.filePath = filePath;
  sub_B0D840(&v4->fields.filePath, filePath);
  return (System_Collections_IEnumerator_o *)v4;
}


System_Collections_IEnumerator_o *__fastcall MovieFileMerge__PlayMP4(MovieFileMerge_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  MovieFileMerge__PlayMP4_d__29_o *v4; // x20
  __int64 v5; // x0

  if ( (byte_4212399 & 1) == 0 )
  {
    sub_B0D8A4(&MovieFileMerge__PlayMP4_d__29_TypeInfo, method);
    byte_4212399 = 1;
  }
  v4 = (MovieFileMerge__PlayMP4_d__29_o *)sub_B0D974(MovieFileMerge__PlayMP4_d__29_TypeInfo, method, v2);
  MovieFileMerge__PlayMP4_d__29___ctor(v4, 0, 0LL);
  if ( !v4 )
    sub_B0D97C(v5);
  v4->fields.__4__this = this;
  sub_B0D840(&v4->fields.__4__this, this);
  return (System_Collections_IEnumerator_o *)v4;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_IEnumerator_o *__fastcall MovieFileMerge__PlayMP4_20210948(
        MovieFileMerge_o *this,
        System_String_o *filePath,
        int32_t mode,
        const MethodInfo *method)
{
  MovieFileMerge__PlayMP4_d__30_o *v6; // x21
  __int64 v7; // x0

  if ( (byte_421239A & 1) == 0 )
  {
    sub_B0D8A4(&MovieFileMerge__PlayMP4_d__30_TypeInfo, filePath);
    byte_421239A = 1;
  }
  v6 = (MovieFileMerge__PlayMP4_d__30_o *)sub_B0D974(MovieFileMerge__PlayMP4_d__30_TypeInfo, filePath, *(_QWORD *)&mode);
  MovieFileMerge__PlayMP4_d__30___ctor(v6, 0, 0LL);
  if ( !v6 )
    sub_B0D97C(v7);
  v6->fields.__4__this = this;
  sub_B0D840(&v6->fields.__4__this, this);
  v6->fields.filePath = filePath;
  sub_B0D840(&v6->fields.filePath, filePath);
  return (System_Collections_IEnumerator_o *)v6;
}


void __fastcall MovieFileMerge__Reboot(MovieFileMerge_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Networking_UnityWebRequest_o *v4; // x0
  struct UnityEngine_Networking_UnityWebRequest_o **p_loader; // x19
  struct UnityEngine_Networking_UnityWebRequest_o *loader; // t1
  ManagementManager_c *v7; // x0
  ManagementManager_o *Instance; // x0

  if ( (byte_42123A7 & 1) == 0 )
  {
    sub_B0D8A4(&ManagementManager_TypeInfo, method);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_ManagementManager__get_Instance__, v3);
    byte_42123A7 = 1;
  }
  loader = this->fields.loader;
  p_loader = &this->fields.loader;
  v4 = loader;
  if ( loader )
  {
    UnityEngine_Networking_UnityWebRequest__Dispose(v4, 0LL);
    *p_loader = 0LL;
    sub_B0D840(p_loader, 0LL);
  }
  if ( (BYTE3(ManagementManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagementManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
  }
  if ( !byte_42124C8 )
  {
    sub_B0D8A4(&ManagementManager_TypeInfo, method);
    byte_42124C8 = 1;
  }
  v7 = ManagementManager_TypeInfo;
  if ( (BYTE3(ManagementManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagementManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
    v7 = ManagementManager_TypeInfo;
  }
  if ( v7->static_fields->isDuringStartup )
  {
    UnityEngine_Application__Quit_40735960(0LL);
  }
  else
  {
    Instance = (ManagementManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
    if ( !Instance )
      sub_B0D97C(0LL);
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
  __int64 v13; // x1
  __int64 v14; // x2
  ErrorDialog_ClickDelegate_o *v15; // x22
  const MethodInfo *v16; // x2
  System_String_o *v17; // x1

  v4 = (Il2CppObject *)this;
  if ( (byte_42123A9 & 1) == 0 )
  {
    sub_B0D8A4(&ErrorDialog_ClickDelegate_TypeInfo, e);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v5);
    sub_B0D8A4(&Method_MovieFileMerge_EndMergeRetryDialog__, v6);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_B0D8A4(&StringLiteral_5336/*"Disk full"*/, v8);
    sub_B0D8A4(&StringLiteral_9308/*"NETWORK_ERROR_DISK_FULL"*/, v9);
    this = (MovieFileMerge_o *)sub_B0D8A4(&StringLiteral_1/*""*/, v10);
    byte_42123A9 = 1;
  }
  if ( !e )
    goto LABEL_13;
  this = (MovieFileMerge_o *)((__int64 (__fastcall *)(System_Exception_o *, Il2CppMethodPointer, const MethodInfo *))e->klass->vtable._5_get_Message.method)(
                               e,
                               e->klass->vtable._6_get_Data.methodPtr,
                               method);
  if ( !this )
    goto LABEL_13;
  if ( !System_String__StartsWith((System_String_o *)this, (System_String_o *)StringLiteral_5336/*"Disk full"*/, 0LL) )
  {
    v17 = (System_String_o *)((__int64 (__fastcall *)(System_Exception_o *, Il2CppMethodPointer))e->klass->vtable._5_get_Message.method)(
                               e,
                               e->klass->vtable._6_get_Data.methodPtr);
    goto LABEL_12;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v12 = LocalizationManager__Get((System_String_o *)StringLiteral_9308/*"NETWORK_ERROR_DISK_FULL"*/, 0LL);
  v15 = (ErrorDialog_ClickDelegate_o *)sub_B0D974(ErrorDialog_ClickDelegate_TypeInfo, v13, v14);
  ErrorDialog_ClickDelegate___ctor(v15, v4, Method_MovieFileMerge_EndMergeRetryDialog__, 0LL);
  if ( !Instance )
LABEL_13:
    sub_B0D97C(this);
  CommonUI__OpenErrorDialog(Instance, (System_String_o *)StringLiteral_1/*""*/, v12, v15, 1, 0LL);
  v17 = (System_String_o *)StringLiteral_5336/*"Disk full"*/;
LABEL_12:
  MovieFileMerge__AssetLoadLogError((MovieFileMerge_o *)v4, v17, v16);
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
  System_Collections_IEnumerator_o *v8; // x0
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  System_Collections_Generic_Dictionary_string__uint__o *Dic; // x0
  System_String_o *outputMergeFile; // x21
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x0
  System_Collections_Generic_List_uint__o *v14; // x22
  __int64 v15; // x1
  __int64 v16; // x2
  FileMergeAndSplit_CRCChecker_o *v17; // x23
  System_Collections_IEnumerator_o *v18; // x0
  Il2CppObject **v19; // x19
  System_Collections_Generic_Dictionary_string__uint__o *NeedDownloadDictionary; // x0

  v2 = this;
  if ( (byte_4212744 & 1) == 0 )
  {
    sub_B0D8A4(&FileMergeAndSplit_CRCChecker_TypeInfo, method);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__uint__get_Values__, v3);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToList_uint___, v4);
    this = (MovieFileMerge__CRCDownloadAndCheck_d__33_o *)sub_B0D8A4(&FileMergeAndSplit_TypeInfo, v5);
    byte_4212744 = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state == 2 )
  {
    v2->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_22;
    NeedDownloadDictionary = MovieFileMerge__GetNeedDownloadDictionary(_4__this, 0LL);
    _4__this->fields.RequireDownLoadFilePathCRCDictionary = NeedDownloadDictionary;
    sub_B0D840(&_4__this->fields.RequireDownLoadFilePathCRCDictionary, NeedDownloadDictionary);
    if ( MovieFileMerge__IsCRCMatch(_4__this, 0LL) )
    {
      if ( System_IO_Directory__Exists(_4__this->fields.outputSplitFileFolder, 0LL) )
        System_IO_Directory__Delete_43785104(_4__this->fields.outputSplitFileFolder, 1, 0LL);
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
        v8 = MovieFileMerge__Download(_4__this, FileMergeAndSplit_TypeInfo->static_fields->PathCRCFileName, 0, 0LL);
        v2->fields.__2__current = (Il2CppObject *)v8;
        p__2__current = &v2->fields.__2__current;
        sub_B0D840(p__2__current, v8);
        result = 1;
        *((_DWORD *)p__2__current - 2) = 1;
        return result;
      }
LABEL_22:
      sub_B0D97C(this);
    }
    return 0;
  }
  v2->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_22;
  Dic = MovieFileMerge__CreateDic(_4__this, _4__this->fields.outputMergeFileCRC, 0LL);
  _4__this->fields.AllDownLoadFilePathCRCDictionary = Dic;
  sub_B0D840(&_4__this->fields.AllDownLoadFilePathCRCDictionary, Dic);
  this = (MovieFileMerge__CRCDownloadAndCheck_d__33_o *)_4__this->fields.AllDownLoadFilePathCRCDictionary;
  if ( !this )
    goto LABEL_22;
  outputMergeFile = _4__this->fields.outputMergeFile;
  Values = System_Collections_Generic_Dictionary_string__uint___get_Values(
             (System_Collections_Generic_Dictionary_string__uint__o *)this,
             (const MethodInfo_2E75C18 *)Method_System_Collections_Generic_Dictionary_string__uint__get_Values__);
  v14 = (System_Collections_Generic_List_uint__o *)System_Linq_Enumerable__ToList_uint_(
                                                     (System_Collections_Generic_IEnumerable_TSource__o *)Values,
                                                     (const MethodInfo_1B59298 *)Method_System_Linq_Enumerable_ToList_uint___);
  v17 = (FileMergeAndSplit_CRCChecker_o *)sub_B0D974(FileMergeAndSplit_CRCChecker_TypeInfo, v15, v16);
  FileMergeAndSplit_CRCChecker___ctor(v17, outputMergeFile, v14, 0LL);
  _4__this->fields.crcCheckerClass = v17;
  sub_B0D840(&_4__this->fields.crcCheckerClass, v17);
  this = (MovieFileMerge__CRCDownloadAndCheck_d__33_o *)_4__this->fields.crcCheckerClass;
  if ( !this )
    goto LABEL_22;
  v18 = FileMergeAndSplit_CRCChecker__Run((FileMergeAndSplit_CRCChecker_o *)this, 0LL);
  v2->fields.__2__current = (Il2CppObject *)v18;
  v19 = &v2->fields.__2__current;
  sub_B0D840(v19, v18);
  *((_DWORD *)v19 - 2) = 2;
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
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_B0D8A8(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_B0D974(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_B0D8A8(&Method_MovieFileMerge__CRCDownloadAndCheck_d__33_System_Collections_IEnumerator_Reset__);
  sub_B0D948(v5, v6);
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
  _BOOL8 v13; // x0
  const MethodInfo *v14; // x1
  bool result; // w0
  __int64 v16; // x0
  System_Collections_IEnumerator_o *v17; // x0
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v18; // [xsp+28h] [xbp-48h] BYREF

  v2 = this;
  if ( (byte_4212746 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__uint__GetEnumerator__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_Enumerator_string__uint__MoveNext__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_Enumerator_string__uint__get_Current__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_KeyValuePair_string__uint__get_Key__, v5);
    this = (MovieFileMerge__DownloadMovie_d__34_o *)sub_B0D8A4(
                                                      &Method_System_Collections_Generic_KeyValuePair_string__uint__get_Value__,
                                                      v6);
    byte_4212746 = 1;
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
      sub_B0D97C(this);
    RequireDownLoadFilePathCRCDictionary = _4__this->fields.RequireDownLoadFilePathCRCDictionary;
    _4__this->fields.isDownloading = 1;
    _4__this->fields.downloadProgress = 0;
    if ( !RequireDownLoadFilePathCRCDictionary )
      sub_B0D97C(0LL);
    System_Collections_Generic_Dictionary_string__uint___GetEnumerator(
      &v18,
      RequireDownLoadFilePathCRCDictionary,
      (const MethodInfo_2E76408 *)Method_System_Collections_Generic_Dictionary_string__uint__GetEnumerator__);
    p__7__wrap1 = &v2->fields.__7__wrap1;
    v12 = *(_OWORD *)&v18.fields.dictionary;
    current = v18.fields.current;
    *(_QWORD *)&v2->fields.__7__wrap1.fields.getEnumeratorRetType = *(_QWORD *)&v18.fields.getEnumeratorRetType;
    v2->fields.__7__wrap1.fields.current = current;
    *(_OWORD *)&v2->fields.__7__wrap1.fields.dictionary = v12;
    sub_B0D840(&v2->fields.__7__wrap1, 0LL);
  }
  v2->fields.__1__state = -3;
  v13 = System_Collections_Generic_Dictionary_Enumerator_string__uint___MoveNext(
          p__7__wrap1,
          (const MethodInfo_26CD540 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__uint__MoveNext__);
  if ( v13 )
  {
    if ( !_4__this )
      sub_B0D97C(v13);
    if ( _4__this->fields.isDownloadCancel )
    {
      _4__this->fields.isDownloading = 0;
      MovieFileMerge__DownloadMovie_d__34____m__Finally1(v2, v14);
      return 0;
    }
    else
    {
      v17 = MovieFileMerge__Download(
              _4__this,
              (System_String_o *)v2->fields.__7__wrap1.fields.current.fields.key,
              (uint32_t)v2->fields.__7__wrap1.fields.current.fields.value,
              0LL);
      v2->fields.__2__current = (Il2CppObject *)v17;
      sub_B0D840(&v2->fields.__2__current, v17);
      result = 1;
      v2->fields.__1__state = 1;
    }
  }
  else
  {
    MovieFileMerge__DownloadMovie_d__34____m__Finally1(v2, v14);
    *(_QWORD *)&p__7__wrap1->fields.getEnumeratorRetType = 0LL;
    *(_OWORD *)&p__7__wrap1->fields.dictionary = 0u;
    p__7__wrap1->fields.current = 0u;
    if ( !_4__this )
      sub_B0D97C(v16);
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
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_B0D8A8(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_B0D974(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_B0D8A8(&Method_MovieFileMerge__DownloadMovie_d__34_System_Collections_IEnumerator_Reset__);
  sub_B0D948(v5, v6);
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
  if ( (byte_4212747 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_Enumerator_string__uint__Dispose__, method);
    byte_4212747 = 1;
  }
  this->fields.__1__state = -1;
  System_Collections_Generic_Dictionary_Enumerator_string__uint___Dispose(
    &this->fields.__7__wrap1,
    (const MethodInfo_26CD6AC *)Method_System_Collections_Generic_Dictionary_Enumerator_string__uint__Dispose__);
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
  __int64 v2; // x2
  MovieFileMerge__Download_d__41_o *v3; // x19
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
  struct MovieFileMerge_o *_4__this; // x20
  System_String_o *v36; // x0
  Il2CppObject *LocalFolderPath; // x0
  System_String_o *v38; // x0
  bool *p_isDownload_5__4; // x22
  struct System_Byte_array **p_readData_5__5; // x21
  uint32_t downloadingCRC; // w8
  System_String_array *v42; // x21
  __int64 v43; // x1
  ManagementManager_c *v44; // x0
  _BOOL4 v45; // w22
  CommonUI_o *v46; // x21
  System_String_o *v47; // x22
  __int64 v48; // x1
  __int64 v49; // x2
  ErrorDialog_ClickDelegate_o *v50; // x23
  System_Byte_array *readData_5__5; // x20
  uint32_t v52; // w0
  Il2CppObject **p__2__current; // x19
  int v54; // w8
  UnityEngine_WaitForEndOfFrame_o *v55; // x20
  __int64 v56; // x1
  __int64 v57; // x2
  float unscaledTime; // s8
  UnityEngine_WaitForEndOfFrame_o *v59; // x21
  MovieFileMerge__Download_d__41_o **p_loader; // x22
  struct System_String_o **p_errorCode_5__11; // x21
  System_String_o *error; // x0
  System_Byte_array *data; // x0
  UnityEngine_WaitForEndOfFrame_o *v64; // x20
  System_String_o *v65; // x1
  System_IO_DirectoryInfo_o *Parent; // x0
  System_IO_DirectoryInfo_o *v67; // x21
  System_String_o *v68; // x0
  System_String_o *v69; // x21
  int64_t FreeSize; // x21
  ManagerConfig_c *v71; // x0
  System_String_o *v72; // x22
  __int64 v73; // x1
  __int64 v74; // x2
  ErrorDialog_ClickDelegate_o *v75; // x23
  UnityEngine_WaitForEndOfFrame_o *v76; // x20
  float downloadProgress; // s0
  float loadProgress_5__7; // s9
  float v79; // s8
  float v80; // s0
  bool v81; // zf
  float v82; // s8
  System_String_o *downloadingURL; // x22
  System_String_o *v84; // x0
  System_String_o *v85; // x0
  System_Collections_Generic_Dictionary_string__string__o *ResponseHeaders; // x0
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v87; // x22
  System_String_o *v88; // x22
  MovieFileMerge__Download_d__41_o *v89; // x22
  int v90; // w8
  System_String_o *v91; // x23
  System_String_o *v92; // x0
  System_String_o *v93; // x24
  __int64 v94; // x1
  MovieFileMerge__Download_d__41_o *v95; // x23
  __int64 v96; // x1
  MovieFileMerge__Download_d__41_o *v97; // x22
  __int64 v98; // x1
  System_String_o *v99; // x0
  ManagerConfig_c *v100; // x0
  WebViewManager_o *Instance; // x0
  System_String_o *errorCode_5__11; // x21
  CommonUI_o *v103; // x22
  __int64 v104; // x1
  __int64 v105; // x2
  ErrorDialog_ClickDelegate_o *v106; // x23
  UnityEngine_WaitForEndOfFrame_o *v107; // x20
  int autoRetryCount_5__3; // w21
  ManagerConfig_c *v109; // x0
  float DOWNLOAD_RETRY_DELAY_TIME; // s8
  UnityEngine_WaitForSeconds_o *v111; // x20
  Il2CppObject *v112; // x21
  struct UnityEngine_Networking_UnityWebRequest_o **v113; // x20
  MovieFileMerge__Download_d__41_o *loader; // t1
  struct System_Byte_array **v115; // x0
  struct UnityEngine_Networking_UnityWebRequest_o **v116; // x21
  ManagerConfig_c *v117; // x0
  WebViewManager_o *v118; // x0
  System_String_o *v119; // x21
  CommonUI_o *v120; // x22
  __int64 v121; // x1
  __int64 v122; // x2
  ErrorDialog_ClickDelegate_o *v123; // x23
  UnityEngine_WaitForSeconds_o *v124; // x20
  __int64 v125; // x1
  ManagementManager_c *v126; // x0
  _BOOL4 isDuringStartup; // w23
  WebViewManager_o *v128; // x0
  struct System_String_o *errorLocalizeCode_5__12; // x8
  CommonUI_o *v130; // x22
  System_String_o *v131; // x21
  System_String_o *v132; // x23
  System_String_o *v133; // x23
  __int64 v134; // x1
  __int64 v135; // x2
  ErrorDialog_ClickDelegate_o *v136; // x24
  ManagerConfig_c *v137; // x0
  Il2CppObject *wait_5__8; // x1
  System_String_o *v139; // x23
  System_String_o *v140; // x23
  __int64 v141; // x1
  __int64 v142; // x2
  ErrorDialog_ClickDelegate_o *v143; // x24
  __int64 v144; // x0
  __int64 v145; // x0
  __int64 v146; // x0
  __int64 v147; // x1
  __int64 v148; // x2
  System_IO_IOException_o *v149; // x21
  System_String_o *v150; // x0
  __int64 v151; // x0
  UnityEngine_Networking_UnityWebRequest_o *v152; // x0
  Il2CppObject **v153; // x19
  System_Nullable_Vector2__o effectDistance; // [xsp+0h] [xbp-60h]
  System_Nullable_Vector2__o effectDistancea; // [xsp+0h] [xbp-60h]
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+18h] [xbp-48h] BYREF

  v3 = this;
  if ( (byte_4212745 & 1) == 0 )
  {
    sub_B0D8A4(&char___TypeInfo, method);
    sub_B0D8A4(&ErrorDialog_ClickDelegate_TypeInfo, v4);
    sub_B0D8A4(&CommonServicePluginScript_TypeInfo, v5);
    sub_B0D8A4(&Crc32_TypeInfo, v6);
    sub_B0D8A4(&UnityEngine_Debug_TypeInfo, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__string__TryGetValue__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__string__get_Count__, v9);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v10);
    sub_B0D8A4(&ManagementManager_TypeInfo, v11);
    sub_B0D8A4(&ManagerConfig_TypeInfo, v12);
    sub_B0D8A4(&Method_MovieFileMerge_EndRetryDialog__, v13);
    sub_B0D8A4(&Method_MovieFileMerge_EndWarningDialog__, v14);
    sub_B0D8A4(&NetworkManager_TypeInfo, v15);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v16);
    sub_B0D8A4(&string___TypeInfo, v17);
    sub_B0D8A4(&UnityEngine_WaitForEndOfFrame_TypeInfo, v18);
    sub_B0D8A4(&UnityEngine_WaitForSeconds_TypeInfo, v19);
    sub_B0D8A4(&StringLiteral_7118/*"HTTP"*/, v20);
    sub_B0D8A4(&StringLiteral_661/*")\n\n503 Auto retry count "*/, v21);
    sub_B0D8A4(&StringLiteral_664/*")\nfile crc ("*/, v22);
    sub_B0D8A4(&StringLiteral_1199/*"503"*/, v23);
    sub_B0D8A4(&StringLiteral_1749/*"ASSET_LOADER_ERROR_BOOT_RETRY_MESSAGE"*/, v24);
    sub_B0D8A4(&StringLiteral_15792/*"[FFFF80]Download error for debug"*/, v25);
    sub_B0D8A4(&StringLiteral_23688/*"{0}/{1}"*/, v26);
    sub_B0D8A4(&StringLiteral_12405/*"STATUS"*/, v27);
    sub_B0D8A4(&StringLiteral_660/*")\n\n"*/, v28);
    sub_B0D8A4(&StringLiteral_591/*"("*/, v29);
    sub_B0D8A4(&StringLiteral_662/*")\n\nAssetBundle file check sum error\nlist crc ("*/, v30);
    sub_B0D8A4(&StringLiteral_658/*")"*/, v31);
    sub_B0D8A4(&StringLiteral_1750/*"ASSET_LOADER_ERROR_TIME_OVER_MESSAGE"*/, v32);
    sub_B0D8A4(&StringLiteral_663/*")\n\nAssetBundle file download time over"*/, v33);
    this = (MovieFileMerge__Download_d__41_o *)sub_B0D8A4(&StringLiteral_1/*""*/, v34);
    byte_4212745 = 1;
  }
  value = 0LL;
  _4__this = v3->fields.__4__this;
  switch ( v3->fields.__1__state )
  {
    case 0:
      v3->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_223;
      v36 = System_String__Format_43845440(
              (System_String_o *)StringLiteral_23688/*"{0}/{1}"*/,
              (Il2CppObject *)_4__this->fields.assetFolderURL,
              (Il2CppObject *)v3->fields.fileName,
              0LL);
      _4__this->fields.downloadingURL = v36;
      sub_B0D840(&_4__this->fields.downloadingURL, v36);
      _4__this->fields.downloadingCRC = v3->fields.crc;
      LocalFolderPath = (Il2CppObject *)MovieFileMerge__GetLocalFolderPath(_4__this, 0LL);
      v38 = System_String__Format_43845440(
              (System_String_o *)StringLiteral_23688/*"{0}/{1}"*/,
              LocalFolderPath,
              (Il2CppObject *)v3->fields.fileName,
              0LL);
      v3->fields._dlFilePath_5__2 = v38;
      sub_B0D840(&v3->fields._dlFilePath_5__2, v38);
      v3->fields._isDownload_5__4 = 1;
      p_isDownload_5__4 = &v3->fields._isDownload_5__4;
      p_readData_5__5 = &v3->fields._readData_5__5;
      v3->fields._autoRetryCount_5__3 = 0;
      _4__this->fields.isErrorDialog = 0;
      goto LABEL_218;
    case 1:
      v3->fields.__1__state = -1;
      unscaledTime = UnityEngine_Time__get_unscaledTime(0LL);
      this = (MovieFileMerge__Download_d__41_o *)ManagerConfig_TypeInfo;
      if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ManagerConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
        this = (MovieFileMerge__Download_d__41_o *)ManagerConfig_TypeInfo;
      }
      v3->fields._requestTime_5__6 = unscaledTime + *(float *)&this[1].fields._dlFilePath_5__2[1].fields.m_stringLength;
      if ( !_4__this )
        goto LABEL_223;
      v3->fields._loadProgress_5__7 = 0.0;
      v59 = (UnityEngine_WaitForEndOfFrame_o *)sub_B0D974(UnityEngine_WaitForEndOfFrame_TypeInfo, v56, v57);
      UnityEngine_WaitForEndOfFrame___ctor(v59, 0LL);
      v3->fields._wait_5__8 = v59;
      sub_B0D840(&v3->fields._wait_5__8, v59);
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
        sub_B0D840(&_4__this->fields.loader, 0LL);
        LOBYTE(this) = 0;
        _4__this->fields.isDownloading = 0;
        return (char)this;
      }
      downloadProgress = UnityEngine_Networking_UnityWebRequest__get_downloadProgress(
                           (UnityEngine_Networking_UnityWebRequest_o *)this,
                           0LL);
      loadProgress_5__7 = v3->fields._loadProgress_5__7;
      v79 = downloadProgress;
      v80 = UnityEngine_Time__get_unscaledTime(0LL);
      v81 = v79 == loadProgress_5__7;
      v82 = v80;
      if ( !v81 )
      {
        v137 = ManagerConfig_TypeInfo;
        if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ManagerConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
          v137 = ManagerConfig_TypeInfo;
        }
        v3->fields._requestTime_5__6 = v82 + v137->static_fields->TIMEOUT;
        this = *p_loader;
        if ( *p_loader )
        {
          v3->fields._loadProgress_5__7 = UnityEngine_Networking_UnityWebRequest__get_downloadProgress(
                                            (UnityEngine_Networking_UnityWebRequest_o *)this,
                                            0LL);
LABEL_205:
          wait_5__8 = (Il2CppObject *)v3->fields._wait_5__8;
          v3->fields.__2__current = wait_5__8;
          sub_B0D840(&v3->fields.__2__current, wait_5__8);
          v3->fields.__1__state = 2;
          goto LABEL_180;
        }
        goto LABEL_223;
      }
      if ( v80 < v3->fields._requestTime_5__6 )
        goto LABEL_205;
LABEL_44:
      *(_WORD *)&v3->fields._isAutoRetry_5__9 = 0;
      v3->fields._errorCode_5__11 = 0LL;
      p_errorCode_5__11 = &v3->fields._errorCode_5__11;
      sub_B0D840(&v3->fields._errorCode_5__11, 0LL);
      v3->fields._errorLocalizeCode_5__12 = 0LL;
      sub_B0D840(&v3->fields._errorLocalizeCode_5__12, 0LL);
      this = *p_loader;
      if ( !*p_loader )
LABEL_223:
        sub_B0D97C(this);
      if ( !UnityEngine_Networking_UnityWebRequest__get_isDone((UnityEngine_Networking_UnityWebRequest_o *)this, 0LL) )
      {
        v65 = System_String__Concat_43852188(
                (System_String_o *)StringLiteral_591/*"("*/,
                _4__this->fields.downloadingURL,
                (System_String_o *)StringLiteral_663/*")\n\nAssetBundle file download time over"*/,
                0LL);
        *p_errorCode_5__11 = v65;
LABEL_63:
        sub_B0D840(&v3->fields._errorCode_5__11, v65);
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
        data = UnityEngine_Networking_DownloadHandler__get_data((UnityEngine_Networking_DownloadHandler_o *)this, 0LL);
        v3->fields._readData_5__5 = data;
        sub_B0D840(&v3->fields._readData_5__5, data);
        v3->fields.__2__current = 0LL;
        p__2__current = &v3->fields.__2__current;
        sub_B0D840(p__2__current, 0LL);
        v54 = 3;
        goto LABEL_179;
      }
      this = (MovieFileMerge__Download_d__41_o *)_4__this->fields.loader;
      if ( !this )
        goto LABEL_223;
      downloadingURL = _4__this->fields.downloadingURL;
      v84 = UnityEngine_Networking_UnityWebRequest__get_error((UnityEngine_Networking_UnityWebRequest_o *)this, 0LL);
      v85 = System_String__Concat_43853316(
              (System_String_o *)StringLiteral_591/*"("*/,
              downloadingURL,
              (System_String_o *)StringLiteral_660/*")\n\n"*/,
              v84,
              0LL);
      *p_errorCode_5__11 = v85;
      sub_B0D840(&v3->fields._errorCode_5__11, v85);
      this = (MovieFileMerge__Download_d__41_o *)_4__this->fields.loader;
      if ( !this )
        goto LABEL_223;
      ResponseHeaders = UnityEngine_Networking_UnityWebRequest__GetResponseHeaders(
                          (UnityEngine_Networking_UnityWebRequest_o *)this,
                          0LL);
      if ( !ResponseHeaders )
        goto LABEL_133;
      v87 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)ResponseHeaders;
      if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___get_Count(
             (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)ResponseHeaders,
             (const MethodInfo_2E4A864 *)Method_System_Collections_Generic_Dictionary_string__string__get_Count__) < 1
        || !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
              v87,
              (System_Xml_XmlQualifiedName_o *)StringLiteral_12405/*"STATUS"*/,
              &value,
              (const MethodInfo_2E4CA68 *)Method_System_Collections_Generic_Dictionary_string__string__TryGetValue__) )
      {
        goto LABEL_133;
      }
      v88 = (System_String_o *)value;
      this = (MovieFileMerge__Download_d__41_o *)sub_B0D8BC(char___TypeInfo, 1LL);
      if ( !this )
        goto LABEL_223;
      if ( !LODWORD(this->fields.__2__current) )
        goto LABEL_214;
      LOWORD(this->fields.__4__this) = 32;
      if ( !v88 )
        goto LABEL_223;
      this = (MovieFileMerge__Download_d__41_o *)System_String__Split_43910688(v88, (System_Char_array *)this, 1, 0LL);
      if ( !this )
        goto LABEL_223;
      v89 = this;
      if ( SLODWORD(this->fields.__2__current) < 2 )
        goto LABEL_133;
      this = (MovieFileMerge__Download_d__41_o *)this->fields.__4__this;
      if ( !this )
        goto LABEL_223;
      this = (MovieFileMerge__Download_d__41_o *)System_String__StartsWith(
                                                   (System_String_o *)this,
                                                   (System_String_o *)StringLiteral_7118/*"HTTP"*/,
                                                   0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
        goto LABEL_133;
      if ( LODWORD(v89->fields.__2__current) <= 1 )
        goto LABEL_214;
      this = (MovieFileMerge__Download_d__41_o *)v89->fields.fileName;
      if ( !this )
        goto LABEL_223;
      if ( System_String__Equals_43837244((System_String_o *)this, (System_String_o *)StringLiteral_1199/*"503"*/, 0LL) )
      {
        v90 = v3->fields._autoRetryCount_5__3 + 1;
        v3->fields._isAutoRetry_5__9 = 1;
        v3->fields._autoRetryCount_5__3 = v90;
        v91 = _4__this->fields.downloadingURL;
        v92 = System_Int32__ToString((int)v3 + 64, 0LL);
        v65 = System_String__Concat_43853316(
                (System_String_o *)StringLiteral_591/*"("*/,
                v91,
                (System_String_o *)StringLiteral_661/*")\n\n503 Auto retry count "*/,
                v92,
                0LL);
        v3->fields._errorCode_5__11 = v65;
        goto LABEL_63;
      }
      goto LABEL_133;
    case 2:
      v3->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_223;
      goto LABEL_42;
    case 3:
      v3->fields.__1__state = -1;
      readData_5__5 = v3->fields._readData_5__5;
      if ( (BYTE3(Crc32_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Crc32_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
      v52 = Crc32__Compute(readData_5__5, 0LL);
      v3->fields.__2__current = 0LL;
      p__2__current = &v3->fields.__2__current;
      *((_DWORD *)p__2__current + 24) = v52;
      sub_B0D840(p__2__current, 0LL);
      v54 = 4;
      goto LABEL_179;
    case 4:
      v3->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_223;
      downloadingCRC = _4__this->fields.downloadingCRC;
      if ( v3->fields._downloadCrc_5__13 != downloadingCRC && downloadingCRC )
      {
        this = (MovieFileMerge__Download_d__41_o *)sub_B0D8BC(string___TypeInfo, 7LL);
        if ( !this )
          goto LABEL_223;
        v42 = (System_String_array *)this;
        this = (MovieFileMerge__Download_d__41_o *)StringLiteral_591/*"("*/;
        if ( StringLiteral_591/*"("*/ )
        {
          this = (MovieFileMerge__Download_d__41_o *)sub_B0D964(StringLiteral_591/*"("*/, v42->obj.klass->_1.element_class);
          if ( !this )
            goto LABEL_215;
          v43 = StringLiteral_591/*"("*/;
        }
        else
        {
          v43 = 0LL;
        }
        if ( !v42->max_length )
          goto LABEL_214;
        v42->m_Items[0] = (System_String_o *)v43;
        sub_B0D840(v42->m_Items, v43);
        v93 = _4__this->fields.downloadingURL;
        if ( !v93
          || (this = (MovieFileMerge__Download_d__41_o *)sub_B0D964(
                                                           _4__this->fields.downloadingURL,
                                                           v42->obj.klass->_1.element_class)) != 0LL )
        {
          if ( v42->max_length <= 1 )
            goto LABEL_214;
          v42->m_Items[1] = v93;
          sub_B0D840(&v42->m_Items[1], v93);
          this = (MovieFileMerge__Download_d__41_o *)StringLiteral_662/*")\n\nAssetBundle file check sum error\nlist crc ("*/;
          if ( StringLiteral_662/*")\n\nAssetBundle file check sum error\nlist crc ("*/ )
          {
            this = (MovieFileMerge__Download_d__41_o *)sub_B0D964(StringLiteral_662/*")\n\nAssetBundle file check sum error\nlist crc ("*/, v42->obj.klass->_1.element_class);
            if ( !this )
              goto LABEL_215;
            v94 = StringLiteral_662/*")\n\nAssetBundle file check sum error\nlist crc ("*/;
          }
          else
          {
            v94 = 0LL;
          }
          if ( v42->max_length <= 2 )
            goto LABEL_214;
          v42->m_Items[2] = (System_String_o *)v94;
          sub_B0D840(&v42->m_Items[2], v94);
          this = (MovieFileMerge__Download_d__41_o *)System_UInt32__ToString((int)_4__this + 88, 0LL);
          v95 = this;
          if ( !this
            || (this = (MovieFileMerge__Download_d__41_o *)sub_B0D964(this, v42->obj.klass->_1.element_class)) != 0LL )
          {
            if ( v42->max_length <= 3 )
              goto LABEL_214;
            v42->m_Items[3] = (System_String_o *)v95;
            sub_B0D840(&v42->m_Items[3], v95);
            this = (MovieFileMerge__Download_d__41_o *)StringLiteral_664/*")\nfile crc ("*/;
            if ( StringLiteral_664/*")\nfile crc ("*/ )
            {
              this = (MovieFileMerge__Download_d__41_o *)sub_B0D964(StringLiteral_664/*")\nfile crc ("*/, v42->obj.klass->_1.element_class);
              if ( !this )
                goto LABEL_215;
              v96 = StringLiteral_664/*")\nfile crc ("*/;
            }
            else
            {
              v96 = 0LL;
            }
            if ( v42->max_length <= 4 )
              goto LABEL_214;
            v42->m_Items[4] = (System_String_o *)v96;
            sub_B0D840(&v42->m_Items[4], v96);
            this = (MovieFileMerge__Download_d__41_o *)System_UInt32__ToString((int)v3 + 120, 0LL);
            v97 = this;
            if ( !this
              || (this = (MovieFileMerge__Download_d__41_o *)sub_B0D964(this, v42->obj.klass->_1.element_class)) != 0LL )
            {
              if ( v42->max_length <= 5 )
                goto LABEL_214;
              v42->m_Items[5] = (System_String_o *)v97;
              sub_B0D840(&v42->m_Items[5], v97);
              this = (MovieFileMerge__Download_d__41_o *)StringLiteral_658/*")"*/;
              if ( !StringLiteral_658/*")"*/ )
              {
                v98 = 0LL;
LABEL_131:
                if ( v42->max_length > 6 )
                {
                  v42->m_Items[6] = (System_String_o *)v98;
                  sub_B0D840(&v42->m_Items[6], v98);
                  v99 = System_String__Concat_43930028(v42, 0LL);
                  v3->fields._errorCode_5__11 = v99;
                  sub_B0D840(&v3->fields._errorCode_5__11, v99);
                  v3->fields._isCrcError_5__10 = 1;
                  goto LABEL_133;
                }
LABEL_214:
                v144 = sub_B0D9A8(this);
                sub_B0D948(v144, 0LL);
              }
              this = (MovieFileMerge__Download_d__41_o *)sub_B0D964(StringLiteral_658/*")"*/, v42->obj.klass->_1.element_class);
              if ( this )
              {
                v98 = StringLiteral_658/*")"*/;
                goto LABEL_131;
              }
            }
          }
        }
LABEL_215:
        v145 = sub_B0D99C();
        sub_B0D948(v145, 0LL);
      }
      Parent = System_IO_Directory__GetParent(v3->fields._dlFilePath_5__2, 0LL);
      v67 = Parent;
      if ( !Parent )
        sub_B0D97C(0LL);
      if ( (((__int64 (__fastcall *)(System_IO_DirectoryInfo_o *, Il2CppMethodPointer))Parent->klass->vtable._9_get_Exists.method)(
              Parent,
              Parent->klass->vtable._10_Delete.methodPtr) & 1) == 0 )
      {
        v68 = (System_String_o *)((__int64 (__fastcall *)(System_IO_DirectoryInfo_o *, Il2CppMethodPointer))v67->klass->vtable._7_get_FullName.method)(
                                   v67,
                                   v67->klass->vtable._8_get_Name.methodPtr);
        System_IO_Directory__CreateDirectory(v68, 0LL);
      }
      v69 = MovieFileMerge__GetLocalFolderPath(_4__this, 0LL);
      if ( (BYTE3(CommonServicePluginScript_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CommonServicePluginScript_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CommonServicePluginScript_TypeInfo);
      }
      FreeSize = CommonServicePluginScript__GetFreeSize(v69, 0LL);
      if ( FreeSize >= 1 )
      {
        v71 = ManagerConfig_TypeInfo;
        if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ManagerConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
          v71 = ManagerConfig_TypeInfo;
        }
        if ( FreeSize < v71->static_fields->LIMIT_FREE_SIZE )
        {
          v146 = sub_B0D8A8(&System_IO_IOException_TypeInfo);
          v149 = (System_IO_IOException_o *)sub_B0D974(v146, v147, v148);
          v150 = (System_String_o *)sub_B0D8A8(&StringLiteral_5336/*"Disk full"*/);
          System_IO_IOException___ctor_38462808(v149, v150, 0LL);
          v151 = sub_B0D8A8(&Method_MovieFileMerge__Download_d__41_MoveNext__);
          sub_B0D948(v149, v151);
        }
      }
      if ( System_IO_File__Exists(v3->fields._dlFilePath_5__2, 0LL) )
        System_IO_File__Delete(v3->fields._dlFilePath_5__2, 0LL);
      ++_4__this->fields.downloadProgress;
      System_IO_File__WriteAllBytes(v3->fields._dlFilePath_5__2, v3->fields._readData_5__5, 0LL);
      v3->fields._isDownload_5__4 = 0;
LABEL_133:
      method = (const MethodInfo *)v3->fields._errorCode_5__11;
      if ( method )
      {
        MovieFileMerge__AssetLoadLogError(_4__this, (System_String_o *)method, 0LL);
        v100 = ManagerConfig_TypeInfo;
        if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ManagerConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
          v100 = ManagerConfig_TypeInfo;
        }
        if ( v100->static_fields->UseDebugCommand )
        {
          _4__this->fields.isErrorDialog = 1;
          Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          errorCode_5__11 = v3->fields._errorCode_5__11;
          v103 = (CommonUI_o *)Instance;
          v106 = (ErrorDialog_ClickDelegate_o *)sub_B0D974(ErrorDialog_ClickDelegate_TypeInfo, v104, v105);
          ErrorDialog_ClickDelegate___ctor(
            v106,
            (Il2CppObject *)_4__this,
            Method_MovieFileMerge_EndWarningDialog__,
            0LL);
          if ( !v103 )
            goto LABEL_223;
          effectDistance.fields.value = 0LL;
          *(_DWORD *)&effectDistance.fields.has_value = 0;
          CommonUI__OpenWarningDialog(
            v103,
            (System_String_o *)StringLiteral_15792/*"[FFFF80]Download error for debug"*/,
            errorCode_5__11,
            v106,
            1,
            0,
            -1.0,
            1,
            effectDistance,
            0LL);
LABEL_140:
          if ( _4__this->fields.isErrorDialog )
          {
            v107 = (UnityEngine_WaitForEndOfFrame_o *)sub_B0D974(UnityEngine_WaitForEndOfFrame_TypeInfo, method, v2);
            UnityEngine_WaitForEndOfFrame___ctor(v107, 0LL);
            v3->fields.__2__current = (Il2CppObject *)v107;
            p__2__current = &v3->fields.__2__current;
            sub_B0D840(p__2__current, v107);
            v54 = 5;
            goto LABEL_179;
          }
        }
        if ( v3->fields._isAutoRetry_5__9 )
        {
          autoRetryCount_5__3 = v3->fields._autoRetryCount_5__3;
          v109 = ManagerConfig_TypeInfo;
          if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !ManagerConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
            v109 = ManagerConfig_TypeInfo;
          }
          DOWNLOAD_RETRY_DELAY_TIME = v109->static_fields->DOWNLOAD_RETRY_DELAY_TIME;
          v111 = (UnityEngine_WaitForSeconds_o *)sub_B0D974(UnityEngine_WaitForSeconds_TypeInfo, method, v2);
          UnityEngine_WaitForSeconds___ctor(v111, DOWNLOAD_RETRY_DELAY_TIME * (float)autoRetryCount_5__3, 0LL);
          v3->fields.__2__current = (Il2CppObject *)v111;
          p__2__current = &v3->fields.__2__current;
          sub_B0D840(p__2__current, v111);
          v54 = 6;
          goto LABEL_179;
        }
        v112 = (Il2CppObject *)v3->fields._errorCode_5__11;
        if ( v3->fields._isCrcError_5__10 )
        {
          if ( (BYTE3(UnityEngine_Debug_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
          }
          UnityEngine_Debug__LogError(v112, 0LL);
        }
        else
        {
          MovieFileMerge__AssetLoadLogError(_4__this, v3->fields._errorCode_5__11, 0LL);
          _4__this->fields.isErrorDialog = 1;
          if ( (BYTE3(ManagementManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !ManagementManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
          }
          if ( !byte_42124C8 )
          {
            sub_B0D8A4(&ManagementManager_TypeInfo, v125);
            byte_42124C8 = 1;
          }
          v126 = ManagementManager_TypeInfo;
          if ( (BYTE3(ManagementManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !ManagementManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
            v126 = ManagementManager_TypeInfo;
          }
          isDuringStartup = v126->static_fields->isDuringStartup;
          v128 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          errorLocalizeCode_5__12 = v3->fields._errorLocalizeCode_5__12;
          v130 = (CommonUI_o *)v128;
          v131 = (System_String_o *)StringLiteral_1/*""*/;
          if ( isDuringStartup )
          {
            if ( errorLocalizeCode_5__12 )
              v132 = v3->fields._errorLocalizeCode_5__12;
            else
              v132 = (System_String_o *)StringLiteral_1749/*"ASSET_LOADER_ERROR_BOOT_RETRY_MESSAGE"*/;
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v133 = LocalizationManager__Get(v132, 0LL);
            v136 = (ErrorDialog_ClickDelegate_o *)sub_B0D974(ErrorDialog_ClickDelegate_TypeInfo, v134, v135);
            ErrorDialog_ClickDelegate___ctor(
              v136,
              (Il2CppObject *)_4__this,
              Method_MovieFileMerge_EndRetryDialog__,
              0LL);
            if ( !v130 )
              goto LABEL_223;
            CommonUI__OpenRetryBootDialog(v130, v131, v133, v136, 1, 0LL);
          }
          else
          {
            if ( errorLocalizeCode_5__12 )
              v139 = v3->fields._errorLocalizeCode_5__12;
            else
              v139 = (System_String_o *)StringLiteral_1750/*"ASSET_LOADER_ERROR_TIME_OVER_MESSAGE"*/;
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v140 = LocalizationManager__Get(v139, 0LL);
            v143 = (ErrorDialog_ClickDelegate_o *)sub_B0D974(ErrorDialog_ClickDelegate_TypeInfo, v141, v142);
            ErrorDialog_ClickDelegate___ctor(
              v143,
              (Il2CppObject *)_4__this,
              Method_MovieFileMerge_EndRetryDialog__,
              0LL);
            if ( !v130 )
              goto LABEL_223;
            CommonUI__OpenRetryDialog(v130, v131, v140, v143, 1, 0LL);
          }
LABEL_35:
          if ( _4__this->fields.isErrorDialog )
          {
            v55 = (UnityEngine_WaitForEndOfFrame_o *)sub_B0D974(UnityEngine_WaitForEndOfFrame_TypeInfo, method, v2);
            UnityEngine_WaitForEndOfFrame___ctor(v55, 0LL);
            v3->fields.__2__current = (Il2CppObject *)v55;
            p__2__current = &v3->fields.__2__current;
            sub_B0D840(p__2__current, v55);
            v54 = 7;
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
      if ( !byte_42124CA )
      {
        sub_B0D8A4(&NetworkManager_TypeInfo, method);
        byte_42124CA = 1;
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
        v113 = &_4__this->fields.loader;
        this = loader;
        if ( !loader )
          goto LABEL_223;
        UnityEngine_Networking_UnityWebRequest__Dispose((UnityEngine_Networking_UnityWebRequest_o *)this, 0LL);
        *v113 = 0LL;
        sub_B0D840(v113, 0LL);
        v3->fields._readData_5__5 = 0LL;
        v115 = &v3->fields._readData_5__5;
      }
      else
      {
        if ( !_4__this )
          goto LABEL_223;
        p_isDownload_5__4 = &v3->fields._isDownload_5__4;
        v116 = &_4__this->fields.loader;
        this = (MovieFileMerge__Download_d__41_o *)_4__this->fields.loader;
        if ( v3->fields._isDownload_5__4 )
        {
          if ( !this )
            goto LABEL_223;
          UnityEngine_Networking_UnityWebRequest__Dispose((UnityEngine_Networking_UnityWebRequest_o *)this, 0LL);
          *v116 = 0LL;
          sub_B0D840(&_4__this->fields.loader, 0LL);
          v3->fields._readData_5__5 = 0LL;
          p_readData_5__5 = &v3->fields._readData_5__5;
          sub_B0D840(&v3->fields._readData_5__5, 0LL);
          if ( !v3->fields._isCrcError_5__10 )
          {
LABEL_177:
            v3->fields._wait_5__8 = 0LL;
            sub_B0D840(&v3->fields._wait_5__8, 0LL);
            v3->fields._errorCode_5__11 = 0LL;
            sub_B0D840(&v3->fields._errorCode_5__11, 0LL);
            v3->fields._errorLocalizeCode_5__12 = 0LL;
            sub_B0D840(&v3->fields._errorLocalizeCode_5__12, 0LL);
            do
            {
              *p_readData_5__5 = 0LL;
              sub_B0D840(p_readData_5__5, 0LL);
LABEL_218:
              *p_readData_5__5 = 0LL;
              sub_B0D840(p_readData_5__5, 0LL);
            }
            while ( !*p_isDownload_5__4 );
            v152 = UnityEngine_Networking_UnityWebRequest__Get(_4__this->fields.downloadingURL, 0LL);
            _4__this->fields.loader = v152;
            sub_B0D840(&_4__this->fields.loader, v152);
            this = (MovieFileMerge__Download_d__41_o *)_4__this->fields.loader;
            if ( this )
            {
              UnityEngine_Networking_UnityWebRequest__SendWebRequest(
                (UnityEngine_Networking_UnityWebRequest_o *)this,
                0LL);
              v3->fields.__2__current = 0LL;
              v153 = &v3->fields.__2__current;
              sub_B0D840(v153, 0LL);
              LOBYTE(this) = 1;
              *((_DWORD *)v153 - 2) = 1;
              return (char)this;
            }
            goto LABEL_223;
          }
          if ( !v3->fields._errorCode_5__11 )
            goto LABEL_178;
          v117 = ManagerConfig_TypeInfo;
          if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !ManagerConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
            v117 = ManagerConfig_TypeInfo;
          }
          if ( !v117->static_fields->UseDebugCommand )
            goto LABEL_178;
          _4__this->fields.isErrorDialog = 1;
          v118 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v119 = v3->fields._errorCode_5__11;
          v120 = (CommonUI_o *)v118;
          v123 = (ErrorDialog_ClickDelegate_o *)sub_B0D974(ErrorDialog_ClickDelegate_TypeInfo, v121, v122);
          ErrorDialog_ClickDelegate___ctor(
            v123,
            (Il2CppObject *)_4__this,
            Method_MovieFileMerge_EndWarningDialog__,
            0LL);
          if ( !v120 )
            goto LABEL_223;
          effectDistancea.fields.value = 0LL;
          *(_DWORD *)&effectDistancea.fields.has_value = 0;
          CommonUI__OpenWarningDialog(
            v120,
            (System_String_o *)StringLiteral_15792/*"[FFFF80]Download error for debug"*/,
            v119,
            v123,
            1,
            0,
            -1.0,
            1,
            effectDistancea,
            0LL);
LABEL_60:
          if ( _4__this->fields.isErrorDialog )
          {
            v64 = (UnityEngine_WaitForEndOfFrame_o *)sub_B0D974(UnityEngine_WaitForEndOfFrame_TypeInfo, method, v2);
            UnityEngine_WaitForEndOfFrame___ctor(v64, 0LL);
            v3->fields.__2__current = (Il2CppObject *)v64;
            p__2__current = &v3->fields.__2__current;
            sub_B0D840(p__2__current, v64);
            v54 = 8;
          }
          else
          {
LABEL_178:
            v124 = (UnityEngine_WaitForSeconds_o *)sub_B0D974(UnityEngine_WaitForSeconds_TypeInfo, method, v2);
            UnityEngine_WaitForSeconds___ctor(v124, 1.0, 0LL);
            v3->fields.__2__current = (Il2CppObject *)v124;
            p__2__current = &v3->fields.__2__current;
            sub_B0D840(p__2__current, v124);
            v54 = 9;
          }
LABEL_179:
          *((_DWORD *)p__2__current - 2) = v54;
LABEL_180:
          LOBYTE(this) = 1;
          return (char)this;
        }
        if ( !this )
          return (char)this;
        UnityEngine_Networking_UnityWebRequest__Dispose((UnityEngine_Networking_UnityWebRequest_o *)this, 0LL);
        v115 = (struct System_Byte_array **)&_4__this->fields.loader;
        *v116 = 0LL;
      }
      sub_B0D840(v115, 0LL);
LABEL_165:
      LOBYTE(this) = 0;
      return (char)this;
    case 5:
      v3->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_223;
      goto LABEL_140;
    case 6:
      v3->fields.__1__state = -1;
      goto LABEL_152;
    case 7:
      v3->fields.__1__state = -1;
      if ( _4__this )
        goto LABEL_35;
      goto LABEL_223;
    case 8:
      v3->fields.__1__state = -1;
      if ( _4__this )
        goto LABEL_60;
      goto LABEL_223;
    case 9:
      v3->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_223;
      _4__this->fields.isErrorDialog = 1;
      if ( (BYTE3(ManagementManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ManagementManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
      }
      if ( !byte_42124C8 )
      {
        sub_B0D8A4(&ManagementManager_TypeInfo, method);
        byte_42124C8 = 1;
      }
      v44 = ManagementManager_TypeInfo;
      if ( (BYTE3(ManagementManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ManagementManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
        v44 = ManagementManager_TypeInfo;
      }
      v45 = v44->static_fields->isDuringStartup;
      v46 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( v45 )
      {
        if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v47 = LocalizationManager__Get((System_String_o *)StringLiteral_1749/*"ASSET_LOADER_ERROR_BOOT_RETRY_MESSAGE"*/, 0LL);
        v50 = (ErrorDialog_ClickDelegate_o *)sub_B0D974(ErrorDialog_ClickDelegate_TypeInfo, v48, v49);
        ErrorDialog_ClickDelegate___ctor(v50, (Il2CppObject *)_4__this, Method_MovieFileMerge_EndRetryDialog__, 0LL);
        if ( !v46 )
          goto LABEL_223;
        CommonUI__OpenRetryBootDialog(v46, (System_String_o *)StringLiteral_1/*""*/, v47, v50, 1, 0LL);
      }
      else
      {
        if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v72 = LocalizationManager__Get((System_String_o *)StringLiteral_1750/*"ASSET_LOADER_ERROR_TIME_OVER_MESSAGE"*/, 0LL);
        v75 = (ErrorDialog_ClickDelegate_o *)sub_B0D974(ErrorDialog_ClickDelegate_TypeInfo, v73, v74);
        ErrorDialog_ClickDelegate___ctor(v75, (Il2CppObject *)_4__this, Method_MovieFileMerge_EndRetryDialog__, 0LL);
        if ( !v46 )
          goto LABEL_223;
        CommonUI__OpenRetryDialog(v46, (System_String_o *)StringLiteral_1/*""*/, v72, v75, 1, 0LL);
      }
LABEL_83:
      if ( _4__this->fields.isErrorDialog )
      {
        v76 = (UnityEngine_WaitForEndOfFrame_o *)sub_B0D974(UnityEngine_WaitForEndOfFrame_TypeInfo, method, v2);
        UnityEngine_WaitForEndOfFrame___ctor(v76, 0LL);
        v3->fields.__2__current = (Il2CppObject *)v76;
        p__2__current = &v3->fields.__2__current;
        sub_B0D840(p__2__current, v76);
        v54 = 10;
        goto LABEL_179;
      }
      p_readData_5__5 = &v3->fields._readData_5__5;
      p_isDownload_5__4 = &v3->fields._isDownload_5__4;
      goto LABEL_177;
    case 0xA:
      v3->fields.__1__state = -1;
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
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_B0D8A8(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_B0D974(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_B0D8A8(&Method_MovieFileMerge__Download_d__41_System_Collections_IEnumerator_Reset__);
  sub_B0D948(v5, v6);
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
  __int64 v14; // x1
  __int64 v15; // x2
  FileMergeAndSplit_Merge_o *v16; // x23
  FileMergeAndSplit_Merge_o *mergeClass; // x21
  __int64 v18; // x1
  __int64 v19; // x2
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v20; // x22
  System_Collections_IEnumerator_o *v21; // x0
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  struct FileMergeAndSplit_Merge_o *v24; // x8
  System_String_o *v25; // x21
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x0
  System_Collections_Generic_List_uint__o *v27; // x22
  __int64 v28; // x1
  __int64 v29; // x2
  FileMergeAndSplit_CRCChecker_o *v30; // x23
  System_Collections_IEnumerator_o *v31; // x0
  Il2CppObject **v32; // x19

  v2 = this;
  if ( (byte_4212748 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_Exception___ctor__, method);
    sub_B0D8A4(&System_Action_Exception__TypeInfo, v3);
    sub_B0D8A4(&FileMergeAndSplit_CRCChecker_TypeInfo, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__uint__get_Values__, v5);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToList_uint___, v6);
    sub_B0D8A4(&FileMergeAndSplit_Merge_TypeInfo, v7);
    this = (MovieFileMerge__Merge_d__35_o *)sub_B0D8A4(&Method_MovieFileMerge__Merge_b__35_0__, v8);
    byte_4212748 = 1;
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
        System_IO_Directory__Delete_43785104(_4__this->fields.outputSplitFileFolder, 1, 0LL);
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
        v16 = (FileMergeAndSplit_Merge_o *)sub_B0D974(FileMergeAndSplit_Merge_TypeInfo, v14, v15);
        FileMergeAndSplit_Merge___ctor(v16, v13, outputMergeFile, 0LL);
        _4__this->fields.mergeClass = v16;
        sub_B0D840(&_4__this->fields.mergeClass, v16);
        mergeClass = _4__this->fields.mergeClass;
        v20 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B0D974(
                                                                                     System_Action_Exception__TypeInfo,
                                                                                     v18,
                                                                                     v19);
        System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
          v20,
          (Il2CppObject *)_4__this,
          Method_MovieFileMerge__Merge_b__35_0__,
          (const MethodInfo_246EA3C *)Method_System_Action_Exception___ctor__);
        if ( mergeClass )
        {
          v21 = FileMergeAndSplit_Merge__Run(mergeClass, (System_Action_Exception__o *)v20, 0LL);
          v2->fields.__2__current = (Il2CppObject *)v21;
          p__2__current = &v2->fields.__2__current;
          sub_B0D840(p__2__current, v21);
          result = 1;
          *((_DWORD *)p__2__current - 2) = 1;
          return result;
        }
      }
LABEL_22:
      sub_B0D97C(this);
    }
    return 0;
  }
  v2->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_22;
  v24 = _4__this->fields.mergeClass;
  if ( !v24 )
    goto LABEL_22;
  if ( v24->fields.isError )
    return 0;
  this = (MovieFileMerge__Merge_d__35_o *)_4__this->fields.AllDownLoadFilePathCRCDictionary;
  if ( !this )
    goto LABEL_22;
  v25 = _4__this->fields.outputMergeFile;
  Values = System_Collections_Generic_Dictionary_string__uint___get_Values(
             (System_Collections_Generic_Dictionary_string__uint__o *)this,
             (const MethodInfo_2E75C18 *)Method_System_Collections_Generic_Dictionary_string__uint__get_Values__);
  v27 = (System_Collections_Generic_List_uint__o *)System_Linq_Enumerable__ToList_uint_(
                                                     (System_Collections_Generic_IEnumerable_TSource__o *)Values,
                                                     (const MethodInfo_1B59298 *)Method_System_Linq_Enumerable_ToList_uint___);
  v30 = (FileMergeAndSplit_CRCChecker_o *)sub_B0D974(FileMergeAndSplit_CRCChecker_TypeInfo, v28, v29);
  FileMergeAndSplit_CRCChecker___ctor(v30, v25, v27, 0LL);
  _4__this->fields.crcCheckerClass = v30;
  sub_B0D840(&_4__this->fields.crcCheckerClass, v30);
  this = (MovieFileMerge__Merge_d__35_o *)_4__this->fields.crcCheckerClass;
  if ( !this )
    goto LABEL_22;
  v31 = FileMergeAndSplit_CRCChecker__Run((FileMergeAndSplit_CRCChecker_o *)this, 0LL);
  v2->fields.__2__current = (Il2CppObject *)v31;
  v32 = &v2->fields.__2__current;
  sub_B0D840(v32, v31);
  *((_DWORD *)v32 - 2) = 2;
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
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_B0D8A8(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_B0D974(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_B0D8A8(&Method_MovieFileMerge__Merge_d__35_System_Collections_IEnumerator_Reset__);
  sub_B0D948(v5, v6);
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
  __int64 v2; // x2
  MovieFileMerge__PlayCRIMovie_d__31_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  int32_t _1__state; // w8
  Il2CppObject *v13; // x21
  Il2CppObject **p__8__1; // x20
  UnityEngine_UI_Dropdown_DropdownItem_o *UIAtlas; // x21
  Il2CppObject *v16; // x21
  __int64 v17; // x1
  __int64 v18; // x2
  CRIMoviePlayer_o *klass; // x21
  System_String_o *filePath; // x22
  BgmManager_c *v21; // x0
  Il2CppObject *v22; // x24
  float masterVolume; // s8
  System_Action_o *v24; // x23
  Il2CppObject **p__2__current; // x19
  bool result; // w0

  v3 = this;
  if ( (byte_4212749 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&BgmManager_TypeInfo, v4);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_CRIMoviePlayer___, v5);
    sub_B0D8A4(&Method_UnityEngine_Object_Instantiate_GameObject___, v6);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v7);
    sub_B0D8A4(&Method_UnityEngine_Resources_Load_GameObject___, v8);
    sub_B0D8A4(&Method_MovieFileMerge___c__DisplayClass31_0__PlayCRIMovie_b__0__, v9);
    sub_B0D8A4(&MovieFileMerge___c__DisplayClass31_0_TypeInfo, v10);
    this = (MovieFileMerge__PlayCRIMovie_d__31_o *)sub_B0D8A4(&StringLiteral_3449/*"CRIMovie/CRIMoviePlayerWithPanel"*/, v11);
    byte_4212749 = 1;
  }
  _1__state = v3->fields.__1__state;
  if ( _1__state == 1 )
  {
    p__8__1 = (Il2CppObject **)&v3->fields.__8__1;
    v3->fields.__1__state = -1;
  }
  else
  {
    if ( _1__state )
      return 0;
    v3->fields.__1__state = -1;
    v13 = (Il2CppObject *)sub_B0D974(MovieFileMerge___c__DisplayClass31_0_TypeInfo, method, v2);
    System_Object___ctor(v13, 0LL);
    p__8__1 = (Il2CppObject **)&v3->fields.__8__1;
    v3->fields.__8__1 = (struct MovieFileMerge___c__DisplayClass31_0_o *)v13;
    sub_B0D840(&v3->fields.__8__1, v13);
    UIAtlas = (UnityEngine_UI_Dropdown_DropdownItem_o *)UnityEngine_Resources__Load_UIAtlas_(
                                                          (System_String_o *)StringLiteral_3449/*"CRIMovie/CRIMoviePlayerWithPanel"*/,
                                                          (const MethodInfo_204DCF8 *)Method_UnityEngine_Resources_Load_GameObject___);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    this = (MovieFileMerge__PlayCRIMovie_d__31_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                                     UIAtlas,
                                                     (const MethodInfo_204A984 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !this )
      goto LABEL_29;
    v16 = *p__8__1;
    this = (MovieFileMerge__PlayCRIMovie_d__31_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                     (UnityEngine_GameObject_o *)this,
                                                     (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_CRIMoviePlayer___);
    if ( !v16 )
      goto LABEL_29;
    v16[1].klass = (Il2CppClass *)this;
    sub_B0D840(&v16[1], this);
    if ( !*p__8__1 )
      goto LABEL_29;
    LOBYTE((*p__8__1)[1].monitor) = 1;
    if ( !*p__8__1 )
      goto LABEL_29;
    klass = (CRIMoviePlayer_o *)(*p__8__1)[1].klass;
    filePath = v3->fields.filePath;
    if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BgmManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
    if ( !byte_4210BC3 )
    {
      sub_B0D8A4(&BgmManager_TypeInfo, v17);
      byte_4210BC3 = 1;
    }
    v21 = BgmManager_TypeInfo;
    if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BgmManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
      v21 = BgmManager_TypeInfo;
    }
    v22 = *p__8__1;
    masterVolume = v21->static_fields->masterVolume;
    v24 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v17, v18);
    System_Action___ctor(v24, v22, Method_MovieFileMerge___c__DisplayClass31_0__PlayCRIMovie_b__0__, 0LL);
    if ( !klass
      || (CRIMoviePlayer__Initialize(klass, filePath, filePath, masterVolume, 1, 0LL, v24, 1, 0LL, 0, 0, 1, 0LL),
          !*p__8__1)
      || (this = (MovieFileMerge__PlayCRIMovie_d__31_o *)(*p__8__1)[1].klass) == 0LL )
    {
LABEL_29:
      sub_B0D97C(this);
    }
    CRIMoviePlayer__MoviePlay((CRIMoviePlayer_o *)this, 1, 1, 1, 0LL);
  }
  if ( !*p__8__1 )
    goto LABEL_29;
  if ( LOBYTE((*p__8__1)[1].monitor) )
  {
    v3->fields.__2__current = 0LL;
    p__2__current = &v3->fields.__2__current;
    sub_B0D840(p__2__current, 0LL);
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
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_B0D8A8(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_B0D974(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_B0D8A8(&Method_MovieFileMerge__PlayCRIMovie_d__31_System_Collections_IEnumerator_Reset__);
  sub_B0D948(v5, v6);
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
  int32_t v7; // w8

  _1__state = this->fields.__1__state;
  result = 0;
  if ( _1__state == 1 )
  {
    v7 = -1;
  }
  else
  {
    if ( _1__state )
      return result;
    _4__this = this->fields.__4__this;
    this->fields.__1__state = -1;
    if ( !_4__this )
      sub_B0D97C(0LL);
    v6 = (Il2CppObject *)MovieFileMerge__PlayMP4_20210948(_4__this, _4__this->fields.outputMergeFile, 0, 0LL);
    this->fields.__2__current = v6;
    sub_B0D840(&this->fields.__2__current, v6);
    v7 = 1;
    result = 1;
  }
  this->fields.__1__state = v7;
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
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_B0D8A8(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_B0D974(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_B0D8A8(&Method_MovieFileMerge__PlayMP4_d__29_System_Collections_IEnumerator_Reset__);
  sub_B0D948(v5, v6);
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
  System_String_o *filePath; // x0
  MovieFileMerge_o *_4__this; // x20
  _BOOL8 IsNullOrEmpty; // x0
  bool result; // w0
  UnityEngine_WaitForEndOfFrame_o *v8; // x20
  int32_t v9; // w8
  UnityEngine_WaitForEndOfFrame_o *v10; // x20
  Il2CppObject *v11; // x0

  if ( (byte_421274A & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_WaitForEndOfFrame_TypeInfo, method);
    byte_421274A = 1;
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
        sub_B0D97C(IsNullOrEmpty);
      v11 = (Il2CppObject *)MovieFileMerge__PlayCRIMovie(_4__this, this->fields.filePath, 0LL);
      this->fields.__2__current = v11;
      sub_B0D840(&this->fields.__2__current, v11);
      result = 1;
      this->fields.__1__state = 1;
      break;
    case 1:
      this->fields.__1__state = -1;
      v10 = (UnityEngine_WaitForEndOfFrame_o *)sub_B0D974(UnityEngine_WaitForEndOfFrame_TypeInfo, method, v2);
      UnityEngine_WaitForEndOfFrame___ctor(v10, 0LL);
      this->fields.__2__current = (Il2CppObject *)v10;
      sub_B0D840(&this->fields.__2__current, v10);
      v9 = 2;
      goto LABEL_9;
    case 2:
      this->fields.__1__state = -1;
      v8 = (UnityEngine_WaitForEndOfFrame_o *)sub_B0D974(UnityEngine_WaitForEndOfFrame_TypeInfo, method, v2);
      UnityEngine_WaitForEndOfFrame___ctor(v8, 0LL);
      this->fields.__2__current = (Il2CppObject *)v8;
      sub_B0D840(&this->fields.__2__current, v8);
      v9 = 3;
LABEL_9:
      this->fields.__1__state = v9;
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
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_B0D8A8(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_B0D974(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_B0D8A8(&Method_MovieFileMerge__PlayMP4_d__30_System_Collections_IEnumerator_Reset__);
  sub_B0D948(v5, v6);
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
    sub_B0D97C(0LL);
  CRIMoviePlayer__Dispose(player, 0LL);
  this->fields.wait = 0;
}