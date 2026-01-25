void AssetStorageCache___ctor(AssetStorageCache_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void AssetStorageCache__ClearCache(bool isStandalone, const MethodInfo *method)
{
  AssetManager_c *v3; // x0
  System_String_o *CacheListFile; // x20
  AssetManager_c *v5; // x0

  if ( (byte_4CED69E & 1) == 0 )
  {
    sub_1C7BAE8(&AssetManager_TypeInfo);
    byte_4CED69E = 1;
  }
  v3 = AssetManager_TypeInfo;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  CacheListFile = AssetManager__get_CacheListFile((const MethodInfo *)v3);
  if ( System_IO_File__Exists(CacheListFile, 0) )
  {
    System_IO_File__Delete(CacheListFile, 0);
    if ( !isStandalone )
      return;
  }
  else if ( !isStandalone )
  {
    return;
  }
  v5 = AssetManager_TypeInfo;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__DeleteContinueData((const MethodInfo *)v5);
  UnityEngine_PlayerPrefs__Save(0);
}


// local variable allocation has failed, the output may be wrong!
void AssetStorageCache__ClearCacheAll(bool isStandalone, const MethodInfo *method)
{
  System_String_o *Path; // x0
  const MethodInfo *v4; // x2

  Path = AssetStorageCache__GetPath((const MethodInfo *)isStandalone);
  AssetStorageCache__ClearCacheAllCommonProc(Path, isStandalone, v4);
}


// positive sp value has been detected, the output may be wrong!
void AssetStorageCache__ClearCacheAllCommonProc(
        System_String_o *cachePath,
        bool isStandalone,
        const MethodInfo *method)
{
  AssetManager_c *v5; // x0

  if ( (byte_4CED69D & 1) == 0 )
  {
    sub_1C7BAE8(&AssetManager_TypeInfo);
    byte_4CED69D = 1;
  }
  if ( System_IO_Directory__Exists(cachePath, 0) )
    System_IO_Directory__Delete(cachePath, 1, 0);
  if ( isStandalone )
  {
    v5 = AssetManager_TypeInfo;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__DeleteContinueData((const MethodInfo *)v5);
    UnityEngine_PlayerPrefs__Save(0);
  }
}


void AssetStorageCache__ClearCacheAllWithoutSystemAssets(const MethodInfo *method)
{
  ;
}


void AssetStorageCache__ClearOldEnvCacheAll(const MethodInfo *method)
{
  System_String_o *OldEnvPath; // x0
  const MethodInfo *v2; // x2

  OldEnvPath = AssetStorageCache__GetOldEnvPath(method);
  AssetStorageCache__ClearCacheAllCommonProc(OldEnvPath, 1, v2);
}


System_String_o *AssetStorageCache__GetOldEnvPath(const MethodInfo *method)
{
  __int64 v1; // x19
  _QWORD *OldUnityPersistentDataPath; // x0
  __int64 v3; // x1
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  int32_t v16; // w1
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  int32_t v29; // w1
  int32_t v30; // w2
  int32_t v31; // w3
  System_String_o *v32; // x4
  int32_t v33; // w5
  int64_t v34; // x6
  System_String_o *v35; // x7
  __int64 v36; // x1
  int32_t v37; // w2
  int32_t v38; // w3
  System_String_o *v39; // x4
  int32_t v40; // w5
  int64_t v41; // x6
  System_String_o *v42; // x7
  int32_t v43; // w1

  if ( (byte_4CED69C & 1) == 0 )
  {
    sub_1C7BAE8(&AndroidUtil_TypeInfo);
    sub_1C7BAE8(&CacheFolderName_TypeInfo);
    sub_1C7BAE8(&ManagerConfig_TypeInfo);
    sub_1C7BAE8(&string___TypeInfo);
    sub_1C7BAE8(&StringLiteral_1042/*"/"*/);
    byte_4CED69C = 1;
  }
  v1 = sub_1C7BB90(string___TypeInfo, 6);
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  OldUnityPersistentDataPath = AndroidUtil__GetOldUnityPersistentDataPath(0);
  if ( !v1 )
    sub_1C7BD40(OldUnityPersistentDataPath, v3);
  if ( !*(_DWORD *)(v1 + 24) )
    goto LABEL_17;
  *(_QWORD *)(v1 + 32) = OldUnityPersistentDataPath;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v1 + 32), (int32_t)OldUnityPersistentDataPath, v4, v5, v6, v7, v8, v9);
  if ( *(_DWORD *)(v1 + 24) <= 1u )
    goto LABEL_17;
  v16 = StringLiteral_1042/*"/"*/;
  *(_QWORD *)(v1 + 40) = StringLiteral_1042/*"/"*/;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v1 + 40), v16, v10, v11, v12, v13, v14, v15);
  if ( !CacheFolderName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CacheFolderName_TypeInfo);
  OldUnityPersistentDataPath = CacheFolderName__getFolderNameNotConverted(0, 0);
  if ( *(_DWORD *)(v1 + 24) <= 2u )
    goto LABEL_17;
  *(_QWORD *)(v1 + 48) = OldUnityPersistentDataPath;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)(v1 + 48),
    (int32_t)OldUnityPersistentDataPath,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  if ( *(_DWORD *)(v1 + 24) <= 3u )
    goto LABEL_17;
  v29 = StringLiteral_1042/*"/"*/;
  *(_QWORD *)(v1 + 56) = StringLiteral_1042/*"/"*/;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v1 + 56), v29, v23, v24, v25, v26, v27, v28);
  OldUnityPersistentDataPath = &ManagerConfig_TypeInfo->_1.image;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    OldUnityPersistentDataPath = &ManagerConfig_TypeInfo->_1.image;
  }
  if ( *(_DWORD *)(v1 + 24) <= 4u
    || (v36 = *(_QWORD *)(OldUnityPersistentDataPath[23] + 128LL),
        *(_QWORD *)(v1 + 64) = v36,
        sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v1 + 64), v36, v30, v31, v32, v33, v34, v35),
        *(_DWORD *)(v1 + 24) <= 5u) )
  {
LABEL_17:
    sub_1C7BD48(OldUnityPersistentDataPath);
  }
  v43 = StringLiteral_1042/*"/"*/;
  *(_QWORD *)(v1 + 72) = StringLiteral_1042/*"/"*/;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v1 + 72), v43, v37, v38, v39, v40, v41, v42);
  return System_String__Concat_64217444((System_String_array *)v1, 0);
}


System_String_o *AssetStorageCache__GetPath(const MethodInfo *method)
{
  System_String_o *DatFileSavePath; // x19
  System_String_o *FolderName; // x2

  if ( (byte_4CED69B & 1) == 0 )
  {
    sub_1C7BAE8(&AndroidUtil_TypeInfo);
    sub_1C7BAE8(&CacheFolderName_TypeInfo);
    sub_1C7BAE8(&StringLiteral_1042/*"/"*/);
    byte_4CED69B = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0);
  if ( !CacheFolderName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CacheFolderName_TypeInfo);
  FolderName = CacheFolderName__getFolderName(0, 0);
  return System_String__Concat_64217180(
           DatFileSavePath,
           (System_String_o *)StringLiteral_1042/*"/"*/,
           FolderName,
           (System_String_o *)StringLiteral_1042/*"/"*/,
           0);
}