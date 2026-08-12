void AssetStorageCache___ctor(AssetStorageCache_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void AssetStorageCache__ClearCache(bool isStandalone, const MethodInfo *method)
{
  __int64 v2; // x2
  AssetManager_c *v4; // x0
  System_String_o *CacheListFile; // x20
  __int64 v6; // x1
  __int64 v7; // x2
  AssetManager_c *v8; // x0

  if ( (byte_596F7C0 & 1) == 0 )
  {
    sub_2213A60(&AssetManager_TypeInfo);
    byte_596F7C0 = 1;
  }
  v4 = AssetManager_TypeInfo;
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, method, v2);
  CacheListFile = AssetManager__get_CacheListFile((const MethodInfo *)v4);
  if ( System_IO_File__Exists(CacheListFile, 0) )
    System_IO_File__Delete(CacheListFile, 0);
  if ( isStandalone )
  {
    v8 = AssetManager_TypeInfo;
    if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v6, v7);
    AssetManager__DeleteContinueData((const MethodInfo *)v8);
    UnityEngine_PlayerPrefs__Save(0);
  }
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
  __int64 v5; // x1
  __int64 v6; // x2
  AssetManager_c *v7; // x0

  if ( (byte_596F7BF & 1) == 0 )
  {
    sub_2213A60(&AssetManager_TypeInfo);
    byte_596F7BF = 1;
  }
  if ( System_IO_Directory__Exists(cachePath, 0) )
    System_IO_Directory__Delete(cachePath, 1, 0);
  if ( isStandalone )
  {
    v7 = AssetManager_TypeInfo;
    if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v5, v6);
    AssetManager__DeleteContinueData((const MethodInfo *)v7);
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
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x19
  void *OldUnityPersistentDataPath; // x0
  __int64 v5; // x1
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  int32_t v18; // w1
  __int64 v19; // x1
  __int64 v20; // x2
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  int32_t v33; // w1
  __int64 v34; // x1
  System_String_o *v35; // x2
  System_String_o *v36; // x3
  int32_t v37; // w4
  int32_t v38; // w5
  bool v39; // w6
  bool v40; // w7
  struct System_String_o *PlatformName; // x1
  System_String_o *v42; // x2
  System_String_o *v43; // x3
  int32_t v44; // w4
  int32_t v45; // w5
  bool v46; // w6
  bool v47; // w7
  int32_t v48; // w1

  if ( (byte_596F7BE & 1) == 0 )
  {
    sub_2213A60(&AndroidUtil_TypeInfo);
    sub_2213A60(&CacheFolderName_TypeInfo);
    sub_2213A60(&ManagerConfig_TypeInfo);
    sub_2213A60(&string___TypeInfo);
    sub_2213A60(&StringLiteral_1123/*"/"*/);
    byte_596F7BE = 1;
  }
  v3 = sub_2213B20(string___TypeInfo, 6);
  if ( !*(&AndroidUtil_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo, v1, v2);
  OldUnityPersistentDataPath = AndroidUtil__GetOldUnityPersistentDataPath(0);
  if ( !v3 )
    sub_2213CDC(OldUnityPersistentDataPath, v5);
  if ( !*(_DWORD *)(v3 + 24) )
    goto LABEL_17;
  *(_QWORD *)(v3 + 32) = OldUnityPersistentDataPath;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)(v3 + 32),
    (int32_t)OldUnityPersistentDataPath,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  if ( (*(_DWORD *)(v3 + 24) & 0xFFFFFFFE) == 0 )
    goto LABEL_17;
  v18 = StringLiteral_1123/*"/"*/;
  *(_QWORD *)(v3 + 40) = StringLiteral_1123/*"/"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 40), v18, v12, v13, v14, v15, v16, v17);
  if ( !*(&CacheFolderName_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CacheFolderName_TypeInfo, v19, v20);
  OldUnityPersistentDataPath = CacheFolderName__getFolderNameNotConverted(0, 0);
  if ( *(_DWORD *)(v3 + 24) <= 2u )
    goto LABEL_17;
  *(_QWORD *)(v3 + 48) = OldUnityPersistentDataPath;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)(v3 + 48),
    (int32_t)OldUnityPersistentDataPath,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  if ( (*(_DWORD *)(v3 + 24) & 0xFFFFFFFC) == 0 )
    goto LABEL_17;
  v33 = StringLiteral_1123/*"/"*/;
  *(_QWORD *)(v3 + 56) = StringLiteral_1123/*"/"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 56), v33, v27, v28, v29, v30, v31, v32);
  OldUnityPersistentDataPath = ManagerConfig_TypeInfo;
  if ( !*(&ManagerConfig_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, v34, v35);
  if ( *(_DWORD *)(v3 + 24) <= 4u
    || (PlatformName = ManagerConfig_TypeInfo->static_fields->PlatformName,
        *(_QWORD *)(v3 + 64) = PlatformName,
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 64), (int32_t)PlatformName, v35, v36, v37, v38, v39, v40),
        *(_DWORD *)(v3 + 24) <= 5u) )
  {
LABEL_17:
    sub_2213CE4(OldUnityPersistentDataPath);
  }
  v48 = StringLiteral_1123/*"/"*/;
  *(_QWORD *)(v3 + 72) = StringLiteral_1123/*"/"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 72), v48, v42, v43, v44, v45, v46, v47);
  return System_String__Concat_75697120((System_String_array *)v3, 0);
}


System_String_o *AssetStorageCache__GetPath(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  System_String_o *DatFileSavePath; // x19
  System_String_o *FolderName; // x2

  if ( (byte_596F7BD & 1) == 0 )
  {
    sub_2213A60(&AndroidUtil_TypeInfo);
    sub_2213A60(&CacheFolderName_TypeInfo);
    sub_2213A60(&StringLiteral_1123/*"/"*/);
    byte_596F7BD = 1;
  }
  if ( !*(&AndroidUtil_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo, v1, v2);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0);
  if ( !*(&CacheFolderName_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CacheFolderName_TypeInfo, v3, v4);
  FolderName = CacheFolderName__getFolderName(0, 0);
  return System_String__Concat_75696856(
           DatFileSavePath,
           (System_String_o *)StringLiteral_1123/*"/"*/,
           FolderName,
           (System_String_o *)StringLiteral_1123/*"/"*/,
           0);
}