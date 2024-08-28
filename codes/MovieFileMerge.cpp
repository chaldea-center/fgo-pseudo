void __fastcall MovieFileMerge___ctor(MovieFileMerge_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_Dictionary_TKey__TValue__o *v4; // x20
  int32_t v5; // w2
  int32_t v6; // w3
  System_Collections_Generic_Dictionary_TKey__TValue__o *v7; // x20
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_4A07CF0 & 1) == 0 )
  {
    sub_1B686D4(&Method_System_Collections_Generic_Dictionary_string__uint___ctor__, method);
    sub_1B686D4(&System_Collections_Generic_Dictionary_string__uint__TypeInfo, v3);
    byte_4A07CF0 = 1;
  }
  v4 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1B68920(System_Collections_Generic_Dictionary_string__uint__TypeInfo);
  System_Collections_Generic_Dictionary_object__uint____ctor(
    v4,
    (const MethodInfo_319B120 *)Method_System_Collections_Generic_Dictionary_string__uint___ctor__);
  this->fields.AllDownLoadFilePathCRCDictionary = (struct System_Collections_Generic_Dictionary_string__uint__o *)v4;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.AllDownLoadFilePathCRCDictionary, (int32_t)v4, v5, v6);
  v7 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1B68920(System_Collections_Generic_Dictionary_string__uint__TypeInfo);
  System_Collections_Generic_Dictionary_object__uint____ctor(
    v7,
    (const MethodInfo_319B120 *)Method_System_Collections_Generic_Dictionary_string__uint___ctor__);
  this->fields.RequireDownLoadFilePathCRCDictionary = (struct System_Collections_Generic_Dictionary_string__uint__o *)v7;
  sub_1B68678(
    (ServantStatusBattleListViewItem_o *)&this->fields.RequireDownLoadFilePathCRCDictionary,
    (int32_t)v7,
    v8,
    v9);
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
  int32_t v20; // w2
  int32_t v21; // w3
  Il2CppObject *v22; // x21
  int32_t v23; // w1
  int32_t v24; // w2
  int32_t v25; // w3
  int32_t v26; // w1
  int32_t v27; // w2
  int32_t v28; // w3
  int32_t v29; // w1
  int32_t v30; // w2
  int32_t v31; // w3
  int32_t v32; // w1
  int32_t v33; // w2
  int32_t v34; // w3
  int32_t v35; // w1
  int32_t v36; // w2
  int32_t v37; // w3
  int32_t v38; // w1
  int32_t v39; // w2
  int32_t v40; // w3
  int32_t v41; // w1
  int32_t v42; // w2
  int32_t v43; // w3
  int32_t v44; // w1
  __int64 v45; // x22
  __int64 v46; // x24

  v3 = errorCode;
  if ( (byte_4A07CEE & 1) == 0 )
  {
    sub_1B686D4(&UnityEngine_Debug_TypeInfo, errorCode);
    sub_1B686D4(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__, v5);
    sub_1B686D4(&string___TypeInfo, v6);
    sub_1B686D4(&StringLiteral_14043/*"The request timed out."*/, v7);
    sub_1B686D4(&StringLiteral_13973/*"The network connection was lost."*/, v8);
    sub_1B686D4(&StringLiteral_4671/*"Connection reset by peer"*/, v9);
    sub_1B686D4(&StringLiteral_5030/*"DLErrorType"*/, v10);
    sub_1B686D4(&StringLiteral_5029/*"DLErrorAsset"*/, v11);
    sub_1B686D4(&StringLiteral_4670/*"Connection refused"*/, v12);
    sub_1B686D4(&StringLiteral_9391/*"No address associated with hostname"*/, v13);
    sub_1B686D4(&StringLiteral_2486/*"AssetBundle file download time over"*/, v14);
    sub_1B686D4(&StringLiteral_12765/*"Software caused connection abort"*/, v15);
    sub_1B686D4(&StringLiteral_4672/*"Connection timed out"*/, v16);
    sub_1B686D4(&StringLiteral_2489/*"AssetLoadError"*/, v17);
    byte_4A07CEE = 1;
  }
  Instance = (Il2CppObject *)sub_1B6877C(string___TypeInfo, 8LL);
  if ( !Instance )
    goto LABEL_28;
  v22 = Instance;
  if ( !LODWORD(Instance[1].monitor) )
    goto LABEL_18;
  v23 = StringLiteral_9391/*"No address associated with hostname"*/;
  Instance[2].klass = (Il2CppClass *)StringLiteral_9391/*"No address associated with hostname"*/;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&Instance[2], v23, v20, v21);
  if ( LODWORD(v22[1].monitor) <= 1 )
    goto LABEL_18;
  v26 = StringLiteral_2486/*"AssetBundle file download time over"*/;
  v22[2].monitor = (void *)StringLiteral_2486/*"AssetBundle file download time over"*/;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&v22[2].monitor, v26, v24, v25);
  if ( LODWORD(v22[1].monitor) <= 2 )
    goto LABEL_18;
  v29 = StringLiteral_13973/*"The network connection was lost."*/;
  v22[3].klass = (Il2CppClass *)StringLiteral_13973/*"The network connection was lost."*/;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&v22[3], v29, v27, v28);
  if ( LODWORD(v22[1].monitor) <= 3 )
    goto LABEL_18;
  v32 = StringLiteral_4671/*"Connection reset by peer"*/;
  v22[3].monitor = (void *)StringLiteral_4671/*"Connection reset by peer"*/;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&v22[3].monitor, v32, v30, v31);
  if ( LODWORD(v22[1].monitor) <= 4 )
    goto LABEL_18;
  v35 = StringLiteral_12765/*"Software caused connection abort"*/;
  v22[4].klass = (Il2CppClass *)StringLiteral_12765/*"Software caused connection abort"*/;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&v22[4], v35, v33, v34);
  if ( LODWORD(v22[1].monitor) <= 5
    || (v38 = StringLiteral_4672/*"Connection timed out"*/,
        v22[4].monitor = (void *)StringLiteral_4672/*"Connection timed out"*/,
        sub_1B68678((ServantStatusBattleListViewItem_o *)&v22[4].monitor, v38, v36, v37),
        LODWORD(v22[1].monitor) <= 6)
    || (v41 = StringLiteral_4670/*"Connection refused"*/,
        v22[5].klass = (Il2CppClass *)StringLiteral_4670/*"Connection refused"*/,
        sub_1B68678((ServantStatusBattleListViewItem_o *)&v22[5], v41, v39, v40),
        LODWORD(v22[1].monitor) <= 7) )
  {
LABEL_18:
    sub_1B68938(Instance, v19);
  }
  v44 = StringLiteral_14043/*"The request timed out."*/;
  v22[5].monitor = (void *)StringLiteral_14043/*"The request timed out."*/;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&v22[5].monitor, v44, v42, v43);
  if ( (int)v22[1].monitor < 1 )
  {
LABEL_19:
    if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
    goto LABEL_27;
  }
  v45 = 0LL;
  v46 = (unsigned int)v22[1].monitor - 1LL;
  while ( 1 )
  {
    if ( !v3 )
      goto LABEL_28;
    Instance = (Il2CppObject *)System_String__Contains(v3, *((System_String_o **)&v22[2].klass + v45), 0LL);
    if ( ((unsigned __int8)Instance & 1) != 0 )
      break;
    if ( v46 == v45 )
      goto LABEL_19;
    if ( ++v45 >= (unsigned __int64)LODWORD(v22[1].monitor) )
      goto LABEL_18;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
  if ( !Instance )
LABEL_28:
    sub_1B68930(Instance, v19);
  CrashReporter__AddCustomKey(
    (CrashReporter_o *)Instance,
    (System_String_o *)StringLiteral_5029/*"DLErrorAsset"*/,
    this->fields.downloadingURL,
    0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
  if ( (unsigned int)v45 >= LODWORD(v22[1].monitor) )
    goto LABEL_18;
  if ( !Instance )
    goto LABEL_28;
  CrashReporter__AddCustomKey(
    (CrashReporter_o *)Instance,
    (System_String_o *)StringLiteral_5030/*"DLErrorType"*/,
    *((System_String_o **)&v22[2].klass + v45),
    0LL);
  if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
  v3 = (System_String_o *)StringLiteral_2489/*"AssetLoadError"*/;
LABEL_27:
  UnityEngine_Debug__LogError((Il2CppObject *)v3, 0LL);
}


System_Collections_IEnumerator_o *__fastcall MovieFileMerge__CRCDownloadAndCheck(
        MovieFileMerge_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_4A07CE5 & 1) == 0 )
  {
    sub_1B686D4(&MovieFileMerge__CRCDownloadAndCheck_d__32_TypeInfo, method);
    byte_4A07CE5 = 1;
  }
  v3 = sub_1B68920(MovieFileMerge__CRCDownloadAndCheck_d__32_TypeInfo);
  MovieFileMerge__CRCDownloadAndCheck_d__32___ctor((MovieFileMerge__CRCDownloadAndCheck_d__32_o *)v3, 0, 0LL);
  if ( !v3 )
    sub_1B68930(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_1B68678((ServantStatusBattleListViewItem_o *)(v3 + 32), (int32_t)this, v6, v7);
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
  int max_length; // w8
  System_String_array *v10; // x20
  unsigned int v11; // w22
  System_String_array *v12; // x21
  uint32_t result; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4A07CEC & 1) == 0 )
  {
    sub_1B686D4(&Method_System_Collections_Generic_Dictionary_string__uint__Add__, dataPath);
    sub_1B686D4(&Method_System_Collections_Generic_Dictionary_string__uint___ctor__, v4);
    sub_1B686D4(&System_Collections_Generic_Dictionary_string__uint__TypeInfo, v5);
    byte_4A07CEC = 1;
  }
  result = 0;
  v6 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1B68920(System_Collections_Generic_Dictionary_string__uint__TypeInfo);
  System_Collections_Generic_Dictionary_object__uint____ctor(
    v6,
    (const MethodInfo_319B120 *)Method_System_Collections_Generic_Dictionary_string__uint___ctor__);
  AllLines = System_IO_File__ReadAllLines(dataPath, 0LL);
  if ( !AllLines )
LABEL_18:
    sub_1B68930(AllLines, v8);
  max_length = AllLines->max_length;
  v10 = AllLines;
  if ( max_length >= 1 )
  {
    v11 = 0;
    while ( 1 )
    {
      if ( v11 >= max_length )
LABEL_17:
        sub_1B68938(AllLines, v8);
      AllLines = (System_String_array *)v10->m_Items[v11];
      if ( !AllLines )
        goto LABEL_18;
      AllLines = System_String__Split((System_String_o *)AllLines, 0x2Cu, 0, 0LL);
      result = 0;
      if ( !AllLines )
        goto LABEL_18;
      v12 = AllLines;
      if ( AllLines->max_length <= 1 )
        goto LABEL_17;
      AllLines = (System_String_array *)System_UInt32__TryParse(AllLines->m_Items[1], &result, 0LL);
      if ( ((unsigned __int8)AllLines & 1) == 0 )
        return 0LL;
      if ( !v12->max_length )
        goto LABEL_17;
      if ( !v6 )
        goto LABEL_18;
      System_Collections_Generic_Dictionary_object__uint___Add(
        v6,
        (Il2CppObject *)v12->m_Items[0],
        result,
        (const MethodInfo_319BAD4 *)Method_System_Collections_Generic_Dictionary_string__uint__Add__);
      max_length = v10->max_length;
      if ( (int)++v11 >= max_length )
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
  if ( (byte_4A07CE8 & 1) == 0 )
  {
    sub_1B686D4(&System_IO_Path_TypeInfo, method);
    sub_1B686D4(&StringLiteral_24971/*"{0}/{1}"*/, v3);
    folder = (System_String_o *)sub_1B686D4(&StringLiteral_1123/*"/"*/, v4);
    byte_4A07CE8 = 1;
  }
  if ( !v2 )
    sub_1B68930(folder, method);
  if ( System_String__EndsWith(v2, (System_String_o *)StringLiteral_1123/*"/"*/, 0LL) )
    v2 = System_String__TrimEnd_61449360(v2, 0x2Fu, 0LL);
  if ( !System_IO_Path_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_IO_Path_TypeInfo);
  FileName = System_IO_Path__GetFileName(v2, 0LL);
  LocalDataPath = (Il2CppObject *)MovieFileMerge__GetLocalDataPath((const MethodInfo *)FileName);
  v7 = System_String__Format_61433840(
         (System_String_o *)StringLiteral_24971/*"{0}/{1}"*/,
         LocalDataPath,
         (Il2CppObject *)FileName,
         0LL);
  if ( System_IO_Directory__Exists(v7, 0LL) )
    System_IO_Directory__Delete(v7, 1, 0LL);
}


void __fastcall MovieFileMerge__Delete_37497464(const MethodInfo *method)
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
  __int64 v8; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  int32_t v12; // w2
  int32_t v13; // w3

  if ( (byte_4A07CEB & 1) == 0 )
  {
    sub_1B686D4(&MovieFileMerge__Download_d__40_TypeInfo, fileName);
    byte_4A07CEB = 1;
  }
  v7 = sub_1B68920(MovieFileMerge__Download_d__40_TypeInfo);
  MovieFileMerge__Download_d__40___ctor((MovieFileMerge__Download_d__40_o *)v7, 0, 0LL);
  if ( !v7 )
    sub_1B68930(v8, v9);
  *(_QWORD *)(v7 + 32) = this;
  sub_1B68678((ServantStatusBattleListViewItem_o *)(v7 + 32), (int32_t)this, v10, v11);
  *(_QWORD *)(v7 + 40) = fileName;
  sub_1B68678((ServantStatusBattleListViewItem_o *)(v7 + 40), (int32_t)fileName, v12, v13);
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
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_4A07CE6 & 1) == 0 )
  {
    sub_1B686D4(&MovieFileMerge__DownloadMovie_d__33_TypeInfo, method);
    byte_4A07CE6 = 1;
  }
  v3 = sub_1B68920(MovieFileMerge__DownloadMovie_d__33_TypeInfo);
  MovieFileMerge__DownloadMovie_d__33___ctor((MovieFileMerge__DownloadMovie_d__33_o *)v3, 0, 0LL);
  if ( !v3 )
    sub_1B68930(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_1B68678((ServantStatusBattleListViewItem_o *)(v3 + 32), (int32_t)this, v6, v7);
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
  if ( (byte_4A07CDC & 1) == 0 )
  {
    sub_1B686D4(&FileMergeAndSplit_TypeInfo, assetFolderURL);
    sub_1B686D4(&System_IO_Path_TypeInfo, v4);
    sub_1B686D4(&StringLiteral_1123/*"/"*/, v5);
    sub_1B686D4(&StringLiteral_24976/*"{0}/{1}/{2}"*/, v6);
    this = (MovieFileMerge_o *)sub_1B686D4(&StringLiteral_24975/*"{0}/{1}/{1}.usm"*/, v7);
    byte_4A07CDC = 1;
  }
  if ( !v3 )
    sub_1B68930(this, assetFolderURL);
  if ( System_String__EndsWith(v3, (System_String_o *)StringLiteral_1123/*"/"*/, 0LL) )
    v3 = System_String__TrimEnd_61449360(v3, 0x2Fu, 0LL);
  if ( !System_IO_Path_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_IO_Path_TypeInfo);
  FileName = System_IO_Path__GetFileName(v3, 0LL);
  LocalDataPath = (Il2CppObject *)MovieFileMerge__GetLocalDataPath((const MethodInfo *)FileName);
  v10 = System_String__Format_61433840(
          (System_String_o *)StringLiteral_24975/*"{0}/{1}/{1}.usm"*/,
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
  v14 = System_String__Format_61433908(
          (System_String_o *)StringLiteral_24976/*"{0}/{1}/{2}"*/,
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

  if ( (byte_4A07CE0 & 1) == 0 )
  {
    sub_1B686D4(&Method_System_Collections_Generic_Dictionary_string__uint__get_Count__, method);
    byte_4A07CE0 = 1;
  }
  RequireDownLoadFilePathCRCDictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.RequireDownLoadFilePathCRCDictionary;
  v4 = 0.0;
  if ( RequireDownLoadFilePathCRCDictionary
    && System_Collections_Generic_Dictionary_object__uint___get_Count(
         RequireDownLoadFilePathCRCDictionary,
         (const MethodInfo_319B7A4 *)Method_System_Collections_Generic_Dictionary_string__uint__get_Count__) )
  {
    v6 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.RequireDownLoadFilePathCRCDictionary;
    if ( !v6 )
      sub_1B68930(0LL, v5);
    downloadProgress = this->fields.downloadProgress;
    return (float)downloadProgress
         / (float)System_Collections_Generic_Dictionary_object__uint___get_Count(
                    v6,
                    (const MethodInfo_319B7A4 *)Method_System_Collections_Generic_Dictionary_string__uint__get_Count__);
  }
  return v4;
}


double __fastcall MovieFileMerge__GetDownloadSize(MovieFileMerge_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_TKey__TValue__o *RequireDownLoadFilePathCRCDictionary; // x0

  if ( (byte_4A07CDF & 1) == 0 )
  {
    sub_1B686D4(&Method_System_Collections_Generic_Dictionary_string__uint__get_Count__, method);
    byte_4A07CDF = 1;
  }
  RequireDownLoadFilePathCRCDictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.RequireDownLoadFilePathCRCDictionary;
  if ( !RequireDownLoadFilePathCRCDictionary )
    sub_1B68930(0LL, method);
  return (double)(System_Collections_Generic_Dictionary_object__uint___get_Count(
                    RequireDownLoadFilePathCRCDictionary,
                    (const MethodInfo_319B7A4 *)Method_System_Collections_Generic_Dictionary_string__uint__get_Count__) << 20);
}


System_String_o *__fastcall MovieFileMerge__GetLocalDataPath(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  System_String_o *persistentDataPath; // x0

  if ( (byte_4A07CDD & 1) == 0 )
  {
    sub_1B686D4(&UnityEngine_Application_TypeInfo, v1);
    sub_1B686D4(&StringLiteral_1178/*"/extend-data/movie"*/, v2);
    byte_4A07CDD = 1;
  }
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
  persistentDataPath = UnityEngine_Application__get_persistentDataPath(0LL);
  return System_String__Concat_61419468(persistentDataPath, (System_String_o *)StringLiteral_1178/*"/extend-data/movie"*/, 0LL);
}


System_String_o *__fastcall MovieFileMerge__GetLocalFolderPath(MovieFileMerge_o *this, const MethodInfo *method)
{
  MovieFileMerge_o *v2; // x19
  Il2CppObject *LocalDataPath; // x0

  v2 = this;
  if ( (byte_4A07CE9 & 1) == 0 )
  {
    this = (MovieFileMerge_o *)sub_1B686D4(&StringLiteral_24971/*"{0}/{1}"*/, method);
    byte_4A07CE9 = 1;
  }
  LocalDataPath = (Il2CppObject *)MovieFileMerge__GetLocalDataPath((const MethodInfo *)this);
  return System_String__Format_61433840(
           (System_String_o *)StringLiteral_24971/*"{0}/{1}"*/,
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

  if ( (byte_4A07CEA & 1) == 0 )
  {
    sub_1B686D4(&Crc32_TypeInfo, method);
    sub_1B686D4(&Method_System_Collections_Generic_Dictionary_string__uint__Add__, v3);
    sub_1B686D4(&Method_System_Collections_Generic_Dictionary_string__uint__GetEnumerator__, v4);
    sub_1B686D4(&Method_System_Collections_Generic_Dictionary_string__uint___ctor__, v5);
    sub_1B686D4(&System_Collections_Generic_Dictionary_string__uint__TypeInfo, v6);
    sub_1B686D4(&Method_System_Collections_Generic_Dictionary_Enumerator_string__uint__Dispose__, v7);
    sub_1B686D4(&Method_System_Collections_Generic_Dictionary_Enumerator_string__uint__MoveNext__, v8);
    sub_1B686D4(&Method_System_Collections_Generic_Dictionary_Enumerator_string__uint__get_Current__, v9);
    sub_1B686D4(&Method_System_Collections_Generic_KeyValuePair_string__uint__get_Key__, v10);
    sub_1B686D4(&Method_System_Collections_Generic_KeyValuePair_string__uint__get_Value__, v11);
    sub_1B686D4(&StringLiteral_24971/*"{0}/{1}"*/, v12);
    byte_4A07CEA = 1;
  }
  memset(&v33, 0, sizeof(v33));
  v32 = 0;
  v13 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1B68920(System_Collections_Generic_Dictionary_string__uint__TypeInfo);
  System_Collections_Generic_Dictionary_object__uint____ctor(
    v13,
    (const MethodInfo_319B120 *)Method_System_Collections_Generic_Dictionary_string__uint___ctor__);
  AllDownLoadFilePathCRCDictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.AllDownLoadFilePathCRCDictionary;
  if ( !AllDownLoadFilePathCRCDictionary )
    sub_1B68930(0LL, v14);
  System_Collections_Generic_Dictionary_object__uint___GetEnumerator(
    &v31,
    AllDownLoadFilePathCRCDictionary,
    (const MethodInfo_319BEC4 *)Method_System_Collections_Generic_Dictionary_string__uint__GetEnumerator__);
  v33 = v31;
  while ( System_Collections_Generic_Dictionary_Enumerator_object__uint___MoveNext(
            &v33,
            (const MethodInfo_328B2C8 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__uint__MoveNext__) )
  {
    key = v33.fields._current.fields.key;
    value = (uint32_t)v33.fields._current.fields.value;
    LocalFolderPath = (Il2CppObject *)MovieFileMerge__GetLocalFolderPath(this, v16);
    v20 = System_String__Format_61433840((System_String_o *)StringLiteral_24971/*"{0}/{1}"*/, LocalFolderPath, key, 0LL);
    v21 = System_IO_File__Exists(v20, 0LL);
    if ( !v21 )
      goto LABEL_11;
    AllBytes = System_IO_File__ReadAllBytes(v20, 0LL);
    v32 = value;
    if ( !Crc32_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
    v24 = Crc32__Compute(AllBytes, 0LL);
    if ( !System_UInt32__Equals_62349128((uint32_t)&v32, v24, 0LL) )
    {
      System_IO_File__Delete(v20, 0LL);
LABEL_11:
      if ( !v13 )
        sub_1B68930(v21, v22);
      System_Collections_Generic_Dictionary_object__uint___Add(
        v13,
        key,
        value,
        (const MethodInfo_319BAD4 *)Method_System_Collections_Generic_Dictionary_string__uint__Add__);
      Parent = System_IO_Directory__GetParent(v20, 0LL);
      v27 = Parent;
      if ( !Parent )
        sub_1B68930(0LL, v26);
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
    (const MethodInfo_328B3EC *)Method_System_Collections_Generic_Dictionary_Enumerator_string__uint__Dispose__);
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
  int32_t v23; // w3
  Il2CppObject *v24; // x1
  struct System_Object_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10
  Il2CppClass **v28; // x0
  System_Collections_Generic_List_Enumerator_object__o v30; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4A07CED & 1) == 0 )
  {
    sub_1B686D4(&Method_System_Collections_Generic_Dictionary_string__uint__get_Keys__, method);
    sub_1B686D4(&Method_System_Linq_Enumerable_ToList_string___, v3);
    sub_1B686D4(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__, v4);
    sub_1B686D4(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__, v5);
    sub_1B686D4(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__, v6);
    sub_1B686D4(&Method_System_Collections_Generic_List_string__Add__, v7);
    sub_1B686D4(&Method_System_Collections_Generic_List_string__GetEnumerator__, v8);
    sub_1B686D4(&Method_System_Collections_Generic_List_string___ctor__, v9);
    sub_1B686D4(&System_Collections_Generic_List_string__TypeInfo, v10);
    sub_1B686D4(&StringLiteral_24971/*"{0}/{1}"*/, v11);
    byte_4A07CED = 1;
  }
  memset(&v30, 0, sizeof(v30));
  v12 = (System_Collections_Generic_List_object__o *)sub_1B68920(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_34BBA44 *)Method_System_Collections_Generic_List_string___ctor__);
  LocalFolderPath = MovieFileMerge__GetLocalFolderPath(this, v13);
  if ( System_IO_Directory__Exists(LocalFolderPath, 0LL) )
  {
    AllDownLoadFilePathCRCDictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.AllDownLoadFilePathCRCDictionary;
    if ( !AllDownLoadFilePathCRCDictionary
      || (Keys = System_Collections_Generic_Dictionary_object__uint___get_Keys(
                   AllDownLoadFilePathCRCDictionary,
                   (const MethodInfo_319B7B4 *)Method_System_Collections_Generic_Dictionary_string__uint__get_Keys__),
          (AllDownLoadFilePathCRCDictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)System_Linq_Enumerable__ToList_object_((System_Collections_Generic_IEnumerable_TSource__o *)Keys, (const MethodInfo_2E85A94 *)Method_System_Linq_Enumerable_ToList_string___)) == 0LL) )
    {
      sub_1B68930(AllDownLoadFilePathCRCDictionary, v15);
    }
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v30,
      (System_Collections_Generic_List_object__o *)AllDownLoadFilePathCRCDictionary,
      (const MethodInfo_34BCD70 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v30,
              (const MethodInfo_323A820 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
    {
      current = v30.fields._current;
      v20 = (Il2CppObject *)MovieFileMerge__GetLocalFolderPath(this, v18);
      v21 = (Il2CppObject *)System_String__Format_61433840((System_String_o *)StringLiteral_24971/*"{0}/{1}"*/, v20, current, 0LL);
      v24 = v21;
      if ( !v12 )
        sub_1B68930(v21, v21);
      items = v12->fields._items;
      v26 = Method_System_Collections_Generic_List_string__Add__;
      ++v12->fields._version;
      if ( !items )
        sub_1B68930(v21, v21);
      size = v12->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v12,
          v21,
          *(const MethodInfo_34BC278 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
      }
      else
      {
        v28 = &items->obj.klass + size;
        v12->fields._size = size + 1;
        v28[4] = (Il2CppClass *)v24;
        sub_1B68678((ServantStatusBattleListViewItem_o *)(v28 + 4), (int32_t)v24, v22, v23);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v30,
      (const MethodInfo_323A81C *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
  }
  return (System_Collections_Generic_List_string__o *)v12;
}


double __fastcall MovieFileMerge__GetTotalRequireSize(MovieFileMerge_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__uint__o *AllDownLoadFilePathCRCDictionary; // x0
  System_Collections_Generic_Dictionary_TKey__TValue__o *RequireDownLoadFilePathCRCDictionary; // x8

  if ( (byte_4A07CDE & 1) == 0 )
  {
    sub_1B686D4(&Method_System_Collections_Generic_Dictionary_string__uint__get_Count__, method);
    byte_4A07CDE = 1;
  }
  AllDownLoadFilePathCRCDictionary = this->fields.AllDownLoadFilePathCRCDictionary;
  if ( !AllDownLoadFilePathCRCDictionary
    || (AllDownLoadFilePathCRCDictionary = (struct System_Collections_Generic_Dictionary_string__uint__o *)System_Collections_Generic_Dictionary_object__uint___get_Count((System_Collections_Generic_Dictionary_TKey__TValue__o *)AllDownLoadFilePathCRCDictionary, (const MethodInfo_319B7A4 *)Method_System_Collections_Generic_Dictionary_string__uint__get_Count__),
        (RequireDownLoadFilePathCRCDictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.RequireDownLoadFilePathCRCDictionary) == 0LL) )
  {
    sub_1B68930(AllDownLoadFilePathCRCDictionary, method);
  }
  return (double)((System_Collections_Generic_Dictionary_object__uint___get_Count(
                     RequireDownLoadFilePathCRCDictionary,
                     (const MethodInfo_319B7A4 *)Method_System_Collections_Generic_Dictionary_string__uint__get_Count__)
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
  int32_t v16; // w3
  System_Collections_Generic_Dictionary_TKey__TValue__o *RequireDownLoadFilePathCRCDictionary; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  System_Collections_Generic_Dictionary_TKey__TValue__o *v20; // x22
  int32_t v21; // w2
  int32_t v22; // w3
  int32_t v23; // w2
  int32_t v24; // w3
  __int64 v25; // x0
  __int64 v26; // x1
  int32_t v27; // w2
  int32_t v28; // w3
  struct System_String_o *FileName; // x0
  int32_t v30; // w2
  int32_t v31; // w3
  const MethodInfo *v32; // x1
  Il2CppObject *LocalFolderPath; // x0
  struct System_String_o *v34; // x0
  int32_t v35; // w2
  int32_t v36; // w3
  const MethodInfo *v37; // x1
  Il2CppObject *v38; // x0
  struct System_String_o *v39; // x0
  int32_t v40; // w2
  int32_t v41; // w3
  const MethodInfo *v42; // x1
  System_String_o *v43; // x0
  FileMergeAndSplit_c *v44; // x8
  Il2CppObject *v45; // x20
  struct System_String_o *v46; // x0
  int32_t v47; // w2
  int32_t v48; // w3

  v3 = assetFolderURL;
  if ( (byte_4A07CE4 & 1) == 0 )
  {
    sub_1B686D4(&Method_System_Collections_Generic_Dictionary_string__uint__Clear__, assetFolderURL);
    sub_1B686D4(&Method_System_Collections_Generic_Dictionary_string__uint___ctor__, v5);
    sub_1B686D4(&System_Collections_Generic_Dictionary_string__uint__TypeInfo, v6);
    sub_1B686D4(&FileMergeAndSplit_TypeInfo, v7);
    sub_1B686D4(&System_IO_Path_TypeInfo, v8);
    sub_1B686D4(&StringLiteral_24971/*"{0}/{1}"*/, v9);
    sub_1B686D4(&StringLiteral_24967/*"{0}/SplitFile"*/, v10);
    sub_1B686D4(&StringLiteral_1123/*"/"*/, v11);
    sub_1B686D4(&StringLiteral_24973/*"{0}/{1}.usm"*/, v12);
    byte_4A07CE4 = 1;
  }
  AllDownLoadFilePathCRCDictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.AllDownLoadFilePathCRCDictionary;
  if ( AllDownLoadFilePathCRCDictionary )
  {
    System_Collections_Generic_Dictionary_object__uint___Clear(
      AllDownLoadFilePathCRCDictionary,
      (const MethodInfo_319BC5C *)Method_System_Collections_Generic_Dictionary_string__uint__Clear__);
  }
  else
  {
    v14 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1B68920(System_Collections_Generic_Dictionary_string__uint__TypeInfo);
    System_Collections_Generic_Dictionary_object__uint____ctor(
      v14,
      (const MethodInfo_319B120 *)Method_System_Collections_Generic_Dictionary_string__uint___ctor__);
    this->fields.AllDownLoadFilePathCRCDictionary = (struct System_Collections_Generic_Dictionary_string__uint__o *)v14;
    sub_1B68678(
      (ServantStatusBattleListViewItem_o *)&this->fields.AllDownLoadFilePathCRCDictionary,
      (int32_t)v14,
      v15,
      v16);
  }
  RequireDownLoadFilePathCRCDictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.RequireDownLoadFilePathCRCDictionary;
  if ( RequireDownLoadFilePathCRCDictionary )
  {
    System_Collections_Generic_Dictionary_object__uint___Clear(
      RequireDownLoadFilePathCRCDictionary,
      (const MethodInfo_319BC5C *)Method_System_Collections_Generic_Dictionary_string__uint__Clear__);
  }
  else
  {
    v20 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1B68920(System_Collections_Generic_Dictionary_string__uint__TypeInfo);
    System_Collections_Generic_Dictionary_object__uint____ctor(
      v20,
      (const MethodInfo_319B120 *)Method_System_Collections_Generic_Dictionary_string__uint___ctor__);
    this->fields.RequireDownLoadFilePathCRCDictionary = (struct System_Collections_Generic_Dictionary_string__uint__o *)v20;
    sub_1B68678(
      (ServantStatusBattleListViewItem_o *)&this->fields.RequireDownLoadFilePathCRCDictionary,
      (int32_t)v20,
      v21,
      v22);
  }
  this->fields.downloadProgress = 0;
  this->fields.isDownloadCancel = 0;
  this->fields.mergeClass = 0LL;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.mergeClass, 0, v18, v19);
  this->fields.crcCheckerClass = 0LL;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.crcCheckerClass, 0, v23, v24);
  if ( !v3 )
    sub_1B68930(v25, v26);
  if ( System_String__EndsWith(v3, (System_String_o *)StringLiteral_1123/*"/"*/, 0LL) )
    v3 = System_String__TrimEnd_61449360(v3, 0x2Fu, 0LL);
  this->fields.assetFolderURL = v3;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.assetFolderURL, (int32_t)v3, v27, v28);
  if ( !System_IO_Path_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_IO_Path_TypeInfo);
  FileName = System_IO_Path__GetFileName(v3, 0LL);
  this->fields.assetFolder = FileName;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.assetFolder, (int32_t)FileName, v30, v31);
  LocalFolderPath = (Il2CppObject *)MovieFileMerge__GetLocalFolderPath(this, v32);
  v34 = System_String__Format((System_String_o *)StringLiteral_24967/*"{0}/SplitFile"*/, LocalFolderPath, 0LL);
  this->fields.outputSplitFileFolder = v34;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.outputSplitFileFolder, (int32_t)v34, v35, v36);
  v38 = (Il2CppObject *)MovieFileMerge__GetLocalFolderPath(this, v37);
  v39 = System_String__Format_61433840(
          (System_String_o *)StringLiteral_24973/*"{0}/{1}.usm"*/,
          v38,
          (Il2CppObject *)this->fields.assetFolder,
          0LL);
  this->fields.outputMergeFile = v39;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.outputMergeFile, (int32_t)v39, v40, v41);
  v43 = MovieFileMerge__GetLocalFolderPath(this, v42);
  v44 = FileMergeAndSplit_TypeInfo;
  v45 = (Il2CppObject *)v43;
  if ( !FileMergeAndSplit_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FileMergeAndSplit_TypeInfo);
    v44 = FileMergeAndSplit_TypeInfo;
  }
  v46 = System_String__Format_61433840(
          (System_String_o *)StringLiteral_24971/*"{0}/{1}"*/,
          v45,
          (Il2CppObject *)v44->static_fields->PathCRCFileName,
          0LL);
  this->fields.outputMergeFileCRC = v46;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.outputMergeFileCRC, (int32_t)v46, v47, v48);
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
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_4A07CE7 & 1) == 0 )
  {
    sub_1B686D4(&MovieFileMerge__Merge_d__34_TypeInfo, method);
    byte_4A07CE7 = 1;
  }
  v3 = sub_1B68920(MovieFileMerge__Merge_d__34_TypeInfo);
  MovieFileMerge__Merge_d__34___ctor((MovieFileMerge__Merge_d__34_o *)v3, 0, 0LL);
  if ( !v3 )
    sub_1B68930(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_1B68678((ServantStatusBattleListViewItem_o *)(v3 + 32), (int32_t)this, v6, v7);
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
  int32_t v7; // w2
  int32_t v8; // w3

  if ( (byte_4A07CE3 & 1) == 0 )
  {
    sub_1B686D4(&MovieFileMerge__PlayCRIMovie_d__30_TypeInfo, filePath);
    byte_4A07CE3 = 1;
  }
  v4 = sub_1B68920(MovieFileMerge__PlayCRIMovie_d__30_TypeInfo);
  MovieFileMerge__PlayCRIMovie_d__30___ctor((MovieFileMerge__PlayCRIMovie_d__30_o *)v4, 0, 0LL);
  if ( !v4 )
    sub_1B68930(v5, v6);
  *(_QWORD *)(v4 + 32) = filePath;
  sub_1B68678((ServantStatusBattleListViewItem_o *)(v4 + 32), (int32_t)filePath, v7, v8);
  return (System_Collections_IEnumerator_o *)v4;
}


System_Collections_IEnumerator_o *__fastcall MovieFileMerge__PlayMP4(MovieFileMerge_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_4A07CE1 & 1) == 0 )
  {
    sub_1B686D4(&MovieFileMerge__PlayMP4_d__28_TypeInfo, method);
    byte_4A07CE1 = 1;
  }
  v3 = sub_1B68920(MovieFileMerge__PlayMP4_d__28_TypeInfo);
  MovieFileMerge__PlayMP4_d__28___ctor((MovieFileMerge__PlayMP4_d__28_o *)v3, 0, 0LL);
  if ( !v3 )
    sub_1B68930(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_1B68678((ServantStatusBattleListViewItem_o *)(v3 + 32), (int32_t)this, v6, v7);
  return (System_Collections_IEnumerator_o *)v3;
}


System_Collections_IEnumerator_o *__fastcall MovieFileMerge__PlayMP4_37495808(
        MovieFileMerge_o *this,
        System_String_o *filePath,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1
  int32_t v9; // w2
  int32_t v10; // w3
  int32_t v11; // w2
  int32_t v12; // w3

  if ( (byte_4A07CE2 & 1) == 0 )
  {
    sub_1B686D4(&MovieFileMerge__PlayMP4_d__29_TypeInfo, filePath);
    byte_4A07CE2 = 1;
  }
  v6 = sub_1B68920(MovieFileMerge__PlayMP4_d__29_TypeInfo);
  MovieFileMerge__PlayMP4_d__29___ctor((MovieFileMerge__PlayMP4_d__29_o *)v6, 0, 0LL);
  if ( !v6 )
    sub_1B68930(v7, v8);
  *(_QWORD *)(v6 + 40) = this;
  sub_1B68678((ServantStatusBattleListViewItem_o *)(v6 + 40), (int32_t)this, v9, v10);
  *(_QWORD *)(v6 + 32) = filePath;
  sub_1B68678((ServantStatusBattleListViewItem_o *)(v6 + 32), (int32_t)filePath, v11, v12);
  return (System_Collections_IEnumerator_o *)v6;
}


void __fastcall MovieFileMerge__Reboot(MovieFileMerge_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Networking_UnityWebRequest_o *v5; // x0
  ServantStatusBattleListViewItem_o *p_loader; // x19
  struct UnityEngine_Networking_UnityWebRequest_o *loader; // t1
  int32_t v8; // w2
  int32_t v9; // w3
  ManagementManager_c *v10; // x0
  Il2CppObject *Instance; // x0
  __int64 v12; // x1

  if ( (byte_4A07CEF & 1) == 0 )
  {
    sub_1B686D4(&UnityEngine_Application_TypeInfo, method);
    sub_1B686D4(&ManagementManager_TypeInfo, v3);
    sub_1B686D4(&Method_SingletonMonoBehaviour_ManagementManager__get_Instance__, v4);
    byte_4A07CEF = 1;
  }
  loader = this->fields.loader;
  p_loader = (ServantStatusBattleListViewItem_o *)&this->fields.loader;
  v5 = loader;
  if ( loader )
  {
    UnityEngine_Networking_UnityWebRequest__Dispose(v5, 0LL);
    p_loader->klass = 0LL;
    sub_1B68678(p_loader, 0, v8, v9);
  }
  if ( !ManagementManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
  if ( !byte_4A07CF2 )
  {
    sub_1B686D4(&ManagementManager_TypeInfo, method);
    byte_4A07CF2 = 1;
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
    UnityEngine_Application__Quit_68965772(0LL);
  }
  else
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
    if ( !Instance )
      sub_1B68930(0LL, v12);
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
  if ( (byte_4A07CF1 & 1) == 0 )
  {
    sub_1B686D4(&ErrorDialog_ClickDelegate_TypeInfo, e);
    sub_1B686D4(&LocalizationManager_TypeInfo, v5);
    sub_1B686D4(&Method_MovieFileMerge_EndMergeRetryDialog__, v6);
    sub_1B686D4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_1B686D4(&StringLiteral_5303/*"Disk full"*/, v8);
    sub_1B686D4(&StringLiteral_9189/*"NETWORK_ERROR_DISK_FULL"*/, v9);
    this = (MovieFileMerge_o *)sub_1B686D4(&StringLiteral_1/*""*/, v10);
    byte_4A07CF1 = 1;
  }
  if ( !e )
    goto LABEL_12;
  this = (MovieFileMerge_o *)((__int64 (__fastcall *)(System_Exception_o *, Il2CppMethodPointer, const MethodInfo *))e->klass->vtable._5_get_Message.method)(
                               e,
                               e->klass->vtable._6_get_Data.methodPtr,
                               method);
  if ( !this )
    goto LABEL_12;
  if ( !System_String__StartsWith((System_String_o *)this, (System_String_o *)StringLiteral_5303/*"Disk full"*/, 0LL) )
  {
    v15 = (System_String_o *)((__int64 (__fastcall *)(System_Exception_o *, Il2CppMethodPointer))e->klass->vtable._5_get_Message.method)(
                               e,
                               e->klass->vtable._6_get_Data.methodPtr);
    goto LABEL_11;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v12 = LocalizationManager__Get((System_String_o *)StringLiteral_9189/*"NETWORK_ERROR_DISK_FULL"*/, 0LL);
  v13 = (ErrorDialog_ClickDelegate_o *)sub_1B68920(ErrorDialog_ClickDelegate_TypeInfo);
  ErrorDialog_ClickDelegate___ctor(v13, v4, Method_MovieFileMerge_EndMergeRetryDialog__, 0LL);
  if ( !Instance )
LABEL_12:
    sub_1B68930(this, e);
  CommonUI__OpenErrorDialog((CommonUI_o *)Instance, (System_String_o *)StringLiteral_1/*""*/, v12, v13, 1, 0LL);
  v15 = (System_String_o *)StringLiteral_5303/*"Disk full"*/;
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
  MovieFileMerge__CRCDownloadAndCheck_d__32_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  int32_t _1__state; // w8
  struct MovieFileMerge_o *_4__this; // x20
  System_Collections_IEnumerator_o *v8; // x0
  ServantStatusBattleListViewItem_o *p__2__current; // x19
  int32_t v10; // w2
  int32_t v11; // w3
  bool result; // w0
  System_Collections_Generic_Dictionary_string__uint__o *NeedDownloadDictionary; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  System_Collections_Generic_Dictionary_string__uint__o *Dic; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *outputMergeFile; // x21
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x0
  System_Collections_Generic_List_uint__o *v21; // x22
  FileMergeAndSplit_CRCChecker_o *v22; // x23
  ServantStatusBattleListViewItem_o *p_crcCheckerClass; // x20
  int32_t v24; // w2
  int32_t v25; // w3
  System_Collections_IEnumerator_o *v26; // x0
  ServantStatusBattleListViewItem_o *v27; // x19
  int32_t v28; // w2
  int32_t v29; // w3

  v2 = this;
  if ( (byte_4A07CF3 & 1) == 0 )
  {
    sub_1B686D4(&FileMergeAndSplit_CRCChecker_TypeInfo, method);
    sub_1B686D4(&Method_System_Collections_Generic_Dictionary_string__uint__get_Values__, v3);
    sub_1B686D4(&Method_System_Linq_Enumerable_ToList_uint___, v4);
    this = (MovieFileMerge__CRCDownloadAndCheck_d__32_o *)sub_1B686D4(&FileMergeAndSplit_TypeInfo, v5);
    byte_4A07CF3 = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state == 2 )
  {
    v2->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_21;
    NeedDownloadDictionary = MovieFileMerge__GetNeedDownloadDictionary(_4__this, 0LL);
    _4__this->fields.RequireDownLoadFilePathCRCDictionary = NeedDownloadDictionary;
    sub_1B68678(
      (ServantStatusBattleListViewItem_o *)&_4__this->fields.RequireDownLoadFilePathCRCDictionary,
      (int32_t)NeedDownloadDictionary,
      v14,
      v15);
    if ( MovieFileMerge__IsCRCMatch(_4__this, 0LL) )
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
      this = (MovieFileMerge__CRCDownloadAndCheck_d__32_o *)FileMergeAndSplit_TypeInfo;
      if ( !FileMergeAndSplit_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(FileMergeAndSplit_TypeInfo);
      if ( _4__this )
      {
        v8 = MovieFileMerge__Download(_4__this, FileMergeAndSplit_TypeInfo->static_fields->PathCRCFileName, 0, 0LL);
        v2->fields.__2__current = (Il2CppObject *)v8;
        p__2__current = (ServantStatusBattleListViewItem_o *)&v2->fields.__2__current;
        sub_1B68678(p__2__current, (int32_t)v8, v10, v11);
        result = 1;
        *(_DWORD *)&p__2__current[-1].fields.isMine = 1;
        return result;
      }
LABEL_21:
      sub_1B68930(this, method);
    }
    return 0;
  }
  v2->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_21;
  Dic = MovieFileMerge__CreateDic(_4__this, _4__this->fields.outputMergeFileCRC, 0LL);
  _4__this->fields.AllDownLoadFilePathCRCDictionary = Dic;
  sub_1B68678(
    (ServantStatusBattleListViewItem_o *)&_4__this->fields.AllDownLoadFilePathCRCDictionary,
    (int32_t)Dic,
    v17,
    v18);
  this = (MovieFileMerge__CRCDownloadAndCheck_d__32_o *)_4__this->fields.AllDownLoadFilePathCRCDictionary;
  if ( !this )
    goto LABEL_21;
  outputMergeFile = _4__this->fields.outputMergeFile;
  Values = System_Collections_Generic_Dictionary_object__uint___get_Values(
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)this,
             (const MethodInfo_319B904 *)Method_System_Collections_Generic_Dictionary_string__uint__get_Values__);
  v21 = (System_Collections_Generic_List_uint__o *)System_Linq_Enumerable__ToList_uint_(
                                                     (System_Collections_Generic_IEnumerable_TSource__o *)Values,
                                                     (const MethodInfo_2E85B8C *)Method_System_Linq_Enumerable_ToList_uint___);
  v22 = (FileMergeAndSplit_CRCChecker_o *)sub_1B68920(FileMergeAndSplit_CRCChecker_TypeInfo);
  FileMergeAndSplit_CRCChecker___ctor(v22, outputMergeFile, v21, 0LL);
  _4__this->fields.crcCheckerClass = v22;
  p_crcCheckerClass = (ServantStatusBattleListViewItem_o *)&_4__this->fields.crcCheckerClass;
  sub_1B68678(p_crcCheckerClass, (int32_t)v22, v24, v25);
  this = (MovieFileMerge__CRCDownloadAndCheck_d__32_o *)p_crcCheckerClass->klass;
  if ( !p_crcCheckerClass->klass )
    goto LABEL_21;
  v26 = FileMergeAndSplit_CRCChecker__Run((FileMergeAndSplit_CRCChecker_o *)this, 0LL);
  v2->fields.__2__current = (Il2CppObject *)v26;
  v27 = (ServantStatusBattleListViewItem_o *)&v2->fields.__2__current;
  sub_1B68678(v27, (int32_t)v26, v28, v29);
  *(_DWORD *)&v27[-1].fields.isMine = 2;
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

  v2 = sub_1B686E8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B68920(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B686E8(&Method_MovieFileMerge__CRCDownloadAndCheck_d__32_System_Collections_IEnumerator_Reset__);
  sub_1B687FC(v3, v4);
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
  ServantStatusBattleListViewItem_o *p__7__wrap1; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  _BOOL8 v16; // x0
  const MethodInfo *v17; // x1
  MovieFileMerge__DownloadMovie_d__33_o *v18; // x8
  bool result; // w0
  __int64 v20; // x0
  __int64 v21; // x1
  MovieFileMerge__DownloadMovie_d__33_o *v22; // x8
  Il2CppObject *v23; // x1
  MovieFileMerge__DownloadMovie_d__33_o *v24; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v27[2]; // [xsp+8h] [xbp-88h] BYREF
  MovieFileMerge__DownloadMovie_d__33_o **v28; // [xsp+68h] [xbp-28h]
  MovieFileMerge__DownloadMovie_d__33_o *v29; // [xsp+78h] [xbp-18h] BYREF

  v29 = this;
  v2 = this;
  if ( (byte_4A07CF5 & 1) == 0 )
  {
    sub_1B686D4(&Method_System_Collections_Generic_Dictionary_string__uint__GetEnumerator__, method);
    sub_1B686D4(&Method_System_Collections_Generic_Dictionary_Enumerator_string__uint__MoveNext__, v3);
    sub_1B686D4(&Method_System_Collections_Generic_Dictionary_Enumerator_string__uint__get_Current__, v4);
    sub_1B686D4(&Method_System_Collections_Generic_KeyValuePair_string__uint__get_Key__, v5);
    this = (MovieFileMerge__DownloadMovie_d__33_o *)sub_1B686D4(
                                                      &Method_System_Collections_Generic_KeyValuePair_string__uint__get_Value__,
                                                      v6);
    byte_4A07CF5 = 1;
  }
  v28 = &v29;
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state != 1 )
  {
    if ( _1__state )
      return 0;
    v2->fields.__1__state = -1;
    if ( !_4__this )
      sub_1B68930(this, method);
    RequireDownLoadFilePathCRCDictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)_4__this->fields.RequireDownLoadFilePathCRCDictionary;
    _4__this->fields.isDownloading = 1;
    _4__this->fields.downloadProgress = 0;
    if ( !RequireDownLoadFilePathCRCDictionary )
      sub_1B68930(0LL, method);
    System_Collections_Generic_Dictionary_object__uint___GetEnumerator(
      v27,
      RequireDownLoadFilePathCRCDictionary,
      (const MethodInfo_319BEC4 *)Method_System_Collections_Generic_Dictionary_string__uint__GetEnumerator__);
    v10 = v29;
    v11 = *(_OWORD *)&v27[0].fields._dictionary;
    current = v27[0].fields._current;
    p__7__wrap1 = (ServantStatusBattleListViewItem_o *)&v29->fields.__7__wrap1;
    v27[1] = v27[0];
    *(_QWORD *)&v29->fields.__7__wrap1.fields._getEnumeratorRetType = *(_QWORD *)&v27[0].fields._getEnumeratorRetType;
    v10->fields.__7__wrap1.fields._current = current;
    *(_OWORD *)&v10->fields.__7__wrap1.fields._dictionary = v11;
    sub_1B68678(p__7__wrap1, 0, v14, v15);
    v2 = v29;
  }
  v2->fields.__1__state = -3;
  v16 = System_Collections_Generic_Dictionary_Enumerator_object__uint___MoveNext(
          (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v2->fields.__7__wrap1,
          (const MethodInfo_328B2C8 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__uint__MoveNext__);
  v18 = v29;
  if ( v16 )
  {
    if ( !_4__this )
      sub_1B68930(v16, v17);
    if ( _4__this->fields.isDownloadCancel )
    {
      _4__this->fields.isDownloading = 0;
      MovieFileMerge__DownloadMovie_d__33____m__Finally1(v18, v17);
      return 0;
    }
    else
    {
      v23 = (Il2CppObject *)MovieFileMerge__Download(
                              _4__this,
                              (System_String_o *)v29->fields.__7__wrap1.fields._current.fields.key,
                              (uint32_t)v29->fields.__7__wrap1.fields._current.fields.value,
                              0LL);
      v24 = v29;
      v29->fields.__2__current = v23;
      sub_1B68678((ServantStatusBattleListViewItem_o *)&v24->fields.__2__current, (int32_t)v23, v25, v26);
      result = 1;
      v29->fields.__1__state = 1;
    }
  }
  else
  {
    MovieFileMerge__DownloadMovie_d__33____m__Finally1(v29, v17);
    v22 = v29;
    *(_QWORD *)&v29->fields.__7__wrap1.fields._getEnumeratorRetType = 0LL;
    v22->fields.__7__wrap1.fields._current = 0u;
    *(_OWORD *)&v22->fields.__7__wrap1.fields._dictionary = 0u;
    if ( !_4__this )
      sub_1B68930(v20, v21);
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

  v2 = sub_1B686E8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B68920(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B686E8(&Method_MovieFileMerge__DownloadMovie_d__33_System_Collections_IEnumerator_Reset__);
  sub_1B687FC(v3, v4);
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
  if ( (byte_4A07CF6 & 1) == 0 )
  {
    sub_1B686D4(&Method_System_Collections_Generic_Dictionary_Enumerator_string__uint__Dispose__, method);
    byte_4A07CF6 = 1;
  }
  this->fields.__1__state = -1;
  System_Collections_Generic_Dictionary_Enumerator_object__uint___Dispose(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&this->fields.__7__wrap1,
    (const MethodInfo_328B3EC *)Method_System_Collections_Generic_Dictionary_Enumerator_string__uint__Dispose__);
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
  int32_t v2; // w2
  int32_t v3; // w3
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
  int32_t v39; // w3
  Il2CppObject *LocalFolderPath; // x0
  System_String_o *v41; // x0
  int32_t v42; // w2
  int32_t v43; // w3
  int32_t v44; // w2
  int32_t v45; // w3
  uint32_t downloadingCRC; // w8
  int32_t v47; // w2
  int32_t v48; // w3
  MovieFileMerge__Download_d__40_o *v49; // x21
  int32_t v50; // w1
  int32_t v51; // w2
  int32_t v52; // w3
  struct System_String_o *v53; // x1
  int32_t v54; // w2
  int32_t v55; // w3
  int32_t v56; // w1
  int32_t v57; // w2
  int32_t v58; // w3
  int32_t v59; // w2
  int32_t v60; // w3
  int32_t v61; // w1
  int32_t v62; // w2
  int32_t v63; // w3
  int32_t v64; // w2
  int32_t v65; // w3
  int32_t v66; // w1
  System_String_o *v67; // x0
  int32_t v68; // w2
  int32_t v69; // w3
  ManagementManager_c *v70; // x0
  _BOOL4 isDuringStartup; // w22
  Il2CppObject *Instance; // x21
  System_String_o *v73; // x22
  ErrorDialog_ClickDelegate_o *v74; // x23
  System_Byte_array *readData_5__5; // x20
  uint32_t v76; // w0
  Il2CppObject **p__2__current; // x19
  int32_t v78; // w2
  int32_t v79; // w3
  int v80; // w8
  UnityEngine_WaitForEndOfFrame_o *v81; // x20
  int32_t v82; // w2
  int32_t v83; // w3
  float unscaledTime; // s8
  UnityEngine_WaitForEndOfFrame_o *v85; // x21
  int32_t v86; // w2
  int32_t v87; // w3
  MovieFileMerge__Download_d__40_o **p_loader; // x22
  int32_t v89; // w2
  int32_t v90; // w3
  struct System_String_o **p_errorCode_5__11; // x21
  int32_t v92; // w2
  int32_t v93; // w3
  System_String_o *error; // x0
  System_Byte_array *data; // x0
  int32_t v96; // w2
  int32_t v97; // w3
  int32_t v98; // w2
  int32_t v99; // w3
  UnityEngine_WaitForEndOfFrame_o *v100; // x20
  int32_t v101; // w2
  int32_t v102; // w3
  int32_t v103; // w2
  int32_t v104; // w3
  System_String_o *v105; // x0
  int32_t v106; // w2
  int32_t v107; // w3
  int32_t v108; // w1
  System_IO_DirectoryInfo_o *Parent; // x0
  __int64 v110; // x1
  System_IO_DirectoryInfo_o *v111; // x21
  System_String_o *v112; // x0
  System_String_o *v113; // x21
  int64_t FreeSize; // x21
  ManagerConfig_c *v115; // x0
  ManagerConfig_c *v116; // x0
  Il2CppObject *v117; // x0
  System_String_o *errorCode_5__11; // x21
  CommonUI_o *v119; // x22
  ErrorDialog_ClickDelegate_o *v120; // x23
  UnityEngine_WaitForEndOfFrame_o *v121; // x20
  int32_t v122; // w2
  int32_t v123; // w3
  int autoRetryCount_5__3; // w21
  ManagerConfig_c *v125; // x0
  float DOWNLOAD_RETRY_DELAY_TIME; // s8
  UnityEngine_WaitForSeconds_o *v127; // x20
  int32_t v128; // w2
  int32_t v129; // w3
  Il2CppObject *v130; // x21
  ServantStatusBattleListViewItem_o *v131; // x20
  MovieFileMerge__Download_d__40_o *loader; // t1
  int32_t v133; // w2
  int32_t v134; // w3
  int32_t v135; // w2
  int32_t v136; // w3
  ServantStatusBattleListViewItem_o *p_readData_5__5; // x0
  struct UnityEngine_Networking_UnityWebRequest_o **v138; // x21
  int32_t v139; // w2
  int32_t v140; // w3
  int32_t v141; // w2
  int32_t v142; // w3
  ManagerConfig_c *v143; // x0
  Il2CppObject *v144; // x0
  System_String_o *v145; // x21
  CommonUI_o *v146; // x22
  ErrorDialog_ClickDelegate_o *v147; // x23
  UnityEngine_WaitForSeconds_o *v148; // x20
  int32_t v149; // w2
  int32_t v150; // w3
  System_String_o *v151; // x22
  ErrorDialog_ClickDelegate_o *v152; // x23
  UnityEngine_WaitForEndOfFrame_o *v153; // x20
  int32_t v154; // w2
  int32_t v155; // w3
  int32_t v156; // w2
  int32_t v157; // w3
  int32_t v158; // w2
  int32_t v159; // w3
  int32_t v160; // w2
  int32_t v161; // w3
  float downloadProgress; // s0
  float loadProgress_5__7; // s9
  float v164; // s8
  float v165; // s0
  bool v166; // zf
  float v167; // s8
  System_String_o *downloadingURL; // x22
  System_String_o *v169; // x0
  System_String_o *v170; // x0
  int32_t v171; // w2
  int32_t v172; // w3
  System_Collections_Generic_Dictionary_string__string__o *ResponseHeaders; // x0
  System_Collections_Generic_Dictionary_object__object__o *v174; // x22
  Il2CppObject *v175; // x22
  MovieFileMerge__Download_d__40_o *v176; // x22
  int v177; // w8
  System_String_o *v178; // x23
  System_String_o *v179; // x0
  System_String_o *v180; // x0
  __int64 v181; // x1
  ManagementManager_c *v182; // x0
  _BOOL4 v183; // w23
  Il2CppObject *v184; // x0
  struct System_String_o *errorLocalizeCode_5__12; // x8
  CommonUI_o *v186; // x22
  System_String_o *v187; // x21
  System_String_o *v188; // x23
  System_String_o *v189; // x23
  ErrorDialog_ClickDelegate_o *v190; // x24
  ManagerConfig_c *v191; // x0
  Il2CppObject *wait_5__8; // x1
  System_String_o *v193; // x23
  System_String_o *v194; // x23
  ErrorDialog_ClickDelegate_o *v195; // x24
  __int64 v196; // x0
  System_IO_IOException_o *v197; // x21
  System_String_o *v198; // x0
  __int64 v199; // x0
  UnityEngine_Networking_UnityWebRequest_o *v200; // x0
  ServantStatusBattleListViewItem_o *v201; // x20
  int32_t v202; // w2
  int32_t v203; // w3
  ServantStatusBattleListViewItem_o *v204; // x19
  int32_t v205; // w2
  int32_t v206; // w3
  System_Nullable_Vector2__o effectDistance; // [xsp+0h] [xbp-70h]
  System_Nullable_Vector2__o effectDistancea; // [xsp+0h] [xbp-70h]
  Il2CppObject *value; // [xsp+38h] [xbp-38h] BYREF

  v4 = this;
  if ( (byte_4A07CF4 & 1) == 0 )
  {
    sub_1B686D4(&char___TypeInfo, method);
    sub_1B686D4(&ErrorDialog_ClickDelegate_TypeInfo, v5);
    sub_1B686D4(&CommonServicePluginScript_TypeInfo, v6);
    sub_1B686D4(&Crc32_TypeInfo, v7);
    sub_1B686D4(&UnityEngine_Debug_TypeInfo, v8);
    sub_1B686D4(&Method_System_Collections_Generic_Dictionary_string__string__TryGetValue__, v9);
    sub_1B686D4(&Method_System_Collections_Generic_Dictionary_string__string__get_Count__, v10);
    sub_1B686D4(&LocalizationManager_TypeInfo, v11);
    sub_1B686D4(&ManagementManager_TypeInfo, v12);
    sub_1B686D4(&ManagerConfig_TypeInfo, v13);
    sub_1B686D4(&Method_MovieFileMerge_EndRetryDialog__, v14);
    sub_1B686D4(&Method_MovieFileMerge_EndWarningDialog__, v15);
    sub_1B686D4(&NetworkManager_TypeInfo, v16);
    sub_1B686D4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v17);
    sub_1B686D4(&string___TypeInfo, v18);
    sub_1B686D4(&UnityEngine_WaitForEndOfFrame_TypeInfo, v19);
    sub_1B686D4(&UnityEngine_WaitForSeconds_TypeInfo, v20);
    sub_1B686D4(&StringLiteral_7134/*"HTTP"*/, v21);
    sub_1B686D4(&StringLiteral_817/*")\n\n503 Auto retry count "*/, v22);
    sub_1B686D4(&StringLiteral_820/*")\nfile crc ("*/, v23);
    sub_1B686D4(&StringLiteral_1513/*"503"*/, v24);
    sub_1B686D4(&StringLiteral_2137/*"ASSET_LOADER_ERROR_BOOT_RETRY_MESSAGE"*/, v25);
    sub_1B686D4(&StringLiteral_15872/*"[FFFF80]Download error for debug"*/, v26);
    sub_1B686D4(&StringLiteral_24971/*"{0}/{1}"*/, v27);
    sub_1B686D4(&StringLiteral_12210/*"STATUS"*/, v28);
    sub_1B686D4(&StringLiteral_816/*")\n\n"*/, v29);
    sub_1B686D4(&StringLiteral_696/*"("*/, v30);
    sub_1B686D4(&StringLiteral_818/*")\n\nAssetBundle file check sum error\nlist crc ("*/, v31);
    sub_1B686D4(&StringLiteral_814/*")"*/, v32);
    sub_1B686D4(&StringLiteral_2138/*"ASSET_LOADER_ERROR_TIME_OVER_MESSAGE"*/, v33);
    sub_1B686D4(&StringLiteral_819/*")\n\nAssetBundle file download time over"*/, v34);
    this = (MovieFileMerge__Download_d__40_o *)sub_1B686D4(&StringLiteral_1/*""*/, v35);
    byte_4A07CF4 = 1;
  }
  value = 0LL;
  _4__this = v4->fields.__4__this;
  switch ( v4->fields.__1__state )
  {
    case 0:
      v4->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_177;
      v37 = System_String__Format_61433840(
              (System_String_o *)StringLiteral_24971/*"{0}/{1}"*/,
              (Il2CppObject *)_4__this->fields.assetFolderURL,
              (Il2CppObject *)v4->fields.fileName,
              0LL);
      _4__this->fields.downloadingURL = v37;
      sub_1B68678((ServantStatusBattleListViewItem_o *)&_4__this->fields.downloadingURL, (int32_t)v37, v38, v39);
      _4__this->fields.downloadingCRC = v4->fields.crc;
      LocalFolderPath = (Il2CppObject *)MovieFileMerge__GetLocalFolderPath(_4__this, 0LL);
      v41 = System_String__Format_61433840(
              (System_String_o *)StringLiteral_24971/*"{0}/{1}"*/,
              LocalFolderPath,
              (Il2CppObject *)v4->fields.fileName,
              0LL);
      v4->fields._dlFilePath_5__2 = v41;
      sub_1B68678((ServantStatusBattleListViewItem_o *)&v4->fields._dlFilePath_5__2, (int32_t)v41, v42, v43);
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
      v85 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B68920(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v85, 0LL);
      v4->fields._wait_5__8 = v85;
      sub_1B68678((ServantStatusBattleListViewItem_o *)&v4->fields._wait_5__8, (int32_t)v85, v86, v87);
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
        sub_1B68678((ServantStatusBattleListViewItem_o *)&_4__this->fields.loader, 0, v103, v104);
        LOBYTE(this) = 0;
        _4__this->fields.isDownloading = 0;
        return (char)this;
      }
      downloadProgress = UnityEngine_Networking_UnityWebRequest__get_downloadProgress(
                           (UnityEngine_Networking_UnityWebRequest_o *)this,
                           0LL);
      loadProgress_5__7 = v4->fields._loadProgress_5__7;
      v164 = downloadProgress;
      v165 = UnityEngine_Time__get_unscaledTime(0LL);
      v166 = v164 == loadProgress_5__7;
      v167 = v165;
      if ( !v166 )
      {
        v191 = ManagerConfig_TypeInfo;
        if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
          v191 = ManagerConfig_TypeInfo;
        }
        v4->fields._requestTime_5__6 = v167 + v191->static_fields->TIMEOUT;
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
          sub_1B68678((ServantStatusBattleListViewItem_o *)p__2__current, (int32_t)wait_5__8, v89, v90);
          v80 = 2;
          goto LABEL_119;
        }
        goto LABEL_177;
      }
      if ( v165 < v4->fields._requestTime_5__6 )
        goto LABEL_161;
LABEL_44:
      *(_WORD *)&v4->fields._isAutoRetry_5__9 = 0;
      v4->fields._errorCode_5__11 = 0LL;
      p_errorCode_5__11 = &v4->fields._errorCode_5__11;
      sub_1B68678((ServantStatusBattleListViewItem_o *)&v4->fields._errorCode_5__11, 0, v89, v90);
      v4->fields._errorLocalizeCode_5__12 = 0LL;
      sub_1B68678((ServantStatusBattleListViewItem_o *)&v4->fields._errorLocalizeCode_5__12, 0, v92, v93);
      this = *p_loader;
      if ( !*p_loader )
LABEL_177:
        sub_1B68930(this, method);
      if ( !UnityEngine_Networking_UnityWebRequest__get_isDone((UnityEngine_Networking_UnityWebRequest_o *)this, 0LL) )
      {
        v105 = System_String__Concat_61430728(
                 (System_String_o *)StringLiteral_696/*"("*/,
                 _4__this->fields.downloadingURL,
                 (System_String_o *)StringLiteral_819/*")\n\nAssetBundle file download time over"*/,
                 0LL);
        v108 = (int)v105;
        *p_errorCode_5__11 = v105;
LABEL_63:
        sub_1B68678((ServantStatusBattleListViewItem_o *)&v4->fields._errorCode_5__11, v108, v106, v107);
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
        sub_1B68678((ServantStatusBattleListViewItem_o *)&v4->fields._readData_5__5, (int32_t)data, v96, v97);
        v4->fields.__2__current = 0LL;
        p__2__current = &v4->fields.__2__current;
        sub_1B68678((ServantStatusBattleListViewItem_o *)p__2__current, 0, v98, v99);
        v80 = 3;
        goto LABEL_119;
      }
      this = (MovieFileMerge__Download_d__40_o *)_4__this->fields.loader;
      if ( !this )
        goto LABEL_177;
      downloadingURL = _4__this->fields.downloadingURL;
      v169 = UnityEngine_Networking_UnityWebRequest__get_error((UnityEngine_Networking_UnityWebRequest_o *)this, 0LL);
      v170 = System_String__Concat_61432732(
               (System_String_o *)StringLiteral_696/*"("*/,
               downloadingURL,
               (System_String_o *)StringLiteral_816/*")\n\n"*/,
               v169,
               0LL);
      *p_errorCode_5__11 = v170;
      sub_1B68678((ServantStatusBattleListViewItem_o *)&v4->fields._errorCode_5__11, (int32_t)v170, v171, v172);
      this = (MovieFileMerge__Download_d__40_o *)_4__this->fields.loader;
      if ( !this )
        goto LABEL_177;
      ResponseHeaders = UnityEngine_Networking_UnityWebRequest__GetResponseHeaders(
                          (UnityEngine_Networking_UnityWebRequest_o *)this,
                          0LL);
      if ( !ResponseHeaders )
        break;
      v174 = (System_Collections_Generic_Dictionary_object__object__o *)ResponseHeaders;
      if ( System_Collections_Generic_Dictionary_object__object___get_Count(
             (System_Collections_Generic_Dictionary_object__object__o *)ResponseHeaders,
             (const MethodInfo_3189838 *)Method_System_Collections_Generic_Dictionary_string__string__get_Count__) < 1
        || !System_Collections_Generic_Dictionary_object__object___TryGetValue(
              v174,
              (Il2CppObject *)StringLiteral_12210/*"STATUS"*/,
              &value,
              (const MethodInfo_318B374 *)Method_System_Collections_Generic_Dictionary_string__string__TryGetValue__) )
      {
        break;
      }
      v175 = value;
      this = (MovieFileMerge__Download_d__40_o *)sub_1B6877C(char___TypeInfo, 1LL);
      if ( !this )
        goto LABEL_177;
      method = (const MethodInfo *)this;
      if ( !LODWORD(this->fields.__2__current) )
        goto LABEL_169;
      LOWORD(this->fields.__4__this) = 32;
      if ( !v175 )
        goto LABEL_177;
      this = (MovieFileMerge__Download_d__40_o *)System_String__Split_61441860(
                                                   (System_String_o *)v175,
                                                   (System_Char_array *)this,
                                                   1,
                                                   0LL);
      if ( !this )
        goto LABEL_177;
      v176 = this;
      if ( SLODWORD(this->fields.__2__current) < 2 )
        break;
      this = (MovieFileMerge__Download_d__40_o *)this->fields.__4__this;
      if ( !this )
        goto LABEL_177;
      this = (MovieFileMerge__Download_d__40_o *)System_String__StartsWith(
                                                   (System_String_o *)this,
                                                   (System_String_o *)StringLiteral_7134/*"HTTP"*/,
                                                   0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
        break;
      if ( LODWORD(v176->fields.__2__current) <= 1 )
        goto LABEL_169;
      this = (MovieFileMerge__Download_d__40_o *)v176->fields.fileName;
      if ( !this )
        goto LABEL_177;
      if ( System_String__Equals_61427784((System_String_o *)this, (System_String_o *)StringLiteral_1513/*"503"*/, 0LL) )
      {
        v177 = v4->fields._autoRetryCount_5__3 + 1;
        v4->fields._isAutoRetry_5__9 = 1;
        v4->fields._autoRetryCount_5__3 = v177;
        v178 = _4__this->fields.downloadingURL;
        v179 = System_Int32__ToString((int)v4 + 64, 0LL);
        v180 = System_String__Concat_61432732(
                 (System_String_o *)StringLiteral_696/*"("*/,
                 v178,
                 (System_String_o *)StringLiteral_817/*")\n\n503 Auto retry count "*/,
                 v179,
                 0LL);
        v108 = (int)v180;
        v4->fields._errorCode_5__11 = v180;
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
      v76 = Crc32__Compute(readData_5__5, 0LL);
      v4->fields.__2__current = 0LL;
      p__2__current = &v4->fields.__2__current;
      *((_DWORD *)p__2__current + 24) = v76;
      sub_1B68678((ServantStatusBattleListViewItem_o *)p__2__current, 0, v78, v79);
      v80 = 4;
      goto LABEL_119;
    case 4:
      v4->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_177;
      downloadingCRC = _4__this->fields.downloadingCRC;
      if ( v4->fields._downloadCrc_5__13 != downloadingCRC && downloadingCRC )
      {
        this = (MovieFileMerge__Download_d__40_o *)sub_1B6877C(string___TypeInfo, 7LL);
        if ( !this )
          goto LABEL_177;
        v49 = this;
        if ( LODWORD(this->fields.__2__current) )
        {
          v50 = StringLiteral_696/*"("*/;
          this->fields.__4__this = (struct MovieFileMerge_o *)StringLiteral_696/*"("*/;
          sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.__4__this, v50, v47, v48);
          if ( LODWORD(v49->fields.__2__current) > 1 )
          {
            v53 = _4__this->fields.downloadingURL;
            v49->fields.fileName = v53;
            sub_1B68678((ServantStatusBattleListViewItem_o *)&v49->fields.fileName, (int32_t)v53, v51, v52);
            if ( LODWORD(v49->fields.__2__current) > 2 )
            {
              v56 = StringLiteral_818/*")\n\nAssetBundle file check sum error\nlist crc ("*/;
              *(_QWORD *)&v49->fields.crc = StringLiteral_818/*")\n\nAssetBundle file check sum error\nlist crc ("*/;
              sub_1B68678((ServantStatusBattleListViewItem_o *)&v49->fields.crc, v56, v54, v55);
              this = (MovieFileMerge__Download_d__40_o *)System_UInt32__ToString((int)_4__this + 96, 0LL);
              if ( LODWORD(v49->fields.__2__current) > 3 )
              {
                v49->fields._dlFilePath_5__2 = (struct System_String_o *)this;
                sub_1B68678((ServantStatusBattleListViewItem_o *)&v49->fields._dlFilePath_5__2, (int32_t)this, v57, v58);
                if ( LODWORD(v49->fields.__2__current) > 4 )
                {
                  v61 = StringLiteral_820/*")\nfile crc ("*/;
                  *(_QWORD *)&v49->fields._autoRetryCount_5__3 = StringLiteral_820/*")\nfile crc ("*/;
                  sub_1B68678((ServantStatusBattleListViewItem_o *)&v49->fields._autoRetryCount_5__3, v61, v59, v60);
                  this = (MovieFileMerge__Download_d__40_o *)System_UInt32__ToString((int)v4 + 120, 0LL);
                  if ( LODWORD(v49->fields.__2__current) > 5 )
                  {
                    v49->fields._readData_5__5 = (struct System_Byte_array *)this;
                    sub_1B68678(
                      (ServantStatusBattleListViewItem_o *)&v49->fields._readData_5__5,
                      (int32_t)this,
                      v62,
                      v63);
                    if ( LODWORD(v49->fields.__2__current) > 6 )
                    {
                      v66 = StringLiteral_814/*")"*/;
                      *(_QWORD *)&v49->fields._requestTime_5__6 = StringLiteral_814/*")"*/;
                      sub_1B68678((ServantStatusBattleListViewItem_o *)&v49->fields._requestTime_5__6, v66, v64, v65);
                      v67 = System_String__Concat_61432996((System_String_array *)v49, 0LL);
                      v4->fields._errorCode_5__11 = v67;
                      sub_1B68678(
                        (ServantStatusBattleListViewItem_o *)&v4->fields._errorCode_5__11,
                        (int32_t)v67,
                        v68,
                        v69);
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
        sub_1B68938(this, method);
      }
      Parent = System_IO_Directory__GetParent(v4->fields._dlFilePath_5__2, 0LL);
      v111 = Parent;
      if ( !Parent )
        sub_1B68930(0LL, v110);
      if ( (((__int64 (__fastcall *)(System_IO_DirectoryInfo_o *, Il2CppMethodPointer))Parent->klass->vtable._10_get_Exists.method)(
              Parent,
              Parent->klass->vtable._11_Delete.methodPtr) & 1) == 0 )
      {
        v112 = (System_String_o *)((__int64 (__fastcall *)(System_IO_DirectoryInfo_o *, Il2CppMethodPointer))v111->klass->vtable._8_get_FullName.method)(
                                    v111,
                                    v111->klass->vtable._9_get_Name.methodPtr);
        System_IO_Directory__CreateDirectory(v112, 0LL);
      }
      v113 = MovieFileMerge__GetLocalFolderPath(_4__this, 0LL);
      if ( !CommonServicePluginScript_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CommonServicePluginScript_TypeInfo);
      FreeSize = CommonServicePluginScript__GetFreeSize(v113, 0LL);
      if ( FreeSize >= 1 )
      {
        v115 = ManagerConfig_TypeInfo;
        if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
          v115 = ManagerConfig_TypeInfo;
        }
        if ( FreeSize < v115->static_fields->LIMIT_FREE_SIZE )
        {
          v196 = sub_1B686E8(&System_IO_IOException_TypeInfo);
          v197 = (System_IO_IOException_o *)sub_1B68920(v196);
          v198 = (System_String_o *)sub_1B686E8(&StringLiteral_5303/*"Disk full"*/);
          System_IO_IOException___ctor_61559712(v197, v198, 0LL);
          v199 = sub_1B686E8(&Method_MovieFileMerge__Download_d__40_MoveNext__);
          sub_1B687FC(v197, v199);
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
      if ( !byte_4A07CF2 )
      {
        sub_1B686D4(&ManagementManager_TypeInfo, method);
        byte_4A07CF2 = 1;
      }
      v70 = ManagementManager_TypeInfo;
      if ( !ManagementManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
        v70 = ManagementManager_TypeInfo;
      }
      isDuringStartup = v70->static_fields->isDuringStartup;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      if ( isDuringStartup )
      {
        v73 = LocalizationManager__Get((System_String_o *)StringLiteral_2137/*"ASSET_LOADER_ERROR_BOOT_RETRY_MESSAGE"*/, 0LL);
        v74 = (ErrorDialog_ClickDelegate_o *)sub_1B68920(ErrorDialog_ClickDelegate_TypeInfo);
        ErrorDialog_ClickDelegate___ctor(v74, (Il2CppObject *)_4__this, Method_MovieFileMerge_EndRetryDialog__, 0LL);
        if ( !Instance )
          goto LABEL_177;
        CommonUI__OpenRetryBootDialog((CommonUI_o *)Instance, (System_String_o *)StringLiteral_1/*""*/, v73, v74, 1, 0LL);
      }
      else
      {
        v151 = LocalizationManager__Get((System_String_o *)StringLiteral_2138/*"ASSET_LOADER_ERROR_TIME_OVER_MESSAGE"*/, 0LL);
        v152 = (ErrorDialog_ClickDelegate_o *)sub_1B68920(ErrorDialog_ClickDelegate_TypeInfo);
        ErrorDialog_ClickDelegate___ctor(v152, (Il2CppObject *)_4__this, Method_MovieFileMerge_EndRetryDialog__, 0LL);
        if ( !Instance )
          goto LABEL_177;
        CommonUI__OpenRetryDialog((CommonUI_o *)Instance, (System_String_o *)StringLiteral_1/*""*/, v151, v152, 1, 0LL);
      }
LABEL_117:
      if ( !_4__this->fields.isErrorDialog )
        goto LABEL_120;
      v153 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B68920(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v153, 0LL);
      v4->fields.__2__current = (Il2CppObject *)v153;
      p__2__current = &v4->fields.__2__current;
      sub_1B68678((ServantStatusBattleListViewItem_o *)p__2__current, (int32_t)v153, v154, v155);
      v80 = 10;
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
    MovieFileMerge__AssetLoadLogError(_4__this, (System_String_o *)method, 0LL);
    v116 = ManagerConfig_TypeInfo;
    if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
      v116 = ManagerConfig_TypeInfo;
    }
    if ( v116->static_fields->UseDebugCommand )
    {
      _4__this->fields.isErrorDialog = 1;
      v117 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      errorCode_5__11 = v4->fields._errorCode_5__11;
      v119 = (CommonUI_o *)v117;
      v120 = (ErrorDialog_ClickDelegate_o *)sub_1B68920(ErrorDialog_ClickDelegate_TypeInfo);
      ErrorDialog_ClickDelegate___ctor(v120, (Il2CppObject *)_4__this, Method_MovieFileMerge_EndWarningDialog__, 0LL);
      if ( !v119 )
        goto LABEL_177;
      *(_QWORD *)&effectDistance.fields.hasValue = 0LL;
      effectDistance.fields.value.fields.y = 0.0;
      CommonUI__OpenWarningDialog(
        v119,
        (System_String_o *)StringLiteral_15872/*"[FFFF80]Download error for debug"*/,
        errorCode_5__11,
        v120,
        1,
        0,
        -1.0,
        1,
        effectDistance,
        0LL);
LABEL_82:
      if ( _4__this->fields.isErrorDialog )
      {
        v121 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B68920(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v121, 0LL);
        v4->fields.__2__current = (Il2CppObject *)v121;
        p__2__current = &v4->fields.__2__current;
        sub_1B68678((ServantStatusBattleListViewItem_o *)p__2__current, (int32_t)v121, v122, v123);
        v80 = 5;
        goto LABEL_119;
      }
    }
    if ( v4->fields._isAutoRetry_5__9 )
    {
      autoRetryCount_5__3 = v4->fields._autoRetryCount_5__3;
      v125 = ManagerConfig_TypeInfo;
      if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
        v125 = ManagerConfig_TypeInfo;
      }
      DOWNLOAD_RETRY_DELAY_TIME = v125->static_fields->DOWNLOAD_RETRY_DELAY_TIME;
      v127 = (UnityEngine_WaitForSeconds_o *)sub_1B68920(UnityEngine_WaitForSeconds_TypeInfo);
      UnityEngine_WaitForSeconds___ctor(v127, DOWNLOAD_RETRY_DELAY_TIME * (float)autoRetryCount_5__3, 0LL);
      v4->fields.__2__current = (Il2CppObject *)v127;
      p__2__current = &v4->fields.__2__current;
      sub_1B68678((ServantStatusBattleListViewItem_o *)p__2__current, (int32_t)v127, v128, v129);
      v80 = 6;
      goto LABEL_119;
    }
    if ( v4->fields._isCrcError_5__10 )
    {
      v130 = (Il2CppObject *)v4->fields._errorCode_5__11;
      if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
      UnityEngine_Debug__LogError(v130, 0LL);
    }
    else
    {
      MovieFileMerge__AssetLoadLogError(_4__this, v4->fields._errorCode_5__11, 0LL);
      _4__this->fields.isErrorDialog = 1;
      if ( !ManagementManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
      if ( !byte_4A07CF2 )
      {
        sub_1B686D4(&ManagementManager_TypeInfo, v181);
        byte_4A07CF2 = 1;
      }
      v182 = ManagementManager_TypeInfo;
      if ( !ManagementManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
        v182 = ManagementManager_TypeInfo;
      }
      v183 = v182->static_fields->isDuringStartup;
      v184 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      errorLocalizeCode_5__12 = v4->fields._errorLocalizeCode_5__12;
      v186 = (CommonUI_o *)v184;
      v187 = (System_String_o *)StringLiteral_1/*""*/;
      if ( v183 )
      {
        if ( errorLocalizeCode_5__12 )
          v188 = v4->fields._errorLocalizeCode_5__12;
        else
          v188 = (System_String_o *)StringLiteral_2137/*"ASSET_LOADER_ERROR_BOOT_RETRY_MESSAGE"*/;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v189 = LocalizationManager__Get(v188, 0LL);
        v190 = (ErrorDialog_ClickDelegate_o *)sub_1B68920(ErrorDialog_ClickDelegate_TypeInfo);
        ErrorDialog_ClickDelegate___ctor(v190, (Il2CppObject *)_4__this, Method_MovieFileMerge_EndRetryDialog__, 0LL);
        if ( !v186 )
          goto LABEL_177;
        CommonUI__OpenRetryBootDialog(v186, v187, v189, v190, 1, 0LL);
      }
      else
      {
        if ( errorLocalizeCode_5__12 )
          v193 = v4->fields._errorLocalizeCode_5__12;
        else
          v193 = (System_String_o *)StringLiteral_2138/*"ASSET_LOADER_ERROR_TIME_OVER_MESSAGE"*/;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v194 = LocalizationManager__Get(v193, 0LL);
        v195 = (ErrorDialog_ClickDelegate_o *)sub_1B68920(ErrorDialog_ClickDelegate_TypeInfo);
        ErrorDialog_ClickDelegate___ctor(v195, (Il2CppObject *)_4__this, Method_MovieFileMerge_EndRetryDialog__, 0LL);
        if ( !v186 )
          goto LABEL_177;
        CommonUI__OpenRetryDialog(v186, v187, v194, v195, 1, 0LL);
      }
LABEL_36:
      if ( _4__this->fields.isErrorDialog )
      {
        v81 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B68920(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v81, 0LL);
        v4->fields.__2__current = (Il2CppObject *)v81;
        p__2__current = &v4->fields.__2__current;
        sub_1B68678((ServantStatusBattleListViewItem_o *)p__2__current, (int32_t)v81, v82, v83);
        v80 = 7;
        goto LABEL_119;
      }
    }
  }
LABEL_92:
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4A0456B )
  {
    sub_1B686D4(&NetworkManager_TypeInfo, method);
    byte_4A0456B = 1;
  }
  this = (MovieFileMerge__Download_d__40_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    this = (MovieFileMerge__Download_d__40_o *)NetworkManager_TypeInfo;
  }
  if ( LOBYTE(this[1].fields._dlFilePath_5__2[5].fields._stringLength) )
  {
    if ( !_4__this )
      goto LABEL_177;
    loader = (MovieFileMerge__Download_d__40_o *)_4__this->fields.loader;
    v131 = (ServantStatusBattleListViewItem_o *)&_4__this->fields.loader;
    this = loader;
    if ( !loader )
      goto LABEL_177;
    UnityEngine_Networking_UnityWebRequest__Dispose((UnityEngine_Networking_UnityWebRequest_o *)this, 0LL);
    v131->klass = 0LL;
    sub_1B68678(v131, 0, v133, v134);
    v4->fields._readData_5__5 = 0LL;
    p_readData_5__5 = (ServantStatusBattleListViewItem_o *)&v4->fields._readData_5__5;
  }
  else
  {
    if ( !_4__this )
      goto LABEL_177;
    v138 = &_4__this->fields.loader;
    this = (MovieFileMerge__Download_d__40_o *)_4__this->fields.loader;
    if ( v4->fields._isDownload_5__4 )
    {
      if ( !this )
        goto LABEL_177;
      UnityEngine_Networking_UnityWebRequest__Dispose((UnityEngine_Networking_UnityWebRequest_o *)this, 0LL);
      *v138 = 0LL;
      sub_1B68678((ServantStatusBattleListViewItem_o *)&_4__this->fields.loader, 0, v139, v140);
      v4->fields._readData_5__5 = 0LL;
      sub_1B68678((ServantStatusBattleListViewItem_o *)&v4->fields._readData_5__5, 0, v141, v142);
      if ( !v4->fields._isCrcError_5__10 )
      {
LABEL_120:
        v4->fields._wait_5__8 = 0LL;
        sub_1B68678((ServantStatusBattleListViewItem_o *)&v4->fields._wait_5__8, 0, v2, v3);
        v4->fields._errorCode_5__11 = 0LL;
        sub_1B68678((ServantStatusBattleListViewItem_o *)&v4->fields._errorCode_5__11, 0, v156, v157);
        v4->fields._errorLocalizeCode_5__12 = 0LL;
        sub_1B68678((ServantStatusBattleListViewItem_o *)&v4->fields._errorLocalizeCode_5__12, 0, v158, v159);
        do
        {
          v4->fields._readData_5__5 = 0LL;
          sub_1B68678((ServantStatusBattleListViewItem_o *)&v4->fields._readData_5__5, 0, v160, v161);
LABEL_172:
          v4->fields._readData_5__5 = 0LL;
          sub_1B68678((ServantStatusBattleListViewItem_o *)&v4->fields._readData_5__5, 0, v44, v45);
        }
        while ( !v4->fields._isDownload_5__4 );
        v200 = UnityEngine_Networking_UnityWebRequest__Get(_4__this->fields.downloadingURL, 0LL);
        _4__this->fields.loader = v200;
        v201 = (ServantStatusBattleListViewItem_o *)&_4__this->fields.loader;
        sub_1B68678(v201, (int32_t)v200, v202, v203);
        this = (MovieFileMerge__Download_d__40_o *)v201->klass;
        if ( v201->klass )
        {
          UnityEngine_Networking_UnityWebRequest__SendWebRequest((UnityEngine_Networking_UnityWebRequest_o *)this, 0LL);
          v4->fields.__2__current = 0LL;
          v204 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
          sub_1B68678(v204, 0, v205, v206);
          LOBYTE(this) = 1;
          *(_DWORD *)&v204[-1].fields.isMine = 1;
          return (char)this;
        }
        goto LABEL_177;
      }
      if ( !v4->fields._errorCode_5__11 )
        goto LABEL_114;
      v143 = ManagerConfig_TypeInfo;
      if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
        v143 = ManagerConfig_TypeInfo;
      }
      if ( !v143->static_fields->UseDebugCommand )
        goto LABEL_114;
      _4__this->fields.isErrorDialog = 1;
      v144 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v145 = v4->fields._errorCode_5__11;
      v146 = (CommonUI_o *)v144;
      v147 = (ErrorDialog_ClickDelegate_o *)sub_1B68920(ErrorDialog_ClickDelegate_TypeInfo);
      ErrorDialog_ClickDelegate___ctor(v147, (Il2CppObject *)_4__this, Method_MovieFileMerge_EndWarningDialog__, 0LL);
      if ( !v146 )
        goto LABEL_177;
      *(_QWORD *)&effectDistancea.fields.hasValue = 0LL;
      effectDistancea.fields.value.fields.y = 0.0;
      CommonUI__OpenWarningDialog(
        v146,
        (System_String_o *)StringLiteral_15872/*"[FFFF80]Download error for debug"*/,
        v145,
        v147,
        1,
        0,
        -1.0,
        1,
        effectDistancea,
        0LL);
LABEL_57:
      if ( _4__this->fields.isErrorDialog )
      {
        v100 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B68920(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v100, 0LL);
        v4->fields.__2__current = (Il2CppObject *)v100;
        p__2__current = &v4->fields.__2__current;
        sub_1B68678((ServantStatusBattleListViewItem_o *)p__2__current, (int32_t)v100, v101, v102);
        v80 = 8;
      }
      else
      {
LABEL_114:
        v148 = (UnityEngine_WaitForSeconds_o *)sub_1B68920(UnityEngine_WaitForSeconds_TypeInfo);
        UnityEngine_WaitForSeconds___ctor(v148, 1.0, 0LL);
        v4->fields.__2__current = (Il2CppObject *)v148;
        p__2__current = &v4->fields.__2__current;
        sub_1B68678((ServantStatusBattleListViewItem_o *)p__2__current, (int32_t)v148, v149, v150);
        v80 = 9;
      }
LABEL_119:
      *((_DWORD *)p__2__current - 2) = v80;
      LOBYTE(this) = 1;
      return (char)this;
    }
    if ( !this )
      return (char)this;
    UnityEngine_Networking_UnityWebRequest__Dispose((UnityEngine_Networking_UnityWebRequest_o *)this, 0LL);
    p_readData_5__5 = (ServantStatusBattleListViewItem_o *)&_4__this->fields.loader;
    *v138 = 0LL;
  }
  sub_1B68678(p_readData_5__5, 0, v135, v136);
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

  v2 = sub_1B686E8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B68920(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B686E8(&Method_MovieFileMerge__Download_d__40_System_Collections_IEnumerator_Reset__);
  sub_1B687FC(v3, v4);
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
  int32_t v14; // w2
  int32_t v15; // w3
  FileMergeAndSplit_Merge_o *mergeClass; // x21
  System_Action_object__o *v17; // x22
  System_Collections_IEnumerator_o *v18; // x0
  ServantStatusBattleListViewItem_o *p__2__current; // x19
  int32_t v20; // w2
  int32_t v21; // w3
  bool result; // w0
  struct FileMergeAndSplit_Merge_o *v23; // x8
  System_String_o *v24; // x21
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x0
  System_Collections_Generic_List_uint__o *v26; // x22
  FileMergeAndSplit_CRCChecker_o *v27; // x23
  ServantStatusBattleListViewItem_o *p_crcCheckerClass; // x20
  int32_t v29; // w2
  int32_t v30; // w3
  System_Collections_IEnumerator_o *v31; // x0
  ServantStatusBattleListViewItem_o *v32; // x19
  int32_t v33; // w2
  int32_t v34; // w3

  v2 = this;
  if ( (byte_4A07CF7 & 1) == 0 )
  {
    sub_1B686D4(&System_Action_Exception__TypeInfo, method);
    sub_1B686D4(&FileMergeAndSplit_CRCChecker_TypeInfo, v3);
    sub_1B686D4(&Method_System_Collections_Generic_Dictionary_string__uint__get_Values__, v4);
    sub_1B686D4(&Method_System_Linq_Enumerable_ToList_uint___, v5);
    sub_1B686D4(&FileMergeAndSplit_Merge_TypeInfo, v6);
    this = (MovieFileMerge__Merge_d__34_o *)sub_1B686D4(&Method_MovieFileMerge__Merge_b__34_0__, v7);
    byte_4A07CF7 = 1;
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
        SplitFileList = MovieFileMerge__GetSplitFileList(_4__this, 0LL);
        outputMergeFile = _4__this->fields.outputMergeFile;
        v12 = SplitFileList;
        v13 = (FileMergeAndSplit_Merge_o *)sub_1B68920(FileMergeAndSplit_Merge_TypeInfo);
        FileMergeAndSplit_Merge___ctor(v13, v12, outputMergeFile, 0LL);
        _4__this->fields.mergeClass = v13;
        sub_1B68678((ServantStatusBattleListViewItem_o *)&_4__this->fields.mergeClass, (int32_t)v13, v14, v15);
        mergeClass = _4__this->fields.mergeClass;
        v17 = (System_Action_object__o *)sub_1B68920(System_Action_Exception__TypeInfo);
        System_Action_object____ctor(v17, (Il2CppObject *)_4__this, Method_MovieFileMerge__Merge_b__34_0__, 0LL);
        if ( mergeClass )
        {
          v18 = FileMergeAndSplit_Merge__Run(mergeClass, (System_Action_Exception__o *)v17, 0LL);
          v2->fields.__2__current = (Il2CppObject *)v18;
          p__2__current = (ServantStatusBattleListViewItem_o *)&v2->fields.__2__current;
          sub_1B68678(p__2__current, (int32_t)v18, v20, v21);
          result = 1;
          *(_DWORD *)&p__2__current[-1].fields.isMine = 1;
          return result;
        }
      }
LABEL_22:
      sub_1B68930(this, method);
    }
    return 0;
  }
  v2->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_22;
  v23 = _4__this->fields.mergeClass;
  if ( !v23 )
    goto LABEL_22;
  if ( v23->fields.isError )
    return 0;
  this = (MovieFileMerge__Merge_d__34_o *)_4__this->fields.AllDownLoadFilePathCRCDictionary;
  if ( !this )
    goto LABEL_22;
  v24 = _4__this->fields.outputMergeFile;
  Values = System_Collections_Generic_Dictionary_object__uint___get_Values(
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)this,
             (const MethodInfo_319B904 *)Method_System_Collections_Generic_Dictionary_string__uint__get_Values__);
  v26 = (System_Collections_Generic_List_uint__o *)System_Linq_Enumerable__ToList_uint_(
                                                     (System_Collections_Generic_IEnumerable_TSource__o *)Values,
                                                     (const MethodInfo_2E85B8C *)Method_System_Linq_Enumerable_ToList_uint___);
  v27 = (FileMergeAndSplit_CRCChecker_o *)sub_1B68920(FileMergeAndSplit_CRCChecker_TypeInfo);
  FileMergeAndSplit_CRCChecker___ctor(v27, v24, v26, 0LL);
  _4__this->fields.crcCheckerClass = v27;
  p_crcCheckerClass = (ServantStatusBattleListViewItem_o *)&_4__this->fields.crcCheckerClass;
  sub_1B68678(p_crcCheckerClass, (int32_t)v27, v29, v30);
  this = (MovieFileMerge__Merge_d__34_o *)p_crcCheckerClass->klass;
  if ( !p_crcCheckerClass->klass )
    goto LABEL_22;
  v31 = FileMergeAndSplit_CRCChecker__Run((FileMergeAndSplit_CRCChecker_o *)this, 0LL);
  v2->fields.__2__current = (Il2CppObject *)v31;
  v32 = (ServantStatusBattleListViewItem_o *)&v2->fields.__2__current;
  sub_1B68678(v32, (int32_t)v31, v33, v34);
  *(_DWORD *)&v32[-1].fields.isMine = 2;
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

  v2 = sub_1B686E8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B68920(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B686E8(&Method_MovieFileMerge__Merge_d__34_System_Collections_IEnumerator_Reset__);
  sub_1B687FC(v3, v4);
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
  int32_t v3; // w3
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
  int32_t v17; // w3
  Il2CppObject *object; // x21
  Il2CppObject *v19; // x21
  int32_t v20; // w2
  int32_t v21; // w3
  Il2CppObject *v22; // x8
  CRIMoviePlayer_o *klass; // x21
  System_String_o *filePath; // x22
  BgmManager_c *v25; // x0
  Il2CppObject *v26; // x24
  float masterVolume; // s8
  System_Action_o *v28; // x23
  struct MovieFileMerge___c__DisplayClass30_0_o *_8__1; // x8
  ServantStatusBattleListViewItem_o *p__2__current; // x19
  bool result; // w0

  v4 = this;
  if ( (byte_4A07CF8 & 1) == 0 )
  {
    sub_1B686D4(&System_Action_TypeInfo, method);
    sub_1B686D4(&BgmManager_TypeInfo, v5);
    sub_1B686D4(&Method_UnityEngine_GameObject_GetComponent_CRIMoviePlayer___, v6);
    sub_1B686D4(&Method_UnityEngine_Object_Instantiate_GameObject___, v7);
    sub_1B686D4(&UnityEngine_Object_TypeInfo, v8);
    sub_1B686D4(&Method_UnityEngine_Resources_Load_GameObject___, v9);
    sub_1B686D4(&Method_MovieFileMerge___c__DisplayClass30_0__PlayCRIMovie_b__0__, v10);
    sub_1B686D4(&MovieFileMerge___c__DisplayClass30_0_TypeInfo, v11);
    this = (MovieFileMerge__PlayCRIMovie_d__30_o *)sub_1B686D4(&StringLiteral_3909/*"CRIMovie/CRIMoviePlayerWithPanel"*/, v12);
    byte_4A07CF8 = 1;
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
    v14 = (Il2CppObject *)sub_1B68920(MovieFileMerge___c__DisplayClass30_0_TypeInfo);
    System_Object___ctor(v14, 0LL);
    v4->fields.__8__1 = (struct MovieFileMerge___c__DisplayClass30_0_o *)v14;
    p__8__1 = (Il2CppObject **)&v4->fields.__8__1;
    sub_1B68678((ServantStatusBattleListViewItem_o *)&v4->fields.__8__1, (int32_t)v14, v16, v17);
    object = UnityEngine_Resources__Load_object_(
               (System_String_o *)StringLiteral_3909/*"CRIMovie/CRIMoviePlayerWithPanel"*/,
               (const MethodInfo_2EDCB20 *)Method_UnityEngine_Resources_Load_GameObject___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (MovieFileMerge__PlayCRIMovie_d__30_o *)UnityEngine_Object__Instantiate_object_(
                                                     object,
                                                     (const MethodInfo_2ECC718 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !this )
      goto LABEL_25;
    v19 = *p__8__1;
    this = (MovieFileMerge__PlayCRIMovie_d__30_o *)UnityEngine_GameObject__GetComponent_object_(
                                                     (UnityEngine_GameObject_o *)this,
                                                     (const MethodInfo_2E98950 *)Method_UnityEngine_GameObject_GetComponent_CRIMoviePlayer___);
    if ( !v19 )
      goto LABEL_25;
    v19[1].klass = (Il2CppClass *)this;
    sub_1B68678((ServantStatusBattleListViewItem_o *)&v19[1], (int32_t)this, v20, v21);
    v22 = *p__8__1;
    if ( !*p__8__1 )
      goto LABEL_25;
    LOBYTE(v22[1].monitor) = 1;
    klass = (CRIMoviePlayer_o *)v22[1].klass;
    filePath = v4->fields.filePath;
    if ( !BgmManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
    if ( !byte_4A0456C )
    {
      sub_1B686D4(&BgmManager_TypeInfo, method);
      byte_4A0456C = 1;
    }
    v25 = BgmManager_TypeInfo;
    if ( !BgmManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
      v25 = BgmManager_TypeInfo;
    }
    v26 = *p__8__1;
    masterVolume = v25->static_fields->masterVolume;
    v28 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo);
    System_Action___ctor(v28, v26, Method_MovieFileMerge___c__DisplayClass30_0__PlayCRIMovie_b__0__, 0LL);
    if ( !klass
      || (CRIMoviePlayer__Initialize(klass, filePath, filePath, masterVolume, 1, 0LL, v28, 1, 0LL, 0, 0, 1, 0LL),
          !*p__8__1)
      || (this = (MovieFileMerge__PlayCRIMovie_d__30_o *)(*p__8__1)[1].klass) == 0LL )
    {
LABEL_25:
      sub_1B68930(this, method);
    }
    CRIMoviePlayer__MoviePlay((CRIMoviePlayer_o *)this, 1, 1, 1, 0LL);
  }
  _8__1 = v4->fields.__8__1;
  if ( !_8__1 )
    goto LABEL_25;
  if ( _8__1->fields.wait )
  {
    v4->fields.__2__current = 0LL;
    p__2__current = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
    sub_1B68678(p__2__current, 0, v2, v3);
    result = 1;
    *(_DWORD *)&p__2__current[-1].fields.isMine = 1;
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

  v2 = sub_1B686E8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B68920(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B686E8(&Method_MovieFileMerge__PlayCRIMovie_d__30_System_Collections_IEnumerator_Reset__);
  sub_1B687FC(v3, v4);
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
  int32_t _1__state; // w8
  bool result; // w0
  struct MovieFileMerge_o *_4__this; // x0
  Il2CppObject *v6; // x0
  int32_t v7; // w2
  int32_t v8; // w3
  int32_t v9; // w8

  _1__state = this->fields.__1__state;
  result = 0;
  if ( _1__state == 1 )
  {
    v9 = -1;
  }
  else
  {
    if ( _1__state )
      return result;
    _4__this = this->fields.__4__this;
    this->fields.__1__state = -1;
    if ( !_4__this )
      sub_1B68930(0LL, method);
    v6 = (Il2CppObject *)MovieFileMerge__PlayMP4_37495808(_4__this, _4__this->fields.outputMergeFile, 0, 0LL);
    this->fields.__2__current = v6;
    sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.__2__current, (int32_t)v6, v7, v8);
    v9 = 1;
    result = 1;
  }
  this->fields.__1__state = v9;
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

  v2 = sub_1B686E8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B68920(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B686E8(&Method_MovieFileMerge__PlayMP4_d__28_System_Collections_IEnumerator_Reset__);
  sub_1B687FC(v3, v4);
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
  MovieFileMerge_o *_4__this; // x20
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v6; // x1
  bool result; // w0
  UnityEngine_WaitForEndOfFrame_o *v8; // x20
  int32_t v9; // w2
  int32_t v10; // w3
  int32_t v11; // w8
  UnityEngine_WaitForEndOfFrame_o *v12; // x20
  int32_t v13; // w2
  int32_t v14; // w3
  Il2CppObject *v15; // x0
  Il2CppObject **p__2__current; // x19
  int32_t v17; // w2
  int32_t v18; // w3

  if ( (byte_4A07CF9 & 1) == 0 )
  {
    sub_1B686D4(&UnityEngine_WaitForEndOfFrame_TypeInfo, method);
    byte_4A07CF9 = 1;
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
        sub_1B68930(IsNullOrEmpty, v6);
      v15 = (Il2CppObject *)MovieFileMerge__PlayCRIMovie(_4__this, this->fields.filePath, 0LL);
      this->fields.__2__current = v15;
      p__2__current = &this->fields.__2__current;
      sub_1B68678((ServantStatusBattleListViewItem_o *)p__2__current, (int32_t)v15, v17, v18);
      result = 1;
      *((_DWORD *)p__2__current - 2) = 1;
      break;
    case 1:
      this->fields.__1__state = -1;
      v12 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B68920(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v12, 0LL);
      this->fields.__2__current = (Il2CppObject *)v12;
      sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.__2__current, (int32_t)v12, v13, v14);
      v11 = 2;
      goto LABEL_9;
    case 2:
      this->fields.__1__state = -1;
      v8 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B68920(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v8, 0LL);
      this->fields.__2__current = (Il2CppObject *)v8;
      sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.__2__current, (int32_t)v8, v9, v10);
      v11 = 3;
LABEL_9:
      this->fields.__1__state = v11;
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

  v2 = sub_1B686E8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B68920(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B686E8(&Method_MovieFileMerge__PlayMP4_d__29_System_Collections_IEnumerator_Reset__);
  sub_1B687FC(v3, v4);
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
    sub_1B68930(0LL, method);
  CRIMoviePlayer__Dispose(player, 0LL);
  this->fields.wait = 0;
}