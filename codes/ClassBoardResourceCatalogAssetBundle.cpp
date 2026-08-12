void ClassBoardResourceCatalogAssetBundle___ctor(
        ClassBoardResourceCatalogAssetBundle_o *this,
        const MethodInfo *method)
{
  Il2CppObject *v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  AssetStorageLoadWrapper_o *v10; // x20
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7

  if ( (byte_5974707 & 1) == 0 )
  {
    sub_2213A60(&AssetStorageLoadWrapper_TypeInfo);
    sub_2213A60(&ClassBoardResourceContents_TypeInfo);
    byte_5974707 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  v3 = (Il2CppObject *)sub_2213CCC(ClassBoardResourceContents_TypeInfo);
  System_Object___ctor(v3, 0);
  this->fields._Contents_k__BackingField = (struct ClassBoardResourceContents_o *)v3;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._Contents_k__BackingField,
    (int32_t)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  v10 = (AssetStorageLoadWrapper_o *)sub_2213CCC(AssetStorageLoadWrapper_TypeInfo);
  AssetStorageLoadWrapper___ctor(v10, 0);
  this->fields.assetStorageLoadWrapper = v10;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)v10, v11, v12, v13, v14, v15, v16);
}


System_String_o *ClassBoardResourceCatalogAssetBundle__GetIconAtlasPath(
        ClassBoardResourceCatalogAssetBundle_o *this,
        const MethodInfo *method)
{
  if ( (byte_5974711 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_4633/*"ClassBoard/Icon/DownloadClassBoardIconAtlas"*/);
    byte_5974711 = 1;
  }
  return (System_String_o *)StringLiteral_4633/*"ClassBoard/Icon/DownloadClassBoardIconAtlas"*/;
}


Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o ClassBoardResourceCatalogAssetBundle__GetObject___Il2CppFullySharedGenericType_(
        ClassBoardResourceCatalogAssetBundle_o *this,
        AssetData_o *assetData,
        System_String_o *name,
        const MethodInfo_381D95C *method)
{
  __int64 v4; // x4
  __int64 v5; // x20
  __int64 v9; // x8
  size_t v10; // x21
  __int64 v11; // x1
  Il2CppObject *Object_object__58532980; // x23
  __int64 *v15; // x1
  __int64 v16; // x0
  void (__fastcall *v17)(__int64, __int64 *, Il2CppObject *, _QWORD *, _QWORD); // x8
  _QWORD v18[2]; // [xsp+0h] [xbp-10h] BYREF
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o result; // 0:x0.16

  v5 = v4;
  v18[1] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v9 = *(_QWORD *)(v4 + 56);
  if ( !v9 )
  {
    sub_2213A60(&Method_AssetData_GetObject_GameObject____91708320);
    this = (ClassBoardResourceCatalogAssetBundle_o *)sub_2213A60(&UnityEngine_Object_TypeInfo);
    v9 = *(_QWORD *)(v5 + 56);
    if ( !v9 )
    {
      this = (ClassBoardResourceCatalogAssetBundle_o *)sub_224B964();
      v9 = *(_QWORD *)(v5 + 56);
    }
  }
  v10 = *(unsigned int *)(*(_QWORD *)v9 + 252LL);
  if ( !assetData )
    goto LABEL_11;
  Object_object__58532980 = AssetData__GetObject_object__58532980(
                              assetData,
                              name,
                              (const MethodInfo_37D2474 *)Method_AssetData_GetObject_GameObject____91708320);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
  this = (ClassBoardResourceCatalogAssetBundle_o *)UnityEngine_Object__op_Equality(
                                                     (UnityEngine_Object_o *)Object_object__58532980,
                                                     0,
                                                     0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    memset((char *)v18 - ((v10 + 15) & 0x1FFFFFFF0LL), 0, v10);
    result.klass = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)memset((void *)method, 0, v10);
    return result;
  }
  if ( !Object_object__58532980 )
LABEL_11:
    sub_2213CDC(this, assetData);
  v15 = *(__int64 **)(*(_QWORD *)(v5 + 56) + 8LL);
  v16 = *v15;
  v17 = (void (__fastcall *)(__int64, __int64 *, Il2CppObject *, _QWORD *, _QWORD))v15[2];
  v18[0] = (char *)v18 - ((v10 + 15) & 0x1FFFFFFF0LL);
  v17(v16, v15, Object_object__58532980, v18, v18[0]);
  result.klass = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)memcpy(
                                                                             (void *)method,
                                                                             (char *)v18 - ((v10 + 15) & 0x1FFFFFFF0LL),
                                                                             v10);
  return result;
}


Il2CppObject *ClassBoardResourceCatalogAssetBundle__GetObject_object_(
        ClassBoardResourceCatalogAssetBundle_o *this,
        AssetData_o *assetData,
        System_String_o *name,
        const MethodInfo_381D898 *method)
{
  __int64 v7; // x1
  Il2CppObject *Object_object__58532980; // x20

  if ( !method->rgctx_data )
  {
    sub_2213A60(&Method_AssetData_GetObject_GameObject____91708320);
    this = (ClassBoardResourceCatalogAssetBundle_o *)sub_2213A60(&UnityEngine_Object_TypeInfo);
    if ( !method->rgctx_data )
      this = (ClassBoardResourceCatalogAssetBundle_o *)sub_224B964();
  }
  if ( !assetData )
    goto LABEL_11;
  Object_object__58532980 = AssetData__GetObject_object__58532980(
                              assetData,
                              name,
                              (const MethodInfo_37D2474 *)Method_AssetData_GetObject_GameObject____91708320);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
  this = (ClassBoardResourceCatalogAssetBundle_o *)UnityEngine_Object__op_Equality(
                                                     (UnityEngine_Object_o *)Object_object__58532980,
                                                     0,
                                                     0);
  if ( ((unsigned __int8)this & 1) != 0 )
    return 0;
  if ( !Object_object__58532980 )
LABEL_11:
    sub_2213CDC(this, assetData);
  return UnityEngine_GameObject__GetComponent_object_(
           (UnityEngine_GameObject_o *)Object_object__58532980,
           (const MethodInfo_38B6F40 *)method->rgctx_data->_1_UnityEngine_GameObject_GetComponent_T_);
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
  if ( (byte_597470C & 1) == 0 )
  {
    sub_2213A60(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardBlank___);
    sub_2213A60(&StringLiteral_4639/*"ClassBoardBlank"*/);
    byte_597470C = 1;
  }
  mainAssetData = this->fields.mainAssetData;
  v5 = System_Int32__ToString((int32_t)&v8, 0);
  v6 = System_String__Concat_75651716((System_String_o *)StringLiteral_4639/*"ClassBoardBlank"*/, v5, 0);
  return (ClassBoardBlank_o *)ClassBoardResourceCatalogAssetBundle__GetObject_object_(
                                this,
                                mainAssetData,
                                v6,
                                (const MethodInfo_381D898 *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardBlank___);
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
  if ( (byte_597470F & 1) == 0 )
  {
    sub_2213A60(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardBlank___);
    sub_2213A60(&StringLiteral_7437/*"GrandClassBoardBlank"*/);
    byte_597470F = 1;
  }
  mainAssetData = this->fields.mainAssetData;
  v5 = System_Int32__ToString((int32_t)&v8, 0);
  v6 = System_String__Concat_75651716((System_String_o *)StringLiteral_7437/*"GrandClassBoardBlank"*/, v5, 0);
  return (ClassBoardBlank_o *)ClassBoardResourceCatalogAssetBundle__GetObject_object_(
                                this,
                                mainAssetData,
                                v6,
                                (const MethodInfo_381D898 *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardBlank___);
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
  if ( (byte_5974710 & 1) == 0 )
  {
    sub_2213A60(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardLock___);
    sub_2213A60(&StringLiteral_7439/*"GrandClassBoardLock"*/);
    byte_5974710 = 1;
  }
  mainAssetData = this->fields.mainAssetData;
  v5 = System_Int32__ToString((int32_t)&v8, 0);
  v6 = System_String__Concat_75651716((System_String_o *)StringLiteral_7439/*"GrandClassBoardLock"*/, v5, 0);
  return (ClassBoardLock_o *)ClassBoardResourceCatalogAssetBundle__GetObject_object_(
                               this,
                               mainAssetData,
                               v6,
                               (const MethodInfo_381D898 *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardLock___);
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
  if ( (byte_597470E & 1) == 0 )
  {
    sub_2213A60(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardSquare___);
    sub_2213A60(&StringLiteral_7440/*"GrandClassBoardSquare"*/);
    byte_597470E = 1;
  }
  mainAssetData = this->fields.mainAssetData;
  v5 = System_Int32__ToString((int32_t)&v8, 0);
  v6 = System_String__Concat_75651716((System_String_o *)StringLiteral_7440/*"GrandClassBoardSquare"*/, v5, 0);
  return (ClassBoardSquare_o *)ClassBoardResourceCatalogAssetBundle__GetObject_object_(
                                 this,
                                 mainAssetData,
                                 v6,
                                 (const MethodInfo_381D898 *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardSquare___);
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
  if ( (byte_597470D & 1) == 0 )
  {
    sub_2213A60(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardLock___);
    sub_2213A60(&StringLiteral_4643/*"ClassBoardLock"*/);
    byte_597470D = 1;
  }
  mainAssetData = this->fields.mainAssetData;
  v5 = System_Int32__ToString((int32_t)&v8, 0);
  v6 = System_String__Concat_75651716((System_String_o *)StringLiteral_4643/*"ClassBoardLock"*/, v5, 0);
  return (ClassBoardLock_o *)ClassBoardResourceCatalogAssetBundle__GetObject_object_(
                               this,
                               mainAssetData,
                               v6,
                               (const MethodInfo_381D898 *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardLock___);
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
  if ( (byte_597470B & 1) == 0 )
  {
    sub_2213A60(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardSquare___);
    sub_2213A60(&StringLiteral_4651/*"ClassBoardSquare"*/);
    byte_597470B = 1;
  }
  mainAssetData = this->fields.mainAssetData;
  v5 = System_Int32__ToString((int32_t)&v8, 0);
  v6 = System_String__Concat_75651716((System_String_o *)StringLiteral_4651/*"ClassBoardSquare"*/, v5, 0);
  return (ClassBoardSquare_o *)ClassBoardResourceCatalogAssetBundle__GetObject_object_(
                                 this,
                                 mainAssetData,
                                 v6,
                                 (const MethodInfo_381D898 *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardSquare___);
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
    sub_2213CDC(assetStorageLoadWrapper, assetBundlePath);
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
  char *Object_object__58532980; // x0
  struct AtlasManagerUnit_o *grandGraphAtlas; // x1
  AssetData_o *boardSelectViewAssetData; // x8
  AssetData_o *v16; // x8
  Il2CppObject *v17; // x20
  Il2CppObject *v18; // x28
  Il2CppObject *v19; // x27
  Il2CppObject *v20; // x26
  const MethodInfo *v21; // x5
  struct ClassBoardFullReleaseEffectComponent_o *v22; // x29
  const MethodInfo *v23; // x5
  const MethodInfo *v24; // x6
  const MethodInfo *v25; // x5
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7
  System_String_o *v38; // x2
  System_String_o *v39; // x3
  int32_t v40; // w4
  int32_t v41; // w5
  bool v42; // w6
  bool v43; // w7
  System_String_o *v44; // x2
  System_String_o *v45; // x3
  int32_t v46; // w4
  int32_t v47; // w5
  bool v48; // w6
  bool v49; // w7
  System_String_o *v50; // x2
  System_String_o *v51; // x3
  int32_t v52; // w4
  int32_t v53; // w5
  bool v54; // w6
  bool v55; // w7
  System_String_o *v56; // x2
  System_String_o *v57; // x3
  int32_t v58; // w4
  int32_t v59; // w5
  bool v60; // w6
  bool v61; // w7
  struct ClassBoardResourceContents_o *Contents_k__BackingField; // x20
  System_String_o *v63; // x2
  System_String_o *v64; // x3
  int32_t v65; // w4
  int32_t v66; // w5
  bool v67; // w6
  bool v68; // w7
  System_String_o *v69; // x2
  System_String_o *v70; // x3
  int32_t v71; // w4
  int32_t v72; // w5
  bool v73; // w6
  bool v74; // w7
  struct System_Action_o *loadEndCallback; // x8
  char *v76; // [xsp+0h] [xbp-C0h]
  char *v77; // [xsp+8h] [xbp-B8h]
  ClassBoardUIController_o *uiController; // [xsp+10h] [xbp-B0h]
  ClassBoardSquareOpenConfirmDialog_o *v79; // [xsp+18h] [xbp-A8h]
  ClassBoardDisableOpenDialog_o *v80; // [xsp+20h] [xbp-A0h]
  ClassBoardSquareDetailDialog_o *classBoardSquareDetailDialog; // [xsp+28h] [xbp-98h]
  Il2CppObject *v82; // [xsp+30h] [xbp-90h]
  Il2CppObject *v83; // [xsp+38h] [xbp-88h]
  ClassBoardBlank_o *v84; // [xsp+40h] [xbp-80h]
  ClassBoardLine_o *v85; // [xsp+50h] [xbp-70h]
  ClassBoardSquare_o *v86; // [xsp+58h] [xbp-68h]

  if ( (byte_5974709 & 1) == 0 )
  {
    sub_2213A60(&Method_AssetData_GetObject_GameObject____91708320);
    sub_2213A60(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardBackground___);
    sub_2213A60(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardBlank___);
    sub_2213A60(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardDisableOpenDialog___);
    sub_2213A60(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardFigureController___);
    sub_2213A60(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardFullReleaseEffectComponent___);
    sub_2213A60(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardLine___);
    sub_2213A60(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardLockOpenConfirmDialog___);
    sub_2213A60(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardLockReleaseConditionDialog___);
    sub_2213A60(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardLock___);
    sub_2213A60(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardQuestOpenConfirmDialog___);
    sub_2213A60(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardSquareDetailDialog___);
    sub_2213A60(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardSquareOpenConfirmDialog___);
    sub_2213A60(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardSquare___);
    sub_2213A60(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardUIController___);
    sub_2213A60(&StringLiteral_4638/*"ClassBoardBg"*/);
    sub_2213A60(&StringLiteral_4645/*"ClassBoardLockReleaseConditionDialog"*/);
    sub_2213A60(&StringLiteral_4642/*"ClassBoardLine"*/);
    sub_2213A60(&StringLiteral_7182/*"FullReleaseEffectClassScore"*/);
    sub_2213A60(&StringLiteral_4652/*"ClassBoardSquareDetailDialog"*/);
    sub_2213A60(&StringLiteral_4643/*"ClassBoardLock"*/);
    sub_2213A60(&StringLiteral_4650/*"ClassBoardSelectView"*/);
    sub_2213A60(&StringLiteral_7439/*"GrandClassBoardLock"*/);
    sub_2213A60(&StringLiteral_7134/*"ForwardIconAnimObject"*/);
    sub_2213A60(&StringLiteral_7183/*"FullReleaseEffectGrandScore"*/);
    sub_2213A60(&StringLiteral_7437/*"GrandClassBoardBlank"*/);
    sub_2213A60(&StringLiteral_4639/*"ClassBoardBlank"*/);
    sub_2213A60(&StringLiteral_4640/*"ClassBoardDisableOpenDialog"*/);
    sub_2213A60(&StringLiteral_4644/*"ClassBoardLockOpenConfirmDialog"*/);
    sub_2213A60(&StringLiteral_4651/*"ClassBoardSquare"*/);
    sub_2213A60(&StringLiteral_4641/*"ClassBoardFigure"*/);
    sub_2213A60(&StringLiteral_4653/*"ClassBoardSquareOpenConfirmDialog"*/);
    sub_2213A60(&StringLiteral_7440/*"GrandClassBoardSquare"*/);
    sub_2213A60(&StringLiteral_7438/*"GrandClassBoardLine"*/);
    sub_2213A60(&StringLiteral_4654/*"ClassBoardUI"*/);
    sub_2213A60(&StringLiteral_4646/*"ClassBoardQuestOpenConfirmDialog"*/);
    byte_5974709 = 1;
  }
  Object_object = ClassBoardResourceCatalogAssetBundle__GetObject_object_(
                    this,
                    this->fields.mainAssetData,
                    (System_String_o *)StringLiteral_4651/*"ClassBoardSquare"*/,
                    (const MethodInfo_381D898 *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardSquare___);
  v4 = ClassBoardResourceCatalogAssetBundle__GetObject_object_(
         this,
         this->fields.mainAssetData,
         (System_String_o *)StringLiteral_4642/*"ClassBoardLine"*/,
         (const MethodInfo_381D898 *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardLine___);
  v5 = ClassBoardResourceCatalogAssetBundle__GetObject_object_(
         this,
         this->fields.mainAssetData,
         (System_String_o *)StringLiteral_4643/*"ClassBoardLock"*/,
         (const MethodInfo_381D898 *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardLock___);
  v6 = ClassBoardResourceCatalogAssetBundle__GetObject_object_(
         this,
         this->fields.mainAssetData,
         (System_String_o *)StringLiteral_4639/*"ClassBoardBlank"*/,
         (const MethodInfo_381D898 *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardBlank___);
  v7 = ClassBoardResourceCatalogAssetBundle__GetObject_object_(
         this,
         this->fields.mainAssetData,
         (System_String_o *)StringLiteral_7440/*"GrandClassBoardSquare"*/,
         (const MethodInfo_381D898 *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardSquare___);
  v8 = ClassBoardResourceCatalogAssetBundle__GetObject_object_(
         this,
         this->fields.mainAssetData,
         (System_String_o *)StringLiteral_7438/*"GrandClassBoardLine"*/,
         (const MethodInfo_381D898 *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardLine___);
  v9 = ClassBoardResourceCatalogAssetBundle__GetObject_object_(
         this,
         this->fields.mainAssetData,
         (System_String_o *)StringLiteral_7439/*"GrandClassBoardLock"*/,
         (const MethodInfo_381D898 *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardLock___);
  v10 = ClassBoardResourceCatalogAssetBundle__GetObject_object_(
          this,
          this->fields.mainAssetData,
          (System_String_o *)StringLiteral_7437/*"GrandClassBoardBlank"*/,
          (const MethodInfo_381D898 *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardBlank___);
  v11 = ClassBoardResourceCatalogAssetBundle__GetObject_object_(
          this,
          this->fields.mainAssetData,
          (System_String_o *)StringLiteral_4640/*"ClassBoardDisableOpenDialog"*/,
          (const MethodInfo_381D898 *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardDisableOpenDialog___);
  v12 = ClassBoardResourceCatalogAssetBundle__GetObject_object_(
          this,
          this->fields.mainAssetData,
          (System_String_o *)StringLiteral_4653/*"ClassBoardSquareOpenConfirmDialog"*/,
          (const MethodInfo_381D898 *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardSquareOpenConfirmDialog___);
  v83 = ClassBoardResourceCatalogAssetBundle__GetObject_object_(
          this,
          this->fields.mainAssetData,
          (System_String_o *)StringLiteral_4644/*"ClassBoardLockOpenConfirmDialog"*/,
          (const MethodInfo_381D898 *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardLockOpenConfirmDialog___);
  v82 = ClassBoardResourceCatalogAssetBundle__GetObject_object_(
          this,
          this->fields.mainAssetData,
          (System_String_o *)StringLiteral_4645/*"ClassBoardLockReleaseConditionDialog"*/,
          (const MethodInfo_381D898 *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardLockReleaseConditionDialog___);
  classBoardSquareDetailDialog = (ClassBoardSquareDetailDialog_o *)ClassBoardResourceCatalogAssetBundle__GetObject_object_(
                                                                     this,
                                                                     this->fields.mainAssetData,
                                                                     (System_String_o *)StringLiteral_4652/*"ClassBoardSquareDetailDialog"*/,
                                                                     (const MethodInfo_381D898 *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardSquareDetailDialog___);
  uiController = (ClassBoardUIController_o *)ClassBoardResourceCatalogAssetBundle__GetObject_object_(
                                               this,
                                               this->fields.mainAssetData,
                                               (System_String_o *)StringLiteral_4654/*"ClassBoardUI"*/,
                                               (const MethodInfo_381D898 *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardUIController___);
  Object_object__58532980 = (char *)ClassBoardResourceCatalogAssetBundle__GetObject_object_(
                                      this,
                                      this->fields.modelAssetData,
                                      (System_String_o *)StringLiteral_4638/*"ClassBoardBg"*/,
                                      (const MethodInfo_381D898 *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardBackground___);
  boardSelectViewAssetData = this->fields.boardSelectViewAssetData;
  v77 = Object_object__58532980;
  if ( !boardSelectViewAssetData )
    goto LABEL_20;
  v79 = (ClassBoardSquareOpenConfirmDialog_o *)v12;
  v80 = (ClassBoardDisableOpenDialog_o *)v11;
  v84 = (ClassBoardBlank_o *)v10;
  v85 = (ClassBoardLine_o *)v8;
  v86 = (ClassBoardSquare_o *)v7;
  Object_object__58532980 = (char *)AssetData__GetObject_object__58532980(
                                      boardSelectViewAssetData,
                                      (System_String_o *)StringLiteral_4650/*"ClassBoardSelectView"*/,
                                      (const MethodInfo_37D2474 *)Method_AssetData_GetObject_GameObject____91708320);
  v16 = this->fields.boardSelectViewAssetData;
  v76 = Object_object__58532980;
  if ( !v16 )
    goto LABEL_20;
  v17 = AssetData__GetObject_object__58532980(
          v16,
          (System_String_o *)StringLiteral_7134/*"ForwardIconAnimObject"*/,
          (const MethodInfo_37D2474 *)Method_AssetData_GetObject_GameObject____91708320);
  v18 = ClassBoardResourceCatalogAssetBundle__GetObject_object_(
          this,
          this->fields.mainAssetData,
          (System_String_o *)StringLiteral_4641/*"ClassBoardFigure"*/,
          (const MethodInfo_381D898 *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardFigureController___);
  v19 = ClassBoardResourceCatalogAssetBundle__GetObject_object_(
          this,
          this->fields.mainAssetData,
          (System_String_o *)StringLiteral_4646/*"ClassBoardQuestOpenConfirmDialog"*/,
          (const MethodInfo_381D898 *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardQuestOpenConfirmDialog___);
  v20 = ClassBoardResourceCatalogAssetBundle__GetObject_object_(
          this,
          this->fields.mainAssetData,
          (System_String_o *)StringLiteral_7182/*"FullReleaseEffectClassScore"*/,
          (const MethodInfo_381D898 *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardFullReleaseEffectComponent___);
  Object_object__58532980 = (char *)ClassBoardResourceCatalogAssetBundle__GetObject_object_(
                                      this,
                                      this->fields.mainAssetData,
                                      (System_String_o *)StringLiteral_7183/*"FullReleaseEffectGrandScore"*/,
                                      (const MethodInfo_381D898 *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardFullReleaseEffectComponent___);
  if ( !this->fields._Contents_k__BackingField )
    goto LABEL_20;
  v22 = (struct ClassBoardFullReleaseEffectComponent_o *)Object_object__58532980;
  ClassBoardResourceContents__SetContents(
    this->fields._Contents_k__BackingField,
    (ClassBoardSquare_o *)Object_object,
    (ClassBoardLine_o *)v4,
    (ClassBoardLock_o *)v5,
    (ClassBoardBlank_o *)v6,
    v21);
  Object_object__58532980 = (char *)this->fields._Contents_k__BackingField;
  if ( !Object_object__58532980 )
    goto LABEL_20;
  ClassBoardResourceContents__SetGrandContents(
    (ClassBoardResourceContents_o *)Object_object__58532980,
    v86,
    v85,
    (ClassBoardLock_o *)v9,
    v84,
    v23);
  Object_object__58532980 = (char *)this->fields._Contents_k__BackingField;
  if ( !Object_object__58532980 )
    goto LABEL_20;
  ClassBoardResourceContents__SetContentsDialog(
    (ClassBoardResourceContents_o *)Object_object__58532980,
    v80,
    v79,
    (ClassBoardLockOpenConfirmDialog_o *)v83,
    (ClassBoardLockReleaseConditionDialog_o *)v82,
    classBoardSquareDetailDialog,
    v24);
  Object_object__58532980 = (char *)this->fields._Contents_k__BackingField;
  if ( !Object_object__58532980 )
    goto LABEL_20;
  ClassBoardResourceContents__SetContentsUI(
    (ClassBoardResourceContents_o *)Object_object__58532980,
    uiController,
    this->fields.boardUiAtlasManagerUnit,
    this->fields.iconAtlasManagerUnit,
    this->fields.classUiAtlasManagerUnit,
    v25);
  Object_object__58532980 = (char *)this->fields._Contents_k__BackingField;
  if ( !Object_object__58532980 )
    goto LABEL_20;
  *((_QWORD *)Object_object__58532980 + 20) = v77;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)(Object_object__58532980 + 160),
    (int32_t)v77,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  Object_object__58532980 = (char *)this->fields._Contents_k__BackingField;
  if ( !Object_object__58532980 )
    goto LABEL_20;
  *((_QWORD *)Object_object__58532980 + 22) = v76;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)(Object_object__58532980 + 176),
    (int32_t)v76,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  Object_object__58532980 = (char *)this->fields._Contents_k__BackingField;
  if ( !Object_object__58532980 )
    goto LABEL_20;
  *((_QWORD *)Object_object__58532980 + 23) = v17;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)(Object_object__58532980 + 184),
    (int32_t)v17,
    v38,
    v39,
    v40,
    v41,
    v42,
    v43);
  Object_object__58532980 = (char *)this->fields._Contents_k__BackingField;
  if ( !Object_object__58532980 )
    goto LABEL_20;
  *((_QWORD *)Object_object__58532980 + 16) = v18;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)(Object_object__58532980 + 128),
    (int32_t)v18,
    v44,
    v45,
    v46,
    v47,
    v48,
    v49);
  Object_object__58532980 = (char *)this->fields._Contents_k__BackingField;
  if ( !Object_object__58532980 )
    goto LABEL_20;
  *((_QWORD *)Object_object__58532980 + 17) = v19;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)(Object_object__58532980 + 136),
    (int32_t)v19,
    v50,
    v51,
    v52,
    v53,
    v54,
    v55);
  Contents_k__BackingField = this->fields._Contents_k__BackingField;
  if ( !Contents_k__BackingField )
    goto LABEL_20;
  Contents_k__BackingField->fields._FullReleaseEffectComponent_k__BackingField = (struct ClassBoardFullReleaseEffectComponent_o *)v20;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&Contents_k__BackingField->fields._FullReleaseEffectComponent_k__BackingField,
    (int32_t)v20,
    v56,
    v57,
    v58,
    v59,
    v60,
    v61);
  Contents_k__BackingField->fields._GrandFullReleaseEffectComponent_k__BackingField = v22;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&Contents_k__BackingField->fields._GrandFullReleaseEffectComponent_k__BackingField,
    (int32_t)v22,
    v63,
    v64,
    v65,
    v66,
    v67,
    v68);
  grandGraphAtlas = this->fields.grandGraphAtlas;
  if ( grandGraphAtlas )
  {
    Object_object__58532980 = (char *)this->fields._Contents_k__BackingField;
    if ( !Object_object__58532980 )
      goto LABEL_20;
    *((_QWORD *)Object_object__58532980 + 27) = grandGraphAtlas;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)(Object_object__58532980 + 216),
      (int32_t)grandGraphAtlas,
      v69,
      v70,
      v71,
      v72,
      v73,
      v74);
  }
  loadEndCallback = this->fields.loadEndCallback;
  if ( !loadEndCallback )
LABEL_20:
    sub_2213CDC(Object_object__58532980, grandGraphAtlas);
  ((void (__fastcall *)(intptr_t, intptr_t))loadEndCallback->fields.invoke_impl)(
    loadEndCallback->fields.method_code,
    loadEndCallback->fields.method);
}


void ClassBoardResourceCatalogAssetBundle__LoadSystemAsset(
        ClassBoardResourceCatalogAssetBundle_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  AssetStorageLoadWrapper_o *assetStorageLoadWrapper; // x20
  AtlasManagerUnit_o *v11; // x21
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  AssetStorageLoadWrapper_o *v18; // x20
  AtlasManagerUnit_o *v19; // x21
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  AssetStorageLoadWrapper_o *v26; // x20
  AtlasManagerUnit_o *v27; // x21
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  AssetStorageLoadWrapper_o *v34; // x20
  AtlasManagerUnit_o *v35; // x21
  System_String_o *v36; // x2
  System_String_o *v37; // x3
  int32_t v38; // w4
  int32_t v39; // w5
  bool v40; // w6
  bool v41; // w7
  __int64 v42; // x20
  System_Action_object__o *v43; // x21
  ChainableActionBase_o *v44; // x0
  __int64 v45; // x1
  System_String_o *v46; // x2
  System_String_o *v47; // x3
  int32_t v48; // w4
  int32_t v49; // w5
  bool v50; // w6
  bool v51; // w7
  System_Action_object__o *v52; // x21
  System_String_o *v53; // x2
  System_String_o *v54; // x3
  int32_t v55; // w4
  int32_t v56; // w5
  bool v57; // w6
  bool v58; // w7
  System_Action_object__o *v59; // x21
  System_String_o *v60; // x2
  System_String_o *v61; // x3
  int32_t v62; // w4
  int32_t v63; // w5
  bool v64; // w6
  bool v65; // w7
  System_Action_object__o *v66; // x21
  System_String_o *v67; // x2
  System_String_o *v68; // x3
  int32_t v69; // w4
  int32_t v70; // w5
  bool v71; // w6
  bool v72; // w7
  System_Action_object__o *v73; // x21
  System_String_o *v74; // x2
  System_String_o *v75; // x3
  int32_t v76; // w4
  int32_t v77; // w5
  bool v78; // w6
  bool v79; // w7
  System_Action_object__o *v80; // x21
  System_String_o *v81; // x2
  System_String_o *v82; // x3
  int32_t v83; // w4
  int32_t v84; // w5
  bool v85; // w6
  bool v86; // w7
  System_Action_object__o *v87; // x21
  System_String_o *v88; // x2
  System_String_o *v89; // x3
  int32_t v90; // w4
  int32_t v91; // w5
  bool v92; // w6
  bool v93; // w7
  ChainableActionParallel_o *v94; // x21
  __int64 v95; // x20
  System_Action_o *v96; // x22
  System_String_o *v97; // x2
  System_String_o *v98; // x3
  int32_t v99; // w4
  int32_t v100; // w5
  bool v101; // w6
  bool v102; // w7

  if ( (byte_5974708 & 1) == 0 )
  {
    sub_2213A60(&System_Action___TypeInfo);
    sub_2213A60(&System_Action_Action____TypeInfo);
    sub_2213A60(&System_Action_Action__TypeInfo);
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&AtlasManagerUnit_TypeInfo);
    sub_2213A60(&ChainableActionParallel_TypeInfo);
    sub_2213A60(&Method_ClassBoardResourceCatalogAssetBundle_LoadEnd__);
    sub_2213A60(&Method_ClassBoardResourceCatalogAssetBundle__LoadSystemAsset_b__44_0__);
    sub_2213A60(&Method_ClassBoardResourceCatalogAssetBundle__LoadSystemAsset_b__44_1__);
    sub_2213A60(&Method_ClassBoardResourceCatalogAssetBundle__LoadSystemAsset_b__44_2__);
    sub_2213A60(&Method_ClassBoardResourceCatalogAssetBundle__LoadSystemAsset_b__44_3__);
    sub_2213A60(&Method_ClassBoardResourceCatalogAssetBundle__LoadSystemAsset_b__44_4__);
    sub_2213A60(&Method_ClassBoardResourceCatalogAssetBundle__LoadSystemAsset_b__44_5__);
    sub_2213A60(&Method_ClassBoardResourceCatalogAssetBundle__LoadSystemAsset_b__44_6__);
    sub_2213A60(&StringLiteral_4637/*"ClassBoard/UI/DownloadClassBoardUIAtlas"*/);
    sub_2213A60(&StringLiteral_7447/*"GrandGraphSystem/DownloadGrandGraphSystemAtlas"*/);
    sub_2213A60(&StringLiteral_4636/*"ClassBoard/UI/DownloadClassBoardClassUIAtlas"*/);
    sub_2213A60(&StringLiteral_4633/*"ClassBoard/Icon/DownloadClassBoardIconAtlas"*/);
    byte_5974708 = 1;
  }
  this->fields.loadEndCallback = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.loadEndCallback,
    (int32_t)callback,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  assetStorageLoadWrapper = this->fields.assetStorageLoadWrapper;
  v11 = (AtlasManagerUnit_o *)sub_2213CCC(AtlasManagerUnit_TypeInfo);
  AtlasManagerUnit___ctor(v11, (System_String_o *)StringLiteral_4637/*"ClassBoard/UI/DownloadClassBoardUIAtlas"*/, assetStorageLoadWrapper, 0);
  this->fields.boardUiAtlasManagerUnit = v11;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.boardUiAtlasManagerUnit,
    (int32_t)v11,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  v18 = this->fields.assetStorageLoadWrapper;
  v19 = (AtlasManagerUnit_o *)sub_2213CCC(AtlasManagerUnit_TypeInfo);
  AtlasManagerUnit___ctor(v19, (System_String_o *)StringLiteral_4636/*"ClassBoard/UI/DownloadClassBoardClassUIAtlas"*/, v18, 0);
  this->fields.classUiAtlasManagerUnit = v19;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.classUiAtlasManagerUnit,
    (int32_t)v19,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  v26 = this->fields.assetStorageLoadWrapper;
  v27 = (AtlasManagerUnit_o *)sub_2213CCC(AtlasManagerUnit_TypeInfo);
  AtlasManagerUnit___ctor(v27, (System_String_o *)StringLiteral_4633/*"ClassBoard/Icon/DownloadClassBoardIconAtlas"*/, v26, 0);
  this->fields.iconAtlasManagerUnit = v27;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.iconAtlasManagerUnit,
    (int32_t)v27,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
  v34 = this->fields.assetStorageLoadWrapper;
  v35 = (AtlasManagerUnit_o *)sub_2213CCC(AtlasManagerUnit_TypeInfo);
  AtlasManagerUnit___ctor(v35, (System_String_o *)StringLiteral_7447/*"GrandGraphSystem/DownloadGrandGraphSystemAtlas"*/, v34, 0);
  this->fields.grandGraphAtlas = v35;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.grandGraphAtlas,
    (int32_t)v35,
    v36,
    v37,
    v38,
    v39,
    v40,
    v41);
  v42 = sub_2213B20(System_Action_Action____TypeInfo, 7);
  v43 = (System_Action_object__o *)sub_2213CCC(System_Action_Action__TypeInfo);
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
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v42 + 32), (int32_t)v43, v46, v47, v48, v49, v50, v51);
  v52 = (System_Action_object__o *)sub_2213CCC(System_Action_Action__TypeInfo);
  System_Action_object____ctor(
    v52,
    (Il2CppObject *)this,
    Method_ClassBoardResourceCatalogAssetBundle__LoadSystemAsset_b__44_1__,
    0);
  if ( (*(_DWORD *)(v42 + 24) & 0xFFFFFFFE) == 0 )
    goto LABEL_16;
  *(_QWORD *)(v42 + 40) = v52;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v42 + 40), (int32_t)v52, v53, v54, v55, v56, v57, v58);
  v59 = (System_Action_object__o *)sub_2213CCC(System_Action_Action__TypeInfo);
  System_Action_object____ctor(
    v59,
    (Il2CppObject *)this,
    Method_ClassBoardResourceCatalogAssetBundle__LoadSystemAsset_b__44_2__,
    0);
  if ( *(_DWORD *)(v42 + 24) <= 2u )
    goto LABEL_16;
  *(_QWORD *)(v42 + 48) = v59;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v42 + 48), (int32_t)v59, v60, v61, v62, v63, v64, v65);
  v66 = (System_Action_object__o *)sub_2213CCC(System_Action_Action__TypeInfo);
  System_Action_object____ctor(
    v66,
    (Il2CppObject *)this,
    Method_ClassBoardResourceCatalogAssetBundle__LoadSystemAsset_b__44_3__,
    0);
  if ( (*(_DWORD *)(v42 + 24) & 0xFFFFFFFC) == 0 )
    goto LABEL_16;
  *(_QWORD *)(v42 + 56) = v66;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v42 + 56), (int32_t)v66, v67, v68, v69, v70, v71, v72);
  v73 = (System_Action_object__o *)sub_2213CCC(System_Action_Action__TypeInfo);
  System_Action_object____ctor(
    v73,
    (Il2CppObject *)this,
    Method_ClassBoardResourceCatalogAssetBundle__LoadSystemAsset_b__44_4__,
    0);
  if ( *(_DWORD *)(v42 + 24) <= 4u )
    goto LABEL_16;
  *(_QWORD *)(v42 + 64) = v73;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v42 + 64), (int32_t)v73, v74, v75, v76, v77, v78, v79);
  v80 = (System_Action_object__o *)sub_2213CCC(System_Action_Action__TypeInfo);
  System_Action_object____ctor(
    v80,
    (Il2CppObject *)this,
    Method_ClassBoardResourceCatalogAssetBundle__LoadSystemAsset_b__44_5__,
    0);
  if ( *(_DWORD *)(v42 + 24) <= 5u )
    goto LABEL_16;
  *(_QWORD *)(v42 + 72) = v80;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v42 + 72), (int32_t)v80, v81, v82, v83, v84, v85, v86);
  v87 = (System_Action_object__o *)sub_2213CCC(System_Action_Action__TypeInfo);
  System_Action_object____ctor(
    v87,
    (Il2CppObject *)this,
    Method_ClassBoardResourceCatalogAssetBundle__LoadSystemAsset_b__44_6__,
    0);
  if ( *(_DWORD *)(v42 + 24) <= 6u )
    goto LABEL_16;
  *(_QWORD *)(v42 + 80) = v87;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v42 + 80), (int32_t)v87, v88, v89, v90, v91, v92, v93);
  v94 = (ChainableActionParallel_o *)sub_2213CCC(ChainableActionParallel_TypeInfo);
  ChainableActionParallel___ctor_56108200(v94, (System_Action_Action__array *)v42, 0);
  v95 = sub_2213B20(System_Action___TypeInfo, 1);
  v96 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v96, (Il2CppObject *)this, Method_ClassBoardResourceCatalogAssetBundle_LoadEnd__, 0);
  if ( !v95 )
    goto LABEL_17;
  if ( !*(_DWORD *)(v95 + 24) )
LABEL_16:
    sub_2213CE4(v44);
  *(_QWORD *)(v95 + 32) = v96;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v95 + 32), (int32_t)v96, v97, v98, v99, v100, v101, v102);
  if ( !v94 || (v44 = ChainableActionBase__Final((ChainableActionBase_o *)v94, (System_Action_array *)v95, 0)) == 0 )
LABEL_17:
    sub_2213CDC(v44, v45);
  ChainableActionBase__Execute(v44, 0);
}


void ClassBoardResourceCatalogAssetBundle__ReleaseAll(
        ClassBoardResourceCatalogAssetBundle_o *this,
        const MethodInfo *method)
{
  AssetStorageLoadWrapper_o *assetStorageLoadWrapper; // x0

  assetStorageLoadWrapper = this->fields.assetStorageLoadWrapper;
  if ( !assetStorageLoadWrapper )
    sub_2213CDC(0, method);
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
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  AtlasManagerUnit_o *boardUiAtlasManagerUnit; // x0
  AssetStorageLoadWrapper_o *assetStorageLoadWrapper; // x22
  AtlasManagerUnit_o *v22; // x23
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  AtlasManagerUnit_o *v29; // x19
  System_Action_o *v30; // x21

  if ( (byte_597470A & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&AtlasManagerUnit_TypeInfo);
    sub_2213A60(&Method_ClassBoardResourceCatalogAssetBundle___c__DisplayClass47_0__ReloadBoardUIAtlas_b__0__);
    sub_2213A60(&ClassBoardResourceCatalogAssetBundle___c__DisplayClass47_0_TypeInfo);
    sub_2213A60(&StringLiteral_4637/*"ClassBoard/UI/DownloadClassBoardUIAtlas"*/);
    byte_597470A = 1;
  }
  v5 = sub_2213CCC(ClassBoardResourceCatalogAssetBundle___c__DisplayClass47_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_8;
  *(_QWORD *)(v5 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = callback;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)callback, v14, v15, v16, v17, v18, v19);
  boardUiAtlasManagerUnit = this->fields.boardUiAtlasManagerUnit;
  if ( boardUiAtlasManagerUnit )
    AtlasManagerUnit__Release(boardUiAtlasManagerUnit, 0);
  assetStorageLoadWrapper = this->fields.assetStorageLoadWrapper;
  v22 = (AtlasManagerUnit_o *)sub_2213CCC(AtlasManagerUnit_TypeInfo);
  AtlasManagerUnit___ctor(v22, (System_String_o *)StringLiteral_4637/*"ClassBoard/UI/DownloadClassBoardUIAtlas"*/, assetStorageLoadWrapper, 0);
  this->fields.boardUiAtlasManagerUnit = v22;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.boardUiAtlasManagerUnit,
    (int32_t)v22,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  v29 = this->fields.boardUiAtlasManagerUnit;
  v30 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(
    v30,
    (Il2CppObject *)v5,
    Method_ClassBoardResourceCatalogAssetBundle___c__DisplayClass47_0__ReloadBoardUIAtlas_b__0__,
    0);
  if ( !v29 )
LABEL_8:
    sub_2213CDC(v6, v7);
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
    sub_2213CDC(0, sprite);
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
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  AssetLoader_LoadEndDataHandler_o *v20; // x20
  const MethodInfo *v21; // x3

  if ( (byte_5974712 & 1) == 0 )
  {
    sub_2213A60(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_2213A60(&Method_ClassBoardResourceCatalogAssetBundle___c__DisplayClass44_0__LoadSystemAsset_b__7__);
    sub_2213A60(&ClassBoardResourceCatalogAssetBundle___c__DisplayClass44_0_TypeInfo);
    sub_2213A60(&StringLiteral_4634/*"ClassBoard/Main"*/);
    byte_5974712 = 1;
  }
  v5 = sub_2213CCC(ClassBoardResourceCatalogAssetBundle___c__DisplayClass44_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_2213CDC(v6, v7);
  *(_QWORD *)(v5 + 24) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 16) = f;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)f, v14, v15, v16, v17, v18, v19);
  v20 = (AssetLoader_LoadEndDataHandler_o *)sub_2213CCC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v20,
    (Il2CppObject *)v5,
    Method_ClassBoardResourceCatalogAssetBundle___c__DisplayClass44_0__LoadSystemAsset_b__7__,
    0);
  ClassBoardResourceCatalogAssetBundle__LoadAssetStorage(this, (System_String_o *)StringLiteral_4634/*"ClassBoard/Main"*/, v20, v21);
}


void ClassBoardResourceCatalogAssetBundle___LoadSystemAsset_b__44_1(
        ClassBoardResourceCatalogAssetBundle_o *this,
        System_Action_o *f,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  AssetLoader_LoadEndDataHandler_o *v20; // x20
  const MethodInfo *v21; // x3

  if ( (byte_5974713 & 1) == 0 )
  {
    sub_2213A60(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_2213A60(&Method_ClassBoardResourceCatalogAssetBundle___c__DisplayClass44_1__LoadSystemAsset_b__8__);
    sub_2213A60(&ClassBoardResourceCatalogAssetBundle___c__DisplayClass44_1_TypeInfo);
    sub_2213A60(&StringLiteral_4613/*"ClassBoard/Bg"*/);
    byte_5974713 = 1;
  }
  v5 = sub_2213CCC(ClassBoardResourceCatalogAssetBundle___c__DisplayClass44_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_2213CDC(v6, v7);
  *(_QWORD *)(v5 + 24) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 16) = f;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)f, v14, v15, v16, v17, v18, v19);
  v20 = (AssetLoader_LoadEndDataHandler_o *)sub_2213CCC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v20,
    (Il2CppObject *)v5,
    Method_ClassBoardResourceCatalogAssetBundle___c__DisplayClass44_1__LoadSystemAsset_b__8__,
    0);
  ClassBoardResourceCatalogAssetBundle__LoadAssetStorage(this, (System_String_o *)StringLiteral_4613/*"ClassBoard/Bg"*/, v20, v21);
}


void ClassBoardResourceCatalogAssetBundle___LoadSystemAsset_b__44_2(
        ClassBoardResourceCatalogAssetBundle_o *this,
        System_Action_o *f,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  AssetLoader_LoadEndDataHandler_o *v20; // x20
  const MethodInfo *v21; // x3

  if ( (byte_5974714 & 1) == 0 )
  {
    sub_2213A60(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_2213A60(&Method_ClassBoardResourceCatalogAssetBundle___c__DisplayClass44_2__LoadSystemAsset_b__9__);
    sub_2213A60(&ClassBoardResourceCatalogAssetBundle___c__DisplayClass44_2_TypeInfo);
    sub_2213A60(&StringLiteral_4635/*"ClassBoard/Select"*/);
    byte_5974714 = 1;
  }
  v5 = sub_2213CCC(ClassBoardResourceCatalogAssetBundle___c__DisplayClass44_2_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_2213CDC(v6, v7);
  *(_QWORD *)(v5 + 24) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 16) = f;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)f, v14, v15, v16, v17, v18, v19);
  v20 = (AssetLoader_LoadEndDataHandler_o *)sub_2213CCC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v20,
    (Il2CppObject *)v5,
    Method_ClassBoardResourceCatalogAssetBundle___c__DisplayClass44_2__LoadSystemAsset_b__9__,
    0);
  ClassBoardResourceCatalogAssetBundle__LoadAssetStorage(this, (System_String_o *)StringLiteral_4635/*"ClassBoard/Select"*/, v20, v21);
}


void ClassBoardResourceCatalogAssetBundle___LoadSystemAsset_b__44_3(
        ClassBoardResourceCatalogAssetBundle_o *this,
        System_Action_o *f,
        const MethodInfo *method)
{
  AtlasManagerUnit_o *boardUiAtlasManagerUnit; // x0

  boardUiAtlasManagerUnit = this->fields.boardUiAtlasManagerUnit;
  if ( !boardUiAtlasManagerUnit )
    sub_2213CDC(0, f);
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
    sub_2213CDC(0, f);
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
    sub_2213CDC(0, f);
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
    sub_2213CDC(0, f);
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct ClassBoardResourceCatalogAssetBundle_o *_4__this; // x0
  struct System_Action_o *f; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (_4__this->fields.mainAssetData = asset,
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&_4__this->fields.mainAssetData,
          (int32_t)asset,
          (System_String_o *)method,
          v3,
          v4,
          v5,
          v6,
          v7),
        (f = this->fields.f) == 0) )
  {
    sub_2213CDC(_4__this, asset);
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct ClassBoardResourceCatalogAssetBundle_o *_4__this; // x0
  struct System_Action_o *f; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (_4__this->fields.modelAssetData = asset,
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&_4__this->fields.modelAssetData,
          (int32_t)asset,
          (System_String_o *)method,
          v3,
          v4,
          v5,
          v6,
          v7),
        (f = this->fields.f) == 0) )
  {
    sub_2213CDC(_4__this, asset);
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct ClassBoardResourceCatalogAssetBundle_o *_4__this; // x0
  struct System_Action_o *f; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (_4__this->fields.boardSelectViewAssetData = asset,
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&_4__this->fields.boardSelectViewAssetData,
          (int32_t)asset,
          (System_String_o *)method,
          v3,
          v4,
          v5,
          v6,
          v7),
        (f = this->fields.f) == 0) )
  {
    sub_2213CDC(_4__this, asset);
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
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct ClassBoardResourceCatalogAssetBundle_o *_4__this; // x8
  ClassBoardResourceCatalogAssetBundle___c__DisplayClass47_0_o *v9; // x19
  struct AtlasManagerUnit_o *boardUiAtlasManagerUnit; // x1

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (v9 = this,
        (this = (ClassBoardResourceCatalogAssetBundle___c__DisplayClass47_0_o *)_4__this->fields._Contents_k__BackingField) == 0) )
  {
    sub_2213CDC(this, method);
  }
  boardUiAtlasManagerUnit = _4__this->fields.boardUiAtlasManagerUnit;
  *((_QWORD *)this + 24) = boardUiAtlasManagerUnit;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(this + 6), (int32_t)boardUiAtlasManagerUnit, v2, v3, v4, v5, v6, v7);
  ActionExtensions__Call(v9->fields.callback, 0);
}