void __fastcall AssetStorageCache___ctor(AssetStorageCache_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall AssetStorageCache__ClearCache(bool isStandalone, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  System_String_o *CacheListFile; // x20

  if ( (byte_42EBC52 & 1) == 0 )
  {
    sub_B5D5C4(&AssetManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EBC52 = 1;
  }
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  CacheListFile = AssetManager__get_CacheListFile(0LL);
  if ( System_IO_File__Exists(CacheListFile, 0LL) )
    System_IO_File__Delete(CacheListFile, 0LL);
  if ( isStandalone )
  {
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__DeleteContinueData(0LL);
    UnityEngine_PlayerPrefs__Save(0LL);
  }
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
  __int64 v3; // x3

  if ( (byte_42EBC51 & 1) == 0 )
  {
    sub_B5D5C4(&AssetManager_TypeInfo, isStandalone, (_DWORD)method, v3);
    byte_42EBC51 = 1;
  }
  if ( System_IO_Directory__Exists(cachePath, 0LL) )
    System_IO_Directory__Delete_44512988(cachePath, 1, 0LL);
  if ( isStandalone )
  {
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
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
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  System_String_array *v16; // x19
  System_Int32_array **OldUnityPersistentDataPath; // x0
  __int64 v18; // x1
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_Int32_array **v25; // x20
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  System_Int32_array **v32; // x1
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  System_Int32_array **v39; // x20
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  System_Int32_array **v46; // x1
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  System_Int32_array **v53; // x20
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  System_Int32_array **v60; // x1
  __int64 v62; // x0
  __int64 v63; // x0

  if ( (byte_42EBC50 & 1) == 0 )
  {
    sub_B5D5C4(&AndroidUtil_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&CacheFolderName_TypeInfo, v4, v5, v6);
    sub_B5D5C4(&ManagerConfig_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&string___TypeInfo, v10, v11, v12);
    sub_B5D5C4(&StringLiteral_885/*"/"*/, v13, v14, v15);
    byte_42EBC50 = 1;
  }
  v16 = (System_String_array *)sub_B5D5DC(string___TypeInfo, 6LL);
  if ( (BYTE3(AndroidUtil_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  OldUnityPersistentDataPath = (System_Int32_array **)AndroidUtil__GetOldUnityPersistentDataPath(0LL);
  if ( !v16 )
    sub_B5D69C(OldUnityPersistentDataPath, v18);
  v25 = OldUnityPersistentDataPath;
  if ( OldUnityPersistentDataPath )
  {
    OldUnityPersistentDataPath = (System_Int32_array **)sub_B5D684(
                                                          OldUnityPersistentDataPath,
                                                          v16->obj.klass->_1.element_class);
    if ( !OldUnityPersistentDataPath )
      goto LABEL_39;
  }
  if ( !v16->max_length )
    goto LABEL_38;
  v16->m_Items[0] = (System_String_o *)v25;
  sub_B5D560((BattleServantConfConponent_o *)v16->m_Items, v25, v19, v20, v21, v22, v23, v24);
  OldUnityPersistentDataPath = (System_Int32_array **)StringLiteral_885/*"/"*/;
  if ( StringLiteral_885/*"/"*/ )
  {
    OldUnityPersistentDataPath = (System_Int32_array **)sub_B5D684(StringLiteral_885/*"/"*/, v16->obj.klass->_1.element_class);
    if ( !OldUnityPersistentDataPath )
      goto LABEL_39;
    v32 = (System_Int32_array **)StringLiteral_885/*"/"*/;
  }
  else
  {
    v32 = 0LL;
  }
  if ( v16->max_length <= 1 )
    goto LABEL_38;
  v16->m_Items[1] = (System_String_o *)v32;
  sub_B5D560((BattleServantConfConponent_o *)&v16->m_Items[1], v32, v26, v27, v28, v29, v30, v31);
  if ( (BYTE3(CacheFolderName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CacheFolderName_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CacheFolderName_TypeInfo);
  }
  OldUnityPersistentDataPath = (System_Int32_array **)CacheFolderName__getFolderNameNotConverted(0, 0LL);
  v39 = OldUnityPersistentDataPath;
  if ( OldUnityPersistentDataPath )
  {
    OldUnityPersistentDataPath = (System_Int32_array **)sub_B5D684(
                                                          OldUnityPersistentDataPath,
                                                          v16->obj.klass->_1.element_class);
    if ( !OldUnityPersistentDataPath )
      goto LABEL_39;
  }
  if ( v16->max_length <= 2 )
    goto LABEL_38;
  v16->m_Items[2] = (System_String_o *)v39;
  sub_B5D560((BattleServantConfConponent_o *)&v16->m_Items[2], v39, v33, v34, v35, v36, v37, v38);
  OldUnityPersistentDataPath = (System_Int32_array **)StringLiteral_885/*"/"*/;
  if ( StringLiteral_885/*"/"*/ )
  {
    OldUnityPersistentDataPath = (System_Int32_array **)sub_B5D684(StringLiteral_885/*"/"*/, v16->obj.klass->_1.element_class);
    if ( !OldUnityPersistentDataPath )
      goto LABEL_39;
    v46 = (System_Int32_array **)StringLiteral_885/*"/"*/;
  }
  else
  {
    v46 = 0LL;
  }
  if ( v16->max_length <= 3 )
    goto LABEL_38;
  v16->m_Items[3] = (System_String_o *)v46;
  sub_B5D560((BattleServantConfConponent_o *)&v16->m_Items[3], v46, v40, v41, v42, v43, v44, v45);
  OldUnityPersistentDataPath = (System_Int32_array **)ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    OldUnityPersistentDataPath = (System_Int32_array **)ManagerConfig_TypeInfo;
  }
  v53 = *(System_Int32_array ***)&OldUnityPersistentDataPath[23]->m_Items[25];
  if ( v53 )
  {
    OldUnityPersistentDataPath = (System_Int32_array **)sub_B5D684(v53, v16->obj.klass->_1.element_class);
    if ( !OldUnityPersistentDataPath )
    {
LABEL_39:
      v63 = sub_B5D6BC(OldUnityPersistentDataPath);
      sub_B5D668(v63, 0LL);
    }
  }
  if ( v16->max_length <= 4 )
    goto LABEL_38;
  v16->m_Items[4] = (System_String_o *)v53;
  sub_B5D560((BattleServantConfConponent_o *)&v16->m_Items[4], v53, v47, v48, v49, v50, v51, v52);
  OldUnityPersistentDataPath = (System_Int32_array **)StringLiteral_885/*"/"*/;
  if ( StringLiteral_885/*"/"*/ )
  {
    OldUnityPersistentDataPath = (System_Int32_array **)sub_B5D684(StringLiteral_885/*"/"*/, v16->obj.klass->_1.element_class);
    if ( OldUnityPersistentDataPath )
    {
      v60 = (System_Int32_array **)StringLiteral_885/*"/"*/;
      goto LABEL_36;
    }
    goto LABEL_39;
  }
  v60 = 0LL;
LABEL_36:
  if ( v16->max_length <= 5 )
  {
LABEL_38:
    v62 = sub_B5D6C8(OldUnityPersistentDataPath);
    sub_B5D668(v62, 0LL);
  }
  v16->m_Items[5] = (System_String_o *)v60;
  sub_B5D560((BattleServantConfConponent_o *)&v16->m_Items[5], v60, v54, v55, v56, v57, v58, v59);
  return System_String__Concat_44657912(v16, 0LL);
}


System_String_o *__fastcall AssetStorageCache__GetPath(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  System_String_o *DatFileSavePath; // x19
  System_String_o *FolderName; // x2

  if ( (byte_42EBC4F & 1) == 0 )
  {
    sub_B5D5C4(&AndroidUtil_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&CacheFolderName_TypeInfo, v4, v5, v6);
    sub_B5D5C4(&StringLiteral_885/*"/"*/, v7, v8, v9);
    byte_42EBC4F = 1;
  }
  if ( (BYTE3(AndroidUtil_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( (BYTE3(CacheFolderName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CacheFolderName_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CacheFolderName_TypeInfo);
  }
  FolderName = CacheFolderName__getFolderName(0, 0LL);
  return System_String__Concat_44581200(
           DatFileSavePath,
           (System_String_o *)StringLiteral_885/*"/"*/,
           FolderName,
           (System_String_o *)StringLiteral_885/*"/"*/,
           0LL);
}