void MovieFileMerge___ctor(MovieFileMerge_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_TKey__TValue__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  System_Collections_Generic_Dictionary_TKey__TValue__o *v10; // x20
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7

  if ( (byte_4CED5FE & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_string__uint___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_Dictionary_string__uint__TypeInfo);
    byte_4CED5FE = 1;
  }
  this->fields._OverrideDepth_k__BackingField = -1;
  v3 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1C7BD34(System_Collections_Generic_Dictionary_string__uint__TypeInfo);
  System_Collections_Generic_Dictionary_object__uint____ctor(
    v3,
    (const MethodInfo_3503A14 *)Method_System_Collections_Generic_Dictionary_string__uint___ctor__);
  this->fields.AllDownLoadFilePathCRCDictionary = (struct System_Collections_Generic_Dictionary_string__uint__o *)v3;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.AllDownLoadFilePathCRCDictionary,
    (int32_t)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  v10 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1C7BD34(System_Collections_Generic_Dictionary_string__uint__TypeInfo);
  System_Collections_Generic_Dictionary_object__uint____ctor(
    v10,
    (const MethodInfo_3503A14 *)Method_System_Collections_Generic_Dictionary_string__uint___ctor__);
  this->fields.RequireDownLoadFilePathCRCDictionary = (struct System_Collections_Generic_Dictionary_string__uint__o *)v10;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.RequireDownLoadFilePathCRCDictionary,
    (int32_t)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void MovieFileMerge__AssetLoadLogError(MovieFileMerge_o *this, System_String_o *errorCode, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  Il2CppObject *v13; // x21
  int32_t v14; // w1
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  int32_t v21; // w1
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  int32_t v28; // w1
  int32_t v29; // w2
  int32_t v30; // w3
  System_String_o *v31; // x4
  int32_t v32; // w5
  int64_t v33; // x6
  System_String_o *v34; // x7
  int32_t v35; // w1
  int32_t v36; // w2
  int32_t v37; // w3
  System_String_o *v38; // x4
  int32_t v39; // w5
  int64_t v40; // x6
  System_String_o *v41; // x7
  int32_t v42; // w1
  int32_t v43; // w2
  int32_t v44; // w3
  System_String_o *v45; // x4
  int32_t v46; // w5
  int64_t v47; // x6
  System_String_o *v48; // x7
  int32_t v49; // w1
  int32_t v50; // w2
  int32_t v51; // w3
  System_String_o *v52; // x4
  int32_t v53; // w5
  int64_t v54; // x6
  System_String_o *v55; // x7
  int32_t v56; // w1
  int32_t v57; // w2
  int32_t v58; // w3
  System_String_o *v59; // x4
  int32_t v60; // w5
  int64_t v61; // x6
  System_String_o *v62; // x7
  int32_t v63; // w1
  __int64 v64; // x22
  __int64 v65; // x24

  if ( (byte_4CED5FC & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Debug_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
    sub_1C7BAE8(&string___TypeInfo);
    sub_1C7BAE8(&StringLiteral_14218/*"The request timed out."*/);
    sub_1C7BAE8(&StringLiteral_14159/*"The network connection was lost."*/);
    sub_1C7BAE8(&StringLiteral_4668/*"Connection reset by peer"*/);
    sub_1C7BAE8(&StringLiteral_5025/*"DLErrorType"*/);
    sub_1C7BAE8(&StringLiteral_5024/*"DLErrorAsset"*/);
    sub_1C7BAE8(&StringLiteral_4667/*"Connection refused"*/);
    sub_1C7BAE8(&StringLiteral_9482/*"No address associated with hostname"*/);
    sub_1C7BAE8(&StringLiteral_2374/*"AssetBundle file download time over"*/);
    sub_1C7BAE8(&StringLiteral_12978/*"Software caused connection abort"*/);
    sub_1C7BAE8(&StringLiteral_4669/*"Connection timed out"*/);
    sub_1C7BAE8(&StringLiteral_2377/*"AssetLoadError"*/);
    byte_4CED5FC = 1;
  }
  Instance = (Il2CppObject *)sub_1C7BB90(string___TypeInfo, 8);
  if ( !Instance )
    goto LABEL_28;
  v13 = Instance;
  if ( !LODWORD(Instance[1].monitor) )
    goto LABEL_18;
  v14 = StringLiteral_9482/*"No address associated with hostname"*/;
  Instance[2].klass = (Il2CppClass *)StringLiteral_9482/*"No address associated with hostname"*/;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&Instance[2], v14, v7, v8, v9, v10, v11, v12);
  if ( LODWORD(v13[1].monitor) <= 1 )
    goto LABEL_18;
  v21 = StringLiteral_2374/*"AssetBundle file download time over"*/;
  v13[2].monitor = (void *)StringLiteral_2374/*"AssetBundle file download time over"*/;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v13[2].monitor, v21, v15, v16, v17, v18, v19, v20);
  if ( LODWORD(v13[1].monitor) <= 2 )
    goto LABEL_18;
  v28 = StringLiteral_14159/*"The network connection was lost."*/;
  v13[3].klass = (Il2CppClass *)StringLiteral_14159/*"The network connection was lost."*/;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v13[3], v28, v22, v23, v24, v25, v26, v27);
  if ( LODWORD(v13[1].monitor) <= 3 )
    goto LABEL_18;
  v35 = StringLiteral_4668/*"Connection reset by peer"*/;
  v13[3].monitor = (void *)StringLiteral_4668/*"Connection reset by peer"*/;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v13[3].monitor, v35, v29, v30, v31, v32, v33, v34);
  if ( LODWORD(v13[1].monitor) <= 4 )
    goto LABEL_18;
  v42 = StringLiteral_12978/*"Software caused connection abort"*/;
  v13[4].klass = (Il2CppClass *)StringLiteral_12978/*"Software caused connection abort"*/;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v13[4], v42, v36, v37, v38, v39, v40, v41);
  if ( LODWORD(v13[1].monitor) <= 5
    || (v49 = StringLiteral_4669/*"Connection timed out"*/,
        v13[4].monitor = (void *)StringLiteral_4669/*"Connection timed out"*/,
        sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v13[4].monitor, v49, v43, v44, v45, v46, v47, v48),
        LODWORD(v13[1].monitor) <= 6)
    || (v56 = StringLiteral_4667/*"Connection refused"*/,
        v13[5].klass = (Il2CppClass *)StringLiteral_4667/*"Connection refused"*/,
        sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v13[5], v56, v50, v51, v52, v53, v54, v55),
        LODWORD(v13[1].monitor) <= 7) )
  {
LABEL_18:
    sub_1C7BD48(Instance);
  }
  v63 = StringLiteral_14218/*"The request timed out."*/;
  v13[5].monitor = (void *)StringLiteral_14218/*"The request timed out."*/;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v13[5].monitor, v63, v57, v58, v59, v60, v61, v62);
  if ( (int)v13[1].monitor < 1 )
  {
LABEL_19:
    if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
    goto LABEL_27;
  }
  v64 = 0;
  v65 = (unsigned int)v13[1].monitor - 1LL;
  while ( 1 )
  {
    if ( !errorCode )
      goto LABEL_28;
    Instance = (Il2CppObject *)System_String__Contains(errorCode, *((System_String_o **)&v13[2].klass + v64), 0);
    if ( ((unsigned __int8)Instance & 1) != 0 )
      break;
    if ( v65 == v64 )
      goto LABEL_19;
    if ( ++v64 >= (unsigned __int64)LODWORD(v13[1].monitor) )
      goto LABEL_18;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
  if ( !Instance )
LABEL_28:
    sub_1C7BD40(Instance, v6);
  CrashReporter__AddCustomKey(
    (CrashReporter_o *)Instance,
    (System_String_o *)StringLiteral_5024/*"DLErrorAsset"*/,
    this->fields.downloadingURL,
    0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
  if ( (unsigned int)v64 >= LODWORD(v13[1].monitor) )
    goto LABEL_18;
  if ( !Instance )
    goto LABEL_28;
  CrashReporter__AddCustomKey(
    (CrashReporter_o *)Instance,
    (System_String_o *)StringLiteral_5025/*"DLErrorType"*/,
    *((System_String_o **)&v13[2].klass + v64),
    0);
  if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
  errorCode = (System_String_o *)StringLiteral_2377/*"AssetLoadError"*/;
LABEL_27:
  UnityEngine_Debug__LogError((Il2CppObject *)errorCode, 0);
}


System_Collections_IEnumerator_o *MovieFileMerge__CRCDownloadAndCheck(MovieFileMerge_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  if ( (byte_4CED5F3 & 1) == 0 )
  {
    sub_1C7BAE8(&MovieFileMerge__CRCDownloadAndCheck_d__38_TypeInfo);
    byte_4CED5F3 = 1;
  }
  v3 = sub_1C7BD34(MovieFileMerge__CRCDownloadAndCheck_d__38_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v3 + 32), (int32_t)this, v4, v5, v6, v7, v8, v9);
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

  if ( (byte_4CED5FA & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_string__uint__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_string__uint___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_Dictionary_string__uint__TypeInfo);
    byte_4CED5FA = 1;
  }
  result = 0;
  v4 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1C7BD34(System_Collections_Generic_Dictionary_string__uint__TypeInfo);
  System_Collections_Generic_Dictionary_object__uint____ctor(
    v4,
    (const MethodInfo_3503A14 *)Method_System_Collections_Generic_Dictionary_string__uint___ctor__);
  AllLines = System_IO_File__ReadAllLines(dataPath, 0);
  if ( !AllLines )
LABEL_18:
    sub_1C7BD40(AllLines, v6);
  max_length = AllLines->max_length;
  v8 = AllLines;
  if ( max_length >= 1 )
  {
    v9 = 0;
    while ( 1 )
    {
      if ( v9 >= max_length )
LABEL_17:
        sub_1C7BD48(AllLines);
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
        (const MethodInfo_35043C8 *)Method_System_Collections_Generic_Dictionary_string__uint__Add__);
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
  if ( (byte_4CED5F6 & 1) == 0 )
  {
    sub_1C7BAE8(&System_IO_Path_TypeInfo);
    sub_1C7BAE8(&StringLiteral_25412/*"{0}/{1}"*/);
    folder = (System_String_o *)sub_1C7BAE8(&StringLiteral_1042/*"/"*/);
    byte_4CED5F6 = 1;
  }
  if ( !v2 )
    sub_1C7BD40(folder, method);
  if ( System_String__EndsWith(v2, (System_String_o *)StringLiteral_1042/*"/"*/, 0) )
    v2 = System_String__TrimEnd_64233620(v2, 0x2Fu, 0);
  if ( !System_IO_Path_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_IO_Path_TypeInfo);
  FileName = System_IO_Path__GetFileName(v2, 0);
  LocalDataPath = (Il2CppObject *)MovieFileMerge__GetLocalDataPath((const MethodInfo *)FileName);
  v5 = System_String__Format_64218220(
         (System_String_o *)StringLiteral_25412/*"{0}/{1}"*/,
         LocalDataPath,
         (Il2CppObject *)FileName,
         0);
  if ( System_IO_Directory__Exists(v5, 0) )
    System_IO_Directory__Delete(v5, 1, 0);
}


void MovieFileMerge__Delete_41053056(const MethodInfo *method)
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
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7

  if ( (byte_4CED5F9 & 1) == 0 )
  {
    sub_1C7BAE8(&MovieFileMerge__Download_d__47_TypeInfo);
    byte_4CED5F9 = 1;
  }
  v7 = sub_1C7BD34(MovieFileMerge__Download_d__47_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  *(_DWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 32) = this;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v7 + 32), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v7 + 40) = fileName;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v7 + 40), (int32_t)fileName, v14, v15, v16, v17, v18, v19);
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
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  if ( (byte_4CED5F4 & 1) == 0 )
  {
    sub_1C7BAE8(&MovieFileMerge__DownloadMovie_d__39_TypeInfo);
    byte_4CED5F4 = 1;
  }
  v3 = sub_1C7BD34(MovieFileMerge__DownloadMovie_d__39_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v3 + 32), (int32_t)this, v4, v5, v6, v7, v8, v9);
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
  if ( (byte_4CED5EA & 1) == 0 )
  {
    sub_1C7BAE8(&FileMergeAndSplit_TypeInfo);
    sub_1C7BAE8(&System_IO_Path_TypeInfo);
    sub_1C7BAE8(&StringLiteral_1042/*"/"*/);
    sub_1C7BAE8(&StringLiteral_25417/*"{0}/{1}/{2}"*/);
    this = (MovieFileMerge_o *)sub_1C7BAE8(&StringLiteral_25416/*"{0}/{1}/{1}.usm"*/);
    byte_4CED5EA = 1;
  }
  if ( !v3 )
    sub_1C7BD40(this, assetFolderURL);
  if ( System_String__EndsWith(v3, (System_String_o *)StringLiteral_1042/*"/"*/, 0) )
    v3 = System_String__TrimEnd_64233620(v3, 0x2Fu, 0);
  if ( !System_IO_Path_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_IO_Path_TypeInfo);
  FileName = System_IO_Path__GetFileName(v3, 0);
  LocalDataPath = (Il2CppObject *)MovieFileMerge__GetLocalDataPath((const MethodInfo *)FileName);
  v6 = System_String__Format_64218220(
         (System_String_o *)StringLiteral_25416/*"{0}/{1}/{1}.usm"*/,
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
  v10 = System_String__Format_64218288(
          (System_String_o *)StringLiteral_25417/*"{0}/{1}/{2}"*/,
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

  if ( (byte_4CED5EE & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_string__uint__get_Count__);
    byte_4CED5EE = 1;
  }
  RequireDownLoadFilePathCRCDictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.RequireDownLoadFilePathCRCDictionary;
  v4 = 0.0;
  if ( RequireDownLoadFilePathCRCDictionary
    && System_Collections_Generic_Dictionary_object__uint___get_Count(
         RequireDownLoadFilePathCRCDictionary,
         (const MethodInfo_3504098 *)Method_System_Collections_Generic_Dictionary_string__uint__get_Count__) )
  {
    v6 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.RequireDownLoadFilePathCRCDictionary;
    if ( !v6 )
      sub_1C7BD40(0, v5);
    downloadProgress = this->fields.downloadProgress;
    return (float)downloadProgress
         / (float)System_Collections_Generic_Dictionary_object__uint___get_Count(
                    v6,
                    (const MethodInfo_3504098 *)Method_System_Collections_Generic_Dictionary_string__uint__get_Count__);
  }
  return v4;
}


double MovieFileMerge__GetDownloadSize(MovieFileMerge_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_TKey__TValue__o *RequireDownLoadFilePathCRCDictionary; // x0

  if ( (byte_4CED5ED & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_string__uint__get_Count__);
    byte_4CED5ED = 1;
  }
  RequireDownLoadFilePathCRCDictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.RequireDownLoadFilePathCRCDictionary;
  if ( !RequireDownLoadFilePathCRCDictionary )
    sub_1C7BD40(0, method);
  return (double)(System_Collections_Generic_Dictionary_object__uint___get_Count(
                    RequireDownLoadFilePathCRCDictionary,
                    (const MethodInfo_3504098 *)Method_System_Collections_Generic_Dictionary_string__uint__get_Count__) << 20);
}


System_String_o *MovieFileMerge__GetLocalDataPath(const MethodInfo *method)
{
  System_String_o *persistentDataPath; // x0

  if ( (byte_4CED5EB & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Application_TypeInfo);
    sub_1C7BAE8(&StringLiteral_1094/*"/extend-data/movie"*/);
    byte_4CED5EB = 1;
  }
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
  persistentDataPath = UnityEngine_Application__get_persistentDataPath(0);
  return System_String__Concat_64176912(persistentDataPath, (System_String_o *)StringLiteral_1094/*"/extend-data/movie"*/, 0);
}


System_String_o *MovieFileMerge__GetLocalFolderPath(MovieFileMerge_o *this, const MethodInfo *method)
{
  MovieFileMerge_o *v2; // x19
  Il2CppObject *LocalDataPath; // x0

  v2 = this;
  if ( (byte_4CED5F7 & 1) == 0 )
  {
    this = (MovieFileMerge_o *)sub_1C7BAE8(&StringLiteral_25412/*"{0}/{1}"*/);
    byte_4CED5F7 = 1;
  }
  LocalDataPath = (Il2CppObject *)MovieFileMerge__GetLocalDataPath((const MethodInfo *)this);
  return System_String__Format_64218220(
           (System_String_o *)StringLiteral_25412/*"{0}/{1}"*/,
           LocalDataPath,
           (Il2CppObject *)v2->fields.assetFolder,
           0);
}


System_String_o *MovieFileMerge__GetMergePath(MovieFileMerge_o *this, const MethodInfo *method)
{
  return this->fields.outputMergeFile;
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

  if ( (byte_4CED5F8 & 1) == 0 )
  {
    sub_1C7BAE8(&Crc32_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_string__uint__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_string__uint__GetEnumerator__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_string__uint___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_Dictionary_string__uint__TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_Enumerator_string__uint__Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_Enumerator_string__uint__MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_Enumerator_string__uint__get_Current__);
    sub_1C7BAE8(&Method_System_Collections_Generic_KeyValuePair_string__uint__get_Key__);
    sub_1C7BAE8(&Method_System_Collections_Generic_KeyValuePair_string__uint__get_Value__);
    sub_1C7BAE8(&StringLiteral_25412/*"{0}/{1}"*/);
    byte_4CED5F8 = 1;
  }
  memset(&v22, 0, sizeof(v22));
  value = 0;
  v3 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1C7BD34(System_Collections_Generic_Dictionary_string__uint__TypeInfo);
  System_Collections_Generic_Dictionary_object__uint____ctor(
    v3,
    (const MethodInfo_3503A14 *)Method_System_Collections_Generic_Dictionary_string__uint___ctor__);
  AllDownLoadFilePathCRCDictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.AllDownLoadFilePathCRCDictionary;
  if ( !AllDownLoadFilePathCRCDictionary )
    sub_1C7BD40(0, v4);
  System_Collections_Generic_Dictionary_object__uint___GetEnumerator(
    &v20,
    AllDownLoadFilePathCRCDictionary,
    (const MethodInfo_35047B8 *)Method_System_Collections_Generic_Dictionary_string__uint__GetEnumerator__);
  v22 = v20;
  while ( System_Collections_Generic_Dictionary_Enumerator_object__uint___MoveNext(
            &v22,
            (const MethodInfo_35F4C50 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__uint__MoveNext__) )
  {
    current = v22.fields._current;
    LocalFolderPath = (Il2CppObject *)MovieFileMerge__GetLocalFolderPath(this, v6);
    v9 = System_String__Format_64218220((System_String_o *)StringLiteral_25412/*"{0}/{1}"*/, LocalFolderPath, current.fields.key, 0);
    v10 = System_IO_File__Exists(v9, 0);
    if ( !v10 )
      goto LABEL_11;
    AllBytes = System_IO_File__ReadAllBytes(v9, 0);
    value = (int)current.fields.value;
    if ( !Crc32_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
    v13 = Crc32__Compute(AllBytes, 0);
    if ( !System_UInt32__Equals_65811892((uint32_t)&value, v13, 0) )
    {
      System_IO_File__Delete(v9, 0);
LABEL_11:
      if ( !v3 )
        sub_1C7BD40(v10, v11);
      System_Collections_Generic_Dictionary_object__uint___Add(
        v3,
        current.fields.key,
        (uint32_t)current.fields.value,
        (const MethodInfo_35043C8 *)Method_System_Collections_Generic_Dictionary_string__uint__Add__);
      Parent = System_IO_Directory__GetParent(v9, 0);
      v16 = Parent;
      if ( !Parent )
        sub_1C7BD40(0, v15);
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
    (const MethodInfo_35F4D74 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__uint__Dispose__);
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
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  Il2CppObject *v19; // x1
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  Il2CppClass **v23; // x0
  System_Collections_Generic_List_Enumerator_object__o v25; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4CED5FB & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_string__uint__get_Keys__);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_ToList_string___);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_string__GetEnumerator__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C7BAE8(&StringLiteral_25412/*"{0}/{1}"*/);
    byte_4CED5FB = 1;
  }
  memset(&v25, 0, sizeof(v25));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_string___ctor__);
  LocalFolderPath = MovieFileMerge__GetLocalFolderPath(this, v4);
  if ( System_IO_Directory__Exists(LocalFolderPath, 0) )
  {
    AllDownLoadFilePathCRCDictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.AllDownLoadFilePathCRCDictionary;
    if ( !AllDownLoadFilePathCRCDictionary
      || (Keys = System_Collections_Generic_Dictionary_object__uint___get_Keys(
                   AllDownLoadFilePathCRCDictionary,
                   (const MethodInfo_35040A8 *)Method_System_Collections_Generic_Dictionary_string__uint__get_Keys__),
          (AllDownLoadFilePathCRCDictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)System_Linq_Enumerable__ToList_object_((System_Collections_Generic_IEnumerable_TSource__o *)Keys, (const MethodInfo_31B3E80 *)Method_System_Linq_Enumerable_ToList_string___)) == 0) )
    {
      sub_1C7BD40(AllDownLoadFilePathCRCDictionary, v6);
    }
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v25,
      (System_Collections_Generic_List_object__o *)AllDownLoadFilePathCRCDictionary,
      (const MethodInfo_383F8F4 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v25,
              (const MethodInfo_35BDF98 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
    {
      current = v25.fields._current;
      v11 = (Il2CppObject *)MovieFileMerge__GetLocalFolderPath(this, v9);
      v12 = (Il2CppObject *)System_String__Format_64218220((System_String_o *)StringLiteral_25412/*"{0}/{1}"*/, v11, current, 0);
      v19 = v12;
      if ( !v3 )
        sub_1C7BD40(v12, v12);
      items = v3->fields._items;
      v21 = Method_System_Collections_Generic_List_string__Add__;
      ++v3->fields._version;
      if ( !items )
        sub_1C7BD40(v12, v12);
      size = v3->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          v12,
          *(const MethodInfo_383EDFC **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
      }
      else
      {
        v23 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v23[4] = (Il2CppClass *)v19;
        sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v23 + 4), (int32_t)v19, v13, v14, v15, v16, v17, v18);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v25,
      (const MethodInfo_35BDF94 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
  }
  return (System_Collections_Generic_List_string__o *)v3;
}


double MovieFileMerge__GetTotalRequireSize(MovieFileMerge_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__uint__o *AllDownLoadFilePathCRCDictionary; // x0
  System_Collections_Generic_Dictionary_TKey__TValue__o *RequireDownLoadFilePathCRCDictionary; // x8

  if ( (byte_4CED5EC & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_string__uint__get_Count__);
    byte_4CED5EC = 1;
  }
  AllDownLoadFilePathCRCDictionary = this->fields.AllDownLoadFilePathCRCDictionary;
  if ( !AllDownLoadFilePathCRCDictionary
    || (AllDownLoadFilePathCRCDictionary = (struct System_Collections_Generic_Dictionary_string__uint__o *)System_Collections_Generic_Dictionary_object__uint___get_Count((System_Collections_Generic_Dictionary_TKey__TValue__o *)AllDownLoadFilePathCRCDictionary, (const MethodInfo_3504098 *)Method_System_Collections_Generic_Dictionary_string__uint__get_Count__),
        (RequireDownLoadFilePathCRCDictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.RequireDownLoadFilePathCRCDictionary) == 0) )
  {
    sub_1C7BD40(AllDownLoadFilePathCRCDictionary, method);
  }
  return (double)((System_Collections_Generic_Dictionary_object__uint___get_Count(
                     RequireDownLoadFilePathCRCDictionary,
                     (const MethodInfo_3504098 *)Method_System_Collections_Generic_Dictionary_string__uint__get_Count__)
                 + (int)AllDownLoadFilePathCRCDictionary) << 20);
}


void MovieFileMerge__Initialize(
        MovieFileMerge_o *this,
        System_String_o *assetFolderURL,
        bool enableSkipButton,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_TKey__TValue__o *AllDownLoadFilePathCRCDictionary; // x0
  bool v8; // w23
  System_Collections_Generic_Dictionary_TKey__TValue__o *v9; // x21
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  System_Collections_Generic_Dictionary_TKey__TValue__o *RequireDownLoadFilePathCRCDictionary; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  System_Collections_Generic_Dictionary_TKey__TValue__o *v23; // x22
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
  __int64 v36; // x0
  __int64 v37; // x1
  int32_t v38; // w2
  int32_t v39; // w3
  System_String_o *v40; // x4
  int32_t v41; // w5
  int64_t v42; // x6
  System_String_o *v43; // x7
  struct System_String_o *FileName; // x0
  int32_t v45; // w2
  int32_t v46; // w3
  System_String_o *v47; // x4
  int32_t v48; // w5
  int64_t v49; // x6
  System_String_o *v50; // x7
  const MethodInfo *v51; // x1
  Il2CppObject *LocalFolderPath; // x0
  struct System_String_o *v53; // x0
  int32_t v54; // w2
  int32_t v55; // w3
  System_String_o *v56; // x4
  int32_t v57; // w5
  int64_t v58; // x6
  System_String_o *v59; // x7
  const MethodInfo *v60; // x1
  Il2CppObject *v61; // x0
  struct System_String_o *v62; // x0
  int32_t v63; // w2
  int32_t v64; // w3
  System_String_o *v65; // x4
  int32_t v66; // w5
  int64_t v67; // x6
  System_String_o *v68; // x7
  const MethodInfo *v69; // x1
  System_String_o *v70; // x0
  FileMergeAndSplit_c *v71; // x8
  Il2CppObject *v72; // x20
  struct System_String_o *v73; // x0
  int32_t v74; // w2
  int32_t v75; // w3
  System_String_o *v76; // x4
  int32_t v77; // w5
  int64_t v78; // x6
  System_String_o *v79; // x7

  if ( (byte_4CED5F2 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_string__uint__Clear__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_string__uint___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_Dictionary_string__uint__TypeInfo);
    sub_1C7BAE8(&FileMergeAndSplit_TypeInfo);
    sub_1C7BAE8(&System_IO_Path_TypeInfo);
    sub_1C7BAE8(&StringLiteral_25412/*"{0}/{1}"*/);
    sub_1C7BAE8(&StringLiteral_25408/*"{0}/SplitFile"*/);
    sub_1C7BAE8(&StringLiteral_1042/*"/"*/);
    sub_1C7BAE8(&StringLiteral_25414/*"{0}/{1}.usm"*/);
    byte_4CED5F2 = 1;
  }
  AllDownLoadFilePathCRCDictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.AllDownLoadFilePathCRCDictionary;
  v8 = enableSkipButton;
  if ( AllDownLoadFilePathCRCDictionary )
  {
    System_Collections_Generic_Dictionary_object__uint___Clear(
      AllDownLoadFilePathCRCDictionary,
      (const MethodInfo_3504550 *)Method_System_Collections_Generic_Dictionary_string__uint__Clear__);
  }
  else
  {
    v9 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1C7BD34(System_Collections_Generic_Dictionary_string__uint__TypeInfo);
    System_Collections_Generic_Dictionary_object__uint____ctor(
      v9,
      (const MethodInfo_3503A14 *)Method_System_Collections_Generic_Dictionary_string__uint___ctor__);
    this->fields.AllDownLoadFilePathCRCDictionary = (struct System_Collections_Generic_Dictionary_string__uint__o *)v9;
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)&this->fields.AllDownLoadFilePathCRCDictionary,
      (int32_t)v9,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
  }
  RequireDownLoadFilePathCRCDictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.RequireDownLoadFilePathCRCDictionary;
  if ( RequireDownLoadFilePathCRCDictionary )
  {
    System_Collections_Generic_Dictionary_object__uint___Clear(
      RequireDownLoadFilePathCRCDictionary,
      (const MethodInfo_3504550 *)Method_System_Collections_Generic_Dictionary_string__uint__Clear__);
  }
  else
  {
    v23 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1C7BD34(System_Collections_Generic_Dictionary_string__uint__TypeInfo);
    System_Collections_Generic_Dictionary_object__uint____ctor(
      v23,
      (const MethodInfo_3503A14 *)Method_System_Collections_Generic_Dictionary_string__uint___ctor__);
    this->fields.RequireDownLoadFilePathCRCDictionary = (struct System_Collections_Generic_Dictionary_string__uint__o *)v23;
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)&this->fields.RequireDownLoadFilePathCRCDictionary,
      (int32_t)v23,
      v24,
      v25,
      v26,
      v27,
      v28,
      v29);
  }
  this->fields.downloadProgress = 0;
  this->fields.isDownloadCancel = 0;
  this->fields.mergeClass = 0;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.mergeClass, 0, v17, v18, v19, v20, v21, v22);
  this->fields.crcCheckerClass = 0;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.crcCheckerClass, 0, v30, v31, v32, v33, v34, v35);
  this->fields.isEnableSkipButton = v8;
  if ( !assetFolderURL )
    sub_1C7BD40(v36, v37);
  if ( System_String__EndsWith(assetFolderURL, (System_String_o *)StringLiteral_1042/*"/"*/, 0) )
    assetFolderURL = System_String__TrimEnd_64233620(assetFolderURL, 0x2Fu, 0);
  this->fields.assetFolderURL = assetFolderURL;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.assetFolderURL,
    (int32_t)assetFolderURL,
    v38,
    v39,
    v40,
    v41,
    v42,
    v43);
  if ( !System_IO_Path_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_IO_Path_TypeInfo);
  FileName = System_IO_Path__GetFileName(assetFolderURL, 0);
  this->fields.assetFolder = FileName;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.assetFolder, (int32_t)FileName, v45, v46, v47, v48, v49, v50);
  LocalFolderPath = (Il2CppObject *)MovieFileMerge__GetLocalFolderPath(this, v51);
  v53 = System_String__Format((System_String_o *)StringLiteral_25408/*"{0}/SplitFile"*/, LocalFolderPath, 0);
  this->fields.outputSplitFileFolder = v53;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.outputSplitFileFolder,
    (int32_t)v53,
    v54,
    v55,
    v56,
    v57,
    v58,
    v59);
  v61 = (Il2CppObject *)MovieFileMerge__GetLocalFolderPath(this, v60);
  v62 = System_String__Format_64218220(
          (System_String_o *)StringLiteral_25414/*"{0}/{1}.usm"*/,
          v61,
          (Il2CppObject *)this->fields.assetFolder,
          0);
  this->fields.outputMergeFile = v62;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.outputMergeFile, (int32_t)v62, v63, v64, v65, v66, v67, v68);
  v70 = MovieFileMerge__GetLocalFolderPath(this, v69);
  v71 = FileMergeAndSplit_TypeInfo;
  v72 = (Il2CppObject *)v70;
  if ( !FileMergeAndSplit_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FileMergeAndSplit_TypeInfo);
    v71 = FileMergeAndSplit_TypeInfo;
  }
  v73 = System_String__Format_64218220(
          (System_String_o *)StringLiteral_25412/*"{0}/{1}"*/,
          v72,
          (Il2CppObject *)v71->static_fields->PathCRCFileName,
          0);
  this->fields.outputMergeFileCRC = v73;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.outputMergeFileCRC,
    (int32_t)v73,
    v74,
    v75,
    v76,
    v77,
    v78,
    v79);
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
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  if ( (byte_4CED5F5 & 1) == 0 )
  {
    sub_1C7BAE8(&MovieFileMerge__Merge_d__40_TypeInfo);
    byte_4CED5F5 = 1;
  }
  v3 = sub_1C7BD34(MovieFileMerge__Merge_d__40_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v3 + 32), (int32_t)this, v4, v5, v6, v7, v8, v9);
  return (System_Collections_IEnumerator_o *)v3;
}


System_Collections_IEnumerator_o *MovieFileMerge__PlayCRIMovie(
        MovieFileMerge_o *this,
        System_String_o *filePath,
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

  if ( (byte_4CED5F1 & 1) == 0 )
  {
    sub_1C7BAE8(&MovieFileMerge__PlayCRIMovie_d__36_TypeInfo);
    byte_4CED5F1 = 1;
  }
  v5 = sub_1C7BD34(MovieFileMerge__PlayCRIMovie_d__36_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v5 + 32), (int32_t)this, v6, v7, v8, v9, v10, v11);
  *(_QWORD *)(v5 + 40) = filePath;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v5 + 40), (int32_t)filePath, v12, v13, v14, v15, v16, v17);
  return (System_Collections_IEnumerator_o *)v5;
}


System_Collections_IEnumerator_o *MovieFileMerge__PlayMP4(MovieFileMerge_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  if ( (byte_4CED5EF & 1) == 0 )
  {
    sub_1C7BAE8(&MovieFileMerge__PlayMP4_d__34_TypeInfo);
    byte_4CED5EF = 1;
  }
  v3 = sub_1C7BD34(MovieFileMerge__PlayMP4_d__34_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v3 + 32), (int32_t)this, v4, v5, v6, v7, v8, v9);
  return (System_Collections_IEnumerator_o *)v3;
}


System_Collections_IEnumerator_o *MovieFileMerge__PlayMP4_41051184(
        MovieFileMerge_o *this,
        System_String_o *filePath,
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

  if ( (byte_4CED5F0 & 1) == 0 )
  {
    sub_1C7BAE8(&MovieFileMerge__PlayMP4_d__35_TypeInfo);
    byte_4CED5F0 = 1;
  }
  v5 = sub_1C7BD34(MovieFileMerge__PlayMP4_d__35_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 40) = this;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v5 + 40), (int32_t)this, v6, v7, v8, v9, v10, v11);
  *(_QWORD *)(v5 + 32) = filePath;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v5 + 32), (int32_t)filePath, v12, v13, v14, v15, v16, v17);
  return (System_Collections_IEnumerator_o *)v5;
}


void MovieFileMerge__Reboot(MovieFileMerge_o *this, const MethodInfo *method)
{
  UnityEngine_Networking_UnityWebRequest_o *v3; // x0
  GrandQuestFolderBoardItem_o *p_loader; // x19
  struct UnityEngine_Networking_UnityWebRequest_o *loader; // t1
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  ManagementManager_c *v12; // x0
  Il2CppObject *Instance; // x0
  __int64 v14; // x1

  if ( (byte_4CED5FD & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Application_TypeInfo);
    sub_1C7BAE8(&ManagementManager_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
    byte_4CED5FD = 1;
  }
  loader = this->fields.loader;
  p_loader = (GrandQuestFolderBoardItem_o *)&this->fields.loader;
  v3 = loader;
  if ( loader )
  {
    UnityEngine_Networking_UnityWebRequest__Dispose(v3, 0);
    p_loader->klass = 0;
    sub_1C7BA8C(p_loader, 0, v6, v7, v8, v9, v10, v11);
  }
  if ( !ManagementManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
  if ( !byte_4CED618 )
  {
    sub_1C7BAE8(&ManagementManager_TypeInfo);
    byte_4CED618 = 1;
  }
  v12 = ManagementManager_TypeInfo;
  if ( !ManagementManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
    v12 = ManagementManager_TypeInfo;
  }
  if ( v12->static_fields->isDuringStartup )
  {
    if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
    UnityEngine_Application__Quit_71663312(0);
  }
  else
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
    if ( !Instance )
      sub_1C7BD40(0, v14);
    ManagementManager__reboot((ManagementManager_o *)Instance, 0, 1, 0);
  }
}


void MovieFileMerge__SetDownloadPause(MovieFileMerge_o *this, bool isPause, const MethodInfo *method)
{
  this->fields.isDownloadPause = isPause;
}


void MovieFileMerge___Merge_b__40_0(MovieFileMerge_o *this, System_Exception_o *e, const MethodInfo *method)
{
  Il2CppObject *v4; // x19
  Il2CppObject *Instance; // x20
  System_String_o *v6; // x21
  ErrorDialog_ClickDelegate_o *v7; // x22
  const MethodInfo *v8; // x2
  System_String_o *v9; // x1

  v4 = (Il2CppObject *)this;
  if ( (byte_4CED5FF & 1) == 0 )
  {
    sub_1C7BAE8(&ErrorDialog_ClickDelegate_TypeInfo);
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&Method_MovieFileMerge_EndMergeRetryDialog__);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C7BAE8(&StringLiteral_5295/*"Disk full"*/);
    sub_1C7BAE8(&StringLiteral_9277/*"NETWORK_ERROR_DISK_FULL"*/);
    this = (MovieFileMerge_o *)sub_1C7BAE8(&StringLiteral_1/*""*/);
    byte_4CED5FF = 1;
  }
  if ( !e )
    goto LABEL_12;
  this = (MovieFileMerge_o *)((__int64 (__fastcall *)(System_Exception_o *, const MethodInfo *, const MethodInfo *))e->klass->vtable._5_get_Message.methodPtr)(
                               e,
                               e->klass->vtable._5_get_Message.method,
                               method);
  if ( !this )
    goto LABEL_12;
  if ( !System_String__StartsWith((System_String_o *)this, (System_String_o *)StringLiteral_5295/*"Disk full"*/, 0) )
  {
    v9 = (System_String_o *)((__int64 (__fastcall *)(System_Exception_o *, const MethodInfo *))e->klass->vtable._5_get_Message.methodPtr)(
                              e,
                              e->klass->vtable._5_get_Message.method);
    goto LABEL_11;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v6 = LocalizationManager__Get((System_String_o *)StringLiteral_9277/*"NETWORK_ERROR_DISK_FULL"*/, 0);
  v7 = (ErrorDialog_ClickDelegate_o *)sub_1C7BD34(ErrorDialog_ClickDelegate_TypeInfo);
  ErrorDialog_ClickDelegate___ctor(v7, v4, Method_MovieFileMerge_EndMergeRetryDialog__, 0);
  if ( !Instance )
LABEL_12:
    sub_1C7BD40(this, e);
  CommonUI__OpenErrorDialog((CommonUI_o *)Instance, (System_String_o *)StringLiteral_1/*""*/, v6, v7, 1, 0);
  v9 = (System_String_o *)StringLiteral_5295/*"Disk full"*/;
LABEL_11:
  MovieFileMerge__AssetLoadLogError((MovieFileMerge_o *)v4, v9, v8);
}


int32_t MovieFileMerge__get_OverrideDepth(MovieFileMerge_o *this, const MethodInfo *method)
{
  return this->fields._OverrideDepth_k__BackingField;
}


void MovieFileMerge__set_OverrideDepth(MovieFileMerge_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._OverrideDepth_k__BackingField = value;
}


void MovieFileMerge__CRCDownloadAndCheck_d__38___ctor(
        MovieFileMerge__CRCDownloadAndCheck_d__38_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool MovieFileMerge__CRCDownloadAndCheck_d__38__MoveNext(
        MovieFileMerge__CRCDownloadAndCheck_d__38_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  const MethodInfo *v3; // x3
  MovieFileMerge__CRCDownloadAndCheck_d__38_o *v4; // x19
  int32_t _1__state; // w8
  struct MovieFileMerge_o *_4__this; // x20
  System_Collections_IEnumerator_o *v7; // x0
  GrandQuestFolderBoardItem_o *p__2__current; // x19
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  bool result; // w0
  System_Collections_Generic_Dictionary_string__uint__o *NeedDownloadDictionary; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  struct FileMergeAndSplit_CRCChecker_o *crcCheckerClass; // x8
  System_Collections_Generic_Dictionary_string__uint__o *Dic; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  System_String_o *outputMergeFile; // x21
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x0
  System_Collections_Generic_List_uint__o *v33; // x22
  FileMergeAndSplit_CRCChecker_o *v34; // x23
  const MethodInfo *v35; // x3
  GrandQuestFolderBoardItem_o *p_crcCheckerClass; // x20
  int32_t v37; // w2
  int32_t v38; // w3
  System_String_o *v39; // x4
  int32_t v40; // w5
  int64_t v41; // x6
  System_String_o *v42; // x7
  System_Collections_IEnumerator_o *v43; // x0
  GrandQuestFolderBoardItem_o *v44; // x19
  int32_t v45; // w2
  int32_t v46; // w3
  System_String_o *v47; // x4
  int32_t v48; // w5
  int64_t v49; // x6
  System_String_o *v50; // x7

  v4 = this;
  if ( (byte_4CED600 & 1) == 0 )
  {
    sub_1C7BAE8(&FileMergeAndSplit_CRCChecker_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_string__uint__get_Values__);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_ToList_uint___);
    this = (MovieFileMerge__CRCDownloadAndCheck_d__38_o *)sub_1C7BAE8(&FileMergeAndSplit_TypeInfo);
    byte_4CED600 = 1;
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
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)&_4__this->fields.RequireDownLoadFilePathCRCDictionary,
      (int32_t)NeedDownloadDictionary,
      v17,
      v18,
      v19,
      v20,
      v21,
      v22);
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
      this = (MovieFileMerge__CRCDownloadAndCheck_d__38_o *)FileMergeAndSplit_TypeInfo;
      if ( !FileMergeAndSplit_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(FileMergeAndSplit_TypeInfo);
      if ( _4__this )
      {
        v7 = MovieFileMerge__Download(_4__this, FileMergeAndSplit_TypeInfo->static_fields->PathCRCFileName, 0, v3);
        v4->fields.__2__current = (Il2CppObject *)v7;
        p__2__current = (GrandQuestFolderBoardItem_o *)&v4->fields.__2__current;
        sub_1C7BA8C(p__2__current, (int32_t)v7, v9, v10, v11, v12, v13, v14);
        result = 1;
        LODWORD(p__2__current[-1].fields._ClosedMessage_k__BackingField) = 1;
        return result;
      }
LABEL_22:
      sub_1C7BD40(this, method);
    }
    return 0;
  }
  v4->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_22;
  Dic = MovieFileMerge__CreateDic((MovieFileMerge_o *)this, _4__this->fields.outputMergeFileCRC, v2);
  _4__this->fields.AllDownLoadFilePathCRCDictionary = Dic;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&_4__this->fields.AllDownLoadFilePathCRCDictionary,
    (int32_t)Dic,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  this = (MovieFileMerge__CRCDownloadAndCheck_d__38_o *)_4__this->fields.AllDownLoadFilePathCRCDictionary;
  if ( !this )
    goto LABEL_22;
  outputMergeFile = _4__this->fields.outputMergeFile;
  Values = System_Collections_Generic_Dictionary_object__uint___get_Values(
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)this,
             (const MethodInfo_35041F8 *)Method_System_Collections_Generic_Dictionary_string__uint__get_Values__);
  v33 = (System_Collections_Generic_List_uint__o *)System_Linq_Enumerable__ToList_uint_(
                                                     (System_Collections_Generic_IEnumerable_TSource__o *)Values,
                                                     (const MethodInfo_31B3FF4 *)Method_System_Linq_Enumerable_ToList_uint___);
  v34 = (FileMergeAndSplit_CRCChecker_o *)sub_1C7BD34(FileMergeAndSplit_CRCChecker_TypeInfo);
  FileMergeAndSplit_CRCChecker___ctor(v34, outputMergeFile, v33, v35);
  _4__this->fields.crcCheckerClass = v34;
  p_crcCheckerClass = (GrandQuestFolderBoardItem_o *)&_4__this->fields.crcCheckerClass;
  sub_1C7BA8C(p_crcCheckerClass, (int32_t)v34, v37, v38, v39, v40, v41, v42);
  this = (MovieFileMerge__CRCDownloadAndCheck_d__38_o *)p_crcCheckerClass->klass;
  if ( !p_crcCheckerClass->klass )
    goto LABEL_22;
  v43 = FileMergeAndSplit_CRCChecker__Run((FileMergeAndSplit_CRCChecker_o *)this, method);
  v4->fields.__2__current = (Il2CppObject *)v43;
  v44 = (GrandQuestFolderBoardItem_o *)&v4->fields.__2__current;
  sub_1C7BA8C(v44, (int32_t)v43, v45, v46, v47, v48, v49, v50);
  LODWORD(v44[-1].fields._ClosedMessage_k__BackingField) = 2;
  return 1;
}


Il2CppObject *MovieFileMerge__CRCDownloadAndCheck_d__38__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        MovieFileMerge__CRCDownloadAndCheck_d__38_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn MovieFileMerge__CRCDownloadAndCheck_d__38__System_Collections_IEnumerator_Reset(
        MovieFileMerge__CRCDownloadAndCheck_d__38_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C7BAFC(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C7BD34(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C7BAFC(&Method_MovieFileMerge__CRCDownloadAndCheck_d__38_System_Collections_IEnumerator_Reset__);
  sub_1C7BC10(v3, v4);
}


Il2CppObject *MovieFileMerge__CRCDownloadAndCheck_d__38__System_Collections_IEnumerator_get_Current(
        MovieFileMerge__CRCDownloadAndCheck_d__38_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void MovieFileMerge__CRCDownloadAndCheck_d__38__System_IDisposable_Dispose(
        MovieFileMerge__CRCDownloadAndCheck_d__38_o *this,
        const MethodInfo *method)
{
  ;
}


void MovieFileMerge__DownloadMovie_d__39___ctor(
        MovieFileMerge__DownloadMovie_d__39_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool MovieFileMerge__DownloadMovie_d__39__MoveNext(
        MovieFileMerge__DownloadMovie_d__39_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  MovieFileMerge__DownloadMovie_d__39_o *v8; // x20
  int32_t _1__state; // w8
  MovieFileMerge_o *_4__this; // x19
  System_Collections_Generic_Dictionary_TKey__TValue__o *RequireDownLoadFilePathCRCDictionary; // x0
  MovieFileMerge__DownloadMovie_d__39_o *v12; // x9
  __int128 v13; // q0
  struct System_Collections_Generic_KeyValuePair_TKey__TValue__o current; // q1
  struct System_Collections_Generic_Dictionary_Enumerator_string__uint__o *p__7__wrap1; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  const MethodInfo *v22; // x1
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  bool v29; // w8
  MovieFileMerge__DownloadMovie_d__39_o *v30; // x0
  MovieFileMerge__DownloadMovie_d__39_o *v31; // x0
  bool result; // w0
  __int64 v33; // x0
  __int64 v34; // x1
  MovieFileMerge__DownloadMovie_d__39_o *v35; // x8
  Il2CppObject *v36; // x1
  MovieFileMerge__DownloadMovie_d__39_o *v37; // x0
  int32_t v38; // w2
  int32_t v39; // w3
  System_String_o *v40; // x4
  int32_t v41; // w5
  int64_t v42; // x6
  System_String_o *v43; // x7
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v44[2]; // [xsp+8h] [xbp-88h] BYREF
  MovieFileMerge__DownloadMovie_d__39_o **v45; // [xsp+68h] [xbp-28h]
  MovieFileMerge__DownloadMovie_d__39_o *v46; // [xsp+78h] [xbp-18h] BYREF

  v46 = this;
  v8 = this;
  if ( (byte_4CED602 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_string__uint__GetEnumerator__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_Enumerator_string__uint__MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_Enumerator_string__uint__get_Current__);
    sub_1C7BAE8(&Method_System_Collections_Generic_KeyValuePair_string__uint__get_Key__);
    this = (MovieFileMerge__DownloadMovie_d__39_o *)sub_1C7BAE8(&Method_System_Collections_Generic_KeyValuePair_string__uint__get_Value__);
    byte_4CED602 = 1;
  }
  v45 = &v46;
  _1__state = v8->fields.__1__state;
  _4__this = v8->fields.__4__this;
  if ( _1__state == 2 )
  {
    v8->fields.__1__state = -3;
    v8->fields._dic_5__3.fields.key = 0;
    *(_QWORD *)&v8->fields._dic_5__3.fields.value = 0;
  }
  else
  {
    if ( _1__state == 1 )
    {
      v8->fields.__1__state = -3;
      goto LABEL_13;
    }
    if ( _1__state )
      return 0;
    v8->fields.__1__state = -1;
    if ( !_4__this )
      sub_1C7BD40(this, method);
    RequireDownLoadFilePathCRCDictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)_4__this->fields.RequireDownLoadFilePathCRCDictionary;
    _4__this->fields.isDownloading = 1;
    _4__this->fields.downloadProgress = 0;
    if ( !RequireDownLoadFilePathCRCDictionary )
      sub_1C7BD40(0, method);
    System_Collections_Generic_Dictionary_object__uint___GetEnumerator(
      v44,
      RequireDownLoadFilePathCRCDictionary,
      (const MethodInfo_35047B8 *)Method_System_Collections_Generic_Dictionary_string__uint__GetEnumerator__);
    v12 = v46;
    v13 = *(_OWORD *)&v44[0].fields._dictionary;
    current = v44[0].fields._current;
    p__7__wrap1 = &v46->fields.__7__wrap1;
    v44[1] = v44[0];
    *(_QWORD *)&v46->fields.__7__wrap1.fields._getEnumeratorRetType = *(_QWORD *)&v44[0].fields._getEnumeratorRetType;
    v12->fields.__7__wrap1.fields._current = current;
    *(_OWORD *)&v12->fields.__7__wrap1.fields._dictionary = v13;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)p__7__wrap1, 0, v16, v17, v18, v19, v20, v21);
    v8 = v46;
    v46->fields.__1__state = -3;
  }
  v29 = System_Collections_Generic_Dictionary_Enumerator_object__uint___MoveNext(
          (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v8->fields.__7__wrap1,
          (const MethodInfo_35F4C50 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__uint__MoveNext__);
  v30 = v46;
  if ( !v29 )
  {
    MovieFileMerge__DownloadMovie_d__39____m__Finally1(v46, v22);
    v35 = v46;
    *(_QWORD *)&v46->fields.__7__wrap1.fields._getEnumeratorRetType = 0;
    v35->fields.__7__wrap1.fields._current = 0u;
    *(_OWORD *)&v35->fields.__7__wrap1.fields._dictionary = 0u;
    if ( !_4__this )
      sub_1C7BD40(v33, v34);
    result = 0;
    _4__this->fields.isDownloading = 0;
    return result;
  }
  v46->fields._dic_5__3 = (struct System_Collections_Generic_KeyValuePair_string__uint__o)v46->fields.__7__wrap1.fields._current;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v30->fields._dic_5__3, 0, v23, v24, v25, v26, v27, v28);
LABEL_13:
  if ( !_4__this )
    sub_1C7BD40(this, method);
  if ( _4__this->fields.isDownloadPause )
  {
    if ( !_4__this->fields.isDownloadCancel )
    {
      v31 = v46;
      v46->fields.__2__current = 0;
      sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v31->fields.__2__current, 0, v2, (int32_t)v3, v4, v5, v6, v7);
      result = 1;
      v46->fields.__1__state = 1;
      return result;
    }
    goto LABEL_20;
  }
  if ( _4__this->fields.isDownloadCancel )
  {
LABEL_20:
    _4__this->fields.isDownloading = 0;
    MovieFileMerge__DownloadMovie_d__39____m__Finally1(v46, method);
    return 0;
  }
  v36 = (Il2CppObject *)MovieFileMerge__Download(
                          _4__this,
                          v46->fields._dic_5__3.fields.key,
                          v46->fields._dic_5__3.fields.value,
                          v3);
  v37 = v46;
  v46->fields.__2__current = v36;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v37->fields.__2__current, (int32_t)v36, v38, v39, v40, v41, v42, v43);
  result = 1;
  v46->fields.__1__state = 2;
  return result;
}


Il2CppObject *MovieFileMerge__DownloadMovie_d__39__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        MovieFileMerge__DownloadMovie_d__39_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn MovieFileMerge__DownloadMovie_d__39__System_Collections_IEnumerator_Reset(
        MovieFileMerge__DownloadMovie_d__39_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C7BAFC(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C7BD34(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C7BAFC(&Method_MovieFileMerge__DownloadMovie_d__39_System_Collections_IEnumerator_Reset__);
  sub_1C7BC10(v3, v4);
}


Il2CppObject *MovieFileMerge__DownloadMovie_d__39__System_Collections_IEnumerator_get_Current(
        MovieFileMerge__DownloadMovie_d__39_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void MovieFileMerge__DownloadMovie_d__39__System_IDisposable_Dispose(
        MovieFileMerge__DownloadMovie_d__39_o *this,
        const MethodInfo *method)
{
  unsigned int v2; // w8

  v2 = this->fields.__1__state + 3;
  if ( v2 <= 5 && ((1 << v2) & 0x31) != 0 )
    MovieFileMerge__DownloadMovie_d__39____m__Finally1(this, method);
}


void MovieFileMerge__DownloadMovie_d__39____m__Finally1(
        MovieFileMerge__DownloadMovie_d__39_o *this,
        const MethodInfo *method)
{
  if ( (byte_4CED603 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_Enumerator_string__uint__Dispose__);
    byte_4CED603 = 1;
  }
  this->fields.__1__state = -1;
  System_Collections_Generic_Dictionary_Enumerator_object__uint___Dispose(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&this->fields.__7__wrap1,
    (const MethodInfo_35F4D74 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__uint__Dispose__);
}


void MovieFileMerge__Download_d__47___ctor(
        MovieFileMerge__Download_d__47_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool MovieFileMerge__Download_d__47__MoveNext(MovieFileMerge__Download_d__47_o *this, const MethodInfo *method)
{
  MovieFileMerge__Download_d__47_o *v2; // x19
  struct MovieFileMerge_o *_4__this; // x20
  System_String_o *v4; // x0
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  const MethodInfo *v11; // x1
  Il2CppObject *LocalFolderPath; // x0
  System_String_o *v13; // x0
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
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x4
  int32_t v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7
  UnityEngine_Networking_UnityWebRequest_o *v32; // x0
  GrandQuestFolderBoardItem_o *p_loader; // x20
  int32_t v34; // w2
  int32_t v35; // w3
  System_String_o *v36; // x4
  int32_t v37; // w5
  int64_t v38; // x6
  System_String_o *v39; // x7
  GrandQuestFolderBoardItem_o *p__2__current; // x19
  int32_t v41; // w2
  int32_t v42; // w3
  System_String_o *v43; // x4
  int32_t v44; // w5
  int64_t v45; // x6
  System_String_o *v46; // x7
  bool result; // w0

  v2 = this;
  if ( (byte_4CED601 & 1) == 0 )
  {
    sub_1C7BAE8(&char___TypeInfo);
    sub_1C7BAE8(&ErrorDialog_ClickDelegate_TypeInfo);
    sub_1C7BAE8(&CommonServicePluginScript_TypeInfo);
    sub_1C7BAE8(&Crc32_TypeInfo);
    sub_1C7BAE8(&UnityEngine_Debug_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_string__string__TryGetValue__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_string__string__get_Count__);
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&ManagementManager_TypeInfo);
    sub_1C7BAE8(&ManagerConfig_TypeInfo);
    sub_1C7BAE8(&Method_MovieFileMerge_EndRetryDialog__);
    sub_1C7BAE8(&Method_MovieFileMerge_EndWarningDialog__);
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C7BAE8(&string___TypeInfo);
    sub_1C7BAE8(&UnityEngine_WaitForEndOfFrame_TypeInfo);
    sub_1C7BAE8(&UnityEngine_WaitForSeconds_TypeInfo);
    sub_1C7BAE8(&StringLiteral_7277/*"HTTP"*/);
    sub_1C7BAE8(&StringLiteral_760/*")\n\n503 Auto retry count "*/);
    sub_1C7BAE8(&StringLiteral_763/*")\nfile crc ("*/);
    sub_1C7BAE8(&StringLiteral_1419/*"503"*/);
    sub_1C7BAE8(&StringLiteral_2041/*"ASSET_LOADER_ERROR_BOOT_RETRY_MESSAGE"*/);
    sub_1C7BAE8(&StringLiteral_15985/*"[FFFF80]Download error for debug"*/);
    sub_1C7BAE8(&StringLiteral_25412/*"{0}/{1}"*/);
    sub_1C7BAE8(&StringLiteral_12406/*"STATUS"*/);
    sub_1C7BAE8(&StringLiteral_759/*")\n\n"*/);
    sub_1C7BAE8(&StringLiteral_651/*"("*/);
    sub_1C7BAE8(&StringLiteral_761/*")\n\nAssetBundle file check sum error\nlist crc ("*/);
    sub_1C7BAE8(&StringLiteral_757/*")"*/);
    sub_1C7BAE8(&StringLiteral_2042/*"ASSET_LOADER_ERROR_TIME_OVER_MESSAGE"*/);
    sub_1C7BAE8(&StringLiteral_762/*")\n\nAssetBundle file download time over"*/);
    this = (MovieFileMerge__Download_d__47_o *)sub_1C7BAE8(&StringLiteral_1/*""*/);
    byte_4CED601 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( v2->fields.__1__state )
    return 0;
  v2->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_10;
  v4 = System_String__Format_64218220(
         (System_String_o *)StringLiteral_25412/*"{0}/{1}"*/,
         (Il2CppObject *)_4__this->fields.assetFolderURL,
         (Il2CppObject *)v2->fields.fileName,
         0);
  _4__this->fields.downloadingURL = v4;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&_4__this->fields.downloadingURL, (int32_t)v4, v5, v6, v7, v8, v9, v10);
  _4__this->fields.downloadingCRC = v2->fields.crc;
  LocalFolderPath = (Il2CppObject *)MovieFileMerge__GetLocalFolderPath(_4__this, v11);
  v13 = System_String__Format_64218220(
          (System_String_o *)StringLiteral_25412/*"{0}/{1}"*/,
          LocalFolderPath,
          (Il2CppObject *)v2->fields.fileName,
          0);
  v2->fields._dlFilePath_5__2 = v13;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v2->fields._dlFilePath_5__2, (int32_t)v13, v14, v15, v16, v17, v18, v19);
  v2->fields._autoRetryCount_5__3 = 0;
  v2->fields._isDownload_5__4 = 1;
  _4__this->fields.isErrorDialog = 0;
  while ( 1 )
  {
    v2->fields._readData_5__5 = 0;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v2->fields._readData_5__5, 0, v20, v21, v22, v23, v24, v25);
    if ( v2->fields._isDownload_5__4 )
      break;
    v2->fields._readData_5__5 = 0;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v2->fields._readData_5__5, 0, v26, v27, v28, v29, v30, v31);
  }
  v32 = UnityEngine_Networking_UnityWebRequest__Get(_4__this->fields.downloadingURL, 0);
  _4__this->fields.loader = v32;
  p_loader = (GrandQuestFolderBoardItem_o *)&_4__this->fields.loader;
  sub_1C7BA8C(p_loader, (int32_t)v32, v34, v35, v36, v37, v38, v39);
  this = (MovieFileMerge__Download_d__47_o *)p_loader->klass;
  if ( !p_loader->klass )
LABEL_10:
    sub_1C7BD40(this, method);
  UnityEngine_Networking_UnityWebRequest__SendWebRequest((UnityEngine_Networking_UnityWebRequest_o *)this, 0);
  v2->fields.__2__current = 0;
  p__2__current = (GrandQuestFolderBoardItem_o *)&v2->fields.__2__current;
  sub_1C7BA8C(p__2__current, 0, v41, v42, v43, v44, v45, v46);
  result = 1;
  LODWORD(p__2__current[-1].fields._ClosedMessage_k__BackingField) = 1;
  return result;
}


Il2CppObject *MovieFileMerge__Download_d__47__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        MovieFileMerge__Download_d__47_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn MovieFileMerge__Download_d__47__System_Collections_IEnumerator_Reset(
        MovieFileMerge__Download_d__47_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C7BAFC(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C7BD34(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C7BAFC(&Method_MovieFileMerge__Download_d__47_System_Collections_IEnumerator_Reset__);
  sub_1C7BC10(v3, v4);
}


Il2CppObject *MovieFileMerge__Download_d__47__System_Collections_IEnumerator_get_Current(
        MovieFileMerge__Download_d__47_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void MovieFileMerge__Download_d__47__System_IDisposable_Dispose(
        MovieFileMerge__Download_d__47_o *this,
        const MethodInfo *method)
{
  ;
}


void MovieFileMerge__Merge_d__40___ctor(
        MovieFileMerge__Merge_d__40_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool MovieFileMerge__Merge_d__40__MoveNext(MovieFileMerge__Merge_d__40_o *this, const MethodInfo *method)
{
  MovieFileMerge__Merge_d__40_o *v2; // x19
  int32_t _1__state; // w8
  struct MovieFileMerge_o *_4__this; // x20
  System_Collections_Generic_List_string__o *SplitFileList; // x0
  System_String_o *outputMergeFile; // x21
  System_Collections_Generic_List_string__o *v7; // x22
  FileMergeAndSplit_Merge_o *v8; // x23
  const MethodInfo *v9; // x3
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  FileMergeAndSplit_Merge_o *mergeClass; // x21
  System_Action_object__o *v17; // x22
  const MethodInfo *v18; // x2
  System_Collections_IEnumerator_o *v19; // x0
  GrandQuestFolderBoardItem_o *p__2__current; // x19
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  bool result; // w0
  struct FileMergeAndSplit_CRCChecker_o *crcCheckerClass; // x8
  struct FileMergeAndSplit_Merge_o *v29; // x8
  System_String_o *v30; // x21
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x0
  System_Collections_Generic_List_uint__o *v32; // x22
  FileMergeAndSplit_CRCChecker_o *v33; // x23
  const MethodInfo *v34; // x3
  GrandQuestFolderBoardItem_o *p_crcCheckerClass; // x20
  int32_t v36; // w2
  int32_t v37; // w3
  System_String_o *v38; // x4
  int32_t v39; // w5
  int64_t v40; // x6
  System_String_o *v41; // x7
  System_Collections_IEnumerator_o *v42; // x0
  GrandQuestFolderBoardItem_o *v43; // x19
  int32_t v44; // w2
  int32_t v45; // w3
  System_String_o *v46; // x4
  int32_t v47; // w5
  int64_t v48; // x6
  System_String_o *v49; // x7

  v2 = this;
  if ( (byte_4CED604 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_Exception__TypeInfo);
    sub_1C7BAE8(&FileMergeAndSplit_CRCChecker_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_string__uint__get_Values__);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_ToList_uint___);
    sub_1C7BAE8(&FileMergeAndSplit_Merge_TypeInfo);
    this = (MovieFileMerge__Merge_d__40_o *)sub_1C7BAE8(&Method_MovieFileMerge__Merge_b__40_0__);
    byte_4CED604 = 1;
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
        v8 = (FileMergeAndSplit_Merge_o *)sub_1C7BD34(FileMergeAndSplit_Merge_TypeInfo);
        FileMergeAndSplit_Merge___ctor(v8, v7, outputMergeFile, v9);
        _4__this->fields.mergeClass = v8;
        sub_1C7BA8C(
          (GrandQuestFolderBoardItem_o *)&_4__this->fields.mergeClass,
          (int32_t)v8,
          v10,
          v11,
          v12,
          v13,
          v14,
          v15);
        mergeClass = _4__this->fields.mergeClass;
        v17 = (System_Action_object__o *)sub_1C7BD34(System_Action_Exception__TypeInfo);
        System_Action_object____ctor(v17, (Il2CppObject *)_4__this, Method_MovieFileMerge__Merge_b__40_0__, 0);
        if ( mergeClass )
        {
          v19 = FileMergeAndSplit_Merge__Run(mergeClass, (System_Action_Exception__o *)v17, v18);
          v2->fields.__2__current = (Il2CppObject *)v19;
          p__2__current = (GrandQuestFolderBoardItem_o *)&v2->fields.__2__current;
          sub_1C7BA8C(p__2__current, (int32_t)v19, v21, v22, v23, v24, v25, v26);
          result = 1;
          LODWORD(p__2__current[-1].fields._ClosedMessage_k__BackingField) = 1;
          return result;
        }
      }
LABEL_23:
      sub_1C7BD40(this, method);
    }
    return 0;
  }
  v2->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_23;
  v29 = _4__this->fields.mergeClass;
  if ( !v29 )
    goto LABEL_23;
  if ( v29->fields.isError )
    return 0;
  this = (MovieFileMerge__Merge_d__40_o *)_4__this->fields.AllDownLoadFilePathCRCDictionary;
  if ( !this )
    goto LABEL_23;
  v30 = _4__this->fields.outputMergeFile;
  Values = System_Collections_Generic_Dictionary_object__uint___get_Values(
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)this,
             (const MethodInfo_35041F8 *)Method_System_Collections_Generic_Dictionary_string__uint__get_Values__);
  v32 = (System_Collections_Generic_List_uint__o *)System_Linq_Enumerable__ToList_uint_(
                                                     (System_Collections_Generic_IEnumerable_TSource__o *)Values,
                                                     (const MethodInfo_31B3FF4 *)Method_System_Linq_Enumerable_ToList_uint___);
  v33 = (FileMergeAndSplit_CRCChecker_o *)sub_1C7BD34(FileMergeAndSplit_CRCChecker_TypeInfo);
  FileMergeAndSplit_CRCChecker___ctor(v33, v30, v32, v34);
  _4__this->fields.crcCheckerClass = v33;
  p_crcCheckerClass = (GrandQuestFolderBoardItem_o *)&_4__this->fields.crcCheckerClass;
  sub_1C7BA8C(p_crcCheckerClass, (int32_t)v33, v36, v37, v38, v39, v40, v41);
  this = (MovieFileMerge__Merge_d__40_o *)p_crcCheckerClass->klass;
  if ( !p_crcCheckerClass->klass )
    goto LABEL_23;
  v42 = FileMergeAndSplit_CRCChecker__Run((FileMergeAndSplit_CRCChecker_o *)this, method);
  v2->fields.__2__current = (Il2CppObject *)v42;
  v43 = (GrandQuestFolderBoardItem_o *)&v2->fields.__2__current;
  sub_1C7BA8C(v43, (int32_t)v42, v44, v45, v46, v47, v48, v49);
  LODWORD(v43[-1].fields._ClosedMessage_k__BackingField) = 2;
  return 1;
}


Il2CppObject *MovieFileMerge__Merge_d__40__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        MovieFileMerge__Merge_d__40_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn MovieFileMerge__Merge_d__40__System_Collections_IEnumerator_Reset(
        MovieFileMerge__Merge_d__40_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C7BAFC(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C7BD34(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C7BAFC(&Method_MovieFileMerge__Merge_d__40_System_Collections_IEnumerator_Reset__);
  sub_1C7BC10(v3, v4);
}


Il2CppObject *MovieFileMerge__Merge_d__40__System_Collections_IEnumerator_get_Current(
        MovieFileMerge__Merge_d__40_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void MovieFileMerge__Merge_d__40__System_IDisposable_Dispose(
        MovieFileMerge__Merge_d__40_o *this,
        const MethodInfo *method)
{
  ;
}


void MovieFileMerge__PlayCRIMovie_d__36___ctor(
        MovieFileMerge__PlayCRIMovie_d__36_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool MovieFileMerge__PlayCRIMovie_d__36__MoveNext(MovieFileMerge__PlayCRIMovie_d__36_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  MovieFileMerge__PlayCRIMovie_d__36_o *v8; // x19
  int32_t _1__state; // w8
  struct MovieFileMerge_o *_4__this; // x25
  Il2CppObject *v11; // x21
  Il2CppObject **p__8__1; // x20
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  Il2CppObject *object; // x21
  Il2CppObject *v20; // x22
  MovieFileMerge__PlayCRIMovie_d__36_o *v21; // x21
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  Il2CppObject *Component_object; // x21
  CRIMoviePlayer_o *klass; // x21
  System_String_o *filePath; // x22
  BgmManager_c *v31; // x0
  Il2CppObject *v32; // x24
  float masterVolume; // s8
  System_Action_o *v34; // x23
  struct MovieFileMerge___c__DisplayClass36_0_o *_8__1; // x8
  GrandQuestFolderBoardItem_o *p__2__current; // x19
  bool result; // w0

  v8 = this;
  if ( (byte_4CED605 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&BgmManager_TypeInfo);
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_CRIMoviePlayer___);
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_UIPanel___);
    sub_1C7BAE8(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&Method_UnityEngine_Resources_Load_GameObject___);
    sub_1C7BAE8(&Method_MovieFileMerge___c__DisplayClass36_0__PlayCRIMovie_b__0__);
    sub_1C7BAE8(&MovieFileMerge___c__DisplayClass36_0_TypeInfo);
    this = (MovieFileMerge__PlayCRIMovie_d__36_o *)sub_1C7BAE8(&StringLiteral_3926/*"CRIMovie/CRIMoviePlayerWithPanel"*/);
    byte_4CED605 = 1;
  }
  _1__state = v8->fields.__1__state;
  if ( _1__state == 1 )
  {
    v8->fields.__1__state = -1;
  }
  else
  {
    if ( _1__state )
      return 0;
    v8->fields.__1__state = -1;
    _4__this = v8->fields.__4__this;
    v11 = (Il2CppObject *)sub_1C7BD34(MovieFileMerge___c__DisplayClass36_0_TypeInfo);
    System_Object___ctor(v11, 0);
    v8->fields.__8__1 = (struct MovieFileMerge___c__DisplayClass36_0_o *)v11;
    p__8__1 = (Il2CppObject **)&v8->fields.__8__1;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v8->fields.__8__1, (int32_t)v11, v13, v14, v15, v16, v17, v18);
    object = UnityEngine_Resources__Load_object_(
               (System_String_o *)StringLiteral_3926/*"CRIMovie/CRIMoviePlayerWithPanel"*/,
               (const MethodInfo_320C160 *)Method_UnityEngine_Resources_Load_GameObject___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (MovieFileMerge__PlayCRIMovie_d__36_o *)UnityEngine_Object__Instantiate_object_(
                                                     object,
                                                     (const MethodInfo_31FBEB0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !this )
      goto LABEL_32;
    v20 = *p__8__1;
    v21 = this;
    this = (MovieFileMerge__PlayCRIMovie_d__36_o *)UnityEngine_GameObject__GetComponent_object_(
                                                     (UnityEngine_GameObject_o *)this,
                                                     (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_CRIMoviePlayer___);
    if ( !v20 )
      goto LABEL_32;
    v20[1].klass = (Il2CppClass *)this;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v20[1], (int32_t)this, v22, v23, v24, v25, v26, v27);
    if ( !*p__8__1 )
      goto LABEL_32;
    LOBYTE((*p__8__1)[1].monitor) = 1;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)v21,
                         (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_UIPanel___);
    this = (MovieFileMerge__PlayCRIMovie_d__36_o *)UnityEngine_Object__op_Inequality(
                                                     (UnityEngine_Object_o *)Component_object,
                                                     0,
                                                     0);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !_4__this )
        goto LABEL_32;
      method = (const MethodInfo *)(unsigned int)_4__this->fields._OverrideDepth_k__BackingField;
      if ( (int)method >= 1 )
      {
        if ( !Component_object )
          goto LABEL_32;
        UIPanel__set_depth((UIPanel_o *)Component_object, (int32_t)method, 0);
        _4__this->fields._OverrideDepth_k__BackingField = -1;
      }
    }
    if ( !*p__8__1 )
      goto LABEL_32;
    klass = (CRIMoviePlayer_o *)(*p__8__1)[1].klass;
    filePath = v8->fields.filePath;
    if ( !BgmManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
    if ( !byte_4CE939F )
    {
      sub_1C7BAE8(&BgmManager_TypeInfo);
      byte_4CE939F = 1;
    }
    v31 = BgmManager_TypeInfo;
    if ( !BgmManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
      v31 = BgmManager_TypeInfo;
    }
    v32 = *p__8__1;
    masterVolume = v31->static_fields->masterVolume;
    v34 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
    System_Action___ctor(v34, v32, Method_MovieFileMerge___c__DisplayClass36_0__PlayCRIMovie_b__0__, 0);
    if ( !_4__this
      || !klass
      || (CRIMoviePlayer__Initialize(
            klass,
            filePath,
            filePath,
            masterVolume,
            1,
            0,
            v34,
            1,
            0,
            0,
            0,
            1,
            0,
            _4__this->fields.isEnableSkipButton,
            0),
          !*p__8__1)
      || (this = (MovieFileMerge__PlayCRIMovie_d__36_o *)(*p__8__1)[1].klass) == 0 )
    {
LABEL_32:
      sub_1C7BD40(this, method);
    }
    CRIMoviePlayer__MoviePlay((CRIMoviePlayer_o *)this, 1, 1, 1, 0, 0);
  }
  _8__1 = v8->fields.__8__1;
  if ( !_8__1 )
    goto LABEL_32;
  if ( _8__1->fields.wait )
  {
    v8->fields.__2__current = 0;
    p__2__current = (GrandQuestFolderBoardItem_o *)&v8->fields.__2__current;
    sub_1C7BA8C(p__2__current, 0, v2, v3, v4, v5, v6, v7);
    result = 1;
    LODWORD(p__2__current[-1].fields._ClosedMessage_k__BackingField) = 1;
    return result;
  }
  return 0;
}


Il2CppObject *MovieFileMerge__PlayCRIMovie_d__36__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        MovieFileMerge__PlayCRIMovie_d__36_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn MovieFileMerge__PlayCRIMovie_d__36__System_Collections_IEnumerator_Reset(
        MovieFileMerge__PlayCRIMovie_d__36_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C7BAFC(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C7BD34(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C7BAFC(&Method_MovieFileMerge__PlayCRIMovie_d__36_System_Collections_IEnumerator_Reset__);
  sub_1C7BC10(v3, v4);
}


Il2CppObject *MovieFileMerge__PlayCRIMovie_d__36__System_Collections_IEnumerator_get_Current(
        MovieFileMerge__PlayCRIMovie_d__36_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void MovieFileMerge__PlayCRIMovie_d__36__System_IDisposable_Dispose(
        MovieFileMerge__PlayCRIMovie_d__36_o *this,
        const MethodInfo *method)
{
  ;
}


void MovieFileMerge__PlayMP4_d__34___ctor(
        MovieFileMerge__PlayMP4_d__34_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool MovieFileMerge__PlayMP4_d__34__MoveNext(MovieFileMerge__PlayMP4_d__34_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  int32_t _1__state; // w8
  bool result; // w0
  struct MovieFileMerge_o *_4__this; // x0
  Il2CppObject *v7; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  int32_t v14; // w8

  _1__state = this->fields.__1__state;
  result = 0;
  if ( _1__state == 1 )
  {
    v14 = -1;
  }
  else
  {
    if ( _1__state )
      return result;
    _4__this = this->fields.__4__this;
    this->fields.__1__state = -1;
    if ( !_4__this )
      sub_1C7BD40(0, method);
    v7 = (Il2CppObject *)MovieFileMerge__PlayMP4_41051184(_4__this, _4__this->fields.outputMergeFile, v2);
    this->fields.__2__current = v7;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.__2__current, (int32_t)v7, v8, v9, v10, v11, v12, v13);
    v14 = 1;
    result = 1;
  }
  this->fields.__1__state = v14;
  return result;
}


Il2CppObject *MovieFileMerge__PlayMP4_d__34__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        MovieFileMerge__PlayMP4_d__34_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn MovieFileMerge__PlayMP4_d__34__System_Collections_IEnumerator_Reset(
        MovieFileMerge__PlayMP4_d__34_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C7BAFC(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C7BD34(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C7BAFC(&Method_MovieFileMerge__PlayMP4_d__34_System_Collections_IEnumerator_Reset__);
  sub_1C7BC10(v3, v4);
}


Il2CppObject *MovieFileMerge__PlayMP4_d__34__System_Collections_IEnumerator_get_Current(
        MovieFileMerge__PlayMP4_d__34_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void MovieFileMerge__PlayMP4_d__34__System_IDisposable_Dispose(
        MovieFileMerge__PlayMP4_d__34_o *this,
        const MethodInfo *method)
{
  ;
}


void MovieFileMerge__PlayMP4_d__35___ctor(
        MovieFileMerge__PlayMP4_d__35_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool MovieFileMerge__PlayMP4_d__35__MoveNext(MovieFileMerge__PlayMP4_d__35_o *this, const MethodInfo *method)
{
  System_String_o *filePath; // x0
  MovieFileMerge_o *_4__this; // x20
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  bool result; // w0
  UnityEngine_WaitForEndOfFrame_o *v9; // x20
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  int32_t v16; // w8
  UnityEngine_WaitForEndOfFrame_o *v17; // x20
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  Il2CppObject *v24; // x0
  Il2CppObject **p__2__current; // x19
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x4
  int32_t v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7

  if ( (byte_4CED606 & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_WaitForEndOfFrame_TypeInfo);
    byte_4CED606 = 1;
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
        sub_1C7BD40(IsNullOrEmpty, v6);
      v24 = (Il2CppObject *)MovieFileMerge__PlayCRIMovie(_4__this, this->fields.filePath, v7);
      this->fields.__2__current = v24;
      p__2__current = &this->fields.__2__current;
      sub_1C7BA8C((GrandQuestFolderBoardItem_o *)p__2__current, (int32_t)v24, v26, v27, v28, v29, v30, v31);
      result = 1;
      *((_DWORD *)p__2__current - 2) = 1;
      break;
    case 1:
      this->fields.__1__state = -1;
      v17 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C7BD34(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v17, 0);
      this->fields.__2__current = (Il2CppObject *)v17;
      sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.__2__current, (int32_t)v17, v18, v19, v20, v21, v22, v23);
      v16 = 2;
      goto LABEL_9;
    case 2:
      this->fields.__1__state = -1;
      v9 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C7BD34(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v9, 0);
      this->fields.__2__current = (Il2CppObject *)v9;
      sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.__2__current, (int32_t)v9, v10, v11, v12, v13, v14, v15);
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


Il2CppObject *MovieFileMerge__PlayMP4_d__35__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        MovieFileMerge__PlayMP4_d__35_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn MovieFileMerge__PlayMP4_d__35__System_Collections_IEnumerator_Reset(
        MovieFileMerge__PlayMP4_d__35_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C7BAFC(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C7BD34(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C7BAFC(&Method_MovieFileMerge__PlayMP4_d__35_System_Collections_IEnumerator_Reset__);
  sub_1C7BC10(v3, v4);
}


Il2CppObject *MovieFileMerge__PlayMP4_d__35__System_Collections_IEnumerator_get_Current(
        MovieFileMerge__PlayMP4_d__35_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void MovieFileMerge__PlayMP4_d__35__System_IDisposable_Dispose(
        MovieFileMerge__PlayMP4_d__35_o *this,
        const MethodInfo *method)
{
  ;
}


void MovieFileMerge___c__DisplayClass36_0___ctor(
        MovieFileMerge___c__DisplayClass36_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void MovieFileMerge___c__DisplayClass36_0___PlayCRIMovie_b__0(
        MovieFileMerge___c__DisplayClass36_0_o *this,
        const MethodInfo *method)
{
  CRIMoviePlayer_o *player; // x0

  player = this->fields.player;
  if ( !player )
    sub_1C7BD40(0, method);
  CRIMoviePlayer__Dispose(player, 0);
  this->fields.wait = 0;
}