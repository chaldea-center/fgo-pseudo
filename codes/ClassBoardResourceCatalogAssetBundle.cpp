void __fastcall ClassBoardResourceCatalogAssetBundle___ctor(
        ClassBoardResourceCatalogAssetBundle_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  Il2CppObject *v8; // x20
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  AssetStorageLoadWrapper_o *v15; // x20
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7

  if ( (byte_42EA846 & 1) == 0 )
  {
    sub_B5D5C4(&AssetStorageLoadWrapper_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&ClassBoardResourceContents_TypeInfo, v5, v6, v7);
    byte_42EA846 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v8 = (Il2CppObject *)sub_B5D694(ClassBoardResourceContents_TypeInfo);
  System_Object___ctor(v8, 0LL);
  this->fields._Contents_k__BackingField = (struct ClassBoardResourceContents_o *)v8;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._Contents_k__BackingField,
    (System_Int32_array **)v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  v15 = (AssetStorageLoadWrapper_o *)sub_B5D694(AssetStorageLoadWrapper_TypeInfo);
  AssetStorageLoadWrapper___ctor(v15, 0LL);
  this->fields.assetStorageLoadWrapper = v15;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v15, v16, v17, v18, v19, v20, v21);
}


System_String_o *__fastcall ClassBoardResourceCatalogAssetBundle__GetIconAtlasPath(
        ClassBoardResourceCatalogAssetBundle_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EA84D & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_4062/*"ClassBoard/Icon/DownloadClassBoardIconAtlas"*/, (_DWORD)method, v2, v3);
    byte_42EA84D = 1;
  }
  return (System_String_o *)StringLiteral_4062/*"ClassBoard/Icon/DownloadClassBoardIconAtlas"*/;
}


Il2CppObject *__fastcall ClassBoardResourceCatalogAssetBundle__GetObject_object_(
        ClassBoardResourceCatalogAssetBundle_o *this,
        AssetData_o *assetData,
        System_String_o *name,
        const MethodInfo_1ADCF9C *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  UnityEngine_Object_o *Object_WarBoardWaitTimeSetting; // x20

  if ( (byte_42EA292 & 1) == 0 )
  {
    sub_B5D5C4(&Method_AssetData_GetObject_GameObject____68807504, (_DWORD)assetData, (_DWORD)name, method);
    this = (ClassBoardResourceCatalogAssetBundle_o *)sub_B5D5C4(&UnityEngine_Object_TypeInfo, v7, v8, v9);
    byte_42EA292 = 1;
  }
  if ( !assetData )
    goto LABEL_11;
  Object_WarBoardWaitTimeSetting = (UnityEngine_Object_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                             assetData,
                                                             name,
                                                             (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_GameObject____68807504);
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
    sub_B5D69C(this, assetData);
  return (Il2CppObject *)((__int64 (__fastcall *)(UnityEngine_Object_o *))method->rgctx_data->_0_UnityEngine_GameObject_GetComponent_T_->methodPointer)(Object_WarBoardWaitTimeSetting);
}


ClassBoardBlank_o *__fastcall ClassBoardResourceCatalogAssetBundle__GetUniqueBlankObject(
        ClassBoardResourceCatalogAssetBundle_o *this,
        int32_t assetId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  AssetData_o *mainAssetData; // x20
  System_String_o *v9; // x0
  System_String_o *v10; // x0
  int32_t v12; // [xsp+Ch] [xbp-14h] BYREF

  v12 = assetId;
  if ( (byte_42EA84B & 1) == 0 )
  {
    sub_B5D5C4(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardBlank___, assetId, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_4068/*"ClassBoardBlank"*/, v5, v6, v7);
    byte_42EA84B = 1;
  }
  mainAssetData = this->fields.mainAssetData;
  v9 = System_Int32__ToString((int32_t)&v12, 0LL);
  v10 = System_String__Concat_44577788((System_String_o *)StringLiteral_4068/*"ClassBoardBlank"*/, v9, 0LL);
  return (ClassBoardBlank_o *)ClassBoardResourceCatalogAssetBundle__GetObject_object_(
                                this,
                                mainAssetData,
                                v10,
                                (const MethodInfo_1ADCF9C *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardBlank___);
}


ClassBoardLock_o *__fastcall ClassBoardResourceCatalogAssetBundle__GetUniqueLockObject(
        ClassBoardResourceCatalogAssetBundle_o *this,
        int32_t assetId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  AssetData_o *mainAssetData; // x20
  System_String_o *v9; // x0
  System_String_o *v10; // x0
  int32_t v12; // [xsp+Ch] [xbp-14h] BYREF

  v12 = assetId;
  if ( (byte_42EA84C & 1) == 0 )
  {
    sub_B5D5C4(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardLock___, assetId, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_4071/*"ClassBoardLock"*/, v5, v6, v7);
    byte_42EA84C = 1;
  }
  mainAssetData = this->fields.mainAssetData;
  v9 = System_Int32__ToString((int32_t)&v12, 0LL);
  v10 = System_String__Concat_44577788((System_String_o *)StringLiteral_4071/*"ClassBoardLock"*/, v9, 0LL);
  return (ClassBoardLock_o *)ClassBoardResourceCatalogAssetBundle__GetObject_object_(
                               this,
                               mainAssetData,
                               v10,
                               (const MethodInfo_1ADCF9C *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardLock___);
}


ClassBoardSquare_o *__fastcall ClassBoardResourceCatalogAssetBundle__GetUniqueSquareObject(
        ClassBoardResourceCatalogAssetBundle_o *this,
        int32_t assetId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  AssetData_o *mainAssetData; // x20
  System_String_o *v9; // x0
  System_String_o *v10; // x0
  int32_t v12; // [xsp+Ch] [xbp-14h] BYREF

  v12 = assetId;
  if ( (byte_42EA84A & 1) == 0 )
  {
    sub_B5D5C4(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardSquare___, assetId, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_4077/*"ClassBoardSquare"*/, v5, v6, v7);
    byte_42EA84A = 1;
  }
  mainAssetData = this->fields.mainAssetData;
  v9 = System_Int32__ToString((int32_t)&v12, 0LL);
  v10 = System_String__Concat_44577788((System_String_o *)StringLiteral_4077/*"ClassBoardSquare"*/, v9, 0LL);
  return (ClassBoardSquare_o *)ClassBoardResourceCatalogAssetBundle__GetObject_object_(
                                 this,
                                 mainAssetData,
                                 v10,
                                 (const MethodInfo_1ADCF9C *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardSquare___);
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
    sub_B5D69C(assetStorageLoadWrapper, assetBundlePath);
  AssetLoader_LoadEndDataHandler__Invoke(loadCallback, 0LL, 0LL);
}


void __fastcall ClassBoardResourceCatalogAssetBundle__LoadEnd(
        ClassBoardResourceCatalogAssetBundle_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  int v50; // w1
  int v51; // w2
  __int64 v52; // x3
  int v53; // w1
  int v54; // w2
  __int64 v55; // x3
  int v56; // w1
  int v57; // w2
  __int64 v58; // x3
  int v59; // w1
  int v60; // w2
  __int64 v61; // x3
  int v62; // w1
  int v63; // w2
  __int64 v64; // x3
  int v65; // w1
  int v66; // w2
  __int64 v67; // x3
  int v68; // w1
  int v69; // w2
  __int64 v70; // x3
  int v71; // w1
  int v72; // w2
  __int64 v73; // x3
  int v74; // w1
  int v75; // w2
  __int64 v76; // x3
  Il2CppObject *v77; // x24
  Il2CppObject *v78; // x25
  Il2CppObject *v79; // x26
  Il2CppObject *v80; // x27
  Il2CppObject *v81; // x23
  Il2CppObject *v82; // x22
  char *Object_WarBoardWaitTimeSetting; // x0
  __int64 v84; // x1
  System_Int32_array **v85; // x28
  System_Int32_array **v86; // x20
  const MethodInfo *v87; // x5
  System_Int32_array **v88; // x21
  const MethodInfo *v89; // x6
  const MethodInfo *v90; // x5
  System_String_array **v91; // x2
  System_String_array **v92; // x3
  System_Boolean_array **v93; // x4
  System_Int32_array **v94; // x5
  System_Int32_array *v95; // x6
  System_Int32_array *v96; // x7
  System_String_array **v97; // x2
  System_String_array **v98; // x3
  System_Boolean_array **v99; // x4
  System_Int32_array **v100; // x5
  System_Int32_array *v101; // x6
  System_Int32_array *v102; // x7
  System_String_array **v103; // x2
  System_String_array **v104; // x3
  System_Boolean_array **v105; // x4
  System_Int32_array **v106; // x5
  System_Int32_array *v107; // x6
  System_Int32_array *v108; // x7
  ClassBoardDisableOpenDialog_o *classBoardDisableOpenDialog; // [xsp+0h] [xbp-70h]
  ClassBoardLock_o *lockAsset; // [xsp+8h] [xbp-68h]
  Il2CppObject *v111; // [xsp+10h] [xbp-60h]
  Il2CppObject *Object_object; // [xsp+18h] [xbp-58h]

  if ( (byte_42EA848 & 1) == 0 )
  {
    sub_B5D5C4(&Method_AssetData_GetObject_GameObject____68807504, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardBackground___, v5, v6, v7);
    sub_B5D5C4(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardBlank___, v8, v9, v10);
    sub_B5D5C4(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardDisableOpenDialog___, v11, v12, v13);
    sub_B5D5C4(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardLine___, v14, v15, v16);
    sub_B5D5C4(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardLockOpenConfirmDialog___, v17, v18, v19);
    sub_B5D5C4(
      &Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardLockReleaseConditionDialog___,
      v20,
      v21,
      v22);
    sub_B5D5C4(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardLock___, v23, v24, v25);
    sub_B5D5C4(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardSquareDetailDialog___, v26, v27, v28);
    sub_B5D5C4(
      &Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardSquareOpenConfirmDialog___,
      v29,
      v30,
      v31);
    sub_B5D5C4(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardSquare___, v32, v33, v34);
    sub_B5D5C4(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardUIController___, v35, v36, v37);
    sub_B5D5C4(&StringLiteral_4067/*"ClassBoardBg"*/, v38, v39, v40);
    sub_B5D5C4(&StringLiteral_4073/*"ClassBoardLockReleaseConditionDialog"*/, v41, v42, v43);
    sub_B5D5C4(&StringLiteral_4070/*"ClassBoardLine"*/, v44, v45, v46);
    sub_B5D5C4(&StringLiteral_4078/*"ClassBoardSquareDetailDialog"*/, v47, v48, v49);
    sub_B5D5C4(&StringLiteral_4071/*"ClassBoardLock"*/, v50, v51, v52);
    sub_B5D5C4(&StringLiteral_4076/*"ClassBoardSelectView"*/, v53, v54, v55);
    sub_B5D5C4(&StringLiteral_6857/*"ForwardIconAnimObject"*/, v56, v57, v58);
    sub_B5D5C4(&StringLiteral_4068/*"ClassBoardBlank"*/, v59, v60, v61);
    sub_B5D5C4(&StringLiteral_4069/*"ClassBoardDisableOpenDialog"*/, v62, v63, v64);
    sub_B5D5C4(&StringLiteral_4072/*"ClassBoardLockOpenConfirmDialog"*/, v65, v66, v67);
    sub_B5D5C4(&StringLiteral_4077/*"ClassBoardSquare"*/, v68, v69, v70);
    sub_B5D5C4(&StringLiteral_4079/*"ClassBoardSquareOpenConfirmDialog"*/, v71, v72, v73);
    sub_B5D5C4(&StringLiteral_4080/*"ClassBoardUI"*/, v74, v75, v76);
    byte_42EA848 = 1;
  }
  Object_object = ClassBoardResourceCatalogAssetBundle__GetObject_object_(
                    this,
                    this->fields.mainAssetData,
                    (System_String_o *)StringLiteral_4077/*"ClassBoardSquare"*/,
                    (const MethodInfo_1ADCF9C *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardSquare___);
  v111 = ClassBoardResourceCatalogAssetBundle__GetObject_object_(
           this,
           this->fields.mainAssetData,
           (System_String_o *)StringLiteral_4070/*"ClassBoardLine"*/,
           (const MethodInfo_1ADCF9C *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardLine___);
  lockAsset = (ClassBoardLock_o *)ClassBoardResourceCatalogAssetBundle__GetObject_object_(
                                    this,
                                    this->fields.mainAssetData,
                                    (System_String_o *)StringLiteral_4071/*"ClassBoardLock"*/,
                                    (const MethodInfo_1ADCF9C *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardLock___);
  v77 = ClassBoardResourceCatalogAssetBundle__GetObject_object_(
          this,
          this->fields.mainAssetData,
          (System_String_o *)StringLiteral_4068/*"ClassBoardBlank"*/,
          (const MethodInfo_1ADCF9C *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardBlank___);
  classBoardDisableOpenDialog = (ClassBoardDisableOpenDialog_o *)ClassBoardResourceCatalogAssetBundle__GetObject_object_(
                                                                   this,
                                                                   this->fields.mainAssetData,
                                                                   (System_String_o *)StringLiteral_4069/*"ClassBoardDisableOpenDialog"*/,
                                                                   (const MethodInfo_1ADCF9C *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardDisableOpenDialog___);
  v78 = ClassBoardResourceCatalogAssetBundle__GetObject_object_(
          this,
          this->fields.mainAssetData,
          (System_String_o *)StringLiteral_4079/*"ClassBoardSquareOpenConfirmDialog"*/,
          (const MethodInfo_1ADCF9C *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardSquareOpenConfirmDialog___);
  v79 = ClassBoardResourceCatalogAssetBundle__GetObject_object_(
          this,
          this->fields.mainAssetData,
          (System_String_o *)StringLiteral_4072/*"ClassBoardLockOpenConfirmDialog"*/,
          (const MethodInfo_1ADCF9C *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardLockOpenConfirmDialog___);
  v80 = ClassBoardResourceCatalogAssetBundle__GetObject_object_(
          this,
          this->fields.mainAssetData,
          (System_String_o *)StringLiteral_4073/*"ClassBoardLockReleaseConditionDialog"*/,
          (const MethodInfo_1ADCF9C *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardLockReleaseConditionDialog___);
  v81 = ClassBoardResourceCatalogAssetBundle__GetObject_object_(
          this,
          this->fields.mainAssetData,
          (System_String_o *)StringLiteral_4078/*"ClassBoardSquareDetailDialog"*/,
          (const MethodInfo_1ADCF9C *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardSquareDetailDialog___);
  v82 = ClassBoardResourceCatalogAssetBundle__GetObject_object_(
          this,
          this->fields.mainAssetData,
          (System_String_o *)StringLiteral_4080/*"ClassBoardUI"*/,
          (const MethodInfo_1ADCF9C *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardUIController___);
  Object_WarBoardWaitTimeSetting = (char *)ClassBoardResourceCatalogAssetBundle__GetObject_object_(
                                             this,
                                             this->fields.modelAssetData,
                                             (System_String_o *)StringLiteral_4067/*"ClassBoardBg"*/,
                                             (const MethodInfo_1ADCF9C *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardBackground___);
  if ( !this->fields.boardSelectViewAssetData )
    goto LABEL_13;
  v85 = (System_Int32_array **)Object_WarBoardWaitTimeSetting;
  Object_WarBoardWaitTimeSetting = (char *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                             this->fields.boardSelectViewAssetData,
                                             (System_String_o *)StringLiteral_4076/*"ClassBoardSelectView"*/,
                                             (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_GameObject____68807504);
  if ( !this->fields.boardSelectViewAssetData )
    goto LABEL_13;
  v86 = (System_Int32_array **)Object_WarBoardWaitTimeSetting;
  Object_WarBoardWaitTimeSetting = (char *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                             this->fields.boardSelectViewAssetData,
                                             (System_String_o *)StringLiteral_6857/*"ForwardIconAnimObject"*/,
                                             (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_GameObject____68807504);
  if ( !this->fields._Contents_k__BackingField )
    goto LABEL_13;
  v88 = (System_Int32_array **)Object_WarBoardWaitTimeSetting;
  ClassBoardResourceContents__SetContents(
    this->fields._Contents_k__BackingField,
    (ClassBoardSquare_o *)Object_object,
    (ClassBoardLine_o *)v111,
    lockAsset,
    (ClassBoardBlank_o *)v77,
    v87);
  Object_WarBoardWaitTimeSetting = (char *)this->fields._Contents_k__BackingField;
  if ( !Object_WarBoardWaitTimeSetting )
    goto LABEL_13;
  ClassBoardResourceContents__SetContentsDialog(
    (ClassBoardResourceContents_o *)Object_WarBoardWaitTimeSetting,
    classBoardDisableOpenDialog,
    (ClassBoardSquareOpenConfirmDialog_o *)v78,
    (ClassBoardLockOpenConfirmDialog_o *)v79,
    (ClassBoardLockReleaseConditionDialog_o *)v80,
    (ClassBoardSquareDetailDialog_o *)v81,
    v89);
  Object_WarBoardWaitTimeSetting = (char *)this->fields._Contents_k__BackingField;
  if ( !Object_WarBoardWaitTimeSetting )
    goto LABEL_13;
  ClassBoardResourceContents__SetContentsUI(
    (ClassBoardResourceContents_o *)Object_WarBoardWaitTimeSetting,
    (ClassBoardUIController_o *)v82,
    this->fields.boardUiAtlasManagerUnit,
    this->fields.iconAtlasManagerUnit,
    this->fields.classUiAtlasManagerUnit,
    v90);
  Object_WarBoardWaitTimeSetting = (char *)this->fields._Contents_k__BackingField;
  if ( !Object_WarBoardWaitTimeSetting )
    goto LABEL_13;
  *((_QWORD *)Object_WarBoardWaitTimeSetting + 12) = v85;
  sub_B5D560((BattleServantConfConponent_o *)(Object_WarBoardWaitTimeSetting + 96), v85, v91, v92, v93, v94, v95, v96);
  Object_WarBoardWaitTimeSetting = (char *)this->fields._Contents_k__BackingField;
  if ( !Object_WarBoardWaitTimeSetting
    || (*((_QWORD *)Object_WarBoardWaitTimeSetting + 13) = v86,
        sub_B5D560(
          (BattleServantConfConponent_o *)(Object_WarBoardWaitTimeSetting + 104),
          v86,
          v97,
          v98,
          v99,
          v100,
          v101,
          v102),
        (Object_WarBoardWaitTimeSetting = (char *)this->fields._Contents_k__BackingField) == 0LL)
    || (*((_QWORD *)Object_WarBoardWaitTimeSetting + 14) = v88,
        sub_B5D560(
          (BattleServantConfConponent_o *)(Object_WarBoardWaitTimeSetting + 112),
          v88,
          v103,
          v104,
          v105,
          v106,
          v107,
          v108),
        (Object_WarBoardWaitTimeSetting = (char *)this->fields.loadEndCallback) == 0LL) )
  {
LABEL_13:
    sub_B5D69C(Object_WarBoardWaitTimeSetting, v84);
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
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  int v40; // w1
  int v41; // w2
  __int64 v42; // x3
  int v43; // w1
  int v44; // w2
  __int64 v45; // x3
  int v46; // w1
  int v47; // w2
  __int64 v48; // x3
  int v49; // w1
  int v50; // w2
  __int64 v51; // x3
  int v52; // w1
  int v53; // w2
  __int64 v54; // x3
  int v55; // w1
  int v56; // w2
  __int64 v57; // x3
  AssetStorageLoadWrapper_o *assetStorageLoadWrapper; // x20
  AtlasManagerUnit_o *v59; // x21
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  AssetStorageLoadWrapper_o *v66; // x20
  AtlasManagerUnit_o *v67; // x21
  System_String_array **v68; // x2
  System_String_array **v69; // x3
  System_Boolean_array **v70; // x4
  System_Int32_array **v71; // x5
  System_Int32_array *v72; // x6
  System_Int32_array *v73; // x7
  AssetStorageLoadWrapper_o *v74; // x20
  AtlasManagerUnit_o *v75; // x21
  System_String_array **v76; // x2
  System_String_array **v77; // x3
  System_Boolean_array **v78; // x4
  System_Int32_array **v79; // x5
  System_Int32_array *v80; // x6
  System_Int32_array *v81; // x7
  System_Action_Action__array *v82; // x20
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v83; // x21
  ChainableActionBase_o *v84; // x0
  __int64 v85; // x1
  System_String_array **v86; // x2
  System_String_array **v87; // x3
  System_Boolean_array **v88; // x4
  System_Int32_array **v89; // x5
  System_Int32_array *v90; // x6
  System_Int32_array *v91; // x7
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v92; // x21
  System_String_array **v93; // x2
  System_String_array **v94; // x3
  System_Boolean_array **v95; // x4
  System_Int32_array **v96; // x5
  System_Int32_array *v97; // x6
  System_Int32_array *v98; // x7
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v99; // x21
  System_String_array **v100; // x2
  System_String_array **v101; // x3
  System_Boolean_array **v102; // x4
  System_Int32_array **v103; // x5
  System_Int32_array *v104; // x6
  System_Int32_array *v105; // x7
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v106; // x21
  System_String_array **v107; // x2
  System_String_array **v108; // x3
  System_Boolean_array **v109; // x4
  System_Int32_array **v110; // x5
  System_Int32_array *v111; // x6
  System_Int32_array *v112; // x7
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v113; // x21
  System_String_array **v114; // x2
  System_String_array **v115; // x3
  System_Boolean_array **v116; // x4
  System_Int32_array **v117; // x5
  System_Int32_array *v118; // x6
  System_Int32_array *v119; // x7
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v120; // x21
  System_String_array **v121; // x2
  System_String_array **v122; // x3
  System_Boolean_array **v123; // x4
  System_Int32_array **v124; // x5
  System_Int32_array *v125; // x6
  System_Int32_array *v126; // x7
  ChainableActionParallel_o *v127; // x21
  System_Action_array *v128; // x20
  System_Action_o *v129; // x22
  System_String_array **v130; // x2
  System_String_array **v131; // x3
  System_Boolean_array **v132; // x4
  System_Int32_array **v133; // x5
  System_Int32_array *v134; // x6
  System_Int32_array *v135; // x7
  __int64 v136; // x0
  __int64 v137; // x0

  if ( (byte_42EA847 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action___TypeInfo, (_DWORD)callback, (_DWORD)method, v3);
    sub_B5D5C4(&System_Action_Action____TypeInfo, v10, v11, v12);
    sub_B5D5C4(&Method_System_Action_Action___ctor__, v13, v14, v15);
    sub_B5D5C4(&System_Action_Action__TypeInfo, v16, v17, v18);
    sub_B5D5C4(&System_Action_TypeInfo, v19, v20, v21);
    sub_B5D5C4(&AtlasManagerUnit_TypeInfo, v22, v23, v24);
    sub_B5D5C4(&ChainableActionParallel_TypeInfo, v25, v26, v27);
    sub_B5D5C4(&Method_ClassBoardResourceCatalogAssetBundle_LoadEnd__, v28, v29, v30);
    sub_B5D5C4(&Method_ClassBoardResourceCatalogAssetBundle__LoadSystemAsset_b__32_0__, v31, v32, v33);
    sub_B5D5C4(&Method_ClassBoardResourceCatalogAssetBundle__LoadSystemAsset_b__32_1__, v34, v35, v36);
    sub_B5D5C4(&Method_ClassBoardResourceCatalogAssetBundle__LoadSystemAsset_b__32_2__, v37, v38, v39);
    sub_B5D5C4(&Method_ClassBoardResourceCatalogAssetBundle__LoadSystemAsset_b__32_3__, v40, v41, v42);
    sub_B5D5C4(&Method_ClassBoardResourceCatalogAssetBundle__LoadSystemAsset_b__32_4__, v43, v44, v45);
    sub_B5D5C4(&Method_ClassBoardResourceCatalogAssetBundle__LoadSystemAsset_b__32_5__, v46, v47, v48);
    sub_B5D5C4(&StringLiteral_4066/*"ClassBoard/UI/DownloadClassBoardUIAtlas"*/, v49, v50, v51);
    sub_B5D5C4(&StringLiteral_4065/*"ClassBoard/UI/DownloadClassBoardClassUIAtlas"*/, v52, v53, v54);
    sub_B5D5C4(&StringLiteral_4062/*"ClassBoard/Icon/DownloadClassBoardIconAtlas"*/, v55, v56, v57);
    byte_42EA847 = 1;
  }
  this->fields.loadEndCallback = callback;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.loadEndCallback,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  assetStorageLoadWrapper = this->fields.assetStorageLoadWrapper;
  v59 = (AtlasManagerUnit_o *)sub_B5D694(AtlasManagerUnit_TypeInfo);
  AtlasManagerUnit___ctor(v59, (System_String_o *)StringLiteral_4066/*"ClassBoard/UI/DownloadClassBoardUIAtlas"*/, assetStorageLoadWrapper, 0LL);
  this->fields.boardUiAtlasManagerUnit = v59;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.boardUiAtlasManagerUnit,
    (System_Int32_array **)v59,
    v60,
    v61,
    v62,
    v63,
    v64,
    v65);
  v66 = this->fields.assetStorageLoadWrapper;
  v67 = (AtlasManagerUnit_o *)sub_B5D694(AtlasManagerUnit_TypeInfo);
  AtlasManagerUnit___ctor(v67, (System_String_o *)StringLiteral_4065/*"ClassBoard/UI/DownloadClassBoardClassUIAtlas"*/, v66, 0LL);
  this->fields.classUiAtlasManagerUnit = v67;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.classUiAtlasManagerUnit,
    (System_Int32_array **)v67,
    v68,
    v69,
    v70,
    v71,
    v72,
    v73);
  v74 = this->fields.assetStorageLoadWrapper;
  v75 = (AtlasManagerUnit_o *)sub_B5D694(AtlasManagerUnit_TypeInfo);
  AtlasManagerUnit___ctor(v75, (System_String_o *)StringLiteral_4062/*"ClassBoard/Icon/DownloadClassBoardIconAtlas"*/, v74, 0LL);
  this->fields.iconAtlasManagerUnit = v75;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.iconAtlasManagerUnit,
    (System_Int32_array **)v75,
    v76,
    v77,
    v78,
    v79,
    v80,
    v81);
  v82 = (System_Action_Action__array *)sub_B5D5DC(System_Action_Action____TypeInfo, 6LL);
  v83 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_Action__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v83,
    (Il2CppObject *)this,
    Method_ClassBoardResourceCatalogAssetBundle__LoadSystemAsset_b__32_0__,
    (const MethodInfo_258B320 *)Method_System_Action_Action___ctor__);
  if ( !v82 )
LABEL_31:
    sub_B5D69C(v84, v85);
  if ( v83 )
  {
    v84 = (ChainableActionBase_o *)sub_B5D684(v83, v82->obj.klass->_1.element_class);
    if ( !v84 )
      goto LABEL_30;
  }
  if ( !v82->max_length )
    goto LABEL_29;
  v82->m_Items[0] = (System_Action_Action__o *)v83;
  sub_B5D560((BattleServantConfConponent_o *)v82->m_Items, (System_Int32_array **)v83, v86, v87, v88, v89, v90, v91);
  v92 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_Action__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v92,
    (Il2CppObject *)this,
    Method_ClassBoardResourceCatalogAssetBundle__LoadSystemAsset_b__32_1__,
    (const MethodInfo_258B320 *)Method_System_Action_Action___ctor__);
  if ( v92 )
  {
    v84 = (ChainableActionBase_o *)sub_B5D684(v92, v82->obj.klass->_1.element_class);
    if ( !v84 )
      goto LABEL_30;
  }
  if ( v82->max_length <= 1 )
    goto LABEL_29;
  v82->m_Items[1] = (System_Action_Action__o *)v92;
  sub_B5D560((BattleServantConfConponent_o *)&v82->m_Items[1], (System_Int32_array **)v92, v93, v94, v95, v96, v97, v98);
  v99 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_Action__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v99,
    (Il2CppObject *)this,
    Method_ClassBoardResourceCatalogAssetBundle__LoadSystemAsset_b__32_2__,
    (const MethodInfo_258B320 *)Method_System_Action_Action___ctor__);
  if ( v99 )
  {
    v84 = (ChainableActionBase_o *)sub_B5D684(v99, v82->obj.klass->_1.element_class);
    if ( !v84 )
      goto LABEL_30;
  }
  if ( v82->max_length <= 2 )
    goto LABEL_29;
  v82->m_Items[2] = (System_Action_Action__o *)v99;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v82->m_Items[2],
    (System_Int32_array **)v99,
    v100,
    v101,
    v102,
    v103,
    v104,
    v105);
  v106 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_Action__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v106,
    (Il2CppObject *)this,
    Method_ClassBoardResourceCatalogAssetBundle__LoadSystemAsset_b__32_3__,
    (const MethodInfo_258B320 *)Method_System_Action_Action___ctor__);
  if ( v106 )
  {
    v84 = (ChainableActionBase_o *)sub_B5D684(v106, v82->obj.klass->_1.element_class);
    if ( !v84 )
      goto LABEL_30;
  }
  if ( v82->max_length <= 3 )
    goto LABEL_29;
  v82->m_Items[3] = (System_Action_Action__o *)v106;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v82->m_Items[3],
    (System_Int32_array **)v106,
    v107,
    v108,
    v109,
    v110,
    v111,
    v112);
  v113 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_Action__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v113,
    (Il2CppObject *)this,
    Method_ClassBoardResourceCatalogAssetBundle__LoadSystemAsset_b__32_4__,
    (const MethodInfo_258B320 *)Method_System_Action_Action___ctor__);
  if ( v113 )
  {
    v84 = (ChainableActionBase_o *)sub_B5D684(v113, v82->obj.klass->_1.element_class);
    if ( !v84 )
      goto LABEL_30;
  }
  if ( v82->max_length <= 4 )
    goto LABEL_29;
  v82->m_Items[4] = (System_Action_Action__o *)v113;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v82->m_Items[4],
    (System_Int32_array **)v113,
    v114,
    v115,
    v116,
    v117,
    v118,
    v119);
  v120 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_Action__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v120,
    (Il2CppObject *)this,
    Method_ClassBoardResourceCatalogAssetBundle__LoadSystemAsset_b__32_5__,
    (const MethodInfo_258B320 *)Method_System_Action_Action___ctor__);
  if ( v120 )
  {
    v84 = (ChainableActionBase_o *)sub_B5D684(v120, v82->obj.klass->_1.element_class);
    if ( !v84 )
      goto LABEL_30;
  }
  if ( v82->max_length <= 5 )
    goto LABEL_29;
  v82->m_Items[5] = (System_Action_Action__o *)v120;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v82->m_Items[5],
    (System_Int32_array **)v120,
    v121,
    v122,
    v123,
    v124,
    v125,
    v126);
  v127 = (ChainableActionParallel_o *)sub_B5D694(ChainableActionParallel_TypeInfo);
  ChainableActionParallel___ctor_30552664(v127, v82, 0LL);
  v128 = (System_Action_array *)sub_B5D5DC(System_Action___TypeInfo, 1LL);
  v129 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v129, (Il2CppObject *)this, Method_ClassBoardResourceCatalogAssetBundle_LoadEnd__, 0LL);
  if ( !v128 )
    goto LABEL_31;
  if ( v129 )
  {
    v84 = (ChainableActionBase_o *)sub_B5D684(v129, v128->obj.klass->_1.element_class);
    if ( !v84 )
    {
LABEL_30:
      v137 = sub_B5D6BC(v84);
      sub_B5D668(v137, 0LL);
    }
  }
  if ( !v128->max_length )
  {
LABEL_29:
    v136 = sub_B5D6C8(v84);
    sub_B5D668(v136, 0LL);
  }
  v128->m_Items[0] = v129;
  sub_B5D560(
    (BattleServantConfConponent_o *)v128->m_Items,
    (System_Int32_array **)v129,
    v130,
    v131,
    v132,
    v133,
    v134,
    v135);
  if ( !v127 )
    goto LABEL_31;
  v84 = ChainableActionBase__Final((ChainableActionBase_o *)v127, v128, 0LL);
  if ( !v84 )
    goto LABEL_31;
  ChainableActionBase__Execute(v84, 0LL);
}


void __fastcall ClassBoardResourceCatalogAssetBundle__ReleaseAll(
        ClassBoardResourceCatalogAssetBundle_o *this,
        const MethodInfo *method)
{
  AssetStorageLoadWrapper_o *assetStorageLoadWrapper; // x0

  assetStorageLoadWrapper = this->fields.assetStorageLoadWrapper;
  if ( !assetStorageLoadWrapper )
    sub_B5D69C(0LL, method);
  AssetStorageLoadWrapper__ReleaseAll(assetStorageLoadWrapper, 0LL);
}


void __fastcall ClassBoardResourceCatalogAssetBundle__ReloadBoardUIAtlas(
        ClassBoardResourceCatalogAssetBundle_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  __int64 v18; // x20
  __int64 v19; // x0
  __int64 v20; // x1
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  AtlasManagerUnit_o *boardUiAtlasManagerUnit; // x0
  AssetStorageLoadWrapper_o *assetStorageLoadWrapper; // x22
  AtlasManagerUnit_o *v35; // x23
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  AtlasManagerUnit_o *v42; // x19
  System_Action_o *v43; // x21

  if ( (byte_42EA849 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)callback, (_DWORD)method, v3);
    sub_B5D5C4(&AtlasManagerUnit_TypeInfo, v6, v7, v8);
    sub_B5D5C4(
      &Method_ClassBoardResourceCatalogAssetBundle___c__DisplayClass35_0__ReloadBoardUIAtlas_b__0__,
      v9,
      v10,
      v11);
    sub_B5D5C4(&ClassBoardResourceCatalogAssetBundle___c__DisplayClass35_0_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_4066/*"ClassBoard/UI/DownloadClassBoardUIAtlas"*/, v15, v16, v17);
    byte_42EA849 = 1;
  }
  v18 = sub_B5D694(ClassBoardResourceCatalogAssetBundle___c__DisplayClass35_0_TypeInfo);
  ClassBoardResourceCatalogAssetBundle___c__DisplayClass35_0___ctor(
    (ClassBoardResourceCatalogAssetBundle___c__DisplayClass35_0_o *)v18,
    0LL);
  if ( !v18 )
    goto LABEL_8;
  *(_QWORD *)(v18 + 16) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v18 + 16), (System_Int32_array **)this, v21, v22, v23, v24, v25, v26);
  *(_QWORD *)(v18 + 24) = callback;
  sub_B5D560((BattleServantConfConponent_o *)(v18 + 24), (System_Int32_array **)callback, v27, v28, v29, v30, v31, v32);
  boardUiAtlasManagerUnit = this->fields.boardUiAtlasManagerUnit;
  if ( boardUiAtlasManagerUnit )
    AtlasManagerUnit__Release(boardUiAtlasManagerUnit, 0LL);
  assetStorageLoadWrapper = this->fields.assetStorageLoadWrapper;
  v35 = (AtlasManagerUnit_o *)sub_B5D694(AtlasManagerUnit_TypeInfo);
  AtlasManagerUnit___ctor(v35, (System_String_o *)StringLiteral_4066/*"ClassBoard/UI/DownloadClassBoardUIAtlas"*/, assetStorageLoadWrapper, 0LL);
  this->fields.boardUiAtlasManagerUnit = v35;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.boardUiAtlasManagerUnit,
    (System_Int32_array **)v35,
    v36,
    v37,
    v38,
    v39,
    v40,
    v41);
  v42 = this->fields.boardUiAtlasManagerUnit;
  v43 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v43,
    (Il2CppObject *)v18,
    Method_ClassBoardResourceCatalogAssetBundle___c__DisplayClass35_0__ReloadBoardUIAtlas_b__0__,
    0LL);
  if ( !v42 )
LABEL_8:
    sub_B5D69C(v19, v20);
  AtlasManagerUnit__Load(v42, v43, 1, 0LL);
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
    sub_B5D69C(0LL, sprite);
  AtlasManagerUnit__SetUI(boardUiAtlasManagerUnit, sprite, spriteName, 0LL);
}


void __fastcall ClassBoardResourceCatalogAssetBundle___LoadSystemAsset_b__32_0(
        ClassBoardResourceCatalogAssetBundle_o *this,
        System_Action_o *f,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  __int64 v15; // x21
  __int64 v16; // x0
  __int64 v17; // x1
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  AssetLoader_LoadEndDataHandler_o *v30; // x20
  const MethodInfo *v31; // x3

  if ( (byte_42EA84E & 1) == 0 )
  {
    sub_B5D5C4(&AssetLoader_LoadEndDataHandler_TypeInfo, (_DWORD)f, (_DWORD)method, v3);
    sub_B5D5C4(&Method_ClassBoardResourceCatalogAssetBundle___c__DisplayClass32_0__LoadSystemAsset_b__6__, v6, v7, v8);
    sub_B5D5C4(&ClassBoardResourceCatalogAssetBundle___c__DisplayClass32_0_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_4063/*"ClassBoard/Main"*/, v12, v13, v14);
    byte_42EA84E = 1;
  }
  v15 = sub_B5D694(ClassBoardResourceCatalogAssetBundle___c__DisplayClass32_0_TypeInfo);
  ClassBoardResourceCatalogAssetBundle___c__DisplayClass32_0___ctor(
    (ClassBoardResourceCatalogAssetBundle___c__DisplayClass32_0_o *)v15,
    0LL);
  if ( !v15 )
    sub_B5D69C(v16, v17);
  *(_QWORD *)(v15 + 24) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v15 + 24), (System_Int32_array **)this, v18, v19, v20, v21, v22, v23);
  *(_QWORD *)(v15 + 16) = f;
  sub_B5D560((BattleServantConfConponent_o *)(v15 + 16), (System_Int32_array **)f, v24, v25, v26, v27, v28, v29);
  v30 = (AssetLoader_LoadEndDataHandler_o *)sub_B5D694(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v30,
    (Il2CppObject *)v15,
    Method_ClassBoardResourceCatalogAssetBundle___c__DisplayClass32_0__LoadSystemAsset_b__6__,
    0LL);
  ClassBoardResourceCatalogAssetBundle__LoadAssetStorage(this, (System_String_o *)StringLiteral_4063/*"ClassBoard/Main"*/, v30, v31);
}


void __fastcall ClassBoardResourceCatalogAssetBundle___LoadSystemAsset_b__32_1(
        ClassBoardResourceCatalogAssetBundle_o *this,
        System_Action_o *f,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  __int64 v15; // x21
  __int64 v16; // x0
  __int64 v17; // x1
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  AssetLoader_LoadEndDataHandler_o *v30; // x20
  const MethodInfo *v31; // x3

  if ( (byte_42EA84F & 1) == 0 )
  {
    sub_B5D5C4(&AssetLoader_LoadEndDataHandler_TypeInfo, (_DWORD)f, (_DWORD)method, v3);
    sub_B5D5C4(&Method_ClassBoardResourceCatalogAssetBundle___c__DisplayClass32_1__LoadSystemAsset_b__7__, v6, v7, v8);
    sub_B5D5C4(&ClassBoardResourceCatalogAssetBundle___c__DisplayClass32_1_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_4050/*"ClassBoard/Bg"*/, v12, v13, v14);
    byte_42EA84F = 1;
  }
  v15 = sub_B5D694(ClassBoardResourceCatalogAssetBundle___c__DisplayClass32_1_TypeInfo);
  ClassBoardResourceCatalogAssetBundle___c__DisplayClass32_1___ctor(
    (ClassBoardResourceCatalogAssetBundle___c__DisplayClass32_1_o *)v15,
    0LL);
  if ( !v15 )
    sub_B5D69C(v16, v17);
  *(_QWORD *)(v15 + 24) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v15 + 24), (System_Int32_array **)this, v18, v19, v20, v21, v22, v23);
  *(_QWORD *)(v15 + 16) = f;
  sub_B5D560((BattleServantConfConponent_o *)(v15 + 16), (System_Int32_array **)f, v24, v25, v26, v27, v28, v29);
  v30 = (AssetLoader_LoadEndDataHandler_o *)sub_B5D694(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v30,
    (Il2CppObject *)v15,
    Method_ClassBoardResourceCatalogAssetBundle___c__DisplayClass32_1__LoadSystemAsset_b__7__,
    0LL);
  ClassBoardResourceCatalogAssetBundle__LoadAssetStorage(this, (System_String_o *)StringLiteral_4050/*"ClassBoard/Bg"*/, v30, v31);
}


void __fastcall ClassBoardResourceCatalogAssetBundle___LoadSystemAsset_b__32_2(
        ClassBoardResourceCatalogAssetBundle_o *this,
        System_Action_o *f,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  __int64 v15; // x21
  __int64 v16; // x0
  __int64 v17; // x1
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  AssetLoader_LoadEndDataHandler_o *v30; // x20
  const MethodInfo *v31; // x3

  if ( (byte_42EA850 & 1) == 0 )
  {
    sub_B5D5C4(&AssetLoader_LoadEndDataHandler_TypeInfo, (_DWORD)f, (_DWORD)method, v3);
    sub_B5D5C4(&Method_ClassBoardResourceCatalogAssetBundle___c__DisplayClass32_2__LoadSystemAsset_b__8__, v6, v7, v8);
    sub_B5D5C4(&ClassBoardResourceCatalogAssetBundle___c__DisplayClass32_2_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_4064/*"ClassBoard/Select"*/, v12, v13, v14);
    byte_42EA850 = 1;
  }
  v15 = sub_B5D694(ClassBoardResourceCatalogAssetBundle___c__DisplayClass32_2_TypeInfo);
  ClassBoardResourceCatalogAssetBundle___c__DisplayClass32_2___ctor(
    (ClassBoardResourceCatalogAssetBundle___c__DisplayClass32_2_o *)v15,
    0LL);
  if ( !v15 )
    sub_B5D69C(v16, v17);
  *(_QWORD *)(v15 + 24) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v15 + 24), (System_Int32_array **)this, v18, v19, v20, v21, v22, v23);
  *(_QWORD *)(v15 + 16) = f;
  sub_B5D560((BattleServantConfConponent_o *)(v15 + 16), (System_Int32_array **)f, v24, v25, v26, v27, v28, v29);
  v30 = (AssetLoader_LoadEndDataHandler_o *)sub_B5D694(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v30,
    (Il2CppObject *)v15,
    Method_ClassBoardResourceCatalogAssetBundle___c__DisplayClass32_2__LoadSystemAsset_b__8__,
    0LL);
  ClassBoardResourceCatalogAssetBundle__LoadAssetStorage(this, (System_String_o *)StringLiteral_4064/*"ClassBoard/Select"*/, v30, v31);
}


void __fastcall ClassBoardResourceCatalogAssetBundle___LoadSystemAsset_b__32_3(
        ClassBoardResourceCatalogAssetBundle_o *this,
        System_Action_o *f,
        const MethodInfo *method)
{
  AtlasManagerUnit_o *boardUiAtlasManagerUnit; // x0

  boardUiAtlasManagerUnit = this->fields.boardUiAtlasManagerUnit;
  if ( !boardUiAtlasManagerUnit )
    sub_B5D69C(0LL, f);
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
    sub_B5D69C(0LL, f);
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
    sub_B5D69C(0LL, f);
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
        sub_B5D560(&_4__this->fields.method_info),
        (_4__this = this->fields.f) == 0LL) )
  {
    sub_B5D69C(_4__this, asset);
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
        sub_B5D560(&_4__this->fields.original_method_info),
        (_4__this = this->fields.f) == 0LL) )
  {
    sub_B5D69C(_4__this, asset);
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
        sub_B5D560(&_4__this->fields.data),
        (_4__this = this->fields.f) == 0LL) )
  {
    sub_B5D69C(_4__this, asset);
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
    sub_B5D69C(this, method);
  }
  ClassBoardResourceContents__SetBoardUIAtlas(
    (ClassBoardResourceContents_o *)this,
    _4__this->fields.boardUiAtlasManagerUnit,
    0LL);
  ActionExtensions__Call(v3->fields.callback, 0LL);
}