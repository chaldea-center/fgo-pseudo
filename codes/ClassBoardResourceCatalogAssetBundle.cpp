void __fastcall ClassBoardResourceCatalogAssetBundle___ctor(
        ClassBoardResourceCatalogAssetBundle_o *this,
        const MethodInfo *method)
{
  Il2CppObject *v3; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  AssetStorageLoadWrapper_o *v10; // x20
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7

  if ( (byte_4353B3A & 1) == 0 )
  {
    sub_B70694(&AssetStorageLoadWrapper_TypeInfo);
    sub_B70694(&ClassBoardResourceContents_TypeInfo);
    byte_4353B3A = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v3 = (Il2CppObject *)sub_B70764(ClassBoardResourceContents_TypeInfo);
  System_Object___ctor(v3, 0LL);
  this->fields._Contents_k__BackingField = (struct ClassBoardResourceContents_o *)v3;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields._Contents_k__BackingField,
    (System_Int32_array **)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  v10 = (AssetStorageLoadWrapper_o *)sub_B70764(AssetStorageLoadWrapper_TypeInfo);
  AssetStorageLoadWrapper___ctor(v10, 0LL);
  this->fields.assetStorageLoadWrapper = v10;
  sub_B70630((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v10, v11, v12, v13, v14, v15, v16);
}


System_String_o *__fastcall ClassBoardResourceCatalogAssetBundle__GetIconAtlasPath(
        ClassBoardResourceCatalogAssetBundle_o *this,
        const MethodInfo *method)
{
  if ( (byte_4353B41 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_4071/*"ClassBoard/Icon/DownloadClassBoardIconAtlas"*/);
    byte_4353B41 = 1;
  }
  return (System_String_o *)StringLiteral_4071/*"ClassBoard/Icon/DownloadClassBoardIconAtlas"*/;
}


Il2CppObject *__fastcall ClassBoardResourceCatalogAssetBundle__GetObject_object_(
        ClassBoardResourceCatalogAssetBundle_o *this,
        AssetData_o *assetData,
        System_String_o *name,
        const MethodInfo_1BE2CF0 *method)
{
  UnityEngine_Object_o *Object_WarBoardWaitTimeSetting; // x20

  if ( (byte_4353FB9 & 1) == 0 )
  {
    sub_B70694(&Method_AssetData_GetObject_GameObject____69232720);
    this = (ClassBoardResourceCatalogAssetBundle_o *)sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_4353FB9 = 1;
  }
  if ( !assetData )
    goto LABEL_11;
  Object_WarBoardWaitTimeSetting = (UnityEngine_Object_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                             assetData,
                                                             name,
                                                             (const MethodInfo_1BD6720 *)Method_AssetData_GetObject_GameObject____69232720);
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
    sub_B7076C(this, assetData);
  return (Il2CppObject *)((__int64 (__fastcall *)(UnityEngine_Object_o *))method->rgctx_data->_0_UnityEngine_GameObject_GetComponent_T_->methodPointer)(Object_WarBoardWaitTimeSetting);
}


ClassBoardBlank_o *__fastcall ClassBoardResourceCatalogAssetBundle__GetUniqueBlankObject(
        ClassBoardResourceCatalogAssetBundle_o *this,
        int32_t assetId,
        const MethodInfo *method)
{
  AssetData_o *mainAssetData; // x20
  System_String_o *v5; // x0
  System_String_o *v6; // x0
  int32_t v8; // [xsp+Ch] [xbp-14h] BYREF

  v8 = assetId;
  if ( (byte_4353B3F & 1) == 0 )
  {
    sub_B70694(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardBlank___);
    sub_B70694(&StringLiteral_4077/*"ClassBoardBlank"*/);
    byte_4353B3F = 1;
  }
  mainAssetData = this->fields.mainAssetData;
  v5 = System_Int32__ToString((int32_t)&v8, 0LL);
  v6 = System_String__Concat_44758168((System_String_o *)StringLiteral_4077/*"ClassBoardBlank"*/, v5, 0LL);
  return (ClassBoardBlank_o *)ClassBoardResourceCatalogAssetBundle__GetObject_object_(
                                this,
                                mainAssetData,
                                v6,
                                (const MethodInfo_1BE2CF0 *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardBlank___);
}


ClassBoardLock_o *__fastcall ClassBoardResourceCatalogAssetBundle__GetUniqueLockObject(
        ClassBoardResourceCatalogAssetBundle_o *this,
        int32_t assetId,
        const MethodInfo *method)
{
  AssetData_o *mainAssetData; // x20
  System_String_o *v5; // x0
  System_String_o *v6; // x0
  int32_t v8; // [xsp+Ch] [xbp-14h] BYREF

  v8 = assetId;
  if ( (byte_4353B40 & 1) == 0 )
  {
    sub_B70694(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardLock___);
    sub_B70694(&StringLiteral_4080/*"ClassBoardLock"*/);
    byte_4353B40 = 1;
  }
  mainAssetData = this->fields.mainAssetData;
  v5 = System_Int32__ToString((int32_t)&v8, 0LL);
  v6 = System_String__Concat_44758168((System_String_o *)StringLiteral_4080/*"ClassBoardLock"*/, v5, 0LL);
  return (ClassBoardLock_o *)ClassBoardResourceCatalogAssetBundle__GetObject_object_(
                               this,
                               mainAssetData,
                               v6,
                               (const MethodInfo_1BE2CF0 *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardLock___);
}


ClassBoardSquare_o *__fastcall ClassBoardResourceCatalogAssetBundle__GetUniqueSquareObject(
        ClassBoardResourceCatalogAssetBundle_o *this,
        int32_t assetId,
        const MethodInfo *method)
{
  AssetData_o *mainAssetData; // x20
  System_String_o *v5; // x0
  System_String_o *v6; // x0
  int32_t v8; // [xsp+Ch] [xbp-14h] BYREF

  v8 = assetId;
  if ( (byte_4353B3E & 1) == 0 )
  {
    sub_B70694(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardSquare___);
    sub_B70694(&StringLiteral_4086/*"ClassBoardSquare"*/);
    byte_4353B3E = 1;
  }
  mainAssetData = this->fields.mainAssetData;
  v5 = System_Int32__ToString((int32_t)&v8, 0LL);
  v6 = System_String__Concat_44758168((System_String_o *)StringLiteral_4086/*"ClassBoardSquare"*/, v5, 0LL);
  return (ClassBoardSquare_o *)ClassBoardResourceCatalogAssetBundle__GetObject_object_(
                                 this,
                                 mainAssetData,
                                 v6,
                                 (const MethodInfo_1BE2CF0 *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardSquare___);
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
    sub_B7076C(assetStorageLoadWrapper, assetBundlePath);
  AssetLoader_LoadEndDataHandler__Invoke(loadCallback, 0LL, 0LL);
}


void __fastcall ClassBoardResourceCatalogAssetBundle__LoadEnd(
        ClassBoardResourceCatalogAssetBundle_o *this,
        const MethodInfo *method)
{
  Il2CppObject *v3; // x24
  Il2CppObject *v4; // x25
  Il2CppObject *v5; // x26
  Il2CppObject *v6; // x27
  Il2CppObject *v7; // x23
  Il2CppObject *v8; // x22
  char *Object_WarBoardWaitTimeSetting; // x0
  __int64 v10; // x1
  System_Int32_array **v11; // x28
  System_Int32_array **v12; // x20
  const MethodInfo *v13; // x5
  System_Int32_array **v14; // x21
  const MethodInfo *v15; // x6
  const MethodInfo *v16; // x5
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  ClassBoardDisableOpenDialog_o *classBoardDisableOpenDialog; // [xsp+0h] [xbp-70h]
  ClassBoardLock_o *lockAsset; // [xsp+8h] [xbp-68h]
  Il2CppObject *v37; // [xsp+10h] [xbp-60h]
  Il2CppObject *Object_object; // [xsp+18h] [xbp-58h]

  if ( (byte_4353B3C & 1) == 0 )
  {
    sub_B70694(&Method_AssetData_GetObject_GameObject____69232720);
    sub_B70694(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardBackground___);
    sub_B70694(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardBlank___);
    sub_B70694(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardDisableOpenDialog___);
    sub_B70694(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardLine___);
    sub_B70694(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardLockOpenConfirmDialog___);
    sub_B70694(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardLockReleaseConditionDialog___);
    sub_B70694(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardLock___);
    sub_B70694(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardSquareDetailDialog___);
    sub_B70694(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardSquareOpenConfirmDialog___);
    sub_B70694(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardSquare___);
    sub_B70694(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardUIController___);
    sub_B70694(&StringLiteral_4076/*"ClassBoardBg"*/);
    sub_B70694(&StringLiteral_4082/*"ClassBoardLockReleaseConditionDialog"*/);
    sub_B70694(&StringLiteral_4079/*"ClassBoardLine"*/);
    sub_B70694(&StringLiteral_4087/*"ClassBoardSquareDetailDialog"*/);
    sub_B70694(&StringLiteral_4080/*"ClassBoardLock"*/);
    sub_B70694(&StringLiteral_4085/*"ClassBoardSelectView"*/);
    sub_B70694(&StringLiteral_6870/*"ForwardIconAnimObject"*/);
    sub_B70694(&StringLiteral_4077/*"ClassBoardBlank"*/);
    sub_B70694(&StringLiteral_4078/*"ClassBoardDisableOpenDialog"*/);
    sub_B70694(&StringLiteral_4081/*"ClassBoardLockOpenConfirmDialog"*/);
    sub_B70694(&StringLiteral_4086/*"ClassBoardSquare"*/);
    sub_B70694(&StringLiteral_4088/*"ClassBoardSquareOpenConfirmDialog"*/);
    sub_B70694(&StringLiteral_4089/*"ClassBoardUI"*/);
    byte_4353B3C = 1;
  }
  Object_object = ClassBoardResourceCatalogAssetBundle__GetObject_object_(
                    this,
                    this->fields.mainAssetData,
                    (System_String_o *)StringLiteral_4086/*"ClassBoardSquare"*/,
                    (const MethodInfo_1BE2CF0 *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardSquare___);
  v37 = ClassBoardResourceCatalogAssetBundle__GetObject_object_(
          this,
          this->fields.mainAssetData,
          (System_String_o *)StringLiteral_4079/*"ClassBoardLine"*/,
          (const MethodInfo_1BE2CF0 *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardLine___);
  lockAsset = (ClassBoardLock_o *)ClassBoardResourceCatalogAssetBundle__GetObject_object_(
                                    this,
                                    this->fields.mainAssetData,
                                    (System_String_o *)StringLiteral_4080/*"ClassBoardLock"*/,
                                    (const MethodInfo_1BE2CF0 *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardLock___);
  v3 = ClassBoardResourceCatalogAssetBundle__GetObject_object_(
         this,
         this->fields.mainAssetData,
         (System_String_o *)StringLiteral_4077/*"ClassBoardBlank"*/,
         (const MethodInfo_1BE2CF0 *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardBlank___);
  classBoardDisableOpenDialog = (ClassBoardDisableOpenDialog_o *)ClassBoardResourceCatalogAssetBundle__GetObject_object_(
                                                                   this,
                                                                   this->fields.mainAssetData,
                                                                   (System_String_o *)StringLiteral_4078/*"ClassBoardDisableOpenDialog"*/,
                                                                   (const MethodInfo_1BE2CF0 *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardDisableOpenDialog___);
  v4 = ClassBoardResourceCatalogAssetBundle__GetObject_object_(
         this,
         this->fields.mainAssetData,
         (System_String_o *)StringLiteral_4088/*"ClassBoardSquareOpenConfirmDialog"*/,
         (const MethodInfo_1BE2CF0 *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardSquareOpenConfirmDialog___);
  v5 = ClassBoardResourceCatalogAssetBundle__GetObject_object_(
         this,
         this->fields.mainAssetData,
         (System_String_o *)StringLiteral_4081/*"ClassBoardLockOpenConfirmDialog"*/,
         (const MethodInfo_1BE2CF0 *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardLockOpenConfirmDialog___);
  v6 = ClassBoardResourceCatalogAssetBundle__GetObject_object_(
         this,
         this->fields.mainAssetData,
         (System_String_o *)StringLiteral_4082/*"ClassBoardLockReleaseConditionDialog"*/,
         (const MethodInfo_1BE2CF0 *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardLockReleaseConditionDialog___);
  v7 = ClassBoardResourceCatalogAssetBundle__GetObject_object_(
         this,
         this->fields.mainAssetData,
         (System_String_o *)StringLiteral_4087/*"ClassBoardSquareDetailDialog"*/,
         (const MethodInfo_1BE2CF0 *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardSquareDetailDialog___);
  v8 = ClassBoardResourceCatalogAssetBundle__GetObject_object_(
         this,
         this->fields.mainAssetData,
         (System_String_o *)StringLiteral_4089/*"ClassBoardUI"*/,
         (const MethodInfo_1BE2CF0 *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardUIController___);
  Object_WarBoardWaitTimeSetting = (char *)ClassBoardResourceCatalogAssetBundle__GetObject_object_(
                                             this,
                                             this->fields.modelAssetData,
                                             (System_String_o *)StringLiteral_4076/*"ClassBoardBg"*/,
                                             (const MethodInfo_1BE2CF0 *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardBackground___);
  if ( !this->fields.boardSelectViewAssetData )
    goto LABEL_13;
  v11 = (System_Int32_array **)Object_WarBoardWaitTimeSetting;
  Object_WarBoardWaitTimeSetting = (char *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                             this->fields.boardSelectViewAssetData,
                                             (System_String_o *)StringLiteral_4085/*"ClassBoardSelectView"*/,
                                             (const MethodInfo_1BD6720 *)Method_AssetData_GetObject_GameObject____69232720);
  if ( !this->fields.boardSelectViewAssetData )
    goto LABEL_13;
  v12 = (System_Int32_array **)Object_WarBoardWaitTimeSetting;
  Object_WarBoardWaitTimeSetting = (char *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                             this->fields.boardSelectViewAssetData,
                                             (System_String_o *)StringLiteral_6870/*"ForwardIconAnimObject"*/,
                                             (const MethodInfo_1BD6720 *)Method_AssetData_GetObject_GameObject____69232720);
  if ( !this->fields._Contents_k__BackingField )
    goto LABEL_13;
  v14 = (System_Int32_array **)Object_WarBoardWaitTimeSetting;
  ClassBoardResourceContents__SetContents(
    this->fields._Contents_k__BackingField,
    (ClassBoardSquare_o *)Object_object,
    (ClassBoardLine_o *)v37,
    lockAsset,
    (ClassBoardBlank_o *)v3,
    v13);
  Object_WarBoardWaitTimeSetting = (char *)this->fields._Contents_k__BackingField;
  if ( !Object_WarBoardWaitTimeSetting )
    goto LABEL_13;
  ClassBoardResourceContents__SetContentsDialog(
    (ClassBoardResourceContents_o *)Object_WarBoardWaitTimeSetting,
    classBoardDisableOpenDialog,
    (ClassBoardSquareOpenConfirmDialog_o *)v4,
    (ClassBoardLockOpenConfirmDialog_o *)v5,
    (ClassBoardLockReleaseConditionDialog_o *)v6,
    (ClassBoardSquareDetailDialog_o *)v7,
    v15);
  Object_WarBoardWaitTimeSetting = (char *)this->fields._Contents_k__BackingField;
  if ( !Object_WarBoardWaitTimeSetting )
    goto LABEL_13;
  ClassBoardResourceContents__SetContentsUI(
    (ClassBoardResourceContents_o *)Object_WarBoardWaitTimeSetting,
    (ClassBoardUIController_o *)v8,
    this->fields.boardUiAtlasManagerUnit,
    this->fields.iconAtlasManagerUnit,
    this->fields.classUiAtlasManagerUnit,
    v16);
  Object_WarBoardWaitTimeSetting = (char *)this->fields._Contents_k__BackingField;
  if ( !Object_WarBoardWaitTimeSetting )
    goto LABEL_13;
  *((_QWORD *)Object_WarBoardWaitTimeSetting + 12) = v11;
  sub_B70630((BattleServantConfConponent_o *)(Object_WarBoardWaitTimeSetting + 96), v11, v17, v18, v19, v20, v21, v22);
  Object_WarBoardWaitTimeSetting = (char *)this->fields._Contents_k__BackingField;
  if ( !Object_WarBoardWaitTimeSetting
    || (*((_QWORD *)Object_WarBoardWaitTimeSetting + 13) = v12,
        sub_B70630(
          (BattleServantConfConponent_o *)(Object_WarBoardWaitTimeSetting + 104),
          v12,
          v23,
          v24,
          v25,
          v26,
          v27,
          v28),
        (Object_WarBoardWaitTimeSetting = (char *)this->fields._Contents_k__BackingField) == 0LL)
    || (*((_QWORD *)Object_WarBoardWaitTimeSetting + 14) = v14,
        sub_B70630(
          (BattleServantConfConponent_o *)(Object_WarBoardWaitTimeSetting + 112),
          v14,
          v29,
          v30,
          v31,
          v32,
          v33,
          v34),
        (Object_WarBoardWaitTimeSetting = (char *)this->fields.loadEndCallback) == 0LL) )
  {
LABEL_13:
    sub_B7076C(Object_WarBoardWaitTimeSetting, v10);
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
  AssetStorageLoadWrapper_o *assetStorageLoadWrapper; // x20
  AtlasManagerUnit_o *v11; // x21
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  AssetStorageLoadWrapper_o *v18; // x20
  AtlasManagerUnit_o *v19; // x21
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  AssetStorageLoadWrapper_o *v26; // x20
  AtlasManagerUnit_o *v27; // x21
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_Action_Action__array *v34; // x20
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v35; // x21
  ChainableActionBase_o *v36; // x0
  __int64 v37; // x1
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v44; // x21
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v51; // x21
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v58; // x21
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v65; // x21
  System_String_array **v66; // x2
  System_String_array **v67; // x3
  System_Boolean_array **v68; // x4
  System_Int32_array **v69; // x5
  System_Int32_array *v70; // x6
  System_Int32_array *v71; // x7
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v72; // x21
  System_String_array **v73; // x2
  System_String_array **v74; // x3
  System_Boolean_array **v75; // x4
  System_Int32_array **v76; // x5
  System_Int32_array *v77; // x6
  System_Int32_array *v78; // x7
  ChainableActionParallel_o *v79; // x21
  System_Action_array *v80; // x20
  System_Action_o *v81; // x22
  System_String_array **v82; // x2
  System_String_array **v83; // x3
  System_Boolean_array **v84; // x4
  System_Int32_array **v85; // x5
  System_Int32_array *v86; // x6
  System_Int32_array *v87; // x7
  __int64 v88; // x0
  __int64 v89; // x0

  if ( (byte_4353B3B & 1) == 0 )
  {
    sub_B70694(&System_Action___TypeInfo);
    sub_B70694(&System_Action_Action____TypeInfo);
    sub_B70694(&Method_System_Action_Action___ctor__);
    sub_B70694(&System_Action_Action__TypeInfo);
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&AtlasManagerUnit_TypeInfo);
    sub_B70694(&ChainableActionParallel_TypeInfo);
    sub_B70694(&Method_ClassBoardResourceCatalogAssetBundle_LoadEnd__);
    sub_B70694(&Method_ClassBoardResourceCatalogAssetBundle__LoadSystemAsset_b__32_0__);
    sub_B70694(&Method_ClassBoardResourceCatalogAssetBundle__LoadSystemAsset_b__32_1__);
    sub_B70694(&Method_ClassBoardResourceCatalogAssetBundle__LoadSystemAsset_b__32_2__);
    sub_B70694(&Method_ClassBoardResourceCatalogAssetBundle__LoadSystemAsset_b__32_3__);
    sub_B70694(&Method_ClassBoardResourceCatalogAssetBundle__LoadSystemAsset_b__32_4__);
    sub_B70694(&Method_ClassBoardResourceCatalogAssetBundle__LoadSystemAsset_b__32_5__);
    sub_B70694(&StringLiteral_4075/*"ClassBoard/UI/DownloadClassBoardUIAtlas"*/);
    sub_B70694(&StringLiteral_4074/*"ClassBoard/UI/DownloadClassBoardClassUIAtlas"*/);
    sub_B70694(&StringLiteral_4071/*"ClassBoard/Icon/DownloadClassBoardIconAtlas"*/);
    byte_4353B3B = 1;
  }
  this->fields.loadEndCallback = callback;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.loadEndCallback,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  assetStorageLoadWrapper = this->fields.assetStorageLoadWrapper;
  v11 = (AtlasManagerUnit_o *)sub_B70764(AtlasManagerUnit_TypeInfo);
  AtlasManagerUnit___ctor(v11, (System_String_o *)StringLiteral_4075/*"ClassBoard/UI/DownloadClassBoardUIAtlas"*/, assetStorageLoadWrapper, 0LL);
  this->fields.boardUiAtlasManagerUnit = v11;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.boardUiAtlasManagerUnit,
    (System_Int32_array **)v11,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  v18 = this->fields.assetStorageLoadWrapper;
  v19 = (AtlasManagerUnit_o *)sub_B70764(AtlasManagerUnit_TypeInfo);
  AtlasManagerUnit___ctor(v19, (System_String_o *)StringLiteral_4074/*"ClassBoard/UI/DownloadClassBoardClassUIAtlas"*/, v18, 0LL);
  this->fields.classUiAtlasManagerUnit = v19;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.classUiAtlasManagerUnit,
    (System_Int32_array **)v19,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  v26 = this->fields.assetStorageLoadWrapper;
  v27 = (AtlasManagerUnit_o *)sub_B70764(AtlasManagerUnit_TypeInfo);
  AtlasManagerUnit___ctor(v27, (System_String_o *)StringLiteral_4071/*"ClassBoard/Icon/DownloadClassBoardIconAtlas"*/, v26, 0LL);
  this->fields.iconAtlasManagerUnit = v27;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.iconAtlasManagerUnit,
    (System_Int32_array **)v27,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
  v34 = (System_Action_Action__array *)sub_B706AC(System_Action_Action____TypeInfo, 6LL);
  v35 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B70764(System_Action_Action__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v35,
    (Il2CppObject *)this,
    Method_ClassBoardResourceCatalogAssetBundle__LoadSystemAsset_b__32_0__,
    (const MethodInfo_264C148 *)Method_System_Action_Action___ctor__);
  if ( !v34 )
LABEL_31:
    sub_B7076C(v36, v37);
  if ( v35 )
  {
    v36 = (ChainableActionBase_o *)sub_B70754(v35, v34->obj.klass->_1.element_class);
    if ( !v36 )
      goto LABEL_30;
  }
  if ( !v34->max_length )
    goto LABEL_29;
  v34->m_Items[0] = (System_Action_Action__o *)v35;
  sub_B70630((BattleServantConfConponent_o *)v34->m_Items, (System_Int32_array **)v35, v38, v39, v40, v41, v42, v43);
  v44 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B70764(System_Action_Action__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v44,
    (Il2CppObject *)this,
    Method_ClassBoardResourceCatalogAssetBundle__LoadSystemAsset_b__32_1__,
    (const MethodInfo_264C148 *)Method_System_Action_Action___ctor__);
  if ( v44 )
  {
    v36 = (ChainableActionBase_o *)sub_B70754(v44, v34->obj.klass->_1.element_class);
    if ( !v36 )
      goto LABEL_30;
  }
  if ( v34->max_length <= 1 )
    goto LABEL_29;
  v34->m_Items[1] = (System_Action_Action__o *)v44;
  sub_B70630((BattleServantConfConponent_o *)&v34->m_Items[1], (System_Int32_array **)v44, v45, v46, v47, v48, v49, v50);
  v51 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B70764(System_Action_Action__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v51,
    (Il2CppObject *)this,
    Method_ClassBoardResourceCatalogAssetBundle__LoadSystemAsset_b__32_2__,
    (const MethodInfo_264C148 *)Method_System_Action_Action___ctor__);
  if ( v51 )
  {
    v36 = (ChainableActionBase_o *)sub_B70754(v51, v34->obj.klass->_1.element_class);
    if ( !v36 )
      goto LABEL_30;
  }
  if ( v34->max_length <= 2 )
    goto LABEL_29;
  v34->m_Items[2] = (System_Action_Action__o *)v51;
  sub_B70630((BattleServantConfConponent_o *)&v34->m_Items[2], (System_Int32_array **)v51, v52, v53, v54, v55, v56, v57);
  v58 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B70764(System_Action_Action__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v58,
    (Il2CppObject *)this,
    Method_ClassBoardResourceCatalogAssetBundle__LoadSystemAsset_b__32_3__,
    (const MethodInfo_264C148 *)Method_System_Action_Action___ctor__);
  if ( v58 )
  {
    v36 = (ChainableActionBase_o *)sub_B70754(v58, v34->obj.klass->_1.element_class);
    if ( !v36 )
      goto LABEL_30;
  }
  if ( v34->max_length <= 3 )
    goto LABEL_29;
  v34->m_Items[3] = (System_Action_Action__o *)v58;
  sub_B70630((BattleServantConfConponent_o *)&v34->m_Items[3], (System_Int32_array **)v58, v59, v60, v61, v62, v63, v64);
  v65 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B70764(System_Action_Action__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v65,
    (Il2CppObject *)this,
    Method_ClassBoardResourceCatalogAssetBundle__LoadSystemAsset_b__32_4__,
    (const MethodInfo_264C148 *)Method_System_Action_Action___ctor__);
  if ( v65 )
  {
    v36 = (ChainableActionBase_o *)sub_B70754(v65, v34->obj.klass->_1.element_class);
    if ( !v36 )
      goto LABEL_30;
  }
  if ( v34->max_length <= 4 )
    goto LABEL_29;
  v34->m_Items[4] = (System_Action_Action__o *)v65;
  sub_B70630((BattleServantConfConponent_o *)&v34->m_Items[4], (System_Int32_array **)v65, v66, v67, v68, v69, v70, v71);
  v72 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B70764(System_Action_Action__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v72,
    (Il2CppObject *)this,
    Method_ClassBoardResourceCatalogAssetBundle__LoadSystemAsset_b__32_5__,
    (const MethodInfo_264C148 *)Method_System_Action_Action___ctor__);
  if ( v72 )
  {
    v36 = (ChainableActionBase_o *)sub_B70754(v72, v34->obj.klass->_1.element_class);
    if ( !v36 )
      goto LABEL_30;
  }
  if ( v34->max_length <= 5 )
    goto LABEL_29;
  v34->m_Items[5] = (System_Action_Action__o *)v72;
  sub_B70630((BattleServantConfConponent_o *)&v34->m_Items[5], (System_Int32_array **)v72, v73, v74, v75, v76, v77, v78);
  v79 = (ChainableActionParallel_o *)sub_B70764(ChainableActionParallel_TypeInfo);
  ChainableActionParallel___ctor_30691392(v79, v34, 0LL);
  v80 = (System_Action_array *)sub_B706AC(System_Action___TypeInfo, 1LL);
  v81 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(v81, (Il2CppObject *)this, Method_ClassBoardResourceCatalogAssetBundle_LoadEnd__, 0LL);
  if ( !v80 )
    goto LABEL_31;
  if ( v81 )
  {
    v36 = (ChainableActionBase_o *)sub_B70754(v81, v80->obj.klass->_1.element_class);
    if ( !v36 )
    {
LABEL_30:
      v89 = sub_B7078C(v36);
      sub_B70738(v89, 0LL);
    }
  }
  if ( !v80->max_length )
  {
LABEL_29:
    v88 = sub_B70798(v36);
    sub_B70738(v88, 0LL);
  }
  v80->m_Items[0] = v81;
  sub_B70630((BattleServantConfConponent_o *)v80->m_Items, (System_Int32_array **)v81, v82, v83, v84, v85, v86, v87);
  if ( !v79 )
    goto LABEL_31;
  v36 = ChainableActionBase__Final((ChainableActionBase_o *)v79, v80, 0LL);
  if ( !v36 )
    goto LABEL_31;
  ChainableActionBase__Execute(v36, 0LL);
}


void __fastcall ClassBoardResourceCatalogAssetBundle__ReleaseAll(
        ClassBoardResourceCatalogAssetBundle_o *this,
        const MethodInfo *method)
{
  AssetStorageLoadWrapper_o *assetStorageLoadWrapper; // x0

  assetStorageLoadWrapper = this->fields.assetStorageLoadWrapper;
  if ( !assetStorageLoadWrapper )
    sub_B7076C(0LL, method);
  AssetStorageLoadWrapper__ReleaseAll(assetStorageLoadWrapper, 0LL);
}


void __fastcall ClassBoardResourceCatalogAssetBundle__ReloadBoardUIAtlas(
        ClassBoardResourceCatalogAssetBundle_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  AtlasManagerUnit_o *boardUiAtlasManagerUnit; // x0
  AssetStorageLoadWrapper_o *assetStorageLoadWrapper; // x22
  AtlasManagerUnit_o *v22; // x23
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  AtlasManagerUnit_o *v29; // x19
  System_Action_o *v30; // x21

  if ( (byte_4353B3D & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&AtlasManagerUnit_TypeInfo);
    sub_B70694(&Method_ClassBoardResourceCatalogAssetBundle___c__DisplayClass35_0__ReloadBoardUIAtlas_b__0__);
    sub_B70694(&ClassBoardResourceCatalogAssetBundle___c__DisplayClass35_0_TypeInfo);
    sub_B70694(&StringLiteral_4075/*"ClassBoard/UI/DownloadClassBoardUIAtlas"*/);
    byte_4353B3D = 1;
  }
  v5 = sub_B70764(ClassBoardResourceCatalogAssetBundle___c__DisplayClass35_0_TypeInfo);
  ClassBoardResourceCatalogAssetBundle___c__DisplayClass35_0___ctor(
    (ClassBoardResourceCatalogAssetBundle___c__DisplayClass35_0_o *)v5,
    0LL);
  if ( !v5 )
    goto LABEL_8;
  *(_QWORD *)(v5 + 16) = this;
  sub_B70630((BattleServantConfConponent_o *)(v5 + 16), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = callback;
  sub_B70630((BattleServantConfConponent_o *)(v5 + 24), (System_Int32_array **)callback, v14, v15, v16, v17, v18, v19);
  boardUiAtlasManagerUnit = this->fields.boardUiAtlasManagerUnit;
  if ( boardUiAtlasManagerUnit )
    AtlasManagerUnit__Release(boardUiAtlasManagerUnit, 0LL);
  assetStorageLoadWrapper = this->fields.assetStorageLoadWrapper;
  v22 = (AtlasManagerUnit_o *)sub_B70764(AtlasManagerUnit_TypeInfo);
  AtlasManagerUnit___ctor(v22, (System_String_o *)StringLiteral_4075/*"ClassBoard/UI/DownloadClassBoardUIAtlas"*/, assetStorageLoadWrapper, 0LL);
  this->fields.boardUiAtlasManagerUnit = v22;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.boardUiAtlasManagerUnit,
    (System_Int32_array **)v22,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  v29 = this->fields.boardUiAtlasManagerUnit;
  v30 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(
    v30,
    (Il2CppObject *)v5,
    Method_ClassBoardResourceCatalogAssetBundle___c__DisplayClass35_0__ReloadBoardUIAtlas_b__0__,
    0LL);
  if ( !v29 )
LABEL_8:
    sub_B7076C(v6, v7);
  AtlasManagerUnit__Load(v29, v30, 1, 0LL);
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
    sub_B7076C(0LL, sprite);
  AtlasManagerUnit__SetUI(boardUiAtlasManagerUnit, sprite, spriteName, 0LL);
}


void __fastcall ClassBoardResourceCatalogAssetBundle___LoadSystemAsset_b__32_0(
        ClassBoardResourceCatalogAssetBundle_o *this,
        System_Action_o *f,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  AssetLoader_LoadEndDataHandler_o *v20; // x20
  const MethodInfo *v21; // x3

  if ( (byte_4353B42 & 1) == 0 )
  {
    sub_B70694(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_B70694(&Method_ClassBoardResourceCatalogAssetBundle___c__DisplayClass32_0__LoadSystemAsset_b__6__);
    sub_B70694(&ClassBoardResourceCatalogAssetBundle___c__DisplayClass32_0_TypeInfo);
    sub_B70694(&StringLiteral_4072/*"ClassBoard/Main"*/);
    byte_4353B42 = 1;
  }
  v5 = sub_B70764(ClassBoardResourceCatalogAssetBundle___c__DisplayClass32_0_TypeInfo);
  ClassBoardResourceCatalogAssetBundle___c__DisplayClass32_0___ctor(
    (ClassBoardResourceCatalogAssetBundle___c__DisplayClass32_0_o *)v5,
    0LL);
  if ( !v5 )
    sub_B7076C(v6, v7);
  *(_QWORD *)(v5 + 24) = this;
  sub_B70630((BattleServantConfConponent_o *)(v5 + 24), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 16) = f;
  sub_B70630((BattleServantConfConponent_o *)(v5 + 16), (System_Int32_array **)f, v14, v15, v16, v17, v18, v19);
  v20 = (AssetLoader_LoadEndDataHandler_o *)sub_B70764(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v20,
    (Il2CppObject *)v5,
    Method_ClassBoardResourceCatalogAssetBundle___c__DisplayClass32_0__LoadSystemAsset_b__6__,
    0LL);
  ClassBoardResourceCatalogAssetBundle__LoadAssetStorage(this, (System_String_o *)StringLiteral_4072/*"ClassBoard/Main"*/, v20, v21);
}


void __fastcall ClassBoardResourceCatalogAssetBundle___LoadSystemAsset_b__32_1(
        ClassBoardResourceCatalogAssetBundle_o *this,
        System_Action_o *f,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  AssetLoader_LoadEndDataHandler_o *v20; // x20
  const MethodInfo *v21; // x3

  if ( (byte_4353B43 & 1) == 0 )
  {
    sub_B70694(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_B70694(&Method_ClassBoardResourceCatalogAssetBundle___c__DisplayClass32_1__LoadSystemAsset_b__7__);
    sub_B70694(&ClassBoardResourceCatalogAssetBundle___c__DisplayClass32_1_TypeInfo);
    sub_B70694(&StringLiteral_4059/*"ClassBoard/Bg"*/);
    byte_4353B43 = 1;
  }
  v5 = sub_B70764(ClassBoardResourceCatalogAssetBundle___c__DisplayClass32_1_TypeInfo);
  ClassBoardResourceCatalogAssetBundle___c__DisplayClass32_1___ctor(
    (ClassBoardResourceCatalogAssetBundle___c__DisplayClass32_1_o *)v5,
    0LL);
  if ( !v5 )
    sub_B7076C(v6, v7);
  *(_QWORD *)(v5 + 24) = this;
  sub_B70630((BattleServantConfConponent_o *)(v5 + 24), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 16) = f;
  sub_B70630((BattleServantConfConponent_o *)(v5 + 16), (System_Int32_array **)f, v14, v15, v16, v17, v18, v19);
  v20 = (AssetLoader_LoadEndDataHandler_o *)sub_B70764(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v20,
    (Il2CppObject *)v5,
    Method_ClassBoardResourceCatalogAssetBundle___c__DisplayClass32_1__LoadSystemAsset_b__7__,
    0LL);
  ClassBoardResourceCatalogAssetBundle__LoadAssetStorage(this, (System_String_o *)StringLiteral_4059/*"ClassBoard/Bg"*/, v20, v21);
}


void __fastcall ClassBoardResourceCatalogAssetBundle___LoadSystemAsset_b__32_2(
        ClassBoardResourceCatalogAssetBundle_o *this,
        System_Action_o *f,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  AssetLoader_LoadEndDataHandler_o *v20; // x20
  const MethodInfo *v21; // x3

  if ( (byte_4353B44 & 1) == 0 )
  {
    sub_B70694(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_B70694(&Method_ClassBoardResourceCatalogAssetBundle___c__DisplayClass32_2__LoadSystemAsset_b__8__);
    sub_B70694(&ClassBoardResourceCatalogAssetBundle___c__DisplayClass32_2_TypeInfo);
    sub_B70694(&StringLiteral_4073/*"ClassBoard/Select"*/);
    byte_4353B44 = 1;
  }
  v5 = sub_B70764(ClassBoardResourceCatalogAssetBundle___c__DisplayClass32_2_TypeInfo);
  ClassBoardResourceCatalogAssetBundle___c__DisplayClass32_2___ctor(
    (ClassBoardResourceCatalogAssetBundle___c__DisplayClass32_2_o *)v5,
    0LL);
  if ( !v5 )
    sub_B7076C(v6, v7);
  *(_QWORD *)(v5 + 24) = this;
  sub_B70630((BattleServantConfConponent_o *)(v5 + 24), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 16) = f;
  sub_B70630((BattleServantConfConponent_o *)(v5 + 16), (System_Int32_array **)f, v14, v15, v16, v17, v18, v19);
  v20 = (AssetLoader_LoadEndDataHandler_o *)sub_B70764(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v20,
    (Il2CppObject *)v5,
    Method_ClassBoardResourceCatalogAssetBundle___c__DisplayClass32_2__LoadSystemAsset_b__8__,
    0LL);
  ClassBoardResourceCatalogAssetBundle__LoadAssetStorage(this, (System_String_o *)StringLiteral_4073/*"ClassBoard/Select"*/, v20, v21);
}


void __fastcall ClassBoardResourceCatalogAssetBundle___LoadSystemAsset_b__32_3(
        ClassBoardResourceCatalogAssetBundle_o *this,
        System_Action_o *f,
        const MethodInfo *method)
{
  AtlasManagerUnit_o *boardUiAtlasManagerUnit; // x0

  boardUiAtlasManagerUnit = this->fields.boardUiAtlasManagerUnit;
  if ( !boardUiAtlasManagerUnit )
    sub_B7076C(0LL, f);
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
    sub_B7076C(0LL, f);
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
    sub_B7076C(0LL, f);
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
        sub_B70630(&_4__this->fields.method_info),
        (_4__this = this->fields.f) == 0LL) )
  {
    sub_B7076C(_4__this, asset);
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
        sub_B70630(&_4__this->fields.original_method_info),
        (_4__this = this->fields.f) == 0LL) )
  {
    sub_B7076C(_4__this, asset);
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
        sub_B70630(&_4__this->fields.data),
        (_4__this = this->fields.f) == 0LL) )
  {
    sub_B7076C(_4__this, asset);
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
    sub_B7076C(this, method);
  }
  ClassBoardResourceContents__SetBoardUIAtlas(
    (ClassBoardResourceContents_o *)this,
    _4__this->fields.boardUiAtlasManagerUnit,
    0LL);
  ActionExtensions__Call(v3->fields.callback, 0LL);
}