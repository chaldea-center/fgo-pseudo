void __fastcall ClassBoardResourceCatalogAssetBundle___ctor(
        ClassBoardResourceCatalogAssetBundle_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *v4; // x20
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  AssetStorageLoadWrapper_o *v7; // x20
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4B1FE3D & 1) == 0 )
  {
    sub_1BCAFF8(&AssetStorageLoadWrapper_TypeInfo, method);
    sub_1BCAFF8(&ClassBoardResourceContents_TypeInfo, v3);
    byte_4B1FE3D = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v4 = (Il2CppObject *)sub_1BCB244(ClassBoardResourceContents_TypeInfo);
  System_Object___ctor(v4, 0LL);
  this->fields._Contents_k__BackingField = (struct ClassBoardResourceContents_o *)v4;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields._Contents_k__BackingField, (int32_t)v4, v5, v6);
  v7 = (AssetStorageLoadWrapper_o *)sub_1BCB244(AssetStorageLoadWrapper_TypeInfo);
  AssetStorageLoadWrapper___ctor(v7, 0LL);
  this->fields.assetStorageLoadWrapper = v7;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields, (int32_t)v7, v8, v9);
}


System_String_o *__fastcall ClassBoardResourceCatalogAssetBundle__GetIconAtlasPath(
        ClassBoardResourceCatalogAssetBundle_o *this,
        const MethodInfo *method)
{
  if ( (byte_4B1FE47 & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_4424/*"ClassBoard/Icon/DownloadClassBoardIconAtlas"*/, method);
    byte_4B1FE47 = 1;
  }
  return (System_String_o *)StringLiteral_4424/*"ClassBoard/Icon/DownloadClassBoardIconAtlas"*/;
}


// local variable allocation has failed, the output may be wrong!
Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o __fastcall ClassBoardResourceCatalogAssetBundle__GetObject___Il2CppFullySharedGenericType_(
        ClassBoardResourceCatalogAssetBundle_o *this,
        AssetData_o *assetData,
        System_String_o *name,
        const MethodInfo_300E66C *method)
{
  __int64 v4; // x4
  __int64 v5; // x20
  __int64 v8; // x8
  __int64 v10; // x1
  __int64 v11; // x21
  void *v12; // x0
  __int64 v13; // x1
  Il2CppObject *Object_object__50315216; // x23
  __int64 *v15; // x1
  __int64 v16; // x0
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v17; // x0 OVERLAPPED
  void *v18; // x1
  __int64 v19[2]; // [xsp+0h] [xbp-10h] BYREF
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o result; // 0:x0.16

  v5 = v4;
  v19[1] = *(_QWORD *)(_ReadStatusReg(ARM64_SYSREG(3, 3, 13, 0, 2)) + 40);
  v8 = *(_QWORD *)(v4 + 56);
  if ( !v8 )
  {
    sub_1BCAFF8(&Method_AssetData_GetObject_GameObject____76915336, assetData);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v10);
    v8 = *(_QWORD *)(v5 + 56);
    if ( !v8 )
    {
      sub_1C1B4B8();
      v8 = *(_QWORD *)(v5 + 56);
    }
  }
  v11 = *(unsigned int *)(*(_QWORD *)v8 + 252LL);
  v12 = memset((char *)v19 - ((v11 + 15) & 0x1FFFFFFF0LL), 0, *(_DWORD *)(*(_QWORD *)v8 + 252LL));
  if ( !assetData )
    goto LABEL_12;
  Object_object__50315216 = AssetData__GetObject_object__50315216(
                              assetData,
                              name,
                              (const MethodInfo_2FFBFD0 *)Method_AssetData_GetObject_GameObject____76915336);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v12 = (void *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Object_object__50315216, 0LL, 0LL);
  if ( ((unsigned __int8)v12 & 1) == 0 )
  {
    if ( Object_object__50315216 )
    {
      v15 = *(__int64 **)(*(_QWORD *)(v5 + 56) + 8LL);
      v16 = *v15;
      v19[0] = (__int64)v19 - ((v11 + 15) & 0x1FFFFFFF0LL);
      ((void (__fastcall *)(__int64, __int64 *, Il2CppObject *, __int64 *, __int64))v15[2])(
        v16,
        v15,
        Object_object__50315216,
        v19,
        v19[0]);
      goto LABEL_11;
    }
LABEL_12:
    sub_1BCB254(v12, v13);
  }
  memset((char *)v19 - ((v11 + 15) & 0x1FFFFFFF0LL), 0, v11);
  memcpy((char *)v19 - ((v11 + 15) & 0x1FFFFFFF0LL), (char *)v19 - ((v11 + 15) & 0x1FFFFFFF0LL), v11);
LABEL_11:
  v17 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)memcpy(
                                                                    (void *)method,
                                                                    (char *)v19 - ((v11 + 15) & 0x1FFFFFFF0LL),
                                                                    v11);
  result.monitor = v18;
  result.klass = v17;
  return result;
}


Il2CppObject *__fastcall ClassBoardResourceCatalogAssetBundle__GetObject_object_(
        ClassBoardResourceCatalogAssetBundle_o *this,
        AssetData_o *assetData,
        System_String_o *name,
        const MethodInfo_300E5A8 *method)
{
  __int64 v7; // x1
  Il2CppObject *Object_object__50315216; // x20

  if ( !method->rgctx_data )
  {
    sub_1BCAFF8(&Method_AssetData_GetObject_GameObject____76915336, assetData);
    this = (ClassBoardResourceCatalogAssetBundle_o *)sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v7);
    if ( !method->rgctx_data )
      this = (ClassBoardResourceCatalogAssetBundle_o *)sub_1C1B4B8();
  }
  if ( !assetData )
    goto LABEL_11;
  Object_object__50315216 = AssetData__GetObject_object__50315216(
                              assetData,
                              name,
                              (const MethodInfo_2FFBFD0 *)Method_AssetData_GetObject_GameObject____76915336);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (ClassBoardResourceCatalogAssetBundle_o *)UnityEngine_Object__op_Equality(
                                                     (UnityEngine_Object_o *)Object_object__50315216,
                                                     0LL,
                                                     0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
    return 0LL;
  if ( !Object_object__50315216 )
LABEL_11:
    sub_1BCB254(this, assetData);
  return UnityEngine_GameObject__GetComponent_object_(
           (UnityEngine_GameObject_o *)Object_object__50315216,
           (const MethodInfo_306E710 *)method->rgctx_data->_1_UnityEngine_GameObject_GetComponent_T_);
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
  int32_t v9; // [xsp+Ch] [xbp-24h] BYREF

  v9 = assetId;
  if ( (byte_4B1FE42 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardBlank___, *(_QWORD *)&assetId);
    sub_1BCAFF8(&StringLiteral_4430/*"ClassBoardBlank"*/, v4);
    byte_4B1FE42 = 1;
  }
  mainAssetData = this->fields.mainAssetData;
  v6 = System_Int32__ToString((int32_t)&v9, 0LL);
  v7 = System_String__Concat_62450424((System_String_o *)StringLiteral_4430/*"ClassBoardBlank"*/, v6, 0LL);
  return (ClassBoardBlank_o *)ClassBoardResourceCatalogAssetBundle__GetObject_object_(
                                this,
                                mainAssetData,
                                v7,
                                (const MethodInfo_300E5A8 *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardBlank___);
}


// local variable allocation has failed, the output may be wrong!
ClassBoardBlank_o *__fastcall ClassBoardResourceCatalogAssetBundle__GetUniqueGrandBlankObject(
        ClassBoardResourceCatalogAssetBundle_o *this,
        int32_t assetId,
        const MethodInfo *method)
{
  __int64 v4; // x1
  AssetData_o *mainAssetData; // x20
  System_String_o *v6; // x0
  System_String_o *v7; // x0
  int32_t v9; // [xsp+Ch] [xbp-24h] BYREF

  v9 = assetId;
  if ( (byte_4B1FE45 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardBlank___, *(_QWORD *)&assetId);
    sub_1BCAFF8(&StringLiteral_7079/*"GrandClassBoardBlank"*/, v4);
    byte_4B1FE45 = 1;
  }
  mainAssetData = this->fields.mainAssetData;
  v6 = System_Int32__ToString((int32_t)&v9, 0LL);
  v7 = System_String__Concat_62450424((System_String_o *)StringLiteral_7079/*"GrandClassBoardBlank"*/, v6, 0LL);
  return (ClassBoardBlank_o *)ClassBoardResourceCatalogAssetBundle__GetObject_object_(
                                this,
                                mainAssetData,
                                v7,
                                (const MethodInfo_300E5A8 *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardBlank___);
}


// local variable allocation has failed, the output may be wrong!
ClassBoardLock_o *__fastcall ClassBoardResourceCatalogAssetBundle__GetUniqueGrandLockObject(
        ClassBoardResourceCatalogAssetBundle_o *this,
        int32_t assetId,
        const MethodInfo *method)
{
  __int64 v4; // x1
  AssetData_o *mainAssetData; // x20
  System_String_o *v6; // x0
  System_String_o *v7; // x0
  int32_t v9; // [xsp+Ch] [xbp-24h] BYREF

  v9 = assetId;
  if ( (byte_4B1FE46 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardLock___, *(_QWORD *)&assetId);
    sub_1BCAFF8(&StringLiteral_7081/*"GrandClassBoardLock"*/, v4);
    byte_4B1FE46 = 1;
  }
  mainAssetData = this->fields.mainAssetData;
  v6 = System_Int32__ToString((int32_t)&v9, 0LL);
  v7 = System_String__Concat_62450424((System_String_o *)StringLiteral_7081/*"GrandClassBoardLock"*/, v6, 0LL);
  return (ClassBoardLock_o *)ClassBoardResourceCatalogAssetBundle__GetObject_object_(
                               this,
                               mainAssetData,
                               v7,
                               (const MethodInfo_300E5A8 *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardLock___);
}


// local variable allocation has failed, the output may be wrong!
ClassBoardSquare_o *__fastcall ClassBoardResourceCatalogAssetBundle__GetUniqueGrandSquareObject(
        ClassBoardResourceCatalogAssetBundle_o *this,
        int32_t assetId,
        const MethodInfo *method)
{
  __int64 v4; // x1
  AssetData_o *mainAssetData; // x20
  System_String_o *v6; // x0
  System_String_o *v7; // x0
  int32_t v9; // [xsp+Ch] [xbp-24h] BYREF

  v9 = assetId;
  if ( (byte_4B1FE44 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardSquare___, *(_QWORD *)&assetId);
    sub_1BCAFF8(&StringLiteral_7082/*"GrandClassBoardSquare"*/, v4);
    byte_4B1FE44 = 1;
  }
  mainAssetData = this->fields.mainAssetData;
  v6 = System_Int32__ToString((int32_t)&v9, 0LL);
  v7 = System_String__Concat_62450424((System_String_o *)StringLiteral_7082/*"GrandClassBoardSquare"*/, v6, 0LL);
  return (ClassBoardSquare_o *)ClassBoardResourceCatalogAssetBundle__GetObject_object_(
                                 this,
                                 mainAssetData,
                                 v7,
                                 (const MethodInfo_300E5A8 *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardSquare___);
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
  int32_t v9; // [xsp+Ch] [xbp-24h] BYREF

  v9 = assetId;
  if ( (byte_4B1FE43 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardLock___, *(_QWORD *)&assetId);
    sub_1BCAFF8(&StringLiteral_4434/*"ClassBoardLock"*/, v4);
    byte_4B1FE43 = 1;
  }
  mainAssetData = this->fields.mainAssetData;
  v6 = System_Int32__ToString((int32_t)&v9, 0LL);
  v7 = System_String__Concat_62450424((System_String_o *)StringLiteral_4434/*"ClassBoardLock"*/, v6, 0LL);
  return (ClassBoardLock_o *)ClassBoardResourceCatalogAssetBundle__GetObject_object_(
                               this,
                               mainAssetData,
                               v7,
                               (const MethodInfo_300E5A8 *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardLock___);
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
  int32_t v9; // [xsp+Ch] [xbp-24h] BYREF

  v9 = assetId;
  if ( (byte_4B1FE41 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardSquare___, *(_QWORD *)&assetId);
    sub_1BCAFF8(&StringLiteral_4441/*"ClassBoardSquare"*/, v4);
    byte_4B1FE41 = 1;
  }
  mainAssetData = this->fields.mainAssetData;
  v6 = System_Int32__ToString((int32_t)&v9, 0LL);
  v7 = System_String__Concat_62450424((System_String_o *)StringLiteral_4441/*"ClassBoardSquare"*/, v6, 0LL);
  return (ClassBoardSquare_o *)ClassBoardResourceCatalogAssetBundle__GetObject_object_(
                                 this,
                                 mainAssetData,
                                 v7,
                                 (const MethodInfo_300E5A8 *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardSquare___);
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
    sub_1BCB254(assetStorageLoadWrapper, assetBundlePath);
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))loadCallback->fields.m_target)(
    loadCallback->fields.original_method_info,
    0LL,
    *(_QWORD *)&loadCallback->fields.extra_arg);
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
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x1
  __int64 v32; // x1
  __int64 v33; // x1
  __int64 v34; // x1
  __int64 v35; // x1
  __int64 v36; // x1
  __int64 v37; // x1
  Il2CppObject *Object_object; // x25
  Il2CppObject *v39; // x24
  Il2CppObject *v40; // x23
  Il2CppObject *v41; // x22
  Il2CppObject *v42; // x20
  Il2CppObject *v43; // x26
  Il2CppObject *v44; // x21
  Il2CppObject *v45; // x28
  Il2CppObject *v46; // x27
  Il2CppObject *v47; // x29
  char *Object_object__50315216; // x0
  struct AtlasManagerUnit_o *grandGraphAtlas; // x1
  AssetData_o *boardSelectViewAssetData; // x8
  ClassBoardSquare_o *v51; // x27
  AssetData_o *v52; // x8
  Il2CppObject *v53; // x20
  Il2CppObject *v54; // x29
  Il2CppObject *v55; // x28
  Il2CppObject *v56; // x25
  const MethodInfo *v57; // x5
  struct ClassBoardFullReleaseEffectComponent_o *v58; // x26
  const MethodInfo *v59; // x5
  const MethodInfo *v60; // x6
  const MethodInfo *v61; // x5
  int32_t v62; // w2
  const MethodInfo *v63; // x3
  int32_t v64; // w2
  const MethodInfo *v65; // x3
  int32_t v66; // w2
  const MethodInfo *v67; // x3
  int32_t v68; // w2
  const MethodInfo *v69; // x3
  int32_t v70; // w2
  const MethodInfo *v71; // x3
  int32_t v72; // w2
  const MethodInfo *v73; // x3
  struct ClassBoardResourceContents_o *Contents_k__BackingField; // x20
  int32_t v75; // w2
  const MethodInfo *v76; // x3
  int32_t v77; // w2
  const MethodInfo *v78; // x3
  struct System_Action_o *loadEndCallback; // x8
  char *v80; // [xsp+8h] [xbp-C8h]
  char *v81; // [xsp+10h] [xbp-C0h]
  ClassBoardUIController_o *uiController; // [xsp+18h] [xbp-B8h]
  ClassBoardSquareOpenConfirmDialog_o *v83; // [xsp+20h] [xbp-B0h]
  ClassBoardDisableOpenDialog_o *v84; // [xsp+28h] [xbp-A8h]
  ClassBoardSquareDetailDialog_o *classBoardSquareDetailDialog; // [xsp+30h] [xbp-A0h]
  Il2CppObject *v86; // [xsp+38h] [xbp-98h]
  Il2CppObject *v87; // [xsp+40h] [xbp-90h]
  ClassBoardBlank_o *v88; // [xsp+48h] [xbp-88h]
  ClassBoardLine_o *v89; // [xsp+58h] [xbp-78h]
  ClassBoardSquare_o *v90; // [xsp+60h] [xbp-70h]

  if ( (byte_4B1FE3F & 1) == 0 )
  {
    sub_1BCAFF8(&Method_AssetData_GetObject_GameObject____76915336, method);
    sub_1BCAFF8(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardBackground___, v3);
    sub_1BCAFF8(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardBlank___, v4);
    sub_1BCAFF8(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardDisableOpenDialog___, v5);
    sub_1BCAFF8(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardFigureController___, v6);
    sub_1BCAFF8(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardFullReleaseEffectComponent___, v7);
    sub_1BCAFF8(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardLine___, v8);
    sub_1BCAFF8(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardLockOpenConfirmDialog___, v9);
    sub_1BCAFF8(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardLockReleaseConditionDialog___, v10);
    sub_1BCAFF8(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardLock___, v11);
    sub_1BCAFF8(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardQuestOpenConfirmDialog___, v12);
    sub_1BCAFF8(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardSquareDetailDialog___, v13);
    sub_1BCAFF8(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardSquareOpenConfirmDialog___, v14);
    sub_1BCAFF8(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardSquare___, v15);
    sub_1BCAFF8(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardUIController___, v16);
    sub_1BCAFF8(&StringLiteral_4429/*"ClassBoardBg"*/, v17);
    sub_1BCAFF8(&StringLiteral_4436/*"ClassBoardLockReleaseConditionDialog"*/, v18);
    sub_1BCAFF8(&StringLiteral_4433/*"ClassBoardLine"*/, v19);
    sub_1BCAFF8(&StringLiteral_6837/*"FullReleaseEffectClassScore"*/, v20);
    sub_1BCAFF8(&StringLiteral_4442/*"ClassBoardSquareDetailDialog"*/, v21);
    sub_1BCAFF8(&StringLiteral_4434/*"ClassBoardLock"*/, v22);
    sub_1BCAFF8(&StringLiteral_4440/*"ClassBoardSelectView"*/, v23);
    sub_1BCAFF8(&StringLiteral_7081/*"GrandClassBoardLock"*/, v24);
    sub_1BCAFF8(&StringLiteral_6793/*"ForwardIconAnimObject"*/, v25);
    sub_1BCAFF8(&StringLiteral_6838/*"FullReleaseEffectGrandScore"*/, v26);
    sub_1BCAFF8(&StringLiteral_7079/*"GrandClassBoardBlank"*/, v27);
    sub_1BCAFF8(&StringLiteral_4430/*"ClassBoardBlank"*/, v28);
    sub_1BCAFF8(&StringLiteral_4431/*"ClassBoardDisableOpenDialog"*/, v29);
    sub_1BCAFF8(&StringLiteral_4435/*"ClassBoardLockOpenConfirmDialog"*/, v30);
    sub_1BCAFF8(&StringLiteral_4441/*"ClassBoardSquare"*/, v31);
    sub_1BCAFF8(&StringLiteral_4432/*"ClassBoardFigure"*/, v32);
    sub_1BCAFF8(&StringLiteral_4443/*"ClassBoardSquareOpenConfirmDialog"*/, v33);
    sub_1BCAFF8(&StringLiteral_7082/*"GrandClassBoardSquare"*/, v34);
    sub_1BCAFF8(&StringLiteral_7080/*"GrandClassBoardLine"*/, v35);
    sub_1BCAFF8(&StringLiteral_4444/*"ClassBoardUI"*/, v36);
    sub_1BCAFF8(&StringLiteral_4437/*"ClassBoardQuestOpenConfirmDialog"*/, v37);
    byte_4B1FE3F = 1;
  }
  Object_object = ClassBoardResourceCatalogAssetBundle__GetObject_object_(
                    this,
                    this->fields.mainAssetData,
                    (System_String_o *)StringLiteral_4441/*"ClassBoardSquare"*/,
                    (const MethodInfo_300E5A8 *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardSquare___);
  v39 = ClassBoardResourceCatalogAssetBundle__GetObject_object_(
          this,
          this->fields.mainAssetData,
          (System_String_o *)StringLiteral_4433/*"ClassBoardLine"*/,
          (const MethodInfo_300E5A8 *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardLine___);
  v40 = ClassBoardResourceCatalogAssetBundle__GetObject_object_(
          this,
          this->fields.mainAssetData,
          (System_String_o *)StringLiteral_4434/*"ClassBoardLock"*/,
          (const MethodInfo_300E5A8 *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardLock___);
  v41 = ClassBoardResourceCatalogAssetBundle__GetObject_object_(
          this,
          this->fields.mainAssetData,
          (System_String_o *)StringLiteral_4430/*"ClassBoardBlank"*/,
          (const MethodInfo_300E5A8 *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardBlank___);
  v42 = ClassBoardResourceCatalogAssetBundle__GetObject_object_(
          this,
          this->fields.mainAssetData,
          (System_String_o *)StringLiteral_7082/*"GrandClassBoardSquare"*/,
          (const MethodInfo_300E5A8 *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardSquare___);
  v43 = ClassBoardResourceCatalogAssetBundle__GetObject_object_(
          this,
          this->fields.mainAssetData,
          (System_String_o *)StringLiteral_7080/*"GrandClassBoardLine"*/,
          (const MethodInfo_300E5A8 *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardLine___);
  v44 = ClassBoardResourceCatalogAssetBundle__GetObject_object_(
          this,
          this->fields.mainAssetData,
          (System_String_o *)StringLiteral_7081/*"GrandClassBoardLock"*/,
          (const MethodInfo_300E5A8 *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardLock___);
  v45 = ClassBoardResourceCatalogAssetBundle__GetObject_object_(
          this,
          this->fields.mainAssetData,
          (System_String_o *)StringLiteral_7079/*"GrandClassBoardBlank"*/,
          (const MethodInfo_300E5A8 *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardBlank___);
  v46 = ClassBoardResourceCatalogAssetBundle__GetObject_object_(
          this,
          this->fields.mainAssetData,
          (System_String_o *)StringLiteral_4431/*"ClassBoardDisableOpenDialog"*/,
          (const MethodInfo_300E5A8 *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardDisableOpenDialog___);
  v47 = ClassBoardResourceCatalogAssetBundle__GetObject_object_(
          this,
          this->fields.mainAssetData,
          (System_String_o *)StringLiteral_4443/*"ClassBoardSquareOpenConfirmDialog"*/,
          (const MethodInfo_300E5A8 *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardSquareOpenConfirmDialog___);
  v87 = ClassBoardResourceCatalogAssetBundle__GetObject_object_(
          this,
          this->fields.mainAssetData,
          (System_String_o *)StringLiteral_4435/*"ClassBoardLockOpenConfirmDialog"*/,
          (const MethodInfo_300E5A8 *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardLockOpenConfirmDialog___);
  v86 = ClassBoardResourceCatalogAssetBundle__GetObject_object_(
          this,
          this->fields.mainAssetData,
          (System_String_o *)StringLiteral_4436/*"ClassBoardLockReleaseConditionDialog"*/,
          (const MethodInfo_300E5A8 *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardLockReleaseConditionDialog___);
  classBoardSquareDetailDialog = (ClassBoardSquareDetailDialog_o *)ClassBoardResourceCatalogAssetBundle__GetObject_object_(
                                                                     this,
                                                                     this->fields.mainAssetData,
                                                                     (System_String_o *)StringLiteral_4442/*"ClassBoardSquareDetailDialog"*/,
                                                                     (const MethodInfo_300E5A8 *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardSquareDetailDialog___);
  uiController = (ClassBoardUIController_o *)ClassBoardResourceCatalogAssetBundle__GetObject_object_(
                                               this,
                                               this->fields.mainAssetData,
                                               (System_String_o *)StringLiteral_4444/*"ClassBoardUI"*/,
                                               (const MethodInfo_300E5A8 *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardUIController___);
  Object_object__50315216 = (char *)ClassBoardResourceCatalogAssetBundle__GetObject_object_(
                                      this,
                                      this->fields.modelAssetData,
                                      (System_String_o *)StringLiteral_4429/*"ClassBoardBg"*/,
                                      (const MethodInfo_300E5A8 *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardBackground___);
  boardSelectViewAssetData = this->fields.boardSelectViewAssetData;
  v81 = Object_object__50315216;
  if ( !boardSelectViewAssetData )
    goto LABEL_20;
  v83 = (ClassBoardSquareOpenConfirmDialog_o *)v47;
  v84 = (ClassBoardDisableOpenDialog_o *)v46;
  v88 = (ClassBoardBlank_o *)v45;
  v89 = (ClassBoardLine_o *)v43;
  v90 = (ClassBoardSquare_o *)v42;
  v51 = (ClassBoardSquare_o *)Object_object;
  Object_object__50315216 = (char *)AssetData__GetObject_object__50315216(
                                      boardSelectViewAssetData,
                                      (System_String_o *)StringLiteral_4440/*"ClassBoardSelectView"*/,
                                      (const MethodInfo_2FFBFD0 *)Method_AssetData_GetObject_GameObject____76915336);
  v52 = this->fields.boardSelectViewAssetData;
  v80 = Object_object__50315216;
  if ( !v52 )
    goto LABEL_20;
  v53 = AssetData__GetObject_object__50315216(
          v52,
          (System_String_o *)StringLiteral_6793/*"ForwardIconAnimObject"*/,
          (const MethodInfo_2FFBFD0 *)Method_AssetData_GetObject_GameObject____76915336);
  v54 = ClassBoardResourceCatalogAssetBundle__GetObject_object_(
          this,
          this->fields.mainAssetData,
          (System_String_o *)StringLiteral_4432/*"ClassBoardFigure"*/,
          (const MethodInfo_300E5A8 *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardFigureController___);
  v55 = ClassBoardResourceCatalogAssetBundle__GetObject_object_(
          this,
          this->fields.mainAssetData,
          (System_String_o *)StringLiteral_4437/*"ClassBoardQuestOpenConfirmDialog"*/,
          (const MethodInfo_300E5A8 *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardQuestOpenConfirmDialog___);
  v56 = ClassBoardResourceCatalogAssetBundle__GetObject_object_(
          this,
          this->fields.mainAssetData,
          (System_String_o *)StringLiteral_6837/*"FullReleaseEffectClassScore"*/,
          (const MethodInfo_300E5A8 *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardFullReleaseEffectComponent___);
  Object_object__50315216 = (char *)ClassBoardResourceCatalogAssetBundle__GetObject_object_(
                                      this,
                                      this->fields.mainAssetData,
                                      (System_String_o *)StringLiteral_6838/*"FullReleaseEffectGrandScore"*/,
                                      (const MethodInfo_300E5A8 *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardFullReleaseEffectComponent___);
  if ( !this->fields._Contents_k__BackingField )
    goto LABEL_20;
  v58 = (struct ClassBoardFullReleaseEffectComponent_o *)Object_object__50315216;
  ClassBoardResourceContents__SetContents(
    this->fields._Contents_k__BackingField,
    v51,
    (ClassBoardLine_o *)v39,
    (ClassBoardLock_o *)v40,
    (ClassBoardBlank_o *)v41,
    v57);
  Object_object__50315216 = (char *)this->fields._Contents_k__BackingField;
  if ( !Object_object__50315216 )
    goto LABEL_20;
  ClassBoardResourceContents__SetGrandContents(
    (ClassBoardResourceContents_o *)Object_object__50315216,
    v90,
    v89,
    (ClassBoardLock_o *)v44,
    v88,
    v59);
  Object_object__50315216 = (char *)this->fields._Contents_k__BackingField;
  if ( !Object_object__50315216 )
    goto LABEL_20;
  ClassBoardResourceContents__SetContentsDialog(
    (ClassBoardResourceContents_o *)Object_object__50315216,
    v84,
    v83,
    (ClassBoardLockOpenConfirmDialog_o *)v87,
    (ClassBoardLockReleaseConditionDialog_o *)v86,
    classBoardSquareDetailDialog,
    v60);
  Object_object__50315216 = (char *)this->fields._Contents_k__BackingField;
  if ( !Object_object__50315216 )
    goto LABEL_20;
  ClassBoardResourceContents__SetContentsUI(
    (ClassBoardResourceContents_o *)Object_object__50315216,
    uiController,
    this->fields.boardUiAtlasManagerUnit,
    this->fields.iconAtlasManagerUnit,
    this->fields.classUiAtlasManagerUnit,
    v61);
  Object_object__50315216 = (char *)this->fields._Contents_k__BackingField;
  if ( !Object_object__50315216 )
    goto LABEL_20;
  *((_QWORD *)Object_object__50315216 + 20) = v81;
  sub_1BCAF9C((CGThumbnailListItem_o *)(Object_object__50315216 + 160), (int32_t)v81, v62, v63);
  Object_object__50315216 = (char *)this->fields._Contents_k__BackingField;
  if ( !Object_object__50315216 )
    goto LABEL_20;
  *((_QWORD *)Object_object__50315216 + 22) = v80;
  sub_1BCAF9C((CGThumbnailListItem_o *)(Object_object__50315216 + 176), (int32_t)v80, v64, v65);
  Object_object__50315216 = (char *)this->fields._Contents_k__BackingField;
  if ( !Object_object__50315216 )
    goto LABEL_20;
  *((_QWORD *)Object_object__50315216 + 23) = v53;
  sub_1BCAF9C((CGThumbnailListItem_o *)(Object_object__50315216 + 184), (int32_t)v53, v66, v67);
  Object_object__50315216 = (char *)this->fields._Contents_k__BackingField;
  if ( !Object_object__50315216 )
    goto LABEL_20;
  *((_QWORD *)Object_object__50315216 + 16) = v54;
  sub_1BCAF9C((CGThumbnailListItem_o *)(Object_object__50315216 + 128), (int32_t)v54, v68, v69);
  Object_object__50315216 = (char *)this->fields._Contents_k__BackingField;
  if ( !Object_object__50315216 )
    goto LABEL_20;
  *((_QWORD *)Object_object__50315216 + 17) = v55;
  sub_1BCAF9C((CGThumbnailListItem_o *)Object_object__50315216 + 1, (int32_t)v55, v70, v71);
  Contents_k__BackingField = this->fields._Contents_k__BackingField;
  if ( !Contents_k__BackingField )
    goto LABEL_20;
  Contents_k__BackingField->fields._FullReleaseEffectComponent_k__BackingField = (struct ClassBoardFullReleaseEffectComponent_o *)v56;
  sub_1BCAF9C(
    (CGThumbnailListItem_o *)&Contents_k__BackingField->fields._FullReleaseEffectComponent_k__BackingField,
    (int32_t)v56,
    v72,
    v73);
  Contents_k__BackingField->fields._GrandFullReleaseEffectComponent_k__BackingField = v58;
  sub_1BCAF9C(
    (CGThumbnailListItem_o *)&Contents_k__BackingField->fields._GrandFullReleaseEffectComponent_k__BackingField,
    (int32_t)v58,
    v75,
    v76);
  grandGraphAtlas = this->fields.grandGraphAtlas;
  if ( grandGraphAtlas )
  {
    Object_object__50315216 = (char *)this->fields._Contents_k__BackingField;
    if ( !Object_object__50315216 )
      goto LABEL_20;
    *((_QWORD *)Object_object__50315216 + 27) = grandGraphAtlas;
    sub_1BCAF9C((CGThumbnailListItem_o *)(Object_object__50315216 + 216), (int32_t)grandGraphAtlas, v77, v78);
  }
  loadEndCallback = this->fields.loadEndCallback;
  if ( !loadEndCallback )
LABEL_20:
    sub_1BCB254(Object_object__50315216, grandGraphAtlas);
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))loadEndCallback->fields.m_target)(
    loadEndCallback->fields.original_method_info,
    *(_QWORD *)&loadEndCallback->fields.extra_arg);
}


void __fastcall ClassBoardResourceCatalogAssetBundle__LoadSystemAsset(
        ClassBoardResourceCatalogAssetBundle_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
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
  AssetStorageLoadWrapper_o *assetStorageLoadWrapper; // x20
  AtlasManagerUnit_o *v24; // x21
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  AssetStorageLoadWrapper_o *v27; // x20
  AtlasManagerUnit_o *v28; // x21
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  AssetStorageLoadWrapper_o *v31; // x20
  AtlasManagerUnit_o *v32; // x21
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  AssetStorageLoadWrapper_o *v35; // x20
  AtlasManagerUnit_o *v36; // x21
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  __int64 v39; // x20
  System_Action_object__o *v40; // x21
  ChainableActionBase_o *v41; // x0
  __int64 v42; // x1
  __int64 v43; // x2
  const MethodInfo *v44; // x3
  System_Action_object__o *v45; // x21
  const MethodInfo *v46; // x3
  System_Action_object__o *v47; // x21
  const MethodInfo *v48; // x3
  System_Action_object__o *v49; // x21
  const MethodInfo *v50; // x3
  System_Action_object__o *v51; // x21
  const MethodInfo *v52; // x3
  System_Action_object__o *v53; // x21
  const MethodInfo *v54; // x3
  System_Action_object__o *v55; // x21
  const MethodInfo *v56; // x3
  ChainableActionParallel_o *v57; // x21
  __int64 v58; // x20
  System_Action_o *v59; // x22
  const MethodInfo *v60; // x3

  if ( (byte_4B1FE3E & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action___TypeInfo, callback);
    sub_1BCAFF8(&System_Action_Action____TypeInfo, v6);
    sub_1BCAFF8(&System_Action_Action__TypeInfo, v7);
    sub_1BCAFF8(&System_Action_TypeInfo, v8);
    sub_1BCAFF8(&AtlasManagerUnit_TypeInfo, v9);
    sub_1BCAFF8(&ChainableActionParallel_TypeInfo, v10);
    sub_1BCAFF8(&Method_ClassBoardResourceCatalogAssetBundle_LoadEnd__, v11);
    sub_1BCAFF8(&Method_ClassBoardResourceCatalogAssetBundle__LoadSystemAsset_b__44_0__, v12);
    sub_1BCAFF8(&Method_ClassBoardResourceCatalogAssetBundle__LoadSystemAsset_b__44_1__, v13);
    sub_1BCAFF8(&Method_ClassBoardResourceCatalogAssetBundle__LoadSystemAsset_b__44_2__, v14);
    sub_1BCAFF8(&Method_ClassBoardResourceCatalogAssetBundle__LoadSystemAsset_b__44_3__, v15);
    sub_1BCAFF8(&Method_ClassBoardResourceCatalogAssetBundle__LoadSystemAsset_b__44_4__, v16);
    sub_1BCAFF8(&Method_ClassBoardResourceCatalogAssetBundle__LoadSystemAsset_b__44_5__, v17);
    sub_1BCAFF8(&Method_ClassBoardResourceCatalogAssetBundle__LoadSystemAsset_b__44_6__, v18);
    sub_1BCAFF8(&StringLiteral_4428/*"ClassBoard/UI/DownloadClassBoardUIAtlas"*/, v19);
    sub_1BCAFF8(&StringLiteral_7086/*"GrandGraphSystem/DownloadGrandGraphSystemAtlas"*/, v20);
    sub_1BCAFF8(&StringLiteral_4427/*"ClassBoard/UI/DownloadClassBoardClassUIAtlas"*/, v21);
    sub_1BCAFF8(&StringLiteral_4424/*"ClassBoard/Icon/DownloadClassBoardIconAtlas"*/, v22);
    byte_4B1FE3E = 1;
  }
  this->fields.loadEndCallback = callback;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.loadEndCallback, (int32_t)callback, (int32_t)method, v3);
  assetStorageLoadWrapper = this->fields.assetStorageLoadWrapper;
  v24 = (AtlasManagerUnit_o *)sub_1BCB244(AtlasManagerUnit_TypeInfo);
  AtlasManagerUnit___ctor(v24, (System_String_o *)StringLiteral_4428/*"ClassBoard/UI/DownloadClassBoardUIAtlas"*/, assetStorageLoadWrapper, 0LL);
  this->fields.boardUiAtlasManagerUnit = v24;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.boardUiAtlasManagerUnit, (int32_t)v24, v25, v26);
  v27 = this->fields.assetStorageLoadWrapper;
  v28 = (AtlasManagerUnit_o *)sub_1BCB244(AtlasManagerUnit_TypeInfo);
  AtlasManagerUnit___ctor(v28, (System_String_o *)StringLiteral_4427/*"ClassBoard/UI/DownloadClassBoardClassUIAtlas"*/, v27, 0LL);
  this->fields.classUiAtlasManagerUnit = v28;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.classUiAtlasManagerUnit, (int32_t)v28, v29, v30);
  v31 = this->fields.assetStorageLoadWrapper;
  v32 = (AtlasManagerUnit_o *)sub_1BCB244(AtlasManagerUnit_TypeInfo);
  AtlasManagerUnit___ctor(v32, (System_String_o *)StringLiteral_4424/*"ClassBoard/Icon/DownloadClassBoardIconAtlas"*/, v31, 0LL);
  this->fields.iconAtlasManagerUnit = v32;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.iconAtlasManagerUnit, (int32_t)v32, v33, v34);
  v35 = this->fields.assetStorageLoadWrapper;
  v36 = (AtlasManagerUnit_o *)sub_1BCB244(AtlasManagerUnit_TypeInfo);
  AtlasManagerUnit___ctor(v36, (System_String_o *)StringLiteral_7086/*"GrandGraphSystem/DownloadGrandGraphSystemAtlas"*/, v35, 0LL);
  this->fields.grandGraphAtlas = v36;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.grandGraphAtlas, (int32_t)v36, v37, v38);
  v39 = sub_1BCB0A0(System_Action_Action____TypeInfo, 7LL);
  v40 = (System_Action_object__o *)sub_1BCB244(System_Action_Action__TypeInfo);
  System_Action_object____ctor(
    v40,
    (Il2CppObject *)this,
    Method_ClassBoardResourceCatalogAssetBundle__LoadSystemAsset_b__44_0__,
    0LL);
  if ( !v39 )
    goto LABEL_17;
  if ( !*(_DWORD *)(v39 + 24) )
    goto LABEL_16;
  *(_QWORD *)(v39 + 32) = v40;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v39 + 32), (int32_t)v40, v43, v44);
  v45 = (System_Action_object__o *)sub_1BCB244(System_Action_Action__TypeInfo);
  System_Action_object____ctor(
    v45,
    (Il2CppObject *)this,
    Method_ClassBoardResourceCatalogAssetBundle__LoadSystemAsset_b__44_1__,
    0LL);
  if ( *(_DWORD *)(v39 + 24) <= 1u )
    goto LABEL_16;
  *(_QWORD *)(v39 + 40) = v45;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v39 + 40), (int32_t)v45, v43, v46);
  v47 = (System_Action_object__o *)sub_1BCB244(System_Action_Action__TypeInfo);
  System_Action_object____ctor(
    v47,
    (Il2CppObject *)this,
    Method_ClassBoardResourceCatalogAssetBundle__LoadSystemAsset_b__44_2__,
    0LL);
  if ( *(_DWORD *)(v39 + 24) <= 2u )
    goto LABEL_16;
  *(_QWORD *)(v39 + 48) = v47;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v39 + 48), (int32_t)v47, v43, v48);
  v49 = (System_Action_object__o *)sub_1BCB244(System_Action_Action__TypeInfo);
  System_Action_object____ctor(
    v49,
    (Il2CppObject *)this,
    Method_ClassBoardResourceCatalogAssetBundle__LoadSystemAsset_b__44_3__,
    0LL);
  if ( *(_DWORD *)(v39 + 24) <= 3u )
    goto LABEL_16;
  *(_QWORD *)(v39 + 56) = v49;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v39 + 56), (int32_t)v49, v43, v50);
  v51 = (System_Action_object__o *)sub_1BCB244(System_Action_Action__TypeInfo);
  System_Action_object____ctor(
    v51,
    (Il2CppObject *)this,
    Method_ClassBoardResourceCatalogAssetBundle__LoadSystemAsset_b__44_4__,
    0LL);
  if ( *(_DWORD *)(v39 + 24) <= 4u )
    goto LABEL_16;
  *(_QWORD *)(v39 + 64) = v51;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v39 + 64), (int32_t)v51, v43, v52);
  v53 = (System_Action_object__o *)sub_1BCB244(System_Action_Action__TypeInfo);
  System_Action_object____ctor(
    v53,
    (Il2CppObject *)this,
    Method_ClassBoardResourceCatalogAssetBundle__LoadSystemAsset_b__44_5__,
    0LL);
  if ( *(_DWORD *)(v39 + 24) <= 5u )
    goto LABEL_16;
  *(_QWORD *)(v39 + 72) = v53;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v39 + 72), (int32_t)v53, v43, v54);
  v55 = (System_Action_object__o *)sub_1BCB244(System_Action_Action__TypeInfo);
  System_Action_object____ctor(
    v55,
    (Il2CppObject *)this,
    Method_ClassBoardResourceCatalogAssetBundle__LoadSystemAsset_b__44_6__,
    0LL);
  if ( *(_DWORD *)(v39 + 24) <= 6u )
    goto LABEL_16;
  *(_QWORD *)(v39 + 80) = v55;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v39 + 80), (int32_t)v55, v43, v56);
  v57 = (ChainableActionParallel_o *)sub_1BCB244(ChainableActionParallel_TypeInfo);
  ChainableActionParallel___ctor_48236352(v57, (System_Action_Action__array *)v39, 0LL);
  v58 = sub_1BCB0A0(System_Action___TypeInfo, 1LL);
  v59 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
  System_Action___ctor(v59, (Il2CppObject *)this, Method_ClassBoardResourceCatalogAssetBundle_LoadEnd__, 0LL);
  if ( !v58 )
    goto LABEL_17;
  if ( !*(_DWORD *)(v58 + 24) )
LABEL_16:
    sub_1BCB25C(v41, v42, v43);
  *(_QWORD *)(v58 + 32) = v59;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v58 + 32), (int32_t)v59, v43, v60);
  if ( !v57 || (v41 = ChainableActionBase__Final((ChainableActionBase_o *)v57, (System_Action_array *)v58, 0LL)) == 0LL )
LABEL_17:
    sub_1BCB254(v41, v42);
  ChainableActionBase__Execute(v41, 0LL);
}


void __fastcall ClassBoardResourceCatalogAssetBundle__ReleaseAll(
        ClassBoardResourceCatalogAssetBundle_o *this,
        const MethodInfo *method)
{
  AssetStorageLoadWrapper_o *assetStorageLoadWrapper; // x0

  assetStorageLoadWrapper = this->fields.assetStorageLoadWrapper;
  if ( !assetStorageLoadWrapper )
    sub_1BCB254(0LL, method);
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
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  AtlasManagerUnit_o *boardUiAtlasManagerUnit; // x0
  AssetStorageLoadWrapper_o *assetStorageLoadWrapper; // x22
  AtlasManagerUnit_o *v18; // x23
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  AtlasManagerUnit_o *v21; // x19
  System_Action_o *v22; // x21

  if ( (byte_4B1FE40 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, callback);
    sub_1BCAFF8(&AtlasManagerUnit_TypeInfo, v5);
    sub_1BCAFF8(&Method_ClassBoardResourceCatalogAssetBundle___c__DisplayClass47_0__ReloadBoardUIAtlas_b__0__, v6);
    sub_1BCAFF8(&ClassBoardResourceCatalogAssetBundle___c__DisplayClass47_0_TypeInfo, v7);
    sub_1BCAFF8(&StringLiteral_4428/*"ClassBoard/UI/DownloadClassBoardUIAtlas"*/, v8);
    byte_4B1FE40 = 1;
  }
  v9 = sub_1BCB244(ClassBoardResourceCatalogAssetBundle___c__DisplayClass47_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    goto LABEL_8;
  *(_QWORD *)(v9 + 16) = this;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v9 + 16), (int32_t)this, v12, v13);
  *(_QWORD *)(v9 + 24) = callback;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v9 + 24), (int32_t)callback, v14, v15);
  boardUiAtlasManagerUnit = this->fields.boardUiAtlasManagerUnit;
  if ( boardUiAtlasManagerUnit )
    AtlasManagerUnit__Release(boardUiAtlasManagerUnit, 0LL);
  assetStorageLoadWrapper = this->fields.assetStorageLoadWrapper;
  v18 = (AtlasManagerUnit_o *)sub_1BCB244(AtlasManagerUnit_TypeInfo);
  AtlasManagerUnit___ctor(v18, (System_String_o *)StringLiteral_4428/*"ClassBoard/UI/DownloadClassBoardUIAtlas"*/, assetStorageLoadWrapper, 0LL);
  this->fields.boardUiAtlasManagerUnit = v18;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.boardUiAtlasManagerUnit, (int32_t)v18, v19, v20);
  v21 = this->fields.boardUiAtlasManagerUnit;
  v22 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
  System_Action___ctor(
    v22,
    (Il2CppObject *)v9,
    Method_ClassBoardResourceCatalogAssetBundle___c__DisplayClass47_0__ReloadBoardUIAtlas_b__0__,
    0LL);
  if ( !v21 )
LABEL_8:
    sub_1BCB254(v10, v11);
  AtlasManagerUnit__Load(v21, v22, 1, 0LL);
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
    sub_1BCB254(0LL, sprite);
  AtlasManagerUnit__SetUI(boardUiAtlasManagerUnit, sprite, spriteName, 0LL);
}


void __fastcall ClassBoardResourceCatalogAssetBundle___LoadSystemAsset_b__44_0(
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
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  AssetLoader_LoadEndDataHandler_o *v15; // x20
  const MethodInfo *v16; // x3

  if ( (byte_4B1FE48 & 1) == 0 )
  {
    sub_1BCAFF8(&AssetLoader_LoadEndDataHandler_TypeInfo, f);
    sub_1BCAFF8(&Method_ClassBoardResourceCatalogAssetBundle___c__DisplayClass44_0__LoadSystemAsset_b__7__, v5);
    sub_1BCAFF8(&ClassBoardResourceCatalogAssetBundle___c__DisplayClass44_0_TypeInfo, v6);
    sub_1BCAFF8(&StringLiteral_4425/*"ClassBoard/Main"*/, v7);
    byte_4B1FE48 = 1;
  }
  v8 = sub_1BCB244(ClassBoardResourceCatalogAssetBundle___c__DisplayClass44_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8 )
    sub_1BCB254(v9, v10);
  *(_QWORD *)(v8 + 24) = this;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v8 + 24), (int32_t)this, v11, v12);
  *(_QWORD *)(v8 + 16) = f;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v8 + 16), (int32_t)f, v13, v14);
  v15 = (AssetLoader_LoadEndDataHandler_o *)sub_1BCB244(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v15,
    (Il2CppObject *)v8,
    Method_ClassBoardResourceCatalogAssetBundle___c__DisplayClass44_0__LoadSystemAsset_b__7__,
    0LL);
  ClassBoardResourceCatalogAssetBundle__LoadAssetStorage(this, (System_String_o *)StringLiteral_4425/*"ClassBoard/Main"*/, v15, v16);
}


void __fastcall ClassBoardResourceCatalogAssetBundle___LoadSystemAsset_b__44_1(
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
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  AssetLoader_LoadEndDataHandler_o *v15; // x20
  const MethodInfo *v16; // x3

  if ( (byte_4B1FE49 & 1) == 0 )
  {
    sub_1BCAFF8(&AssetLoader_LoadEndDataHandler_TypeInfo, f);
    sub_1BCAFF8(&Method_ClassBoardResourceCatalogAssetBundle___c__DisplayClass44_1__LoadSystemAsset_b__8__, v5);
    sub_1BCAFF8(&ClassBoardResourceCatalogAssetBundle___c__DisplayClass44_1_TypeInfo, v6);
    sub_1BCAFF8(&StringLiteral_4404/*"ClassBoard/Bg"*/, v7);
    byte_4B1FE49 = 1;
  }
  v8 = sub_1BCB244(ClassBoardResourceCatalogAssetBundle___c__DisplayClass44_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8 )
    sub_1BCB254(v9, v10);
  *(_QWORD *)(v8 + 24) = this;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v8 + 24), (int32_t)this, v11, v12);
  *(_QWORD *)(v8 + 16) = f;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v8 + 16), (int32_t)f, v13, v14);
  v15 = (AssetLoader_LoadEndDataHandler_o *)sub_1BCB244(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v15,
    (Il2CppObject *)v8,
    Method_ClassBoardResourceCatalogAssetBundle___c__DisplayClass44_1__LoadSystemAsset_b__8__,
    0LL);
  ClassBoardResourceCatalogAssetBundle__LoadAssetStorage(this, (System_String_o *)StringLiteral_4404/*"ClassBoard/Bg"*/, v15, v16);
}


void __fastcall ClassBoardResourceCatalogAssetBundle___LoadSystemAsset_b__44_2(
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
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  AssetLoader_LoadEndDataHandler_o *v15; // x20
  const MethodInfo *v16; // x3

  if ( (byte_4B1FE4A & 1) == 0 )
  {
    sub_1BCAFF8(&AssetLoader_LoadEndDataHandler_TypeInfo, f);
    sub_1BCAFF8(&Method_ClassBoardResourceCatalogAssetBundle___c__DisplayClass44_2__LoadSystemAsset_b__9__, v5);
    sub_1BCAFF8(&ClassBoardResourceCatalogAssetBundle___c__DisplayClass44_2_TypeInfo, v6);
    sub_1BCAFF8(&StringLiteral_4426/*"ClassBoard/Select"*/, v7);
    byte_4B1FE4A = 1;
  }
  v8 = sub_1BCB244(ClassBoardResourceCatalogAssetBundle___c__DisplayClass44_2_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8 )
    sub_1BCB254(v9, v10);
  *(_QWORD *)(v8 + 24) = this;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v8 + 24), (int32_t)this, v11, v12);
  *(_QWORD *)(v8 + 16) = f;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v8 + 16), (int32_t)f, v13, v14);
  v15 = (AssetLoader_LoadEndDataHandler_o *)sub_1BCB244(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v15,
    (Il2CppObject *)v8,
    Method_ClassBoardResourceCatalogAssetBundle___c__DisplayClass44_2__LoadSystemAsset_b__9__,
    0LL);
  ClassBoardResourceCatalogAssetBundle__LoadAssetStorage(this, (System_String_o *)StringLiteral_4426/*"ClassBoard/Select"*/, v15, v16);
}


void __fastcall ClassBoardResourceCatalogAssetBundle___LoadSystemAsset_b__44_3(
        ClassBoardResourceCatalogAssetBundle_o *this,
        System_Action_o *f,
        const MethodInfo *method)
{
  AtlasManagerUnit_o *boardUiAtlasManagerUnit; // x0

  boardUiAtlasManagerUnit = this->fields.boardUiAtlasManagerUnit;
  if ( !boardUiAtlasManagerUnit )
    sub_1BCB254(0LL, f);
  AtlasManagerUnit__Load(boardUiAtlasManagerUnit, f, 3, 0LL);
}


void __fastcall ClassBoardResourceCatalogAssetBundle___LoadSystemAsset_b__44_4(
        ClassBoardResourceCatalogAssetBundle_o *this,
        System_Action_o *f,
        const MethodInfo *method)
{
  AtlasManagerUnit_o *classUiAtlasManagerUnit; // x0

  classUiAtlasManagerUnit = this->fields.classUiAtlasManagerUnit;
  if ( !classUiAtlasManagerUnit )
    sub_1BCB254(0LL, f);
  AtlasManagerUnit__Load(classUiAtlasManagerUnit, f, 3, 0LL);
}


void __fastcall ClassBoardResourceCatalogAssetBundle___LoadSystemAsset_b__44_5(
        ClassBoardResourceCatalogAssetBundle_o *this,
        System_Action_o *f,
        const MethodInfo *method)
{
  AtlasManagerUnit_o *iconAtlasManagerUnit; // x0

  iconAtlasManagerUnit = this->fields.iconAtlasManagerUnit;
  if ( !iconAtlasManagerUnit )
    sub_1BCB254(0LL, f);
  AtlasManagerUnit__Load(iconAtlasManagerUnit, f, 3, 0LL);
}


void __fastcall ClassBoardResourceCatalogAssetBundle___LoadSystemAsset_b__44_6(
        ClassBoardResourceCatalogAssetBundle_o *this,
        System_Action_o *f,
        const MethodInfo *method)
{
  AtlasManagerUnit_o *grandGraphAtlas; // x0

  grandGraphAtlas = this->fields.grandGraphAtlas;
  if ( !grandGraphAtlas )
    sub_1BCB254(0LL, f);
  AtlasManagerUnit__Load(grandGraphAtlas, f, 3, 0LL);
}


ClassBoardResourceContents_o *__fastcall ClassBoardResourceCatalogAssetBundle__get_Contents(
        ClassBoardResourceCatalogAssetBundle_o *this,
        const MethodInfo *method)
{
  return this->fields._Contents_k__BackingField;
}


void __fastcall ClassBoardResourceCatalogAssetBundle___c__DisplayClass44_0___ctor(
        ClassBoardResourceCatalogAssetBundle___c__DisplayClass44_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ClassBoardResourceCatalogAssetBundle___c__DisplayClass44_0___LoadSystemAsset_b__7(
        ClassBoardResourceCatalogAssetBundle___c__DisplayClass44_0_o *this,
        AssetData_o *asset,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  struct ClassBoardResourceCatalogAssetBundle_o *_4__this; // x0
  struct System_Action_o *f; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (_4__this->fields.mainAssetData = asset,
        sub_1BCAF9C((CGThumbnailListItem_o *)&_4__this->fields.mainAssetData, (int32_t)asset, (int32_t)method, v3),
        (f = this->fields.f) == 0LL) )
  {
    sub_1BCB254(_4__this, asset);
  }
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))f->fields.m_target)(
    f->fields.original_method_info,
    *(_QWORD *)&f->fields.extra_arg);
}


void __fastcall ClassBoardResourceCatalogAssetBundle___c__DisplayClass44_1___ctor(
        ClassBoardResourceCatalogAssetBundle___c__DisplayClass44_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ClassBoardResourceCatalogAssetBundle___c__DisplayClass44_1___LoadSystemAsset_b__8(
        ClassBoardResourceCatalogAssetBundle___c__DisplayClass44_1_o *this,
        AssetData_o *asset,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  struct ClassBoardResourceCatalogAssetBundle_o *_4__this; // x0
  struct System_Action_o *f; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (_4__this->fields.modelAssetData = asset,
        sub_1BCAF9C((CGThumbnailListItem_o *)&_4__this->fields.modelAssetData, (int32_t)asset, (int32_t)method, v3),
        (f = this->fields.f) == 0LL) )
  {
    sub_1BCB254(_4__this, asset);
  }
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))f->fields.m_target)(
    f->fields.original_method_info,
    *(_QWORD *)&f->fields.extra_arg);
}


void __fastcall ClassBoardResourceCatalogAssetBundle___c__DisplayClass44_2___ctor(
        ClassBoardResourceCatalogAssetBundle___c__DisplayClass44_2_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ClassBoardResourceCatalogAssetBundle___c__DisplayClass44_2___LoadSystemAsset_b__9(
        ClassBoardResourceCatalogAssetBundle___c__DisplayClass44_2_o *this,
        AssetData_o *asset,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  struct ClassBoardResourceCatalogAssetBundle_o *_4__this; // x0
  struct System_Action_o *f; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (_4__this->fields.boardSelectViewAssetData = asset,
        sub_1BCAF9C(
          (CGThumbnailListItem_o *)&_4__this->fields.boardSelectViewAssetData,
          (int32_t)asset,
          (int32_t)method,
          v3),
        (f = this->fields.f) == 0LL) )
  {
    sub_1BCB254(_4__this, asset);
  }
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))f->fields.m_target)(
    f->fields.original_method_info,
    *(_QWORD *)&f->fields.extra_arg);
}


void __fastcall ClassBoardResourceCatalogAssetBundle___c__DisplayClass47_0___ctor(
        ClassBoardResourceCatalogAssetBundle___c__DisplayClass47_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ClassBoardResourceCatalogAssetBundle___c__DisplayClass47_0___ReloadBoardUIAtlas_b__0(
        ClassBoardResourceCatalogAssetBundle___c__DisplayClass47_0_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  struct ClassBoardResourceCatalogAssetBundle_o *_4__this; // x8
  ClassBoardResourceCatalogAssetBundle___c__DisplayClass47_0_o *v5; // x19
  ClassBoardResourceCatalogAssetBundle___c__DisplayClass47_0_c *boardUiAtlasManagerUnit; // x1

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (v5 = this,
        (this = (ClassBoardResourceCatalogAssetBundle___c__DisplayClass47_0_o *)_4__this->fields._Contents_k__BackingField) == 0LL) )
  {
    sub_1BCB254(this, method);
  }
  boardUiAtlasManagerUnit = (ClassBoardResourceCatalogAssetBundle___c__DisplayClass47_0_c *)_4__this->fields.boardUiAtlasManagerUnit;
  this[6].klass = boardUiAtlasManagerUnit;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this[6], (int32_t)boardUiAtlasManagerUnit, v2, v3);
  ActionExtensions__Call(v5->fields.callback, 0LL);
}