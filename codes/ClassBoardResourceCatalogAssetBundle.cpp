void ClassBoardResourceCatalogAssetBundle___ctor(
        ClassBoardResourceCatalogAssetBundle_o *this,
        const MethodInfo *method)
{
  Il2CppObject *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  AssetStorageLoadWrapper_o *v10; // x20
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7

  if ( (byte_4CF22AC & 1) == 0 )
  {
    sub_1C7BAE8(&AssetStorageLoadWrapper_TypeInfo);
    sub_1C7BAE8(&ClassBoardResourceContents_TypeInfo);
    byte_4CF22AC = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  v3 = (Il2CppObject *)sub_1C7BD34(ClassBoardResourceContents_TypeInfo);
  System_Object___ctor(v3, 0);
  this->fields._Contents_k__BackingField = (struct ClassBoardResourceContents_o *)v3;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields._Contents_k__BackingField,
    (int32_t)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  v10 = (AssetStorageLoadWrapper_o *)sub_1C7BD34(AssetStorageLoadWrapper_TypeInfo);
  AssetStorageLoadWrapper___ctor(v10, 0);
  this->fields.assetStorageLoadWrapper = v10;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)v10, v11, v12, v13, v14, v15, v16);
}


System_String_o *ClassBoardResourceCatalogAssetBundle__GetIconAtlasPath(
        ClassBoardResourceCatalogAssetBundle_o *this,
        const MethodInfo *method)
{
  if ( (byte_4CF22B6 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_4464/*"ClassBoard/Icon/DownloadClassBoardIconAtlas"*/);
    byte_4CF22B6 = 1;
  }
  return (System_String_o *)StringLiteral_4464/*"ClassBoard/Icon/DownloadClassBoardIconAtlas"*/;
}


// local variable allocation has failed, the output may be wrong!
Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o ClassBoardResourceCatalogAssetBundle__GetObject___Il2CppFullySharedGenericType_(
        ClassBoardResourceCatalogAssetBundle_o *this,
        AssetData_o *assetData,
        System_String_o *name,
        const MethodInfo_3163EB4 *method)
{
  __int64 v4; // x4
  __int64 v5; // x20
  __int64 v8; // x8
  size_t v10; // x21
  void *v11; // x0
  __int64 v12; // x1
  Il2CppObject *Object_object__51713432; // x23
  __int64 *v14; // x1
  __int64 v15; // x0
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v16; // x0
  void *v17; // x1
  _QWORD v18[2]; // [xsp+0h] [xbp-10h] BYREF
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o result; // 0:x0.16

  v5 = v4;
  v18[1] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v8 = *(_QWORD *)(v4 + 56);
  if ( !v8 )
  {
    sub_1C7BAE8(&Method_AssetData_GetObject_GameObject____78791560);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    v8 = *(_QWORD *)(v5 + 56);
    if ( !v8 )
    {
      sub_1C51BD8();
      v8 = *(_QWORD *)(v5 + 56);
    }
  }
  v10 = *(unsigned int *)(*(_QWORD *)v8 + 252LL);
  v11 = memset((char *)v18 - ((v10 + 15) & 0x1FFFFFFF0LL), 0, v10);
  if ( !assetData )
    goto LABEL_12;
  Object_object__51713432 = AssetData__GetObject_object__51713432(
                              assetData,
                              name,
                              (const MethodInfo_3151598 *)Method_AssetData_GetObject_GameObject____78791560);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v11 = (void *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Object_object__51713432, 0, 0);
  if ( ((unsigned __int8)v11 & 1) == 0 )
  {
    if ( Object_object__51713432 )
    {
      v14 = *(__int64 **)(*(_QWORD *)(v5 + 56) + 8LL);
      v15 = *v14;
      v18[0] = (char *)v18 - ((v10 + 15) & 0x1FFFFFFF0LL);
      ((void (__fastcall *)(__int64, __int64 *, Il2CppObject *, _QWORD *, _QWORD))v14[2])(
        v15,
        v14,
        Object_object__51713432,
        v18,
        v18[0]);
      goto LABEL_11;
    }
LABEL_12:
    sub_1C7BD40(v11, v12);
  }
  memset((char *)v18 - ((v10 + 15) & 0x1FFFFFFF0LL), 0, v10);
  memcpy((char *)v18 - ((v10 + 15) & 0x1FFFFFFF0LL), (char *)v18 - ((v10 + 15) & 0x1FFFFFFF0LL), v10);
LABEL_11:
  v16 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)memcpy(
                                                                    (void *)method,
                                                                    (char *)v18 - ((v10 + 15) & 0x1FFFFFFF0LL),
                                                                    v10);
  result.monitor = v17;
  result.klass = v16;
  return result;
}


Il2CppObject *ClassBoardResourceCatalogAssetBundle__GetObject_object_(
        ClassBoardResourceCatalogAssetBundle_o *this,
        AssetData_o *assetData,
        System_String_o *name,
        const MethodInfo_3163DF0 *method)
{
  Il2CppObject *Object_object__51713432; // x20

  if ( !method->rgctx_data )
  {
    sub_1C7BAE8(&Method_AssetData_GetObject_GameObject____78791560);
    this = (ClassBoardResourceCatalogAssetBundle_o *)sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    if ( !method->rgctx_data )
      this = (ClassBoardResourceCatalogAssetBundle_o *)sub_1C51BD8();
  }
  if ( !assetData )
    goto LABEL_11;
  Object_object__51713432 = AssetData__GetObject_object__51713432(
                              assetData,
                              name,
                              (const MethodInfo_3151598 *)Method_AssetData_GetObject_GameObject____78791560);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (ClassBoardResourceCatalogAssetBundle_o *)UnityEngine_Object__op_Equality(
                                                     (UnityEngine_Object_o *)Object_object__51713432,
                                                     0,
                                                     0);
  if ( ((unsigned __int8)this & 1) != 0 )
    return 0;
  if ( !Object_object__51713432 )
LABEL_11:
    sub_1C7BD40(this, assetData);
  return UnityEngine_GameObject__GetComponent_object_(
           (UnityEngine_GameObject_o *)Object_object__51713432,
           (const MethodInfo_31C70C8 *)method->rgctx_data->_1_UnityEngine_GameObject_GetComponent_T_);
}


ClassBoardBlank_o *ClassBoardResourceCatalogAssetBundle__GetUniqueBlankObject(
        ClassBoardResourceCatalogAssetBundle_o *this,
        int32_t assetId,
        const MethodInfo *method)
{
  AssetData_o *mainAssetData; // x20
  System_String_o *v5; // x0
  System_String_o *v6; // x0
  int32_t v8; // [xsp+Ch] [xbp-24h] BYREF

  v8 = assetId;
  if ( (byte_4CF22B1 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardBlank___);
    sub_1C7BAE8(&StringLiteral_4470/*"ClassBoardBlank"*/);
    byte_4CF22B1 = 1;
  }
  mainAssetData = this->fields.mainAssetData;
  v5 = System_Int32__ToString((int32_t)&v8, 0);
  v6 = System_String__Concat_64176912((System_String_o *)StringLiteral_4470/*"ClassBoardBlank"*/, v5, 0);
  return (ClassBoardBlank_o *)ClassBoardResourceCatalogAssetBundle__GetObject_object_(
                                this,
                                mainAssetData,
                                v6,
                                (const MethodInfo_3163DF0 *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardBlank___);
}


ClassBoardBlank_o *ClassBoardResourceCatalogAssetBundle__GetUniqueGrandBlankObject(
        ClassBoardResourceCatalogAssetBundle_o *this,
        int32_t assetId,
        const MethodInfo *method)
{
  AssetData_o *mainAssetData; // x20
  System_String_o *v5; // x0
  System_String_o *v6; // x0
  int32_t v8; // [xsp+Ch] [xbp-24h] BYREF

  v8 = assetId;
  if ( (byte_4CF22B4 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardBlank___);
    sub_1C7BAE8(&StringLiteral_7155/*"GrandClassBoardBlank"*/);
    byte_4CF22B4 = 1;
  }
  mainAssetData = this->fields.mainAssetData;
  v5 = System_Int32__ToString((int32_t)&v8, 0);
  v6 = System_String__Concat_64176912((System_String_o *)StringLiteral_7155/*"GrandClassBoardBlank"*/, v5, 0);
  return (ClassBoardBlank_o *)ClassBoardResourceCatalogAssetBundle__GetObject_object_(
                                this,
                                mainAssetData,
                                v6,
                                (const MethodInfo_3163DF0 *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardBlank___);
}


ClassBoardLock_o *ClassBoardResourceCatalogAssetBundle__GetUniqueGrandLockObject(
        ClassBoardResourceCatalogAssetBundle_o *this,
        int32_t assetId,
        const MethodInfo *method)
{
  AssetData_o *mainAssetData; // x20
  System_String_o *v5; // x0
  System_String_o *v6; // x0
  int32_t v8; // [xsp+Ch] [xbp-24h] BYREF

  v8 = assetId;
  if ( (byte_4CF22B5 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardLock___);
    sub_1C7BAE8(&StringLiteral_7157/*"GrandClassBoardLock"*/);
    byte_4CF22B5 = 1;
  }
  mainAssetData = this->fields.mainAssetData;
  v5 = System_Int32__ToString((int32_t)&v8, 0);
  v6 = System_String__Concat_64176912((System_String_o *)StringLiteral_7157/*"GrandClassBoardLock"*/, v5, 0);
  return (ClassBoardLock_o *)ClassBoardResourceCatalogAssetBundle__GetObject_object_(
                               this,
                               mainAssetData,
                               v6,
                               (const MethodInfo_3163DF0 *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardLock___);
}


ClassBoardSquare_o *ClassBoardResourceCatalogAssetBundle__GetUniqueGrandSquareObject(
        ClassBoardResourceCatalogAssetBundle_o *this,
        int32_t assetId,
        const MethodInfo *method)
{
  AssetData_o *mainAssetData; // x20
  System_String_o *v5; // x0
  System_String_o *v6; // x0
  int32_t v8; // [xsp+Ch] [xbp-24h] BYREF

  v8 = assetId;
  if ( (byte_4CF22B3 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardSquare___);
    sub_1C7BAE8(&StringLiteral_7158/*"GrandClassBoardSquare"*/);
    byte_4CF22B3 = 1;
  }
  mainAssetData = this->fields.mainAssetData;
  v5 = System_Int32__ToString((int32_t)&v8, 0);
  v6 = System_String__Concat_64176912((System_String_o *)StringLiteral_7158/*"GrandClassBoardSquare"*/, v5, 0);
  return (ClassBoardSquare_o *)ClassBoardResourceCatalogAssetBundle__GetObject_object_(
                                 this,
                                 mainAssetData,
                                 v6,
                                 (const MethodInfo_3163DF0 *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardSquare___);
}


ClassBoardLock_o *ClassBoardResourceCatalogAssetBundle__GetUniqueLockObject(
        ClassBoardResourceCatalogAssetBundle_o *this,
        int32_t assetId,
        const MethodInfo *method)
{
  AssetData_o *mainAssetData; // x20
  System_String_o *v5; // x0
  System_String_o *v6; // x0
  int32_t v8; // [xsp+Ch] [xbp-24h] BYREF

  v8 = assetId;
  if ( (byte_4CF22B2 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardLock___);
    sub_1C7BAE8(&StringLiteral_4474/*"ClassBoardLock"*/);
    byte_4CF22B2 = 1;
  }
  mainAssetData = this->fields.mainAssetData;
  v5 = System_Int32__ToString((int32_t)&v8, 0);
  v6 = System_String__Concat_64176912((System_String_o *)StringLiteral_4474/*"ClassBoardLock"*/, v5, 0);
  return (ClassBoardLock_o *)ClassBoardResourceCatalogAssetBundle__GetObject_object_(
                               this,
                               mainAssetData,
                               v6,
                               (const MethodInfo_3163DF0 *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardLock___);
}


ClassBoardSquare_o *ClassBoardResourceCatalogAssetBundle__GetUniqueSquareObject(
        ClassBoardResourceCatalogAssetBundle_o *this,
        int32_t assetId,
        const MethodInfo *method)
{
  AssetData_o *mainAssetData; // x20
  System_String_o *v5; // x0
  System_String_o *v6; // x0
  int32_t v8; // [xsp+Ch] [xbp-24h] BYREF

  v8 = assetId;
  if ( (byte_4CF22B0 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardSquare___);
    sub_1C7BAE8(&StringLiteral_4482/*"ClassBoardSquare"*/);
    byte_4CF22B0 = 1;
  }
  mainAssetData = this->fields.mainAssetData;
  v5 = System_Int32__ToString((int32_t)&v8, 0);
  v6 = System_String__Concat_64176912((System_String_o *)StringLiteral_4482/*"ClassBoardSquare"*/, v5, 0);
  return (ClassBoardSquare_o *)ClassBoardResourceCatalogAssetBundle__GetObject_object_(
                                 this,
                                 mainAssetData,
                                 v6,
                                 (const MethodInfo_3163DF0 *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardSquare___);
}


void ClassBoardResourceCatalogAssetBundle__LoadAssetStorage(
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
                                                           0);
  if ( ((unsigned __int8)assetStorageLoadWrapper & 1) != 0 )
    return;
  if ( !loadCallback )
LABEL_5:
    sub_1C7BD40(assetStorageLoadWrapper, assetBundlePath);
  ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))loadCallback->fields.invoke_impl)(
    loadCallback->fields.method_code,
    0,
    loadCallback->fields.method);
}


void ClassBoardResourceCatalogAssetBundle__LoadEnd(
        ClassBoardResourceCatalogAssetBundle_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Object_object; // x25
  Il2CppObject *v4; // x24
  Il2CppObject *v5; // x23
  Il2CppObject *v6; // x22
  Il2CppObject *v7; // x20
  Il2CppObject *v8; // x26
  Il2CppObject *v9; // x21
  Il2CppObject *v10; // x28
  Il2CppObject *v11; // x27
  Il2CppObject *v12; // x29
  char *Object_object__51713432; // x0
  struct AtlasManagerUnit_o *grandGraphAtlas; // x1
  AssetData_o *boardSelectViewAssetData; // x8
  ClassBoardSquare_o *v16; // x27
  AssetData_o *v17; // x8
  Il2CppObject *v18; // x20
  Il2CppObject *v19; // x29
  Il2CppObject *v20; // x28
  Il2CppObject *v21; // x25
  const MethodInfo *v22; // x5
  struct ClassBoardFullReleaseEffectComponent_o *v23; // x26
  const MethodInfo *v24; // x5
  const MethodInfo *v25; // x6
  const MethodInfo *v26; // x5
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x4
  int32_t v30; // w5
  int64_t v31; // x6
  System_String_o *v32; // x7
  int32_t v33; // w2
  int32_t v34; // w3
  System_String_o *v35; // x4
  int32_t v36; // w5
  int64_t v37; // x6
  System_String_o *v38; // x7
  int32_t v39; // w2
  int32_t v40; // w3
  System_String_o *v41; // x4
  int32_t v42; // w5
  int64_t v43; // x6
  System_String_o *v44; // x7
  int32_t v45; // w2
  int32_t v46; // w3
  System_String_o *v47; // x4
  int32_t v48; // w5
  int64_t v49; // x6
  System_String_o *v50; // x7
  int32_t v51; // w2
  int32_t v52; // w3
  System_String_o *v53; // x4
  int32_t v54; // w5
  int64_t v55; // x6
  System_String_o *v56; // x7
  int32_t v57; // w2
  int32_t v58; // w3
  System_String_o *v59; // x4
  int32_t v60; // w5
  int64_t v61; // x6
  System_String_o *v62; // x7
  struct ClassBoardResourceContents_o *Contents_k__BackingField; // x20
  int32_t v64; // w2
  int32_t v65; // w3
  System_String_o *v66; // x4
  int32_t v67; // w5
  int64_t v68; // x6
  System_String_o *v69; // x7
  int32_t v70; // w2
  int32_t v71; // w3
  System_String_o *v72; // x4
  int32_t v73; // w5
  int64_t v74; // x6
  System_String_o *v75; // x7
  struct System_Action_o *loadEndCallback; // x8
  char *v77; // [xsp+8h] [xbp-C8h]
  char *v78; // [xsp+10h] [xbp-C0h]
  ClassBoardUIController_o *uiController; // [xsp+18h] [xbp-B8h]
  ClassBoardSquareOpenConfirmDialog_o *v80; // [xsp+20h] [xbp-B0h]
  ClassBoardDisableOpenDialog_o *v81; // [xsp+28h] [xbp-A8h]
  ClassBoardSquareDetailDialog_o *classBoardSquareDetailDialog; // [xsp+30h] [xbp-A0h]
  Il2CppObject *v83; // [xsp+38h] [xbp-98h]
  Il2CppObject *v84; // [xsp+40h] [xbp-90h]
  ClassBoardBlank_o *v85; // [xsp+48h] [xbp-88h]
  ClassBoardLine_o *v86; // [xsp+58h] [xbp-78h]
  ClassBoardSquare_o *v87; // [xsp+60h] [xbp-70h]

  if ( (byte_4CF22AE & 1) == 0 )
  {
    sub_1C7BAE8(&Method_AssetData_GetObject_GameObject____78791560);
    sub_1C7BAE8(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardBackground___);
    sub_1C7BAE8(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardBlank___);
    sub_1C7BAE8(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardDisableOpenDialog___);
    sub_1C7BAE8(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardFigureController___);
    sub_1C7BAE8(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardFullReleaseEffectComponent___);
    sub_1C7BAE8(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardLine___);
    sub_1C7BAE8(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardLockOpenConfirmDialog___);
    sub_1C7BAE8(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardLockReleaseConditionDialog___);
    sub_1C7BAE8(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardLock___);
    sub_1C7BAE8(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardQuestOpenConfirmDialog___);
    sub_1C7BAE8(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardSquareDetailDialog___);
    sub_1C7BAE8(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardSquareOpenConfirmDialog___);
    sub_1C7BAE8(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardSquare___);
    sub_1C7BAE8(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardUIController___);
    sub_1C7BAE8(&StringLiteral_4469/*"ClassBoardBg"*/);
    sub_1C7BAE8(&StringLiteral_4476/*"ClassBoardLockReleaseConditionDialog"*/);
    sub_1C7BAE8(&StringLiteral_4473/*"ClassBoardLine"*/);
    sub_1C7BAE8(&StringLiteral_6903/*"FullReleaseEffectClassScore"*/);
    sub_1C7BAE8(&StringLiteral_4483/*"ClassBoardSquareDetailDialog"*/);
    sub_1C7BAE8(&StringLiteral_4474/*"ClassBoardLock"*/);
    sub_1C7BAE8(&StringLiteral_4481/*"ClassBoardSelectView"*/);
    sub_1C7BAE8(&StringLiteral_7157/*"GrandClassBoardLock"*/);
    sub_1C7BAE8(&StringLiteral_6857/*"ForwardIconAnimObject"*/);
    sub_1C7BAE8(&StringLiteral_6904/*"FullReleaseEffectGrandScore"*/);
    sub_1C7BAE8(&StringLiteral_7155/*"GrandClassBoardBlank"*/);
    sub_1C7BAE8(&StringLiteral_4470/*"ClassBoardBlank"*/);
    sub_1C7BAE8(&StringLiteral_4471/*"ClassBoardDisableOpenDialog"*/);
    sub_1C7BAE8(&StringLiteral_4475/*"ClassBoardLockOpenConfirmDialog"*/);
    sub_1C7BAE8(&StringLiteral_4482/*"ClassBoardSquare"*/);
    sub_1C7BAE8(&StringLiteral_4472/*"ClassBoardFigure"*/);
    sub_1C7BAE8(&StringLiteral_4484/*"ClassBoardSquareOpenConfirmDialog"*/);
    sub_1C7BAE8(&StringLiteral_7158/*"GrandClassBoardSquare"*/);
    sub_1C7BAE8(&StringLiteral_7156/*"GrandClassBoardLine"*/);
    sub_1C7BAE8(&StringLiteral_4485/*"ClassBoardUI"*/);
    sub_1C7BAE8(&StringLiteral_4477/*"ClassBoardQuestOpenConfirmDialog"*/);
    byte_4CF22AE = 1;
  }
  Object_object = ClassBoardResourceCatalogAssetBundle__GetObject_object_(
                    this,
                    this->fields.mainAssetData,
                    (System_String_o *)StringLiteral_4482/*"ClassBoardSquare"*/,
                    (const MethodInfo_3163DF0 *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardSquare___);
  v4 = ClassBoardResourceCatalogAssetBundle__GetObject_object_(
         this,
         this->fields.mainAssetData,
         (System_String_o *)StringLiteral_4473/*"ClassBoardLine"*/,
         (const MethodInfo_3163DF0 *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardLine___);
  v5 = ClassBoardResourceCatalogAssetBundle__GetObject_object_(
         this,
         this->fields.mainAssetData,
         (System_String_o *)StringLiteral_4474/*"ClassBoardLock"*/,
         (const MethodInfo_3163DF0 *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardLock___);
  v6 = ClassBoardResourceCatalogAssetBundle__GetObject_object_(
         this,
         this->fields.mainAssetData,
         (System_String_o *)StringLiteral_4470/*"ClassBoardBlank"*/,
         (const MethodInfo_3163DF0 *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardBlank___);
  v7 = ClassBoardResourceCatalogAssetBundle__GetObject_object_(
         this,
         this->fields.mainAssetData,
         (System_String_o *)StringLiteral_7158/*"GrandClassBoardSquare"*/,
         (const MethodInfo_3163DF0 *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardSquare___);
  v8 = ClassBoardResourceCatalogAssetBundle__GetObject_object_(
         this,
         this->fields.mainAssetData,
         (System_String_o *)StringLiteral_7156/*"GrandClassBoardLine"*/,
         (const MethodInfo_3163DF0 *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardLine___);
  v9 = ClassBoardResourceCatalogAssetBundle__GetObject_object_(
         this,
         this->fields.mainAssetData,
         (System_String_o *)StringLiteral_7157/*"GrandClassBoardLock"*/,
         (const MethodInfo_3163DF0 *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardLock___);
  v10 = ClassBoardResourceCatalogAssetBundle__GetObject_object_(
          this,
          this->fields.mainAssetData,
          (System_String_o *)StringLiteral_7155/*"GrandClassBoardBlank"*/,
          (const MethodInfo_3163DF0 *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardBlank___);
  v11 = ClassBoardResourceCatalogAssetBundle__GetObject_object_(
          this,
          this->fields.mainAssetData,
          (System_String_o *)StringLiteral_4471/*"ClassBoardDisableOpenDialog"*/,
          (const MethodInfo_3163DF0 *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardDisableOpenDialog___);
  v12 = ClassBoardResourceCatalogAssetBundle__GetObject_object_(
          this,
          this->fields.mainAssetData,
          (System_String_o *)StringLiteral_4484/*"ClassBoardSquareOpenConfirmDialog"*/,
          (const MethodInfo_3163DF0 *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardSquareOpenConfirmDialog___);
  v84 = ClassBoardResourceCatalogAssetBundle__GetObject_object_(
          this,
          this->fields.mainAssetData,
          (System_String_o *)StringLiteral_4475/*"ClassBoardLockOpenConfirmDialog"*/,
          (const MethodInfo_3163DF0 *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardLockOpenConfirmDialog___);
  v83 = ClassBoardResourceCatalogAssetBundle__GetObject_object_(
          this,
          this->fields.mainAssetData,
          (System_String_o *)StringLiteral_4476/*"ClassBoardLockReleaseConditionDialog"*/,
          (const MethodInfo_3163DF0 *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardLockReleaseConditionDialog___);
  classBoardSquareDetailDialog = (ClassBoardSquareDetailDialog_o *)ClassBoardResourceCatalogAssetBundle__GetObject_object_(
                                                                     this,
                                                                     this->fields.mainAssetData,
                                                                     (System_String_o *)StringLiteral_4483/*"ClassBoardSquareDetailDialog"*/,
                                                                     (const MethodInfo_3163DF0 *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardSquareDetailDialog___);
  uiController = (ClassBoardUIController_o *)ClassBoardResourceCatalogAssetBundle__GetObject_object_(
                                               this,
                                               this->fields.mainAssetData,
                                               (System_String_o *)StringLiteral_4485/*"ClassBoardUI"*/,
                                               (const MethodInfo_3163DF0 *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardUIController___);
  Object_object__51713432 = (char *)ClassBoardResourceCatalogAssetBundle__GetObject_object_(
                                      this,
                                      this->fields.modelAssetData,
                                      (System_String_o *)StringLiteral_4469/*"ClassBoardBg"*/,
                                      (const MethodInfo_3163DF0 *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardBackground___);
  boardSelectViewAssetData = this->fields.boardSelectViewAssetData;
  v78 = Object_object__51713432;
  if ( !boardSelectViewAssetData )
    goto LABEL_20;
  v80 = (ClassBoardSquareOpenConfirmDialog_o *)v12;
  v81 = (ClassBoardDisableOpenDialog_o *)v11;
  v85 = (ClassBoardBlank_o *)v10;
  v86 = (ClassBoardLine_o *)v8;
  v87 = (ClassBoardSquare_o *)v7;
  v16 = (ClassBoardSquare_o *)Object_object;
  Object_object__51713432 = (char *)AssetData__GetObject_object__51713432(
                                      boardSelectViewAssetData,
                                      (System_String_o *)StringLiteral_4481/*"ClassBoardSelectView"*/,
                                      (const MethodInfo_3151598 *)Method_AssetData_GetObject_GameObject____78791560);
  v17 = this->fields.boardSelectViewAssetData;
  v77 = Object_object__51713432;
  if ( !v17 )
    goto LABEL_20;
  v18 = AssetData__GetObject_object__51713432(
          v17,
          (System_String_o *)StringLiteral_6857/*"ForwardIconAnimObject"*/,
          (const MethodInfo_3151598 *)Method_AssetData_GetObject_GameObject____78791560);
  v19 = ClassBoardResourceCatalogAssetBundle__GetObject_object_(
          this,
          this->fields.mainAssetData,
          (System_String_o *)StringLiteral_4472/*"ClassBoardFigure"*/,
          (const MethodInfo_3163DF0 *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardFigureController___);
  v20 = ClassBoardResourceCatalogAssetBundle__GetObject_object_(
          this,
          this->fields.mainAssetData,
          (System_String_o *)StringLiteral_4477/*"ClassBoardQuestOpenConfirmDialog"*/,
          (const MethodInfo_3163DF0 *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardQuestOpenConfirmDialog___);
  v21 = ClassBoardResourceCatalogAssetBundle__GetObject_object_(
          this,
          this->fields.mainAssetData,
          (System_String_o *)StringLiteral_6903/*"FullReleaseEffectClassScore"*/,
          (const MethodInfo_3163DF0 *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardFullReleaseEffectComponent___);
  Object_object__51713432 = (char *)ClassBoardResourceCatalogAssetBundle__GetObject_object_(
                                      this,
                                      this->fields.mainAssetData,
                                      (System_String_o *)StringLiteral_6904/*"FullReleaseEffectGrandScore"*/,
                                      (const MethodInfo_3163DF0 *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardFullReleaseEffectComponent___);
  if ( !this->fields._Contents_k__BackingField )
    goto LABEL_20;
  v23 = (struct ClassBoardFullReleaseEffectComponent_o *)Object_object__51713432;
  ClassBoardResourceContents__SetContents(
    this->fields._Contents_k__BackingField,
    v16,
    (ClassBoardLine_o *)v4,
    (ClassBoardLock_o *)v5,
    (ClassBoardBlank_o *)v6,
    v22);
  Object_object__51713432 = (char *)this->fields._Contents_k__BackingField;
  if ( !Object_object__51713432 )
    goto LABEL_20;
  ClassBoardResourceContents__SetGrandContents(
    (ClassBoardResourceContents_o *)Object_object__51713432,
    v87,
    v86,
    (ClassBoardLock_o *)v9,
    v85,
    v24);
  Object_object__51713432 = (char *)this->fields._Contents_k__BackingField;
  if ( !Object_object__51713432 )
    goto LABEL_20;
  ClassBoardResourceContents__SetContentsDialog(
    (ClassBoardResourceContents_o *)Object_object__51713432,
    v81,
    v80,
    (ClassBoardLockOpenConfirmDialog_o *)v84,
    (ClassBoardLockReleaseConditionDialog_o *)v83,
    classBoardSquareDetailDialog,
    v25);
  Object_object__51713432 = (char *)this->fields._Contents_k__BackingField;
  if ( !Object_object__51713432 )
    goto LABEL_20;
  ClassBoardResourceContents__SetContentsUI(
    (ClassBoardResourceContents_o *)Object_object__51713432,
    uiController,
    this->fields.boardUiAtlasManagerUnit,
    this->fields.iconAtlasManagerUnit,
    this->fields.classUiAtlasManagerUnit,
    v26);
  Object_object__51713432 = (char *)this->fields._Contents_k__BackingField;
  if ( !Object_object__51713432 )
    goto LABEL_20;
  *((_QWORD *)Object_object__51713432 + 20) = v78;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)Object_object__51713432 + 1, (int32_t)v78, v27, v28, v29, v30, v31, v32);
  Object_object__51713432 = (char *)this->fields._Contents_k__BackingField;
  if ( !Object_object__51713432 )
    goto LABEL_20;
  *((_QWORD *)Object_object__51713432 + 22) = v77;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)(Object_object__51713432 + 176),
    (int32_t)v77,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  Object_object__51713432 = (char *)this->fields._Contents_k__BackingField;
  if ( !Object_object__51713432 )
    goto LABEL_20;
  *((_QWORD *)Object_object__51713432 + 23) = v18;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)(Object_object__51713432 + 184),
    (int32_t)v18,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
  Object_object__51713432 = (char *)this->fields._Contents_k__BackingField;
  if ( !Object_object__51713432 )
    goto LABEL_20;
  *((_QWORD *)Object_object__51713432 + 16) = v19;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)(Object_object__51713432 + 128),
    (int32_t)v19,
    v45,
    v46,
    v47,
    v48,
    v49,
    v50);
  Object_object__51713432 = (char *)this->fields._Contents_k__BackingField;
  if ( !Object_object__51713432 )
    goto LABEL_20;
  *((_QWORD *)Object_object__51713432 + 17) = v20;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)(Object_object__51713432 + 136),
    (int32_t)v20,
    v51,
    v52,
    v53,
    v54,
    v55,
    v56);
  Contents_k__BackingField = this->fields._Contents_k__BackingField;
  if ( !Contents_k__BackingField )
    goto LABEL_20;
  Contents_k__BackingField->fields._FullReleaseEffectComponent_k__BackingField = (struct ClassBoardFullReleaseEffectComponent_o *)v21;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&Contents_k__BackingField->fields._FullReleaseEffectComponent_k__BackingField,
    (int32_t)v21,
    v57,
    v58,
    v59,
    v60,
    v61,
    v62);
  Contents_k__BackingField->fields._GrandFullReleaseEffectComponent_k__BackingField = v23;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&Contents_k__BackingField->fields._GrandFullReleaseEffectComponent_k__BackingField,
    (int32_t)v23,
    v64,
    v65,
    v66,
    v67,
    v68,
    v69);
  grandGraphAtlas = this->fields.grandGraphAtlas;
  if ( grandGraphAtlas )
  {
    Object_object__51713432 = (char *)this->fields._Contents_k__BackingField;
    if ( !Object_object__51713432 )
      goto LABEL_20;
    *((_QWORD *)Object_object__51713432 + 27) = grandGraphAtlas;
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)(Object_object__51713432 + 216),
      (int32_t)grandGraphAtlas,
      v70,
      v71,
      v72,
      v73,
      v74,
      v75);
  }
  loadEndCallback = this->fields.loadEndCallback;
  if ( !loadEndCallback )
LABEL_20:
    sub_1C7BD40(Object_object__51713432, grandGraphAtlas);
  ((void (__fastcall *)(intptr_t, intptr_t))loadEndCallback->fields.invoke_impl)(
    loadEndCallback->fields.method_code,
    loadEndCallback->fields.method);
}


void ClassBoardResourceCatalogAssetBundle__LoadSystemAsset(
        ClassBoardResourceCatalogAssetBundle_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  AssetStorageLoadWrapper_o *assetStorageLoadWrapper; // x20
  AtlasManagerUnit_o *v11; // x21
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  AssetStorageLoadWrapper_o *v18; // x20
  AtlasManagerUnit_o *v19; // x21
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  AssetStorageLoadWrapper_o *v26; // x20
  AtlasManagerUnit_o *v27; // x21
  int32_t v28; // w2
  int32_t v29; // w3
  System_String_o *v30; // x4
  int32_t v31; // w5
  int64_t v32; // x6
  System_String_o *v33; // x7
  AssetStorageLoadWrapper_o *v34; // x20
  AtlasManagerUnit_o *v35; // x21
  int32_t v36; // w2
  int32_t v37; // w3
  System_String_o *v38; // x4
  int32_t v39; // w5
  int64_t v40; // x6
  System_String_o *v41; // x7
  __int64 v42; // x20
  System_Action_object__o *v43; // x21
  ChainableActionBase_o *v44; // x0
  __int64 v45; // x1
  int32_t v46; // w2
  int32_t v47; // w3
  System_String_o *v48; // x4
  int32_t v49; // w5
  int64_t v50; // x6
  System_String_o *v51; // x7
  System_Action_object__o *v52; // x21
  int32_t v53; // w2
  int32_t v54; // w3
  System_String_o *v55; // x4
  int32_t v56; // w5
  int64_t v57; // x6
  System_String_o *v58; // x7
  System_Action_object__o *v59; // x21
  int32_t v60; // w2
  int32_t v61; // w3
  System_String_o *v62; // x4
  int32_t v63; // w5
  int64_t v64; // x6
  System_String_o *v65; // x7
  System_Action_object__o *v66; // x21
  int32_t v67; // w2
  int32_t v68; // w3
  System_String_o *v69; // x4
  int32_t v70; // w5
  int64_t v71; // x6
  System_String_o *v72; // x7
  System_Action_object__o *v73; // x21
  int32_t v74; // w2
  int32_t v75; // w3
  System_String_o *v76; // x4
  int32_t v77; // w5
  int64_t v78; // x6
  System_String_o *v79; // x7
  System_Action_object__o *v80; // x21
  int32_t v81; // w2
  int32_t v82; // w3
  System_String_o *v83; // x4
  int32_t v84; // w5
  int64_t v85; // x6
  System_String_o *v86; // x7
  System_Action_object__o *v87; // x21
  int32_t v88; // w2
  int32_t v89; // w3
  System_String_o *v90; // x4
  int32_t v91; // w5
  int64_t v92; // x6
  System_String_o *v93; // x7
  ChainableActionParallel_o *v94; // x21
  __int64 v95; // x20
  System_Action_o *v96; // x22
  int32_t v97; // w2
  int32_t v98; // w3
  System_String_o *v99; // x4
  int32_t v100; // w5
  int64_t v101; // x6
  System_String_o *v102; // x7

  if ( (byte_4CF22AD & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action___TypeInfo);
    sub_1C7BAE8(&System_Action_Action____TypeInfo);
    sub_1C7BAE8(&System_Action_Action__TypeInfo);
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&AtlasManagerUnit_TypeInfo);
    sub_1C7BAE8(&ChainableActionParallel_TypeInfo);
    sub_1C7BAE8(&Method_ClassBoardResourceCatalogAssetBundle_LoadEnd__);
    sub_1C7BAE8(&Method_ClassBoardResourceCatalogAssetBundle__LoadSystemAsset_b__44_0__);
    sub_1C7BAE8(&Method_ClassBoardResourceCatalogAssetBundle__LoadSystemAsset_b__44_1__);
    sub_1C7BAE8(&Method_ClassBoardResourceCatalogAssetBundle__LoadSystemAsset_b__44_2__);
    sub_1C7BAE8(&Method_ClassBoardResourceCatalogAssetBundle__LoadSystemAsset_b__44_3__);
    sub_1C7BAE8(&Method_ClassBoardResourceCatalogAssetBundle__LoadSystemAsset_b__44_4__);
    sub_1C7BAE8(&Method_ClassBoardResourceCatalogAssetBundle__LoadSystemAsset_b__44_5__);
    sub_1C7BAE8(&Method_ClassBoardResourceCatalogAssetBundle__LoadSystemAsset_b__44_6__);
    sub_1C7BAE8(&StringLiteral_4468/*"ClassBoard/UI/DownloadClassBoardUIAtlas"*/);
    sub_1C7BAE8(&StringLiteral_7165/*"GrandGraphSystem/DownloadGrandGraphSystemAtlas"*/);
    sub_1C7BAE8(&StringLiteral_4467/*"ClassBoard/UI/DownloadClassBoardClassUIAtlas"*/);
    sub_1C7BAE8(&StringLiteral_4464/*"ClassBoard/Icon/DownloadClassBoardIconAtlas"*/);
    byte_4CF22AD = 1;
  }
  this->fields.loadEndCallback = callback;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.loadEndCallback,
    (int32_t)callback,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  assetStorageLoadWrapper = this->fields.assetStorageLoadWrapper;
  v11 = (AtlasManagerUnit_o *)sub_1C7BD34(AtlasManagerUnit_TypeInfo);
  AtlasManagerUnit___ctor(v11, (System_String_o *)StringLiteral_4468/*"ClassBoard/UI/DownloadClassBoardUIAtlas"*/, assetStorageLoadWrapper, 0);
  this->fields.boardUiAtlasManagerUnit = v11;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.boardUiAtlasManagerUnit,
    (int32_t)v11,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  v18 = this->fields.assetStorageLoadWrapper;
  v19 = (AtlasManagerUnit_o *)sub_1C7BD34(AtlasManagerUnit_TypeInfo);
  AtlasManagerUnit___ctor(v19, (System_String_o *)StringLiteral_4467/*"ClassBoard/UI/DownloadClassBoardClassUIAtlas"*/, v18, 0);
  this->fields.classUiAtlasManagerUnit = v19;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.classUiAtlasManagerUnit,
    (int32_t)v19,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  v26 = this->fields.assetStorageLoadWrapper;
  v27 = (AtlasManagerUnit_o *)sub_1C7BD34(AtlasManagerUnit_TypeInfo);
  AtlasManagerUnit___ctor(v27, (System_String_o *)StringLiteral_4464/*"ClassBoard/Icon/DownloadClassBoardIconAtlas"*/, v26, 0);
  this->fields.iconAtlasManagerUnit = v27;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.iconAtlasManagerUnit,
    (int32_t)v27,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
  v34 = this->fields.assetStorageLoadWrapper;
  v35 = (AtlasManagerUnit_o *)sub_1C7BD34(AtlasManagerUnit_TypeInfo);
  AtlasManagerUnit___ctor(v35, (System_String_o *)StringLiteral_7165/*"GrandGraphSystem/DownloadGrandGraphSystemAtlas"*/, v34, 0);
  this->fields.grandGraphAtlas = v35;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.grandGraphAtlas, (int32_t)v35, v36, v37, v38, v39, v40, v41);
  v42 = sub_1C7BB90(System_Action_Action____TypeInfo, 7);
  v43 = (System_Action_object__o *)sub_1C7BD34(System_Action_Action__TypeInfo);
  System_Action_object____ctor(
    v43,
    (Il2CppObject *)this,
    Method_ClassBoardResourceCatalogAssetBundle__LoadSystemAsset_b__44_0__,
    0);
  if ( !v42 )
    goto LABEL_17;
  if ( !*(_DWORD *)(v42 + 24) )
    goto LABEL_16;
  *(_QWORD *)(v42 + 32) = v43;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v42 + 32), (int32_t)v43, v46, v47, v48, v49, v50, v51);
  v52 = (System_Action_object__o *)sub_1C7BD34(System_Action_Action__TypeInfo);
  System_Action_object____ctor(
    v52,
    (Il2CppObject *)this,
    Method_ClassBoardResourceCatalogAssetBundle__LoadSystemAsset_b__44_1__,
    0);
  if ( *(_DWORD *)(v42 + 24) <= 1u )
    goto LABEL_16;
  *(_QWORD *)(v42 + 40) = v52;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v42 + 40), (int32_t)v52, v53, v54, v55, v56, v57, v58);
  v59 = (System_Action_object__o *)sub_1C7BD34(System_Action_Action__TypeInfo);
  System_Action_object____ctor(
    v59,
    (Il2CppObject *)this,
    Method_ClassBoardResourceCatalogAssetBundle__LoadSystemAsset_b__44_2__,
    0);
  if ( *(_DWORD *)(v42 + 24) <= 2u )
    goto LABEL_16;
  *(_QWORD *)(v42 + 48) = v59;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v42 + 48), (int32_t)v59, v60, v61, v62, v63, v64, v65);
  v66 = (System_Action_object__o *)sub_1C7BD34(System_Action_Action__TypeInfo);
  System_Action_object____ctor(
    v66,
    (Il2CppObject *)this,
    Method_ClassBoardResourceCatalogAssetBundle__LoadSystemAsset_b__44_3__,
    0);
  if ( *(_DWORD *)(v42 + 24) <= 3u )
    goto LABEL_16;
  *(_QWORD *)(v42 + 56) = v66;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v42 + 56), (int32_t)v66, v67, v68, v69, v70, v71, v72);
  v73 = (System_Action_object__o *)sub_1C7BD34(System_Action_Action__TypeInfo);
  System_Action_object____ctor(
    v73,
    (Il2CppObject *)this,
    Method_ClassBoardResourceCatalogAssetBundle__LoadSystemAsset_b__44_4__,
    0);
  if ( *(_DWORD *)(v42 + 24) <= 4u )
    goto LABEL_16;
  *(_QWORD *)(v42 + 64) = v73;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v42 + 64), (int32_t)v73, v74, v75, v76, v77, v78, v79);
  v80 = (System_Action_object__o *)sub_1C7BD34(System_Action_Action__TypeInfo);
  System_Action_object____ctor(
    v80,
    (Il2CppObject *)this,
    Method_ClassBoardResourceCatalogAssetBundle__LoadSystemAsset_b__44_5__,
    0);
  if ( *(_DWORD *)(v42 + 24) <= 5u )
    goto LABEL_16;
  *(_QWORD *)(v42 + 72) = v80;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v42 + 72), (int32_t)v80, v81, v82, v83, v84, v85, v86);
  v87 = (System_Action_object__o *)sub_1C7BD34(System_Action_Action__TypeInfo);
  System_Action_object____ctor(
    v87,
    (Il2CppObject *)this,
    Method_ClassBoardResourceCatalogAssetBundle__LoadSystemAsset_b__44_6__,
    0);
  if ( *(_DWORD *)(v42 + 24) <= 6u )
    goto LABEL_16;
  *(_QWORD *)(v42 + 80) = v87;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v42 + 80), (int32_t)v87, v88, v89, v90, v91, v92, v93);
  v94 = (ChainableActionParallel_o *)sub_1C7BD34(ChainableActionParallel_TypeInfo);
  ChainableActionParallel___ctor_49560952(v94, (System_Action_Action__array *)v42, 0);
  v95 = sub_1C7BB90(System_Action___TypeInfo, 1);
  v96 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
  System_Action___ctor(v96, (Il2CppObject *)this, Method_ClassBoardResourceCatalogAssetBundle_LoadEnd__, 0);
  if ( !v95 )
    goto LABEL_17;
  if ( !*(_DWORD *)(v95 + 24) )
LABEL_16:
    sub_1C7BD48(v44);
  *(_QWORD *)(v95 + 32) = v96;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v95 + 32), (int32_t)v96, v97, v98, v99, v100, v101, v102);
  if ( !v94 || (v44 = ChainableActionBase__Final((ChainableActionBase_o *)v94, (System_Action_array *)v95, 0)) == 0 )
LABEL_17:
    sub_1C7BD40(v44, v45);
  ChainableActionBase__Execute(v44, 0);
}


void ClassBoardResourceCatalogAssetBundle__ReleaseAll(
        ClassBoardResourceCatalogAssetBundle_o *this,
        const MethodInfo *method)
{
  AssetStorageLoadWrapper_o *assetStorageLoadWrapper; // x0

  assetStorageLoadWrapper = this->fields.assetStorageLoadWrapper;
  if ( !assetStorageLoadWrapper )
    sub_1C7BD40(0, method);
  AssetStorageLoadWrapper__ReleaseAll(assetStorageLoadWrapper, 0);
}


void ClassBoardResourceCatalogAssetBundle__ReloadBoardUIAtlas(
        ClassBoardResourceCatalogAssetBundle_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  AtlasManagerUnit_o *boardUiAtlasManagerUnit; // x0
  AssetStorageLoadWrapper_o *assetStorageLoadWrapper; // x22
  AtlasManagerUnit_o *v22; // x23
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  AtlasManagerUnit_o *v29; // x19
  System_Action_o *v30; // x21

  if ( (byte_4CF22AF & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&AtlasManagerUnit_TypeInfo);
    sub_1C7BAE8(&Method_ClassBoardResourceCatalogAssetBundle___c__DisplayClass47_0__ReloadBoardUIAtlas_b__0__);
    sub_1C7BAE8(&ClassBoardResourceCatalogAssetBundle___c__DisplayClass47_0_TypeInfo);
    sub_1C7BAE8(&StringLiteral_4468/*"ClassBoard/UI/DownloadClassBoardUIAtlas"*/);
    byte_4CF22AF = 1;
  }
  v5 = sub_1C7BD34(ClassBoardResourceCatalogAssetBundle___c__DisplayClass47_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_8;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = callback;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v5 + 24), (int32_t)callback, v14, v15, v16, v17, v18, v19);
  boardUiAtlasManagerUnit = this->fields.boardUiAtlasManagerUnit;
  if ( boardUiAtlasManagerUnit )
    AtlasManagerUnit__Release(boardUiAtlasManagerUnit, 0);
  assetStorageLoadWrapper = this->fields.assetStorageLoadWrapper;
  v22 = (AtlasManagerUnit_o *)sub_1C7BD34(AtlasManagerUnit_TypeInfo);
  AtlasManagerUnit___ctor(v22, (System_String_o *)StringLiteral_4468/*"ClassBoard/UI/DownloadClassBoardUIAtlas"*/, assetStorageLoadWrapper, 0);
  this->fields.boardUiAtlasManagerUnit = v22;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.boardUiAtlasManagerUnit,
    (int32_t)v22,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  v29 = this->fields.boardUiAtlasManagerUnit;
  v30 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
  System_Action___ctor(
    v30,
    (Il2CppObject *)v5,
    Method_ClassBoardResourceCatalogAssetBundle___c__DisplayClass47_0__ReloadBoardUIAtlas_b__0__,
    0);
  if ( !v29 )
LABEL_8:
    sub_1C7BD40(v6, v7);
  AtlasManagerUnit__Load(v29, v30, 1, 0);
}


void ClassBoardResourceCatalogAssetBundle__SetSpriteOfUiAtlas(
        ClassBoardResourceCatalogAssetBundle_o *this,
        UISprite_o *sprite,
        System_String_o *spriteName,
        const MethodInfo *method)
{
  AtlasManagerUnit_o *boardUiAtlasManagerUnit; // x0

  boardUiAtlasManagerUnit = this->fields.boardUiAtlasManagerUnit;
  if ( !boardUiAtlasManagerUnit )
    sub_1C7BD40(0, sprite);
  AtlasManagerUnit__SetUI(boardUiAtlasManagerUnit, sprite, spriteName, 0);
}


void ClassBoardResourceCatalogAssetBundle___LoadSystemAsset_b__44_0(
        ClassBoardResourceCatalogAssetBundle_o *this,
        System_Action_o *f,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  AssetLoader_LoadEndDataHandler_o *v20; // x20
  const MethodInfo *v21; // x3

  if ( (byte_4CF22B7 & 1) == 0 )
  {
    sub_1C7BAE8(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C7BAE8(&Method_ClassBoardResourceCatalogAssetBundle___c__DisplayClass44_0__LoadSystemAsset_b__7__);
    sub_1C7BAE8(&ClassBoardResourceCatalogAssetBundle___c__DisplayClass44_0_TypeInfo);
    sub_1C7BAE8(&StringLiteral_4465/*"ClassBoard/Main"*/);
    byte_4CF22B7 = 1;
  }
  v5 = sub_1C7BD34(ClassBoardResourceCatalogAssetBundle___c__DisplayClass44_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_1C7BD40(v6, v7);
  *(_QWORD *)(v5 + 24) = this;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v5 + 24), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 16) = f;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)f, v14, v15, v16, v17, v18, v19);
  v20 = (AssetLoader_LoadEndDataHandler_o *)sub_1C7BD34(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v20,
    (Il2CppObject *)v5,
    Method_ClassBoardResourceCatalogAssetBundle___c__DisplayClass44_0__LoadSystemAsset_b__7__,
    0);
  ClassBoardResourceCatalogAssetBundle__LoadAssetStorage(this, (System_String_o *)StringLiteral_4465/*"ClassBoard/Main"*/, v20, v21);
}


void ClassBoardResourceCatalogAssetBundle___LoadSystemAsset_b__44_1(
        ClassBoardResourceCatalogAssetBundle_o *this,
        System_Action_o *f,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  AssetLoader_LoadEndDataHandler_o *v20; // x20
  const MethodInfo *v21; // x3

  if ( (byte_4CF22B8 & 1) == 0 )
  {
    sub_1C7BAE8(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C7BAE8(&Method_ClassBoardResourceCatalogAssetBundle___c__DisplayClass44_1__LoadSystemAsset_b__8__);
    sub_1C7BAE8(&ClassBoardResourceCatalogAssetBundle___c__DisplayClass44_1_TypeInfo);
    sub_1C7BAE8(&StringLiteral_4444/*"ClassBoard/Bg"*/);
    byte_4CF22B8 = 1;
  }
  v5 = sub_1C7BD34(ClassBoardResourceCatalogAssetBundle___c__DisplayClass44_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_1C7BD40(v6, v7);
  *(_QWORD *)(v5 + 24) = this;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v5 + 24), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 16) = f;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)f, v14, v15, v16, v17, v18, v19);
  v20 = (AssetLoader_LoadEndDataHandler_o *)sub_1C7BD34(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v20,
    (Il2CppObject *)v5,
    Method_ClassBoardResourceCatalogAssetBundle___c__DisplayClass44_1__LoadSystemAsset_b__8__,
    0);
  ClassBoardResourceCatalogAssetBundle__LoadAssetStorage(this, (System_String_o *)StringLiteral_4444/*"ClassBoard/Bg"*/, v20, v21);
}


void ClassBoardResourceCatalogAssetBundle___LoadSystemAsset_b__44_2(
        ClassBoardResourceCatalogAssetBundle_o *this,
        System_Action_o *f,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  AssetLoader_LoadEndDataHandler_o *v20; // x20
  const MethodInfo *v21; // x3

  if ( (byte_4CF22B9 & 1) == 0 )
  {
    sub_1C7BAE8(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C7BAE8(&Method_ClassBoardResourceCatalogAssetBundle___c__DisplayClass44_2__LoadSystemAsset_b__9__);
    sub_1C7BAE8(&ClassBoardResourceCatalogAssetBundle___c__DisplayClass44_2_TypeInfo);
    sub_1C7BAE8(&StringLiteral_4466/*"ClassBoard/Select"*/);
    byte_4CF22B9 = 1;
  }
  v5 = sub_1C7BD34(ClassBoardResourceCatalogAssetBundle___c__DisplayClass44_2_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_1C7BD40(v6, v7);
  *(_QWORD *)(v5 + 24) = this;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v5 + 24), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 16) = f;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)f, v14, v15, v16, v17, v18, v19);
  v20 = (AssetLoader_LoadEndDataHandler_o *)sub_1C7BD34(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v20,
    (Il2CppObject *)v5,
    Method_ClassBoardResourceCatalogAssetBundle___c__DisplayClass44_2__LoadSystemAsset_b__9__,
    0);
  ClassBoardResourceCatalogAssetBundle__LoadAssetStorage(this, (System_String_o *)StringLiteral_4466/*"ClassBoard/Select"*/, v20, v21);
}


void ClassBoardResourceCatalogAssetBundle___LoadSystemAsset_b__44_3(
        ClassBoardResourceCatalogAssetBundle_o *this,
        System_Action_o *f,
        const MethodInfo *method)
{
  AtlasManagerUnit_o *boardUiAtlasManagerUnit; // x0

  boardUiAtlasManagerUnit = this->fields.boardUiAtlasManagerUnit;
  if ( !boardUiAtlasManagerUnit )
    sub_1C7BD40(0, f);
  AtlasManagerUnit__Load(boardUiAtlasManagerUnit, f, 3, 0);
}


void ClassBoardResourceCatalogAssetBundle___LoadSystemAsset_b__44_4(
        ClassBoardResourceCatalogAssetBundle_o *this,
        System_Action_o *f,
        const MethodInfo *method)
{
  AtlasManagerUnit_o *classUiAtlasManagerUnit; // x0

  classUiAtlasManagerUnit = this->fields.classUiAtlasManagerUnit;
  if ( !classUiAtlasManagerUnit )
    sub_1C7BD40(0, f);
  AtlasManagerUnit__Load(classUiAtlasManagerUnit, f, 3, 0);
}


void ClassBoardResourceCatalogAssetBundle___LoadSystemAsset_b__44_5(
        ClassBoardResourceCatalogAssetBundle_o *this,
        System_Action_o *f,
        const MethodInfo *method)
{
  AtlasManagerUnit_o *iconAtlasManagerUnit; // x0

  iconAtlasManagerUnit = this->fields.iconAtlasManagerUnit;
  if ( !iconAtlasManagerUnit )
    sub_1C7BD40(0, f);
  AtlasManagerUnit__Load(iconAtlasManagerUnit, f, 3, 0);
}


void ClassBoardResourceCatalogAssetBundle___LoadSystemAsset_b__44_6(
        ClassBoardResourceCatalogAssetBundle_o *this,
        System_Action_o *f,
        const MethodInfo *method)
{
  AtlasManagerUnit_o *grandGraphAtlas; // x0

  grandGraphAtlas = this->fields.grandGraphAtlas;
  if ( !grandGraphAtlas )
    sub_1C7BD40(0, f);
  AtlasManagerUnit__Load(grandGraphAtlas, f, 3, 0);
}


ClassBoardResourceContents_o *ClassBoardResourceCatalogAssetBundle__get_Contents(
        ClassBoardResourceCatalogAssetBundle_o *this,
        const MethodInfo *method)
{
  return this->fields._Contents_k__BackingField;
}


void ClassBoardResourceCatalogAssetBundle___c__DisplayClass44_0___ctor(
        ClassBoardResourceCatalogAssetBundle___c__DisplayClass44_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ClassBoardResourceCatalogAssetBundle___c__DisplayClass44_0___LoadSystemAsset_b__7(
        ClassBoardResourceCatalogAssetBundle___c__DisplayClass44_0_o *this,
        AssetData_o *asset,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct ClassBoardResourceCatalogAssetBundle_o *_4__this; // x0
  struct System_Action_o *f; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (_4__this->fields.mainAssetData = asset,
        sub_1C7BA8C(
          (GrandQuestFolderBoardItem_o *)&_4__this->fields.mainAssetData,
          (int32_t)asset,
          (int32_t)method,
          v3,
          v4,
          v5,
          v6,
          v7),
        (f = this->fields.f) == 0) )
  {
    sub_1C7BD40(_4__this, asset);
  }
  ((void (__fastcall *)(intptr_t, intptr_t))f->fields.invoke_impl)(f->fields.method_code, f->fields.method);
}


void ClassBoardResourceCatalogAssetBundle___c__DisplayClass44_1___ctor(
        ClassBoardResourceCatalogAssetBundle___c__DisplayClass44_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ClassBoardResourceCatalogAssetBundle___c__DisplayClass44_1___LoadSystemAsset_b__8(
        ClassBoardResourceCatalogAssetBundle___c__DisplayClass44_1_o *this,
        AssetData_o *asset,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct ClassBoardResourceCatalogAssetBundle_o *_4__this; // x0
  struct System_Action_o *f; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (_4__this->fields.modelAssetData = asset,
        sub_1C7BA8C(
          (GrandQuestFolderBoardItem_o *)&_4__this->fields.modelAssetData,
          (int32_t)asset,
          (int32_t)method,
          v3,
          v4,
          v5,
          v6,
          v7),
        (f = this->fields.f) == 0) )
  {
    sub_1C7BD40(_4__this, asset);
  }
  ((void (__fastcall *)(intptr_t, intptr_t))f->fields.invoke_impl)(f->fields.method_code, f->fields.method);
}


void ClassBoardResourceCatalogAssetBundle___c__DisplayClass44_2___ctor(
        ClassBoardResourceCatalogAssetBundle___c__DisplayClass44_2_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ClassBoardResourceCatalogAssetBundle___c__DisplayClass44_2___LoadSystemAsset_b__9(
        ClassBoardResourceCatalogAssetBundle___c__DisplayClass44_2_o *this,
        AssetData_o *asset,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct ClassBoardResourceCatalogAssetBundle_o *_4__this; // x0
  struct System_Action_o *f; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (_4__this->fields.boardSelectViewAssetData = asset,
        sub_1C7BA8C(
          (GrandQuestFolderBoardItem_o *)&_4__this->fields.boardSelectViewAssetData,
          (int32_t)asset,
          (int32_t)method,
          v3,
          v4,
          v5,
          v6,
          v7),
        (f = this->fields.f) == 0) )
  {
    sub_1C7BD40(_4__this, asset);
  }
  ((void (__fastcall *)(intptr_t, intptr_t))f->fields.invoke_impl)(f->fields.method_code, f->fields.method);
}


void ClassBoardResourceCatalogAssetBundle___c__DisplayClass47_0___ctor(
        ClassBoardResourceCatalogAssetBundle___c__DisplayClass47_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ClassBoardResourceCatalogAssetBundle___c__DisplayClass47_0___ReloadBoardUIAtlas_b__0(
        ClassBoardResourceCatalogAssetBundle___c__DisplayClass47_0_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct ClassBoardResourceCatalogAssetBundle_o *_4__this; // x8
  ClassBoardResourceCatalogAssetBundle___c__DisplayClass47_0_o *v9; // x19
  ClassBoardResourceCatalogAssetBundle___c__DisplayClass47_0_c *boardUiAtlasManagerUnit; // x1

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (v9 = this,
        (this = (ClassBoardResourceCatalogAssetBundle___c__DisplayClass47_0_o *)_4__this->fields._Contents_k__BackingField) == 0) )
  {
    sub_1C7BD40(this, method);
  }
  boardUiAtlasManagerUnit = (ClassBoardResourceCatalogAssetBundle___c__DisplayClass47_0_c *)_4__this->fields.boardUiAtlasManagerUnit;
  this[6].klass = boardUiAtlasManagerUnit;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this[6], (int32_t)boardUiAtlasManagerUnit, v2, v3, v4, v5, v6, v7);
  ActionExtensions__Call(v9->fields.callback, 0);
}