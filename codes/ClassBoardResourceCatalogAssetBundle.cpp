void __fastcall ClassBoardResourceCatalogAssetBundle___ctor(
        ClassBoardResourceCatalogAssetBundle_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x3
  __int64 v7; // x4
  Il2CppObject *v8; // x20
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  AssetStorageLoadWrapper_o *v19; // x20
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7

  if ( (byte_40FB9AB & 1) == 0 )
  {
    sub_B16FFC(&AssetStorageLoadWrapper_TypeInfo, method);
    sub_B16FFC(&ClassBoardResourceContents_TypeInfo, v3);
    byte_40FB9AB = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v8 = (Il2CppObject *)sub_B170CC(ClassBoardResourceContents_TypeInfo, v4, v5, v6, v7);
  System_Object___ctor(v8, 0LL);
  this->fields._Contents_k__BackingField = (struct ClassBoardResourceContents_o *)v8;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._Contents_k__BackingField,
    (System_Int32_array **)v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  v19 = (AssetStorageLoadWrapper_o *)sub_B170CC(AssetStorageLoadWrapper_TypeInfo, v15, v16, v17, v18);
  AssetStorageLoadWrapper___ctor(v19, 0LL);
  this->fields.assetStorageLoadWrapper = v19;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v19, v20, v21, v22, v23, v24, v25);
}


System_String_o *__fastcall ClassBoardResourceCatalogAssetBundle__GetIconAtlasPath(
        ClassBoardResourceCatalogAssetBundle_o *this,
        const MethodInfo *method)
{
  if ( (byte_40FB9B2 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_3978/*"ClassBoard/Icon/DownloadClassBoardIconAtlas"*/, method);
    byte_40FB9B2 = 1;
  }
  return (System_String_o *)StringLiteral_3978/*"ClassBoard/Icon/DownloadClassBoardIconAtlas"*/;
}


Il2CppObject *__fastcall ClassBoardResourceCatalogAssetBundle__GetObject_object_(
        ClassBoardResourceCatalogAssetBundle_o *this,
        AssetData_o *assetData,
        System_String_o *name,
        const MethodInfo_18BC124 *method)
{
  __int64 v7; // x1
  UnityEngine_Object_o *Object_WarBoardWaitTimeSetting; // x20

  if ( (byte_40FA65A & 1) == 0 )
  {
    sub_B16FFC(&Method_AssetData_GetObject_GameObject____66802784, assetData);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v7);
    byte_40FA65A = 1;
  }
  if ( !assetData )
    goto LABEL_11;
  Object_WarBoardWaitTimeSetting = (UnityEngine_Object_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                             assetData,
                                                             name,
                                                             (const MethodInfo_18AFC60 *)Method_AssetData_GetObject_GameObject____66802784);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(Object_WarBoardWaitTimeSetting, 0LL, 0LL) )
    return 0LL;
  if ( !Object_WarBoardWaitTimeSetting )
LABEL_11:
    sub_B170D4();
  return (Il2CppObject *)((__int64 (__fastcall *)(UnityEngine_Object_o *))method->rgctx_data->_0_UnityEngine_GameObject_GetComponent_T_->methodPointer)(Object_WarBoardWaitTimeSetting);
}


// local variable allocation has failed, the output may be wrong!
ClassBoardBlank_o *__fastcall ClassBoardResourceCatalogAssetBundle__GetUniqueBlankObject(
        ClassBoardResourceCatalogAssetBundle_o *this,
        int32_t assetId,
        const MethodInfo *method)
{
  __int64 v4; // x1
  AssetData_o *mainAssetData; // x20
  System_String_o *v6; // x0
  System_String_o *v7; // x0
  int32_t v9; // [xsp+Ch] [xbp-14h] BYREF

  v9 = assetId;
  if ( (byte_40FB9B0 & 1) == 0 )
  {
    sub_B16FFC(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardBlank___, *(_QWORD *)&assetId);
    sub_B16FFC(&StringLiteral_3984/*"ClassBoardBlank"*/, v4);
    byte_40FB9B0 = 1;
  }
  mainAssetData = this->fields.mainAssetData;
  v6 = System_Int32__ToString((int32_t)&v9, 0LL);
  v7 = System_String__Concat_43743732((System_String_o *)StringLiteral_3984/*"ClassBoardBlank"*/, v6, 0LL);
  return (ClassBoardBlank_o *)ClassBoardResourceCatalogAssetBundle__GetObject_object_(
                                this,
                                mainAssetData,
                                v7,
                                (const MethodInfo_18BC124 *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardBlank___);
}


// local variable allocation has failed, the output may be wrong!
ClassBoardLock_o *__fastcall ClassBoardResourceCatalogAssetBundle__GetUniqueLockObject(
        ClassBoardResourceCatalogAssetBundle_o *this,
        int32_t assetId,
        const MethodInfo *method)
{
  __int64 v4; // x1
  AssetData_o *mainAssetData; // x20
  System_String_o *v6; // x0
  System_String_o *v7; // x0
  int32_t v9; // [xsp+Ch] [xbp-14h] BYREF

  v9 = assetId;
  if ( (byte_40FB9B1 & 1) == 0 )
  {
    sub_B16FFC(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardLock___, *(_QWORD *)&assetId);
    sub_B16FFC(&StringLiteral_3987/*"ClassBoardLock"*/, v4);
    byte_40FB9B1 = 1;
  }
  mainAssetData = this->fields.mainAssetData;
  v6 = System_Int32__ToString((int32_t)&v9, 0LL);
  v7 = System_String__Concat_43743732((System_String_o *)StringLiteral_3987/*"ClassBoardLock"*/, v6, 0LL);
  return (ClassBoardLock_o *)ClassBoardResourceCatalogAssetBundle__GetObject_object_(
                               this,
                               mainAssetData,
                               v7,
                               (const MethodInfo_18BC124 *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardLock___);
}


// local variable allocation has failed, the output may be wrong!
ClassBoardSquare_o *__fastcall ClassBoardResourceCatalogAssetBundle__GetUniqueSquareObject(
        ClassBoardResourceCatalogAssetBundle_o *this,
        int32_t assetId,
        const MethodInfo *method)
{
  __int64 v4; // x1
  AssetData_o *mainAssetData; // x20
  System_String_o *v6; // x0
  System_String_o *v7; // x0
  int32_t v9; // [xsp+Ch] [xbp-14h] BYREF

  v9 = assetId;
  if ( (byte_40FB9AF & 1) == 0 )
  {
    sub_B16FFC(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardSquare___, *(_QWORD *)&assetId);
    sub_B16FFC(&StringLiteral_3993/*"ClassBoardSquare"*/, v4);
    byte_40FB9AF = 1;
  }
  mainAssetData = this->fields.mainAssetData;
  v6 = System_Int32__ToString((int32_t)&v9, 0LL);
  v7 = System_String__Concat_43743732((System_String_o *)StringLiteral_3993/*"ClassBoardSquare"*/, v6, 0LL);
  return (ClassBoardSquare_o *)ClassBoardResourceCatalogAssetBundle__GetObject_object_(
                                 this,
                                 mainAssetData,
                                 v7,
                                 (const MethodInfo_18BC124 *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardSquare___);
}


void __fastcall ClassBoardResourceCatalogAssetBundle__LoadAssetStorage(
        ClassBoardResourceCatalogAssetBundle_o *this,
        System_String_o *assetBundlePath,
        AssetLoader_LoadEndDataHandler_o *loadCallback,
        const MethodInfo *method)
{
  AssetStorageLoadWrapper_o *assetStorageLoadWrapper; // x0

  assetStorageLoadWrapper = this->fields.assetStorageLoadWrapper;
  if ( !assetStorageLoadWrapper )
    goto LABEL_5;
  if ( AssetStorageLoadWrapper__LoadAssetStorage(assetStorageLoadWrapper, assetBundlePath, loadCallback, 3, 0LL) )
    return;
  if ( !loadCallback )
LABEL_5:
    sub_B170D4();
  AssetLoader_LoadEndDataHandler__Invoke(loadCallback, 0LL, 0LL);
}


void __fastcall ClassBoardResourceCatalogAssetBundle__LoadEnd(
        ClassBoardResourceCatalogAssetBundle_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  Il2CppObject *v27; // x24
  Il2CppObject *v28; // x25
  Il2CppObject *v29; // x26
  Il2CppObject *v30; // x27
  Il2CppObject *v31; // x23
  Il2CppObject *v32; // x22
  Il2CppObject *v33; // x0
  System_Int32_array **v34; // x28
  WarBoardWaitTimeSetting_o *Object_WarBoardWaitTimeSetting; // x0
  System_Int32_array **v36; // x20
  WarBoardWaitTimeSetting_o *v37; // x0
  const MethodInfo *v38; // x5
  System_Int32_array **v39; // x21
  const MethodInfo *v40; // x6
  ClassBoardResourceContents_o *Contents_k__BackingField; // x0
  const MethodInfo *v42; // x5
  ClassBoardResourceContents_o *v43; // x0
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  struct ClassBoardResourceContents_o *v50; // x0
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  struct ClassBoardResourceContents_o *v57; // x0
  System_String_array **v58; // x2
  System_String_array **v59; // x3
  System_Boolean_array **v60; // x4
  System_Int32_array **v61; // x5
  System_Int32_array *v62; // x6
  System_Int32_array *v63; // x7
  struct ClassBoardResourceContents_o *v64; // x0
  System_Action_o *loadEndCallback; // x0
  ClassBoardDisableOpenDialog_o *classBoardDisableOpenDialog; // [xsp+0h] [xbp-70h]
  ClassBoardLock_o *lockAsset; // [xsp+8h] [xbp-68h]
  Il2CppObject *v68; // [xsp+10h] [xbp-60h]
  Il2CppObject *Object_object; // [xsp+18h] [xbp-58h]

  if ( (byte_40FB9AD & 1) == 0 )
  {
    sub_B16FFC(&Method_AssetData_GetObject_GameObject____66802784, method);
    sub_B16FFC(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardBackground___, v3);
    sub_B16FFC(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardBlank___, v4);
    sub_B16FFC(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardDisableOpenDialog___, v5);
    sub_B16FFC(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardLine___, v6);
    sub_B16FFC(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardLockOpenConfirmDialog___, v7);
    sub_B16FFC(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardLockReleaseConditionDialog___, v8);
    sub_B16FFC(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardLock___, v9);
    sub_B16FFC(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardSquareDetailDialog___, v10);
    sub_B16FFC(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardSquareOpenConfirmDialog___, v11);
    sub_B16FFC(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardSquare___, v12);
    sub_B16FFC(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardUIController___, v13);
    sub_B16FFC(&StringLiteral_3983/*"ClassBoardBg"*/, v14);
    sub_B16FFC(&StringLiteral_3989/*"ClassBoardLockReleaseConditionDialog"*/, v15);
    sub_B16FFC(&StringLiteral_3986/*"ClassBoardLine"*/, v16);
    sub_B16FFC(&StringLiteral_3994/*"ClassBoardSquareDetailDialog"*/, v17);
    sub_B16FFC(&StringLiteral_3987/*"ClassBoardLock"*/, v18);
    sub_B16FFC(&StringLiteral_3992/*"ClassBoardSelectView"*/, v19);
    sub_B16FFC(&StringLiteral_6747/*"ForwardIconAnimObject"*/, v20);
    sub_B16FFC(&StringLiteral_3984/*"ClassBoardBlank"*/, v21);
    sub_B16FFC(&StringLiteral_3985/*"ClassBoardDisableOpenDialog"*/, v22);
    sub_B16FFC(&StringLiteral_3988/*"ClassBoardLockOpenConfirmDialog"*/, v23);
    sub_B16FFC(&StringLiteral_3993/*"ClassBoardSquare"*/, v24);
    sub_B16FFC(&StringLiteral_3995/*"ClassBoardSquareOpenConfirmDialog"*/, v25);
    sub_B16FFC(&StringLiteral_3996/*"ClassBoardUI"*/, v26);
    byte_40FB9AD = 1;
  }
  Object_object = ClassBoardResourceCatalogAssetBundle__GetObject_object_(
                    this,
                    this->fields.mainAssetData,
                    (System_String_o *)StringLiteral_3993/*"ClassBoardSquare"*/,
                    (const MethodInfo_18BC124 *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardSquare___);
  v68 = ClassBoardResourceCatalogAssetBundle__GetObject_object_(
          this,
          this->fields.mainAssetData,
          (System_String_o *)StringLiteral_3986/*"ClassBoardLine"*/,
          (const MethodInfo_18BC124 *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardLine___);
  lockAsset = (ClassBoardLock_o *)ClassBoardResourceCatalogAssetBundle__GetObject_object_(
                                    this,
                                    this->fields.mainAssetData,
                                    (System_String_o *)StringLiteral_3987/*"ClassBoardLock"*/,
                                    (const MethodInfo_18BC124 *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardLock___);
  v27 = ClassBoardResourceCatalogAssetBundle__GetObject_object_(
          this,
          this->fields.mainAssetData,
          (System_String_o *)StringLiteral_3984/*"ClassBoardBlank"*/,
          (const MethodInfo_18BC124 *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardBlank___);
  classBoardDisableOpenDialog = (ClassBoardDisableOpenDialog_o *)ClassBoardResourceCatalogAssetBundle__GetObject_object_(
                                                                   this,
                                                                   this->fields.mainAssetData,
                                                                   (System_String_o *)StringLiteral_3985/*"ClassBoardDisableOpenDialog"*/,
                                                                   (const MethodInfo_18BC124 *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardDisableOpenDialog___);
  v28 = ClassBoardResourceCatalogAssetBundle__GetObject_object_(
          this,
          this->fields.mainAssetData,
          (System_String_o *)StringLiteral_3995/*"ClassBoardSquareOpenConfirmDialog"*/,
          (const MethodInfo_18BC124 *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardSquareOpenConfirmDialog___);
  v29 = ClassBoardResourceCatalogAssetBundle__GetObject_object_(
          this,
          this->fields.mainAssetData,
          (System_String_o *)StringLiteral_3988/*"ClassBoardLockOpenConfirmDialog"*/,
          (const MethodInfo_18BC124 *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardLockOpenConfirmDialog___);
  v30 = ClassBoardResourceCatalogAssetBundle__GetObject_object_(
          this,
          this->fields.mainAssetData,
          (System_String_o *)StringLiteral_3989/*"ClassBoardLockReleaseConditionDialog"*/,
          (const MethodInfo_18BC124 *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardLockReleaseConditionDialog___);
  v31 = ClassBoardResourceCatalogAssetBundle__GetObject_object_(
          this,
          this->fields.mainAssetData,
          (System_String_o *)StringLiteral_3994/*"ClassBoardSquareDetailDialog"*/,
          (const MethodInfo_18BC124 *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardSquareDetailDialog___);
  v32 = ClassBoardResourceCatalogAssetBundle__GetObject_object_(
          this,
          this->fields.mainAssetData,
          (System_String_o *)StringLiteral_3996/*"ClassBoardUI"*/,
          (const MethodInfo_18BC124 *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardUIController___);
  v33 = ClassBoardResourceCatalogAssetBundle__GetObject_object_(
          this,
          this->fields.modelAssetData,
          (System_String_o *)StringLiteral_3983/*"ClassBoardBg"*/,
          (const MethodInfo_18BC124 *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardBackground___);
  if ( !this->fields.boardSelectViewAssetData )
    goto LABEL_13;
  v34 = (System_Int32_array **)v33;
  Object_WarBoardWaitTimeSetting = AssetData__GetObject_WarBoardWaitTimeSetting_(
                                     this->fields.boardSelectViewAssetData,
                                     (System_String_o *)StringLiteral_3992/*"ClassBoardSelectView"*/,
                                     (const MethodInfo_18AFC60 *)Method_AssetData_GetObject_GameObject____66802784);
  if ( !this->fields.boardSelectViewAssetData )
    goto LABEL_13;
  v36 = (System_Int32_array **)Object_WarBoardWaitTimeSetting;
  v37 = AssetData__GetObject_WarBoardWaitTimeSetting_(
          this->fields.boardSelectViewAssetData,
          (System_String_o *)StringLiteral_6747/*"ForwardIconAnimObject"*/,
          (const MethodInfo_18AFC60 *)Method_AssetData_GetObject_GameObject____66802784);
  if ( !this->fields._Contents_k__BackingField )
    goto LABEL_13;
  v39 = (System_Int32_array **)v37;
  ClassBoardResourceContents__SetContents(
    this->fields._Contents_k__BackingField,
    (ClassBoardSquare_o *)Object_object,
    (ClassBoardLine_o *)v68,
    lockAsset,
    (ClassBoardBlank_o *)v27,
    v38);
  Contents_k__BackingField = this->fields._Contents_k__BackingField;
  if ( !Contents_k__BackingField )
    goto LABEL_13;
  ClassBoardResourceContents__SetContentsDialog(
    Contents_k__BackingField,
    classBoardDisableOpenDialog,
    (ClassBoardSquareOpenConfirmDialog_o *)v28,
    (ClassBoardLockOpenConfirmDialog_o *)v29,
    (ClassBoardLockReleaseConditionDialog_o *)v30,
    (ClassBoardSquareDetailDialog_o *)v31,
    v40);
  v43 = this->fields._Contents_k__BackingField;
  if ( !v43 )
    goto LABEL_13;
  ClassBoardResourceContents__SetContentsUI(
    v43,
    (ClassBoardUIController_o *)v32,
    this->fields.boardUiAtlasManagerUnit,
    this->fields.iconAtlasManagerUnit,
    this->fields.classUiAtlasManagerUnit,
    v42);
  v50 = this->fields._Contents_k__BackingField;
  if ( !v50 )
    goto LABEL_13;
  v50->fields._BgModel_k__BackingField = (struct ClassBoardBackground_o *)v34;
  sub_B16F98((BattleServantConfConponent_o *)&v50->fields._BgModel_k__BackingField, v34, v44, v45, v46, v47, v48, v49);
  v57 = this->fields._Contents_k__BackingField;
  if ( !v57
    || (v57->fields._BoardSelectViewPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)v36,
        sub_B16F98(
          (BattleServantConfConponent_o *)&v57->fields._BoardSelectViewPrefab_k__BackingField,
          v36,
          v51,
          v52,
          v53,
          v54,
          v55,
          v56),
        (v64 = this->fields._Contents_k__BackingField) == 0LL)
    || (v64->fields._ForwardIconAnimObjectPrefab_k__BackingField = (struct UnityEngine_GameObject_o *)v39,
        sub_B16F98(
          (BattleServantConfConponent_o *)&v64->fields._ForwardIconAnimObjectPrefab_k__BackingField,
          v39,
          v58,
          v59,
          v60,
          v61,
          v62,
          v63),
        (loadEndCallback = this->fields.loadEndCallback) == 0LL) )
  {
LABEL_13:
    sub_B170D4();
  }
  System_Action__Invoke(loadEndCallback, 0LL);
}


void __fastcall ClassBoardResourceCatalogAssetBundle__LoadSystemAsset(
        ClassBoardResourceCatalogAssetBundle_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  AssetStorageLoadWrapper_o *assetStorageLoadWrapper; // x20
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x3
  __int64 v30; // x4
  AtlasManagerUnit_o *v31; // x21
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  AssetStorageLoadWrapper_o *v38; // x20
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x3
  __int64 v42; // x4
  AtlasManagerUnit_o *v43; // x21
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  AssetStorageLoadWrapper_o *v50; // x20
  __int64 v51; // x1
  __int64 v52; // x2
  __int64 v53; // x3
  __int64 v54; // x4
  AtlasManagerUnit_o *v55; // x21
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  __int64 v62; // x2
  System_Action_Action__array *v63; // x20
  __int64 v64; // x1
  __int64 v65; // x2
  __int64 v66; // x3
  __int64 v67; // x4
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v68; // x21
  __int64 v69; // x0
  __int64 v70; // x1
  System_String_array **v71; // x2
  System_String_array **v72; // x3
  System_Boolean_array **v73; // x4
  System_Int32_array **v74; // x5
  System_Int32_array *v75; // x6
  System_Int32_array *v76; // x7
  __int64 v77; // x1
  __int64 v78; // x2
  __int64 v79; // x3
  __int64 v80; // x4
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v81; // x21
  System_String_array **v82; // x3
  System_Boolean_array **v83; // x4
  System_Int32_array **v84; // x5
  System_Int32_array *v85; // x6
  System_Int32_array *v86; // x7
  __int64 v87; // x1
  __int64 v88; // x2
  __int64 v89; // x3
  __int64 v90; // x4
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v91; // x21
  System_String_array **v92; // x3
  System_Boolean_array **v93; // x4
  System_Int32_array **v94; // x5
  System_Int32_array *v95; // x6
  System_Int32_array *v96; // x7
  __int64 v97; // x1
  __int64 v98; // x2
  __int64 v99; // x3
  __int64 v100; // x4
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v101; // x21
  System_String_array **v102; // x3
  System_Boolean_array **v103; // x4
  System_Int32_array **v104; // x5
  System_Int32_array *v105; // x6
  System_Int32_array *v106; // x7
  __int64 v107; // x1
  __int64 v108; // x2
  __int64 v109; // x3
  __int64 v110; // x4
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v111; // x21
  System_String_array **v112; // x3
  System_Boolean_array **v113; // x4
  System_Int32_array **v114; // x5
  System_Int32_array *v115; // x6
  System_Int32_array *v116; // x7
  __int64 v117; // x1
  __int64 v118; // x2
  __int64 v119; // x3
  __int64 v120; // x4
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v121; // x21
  System_String_array **v122; // x3
  System_Boolean_array **v123; // x4
  System_Int32_array **v124; // x5
  System_Int32_array *v125; // x6
  System_Int32_array *v126; // x7
  __int64 v127; // x1
  __int64 v128; // x2
  __int64 v129; // x3
  __int64 v130; // x4
  ChainableActionParallel_o *v131; // x21
  __int64 v132; // x2
  System_Action_array *v133; // x20
  __int64 v134; // x1
  __int64 v135; // x2
  __int64 v136; // x3
  __int64 v137; // x4
  System_Action_o *v138; // x22
  System_String_array **v139; // x3
  System_Boolean_array **v140; // x4
  System_Int32_array **v141; // x5
  System_Int32_array *v142; // x6
  System_Int32_array *v143; // x7
  ChainableActionBase_o *v144; // x0

  if ( (byte_40FB9AC & 1) == 0 )
  {
    sub_B16FFC(&System_Action___TypeInfo, callback);
    sub_B16FFC(&System_Action_Action____TypeInfo, v10);
    sub_B16FFC(&Method_System_Action_Action___ctor__, v11);
    sub_B16FFC(&System_Action_Action__TypeInfo, v12);
    sub_B16FFC(&System_Action_TypeInfo, v13);
    sub_B16FFC(&AtlasManagerUnit_TypeInfo, v14);
    sub_B16FFC(&ChainableActionParallel_TypeInfo, v15);
    sub_B16FFC(&Method_ClassBoardResourceCatalogAssetBundle_LoadEnd__, v16);
    sub_B16FFC(&Method_ClassBoardResourceCatalogAssetBundle__LoadSystemAsset_b__32_0__, v17);
    sub_B16FFC(&Method_ClassBoardResourceCatalogAssetBundle__LoadSystemAsset_b__32_1__, v18);
    sub_B16FFC(&Method_ClassBoardResourceCatalogAssetBundle__LoadSystemAsset_b__32_2__, v19);
    sub_B16FFC(&Method_ClassBoardResourceCatalogAssetBundle__LoadSystemAsset_b__32_3__, v20);
    sub_B16FFC(&Method_ClassBoardResourceCatalogAssetBundle__LoadSystemAsset_b__32_4__, v21);
    sub_B16FFC(&Method_ClassBoardResourceCatalogAssetBundle__LoadSystemAsset_b__32_5__, v22);
    sub_B16FFC(&StringLiteral_3982/*"ClassBoard/UI/DownloadClassBoardUIAtlas"*/, v23);
    sub_B16FFC(&StringLiteral_3981/*"ClassBoard/UI/DownloadClassBoardClassUIAtlas"*/, v24);
    sub_B16FFC(&StringLiteral_3978/*"ClassBoard/Icon/DownloadClassBoardIconAtlas"*/, v25);
    byte_40FB9AC = 1;
  }
  this->fields.loadEndCallback = callback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.loadEndCallback,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  assetStorageLoadWrapper = this->fields.assetStorageLoadWrapper;
  v31 = (AtlasManagerUnit_o *)sub_B170CC(AtlasManagerUnit_TypeInfo, v27, v28, v29, v30);
  AtlasManagerUnit___ctor(v31, (System_String_o *)StringLiteral_3982/*"ClassBoard/UI/DownloadClassBoardUIAtlas"*/, assetStorageLoadWrapper, 0LL);
  this->fields.boardUiAtlasManagerUnit = v31;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.boardUiAtlasManagerUnit,
    (System_Int32_array **)v31,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  v38 = this->fields.assetStorageLoadWrapper;
  v43 = (AtlasManagerUnit_o *)sub_B170CC(AtlasManagerUnit_TypeInfo, v39, v40, v41, v42);
  AtlasManagerUnit___ctor(v43, (System_String_o *)StringLiteral_3981/*"ClassBoard/UI/DownloadClassBoardClassUIAtlas"*/, v38, 0LL);
  this->fields.classUiAtlasManagerUnit = v43;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.classUiAtlasManagerUnit,
    (System_Int32_array **)v43,
    v44,
    v45,
    v46,
    v47,
    v48,
    v49);
  v50 = this->fields.assetStorageLoadWrapper;
  v55 = (AtlasManagerUnit_o *)sub_B170CC(AtlasManagerUnit_TypeInfo, v51, v52, v53, v54);
  AtlasManagerUnit___ctor(v55, (System_String_o *)StringLiteral_3978/*"ClassBoard/Icon/DownloadClassBoardIconAtlas"*/, v50, 0LL);
  this->fields.iconAtlasManagerUnit = v55;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.iconAtlasManagerUnit,
    (System_Int32_array **)v55,
    v56,
    v57,
    v58,
    v59,
    v60,
    v61);
  v63 = (System_Action_Action__array *)sub_B17014(System_Action_Action____TypeInfo, 6LL, v62);
  v68 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B170CC(
                                                                               System_Action_Action__TypeInfo,
                                                                               v64,
                                                                               v65,
                                                                               v66,
                                                                               v67);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v68,
    (Il2CppObject *)this,
    Method_ClassBoardResourceCatalogAssetBundle__LoadSystemAsset_b__32_0__,
    (const MethodInfo_24B7310 *)Method_System_Action_Action___ctor__);
  if ( !v63 )
LABEL_31:
    sub_B170D4();
  if ( v68 )
  {
    v69 = sub_B170BC(v68, v63->obj.klass->_1.element_class);
    if ( !v69 )
      goto LABEL_30;
  }
  if ( !v63->max_length )
    goto LABEL_29;
  v63->m_Items[0] = (System_Action_Action__o *)v68;
  sub_B16F98((BattleServantConfConponent_o *)v63->m_Items, (System_Int32_array **)v68, v71, v72, v73, v74, v75, v76);
  v81 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B170CC(
                                                                               System_Action_Action__TypeInfo,
                                                                               v77,
                                                                               v78,
                                                                               v79,
                                                                               v80);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v81,
    (Il2CppObject *)this,
    Method_ClassBoardResourceCatalogAssetBundle__LoadSystemAsset_b__32_1__,
    (const MethodInfo_24B7310 *)Method_System_Action_Action___ctor__);
  if ( v81 )
  {
    v69 = sub_B170BC(v81, v63->obj.klass->_1.element_class);
    if ( !v69 )
      goto LABEL_30;
  }
  if ( v63->max_length <= 1 )
    goto LABEL_29;
  v63->m_Items[1] = (System_Action_Action__o *)v81;
  sub_B16F98((BattleServantConfConponent_o *)&v63->m_Items[1], (System_Int32_array **)v81, v71, v82, v83, v84, v85, v86);
  v91 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B170CC(
                                                                               System_Action_Action__TypeInfo,
                                                                               v87,
                                                                               v88,
                                                                               v89,
                                                                               v90);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v91,
    (Il2CppObject *)this,
    Method_ClassBoardResourceCatalogAssetBundle__LoadSystemAsset_b__32_2__,
    (const MethodInfo_24B7310 *)Method_System_Action_Action___ctor__);
  if ( v91 )
  {
    v69 = sub_B170BC(v91, v63->obj.klass->_1.element_class);
    if ( !v69 )
      goto LABEL_30;
  }
  if ( v63->max_length <= 2 )
    goto LABEL_29;
  v63->m_Items[2] = (System_Action_Action__o *)v91;
  sub_B16F98((BattleServantConfConponent_o *)&v63->m_Items[2], (System_Int32_array **)v91, v71, v92, v93, v94, v95, v96);
  v101 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B170CC(
                                                                                System_Action_Action__TypeInfo,
                                                                                v97,
                                                                                v98,
                                                                                v99,
                                                                                v100);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v101,
    (Il2CppObject *)this,
    Method_ClassBoardResourceCatalogAssetBundle__LoadSystemAsset_b__32_3__,
    (const MethodInfo_24B7310 *)Method_System_Action_Action___ctor__);
  if ( v101 )
  {
    v69 = sub_B170BC(v101, v63->obj.klass->_1.element_class);
    if ( !v69 )
      goto LABEL_30;
  }
  if ( v63->max_length <= 3 )
    goto LABEL_29;
  v63->m_Items[3] = (System_Action_Action__o *)v101;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v63->m_Items[3],
    (System_Int32_array **)v101,
    v71,
    v102,
    v103,
    v104,
    v105,
    v106);
  v111 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B170CC(
                                                                                System_Action_Action__TypeInfo,
                                                                                v107,
                                                                                v108,
                                                                                v109,
                                                                                v110);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v111,
    (Il2CppObject *)this,
    Method_ClassBoardResourceCatalogAssetBundle__LoadSystemAsset_b__32_4__,
    (const MethodInfo_24B7310 *)Method_System_Action_Action___ctor__);
  if ( v111 )
  {
    v69 = sub_B170BC(v111, v63->obj.klass->_1.element_class);
    if ( !v69 )
      goto LABEL_30;
  }
  if ( v63->max_length <= 4 )
    goto LABEL_29;
  v63->m_Items[4] = (System_Action_Action__o *)v111;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v63->m_Items[4],
    (System_Int32_array **)v111,
    v71,
    v112,
    v113,
    v114,
    v115,
    v116);
  v121 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B170CC(
                                                                                System_Action_Action__TypeInfo,
                                                                                v117,
                                                                                v118,
                                                                                v119,
                                                                                v120);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v121,
    (Il2CppObject *)this,
    Method_ClassBoardResourceCatalogAssetBundle__LoadSystemAsset_b__32_5__,
    (const MethodInfo_24B7310 *)Method_System_Action_Action___ctor__);
  if ( v121 )
  {
    v69 = sub_B170BC(v121, v63->obj.klass->_1.element_class);
    if ( !v69 )
      goto LABEL_30;
  }
  if ( v63->max_length <= 5 )
    goto LABEL_29;
  v63->m_Items[5] = (System_Action_Action__o *)v121;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v63->m_Items[5],
    (System_Int32_array **)v121,
    v71,
    v122,
    v123,
    v124,
    v125,
    v126);
  v131 = (ChainableActionParallel_o *)sub_B170CC(ChainableActionParallel_TypeInfo, v127, v128, v129, v130);
  ChainableActionParallel___ctor_30586412(v131, v63, 0LL);
  v133 = (System_Action_array *)sub_B17014(System_Action___TypeInfo, 1LL, v132);
  v138 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v134, v135, v136, v137);
  System_Action___ctor(v138, (Il2CppObject *)this, Method_ClassBoardResourceCatalogAssetBundle_LoadEnd__, 0LL);
  if ( !v133 )
    goto LABEL_31;
  if ( v138 )
  {
    v69 = sub_B170BC(v138, v133->obj.klass->_1.element_class);
    if ( !v69 )
    {
LABEL_30:
      sub_B170F4(v69);
      sub_B170A0();
    }
  }
  if ( !v133->max_length )
  {
LABEL_29:
    sub_B17100(v69, v70, v71);
    sub_B170A0();
  }
  v133->m_Items[0] = v138;
  sub_B16F98(
    (BattleServantConfConponent_o *)v133->m_Items,
    (System_Int32_array **)v138,
    v71,
    v139,
    v140,
    v141,
    v142,
    v143);
  if ( !v131 )
    goto LABEL_31;
  v144 = ChainableActionBase__Final((ChainableActionBase_o *)v131, v133, 0LL);
  if ( !v144 )
    goto LABEL_31;
  ChainableActionBase__Execute(v144, 0LL);
}


void __fastcall ClassBoardResourceCatalogAssetBundle__ReleaseAll(
        ClassBoardResourceCatalogAssetBundle_o *this,
        const MethodInfo *method)
{
  AssetStorageLoadWrapper_o *assetStorageLoadWrapper; // x0

  assetStorageLoadWrapper = this->fields.assetStorageLoadWrapper;
  if ( !assetStorageLoadWrapper )
    sub_B170D4();
  AssetStorageLoadWrapper__ReleaseAll(assetStorageLoadWrapper, 0LL);
}


void __fastcall ClassBoardResourceCatalogAssetBundle__ReloadBoardUIAtlas(
        ClassBoardResourceCatalogAssetBundle_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x20
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  __int64 v27; // x4
  AtlasManagerUnit_o *boardUiAtlasManagerUnit; // x0
  AssetStorageLoadWrapper_o *assetStorageLoadWrapper; // x22
  AtlasManagerUnit_o *v30; // x23
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  AtlasManagerUnit_o *v37; // x19
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x3
  __int64 v41; // x4
  System_Action_o *v42; // x21

  if ( (byte_40FB9AE & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, callback);
    sub_B16FFC(&AtlasManagerUnit_TypeInfo, v7);
    sub_B16FFC(&Method_ClassBoardResourceCatalogAssetBundle___c__DisplayClass35_0__ReloadBoardUIAtlas_b__0__, v8);
    sub_B16FFC(&ClassBoardResourceCatalogAssetBundle___c__DisplayClass35_0_TypeInfo, v9);
    sub_B16FFC(&StringLiteral_3982/*"ClassBoard/UI/DownloadClassBoardUIAtlas"*/, v10);
    byte_40FB9AE = 1;
  }
  v11 = sub_B170CC(ClassBoardResourceCatalogAssetBundle___c__DisplayClass35_0_TypeInfo, callback, method, v3, v4);
  ClassBoardResourceCatalogAssetBundle___c__DisplayClass35_0___ctor(
    (ClassBoardResourceCatalogAssetBundle___c__DisplayClass35_0_o *)v11,
    0LL);
  if ( !v11 )
    goto LABEL_8;
  *(_QWORD *)(v11 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v11 + 16), (System_Int32_array **)this, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v11 + 24) = callback;
  sub_B16F98((BattleServantConfConponent_o *)(v11 + 24), (System_Int32_array **)callback, v18, v19, v20, v21, v22, v23);
  boardUiAtlasManagerUnit = this->fields.boardUiAtlasManagerUnit;
  if ( boardUiAtlasManagerUnit )
    AtlasManagerUnit__Release(boardUiAtlasManagerUnit, 0LL);
  assetStorageLoadWrapper = this->fields.assetStorageLoadWrapper;
  v30 = (AtlasManagerUnit_o *)sub_B170CC(AtlasManagerUnit_TypeInfo, v24, v25, v26, v27);
  AtlasManagerUnit___ctor(v30, (System_String_o *)StringLiteral_3982/*"ClassBoard/UI/DownloadClassBoardUIAtlas"*/, assetStorageLoadWrapper, 0LL);
  this->fields.boardUiAtlasManagerUnit = v30;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.boardUiAtlasManagerUnit,
    (System_Int32_array **)v30,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
  v37 = this->fields.boardUiAtlasManagerUnit;
  v42 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v38, v39, v40, v41);
  System_Action___ctor(
    v42,
    (Il2CppObject *)v11,
    Method_ClassBoardResourceCatalogAssetBundle___c__DisplayClass35_0__ReloadBoardUIAtlas_b__0__,
    0LL);
  if ( !v37 )
LABEL_8:
    sub_B170D4();
  AtlasManagerUnit__Load(v37, v42, 1, 0LL);
}


void __fastcall ClassBoardResourceCatalogAssetBundle__SetSpriteOfUiAtlas(
        ClassBoardResourceCatalogAssetBundle_o *this,
        UISprite_o *sprite,
        System_String_o *spriteName,
        const MethodInfo *method)
{
  AtlasManagerUnit_o *boardUiAtlasManagerUnit; // x0

  boardUiAtlasManagerUnit = this->fields.boardUiAtlasManagerUnit;
  if ( !boardUiAtlasManagerUnit )
    sub_B170D4();
  AtlasManagerUnit__SetUI(boardUiAtlasManagerUnit, sprite, spriteName, 0LL);
}


void __fastcall ClassBoardResourceCatalogAssetBundle___LoadSystemAsset_b__32_0(
        ClassBoardResourceCatalogAssetBundle_o *this,
        System_Action_o *f,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x21
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  AssetLoader_LoadEndDataHandler_o *v27; // x20
  const MethodInfo *v28; // x3

  if ( (byte_40FB9B3 & 1) == 0 )
  {
    sub_B16FFC(&AssetLoader_LoadEndDataHandler_TypeInfo, f);
    sub_B16FFC(&Method_ClassBoardResourceCatalogAssetBundle___c__DisplayClass32_0__LoadSystemAsset_b__6__, v7);
    sub_B16FFC(&ClassBoardResourceCatalogAssetBundle___c__DisplayClass32_0_TypeInfo, v8);
    sub_B16FFC(&StringLiteral_3979/*"ClassBoard/Main"*/, v9);
    byte_40FB9B3 = 1;
  }
  v10 = sub_B170CC(ClassBoardResourceCatalogAssetBundle___c__DisplayClass32_0_TypeInfo, f, method, v3, v4);
  ClassBoardResourceCatalogAssetBundle___c__DisplayClass32_0___ctor(
    (ClassBoardResourceCatalogAssetBundle___c__DisplayClass32_0_o *)v10,
    0LL);
  if ( !v10 )
    sub_B170D4();
  *(_QWORD *)(v10 + 24) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v10 + 24), (System_Int32_array **)this, v11, v12, v13, v14, v15, v16);
  *(_QWORD *)(v10 + 16) = f;
  sub_B16F98((BattleServantConfConponent_o *)(v10 + 16), (System_Int32_array **)f, v17, v18, v19, v20, v21, v22);
  v27 = (AssetLoader_LoadEndDataHandler_o *)sub_B170CC(AssetLoader_LoadEndDataHandler_TypeInfo, v23, v24, v25, v26);
  AssetLoader_LoadEndDataHandler___ctor(
    v27,
    (Il2CppObject *)v10,
    Method_ClassBoardResourceCatalogAssetBundle___c__DisplayClass32_0__LoadSystemAsset_b__6__,
    0LL);
  ClassBoardResourceCatalogAssetBundle__LoadAssetStorage(this, (System_String_o *)StringLiteral_3979/*"ClassBoard/Main"*/, v27, v28);
}


void __fastcall ClassBoardResourceCatalogAssetBundle___LoadSystemAsset_b__32_1(
        ClassBoardResourceCatalogAssetBundle_o *this,
        System_Action_o *f,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x21
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  AssetLoader_LoadEndDataHandler_o *v27; // x20
  const MethodInfo *v28; // x3

  if ( (byte_40FB9B4 & 1) == 0 )
  {
    sub_B16FFC(&AssetLoader_LoadEndDataHandler_TypeInfo, f);
    sub_B16FFC(&Method_ClassBoardResourceCatalogAssetBundle___c__DisplayClass32_1__LoadSystemAsset_b__7__, v7);
    sub_B16FFC(&ClassBoardResourceCatalogAssetBundle___c__DisplayClass32_1_TypeInfo, v8);
    sub_B16FFC(&StringLiteral_3966/*"ClassBoard/Bg"*/, v9);
    byte_40FB9B4 = 1;
  }
  v10 = sub_B170CC(ClassBoardResourceCatalogAssetBundle___c__DisplayClass32_1_TypeInfo, f, method, v3, v4);
  ClassBoardResourceCatalogAssetBundle___c__DisplayClass32_1___ctor(
    (ClassBoardResourceCatalogAssetBundle___c__DisplayClass32_1_o *)v10,
    0LL);
  if ( !v10 )
    sub_B170D4();
  *(_QWORD *)(v10 + 24) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v10 + 24), (System_Int32_array **)this, v11, v12, v13, v14, v15, v16);
  *(_QWORD *)(v10 + 16) = f;
  sub_B16F98((BattleServantConfConponent_o *)(v10 + 16), (System_Int32_array **)f, v17, v18, v19, v20, v21, v22);
  v27 = (AssetLoader_LoadEndDataHandler_o *)sub_B170CC(AssetLoader_LoadEndDataHandler_TypeInfo, v23, v24, v25, v26);
  AssetLoader_LoadEndDataHandler___ctor(
    v27,
    (Il2CppObject *)v10,
    Method_ClassBoardResourceCatalogAssetBundle___c__DisplayClass32_1__LoadSystemAsset_b__7__,
    0LL);
  ClassBoardResourceCatalogAssetBundle__LoadAssetStorage(this, (System_String_o *)StringLiteral_3966/*"ClassBoard/Bg"*/, v27, v28);
}


void __fastcall ClassBoardResourceCatalogAssetBundle___LoadSystemAsset_b__32_2(
        ClassBoardResourceCatalogAssetBundle_o *this,
        System_Action_o *f,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x21
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  AssetLoader_LoadEndDataHandler_o *v27; // x20
  const MethodInfo *v28; // x3

  if ( (byte_40FB9B5 & 1) == 0 )
  {
    sub_B16FFC(&AssetLoader_LoadEndDataHandler_TypeInfo, f);
    sub_B16FFC(&Method_ClassBoardResourceCatalogAssetBundle___c__DisplayClass32_2__LoadSystemAsset_b__8__, v7);
    sub_B16FFC(&ClassBoardResourceCatalogAssetBundle___c__DisplayClass32_2_TypeInfo, v8);
    sub_B16FFC(&StringLiteral_3980/*"ClassBoard/Select"*/, v9);
    byte_40FB9B5 = 1;
  }
  v10 = sub_B170CC(ClassBoardResourceCatalogAssetBundle___c__DisplayClass32_2_TypeInfo, f, method, v3, v4);
  ClassBoardResourceCatalogAssetBundle___c__DisplayClass32_2___ctor(
    (ClassBoardResourceCatalogAssetBundle___c__DisplayClass32_2_o *)v10,
    0LL);
  if ( !v10 )
    sub_B170D4();
  *(_QWORD *)(v10 + 24) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v10 + 24), (System_Int32_array **)this, v11, v12, v13, v14, v15, v16);
  *(_QWORD *)(v10 + 16) = f;
  sub_B16F98((BattleServantConfConponent_o *)(v10 + 16), (System_Int32_array **)f, v17, v18, v19, v20, v21, v22);
  v27 = (AssetLoader_LoadEndDataHandler_o *)sub_B170CC(AssetLoader_LoadEndDataHandler_TypeInfo, v23, v24, v25, v26);
  AssetLoader_LoadEndDataHandler___ctor(
    v27,
    (Il2CppObject *)v10,
    Method_ClassBoardResourceCatalogAssetBundle___c__DisplayClass32_2__LoadSystemAsset_b__8__,
    0LL);
  ClassBoardResourceCatalogAssetBundle__LoadAssetStorage(this, (System_String_o *)StringLiteral_3980/*"ClassBoard/Select"*/, v27, v28);
}


void __fastcall ClassBoardResourceCatalogAssetBundle___LoadSystemAsset_b__32_3(
        ClassBoardResourceCatalogAssetBundle_o *this,
        System_Action_o *f,
        const MethodInfo *method)
{
  AtlasManagerUnit_o *boardUiAtlasManagerUnit; // x0

  boardUiAtlasManagerUnit = this->fields.boardUiAtlasManagerUnit;
  if ( !boardUiAtlasManagerUnit )
    sub_B170D4();
  AtlasManagerUnit__Load(boardUiAtlasManagerUnit, f, 3, 0LL);
}


void __fastcall ClassBoardResourceCatalogAssetBundle___LoadSystemAsset_b__32_4(
        ClassBoardResourceCatalogAssetBundle_o *this,
        System_Action_o *f,
        const MethodInfo *method)
{
  AtlasManagerUnit_o *classUiAtlasManagerUnit; // x0

  classUiAtlasManagerUnit = this->fields.classUiAtlasManagerUnit;
  if ( !classUiAtlasManagerUnit )
    sub_B170D4();
  AtlasManagerUnit__Load(classUiAtlasManagerUnit, f, 3, 0LL);
}


void __fastcall ClassBoardResourceCatalogAssetBundle___LoadSystemAsset_b__32_5(
        ClassBoardResourceCatalogAssetBundle_o *this,
        System_Action_o *f,
        const MethodInfo *method)
{
  AtlasManagerUnit_o *iconAtlasManagerUnit; // x0

  iconAtlasManagerUnit = this->fields.iconAtlasManagerUnit;
  if ( !iconAtlasManagerUnit )
    sub_B170D4();
  AtlasManagerUnit__Load(iconAtlasManagerUnit, f, 3, 0LL);
}


ClassBoardResourceContents_o *__fastcall ClassBoardResourceCatalogAssetBundle__get_Contents(
        ClassBoardResourceCatalogAssetBundle_o *this,
        const MethodInfo *method)
{
  return this->fields._Contents_k__BackingField;
}


void __fastcall ClassBoardResourceCatalogAssetBundle___c__DisplayClass32_0___ctor(
        ClassBoardResourceCatalogAssetBundle___c__DisplayClass32_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ClassBoardResourceCatalogAssetBundle___c__DisplayClass32_0___LoadSystemAsset_b__6(
        ClassBoardResourceCatalogAssetBundle___c__DisplayClass32_0_o *this,
        AssetData_o *asset,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct ClassBoardResourceCatalogAssetBundle_o *_4__this; // x0
  System_Action_o *f; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (_4__this->fields.mainAssetData = asset,
        sub_B16F98(
          (BattleServantConfConponent_o *)&_4__this->fields.mainAssetData,
          (System_Int32_array **)asset,
          (System_String_array **)method,
          v3,
          v4,
          v5,
          v6,
          v7),
        (f = this->fields.f) == 0LL) )
  {
    sub_B170D4();
  }
  System_Action__Invoke(f, 0LL);
}


void __fastcall ClassBoardResourceCatalogAssetBundle___c__DisplayClass32_1___ctor(
        ClassBoardResourceCatalogAssetBundle___c__DisplayClass32_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ClassBoardResourceCatalogAssetBundle___c__DisplayClass32_1___LoadSystemAsset_b__7(
        ClassBoardResourceCatalogAssetBundle___c__DisplayClass32_1_o *this,
        AssetData_o *asset,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct ClassBoardResourceCatalogAssetBundle_o *_4__this; // x0
  System_Action_o *f; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (_4__this->fields.modelAssetData = asset,
        sub_B16F98(
          (BattleServantConfConponent_o *)&_4__this->fields.modelAssetData,
          (System_Int32_array **)asset,
          (System_String_array **)method,
          v3,
          v4,
          v5,
          v6,
          v7),
        (f = this->fields.f) == 0LL) )
  {
    sub_B170D4();
  }
  System_Action__Invoke(f, 0LL);
}


void __fastcall ClassBoardResourceCatalogAssetBundle___c__DisplayClass32_2___ctor(
        ClassBoardResourceCatalogAssetBundle___c__DisplayClass32_2_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ClassBoardResourceCatalogAssetBundle___c__DisplayClass32_2___LoadSystemAsset_b__8(
        ClassBoardResourceCatalogAssetBundle___c__DisplayClass32_2_o *this,
        AssetData_o *asset,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct ClassBoardResourceCatalogAssetBundle_o *_4__this; // x0
  System_Action_o *f; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (_4__this->fields.boardSelectViewAssetData = asset,
        sub_B16F98(
          (BattleServantConfConponent_o *)&_4__this->fields.boardSelectViewAssetData,
          (System_Int32_array **)asset,
          (System_String_array **)method,
          v3,
          v4,
          v5,
          v6,
          v7),
        (f = this->fields.f) == 0LL) )
  {
    sub_B170D4();
  }
  System_Action__Invoke(f, 0LL);
}


void __fastcall ClassBoardResourceCatalogAssetBundle___c__DisplayClass35_0___ctor(
        ClassBoardResourceCatalogAssetBundle___c__DisplayClass35_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ClassBoardResourceCatalogAssetBundle___c__DisplayClass35_0___ReloadBoardUIAtlas_b__0(
        ClassBoardResourceCatalogAssetBundle___c__DisplayClass35_0_o *this,
        const MethodInfo *method)
{
  struct ClassBoardResourceCatalogAssetBundle_o *_4__this; // x8
  ClassBoardResourceContents_o *Contents_k__BackingField; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this || (Contents_k__BackingField = _4__this->fields._Contents_k__BackingField) == 0LL )
    sub_B170D4();
  ClassBoardResourceContents__SetBoardUIAtlas(Contents_k__BackingField, _4__this->fields.boardUiAtlasManagerUnit, 0LL);
  ActionExtensions__Call(this->fields.callback, 0LL);
}