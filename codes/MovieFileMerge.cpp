void __fastcall MovieFileMerge___ctor(MovieFileMerge_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_Dictionary_TKey__TValue__o *v4; // x20
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7
  System_Collections_Generic_Dictionary_TKey__TValue__o *v11; // x20
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7

  if ( (byte_4B65BF7 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_string__uint___ctor__, method);
    sub_1BE4ACC(&System_Collections_Generic_Dictionary_string__uint__TypeInfo, v3);
    byte_4B65BF7 = 1;
  }
  v4 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1BE4D18(System_Collections_Generic_Dictionary_string__uint__TypeInfo);
  System_Collections_Generic_Dictionary_object__uint____ctor(
    v4,
    (const MethodInfo_32C17DC *)Method_System_Collections_Generic_Dictionary_string__uint___ctor__);
  this->fields.AllDownLoadFilePathCRCDictionary = (struct System_Collections_Generic_Dictionary_string__uint__o *)v4;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.AllDownLoadFilePathCRCDictionary,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  v11 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1BE4D18(System_Collections_Generic_Dictionary_string__uint__TypeInfo);
  System_Collections_Generic_Dictionary_object__uint____ctor(
    v11,
    (const MethodInfo_32C17DC *)Method_System_Collections_Generic_Dictionary_string__uint___ctor__);
  this->fields.RequireDownLoadFilePathCRCDictionary = (struct System_Collections_Generic_Dictionary_string__uint__o *)v11;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.RequireDownLoadFilePathCRCDictionary,
    (int64_t)v11,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
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
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  Il2CppObject *v26; // x21
  int64_t v27; // x1
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  int64_t v34; // x1
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  int64_t v41; // x1
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  int64_t v48; // x1
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  int64_t v55; // x1
  int64_t v56; // x2
  int32_t v57; // w3
  System_String_o *v58; // x4
  BattleSetupInfo_o *v59; // x5
  FollowerInfo_o *v60; // x6
  PartyListViewItem_o *v61; // x7
  int64_t v62; // x1
  int64_t v63; // x2
  int32_t v64; // w3
  System_String_o *v65; // x4
  BattleSetupInfo_o *v66; // x5
  FollowerInfo_o *v67; // x6
  PartyListViewItem_o *v68; // x7
  int64_t v69; // x1
  int64_t v70; // x2
  int32_t v71; // w3
  System_String_o *v72; // x4
  BattleSetupInfo_o *v73; // x5
  FollowerInfo_o *v74; // x6
  PartyListViewItem_o *v75; // x7
  int64_t v76; // x1
  __int64 v77; // x22
  __int64 v78; // x24

  v3 = errorCode;
  if ( (byte_4B65BF5 & 1) == 0 )
  {
    sub_1BE4ACC(&UnityEngine_Debug_TypeInfo, errorCode);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__, v5);
    sub_1BE4ACC(&string___TypeInfo, v6);
    sub_1BE4ACC(&StringLiteral_14309/*"The request timed out."*/, v7);
    sub_1BE4ACC(&StringLiteral_14239/*"The network connection was lost."*/, v8);
    sub_1BE4ACC(&StringLiteral_4774/*"Connection reset by peer"*/, v9);
    sub_1BE4ACC(&StringLiteral_5139/*"DLErrorType"*/, v10);
    sub_1BE4ACC(&StringLiteral_5138/*"DLErrorAsset"*/, v11);
    sub_1BE4ACC(&StringLiteral_4773/*"Connection refused"*/, v12);
    sub_1BE4ACC(&StringLiteral_9583/*"No address associated with hostname"*/, v13);
    sub_1BE4ACC(&StringLiteral_2518/*"AssetBundle file download time over"*/, v14);
    sub_1BE4ACC(&StringLiteral_13018/*"Software caused connection abort"*/, v15);
    sub_1BE4ACC(&StringLiteral_4775/*"Connection timed out"*/, v16);
    sub_1BE4ACC(&StringLiteral_2521/*"AssetLoadError"*/, v17);
    byte_4B65BF5 = 1;
  }
  Instance = (Il2CppObject *)sub_1BE4B74(string___TypeInfo, 8LL);
  if ( !Instance )
    goto LABEL_28;
  v26 = Instance;
  if ( !LODWORD(Instance[1].monitor) )
    goto LABEL_18;
  v27 = StringLiteral_9583/*"No address associated with hostname"*/;
  Instance[2].klass = (Il2CppClass *)StringLiteral_9583/*"No address associated with hostname"*/;
  sub_1BE4A70((PartyOrganizationUtility_o *)&Instance[2], v27, v20, v21, v22, v23, v24, v25);
  if ( LODWORD(v26[1].monitor) <= 1 )
    goto LABEL_18;
  v34 = StringLiteral_2518/*"AssetBundle file download time over"*/;
  v26[2].monitor = (void *)StringLiteral_2518/*"AssetBundle file download time over"*/;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v26[2].monitor, v34, v28, v29, v30, v31, v32, v33);
  if ( LODWORD(v26[1].monitor) <= 2 )
    goto LABEL_18;
  v41 = StringLiteral_14239/*"The network connection was lost."*/;
  v26[3].klass = (Il2CppClass *)StringLiteral_14239/*"The network connection was lost."*/;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v26[3], v41, v35, v36, v37, v38, v39, v40);
  if ( LODWORD(v26[1].monitor) <= 3 )
    goto LABEL_18;
  v48 = StringLiteral_4774/*"Connection reset by peer"*/;
  v26[3].monitor = (void *)StringLiteral_4774/*"Connection reset by peer"*/;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v26[3].monitor, v48, v42, v43, v44, v45, v46, v47);
  if ( LODWORD(v26[1].monitor) <= 4 )
    goto LABEL_18;
  v55 = StringLiteral_13018/*"Software caused connection abort"*/;
  v26[4].klass = (Il2CppClass *)StringLiteral_13018/*"Software caused connection abort"*/;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v26[4], v55, v49, v50, v51, v52, v53, v54);
  if ( LODWORD(v26[1].monitor) <= 5
    || (v62 = StringLiteral_4775/*"Connection timed out"*/,
        v26[4].monitor = (void *)StringLiteral_4775/*"Connection timed out"*/,
        sub_1BE4A70((PartyOrganizationUtility_o *)&v26[4].monitor, v62, v56, v57, v58, v59, v60, v61),
        LODWORD(v26[1].monitor) <= 6)
    || (v69 = StringLiteral_4773/*"Connection refused"*/,
        v26[5].klass = (Il2CppClass *)StringLiteral_4773/*"Connection refused"*/,
        sub_1BE4A70((PartyOrganizationUtility_o *)&v26[5], v69, v63, v64, v65, v66, v67, v68),
        LODWORD(v26[1].monitor) <= 7) )
  {
LABEL_18:
    sub_1BE4D30(Instance, v19);
  }
  v76 = StringLiteral_14309/*"The request timed out."*/;
  v26[5].monitor = (void *)StringLiteral_14309/*"The request timed out."*/;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v26[5].monitor, v76, v70, v71, v72, v73, v74, v75);
  if ( (int)v26[1].monitor < 1 )
  {
LABEL_19:
    if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
    goto LABEL_27;
  }
  v77 = 0LL;
  v78 = (unsigned int)v26[1].monitor - 1LL;
  while ( 1 )
  {
    if ( !v3 )
      goto LABEL_28;
    Instance = (Il2CppObject *)System_String__Contains(v3, *((System_String_o **)&v26[2].klass + v77), 0LL);
    if ( ((unsigned __int8)Instance & 1) != 0 )
      break;
    if ( v78 == v77 )
      goto LABEL_19;
    if ( ++v77 >= (unsigned __int64)LODWORD(v26[1].monitor) )
      goto LABEL_18;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
  if ( !Instance )
LABEL_28:
    sub_1BE4D28(Instance, v19);
  CrashReporter__AddCustomKey(
    (CrashReporter_o *)Instance,
    (System_String_o *)StringLiteral_5138/*"DLErrorAsset"*/,
    this->fields.downloadingURL,
    0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
  if ( (unsigned int)v77 >= LODWORD(v26[1].monitor) )
    goto LABEL_18;
  if ( !Instance )
    goto LABEL_28;
  CrashReporter__AddCustomKey(
    (CrashReporter_o *)Instance,
    (System_String_o *)StringLiteral_5139/*"DLErrorType"*/,
    *((System_String_o **)&v26[2].klass + v77),
    0LL);
  if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
  v3 = (System_String_o *)StringLiteral_2521/*"AssetLoadError"*/;
LABEL_27:
  UnityEngine_Debug__LogError((Il2CppObject *)v3, 0LL);
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

  if ( (byte_4B65BEC & 1) == 0 )
  {
    sub_1BE4ACC(&MovieFileMerge__CRCDownloadAndCheck_d__32_TypeInfo, method);
    byte_4B65BEC = 1;
  }
  v3 = sub_1BE4D18(MovieFileMerge__CRCDownloadAndCheck_d__32_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v3 + 32), (int64_t)this, v4, v5, v6, v7, v8, v9);
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

  if ( (byte_4B65BF3 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_string__uint__Add__, dataPath);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_string__uint___ctor__, v4);
    sub_1BE4ACC(&System_Collections_Generic_Dictionary_string__uint__TypeInfo, v5);
    byte_4B65BF3 = 1;
  }
  result = 0;
  v6 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1BE4D18(System_Collections_Generic_Dictionary_string__uint__TypeInfo);
  System_Collections_Generic_Dictionary_object__uint____ctor(
    v6,
    (const MethodInfo_32C17DC *)Method_System_Collections_Generic_Dictionary_string__uint___ctor__);
  AllLines = System_IO_File__ReadAllLines(dataPath, 0LL);
  if ( !AllLines )
LABEL_18:
    sub_1BE4D28(AllLines, v8);
  max_length = AllLines->max_length;
  v10 = AllLines;
  if ( max_length >= 1 )
  {
    v11 = 0;
    while ( 1 )
    {
      if ( v11 >= max_length )
LABEL_17:
        sub_1BE4D30(AllLines, v8);
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
        (const MethodInfo_32C2190 *)Method_System_Collections_Generic_Dictionary_string__uint__Add__);
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
  if ( (byte_4B65BEF & 1) == 0 )
  {
    sub_1BE4ACC(&System_IO_Path_TypeInfo, method);
    sub_1BE4ACC(&StringLiteral_25398/*"{0}/{1}"*/, v3);
    folder = (System_String_o *)sub_1BE4ACC(&StringLiteral_1120/*"/"*/, v4);
    byte_4B65BEF = 1;
  }
  if ( !v2 )
    sub_1BE4D28(folder, method);
  if ( System_String__EndsWith(v2, (System_String_o *)StringLiteral_1120/*"/"*/, 0LL) )
    v2 = System_String__TrimEnd_62728700(v2, 0x2Fu, 0LL);
  if ( !System_IO_Path_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_IO_Path_TypeInfo);
  FileName = System_IO_Path__GetFileName(v2, 0LL);
  LocalDataPath = (Il2CppObject *)MovieFileMerge__GetLocalDataPath((const MethodInfo *)FileName);
  v7 = System_String__Format_62713180(
         (System_String_o *)StringLiteral_25398/*"{0}/{1}"*/,
         LocalDataPath,
         (Il2CppObject *)FileName,
         0LL);
  if ( System_IO_Directory__Exists(v7, 0LL) )
    System_IO_Directory__Delete(v7, 1, 0LL);
}


void __fastcall MovieFileMerge__Delete_38656284(const MethodInfo *method)
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

  if ( (byte_4B65BF2 & 1) == 0 )
  {
    sub_1BE4ACC(&MovieFileMerge__Download_d__40_TypeInfo, fileName);
    byte_4B65BF2 = 1;
  }
  v7 = sub_1BE4D18(MovieFileMerge__Download_d__40_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  *(_DWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 32) = this;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v7 + 32), (int64_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v7 + 40) = fileName;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v7 + 40), (int64_t)fileName, v14, v15, v16, v17, v18, v19);
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

  if ( (byte_4B65BED & 1) == 0 )
  {
    sub_1BE4ACC(&MovieFileMerge__DownloadMovie_d__33_TypeInfo, method);
    byte_4B65BED = 1;
  }
  v3 = sub_1BE4D18(MovieFileMerge__DownloadMovie_d__33_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v3 + 32), (int64_t)this, v4, v5, v6, v7, v8, v9);
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
  if ( (byte_4B65BE3 & 1) == 0 )
  {
    sub_1BE4ACC(&FileMergeAndSplit_TypeInfo, assetFolderURL);
    sub_1BE4ACC(&System_IO_Path_TypeInfo, v4);
    sub_1BE4ACC(&StringLiteral_1120/*"/"*/, v5);
    sub_1BE4ACC(&StringLiteral_25403/*"{0}/{1}/{2}"*/, v6);
    this = (MovieFileMerge_o *)sub_1BE4ACC(&StringLiteral_25402/*"{0}/{1}/{1}.usm"*/, v7);
    byte_4B65BE3 = 1;
  }
  if ( !v3 )
    sub_1BE4D28(this, assetFolderURL);
  if ( System_String__EndsWith(v3, (System_String_o *)StringLiteral_1120/*"/"*/, 0LL) )
    v3 = System_String__TrimEnd_62728700(v3, 0x2Fu, 0LL);
  if ( !System_IO_Path_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_IO_Path_TypeInfo);
  FileName = System_IO_Path__GetFileName(v3, 0LL);
  LocalDataPath = (Il2CppObject *)MovieFileMerge__GetLocalDataPath((const MethodInfo *)FileName);
  v10 = System_String__Format_62713180(
          (System_String_o *)StringLiteral_25402/*"{0}/{1}/{1}.usm"*/,
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
  v14 = System_String__Format_62713248(
          (System_String_o *)StringLiteral_25403/*"{0}/{1}/{2}"*/,
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

  if ( (byte_4B65BE7 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_string__uint__get_Count__, method);
    byte_4B65BE7 = 1;
  }
  RequireDownLoadFilePathCRCDictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.RequireDownLoadFilePathCRCDictionary;
  v4 = 0.0;
  if ( RequireDownLoadFilePathCRCDictionary
    && System_Collections_Generic_Dictionary_object__uint___get_Count(
         RequireDownLoadFilePathCRCDictionary,
         (const MethodInfo_32C1E60 *)Method_System_Collections_Generic_Dictionary_string__uint__get_Count__) )
  {
    v6 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.RequireDownLoadFilePathCRCDictionary;
    if ( !v6 )
      sub_1BE4D28(0LL, v5);
    downloadProgress = this->fields.downloadProgress;
    return (float)downloadProgress
         / (float)System_Collections_Generic_Dictionary_object__uint___get_Count(
                    v6,
                    (const MethodInfo_32C1E60 *)Method_System_Collections_Generic_Dictionary_string__uint__get_Count__);
  }
  return v4;
}


double __fastcall MovieFileMerge__GetDownloadSize(MovieFileMerge_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_TKey__TValue__o *RequireDownLoadFilePathCRCDictionary; // x0

  if ( (byte_4B65BE6 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_string__uint__get_Count__, method);
    byte_4B65BE6 = 1;
  }
  RequireDownLoadFilePathCRCDictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.RequireDownLoadFilePathCRCDictionary;
  if ( !RequireDownLoadFilePathCRCDictionary )
    sub_1BE4D28(0LL, method);
  return (double)(System_Collections_Generic_Dictionary_object__uint___get_Count(
                    RequireDownLoadFilePathCRCDictionary,
                    (const MethodInfo_32C1E60 *)Method_System_Collections_Generic_Dictionary_string__uint__get_Count__) << 20);
}


System_String_o *__fastcall MovieFileMerge__GetLocalDataPath(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  System_String_o *persistentDataPath; // x0

  if ( (byte_4B65BE4 & 1) == 0 )
  {
    sub_1BE4ACC(&UnityEngine_Application_TypeInfo, v1);
    sub_1BE4ACC(&StringLiteral_1175/*"/extend-data/movie"*/, v2);
    byte_4B65BE4 = 1;
  }
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
  persistentDataPath = UnityEngine_Application__get_persistentDataPath(0LL);
  return System_String__Concat_62698808(persistentDataPath, (System_String_o *)StringLiteral_1175/*"/extend-data/movie"*/, 0LL);
}


System_String_o *__fastcall MovieFileMerge__GetLocalFolderPath(MovieFileMerge_o *this, const MethodInfo *method)
{
  MovieFileMerge_o *v2; // x19
  Il2CppObject *LocalDataPath; // x0

  v2 = this;
  if ( (byte_4B65BF0 & 1) == 0 )
  {
    this = (MovieFileMerge_o *)sub_1BE4ACC(&StringLiteral_25398/*"{0}/{1}"*/, method);
    byte_4B65BF0 = 1;
  }
  LocalDataPath = (Il2CppObject *)MovieFileMerge__GetLocalDataPath((const MethodInfo *)this);
  return System_String__Format_62713180(
           (System_String_o *)StringLiteral_25398/*"{0}/{1}"*/,
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

  if ( (byte_4B65BF1 & 1) == 0 )
  {
    sub_1BE4ACC(&Crc32_TypeInfo, method);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_string__uint__Add__, v3);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_string__uint__GetEnumerator__, v4);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_string__uint___ctor__, v5);
    sub_1BE4ACC(&System_Collections_Generic_Dictionary_string__uint__TypeInfo, v6);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_Enumerator_string__uint__Dispose__, v7);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_Enumerator_string__uint__MoveNext__, v8);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_Enumerator_string__uint__get_Current__, v9);
    sub_1BE4ACC(&Method_System_Collections_Generic_KeyValuePair_string__uint__get_Key__, v10);
    sub_1BE4ACC(&Method_System_Collections_Generic_KeyValuePair_string__uint__get_Value__, v11);
    sub_1BE4ACC(&StringLiteral_25398/*"{0}/{1}"*/, v12);
    byte_4B65BF1 = 1;
  }
  memset(&v33, 0, sizeof(v33));
  v32 = 0;
  v13 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1BE4D18(System_Collections_Generic_Dictionary_string__uint__TypeInfo);
  System_Collections_Generic_Dictionary_object__uint____ctor(
    v13,
    (const MethodInfo_32C17DC *)Method_System_Collections_Generic_Dictionary_string__uint___ctor__);
  AllDownLoadFilePathCRCDictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.AllDownLoadFilePathCRCDictionary;
  if ( !AllDownLoadFilePathCRCDictionary )
    sub_1BE4D28(0LL, v14);
  System_Collections_Generic_Dictionary_object__uint___GetEnumerator(
    &v31,
    AllDownLoadFilePathCRCDictionary,
    (const MethodInfo_32C2580 *)Method_System_Collections_Generic_Dictionary_string__uint__GetEnumerator__);
  v33 = v31;
  while ( System_Collections_Generic_Dictionary_Enumerator_object__uint___MoveNext(
            &v33,
            (const MethodInfo_33B2A38 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__uint__MoveNext__) )
  {
    key = v33.fields._current.fields.key;
    value = (uint32_t)v33.fields._current.fields.value;
    LocalFolderPath = (Il2CppObject *)MovieFileMerge__GetLocalFolderPath(this, v16);
    v20 = System_String__Format_62713180((System_String_o *)StringLiteral_25398/*"{0}/{1}"*/, LocalFolderPath, key, 0LL);
    v21 = System_IO_File__Exists(v20, 0LL);
    if ( !v21 )
      goto LABEL_11;
    AllBytes = System_IO_File__ReadAllBytes(v20, 0LL);
    v32 = value;
    if ( !Crc32_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
    v24 = Crc32__Compute(AllBytes, 0LL);
    if ( !System_UInt32__Equals_63628964((uint32_t)&v32, v24, 0LL) )
    {
      System_IO_File__Delete(v20, 0LL);
LABEL_11:
      if ( !v13 )
        sub_1BE4D28(v21, v22);
      System_Collections_Generic_Dictionary_object__uint___Add(
        v13,
        key,
        value,
        (const MethodInfo_32C2190 *)Method_System_Collections_Generic_Dictionary_string__uint__Add__);
      Parent = System_IO_Directory__GetParent(v20, 0LL);
      v27 = Parent;
      if ( !Parent )
        sub_1BE4D28(0LL, v26);
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
    (const MethodInfo_33B2B5C *)Method_System_Collections_Generic_Dictionary_Enumerator_string__uint__Dispose__);
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
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  int64_t v28; // x1
  struct System_Object_array *items; // x8
  _QWORD *v30; // x9
  __int64 size; // x10
  Il2CppClass **v32; // x0
  System_Collections_Generic_List_Enumerator_object__o v34; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4B65BF4 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_string__uint__get_Keys__, method);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_ToList_string___, v3);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__, v4);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__, v5);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__, v6);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_string__Add__, v7);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_string__GetEnumerator__, v8);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_string___ctor__, v9);
    sub_1BE4ACC(&System_Collections_Generic_List_string__TypeInfo, v10);
    sub_1BE4ACC(&StringLiteral_25398/*"{0}/{1}"*/, v11);
    byte_4B65BF4 = 1;
  }
  memset(&v34, 0, sizeof(v34));
  v12 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_string___ctor__);
  LocalFolderPath = MovieFileMerge__GetLocalFolderPath(this, v13);
  if ( System_IO_Directory__Exists(LocalFolderPath, 0LL) )
  {
    AllDownLoadFilePathCRCDictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.AllDownLoadFilePathCRCDictionary;
    if ( !AllDownLoadFilePathCRCDictionary
      || (Keys = System_Collections_Generic_Dictionary_object__uint___get_Keys(
                   AllDownLoadFilePathCRCDictionary,
                   (const MethodInfo_32C1E70 *)Method_System_Collections_Generic_Dictionary_string__uint__get_Keys__),
          (AllDownLoadFilePathCRCDictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)System_Linq_Enumerable__ToList_object_((System_Collections_Generic_IEnumerable_TSource__o *)Keys, (const MethodInfo_2F96830 *)Method_System_Linq_Enumerable_ToList_string___)) == 0LL) )
    {
      sub_1BE4D28(AllDownLoadFilePathCRCDictionary, v15);
    }
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v34,
      (System_Collections_Generic_List_object__o *)AllDownLoadFilePathCRCDictionary,
      (const MethodInfo_35ECD1C *)Method_System_Collections_Generic_List_string__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v34,
              (const MethodInfo_3361CE0 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
    {
      current = v34.fields._current;
      v20 = (Il2CppObject *)MovieFileMerge__GetLocalFolderPath(this, v18);
      v21 = (Il2CppObject *)System_String__Format_62713180((System_String_o *)StringLiteral_25398/*"{0}/{1}"*/, v20, current, 0LL);
      v28 = (int64_t)v21;
      if ( !v12 )
        sub_1BE4D28(v21, v21);
      items = v12->fields._items;
      v30 = Method_System_Collections_Generic_List_string__Add__;
      ++v12->fields._version;
      if ( !items )
        sub_1BE4D28(v21, v21);
      size = v12->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v12,
          v21,
          *(const MethodInfo_35EC224 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
      }
      else
      {
        v32 = &items->obj.klass + size;
        v12->fields._size = size + 1;
        v32[4] = (Il2CppClass *)v28;
        sub_1BE4A70((PartyOrganizationUtility_o *)(v32 + 4), v28, v22, v23, v24, v25, v26, v27);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v34,
      (const MethodInfo_3361CDC *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
  }
  return (System_Collections_Generic_List_string__o *)v12;
}


double __fastcall MovieFileMerge__GetTotalRequireSize(MovieFileMerge_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__uint__o *AllDownLoadFilePathCRCDictionary; // x0
  System_Collections_Generic_Dictionary_TKey__TValue__o *RequireDownLoadFilePathCRCDictionary; // x8

  if ( (byte_4B65BE5 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_string__uint__get_Count__, method);
    byte_4B65BE5 = 1;
  }
  AllDownLoadFilePathCRCDictionary = this->fields.AllDownLoadFilePathCRCDictionary;
  if ( !AllDownLoadFilePathCRCDictionary
    || (AllDownLoadFilePathCRCDictionary = (struct System_Collections_Generic_Dictionary_string__uint__o *)System_Collections_Generic_Dictionary_object__uint___get_Count((System_Collections_Generic_Dictionary_TKey__TValue__o *)AllDownLoadFilePathCRCDictionary, (const MethodInfo_32C1E60 *)Method_System_Collections_Generic_Dictionary_string__uint__get_Count__),
        (RequireDownLoadFilePathCRCDictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.RequireDownLoadFilePathCRCDictionary) == 0LL) )
  {
    sub_1BE4D28(AllDownLoadFilePathCRCDictionary, method);
  }
  return (double)((System_Collections_Generic_Dictionary_object__uint___get_Count(
                     RequireDownLoadFilePathCRCDictionary,
                     (const MethodInfo_32C1E60 *)Method_System_Collections_Generic_Dictionary_string__uint__get_Count__)
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
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  System_Collections_Generic_Dictionary_TKey__TValue__o *RequireDownLoadFilePathCRCDictionary; // x0
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  System_Collections_Generic_Dictionary_TKey__TValue__o *v28; // x22
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  __int64 v41; // x0
  __int64 v42; // x1
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  struct System_String_o *FileName; // x0
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  const MethodInfo *v56; // x1
  Il2CppObject *LocalFolderPath; // x0
  struct System_String_o *v58; // x0
  int64_t v59; // x2
  int32_t v60; // w3
  System_String_o *v61; // x4
  BattleSetupInfo_o *v62; // x5
  FollowerInfo_o *v63; // x6
  PartyListViewItem_o *v64; // x7
  const MethodInfo *v65; // x1
  Il2CppObject *v66; // x0
  struct System_String_o *v67; // x0
  int64_t v68; // x2
  int32_t v69; // w3
  System_String_o *v70; // x4
  BattleSetupInfo_o *v71; // x5
  FollowerInfo_o *v72; // x6
  PartyListViewItem_o *v73; // x7
  const MethodInfo *v74; // x1
  System_String_o *v75; // x0
  FileMergeAndSplit_c *v76; // x8
  Il2CppObject *v77; // x20
  struct System_String_o *v78; // x0
  int64_t v79; // x2
  int32_t v80; // w3
  System_String_o *v81; // x4
  BattleSetupInfo_o *v82; // x5
  FollowerInfo_o *v83; // x6
  PartyListViewItem_o *v84; // x7

  v3 = assetFolderURL;
  if ( (byte_4B65BEB & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_string__uint__Clear__, assetFolderURL);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_string__uint___ctor__, v5);
    sub_1BE4ACC(&System_Collections_Generic_Dictionary_string__uint__TypeInfo, v6);
    sub_1BE4ACC(&FileMergeAndSplit_TypeInfo, v7);
    sub_1BE4ACC(&System_IO_Path_TypeInfo, v8);
    sub_1BE4ACC(&StringLiteral_25398/*"{0}/{1}"*/, v9);
    sub_1BE4ACC(&StringLiteral_25394/*"{0}/SplitFile"*/, v10);
    sub_1BE4ACC(&StringLiteral_1120/*"/"*/, v11);
    sub_1BE4ACC(&StringLiteral_25400/*"{0}/{1}.usm"*/, v12);
    byte_4B65BEB = 1;
  }
  AllDownLoadFilePathCRCDictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.AllDownLoadFilePathCRCDictionary;
  if ( AllDownLoadFilePathCRCDictionary )
  {
    System_Collections_Generic_Dictionary_object__uint___Clear(
      AllDownLoadFilePathCRCDictionary,
      (const MethodInfo_32C2318 *)Method_System_Collections_Generic_Dictionary_string__uint__Clear__);
  }
  else
  {
    v14 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1BE4D18(System_Collections_Generic_Dictionary_string__uint__TypeInfo);
    System_Collections_Generic_Dictionary_object__uint____ctor(
      v14,
      (const MethodInfo_32C17DC *)Method_System_Collections_Generic_Dictionary_string__uint___ctor__);
    this->fields.AllDownLoadFilePathCRCDictionary = (struct System_Collections_Generic_Dictionary_string__uint__o *)v14;
    sub_1BE4A70(
      (PartyOrganizationUtility_o *)&this->fields.AllDownLoadFilePathCRCDictionary,
      (int64_t)v14,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
  }
  RequireDownLoadFilePathCRCDictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.RequireDownLoadFilePathCRCDictionary;
  if ( RequireDownLoadFilePathCRCDictionary )
  {
    System_Collections_Generic_Dictionary_object__uint___Clear(
      RequireDownLoadFilePathCRCDictionary,
      (const MethodInfo_32C2318 *)Method_System_Collections_Generic_Dictionary_string__uint__Clear__);
  }
  else
  {
    v28 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1BE4D18(System_Collections_Generic_Dictionary_string__uint__TypeInfo);
    System_Collections_Generic_Dictionary_object__uint____ctor(
      v28,
      (const MethodInfo_32C17DC *)Method_System_Collections_Generic_Dictionary_string__uint___ctor__);
    this->fields.RequireDownLoadFilePathCRCDictionary = (struct System_Collections_Generic_Dictionary_string__uint__o *)v28;
    sub_1BE4A70(
      (PartyOrganizationUtility_o *)&this->fields.RequireDownLoadFilePathCRCDictionary,
      (int64_t)v28,
      v29,
      v30,
      v31,
      v32,
      v33,
      v34);
  }
  this->fields.downloadProgress = 0;
  this->fields.isDownloadCancel = 0;
  this->fields.mergeClass = 0LL;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.mergeClass, 0LL, v22, v23, v24, v25, v26, v27);
  this->fields.crcCheckerClass = 0LL;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.crcCheckerClass, 0LL, v35, v36, v37, v38, v39, v40);
  if ( !v3 )
    sub_1BE4D28(v41, v42);
  if ( System_String__EndsWith(v3, (System_String_o *)StringLiteral_1120/*"/"*/, 0LL) )
    v3 = System_String__TrimEnd_62728700(v3, 0x2Fu, 0LL);
  this->fields.assetFolderURL = v3;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.assetFolderURL, (int64_t)v3, v43, v44, v45, v46, v47, v48);
  if ( !System_IO_Path_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_IO_Path_TypeInfo);
  FileName = System_IO_Path__GetFileName(v3, 0LL);
  this->fields.assetFolder = FileName;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.assetFolder, (int64_t)FileName, v50, v51, v52, v53, v54, v55);
  LocalFolderPath = (Il2CppObject *)MovieFileMerge__GetLocalFolderPath(this, v56);
  v58 = System_String__Format((System_String_o *)StringLiteral_25394/*"{0}/SplitFile"*/, LocalFolderPath, 0LL);
  this->fields.outputSplitFileFolder = v58;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.outputSplitFileFolder,
    (int64_t)v58,
    v59,
    v60,
    v61,
    v62,
    v63,
    v64);
  v66 = (Il2CppObject *)MovieFileMerge__GetLocalFolderPath(this, v65);
  v67 = System_String__Format_62713180(
          (System_String_o *)StringLiteral_25400/*"{0}/{1}.usm"*/,
          v66,
          (Il2CppObject *)this->fields.assetFolder,
          0LL);
  this->fields.outputMergeFile = v67;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.outputMergeFile, (int64_t)v67, v68, v69, v70, v71, v72, v73);
  v75 = MovieFileMerge__GetLocalFolderPath(this, v74);
  v76 = FileMergeAndSplit_TypeInfo;
  v77 = (Il2CppObject *)v75;
  if ( !FileMergeAndSplit_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FileMergeAndSplit_TypeInfo);
    v76 = FileMergeAndSplit_TypeInfo;
  }
  v78 = System_String__Format_62713180(
          (System_String_o *)StringLiteral_25398/*"{0}/{1}"*/,
          v77,
          (Il2CppObject *)v76->static_fields->PathCRCFileName,
          0LL);
  this->fields.outputMergeFileCRC = v78;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.outputMergeFileCRC,
    (int64_t)v78,
    v79,
    v80,
    v81,
    v82,
    v83,
    v84);
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

  if ( (byte_4B65BEE & 1) == 0 )
  {
    sub_1BE4ACC(&MovieFileMerge__Merge_d__34_TypeInfo, method);
    byte_4B65BEE = 1;
  }
  v3 = sub_1BE4D18(MovieFileMerge__Merge_d__34_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v3 + 32), (int64_t)this, v4, v5, v6, v7, v8, v9);
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

  if ( (byte_4B65BEA & 1) == 0 )
  {
    sub_1BE4ACC(&MovieFileMerge__PlayCRIMovie_d__30_TypeInfo, filePath);
    byte_4B65BEA = 1;
  }
  v4 = sub_1BE4D18(MovieFileMerge__PlayCRIMovie_d__30_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0LL);
  *(_DWORD *)(v4 + 16) = 0;
  *(_QWORD *)(v4 + 32) = filePath;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v4 + 32), (int64_t)filePath, v5, v6, v7, v8, v9, v10);
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

  if ( (byte_4B65BE8 & 1) == 0 )
  {
    sub_1BE4ACC(&MovieFileMerge__PlayMP4_d__28_TypeInfo, method);
    byte_4B65BE8 = 1;
  }
  v3 = sub_1BE4D18(MovieFileMerge__PlayMP4_d__28_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v3 + 32), (int64_t)this, v4, v5, v6, v7, v8, v9);
  return (System_Collections_IEnumerator_o *)v3;
}


System_Collections_IEnumerator_o *__fastcall MovieFileMerge__PlayMP4_38654468(
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

  if ( (byte_4B65BE9 & 1) == 0 )
  {
    sub_1BE4ACC(&MovieFileMerge__PlayMP4_d__29_TypeInfo, filePath);
    byte_4B65BE9 = 1;
  }
  v6 = sub_1BE4D18(MovieFileMerge__PlayMP4_d__29_TypeInfo);
  System_Object___ctor((Il2CppObject *)v6, 0LL);
  *(_DWORD *)(v6 + 16) = 0;
  *(_QWORD *)(v6 + 40) = this;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v6 + 40), (int64_t)this, v7, v8, v9, v10, v11, v12);
  *(_QWORD *)(v6 + 32) = filePath;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v6 + 32), (int64_t)filePath, v13, v14, v15, v16, v17, v18);
  return (System_Collections_IEnumerator_o *)v6;
}


void __fastcall MovieFileMerge__Reboot(MovieFileMerge_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Networking_UnityWebRequest_o *v5; // x0
  PartyOrganizationUtility_o *p_loader; // x19
  struct UnityEngine_Networking_UnityWebRequest_o *loader; // t1
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  ManagementManager_c *v14; // x0
  Il2CppObject *Instance; // x0
  __int64 v16; // x1

  if ( (byte_4B65BF6 & 1) == 0 )
  {
    sub_1BE4ACC(&UnityEngine_Application_TypeInfo, method);
    sub_1BE4ACC(&ManagementManager_TypeInfo, v3);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_ManagementManager__get_Instance__, v4);
    byte_4B65BF6 = 1;
  }
  loader = this->fields.loader;
  p_loader = (PartyOrganizationUtility_o *)&this->fields.loader;
  v5 = loader;
  if ( loader )
  {
    UnityEngine_Networking_UnityWebRequest__Dispose(v5, 0LL);
    p_loader->klass = 0LL;
    sub_1BE4A70(p_loader, 0LL, v8, v9, v10, v11, v12, v13);
  }
  if ( !ManagementManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
  if ( !byte_4B65C8B )
  {
    sub_1BE4ACC(&ManagementManager_TypeInfo, method);
    byte_4B65C8B = 1;
  }
  v14 = ManagementManager_TypeInfo;
  if ( !ManagementManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
    v14 = ManagementManager_TypeInfo;
  }
  if ( v14->static_fields->isDuringStartup )
  {
    if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
    UnityEngine_Application__Quit_70245868(0LL);
  }
  else
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
    if ( !Instance )
      sub_1BE4D28(0LL, v16);
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
  if ( (byte_4B65BF8 & 1) == 0 )
  {
    sub_1BE4ACC(&ErrorDialog_ClickDelegate_TypeInfo, e);
    sub_1BE4ACC(&LocalizationManager_TypeInfo, v5);
    sub_1BE4ACC(&Method_MovieFileMerge_EndMergeRetryDialog__, v6);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_1BE4ACC(&StringLiteral_5413/*"Disk full"*/, v8);
    sub_1BE4ACC(&StringLiteral_9379/*"NETWORK_ERROR_DISK_FULL"*/, v9);
    this = (MovieFileMerge_o *)sub_1BE4ACC(&StringLiteral_1/*""*/, v10);
    byte_4B65BF8 = 1;
  }
  if ( !e )
    goto LABEL_12;
  this = (MovieFileMerge_o *)((__int64 (__fastcall *)(System_Exception_o *, Il2CppMethodPointer, const MethodInfo *))e->klass->vtable._5_get_Message.method)(
                               e,
                               e->klass->vtable._6_get_Data.methodPtr,
                               method);
  if ( !this )
    goto LABEL_12;
  if ( !System_String__StartsWith((System_String_o *)this, (System_String_o *)StringLiteral_5413/*"Disk full"*/, 0LL) )
  {
    v15 = (System_String_o *)((__int64 (__fastcall *)(System_Exception_o *, Il2CppMethodPointer))e->klass->vtable._5_get_Message.method)(
                               e,
                               e->klass->vtable._6_get_Data.methodPtr);
    goto LABEL_11;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v12 = LocalizationManager__Get((System_String_o *)StringLiteral_9379/*"NETWORK_ERROR_DISK_FULL"*/, 0LL);
  v13 = (ErrorDialog_ClickDelegate_o *)sub_1BE4D18(ErrorDialog_ClickDelegate_TypeInfo);
  ErrorDialog_ClickDelegate___ctor(v13, v4, Method_MovieFileMerge_EndMergeRetryDialog__, 0LL);
  if ( !Instance )
LABEL_12:
    sub_1BE4D28(this, e);
  CommonUI__OpenErrorDialog((CommonUI_o *)Instance, (System_String_o *)StringLiteral_1/*""*/, v12, v13, 1, 0LL);
  v15 = (System_String_o *)StringLiteral_5413/*"Disk full"*/;
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
  PartyOrganizationUtility_o *p__2__current; // x19
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  bool result; // w0
  System_Collections_Generic_Dictionary_string__uint__o *NeedDownloadDictionary; // x0
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  struct FileMergeAndSplit_CRCChecker_o *crcCheckerClass; // x8
  System_Collections_Generic_Dictionary_string__uint__o *Dic; // x0
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  System_String_o *outputMergeFile; // x21
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x0
  System_Collections_Generic_List_uint__o *v36; // x22
  FileMergeAndSplit_CRCChecker_o *v37; // x23
  const MethodInfo *v38; // x3
  PartyOrganizationUtility_o *p_crcCheckerClass; // x20
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  System_Collections_IEnumerator_o *v46; // x0
  PartyOrganizationUtility_o *v47; // x19
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7

  v4 = this;
  if ( (byte_4B65BF9 & 1) == 0 )
  {
    sub_1BE4ACC(&FileMergeAndSplit_CRCChecker_TypeInfo, method);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_string__uint__get_Values__, v5);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_ToList_uint___, v6);
    this = (MovieFileMerge__CRCDownloadAndCheck_d__32_o *)sub_1BE4ACC(&FileMergeAndSplit_TypeInfo, v7);
    byte_4B65BF9 = 1;
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
    sub_1BE4A70(
      (PartyOrganizationUtility_o *)&_4__this->fields.RequireDownLoadFilePathCRCDictionary,
      (int64_t)NeedDownloadDictionary,
      v20,
      v21,
      v22,
      v23,
      v24,
      v25);
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
        p__2__current = (PartyOrganizationUtility_o *)&v4->fields.__2__current;
        sub_1BE4A70(p__2__current, (int64_t)v10, v12, v13, v14, v15, v16, v17);
        result = 1;
        *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
        return result;
      }
LABEL_22:
      sub_1BE4D28(this, method);
    }
    return 0;
  }
  v4->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_22;
  Dic = MovieFileMerge__CreateDic((MovieFileMerge_o *)this, _4__this->fields.outputMergeFileCRC, v2);
  _4__this->fields.AllDownLoadFilePathCRCDictionary = Dic;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&_4__this->fields.AllDownLoadFilePathCRCDictionary,
    (int64_t)Dic,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
  this = (MovieFileMerge__CRCDownloadAndCheck_d__32_o *)_4__this->fields.AllDownLoadFilePathCRCDictionary;
  if ( !this )
    goto LABEL_22;
  outputMergeFile = _4__this->fields.outputMergeFile;
  Values = System_Collections_Generic_Dictionary_object__uint___get_Values(
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)this,
             (const MethodInfo_32C1FC0 *)Method_System_Collections_Generic_Dictionary_string__uint__get_Values__);
  v36 = (System_Collections_Generic_List_uint__o *)System_Linq_Enumerable__ToList_uint_(
                                                     (System_Collections_Generic_IEnumerable_TSource__o *)Values,
                                                     (const MethodInfo_2F96928 *)Method_System_Linq_Enumerable_ToList_uint___);
  v37 = (FileMergeAndSplit_CRCChecker_o *)sub_1BE4D18(FileMergeAndSplit_CRCChecker_TypeInfo);
  FileMergeAndSplit_CRCChecker___ctor(v37, outputMergeFile, v36, v38);
  _4__this->fields.crcCheckerClass = v37;
  p_crcCheckerClass = (PartyOrganizationUtility_o *)&_4__this->fields.crcCheckerClass;
  sub_1BE4A70(p_crcCheckerClass, (int64_t)v37, v40, v41, v42, v43, v44, v45);
  this = (MovieFileMerge__CRCDownloadAndCheck_d__32_o *)p_crcCheckerClass->klass;
  if ( !p_crcCheckerClass->klass )
    goto LABEL_22;
  v46 = FileMergeAndSplit_CRCChecker__Run((FileMergeAndSplit_CRCChecker_o *)this, method);
  v4->fields.__2__current = (Il2CppObject *)v46;
  v47 = (PartyOrganizationUtility_o *)&v4->fields.__2__current;
  sub_1BE4A70(v47, (int64_t)v46, v48, v49, v50, v51, v52, v53);
  *(_DWORD *)&v47[-1].fields._IsQuestStartMenuMode_k__BackingField = 2;
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

  v2 = sub_1BE4AE0(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BE4D18(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BE4AE0(&Method_MovieFileMerge__CRCDownloadAndCheck_d__32_System_Collections_IEnumerator_Reset__);
  sub_1BE4BF4(v3, v4);
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
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  _BOOL8 v20; // x0
  const MethodInfo *v21; // x1
  const MethodInfo *v22; // x3
  MovieFileMerge__DownloadMovie_d__33_o *v23; // x8
  bool result; // w0
  __int64 v25; // x0
  __int64 v26; // x1
  MovieFileMerge__DownloadMovie_d__33_o *v27; // x8
  Il2CppObject *v28; // x1
  MovieFileMerge__DownloadMovie_d__33_o *v29; // x0
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v36[2]; // [xsp+8h] [xbp-88h] BYREF
  MovieFileMerge__DownloadMovie_d__33_o **v37; // [xsp+68h] [xbp-28h]
  MovieFileMerge__DownloadMovie_d__33_o *v38; // [xsp+78h] [xbp-18h] BYREF

  v38 = this;
  v2 = this;
  if ( (byte_4B65BFB & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_string__uint__GetEnumerator__, method);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_Enumerator_string__uint__MoveNext__, v3);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_Enumerator_string__uint__get_Current__, v4);
    sub_1BE4ACC(&Method_System_Collections_Generic_KeyValuePair_string__uint__get_Key__, v5);
    this = (MovieFileMerge__DownloadMovie_d__33_o *)sub_1BE4ACC(
                                                      &Method_System_Collections_Generic_KeyValuePair_string__uint__get_Value__,
                                                      v6);
    byte_4B65BFB = 1;
  }
  v37 = &v38;
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state != 1 )
  {
    if ( _1__state )
      return 0;
    v2->fields.__1__state = -1;
    if ( !_4__this )
      sub_1BE4D28(this, method);
    RequireDownLoadFilePathCRCDictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)_4__this->fields.RequireDownLoadFilePathCRCDictionary;
    _4__this->fields.isDownloading = 1;
    _4__this->fields.downloadProgress = 0;
    if ( !RequireDownLoadFilePathCRCDictionary )
      sub_1BE4D28(0LL, method);
    System_Collections_Generic_Dictionary_object__uint___GetEnumerator(
      v36,
      RequireDownLoadFilePathCRCDictionary,
      (const MethodInfo_32C2580 *)Method_System_Collections_Generic_Dictionary_string__uint__GetEnumerator__);
    v10 = v38;
    v11 = *(_OWORD *)&v36[0].fields._dictionary;
    current = v36[0].fields._current;
    p__7__wrap1 = &v38->fields.__7__wrap1;
    v36[1] = v36[0];
    *(_QWORD *)&v38->fields.__7__wrap1.fields._getEnumeratorRetType = *(_QWORD *)&v36[0].fields._getEnumeratorRetType;
    v10->fields.__7__wrap1.fields._current = current;
    *(_OWORD *)&v10->fields.__7__wrap1.fields._dictionary = v11;
    sub_1BE4A70((PartyOrganizationUtility_o *)p__7__wrap1, 0LL, v14, v15, v16, v17, v18, v19);
    v2 = v38;
  }
  v2->fields.__1__state = -3;
  v20 = System_Collections_Generic_Dictionary_Enumerator_object__uint___MoveNext(
          (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v2->fields.__7__wrap1,
          (const MethodInfo_33B2A38 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__uint__MoveNext__);
  v23 = v38;
  if ( v20 )
  {
    if ( !_4__this )
      sub_1BE4D28(v20, v21);
    if ( _4__this->fields.isDownloadCancel )
    {
      _4__this->fields.isDownloading = 0;
      MovieFileMerge__DownloadMovie_d__33____m__Finally1(v23, v21);
      return 0;
    }
    else
    {
      v28 = (Il2CppObject *)MovieFileMerge__Download(
                              _4__this,
                              (System_String_o *)v38->fields.__7__wrap1.fields._current.fields.key,
                              (uint32_t)v38->fields.__7__wrap1.fields._current.fields.value,
                              v22);
      v29 = v38;
      v38->fields.__2__current = v28;
      sub_1BE4A70((PartyOrganizationUtility_o *)&v29->fields.__2__current, (int64_t)v28, v30, v31, v32, v33, v34, v35);
      result = 1;
      v38->fields.__1__state = 1;
    }
  }
  else
  {
    MovieFileMerge__DownloadMovie_d__33____m__Finally1(v38, v21);
    v27 = v38;
    *(_QWORD *)&v38->fields.__7__wrap1.fields._getEnumeratorRetType = 0LL;
    v27->fields.__7__wrap1.fields._current = 0u;
    *(_OWORD *)&v27->fields.__7__wrap1.fields._dictionary = 0u;
    if ( !_4__this )
      sub_1BE4D28(v25, v26);
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

  v2 = sub_1BE4AE0(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BE4D18(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BE4AE0(&Method_MovieFileMerge__DownloadMovie_d__33_System_Collections_IEnumerator_Reset__);
  sub_1BE4BF4(v3, v4);
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
  if ( (byte_4B65BFC & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_Enumerator_string__uint__Dispose__, method);
    byte_4B65BFC = 1;
  }
  this->fields.__1__state = -1;
  System_Collections_Generic_Dictionary_Enumerator_object__uint___Dispose(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&this->fields.__7__wrap1,
    (const MethodInfo_33B2B5C *)Method_System_Collections_Generic_Dictionary_Enumerator_string__uint__Dispose__);
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
  System_String_o *v41; // x0
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  const MethodInfo *v48; // x1
  Il2CppObject *LocalFolderPath; // x0
  System_String_o *v50; // x0
  int64_t v51; // x2
  int32_t v52; // w3
  System_String_o *v53; // x4
  BattleSetupInfo_o *v54; // x5
  FollowerInfo_o *v55; // x6
  PartyListViewItem_o *v56; // x7
  int64_t v57; // x2
  int32_t v58; // w3
  System_String_o *v59; // x4
  BattleSetupInfo_o *v60; // x5
  FollowerInfo_o *v61; // x6
  PartyListViewItem_o *v62; // x7
  uint32_t downloadingCRC; // w8
  int64_t v64; // x2
  int32_t v65; // w3
  System_String_o *v66; // x4
  BattleSetupInfo_o *v67; // x5
  FollowerInfo_o *v68; // x6
  PartyListViewItem_o *v69; // x7
  MovieFileMerge__Download_d__40_o *v70; // x21
  int64_t v71; // x1
  int64_t v72; // x2
  int32_t v73; // w3
  System_String_o *v74; // x4
  BattleSetupInfo_o *v75; // x5
  FollowerInfo_o *v76; // x6
  PartyListViewItem_o *v77; // x7
  int64_t v78; // x1
  int64_t v79; // x2
  int32_t v80; // w3
  System_String_o *v81; // x4
  BattleSetupInfo_o *v82; // x5
  FollowerInfo_o *v83; // x6
  PartyListViewItem_o *v84; // x7
  int64_t v85; // x1
  int64_t v86; // x2
  int32_t v87; // w3
  System_String_o *v88; // x4
  BattleSetupInfo_o *v89; // x5
  FollowerInfo_o *v90; // x6
  PartyListViewItem_o *v91; // x7
  int64_t v92; // x2
  int32_t v93; // w3
  System_String_o *v94; // x4
  BattleSetupInfo_o *v95; // x5
  FollowerInfo_o *v96; // x6
  PartyListViewItem_o *v97; // x7
  int64_t v98; // x1
  int64_t v99; // x2
  int32_t v100; // w3
  System_String_o *v101; // x4
  BattleSetupInfo_o *v102; // x5
  FollowerInfo_o *v103; // x6
  PartyListViewItem_o *v104; // x7
  int64_t v105; // x2
  int32_t v106; // w3
  System_String_o *v107; // x4
  BattleSetupInfo_o *v108; // x5
  FollowerInfo_o *v109; // x6
  PartyListViewItem_o *v110; // x7
  int64_t v111; // x1
  System_String_o *v112; // x0
  int64_t v113; // x2
  int32_t v114; // w3
  System_String_o *v115; // x4
  BattleSetupInfo_o *v116; // x5
  FollowerInfo_o *v117; // x6
  PartyListViewItem_o *v118; // x7
  const MethodInfo *v119; // x2
  ManagementManager_c *v120; // x0
  _BOOL4 isDuringStartup; // w22
  Il2CppObject *Instance; // x21
  System_String_o *v123; // x22
  ErrorDialog_ClickDelegate_o *v124; // x23
  System_Byte_array *readData_5__5; // x20
  uint32_t v126; // w0
  Il2CppObject **p__2__current; // x19
  int64_t v128; // x2
  int32_t v129; // w3
  System_String_o *v130; // x4
  BattleSetupInfo_o *v131; // x5
  FollowerInfo_o *v132; // x6
  PartyListViewItem_o *v133; // x7
  int v134; // w8
  UnityEngine_WaitForEndOfFrame_o *v135; // x20
  int64_t v136; // x2
  int32_t v137; // w3
  System_String_o *v138; // x4
  BattleSetupInfo_o *v139; // x5
  FollowerInfo_o *v140; // x6
  PartyListViewItem_o *v141; // x7
  float unscaledTime; // s8
  UnityEngine_WaitForEndOfFrame_o *v143; // x21
  int64_t v144; // x2
  int32_t v145; // w3
  System_String_o *v146; // x4
  BattleSetupInfo_o *v147; // x5
  FollowerInfo_o *v148; // x6
  PartyListViewItem_o *v149; // x7
  MovieFileMerge__Download_d__40_o **p_loader; // x22
  int64_t v151; // x2
  int32_t v152; // w3
  System_String_o *v153; // x4
  BattleSetupInfo_o *v154; // x5
  FollowerInfo_o *v155; // x6
  PartyListViewItem_o *v156; // x7
  struct System_String_o **p_errorCode_5__11; // x21
  int64_t v158; // x2
  int32_t v159; // w3
  System_String_o *v160; // x4
  BattleSetupInfo_o *v161; // x5
  FollowerInfo_o *v162; // x6
  PartyListViewItem_o *v163; // x7
  System_String_o *error; // x0
  System_Byte_array *data; // x0
  int64_t v166; // x2
  int32_t v167; // w3
  System_String_o *v168; // x4
  BattleSetupInfo_o *v169; // x5
  FollowerInfo_o *v170; // x6
  PartyListViewItem_o *v171; // x7
  int64_t v172; // x2
  int32_t v173; // w3
  System_String_o *v174; // x4
  BattleSetupInfo_o *v175; // x5
  FollowerInfo_o *v176; // x6
  PartyListViewItem_o *v177; // x7
  UnityEngine_WaitForEndOfFrame_o *v178; // x20
  int64_t v179; // x2
  int32_t v180; // w3
  System_String_o *v181; // x4
  BattleSetupInfo_o *v182; // x5
  FollowerInfo_o *v183; // x6
  PartyListViewItem_o *v184; // x7
  int64_t v185; // x2
  int32_t v186; // w3
  System_String_o *v187; // x4
  BattleSetupInfo_o *v188; // x5
  FollowerInfo_o *v189; // x6
  PartyListViewItem_o *v190; // x7
  System_String_o *v191; // x1
  int64_t v192; // x2
  int32_t v193; // w3
  System_String_o *v194; // x4
  BattleSetupInfo_o *v195; // x5
  FollowerInfo_o *v196; // x6
  PartyListViewItem_o *v197; // x7
  System_IO_DirectoryInfo_o *Parent; // x0
  __int64 v199; // x1
  System_IO_DirectoryInfo_o *v200; // x21
  const MethodInfo *v201; // x1
  System_String_o *v202; // x0
  System_String_o *v203; // x21
  int64_t FreeSize; // x21
  ManagerConfig_c *v205; // x0
  ManagerConfig_c *v206; // x0
  Il2CppObject *v207; // x0
  System_String_o *errorCode_5__11; // x21
  CommonUI_o *v209; // x22
  ErrorDialog_ClickDelegate_o *v210; // x23
  UnityEngine_WaitForEndOfFrame_o *v211; // x20
  int64_t v212; // x2
  int32_t v213; // w3
  System_String_o *v214; // x4
  BattleSetupInfo_o *v215; // x5
  FollowerInfo_o *v216; // x6
  PartyListViewItem_o *v217; // x7
  int autoRetryCount_5__3; // w21
  ManagerConfig_c *v219; // x0
  float DOWNLOAD_RETRY_DELAY_TIME; // s8
  UnityEngine_WaitForSeconds_o *v221; // x20
  int64_t v222; // x2
  int32_t v223; // w3
  System_String_o *v224; // x4
  BattleSetupInfo_o *v225; // x5
  FollowerInfo_o *v226; // x6
  PartyListViewItem_o *v227; // x7
  Il2CppObject *v228; // x21
  PartyOrganizationUtility_o *v229; // x20
  MovieFileMerge__Download_d__40_o *loader; // t1
  int64_t v231; // x2
  int32_t v232; // w3
  System_String_o *v233; // x4
  BattleSetupInfo_o *v234; // x5
  FollowerInfo_o *v235; // x6
  PartyListViewItem_o *v236; // x7
  int64_t v237; // x2
  int32_t v238; // w3
  System_String_o *v239; // x4
  BattleSetupInfo_o *v240; // x5
  FollowerInfo_o *v241; // x6
  PartyListViewItem_o *v242; // x7
  PartyOrganizationUtility_o *p_readData_5__5; // x0
  struct UnityEngine_Networking_UnityWebRequest_o **v244; // x21
  int64_t v245; // x2
  int32_t v246; // w3
  System_String_o *v247; // x4
  BattleSetupInfo_o *v248; // x5
  FollowerInfo_o *v249; // x6
  PartyListViewItem_o *v250; // x7
  int64_t v251; // x2
  int32_t v252; // w3
  System_String_o *v253; // x4
  BattleSetupInfo_o *v254; // x5
  FollowerInfo_o *v255; // x6
  PartyListViewItem_o *v256; // x7
  ManagerConfig_c *v257; // x0
  Il2CppObject *v258; // x0
  System_String_o *v259; // x21
  CommonUI_o *v260; // x22
  ErrorDialog_ClickDelegate_o *v261; // x23
  UnityEngine_WaitForSeconds_o *v262; // x20
  int64_t v263; // x2
  int32_t v264; // w3
  System_String_o *v265; // x4
  BattleSetupInfo_o *v266; // x5
  FollowerInfo_o *v267; // x6
  PartyListViewItem_o *v268; // x7
  System_String_o *v269; // x22
  ErrorDialog_ClickDelegate_o *v270; // x23
  UnityEngine_WaitForEndOfFrame_o *v271; // x20
  int64_t v272; // x2
  int32_t v273; // w3
  System_String_o *v274; // x4
  BattleSetupInfo_o *v275; // x5
  FollowerInfo_o *v276; // x6
  PartyListViewItem_o *v277; // x7
  int64_t v278; // x2
  int32_t v279; // w3
  System_String_o *v280; // x4
  BattleSetupInfo_o *v281; // x5
  FollowerInfo_o *v282; // x6
  PartyListViewItem_o *v283; // x7
  int64_t v284; // x2
  int32_t v285; // w3
  System_String_o *v286; // x4
  BattleSetupInfo_o *v287; // x5
  FollowerInfo_o *v288; // x6
  PartyListViewItem_o *v289; // x7
  int64_t v290; // x2
  int32_t v291; // w3
  System_String_o *v292; // x4
  BattleSetupInfo_o *v293; // x5
  FollowerInfo_o *v294; // x6
  PartyListViewItem_o *v295; // x7
  float downloadProgress; // s0
  float loadProgress_5__7; // s9
  float v298; // s8
  float v299; // s0
  bool v300; // zf
  float v301; // s8
  System_String_o *downloadingURL; // x22
  System_String_o *v303; // x0
  System_String_o *v304; // x0
  int64_t v305; // x2
  int32_t v306; // w3
  System_String_o *v307; // x4
  BattleSetupInfo_o *v308; // x5
  FollowerInfo_o *v309; // x6
  PartyListViewItem_o *v310; // x7
  System_Collections_Generic_Dictionary_string__string__o *ResponseHeaders; // x0
  System_Collections_Generic_Dictionary_object__object__o *v312; // x22
  Il2CppObject *v313; // x22
  MovieFileMerge__Download_d__40_o *v314; // x22
  int v315; // w8
  System_String_o *v316; // x23
  System_String_o *v317; // x0
  __int64 v318; // x1
  ManagementManager_c *v319; // x0
  _BOOL4 v320; // w23
  Il2CppObject *v321; // x0
  struct System_String_o *errorLocalizeCode_5__12; // x8
  CommonUI_o *v323; // x22
  System_String_o *v324; // x21
  System_String_o *v325; // x23
  System_String_o *v326; // x23
  ErrorDialog_ClickDelegate_o *v327; // x24
  ManagerConfig_c *v328; // x0
  int64_t wait_5__8; // x1
  System_String_o *v330; // x23
  System_String_o *v331; // x23
  ErrorDialog_ClickDelegate_o *v332; // x24
  __int64 v333; // x0
  System_IO_IOException_o *v334; // x21
  System_String_o *v335; // x0
  __int64 v336; // x0
  UnityEngine_Networking_UnityWebRequest_o *v337; // x0
  PartyOrganizationUtility_o *v338; // x20
  int64_t v339; // x2
  int32_t v340; // w3
  System_String_o *v341; // x4
  BattleSetupInfo_o *v342; // x5
  FollowerInfo_o *v343; // x6
  PartyListViewItem_o *v344; // x7
  PartyOrganizationUtility_o *v345; // x19
  int64_t v346; // x2
  int32_t v347; // w3
  System_String_o *v348; // x4
  BattleSetupInfo_o *v349; // x5
  FollowerInfo_o *v350; // x6
  PartyListViewItem_o *v351; // x7
  System_Nullable_Vector2__o effectDistance; // [xsp+0h] [xbp-70h]
  System_Nullable_Vector2__o effectDistancea; // [xsp+0h] [xbp-70h]
  Il2CppObject *value; // [xsp+38h] [xbp-38h] BYREF

  v8 = this;
  if ( (byte_4B65BFA & 1) == 0 )
  {
    sub_1BE4ACC(&char___TypeInfo, method);
    sub_1BE4ACC(&ErrorDialog_ClickDelegate_TypeInfo, v9);
    sub_1BE4ACC(&CommonServicePluginScript_TypeInfo, v10);
    sub_1BE4ACC(&Crc32_TypeInfo, v11);
    sub_1BE4ACC(&UnityEngine_Debug_TypeInfo, v12);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_string__string__TryGetValue__, v13);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_string__string__get_Count__, v14);
    sub_1BE4ACC(&LocalizationManager_TypeInfo, v15);
    sub_1BE4ACC(&ManagementManager_TypeInfo, v16);
    sub_1BE4ACC(&ManagerConfig_TypeInfo, v17);
    sub_1BE4ACC(&Method_MovieFileMerge_EndRetryDialog__, v18);
    sub_1BE4ACC(&Method_MovieFileMerge_EndWarningDialog__, v19);
    sub_1BE4ACC(&NetworkManager_TypeInfo, v20);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v21);
    sub_1BE4ACC(&string___TypeInfo, v22);
    sub_1BE4ACC(&UnityEngine_WaitForEndOfFrame_TypeInfo, v23);
    sub_1BE4ACC(&UnityEngine_WaitForSeconds_TypeInfo, v24);
    sub_1BE4ACC(&StringLiteral_7306/*"HTTP"*/, v25);
    sub_1BE4ACC(&StringLiteral_812/*")\n\n503 Auto retry count "*/, v26);
    sub_1BE4ACC(&StringLiteral_815/*")\nfile crc ("*/, v27);
    sub_1BE4ACC(&StringLiteral_1511/*"503"*/, v28);
    sub_1BE4ACC(&StringLiteral_2162/*"ASSET_LOADER_ERROR_BOOT_RETRY_MESSAGE"*/, v29);
    sub_1BE4ACC(&StringLiteral_16145/*"[FFFF80]Download error for debug"*/, v30);
    sub_1BE4ACC(&StringLiteral_25398/*"{0}/{1}"*/, v31);
    sub_1BE4ACC(&StringLiteral_12449/*"STATUS"*/, v32);
    sub_1BE4ACC(&StringLiteral_811/*")\n\n"*/, v33);
    sub_1BE4ACC(&StringLiteral_691/*"("*/, v34);
    sub_1BE4ACC(&StringLiteral_813/*")\n\nAssetBundle file check sum error\nlist crc ("*/, v35);
    sub_1BE4ACC(&StringLiteral_809/*")"*/, v36);
    sub_1BE4ACC(&StringLiteral_2163/*"ASSET_LOADER_ERROR_TIME_OVER_MESSAGE"*/, v37);
    sub_1BE4ACC(&StringLiteral_814/*")\n\nAssetBundle file download time over"*/, v38);
    this = (MovieFileMerge__Download_d__40_o *)sub_1BE4ACC(&StringLiteral_1/*""*/, v39);
    byte_4B65BFA = 1;
  }
  value = 0LL;
  _4__this = v8->fields.__4__this;
  switch ( v8->fields.__1__state )
  {
    case 0:
      v8->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_177;
      v41 = System_String__Format_62713180(
              (System_String_o *)StringLiteral_25398/*"{0}/{1}"*/,
              (Il2CppObject *)_4__this->fields.assetFolderURL,
              (Il2CppObject *)v8->fields.fileName,
              0LL);
      _4__this->fields.downloadingURL = v41;
      sub_1BE4A70(
        (PartyOrganizationUtility_o *)&_4__this->fields.downloadingURL,
        (int64_t)v41,
        v42,
        v43,
        v44,
        v45,
        v46,
        v47);
      _4__this->fields.downloadingCRC = v8->fields.crc;
      LocalFolderPath = (Il2CppObject *)MovieFileMerge__GetLocalFolderPath(_4__this, v48);
      v50 = System_String__Format_62713180(
              (System_String_o *)StringLiteral_25398/*"{0}/{1}"*/,
              LocalFolderPath,
              (Il2CppObject *)v8->fields.fileName,
              0LL);
      v8->fields._dlFilePath_5__2 = v50;
      sub_1BE4A70(
        (PartyOrganizationUtility_o *)&v8->fields._dlFilePath_5__2,
        (int64_t)v50,
        v51,
        v52,
        v53,
        v54,
        v55,
        v56);
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
      v143 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BE4D18(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v143, 0LL);
      v8->fields._wait_5__8 = v143;
      sub_1BE4A70(
        (PartyOrganizationUtility_o *)&v8->fields._wait_5__8,
        (int64_t)v143,
        v144,
        v145,
        v146,
        v147,
        v148,
        v149);
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
        sub_1BE4A70((PartyOrganizationUtility_o *)&_4__this->fields.loader, 0LL, v185, v186, v187, v188, v189, v190);
        LOBYTE(this) = 0;
        _4__this->fields.isDownloading = 0;
        return (char)this;
      }
      downloadProgress = UnityEngine_Networking_UnityWebRequest__get_downloadProgress(
                           (UnityEngine_Networking_UnityWebRequest_o *)this,
                           0LL);
      loadProgress_5__7 = v8->fields._loadProgress_5__7;
      v298 = downloadProgress;
      v299 = UnityEngine_Time__get_unscaledTime(0LL);
      v300 = v298 == loadProgress_5__7;
      v301 = v299;
      if ( !v300 )
      {
        v328 = ManagerConfig_TypeInfo;
        if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
          v328 = ManagerConfig_TypeInfo;
        }
        v8->fields._requestTime_5__6 = v301 + v328->static_fields->TIMEOUT;
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
          sub_1BE4A70((PartyOrganizationUtility_o *)p__2__current, wait_5__8, v151, v152, v153, v154, v155, v156);
          v134 = 2;
          goto LABEL_119;
        }
        goto LABEL_177;
      }
      if ( v299 < v8->fields._requestTime_5__6 )
        goto LABEL_161;
LABEL_44:
      *(_WORD *)&v8->fields._isAutoRetry_5__9 = 0;
      v8->fields._errorCode_5__11 = 0LL;
      p_errorCode_5__11 = &v8->fields._errorCode_5__11;
      sub_1BE4A70((PartyOrganizationUtility_o *)&v8->fields._errorCode_5__11, 0LL, v151, v152, v153, v154, v155, v156);
      v8->fields._errorLocalizeCode_5__12 = 0LL;
      sub_1BE4A70(
        (PartyOrganizationUtility_o *)&v8->fields._errorLocalizeCode_5__12,
        0LL,
        v158,
        v159,
        v160,
        v161,
        v162,
        v163);
      this = *p_loader;
      if ( !*p_loader )
LABEL_177:
        sub_1BE4D28(this, method);
      if ( !UnityEngine_Networking_UnityWebRequest__get_isDone((UnityEngine_Networking_UnityWebRequest_o *)this, 0LL) )
      {
        v191 = System_String__Concat_62710068(
                 (System_String_o *)StringLiteral_691/*"("*/,
                 _4__this->fields.downloadingURL,
                 (System_String_o *)StringLiteral_814/*")\n\nAssetBundle file download time over"*/,
                 0LL);
        *p_errorCode_5__11 = v191;
LABEL_63:
        sub_1BE4A70(
          (PartyOrganizationUtility_o *)&v8->fields._errorCode_5__11,
          (int64_t)v191,
          v192,
          v193,
          v194,
          v195,
          v196,
          v197);
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
        sub_1BE4A70(
          (PartyOrganizationUtility_o *)&v8->fields._readData_5__5,
          (int64_t)data,
          v166,
          v167,
          v168,
          v169,
          v170,
          v171);
        v8->fields.__2__current = 0LL;
        p__2__current = &v8->fields.__2__current;
        sub_1BE4A70((PartyOrganizationUtility_o *)p__2__current, 0LL, v172, v173, v174, v175, v176, v177);
        v134 = 3;
        goto LABEL_119;
      }
      this = (MovieFileMerge__Download_d__40_o *)_4__this->fields.loader;
      if ( !this )
        goto LABEL_177;
      downloadingURL = _4__this->fields.downloadingURL;
      v303 = UnityEngine_Networking_UnityWebRequest__get_error((UnityEngine_Networking_UnityWebRequest_o *)this, 0LL);
      v304 = System_String__Concat_62712072(
               (System_String_o *)StringLiteral_691/*"("*/,
               downloadingURL,
               (System_String_o *)StringLiteral_811/*")\n\n"*/,
               v303,
               0LL);
      *p_errorCode_5__11 = v304;
      sub_1BE4A70(
        (PartyOrganizationUtility_o *)&v8->fields._errorCode_5__11,
        (int64_t)v304,
        v305,
        v306,
        v307,
        v308,
        v309,
        v310);
      this = (MovieFileMerge__Download_d__40_o *)_4__this->fields.loader;
      if ( !this )
        goto LABEL_177;
      ResponseHeaders = UnityEngine_Networking_UnityWebRequest__GetResponseHeaders(
                          (UnityEngine_Networking_UnityWebRequest_o *)this,
                          0LL);
      if ( !ResponseHeaders )
        break;
      v312 = (System_Collections_Generic_Dictionary_object__object__o *)ResponseHeaders;
      if ( System_Collections_Generic_Dictionary_object__object___get_Count(
             (System_Collections_Generic_Dictionary_object__object__o *)ResponseHeaders,
             (const MethodInfo_32AFEF4 *)Method_System_Collections_Generic_Dictionary_string__string__get_Count__) < 1
        || !System_Collections_Generic_Dictionary_object__object___TryGetValue(
              v312,
              (Il2CppObject *)StringLiteral_12449/*"STATUS"*/,
              &value,
              (const MethodInfo_32B1A30 *)Method_System_Collections_Generic_Dictionary_string__string__TryGetValue__) )
      {
        break;
      }
      v313 = value;
      this = (MovieFileMerge__Download_d__40_o *)sub_1BE4B74(char___TypeInfo, 1LL);
      if ( !this )
        goto LABEL_177;
      method = (const MethodInfo *)this;
      if ( !LODWORD(this->fields.__2__current) )
        goto LABEL_169;
      LOWORD(this->fields.__4__this) = 32;
      if ( !v313 )
        goto LABEL_177;
      this = (MovieFileMerge__Download_d__40_o *)System_String__Split_62721200(
                                                   (System_String_o *)v313,
                                                   (System_Char_array *)this,
                                                   1,
                                                   0LL);
      if ( !this )
        goto LABEL_177;
      v314 = this;
      if ( SLODWORD(this->fields.__2__current) < 2 )
        break;
      this = (MovieFileMerge__Download_d__40_o *)this->fields.__4__this;
      if ( !this )
        goto LABEL_177;
      this = (MovieFileMerge__Download_d__40_o *)System_String__StartsWith(
                                                   (System_String_o *)this,
                                                   (System_String_o *)StringLiteral_7306/*"HTTP"*/,
                                                   0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
        break;
      if ( LODWORD(v314->fields.__2__current) <= 1 )
        goto LABEL_169;
      this = (MovieFileMerge__Download_d__40_o *)v314->fields.fileName;
      if ( !this )
        goto LABEL_177;
      if ( System_String__Equals_62707124((System_String_o *)this, (System_String_o *)StringLiteral_1511/*"503"*/, 0LL) )
      {
        v315 = v8->fields._autoRetryCount_5__3 + 1;
        v8->fields._isAutoRetry_5__9 = 1;
        v8->fields._autoRetryCount_5__3 = v315;
        v316 = _4__this->fields.downloadingURL;
        v317 = System_Int32__ToString((int)v8 + 64, 0LL);
        v191 = System_String__Concat_62712072(
                 (System_String_o *)StringLiteral_691/*"("*/,
                 v316,
                 (System_String_o *)StringLiteral_812/*")\n\n503 Auto retry count "*/,
                 v317,
                 0LL);
        v8->fields._errorCode_5__11 = v191;
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
      v126 = Crc32__Compute(readData_5__5, 0LL);
      v8->fields.__2__current = 0LL;
      p__2__current = &v8->fields.__2__current;
      *((_DWORD *)p__2__current + 24) = v126;
      sub_1BE4A70((PartyOrganizationUtility_o *)p__2__current, 0LL, v128, v129, v130, v131, v132, v133);
      v134 = 4;
      goto LABEL_119;
    case 4:
      v8->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_177;
      downloadingCRC = _4__this->fields.downloadingCRC;
      if ( v8->fields._downloadCrc_5__13 != downloadingCRC && downloadingCRC )
      {
        this = (MovieFileMerge__Download_d__40_o *)sub_1BE4B74(string___TypeInfo, 7LL);
        if ( !this )
          goto LABEL_177;
        v70 = this;
        if ( LODWORD(this->fields.__2__current) )
        {
          v71 = StringLiteral_691/*"("*/;
          this->fields.__4__this = (struct MovieFileMerge_o *)StringLiteral_691/*"("*/;
          sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.__4__this, v71, v64, v65, v66, v67, v68, v69);
          if ( LODWORD(v70->fields.__2__current) > 1 )
          {
            v78 = (int64_t)_4__this->fields.downloadingURL;
            v70->fields.fileName = (struct System_String_o *)v78;
            sub_1BE4A70((PartyOrganizationUtility_o *)&v70->fields.fileName, v78, v72, v73, v74, v75, v76, v77);
            if ( LODWORD(v70->fields.__2__current) > 2 )
            {
              v85 = StringLiteral_813/*")\n\nAssetBundle file check sum error\nlist crc ("*/;
              *(_QWORD *)&v70->fields.crc = StringLiteral_813/*")\n\nAssetBundle file check sum error\nlist crc ("*/;
              sub_1BE4A70((PartyOrganizationUtility_o *)&v70->fields.crc, v85, v79, v80, v81, v82, v83, v84);
              this = (MovieFileMerge__Download_d__40_o *)System_UInt32__ToString((int)_4__this + 96, 0LL);
              if ( LODWORD(v70->fields.__2__current) > 3 )
              {
                v70->fields._dlFilePath_5__2 = (struct System_String_o *)this;
                sub_1BE4A70(
                  (PartyOrganizationUtility_o *)&v70->fields._dlFilePath_5__2,
                  (int64_t)this,
                  v86,
                  v87,
                  v88,
                  v89,
                  v90,
                  v91);
                if ( LODWORD(v70->fields.__2__current) > 4 )
                {
                  v98 = StringLiteral_815/*")\nfile crc ("*/;
                  *(_QWORD *)&v70->fields._autoRetryCount_5__3 = StringLiteral_815/*")\nfile crc ("*/;
                  sub_1BE4A70(
                    (PartyOrganizationUtility_o *)&v70->fields._autoRetryCount_5__3,
                    v98,
                    v92,
                    v93,
                    v94,
                    v95,
                    v96,
                    v97);
                  this = (MovieFileMerge__Download_d__40_o *)System_UInt32__ToString((int)v8 + 120, 0LL);
                  if ( LODWORD(v70->fields.__2__current) > 5 )
                  {
                    v70->fields._readData_5__5 = (struct System_Byte_array *)this;
                    sub_1BE4A70(
                      (PartyOrganizationUtility_o *)&v70->fields._readData_5__5,
                      (int64_t)this,
                      v99,
                      v100,
                      v101,
                      v102,
                      v103,
                      v104);
                    if ( LODWORD(v70->fields.__2__current) > 6 )
                    {
                      v111 = StringLiteral_809/*")"*/;
                      *(_QWORD *)&v70->fields._requestTime_5__6 = StringLiteral_809/*")"*/;
                      sub_1BE4A70(
                        (PartyOrganizationUtility_o *)&v70->fields._requestTime_5__6,
                        v111,
                        v105,
                        v106,
                        v107,
                        v108,
                        v109,
                        v110);
                      v112 = System_String__Concat_62712336((System_String_array *)v70, 0LL);
                      v8->fields._errorCode_5__11 = v112;
                      sub_1BE4A70(
                        (PartyOrganizationUtility_o *)&v8->fields._errorCode_5__11,
                        (int64_t)v112,
                        v113,
                        v114,
                        v115,
                        v116,
                        v117,
                        v118);
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
        sub_1BE4D30(this, method);
      }
      Parent = System_IO_Directory__GetParent(v8->fields._dlFilePath_5__2, 0LL);
      v200 = Parent;
      if ( !Parent )
        sub_1BE4D28(0LL, v199);
      if ( (((__int64 (__fastcall *)(System_IO_DirectoryInfo_o *, Il2CppMethodPointer))Parent->klass->vtable._10_get_Exists.method)(
              Parent,
              Parent->klass->vtable._11_Delete.methodPtr) & 1) == 0 )
      {
        v202 = (System_String_o *)((__int64 (__fastcall *)(System_IO_DirectoryInfo_o *, Il2CppMethodPointer))v200->klass->vtable._8_get_FullName.method)(
                                    v200,
                                    v200->klass->vtable._9_get_Name.methodPtr);
        System_IO_Directory__CreateDirectory(v202, 0LL);
      }
      v203 = MovieFileMerge__GetLocalFolderPath(_4__this, v201);
      if ( !CommonServicePluginScript_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CommonServicePluginScript_TypeInfo);
      FreeSize = CommonServicePluginScript__GetFreeSize(v203, 0LL);
      if ( FreeSize >= 1 )
      {
        v205 = ManagerConfig_TypeInfo;
        if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
          v205 = ManagerConfig_TypeInfo;
        }
        if ( FreeSize < v205->static_fields->LIMIT_FREE_SIZE )
        {
          v333 = sub_1BE4AE0(&System_IO_IOException_TypeInfo);
          v334 = (System_IO_IOException_o *)sub_1BE4D18(v333);
          v335 = (System_String_o *)sub_1BE4AE0(&StringLiteral_5413/*"Disk full"*/);
          System_IO_IOException___ctor_62839052(v334, v335, 0LL);
          v336 = sub_1BE4AE0(&Method_MovieFileMerge__Download_d__40_MoveNext__);
          sub_1BE4BF4(v334, v336);
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
      if ( !byte_4B65C8B )
      {
        sub_1BE4ACC(&ManagementManager_TypeInfo, method);
        byte_4B65C8B = 1;
      }
      v120 = ManagementManager_TypeInfo;
      if ( !ManagementManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
        v120 = ManagementManager_TypeInfo;
      }
      isDuringStartup = v120->static_fields->isDuringStartup;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      if ( isDuringStartup )
      {
        v123 = LocalizationManager__Get((System_String_o *)StringLiteral_2162/*"ASSET_LOADER_ERROR_BOOT_RETRY_MESSAGE"*/, 0LL);
        v124 = (ErrorDialog_ClickDelegate_o *)sub_1BE4D18(ErrorDialog_ClickDelegate_TypeInfo);
        ErrorDialog_ClickDelegate___ctor(v124, (Il2CppObject *)_4__this, Method_MovieFileMerge_EndRetryDialog__, 0LL);
        if ( !Instance )
          goto LABEL_177;
        CommonUI__OpenRetryBootDialog((CommonUI_o *)Instance, (System_String_o *)StringLiteral_1/*""*/, v123, v124, 1, 0LL);
      }
      else
      {
        v269 = LocalizationManager__Get((System_String_o *)StringLiteral_2163/*"ASSET_LOADER_ERROR_TIME_OVER_MESSAGE"*/, 0LL);
        v270 = (ErrorDialog_ClickDelegate_o *)sub_1BE4D18(ErrorDialog_ClickDelegate_TypeInfo);
        ErrorDialog_ClickDelegate___ctor(v270, (Il2CppObject *)_4__this, Method_MovieFileMerge_EndRetryDialog__, 0LL);
        if ( !Instance )
          goto LABEL_177;
        CommonUI__OpenRetryDialog((CommonUI_o *)Instance, (System_String_o *)StringLiteral_1/*""*/, v269, v270, 1, 0LL);
      }
LABEL_117:
      if ( !_4__this->fields.isErrorDialog )
        goto LABEL_120;
      v271 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BE4D18(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v271, 0LL);
      v8->fields.__2__current = (Il2CppObject *)v271;
      p__2__current = &v8->fields.__2__current;
      sub_1BE4A70((PartyOrganizationUtility_o *)p__2__current, (int64_t)v271, v272, v273, v274, v275, v276, v277);
      v134 = 10;
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
    MovieFileMerge__AssetLoadLogError(_4__this, (System_String_o *)method, v119);
    v206 = ManagerConfig_TypeInfo;
    if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
      v206 = ManagerConfig_TypeInfo;
    }
    if ( v206->static_fields->UseDebugCommand )
    {
      _4__this->fields.isErrorDialog = 1;
      v207 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      errorCode_5__11 = v8->fields._errorCode_5__11;
      v209 = (CommonUI_o *)v207;
      v210 = (ErrorDialog_ClickDelegate_o *)sub_1BE4D18(ErrorDialog_ClickDelegate_TypeInfo);
      ErrorDialog_ClickDelegate___ctor(v210, (Il2CppObject *)_4__this, Method_MovieFileMerge_EndWarningDialog__, 0LL);
      if ( !v209 )
        goto LABEL_177;
      *(_QWORD *)&effectDistance.fields.hasValue = 0LL;
      effectDistance.fields.value.fields.y = 0.0;
      CommonUI__OpenWarningDialog(
        v209,
        (System_String_o *)StringLiteral_16145/*"[FFFF80]Download error for debug"*/,
        errorCode_5__11,
        v210,
        1,
        0,
        -1.0,
        1,
        effectDistance,
        0LL);
LABEL_82:
      if ( _4__this->fields.isErrorDialog )
      {
        v211 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BE4D18(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v211, 0LL);
        v8->fields.__2__current = (Il2CppObject *)v211;
        p__2__current = &v8->fields.__2__current;
        sub_1BE4A70((PartyOrganizationUtility_o *)p__2__current, (int64_t)v211, v212, v213, v214, v215, v216, v217);
        v134 = 5;
        goto LABEL_119;
      }
    }
    if ( v8->fields._isAutoRetry_5__9 )
    {
      autoRetryCount_5__3 = v8->fields._autoRetryCount_5__3;
      v219 = ManagerConfig_TypeInfo;
      if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
        v219 = ManagerConfig_TypeInfo;
      }
      DOWNLOAD_RETRY_DELAY_TIME = v219->static_fields->DOWNLOAD_RETRY_DELAY_TIME;
      v221 = (UnityEngine_WaitForSeconds_o *)sub_1BE4D18(UnityEngine_WaitForSeconds_TypeInfo);
      UnityEngine_WaitForSeconds___ctor(v221, DOWNLOAD_RETRY_DELAY_TIME * (float)autoRetryCount_5__3, 0LL);
      v8->fields.__2__current = (Il2CppObject *)v221;
      p__2__current = &v8->fields.__2__current;
      sub_1BE4A70((PartyOrganizationUtility_o *)p__2__current, (int64_t)v221, v222, v223, v224, v225, v226, v227);
      v134 = 6;
      goto LABEL_119;
    }
    if ( v8->fields._isCrcError_5__10 )
    {
      v228 = (Il2CppObject *)v8->fields._errorCode_5__11;
      if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
      UnityEngine_Debug__LogError(v228, 0LL);
    }
    else
    {
      MovieFileMerge__AssetLoadLogError(_4__this, v8->fields._errorCode_5__11, v2);
      _4__this->fields.isErrorDialog = 1;
      if ( !ManagementManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
      if ( !byte_4B65C8B )
      {
        sub_1BE4ACC(&ManagementManager_TypeInfo, v318);
        byte_4B65C8B = 1;
      }
      v319 = ManagementManager_TypeInfo;
      if ( !ManagementManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
        v319 = ManagementManager_TypeInfo;
      }
      v320 = v319->static_fields->isDuringStartup;
      v321 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      errorLocalizeCode_5__12 = v8->fields._errorLocalizeCode_5__12;
      v323 = (CommonUI_o *)v321;
      v324 = (System_String_o *)StringLiteral_1/*""*/;
      if ( v320 )
      {
        if ( errorLocalizeCode_5__12 )
          v325 = v8->fields._errorLocalizeCode_5__12;
        else
          v325 = (System_String_o *)StringLiteral_2162/*"ASSET_LOADER_ERROR_BOOT_RETRY_MESSAGE"*/;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v326 = LocalizationManager__Get(v325, 0LL);
        v327 = (ErrorDialog_ClickDelegate_o *)sub_1BE4D18(ErrorDialog_ClickDelegate_TypeInfo);
        ErrorDialog_ClickDelegate___ctor(v327, (Il2CppObject *)_4__this, Method_MovieFileMerge_EndRetryDialog__, 0LL);
        if ( !v323 )
          goto LABEL_177;
        CommonUI__OpenRetryBootDialog(v323, v324, v326, v327, 1, 0LL);
      }
      else
      {
        if ( errorLocalizeCode_5__12 )
          v330 = v8->fields._errorLocalizeCode_5__12;
        else
          v330 = (System_String_o *)StringLiteral_2163/*"ASSET_LOADER_ERROR_TIME_OVER_MESSAGE"*/;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v331 = LocalizationManager__Get(v330, 0LL);
        v332 = (ErrorDialog_ClickDelegate_o *)sub_1BE4D18(ErrorDialog_ClickDelegate_TypeInfo);
        ErrorDialog_ClickDelegate___ctor(v332, (Il2CppObject *)_4__this, Method_MovieFileMerge_EndRetryDialog__, 0LL);
        if ( !v323 )
          goto LABEL_177;
        CommonUI__OpenRetryDialog(v323, v324, v331, v332, 1, 0LL);
      }
LABEL_36:
      if ( _4__this->fields.isErrorDialog )
      {
        v135 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BE4D18(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v135, 0LL);
        v8->fields.__2__current = (Il2CppObject *)v135;
        p__2__current = &v8->fields.__2__current;
        sub_1BE4A70((PartyOrganizationUtility_o *)p__2__current, (int64_t)v135, v136, v137, v138, v139, v140, v141);
        v134 = 7;
        goto LABEL_119;
      }
    }
  }
LABEL_92:
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4B622AC )
  {
    sub_1BE4ACC(&NetworkManager_TypeInfo, method);
    byte_4B622AC = 1;
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
    v229 = (PartyOrganizationUtility_o *)&_4__this->fields.loader;
    this = loader;
    if ( !loader )
      goto LABEL_177;
    UnityEngine_Networking_UnityWebRequest__Dispose((UnityEngine_Networking_UnityWebRequest_o *)this, 0LL);
    v229->klass = 0LL;
    sub_1BE4A70(v229, 0LL, v231, v232, v233, v234, v235, v236);
    v8->fields._readData_5__5 = 0LL;
    p_readData_5__5 = (PartyOrganizationUtility_o *)&v8->fields._readData_5__5;
  }
  else
  {
    if ( !_4__this )
      goto LABEL_177;
    v244 = &_4__this->fields.loader;
    this = (MovieFileMerge__Download_d__40_o *)_4__this->fields.loader;
    if ( v8->fields._isDownload_5__4 )
    {
      if ( !this )
        goto LABEL_177;
      UnityEngine_Networking_UnityWebRequest__Dispose((UnityEngine_Networking_UnityWebRequest_o *)this, 0LL);
      *v244 = 0LL;
      sub_1BE4A70((PartyOrganizationUtility_o *)&_4__this->fields.loader, 0LL, v245, v246, v247, v248, v249, v250);
      v8->fields._readData_5__5 = 0LL;
      sub_1BE4A70((PartyOrganizationUtility_o *)&v8->fields._readData_5__5, 0LL, v251, v252, v253, v254, v255, v256);
      if ( !v8->fields._isCrcError_5__10 )
      {
LABEL_120:
        v8->fields._wait_5__8 = 0LL;
        sub_1BE4A70((PartyOrganizationUtility_o *)&v8->fields._wait_5__8, 0LL, (int64_t)v2, v3, v4, v5, v6, v7);
        v8->fields._errorCode_5__11 = 0LL;
        sub_1BE4A70((PartyOrganizationUtility_o *)&v8->fields._errorCode_5__11, 0LL, v278, v279, v280, v281, v282, v283);
        v8->fields._errorLocalizeCode_5__12 = 0LL;
        sub_1BE4A70(
          (PartyOrganizationUtility_o *)&v8->fields._errorLocalizeCode_5__12,
          0LL,
          v284,
          v285,
          v286,
          v287,
          v288,
          v289);
        do
        {
          v8->fields._readData_5__5 = 0LL;
          sub_1BE4A70((PartyOrganizationUtility_o *)&v8->fields._readData_5__5, 0LL, v290, v291, v292, v293, v294, v295);
LABEL_172:
          v8->fields._readData_5__5 = 0LL;
          sub_1BE4A70((PartyOrganizationUtility_o *)&v8->fields._readData_5__5, 0LL, v57, v58, v59, v60, v61, v62);
        }
        while ( !v8->fields._isDownload_5__4 );
        v337 = UnityEngine_Networking_UnityWebRequest__Get(_4__this->fields.downloadingURL, 0LL);
        _4__this->fields.loader = v337;
        v338 = (PartyOrganizationUtility_o *)&_4__this->fields.loader;
        sub_1BE4A70(v338, (int64_t)v337, v339, v340, v341, v342, v343, v344);
        this = (MovieFileMerge__Download_d__40_o *)v338->klass;
        if ( v338->klass )
        {
          UnityEngine_Networking_UnityWebRequest__SendWebRequest((UnityEngine_Networking_UnityWebRequest_o *)this, 0LL);
          v8->fields.__2__current = 0LL;
          v345 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
          sub_1BE4A70(v345, 0LL, v346, v347, v348, v349, v350, v351);
          LOBYTE(this) = 1;
          *(_DWORD *)&v345[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
          return (char)this;
        }
        goto LABEL_177;
      }
      if ( !v8->fields._errorCode_5__11 )
        goto LABEL_114;
      v257 = ManagerConfig_TypeInfo;
      if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
        v257 = ManagerConfig_TypeInfo;
      }
      if ( !v257->static_fields->UseDebugCommand )
        goto LABEL_114;
      _4__this->fields.isErrorDialog = 1;
      v258 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v259 = v8->fields._errorCode_5__11;
      v260 = (CommonUI_o *)v258;
      v261 = (ErrorDialog_ClickDelegate_o *)sub_1BE4D18(ErrorDialog_ClickDelegate_TypeInfo);
      ErrorDialog_ClickDelegate___ctor(v261, (Il2CppObject *)_4__this, Method_MovieFileMerge_EndWarningDialog__, 0LL);
      if ( !v260 )
        goto LABEL_177;
      *(_QWORD *)&effectDistancea.fields.hasValue = 0LL;
      effectDistancea.fields.value.fields.y = 0.0;
      CommonUI__OpenWarningDialog(
        v260,
        (System_String_o *)StringLiteral_16145/*"[FFFF80]Download error for debug"*/,
        v259,
        v261,
        1,
        0,
        -1.0,
        1,
        effectDistancea,
        0LL);
LABEL_57:
      if ( _4__this->fields.isErrorDialog )
      {
        v178 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BE4D18(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v178, 0LL);
        v8->fields.__2__current = (Il2CppObject *)v178;
        p__2__current = &v8->fields.__2__current;
        sub_1BE4A70((PartyOrganizationUtility_o *)p__2__current, (int64_t)v178, v179, v180, v181, v182, v183, v184);
        v134 = 8;
      }
      else
      {
LABEL_114:
        v262 = (UnityEngine_WaitForSeconds_o *)sub_1BE4D18(UnityEngine_WaitForSeconds_TypeInfo);
        UnityEngine_WaitForSeconds___ctor(v262, 1.0, 0LL);
        v8->fields.__2__current = (Il2CppObject *)v262;
        p__2__current = &v8->fields.__2__current;
        sub_1BE4A70((PartyOrganizationUtility_o *)p__2__current, (int64_t)v262, v263, v264, v265, v266, v267, v268);
        v134 = 9;
      }
LABEL_119:
      *((_DWORD *)p__2__current - 2) = v134;
      LOBYTE(this) = 1;
      return (char)this;
    }
    if ( !this )
      return (char)this;
    UnityEngine_Networking_UnityWebRequest__Dispose((UnityEngine_Networking_UnityWebRequest_o *)this, 0LL);
    p_readData_5__5 = (PartyOrganizationUtility_o *)&_4__this->fields.loader;
    *v244 = 0LL;
  }
  sub_1BE4A70(p_readData_5__5, 0LL, v237, v238, v239, v240, v241, v242);
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

  v2 = sub_1BE4AE0(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BE4D18(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BE4AE0(&Method_MovieFileMerge__Download_d__40_System_Collections_IEnumerator_Reset__);
  sub_1BE4BF4(v3, v4);
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
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  FileMergeAndSplit_Merge_o *mergeClass; // x21
  System_Action_object__o *v21; // x22
  System_Collections_IEnumerator_o *v22; // x0
  PartyOrganizationUtility_o *p__2__current; // x19
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  bool result; // w0
  struct FileMergeAndSplit_CRCChecker_o *crcCheckerClass; // x8
  struct FileMergeAndSplit_Merge_o *v32; // x8
  System_String_o *v33; // x21
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x0
  System_Collections_Generic_List_uint__o *v35; // x22
  FileMergeAndSplit_CRCChecker_o *v36; // x23
  const MethodInfo *v37; // x3
  PartyOrganizationUtility_o *p_crcCheckerClass; // x20
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  System_Collections_IEnumerator_o *v45; // x0
  PartyOrganizationUtility_o *v46; // x19
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7

  v2 = this;
  if ( (byte_4B65BFD & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_Exception__TypeInfo, method);
    sub_1BE4ACC(&FileMergeAndSplit_CRCChecker_TypeInfo, v3);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_string__uint__get_Values__, v4);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_ToList_uint___, v5);
    sub_1BE4ACC(&FileMergeAndSplit_Merge_TypeInfo, v6);
    this = (MovieFileMerge__Merge_d__34_o *)sub_1BE4ACC(&Method_MovieFileMerge__Merge_b__34_0__, v7);
    byte_4B65BFD = 1;
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
        v13 = (FileMergeAndSplit_Merge_o *)sub_1BE4D18(FileMergeAndSplit_Merge_TypeInfo);
        FileMergeAndSplit_Merge___ctor(v13, v12, outputMergeFile, 0LL);
        _4__this->fields.mergeClass = v13;
        sub_1BE4A70(
          (PartyOrganizationUtility_o *)&_4__this->fields.mergeClass,
          (int64_t)v13,
          v14,
          v15,
          v16,
          v17,
          v18,
          v19);
        mergeClass = _4__this->fields.mergeClass;
        v21 = (System_Action_object__o *)sub_1BE4D18(System_Action_Exception__TypeInfo);
        System_Action_object____ctor(v21, (Il2CppObject *)_4__this, Method_MovieFileMerge__Merge_b__34_0__, 0LL);
        if ( mergeClass )
        {
          v22 = FileMergeAndSplit_Merge__Run(mergeClass, (System_Action_Exception__o *)v21, 0LL);
          v2->fields.__2__current = (Il2CppObject *)v22;
          p__2__current = (PartyOrganizationUtility_o *)&v2->fields.__2__current;
          sub_1BE4A70(p__2__current, (int64_t)v22, v24, v25, v26, v27, v28, v29);
          result = 1;
          *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
          return result;
        }
      }
LABEL_23:
      sub_1BE4D28(this, method);
    }
    return 0;
  }
  v2->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_23;
  v32 = _4__this->fields.mergeClass;
  if ( !v32 )
    goto LABEL_23;
  if ( v32->fields.isError )
    return 0;
  this = (MovieFileMerge__Merge_d__34_o *)_4__this->fields.AllDownLoadFilePathCRCDictionary;
  if ( !this )
    goto LABEL_23;
  v33 = _4__this->fields.outputMergeFile;
  Values = System_Collections_Generic_Dictionary_object__uint___get_Values(
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)this,
             (const MethodInfo_32C1FC0 *)Method_System_Collections_Generic_Dictionary_string__uint__get_Values__);
  v35 = (System_Collections_Generic_List_uint__o *)System_Linq_Enumerable__ToList_uint_(
                                                     (System_Collections_Generic_IEnumerable_TSource__o *)Values,
                                                     (const MethodInfo_2F96928 *)Method_System_Linq_Enumerable_ToList_uint___);
  v36 = (FileMergeAndSplit_CRCChecker_o *)sub_1BE4D18(FileMergeAndSplit_CRCChecker_TypeInfo);
  FileMergeAndSplit_CRCChecker___ctor(v36, v33, v35, v37);
  _4__this->fields.crcCheckerClass = v36;
  p_crcCheckerClass = (PartyOrganizationUtility_o *)&_4__this->fields.crcCheckerClass;
  sub_1BE4A70(p_crcCheckerClass, (int64_t)v36, v39, v40, v41, v42, v43, v44);
  this = (MovieFileMerge__Merge_d__34_o *)p_crcCheckerClass->klass;
  if ( !p_crcCheckerClass->klass )
    goto LABEL_23;
  v45 = FileMergeAndSplit_CRCChecker__Run((FileMergeAndSplit_CRCChecker_o *)this, method);
  v2->fields.__2__current = (Il2CppObject *)v45;
  v46 = (PartyOrganizationUtility_o *)&v2->fields.__2__current;
  sub_1BE4A70(v46, (int64_t)v45, v47, v48, v49, v50, v51, v52);
  *(_DWORD *)&v46[-1].fields._IsQuestStartMenuMode_k__BackingField = 2;
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

  v2 = sub_1BE4AE0(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BE4D18(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BE4AE0(&Method_MovieFileMerge__Merge_d__34_System_Collections_IEnumerator_Reset__);
  sub_1BE4BF4(v3, v4);
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
  Il2CppObject **p__8__1; // x20
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  Il2CppObject *object; // x21
  Il2CppObject *v27; // x21
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  Il2CppObject *v34; // x8
  CRIMoviePlayer_o *klass; // x21
  System_String_o *filePath; // x22
  BgmManager_c *v37; // x0
  Il2CppObject *v38; // x24
  float masterVolume; // s8
  System_Action_o *v40; // x23
  struct MovieFileMerge___c__DisplayClass30_0_o *_8__1; // x8
  PartyOrganizationUtility_o *p__2__current; // x19
  bool result; // w0

  v8 = this;
  if ( (byte_4B65BFE & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, method);
    sub_1BE4ACC(&BgmManager_TypeInfo, v9);
    sub_1BE4ACC(&Method_UnityEngine_GameObject_GetComponent_CRIMoviePlayer___, v10);
    sub_1BE4ACC(&Method_UnityEngine_Object_Instantiate_GameObject___, v11);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v12);
    sub_1BE4ACC(&Method_UnityEngine_Resources_Load_GameObject___, v13);
    sub_1BE4ACC(&Method_MovieFileMerge___c__DisplayClass30_0__PlayCRIMovie_b__0__, v14);
    sub_1BE4ACC(&MovieFileMerge___c__DisplayClass30_0_TypeInfo, v15);
    this = (MovieFileMerge__PlayCRIMovie_d__30_o *)sub_1BE4ACC(&StringLiteral_4010/*"CRIMovie/CRIMoviePlayerWithPanel"*/, v16);
    byte_4B65BFE = 1;
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
    v18 = (Il2CppObject *)sub_1BE4D18(MovieFileMerge___c__DisplayClass30_0_TypeInfo);
    System_Object___ctor(v18, 0LL);
    v8->fields.__8__1 = (struct MovieFileMerge___c__DisplayClass30_0_o *)v18;
    p__8__1 = (Il2CppObject **)&v8->fields.__8__1;
    sub_1BE4A70((PartyOrganizationUtility_o *)&v8->fields.__8__1, (int64_t)v18, v20, v21, v22, v23, v24, v25);
    object = UnityEngine_Resources__Load_object_(
               (System_String_o *)StringLiteral_4010/*"CRIMovie/CRIMoviePlayerWithPanel"*/,
               (const MethodInfo_2FEE238 *)Method_UnityEngine_Resources_Load_GameObject___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (MovieFileMerge__PlayCRIMovie_d__30_o *)UnityEngine_Object__Instantiate_object_(
                                                     object,
                                                     (const MethodInfo_2FDE9E4 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !this )
      goto LABEL_25;
    v27 = *p__8__1;
    this = (MovieFileMerge__PlayCRIMovie_d__30_o *)UnityEngine_GameObject__GetComponent_object_(
                                                     (UnityEngine_GameObject_o *)this,
                                                     (const MethodInfo_2FA979C *)Method_UnityEngine_GameObject_GetComponent_CRIMoviePlayer___);
    if ( !v27 )
      goto LABEL_25;
    v27[1].klass = (Il2CppClass *)this;
    sub_1BE4A70((PartyOrganizationUtility_o *)&v27[1], (int64_t)this, v28, v29, v30, v31, v32, v33);
    v34 = *p__8__1;
    if ( !*p__8__1 )
      goto LABEL_25;
    LOBYTE(v34[1].monitor) = 1;
    klass = (CRIMoviePlayer_o *)v34[1].klass;
    filePath = v8->fields.filePath;
    if ( !BgmManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
    if ( !byte_4B622AD )
    {
      sub_1BE4ACC(&BgmManager_TypeInfo, method);
      byte_4B622AD = 1;
    }
    v37 = BgmManager_TypeInfo;
    if ( !BgmManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
      v37 = BgmManager_TypeInfo;
    }
    v38 = *p__8__1;
    masterVolume = v37->static_fields->masterVolume;
    v40 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
    System_Action___ctor(v40, v38, Method_MovieFileMerge___c__DisplayClass30_0__PlayCRIMovie_b__0__, 0LL);
    if ( !klass
      || (CRIMoviePlayer__Initialize(klass, filePath, filePath, masterVolume, 1, 0LL, v40, 1, 0LL, 0, 0, 1, 0LL),
          !*p__8__1)
      || (this = (MovieFileMerge__PlayCRIMovie_d__30_o *)(*p__8__1)[1].klass) == 0LL )
    {
LABEL_25:
      sub_1BE4D28(this, method);
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
    sub_1BE4A70(p__2__current, 0LL, v2, v3, v4, v5, v6, v7);
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

  v2 = sub_1BE4AE0(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BE4D18(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BE4AE0(&Method_MovieFileMerge__PlayCRIMovie_d__30_System_Collections_IEnumerator_Reset__);
  sub_1BE4BF4(v3, v4);
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
      sub_1BE4D28(0LL, method);
    v8 = (Il2CppObject *)MovieFileMerge__PlayMP4_38654468(_4__this, _4__this->fields.outputMergeFile, v2, v3);
    this->fields.__2__current = v8;
    sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.__2__current, (int64_t)v8, v9, v10, v11, v12, v13, v14);
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

  v2 = sub_1BE4AE0(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BE4D18(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BE4AE0(&Method_MovieFileMerge__PlayMP4_d__28_System_Collections_IEnumerator_Reset__);
  sub_1BE4BF4(v3, v4);
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

  if ( (byte_4B65BFF & 1) == 0 )
  {
    sub_1BE4ACC(&UnityEngine_WaitForEndOfFrame_TypeInfo, method);
    byte_4B65BFF = 1;
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
        sub_1BE4D28(IsNullOrEmpty, v6);
      v24 = (Il2CppObject *)MovieFileMerge__PlayCRIMovie((MovieFileMerge_o *)IsNullOrEmpty, this->fields.filePath, v7);
      this->fields.__2__current = v24;
      p__2__current = &this->fields.__2__current;
      sub_1BE4A70((PartyOrganizationUtility_o *)p__2__current, (int64_t)v24, v26, v27, v28, v29, v30, v31);
      result = 1;
      *((_DWORD *)p__2__current - 2) = 1;
      break;
    case 1:
      this->fields.__1__state = -1;
      v17 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BE4D18(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v17, 0LL);
      this->fields.__2__current = (Il2CppObject *)v17;
      sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.__2__current, (int64_t)v17, v18, v19, v20, v21, v22, v23);
      v16 = 2;
      goto LABEL_9;
    case 2:
      this->fields.__1__state = -1;
      v9 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BE4D18(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v9, 0LL);
      this->fields.__2__current = (Il2CppObject *)v9;
      sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.__2__current, (int64_t)v9, v10, v11, v12, v13, v14, v15);
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

  v2 = sub_1BE4AE0(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BE4D18(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BE4AE0(&Method_MovieFileMerge__PlayMP4_d__29_System_Collections_IEnumerator_Reset__);
  sub_1BE4BF4(v3, v4);
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
    sub_1BE4D28(0LL, method);
  CRIMoviePlayer__Dispose(player, 0LL);
  this->fields.wait = 0;
}