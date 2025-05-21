void __fastcall AssetStorageCache___ctor(AssetStorageCache_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall AssetStorageCache__ClearCache(bool isStandalone, const MethodInfo *method)
{
  System_String_o *CacheListFile; // x20

  if ( (byte_4B43AE6 & 1) == 0 )
  {
    sub_1BDB878(&AssetManager_TypeInfo, method);
    byte_4B43AE6 = 1;
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
  if ( (byte_4B43AE5 & 1) == 0 )
  {
    sub_1BDB878(&AssetManager_TypeInfo, isStandalone);
    byte_4B43AE5 = 1;
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
  __int64 v9; // x2
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x3
  int32_t v12; // w1
  const MethodInfo *v13; // x3
  const MethodInfo *v14; // x3
  int32_t v15; // w1
  const MethodInfo *v16; // x3
  __int64 v17; // x1
  const MethodInfo *v18; // x3
  int32_t v19; // w1

  if ( (byte_4B43AE4 & 1) == 0 )
  {
    sub_1BDB878(&AndroidUtil_TypeInfo, v1);
    sub_1BDB878(&CacheFolderName_TypeInfo, v2);
    sub_1BDB878(&ManagerConfig_TypeInfo, v3);
    sub_1BDB878(&string___TypeInfo, v4);
    sub_1BDB878(&StringLiteral_1061/*"/"*/, v5);
    byte_4B43AE4 = 1;
  }
  v6 = sub_1BDB920(string___TypeInfo, 6LL);
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  OldUnityPersistentDataPath = AndroidUtil__GetOldUnityPersistentDataPath(0LL);
  if ( !v6 )
    sub_1BDBAD4(OldUnityPersistentDataPath, v8);
  if ( !*(_DWORD *)(v6 + 24) )
    goto LABEL_17;
  *(_QWORD *)(v6 + 32) = OldUnityPersistentDataPath;
  sub_1BDB81C((CGThumbnailListItem_o *)(v6 + 32), (int32_t)OldUnityPersistentDataPath, v9, v10);
  if ( *(_DWORD *)(v6 + 24) <= 1u )
    goto LABEL_17;
  v12 = StringLiteral_1061/*"/"*/;
  *(_QWORD *)(v6 + 40) = StringLiteral_1061/*"/"*/;
  sub_1BDB81C((CGThumbnailListItem_o *)(v6 + 40), v12, v9, v11);
  if ( !CacheFolderName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CacheFolderName_TypeInfo);
  OldUnityPersistentDataPath = CacheFolderName__getFolderNameNotConverted(0, 0LL);
  if ( *(_DWORD *)(v6 + 24) <= 2u )
    goto LABEL_17;
  *(_QWORD *)(v6 + 48) = OldUnityPersistentDataPath;
  sub_1BDB81C((CGThumbnailListItem_o *)(v6 + 48), (int32_t)OldUnityPersistentDataPath, v9, v13);
  if ( *(_DWORD *)(v6 + 24) <= 3u )
    goto LABEL_17;
  v15 = StringLiteral_1061/*"/"*/;
  *(_QWORD *)(v6 + 56) = StringLiteral_1061/*"/"*/;
  sub_1BDB81C((CGThumbnailListItem_o *)(v6 + 56), v15, v9, v14);
  OldUnityPersistentDataPath = &ManagerConfig_TypeInfo->_1.image;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    OldUnityPersistentDataPath = &ManagerConfig_TypeInfo->_1.image;
  }
  if ( *(_DWORD *)(v6 + 24) <= 4u
    || (v17 = *(_QWORD *)(OldUnityPersistentDataPath[23] + 128LL),
        *(_QWORD *)(v6 + 64) = v17,
        sub_1BDB81C((CGThumbnailListItem_o *)(v6 + 64), v17, v9, v16),
        *(_DWORD *)(v6 + 24) <= 5u) )
  {
LABEL_17:
    sub_1BDBADC(OldUnityPersistentDataPath, v8, v9);
  }
  v19 = StringLiteral_1061/*"/"*/;
  *(_QWORD *)(v6 + 72) = StringLiteral_1061/*"/"*/;
  sub_1BDB81C((CGThumbnailListItem_o *)(v6 + 72), v19, v9, v18);
  return System_String__Concat_62612776((System_String_array *)v6, 0LL);
}


System_String_o *__fastcall AssetStorageCache__GetPath(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  System_String_o *DatFileSavePath; // x19
  System_String_o *FolderName; // x2

  if ( (byte_4B43AE3 & 1) == 0 )
  {
    sub_1BDB878(&AndroidUtil_TypeInfo, v1);
    sub_1BDB878(&CacheFolderName_TypeInfo, v2);
    sub_1BDB878(&StringLiteral_1061/*"/"*/, v3);
    byte_4B43AE3 = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( !CacheFolderName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CacheFolderName_TypeInfo);
  FolderName = CacheFolderName__getFolderName(0, 0LL);
  return System_String__Concat_62612512(
           DatFileSavePath,
           (System_String_o *)StringLiteral_1061/*"/"*/,
           FolderName,
           (System_String_o *)StringLiteral_1061/*"/"*/,
           0LL);
}