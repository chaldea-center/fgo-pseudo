void __fastcall AssetStorageCache___ctor(AssetStorageCache_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall AssetStorageCache__ClearCache(bool isStandalone, const MethodInfo *method)
{
  AssetManager_c *v3; // x0
  System_String_o *CacheListFile; // x20
  AssetManager_c *v5; // x0

  if ( (byte_438AA38 & 1) == 0 )
  {
    sub_B775C4(&AssetManager_TypeInfo);
    byte_438AA38 = 1;
  }
  v3 = AssetManager_TypeInfo;
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  CacheListFile = AssetManager__get_CacheListFile((const MethodInfo *)v3);
  if ( System_IO_File__Exists(CacheListFile, 0LL) )
    System_IO_File__Delete(CacheListFile, 0LL);
  if ( isStandalone )
  {
    v5 = AssetManager_TypeInfo;
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__DeleteContinueData((const MethodInfo *)v5);
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
  AssetManager_c *v5; // x0

  if ( (byte_438AA37 & 1) == 0 )
  {
    sub_B775C4(&AssetManager_TypeInfo);
    byte_438AA37 = 1;
  }
  if ( System_IO_Directory__Exists(cachePath, 0LL) )
    System_IO_Directory__Delete_45053296(cachePath, 1, 0LL);
  if ( isStandalone )
  {
    v5 = AssetManager_TypeInfo;
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
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
  System_String_array *v1; // x19
  System_Int32_array **OldUnityPersistentDataPath; // x0
  __int64 v3; // x1
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  System_Int32_array **v10; // x20
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_Int32_array **v17; // x1
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_Int32_array **v24; // x20
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_Int32_array **v31; // x1
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  System_Int32_array **v38; // x20
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  System_Int32_array **v45; // x1
  __int64 v47; // x0
  __int64 v48; // x0

  if ( (byte_438AA36 & 1) == 0 )
  {
    sub_B775C4(&AndroidUtil_TypeInfo);
    sub_B775C4(&CacheFolderName_TypeInfo);
    sub_B775C4(&ManagerConfig_TypeInfo);
    sub_B775C4(&string___TypeInfo);
    sub_B775C4(&StringLiteral_892/*"/"*/);
    byte_438AA36 = 1;
  }
  v1 = (System_String_array *)sub_B775DC(string___TypeInfo, 6LL);
  if ( (BYTE3(AndroidUtil_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  OldUnityPersistentDataPath = (System_Int32_array **)AndroidUtil__GetOldUnityPersistentDataPath(0LL);
  if ( !v1 )
    sub_B7769C(OldUnityPersistentDataPath, v3);
  v10 = OldUnityPersistentDataPath;
  if ( OldUnityPersistentDataPath )
  {
    OldUnityPersistentDataPath = (System_Int32_array **)sub_B77684(
                                                          OldUnityPersistentDataPath,
                                                          v1->obj.klass->_1.element_class);
    if ( !OldUnityPersistentDataPath )
      goto LABEL_39;
  }
  if ( !v1->max_length )
    goto LABEL_38;
  v1->m_Items[0] = (System_String_o *)v10;
  sub_B77560((BattleServantConfConponent_o *)v1->m_Items, v10, v4, v5, v6, v7, v8, v9);
  OldUnityPersistentDataPath = (System_Int32_array **)StringLiteral_892/*"/"*/;
  if ( StringLiteral_892/*"/"*/ )
  {
    OldUnityPersistentDataPath = (System_Int32_array **)sub_B77684(StringLiteral_892/*"/"*/, v1->obj.klass->_1.element_class);
    if ( !OldUnityPersistentDataPath )
      goto LABEL_39;
    v17 = (System_Int32_array **)StringLiteral_892/*"/"*/;
  }
  else
  {
    v17 = 0LL;
  }
  if ( v1->max_length <= 1 )
    goto LABEL_38;
  v1->m_Items[1] = (System_String_o *)v17;
  sub_B77560((BattleServantConfConponent_o *)&v1->m_Items[1], v17, v11, v12, v13, v14, v15, v16);
  if ( (BYTE3(CacheFolderName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CacheFolderName_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CacheFolderName_TypeInfo);
  }
  OldUnityPersistentDataPath = (System_Int32_array **)CacheFolderName__getFolderNameNotConverted(0, 0LL);
  v24 = OldUnityPersistentDataPath;
  if ( OldUnityPersistentDataPath )
  {
    OldUnityPersistentDataPath = (System_Int32_array **)sub_B77684(
                                                          OldUnityPersistentDataPath,
                                                          v1->obj.klass->_1.element_class);
    if ( !OldUnityPersistentDataPath )
      goto LABEL_39;
  }
  if ( v1->max_length <= 2 )
    goto LABEL_38;
  v1->m_Items[2] = (System_String_o *)v24;
  sub_B77560((BattleServantConfConponent_o *)&v1->m_Items[2], v24, v18, v19, v20, v21, v22, v23);
  OldUnityPersistentDataPath = (System_Int32_array **)StringLiteral_892/*"/"*/;
  if ( StringLiteral_892/*"/"*/ )
  {
    OldUnityPersistentDataPath = (System_Int32_array **)sub_B77684(StringLiteral_892/*"/"*/, v1->obj.klass->_1.element_class);
    if ( !OldUnityPersistentDataPath )
      goto LABEL_39;
    v31 = (System_Int32_array **)StringLiteral_892/*"/"*/;
  }
  else
  {
    v31 = 0LL;
  }
  if ( v1->max_length <= 3 )
    goto LABEL_38;
  v1->m_Items[3] = (System_String_o *)v31;
  sub_B77560((BattleServantConfConponent_o *)&v1->m_Items[3], v31, v25, v26, v27, v28, v29, v30);
  OldUnityPersistentDataPath = (System_Int32_array **)ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    OldUnityPersistentDataPath = (System_Int32_array **)ManagerConfig_TypeInfo;
  }
  v38 = *(System_Int32_array ***)&OldUnityPersistentDataPath[23]->m_Items[25];
  if ( v38 )
  {
    OldUnityPersistentDataPath = (System_Int32_array **)sub_B77684(v38, v1->obj.klass->_1.element_class);
    if ( !OldUnityPersistentDataPath )
    {
LABEL_39:
      v48 = sub_B776BC(OldUnityPersistentDataPath);
      sub_B77668(v48, 0LL);
    }
  }
  if ( v1->max_length <= 4 )
    goto LABEL_38;
  v1->m_Items[4] = (System_String_o *)v38;
  sub_B77560((BattleServantConfConponent_o *)&v1->m_Items[4], v38, v32, v33, v34, v35, v36, v37);
  OldUnityPersistentDataPath = (System_Int32_array **)StringLiteral_892/*"/"*/;
  if ( StringLiteral_892/*"/"*/ )
  {
    OldUnityPersistentDataPath = (System_Int32_array **)sub_B77684(StringLiteral_892/*"/"*/, v1->obj.klass->_1.element_class);
    if ( OldUnityPersistentDataPath )
    {
      v45 = (System_Int32_array **)StringLiteral_892/*"/"*/;
      goto LABEL_36;
    }
    goto LABEL_39;
  }
  v45 = 0LL;
LABEL_36:
  if ( v1->max_length <= 5 )
  {
LABEL_38:
    v47 = sub_B776C8(OldUnityPersistentDataPath);
    sub_B77668(v47, 0LL);
  }
  v1->m_Items[5] = (System_String_o *)v45;
  sub_B77560((BattleServantConfConponent_o *)&v1->m_Items[5], v45, v39, v40, v41, v42, v43, v44);
  return System_String__Concat_44982964(v1, 0LL);
}


System_String_o *__fastcall AssetStorageCache__GetPath(const MethodInfo *method)
{
  System_String_o *DatFileSavePath; // x19
  System_String_o *FolderName; // x2

  if ( (byte_438AA35 & 1) == 0 )
  {
    sub_B775C4(&AndroidUtil_TypeInfo);
    sub_B775C4(&CacheFolderName_TypeInfo);
    sub_B775C4(&StringLiteral_892/*"/"*/);
    byte_438AA35 = 1;
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
  return System_String__Concat_44905348(
           DatFileSavePath,
           (System_String_o *)StringLiteral_892/*"/"*/,
           FolderName,
           (System_String_o *)StringLiteral_892/*"/"*/,
           0LL);
}