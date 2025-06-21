void __fastcall MovieFileMerge___ctor(MovieFileMerge_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_Dictionary_TKey__TValue__o *v4; // x20
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  System_Collections_Generic_Dictionary_TKey__TValue__o *v7; // x20
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4B1B4C1 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_string__uint___ctor__, method);
    sub_1BCAFF8(&System_Collections_Generic_Dictionary_string__uint__TypeInfo, v3);
    byte_4B1B4C1 = 1;
  }
  v4 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1BCB244(System_Collections_Generic_Dictionary_string__uint__TypeInfo);
  System_Collections_Generic_Dictionary_object__uint____ctor(
    v4,
    (const MethodInfo_3397300 *)Method_System_Collections_Generic_Dictionary_string__uint___ctor__);
  this->fields.AllDownLoadFilePathCRCDictionary = (struct System_Collections_Generic_Dictionary_string__uint__o *)v4;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.AllDownLoadFilePathCRCDictionary, (int32_t)v4, v5, v6);
  v7 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1BCB244(System_Collections_Generic_Dictionary_string__uint__TypeInfo);
  System_Collections_Generic_Dictionary_object__uint____ctor(
    v7,
    (const MethodInfo_3397300 *)Method_System_Collections_Generic_Dictionary_string__uint___ctor__);
  this->fields.RequireDownLoadFilePathCRCDictionary = (struct System_Collections_Generic_Dictionary_string__uint__o *)v7;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.RequireDownLoadFilePathCRCDictionary, (int32_t)v7, v8, v9);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall MovieFileMerge__AssetLoadLogError(
        MovieFileMerge_o *this,
        System_String_o *errorCode,
        const MethodInfo *method)
{
  System_String_o *v3; // x19
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
  Il2CppObject *Instance; // x0
  __int64 v19; // x1
  __int64 v20; // x2
  const MethodInfo *v21; // x3
  Il2CppObject *v22; // x21
  int32_t v23; // w1
  const MethodInfo *v24; // x3
  int32_t v25; // w1
  const MethodInfo *v26; // x3
  int32_t v27; // w1
  const MethodInfo *v28; // x3
  int32_t v29; // w1
  const MethodInfo *v30; // x3
  int32_t v31; // w1
  const MethodInfo *v32; // x3
  int32_t v33; // w1
  const MethodInfo *v34; // x3
  int32_t v35; // w1
  const MethodInfo *v36; // x3
  int32_t v37; // w1
  __int64 v38; // x22
  __int64 v39; // x24

  v3 = errorCode;
  if ( (byte_4B1B4BF & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Debug_TypeInfo, errorCode);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__, v5);
    sub_1BCAFF8(&string___TypeInfo, v6);
    sub_1BCAFF8(&StringLiteral_14042/*"The request timed out."*/, v7);
    sub_1BCAFF8(&StringLiteral_13983/*"The network connection was lost."*/, v8);
    sub_1BCAFF8(&StringLiteral_4626/*"Connection reset by peer"*/, v9);
    sub_1BCAFF8(&StringLiteral_4981/*"DLErrorType"*/, v10);
    sub_1BCAFF8(&StringLiteral_4980/*"DLErrorAsset"*/, v11);
    sub_1BCAFF8(&StringLiteral_4625/*"Connection refused"*/, v12);
    sub_1BCAFF8(&StringLiteral_9381/*"No address associated with hostname"*/, v13);
    sub_1BCAFF8(&StringLiteral_2362/*"AssetBundle file download time over"*/, v14);
    sub_1BCAFF8(&StringLiteral_12809/*"Software caused connection abort"*/, v15);
    sub_1BCAFF8(&StringLiteral_4627/*"Connection timed out"*/, v16);
    sub_1BCAFF8(&StringLiteral_2365/*"AssetLoadError"*/, v17);
    byte_4B1B4BF = 1;
  }
  Instance = (Il2CppObject *)sub_1BCB0A0(string___TypeInfo, 8LL);
  if ( !Instance )
    goto LABEL_28;
  v22 = Instance;
  if ( !LODWORD(Instance[1].monitor) )
    goto LABEL_18;
  v23 = StringLiteral_9381/*"No address associated with hostname"*/;
  Instance[2].klass = (Il2CppClass *)StringLiteral_9381/*"No address associated with hostname"*/;
  sub_1BCAF9C((CGThumbnailListItem_o *)&Instance[2], v23, v20, v21);
  if ( LODWORD(v22[1].monitor) <= 1 )
    goto LABEL_18;
  v25 = StringLiteral_2362/*"AssetBundle file download time over"*/;
  v22[2].monitor = (void *)StringLiteral_2362/*"AssetBundle file download time over"*/;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v22[2].monitor, v25, v20, v24);
  if ( LODWORD(v22[1].monitor) <= 2 )
    goto LABEL_18;
  v27 = StringLiteral_13983/*"The network connection was lost."*/;
  v22[3].klass = (Il2CppClass *)StringLiteral_13983/*"The network connection was lost."*/;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v22[3], v27, v20, v26);
  if ( LODWORD(v22[1].monitor) <= 3 )
    goto LABEL_18;
  v29 = StringLiteral_4626/*"Connection reset by peer"*/;
  v22[3].monitor = (void *)StringLiteral_4626/*"Connection reset by peer"*/;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v22[3].monitor, v29, v20, v28);
  if ( LODWORD(v22[1].monitor) <= 4 )
    goto LABEL_18;
  v31 = StringLiteral_12809/*"Software caused connection abort"*/;
  v22[4].klass = (Il2CppClass *)StringLiteral_12809/*"Software caused connection abort"*/;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v22[4], v31, v20, v30);
  if ( LODWORD(v22[1].monitor) <= 5
    || (v33 = StringLiteral_4627/*"Connection timed out"*/,
        v22[4].monitor = (void *)StringLiteral_4627/*"Connection timed out"*/,
        sub_1BCAF9C((CGThumbnailListItem_o *)&v22[4].monitor, v33, v20, v32),
        LODWORD(v22[1].monitor) <= 6)
    || (v35 = StringLiteral_4625/*"Connection refused"*/,
        v22[5].klass = (Il2CppClass *)StringLiteral_4625/*"Connection refused"*/,
        sub_1BCAF9C((CGThumbnailListItem_o *)&v22[5], v35, v20, v34),
        LODWORD(v22[1].monitor) <= 7) )
  {
LABEL_18:
    sub_1BCB25C(Instance, v19, v20);
  }
  v37 = StringLiteral_14042/*"The request timed out."*/;
  v22[5].monitor = (void *)StringLiteral_14042/*"The request timed out."*/;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v22[5].monitor, v37, v20, v36);
  if ( (int)v22[1].monitor < 1 )
  {
LABEL_19:
    if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
    goto LABEL_27;
  }
  v38 = 0LL;
  v39 = (unsigned int)v22[1].monitor - 1LL;
  while ( 1 )
  {
    if ( !v3 )
      goto LABEL_28;
    Instance = (Il2CppObject *)System_String__Contains(v3, *((System_String_o **)&v22[2].klass + v38), 0LL);
    if ( ((unsigned __int8)Instance & 1) != 0 )
      break;
    if ( v39 == v38 )
      goto LABEL_19;
    if ( ++v38 >= (unsigned __int64)LODWORD(v22[1].monitor) )
      goto LABEL_18;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
  if ( !Instance )
LABEL_28:
    sub_1BCB254(Instance, v19);
  CrashReporter__AddCustomKey(
    (CrashReporter_o *)Instance,
    (System_String_o *)StringLiteral_4980/*"DLErrorAsset"*/,
    this->fields.downloadingURL,
    0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
  if ( (unsigned int)v38 >= LODWORD(v22[1].monitor) )
    goto LABEL_18;
  if ( !Instance )
    goto LABEL_28;
  CrashReporter__AddCustomKey(
    (CrashReporter_o *)Instance,
    (System_String_o *)StringLiteral_4981/*"DLErrorType"*/,
    *((System_String_o **)&v22[2].klass + v38),
    0LL);
  if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
  v3 = (System_String_o *)StringLiteral_2365/*"AssetLoadError"*/;
LABEL_27:
  UnityEngine_Debug__LogError((Il2CppObject *)v3, 0LL);
}


System_Collections_IEnumerator_o *__fastcall MovieFileMerge__CRCDownloadAndCheck(
        MovieFileMerge_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4B1B4B6 & 1) == 0 )
  {
    sub_1BCAFF8(&MovieFileMerge__CRCDownloadAndCheck_d__32_TypeInfo, method);
    byte_4B1B4B6 = 1;
  }
  v3 = sub_1BCB244(MovieFileMerge__CRCDownloadAndCheck_d__32_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v3 + 32), (int32_t)this, v4, v5);
  return (System_Collections_IEnumerator_o *)v3;
}


System_Collections_Generic_Dictionary_string__uint__o *__fastcall MovieFileMerge__CreateDic(
        MovieFileMerge_o *this,
        System_String_o *dataPath,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_Dictionary_TKey__TValue__o *v6; // x19
  System_String_array *AllLines; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  int max_length; // w8
  System_String_array *v11; // x20
  unsigned int v12; // w22
  System_String_array *v13; // x21
  uint32_t result; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B1B4BD & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_string__uint__Add__, dataPath);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_string__uint___ctor__, v4);
    sub_1BCAFF8(&System_Collections_Generic_Dictionary_string__uint__TypeInfo, v5);
    byte_4B1B4BD = 1;
  }
  result = 0;
  v6 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1BCB244(System_Collections_Generic_Dictionary_string__uint__TypeInfo);
  System_Collections_Generic_Dictionary_object__uint____ctor(
    v6,
    (const MethodInfo_3397300 *)Method_System_Collections_Generic_Dictionary_string__uint___ctor__);
  AllLines = System_IO_File__ReadAllLines(dataPath, 0LL);
  if ( !AllLines )
LABEL_18:
    sub_1BCB254(AllLines, v8);
  max_length = AllLines->max_length;
  v11 = AllLines;
  if ( max_length >= 1 )
  {
    v12 = 0;
    while ( 1 )
    {
      if ( v12 >= max_length )
LABEL_17:
        sub_1BCB25C(AllLines, v8, v9);
      AllLines = (System_String_array *)v11->m_Items[v12];
      if ( !AllLines )
        goto LABEL_18;
      AllLines = System_String__Split((System_String_o *)AllLines, 0x2Cu, 0, 0LL);
      result = 0;
      if ( !AllLines )
        goto LABEL_18;
      v13 = AllLines;
      if ( AllLines->max_length <= 1 )
        goto LABEL_17;
      AllLines = (System_String_array *)System_UInt32__TryParse(AllLines->m_Items[1], &result, 0LL);
      if ( ((unsigned __int8)AllLines & 1) == 0 )
        return 0LL;
      if ( !v13->max_length )
        goto LABEL_17;
      if ( !v6 )
        goto LABEL_18;
      System_Collections_Generic_Dictionary_object__uint___Add(
        v6,
        (Il2CppObject *)v13->m_Items[0],
        result,
        (const MethodInfo_3397CB4 *)Method_System_Collections_Generic_Dictionary_string__uint__Add__);
      max_length = v11->max_length;
      if ( (int)++v12 >= max_length )
        return (System_Collections_Generic_Dictionary_string__uint__o *)v6;
    }
  }
  return (System_Collections_Generic_Dictionary_string__uint__o *)v6;
}


void __fastcall MovieFileMerge__Delete(System_String_o *folder, const MethodInfo *method)
{
  System_String_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  System_String_o *FileName; // x19
  Il2CppObject *LocalDataPath; // x0
  System_String_o *v7; // x19

  v2 = folder;
  if ( (byte_4B1B4B9 & 1) == 0 )
  {
    sub_1BCAFF8(&System_IO_Path_TypeInfo, method);
    sub_1BCAFF8(&StringLiteral_24937/*"{0}/{1}"*/, v3);
    folder = (System_String_o *)sub_1BCAFF8(&StringLiteral_1039/*"/"*/, v4);
    byte_4B1B4B9 = 1;
  }
  if ( !v2 )
    sub_1BCB254(folder, method);
  if ( System_String__EndsWith(v2, (System_String_o *)StringLiteral_1039/*"/"*/, 0LL) )
    v2 = System_String__TrimEnd_62507116(v2, 0x2Fu, 0LL);
  if ( !System_IO_Path_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_IO_Path_TypeInfo);
  FileName = System_IO_Path__GetFileName(v2, 0LL);
  LocalDataPath = (Il2CppObject *)MovieFileMerge__GetLocalDataPath((const MethodInfo *)FileName);
  v7 = System_String__Format_62491716(
         (System_String_o *)StringLiteral_24937/*"{0}/{1}"*/,
         LocalDataPath,
         (Il2CppObject *)FileName,
         0LL);
  if ( System_IO_Directory__Exists(v7, 0LL) )
    System_IO_Directory__Delete(v7, 1, 0LL);
}


void __fastcall MovieFileMerge__Delete_39681072(const MethodInfo *method)
{
  System_String_o *LocalDataPath; // x0
  _BOOL8 v2; // x0
  System_String_o *v3; // x0

  LocalDataPath = MovieFileMerge__GetLocalDataPath(method);
  v2 = System_IO_Directory__Exists(LocalDataPath, 0LL);
  if ( v2 )
  {
    v3 = MovieFileMerge__GetLocalDataPath((const MethodInfo *)v2);
    System_IO_Directory__Delete(v3, 1, 0LL);
  }
}


System_Collections_IEnumerator_o *__fastcall MovieFileMerge__Download(
        MovieFileMerge_o *this,
        System_String_o *fileName,
        uint32_t crc,
        const MethodInfo *method)
{
  __int64 v7; // x22
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  if ( (byte_4B1B4BC & 1) == 0 )
  {
    sub_1BCAFF8(&MovieFileMerge__Download_d__40_TypeInfo, fileName);
    byte_4B1B4BC = 1;
  }
  v7 = sub_1BCB244(MovieFileMerge__Download_d__40_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  *(_DWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 32) = this;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v7 + 32), (int32_t)this, v8, v9);
  *(_QWORD *)(v7 + 40) = fileName;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v7 + 40), (int32_t)fileName, v10, v11);
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
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4B1B4B7 & 1) == 0 )
  {
    sub_1BCAFF8(&MovieFileMerge__DownloadMovie_d__33_TypeInfo, method);
    byte_4B1B4B7 = 1;
  }
  v3 = sub_1BCB244(MovieFileMerge__DownloadMovie_d__33_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v3 + 32), (int32_t)this, v4, v5);
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
  System_String_o *FileName; // x20
  Il2CppObject *LocalDataPath; // x0
  System_String_o *v10; // x19
  System_String_o *v11; // x0
  FileMergeAndSplit_c *v12; // x8
  Il2CppObject *v13; // x21
  System_String_o *v14; // x0

  v3 = assetFolderURL;
  if ( (byte_4B1B4AD & 1) == 0 )
  {
    sub_1BCAFF8(&FileMergeAndSplit_TypeInfo, assetFolderURL);
    sub_1BCAFF8(&System_IO_Path_TypeInfo, v4);
    sub_1BCAFF8(&StringLiteral_1039/*"/"*/, v5);
    sub_1BCAFF8(&StringLiteral_24942/*"{0}/{1}/{2}"*/, v6);
    this = (MovieFileMerge_o *)sub_1BCAFF8(&StringLiteral_24941/*"{0}/{1}/{1}.usm"*/, v7);
    byte_4B1B4AD = 1;
  }
  if ( !v3 )
    sub_1BCB254(this, assetFolderURL);
  if ( System_String__EndsWith(v3, (System_String_o *)StringLiteral_1039/*"/"*/, 0LL) )
    v3 = System_String__TrimEnd_62507116(v3, 0x2Fu, 0LL);
  if ( !System_IO_Path_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_IO_Path_TypeInfo);
  FileName = System_IO_Path__GetFileName(v3, 0LL);
  LocalDataPath = (Il2CppObject *)MovieFileMerge__GetLocalDataPath((const MethodInfo *)FileName);
  v10 = System_String__Format_62491716(
          (System_String_o *)StringLiteral_24941/*"{0}/{1}/{1}.usm"*/,
          LocalDataPath,
          (Il2CppObject *)FileName,
          0LL);
  v11 = MovieFileMerge__GetLocalDataPath((const MethodInfo *)v10);
  v12 = FileMergeAndSplit_TypeInfo;
  v13 = (Il2CppObject *)v11;
  if ( !FileMergeAndSplit_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FileMergeAndSplit_TypeInfo);
    v12 = FileMergeAndSplit_TypeInfo;
  }
  v14 = System_String__Format_62491784(
          (System_String_o *)StringLiteral_24942/*"{0}/{1}/{2}"*/,
          v13,
          (Il2CppObject *)FileName,
          (Il2CppObject *)v12->static_fields->PathCRCFileName,
          0LL);
  return !System_IO_File__Exists(v14, 0LL) && System_IO_File__Exists(v10, 0LL);
}


float __fastcall MovieFileMerge__GetDownloadProgress(MovieFileMerge_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_TKey__TValue__o *RequireDownLoadFilePathCRCDictionary; // x0
  float v4; // s8
  __int64 v5; // x1
  System_Collections_Generic_Dictionary_TKey__TValue__o *v6; // x0
  int32_t downloadProgress; // s8

  if ( (byte_4B1B4B1 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_string__uint__get_Count__, method);
    byte_4B1B4B1 = 1;
  }
  RequireDownLoadFilePathCRCDictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.RequireDownLoadFilePathCRCDictionary;
  v4 = 0.0;
  if ( RequireDownLoadFilePathCRCDictionary
    && System_Collections_Generic_Dictionary_object__uint___get_Count(
         RequireDownLoadFilePathCRCDictionary,
         (const MethodInfo_3397984 *)Method_System_Collections_Generic_Dictionary_string__uint__get_Count__) )
  {
    v6 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.RequireDownLoadFilePathCRCDictionary;
    if ( !v6 )
      sub_1BCB254(0LL, v5);
    downloadProgress = this->fields.downloadProgress;
    return (float)downloadProgress
         / (float)System_Collections_Generic_Dictionary_object__uint___get_Count(
                    v6,
                    (const MethodInfo_3397984 *)Method_System_Collections_Generic_Dictionary_string__uint__get_Count__);
  }
  return v4;
}


double __fastcall MovieFileMerge__GetDownloadSize(MovieFileMerge_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_TKey__TValue__o *RequireDownLoadFilePathCRCDictionary; // x0

  if ( (byte_4B1B4B0 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_string__uint__get_Count__, method);
    byte_4B1B4B0 = 1;
  }
  RequireDownLoadFilePathCRCDictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.RequireDownLoadFilePathCRCDictionary;
  if ( !RequireDownLoadFilePathCRCDictionary )
    sub_1BCB254(0LL, method);
  return (double)(System_Collections_Generic_Dictionary_object__uint___get_Count(
                    RequireDownLoadFilePathCRCDictionary,
                    (const MethodInfo_3397984 *)Method_System_Collections_Generic_Dictionary_string__uint__get_Count__) << 20);
}


System_String_o *__fastcall MovieFileMerge__GetLocalDataPath(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  System_String_o *persistentDataPath; // x0

  if ( (byte_4B1B4AE & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Application_TypeInfo, v1);
    sub_1BCAFF8(&StringLiteral_1091/*"/extend-data/movie"*/, v2);
    byte_4B1B4AE = 1;
  }
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
  persistentDataPath = UnityEngine_Application__get_persistentDataPath(0LL);
  return System_String__Concat_62450424(persistentDataPath, (System_String_o *)StringLiteral_1091/*"/extend-data/movie"*/, 0LL);
}


System_String_o *__fastcall MovieFileMerge__GetLocalFolderPath(MovieFileMerge_o *this, const MethodInfo *method)
{
  MovieFileMerge_o *v2; // x19
  Il2CppObject *LocalDataPath; // x0

  v2 = this;
  if ( (byte_4B1B4BA & 1) == 0 )
  {
    this = (MovieFileMerge_o *)sub_1BCAFF8(&StringLiteral_24937/*"{0}/{1}"*/, method);
    byte_4B1B4BA = 1;
  }
  LocalDataPath = (Il2CppObject *)MovieFileMerge__GetLocalDataPath((const MethodInfo *)this);
  return System_String__Format_62491716(
           (System_String_o *)StringLiteral_24937/*"{0}/{1}"*/,
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
  System_Collections_Generic_Dictionary_TKey__TValue__o *v13; // x19
  __int64 v14; // x1
  System_Collections_Generic_Dictionary_TKey__TValue__o *AllDownLoadFilePathCRCDictionary; // x0
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
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v31; // [xsp+0h] [xbp-C0h] BYREF
  uint32_t v32; // [xsp+2Ch] [xbp-94h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v33; // [xsp+30h] [xbp-90h] BYREF

  if ( (byte_4B1B4BB & 1) == 0 )
  {
    sub_1BCAFF8(&Crc32_TypeInfo, method);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_string__uint__Add__, v3);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_string__uint__GetEnumerator__, v4);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_string__uint___ctor__, v5);
    sub_1BCAFF8(&System_Collections_Generic_Dictionary_string__uint__TypeInfo, v6);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_Enumerator_string__uint__Dispose__, v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_Enumerator_string__uint__MoveNext__, v8);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_Enumerator_string__uint__get_Current__, v9);
    sub_1BCAFF8(&Method_System_Collections_Generic_KeyValuePair_string__uint__get_Key__, v10);
    sub_1BCAFF8(&Method_System_Collections_Generic_KeyValuePair_string__uint__get_Value__, v11);
    sub_1BCAFF8(&StringLiteral_24937/*"{0}/{1}"*/, v12);
    byte_4B1B4BB = 1;
  }
  memset(&v33, 0, sizeof(v33));
  v32 = 0;
  v13 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1BCB244(System_Collections_Generic_Dictionary_string__uint__TypeInfo);
  System_Collections_Generic_Dictionary_object__uint____ctor(
    v13,
    (const MethodInfo_3397300 *)Method_System_Collections_Generic_Dictionary_string__uint___ctor__);
  AllDownLoadFilePathCRCDictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.AllDownLoadFilePathCRCDictionary;
  if ( !AllDownLoadFilePathCRCDictionary )
    sub_1BCB254(0LL, v14);
  System_Collections_Generic_Dictionary_object__uint___GetEnumerator(
    &v31,
    AllDownLoadFilePathCRCDictionary,
    (const MethodInfo_33980A4 *)Method_System_Collections_Generic_Dictionary_string__uint__GetEnumerator__);
  v33 = v31;
  while ( System_Collections_Generic_Dictionary_Enumerator_object__uint___MoveNext(
            &v33,
            (const MethodInfo_3484D6C *)Method_System_Collections_Generic_Dictionary_Enumerator_string__uint__MoveNext__) )
  {
    key = v33.fields._current.fields.key;
    value = (uint32_t)v33.fields._current.fields.value;
    LocalFolderPath = (Il2CppObject *)MovieFileMerge__GetLocalFolderPath(this, v16);
    v20 = System_String__Format_62491716((System_String_o *)StringLiteral_24937/*"{0}/{1}"*/, LocalFolderPath, key, 0LL);
    v21 = System_IO_File__Exists(v20, 0LL);
    if ( !v21 )
      goto LABEL_11;
    AllBytes = System_IO_File__ReadAllBytes(v20, 0LL);
    v32 = value;
    if ( !Crc32_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
    v24 = Crc32__Compute(AllBytes, 0LL);
    if ( !System_UInt32__Equals_64085824((uint32_t)&v32, v24, 0LL) )
    {
      System_IO_File__Delete(v20, 0LL);
LABEL_11:
      if ( !v13 )
        sub_1BCB254(v21, v22);
      System_Collections_Generic_Dictionary_object__uint___Add(
        v13,
        key,
        value,
        (const MethodInfo_3397CB4 *)Method_System_Collections_Generic_Dictionary_string__uint__Add__);
      Parent = System_IO_Directory__GetParent(v20, 0LL);
      v27 = Parent;
      if ( !Parent )
        sub_1BCB254(0LL, v26);
      v28 = (System_String_o *)((__int64 (__fastcall *)(System_IO_DirectoryInfo_o *, Il2CppMethodPointer))Parent->klass->vtable._8_get_FullName.method)(
                                 Parent,
                                 Parent->klass->vtable._9_get_Name.methodPtr);
      if ( !System_IO_Directory__Exists(v28, 0LL) )
      {
        v29 = (System_String_o *)((__int64 (__fastcall *)(System_IO_DirectoryInfo_o *, Il2CppMethodPointer))v27->klass->vtable._8_get_FullName.method)(
                                   v27,
                                   v27->klass->vtable._9_get_Name.methodPtr);
        System_IO_Directory__CreateDirectory(v29, 0LL);
      }
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_object__uint___Dispose(
    &v33,
    (const MethodInfo_3484E90 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__uint__Dispose__);
  return (System_Collections_Generic_Dictionary_string__uint__o *)v13;
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
  System_Collections_Generic_List_object__o *v12; // x19
  const MethodInfo *v13; // x1
  System_String_o *LocalFolderPath; // x0
  __int64 v15; // x1
  System_Collections_Generic_Dictionary_TKey__TValue__o *AllDownLoadFilePathCRCDictionary; // x0
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x0
  const MethodInfo *v18; // x1
  Il2CppObject *current; // x21
  Il2CppObject *v20; // x1
  Il2CppObject *v21; // x0
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  Il2CppObject *v24; // x1
  struct System_Object_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10
  Il2CppClass **v28; // x0
  System_Collections_Generic_List_Enumerator_object__o v30; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4B1B4BE & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_string__uint__get_Keys__, method);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_ToList_string___, v3);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__, v4);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__, v5);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__, v6);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_string__Add__, v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_string__GetEnumerator__, v8);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_string___ctor__, v9);
    sub_1BCAFF8(&System_Collections_Generic_List_string__TypeInfo, v10);
    sub_1BCAFF8(&StringLiteral_24937/*"{0}/{1}"*/, v11);
    byte_4B1B4BE = 1;
  }
  memset(&v30, 0, sizeof(v30));
  v12 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_string___ctor__);
  LocalFolderPath = MovieFileMerge__GetLocalFolderPath(this, v13);
  if ( System_IO_Directory__Exists(LocalFolderPath, 0LL) )
  {
    AllDownLoadFilePathCRCDictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.AllDownLoadFilePathCRCDictionary;
    if ( !AllDownLoadFilePathCRCDictionary
      || (Keys = System_Collections_Generic_Dictionary_object__uint___get_Keys(
                   AllDownLoadFilePathCRCDictionary,
                   (const MethodInfo_3397994 *)Method_System_Collections_Generic_Dictionary_string__uint__get_Keys__),
          (AllDownLoadFilePathCRCDictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)System_Linq_Enumerable__ToList_object_((System_Collections_Generic_IEnumerable_TSource__o *)Keys, (const MethodInfo_305BB58 *)Method_System_Linq_Enumerable_ToList_string___)) == 0LL) )
    {
      sub_1BCB254(AllDownLoadFilePathCRCDictionary, v15);
    }
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v30,
      (System_Collections_Generic_List_object__o *)AllDownLoadFilePathCRCDictionary,
      (const MethodInfo_36BA6C8 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v30,
              (const MethodInfo_344F51C *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
    {
      current = v30.fields._current;
      v20 = (Il2CppObject *)MovieFileMerge__GetLocalFolderPath(this, v18);
      v21 = (Il2CppObject *)System_String__Format_62491716((System_String_o *)StringLiteral_24937/*"{0}/{1}"*/, v20, current, 0LL);
      v24 = v21;
      if ( !v12 )
        sub_1BCB254(v21, v21);
      items = v12->fields._items;
      v26 = Method_System_Collections_Generic_List_string__Add__;
      ++v12->fields._version;
      if ( !items )
        sub_1BCB254(v21, v21);
      size = v12->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v12,
          v21,
          *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
      }
      else
      {
        v28 = &items->obj.klass + size;
        v12->fields._size = size + 1;
        v28[4] = (Il2CppClass *)v24;
        sub_1BCAF9C((CGThumbnailListItem_o *)(v28 + 4), (int32_t)v24, v22, v23);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v30,
      (const MethodInfo_344F518 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
  }
  return (System_Collections_Generic_List_string__o *)v12;
}


double __fastcall MovieFileMerge__GetTotalRequireSize(MovieFileMerge_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__uint__o *AllDownLoadFilePathCRCDictionary; // x0
  System_Collections_Generic_Dictionary_TKey__TValue__o *RequireDownLoadFilePathCRCDictionary; // x8

  if ( (byte_4B1B4AF & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_string__uint__get_Count__, method);
    byte_4B1B4AF = 1;
  }
  AllDownLoadFilePathCRCDictionary = this->fields.AllDownLoadFilePathCRCDictionary;
  if ( !AllDownLoadFilePathCRCDictionary
    || (AllDownLoadFilePathCRCDictionary = (struct System_Collections_Generic_Dictionary_string__uint__o *)System_Collections_Generic_Dictionary_object__uint___get_Count((System_Collections_Generic_Dictionary_TKey__TValue__o *)AllDownLoadFilePathCRCDictionary, (const MethodInfo_3397984 *)Method_System_Collections_Generic_Dictionary_string__uint__get_Count__),
        (RequireDownLoadFilePathCRCDictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.RequireDownLoadFilePathCRCDictionary) == 0LL) )
  {
    sub_1BCB254(AllDownLoadFilePathCRCDictionary, method);
  }
  return (double)((System_Collections_Generic_Dictionary_object__uint___get_Count(
                     RequireDownLoadFilePathCRCDictionary,
                     (const MethodInfo_3397984 *)Method_System_Collections_Generic_Dictionary_string__uint__get_Count__)
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
  System_Collections_Generic_Dictionary_TKey__TValue__o *AllDownLoadFilePathCRCDictionary; // x0
  System_Collections_Generic_Dictionary_TKey__TValue__o *v14; // x22
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  System_Collections_Generic_Dictionary_TKey__TValue__o *RequireDownLoadFilePathCRCDictionary; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  System_Collections_Generic_Dictionary_TKey__TValue__o *v20; // x22
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  __int64 v25; // x0
  __int64 v26; // x1
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  struct System_String_o *FileName; // x0
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  const MethodInfo *v32; // x1
  Il2CppObject *LocalFolderPath; // x0
  struct System_String_o *v34; // x0
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  const MethodInfo *v37; // x1
  Il2CppObject *v38; // x0
  struct System_String_o *v39; // x0
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  const MethodInfo *v42; // x1
  System_String_o *v43; // x0
  FileMergeAndSplit_c *v44; // x8
  Il2CppObject *v45; // x20
  struct System_String_o *v46; // x0
  int32_t v47; // w2
  const MethodInfo *v48; // x3

  v3 = assetFolderURL;
  if ( (byte_4B1B4B5 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_string__uint__Clear__, assetFolderURL);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_string__uint___ctor__, v5);
    sub_1BCAFF8(&System_Collections_Generic_Dictionary_string__uint__TypeInfo, v6);
    sub_1BCAFF8(&FileMergeAndSplit_TypeInfo, v7);
    sub_1BCAFF8(&System_IO_Path_TypeInfo, v8);
    sub_1BCAFF8(&StringLiteral_24937/*"{0}/{1}"*/, v9);
    sub_1BCAFF8(&StringLiteral_24933/*"{0}/SplitFile"*/, v10);
    sub_1BCAFF8(&StringLiteral_1039/*"/"*/, v11);
    sub_1BCAFF8(&StringLiteral_24939/*"{0}/{1}.usm"*/, v12);
    byte_4B1B4B5 = 1;
  }
  AllDownLoadFilePathCRCDictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.AllDownLoadFilePathCRCDictionary;
  if ( AllDownLoadFilePathCRCDictionary )
  {
    System_Collections_Generic_Dictionary_object__uint___Clear(
      AllDownLoadFilePathCRCDictionary,
      (const MethodInfo_3397E3C *)Method_System_Collections_Generic_Dictionary_string__uint__Clear__);
  }
  else
  {
    v14 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1BCB244(System_Collections_Generic_Dictionary_string__uint__TypeInfo);
    System_Collections_Generic_Dictionary_object__uint____ctor(
      v14,
      (const MethodInfo_3397300 *)Method_System_Collections_Generic_Dictionary_string__uint___ctor__);
    this->fields.AllDownLoadFilePathCRCDictionary = (struct System_Collections_Generic_Dictionary_string__uint__o *)v14;
    sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.AllDownLoadFilePathCRCDictionary, (int32_t)v14, v15, v16);
  }
  RequireDownLoadFilePathCRCDictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.RequireDownLoadFilePathCRCDictionary;
  if ( RequireDownLoadFilePathCRCDictionary )
  {
    System_Collections_Generic_Dictionary_object__uint___Clear(
      RequireDownLoadFilePathCRCDictionary,
      (const MethodInfo_3397E3C *)Method_System_Collections_Generic_Dictionary_string__uint__Clear__);
  }
  else
  {
    v20 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1BCB244(System_Collections_Generic_Dictionary_string__uint__TypeInfo);
    System_Collections_Generic_Dictionary_object__uint____ctor(
      v20,
      (const MethodInfo_3397300 *)Method_System_Collections_Generic_Dictionary_string__uint___ctor__);
    this->fields.RequireDownLoadFilePathCRCDictionary = (struct System_Collections_Generic_Dictionary_string__uint__o *)v20;
    sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.RequireDownLoadFilePathCRCDictionary, (int32_t)v20, v21, v22);
  }
  this->fields.downloadProgress = 0;
  this->fields.isDownloadCancel = 0;
  this->fields.mergeClass = 0LL;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.mergeClass, 0, v18, v19);
  this->fields.crcCheckerClass = 0LL;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.crcCheckerClass, 0, v23, v24);
  if ( !v3 )
    sub_1BCB254(v25, v26);
  if ( System_String__EndsWith(v3, (System_String_o *)StringLiteral_1039/*"/"*/, 0LL) )
    v3 = System_String__TrimEnd_62507116(v3, 0x2Fu, 0LL);
  this->fields.assetFolderURL = v3;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.assetFolderURL, (int32_t)v3, v27, v28);
  if ( !System_IO_Path_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_IO_Path_TypeInfo);
  FileName = System_IO_Path__GetFileName(v3, 0LL);
  this->fields.assetFolder = FileName;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.assetFolder, (int32_t)FileName, v30, v31);
  LocalFolderPath = (Il2CppObject *)MovieFileMerge__GetLocalFolderPath(this, v32);
  v34 = System_String__Format((System_String_o *)StringLiteral_24933/*"{0}/SplitFile"*/, LocalFolderPath, 0LL);
  this->fields.outputSplitFileFolder = v34;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.outputSplitFileFolder, (int32_t)v34, v35, v36);
  v38 = (Il2CppObject *)MovieFileMerge__GetLocalFolderPath(this, v37);
  v39 = System_String__Format_62491716(
          (System_String_o *)StringLiteral_24939/*"{0}/{1}.usm"*/,
          v38,
          (Il2CppObject *)this->fields.assetFolder,
          0LL);
  this->fields.outputMergeFile = v39;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.outputMergeFile, (int32_t)v39, v40, v41);
  v43 = MovieFileMerge__GetLocalFolderPath(this, v42);
  v44 = FileMergeAndSplit_TypeInfo;
  v45 = (Il2CppObject *)v43;
  if ( !FileMergeAndSplit_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FileMergeAndSplit_TypeInfo);
    v44 = FileMergeAndSplit_TypeInfo;
  }
  v46 = System_String__Format_62491716(
          (System_String_o *)StringLiteral_24937/*"{0}/{1}"*/,
          v45,
          (Il2CppObject *)v44->static_fields->PathCRCFileName,
          0LL);
  this->fields.outputMergeFileCRC = v46;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.outputMergeFileCRC, (int32_t)v46, v47, v48);
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
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4B1B4B8 & 1) == 0 )
  {
    sub_1BCAFF8(&MovieFileMerge__Merge_d__34_TypeInfo, method);
    byte_4B1B4B8 = 1;
  }
  v3 = sub_1BCB244(MovieFileMerge__Merge_d__34_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v3 + 32), (int32_t)this, v4, v5);
  return (System_Collections_IEnumerator_o *)v3;
}


System_Collections_IEnumerator_o *__fastcall MovieFileMerge__PlayCRIMovie(
        MovieFileMerge_o *this,
        System_String_o *filePath,
        const MethodInfo *method)
{
  __int64 v4; // x20
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_4B1B4B4 & 1) == 0 )
  {
    sub_1BCAFF8(&MovieFileMerge__PlayCRIMovie_d__30_TypeInfo, filePath);
    byte_4B1B4B4 = 1;
  }
  v4 = sub_1BCB244(MovieFileMerge__PlayCRIMovie_d__30_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0LL);
  *(_DWORD *)(v4 + 16) = 0;
  *(_QWORD *)(v4 + 32) = filePath;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v4 + 32), (int32_t)filePath, v5, v6);
  return (System_Collections_IEnumerator_o *)v4;
}


System_Collections_IEnumerator_o *__fastcall MovieFileMerge__PlayMP4(MovieFileMerge_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4B1B4B2 & 1) == 0 )
  {
    sub_1BCAFF8(&MovieFileMerge__PlayMP4_d__28_TypeInfo, method);
    byte_4B1B4B2 = 1;
  }
  v3 = sub_1BCB244(MovieFileMerge__PlayMP4_d__28_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v3 + 32), (int32_t)this, v4, v5);
  return (System_Collections_IEnumerator_o *)v3;
}


System_Collections_IEnumerator_o *__fastcall MovieFileMerge__PlayMP4_39679256(
        MovieFileMerge_o *this,
        System_String_o *filePath,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v6; // x21
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  if ( (byte_4B1B4B3 & 1) == 0 )
  {
    sub_1BCAFF8(&MovieFileMerge__PlayMP4_d__29_TypeInfo, filePath);
    byte_4B1B4B3 = 1;
  }
  v6 = sub_1BCB244(MovieFileMerge__PlayMP4_d__29_TypeInfo);
  System_Object___ctor((Il2CppObject *)v6, 0LL);
  *(_DWORD *)(v6 + 16) = 0;
  *(_QWORD *)(v6 + 40) = this;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v6 + 40), (int32_t)this, v7, v8);
  *(_QWORD *)(v6 + 32) = filePath;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v6 + 32), (int32_t)filePath, v9, v10);
  return (System_Collections_IEnumerator_o *)v6;
}


void __fastcall MovieFileMerge__Reboot(MovieFileMerge_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Networking_UnityWebRequest_o *v5; // x0
  CGThumbnailListItem_o *p_loader; // x19
  struct UnityEngine_Networking_UnityWebRequest_o *loader; // t1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  ManagementManager_c *v10; // x0
  Il2CppObject *Instance; // x0
  __int64 v12; // x1

  if ( (byte_4B1B4C0 & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Application_TypeInfo, method);
    sub_1BCAFF8(&ManagementManager_TypeInfo, v3);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_ManagementManager__get_Instance__, v4);
    byte_4B1B4C0 = 1;
  }
  loader = this->fields.loader;
  p_loader = (CGThumbnailListItem_o *)&this->fields.loader;
  v5 = loader;
  if ( loader )
  {
    UnityEngine_Networking_UnityWebRequest__Dispose(v5, 0LL);
    p_loader->klass = 0LL;
    sub_1BCAF9C(p_loader, 0, v8, v9);
  }
  if ( !ManagementManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
  if ( !byte_4B1B4DA )
  {
    sub_1BCAFF8(&ManagementManager_TypeInfo, method);
    byte_4B1B4DA = 1;
  }
  v10 = ManagementManager_TypeInfo;
  if ( !ManagementManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
    v10 = ManagementManager_TypeInfo;
  }
  if ( v10->static_fields->isDuringStartup )
  {
    if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
    UnityEngine_Application__Quit_69931008(0LL);
  }
  else
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
    if ( !Instance )
      sub_1BCB254(0LL, v12);
    ManagementManager__reboot((ManagementManager_o *)Instance, 0, 1, 0LL);
  }
}


void __fastcall MovieFileMerge___Merge_b__34_0(MovieFileMerge_o *this, System_Exception_o *e, const MethodInfo *method)
{
  Il2CppObject *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  Il2CppObject *Instance; // x20
  System_String_o *v12; // x21
  ErrorDialog_ClickDelegate_o *v13; // x22
  const MethodInfo *v14; // x2
  System_String_o *v15; // x1

  v4 = (Il2CppObject *)this;
  if ( (byte_4B1B4C2 & 1) == 0 )
  {
    sub_1BCAFF8(&ErrorDialog_ClickDelegate_TypeInfo, e);
    sub_1BCAFF8(&LocalizationManager_TypeInfo, v5);
    sub_1BCAFF8(&Method_MovieFileMerge_EndMergeRetryDialog__, v6);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_1BCAFF8(&StringLiteral_5248/*"Disk full"*/, v8);
    sub_1BCAFF8(&StringLiteral_9180/*"NETWORK_ERROR_DISK_FULL"*/, v9);
    this = (MovieFileMerge_o *)sub_1BCAFF8(&StringLiteral_1/*""*/, v10);
    byte_4B1B4C2 = 1;
  }
  if ( !e )
    goto LABEL_12;
  this = (MovieFileMerge_o *)((__int64 (__fastcall *)(System_Exception_o *, Il2CppMethodPointer, const MethodInfo *))e->klass->vtable._5_get_Message.method)(
                               e,
                               e->klass->vtable._6_get_Data.methodPtr,
                               method);
  if ( !this )
    goto LABEL_12;
  if ( !System_String__StartsWith((System_String_o *)this, (System_String_o *)StringLiteral_5248/*"Disk full"*/, 0LL) )
  {
    v15 = (System_String_o *)((__int64 (__fastcall *)(System_Exception_o *, Il2CppMethodPointer))e->klass->vtable._5_get_Message.method)(
                               e,
                               e->klass->vtable._6_get_Data.methodPtr);
    goto LABEL_11;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v12 = LocalizationManager__Get((System_String_o *)StringLiteral_9180/*"NETWORK_ERROR_DISK_FULL"*/, 0LL);
  v13 = (ErrorDialog_ClickDelegate_o *)sub_1BCB244(ErrorDialog_ClickDelegate_TypeInfo);
  ErrorDialog_ClickDelegate___ctor(v13, v4, Method_MovieFileMerge_EndMergeRetryDialog__, 0LL);
  if ( !Instance )
LABEL_12:
    sub_1BCB254(this, e);
  CommonUI__OpenErrorDialog((CommonUI_o *)Instance, (System_String_o *)StringLiteral_1/*""*/, v12, v13, 1, 0LL);
  v15 = (System_String_o *)StringLiteral_5248/*"Disk full"*/;
LABEL_11:
  MovieFileMerge__AssetLoadLogError((MovieFileMerge_o *)v4, v15, v14);
}


void __fastcall MovieFileMerge__CRCDownloadAndCheck_d__32___ctor(
        MovieFileMerge__CRCDownloadAndCheck_d__32_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall MovieFileMerge__CRCDownloadAndCheck_d__32__MoveNext(
        MovieFileMerge__CRCDownloadAndCheck_d__32_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  const MethodInfo *v3; // x3
  MovieFileMerge__CRCDownloadAndCheck_d__32_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  int32_t _1__state; // w8
  struct MovieFileMerge_o *_4__this; // x20
  System_Collections_IEnumerator_o *v10; // x0
  CGThumbnailListItem_o *p__2__current; // x19
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  bool result; // w0
  System_Collections_Generic_Dictionary_string__uint__o *NeedDownloadDictionary; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  struct FileMergeAndSplit_CRCChecker_o *crcCheckerClass; // x8
  System_Collections_Generic_Dictionary_string__uint__o *Dic; // x0
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  System_String_o *outputMergeFile; // x21
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x0
  System_Collections_Generic_List_uint__o *v24; // x22
  FileMergeAndSplit_CRCChecker_o *v25; // x23
  const MethodInfo *v26; // x3
  CGThumbnailListItem_o *p_crcCheckerClass; // x20
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  System_Collections_IEnumerator_o *v30; // x0
  CGThumbnailListItem_o *v31; // x19
  int32_t v32; // w2
  const MethodInfo *v33; // x3

  v4 = this;
  if ( (byte_4B1B4C3 & 1) == 0 )
  {
    sub_1BCAFF8(&FileMergeAndSplit_CRCChecker_TypeInfo, method);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_string__uint__get_Values__, v5);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_ToList_uint___, v6);
    this = (MovieFileMerge__CRCDownloadAndCheck_d__32_o *)sub_1BCAFF8(&FileMergeAndSplit_TypeInfo, v7);
    byte_4B1B4C3 = 1;
  }
  _1__state = v4->fields.__1__state;
  _4__this = v4->fields.__4__this;
  if ( _1__state == 2 )
  {
    v4->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_22;
    NeedDownloadDictionary = MovieFileMerge__GetNeedDownloadDictionary(_4__this, method);
    _4__this->fields.RequireDownLoadFilePathCRCDictionary = NeedDownloadDictionary;
    sub_1BCAF9C(
      (CGThumbnailListItem_o *)&_4__this->fields.RequireDownLoadFilePathCRCDictionary,
      (int32_t)NeedDownloadDictionary,
      v16,
      v17);
    crcCheckerClass = _4__this->fields.crcCheckerClass;
    if ( crcCheckerClass && crcCheckerClass->fields.isCRCMatch )
    {
      if ( System_IO_Directory__Exists(_4__this->fields.outputSplitFileFolder, 0LL) )
        System_IO_Directory__Delete(_4__this->fields.outputSplitFileFolder, 1, 0LL);
      if ( System_IO_File__Exists(_4__this->fields.outputMergeFileCRC, 0LL) )
        System_IO_File__Delete(_4__this->fields.outputMergeFileCRC, 0LL);
    }
    return 0;
  }
  if ( _1__state != 1 )
  {
    if ( !_1__state )
    {
      v4->fields.__1__state = -1;
      this = (MovieFileMerge__CRCDownloadAndCheck_d__32_o *)FileMergeAndSplit_TypeInfo;
      if ( !FileMergeAndSplit_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(FileMergeAndSplit_TypeInfo);
      if ( _4__this )
      {
        v10 = MovieFileMerge__Download(_4__this, FileMergeAndSplit_TypeInfo->static_fields->PathCRCFileName, 0, v3);
        v4->fields.__2__current = (Il2CppObject *)v10;
        p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
        sub_1BCAF9C(p__2__current, (int32_t)v10, v12, v13);
        result = 1;
        LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
        return result;
      }
LABEL_22:
      sub_1BCB254(this, method);
    }
    return 0;
  }
  v4->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_22;
  Dic = MovieFileMerge__CreateDic((MovieFileMerge_o *)this, _4__this->fields.outputMergeFileCRC, v2);
  _4__this->fields.AllDownLoadFilePathCRCDictionary = Dic;
  sub_1BCAF9C((CGThumbnailListItem_o *)&_4__this->fields.AllDownLoadFilePathCRCDictionary, (int32_t)Dic, v20, v21);
  this = (MovieFileMerge__CRCDownloadAndCheck_d__32_o *)_4__this->fields.AllDownLoadFilePathCRCDictionary;
  if ( !this )
    goto LABEL_22;
  outputMergeFile = _4__this->fields.outputMergeFile;
  Values = System_Collections_Generic_Dictionary_object__uint___get_Values(
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)this,
             (const MethodInfo_3397AE4 *)Method_System_Collections_Generic_Dictionary_string__uint__get_Values__);
  v24 = (System_Collections_Generic_List_uint__o *)System_Linq_Enumerable__ToList_uint_(
                                                     (System_Collections_Generic_IEnumerable_TSource__o *)Values,
                                                     (const MethodInfo_305BC50 *)Method_System_Linq_Enumerable_ToList_uint___);
  v25 = (FileMergeAndSplit_CRCChecker_o *)sub_1BCB244(FileMergeAndSplit_CRCChecker_TypeInfo);
  FileMergeAndSplit_CRCChecker___ctor(v25, outputMergeFile, v24, v26);
  _4__this->fields.crcCheckerClass = v25;
  p_crcCheckerClass = (CGThumbnailListItem_o *)&_4__this->fields.crcCheckerClass;
  sub_1BCAF9C(p_crcCheckerClass, (int32_t)v25, v28, v29);
  this = (MovieFileMerge__CRCDownloadAndCheck_d__32_o *)p_crcCheckerClass->klass;
  if ( !p_crcCheckerClass->klass )
    goto LABEL_22;
  v30 = FileMergeAndSplit_CRCChecker__Run((FileMergeAndSplit_CRCChecker_o *)this, method);
  v4->fields.__2__current = (Il2CppObject *)v30;
  v31 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
  sub_1BCAF9C(v31, (int32_t)v30, v32, v33);
  LODWORD(v31[-1].fields._ThumbnailSpritePath_k__BackingField) = 2;
  return 1;
}


Il2CppObject *__fastcall MovieFileMerge__CRCDownloadAndCheck_d__32__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        MovieFileMerge__CRCDownloadAndCheck_d__32_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn MovieFileMerge__CRCDownloadAndCheck_d__32__System_Collections_IEnumerator_Reset(
        MovieFileMerge__CRCDownloadAndCheck_d__32_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1BCB00C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BCB244(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BCB00C(&Method_MovieFileMerge__CRCDownloadAndCheck_d__32_System_Collections_IEnumerator_Reset__);
  sub_1BCB120(v3, v4);
}


Il2CppObject *__fastcall MovieFileMerge__CRCDownloadAndCheck_d__32__System_Collections_IEnumerator_get_Current(
        MovieFileMerge__CRCDownloadAndCheck_d__32_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall MovieFileMerge__CRCDownloadAndCheck_d__32__System_IDisposable_Dispose(
        MovieFileMerge__CRCDownloadAndCheck_d__32_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall MovieFileMerge__DownloadMovie_d__33___ctor(
        MovieFileMerge__DownloadMovie_d__33_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall MovieFileMerge__DownloadMovie_d__33__MoveNext(
        MovieFileMerge__DownloadMovie_d__33_o *this,
        const MethodInfo *method)
{
  MovieFileMerge__DownloadMovie_d__33_o *v2; // x20
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  int32_t _1__state; // w8
  MovieFileMerge_o *_4__this; // x19
  System_Collections_Generic_Dictionary_TKey__TValue__o *RequireDownLoadFilePathCRCDictionary; // x0
  MovieFileMerge__DownloadMovie_d__33_o *v10; // x9
  __int128 v11; // q0
  struct System_Collections_Generic_KeyValuePair_TKey__TValue__o current; // q1
  struct System_Collections_Generic_Dictionary_Enumerator_string__uint__o *p__7__wrap1; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  _BOOL8 v16; // x0
  const MethodInfo *v17; // x1
  const MethodInfo *v18; // x3
  MovieFileMerge__DownloadMovie_d__33_o *v19; // x8
  bool result; // w0
  __int64 v21; // x0
  __int64 v22; // x1
  MovieFileMerge__DownloadMovie_d__33_o *v23; // x8
  Il2CppObject *v24; // x1
  MovieFileMerge__DownloadMovie_d__33_o *v25; // x0
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v28[2]; // [xsp+8h] [xbp-88h] BYREF
  MovieFileMerge__DownloadMovie_d__33_o **v29; // [xsp+68h] [xbp-28h]
  MovieFileMerge__DownloadMovie_d__33_o *v30; // [xsp+78h] [xbp-18h] BYREF

  v30 = this;
  v2 = this;
  if ( (byte_4B1B4C5 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_string__uint__GetEnumerator__, method);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_Enumerator_string__uint__MoveNext__, v3);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_Enumerator_string__uint__get_Current__, v4);
    sub_1BCAFF8(&Method_System_Collections_Generic_KeyValuePair_string__uint__get_Key__, v5);
    this = (MovieFileMerge__DownloadMovie_d__33_o *)sub_1BCAFF8(
                                                      &Method_System_Collections_Generic_KeyValuePair_string__uint__get_Value__,
                                                      v6);
    byte_4B1B4C5 = 1;
  }
  v29 = &v30;
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state != 1 )
  {
    if ( _1__state )
      return 0;
    v2->fields.__1__state = -1;
    if ( !_4__this )
      sub_1BCB254(this, method);
    RequireDownLoadFilePathCRCDictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)_4__this->fields.RequireDownLoadFilePathCRCDictionary;
    _4__this->fields.isDownloading = 1;
    _4__this->fields.downloadProgress = 0;
    if ( !RequireDownLoadFilePathCRCDictionary )
      sub_1BCB254(0LL, method);
    System_Collections_Generic_Dictionary_object__uint___GetEnumerator(
      v28,
      RequireDownLoadFilePathCRCDictionary,
      (const MethodInfo_33980A4 *)Method_System_Collections_Generic_Dictionary_string__uint__GetEnumerator__);
    v10 = v30;
    v11 = *(_OWORD *)&v28[0].fields._dictionary;
    current = v28[0].fields._current;
    p__7__wrap1 = &v30->fields.__7__wrap1;
    v28[1] = v28[0];
    *(_QWORD *)&v30->fields.__7__wrap1.fields._getEnumeratorRetType = *(_QWORD *)&v28[0].fields._getEnumeratorRetType;
    v10->fields.__7__wrap1.fields._current = current;
    *(_OWORD *)&v10->fields.__7__wrap1.fields._dictionary = v11;
    sub_1BCAF9C((CGThumbnailListItem_o *)p__7__wrap1, 0, v14, v15);
    v2 = v30;
  }
  v2->fields.__1__state = -3;
  v16 = System_Collections_Generic_Dictionary_Enumerator_object__uint___MoveNext(
          (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v2->fields.__7__wrap1,
          (const MethodInfo_3484D6C *)Method_System_Collections_Generic_Dictionary_Enumerator_string__uint__MoveNext__);
  v19 = v30;
  if ( v16 )
  {
    if ( !_4__this )
      sub_1BCB254(v16, v17);
    if ( _4__this->fields.isDownloadCancel )
    {
      _4__this->fields.isDownloading = 0;
      MovieFileMerge__DownloadMovie_d__33____m__Finally1(v19, v17);
      return 0;
    }
    else
    {
      v24 = (Il2CppObject *)MovieFileMerge__Download(
                              _4__this,
                              (System_String_o *)v30->fields.__7__wrap1.fields._current.fields.key,
                              (uint32_t)v30->fields.__7__wrap1.fields._current.fields.value,
                              v18);
      v25 = v30;
      v30->fields.__2__current = v24;
      sub_1BCAF9C((CGThumbnailListItem_o *)&v25->fields.__2__current, (int32_t)v24, v26, v27);
      result = 1;
      v30->fields.__1__state = 1;
    }
  }
  else
  {
    MovieFileMerge__DownloadMovie_d__33____m__Finally1(v30, v17);
    v23 = v30;
    *(_QWORD *)&v30->fields.__7__wrap1.fields._getEnumeratorRetType = 0LL;
    v23->fields.__7__wrap1.fields._current = 0u;
    *(_OWORD *)&v23->fields.__7__wrap1.fields._dictionary = 0u;
    if ( !_4__this )
      sub_1BCB254(v21, v22);
    result = 0;
    _4__this->fields.isDownloading = 0;
  }
  return result;
}


Il2CppObject *__fastcall MovieFileMerge__DownloadMovie_d__33__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        MovieFileMerge__DownloadMovie_d__33_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn MovieFileMerge__DownloadMovie_d__33__System_Collections_IEnumerator_Reset(
        MovieFileMerge__DownloadMovie_d__33_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1BCB00C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BCB244(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BCB00C(&Method_MovieFileMerge__DownloadMovie_d__33_System_Collections_IEnumerator_Reset__);
  sub_1BCB120(v3, v4);
}


Il2CppObject *__fastcall MovieFileMerge__DownloadMovie_d__33__System_Collections_IEnumerator_get_Current(
        MovieFileMerge__DownloadMovie_d__33_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall MovieFileMerge__DownloadMovie_d__33__System_IDisposable_Dispose(
        MovieFileMerge__DownloadMovie_d__33_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8

  _1__state = this->fields.__1__state;
  if ( _1__state == 1 || _1__state == -3 )
    MovieFileMerge__DownloadMovie_d__33____m__Finally1(this, method);
}


void __fastcall MovieFileMerge__DownloadMovie_d__33____m__Finally1(
        MovieFileMerge__DownloadMovie_d__33_o *this,
        const MethodInfo *method)
{
  if ( (byte_4B1B4C6 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_Enumerator_string__uint__Dispose__, method);
    byte_4B1B4C6 = 1;
  }
  this->fields.__1__state = -1;
  System_Collections_Generic_Dictionary_Enumerator_object__uint___Dispose(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&this->fields.__7__wrap1,
    (const MethodInfo_3484E90 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__uint__Dispose__);
}


void __fastcall MovieFileMerge__Download_d__40___ctor(
        MovieFileMerge__Download_d__40_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall MovieFileMerge__Download_d__40__MoveNext(
        MovieFileMerge__Download_d__40_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  const MethodInfo *v3; // x3
  MovieFileMerge__Download_d__40_o *v4; // x19
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
  __int64 v35; // x1
  struct MovieFileMerge_o *_4__this; // x20
  System_String_o *v37; // x0
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  const MethodInfo *v40; // x1
  Il2CppObject *LocalFolderPath; // x0
  System_String_o *v42; // x0
  int32_t v43; // w2
  const MethodInfo *v44; // x3
  int32_t v45; // w2
  const MethodInfo *v46; // x3
  uint32_t downloadingCRC; // w8
  const MethodInfo *v48; // x2
  const MethodInfo *v49; // x3
  MovieFileMerge__Download_d__40_o *v50; // x21
  int32_t v51; // w1
  const MethodInfo *v52; // x3
  struct System_String_o *v53; // x1
  const MethodInfo *v54; // x3
  int32_t v55; // w1
  const MethodInfo *v56; // x3
  const MethodInfo *v57; // x3
  int32_t v58; // w1
  const MethodInfo *v59; // x3
  const MethodInfo *v60; // x3
  int32_t v61; // w1
  System_String_o *v62; // x0
  int32_t v63; // w2
  const MethodInfo *v64; // x3
  ManagementManager_c *v65; // x0
  _BOOL4 isDuringStartup; // w22
  Il2CppObject *Instance; // x21
  System_String_o *v68; // x22
  ErrorDialog_ClickDelegate_o *v69; // x23
  System_Byte_array *readData_5__5; // x20
  uint32_t v71; // w0
  Il2CppObject **p__2__current; // x19
  int32_t v73; // w2
  const MethodInfo *v74; // x3
  int v75; // w8
  UnityEngine_WaitForEndOfFrame_o *v76; // x20
  int32_t v77; // w2
  const MethodInfo *v78; // x3
  float unscaledTime; // s8
  UnityEngine_WaitForEndOfFrame_o *v80; // x21
  int32_t v81; // w2
  const MethodInfo *v82; // x3
  MovieFileMerge__Download_d__40_o **p_loader; // x22
  int32_t v84; // w2
  const MethodInfo *v85; // x3
  struct System_String_o **p_errorCode_5__11; // x21
  int32_t v87; // w2
  const MethodInfo *v88; // x3
  System_String_o *error; // x0
  System_Byte_array *data; // x0
  int32_t v91; // w2
  const MethodInfo *v92; // x3
  int32_t v93; // w2
  const MethodInfo *v94; // x3
  UnityEngine_WaitForEndOfFrame_o *v95; // x20
  int32_t v96; // w2
  const MethodInfo *v97; // x3
  int32_t v98; // w2
  const MethodInfo *v99; // x3
  System_String_o *v100; // x0
  int32_t v101; // w2
  const MethodInfo *v102; // x3
  int32_t v103; // w1
  System_IO_DirectoryInfo_o *Parent; // x0
  __int64 v105; // x1
  System_IO_DirectoryInfo_o *v106; // x21
  const MethodInfo *v107; // x1
  System_String_o *v108; // x0
  System_String_o *v109; // x21
  int64_t FreeSize; // x21
  ManagerConfig_c *v111; // x0
  ManagerConfig_c *v112; // x0
  Il2CppObject *v113; // x0
  System_String_o *errorCode_5__11; // x21
  CommonUI_o *v115; // x22
  ErrorDialog_ClickDelegate_o *v116; // x23
  UnityEngine_WaitForEndOfFrame_o *v117; // x20
  int32_t v118; // w2
  const MethodInfo *v119; // x3
  int autoRetryCount_5__3; // w21
  ManagerConfig_c *v121; // x0
  float DOWNLOAD_RETRY_DELAY_TIME; // s8
  UnityEngine_WaitForSeconds_o *v123; // x20
  int32_t v124; // w2
  const MethodInfo *v125; // x3
  Il2CppObject *v126; // x21
  CGThumbnailListItem_o *v127; // x20
  MovieFileMerge__Download_d__40_o *loader; // t1
  int32_t v129; // w2
  const MethodInfo *v130; // x3
  int32_t v131; // w2
  const MethodInfo *v132; // x3
  CGThumbnailListItem_o *p_readData_5__5; // x0
  struct UnityEngine_Networking_UnityWebRequest_o **v134; // x21
  int32_t v135; // w2
  const MethodInfo *v136; // x3
  int32_t v137; // w2
  const MethodInfo *v138; // x3
  ManagerConfig_c *v139; // x0
  Il2CppObject *v140; // x0
  System_String_o *v141; // x21
  CommonUI_o *v142; // x22
  ErrorDialog_ClickDelegate_o *v143; // x23
  UnityEngine_WaitForSeconds_o *v144; // x20
  int32_t v145; // w2
  const MethodInfo *v146; // x3
  System_String_o *v147; // x22
  ErrorDialog_ClickDelegate_o *v148; // x23
  UnityEngine_WaitForEndOfFrame_o *v149; // x20
  int32_t v150; // w2
  const MethodInfo *v151; // x3
  int32_t v152; // w2
  const MethodInfo *v153; // x3
  int32_t v154; // w2
  const MethodInfo *v155; // x3
  int32_t v156; // w2
  const MethodInfo *v157; // x3
  float downloadProgress; // s0
  float loadProgress_5__7; // s9
  float v160; // s8
  float v161; // s0
  bool v162; // zf
  float v163; // s8
  System_String_o *downloadingURL; // x22
  System_String_o *v165; // x0
  System_String_o *v166; // x0
  int32_t v167; // w2
  const MethodInfo *v168; // x3
  System_Collections_Generic_Dictionary_string__string__o *ResponseHeaders; // x0
  System_Collections_Generic_Dictionary_object__object__o *v170; // x22
  Il2CppObject *v171; // x22
  MovieFileMerge__Download_d__40_o *v172; // x22
  int v173; // w8
  System_String_o *v174; // x23
  System_String_o *v175; // x0
  System_String_o *v176; // x0
  __int64 v177; // x1
  ManagementManager_c *v178; // x0
  _BOOL4 v179; // w23
  Il2CppObject *v180; // x0
  struct System_String_o *errorLocalizeCode_5__12; // x8
  CommonUI_o *v182; // x22
  System_String_o *v183; // x21
  System_String_o *v184; // x23
  System_String_o *v185; // x23
  ErrorDialog_ClickDelegate_o *v186; // x24
  ManagerConfig_c *v187; // x0
  Il2CppObject *wait_5__8; // x1
  System_String_o *v189; // x23
  System_String_o *v190; // x23
  ErrorDialog_ClickDelegate_o *v191; // x24
  __int64 v192; // x0
  System_IO_IOException_o *v193; // x21
  System_String_o *v194; // x0
  __int64 v195; // x0
  UnityEngine_Networking_UnityWebRequest_o *v196; // x0
  CGThumbnailListItem_o *v197; // x20
  int32_t v198; // w2
  const MethodInfo *v199; // x3
  CGThumbnailListItem_o *v200; // x19
  int32_t v201; // w2
  const MethodInfo *v202; // x3
  System_Nullable_Vector2__o effectDistance; // [xsp+0h] [xbp-70h]
  System_Nullable_Vector2__o effectDistancea; // [xsp+0h] [xbp-70h]
  Il2CppObject *value; // [xsp+38h] [xbp-38h] BYREF

  v4 = this;
  if ( (byte_4B1B4C4 & 1) == 0 )
  {
    sub_1BCAFF8(&char___TypeInfo, method);
    sub_1BCAFF8(&ErrorDialog_ClickDelegate_TypeInfo, v5);
    sub_1BCAFF8(&CommonServicePluginScript_TypeInfo, v6);
    sub_1BCAFF8(&Crc32_TypeInfo, v7);
    sub_1BCAFF8(&UnityEngine_Debug_TypeInfo, v8);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_string__string__TryGetValue__, v9);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_string__string__get_Count__, v10);
    sub_1BCAFF8(&LocalizationManager_TypeInfo, v11);
    sub_1BCAFF8(&ManagementManager_TypeInfo, v12);
    sub_1BCAFF8(&ManagerConfig_TypeInfo, v13);
    sub_1BCAFF8(&Method_MovieFileMerge_EndRetryDialog__, v14);
    sub_1BCAFF8(&Method_MovieFileMerge_EndWarningDialog__, v15);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v16);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v17);
    sub_1BCAFF8(&string___TypeInfo, v18);
    sub_1BCAFF8(&UnityEngine_WaitForEndOfFrame_TypeInfo, v19);
    sub_1BCAFF8(&UnityEngine_WaitForSeconds_TypeInfo, v20);
    sub_1BCAFF8(&StringLiteral_7194/*"HTTP"*/, v21);
    sub_1BCAFF8(&StringLiteral_757/*")\n\n503 Auto retry count "*/, v22);
    sub_1BCAFF8(&StringLiteral_760/*")\nfile crc ("*/, v23);
    sub_1BCAFF8(&StringLiteral_1417/*"503"*/, v24);
    sub_1BCAFF8(&StringLiteral_2033/*"ASSET_LOADER_ERROR_BOOT_RETRY_MESSAGE"*/, v25);
    sub_1BCAFF8(&StringLiteral_15795/*"[FFFF80]Download error for debug"*/, v26);
    sub_1BCAFF8(&StringLiteral_24937/*"{0}/{1}"*/, v27);
    sub_1BCAFF8(&StringLiteral_12247/*"STATUS"*/, v28);
    sub_1BCAFF8(&StringLiteral_756/*")\n\n"*/, v29);
    sub_1BCAFF8(&StringLiteral_649/*"("*/, v30);
    sub_1BCAFF8(&StringLiteral_758/*")\n\nAssetBundle file check sum error\nlist crc ("*/, v31);
    sub_1BCAFF8(&StringLiteral_754/*")"*/, v32);
    sub_1BCAFF8(&StringLiteral_2034/*"ASSET_LOADER_ERROR_TIME_OVER_MESSAGE"*/, v33);
    sub_1BCAFF8(&StringLiteral_759/*")\n\nAssetBundle file download time over"*/, v34);
    this = (MovieFileMerge__Download_d__40_o *)sub_1BCAFF8(&StringLiteral_1/*""*/, v35);
    byte_4B1B4C4 = 1;
  }
  value = 0LL;
  _4__this = v4->fields.__4__this;
  switch ( v4->fields.__1__state )
  {
    case 0:
      v4->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_177;
      v37 = System_String__Format_62491716(
              (System_String_o *)StringLiteral_24937/*"{0}/{1}"*/,
              (Il2CppObject *)_4__this->fields.assetFolderURL,
              (Il2CppObject *)v4->fields.fileName,
              0LL);
      _4__this->fields.downloadingURL = v37;
      sub_1BCAF9C((CGThumbnailListItem_o *)&_4__this->fields.downloadingURL, (int32_t)v37, v38, v39);
      _4__this->fields.downloadingCRC = v4->fields.crc;
      LocalFolderPath = (Il2CppObject *)MovieFileMerge__GetLocalFolderPath(_4__this, v40);
      v42 = System_String__Format_62491716(
              (System_String_o *)StringLiteral_24937/*"{0}/{1}"*/,
              LocalFolderPath,
              (Il2CppObject *)v4->fields.fileName,
              0LL);
      v4->fields._dlFilePath_5__2 = v42;
      sub_1BCAF9C((CGThumbnailListItem_o *)&v4->fields._dlFilePath_5__2, (int32_t)v42, v43, v44);
      v4->fields._autoRetryCount_5__3 = 0;
      v4->fields._isDownload_5__4 = 1;
      _4__this->fields.isErrorDialog = 0;
      goto LABEL_172;
    case 1:
      v4->fields.__1__state = -1;
      unscaledTime = UnityEngine_Time__get_unscaledTime(0LL);
      this = (MovieFileMerge__Download_d__40_o *)ManagerConfig_TypeInfo;
      if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
        this = (MovieFileMerge__Download_d__40_o *)ManagerConfig_TypeInfo;
      }
      v4->fields._requestTime_5__6 = unscaledTime + *(float *)&this[1].fields._dlFilePath_5__2[1].fields._stringLength;
      if ( !_4__this )
        goto LABEL_177;
      v4->fields._loadProgress_5__7 = 0.0;
      v80 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BCB244(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v80, 0LL);
      v4->fields._wait_5__8 = v80;
      sub_1BCAF9C((CGThumbnailListItem_o *)&v4->fields._wait_5__8, (int32_t)v80, v81, v82);
LABEL_42:
      p_loader = (MovieFileMerge__Download_d__40_o **)&_4__this->fields.loader;
      this = (MovieFileMerge__Download_d__40_o *)_4__this->fields.loader;
      if ( !this )
        goto LABEL_177;
      if ( UnityEngine_Networking_UnityWebRequest__get_isDone((UnityEngine_Networking_UnityWebRequest_o *)this, 0LL) )
        goto LABEL_44;
      this = *p_loader;
      if ( !*p_loader )
        goto LABEL_177;
      if ( _4__this->fields.isDownloadCancel )
      {
        UnityEngine_Networking_UnityWebRequest__Dispose((UnityEngine_Networking_UnityWebRequest_o *)this, 0LL);
        _4__this->fields.loader = 0LL;
        sub_1BCAF9C((CGThumbnailListItem_o *)&_4__this->fields.loader, 0, v98, v99);
        LOBYTE(this) = 0;
        _4__this->fields.isDownloading = 0;
        return (char)this;
      }
      downloadProgress = UnityEngine_Networking_UnityWebRequest__get_downloadProgress(
                           (UnityEngine_Networking_UnityWebRequest_o *)this,
                           0LL);
      loadProgress_5__7 = v4->fields._loadProgress_5__7;
      v160 = downloadProgress;
      v161 = UnityEngine_Time__get_unscaledTime(0LL);
      v162 = v160 == loadProgress_5__7;
      v163 = v161;
      if ( !v162 )
      {
        v187 = ManagerConfig_TypeInfo;
        if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
          v187 = ManagerConfig_TypeInfo;
        }
        v4->fields._requestTime_5__6 = v163 + v187->static_fields->TIMEOUT;
        this = *p_loader;
        if ( *p_loader )
        {
          v4->fields._loadProgress_5__7 = UnityEngine_Networking_UnityWebRequest__get_downloadProgress(
                                            (UnityEngine_Networking_UnityWebRequest_o *)this,
                                            0LL);
LABEL_161:
          wait_5__8 = (Il2CppObject *)v4->fields._wait_5__8;
          v4->fields.__2__current = wait_5__8;
          p__2__current = &v4->fields.__2__current;
          sub_1BCAF9C((CGThumbnailListItem_o *)p__2__current, (int32_t)wait_5__8, v84, v85);
          v75 = 2;
          goto LABEL_119;
        }
        goto LABEL_177;
      }
      if ( v161 < v4->fields._requestTime_5__6 )
        goto LABEL_161;
LABEL_44:
      *(_WORD *)&v4->fields._isAutoRetry_5__9 = 0;
      v4->fields._errorCode_5__11 = 0LL;
      p_errorCode_5__11 = &v4->fields._errorCode_5__11;
      sub_1BCAF9C((CGThumbnailListItem_o *)&v4->fields._errorCode_5__11, 0, v84, v85);
      v4->fields._errorLocalizeCode_5__12 = 0LL;
      sub_1BCAF9C((CGThumbnailListItem_o *)&v4->fields._errorLocalizeCode_5__12, 0, v87, v88);
      this = *p_loader;
      if ( !*p_loader )
LABEL_177:
        sub_1BCB254(this, method);
      if ( !UnityEngine_Networking_UnityWebRequest__get_isDone((UnityEngine_Networking_UnityWebRequest_o *)this, 0LL) )
      {
        v100 = System_String__Concat_62488672(
                 (System_String_o *)StringLiteral_649/*"("*/,
                 _4__this->fields.downloadingURL,
                 (System_String_o *)StringLiteral_759/*")\n\nAssetBundle file download time over"*/,
                 0LL);
        v103 = (int)v100;
        *p_errorCode_5__11 = v100;
LABEL_63:
        sub_1BCAF9C((CGThumbnailListItem_o *)&v4->fields._errorCode_5__11, v103, v101, v102);
        break;
      }
      this = *p_loader;
      if ( !*p_loader )
        goto LABEL_177;
      error = UnityEngine_Networking_UnityWebRequest__get_error((UnityEngine_Networking_UnityWebRequest_o *)this, 0LL);
      if ( System_String__IsNullOrEmpty(error, 0LL) )
      {
        this = *p_loader;
        if ( !*p_loader )
          goto LABEL_177;
        this = (MovieFileMerge__Download_d__40_o *)UnityEngine_Networking_UnityWebRequest__get_downloadHandler(
                                                     (UnityEngine_Networking_UnityWebRequest_o *)this,
                                                     0LL);
        if ( !this )
          goto LABEL_177;
        data = UnityEngine_Networking_DownloadHandler__get_data((UnityEngine_Networking_DownloadHandler_o *)this, 0LL);
        v4->fields._readData_5__5 = data;
        sub_1BCAF9C((CGThumbnailListItem_o *)&v4->fields._readData_5__5, (int32_t)data, v91, v92);
        v4->fields.__2__current = 0LL;
        p__2__current = &v4->fields.__2__current;
        sub_1BCAF9C((CGThumbnailListItem_o *)p__2__current, 0, v93, v94);
        v75 = 3;
        goto LABEL_119;
      }
      this = (MovieFileMerge__Download_d__40_o *)_4__this->fields.loader;
      if ( !this )
        goto LABEL_177;
      downloadingURL = _4__this->fields.downloadingURL;
      v165 = UnityEngine_Networking_UnityWebRequest__get_error((UnityEngine_Networking_UnityWebRequest_o *)this, 0LL);
      v166 = System_String__Concat_62490676(
               (System_String_o *)StringLiteral_649/*"("*/,
               downloadingURL,
               (System_String_o *)StringLiteral_756/*")\n\n"*/,
               v165,
               0LL);
      *p_errorCode_5__11 = v166;
      sub_1BCAF9C((CGThumbnailListItem_o *)&v4->fields._errorCode_5__11, (int32_t)v166, v167, v168);
      this = (MovieFileMerge__Download_d__40_o *)_4__this->fields.loader;
      if ( !this )
        goto LABEL_177;
      ResponseHeaders = UnityEngine_Networking_UnityWebRequest__GetResponseHeaders(
                          (UnityEngine_Networking_UnityWebRequest_o *)this,
                          0LL);
      if ( !ResponseHeaders )
        break;
      v170 = (System_Collections_Generic_Dictionary_object__object__o *)ResponseHeaders;
      if ( System_Collections_Generic_Dictionary_object__object___get_Count(
             (System_Collections_Generic_Dictionary_object__object__o *)ResponseHeaders,
             (const MethodInfo_3385A48 *)Method_System_Collections_Generic_Dictionary_string__string__get_Count__) < 1
        || !System_Collections_Generic_Dictionary_object__object___TryGetValue(
              v170,
              (Il2CppObject *)StringLiteral_12247/*"STATUS"*/,
              &value,
              (const MethodInfo_3387584 *)Method_System_Collections_Generic_Dictionary_string__string__TryGetValue__) )
      {
        break;
      }
      v171 = value;
      this = (MovieFileMerge__Download_d__40_o *)sub_1BCB0A0(char___TypeInfo, 1LL);
      if ( !this )
        goto LABEL_177;
      method = (const MethodInfo *)this;
      if ( !LODWORD(this->fields.__2__current) )
        goto LABEL_169;
      LOWORD(this->fields.__4__this) = 32;
      if ( !v171 )
        goto LABEL_177;
      this = (MovieFileMerge__Download_d__40_o *)System_String__Split_62499616(
                                                   (System_String_o *)v171,
                                                   (System_Char_array *)this,
                                                   1,
                                                   0LL);
      if ( !this )
        goto LABEL_177;
      v172 = this;
      if ( SLODWORD(this->fields.__2__current) < 2 )
        break;
      this = (MovieFileMerge__Download_d__40_o *)this->fields.__4__this;
      if ( !this )
        goto LABEL_177;
      this = (MovieFileMerge__Download_d__40_o *)System_String__StartsWith(
                                                   (System_String_o *)this,
                                                   (System_String_o *)StringLiteral_7194/*"HTTP"*/,
                                                   0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
        break;
      if ( LODWORD(v172->fields.__2__current) <= 1 )
        goto LABEL_169;
      this = (MovieFileMerge__Download_d__40_o *)v172->fields.fileName;
      if ( !this )
        goto LABEL_177;
      if ( System_String__Equals_62485728((System_String_o *)this, (System_String_o *)StringLiteral_1417/*"503"*/, 0LL) )
      {
        v173 = v4->fields._autoRetryCount_5__3 + 1;
        v4->fields._isAutoRetry_5__9 = 1;
        v4->fields._autoRetryCount_5__3 = v173;
        v174 = _4__this->fields.downloadingURL;
        v175 = System_Int32__ToString((int)v4 + 64, 0LL);
        v176 = System_String__Concat_62490676(
                 (System_String_o *)StringLiteral_649/*"("*/,
                 v174,
                 (System_String_o *)StringLiteral_757/*")\n\n503 Auto retry count "*/,
                 v175,
                 0LL);
        v103 = (int)v176;
        v4->fields._errorCode_5__11 = v176;
        goto LABEL_63;
      }
      break;
    case 2:
      v4->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_177;
      goto LABEL_42;
    case 3:
      v4->fields.__1__state = -1;
      readData_5__5 = v4->fields._readData_5__5;
      if ( !Crc32_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
      v71 = Crc32__Compute(readData_5__5, 0LL);
      v4->fields.__2__current = 0LL;
      p__2__current = &v4->fields.__2__current;
      *((_DWORD *)p__2__current + 24) = v71;
      sub_1BCAF9C((CGThumbnailListItem_o *)p__2__current, 0, v73, v74);
      v75 = 4;
      goto LABEL_119;
    case 4:
      v4->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_177;
      downloadingCRC = _4__this->fields.downloadingCRC;
      if ( v4->fields._downloadCrc_5__13 != downloadingCRC && downloadingCRC )
      {
        this = (MovieFileMerge__Download_d__40_o *)sub_1BCB0A0(string___TypeInfo, 7LL);
        if ( !this )
          goto LABEL_177;
        v50 = this;
        if ( LODWORD(this->fields.__2__current) )
        {
          v51 = StringLiteral_649/*"("*/;
          this->fields.__4__this = (struct MovieFileMerge_o *)StringLiteral_649/*"("*/;
          sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.__4__this, v51, (int32_t)v48, v49);
          if ( LODWORD(v50->fields.__2__current) > 1 )
          {
            v53 = _4__this->fields.downloadingURL;
            v50->fields.fileName = v53;
            sub_1BCAF9C((CGThumbnailListItem_o *)&v50->fields.fileName, (int32_t)v53, (int32_t)v48, v52);
            if ( LODWORD(v50->fields.__2__current) > 2 )
            {
              v55 = StringLiteral_758/*")\n\nAssetBundle file check sum error\nlist crc ("*/;
              *(_QWORD *)&v50->fields.crc = StringLiteral_758/*")\n\nAssetBundle file check sum error\nlist crc ("*/;
              sub_1BCAF9C((CGThumbnailListItem_o *)&v50->fields.crc, v55, (int32_t)v48, v54);
              this = (MovieFileMerge__Download_d__40_o *)System_UInt32__ToString((int)_4__this + 96, 0LL);
              if ( LODWORD(v50->fields.__2__current) > 3 )
              {
                v50->fields._dlFilePath_5__2 = (struct System_String_o *)this;
                sub_1BCAF9C((CGThumbnailListItem_o *)&v50->fields._dlFilePath_5__2, (int32_t)this, (int32_t)v48, v56);
                if ( LODWORD(v50->fields.__2__current) > 4 )
                {
                  v58 = StringLiteral_760/*")\nfile crc ("*/;
                  *(_QWORD *)&v50->fields._autoRetryCount_5__3 = StringLiteral_760/*")\nfile crc ("*/;
                  sub_1BCAF9C((CGThumbnailListItem_o *)&v50->fields._autoRetryCount_5__3, v58, (int32_t)v48, v57);
                  this = (MovieFileMerge__Download_d__40_o *)System_UInt32__ToString((int)v4 + 120, 0LL);
                  if ( LODWORD(v50->fields.__2__current) > 5 )
                  {
                    v50->fields._readData_5__5 = (struct System_Byte_array *)this;
                    sub_1BCAF9C((CGThumbnailListItem_o *)&v50->fields._readData_5__5, (int32_t)this, (int32_t)v48, v59);
                    if ( LODWORD(v50->fields.__2__current) > 6 )
                    {
                      v61 = StringLiteral_754/*")"*/;
                      *(_QWORD *)&v50->fields._requestTime_5__6 = StringLiteral_754/*")"*/;
                      sub_1BCAF9C((CGThumbnailListItem_o *)&v50->fields._requestTime_5__6, v61, (int32_t)v48, v60);
                      v62 = System_String__Concat_62490940((System_String_array *)v50, 0LL);
                      v4->fields._errorCode_5__11 = v62;
                      sub_1BCAF9C((CGThumbnailListItem_o *)&v4->fields._errorCode_5__11, (int32_t)v62, v63, v64);
                      v4->fields._isCrcError_5__10 = 1;
                      break;
                    }
                  }
                }
              }
            }
          }
        }
LABEL_169:
        sub_1BCB25C(this, method, v48);
      }
      Parent = System_IO_Directory__GetParent(v4->fields._dlFilePath_5__2, 0LL);
      v106 = Parent;
      if ( !Parent )
        sub_1BCB254(0LL, v105);
      if ( (((__int64 (__fastcall *)(System_IO_DirectoryInfo_o *, void *))Parent->klass->vtable._10_get_Exists.method)(
              Parent,
              Parent->klass[1]._1.image) & 1) == 0 )
      {
        v108 = (System_String_o *)((__int64 (__fastcall *)(System_IO_DirectoryInfo_o *, Il2CppMethodPointer))v106->klass->vtable._8_get_FullName.method)(
                                    v106,
                                    v106->klass->vtable._9_get_Name.methodPtr);
        System_IO_Directory__CreateDirectory(v108, 0LL);
      }
      v109 = MovieFileMerge__GetLocalFolderPath(_4__this, v107);
      if ( !CommonServicePluginScript_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CommonServicePluginScript_TypeInfo);
      FreeSize = CommonServicePluginScript__GetFreeSize(v109, 0LL);
      if ( FreeSize >= 1 )
      {
        v111 = ManagerConfig_TypeInfo;
        if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
          v111 = ManagerConfig_TypeInfo;
        }
        if ( FreeSize < v111->static_fields->LIMIT_FREE_SIZE )
        {
          v192 = sub_1BCB00C(&System_IO_IOException_TypeInfo);
          v193 = (System_IO_IOException_o *)sub_1BCB244(v192);
          v194 = (System_String_o *)sub_1BCB00C(&StringLiteral_5248/*"Disk full"*/);
          System_IO_IOException___ctor_63268140(v193, v194, 0LL);
          v195 = sub_1BCB00C(&Method_MovieFileMerge__Download_d__40_MoveNext__);
          sub_1BCB120(v193, v195);
        }
      }
      if ( System_IO_File__Exists(v4->fields._dlFilePath_5__2, 0LL) )
        System_IO_File__Delete(v4->fields._dlFilePath_5__2, 0LL);
      ++_4__this->fields.downloadProgress;
      System_IO_File__WriteAllBytes(v4->fields._dlFilePath_5__2, v4->fields._readData_5__5, 0LL);
      v4->fields._isDownload_5__4 = 0;
      break;
    case 5:
      v4->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_177;
      goto LABEL_82;
    case 6:
      v4->fields.__1__state = -1;
      goto LABEL_92;
    case 7:
      v4->fields.__1__state = -1;
      if ( _4__this )
        goto LABEL_36;
      goto LABEL_177;
    case 8:
      v4->fields.__1__state = -1;
      if ( _4__this )
        goto LABEL_57;
      goto LABEL_177;
    case 9:
      v4->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_177;
      _4__this->fields.isErrorDialog = 1;
      if ( !ManagementManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
      if ( !byte_4B1B4DA )
      {
        sub_1BCAFF8(&ManagementManager_TypeInfo, method);
        byte_4B1B4DA = 1;
      }
      v65 = ManagementManager_TypeInfo;
      if ( !ManagementManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
        v65 = ManagementManager_TypeInfo;
      }
      isDuringStartup = v65->static_fields->isDuringStartup;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      if ( isDuringStartup )
      {
        v68 = LocalizationManager__Get((System_String_o *)StringLiteral_2033/*"ASSET_LOADER_ERROR_BOOT_RETRY_MESSAGE"*/, 0LL);
        v69 = (ErrorDialog_ClickDelegate_o *)sub_1BCB244(ErrorDialog_ClickDelegate_TypeInfo);
        ErrorDialog_ClickDelegate___ctor(v69, (Il2CppObject *)_4__this, Method_MovieFileMerge_EndRetryDialog__, 0LL);
        if ( !Instance )
          goto LABEL_177;
        CommonUI__OpenRetryBootDialog((CommonUI_o *)Instance, (System_String_o *)StringLiteral_1/*""*/, v68, v69, 1, 0LL);
      }
      else
      {
        v147 = LocalizationManager__Get((System_String_o *)StringLiteral_2034/*"ASSET_LOADER_ERROR_TIME_OVER_MESSAGE"*/, 0LL);
        v148 = (ErrorDialog_ClickDelegate_o *)sub_1BCB244(ErrorDialog_ClickDelegate_TypeInfo);
        ErrorDialog_ClickDelegate___ctor(v148, (Il2CppObject *)_4__this, Method_MovieFileMerge_EndRetryDialog__, 0LL);
        if ( !Instance )
          goto LABEL_177;
        CommonUI__OpenRetryDialog((CommonUI_o *)Instance, (System_String_o *)StringLiteral_1/*""*/, v147, v148, 1, 0LL);
      }
LABEL_117:
      if ( !_4__this->fields.isErrorDialog )
        goto LABEL_120;
      v149 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BCB244(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v149, 0LL);
      v4->fields.__2__current = (Il2CppObject *)v149;
      p__2__current = &v4->fields.__2__current;
      sub_1BCAF9C((CGThumbnailListItem_o *)p__2__current, (int32_t)v149, v150, v151);
      v75 = 10;
      goto LABEL_119;
    case 0xA:
      v4->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_177;
      goto LABEL_117;
    default:
      goto LABEL_103;
  }
  method = (const MethodInfo *)v4->fields._errorCode_5__11;
  if ( method )
  {
    MovieFileMerge__AssetLoadLogError(_4__this, (System_String_o *)method, v48);
    v112 = ManagerConfig_TypeInfo;
    if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
      v112 = ManagerConfig_TypeInfo;
    }
    if ( v112->static_fields->UseDebugCommand )
    {
      _4__this->fields.isErrorDialog = 1;
      v113 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      errorCode_5__11 = v4->fields._errorCode_5__11;
      v115 = (CommonUI_o *)v113;
      v116 = (ErrorDialog_ClickDelegate_o *)sub_1BCB244(ErrorDialog_ClickDelegate_TypeInfo);
      ErrorDialog_ClickDelegate___ctor(v116, (Il2CppObject *)_4__this, Method_MovieFileMerge_EndWarningDialog__, 0LL);
      if ( !v115 )
        goto LABEL_177;
      *(_QWORD *)&effectDistance.fields.hasValue = 0LL;
      effectDistance.fields.value.fields.y = 0.0;
      CommonUI__OpenWarningDialog(
        v115,
        (System_String_o *)StringLiteral_15795/*"[FFFF80]Download error for debug"*/,
        errorCode_5__11,
        v116,
        1,
        0,
        -1.0,
        1,
        effectDistance,
        0LL);
LABEL_82:
      if ( _4__this->fields.isErrorDialog )
      {
        v117 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BCB244(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v117, 0LL);
        v4->fields.__2__current = (Il2CppObject *)v117;
        p__2__current = &v4->fields.__2__current;
        sub_1BCAF9C((CGThumbnailListItem_o *)p__2__current, (int32_t)v117, v118, v119);
        v75 = 5;
        goto LABEL_119;
      }
    }
    if ( v4->fields._isAutoRetry_5__9 )
    {
      autoRetryCount_5__3 = v4->fields._autoRetryCount_5__3;
      v121 = ManagerConfig_TypeInfo;
      if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
        v121 = ManagerConfig_TypeInfo;
      }
      DOWNLOAD_RETRY_DELAY_TIME = v121->static_fields->DOWNLOAD_RETRY_DELAY_TIME;
      v123 = (UnityEngine_WaitForSeconds_o *)sub_1BCB244(UnityEngine_WaitForSeconds_TypeInfo);
      UnityEngine_WaitForSeconds___ctor(v123, DOWNLOAD_RETRY_DELAY_TIME * (float)autoRetryCount_5__3, 0LL);
      v4->fields.__2__current = (Il2CppObject *)v123;
      p__2__current = &v4->fields.__2__current;
      sub_1BCAF9C((CGThumbnailListItem_o *)p__2__current, (int32_t)v123, v124, v125);
      v75 = 6;
      goto LABEL_119;
    }
    if ( v4->fields._isCrcError_5__10 )
    {
      v126 = (Il2CppObject *)v4->fields._errorCode_5__11;
      if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
      UnityEngine_Debug__LogError(v126, 0LL);
    }
    else
    {
      MovieFileMerge__AssetLoadLogError(_4__this, v4->fields._errorCode_5__11, v2);
      _4__this->fields.isErrorDialog = 1;
      if ( !ManagementManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
      if ( !byte_4B1B4DA )
      {
        sub_1BCAFF8(&ManagementManager_TypeInfo, v177);
        byte_4B1B4DA = 1;
      }
      v178 = ManagementManager_TypeInfo;
      if ( !ManagementManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
        v178 = ManagementManager_TypeInfo;
      }
      v179 = v178->static_fields->isDuringStartup;
      v180 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      errorLocalizeCode_5__12 = v4->fields._errorLocalizeCode_5__12;
      v182 = (CommonUI_o *)v180;
      v183 = (System_String_o *)StringLiteral_1/*""*/;
      if ( v179 )
      {
        if ( errorLocalizeCode_5__12 )
          v184 = v4->fields._errorLocalizeCode_5__12;
        else
          v184 = (System_String_o *)StringLiteral_2033/*"ASSET_LOADER_ERROR_BOOT_RETRY_MESSAGE"*/;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v185 = LocalizationManager__Get(v184, 0LL);
        v186 = (ErrorDialog_ClickDelegate_o *)sub_1BCB244(ErrorDialog_ClickDelegate_TypeInfo);
        ErrorDialog_ClickDelegate___ctor(v186, (Il2CppObject *)_4__this, Method_MovieFileMerge_EndRetryDialog__, 0LL);
        if ( !v182 )
          goto LABEL_177;
        CommonUI__OpenRetryBootDialog(v182, v183, v185, v186, 1, 0LL);
      }
      else
      {
        if ( errorLocalizeCode_5__12 )
          v189 = v4->fields._errorLocalizeCode_5__12;
        else
          v189 = (System_String_o *)StringLiteral_2034/*"ASSET_LOADER_ERROR_TIME_OVER_MESSAGE"*/;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v190 = LocalizationManager__Get(v189, 0LL);
        v191 = (ErrorDialog_ClickDelegate_o *)sub_1BCB244(ErrorDialog_ClickDelegate_TypeInfo);
        ErrorDialog_ClickDelegate___ctor(v191, (Il2CppObject *)_4__this, Method_MovieFileMerge_EndRetryDialog__, 0LL);
        if ( !v182 )
          goto LABEL_177;
        CommonUI__OpenRetryDialog(v182, v183, v190, v191, 1, 0LL);
      }
LABEL_36:
      if ( _4__this->fields.isErrorDialog )
      {
        v76 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BCB244(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v76, 0LL);
        v4->fields.__2__current = (Il2CppObject *)v76;
        p__2__current = &v4->fields.__2__current;
        sub_1BCAF9C((CGThumbnailListItem_o *)p__2__current, (int32_t)v76, v77, v78);
        v75 = 7;
        goto LABEL_119;
      }
    }
  }
LABEL_92:
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4B17950 )
  {
    sub_1BCAFF8(&NetworkManager_TypeInfo, method);
    byte_4B17950 = 1;
  }
  this = (MovieFileMerge__Download_d__40_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    this = (MovieFileMerge__Download_d__40_o *)NetworkManager_TypeInfo;
  }
  if ( LOBYTE(this[1].fields._dlFilePath_5__2[6].klass) )
  {
    if ( !_4__this )
      goto LABEL_177;
    loader = (MovieFileMerge__Download_d__40_o *)_4__this->fields.loader;
    v127 = (CGThumbnailListItem_o *)&_4__this->fields.loader;
    this = loader;
    if ( !loader )
      goto LABEL_177;
    UnityEngine_Networking_UnityWebRequest__Dispose((UnityEngine_Networking_UnityWebRequest_o *)this, 0LL);
    v127->klass = 0LL;
    sub_1BCAF9C(v127, 0, v129, v130);
    v4->fields._readData_5__5 = 0LL;
    p_readData_5__5 = (CGThumbnailListItem_o *)&v4->fields._readData_5__5;
  }
  else
  {
    if ( !_4__this )
      goto LABEL_177;
    v134 = &_4__this->fields.loader;
    this = (MovieFileMerge__Download_d__40_o *)_4__this->fields.loader;
    if ( v4->fields._isDownload_5__4 )
    {
      if ( !this )
        goto LABEL_177;
      UnityEngine_Networking_UnityWebRequest__Dispose((UnityEngine_Networking_UnityWebRequest_o *)this, 0LL);
      *v134 = 0LL;
      sub_1BCAF9C((CGThumbnailListItem_o *)&_4__this->fields.loader, 0, v135, v136);
      v4->fields._readData_5__5 = 0LL;
      sub_1BCAF9C((CGThumbnailListItem_o *)&v4->fields._readData_5__5, 0, v137, v138);
      if ( !v4->fields._isCrcError_5__10 )
      {
LABEL_120:
        v4->fields._wait_5__8 = 0LL;
        sub_1BCAF9C((CGThumbnailListItem_o *)&v4->fields._wait_5__8, 0, (int32_t)v2, v3);
        v4->fields._errorCode_5__11 = 0LL;
        sub_1BCAF9C((CGThumbnailListItem_o *)&v4->fields._errorCode_5__11, 0, v152, v153);
        v4->fields._errorLocalizeCode_5__12 = 0LL;
        sub_1BCAF9C((CGThumbnailListItem_o *)&v4->fields._errorLocalizeCode_5__12, 0, v154, v155);
        do
        {
          v4->fields._readData_5__5 = 0LL;
          sub_1BCAF9C((CGThumbnailListItem_o *)&v4->fields._readData_5__5, 0, v156, v157);
LABEL_172:
          v4->fields._readData_5__5 = 0LL;
          sub_1BCAF9C((CGThumbnailListItem_o *)&v4->fields._readData_5__5, 0, v45, v46);
        }
        while ( !v4->fields._isDownload_5__4 );
        v196 = UnityEngine_Networking_UnityWebRequest__Get(_4__this->fields.downloadingURL, 0LL);
        _4__this->fields.loader = v196;
        v197 = (CGThumbnailListItem_o *)&_4__this->fields.loader;
        sub_1BCAF9C(v197, (int32_t)v196, v198, v199);
        this = (MovieFileMerge__Download_d__40_o *)v197->klass;
        if ( v197->klass )
        {
          UnityEngine_Networking_UnityWebRequest__SendWebRequest((UnityEngine_Networking_UnityWebRequest_o *)this, 0LL);
          v4->fields.__2__current = 0LL;
          v200 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
          sub_1BCAF9C(v200, 0, v201, v202);
          LOBYTE(this) = 1;
          LODWORD(v200[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
          return (char)this;
        }
        goto LABEL_177;
      }
      if ( !v4->fields._errorCode_5__11 )
        goto LABEL_114;
      v139 = ManagerConfig_TypeInfo;
      if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
        v139 = ManagerConfig_TypeInfo;
      }
      if ( !v139->static_fields->UseDebugCommand )
        goto LABEL_114;
      _4__this->fields.isErrorDialog = 1;
      v140 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v141 = v4->fields._errorCode_5__11;
      v142 = (CommonUI_o *)v140;
      v143 = (ErrorDialog_ClickDelegate_o *)sub_1BCB244(ErrorDialog_ClickDelegate_TypeInfo);
      ErrorDialog_ClickDelegate___ctor(v143, (Il2CppObject *)_4__this, Method_MovieFileMerge_EndWarningDialog__, 0LL);
      if ( !v142 )
        goto LABEL_177;
      *(_QWORD *)&effectDistancea.fields.hasValue = 0LL;
      effectDistancea.fields.value.fields.y = 0.0;
      CommonUI__OpenWarningDialog(
        v142,
        (System_String_o *)StringLiteral_15795/*"[FFFF80]Download error for debug"*/,
        v141,
        v143,
        1,
        0,
        -1.0,
        1,
        effectDistancea,
        0LL);
LABEL_57:
      if ( _4__this->fields.isErrorDialog )
      {
        v95 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BCB244(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v95, 0LL);
        v4->fields.__2__current = (Il2CppObject *)v95;
        p__2__current = &v4->fields.__2__current;
        sub_1BCAF9C((CGThumbnailListItem_o *)p__2__current, (int32_t)v95, v96, v97);
        v75 = 8;
      }
      else
      {
LABEL_114:
        v144 = (UnityEngine_WaitForSeconds_o *)sub_1BCB244(UnityEngine_WaitForSeconds_TypeInfo);
        UnityEngine_WaitForSeconds___ctor(v144, 1.0, 0LL);
        v4->fields.__2__current = (Il2CppObject *)v144;
        p__2__current = &v4->fields.__2__current;
        sub_1BCAF9C((CGThumbnailListItem_o *)p__2__current, (int32_t)v144, v145, v146);
        v75 = 9;
      }
LABEL_119:
      *((_DWORD *)p__2__current - 2) = v75;
      LOBYTE(this) = 1;
      return (char)this;
    }
    if ( !this )
      return (char)this;
    UnityEngine_Networking_UnityWebRequest__Dispose((UnityEngine_Networking_UnityWebRequest_o *)this, 0LL);
    p_readData_5__5 = (CGThumbnailListItem_o *)&_4__this->fields.loader;
    *v134 = 0LL;
  }
  sub_1BCAF9C(p_readData_5__5, 0, v131, v132);
LABEL_103:
  LOBYTE(this) = 0;
  return (char)this;
}


Il2CppObject *__fastcall MovieFileMerge__Download_d__40__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        MovieFileMerge__Download_d__40_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn MovieFileMerge__Download_d__40__System_Collections_IEnumerator_Reset(
        MovieFileMerge__Download_d__40_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1BCB00C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BCB244(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BCB00C(&Method_MovieFileMerge__Download_d__40_System_Collections_IEnumerator_Reset__);
  sub_1BCB120(v3, v4);
}


Il2CppObject *__fastcall MovieFileMerge__Download_d__40__System_Collections_IEnumerator_get_Current(
        MovieFileMerge__Download_d__40_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall MovieFileMerge__Download_d__40__System_IDisposable_Dispose(
        MovieFileMerge__Download_d__40_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall MovieFileMerge__Merge_d__34___ctor(
        MovieFileMerge__Merge_d__34_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall MovieFileMerge__Merge_d__34__MoveNext(MovieFileMerge__Merge_d__34_o *this, const MethodInfo *method)
{
  MovieFileMerge__Merge_d__34_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  int32_t _1__state; // w8
  struct MovieFileMerge_o *_4__this; // x20
  System_Collections_Generic_List_string__o *SplitFileList; // x0
  System_String_o *outputMergeFile; // x21
  System_Collections_Generic_List_string__o *v12; // x22
  FileMergeAndSplit_Merge_o *v13; // x23
  const MethodInfo *v14; // x3
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  FileMergeAndSplit_Merge_o *mergeClass; // x21
  System_Action_object__o *v18; // x22
  const MethodInfo *v19; // x2
  System_Collections_IEnumerator_o *v20; // x0
  CGThumbnailListItem_o *p__2__current; // x19
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  bool result; // w0
  struct FileMergeAndSplit_CRCChecker_o *crcCheckerClass; // x8
  struct FileMergeAndSplit_Merge_o *v26; // x8
  System_String_o *v27; // x21
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x0
  System_Collections_Generic_List_uint__o *v29; // x22
  FileMergeAndSplit_CRCChecker_o *v30; // x23
  const MethodInfo *v31; // x3
  CGThumbnailListItem_o *p_crcCheckerClass; // x20
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  System_Collections_IEnumerator_o *v35; // x0
  CGThumbnailListItem_o *v36; // x19
  int32_t v37; // w2
  const MethodInfo *v38; // x3

  v2 = this;
  if ( (byte_4B1B4C7 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_Exception__TypeInfo, method);
    sub_1BCAFF8(&FileMergeAndSplit_CRCChecker_TypeInfo, v3);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_string__uint__get_Values__, v4);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_ToList_uint___, v5);
    sub_1BCAFF8(&FileMergeAndSplit_Merge_TypeInfo, v6);
    this = (MovieFileMerge__Merge_d__34_o *)sub_1BCAFF8(&Method_MovieFileMerge__Merge_b__34_0__, v7);
    byte_4B1B4C7 = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state == 2 )
  {
    v2->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_23;
    crcCheckerClass = _4__this->fields.crcCheckerClass;
    if ( crcCheckerClass && crcCheckerClass->fields.isCRCMatch )
    {
      if ( System_IO_Directory__Exists(_4__this->fields.outputSplitFileFolder, 0LL) )
        System_IO_Directory__Delete(_4__this->fields.outputSplitFileFolder, 1, 0LL);
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
        SplitFileList = MovieFileMerge__GetSplitFileList(_4__this, method);
        outputMergeFile = _4__this->fields.outputMergeFile;
        v12 = SplitFileList;
        v13 = (FileMergeAndSplit_Merge_o *)sub_1BCB244(FileMergeAndSplit_Merge_TypeInfo);
        FileMergeAndSplit_Merge___ctor(v13, v12, outputMergeFile, v14);
        _4__this->fields.mergeClass = v13;
        sub_1BCAF9C((CGThumbnailListItem_o *)&_4__this->fields.mergeClass, (int32_t)v13, v15, v16);
        mergeClass = _4__this->fields.mergeClass;
        v18 = (System_Action_object__o *)sub_1BCB244(System_Action_Exception__TypeInfo);
        System_Action_object____ctor(v18, (Il2CppObject *)_4__this, Method_MovieFileMerge__Merge_b__34_0__, 0LL);
        if ( mergeClass )
        {
          v20 = FileMergeAndSplit_Merge__Run(mergeClass, (System_Action_Exception__o *)v18, v19);
          v2->fields.__2__current = (Il2CppObject *)v20;
          p__2__current = (CGThumbnailListItem_o *)&v2->fields.__2__current;
          sub_1BCAF9C(p__2__current, (int32_t)v20, v22, v23);
          result = 1;
          LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
          return result;
        }
      }
LABEL_23:
      sub_1BCB254(this, method);
    }
    return 0;
  }
  v2->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_23;
  v26 = _4__this->fields.mergeClass;
  if ( !v26 )
    goto LABEL_23;
  if ( v26->fields.isError )
    return 0;
  this = (MovieFileMerge__Merge_d__34_o *)_4__this->fields.AllDownLoadFilePathCRCDictionary;
  if ( !this )
    goto LABEL_23;
  v27 = _4__this->fields.outputMergeFile;
  Values = System_Collections_Generic_Dictionary_object__uint___get_Values(
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)this,
             (const MethodInfo_3397AE4 *)Method_System_Collections_Generic_Dictionary_string__uint__get_Values__);
  v29 = (System_Collections_Generic_List_uint__o *)System_Linq_Enumerable__ToList_uint_(
                                                     (System_Collections_Generic_IEnumerable_TSource__o *)Values,
                                                     (const MethodInfo_305BC50 *)Method_System_Linq_Enumerable_ToList_uint___);
  v30 = (FileMergeAndSplit_CRCChecker_o *)sub_1BCB244(FileMergeAndSplit_CRCChecker_TypeInfo);
  FileMergeAndSplit_CRCChecker___ctor(v30, v27, v29, v31);
  _4__this->fields.crcCheckerClass = v30;
  p_crcCheckerClass = (CGThumbnailListItem_o *)&_4__this->fields.crcCheckerClass;
  sub_1BCAF9C(p_crcCheckerClass, (int32_t)v30, v33, v34);
  this = (MovieFileMerge__Merge_d__34_o *)p_crcCheckerClass->klass;
  if ( !p_crcCheckerClass->klass )
    goto LABEL_23;
  v35 = FileMergeAndSplit_CRCChecker__Run((FileMergeAndSplit_CRCChecker_o *)this, method);
  v2->fields.__2__current = (Il2CppObject *)v35;
  v36 = (CGThumbnailListItem_o *)&v2->fields.__2__current;
  sub_1BCAF9C(v36, (int32_t)v35, v37, v38);
  LODWORD(v36[-1].fields._ThumbnailSpritePath_k__BackingField) = 2;
  return 1;
}


Il2CppObject *__fastcall MovieFileMerge__Merge_d__34__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        MovieFileMerge__Merge_d__34_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn MovieFileMerge__Merge_d__34__System_Collections_IEnumerator_Reset(
        MovieFileMerge__Merge_d__34_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1BCB00C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BCB244(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BCB00C(&Method_MovieFileMerge__Merge_d__34_System_Collections_IEnumerator_Reset__);
  sub_1BCB120(v3, v4);
}


Il2CppObject *__fastcall MovieFileMerge__Merge_d__34__System_Collections_IEnumerator_get_Current(
        MovieFileMerge__Merge_d__34_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall MovieFileMerge__Merge_d__34__System_IDisposable_Dispose(
        MovieFileMerge__Merge_d__34_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall MovieFileMerge__PlayCRIMovie_d__30___ctor(
        MovieFileMerge__PlayCRIMovie_d__30_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall MovieFileMerge__PlayCRIMovie_d__30__MoveNext(
        MovieFileMerge__PlayCRIMovie_d__30_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  MovieFileMerge__PlayCRIMovie_d__30_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  int32_t _1__state; // w8
  Il2CppObject *v14; // x21
  Il2CppObject **p__8__1; // x20
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  Il2CppObject *object; // x21
  Il2CppObject *v19; // x21
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  Il2CppObject *v22; // x8
  CRIMoviePlayer_o *klass; // x21
  System_String_o *filePath; // x22
  BgmManager_c *v25; // x0
  Il2CppObject *v26; // x24
  float masterVolume; // s8
  System_Action_o *v28; // x23
  struct MovieFileMerge___c__DisplayClass30_0_o *_8__1; // x8
  CGThumbnailListItem_o *p__2__current; // x19
  bool result; // w0

  v4 = this;
  if ( (byte_4B1B4C8 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, method);
    sub_1BCAFF8(&BgmManager_TypeInfo, v5);
    sub_1BCAFF8(&Method_UnityEngine_GameObject_GetComponent_CRIMoviePlayer___, v6);
    sub_1BCAFF8(&Method_UnityEngine_Object_Instantiate_GameObject___, v7);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v8);
    sub_1BCAFF8(&Method_UnityEngine_Resources_Load_GameObject___, v9);
    sub_1BCAFF8(&Method_MovieFileMerge___c__DisplayClass30_0__PlayCRIMovie_b__0__, v10);
    sub_1BCAFF8(&MovieFileMerge___c__DisplayClass30_0_TypeInfo, v11);
    this = (MovieFileMerge__PlayCRIMovie_d__30_o *)sub_1BCAFF8(&StringLiteral_3883/*"CRIMovie/CRIMoviePlayerWithPanel"*/, v12);
    byte_4B1B4C8 = 1;
  }
  _1__state = v4->fields.__1__state;
  if ( _1__state == 1 )
  {
    v4->fields.__1__state = -1;
  }
  else
  {
    if ( _1__state )
      return 0;
    v4->fields.__1__state = -1;
    v14 = (Il2CppObject *)sub_1BCB244(MovieFileMerge___c__DisplayClass30_0_TypeInfo);
    System_Object___ctor(v14, 0LL);
    v4->fields.__8__1 = (struct MovieFileMerge___c__DisplayClass30_0_o *)v14;
    p__8__1 = (Il2CppObject **)&v4->fields.__8__1;
    sub_1BCAF9C((CGThumbnailListItem_o *)&v4->fields.__8__1, (int32_t)v14, v16, v17);
    object = UnityEngine_Resources__Load_object_(
               (System_String_o *)StringLiteral_3883/*"CRIMovie/CRIMoviePlayerWithPanel"*/,
               (const MethodInfo_30B37E0 *)Method_UnityEngine_Resources_Load_GameObject___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (MovieFileMerge__PlayCRIMovie_d__30_o *)UnityEngine_Object__Instantiate_object_(
                                                     object,
                                                     (const MethodInfo_30A3BB4 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !this )
      goto LABEL_25;
    v19 = *p__8__1;
    this = (MovieFileMerge__PlayCRIMovie_d__30_o *)UnityEngine_GameObject__GetComponent_object_(
                                                     (UnityEngine_GameObject_o *)this,
                                                     (const MethodInfo_306E710 *)Method_UnityEngine_GameObject_GetComponent_CRIMoviePlayer___);
    if ( !v19 )
      goto LABEL_25;
    v19[1].klass = (Il2CppClass *)this;
    sub_1BCAF9C((CGThumbnailListItem_o *)&v19[1], (int32_t)this, v20, v21);
    v22 = *p__8__1;
    if ( !*p__8__1 )
      goto LABEL_25;
    LOBYTE(v22[1].monitor) = 1;
    klass = (CRIMoviePlayer_o *)v22[1].klass;
    filePath = v4->fields.filePath;
    if ( !BgmManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
    if ( !byte_4B17452 )
    {
      sub_1BCAFF8(&BgmManager_TypeInfo, method);
      byte_4B17452 = 1;
    }
    v25 = BgmManager_TypeInfo;
    if ( !BgmManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
      v25 = BgmManager_TypeInfo;
    }
    v26 = *p__8__1;
    masterVolume = v25->static_fields->masterVolume;
    v28 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
    System_Action___ctor(v28, v26, Method_MovieFileMerge___c__DisplayClass30_0__PlayCRIMovie_b__0__, 0LL);
    if ( !klass
      || (CRIMoviePlayer__Initialize(klass, filePath, filePath, masterVolume, 1, 0LL, v28, 1, 0LL, 0, 0, 1, 0LL, 0LL),
          !*p__8__1)
      || (this = (MovieFileMerge__PlayCRIMovie_d__30_o *)(*p__8__1)[1].klass) == 0LL )
    {
LABEL_25:
      sub_1BCB254(this, method);
    }
    CRIMoviePlayer__MoviePlay((CRIMoviePlayer_o *)this, 1, 1, 1, 0, 0LL);
  }
  _8__1 = v4->fields.__8__1;
  if ( !_8__1 )
    goto LABEL_25;
  if ( _8__1->fields.wait )
  {
    v4->fields.__2__current = 0LL;
    p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
    sub_1BCAF9C(p__2__current, 0, v2, v3);
    result = 1;
    LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
    return result;
  }
  return 0;
}


Il2CppObject *__fastcall MovieFileMerge__PlayCRIMovie_d__30__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        MovieFileMerge__PlayCRIMovie_d__30_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn MovieFileMerge__PlayCRIMovie_d__30__System_Collections_IEnumerator_Reset(
        MovieFileMerge__PlayCRIMovie_d__30_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1BCB00C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BCB244(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BCB00C(&Method_MovieFileMerge__PlayCRIMovie_d__30_System_Collections_IEnumerator_Reset__);
  sub_1BCB120(v3, v4);
}


Il2CppObject *__fastcall MovieFileMerge__PlayCRIMovie_d__30__System_Collections_IEnumerator_get_Current(
        MovieFileMerge__PlayCRIMovie_d__30_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall MovieFileMerge__PlayCRIMovie_d__30__System_IDisposable_Dispose(
        MovieFileMerge__PlayCRIMovie_d__30_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall MovieFileMerge__PlayMP4_d__28___ctor(
        MovieFileMerge__PlayMP4_d__28_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall MovieFileMerge__PlayMP4_d__28__MoveNext(
        MovieFileMerge__PlayMP4_d__28_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  int32_t _1__state; // w8
  bool result; // w0
  struct MovieFileMerge_o *_4__this; // x0
  Il2CppObject *v8; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int32_t v11; // w8

  _1__state = this->fields.__1__state;
  result = 0;
  if ( _1__state == 1 )
  {
    v11 = -1;
  }
  else
  {
    if ( _1__state )
      return result;
    _4__this = this->fields.__4__this;
    this->fields.__1__state = -1;
    if ( !_4__this )
      sub_1BCB254(0LL, method);
    v8 = (Il2CppObject *)MovieFileMerge__PlayMP4_39679256(_4__this, _4__this->fields.outputMergeFile, v2, v3);
    this->fields.__2__current = v8;
    sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.__2__current, (int32_t)v8, v9, v10);
    v11 = 1;
    result = 1;
  }
  this->fields.__1__state = v11;
  return result;
}


Il2CppObject *__fastcall MovieFileMerge__PlayMP4_d__28__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        MovieFileMerge__PlayMP4_d__28_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn MovieFileMerge__PlayMP4_d__28__System_Collections_IEnumerator_Reset(
        MovieFileMerge__PlayMP4_d__28_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1BCB00C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BCB244(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BCB00C(&Method_MovieFileMerge__PlayMP4_d__28_System_Collections_IEnumerator_Reset__);
  sub_1BCB120(v3, v4);
}


Il2CppObject *__fastcall MovieFileMerge__PlayMP4_d__28__System_Collections_IEnumerator_get_Current(
        MovieFileMerge__PlayMP4_d__28_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall MovieFileMerge__PlayMP4_d__28__System_IDisposable_Dispose(
        MovieFileMerge__PlayMP4_d__28_o *this,
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
  System_String_o *filePath; // x0
  struct MovieFileMerge_o *_4__this; // x20
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  bool result; // w0
  UnityEngine_WaitForEndOfFrame_o *v9; // x20
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  int32_t v12; // w8
  UnityEngine_WaitForEndOfFrame_o *v13; // x20
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  Il2CppObject *v16; // x0
  Il2CppObject **p__2__current; // x19
  int32_t v18; // w2
  const MethodInfo *v19; // x3

  if ( (byte_4B1B4C9 & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_WaitForEndOfFrame_TypeInfo, method);
    byte_4B1B4C9 = 1;
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
        sub_1BCB254(IsNullOrEmpty, v6);
      v16 = (Il2CppObject *)MovieFileMerge__PlayCRIMovie((MovieFileMerge_o *)IsNullOrEmpty, this->fields.filePath, v7);
      this->fields.__2__current = v16;
      p__2__current = &this->fields.__2__current;
      sub_1BCAF9C((CGThumbnailListItem_o *)p__2__current, (int32_t)v16, v18, v19);
      result = 1;
      *((_DWORD *)p__2__current - 2) = 1;
      break;
    case 1:
      this->fields.__1__state = -1;
      v13 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BCB244(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v13, 0LL);
      this->fields.__2__current = (Il2CppObject *)v13;
      sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.__2__current, (int32_t)v13, v14, v15);
      v12 = 2;
      goto LABEL_9;
    case 2:
      this->fields.__1__state = -1;
      v9 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BCB244(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v9, 0LL);
      this->fields.__2__current = (Il2CppObject *)v9;
      sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.__2__current, (int32_t)v9, v10, v11);
      v12 = 3;
LABEL_9:
      this->fields.__1__state = v12;
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

  v2 = sub_1BCB00C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BCB244(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BCB00C(&Method_MovieFileMerge__PlayMP4_d__29_System_Collections_IEnumerator_Reset__);
  sub_1BCB120(v3, v4);
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


void __fastcall MovieFileMerge___c__DisplayClass30_0___ctor(
        MovieFileMerge___c__DisplayClass30_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MovieFileMerge___c__DisplayClass30_0___PlayCRIMovie_b__0(
        MovieFileMerge___c__DisplayClass30_0_o *this,
        const MethodInfo *method)
{
  CRIMoviePlayer_o *player; // x0

  player = this->fields.player;
  if ( !player )
    sub_1BCB254(0LL, method);
  CRIMoviePlayer__Dispose(player, 0LL);
  this->fields.wait = 0;
}