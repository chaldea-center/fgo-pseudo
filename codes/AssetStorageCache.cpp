void __fastcall AssetStorageCache___ctor(AssetStorageCache_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall AssetStorageCache__ClearCache(bool isStandalone, const MethodInfo *method)
{
  System_String_o *CacheListFile; // x20

  if ( (byte_4BDB617 & 1) == 0 )
  {
    sub_1C21E38(&AssetManager_TypeInfo);
    byte_4BDB617 = 1;
  }
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  CacheListFile = AssetManager__get_CacheListFile(0LL);
  if ( System_IO_File__Exists(CacheListFile, 0LL) )
  {
    System_IO_File__Delete(CacheListFile, 0LL);
    if ( !isStandalone )
      return;
  }
  else if ( !isStandalone )
  {
    return;
  }
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__DeleteContinueData(0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall AssetStorageCache__ClearCacheAll(bool isStandalone, const MethodInfo *method)
{
  System_String_o *Path; // x0
  const MethodInfo *v4; // x2

  Path = AssetStorageCache__GetPath((const MethodInfo *)isStandalone);
  AssetStorageCache__ClearCacheAllCommonProc(Path, isStandalone, v4);
}


// positive sp value has been detected, the output may be wrong!
void __fastcall AssetStorageCache__ClearCacheAllCommonProc(
        System_String_o *cachePath,
        bool isStandalone,
        const MethodInfo *method)
{
  if ( (byte_4BDB616 & 1) == 0 )
  {
    sub_1C21E38(&AssetManager_TypeInfo);
    byte_4BDB616 = 1;
  }
  if ( System_IO_Directory__Exists(cachePath, 0LL) )
    System_IO_Directory__Delete(cachePath, 1, 0LL);
  if ( isStandalone )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__DeleteContinueData(0LL);
    UnityEngine_PlayerPrefs__Save(0LL);
  }
}


void __fastcall AssetStorageCache__ClearCacheAllWithoutSystemAssets(const MethodInfo *method)
{
  ;
}


void __fastcall AssetStorageCache__ClearOldEnvCacheAll(const MethodInfo *method)
{
  System_String_o *OldEnvPath; // x0
  const MethodInfo *v2; // x2

  OldEnvPath = AssetStorageCache__GetOldEnvPath(method);
  AssetStorageCache__ClearCacheAllCommonProc(OldEnvPath, 1, v2);
}


System_String_o *__fastcall AssetStorageCache__GetOldEnvPath(const MethodInfo *method)
{
  __int64 v1; // x19
  _QWORD *OldUnityPersistentDataPath; // x0
  __int64 v3; // x1
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  int64_t v16; // x1
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  int64_t v29; // x1
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  int64_t v36; // x1
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  int64_t v43; // x1

  if ( (byte_4BDB615 & 1) == 0 )
  {
    sub_1C21E38(&AndroidUtil_TypeInfo);
    sub_1C21E38(&CacheFolderName_TypeInfo);
    sub_1C21E38(&ManagerConfig_TypeInfo);
    sub_1C21E38(&string___TypeInfo);
    sub_1C21E38(&StringLiteral_1123/*"/"*/);
    byte_4BDB615 = 1;
  }
  v1 = sub_1C21EE0(string___TypeInfo, 6LL);
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  OldUnityPersistentDataPath = AndroidUtil__GetOldUnityPersistentDataPath(0LL);
  if ( !v1 )
    sub_1C22094(OldUnityPersistentDataPath, v3);
  if ( !*(_DWORD *)(v1 + 24) )
    goto LABEL_17;
  *(_QWORD *)(v1 + 32) = OldUnityPersistentDataPath;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v1 + 32), (int64_t)OldUnityPersistentDataPath, v4, v5, v6, v7, v8, v9);
  if ( *(_DWORD *)(v1 + 24) <= 1u )
    goto LABEL_17;
  v16 = StringLiteral_1123/*"/"*/;
  *(_QWORD *)(v1 + 40) = StringLiteral_1123/*"/"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v1 + 40), v16, v10, v11, v12, v13, v14, v15);
  if ( !CacheFolderName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CacheFolderName_TypeInfo);
  OldUnityPersistentDataPath = CacheFolderName__getFolderNameNotConverted(0, 0LL);
  if ( *(_DWORD *)(v1 + 24) <= 2u )
    goto LABEL_17;
  *(_QWORD *)(v1 + 48) = OldUnityPersistentDataPath;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)(v1 + 48),
    (int64_t)OldUnityPersistentDataPath,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  if ( *(_DWORD *)(v1 + 24) <= 3u )
    goto LABEL_17;
  v29 = StringLiteral_1123/*"/"*/;
  *(_QWORD *)(v1 + 56) = StringLiteral_1123/*"/"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v1 + 56), v29, v23, v24, v25, v26, v27, v28);
  OldUnityPersistentDataPath = &ManagerConfig_TypeInfo->_1.image;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    OldUnityPersistentDataPath = &ManagerConfig_TypeInfo->_1.image;
  }
  if ( *(_DWORD *)(v1 + 24) <= 4u
    || (v36 = *(_QWORD *)(OldUnityPersistentDataPath[23] + 128LL),
        *(_QWORD *)(v1 + 64) = v36,
        sub_1C21DDC((PartyOrganizationUtility_o *)(v1 + 64), v36, v30, v31, v32, v33, v34, v35),
        *(_DWORD *)(v1 + 24) <= 5u) )
  {
LABEL_17:
    sub_1C2209C(OldUnityPersistentDataPath, v3);
  }
  v43 = StringLiteral_1123/*"/"*/;
  *(_QWORD *)(v1 + 72) = StringLiteral_1123/*"/"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v1 + 72), v43, v37, v38, v39, v40, v41, v42);
  return System_String__Concat_63129004((System_String_array *)v1, 0LL);
}


System_String_o *__fastcall AssetStorageCache__GetPath(const MethodInfo *method)
{
  System_String_o *DatFileSavePath; // x19
  System_String_o *FolderName; // x2

  if ( (byte_4BDB614 & 1) == 0 )
  {
    sub_1C21E38(&AndroidUtil_TypeInfo);
    sub_1C21E38(&CacheFolderName_TypeInfo);
    sub_1C21E38(&StringLiteral_1123/*"/"*/);
    byte_4BDB614 = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( !CacheFolderName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CacheFolderName_TypeInfo);
  FolderName = CacheFolderName__getFolderName(0, 0LL);
  return System_String__Concat_63128740(
           DatFileSavePath,
           (System_String_o *)StringLiteral_1123/*"/"*/,
           FolderName,
           (System_String_o *)StringLiteral_1123/*"/"*/,
           0LL);
}