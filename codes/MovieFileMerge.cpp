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

  if ( (byte_4D2B7AE & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__uint___ctor__);
    sub_1C94098(&System_Collections_Generic_Dictionary_string__uint__TypeInfo);
    byte_4D2B7AE = 1;
  }
  this->fields._OverrideDepth_k__BackingField = -1;
  v3 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1C942E4(System_Collections_Generic_Dictionary_string__uint__TypeInfo);
  System_Collections_Generic_Dictionary_object__uint____ctor(
    v3,
    (const MethodInfo_353217C *)Method_System_Collections_Generic_Dictionary_string__uint___ctor__);
  this->fields.AllDownLoadFilePathCRCDictionary = (struct System_Collections_Generic_Dictionary_string__uint__o *)v3;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.AllDownLoadFilePathCRCDictionary,
    (int32_t)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  v10 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1C942E4(System_Collections_Generic_Dictionary_string__uint__TypeInfo);
  System_Collections_Generic_Dictionary_object__uint____ctor(
    v10,
    (const MethodInfo_353217C *)Method_System_Collections_Generic_Dictionary_string__uint___ctor__);
  this->fields.RequireDownLoadFilePathCRCDictionary = (struct System_Collections_Generic_Dictionary_string__uint__o *)v10;
  sub_1C9403C(
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

  if ( (byte_4D2B7AC & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Debug_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
    sub_1C94098(&string___TypeInfo);
    sub_1C94098(&StringLiteral_14216/*"The request timed out."*/);
    sub_1C94098(&StringLiteral_14157/*"The network connection was lost."*/);
    sub_1C94098(&StringLiteral_4667/*"Connection reset by peer"*/);
    sub_1C94098(&StringLiteral_5025/*"DLErrorType"*/);
    sub_1C94098(&StringLiteral_5024/*"DLErrorAsset"*/);
    sub_1C94098(&StringLiteral_4666/*"Connection refused"*/);
    sub_1C94098(&StringLiteral_9478/*"No address associated with hostname"*/);
    sub_1C94098(&StringLiteral_2373/*"AssetBundle file download time over"*/);
    sub_1C94098(&StringLiteral_12976/*"Software caused connection abort"*/);
    sub_1C94098(&StringLiteral_4668/*"Connection timed out"*/);
    sub_1C94098(&StringLiteral_2376/*"AssetLoadError"*/);
    byte_4D2B7AC = 1;
  }
  Instance = (Il2CppObject *)sub_1C94140(string___TypeInfo, 8);
  if ( !Instance )
    goto LABEL_28;
  v13 = Instance;
  if ( !LODWORD(Instance[1].monitor) )
    goto LABEL_18;
  v14 = StringLiteral_9478/*"No address associated with hostname"*/;
  Instance[2].klass = (Il2CppClass *)StringLiteral_9478/*"No address associated with hostname"*/;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&Instance[2], v14, v7, v8, v9, v10, v11, v12);
  if ( LODWORD(v13[1].monitor) <= 1 )
    goto LABEL_18;
  v21 = StringLiteral_2373/*"AssetBundle file download time over"*/;
  v13[2].monitor = (void *)StringLiteral_2373/*"AssetBundle file download time over"*/;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v13[2].monitor, v21, v15, v16, v17, v18, v19, v20);
  if ( LODWORD(v13[1].monitor) <= 2 )
    goto LABEL_18;
  v28 = StringLiteral_14157/*"The network connection was lost."*/;
  v13[3].klass = (Il2CppClass *)StringLiteral_14157/*"The network connection was lost."*/;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v13[3], v28, v22, v23, v24, v25, v26, v27);
  if ( LODWORD(v13[1].monitor) <= 3 )
    goto LABEL_18;
  v35 = StringLiteral_4667/*"Connection reset by peer"*/;
  v13[3].monitor = (void *)StringLiteral_4667/*"Connection reset by peer"*/;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v13[3].monitor, v35, v29, v30, v31, v32, v33, v34);
  if ( LODWORD(v13[1].monitor) <= 4 )
    goto LABEL_18;
  v42 = StringLiteral_12976/*"Software caused connection abort"*/;
  v13[4].klass = (Il2CppClass *)StringLiteral_12976/*"Software caused connection abort"*/;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v13[4], v42, v36, v37, v38, v39, v40, v41);
  if ( LODWORD(v13[1].monitor) <= 5
    || (v49 = StringLiteral_4668/*"Connection timed out"*/,
        v13[4].monitor = (void *)StringLiteral_4668/*"Connection timed out"*/,
        sub_1C9403C((GrandQuestFolderBoardItem_o *)&v13[4].monitor, v49, v43, v44, v45, v46, v47, v48),
        LODWORD(v13[1].monitor) <= 6)
    || (v56 = StringLiteral_4666/*"Connection refused"*/,
        v13[5].klass = (Il2CppClass *)StringLiteral_4666/*"Connection refused"*/,
        sub_1C9403C((GrandQuestFolderBoardItem_o *)&v13[5], v56, v50, v51, v52, v53, v54, v55),
        LODWORD(v13[1].monitor) <= 7) )
  {
LABEL_18:
    sub_1C942F8(Instance);
  }
  v63 = StringLiteral_14216/*"The request timed out."*/;
  v13[5].monitor = (void *)StringLiteral_14216/*"The request timed out."*/;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v13[5].monitor, v63, v57, v58, v59, v60, v61, v62);
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
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
  if ( !Instance )
LABEL_28:
    sub_1C942F0(Instance, v6);
  CrashReporter__AddCustomKey(
    (CrashReporter_o *)Instance,
    (System_String_o *)StringLiteral_5024/*"DLErrorAsset"*/,
    this->fields.downloadingURL,
    0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
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
  errorCode = (System_String_o *)StringLiteral_2376/*"AssetLoadError"*/;
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

  if ( (byte_4D2B7A3 & 1) == 0 )
  {
    sub_1C94098(&MovieFileMerge__CRCDownloadAndCheck_d__37_TypeInfo);
    byte_4D2B7A3 = 1;
  }
  v3 = sub_1C942E4(MovieFileMerge__CRCDownloadAndCheck_d__37_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v3 + 32), (int32_t)this, v4, v5, v6, v7, v8, v9);
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

  if ( (byte_4D2B7AA & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__uint__Add__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__uint___ctor__);
    sub_1C94098(&System_Collections_Generic_Dictionary_string__uint__TypeInfo);
    byte_4D2B7AA = 1;
  }
  result = 0;
  v4 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1C942E4(System_Collections_Generic_Dictionary_string__uint__TypeInfo);
  System_Collections_Generic_Dictionary_object__uint____ctor(
    v4,
    (const MethodInfo_353217C *)Method_System_Collections_Generic_Dictionary_string__uint___ctor__);
  AllLines = System_IO_File__ReadAllLines(dataPath, 0);
  if ( !AllLines )
LABEL_18:
    sub_1C942F0(AllLines, v6);
  max_length = AllLines->max_length;
  v8 = AllLines;
  if ( max_length >= 1 )
  {
    v9 = 0;
    while ( 1 )
    {
      if ( v9 >= max_length )
LABEL_17:
        sub_1C942F8(AllLines);
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
        (const MethodInfo_3532B30 *)Method_System_Collections_Generic_Dictionary_string__uint__Add__);
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
  if ( (byte_4D2B7A6 & 1) == 0 )
  {
    sub_1C94098(&System_IO_Path_TypeInfo);
    sub_1C94098(&StringLiteral_25409/*"{0}/{1}"*/);
    folder = (System_String_o *)sub_1C94098(&StringLiteral_1041/*"/"*/);
    byte_4D2B7A6 = 1;
  }
  if ( !v2 )
    sub_1C942F0(folder, method);
  if ( System_String__EndsWith(v2, (System_String_o *)StringLiteral_1041/*"/"*/, 0) )
    v2 = System_String__TrimEnd_64474452(v2, 0x2Fu, 0);
  if ( !System_IO_Path_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_IO_Path_TypeInfo);
  FileName = System_IO_Path__GetFileName(v2, 0);
  LocalDataPath = (Il2CppObject *)MovieFileMerge__GetLocalDataPath((const MethodInfo *)FileName);
  v5 = System_String__Format_64459052(
         (System_String_o *)StringLiteral_25409/*"{0}/{1}"*/,
         LocalDataPath,
         (Il2CppObject *)FileName,
         0);
  if ( System_IO_Directory__Exists(v5, 0) )
    System_IO_Directory__Delete(v5, 1, 0);
}


void MovieFileMerge__Delete_41242328(const MethodInfo *method)
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

  if ( (byte_4D2B7A9 & 1) == 0 )
  {
    sub_1C94098(&MovieFileMerge__Download_d__45_TypeInfo);
    byte_4D2B7A9 = 1;
  }
  v7 = sub_1C942E4(MovieFileMerge__Download_d__45_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  *(_DWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 32) = this;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v7 + 32), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v7 + 40) = fileName;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v7 + 40), (int32_t)fileName, v14, v15, v16, v17, v18, v19);
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

  if ( (byte_4D2B7A4 & 1) == 0 )
  {
    sub_1C94098(&MovieFileMerge__DownloadMovie_d__38_TypeInfo);
    byte_4D2B7A4 = 1;
  }
  v3 = sub_1C942E4(MovieFileMerge__DownloadMovie_d__38_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v3 + 32), (int32_t)this, v4, v5, v6, v7, v8, v9);
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
  if ( (byte_4D2B79A & 1) == 0 )
  {
    sub_1C94098(&FileMergeAndSplit_TypeInfo);
    sub_1C94098(&System_IO_Path_TypeInfo);
    sub_1C94098(&StringLiteral_1041/*"/"*/);
    sub_1C94098(&StringLiteral_25414/*"{0}/{1}/{2}"*/);
    this = (MovieFileMerge_o *)sub_1C94098(&StringLiteral_25413/*"{0}/{1}/{1}.usm"*/);
    byte_4D2B79A = 1;
  }
  if ( !v3 )
    sub_1C942F0(this, assetFolderURL);
  if ( System_String__EndsWith(v3, (System_String_o *)StringLiteral_1041/*"/"*/, 0) )
    v3 = System_String__TrimEnd_64474452(v3, 0x2Fu, 0);
  if ( !System_IO_Path_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_IO_Path_TypeInfo);
  FileName = System_IO_Path__GetFileName(v3, 0);
  LocalDataPath = (Il2CppObject *)MovieFileMerge__GetLocalDataPath((const MethodInfo *)FileName);
  v6 = System_String__Format_64459052(
         (System_String_o *)StringLiteral_25413/*"{0}/{1}/{1}.usm"*/,
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
  v10 = System_String__Format_64459120(
          (System_String_o *)StringLiteral_25414/*"{0}/{1}/{2}"*/,
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

  if ( (byte_4D2B79E & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__uint__get_Count__);
    byte_4D2B79E = 1;
  }
  RequireDownLoadFilePathCRCDictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.RequireDownLoadFilePathCRCDictionary;
  v4 = 0.0;
  if ( RequireDownLoadFilePathCRCDictionary
    && System_Collections_Generic_Dictionary_object__uint___get_Count(
         RequireDownLoadFilePathCRCDictionary,
         (const MethodInfo_3532800 *)Method_System_Collections_Generic_Dictionary_string__uint__get_Count__) )
  {
    v6 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.RequireDownLoadFilePathCRCDictionary;
    if ( !v6 )
      sub_1C942F0(0, v5);
    downloadProgress = this->fields.downloadProgress;
    return (float)downloadProgress
         / (float)System_Collections_Generic_Dictionary_object__uint___get_Count(
                    v6,
                    (const MethodInfo_3532800 *)Method_System_Collections_Generic_Dictionary_string__uint__get_Count__);
  }
  return v4;
}


double MovieFileMerge__GetDownloadSize(MovieFileMerge_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_TKey__TValue__o *RequireDownLoadFilePathCRCDictionary; // x0

  if ( (byte_4D2B79D & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__uint__get_Count__);
    byte_4D2B79D = 1;
  }
  RequireDownLoadFilePathCRCDictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.RequireDownLoadFilePathCRCDictionary;
  if ( !RequireDownLoadFilePathCRCDictionary )
    sub_1C942F0(0, method);
  return (double)(System_Collections_Generic_Dictionary_object__uint___get_Count(
                    RequireDownLoadFilePathCRCDictionary,
                    (const MethodInfo_3532800 *)Method_System_Collections_Generic_Dictionary_string__uint__get_Count__) << 20);
}


System_String_o *MovieFileMerge__GetLocalDataPath(const MethodInfo *method)
{
  System_String_o *persistentDataPath; // x0

  if ( (byte_4D2B79B & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Application_TypeInfo);
    sub_1C94098(&StringLiteral_1093/*"/extend-data/movie"*/);
    byte_4D2B79B = 1;
  }
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
  persistentDataPath = UnityEngine_Application__get_persistentDataPath(0);
  return System_String__Concat_64417744(persistentDataPath, (System_String_o *)StringLiteral_1093/*"/extend-data/movie"*/, 0);
}


System_String_o *MovieFileMerge__GetLocalFolderPath(MovieFileMerge_o *this, const MethodInfo *method)
{
  MovieFileMerge_o *v2; // x19
  Il2CppObject *LocalDataPath; // x0

  v2 = this;
  if ( (byte_4D2B7A7 & 1) == 0 )
  {
    this = (MovieFileMerge_o *)sub_1C94098(&StringLiteral_25409/*"{0}/{1}"*/);
    byte_4D2B7A7 = 1;
  }
  LocalDataPath = (Il2CppObject *)MovieFileMerge__GetLocalDataPath((const MethodInfo *)this);
  return System_String__Format_64459052(
           (System_String_o *)StringLiteral_25409/*"{0}/{1}"*/,
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

  if ( (byte_4D2B7A8 & 1) == 0 )
  {
    sub_1C94098(&Crc32_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__uint__Add__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__uint__GetEnumerator__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__uint___ctor__);
    sub_1C94098(&System_Collections_Generic_Dictionary_string__uint__TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_Enumerator_string__uint__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_Enumerator_string__uint__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_Enumerator_string__uint__get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_KeyValuePair_string__uint__get_Key__);
    sub_1C94098(&Method_System_Collections_Generic_KeyValuePair_string__uint__get_Value__);
    sub_1C94098(&StringLiteral_25409/*"{0}/{1}"*/);
    byte_4D2B7A8 = 1;
  }
  memset(&v22, 0, sizeof(v22));
  value = 0;
  v3 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1C942E4(System_Collections_Generic_Dictionary_string__uint__TypeInfo);
  System_Collections_Generic_Dictionary_object__uint____ctor(
    v3,
    (const MethodInfo_353217C *)Method_System_Collections_Generic_Dictionary_string__uint___ctor__);
  AllDownLoadFilePathCRCDictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.AllDownLoadFilePathCRCDictionary;
  if ( !AllDownLoadFilePathCRCDictionary )
    sub_1C942F0(0, v4);
  System_Collections_Generic_Dictionary_object__uint___GetEnumerator(
    &v20,
    AllDownLoadFilePathCRCDictionary,
    (const MethodInfo_3532F20 *)Method_System_Collections_Generic_Dictionary_string__uint__GetEnumerator__);
  v22 = v20;
  while ( System_Collections_Generic_Dictionary_Enumerator_object__uint___MoveNext(
            &v22,
            (const MethodInfo_362306C *)Method_System_Collections_Generic_Dictionary_Enumerator_string__uint__MoveNext__) )
  {
    current = v22.fields._current;
    LocalFolderPath = (Il2CppObject *)MovieFileMerge__GetLocalFolderPath(this, v6);
    v9 = System_String__Format_64459052((System_String_o *)StringLiteral_25409/*"{0}/{1}"*/, LocalFolderPath, current.fields.key, 0);
    v10 = System_IO_File__Exists(v9, 0);
    if ( !v10 )
      goto LABEL_11;
    AllBytes = System_IO_File__ReadAllBytes(v9, 0);
    value = (int)current.fields.value;
    if ( !Crc32_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
    v13 = Crc32__Compute(AllBytes, 0);
    if ( !System_UInt32__Equals_66052716((uint32_t)&value, v13, 0) )
    {
      System_IO_File__Delete(v9, 0);
LABEL_11:
      if ( !v3 )
        sub_1C942F0(v10, v11);
      System_Collections_Generic_Dictionary_object__uint___Add(
        v3,
        current.fields.key,
        (uint32_t)current.fields.value,
        (const MethodInfo_3532B30 *)Method_System_Collections_Generic_Dictionary_string__uint__Add__);
      Parent = System_IO_Directory__GetParent(v9, 0);
      v16 = Parent;
      if ( !Parent )
        sub_1C942F0(0, v15);
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
    (const MethodInfo_3623190 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__uint__Dispose__);
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

  if ( (byte_4D2B7AB & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__uint__get_Keys__);
    sub_1C94098(&Method_System_Linq_Enumerable_ToList_string___);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_string__GetEnumerator__);
    sub_1C94098(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C94098(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C94098(&StringLiteral_25409/*"{0}/{1}"*/);
    byte_4D2B7AB = 1;
  }
  memset(&v25, 0, sizeof(v25));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_string___ctor__);
  LocalFolderPath = MovieFileMerge__GetLocalFolderPath(this, v4);
  if ( System_IO_Directory__Exists(LocalFolderPath, 0) )
  {
    AllDownLoadFilePathCRCDictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.AllDownLoadFilePathCRCDictionary;
    if ( !AllDownLoadFilePathCRCDictionary
      || (Keys = System_Collections_Generic_Dictionary_object__uint___get_Keys(
                   AllDownLoadFilePathCRCDictionary,
                   (const MethodInfo_3532810 *)Method_System_Collections_Generic_Dictionary_string__uint__get_Keys__),
          (AllDownLoadFilePathCRCDictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)System_Linq_Enumerable__ToList_object_((System_Collections_Generic_IEnumerable_TSource__o *)Keys, (const MethodInfo_31E1548 *)Method_System_Linq_Enumerable_ToList_string___)) == 0) )
    {
      sub_1C942F0(AllDownLoadFilePathCRCDictionary, v6);
    }
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v25,
      (System_Collections_Generic_List_object__o *)AllDownLoadFilePathCRCDictionary,
      (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_string__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v25,
              (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
    {
      current = v25.fields._current;
      v11 = (Il2CppObject *)MovieFileMerge__GetLocalFolderPath(this, v9);
      v12 = (Il2CppObject *)System_String__Format_64459052((System_String_o *)StringLiteral_25409/*"{0}/{1}"*/, v11, current, 0);
      v19 = v12;
      if ( !v3 )
        sub_1C942F0(v12, v12);
      items = v3->fields._items;
      v21 = Method_System_Collections_Generic_List_string__Add__;
      ++v3->fields._version;
      if ( !items )
        sub_1C942F0(v12, v12);
      size = v3->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          v12,
          *(const MethodInfo_386AE34 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
      }
      else
      {
        v23 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v23[4] = (Il2CppClass *)v19;
        sub_1C9403C((GrandQuestFolderBoardItem_o *)(v23 + 4), (int32_t)v19, v13, v14, v15, v16, v17, v18);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v25,
      (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
  }
  return (System_Collections_Generic_List_string__o *)v3;
}


double MovieFileMerge__GetTotalRequireSize(MovieFileMerge_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__uint__o *AllDownLoadFilePathCRCDictionary; // x0
  System_Collections_Generic_Dictionary_TKey__TValue__o *RequireDownLoadFilePathCRCDictionary; // x8

  if ( (byte_4D2B79C & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__uint__get_Count__);
    byte_4D2B79C = 1;
  }
  AllDownLoadFilePathCRCDictionary = this->fields.AllDownLoadFilePathCRCDictionary;
  if ( !AllDownLoadFilePathCRCDictionary
    || (AllDownLoadFilePathCRCDictionary = (struct System_Collections_Generic_Dictionary_string__uint__o *)System_Collections_Generic_Dictionary_object__uint___get_Count((System_Collections_Generic_Dictionary_TKey__TValue__o *)AllDownLoadFilePathCRCDictionary, (const MethodInfo_3532800 *)Method_System_Collections_Generic_Dictionary_string__uint__get_Count__),
        (RequireDownLoadFilePathCRCDictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.RequireDownLoadFilePathCRCDictionary) == 0) )
  {
    sub_1C942F0(AllDownLoadFilePathCRCDictionary, method);
  }
  return (double)((System_Collections_Generic_Dictionary_object__uint___get_Count(
                     RequireDownLoadFilePathCRCDictionary,
                     (const MethodInfo_3532800 *)Method_System_Collections_Generic_Dictionary_string__uint__get_Count__)
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

  if ( (byte_4D2B7A2 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__uint__Clear__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__uint___ctor__);
    sub_1C94098(&System_Collections_Generic_Dictionary_string__uint__TypeInfo);
    sub_1C94098(&FileMergeAndSplit_TypeInfo);
    sub_1C94098(&System_IO_Path_TypeInfo);
    sub_1C94098(&StringLiteral_25409/*"{0}/{1}"*/);
    sub_1C94098(&StringLiteral_25405/*"{0}/SplitFile"*/);
    sub_1C94098(&StringLiteral_1041/*"/"*/);
    sub_1C94098(&StringLiteral_25411/*"{0}/{1}.usm"*/);
    byte_4D2B7A2 = 1;
  }
  AllDownLoadFilePathCRCDictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.AllDownLoadFilePathCRCDictionary;
  v8 = enableSkipButton;
  if ( AllDownLoadFilePathCRCDictionary )
  {
    System_Collections_Generic_Dictionary_object__uint___Clear(
      AllDownLoadFilePathCRCDictionary,
      (const MethodInfo_3532CB8 *)Method_System_Collections_Generic_Dictionary_string__uint__Clear__);
  }
  else
  {
    v9 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1C942E4(System_Collections_Generic_Dictionary_string__uint__TypeInfo);
    System_Collections_Generic_Dictionary_object__uint____ctor(
      v9,
      (const MethodInfo_353217C *)Method_System_Collections_Generic_Dictionary_string__uint___ctor__);
    this->fields.AllDownLoadFilePathCRCDictionary = (struct System_Collections_Generic_Dictionary_string__uint__o *)v9;
    sub_1C9403C(
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
      (const MethodInfo_3532CB8 *)Method_System_Collections_Generic_Dictionary_string__uint__Clear__);
  }
  else
  {
    v23 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1C942E4(System_Collections_Generic_Dictionary_string__uint__TypeInfo);
    System_Collections_Generic_Dictionary_object__uint____ctor(
      v23,
      (const MethodInfo_353217C *)Method_System_Collections_Generic_Dictionary_string__uint___ctor__);
    this->fields.RequireDownLoadFilePathCRCDictionary = (struct System_Collections_Generic_Dictionary_string__uint__o *)v23;
    sub_1C9403C(
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
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.mergeClass, 0, v17, v18, v19, v20, v21, v22);
  this->fields.crcCheckerClass = 0;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.crcCheckerClass, 0, v30, v31, v32, v33, v34, v35);
  this->fields.isEnableSkipButton = v8;
  if ( !assetFolderURL )
    sub_1C942F0(v36, v37);
  if ( System_String__EndsWith(assetFolderURL, (System_String_o *)StringLiteral_1041/*"/"*/, 0) )
    assetFolderURL = System_String__TrimEnd_64474452(assetFolderURL, 0x2Fu, 0);
  this->fields.assetFolderURL = assetFolderURL;
  sub_1C9403C(
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
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.assetFolder, (int32_t)FileName, v45, v46, v47, v48, v49, v50);
  LocalFolderPath = (Il2CppObject *)MovieFileMerge__GetLocalFolderPath(this, v51);
  v53 = System_String__Format((System_String_o *)StringLiteral_25405/*"{0}/SplitFile"*/, LocalFolderPath, 0);
  this->fields.outputSplitFileFolder = v53;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.outputSplitFileFolder,
    (int32_t)v53,
    v54,
    v55,
    v56,
    v57,
    v58,
    v59);
  v61 = (Il2CppObject *)MovieFileMerge__GetLocalFolderPath(this, v60);
  v62 = System_String__Format_64459052(
          (System_String_o *)StringLiteral_25411/*"{0}/{1}.usm"*/,
          v61,
          (Il2CppObject *)this->fields.assetFolder,
          0);
  this->fields.outputMergeFile = v62;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.outputMergeFile, (int32_t)v62, v63, v64, v65, v66, v67, v68);
  v70 = MovieFileMerge__GetLocalFolderPath(this, v69);
  v71 = FileMergeAndSplit_TypeInfo;
  v72 = (Il2CppObject *)v70;
  if ( !FileMergeAndSplit_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FileMergeAndSplit_TypeInfo);
    v71 = FileMergeAndSplit_TypeInfo;
  }
  v73 = System_String__Format_64459052(
          (System_String_o *)StringLiteral_25409/*"{0}/{1}"*/,
          v72,
          (Il2CppObject *)v71->static_fields->PathCRCFileName,
          0);
  this->fields.outputMergeFileCRC = v73;
  sub_1C9403C(
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

  if ( (byte_4D2B7A5 & 1) == 0 )
  {
    sub_1C94098(&MovieFileMerge__Merge_d__39_TypeInfo);
    byte_4D2B7A5 = 1;
  }
  v3 = sub_1C942E4(MovieFileMerge__Merge_d__39_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v3 + 32), (int32_t)this, v4, v5, v6, v7, v8, v9);
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

  if ( (byte_4D2B7A1 & 1) == 0 )
  {
    sub_1C94098(&MovieFileMerge__PlayCRIMovie_d__35_TypeInfo);
    byte_4D2B7A1 = 1;
  }
  v5 = sub_1C942E4(MovieFileMerge__PlayCRIMovie_d__35_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v5 + 32), (int32_t)this, v6, v7, v8, v9, v10, v11);
  *(_QWORD *)(v5 + 40) = filePath;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v5 + 40), (int32_t)filePath, v12, v13, v14, v15, v16, v17);
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

  if ( (byte_4D2B79F & 1) == 0 )
  {
    sub_1C94098(&MovieFileMerge__PlayMP4_d__33_TypeInfo);
    byte_4D2B79F = 1;
  }
  v3 = sub_1C942E4(MovieFileMerge__PlayMP4_d__33_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v3 + 32), (int32_t)this, v4, v5, v6, v7, v8, v9);
  return (System_Collections_IEnumerator_o *)v3;
}


System_Collections_IEnumerator_o *MovieFileMerge__PlayMP4_41240468(
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

  if ( (byte_4D2B7A0 & 1) == 0 )
  {
    sub_1C94098(&MovieFileMerge__PlayMP4_d__34_TypeInfo);
    byte_4D2B7A0 = 1;
  }
  v5 = sub_1C942E4(MovieFileMerge__PlayMP4_d__34_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 40) = this;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v5 + 40), (int32_t)this, v6, v7, v8, v9, v10, v11);
  *(_QWORD *)(v5 + 32) = filePath;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v5 + 32), (int32_t)filePath, v12, v13, v14, v15, v16, v17);
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

  if ( (byte_4D2B7AD & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Application_TypeInfo);
    sub_1C94098(&ManagementManager_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
    byte_4D2B7AD = 1;
  }
  loader = this->fields.loader;
  p_loader = (GrandQuestFolderBoardItem_o *)&this->fields.loader;
  v3 = loader;
  if ( loader )
  {
    UnityEngine_Networking_UnityWebRequest__Dispose(v3, 0);
    p_loader->klass = 0;
    sub_1C9403C(p_loader, 0, v6, v7, v8, v9, v10, v11);
  }
  if ( !ManagementManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
  if ( !byte_4D2B7C8 )
  {
    sub_1C94098(&ManagementManager_TypeInfo);
    byte_4D2B7C8 = 1;
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
    UnityEngine_Application__Quit_71904136(0);
  }
  else
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
    if ( !Instance )
      sub_1C942F0(0, v14);
    ManagementManager__reboot((ManagementManager_o *)Instance, 0, 1, 0);
  }
}


void MovieFileMerge___Merge_b__39_0(MovieFileMerge_o *this, System_Exception_o *e, const MethodInfo *method)
{
  Il2CppObject *v4; // x19
  Il2CppObject *Instance; // x20
  System_String_o *v6; // x21
  ErrorDialog_ClickDelegate_o *v7; // x22
  const MethodInfo *v8; // x2
  System_String_o *v9; // x1

  v4 = (Il2CppObject *)this;
  if ( (byte_4D2B7AF & 1) == 0 )
  {
    sub_1C94098(&ErrorDialog_ClickDelegate_TypeInfo);
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&Method_MovieFileMerge_EndMergeRetryDialog__);
    sub_1C94098(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C94098(&StringLiteral_5293/*"Disk full"*/);
    sub_1C94098(&StringLiteral_9272/*"NETWORK_ERROR_DISK_FULL"*/);
    this = (MovieFileMerge_o *)sub_1C94098(&StringLiteral_1/*""*/);
    byte_4D2B7AF = 1;
  }
  if ( !e )
    goto LABEL_12;
  this = (MovieFileMerge_o *)((__int64 (__fastcall *)(System_Exception_o *, const MethodInfo *, const MethodInfo *))e->klass->vtable._5_get_Message.methodPtr)(
                               e,
                               e->klass->vtable._5_get_Message.method,
                               method);
  if ( !this )
    goto LABEL_12;
  if ( !System_String__StartsWith((System_String_o *)this, (System_String_o *)StringLiteral_5293/*"Disk full"*/, 0) )
  {
    v9 = (System_String_o *)((__int64 (__fastcall *)(System_Exception_o *, const MethodInfo *))e->klass->vtable._5_get_Message.methodPtr)(
                              e,
                              e->klass->vtable._5_get_Message.method);
    goto LABEL_11;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v6 = LocalizationManager__Get((System_String_o *)StringLiteral_9272/*"NETWORK_ERROR_DISK_FULL"*/, 0);
  v7 = (ErrorDialog_ClickDelegate_o *)sub_1C942E4(ErrorDialog_ClickDelegate_TypeInfo);
  ErrorDialog_ClickDelegate___ctor(v7, v4, Method_MovieFileMerge_EndMergeRetryDialog__, 0);
  if ( !Instance )
LABEL_12:
    sub_1C942F0(this, e);
  CommonUI__OpenErrorDialog((CommonUI_o *)Instance, (System_String_o *)StringLiteral_1/*""*/, v6, v7, 1, 0);
  v9 = (System_String_o *)StringLiteral_5293/*"Disk full"*/;
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


void MovieFileMerge__CRCDownloadAndCheck_d__37___ctor(
        MovieFileMerge__CRCDownloadAndCheck_d__37_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool MovieFileMerge__CRCDownloadAndCheck_d__37__MoveNext(
        MovieFileMerge__CRCDownloadAndCheck_d__37_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  const MethodInfo *v3; // x3
  MovieFileMerge__CRCDownloadAndCheck_d__37_o *v4; // x19
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
  if ( (byte_4D2B7B0 & 1) == 0 )
  {
    sub_1C94098(&FileMergeAndSplit_CRCChecker_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__uint__get_Values__);
    sub_1C94098(&Method_System_Linq_Enumerable_ToList_uint___);
    this = (MovieFileMerge__CRCDownloadAndCheck_d__37_o *)sub_1C94098(&FileMergeAndSplit_TypeInfo);
    byte_4D2B7B0 = 1;
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
    sub_1C9403C(
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
      this = (MovieFileMerge__CRCDownloadAndCheck_d__37_o *)FileMergeAndSplit_TypeInfo;
      if ( !FileMergeAndSplit_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(FileMergeAndSplit_TypeInfo);
      if ( _4__this )
      {
        v7 = MovieFileMerge__Download(_4__this, FileMergeAndSplit_TypeInfo->static_fields->PathCRCFileName, 0, v3);
        v4->fields.__2__current = (Il2CppObject *)v7;
        p__2__current = (GrandQuestFolderBoardItem_o *)&v4->fields.__2__current;
        sub_1C9403C(p__2__current, (int32_t)v7, v9, v10, v11, v12, v13, v14);
        result = 1;
        LODWORD(p__2__current[-1].fields._ClosedMessage_k__BackingField) = 1;
        return result;
      }
LABEL_22:
      sub_1C942F0(this, method);
    }
    return 0;
  }
  v4->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_22;
  Dic = MovieFileMerge__CreateDic((MovieFileMerge_o *)this, _4__this->fields.outputMergeFileCRC, v2);
  _4__this->fields.AllDownLoadFilePathCRCDictionary = Dic;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&_4__this->fields.AllDownLoadFilePathCRCDictionary,
    (int32_t)Dic,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  this = (MovieFileMerge__CRCDownloadAndCheck_d__37_o *)_4__this->fields.AllDownLoadFilePathCRCDictionary;
  if ( !this )
    goto LABEL_22;
  outputMergeFile = _4__this->fields.outputMergeFile;
  Values = System_Collections_Generic_Dictionary_object__uint___get_Values(
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)this,
             (const MethodInfo_3532960 *)Method_System_Collections_Generic_Dictionary_string__uint__get_Values__);
  v33 = (System_Collections_Generic_List_uint__o *)System_Linq_Enumerable__ToList_uint_(
                                                     (System_Collections_Generic_IEnumerable_TSource__o *)Values,
                                                     (const MethodInfo_31E16BC *)Method_System_Linq_Enumerable_ToList_uint___);
  v34 = (FileMergeAndSplit_CRCChecker_o *)sub_1C942E4(FileMergeAndSplit_CRCChecker_TypeInfo);
  FileMergeAndSplit_CRCChecker___ctor(v34, outputMergeFile, v33, v35);
  _4__this->fields.crcCheckerClass = v34;
  p_crcCheckerClass = (GrandQuestFolderBoardItem_o *)&_4__this->fields.crcCheckerClass;
  sub_1C9403C(p_crcCheckerClass, (int32_t)v34, v37, v38, v39, v40, v41, v42);
  this = (MovieFileMerge__CRCDownloadAndCheck_d__37_o *)p_crcCheckerClass->klass;
  if ( !p_crcCheckerClass->klass )
    goto LABEL_22;
  v43 = FileMergeAndSplit_CRCChecker__Run((FileMergeAndSplit_CRCChecker_o *)this, method);
  v4->fields.__2__current = (Il2CppObject *)v43;
  v44 = (GrandQuestFolderBoardItem_o *)&v4->fields.__2__current;
  sub_1C9403C(v44, (int32_t)v43, v45, v46, v47, v48, v49, v50);
  LODWORD(v44[-1].fields._ClosedMessage_k__BackingField) = 2;
  return 1;
}


Il2CppObject *MovieFileMerge__CRCDownloadAndCheck_d__37__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        MovieFileMerge__CRCDownloadAndCheck_d__37_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn MovieFileMerge__CRCDownloadAndCheck_d__37__System_Collections_IEnumerator_Reset(
        MovieFileMerge__CRCDownloadAndCheck_d__37_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C940AC(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C942E4(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C940AC(&Method_MovieFileMerge__CRCDownloadAndCheck_d__37_System_Collections_IEnumerator_Reset__);
  sub_1C941C0(v3, v4);
}


Il2CppObject *MovieFileMerge__CRCDownloadAndCheck_d__37__System_Collections_IEnumerator_get_Current(
        MovieFileMerge__CRCDownloadAndCheck_d__37_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void MovieFileMerge__CRCDownloadAndCheck_d__37__System_IDisposable_Dispose(
        MovieFileMerge__CRCDownloadAndCheck_d__37_o *this,
        const MethodInfo *method)
{
  ;
}


void MovieFileMerge__DownloadMovie_d__38___ctor(
        MovieFileMerge__DownloadMovie_d__38_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool MovieFileMerge__DownloadMovie_d__38__MoveNext(
        MovieFileMerge__DownloadMovie_d__38_o *this,
        const MethodInfo *method)
{
  MovieFileMerge__DownloadMovie_d__38_o *v2; // x20
  int32_t _1__state; // w8
  MovieFileMerge_o *_4__this; // x19
  System_Collections_Generic_Dictionary_TKey__TValue__o *RequireDownLoadFilePathCRCDictionary; // x0
  MovieFileMerge__DownloadMovie_d__38_o *v6; // x9
  __int128 v7; // q0
  struct System_Collections_Generic_KeyValuePair_TKey__TValue__o current; // q1
  struct System_Collections_Generic_Dictionary_Enumerator_string__uint__o *p__7__wrap1; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  _BOOL8 v16; // x0
  const MethodInfo *v17; // x1
  const MethodInfo *v18; // x3
  MovieFileMerge__DownloadMovie_d__38_o *v19; // x8
  bool result; // w0
  __int64 v21; // x0
  __int64 v22; // x1
  MovieFileMerge__DownloadMovie_d__38_o *v23; // x8
  Il2CppObject *v24; // x1
  MovieFileMerge__DownloadMovie_d__38_o *v25; // x0
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x4
  int32_t v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v32[2]; // [xsp+8h] [xbp-88h] BYREF
  MovieFileMerge__DownloadMovie_d__38_o **v33; // [xsp+68h] [xbp-28h]
  MovieFileMerge__DownloadMovie_d__38_o *v34; // [xsp+78h] [xbp-18h] BYREF

  v34 = this;
  v2 = this;
  if ( (byte_4D2B7B2 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__uint__GetEnumerator__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_Enumerator_string__uint__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_Enumerator_string__uint__get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_KeyValuePair_string__uint__get_Key__);
    this = (MovieFileMerge__DownloadMovie_d__38_o *)sub_1C94098(&Method_System_Collections_Generic_KeyValuePair_string__uint__get_Value__);
    byte_4D2B7B2 = 1;
  }
  v33 = &v34;
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state != 1 )
  {
    if ( _1__state )
      return 0;
    v2->fields.__1__state = -1;
    if ( !_4__this )
      sub_1C942F0(this, method);
    RequireDownLoadFilePathCRCDictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)_4__this->fields.RequireDownLoadFilePathCRCDictionary;
    _4__this->fields.isDownloading = 1;
    _4__this->fields.downloadProgress = 0;
    if ( !RequireDownLoadFilePathCRCDictionary )
      sub_1C942F0(0, method);
    System_Collections_Generic_Dictionary_object__uint___GetEnumerator(
      v32,
      RequireDownLoadFilePathCRCDictionary,
      (const MethodInfo_3532F20 *)Method_System_Collections_Generic_Dictionary_string__uint__GetEnumerator__);
    v6 = v34;
    v7 = *(_OWORD *)&v32[0].fields._dictionary;
    current = v32[0].fields._current;
    p__7__wrap1 = &v34->fields.__7__wrap1;
    v32[1] = v32[0];
    *(_QWORD *)&v34->fields.__7__wrap1.fields._getEnumeratorRetType = *(_QWORD *)&v32[0].fields._getEnumeratorRetType;
    v6->fields.__7__wrap1.fields._current = current;
    *(_OWORD *)&v6->fields.__7__wrap1.fields._dictionary = v7;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)p__7__wrap1, 0, v10, v11, v12, v13, v14, v15);
    v2 = v34;
  }
  v2->fields.__1__state = -3;
  v16 = System_Collections_Generic_Dictionary_Enumerator_object__uint___MoveNext(
          (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v2->fields.__7__wrap1,
          (const MethodInfo_362306C *)Method_System_Collections_Generic_Dictionary_Enumerator_string__uint__MoveNext__);
  v19 = v34;
  if ( v16 )
  {
    if ( !_4__this )
      sub_1C942F0(v16, v17);
    if ( _4__this->fields.isDownloadCancel )
    {
      _4__this->fields.isDownloading = 0;
      MovieFileMerge__DownloadMovie_d__38____m__Finally1(v19, v17);
      return 0;
    }
    else
    {
      v24 = (Il2CppObject *)MovieFileMerge__Download(
                              _4__this,
                              (System_String_o *)v34->fields.__7__wrap1.fields._current.fields.key,
                              (uint32_t)v34->fields.__7__wrap1.fields._current.fields.value,
                              v18);
      v25 = v34;
      v34->fields.__2__current = v24;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)&v25->fields.__2__current, (int32_t)v24, v26, v27, v28, v29, v30, v31);
      result = 1;
      v34->fields.__1__state = 1;
    }
  }
  else
  {
    MovieFileMerge__DownloadMovie_d__38____m__Finally1(v34, v17);
    v23 = v34;
    *(_QWORD *)&v34->fields.__7__wrap1.fields._getEnumeratorRetType = 0;
    v23->fields.__7__wrap1.fields._current = 0u;
    *(_OWORD *)&v23->fields.__7__wrap1.fields._dictionary = 0u;
    if ( !_4__this )
      sub_1C942F0(v21, v22);
    result = 0;
    _4__this->fields.isDownloading = 0;
  }
  return result;
}


Il2CppObject *MovieFileMerge__DownloadMovie_d__38__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        MovieFileMerge__DownloadMovie_d__38_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn MovieFileMerge__DownloadMovie_d__38__System_Collections_IEnumerator_Reset(
        MovieFileMerge__DownloadMovie_d__38_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C940AC(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C942E4(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C940AC(&Method_MovieFileMerge__DownloadMovie_d__38_System_Collections_IEnumerator_Reset__);
  sub_1C941C0(v3, v4);
}


Il2CppObject *MovieFileMerge__DownloadMovie_d__38__System_Collections_IEnumerator_get_Current(
        MovieFileMerge__DownloadMovie_d__38_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void MovieFileMerge__DownloadMovie_d__38__System_IDisposable_Dispose(
        MovieFileMerge__DownloadMovie_d__38_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8

  _1__state = this->fields.__1__state;
  if ( _1__state == 1 || _1__state == -3 )
    MovieFileMerge__DownloadMovie_d__38____m__Finally1(this, method);
}


void MovieFileMerge__DownloadMovie_d__38____m__Finally1(
        MovieFileMerge__DownloadMovie_d__38_o *this,
        const MethodInfo *method)
{
  if ( (byte_4D2B7B3 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_Enumerator_string__uint__Dispose__);
    byte_4D2B7B3 = 1;
  }
  this->fields.__1__state = -1;
  System_Collections_Generic_Dictionary_Enumerator_object__uint___Dispose(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&this->fields.__7__wrap1,
    (const MethodInfo_3623190 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__uint__Dispose__);
}


void MovieFileMerge__Download_d__45___ctor(
        MovieFileMerge__Download_d__45_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool MovieFileMerge__Download_d__45__MoveNext(MovieFileMerge__Download_d__45_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  MovieFileMerge__Download_d__45_o *v8; // x19
  struct MovieFileMerge_o *_4__this; // x20
  System_String_o *v10; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  const MethodInfo *v17; // x1
  Il2CppObject *LocalFolderPath; // x0
  System_String_o *v19; // x0
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
  uint32_t downloadingCRC; // w8
  int32_t v33; // w2
  int32_t v34; // w3
  System_String_o *v35; // x4
  int32_t v36; // w5
  int64_t v37; // x6
  System_String_o *v38; // x7
  MovieFileMerge__Download_d__45_o *v39; // x21
  int32_t v40; // w1
  int32_t v41; // w2
  int32_t v42; // w3
  System_String_o *v43; // x4
  int32_t v44; // w5
  int64_t v45; // x6
  System_String_o *v46; // x7
  struct System_String_o *v47; // x1
  int32_t v48; // w2
  int32_t v49; // w3
  System_String_o *v50; // x4
  int32_t v51; // w5
  int64_t v52; // x6
  System_String_o *v53; // x7
  int32_t v54; // w1
  int32_t v55; // w2
  int32_t v56; // w3
  System_String_o *v57; // x4
  int32_t v58; // w5
  int64_t v59; // x6
  System_String_o *v60; // x7
  int32_t v61; // w2
  int32_t v62; // w3
  System_String_o *v63; // x4
  int32_t v64; // w5
  int64_t v65; // x6
  System_String_o *v66; // x7
  int32_t v67; // w1
  int32_t v68; // w2
  int32_t v69; // w3
  System_String_o *v70; // x4
  int32_t v71; // w5
  int64_t v72; // x6
  System_String_o *v73; // x7
  int32_t v74; // w2
  int32_t v75; // w3
  System_String_o *v76; // x4
  int32_t v77; // w5
  int64_t v78; // x6
  System_String_o *v79; // x7
  int32_t v80; // w1
  System_String_o *v81; // x0
  int32_t v82; // w2
  int32_t v83; // w3
  System_String_o *v84; // x4
  int32_t v85; // w5
  int64_t v86; // x6
  System_String_o *v87; // x7
  const MethodInfo *v88; // x2
  ManagementManager_c *v89; // x0
  _BOOL4 isDuringStartup; // w22
  Il2CppObject *Instance; // x21
  System_String_o *v92; // x22
  ErrorDialog_ClickDelegate_o *v93; // x23
  System_Byte_array *readData_5__5; // x20
  uint32_t v95; // w0
  Il2CppObject **p__2__current; // x19
  int32_t v97; // w2
  int32_t v98; // w3
  System_String_o *v99; // x4
  int32_t v100; // w5
  int64_t v101; // x6
  System_String_o *v102; // x7
  int v103; // w8
  UnityEngine_WaitForEndOfFrame_o *v104; // x20
  int32_t v105; // w2
  int32_t v106; // w3
  System_String_o *v107; // x4
  int32_t v108; // w5
  int64_t v109; // x6
  System_String_o *v110; // x7
  float unscaledTime; // s8
  UnityEngine_WaitForEndOfFrame_o *v112; // x21
  int32_t v113; // w2
  int32_t v114; // w3
  System_String_o *v115; // x4
  int32_t v116; // w5
  int64_t v117; // x6
  System_String_o *v118; // x7
  MovieFileMerge__Download_d__45_o **p_loader; // x22
  int32_t v120; // w2
  int32_t v121; // w3
  System_String_o *v122; // x4
  int32_t v123; // w5
  int64_t v124; // x6
  System_String_o *v125; // x7
  struct System_String_o **p_errorCode_5__11; // x21
  int32_t v127; // w2
  int32_t v128; // w3
  System_String_o *v129; // x4
  int32_t v130; // w5
  int64_t v131; // x6
  System_String_o *v132; // x7
  System_String_o *error; // x0
  System_Byte_array *data; // x0
  int32_t v135; // w2
  int32_t v136; // w3
  System_String_o *v137; // x4
  int32_t v138; // w5
  int64_t v139; // x6
  System_String_o *v140; // x7
  int32_t v141; // w2
  int32_t v142; // w3
  System_String_o *v143; // x4
  int32_t v144; // w5
  int64_t v145; // x6
  System_String_o *v146; // x7
  UnityEngine_WaitForEndOfFrame_o *v147; // x20
  int32_t v148; // w2
  int32_t v149; // w3
  System_String_o *v150; // x4
  int32_t v151; // w5
  int64_t v152; // x6
  System_String_o *v153; // x7
  int32_t v154; // w2
  int32_t v155; // w3
  System_String_o *v156; // x4
  int32_t v157; // w5
  int64_t v158; // x6
  System_String_o *v159; // x7
  System_String_o *v160; // x0
  int32_t v161; // w2
  int32_t v162; // w3
  System_String_o *v163; // x4
  int32_t v164; // w5
  int64_t v165; // x6
  System_String_o *v166; // x7
  int32_t v167; // w1
  System_IO_DirectoryInfo_o *Parent; // x0
  __int64 v169; // x1
  System_IO_DirectoryInfo_o *v170; // x21
  const MethodInfo *v171; // x1
  System_String_o *v172; // x0
  System_String_o *v173; // x21
  int64_t FreeSize; // x21
  ManagerConfig_c *v175; // x0
  ManagerConfig_c *v176; // x0
  Il2CppObject *v177; // x0
  System_String_o *errorCode_5__11; // x21
  CommonUI_o *v179; // x22
  ErrorDialog_ClickDelegate_o *v180; // x23
  UnityEngine_WaitForEndOfFrame_o *v181; // x20
  int32_t v182; // w2
  int32_t v183; // w3
  System_String_o *v184; // x4
  int32_t v185; // w5
  int64_t v186; // x6
  System_String_o *v187; // x7
  int autoRetryCount_5__3; // w21
  ManagerConfig_c *v189; // x0
  float DOWNLOAD_RETRY_DELAY_TIME; // s8
  UnityEngine_WaitForSeconds_o *v191; // x20
  int32_t v192; // w2
  int32_t v193; // w3
  System_String_o *v194; // x4
  int32_t v195; // w5
  int64_t v196; // x6
  System_String_o *v197; // x7
  Il2CppObject *v198; // x21
  GrandQuestFolderBoardItem_o *v199; // x20
  MovieFileMerge__Download_d__45_o *loader; // t1
  int32_t v201; // w2
  int32_t v202; // w3
  System_String_o *v203; // x4
  int32_t v204; // w5
  int64_t v205; // x6
  System_String_o *v206; // x7
  int32_t v207; // w2
  int32_t v208; // w3
  System_String_o *v209; // x4
  int32_t v210; // w5
  int64_t v211; // x6
  System_String_o *v212; // x7
  GrandQuestFolderBoardItem_o *p_readData_5__5; // x0
  struct UnityEngine_Networking_UnityWebRequest_o **v214; // x21
  int32_t v215; // w2
  int32_t v216; // w3
  System_String_o *v217; // x4
  int32_t v218; // w5
  int64_t v219; // x6
  System_String_o *v220; // x7
  int32_t v221; // w2
  int32_t v222; // w3
  System_String_o *v223; // x4
  int32_t v224; // w5
  int64_t v225; // x6
  System_String_o *v226; // x7
  ManagerConfig_c *v227; // x0
  Il2CppObject *v228; // x0
  System_String_o *v229; // x21
  CommonUI_o *v230; // x22
  ErrorDialog_ClickDelegate_o *v231; // x23
  UnityEngine_WaitForSeconds_o *v232; // x20
  int32_t v233; // w2
  int32_t v234; // w3
  System_String_o *v235; // x4
  int32_t v236; // w5
  int64_t v237; // x6
  System_String_o *v238; // x7
  System_String_o *v239; // x22
  ErrorDialog_ClickDelegate_o *v240; // x23
  UnityEngine_WaitForEndOfFrame_o *v241; // x20
  int32_t v242; // w2
  int32_t v243; // w3
  System_String_o *v244; // x4
  int32_t v245; // w5
  int64_t v246; // x6
  System_String_o *v247; // x7
  int32_t v248; // w2
  int32_t v249; // w3
  System_String_o *v250; // x4
  int32_t v251; // w5
  int64_t v252; // x6
  System_String_o *v253; // x7
  int32_t v254; // w2
  int32_t v255; // w3
  System_String_o *v256; // x4
  int32_t v257; // w5
  int64_t v258; // x6
  System_String_o *v259; // x7
  int32_t v260; // w2
  int32_t v261; // w3
  System_String_o *v262; // x4
  int32_t v263; // w5
  int64_t v264; // x6
  System_String_o *v265; // x7
  float downloadProgress; // s0
  float loadProgress_5__7; // s9
  float v268; // s8
  float v269; // s0
  bool v270; // zf
  float v271; // s8
  System_String_o *downloadingURL; // x22
  System_String_o *v273; // x0
  System_String_o *v274; // x0
  int32_t v275; // w2
  int32_t v276; // w3
  System_String_o *v277; // x4
  int32_t v278; // w5
  int64_t v279; // x6
  System_String_o *v280; // x7
  System_Collections_Generic_Dictionary_string__string__o *ResponseHeaders; // x0
  System_Collections_Generic_Dictionary_object__object__o *v282; // x22
  Il2CppObject *v283; // x22
  MovieFileMerge__Download_d__45_o *v284; // x22
  int v285; // w8
  System_String_o *v286; // x23
  System_String_o *v287; // x0
  System_String_o *v288; // x0
  ManagementManager_c *v289; // x0
  _BOOL4 v290; // w23
  Il2CppObject *v291; // x0
  struct System_String_o *errorLocalizeCode_5__12; // x8
  CommonUI_o *v293; // x22
  System_String_o *v294; // x21
  System_String_o *v295; // x23
  System_String_o *v296; // x23
  ErrorDialog_ClickDelegate_o *v297; // x24
  ManagerConfig_c *v298; // x0
  Il2CppObject *wait_5__8; // x1
  System_String_o *v300; // x23
  System_String_o *v301; // x23
  ErrorDialog_ClickDelegate_o *v302; // x24
  __int64 v303; // x0
  System_IO_IOException_o *v304; // x21
  System_String_o *v305; // x0
  __int64 v306; // x0
  UnityEngine_Networking_UnityWebRequest_o *v307; // x0
  GrandQuestFolderBoardItem_o *v308; // x20
  int32_t v309; // w2
  int32_t v310; // w3
  System_String_o *v311; // x4
  int32_t v312; // w5
  int64_t v313; // x6
  System_String_o *v314; // x7
  GrandQuestFolderBoardItem_o *v315; // x19
  int32_t v316; // w2
  int32_t v317; // w3
  System_String_o *v318; // x4
  int32_t v319; // w5
  int64_t v320; // x6
  System_String_o *v321; // x7
  System_Nullable_Vector2__o effectDistance; // [xsp+0h] [xbp-70h]
  System_Nullable_Vector2__o effectDistancea; // [xsp+0h] [xbp-70h]
  Il2CppObject *value; // [xsp+38h] [xbp-38h] BYREF

  v8 = this;
  if ( (byte_4D2B7B1 & 1) == 0 )
  {
    sub_1C94098(&char___TypeInfo);
    sub_1C94098(&ErrorDialog_ClickDelegate_TypeInfo);
    sub_1C94098(&CommonServicePluginScript_TypeInfo);
    sub_1C94098(&Crc32_TypeInfo);
    sub_1C94098(&UnityEngine_Debug_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__string__TryGetValue__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__string__get_Count__);
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&ManagementManager_TypeInfo);
    sub_1C94098(&ManagerConfig_TypeInfo);
    sub_1C94098(&Method_MovieFileMerge_EndRetryDialog__);
    sub_1C94098(&Method_MovieFileMerge_EndWarningDialog__);
    sub_1C94098(&NetworkManager_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C94098(&string___TypeInfo);
    sub_1C94098(&UnityEngine_WaitForEndOfFrame_TypeInfo);
    sub_1C94098(&UnityEngine_WaitForSeconds_TypeInfo);
    sub_1C94098(&StringLiteral_7274/*"HTTP"*/);
    sub_1C94098(&StringLiteral_759/*")\n\n503 Auto retry count "*/);
    sub_1C94098(&StringLiteral_762/*")\nfile crc ("*/);
    sub_1C94098(&StringLiteral_1419/*"503"*/);
    sub_1C94098(&StringLiteral_2040/*"ASSET_LOADER_ERROR_BOOT_RETRY_MESSAGE"*/);
    sub_1C94098(&StringLiteral_15983/*"[FFFF80]Download error for debug"*/);
    sub_1C94098(&StringLiteral_25409/*"{0}/{1}"*/);
    sub_1C94098(&StringLiteral_12403/*"STATUS"*/);
    sub_1C94098(&StringLiteral_758/*")\n\n"*/);
    sub_1C94098(&StringLiteral_650/*"("*/);
    sub_1C94098(&StringLiteral_760/*")\n\nAssetBundle file check sum error\nlist crc ("*/);
    sub_1C94098(&StringLiteral_756/*")"*/);
    sub_1C94098(&StringLiteral_2041/*"ASSET_LOADER_ERROR_TIME_OVER_MESSAGE"*/);
    sub_1C94098(&StringLiteral_761/*")\n\nAssetBundle file download time over"*/);
    this = (MovieFileMerge__Download_d__45_o *)sub_1C94098(&StringLiteral_1/*""*/);
    byte_4D2B7B1 = 1;
  }
  value = 0;
  _4__this = v8->fields.__4__this;
  switch ( v8->fields.__1__state )
  {
    case 0:
      v8->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_177;
      v10 = System_String__Format_64459052(
              (System_String_o *)StringLiteral_25409/*"{0}/{1}"*/,
              (Il2CppObject *)_4__this->fields.assetFolderURL,
              (Il2CppObject *)v8->fields.fileName,
              0);
      _4__this->fields.downloadingURL = v10;
      sub_1C9403C(
        (GrandQuestFolderBoardItem_o *)&_4__this->fields.downloadingURL,
        (int32_t)v10,
        v11,
        v12,
        v13,
        v14,
        v15,
        v16);
      _4__this->fields.downloadingCRC = v8->fields.crc;
      LocalFolderPath = (Il2CppObject *)MovieFileMerge__GetLocalFolderPath(_4__this, v17);
      v19 = System_String__Format_64459052(
              (System_String_o *)StringLiteral_25409/*"{0}/{1}"*/,
              LocalFolderPath,
              (Il2CppObject *)v8->fields.fileName,
              0);
      v8->fields._dlFilePath_5__2 = v19;
      sub_1C9403C(
        (GrandQuestFolderBoardItem_o *)&v8->fields._dlFilePath_5__2,
        (int32_t)v19,
        v20,
        v21,
        v22,
        v23,
        v24,
        v25);
      v8->fields._autoRetryCount_5__3 = 0;
      v8->fields._isDownload_5__4 = 1;
      _4__this->fields.isErrorDialog = 0;
      goto LABEL_172;
    case 1:
      v8->fields.__1__state = -1;
      unscaledTime = UnityEngine_Time__get_unscaledTime(0);
      this = (MovieFileMerge__Download_d__45_o *)ManagerConfig_TypeInfo;
      if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
        this = (MovieFileMerge__Download_d__45_o *)ManagerConfig_TypeInfo;
      }
      v8->fields._requestTime_5__6 = unscaledTime + *(float *)&this[1].fields._dlFilePath_5__2[1].fields._stringLength;
      if ( !_4__this )
        goto LABEL_177;
      v8->fields._loadProgress_5__7 = 0.0;
      v112 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C942E4(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v112, 0);
      v8->fields._wait_5__8 = v112;
      sub_1C9403C(
        (GrandQuestFolderBoardItem_o *)&v8->fields._wait_5__8,
        (int32_t)v112,
        v113,
        v114,
        v115,
        v116,
        v117,
        v118);
LABEL_42:
      p_loader = (MovieFileMerge__Download_d__45_o **)&_4__this->fields.loader;
      this = (MovieFileMerge__Download_d__45_o *)_4__this->fields.loader;
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
        sub_1C9403C((GrandQuestFolderBoardItem_o *)&_4__this->fields.loader, 0, v154, v155, v156, v157, v158, v159);
        LOBYTE(this) = 0;
        _4__this->fields.isDownloading = 0;
        return (char)this;
      }
      downloadProgress = UnityEngine_Networking_UnityWebRequest__get_downloadProgress(
                           (UnityEngine_Networking_UnityWebRequest_o *)this,
                           0);
      loadProgress_5__7 = v8->fields._loadProgress_5__7;
      v268 = downloadProgress;
      v269 = UnityEngine_Time__get_unscaledTime(0);
      v270 = v268 == loadProgress_5__7;
      v271 = v269;
      if ( !v270 )
      {
        v298 = ManagerConfig_TypeInfo;
        if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
          v298 = ManagerConfig_TypeInfo;
        }
        v8->fields._requestTime_5__6 = v271 + v298->static_fields->TIMEOUT;
        this = *p_loader;
        if ( *p_loader )
        {
          v8->fields._loadProgress_5__7 = UnityEngine_Networking_UnityWebRequest__get_downloadProgress(
                                            (UnityEngine_Networking_UnityWebRequest_o *)this,
                                            0);
LABEL_161:
          wait_5__8 = (Il2CppObject *)v8->fields._wait_5__8;
          v8->fields.__2__current = wait_5__8;
          p__2__current = &v8->fields.__2__current;
          sub_1C9403C(
            (GrandQuestFolderBoardItem_o *)p__2__current,
            (int32_t)wait_5__8,
            v120,
            v121,
            v122,
            v123,
            v124,
            v125);
          v103 = 2;
          goto LABEL_119;
        }
        goto LABEL_177;
      }
      if ( v269 < v8->fields._requestTime_5__6 )
        goto LABEL_161;
LABEL_44:
      *(_WORD *)&v8->fields._isAutoRetry_5__9 = 0;
      v8->fields._errorCode_5__11 = 0;
      p_errorCode_5__11 = &v8->fields._errorCode_5__11;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)&v8->fields._errorCode_5__11, 0, v120, v121, v122, v123, v124, v125);
      v8->fields._errorLocalizeCode_5__12 = 0;
      sub_1C9403C(
        (GrandQuestFolderBoardItem_o *)&v8->fields._errorLocalizeCode_5__12,
        0,
        v127,
        v128,
        v129,
        v130,
        v131,
        v132);
      this = *p_loader;
      if ( !*p_loader )
LABEL_177:
        sub_1C942F0(this, method);
      if ( !UnityEngine_Networking_UnityWebRequest__get_isDone((UnityEngine_Networking_UnityWebRequest_o *)this, 0) )
      {
        v160 = System_String__Concat_64456008(
                 (System_String_o *)StringLiteral_650/*"("*/,
                 _4__this->fields.downloadingURL,
                 (System_String_o *)StringLiteral_761/*")\n\nAssetBundle file download time over"*/,
                 0);
        v167 = (int)v160;
        *p_errorCode_5__11 = v160;
LABEL_63:
        sub_1C9403C(
          (GrandQuestFolderBoardItem_o *)&v8->fields._errorCode_5__11,
          v167,
          v161,
          v162,
          v163,
          v164,
          v165,
          v166);
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
        this = (MovieFileMerge__Download_d__45_o *)UnityEngine_Networking_UnityWebRequest__get_downloadHandler(
                                                     (UnityEngine_Networking_UnityWebRequest_o *)this,
                                                     0);
        if ( !this )
          goto LABEL_177;
        data = UnityEngine_Networking_DownloadHandler__get_data((UnityEngine_Networking_DownloadHandler_o *)this, 0);
        v8->fields._readData_5__5 = data;
        sub_1C9403C(
          (GrandQuestFolderBoardItem_o *)&v8->fields._readData_5__5,
          (int32_t)data,
          v135,
          v136,
          v137,
          v138,
          v139,
          v140);
        v8->fields.__2__current = 0;
        p__2__current = &v8->fields.__2__current;
        sub_1C9403C((GrandQuestFolderBoardItem_o *)p__2__current, 0, v141, v142, v143, v144, v145, v146);
        v103 = 3;
        goto LABEL_119;
      }
      this = (MovieFileMerge__Download_d__45_o *)_4__this->fields.loader;
      if ( !this )
        goto LABEL_177;
      downloadingURL = _4__this->fields.downloadingURL;
      v273 = UnityEngine_Networking_UnityWebRequest__get_error((UnityEngine_Networking_UnityWebRequest_o *)this, 0);
      v274 = System_String__Concat_64458012(
               (System_String_o *)StringLiteral_650/*"("*/,
               downloadingURL,
               (System_String_o *)StringLiteral_758/*")\n\n"*/,
               v273,
               0);
      *p_errorCode_5__11 = v274;
      sub_1C9403C(
        (GrandQuestFolderBoardItem_o *)&v8->fields._errorCode_5__11,
        (int32_t)v274,
        v275,
        v276,
        v277,
        v278,
        v279,
        v280);
      this = (MovieFileMerge__Download_d__45_o *)_4__this->fields.loader;
      if ( !this )
        goto LABEL_177;
      ResponseHeaders = UnityEngine_Networking_UnityWebRequest__GetResponseHeaders(
                          (UnityEngine_Networking_UnityWebRequest_o *)this,
                          0);
      if ( !ResponseHeaders )
        break;
      v282 = (System_Collections_Generic_Dictionary_object__object__o *)ResponseHeaders;
      if ( System_Collections_Generic_Dictionary_object__object___get_Count(
             (System_Collections_Generic_Dictionary_object__object__o *)ResponseHeaders,
             (const MethodInfo_35208C4 *)Method_System_Collections_Generic_Dictionary_string__string__get_Count__) < 1
        || !System_Collections_Generic_Dictionary_object__object___TryGetValue(
              v282,
              (Il2CppObject *)StringLiteral_12403/*"STATUS"*/,
              &value,
              (const MethodInfo_3522400 *)Method_System_Collections_Generic_Dictionary_string__string__TryGetValue__) )
      {
        break;
      }
      v283 = value;
      this = (MovieFileMerge__Download_d__45_o *)sub_1C94140(char___TypeInfo, 1);
      if ( !this )
        goto LABEL_177;
      method = (const MethodInfo *)this;
      if ( !LODWORD(this->fields.__2__current) )
        goto LABEL_169;
      LOWORD(this->fields.__4__this) = 32;
      if ( !v283 )
        goto LABEL_177;
      this = (MovieFileMerge__Download_d__45_o *)System_String__Split_64466952(
                                                   (System_String_o *)v283,
                                                   (System_Char_array *)this,
                                                   1,
                                                   0);
      if ( !this )
        goto LABEL_177;
      v284 = this;
      if ( SLODWORD(this->fields.__2__current) < 2 )
        break;
      this = (MovieFileMerge__Download_d__45_o *)this->fields.__4__this;
      if ( !this )
        goto LABEL_177;
      this = (MovieFileMerge__Download_d__45_o *)System_String__StartsWith(
                                                   (System_String_o *)this,
                                                   (System_String_o *)StringLiteral_7274/*"HTTP"*/,
                                                   0);
      if ( ((unsigned __int8)this & 1) == 0 )
        break;
      if ( LODWORD(v284->fields.__2__current) <= 1 )
        goto LABEL_169;
      this = (MovieFileMerge__Download_d__45_o *)v284->fields.fileName;
      if ( !this )
        goto LABEL_177;
      if ( System_String__Equals_64453064((System_String_o *)this, (System_String_o *)StringLiteral_1419/*"503"*/, 0) )
      {
        v285 = v8->fields._autoRetryCount_5__3 + 1;
        v8->fields._isAutoRetry_5__9 = 1;
        v8->fields._autoRetryCount_5__3 = v285;
        v286 = _4__this->fields.downloadingURL;
        v287 = System_Int32__ToString((int)v8 + 64, 0);
        v288 = System_String__Concat_64458012(
                 (System_String_o *)StringLiteral_650/*"("*/,
                 v286,
                 (System_String_o *)StringLiteral_759/*")\n\n503 Auto retry count "*/,
                 v287,
                 0);
        v167 = (int)v288;
        v8->fields._errorCode_5__11 = v288;
        goto LABEL_63;
      }
      break;
    case 2:
      v8->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_177;
      goto LABEL_42;
    case 3:
      v8->fields.__1__state = -1;
      readData_5__5 = v8->fields._readData_5__5;
      if ( !Crc32_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
      v95 = Crc32__Compute(readData_5__5, 0);
      v8->fields.__2__current = 0;
      p__2__current = &v8->fields.__2__current;
      *((_DWORD *)p__2__current + 24) = v95;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)p__2__current, 0, v97, v98, v99, v100, v101, v102);
      v103 = 4;
      goto LABEL_119;
    case 4:
      v8->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_177;
      downloadingCRC = _4__this->fields.downloadingCRC;
      if ( v8->fields._downloadCrc_5__13 != downloadingCRC && downloadingCRC )
      {
        this = (MovieFileMerge__Download_d__45_o *)sub_1C94140(string___TypeInfo, 7);
        if ( !this )
          goto LABEL_177;
        v39 = this;
        if ( LODWORD(this->fields.__2__current) )
        {
          v40 = StringLiteral_650/*"("*/;
          this->fields.__4__this = (struct MovieFileMerge_o *)StringLiteral_650/*"("*/;
          sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.__4__this, v40, v33, v34, v35, v36, v37, v38);
          if ( LODWORD(v39->fields.__2__current) > 1 )
          {
            v47 = _4__this->fields.downloadingURL;
            v39->fields.fileName = v47;
            sub_1C9403C(
              (GrandQuestFolderBoardItem_o *)&v39->fields.fileName,
              (int32_t)v47,
              v41,
              v42,
              v43,
              v44,
              v45,
              v46);
            if ( LODWORD(v39->fields.__2__current) > 2 )
            {
              v54 = StringLiteral_760/*")\n\nAssetBundle file check sum error\nlist crc ("*/;
              *(_QWORD *)&v39->fields.crc = StringLiteral_760/*")\n\nAssetBundle file check sum error\nlist crc ("*/;
              sub_1C9403C((GrandQuestFolderBoardItem_o *)&v39->fields.crc, v54, v48, v49, v50, v51, v52, v53);
              this = (MovieFileMerge__Download_d__45_o *)System_UInt32__ToString((int)_4__this + 96, 0);
              if ( LODWORD(v39->fields.__2__current) > 3 )
              {
                v39->fields._dlFilePath_5__2 = (struct System_String_o *)this;
                sub_1C9403C(
                  (GrandQuestFolderBoardItem_o *)&v39->fields._dlFilePath_5__2,
                  (int32_t)this,
                  v55,
                  v56,
                  v57,
                  v58,
                  v59,
                  v60);
                if ( LODWORD(v39->fields.__2__current) > 4 )
                {
                  v67 = StringLiteral_762/*")\nfile crc ("*/;
                  *(_QWORD *)&v39->fields._autoRetryCount_5__3 = StringLiteral_762/*")\nfile crc ("*/;
                  sub_1C9403C(
                    (GrandQuestFolderBoardItem_o *)&v39->fields._autoRetryCount_5__3,
                    v67,
                    v61,
                    v62,
                    v63,
                    v64,
                    v65,
                    v66);
                  this = (MovieFileMerge__Download_d__45_o *)System_UInt32__ToString((int)v8 + 120, 0);
                  if ( LODWORD(v39->fields.__2__current) > 5 )
                  {
                    v39->fields._readData_5__5 = (struct System_Byte_array *)this;
                    sub_1C9403C(
                      (GrandQuestFolderBoardItem_o *)&v39->fields._readData_5__5,
                      (int32_t)this,
                      v68,
                      v69,
                      v70,
                      v71,
                      v72,
                      v73);
                    if ( LODWORD(v39->fields.__2__current) > 6 )
                    {
                      v80 = StringLiteral_756/*")"*/;
                      *(_QWORD *)&v39->fields._requestTime_5__6 = StringLiteral_756/*")"*/;
                      sub_1C9403C(
                        (GrandQuestFolderBoardItem_o *)&v39->fields._requestTime_5__6,
                        v80,
                        v74,
                        v75,
                        v76,
                        v77,
                        v78,
                        v79);
                      v81 = System_String__Concat_64458276((System_String_array *)v39, 0);
                      v8->fields._errorCode_5__11 = v81;
                      sub_1C9403C(
                        (GrandQuestFolderBoardItem_o *)&v8->fields._errorCode_5__11,
                        (int32_t)v81,
                        v82,
                        v83,
                        v84,
                        v85,
                        v86,
                        v87);
                      v8->fields._isCrcError_5__10 = 1;
                      break;
                    }
                  }
                }
              }
            }
          }
        }
LABEL_169:
        sub_1C942F8(this);
      }
      Parent = System_IO_Directory__GetParent(v8->fields._dlFilePath_5__2, 0);
      v170 = Parent;
      if ( !Parent )
        sub_1C942F0(0, v169);
      if ( (((__int64 (__fastcall *)(System_IO_DirectoryInfo_o *, const MethodInfo *))Parent->klass->vtable._10_get_Exists.methodPtr)(
              Parent,
              Parent->klass->vtable._10_get_Exists.method)
          & 1) == 0 )
      {
        v172 = (System_String_o *)((__int64 (__fastcall *)(System_IO_DirectoryInfo_o *, const MethodInfo *))v170->klass->vtable._8_get_FullName.methodPtr)(
                                    v170,
                                    v170->klass->vtable._8_get_FullName.method);
        System_IO_Directory__CreateDirectory(v172, 0);
      }
      v173 = MovieFileMerge__GetLocalFolderPath(_4__this, v171);
      if ( !CommonServicePluginScript_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CommonServicePluginScript_TypeInfo);
      FreeSize = CommonServicePluginScript__GetFreeSize(v173, 0);
      if ( FreeSize < 0 )
        goto LABEL_170;
      v175 = ManagerConfig_TypeInfo;
      if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
        v175 = ManagerConfig_TypeInfo;
      }
      if ( FreeSize < v175->static_fields->LIMIT_FREE_SIZE )
      {
LABEL_170:
        v303 = sub_1C940AC(&System_IO_IOException_TypeInfo);
        v304 = (System_IO_IOException_o *)sub_1C942E4(v303);
        v305 = (System_String_o *)sub_1C940AC(&StringLiteral_5293/*"Disk full"*/);
        System_IO_IOException___ctor_65234864(v304, v305, 0);
        v306 = sub_1C940AC(&Method_MovieFileMerge__Download_d__45_MoveNext__);
        sub_1C941C0(v304, v306);
      }
      if ( System_IO_File__Exists(v8->fields._dlFilePath_5__2, 0) )
        System_IO_File__Delete(v8->fields._dlFilePath_5__2, 0);
      ++_4__this->fields.downloadProgress;
      System_IO_File__WriteAllBytes(v8->fields._dlFilePath_5__2, v8->fields._readData_5__5, 0);
      v8->fields._isDownload_5__4 = 0;
      break;
    case 5:
      v8->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_177;
      goto LABEL_82;
    case 6:
      v8->fields.__1__state = -1;
      goto LABEL_92;
    case 7:
      v8->fields.__1__state = -1;
      if ( _4__this )
        goto LABEL_36;
      goto LABEL_177;
    case 8:
      v8->fields.__1__state = -1;
      if ( _4__this )
        goto LABEL_57;
      goto LABEL_177;
    case 9:
      v8->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_177;
      _4__this->fields.isErrorDialog = 1;
      if ( !ManagementManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
      if ( !byte_4D2B7C8 )
      {
        sub_1C94098(&ManagementManager_TypeInfo);
        byte_4D2B7C8 = 1;
      }
      v89 = ManagementManager_TypeInfo;
      if ( !ManagementManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
        v89 = ManagementManager_TypeInfo;
      }
      isDuringStartup = v89->static_fields->isDuringStartup;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      if ( isDuringStartup )
      {
        v92 = LocalizationManager__Get((System_String_o *)StringLiteral_2040/*"ASSET_LOADER_ERROR_BOOT_RETRY_MESSAGE"*/, 0);
        v93 = (ErrorDialog_ClickDelegate_o *)sub_1C942E4(ErrorDialog_ClickDelegate_TypeInfo);
        ErrorDialog_ClickDelegate___ctor(v93, (Il2CppObject *)_4__this, Method_MovieFileMerge_EndRetryDialog__, 0);
        if ( !Instance )
          goto LABEL_177;
        CommonUI__OpenRetryBootDialog((CommonUI_o *)Instance, (System_String_o *)StringLiteral_1/*""*/, v92, v93, 1, 0);
      }
      else
      {
        v239 = LocalizationManager__Get((System_String_o *)StringLiteral_2041/*"ASSET_LOADER_ERROR_TIME_OVER_MESSAGE"*/, 0);
        v240 = (ErrorDialog_ClickDelegate_o *)sub_1C942E4(ErrorDialog_ClickDelegate_TypeInfo);
        ErrorDialog_ClickDelegate___ctor(v240, (Il2CppObject *)_4__this, Method_MovieFileMerge_EndRetryDialog__, 0);
        if ( !Instance )
          goto LABEL_177;
        CommonUI__OpenRetryDialog((CommonUI_o *)Instance, (System_String_o *)StringLiteral_1/*""*/, v239, v240, 1, 0);
      }
LABEL_117:
      if ( !_4__this->fields.isErrorDialog )
        goto LABEL_120;
      v241 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C942E4(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v241, 0);
      v8->fields.__2__current = (Il2CppObject *)v241;
      p__2__current = &v8->fields.__2__current;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)p__2__current, (int32_t)v241, v242, v243, v244, v245, v246, v247);
      v103 = 10;
      goto LABEL_119;
    case 0xA:
      v8->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_177;
      goto LABEL_117;
    default:
      goto LABEL_103;
  }
  method = (const MethodInfo *)v8->fields._errorCode_5__11;
  if ( method )
  {
    MovieFileMerge__AssetLoadLogError(_4__this, (System_String_o *)method, v88);
    v176 = ManagerConfig_TypeInfo;
    if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
      v176 = ManagerConfig_TypeInfo;
    }
    if ( v176->static_fields->UseDebugCommand )
    {
      _4__this->fields.isErrorDialog = 1;
      v177 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      errorCode_5__11 = v8->fields._errorCode_5__11;
      v179 = (CommonUI_o *)v177;
      v180 = (ErrorDialog_ClickDelegate_o *)sub_1C942E4(ErrorDialog_ClickDelegate_TypeInfo);
      ErrorDialog_ClickDelegate___ctor(v180, (Il2CppObject *)_4__this, Method_MovieFileMerge_EndWarningDialog__, 0);
      if ( !v179 )
        goto LABEL_177;
      *(_QWORD *)&effectDistance.fields.hasValue = 0;
      effectDistance.fields.value.fields.y = 0.0;
      CommonUI__OpenWarningDialog(
        v179,
        (System_String_o *)StringLiteral_15983/*"[FFFF80]Download error for debug"*/,
        errorCode_5__11,
        v180,
        1,
        0,
        -1.0,
        1,
        effectDistance,
        0);
LABEL_82:
      if ( _4__this->fields.isErrorDialog )
      {
        v181 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C942E4(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v181, 0);
        v8->fields.__2__current = (Il2CppObject *)v181;
        p__2__current = &v8->fields.__2__current;
        sub_1C9403C((GrandQuestFolderBoardItem_o *)p__2__current, (int32_t)v181, v182, v183, v184, v185, v186, v187);
        v103 = 5;
        goto LABEL_119;
      }
    }
    if ( v8->fields._isAutoRetry_5__9 )
    {
      autoRetryCount_5__3 = v8->fields._autoRetryCount_5__3;
      v189 = ManagerConfig_TypeInfo;
      if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
        v189 = ManagerConfig_TypeInfo;
      }
      DOWNLOAD_RETRY_DELAY_TIME = v189->static_fields->DOWNLOAD_RETRY_DELAY_TIME;
      v191 = (UnityEngine_WaitForSeconds_o *)sub_1C942E4(UnityEngine_WaitForSeconds_TypeInfo);
      UnityEngine_WaitForSeconds___ctor(v191, DOWNLOAD_RETRY_DELAY_TIME * (float)autoRetryCount_5__3, 0);
      v8->fields.__2__current = (Il2CppObject *)v191;
      p__2__current = &v8->fields.__2__current;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)p__2__current, (int32_t)v191, v192, v193, v194, v195, v196, v197);
      v103 = 6;
      goto LABEL_119;
    }
    if ( v8->fields._isCrcError_5__10 )
    {
      v198 = (Il2CppObject *)v8->fields._errorCode_5__11;
      if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
      UnityEngine_Debug__LogError(v198, 0);
    }
    else
    {
      MovieFileMerge__AssetLoadLogError(_4__this, v8->fields._errorCode_5__11, v2);
      _4__this->fields.isErrorDialog = 1;
      if ( !ManagementManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
      if ( !byte_4D2B7C8 )
      {
        sub_1C94098(&ManagementManager_TypeInfo);
        byte_4D2B7C8 = 1;
      }
      v289 = ManagementManager_TypeInfo;
      if ( !ManagementManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
        v289 = ManagementManager_TypeInfo;
      }
      v290 = v289->static_fields->isDuringStartup;
      v291 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      errorLocalizeCode_5__12 = v8->fields._errorLocalizeCode_5__12;
      v293 = (CommonUI_o *)v291;
      v294 = (System_String_o *)StringLiteral_1/*""*/;
      if ( v290 )
      {
        if ( errorLocalizeCode_5__12 )
          v295 = v8->fields._errorLocalizeCode_5__12;
        else
          v295 = (System_String_o *)StringLiteral_2040/*"ASSET_LOADER_ERROR_BOOT_RETRY_MESSAGE"*/;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v296 = LocalizationManager__Get(v295, 0);
        v297 = (ErrorDialog_ClickDelegate_o *)sub_1C942E4(ErrorDialog_ClickDelegate_TypeInfo);
        ErrorDialog_ClickDelegate___ctor(v297, (Il2CppObject *)_4__this, Method_MovieFileMerge_EndRetryDialog__, 0);
        if ( !v293 )
          goto LABEL_177;
        CommonUI__OpenRetryBootDialog(v293, v294, v296, v297, 1, 0);
      }
      else
      {
        if ( errorLocalizeCode_5__12 )
          v300 = v8->fields._errorLocalizeCode_5__12;
        else
          v300 = (System_String_o *)StringLiteral_2041/*"ASSET_LOADER_ERROR_TIME_OVER_MESSAGE"*/;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v301 = LocalizationManager__Get(v300, 0);
        v302 = (ErrorDialog_ClickDelegate_o *)sub_1C942E4(ErrorDialog_ClickDelegate_TypeInfo);
        ErrorDialog_ClickDelegate___ctor(v302, (Il2CppObject *)_4__this, Method_MovieFileMerge_EndRetryDialog__, 0);
        if ( !v293 )
          goto LABEL_177;
        CommonUI__OpenRetryDialog(v293, v294, v301, v302, 1, 0);
      }
LABEL_36:
      if ( _4__this->fields.isErrorDialog )
      {
        v104 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C942E4(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v104, 0);
        v8->fields.__2__current = (Il2CppObject *)v104;
        p__2__current = &v8->fields.__2__current;
        sub_1C9403C((GrandQuestFolderBoardItem_o *)p__2__current, (int32_t)v104, v105, v106, v107, v108, v109, v110);
        v103 = 7;
        goto LABEL_119;
      }
    }
  }
LABEL_92:
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4D27B37 )
  {
    sub_1C94098(&NetworkManager_TypeInfo);
    byte_4D27B37 = 1;
  }
  this = (MovieFileMerge__Download_d__45_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    this = (MovieFileMerge__Download_d__45_o *)NetworkManager_TypeInfo;
  }
  if ( LOBYTE(this[1].fields._dlFilePath_5__2[6].klass) )
  {
    if ( !_4__this )
      goto LABEL_177;
    loader = (MovieFileMerge__Download_d__45_o *)_4__this->fields.loader;
    v199 = (GrandQuestFolderBoardItem_o *)&_4__this->fields.loader;
    this = loader;
    if ( !loader )
      goto LABEL_177;
    UnityEngine_Networking_UnityWebRequest__Dispose((UnityEngine_Networking_UnityWebRequest_o *)this, 0);
    v199->klass = 0;
    sub_1C9403C(v199, 0, v201, v202, v203, v204, v205, v206);
    v8->fields._readData_5__5 = 0;
    p_readData_5__5 = (GrandQuestFolderBoardItem_o *)&v8->fields._readData_5__5;
  }
  else
  {
    if ( !_4__this )
      goto LABEL_177;
    v214 = &_4__this->fields.loader;
    this = (MovieFileMerge__Download_d__45_o *)_4__this->fields.loader;
    if ( v8->fields._isDownload_5__4 )
    {
      if ( !this )
        goto LABEL_177;
      UnityEngine_Networking_UnityWebRequest__Dispose((UnityEngine_Networking_UnityWebRequest_o *)this, 0);
      *v214 = 0;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)&_4__this->fields.loader, 0, v215, v216, v217, v218, v219, v220);
      v8->fields._readData_5__5 = 0;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)&v8->fields._readData_5__5, 0, v221, v222, v223, v224, v225, v226);
      if ( !v8->fields._isCrcError_5__10 )
      {
LABEL_120:
        v8->fields._wait_5__8 = 0;
        sub_1C9403C((GrandQuestFolderBoardItem_o *)&v8->fields._wait_5__8, 0, (int32_t)v2, v3, v4, v5, v6, v7);
        v8->fields._errorCode_5__11 = 0;
        sub_1C9403C((GrandQuestFolderBoardItem_o *)&v8->fields._errorCode_5__11, 0, v248, v249, v250, v251, v252, v253);
        v8->fields._errorLocalizeCode_5__12 = 0;
        sub_1C9403C(
          (GrandQuestFolderBoardItem_o *)&v8->fields._errorLocalizeCode_5__12,
          0,
          v254,
          v255,
          v256,
          v257,
          v258,
          v259);
        do
        {
          v8->fields._readData_5__5 = 0;
          sub_1C9403C((GrandQuestFolderBoardItem_o *)&v8->fields._readData_5__5, 0, v260, v261, v262, v263, v264, v265);
LABEL_172:
          v8->fields._readData_5__5 = 0;
          sub_1C9403C((GrandQuestFolderBoardItem_o *)&v8->fields._readData_5__5, 0, v26, v27, v28, v29, v30, v31);
        }
        while ( !v8->fields._isDownload_5__4 );
        v307 = UnityEngine_Networking_UnityWebRequest__Get(_4__this->fields.downloadingURL, 0);
        _4__this->fields.loader = v307;
        v308 = (GrandQuestFolderBoardItem_o *)&_4__this->fields.loader;
        sub_1C9403C(v308, (int32_t)v307, v309, v310, v311, v312, v313, v314);
        this = (MovieFileMerge__Download_d__45_o *)v308->klass;
        if ( v308->klass )
        {
          UnityEngine_Networking_UnityWebRequest__SendWebRequest((UnityEngine_Networking_UnityWebRequest_o *)this, 0);
          v8->fields.__2__current = 0;
          v315 = (GrandQuestFolderBoardItem_o *)&v8->fields.__2__current;
          sub_1C9403C(v315, 0, v316, v317, v318, v319, v320, v321);
          LOBYTE(this) = 1;
          LODWORD(v315[-1].fields._ClosedMessage_k__BackingField) = 1;
          return (char)this;
        }
        goto LABEL_177;
      }
      if ( !v8->fields._errorCode_5__11 )
        goto LABEL_114;
      v227 = ManagerConfig_TypeInfo;
      if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
        v227 = ManagerConfig_TypeInfo;
      }
      if ( !v227->static_fields->UseDebugCommand )
        goto LABEL_114;
      _4__this->fields.isErrorDialog = 1;
      v228 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v229 = v8->fields._errorCode_5__11;
      v230 = (CommonUI_o *)v228;
      v231 = (ErrorDialog_ClickDelegate_o *)sub_1C942E4(ErrorDialog_ClickDelegate_TypeInfo);
      ErrorDialog_ClickDelegate___ctor(v231, (Il2CppObject *)_4__this, Method_MovieFileMerge_EndWarningDialog__, 0);
      if ( !v230 )
        goto LABEL_177;
      *(_QWORD *)&effectDistancea.fields.hasValue = 0;
      effectDistancea.fields.value.fields.y = 0.0;
      CommonUI__OpenWarningDialog(
        v230,
        (System_String_o *)StringLiteral_15983/*"[FFFF80]Download error for debug"*/,
        v229,
        v231,
        1,
        0,
        -1.0,
        1,
        effectDistancea,
        0);
LABEL_57:
      if ( _4__this->fields.isErrorDialog )
      {
        v147 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C942E4(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v147, 0);
        v8->fields.__2__current = (Il2CppObject *)v147;
        p__2__current = &v8->fields.__2__current;
        sub_1C9403C((GrandQuestFolderBoardItem_o *)p__2__current, (int32_t)v147, v148, v149, v150, v151, v152, v153);
        v103 = 8;
      }
      else
      {
LABEL_114:
        v232 = (UnityEngine_WaitForSeconds_o *)sub_1C942E4(UnityEngine_WaitForSeconds_TypeInfo);
        UnityEngine_WaitForSeconds___ctor(v232, 1.0, 0);
        v8->fields.__2__current = (Il2CppObject *)v232;
        p__2__current = &v8->fields.__2__current;
        sub_1C9403C((GrandQuestFolderBoardItem_o *)p__2__current, (int32_t)v232, v233, v234, v235, v236, v237, v238);
        v103 = 9;
      }
LABEL_119:
      *((_DWORD *)p__2__current - 2) = v103;
      LOBYTE(this) = 1;
      return (char)this;
    }
    if ( !this )
      return (char)this;
    UnityEngine_Networking_UnityWebRequest__Dispose((UnityEngine_Networking_UnityWebRequest_o *)this, 0);
    p_readData_5__5 = (GrandQuestFolderBoardItem_o *)&_4__this->fields.loader;
    *v214 = 0;
  }
  sub_1C9403C(p_readData_5__5, 0, v207, v208, v209, v210, v211, v212);
LABEL_103:
  LOBYTE(this) = 0;
  return (char)this;
}


Il2CppObject *MovieFileMerge__Download_d__45__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        MovieFileMerge__Download_d__45_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn MovieFileMerge__Download_d__45__System_Collections_IEnumerator_Reset(
        MovieFileMerge__Download_d__45_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C940AC(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C942E4(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C940AC(&Method_MovieFileMerge__Download_d__45_System_Collections_IEnumerator_Reset__);
  sub_1C941C0(v3, v4);
}


Il2CppObject *MovieFileMerge__Download_d__45__System_Collections_IEnumerator_get_Current(
        MovieFileMerge__Download_d__45_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void MovieFileMerge__Download_d__45__System_IDisposable_Dispose(
        MovieFileMerge__Download_d__45_o *this,
        const MethodInfo *method)
{
  ;
}


void MovieFileMerge__Merge_d__39___ctor(
        MovieFileMerge__Merge_d__39_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool MovieFileMerge__Merge_d__39__MoveNext(MovieFileMerge__Merge_d__39_o *this, const MethodInfo *method)
{
  MovieFileMerge__Merge_d__39_o *v2; // x19
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
  if ( (byte_4D2B7B4 & 1) == 0 )
  {
    sub_1C94098(&System_Action_Exception__TypeInfo);
    sub_1C94098(&FileMergeAndSplit_CRCChecker_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__uint__get_Values__);
    sub_1C94098(&Method_System_Linq_Enumerable_ToList_uint___);
    sub_1C94098(&FileMergeAndSplit_Merge_TypeInfo);
    this = (MovieFileMerge__Merge_d__39_o *)sub_1C94098(&Method_MovieFileMerge__Merge_b__39_0__);
    byte_4D2B7B4 = 1;
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
        v8 = (FileMergeAndSplit_Merge_o *)sub_1C942E4(FileMergeAndSplit_Merge_TypeInfo);
        FileMergeAndSplit_Merge___ctor(v8, v7, outputMergeFile, v9);
        _4__this->fields.mergeClass = v8;
        sub_1C9403C(
          (GrandQuestFolderBoardItem_o *)&_4__this->fields.mergeClass,
          (int32_t)v8,
          v10,
          v11,
          v12,
          v13,
          v14,
          v15);
        mergeClass = _4__this->fields.mergeClass;
        v17 = (System_Action_object__o *)sub_1C942E4(System_Action_Exception__TypeInfo);
        System_Action_object____ctor(v17, (Il2CppObject *)_4__this, Method_MovieFileMerge__Merge_b__39_0__, 0);
        if ( mergeClass )
        {
          v19 = FileMergeAndSplit_Merge__Run(mergeClass, (System_Action_Exception__o *)v17, v18);
          v2->fields.__2__current = (Il2CppObject *)v19;
          p__2__current = (GrandQuestFolderBoardItem_o *)&v2->fields.__2__current;
          sub_1C9403C(p__2__current, (int32_t)v19, v21, v22, v23, v24, v25, v26);
          result = 1;
          LODWORD(p__2__current[-1].fields._ClosedMessage_k__BackingField) = 1;
          return result;
        }
      }
LABEL_23:
      sub_1C942F0(this, method);
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
  this = (MovieFileMerge__Merge_d__39_o *)_4__this->fields.AllDownLoadFilePathCRCDictionary;
  if ( !this )
    goto LABEL_23;
  v30 = _4__this->fields.outputMergeFile;
  Values = System_Collections_Generic_Dictionary_object__uint___get_Values(
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)this,
             (const MethodInfo_3532960 *)Method_System_Collections_Generic_Dictionary_string__uint__get_Values__);
  v32 = (System_Collections_Generic_List_uint__o *)System_Linq_Enumerable__ToList_uint_(
                                                     (System_Collections_Generic_IEnumerable_TSource__o *)Values,
                                                     (const MethodInfo_31E16BC *)Method_System_Linq_Enumerable_ToList_uint___);
  v33 = (FileMergeAndSplit_CRCChecker_o *)sub_1C942E4(FileMergeAndSplit_CRCChecker_TypeInfo);
  FileMergeAndSplit_CRCChecker___ctor(v33, v30, v32, v34);
  _4__this->fields.crcCheckerClass = v33;
  p_crcCheckerClass = (GrandQuestFolderBoardItem_o *)&_4__this->fields.crcCheckerClass;
  sub_1C9403C(p_crcCheckerClass, (int32_t)v33, v36, v37, v38, v39, v40, v41);
  this = (MovieFileMerge__Merge_d__39_o *)p_crcCheckerClass->klass;
  if ( !p_crcCheckerClass->klass )
    goto LABEL_23;
  v42 = FileMergeAndSplit_CRCChecker__Run((FileMergeAndSplit_CRCChecker_o *)this, method);
  v2->fields.__2__current = (Il2CppObject *)v42;
  v43 = (GrandQuestFolderBoardItem_o *)&v2->fields.__2__current;
  sub_1C9403C(v43, (int32_t)v42, v44, v45, v46, v47, v48, v49);
  LODWORD(v43[-1].fields._ClosedMessage_k__BackingField) = 2;
  return 1;
}


Il2CppObject *MovieFileMerge__Merge_d__39__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        MovieFileMerge__Merge_d__39_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn MovieFileMerge__Merge_d__39__System_Collections_IEnumerator_Reset(
        MovieFileMerge__Merge_d__39_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C940AC(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C942E4(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C940AC(&Method_MovieFileMerge__Merge_d__39_System_Collections_IEnumerator_Reset__);
  sub_1C941C0(v3, v4);
}


Il2CppObject *MovieFileMerge__Merge_d__39__System_Collections_IEnumerator_get_Current(
        MovieFileMerge__Merge_d__39_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void MovieFileMerge__Merge_d__39__System_IDisposable_Dispose(
        MovieFileMerge__Merge_d__39_o *this,
        const MethodInfo *method)
{
  ;
}


void MovieFileMerge__PlayCRIMovie_d__35___ctor(
        MovieFileMerge__PlayCRIMovie_d__35_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool MovieFileMerge__PlayCRIMovie_d__35__MoveNext(MovieFileMerge__PlayCRIMovie_d__35_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  MovieFileMerge__PlayCRIMovie_d__35_o *v8; // x19
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
  MovieFileMerge__PlayCRIMovie_d__35_o *v21; // x21
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
  struct MovieFileMerge___c__DisplayClass35_0_o *_8__1; // x8
  GrandQuestFolderBoardItem_o *p__2__current; // x19
  bool result; // w0

  v8 = this;
  if ( (byte_4D2B7B5 & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&BgmManager_TypeInfo);
    sub_1C94098(&Method_UnityEngine_GameObject_GetComponent_CRIMoviePlayer___);
    sub_1C94098(&Method_UnityEngine_GameObject_GetComponent_UIPanel___);
    sub_1C94098(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&Method_UnityEngine_Resources_Load_GameObject___);
    sub_1C94098(&Method_MovieFileMerge___c__DisplayClass35_0__PlayCRIMovie_b__0__);
    sub_1C94098(&MovieFileMerge___c__DisplayClass35_0_TypeInfo);
    this = (MovieFileMerge__PlayCRIMovie_d__35_o *)sub_1C94098(&StringLiteral_3925/*"CRIMovie/CRIMoviePlayerWithPanel"*/);
    byte_4D2B7B5 = 1;
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
    v11 = (Il2CppObject *)sub_1C942E4(MovieFileMerge___c__DisplayClass35_0_TypeInfo);
    System_Object___ctor(v11, 0);
    v8->fields.__8__1 = (struct MovieFileMerge___c__DisplayClass35_0_o *)v11;
    p__8__1 = (Il2CppObject **)&v8->fields.__8__1;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&v8->fields.__8__1, (int32_t)v11, v13, v14, v15, v16, v17, v18);
    object = UnityEngine_Resources__Load_object_(
               (System_String_o *)StringLiteral_3925/*"CRIMovie/CRIMoviePlayerWithPanel"*/,
               (const MethodInfo_3239828 *)Method_UnityEngine_Resources_Load_GameObject___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (MovieFileMerge__PlayCRIMovie_d__35_o *)UnityEngine_Object__Instantiate_object_(
                                                     object,
                                                     (const MethodInfo_3229578 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !this )
      goto LABEL_32;
    v20 = *p__8__1;
    v21 = this;
    this = (MovieFileMerge__PlayCRIMovie_d__35_o *)UnityEngine_GameObject__GetComponent_object_(
                                                     (UnityEngine_GameObject_o *)this,
                                                     (const MethodInfo_31F4790 *)Method_UnityEngine_GameObject_GetComponent_CRIMoviePlayer___);
    if ( !v20 )
      goto LABEL_32;
    v20[1].klass = (Il2CppClass *)this;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&v20[1], (int32_t)this, v22, v23, v24, v25, v26, v27);
    if ( !*p__8__1 )
      goto LABEL_32;
    LOBYTE((*p__8__1)[1].monitor) = 1;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)v21,
                         (const MethodInfo_31F4790 *)Method_UnityEngine_GameObject_GetComponent_UIPanel___);
    this = (MovieFileMerge__PlayCRIMovie_d__35_o *)UnityEngine_Object__op_Inequality(
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
    if ( !byte_4D27518 )
    {
      sub_1C94098(&BgmManager_TypeInfo);
      byte_4D27518 = 1;
    }
    v31 = BgmManager_TypeInfo;
    if ( !BgmManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
      v31 = BgmManager_TypeInfo;
    }
    v32 = *p__8__1;
    masterVolume = v31->static_fields->masterVolume;
    v34 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
    System_Action___ctor(v34, v32, Method_MovieFileMerge___c__DisplayClass35_0__PlayCRIMovie_b__0__, 0);
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
      || (this = (MovieFileMerge__PlayCRIMovie_d__35_o *)(*p__8__1)[1].klass) == 0 )
    {
LABEL_32:
      sub_1C942F0(this, method);
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
    sub_1C9403C(p__2__current, 0, v2, v3, v4, v5, v6, v7);
    result = 1;
    LODWORD(p__2__current[-1].fields._ClosedMessage_k__BackingField) = 1;
    return result;
  }
  return 0;
}


Il2CppObject *MovieFileMerge__PlayCRIMovie_d__35__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        MovieFileMerge__PlayCRIMovie_d__35_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn MovieFileMerge__PlayCRIMovie_d__35__System_Collections_IEnumerator_Reset(
        MovieFileMerge__PlayCRIMovie_d__35_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C940AC(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C942E4(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C940AC(&Method_MovieFileMerge__PlayCRIMovie_d__35_System_Collections_IEnumerator_Reset__);
  sub_1C941C0(v3, v4);
}


Il2CppObject *MovieFileMerge__PlayCRIMovie_d__35__System_Collections_IEnumerator_get_Current(
        MovieFileMerge__PlayCRIMovie_d__35_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void MovieFileMerge__PlayCRIMovie_d__35__System_IDisposable_Dispose(
        MovieFileMerge__PlayCRIMovie_d__35_o *this,
        const MethodInfo *method)
{
  ;
}


void MovieFileMerge__PlayMP4_d__33___ctor(
        MovieFileMerge__PlayMP4_d__33_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool MovieFileMerge__PlayMP4_d__33__MoveNext(MovieFileMerge__PlayMP4_d__33_o *this, const MethodInfo *method)
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
      sub_1C942F0(0, method);
    v7 = (Il2CppObject *)MovieFileMerge__PlayMP4_41240468(_4__this, _4__this->fields.outputMergeFile, v2);
    this->fields.__2__current = v7;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.__2__current, (int32_t)v7, v8, v9, v10, v11, v12, v13);
    v14 = 1;
    result = 1;
  }
  this->fields.__1__state = v14;
  return result;
}


Il2CppObject *MovieFileMerge__PlayMP4_d__33__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        MovieFileMerge__PlayMP4_d__33_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn MovieFileMerge__PlayMP4_d__33__System_Collections_IEnumerator_Reset(
        MovieFileMerge__PlayMP4_d__33_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C940AC(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C942E4(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C940AC(&Method_MovieFileMerge__PlayMP4_d__33_System_Collections_IEnumerator_Reset__);
  sub_1C941C0(v3, v4);
}


Il2CppObject *MovieFileMerge__PlayMP4_d__33__System_Collections_IEnumerator_get_Current(
        MovieFileMerge__PlayMP4_d__33_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void MovieFileMerge__PlayMP4_d__33__System_IDisposable_Dispose(
        MovieFileMerge__PlayMP4_d__33_o *this,
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

  if ( (byte_4D2B7B6 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_WaitForEndOfFrame_TypeInfo);
    byte_4D2B7B6 = 1;
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
        sub_1C942F0(IsNullOrEmpty, v6);
      v24 = (Il2CppObject *)MovieFileMerge__PlayCRIMovie(_4__this, this->fields.filePath, v7);
      this->fields.__2__current = v24;
      p__2__current = &this->fields.__2__current;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)p__2__current, (int32_t)v24, v26, v27, v28, v29, v30, v31);
      result = 1;
      *((_DWORD *)p__2__current - 2) = 1;
      break;
    case 1:
      this->fields.__1__state = -1;
      v17 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C942E4(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v17, 0);
      this->fields.__2__current = (Il2CppObject *)v17;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.__2__current, (int32_t)v17, v18, v19, v20, v21, v22, v23);
      v16 = 2;
      goto LABEL_9;
    case 2:
      this->fields.__1__state = -1;
      v9 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C942E4(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v9, 0);
      this->fields.__2__current = (Il2CppObject *)v9;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.__2__current, (int32_t)v9, v10, v11, v12, v13, v14, v15);
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

  v2 = sub_1C940AC(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C942E4(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C940AC(&Method_MovieFileMerge__PlayMP4_d__34_System_Collections_IEnumerator_Reset__);
  sub_1C941C0(v3, v4);
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


void MovieFileMerge___c__DisplayClass35_0___ctor(
        MovieFileMerge___c__DisplayClass35_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void MovieFileMerge___c__DisplayClass35_0___PlayCRIMovie_b__0(
        MovieFileMerge___c__DisplayClass35_0_o *this,
        const MethodInfo *method)
{
  CRIMoviePlayer_o *player; // x0

  player = this->fields.player;
  if ( !player )
    sub_1C942F0(0, method);
  CRIMoviePlayer__Dispose(player, 0);
  this->fields.wait = 0;
}