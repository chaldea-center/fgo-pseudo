void MovieFileMerge___ctor(MovieFileMerge_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_string__uint__c *v3; // x0
  System_Collections_Generic_Dictionary_TKey__TValue__o *v4; // x20
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  System_Collections_Generic_Dictionary_TKey__TValue__o *v11; // x20
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7

  if ( (byte_59375BD & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__uint___ctor__);
    sub_21FFC50(&System_Collections_Generic_Dictionary_string__uint__TypeInfo);
    byte_59375BD = 1;
  }
  v3 = System_Collections_Generic_Dictionary_string__uint__TypeInfo;
  this->fields._OverrideDepth_k__BackingField = -1;
  v4 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_21FFEBC(v3);
  System_Collections_Generic_Dictionary_object__uint____ctor(
    v4,
    (const MethodInfo_3FF0F18 *)Method_System_Collections_Generic_Dictionary_string__uint___ctor__);
  this->fields.AllDownLoadFilePathCRCDictionary = (struct System_Collections_Generic_Dictionary_string__uint__o *)v4;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.AllDownLoadFilePathCRCDictionary,
    (int32_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  v11 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_21FFEBC(System_Collections_Generic_Dictionary_string__uint__TypeInfo);
  System_Collections_Generic_Dictionary_object__uint____ctor(
    v11,
    (const MethodInfo_3FF0F18 *)Method_System_Collections_Generic_Dictionary_string__uint___ctor__);
  this->fields.RequireDownLoadFilePathCRCDictionary = (struct System_Collections_Generic_Dictionary_string__uint__o *)v11;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.RequireDownLoadFilePathCRCDictionary,
    (int32_t)v11,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void MovieFileMerge__AssetLoadLogError(MovieFileMerge_o *this, System_String_o *errorCode, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  Il2CppObject *v13; // x21
  int32_t v14; // w1
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  int32_t v21; // w1
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  int32_t v28; // w1
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7
  int32_t v35; // w1
  System_String_o *v36; // x2
  System_String_o *v37; // x3
  int32_t v38; // w4
  int32_t v39; // w5
  bool v40; // w6
  bool v41; // w7
  int32_t v42; // w1
  System_String_o *v43; // x2
  System_String_o *v44; // x3
  int32_t v45; // w4
  int32_t v46; // w5
  bool v47; // w6
  bool v48; // w7
  int32_t v49; // w1
  System_String_o *v50; // x2
  System_String_o *v51; // x3
  int32_t v52; // w4
  int32_t v53; // w5
  bool v54; // w6
  bool v55; // w7
  int32_t v56; // w1
  System_String_o *v57; // x2
  System_String_o *v58; // x3
  int32_t v59; // w4
  int32_t v60; // w5
  bool v61; // w6
  bool v62; // w7
  int32_t v63; // w1
  __int64 v64; // x2
  unsigned __int64 v65; // x22
  __int64 monitor; // x24
  __int64 v67; // x1
  __int64 v68; // x2

  if ( (byte_59375BB & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Debug_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
    sub_21FFC50(&string___TypeInfo);
    sub_21FFC50(&StringLiteral_14709/*"The request timed out."*/);
    sub_21FFC50(&StringLiteral_14649/*"The network connection was lost."*/);
    sub_21FFC50(&StringLiteral_4834/*"Connection reset by peer"*/);
    sub_21FFC50(&StringLiteral_5198/*"DLErrorType"*/);
    sub_21FFC50(&StringLiteral_5197/*"DLErrorAsset"*/);
    sub_21FFC50(&StringLiteral_4833/*"Connection refused"*/);
    sub_21FFC50(&StringLiteral_9833/*"No address associated with hostname"*/);
    sub_21FFC50(&StringLiteral_2481/*"AssetBundle file download time over"*/);
    sub_21FFC50(&StringLiteral_13443/*"Software caused connection abort"*/);
    sub_21FFC50(&StringLiteral_4835/*"Connection timed out"*/);
    sub_21FFC50(&StringLiteral_2484/*"AssetLoadError"*/);
    byte_59375BB = 1;
  }
  Instance = (Il2CppObject *)sub_21FFD10(string___TypeInfo, 8);
  if ( !Instance )
    goto LABEL_28;
  v13 = Instance;
  if ( !LODWORD(Instance[1].monitor) )
    goto LABEL_27;
  v14 = StringLiteral_9833/*"No address associated with hostname"*/;
  Instance[2].klass = (Il2CppClass *)StringLiteral_9833/*"No address associated with hostname"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&Instance[2], v14, v7, v8, v9, v10, v11, v12);
  if ( ((__int64)v13[1].monitor & 0xFFFFFFFE) == 0 )
    goto LABEL_27;
  v21 = StringLiteral_2481/*"AssetBundle file download time over"*/;
  v13[2].monitor = (void *)StringLiteral_2481/*"AssetBundle file download time over"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v13[2].monitor, v21, v15, v16, v17, v18, v19, v20);
  if ( LODWORD(v13[1].monitor) <= 2 )
    goto LABEL_27;
  v28 = StringLiteral_14649/*"The network connection was lost."*/;
  v13[3].klass = (Il2CppClass *)StringLiteral_14649/*"The network connection was lost."*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v13[3], v28, v22, v23, v24, v25, v26, v27);
  if ( ((__int64)v13[1].monitor & 0xFFFFFFFC) == 0 )
    goto LABEL_27;
  v35 = StringLiteral_4834/*"Connection reset by peer"*/;
  v13[3].monitor = (void *)StringLiteral_4834/*"Connection reset by peer"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v13[3].monitor, v35, v29, v30, v31, v32, v33, v34);
  if ( LODWORD(v13[1].monitor) <= 4 )
    goto LABEL_27;
  v42 = StringLiteral_13443/*"Software caused connection abort"*/;
  v13[4].klass = (Il2CppClass *)StringLiteral_13443/*"Software caused connection abort"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v13[4], v42, v36, v37, v38, v39, v40, v41);
  if ( LODWORD(v13[1].monitor) <= 5
    || (v49 = StringLiteral_4835/*"Connection timed out"*/,
        v13[4].monitor = (void *)StringLiteral_4835/*"Connection timed out"*/,
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v13[4].monitor, v49, v43, v44, v45, v46, v47, v48),
        LODWORD(v13[1].monitor) <= 6)
    || (v56 = StringLiteral_4833/*"Connection refused"*/,
        v13[5].klass = (Il2CppClass *)StringLiteral_4833/*"Connection refused"*/,
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v13[5], v56, v50, v51, v52, v53, v54, v55),
        ((__int64)v13[1].monitor & 0xFFFFFFF8) == 0) )
  {
LABEL_27:
    sub_21FFED4(Instance);
  }
  v63 = StringLiteral_14709/*"The request timed out."*/;
  v13[5].monitor = (void *)StringLiteral_14709/*"The request timed out."*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v13[5].monitor, v63, v57, v58, v59, v60, v61, v62);
  if ( (int)v13[1].monitor < 1 )
  {
LABEL_18:
    if ( !*(&UnityEngine_Debug_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo, v6, v64);
    goto LABEL_26;
  }
  v65 = 0;
  monitor = (unsigned int)v13[1].monitor;
  while ( 1 )
  {
    if ( v65 >= LODWORD(v13[1].monitor) )
      goto LABEL_27;
    if ( !errorCode )
      goto LABEL_28;
    Instance = (Il2CppObject *)System_String__Contains(errorCode, *((System_String_o **)&v13[2].klass + v65), 0);
    if ( ((unsigned __int8)Instance & 1) != 0 )
      break;
    if ( monitor == ++v65 )
      goto LABEL_18;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
  if ( !Instance )
LABEL_28:
    sub_21FFECC(Instance, v6);
  CrashReporter__AddCustomKey(
    (CrashReporter_o *)Instance,
    (System_String_o *)StringLiteral_5197/*"DLErrorAsset"*/,
    this->fields.downloadingURL,
    0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
  if ( (unsigned int)v65 >= LODWORD(v13[1].monitor) )
    goto LABEL_27;
  if ( !Instance )
    goto LABEL_28;
  CrashReporter__AddCustomKey(
    (CrashReporter_o *)Instance,
    (System_String_o *)StringLiteral_5198/*"DLErrorType"*/,
    *((System_String_o **)&v13[2].klass + v65),
    0);
  if ( !*(&UnityEngine_Debug_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo, v67, v68);
  errorCode = (System_String_o *)StringLiteral_2484/*"AssetLoadError"*/;
LABEL_26:
  UnityEngine_Debug__LogError((Il2CppObject *)errorCode, 0);
}


System_Collections_IEnumerator_o *MovieFileMerge__CRCDownloadAndCheck(MovieFileMerge_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_59375B2 & 1) == 0 )
  {
    sub_21FFC50(&MovieFileMerge__CRCDownloadAndCheck_d__38_TypeInfo);
    byte_59375B2 = 1;
  }
  v3 = sub_21FFEBC(MovieFileMerge__CRCDownloadAndCheck_d__38_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v3 + 32), (int32_t)this, v4, v5, v6, v7, v8, v9);
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
  __int64 v9; // x22
  System_String_array *v10; // x21
  uint32_t result; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_59375B9 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__uint__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__uint___ctor__);
    sub_21FFC50(&System_Collections_Generic_Dictionary_string__uint__TypeInfo);
    byte_59375B9 = 1;
  }
  result = 0;
  v4 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_21FFEBC(System_Collections_Generic_Dictionary_string__uint__TypeInfo);
  System_Collections_Generic_Dictionary_object__uint____ctor(
    v4,
    (const MethodInfo_3FF0F18 *)Method_System_Collections_Generic_Dictionary_string__uint___ctor__);
  AllLines = System_IO_File__ReadAllLines(dataPath, 0);
  if ( !AllLines )
LABEL_17:
    sub_21FFECC(AllLines, v6);
  max_length = AllLines->max_length;
  v8 = AllLines;
  if ( max_length >= 1 )
  {
    v9 = 0;
    while ( 1 )
    {
      if ( (unsigned int)v9 >= max_length )
LABEL_18:
        sub_21FFED4(AllLines);
      AllLines = (System_String_array *)v8->m_Items[v9];
      if ( !AllLines )
        goto LABEL_17;
      AllLines = System_String__Split((System_String_o *)AllLines, 0x2Cu, 0, 0);
      result = 0;
      if ( !AllLines )
        goto LABEL_17;
      v10 = AllLines;
      if ( (AllLines->max_length & 0xFFFFFFFE) == 0 )
        goto LABEL_18;
      AllLines = (System_String_array *)System_UInt32__TryParse(AllLines->m_Items[1], &result, 0);
      if ( ((unsigned __int8)AllLines & 1) == 0 )
        return 0;
      if ( !LODWORD(v10->max_length) )
        goto LABEL_18;
      if ( !v4 )
        goto LABEL_17;
      System_Collections_Generic_Dictionary_object__uint___Add(
        v4,
        (Il2CppObject *)v10->m_Items[0],
        result,
        (const MethodInfo_3FF18AC *)Method_System_Collections_Generic_Dictionary_string__uint__Add__);
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
  __int64 v3; // x1
  __int64 v4; // x2
  System_String_o *FileName; // x19
  Il2CppObject *LocalDataPath; // x0
  System_String_o *v7; // x19

  v2 = folder;
  if ( (byte_59375B5 & 1) == 0 )
  {
    sub_21FFC50(&System_IO_Path_TypeInfo);
    sub_21FFC50(&StringLiteral_26497/*"{0}/{1}"*/);
    folder = (System_String_o *)sub_21FFC50(&StringLiteral_1123/*"/"*/);
    byte_59375B5 = 1;
  }
  if ( !v2 )
    sub_21FFECC(folder, method);
  if ( System_String__EndsWith(v2, (System_String_o *)StringLiteral_1123/*"/"*/, 0) )
    v2 = System_String__TrimEnd_75500280(v2, 0x2Fu, 0);
  if ( !*(&System_IO_Path_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_IO_Path_TypeInfo, v3, v4);
  FileName = System_IO_Path__GetFileName(v2, 0);
  LocalDataPath = (Il2CppObject *)MovieFileMerge__GetLocalDataPath((const MethodInfo *)FileName);
  v7 = System_String__Format_75484576(
         (System_String_o *)StringLiteral_26497/*"{0}/{1}"*/,
         LocalDataPath,
         (Il2CppObject *)FileName,
         0);
  if ( System_IO_Directory__Exists(v7, 0) )
    System_IO_Directory__Delete(v7, 1, 0);
}


void MovieFileMerge__Delete_47422412(const MethodInfo *method)
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
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  System_Collections_IEnumerator_o *result; // x0

  if ( (byte_59375B8 & 1) == 0 )
  {
    sub_21FFC50(&MovieFileMerge__Download_d__47_TypeInfo);
    byte_59375B8 = 1;
  }
  v7 = sub_21FFEBC(MovieFileMerge__Download_d__47_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  *(_DWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 32) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v7 + 32), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v7 + 40) = fileName;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v7 + 40), (int32_t)fileName, v14, v15, v16, v17, v18, v19);
  result = (System_Collections_IEnumerator_o *)v7;
  *(_DWORD *)(v7 + 48) = crc;
  return result;
}


void MovieFileMerge__DownloadCancel(MovieFileMerge_o *this, const MethodInfo *method)
{
  this->fields.isDownloadCancel = 1;
}


System_Collections_IEnumerator_o *MovieFileMerge__DownloadMovie(MovieFileMerge_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_59375B3 & 1) == 0 )
  {
    sub_21FFC50(&MovieFileMerge__DownloadMovie_d__39_TypeInfo);
    byte_59375B3 = 1;
  }
  v3 = sub_21FFEBC(MovieFileMerge__DownloadMovie_d__39_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v3 + 32), (int32_t)this, v4, v5, v6, v7, v8, v9);
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
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x2
  System_String_o *FileName; // x20
  Il2CppObject *LocalDataPath; // x0
  System_String_o *v10; // x19
  __int64 v11; // x1
  __int64 v12; // x2
  Il2CppObject *v13; // x21
  FileMergeAndSplit_c *v14; // x8
  System_String_o *v15; // x0

  if ( (byte_59375A9 & 1) == 0 )
  {
    sub_21FFC50(&FileMergeAndSplit_TypeInfo);
    sub_21FFC50(&System_IO_Path_TypeInfo);
    sub_21FFC50(&StringLiteral_1123/*"/"*/);
    sub_21FFC50(&StringLiteral_26502/*"{0}/{1}/{2}"*/);
    sub_21FFC50(&StringLiteral_26501/*"{0}/{1}/{1}.usm"*/);
    byte_59375A9 = 1;
  }
  IsNullOrEmpty = System_String__IsNullOrEmpty(assetFolderURL, 0);
  if ( IsNullOrEmpty )
    return 0;
  if ( !assetFolderURL )
    sub_21FFECC(IsNullOrEmpty, v5);
  if ( System_String__EndsWith(assetFolderURL, (System_String_o *)StringLiteral_1123/*"/"*/, 0) )
    assetFolderURL = System_String__TrimEnd_75500280(assetFolderURL, 0x2Fu, 0);
  if ( !*(&System_IO_Path_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_IO_Path_TypeInfo, v6, v7);
  FileName = System_IO_Path__GetFileName(assetFolderURL, 0);
  LocalDataPath = (Il2CppObject *)MovieFileMerge__GetLocalDataPath((const MethodInfo *)FileName);
  v10 = System_String__Format_75484576(
          (System_String_o *)StringLiteral_26501/*"{0}/{1}/{1}.usm"*/,
          LocalDataPath,
          (Il2CppObject *)FileName,
          0);
  v13 = (Il2CppObject *)MovieFileMerge__GetLocalDataPath((const MethodInfo *)v10);
  v14 = FileMergeAndSplit_TypeInfo;
  if ( !*(&FileMergeAndSplit_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(FileMergeAndSplit_TypeInfo, v11, v12);
    v14 = FileMergeAndSplit_TypeInfo;
  }
  v15 = System_String__Format_75484644(
          (System_String_o *)StringLiteral_26502/*"{0}/{1}/{2}"*/,
          v13,
          (Il2CppObject *)FileName,
          (Il2CppObject *)v14->static_fields->PathCRCFileName,
          0);
  return !System_IO_File__Exists(v15, 0) && System_IO_File__Exists(v10, 0);
}


float MovieFileMerge__GetDownloadProgress(MovieFileMerge_o *this, const MethodInfo *method)
{
  float v3; // s8
  System_Collections_Generic_Dictionary_TKey__TValue__o *RequireDownLoadFilePathCRCDictionary; // x0
  __int64 v5; // x1
  System_Collections_Generic_Dictionary_TKey__TValue__o *v6; // x0
  int32_t downloadProgress; // s8

  if ( (byte_59375AD & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__uint__get_Count__);
    byte_59375AD = 1;
  }
  v3 = 0.0;
  RequireDownLoadFilePathCRCDictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.RequireDownLoadFilePathCRCDictionary;
  if ( RequireDownLoadFilePathCRCDictionary
    && System_Collections_Generic_Dictionary_object__uint___get_Count(
         RequireDownLoadFilePathCRCDictionary,
         (const MethodInfo_3FF1564 *)Method_System_Collections_Generic_Dictionary_string__uint__get_Count__) )
  {
    v6 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.RequireDownLoadFilePathCRCDictionary;
    if ( !v6 )
      sub_21FFECC(0, v5);
    downloadProgress = this->fields.downloadProgress;
    return (float)downloadProgress
         / (float)System_Collections_Generic_Dictionary_object__uint___get_Count(
                    v6,
                    (const MethodInfo_3FF1564 *)Method_System_Collections_Generic_Dictionary_string__uint__get_Count__);
  }
  return v3;
}


double MovieFileMerge__GetDownloadSize(MovieFileMerge_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_TKey__TValue__o *RequireDownLoadFilePathCRCDictionary; // x0

  if ( (byte_59375AC & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__uint__get_Count__);
    byte_59375AC = 1;
  }
  RequireDownLoadFilePathCRCDictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.RequireDownLoadFilePathCRCDictionary;
  if ( !RequireDownLoadFilePathCRCDictionary )
    sub_21FFECC(0, method);
  return (double)(System_Collections_Generic_Dictionary_object__uint___get_Count(
                    RequireDownLoadFilePathCRCDictionary,
                    (const MethodInfo_3FF1564 *)Method_System_Collections_Generic_Dictionary_string__uint__get_Count__) << 20);
}


System_String_o *MovieFileMerge__GetLocalDataPath(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  System_String_o *persistentDataPath; // x0

  if ( (byte_59375AA & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Application_TypeInfo);
    sub_21FFC50(&StringLiteral_1176/*"/extend-data/movie"*/);
    byte_59375AA = 1;
  }
  if ( !*(&UnityEngine_Application_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo, v1, v2);
  persistentDataPath = UnityEngine_Application__get_persistentDataPath(0);
  return System_String__Concat_75438412(persistentDataPath, (System_String_o *)StringLiteral_1176/*"/extend-data/movie"*/, 0);
}


System_String_o *MovieFileMerge__GetLocalFolderPath(MovieFileMerge_o *this, const MethodInfo *method)
{
  MovieFileMerge_o *v2; // x19
  Il2CppObject *LocalDataPath; // x0

  v2 = this;
  if ( (byte_59375B6 & 1) == 0 )
  {
    this = (MovieFileMerge_o *)sub_21FFC50(&StringLiteral_26497/*"{0}/{1}"*/);
    byte_59375B6 = 1;
  }
  LocalDataPath = (Il2CppObject *)MovieFileMerge__GetLocalDataPath((const MethodInfo *)this);
  return System_String__Format_75484576(
           (System_String_o *)StringLiteral_26497/*"{0}/{1}"*/,
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
  __int64 v12; // x1
  __int64 v13; // x2
  System_Byte_array *AllBytes; // x24
  uint32_t v15; // w1
  System_IO_DirectoryInfo_o *Parent; // x0
  __int64 v17; // x1
  System_IO_DirectoryInfo_o *v18; // x21
  System_String_o *v19; // x0
  System_String_o *v20; // x0
  struct System_Collections_Generic_Dictionary_TKey__TValue__o *dictionary; // x20
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v23; // [xsp+0h] [xbp-C0h] BYREF
  int value; // [xsp+2Ch] [xbp-94h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v25; // [xsp+30h] [xbp-90h] BYREF

  if ( (byte_59375B7 & 1) == 0 )
  {
    sub_21FFC50(&Crc32_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__uint__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__uint__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__uint___ctor__);
    sub_21FFC50(&System_Collections_Generic_Dictionary_string__uint__TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_Enumerator_string__uint__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_Enumerator_string__uint__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_Enumerator_string__uint__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_KeyValuePair_string__uint__get_Key__);
    sub_21FFC50(&Method_System_Collections_Generic_KeyValuePair_string__uint__get_Value__);
    sub_21FFC50(&StringLiteral_26497/*"{0}/{1}"*/);
    byte_59375B7 = 1;
  }
  value = 0;
  memset(&v25, 0, sizeof(v25));
  v3 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_21FFEBC(System_Collections_Generic_Dictionary_string__uint__TypeInfo);
  System_Collections_Generic_Dictionary_object__uint____ctor(
    v3,
    (const MethodInfo_3FF0F18 *)Method_System_Collections_Generic_Dictionary_string__uint___ctor__);
  AllDownLoadFilePathCRCDictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.AllDownLoadFilePathCRCDictionary;
  if ( !AllDownLoadFilePathCRCDictionary )
    sub_21FFECC(0, v4);
  System_Collections_Generic_Dictionary_object__uint___GetEnumerator(
    &v23,
    AllDownLoadFilePathCRCDictionary,
    (const MethodInfo_3FF1CA8 *)Method_System_Collections_Generic_Dictionary_string__uint__GetEnumerator__);
  v25 = v23;
  v23.fields._dictionary = 0;
  *(_QWORD *)&v23.fields._version = &v25;
  while ( System_Collections_Generic_Dictionary_Enumerator_object__uint___MoveNext(
            &v25,
            (const MethodInfo_41392E0 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__uint__MoveNext__) )
  {
    current = v25.fields._current;
    LocalFolderPath = (Il2CppObject *)MovieFileMerge__GetLocalFolderPath(this, v6);
    v9 = System_String__Format_75484576((System_String_o *)StringLiteral_26497/*"{0}/{1}"*/, LocalFolderPath, current.fields.key, 0);
    v10 = System_IO_File__Exists(v9, 0);
    if ( !v10 )
      goto LABEL_11;
    AllBytes = System_IO_File__ReadAllBytes(v9, 0);
    value = (int)current.fields.value;
    if ( !*(&Crc32_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(Crc32_TypeInfo, v12, v13);
    v15 = Crc32__Compute(AllBytes, 0);
    if ( !System_UInt32__Equals_77052880((uint32_t)&value, v15, 0) )
    {
      System_IO_File__Delete(v9, 0);
LABEL_11:
      if ( !v3 )
        sub_21FFECC(v10, v11);
      System_Collections_Generic_Dictionary_object__uint___Add(
        v3,
        current.fields.key,
        (uint32_t)current.fields.value,
        (const MethodInfo_3FF18AC *)Method_System_Collections_Generic_Dictionary_string__uint__Add__);
      Parent = System_IO_Directory__GetParent(v9, 0);
      v18 = Parent;
      if ( !Parent )
        sub_21FFECC(0, v17);
      v19 = (System_String_o *)((__int64 (__fastcall *)(System_IO_DirectoryInfo_o *, const MethodInfo *))Parent->klass->vtable._8_get_FullName.methodPtr)(
                                 Parent,
                                 Parent->klass->vtable._8_get_FullName.method);
      if ( !System_IO_Directory__Exists(v19, 0) )
      {
        v20 = (System_String_o *)((__int64 (__fastcall *)(System_IO_DirectoryInfo_o *, const MethodInfo *))v18->klass->vtable._8_get_FullName.methodPtr)(
                                   v18,
                                   v18->klass->vtable._8_get_FullName.method);
        System_IO_Directory__CreateDirectory(v20, 0);
      }
    }
  }
  dictionary = v23.fields._dictionary;
  System_Collections_Generic_Dictionary_Enumerator_object__uint___Dispose(
    &v25,
    (const MethodInfo_4139404 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__uint__Dispose__);
  if ( dictionary )
    sub_21FFEC4(dictionary);
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
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  Il2CppObject *v19; // x1
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  Il2CppClass **v23; // x0
  __int64 v25; // [xsp+8h] [xbp-68h]
  System_Collections_Generic_List_Enumerator_object__o *v26; // [xsp+10h] [xbp-60h]
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_59375BA & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__uint__get_Keys__);
    sub_21FFC50(&Method_System_Linq_Enumerable_ToList_string___);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_string__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_string__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_string___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_string__TypeInfo);
    sub_21FFC50(&StringLiteral_26497/*"{0}/{1}"*/);
    byte_59375BA = 1;
  }
  memset(&v27, 0, sizeof(v27));
  v3 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_string___ctor__);
  LocalFolderPath = MovieFileMerge__GetLocalFolderPath(this, v4);
  if ( System_IO_Directory__Exists(LocalFolderPath, 0) )
  {
    AllDownLoadFilePathCRCDictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.AllDownLoadFilePathCRCDictionary;
    if ( !AllDownLoadFilePathCRCDictionary
      || (Keys = System_Collections_Generic_Dictionary_object__uint___get_Keys(
                   AllDownLoadFilePathCRCDictionary,
                   (const MethodInfo_3FF1574 *)Method_System_Collections_Generic_Dictionary_string__uint__get_Keys__),
          (AllDownLoadFilePathCRCDictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)System_Linq_Enumerable__ToList_object_((System_Collections_Generic_IEnumerable_TSource__o *)Keys, (const MethodInfo_386D928 *)Method_System_Linq_Enumerable_ToList_string___)) == 0) )
    {
      sub_21FFECC(AllDownLoadFilePathCRCDictionary, v6);
    }
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v27,
      (System_Collections_Generic_List_object__o *)AllDownLoadFilePathCRCDictionary,
      (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
    v25 = 0;
    v26 = &v27;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v27,
              (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
    {
      current = v27.fields._current;
      v11 = (Il2CppObject *)MovieFileMerge__GetLocalFolderPath(this, v9);
      v12 = (Il2CppObject *)System_String__Format_75484576((System_String_o *)StringLiteral_26497/*"{0}/{1}"*/, v11, current, 0);
      v19 = v12;
      if ( !v3
        || (items = v3->fields._items,
            v21 = Method_System_Collections_Generic_List_string__Add__,
            ++v3->fields._version,
            !items) )
      {
        sub_21FFECC(v12, v12);
      }
      size = v3->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          v12,
          *(const MethodInfo_444FB2C **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
      }
      else
      {
        v23 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v23[4] = (Il2CppClass *)v19;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v23 + 4), (int32_t)v19, v13, v14, v15, v16, v17, v18);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v27,
      (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
  }
  return (System_Collections_Generic_List_string__o *)v3;
}


double MovieFileMerge__GetTotalRequireSize(MovieFileMerge_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__uint__o *AllDownLoadFilePathCRCDictionary; // x0
  System_Collections_Generic_Dictionary_TKey__TValue__o *RequireDownLoadFilePathCRCDictionary; // x8

  if ( (byte_59375AB & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__uint__get_Count__);
    byte_59375AB = 1;
  }
  AllDownLoadFilePathCRCDictionary = this->fields.AllDownLoadFilePathCRCDictionary;
  if ( !AllDownLoadFilePathCRCDictionary
    || (AllDownLoadFilePathCRCDictionary = (struct System_Collections_Generic_Dictionary_string__uint__o *)System_Collections_Generic_Dictionary_object__uint___get_Count((System_Collections_Generic_Dictionary_TKey__TValue__o *)AllDownLoadFilePathCRCDictionary, (const MethodInfo_3FF1564 *)Method_System_Collections_Generic_Dictionary_string__uint__get_Count__),
        (RequireDownLoadFilePathCRCDictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.RequireDownLoadFilePathCRCDictionary) == 0) )
  {
    sub_21FFECC(AllDownLoadFilePathCRCDictionary, method);
  }
  return (double)((System_Collections_Generic_Dictionary_object__uint___get_Count(
                     RequireDownLoadFilePathCRCDictionary,
                     (const MethodInfo_3FF1564 *)Method_System_Collections_Generic_Dictionary_string__uint__get_Count__)
                 + (int)AllDownLoadFilePathCRCDictionary) << 20);
}


void MovieFileMerge__Initialize(
        MovieFileMerge_o *this,
        System_String_o *assetFolderURL,
        bool enableSkipButton,
        const MethodInfo *method)
{
  bool v7; // w23
  System_Collections_Generic_Dictionary_TKey__TValue__o *AllDownLoadFilePathCRCDictionary; // x0
  System_Collections_Generic_Dictionary_TKey__TValue__o *v9; // x21
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_Collections_Generic_Dictionary_TKey__TValue__o *RequireDownLoadFilePathCRCDictionary; // x0
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  System_Collections_Generic_Dictionary_TKey__TValue__o *v23; // x22
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7
  __int64 v36; // x0
  __int64 v37; // x1
  System_String_o *v38; // x2
  System_String_o *v39; // x3
  int32_t v40; // w4
  int32_t v41; // w5
  bool v42; // w6
  bool v43; // w7
  __int64 v44; // x1
  __int64 v45; // x2
  struct System_String_o *FileName; // x0
  System_String_o *v47; // x2
  System_String_o *v48; // x3
  int32_t v49; // w4
  int32_t v50; // w5
  bool v51; // w6
  bool v52; // w7
  const MethodInfo *v53; // x1
  Il2CppObject *LocalFolderPath; // x0
  struct System_String_o *v55; // x0
  System_String_o *v56; // x2
  System_String_o *v57; // x3
  int32_t v58; // w4
  int32_t v59; // w5
  bool v60; // w6
  bool v61; // w7
  const MethodInfo *v62; // x1
  Il2CppObject *v63; // x0
  struct System_String_o *v64; // x0
  System_String_o *v65; // x2
  System_String_o *v66; // x3
  int32_t v67; // w4
  int32_t v68; // w5
  bool v69; // w6
  bool v70; // w7
  const MethodInfo *v71; // x1
  System_String_o *v72; // x0
  __int64 v73; // x1
  __int64 v74; // x2
  FileMergeAndSplit_c *v75; // x8
  Il2CppObject *v76; // x20
  struct System_String_o *v77; // x0
  System_String_o *v78; // x2
  System_String_o *v79; // x3
  int32_t v80; // w4
  int32_t v81; // w5
  bool v82; // w6
  bool v83; // w7

  if ( (byte_59375B1 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__uint__Clear__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__uint___ctor__);
    sub_21FFC50(&System_Collections_Generic_Dictionary_string__uint__TypeInfo);
    sub_21FFC50(&FileMergeAndSplit_TypeInfo);
    sub_21FFC50(&System_IO_Path_TypeInfo);
    sub_21FFC50(&StringLiteral_26497/*"{0}/{1}"*/);
    sub_21FFC50(&StringLiteral_26493/*"{0}/SplitFile"*/);
    sub_21FFC50(&StringLiteral_1123/*"/"*/);
    sub_21FFC50(&StringLiteral_26499/*"{0}/{1}.usm"*/);
    byte_59375B1 = 1;
  }
  v7 = enableSkipButton;
  AllDownLoadFilePathCRCDictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.AllDownLoadFilePathCRCDictionary;
  if ( AllDownLoadFilePathCRCDictionary )
  {
    System_Collections_Generic_Dictionary_object__uint___Clear(
      AllDownLoadFilePathCRCDictionary,
      (const MethodInfo_3FF1A34 *)Method_System_Collections_Generic_Dictionary_string__uint__Clear__);
  }
  else
  {
    v9 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_21FFEBC(System_Collections_Generic_Dictionary_string__uint__TypeInfo);
    System_Collections_Generic_Dictionary_object__uint____ctor(
      v9,
      (const MethodInfo_3FF0F18 *)Method_System_Collections_Generic_Dictionary_string__uint___ctor__);
    this->fields.AllDownLoadFilePathCRCDictionary = (struct System_Collections_Generic_Dictionary_string__uint__o *)v9;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.AllDownLoadFilePathCRCDictionary,
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
      (const MethodInfo_3FF1A34 *)Method_System_Collections_Generic_Dictionary_string__uint__Clear__);
  }
  else
  {
    v23 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_21FFEBC(System_Collections_Generic_Dictionary_string__uint__TypeInfo);
    System_Collections_Generic_Dictionary_object__uint____ctor(
      v23,
      (const MethodInfo_3FF0F18 *)Method_System_Collections_Generic_Dictionary_string__uint___ctor__);
    this->fields.RequireDownLoadFilePathCRCDictionary = (struct System_Collections_Generic_Dictionary_string__uint__o *)v23;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.RequireDownLoadFilePathCRCDictionary,
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
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.mergeClass, 0, v17, v18, v19, v20, v21, v22);
  this->fields.crcCheckerClass = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.crcCheckerClass, 0, v30, v31, v32, v33, v34, v35);
  this->fields.isEnableSkipButton = v7;
  if ( !assetFolderURL )
    sub_21FFECC(v36, v37);
  if ( System_String__EndsWith(assetFolderURL, (System_String_o *)StringLiteral_1123/*"/"*/, 0) )
    assetFolderURL = System_String__TrimEnd_75500280(assetFolderURL, 0x2Fu, 0);
  this->fields.assetFolderURL = assetFolderURL;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.assetFolderURL,
    (int32_t)assetFolderURL,
    v38,
    v39,
    v40,
    v41,
    v42,
    v43);
  if ( !*(&System_IO_Path_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_IO_Path_TypeInfo, v44, v45);
  FileName = System_IO_Path__GetFileName(assetFolderURL, 0);
  this->fields.assetFolder = FileName;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.assetFolder,
    (int32_t)FileName,
    v47,
    v48,
    v49,
    v50,
    v51,
    v52);
  LocalFolderPath = (Il2CppObject *)MovieFileMerge__GetLocalFolderPath(this, v53);
  v55 = System_String__Format((System_String_o *)StringLiteral_26493/*"{0}/SplitFile"*/, LocalFolderPath, 0);
  this->fields.outputSplitFileFolder = v55;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.outputSplitFileFolder,
    (int32_t)v55,
    v56,
    v57,
    v58,
    v59,
    v60,
    v61);
  v63 = (Il2CppObject *)MovieFileMerge__GetLocalFolderPath(this, v62);
  v64 = System_String__Format_75484576(
          (System_String_o *)StringLiteral_26499/*"{0}/{1}.usm"*/,
          v63,
          (Il2CppObject *)this->fields.assetFolder,
          0);
  this->fields.outputMergeFile = v64;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.outputMergeFile,
    (int32_t)v64,
    v65,
    v66,
    v67,
    v68,
    v69,
    v70);
  v72 = MovieFileMerge__GetLocalFolderPath(this, v71);
  v75 = FileMergeAndSplit_TypeInfo;
  v76 = (Il2CppObject *)v72;
  if ( !*(&FileMergeAndSplit_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(FileMergeAndSplit_TypeInfo, v73, v74);
    v75 = FileMergeAndSplit_TypeInfo;
  }
  v77 = System_String__Format_75484576(
          (System_String_o *)StringLiteral_26497/*"{0}/{1}"*/,
          v76,
          (Il2CppObject *)v75->static_fields->PathCRCFileName,
          0);
  this->fields.outputMergeFileCRC = v77;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.outputMergeFileCRC,
    (int32_t)v77,
    v78,
    v79,
    v80,
    v81,
    v82,
    v83);
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
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_59375B4 & 1) == 0 )
  {
    sub_21FFC50(&MovieFileMerge__Merge_d__40_TypeInfo);
    byte_59375B4 = 1;
  }
  v3 = sub_21FFEBC(MovieFileMerge__Merge_d__40_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v3 + 32), (int32_t)this, v4, v5, v6, v7, v8, v9);
  return (System_Collections_IEnumerator_o *)v3;
}


System_Collections_IEnumerator_o *MovieFileMerge__PlayCRIMovie(
        MovieFileMerge_o *this,
        System_String_o *filePath,
        const MethodInfo *method)
{
  __int64 v5; // x21
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7

  if ( (byte_59375B0 & 1) == 0 )
  {
    sub_21FFC50(&MovieFileMerge__PlayCRIMovie_d__36_TypeInfo);
    byte_59375B0 = 1;
  }
  v5 = sub_21FFEBC(MovieFileMerge__PlayCRIMovie_d__36_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 32), (int32_t)this, v6, v7, v8, v9, v10, v11);
  *(_QWORD *)(v5 + 40) = filePath;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 40), (int32_t)filePath, v12, v13, v14, v15, v16, v17);
  return (System_Collections_IEnumerator_o *)v5;
}


System_Collections_IEnumerator_o *MovieFileMerge__PlayMP4(MovieFileMerge_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_59375AE & 1) == 0 )
  {
    sub_21FFC50(&MovieFileMerge__PlayMP4_d__34_TypeInfo);
    byte_59375AE = 1;
  }
  v3 = sub_21FFEBC(MovieFileMerge__PlayMP4_d__34_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v3 + 32), (int32_t)this, v4, v5, v6, v7, v8, v9);
  return (System_Collections_IEnumerator_o *)v3;
}


System_Collections_IEnumerator_o *MovieFileMerge__PlayMP4_47420544(
        MovieFileMerge_o *this,
        System_String_o *filePath,
        const MethodInfo *method)
{
  __int64 v5; // x21
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7

  if ( (byte_59375AF & 1) == 0 )
  {
    sub_21FFC50(&MovieFileMerge__PlayMP4_d__35_TypeInfo);
    byte_59375AF = 1;
  }
  v5 = sub_21FFEBC(MovieFileMerge__PlayMP4_d__35_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 40) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 40), (int32_t)this, v6, v7, v8, v9, v10, v11);
  *(_QWORD *)(v5 + 32) = filePath;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 32), (int32_t)filePath, v12, v13, v14, v15, v16, v17);
  return (System_Collections_IEnumerator_o *)v5;
}


void MovieFileMerge__Reboot(MovieFileMerge_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Networking_UnityWebRequest_o *v4; // x0
  MissionNaviTransitionBoardItem_o *p_loader; // x19
  struct UnityEngine_Networking_UnityWebRequest_o *loader; // t1
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  ManagementManager_c *v13; // x0
  Il2CppObject *Instance; // x0
  __int64 v15; // x1

  if ( (byte_59375BC & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Application_TypeInfo);
    sub_21FFC50(&ManagementManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
    byte_59375BC = 1;
  }
  loader = this->fields.loader;
  p_loader = (MissionNaviTransitionBoardItem_o *)&this->fields.loader;
  v4 = loader;
  if ( loader )
  {
    UnityEngine_Networking_UnityWebRequest__Dispose(v4, 0);
    p_loader->klass = 0;
    sub_21FFBF4(p_loader, 0, v7, v8, v9, v10, v11, v12);
  }
  if ( !*(&ManagementManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo, method, v2);
  if ( !byte_5937656 )
  {
    sub_21FFC50(&ManagementManager_TypeInfo);
    byte_5937656 = 1;
  }
  v13 = ManagementManager_TypeInfo;
  if ( !*(&ManagementManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo, method, v2);
    v13 = ManagementManager_TypeInfo;
  }
  if ( v13->static_fields->isDuringStartup )
  {
    if ( !*(&UnityEngine_Application_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo, method, v2);
    UnityEngine_Application__Quit_82963804(0);
  }
  else
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
    if ( !Instance )
      sub_21FFECC(0, v15);
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
  __int64 v5; // x1
  __int64 v6; // x2
  Il2CppObject *Instance; // x20
  System_String_o *v8; // x21
  ErrorDialog_ClickDelegate_o *v9; // x22
  const MethodInfo *v10; // x2
  System_String_o *v11; // x1

  v4 = (Il2CppObject *)this;
  if ( (byte_59375BE & 1) == 0 )
  {
    sub_21FFC50(&ErrorDialog_ClickDelegate_TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&Method_MovieFileMerge_EndMergeRetryDialog__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&StringLiteral_5471/*"Disk full"*/);
    sub_21FFC50(&StringLiteral_9623/*"NETWORK_ERROR_DISK_FULL"*/);
    this = (MovieFileMerge_o *)sub_21FFC50(&StringLiteral_1/*""*/);
    byte_59375BE = 1;
  }
  if ( !e )
    goto LABEL_12;
  this = (MovieFileMerge_o *)((__int64 (__fastcall *)(System_Exception_o *, const MethodInfo *, const MethodInfo *))e->klass->vtable._5_get_Message.methodPtr)(
                               e,
                               e->klass->vtable._5_get_Message.method,
                               method);
  if ( !this )
    goto LABEL_12;
  if ( !System_String__StartsWith((System_String_o *)this, (System_String_o *)StringLiteral_5471/*"Disk full"*/, 0) )
  {
    v11 = (System_String_o *)((__int64 (__fastcall *)(System_Exception_o *, const MethodInfo *))e->klass->vtable._5_get_Message.methodPtr)(
                               e,
                               e->klass->vtable._5_get_Message.method);
    goto LABEL_11;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v5, v6);
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_9623/*"NETWORK_ERROR_DISK_FULL"*/, 0);
  v9 = (ErrorDialog_ClickDelegate_o *)sub_21FFEBC(ErrorDialog_ClickDelegate_TypeInfo);
  ErrorDialog_ClickDelegate___ctor(v9, v4, Method_MovieFileMerge_EndMergeRetryDialog__, 0);
  if ( !Instance )
LABEL_12:
    sub_21FFECC(this, e);
  CommonUI__OpenErrorDialog((CommonUI_o *)Instance, (System_String_o *)StringLiteral_1/*""*/, v8, v9, 1, 0);
  v11 = (System_String_o *)StringLiteral_5471/*"Disk full"*/;
LABEL_11:
  MovieFileMerge__AssetLoadLogError((MovieFileMerge_o *)v4, v11, v10);
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
  MissionNaviTransitionBoardItem_o *p__2__current; // x19
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  bool result; // w0
  System_Collections_Generic_Dictionary_string__uint__o *Dic; // x0
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  System_String_o *outputMergeFile; // x21
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x0
  System_Collections_Generic_List_uint__o *v25; // x22
  FileMergeAndSplit_CRCChecker_o *v26; // x23
  const MethodInfo *v27; // x3
  MissionNaviTransitionBoardItem_o *p_crcCheckerClass; // x20
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7
  System_Collections_IEnumerator_o *v35; // x0
  MissionNaviTransitionBoardItem_o *v36; // x19
  System_String_o *v37; // x2
  System_String_o *v38; // x3
  int32_t v39; // w4
  int32_t v40; // w5
  bool v41; // w6
  bool v42; // w7
  System_Collections_Generic_Dictionary_string__uint__o *NeedDownloadDictionary; // x0
  System_String_o *v44; // x2
  System_String_o *v45; // x3
  int32_t v46; // w4
  int32_t v47; // w5
  bool v48; // w6
  bool v49; // w7
  struct FileMergeAndSplit_CRCChecker_o *crcCheckerClass; // x8

  v4 = this;
  if ( (byte_59375BF & 1) == 0 )
  {
    sub_21FFC50(&FileMergeAndSplit_CRCChecker_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__uint__get_Values__);
    sub_21FFC50(&Method_System_Linq_Enumerable_ToList_uint___);
    this = (MovieFileMerge__CRCDownloadAndCheck_d__38_o *)sub_21FFC50(&FileMergeAndSplit_TypeInfo);
    byte_59375BF = 1;
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
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&_4__this->fields.RequireDownLoadFilePathCRCDictionary,
      (int32_t)NeedDownloadDictionary,
      v44,
      v45,
      v46,
      v47,
      v48,
      v49);
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
      if ( !*(&FileMergeAndSplit_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(FileMergeAndSplit_TypeInfo, method, v2);
      if ( _4__this )
      {
        v7 = MovieFileMerge__Download(_4__this, FileMergeAndSplit_TypeInfo->static_fields->PathCRCFileName, 0, v3);
        v4->fields.__2__current = (Il2CppObject *)v7;
        p__2__current = (MissionNaviTransitionBoardItem_o *)&v4->fields.__2__current;
        sub_21FFBF4(p__2__current, (int32_t)v7, v9, v10, v11, v12, v13, v14);
        result = 1;
        p__2__current[-1].fields._BoardType_k__BackingField = 1;
        return result;
      }
LABEL_22:
      sub_21FFECC(this, method);
    }
    return 0;
  }
  v4->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_22;
  Dic = MovieFileMerge__CreateDic((MovieFileMerge_o *)this, _4__this->fields.outputMergeFileCRC, v2);
  _4__this->fields.AllDownLoadFilePathCRCDictionary = Dic;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&_4__this->fields.AllDownLoadFilePathCRCDictionary,
    (int32_t)Dic,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  this = (MovieFileMerge__CRCDownloadAndCheck_d__38_o *)_4__this->fields.AllDownLoadFilePathCRCDictionary;
  if ( !this )
    goto LABEL_22;
  outputMergeFile = _4__this->fields.outputMergeFile;
  Values = System_Collections_Generic_Dictionary_object__uint___get_Values(
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)this,
             (const MethodInfo_3FF16D0 *)Method_System_Collections_Generic_Dictionary_string__uint__get_Values__);
  v25 = (System_Collections_Generic_List_uint__o *)System_Linq_Enumerable__ToList_uint_(
                                                     (System_Collections_Generic_IEnumerable_TSource__o *)Values,
                                                     (const MethodInfo_386DAA8 *)Method_System_Linq_Enumerable_ToList_uint___);
  v26 = (FileMergeAndSplit_CRCChecker_o *)sub_21FFEBC(FileMergeAndSplit_CRCChecker_TypeInfo);
  FileMergeAndSplit_CRCChecker___ctor(v26, outputMergeFile, v25, v27);
  _4__this->fields.crcCheckerClass = v26;
  p_crcCheckerClass = (MissionNaviTransitionBoardItem_o *)&_4__this->fields.crcCheckerClass;
  sub_21FFBF4(p_crcCheckerClass, (int32_t)v26, v29, v30, v31, v32, v33, v34);
  this = (MovieFileMerge__CRCDownloadAndCheck_d__38_o *)p_crcCheckerClass->klass;
  if ( !p_crcCheckerClass->klass )
    goto LABEL_22;
  v35 = FileMergeAndSplit_CRCChecker__Run((FileMergeAndSplit_CRCChecker_o *)this, method);
  v4->fields.__2__current = (Il2CppObject *)v35;
  v36 = (MissionNaviTransitionBoardItem_o *)&v4->fields.__2__current;
  sub_21FFBF4(v36, (int32_t)v35, v37, v38, v39, v40, v41, v42);
  result = 1;
  v36[-1].fields._BoardType_k__BackingField = 2;
  return result;
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

  v2 = sub_21FFC64(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_21FFEBC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_21FFC64(&Method_MovieFileMerge__CRCDownloadAndCheck_d__38_System_Collections_IEnumerator_Reset__);
  sub_21FFD90(v3, v4);
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
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  MovieFileMerge__DownloadMovie_d__39_o *v8; // x20
  int32_t _1__state; // w8
  MovieFileMerge_o *_4__this; // x19
  System_Collections_Generic_Dictionary_TKey__TValue__o *RequireDownLoadFilePathCRCDictionary; // x0
  struct System_Collections_Generic_KeyValuePair_TKey__TValue__o current; // q1
  __int64 v13; // x8
  MovieFileMerge__DownloadMovie_d__39_o *v14; // x9
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  const MethodInfo *v21; // x1
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  bool v28; // w8
  MovieFileMerge__DownloadMovie_d__39_o *v29; // x0
  MovieFileMerge__DownloadMovie_d__39_o *v30; // x0
  bool result; // w0
  __int64 v32; // x0
  __int64 v33; // x1
  MovieFileMerge__DownloadMovie_d__39_o *v34; // x8
  MovieFileMerge__DownloadMovie_d__39_o *v35; // x0
  __int64 v36; // x19
  Il2CppObject *v37; // x1
  MovieFileMerge__DownloadMovie_d__39_o *v38; // x0
  System_String_o *v39; // x2
  System_String_o *v40; // x3
  int32_t v41; // w4
  int32_t v42; // w5
  bool v43; // w6
  bool v44; // w7
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v45[2]; // [xsp+8h] [xbp-88h] BYREF
  __int64 v46; // [xsp+60h] [xbp-30h]
  MovieFileMerge__DownloadMovie_d__39_o **v47; // [xsp+68h] [xbp-28h] BYREF
  MovieFileMerge__DownloadMovie_d__39_o *v48; // [xsp+78h] [xbp-18h] BYREF

  v48 = this;
  v8 = this;
  if ( (byte_59375C1 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__uint__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_Enumerator_string__uint__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_Enumerator_string__uint__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_KeyValuePair_string__uint__get_Key__);
    this = (MovieFileMerge__DownloadMovie_d__39_o *)sub_21FFC50(&Method_System_Collections_Generic_KeyValuePair_string__uint__get_Value__);
    byte_59375C1 = 1;
  }
  _1__state = v8->fields.__1__state;
  _4__this = v8->fields.__4__this;
  v46 = 0;
  v47 = &v48;
  if ( _1__state == 2 )
  {
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
    {
      result = 0;
      goto LABEL_22;
    }
    v8->fields.__1__state = -1;
    if ( !_4__this )
      sub_21FFECC(this, method);
    RequireDownLoadFilePathCRCDictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)_4__this->fields.RequireDownLoadFilePathCRCDictionary;
    _4__this->fields.downloadProgress = 0;
    _4__this->fields.isDownloading = 1;
    if ( !RequireDownLoadFilePathCRCDictionary )
      sub_21FFECC(0, method);
    System_Collections_Generic_Dictionary_object__uint___GetEnumerator(
      v45,
      RequireDownLoadFilePathCRCDictionary,
      (const MethodInfo_3FF1CA8 *)Method_System_Collections_Generic_Dictionary_string__uint__GetEnumerator__);
    current = v45[0].fields._current;
    v13 = *(_QWORD *)&v45[0].fields._getEnumeratorRetType;
    v14 = v48;
    v45[1] = v45[0];
    *(_OWORD *)&v48->fields.__7__wrap1.fields._dictionary = *(_OWORD *)&v45[0].fields._dictionary;
    v14->fields.__7__wrap1.fields._current = current;
    *(_QWORD *)&v14->fields.__7__wrap1.fields._getEnumeratorRetType = v13;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v14->fields.__7__wrap1, 0, v15, v16, v17, v18, v19, v20);
    v8 = v48;
  }
  v8->fields.__1__state = -3;
  v28 = System_Collections_Generic_Dictionary_Enumerator_object__uint___MoveNext(
          (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v8->fields.__7__wrap1,
          (const MethodInfo_41392E0 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__uint__MoveNext__);
  v29 = v48;
  if ( !v28 )
  {
    MovieFileMerge__DownloadMovie_d__39____m__Finally1(v48, v21);
    v34 = v48;
    *(_QWORD *)&v48->fields.__7__wrap1.fields._getEnumeratorRetType = 0;
    *(_OWORD *)&v34->fields.__7__wrap1.fields._dictionary = 0u;
    v34->fields.__7__wrap1.fields._current = 0u;
    if ( !_4__this )
      sub_21FFECC(v32, v33);
    result = 0;
    _4__this->fields.isDownloading = 0;
    goto LABEL_22;
  }
  v48->fields._dic_5__3 = (struct System_Collections_Generic_KeyValuePair_string__uint__o)v48->fields.__7__wrap1.fields._current;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v29->fields._dic_5__3, 0, v22, v23, v24, v25, v26, v27);
LABEL_13:
  if ( !_4__this )
    sub_21FFECC(this, method);
  if ( _4__this->fields.isDownloadPause )
  {
    if ( !_4__this->fields.isDownloadCancel )
    {
      v30 = v48;
      v48->fields.__2__current = 0;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v30->fields.__2__current, 0, v2, v3, v4, v5, v6, v7);
      result = 1;
      v48->fields.__1__state = 1;
      goto LABEL_22;
    }
    goto LABEL_21;
  }
  if ( _4__this->fields.isDownloadCancel )
  {
LABEL_21:
    v35 = v48;
    _4__this->fields.isDownloading = 0;
    MovieFileMerge__DownloadMovie_d__39____m__Finally1(v35, method);
    result = 0;
    goto LABEL_22;
  }
  v37 = (Il2CppObject *)MovieFileMerge__Download(
                          _4__this,
                          v48->fields._dic_5__3.fields.key,
                          v48->fields._dic_5__3.fields.value,
                          (const MethodInfo *)v3);
  v38 = v48;
  v48->fields.__2__current = v37;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v38->fields.__2__current, (int32_t)v37, v39, v40, v41, v42, v43, v44);
  result = 1;
  v48->fields.__1__state = 2;
LABEL_22:
  v36 = v46;
  if ( v46 )
  {
    sub_1FF99C0(&v47);
    sub_21FFEC4(v36);
  }
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

  v2 = sub_21FFC64(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_21FFEBC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_21FFC64(&Method_MovieFileMerge__DownloadMovie_d__39_System_Collections_IEnumerator_Reset__);
  sub_21FFD90(v3, v4);
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
  if ( (unsigned int)(this->fields.__1__state + 3) <= 5 && ((1 << (LOBYTE(this->fields.__1__state) + 3)) & 0x31) != 0 )
    MovieFileMerge__DownloadMovie_d__39____m__Finally1(this, method);
}


void MovieFileMerge__DownloadMovie_d__39____m__Finally1(
        MovieFileMerge__DownloadMovie_d__39_o *this,
        const MethodInfo *method)
{
  const MethodInfo_4139404 *v3; // x1

  if ( (byte_59375C2 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_Enumerator_string__uint__Dispose__);
    byte_59375C2 = 1;
  }
  v3 = (const MethodInfo_4139404 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__uint__Dispose__;
  this->fields.__1__state = -1;
  System_Collections_Generic_Dictionary_Enumerator_object__uint___Dispose(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&this->fields.__7__wrap1,
    v3);
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
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  int32_t _1__state; // w8
  struct MovieFileMerge_o *_4__this; // x20
  __int64 klass; // x0
  UnityEngine_WaitForEndOfFrame_o *v12; // x20
  Il2CppObject **p__2__current; // x19
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  int v20; // w8
  uint32_t downloadingCRC; // w8
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  __int64 v28; // x21
  int32_t v29; // w1
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7
  struct System_String_o *v36; // x1
  System_String_o *v37; // x2
  System_String_o *v38; // x3
  int32_t v39; // w4
  int32_t v40; // w5
  bool v41; // w6
  bool v42; // w7
  int32_t v43; // w1
  System_String_o *v44; // x2
  System_String_o *v45; // x3
  int32_t v46; // w4
  int32_t v47; // w5
  bool v48; // w6
  bool v49; // w7
  System_String_o *v50; // x2
  System_String_o *v51; // x3
  int32_t v52; // w4
  int32_t v53; // w5
  bool v54; // w6
  bool v55; // w7
  int32_t v56; // w1
  System_String_o *v57; // x2
  System_String_o *v58; // x3
  int32_t v59; // w4
  int32_t v60; // w5
  bool v61; // w6
  bool v62; // w7
  System_String_o *v63; // x2
  System_String_o *v64; // x3
  int32_t v65; // w4
  int32_t v66; // w5
  bool v67; // w6
  bool v68; // w7
  int32_t v69; // w1
  struct System_String_o *v70; // x0
  System_String_o *v71; // x2
  System_String_o *v72; // x3
  int32_t v73; // w4
  int32_t v74; // w5
  bool v75; // w6
  bool v76; // w7
  System_String_o *v77; // x0
  System_String_o *v78; // x2
  System_String_o *v79; // x3
  int32_t v80; // w4
  int32_t v81; // w5
  bool v82; // w6
  bool v83; // w7
  const MethodInfo *v84; // x1
  Il2CppObject *LocalFolderPath; // x0
  struct System_String_o *v86; // x0
  System_String_o *v87; // x2
  System_String_o *v88; // x3
  int32_t v89; // w4
  int32_t v90; // w5
  bool v91; // w6
  bool v92; // w7
  System_String_o *v93; // x2
  System_String_o *v94; // x3
  int32_t v95; // w4
  int32_t v96; // w5
  bool v97; // w6
  bool v98; // w7
  UnityEngine_WaitForEndOfFrame_o *v99; // x20
  System_String_o *v100; // x2
  System_String_o *v101; // x3
  int32_t v102; // w4
  int32_t v103; // w5
  bool v104; // w6
  bool v105; // w7
  __int64 v106; // x2
  float unscaledTime; // s8
  UnityEngine_WaitForEndOfFrame_o *v108; // x21
  System_String_o *v109; // x2
  System_String_o *v110; // x3
  int32_t v111; // w4
  int32_t v112; // w5
  bool v113; // w6
  bool v114; // w7
  System_Byte_array *readData_5__5; // x20
  uint32_t v116; // w0
  System_String_o *v117; // x2
  System_String_o *v118; // x3
  int32_t v119; // w4
  int32_t v120; // w5
  bool v121; // w6
  bool v122; // w7
  ManagementManager_c *v123; // x0
  _BOOL4 isDuringStartup; // w22
  __int64 v125; // x1
  __int64 v126; // x2
  Il2CppObject *Instance; // x21
  int v128; // w9
  System_String_o *v129; // x22
  ErrorDialog_ClickDelegate_o *v130; // x23
  System_String_o *v131; // x2
  System_String_o *v132; // x3
  int32_t v133; // w4
  int32_t v134; // w5
  bool v135; // w6
  bool v136; // w7
  MissionNaviTransitionBoardItem_o *v137; // x0
  System_IO_DirectoryInfo_o *Parent; // x0
  __int64 v139; // x1
  System_IO_DirectoryInfo_o *v140; // x21
  const MethodInfo *v141; // x1
  System_String_o *v142; // x0
  __int64 v143; // x1
  __int64 v144; // x2
  System_String_o *v145; // x21
  __int64 v146; // x1
  __int64 v147; // x2
  int64_t FreeSize; // x21
  ManagerConfig_c *v149; // x0
  System_String_o *dlFilePath_5__2; // x0
  System_Byte_array *v151; // x1
  System_String_o *v152; // x22
  ErrorDialog_ClickDelegate_o *v153; // x23
  UnityEngine_WaitForEndOfFrame_o *v154; // x20
  System_String_o *v155; // x2
  System_String_o *v156; // x3
  int32_t v157; // w4
  int32_t v158; // w5
  bool v159; // w6
  bool v160; // w7
  float downloadProgress; // s0
  float loadProgress_5__7; // s9
  float v163; // s8
  float v164; // s0
  bool v165; // zf
  float v166; // s8
  struct System_String_o **p_errorCode_5__11; // x21
  System_String_o *v168; // x2
  System_String_o *v169; // x3
  int32_t v170; // w4
  int32_t v171; // w5
  bool v172; // w6
  bool v173; // w7
  System_String_o *error; // x0
  struct System_Byte_array *data; // x0
  System_String_o *v176; // x2
  System_String_o *v177; // x3
  int32_t v178; // w4
  int32_t v179; // w5
  bool v180; // w6
  bool v181; // w7
  System_String_o *v182; // x2
  System_String_o *v183; // x3
  int32_t v184; // w4
  int32_t v185; // w5
  bool v186; // w6
  bool v187; // w7
  System_String_o *v188; // x0
  System_String_o *v189; // x2
  System_String_o *v190; // x3
  int32_t v191; // w4
  int32_t v192; // w5
  bool v193; // w6
  bool v194; // w7
  int32_t v195; // w1
  ManagerConfig_c *v196; // x0
  Il2CppObject *v197; // x22
  System_String_o *errorCode_5__11; // x21
  ErrorDialog_ClickDelegate_o *v199; // x23
  UnityEngine_WaitForEndOfFrame_o *v200; // x20
  System_String_o *v201; // x2
  System_String_o *v202; // x3
  int32_t v203; // w4
  int32_t v204; // w5
  bool v205; // w6
  bool v206; // w7
  int32_t v207; // w20
  ManagerConfig_c *v208; // x0
  float DOWNLOAD_RETRY_DELAY_TIME; // s8
  UnityEngine_WaitForSeconds_o *v210; // x0
  float v211; // s0
  Il2CppObject *v212; // x20
  System_String_o *v213; // x2
  System_String_o *v214; // x3
  int32_t v215; // w4
  int32_t v216; // w5
  bool v217; // w6
  bool v218; // w7
  Il2CppObject *v219; // x21
  MissionNaviTransitionBoardItem_o *v220; // x20
  struct UnityEngine_Networking_UnityWebRequest_o *loader; // t1
  System_String_o *v222; // x2
  System_String_o *v223; // x3
  int32_t v224; // w4
  int32_t v225; // w5
  bool v226; // w6
  bool v227; // w7
  System_String_o *v228; // x2
  System_String_o *v229; // x3
  int32_t v230; // w4
  int32_t v231; // w5
  bool v232; // w6
  bool v233; // w7
  struct System_Byte_array **p_readData_5__5; // x0
  System_String_o *v235; // x2
  System_String_o *v236; // x3
  int32_t v237; // w4
  int32_t v238; // w5
  bool v239; // w6
  bool v240; // w7
  System_String_o *v241; // x2
  System_String_o *v242; // x3
  int32_t v243; // w4
  int32_t v244; // w5
  bool v245; // w6
  bool v246; // w7
  __int64 v247; // x1
  ManagerConfig_c *v248; // x0
  Il2CppObject *v249; // x22
  System_String_o *v250; // x21
  ErrorDialog_ClickDelegate_o *v251; // x23
  System_String_o *v252; // x2
  System_String_o *v253; // x3
  int32_t v254; // w4
  int32_t v255; // w5
  bool v256; // w6
  bool v257; // w7
  System_String_o *v258; // x2
  System_String_o *v259; // x3
  int32_t v260; // w4
  int32_t v261; // w5
  bool v262; // w6
  bool v263; // w7
  System_String_o *v264; // x2
  System_String_o *v265; // x3
  int32_t v266; // w4
  int32_t v267; // w5
  bool v268; // w6
  bool v269; // w7
  UnityEngine_WaitForSeconds_o *v270; // x20
  System_String_o *v271; // x2
  System_String_o *v272; // x3
  int32_t v273; // w4
  int32_t v274; // w5
  bool v275; // w6
  bool v276; // w7
  struct UnityEngine_Networking_UnityWebRequest_o **v277; // x20
  struct UnityEngine_Networking_UnityWebRequest_o *v278; // t1
  ManagerConfig_c *v279; // x0
  struct ManagerConfig_StaticFields *static_fields; // x8
  Il2CppObject *wait_5__8; // x1
  __int64 v282; // x1
  __int64 v283; // x2
  long double v284; // q0
  char v285; // w23
  __int64 v286; // x1
  __int64 v287; // x2
  Il2CppObject *v288; // x22
  struct System_String_o *errorLocalizeCode_5__12; // x10
  System_String_o *v290; // x21
  int v291; // w9
  System_String_o *v292; // x23
  System_String_o *v293; // x23
  ErrorDialog_ClickDelegate_o *v294; // x24
  System_String_o *downloadingURL; // x22
  System_String_o *v296; // x0
  System_String_o *v297; // x0
  System_String_o *v298; // x2
  System_String_o *v299; // x3
  int32_t v300; // w4
  int32_t v301; // w5
  bool v302; // w6
  bool v303; // w7
  System_Collections_Generic_Dictionary_string__string__o *ResponseHeaders; // x0
  System_Collections_Generic_Dictionary_object__object__o *v305; // x22
  Il2CppObject *v306; // x22
  __int64 v307; // x22
  System_String_o *v308; // x23
  int32_t autoRetryCount_5__3; // w8
  System_String_o *v310; // x0
  struct System_String_o *v311; // x0
  System_String_o *v312; // x23
  System_String_o *v313; // x23
  ErrorDialog_ClickDelegate_o *v314; // x24
  __int64 v315; // x0
  System_IO_IOException_o *v316; // x21
  System_String_o *v317; // x0
  __int64 v318; // x0
  UnityEngine_Networking_UnityWebRequest_o *v319; // x0
  MissionNaviTransitionBoardItem_o *p_loader; // x20
  System_String_o *v321; // x2
  System_String_o *v322; // x3
  int32_t v323; // w4
  int32_t v324; // w5
  bool v325; // w6
  bool v326; // w7
  Il2CppObject **v327; // x19
  System_String_o *v328; // x2
  System_String_o *v329; // x3
  int32_t v330; // w4
  int32_t v331; // w5
  bool v332; // w6
  bool v333; // w7
  System_Nullable_Vector2__o effectDistance; // [xsp+0h] [xbp-70h]
  System_Nullable_Vector2__o effectDistancea; // [xsp+0h] [xbp-70h]
  Il2CppObject *value; // [xsp+38h] [xbp-38h] BYREF

  if ( (byte_59375C0 & 1) == 0 )
  {
    sub_21FFC50(&char___TypeInfo);
    sub_21FFC50(&ErrorDialog_ClickDelegate_TypeInfo);
    sub_21FFC50(&CommonServicePluginScript_TypeInfo);
    sub_21FFC50(&Crc32_TypeInfo);
    sub_21FFC50(&UnityEngine_Debug_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__string__TryGetValue__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__string__get_Count__);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&ManagementManager_TypeInfo);
    sub_21FFC50(&ManagerConfig_TypeInfo);
    sub_21FFC50(&Method_MovieFileMerge_EndRetryDialog__);
    sub_21FFC50(&Method_MovieFileMerge_EndWarningDialog__);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&string___TypeInfo);
    sub_21FFC50(&UnityEngine_WaitForEndOfFrame_TypeInfo);
    sub_21FFC50(&UnityEngine_WaitForSeconds_TypeInfo);
    sub_21FFC50(&StringLiteral_7549/*"HTTP"*/);
    sub_21FFC50(&StringLiteral_792/*")\n\n503 Auto retry count "*/);
    sub_21FFC50(&StringLiteral_795/*")\nfile crc ("*/);
    sub_21FFC50(&StringLiteral_1501/*"503"*/);
    sub_21FFC50(&StringLiteral_2138/*"ASSET_LOADER_ERROR_BOOT_RETRY_MESSAGE"*/);
    sub_21FFC50(&StringLiteral_16519/*"[FFFF80]Download error for debug"*/);
    sub_21FFC50(&StringLiteral_26497/*"{0}/{1}"*/);
    sub_21FFC50(&StringLiteral_12846/*"STATUS"*/);
    sub_21FFC50(&StringLiteral_791/*")\n\n"*/);
    sub_21FFC50(&StringLiteral_681/*"("*/);
    sub_21FFC50(&StringLiteral_793/*")\n\nAssetBundle file check sum error\nlist crc ("*/);
    sub_21FFC50(&StringLiteral_789/*")"*/);
    sub_21FFC50(&StringLiteral_2139/*"ASSET_LOADER_ERROR_TIME_OVER_MESSAGE"*/);
    sub_21FFC50(&StringLiteral_794/*")\n\nAssetBundle file download time over"*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_59375C0 = 1;
  }
  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  klass = 0;
  value = 0;
  if ( _1__state > 5 )
  {
    if ( _1__state > 8 )
    {
      switch ( _1__state )
      {
        case 9:
          this->fields.__1__state = -1;
          if ( !_4__this )
            goto LABEL_197;
          goto LABEL_42;
        case 10:
          this->fields.__1__state = -1;
          if ( !_4__this )
            goto LABEL_197;
          _4__this->fields.isErrorDialog = 1;
          if ( !*(&ManagementManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo, method, v2);
          if ( !byte_5937656 )
          {
            sub_21FFC50(&ManagementManager_TypeInfo);
            byte_5937656 = 1;
          }
          v123 = ManagementManager_TypeInfo;
          if ( !*(&ManagementManager_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo, method, v2);
            v123 = ManagementManager_TypeInfo;
          }
          isDuringStartup = v123->static_fields->isDuringStartup;
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v128 = *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1);
          if ( isDuringStartup )
          {
            if ( !v128 )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v125, v126);
            v129 = LocalizationManager__Get((System_String_o *)StringLiteral_2138/*"ASSET_LOADER_ERROR_BOOT_RETRY_MESSAGE"*/, 0);
            v130 = (ErrorDialog_ClickDelegate_o *)sub_21FFEBC(ErrorDialog_ClickDelegate_TypeInfo);
            ErrorDialog_ClickDelegate___ctor(v130, (Il2CppObject *)_4__this, Method_MovieFileMerge_EndRetryDialog__, 0);
            if ( !Instance )
              goto LABEL_197;
            CommonUI__OpenRetryBootDialog((CommonUI_o *)Instance, (System_String_o *)StringLiteral_1/*""*/, v129, v130, 1, 0);
          }
          else
          {
            if ( !v128 )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v125, v126);
            v152 = LocalizationManager__Get((System_String_o *)StringLiteral_2139/*"ASSET_LOADER_ERROR_TIME_OVER_MESSAGE"*/, 0);
            v153 = (ErrorDialog_ClickDelegate_o *)sub_21FFEBC(ErrorDialog_ClickDelegate_TypeInfo);
            ErrorDialog_ClickDelegate___ctor(v153, (Il2CppObject *)_4__this, Method_MovieFileMerge_EndRetryDialog__, 0);
            if ( !Instance )
              goto LABEL_197;
            CommonUI__OpenRetryDialog((CommonUI_o *)Instance, (System_String_o *)StringLiteral_1/*""*/, v152, v153, 1, 0);
          }
          break;
        case 11:
          this->fields.__1__state = -1;
          if ( !_4__this )
            goto LABEL_197;
          break;
        default:
          return klass;
      }
      if ( _4__this->fields.isErrorDialog )
      {
        v154 = (UnityEngine_WaitForEndOfFrame_o *)sub_21FFEBC(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v154, 0);
        this->fields.__2__current = (Il2CppObject *)v154;
        p__2__current = &this->fields.__2__current;
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)p__2__current,
          (int32_t)v154,
          v155,
          v156,
          v157,
          v158,
          v159,
          v160);
        v20 = 11;
        goto LABEL_155;
      }
LABEL_145:
      this->fields._wait_5__8 = 0;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields._wait_5__8, 0, v2, v3, v4, v5, v6, v7);
      this->fields._errorCode_5__11 = 0;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&this->fields._errorCode_5__11,
        0,
        v252,
        v253,
        v254,
        v255,
        v256,
        v257);
      this->fields._errorLocalizeCode_5__12 = 0;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&this->fields._errorLocalizeCode_5__12,
        0,
        v258,
        v259,
        v260,
        v261,
        v262,
        v263);
      do
      {
        this->fields._readData_5__5 = 0;
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)&this->fields._readData_5__5,
          0,
          v264,
          v265,
          v266,
          v267,
          v268,
          v269);
LABEL_193:
        this->fields._readData_5__5 = 0;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields._readData_5__5, 0, v93, v94, v95, v96, v97, v98);
      }
      while ( !this->fields._isDownload_5__4 );
      v319 = UnityEngine_Networking_UnityWebRequest__Get(_4__this->fields.downloadingURL, 0);
      _4__this->fields.loader = v319;
      p_loader = (MissionNaviTransitionBoardItem_o *)&_4__this->fields.loader;
      sub_21FFBF4(p_loader, (int32_t)v319, v321, v322, v323, v324, v325, v326);
      klass = (__int64)p_loader->klass;
      if ( p_loader->klass )
      {
        UnityEngine_Networking_UnityWebRequest__SendWebRequest((UnityEngine_Networking_UnityWebRequest_o *)klass, 0);
        this->fields.__2__current = 0;
        v327 = &this->fields.__2__current;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)v327, 0, v328, v329, v330, v331, v332, v333);
        LOBYTE(klass) = 1;
        *((_DWORD *)v327 - 2) = 1;
        return klass;
      }
      goto LABEL_197;
    }
    if ( _1__state != 6 )
    {
      if ( _1__state == 7 )
      {
        this->fields.__1__state = -1;
        goto LABEL_124;
      }
      this->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_197;
      goto LABEL_14;
    }
    this->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_197;
    goto LABEL_114;
  }
  if ( _1__state <= 2 )
  {
    switch ( _1__state )
    {
      case 0:
        this->fields.__1__state = -1;
        if ( _4__this )
        {
          v77 = System_String__Format_75484576(
                  (System_String_o *)StringLiteral_26497/*"{0}/{1}"*/,
                  (Il2CppObject *)_4__this->fields.assetFolderURL,
                  (Il2CppObject *)this->fields.fileName,
                  0);
          _4__this->fields.downloadingURL = v77;
          sub_21FFBF4(
            (MissionNaviTransitionBoardItem_o *)&_4__this->fields.downloadingURL,
            (int32_t)v77,
            v78,
            v79,
            v80,
            v81,
            v82,
            v83);
          _4__this->fields.downloadingCRC = this->fields.crc;
          LocalFolderPath = (Il2CppObject *)MovieFileMerge__GetLocalFolderPath(_4__this, v84);
          v86 = System_String__Format_75484576(
                  (System_String_o *)StringLiteral_26497/*"{0}/{1}"*/,
                  LocalFolderPath,
                  (Il2CppObject *)this->fields.fileName,
                  0);
          this->fields._dlFilePath_5__2 = v86;
          sub_21FFBF4(
            (MissionNaviTransitionBoardItem_o *)&this->fields._dlFilePath_5__2,
            (int32_t)v86,
            v87,
            v88,
            v89,
            v90,
            v91,
            v92);
          this->fields._autoRetryCount_5__3 = 0;
          this->fields._isDownload_5__4 = 1;
          _4__this->fields.isErrorDialog = 0;
          goto LABEL_193;
        }
        goto LABEL_197;
      case 1:
        this->fields.__1__state = -1;
        unscaledTime = UnityEngine_Time__get_unscaledTime(0);
        klass = (__int64)ManagerConfig_TypeInfo;
        if ( !*(&ManagerConfig_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, method, v106);
          klass = (__int64)ManagerConfig_TypeInfo;
        }
        this->fields._requestTime_5__6 = unscaledTime + *(float *)(*(_QWORD *)(klass + 184) + 40LL);
        if ( !_4__this )
          goto LABEL_197;
        this->fields._loadProgress_5__7 = 0.0;
        v108 = (UnityEngine_WaitForEndOfFrame_o *)sub_21FFEBC(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v108, 0);
        this->fields._wait_5__8 = v108;
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)&this->fields._wait_5__8,
          (int32_t)v108,
          v109,
          v110,
          v111,
          v112,
          v113,
          v114);
        break;
      case 2:
        this->fields.__1__state = -1;
        if ( !_4__this )
          goto LABEL_197;
        break;
      default:
        return klass;
    }
    klass = (__int64)_4__this->fields.loader;
    if ( !klass )
      goto LABEL_197;
    if ( UnityEngine_Networking_UnityWebRequest__get_isDone((UnityEngine_Networking_UnityWebRequest_o *)klass, 0) )
      goto LABEL_50;
    klass = (__int64)_4__this->fields.loader;
    if ( _4__this->fields.isDownloadCancel )
    {
      if ( !klass )
        goto LABEL_197;
      UnityEngine_Networking_UnityWebRequest__Dispose((UnityEngine_Networking_UnityWebRequest_o *)klass, 0);
      v137 = (MissionNaviTransitionBoardItem_o *)&_4__this->fields.loader;
      _4__this->fields.loader = 0;
LABEL_75:
      sub_21FFBF4(v137, 0, v131, v132, v133, v134, v135, v136);
      LOBYTE(klass) = 0;
      _4__this->fields.isDownloading = 0;
      return klass;
    }
    if ( !klass )
      goto LABEL_197;
    downloadProgress = UnityEngine_Networking_UnityWebRequest__get_downloadProgress(
                         (UnityEngine_Networking_UnityWebRequest_o *)klass,
                         0);
    loadProgress_5__7 = this->fields._loadProgress_5__7;
    v163 = downloadProgress;
    v164 = UnityEngine_Time__get_unscaledTime(0);
    v165 = v163 == loadProgress_5__7;
    v166 = v164;
    if ( !v165 )
    {
      v279 = ManagerConfig_TypeInfo;
      if ( !*(&ManagerConfig_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, method, v2);
        v279 = ManagerConfig_TypeInfo;
      }
      static_fields = v279->static_fields;
      klass = (__int64)_4__this->fields.loader;
      this->fields._requestTime_5__6 = v166 + static_fields->TIMEOUT;
      if ( !klass )
        goto LABEL_197;
      this->fields._loadProgress_5__7 = UnityEngine_Networking_UnityWebRequest__get_downloadProgress(
                                          (UnityEngine_Networking_UnityWebRequest_o *)klass,
                                          0);
LABEL_154:
      wait_5__8 = (Il2CppObject *)this->fields._wait_5__8;
      this->fields.__2__current = wait_5__8;
      p__2__current = &this->fields.__2__current;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)p__2__current, (int32_t)wait_5__8, v2, v3, v4, v5, v6, v7);
      v20 = 2;
      goto LABEL_155;
    }
    if ( v164 < this->fields._requestTime_5__6 )
      goto LABEL_154;
LABEL_50:
    if ( _4__this->fields.isDownloadPause )
    {
      if ( !_4__this->fields.isDownloadCancel )
      {
        this->fields.__2__current = 0;
        p__2__current = &this->fields.__2__current;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)p__2__current, 0, v2, v3, v4, v5, v6, v7);
        v20 = 3;
        goto LABEL_155;
      }
      goto LABEL_73;
    }
    if ( _4__this->fields.isDownloadCancel )
    {
LABEL_73:
      klass = (__int64)_4__this->fields.loader;
      if ( !klass )
        goto LABEL_197;
      UnityEngine_Networking_UnityWebRequest__Dispose((UnityEngine_Networking_UnityWebRequest_o *)klass, 0);
      _4__this->fields.loader = 0;
      v137 = (MissionNaviTransitionBoardItem_o *)&_4__this->fields.loader;
      goto LABEL_75;
    }
    *(_WORD *)&this->fields._isAutoRetry_5__9 = 0;
    this->fields._errorCode_5__11 = 0;
    p_errorCode_5__11 = &this->fields._errorCode_5__11;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields._errorCode_5__11, 0, v2, v3, v4, v5, v6, v7);
    this->fields._errorLocalizeCode_5__12 = 0;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields._errorLocalizeCode_5__12,
      0,
      v168,
      v169,
      v170,
      v171,
      v172,
      v173);
    klass = (__int64)_4__this->fields.loader;
    if ( !klass )
      goto LABEL_197;
    if ( !UnityEngine_Networking_UnityWebRequest__get_isDone((UnityEngine_Networking_UnityWebRequest_o *)klass, 0) )
    {
      v188 = System_String__Concat_75481624(
               (System_String_o *)StringLiteral_681/*"("*/,
               _4__this->fields.downloadingURL,
               (System_String_o *)StringLiteral_794/*")\n\nAssetBundle file download time over"*/,
               0);
      v195 = (int)v188;
      *p_errorCode_5__11 = v188;
LABEL_107:
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&this->fields._errorCode_5__11,
        v195,
        v189,
        v190,
        v191,
        v192,
        v193,
        v194);
      goto LABEL_108;
    }
    klass = (__int64)_4__this->fields.loader;
    if ( !klass )
      goto LABEL_197;
    error = UnityEngine_Networking_UnityWebRequest__get_error((UnityEngine_Networking_UnityWebRequest_o *)klass, 0);
    if ( System_String__IsNullOrEmpty(error, 0) )
    {
      klass = (__int64)_4__this->fields.loader;
      if ( klass )
      {
        klass = (__int64)UnityEngine_Networking_UnityWebRequest__get_downloadHandler(
                           (UnityEngine_Networking_UnityWebRequest_o *)klass,
                           0);
        if ( klass )
        {
          data = UnityEngine_Networking_DownloadHandler__get_data((UnityEngine_Networking_DownloadHandler_o *)klass, 0);
          this->fields._readData_5__5 = data;
          sub_21FFBF4(
            (MissionNaviTransitionBoardItem_o *)&this->fields._readData_5__5,
            (int32_t)data,
            v176,
            v177,
            v178,
            v179,
            v180,
            v181);
          this->fields.__2__current = 0;
          p__2__current = &this->fields.__2__current;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)p__2__current, 0, v182, v183, v184, v185, v186, v187);
          v20 = 4;
          goto LABEL_155;
        }
      }
LABEL_197:
      sub_21FFECC(klass, method);
    }
    klass = (__int64)_4__this->fields.loader;
    if ( !klass )
      goto LABEL_197;
    downloadingURL = _4__this->fields.downloadingURL;
    v296 = UnityEngine_Networking_UnityWebRequest__get_error((UnityEngine_Networking_UnityWebRequest_o *)klass, 0);
    v297 = System_String__Concat_75483552(
             (System_String_o *)StringLiteral_681/*"("*/,
             downloadingURL,
             (System_String_o *)StringLiteral_791/*")\n\n"*/,
             v296,
             0);
    *p_errorCode_5__11 = v297;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields._errorCode_5__11,
      (int32_t)v297,
      v298,
      v299,
      v300,
      v301,
      v302,
      v303);
    klass = (__int64)_4__this->fields.loader;
    if ( !klass )
      goto LABEL_197;
    ResponseHeaders = UnityEngine_Networking_UnityWebRequest__GetResponseHeaders(
                        (UnityEngine_Networking_UnityWebRequest_o *)klass,
                        0);
    if ( !ResponseHeaders )
      goto LABEL_108;
    v305 = (System_Collections_Generic_Dictionary_object__object__o *)ResponseHeaders;
    if ( System_Collections_Generic_Dictionary_object__object___get_Count(
           (System_Collections_Generic_Dictionary_object__object__o *)ResponseHeaders,
           (const MethodInfo_3FCA120 *)Method_System_Collections_Generic_Dictionary_string__string__get_Count__) < 1
      || !System_Collections_Generic_Dictionary_object__object___TryGetValue(
            v305,
            (Il2CppObject *)StringLiteral_12846/*"STATUS"*/,
            &value,
            (const MethodInfo_3FCBFD0 *)Method_System_Collections_Generic_Dictionary_string__string__TryGetValue__) )
    {
      goto LABEL_108;
    }
    v306 = value;
    klass = sub_21FFD10(char___TypeInfo, 1);
    if ( !klass )
      goto LABEL_197;
    method = (const MethodInfo *)klass;
    if ( *(_DWORD *)(klass + 24) )
    {
      *(_WORD *)(klass + 32) = 32;
      if ( !v306 )
        goto LABEL_197;
      klass = (__int64)System_String__Split_75492796((System_String_o *)v306, (System_Char_array *)klass, 1, 0);
      if ( !klass )
        goto LABEL_197;
      v307 = klass;
      if ( *(int *)(klass + 24) < 2 )
        goto LABEL_108;
      klass = *(_QWORD *)(klass + 32);
      if ( !klass )
        goto LABEL_197;
      klass = System_String__StartsWith((System_String_o *)klass, (System_String_o *)StringLiteral_7549/*"HTTP"*/, 0);
      if ( (klass & 1) == 0 )
        goto LABEL_108;
      if ( (*(_DWORD *)(v307 + 24) & 0xFFFFFFFE) != 0 )
      {
        klass = *(_QWORD *)(v307 + 40);
        if ( !klass )
          goto LABEL_197;
        if ( !System_String__Equals_75473208((System_String_o *)klass, (System_String_o *)StringLiteral_1501/*"503"*/, 0) )
          goto LABEL_108;
        v308 = _4__this->fields.downloadingURL;
        autoRetryCount_5__3 = this->fields._autoRetryCount_5__3;
        this->fields._isAutoRetry_5__9 = 1;
        this->fields._autoRetryCount_5__3 = autoRetryCount_5__3 + 1;
        v310 = System_Int32__ToString((int)this + 64, 0);
        v311 = System_String__Concat_75483552(
                 (System_String_o *)StringLiteral_681/*"("*/,
                 v308,
                 (System_String_o *)StringLiteral_792/*")\n\n503 Auto retry count "*/,
                 v310,
                 0);
        v195 = (int)v311;
        this->fields._errorCode_5__11 = v311;
        goto LABEL_107;
      }
    }
LABEL_189:
    sub_21FFED4(klass);
  }
  if ( _1__state == 3 )
  {
    this->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_197;
    goto LABEL_50;
  }
  if ( _1__state == 4 )
  {
    readData_5__5 = this->fields._readData_5__5;
    this->fields.__1__state = -1;
    if ( !*(&Crc32_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(Crc32_TypeInfo, method, v2);
    v116 = Crc32__Compute(readData_5__5, 0);
    this->fields.__2__current = 0;
    p__2__current = &this->fields.__2__current;
    *((_DWORD *)p__2__current + 24) = v116;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)p__2__current, 0, v117, v118, v119, v120, v121, v122);
    v20 = 5;
    goto LABEL_155;
  }
  this->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_197;
  downloadingCRC = _4__this->fields.downloadingCRC;
  if ( this->fields._downloadCrc_5__13 == downloadingCRC || !downloadingCRC )
  {
    Parent = System_IO_Directory__GetParent(this->fields._dlFilePath_5__2, 0);
    v140 = Parent;
    if ( !Parent )
      sub_21FFECC(0, v139);
    if ( (((__int64 (__fastcall *)(System_IO_DirectoryInfo_o *, const MethodInfo *))Parent->klass->vtable._10_get_Exists.methodPtr)(
            Parent,
            Parent->klass->vtable._10_get_Exists.method)
        & 1) == 0 )
    {
      v142 = (System_String_o *)((__int64 (__fastcall *)(System_IO_DirectoryInfo_o *, const MethodInfo *))v140->klass->vtable._8_get_FullName.methodPtr)(
                                  v140,
                                  v140->klass->vtable._8_get_FullName.method);
      System_IO_Directory__CreateDirectory(v142, 0);
    }
    v145 = MovieFileMerge__GetLocalFolderPath(_4__this, v141);
    if ( !*(&CommonServicePluginScript_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CommonServicePluginScript_TypeInfo, v143, v144);
    FreeSize = CommonServicePluginScript__GetFreeSize(v145, 0);
    if ( FreeSize < 0 )
      goto LABEL_190;
    v149 = ManagerConfig_TypeInfo;
    if ( !*(&ManagerConfig_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, v146, v147);
      v149 = ManagerConfig_TypeInfo;
    }
    if ( FreeSize < v149->static_fields->LIMIT_FREE_SIZE )
    {
LABEL_190:
      v315 = sub_21FFC64(&System_IO_IOException_TypeInfo);
      v316 = (System_IO_IOException_o *)sub_21FFEBC(v315);
      v317 = (System_String_o *)sub_21FFC64(&StringLiteral_5471/*"Disk full"*/);
      System_IO_IOException___ctor_76656180(v316, v317, 0);
      v318 = sub_21FFC64(&Method_MovieFileMerge__Download_d__47_MoveNext__);
      sub_21FFD90(v316, v318);
    }
    if ( System_IO_File__Exists(this->fields._dlFilePath_5__2, 0) )
      System_IO_File__Delete(this->fields._dlFilePath_5__2, 0);
    dlFilePath_5__2 = this->fields._dlFilePath_5__2;
    v151 = this->fields._readData_5__5;
    ++_4__this->fields.downloadProgress;
    System_IO_File__WriteAllBytes(dlFilePath_5__2, v151, 0);
    this->fields._isDownload_5__4 = 0;
    goto LABEL_108;
  }
  klass = sub_21FFD10(string___TypeInfo, 7);
  if ( !klass )
    goto LABEL_197;
  v28 = klass;
  if ( !*(_DWORD *)(klass + 24) )
    goto LABEL_189;
  v29 = StringLiteral_681/*"("*/;
  *(_QWORD *)(klass + 32) = StringLiteral_681/*"("*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(klass + 32), v29, v22, v23, v24, v25, v26, v27);
  if ( (*(_DWORD *)(v28 + 24) & 0xFFFFFFFE) == 0 )
    goto LABEL_189;
  v36 = _4__this->fields.downloadingURL;
  *(_QWORD *)(v28 + 40) = v36;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v28 + 40), (int32_t)v36, v30, v31, v32, v33, v34, v35);
  if ( *(_DWORD *)(v28 + 24) <= 2u )
    goto LABEL_189;
  v43 = StringLiteral_793/*")\n\nAssetBundle file check sum error\nlist crc ("*/;
  *(_QWORD *)(v28 + 48) = StringLiteral_793/*")\n\nAssetBundle file check sum error\nlist crc ("*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v28 + 48), v43, v37, v38, v39, v40, v41, v42);
  klass = (__int64)System_UInt32__ToString((int)_4__this + 96, 0);
  if ( (*(_DWORD *)(v28 + 24) & 0xFFFFFFFC) == 0 )
    goto LABEL_189;
  *(_QWORD *)(v28 + 56) = klass;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v28 + 56), klass, v44, v45, v46, v47, v48, v49);
  if ( *(_DWORD *)(v28 + 24) <= 4u )
    goto LABEL_189;
  v56 = StringLiteral_795/*")\nfile crc ("*/;
  *(_QWORD *)(v28 + 64) = StringLiteral_795/*")\nfile crc ("*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v28 + 64), v56, v50, v51, v52, v53, v54, v55);
  klass = (__int64)System_UInt32__ToString((int)this + 120, 0);
  if ( *(_DWORD *)(v28 + 24) <= 5u )
    goto LABEL_189;
  *(_QWORD *)(v28 + 72) = klass;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v28 + 72), klass, v57, v58, v59, v60, v61, v62);
  if ( *(_DWORD *)(v28 + 24) <= 6u )
    goto LABEL_189;
  v69 = StringLiteral_789/*")"*/;
  *(_QWORD *)(v28 + 80) = StringLiteral_789/*")"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v28 + 80), v69, v63, v64, v65, v66, v67, v68);
  v70 = System_String__Concat_75483816((System_String_array *)v28, 0);
  this->fields._errorCode_5__11 = v70;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._errorCode_5__11,
    (int32_t)v70,
    v71,
    v72,
    v73,
    v74,
    v75,
    v76);
  this->fields._isCrcError_5__10 = 1;
LABEL_108:
  method = (const MethodInfo *)this->fields._errorCode_5__11;
  if ( !method )
    goto LABEL_124;
  MovieFileMerge__AssetLoadLogError(_4__this, (System_String_o *)method, (const MethodInfo *)v2);
  v196 = ManagerConfig_TypeInfo;
  if ( !*(&ManagerConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, method, v2);
    v196 = ManagerConfig_TypeInfo;
  }
  if ( !v196->static_fields->UseDebugCommand )
    goto LABEL_116;
  _4__this->fields.isErrorDialog = 1;
  v197 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  errorCode_5__11 = this->fields._errorCode_5__11;
  v199 = (ErrorDialog_ClickDelegate_o *)sub_21FFEBC(ErrorDialog_ClickDelegate_TypeInfo);
  ErrorDialog_ClickDelegate___ctor(v199, (Il2CppObject *)_4__this, Method_MovieFileMerge_EndWarningDialog__, 0);
  if ( !v197 )
    goto LABEL_197;
  *(_QWORD *)&effectDistance.fields.hasValue = 0;
  effectDistance.fields.value.fields.y = 0.0;
  CommonUI__OpenWarningDialog(
    (CommonUI_o *)v197,
    (System_String_o *)StringLiteral_16519/*"[FFFF80]Download error for debug"*/,
    errorCode_5__11,
    v199,
    1,
    0,
    -1.0,
    1,
    effectDistance,
    0);
LABEL_114:
  if ( _4__this->fields.isErrorDialog )
  {
    v200 = (UnityEngine_WaitForEndOfFrame_o *)sub_21FFEBC(UnityEngine_WaitForEndOfFrame_TypeInfo);
    UnityEngine_WaitForEndOfFrame___ctor(v200, 0);
    this->fields.__2__current = (Il2CppObject *)v200;
    p__2__current = &this->fields.__2__current;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)p__2__current, (int32_t)v200, v201, v202, v203, v204, v205, v206);
    v20 = 6;
    goto LABEL_155;
  }
LABEL_116:
  if ( this->fields._isAutoRetry_5__9 )
  {
    v207 = this->fields._autoRetryCount_5__3;
    v208 = ManagerConfig_TypeInfo;
    if ( !*(&ManagerConfig_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, method, v2);
      v208 = ManagerConfig_TypeInfo;
    }
    DOWNLOAD_RETRY_DELAY_TIME = v208->static_fields->DOWNLOAD_RETRY_DELAY_TIME;
    v210 = (UnityEngine_WaitForSeconds_o *)sub_21FFEBC(UnityEngine_WaitForSeconds_TypeInfo);
    v211 = (float)v207;
    v212 = (Il2CppObject *)v210;
    UnityEngine_WaitForSeconds___ctor(v210, DOWNLOAD_RETRY_DELAY_TIME * v211, 0);
    this->fields.__2__current = v212;
    p__2__current = &this->fields.__2__current;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)p__2__current, (int32_t)v212, v213, v214, v215, v216, v217, v218);
    v20 = 7;
    goto LABEL_155;
  }
  v219 = (Il2CppObject *)this->fields._errorCode_5__11;
  if ( this->fields._isCrcError_5__10 )
  {
    if ( !*(&UnityEngine_Debug_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo, method, v2);
    UnityEngine_Debug__LogError(v219, 0);
    goto LABEL_124;
  }
  MovieFileMerge__AssetLoadLogError(_4__this, this->fields._errorCode_5__11, (const MethodInfo *)v2);
  _4__this->fields.isErrorDialog = 1;
  if ( !*(&ManagementManager_TypeInfo->_2.cctor_finished + 1) )
    *(__n128 *)&v284 = j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo, v282, v283);
  v285 = sub_2D4C010(0, v284);
  v288 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  errorLocalizeCode_5__12 = this->fields._errorLocalizeCode_5__12;
  v290 = (System_String_o *)StringLiteral_1/*""*/;
  v291 = *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1);
  if ( (v285 & 1) != 0 )
  {
    if ( errorLocalizeCode_5__12 )
      v292 = this->fields._errorLocalizeCode_5__12;
    else
      v292 = (System_String_o *)StringLiteral_2138/*"ASSET_LOADER_ERROR_BOOT_RETRY_MESSAGE"*/;
    if ( !v291 )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v286, v287);
    v293 = LocalizationManager__Get(v292, 0);
    v294 = (ErrorDialog_ClickDelegate_o *)sub_21FFEBC(ErrorDialog_ClickDelegate_TypeInfo);
    ErrorDialog_ClickDelegate___ctor(v294, (Il2CppObject *)_4__this, Method_MovieFileMerge_EndRetryDialog__, 0);
    if ( !v288 )
      goto LABEL_197;
    CommonUI__OpenRetryBootDialog((CommonUI_o *)v288, v290, v293, v294, 1, 0);
  }
  else
  {
    if ( errorLocalizeCode_5__12 )
      v312 = this->fields._errorLocalizeCode_5__12;
    else
      v312 = (System_String_o *)StringLiteral_2139/*"ASSET_LOADER_ERROR_TIME_OVER_MESSAGE"*/;
    if ( !v291 )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v286, v287);
    v313 = LocalizationManager__Get(v312, 0);
    v314 = (ErrorDialog_ClickDelegate_o *)sub_21FFEBC(ErrorDialog_ClickDelegate_TypeInfo);
    ErrorDialog_ClickDelegate___ctor(v314, (Il2CppObject *)_4__this, Method_MovieFileMerge_EndRetryDialog__, 0);
    if ( !v288 )
      goto LABEL_197;
    CommonUI__OpenRetryDialog((CommonUI_o *)v288, v290, v313, v314, 1, 0);
  }
LABEL_14:
  if ( _4__this->fields.isErrorDialog )
  {
    v12 = (UnityEngine_WaitForEndOfFrame_o *)sub_21FFEBC(UnityEngine_WaitForEndOfFrame_TypeInfo);
    UnityEngine_WaitForEndOfFrame___ctor(v12, 0);
    this->fields.__2__current = (Il2CppObject *)v12;
    p__2__current = &this->fields.__2__current;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)p__2__current, (int32_t)v12, v14, v15, v16, v17, v18, v19);
    v20 = 8;
LABEL_155:
    *((_DWORD *)p__2__current - 2) = v20;
    LOBYTE(klass) = 1;
    return klass;
  }
LABEL_124:
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method, v2);
  if ( !byte_5933778 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    byte_5933778 = 1;
  }
  klass = (__int64)NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method, v2);
    klass = (__int64)NetworkManager_TypeInfo;
  }
  if ( *(_BYTE *)(*(_QWORD *)(klass + 184) + 144LL) )
  {
    if ( !_4__this )
      goto LABEL_197;
    loader = _4__this->fields.loader;
    v220 = (MissionNaviTransitionBoardItem_o *)&_4__this->fields.loader;
    klass = (__int64)loader;
    if ( !loader )
      goto LABEL_197;
    UnityEngine_Networking_UnityWebRequest__Dispose((UnityEngine_Networking_UnityWebRequest_o *)klass, 0);
    v220->klass = 0;
    sub_21FFBF4(v220, 0, v222, v223, v224, v225, v226, v227);
    this->fields._readData_5__5 = 0;
    p_readData_5__5 = &this->fields._readData_5__5;
LABEL_134:
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)p_readData_5__5, 0, v228, v229, v230, v231, v232, v233);
    LOBYTE(klass) = 0;
    return klass;
  }
  if ( this->fields._isDownload_5__4 )
  {
    if ( !_4__this )
      goto LABEL_197;
    klass = (__int64)_4__this->fields.loader;
    if ( !klass )
      goto LABEL_197;
    UnityEngine_Networking_UnityWebRequest__Dispose((UnityEngine_Networking_UnityWebRequest_o *)klass, 0);
    _4__this->fields.loader = 0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&_4__this->fields.loader, 0, v235, v236, v237, v238, v239, v240);
    this->fields._readData_5__5 = 0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields._readData_5__5, 0, v241, v242, v243, v244, v245, v246);
    if ( this->fields._isCrcError_5__10 )
    {
      if ( !this->fields._errorCode_5__11 )
        goto LABEL_146;
      v248 = ManagerConfig_TypeInfo;
      if ( !*(&ManagerConfig_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, v247, v2);
        v248 = ManagerConfig_TypeInfo;
      }
      if ( !v248->static_fields->UseDebugCommand )
        goto LABEL_146;
      _4__this->fields.isErrorDialog = 1;
      v249 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v250 = this->fields._errorCode_5__11;
      v251 = (ErrorDialog_ClickDelegate_o *)sub_21FFEBC(ErrorDialog_ClickDelegate_TypeInfo);
      ErrorDialog_ClickDelegate___ctor(v251, (Il2CppObject *)_4__this, Method_MovieFileMerge_EndWarningDialog__, 0);
      if ( !v249 )
        goto LABEL_197;
      *(_QWORD *)&effectDistancea.fields.hasValue = 0;
      effectDistancea.fields.value.fields.y = 0.0;
      CommonUI__OpenWarningDialog(
        (CommonUI_o *)v249,
        (System_String_o *)StringLiteral_16519/*"[FFFF80]Download error for debug"*/,
        v250,
        v251,
        1,
        0,
        -1.0,
        1,
        effectDistancea,
        0);
LABEL_42:
      if ( _4__this->fields.isErrorDialog )
      {
        v99 = (UnityEngine_WaitForEndOfFrame_o *)sub_21FFEBC(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v99, 0);
        this->fields.__2__current = (Il2CppObject *)v99;
        p__2__current = &this->fields.__2__current;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)p__2__current, (int32_t)v99, v100, v101, v102, v103, v104, v105);
        v20 = 9;
        goto LABEL_155;
      }
LABEL_146:
      v270 = (UnityEngine_WaitForSeconds_o *)sub_21FFEBC(UnityEngine_WaitForSeconds_TypeInfo);
      UnityEngine_WaitForSeconds___ctor(v270, 1.0, 0);
      this->fields.__2__current = (Il2CppObject *)v270;
      p__2__current = &this->fields.__2__current;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)p__2__current, (int32_t)v270, v271, v272, v273, v274, v275, v276);
      v20 = 10;
      goto LABEL_155;
    }
    goto LABEL_145;
  }
  if ( !_4__this )
    goto LABEL_197;
  v278 = _4__this->fields.loader;
  v277 = &_4__this->fields.loader;
  klass = (__int64)v278;
  if ( v278 )
  {
    UnityEngine_Networking_UnityWebRequest__Dispose((UnityEngine_Networking_UnityWebRequest_o *)klass, 0);
    p_readData_5__5 = (struct System_Byte_array **)v277;
    *v277 = 0;
    goto LABEL_134;
  }
  return klass;
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

  v2 = sub_21FFC64(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_21FFEBC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_21FFC64(&Method_MovieFileMerge__Download_d__47_System_Collections_IEnumerator_Reset__);
  sub_21FFD90(v3, v4);
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
  System_Collections_Generic_List_string__o *SplitFileList; // x22
  System_String_o *outputMergeFile; // x21
  FileMergeAndSplit_Merge_o *v7; // x23
  const MethodInfo *v8; // x3
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  FileMergeAndSplit_Merge_o *mergeClass; // x21
  System_Action_object__o *v16; // x22
  const MethodInfo *v17; // x2
  System_Collections_IEnumerator_o *v18; // x0
  MissionNaviTransitionBoardItem_o *p__2__current; // x19
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  bool result; // w0
  struct FileMergeAndSplit_Merge_o *v27; // x8
  System_String_o *v28; // x21
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x0
  System_Collections_Generic_List_uint__o *v30; // x22
  FileMergeAndSplit_CRCChecker_o *v31; // x23
  const MethodInfo *v32; // x3
  MissionNaviTransitionBoardItem_o *p_crcCheckerClass; // x20
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7
  System_Collections_IEnumerator_o *v40; // x0
  MissionNaviTransitionBoardItem_o *v41; // x19
  System_String_o *v42; // x2
  System_String_o *v43; // x3
  int32_t v44; // w4
  int32_t v45; // w5
  bool v46; // w6
  bool v47; // w7
  struct FileMergeAndSplit_CRCChecker_o *crcCheckerClass; // x8

  v2 = this;
  if ( (byte_59375C3 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_Exception__TypeInfo);
    sub_21FFC50(&FileMergeAndSplit_CRCChecker_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__uint__get_Values__);
    sub_21FFC50(&Method_System_Linq_Enumerable_ToList_uint___);
    sub_21FFC50(&FileMergeAndSplit_Merge_TypeInfo);
    this = (MovieFileMerge__Merge_d__40_o *)sub_21FFC50(&Method_MovieFileMerge__Merge_b__40_0__);
    byte_59375C3 = 1;
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
        v7 = (FileMergeAndSplit_Merge_o *)sub_21FFEBC(FileMergeAndSplit_Merge_TypeInfo);
        FileMergeAndSplit_Merge___ctor(v7, SplitFileList, outputMergeFile, v8);
        _4__this->fields.mergeClass = v7;
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)&_4__this->fields.mergeClass,
          (int32_t)v7,
          v9,
          v10,
          v11,
          v12,
          v13,
          v14);
        mergeClass = _4__this->fields.mergeClass;
        v16 = (System_Action_object__o *)sub_21FFEBC(System_Action_Exception__TypeInfo);
        System_Action_object____ctor(v16, (Il2CppObject *)_4__this, Method_MovieFileMerge__Merge_b__40_0__, 0);
        if ( mergeClass )
        {
          v18 = FileMergeAndSplit_Merge__Run(mergeClass, (System_Action_Exception__o *)v16, v17);
          v2->fields.__2__current = (Il2CppObject *)v18;
          p__2__current = (MissionNaviTransitionBoardItem_o *)&v2->fields.__2__current;
          sub_21FFBF4(p__2__current, (int32_t)v18, v20, v21, v22, v23, v24, v25);
          result = 1;
          p__2__current[-1].fields._BoardType_k__BackingField = 1;
          return result;
        }
      }
LABEL_23:
      sub_21FFECC(this, method);
    }
    return 0;
  }
  v2->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_23;
  v27 = _4__this->fields.mergeClass;
  if ( !v27 )
    goto LABEL_23;
  if ( v27->fields.isError )
    return 0;
  this = (MovieFileMerge__Merge_d__40_o *)_4__this->fields.AllDownLoadFilePathCRCDictionary;
  if ( !this )
    goto LABEL_23;
  v28 = _4__this->fields.outputMergeFile;
  Values = System_Collections_Generic_Dictionary_object__uint___get_Values(
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)this,
             (const MethodInfo_3FF16D0 *)Method_System_Collections_Generic_Dictionary_string__uint__get_Values__);
  v30 = (System_Collections_Generic_List_uint__o *)System_Linq_Enumerable__ToList_uint_(
                                                     (System_Collections_Generic_IEnumerable_TSource__o *)Values,
                                                     (const MethodInfo_386DAA8 *)Method_System_Linq_Enumerable_ToList_uint___);
  v31 = (FileMergeAndSplit_CRCChecker_o *)sub_21FFEBC(FileMergeAndSplit_CRCChecker_TypeInfo);
  FileMergeAndSplit_CRCChecker___ctor(v31, v28, v30, v32);
  _4__this->fields.crcCheckerClass = v31;
  p_crcCheckerClass = (MissionNaviTransitionBoardItem_o *)&_4__this->fields.crcCheckerClass;
  sub_21FFBF4(p_crcCheckerClass, (int32_t)v31, v34, v35, v36, v37, v38, v39);
  this = (MovieFileMerge__Merge_d__40_o *)p_crcCheckerClass->klass;
  if ( !p_crcCheckerClass->klass )
    goto LABEL_23;
  v40 = FileMergeAndSplit_CRCChecker__Run((FileMergeAndSplit_CRCChecker_o *)this, method);
  v2->fields.__2__current = (Il2CppObject *)v40;
  v41 = (MissionNaviTransitionBoardItem_o *)&v2->fields.__2__current;
  sub_21FFBF4(v41, (int32_t)v40, v42, v43, v44, v45, v46, v47);
  result = 1;
  v41[-1].fields._BoardType_k__BackingField = 2;
  return result;
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

  v2 = sub_21FFC64(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_21FFEBC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_21FFC64(&Method_MovieFileMerge__Merge_d__40_System_Collections_IEnumerator_Reset__);
  sub_21FFD90(v3, v4);
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
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  MovieFileMerge__PlayCRIMovie_d__36_o *v8; // x19
  int32_t _1__state; // w8
  struct MovieFileMerge_o *_4__this; // x25
  Il2CppObject *v11; // x21
  Il2CppObject **p__8__1; // x20
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  __int64 v19; // x1
  __int64 v20; // x2
  Il2CppObject *object; // x21
  MovieFileMerge__PlayCRIMovie_d__36_o *v22; // x21
  Il2CppObject *v23; // x22
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  Il2CppObject *Component_object; // x21
  __int64 v31; // x2
  CRIMoviePlayer_o *klass; // x22
  System_String_o *filePath; // x21
  BgmManager_c *v34; // x0
  Il2CppObject *v35; // x24
  float masterVolume; // s8
  System_Action_o *v37; // x23
  struct MovieFileMerge___c__DisplayClass36_0_o *_8__1; // x8
  MissionNaviTransitionBoardItem_o *p__2__current; // x19
  bool result; // w0

  v8 = this;
  if ( (byte_59375C4 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&BgmManager_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_CRIMoviePlayer___);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_UIPanel___);
    sub_21FFC50(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_Resources_Load_GameObject___);
    sub_21FFC50(&Method_MovieFileMerge___c__DisplayClass36_0__PlayCRIMovie_b__0__);
    sub_21FFC50(&MovieFileMerge___c__DisplayClass36_0_TypeInfo);
    this = (MovieFileMerge__PlayCRIMovie_d__36_o *)sub_21FFC50(&StringLiteral_4059/*"CRIMovie/CRIMoviePlayerWithPanel"*/);
    byte_59375C4 = 1;
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
    _4__this = v8->fields.__4__this;
    v8->fields.__1__state = -1;
    v11 = (Il2CppObject *)sub_21FFEBC(MovieFileMerge___c__DisplayClass36_0_TypeInfo);
    System_Object___ctor(v11, 0);
    v8->fields.__8__1 = (struct MovieFileMerge___c__DisplayClass36_0_o *)v11;
    p__8__1 = (Il2CppObject **)&v8->fields.__8__1;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v8->fields.__8__1, (int32_t)v11, v13, v14, v15, v16, v17, v18);
    object = UnityEngine_Resources__Load_object_(
               (System_String_o *)StringLiteral_4059/*"CRIMovie/CRIMoviePlayerWithPanel"*/,
               (const MethodInfo_3945260 *)Method_UnityEngine_Resources_Load_GameObject___);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v19, v20);
    this = (MovieFileMerge__PlayCRIMovie_d__36_o *)UnityEngine_Object__Instantiate_object_(
                                                     object,
                                                     (const MethodInfo_38C0004 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !this )
      goto LABEL_32;
    v22 = this;
    v23 = *p__8__1;
    this = (MovieFileMerge__PlayCRIMovie_d__36_o *)UnityEngine_GameObject__GetComponent_object_(
                                                     (UnityEngine_GameObject_o *)this,
                                                     (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_CRIMoviePlayer___);
    if ( !v23 )
      goto LABEL_32;
    v23[1].klass = (Il2CppClass *)this;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v23[1], (int32_t)this, v24, v25, v26, v27, v28, v29);
    if ( !*p__8__1 )
      goto LABEL_32;
    LOBYTE((*p__8__1)[1].monitor) = 1;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)v22,
                         (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_UIPanel___);
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
    if ( !*(&BgmManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, method, v31);
    if ( !byte_593205D )
    {
      sub_21FFC50(&BgmManager_TypeInfo);
      byte_593205D = 1;
    }
    v34 = BgmManager_TypeInfo;
    if ( !*(&BgmManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, method, v31);
      v34 = BgmManager_TypeInfo;
    }
    v35 = *p__8__1;
    masterVolume = v34->static_fields->masterVolume;
    v37 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(v37, v35, Method_MovieFileMerge___c__DisplayClass36_0__PlayCRIMovie_b__0__, 0);
    if ( !_4__this
      || !klass
      || (CRIMoviePlayer__Initialize(
            klass,
            filePath,
            filePath,
            masterVolume,
            1,
            0,
            v37,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            _4__this->fields.isEnableSkipButton,
            0),
          !*p__8__1)
      || (this = (MovieFileMerge__PlayCRIMovie_d__36_o *)(*p__8__1)[1].klass) == 0 )
    {
LABEL_32:
      sub_21FFECC(this, method);
    }
    CRIMoviePlayer__MoviePlay((CRIMoviePlayer_o *)this, 1, 1, 1, 0, 0);
  }
  _8__1 = v8->fields.__8__1;
  if ( !_8__1 )
    goto LABEL_32;
  if ( _8__1->fields.wait )
  {
    v8->fields.__2__current = 0;
    p__2__current = (MissionNaviTransitionBoardItem_o *)&v8->fields.__2__current;
    sub_21FFBF4(p__2__current, 0, v2, v3, v4, v5, v6, v7);
    result = 1;
    p__2__current[-1].fields._BoardType_k__BackingField = 1;
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

  v2 = sub_21FFC64(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_21FFEBC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_21FFC64(&Method_MovieFileMerge__PlayCRIMovie_d__36_System_Collections_IEnumerator_Reset__);
  sub_21FFD90(v3, v4);
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
  int32_t _1__state; // w20
  int32_t v5; // w8
  struct MovieFileMerge_o *_4__this; // x0
  Il2CppObject *v7; // x0
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7

  _1__state = this->fields.__1__state;
  if ( !_1__state )
  {
    _4__this = this->fields.__4__this;
    this->fields.__1__state = -1;
    if ( !_4__this )
      sub_21FFECC(0, method);
    v7 = (Il2CppObject *)MovieFileMerge__PlayMP4_47420544(_4__this, _4__this->fields.outputMergeFile, v2);
    this->fields.__2__current = v7;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.__2__current, (int32_t)v7, v8, v9, v10, v11, v12, v13);
    v5 = 1;
    goto LABEL_6;
  }
  if ( _1__state == 1 )
  {
    v5 = -1;
LABEL_6:
    this->fields.__1__state = v5;
  }
  return _1__state == 0;
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

  v2 = sub_21FFC64(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_21FFEBC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_21FFC64(&Method_MovieFileMerge__PlayMP4_d__34_System_Collections_IEnumerator_Reset__);
  sub_21FFD90(v3, v4);
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
  int32_t _1__state; // w8
  bool result; // w0
  UnityEngine_WaitForEndOfFrame_o *v5; // x20
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  int32_t v12; // w8
  System_String_o *filePath; // x0
  MovieFileMerge_o *_4__this; // x20
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v16; // x1
  const MethodInfo *v17; // x2
  UnityEngine_WaitForEndOfFrame_o *v18; // x20
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  Il2CppObject *v25; // x0
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7

  if ( (byte_59375C5 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_WaitForEndOfFrame_TypeInfo);
    byte_59375C5 = 1;
  }
  _1__state = this->fields.__1__state;
  result = 0;
  if ( _1__state > 1 )
  {
    if ( _1__state == 2 )
    {
      this->fields.__1__state = -1;
      v18 = (UnityEngine_WaitForEndOfFrame_o *)sub_21FFEBC(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v18, 0);
      this->fields.__2__current = (Il2CppObject *)v18;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&this->fields.__2__current,
        (int32_t)v18,
        v19,
        v20,
        v21,
        v22,
        v23,
        v24);
      result = 1;
      v12 = 3;
    }
    else
    {
      if ( _1__state != 3 )
        return result;
      v12 = -1;
    }
  }
  else if ( _1__state )
  {
    if ( _1__state != 1 )
      return result;
    this->fields.__1__state = -1;
    v5 = (UnityEngine_WaitForEndOfFrame_o *)sub_21FFEBC(UnityEngine_WaitForEndOfFrame_TypeInfo);
    UnityEngine_WaitForEndOfFrame___ctor(v5, 0);
    this->fields.__2__current = (Il2CppObject *)v5;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.__2__current, (int32_t)v5, v6, v7, v8, v9, v10, v11);
    result = 1;
    v12 = 2;
  }
  else
  {
    filePath = this->fields.filePath;
    _4__this = this->fields.__4__this;
    this->fields.__1__state = -1;
    IsNullOrEmpty = System_String__IsNullOrEmpty(filePath, 0);
    if ( IsNullOrEmpty )
      return 0;
    if ( !_4__this )
      sub_21FFECC(IsNullOrEmpty, v16);
    v25 = (Il2CppObject *)MovieFileMerge__PlayCRIMovie(_4__this, this->fields.filePath, v17);
    this->fields.__2__current = v25;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.__2__current,
      (int32_t)v25,
      v26,
      v27,
      v28,
      v29,
      v30,
      v31);
    v12 = 1;
    result = 1;
  }
  this->fields.__1__state = v12;
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

  v2 = sub_21FFC64(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_21FFEBC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_21FFC64(&Method_MovieFileMerge__PlayMP4_d__35_System_Collections_IEnumerator_Reset__);
  sub_21FFD90(v3, v4);
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
    sub_21FFECC(0, method);
  CRIMoviePlayer__Dispose(player, 0);
  this->fields.wait = 0;
}