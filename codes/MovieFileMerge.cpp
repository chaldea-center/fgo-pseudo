void __fastcall MovieFileMerge___ctor(MovieFileMerge_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  System_Collections_Generic_Dictionary_TKey__TValue__o *v5; // x20
  int32_t v6; // w2
  int32_t v7; // w3
  __int64 v8; // x1
  __int64 v9; // x2
  System_Collections_Generic_Dictionary_TKey__TValue__o *v10; // x20
  int32_t v11; // w2
  int32_t v12; // w3

  if ( (byte_49FB4A9 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__uint___ctor__, method);
    sub_1B640C8(&System_Collections_Generic_Dictionary_string__uint__TypeInfo, v4);
    byte_49FB4A9 = 1;
  }
  v5 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1B64314(
                                                                  System_Collections_Generic_Dictionary_string__uint__TypeInfo,
                                                                  method,
                                                                  v2);
  System_Collections_Generic_Dictionary_object__uint____ctor(
    v5,
    (const MethodInfo_318A9B0 *)Method_System_Collections_Generic_Dictionary_string__uint___ctor__);
  this->fields.AllDownLoadFilePathCRCDictionary = (struct System_Collections_Generic_Dictionary_string__uint__o *)v5;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.AllDownLoadFilePathCRCDictionary, (int32_t)v5, v6, v7);
  v10 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1B64314(
                                                                   System_Collections_Generic_Dictionary_string__uint__TypeInfo,
                                                                   v8,
                                                                   v9);
  System_Collections_Generic_Dictionary_object__uint____ctor(
    v10,
    (const MethodInfo_318A9B0 *)Method_System_Collections_Generic_Dictionary_string__uint___ctor__);
  this->fields.RequireDownLoadFilePathCRCDictionary = (struct System_Collections_Generic_Dictionary_string__uint__o *)v10;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.RequireDownLoadFilePathCRCDictionary,
    (int32_t)v10,
    v11,
    v12);
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
  if ( (byte_49FB4A7 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Debug_TypeInfo, errorCode);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__, v5);
    sub_1B640C8(&string___TypeInfo, v6);
    sub_1B640C8(&StringLiteral_14037/*"The request timed out."*/, v7);
    sub_1B640C8(&StringLiteral_13967/*"The network connection was lost."*/, v8);
    sub_1B640C8(&StringLiteral_4672/*"Connection reset by peer"*/, v9);
    sub_1B640C8(&StringLiteral_5031/*"DLErrorType"*/, v10);
    sub_1B640C8(&StringLiteral_5030/*"DLErrorAsset"*/, v11);
    sub_1B640C8(&StringLiteral_4671/*"Connection refused"*/, v12);
    sub_1B640C8(&StringLiteral_9386/*"No address associated with hostname"*/, v13);
    sub_1B640C8(&StringLiteral_2488/*"AssetBundle file download time over"*/, v14);
    sub_1B640C8(&StringLiteral_12759/*"Software caused connection abort"*/, v15);
    sub_1B640C8(&StringLiteral_4673/*"Connection timed out"*/, v16);
    sub_1B640C8(&StringLiteral_2491/*"AssetLoadError"*/, v17);
    byte_49FB4A7 = 1;
  }
  Instance = (Il2CppObject *)sub_1B64170(string___TypeInfo, 8LL);
  if ( !Instance )
    goto LABEL_28;
  v22 = Instance;
  if ( !LODWORD(Instance[1].monitor) )
    goto LABEL_18;
  v23 = StringLiteral_9386/*"No address associated with hostname"*/;
  Instance[2].klass = (Il2CppClass *)StringLiteral_9386/*"No address associated with hostname"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&Instance[2], v23, v20, v21);
  if ( LODWORD(v22[1].monitor) <= 1 )
    goto LABEL_18;
  v26 = StringLiteral_2488/*"AssetBundle file download time over"*/;
  v22[2].monitor = (void *)StringLiteral_2488/*"AssetBundle file download time over"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v22[2].monitor, v26, v24, v25);
  if ( LODWORD(v22[1].monitor) <= 2 )
    goto LABEL_18;
  v29 = StringLiteral_13967/*"The network connection was lost."*/;
  v22[3].klass = (Il2CppClass *)StringLiteral_13967/*"The network connection was lost."*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v22[3], v29, v27, v28);
  if ( LODWORD(v22[1].monitor) <= 3 )
    goto LABEL_18;
  v32 = StringLiteral_4672/*"Connection reset by peer"*/;
  v22[3].monitor = (void *)StringLiteral_4672/*"Connection reset by peer"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v22[3].monitor, v32, v30, v31);
  if ( LODWORD(v22[1].monitor) <= 4 )
    goto LABEL_18;
  v35 = StringLiteral_12759/*"Software caused connection abort"*/;
  v22[4].klass = (Il2CppClass *)StringLiteral_12759/*"Software caused connection abort"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v22[4], v35, v33, v34);
  if ( LODWORD(v22[1].monitor) <= 5
    || (v38 = StringLiteral_4673/*"Connection timed out"*/,
        v22[4].monitor = (void *)StringLiteral_4673/*"Connection timed out"*/,
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&v22[4].monitor, v38, v36, v37),
        LODWORD(v22[1].monitor) <= 6)
    || (v41 = StringLiteral_4671/*"Connection refused"*/,
        v22[5].klass = (Il2CppClass *)StringLiteral_4671/*"Connection refused"*/,
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&v22[5], v41, v39, v40),
        LODWORD(v22[1].monitor) <= 7) )
  {
LABEL_18:
    sub_1B6432C(Instance, v19);
  }
  v44 = StringLiteral_14037/*"The request timed out."*/;
  v22[5].monitor = (void *)StringLiteral_14037/*"The request timed out."*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v22[5].monitor, v44, v42, v43);
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
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
  if ( !Instance )
LABEL_28:
    sub_1B64324(Instance);
  CrashReporter__AddCustomKey(
    (CrashReporter_o *)Instance,
    (System_String_o *)StringLiteral_5030/*"DLErrorAsset"*/,
    this->fields.downloadingURL,
    0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
  if ( (unsigned int)v45 >= LODWORD(v22[1].monitor) )
    goto LABEL_18;
  if ( !Instance )
    goto LABEL_28;
  CrashReporter__AddCustomKey(
    (CrashReporter_o *)Instance,
    (System_String_o *)StringLiteral_5031/*"DLErrorType"*/,
    *((System_String_o **)&v22[2].klass + v45),
    0LL);
  if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
  v3 = (System_String_o *)StringLiteral_2491/*"AssetLoadError"*/;
LABEL_27:
  UnityEngine_Debug__LogError((Il2CppObject *)v3, 0LL);
}


System_Collections_IEnumerator_o *__fastcall MovieFileMerge__CRCDownloadAndCheck(
        MovieFileMerge_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x20
  __int64 v5; // x0
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_49FB49E & 1) == 0 )
  {
    sub_1B640C8(&MovieFileMerge__CRCDownloadAndCheck_d__32_TypeInfo, method);
    byte_49FB49E = 1;
  }
  v4 = sub_1B64314(MovieFileMerge__CRCDownloadAndCheck_d__32_TypeInfo, method, v2);
  MovieFileMerge__CRCDownloadAndCheck_d__32___ctor((MovieFileMerge__CRCDownloadAndCheck_d__32_o *)v4, 0, 0LL);
  if ( !v4 )
    sub_1B64324(v5);
  *(_QWORD *)(v4 + 32) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v4 + 32), (int32_t)this, v6, v7);
  return (System_Collections_IEnumerator_o *)v4;
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

  if ( (byte_49FB4A5 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__uint__Add__, dataPath);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__uint___ctor__, v4);
    sub_1B640C8(&System_Collections_Generic_Dictionary_string__uint__TypeInfo, v5);
    byte_49FB4A5 = 1;
  }
  result = 0;
  v6 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1B64314(
                                                                  System_Collections_Generic_Dictionary_string__uint__TypeInfo,
                                                                  dataPath,
                                                                  method);
  System_Collections_Generic_Dictionary_object__uint____ctor(
    v6,
    (const MethodInfo_318A9B0 *)Method_System_Collections_Generic_Dictionary_string__uint___ctor__);
  AllLines = System_IO_File__ReadAllLines(dataPath, 0LL);
  if ( !AllLines )
LABEL_18:
    sub_1B64324(AllLines);
  max_length = AllLines->max_length;
  v10 = AllLines;
  if ( max_length >= 1 )
  {
    v11 = 0;
    while ( 1 )
    {
      if ( v11 >= max_length )
LABEL_17:
        sub_1B6432C(AllLines, v8);
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
        (const MethodInfo_318B364 *)Method_System_Collections_Generic_Dictionary_string__uint__Add__);
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
  if ( (byte_49FB4A1 & 1) == 0 )
  {
    sub_1B640C8(&System_IO_Path_TypeInfo, method);
    sub_1B640C8(&StringLiteral_24954/*"{0}/{1}"*/, v3);
    folder = (System_String_o *)sub_1B640C8(&StringLiteral_1124/*"/"*/, v4);
    byte_49FB4A1 = 1;
  }
  if ( !v2 )
    sub_1B64324(folder);
  if ( System_String__EndsWith(v2, (System_String_o *)StringLiteral_1124/*"/"*/, 0LL) )
    v2 = System_String__TrimEnd_61405280(v2, 0x2Fu, 0LL);
  if ( !System_IO_Path_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_IO_Path_TypeInfo);
  FileName = System_IO_Path__GetFileName(v2, 0LL);
  LocalDataPath = (Il2CppObject *)MovieFileMerge__GetLocalDataPath((const MethodInfo *)FileName);
  v7 = System_String__Format_61389768(
         (System_String_o *)StringLiteral_24954/*"{0}/{1}"*/,
         LocalDataPath,
         (Il2CppObject *)FileName,
         0LL);
  if ( System_IO_Directory__Exists(v7, 0LL) )
    System_IO_Directory__Delete(v7, 1, 0LL);
}


void __fastcall MovieFileMerge__Delete_37435484(const MethodInfo *method)
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


// local variable allocation has failed, the output may be wrong!
System_Collections_IEnumerator_o *__fastcall MovieFileMerge__Download(
        MovieFileMerge_o *this,
        System_String_o *fileName,
        uint32_t crc,
        const MethodInfo *method)
{
  __int64 v7; // x22
  __int64 v8; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  int32_t v11; // w2
  int32_t v12; // w3

  if ( (byte_49FB4A4 & 1) == 0 )
  {
    sub_1B640C8(&MovieFileMerge__Download_d__40_TypeInfo, fileName);
    byte_49FB4A4 = 1;
  }
  v7 = sub_1B64314(MovieFileMerge__Download_d__40_TypeInfo, fileName, *(_QWORD *)&crc);
  MovieFileMerge__Download_d__40___ctor((MovieFileMerge__Download_d__40_o *)v7, 0, 0LL);
  if ( !v7 )
    sub_1B64324(v8);
  *(_QWORD *)(v7 + 32) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v7 + 32), (int32_t)this, v9, v10);
  *(_QWORD *)(v7 + 40) = fileName;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v7 + 40), (int32_t)fileName, v11, v12);
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
  __int64 v2; // x2
  __int64 v4; // x20
  __int64 v5; // x0
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_49FB49F & 1) == 0 )
  {
    sub_1B640C8(&MovieFileMerge__DownloadMovie_d__33_TypeInfo, method);
    byte_49FB49F = 1;
  }
  v4 = sub_1B64314(MovieFileMerge__DownloadMovie_d__33_TypeInfo, method, v2);
  MovieFileMerge__DownloadMovie_d__33___ctor((MovieFileMerge__DownloadMovie_d__33_o *)v4, 0, 0LL);
  if ( !v4 )
    sub_1B64324(v5);
  *(_QWORD *)(v4 + 32) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v4 + 32), (int32_t)this, v6, v7);
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
  System_String_o *FileName; // x20
  Il2CppObject *LocalDataPath; // x0
  System_String_o *v10; // x19
  System_String_o *v11; // x0
  FileMergeAndSplit_c *v12; // x8
  Il2CppObject *v13; // x21
  System_String_o *v14; // x0

  v3 = assetFolderURL;
  if ( (byte_49FB495 & 1) == 0 )
  {
    sub_1B640C8(&FileMergeAndSplit_TypeInfo, assetFolderURL);
    sub_1B640C8(&System_IO_Path_TypeInfo, v4);
    sub_1B640C8(&StringLiteral_1124/*"/"*/, v5);
    sub_1B640C8(&StringLiteral_24959/*"{0}/{1}/{2}"*/, v6);
    this = (MovieFileMerge_o *)sub_1B640C8(&StringLiteral_24958/*"{0}/{1}/{1}.usm"*/, v7);
    byte_49FB495 = 1;
  }
  if ( !v3 )
    sub_1B64324(this);
  if ( System_String__EndsWith(v3, (System_String_o *)StringLiteral_1124/*"/"*/, 0LL) )
    v3 = System_String__TrimEnd_61405280(v3, 0x2Fu, 0LL);
  if ( !System_IO_Path_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_IO_Path_TypeInfo);
  FileName = System_IO_Path__GetFileName(v3, 0LL);
  LocalDataPath = (Il2CppObject *)MovieFileMerge__GetLocalDataPath((const MethodInfo *)FileName);
  v10 = System_String__Format_61389768(
          (System_String_o *)StringLiteral_24958/*"{0}/{1}/{1}.usm"*/,
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
  v14 = System_String__Format_61389836(
          (System_String_o *)StringLiteral_24959/*"{0}/{1}/{2}"*/,
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
  System_Collections_Generic_Dictionary_TKey__TValue__o *v5; // x0
  int32_t downloadProgress; // s8

  if ( (byte_49FB499 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__uint__get_Count__, method);
    byte_49FB499 = 1;
  }
  RequireDownLoadFilePathCRCDictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.RequireDownLoadFilePathCRCDictionary;
  v4 = 0.0;
  if ( RequireDownLoadFilePathCRCDictionary
    && System_Collections_Generic_Dictionary_object__uint___get_Count(
         RequireDownLoadFilePathCRCDictionary,
         (const MethodInfo_318B034 *)Method_System_Collections_Generic_Dictionary_string__uint__get_Count__) )
  {
    v5 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.RequireDownLoadFilePathCRCDictionary;
    if ( !v5 )
      sub_1B64324(0LL);
    downloadProgress = this->fields.downloadProgress;
    return (float)downloadProgress
         / (float)System_Collections_Generic_Dictionary_object__uint___get_Count(
                    v5,
                    (const MethodInfo_318B034 *)Method_System_Collections_Generic_Dictionary_string__uint__get_Count__);
  }
  return v4;
}


double __fastcall MovieFileMerge__GetDownloadSize(MovieFileMerge_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_TKey__TValue__o *RequireDownLoadFilePathCRCDictionary; // x0

  if ( (byte_49FB498 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__uint__get_Count__, method);
    byte_49FB498 = 1;
  }
  RequireDownLoadFilePathCRCDictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.RequireDownLoadFilePathCRCDictionary;
  if ( !RequireDownLoadFilePathCRCDictionary )
    sub_1B64324(0LL);
  return (double)(System_Collections_Generic_Dictionary_object__uint___get_Count(
                    RequireDownLoadFilePathCRCDictionary,
                    (const MethodInfo_318B034 *)Method_System_Collections_Generic_Dictionary_string__uint__get_Count__) << 20);
}


System_String_o *__fastcall MovieFileMerge__GetLocalDataPath(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  System_String_o *persistentDataPath; // x0

  if ( (byte_49FB496 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Application_TypeInfo, v1);
    sub_1B640C8(&StringLiteral_1179/*"/extend-data/movie"*/, v2);
    byte_49FB496 = 1;
  }
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
  persistentDataPath = UnityEngine_Application__get_persistentDataPath(0LL);
  return System_String__Concat_61375396(persistentDataPath, (System_String_o *)StringLiteral_1179/*"/extend-data/movie"*/, 0LL);
}


System_String_o *__fastcall MovieFileMerge__GetLocalFolderPath(MovieFileMerge_o *this, const MethodInfo *method)
{
  MovieFileMerge_o *v2; // x19
  Il2CppObject *LocalDataPath; // x0

  v2 = this;
  if ( (byte_49FB4A2 & 1) == 0 )
  {
    this = (MovieFileMerge_o *)sub_1B640C8(&StringLiteral_24954/*"{0}/{1}"*/, method);
    byte_49FB4A2 = 1;
  }
  LocalDataPath = (Il2CppObject *)MovieFileMerge__GetLocalDataPath((const MethodInfo *)this);
  return System_String__Format_61389768(
           (System_String_o *)StringLiteral_24954/*"{0}/{1}"*/,
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
  System_Collections_Generic_Dictionary_TKey__TValue__o *v14; // x19
  System_Collections_Generic_Dictionary_TKey__TValue__o *AllDownLoadFilePathCRCDictionary; // x0
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
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v29; // [xsp+0h] [xbp-C0h] BYREF
  uint32_t v30; // [xsp+2Ch] [xbp-94h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v31; // [xsp+30h] [xbp-90h] BYREF

  if ( (byte_49FB4A3 & 1) == 0 )
  {
    sub_1B640C8(&Crc32_TypeInfo, method);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__uint__Add__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__uint__GetEnumerator__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__uint___ctor__, v6);
    sub_1B640C8(&System_Collections_Generic_Dictionary_string__uint__TypeInfo, v7);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_Enumerator_string__uint__Dispose__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_Enumerator_string__uint__MoveNext__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_Enumerator_string__uint__get_Current__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_KeyValuePair_string__uint__get_Key__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_KeyValuePair_string__uint__get_Value__, v12);
    sub_1B640C8(&StringLiteral_24954/*"{0}/{1}"*/, v13);
    byte_49FB4A3 = 1;
  }
  memset(&v31, 0, sizeof(v31));
  v30 = 0;
  v14 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1B64314(
                                                                   System_Collections_Generic_Dictionary_string__uint__TypeInfo,
                                                                   method,
                                                                   v2);
  System_Collections_Generic_Dictionary_object__uint____ctor(
    v14,
    (const MethodInfo_318A9B0 *)Method_System_Collections_Generic_Dictionary_string__uint___ctor__);
  AllDownLoadFilePathCRCDictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.AllDownLoadFilePathCRCDictionary;
  if ( !AllDownLoadFilePathCRCDictionary )
    sub_1B64324(0LL);
  System_Collections_Generic_Dictionary_object__uint___GetEnumerator(
    &v29,
    AllDownLoadFilePathCRCDictionary,
    (const MethodInfo_318B754 *)Method_System_Collections_Generic_Dictionary_string__uint__GetEnumerator__);
  v31 = v29;
  while ( System_Collections_Generic_Dictionary_Enumerator_object__uint___MoveNext(
            &v31,
            (const MethodInfo_327A0A8 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__uint__MoveNext__) )
  {
    key = v31.fields._current.fields.key;
    value = (uint32_t)v31.fields._current.fields.value;
    LocalFolderPath = (Il2CppObject *)MovieFileMerge__GetLocalFolderPath(this, v16);
    v20 = System_String__Format_61389768((System_String_o *)StringLiteral_24954/*"{0}/{1}"*/, LocalFolderPath, key, 0LL);
    v21 = System_IO_File__Exists(v20, 0LL);
    if ( !v21 )
      goto LABEL_11;
    AllBytes = System_IO_File__ReadAllBytes(v20, 0LL);
    v30 = value;
    if ( !Crc32_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
    v23 = Crc32__Compute(AllBytes, 0LL);
    if ( !System_UInt32__Equals_62305048((uint32_t)&v30, v23, 0LL) )
    {
      System_IO_File__Delete(v20, 0LL);
LABEL_11:
      if ( !v14 )
        sub_1B64324(v21);
      System_Collections_Generic_Dictionary_object__uint___Add(
        v14,
        key,
        value,
        (const MethodInfo_318B364 *)Method_System_Collections_Generic_Dictionary_string__uint__Add__);
      Parent = System_IO_Directory__GetParent(v20, 0LL);
      v25 = Parent;
      if ( !Parent )
        sub_1B64324(0LL);
      v26 = (System_String_o *)((__int64 (__fastcall *)(System_IO_DirectoryInfo_o *, Il2CppMethodPointer))Parent->klass->vtable._8_get_FullName.method)(
                                 Parent,
                                 Parent->klass->vtable._9_get_Name.methodPtr);
      if ( !System_IO_Directory__Exists(v26, 0LL) )
      {
        v27 = (System_String_o *)((__int64 (__fastcall *)(System_IO_DirectoryInfo_o *, Il2CppMethodPointer))v25->klass->vtable._8_get_FullName.method)(
                                   v25,
                                   v25->klass->vtable._9_get_Name.methodPtr);
        System_IO_Directory__CreateDirectory(v27, 0LL);
      }
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_object__uint___Dispose(
    &v31,
    (const MethodInfo_327A1CC *)Method_System_Collections_Generic_Dictionary_Enumerator_string__uint__Dispose__);
  return (System_Collections_Generic_Dictionary_string__uint__o *)v14;
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
  System_Collections_Generic_List_object__o *v13; // x19
  const MethodInfo *v14; // x1
  System_String_o *LocalFolderPath; // x0
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

  if ( (byte_49FB4A6 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__uint__get_Keys__, method);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToList_string___, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__Add__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__GetEnumerator__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_string___ctor__, v10);
    sub_1B640C8(&System_Collections_Generic_List_string__TypeInfo, v11);
    sub_1B640C8(&StringLiteral_24954/*"{0}/{1}"*/, v12);
    byte_49FB4A6 = 1;
  }
  memset(&v30, 0, sizeof(v30));
  v13 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_string__TypeInfo,
                                                       method,
                                                       v2);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_string___ctor__);
  LocalFolderPath = MovieFileMerge__GetLocalFolderPath(this, v14);
  if ( System_IO_Directory__Exists(LocalFolderPath, 0LL) )
  {
    AllDownLoadFilePathCRCDictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.AllDownLoadFilePathCRCDictionary;
    if ( !AllDownLoadFilePathCRCDictionary
      || (Keys = System_Collections_Generic_Dictionary_object__uint___get_Keys(
                   AllDownLoadFilePathCRCDictionary,
                   (const MethodInfo_318B044 *)Method_System_Collections_Generic_Dictionary_string__uint__get_Keys__),
          (AllDownLoadFilePathCRCDictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)System_Linq_Enumerable__ToList_object_((System_Collections_Generic_IEnumerable_TSource__o *)Keys, (const MethodInfo_2E7501C *)Method_System_Linq_Enumerable_ToList_string___)) == 0LL) )
    {
      sub_1B64324(AllDownLoadFilePathCRCDictionary);
    }
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v30,
      (System_Collections_Generic_List_object__o *)AllDownLoadFilePathCRCDictionary,
      (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_string__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v30,
              (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
    {
      current = v30.fields._current;
      v20 = (Il2CppObject *)MovieFileMerge__GetLocalFolderPath(this, v18);
      v21 = (Il2CppObject *)System_String__Format_61389768((System_String_o *)StringLiteral_24954/*"{0}/{1}"*/, v20, current, 0LL);
      v24 = v21;
      if ( !v13 )
        sub_1B64324(v21);
      items = v13->fields._items;
      v26 = Method_System_Collections_Generic_List_string__Add__;
      ++v13->fields._version;
      if ( !items )
        sub_1B64324(v21);
      size = v13->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v13,
          v21,
          *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
      }
      else
      {
        v28 = &items->obj.klass + size;
        v13->fields._size = size + 1;
        v28[4] = (Il2CppClass *)v24;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v28 + 4), (int32_t)v24, v22, v23);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v30,
      (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
  }
  return (System_Collections_Generic_List_string__o *)v13;
}


double __fastcall MovieFileMerge__GetTotalRequireSize(MovieFileMerge_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__uint__o *AllDownLoadFilePathCRCDictionary; // x0
  System_Collections_Generic_Dictionary_TKey__TValue__o *RequireDownLoadFilePathCRCDictionary; // x8

  if ( (byte_49FB497 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__uint__get_Count__, method);
    byte_49FB497 = 1;
  }
  AllDownLoadFilePathCRCDictionary = this->fields.AllDownLoadFilePathCRCDictionary;
  if ( !AllDownLoadFilePathCRCDictionary
    || (AllDownLoadFilePathCRCDictionary = (struct System_Collections_Generic_Dictionary_string__uint__o *)System_Collections_Generic_Dictionary_object__uint___get_Count((System_Collections_Generic_Dictionary_TKey__TValue__o *)AllDownLoadFilePathCRCDictionary, (const MethodInfo_318B034 *)Method_System_Collections_Generic_Dictionary_string__uint__get_Count__),
        (RequireDownLoadFilePathCRCDictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.RequireDownLoadFilePathCRCDictionary) == 0LL) )
  {
    sub_1B64324(AllDownLoadFilePathCRCDictionary);
  }
  return (double)((System_Collections_Generic_Dictionary_object__uint___get_Count(
                     RequireDownLoadFilePathCRCDictionary,
                     (const MethodInfo_318B034 *)Method_System_Collections_Generic_Dictionary_string__uint__get_Count__)
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
  __int64 v14; // x1
  __int64 v15; // x2
  System_Collections_Generic_Dictionary_TKey__TValue__o *v16; // x22
  int32_t v17; // w2
  int32_t v18; // w3
  System_Collections_Generic_Dictionary_TKey__TValue__o *RequireDownLoadFilePathCRCDictionary; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  System_Collections_Generic_Dictionary_TKey__TValue__o *v22; // x22
  int32_t v23; // w2
  int32_t v24; // w3
  int32_t v25; // w2
  int32_t v26; // w3
  __int64 v27; // x0
  int32_t v28; // w2
  int32_t v29; // w3
  struct System_String_o *FileName; // x0
  int32_t v31; // w2
  int32_t v32; // w3
  const MethodInfo *v33; // x1
  Il2CppObject *LocalFolderPath; // x0
  struct System_String_o *v35; // x0
  int32_t v36; // w2
  int32_t v37; // w3
  const MethodInfo *v38; // x1
  Il2CppObject *v39; // x0
  struct System_String_o *v40; // x0
  int32_t v41; // w2
  int32_t v42; // w3
  const MethodInfo *v43; // x1
  System_String_o *v44; // x0
  FileMergeAndSplit_c *v45; // x8
  Il2CppObject *v46; // x20
  struct System_String_o *v47; // x0
  int32_t v48; // w2
  int32_t v49; // w3

  v3 = assetFolderURL;
  if ( (byte_49FB49D & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__uint__Clear__, assetFolderURL);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__uint___ctor__, v5);
    sub_1B640C8(&System_Collections_Generic_Dictionary_string__uint__TypeInfo, v6);
    sub_1B640C8(&FileMergeAndSplit_TypeInfo, v7);
    sub_1B640C8(&System_IO_Path_TypeInfo, v8);
    sub_1B640C8(&StringLiteral_24954/*"{0}/{1}"*/, v9);
    sub_1B640C8(&StringLiteral_24950/*"{0}/SplitFile"*/, v10);
    sub_1B640C8(&StringLiteral_1124/*"/"*/, v11);
    sub_1B640C8(&StringLiteral_24956/*"{0}/{1}.usm"*/, v12);
    byte_49FB49D = 1;
  }
  AllDownLoadFilePathCRCDictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.AllDownLoadFilePathCRCDictionary;
  if ( AllDownLoadFilePathCRCDictionary )
  {
    System_Collections_Generic_Dictionary_object__uint___Clear(
      AllDownLoadFilePathCRCDictionary,
      (const MethodInfo_318B4EC *)Method_System_Collections_Generic_Dictionary_string__uint__Clear__);
  }
  else
  {
    v16 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1B64314(
                                                                     System_Collections_Generic_Dictionary_string__uint__TypeInfo,
                                                                     assetFolderURL,
                                                                     method);
    System_Collections_Generic_Dictionary_object__uint____ctor(
      v16,
      (const MethodInfo_318A9B0 *)Method_System_Collections_Generic_Dictionary_string__uint___ctor__);
    this->fields.AllDownLoadFilePathCRCDictionary = (struct System_Collections_Generic_Dictionary_string__uint__o *)v16;
    sub_1B6406C(
      (ServantStatusBattleListViewItem_o *)&this->fields.AllDownLoadFilePathCRCDictionary,
      (int32_t)v16,
      v17,
      v18);
  }
  RequireDownLoadFilePathCRCDictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.RequireDownLoadFilePathCRCDictionary;
  if ( RequireDownLoadFilePathCRCDictionary )
  {
    System_Collections_Generic_Dictionary_object__uint___Clear(
      RequireDownLoadFilePathCRCDictionary,
      (const MethodInfo_318B4EC *)Method_System_Collections_Generic_Dictionary_string__uint__Clear__);
  }
  else
  {
    v22 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1B64314(
                                                                     System_Collections_Generic_Dictionary_string__uint__TypeInfo,
                                                                     v14,
                                                                     v15);
    System_Collections_Generic_Dictionary_object__uint____ctor(
      v22,
      (const MethodInfo_318A9B0 *)Method_System_Collections_Generic_Dictionary_string__uint___ctor__);
    this->fields.RequireDownLoadFilePathCRCDictionary = (struct System_Collections_Generic_Dictionary_string__uint__o *)v22;
    sub_1B6406C(
      (ServantStatusBattleListViewItem_o *)&this->fields.RequireDownLoadFilePathCRCDictionary,
      (int32_t)v22,
      v23,
      v24);
  }
  this->fields.downloadProgress = 0;
  this->fields.isDownloadCancel = 0;
  this->fields.mergeClass = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.mergeClass, 0, v20, v21);
  this->fields.crcCheckerClass = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.crcCheckerClass, 0, v25, v26);
  if ( !v3 )
    sub_1B64324(v27);
  if ( System_String__EndsWith(v3, (System_String_o *)StringLiteral_1124/*"/"*/, 0LL) )
    v3 = System_String__TrimEnd_61405280(v3, 0x2Fu, 0LL);
  this->fields.assetFolderURL = v3;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.assetFolderURL, (int32_t)v3, v28, v29);
  if ( !System_IO_Path_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_IO_Path_TypeInfo);
  FileName = System_IO_Path__GetFileName(v3, 0LL);
  this->fields.assetFolder = FileName;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.assetFolder, (int32_t)FileName, v31, v32);
  LocalFolderPath = (Il2CppObject *)MovieFileMerge__GetLocalFolderPath(this, v33);
  v35 = System_String__Format((System_String_o *)StringLiteral_24950/*"{0}/SplitFile"*/, LocalFolderPath, 0LL);
  this->fields.outputSplitFileFolder = v35;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.outputSplitFileFolder, (int32_t)v35, v36, v37);
  v39 = (Il2CppObject *)MovieFileMerge__GetLocalFolderPath(this, v38);
  v40 = System_String__Format_61389768(
          (System_String_o *)StringLiteral_24956/*"{0}/{1}.usm"*/,
          v39,
          (Il2CppObject *)this->fields.assetFolder,
          0LL);
  this->fields.outputMergeFile = v40;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.outputMergeFile, (int32_t)v40, v41, v42);
  v44 = MovieFileMerge__GetLocalFolderPath(this, v43);
  v45 = FileMergeAndSplit_TypeInfo;
  v46 = (Il2CppObject *)v44;
  if ( !FileMergeAndSplit_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FileMergeAndSplit_TypeInfo);
    v45 = FileMergeAndSplit_TypeInfo;
  }
  v47 = System_String__Format_61389768(
          (System_String_o *)StringLiteral_24954/*"{0}/{1}"*/,
          v46,
          (Il2CppObject *)v45->static_fields->PathCRCFileName,
          0LL);
  this->fields.outputMergeFileCRC = v47;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.outputMergeFileCRC, (int32_t)v47, v48, v49);
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
  __int64 v4; // x20
  __int64 v5; // x0
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_49FB4A0 & 1) == 0 )
  {
    sub_1B640C8(&MovieFileMerge__Merge_d__34_TypeInfo, method);
    byte_49FB4A0 = 1;
  }
  v4 = sub_1B64314(MovieFileMerge__Merge_d__34_TypeInfo, method, v2);
  MovieFileMerge__Merge_d__34___ctor((MovieFileMerge__Merge_d__34_o *)v4, 0, 0LL);
  if ( !v4 )
    sub_1B64324(v5);
  *(_QWORD *)(v4 + 32) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v4 + 32), (int32_t)this, v6, v7);
  return (System_Collections_IEnumerator_o *)v4;
}


System_Collections_IEnumerator_o *__fastcall MovieFileMerge__PlayCRIMovie(
        MovieFileMerge_o *this,
        System_String_o *filePath,
        const MethodInfo *method)
{
  __int64 v4; // x20
  __int64 v5; // x0
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_49FB49C & 1) == 0 )
  {
    sub_1B640C8(&MovieFileMerge__PlayCRIMovie_d__30_TypeInfo, filePath);
    byte_49FB49C = 1;
  }
  v4 = sub_1B64314(MovieFileMerge__PlayCRIMovie_d__30_TypeInfo, filePath, method);
  MovieFileMerge__PlayCRIMovie_d__30___ctor((MovieFileMerge__PlayCRIMovie_d__30_o *)v4, 0, 0LL);
  if ( !v4 )
    sub_1B64324(v5);
  *(_QWORD *)(v4 + 32) = filePath;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v4 + 32), (int32_t)filePath, v6, v7);
  return (System_Collections_IEnumerator_o *)v4;
}


System_Collections_IEnumerator_o *__fastcall MovieFileMerge__PlayMP4(MovieFileMerge_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x20
  __int64 v5; // x0
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_49FB49A & 1) == 0 )
  {
    sub_1B640C8(&MovieFileMerge__PlayMP4_d__28_TypeInfo, method);
    byte_49FB49A = 1;
  }
  v4 = sub_1B64314(MovieFileMerge__PlayMP4_d__28_TypeInfo, method, v2);
  MovieFileMerge__PlayMP4_d__28___ctor((MovieFileMerge__PlayMP4_d__28_o *)v4, 0, 0LL);
  if ( !v4 )
    sub_1B64324(v5);
  *(_QWORD *)(v4 + 32) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v4 + 32), (int32_t)this, v6, v7);
  return (System_Collections_IEnumerator_o *)v4;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_IEnumerator_o *__fastcall MovieFileMerge__PlayMP4_37433828(
        MovieFileMerge_o *this,
        System_String_o *filePath,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v6; // x21
  __int64 v7; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  int32_t v10; // w2
  int32_t v11; // w3

  if ( (byte_49FB49B & 1) == 0 )
  {
    sub_1B640C8(&MovieFileMerge__PlayMP4_d__29_TypeInfo, filePath);
    byte_49FB49B = 1;
  }
  v6 = sub_1B64314(MovieFileMerge__PlayMP4_d__29_TypeInfo, filePath, *(_QWORD *)&mode);
  MovieFileMerge__PlayMP4_d__29___ctor((MovieFileMerge__PlayMP4_d__29_o *)v6, 0, 0LL);
  if ( !v6 )
    sub_1B64324(v7);
  *(_QWORD *)(v6 + 40) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v6 + 40), (int32_t)this, v8, v9);
  *(_QWORD *)(v6 + 32) = filePath;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v6 + 32), (int32_t)filePath, v10, v11);
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

  if ( (byte_49FB4A8 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Application_TypeInfo, method);
    sub_1B640C8(&ManagementManager_TypeInfo, v3);
    sub_1B640C8(&Method_SingletonMonoBehaviour_ManagementManager__get_Instance__, v4);
    byte_49FB4A8 = 1;
  }
  loader = this->fields.loader;
  p_loader = (ServantStatusBattleListViewItem_o *)&this->fields.loader;
  v5 = loader;
  if ( loader )
  {
    UnityEngine_Networking_UnityWebRequest__Dispose(v5, 0LL);
    p_loader->klass = 0LL;
    sub_1B6406C(p_loader, 0, v8, v9);
  }
  if ( !ManagementManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
  if ( !byte_49FB4AB )
  {
    sub_1B640C8(&ManagementManager_TypeInfo, method);
    byte_49FB4AB = 1;
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
    UnityEngine_Application__Quit_68921692(0LL);
  }
  else
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
    if ( !Instance )
      sub_1B64324(0LL);
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
  __int64 v13; // x1
  __int64 v14; // x2
  ErrorDialog_ClickDelegate_o *v15; // x22
  const MethodInfo *v16; // x2
  System_String_o *v17; // x1

  v4 = (Il2CppObject *)this;
  if ( (byte_49FB4AA & 1) == 0 )
  {
    sub_1B640C8(&ErrorDialog_ClickDelegate_TypeInfo, e);
    sub_1B640C8(&LocalizationManager_TypeInfo, v5);
    sub_1B640C8(&Method_MovieFileMerge_EndMergeRetryDialog__, v6);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_1B640C8(&StringLiteral_5302/*"Disk full"*/, v8);
    sub_1B640C8(&StringLiteral_9184/*"NETWORK_ERROR_DISK_FULL"*/, v9);
    this = (MovieFileMerge_o *)sub_1B640C8(&StringLiteral_1/*""*/, v10);
    byte_49FB4AA = 1;
  }
  if ( !e )
    goto LABEL_12;
  this = (MovieFileMerge_o *)((__int64 (__fastcall *)(System_Exception_o *, Il2CppMethodPointer, const MethodInfo *))e->klass->vtable._5_get_Message.method)(
                               e,
                               e->klass->vtable._6_get_Data.methodPtr,
                               method);
  if ( !this )
    goto LABEL_12;
  if ( !System_String__StartsWith((System_String_o *)this, (System_String_o *)StringLiteral_5302/*"Disk full"*/, 0LL) )
  {
    v17 = (System_String_o *)((__int64 (__fastcall *)(System_Exception_o *, Il2CppMethodPointer))e->klass->vtable._5_get_Message.method)(
                               e,
                               e->klass->vtable._6_get_Data.methodPtr);
    goto LABEL_11;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v12 = LocalizationManager__Get((System_String_o *)StringLiteral_9184/*"NETWORK_ERROR_DISK_FULL"*/, 0LL);
  v15 = (ErrorDialog_ClickDelegate_o *)sub_1B64314(ErrorDialog_ClickDelegate_TypeInfo, v13, v14);
  ErrorDialog_ClickDelegate___ctor(v15, v4, Method_MovieFileMerge_EndMergeRetryDialog__, 0LL);
  if ( !Instance )
LABEL_12:
    sub_1B64324(this);
  CommonUI__OpenErrorDialog((CommonUI_o *)Instance, (System_String_o *)StringLiteral_1/*""*/, v12, v15, 1, 0LL);
  v17 = (System_String_o *)StringLiteral_5302/*"Disk full"*/;
LABEL_11:
  MovieFileMerge__AssetLoadLogError((MovieFileMerge_o *)v4, v17, v16);
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
  __int64 v22; // x1
  __int64 v23; // x2
  FileMergeAndSplit_CRCChecker_o *v24; // x23
  ServantStatusBattleListViewItem_o *p_crcCheckerClass; // x20
  int32_t v26; // w2
  int32_t v27; // w3
  System_Collections_IEnumerator_o *v28; // x0
  ServantStatusBattleListViewItem_o *v29; // x19
  int32_t v30; // w2
  int32_t v31; // w3

  v2 = this;
  if ( (byte_49FB4AC & 1) == 0 )
  {
    sub_1B640C8(&FileMergeAndSplit_CRCChecker_TypeInfo, method);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__uint__get_Values__, v3);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToList_uint___, v4);
    this = (MovieFileMerge__CRCDownloadAndCheck_d__32_o *)sub_1B640C8(&FileMergeAndSplit_TypeInfo, v5);
    byte_49FB4AC = 1;
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
    sub_1B6406C(
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
        sub_1B6406C(p__2__current, (int32_t)v8, v10, v11);
        result = 1;
        *(_DWORD *)&p__2__current[-1].fields.isMine = 1;
        return result;
      }
LABEL_21:
      sub_1B64324(this);
    }
    return 0;
  }
  v2->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_21;
  Dic = MovieFileMerge__CreateDic(_4__this, _4__this->fields.outputMergeFileCRC, 0LL);
  _4__this->fields.AllDownLoadFilePathCRCDictionary = Dic;
  sub_1B6406C(
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
             (const MethodInfo_318B194 *)Method_System_Collections_Generic_Dictionary_string__uint__get_Values__);
  v21 = (System_Collections_Generic_List_uint__o *)System_Linq_Enumerable__ToList_uint_(
                                                     (System_Collections_Generic_IEnumerable_TSource__o *)Values,
                                                     (const MethodInfo_2E75114 *)Method_System_Linq_Enumerable_ToList_uint___);
  v24 = (FileMergeAndSplit_CRCChecker_o *)sub_1B64314(FileMergeAndSplit_CRCChecker_TypeInfo, v22, v23);
  FileMergeAndSplit_CRCChecker___ctor(v24, outputMergeFile, v21, 0LL);
  _4__this->fields.crcCheckerClass = v24;
  p_crcCheckerClass = (ServantStatusBattleListViewItem_o *)&_4__this->fields.crcCheckerClass;
  sub_1B6406C(p_crcCheckerClass, (int32_t)v24, v26, v27);
  this = (MovieFileMerge__CRCDownloadAndCheck_d__32_o *)p_crcCheckerClass->klass;
  if ( !p_crcCheckerClass->klass )
    goto LABEL_21;
  v28 = FileMergeAndSplit_CRCChecker__Run((FileMergeAndSplit_CRCChecker_o *)this, 0LL);
  v2->fields.__2__current = (Il2CppObject *)v28;
  v29 = (ServantStatusBattleListViewItem_o *)&v2->fields.__2__current;
  sub_1B6406C(v29, (int32_t)v28, v30, v31);
  *(_DWORD *)&v29[-1].fields.isMine = 2;
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
  __int64 v3; // x1
  __int64 v4; // x2
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_1B640DC(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_1B64314(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_1B640DC(&Method_MovieFileMerge__CRCDownloadAndCheck_d__32_System_Collections_IEnumerator_Reset__);
  sub_1B641F0(v5, v6);
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
  MovieFileMerge__DownloadMovie_d__33_o *v21; // x8
  Il2CppObject *v22; // x1
  MovieFileMerge__DownloadMovie_d__33_o *v23; // x0
  int32_t v24; // w2
  int32_t v25; // w3
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v26[2]; // [xsp+8h] [xbp-88h] BYREF
  MovieFileMerge__DownloadMovie_d__33_o **v27; // [xsp+68h] [xbp-28h]
  MovieFileMerge__DownloadMovie_d__33_o *v28; // [xsp+78h] [xbp-18h] BYREF

  v28 = this;
  v2 = this;
  if ( (byte_49FB4AE & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__uint__GetEnumerator__, method);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_Enumerator_string__uint__MoveNext__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_Enumerator_string__uint__get_Current__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_KeyValuePair_string__uint__get_Key__, v5);
    this = (MovieFileMerge__DownloadMovie_d__33_o *)sub_1B640C8(
                                                      &Method_System_Collections_Generic_KeyValuePair_string__uint__get_Value__,
                                                      v6);
    byte_49FB4AE = 1;
  }
  v27 = &v28;
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state != 1 )
  {
    if ( _1__state )
      return 0;
    v2->fields.__1__state = -1;
    if ( !_4__this )
      sub_1B64324(this);
    RequireDownLoadFilePathCRCDictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)_4__this->fields.RequireDownLoadFilePathCRCDictionary;
    _4__this->fields.isDownloading = 1;
    _4__this->fields.downloadProgress = 0;
    if ( !RequireDownLoadFilePathCRCDictionary )
      sub_1B64324(0LL);
    System_Collections_Generic_Dictionary_object__uint___GetEnumerator(
      v26,
      RequireDownLoadFilePathCRCDictionary,
      (const MethodInfo_318B754 *)Method_System_Collections_Generic_Dictionary_string__uint__GetEnumerator__);
    v10 = v28;
    v11 = *(_OWORD *)&v26[0].fields._dictionary;
    current = v26[0].fields._current;
    p__7__wrap1 = (ServantStatusBattleListViewItem_o *)&v28->fields.__7__wrap1;
    v26[1] = v26[0];
    *(_QWORD *)&v28->fields.__7__wrap1.fields._getEnumeratorRetType = *(_QWORD *)&v26[0].fields._getEnumeratorRetType;
    v10->fields.__7__wrap1.fields._current = current;
    *(_OWORD *)&v10->fields.__7__wrap1.fields._dictionary = v11;
    sub_1B6406C(p__7__wrap1, 0, v14, v15);
    v2 = v28;
  }
  v2->fields.__1__state = -3;
  v16 = System_Collections_Generic_Dictionary_Enumerator_object__uint___MoveNext(
          (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v2->fields.__7__wrap1,
          (const MethodInfo_327A0A8 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__uint__MoveNext__);
  v18 = v28;
  if ( v16 )
  {
    if ( !_4__this )
      sub_1B64324(v16);
    if ( _4__this->fields.isDownloadCancel )
    {
      _4__this->fields.isDownloading = 0;
      MovieFileMerge__DownloadMovie_d__33____m__Finally1(v18, v17);
      return 0;
    }
    else
    {
      v22 = (Il2CppObject *)MovieFileMerge__Download(
                              _4__this,
                              (System_String_o *)v28->fields.__7__wrap1.fields._current.fields.key,
                              (uint32_t)v28->fields.__7__wrap1.fields._current.fields.value,
                              0LL);
      v23 = v28;
      v28->fields.__2__current = v22;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v23->fields.__2__current, (int32_t)v22, v24, v25);
      result = 1;
      v28->fields.__1__state = 1;
    }
  }
  else
  {
    MovieFileMerge__DownloadMovie_d__33____m__Finally1(v28, v17);
    v21 = v28;
    *(_QWORD *)&v28->fields.__7__wrap1.fields._getEnumeratorRetType = 0LL;
    v21->fields.__7__wrap1.fields._current = 0u;
    *(_OWORD *)&v21->fields.__7__wrap1.fields._dictionary = 0u;
    if ( !_4__this )
      sub_1B64324(v20);
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
  __int64 v3; // x1
  __int64 v4; // x2
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_1B640DC(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_1B64314(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_1B640DC(&Method_MovieFileMerge__DownloadMovie_d__33_System_Collections_IEnumerator_Reset__);
  sub_1B641F0(v5, v6);
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
  if ( (byte_49FB4AF & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_Enumerator_string__uint__Dispose__, method);
    byte_49FB4AF = 1;
  }
  this->fields.__1__state = -1;
  System_Collections_Generic_Dictionary_Enumerator_object__uint___Dispose(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&this->fields.__7__wrap1,
    (const MethodInfo_327A1CC *)Method_System_Collections_Generic_Dictionary_Enumerator_string__uint__Dispose__);
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
  __int64 v2; // x2
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
  MovieFileMerge__Download_d__40_o *v47; // x1
  int32_t v48; // w2
  int32_t v49; // w3
  MovieFileMerge__Download_d__40_o *v50; // x21
  int32_t v51; // w1
  int32_t v52; // w2
  int32_t v53; // w3
  struct System_String_o *v54; // x1
  int32_t v55; // w2
  int32_t v56; // w3
  int32_t v57; // w1
  int32_t v58; // w2
  int32_t v59; // w3
  int32_t v60; // w2
  int32_t v61; // w3
  int32_t v62; // w1
  int32_t v63; // w2
  int32_t v64; // w3
  int32_t v65; // w2
  int32_t v66; // w3
  int32_t v67; // w1
  System_String_o *v68; // x0
  int32_t v69; // w2
  int32_t v70; // w3
  ManagementManager_c *v71; // x0
  _BOOL4 isDuringStartup; // w22
  Il2CppObject *Instance; // x21
  System_String_o *v74; // x22
  __int64 v75; // x1
  __int64 v76; // x2
  ErrorDialog_ClickDelegate_o *v77; // x23
  System_Byte_array *readData_5__5; // x20
  uint32_t v79; // w0
  Il2CppObject **p__2__current; // x19
  int32_t v81; // w2
  int32_t v82; // w3
  int v83; // w8
  UnityEngine_WaitForEndOfFrame_o *v84; // x20
  int32_t v85; // w2
  int32_t v86; // w3
  __int64 v87; // x1
  __int64 v88; // x2
  float unscaledTime; // s8
  UnityEngine_WaitForEndOfFrame_o *v90; // x21
  int32_t v91; // w2
  int32_t v92; // w3
  MovieFileMerge__Download_d__40_o **p_loader; // x22
  int32_t v94; // w2
  int32_t v95; // w3
  struct System_String_o **p_errorCode_5__11; // x21
  int32_t v97; // w2
  int32_t v98; // w3
  System_String_o *error; // x0
  System_Byte_array *data; // x0
  int32_t v101; // w2
  int32_t v102; // w3
  int32_t v103; // w2
  int32_t v104; // w3
  UnityEngine_WaitForEndOfFrame_o *v105; // x20
  int32_t v106; // w2
  int32_t v107; // w3
  int32_t v108; // w2
  int32_t v109; // w3
  System_String_o *v110; // x0
  int32_t v111; // w2
  int32_t v112; // w3
  int32_t v113; // w1
  System_IO_DirectoryInfo_o *Parent; // x0
  System_IO_DirectoryInfo_o *v115; // x21
  System_String_o *v116; // x0
  System_String_o *v117; // x21
  int64_t FreeSize; // x21
  ManagerConfig_c *v119; // x0
  ManagerConfig_c *v120; // x0
  Il2CppObject *v121; // x0
  System_String_o *errorCode_5__11; // x21
  CommonUI_o *v123; // x22
  __int64 v124; // x1
  __int64 v125; // x2
  ErrorDialog_ClickDelegate_o *v126; // x23
  UnityEngine_WaitForEndOfFrame_o *v127; // x20
  int32_t v128; // w2
  int32_t v129; // w3
  int autoRetryCount_5__3; // w21
  ManagerConfig_c *v131; // x0
  float DOWNLOAD_RETRY_DELAY_TIME; // s8
  UnityEngine_WaitForSeconds_o *v133; // x20
  int32_t v134; // w2
  int32_t v135; // w3
  Il2CppObject *v136; // x21
  ServantStatusBattleListViewItem_o *v137; // x20
  MovieFileMerge__Download_d__40_o *loader; // t1
  int32_t v139; // w2
  int32_t v140; // w3
  int32_t v141; // w2
  int32_t v142; // w3
  ServantStatusBattleListViewItem_o *p_readData_5__5; // x0
  struct UnityEngine_Networking_UnityWebRequest_o **v144; // x21
  int32_t v145; // w2
  int32_t v146; // w3
  int32_t v147; // w2
  int32_t v148; // w3
  ManagerConfig_c *v149; // x0
  Il2CppObject *v150; // x0
  System_String_o *v151; // x21
  CommonUI_o *v152; // x22
  __int64 v153; // x1
  __int64 v154; // x2
  ErrorDialog_ClickDelegate_o *v155; // x23
  UnityEngine_WaitForSeconds_o *v156; // x20
  int32_t v157; // w2
  int32_t v158; // w3
  System_String_o *v159; // x22
  __int64 v160; // x1
  __int64 v161; // x2
  ErrorDialog_ClickDelegate_o *v162; // x23
  UnityEngine_WaitForEndOfFrame_o *v163; // x20
  int32_t v164; // w2
  int32_t v165; // w3
  int32_t v166; // w2
  int32_t v167; // w3
  int32_t v168; // w2
  int32_t v169; // w3
  int32_t v170; // w2
  int32_t v171; // w3
  float downloadProgress; // s0
  float loadProgress_5__7; // s9
  float v174; // s8
  float v175; // s0
  bool v176; // zf
  float v177; // s8
  System_String_o *downloadingURL; // x22
  System_String_o *v179; // x0
  System_String_o *v180; // x0
  int32_t v181; // w2
  int32_t v182; // w3
  System_Collections_Generic_Dictionary_string__string__o *ResponseHeaders; // x0
  System_Collections_Generic_Dictionary_object__object__o *v184; // x22
  Il2CppObject *v185; // x22
  MovieFileMerge__Download_d__40_o *v186; // x22
  int v187; // w8
  System_String_o *v188; // x23
  System_String_o *v189; // x0
  System_String_o *v190; // x0
  __int64 v191; // x1
  ManagementManager_c *v192; // x0
  _BOOL4 v193; // w23
  Il2CppObject *v194; // x0
  struct System_String_o *errorLocalizeCode_5__12; // x8
  CommonUI_o *v196; // x22
  System_String_o *v197; // x21
  System_String_o *v198; // x23
  System_String_o *v199; // x23
  __int64 v200; // x1
  __int64 v201; // x2
  ErrorDialog_ClickDelegate_o *v202; // x24
  ManagerConfig_c *v203; // x0
  Il2CppObject *wait_5__8; // x1
  System_String_o *v205; // x23
  System_String_o *v206; // x23
  __int64 v207; // x1
  __int64 v208; // x2
  ErrorDialog_ClickDelegate_o *v209; // x24
  __int64 v210; // x0
  __int64 v211; // x1
  __int64 v212; // x2
  System_IO_IOException_o *v213; // x21
  System_String_o *v214; // x0
  __int64 v215; // x0
  UnityEngine_Networking_UnityWebRequest_o *v216; // x0
  ServantStatusBattleListViewItem_o *v217; // x20
  int32_t v218; // w2
  int32_t v219; // w3
  ServantStatusBattleListViewItem_o *v220; // x19
  int32_t v221; // w2
  int32_t v222; // w3
  System_Nullable_Vector2__o effectDistance; // [xsp+0h] [xbp-70h]
  System_Nullable_Vector2__o effectDistancea; // [xsp+0h] [xbp-70h]
  Il2CppObject *value; // [xsp+38h] [xbp-38h] BYREF

  v4 = this;
  if ( (byte_49FB4AD & 1) == 0 )
  {
    sub_1B640C8(&char___TypeInfo, method);
    sub_1B640C8(&ErrorDialog_ClickDelegate_TypeInfo, v5);
    sub_1B640C8(&CommonServicePluginScript_TypeInfo, v6);
    sub_1B640C8(&Crc32_TypeInfo, v7);
    sub_1B640C8(&UnityEngine_Debug_TypeInfo, v8);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__string__TryGetValue__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__string__get_Count__, v10);
    sub_1B640C8(&LocalizationManager_TypeInfo, v11);
    sub_1B640C8(&ManagementManager_TypeInfo, v12);
    sub_1B640C8(&ManagerConfig_TypeInfo, v13);
    sub_1B640C8(&Method_MovieFileMerge_EndRetryDialog__, v14);
    sub_1B640C8(&Method_MovieFileMerge_EndWarningDialog__, v15);
    sub_1B640C8(&NetworkManager_TypeInfo, v16);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v17);
    sub_1B640C8(&string___TypeInfo, v18);
    sub_1B640C8(&UnityEngine_WaitForEndOfFrame_TypeInfo, v19);
    sub_1B640C8(&UnityEngine_WaitForSeconds_TypeInfo, v20);
    sub_1B640C8(&StringLiteral_7134/*"HTTP"*/, v21);
    sub_1B640C8(&StringLiteral_818/*")\n\n503 Auto retry count "*/, v22);
    sub_1B640C8(&StringLiteral_821/*")\nfile crc ("*/, v23);
    sub_1B640C8(&StringLiteral_1515/*"503"*/, v24);
    sub_1B640C8(&StringLiteral_2139/*"ASSET_LOADER_ERROR_BOOT_RETRY_MESSAGE"*/, v25);
    sub_1B640C8(&StringLiteral_15870/*"[FFFF80]Download error for debug"*/, v26);
    sub_1B640C8(&StringLiteral_24954/*"{0}/{1}"*/, v27);
    sub_1B640C8(&StringLiteral_12205/*"STATUS"*/, v28);
    sub_1B640C8(&StringLiteral_817/*")\n\n"*/, v29);
    sub_1B640C8(&StringLiteral_697/*"("*/, v30);
    sub_1B640C8(&StringLiteral_819/*")\n\nAssetBundle file check sum error\nlist crc ("*/, v31);
    sub_1B640C8(&StringLiteral_815/*")"*/, v32);
    sub_1B640C8(&StringLiteral_2140/*"ASSET_LOADER_ERROR_TIME_OVER_MESSAGE"*/, v33);
    sub_1B640C8(&StringLiteral_820/*")\n\nAssetBundle file download time over"*/, v34);
    this = (MovieFileMerge__Download_d__40_o *)sub_1B640C8(&StringLiteral_1/*""*/, v35);
    byte_49FB4AD = 1;
  }
  value = 0LL;
  _4__this = v4->fields.__4__this;
  switch ( v4->fields.__1__state )
  {
    case 0:
      v4->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_177;
      v37 = System_String__Format_61389768(
              (System_String_o *)StringLiteral_24954/*"{0}/{1}"*/,
              (Il2CppObject *)_4__this->fields.assetFolderURL,
              (Il2CppObject *)v4->fields.fileName,
              0LL);
      _4__this->fields.downloadingURL = v37;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&_4__this->fields.downloadingURL, (int32_t)v37, v38, v39);
      _4__this->fields.downloadingCRC = v4->fields.crc;
      LocalFolderPath = (Il2CppObject *)MovieFileMerge__GetLocalFolderPath(_4__this, 0LL);
      v41 = System_String__Format_61389768(
              (System_String_o *)StringLiteral_24954/*"{0}/{1}"*/,
              LocalFolderPath,
              (Il2CppObject *)v4->fields.fileName,
              0LL);
      v4->fields._dlFilePath_5__2 = v41;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v4->fields._dlFilePath_5__2, (int32_t)v41, v42, v43);
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
      v90 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B64314(UnityEngine_WaitForEndOfFrame_TypeInfo, v87, v88);
      UnityEngine_WaitForEndOfFrame___ctor(v90, 0LL);
      v4->fields._wait_5__8 = v90;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v4->fields._wait_5__8, (int32_t)v90, v91, v92);
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
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&_4__this->fields.loader, 0, v108, v109);
        LOBYTE(this) = 0;
        _4__this->fields.isDownloading = 0;
        return (char)this;
      }
      downloadProgress = UnityEngine_Networking_UnityWebRequest__get_downloadProgress(
                           (UnityEngine_Networking_UnityWebRequest_o *)this,
                           0LL);
      loadProgress_5__7 = v4->fields._loadProgress_5__7;
      v174 = downloadProgress;
      v175 = UnityEngine_Time__get_unscaledTime(0LL);
      v176 = v174 == loadProgress_5__7;
      v177 = v175;
      if ( !v176 )
      {
        v203 = ManagerConfig_TypeInfo;
        if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
          v203 = ManagerConfig_TypeInfo;
        }
        v4->fields._requestTime_5__6 = v177 + v203->static_fields->TIMEOUT;
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
          sub_1B6406C((ServantStatusBattleListViewItem_o *)p__2__current, (int32_t)wait_5__8, v94, v95);
          v83 = 2;
          goto LABEL_119;
        }
        goto LABEL_177;
      }
      if ( v175 < v4->fields._requestTime_5__6 )
        goto LABEL_161;
LABEL_44:
      *(_WORD *)&v4->fields._isAutoRetry_5__9 = 0;
      v4->fields._errorCode_5__11 = 0LL;
      p_errorCode_5__11 = &v4->fields._errorCode_5__11;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v4->fields._errorCode_5__11, 0, v94, v95);
      v4->fields._errorLocalizeCode_5__12 = 0LL;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v4->fields._errorLocalizeCode_5__12, 0, v97, v98);
      this = *p_loader;
      if ( !*p_loader )
LABEL_177:
        sub_1B64324(this);
      if ( !UnityEngine_Networking_UnityWebRequest__get_isDone((UnityEngine_Networking_UnityWebRequest_o *)this, 0LL) )
      {
        v110 = System_String__Concat_61386656(
                 (System_String_o *)StringLiteral_697/*"("*/,
                 _4__this->fields.downloadingURL,
                 (System_String_o *)StringLiteral_820/*")\n\nAssetBundle file download time over"*/,
                 0LL);
        v113 = (int)v110;
        *p_errorCode_5__11 = v110;
LABEL_63:
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&v4->fields._errorCode_5__11, v113, v111, v112);
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
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&v4->fields._readData_5__5, (int32_t)data, v101, v102);
        v4->fields.__2__current = 0LL;
        p__2__current = &v4->fields.__2__current;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)p__2__current, 0, v103, v104);
        v83 = 3;
        goto LABEL_119;
      }
      this = (MovieFileMerge__Download_d__40_o *)_4__this->fields.loader;
      if ( !this )
        goto LABEL_177;
      downloadingURL = _4__this->fields.downloadingURL;
      v179 = UnityEngine_Networking_UnityWebRequest__get_error((UnityEngine_Networking_UnityWebRequest_o *)this, 0LL);
      v180 = System_String__Concat_61388660(
               (System_String_o *)StringLiteral_697/*"("*/,
               downloadingURL,
               (System_String_o *)StringLiteral_817/*")\n\n"*/,
               v179,
               0LL);
      *p_errorCode_5__11 = v180;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v4->fields._errorCode_5__11, (int32_t)v180, v181, v182);
      this = (MovieFileMerge__Download_d__40_o *)_4__this->fields.loader;
      if ( !this )
        goto LABEL_177;
      ResponseHeaders = UnityEngine_Networking_UnityWebRequest__GetResponseHeaders(
                          (UnityEngine_Networking_UnityWebRequest_o *)this,
                          0LL);
      if ( !ResponseHeaders )
        break;
      v184 = (System_Collections_Generic_Dictionary_object__object__o *)ResponseHeaders;
      if ( System_Collections_Generic_Dictionary_object__object___get_Count(
             (System_Collections_Generic_Dictionary_object__object__o *)ResponseHeaders,
             (const MethodInfo_31790C8 *)Method_System_Collections_Generic_Dictionary_string__string__get_Count__) < 1
        || !System_Collections_Generic_Dictionary_object__object___TryGetValue(
              v184,
              (Il2CppObject *)StringLiteral_12205/*"STATUS"*/,
              &value,
              (const MethodInfo_317AC04 *)Method_System_Collections_Generic_Dictionary_string__string__TryGetValue__) )
      {
        break;
      }
      v185 = value;
      this = (MovieFileMerge__Download_d__40_o *)sub_1B64170(char___TypeInfo, 1LL);
      if ( !this )
        goto LABEL_177;
      v47 = this;
      if ( !LODWORD(this->fields.__2__current) )
        goto LABEL_169;
      LOWORD(this->fields.__4__this) = 32;
      if ( !v185 )
        goto LABEL_177;
      this = (MovieFileMerge__Download_d__40_o *)System_String__Split_61397780(
                                                   (System_String_o *)v185,
                                                   (System_Char_array *)this,
                                                   1,
                                                   0LL);
      if ( !this )
        goto LABEL_177;
      v186 = this;
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
      if ( LODWORD(v186->fields.__2__current) <= 1 )
        goto LABEL_169;
      this = (MovieFileMerge__Download_d__40_o *)v186->fields.fileName;
      if ( !this )
        goto LABEL_177;
      if ( System_String__Equals_61383712((System_String_o *)this, (System_String_o *)StringLiteral_1515/*"503"*/, 0LL) )
      {
        v187 = v4->fields._autoRetryCount_5__3 + 1;
        v4->fields._isAutoRetry_5__9 = 1;
        v4->fields._autoRetryCount_5__3 = v187;
        v188 = _4__this->fields.downloadingURL;
        v189 = System_Int32__ToString((int)v4 + 64, 0LL);
        v190 = System_String__Concat_61388660(
                 (System_String_o *)StringLiteral_697/*"("*/,
                 v188,
                 (System_String_o *)StringLiteral_818/*")\n\n503 Auto retry count "*/,
                 v189,
                 0LL);
        v113 = (int)v190;
        v4->fields._errorCode_5__11 = v190;
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
      v79 = Crc32__Compute(readData_5__5, 0LL);
      v4->fields.__2__current = 0LL;
      p__2__current = &v4->fields.__2__current;
      *((_DWORD *)p__2__current + 24) = v79;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)p__2__current, 0, v81, v82);
      v83 = 4;
      goto LABEL_119;
    case 4:
      v4->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_177;
      downloadingCRC = _4__this->fields.downloadingCRC;
      if ( v4->fields._downloadCrc_5__13 != downloadingCRC && downloadingCRC )
      {
        this = (MovieFileMerge__Download_d__40_o *)sub_1B64170(string___TypeInfo, 7LL);
        if ( !this )
          goto LABEL_177;
        v50 = this;
        if ( LODWORD(this->fields.__2__current) )
        {
          v51 = StringLiteral_697/*"("*/;
          this->fields.__4__this = (struct MovieFileMerge_o *)StringLiteral_697/*"("*/;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.__4__this, v51, v48, v49);
          if ( LODWORD(v50->fields.__2__current) > 1 )
          {
            v54 = _4__this->fields.downloadingURL;
            v50->fields.fileName = v54;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)&v50->fields.fileName, (int32_t)v54, v52, v53);
            if ( LODWORD(v50->fields.__2__current) > 2 )
            {
              v57 = StringLiteral_819/*")\n\nAssetBundle file check sum error\nlist crc ("*/;
              *(_QWORD *)&v50->fields.crc = StringLiteral_819/*")\n\nAssetBundle file check sum error\nlist crc ("*/;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)&v50->fields.crc, v57, v55, v56);
              this = (MovieFileMerge__Download_d__40_o *)System_UInt32__ToString((int)_4__this + 96, 0LL);
              if ( LODWORD(v50->fields.__2__current) > 3 )
              {
                v50->fields._dlFilePath_5__2 = (struct System_String_o *)this;
                sub_1B6406C((ServantStatusBattleListViewItem_o *)&v50->fields._dlFilePath_5__2, (int32_t)this, v58, v59);
                if ( LODWORD(v50->fields.__2__current) > 4 )
                {
                  v62 = StringLiteral_821/*")\nfile crc ("*/;
                  *(_QWORD *)&v50->fields._autoRetryCount_5__3 = StringLiteral_821/*")\nfile crc ("*/;
                  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v50->fields._autoRetryCount_5__3, v62, v60, v61);
                  this = (MovieFileMerge__Download_d__40_o *)System_UInt32__ToString((int)v4 + 120, 0LL);
                  if ( LODWORD(v50->fields.__2__current) > 5 )
                  {
                    v50->fields._readData_5__5 = (struct System_Byte_array *)this;
                    sub_1B6406C(
                      (ServantStatusBattleListViewItem_o *)&v50->fields._readData_5__5,
                      (int32_t)this,
                      v63,
                      v64);
                    if ( LODWORD(v50->fields.__2__current) > 6 )
                    {
                      v67 = StringLiteral_815/*")"*/;
                      *(_QWORD *)&v50->fields._requestTime_5__6 = StringLiteral_815/*")"*/;
                      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v50->fields._requestTime_5__6, v67, v65, v66);
                      v68 = System_String__Concat_61388924((System_String_array *)v50, 0LL);
                      v4->fields._errorCode_5__11 = v68;
                      sub_1B6406C(
                        (ServantStatusBattleListViewItem_o *)&v4->fields._errorCode_5__11,
                        (int32_t)v68,
                        v69,
                        v70);
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
        sub_1B6432C(this, v47);
      }
      Parent = System_IO_Directory__GetParent(v4->fields._dlFilePath_5__2, 0LL);
      v115 = Parent;
      if ( !Parent )
        sub_1B64324(0LL);
      if ( (((__int64 (__fastcall *)(System_IO_DirectoryInfo_o *, Il2CppMethodPointer))Parent->klass->vtable._10_get_Exists.method)(
              Parent,
              Parent->klass->vtable._11_Delete.methodPtr) & 1) == 0 )
      {
        v116 = (System_String_o *)((__int64 (__fastcall *)(System_IO_DirectoryInfo_o *, Il2CppMethodPointer))v115->klass->vtable._8_get_FullName.method)(
                                    v115,
                                    v115->klass->vtable._9_get_Name.methodPtr);
        System_IO_Directory__CreateDirectory(v116, 0LL);
      }
      v117 = MovieFileMerge__GetLocalFolderPath(_4__this, 0LL);
      if ( !CommonServicePluginScript_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CommonServicePluginScript_TypeInfo);
      FreeSize = CommonServicePluginScript__GetFreeSize(v117, 0LL);
      if ( FreeSize >= 1 )
      {
        v119 = ManagerConfig_TypeInfo;
        if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
          v119 = ManagerConfig_TypeInfo;
        }
        if ( FreeSize < v119->static_fields->LIMIT_FREE_SIZE )
        {
          v210 = sub_1B640DC(&System_IO_IOException_TypeInfo);
          v213 = (System_IO_IOException_o *)sub_1B64314(v210, v211, v212);
          v214 = (System_String_o *)sub_1B640DC(&StringLiteral_5302/*"Disk full"*/);
          System_IO_IOException___ctor_61515632(v213, v214, 0LL);
          v215 = sub_1B640DC(&Method_MovieFileMerge__Download_d__40_MoveNext__);
          sub_1B641F0(v213, v215);
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
      if ( !byte_49FB4AB )
      {
        sub_1B640C8(&ManagementManager_TypeInfo, method);
        byte_49FB4AB = 1;
      }
      v71 = ManagementManager_TypeInfo;
      if ( !ManagementManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
        v71 = ManagementManager_TypeInfo;
      }
      isDuringStartup = v71->static_fields->isDuringStartup;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      if ( isDuringStartup )
      {
        v74 = LocalizationManager__Get((System_String_o *)StringLiteral_2139/*"ASSET_LOADER_ERROR_BOOT_RETRY_MESSAGE"*/, 0LL);
        v77 = (ErrorDialog_ClickDelegate_o *)sub_1B64314(ErrorDialog_ClickDelegate_TypeInfo, v75, v76);
        ErrorDialog_ClickDelegate___ctor(v77, (Il2CppObject *)_4__this, Method_MovieFileMerge_EndRetryDialog__, 0LL);
        if ( !Instance )
          goto LABEL_177;
        CommonUI__OpenRetryBootDialog((CommonUI_o *)Instance, (System_String_o *)StringLiteral_1/*""*/, v74, v77, 1, 0LL);
      }
      else
      {
        v159 = LocalizationManager__Get((System_String_o *)StringLiteral_2140/*"ASSET_LOADER_ERROR_TIME_OVER_MESSAGE"*/, 0LL);
        v162 = (ErrorDialog_ClickDelegate_o *)sub_1B64314(ErrorDialog_ClickDelegate_TypeInfo, v160, v161);
        ErrorDialog_ClickDelegate___ctor(v162, (Il2CppObject *)_4__this, Method_MovieFileMerge_EndRetryDialog__, 0LL);
        if ( !Instance )
          goto LABEL_177;
        CommonUI__OpenRetryDialog((CommonUI_o *)Instance, (System_String_o *)StringLiteral_1/*""*/, v159, v162, 1, 0LL);
      }
LABEL_117:
      if ( !_4__this->fields.isErrorDialog )
        goto LABEL_120;
      v163 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B64314(UnityEngine_WaitForEndOfFrame_TypeInfo, method, v2);
      UnityEngine_WaitForEndOfFrame___ctor(v163, 0LL);
      v4->fields.__2__current = (Il2CppObject *)v163;
      p__2__current = &v4->fields.__2__current;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)p__2__current, (int32_t)v163, v164, v165);
      v83 = 10;
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
    v120 = ManagerConfig_TypeInfo;
    if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
      v120 = ManagerConfig_TypeInfo;
    }
    if ( v120->static_fields->UseDebugCommand )
    {
      _4__this->fields.isErrorDialog = 1;
      v121 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      errorCode_5__11 = v4->fields._errorCode_5__11;
      v123 = (CommonUI_o *)v121;
      v126 = (ErrorDialog_ClickDelegate_o *)sub_1B64314(ErrorDialog_ClickDelegate_TypeInfo, v124, v125);
      ErrorDialog_ClickDelegate___ctor(v126, (Il2CppObject *)_4__this, Method_MovieFileMerge_EndWarningDialog__, 0LL);
      if ( !v123 )
        goto LABEL_177;
      *(_QWORD *)&effectDistance.fields.hasValue = 0LL;
      effectDistance.fields.value.fields.y = 0.0;
      CommonUI__OpenWarningDialog(
        v123,
        (System_String_o *)StringLiteral_15870/*"[FFFF80]Download error for debug"*/,
        errorCode_5__11,
        v126,
        1,
        0,
        -1.0,
        1,
        effectDistance,
        0LL);
LABEL_82:
      if ( _4__this->fields.isErrorDialog )
      {
        v127 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B64314(UnityEngine_WaitForEndOfFrame_TypeInfo, method, v2);
        UnityEngine_WaitForEndOfFrame___ctor(v127, 0LL);
        v4->fields.__2__current = (Il2CppObject *)v127;
        p__2__current = &v4->fields.__2__current;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)p__2__current, (int32_t)v127, v128, v129);
        v83 = 5;
        goto LABEL_119;
      }
    }
    if ( v4->fields._isAutoRetry_5__9 )
    {
      autoRetryCount_5__3 = v4->fields._autoRetryCount_5__3;
      v131 = ManagerConfig_TypeInfo;
      if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
        v131 = ManagerConfig_TypeInfo;
      }
      DOWNLOAD_RETRY_DELAY_TIME = v131->static_fields->DOWNLOAD_RETRY_DELAY_TIME;
      v133 = (UnityEngine_WaitForSeconds_o *)sub_1B64314(UnityEngine_WaitForSeconds_TypeInfo, method, v2);
      UnityEngine_WaitForSeconds___ctor(v133, DOWNLOAD_RETRY_DELAY_TIME * (float)autoRetryCount_5__3, 0LL);
      v4->fields.__2__current = (Il2CppObject *)v133;
      p__2__current = &v4->fields.__2__current;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)p__2__current, (int32_t)v133, v134, v135);
      v83 = 6;
      goto LABEL_119;
    }
    if ( v4->fields._isCrcError_5__10 )
    {
      v136 = (Il2CppObject *)v4->fields._errorCode_5__11;
      if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
      UnityEngine_Debug__LogError(v136, 0LL);
    }
    else
    {
      MovieFileMerge__AssetLoadLogError(_4__this, v4->fields._errorCode_5__11, 0LL);
      _4__this->fields.isErrorDialog = 1;
      if ( !ManagementManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
      if ( !byte_49FB4AB )
      {
        sub_1B640C8(&ManagementManager_TypeInfo, v191);
        byte_49FB4AB = 1;
      }
      v192 = ManagementManager_TypeInfo;
      if ( !ManagementManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
        v192 = ManagementManager_TypeInfo;
      }
      v193 = v192->static_fields->isDuringStartup;
      v194 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      errorLocalizeCode_5__12 = v4->fields._errorLocalizeCode_5__12;
      v196 = (CommonUI_o *)v194;
      v197 = (System_String_o *)StringLiteral_1/*""*/;
      if ( v193 )
      {
        if ( errorLocalizeCode_5__12 )
          v198 = v4->fields._errorLocalizeCode_5__12;
        else
          v198 = (System_String_o *)StringLiteral_2139/*"ASSET_LOADER_ERROR_BOOT_RETRY_MESSAGE"*/;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v199 = LocalizationManager__Get(v198, 0LL);
        v202 = (ErrorDialog_ClickDelegate_o *)sub_1B64314(ErrorDialog_ClickDelegate_TypeInfo, v200, v201);
        ErrorDialog_ClickDelegate___ctor(v202, (Il2CppObject *)_4__this, Method_MovieFileMerge_EndRetryDialog__, 0LL);
        if ( !v196 )
          goto LABEL_177;
        CommonUI__OpenRetryBootDialog(v196, v197, v199, v202, 1, 0LL);
      }
      else
      {
        if ( errorLocalizeCode_5__12 )
          v205 = v4->fields._errorLocalizeCode_5__12;
        else
          v205 = (System_String_o *)StringLiteral_2140/*"ASSET_LOADER_ERROR_TIME_OVER_MESSAGE"*/;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v206 = LocalizationManager__Get(v205, 0LL);
        v209 = (ErrorDialog_ClickDelegate_o *)sub_1B64314(ErrorDialog_ClickDelegate_TypeInfo, v207, v208);
        ErrorDialog_ClickDelegate___ctor(v209, (Il2CppObject *)_4__this, Method_MovieFileMerge_EndRetryDialog__, 0LL);
        if ( !v196 )
          goto LABEL_177;
        CommonUI__OpenRetryDialog(v196, v197, v206, v209, 1, 0LL);
      }
LABEL_36:
      if ( _4__this->fields.isErrorDialog )
      {
        v84 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B64314(UnityEngine_WaitForEndOfFrame_TypeInfo, method, v2);
        UnityEngine_WaitForEndOfFrame___ctor(v84, 0LL);
        v4->fields.__2__current = (Il2CppObject *)v84;
        p__2__current = &v4->fields.__2__current;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)p__2__current, (int32_t)v84, v85, v86);
        v83 = 7;
        goto LABEL_119;
      }
    }
  }
LABEL_92:
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_49F7D6C )
  {
    sub_1B640C8(&NetworkManager_TypeInfo, method);
    byte_49F7D6C = 1;
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
    v137 = (ServantStatusBattleListViewItem_o *)&_4__this->fields.loader;
    this = loader;
    if ( !loader )
      goto LABEL_177;
    UnityEngine_Networking_UnityWebRequest__Dispose((UnityEngine_Networking_UnityWebRequest_o *)this, 0LL);
    v137->klass = 0LL;
    sub_1B6406C(v137, 0, v139, v140);
    v4->fields._readData_5__5 = 0LL;
    p_readData_5__5 = (ServantStatusBattleListViewItem_o *)&v4->fields._readData_5__5;
  }
  else
  {
    if ( !_4__this )
      goto LABEL_177;
    v144 = &_4__this->fields.loader;
    this = (MovieFileMerge__Download_d__40_o *)_4__this->fields.loader;
    if ( v4->fields._isDownload_5__4 )
    {
      if ( !this )
        goto LABEL_177;
      UnityEngine_Networking_UnityWebRequest__Dispose((UnityEngine_Networking_UnityWebRequest_o *)this, 0LL);
      *v144 = 0LL;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&_4__this->fields.loader, 0, v145, v146);
      v4->fields._readData_5__5 = 0LL;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v4->fields._readData_5__5, 0, v147, v148);
      if ( !v4->fields._isCrcError_5__10 )
      {
LABEL_120:
        v4->fields._wait_5__8 = 0LL;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&v4->fields._wait_5__8, 0, v2, v3);
        v4->fields._errorCode_5__11 = 0LL;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&v4->fields._errorCode_5__11, 0, v166, v167);
        v4->fields._errorLocalizeCode_5__12 = 0LL;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&v4->fields._errorLocalizeCode_5__12, 0, v168, v169);
        do
        {
          v4->fields._readData_5__5 = 0LL;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)&v4->fields._readData_5__5, 0, v170, v171);
LABEL_172:
          v4->fields._readData_5__5 = 0LL;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)&v4->fields._readData_5__5, 0, v44, v45);
        }
        while ( !v4->fields._isDownload_5__4 );
        v216 = UnityEngine_Networking_UnityWebRequest__Get(_4__this->fields.downloadingURL, 0LL);
        _4__this->fields.loader = v216;
        v217 = (ServantStatusBattleListViewItem_o *)&_4__this->fields.loader;
        sub_1B6406C(v217, (int32_t)v216, v218, v219);
        this = (MovieFileMerge__Download_d__40_o *)v217->klass;
        if ( v217->klass )
        {
          UnityEngine_Networking_UnityWebRequest__SendWebRequest((UnityEngine_Networking_UnityWebRequest_o *)this, 0LL);
          v4->fields.__2__current = 0LL;
          v220 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
          sub_1B6406C(v220, 0, v221, v222);
          LOBYTE(this) = 1;
          *(_DWORD *)&v220[-1].fields.isMine = 1;
          return (char)this;
        }
        goto LABEL_177;
      }
      if ( !v4->fields._errorCode_5__11 )
        goto LABEL_114;
      v149 = ManagerConfig_TypeInfo;
      if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
        v149 = ManagerConfig_TypeInfo;
      }
      if ( !v149->static_fields->UseDebugCommand )
        goto LABEL_114;
      _4__this->fields.isErrorDialog = 1;
      v150 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v151 = v4->fields._errorCode_5__11;
      v152 = (CommonUI_o *)v150;
      v155 = (ErrorDialog_ClickDelegate_o *)sub_1B64314(ErrorDialog_ClickDelegate_TypeInfo, v153, v154);
      ErrorDialog_ClickDelegate___ctor(v155, (Il2CppObject *)_4__this, Method_MovieFileMerge_EndWarningDialog__, 0LL);
      if ( !v152 )
        goto LABEL_177;
      *(_QWORD *)&effectDistancea.fields.hasValue = 0LL;
      effectDistancea.fields.value.fields.y = 0.0;
      CommonUI__OpenWarningDialog(
        v152,
        (System_String_o *)StringLiteral_15870/*"[FFFF80]Download error for debug"*/,
        v151,
        v155,
        1,
        0,
        -1.0,
        1,
        effectDistancea,
        0LL);
LABEL_57:
      if ( _4__this->fields.isErrorDialog )
      {
        v105 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B64314(UnityEngine_WaitForEndOfFrame_TypeInfo, method, v2);
        UnityEngine_WaitForEndOfFrame___ctor(v105, 0LL);
        v4->fields.__2__current = (Il2CppObject *)v105;
        p__2__current = &v4->fields.__2__current;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)p__2__current, (int32_t)v105, v106, v107);
        v83 = 8;
      }
      else
      {
LABEL_114:
        v156 = (UnityEngine_WaitForSeconds_o *)sub_1B64314(UnityEngine_WaitForSeconds_TypeInfo, method, v2);
        UnityEngine_WaitForSeconds___ctor(v156, 1.0, 0LL);
        v4->fields.__2__current = (Il2CppObject *)v156;
        p__2__current = &v4->fields.__2__current;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)p__2__current, (int32_t)v156, v157, v158);
        v83 = 9;
      }
LABEL_119:
      *((_DWORD *)p__2__current - 2) = v83;
      LOBYTE(this) = 1;
      return (char)this;
    }
    if ( !this )
      return (char)this;
    UnityEngine_Networking_UnityWebRequest__Dispose((UnityEngine_Networking_UnityWebRequest_o *)this, 0LL);
    p_readData_5__5 = (ServantStatusBattleListViewItem_o *)&_4__this->fields.loader;
    *v144 = 0LL;
  }
  sub_1B6406C(p_readData_5__5, 0, v141, v142);
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
  __int64 v3; // x1
  __int64 v4; // x2
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_1B640DC(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_1B64314(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_1B640DC(&Method_MovieFileMerge__Download_d__40_System_Collections_IEnumerator_Reset__);
  sub_1B641F0(v5, v6);
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
  __int64 v13; // x1
  __int64 v14; // x2
  FileMergeAndSplit_Merge_o *v15; // x23
  int32_t v16; // w2
  int32_t v17; // w3
  FileMergeAndSplit_Merge_o *mergeClass; // x21
  __int64 v19; // x1
  __int64 v20; // x2
  System_Action_object__o *v21; // x22
  System_Collections_IEnumerator_o *v22; // x0
  ServantStatusBattleListViewItem_o *p__2__current; // x19
  int32_t v24; // w2
  int32_t v25; // w3
  bool result; // w0
  struct FileMergeAndSplit_Merge_o *v27; // x8
  System_String_o *v28; // x21
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x0
  System_Collections_Generic_List_uint__o *v30; // x22
  __int64 v31; // x1
  __int64 v32; // x2
  FileMergeAndSplit_CRCChecker_o *v33; // x23
  ServantStatusBattleListViewItem_o *p_crcCheckerClass; // x20
  int32_t v35; // w2
  int32_t v36; // w3
  System_Collections_IEnumerator_o *v37; // x0
  ServantStatusBattleListViewItem_o *v38; // x19
  int32_t v39; // w2
  int32_t v40; // w3

  v2 = this;
  if ( (byte_49FB4B0 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_Exception__TypeInfo, method);
    sub_1B640C8(&FileMergeAndSplit_CRCChecker_TypeInfo, v3);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__uint__get_Values__, v4);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToList_uint___, v5);
    sub_1B640C8(&FileMergeAndSplit_Merge_TypeInfo, v6);
    this = (MovieFileMerge__Merge_d__34_o *)sub_1B640C8(&Method_MovieFileMerge__Merge_b__34_0__, v7);
    byte_49FB4B0 = 1;
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
        v15 = (FileMergeAndSplit_Merge_o *)sub_1B64314(FileMergeAndSplit_Merge_TypeInfo, v13, v14);
        FileMergeAndSplit_Merge___ctor(v15, v12, outputMergeFile, 0LL);
        _4__this->fields.mergeClass = v15;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&_4__this->fields.mergeClass, (int32_t)v15, v16, v17);
        mergeClass = _4__this->fields.mergeClass;
        v21 = (System_Action_object__o *)sub_1B64314(System_Action_Exception__TypeInfo, v19, v20);
        System_Action_object____ctor(v21, (Il2CppObject *)_4__this, Method_MovieFileMerge__Merge_b__34_0__, 0LL);
        if ( mergeClass )
        {
          v22 = FileMergeAndSplit_Merge__Run(mergeClass, (System_Action_Exception__o *)v21, 0LL);
          v2->fields.__2__current = (Il2CppObject *)v22;
          p__2__current = (ServantStatusBattleListViewItem_o *)&v2->fields.__2__current;
          sub_1B6406C(p__2__current, (int32_t)v22, v24, v25);
          result = 1;
          *(_DWORD *)&p__2__current[-1].fields.isMine = 1;
          return result;
        }
      }
LABEL_22:
      sub_1B64324(this);
    }
    return 0;
  }
  v2->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_22;
  v27 = _4__this->fields.mergeClass;
  if ( !v27 )
    goto LABEL_22;
  if ( v27->fields.isError )
    return 0;
  this = (MovieFileMerge__Merge_d__34_o *)_4__this->fields.AllDownLoadFilePathCRCDictionary;
  if ( !this )
    goto LABEL_22;
  v28 = _4__this->fields.outputMergeFile;
  Values = System_Collections_Generic_Dictionary_object__uint___get_Values(
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)this,
             (const MethodInfo_318B194 *)Method_System_Collections_Generic_Dictionary_string__uint__get_Values__);
  v30 = (System_Collections_Generic_List_uint__o *)System_Linq_Enumerable__ToList_uint_(
                                                     (System_Collections_Generic_IEnumerable_TSource__o *)Values,
                                                     (const MethodInfo_2E75114 *)Method_System_Linq_Enumerable_ToList_uint___);
  v33 = (FileMergeAndSplit_CRCChecker_o *)sub_1B64314(FileMergeAndSplit_CRCChecker_TypeInfo, v31, v32);
  FileMergeAndSplit_CRCChecker___ctor(v33, v28, v30, 0LL);
  _4__this->fields.crcCheckerClass = v33;
  p_crcCheckerClass = (ServantStatusBattleListViewItem_o *)&_4__this->fields.crcCheckerClass;
  sub_1B6406C(p_crcCheckerClass, (int32_t)v33, v35, v36);
  this = (MovieFileMerge__Merge_d__34_o *)p_crcCheckerClass->klass;
  if ( !p_crcCheckerClass->klass )
    goto LABEL_22;
  v37 = FileMergeAndSplit_CRCChecker__Run((FileMergeAndSplit_CRCChecker_o *)this, 0LL);
  v2->fields.__2__current = (Il2CppObject *)v37;
  v38 = (ServantStatusBattleListViewItem_o *)&v2->fields.__2__current;
  sub_1B6406C(v38, (int32_t)v37, v39, v40);
  *(_DWORD *)&v38[-1].fields.isMine = 2;
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
  __int64 v3; // x1
  __int64 v4; // x2
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_1B640DC(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_1B64314(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_1B640DC(&Method_MovieFileMerge__Merge_d__34_System_Collections_IEnumerator_Reset__);
  sub_1B641F0(v5, v6);
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
  __int64 v2; // x2
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
  __int64 v22; // x1
  __int64 v23; // x2
  Il2CppObject *v24; // x8
  CRIMoviePlayer_o *klass; // x21
  System_String_o *filePath; // x22
  BgmManager_c *v27; // x0
  Il2CppObject *v28; // x24
  float masterVolume; // s8
  System_Action_o *v30; // x23
  struct MovieFileMerge___c__DisplayClass30_0_o *_8__1; // x8
  ServantStatusBattleListViewItem_o *p__2__current; // x19
  bool result; // w0

  v4 = this;
  if ( (byte_49FB4B1 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&BgmManager_TypeInfo, v5);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_CRIMoviePlayer___, v6);
    sub_1B640C8(&Method_UnityEngine_Object_Instantiate_GameObject___, v7);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v8);
    sub_1B640C8(&Method_UnityEngine_Resources_Load_GameObject___, v9);
    sub_1B640C8(&Method_MovieFileMerge___c__DisplayClass30_0__PlayCRIMovie_b__0__, v10);
    sub_1B640C8(&MovieFileMerge___c__DisplayClass30_0_TypeInfo, v11);
    this = (MovieFileMerge__PlayCRIMovie_d__30_o *)sub_1B640C8(&StringLiteral_3910/*"CRIMovie/CRIMoviePlayerWithPanel"*/, v12);
    byte_49FB4B1 = 1;
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
    v14 = (Il2CppObject *)sub_1B64314(MovieFileMerge___c__DisplayClass30_0_TypeInfo, method, v2);
    System_Object___ctor(v14, 0LL);
    v4->fields.__8__1 = (struct MovieFileMerge___c__DisplayClass30_0_o *)v14;
    p__8__1 = (Il2CppObject **)&v4->fields.__8__1;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v4->fields.__8__1, (int32_t)v14, v16, v17);
    object = UnityEngine_Resources__Load_object_(
               (System_String_o *)StringLiteral_3910/*"CRIMovie/CRIMoviePlayerWithPanel"*/,
               (const MethodInfo_2ECC0A8 *)Method_UnityEngine_Resources_Load_GameObject___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (MovieFileMerge__PlayCRIMovie_d__30_o *)UnityEngine_Object__Instantiate_object_(
                                                     object,
                                                     (const MethodInfo_2EBBCA0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !this )
      goto LABEL_25;
    v19 = *p__8__1;
    this = (MovieFileMerge__PlayCRIMovie_d__30_o *)UnityEngine_GameObject__GetComponent_object_(
                                                     (UnityEngine_GameObject_o *)this,
                                                     (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_CRIMoviePlayer___);
    if ( !v19 )
      goto LABEL_25;
    v19[1].klass = (Il2CppClass *)this;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v19[1], (int32_t)this, v20, v21);
    v24 = *p__8__1;
    if ( !*p__8__1 )
      goto LABEL_25;
    LOBYTE(v24[1].monitor) = 1;
    klass = (CRIMoviePlayer_o *)v24[1].klass;
    filePath = v4->fields.filePath;
    if ( !BgmManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
    if ( !byte_49F7D6D )
    {
      sub_1B640C8(&BgmManager_TypeInfo, v22);
      byte_49F7D6D = 1;
    }
    v27 = BgmManager_TypeInfo;
    if ( !BgmManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
      v27 = BgmManager_TypeInfo;
    }
    v28 = *p__8__1;
    masterVolume = v27->static_fields->masterVolume;
    v30 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v22, v23);
    System_Action___ctor(v30, v28, Method_MovieFileMerge___c__DisplayClass30_0__PlayCRIMovie_b__0__, 0LL);
    if ( !klass
      || (CRIMoviePlayer__Initialize(klass, filePath, filePath, masterVolume, 1, 0LL, v30, 1, 0LL, 0, 0, 1, 0LL),
          !*p__8__1)
      || (this = (MovieFileMerge__PlayCRIMovie_d__30_o *)(*p__8__1)[1].klass) == 0LL )
    {
LABEL_25:
      sub_1B64324(this);
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
    sub_1B6406C(p__2__current, 0, v2, v3);
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
  __int64 v3; // x1
  __int64 v4; // x2
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_1B640DC(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_1B64314(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_1B640DC(&Method_MovieFileMerge__PlayCRIMovie_d__30_System_Collections_IEnumerator_Reset__);
  sub_1B641F0(v5, v6);
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
      sub_1B64324(0LL);
    v6 = (Il2CppObject *)MovieFileMerge__PlayMP4_37433828(_4__this, _4__this->fields.outputMergeFile, 0, 0LL);
    this->fields.__2__current = v6;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.__2__current, (int32_t)v6, v7, v8);
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
  __int64 v3; // x1
  __int64 v4; // x2
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_1B640DC(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_1B64314(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_1B640DC(&Method_MovieFileMerge__PlayMP4_d__28_System_Collections_IEnumerator_Reset__);
  sub_1B641F0(v5, v6);
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
  __int64 v2; // x2
  System_String_o *filePath; // x0
  MovieFileMerge_o *_4__this; // x20
  _BOOL8 IsNullOrEmpty; // x0
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

  if ( (byte_49FB4B2 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_WaitForEndOfFrame_TypeInfo, method);
    byte_49FB4B2 = 1;
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
        sub_1B64324(IsNullOrEmpty);
      v15 = (Il2CppObject *)MovieFileMerge__PlayCRIMovie(_4__this, this->fields.filePath, 0LL);
      this->fields.__2__current = v15;
      p__2__current = &this->fields.__2__current;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)p__2__current, (int32_t)v15, v17, v18);
      result = 1;
      *((_DWORD *)p__2__current - 2) = 1;
      break;
    case 1:
      this->fields.__1__state = -1;
      v12 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B64314(UnityEngine_WaitForEndOfFrame_TypeInfo, method, v2);
      UnityEngine_WaitForEndOfFrame___ctor(v12, 0LL);
      this->fields.__2__current = (Il2CppObject *)v12;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.__2__current, (int32_t)v12, v13, v14);
      v11 = 2;
      goto LABEL_9;
    case 2:
      this->fields.__1__state = -1;
      v8 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B64314(UnityEngine_WaitForEndOfFrame_TypeInfo, method, v2);
      UnityEngine_WaitForEndOfFrame___ctor(v8, 0LL);
      this->fields.__2__current = (Il2CppObject *)v8;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.__2__current, (int32_t)v8, v9, v10);
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
  __int64 v3; // x1
  __int64 v4; // x2
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_1B640DC(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_1B64314(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_1B640DC(&Method_MovieFileMerge__PlayMP4_d__29_System_Collections_IEnumerator_Reset__);
  sub_1B641F0(v5, v6);
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
    sub_1B64324(0LL);
  CRIMoviePlayer__Dispose(player, 0LL);
  this->fields.wait = 0;
}