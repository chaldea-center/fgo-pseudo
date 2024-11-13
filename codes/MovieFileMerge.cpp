void __fastcall MovieFileMerge___ctor(MovieFileMerge_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  System_Collections_Generic_Dictionary_TKey__TValue__o *v7; // x20
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  System_Collections_Generic_Dictionary_TKey__TValue__o *v17; // x20
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7

  if ( (byte_4B15246 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__uint___ctor__, method, v2);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_string__uint__TypeInfo, v5, v6);
    byte_4B15246 = 1;
  }
  v7 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1BCAA2C(
                                                                  System_Collections_Generic_Dictionary_string__uint__TypeInfo,
                                                                  method,
                                                                  v2,
                                                                  v3);
  System_Collections_Generic_Dictionary_object__uint____ctor(
    v7,
    (const MethodInfo_3276818 *)Method_System_Collections_Generic_Dictionary_string__uint___ctor__);
  this->fields.AllDownLoadFilePathCRCDictionary = (struct System_Collections_Generic_Dictionary_string__uint__o *)v7;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.AllDownLoadFilePathCRCDictionary,
    (int64_t)v7,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  v17 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1BCAA2C(
                                                                   System_Collections_Generic_Dictionary_string__uint__TypeInfo,
                                                                   v14,
                                                                   v15,
                                                                   v16);
  System_Collections_Generic_Dictionary_object__uint____ctor(
    v17,
    (const MethodInfo_3276818 *)Method_System_Collections_Generic_Dictionary_string__uint___ctor__);
  this->fields.RequireDownLoadFilePathCRCDictionary = (struct System_Collections_Generic_Dictionary_string__uint__o *)v17;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.RequireDownLoadFilePathCRCDictionary,
    (int64_t)v17,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall MovieFileMerge__AssetLoadLogError(
        MovieFileMerge_o *this,
        System_String_o *errorCode,
        const MethodInfo *method)
{
  System_String_o *v3; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  Il2CppObject *Instance; // x0
  __int64 v32; // x1
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  Il2CppObject *v39; // x21
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
  int64_t v61; // x1
  int64_t v62; // x2
  int32_t v63; // w3
  System_String_o *v64; // x4
  BattleSetupInfo_o *v65; // x5
  FollowerInfo_o *v66; // x6
  PartyListViewItem_o *v67; // x7
  int64_t v68; // x1
  int64_t v69; // x2
  int32_t v70; // w3
  System_String_o *v71; // x4
  BattleSetupInfo_o *v72; // x5
  FollowerInfo_o *v73; // x6
  PartyListViewItem_o *v74; // x7
  int64_t v75; // x1
  int64_t v76; // x2
  int32_t v77; // w3
  System_String_o *v78; // x4
  BattleSetupInfo_o *v79; // x5
  FollowerInfo_o *v80; // x6
  PartyListViewItem_o *v81; // x7
  int64_t v82; // x1
  int64_t v83; // x2
  int32_t v84; // w3
  System_String_o *v85; // x4
  BattleSetupInfo_o *v86; // x5
  FollowerInfo_o *v87; // x6
  PartyListViewItem_o *v88; // x7
  int64_t v89; // x1
  __int64 v90; // x22
  __int64 v91; // x24
  __int64 v92; // x1

  v3 = errorCode;
  if ( (byte_4B15244 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Debug_TypeInfo, errorCode, method);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__, v5, v6);
    sub_1BCA7E0(&string___TypeInfo, v7, v8);
    sub_1BCA7E0(&StringLiteral_14271/*"The request timed out."*/, v9, v10);
    sub_1BCA7E0(&StringLiteral_14201/*"The network connection was lost."*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_4763/*"Connection reset by peer"*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_5128/*"DLErrorType"*/, v15, v16);
    sub_1BCA7E0(&StringLiteral_5127/*"DLErrorAsset"*/, v17, v18);
    sub_1BCA7E0(&StringLiteral_4762/*"Connection refused"*/, v19, v20);
    sub_1BCA7E0(&StringLiteral_9561/*"No address associated with hostname"*/, v21, v22);
    sub_1BCA7E0(&StringLiteral_2512/*"AssetBundle file download time over"*/, v23, v24);
    sub_1BCA7E0(&StringLiteral_12981/*"Software caused connection abort"*/, v25, v26);
    sub_1BCA7E0(&StringLiteral_4764/*"Connection timed out"*/, v27, v28);
    sub_1BCA7E0(&StringLiteral_2515/*"AssetLoadError"*/, v29, v30);
    byte_4B15244 = 1;
  }
  Instance = (Il2CppObject *)sub_1BCA888(string___TypeInfo, 8LL);
  if ( !Instance )
    goto LABEL_28;
  v39 = Instance;
  if ( !LODWORD(Instance[1].monitor) )
    goto LABEL_18;
  v40 = StringLiteral_9561/*"No address associated with hostname"*/;
  Instance[2].klass = (Il2CppClass *)StringLiteral_9561/*"No address associated with hostname"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&Instance[2], v40, v33, v34, v35, v36, v37, v38);
  if ( LODWORD(v39[1].monitor) <= 1 )
    goto LABEL_18;
  v47 = StringLiteral_2512/*"AssetBundle file download time over"*/;
  v39[2].monitor = (void *)StringLiteral_2512/*"AssetBundle file download time over"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v39[2].monitor, v47, v41, v42, v43, v44, v45, v46);
  if ( LODWORD(v39[1].monitor) <= 2 )
    goto LABEL_18;
  v54 = StringLiteral_14201/*"The network connection was lost."*/;
  v39[3].klass = (Il2CppClass *)StringLiteral_14201/*"The network connection was lost."*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v39[3], v54, v48, v49, v50, v51, v52, v53);
  if ( LODWORD(v39[1].monitor) <= 3 )
    goto LABEL_18;
  v61 = StringLiteral_4763/*"Connection reset by peer"*/;
  v39[3].monitor = (void *)StringLiteral_4763/*"Connection reset by peer"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v39[3].monitor, v61, v55, v56, v57, v58, v59, v60);
  if ( LODWORD(v39[1].monitor) <= 4 )
    goto LABEL_18;
  v68 = StringLiteral_12981/*"Software caused connection abort"*/;
  v39[4].klass = (Il2CppClass *)StringLiteral_12981/*"Software caused connection abort"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v39[4], v68, v62, v63, v64, v65, v66, v67);
  if ( LODWORD(v39[1].monitor) <= 5
    || (v75 = StringLiteral_4764/*"Connection timed out"*/,
        v39[4].monitor = (void *)StringLiteral_4764/*"Connection timed out"*/,
        sub_1BCA784((PartyOrganizationUtility_o *)&v39[4].monitor, v75, v69, v70, v71, v72, v73, v74),
        LODWORD(v39[1].monitor) <= 6)
    || (v82 = StringLiteral_4762/*"Connection refused"*/,
        v39[5].klass = (Il2CppClass *)StringLiteral_4762/*"Connection refused"*/,
        sub_1BCA784((PartyOrganizationUtility_o *)&v39[5], v82, v76, v77, v78, v79, v80, v81),
        LODWORD(v39[1].monitor) <= 7) )
  {
LABEL_18:
    sub_1BCAA44(Instance, v32);
  }
  v89 = StringLiteral_14271/*"The request timed out."*/;
  v39[5].monitor = (void *)StringLiteral_14271/*"The request timed out."*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v39[5].monitor, v89, v83, v84, v85, v86, v87, v88);
  if ( (int)v39[1].monitor < 1 )
  {
LABEL_19:
    if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo, v32);
    goto LABEL_27;
  }
  v90 = 0LL;
  v91 = (unsigned int)v39[1].monitor - 1LL;
  while ( 1 )
  {
    if ( !v3 )
      goto LABEL_28;
    Instance = (Il2CppObject *)System_String__Contains(v3, *((System_String_o **)&v39[2].klass + v90), 0LL);
    if ( ((unsigned __int8)Instance & 1) != 0 )
      break;
    if ( v91 == v90 )
      goto LABEL_19;
    if ( ++v90 >= (unsigned __int64)LODWORD(v39[1].monitor) )
      goto LABEL_18;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
  if ( !Instance )
LABEL_28:
    sub_1BCAA3C(Instance, v32);
  CrashReporter__AddCustomKey(
    (CrashReporter_o *)Instance,
    (System_String_o *)StringLiteral_5127/*"DLErrorAsset"*/,
    this->fields.downloadingURL,
    0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
  if ( (unsigned int)v90 >= LODWORD(v39[1].monitor) )
    goto LABEL_18;
  if ( !Instance )
    goto LABEL_28;
  CrashReporter__AddCustomKey(
    (CrashReporter_o *)Instance,
    (System_String_o *)StringLiteral_5128/*"DLErrorType"*/,
    *((System_String_o **)&v39[2].klass + v90),
    0LL);
  if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo, v92);
  v3 = (System_String_o *)StringLiteral_2515/*"AssetLoadError"*/;
LABEL_27:
  UnityEngine_Debug__LogError((Il2CppObject *)v3, 0LL);
}


System_Collections_IEnumerator_o *__fastcall MovieFileMerge__CRCDownloadAndCheck(
        MovieFileMerge_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x20
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7

  if ( (byte_4B1523B & 1) == 0 )
  {
    sub_1BCA7E0(&MovieFileMerge__CRCDownloadAndCheck_d__32_TypeInfo, method, v2);
    byte_4B1523B = 1;
  }
  v5 = sub_1BCAA2C(MovieFileMerge__CRCDownloadAndCheck_d__32_TypeInfo, method, v2, v3);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v5 + 32), (int64_t)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v5;
}


System_Collections_Generic_Dictionary_string__uint__o *__fastcall MovieFileMerge__CreateDic(
        MovieFileMerge_o *this,
        System_String_o *dataPath,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  System_Collections_Generic_Dictionary_TKey__TValue__o *v9; // x19
  System_String_array *AllLines; // x0
  __int64 v11; // x1
  int max_length; // w8
  System_String_array *v13; // x20
  unsigned int v14; // w22
  System_String_array *v15; // x21
  uint32_t result; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B15242 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__uint__Add__, dataPath, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__uint___ctor__, v5, v6);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_string__uint__TypeInfo, v7, v8);
    byte_4B15242 = 1;
  }
  result = 0;
  v9 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1BCAA2C(
                                                                  System_Collections_Generic_Dictionary_string__uint__TypeInfo,
                                                                  dataPath,
                                                                  method,
                                                                  v3);
  System_Collections_Generic_Dictionary_object__uint____ctor(
    v9,
    (const MethodInfo_3276818 *)Method_System_Collections_Generic_Dictionary_string__uint___ctor__);
  AllLines = System_IO_File__ReadAllLines(dataPath, 0LL);
  if ( !AllLines )
LABEL_18:
    sub_1BCAA3C(AllLines, v11);
  max_length = AllLines->max_length;
  v13 = AllLines;
  if ( max_length >= 1 )
  {
    v14 = 0;
    while ( 1 )
    {
      if ( v14 >= max_length )
LABEL_17:
        sub_1BCAA44(AllLines, v11);
      AllLines = (System_String_array *)v13->m_Items[v14];
      if ( !AllLines )
        goto LABEL_18;
      AllLines = System_String__Split((System_String_o *)AllLines, 0x2Cu, 0, 0LL);
      result = 0;
      if ( !AllLines )
        goto LABEL_18;
      v15 = AllLines;
      if ( AllLines->max_length <= 1 )
        goto LABEL_17;
      AllLines = (System_String_array *)System_UInt32__TryParse(AllLines->m_Items[1], &result, 0LL);
      if ( ((unsigned __int8)AllLines & 1) == 0 )
        return 0LL;
      if ( !v15->max_length )
        goto LABEL_17;
      if ( !v9 )
        goto LABEL_18;
      System_Collections_Generic_Dictionary_object__uint___Add(
        v9,
        (Il2CppObject *)v15->m_Items[0],
        result,
        (const MethodInfo_32771CC *)Method_System_Collections_Generic_Dictionary_string__uint__Add__);
      max_length = v13->max_length;
      if ( (int)++v14 >= max_length )
        return (System_Collections_Generic_Dictionary_string__uint__o *)v9;
    }
  }
  return (System_Collections_Generic_Dictionary_string__uint__o *)v9;
}


void __fastcall MovieFileMerge__Delete(System_String_o *folder, const MethodInfo *method)
{
  __int64 v2; // x2
  System_String_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  System_String_o *FileName; // x19
  Il2CppObject *LocalDataPath; // x0
  System_String_o *v11; // x19

  v3 = folder;
  if ( (byte_4B1523E & 1) == 0 )
  {
    sub_1BCA7E0(&System_IO_Path_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_25309/*"{0}/{1}"*/, v4, v5);
    folder = (System_String_o *)sub_1BCA7E0(&StringLiteral_1120/*"/"*/, v6, v7);
    byte_4B1523E = 1;
  }
  if ( !v3 )
    sub_1BCAA3C(folder, method);
  if ( System_String__EndsWith(v3, (System_String_o *)StringLiteral_1120/*"/"*/, 0LL) )
    v3 = System_String__TrimEnd_62431112(v3, 0x2Fu, 0LL);
  if ( !System_IO_Path_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_IO_Path_TypeInfo, v8);
  FileName = System_IO_Path__GetFileName(v3, 0LL);
  LocalDataPath = (Il2CppObject *)MovieFileMerge__GetLocalDataPath((const MethodInfo *)FileName);
  v11 = System_String__Format_62415592(
          (System_String_o *)StringLiteral_25309/*"{0}/{1}"*/,
          LocalDataPath,
          (Il2CppObject *)FileName,
          0LL);
  if ( System_IO_Directory__Exists(v11, 0LL) )
    System_IO_Directory__Delete(v11, 1, 0LL);
}


void __fastcall MovieFileMerge__Delete_38464212(const MethodInfo *method)
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

  if ( (byte_4B15241 & 1) == 0 )
  {
    sub_1BCA7E0(&MovieFileMerge__Download_d__40_TypeInfo, fileName, *(_QWORD *)&crc);
    byte_4B15241 = 1;
  }
  v7 = sub_1BCAA2C(MovieFileMerge__Download_d__40_TypeInfo, fileName, *(_QWORD *)&crc, method);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  *(_DWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 32) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v7 + 32), (int64_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v7 + 40) = fileName;
  sub_1BCA784((PartyOrganizationUtility_o *)(v7 + 40), (int64_t)fileName, v14, v15, v16, v17, v18, v19);
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
  __int64 v3; // x3
  __int64 v5; // x20
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7

  if ( (byte_4B1523C & 1) == 0 )
  {
    sub_1BCA7E0(&MovieFileMerge__DownloadMovie_d__33_TypeInfo, method, v2);
    byte_4B1523C = 1;
  }
  v5 = sub_1BCAA2C(MovieFileMerge__DownloadMovie_d__33_TypeInfo, method, v2, v3);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v5 + 32), (int64_t)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v5;
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
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  System_String_o *FileName; // x20
  Il2CppObject *LocalDataPath; // x0
  System_String_o *v15; // x19
  System_String_o *v16; // x0
  __int64 v17; // x1
  FileMergeAndSplit_c *v18; // x8
  Il2CppObject *v19; // x21
  System_String_o *v20; // x0

  v3 = assetFolderURL;
  if ( (byte_4B15232 & 1) == 0 )
  {
    sub_1BCA7E0(&FileMergeAndSplit_TypeInfo, assetFolderURL, method);
    sub_1BCA7E0(&System_IO_Path_TypeInfo, v4, v5);
    sub_1BCA7E0(&StringLiteral_1120/*"/"*/, v6, v7);
    sub_1BCA7E0(&StringLiteral_25314/*"{0}/{1}/{2}"*/, v8, v9);
    this = (MovieFileMerge_o *)sub_1BCA7E0(&StringLiteral_25313/*"{0}/{1}/{1}.usm"*/, v10, v11);
    byte_4B15232 = 1;
  }
  if ( !v3 )
    sub_1BCAA3C(this, assetFolderURL);
  if ( System_String__EndsWith(v3, (System_String_o *)StringLiteral_1120/*"/"*/, 0LL) )
    v3 = System_String__TrimEnd_62431112(v3, 0x2Fu, 0LL);
  if ( !System_IO_Path_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_IO_Path_TypeInfo, v12);
  FileName = System_IO_Path__GetFileName(v3, 0LL);
  LocalDataPath = (Il2CppObject *)MovieFileMerge__GetLocalDataPath((const MethodInfo *)FileName);
  v15 = System_String__Format_62415592(
          (System_String_o *)StringLiteral_25313/*"{0}/{1}/{1}.usm"*/,
          LocalDataPath,
          (Il2CppObject *)FileName,
          0LL);
  v16 = MovieFileMerge__GetLocalDataPath((const MethodInfo *)v15);
  v18 = FileMergeAndSplit_TypeInfo;
  v19 = (Il2CppObject *)v16;
  if ( !FileMergeAndSplit_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FileMergeAndSplit_TypeInfo, v17);
    v18 = FileMergeAndSplit_TypeInfo;
  }
  v20 = System_String__Format_62415660(
          (System_String_o *)StringLiteral_25314/*"{0}/{1}/{2}"*/,
          v19,
          (Il2CppObject *)FileName,
          (Il2CppObject *)v18->static_fields->PathCRCFileName,
          0LL);
  return !System_IO_File__Exists(v20, 0LL) && System_IO_File__Exists(v15, 0LL);
}


float __fastcall MovieFileMerge__GetDownloadProgress(MovieFileMerge_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  System_Collections_Generic_Dictionary_TKey__TValue__o *RequireDownLoadFilePathCRCDictionary; // x0
  float v5; // s8
  __int64 v6; // x1
  System_Collections_Generic_Dictionary_TKey__TValue__o *v7; // x0
  int32_t downloadProgress; // s8

  if ( (byte_4B15236 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__uint__get_Count__, method, v2);
    byte_4B15236 = 1;
  }
  RequireDownLoadFilePathCRCDictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.RequireDownLoadFilePathCRCDictionary;
  v5 = 0.0;
  if ( RequireDownLoadFilePathCRCDictionary
    && System_Collections_Generic_Dictionary_object__uint___get_Count(
         RequireDownLoadFilePathCRCDictionary,
         (const MethodInfo_3276E9C *)Method_System_Collections_Generic_Dictionary_string__uint__get_Count__) )
  {
    v7 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.RequireDownLoadFilePathCRCDictionary;
    if ( !v7 )
      sub_1BCAA3C(0LL, v6);
    downloadProgress = this->fields.downloadProgress;
    return (float)downloadProgress
         / (float)System_Collections_Generic_Dictionary_object__uint___get_Count(
                    v7,
                    (const MethodInfo_3276E9C *)Method_System_Collections_Generic_Dictionary_string__uint__get_Count__);
  }
  return v5;
}


double __fastcall MovieFileMerge__GetDownloadSize(MovieFileMerge_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  System_Collections_Generic_Dictionary_TKey__TValue__o *RequireDownLoadFilePathCRCDictionary; // x0

  if ( (byte_4B15235 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__uint__get_Count__, method, v2);
    byte_4B15235 = 1;
  }
  RequireDownLoadFilePathCRCDictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.RequireDownLoadFilePathCRCDictionary;
  if ( !RequireDownLoadFilePathCRCDictionary )
    sub_1BCAA3C(0LL, method);
  return (double)(System_Collections_Generic_Dictionary_object__uint___get_Count(
                    RequireDownLoadFilePathCRCDictionary,
                    (const MethodInfo_3276E9C *)Method_System_Collections_Generic_Dictionary_string__uint__get_Count__) << 20);
}


System_String_o *__fastcall MovieFileMerge__GetLocalDataPath(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  System_String_o *persistentDataPath; // x0

  if ( (byte_4B15233 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Application_TypeInfo, v1, v2);
    sub_1BCA7E0(&StringLiteral_1175/*"/extend-data/movie"*/, v3, v4);
    byte_4B15233 = 1;
  }
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo, v1);
  persistentDataPath = UnityEngine_Application__get_persistentDataPath(0LL);
  return System_String__Concat_62401220(persistentDataPath, (System_String_o *)StringLiteral_1175/*"/extend-data/movie"*/, 0LL);
}


System_String_o *__fastcall MovieFileMerge__GetLocalFolderPath(MovieFileMerge_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  MovieFileMerge_o *v3; // x19
  Il2CppObject *LocalDataPath; // x0

  v3 = this;
  if ( (byte_4B1523F & 1) == 0 )
  {
    this = (MovieFileMerge_o *)sub_1BCA7E0(&StringLiteral_25309/*"{0}/{1}"*/, method, v2);
    byte_4B1523F = 1;
  }
  LocalDataPath = (Il2CppObject *)MovieFileMerge__GetLocalDataPath((const MethodInfo *)this);
  return System_String__Format_62415592(
           (System_String_o *)StringLiteral_25309/*"{0}/{1}"*/,
           LocalDataPath,
           (Il2CppObject *)v3->fields.assetFolder,
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
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  System_Collections_Generic_Dictionary_TKey__TValue__o *v25; // x19
  __int64 v26; // x1
  System_Collections_Generic_Dictionary_TKey__TValue__o *AllDownLoadFilePathCRCDictionary; // x0
  const MethodInfo *v28; // x1
  Il2CppObject *key; // x21
  uint32_t value; // w22
  Il2CppObject *LocalFolderPath; // x1
  System_String_o *v32; // x23
  _BOOL8 v33; // x0
  __int64 v34; // x1
  __int64 v35; // x1
  System_Byte_array *AllBytes; // x24
  uint32_t v37; // w1
  System_IO_DirectoryInfo_o *Parent; // x0
  __int64 v39; // x1
  System_IO_DirectoryInfo_o *v40; // x21
  System_String_o *v41; // x0
  System_String_o *v42; // x0
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v44; // [xsp+0h] [xbp-C0h] BYREF
  uint32_t v45; // [xsp+2Ch] [xbp-94h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v46; // [xsp+30h] [xbp-90h] BYREF

  if ( (byte_4B15240 & 1) == 0 )
  {
    sub_1BCA7E0(&Crc32_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__uint__Add__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__uint__GetEnumerator__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__uint___ctor__, v9, v10);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_string__uint__TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_Enumerator_string__uint__Dispose__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_Enumerator_string__uint__MoveNext__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_Enumerator_string__uint__get_Current__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_KeyValuePair_string__uint__get_Key__, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_KeyValuePair_string__uint__get_Value__, v21, v22);
    sub_1BCA7E0(&StringLiteral_25309/*"{0}/{1}"*/, v23, v24);
    byte_4B15240 = 1;
  }
  memset(&v46, 0, sizeof(v46));
  v45 = 0;
  v25 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1BCAA2C(
                                                                   System_Collections_Generic_Dictionary_string__uint__TypeInfo,
                                                                   method,
                                                                   v2,
                                                                   v3);
  System_Collections_Generic_Dictionary_object__uint____ctor(
    v25,
    (const MethodInfo_3276818 *)Method_System_Collections_Generic_Dictionary_string__uint___ctor__);
  AllDownLoadFilePathCRCDictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.AllDownLoadFilePathCRCDictionary;
  if ( !AllDownLoadFilePathCRCDictionary )
    sub_1BCAA3C(0LL, v26);
  System_Collections_Generic_Dictionary_object__uint___GetEnumerator(
    &v44,
    AllDownLoadFilePathCRCDictionary,
    (const MethodInfo_32775BC *)Method_System_Collections_Generic_Dictionary_string__uint__GetEnumerator__);
  v46 = v44;
  while ( System_Collections_Generic_Dictionary_Enumerator_object__uint___MoveNext(
            &v46,
            (const MethodInfo_3368478 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__uint__MoveNext__) )
  {
    key = v46.fields._current.fields.key;
    value = (uint32_t)v46.fields._current.fields.value;
    LocalFolderPath = (Il2CppObject *)MovieFileMerge__GetLocalFolderPath(this, v28);
    v32 = System_String__Format_62415592((System_String_o *)StringLiteral_25309/*"{0}/{1}"*/, LocalFolderPath, key, 0LL);
    v33 = System_IO_File__Exists(v32, 0LL);
    if ( !v33 )
      goto LABEL_11;
    AllBytes = System_IO_File__ReadAllBytes(v32, 0LL);
    v45 = value;
    if ( !Crc32_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Crc32_TypeInfo, v35);
    v37 = Crc32__Compute(AllBytes, 0LL);
    if ( !System_UInt32__Equals_63331208((uint32_t)&v45, v37, 0LL) )
    {
      System_IO_File__Delete(v32, 0LL);
LABEL_11:
      if ( !v25 )
        sub_1BCAA3C(v33, v34);
      System_Collections_Generic_Dictionary_object__uint___Add(
        v25,
        key,
        value,
        (const MethodInfo_32771CC *)Method_System_Collections_Generic_Dictionary_string__uint__Add__);
      Parent = System_IO_Directory__GetParent(v32, 0LL);
      v40 = Parent;
      if ( !Parent )
        sub_1BCAA3C(0LL, v39);
      v41 = (System_String_o *)((__int64 (__fastcall *)(System_IO_DirectoryInfo_o *, Il2CppMethodPointer))Parent->klass->vtable._8_get_FullName.method)(
                                 Parent,
                                 Parent->klass->vtable._9_get_Name.methodPtr);
      if ( !System_IO_Directory__Exists(v41, 0LL) )
      {
        v42 = (System_String_o *)((__int64 (__fastcall *)(System_IO_DirectoryInfo_o *, Il2CppMethodPointer))v40->klass->vtable._8_get_FullName.method)(
                                   v40,
                                   v40->klass->vtable._9_get_Name.methodPtr);
        System_IO_Directory__CreateDirectory(v42, 0LL);
      }
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_object__uint___Dispose(
    &v46,
    (const MethodInfo_336859C *)Method_System_Collections_Generic_Dictionary_Enumerator_string__uint__Dispose__);
  return (System_Collections_Generic_Dictionary_string__uint__o *)v25;
}


System_Collections_Generic_List_string__o *__fastcall MovieFileMerge__GetSplitFileList(
        MovieFileMerge_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  System_Collections_Generic_List_object__o *v23; // x19
  const MethodInfo *v24; // x1
  System_String_o *LocalFolderPath; // x0
  __int64 v26; // x1
  System_Collections_Generic_Dictionary_TKey__TValue__o *AllDownLoadFilePathCRCDictionary; // x0
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x0
  const MethodInfo *v29; // x1
  Il2CppObject *current; // x21
  Il2CppObject *v31; // x1
  Il2CppObject *v32; // x0
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  int64_t v39; // x1
  struct System_Object_array *items; // x8
  _QWORD *v41; // x9
  __int64 size; // x10
  Il2CppClass **v43; // x0
  System_Collections_Generic_List_Enumerator_object__o v45; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4B15243 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__uint__get_Keys__, method, v2);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToList_string___, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__Add__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__GetEnumerator__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string___ctor__, v17, v18);
    sub_1BCA7E0(&System_Collections_Generic_List_string__TypeInfo, v19, v20);
    sub_1BCA7E0(&StringLiteral_25309/*"{0}/{1}"*/, v21, v22);
    byte_4B15243 = 1;
  }
  memset(&v45, 0, sizeof(v45));
  v23 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_string__TypeInfo,
                                                       method,
                                                       v2,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v23,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_string___ctor__);
  LocalFolderPath = MovieFileMerge__GetLocalFolderPath(this, v24);
  if ( System_IO_Directory__Exists(LocalFolderPath, 0LL) )
  {
    AllDownLoadFilePathCRCDictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.AllDownLoadFilePathCRCDictionary;
    if ( !AllDownLoadFilePathCRCDictionary
      || (Keys = System_Collections_Generic_Dictionary_object__uint___get_Keys(
                   AllDownLoadFilePathCRCDictionary,
                   (const MethodInfo_3276EAC *)Method_System_Collections_Generic_Dictionary_string__uint__get_Keys__),
          (AllDownLoadFilePathCRCDictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)System_Linq_Enumerable__ToList_object_((System_Collections_Generic_IEnumerable_TSource__o *)Keys, (const MethodInfo_2F4F764 *)Method_System_Linq_Enumerable_ToList_string___)) == 0LL) )
    {
      sub_1BCAA3C(AllDownLoadFilePathCRCDictionary, v26);
    }
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v45,
      (System_Collections_Generic_List_object__o *)AllDownLoadFilePathCRCDictionary,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v45,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
    {
      current = v45.fields._current;
      v31 = (Il2CppObject *)MovieFileMerge__GetLocalFolderPath(this, v29);
      v32 = (Il2CppObject *)System_String__Format_62415592((System_String_o *)StringLiteral_25309/*"{0}/{1}"*/, v31, current, 0LL);
      v39 = (int64_t)v32;
      if ( !v23 )
        sub_1BCAA3C(v32, v32);
      items = v23->fields._items;
      v41 = Method_System_Collections_Generic_List_string__Add__;
      ++v23->fields._version;
      if ( !items )
        sub_1BCAA3C(v32, v32);
      size = v23->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v23,
          v32,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
      }
      else
      {
        v43 = &items->obj.klass + size;
        v23->fields._size = size + 1;
        v43[4] = (Il2CppClass *)v39;
        sub_1BCA784((PartyOrganizationUtility_o *)(v43 + 4), v39, v33, v34, v35, v36, v37, v38);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v45,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
  }
  return (System_Collections_Generic_List_string__o *)v23;
}


double __fastcall MovieFileMerge__GetTotalRequireSize(MovieFileMerge_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  struct System_Collections_Generic_Dictionary_string__uint__o *AllDownLoadFilePathCRCDictionary; // x0
  System_Collections_Generic_Dictionary_TKey__TValue__o *RequireDownLoadFilePathCRCDictionary; // x8

  if ( (byte_4B15234 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__uint__get_Count__, method, v2);
    byte_4B15234 = 1;
  }
  AllDownLoadFilePathCRCDictionary = this->fields.AllDownLoadFilePathCRCDictionary;
  if ( !AllDownLoadFilePathCRCDictionary
    || (AllDownLoadFilePathCRCDictionary = (struct System_Collections_Generic_Dictionary_string__uint__o *)System_Collections_Generic_Dictionary_object__uint___get_Count((System_Collections_Generic_Dictionary_TKey__TValue__o *)AllDownLoadFilePathCRCDictionary, (const MethodInfo_3276E9C *)Method_System_Collections_Generic_Dictionary_string__uint__get_Count__),
        (RequireDownLoadFilePathCRCDictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.RequireDownLoadFilePathCRCDictionary) == 0LL) )
  {
    sub_1BCAA3C(AllDownLoadFilePathCRCDictionary, method);
  }
  return (double)((System_Collections_Generic_Dictionary_object__uint___get_Count(
                     RequireDownLoadFilePathCRCDictionary,
                     (const MethodInfo_3276E9C *)Method_System_Collections_Generic_Dictionary_string__uint__get_Count__)
                 + (int)AllDownLoadFilePathCRCDictionary) << 20);
}


void __fastcall MovieFileMerge__Initialize(
        MovieFileMerge_o *this,
        System_String_o *assetFolderURL,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_String_o *v4; // x20
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  System_Collections_Generic_Dictionary_TKey__TValue__o *AllDownLoadFilePathCRCDictionary; // x0
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  System_Collections_Generic_Dictionary_TKey__TValue__o *v26; // x22
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  System_Collections_Generic_Dictionary_TKey__TValue__o *RequireDownLoadFilePathCRCDictionary; // x0
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  System_Collections_Generic_Dictionary_TKey__TValue__o *v40; // x22
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  __int64 v53; // x0
  __int64 v54; // x1
  int64_t v55; // x2
  int32_t v56; // w3
  System_String_o *v57; // x4
  BattleSetupInfo_o *v58; // x5
  FollowerInfo_o *v59; // x6
  PartyListViewItem_o *v60; // x7
  __int64 v61; // x1
  struct System_String_o *FileName; // x0
  int64_t v63; // x2
  int32_t v64; // w3
  System_String_o *v65; // x4
  BattleSetupInfo_o *v66; // x5
  FollowerInfo_o *v67; // x6
  PartyListViewItem_o *v68; // x7
  const MethodInfo *v69; // x1
  Il2CppObject *LocalFolderPath; // x0
  struct System_String_o *v71; // x0
  int64_t v72; // x2
  int32_t v73; // w3
  System_String_o *v74; // x4
  BattleSetupInfo_o *v75; // x5
  FollowerInfo_o *v76; // x6
  PartyListViewItem_o *v77; // x7
  const MethodInfo *v78; // x1
  Il2CppObject *v79; // x0
  struct System_String_o *v80; // x0
  int64_t v81; // x2
  int32_t v82; // w3
  System_String_o *v83; // x4
  BattleSetupInfo_o *v84; // x5
  FollowerInfo_o *v85; // x6
  PartyListViewItem_o *v86; // x7
  const MethodInfo *v87; // x1
  System_String_o *v88; // x0
  __int64 v89; // x1
  FileMergeAndSplit_c *v90; // x8
  Il2CppObject *v91; // x20
  struct System_String_o *v92; // x0
  int64_t v93; // x2
  int32_t v94; // w3
  System_String_o *v95; // x4
  BattleSetupInfo_o *v96; // x5
  FollowerInfo_o *v97; // x6
  PartyListViewItem_o *v98; // x7

  v4 = assetFolderURL;
  if ( (byte_4B1523A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__uint__Clear__, assetFolderURL, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__uint___ctor__, v6, v7);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_string__uint__TypeInfo, v8, v9);
    sub_1BCA7E0(&FileMergeAndSplit_TypeInfo, v10, v11);
    sub_1BCA7E0(&System_IO_Path_TypeInfo, v12, v13);
    sub_1BCA7E0(&StringLiteral_25309/*"{0}/{1}"*/, v14, v15);
    sub_1BCA7E0(&StringLiteral_25305/*"{0}/SplitFile"*/, v16, v17);
    sub_1BCA7E0(&StringLiteral_1120/*"/"*/, v18, v19);
    sub_1BCA7E0(&StringLiteral_25311/*"{0}/{1}.usm"*/, v20, v21);
    byte_4B1523A = 1;
  }
  AllDownLoadFilePathCRCDictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.AllDownLoadFilePathCRCDictionary;
  if ( AllDownLoadFilePathCRCDictionary )
  {
    System_Collections_Generic_Dictionary_object__uint___Clear(
      AllDownLoadFilePathCRCDictionary,
      (const MethodInfo_3277354 *)Method_System_Collections_Generic_Dictionary_string__uint__Clear__);
  }
  else
  {
    v26 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1BCAA2C(
                                                                     System_Collections_Generic_Dictionary_string__uint__TypeInfo,
                                                                     assetFolderURL,
                                                                     method,
                                                                     v3);
    System_Collections_Generic_Dictionary_object__uint____ctor(
      v26,
      (const MethodInfo_3276818 *)Method_System_Collections_Generic_Dictionary_string__uint___ctor__);
    this->fields.AllDownLoadFilePathCRCDictionary = (struct System_Collections_Generic_Dictionary_string__uint__o *)v26;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.AllDownLoadFilePathCRCDictionary,
      (int64_t)v26,
      v27,
      v28,
      v29,
      v30,
      v31,
      v32);
  }
  RequireDownLoadFilePathCRCDictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.RequireDownLoadFilePathCRCDictionary;
  if ( RequireDownLoadFilePathCRCDictionary )
  {
    System_Collections_Generic_Dictionary_object__uint___Clear(
      RequireDownLoadFilePathCRCDictionary,
      (const MethodInfo_3277354 *)Method_System_Collections_Generic_Dictionary_string__uint__Clear__);
  }
  else
  {
    v40 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1BCAA2C(
                                                                     System_Collections_Generic_Dictionary_string__uint__TypeInfo,
                                                                     v23,
                                                                     v24,
                                                                     v25);
    System_Collections_Generic_Dictionary_object__uint____ctor(
      v40,
      (const MethodInfo_3276818 *)Method_System_Collections_Generic_Dictionary_string__uint___ctor__);
    this->fields.RequireDownLoadFilePathCRCDictionary = (struct System_Collections_Generic_Dictionary_string__uint__o *)v40;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.RequireDownLoadFilePathCRCDictionary,
      (int64_t)v40,
      v41,
      v42,
      v43,
      v44,
      v45,
      v46);
  }
  this->fields.downloadProgress = 0;
  this->fields.isDownloadCancel = 0;
  this->fields.mergeClass = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.mergeClass, 0LL, v34, v35, v36, v37, v38, v39);
  this->fields.crcCheckerClass = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.crcCheckerClass, 0LL, v47, v48, v49, v50, v51, v52);
  if ( !v4 )
    sub_1BCAA3C(v53, v54);
  if ( System_String__EndsWith(v4, (System_String_o *)StringLiteral_1120/*"/"*/, 0LL) )
    v4 = System_String__TrimEnd_62431112(v4, 0x2Fu, 0LL);
  this->fields.assetFolderURL = v4;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.assetFolderURL, (int64_t)v4, v55, v56, v57, v58, v59, v60);
  if ( !System_IO_Path_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_IO_Path_TypeInfo, v61);
  FileName = System_IO_Path__GetFileName(v4, 0LL);
  this->fields.assetFolder = FileName;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.assetFolder, (int64_t)FileName, v63, v64, v65, v66, v67, v68);
  LocalFolderPath = (Il2CppObject *)MovieFileMerge__GetLocalFolderPath(this, v69);
  v71 = System_String__Format((System_String_o *)StringLiteral_25305/*"{0}/SplitFile"*/, LocalFolderPath, 0LL);
  this->fields.outputSplitFileFolder = v71;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.outputSplitFileFolder,
    (int64_t)v71,
    v72,
    v73,
    v74,
    v75,
    v76,
    v77);
  v79 = (Il2CppObject *)MovieFileMerge__GetLocalFolderPath(this, v78);
  v80 = System_String__Format_62415592(
          (System_String_o *)StringLiteral_25311/*"{0}/{1}.usm"*/,
          v79,
          (Il2CppObject *)this->fields.assetFolder,
          0LL);
  this->fields.outputMergeFile = v80;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.outputMergeFile, (int64_t)v80, v81, v82, v83, v84, v85, v86);
  v88 = MovieFileMerge__GetLocalFolderPath(this, v87);
  v90 = FileMergeAndSplit_TypeInfo;
  v91 = (Il2CppObject *)v88;
  if ( !FileMergeAndSplit_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FileMergeAndSplit_TypeInfo, v89);
    v90 = FileMergeAndSplit_TypeInfo;
  }
  v92 = System_String__Format_62415592(
          (System_String_o *)StringLiteral_25309/*"{0}/{1}"*/,
          v91,
          (Il2CppObject *)v90->static_fields->PathCRCFileName,
          0LL);
  this->fields.outputMergeFileCRC = v92;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.outputMergeFileCRC,
    (int64_t)v92,
    v93,
    v94,
    v95,
    v96,
    v97,
    v98);
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
  __int64 v3; // x3
  __int64 v5; // x20
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7

  if ( (byte_4B1523D & 1) == 0 )
  {
    sub_1BCA7E0(&MovieFileMerge__Merge_d__34_TypeInfo, method, v2);
    byte_4B1523D = 1;
  }
  v5 = sub_1BCAA2C(MovieFileMerge__Merge_d__34_TypeInfo, method, v2, v3);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v5 + 32), (int64_t)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v5;
}


System_Collections_IEnumerator_o *__fastcall MovieFileMerge__PlayCRIMovie(
        MovieFileMerge_o *this,
        System_String_o *filePath,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v5; // x20
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7

  if ( (byte_4B15239 & 1) == 0 )
  {
    sub_1BCA7E0(&MovieFileMerge__PlayCRIMovie_d__30_TypeInfo, filePath, method);
    byte_4B15239 = 1;
  }
  v5 = sub_1BCAA2C(MovieFileMerge__PlayCRIMovie_d__30_TypeInfo, filePath, method, v3);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = filePath;
  sub_1BCA784((PartyOrganizationUtility_o *)(v5 + 32), (int64_t)filePath, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v5;
}


System_Collections_IEnumerator_o *__fastcall MovieFileMerge__PlayMP4(MovieFileMerge_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x20
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7

  if ( (byte_4B15237 & 1) == 0 )
  {
    sub_1BCA7E0(&MovieFileMerge__PlayMP4_d__28_TypeInfo, method, v2);
    byte_4B15237 = 1;
  }
  v5 = sub_1BCAA2C(MovieFileMerge__PlayMP4_d__28_TypeInfo, method, v2, v3);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v5 + 32), (int64_t)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v5;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_IEnumerator_o *__fastcall MovieFileMerge__PlayMP4_38462396(
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

  if ( (byte_4B15238 & 1) == 0 )
  {
    sub_1BCA7E0(&MovieFileMerge__PlayMP4_d__29_TypeInfo, filePath, *(_QWORD *)&mode);
    byte_4B15238 = 1;
  }
  v6 = sub_1BCAA2C(MovieFileMerge__PlayMP4_d__29_TypeInfo, filePath, *(_QWORD *)&mode, method);
  System_Object___ctor((Il2CppObject *)v6, 0LL);
  *(_DWORD *)(v6 + 16) = 0;
  *(_QWORD *)(v6 + 40) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v6 + 40), (int64_t)this, v7, v8, v9, v10, v11, v12);
  *(_QWORD *)(v6 + 32) = filePath;
  sub_1BCA784((PartyOrganizationUtility_o *)(v6 + 32), (int64_t)filePath, v13, v14, v15, v16, v17, v18);
  return (System_Collections_IEnumerator_o *)v6;
}


void __fastcall MovieFileMerge__Reboot(MovieFileMerge_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  UnityEngine_Networking_UnityWebRequest_o *v8; // x0
  PartyOrganizationUtility_o *p_loader; // x19
  struct UnityEngine_Networking_UnityWebRequest_o *loader; // t1
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  ManagementManager_c *v17; // x0
  Il2CppObject *Instance; // x0
  __int64 v19; // x1

  if ( (byte_4B15245 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Application_TypeInfo, method, v2);
    sub_1BCA7E0(&ManagementManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_ManagementManager__get_Instance__, v6, v7);
    byte_4B15245 = 1;
  }
  loader = this->fields.loader;
  p_loader = (PartyOrganizationUtility_o *)&this->fields.loader;
  v8 = loader;
  if ( loader )
  {
    UnityEngine_Networking_UnityWebRequest__Dispose(v8, 0LL);
    p_loader->klass = 0LL;
    sub_1BCA784(p_loader, 0LL, v11, v12, v13, v14, v15, v16);
  }
  if ( !ManagementManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo, method);
  if ( !byte_4B152DA )
  {
    sub_1BCA7E0(&ManagementManager_TypeInfo, method, v2);
    byte_4B152DA = 1;
  }
  v17 = ManagementManager_TypeInfo;
  if ( !ManagementManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo, method);
    v17 = ManagementManager_TypeInfo;
  }
  if ( v17->static_fields->isDuringStartup )
  {
    if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo, method);
    UnityEngine_Application__Quit_69948112(0LL);
  }
  else
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
    if ( !Instance )
      sub_1BCAA3C(0LL, v19);
    ManagementManager__reboot((ManagementManager_o *)Instance, 0, 1, 0LL);
  }
}


void __fastcall MovieFileMerge___Merge_b__34_0(MovieFileMerge_o *this, System_Exception_o *e, const MethodInfo *method)
{
  Il2CppObject *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  Il2CppObject *Instance; // x20
  System_String_o *v19; // x21
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  ErrorDialog_ClickDelegate_o *v23; // x22
  const MethodInfo *v24; // x2
  System_String_o *v25; // x1

  v4 = (Il2CppObject *)this;
  if ( (byte_4B15247 & 1) == 0 )
  {
    sub_1BCA7E0(&ErrorDialog_ClickDelegate_TypeInfo, e, method);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_MovieFileMerge_EndMergeRetryDialog__, v7, v8);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9, v10);
    sub_1BCA7E0(&StringLiteral_5402/*"Disk full"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_9357/*"NETWORK_ERROR_DISK_FULL"*/, v13, v14);
    this = (MovieFileMerge_o *)sub_1BCA7E0(&StringLiteral_1/*""*/, v15, v16);
    byte_4B15247 = 1;
  }
  if ( !e )
    goto LABEL_12;
  this = (MovieFileMerge_o *)((__int64 (__fastcall *)(System_Exception_o *, Il2CppMethodPointer, const MethodInfo *))e->klass->vtable._5_get_Message.method)(
                               e,
                               e->klass->vtable._6_get_Data.methodPtr,
                               method);
  if ( !this )
    goto LABEL_12;
  if ( !System_String__StartsWith((System_String_o *)this, (System_String_o *)StringLiteral_5402/*"Disk full"*/, 0LL) )
  {
    v25 = (System_String_o *)((__int64 (__fastcall *)(System_Exception_o *, Il2CppMethodPointer))e->klass->vtable._5_get_Message.method)(
                               e,
                               e->klass->vtable._6_get_Data.methodPtr);
    goto LABEL_11;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v17);
  v19 = LocalizationManager__Get((System_String_o *)StringLiteral_9357/*"NETWORK_ERROR_DISK_FULL"*/, 0LL);
  v23 = (ErrorDialog_ClickDelegate_o *)sub_1BCAA2C(ErrorDialog_ClickDelegate_TypeInfo, v20, v21, v22);
  ErrorDialog_ClickDelegate___ctor(v23, v4, Method_MovieFileMerge_EndMergeRetryDialog__, 0LL);
  if ( !Instance )
LABEL_12:
    sub_1BCAA3C(this, e);
  CommonUI__OpenErrorDialog((CommonUI_o *)Instance, (System_String_o *)StringLiteral_1/*""*/, v19, v23, 1, 0LL);
  v25 = (System_String_o *)StringLiteral_5402/*"Disk full"*/;
LABEL_11:
  MovieFileMerge__AssetLoadLogError((MovieFileMerge_o *)v4, v25, v24);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  int32_t _1__state; // w8
  struct MovieFileMerge_o *_4__this; // x20
  System_Collections_IEnumerator_o *v13; // x0
  PartyOrganizationUtility_o *p__2__current; // x19
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  bool result; // w0
  System_Collections_Generic_Dictionary_string__uint__o *NeedDownloadDictionary; // x0
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  struct FileMergeAndSplit_CRCChecker_o *crcCheckerClass; // x8
  System_Collections_Generic_Dictionary_string__uint__o *Dic; // x0
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  System_String_o *outputMergeFile; // x21
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x0
  System_Collections_Generic_List_uint__o *v39; // x22
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x3
  FileMergeAndSplit_CRCChecker_o *v43; // x23
  const MethodInfo *v44; // x3
  PartyOrganizationUtility_o *p_crcCheckerClass; // x20
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  System_Collections_IEnumerator_o *v52; // x0
  PartyOrganizationUtility_o *v53; // x19
  int64_t v54; // x2
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7

  v4 = this;
  if ( (byte_4B15248 & 1) == 0 )
  {
    sub_1BCA7E0(&FileMergeAndSplit_CRCChecker_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__uint__get_Values__, v5, v6);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToList_uint___, v7, v8);
    this = (MovieFileMerge__CRCDownloadAndCheck_d__32_o *)sub_1BCA7E0(&FileMergeAndSplit_TypeInfo, v9, v10);
    byte_4B15248 = 1;
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
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&_4__this->fields.RequireDownLoadFilePathCRCDictionary,
      (int64_t)NeedDownloadDictionary,
      v23,
      v24,
      v25,
      v26,
      v27,
      v28);
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
        j_il2cpp_runtime_class_init_0(FileMergeAndSplit_TypeInfo, method);
      if ( _4__this )
      {
        v13 = MovieFileMerge__Download(_4__this, FileMergeAndSplit_TypeInfo->static_fields->PathCRCFileName, 0, v3);
        v4->fields.__2__current = (Il2CppObject *)v13;
        p__2__current = (PartyOrganizationUtility_o *)&v4->fields.__2__current;
        sub_1BCA784(p__2__current, (int64_t)v13, v15, v16, v17, v18, v19, v20);
        result = 1;
        *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
        return result;
      }
LABEL_22:
      sub_1BCAA3C(this, method);
    }
    return 0;
  }
  v4->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_22;
  Dic = MovieFileMerge__CreateDic((MovieFileMerge_o *)this, _4__this->fields.outputMergeFileCRC, v2);
  _4__this->fields.AllDownLoadFilePathCRCDictionary = Dic;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&_4__this->fields.AllDownLoadFilePathCRCDictionary,
    (int64_t)Dic,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
  this = (MovieFileMerge__CRCDownloadAndCheck_d__32_o *)_4__this->fields.AllDownLoadFilePathCRCDictionary;
  if ( !this )
    goto LABEL_22;
  outputMergeFile = _4__this->fields.outputMergeFile;
  Values = System_Collections_Generic_Dictionary_object__uint___get_Values(
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)this,
             (const MethodInfo_3276FFC *)Method_System_Collections_Generic_Dictionary_string__uint__get_Values__);
  v39 = (System_Collections_Generic_List_uint__o *)System_Linq_Enumerable__ToList_uint_(
                                                     (System_Collections_Generic_IEnumerable_TSource__o *)Values,
                                                     (const MethodInfo_2F4F85C *)Method_System_Linq_Enumerable_ToList_uint___);
  v43 = (FileMergeAndSplit_CRCChecker_o *)sub_1BCAA2C(FileMergeAndSplit_CRCChecker_TypeInfo, v40, v41, v42);
  FileMergeAndSplit_CRCChecker___ctor(v43, outputMergeFile, v39, v44);
  _4__this->fields.crcCheckerClass = v43;
  p_crcCheckerClass = (PartyOrganizationUtility_o *)&_4__this->fields.crcCheckerClass;
  sub_1BCA784(p_crcCheckerClass, (int64_t)v43, v46, v47, v48, v49, v50, v51);
  this = (MovieFileMerge__CRCDownloadAndCheck_d__32_o *)p_crcCheckerClass->klass;
  if ( !p_crcCheckerClass->klass )
    goto LABEL_22;
  v52 = FileMergeAndSplit_CRCChecker__Run((FileMergeAndSplit_CRCChecker_o *)this, method);
  v4->fields.__2__current = (Il2CppObject *)v52;
  v53 = (PartyOrganizationUtility_o *)&v4->fields.__2__current;
  sub_1BCA784(v53, (int64_t)v52, v54, v55, v56, v57, v58, v59);
  *(_DWORD *)&v53[-1].fields._IsQuestStartMenuMode_k__BackingField = 2;
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
  __int64 v5; // x3
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(&Method_MovieFileMerge__CRCDownloadAndCheck_d__32_System_Collections_IEnumerator_Reset__, v7);
  sub_1BCA908(v6, v8);
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
  __int64 v2; // x2
  MovieFileMerge__DownloadMovie_d__33_o *v3; // x20
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  int32_t _1__state; // w8
  MovieFileMerge_o *_4__this; // x19
  System_Collections_Generic_Dictionary_TKey__TValue__o *RequireDownLoadFilePathCRCDictionary; // x0
  MovieFileMerge__DownloadMovie_d__33_o *v15; // x9
  __int128 v16; // q0
  struct System_Collections_Generic_KeyValuePair_TKey__TValue__o current; // q1
  struct System_Collections_Generic_Dictionary_Enumerator_string__uint__o *p__7__wrap1; // x0
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  _BOOL8 v25; // x0
  const MethodInfo *v26; // x1
  const MethodInfo *v27; // x3
  MovieFileMerge__DownloadMovie_d__33_o *v28; // x8
  bool result; // w0
  __int64 v30; // x0
  __int64 v31; // x1
  MovieFileMerge__DownloadMovie_d__33_o *v32; // x8
  Il2CppObject *v33; // x1
  MovieFileMerge__DownloadMovie_d__33_o *v34; // x0
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v41[2]; // [xsp+8h] [xbp-88h] BYREF
  MovieFileMerge__DownloadMovie_d__33_o **v42; // [xsp+68h] [xbp-28h]
  MovieFileMerge__DownloadMovie_d__33_o *v43; // [xsp+78h] [xbp-18h] BYREF

  v43 = this;
  v3 = this;
  if ( (byte_4B1524A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__uint__GetEnumerator__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_Enumerator_string__uint__MoveNext__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_Enumerator_string__uint__get_Current__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_KeyValuePair_string__uint__get_Key__, v8, v9);
    this = (MovieFileMerge__DownloadMovie_d__33_o *)sub_1BCA7E0(
                                                      &Method_System_Collections_Generic_KeyValuePair_string__uint__get_Value__,
                                                      v10,
                                                      v11);
    byte_4B1524A = 1;
  }
  v42 = &v43;
  _1__state = v3->fields.__1__state;
  _4__this = v3->fields.__4__this;
  if ( _1__state != 1 )
  {
    if ( _1__state )
      return 0;
    v3->fields.__1__state = -1;
    if ( !_4__this )
      sub_1BCAA3C(this, method);
    RequireDownLoadFilePathCRCDictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)_4__this->fields.RequireDownLoadFilePathCRCDictionary;
    _4__this->fields.isDownloading = 1;
    _4__this->fields.downloadProgress = 0;
    if ( !RequireDownLoadFilePathCRCDictionary )
      sub_1BCAA3C(0LL, method);
    System_Collections_Generic_Dictionary_object__uint___GetEnumerator(
      v41,
      RequireDownLoadFilePathCRCDictionary,
      (const MethodInfo_32775BC *)Method_System_Collections_Generic_Dictionary_string__uint__GetEnumerator__);
    v15 = v43;
    v16 = *(_OWORD *)&v41[0].fields._dictionary;
    current = v41[0].fields._current;
    p__7__wrap1 = &v43->fields.__7__wrap1;
    v41[1] = v41[0];
    *(_QWORD *)&v43->fields.__7__wrap1.fields._getEnumeratorRetType = *(_QWORD *)&v41[0].fields._getEnumeratorRetType;
    v15->fields.__7__wrap1.fields._current = current;
    *(_OWORD *)&v15->fields.__7__wrap1.fields._dictionary = v16;
    sub_1BCA784((PartyOrganizationUtility_o *)p__7__wrap1, 0LL, v19, v20, v21, v22, v23, v24);
    v3 = v43;
  }
  v3->fields.__1__state = -3;
  v25 = System_Collections_Generic_Dictionary_Enumerator_object__uint___MoveNext(
          (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v3->fields.__7__wrap1,
          (const MethodInfo_3368478 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__uint__MoveNext__);
  v28 = v43;
  if ( v25 )
  {
    if ( !_4__this )
      sub_1BCAA3C(v25, v26);
    if ( _4__this->fields.isDownloadCancel )
    {
      _4__this->fields.isDownloading = 0;
      MovieFileMerge__DownloadMovie_d__33____m__Finally1(v28, v26);
      return 0;
    }
    else
    {
      v33 = (Il2CppObject *)MovieFileMerge__Download(
                              _4__this,
                              (System_String_o *)v43->fields.__7__wrap1.fields._current.fields.key,
                              (uint32_t)v43->fields.__7__wrap1.fields._current.fields.value,
                              v27);
      v34 = v43;
      v43->fields.__2__current = v33;
      sub_1BCA784((PartyOrganizationUtility_o *)&v34->fields.__2__current, (int64_t)v33, v35, v36, v37, v38, v39, v40);
      result = 1;
      v43->fields.__1__state = 1;
    }
  }
  else
  {
    MovieFileMerge__DownloadMovie_d__33____m__Finally1(v43, v26);
    v32 = v43;
    *(_QWORD *)&v43->fields.__7__wrap1.fields._getEnumeratorRetType = 0LL;
    v32->fields.__7__wrap1.fields._current = 0u;
    *(_OWORD *)&v32->fields.__7__wrap1.fields._dictionary = 0u;
    if ( !_4__this )
      sub_1BCAA3C(v30, v31);
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
  __int64 v5; // x3
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(&Method_MovieFileMerge__DownloadMovie_d__33_System_Collections_IEnumerator_Reset__, v7);
  sub_1BCA908(v6, v8);
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
  __int64 v2; // x2

  if ( (byte_4B1524B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_Enumerator_string__uint__Dispose__, method, v2);
    byte_4B1524B = 1;
  }
  this->fields.__1__state = -1;
  System_Collections_Generic_Dictionary_Enumerator_object__uint___Dispose(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&this->fields.__7__wrap1,
    (const MethodInfo_336859C *)Method_System_Collections_Generic_Dictionary_Enumerator_string__uint__Dispose__);
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
  __int64 v3; // x3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  MovieFileMerge__Download_d__40_o *v8; // x19
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x1
  __int64 v52; // x2
  __int64 v53; // x1
  __int64 v54; // x2
  __int64 v55; // x1
  __int64 v56; // x2
  __int64 v57; // x1
  __int64 v58; // x2
  __int64 v59; // x1
  __int64 v60; // x2
  __int64 v61; // x1
  __int64 v62; // x2
  __int64 v63; // x1
  __int64 v64; // x2
  __int64 v65; // x1
  __int64 v66; // x2
  __int64 v67; // x1
  __int64 v68; // x2
  __int64 v69; // x1
  __int64 v70; // x2
  struct MovieFileMerge_o *_4__this; // x20
  System_String_o *v72; // x0
  int64_t v73; // x2
  int32_t v74; // w3
  System_String_o *v75; // x4
  BattleSetupInfo_o *v76; // x5
  FollowerInfo_o *v77; // x6
  PartyListViewItem_o *v78; // x7
  const MethodInfo *v79; // x1
  Il2CppObject *LocalFolderPath; // x0
  System_String_o *v81; // x0
  int64_t v82; // x2
  int32_t v83; // w3
  System_String_o *v84; // x4
  BattleSetupInfo_o *v85; // x5
  FollowerInfo_o *v86; // x6
  PartyListViewItem_o *v87; // x7
  int64_t v88; // x2
  int32_t v89; // w3
  System_String_o *v90; // x4
  BattleSetupInfo_o *v91; // x5
  FollowerInfo_o *v92; // x6
  PartyListViewItem_o *v93; // x7
  uint32_t downloadingCRC; // w8
  int64_t v95; // x2
  int32_t v96; // w3
  System_String_o *v97; // x4
  BattleSetupInfo_o *v98; // x5
  FollowerInfo_o *v99; // x6
  PartyListViewItem_o *v100; // x7
  MovieFileMerge__Download_d__40_o *v101; // x21
  int64_t v102; // x1
  int64_t v103; // x2
  int32_t v104; // w3
  System_String_o *v105; // x4
  BattleSetupInfo_o *v106; // x5
  FollowerInfo_o *v107; // x6
  PartyListViewItem_o *v108; // x7
  int64_t v109; // x1
  int64_t v110; // x2
  int32_t v111; // w3
  System_String_o *v112; // x4
  BattleSetupInfo_o *v113; // x5
  FollowerInfo_o *v114; // x6
  PartyListViewItem_o *v115; // x7
  int64_t v116; // x1
  int64_t v117; // x2
  int32_t v118; // w3
  System_String_o *v119; // x4
  BattleSetupInfo_o *v120; // x5
  FollowerInfo_o *v121; // x6
  PartyListViewItem_o *v122; // x7
  int64_t v123; // x2
  int32_t v124; // w3
  System_String_o *v125; // x4
  BattleSetupInfo_o *v126; // x5
  FollowerInfo_o *v127; // x6
  PartyListViewItem_o *v128; // x7
  int64_t v129; // x1
  int64_t v130; // x2
  int32_t v131; // w3
  System_String_o *v132; // x4
  BattleSetupInfo_o *v133; // x5
  FollowerInfo_o *v134; // x6
  PartyListViewItem_o *v135; // x7
  int64_t v136; // x2
  int32_t v137; // w3
  System_String_o *v138; // x4
  BattleSetupInfo_o *v139; // x5
  FollowerInfo_o *v140; // x6
  PartyListViewItem_o *v141; // x7
  int64_t v142; // x1
  System_String_o *v143; // x0
  int64_t v144; // x2
  int32_t v145; // w3
  System_String_o *v146; // x4
  BattleSetupInfo_o *v147; // x5
  FollowerInfo_o *v148; // x6
  PartyListViewItem_o *v149; // x7
  ManagementManager_c *v150; // x0
  _BOOL4 isDuringStartup; // w22
  __int64 v152; // x1
  Il2CppObject *Instance; // x21
  System_String_o *v154; // x22
  __int64 v155; // x1
  __int64 v156; // x2
  __int64 v157; // x3
  ErrorDialog_ClickDelegate_o *v158; // x23
  System_Byte_array *readData_5__5; // x20
  uint32_t v160; // w0
  Il2CppObject **p__2__current; // x19
  int64_t v162; // x2
  int32_t v163; // w3
  System_String_o *v164; // x4
  BattleSetupInfo_o *v165; // x5
  FollowerInfo_o *v166; // x6
  PartyListViewItem_o *v167; // x7
  int v168; // w8
  UnityEngine_WaitForEndOfFrame_o *v169; // x20
  int64_t v170; // x2
  int32_t v171; // w3
  System_String_o *v172; // x4
  BattleSetupInfo_o *v173; // x5
  FollowerInfo_o *v174; // x6
  PartyListViewItem_o *v175; // x7
  __int64 v176; // x2
  __int64 v177; // x3
  float unscaledTime; // s8
  UnityEngine_WaitForEndOfFrame_o *v179; // x21
  int64_t v180; // x2
  int32_t v181; // w3
  System_String_o *v182; // x4
  BattleSetupInfo_o *v183; // x5
  FollowerInfo_o *v184; // x6
  PartyListViewItem_o *v185; // x7
  MovieFileMerge__Download_d__40_o **p_loader; // x22
  int64_t v187; // x2
  int32_t v188; // w3
  System_String_o *v189; // x4
  BattleSetupInfo_o *v190; // x5
  FollowerInfo_o *v191; // x6
  PartyListViewItem_o *v192; // x7
  struct System_String_o **p_errorCode_5__11; // x21
  int64_t v194; // x2
  int32_t v195; // w3
  System_String_o *v196; // x4
  BattleSetupInfo_o *v197; // x5
  FollowerInfo_o *v198; // x6
  PartyListViewItem_o *v199; // x7
  System_String_o *error; // x0
  System_Byte_array *data; // x0
  int64_t v202; // x2
  int32_t v203; // w3
  System_String_o *v204; // x4
  BattleSetupInfo_o *v205; // x5
  FollowerInfo_o *v206; // x6
  PartyListViewItem_o *v207; // x7
  int64_t v208; // x2
  int32_t v209; // w3
  System_String_o *v210; // x4
  BattleSetupInfo_o *v211; // x5
  FollowerInfo_o *v212; // x6
  PartyListViewItem_o *v213; // x7
  UnityEngine_WaitForEndOfFrame_o *v214; // x20
  int64_t v215; // x2
  int32_t v216; // w3
  System_String_o *v217; // x4
  BattleSetupInfo_o *v218; // x5
  FollowerInfo_o *v219; // x6
  PartyListViewItem_o *v220; // x7
  int64_t v221; // x2
  int32_t v222; // w3
  System_String_o *v223; // x4
  BattleSetupInfo_o *v224; // x5
  FollowerInfo_o *v225; // x6
  PartyListViewItem_o *v226; // x7
  System_String_o *v227; // x1
  int64_t v228; // x2
  int32_t v229; // w3
  System_String_o *v230; // x4
  BattleSetupInfo_o *v231; // x5
  FollowerInfo_o *v232; // x6
  PartyListViewItem_o *v233; // x7
  System_IO_DirectoryInfo_o *Parent; // x0
  __int64 v235; // x1
  System_IO_DirectoryInfo_o *v236; // x21
  const MethodInfo *v237; // x1
  System_String_o *v238; // x0
  __int64 v239; // x1
  System_String_o *v240; // x21
  __int64 v241; // x1
  int64_t FreeSize; // x21
  ManagerConfig_c *v243; // x0
  ManagerConfig_c *v244; // x0
  Il2CppObject *v245; // x0
  System_String_o *errorCode_5__11; // x21
  CommonUI_o *v247; // x22
  __int64 v248; // x1
  __int64 v249; // x2
  __int64 v250; // x3
  ErrorDialog_ClickDelegate_o *v251; // x23
  UnityEngine_WaitForEndOfFrame_o *v252; // x20
  int64_t v253; // x2
  int32_t v254; // w3
  System_String_o *v255; // x4
  BattleSetupInfo_o *v256; // x5
  FollowerInfo_o *v257; // x6
  PartyListViewItem_o *v258; // x7
  int autoRetryCount_5__3; // w21
  ManagerConfig_c *v260; // x0
  float DOWNLOAD_RETRY_DELAY_TIME; // s8
  UnityEngine_WaitForSeconds_o *v262; // x20
  int64_t v263; // x2
  int32_t v264; // w3
  System_String_o *v265; // x4
  BattleSetupInfo_o *v266; // x5
  FollowerInfo_o *v267; // x6
  PartyListViewItem_o *v268; // x7
  Il2CppObject *v269; // x21
  PartyOrganizationUtility_o *v270; // x20
  MovieFileMerge__Download_d__40_o *loader; // t1
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
  PartyOrganizationUtility_o *p_readData_5__5; // x0
  struct UnityEngine_Networking_UnityWebRequest_o **v285; // x21
  int64_t v286; // x2
  int32_t v287; // w3
  System_String_o *v288; // x4
  BattleSetupInfo_o *v289; // x5
  FollowerInfo_o *v290; // x6
  PartyListViewItem_o *v291; // x7
  int64_t v292; // x2
  int32_t v293; // w3
  System_String_o *v294; // x4
  BattleSetupInfo_o *v295; // x5
  FollowerInfo_o *v296; // x6
  PartyListViewItem_o *v297; // x7
  ManagerConfig_c *v298; // x0
  Il2CppObject *v299; // x0
  System_String_o *v300; // x21
  CommonUI_o *v301; // x22
  __int64 v302; // x1
  __int64 v303; // x2
  __int64 v304; // x3
  ErrorDialog_ClickDelegate_o *v305; // x23
  UnityEngine_WaitForSeconds_o *v306; // x20
  int64_t v307; // x2
  int32_t v308; // w3
  System_String_o *v309; // x4
  BattleSetupInfo_o *v310; // x5
  FollowerInfo_o *v311; // x6
  PartyListViewItem_o *v312; // x7
  System_String_o *v313; // x22
  __int64 v314; // x1
  __int64 v315; // x2
  __int64 v316; // x3
  ErrorDialog_ClickDelegate_o *v317; // x23
  UnityEngine_WaitForEndOfFrame_o *v318; // x20
  int64_t v319; // x2
  int32_t v320; // w3
  System_String_o *v321; // x4
  BattleSetupInfo_o *v322; // x5
  FollowerInfo_o *v323; // x6
  PartyListViewItem_o *v324; // x7
  int64_t v325; // x2
  int32_t v326; // w3
  System_String_o *v327; // x4
  BattleSetupInfo_o *v328; // x5
  FollowerInfo_o *v329; // x6
  PartyListViewItem_o *v330; // x7
  int64_t v331; // x2
  int32_t v332; // w3
  System_String_o *v333; // x4
  BattleSetupInfo_o *v334; // x5
  FollowerInfo_o *v335; // x6
  PartyListViewItem_o *v336; // x7
  int64_t v337; // x2
  int32_t v338; // w3
  System_String_o *v339; // x4
  BattleSetupInfo_o *v340; // x5
  FollowerInfo_o *v341; // x6
  PartyListViewItem_o *v342; // x7
  float downloadProgress; // s0
  float loadProgress_5__7; // s9
  float v345; // s8
  float v346; // s0
  bool v347; // zf
  float v348; // s8
  System_String_o *downloadingURL; // x22
  System_String_o *v350; // x0
  System_String_o *v351; // x0
  int64_t v352; // x2
  int32_t v353; // w3
  System_String_o *v354; // x4
  BattleSetupInfo_o *v355; // x5
  FollowerInfo_o *v356; // x6
  PartyListViewItem_o *v357; // x7
  System_Collections_Generic_Dictionary_string__string__o *ResponseHeaders; // x0
  System_Collections_Generic_Dictionary_object__object__o *v359; // x22
  Il2CppObject *v360; // x22
  MovieFileMerge__Download_d__40_o *v361; // x22
  int v362; // w8
  System_String_o *v363; // x23
  System_String_o *v364; // x0
  __int64 v365; // x1
  __int64 v366; // x2
  ManagementManager_c *v367; // x0
  _BOOL4 v368; // w23
  Il2CppObject *v369; // x0
  __int64 v370; // x1
  struct System_String_o *errorLocalizeCode_5__12; // x8
  CommonUI_o *v372; // x22
  System_String_o *v373; // x21
  System_String_o *v374; // x23
  System_String_o *v375; // x23
  __int64 v376; // x1
  __int64 v377; // x2
  __int64 v378; // x3
  ErrorDialog_ClickDelegate_o *v379; // x24
  ManagerConfig_c *v380; // x0
  int64_t wait_5__8; // x1
  System_String_o *v382; // x23
  System_String_o *v383; // x23
  __int64 v384; // x1
  __int64 v385; // x2
  __int64 v386; // x3
  ErrorDialog_ClickDelegate_o *v387; // x24
  __int64 v388; // x0
  __int64 v389; // x1
  __int64 v390; // x2
  __int64 v391; // x3
  System_IO_IOException_o *v392; // x21
  __int64 v393; // x1
  System_String_o *v394; // x0
  __int64 v395; // x1
  __int64 v396; // x0
  UnityEngine_Networking_UnityWebRequest_o *v397; // x0
  PartyOrganizationUtility_o *v398; // x20
  int64_t v399; // x2
  int32_t v400; // w3
  System_String_o *v401; // x4
  BattleSetupInfo_o *v402; // x5
  FollowerInfo_o *v403; // x6
  PartyListViewItem_o *v404; // x7
  PartyOrganizationUtility_o *v405; // x19
  int64_t v406; // x2
  int32_t v407; // w3
  System_String_o *v408; // x4
  BattleSetupInfo_o *v409; // x5
  FollowerInfo_o *v410; // x6
  PartyListViewItem_o *v411; // x7
  System_Nullable_Vector2__o effectDistance; // [xsp+0h] [xbp-70h]
  System_Nullable_Vector2__o effectDistancea; // [xsp+0h] [xbp-70h]
  Il2CppObject *value; // [xsp+38h] [xbp-38h] BYREF

  v8 = this;
  if ( (byte_4B15249 & 1) == 0 )
  {
    sub_1BCA7E0(&char___TypeInfo, method, v2);
    sub_1BCA7E0(&ErrorDialog_ClickDelegate_TypeInfo, v9, v10);
    sub_1BCA7E0(&CommonServicePluginScript_TypeInfo, v11, v12);
    sub_1BCA7E0(&Crc32_TypeInfo, v13, v14);
    sub_1BCA7E0(&UnityEngine_Debug_TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__string__TryGetValue__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__string__get_Count__, v19, v20);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v21, v22);
    sub_1BCA7E0(&ManagementManager_TypeInfo, v23, v24);
    sub_1BCA7E0(&ManagerConfig_TypeInfo, v25, v26);
    sub_1BCA7E0(&Method_MovieFileMerge_EndRetryDialog__, v27, v28);
    sub_1BCA7E0(&Method_MovieFileMerge_EndWarningDialog__, v29, v30);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v31, v32);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v33, v34);
    sub_1BCA7E0(&string___TypeInfo, v35, v36);
    sub_1BCA7E0(&UnityEngine_WaitForEndOfFrame_TypeInfo, v37, v38);
    sub_1BCA7E0(&UnityEngine_WaitForSeconds_TypeInfo, v39, v40);
    sub_1BCA7E0(&StringLiteral_7287/*"HTTP"*/, v41, v42);
    sub_1BCA7E0(&StringLiteral_812/*")\n\n503 Auto retry count "*/, v43, v44);
    sub_1BCA7E0(&StringLiteral_815/*")\nfile crc ("*/, v45, v46);
    sub_1BCA7E0(&StringLiteral_1510/*"503"*/, v47, v48);
    sub_1BCA7E0(&StringLiteral_2157/*"ASSET_LOADER_ERROR_BOOT_RETRY_MESSAGE"*/, v49, v50);
    sub_1BCA7E0(&StringLiteral_16105/*"[FFFF80]Download error for debug"*/, v51, v52);
    sub_1BCA7E0(&StringLiteral_25309/*"{0}/{1}"*/, v53, v54);
    sub_1BCA7E0(&StringLiteral_12416/*"STATUS"*/, v55, v56);
    sub_1BCA7E0(&StringLiteral_811/*")\n\n"*/, v57, v58);
    sub_1BCA7E0(&StringLiteral_691/*"("*/, v59, v60);
    sub_1BCA7E0(&StringLiteral_813/*")\n\nAssetBundle file check sum error\nlist crc ("*/, v61, v62);
    sub_1BCA7E0(&StringLiteral_809/*")"*/, v63, v64);
    sub_1BCA7E0(&StringLiteral_2158/*"ASSET_LOADER_ERROR_TIME_OVER_MESSAGE"*/, v65, v66);
    sub_1BCA7E0(&StringLiteral_814/*")\n\nAssetBundle file download time over"*/, v67, v68);
    this = (MovieFileMerge__Download_d__40_o *)sub_1BCA7E0(&StringLiteral_1/*""*/, v69, v70);
    byte_4B15249 = 1;
  }
  value = 0LL;
  _4__this = v8->fields.__4__this;
  switch ( v8->fields.__1__state )
  {
    case 0:
      v8->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_177;
      v72 = System_String__Format_62415592(
              (System_String_o *)StringLiteral_25309/*"{0}/{1}"*/,
              (Il2CppObject *)_4__this->fields.assetFolderURL,
              (Il2CppObject *)v8->fields.fileName,
              0LL);
      _4__this->fields.downloadingURL = v72;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&_4__this->fields.downloadingURL,
        (int64_t)v72,
        v73,
        v74,
        v75,
        v76,
        v77,
        v78);
      _4__this->fields.downloadingCRC = v8->fields.crc;
      LocalFolderPath = (Il2CppObject *)MovieFileMerge__GetLocalFolderPath(_4__this, v79);
      v81 = System_String__Format_62415592(
              (System_String_o *)StringLiteral_25309/*"{0}/{1}"*/,
              LocalFolderPath,
              (Il2CppObject *)v8->fields.fileName,
              0LL);
      v8->fields._dlFilePath_5__2 = v81;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&v8->fields._dlFilePath_5__2,
        (int64_t)v81,
        v82,
        v83,
        v84,
        v85,
        v86,
        v87);
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
        j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, method);
        this = (MovieFileMerge__Download_d__40_o *)ManagerConfig_TypeInfo;
      }
      v8->fields._requestTime_5__6 = unscaledTime + *(float *)&this[1].fields._dlFilePath_5__2[1].fields._stringLength;
      if ( !_4__this )
        goto LABEL_177;
      v8->fields._loadProgress_5__7 = 0.0;
      v179 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BCAA2C(UnityEngine_WaitForEndOfFrame_TypeInfo, method, v176, v177);
      UnityEngine_WaitForEndOfFrame___ctor(v179, 0LL);
      v8->fields._wait_5__8 = v179;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&v8->fields._wait_5__8,
        (int64_t)v179,
        v180,
        v181,
        v182,
        v183,
        v184,
        v185);
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
        sub_1BCA784((PartyOrganizationUtility_o *)&_4__this->fields.loader, 0LL, v221, v222, v223, v224, v225, v226);
        LOBYTE(this) = 0;
        _4__this->fields.isDownloading = 0;
        return (char)this;
      }
      downloadProgress = UnityEngine_Networking_UnityWebRequest__get_downloadProgress(
                           (UnityEngine_Networking_UnityWebRequest_o *)this,
                           0LL);
      loadProgress_5__7 = v8->fields._loadProgress_5__7;
      v345 = downloadProgress;
      v346 = UnityEngine_Time__get_unscaledTime(0LL);
      v347 = v345 == loadProgress_5__7;
      v348 = v346;
      if ( !v347 )
      {
        v380 = ManagerConfig_TypeInfo;
        if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, method);
          v380 = ManagerConfig_TypeInfo;
        }
        v8->fields._requestTime_5__6 = v348 + v380->static_fields->TIMEOUT;
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
          sub_1BCA784((PartyOrganizationUtility_o *)p__2__current, wait_5__8, v187, v188, v189, v190, v191, v192);
          v168 = 2;
          goto LABEL_119;
        }
        goto LABEL_177;
      }
      if ( v346 < v8->fields._requestTime_5__6 )
        goto LABEL_161;
LABEL_44:
      *(_WORD *)&v8->fields._isAutoRetry_5__9 = 0;
      v8->fields._errorCode_5__11 = 0LL;
      p_errorCode_5__11 = &v8->fields._errorCode_5__11;
      sub_1BCA784((PartyOrganizationUtility_o *)&v8->fields._errorCode_5__11, 0LL, v187, v188, v189, v190, v191, v192);
      v8->fields._errorLocalizeCode_5__12 = 0LL;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&v8->fields._errorLocalizeCode_5__12,
        0LL,
        v194,
        v195,
        v196,
        v197,
        v198,
        v199);
      this = *p_loader;
      if ( !*p_loader )
LABEL_177:
        sub_1BCAA3C(this, method);
      if ( !UnityEngine_Networking_UnityWebRequest__get_isDone((UnityEngine_Networking_UnityWebRequest_o *)this, 0LL) )
      {
        v227 = System_String__Concat_62412480(
                 (System_String_o *)StringLiteral_691/*"("*/,
                 _4__this->fields.downloadingURL,
                 (System_String_o *)StringLiteral_814/*")\n\nAssetBundle file download time over"*/,
                 0LL);
        *p_errorCode_5__11 = v227;
LABEL_63:
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&v8->fields._errorCode_5__11,
          (int64_t)v227,
          v228,
          v229,
          v230,
          v231,
          v232,
          v233);
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
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&v8->fields._readData_5__5,
          (int64_t)data,
          v202,
          v203,
          v204,
          v205,
          v206,
          v207);
        v8->fields.__2__current = 0LL;
        p__2__current = &v8->fields.__2__current;
        sub_1BCA784((PartyOrganizationUtility_o *)p__2__current, 0LL, v208, v209, v210, v211, v212, v213);
        v168 = 3;
        goto LABEL_119;
      }
      this = (MovieFileMerge__Download_d__40_o *)_4__this->fields.loader;
      if ( !this )
        goto LABEL_177;
      downloadingURL = _4__this->fields.downloadingURL;
      v350 = UnityEngine_Networking_UnityWebRequest__get_error((UnityEngine_Networking_UnityWebRequest_o *)this, 0LL);
      v351 = System_String__Concat_62414484(
               (System_String_o *)StringLiteral_691/*"("*/,
               downloadingURL,
               (System_String_o *)StringLiteral_811/*")\n\n"*/,
               v350,
               0LL);
      *p_errorCode_5__11 = v351;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&v8->fields._errorCode_5__11,
        (int64_t)v351,
        v352,
        v353,
        v354,
        v355,
        v356,
        v357);
      this = (MovieFileMerge__Download_d__40_o *)_4__this->fields.loader;
      if ( !this )
        goto LABEL_177;
      ResponseHeaders = UnityEngine_Networking_UnityWebRequest__GetResponseHeaders(
                          (UnityEngine_Networking_UnityWebRequest_o *)this,
                          0LL);
      if ( !ResponseHeaders )
        break;
      v359 = (System_Collections_Generic_Dictionary_object__object__o *)ResponseHeaders;
      if ( System_Collections_Generic_Dictionary_object__object___get_Count(
             (System_Collections_Generic_Dictionary_object__object__o *)ResponseHeaders,
             (const MethodInfo_3264F30 *)Method_System_Collections_Generic_Dictionary_string__string__get_Count__) < 1
        || !System_Collections_Generic_Dictionary_object__object___TryGetValue(
              v359,
              (Il2CppObject *)StringLiteral_12416/*"STATUS"*/,
              &value,
              (const MethodInfo_3266A6C *)Method_System_Collections_Generic_Dictionary_string__string__TryGetValue__) )
      {
        break;
      }
      v360 = value;
      this = (MovieFileMerge__Download_d__40_o *)sub_1BCA888(char___TypeInfo, 1LL);
      if ( !this )
        goto LABEL_177;
      method = (const MethodInfo *)this;
      if ( !LODWORD(this->fields.__2__current) )
        goto LABEL_169;
      LOWORD(this->fields.__4__this) = 32;
      if ( !v360 )
        goto LABEL_177;
      this = (MovieFileMerge__Download_d__40_o *)System_String__Split_62423612(
                                                   (System_String_o *)v360,
                                                   (System_Char_array *)this,
                                                   1,
                                                   0LL);
      if ( !this )
        goto LABEL_177;
      v361 = this;
      if ( SLODWORD(this->fields.__2__current) < 2 )
        break;
      this = (MovieFileMerge__Download_d__40_o *)this->fields.__4__this;
      if ( !this )
        goto LABEL_177;
      this = (MovieFileMerge__Download_d__40_o *)System_String__StartsWith(
                                                   (System_String_o *)this,
                                                   (System_String_o *)StringLiteral_7287/*"HTTP"*/,
                                                   0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
        break;
      if ( LODWORD(v361->fields.__2__current) <= 1 )
        goto LABEL_169;
      this = (MovieFileMerge__Download_d__40_o *)v361->fields.fileName;
      if ( !this )
        goto LABEL_177;
      if ( System_String__Equals_62409536((System_String_o *)this, (System_String_o *)StringLiteral_1510/*"503"*/, 0LL) )
      {
        v362 = v8->fields._autoRetryCount_5__3 + 1;
        v8->fields._isAutoRetry_5__9 = 1;
        v8->fields._autoRetryCount_5__3 = v362;
        v363 = _4__this->fields.downloadingURL;
        v364 = System_Int32__ToString((int)v8 + 64, 0LL);
        v227 = System_String__Concat_62414484(
                 (System_String_o *)StringLiteral_691/*"("*/,
                 v363,
                 (System_String_o *)StringLiteral_812/*")\n\n503 Auto retry count "*/,
                 v364,
                 0LL);
        v8->fields._errorCode_5__11 = v227;
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
        j_il2cpp_runtime_class_init_0(Crc32_TypeInfo, method);
      v160 = Crc32__Compute(readData_5__5, 0LL);
      v8->fields.__2__current = 0LL;
      p__2__current = &v8->fields.__2__current;
      *((_DWORD *)p__2__current + 24) = v160;
      sub_1BCA784((PartyOrganizationUtility_o *)p__2__current, 0LL, v162, v163, v164, v165, v166, v167);
      v168 = 4;
      goto LABEL_119;
    case 4:
      v8->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_177;
      downloadingCRC = _4__this->fields.downloadingCRC;
      if ( v8->fields._downloadCrc_5__13 != downloadingCRC && downloadingCRC )
      {
        this = (MovieFileMerge__Download_d__40_o *)sub_1BCA888(string___TypeInfo, 7LL);
        if ( !this )
          goto LABEL_177;
        v101 = this;
        if ( LODWORD(this->fields.__2__current) )
        {
          v102 = StringLiteral_691/*"("*/;
          this->fields.__4__this = (struct MovieFileMerge_o *)StringLiteral_691/*"("*/;
          sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.__4__this, v102, v95, v96, v97, v98, v99, v100);
          if ( LODWORD(v101->fields.__2__current) > 1 )
          {
            v109 = (int64_t)_4__this->fields.downloadingURL;
            v101->fields.fileName = (struct System_String_o *)v109;
            sub_1BCA784((PartyOrganizationUtility_o *)&v101->fields.fileName, v109, v103, v104, v105, v106, v107, v108);
            if ( LODWORD(v101->fields.__2__current) > 2 )
            {
              v116 = StringLiteral_813/*")\n\nAssetBundle file check sum error\nlist crc ("*/;
              *(_QWORD *)&v101->fields.crc = StringLiteral_813/*")\n\nAssetBundle file check sum error\nlist crc ("*/;
              sub_1BCA784((PartyOrganizationUtility_o *)&v101->fields.crc, v116, v110, v111, v112, v113, v114, v115);
              this = (MovieFileMerge__Download_d__40_o *)System_UInt32__ToString((int)_4__this + 96, 0LL);
              if ( LODWORD(v101->fields.__2__current) > 3 )
              {
                v101->fields._dlFilePath_5__2 = (struct System_String_o *)this;
                sub_1BCA784(
                  (PartyOrganizationUtility_o *)&v101->fields._dlFilePath_5__2,
                  (int64_t)this,
                  v117,
                  v118,
                  v119,
                  v120,
                  v121,
                  v122);
                if ( LODWORD(v101->fields.__2__current) > 4 )
                {
                  v129 = StringLiteral_815/*")\nfile crc ("*/;
                  *(_QWORD *)&v101->fields._autoRetryCount_5__3 = StringLiteral_815/*")\nfile crc ("*/;
                  sub_1BCA784(
                    (PartyOrganizationUtility_o *)&v101->fields._autoRetryCount_5__3,
                    v129,
                    v123,
                    v124,
                    v125,
                    v126,
                    v127,
                    v128);
                  this = (MovieFileMerge__Download_d__40_o *)System_UInt32__ToString((int)v8 + 120, 0LL);
                  if ( LODWORD(v101->fields.__2__current) > 5 )
                  {
                    v101->fields._readData_5__5 = (struct System_Byte_array *)this;
                    sub_1BCA784(
                      (PartyOrganizationUtility_o *)&v101->fields._readData_5__5,
                      (int64_t)this,
                      v130,
                      v131,
                      v132,
                      v133,
                      v134,
                      v135);
                    if ( LODWORD(v101->fields.__2__current) > 6 )
                    {
                      v142 = StringLiteral_809/*")"*/;
                      *(_QWORD *)&v101->fields._requestTime_5__6 = StringLiteral_809/*")"*/;
                      sub_1BCA784(
                        (PartyOrganizationUtility_o *)&v101->fields._requestTime_5__6,
                        v142,
                        v136,
                        v137,
                        v138,
                        v139,
                        v140,
                        v141);
                      v143 = System_String__Concat_62414748((System_String_array *)v101, 0LL);
                      v8->fields._errorCode_5__11 = v143;
                      sub_1BCA784(
                        (PartyOrganizationUtility_o *)&v8->fields._errorCode_5__11,
                        (int64_t)v143,
                        v144,
                        v145,
                        v146,
                        v147,
                        v148,
                        v149);
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
        sub_1BCAA44(this, method);
      }
      Parent = System_IO_Directory__GetParent(v8->fields._dlFilePath_5__2, 0LL);
      v236 = Parent;
      if ( !Parent )
        sub_1BCAA3C(0LL, v235);
      if ( (((__int64 (__fastcall *)(System_IO_DirectoryInfo_o *, Il2CppMethodPointer))Parent->klass->vtable._10_get_Exists.method)(
              Parent,
              Parent->klass->vtable._11_Delete.methodPtr) & 1) == 0 )
      {
        v238 = (System_String_o *)((__int64 (__fastcall *)(System_IO_DirectoryInfo_o *, Il2CppMethodPointer))v236->klass->vtable._8_get_FullName.method)(
                                    v236,
                                    v236->klass->vtable._9_get_Name.methodPtr);
        System_IO_Directory__CreateDirectory(v238, 0LL);
      }
      v240 = MovieFileMerge__GetLocalFolderPath(_4__this, v237);
      if ( !CommonServicePluginScript_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CommonServicePluginScript_TypeInfo, v239);
      FreeSize = CommonServicePluginScript__GetFreeSize(v240, 0LL);
      if ( FreeSize >= 1 )
      {
        v243 = ManagerConfig_TypeInfo;
        if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, v241);
          v243 = ManagerConfig_TypeInfo;
        }
        if ( FreeSize < v243->static_fields->LIMIT_FREE_SIZE )
        {
          v388 = sub_1BCA7F4(&System_IO_IOException_TypeInfo, v241);
          v392 = (System_IO_IOException_o *)sub_1BCAA2C(v388, v389, v390, v391);
          v394 = (System_String_o *)sub_1BCA7F4(&StringLiteral_5402/*"Disk full"*/, v393);
          System_IO_IOException___ctor_62541464(v392, v394, 0LL);
          v396 = sub_1BCA7F4(&Method_MovieFileMerge__Download_d__40_MoveNext__, v395);
          sub_1BCA908(v392, v396);
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
        j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo, method);
      if ( !byte_4B152DA )
      {
        sub_1BCA7E0(&ManagementManager_TypeInfo, method, v2);
        byte_4B152DA = 1;
      }
      v150 = ManagementManager_TypeInfo;
      if ( !ManagementManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo, method);
        v150 = ManagementManager_TypeInfo;
      }
      isDuringStartup = v150->static_fields->isDuringStartup;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v152);
      if ( isDuringStartup )
      {
        v154 = LocalizationManager__Get((System_String_o *)StringLiteral_2157/*"ASSET_LOADER_ERROR_BOOT_RETRY_MESSAGE"*/, 0LL);
        v158 = (ErrorDialog_ClickDelegate_o *)sub_1BCAA2C(ErrorDialog_ClickDelegate_TypeInfo, v155, v156, v157);
        ErrorDialog_ClickDelegate___ctor(v158, (Il2CppObject *)_4__this, Method_MovieFileMerge_EndRetryDialog__, 0LL);
        if ( !Instance )
          goto LABEL_177;
        CommonUI__OpenRetryBootDialog((CommonUI_o *)Instance, (System_String_o *)StringLiteral_1/*""*/, v154, v158, 1, 0LL);
      }
      else
      {
        v313 = LocalizationManager__Get((System_String_o *)StringLiteral_2158/*"ASSET_LOADER_ERROR_TIME_OVER_MESSAGE"*/, 0LL);
        v317 = (ErrorDialog_ClickDelegate_o *)sub_1BCAA2C(ErrorDialog_ClickDelegate_TypeInfo, v314, v315, v316);
        ErrorDialog_ClickDelegate___ctor(v317, (Il2CppObject *)_4__this, Method_MovieFileMerge_EndRetryDialog__, 0LL);
        if ( !Instance )
          goto LABEL_177;
        CommonUI__OpenRetryDialog((CommonUI_o *)Instance, (System_String_o *)StringLiteral_1/*""*/, v313, v317, 1, 0LL);
      }
LABEL_117:
      if ( !_4__this->fields.isErrorDialog )
        goto LABEL_120;
      v318 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BCAA2C(UnityEngine_WaitForEndOfFrame_TypeInfo, method, v2, v3);
      UnityEngine_WaitForEndOfFrame___ctor(v318, 0LL);
      v8->fields.__2__current = (Il2CppObject *)v318;
      p__2__current = &v8->fields.__2__current;
      sub_1BCA784((PartyOrganizationUtility_o *)p__2__current, (int64_t)v318, v319, v320, v321, v322, v323, v324);
      v168 = 10;
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
    MovieFileMerge__AssetLoadLogError(_4__this, (System_String_o *)method, v2);
    v244 = ManagerConfig_TypeInfo;
    if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, method);
      v244 = ManagerConfig_TypeInfo;
    }
    if ( v244->static_fields->UseDebugCommand )
    {
      _4__this->fields.isErrorDialog = 1;
      v245 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      errorCode_5__11 = v8->fields._errorCode_5__11;
      v247 = (CommonUI_o *)v245;
      v251 = (ErrorDialog_ClickDelegate_o *)sub_1BCAA2C(ErrorDialog_ClickDelegate_TypeInfo, v248, v249, v250);
      ErrorDialog_ClickDelegate___ctor(v251, (Il2CppObject *)_4__this, Method_MovieFileMerge_EndWarningDialog__, 0LL);
      if ( !v247 )
        goto LABEL_177;
      *(_QWORD *)&effectDistance.fields.hasValue = 0LL;
      effectDistance.fields.value.fields.y = 0.0;
      CommonUI__OpenWarningDialog(
        v247,
        (System_String_o *)StringLiteral_16105/*"[FFFF80]Download error for debug"*/,
        errorCode_5__11,
        v251,
        1,
        0,
        -1.0,
        1,
        effectDistance,
        0LL);
LABEL_82:
      if ( _4__this->fields.isErrorDialog )
      {
        v252 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BCAA2C(UnityEngine_WaitForEndOfFrame_TypeInfo, method, v2, v3);
        UnityEngine_WaitForEndOfFrame___ctor(v252, 0LL);
        v8->fields.__2__current = (Il2CppObject *)v252;
        p__2__current = &v8->fields.__2__current;
        sub_1BCA784((PartyOrganizationUtility_o *)p__2__current, (int64_t)v252, v253, v254, v255, v256, v257, v258);
        v168 = 5;
        goto LABEL_119;
      }
    }
    if ( v8->fields._isAutoRetry_5__9 )
    {
      autoRetryCount_5__3 = v8->fields._autoRetryCount_5__3;
      v260 = ManagerConfig_TypeInfo;
      if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, method);
        v260 = ManagerConfig_TypeInfo;
      }
      DOWNLOAD_RETRY_DELAY_TIME = v260->static_fields->DOWNLOAD_RETRY_DELAY_TIME;
      v262 = (UnityEngine_WaitForSeconds_o *)sub_1BCAA2C(UnityEngine_WaitForSeconds_TypeInfo, method, v2, v3);
      UnityEngine_WaitForSeconds___ctor(v262, DOWNLOAD_RETRY_DELAY_TIME * (float)autoRetryCount_5__3, 0LL);
      v8->fields.__2__current = (Il2CppObject *)v262;
      p__2__current = &v8->fields.__2__current;
      sub_1BCA784((PartyOrganizationUtility_o *)p__2__current, (int64_t)v262, v263, v264, v265, v266, v267, v268);
      v168 = 6;
      goto LABEL_119;
    }
    if ( v8->fields._isCrcError_5__10 )
    {
      v269 = (Il2CppObject *)v8->fields._errorCode_5__11;
      if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo, method);
      UnityEngine_Debug__LogError(v269, 0LL);
    }
    else
    {
      MovieFileMerge__AssetLoadLogError(_4__this, v8->fields._errorCode_5__11, v2);
      _4__this->fields.isErrorDialog = 1;
      if ( !ManagementManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo, v365);
      if ( !byte_4B152DA )
      {
        sub_1BCA7E0(&ManagementManager_TypeInfo, v365, v366);
        byte_4B152DA = 1;
      }
      v367 = ManagementManager_TypeInfo;
      if ( !ManagementManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo, v365);
        v367 = ManagementManager_TypeInfo;
      }
      v368 = v367->static_fields->isDuringStartup;
      v369 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      errorLocalizeCode_5__12 = v8->fields._errorLocalizeCode_5__12;
      v372 = (CommonUI_o *)v369;
      v373 = (System_String_o *)StringLiteral_1/*""*/;
      if ( v368 )
      {
        if ( errorLocalizeCode_5__12 )
          v374 = v8->fields._errorLocalizeCode_5__12;
        else
          v374 = (System_String_o *)StringLiteral_2157/*"ASSET_LOADER_ERROR_BOOT_RETRY_MESSAGE"*/;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v370);
        v375 = LocalizationManager__Get(v374, 0LL);
        v379 = (ErrorDialog_ClickDelegate_o *)sub_1BCAA2C(ErrorDialog_ClickDelegate_TypeInfo, v376, v377, v378);
        ErrorDialog_ClickDelegate___ctor(v379, (Il2CppObject *)_4__this, Method_MovieFileMerge_EndRetryDialog__, 0LL);
        if ( !v372 )
          goto LABEL_177;
        CommonUI__OpenRetryBootDialog(v372, v373, v375, v379, 1, 0LL);
      }
      else
      {
        if ( errorLocalizeCode_5__12 )
          v382 = v8->fields._errorLocalizeCode_5__12;
        else
          v382 = (System_String_o *)StringLiteral_2158/*"ASSET_LOADER_ERROR_TIME_OVER_MESSAGE"*/;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v370);
        v383 = LocalizationManager__Get(v382, 0LL);
        v387 = (ErrorDialog_ClickDelegate_o *)sub_1BCAA2C(ErrorDialog_ClickDelegate_TypeInfo, v384, v385, v386);
        ErrorDialog_ClickDelegate___ctor(v387, (Il2CppObject *)_4__this, Method_MovieFileMerge_EndRetryDialog__, 0LL);
        if ( !v372 )
          goto LABEL_177;
        CommonUI__OpenRetryDialog(v372, v373, v383, v387, 1, 0LL);
      }
LABEL_36:
      if ( _4__this->fields.isErrorDialog )
      {
        v169 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BCAA2C(UnityEngine_WaitForEndOfFrame_TypeInfo, method, v2, v3);
        UnityEngine_WaitForEndOfFrame___ctor(v169, 0LL);
        v8->fields.__2__current = (Il2CppObject *)v169;
        p__2__current = &v8->fields.__2__current;
        sub_1BCA784((PartyOrganizationUtility_o *)p__2__current, (int64_t)v169, v170, v171, v172, v173, v174, v175);
        v168 = 7;
        goto LABEL_119;
      }
    }
  }
LABEL_92:
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  if ( !byte_4B1194F )
  {
    sub_1BCA7E0(&NetworkManager_TypeInfo, method, v2);
    byte_4B1194F = 1;
  }
  this = (MovieFileMerge__Download_d__40_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
    this = (MovieFileMerge__Download_d__40_o *)NetworkManager_TypeInfo;
  }
  if ( LOBYTE(this[1].fields._dlFilePath_5__2[5].fields._stringLength) )
  {
    if ( !_4__this )
      goto LABEL_177;
    loader = (MovieFileMerge__Download_d__40_o *)_4__this->fields.loader;
    v270 = (PartyOrganizationUtility_o *)&_4__this->fields.loader;
    this = loader;
    if ( !loader )
      goto LABEL_177;
    UnityEngine_Networking_UnityWebRequest__Dispose((UnityEngine_Networking_UnityWebRequest_o *)this, 0LL);
    v270->klass = 0LL;
    sub_1BCA784(v270, 0LL, v272, v273, v274, v275, v276, v277);
    v8->fields._readData_5__5 = 0LL;
    p_readData_5__5 = (PartyOrganizationUtility_o *)&v8->fields._readData_5__5;
  }
  else
  {
    if ( !_4__this )
      goto LABEL_177;
    v285 = &_4__this->fields.loader;
    this = (MovieFileMerge__Download_d__40_o *)_4__this->fields.loader;
    if ( v8->fields._isDownload_5__4 )
    {
      if ( !this )
        goto LABEL_177;
      UnityEngine_Networking_UnityWebRequest__Dispose((UnityEngine_Networking_UnityWebRequest_o *)this, 0LL);
      *v285 = 0LL;
      sub_1BCA784((PartyOrganizationUtility_o *)&_4__this->fields.loader, 0LL, v286, v287, v288, v289, v290, v291);
      v8->fields._readData_5__5 = 0LL;
      sub_1BCA784((PartyOrganizationUtility_o *)&v8->fields._readData_5__5, 0LL, v292, v293, v294, v295, v296, v297);
      if ( !v8->fields._isCrcError_5__10 )
      {
LABEL_120:
        v8->fields._wait_5__8 = 0LL;
        sub_1BCA784((PartyOrganizationUtility_o *)&v8->fields._wait_5__8, 0LL, (int64_t)v2, v3, v4, v5, v6, v7);
        v8->fields._errorCode_5__11 = 0LL;
        sub_1BCA784((PartyOrganizationUtility_o *)&v8->fields._errorCode_5__11, 0LL, v325, v326, v327, v328, v329, v330);
        v8->fields._errorLocalizeCode_5__12 = 0LL;
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&v8->fields._errorLocalizeCode_5__12,
          0LL,
          v331,
          v332,
          v333,
          v334,
          v335,
          v336);
        do
        {
          v8->fields._readData_5__5 = 0LL;
          sub_1BCA784((PartyOrganizationUtility_o *)&v8->fields._readData_5__5, 0LL, v337, v338, v339, v340, v341, v342);
LABEL_172:
          v8->fields._readData_5__5 = 0LL;
          sub_1BCA784((PartyOrganizationUtility_o *)&v8->fields._readData_5__5, 0LL, v88, v89, v90, v91, v92, v93);
        }
        while ( !v8->fields._isDownload_5__4 );
        v397 = UnityEngine_Networking_UnityWebRequest__Get(_4__this->fields.downloadingURL, 0LL);
        _4__this->fields.loader = v397;
        v398 = (PartyOrganizationUtility_o *)&_4__this->fields.loader;
        sub_1BCA784(v398, (int64_t)v397, v399, v400, v401, v402, v403, v404);
        this = (MovieFileMerge__Download_d__40_o *)v398->klass;
        if ( v398->klass )
        {
          UnityEngine_Networking_UnityWebRequest__SendWebRequest((UnityEngine_Networking_UnityWebRequest_o *)this, 0LL);
          v8->fields.__2__current = 0LL;
          v405 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
          sub_1BCA784(v405, 0LL, v406, v407, v408, v409, v410, v411);
          LOBYTE(this) = 1;
          *(_DWORD *)&v405[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
          return (char)this;
        }
        goto LABEL_177;
      }
      if ( !v8->fields._errorCode_5__11 )
        goto LABEL_114;
      v298 = ManagerConfig_TypeInfo;
      if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, method);
        v298 = ManagerConfig_TypeInfo;
      }
      if ( !v298->static_fields->UseDebugCommand )
        goto LABEL_114;
      _4__this->fields.isErrorDialog = 1;
      v299 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v300 = v8->fields._errorCode_5__11;
      v301 = (CommonUI_o *)v299;
      v305 = (ErrorDialog_ClickDelegate_o *)sub_1BCAA2C(ErrorDialog_ClickDelegate_TypeInfo, v302, v303, v304);
      ErrorDialog_ClickDelegate___ctor(v305, (Il2CppObject *)_4__this, Method_MovieFileMerge_EndWarningDialog__, 0LL);
      if ( !v301 )
        goto LABEL_177;
      *(_QWORD *)&effectDistancea.fields.hasValue = 0LL;
      effectDistancea.fields.value.fields.y = 0.0;
      CommonUI__OpenWarningDialog(
        v301,
        (System_String_o *)StringLiteral_16105/*"[FFFF80]Download error for debug"*/,
        v300,
        v305,
        1,
        0,
        -1.0,
        1,
        effectDistancea,
        0LL);
LABEL_57:
      if ( _4__this->fields.isErrorDialog )
      {
        v214 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BCAA2C(UnityEngine_WaitForEndOfFrame_TypeInfo, method, v2, v3);
        UnityEngine_WaitForEndOfFrame___ctor(v214, 0LL);
        v8->fields.__2__current = (Il2CppObject *)v214;
        p__2__current = &v8->fields.__2__current;
        sub_1BCA784((PartyOrganizationUtility_o *)p__2__current, (int64_t)v214, v215, v216, v217, v218, v219, v220);
        v168 = 8;
      }
      else
      {
LABEL_114:
        v306 = (UnityEngine_WaitForSeconds_o *)sub_1BCAA2C(UnityEngine_WaitForSeconds_TypeInfo, method, v2, v3);
        UnityEngine_WaitForSeconds___ctor(v306, 1.0, 0LL);
        v8->fields.__2__current = (Il2CppObject *)v306;
        p__2__current = &v8->fields.__2__current;
        sub_1BCA784((PartyOrganizationUtility_o *)p__2__current, (int64_t)v306, v307, v308, v309, v310, v311, v312);
        v168 = 9;
      }
LABEL_119:
      *((_DWORD *)p__2__current - 2) = v168;
      LOBYTE(this) = 1;
      return (char)this;
    }
    if ( !this )
      return (char)this;
    UnityEngine_Networking_UnityWebRequest__Dispose((UnityEngine_Networking_UnityWebRequest_o *)this, 0LL);
    p_readData_5__5 = (PartyOrganizationUtility_o *)&_4__this->fields.loader;
    *v285 = 0LL;
  }
  sub_1BCA784(p_readData_5__5, 0LL, v278, v279, v280, v281, v282, v283);
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
  __int64 v5; // x3
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(&Method_MovieFileMerge__Download_d__40_System_Collections_IEnumerator_Reset__, v7);
  sub_1BCA908(v6, v8);
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
  __int64 v2; // x2
  MovieFileMerge__Merge_d__34_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  int32_t _1__state; // w8
  struct MovieFileMerge_o *_4__this; // x20
  System_Collections_Generic_List_string__o *SplitFileList; // x0
  System_String_o *outputMergeFile; // x21
  System_Collections_Generic_List_string__o *v18; // x22
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  FileMergeAndSplit_Merge_o *v22; // x23
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  FileMergeAndSplit_Merge_o *mergeClass; // x21
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x3
  System_Action_object__o *v33; // x22
  System_Collections_IEnumerator_o *v34; // x0
  PartyOrganizationUtility_o *p__2__current; // x19
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  bool result; // w0
  struct FileMergeAndSplit_CRCChecker_o *crcCheckerClass; // x8
  struct FileMergeAndSplit_Merge_o *v44; // x8
  System_String_o *v45; // x21
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x0
  System_Collections_Generic_List_uint__o *v47; // x22
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x3
  FileMergeAndSplit_CRCChecker_o *v51; // x23
  const MethodInfo *v52; // x3
  PartyOrganizationUtility_o *p_crcCheckerClass; // x20
  int64_t v54; // x2
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7
  System_Collections_IEnumerator_o *v60; // x0
  PartyOrganizationUtility_o *v61; // x19
  int64_t v62; // x2
  int32_t v63; // w3
  System_String_o *v64; // x4
  BattleSetupInfo_o *v65; // x5
  FollowerInfo_o *v66; // x6
  PartyListViewItem_o *v67; // x7

  v3 = this;
  if ( (byte_4B1524C & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_Exception__TypeInfo, method, v2);
    sub_1BCA7E0(&FileMergeAndSplit_CRCChecker_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__uint__get_Values__, v6, v7);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToList_uint___, v8, v9);
    sub_1BCA7E0(&FileMergeAndSplit_Merge_TypeInfo, v10, v11);
    this = (MovieFileMerge__Merge_d__34_o *)sub_1BCA7E0(&Method_MovieFileMerge__Merge_b__34_0__, v12, v13);
    byte_4B1524C = 1;
  }
  _1__state = v3->fields.__1__state;
  _4__this = v3->fields.__4__this;
  if ( _1__state == 2 )
  {
    v3->fields.__1__state = -1;
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
      v3->fields.__1__state = -1;
      if ( _4__this )
      {
        SplitFileList = MovieFileMerge__GetSplitFileList(_4__this, method);
        outputMergeFile = _4__this->fields.outputMergeFile;
        v18 = SplitFileList;
        v22 = (FileMergeAndSplit_Merge_o *)sub_1BCAA2C(FileMergeAndSplit_Merge_TypeInfo, v19, v20, v21);
        FileMergeAndSplit_Merge___ctor(v22, v18, outputMergeFile, 0LL);
        _4__this->fields.mergeClass = v22;
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&_4__this->fields.mergeClass,
          (int64_t)v22,
          v23,
          v24,
          v25,
          v26,
          v27,
          v28);
        mergeClass = _4__this->fields.mergeClass;
        v33 = (System_Action_object__o *)sub_1BCAA2C(System_Action_Exception__TypeInfo, v30, v31, v32);
        System_Action_object____ctor(v33, (Il2CppObject *)_4__this, Method_MovieFileMerge__Merge_b__34_0__, 0LL);
        if ( mergeClass )
        {
          v34 = FileMergeAndSplit_Merge__Run(mergeClass, (System_Action_Exception__o *)v33, 0LL);
          v3->fields.__2__current = (Il2CppObject *)v34;
          p__2__current = (PartyOrganizationUtility_o *)&v3->fields.__2__current;
          sub_1BCA784(p__2__current, (int64_t)v34, v36, v37, v38, v39, v40, v41);
          result = 1;
          *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
          return result;
        }
      }
LABEL_23:
      sub_1BCAA3C(this, method);
    }
    return 0;
  }
  v3->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_23;
  v44 = _4__this->fields.mergeClass;
  if ( !v44 )
    goto LABEL_23;
  if ( v44->fields.isError )
    return 0;
  this = (MovieFileMerge__Merge_d__34_o *)_4__this->fields.AllDownLoadFilePathCRCDictionary;
  if ( !this )
    goto LABEL_23;
  v45 = _4__this->fields.outputMergeFile;
  Values = System_Collections_Generic_Dictionary_object__uint___get_Values(
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)this,
             (const MethodInfo_3276FFC *)Method_System_Collections_Generic_Dictionary_string__uint__get_Values__);
  v47 = (System_Collections_Generic_List_uint__o *)System_Linq_Enumerable__ToList_uint_(
                                                     (System_Collections_Generic_IEnumerable_TSource__o *)Values,
                                                     (const MethodInfo_2F4F85C *)Method_System_Linq_Enumerable_ToList_uint___);
  v51 = (FileMergeAndSplit_CRCChecker_o *)sub_1BCAA2C(FileMergeAndSplit_CRCChecker_TypeInfo, v48, v49, v50);
  FileMergeAndSplit_CRCChecker___ctor(v51, v45, v47, v52);
  _4__this->fields.crcCheckerClass = v51;
  p_crcCheckerClass = (PartyOrganizationUtility_o *)&_4__this->fields.crcCheckerClass;
  sub_1BCA784(p_crcCheckerClass, (int64_t)v51, v54, v55, v56, v57, v58, v59);
  this = (MovieFileMerge__Merge_d__34_o *)p_crcCheckerClass->klass;
  if ( !p_crcCheckerClass->klass )
    goto LABEL_23;
  v60 = FileMergeAndSplit_CRCChecker__Run((FileMergeAndSplit_CRCChecker_o *)this, method);
  v3->fields.__2__current = (Il2CppObject *)v60;
  v61 = (PartyOrganizationUtility_o *)&v3->fields.__2__current;
  sub_1BCA784(v61, (int64_t)v60, v62, v63, v64, v65, v66, v67);
  *(_DWORD *)&v61[-1].fields._IsQuestStartMenuMode_k__BackingField = 2;
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
  __int64 v5; // x3
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(&Method_MovieFileMerge__Merge_d__34_System_Collections_IEnumerator_Reset__, v7);
  sub_1BCA908(v6, v8);
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
  __int64 v3; // x3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  MovieFileMerge__PlayCRIMovie_d__30_o *v8; // x19
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  int32_t _1__state; // w8
  Il2CppObject *v26; // x21
  Il2CppObject **p__8__1; // x20
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  __int64 v34; // x1
  Il2CppObject *object; // x21
  Il2CppObject *v36; // x21
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  __int64 v43; // x2
  __int64 v44; // x3
  Il2CppObject *v45; // x8
  CRIMoviePlayer_o *klass; // x21
  System_String_o *filePath; // x22
  BgmManager_c *v48; // x0
  Il2CppObject *v49; // x24
  float masterVolume; // s8
  System_Action_o *v51; // x23
  struct MovieFileMerge___c__DisplayClass30_0_o *_8__1; // x8
  PartyOrganizationUtility_o *p__2__current; // x19
  bool result; // w0

  v8 = this;
  if ( (byte_4B1524D & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&BgmManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_CRIMoviePlayer___, v11, v12);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v13, v14);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_UnityEngine_Resources_Load_GameObject___, v17, v18);
    sub_1BCA7E0(&Method_MovieFileMerge___c__DisplayClass30_0__PlayCRIMovie_b__0__, v19, v20);
    sub_1BCA7E0(&MovieFileMerge___c__DisplayClass30_0_TypeInfo, v21, v22);
    this = (MovieFileMerge__PlayCRIMovie_d__30_o *)sub_1BCA7E0(&StringLiteral_3999/*"CRIMovie/CRIMoviePlayerWithPanel"*/, v23, v24);
    byte_4B1524D = 1;
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
    v26 = (Il2CppObject *)sub_1BCAA2C(MovieFileMerge___c__DisplayClass30_0_TypeInfo, method, v2, v3);
    System_Object___ctor(v26, 0LL);
    v8->fields.__8__1 = (struct MovieFileMerge___c__DisplayClass30_0_o *)v26;
    p__8__1 = (Il2CppObject **)&v8->fields.__8__1;
    sub_1BCA784((PartyOrganizationUtility_o *)&v8->fields.__8__1, (int64_t)v26, v28, v29, v30, v31, v32, v33);
    object = UnityEngine_Resources__Load_object_(
               (System_String_o *)StringLiteral_3999/*"CRIMovie/CRIMoviePlayerWithPanel"*/,
               (const MethodInfo_2FA6FF0 *)Method_UnityEngine_Resources_Load_GameObject___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v34);
    this = (MovieFileMerge__PlayCRIMovie_d__30_o *)UnityEngine_Object__Instantiate_object_(
                                                     object,
                                                     (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !this )
      goto LABEL_25;
    v36 = *p__8__1;
    this = (MovieFileMerge__PlayCRIMovie_d__30_o *)UnityEngine_GameObject__GetComponent_object_(
                                                     (UnityEngine_GameObject_o *)this,
                                                     (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_CRIMoviePlayer___);
    if ( !v36 )
      goto LABEL_25;
    v36[1].klass = (Il2CppClass *)this;
    sub_1BCA784((PartyOrganizationUtility_o *)&v36[1], (int64_t)this, v37, v38, v39, v40, v41, v42);
    v45 = *p__8__1;
    if ( !*p__8__1 )
      goto LABEL_25;
    LOBYTE(v45[1].monitor) = 1;
    klass = (CRIMoviePlayer_o *)v45[1].klass;
    filePath = v8->fields.filePath;
    if ( !BgmManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, method);
    if ( !byte_4B11950 )
    {
      sub_1BCA7E0(&BgmManager_TypeInfo, method, v43);
      byte_4B11950 = 1;
    }
    v48 = BgmManager_TypeInfo;
    if ( !BgmManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, method);
      v48 = BgmManager_TypeInfo;
    }
    v49 = *p__8__1;
    masterVolume = v48->static_fields->masterVolume;
    v51 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v43, v44);
    System_Action___ctor(v51, v49, Method_MovieFileMerge___c__DisplayClass30_0__PlayCRIMovie_b__0__, 0LL);
    if ( !klass
      || (CRIMoviePlayer__Initialize(klass, filePath, filePath, masterVolume, 1, 0LL, v51, 1, 0LL, 0, 0, 1, 0LL),
          !*p__8__1)
      || (this = (MovieFileMerge__PlayCRIMovie_d__30_o *)(*p__8__1)[1].klass) == 0LL )
    {
LABEL_25:
      sub_1BCAA3C(this, method);
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
    sub_1BCA784(p__2__current, 0LL, v2, v3, v4, v5, v6, v7);
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
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(&Method_MovieFileMerge__PlayCRIMovie_d__30_System_Collections_IEnumerator_Reset__, v7);
  sub_1BCA908(v6, v8);
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
      sub_1BCAA3C(0LL, method);
    v8 = (Il2CppObject *)MovieFileMerge__PlayMP4_38462396(_4__this, _4__this->fields.outputMergeFile, v2, v3);
    this->fields.__2__current = v8;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.__2__current, (int64_t)v8, v9, v10, v11, v12, v13, v14);
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
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(&Method_MovieFileMerge__PlayMP4_d__28_System_Collections_IEnumerator_Reset__, v7);
  sub_1BCA908(v6, v8);
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
  __int64 v3; // x3
  System_String_o *filePath; // x0
  struct MovieFileMerge_o *_4__this; // x20
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x2
  bool result; // w0
  UnityEngine_WaitForEndOfFrame_o *v11; // x20
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  int32_t v18; // w8
  UnityEngine_WaitForEndOfFrame_o *v19; // x20
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  Il2CppObject *v26; // x0
  Il2CppObject **p__2__current; // x19
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7

  if ( (byte_4B1524E & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_WaitForEndOfFrame_TypeInfo, method, v2);
    byte_4B1524E = 1;
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
        sub_1BCAA3C(IsNullOrEmpty, v8);
      v26 = (Il2CppObject *)MovieFileMerge__PlayCRIMovie((MovieFileMerge_o *)IsNullOrEmpty, this->fields.filePath, v9);
      this->fields.__2__current = v26;
      p__2__current = &this->fields.__2__current;
      sub_1BCA784((PartyOrganizationUtility_o *)p__2__current, (int64_t)v26, v28, v29, v30, v31, v32, v33);
      result = 1;
      *((_DWORD *)p__2__current - 2) = 1;
      break;
    case 1:
      this->fields.__1__state = -1;
      v19 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BCAA2C(UnityEngine_WaitForEndOfFrame_TypeInfo, method, v2, v3);
      UnityEngine_WaitForEndOfFrame___ctor(v19, 0LL);
      this->fields.__2__current = (Il2CppObject *)v19;
      sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.__2__current, (int64_t)v19, v20, v21, v22, v23, v24, v25);
      v18 = 2;
      goto LABEL_9;
    case 2:
      this->fields.__1__state = -1;
      v11 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BCAA2C(UnityEngine_WaitForEndOfFrame_TypeInfo, method, v2, v3);
      UnityEngine_WaitForEndOfFrame___ctor(v11, 0LL);
      this->fields.__2__current = (Il2CppObject *)v11;
      sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.__2__current, (int64_t)v11, v12, v13, v14, v15, v16, v17);
      v18 = 3;
LABEL_9:
      this->fields.__1__state = v18;
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
  __int64 v5; // x3
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(&Method_MovieFileMerge__PlayMP4_d__29_System_Collections_IEnumerator_Reset__, v7);
  sub_1BCA908(v6, v8);
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
    sub_1BCAA3C(0LL, method);
  CRIMoviePlayer__Dispose(player, 0LL);
  this->fields.wait = 0;
}