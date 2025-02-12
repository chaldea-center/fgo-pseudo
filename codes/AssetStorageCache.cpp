void __fastcall AssetStorageCache___ctor(AssetStorageCache_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall AssetStorageCache__ClearCache(bool isStandalone, const MethodInfo *method)
{
  System_String_o *CacheListFile; // x20

  if ( (byte_4BC6B81 & 1) == 0 )
  {
    sub_1C1ABD4(&AssetManager_TypeInfo, method);
    byte_4BC6B81 = 1;
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


// local variable allocation has failed, the output may be wrong!
// positive sp value has been detected, the output may be wrong!
void __fastcall AssetStorageCache__ClearCacheAllCommonProc(
        System_String_o *cachePath,
        bool isStandalone,
        const MethodInfo *method)
{
  if ( (byte_4BC6B80 & 1) == 0 )
  {
    sub_1C1ABD4(&AssetManager_TypeInfo, isStandalone);
    byte_4BC6B80 = 1;
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
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x19
  _QWORD *OldUnityPersistentDataPath; // x0
  __int64 v8; // x1
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
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

  if ( (byte_4BC6B7F & 1) == 0 )
  {
    sub_1C1ABD4(&AndroidUtil_TypeInfo, v1);
    sub_1C1ABD4(&CacheFolderName_TypeInfo, v2);
    sub_1C1ABD4(&ManagerConfig_TypeInfo, v3);
    sub_1C1ABD4(&string___TypeInfo, v4);
    sub_1C1ABD4(&StringLiteral_1123/*"/"*/, v5);
    byte_4BC6B7F = 1;
  }
  v6 = sub_1C1AC7C(string___TypeInfo, 6LL);
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  OldUnityPersistentDataPath = AndroidUtil__GetOldUnityPersistentDataPath(0LL);
  if ( !v6 )
    sub_1C1AE30(OldUnityPersistentDataPath, v8);
  if ( !*(_DWORD *)(v6 + 24) )
    goto LABEL_17;
  *(_QWORD *)(v6 + 32) = OldUnityPersistentDataPath;
  sub_1C1AB78((PartyOrganizationUtility_o *)(v6 + 32), (int64_t)OldUnityPersistentDataPath, v9, v10, v11, v12, v13, v14);
  if ( *(_DWORD *)(v6 + 24) <= 1u )
    goto LABEL_17;
  v21 = StringLiteral_1123/*"/"*/;
  *(_QWORD *)(v6 + 40) = StringLiteral_1123/*"/"*/;
  sub_1C1AB78((PartyOrganizationUtility_o *)(v6 + 40), v21, v15, v16, v17, v18, v19, v20);
  if ( !CacheFolderName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CacheFolderName_TypeInfo);
  OldUnityPersistentDataPath = CacheFolderName__getFolderNameNotConverted(0, 0LL);
  if ( *(_DWORD *)(v6 + 24) <= 2u )
    goto LABEL_17;
  *(_QWORD *)(v6 + 48) = OldUnityPersistentDataPath;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)(v6 + 48),
    (int64_t)OldUnityPersistentDataPath,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  if ( *(_DWORD *)(v6 + 24) <= 3u )
    goto LABEL_17;
  v34 = StringLiteral_1123/*"/"*/;
  *(_QWORD *)(v6 + 56) = StringLiteral_1123/*"/"*/;
  sub_1C1AB78((PartyOrganizationUtility_o *)(v6 + 56), v34, v28, v29, v30, v31, v32, v33);
  OldUnityPersistentDataPath = &ManagerConfig_TypeInfo->_1.image;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    OldUnityPersistentDataPath = &ManagerConfig_TypeInfo->_1.image;
  }
  if ( *(_DWORD *)(v6 + 24) <= 4u
    || (v41 = *(_QWORD *)(OldUnityPersistentDataPath[23] + 128LL),
        *(_QWORD *)(v6 + 64) = v41,
        sub_1C1AB78((PartyOrganizationUtility_o *)(v6 + 64), v41, v35, v36, v37, v38, v39, v40),
        *(_DWORD *)(v6 + 24) <= 5u) )
  {
LABEL_17:
    sub_1C1AE38(OldUnityPersistentDataPath, v8);
  }
  v48 = StringLiteral_1123/*"/"*/;
  *(_QWORD *)(v6 + 72) = StringLiteral_1123/*"/"*/;
  sub_1C1AB78((PartyOrganizationUtility_o *)(v6 + 72), v48, v42, v43, v44, v45, v46, v47);
  return System_String__Concat_63053896((System_String_array *)v6, 0LL);
}


System_String_o *__fastcall AssetStorageCache__GetPath(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  System_String_o *DatFileSavePath; // x19
  System_String_o *FolderName; // x2

  if ( (byte_4BC6B7E & 1) == 0 )
  {
    sub_1C1ABD4(&AndroidUtil_TypeInfo, v1);
    sub_1C1ABD4(&CacheFolderName_TypeInfo, v2);
    sub_1C1ABD4(&StringLiteral_1123/*"/"*/, v3);
    byte_4BC6B7E = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( !CacheFolderName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CacheFolderName_TypeInfo);
  FolderName = CacheFolderName__getFolderName(0, 0LL);
  return System_String__Concat_63053632(
           DatFileSavePath,
           (System_String_o *)StringLiteral_1123/*"/"*/,
           FolderName,
           (System_String_o *)StringLiteral_1123/*"/"*/,
           0LL);
}