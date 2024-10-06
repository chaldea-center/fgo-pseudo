void __fastcall AssetStorageCache___ctor(AssetStorageCache_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall AssetStorageCache__ClearCache(bool isStandalone, const MethodInfo *method)
{
  AssetManager_c *v3; // x0
  System_String_o *CacheListFile; // x20
  AssetManager_c *v5; // x0

  if ( (byte_4A6EF7D & 1) == 0 )
  {
    sub_1B90010(&AssetManager_TypeInfo, method);
    byte_4A6EF7D = 1;
  }
  v3 = AssetManager_TypeInfo;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  CacheListFile = AssetManager__get_CacheListFile((const MethodInfo *)v3);
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
  v5 = AssetManager_TypeInfo;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__DeleteContinueData((const MethodInfo *)v5);
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
  AssetManager_c *v5; // x0

  if ( (byte_4A6EF7C & 1) == 0 )
  {
    sub_1B90010(&AssetManager_TypeInfo, isStandalone);
    byte_4A6EF7C = 1;
  }
  if ( System_IO_Directory__Exists(cachePath, 0LL) )
    System_IO_Directory__Delete(cachePath, 1, 0LL);
  if ( isStandalone )
  {
    v5 = AssetManager_TypeInfo;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__DeleteContinueData((const MethodInfo *)v5);
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
  int32_t v9; // w2
  int32_t v10; // w3
  int32_t v11; // w2
  int32_t v12; // w3
  int32_t v13; // w1
  int32_t v14; // w2
  int32_t v15; // w3
  int32_t v16; // w2
  int32_t v17; // w3
  int32_t v18; // w1
  int32_t v19; // w2
  int32_t v20; // w3
  __int64 v21; // x1
  int32_t v22; // w2
  int32_t v23; // w3
  int32_t v24; // w1

  if ( (byte_4A6EF7B & 1) == 0 )
  {
    sub_1B90010(&AndroidUtil_TypeInfo, v1);
    sub_1B90010(&CacheFolderName_TypeInfo, v2);
    sub_1B90010(&ManagerConfig_TypeInfo, v3);
    sub_1B90010(&string___TypeInfo, v4);
    sub_1B90010(&StringLiteral_1123/*"/"*/, v5);
    byte_4A6EF7B = 1;
  }
  v6 = sub_1B900B8(string___TypeInfo, 6LL);
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  OldUnityPersistentDataPath = AndroidUtil__GetOldUnityPersistentDataPath(0LL);
  if ( !v6 )
    sub_1B9026C(OldUnityPersistentDataPath, v8);
  if ( !*(_DWORD *)(v6 + 24) )
    goto LABEL_17;
  *(_QWORD *)(v6 + 32) = OldUnityPersistentDataPath;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v6 + 32), (int32_t)OldUnityPersistentDataPath, v9, v10);
  if ( *(_DWORD *)(v6 + 24) <= 1u )
    goto LABEL_17;
  v13 = StringLiteral_1123/*"/"*/;
  *(_QWORD *)(v6 + 40) = StringLiteral_1123/*"/"*/;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v6 + 40), v13, v11, v12);
  if ( !CacheFolderName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CacheFolderName_TypeInfo);
  OldUnityPersistentDataPath = CacheFolderName__getFolderNameNotConverted(0, 0LL);
  if ( *(_DWORD *)(v6 + 24) <= 2u )
    goto LABEL_17;
  *(_QWORD *)(v6 + 48) = OldUnityPersistentDataPath;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v6 + 48), (int32_t)OldUnityPersistentDataPath, v14, v15);
  if ( *(_DWORD *)(v6 + 24) <= 3u )
    goto LABEL_17;
  v18 = StringLiteral_1123/*"/"*/;
  *(_QWORD *)(v6 + 56) = StringLiteral_1123/*"/"*/;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v6 + 56), v18, v16, v17);
  OldUnityPersistentDataPath = &ManagerConfig_TypeInfo->_1.image;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    OldUnityPersistentDataPath = &ManagerConfig_TypeInfo->_1.image;
  }
  if ( *(_DWORD *)(v6 + 24) <= 4u
    || (v21 = *(_QWORD *)(OldUnityPersistentDataPath[23] + 128LL),
        *(_QWORD *)(v6 + 64) = v21,
        sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v6 + 64), v21, v19, v20),
        *(_DWORD *)(v6 + 24) <= 5u) )
  {
LABEL_17:
    sub_1B90274(OldUnityPersistentDataPath, v8);
  }
  v24 = StringLiteral_1123/*"/"*/;
  *(_QWORD *)(v6 + 72) = StringLiteral_1123/*"/"*/;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v6 + 72), v24, v22, v23);
  return System_String__Concat_61800620((System_String_array *)v6, 0LL);
}


System_String_o *__fastcall AssetStorageCache__GetPath(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  System_String_o *DatFileSavePath; // x19
  System_String_o *FolderName; // x2

  if ( (byte_4A6EF7A & 1) == 0 )
  {
    sub_1B90010(&AndroidUtil_TypeInfo, v1);
    sub_1B90010(&CacheFolderName_TypeInfo, v2);
    sub_1B90010(&StringLiteral_1123/*"/"*/, v3);
    byte_4A6EF7A = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( !CacheFolderName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CacheFolderName_TypeInfo);
  FolderName = CacheFolderName__getFolderName(0, 0LL);
  return System_String__Concat_61800356(
           DatFileSavePath,
           (System_String_o *)StringLiteral_1123/*"/"*/,
           FolderName,
           (System_String_o *)StringLiteral_1123/*"/"*/,
           0LL);
}