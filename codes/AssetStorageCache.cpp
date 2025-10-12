void AssetStorageCache___ctor(AssetStorageCache_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void AssetStorageCache__ClearCache(bool isStandalone, const MethodInfo *method)
{
  AssetManager_c *v3; // x0
  System_String_o *CacheListFile; // x20
  AssetManager_c *v5; // x0

  if ( (byte_4C369D6 & 1) == 0 )
  {
    sub_1C32C20(&AssetManager_TypeInfo);
    byte_4C369D6 = 1;
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

  if ( (byte_4C369D5 & 1) == 0 )
  {
    sub_1C32C20(&AssetManager_TypeInfo);
    byte_4C369D5 = 1;
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
  int32_t v3; // w2
  const MethodInfo *v4; // x3
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  int32_t v7; // w1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  int32_t v12; // w1
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  __int64 v15; // x1
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  int32_t v18; // w1

  if ( (byte_4C369D4 & 1) == 0 )
  {
    sub_1C32C20(&AndroidUtil_TypeInfo);
    sub_1C32C20(&CacheFolderName_TypeInfo);
    sub_1C32C20(&ManagerConfig_TypeInfo);
    sub_1C32C20(&string___TypeInfo);
    sub_1C32C20(&StringLiteral_1048/*"/"*/);
    byte_4C369D4 = 1;
  }
  v1 = sub_1C32CC8(string___TypeInfo, 6);
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  OldUnityPersistentDataPath = AndroidUtil__GetOldUnityPersistentDataPath(0);
  if ( !v1 )
    sub_1C32E7C(OldUnityPersistentDataPath);
  if ( !*(_DWORD *)(v1 + 24) )
    goto LABEL_17;
  *(_QWORD *)(v1 + 32) = OldUnityPersistentDataPath;
  sub_1C32BC4((CGThumbnailListItem_o *)(v1 + 32), (int32_t)OldUnityPersistentDataPath, v3, v4);
  if ( *(_DWORD *)(v1 + 24) <= 1u )
    goto LABEL_17;
  v7 = StringLiteral_1048/*"/"*/;
  *(_QWORD *)(v1 + 40) = StringLiteral_1048/*"/"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)(v1 + 40), v7, v5, v6);
  if ( !CacheFolderName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CacheFolderName_TypeInfo);
  OldUnityPersistentDataPath = CacheFolderName__getFolderNameNotConverted(0, 0);
  if ( *(_DWORD *)(v1 + 24) <= 2u )
    goto LABEL_17;
  *(_QWORD *)(v1 + 48) = OldUnityPersistentDataPath;
  sub_1C32BC4((CGThumbnailListItem_o *)(v1 + 48), (int32_t)OldUnityPersistentDataPath, v8, v9);
  if ( *(_DWORD *)(v1 + 24) <= 3u )
    goto LABEL_17;
  v12 = StringLiteral_1048/*"/"*/;
  *(_QWORD *)(v1 + 56) = StringLiteral_1048/*"/"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)(v1 + 56), v12, v10, v11);
  OldUnityPersistentDataPath = &ManagerConfig_TypeInfo->_1.image;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    OldUnityPersistentDataPath = &ManagerConfig_TypeInfo->_1.image;
  }
  if ( *(_DWORD *)(v1 + 24) <= 4u
    || (v15 = *(_QWORD *)(OldUnityPersistentDataPath[23] + 128LL),
        *(_QWORD *)(v1 + 64) = v15,
        sub_1C32BC4((CGThumbnailListItem_o *)(v1 + 64), v15, v13, v14),
        *(_DWORD *)(v1 + 24) <= 5u) )
  {
LABEL_17:
    sub_1C32E84(OldUnityPersistentDataPath);
  }
  v18 = StringLiteral_1048/*"/"*/;
  *(_QWORD *)(v1 + 72) = StringLiteral_1048/*"/"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)(v1 + 72), v18, v16, v17);
  return System_String__Concat_63559060((System_String_array *)v1, 0);
}


System_String_o *AssetStorageCache__GetPath(const MethodInfo *method)
{
  System_String_o *DatFileSavePath; // x19
  System_String_o *FolderName; // x2

  if ( (byte_4C369D3 & 1) == 0 )
  {
    sub_1C32C20(&AndroidUtil_TypeInfo);
    sub_1C32C20(&CacheFolderName_TypeInfo);
    sub_1C32C20(&StringLiteral_1048/*"/"*/);
    byte_4C369D3 = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0);
  if ( !CacheFolderName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CacheFolderName_TypeInfo);
  FolderName = CacheFolderName__getFolderName(0, 0);
  return System_String__Concat_63558796(
           DatFileSavePath,
           (System_String_o *)StringLiteral_1048/*"/"*/,
           FolderName,
           (System_String_o *)StringLiteral_1048/*"/"*/,
           0);
}