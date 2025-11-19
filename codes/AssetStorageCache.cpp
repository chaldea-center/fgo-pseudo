void AssetStorageCache___ctor(AssetStorageCache_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void AssetStorageCache__ClearCache(bool isStandalone, const MethodInfo *method)
{
  AssetManager_c *v3; // x0
  System_String_o *CacheListFile; // x20
  AssetManager_c *v5; // x0

  if ( (byte_4CB52CD & 1) == 0 )
  {
    sub_1C6BA08(&AssetManager_TypeInfo);
    byte_4CB52CD = 1;
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

  if ( (byte_4CB52CC & 1) == 0 )
  {
    sub_1C6BA08(&AssetManager_TypeInfo);
    byte_4CB52CC = 1;
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
  const MethodInfo *v5; // x3
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  int32_t v8; // w1
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  int32_t v13; // w1
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  __int64 v16; // x1
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  int32_t v19; // w1

  if ( (byte_4CB52CB & 1) == 0 )
  {
    sub_1C6BA08(&AndroidUtil_TypeInfo);
    sub_1C6BA08(&CacheFolderName_TypeInfo);
    sub_1C6BA08(&ManagerConfig_TypeInfo);
    sub_1C6BA08(&string___TypeInfo);
    sub_1C6BA08(&StringLiteral_1041/*"/"*/);
    byte_4CB52CB = 1;
  }
  v1 = sub_1C6BAB0(string___TypeInfo, 6);
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  OldUnityPersistentDataPath = AndroidUtil__GetOldUnityPersistentDataPath(0);
  if ( !v1 )
    sub_1C6BC60(OldUnityPersistentDataPath, v3);
  if ( !*(_DWORD *)(v1 + 24) )
    goto LABEL_17;
  *(_QWORD *)(v1 + 32) = OldUnityPersistentDataPath;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v1 + 32), (int32_t)OldUnityPersistentDataPath, v4, v5);
  if ( *(_DWORD *)(v1 + 24) <= 1u )
    goto LABEL_17;
  v8 = StringLiteral_1041/*"/"*/;
  *(_QWORD *)(v1 + 40) = StringLiteral_1041/*"/"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v1 + 40), v8, v6, v7);
  if ( !CacheFolderName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CacheFolderName_TypeInfo);
  OldUnityPersistentDataPath = CacheFolderName__getFolderNameNotConverted(0, 0);
  if ( *(_DWORD *)(v1 + 24) <= 2u )
    goto LABEL_17;
  *(_QWORD *)(v1 + 48) = OldUnityPersistentDataPath;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v1 + 48), (int32_t)OldUnityPersistentDataPath, v9, v10);
  if ( *(_DWORD *)(v1 + 24) <= 3u )
    goto LABEL_17;
  v13 = StringLiteral_1041/*"/"*/;
  *(_QWORD *)(v1 + 56) = StringLiteral_1041/*"/"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v1 + 56), v13, v11, v12);
  OldUnityPersistentDataPath = &ManagerConfig_TypeInfo->_1.image;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    OldUnityPersistentDataPath = &ManagerConfig_TypeInfo->_1.image;
  }
  if ( *(_DWORD *)(v1 + 24) <= 4u
    || (v16 = *(_QWORD *)(OldUnityPersistentDataPath[23] + 128LL),
        *(_QWORD *)(v1 + 64) = v16,
        sub_1C6B9AC((CGThumbnailListItem_o *)(v1 + 64), v16, v14, v15),
        *(_DWORD *)(v1 + 24) <= 5u) )
  {
LABEL_17:
    sub_1C6BC68(OldUnityPersistentDataPath);
  }
  v19 = StringLiteral_1041/*"/"*/;
  *(_QWORD *)(v1 + 72) = StringLiteral_1041/*"/"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v1 + 72), v19, v17, v18);
  return System_String__Concat_64007324((System_String_array *)v1, 0);
}


System_String_o *AssetStorageCache__GetPath(const MethodInfo *method)
{
  System_String_o *DatFileSavePath; // x19
  System_String_o *FolderName; // x2

  if ( (byte_4CB52CA & 1) == 0 )
  {
    sub_1C6BA08(&AndroidUtil_TypeInfo);
    sub_1C6BA08(&CacheFolderName_TypeInfo);
    sub_1C6BA08(&StringLiteral_1041/*"/"*/);
    byte_4CB52CA = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0);
  if ( !CacheFolderName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CacheFolderName_TypeInfo);
  FolderName = CacheFolderName__getFolderName(0, 0);
  return System_String__Concat_64007060(
           DatFileSavePath,
           (System_String_o *)StringLiteral_1041/*"/"*/,
           FolderName,
           (System_String_o *)StringLiteral_1041/*"/"*/,
           0);
}