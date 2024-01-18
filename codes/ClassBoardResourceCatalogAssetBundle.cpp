void __fastcall ClassBoardResourceCatalogAssetBundle___ctor(
        ClassBoardResourceCatalogAssetBundle_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *v4; // x20
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  AssetStorageLoadWrapper_o *v11; // x20
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7

  if ( (byte_4189531 & 1) == 0 )
  {
    sub_B2C35C(&AssetStorageLoadWrapper_TypeInfo, method);
    sub_B2C35C(&ClassBoardResourceContents_TypeInfo, v3);
    byte_4189531 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v4 = (Il2CppObject *)sub_B2C42C(ClassBoardResourceContents_TypeInfo);
  System_Object___ctor(v4, 0LL);
  this->fields._Contents_k__BackingField = (struct ClassBoardResourceContents_o *)v4;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields._Contents_k__BackingField,
    (System_Int32_array **)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  v11 = (AssetStorageLoadWrapper_o *)sub_B2C42C(AssetStorageLoadWrapper_TypeInfo);
  AssetStorageLoadWrapper___ctor(v11, 0LL);
  this->fields.assetStorageLoadWrapper = v11;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v11, v12, v13, v14, v15, v16, v17);
}


System_String_o *__fastcall ClassBoardResourceCatalogAssetBundle__GetIconAtlasPath(
        ClassBoardResourceCatalogAssetBundle_o *this,
        const MethodInfo *method)
{
  if ( (byte_4189538 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_3995/*"ClassBoard/Icon/DownloadClassBoardIconAtlas"*/, method);
    byte_4189538 = 1;
  }
  return (System_String_o *)StringLiteral_3995/*"ClassBoard/Icon/DownloadClassBoardIconAtlas"*/;
}


Il2CppObject *__fastcall ClassBoardResourceCatalogAssetBundle__GetObject_object_(
        ClassBoardResourceCatalogAssetBundle_o *this,
        AssetData_o *assetData,
        System_String_o *name,
        const MethodInfo_172C88C *method)
{
  __int64 v7; // x1
  UnityEngine_Object_o *Object_WarBoardWaitTimeSetting; // x20

  if ( (byte_4187268 & 1) == 0 )
  {
    sub_B2C35C(&Method_AssetData_GetObject_GameObject____67377624, assetData);
    this = (ClassBoardResourceCatalogAssetBundle_o *)sub_B2C35C(&UnityEngine_Object_TypeInfo, v7);
    byte_4187268 = 1;
  }
  if ( !assetData )
    goto LABEL_11;
  Object_WarBoardWaitTimeSetting = (UnityEngine_Object_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                             assetData,
                                                             name,
                                                             (const MethodInfo_1720344 *)Method_AssetData_GetObject_GameObject____67377624);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (ClassBoardResourceCatalogAssetBundle_o *)UnityEngine_Object__op_Equality(
                                                     Object_WarBoardWaitTimeSetting,
                                                     0LL,
                                                     0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
    return 0LL;
  if ( !Object_WarBoardWaitTimeSetting )
LABEL_11:
    sub_B2C434(this, assetData);
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
  if ( (byte_4189536 & 1) == 0 )
  {
    sub_B2C35C(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardBlank___, *(_QWORD *)&assetId);
    sub_B2C35C(&StringLiteral_4001/*"ClassBoardBlank"*/, v4);
    byte_4189536 = 1;
  }
  mainAssetData = this->fields.mainAssetData;
  v6 = System_Int32__ToString((int32_t)&v9, 0LL);
  v7 = System_String__Concat_44305532((System_String_o *)StringLiteral_4001/*"ClassBoardBlank"*/, v6, 0LL);
  return (ClassBoardBlank_o *)ClassBoardResourceCatalogAssetBundle__GetObject_object_(
                                this,
                                mainAssetData,
                                v7,
                                (const MethodInfo_172C88C *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardBlank___);
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
  if ( (byte_4189537 & 1) == 0 )
  {
    sub_B2C35C(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardLock___, *(_QWORD *)&assetId);
    sub_B2C35C(&StringLiteral_4004/*"ClassBoardLock"*/, v4);
    byte_4189537 = 1;
  }
  mainAssetData = this->fields.mainAssetData;
  v6 = System_Int32__ToString((int32_t)&v9, 0LL);
  v7 = System_String__Concat_44305532((System_String_o *)StringLiteral_4004/*"ClassBoardLock"*/, v6, 0LL);
  return (ClassBoardLock_o *)ClassBoardResourceCatalogAssetBundle__GetObject_object_(
                               this,
                               mainAssetData,
                               v7,
                               (const MethodInfo_172C88C *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardLock___);
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
  if ( (byte_4189535 & 1) == 0 )
  {
    sub_B2C35C(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardSquare___, *(_QWORD *)&assetId);
    sub_B2C35C(&StringLiteral_4010/*"ClassBoardSquare"*/, v4);
    byte_4189535 = 1;
  }
  mainAssetData = this->fields.mainAssetData;
  v6 = System_Int32__ToString((int32_t)&v9, 0LL);
  v7 = System_String__Concat_44305532((System_String_o *)StringLiteral_4010/*"ClassBoardSquare"*/, v6, 0LL);
  return (ClassBoardSquare_o *)ClassBoardResourceCatalogAssetBundle__GetObject_object_(
                                 this,
                                 mainAssetData,
                                 v7,
                                 (const MethodInfo_172C88C *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardSquare___);
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
  assetStorageLoadWrapper = (AssetStorageLoadWrapper_o *)AssetStorageLoadWrapper__LoadAssetStorage(
                                                           assetStorageLoadWrapper,
                                                           assetBundlePath,
                                                           loadCallback,
                                                           3,
                                                           0LL);
  if ( ((unsigned __int8)assetStorageLoadWrapper & 1) != 0 )
    return;
  if ( !loadCallback )
LABEL_5:
    sub_B2C434(assetStorageLoadWrapper, assetBundlePath);
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
  char *Object_WarBoardWaitTimeSetting; // x0
  __int64 v34; // x1
  System_Int32_array **v35; // x28
  System_Int32_array **v36; // x20
  const MethodInfo *v37; // x5
  System_Int32_array **v38; // x21
  const MethodInfo *v39; // x6
  const MethodInfo *v40; // x5
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  ClassBoardDisableOpenDialog_o *classBoardDisableOpenDialog; // [xsp+0h] [xbp-70h]
  ClassBoardLock_o *lockAsset; // [xsp+8h] [xbp-68h]
  Il2CppObject *v61; // [xsp+10h] [xbp-60h]
  Il2CppObject *Object_object; // [xsp+18h] [xbp-58h]

  if ( (byte_4189533 & 1) == 0 )
  {
    sub_B2C35C(&Method_AssetData_GetObject_GameObject____67377624, method);
    sub_B2C35C(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardBackground___, v3);
    sub_B2C35C(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardBlank___, v4);
    sub_B2C35C(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardDisableOpenDialog___, v5);
    sub_B2C35C(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardLine___, v6);
    sub_B2C35C(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardLockOpenConfirmDialog___, v7);
    sub_B2C35C(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardLockReleaseConditionDialog___, v8);
    sub_B2C35C(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardLock___, v9);
    sub_B2C35C(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardSquareDetailDialog___, v10);
    sub_B2C35C(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardSquareOpenConfirmDialog___, v11);
    sub_B2C35C(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardSquare___, v12);
    sub_B2C35C(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardUIController___, v13);
    sub_B2C35C(&StringLiteral_4000/*"ClassBoardBg"*/, v14);
    sub_B2C35C(&StringLiteral_4006/*"ClassBoardLockReleaseConditionDialog"*/, v15);
    sub_B2C35C(&StringLiteral_4003/*"ClassBoardLine"*/, v16);
    sub_B2C35C(&StringLiteral_4011/*"ClassBoardSquareDetailDialog"*/, v17);
    sub_B2C35C(&StringLiteral_4004/*"ClassBoardLock"*/, v18);
    sub_B2C35C(&StringLiteral_4009/*"ClassBoardSelectView"*/, v19);
    sub_B2C35C(&StringLiteral_6775/*"ForwardIconAnimObject"*/, v20);
    sub_B2C35C(&StringLiteral_4001/*"ClassBoardBlank"*/, v21);
    sub_B2C35C(&StringLiteral_4002/*"ClassBoardDisableOpenDialog"*/, v22);
    sub_B2C35C(&StringLiteral_4005/*"ClassBoardLockOpenConfirmDialog"*/, v23);
    sub_B2C35C(&StringLiteral_4010/*"ClassBoardSquare"*/, v24);
    sub_B2C35C(&StringLiteral_4012/*"ClassBoardSquareOpenConfirmDialog"*/, v25);
    sub_B2C35C(&StringLiteral_4013/*"ClassBoardUI"*/, v26);
    byte_4189533 = 1;
  }
  Object_object = ClassBoardResourceCatalogAssetBundle__GetObject_object_(
                    this,
                    this->fields.mainAssetData,
                    (System_String_o *)StringLiteral_4010/*"ClassBoardSquare"*/,
                    (const MethodInfo_172C88C *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardSquare___);
  v61 = ClassBoardResourceCatalogAssetBundle__GetObject_object_(
          this,
          this->fields.mainAssetData,
          (System_String_o *)StringLiteral_4003/*"ClassBoardLine"*/,
          (const MethodInfo_172C88C *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardLine___);
  lockAsset = (ClassBoardLock_o *)ClassBoardResourceCatalogAssetBundle__GetObject_object_(
                                    this,
                                    this->fields.mainAssetData,
                                    (System_String_o *)StringLiteral_4004/*"ClassBoardLock"*/,
                                    (const MethodInfo_172C88C *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardLock___);
  v27 = ClassBoardResourceCatalogAssetBundle__GetObject_object_(
          this,
          this->fields.mainAssetData,
          (System_String_o *)StringLiteral_4001/*"ClassBoardBlank"*/,
          (const MethodInfo_172C88C *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardBlank___);
  classBoardDisableOpenDialog = (ClassBoardDisableOpenDialog_o *)ClassBoardResourceCatalogAssetBundle__GetObject_object_(
                                                                   this,
                                                                   this->fields.mainAssetData,
                                                                   (System_String_o *)StringLiteral_4002/*"ClassBoardDisableOpenDialog"*/,
                                                                   (const MethodInfo_172C88C *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardDisableOpenDialog___);
  v28 = ClassBoardResourceCatalogAssetBundle__GetObject_object_(
          this,
          this->fields.mainAssetData,
          (System_String_o *)StringLiteral_4012/*"ClassBoardSquareOpenConfirmDialog"*/,
          (const MethodInfo_172C88C *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardSquareOpenConfirmDialog___);
  v29 = ClassBoardResourceCatalogAssetBundle__GetObject_object_(
          this,
          this->fields.mainAssetData,
          (System_String_o *)StringLiteral_4005/*"ClassBoardLockOpenConfirmDialog"*/,
          (const MethodInfo_172C88C *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardLockOpenConfirmDialog___);
  v30 = ClassBoardResourceCatalogAssetBundle__GetObject_object_(
          this,
          this->fields.mainAssetData,
          (System_String_o *)StringLiteral_4006/*"ClassBoardLockReleaseConditionDialog"*/,
          (const MethodInfo_172C88C *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardLockReleaseConditionDialog___);
  v31 = ClassBoardResourceCatalogAssetBundle__GetObject_object_(
          this,
          this->fields.mainAssetData,
          (System_String_o *)StringLiteral_4011/*"ClassBoardSquareDetailDialog"*/,
          (const MethodInfo_172C88C *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardSquareDetailDialog___);
  v32 = ClassBoardResourceCatalogAssetBundle__GetObject_object_(
          this,
          this->fields.mainAssetData,
          (System_String_o *)StringLiteral_4013/*"ClassBoardUI"*/,
          (const MethodInfo_172C88C *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardUIController___);
  Object_WarBoardWaitTimeSetting = (char *)ClassBoardResourceCatalogAssetBundle__GetObject_object_(
                                             this,
                                             this->fields.modelAssetData,
                                             (System_String_o *)StringLiteral_4000/*"ClassBoardBg"*/,
                                             (const MethodInfo_172C88C *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardBackground___);
  if ( !this->fields.boardSelectViewAssetData )
    goto LABEL_13;
  v35 = (System_Int32_array **)Object_WarBoardWaitTimeSetting;
  Object_WarBoardWaitTimeSetting = (char *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                             this->fields.boardSelectViewAssetData,
                                             (System_String_o *)StringLiteral_4009/*"ClassBoardSelectView"*/,
                                             (const MethodInfo_1720344 *)Method_AssetData_GetObject_GameObject____67377624);
  if ( !this->fields.boardSelectViewAssetData )
    goto LABEL_13;
  v36 = (System_Int32_array **)Object_WarBoardWaitTimeSetting;
  Object_WarBoardWaitTimeSetting = (char *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                             this->fields.boardSelectViewAssetData,
                                             (System_String_o *)StringLiteral_6775/*"ForwardIconAnimObject"*/,
                                             (const MethodInfo_1720344 *)Method_AssetData_GetObject_GameObject____67377624);
  if ( !this->fields._Contents_k__BackingField )
    goto LABEL_13;
  v38 = (System_Int32_array **)Object_WarBoardWaitTimeSetting;
  ClassBoardResourceContents__SetContents(
    this->fields._Contents_k__BackingField,
    (ClassBoardSquare_o *)Object_object,
    (ClassBoardLine_o *)v61,
    lockAsset,
    (ClassBoardBlank_o *)v27,
    v37);
  Object_WarBoardWaitTimeSetting = (char *)this->fields._Contents_k__BackingField;
  if ( !Object_WarBoardWaitTimeSetting )
    goto LABEL_13;
  ClassBoardResourceContents__SetContentsDialog(
    (ClassBoardResourceContents_o *)Object_WarBoardWaitTimeSetting,
    classBoardDisableOpenDialog,
    (ClassBoardSquareOpenConfirmDialog_o *)v28,
    (ClassBoardLockOpenConfirmDialog_o *)v29,
    (ClassBoardLockReleaseConditionDialog_o *)v30,
    (ClassBoardSquareDetailDialog_o *)v31,
    v39);
  Object_WarBoardWaitTimeSetting = (char *)this->fields._Contents_k__BackingField;
  if ( !Object_WarBoardWaitTimeSetting )
    goto LABEL_13;
  ClassBoardResourceContents__SetContentsUI(
    (ClassBoardResourceContents_o *)Object_WarBoardWaitTimeSetting,
    (ClassBoardUIController_o *)v32,
    this->fields.boardUiAtlasManagerUnit,
    this->fields.iconAtlasManagerUnit,
    this->fields.classUiAtlasManagerUnit,
    v40);
  Object_WarBoardWaitTimeSetting = (char *)this->fields._Contents_k__BackingField;
  if ( !Object_WarBoardWaitTimeSetting )
    goto LABEL_13;
  *((_QWORD *)Object_WarBoardWaitTimeSetting + 12) = v35;
  sub_B2C2F8((BattleServantConfConponent_o *)(Object_WarBoardWaitTimeSetting + 96), v35, v41, v42, v43, v44, v45, v46);
  Object_WarBoardWaitTimeSetting = (char *)this->fields._Contents_k__BackingField;
  if ( !Object_WarBoardWaitTimeSetting
    || (*((_QWORD *)Object_WarBoardWaitTimeSetting + 13) = v36,
        sub_B2C2F8(
          (BattleServantConfConponent_o *)(Object_WarBoardWaitTimeSetting + 104),
          v36,
          v47,
          v48,
          v49,
          v50,
          v51,
          v52),
        (Object_WarBoardWaitTimeSetting = (char *)this->fields._Contents_k__BackingField) == 0LL)
    || (*((_QWORD *)Object_WarBoardWaitTimeSetting + 14) = v38,
        sub_B2C2F8(
          (BattleServantConfConponent_o *)(Object_WarBoardWaitTimeSetting + 112),
          v38,
          v53,
          v54,
          v55,
          v56,
          v57,
          v58),
        (Object_WarBoardWaitTimeSetting = (char *)this->fields.loadEndCallback) == 0LL) )
  {
LABEL_13:
    sub_B2C434(Object_WarBoardWaitTimeSetting, v34);
  }
  System_Action__Invoke((System_Action_o *)Object_WarBoardWaitTimeSetting, 0LL);
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
  AtlasManagerUnit_o *v27; // x21
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  AssetStorageLoadWrapper_o *v34; // x20
  AtlasManagerUnit_o *v35; // x21
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  AssetStorageLoadWrapper_o *v42; // x20
  AtlasManagerUnit_o *v43; // x21
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  System_Action_Action__array *v50; // x20
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v51; // x21
  ChainableActionBase_o *v52; // x0
  __int64 v53; // x1
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v60; // x21
  System_String_array **v61; // x2
  System_String_array **v62; // x3
  System_Boolean_array **v63; // x4
  System_Int32_array **v64; // x5
  System_Int32_array *v65; // x6
  System_Int32_array *v66; // x7
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v67; // x21
  System_String_array **v68; // x2
  System_String_array **v69; // x3
  System_Boolean_array **v70; // x4
  System_Int32_array **v71; // x5
  System_Int32_array *v72; // x6
  System_Int32_array *v73; // x7
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v74; // x21
  System_String_array **v75; // x2
  System_String_array **v76; // x3
  System_Boolean_array **v77; // x4
  System_Int32_array **v78; // x5
  System_Int32_array *v79; // x6
  System_Int32_array *v80; // x7
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v81; // x21
  System_String_array **v82; // x2
  System_String_array **v83; // x3
  System_Boolean_array **v84; // x4
  System_Int32_array **v85; // x5
  System_Int32_array *v86; // x6
  System_Int32_array *v87; // x7
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v88; // x21
  System_String_array **v89; // x2
  System_String_array **v90; // x3
  System_Boolean_array **v91; // x4
  System_Int32_array **v92; // x5
  System_Int32_array *v93; // x6
  System_Int32_array *v94; // x7
  ChainableActionParallel_o *v95; // x21
  System_Action_array *v96; // x20
  System_Action_o *v97; // x22
  System_String_array **v98; // x2
  System_String_array **v99; // x3
  System_Boolean_array **v100; // x4
  System_Int32_array **v101; // x5
  System_Int32_array *v102; // x6
  System_Int32_array *v103; // x7
  __int64 v104; // x0
  __int64 v105; // x0

  if ( (byte_4189532 & 1) == 0 )
  {
    sub_B2C35C(&System_Action___TypeInfo, callback);
    sub_B2C35C(&System_Action_Action____TypeInfo, v10);
    sub_B2C35C(&Method_System_Action_Action___ctor__, v11);
    sub_B2C35C(&System_Action_Action__TypeInfo, v12);
    sub_B2C35C(&System_Action_TypeInfo, v13);
    sub_B2C35C(&AtlasManagerUnit_TypeInfo, v14);
    sub_B2C35C(&ChainableActionParallel_TypeInfo, v15);
    sub_B2C35C(&Method_ClassBoardResourceCatalogAssetBundle_LoadEnd__, v16);
    sub_B2C35C(&Method_ClassBoardResourceCatalogAssetBundle__LoadSystemAsset_b__32_0__, v17);
    sub_B2C35C(&Method_ClassBoardResourceCatalogAssetBundle__LoadSystemAsset_b__32_1__, v18);
    sub_B2C35C(&Method_ClassBoardResourceCatalogAssetBundle__LoadSystemAsset_b__32_2__, v19);
    sub_B2C35C(&Method_ClassBoardResourceCatalogAssetBundle__LoadSystemAsset_b__32_3__, v20);
    sub_B2C35C(&Method_ClassBoardResourceCatalogAssetBundle__LoadSystemAsset_b__32_4__, v21);
    sub_B2C35C(&Method_ClassBoardResourceCatalogAssetBundle__LoadSystemAsset_b__32_5__, v22);
    sub_B2C35C(&StringLiteral_3999/*"ClassBoard/UI/DownloadClassBoardUIAtlas"*/, v23);
    sub_B2C35C(&StringLiteral_3998/*"ClassBoard/UI/DownloadClassBoardClassUIAtlas"*/, v24);
    sub_B2C35C(&StringLiteral_3995/*"ClassBoard/Icon/DownloadClassBoardIconAtlas"*/, v25);
    byte_4189532 = 1;
  }
  this->fields.loadEndCallback = callback;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.loadEndCallback,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  assetStorageLoadWrapper = this->fields.assetStorageLoadWrapper;
  v27 = (AtlasManagerUnit_o *)sub_B2C42C(AtlasManagerUnit_TypeInfo);
  AtlasManagerUnit___ctor(v27, (System_String_o *)StringLiteral_3999/*"ClassBoard/UI/DownloadClassBoardUIAtlas"*/, assetStorageLoadWrapper, 0LL);
  this->fields.boardUiAtlasManagerUnit = v27;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.boardUiAtlasManagerUnit,
    (System_Int32_array **)v27,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
  v34 = this->fields.assetStorageLoadWrapper;
  v35 = (AtlasManagerUnit_o *)sub_B2C42C(AtlasManagerUnit_TypeInfo);
  AtlasManagerUnit___ctor(v35, (System_String_o *)StringLiteral_3998/*"ClassBoard/UI/DownloadClassBoardClassUIAtlas"*/, v34, 0LL);
  this->fields.classUiAtlasManagerUnit = v35;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.classUiAtlasManagerUnit,
    (System_Int32_array **)v35,
    v36,
    v37,
    v38,
    v39,
    v40,
    v41);
  v42 = this->fields.assetStorageLoadWrapper;
  v43 = (AtlasManagerUnit_o *)sub_B2C42C(AtlasManagerUnit_TypeInfo);
  AtlasManagerUnit___ctor(v43, (System_String_o *)StringLiteral_3995/*"ClassBoard/Icon/DownloadClassBoardIconAtlas"*/, v42, 0LL);
  this->fields.iconAtlasManagerUnit = v43;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.iconAtlasManagerUnit,
    (System_Int32_array **)v43,
    v44,
    v45,
    v46,
    v47,
    v48,
    v49);
  v50 = (System_Action_Action__array *)sub_B2C374(System_Action_Action____TypeInfo, 6LL);
  v51 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B2C42C(System_Action_Action__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v51,
    (Il2CppObject *)this,
    Method_ClassBoardResourceCatalogAssetBundle__LoadSystemAsset_b__32_0__,
    (const MethodInfo_24BBAD8 *)Method_System_Action_Action___ctor__);
  if ( !v50 )
LABEL_31:
    sub_B2C434(v52, v53);
  if ( v51 )
  {
    v52 = (ChainableActionBase_o *)sub_B2C41C(v51, v50->obj.klass->_1.element_class);
    if ( !v52 )
      goto LABEL_30;
  }
  if ( !v50->max_length )
    goto LABEL_29;
  v50->m_Items[0] = (System_Action_Action__o *)v51;
  sub_B2C2F8((BattleServantConfConponent_o *)v50->m_Items, (System_Int32_array **)v51, v54, v55, v56, v57, v58, v59);
  v60 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B2C42C(System_Action_Action__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v60,
    (Il2CppObject *)this,
    Method_ClassBoardResourceCatalogAssetBundle__LoadSystemAsset_b__32_1__,
    (const MethodInfo_24BBAD8 *)Method_System_Action_Action___ctor__);
  if ( v60 )
  {
    v52 = (ChainableActionBase_o *)sub_B2C41C(v60, v50->obj.klass->_1.element_class);
    if ( !v52 )
      goto LABEL_30;
  }
  if ( v50->max_length <= 1 )
    goto LABEL_29;
  v50->m_Items[1] = (System_Action_Action__o *)v60;
  sub_B2C2F8((BattleServantConfConponent_o *)&v50->m_Items[1], (System_Int32_array **)v60, v61, v62, v63, v64, v65, v66);
  v67 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B2C42C(System_Action_Action__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v67,
    (Il2CppObject *)this,
    Method_ClassBoardResourceCatalogAssetBundle__LoadSystemAsset_b__32_2__,
    (const MethodInfo_24BBAD8 *)Method_System_Action_Action___ctor__);
  if ( v67 )
  {
    v52 = (ChainableActionBase_o *)sub_B2C41C(v67, v50->obj.klass->_1.element_class);
    if ( !v52 )
      goto LABEL_30;
  }
  if ( v50->max_length <= 2 )
    goto LABEL_29;
  v50->m_Items[2] = (System_Action_Action__o *)v67;
  sub_B2C2F8((BattleServantConfConponent_o *)&v50->m_Items[2], (System_Int32_array **)v67, v68, v69, v70, v71, v72, v73);
  v74 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B2C42C(System_Action_Action__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v74,
    (Il2CppObject *)this,
    Method_ClassBoardResourceCatalogAssetBundle__LoadSystemAsset_b__32_3__,
    (const MethodInfo_24BBAD8 *)Method_System_Action_Action___ctor__);
  if ( v74 )
  {
    v52 = (ChainableActionBase_o *)sub_B2C41C(v74, v50->obj.klass->_1.element_class);
    if ( !v52 )
      goto LABEL_30;
  }
  if ( v50->max_length <= 3 )
    goto LABEL_29;
  v50->m_Items[3] = (System_Action_Action__o *)v74;
  sub_B2C2F8((BattleServantConfConponent_o *)&v50->m_Items[3], (System_Int32_array **)v74, v75, v76, v77, v78, v79, v80);
  v81 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B2C42C(System_Action_Action__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v81,
    (Il2CppObject *)this,
    Method_ClassBoardResourceCatalogAssetBundle__LoadSystemAsset_b__32_4__,
    (const MethodInfo_24BBAD8 *)Method_System_Action_Action___ctor__);
  if ( v81 )
  {
    v52 = (ChainableActionBase_o *)sub_B2C41C(v81, v50->obj.klass->_1.element_class);
    if ( !v52 )
      goto LABEL_30;
  }
  if ( v50->max_length <= 4 )
    goto LABEL_29;
  v50->m_Items[4] = (System_Action_Action__o *)v81;
  sub_B2C2F8((BattleServantConfConponent_o *)&v50->m_Items[4], (System_Int32_array **)v81, v82, v83, v84, v85, v86, v87);
  v88 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B2C42C(System_Action_Action__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v88,
    (Il2CppObject *)this,
    Method_ClassBoardResourceCatalogAssetBundle__LoadSystemAsset_b__32_5__,
    (const MethodInfo_24BBAD8 *)Method_System_Action_Action___ctor__);
  if ( v88 )
  {
    v52 = (ChainableActionBase_o *)sub_B2C41C(v88, v50->obj.klass->_1.element_class);
    if ( !v52 )
      goto LABEL_30;
  }
  if ( v50->max_length <= 5 )
    goto LABEL_29;
  v50->m_Items[5] = (System_Action_Action__o *)v88;
  sub_B2C2F8((BattleServantConfConponent_o *)&v50->m_Items[5], (System_Int32_array **)v88, v89, v90, v91, v92, v93, v94);
  v95 = (ChainableActionParallel_o *)sub_B2C42C(ChainableActionParallel_TypeInfo);
  ChainableActionParallel___ctor_29458636(v95, v50, 0LL);
  v96 = (System_Action_array *)sub_B2C374(System_Action___TypeInfo, 1LL);
  v97 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v97, (Il2CppObject *)this, Method_ClassBoardResourceCatalogAssetBundle_LoadEnd__, 0LL);
  if ( !v96 )
    goto LABEL_31;
  if ( v97 )
  {
    v52 = (ChainableActionBase_o *)sub_B2C41C(v97, v96->obj.klass->_1.element_class);
    if ( !v52 )
    {
LABEL_30:
      v105 = sub_B2C454(v52);
      sub_B2C400(v105, 0LL);
    }
  }
  if ( !v96->max_length )
  {
LABEL_29:
    v104 = sub_B2C460(v52);
    sub_B2C400(v104, 0LL);
  }
  v96->m_Items[0] = v97;
  sub_B2C2F8((BattleServantConfConponent_o *)v96->m_Items, (System_Int32_array **)v97, v98, v99, v100, v101, v102, v103);
  if ( !v95 )
    goto LABEL_31;
  v52 = ChainableActionBase__Final((ChainableActionBase_o *)v95, v96, 0LL);
  if ( !v52 )
    goto LABEL_31;
  ChainableActionBase__Execute(v52, 0LL);
}


void __fastcall ClassBoardResourceCatalogAssetBundle__ReleaseAll(
        ClassBoardResourceCatalogAssetBundle_o *this,
        const MethodInfo *method)
{
  AssetStorageLoadWrapper_o *assetStorageLoadWrapper; // x0

  assetStorageLoadWrapper = this->fields.assetStorageLoadWrapper;
  if ( !assetStorageLoadWrapper )
    sub_B2C434(0LL, method);
  AssetStorageLoadWrapper__ReleaseAll(assetStorageLoadWrapper, 0LL);
}


void __fastcall ClassBoardResourceCatalogAssetBundle__ReloadBoardUIAtlas(
        ClassBoardResourceCatalogAssetBundle_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x20
  __int64 v10; // x0
  __int64 v11; // x1
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
  AtlasManagerUnit_o *boardUiAtlasManagerUnit; // x0
  AssetStorageLoadWrapper_o *assetStorageLoadWrapper; // x22
  AtlasManagerUnit_o *v26; // x23
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  AtlasManagerUnit_o *v33; // x19
  System_Action_o *v34; // x21

  if ( (byte_4189534 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, callback);
    sub_B2C35C(&AtlasManagerUnit_TypeInfo, v5);
    sub_B2C35C(&Method_ClassBoardResourceCatalogAssetBundle___c__DisplayClass35_0__ReloadBoardUIAtlas_b__0__, v6);
    sub_B2C35C(&ClassBoardResourceCatalogAssetBundle___c__DisplayClass35_0_TypeInfo, v7);
    sub_B2C35C(&StringLiteral_3999/*"ClassBoard/UI/DownloadClassBoardUIAtlas"*/, v8);
    byte_4189534 = 1;
  }
  v9 = sub_B2C42C(ClassBoardResourceCatalogAssetBundle___c__DisplayClass35_0_TypeInfo);
  ClassBoardResourceCatalogAssetBundle___c__DisplayClass35_0___ctor(
    (ClassBoardResourceCatalogAssetBundle___c__DisplayClass35_0_o *)v9,
    0LL);
  if ( !v9 )
    goto LABEL_8;
  *(_QWORD *)(v9 + 16) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v9 + 16), (System_Int32_array **)this, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v9 + 24) = callback;
  sub_B2C2F8((BattleServantConfConponent_o *)(v9 + 24), (System_Int32_array **)callback, v18, v19, v20, v21, v22, v23);
  boardUiAtlasManagerUnit = this->fields.boardUiAtlasManagerUnit;
  if ( boardUiAtlasManagerUnit )
    AtlasManagerUnit__Release(boardUiAtlasManagerUnit, 0LL);
  assetStorageLoadWrapper = this->fields.assetStorageLoadWrapper;
  v26 = (AtlasManagerUnit_o *)sub_B2C42C(AtlasManagerUnit_TypeInfo);
  AtlasManagerUnit___ctor(v26, (System_String_o *)StringLiteral_3999/*"ClassBoard/UI/DownloadClassBoardUIAtlas"*/, assetStorageLoadWrapper, 0LL);
  this->fields.boardUiAtlasManagerUnit = v26;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.boardUiAtlasManagerUnit,
    (System_Int32_array **)v26,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  v33 = this->fields.boardUiAtlasManagerUnit;
  v34 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(
    v34,
    (Il2CppObject *)v9,
    Method_ClassBoardResourceCatalogAssetBundle___c__DisplayClass35_0__ReloadBoardUIAtlas_b__0__,
    0LL);
  if ( !v33 )
LABEL_8:
    sub_B2C434(v10, v11);
  AtlasManagerUnit__Load(v33, v34, 1, 0LL);
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
    sub_B2C434(0LL, sprite);
  AtlasManagerUnit__SetUI(boardUiAtlasManagerUnit, sprite, spriteName, 0LL);
}


void __fastcall ClassBoardResourceCatalogAssetBundle___LoadSystemAsset_b__32_0(
        ClassBoardResourceCatalogAssetBundle_o *this,
        System_Action_o *f,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1
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
  AssetLoader_LoadEndDataHandler_o *v23; // x20
  const MethodInfo *v24; // x3

  if ( (byte_4189539 & 1) == 0 )
  {
    sub_B2C35C(&AssetLoader_LoadEndDataHandler_TypeInfo, f);
    sub_B2C35C(&Method_ClassBoardResourceCatalogAssetBundle___c__DisplayClass32_0__LoadSystemAsset_b__6__, v5);
    sub_B2C35C(&ClassBoardResourceCatalogAssetBundle___c__DisplayClass32_0_TypeInfo, v6);
    sub_B2C35C(&StringLiteral_3996/*"ClassBoard/Main"*/, v7);
    byte_4189539 = 1;
  }
  v8 = sub_B2C42C(ClassBoardResourceCatalogAssetBundle___c__DisplayClass32_0_TypeInfo);
  ClassBoardResourceCatalogAssetBundle___c__DisplayClass32_0___ctor(
    (ClassBoardResourceCatalogAssetBundle___c__DisplayClass32_0_o *)v8,
    0LL);
  if ( !v8 )
    sub_B2C434(v9, v10);
  *(_QWORD *)(v8 + 24) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v8 + 24), (System_Int32_array **)this, v11, v12, v13, v14, v15, v16);
  *(_QWORD *)(v8 + 16) = f;
  sub_B2C2F8((BattleServantConfConponent_o *)(v8 + 16), (System_Int32_array **)f, v17, v18, v19, v20, v21, v22);
  v23 = (AssetLoader_LoadEndDataHandler_o *)sub_B2C42C(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v23,
    (Il2CppObject *)v8,
    Method_ClassBoardResourceCatalogAssetBundle___c__DisplayClass32_0__LoadSystemAsset_b__6__,
    0LL);
  ClassBoardResourceCatalogAssetBundle__LoadAssetStorage(this, (System_String_o *)StringLiteral_3996/*"ClassBoard/Main"*/, v23, v24);
}


void __fastcall ClassBoardResourceCatalogAssetBundle___LoadSystemAsset_b__32_1(
        ClassBoardResourceCatalogAssetBundle_o *this,
        System_Action_o *f,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1
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
  AssetLoader_LoadEndDataHandler_o *v23; // x20
  const MethodInfo *v24; // x3

  if ( (byte_418953A & 1) == 0 )
  {
    sub_B2C35C(&AssetLoader_LoadEndDataHandler_TypeInfo, f);
    sub_B2C35C(&Method_ClassBoardResourceCatalogAssetBundle___c__DisplayClass32_1__LoadSystemAsset_b__7__, v5);
    sub_B2C35C(&ClassBoardResourceCatalogAssetBundle___c__DisplayClass32_1_TypeInfo, v6);
    sub_B2C35C(&StringLiteral_3983/*"ClassBoard/Bg"*/, v7);
    byte_418953A = 1;
  }
  v8 = sub_B2C42C(ClassBoardResourceCatalogAssetBundle___c__DisplayClass32_1_TypeInfo);
  ClassBoardResourceCatalogAssetBundle___c__DisplayClass32_1___ctor(
    (ClassBoardResourceCatalogAssetBundle___c__DisplayClass32_1_o *)v8,
    0LL);
  if ( !v8 )
    sub_B2C434(v9, v10);
  *(_QWORD *)(v8 + 24) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v8 + 24), (System_Int32_array **)this, v11, v12, v13, v14, v15, v16);
  *(_QWORD *)(v8 + 16) = f;
  sub_B2C2F8((BattleServantConfConponent_o *)(v8 + 16), (System_Int32_array **)f, v17, v18, v19, v20, v21, v22);
  v23 = (AssetLoader_LoadEndDataHandler_o *)sub_B2C42C(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v23,
    (Il2CppObject *)v8,
    Method_ClassBoardResourceCatalogAssetBundle___c__DisplayClass32_1__LoadSystemAsset_b__7__,
    0LL);
  ClassBoardResourceCatalogAssetBundle__LoadAssetStorage(this, (System_String_o *)StringLiteral_3983/*"ClassBoard/Bg"*/, v23, v24);
}


void __fastcall ClassBoardResourceCatalogAssetBundle___LoadSystemAsset_b__32_2(
        ClassBoardResourceCatalogAssetBundle_o *this,
        System_Action_o *f,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1
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
  AssetLoader_LoadEndDataHandler_o *v23; // x20
  const MethodInfo *v24; // x3

  if ( (byte_418953B & 1) == 0 )
  {
    sub_B2C35C(&AssetLoader_LoadEndDataHandler_TypeInfo, f);
    sub_B2C35C(&Method_ClassBoardResourceCatalogAssetBundle___c__DisplayClass32_2__LoadSystemAsset_b__8__, v5);
    sub_B2C35C(&ClassBoardResourceCatalogAssetBundle___c__DisplayClass32_2_TypeInfo, v6);
    sub_B2C35C(&StringLiteral_3997/*"ClassBoard/Select"*/, v7);
    byte_418953B = 1;
  }
  v8 = sub_B2C42C(ClassBoardResourceCatalogAssetBundle___c__DisplayClass32_2_TypeInfo);
  ClassBoardResourceCatalogAssetBundle___c__DisplayClass32_2___ctor(
    (ClassBoardResourceCatalogAssetBundle___c__DisplayClass32_2_o *)v8,
    0LL);
  if ( !v8 )
    sub_B2C434(v9, v10);
  *(_QWORD *)(v8 + 24) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v8 + 24), (System_Int32_array **)this, v11, v12, v13, v14, v15, v16);
  *(_QWORD *)(v8 + 16) = f;
  sub_B2C2F8((BattleServantConfConponent_o *)(v8 + 16), (System_Int32_array **)f, v17, v18, v19, v20, v21, v22);
  v23 = (AssetLoader_LoadEndDataHandler_o *)sub_B2C42C(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v23,
    (Il2CppObject *)v8,
    Method_ClassBoardResourceCatalogAssetBundle___c__DisplayClass32_2__LoadSystemAsset_b__8__,
    0LL);
  ClassBoardResourceCatalogAssetBundle__LoadAssetStorage(this, (System_String_o *)StringLiteral_3997/*"ClassBoard/Select"*/, v23, v24);
}


void __fastcall ClassBoardResourceCatalogAssetBundle___LoadSystemAsset_b__32_3(
        ClassBoardResourceCatalogAssetBundle_o *this,
        System_Action_o *f,
        const MethodInfo *method)
{
  AtlasManagerUnit_o *boardUiAtlasManagerUnit; // x0

  boardUiAtlasManagerUnit = this->fields.boardUiAtlasManagerUnit;
  if ( !boardUiAtlasManagerUnit )
    sub_B2C434(0LL, f);
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
    sub_B2C434(0LL, f);
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
    sub_B2C434(0LL, f);
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
  System_Action_o *_4__this; // x0

  _4__this = (System_Action_o *)this->fields.__4__this;
  if ( !_4__this
    || (_4__this->fields.method_info = (struct System_Reflection_MethodInfo_o *)asset,
        sub_B2C2F8(&_4__this->fields.method_info, asset),
        (_4__this = this->fields.f) == 0LL) )
  {
    sub_B2C434(_4__this, asset);
  }
  System_Action__Invoke(_4__this, 0LL);
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
  System_Action_o *_4__this; // x0

  _4__this = (System_Action_o *)this->fields.__4__this;
  if ( !_4__this
    || (_4__this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)asset,
        sub_B2C2F8(&_4__this->fields.original_method_info, asset),
        (_4__this = this->fields.f) == 0LL) )
  {
    sub_B2C434(_4__this, asset);
  }
  System_Action__Invoke(_4__this, 0LL);
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
  System_Action_o *_4__this; // x0

  _4__this = (System_Action_o *)this->fields.__4__this;
  if ( !_4__this
    || (_4__this->fields.data = (struct System_DelegateData_o *)asset,
        sub_B2C2F8(&_4__this->fields.data, asset),
        (_4__this = this->fields.f) == 0LL) )
  {
    sub_B2C434(_4__this, asset);
  }
  System_Action__Invoke(_4__this, 0LL);
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
  ClassBoardResourceCatalogAssetBundle___c__DisplayClass35_0_o *v3; // x19

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (v3 = this,
        (this = (ClassBoardResourceCatalogAssetBundle___c__DisplayClass35_0_o *)_4__this->fields._Contents_k__BackingField) == 0LL) )
  {
    sub_B2C434(this, method);
  }
  ClassBoardResourceContents__SetBoardUIAtlas(
    (ClassBoardResourceContents_o *)this,
    _4__this->fields.boardUiAtlasManagerUnit,
    0LL);
  ActionExtensions__Call(v3->fields.callback, 0LL);
}