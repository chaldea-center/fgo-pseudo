void ClassBoardResourceCatalogAssetBundle___ctor(
        ClassBoardResourceCatalogAssetBundle_o *this,
        const MethodInfo *method)
{
  Il2CppObject *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  AssetStorageLoadWrapper_o *v6; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4C2AD3C & 1) == 0 )
  {
    sub_1C2D490(&AssetStorageLoadWrapper_TypeInfo);
    sub_1C2D490(&ClassBoardResourceContents_TypeInfo);
    byte_4C2AD3C = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  v3 = (Il2CppObject *)sub_1C2D6DC(ClassBoardResourceContents_TypeInfo);
  System_Object___ctor(v3, 0);
  this->fields._Contents_k__BackingField = (struct ClassBoardResourceContents_o *)v3;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields._Contents_k__BackingField, (int32_t)v3, v4, v5);
  v6 = (AssetStorageLoadWrapper_o *)sub_1C2D6DC(AssetStorageLoadWrapper_TypeInfo);
  AssetStorageLoadWrapper___ctor(v6, 0);
  this->fields.assetStorageLoadWrapper = v6;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields, (int32_t)v6, v7, v8);
}


System_String_o *ClassBoardResourceCatalogAssetBundle__GetIconAtlasPath(
        ClassBoardResourceCatalogAssetBundle_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C2AD46 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_4453/*"ClassBoard/Icon/DownloadClassBoardIconAtlas"*/);
    byte_4C2AD46 = 1;
  }
  return (System_String_o *)StringLiteral_4453/*"ClassBoard/Icon/DownloadClassBoardIconAtlas"*/;
}


// local variable allocation has failed, the output may be wrong!
Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o ClassBoardResourceCatalogAssetBundle__GetObject___Il2CppFullySharedGenericType_(
        ClassBoardResourceCatalogAssetBundle_o *this,
        AssetData_o *assetData,
        System_String_o *name,
        const MethodInfo_30C2518 *method)
{
  __int64 v4; // x4
  __int64 v5; // x20
  __int64 v8; // x8
  size_t v10; // x21
  void *v11; // x0
  __int64 v12; // x1
  Il2CppObject *Object_object__51051712; // x23
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
    sub_1C2D490(&Method_AssetData_GetObject_GameObject____77994080);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    v8 = *(_QWORD *)(v5 + 56);
    if ( !v8 )
    {
      sub_1C7DC00();
      v8 = *(_QWORD *)(v5 + 56);
    }
  }
  v10 = *(unsigned int *)(*(_QWORD *)v8 + 252LL);
  v11 = memset((char *)v18 - ((v10 + 15) & 0x1FFFFFFF0LL), 0, v10);
  if ( !assetData )
    goto LABEL_12;
  Object_object__51051712 = AssetData__GetObject_object__51051712(
                              assetData,
                              name,
                              (const MethodInfo_30AFCC0 *)Method_AssetData_GetObject_GameObject____77994080);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v11 = (void *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Object_object__51051712, 0, 0);
  if ( ((unsigned __int8)v11 & 1) == 0 )
  {
    if ( Object_object__51051712 )
    {
      v14 = *(__int64 **)(*(_QWORD *)(v5 + 56) + 8LL);
      v15 = *v14;
      v18[0] = (char *)v18 - ((v10 + 15) & 0x1FFFFFFF0LL);
      ((void (__fastcall *)(__int64, __int64 *, Il2CppObject *, _QWORD *, _QWORD))v14[2])(
        v15,
        v14,
        Object_object__51051712,
        v18,
        v18[0]);
      goto LABEL_11;
    }
LABEL_12:
    sub_1C2D6EC(v11, v12);
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
        const MethodInfo_30C2454 *method)
{
  Il2CppObject *Object_object__51051712; // x20

  if ( !method->rgctx_data )
  {
    sub_1C2D490(&Method_AssetData_GetObject_GameObject____77994080);
    this = (ClassBoardResourceCatalogAssetBundle_o *)sub_1C2D490(&UnityEngine_Object_TypeInfo);
    if ( !method->rgctx_data )
      this = (ClassBoardResourceCatalogAssetBundle_o *)sub_1C7DC00();
  }
  if ( !assetData )
    goto LABEL_11;
  Object_object__51051712 = AssetData__GetObject_object__51051712(
                              assetData,
                              name,
                              (const MethodInfo_30AFCC0 *)Method_AssetData_GetObject_GameObject____77994080);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (ClassBoardResourceCatalogAssetBundle_o *)UnityEngine_Object__op_Equality(
                                                     (UnityEngine_Object_o *)Object_object__51051712,
                                                     0,
                                                     0);
  if ( ((unsigned __int8)this & 1) != 0 )
    return 0;
  if ( !Object_object__51051712 )
LABEL_11:
    sub_1C2D6EC(this, assetData);
  return UnityEngine_GameObject__GetComponent_object_(
           (UnityEngine_GameObject_o *)Object_object__51051712,
           (const MethodInfo_3125ED0 *)method->rgctx_data->_1_UnityEngine_GameObject_GetComponent_T_);
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
  if ( (byte_4C2AD41 & 1) == 0 )
  {
    sub_1C2D490(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardBlank___);
    sub_1C2D490(&StringLiteral_4459/*"ClassBoardBlank"*/);
    byte_4C2AD41 = 1;
  }
  mainAssetData = this->fields.mainAssetData;
  v5 = System_Int32__ToString((int32_t)&v8, 0);
  v6 = System_String__Concat_63457864((System_String_o *)StringLiteral_4459/*"ClassBoardBlank"*/, v5, 0);
  return (ClassBoardBlank_o *)ClassBoardResourceCatalogAssetBundle__GetObject_object_(
                                this,
                                mainAssetData,
                                v6,
                                (const MethodInfo_30C2454 *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardBlank___);
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
  if ( (byte_4C2AD44 & 1) == 0 )
  {
    sub_1C2D490(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardBlank___);
    sub_1C2D490(&StringLiteral_7134/*"GrandClassBoardBlank"*/);
    byte_4C2AD44 = 1;
  }
  mainAssetData = this->fields.mainAssetData;
  v5 = System_Int32__ToString((int32_t)&v8, 0);
  v6 = System_String__Concat_63457864((System_String_o *)StringLiteral_7134/*"GrandClassBoardBlank"*/, v5, 0);
  return (ClassBoardBlank_o *)ClassBoardResourceCatalogAssetBundle__GetObject_object_(
                                this,
                                mainAssetData,
                                v6,
                                (const MethodInfo_30C2454 *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardBlank___);
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
  if ( (byte_4C2AD45 & 1) == 0 )
  {
    sub_1C2D490(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardLock___);
    sub_1C2D490(&StringLiteral_7136/*"GrandClassBoardLock"*/);
    byte_4C2AD45 = 1;
  }
  mainAssetData = this->fields.mainAssetData;
  v5 = System_Int32__ToString((int32_t)&v8, 0);
  v6 = System_String__Concat_63457864((System_String_o *)StringLiteral_7136/*"GrandClassBoardLock"*/, v5, 0);
  return (ClassBoardLock_o *)ClassBoardResourceCatalogAssetBundle__GetObject_object_(
                               this,
                               mainAssetData,
                               v6,
                               (const MethodInfo_30C2454 *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardLock___);
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
  if ( (byte_4C2AD43 & 1) == 0 )
  {
    sub_1C2D490(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardSquare___);
    sub_1C2D490(&StringLiteral_7137/*"GrandClassBoardSquare"*/);
    byte_4C2AD43 = 1;
  }
  mainAssetData = this->fields.mainAssetData;
  v5 = System_Int32__ToString((int32_t)&v8, 0);
  v6 = System_String__Concat_63457864((System_String_o *)StringLiteral_7137/*"GrandClassBoardSquare"*/, v5, 0);
  return (ClassBoardSquare_o *)ClassBoardResourceCatalogAssetBundle__GetObject_object_(
                                 this,
                                 mainAssetData,
                                 v6,
                                 (const MethodInfo_30C2454 *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardSquare___);
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
  if ( (byte_4C2AD42 & 1) == 0 )
  {
    sub_1C2D490(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardLock___);
    sub_1C2D490(&StringLiteral_4463/*"ClassBoardLock"*/);
    byte_4C2AD42 = 1;
  }
  mainAssetData = this->fields.mainAssetData;
  v5 = System_Int32__ToString((int32_t)&v8, 0);
  v6 = System_String__Concat_63457864((System_String_o *)StringLiteral_4463/*"ClassBoardLock"*/, v5, 0);
  return (ClassBoardLock_o *)ClassBoardResourceCatalogAssetBundle__GetObject_object_(
                               this,
                               mainAssetData,
                               v6,
                               (const MethodInfo_30C2454 *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardLock___);
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
  if ( (byte_4C2AD40 & 1) == 0 )
  {
    sub_1C2D490(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardSquare___);
    sub_1C2D490(&StringLiteral_4470/*"ClassBoardSquare"*/);
    byte_4C2AD40 = 1;
  }
  mainAssetData = this->fields.mainAssetData;
  v5 = System_Int32__ToString((int32_t)&v8, 0);
  v6 = System_String__Concat_63457864((System_String_o *)StringLiteral_4470/*"ClassBoardSquare"*/, v5, 0);
  return (ClassBoardSquare_o *)ClassBoardResourceCatalogAssetBundle__GetObject_object_(
                                 this,
                                 mainAssetData,
                                 v6,
                                 (const MethodInfo_30C2454 *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardSquare___);
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
    sub_1C2D6EC(assetStorageLoadWrapper, assetBundlePath);
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
  char *Object_object__51051712; // x0
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
  const MethodInfo *v28; // x3
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  struct ClassBoardResourceContents_o *Contents_k__BackingField; // x20
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  struct System_Action_o *loadEndCallback; // x8
  char *v45; // [xsp+8h] [xbp-C8h]
  char *v46; // [xsp+10h] [xbp-C0h]
  ClassBoardUIController_o *uiController; // [xsp+18h] [xbp-B8h]
  ClassBoardSquareOpenConfirmDialog_o *v48; // [xsp+20h] [xbp-B0h]
  ClassBoardDisableOpenDialog_o *v49; // [xsp+28h] [xbp-A8h]
  ClassBoardSquareDetailDialog_o *classBoardSquareDetailDialog; // [xsp+30h] [xbp-A0h]
  Il2CppObject *v51; // [xsp+38h] [xbp-98h]
  Il2CppObject *v52; // [xsp+40h] [xbp-90h]
  ClassBoardBlank_o *v53; // [xsp+48h] [xbp-88h]
  ClassBoardLine_o *v54; // [xsp+58h] [xbp-78h]
  ClassBoardSquare_o *v55; // [xsp+60h] [xbp-70h]

  if ( (byte_4C2AD3E & 1) == 0 )
  {
    sub_1C2D490(&Method_AssetData_GetObject_GameObject____77994080);
    sub_1C2D490(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardBackground___);
    sub_1C2D490(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardBlank___);
    sub_1C2D490(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardDisableOpenDialog___);
    sub_1C2D490(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardFigureController___);
    sub_1C2D490(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardFullReleaseEffectComponent___);
    sub_1C2D490(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardLine___);
    sub_1C2D490(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardLockOpenConfirmDialog___);
    sub_1C2D490(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardLockReleaseConditionDialog___);
    sub_1C2D490(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardLock___);
    sub_1C2D490(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardQuestOpenConfirmDialog___);
    sub_1C2D490(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardSquareDetailDialog___);
    sub_1C2D490(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardSquareOpenConfirmDialog___);
    sub_1C2D490(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardSquare___);
    sub_1C2D490(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardUIController___);
    sub_1C2D490(&StringLiteral_4458/*"ClassBoardBg"*/);
    sub_1C2D490(&StringLiteral_4465/*"ClassBoardLockReleaseConditionDialog"*/);
    sub_1C2D490(&StringLiteral_4462/*"ClassBoardLine"*/);
    sub_1C2D490(&StringLiteral_6884/*"FullReleaseEffectClassScore"*/);
    sub_1C2D490(&StringLiteral_4471/*"ClassBoardSquareDetailDialog"*/);
    sub_1C2D490(&StringLiteral_4463/*"ClassBoardLock"*/);
    sub_1C2D490(&StringLiteral_4469/*"ClassBoardSelectView"*/);
    sub_1C2D490(&StringLiteral_7136/*"GrandClassBoardLock"*/);
    sub_1C2D490(&StringLiteral_6840/*"ForwardIconAnimObject"*/);
    sub_1C2D490(&StringLiteral_6885/*"FullReleaseEffectGrandScore"*/);
    sub_1C2D490(&StringLiteral_7134/*"GrandClassBoardBlank"*/);
    sub_1C2D490(&StringLiteral_4459/*"ClassBoardBlank"*/);
    sub_1C2D490(&StringLiteral_4460/*"ClassBoardDisableOpenDialog"*/);
    sub_1C2D490(&StringLiteral_4464/*"ClassBoardLockOpenConfirmDialog"*/);
    sub_1C2D490(&StringLiteral_4470/*"ClassBoardSquare"*/);
    sub_1C2D490(&StringLiteral_4461/*"ClassBoardFigure"*/);
    sub_1C2D490(&StringLiteral_4472/*"ClassBoardSquareOpenConfirmDialog"*/);
    sub_1C2D490(&StringLiteral_7137/*"GrandClassBoardSquare"*/);
    sub_1C2D490(&StringLiteral_7135/*"GrandClassBoardLine"*/);
    sub_1C2D490(&StringLiteral_4473/*"ClassBoardUI"*/);
    sub_1C2D490(&StringLiteral_4466/*"ClassBoardQuestOpenConfirmDialog"*/);
    byte_4C2AD3E = 1;
  }
  Object_object = ClassBoardResourceCatalogAssetBundle__GetObject_object_(
                    this,
                    this->fields.mainAssetData,
                    (System_String_o *)StringLiteral_4470/*"ClassBoardSquare"*/,
                    (const MethodInfo_30C2454 *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardSquare___);
  v4 = ClassBoardResourceCatalogAssetBundle__GetObject_object_(
         this,
         this->fields.mainAssetData,
         (System_String_o *)StringLiteral_4462/*"ClassBoardLine"*/,
         (const MethodInfo_30C2454 *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardLine___);
  v5 = ClassBoardResourceCatalogAssetBundle__GetObject_object_(
         this,
         this->fields.mainAssetData,
         (System_String_o *)StringLiteral_4463/*"ClassBoardLock"*/,
         (const MethodInfo_30C2454 *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardLock___);
  v6 = ClassBoardResourceCatalogAssetBundle__GetObject_object_(
         this,
         this->fields.mainAssetData,
         (System_String_o *)StringLiteral_4459/*"ClassBoardBlank"*/,
         (const MethodInfo_30C2454 *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardBlank___);
  v7 = ClassBoardResourceCatalogAssetBundle__GetObject_object_(
         this,
         this->fields.mainAssetData,
         (System_String_o *)StringLiteral_7137/*"GrandClassBoardSquare"*/,
         (const MethodInfo_30C2454 *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardSquare___);
  v8 = ClassBoardResourceCatalogAssetBundle__GetObject_object_(
         this,
         this->fields.mainAssetData,
         (System_String_o *)StringLiteral_7135/*"GrandClassBoardLine"*/,
         (const MethodInfo_30C2454 *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardLine___);
  v9 = ClassBoardResourceCatalogAssetBundle__GetObject_object_(
         this,
         this->fields.mainAssetData,
         (System_String_o *)StringLiteral_7136/*"GrandClassBoardLock"*/,
         (const MethodInfo_30C2454 *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardLock___);
  v10 = ClassBoardResourceCatalogAssetBundle__GetObject_object_(
          this,
          this->fields.mainAssetData,
          (System_String_o *)StringLiteral_7134/*"GrandClassBoardBlank"*/,
          (const MethodInfo_30C2454 *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardBlank___);
  v11 = ClassBoardResourceCatalogAssetBundle__GetObject_object_(
          this,
          this->fields.mainAssetData,
          (System_String_o *)StringLiteral_4460/*"ClassBoardDisableOpenDialog"*/,
          (const MethodInfo_30C2454 *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardDisableOpenDialog___);
  v12 = ClassBoardResourceCatalogAssetBundle__GetObject_object_(
          this,
          this->fields.mainAssetData,
          (System_String_o *)StringLiteral_4472/*"ClassBoardSquareOpenConfirmDialog"*/,
          (const MethodInfo_30C2454 *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardSquareOpenConfirmDialog___);
  v52 = ClassBoardResourceCatalogAssetBundle__GetObject_object_(
          this,
          this->fields.mainAssetData,
          (System_String_o *)StringLiteral_4464/*"ClassBoardLockOpenConfirmDialog"*/,
          (const MethodInfo_30C2454 *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardLockOpenConfirmDialog___);
  v51 = ClassBoardResourceCatalogAssetBundle__GetObject_object_(
          this,
          this->fields.mainAssetData,
          (System_String_o *)StringLiteral_4465/*"ClassBoardLockReleaseConditionDialog"*/,
          (const MethodInfo_30C2454 *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardLockReleaseConditionDialog___);
  classBoardSquareDetailDialog = (ClassBoardSquareDetailDialog_o *)ClassBoardResourceCatalogAssetBundle__GetObject_object_(
                                                                     this,
                                                                     this->fields.mainAssetData,
                                                                     (System_String_o *)StringLiteral_4471/*"ClassBoardSquareDetailDialog"*/,
                                                                     (const MethodInfo_30C2454 *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardSquareDetailDialog___);
  uiController = (ClassBoardUIController_o *)ClassBoardResourceCatalogAssetBundle__GetObject_object_(
                                               this,
                                               this->fields.mainAssetData,
                                               (System_String_o *)StringLiteral_4473/*"ClassBoardUI"*/,
                                               (const MethodInfo_30C2454 *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardUIController___);
  Object_object__51051712 = (char *)ClassBoardResourceCatalogAssetBundle__GetObject_object_(
                                      this,
                                      this->fields.modelAssetData,
                                      (System_String_o *)StringLiteral_4458/*"ClassBoardBg"*/,
                                      (const MethodInfo_30C2454 *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardBackground___);
  boardSelectViewAssetData = this->fields.boardSelectViewAssetData;
  v46 = Object_object__51051712;
  if ( !boardSelectViewAssetData )
    goto LABEL_20;
  v48 = (ClassBoardSquareOpenConfirmDialog_o *)v12;
  v49 = (ClassBoardDisableOpenDialog_o *)v11;
  v53 = (ClassBoardBlank_o *)v10;
  v54 = (ClassBoardLine_o *)v8;
  v55 = (ClassBoardSquare_o *)v7;
  v16 = (ClassBoardSquare_o *)Object_object;
  Object_object__51051712 = (char *)AssetData__GetObject_object__51051712(
                                      boardSelectViewAssetData,
                                      (System_String_o *)StringLiteral_4469/*"ClassBoardSelectView"*/,
                                      (const MethodInfo_30AFCC0 *)Method_AssetData_GetObject_GameObject____77994080);
  v17 = this->fields.boardSelectViewAssetData;
  v45 = Object_object__51051712;
  if ( !v17 )
    goto LABEL_20;
  v18 = AssetData__GetObject_object__51051712(
          v17,
          (System_String_o *)StringLiteral_6840/*"ForwardIconAnimObject"*/,
          (const MethodInfo_30AFCC0 *)Method_AssetData_GetObject_GameObject____77994080);
  v19 = ClassBoardResourceCatalogAssetBundle__GetObject_object_(
          this,
          this->fields.mainAssetData,
          (System_String_o *)StringLiteral_4461/*"ClassBoardFigure"*/,
          (const MethodInfo_30C2454 *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardFigureController___);
  v20 = ClassBoardResourceCatalogAssetBundle__GetObject_object_(
          this,
          this->fields.mainAssetData,
          (System_String_o *)StringLiteral_4466/*"ClassBoardQuestOpenConfirmDialog"*/,
          (const MethodInfo_30C2454 *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardQuestOpenConfirmDialog___);
  v21 = ClassBoardResourceCatalogAssetBundle__GetObject_object_(
          this,
          this->fields.mainAssetData,
          (System_String_o *)StringLiteral_6884/*"FullReleaseEffectClassScore"*/,
          (const MethodInfo_30C2454 *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardFullReleaseEffectComponent___);
  Object_object__51051712 = (char *)ClassBoardResourceCatalogAssetBundle__GetObject_object_(
                                      this,
                                      this->fields.mainAssetData,
                                      (System_String_o *)StringLiteral_6885/*"FullReleaseEffectGrandScore"*/,
                                      (const MethodInfo_30C2454 *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardFullReleaseEffectComponent___);
  if ( !this->fields._Contents_k__BackingField )
    goto LABEL_20;
  v23 = (struct ClassBoardFullReleaseEffectComponent_o *)Object_object__51051712;
  ClassBoardResourceContents__SetContents(
    this->fields._Contents_k__BackingField,
    v16,
    (ClassBoardLine_o *)v4,
    (ClassBoardLock_o *)v5,
    (ClassBoardBlank_o *)v6,
    v22);
  Object_object__51051712 = (char *)this->fields._Contents_k__BackingField;
  if ( !Object_object__51051712 )
    goto LABEL_20;
  ClassBoardResourceContents__SetGrandContents(
    (ClassBoardResourceContents_o *)Object_object__51051712,
    v55,
    v54,
    (ClassBoardLock_o *)v9,
    v53,
    v24);
  Object_object__51051712 = (char *)this->fields._Contents_k__BackingField;
  if ( !Object_object__51051712 )
    goto LABEL_20;
  ClassBoardResourceContents__SetContentsDialog(
    (ClassBoardResourceContents_o *)Object_object__51051712,
    v49,
    v48,
    (ClassBoardLockOpenConfirmDialog_o *)v52,
    (ClassBoardLockReleaseConditionDialog_o *)v51,
    classBoardSquareDetailDialog,
    v25);
  Object_object__51051712 = (char *)this->fields._Contents_k__BackingField;
  if ( !Object_object__51051712 )
    goto LABEL_20;
  ClassBoardResourceContents__SetContentsUI(
    (ClassBoardResourceContents_o *)Object_object__51051712,
    uiController,
    this->fields.boardUiAtlasManagerUnit,
    this->fields.iconAtlasManagerUnit,
    this->fields.classUiAtlasManagerUnit,
    v26);
  Object_object__51051712 = (char *)this->fields._Contents_k__BackingField;
  if ( !Object_object__51051712 )
    goto LABEL_20;
  *((_QWORD *)Object_object__51051712 + 20) = v46;
  sub_1C2D434((CGThumbnailListItem_o *)(Object_object__51051712 + 160), (int32_t)v46, v27, v28);
  Object_object__51051712 = (char *)this->fields._Contents_k__BackingField;
  if ( !Object_object__51051712 )
    goto LABEL_20;
  *((_QWORD *)Object_object__51051712 + 22) = v45;
  sub_1C2D434((CGThumbnailListItem_o *)(Object_object__51051712 + 176), (int32_t)v45, v29, v30);
  Object_object__51051712 = (char *)this->fields._Contents_k__BackingField;
  if ( !Object_object__51051712 )
    goto LABEL_20;
  *((_QWORD *)Object_object__51051712 + 23) = v18;
  sub_1C2D434((CGThumbnailListItem_o *)(Object_object__51051712 + 184), (int32_t)v18, v31, v32);
  Object_object__51051712 = (char *)this->fields._Contents_k__BackingField;
  if ( !Object_object__51051712 )
    goto LABEL_20;
  *((_QWORD *)Object_object__51051712 + 16) = v19;
  sub_1C2D434((CGThumbnailListItem_o *)(Object_object__51051712 + 128), (int32_t)v19, v33, v34);
  Object_object__51051712 = (char *)this->fields._Contents_k__BackingField;
  if ( !Object_object__51051712 )
    goto LABEL_20;
  *((_QWORD *)Object_object__51051712 + 17) = v20;
  sub_1C2D434((CGThumbnailListItem_o *)(Object_object__51051712 + 136), (int32_t)v20, v35, v36);
  Contents_k__BackingField = this->fields._Contents_k__BackingField;
  if ( !Contents_k__BackingField )
    goto LABEL_20;
  Contents_k__BackingField->fields._FullReleaseEffectComponent_k__BackingField = (struct ClassBoardFullReleaseEffectComponent_o *)v21;
  sub_1C2D434(
    (CGThumbnailListItem_o *)&Contents_k__BackingField->fields._FullReleaseEffectComponent_k__BackingField,
    (int32_t)v21,
    v37,
    v38);
  Contents_k__BackingField->fields._GrandFullReleaseEffectComponent_k__BackingField = v23;
  sub_1C2D434(
    (CGThumbnailListItem_o *)&Contents_k__BackingField->fields._GrandFullReleaseEffectComponent_k__BackingField,
    (int32_t)v23,
    v40,
    v41);
  grandGraphAtlas = this->fields.grandGraphAtlas;
  if ( grandGraphAtlas )
  {
    Object_object__51051712 = (char *)this->fields._Contents_k__BackingField;
    if ( !Object_object__51051712 )
      goto LABEL_20;
    *((_QWORD *)Object_object__51051712 + 27) = grandGraphAtlas;
    sub_1C2D434((CGThumbnailListItem_o *)(Object_object__51051712 + 216), (int32_t)grandGraphAtlas, v42, v43);
  }
  loadEndCallback = this->fields.loadEndCallback;
  if ( !loadEndCallback )
LABEL_20:
    sub_1C2D6EC(Object_object__51051712, grandGraphAtlas);
  ((void (__fastcall *)(intptr_t, intptr_t))loadEndCallback->fields.invoke_impl)(
    loadEndCallback->fields.method_code,
    loadEndCallback->fields.method);
}


void ClassBoardResourceCatalogAssetBundle__LoadSystemAsset(
        ClassBoardResourceCatalogAssetBundle_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  AssetStorageLoadWrapper_o *assetStorageLoadWrapper; // x20
  AtlasManagerUnit_o *v7; // x21
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  AssetStorageLoadWrapper_o *v10; // x20
  AtlasManagerUnit_o *v11; // x21
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  AssetStorageLoadWrapper_o *v14; // x20
  AtlasManagerUnit_o *v15; // x21
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  AssetStorageLoadWrapper_o *v18; // x20
  AtlasManagerUnit_o *v19; // x21
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  __int64 v22; // x20
  System_Action_object__o *v23; // x21
  ChainableActionBase_o *v24; // x0
  __int64 v25; // x1
  __int64 v26; // x2
  const MethodInfo *v27; // x3
  System_Action_object__o *v28; // x21
  const MethodInfo *v29; // x3
  System_Action_object__o *v30; // x21
  const MethodInfo *v31; // x3
  System_Action_object__o *v32; // x21
  const MethodInfo *v33; // x3
  System_Action_object__o *v34; // x21
  const MethodInfo *v35; // x3
  System_Action_object__o *v36; // x21
  const MethodInfo *v37; // x3
  System_Action_object__o *v38; // x21
  const MethodInfo *v39; // x3
  ChainableActionParallel_o *v40; // x21
  __int64 v41; // x20
  System_Action_o *v42; // x22
  const MethodInfo *v43; // x3

  if ( (byte_4C2AD3D & 1) == 0 )
  {
    sub_1C2D490(&System_Action___TypeInfo);
    sub_1C2D490(&System_Action_Action____TypeInfo);
    sub_1C2D490(&System_Action_Action__TypeInfo);
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&AtlasManagerUnit_TypeInfo);
    sub_1C2D490(&ChainableActionParallel_TypeInfo);
    sub_1C2D490(&Method_ClassBoardResourceCatalogAssetBundle_LoadEnd__);
    sub_1C2D490(&Method_ClassBoardResourceCatalogAssetBundle__LoadSystemAsset_b__44_0__);
    sub_1C2D490(&Method_ClassBoardResourceCatalogAssetBundle__LoadSystemAsset_b__44_1__);
    sub_1C2D490(&Method_ClassBoardResourceCatalogAssetBundle__LoadSystemAsset_b__44_2__);
    sub_1C2D490(&Method_ClassBoardResourceCatalogAssetBundle__LoadSystemAsset_b__44_3__);
    sub_1C2D490(&Method_ClassBoardResourceCatalogAssetBundle__LoadSystemAsset_b__44_4__);
    sub_1C2D490(&Method_ClassBoardResourceCatalogAssetBundle__LoadSystemAsset_b__44_5__);
    sub_1C2D490(&Method_ClassBoardResourceCatalogAssetBundle__LoadSystemAsset_b__44_6__);
    sub_1C2D490(&StringLiteral_4457/*"ClassBoard/UI/DownloadClassBoardUIAtlas"*/);
    sub_1C2D490(&StringLiteral_7144/*"GrandGraphSystem/DownloadGrandGraphSystemAtlas"*/);
    sub_1C2D490(&StringLiteral_4456/*"ClassBoard/UI/DownloadClassBoardClassUIAtlas"*/);
    sub_1C2D490(&StringLiteral_4453/*"ClassBoard/Icon/DownloadClassBoardIconAtlas"*/);
    byte_4C2AD3D = 1;
  }
  this->fields.loadEndCallback = callback;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.loadEndCallback, (int32_t)callback, (int32_t)method, v3);
  assetStorageLoadWrapper = this->fields.assetStorageLoadWrapper;
  v7 = (AtlasManagerUnit_o *)sub_1C2D6DC(AtlasManagerUnit_TypeInfo);
  AtlasManagerUnit___ctor(v7, (System_String_o *)StringLiteral_4457/*"ClassBoard/UI/DownloadClassBoardUIAtlas"*/, assetStorageLoadWrapper, 0);
  this->fields.boardUiAtlasManagerUnit = v7;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.boardUiAtlasManagerUnit, (int32_t)v7, v8, v9);
  v10 = this->fields.assetStorageLoadWrapper;
  v11 = (AtlasManagerUnit_o *)sub_1C2D6DC(AtlasManagerUnit_TypeInfo);
  AtlasManagerUnit___ctor(v11, (System_String_o *)StringLiteral_4456/*"ClassBoard/UI/DownloadClassBoardClassUIAtlas"*/, v10, 0);
  this->fields.classUiAtlasManagerUnit = v11;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.classUiAtlasManagerUnit, (int32_t)v11, v12, v13);
  v14 = this->fields.assetStorageLoadWrapper;
  v15 = (AtlasManagerUnit_o *)sub_1C2D6DC(AtlasManagerUnit_TypeInfo);
  AtlasManagerUnit___ctor(v15, (System_String_o *)StringLiteral_4453/*"ClassBoard/Icon/DownloadClassBoardIconAtlas"*/, v14, 0);
  this->fields.iconAtlasManagerUnit = v15;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.iconAtlasManagerUnit, (int32_t)v15, v16, v17);
  v18 = this->fields.assetStorageLoadWrapper;
  v19 = (AtlasManagerUnit_o *)sub_1C2D6DC(AtlasManagerUnit_TypeInfo);
  AtlasManagerUnit___ctor(v19, (System_String_o *)StringLiteral_7144/*"GrandGraphSystem/DownloadGrandGraphSystemAtlas"*/, v18, 0);
  this->fields.grandGraphAtlas = v19;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.grandGraphAtlas, (int32_t)v19, v20, v21);
  v22 = sub_1C2D538(System_Action_Action____TypeInfo, 7);
  v23 = (System_Action_object__o *)sub_1C2D6DC(System_Action_Action__TypeInfo);
  System_Action_object____ctor(
    v23,
    (Il2CppObject *)this,
    Method_ClassBoardResourceCatalogAssetBundle__LoadSystemAsset_b__44_0__,
    0);
  if ( !v22 )
    goto LABEL_17;
  if ( !*(_DWORD *)(v22 + 24) )
    goto LABEL_16;
  *(_QWORD *)(v22 + 32) = v23;
  sub_1C2D434((CGThumbnailListItem_o *)(v22 + 32), (int32_t)v23, v26, v27);
  v28 = (System_Action_object__o *)sub_1C2D6DC(System_Action_Action__TypeInfo);
  System_Action_object____ctor(
    v28,
    (Il2CppObject *)this,
    Method_ClassBoardResourceCatalogAssetBundle__LoadSystemAsset_b__44_1__,
    0);
  if ( *(_DWORD *)(v22 + 24) <= 1u )
    goto LABEL_16;
  *(_QWORD *)(v22 + 40) = v28;
  sub_1C2D434((CGThumbnailListItem_o *)(v22 + 40), (int32_t)v28, v26, v29);
  v30 = (System_Action_object__o *)sub_1C2D6DC(System_Action_Action__TypeInfo);
  System_Action_object____ctor(
    v30,
    (Il2CppObject *)this,
    Method_ClassBoardResourceCatalogAssetBundle__LoadSystemAsset_b__44_2__,
    0);
  if ( *(_DWORD *)(v22 + 24) <= 2u )
    goto LABEL_16;
  *(_QWORD *)(v22 + 48) = v30;
  sub_1C2D434((CGThumbnailListItem_o *)(v22 + 48), (int32_t)v30, v26, v31);
  v32 = (System_Action_object__o *)sub_1C2D6DC(System_Action_Action__TypeInfo);
  System_Action_object____ctor(
    v32,
    (Il2CppObject *)this,
    Method_ClassBoardResourceCatalogAssetBundle__LoadSystemAsset_b__44_3__,
    0);
  if ( *(_DWORD *)(v22 + 24) <= 3u )
    goto LABEL_16;
  *(_QWORD *)(v22 + 56) = v32;
  sub_1C2D434((CGThumbnailListItem_o *)(v22 + 56), (int32_t)v32, v26, v33);
  v34 = (System_Action_object__o *)sub_1C2D6DC(System_Action_Action__TypeInfo);
  System_Action_object____ctor(
    v34,
    (Il2CppObject *)this,
    Method_ClassBoardResourceCatalogAssetBundle__LoadSystemAsset_b__44_4__,
    0);
  if ( *(_DWORD *)(v22 + 24) <= 4u )
    goto LABEL_16;
  *(_QWORD *)(v22 + 64) = v34;
  sub_1C2D434((CGThumbnailListItem_o *)(v22 + 64), (int32_t)v34, v26, v35);
  v36 = (System_Action_object__o *)sub_1C2D6DC(System_Action_Action__TypeInfo);
  System_Action_object____ctor(
    v36,
    (Il2CppObject *)this,
    Method_ClassBoardResourceCatalogAssetBundle__LoadSystemAsset_b__44_5__,
    0);
  if ( *(_DWORD *)(v22 + 24) <= 5u )
    goto LABEL_16;
  *(_QWORD *)(v22 + 72) = v36;
  sub_1C2D434((CGThumbnailListItem_o *)(v22 + 72), (int32_t)v36, v26, v37);
  v38 = (System_Action_object__o *)sub_1C2D6DC(System_Action_Action__TypeInfo);
  System_Action_object____ctor(
    v38,
    (Il2CppObject *)this,
    Method_ClassBoardResourceCatalogAssetBundle__LoadSystemAsset_b__44_6__,
    0);
  if ( *(_DWORD *)(v22 + 24) <= 6u )
    goto LABEL_16;
  *(_QWORD *)(v22 + 80) = v38;
  sub_1C2D434((CGThumbnailListItem_o *)(v22 + 80), (int32_t)v38, v26, v39);
  v40 = (ChainableActionParallel_o *)sub_1C2D6DC(ChainableActionParallel_TypeInfo);
  ChainableActionParallel___ctor_48939044(v40, (System_Action_Action__array *)v22, 0);
  v41 = sub_1C2D538(System_Action___TypeInfo, 1);
  v42 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v42, (Il2CppObject *)this, Method_ClassBoardResourceCatalogAssetBundle_LoadEnd__, 0);
  if ( !v41 )
    goto LABEL_17;
  if ( !*(_DWORD *)(v41 + 24) )
LABEL_16:
    sub_1C2D6F4(v24, v25, v26);
  *(_QWORD *)(v41 + 32) = v42;
  sub_1C2D434((CGThumbnailListItem_o *)(v41 + 32), (int32_t)v42, v26, v43);
  if ( !v40 || (v24 = ChainableActionBase__Final((ChainableActionBase_o *)v40, (System_Action_array *)v41, 0)) == 0 )
LABEL_17:
    sub_1C2D6EC(v24, v25);
  ChainableActionBase__Execute(v24, 0);
}


void ClassBoardResourceCatalogAssetBundle__ReleaseAll(
        ClassBoardResourceCatalogAssetBundle_o *this,
        const MethodInfo *method)
{
  AssetStorageLoadWrapper_o *assetStorageLoadWrapper; // x0

  assetStorageLoadWrapper = this->fields.assetStorageLoadWrapper;
  if ( !assetStorageLoadWrapper )
    sub_1C2D6EC(0, method);
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
  const MethodInfo *v9; // x3
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  AtlasManagerUnit_o *boardUiAtlasManagerUnit; // x0
  AssetStorageLoadWrapper_o *assetStorageLoadWrapper; // x22
  AtlasManagerUnit_o *v14; // x23
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  AtlasManagerUnit_o *v17; // x19
  System_Action_o *v18; // x21

  if ( (byte_4C2AD3F & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&AtlasManagerUnit_TypeInfo);
    sub_1C2D490(&Method_ClassBoardResourceCatalogAssetBundle___c__DisplayClass47_0__ReloadBoardUIAtlas_b__0__);
    sub_1C2D490(&ClassBoardResourceCatalogAssetBundle___c__DisplayClass47_0_TypeInfo);
    sub_1C2D490(&StringLiteral_4457/*"ClassBoard/UI/DownloadClassBoardUIAtlas"*/);
    byte_4C2AD3F = 1;
  }
  v5 = sub_1C2D6DC(ClassBoardResourceCatalogAssetBundle___c__DisplayClass47_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_8;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v5 + 16), (int32_t)this, v8, v9);
  *(_QWORD *)(v5 + 24) = callback;
  sub_1C2D434((CGThumbnailListItem_o *)(v5 + 24), (int32_t)callback, v10, v11);
  boardUiAtlasManagerUnit = this->fields.boardUiAtlasManagerUnit;
  if ( boardUiAtlasManagerUnit )
    AtlasManagerUnit__Release(boardUiAtlasManagerUnit, 0);
  assetStorageLoadWrapper = this->fields.assetStorageLoadWrapper;
  v14 = (AtlasManagerUnit_o *)sub_1C2D6DC(AtlasManagerUnit_TypeInfo);
  AtlasManagerUnit___ctor(v14, (System_String_o *)StringLiteral_4457/*"ClassBoard/UI/DownloadClassBoardUIAtlas"*/, assetStorageLoadWrapper, 0);
  this->fields.boardUiAtlasManagerUnit = v14;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.boardUiAtlasManagerUnit, (int32_t)v14, v15, v16);
  v17 = this->fields.boardUiAtlasManagerUnit;
  v18 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(
    v18,
    (Il2CppObject *)v5,
    Method_ClassBoardResourceCatalogAssetBundle___c__DisplayClass47_0__ReloadBoardUIAtlas_b__0__,
    0);
  if ( !v17 )
LABEL_8:
    sub_1C2D6EC(v6, v7);
  AtlasManagerUnit__Load(v17, v18, 1, 0);
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
    sub_1C2D6EC(0, sprite);
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
  const MethodInfo *v9; // x3
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  AssetLoader_LoadEndDataHandler_o *v12; // x20
  const MethodInfo *v13; // x3

  if ( (byte_4C2AD47 & 1) == 0 )
  {
    sub_1C2D490(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C2D490(&Method_ClassBoardResourceCatalogAssetBundle___c__DisplayClass44_0__LoadSystemAsset_b__7__);
    sub_1C2D490(&ClassBoardResourceCatalogAssetBundle___c__DisplayClass44_0_TypeInfo);
    sub_1C2D490(&StringLiteral_4454/*"ClassBoard/Main"*/);
    byte_4C2AD47 = 1;
  }
  v5 = sub_1C2D6DC(ClassBoardResourceCatalogAssetBundle___c__DisplayClass44_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_1C2D6EC(v6, v7);
  *(_QWORD *)(v5 + 24) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v5 + 24), (int32_t)this, v8, v9);
  *(_QWORD *)(v5 + 16) = f;
  sub_1C2D434((CGThumbnailListItem_o *)(v5 + 16), (int32_t)f, v10, v11);
  v12 = (AssetLoader_LoadEndDataHandler_o *)sub_1C2D6DC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v12,
    (Il2CppObject *)v5,
    Method_ClassBoardResourceCatalogAssetBundle___c__DisplayClass44_0__LoadSystemAsset_b__7__,
    0);
  ClassBoardResourceCatalogAssetBundle__LoadAssetStorage(this, (System_String_o *)StringLiteral_4454/*"ClassBoard/Main"*/, v12, v13);
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
  const MethodInfo *v9; // x3
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  AssetLoader_LoadEndDataHandler_o *v12; // x20
  const MethodInfo *v13; // x3

  if ( (byte_4C2AD48 & 1) == 0 )
  {
    sub_1C2D490(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C2D490(&Method_ClassBoardResourceCatalogAssetBundle___c__DisplayClass44_1__LoadSystemAsset_b__8__);
    sub_1C2D490(&ClassBoardResourceCatalogAssetBundle___c__DisplayClass44_1_TypeInfo);
    sub_1C2D490(&StringLiteral_4433/*"ClassBoard/Bg"*/);
    byte_4C2AD48 = 1;
  }
  v5 = sub_1C2D6DC(ClassBoardResourceCatalogAssetBundle___c__DisplayClass44_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_1C2D6EC(v6, v7);
  *(_QWORD *)(v5 + 24) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v5 + 24), (int32_t)this, v8, v9);
  *(_QWORD *)(v5 + 16) = f;
  sub_1C2D434((CGThumbnailListItem_o *)(v5 + 16), (int32_t)f, v10, v11);
  v12 = (AssetLoader_LoadEndDataHandler_o *)sub_1C2D6DC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v12,
    (Il2CppObject *)v5,
    Method_ClassBoardResourceCatalogAssetBundle___c__DisplayClass44_1__LoadSystemAsset_b__8__,
    0);
  ClassBoardResourceCatalogAssetBundle__LoadAssetStorage(this, (System_String_o *)StringLiteral_4433/*"ClassBoard/Bg"*/, v12, v13);
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
  const MethodInfo *v9; // x3
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  AssetLoader_LoadEndDataHandler_o *v12; // x20
  const MethodInfo *v13; // x3

  if ( (byte_4C2AD49 & 1) == 0 )
  {
    sub_1C2D490(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C2D490(&Method_ClassBoardResourceCatalogAssetBundle___c__DisplayClass44_2__LoadSystemAsset_b__9__);
    sub_1C2D490(&ClassBoardResourceCatalogAssetBundle___c__DisplayClass44_2_TypeInfo);
    sub_1C2D490(&StringLiteral_4455/*"ClassBoard/Select"*/);
    byte_4C2AD49 = 1;
  }
  v5 = sub_1C2D6DC(ClassBoardResourceCatalogAssetBundle___c__DisplayClass44_2_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_1C2D6EC(v6, v7);
  *(_QWORD *)(v5 + 24) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v5 + 24), (int32_t)this, v8, v9);
  *(_QWORD *)(v5 + 16) = f;
  sub_1C2D434((CGThumbnailListItem_o *)(v5 + 16), (int32_t)f, v10, v11);
  v12 = (AssetLoader_LoadEndDataHandler_o *)sub_1C2D6DC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v12,
    (Il2CppObject *)v5,
    Method_ClassBoardResourceCatalogAssetBundle___c__DisplayClass44_2__LoadSystemAsset_b__9__,
    0);
  ClassBoardResourceCatalogAssetBundle__LoadAssetStorage(this, (System_String_o *)StringLiteral_4455/*"ClassBoard/Select"*/, v12, v13);
}


void ClassBoardResourceCatalogAssetBundle___LoadSystemAsset_b__44_3(
        ClassBoardResourceCatalogAssetBundle_o *this,
        System_Action_o *f,
        const MethodInfo *method)
{
  AtlasManagerUnit_o *boardUiAtlasManagerUnit; // x0

  boardUiAtlasManagerUnit = this->fields.boardUiAtlasManagerUnit;
  if ( !boardUiAtlasManagerUnit )
    sub_1C2D6EC(0, f);
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
    sub_1C2D6EC(0, f);
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
    sub_1C2D6EC(0, f);
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
    sub_1C2D6EC(0, f);
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
  const MethodInfo *v3; // x3
  struct ClassBoardResourceCatalogAssetBundle_o *_4__this; // x0
  struct System_Action_o *f; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (_4__this->fields.mainAssetData = asset,
        sub_1C2D434((CGThumbnailListItem_o *)&_4__this->fields.mainAssetData, (int32_t)asset, (int32_t)method, v3),
        (f = this->fields.f) == 0) )
  {
    sub_1C2D6EC(_4__this, asset);
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
  const MethodInfo *v3; // x3
  struct ClassBoardResourceCatalogAssetBundle_o *_4__this; // x0
  struct System_Action_o *f; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (_4__this->fields.modelAssetData = asset,
        sub_1C2D434((CGThumbnailListItem_o *)&_4__this->fields.modelAssetData, (int32_t)asset, (int32_t)method, v3),
        (f = this->fields.f) == 0) )
  {
    sub_1C2D6EC(_4__this, asset);
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
  const MethodInfo *v3; // x3
  struct ClassBoardResourceCatalogAssetBundle_o *_4__this; // x0
  struct System_Action_o *f; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (_4__this->fields.boardSelectViewAssetData = asset,
        sub_1C2D434(
          (CGThumbnailListItem_o *)&_4__this->fields.boardSelectViewAssetData,
          (int32_t)asset,
          (int32_t)method,
          v3),
        (f = this->fields.f) == 0) )
  {
    sub_1C2D6EC(_4__this, asset);
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
  const MethodInfo *v3; // x3
  struct ClassBoardResourceCatalogAssetBundle_o *_4__this; // x8
  ClassBoardResourceCatalogAssetBundle___c__DisplayClass47_0_o *v5; // x19
  ClassBoardResourceCatalogAssetBundle___c__DisplayClass47_0_c *boardUiAtlasManagerUnit; // x1

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (v5 = this,
        (this = (ClassBoardResourceCatalogAssetBundle___c__DisplayClass47_0_o *)_4__this->fields._Contents_k__BackingField) == 0) )
  {
    sub_1C2D6EC(this, method);
  }
  boardUiAtlasManagerUnit = (ClassBoardResourceCatalogAssetBundle___c__DisplayClass47_0_c *)_4__this->fields.boardUiAtlasManagerUnit;
  this[6].klass = boardUiAtlasManagerUnit;
  sub_1C2D434((CGThumbnailListItem_o *)&this[6], (int32_t)boardUiAtlasManagerUnit, v2, v3);
  ActionExtensions__Call(v5->fields.callback, 0);
}