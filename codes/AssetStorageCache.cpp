void __fastcall AssetStorageCache___ctor(AssetStorageCache_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall AssetStorageCache__ClearCache(bool isStandalone, const MethodInfo *method)
{
  System_String_o *CacheListFile; // x20

  if ( (byte_40FBE09 & 1) == 0 )
  {
    sub_B16FFC(&AssetManager_TypeInfo, method);
    byte_40FBE09 = 1;
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


// local variable allocation has failed, the output may be wrong!
// positive sp value has been detected, the output may be wrong!
void __fastcall AssetStorageCache__ClearCacheAllCommonProc(
        System_String_o *cachePath,
        bool isStandalone,
        const MethodInfo *method)
{
  if ( (byte_40FBE08 & 1) == 0 )
  {
    sub_B16FFC(&AssetManager_TypeInfo, isStandalone);
    byte_40FBE08 = 1;
  }
  if ( System_IO_Directory__Exists(cachePath, 0LL) )
    System_IO_Directory__Delete_43683028(cachePath, 1, 0LL);
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
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_String_array *v7; // x19
  System_Int32_array **OldUnityPersistentDataPath; // x0
  System_Int32_array **v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_Int32_array **v16; // x20
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_Int32_array **v27; // x20
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  System_Int32_array **v38; // x20
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7

  if ( (byte_40FBE07 & 1) == 0 )
  {
    sub_B16FFC(&AndroidUtil_TypeInfo, v1);
    sub_B16FFC(&CacheFolderName_TypeInfo, v3);
    sub_B16FFC(&ManagerConfig_TypeInfo, v4);
    sub_B16FFC(&string___TypeInfo, v5);
    sub_B16FFC(&StringLiteral_871/*"/"*/, v6);
    byte_40FBE07 = 1;
  }
  v7 = (System_String_array *)sub_B17014(string___TypeInfo, 6LL, v2);
  if ( (BYTE3(AndroidUtil_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  OldUnityPersistentDataPath = (System_Int32_array **)AndroidUtil__GetOldUnityPersistentDataPath(0LL);
  if ( !v7 )
    sub_B170D4();
  v16 = OldUnityPersistentDataPath;
  if ( OldUnityPersistentDataPath )
  {
    OldUnityPersistentDataPath = (System_Int32_array **)sub_B170BC(
                                                          OldUnityPersistentDataPath,
                                                          v7->obj.klass->_1.element_class);
    if ( !OldUnityPersistentDataPath )
      goto LABEL_39;
  }
  if ( !v7->max_length )
    goto LABEL_38;
  v7->m_Items[0] = (System_String_o *)v16;
  sub_B16F98((BattleServantConfConponent_o *)v7->m_Items, v16, v10, v11, v12, v13, v14, v15);
  OldUnityPersistentDataPath = (System_Int32_array **)StringLiteral_871/*"/"*/;
  if ( StringLiteral_871/*"/"*/ )
  {
    OldUnityPersistentDataPath = (System_Int32_array **)sub_B170BC(StringLiteral_871/*"/"*/, v7->obj.klass->_1.element_class);
    if ( !OldUnityPersistentDataPath )
      goto LABEL_39;
    v9 = (System_Int32_array **)StringLiteral_871/*"/"*/;
  }
  else
  {
    v9 = 0LL;
  }
  if ( v7->max_length <= 1 )
    goto LABEL_38;
  v7->m_Items[1] = (System_String_o *)v9;
  sub_B16F98((BattleServantConfConponent_o *)&v7->m_Items[1], v9, v10, v17, v18, v19, v20, v21);
  if ( (BYTE3(CacheFolderName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CacheFolderName_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CacheFolderName_TypeInfo);
  }
  OldUnityPersistentDataPath = (System_Int32_array **)CacheFolderName__getFolderNameNotConverted(0, 0LL);
  v27 = OldUnityPersistentDataPath;
  if ( OldUnityPersistentDataPath )
  {
    OldUnityPersistentDataPath = (System_Int32_array **)sub_B170BC(
                                                          OldUnityPersistentDataPath,
                                                          v7->obj.klass->_1.element_class);
    if ( !OldUnityPersistentDataPath )
      goto LABEL_39;
  }
  if ( v7->max_length <= 2 )
    goto LABEL_38;
  v7->m_Items[2] = (System_String_o *)v27;
  sub_B16F98((BattleServantConfConponent_o *)&v7->m_Items[2], v27, v10, v22, v23, v24, v25, v26);
  OldUnityPersistentDataPath = (System_Int32_array **)StringLiteral_871/*"/"*/;
  if ( StringLiteral_871/*"/"*/ )
  {
    OldUnityPersistentDataPath = (System_Int32_array **)sub_B170BC(StringLiteral_871/*"/"*/, v7->obj.klass->_1.element_class);
    if ( !OldUnityPersistentDataPath )
      goto LABEL_39;
    v9 = (System_Int32_array **)StringLiteral_871/*"/"*/;
  }
  else
  {
    v9 = 0LL;
  }
  if ( v7->max_length <= 3 )
    goto LABEL_38;
  v7->m_Items[3] = (System_String_o *)v9;
  sub_B16F98((BattleServantConfConponent_o *)&v7->m_Items[3], v9, v10, v28, v29, v30, v31, v32);
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
    OldUnityPersistentDataPath = (System_Int32_array **)sub_B170BC(v38, v7->obj.klass->_1.element_class);
    if ( !OldUnityPersistentDataPath )
    {
LABEL_39:
      sub_B170F4(OldUnityPersistentDataPath);
      sub_B170A0();
    }
  }
  if ( v7->max_length <= 4 )
    goto LABEL_38;
  v7->m_Items[4] = (System_String_o *)v38;
  sub_B16F98((BattleServantConfConponent_o *)&v7->m_Items[4], v38, v10, v33, v34, v35, v36, v37);
  OldUnityPersistentDataPath = (System_Int32_array **)StringLiteral_871/*"/"*/;
  if ( StringLiteral_871/*"/"*/ )
  {
    OldUnityPersistentDataPath = (System_Int32_array **)sub_B170BC(StringLiteral_871/*"/"*/, v7->obj.klass->_1.element_class);
    if ( OldUnityPersistentDataPath )
    {
      v9 = (System_Int32_array **)StringLiteral_871/*"/"*/;
      goto LABEL_36;
    }
    goto LABEL_39;
  }
  v9 = 0LL;
LABEL_36:
  if ( v7->max_length <= 5 )
  {
LABEL_38:
    sub_B17100(OldUnityPersistentDataPath, v9, v10);
    sub_B170A0();
  }
  v7->m_Items[5] = (System_String_o *)v9;
  sub_B16F98((BattleServantConfConponent_o *)&v7->m_Items[5], v9, v10, v39, v40, v41, v42, v43);
  return System_String__Concat_43823856(v7, 0LL);
}


System_String_o *__fastcall AssetStorageCache__GetPath(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  System_String_o *DatFileSavePath; // x19
  System_String_o *FolderName; // x2

  if ( (byte_40FBE06 & 1) == 0 )
  {
    sub_B16FFC(&AndroidUtil_TypeInfo, v1);
    sub_B16FFC(&CacheFolderName_TypeInfo, v2);
    sub_B16FFC(&StringLiteral_871/*"/"*/, v3);
    byte_40FBE06 = 1;
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
  return System_String__Concat_43747144(
           DatFileSavePath,
           (System_String_o *)StringLiteral_871/*"/"*/,
           FolderName,
           (System_String_o *)StringLiteral_871/*"/"*/,
           0LL);
}