void MovieFileMerge___ctor(MovieFileMerge_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_TKey__TValue__o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  System_Collections_Generic_Dictionary_TKey__TValue__o *v6; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4CB522D & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__uint___ctor__);
    sub_1C6BA08(&System_Collections_Generic_Dictionary_string__uint__TypeInfo);
    byte_4CB522D = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1C6BC54(System_Collections_Generic_Dictionary_string__uint__TypeInfo);
  System_Collections_Generic_Dictionary_object__uint____ctor(
    v3,
    (const MethodInfo_34CCDF4 *)Method_System_Collections_Generic_Dictionary_string__uint___ctor__);
  this->fields.AllDownLoadFilePathCRCDictionary = (struct System_Collections_Generic_Dictionary_string__uint__o *)v3;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.AllDownLoadFilePathCRCDictionary, (int32_t)v3, v4, v5);
  v6 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1C6BC54(System_Collections_Generic_Dictionary_string__uint__TypeInfo);
  System_Collections_Generic_Dictionary_object__uint____ctor(
    v6,
    (const MethodInfo_34CCDF4 *)Method_System_Collections_Generic_Dictionary_string__uint___ctor__);
  this->fields.RequireDownLoadFilePathCRCDictionary = (struct System_Collections_Generic_Dictionary_string__uint__o *)v6;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.RequireDownLoadFilePathCRCDictionary, (int32_t)v6, v7, v8);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void MovieFileMerge__AssetLoadLogError(MovieFileMerge_o *this, System_String_o *errorCode, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  Il2CppObject *v9; // x21
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
  int32_t v28; // w1
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  int32_t v31; // w1
  __int64 v32; // x22
  __int64 v33; // x24

  if ( (byte_4CB522B & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Debug_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
    sub_1C6BA08(&string___TypeInfo);
    sub_1C6BA08(&StringLiteral_14163/*"The request timed out."*/);
    sub_1C6BA08(&StringLiteral_14104/*"The network connection was lost."*/);
    sub_1C6BA08(&StringLiteral_4654/*"Connection reset by peer"*/);
    sub_1C6BA08(&StringLiteral_5012/*"DLErrorType"*/);
    sub_1C6BA08(&StringLiteral_5011/*"DLErrorAsset"*/);
    sub_1C6BA08(&StringLiteral_4653/*"Connection refused"*/);
    sub_1C6BA08(&StringLiteral_9453/*"No address associated with hostname"*/);
    sub_1C6BA08(&StringLiteral_2369/*"AssetBundle file download time over"*/);
    sub_1C6BA08(&StringLiteral_12926/*"Software caused connection abort"*/);
    sub_1C6BA08(&StringLiteral_4655/*"Connection timed out"*/);
    sub_1C6BA08(&StringLiteral_2372/*"AssetLoadError"*/);
    byte_4CB522B = 1;
  }
  Instance = (Il2CppObject *)sub_1C6BAB0(string___TypeInfo, 8);
  if ( !Instance )
    goto LABEL_28;
  v9 = Instance;
  if ( !LODWORD(Instance[1].monitor) )
    goto LABEL_18;
  v10 = StringLiteral_9453/*"No address associated with hostname"*/;
  Instance[2].klass = (Il2CppClass *)StringLiteral_9453/*"No address associated with hostname"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)&Instance[2], v10, v7, v8);
  if ( LODWORD(v9[1].monitor) <= 1 )
    goto LABEL_18;
  v13 = StringLiteral_2369/*"AssetBundle file download time over"*/;
  v9[2].monitor = (void *)StringLiteral_2369/*"AssetBundle file download time over"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v9[2].monitor, v13, v11, v12);
  if ( LODWORD(v9[1].monitor) <= 2 )
    goto LABEL_18;
  v16 = StringLiteral_14104/*"The network connection was lost."*/;
  v9[3].klass = (Il2CppClass *)StringLiteral_14104/*"The network connection was lost."*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v9[3], v16, v14, v15);
  if ( LODWORD(v9[1].monitor) <= 3 )
    goto LABEL_18;
  v19 = StringLiteral_4654/*"Connection reset by peer"*/;
  v9[3].monitor = (void *)StringLiteral_4654/*"Connection reset by peer"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v9[3].monitor, v19, v17, v18);
  if ( LODWORD(v9[1].monitor) <= 4 )
    goto LABEL_18;
  v22 = StringLiteral_12926/*"Software caused connection abort"*/;
  v9[4].klass = (Il2CppClass *)StringLiteral_12926/*"Software caused connection abort"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v9[4], v22, v20, v21);
  if ( LODWORD(v9[1].monitor) <= 5
    || (v25 = StringLiteral_4655/*"Connection timed out"*/,
        v9[4].monitor = (void *)StringLiteral_4655/*"Connection timed out"*/,
        sub_1C6B9AC((CGThumbnailListItem_o *)&v9[4].monitor, v25, v23, v24),
        LODWORD(v9[1].monitor) <= 6)
    || (v28 = StringLiteral_4653/*"Connection refused"*/,
        v9[5].klass = (Il2CppClass *)StringLiteral_4653/*"Connection refused"*/,
        sub_1C6B9AC((CGThumbnailListItem_o *)&v9[5], v28, v26, v27),
        LODWORD(v9[1].monitor) <= 7) )
  {
LABEL_18:
    sub_1C6BC68(Instance);
  }
  v31 = StringLiteral_14163/*"The request timed out."*/;
  v9[5].monitor = (void *)StringLiteral_14163/*"The request timed out."*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v9[5].monitor, v31, v29, v30);
  if ( (int)v9[1].monitor < 1 )
  {
LABEL_19:
    if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
    goto LABEL_27;
  }
  v32 = 0;
  v33 = (unsigned int)v9[1].monitor - 1LL;
  while ( 1 )
  {
    if ( !errorCode )
      goto LABEL_28;
    Instance = (Il2CppObject *)System_String__Contains(errorCode, *((System_String_o **)&v9[2].klass + v32), 0);
    if ( ((unsigned __int8)Instance & 1) != 0 )
      break;
    if ( v33 == v32 )
      goto LABEL_19;
    if ( ++v32 >= (unsigned __int64)LODWORD(v9[1].monitor) )
      goto LABEL_18;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
  if ( !Instance )
LABEL_28:
    sub_1C6BC60(Instance, v6);
  CrashReporter__AddCustomKey(
    (CrashReporter_o *)Instance,
    (System_String_o *)StringLiteral_5011/*"DLErrorAsset"*/,
    this->fields.downloadingURL,
    0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
  if ( (unsigned int)v32 >= LODWORD(v9[1].monitor) )
    goto LABEL_18;
  if ( !Instance )
    goto LABEL_28;
  CrashReporter__AddCustomKey(
    (CrashReporter_o *)Instance,
    (System_String_o *)StringLiteral_5012/*"DLErrorType"*/,
    *((System_String_o **)&v9[2].klass + v32),
    0);
  if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
  errorCode = (System_String_o *)StringLiteral_2372/*"AssetLoadError"*/;
LABEL_27:
  UnityEngine_Debug__LogError((Il2CppObject *)errorCode, 0);
}


System_Collections_IEnumerator_o *MovieFileMerge__CRCDownloadAndCheck(MovieFileMerge_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4CB5222 & 1) == 0 )
  {
    sub_1C6BA08(&MovieFileMerge__CRCDownloadAndCheck_d__32_TypeInfo);
    byte_4CB5222 = 1;
  }
  v3 = sub_1C6BC54(MovieFileMerge__CRCDownloadAndCheck_d__32_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v3 + 32), (int32_t)this, v4, v5);
  return (System_Collections_IEnumerator_o *)v3;
}


System_Collections_Generic_Dictionary_string__uint__o *MovieFileMerge__CreateDic(
        MovieFileMerge_o *this,
        System_String_o *dataPath,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_TKey__TValue__o *v4; // x19
  System_String_array *AllLines; // x0
  __int64 v6; // x1
  int max_length; // w8
  System_String_array *v8; // x20
  unsigned int v9; // w22
  System_String_array *v10; // x21
  uint32_t result; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4CB5229 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__uint__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__uint___ctor__);
    sub_1C6BA08(&System_Collections_Generic_Dictionary_string__uint__TypeInfo);
    byte_4CB5229 = 1;
  }
  result = 0;
  v4 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1C6BC54(System_Collections_Generic_Dictionary_string__uint__TypeInfo);
  System_Collections_Generic_Dictionary_object__uint____ctor(
    v4,
    (const MethodInfo_34CCDF4 *)Method_System_Collections_Generic_Dictionary_string__uint___ctor__);
  AllLines = System_IO_File__ReadAllLines(dataPath, 0);
  if ( !AllLines )
LABEL_18:
    sub_1C6BC60(AllLines, v6);
  max_length = AllLines->max_length;
  v8 = AllLines;
  if ( max_length >= 1 )
  {
    v9 = 0;
    while ( 1 )
    {
      if ( v9 >= max_length )
LABEL_17:
        sub_1C6BC68(AllLines);
      AllLines = (System_String_array *)v8->m_Items[v9];
      if ( !AllLines )
        goto LABEL_18;
      AllLines = System_String__Split((System_String_o *)AllLines, 0x2Cu, 0, 0);
      result = 0;
      if ( !AllLines )
        goto LABEL_18;
      v10 = AllLines;
      if ( LODWORD(AllLines->max_length) <= 1 )
        goto LABEL_17;
      AllLines = (System_String_array *)System_UInt32__TryParse(AllLines->m_Items[1], &result, 0);
      if ( ((unsigned __int8)AllLines & 1) == 0 )
        return 0;
      if ( !LODWORD(v10->max_length) )
        goto LABEL_17;
      if ( !v4 )
        goto LABEL_18;
      System_Collections_Generic_Dictionary_object__uint___Add(
        v4,
        (Il2CppObject *)v10->m_Items[0],
        result,
        (const MethodInfo_34CD7A8 *)Method_System_Collections_Generic_Dictionary_string__uint__Add__);
      max_length = v8->max_length;
      if ( (int)++v9 >= max_length )
        return (System_Collections_Generic_Dictionary_string__uint__o *)v4;
    }
  }
  return (System_Collections_Generic_Dictionary_string__uint__o *)v4;
}


void MovieFileMerge__Delete(System_String_o *folder, const MethodInfo *method)
{
  System_String_o *v2; // x19
  System_String_o *FileName; // x19
  Il2CppObject *LocalDataPath; // x0
  System_String_o *v5; // x19

  v2 = folder;
  if ( (byte_4CB5225 & 1) == 0 )
  {
    sub_1C6BA08(&System_IO_Path_TypeInfo);
    sub_1C6BA08(&StringLiteral_25266/*"{0}/{1}"*/);
    folder = (System_String_o *)sub_1C6BA08(&StringLiteral_1041/*"/"*/);
    byte_4CB5225 = 1;
  }
  if ( !v2 )
    sub_1C6BC60(folder, method);
  if ( System_String__EndsWith(v2, (System_String_o *)StringLiteral_1041/*"/"*/, 0) )
    v2 = System_String__TrimEnd_64023500(v2, 0x2Fu, 0);
  if ( !System_IO_Path_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_IO_Path_TypeInfo);
  FileName = System_IO_Path__GetFileName(v2, 0);
  LocalDataPath = (Il2CppObject *)MovieFileMerge__GetLocalDataPath((const MethodInfo *)FileName);
  v5 = System_String__Format_64008100(
         (System_String_o *)StringLiteral_25266/*"{0}/{1}"*/,
         LocalDataPath,
         (Il2CppObject *)FileName,
         0);
  if ( System_IO_Directory__Exists(v5, 0) )
    System_IO_Directory__Delete(v5, 1, 0);
}


void MovieFileMerge__Delete_40722696(const MethodInfo *method)
{
  System_String_o *LocalDataPath; // x0
  _BOOL8 v2; // x0
  System_String_o *v3; // x0

  LocalDataPath = MovieFileMerge__GetLocalDataPath(method);
  v2 = System_IO_Directory__Exists(LocalDataPath, 0);
  if ( v2 )
  {
    v3 = MovieFileMerge__GetLocalDataPath((const MethodInfo *)v2);
    System_IO_Directory__Delete(v3, 1, 0);
  }
}


System_Collections_IEnumerator_o *MovieFileMerge__Download(
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

  if ( (byte_4CB5228 & 1) == 0 )
  {
    sub_1C6BA08(&MovieFileMerge__Download_d__40_TypeInfo);
    byte_4CB5228 = 1;
  }
  v7 = sub_1C6BC54(MovieFileMerge__Download_d__40_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  *(_DWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 32) = this;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v7 + 32), (int32_t)this, v8, v9);
  *(_QWORD *)(v7 + 40) = fileName;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v7 + 40), (int32_t)fileName, v10, v11);
  *(_DWORD *)(v7 + 48) = crc;
  return (System_Collections_IEnumerator_o *)v7;
}


void MovieFileMerge__DownloadCancel(MovieFileMerge_o *this, const MethodInfo *method)
{
  this->fields.isDownloadCancel = 1;
}


System_Collections_IEnumerator_o *MovieFileMerge__DownloadMovie(MovieFileMerge_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4CB5223 & 1) == 0 )
  {
    sub_1C6BA08(&MovieFileMerge__DownloadMovie_d__33_TypeInfo);
    byte_4CB5223 = 1;
  }
  v3 = sub_1C6BC54(MovieFileMerge__DownloadMovie_d__33_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v3 + 32), (int32_t)this, v4, v5);
  return (System_Collections_IEnumerator_o *)v3;
}


// local variable allocation has failed, the output may be wrong!
void MovieFileMerge__EndMergeRetryDialog(MovieFileMerge_o *this, bool isDecide, const MethodInfo *method)
{
  if ( isDecide )
    this->fields.isErrorDialog = 0;
  else
    MovieFileMerge__Reboot(this, (const MethodInfo *)isDecide);
}


// local variable allocation has failed, the output may be wrong!
void MovieFileMerge__EndRetryDialog(MovieFileMerge_o *this, bool isDecide, const MethodInfo *method)
{
  if ( isDecide )
    this->fields.isErrorDialog = 0;
  else
    MovieFileMerge__Reboot(this, (const MethodInfo *)isDecide);
}


void MovieFileMerge__EndWarningDialog(MovieFileMerge_o *this, bool isDecide, const MethodInfo *method)
{
  this->fields.isErrorDialog = 0;
}


bool MovieFileMerge__ExistCRCCheckedMovieFile(
        MovieFileMerge_o *this,
        System_String_o *assetFolderURL,
        const MethodInfo *method)
{
  System_String_o *v3; // x19
  System_String_o *FileName; // x20
  Il2CppObject *LocalDataPath; // x0
  System_String_o *v6; // x19
  System_String_o *v7; // x0
  FileMergeAndSplit_c *v8; // x8
  Il2CppObject *v9; // x21
  System_String_o *v10; // x0

  v3 = assetFolderURL;
  if ( (byte_4CB5219 & 1) == 0 )
  {
    sub_1C6BA08(&FileMergeAndSplit_TypeInfo);
    sub_1C6BA08(&System_IO_Path_TypeInfo);
    sub_1C6BA08(&StringLiteral_1041/*"/"*/);
    sub_1C6BA08(&StringLiteral_25271/*"{0}/{1}/{2}"*/);
    this = (MovieFileMerge_o *)sub_1C6BA08(&StringLiteral_25270/*"{0}/{1}/{1}.usm"*/);
    byte_4CB5219 = 1;
  }
  if ( !v3 )
    sub_1C6BC60(this, assetFolderURL);
  if ( System_String__EndsWith(v3, (System_String_o *)StringLiteral_1041/*"/"*/, 0) )
    v3 = System_String__TrimEnd_64023500(v3, 0x2Fu, 0);
  if ( !System_IO_Path_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_IO_Path_TypeInfo);
  FileName = System_IO_Path__GetFileName(v3, 0);
  LocalDataPath = (Il2CppObject *)MovieFileMerge__GetLocalDataPath((const MethodInfo *)FileName);
  v6 = System_String__Format_64008100(
         (System_String_o *)StringLiteral_25270/*"{0}/{1}/{1}.usm"*/,
         LocalDataPath,
         (Il2CppObject *)FileName,
         0);
  v7 = MovieFileMerge__GetLocalDataPath((const MethodInfo *)v6);
  v8 = FileMergeAndSplit_TypeInfo;
  v9 = (Il2CppObject *)v7;
  if ( !FileMergeAndSplit_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FileMergeAndSplit_TypeInfo);
    v8 = FileMergeAndSplit_TypeInfo;
  }
  v10 = System_String__Format_64008168(
          (System_String_o *)StringLiteral_25271/*"{0}/{1}/{2}"*/,
          v9,
          (Il2CppObject *)FileName,
          (Il2CppObject *)v8->static_fields->PathCRCFileName,
          0);
  return !System_IO_File__Exists(v10, 0) && System_IO_File__Exists(v6, 0);
}


float MovieFileMerge__GetDownloadProgress(MovieFileMerge_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_TKey__TValue__o *RequireDownLoadFilePathCRCDictionary; // x0
  float v4; // s8
  __int64 v5; // x1
  System_Collections_Generic_Dictionary_TKey__TValue__o *v6; // x0
  int32_t downloadProgress; // s8

  if ( (byte_4CB521D & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__uint__get_Count__);
    byte_4CB521D = 1;
  }
  RequireDownLoadFilePathCRCDictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.RequireDownLoadFilePathCRCDictionary;
  v4 = 0.0;
  if ( RequireDownLoadFilePathCRCDictionary
    && System_Collections_Generic_Dictionary_object__uint___get_Count(
         RequireDownLoadFilePathCRCDictionary,
         (const MethodInfo_34CD478 *)Method_System_Collections_Generic_Dictionary_string__uint__get_Count__) )
  {
    v6 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.RequireDownLoadFilePathCRCDictionary;
    if ( !v6 )
      sub_1C6BC60(0, v5);
    downloadProgress = this->fields.downloadProgress;
    return (float)downloadProgress
         / (float)System_Collections_Generic_Dictionary_object__uint___get_Count(
                    v6,
                    (const MethodInfo_34CD478 *)Method_System_Collections_Generic_Dictionary_string__uint__get_Count__);
  }
  return v4;
}


double MovieFileMerge__GetDownloadSize(MovieFileMerge_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_TKey__TValue__o *RequireDownLoadFilePathCRCDictionary; // x0

  if ( (byte_4CB521C & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__uint__get_Count__);
    byte_4CB521C = 1;
  }
  RequireDownLoadFilePathCRCDictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.RequireDownLoadFilePathCRCDictionary;
  if ( !RequireDownLoadFilePathCRCDictionary )
    sub_1C6BC60(0, method);
  return (double)(System_Collections_Generic_Dictionary_object__uint___get_Count(
                    RequireDownLoadFilePathCRCDictionary,
                    (const MethodInfo_34CD478 *)Method_System_Collections_Generic_Dictionary_string__uint__get_Count__) << 20);
}


System_String_o *MovieFileMerge__GetLocalDataPath(const MethodInfo *method)
{
  System_String_o *persistentDataPath; // x0

  if ( (byte_4CB521A & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Application_TypeInfo);
    sub_1C6BA08(&StringLiteral_1093/*"/extend-data/movie"*/);
    byte_4CB521A = 1;
  }
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
  persistentDataPath = UnityEngine_Application__get_persistentDataPath(0);
  return System_String__Concat_63966792(persistentDataPath, (System_String_o *)StringLiteral_1093/*"/extend-data/movie"*/, 0);
}


System_String_o *MovieFileMerge__GetLocalFolderPath(MovieFileMerge_o *this, const MethodInfo *method)
{
  MovieFileMerge_o *v2; // x19
  Il2CppObject *LocalDataPath; // x0

  v2 = this;
  if ( (byte_4CB5226 & 1) == 0 )
  {
    this = (MovieFileMerge_o *)sub_1C6BA08(&StringLiteral_25266/*"{0}/{1}"*/);
    byte_4CB5226 = 1;
  }
  LocalDataPath = (Il2CppObject *)MovieFileMerge__GetLocalDataPath((const MethodInfo *)this);
  return System_String__Format_64008100(
           (System_String_o *)StringLiteral_25266/*"{0}/{1}"*/,
           LocalDataPath,
           (Il2CppObject *)v2->fields.assetFolder,
           0);
}


float MovieFileMerge__GetMergeProgress(MovieFileMerge_o *this, const MethodInfo *method)
{
  struct FileMergeAndSplit_Merge_o *mergeClass; // x8

  mergeClass = this->fields.mergeClass;
  if ( mergeClass )
    return mergeClass->fields.progress;
  else
    return 0.0;
}


System_Collections_Generic_Dictionary_string__uint__o *MovieFileMerge__GetNeedDownloadDictionary(
        MovieFileMerge_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_TKey__TValue__o *v3; // x19
  __int64 v4; // x1
  System_Collections_Generic_Dictionary_TKey__TValue__o *AllDownLoadFilePathCRCDictionary; // x0
  const MethodInfo *v6; // x1
  struct System_Collections_Generic_KeyValuePair_TKey__TValue__o current; // kr00_16
  Il2CppObject *LocalFolderPath; // x1
  System_String_o *v9; // x23
  _BOOL8 v10; // x0
  __int64 v11; // x1
  System_Byte_array *AllBytes; // x24
  uint32_t v13; // w1
  System_IO_DirectoryInfo_o *Parent; // x0
  __int64 v15; // x1
  System_IO_DirectoryInfo_o *v16; // x21
  System_String_o *v17; // x0
  System_String_o *v18; // x0
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v20; // [xsp+0h] [xbp-C0h] BYREF
  int value; // [xsp+2Ch] [xbp-94h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v22; // [xsp+30h] [xbp-90h] BYREF

  if ( (byte_4CB5227 & 1) == 0 )
  {
    sub_1C6BA08(&Crc32_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__uint__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__uint__GetEnumerator__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__uint___ctor__);
    sub_1C6BA08(&System_Collections_Generic_Dictionary_string__uint__TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_Enumerator_string__uint__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_Enumerator_string__uint__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_Enumerator_string__uint__get_Current__);
    sub_1C6BA08(&Method_System_Collections_Generic_KeyValuePair_string__uint__get_Key__);
    sub_1C6BA08(&Method_System_Collections_Generic_KeyValuePair_string__uint__get_Value__);
    sub_1C6BA08(&StringLiteral_25266/*"{0}/{1}"*/);
    byte_4CB5227 = 1;
  }
  memset(&v22, 0, sizeof(v22));
  value = 0;
  v3 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1C6BC54(System_Collections_Generic_Dictionary_string__uint__TypeInfo);
  System_Collections_Generic_Dictionary_object__uint____ctor(
    v3,
    (const MethodInfo_34CCDF4 *)Method_System_Collections_Generic_Dictionary_string__uint___ctor__);
  AllDownLoadFilePathCRCDictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.AllDownLoadFilePathCRCDictionary;
  if ( !AllDownLoadFilePathCRCDictionary )
    sub_1C6BC60(0, v4);
  System_Collections_Generic_Dictionary_object__uint___GetEnumerator(
    &v20,
    AllDownLoadFilePathCRCDictionary,
    (const MethodInfo_34CDB98 *)Method_System_Collections_Generic_Dictionary_string__uint__GetEnumerator__);
  v22 = v20;
  while ( System_Collections_Generic_Dictionary_Enumerator_object__uint___MoveNext(
            &v22,
            (const MethodInfo_35BCB54 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__uint__MoveNext__) )
  {
    current = v22.fields._current;
    LocalFolderPath = (Il2CppObject *)MovieFileMerge__GetLocalFolderPath(this, v6);
    v9 = System_String__Format_64008100((System_String_o *)StringLiteral_25266/*"{0}/{1}"*/, LocalFolderPath, current.fields.key, 0);
    v10 = System_IO_File__Exists(v9, 0);
    if ( !v10 )
      goto LABEL_11;
    AllBytes = System_IO_File__ReadAllBytes(v9, 0);
    value = (int)current.fields.value;
    if ( !Crc32_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
    v13 = Crc32__Compute(AllBytes, 0);
    if ( !System_UInt32__Equals_65601764((uint32_t)&value, v13, 0) )
    {
      System_IO_File__Delete(v9, 0);
LABEL_11:
      if ( !v3 )
        sub_1C6BC60(v10, v11);
      System_Collections_Generic_Dictionary_object__uint___Add(
        v3,
        current.fields.key,
        (uint32_t)current.fields.value,
        (const MethodInfo_34CD7A8 *)Method_System_Collections_Generic_Dictionary_string__uint__Add__);
      Parent = System_IO_Directory__GetParent(v9, 0);
      v16 = Parent;
      if ( !Parent )
        sub_1C6BC60(0, v15);
      v17 = (System_String_o *)((__int64 (__fastcall *)(System_IO_DirectoryInfo_o *, const MethodInfo *))Parent->klass->vtable._8_get_FullName.methodPtr)(
                                 Parent,
                                 Parent->klass->vtable._8_get_FullName.method);
      if ( !System_IO_Directory__Exists(v17, 0) )
      {
        v18 = (System_String_o *)((__int64 (__fastcall *)(System_IO_DirectoryInfo_o *, const MethodInfo *))v16->klass->vtable._8_get_FullName.methodPtr)(
                                   v16,
                                   v16->klass->vtable._8_get_FullName.method);
        System_IO_Directory__CreateDirectory(v18, 0);
      }
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_object__uint___Dispose(
    &v22,
    (const MethodInfo_35BCC78 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__uint__Dispose__);
  return (System_Collections_Generic_Dictionary_string__uint__o *)v3;
}


System_Collections_Generic_List_string__o *MovieFileMerge__GetSplitFileList(
        MovieFileMerge_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  const MethodInfo *v4; // x1
  System_String_o *LocalFolderPath; // x0
  __int64 v6; // x1
  System_Collections_Generic_Dictionary_TKey__TValue__o *AllDownLoadFilePathCRCDictionary; // x0
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x0
  const MethodInfo *v9; // x1
  Il2CppObject *current; // x21
  Il2CppObject *v11; // x1
  Il2CppObject *v12; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  Il2CppObject *v15; // x1
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  Il2CppClass **v19; // x0
  System_Collections_Generic_List_Enumerator_object__o v21; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4CB522A & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__uint__get_Keys__);
    sub_1C6BA08(&Method_System_Linq_Enumerable_ToList_string___);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_string__GetEnumerator__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C6BA08(&StringLiteral_25266/*"{0}/{1}"*/);
    byte_4CB522A = 1;
  }
  memset(&v21, 0, sizeof(v21));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_string___ctor__);
  LocalFolderPath = MovieFileMerge__GetLocalFolderPath(this, v4);
  if ( System_IO_Directory__Exists(LocalFolderPath, 0) )
  {
    AllDownLoadFilePathCRCDictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.AllDownLoadFilePathCRCDictionary;
    if ( !AllDownLoadFilePathCRCDictionary
      || (Keys = System_Collections_Generic_Dictionary_object__uint___get_Keys(
                   AllDownLoadFilePathCRCDictionary,
                   (const MethodInfo_34CD488 *)Method_System_Collections_Generic_Dictionary_string__uint__get_Keys__),
          (AllDownLoadFilePathCRCDictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)System_Linq_Enumerable__ToList_object_((System_Collections_Generic_IEnumerable_TSource__o *)Keys, (const MethodInfo_317FEE4 *)Method_System_Linq_Enumerable_ToList_string___)) == 0) )
    {
      sub_1C6BC60(AllDownLoadFilePathCRCDictionary, v6);
    }
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v21,
      (System_Collections_Generic_List_object__o *)AllDownLoadFilePathCRCDictionary,
      (const MethodInfo_380146C *)Method_System_Collections_Generic_List_string__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v21,
              (const MethodInfo_3586524 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
    {
      current = v21.fields._current;
      v11 = (Il2CppObject *)MovieFileMerge__GetLocalFolderPath(this, v9);
      v12 = (Il2CppObject *)System_String__Format_64008100((System_String_o *)StringLiteral_25266/*"{0}/{1}"*/, v11, current, 0);
      v15 = v12;
      if ( !v3 )
        sub_1C6BC60(v12, v12);
      items = v3->fields._items;
      v17 = Method_System_Collections_Generic_List_string__Add__;
      ++v3->fields._version;
      if ( !items )
        sub_1C6BC60(v12, v12);
      size = v3->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          v12,
          *(const MethodInfo_3800974 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
      }
      else
      {
        v19 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v19[4] = (Il2CppClass *)v15;
        sub_1C6B9AC((CGThumbnailListItem_o *)(v19 + 4), (int32_t)v15, v13, v14);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v21,
      (const MethodInfo_3586520 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
  }
  return (System_Collections_Generic_List_string__o *)v3;
}


double MovieFileMerge__GetTotalRequireSize(MovieFileMerge_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__uint__o *AllDownLoadFilePathCRCDictionary; // x0
  System_Collections_Generic_Dictionary_TKey__TValue__o *RequireDownLoadFilePathCRCDictionary; // x8

  if ( (byte_4CB521B & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__uint__get_Count__);
    byte_4CB521B = 1;
  }
  AllDownLoadFilePathCRCDictionary = this->fields.AllDownLoadFilePathCRCDictionary;
  if ( !AllDownLoadFilePathCRCDictionary
    || (AllDownLoadFilePathCRCDictionary = (struct System_Collections_Generic_Dictionary_string__uint__o *)System_Collections_Generic_Dictionary_object__uint___get_Count((System_Collections_Generic_Dictionary_TKey__TValue__o *)AllDownLoadFilePathCRCDictionary, (const MethodInfo_34CD478 *)Method_System_Collections_Generic_Dictionary_string__uint__get_Count__),
        (RequireDownLoadFilePathCRCDictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.RequireDownLoadFilePathCRCDictionary) == 0) )
  {
    sub_1C6BC60(AllDownLoadFilePathCRCDictionary, method);
  }
  return (double)((System_Collections_Generic_Dictionary_object__uint___get_Count(
                     RequireDownLoadFilePathCRCDictionary,
                     (const MethodInfo_34CD478 *)Method_System_Collections_Generic_Dictionary_string__uint__get_Count__)
                 + (int)AllDownLoadFilePathCRCDictionary) << 20);
}


void MovieFileMerge__Initialize(MovieFileMerge_o *this, System_String_o *assetFolderURL, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_TKey__TValue__o *AllDownLoadFilePathCRCDictionary; // x0
  System_Collections_Generic_Dictionary_TKey__TValue__o *v6; // x22
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  System_Collections_Generic_Dictionary_TKey__TValue__o *RequireDownLoadFilePathCRCDictionary; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  System_Collections_Generic_Dictionary_TKey__TValue__o *v12; // x22
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  __int64 v17; // x0
  __int64 v18; // x1
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  struct System_String_o *FileName; // x0
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  const MethodInfo *v24; // x1
  Il2CppObject *LocalFolderPath; // x0
  struct System_String_o *v26; // x0
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  const MethodInfo *v29; // x1
  Il2CppObject *v30; // x0
  struct System_String_o *v31; // x0
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  const MethodInfo *v34; // x1
  System_String_o *v35; // x0
  FileMergeAndSplit_c *v36; // x8
  Il2CppObject *v37; // x20
  struct System_String_o *v38; // x0
  int32_t v39; // w2
  const MethodInfo *v40; // x3

  if ( (byte_4CB5221 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__uint__Clear__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__uint___ctor__);
    sub_1C6BA08(&System_Collections_Generic_Dictionary_string__uint__TypeInfo);
    sub_1C6BA08(&FileMergeAndSplit_TypeInfo);
    sub_1C6BA08(&System_IO_Path_TypeInfo);
    sub_1C6BA08(&StringLiteral_25266/*"{0}/{1}"*/);
    sub_1C6BA08(&StringLiteral_25262/*"{0}/SplitFile"*/);
    sub_1C6BA08(&StringLiteral_1041/*"/"*/);
    sub_1C6BA08(&StringLiteral_25268/*"{0}/{1}.usm"*/);
    byte_4CB5221 = 1;
  }
  AllDownLoadFilePathCRCDictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.AllDownLoadFilePathCRCDictionary;
  if ( AllDownLoadFilePathCRCDictionary )
  {
    System_Collections_Generic_Dictionary_object__uint___Clear(
      AllDownLoadFilePathCRCDictionary,
      (const MethodInfo_34CD930 *)Method_System_Collections_Generic_Dictionary_string__uint__Clear__);
  }
  else
  {
    v6 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1C6BC54(System_Collections_Generic_Dictionary_string__uint__TypeInfo);
    System_Collections_Generic_Dictionary_object__uint____ctor(
      v6,
      (const MethodInfo_34CCDF4 *)Method_System_Collections_Generic_Dictionary_string__uint___ctor__);
    this->fields.AllDownLoadFilePathCRCDictionary = (struct System_Collections_Generic_Dictionary_string__uint__o *)v6;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.AllDownLoadFilePathCRCDictionary, (int32_t)v6, v7, v8);
  }
  RequireDownLoadFilePathCRCDictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.RequireDownLoadFilePathCRCDictionary;
  if ( RequireDownLoadFilePathCRCDictionary )
  {
    System_Collections_Generic_Dictionary_object__uint___Clear(
      RequireDownLoadFilePathCRCDictionary,
      (const MethodInfo_34CD930 *)Method_System_Collections_Generic_Dictionary_string__uint__Clear__);
  }
  else
  {
    v12 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1C6BC54(System_Collections_Generic_Dictionary_string__uint__TypeInfo);
    System_Collections_Generic_Dictionary_object__uint____ctor(
      v12,
      (const MethodInfo_34CCDF4 *)Method_System_Collections_Generic_Dictionary_string__uint___ctor__);
    this->fields.RequireDownLoadFilePathCRCDictionary = (struct System_Collections_Generic_Dictionary_string__uint__o *)v12;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.RequireDownLoadFilePathCRCDictionary, (int32_t)v12, v13, v14);
  }
  this->fields.downloadProgress = 0;
  this->fields.isDownloadCancel = 0;
  this->fields.mergeClass = 0;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.mergeClass, 0, v10, v11);
  this->fields.crcCheckerClass = 0;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.crcCheckerClass, 0, v15, v16);
  if ( !assetFolderURL )
    sub_1C6BC60(v17, v18);
  if ( System_String__EndsWith(assetFolderURL, (System_String_o *)StringLiteral_1041/*"/"*/, 0) )
    assetFolderURL = System_String__TrimEnd_64023500(assetFolderURL, 0x2Fu, 0);
  this->fields.assetFolderURL = assetFolderURL;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.assetFolderURL, (int32_t)assetFolderURL, v19, v20);
  if ( !System_IO_Path_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_IO_Path_TypeInfo);
  FileName = System_IO_Path__GetFileName(assetFolderURL, 0);
  this->fields.assetFolder = FileName;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.assetFolder, (int32_t)FileName, v22, v23);
  LocalFolderPath = (Il2CppObject *)MovieFileMerge__GetLocalFolderPath(this, v24);
  v26 = System_String__Format((System_String_o *)StringLiteral_25262/*"{0}/SplitFile"*/, LocalFolderPath, 0);
  this->fields.outputSplitFileFolder = v26;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.outputSplitFileFolder, (int32_t)v26, v27, v28);
  v30 = (Il2CppObject *)MovieFileMerge__GetLocalFolderPath(this, v29);
  v31 = System_String__Format_64008100(
          (System_String_o *)StringLiteral_25268/*"{0}/{1}.usm"*/,
          v30,
          (Il2CppObject *)this->fields.assetFolder,
          0);
  this->fields.outputMergeFile = v31;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.outputMergeFile, (int32_t)v31, v32, v33);
  v35 = MovieFileMerge__GetLocalFolderPath(this, v34);
  v36 = FileMergeAndSplit_TypeInfo;
  v37 = (Il2CppObject *)v35;
  if ( !FileMergeAndSplit_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FileMergeAndSplit_TypeInfo);
    v36 = FileMergeAndSplit_TypeInfo;
  }
  v38 = System_String__Format_64008100(
          (System_String_o *)StringLiteral_25266/*"{0}/{1}"*/,
          v37,
          (Il2CppObject *)v36->static_fields->PathCRCFileName,
          0);
  this->fields.outputMergeFileCRC = v38;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.outputMergeFileCRC, (int32_t)v38, v39, v40);
}


bool MovieFileMerge__IsCRCCheckEnd(MovieFileMerge_o *this, const MethodInfo *method)
{
  struct FileMergeAndSplit_CRCChecker_o *crcCheckerClass; // x8

  crcCheckerClass = this->fields.crcCheckerClass;
  return crcCheckerClass && crcCheckerClass->fields.isCRCCheckEnd;
}


bool MovieFileMerge__IsCRCMatch(MovieFileMerge_o *this, const MethodInfo *method)
{
  struct FileMergeAndSplit_CRCChecker_o *crcCheckerClass; // x8

  crcCheckerClass = this->fields.crcCheckerClass;
  return crcCheckerClass && crcCheckerClass->fields.isCRCMatch;
}


bool MovieFileMerge__IsDownload(MovieFileMerge_o *this, const MethodInfo *method)
{
  return this->fields.isDownloading;
}


bool MovieFileMerge__IsDownloadCancel(MovieFileMerge_o *this, const MethodInfo *method)
{
  return this->fields.isDownloadCancel;
}


bool MovieFileMerge__IsMerge(MovieFileMerge_o *this, const MethodInfo *method)
{
  struct FileMergeAndSplit_Merge_o *mergeClass; // x8

  mergeClass = this->fields.mergeClass;
  return mergeClass && mergeClass->fields.isMerge;
}


bool MovieFileMerge__IsMergeError(MovieFileMerge_o *this, const MethodInfo *method)
{
  struct FileMergeAndSplit_Merge_o *mergeClass; // x8

  mergeClass = this->fields.mergeClass;
  return mergeClass && mergeClass->fields.isError;
}


System_Collections_IEnumerator_o *MovieFileMerge__Merge(MovieFileMerge_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4CB5224 & 1) == 0 )
  {
    sub_1C6BA08(&MovieFileMerge__Merge_d__34_TypeInfo);
    byte_4CB5224 = 1;
  }
  v3 = sub_1C6BC54(MovieFileMerge__Merge_d__34_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v3 + 32), (int32_t)this, v4, v5);
  return (System_Collections_IEnumerator_o *)v3;
}


System_Collections_IEnumerator_o *MovieFileMerge__PlayCRIMovie(
        MovieFileMerge_o *this,
        System_String_o *filePath,
        const MethodInfo *method)
{
  __int64 v4; // x20
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_4CB5220 & 1) == 0 )
  {
    sub_1C6BA08(&MovieFileMerge__PlayCRIMovie_d__30_TypeInfo);
    byte_4CB5220 = 1;
  }
  v4 = sub_1C6BC54(MovieFileMerge__PlayCRIMovie_d__30_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0);
  *(_DWORD *)(v4 + 16) = 0;
  *(_QWORD *)(v4 + 32) = filePath;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v4 + 32), (int32_t)filePath, v5, v6);
  return (System_Collections_IEnumerator_o *)v4;
}


System_Collections_IEnumerator_o *MovieFileMerge__PlayMP4(MovieFileMerge_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4CB521E & 1) == 0 )
  {
    sub_1C6BA08(&MovieFileMerge__PlayMP4_d__28_TypeInfo);
    byte_4CB521E = 1;
  }
  v3 = sub_1C6BC54(MovieFileMerge__PlayMP4_d__28_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v3 + 32), (int32_t)this, v4, v5);
  return (System_Collections_IEnumerator_o *)v3;
}


System_Collections_IEnumerator_o *MovieFileMerge__PlayMP4_40720880(
        MovieFileMerge_o *this,
        System_String_o *filePath,
        const MethodInfo *method)
{
  __int64 v5; // x21
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4CB521F & 1) == 0 )
  {
    sub_1C6BA08(&MovieFileMerge__PlayMP4_d__29_TypeInfo);
    byte_4CB521F = 1;
  }
  v5 = sub_1C6BC54(MovieFileMerge__PlayMP4_d__29_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 40) = this;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v5 + 40), (int32_t)this, v6, v7);
  *(_QWORD *)(v5 + 32) = filePath;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v5 + 32), (int32_t)filePath, v8, v9);
  return (System_Collections_IEnumerator_o *)v5;
}


void MovieFileMerge__Reboot(MovieFileMerge_o *this, const MethodInfo *method)
{
  UnityEngine_Networking_UnityWebRequest_o *v3; // x0
  CGThumbnailListItem_o *p_loader; // x19
  struct UnityEngine_Networking_UnityWebRequest_o *loader; // t1
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  ManagementManager_c *v8; // x0
  Il2CppObject *Instance; // x0
  __int64 v10; // x1

  if ( (byte_4CB522C & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Application_TypeInfo);
    sub_1C6BA08(&ManagementManager_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
    byte_4CB522C = 1;
  }
  loader = this->fields.loader;
  p_loader = (CGThumbnailListItem_o *)&this->fields.loader;
  v3 = loader;
  if ( loader )
  {
    UnityEngine_Networking_UnityWebRequest__Dispose(v3, 0);
    p_loader->klass = 0;
    sub_1C6B9AC(p_loader, 0, v6, v7);
  }
  if ( !ManagementManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
  if ( !byte_4CB5247 )
  {
    sub_1C6BA08(&ManagementManager_TypeInfo);
    byte_4CB5247 = 1;
  }
  v8 = ManagementManager_TypeInfo;
  if ( !ManagementManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
    v8 = ManagementManager_TypeInfo;
  }
  if ( v8->static_fields->isDuringStartup )
  {
    if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
    UnityEngine_Application__Quit_71452840(0);
  }
  else
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
    if ( !Instance )
      sub_1C6BC60(0, v10);
    ManagementManager__reboot((ManagementManager_o *)Instance, 0, 1, 0);
  }
}


void MovieFileMerge___Merge_b__34_0(MovieFileMerge_o *this, System_Exception_o *e, const MethodInfo *method)
{
  Il2CppObject *v4; // x19
  Il2CppObject *Instance; // x20
  System_String_o *v6; // x21
  ErrorDialog_ClickDelegate_o *v7; // x22
  const MethodInfo *v8; // x2
  System_String_o *v9; // x1

  v4 = (Il2CppObject *)this;
  if ( (byte_4CB522E & 1) == 0 )
  {
    sub_1C6BA08(&ErrorDialog_ClickDelegate_TypeInfo);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&Method_MovieFileMerge_EndMergeRetryDialog__);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C6BA08(&StringLiteral_5280/*"Disk full"*/);
    sub_1C6BA08(&StringLiteral_9248/*"NETWORK_ERROR_DISK_FULL"*/);
    this = (MovieFileMerge_o *)sub_1C6BA08(&StringLiteral_1/*""*/);
    byte_4CB522E = 1;
  }
  if ( !e )
    goto LABEL_12;
  this = (MovieFileMerge_o *)((__int64 (__fastcall *)(System_Exception_o *, const MethodInfo *, const MethodInfo *))e->klass->vtable._5_get_Message.methodPtr)(
                               e,
                               e->klass->vtable._5_get_Message.method,
                               method);
  if ( !this )
    goto LABEL_12;
  if ( !System_String__StartsWith((System_String_o *)this, (System_String_o *)StringLiteral_5280/*"Disk full"*/, 0) )
  {
    v9 = (System_String_o *)((__int64 (__fastcall *)(System_Exception_o *, const MethodInfo *))e->klass->vtable._5_get_Message.methodPtr)(
                              e,
                              e->klass->vtable._5_get_Message.method);
    goto LABEL_11;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v6 = LocalizationManager__Get((System_String_o *)StringLiteral_9248/*"NETWORK_ERROR_DISK_FULL"*/, 0);
  v7 = (ErrorDialog_ClickDelegate_o *)sub_1C6BC54(ErrorDialog_ClickDelegate_TypeInfo);
  ErrorDialog_ClickDelegate___ctor(v7, v4, Method_MovieFileMerge_EndMergeRetryDialog__, 0);
  if ( !Instance )
LABEL_12:
    sub_1C6BC60(this, e);
  CommonUI__OpenErrorDialog((CommonUI_o *)Instance, (System_String_o *)StringLiteral_1/*""*/, v6, v7, 1, 0);
  v9 = (System_String_o *)StringLiteral_5280/*"Disk full"*/;
LABEL_11:
  MovieFileMerge__AssetLoadLogError((MovieFileMerge_o *)v4, v9, v8);
}


void MovieFileMerge__CRCDownloadAndCheck_d__32___ctor(
        MovieFileMerge__CRCDownloadAndCheck_d__32_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool MovieFileMerge__CRCDownloadAndCheck_d__32__MoveNext(
        MovieFileMerge__CRCDownloadAndCheck_d__32_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  const MethodInfo *v3; // x3
  MovieFileMerge__CRCDownloadAndCheck_d__32_o *v4; // x19
  int32_t _1__state; // w8
  struct MovieFileMerge_o *_4__this; // x20
  System_Collections_IEnumerator_o *v7; // x0
  CGThumbnailListItem_o *p__2__current; // x19
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  bool result; // w0
  System_Collections_Generic_Dictionary_string__uint__o *NeedDownloadDictionary; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  struct FileMergeAndSplit_CRCChecker_o *crcCheckerClass; // x8
  System_Collections_Generic_Dictionary_string__uint__o *Dic; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  System_String_o *outputMergeFile; // x21
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x0
  System_Collections_Generic_List_uint__o *v21; // x22
  FileMergeAndSplit_CRCChecker_o *v22; // x23
  const MethodInfo *v23; // x3
  CGThumbnailListItem_o *p_crcCheckerClass; // x20
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  System_Collections_IEnumerator_o *v27; // x0
  CGThumbnailListItem_o *v28; // x19
  int32_t v29; // w2
  const MethodInfo *v30; // x3

  v4 = this;
  if ( (byte_4CB522F & 1) == 0 )
  {
    sub_1C6BA08(&FileMergeAndSplit_CRCChecker_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__uint__get_Values__);
    sub_1C6BA08(&Method_System_Linq_Enumerable_ToList_uint___);
    this = (MovieFileMerge__CRCDownloadAndCheck_d__32_o *)sub_1C6BA08(&FileMergeAndSplit_TypeInfo);
    byte_4CB522F = 1;
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
    sub_1C6B9AC(
      (CGThumbnailListItem_o *)&_4__this->fields.RequireDownLoadFilePathCRCDictionary,
      (int32_t)NeedDownloadDictionary,
      v13,
      v14);
    crcCheckerClass = _4__this->fields.crcCheckerClass;
    if ( crcCheckerClass && crcCheckerClass->fields.isCRCMatch )
    {
      if ( System_IO_Directory__Exists(_4__this->fields.outputSplitFileFolder, 0) )
        System_IO_Directory__Delete(_4__this->fields.outputSplitFileFolder, 1, 0);
      if ( System_IO_File__Exists(_4__this->fields.outputMergeFileCRC, 0) )
        System_IO_File__Delete(_4__this->fields.outputMergeFileCRC, 0);
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
        v7 = MovieFileMerge__Download(_4__this, FileMergeAndSplit_TypeInfo->static_fields->PathCRCFileName, 0, v3);
        v4->fields.__2__current = (Il2CppObject *)v7;
        p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
        sub_1C6B9AC(p__2__current, (int32_t)v7, v9, v10);
        result = 1;
        LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
        return result;
      }
LABEL_22:
      sub_1C6BC60(this, method);
    }
    return 0;
  }
  v4->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_22;
  Dic = MovieFileMerge__CreateDic((MovieFileMerge_o *)this, _4__this->fields.outputMergeFileCRC, v2);
  _4__this->fields.AllDownLoadFilePathCRCDictionary = Dic;
  sub_1C6B9AC((CGThumbnailListItem_o *)&_4__this->fields.AllDownLoadFilePathCRCDictionary, (int32_t)Dic, v17, v18);
  this = (MovieFileMerge__CRCDownloadAndCheck_d__32_o *)_4__this->fields.AllDownLoadFilePathCRCDictionary;
  if ( !this )
    goto LABEL_22;
  outputMergeFile = _4__this->fields.outputMergeFile;
  Values = System_Collections_Generic_Dictionary_object__uint___get_Values(
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)this,
             (const MethodInfo_34CD5D8 *)Method_System_Collections_Generic_Dictionary_string__uint__get_Values__);
  v21 = (System_Collections_Generic_List_uint__o *)System_Linq_Enumerable__ToList_uint_(
                                                     (System_Collections_Generic_IEnumerable_TSource__o *)Values,
                                                     (const MethodInfo_3180058 *)Method_System_Linq_Enumerable_ToList_uint___);
  v22 = (FileMergeAndSplit_CRCChecker_o *)sub_1C6BC54(FileMergeAndSplit_CRCChecker_TypeInfo);
  FileMergeAndSplit_CRCChecker___ctor(v22, outputMergeFile, v21, v23);
  _4__this->fields.crcCheckerClass = v22;
  p_crcCheckerClass = (CGThumbnailListItem_o *)&_4__this->fields.crcCheckerClass;
  sub_1C6B9AC(p_crcCheckerClass, (int32_t)v22, v25, v26);
  this = (MovieFileMerge__CRCDownloadAndCheck_d__32_o *)p_crcCheckerClass->klass;
  if ( !p_crcCheckerClass->klass )
    goto LABEL_22;
  v27 = FileMergeAndSplit_CRCChecker__Run((FileMergeAndSplit_CRCChecker_o *)this, method);
  v4->fields.__2__current = (Il2CppObject *)v27;
  v28 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
  sub_1C6B9AC(v28, (int32_t)v27, v29, v30);
  LODWORD(v28[-1].fields._ThumbnailSpritePath_k__BackingField) = 2;
  return 1;
}


Il2CppObject *MovieFileMerge__CRCDownloadAndCheck_d__32__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        MovieFileMerge__CRCDownloadAndCheck_d__32_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn MovieFileMerge__CRCDownloadAndCheck_d__32__System_Collections_IEnumerator_Reset(
        MovieFileMerge__CRCDownloadAndCheck_d__32_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C6BA1C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C6BC54(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C6BA1C(&Method_MovieFileMerge__CRCDownloadAndCheck_d__32_System_Collections_IEnumerator_Reset__);
  sub_1C6BB30(v3, v4);
}


Il2CppObject *MovieFileMerge__CRCDownloadAndCheck_d__32__System_Collections_IEnumerator_get_Current(
        MovieFileMerge__CRCDownloadAndCheck_d__32_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void MovieFileMerge__CRCDownloadAndCheck_d__32__System_IDisposable_Dispose(
        MovieFileMerge__CRCDownloadAndCheck_d__32_o *this,
        const MethodInfo *method)
{
  ;
}


void MovieFileMerge__DownloadMovie_d__33___ctor(
        MovieFileMerge__DownloadMovie_d__33_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool MovieFileMerge__DownloadMovie_d__33__MoveNext(
        MovieFileMerge__DownloadMovie_d__33_o *this,
        const MethodInfo *method)
{
  MovieFileMerge__DownloadMovie_d__33_o *v2; // x20
  int32_t _1__state; // w8
  MovieFileMerge_o *_4__this; // x19
  System_Collections_Generic_Dictionary_TKey__TValue__o *RequireDownLoadFilePathCRCDictionary; // x0
  MovieFileMerge__DownloadMovie_d__33_o *v6; // x9
  __int128 v7; // q0
  struct System_Collections_Generic_KeyValuePair_TKey__TValue__o current; // q1
  struct System_Collections_Generic_Dictionary_Enumerator_string__uint__o *p__7__wrap1; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  _BOOL8 v12; // x0
  const MethodInfo *v13; // x1
  const MethodInfo *v14; // x3
  MovieFileMerge__DownloadMovie_d__33_o *v15; // x8
  bool result; // w0
  __int64 v17; // x0
  __int64 v18; // x1
  MovieFileMerge__DownloadMovie_d__33_o *v19; // x8
  Il2CppObject *v20; // x1
  MovieFileMerge__DownloadMovie_d__33_o *v21; // x0
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v24[2]; // [xsp+8h] [xbp-88h] BYREF
  MovieFileMerge__DownloadMovie_d__33_o **v25; // [xsp+68h] [xbp-28h]
  MovieFileMerge__DownloadMovie_d__33_o *v26; // [xsp+78h] [xbp-18h] BYREF

  v26 = this;
  v2 = this;
  if ( (byte_4CB5231 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__uint__GetEnumerator__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_Enumerator_string__uint__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_Enumerator_string__uint__get_Current__);
    sub_1C6BA08(&Method_System_Collections_Generic_KeyValuePair_string__uint__get_Key__);
    this = (MovieFileMerge__DownloadMovie_d__33_o *)sub_1C6BA08(&Method_System_Collections_Generic_KeyValuePair_string__uint__get_Value__);
    byte_4CB5231 = 1;
  }
  v25 = &v26;
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state != 1 )
  {
    if ( _1__state )
      return 0;
    v2->fields.__1__state = -1;
    if ( !_4__this )
      sub_1C6BC60(this, method);
    RequireDownLoadFilePathCRCDictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)_4__this->fields.RequireDownLoadFilePathCRCDictionary;
    _4__this->fields.isDownloading = 1;
    _4__this->fields.downloadProgress = 0;
    if ( !RequireDownLoadFilePathCRCDictionary )
      sub_1C6BC60(0, method);
    System_Collections_Generic_Dictionary_object__uint___GetEnumerator(
      v24,
      RequireDownLoadFilePathCRCDictionary,
      (const MethodInfo_34CDB98 *)Method_System_Collections_Generic_Dictionary_string__uint__GetEnumerator__);
    v6 = v26;
    v7 = *(_OWORD *)&v24[0].fields._dictionary;
    current = v24[0].fields._current;
    p__7__wrap1 = &v26->fields.__7__wrap1;
    v24[1] = v24[0];
    *(_QWORD *)&v26->fields.__7__wrap1.fields._getEnumeratorRetType = *(_QWORD *)&v24[0].fields._getEnumeratorRetType;
    v6->fields.__7__wrap1.fields._current = current;
    *(_OWORD *)&v6->fields.__7__wrap1.fields._dictionary = v7;
    sub_1C6B9AC((CGThumbnailListItem_o *)p__7__wrap1, 0, v10, v11);
    v2 = v26;
  }
  v2->fields.__1__state = -3;
  v12 = System_Collections_Generic_Dictionary_Enumerator_object__uint___MoveNext(
          (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v2->fields.__7__wrap1,
          (const MethodInfo_35BCB54 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__uint__MoveNext__);
  v15 = v26;
  if ( v12 )
  {
    if ( !_4__this )
      sub_1C6BC60(v12, v13);
    if ( _4__this->fields.isDownloadCancel )
    {
      _4__this->fields.isDownloading = 0;
      MovieFileMerge__DownloadMovie_d__33____m__Finally1(v15, v13);
      return 0;
    }
    else
    {
      v20 = (Il2CppObject *)MovieFileMerge__Download(
                              _4__this,
                              (System_String_o *)v26->fields.__7__wrap1.fields._current.fields.key,
                              (uint32_t)v26->fields.__7__wrap1.fields._current.fields.value,
                              v14);
      v21 = v26;
      v26->fields.__2__current = v20;
      sub_1C6B9AC((CGThumbnailListItem_o *)&v21->fields.__2__current, (int32_t)v20, v22, v23);
      result = 1;
      v26->fields.__1__state = 1;
    }
  }
  else
  {
    MovieFileMerge__DownloadMovie_d__33____m__Finally1(v26, v13);
    v19 = v26;
    *(_QWORD *)&v26->fields.__7__wrap1.fields._getEnumeratorRetType = 0;
    v19->fields.__7__wrap1.fields._current = 0u;
    *(_OWORD *)&v19->fields.__7__wrap1.fields._dictionary = 0u;
    if ( !_4__this )
      sub_1C6BC60(v17, v18);
    result = 0;
    _4__this->fields.isDownloading = 0;
  }
  return result;
}


Il2CppObject *MovieFileMerge__DownloadMovie_d__33__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        MovieFileMerge__DownloadMovie_d__33_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn MovieFileMerge__DownloadMovie_d__33__System_Collections_IEnumerator_Reset(
        MovieFileMerge__DownloadMovie_d__33_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C6BA1C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C6BC54(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C6BA1C(&Method_MovieFileMerge__DownloadMovie_d__33_System_Collections_IEnumerator_Reset__);
  sub_1C6BB30(v3, v4);
}


Il2CppObject *MovieFileMerge__DownloadMovie_d__33__System_Collections_IEnumerator_get_Current(
        MovieFileMerge__DownloadMovie_d__33_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void MovieFileMerge__DownloadMovie_d__33__System_IDisposable_Dispose(
        MovieFileMerge__DownloadMovie_d__33_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8

  _1__state = this->fields.__1__state;
  if ( _1__state == 1 || _1__state == -3 )
    MovieFileMerge__DownloadMovie_d__33____m__Finally1(this, method);
}


void MovieFileMerge__DownloadMovie_d__33____m__Finally1(
        MovieFileMerge__DownloadMovie_d__33_o *this,
        const MethodInfo *method)
{
  if ( (byte_4CB5232 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_Enumerator_string__uint__Dispose__);
    byte_4CB5232 = 1;
  }
  this->fields.__1__state = -1;
  System_Collections_Generic_Dictionary_Enumerator_object__uint___Dispose(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&this->fields.__7__wrap1,
    (const MethodInfo_35BCC78 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__uint__Dispose__);
}


void MovieFileMerge__Download_d__40___ctor(
        MovieFileMerge__Download_d__40_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool MovieFileMerge__Download_d__40__MoveNext(MovieFileMerge__Download_d__40_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  const MethodInfo *v3; // x3
  MovieFileMerge__Download_d__40_o *v4; // x19
  struct MovieFileMerge_o *_4__this; // x20
  System_String_o *v6; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x1
  Il2CppObject *LocalFolderPath; // x0
  System_String_o *v11; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  uint32_t downloadingCRC; // w8
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  MovieFileMerge__Download_d__40_o *v19; // x21
  int32_t v20; // w1
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  struct System_String_o *v23; // x1
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  int32_t v26; // w1
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  int32_t v31; // w1
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  int32_t v36; // w1
  System_String_o *v37; // x0
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  const MethodInfo *v40; // x2
  ManagementManager_c *v41; // x0
  _BOOL4 isDuringStartup; // w22
  Il2CppObject *Instance; // x21
  System_String_o *v44; // x22
  ErrorDialog_ClickDelegate_o *v45; // x23
  System_Byte_array *readData_5__5; // x20
  uint32_t v47; // w0
  Il2CppObject **p__2__current; // x19
  int32_t v49; // w2
  const MethodInfo *v50; // x3
  int v51; // w8
  UnityEngine_WaitForEndOfFrame_o *v52; // x20
  int32_t v53; // w2
  const MethodInfo *v54; // x3
  float unscaledTime; // s8
  UnityEngine_WaitForEndOfFrame_o *v56; // x21
  int32_t v57; // w2
  const MethodInfo *v58; // x3
  MovieFileMerge__Download_d__40_o **p_loader; // x22
  int32_t v60; // w2
  const MethodInfo *v61; // x3
  struct System_String_o **p_errorCode_5__11; // x21
  int32_t v63; // w2
  const MethodInfo *v64; // x3
  System_String_o *error; // x0
  System_Byte_array *data; // x0
  int32_t v67; // w2
  const MethodInfo *v68; // x3
  int32_t v69; // w2
  const MethodInfo *v70; // x3
  UnityEngine_WaitForEndOfFrame_o *v71; // x20
  int32_t v72; // w2
  const MethodInfo *v73; // x3
  int32_t v74; // w2
  const MethodInfo *v75; // x3
  System_String_o *v76; // x0
  int32_t v77; // w2
  const MethodInfo *v78; // x3
  int32_t v79; // w1
  System_IO_DirectoryInfo_o *Parent; // x0
  __int64 v81; // x1
  System_IO_DirectoryInfo_o *v82; // x21
  const MethodInfo *v83; // x1
  System_String_o *v84; // x0
  System_String_o *v85; // x21
  int64_t FreeSize; // x21
  ManagerConfig_c *v87; // x0
  ManagerConfig_c *v88; // x0
  Il2CppObject *v89; // x0
  System_String_o *errorCode_5__11; // x21
  CommonUI_o *v91; // x22
  ErrorDialog_ClickDelegate_o *v92; // x23
  UnityEngine_WaitForEndOfFrame_o *v93; // x20
  int32_t v94; // w2
  const MethodInfo *v95; // x3
  int autoRetryCount_5__3; // w21
  ManagerConfig_c *v97; // x0
  float DOWNLOAD_RETRY_DELAY_TIME; // s8
  UnityEngine_WaitForSeconds_o *v99; // x20
  int32_t v100; // w2
  const MethodInfo *v101; // x3
  Il2CppObject *v102; // x21
  CGThumbnailListItem_o *v103; // x20
  MovieFileMerge__Download_d__40_o *loader; // t1
  int32_t v105; // w2
  const MethodInfo *v106; // x3
  int32_t v107; // w2
  const MethodInfo *v108; // x3
  CGThumbnailListItem_o *p_readData_5__5; // x0
  struct UnityEngine_Networking_UnityWebRequest_o **v110; // x21
  int32_t v111; // w2
  const MethodInfo *v112; // x3
  int32_t v113; // w2
  const MethodInfo *v114; // x3
  ManagerConfig_c *v115; // x0
  Il2CppObject *v116; // x0
  System_String_o *v117; // x21
  CommonUI_o *v118; // x22
  ErrorDialog_ClickDelegate_o *v119; // x23
  UnityEngine_WaitForSeconds_o *v120; // x20
  int32_t v121; // w2
  const MethodInfo *v122; // x3
  System_String_o *v123; // x22
  ErrorDialog_ClickDelegate_o *v124; // x23
  UnityEngine_WaitForEndOfFrame_o *v125; // x20
  int32_t v126; // w2
  const MethodInfo *v127; // x3
  int32_t v128; // w2
  const MethodInfo *v129; // x3
  int32_t v130; // w2
  const MethodInfo *v131; // x3
  int32_t v132; // w2
  const MethodInfo *v133; // x3
  float downloadProgress; // s0
  float loadProgress_5__7; // s9
  float v136; // s8
  float v137; // s0
  bool v138; // zf
  float v139; // s8
  System_String_o *downloadingURL; // x22
  System_String_o *v141; // x0
  System_String_o *v142; // x0
  int32_t v143; // w2
  const MethodInfo *v144; // x3
  System_Collections_Generic_Dictionary_string__string__o *ResponseHeaders; // x0
  System_Collections_Generic_Dictionary_object__object__o *v146; // x22
  Il2CppObject *v147; // x22
  MovieFileMerge__Download_d__40_o *v148; // x22
  int v149; // w8
  System_String_o *v150; // x23
  System_String_o *v151; // x0
  System_String_o *v152; // x0
  ManagementManager_c *v153; // x0
  _BOOL4 v154; // w23
  Il2CppObject *v155; // x0
  struct System_String_o *errorLocalizeCode_5__12; // x8
  CommonUI_o *v157; // x22
  System_String_o *v158; // x21
  System_String_o *v159; // x23
  System_String_o *v160; // x23
  ErrorDialog_ClickDelegate_o *v161; // x24
  ManagerConfig_c *v162; // x0
  Il2CppObject *wait_5__8; // x1
  System_String_o *v164; // x23
  System_String_o *v165; // x23
  ErrorDialog_ClickDelegate_o *v166; // x24
  __int64 v167; // x0
  System_IO_IOException_o *v168; // x21
  System_String_o *v169; // x0
  __int64 v170; // x0
  UnityEngine_Networking_UnityWebRequest_o *v171; // x0
  CGThumbnailListItem_o *v172; // x20
  int32_t v173; // w2
  const MethodInfo *v174; // x3
  CGThumbnailListItem_o *v175; // x19
  int32_t v176; // w2
  const MethodInfo *v177; // x3
  System_Nullable_Vector2__o effectDistance; // [xsp+0h] [xbp-70h]
  System_Nullable_Vector2__o effectDistancea; // [xsp+0h] [xbp-70h]
  Il2CppObject *value; // [xsp+38h] [xbp-38h] BYREF

  v4 = this;
  if ( (byte_4CB5230 & 1) == 0 )
  {
    sub_1C6BA08(&char___TypeInfo);
    sub_1C6BA08(&ErrorDialog_ClickDelegate_TypeInfo);
    sub_1C6BA08(&CommonServicePluginScript_TypeInfo);
    sub_1C6BA08(&Crc32_TypeInfo);
    sub_1C6BA08(&UnityEngine_Debug_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__string__TryGetValue__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__string__get_Count__);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&ManagementManager_TypeInfo);
    sub_1C6BA08(&ManagerConfig_TypeInfo);
    sub_1C6BA08(&Method_MovieFileMerge_EndRetryDialog__);
    sub_1C6BA08(&Method_MovieFileMerge_EndWarningDialog__);
    sub_1C6BA08(&NetworkManager_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C6BA08(&string___TypeInfo);
    sub_1C6BA08(&UnityEngine_WaitForEndOfFrame_TypeInfo);
    sub_1C6BA08(&UnityEngine_WaitForSeconds_TypeInfo);
    sub_1C6BA08(&StringLiteral_7254/*"HTTP"*/);
    sub_1C6BA08(&StringLiteral_759/*")\n\n503 Auto retry count "*/);
    sub_1C6BA08(&StringLiteral_762/*")\nfile crc ("*/);
    sub_1C6BA08(&StringLiteral_1418/*"503"*/);
    sub_1C6BA08(&StringLiteral_2036/*"ASSET_LOADER_ERROR_BOOT_RETRY_MESSAGE"*/);
    sub_1C6BA08(&StringLiteral_15922/*"[FFFF80]Download error for debug"*/);
    sub_1C6BA08(&StringLiteral_25266/*"{0}/{1}"*/);
    sub_1C6BA08(&StringLiteral_12353/*"STATUS"*/);
    sub_1C6BA08(&StringLiteral_758/*")\n\n"*/);
    sub_1C6BA08(&StringLiteral_650/*"("*/);
    sub_1C6BA08(&StringLiteral_760/*")\n\nAssetBundle file check sum error\nlist crc ("*/);
    sub_1C6BA08(&StringLiteral_756/*")"*/);
    sub_1C6BA08(&StringLiteral_2037/*"ASSET_LOADER_ERROR_TIME_OVER_MESSAGE"*/);
    sub_1C6BA08(&StringLiteral_761/*")\n\nAssetBundle file download time over"*/);
    this = (MovieFileMerge__Download_d__40_o *)sub_1C6BA08(&StringLiteral_1/*""*/);
    byte_4CB5230 = 1;
  }
  value = 0;
  _4__this = v4->fields.__4__this;
  switch ( v4->fields.__1__state )
  {
    case 0:
      v4->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_177;
      v6 = System_String__Format_64008100(
             (System_String_o *)StringLiteral_25266/*"{0}/{1}"*/,
             (Il2CppObject *)_4__this->fields.assetFolderURL,
             (Il2CppObject *)v4->fields.fileName,
             0);
      _4__this->fields.downloadingURL = v6;
      sub_1C6B9AC((CGThumbnailListItem_o *)&_4__this->fields.downloadingURL, (int32_t)v6, v7, v8);
      _4__this->fields.downloadingCRC = v4->fields.crc;
      LocalFolderPath = (Il2CppObject *)MovieFileMerge__GetLocalFolderPath(_4__this, v9);
      v11 = System_String__Format_64008100(
              (System_String_o *)StringLiteral_25266/*"{0}/{1}"*/,
              LocalFolderPath,
              (Il2CppObject *)v4->fields.fileName,
              0);
      v4->fields._dlFilePath_5__2 = v11;
      sub_1C6B9AC((CGThumbnailListItem_o *)&v4->fields._dlFilePath_5__2, (int32_t)v11, v12, v13);
      v4->fields._autoRetryCount_5__3 = 0;
      v4->fields._isDownload_5__4 = 1;
      _4__this->fields.isErrorDialog = 0;
      goto LABEL_172;
    case 1:
      v4->fields.__1__state = -1;
      unscaledTime = UnityEngine_Time__get_unscaledTime(0);
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
      v56 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C6BC54(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v56, 0);
      v4->fields._wait_5__8 = v56;
      sub_1C6B9AC((CGThumbnailListItem_o *)&v4->fields._wait_5__8, (int32_t)v56, v57, v58);
LABEL_42:
      p_loader = (MovieFileMerge__Download_d__40_o **)&_4__this->fields.loader;
      this = (MovieFileMerge__Download_d__40_o *)_4__this->fields.loader;
      if ( !this )
        goto LABEL_177;
      if ( UnityEngine_Networking_UnityWebRequest__get_isDone((UnityEngine_Networking_UnityWebRequest_o *)this, 0) )
        goto LABEL_44;
      this = *p_loader;
      if ( !*p_loader )
        goto LABEL_177;
      if ( _4__this->fields.isDownloadCancel )
      {
        UnityEngine_Networking_UnityWebRequest__Dispose((UnityEngine_Networking_UnityWebRequest_o *)this, 0);
        _4__this->fields.loader = 0;
        sub_1C6B9AC((CGThumbnailListItem_o *)&_4__this->fields.loader, 0, v74, v75);
        LOBYTE(this) = 0;
        _4__this->fields.isDownloading = 0;
        return (char)this;
      }
      downloadProgress = UnityEngine_Networking_UnityWebRequest__get_downloadProgress(
                           (UnityEngine_Networking_UnityWebRequest_o *)this,
                           0);
      loadProgress_5__7 = v4->fields._loadProgress_5__7;
      v136 = downloadProgress;
      v137 = UnityEngine_Time__get_unscaledTime(0);
      v138 = v136 == loadProgress_5__7;
      v139 = v137;
      if ( !v138 )
      {
        v162 = ManagerConfig_TypeInfo;
        if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
          v162 = ManagerConfig_TypeInfo;
        }
        v4->fields._requestTime_5__6 = v139 + v162->static_fields->TIMEOUT;
        this = *p_loader;
        if ( *p_loader )
        {
          v4->fields._loadProgress_5__7 = UnityEngine_Networking_UnityWebRequest__get_downloadProgress(
                                            (UnityEngine_Networking_UnityWebRequest_o *)this,
                                            0);
LABEL_161:
          wait_5__8 = (Il2CppObject *)v4->fields._wait_5__8;
          v4->fields.__2__current = wait_5__8;
          p__2__current = &v4->fields.__2__current;
          sub_1C6B9AC((CGThumbnailListItem_o *)p__2__current, (int32_t)wait_5__8, v60, v61);
          v51 = 2;
          goto LABEL_119;
        }
        goto LABEL_177;
      }
      if ( v137 < v4->fields._requestTime_5__6 )
        goto LABEL_161;
LABEL_44:
      *(_WORD *)&v4->fields._isAutoRetry_5__9 = 0;
      v4->fields._errorCode_5__11 = 0;
      p_errorCode_5__11 = &v4->fields._errorCode_5__11;
      sub_1C6B9AC((CGThumbnailListItem_o *)&v4->fields._errorCode_5__11, 0, v60, v61);
      v4->fields._errorLocalizeCode_5__12 = 0;
      sub_1C6B9AC((CGThumbnailListItem_o *)&v4->fields._errorLocalizeCode_5__12, 0, v63, v64);
      this = *p_loader;
      if ( !*p_loader )
LABEL_177:
        sub_1C6BC60(this, method);
      if ( !UnityEngine_Networking_UnityWebRequest__get_isDone((UnityEngine_Networking_UnityWebRequest_o *)this, 0) )
      {
        v76 = System_String__Concat_64005056(
                (System_String_o *)StringLiteral_650/*"("*/,
                _4__this->fields.downloadingURL,
                (System_String_o *)StringLiteral_761/*")\n\nAssetBundle file download time over"*/,
                0);
        v79 = (int)v76;
        *p_errorCode_5__11 = v76;
LABEL_63:
        sub_1C6B9AC((CGThumbnailListItem_o *)&v4->fields._errorCode_5__11, v79, v77, v78);
        break;
      }
      this = *p_loader;
      if ( !*p_loader )
        goto LABEL_177;
      error = UnityEngine_Networking_UnityWebRequest__get_error((UnityEngine_Networking_UnityWebRequest_o *)this, 0);
      if ( System_String__IsNullOrEmpty(error, 0) )
      {
        this = *p_loader;
        if ( !*p_loader )
          goto LABEL_177;
        this = (MovieFileMerge__Download_d__40_o *)UnityEngine_Networking_UnityWebRequest__get_downloadHandler(
                                                     (UnityEngine_Networking_UnityWebRequest_o *)this,
                                                     0);
        if ( !this )
          goto LABEL_177;
        data = UnityEngine_Networking_DownloadHandler__get_data((UnityEngine_Networking_DownloadHandler_o *)this, 0);
        v4->fields._readData_5__5 = data;
        sub_1C6B9AC((CGThumbnailListItem_o *)&v4->fields._readData_5__5, (int32_t)data, v67, v68);
        v4->fields.__2__current = 0;
        p__2__current = &v4->fields.__2__current;
        sub_1C6B9AC((CGThumbnailListItem_o *)p__2__current, 0, v69, v70);
        v51 = 3;
        goto LABEL_119;
      }
      this = (MovieFileMerge__Download_d__40_o *)_4__this->fields.loader;
      if ( !this )
        goto LABEL_177;
      downloadingURL = _4__this->fields.downloadingURL;
      v141 = UnityEngine_Networking_UnityWebRequest__get_error((UnityEngine_Networking_UnityWebRequest_o *)this, 0);
      v142 = System_String__Concat_64007060(
               (System_String_o *)StringLiteral_650/*"("*/,
               downloadingURL,
               (System_String_o *)StringLiteral_758/*")\n\n"*/,
               v141,
               0);
      *p_errorCode_5__11 = v142;
      sub_1C6B9AC((CGThumbnailListItem_o *)&v4->fields._errorCode_5__11, (int32_t)v142, v143, v144);
      this = (MovieFileMerge__Download_d__40_o *)_4__this->fields.loader;
      if ( !this )
        goto LABEL_177;
      ResponseHeaders = UnityEngine_Networking_UnityWebRequest__GetResponseHeaders(
                          (UnityEngine_Networking_UnityWebRequest_o *)this,
                          0);
      if ( !ResponseHeaders )
        break;
      v146 = (System_Collections_Generic_Dictionary_object__object__o *)ResponseHeaders;
      if ( System_Collections_Generic_Dictionary_object__object___get_Count(
             (System_Collections_Generic_Dictionary_object__object__o *)ResponseHeaders,
             (const MethodInfo_34BB60C *)Method_System_Collections_Generic_Dictionary_string__string__get_Count__) < 1
        || !System_Collections_Generic_Dictionary_object__object___TryGetValue(
              v146,
              (Il2CppObject *)StringLiteral_12353/*"STATUS"*/,
              &value,
              (const MethodInfo_34BD148 *)Method_System_Collections_Generic_Dictionary_string__string__TryGetValue__) )
      {
        break;
      }
      v147 = value;
      this = (MovieFileMerge__Download_d__40_o *)sub_1C6BAB0(char___TypeInfo, 1);
      if ( !this )
        goto LABEL_177;
      method = (const MethodInfo *)this;
      if ( !LODWORD(this->fields.__2__current) )
        goto LABEL_169;
      LOWORD(this->fields.__4__this) = 32;
      if ( !v147 )
        goto LABEL_177;
      this = (MovieFileMerge__Download_d__40_o *)System_String__Split_64016000(
                                                   (System_String_o *)v147,
                                                   (System_Char_array *)this,
                                                   1,
                                                   0);
      if ( !this )
        goto LABEL_177;
      v148 = this;
      if ( SLODWORD(this->fields.__2__current) < 2 )
        break;
      this = (MovieFileMerge__Download_d__40_o *)this->fields.__4__this;
      if ( !this )
        goto LABEL_177;
      this = (MovieFileMerge__Download_d__40_o *)System_String__StartsWith(
                                                   (System_String_o *)this,
                                                   (System_String_o *)StringLiteral_7254/*"HTTP"*/,
                                                   0);
      if ( ((unsigned __int8)this & 1) == 0 )
        break;
      if ( LODWORD(v148->fields.__2__current) <= 1 )
        goto LABEL_169;
      this = (MovieFileMerge__Download_d__40_o *)v148->fields.fileName;
      if ( !this )
        goto LABEL_177;
      if ( System_String__Equals_64002112((System_String_o *)this, (System_String_o *)StringLiteral_1418/*"503"*/, 0) )
      {
        v149 = v4->fields._autoRetryCount_5__3 + 1;
        v4->fields._isAutoRetry_5__9 = 1;
        v4->fields._autoRetryCount_5__3 = v149;
        v150 = _4__this->fields.downloadingURL;
        v151 = System_Int32__ToString((int)v4 + 64, 0);
        v152 = System_String__Concat_64007060(
                 (System_String_o *)StringLiteral_650/*"("*/,
                 v150,
                 (System_String_o *)StringLiteral_759/*")\n\n503 Auto retry count "*/,
                 v151,
                 0);
        v79 = (int)v152;
        v4->fields._errorCode_5__11 = v152;
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
      v47 = Crc32__Compute(readData_5__5, 0);
      v4->fields.__2__current = 0;
      p__2__current = &v4->fields.__2__current;
      *((_DWORD *)p__2__current + 24) = v47;
      sub_1C6B9AC((CGThumbnailListItem_o *)p__2__current, 0, v49, v50);
      v51 = 4;
      goto LABEL_119;
    case 4:
      v4->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_177;
      downloadingCRC = _4__this->fields.downloadingCRC;
      if ( v4->fields._downloadCrc_5__13 != downloadingCRC && downloadingCRC )
      {
        this = (MovieFileMerge__Download_d__40_o *)sub_1C6BAB0(string___TypeInfo, 7);
        if ( !this )
          goto LABEL_177;
        v19 = this;
        if ( LODWORD(this->fields.__2__current) )
        {
          v20 = StringLiteral_650/*"("*/;
          this->fields.__4__this = (struct MovieFileMerge_o *)StringLiteral_650/*"("*/;
          sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.__4__this, v20, v17, v18);
          if ( LODWORD(v19->fields.__2__current) > 1 )
          {
            v23 = _4__this->fields.downloadingURL;
            v19->fields.fileName = v23;
            sub_1C6B9AC((CGThumbnailListItem_o *)&v19->fields.fileName, (int32_t)v23, v21, v22);
            if ( LODWORD(v19->fields.__2__current) > 2 )
            {
              v26 = StringLiteral_760/*")\n\nAssetBundle file check sum error\nlist crc ("*/;
              *(_QWORD *)&v19->fields.crc = StringLiteral_760/*")\n\nAssetBundle file check sum error\nlist crc ("*/;
              sub_1C6B9AC((CGThumbnailListItem_o *)&v19->fields.crc, v26, v24, v25);
              this = (MovieFileMerge__Download_d__40_o *)System_UInt32__ToString((int)_4__this + 96, 0);
              if ( LODWORD(v19->fields.__2__current) > 3 )
              {
                v19->fields._dlFilePath_5__2 = (struct System_String_o *)this;
                sub_1C6B9AC((CGThumbnailListItem_o *)&v19->fields._dlFilePath_5__2, (int32_t)this, v27, v28);
                if ( LODWORD(v19->fields.__2__current) > 4 )
                {
                  v31 = StringLiteral_762/*")\nfile crc ("*/;
                  *(_QWORD *)&v19->fields._autoRetryCount_5__3 = StringLiteral_762/*")\nfile crc ("*/;
                  sub_1C6B9AC((CGThumbnailListItem_o *)&v19->fields._autoRetryCount_5__3, v31, v29, v30);
                  this = (MovieFileMerge__Download_d__40_o *)System_UInt32__ToString((int)v4 + 120, 0);
                  if ( LODWORD(v19->fields.__2__current) > 5 )
                  {
                    v19->fields._readData_5__5 = (struct System_Byte_array *)this;
                    sub_1C6B9AC((CGThumbnailListItem_o *)&v19->fields._readData_5__5, (int32_t)this, v32, v33);
                    if ( LODWORD(v19->fields.__2__current) > 6 )
                    {
                      v36 = StringLiteral_756/*")"*/;
                      *(_QWORD *)&v19->fields._requestTime_5__6 = StringLiteral_756/*")"*/;
                      sub_1C6B9AC((CGThumbnailListItem_o *)&v19->fields._requestTime_5__6, v36, v34, v35);
                      v37 = System_String__Concat_64007324((System_String_array *)v19, 0);
                      v4->fields._errorCode_5__11 = v37;
                      sub_1C6B9AC((CGThumbnailListItem_o *)&v4->fields._errorCode_5__11, (int32_t)v37, v38, v39);
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
        sub_1C6BC68(this);
      }
      Parent = System_IO_Directory__GetParent(v4->fields._dlFilePath_5__2, 0);
      v82 = Parent;
      if ( !Parent )
        sub_1C6BC60(0, v81);
      if ( (((__int64 (__fastcall *)(System_IO_DirectoryInfo_o *, const MethodInfo *))Parent->klass->vtable._10_get_Exists.methodPtr)(
              Parent,
              Parent->klass->vtable._10_get_Exists.method)
          & 1) == 0 )
      {
        v84 = (System_String_o *)((__int64 (__fastcall *)(System_IO_DirectoryInfo_o *, const MethodInfo *))v82->klass->vtable._8_get_FullName.methodPtr)(
                                   v82,
                                   v82->klass->vtable._8_get_FullName.method);
        System_IO_Directory__CreateDirectory(v84, 0);
      }
      v85 = MovieFileMerge__GetLocalFolderPath(_4__this, v83);
      if ( !CommonServicePluginScript_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CommonServicePluginScript_TypeInfo);
      FreeSize = CommonServicePluginScript__GetFreeSize(v85, 0);
      if ( FreeSize < 0 )
        goto LABEL_170;
      v87 = ManagerConfig_TypeInfo;
      if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
        v87 = ManagerConfig_TypeInfo;
      }
      if ( FreeSize < v87->static_fields->LIMIT_FREE_SIZE )
      {
LABEL_170:
        v167 = sub_1C6BA1C(&System_IO_IOException_TypeInfo);
        v168 = (System_IO_IOException_o *)sub_1C6BC54(v167);
        v169 = (System_String_o *)sub_1C6BA1C(&StringLiteral_5280/*"Disk full"*/);
        System_IO_IOException___ctor_64783912(v168, v169, 0);
        v170 = sub_1C6BA1C(&Method_MovieFileMerge__Download_d__40_MoveNext__);
        sub_1C6BB30(v168, v170);
      }
      if ( System_IO_File__Exists(v4->fields._dlFilePath_5__2, 0) )
        System_IO_File__Delete(v4->fields._dlFilePath_5__2, 0);
      ++_4__this->fields.downloadProgress;
      System_IO_File__WriteAllBytes(v4->fields._dlFilePath_5__2, v4->fields._readData_5__5, 0);
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
      if ( !byte_4CB5247 )
      {
        sub_1C6BA08(&ManagementManager_TypeInfo);
        byte_4CB5247 = 1;
      }
      v41 = ManagementManager_TypeInfo;
      if ( !ManagementManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
        v41 = ManagementManager_TypeInfo;
      }
      isDuringStartup = v41->static_fields->isDuringStartup;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      if ( isDuringStartup )
      {
        v44 = LocalizationManager__Get((System_String_o *)StringLiteral_2036/*"ASSET_LOADER_ERROR_BOOT_RETRY_MESSAGE"*/, 0);
        v45 = (ErrorDialog_ClickDelegate_o *)sub_1C6BC54(ErrorDialog_ClickDelegate_TypeInfo);
        ErrorDialog_ClickDelegate___ctor(v45, (Il2CppObject *)_4__this, Method_MovieFileMerge_EndRetryDialog__, 0);
        if ( !Instance )
          goto LABEL_177;
        CommonUI__OpenRetryBootDialog((CommonUI_o *)Instance, (System_String_o *)StringLiteral_1/*""*/, v44, v45, 1, 0);
      }
      else
      {
        v123 = LocalizationManager__Get((System_String_o *)StringLiteral_2037/*"ASSET_LOADER_ERROR_TIME_OVER_MESSAGE"*/, 0);
        v124 = (ErrorDialog_ClickDelegate_o *)sub_1C6BC54(ErrorDialog_ClickDelegate_TypeInfo);
        ErrorDialog_ClickDelegate___ctor(v124, (Il2CppObject *)_4__this, Method_MovieFileMerge_EndRetryDialog__, 0);
        if ( !Instance )
          goto LABEL_177;
        CommonUI__OpenRetryDialog((CommonUI_o *)Instance, (System_String_o *)StringLiteral_1/*""*/, v123, v124, 1, 0);
      }
LABEL_117:
      if ( !_4__this->fields.isErrorDialog )
        goto LABEL_120;
      v125 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C6BC54(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v125, 0);
      v4->fields.__2__current = (Il2CppObject *)v125;
      p__2__current = &v4->fields.__2__current;
      sub_1C6B9AC((CGThumbnailListItem_o *)p__2__current, (int32_t)v125, v126, v127);
      v51 = 10;
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
    MovieFileMerge__AssetLoadLogError(_4__this, (System_String_o *)method, v40);
    v88 = ManagerConfig_TypeInfo;
    if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
      v88 = ManagerConfig_TypeInfo;
    }
    if ( v88->static_fields->UseDebugCommand )
    {
      _4__this->fields.isErrorDialog = 1;
      v89 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      errorCode_5__11 = v4->fields._errorCode_5__11;
      v91 = (CommonUI_o *)v89;
      v92 = (ErrorDialog_ClickDelegate_o *)sub_1C6BC54(ErrorDialog_ClickDelegate_TypeInfo);
      ErrorDialog_ClickDelegate___ctor(v92, (Il2CppObject *)_4__this, Method_MovieFileMerge_EndWarningDialog__, 0);
      if ( !v91 )
        goto LABEL_177;
      *(_QWORD *)&effectDistance.fields.hasValue = 0;
      effectDistance.fields.value.fields.y = 0.0;
      CommonUI__OpenWarningDialog(
        v91,
        (System_String_o *)StringLiteral_15922/*"[FFFF80]Download error for debug"*/,
        errorCode_5__11,
        v92,
        1,
        0,
        -1.0,
        1,
        effectDistance,
        0);
LABEL_82:
      if ( _4__this->fields.isErrorDialog )
      {
        v93 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C6BC54(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v93, 0);
        v4->fields.__2__current = (Il2CppObject *)v93;
        p__2__current = &v4->fields.__2__current;
        sub_1C6B9AC((CGThumbnailListItem_o *)p__2__current, (int32_t)v93, v94, v95);
        v51 = 5;
        goto LABEL_119;
      }
    }
    if ( v4->fields._isAutoRetry_5__9 )
    {
      autoRetryCount_5__3 = v4->fields._autoRetryCount_5__3;
      v97 = ManagerConfig_TypeInfo;
      if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
        v97 = ManagerConfig_TypeInfo;
      }
      DOWNLOAD_RETRY_DELAY_TIME = v97->static_fields->DOWNLOAD_RETRY_DELAY_TIME;
      v99 = (UnityEngine_WaitForSeconds_o *)sub_1C6BC54(UnityEngine_WaitForSeconds_TypeInfo);
      UnityEngine_WaitForSeconds___ctor(v99, DOWNLOAD_RETRY_DELAY_TIME * (float)autoRetryCount_5__3, 0);
      v4->fields.__2__current = (Il2CppObject *)v99;
      p__2__current = &v4->fields.__2__current;
      sub_1C6B9AC((CGThumbnailListItem_o *)p__2__current, (int32_t)v99, v100, v101);
      v51 = 6;
      goto LABEL_119;
    }
    if ( v4->fields._isCrcError_5__10 )
    {
      v102 = (Il2CppObject *)v4->fields._errorCode_5__11;
      if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
      UnityEngine_Debug__LogError(v102, 0);
    }
    else
    {
      MovieFileMerge__AssetLoadLogError(_4__this, v4->fields._errorCode_5__11, v2);
      _4__this->fields.isErrorDialog = 1;
      if ( !ManagementManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
      if ( !byte_4CB5247 )
      {
        sub_1C6BA08(&ManagementManager_TypeInfo);
        byte_4CB5247 = 1;
      }
      v153 = ManagementManager_TypeInfo;
      if ( !ManagementManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
        v153 = ManagementManager_TypeInfo;
      }
      v154 = v153->static_fields->isDuringStartup;
      v155 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      errorLocalizeCode_5__12 = v4->fields._errorLocalizeCode_5__12;
      v157 = (CommonUI_o *)v155;
      v158 = (System_String_o *)StringLiteral_1/*""*/;
      if ( v154 )
      {
        if ( errorLocalizeCode_5__12 )
          v159 = v4->fields._errorLocalizeCode_5__12;
        else
          v159 = (System_String_o *)StringLiteral_2036/*"ASSET_LOADER_ERROR_BOOT_RETRY_MESSAGE"*/;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v160 = LocalizationManager__Get(v159, 0);
        v161 = (ErrorDialog_ClickDelegate_o *)sub_1C6BC54(ErrorDialog_ClickDelegate_TypeInfo);
        ErrorDialog_ClickDelegate___ctor(v161, (Il2CppObject *)_4__this, Method_MovieFileMerge_EndRetryDialog__, 0);
        if ( !v157 )
          goto LABEL_177;
        CommonUI__OpenRetryBootDialog(v157, v158, v160, v161, 1, 0);
      }
      else
      {
        if ( errorLocalizeCode_5__12 )
          v164 = v4->fields._errorLocalizeCode_5__12;
        else
          v164 = (System_String_o *)StringLiteral_2037/*"ASSET_LOADER_ERROR_TIME_OVER_MESSAGE"*/;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v165 = LocalizationManager__Get(v164, 0);
        v166 = (ErrorDialog_ClickDelegate_o *)sub_1C6BC54(ErrorDialog_ClickDelegate_TypeInfo);
        ErrorDialog_ClickDelegate___ctor(v166, (Il2CppObject *)_4__this, Method_MovieFileMerge_EndRetryDialog__, 0);
        if ( !v157 )
          goto LABEL_177;
        CommonUI__OpenRetryDialog(v157, v158, v165, v166, 1, 0);
      }
LABEL_36:
      if ( _4__this->fields.isErrorDialog )
      {
        v52 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C6BC54(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v52, 0);
        v4->fields.__2__current = (Il2CppObject *)v52;
        p__2__current = &v4->fields.__2__current;
        sub_1C6B9AC((CGThumbnailListItem_o *)p__2__current, (int32_t)v52, v53, v54);
        v51 = 7;
        goto LABEL_119;
      }
    }
  }
LABEL_92:
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4CB16DC )
  {
    sub_1C6BA08(&NetworkManager_TypeInfo);
    byte_4CB16DC = 1;
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
    v103 = (CGThumbnailListItem_o *)&_4__this->fields.loader;
    this = loader;
    if ( !loader )
      goto LABEL_177;
    UnityEngine_Networking_UnityWebRequest__Dispose((UnityEngine_Networking_UnityWebRequest_o *)this, 0);
    v103->klass = 0;
    sub_1C6B9AC(v103, 0, v105, v106);
    v4->fields._readData_5__5 = 0;
    p_readData_5__5 = (CGThumbnailListItem_o *)&v4->fields._readData_5__5;
  }
  else
  {
    if ( !_4__this )
      goto LABEL_177;
    v110 = &_4__this->fields.loader;
    this = (MovieFileMerge__Download_d__40_o *)_4__this->fields.loader;
    if ( v4->fields._isDownload_5__4 )
    {
      if ( !this )
        goto LABEL_177;
      UnityEngine_Networking_UnityWebRequest__Dispose((UnityEngine_Networking_UnityWebRequest_o *)this, 0);
      *v110 = 0;
      sub_1C6B9AC((CGThumbnailListItem_o *)&_4__this->fields.loader, 0, v111, v112);
      v4->fields._readData_5__5 = 0;
      sub_1C6B9AC((CGThumbnailListItem_o *)&v4->fields._readData_5__5, 0, v113, v114);
      if ( !v4->fields._isCrcError_5__10 )
      {
LABEL_120:
        v4->fields._wait_5__8 = 0;
        sub_1C6B9AC((CGThumbnailListItem_o *)&v4->fields._wait_5__8, 0, (int32_t)v2, v3);
        v4->fields._errorCode_5__11 = 0;
        sub_1C6B9AC((CGThumbnailListItem_o *)&v4->fields._errorCode_5__11, 0, v128, v129);
        v4->fields._errorLocalizeCode_5__12 = 0;
        sub_1C6B9AC((CGThumbnailListItem_o *)&v4->fields._errorLocalizeCode_5__12, 0, v130, v131);
        do
        {
          v4->fields._readData_5__5 = 0;
          sub_1C6B9AC((CGThumbnailListItem_o *)&v4->fields._readData_5__5, 0, v132, v133);
LABEL_172:
          v4->fields._readData_5__5 = 0;
          sub_1C6B9AC((CGThumbnailListItem_o *)&v4->fields._readData_5__5, 0, v14, v15);
        }
        while ( !v4->fields._isDownload_5__4 );
        v171 = UnityEngine_Networking_UnityWebRequest__Get(_4__this->fields.downloadingURL, 0);
        _4__this->fields.loader = v171;
        v172 = (CGThumbnailListItem_o *)&_4__this->fields.loader;
        sub_1C6B9AC(v172, (int32_t)v171, v173, v174);
        this = (MovieFileMerge__Download_d__40_o *)v172->klass;
        if ( v172->klass )
        {
          UnityEngine_Networking_UnityWebRequest__SendWebRequest((UnityEngine_Networking_UnityWebRequest_o *)this, 0);
          v4->fields.__2__current = 0;
          v175 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
          sub_1C6B9AC(v175, 0, v176, v177);
          LOBYTE(this) = 1;
          LODWORD(v175[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
          return (char)this;
        }
        goto LABEL_177;
      }
      if ( !v4->fields._errorCode_5__11 )
        goto LABEL_114;
      v115 = ManagerConfig_TypeInfo;
      if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
        v115 = ManagerConfig_TypeInfo;
      }
      if ( !v115->static_fields->UseDebugCommand )
        goto LABEL_114;
      _4__this->fields.isErrorDialog = 1;
      v116 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v117 = v4->fields._errorCode_5__11;
      v118 = (CommonUI_o *)v116;
      v119 = (ErrorDialog_ClickDelegate_o *)sub_1C6BC54(ErrorDialog_ClickDelegate_TypeInfo);
      ErrorDialog_ClickDelegate___ctor(v119, (Il2CppObject *)_4__this, Method_MovieFileMerge_EndWarningDialog__, 0);
      if ( !v118 )
        goto LABEL_177;
      *(_QWORD *)&effectDistancea.fields.hasValue = 0;
      effectDistancea.fields.value.fields.y = 0.0;
      CommonUI__OpenWarningDialog(
        v118,
        (System_String_o *)StringLiteral_15922/*"[FFFF80]Download error for debug"*/,
        v117,
        v119,
        1,
        0,
        -1.0,
        1,
        effectDistancea,
        0);
LABEL_57:
      if ( _4__this->fields.isErrorDialog )
      {
        v71 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C6BC54(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v71, 0);
        v4->fields.__2__current = (Il2CppObject *)v71;
        p__2__current = &v4->fields.__2__current;
        sub_1C6B9AC((CGThumbnailListItem_o *)p__2__current, (int32_t)v71, v72, v73);
        v51 = 8;
      }
      else
      {
LABEL_114:
        v120 = (UnityEngine_WaitForSeconds_o *)sub_1C6BC54(UnityEngine_WaitForSeconds_TypeInfo);
        UnityEngine_WaitForSeconds___ctor(v120, 1.0, 0);
        v4->fields.__2__current = (Il2CppObject *)v120;
        p__2__current = &v4->fields.__2__current;
        sub_1C6B9AC((CGThumbnailListItem_o *)p__2__current, (int32_t)v120, v121, v122);
        v51 = 9;
      }
LABEL_119:
      *((_DWORD *)p__2__current - 2) = v51;
      LOBYTE(this) = 1;
      return (char)this;
    }
    if ( !this )
      return (char)this;
    UnityEngine_Networking_UnityWebRequest__Dispose((UnityEngine_Networking_UnityWebRequest_o *)this, 0);
    p_readData_5__5 = (CGThumbnailListItem_o *)&_4__this->fields.loader;
    *v110 = 0;
  }
  sub_1C6B9AC(p_readData_5__5, 0, v107, v108);
LABEL_103:
  LOBYTE(this) = 0;
  return (char)this;
}


Il2CppObject *MovieFileMerge__Download_d__40__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        MovieFileMerge__Download_d__40_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn MovieFileMerge__Download_d__40__System_Collections_IEnumerator_Reset(
        MovieFileMerge__Download_d__40_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C6BA1C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C6BC54(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C6BA1C(&Method_MovieFileMerge__Download_d__40_System_Collections_IEnumerator_Reset__);
  sub_1C6BB30(v3, v4);
}


Il2CppObject *MovieFileMerge__Download_d__40__System_Collections_IEnumerator_get_Current(
        MovieFileMerge__Download_d__40_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void MovieFileMerge__Download_d__40__System_IDisposable_Dispose(
        MovieFileMerge__Download_d__40_o *this,
        const MethodInfo *method)
{
  ;
}


void MovieFileMerge__Merge_d__34___ctor(
        MovieFileMerge__Merge_d__34_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool MovieFileMerge__Merge_d__34__MoveNext(MovieFileMerge__Merge_d__34_o *this, const MethodInfo *method)
{
  MovieFileMerge__Merge_d__34_o *v2; // x19
  int32_t _1__state; // w8
  struct MovieFileMerge_o *_4__this; // x20
  System_Collections_Generic_List_string__o *SplitFileList; // x0
  System_String_o *outputMergeFile; // x21
  System_Collections_Generic_List_string__o *v7; // x22
  FileMergeAndSplit_Merge_o *v8; // x23
  const MethodInfo *v9; // x3
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  FileMergeAndSplit_Merge_o *mergeClass; // x21
  System_Action_object__o *v13; // x22
  const MethodInfo *v14; // x2
  System_Collections_IEnumerator_o *v15; // x0
  CGThumbnailListItem_o *p__2__current; // x19
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  bool result; // w0
  struct FileMergeAndSplit_CRCChecker_o *crcCheckerClass; // x8
  struct FileMergeAndSplit_Merge_o *v21; // x8
  System_String_o *v22; // x21
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

  v2 = this;
  if ( (byte_4CB5233 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_Exception__TypeInfo);
    sub_1C6BA08(&FileMergeAndSplit_CRCChecker_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__uint__get_Values__);
    sub_1C6BA08(&Method_System_Linq_Enumerable_ToList_uint___);
    sub_1C6BA08(&FileMergeAndSplit_Merge_TypeInfo);
    this = (MovieFileMerge__Merge_d__34_o *)sub_1C6BA08(&Method_MovieFileMerge__Merge_b__34_0__);
    byte_4CB5233 = 1;
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
      if ( System_IO_Directory__Exists(_4__this->fields.outputSplitFileFolder, 0) )
        System_IO_Directory__Delete(_4__this->fields.outputSplitFileFolder, 1, 0);
      if ( System_IO_File__Exists(_4__this->fields.outputMergeFileCRC, 0) )
        System_IO_File__Delete(_4__this->fields.outputMergeFileCRC, 0);
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
        v7 = SplitFileList;
        v8 = (FileMergeAndSplit_Merge_o *)sub_1C6BC54(FileMergeAndSplit_Merge_TypeInfo);
        FileMergeAndSplit_Merge___ctor(v8, v7, outputMergeFile, v9);
        _4__this->fields.mergeClass = v8;
        sub_1C6B9AC((CGThumbnailListItem_o *)&_4__this->fields.mergeClass, (int32_t)v8, v10, v11);
        mergeClass = _4__this->fields.mergeClass;
        v13 = (System_Action_object__o *)sub_1C6BC54(System_Action_Exception__TypeInfo);
        System_Action_object____ctor(v13, (Il2CppObject *)_4__this, Method_MovieFileMerge__Merge_b__34_0__, 0);
        if ( mergeClass )
        {
          v15 = FileMergeAndSplit_Merge__Run(mergeClass, (System_Action_Exception__o *)v13, v14);
          v2->fields.__2__current = (Il2CppObject *)v15;
          p__2__current = (CGThumbnailListItem_o *)&v2->fields.__2__current;
          sub_1C6B9AC(p__2__current, (int32_t)v15, v17, v18);
          result = 1;
          LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
          return result;
        }
      }
LABEL_23:
      sub_1C6BC60(this, method);
    }
    return 0;
  }
  v2->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_23;
  v21 = _4__this->fields.mergeClass;
  if ( !v21 )
    goto LABEL_23;
  if ( v21->fields.isError )
    return 0;
  this = (MovieFileMerge__Merge_d__34_o *)_4__this->fields.AllDownLoadFilePathCRCDictionary;
  if ( !this )
    goto LABEL_23;
  v22 = _4__this->fields.outputMergeFile;
  Values = System_Collections_Generic_Dictionary_object__uint___get_Values(
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)this,
             (const MethodInfo_34CD5D8 *)Method_System_Collections_Generic_Dictionary_string__uint__get_Values__);
  v24 = (System_Collections_Generic_List_uint__o *)System_Linq_Enumerable__ToList_uint_(
                                                     (System_Collections_Generic_IEnumerable_TSource__o *)Values,
                                                     (const MethodInfo_3180058 *)Method_System_Linq_Enumerable_ToList_uint___);
  v25 = (FileMergeAndSplit_CRCChecker_o *)sub_1C6BC54(FileMergeAndSplit_CRCChecker_TypeInfo);
  FileMergeAndSplit_CRCChecker___ctor(v25, v22, v24, v26);
  _4__this->fields.crcCheckerClass = v25;
  p_crcCheckerClass = (CGThumbnailListItem_o *)&_4__this->fields.crcCheckerClass;
  sub_1C6B9AC(p_crcCheckerClass, (int32_t)v25, v28, v29);
  this = (MovieFileMerge__Merge_d__34_o *)p_crcCheckerClass->klass;
  if ( !p_crcCheckerClass->klass )
    goto LABEL_23;
  v30 = FileMergeAndSplit_CRCChecker__Run((FileMergeAndSplit_CRCChecker_o *)this, method);
  v2->fields.__2__current = (Il2CppObject *)v30;
  v31 = (CGThumbnailListItem_o *)&v2->fields.__2__current;
  sub_1C6B9AC(v31, (int32_t)v30, v32, v33);
  LODWORD(v31[-1].fields._ThumbnailSpritePath_k__BackingField) = 2;
  return 1;
}


Il2CppObject *MovieFileMerge__Merge_d__34__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        MovieFileMerge__Merge_d__34_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn MovieFileMerge__Merge_d__34__System_Collections_IEnumerator_Reset(
        MovieFileMerge__Merge_d__34_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C6BA1C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C6BC54(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C6BA1C(&Method_MovieFileMerge__Merge_d__34_System_Collections_IEnumerator_Reset__);
  sub_1C6BB30(v3, v4);
}


Il2CppObject *MovieFileMerge__Merge_d__34__System_Collections_IEnumerator_get_Current(
        MovieFileMerge__Merge_d__34_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void MovieFileMerge__Merge_d__34__System_IDisposable_Dispose(
        MovieFileMerge__Merge_d__34_o *this,
        const MethodInfo *method)
{
  ;
}


void MovieFileMerge__PlayCRIMovie_d__30___ctor(
        MovieFileMerge__PlayCRIMovie_d__30_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool MovieFileMerge__PlayCRIMovie_d__30__MoveNext(MovieFileMerge__PlayCRIMovie_d__30_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  MovieFileMerge__PlayCRIMovie_d__30_o *v4; // x19
  int32_t _1__state; // w8
  Il2CppObject *v6; // x21
  Il2CppObject **p__8__1; // x20
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  Il2CppObject *object; // x21
  Il2CppObject *v11; // x21
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  Il2CppObject *v14; // x8
  CRIMoviePlayer_o *klass; // x21
  System_String_o *filePath; // x22
  BgmManager_c *v17; // x0
  Il2CppObject *v18; // x24
  float masterVolume; // s8
  System_Action_o *v20; // x23
  struct MovieFileMerge___c__DisplayClass30_0_o *_8__1; // x8
  CGThumbnailListItem_o *p__2__current; // x19
  bool result; // w0

  v4 = this;
  if ( (byte_4CB5234 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&BgmManager_TypeInfo);
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_CRIMoviePlayer___);
    sub_1C6BA08(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&Method_UnityEngine_Resources_Load_GameObject___);
    sub_1C6BA08(&Method_MovieFileMerge___c__DisplayClass30_0__PlayCRIMovie_b__0__);
    sub_1C6BA08(&MovieFileMerge___c__DisplayClass30_0_TypeInfo);
    this = (MovieFileMerge__PlayCRIMovie_d__30_o *)sub_1C6BA08(&StringLiteral_3912/*"CRIMovie/CRIMoviePlayerWithPanel"*/);
    byte_4CB5234 = 1;
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
    v6 = (Il2CppObject *)sub_1C6BC54(MovieFileMerge___c__DisplayClass30_0_TypeInfo);
    System_Object___ctor(v6, 0);
    v4->fields.__8__1 = (struct MovieFileMerge___c__DisplayClass30_0_o *)v6;
    p__8__1 = (Il2CppObject **)&v4->fields.__8__1;
    sub_1C6B9AC((CGThumbnailListItem_o *)&v4->fields.__8__1, (int32_t)v6, v8, v9);
    object = UnityEngine_Resources__Load_object_(
               (System_String_o *)StringLiteral_3912/*"CRIMovie/CRIMoviePlayerWithPanel"*/,
               (const MethodInfo_31D81C4 *)Method_UnityEngine_Resources_Load_GameObject___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (MovieFileMerge__PlayCRIMovie_d__30_o *)UnityEngine_Object__Instantiate_object_(
                                                     object,
                                                     (const MethodInfo_31C7F14 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !this )
      goto LABEL_25;
    v11 = *p__8__1;
    this = (MovieFileMerge__PlayCRIMovie_d__30_o *)UnityEngine_GameObject__GetComponent_object_(
                                                     (UnityEngine_GameObject_o *)this,
                                                     (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_CRIMoviePlayer___);
    if ( !v11 )
      goto LABEL_25;
    v11[1].klass = (Il2CppClass *)this;
    sub_1C6B9AC((CGThumbnailListItem_o *)&v11[1], (int32_t)this, v12, v13);
    v14 = *p__8__1;
    if ( !*p__8__1 )
      goto LABEL_25;
    LOBYTE(v14[1].monitor) = 1;
    klass = (CRIMoviePlayer_o *)v14[1].klass;
    filePath = v4->fields.filePath;
    if ( !BgmManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
    if ( !byte_4CB10C7 )
    {
      sub_1C6BA08(&BgmManager_TypeInfo);
      byte_4CB10C7 = 1;
    }
    v17 = BgmManager_TypeInfo;
    if ( !BgmManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
      v17 = BgmManager_TypeInfo;
    }
    v18 = *p__8__1;
    masterVolume = v17->static_fields->masterVolume;
    v20 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
    System_Action___ctor(v20, v18, Method_MovieFileMerge___c__DisplayClass30_0__PlayCRIMovie_b__0__, 0);
    if ( !klass
      || (CRIMoviePlayer__Initialize(klass, filePath, filePath, masterVolume, 1, 0, v20, 1, 0, 0, 0, 1, 0, 0), !*p__8__1)
      || (this = (MovieFileMerge__PlayCRIMovie_d__30_o *)(*p__8__1)[1].klass) == 0 )
    {
LABEL_25:
      sub_1C6BC60(this, method);
    }
    CRIMoviePlayer__MoviePlay((CRIMoviePlayer_o *)this, 1, 1, 1, 0, 0);
  }
  _8__1 = v4->fields.__8__1;
  if ( !_8__1 )
    goto LABEL_25;
  if ( _8__1->fields.wait )
  {
    v4->fields.__2__current = 0;
    p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
    sub_1C6B9AC(p__2__current, 0, v2, v3);
    result = 1;
    LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
    return result;
  }
  return 0;
}


Il2CppObject *MovieFileMerge__PlayCRIMovie_d__30__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        MovieFileMerge__PlayCRIMovie_d__30_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn MovieFileMerge__PlayCRIMovie_d__30__System_Collections_IEnumerator_Reset(
        MovieFileMerge__PlayCRIMovie_d__30_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C6BA1C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C6BC54(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C6BA1C(&Method_MovieFileMerge__PlayCRIMovie_d__30_System_Collections_IEnumerator_Reset__);
  sub_1C6BB30(v3, v4);
}


Il2CppObject *MovieFileMerge__PlayCRIMovie_d__30__System_Collections_IEnumerator_get_Current(
        MovieFileMerge__PlayCRIMovie_d__30_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void MovieFileMerge__PlayCRIMovie_d__30__System_IDisposable_Dispose(
        MovieFileMerge__PlayCRIMovie_d__30_o *this,
        const MethodInfo *method)
{
  ;
}


void MovieFileMerge__PlayMP4_d__28___ctor(
        MovieFileMerge__PlayMP4_d__28_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool MovieFileMerge__PlayMP4_d__28__MoveNext(MovieFileMerge__PlayMP4_d__28_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  int32_t _1__state; // w8
  bool result; // w0
  struct MovieFileMerge_o *_4__this; // x0
  Il2CppObject *v7; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  int32_t v10; // w8

  _1__state = this->fields.__1__state;
  result = 0;
  if ( _1__state == 1 )
  {
    v10 = -1;
  }
  else
  {
    if ( _1__state )
      return result;
    _4__this = this->fields.__4__this;
    this->fields.__1__state = -1;
    if ( !_4__this )
      sub_1C6BC60(0, method);
    v7 = (Il2CppObject *)MovieFileMerge__PlayMP4_40720880(_4__this, _4__this->fields.outputMergeFile, v2);
    this->fields.__2__current = v7;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.__2__current, (int32_t)v7, v8, v9);
    v10 = 1;
    result = 1;
  }
  this->fields.__1__state = v10;
  return result;
}


Il2CppObject *MovieFileMerge__PlayMP4_d__28__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        MovieFileMerge__PlayMP4_d__28_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn MovieFileMerge__PlayMP4_d__28__System_Collections_IEnumerator_Reset(
        MovieFileMerge__PlayMP4_d__28_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C6BA1C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C6BC54(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C6BA1C(&Method_MovieFileMerge__PlayMP4_d__28_System_Collections_IEnumerator_Reset__);
  sub_1C6BB30(v3, v4);
}


Il2CppObject *MovieFileMerge__PlayMP4_d__28__System_Collections_IEnumerator_get_Current(
        MovieFileMerge__PlayMP4_d__28_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void MovieFileMerge__PlayMP4_d__28__System_IDisposable_Dispose(
        MovieFileMerge__PlayMP4_d__28_o *this,
        const MethodInfo *method)
{
  ;
}


void MovieFileMerge__PlayMP4_d__29___ctor(
        MovieFileMerge__PlayMP4_d__29_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool MovieFileMerge__PlayMP4_d__29__MoveNext(MovieFileMerge__PlayMP4_d__29_o *this, const MethodInfo *method)
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

  if ( (byte_4CB5235 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_WaitForEndOfFrame_TypeInfo);
    byte_4CB5235 = 1;
  }
  switch ( this->fields.__1__state )
  {
    case 0:
      filePath = this->fields.filePath;
      _4__this = this->fields.__4__this;
      this->fields.__1__state = -1;
      IsNullOrEmpty = System_String__IsNullOrEmpty(filePath, 0);
      if ( IsNullOrEmpty )
        goto LABEL_5;
      if ( !_4__this )
        sub_1C6BC60(IsNullOrEmpty, v6);
      v16 = (Il2CppObject *)MovieFileMerge__PlayCRIMovie((MovieFileMerge_o *)IsNullOrEmpty, this->fields.filePath, v7);
      this->fields.__2__current = v16;
      p__2__current = &this->fields.__2__current;
      sub_1C6B9AC((CGThumbnailListItem_o *)p__2__current, (int32_t)v16, v18, v19);
      result = 1;
      *((_DWORD *)p__2__current - 2) = 1;
      break;
    case 1:
      this->fields.__1__state = -1;
      v13 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C6BC54(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v13, 0);
      this->fields.__2__current = (Il2CppObject *)v13;
      sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.__2__current, (int32_t)v13, v14, v15);
      v12 = 2;
      goto LABEL_9;
    case 2:
      this->fields.__1__state = -1;
      v9 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C6BC54(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v9, 0);
      this->fields.__2__current = (Il2CppObject *)v9;
      sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.__2__current, (int32_t)v9, v10, v11);
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


Il2CppObject *MovieFileMerge__PlayMP4_d__29__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        MovieFileMerge__PlayMP4_d__29_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn MovieFileMerge__PlayMP4_d__29__System_Collections_IEnumerator_Reset(
        MovieFileMerge__PlayMP4_d__29_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C6BA1C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C6BC54(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C6BA1C(&Method_MovieFileMerge__PlayMP4_d__29_System_Collections_IEnumerator_Reset__);
  sub_1C6BB30(v3, v4);
}


Il2CppObject *MovieFileMerge__PlayMP4_d__29__System_Collections_IEnumerator_get_Current(
        MovieFileMerge__PlayMP4_d__29_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void MovieFileMerge__PlayMP4_d__29__System_IDisposable_Dispose(
        MovieFileMerge__PlayMP4_d__29_o *this,
        const MethodInfo *method)
{
  ;
}


void MovieFileMerge___c__DisplayClass30_0___ctor(
        MovieFileMerge___c__DisplayClass30_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void MovieFileMerge___c__DisplayClass30_0___PlayCRIMovie_b__0(
        MovieFileMerge___c__DisplayClass30_0_o *this,
        const MethodInfo *method)
{
  CRIMoviePlayer_o *player; // x0

  player = this->fields.player;
  if ( !player )
    sub_1C6BC60(0, method);
  CRIMoviePlayer__Dispose(player, 0);
  this->fields.wait = 0;
}