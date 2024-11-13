void __fastcall AssetStorageCache___ctor(AssetStorageCache_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall AssetStorageCache__ClearCache(bool isStandalone, const MethodInfo *method)
{
  __int64 v2; // x2
  System_String_o *CacheListFile; // x20
  __int64 v5; // x1

  if ( (byte_4B152E1 & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager_TypeInfo, method, v2);
    byte_4B152E1 = 1;
  }
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, method);
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
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v5);
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


// local variable allocation has failed, the output may be wrong!
// positive sp value has been detected, the output may be wrong!
void __fastcall AssetStorageCache__ClearCacheAllCommonProc(
        System_String_o *cachePath,
        bool isStandalone,
        const MethodInfo *method)
{
  __int64 v5; // x1

  if ( (byte_4B152E0 & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager_TypeInfo, isStandalone, method);
    byte_4B152E0 = 1;
  }
  if ( System_IO_Directory__Exists(cachePath, 0LL) )
    System_IO_Directory__Delete(cachePath, 1, 0LL);
  if ( isStandalone )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v5);
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
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x19
  _QWORD *OldUnityPersistentDataPath; // x0
  __int64 v14; // x1
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  int64_t v27; // x1
  __int64 v28; // x1
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

  if ( (byte_4B152DF & 1) == 0 )
  {
    sub_1BCA7E0(&AndroidUtil_TypeInfo, v1, v2);
    sub_1BCA7E0(&CacheFolderName_TypeInfo, v3, v4);
    sub_1BCA7E0(&ManagerConfig_TypeInfo, v5, v6);
    sub_1BCA7E0(&string___TypeInfo, v7, v8);
    sub_1BCA7E0(&StringLiteral_1120/*"/"*/, v9, v10);
    byte_4B152DF = 1;
  }
  v12 = sub_1BCA888(string___TypeInfo, 6LL);
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo, v11);
  OldUnityPersistentDataPath = AndroidUtil__GetOldUnityPersistentDataPath(0LL);
  if ( !v12 )
    sub_1BCAA3C(OldUnityPersistentDataPath, v14);
  if ( !*(_DWORD *)(v12 + 24) )
    goto LABEL_17;
  *(_QWORD *)(v12 + 32) = OldUnityPersistentDataPath;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)(v12 + 32),
    (int64_t)OldUnityPersistentDataPath,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  if ( *(_DWORD *)(v12 + 24) <= 1u )
    goto LABEL_17;
  v27 = StringLiteral_1120/*"/"*/;
  *(_QWORD *)(v12 + 40) = StringLiteral_1120/*"/"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v12 + 40), v27, v21, v22, v23, v24, v25, v26);
  if ( !CacheFolderName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CacheFolderName_TypeInfo, v28);
  OldUnityPersistentDataPath = CacheFolderName__getFolderNameNotConverted(0, 0LL);
  if ( *(_DWORD *)(v12 + 24) <= 2u )
    goto LABEL_17;
  *(_QWORD *)(v12 + 48) = OldUnityPersistentDataPath;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)(v12 + 48),
    (int64_t)OldUnityPersistentDataPath,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  if ( *(_DWORD *)(v12 + 24) <= 3u )
    goto LABEL_17;
  v41 = StringLiteral_1120/*"/"*/;
  *(_QWORD *)(v12 + 56) = StringLiteral_1120/*"/"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v12 + 56), v41, v35, v36, v37, v38, v39, v40);
  OldUnityPersistentDataPath = &ManagerConfig_TypeInfo->_1.image;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, v14);
    OldUnityPersistentDataPath = &ManagerConfig_TypeInfo->_1.image;
  }
  if ( *(_DWORD *)(v12 + 24) <= 4u
    || (v48 = *(_QWORD *)(OldUnityPersistentDataPath[23] + 128LL),
        *(_QWORD *)(v12 + 64) = v48,
        sub_1BCA784((PartyOrganizationUtility_o *)(v12 + 64), v48, v42, v43, v44, v45, v46, v47),
        *(_DWORD *)(v12 + 24) <= 5u) )
  {
LABEL_17:
    sub_1BCAA44(OldUnityPersistentDataPath, v14);
  }
  v55 = StringLiteral_1120/*"/"*/;
  *(_QWORD *)(v12 + 72) = StringLiteral_1120/*"/"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v12 + 72), v55, v49, v50, v51, v52, v53, v54);
  return System_String__Concat_62414748((System_String_array *)v12, 0LL);
}


System_String_o *__fastcall AssetStorageCache__GetPath(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  System_String_o *DatFileSavePath; // x19
  System_String_o *FolderName; // x2

  if ( (byte_4B152DE & 1) == 0 )
  {
    sub_1BCA7E0(&AndroidUtil_TypeInfo, v1, v2);
    sub_1BCA7E0(&CacheFolderName_TypeInfo, v3, v4);
    sub_1BCA7E0(&StringLiteral_1120/*"/"*/, v5, v6);
    byte_4B152DE = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo, v1);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( !CacheFolderName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CacheFolderName_TypeInfo, v7);
  FolderName = CacheFolderName__getFolderName(0, 0LL);
  return System_String__Concat_62414484(
           DatFileSavePath,
           (System_String_o *)StringLiteral_1120/*"/"*/,
           FolderName,
           (System_String_o *)StringLiteral_1120/*"/"*/,
           0LL);
}