void __fastcall AssetStorageCache___ctor(AssetStorageCache_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall AssetStorageCache__ClearCache(bool isStandalone, const MethodInfo *method)
{
  System_String_o *CacheListFile; // x20

  if ( (byte_41897C5 & 1) == 0 )
  {
    sub_B2C35C(&AssetManager_TypeInfo, method);
    byte_41897C5 = 1;
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
  if ( (byte_41897C4 & 1) == 0 )
  {
    sub_B2C35C(&AssetManager_TypeInfo, isStandalone);
    byte_41897C4 = 1;
  }
  if ( System_IO_Directory__Exists(cachePath, 0LL) )
    System_IO_Directory__Delete_44244828(cachePath, 1, 0LL);
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
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_String_array *v6; // x19
  System_Int32_array **OldUnityPersistentDataPath; // x0
  __int64 v8; // x1
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_Int32_array **v15; // x20
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_Int32_array **v22; // x1
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_Int32_array **v29; // x20
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  System_Int32_array **v36; // x1
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  System_Int32_array **v43; // x20
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  System_Int32_array **v50; // x1
  __int64 v52; // x0
  __int64 v53; // x0

  if ( (byte_41897C3 & 1) == 0 )
  {
    sub_B2C35C(&AndroidUtil_TypeInfo, v1);
    sub_B2C35C(&CacheFolderName_TypeInfo, v2);
    sub_B2C35C(&ManagerConfig_TypeInfo, v3);
    sub_B2C35C(&string___TypeInfo, v4);
    sub_B2C35C(&StringLiteral_872/*"/"*/, v5);
    byte_41897C3 = 1;
  }
  v6 = (System_String_array *)sub_B2C374(string___TypeInfo, 6LL);
  if ( (BYTE3(AndroidUtil_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  OldUnityPersistentDataPath = (System_Int32_array **)AndroidUtil__GetOldUnityPersistentDataPath(0LL);
  if ( !v6 )
    sub_B2C434(OldUnityPersistentDataPath, v8);
  v15 = OldUnityPersistentDataPath;
  if ( OldUnityPersistentDataPath )
  {
    OldUnityPersistentDataPath = (System_Int32_array **)sub_B2C41C(
                                                          OldUnityPersistentDataPath,
                                                          v6->obj.klass->_1.element_class);
    if ( !OldUnityPersistentDataPath )
      goto LABEL_39;
  }
  if ( !v6->max_length )
    goto LABEL_38;
  v6->m_Items[0] = (System_String_o *)v15;
  sub_B2C2F8((BattleServantConfConponent_o *)v6->m_Items, v15, v9, v10, v11, v12, v13, v14);
  OldUnityPersistentDataPath = (System_Int32_array **)StringLiteral_872/*"/"*/;
  if ( StringLiteral_872/*"/"*/ )
  {
    OldUnityPersistentDataPath = (System_Int32_array **)sub_B2C41C(StringLiteral_872/*"/"*/, v6->obj.klass->_1.element_class);
    if ( !OldUnityPersistentDataPath )
      goto LABEL_39;
    v22 = (System_Int32_array **)StringLiteral_872/*"/"*/;
  }
  else
  {
    v22 = 0LL;
  }
  if ( v6->max_length <= 1 )
    goto LABEL_38;
  v6->m_Items[1] = (System_String_o *)v22;
  sub_B2C2F8((BattleServantConfConponent_o *)&v6->m_Items[1], v22, v16, v17, v18, v19, v20, v21);
  if ( (BYTE3(CacheFolderName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CacheFolderName_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CacheFolderName_TypeInfo);
  }
  OldUnityPersistentDataPath = (System_Int32_array **)CacheFolderName__getFolderNameNotConverted(0, 0LL);
  v29 = OldUnityPersistentDataPath;
  if ( OldUnityPersistentDataPath )
  {
    OldUnityPersistentDataPath = (System_Int32_array **)sub_B2C41C(
                                                          OldUnityPersistentDataPath,
                                                          v6->obj.klass->_1.element_class);
    if ( !OldUnityPersistentDataPath )
      goto LABEL_39;
  }
  if ( v6->max_length <= 2 )
    goto LABEL_38;
  v6->m_Items[2] = (System_String_o *)v29;
  sub_B2C2F8((BattleServantConfConponent_o *)&v6->m_Items[2], v29, v23, v24, v25, v26, v27, v28);
  OldUnityPersistentDataPath = (System_Int32_array **)StringLiteral_872/*"/"*/;
  if ( StringLiteral_872/*"/"*/ )
  {
    OldUnityPersistentDataPath = (System_Int32_array **)sub_B2C41C(StringLiteral_872/*"/"*/, v6->obj.klass->_1.element_class);
    if ( !OldUnityPersistentDataPath )
      goto LABEL_39;
    v36 = (System_Int32_array **)StringLiteral_872/*"/"*/;
  }
  else
  {
    v36 = 0LL;
  }
  if ( v6->max_length <= 3 )
    goto LABEL_38;
  v6->m_Items[3] = (System_String_o *)v36;
  sub_B2C2F8((BattleServantConfConponent_o *)&v6->m_Items[3], v36, v30, v31, v32, v33, v34, v35);
  OldUnityPersistentDataPath = (System_Int32_array **)ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    OldUnityPersistentDataPath = (System_Int32_array **)ManagerConfig_TypeInfo;
  }
  v43 = *(System_Int32_array ***)&OldUnityPersistentDataPath[23]->m_Items[25];
  if ( v43 )
  {
    OldUnityPersistentDataPath = (System_Int32_array **)sub_B2C41C(v43, v6->obj.klass->_1.element_class);
    if ( !OldUnityPersistentDataPath )
    {
LABEL_39:
      v53 = sub_B2C454(OldUnityPersistentDataPath);
      sub_B2C400(v53, 0LL);
    }
  }
  if ( v6->max_length <= 4 )
    goto LABEL_38;
  v6->m_Items[4] = (System_String_o *)v43;
  sub_B2C2F8((BattleServantConfConponent_o *)&v6->m_Items[4], v43, v37, v38, v39, v40, v41, v42);
  OldUnityPersistentDataPath = (System_Int32_array **)StringLiteral_872/*"/"*/;
  if ( StringLiteral_872/*"/"*/ )
  {
    OldUnityPersistentDataPath = (System_Int32_array **)sub_B2C41C(StringLiteral_872/*"/"*/, v6->obj.klass->_1.element_class);
    if ( OldUnityPersistentDataPath )
    {
      v50 = (System_Int32_array **)StringLiteral_872/*"/"*/;
      goto LABEL_36;
    }
    goto LABEL_39;
  }
  v50 = 0LL;
LABEL_36:
  if ( v6->max_length <= 5 )
  {
LABEL_38:
    v52 = sub_B2C460(OldUnityPersistentDataPath);
    sub_B2C400(v52, 0LL);
  }
  v6->m_Items[5] = (System_String_o *)v50;
  sub_B2C2F8((BattleServantConfConponent_o *)&v6->m_Items[5], v50, v44, v45, v46, v47, v48, v49);
  return System_String__Concat_44385656(v6, 0LL);
}


System_String_o *__fastcall AssetStorageCache__GetPath(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  System_String_o *DatFileSavePath; // x19
  System_String_o *FolderName; // x2

  if ( (byte_41897C2 & 1) == 0 )
  {
    sub_B2C35C(&AndroidUtil_TypeInfo, v1);
    sub_B2C35C(&CacheFolderName_TypeInfo, v2);
    sub_B2C35C(&StringLiteral_872/*"/"*/, v3);
    byte_41897C2 = 1;
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
  return System_String__Concat_44308944(
           DatFileSavePath,
           (System_String_o *)StringLiteral_872/*"/"*/,
           FolderName,
           (System_String_o *)StringLiteral_872/*"/"*/,
           0LL);
}