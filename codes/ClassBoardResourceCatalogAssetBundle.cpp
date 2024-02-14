void __fastcall ClassBoardResourceCatalogAssetBundle___ctor(
        ClassBoardResourceCatalogAssetBundle_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x2
  Il2CppObject *v6; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  __int64 v13; // x1
  __int64 v14; // x2
  AssetStorageLoadWrapper_o *v15; // x20
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7

  if ( (byte_421465B & 1) == 0 )
  {
    sub_B0D8A4(&AssetStorageLoadWrapper_TypeInfo, method);
    sub_B0D8A4(&ClassBoardResourceContents_TypeInfo, v3);
    byte_421465B = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v6 = (Il2CppObject *)sub_B0D974(ClassBoardResourceContents_TypeInfo, v4, v5);
  System_Object___ctor(v6, 0LL);
  this->fields._Contents_k__BackingField = (struct ClassBoardResourceContents_o *)v6;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._Contents_k__BackingField,
    (System_Int32_array **)v6,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  v15 = (AssetStorageLoadWrapper_o *)sub_B0D974(AssetStorageLoadWrapper_TypeInfo, v13, v14);
  AssetStorageLoadWrapper___ctor(v15, 0LL);
  this->fields.assetStorageLoadWrapper = v15;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v15, v16, v17, v18, v19, v20, v21);
}


System_String_o *__fastcall ClassBoardResourceCatalogAssetBundle__GetIconAtlasPath(
        ClassBoardResourceCatalogAssetBundle_o *this,
        const MethodInfo *method)
{
  if ( (byte_4214662 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_4008/*"ClassBoard/Icon/DownloadClassBoardIconAtlas"*/, method);
    byte_4214662 = 1;
  }
  return (System_String_o *)StringLiteral_4008/*"ClassBoard/Icon/DownloadClassBoardIconAtlas"*/;
}


Il2CppObject *__fastcall ClassBoardResourceCatalogAssetBundle__GetObject_object_(
        ClassBoardResourceCatalogAssetBundle_o *this,
        AssetData_o *assetData,
        System_String_o *name,
        const MethodInfo_170D3A0 *method)
{
  __int64 v7; // x1
  UnityEngine_Object_o *Object_WarBoardWaitTimeSetting; // x20

  if ( (byte_4214322 & 1) == 0 )
  {
    sub_B0D8A4(&Method_AssetData_GetObject_GameObject____67951440, assetData);
    this = (ClassBoardResourceCatalogAssetBundle_o *)sub_B0D8A4(&UnityEngine_Object_TypeInfo, v7);
    byte_4214322 = 1;
  }
  if ( !assetData )
    goto LABEL_11;
  Object_WarBoardWaitTimeSetting = (UnityEngine_Object_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                             assetData,
                                                             name,
                                                             (const MethodInfo_1700DD0 *)Method_AssetData_GetObject_GameObject____67951440);
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
    sub_B0D97C(this);
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
  if ( (byte_4214660 & 1) == 0 )
  {
    sub_B0D8A4(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardBlank___, *(_QWORD *)&assetId);
    sub_B0D8A4(&StringLiteral_4014/*"ClassBoardBlank"*/, v4);
    byte_4214660 = 1;
  }
  mainAssetData = this->fields.mainAssetData;
  v6 = System_Int32__ToString((int32_t)&v9, 0LL);
  v7 = System_String__Concat_43849904((System_String_o *)StringLiteral_4014/*"ClassBoardBlank"*/, v6, 0LL);
  return (ClassBoardBlank_o *)ClassBoardResourceCatalogAssetBundle__GetObject_object_(
                                this,
                                mainAssetData,
                                v7,
                                (const MethodInfo_170D3A0 *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardBlank___);
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
  if ( (byte_4214661 & 1) == 0 )
  {
    sub_B0D8A4(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardLock___, *(_QWORD *)&assetId);
    sub_B0D8A4(&StringLiteral_4017/*"ClassBoardLock"*/, v4);
    byte_4214661 = 1;
  }
  mainAssetData = this->fields.mainAssetData;
  v6 = System_Int32__ToString((int32_t)&v9, 0LL);
  v7 = System_String__Concat_43849904((System_String_o *)StringLiteral_4017/*"ClassBoardLock"*/, v6, 0LL);
  return (ClassBoardLock_o *)ClassBoardResourceCatalogAssetBundle__GetObject_object_(
                               this,
                               mainAssetData,
                               v7,
                               (const MethodInfo_170D3A0 *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardLock___);
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
  if ( (byte_421465F & 1) == 0 )
  {
    sub_B0D8A4(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardSquare___, *(_QWORD *)&assetId);
    sub_B0D8A4(&StringLiteral_4023/*"ClassBoardSquare"*/, v4);
    byte_421465F = 1;
  }
  mainAssetData = this->fields.mainAssetData;
  v6 = System_Int32__ToString((int32_t)&v9, 0LL);
  v7 = System_String__Concat_43849904((System_String_o *)StringLiteral_4023/*"ClassBoardSquare"*/, v6, 0LL);
  return (ClassBoardSquare_o *)ClassBoardResourceCatalogAssetBundle__GetObject_object_(
                                 this,
                                 mainAssetData,
                                 v7,
                                 (const MethodInfo_170D3A0 *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardSquare___);
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
    sub_B0D97C(assetStorageLoadWrapper);
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
  System_Int32_array **v34; // x28
  System_Int32_array **v35; // x20
  const MethodInfo *v36; // x5
  System_Int32_array **v37; // x21
  const MethodInfo *v38; // x6
  const MethodInfo *v39; // x5
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  ClassBoardDisableOpenDialog_o *classBoardDisableOpenDialog; // [xsp+0h] [xbp-70h]
  ClassBoardLock_o *lockAsset; // [xsp+8h] [xbp-68h]
  Il2CppObject *v60; // [xsp+10h] [xbp-60h]
  Il2CppObject *Object_object; // [xsp+18h] [xbp-58h]

  if ( (byte_421465D & 1) == 0 )
  {
    sub_B0D8A4(&Method_AssetData_GetObject_GameObject____67951440, method);
    sub_B0D8A4(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardBackground___, v3);
    sub_B0D8A4(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardBlank___, v4);
    sub_B0D8A4(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardDisableOpenDialog___, v5);
    sub_B0D8A4(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardLine___, v6);
    sub_B0D8A4(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardLockOpenConfirmDialog___, v7);
    sub_B0D8A4(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardLockReleaseConditionDialog___, v8);
    sub_B0D8A4(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardLock___, v9);
    sub_B0D8A4(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardSquareDetailDialog___, v10);
    sub_B0D8A4(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardSquareOpenConfirmDialog___, v11);
    sub_B0D8A4(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardSquare___, v12);
    sub_B0D8A4(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardUIController___, v13);
    sub_B0D8A4(&StringLiteral_4013/*"ClassBoardBg"*/, v14);
    sub_B0D8A4(&StringLiteral_4019/*"ClassBoardLockReleaseConditionDialog"*/, v15);
    sub_B0D8A4(&StringLiteral_4016/*"ClassBoardLine"*/, v16);
    sub_B0D8A4(&StringLiteral_4024/*"ClassBoardSquareDetailDialog"*/, v17);
    sub_B0D8A4(&StringLiteral_4017/*"ClassBoardLock"*/, v18);
    sub_B0D8A4(&StringLiteral_4022/*"ClassBoardSelectView"*/, v19);
    sub_B0D8A4(&StringLiteral_6794/*"ForwardIconAnimObject"*/, v20);
    sub_B0D8A4(&StringLiteral_4014/*"ClassBoardBlank"*/, v21);
    sub_B0D8A4(&StringLiteral_4015/*"ClassBoardDisableOpenDialog"*/, v22);
    sub_B0D8A4(&StringLiteral_4018/*"ClassBoardLockOpenConfirmDialog"*/, v23);
    sub_B0D8A4(&StringLiteral_4023/*"ClassBoardSquare"*/, v24);
    sub_B0D8A4(&StringLiteral_4025/*"ClassBoardSquareOpenConfirmDialog"*/, v25);
    sub_B0D8A4(&StringLiteral_4026/*"ClassBoardUI"*/, v26);
    byte_421465D = 1;
  }
  Object_object = ClassBoardResourceCatalogAssetBundle__GetObject_object_(
                    this,
                    this->fields.mainAssetData,
                    (System_String_o *)StringLiteral_4023/*"ClassBoardSquare"*/,
                    (const MethodInfo_170D3A0 *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardSquare___);
  v60 = ClassBoardResourceCatalogAssetBundle__GetObject_object_(
          this,
          this->fields.mainAssetData,
          (System_String_o *)StringLiteral_4016/*"ClassBoardLine"*/,
          (const MethodInfo_170D3A0 *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardLine___);
  lockAsset = (ClassBoardLock_o *)ClassBoardResourceCatalogAssetBundle__GetObject_object_(
                                    this,
                                    this->fields.mainAssetData,
                                    (System_String_o *)StringLiteral_4017/*"ClassBoardLock"*/,
                                    (const MethodInfo_170D3A0 *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardLock___);
  v27 = ClassBoardResourceCatalogAssetBundle__GetObject_object_(
          this,
          this->fields.mainAssetData,
          (System_String_o *)StringLiteral_4014/*"ClassBoardBlank"*/,
          (const MethodInfo_170D3A0 *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardBlank___);
  classBoardDisableOpenDialog = (ClassBoardDisableOpenDialog_o *)ClassBoardResourceCatalogAssetBundle__GetObject_object_(
                                                                   this,
                                                                   this->fields.mainAssetData,
                                                                   (System_String_o *)StringLiteral_4015/*"ClassBoardDisableOpenDialog"*/,
                                                                   (const MethodInfo_170D3A0 *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardDisableOpenDialog___);
  v28 = ClassBoardResourceCatalogAssetBundle__GetObject_object_(
          this,
          this->fields.mainAssetData,
          (System_String_o *)StringLiteral_4025/*"ClassBoardSquareOpenConfirmDialog"*/,
          (const MethodInfo_170D3A0 *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardSquareOpenConfirmDialog___);
  v29 = ClassBoardResourceCatalogAssetBundle__GetObject_object_(
          this,
          this->fields.mainAssetData,
          (System_String_o *)StringLiteral_4018/*"ClassBoardLockOpenConfirmDialog"*/,
          (const MethodInfo_170D3A0 *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardLockOpenConfirmDialog___);
  v30 = ClassBoardResourceCatalogAssetBundle__GetObject_object_(
          this,
          this->fields.mainAssetData,
          (System_String_o *)StringLiteral_4019/*"ClassBoardLockReleaseConditionDialog"*/,
          (const MethodInfo_170D3A0 *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardLockReleaseConditionDialog___);
  v31 = ClassBoardResourceCatalogAssetBundle__GetObject_object_(
          this,
          this->fields.mainAssetData,
          (System_String_o *)StringLiteral_4024/*"ClassBoardSquareDetailDialog"*/,
          (const MethodInfo_170D3A0 *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardSquareDetailDialog___);
  v32 = ClassBoardResourceCatalogAssetBundle__GetObject_object_(
          this,
          this->fields.mainAssetData,
          (System_String_o *)StringLiteral_4026/*"ClassBoardUI"*/,
          (const MethodInfo_170D3A0 *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardUIController___);
  Object_WarBoardWaitTimeSetting = (char *)ClassBoardResourceCatalogAssetBundle__GetObject_object_(
                                             this,
                                             this->fields.modelAssetData,
                                             (System_String_o *)StringLiteral_4013/*"ClassBoardBg"*/,
                                             (const MethodInfo_170D3A0 *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardBackground___);
  if ( !this->fields.boardSelectViewAssetData )
    goto LABEL_13;
  v34 = (System_Int32_array **)Object_WarBoardWaitTimeSetting;
  Object_WarBoardWaitTimeSetting = (char *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                             this->fields.boardSelectViewAssetData,
                                             (System_String_o *)StringLiteral_4022/*"ClassBoardSelectView"*/,
                                             (const MethodInfo_1700DD0 *)Method_AssetData_GetObject_GameObject____67951440);
  if ( !this->fields.boardSelectViewAssetData )
    goto LABEL_13;
  v35 = (System_Int32_array **)Object_WarBoardWaitTimeSetting;
  Object_WarBoardWaitTimeSetting = (char *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                             this->fields.boardSelectViewAssetData,
                                             (System_String_o *)StringLiteral_6794/*"ForwardIconAnimObject"*/,
                                             (const MethodInfo_1700DD0 *)Method_AssetData_GetObject_GameObject____67951440);
  if ( !this->fields._Contents_k__BackingField )
    goto LABEL_13;
  v37 = (System_Int32_array **)Object_WarBoardWaitTimeSetting;
  ClassBoardResourceContents__SetContents(
    this->fields._Contents_k__BackingField,
    (ClassBoardSquare_o *)Object_object,
    (ClassBoardLine_o *)v60,
    lockAsset,
    (ClassBoardBlank_o *)v27,
    v36);
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
    v38);
  Object_WarBoardWaitTimeSetting = (char *)this->fields._Contents_k__BackingField;
  if ( !Object_WarBoardWaitTimeSetting )
    goto LABEL_13;
  ClassBoardResourceContents__SetContentsUI(
    (ClassBoardResourceContents_o *)Object_WarBoardWaitTimeSetting,
    (ClassBoardUIController_o *)v32,
    this->fields.boardUiAtlasManagerUnit,
    this->fields.iconAtlasManagerUnit,
    this->fields.classUiAtlasManagerUnit,
    v39);
  Object_WarBoardWaitTimeSetting = (char *)this->fields._Contents_k__BackingField;
  if ( !Object_WarBoardWaitTimeSetting )
    goto LABEL_13;
  *((_QWORD *)Object_WarBoardWaitTimeSetting + 12) = v34;
  sub_B0D840((BattleServantConfConponent_o *)(Object_WarBoardWaitTimeSetting + 96), v34, v40, v41, v42, v43, v44, v45);
  Object_WarBoardWaitTimeSetting = (char *)this->fields._Contents_k__BackingField;
  if ( !Object_WarBoardWaitTimeSetting
    || (*((_QWORD *)Object_WarBoardWaitTimeSetting + 13) = v35,
        sub_B0D840(
          (BattleServantConfConponent_o *)(Object_WarBoardWaitTimeSetting + 104),
          v35,
          v46,
          v47,
          v48,
          v49,
          v50,
          v51),
        (Object_WarBoardWaitTimeSetting = (char *)this->fields._Contents_k__BackingField) == 0LL)
    || (*((_QWORD *)Object_WarBoardWaitTimeSetting + 14) = v37,
        sub_B0D840(
          (BattleServantConfConponent_o *)(Object_WarBoardWaitTimeSetting + 112),
          v37,
          v52,
          v53,
          v54,
          v55,
          v56,
          v57),
        (Object_WarBoardWaitTimeSetting = (char *)this->fields.loadEndCallback) == 0LL) )
  {
LABEL_13:
    sub_B0D97C(Object_WarBoardWaitTimeSetting);
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
  __int64 v27; // x1
  __int64 v28; // x2
  AtlasManagerUnit_o *v29; // x21
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  AssetStorageLoadWrapper_o *v36; // x20
  __int64 v37; // x1
  __int64 v38; // x2
  AtlasManagerUnit_o *v39; // x21
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  AssetStorageLoadWrapper_o *v46; // x20
  __int64 v47; // x1
  __int64 v48; // x2
  AtlasManagerUnit_o *v49; // x21
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  System_Action_Action__array *v56; // x20
  __int64 v57; // x1
  __int64 v58; // x2
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v59; // x21
  ChainableActionBase_o *v60; // x0
  System_String_array **v61; // x2
  System_String_array **v62; // x3
  System_Boolean_array **v63; // x4
  System_Int32_array **v64; // x5
  System_Int32_array *v65; // x6
  System_Int32_array *v66; // x7
  __int64 v67; // x1
  __int64 v68; // x2
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v69; // x21
  System_String_array **v70; // x2
  System_String_array **v71; // x3
  System_Boolean_array **v72; // x4
  System_Int32_array **v73; // x5
  System_Int32_array *v74; // x6
  System_Int32_array *v75; // x7
  __int64 v76; // x1
  __int64 v77; // x2
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v78; // x21
  System_String_array **v79; // x2
  System_String_array **v80; // x3
  System_Boolean_array **v81; // x4
  System_Int32_array **v82; // x5
  System_Int32_array *v83; // x6
  System_Int32_array *v84; // x7
  __int64 v85; // x1
  __int64 v86; // x2
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v87; // x21
  System_String_array **v88; // x2
  System_String_array **v89; // x3
  System_Boolean_array **v90; // x4
  System_Int32_array **v91; // x5
  System_Int32_array *v92; // x6
  System_Int32_array *v93; // x7
  __int64 v94; // x1
  __int64 v95; // x2
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v96; // x21
  System_String_array **v97; // x2
  System_String_array **v98; // x3
  System_Boolean_array **v99; // x4
  System_Int32_array **v100; // x5
  System_Int32_array *v101; // x6
  System_Int32_array *v102; // x7
  __int64 v103; // x1
  __int64 v104; // x2
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v105; // x21
  System_String_array **v106; // x2
  System_String_array **v107; // x3
  System_Boolean_array **v108; // x4
  System_Int32_array **v109; // x5
  System_Int32_array *v110; // x6
  System_Int32_array *v111; // x7
  __int64 v112; // x1
  __int64 v113; // x2
  ChainableActionParallel_o *v114; // x21
  System_Action_array *v115; // x20
  __int64 v116; // x1
  __int64 v117; // x2
  System_Action_o *v118; // x22
  System_String_array **v119; // x2
  System_String_array **v120; // x3
  System_Boolean_array **v121; // x4
  System_Int32_array **v122; // x5
  System_Int32_array *v123; // x6
  System_Int32_array *v124; // x7
  __int64 v125; // x0
  __int64 v126; // x0

  if ( (byte_421465C & 1) == 0 )
  {
    sub_B0D8A4(&System_Action___TypeInfo, callback);
    sub_B0D8A4(&System_Action_Action____TypeInfo, v10);
    sub_B0D8A4(&Method_System_Action_Action___ctor__, v11);
    sub_B0D8A4(&System_Action_Action__TypeInfo, v12);
    sub_B0D8A4(&System_Action_TypeInfo, v13);
    sub_B0D8A4(&AtlasManagerUnit_TypeInfo, v14);
    sub_B0D8A4(&ChainableActionParallel_TypeInfo, v15);
    sub_B0D8A4(&Method_ClassBoardResourceCatalogAssetBundle_LoadEnd__, v16);
    sub_B0D8A4(&Method_ClassBoardResourceCatalogAssetBundle__LoadSystemAsset_b__32_0__, v17);
    sub_B0D8A4(&Method_ClassBoardResourceCatalogAssetBundle__LoadSystemAsset_b__32_1__, v18);
    sub_B0D8A4(&Method_ClassBoardResourceCatalogAssetBundle__LoadSystemAsset_b__32_2__, v19);
    sub_B0D8A4(&Method_ClassBoardResourceCatalogAssetBundle__LoadSystemAsset_b__32_3__, v20);
    sub_B0D8A4(&Method_ClassBoardResourceCatalogAssetBundle__LoadSystemAsset_b__32_4__, v21);
    sub_B0D8A4(&Method_ClassBoardResourceCatalogAssetBundle__LoadSystemAsset_b__32_5__, v22);
    sub_B0D8A4(&StringLiteral_4012/*"ClassBoard/UI/DownloadClassBoardUIAtlas"*/, v23);
    sub_B0D8A4(&StringLiteral_4011/*"ClassBoard/UI/DownloadClassBoardClassUIAtlas"*/, v24);
    sub_B0D8A4(&StringLiteral_4008/*"ClassBoard/Icon/DownloadClassBoardIconAtlas"*/, v25);
    byte_421465C = 1;
  }
  this->fields.loadEndCallback = callback;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.loadEndCallback,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  assetStorageLoadWrapper = this->fields.assetStorageLoadWrapper;
  v29 = (AtlasManagerUnit_o *)sub_B0D974(AtlasManagerUnit_TypeInfo, v27, v28);
  AtlasManagerUnit___ctor(v29, (System_String_o *)StringLiteral_4012/*"ClassBoard/UI/DownloadClassBoardUIAtlas"*/, assetStorageLoadWrapper, 0LL);
  this->fields.boardUiAtlasManagerUnit = v29;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.boardUiAtlasManagerUnit,
    (System_Int32_array **)v29,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
  v36 = this->fields.assetStorageLoadWrapper;
  v39 = (AtlasManagerUnit_o *)sub_B0D974(AtlasManagerUnit_TypeInfo, v37, v38);
  AtlasManagerUnit___ctor(v39, (System_String_o *)StringLiteral_4011/*"ClassBoard/UI/DownloadClassBoardClassUIAtlas"*/, v36, 0LL);
  this->fields.classUiAtlasManagerUnit = v39;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.classUiAtlasManagerUnit,
    (System_Int32_array **)v39,
    v40,
    v41,
    v42,
    v43,
    v44,
    v45);
  v46 = this->fields.assetStorageLoadWrapper;
  v49 = (AtlasManagerUnit_o *)sub_B0D974(AtlasManagerUnit_TypeInfo, v47, v48);
  AtlasManagerUnit___ctor(v49, (System_String_o *)StringLiteral_4008/*"ClassBoard/Icon/DownloadClassBoardIconAtlas"*/, v46, 0LL);
  this->fields.iconAtlasManagerUnit = v49;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.iconAtlasManagerUnit,
    (System_Int32_array **)v49,
    v50,
    v51,
    v52,
    v53,
    v54,
    v55);
  v56 = (System_Action_Action__array *)sub_B0D8BC(System_Action_Action____TypeInfo, 6LL);
  v59 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B0D974(
                                                                               System_Action_Action__TypeInfo,
                                                                               v57,
                                                                               v58);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v59,
    (Il2CppObject *)this,
    Method_ClassBoardResourceCatalogAssetBundle__LoadSystemAsset_b__32_0__,
    (const MethodInfo_246EA3C *)Method_System_Action_Action___ctor__);
  if ( !v56 )
LABEL_31:
    sub_B0D97C(v60);
  if ( v59 )
  {
    v60 = (ChainableActionBase_o *)sub_B0D964(v59, v56->obj.klass->_1.element_class);
    if ( !v60 )
      goto LABEL_30;
  }
  if ( !v56->max_length )
    goto LABEL_29;
  v56->m_Items[0] = (System_Action_Action__o *)v59;
  sub_B0D840((BattleServantConfConponent_o *)v56->m_Items, (System_Int32_array **)v59, v61, v62, v63, v64, v65, v66);
  v69 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B0D974(
                                                                               System_Action_Action__TypeInfo,
                                                                               v67,
                                                                               v68);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v69,
    (Il2CppObject *)this,
    Method_ClassBoardResourceCatalogAssetBundle__LoadSystemAsset_b__32_1__,
    (const MethodInfo_246EA3C *)Method_System_Action_Action___ctor__);
  if ( v69 )
  {
    v60 = (ChainableActionBase_o *)sub_B0D964(v69, v56->obj.klass->_1.element_class);
    if ( !v60 )
      goto LABEL_30;
  }
  if ( v56->max_length <= 1 )
    goto LABEL_29;
  v56->m_Items[1] = (System_Action_Action__o *)v69;
  sub_B0D840((BattleServantConfConponent_o *)&v56->m_Items[1], (System_Int32_array **)v69, v70, v71, v72, v73, v74, v75);
  v78 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B0D974(
                                                                               System_Action_Action__TypeInfo,
                                                                               v76,
                                                                               v77);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v78,
    (Il2CppObject *)this,
    Method_ClassBoardResourceCatalogAssetBundle__LoadSystemAsset_b__32_2__,
    (const MethodInfo_246EA3C *)Method_System_Action_Action___ctor__);
  if ( v78 )
  {
    v60 = (ChainableActionBase_o *)sub_B0D964(v78, v56->obj.klass->_1.element_class);
    if ( !v60 )
      goto LABEL_30;
  }
  if ( v56->max_length <= 2 )
    goto LABEL_29;
  v56->m_Items[2] = (System_Action_Action__o *)v78;
  sub_B0D840((BattleServantConfConponent_o *)&v56->m_Items[2], (System_Int32_array **)v78, v79, v80, v81, v82, v83, v84);
  v87 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B0D974(
                                                                               System_Action_Action__TypeInfo,
                                                                               v85,
                                                                               v86);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v87,
    (Il2CppObject *)this,
    Method_ClassBoardResourceCatalogAssetBundle__LoadSystemAsset_b__32_3__,
    (const MethodInfo_246EA3C *)Method_System_Action_Action___ctor__);
  if ( v87 )
  {
    v60 = (ChainableActionBase_o *)sub_B0D964(v87, v56->obj.klass->_1.element_class);
    if ( !v60 )
      goto LABEL_30;
  }
  if ( v56->max_length <= 3 )
    goto LABEL_29;
  v56->m_Items[3] = (System_Action_Action__o *)v87;
  sub_B0D840((BattleServantConfConponent_o *)&v56->m_Items[3], (System_Int32_array **)v87, v88, v89, v90, v91, v92, v93);
  v96 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B0D974(
                                                                               System_Action_Action__TypeInfo,
                                                                               v94,
                                                                               v95);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v96,
    (Il2CppObject *)this,
    Method_ClassBoardResourceCatalogAssetBundle__LoadSystemAsset_b__32_4__,
    (const MethodInfo_246EA3C *)Method_System_Action_Action___ctor__);
  if ( v96 )
  {
    v60 = (ChainableActionBase_o *)sub_B0D964(v96, v56->obj.klass->_1.element_class);
    if ( !v60 )
      goto LABEL_30;
  }
  if ( v56->max_length <= 4 )
    goto LABEL_29;
  v56->m_Items[4] = (System_Action_Action__o *)v96;
  sub_B0D840(
    (BattleServantConfConponent_o *)&v56->m_Items[4],
    (System_Int32_array **)v96,
    v97,
    v98,
    v99,
    v100,
    v101,
    v102);
  v105 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B0D974(
                                                                                System_Action_Action__TypeInfo,
                                                                                v103,
                                                                                v104);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v105,
    (Il2CppObject *)this,
    Method_ClassBoardResourceCatalogAssetBundle__LoadSystemAsset_b__32_5__,
    (const MethodInfo_246EA3C *)Method_System_Action_Action___ctor__);
  if ( v105 )
  {
    v60 = (ChainableActionBase_o *)sub_B0D964(v105, v56->obj.klass->_1.element_class);
    if ( !v60 )
      goto LABEL_30;
  }
  if ( v56->max_length <= 5 )
    goto LABEL_29;
  v56->m_Items[5] = (System_Action_Action__o *)v105;
  sub_B0D840(
    (BattleServantConfConponent_o *)&v56->m_Items[5],
    (System_Int32_array **)v105,
    v106,
    v107,
    v108,
    v109,
    v110,
    v111);
  v114 = (ChainableActionParallel_o *)sub_B0D974(ChainableActionParallel_TypeInfo, v112, v113);
  ChainableActionParallel___ctor_26942624(v114, v56, 0LL);
  v115 = (System_Action_array *)sub_B0D8BC(System_Action___TypeInfo, 1LL);
  v118 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v116, v117);
  System_Action___ctor(v118, (Il2CppObject *)this, Method_ClassBoardResourceCatalogAssetBundle_LoadEnd__, 0LL);
  if ( !v115 )
    goto LABEL_31;
  if ( v118 )
  {
    v60 = (ChainableActionBase_o *)sub_B0D964(v118, v115->obj.klass->_1.element_class);
    if ( !v60 )
    {
LABEL_30:
      v126 = sub_B0D99C(v60);
      sub_B0D948(v126, 0LL);
    }
  }
  if ( !v115->max_length )
  {
LABEL_29:
    v125 = sub_B0D9A8(v60);
    sub_B0D948(v125, 0LL);
  }
  v115->m_Items[0] = v118;
  sub_B0D840(
    (BattleServantConfConponent_o *)v115->m_Items,
    (System_Int32_array **)v118,
    v119,
    v120,
    v121,
    v122,
    v123,
    v124);
  if ( !v114 )
    goto LABEL_31;
  v60 = ChainableActionBase__Final((ChainableActionBase_o *)v114, v115, 0LL);
  if ( !v60 )
    goto LABEL_31;
  ChainableActionBase__Execute(v60, 0LL);
}


void __fastcall ClassBoardResourceCatalogAssetBundle__ReleaseAll(
        ClassBoardResourceCatalogAssetBundle_o *this,
        const MethodInfo *method)
{
  AssetStorageLoadWrapper_o *assetStorageLoadWrapper; // x0

  assetStorageLoadWrapper = this->fields.assetStorageLoadWrapper;
  if ( !assetStorageLoadWrapper )
    sub_B0D97C(0LL);
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
  AtlasManagerUnit_o *boardUiAtlasManagerUnit; // x0
  AssetStorageLoadWrapper_o *assetStorageLoadWrapper; // x22
  AtlasManagerUnit_o *v27; // x23
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  AtlasManagerUnit_o *v34; // x19
  __int64 v35; // x1
  __int64 v36; // x2
  System_Action_o *v37; // x21

  if ( (byte_421465E & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, callback);
    sub_B0D8A4(&AtlasManagerUnit_TypeInfo, v5);
    sub_B0D8A4(&Method_ClassBoardResourceCatalogAssetBundle___c__DisplayClass35_0__ReloadBoardUIAtlas_b__0__, v6);
    sub_B0D8A4(&ClassBoardResourceCatalogAssetBundle___c__DisplayClass35_0_TypeInfo, v7);
    sub_B0D8A4(&StringLiteral_4012/*"ClassBoard/UI/DownloadClassBoardUIAtlas"*/, v8);
    byte_421465E = 1;
  }
  v9 = sub_B0D974(ClassBoardResourceCatalogAssetBundle___c__DisplayClass35_0_TypeInfo, callback, method);
  ClassBoardResourceCatalogAssetBundle___c__DisplayClass35_0___ctor(
    (ClassBoardResourceCatalogAssetBundle___c__DisplayClass35_0_o *)v9,
    0LL);
  if ( !v9 )
    goto LABEL_8;
  *(_QWORD *)(v9 + 16) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v9 + 16), (System_Int32_array **)this, v11, v12, v13, v14, v15, v16);
  *(_QWORD *)(v9 + 24) = callback;
  sub_B0D840((BattleServantConfConponent_o *)(v9 + 24), (System_Int32_array **)callback, v17, v18, v19, v20, v21, v22);
  boardUiAtlasManagerUnit = this->fields.boardUiAtlasManagerUnit;
  if ( boardUiAtlasManagerUnit )
    AtlasManagerUnit__Release(boardUiAtlasManagerUnit, 0LL);
  assetStorageLoadWrapper = this->fields.assetStorageLoadWrapper;
  v27 = (AtlasManagerUnit_o *)sub_B0D974(AtlasManagerUnit_TypeInfo, v23, v24);
  AtlasManagerUnit___ctor(v27, (System_String_o *)StringLiteral_4012/*"ClassBoard/UI/DownloadClassBoardUIAtlas"*/, assetStorageLoadWrapper, 0LL);
  this->fields.boardUiAtlasManagerUnit = v27;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.boardUiAtlasManagerUnit,
    (System_Int32_array **)v27,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
  v34 = this->fields.boardUiAtlasManagerUnit;
  v37 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v35, v36);
  System_Action___ctor(
    v37,
    (Il2CppObject *)v9,
    Method_ClassBoardResourceCatalogAssetBundle___c__DisplayClass35_0__ReloadBoardUIAtlas_b__0__,
    0LL);
  if ( !v34 )
LABEL_8:
    sub_B0D97C(v10);
  AtlasManagerUnit__Load(v34, v37, 1, 0LL);
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
    sub_B0D97C(0LL);
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
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  __int64 v22; // x1
  __int64 v23; // x2
  AssetLoader_LoadEndDataHandler_o *v24; // x20
  const MethodInfo *v25; // x3

  if ( (byte_4214663 & 1) == 0 )
  {
    sub_B0D8A4(&AssetLoader_LoadEndDataHandler_TypeInfo, f);
    sub_B0D8A4(&Method_ClassBoardResourceCatalogAssetBundle___c__DisplayClass32_0__LoadSystemAsset_b__6__, v5);
    sub_B0D8A4(&ClassBoardResourceCatalogAssetBundle___c__DisplayClass32_0_TypeInfo, v6);
    sub_B0D8A4(&StringLiteral_4009/*"ClassBoard/Main"*/, v7);
    byte_4214663 = 1;
  }
  v8 = sub_B0D974(ClassBoardResourceCatalogAssetBundle___c__DisplayClass32_0_TypeInfo, f, method);
  ClassBoardResourceCatalogAssetBundle___c__DisplayClass32_0___ctor(
    (ClassBoardResourceCatalogAssetBundle___c__DisplayClass32_0_o *)v8,
    0LL);
  if ( !v8 )
    sub_B0D97C(v9);
  *(_QWORD *)(v8 + 24) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v8 + 24), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v8 + 16) = f;
  sub_B0D840((BattleServantConfConponent_o *)(v8 + 16), (System_Int32_array **)f, v16, v17, v18, v19, v20, v21);
  v24 = (AssetLoader_LoadEndDataHandler_o *)sub_B0D974(AssetLoader_LoadEndDataHandler_TypeInfo, v22, v23);
  AssetLoader_LoadEndDataHandler___ctor(
    v24,
    (Il2CppObject *)v8,
    Method_ClassBoardResourceCatalogAssetBundle___c__DisplayClass32_0__LoadSystemAsset_b__6__,
    0LL);
  ClassBoardResourceCatalogAssetBundle__LoadAssetStorage(this, (System_String_o *)StringLiteral_4009/*"ClassBoard/Main"*/, v24, v25);
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
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  __int64 v22; // x1
  __int64 v23; // x2
  AssetLoader_LoadEndDataHandler_o *v24; // x20
  const MethodInfo *v25; // x3

  if ( (byte_4214664 & 1) == 0 )
  {
    sub_B0D8A4(&AssetLoader_LoadEndDataHandler_TypeInfo, f);
    sub_B0D8A4(&Method_ClassBoardResourceCatalogAssetBundle___c__DisplayClass32_1__LoadSystemAsset_b__7__, v5);
    sub_B0D8A4(&ClassBoardResourceCatalogAssetBundle___c__DisplayClass32_1_TypeInfo, v6);
    sub_B0D8A4(&StringLiteral_3996/*"ClassBoard/Bg"*/, v7);
    byte_4214664 = 1;
  }
  v8 = sub_B0D974(ClassBoardResourceCatalogAssetBundle___c__DisplayClass32_1_TypeInfo, f, method);
  ClassBoardResourceCatalogAssetBundle___c__DisplayClass32_1___ctor(
    (ClassBoardResourceCatalogAssetBundle___c__DisplayClass32_1_o *)v8,
    0LL);
  if ( !v8 )
    sub_B0D97C(v9);
  *(_QWORD *)(v8 + 24) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v8 + 24), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v8 + 16) = f;
  sub_B0D840((BattleServantConfConponent_o *)(v8 + 16), (System_Int32_array **)f, v16, v17, v18, v19, v20, v21);
  v24 = (AssetLoader_LoadEndDataHandler_o *)sub_B0D974(AssetLoader_LoadEndDataHandler_TypeInfo, v22, v23);
  AssetLoader_LoadEndDataHandler___ctor(
    v24,
    (Il2CppObject *)v8,
    Method_ClassBoardResourceCatalogAssetBundle___c__DisplayClass32_1__LoadSystemAsset_b__7__,
    0LL);
  ClassBoardResourceCatalogAssetBundle__LoadAssetStorage(this, (System_String_o *)StringLiteral_3996/*"ClassBoard/Bg"*/, v24, v25);
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
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  __int64 v22; // x1
  __int64 v23; // x2
  AssetLoader_LoadEndDataHandler_o *v24; // x20
  const MethodInfo *v25; // x3

  if ( (byte_4214665 & 1) == 0 )
  {
    sub_B0D8A4(&AssetLoader_LoadEndDataHandler_TypeInfo, f);
    sub_B0D8A4(&Method_ClassBoardResourceCatalogAssetBundle___c__DisplayClass32_2__LoadSystemAsset_b__8__, v5);
    sub_B0D8A4(&ClassBoardResourceCatalogAssetBundle___c__DisplayClass32_2_TypeInfo, v6);
    sub_B0D8A4(&StringLiteral_4010/*"ClassBoard/Select"*/, v7);
    byte_4214665 = 1;
  }
  v8 = sub_B0D974(ClassBoardResourceCatalogAssetBundle___c__DisplayClass32_2_TypeInfo, f, method);
  ClassBoardResourceCatalogAssetBundle___c__DisplayClass32_2___ctor(
    (ClassBoardResourceCatalogAssetBundle___c__DisplayClass32_2_o *)v8,
    0LL);
  if ( !v8 )
    sub_B0D97C(v9);
  *(_QWORD *)(v8 + 24) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v8 + 24), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v8 + 16) = f;
  sub_B0D840((BattleServantConfConponent_o *)(v8 + 16), (System_Int32_array **)f, v16, v17, v18, v19, v20, v21);
  v24 = (AssetLoader_LoadEndDataHandler_o *)sub_B0D974(AssetLoader_LoadEndDataHandler_TypeInfo, v22, v23);
  AssetLoader_LoadEndDataHandler___ctor(
    v24,
    (Il2CppObject *)v8,
    Method_ClassBoardResourceCatalogAssetBundle___c__DisplayClass32_2__LoadSystemAsset_b__8__,
    0LL);
  ClassBoardResourceCatalogAssetBundle__LoadAssetStorage(this, (System_String_o *)StringLiteral_4010/*"ClassBoard/Select"*/, v24, v25);
}


void __fastcall ClassBoardResourceCatalogAssetBundle___LoadSystemAsset_b__32_3(
        ClassBoardResourceCatalogAssetBundle_o *this,
        System_Action_o *f,
        const MethodInfo *method)
{
  AtlasManagerUnit_o *boardUiAtlasManagerUnit; // x0

  boardUiAtlasManagerUnit = this->fields.boardUiAtlasManagerUnit;
  if ( !boardUiAtlasManagerUnit )
    sub_B0D97C(0LL);
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
    sub_B0D97C(0LL);
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
    sub_B0D97C(0LL);
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
        sub_B0D840(&_4__this->fields.method_info, asset),
        (_4__this = this->fields.f) == 0LL) )
  {
    sub_B0D97C(_4__this);
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
        sub_B0D840(&_4__this->fields.original_method_info, asset),
        (_4__this = this->fields.f) == 0LL) )
  {
    sub_B0D97C(_4__this);
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
        sub_B0D840(&_4__this->fields.data, asset),
        (_4__this = this->fields.f) == 0LL) )
  {
    sub_B0D97C(_4__this);
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
    sub_B0D97C(this);
  }
  ClassBoardResourceContents__SetBoardUIAtlas(
    (ClassBoardResourceContents_o *)this,
    _4__this->fields.boardUiAtlasManagerUnit,
    0LL);
  ActionExtensions__Call(v3->fields.callback, 0LL);
}