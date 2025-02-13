void __fastcall MovieFileMerge___ctor(MovieFileMerge_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_TKey__TValue__o *v3; // x20
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7
  System_Collections_Generic_Dictionary_TKey__TValue__o *v10; // x20
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7

  if ( (byte_4BDB57C & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__uint___ctor__);
    sub_1C21E38(&System_Collections_Generic_Dictionary_string__uint__TypeInfo);
    byte_4BDB57C = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1C22084(System_Collections_Generic_Dictionary_string__uint__TypeInfo);
  System_Collections_Generic_Dictionary_object__uint____ctor(
    v3,
    (const MethodInfo_3327C38 *)Method_System_Collections_Generic_Dictionary_string__uint___ctor__);
  this->fields.AllDownLoadFilePathCRCDictionary = (struct System_Collections_Generic_Dictionary_string__uint__o *)v3;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.AllDownLoadFilePathCRCDictionary,
    (int64_t)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  v10 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1C22084(System_Collections_Generic_Dictionary_string__uint__TypeInfo);
  System_Collections_Generic_Dictionary_object__uint____ctor(
    v10,
    (const MethodInfo_3327C38 *)Method_System_Collections_Generic_Dictionary_string__uint___ctor__);
  this->fields.RequireDownLoadFilePathCRCDictionary = (struct System_Collections_Generic_Dictionary_string__uint__o *)v10;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.RequireDownLoadFilePathCRCDictionary,
    (int64_t)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall MovieFileMerge__AssetLoadLogError(
        MovieFileMerge_o *this,
        System_String_o *errorCode,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  Il2CppObject *v13; // x21
  int64_t v14; // x1
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  int64_t v21; // x1
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  int64_t v28; // x1
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  int64_t v35; // x1
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  int64_t v42; // x1
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  int64_t v49; // x1
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  int64_t v56; // x1
  int64_t v57; // x2
  int32_t v58; // w3
  System_String_o *v59; // x4
  BattleSetupInfo_o *v60; // x5
  FollowerInfo_o *v61; // x6
  PartyListViewItem_o *v62; // x7
  int64_t v63; // x1
  __int64 v64; // x22
  __int64 v65; // x24

  if ( (byte_4BDB57A & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Debug_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
    sub_1C21E38(&string___TypeInfo);
    sub_1C21E38(&StringLiteral_14365/*"The request timed out."*/);
    sub_1C21E38(&StringLiteral_14295/*"The network connection was lost."*/);
    sub_1C21E38(&StringLiteral_4790/*"Connection reset by peer"*/);
    sub_1C21E38(&StringLiteral_5163/*"DLErrorType"*/);
    sub_1C21E38(&StringLiteral_5162/*"DLErrorAsset"*/);
    sub_1C21E38(&StringLiteral_4789/*"Connection refused"*/);
    sub_1C21E38(&StringLiteral_9623/*"No address associated with hostname"*/);
    sub_1C21E38(&StringLiteral_2531/*"AssetBundle file download time over"*/);
    sub_1C21E38(&StringLiteral_13073/*"Software caused connection abort"*/);
    sub_1C21E38(&StringLiteral_4791/*"Connection timed out"*/);
    sub_1C21E38(&StringLiteral_2534/*"AssetLoadError"*/);
    byte_4BDB57A = 1;
  }
  Instance = (Il2CppObject *)sub_1C21EE0(string___TypeInfo, 8LL);
  if ( !Instance )
    goto LABEL_28;
  v13 = Instance;
  if ( !LODWORD(Instance[1].monitor) )
    goto LABEL_18;
  v14 = StringLiteral_9623/*"No address associated with hostname"*/;
  Instance[2].klass = (Il2CppClass *)StringLiteral_9623/*"No address associated with hostname"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)&Instance[2], v14, v7, v8, v9, v10, v11, v12);
  if ( LODWORD(v13[1].monitor) <= 1 )
    goto LABEL_18;
  v21 = StringLiteral_2531/*"AssetBundle file download time over"*/;
  v13[2].monitor = (void *)StringLiteral_2531/*"AssetBundle file download time over"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v13[2].monitor, v21, v15, v16, v17, v18, v19, v20);
  if ( LODWORD(v13[1].monitor) <= 2 )
    goto LABEL_18;
  v28 = StringLiteral_14295/*"The network connection was lost."*/;
  v13[3].klass = (Il2CppClass *)StringLiteral_14295/*"The network connection was lost."*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v13[3], v28, v22, v23, v24, v25, v26, v27);
  if ( LODWORD(v13[1].monitor) <= 3 )
    goto LABEL_18;
  v35 = StringLiteral_4790/*"Connection reset by peer"*/;
  v13[3].monitor = (void *)StringLiteral_4790/*"Connection reset by peer"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v13[3].monitor, v35, v29, v30, v31, v32, v33, v34);
  if ( LODWORD(v13[1].monitor) <= 4 )
    goto LABEL_18;
  v42 = StringLiteral_13073/*"Software caused connection abort"*/;
  v13[4].klass = (Il2CppClass *)StringLiteral_13073/*"Software caused connection abort"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v13[4], v42, v36, v37, v38, v39, v40, v41);
  if ( LODWORD(v13[1].monitor) <= 5
    || (v49 = StringLiteral_4791/*"Connection timed out"*/,
        v13[4].monitor = (void *)StringLiteral_4791/*"Connection timed out"*/,
        sub_1C21DDC((PartyOrganizationUtility_o *)&v13[4].monitor, v49, v43, v44, v45, v46, v47, v48),
        LODWORD(v13[1].monitor) <= 6)
    || (v56 = StringLiteral_4789/*"Connection refused"*/,
        v13[5].klass = (Il2CppClass *)StringLiteral_4789/*"Connection refused"*/,
        sub_1C21DDC((PartyOrganizationUtility_o *)&v13[5], v56, v50, v51, v52, v53, v54, v55),
        LODWORD(v13[1].monitor) <= 7) )
  {
LABEL_18:
    sub_1C2209C(Instance, v6);
  }
  v63 = StringLiteral_14365/*"The request timed out."*/;
  v13[5].monitor = (void *)StringLiteral_14365/*"The request timed out."*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v13[5].monitor, v63, v57, v58, v59, v60, v61, v62);
  if ( (int)v13[1].monitor < 1 )
  {
LABEL_19:
    if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
    goto LABEL_27;
  }
  v64 = 0LL;
  v65 = (unsigned int)v13[1].monitor - 1LL;
  while ( 1 )
  {
    if ( !errorCode )
      goto LABEL_28;
    Instance = (Il2CppObject *)System_String__Contains(errorCode, *((System_String_o **)&v13[2].klass + v64), 0LL);
    if ( ((unsigned __int8)Instance & 1) != 0 )
      break;
    if ( v65 == v64 )
      goto LABEL_19;
    if ( ++v64 >= (unsigned __int64)LODWORD(v13[1].monitor) )
      goto LABEL_18;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
  if ( !Instance )
LABEL_28:
    sub_1C22094(Instance, v6);
  CrashReporter__AddCustomKey(
    (CrashReporter_o *)Instance,
    (System_String_o *)StringLiteral_5162/*"DLErrorAsset"*/,
    this->fields.downloadingURL,
    0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
  if ( (unsigned int)v64 >= LODWORD(v13[1].monitor) )
    goto LABEL_18;
  if ( !Instance )
    goto LABEL_28;
  CrashReporter__AddCustomKey(
    (CrashReporter_o *)Instance,
    (System_String_o *)StringLiteral_5163/*"DLErrorType"*/,
    *((System_String_o **)&v13[2].klass + v64),
    0LL);
  if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
  errorCode = (System_String_o *)StringLiteral_2534/*"AssetLoadError"*/;
LABEL_27:
  UnityEngine_Debug__LogError((Il2CppObject *)errorCode, 0LL);
}


System_Collections_IEnumerator_o *__fastcall MovieFileMerge__CRCDownloadAndCheck(
        MovieFileMerge_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7

  if ( (byte_4BDB571 & 1) == 0 )
  {
    sub_1C21E38(&MovieFileMerge__CRCDownloadAndCheck_d__32_TypeInfo);
    byte_4BDB571 = 1;
  }
  v3 = sub_1C22084(MovieFileMerge__CRCDownloadAndCheck_d__32_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v3 + 32), (int64_t)this, v4, v5, v6, v7, v8, v9);
  return (System_Collections_IEnumerator_o *)v3;
}


System_Collections_Generic_Dictionary_string__uint__o *__fastcall MovieFileMerge__CreateDic(
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

  if ( (byte_4BDB578 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__uint__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__uint___ctor__);
    sub_1C21E38(&System_Collections_Generic_Dictionary_string__uint__TypeInfo);
    byte_4BDB578 = 1;
  }
  result = 0;
  v4 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1C22084(System_Collections_Generic_Dictionary_string__uint__TypeInfo);
  System_Collections_Generic_Dictionary_object__uint____ctor(
    v4,
    (const MethodInfo_3327C38 *)Method_System_Collections_Generic_Dictionary_string__uint___ctor__);
  AllLines = System_IO_File__ReadAllLines(dataPath, 0LL);
  if ( !AllLines )
LABEL_18:
    sub_1C22094(AllLines, v6);
  max_length = AllLines->max_length;
  v8 = AllLines;
  if ( max_length >= 1 )
  {
    v9 = 0;
    while ( 1 )
    {
      if ( v9 >= max_length )
LABEL_17:
        sub_1C2209C(AllLines, v6);
      AllLines = (System_String_array *)v8->m_Items[v9];
      if ( !AllLines )
        goto LABEL_18;
      AllLines = System_String__Split((System_String_o *)AllLines, 0x2Cu, 0, 0LL);
      result = 0;
      if ( !AllLines )
        goto LABEL_18;
      v10 = AllLines;
      if ( AllLines->max_length <= 1 )
        goto LABEL_17;
      AllLines = (System_String_array *)System_UInt32__TryParse(AllLines->m_Items[1], &result, 0LL);
      if ( ((unsigned __int8)AllLines & 1) == 0 )
        return 0LL;
      if ( !v10->max_length )
        goto LABEL_17;
      if ( !v4 )
        goto LABEL_18;
      System_Collections_Generic_Dictionary_object__uint___Add(
        v4,
        (Il2CppObject *)v10->m_Items[0],
        result,
        (const MethodInfo_33285EC *)Method_System_Collections_Generic_Dictionary_string__uint__Add__);
      max_length = v8->max_length;
      if ( (int)++v9 >= max_length )
        return (System_Collections_Generic_Dictionary_string__uint__o *)v4;
    }
  }
  return (System_Collections_Generic_Dictionary_string__uint__o *)v4;
}


void __fastcall MovieFileMerge__Delete(System_String_o *folder, const MethodInfo *method)
{
  System_String_o *v2; // x19
  System_String_o *FileName; // x19
  Il2CppObject *LocalDataPath; // x0
  System_String_o *v5; // x19

  v2 = folder;
  if ( (byte_4BDB574 & 1) == 0 )
  {
    sub_1C21E38(&System_IO_Path_TypeInfo);
    sub_1C21E38(&StringLiteral_25498/*"{0}/{1}"*/);
    folder = (System_String_o *)sub_1C21E38(&StringLiteral_1123/*"/"*/);
    byte_4BDB574 = 1;
  }
  if ( !v2 )
    sub_1C22094(folder, method);
  if ( System_String__EndsWith(v2, (System_String_o *)StringLiteral_1123/*"/"*/, 0LL) )
    v2 = System_String__TrimEnd_63145368(v2, 0x2Fu, 0LL);
  if ( !System_IO_Path_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_IO_Path_TypeInfo);
  FileName = System_IO_Path__GetFileName(v2, 0LL);
  LocalDataPath = (Il2CppObject *)MovieFileMerge__GetLocalDataPath((const MethodInfo *)FileName);
  v5 = System_String__Format_63129848(
         (System_String_o *)StringLiteral_25498/*"{0}/{1}"*/,
         LocalDataPath,
         (Il2CppObject *)FileName,
         0LL);
  if ( System_IO_Directory__Exists(v5, 0LL) )
    System_IO_Directory__Delete(v5, 1, 0LL);
}


void __fastcall MovieFileMerge__Delete_38993380(const MethodInfo *method)
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
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7

  if ( (byte_4BDB577 & 1) == 0 )
  {
    sub_1C21E38(&MovieFileMerge__Download_d__40_TypeInfo);
    byte_4BDB577 = 1;
  }
  v7 = sub_1C22084(MovieFileMerge__Download_d__40_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  *(_DWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 32) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v7 + 32), (int64_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v7 + 40) = fileName;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v7 + 40), (int64_t)fileName, v14, v15, v16, v17, v18, v19);
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
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7

  if ( (byte_4BDB572 & 1) == 0 )
  {
    sub_1C21E38(&MovieFileMerge__DownloadMovie_d__33_TypeInfo);
    byte_4BDB572 = 1;
  }
  v3 = sub_1C22084(MovieFileMerge__DownloadMovie_d__33_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v3 + 32), (int64_t)this, v4, v5, v6, v7, v8, v9);
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
  System_String_o *FileName; // x20
  Il2CppObject *LocalDataPath; // x0
  System_String_o *v6; // x19
  System_String_o *v7; // x0
  FileMergeAndSplit_c *v8; // x8
  Il2CppObject *v9; // x21
  System_String_o *v10; // x0

  v3 = assetFolderURL;
  if ( (byte_4BDB568 & 1) == 0 )
  {
    sub_1C21E38(&FileMergeAndSplit_TypeInfo);
    sub_1C21E38(&System_IO_Path_TypeInfo);
    sub_1C21E38(&StringLiteral_1123/*"/"*/);
    sub_1C21E38(&StringLiteral_25503/*"{0}/{1}/{2}"*/);
    this = (MovieFileMerge_o *)sub_1C21E38(&StringLiteral_25502/*"{0}/{1}/{1}.usm"*/);
    byte_4BDB568 = 1;
  }
  if ( !v3 )
    sub_1C22094(this, assetFolderURL);
  if ( System_String__EndsWith(v3, (System_String_o *)StringLiteral_1123/*"/"*/, 0LL) )
    v3 = System_String__TrimEnd_63145368(v3, 0x2Fu, 0LL);
  if ( !System_IO_Path_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_IO_Path_TypeInfo);
  FileName = System_IO_Path__GetFileName(v3, 0LL);
  LocalDataPath = (Il2CppObject *)MovieFileMerge__GetLocalDataPath((const MethodInfo *)FileName);
  v6 = System_String__Format_63129848(
         (System_String_o *)StringLiteral_25502/*"{0}/{1}/{1}.usm"*/,
         LocalDataPath,
         (Il2CppObject *)FileName,
         0LL);
  v7 = MovieFileMerge__GetLocalDataPath((const MethodInfo *)v6);
  v8 = FileMergeAndSplit_TypeInfo;
  v9 = (Il2CppObject *)v7;
  if ( !FileMergeAndSplit_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FileMergeAndSplit_TypeInfo);
    v8 = FileMergeAndSplit_TypeInfo;
  }
  v10 = System_String__Format_63129916(
          (System_String_o *)StringLiteral_25503/*"{0}/{1}/{2}"*/,
          v9,
          (Il2CppObject *)FileName,
          (Il2CppObject *)v8->static_fields->PathCRCFileName,
          0LL);
  return !System_IO_File__Exists(v10, 0LL) && System_IO_File__Exists(v6, 0LL);
}


float __fastcall MovieFileMerge__GetDownloadProgress(MovieFileMerge_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_TKey__TValue__o *RequireDownLoadFilePathCRCDictionary; // x0
  float v4; // s8
  __int64 v5; // x1
  System_Collections_Generic_Dictionary_TKey__TValue__o *v6; // x0
  int32_t downloadProgress; // s8

  if ( (byte_4BDB56C & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__uint__get_Count__);
    byte_4BDB56C = 1;
  }
  RequireDownLoadFilePathCRCDictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.RequireDownLoadFilePathCRCDictionary;
  v4 = 0.0;
  if ( RequireDownLoadFilePathCRCDictionary
    && System_Collections_Generic_Dictionary_object__uint___get_Count(
         RequireDownLoadFilePathCRCDictionary,
         (const MethodInfo_33282BC *)Method_System_Collections_Generic_Dictionary_string__uint__get_Count__) )
  {
    v6 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.RequireDownLoadFilePathCRCDictionary;
    if ( !v6 )
      sub_1C22094(0LL, v5);
    downloadProgress = this->fields.downloadProgress;
    return (float)downloadProgress
         / (float)System_Collections_Generic_Dictionary_object__uint___get_Count(
                    v6,
                    (const MethodInfo_33282BC *)Method_System_Collections_Generic_Dictionary_string__uint__get_Count__);
  }
  return v4;
}


double __fastcall MovieFileMerge__GetDownloadSize(MovieFileMerge_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_TKey__TValue__o *RequireDownLoadFilePathCRCDictionary; // x0

  if ( (byte_4BDB56B & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__uint__get_Count__);
    byte_4BDB56B = 1;
  }
  RequireDownLoadFilePathCRCDictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.RequireDownLoadFilePathCRCDictionary;
  if ( !RequireDownLoadFilePathCRCDictionary )
    sub_1C22094(0LL, method);
  return (double)(System_Collections_Generic_Dictionary_object__uint___get_Count(
                    RequireDownLoadFilePathCRCDictionary,
                    (const MethodInfo_33282BC *)Method_System_Collections_Generic_Dictionary_string__uint__get_Count__) << 20);
}


System_String_o *__fastcall MovieFileMerge__GetLocalDataPath(const MethodInfo *method)
{
  System_String_o *persistentDataPath; // x0

  if ( (byte_4BDB569 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Application_TypeInfo);
    sub_1C21E38(&StringLiteral_1178/*"/extend-data/movie"*/);
    byte_4BDB569 = 1;
  }
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
  persistentDataPath = UnityEngine_Application__get_persistentDataPath(0LL);
  return System_String__Concat_63115476(persistentDataPath, (System_String_o *)StringLiteral_1178/*"/extend-data/movie"*/, 0LL);
}


System_String_o *__fastcall MovieFileMerge__GetLocalFolderPath(MovieFileMerge_o *this, const MethodInfo *method)
{
  MovieFileMerge_o *v2; // x19
  Il2CppObject *LocalDataPath; // x0

  v2 = this;
  if ( (byte_4BDB575 & 1) == 0 )
  {
    this = (MovieFileMerge_o *)sub_1C21E38(&StringLiteral_25498/*"{0}/{1}"*/);
    byte_4BDB575 = 1;
  }
  LocalDataPath = (Il2CppObject *)MovieFileMerge__GetLocalDataPath((const MethodInfo *)this);
  return System_String__Format_63129848(
           (System_String_o *)StringLiteral_25498/*"{0}/{1}"*/,
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
  System_Collections_Generic_Dictionary_TKey__TValue__o *v3; // x19
  __int64 v4; // x1
  System_Collections_Generic_Dictionary_TKey__TValue__o *AllDownLoadFilePathCRCDictionary; // x0
  const MethodInfo *v6; // x1
  Il2CppObject *key; // x21
  uint32_t value; // w22
  Il2CppObject *LocalFolderPath; // x1
  System_String_o *v10; // x23
  _BOOL8 v11; // x0
  __int64 v12; // x1
  System_Byte_array *AllBytes; // x24
  uint32_t v14; // w1
  System_IO_DirectoryInfo_o *Parent; // x0
  __int64 v16; // x1
  System_IO_DirectoryInfo_o *v17; // x21
  System_String_o *v18; // x0
  System_String_o *v19; // x0
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v21; // [xsp+0h] [xbp-C0h] BYREF
  uint32_t v22; // [xsp+2Ch] [xbp-94h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v23; // [xsp+30h] [xbp-90h] BYREF

  if ( (byte_4BDB576 & 1) == 0 )
  {
    sub_1C21E38(&Crc32_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__uint__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__uint__GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__uint___ctor__);
    sub_1C21E38(&System_Collections_Generic_Dictionary_string__uint__TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_Enumerator_string__uint__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_Enumerator_string__uint__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_Enumerator_string__uint__get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_KeyValuePair_string__uint__get_Key__);
    sub_1C21E38(&Method_System_Collections_Generic_KeyValuePair_string__uint__get_Value__);
    sub_1C21E38(&StringLiteral_25498/*"{0}/{1}"*/);
    byte_4BDB576 = 1;
  }
  memset(&v23, 0, sizeof(v23));
  v22 = 0;
  v3 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1C22084(System_Collections_Generic_Dictionary_string__uint__TypeInfo);
  System_Collections_Generic_Dictionary_object__uint____ctor(
    v3,
    (const MethodInfo_3327C38 *)Method_System_Collections_Generic_Dictionary_string__uint___ctor__);
  AllDownLoadFilePathCRCDictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.AllDownLoadFilePathCRCDictionary;
  if ( !AllDownLoadFilePathCRCDictionary )
    sub_1C22094(0LL, v4);
  System_Collections_Generic_Dictionary_object__uint___GetEnumerator(
    &v21,
    AllDownLoadFilePathCRCDictionary,
    (const MethodInfo_33289DC *)Method_System_Collections_Generic_Dictionary_string__uint__GetEnumerator__);
  v23 = v21;
  while ( System_Collections_Generic_Dictionary_Enumerator_object__uint___MoveNext(
            &v23,
            (const MethodInfo_341659C *)Method_System_Collections_Generic_Dictionary_Enumerator_string__uint__MoveNext__) )
  {
    key = v23.fields._current.fields.key;
    value = (uint32_t)v23.fields._current.fields.value;
    LocalFolderPath = (Il2CppObject *)MovieFileMerge__GetLocalFolderPath(this, v6);
    v10 = System_String__Format_63129848((System_String_o *)StringLiteral_25498/*"{0}/{1}"*/, LocalFolderPath, key, 0LL);
    v11 = System_IO_File__Exists(v10, 0LL);
    if ( !v11 )
      goto LABEL_11;
    AllBytes = System_IO_File__ReadAllBytes(v10, 0LL);
    v22 = value;
    if ( !Crc32_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
    v14 = Crc32__Compute(AllBytes, 0LL);
    if ( !System_UInt32__Equals_64045724((uint32_t)&v22, v14, 0LL) )
    {
      System_IO_File__Delete(v10, 0LL);
LABEL_11:
      if ( !v3 )
        sub_1C22094(v11, v12);
      System_Collections_Generic_Dictionary_object__uint___Add(
        v3,
        key,
        value,
        (const MethodInfo_33285EC *)Method_System_Collections_Generic_Dictionary_string__uint__Add__);
      Parent = System_IO_Directory__GetParent(v10, 0LL);
      v17 = Parent;
      if ( !Parent )
        sub_1C22094(0LL, v16);
      v18 = (System_String_o *)((__int64 (__fastcall *)(System_IO_DirectoryInfo_o *, Il2CppMethodPointer))Parent->klass->vtable._8_get_FullName.method)(
                                 Parent,
                                 Parent->klass->vtable._9_get_Name.methodPtr);
      if ( !System_IO_Directory__Exists(v18, 0LL) )
      {
        v19 = (System_String_o *)((__int64 (__fastcall *)(System_IO_DirectoryInfo_o *, Il2CppMethodPointer))v17->klass->vtable._8_get_FullName.method)(
                                   v17,
                                   v17->klass->vtable._9_get_Name.methodPtr);
        System_IO_Directory__CreateDirectory(v19, 0LL);
      }
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_object__uint___Dispose(
    &v23,
    (const MethodInfo_34166C0 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__uint__Dispose__);
  return (System_Collections_Generic_Dictionary_string__uint__o *)v3;
}


System_Collections_Generic_List_string__o *__fastcall MovieFileMerge__GetSplitFileList(
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
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  int64_t v19; // x1
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  Il2CppClass **v23; // x0
  System_Collections_Generic_List_Enumerator_object__o v25; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4BDB579 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__uint__get_Keys__);
    sub_1C21E38(&Method_System_Linq_Enumerable_ToList_string___);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_string__GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C21E38(&StringLiteral_25498/*"{0}/{1}"*/);
    byte_4BDB579 = 1;
  }
  memset(&v25, 0, sizeof(v25));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_string___ctor__);
  LocalFolderPath = MovieFileMerge__GetLocalFolderPath(this, v4);
  if ( System_IO_Directory__Exists(LocalFolderPath, 0LL) )
  {
    AllDownLoadFilePathCRCDictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.AllDownLoadFilePathCRCDictionary;
    if ( !AllDownLoadFilePathCRCDictionary
      || (Keys = System_Collections_Generic_Dictionary_object__uint___get_Keys(
                   AllDownLoadFilePathCRCDictionary,
                   (const MethodInfo_33282CC *)Method_System_Collections_Generic_Dictionary_string__uint__get_Keys__),
          (AllDownLoadFilePathCRCDictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)System_Linq_Enumerable__ToList_object_((System_Collections_Generic_IEnumerable_TSource__o *)Keys, (const MethodInfo_2FED5C8 *)Method_System_Linq_Enumerable_ToList_string___)) == 0LL) )
    {
      sub_1C22094(AllDownLoadFilePathCRCDictionary, v6);
    }
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v25,
      (System_Collections_Generic_List_object__o *)AllDownLoadFilePathCRCDictionary,
      (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_string__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v25,
              (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
    {
      current = v25.fields._current;
      v11 = (Il2CppObject *)MovieFileMerge__GetLocalFolderPath(this, v9);
      v12 = (Il2CppObject *)System_String__Format_63129848((System_String_o *)StringLiteral_25498/*"{0}/{1}"*/, v11, current, 0LL);
      v19 = (int64_t)v12;
      if ( !v3 )
        sub_1C22094(v12, v12);
      items = v3->fields._items;
      v21 = Method_System_Collections_Generic_List_string__Add__;
      ++v3->fields._version;
      if ( !items )
        sub_1C22094(v12, v12);
      size = v3->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          v12,
          *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
      }
      else
      {
        v23 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v23[4] = (Il2CppClass *)v19;
        sub_1C21DDC((PartyOrganizationUtility_o *)(v23 + 4), v19, v13, v14, v15, v16, v17, v18);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v25,
      (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
  }
  return (System_Collections_Generic_List_string__o *)v3;
}


double __fastcall MovieFileMerge__GetTotalRequireSize(MovieFileMerge_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__uint__o *AllDownLoadFilePathCRCDictionary; // x0
  System_Collections_Generic_Dictionary_TKey__TValue__o *RequireDownLoadFilePathCRCDictionary; // x8

  if ( (byte_4BDB56A & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__uint__get_Count__);
    byte_4BDB56A = 1;
  }
  AllDownLoadFilePathCRCDictionary = this->fields.AllDownLoadFilePathCRCDictionary;
  if ( !AllDownLoadFilePathCRCDictionary
    || (AllDownLoadFilePathCRCDictionary = (struct System_Collections_Generic_Dictionary_string__uint__o *)System_Collections_Generic_Dictionary_object__uint___get_Count((System_Collections_Generic_Dictionary_TKey__TValue__o *)AllDownLoadFilePathCRCDictionary, (const MethodInfo_33282BC *)Method_System_Collections_Generic_Dictionary_string__uint__get_Count__),
        (RequireDownLoadFilePathCRCDictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.RequireDownLoadFilePathCRCDictionary) == 0LL) )
  {
    sub_1C22094(AllDownLoadFilePathCRCDictionary, method);
  }
  return (double)((System_Collections_Generic_Dictionary_object__uint___get_Count(
                     RequireDownLoadFilePathCRCDictionary,
                     (const MethodInfo_33282BC *)Method_System_Collections_Generic_Dictionary_string__uint__get_Count__)
                 + (int)AllDownLoadFilePathCRCDictionary) << 20);
}


void __fastcall MovieFileMerge__Initialize(
        MovieFileMerge_o *this,
        System_String_o *assetFolderURL,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_TKey__TValue__o *AllDownLoadFilePathCRCDictionary; // x0
  System_Collections_Generic_Dictionary_TKey__TValue__o *v6; // x22
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  System_Collections_Generic_Dictionary_TKey__TValue__o *RequireDownLoadFilePathCRCDictionary; // x0
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  System_Collections_Generic_Dictionary_TKey__TValue__o *v20; // x22
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  __int64 v33; // x0
  __int64 v34; // x1
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  struct System_String_o *FileName; // x0
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  const MethodInfo *v48; // x1
  Il2CppObject *LocalFolderPath; // x0
  struct System_String_o *v50; // x0
  int64_t v51; // x2
  int32_t v52; // w3
  System_String_o *v53; // x4
  BattleSetupInfo_o *v54; // x5
  FollowerInfo_o *v55; // x6
  PartyListViewItem_o *v56; // x7
  const MethodInfo *v57; // x1
  Il2CppObject *v58; // x0
  struct System_String_o *v59; // x0
  int64_t v60; // x2
  int32_t v61; // w3
  System_String_o *v62; // x4
  BattleSetupInfo_o *v63; // x5
  FollowerInfo_o *v64; // x6
  PartyListViewItem_o *v65; // x7
  const MethodInfo *v66; // x1
  System_String_o *v67; // x0
  FileMergeAndSplit_c *v68; // x8
  Il2CppObject *v69; // x20
  struct System_String_o *v70; // x0
  int64_t v71; // x2
  int32_t v72; // w3
  System_String_o *v73; // x4
  BattleSetupInfo_o *v74; // x5
  FollowerInfo_o *v75; // x6
  PartyListViewItem_o *v76; // x7

  if ( (byte_4BDB570 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__uint__Clear__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__uint___ctor__);
    sub_1C21E38(&System_Collections_Generic_Dictionary_string__uint__TypeInfo);
    sub_1C21E38(&FileMergeAndSplit_TypeInfo);
    sub_1C21E38(&System_IO_Path_TypeInfo);
    sub_1C21E38(&StringLiteral_25498/*"{0}/{1}"*/);
    sub_1C21E38(&StringLiteral_25494/*"{0}/SplitFile"*/);
    sub_1C21E38(&StringLiteral_1123/*"/"*/);
    sub_1C21E38(&StringLiteral_25500/*"{0}/{1}.usm"*/);
    byte_4BDB570 = 1;
  }
  AllDownLoadFilePathCRCDictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.AllDownLoadFilePathCRCDictionary;
  if ( AllDownLoadFilePathCRCDictionary )
  {
    System_Collections_Generic_Dictionary_object__uint___Clear(
      AllDownLoadFilePathCRCDictionary,
      (const MethodInfo_3328774 *)Method_System_Collections_Generic_Dictionary_string__uint__Clear__);
  }
  else
  {
    v6 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1C22084(System_Collections_Generic_Dictionary_string__uint__TypeInfo);
    System_Collections_Generic_Dictionary_object__uint____ctor(
      v6,
      (const MethodInfo_3327C38 *)Method_System_Collections_Generic_Dictionary_string__uint___ctor__);
    this->fields.AllDownLoadFilePathCRCDictionary = (struct System_Collections_Generic_Dictionary_string__uint__o *)v6;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&this->fields.AllDownLoadFilePathCRCDictionary,
      (int64_t)v6,
      v7,
      v8,
      v9,
      v10,
      v11,
      v12);
  }
  RequireDownLoadFilePathCRCDictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.RequireDownLoadFilePathCRCDictionary;
  if ( RequireDownLoadFilePathCRCDictionary )
  {
    System_Collections_Generic_Dictionary_object__uint___Clear(
      RequireDownLoadFilePathCRCDictionary,
      (const MethodInfo_3328774 *)Method_System_Collections_Generic_Dictionary_string__uint__Clear__);
  }
  else
  {
    v20 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1C22084(System_Collections_Generic_Dictionary_string__uint__TypeInfo);
    System_Collections_Generic_Dictionary_object__uint____ctor(
      v20,
      (const MethodInfo_3327C38 *)Method_System_Collections_Generic_Dictionary_string__uint___ctor__);
    this->fields.RequireDownLoadFilePathCRCDictionary = (struct System_Collections_Generic_Dictionary_string__uint__o *)v20;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&this->fields.RequireDownLoadFilePathCRCDictionary,
      (int64_t)v20,
      v21,
      v22,
      v23,
      v24,
      v25,
      v26);
  }
  this->fields.downloadProgress = 0;
  this->fields.isDownloadCancel = 0;
  this->fields.mergeClass = 0LL;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.mergeClass, 0LL, v14, v15, v16, v17, v18, v19);
  this->fields.crcCheckerClass = 0LL;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.crcCheckerClass, 0LL, v27, v28, v29, v30, v31, v32);
  if ( !assetFolderURL )
    sub_1C22094(v33, v34);
  if ( System_String__EndsWith(assetFolderURL, (System_String_o *)StringLiteral_1123/*"/"*/, 0LL) )
    assetFolderURL = System_String__TrimEnd_63145368(assetFolderURL, 0x2Fu, 0LL);
  this->fields.assetFolderURL = assetFolderURL;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.assetFolderURL,
    (int64_t)assetFolderURL,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
  if ( !System_IO_Path_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_IO_Path_TypeInfo);
  FileName = System_IO_Path__GetFileName(assetFolderURL, 0LL);
  this->fields.assetFolder = FileName;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.assetFolder, (int64_t)FileName, v42, v43, v44, v45, v46, v47);
  LocalFolderPath = (Il2CppObject *)MovieFileMerge__GetLocalFolderPath(this, v48);
  v50 = System_String__Format((System_String_o *)StringLiteral_25494/*"{0}/SplitFile"*/, LocalFolderPath, 0LL);
  this->fields.outputSplitFileFolder = v50;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.outputSplitFileFolder,
    (int64_t)v50,
    v51,
    v52,
    v53,
    v54,
    v55,
    v56);
  v58 = (Il2CppObject *)MovieFileMerge__GetLocalFolderPath(this, v57);
  v59 = System_String__Format_63129848(
          (System_String_o *)StringLiteral_25500/*"{0}/{1}.usm"*/,
          v58,
          (Il2CppObject *)this->fields.assetFolder,
          0LL);
  this->fields.outputMergeFile = v59;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.outputMergeFile, (int64_t)v59, v60, v61, v62, v63, v64, v65);
  v67 = MovieFileMerge__GetLocalFolderPath(this, v66);
  v68 = FileMergeAndSplit_TypeInfo;
  v69 = (Il2CppObject *)v67;
  if ( !FileMergeAndSplit_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FileMergeAndSplit_TypeInfo);
    v68 = FileMergeAndSplit_TypeInfo;
  }
  v70 = System_String__Format_63129848(
          (System_String_o *)StringLiteral_25498/*"{0}/{1}"*/,
          v69,
          (Il2CppObject *)v68->static_fields->PathCRCFileName,
          0LL);
  this->fields.outputMergeFileCRC = v70;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.outputMergeFileCRC,
    (int64_t)v70,
    v71,
    v72,
    v73,
    v74,
    v75,
    v76);
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
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7

  if ( (byte_4BDB573 & 1) == 0 )
  {
    sub_1C21E38(&MovieFileMerge__Merge_d__34_TypeInfo);
    byte_4BDB573 = 1;
  }
  v3 = sub_1C22084(MovieFileMerge__Merge_d__34_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v3 + 32), (int64_t)this, v4, v5, v6, v7, v8, v9);
  return (System_Collections_IEnumerator_o *)v3;
}


System_Collections_IEnumerator_o *__fastcall MovieFileMerge__PlayCRIMovie(
        MovieFileMerge_o *this,
        System_String_o *filePath,
        const MethodInfo *method)
{
  __int64 v4; // x20
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4BDB56F & 1) == 0 )
  {
    sub_1C21E38(&MovieFileMerge__PlayCRIMovie_d__30_TypeInfo);
    byte_4BDB56F = 1;
  }
  v4 = sub_1C22084(MovieFileMerge__PlayCRIMovie_d__30_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0LL);
  *(_DWORD *)(v4 + 16) = 0;
  *(_QWORD *)(v4 + 32) = filePath;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v4 + 32), (int64_t)filePath, v5, v6, v7, v8, v9, v10);
  return (System_Collections_IEnumerator_o *)v4;
}


System_Collections_IEnumerator_o *__fastcall MovieFileMerge__PlayMP4(MovieFileMerge_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7

  if ( (byte_4BDB56D & 1) == 0 )
  {
    sub_1C21E38(&MovieFileMerge__PlayMP4_d__28_TypeInfo);
    byte_4BDB56D = 1;
  }
  v3 = sub_1C22084(MovieFileMerge__PlayMP4_d__28_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v3 + 32), (int64_t)this, v4, v5, v6, v7, v8, v9);
  return (System_Collections_IEnumerator_o *)v3;
}


System_Collections_IEnumerator_o *__fastcall MovieFileMerge__PlayMP4_38991564(
        MovieFileMerge_o *this,
        System_String_o *filePath,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v6; // x21
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7

  if ( (byte_4BDB56E & 1) == 0 )
  {
    sub_1C21E38(&MovieFileMerge__PlayMP4_d__29_TypeInfo);
    byte_4BDB56E = 1;
  }
  v6 = sub_1C22084(MovieFileMerge__PlayMP4_d__29_TypeInfo);
  System_Object___ctor((Il2CppObject *)v6, 0LL);
  *(_DWORD *)(v6 + 16) = 0;
  *(_QWORD *)(v6 + 40) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v6 + 40), (int64_t)this, v7, v8, v9, v10, v11, v12);
  *(_QWORD *)(v6 + 32) = filePath;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v6 + 32), (int64_t)filePath, v13, v14, v15, v16, v17, v18);
  return (System_Collections_IEnumerator_o *)v6;
}


void __fastcall MovieFileMerge__Reboot(MovieFileMerge_o *this, const MethodInfo *method)
{
  UnityEngine_Networking_UnityWebRequest_o *v3; // x0
  PartyOrganizationUtility_o *p_loader; // x19
  struct UnityEngine_Networking_UnityWebRequest_o *loader; // t1
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  ManagementManager_c *v12; // x0
  Il2CppObject *Instance; // x0
  __int64 v14; // x1

  if ( (byte_4BDB57B & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Application_TypeInfo);
    sub_1C21E38(&ManagementManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
    byte_4BDB57B = 1;
  }
  loader = this->fields.loader;
  p_loader = (PartyOrganizationUtility_o *)&this->fields.loader;
  v3 = loader;
  if ( loader )
  {
    UnityEngine_Networking_UnityWebRequest__Dispose(v3, 0LL);
    p_loader->klass = 0LL;
    sub_1C21DDC(p_loader, 0LL, v6, v7, v8, v9, v10, v11);
  }
  if ( !ManagementManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
  if ( !byte_4BDB610 )
  {
    sub_1C21E38(&ManagementManager_TypeInfo);
    byte_4BDB610 = 1;
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
    UnityEngine_Application__Quit_70662884(0LL);
  }
  else
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
    if ( !Instance )
      sub_1C22094(0LL, v14);
    ManagementManager__reboot((ManagementManager_o *)Instance, 0, 1, 0LL);
  }
}


void __fastcall MovieFileMerge___Merge_b__34_0(MovieFileMerge_o *this, System_Exception_o *e, const MethodInfo *method)
{
  Il2CppObject *v4; // x19
  Il2CppObject *Instance; // x20
  System_String_o *v6; // x21
  ErrorDialog_ClickDelegate_o *v7; // x22
  const MethodInfo *v8; // x2
  System_String_o *v9; // x1

  v4 = (Il2CppObject *)this;
  if ( (byte_4BDB57D & 1) == 0 )
  {
    sub_1C21E38(&ErrorDialog_ClickDelegate_TypeInfo);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&Method_MovieFileMerge_EndMergeRetryDialog__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&StringLiteral_5440/*"Disk full"*/);
    sub_1C21E38(&StringLiteral_9419/*"NETWORK_ERROR_DISK_FULL"*/);
    this = (MovieFileMerge_o *)sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BDB57D = 1;
  }
  if ( !e )
    goto LABEL_12;
  this = (MovieFileMerge_o *)((__int64 (__fastcall *)(System_Exception_o *, Il2CppMethodPointer, const MethodInfo *))e->klass->vtable._5_get_Message.method)(
                               e,
                               e->klass->vtable._6_get_Data.methodPtr,
                               method);
  if ( !this )
    goto LABEL_12;
  if ( !System_String__StartsWith((System_String_o *)this, (System_String_o *)StringLiteral_5440/*"Disk full"*/, 0LL) )
  {
    v9 = (System_String_o *)((__int64 (__fastcall *)(System_Exception_o *, Il2CppMethodPointer))e->klass->vtable._5_get_Message.method)(
                              e,
                              e->klass->vtable._6_get_Data.methodPtr);
    goto LABEL_11;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v6 = LocalizationManager__Get((System_String_o *)StringLiteral_9419/*"NETWORK_ERROR_DISK_FULL"*/, 0LL);
  v7 = (ErrorDialog_ClickDelegate_o *)sub_1C22084(ErrorDialog_ClickDelegate_TypeInfo);
  ErrorDialog_ClickDelegate___ctor(v7, v4, Method_MovieFileMerge_EndMergeRetryDialog__, 0LL);
  if ( !Instance )
LABEL_12:
    sub_1C22094(this, e);
  CommonUI__OpenErrorDialog((CommonUI_o *)Instance, (System_String_o *)StringLiteral_1/*""*/, v6, v7, 1, 0LL);
  v9 = (System_String_o *)StringLiteral_5440/*"Disk full"*/;
LABEL_11:
  MovieFileMerge__AssetLoadLogError((MovieFileMerge_o *)v4, v9, v8);
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
  int32_t _1__state; // w8
  struct MovieFileMerge_o *_4__this; // x20
  System_Collections_IEnumerator_o *v7; // x0
  PartyOrganizationUtility_o *p__2__current; // x19
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  bool result; // w0
  System_Collections_Generic_Dictionary_string__uint__o *NeedDownloadDictionary; // x0
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  struct FileMergeAndSplit_CRCChecker_o *crcCheckerClass; // x8
  System_Collections_Generic_Dictionary_string__uint__o *Dic; // x0
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  System_String_o *outputMergeFile; // x21
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x0
  System_Collections_Generic_List_uint__o *v33; // x22
  FileMergeAndSplit_CRCChecker_o *v34; // x23
  const MethodInfo *v35; // x3
  PartyOrganizationUtility_o *p_crcCheckerClass; // x20
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  System_Collections_IEnumerator_o *v43; // x0
  PartyOrganizationUtility_o *v44; // x19
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7

  v4 = this;
  if ( (byte_4BDB57E & 1) == 0 )
  {
    sub_1C21E38(&FileMergeAndSplit_CRCChecker_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__uint__get_Values__);
    sub_1C21E38(&Method_System_Linq_Enumerable_ToList_uint___);
    this = (MovieFileMerge__CRCDownloadAndCheck_d__32_o *)sub_1C21E38(&FileMergeAndSplit_TypeInfo);
    byte_4BDB57E = 1;
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
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&_4__this->fields.RequireDownLoadFilePathCRCDictionary,
      (int64_t)NeedDownloadDictionary,
      v17,
      v18,
      v19,
      v20,
      v21,
      v22);
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
        v7 = MovieFileMerge__Download(_4__this, FileMergeAndSplit_TypeInfo->static_fields->PathCRCFileName, 0, v3);
        v4->fields.__2__current = (Il2CppObject *)v7;
        p__2__current = (PartyOrganizationUtility_o *)&v4->fields.__2__current;
        sub_1C21DDC(p__2__current, (int64_t)v7, v9, v10, v11, v12, v13, v14);
        result = 1;
        *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
        return result;
      }
LABEL_22:
      sub_1C22094(this, method);
    }
    return 0;
  }
  v4->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_22;
  Dic = MovieFileMerge__CreateDic((MovieFileMerge_o *)this, _4__this->fields.outputMergeFileCRC, v2);
  _4__this->fields.AllDownLoadFilePathCRCDictionary = Dic;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&_4__this->fields.AllDownLoadFilePathCRCDictionary,
    (int64_t)Dic,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  this = (MovieFileMerge__CRCDownloadAndCheck_d__32_o *)_4__this->fields.AllDownLoadFilePathCRCDictionary;
  if ( !this )
    goto LABEL_22;
  outputMergeFile = _4__this->fields.outputMergeFile;
  Values = System_Collections_Generic_Dictionary_object__uint___get_Values(
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)this,
             (const MethodInfo_332841C *)Method_System_Collections_Generic_Dictionary_string__uint__get_Values__);
  v33 = (System_Collections_Generic_List_uint__o *)System_Linq_Enumerable__ToList_uint_(
                                                     (System_Collections_Generic_IEnumerable_TSource__o *)Values,
                                                     (const MethodInfo_2FED6C0 *)Method_System_Linq_Enumerable_ToList_uint___);
  v34 = (FileMergeAndSplit_CRCChecker_o *)sub_1C22084(FileMergeAndSplit_CRCChecker_TypeInfo);
  FileMergeAndSplit_CRCChecker___ctor(v34, outputMergeFile, v33, v35);
  _4__this->fields.crcCheckerClass = v34;
  p_crcCheckerClass = (PartyOrganizationUtility_o *)&_4__this->fields.crcCheckerClass;
  sub_1C21DDC(p_crcCheckerClass, (int64_t)v34, v37, v38, v39, v40, v41, v42);
  this = (MovieFileMerge__CRCDownloadAndCheck_d__32_o *)p_crcCheckerClass->klass;
  if ( !p_crcCheckerClass->klass )
    goto LABEL_22;
  v43 = FileMergeAndSplit_CRCChecker__Run((FileMergeAndSplit_CRCChecker_o *)this, method);
  v4->fields.__2__current = (Il2CppObject *)v43;
  v44 = (PartyOrganizationUtility_o *)&v4->fields.__2__current;
  sub_1C21DDC(v44, (int64_t)v43, v45, v46, v47, v48, v49, v50);
  *(_DWORD *)&v44[-1].fields._IsQuestStartMenuMode_k__BackingField = 2;
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

  v2 = sub_1C21E4C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C22084(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C21E4C(&Method_MovieFileMerge__CRCDownloadAndCheck_d__32_System_Collections_IEnumerator_Reset__);
  sub_1C21F60(v3, v4);
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
  int32_t _1__state; // w8
  MovieFileMerge_o *_4__this; // x19
  System_Collections_Generic_Dictionary_TKey__TValue__o *RequireDownLoadFilePathCRCDictionary; // x0
  MovieFileMerge__DownloadMovie_d__33_o *v6; // x9
  __int128 v7; // q0
  struct System_Collections_Generic_KeyValuePair_TKey__TValue__o current; // q1
  struct System_Collections_Generic_Dictionary_Enumerator_string__uint__o *p__7__wrap1; // x0
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
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
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v32[2]; // [xsp+8h] [xbp-88h] BYREF
  MovieFileMerge__DownloadMovie_d__33_o **v33; // [xsp+68h] [xbp-28h]
  MovieFileMerge__DownloadMovie_d__33_o *v34; // [xsp+78h] [xbp-18h] BYREF

  v34 = this;
  v2 = this;
  if ( (byte_4BDB580 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__uint__GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_Enumerator_string__uint__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_Enumerator_string__uint__get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_KeyValuePair_string__uint__get_Key__);
    this = (MovieFileMerge__DownloadMovie_d__33_o *)sub_1C21E38(&Method_System_Collections_Generic_KeyValuePair_string__uint__get_Value__);
    byte_4BDB580 = 1;
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
      sub_1C22094(this, method);
    RequireDownLoadFilePathCRCDictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)_4__this->fields.RequireDownLoadFilePathCRCDictionary;
    _4__this->fields.isDownloading = 1;
    _4__this->fields.downloadProgress = 0;
    if ( !RequireDownLoadFilePathCRCDictionary )
      sub_1C22094(0LL, method);
    System_Collections_Generic_Dictionary_object__uint___GetEnumerator(
      v32,
      RequireDownLoadFilePathCRCDictionary,
      (const MethodInfo_33289DC *)Method_System_Collections_Generic_Dictionary_string__uint__GetEnumerator__);
    v6 = v34;
    v7 = *(_OWORD *)&v32[0].fields._dictionary;
    current = v32[0].fields._current;
    p__7__wrap1 = &v34->fields.__7__wrap1;
    v32[1] = v32[0];
    *(_QWORD *)&v34->fields.__7__wrap1.fields._getEnumeratorRetType = *(_QWORD *)&v32[0].fields._getEnumeratorRetType;
    v6->fields.__7__wrap1.fields._current = current;
    *(_OWORD *)&v6->fields.__7__wrap1.fields._dictionary = v7;
    sub_1C21DDC((PartyOrganizationUtility_o *)p__7__wrap1, 0LL, v10, v11, v12, v13, v14, v15);
    v2 = v34;
  }
  v2->fields.__1__state = -3;
  v16 = System_Collections_Generic_Dictionary_Enumerator_object__uint___MoveNext(
          (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v2->fields.__7__wrap1,
          (const MethodInfo_341659C *)Method_System_Collections_Generic_Dictionary_Enumerator_string__uint__MoveNext__);
  v19 = v34;
  if ( v16 )
  {
    if ( !_4__this )
      sub_1C22094(v16, v17);
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
                              (System_String_o *)v34->fields.__7__wrap1.fields._current.fields.key,
                              (uint32_t)v34->fields.__7__wrap1.fields._current.fields.value,
                              v18);
      v25 = v34;
      v34->fields.__2__current = v24;
      sub_1C21DDC((PartyOrganizationUtility_o *)&v25->fields.__2__current, (int64_t)v24, v26, v27, v28, v29, v30, v31);
      result = 1;
      v34->fields.__1__state = 1;
    }
  }
  else
  {
    MovieFileMerge__DownloadMovie_d__33____m__Finally1(v34, v17);
    v23 = v34;
    *(_QWORD *)&v34->fields.__7__wrap1.fields._getEnumeratorRetType = 0LL;
    v23->fields.__7__wrap1.fields._current = 0u;
    *(_OWORD *)&v23->fields.__7__wrap1.fields._dictionary = 0u;
    if ( !_4__this )
      sub_1C22094(v21, v22);
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

  v2 = sub_1C21E4C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C22084(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C21E4C(&Method_MovieFileMerge__DownloadMovie_d__33_System_Collections_IEnumerator_Reset__);
  sub_1C21F60(v3, v4);
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
  if ( (byte_4BDB581 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_Enumerator_string__uint__Dispose__);
    byte_4BDB581 = 1;
  }
  this->fields.__1__state = -1;
  System_Collections_Generic_Dictionary_Enumerator_object__uint___Dispose(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&this->fields.__7__wrap1,
    (const MethodInfo_34166C0 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__uint__Dispose__);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  MovieFileMerge__Download_d__40_o *v8; // x19
  struct MovieFileMerge_o *_4__this; // x20
  System_String_o *v10; // x0
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  const MethodInfo *v17; // x1
  Il2CppObject *LocalFolderPath; // x0
  System_String_o *v19; // x0
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  uint32_t downloadingCRC; // w8
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  MovieFileMerge__Download_d__40_o *v39; // x21
  int64_t v40; // x1
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  int64_t v47; // x1
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  int64_t v54; // x1
  int64_t v55; // x2
  int32_t v56; // w3
  System_String_o *v57; // x4
  BattleSetupInfo_o *v58; // x5
  FollowerInfo_o *v59; // x6
  PartyListViewItem_o *v60; // x7
  int64_t v61; // x2
  int32_t v62; // w3
  System_String_o *v63; // x4
  BattleSetupInfo_o *v64; // x5
  FollowerInfo_o *v65; // x6
  PartyListViewItem_o *v66; // x7
  int64_t v67; // x1
  int64_t v68; // x2
  int32_t v69; // w3
  System_String_o *v70; // x4
  BattleSetupInfo_o *v71; // x5
  FollowerInfo_o *v72; // x6
  PartyListViewItem_o *v73; // x7
  int64_t v74; // x2
  int32_t v75; // w3
  System_String_o *v76; // x4
  BattleSetupInfo_o *v77; // x5
  FollowerInfo_o *v78; // x6
  PartyListViewItem_o *v79; // x7
  int64_t v80; // x1
  System_String_o *v81; // x0
  int64_t v82; // x2
  int32_t v83; // w3
  System_String_o *v84; // x4
  BattleSetupInfo_o *v85; // x5
  FollowerInfo_o *v86; // x6
  PartyListViewItem_o *v87; // x7
  const MethodInfo *v88; // x2
  ManagementManager_c *v89; // x0
  _BOOL4 isDuringStartup; // w22
  Il2CppObject *Instance; // x21
  System_String_o *v92; // x22
  ErrorDialog_ClickDelegate_o *v93; // x23
  System_Byte_array *readData_5__5; // x20
  uint32_t v95; // w0
  Il2CppObject **p__2__current; // x19
  int64_t v97; // x2
  int32_t v98; // w3
  System_String_o *v99; // x4
  BattleSetupInfo_o *v100; // x5
  FollowerInfo_o *v101; // x6
  PartyListViewItem_o *v102; // x7
  int v103; // w8
  UnityEngine_WaitForEndOfFrame_o *v104; // x20
  int64_t v105; // x2
  int32_t v106; // w3
  System_String_o *v107; // x4
  BattleSetupInfo_o *v108; // x5
  FollowerInfo_o *v109; // x6
  PartyListViewItem_o *v110; // x7
  float unscaledTime; // s8
  UnityEngine_WaitForEndOfFrame_o *v112; // x21
  int64_t v113; // x2
  int32_t v114; // w3
  System_String_o *v115; // x4
  BattleSetupInfo_o *v116; // x5
  FollowerInfo_o *v117; // x6
  PartyListViewItem_o *v118; // x7
  MovieFileMerge__Download_d__40_o **p_loader; // x22
  int64_t v120; // x2
  int32_t v121; // w3
  System_String_o *v122; // x4
  BattleSetupInfo_o *v123; // x5
  FollowerInfo_o *v124; // x6
  PartyListViewItem_o *v125; // x7
  struct System_String_o **p_errorCode_5__11; // x21
  int64_t v127; // x2
  int32_t v128; // w3
  System_String_o *v129; // x4
  BattleSetupInfo_o *v130; // x5
  FollowerInfo_o *v131; // x6
  PartyListViewItem_o *v132; // x7
  System_String_o *error; // x0
  System_Byte_array *data; // x0
  int64_t v135; // x2
  int32_t v136; // w3
  System_String_o *v137; // x4
  BattleSetupInfo_o *v138; // x5
  FollowerInfo_o *v139; // x6
  PartyListViewItem_o *v140; // x7
  int64_t v141; // x2
  int32_t v142; // w3
  System_String_o *v143; // x4
  BattleSetupInfo_o *v144; // x5
  FollowerInfo_o *v145; // x6
  PartyListViewItem_o *v146; // x7
  UnityEngine_WaitForEndOfFrame_o *v147; // x20
  int64_t v148; // x2
  int32_t v149; // w3
  System_String_o *v150; // x4
  BattleSetupInfo_o *v151; // x5
  FollowerInfo_o *v152; // x6
  PartyListViewItem_o *v153; // x7
  int64_t v154; // x2
  int32_t v155; // w3
  System_String_o *v156; // x4
  BattleSetupInfo_o *v157; // x5
  FollowerInfo_o *v158; // x6
  PartyListViewItem_o *v159; // x7
  System_String_o *v160; // x1
  int64_t v161; // x2
  int32_t v162; // w3
  System_String_o *v163; // x4
  BattleSetupInfo_o *v164; // x5
  FollowerInfo_o *v165; // x6
  PartyListViewItem_o *v166; // x7
  System_IO_DirectoryInfo_o *Parent; // x0
  __int64 v168; // x1
  System_IO_DirectoryInfo_o *v169; // x21
  const MethodInfo *v170; // x1
  System_String_o *v171; // x0
  System_String_o *v172; // x21
  int64_t FreeSize; // x21
  ManagerConfig_c *v174; // x0
  ManagerConfig_c *v175; // x0
  Il2CppObject *v176; // x0
  System_String_o *errorCode_5__11; // x21
  CommonUI_o *v178; // x22
  ErrorDialog_ClickDelegate_o *v179; // x23
  UnityEngine_WaitForEndOfFrame_o *v180; // x20
  int64_t v181; // x2
  int32_t v182; // w3
  System_String_o *v183; // x4
  BattleSetupInfo_o *v184; // x5
  FollowerInfo_o *v185; // x6
  PartyListViewItem_o *v186; // x7
  int autoRetryCount_5__3; // w21
  ManagerConfig_c *v188; // x0
  float DOWNLOAD_RETRY_DELAY_TIME; // s8
  UnityEngine_WaitForSeconds_o *v190; // x20
  int64_t v191; // x2
  int32_t v192; // w3
  System_String_o *v193; // x4
  BattleSetupInfo_o *v194; // x5
  FollowerInfo_o *v195; // x6
  PartyListViewItem_o *v196; // x7
  Il2CppObject *v197; // x21
  PartyOrganizationUtility_o *v198; // x20
  MovieFileMerge__Download_d__40_o *loader; // t1
  int64_t v200; // x2
  int32_t v201; // w3
  System_String_o *v202; // x4
  BattleSetupInfo_o *v203; // x5
  FollowerInfo_o *v204; // x6
  PartyListViewItem_o *v205; // x7
  int64_t v206; // x2
  int32_t v207; // w3
  System_String_o *v208; // x4
  BattleSetupInfo_o *v209; // x5
  FollowerInfo_o *v210; // x6
  PartyListViewItem_o *v211; // x7
  PartyOrganizationUtility_o *p_readData_5__5; // x0
  struct UnityEngine_Networking_UnityWebRequest_o **v213; // x21
  int64_t v214; // x2
  int32_t v215; // w3
  System_String_o *v216; // x4
  BattleSetupInfo_o *v217; // x5
  FollowerInfo_o *v218; // x6
  PartyListViewItem_o *v219; // x7
  int64_t v220; // x2
  int32_t v221; // w3
  System_String_o *v222; // x4
  BattleSetupInfo_o *v223; // x5
  FollowerInfo_o *v224; // x6
  PartyListViewItem_o *v225; // x7
  ManagerConfig_c *v226; // x0
  Il2CppObject *v227; // x0
  System_String_o *v228; // x21
  CommonUI_o *v229; // x22
  ErrorDialog_ClickDelegate_o *v230; // x23
  UnityEngine_WaitForSeconds_o *v231; // x20
  int64_t v232; // x2
  int32_t v233; // w3
  System_String_o *v234; // x4
  BattleSetupInfo_o *v235; // x5
  FollowerInfo_o *v236; // x6
  PartyListViewItem_o *v237; // x7
  System_String_o *v238; // x22
  ErrorDialog_ClickDelegate_o *v239; // x23
  UnityEngine_WaitForEndOfFrame_o *v240; // x20
  int64_t v241; // x2
  int32_t v242; // w3
  System_String_o *v243; // x4
  BattleSetupInfo_o *v244; // x5
  FollowerInfo_o *v245; // x6
  PartyListViewItem_o *v246; // x7
  int64_t v247; // x2
  int32_t v248; // w3
  System_String_o *v249; // x4
  BattleSetupInfo_o *v250; // x5
  FollowerInfo_o *v251; // x6
  PartyListViewItem_o *v252; // x7
  int64_t v253; // x2
  int32_t v254; // w3
  System_String_o *v255; // x4
  BattleSetupInfo_o *v256; // x5
  FollowerInfo_o *v257; // x6
  PartyListViewItem_o *v258; // x7
  int64_t v259; // x2
  int32_t v260; // w3
  System_String_o *v261; // x4
  BattleSetupInfo_o *v262; // x5
  FollowerInfo_o *v263; // x6
  PartyListViewItem_o *v264; // x7
  float downloadProgress; // s0
  float loadProgress_5__7; // s9
  float v267; // s8
  float v268; // s0
  bool v269; // zf
  float v270; // s8
  System_String_o *downloadingURL; // x22
  System_String_o *v272; // x0
  System_String_o *v273; // x0
  int64_t v274; // x2
  int32_t v275; // w3
  System_String_o *v276; // x4
  BattleSetupInfo_o *v277; // x5
  FollowerInfo_o *v278; // x6
  PartyListViewItem_o *v279; // x7
  System_Collections_Generic_Dictionary_string__string__o *ResponseHeaders; // x0
  System_Collections_Generic_Dictionary_object__object__o *v281; // x22
  Il2CppObject *v282; // x22
  MovieFileMerge__Download_d__40_o *v283; // x22
  int v284; // w8
  System_String_o *v285; // x23
  System_String_o *v286; // x0
  ManagementManager_c *v287; // x0
  _BOOL4 v288; // w23
  Il2CppObject *v289; // x0
  struct System_String_o *errorLocalizeCode_5__12; // x8
  CommonUI_o *v291; // x22
  System_String_o *v292; // x21
  System_String_o *v293; // x23
  System_String_o *v294; // x23
  ErrorDialog_ClickDelegate_o *v295; // x24
  ManagerConfig_c *v296; // x0
  int64_t wait_5__8; // x1
  System_String_o *v298; // x23
  System_String_o *v299; // x23
  ErrorDialog_ClickDelegate_o *v300; // x24
  __int64 v301; // x0
  System_IO_IOException_o *v302; // x21
  System_String_o *v303; // x0
  __int64 v304; // x0
  UnityEngine_Networking_UnityWebRequest_o *v305; // x0
  PartyOrganizationUtility_o *v306; // x20
  int64_t v307; // x2
  int32_t v308; // w3
  System_String_o *v309; // x4
  BattleSetupInfo_o *v310; // x5
  FollowerInfo_o *v311; // x6
  PartyListViewItem_o *v312; // x7
  PartyOrganizationUtility_o *v313; // x19
  int64_t v314; // x2
  int32_t v315; // w3
  System_String_o *v316; // x4
  BattleSetupInfo_o *v317; // x5
  FollowerInfo_o *v318; // x6
  PartyListViewItem_o *v319; // x7
  System_Nullable_Vector2__o effectDistance; // [xsp+0h] [xbp-70h]
  System_Nullable_Vector2__o effectDistancea; // [xsp+0h] [xbp-70h]
  Il2CppObject *value; // [xsp+38h] [xbp-38h] BYREF

  v8 = this;
  if ( (byte_4BDB57F & 1) == 0 )
  {
    sub_1C21E38(&char___TypeInfo);
    sub_1C21E38(&ErrorDialog_ClickDelegate_TypeInfo);
    sub_1C21E38(&CommonServicePluginScript_TypeInfo);
    sub_1C21E38(&Crc32_TypeInfo);
    sub_1C21E38(&UnityEngine_Debug_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__string__TryGetValue__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__string__get_Count__);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&ManagementManager_TypeInfo);
    sub_1C21E38(&ManagerConfig_TypeInfo);
    sub_1C21E38(&Method_MovieFileMerge_EndRetryDialog__);
    sub_1C21E38(&Method_MovieFileMerge_EndWarningDialog__);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&string___TypeInfo);
    sub_1C21E38(&UnityEngine_WaitForEndOfFrame_TypeInfo);
    sub_1C21E38(&UnityEngine_WaitForSeconds_TypeInfo);
    sub_1C21E38(&StringLiteral_7339/*"HTTP"*/);
    sub_1C21E38(&StringLiteral_815/*")\n\n503 Auto retry count "*/);
    sub_1C21E38(&StringLiteral_818/*")\nfile crc ("*/);
    sub_1C21E38(&StringLiteral_1514/*"503"*/);
    sub_1C21E38(&StringLiteral_2175/*"ASSET_LOADER_ERROR_BOOT_RETRY_MESSAGE"*/);
    sub_1C21E38(&StringLiteral_16213/*"[FFFF80]Download error for debug"*/);
    sub_1C21E38(&StringLiteral_25498/*"{0}/{1}"*/);
    sub_1C21E38(&StringLiteral_12498/*"STATUS"*/);
    sub_1C21E38(&StringLiteral_814/*")\n\n"*/);
    sub_1C21E38(&StringLiteral_693/*"("*/);
    sub_1C21E38(&StringLiteral_816/*")\n\nAssetBundle file check sum error\nlist crc ("*/);
    sub_1C21E38(&StringLiteral_812/*")"*/);
    sub_1C21E38(&StringLiteral_2176/*"ASSET_LOADER_ERROR_TIME_OVER_MESSAGE"*/);
    sub_1C21E38(&StringLiteral_817/*")\n\nAssetBundle file download time over"*/);
    this = (MovieFileMerge__Download_d__40_o *)sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BDB57F = 1;
  }
  value = 0LL;
  _4__this = v8->fields.__4__this;
  switch ( v8->fields.__1__state )
  {
    case 0:
      v8->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_177;
      v10 = System_String__Format_63129848(
              (System_String_o *)StringLiteral_25498/*"{0}/{1}"*/,
              (Il2CppObject *)_4__this->fields.assetFolderURL,
              (Il2CppObject *)v8->fields.fileName,
              0LL);
      _4__this->fields.downloadingURL = v10;
      sub_1C21DDC(
        (PartyOrganizationUtility_o *)&_4__this->fields.downloadingURL,
        (int64_t)v10,
        v11,
        v12,
        v13,
        v14,
        v15,
        v16);
      _4__this->fields.downloadingCRC = v8->fields.crc;
      LocalFolderPath = (Il2CppObject *)MovieFileMerge__GetLocalFolderPath(_4__this, v17);
      v19 = System_String__Format_63129848(
              (System_String_o *)StringLiteral_25498/*"{0}/{1}"*/,
              LocalFolderPath,
              (Il2CppObject *)v8->fields.fileName,
              0LL);
      v8->fields._dlFilePath_5__2 = v19;
      sub_1C21DDC(
        (PartyOrganizationUtility_o *)&v8->fields._dlFilePath_5__2,
        (int64_t)v19,
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
      unscaledTime = UnityEngine_Time__get_unscaledTime(0LL);
      this = (MovieFileMerge__Download_d__40_o *)ManagerConfig_TypeInfo;
      if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
        this = (MovieFileMerge__Download_d__40_o *)ManagerConfig_TypeInfo;
      }
      v8->fields._requestTime_5__6 = unscaledTime + *(float *)&this[1].fields._dlFilePath_5__2[1].fields._stringLength;
      if ( !_4__this )
        goto LABEL_177;
      v8->fields._loadProgress_5__7 = 0.0;
      v112 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C22084(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v112, 0LL);
      v8->fields._wait_5__8 = v112;
      sub_1C21DDC(
        (PartyOrganizationUtility_o *)&v8->fields._wait_5__8,
        (int64_t)v112,
        v113,
        v114,
        v115,
        v116,
        v117,
        v118);
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
        sub_1C21DDC((PartyOrganizationUtility_o *)&_4__this->fields.loader, 0LL, v154, v155, v156, v157, v158, v159);
        LOBYTE(this) = 0;
        _4__this->fields.isDownloading = 0;
        return (char)this;
      }
      downloadProgress = UnityEngine_Networking_UnityWebRequest__get_downloadProgress(
                           (UnityEngine_Networking_UnityWebRequest_o *)this,
                           0LL);
      loadProgress_5__7 = v8->fields._loadProgress_5__7;
      v267 = downloadProgress;
      v268 = UnityEngine_Time__get_unscaledTime(0LL);
      v269 = v267 == loadProgress_5__7;
      v270 = v268;
      if ( !v269 )
      {
        v296 = ManagerConfig_TypeInfo;
        if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
          v296 = ManagerConfig_TypeInfo;
        }
        v8->fields._requestTime_5__6 = v270 + v296->static_fields->TIMEOUT;
        this = *p_loader;
        if ( *p_loader )
        {
          v8->fields._loadProgress_5__7 = UnityEngine_Networking_UnityWebRequest__get_downloadProgress(
                                            (UnityEngine_Networking_UnityWebRequest_o *)this,
                                            0LL);
LABEL_161:
          wait_5__8 = (int64_t)v8->fields._wait_5__8;
          v8->fields.__2__current = (Il2CppObject *)wait_5__8;
          p__2__current = &v8->fields.__2__current;
          sub_1C21DDC((PartyOrganizationUtility_o *)p__2__current, wait_5__8, v120, v121, v122, v123, v124, v125);
          v103 = 2;
          goto LABEL_119;
        }
        goto LABEL_177;
      }
      if ( v268 < v8->fields._requestTime_5__6 )
        goto LABEL_161;
LABEL_44:
      *(_WORD *)&v8->fields._isAutoRetry_5__9 = 0;
      v8->fields._errorCode_5__11 = 0LL;
      p_errorCode_5__11 = &v8->fields._errorCode_5__11;
      sub_1C21DDC((PartyOrganizationUtility_o *)&v8->fields._errorCode_5__11, 0LL, v120, v121, v122, v123, v124, v125);
      v8->fields._errorLocalizeCode_5__12 = 0LL;
      sub_1C21DDC(
        (PartyOrganizationUtility_o *)&v8->fields._errorLocalizeCode_5__12,
        0LL,
        v127,
        v128,
        v129,
        v130,
        v131,
        v132);
      this = *p_loader;
      if ( !*p_loader )
LABEL_177:
        sub_1C22094(this, method);
      if ( !UnityEngine_Networking_UnityWebRequest__get_isDone((UnityEngine_Networking_UnityWebRequest_o *)this, 0LL) )
      {
        v160 = System_String__Concat_63126736(
                 (System_String_o *)StringLiteral_693/*"("*/,
                 _4__this->fields.downloadingURL,
                 (System_String_o *)StringLiteral_817/*")\n\nAssetBundle file download time over"*/,
                 0LL);
        *p_errorCode_5__11 = v160;
LABEL_63:
        sub_1C21DDC(
          (PartyOrganizationUtility_o *)&v8->fields._errorCode_5__11,
          (int64_t)v160,
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
        v8->fields._readData_5__5 = data;
        sub_1C21DDC(
          (PartyOrganizationUtility_o *)&v8->fields._readData_5__5,
          (int64_t)data,
          v135,
          v136,
          v137,
          v138,
          v139,
          v140);
        v8->fields.__2__current = 0LL;
        p__2__current = &v8->fields.__2__current;
        sub_1C21DDC((PartyOrganizationUtility_o *)p__2__current, 0LL, v141, v142, v143, v144, v145, v146);
        v103 = 3;
        goto LABEL_119;
      }
      this = (MovieFileMerge__Download_d__40_o *)_4__this->fields.loader;
      if ( !this )
        goto LABEL_177;
      downloadingURL = _4__this->fields.downloadingURL;
      v272 = UnityEngine_Networking_UnityWebRequest__get_error((UnityEngine_Networking_UnityWebRequest_o *)this, 0LL);
      v273 = System_String__Concat_63128740(
               (System_String_o *)StringLiteral_693/*"("*/,
               downloadingURL,
               (System_String_o *)StringLiteral_814/*")\n\n"*/,
               v272,
               0LL);
      *p_errorCode_5__11 = v273;
      sub_1C21DDC(
        (PartyOrganizationUtility_o *)&v8->fields._errorCode_5__11,
        (int64_t)v273,
        v274,
        v275,
        v276,
        v277,
        v278,
        v279);
      this = (MovieFileMerge__Download_d__40_o *)_4__this->fields.loader;
      if ( !this )
        goto LABEL_177;
      ResponseHeaders = UnityEngine_Networking_UnityWebRequest__GetResponseHeaders(
                          (UnityEngine_Networking_UnityWebRequest_o *)this,
                          0LL);
      if ( !ResponseHeaders )
        break;
      v281 = (System_Collections_Generic_Dictionary_object__object__o *)ResponseHeaders;
      if ( System_Collections_Generic_Dictionary_object__object___get_Count(
             (System_Collections_Generic_Dictionary_object__object__o *)ResponseHeaders,
             (const MethodInfo_3316350 *)Method_System_Collections_Generic_Dictionary_string__string__get_Count__) < 1
        || !System_Collections_Generic_Dictionary_object__object___TryGetValue(
              v281,
              (Il2CppObject *)StringLiteral_12498/*"STATUS"*/,
              &value,
              (const MethodInfo_3317E8C *)Method_System_Collections_Generic_Dictionary_string__string__TryGetValue__) )
      {
        break;
      }
      v282 = value;
      this = (MovieFileMerge__Download_d__40_o *)sub_1C21EE0(char___TypeInfo, 1LL);
      if ( !this )
        goto LABEL_177;
      method = (const MethodInfo *)this;
      if ( !LODWORD(this->fields.__2__current) )
        goto LABEL_169;
      LOWORD(this->fields.__4__this) = 32;
      if ( !v282 )
        goto LABEL_177;
      this = (MovieFileMerge__Download_d__40_o *)System_String__Split_63137868(
                                                   (System_String_o *)v282,
                                                   (System_Char_array *)this,
                                                   1,
                                                   0LL);
      if ( !this )
        goto LABEL_177;
      v283 = this;
      if ( SLODWORD(this->fields.__2__current) < 2 )
        break;
      this = (MovieFileMerge__Download_d__40_o *)this->fields.__4__this;
      if ( !this )
        goto LABEL_177;
      this = (MovieFileMerge__Download_d__40_o *)System_String__StartsWith(
                                                   (System_String_o *)this,
                                                   (System_String_o *)StringLiteral_7339/*"HTTP"*/,
                                                   0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
        break;
      if ( LODWORD(v283->fields.__2__current) <= 1 )
        goto LABEL_169;
      this = (MovieFileMerge__Download_d__40_o *)v283->fields.fileName;
      if ( !this )
        goto LABEL_177;
      if ( System_String__Equals_63123792((System_String_o *)this, (System_String_o *)StringLiteral_1514/*"503"*/, 0LL) )
      {
        v284 = v8->fields._autoRetryCount_5__3 + 1;
        v8->fields._isAutoRetry_5__9 = 1;
        v8->fields._autoRetryCount_5__3 = v284;
        v285 = _4__this->fields.downloadingURL;
        v286 = System_Int32__ToString((int)v8 + 64, 0LL);
        v160 = System_String__Concat_63128740(
                 (System_String_o *)StringLiteral_693/*"("*/,
                 v285,
                 (System_String_o *)StringLiteral_815/*")\n\n503 Auto retry count "*/,
                 v286,
                 0LL);
        v8->fields._errorCode_5__11 = v160;
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
      v95 = Crc32__Compute(readData_5__5, 0LL);
      v8->fields.__2__current = 0LL;
      p__2__current = &v8->fields.__2__current;
      *((_DWORD *)p__2__current + 24) = v95;
      sub_1C21DDC((PartyOrganizationUtility_o *)p__2__current, 0LL, v97, v98, v99, v100, v101, v102);
      v103 = 4;
      goto LABEL_119;
    case 4:
      v8->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_177;
      downloadingCRC = _4__this->fields.downloadingCRC;
      if ( v8->fields._downloadCrc_5__13 != downloadingCRC && downloadingCRC )
      {
        this = (MovieFileMerge__Download_d__40_o *)sub_1C21EE0(string___TypeInfo, 7LL);
        if ( !this )
          goto LABEL_177;
        v39 = this;
        if ( LODWORD(this->fields.__2__current) )
        {
          v40 = StringLiteral_693/*"("*/;
          this->fields.__4__this = (struct MovieFileMerge_o *)StringLiteral_693/*"("*/;
          sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.__4__this, v40, v33, v34, v35, v36, v37, v38);
          if ( LODWORD(v39->fields.__2__current) > 1 )
          {
            v47 = (int64_t)_4__this->fields.downloadingURL;
            v39->fields.fileName = (struct System_String_o *)v47;
            sub_1C21DDC((PartyOrganizationUtility_o *)&v39->fields.fileName, v47, v41, v42, v43, v44, v45, v46);
            if ( LODWORD(v39->fields.__2__current) > 2 )
            {
              v54 = StringLiteral_816/*")\n\nAssetBundle file check sum error\nlist crc ("*/;
              *(_QWORD *)&v39->fields.crc = StringLiteral_816/*")\n\nAssetBundle file check sum error\nlist crc ("*/;
              sub_1C21DDC((PartyOrganizationUtility_o *)&v39->fields.crc, v54, v48, v49, v50, v51, v52, v53);
              this = (MovieFileMerge__Download_d__40_o *)System_UInt32__ToString((int)_4__this + 96, 0LL);
              if ( LODWORD(v39->fields.__2__current) > 3 )
              {
                v39->fields._dlFilePath_5__2 = (struct System_String_o *)this;
                sub_1C21DDC(
                  (PartyOrganizationUtility_o *)&v39->fields._dlFilePath_5__2,
                  (int64_t)this,
                  v55,
                  v56,
                  v57,
                  v58,
                  v59,
                  v60);
                if ( LODWORD(v39->fields.__2__current) > 4 )
                {
                  v67 = StringLiteral_818/*")\nfile crc ("*/;
                  *(_QWORD *)&v39->fields._autoRetryCount_5__3 = StringLiteral_818/*")\nfile crc ("*/;
                  sub_1C21DDC(
                    (PartyOrganizationUtility_o *)&v39->fields._autoRetryCount_5__3,
                    v67,
                    v61,
                    v62,
                    v63,
                    v64,
                    v65,
                    v66);
                  this = (MovieFileMerge__Download_d__40_o *)System_UInt32__ToString((int)v8 + 120, 0LL);
                  if ( LODWORD(v39->fields.__2__current) > 5 )
                  {
                    v39->fields._readData_5__5 = (struct System_Byte_array *)this;
                    sub_1C21DDC(
                      (PartyOrganizationUtility_o *)&v39->fields._readData_5__5,
                      (int64_t)this,
                      v68,
                      v69,
                      v70,
                      v71,
                      v72,
                      v73);
                    if ( LODWORD(v39->fields.__2__current) > 6 )
                    {
                      v80 = StringLiteral_812/*")"*/;
                      *(_QWORD *)&v39->fields._requestTime_5__6 = StringLiteral_812/*")"*/;
                      sub_1C21DDC(
                        (PartyOrganizationUtility_o *)&v39->fields._requestTime_5__6,
                        v80,
                        v74,
                        v75,
                        v76,
                        v77,
                        v78,
                        v79);
                      v81 = System_String__Concat_63129004((System_String_array *)v39, 0LL);
                      v8->fields._errorCode_5__11 = v81;
                      sub_1C21DDC(
                        (PartyOrganizationUtility_o *)&v8->fields._errorCode_5__11,
                        (int64_t)v81,
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
        sub_1C2209C(this, method);
      }
      Parent = System_IO_Directory__GetParent(v8->fields._dlFilePath_5__2, 0LL);
      v169 = Parent;
      if ( !Parent )
        sub_1C22094(0LL, v168);
      if ( (((__int64 (__fastcall *)(System_IO_DirectoryInfo_o *, Il2CppMethodPointer))Parent->klass->vtable._10_get_Exists.method)(
              Parent,
              Parent->klass->vtable._11_Delete.methodPtr) & 1) == 0 )
      {
        v171 = (System_String_o *)((__int64 (__fastcall *)(System_IO_DirectoryInfo_o *, Il2CppMethodPointer))v169->klass->vtable._8_get_FullName.method)(
                                    v169,
                                    v169->klass->vtable._9_get_Name.methodPtr);
        System_IO_Directory__CreateDirectory(v171, 0LL);
      }
      v172 = MovieFileMerge__GetLocalFolderPath(_4__this, v170);
      if ( !CommonServicePluginScript_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CommonServicePluginScript_TypeInfo);
      FreeSize = CommonServicePluginScript__GetFreeSize(v172, 0LL);
      if ( FreeSize >= 1 )
      {
        v174 = ManagerConfig_TypeInfo;
        if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
          v174 = ManagerConfig_TypeInfo;
        }
        if ( FreeSize < v174->static_fields->LIMIT_FREE_SIZE )
        {
          v301 = sub_1C21E4C(&System_IO_IOException_TypeInfo);
          v302 = (System_IO_IOException_o *)sub_1C22084(v301);
          v303 = (System_String_o *)sub_1C21E4C(&StringLiteral_5440/*"Disk full"*/);
          System_IO_IOException___ctor_63255720(v302, v303, 0LL);
          v304 = sub_1C21E4C(&Method_MovieFileMerge__Download_d__40_MoveNext__);
          sub_1C21F60(v302, v304);
        }
      }
      if ( System_IO_File__Exists(v8->fields._dlFilePath_5__2, 0LL) )
        System_IO_File__Delete(v8->fields._dlFilePath_5__2, 0LL);
      ++_4__this->fields.downloadProgress;
      System_IO_File__WriteAllBytes(v8->fields._dlFilePath_5__2, v8->fields._readData_5__5, 0LL);
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
      if ( !byte_4BDB610 )
      {
        sub_1C21E38(&ManagementManager_TypeInfo);
        byte_4BDB610 = 1;
      }
      v89 = ManagementManager_TypeInfo;
      if ( !ManagementManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
        v89 = ManagementManager_TypeInfo;
      }
      isDuringStartup = v89->static_fields->isDuringStartup;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      if ( isDuringStartup )
      {
        v92 = LocalizationManager__Get((System_String_o *)StringLiteral_2175/*"ASSET_LOADER_ERROR_BOOT_RETRY_MESSAGE"*/, 0LL);
        v93 = (ErrorDialog_ClickDelegate_o *)sub_1C22084(ErrorDialog_ClickDelegate_TypeInfo);
        ErrorDialog_ClickDelegate___ctor(v93, (Il2CppObject *)_4__this, Method_MovieFileMerge_EndRetryDialog__, 0LL);
        if ( !Instance )
          goto LABEL_177;
        CommonUI__OpenRetryBootDialog((CommonUI_o *)Instance, (System_String_o *)StringLiteral_1/*""*/, v92, v93, 1, 0LL);
      }
      else
      {
        v238 = LocalizationManager__Get((System_String_o *)StringLiteral_2176/*"ASSET_LOADER_ERROR_TIME_OVER_MESSAGE"*/, 0LL);
        v239 = (ErrorDialog_ClickDelegate_o *)sub_1C22084(ErrorDialog_ClickDelegate_TypeInfo);
        ErrorDialog_ClickDelegate___ctor(v239, (Il2CppObject *)_4__this, Method_MovieFileMerge_EndRetryDialog__, 0LL);
        if ( !Instance )
          goto LABEL_177;
        CommonUI__OpenRetryDialog((CommonUI_o *)Instance, (System_String_o *)StringLiteral_1/*""*/, v238, v239, 1, 0LL);
      }
LABEL_117:
      if ( !_4__this->fields.isErrorDialog )
        goto LABEL_120;
      v240 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C22084(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v240, 0LL);
      v8->fields.__2__current = (Il2CppObject *)v240;
      p__2__current = &v8->fields.__2__current;
      sub_1C21DDC((PartyOrganizationUtility_o *)p__2__current, (int64_t)v240, v241, v242, v243, v244, v245, v246);
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
    v175 = ManagerConfig_TypeInfo;
    if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
      v175 = ManagerConfig_TypeInfo;
    }
    if ( v175->static_fields->UseDebugCommand )
    {
      _4__this->fields.isErrorDialog = 1;
      v176 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      errorCode_5__11 = v8->fields._errorCode_5__11;
      v178 = (CommonUI_o *)v176;
      v179 = (ErrorDialog_ClickDelegate_o *)sub_1C22084(ErrorDialog_ClickDelegate_TypeInfo);
      ErrorDialog_ClickDelegate___ctor(v179, (Il2CppObject *)_4__this, Method_MovieFileMerge_EndWarningDialog__, 0LL);
      if ( !v178 )
        goto LABEL_177;
      *(_QWORD *)&effectDistance.fields.hasValue = 0LL;
      effectDistance.fields.value.fields.y = 0.0;
      CommonUI__OpenWarningDialog(
        v178,
        (System_String_o *)StringLiteral_16213/*"[FFFF80]Download error for debug"*/,
        errorCode_5__11,
        v179,
        1,
        0,
        -1.0,
        1,
        effectDistance,
        0LL);
LABEL_82:
      if ( _4__this->fields.isErrorDialog )
      {
        v180 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C22084(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v180, 0LL);
        v8->fields.__2__current = (Il2CppObject *)v180;
        p__2__current = &v8->fields.__2__current;
        sub_1C21DDC((PartyOrganizationUtility_o *)p__2__current, (int64_t)v180, v181, v182, v183, v184, v185, v186);
        v103 = 5;
        goto LABEL_119;
      }
    }
    if ( v8->fields._isAutoRetry_5__9 )
    {
      autoRetryCount_5__3 = v8->fields._autoRetryCount_5__3;
      v188 = ManagerConfig_TypeInfo;
      if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
        v188 = ManagerConfig_TypeInfo;
      }
      DOWNLOAD_RETRY_DELAY_TIME = v188->static_fields->DOWNLOAD_RETRY_DELAY_TIME;
      v190 = (UnityEngine_WaitForSeconds_o *)sub_1C22084(UnityEngine_WaitForSeconds_TypeInfo);
      UnityEngine_WaitForSeconds___ctor(v190, DOWNLOAD_RETRY_DELAY_TIME * (float)autoRetryCount_5__3, 0LL);
      v8->fields.__2__current = (Il2CppObject *)v190;
      p__2__current = &v8->fields.__2__current;
      sub_1C21DDC((PartyOrganizationUtility_o *)p__2__current, (int64_t)v190, v191, v192, v193, v194, v195, v196);
      v103 = 6;
      goto LABEL_119;
    }
    if ( v8->fields._isCrcError_5__10 )
    {
      v197 = (Il2CppObject *)v8->fields._errorCode_5__11;
      if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
      UnityEngine_Debug__LogError(v197, 0LL);
    }
    else
    {
      MovieFileMerge__AssetLoadLogError(_4__this, v8->fields._errorCode_5__11, v2);
      _4__this->fields.isErrorDialog = 1;
      if ( !ManagementManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
      if ( !byte_4BDB610 )
      {
        sub_1C21E38(&ManagementManager_TypeInfo);
        byte_4BDB610 = 1;
      }
      v287 = ManagementManager_TypeInfo;
      if ( !ManagementManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
        v287 = ManagementManager_TypeInfo;
      }
      v288 = v287->static_fields->isDuringStartup;
      v289 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      errorLocalizeCode_5__12 = v8->fields._errorLocalizeCode_5__12;
      v291 = (CommonUI_o *)v289;
      v292 = (System_String_o *)StringLiteral_1/*""*/;
      if ( v288 )
      {
        if ( errorLocalizeCode_5__12 )
          v293 = v8->fields._errorLocalizeCode_5__12;
        else
          v293 = (System_String_o *)StringLiteral_2175/*"ASSET_LOADER_ERROR_BOOT_RETRY_MESSAGE"*/;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v294 = LocalizationManager__Get(v293, 0LL);
        v295 = (ErrorDialog_ClickDelegate_o *)sub_1C22084(ErrorDialog_ClickDelegate_TypeInfo);
        ErrorDialog_ClickDelegate___ctor(v295, (Il2CppObject *)_4__this, Method_MovieFileMerge_EndRetryDialog__, 0LL);
        if ( !v291 )
          goto LABEL_177;
        CommonUI__OpenRetryBootDialog(v291, v292, v294, v295, 1, 0LL);
      }
      else
      {
        if ( errorLocalizeCode_5__12 )
          v298 = v8->fields._errorLocalizeCode_5__12;
        else
          v298 = (System_String_o *)StringLiteral_2176/*"ASSET_LOADER_ERROR_TIME_OVER_MESSAGE"*/;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v299 = LocalizationManager__Get(v298, 0LL);
        v300 = (ErrorDialog_ClickDelegate_o *)sub_1C22084(ErrorDialog_ClickDelegate_TypeInfo);
        ErrorDialog_ClickDelegate___ctor(v300, (Il2CppObject *)_4__this, Method_MovieFileMerge_EndRetryDialog__, 0LL);
        if ( !v291 )
          goto LABEL_177;
        CommonUI__OpenRetryDialog(v291, v292, v299, v300, 1, 0LL);
      }
LABEL_36:
      if ( _4__this->fields.isErrorDialog )
      {
        v104 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C22084(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v104, 0LL);
        v8->fields.__2__current = (Il2CppObject *)v104;
        p__2__current = &v8->fields.__2__current;
        sub_1C21DDC((PartyOrganizationUtility_o *)p__2__current, (int64_t)v104, v105, v106, v107, v108, v109, v110);
        v103 = 7;
        goto LABEL_119;
      }
    }
  }
LABEL_92:
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4BD7BC5 )
  {
    sub_1C21E38(&NetworkManager_TypeInfo);
    byte_4BD7BC5 = 1;
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
    v198 = (PartyOrganizationUtility_o *)&_4__this->fields.loader;
    this = loader;
    if ( !loader )
      goto LABEL_177;
    UnityEngine_Networking_UnityWebRequest__Dispose((UnityEngine_Networking_UnityWebRequest_o *)this, 0LL);
    v198->klass = 0LL;
    sub_1C21DDC(v198, 0LL, v200, v201, v202, v203, v204, v205);
    v8->fields._readData_5__5 = 0LL;
    p_readData_5__5 = (PartyOrganizationUtility_o *)&v8->fields._readData_5__5;
  }
  else
  {
    if ( !_4__this )
      goto LABEL_177;
    v213 = &_4__this->fields.loader;
    this = (MovieFileMerge__Download_d__40_o *)_4__this->fields.loader;
    if ( v8->fields._isDownload_5__4 )
    {
      if ( !this )
        goto LABEL_177;
      UnityEngine_Networking_UnityWebRequest__Dispose((UnityEngine_Networking_UnityWebRequest_o *)this, 0LL);
      *v213 = 0LL;
      sub_1C21DDC((PartyOrganizationUtility_o *)&_4__this->fields.loader, 0LL, v214, v215, v216, v217, v218, v219);
      v8->fields._readData_5__5 = 0LL;
      sub_1C21DDC((PartyOrganizationUtility_o *)&v8->fields._readData_5__5, 0LL, v220, v221, v222, v223, v224, v225);
      if ( !v8->fields._isCrcError_5__10 )
      {
LABEL_120:
        v8->fields._wait_5__8 = 0LL;
        sub_1C21DDC((PartyOrganizationUtility_o *)&v8->fields._wait_5__8, 0LL, (int64_t)v2, v3, v4, v5, v6, v7);
        v8->fields._errorCode_5__11 = 0LL;
        sub_1C21DDC((PartyOrganizationUtility_o *)&v8->fields._errorCode_5__11, 0LL, v247, v248, v249, v250, v251, v252);
        v8->fields._errorLocalizeCode_5__12 = 0LL;
        sub_1C21DDC(
          (PartyOrganizationUtility_o *)&v8->fields._errorLocalizeCode_5__12,
          0LL,
          v253,
          v254,
          v255,
          v256,
          v257,
          v258);
        do
        {
          v8->fields._readData_5__5 = 0LL;
          sub_1C21DDC((PartyOrganizationUtility_o *)&v8->fields._readData_5__5, 0LL, v259, v260, v261, v262, v263, v264);
LABEL_172:
          v8->fields._readData_5__5 = 0LL;
          sub_1C21DDC((PartyOrganizationUtility_o *)&v8->fields._readData_5__5, 0LL, v26, v27, v28, v29, v30, v31);
        }
        while ( !v8->fields._isDownload_5__4 );
        v305 = UnityEngine_Networking_UnityWebRequest__Get(_4__this->fields.downloadingURL, 0LL);
        _4__this->fields.loader = v305;
        v306 = (PartyOrganizationUtility_o *)&_4__this->fields.loader;
        sub_1C21DDC(v306, (int64_t)v305, v307, v308, v309, v310, v311, v312);
        this = (MovieFileMerge__Download_d__40_o *)v306->klass;
        if ( v306->klass )
        {
          UnityEngine_Networking_UnityWebRequest__SendWebRequest((UnityEngine_Networking_UnityWebRequest_o *)this, 0LL);
          v8->fields.__2__current = 0LL;
          v313 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
          sub_1C21DDC(v313, 0LL, v314, v315, v316, v317, v318, v319);
          LOBYTE(this) = 1;
          *(_DWORD *)&v313[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
          return (char)this;
        }
        goto LABEL_177;
      }
      if ( !v8->fields._errorCode_5__11 )
        goto LABEL_114;
      v226 = ManagerConfig_TypeInfo;
      if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
        v226 = ManagerConfig_TypeInfo;
      }
      if ( !v226->static_fields->UseDebugCommand )
        goto LABEL_114;
      _4__this->fields.isErrorDialog = 1;
      v227 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v228 = v8->fields._errorCode_5__11;
      v229 = (CommonUI_o *)v227;
      v230 = (ErrorDialog_ClickDelegate_o *)sub_1C22084(ErrorDialog_ClickDelegate_TypeInfo);
      ErrorDialog_ClickDelegate___ctor(v230, (Il2CppObject *)_4__this, Method_MovieFileMerge_EndWarningDialog__, 0LL);
      if ( !v229 )
        goto LABEL_177;
      *(_QWORD *)&effectDistancea.fields.hasValue = 0LL;
      effectDistancea.fields.value.fields.y = 0.0;
      CommonUI__OpenWarningDialog(
        v229,
        (System_String_o *)StringLiteral_16213/*"[FFFF80]Download error for debug"*/,
        v228,
        v230,
        1,
        0,
        -1.0,
        1,
        effectDistancea,
        0LL);
LABEL_57:
      if ( _4__this->fields.isErrorDialog )
      {
        v147 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C22084(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v147, 0LL);
        v8->fields.__2__current = (Il2CppObject *)v147;
        p__2__current = &v8->fields.__2__current;
        sub_1C21DDC((PartyOrganizationUtility_o *)p__2__current, (int64_t)v147, v148, v149, v150, v151, v152, v153);
        v103 = 8;
      }
      else
      {
LABEL_114:
        v231 = (UnityEngine_WaitForSeconds_o *)sub_1C22084(UnityEngine_WaitForSeconds_TypeInfo);
        UnityEngine_WaitForSeconds___ctor(v231, 1.0, 0LL);
        v8->fields.__2__current = (Il2CppObject *)v231;
        p__2__current = &v8->fields.__2__current;
        sub_1C21DDC((PartyOrganizationUtility_o *)p__2__current, (int64_t)v231, v232, v233, v234, v235, v236, v237);
        v103 = 9;
      }
LABEL_119:
      *((_DWORD *)p__2__current - 2) = v103;
      LOBYTE(this) = 1;
      return (char)this;
    }
    if ( !this )
      return (char)this;
    UnityEngine_Networking_UnityWebRequest__Dispose((UnityEngine_Networking_UnityWebRequest_o *)this, 0LL);
    p_readData_5__5 = (PartyOrganizationUtility_o *)&_4__this->fields.loader;
    *v213 = 0LL;
  }
  sub_1C21DDC(p_readData_5__5, 0LL, v206, v207, v208, v209, v210, v211);
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

  v2 = sub_1C21E4C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C22084(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C21E4C(&Method_MovieFileMerge__Download_d__40_System_Collections_IEnumerator_Reset__);
  sub_1C21F60(v3, v4);
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
  int32_t _1__state; // w8
  struct MovieFileMerge_o *_4__this; // x20
  System_Collections_Generic_List_string__o *SplitFileList; // x0
  System_String_o *outputMergeFile; // x21
  System_Collections_Generic_List_string__o *v7; // x22
  FileMergeAndSplit_Merge_o *v8; // x23
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  FileMergeAndSplit_Merge_o *mergeClass; // x21
  System_Action_object__o *v16; // x22
  System_Collections_IEnumerator_o *v17; // x0
  PartyOrganizationUtility_o *p__2__current; // x19
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  bool result; // w0
  struct FileMergeAndSplit_CRCChecker_o *crcCheckerClass; // x8
  struct FileMergeAndSplit_Merge_o *v27; // x8
  System_String_o *v28; // x21
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x0
  System_Collections_Generic_List_uint__o *v30; // x22
  FileMergeAndSplit_CRCChecker_o *v31; // x23
  const MethodInfo *v32; // x3
  PartyOrganizationUtility_o *p_crcCheckerClass; // x20
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  System_Collections_IEnumerator_o *v40; // x0
  PartyOrganizationUtility_o *v41; // x19
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7

  v2 = this;
  if ( (byte_4BDB582 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_Exception__TypeInfo);
    sub_1C21E38(&FileMergeAndSplit_CRCChecker_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__uint__get_Values__);
    sub_1C21E38(&Method_System_Linq_Enumerable_ToList_uint___);
    sub_1C21E38(&FileMergeAndSplit_Merge_TypeInfo);
    this = (MovieFileMerge__Merge_d__34_o *)sub_1C21E38(&Method_MovieFileMerge__Merge_b__34_0__);
    byte_4BDB582 = 1;
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
        v7 = SplitFileList;
        v8 = (FileMergeAndSplit_Merge_o *)sub_1C22084(FileMergeAndSplit_Merge_TypeInfo);
        FileMergeAndSplit_Merge___ctor(v8, v7, outputMergeFile, 0LL);
        _4__this->fields.mergeClass = v8;
        sub_1C21DDC(
          (PartyOrganizationUtility_o *)&_4__this->fields.mergeClass,
          (int64_t)v8,
          v9,
          v10,
          v11,
          v12,
          v13,
          v14);
        mergeClass = _4__this->fields.mergeClass;
        v16 = (System_Action_object__o *)sub_1C22084(System_Action_Exception__TypeInfo);
        System_Action_object____ctor(v16, (Il2CppObject *)_4__this, Method_MovieFileMerge__Merge_b__34_0__, 0LL);
        if ( mergeClass )
        {
          v17 = FileMergeAndSplit_Merge__Run(mergeClass, (System_Action_Exception__o *)v16, 0LL);
          v2->fields.__2__current = (Il2CppObject *)v17;
          p__2__current = (PartyOrganizationUtility_o *)&v2->fields.__2__current;
          sub_1C21DDC(p__2__current, (int64_t)v17, v19, v20, v21, v22, v23, v24);
          result = 1;
          *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
          return result;
        }
      }
LABEL_23:
      sub_1C22094(this, method);
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
  this = (MovieFileMerge__Merge_d__34_o *)_4__this->fields.AllDownLoadFilePathCRCDictionary;
  if ( !this )
    goto LABEL_23;
  v28 = _4__this->fields.outputMergeFile;
  Values = System_Collections_Generic_Dictionary_object__uint___get_Values(
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)this,
             (const MethodInfo_332841C *)Method_System_Collections_Generic_Dictionary_string__uint__get_Values__);
  v30 = (System_Collections_Generic_List_uint__o *)System_Linq_Enumerable__ToList_uint_(
                                                     (System_Collections_Generic_IEnumerable_TSource__o *)Values,
                                                     (const MethodInfo_2FED6C0 *)Method_System_Linq_Enumerable_ToList_uint___);
  v31 = (FileMergeAndSplit_CRCChecker_o *)sub_1C22084(FileMergeAndSplit_CRCChecker_TypeInfo);
  FileMergeAndSplit_CRCChecker___ctor(v31, v28, v30, v32);
  _4__this->fields.crcCheckerClass = v31;
  p_crcCheckerClass = (PartyOrganizationUtility_o *)&_4__this->fields.crcCheckerClass;
  sub_1C21DDC(p_crcCheckerClass, (int64_t)v31, v34, v35, v36, v37, v38, v39);
  this = (MovieFileMerge__Merge_d__34_o *)p_crcCheckerClass->klass;
  if ( !p_crcCheckerClass->klass )
    goto LABEL_23;
  v40 = FileMergeAndSplit_CRCChecker__Run((FileMergeAndSplit_CRCChecker_o *)this, method);
  v2->fields.__2__current = (Il2CppObject *)v40;
  v41 = (PartyOrganizationUtility_o *)&v2->fields.__2__current;
  sub_1C21DDC(v41, (int64_t)v40, v42, v43, v44, v45, v46, v47);
  *(_DWORD *)&v41[-1].fields._IsQuestStartMenuMode_k__BackingField = 2;
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

  v2 = sub_1C21E4C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C22084(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C21E4C(&Method_MovieFileMerge__Merge_d__34_System_Collections_IEnumerator_Reset__);
  sub_1C21F60(v3, v4);
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
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  MovieFileMerge__PlayCRIMovie_d__30_o *v8; // x19
  int32_t _1__state; // w8
  Il2CppObject *v10; // x21
  Il2CppObject **p__8__1; // x20
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  Il2CppObject *object; // x21
  Il2CppObject *v19; // x21
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  Il2CppObject *v26; // x8
  CRIMoviePlayer_o *klass; // x21
  System_String_o *filePath; // x22
  BgmManager_c *v29; // x0
  Il2CppObject *v30; // x24
  float masterVolume; // s8
  System_Action_o *v32; // x23
  struct MovieFileMerge___c__DisplayClass30_0_o *_8__1; // x8
  PartyOrganizationUtility_o *p__2__current; // x19
  bool result; // w0

  v8 = this;
  if ( (byte_4BDB583 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&BgmManager_TypeInfo);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_CRIMoviePlayer___);
    sub_1C21E38(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_UnityEngine_Resources_Load_GameObject___);
    sub_1C21E38(&Method_MovieFileMerge___c__DisplayClass30_0__PlayCRIMovie_b__0__);
    sub_1C21E38(&MovieFileMerge___c__DisplayClass30_0_TypeInfo);
    this = (MovieFileMerge__PlayCRIMovie_d__30_o *)sub_1C21E38(&StringLiteral_4025/*"CRIMovie/CRIMoviePlayerWithPanel"*/);
    byte_4BDB583 = 1;
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
    v10 = (Il2CppObject *)sub_1C22084(MovieFileMerge___c__DisplayClass30_0_TypeInfo);
    System_Object___ctor(v10, 0LL);
    v8->fields.__8__1 = (struct MovieFileMerge___c__DisplayClass30_0_o *)v10;
    p__8__1 = (Il2CppObject **)&v8->fields.__8__1;
    sub_1C21DDC((PartyOrganizationUtility_o *)&v8->fields.__8__1, (int64_t)v10, v12, v13, v14, v15, v16, v17);
    object = UnityEngine_Resources__Load_object_(
               (System_String_o *)StringLiteral_4025/*"CRIMovie/CRIMoviePlayerWithPanel"*/,
               (const MethodInfo_3045110 *)Method_UnityEngine_Resources_Load_GameObject___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (MovieFileMerge__PlayCRIMovie_d__30_o *)UnityEngine_Object__Instantiate_object_(
                                                     object,
                                                     (const MethodInfo_30358BC *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !this )
      goto LABEL_25;
    v19 = *p__8__1;
    this = (MovieFileMerge__PlayCRIMovie_d__30_o *)UnityEngine_GameObject__GetComponent_object_(
                                                     (UnityEngine_GameObject_o *)this,
                                                     (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_CRIMoviePlayer___);
    if ( !v19 )
      goto LABEL_25;
    v19[1].klass = (Il2CppClass *)this;
    sub_1C21DDC((PartyOrganizationUtility_o *)&v19[1], (int64_t)this, v20, v21, v22, v23, v24, v25);
    v26 = *p__8__1;
    if ( !*p__8__1 )
      goto LABEL_25;
    LOBYTE(v26[1].monitor) = 1;
    klass = (CRIMoviePlayer_o *)v26[1].klass;
    filePath = v8->fields.filePath;
    if ( !BgmManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
    if ( !byte_4BD7BC6 )
    {
      sub_1C21E38(&BgmManager_TypeInfo);
      byte_4BD7BC6 = 1;
    }
    v29 = BgmManager_TypeInfo;
    if ( !BgmManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
      v29 = BgmManager_TypeInfo;
    }
    v30 = *p__8__1;
    masterVolume = v29->static_fields->masterVolume;
    v32 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
    System_Action___ctor(v32, v30, Method_MovieFileMerge___c__DisplayClass30_0__PlayCRIMovie_b__0__, 0LL);
    if ( !klass
      || (CRIMoviePlayer__Initialize(klass, filePath, filePath, masterVolume, 1, 0LL, v32, 1, 0LL, 0, 0, 1, 0LL),
          !*p__8__1)
      || (this = (MovieFileMerge__PlayCRIMovie_d__30_o *)(*p__8__1)[1].klass) == 0LL )
    {
LABEL_25:
      sub_1C22094(this, method);
    }
    CRIMoviePlayer__MoviePlay((CRIMoviePlayer_o *)this, 1, 1, 1, 0LL);
  }
  _8__1 = v8->fields.__8__1;
  if ( !_8__1 )
    goto LABEL_25;
  if ( _8__1->fields.wait )
  {
    v8->fields.__2__current = 0LL;
    p__2__current = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
    sub_1C21DDC(p__2__current, 0LL, v2, v3, v4, v5, v6, v7);
    result = 1;
    *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
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

  v2 = sub_1C21E4C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C22084(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C21E4C(&Method_MovieFileMerge__PlayCRIMovie_d__30_System_Collections_IEnumerator_Reset__);
  sub_1C21F60(v3, v4);
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
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  int32_t v15; // w8

  _1__state = this->fields.__1__state;
  result = 0;
  if ( _1__state == 1 )
  {
    v15 = -1;
  }
  else
  {
    if ( _1__state )
      return result;
    _4__this = this->fields.__4__this;
    this->fields.__1__state = -1;
    if ( !_4__this )
      sub_1C22094(0LL, method);
    v8 = (Il2CppObject *)MovieFileMerge__PlayMP4_38991564(_4__this, _4__this->fields.outputMergeFile, v2, v3);
    this->fields.__2__current = v8;
    sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.__2__current, (int64_t)v8, v9, v10, v11, v12, v13, v14);
    v15 = 1;
    result = 1;
  }
  this->fields.__1__state = v15;
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

  v2 = sub_1C21E4C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C22084(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C21E4C(&Method_MovieFileMerge__PlayMP4_d__28_System_Collections_IEnumerator_Reset__);
  sub_1C21F60(v3, v4);
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
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  int32_t v16; // w8
  UnityEngine_WaitForEndOfFrame_o *v17; // x20
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  Il2CppObject *v24; // x0
  Il2CppObject **p__2__current; // x19
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7

  if ( (byte_4BDB584 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_WaitForEndOfFrame_TypeInfo);
    byte_4BDB584 = 1;
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
        sub_1C22094(IsNullOrEmpty, v6);
      v24 = (Il2CppObject *)MovieFileMerge__PlayCRIMovie((MovieFileMerge_o *)IsNullOrEmpty, this->fields.filePath, v7);
      this->fields.__2__current = v24;
      p__2__current = &this->fields.__2__current;
      sub_1C21DDC((PartyOrganizationUtility_o *)p__2__current, (int64_t)v24, v26, v27, v28, v29, v30, v31);
      result = 1;
      *((_DWORD *)p__2__current - 2) = 1;
      break;
    case 1:
      this->fields.__1__state = -1;
      v17 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C22084(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v17, 0LL);
      this->fields.__2__current = (Il2CppObject *)v17;
      sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.__2__current, (int64_t)v17, v18, v19, v20, v21, v22, v23);
      v16 = 2;
      goto LABEL_9;
    case 2:
      this->fields.__1__state = -1;
      v9 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C22084(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v9, 0LL);
      this->fields.__2__current = (Il2CppObject *)v9;
      sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.__2__current, (int64_t)v9, v10, v11, v12, v13, v14, v15);
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

  v2 = sub_1C21E4C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C22084(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C21E4C(&Method_MovieFileMerge__PlayMP4_d__29_System_Collections_IEnumerator_Reset__);
  sub_1C21F60(v3, v4);
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
    sub_1C22094(0LL, method);
  CRIMoviePlayer__Dispose(player, 0LL);
  this->fields.wait = 0;
}