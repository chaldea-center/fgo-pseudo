void ClassBoardResourceCatalogAssetBundle___ctor(
        ClassBoardResourceCatalogAssetBundle_o *this,
        const MethodInfo *method)
{
  ClassBoardResourceContents_o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  AssetStorageLoadWrapper_o *v6; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4CB9EF6 & 1) == 0 )
  {
    sub_1C6BA08(&AssetStorageLoadWrapper_TypeInfo);
    sub_1C6BA08(&ClassBoardResourceContents_TypeInfo);
    byte_4CB9EF6 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  v3 = (ClassBoardResourceContents_o *)sub_1C6BC54(ClassBoardResourceContents_TypeInfo);
  ClassBoardResourceContents___ctor(v3, 0);
  this->fields._Contents_k__BackingField = v3;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields._Contents_k__BackingField, (int32_t)v3, v4, v5);
  v6 = (AssetStorageLoadWrapper_o *)sub_1C6BC54(AssetStorageLoadWrapper_TypeInfo);
  AssetStorageLoadWrapper___ctor(v6, 0);
  this->fields.assetStorageLoadWrapper = v6;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields, (int32_t)v6, v7, v8);
}


System_String_o *ClassBoardResourceCatalogAssetBundle__GetIconAtlasPath(
        ClassBoardResourceCatalogAssetBundle_o *this,
        const MethodInfo *method)
{
  if ( (byte_4CB9F00 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_4450/*"ClassBoard/Icon/DownloadClassBoardIconAtlas"*/);
    byte_4CB9F00 = 1;
  }
  return (System_String_o *)StringLiteral_4450/*"ClassBoard/Icon/DownloadClassBoardIconAtlas"*/;
}


// local variable allocation has failed, the output may be wrong!
Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o ClassBoardResourceCatalogAssetBundle__GetObject___Il2CppFullySharedGenericType_(
        ClassBoardResourceCatalogAssetBundle_o *this,
        AssetData_o *assetData,
        System_String_o *name,
        const MethodInfo_312EE28 *method)
{
  __int64 v4; // x4
  __int64 v5; // x20
  __int64 v8; // x8
  size_t v10; // x21
  void *v11; // x0
  __int64 v12; // x1
  Il2CppObject *Object_object__51495936; // x23
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
    sub_1C6BA08(&Method_AssetData_GetObject_GameObject____78568200);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    v8 = *(_QWORD *)(v5 + 56);
    if ( !v8 )
    {
      sub_1C41AF8();
      v8 = *(_QWORD *)(v5 + 56);
    }
  }
  v10 = *(unsigned int *)(*(_QWORD *)v8 + 252LL);
  v11 = memset((char *)v18 - ((v10 + 15) & 0x1FFFFFFF0LL), 0, v10);
  if ( !assetData )
    goto LABEL_12;
  Object_object__51495936 = AssetData__GetObject_object__51495936(
                              assetData,
                              name,
                              (const MethodInfo_311C400 *)Method_AssetData_GetObject_GameObject____78568200);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v11 = (void *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Object_object__51495936, 0, 0);
  if ( ((unsigned __int8)v11 & 1) == 0 )
  {
    if ( Object_object__51495936 )
    {
      v14 = *(__int64 **)(*(_QWORD *)(v5 + 56) + 8LL);
      v15 = *v14;
      v18[0] = (char *)v18 - ((v10 + 15) & 0x1FFFFFFF0LL);
      ((void (__fastcall *)(__int64, __int64 *, Il2CppObject *, _QWORD *, _QWORD))v14[2])(
        v15,
        v14,
        Object_object__51495936,
        v18,
        v18[0]);
      goto LABEL_11;
    }
LABEL_12:
    sub_1C6BC60(v11, v12);
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
        const MethodInfo_312ED64 *method)
{
  Il2CppObject *Object_object__51495936; // x20

  if ( !method->rgctx_data )
  {
    sub_1C6BA08(&Method_AssetData_GetObject_GameObject____78568200);
    this = (ClassBoardResourceCatalogAssetBundle_o *)sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    if ( !method->rgctx_data )
      this = (ClassBoardResourceCatalogAssetBundle_o *)sub_1C41AF8();
  }
  if ( !assetData )
    goto LABEL_11;
  Object_object__51495936 = AssetData__GetObject_object__51495936(
                              assetData,
                              name,
                              (const MethodInfo_311C400 *)Method_AssetData_GetObject_GameObject____78568200);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (ClassBoardResourceCatalogAssetBundle_o *)UnityEngine_Object__op_Equality(
                                                     (UnityEngine_Object_o *)Object_object__51495936,
                                                     0,
                                                     0);
  if ( ((unsigned __int8)this & 1) != 0 )
    return 0;
  if ( !Object_object__51495936 )
LABEL_11:
    sub_1C6BC60(this, assetData);
  return UnityEngine_GameObject__GetComponent_object_(
           (UnityEngine_GameObject_o *)Object_object__51495936,
           (const MethodInfo_319312C *)method->rgctx_data->_1_UnityEngine_GameObject_GetComponent_T_);
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
  if ( (byte_4CB9EFB & 1) == 0 )
  {
    sub_1C6BA08(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardBlank___);
    sub_1C6BA08(&StringLiteral_4456/*"ClassBoardBlank"*/);
    byte_4CB9EFB = 1;
  }
  mainAssetData = this->fields.mainAssetData;
  v5 = System_Int32__ToString((int32_t)&v8, 0);
  v6 = System_String__Concat_63966792((System_String_o *)StringLiteral_4456/*"ClassBoardBlank"*/, v5, 0);
  return (ClassBoardBlank_o *)ClassBoardResourceCatalogAssetBundle__GetObject_object_(
                                this,
                                mainAssetData,
                                v6,
                                (const MethodInfo_312ED64 *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardBlank___);
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
  if ( (byte_4CB9EFE & 1) == 0 )
  {
    sub_1C6BA08(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardBlank___);
    sub_1C6BA08(&StringLiteral_7133/*"GrandClassBoardBlank"*/);
    byte_4CB9EFE = 1;
  }
  mainAssetData = this->fields.mainAssetData;
  v5 = System_Int32__ToString((int32_t)&v8, 0);
  v6 = System_String__Concat_63966792((System_String_o *)StringLiteral_7133/*"GrandClassBoardBlank"*/, v5, 0);
  return (ClassBoardBlank_o *)ClassBoardResourceCatalogAssetBundle__GetObject_object_(
                                this,
                                mainAssetData,
                                v6,
                                (const MethodInfo_312ED64 *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardBlank___);
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
  if ( (byte_4CB9EFF & 1) == 0 )
  {
    sub_1C6BA08(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardLock___);
    sub_1C6BA08(&StringLiteral_7135/*"GrandClassBoardLock"*/);
    byte_4CB9EFF = 1;
  }
  mainAssetData = this->fields.mainAssetData;
  v5 = System_Int32__ToString((int32_t)&v8, 0);
  v6 = System_String__Concat_63966792((System_String_o *)StringLiteral_7135/*"GrandClassBoardLock"*/, v5, 0);
  return (ClassBoardLock_o *)ClassBoardResourceCatalogAssetBundle__GetObject_object_(
                               this,
                               mainAssetData,
                               v6,
                               (const MethodInfo_312ED64 *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardLock___);
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
  if ( (byte_4CB9EFD & 1) == 0 )
  {
    sub_1C6BA08(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardSquare___);
    sub_1C6BA08(&StringLiteral_7136/*"GrandClassBoardSquare"*/);
    byte_4CB9EFD = 1;
  }
  mainAssetData = this->fields.mainAssetData;
  v5 = System_Int32__ToString((int32_t)&v8, 0);
  v6 = System_String__Concat_63966792((System_String_o *)StringLiteral_7136/*"GrandClassBoardSquare"*/, v5, 0);
  return (ClassBoardSquare_o *)ClassBoardResourceCatalogAssetBundle__GetObject_object_(
                                 this,
                                 mainAssetData,
                                 v6,
                                 (const MethodInfo_312ED64 *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardSquare___);
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
  if ( (byte_4CB9EFC & 1) == 0 )
  {
    sub_1C6BA08(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardLock___);
    sub_1C6BA08(&StringLiteral_4460/*"ClassBoardLock"*/);
    byte_4CB9EFC = 1;
  }
  mainAssetData = this->fields.mainAssetData;
  v5 = System_Int32__ToString((int32_t)&v8, 0);
  v6 = System_String__Concat_63966792((System_String_o *)StringLiteral_4460/*"ClassBoardLock"*/, v5, 0);
  return (ClassBoardLock_o *)ClassBoardResourceCatalogAssetBundle__GetObject_object_(
                               this,
                               mainAssetData,
                               v6,
                               (const MethodInfo_312ED64 *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardLock___);
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
  if ( (byte_4CB9EFA & 1) == 0 )
  {
    sub_1C6BA08(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardSquare___);
    sub_1C6BA08(&StringLiteral_4468/*"ClassBoardSquare"*/);
    byte_4CB9EFA = 1;
  }
  mainAssetData = this->fields.mainAssetData;
  v5 = System_Int32__ToString((int32_t)&v8, 0);
  v6 = System_String__Concat_63966792((System_String_o *)StringLiteral_4468/*"ClassBoardSquare"*/, v5, 0);
  return (ClassBoardSquare_o *)ClassBoardResourceCatalogAssetBundle__GetObject_object_(
                                 this,
                                 mainAssetData,
                                 v6,
                                 (const MethodInfo_312ED64 *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardSquare___);
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
    sub_1C6BC60(assetStorageLoadWrapper, assetBundlePath);
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
  Il2CppObject *v6; // x29
  Il2CppObject *v7; // x20
  Il2CppObject *v8; // x26
  Il2CppObject *v9; // x22
  Il2CppObject *v10; // x28
  Il2CppObject *v11; // x27
  ClassBoardResourceContents_o *Object_object__51495936; // x0
  AtlasManagerUnit_o *grandGraphAtlas; // x1
  AssetData_o *boardSelectViewAssetData; // x8
  ClassBoardLine_o *v15; // x27
  ClassBoardSquare_o *v16; // x24
  AssetData_o *v17; // x8
  Il2CppObject *v18; // x25
  Il2CppObject *v19; // x28
  Il2CppObject *v20; // x26
  Il2CppObject *v21; // x21
  ClassBoardFullReleaseEffectComponent_o *v22; // x20
  struct System_Action_o *loadEndCallback; // x8
  UnityEngine_GameObject_o *boardSelectViewPrefab; // [xsp+0h] [xbp-C0h]
  ClassBoardBackground_o *bgModel; // [xsp+8h] [xbp-B8h]
  ClassBoardUIController_o *uiController; // [xsp+10h] [xbp-B0h]
  ClassBoardDisableOpenDialog_o *v27; // [xsp+18h] [xbp-A8h]
  Il2CppObject *v28; // [xsp+20h] [xbp-A0h]
  ClassBoardLockReleaseConditionDialog_o *classBoardLockReleaseConditionDialog; // [xsp+28h] [xbp-98h]
  Il2CppObject *v30; // [xsp+30h] [xbp-90h]
  Il2CppObject *v31; // [xsp+38h] [xbp-88h]
  ClassBoardBlank_o *v32; // [xsp+40h] [xbp-80h]
  ClassBoardLine_o *v33; // [xsp+50h] [xbp-70h]
  ClassBoardSquare_o *v34; // [xsp+58h] [xbp-68h]

  if ( (byte_4CB9EF8 & 1) == 0 )
  {
    sub_1C6BA08(&Method_AssetData_GetObject_GameObject____78568200);
    sub_1C6BA08(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardBackground___);
    sub_1C6BA08(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardBlank___);
    sub_1C6BA08(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardDisableOpenDialog___);
    sub_1C6BA08(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardFigureController___);
    sub_1C6BA08(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardFullReleaseEffectComponent___);
    sub_1C6BA08(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardLine___);
    sub_1C6BA08(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardLockOpenConfirmDialog___);
    sub_1C6BA08(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardLockReleaseConditionDialog___);
    sub_1C6BA08(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardLock___);
    sub_1C6BA08(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardQuestOpenConfirmDialog___);
    sub_1C6BA08(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardSquareDetailDialog___);
    sub_1C6BA08(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardSquareOpenConfirmDialog___);
    sub_1C6BA08(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardSquare___);
    sub_1C6BA08(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardUIController___);
    sub_1C6BA08(&StringLiteral_4455/*"ClassBoardBg"*/);
    sub_1C6BA08(&StringLiteral_4462/*"ClassBoardLockReleaseConditionDialog"*/);
    sub_1C6BA08(&StringLiteral_4459/*"ClassBoardLine"*/);
    sub_1C6BA08(&StringLiteral_6883/*"FullReleaseEffectClassScore"*/);
    sub_1C6BA08(&StringLiteral_4469/*"ClassBoardSquareDetailDialog"*/);
    sub_1C6BA08(&StringLiteral_4460/*"ClassBoardLock"*/);
    sub_1C6BA08(&StringLiteral_4467/*"ClassBoardSelectView"*/);
    sub_1C6BA08(&StringLiteral_7135/*"GrandClassBoardLock"*/);
    sub_1C6BA08(&StringLiteral_6839/*"ForwardIconAnimObject"*/);
    sub_1C6BA08(&StringLiteral_6884/*"FullReleaseEffectGrandScore"*/);
    sub_1C6BA08(&StringLiteral_7133/*"GrandClassBoardBlank"*/);
    sub_1C6BA08(&StringLiteral_4456/*"ClassBoardBlank"*/);
    sub_1C6BA08(&StringLiteral_4457/*"ClassBoardDisableOpenDialog"*/);
    sub_1C6BA08(&StringLiteral_4461/*"ClassBoardLockOpenConfirmDialog"*/);
    sub_1C6BA08(&StringLiteral_4468/*"ClassBoardSquare"*/);
    sub_1C6BA08(&StringLiteral_4458/*"ClassBoardFigure"*/);
    sub_1C6BA08(&StringLiteral_4470/*"ClassBoardSquareOpenConfirmDialog"*/);
    sub_1C6BA08(&StringLiteral_7136/*"GrandClassBoardSquare"*/);
    sub_1C6BA08(&StringLiteral_7134/*"GrandClassBoardLine"*/);
    sub_1C6BA08(&StringLiteral_4471/*"ClassBoardUI"*/);
    sub_1C6BA08(&StringLiteral_4463/*"ClassBoardQuestOpenConfirmDialog"*/);
    byte_4CB9EF8 = 1;
  }
  Object_object = ClassBoardResourceCatalogAssetBundle__GetObject_object_(
                    this,
                    this->fields.mainAssetData,
                    (System_String_o *)StringLiteral_4468/*"ClassBoardSquare"*/,
                    (const MethodInfo_312ED64 *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardSquare___);
  v4 = ClassBoardResourceCatalogAssetBundle__GetObject_object_(
         this,
         this->fields.mainAssetData,
         (System_String_o *)StringLiteral_4459/*"ClassBoardLine"*/,
         (const MethodInfo_312ED64 *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardLine___);
  v5 = ClassBoardResourceCatalogAssetBundle__GetObject_object_(
         this,
         this->fields.mainAssetData,
         (System_String_o *)StringLiteral_4460/*"ClassBoardLock"*/,
         (const MethodInfo_312ED64 *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardLock___);
  v6 = ClassBoardResourceCatalogAssetBundle__GetObject_object_(
         this,
         this->fields.mainAssetData,
         (System_String_o *)StringLiteral_4456/*"ClassBoardBlank"*/,
         (const MethodInfo_312ED64 *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardBlank___);
  v7 = ClassBoardResourceCatalogAssetBundle__GetObject_object_(
         this,
         this->fields.mainAssetData,
         (System_String_o *)StringLiteral_7136/*"GrandClassBoardSquare"*/,
         (const MethodInfo_312ED64 *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardSquare___);
  v8 = ClassBoardResourceCatalogAssetBundle__GetObject_object_(
         this,
         this->fields.mainAssetData,
         (System_String_o *)StringLiteral_7134/*"GrandClassBoardLine"*/,
         (const MethodInfo_312ED64 *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardLine___);
  v9 = ClassBoardResourceCatalogAssetBundle__GetObject_object_(
         this,
         this->fields.mainAssetData,
         (System_String_o *)StringLiteral_7135/*"GrandClassBoardLock"*/,
         (const MethodInfo_312ED64 *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardLock___);
  v10 = ClassBoardResourceCatalogAssetBundle__GetObject_object_(
          this,
          this->fields.mainAssetData,
          (System_String_o *)StringLiteral_7133/*"GrandClassBoardBlank"*/,
          (const MethodInfo_312ED64 *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardBlank___);
  v11 = ClassBoardResourceCatalogAssetBundle__GetObject_object_(
          this,
          this->fields.mainAssetData,
          (System_String_o *)StringLiteral_4457/*"ClassBoardDisableOpenDialog"*/,
          (const MethodInfo_312ED64 *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardDisableOpenDialog___);
  v31 = ClassBoardResourceCatalogAssetBundle__GetObject_object_(
          this,
          this->fields.mainAssetData,
          (System_String_o *)StringLiteral_4470/*"ClassBoardSquareOpenConfirmDialog"*/,
          (const MethodInfo_312ED64 *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardSquareOpenConfirmDialog___);
  v30 = ClassBoardResourceCatalogAssetBundle__GetObject_object_(
          this,
          this->fields.mainAssetData,
          (System_String_o *)StringLiteral_4461/*"ClassBoardLockOpenConfirmDialog"*/,
          (const MethodInfo_312ED64 *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardLockOpenConfirmDialog___);
  classBoardLockReleaseConditionDialog = (ClassBoardLockReleaseConditionDialog_o *)ClassBoardResourceCatalogAssetBundle__GetObject_object_(
                                                                                     this,
                                                                                     this->fields.mainAssetData,
                                                                                     (System_String_o *)StringLiteral_4462/*"ClassBoardLockReleaseConditionDialog"*/,
                                                                                     (const MethodInfo_312ED64 *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardLockReleaseConditionDialog___);
  v28 = ClassBoardResourceCatalogAssetBundle__GetObject_object_(
          this,
          this->fields.mainAssetData,
          (System_String_o *)StringLiteral_4469/*"ClassBoardSquareDetailDialog"*/,
          (const MethodInfo_312ED64 *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardSquareDetailDialog___);
  uiController = (ClassBoardUIController_o *)ClassBoardResourceCatalogAssetBundle__GetObject_object_(
                                               this,
                                               this->fields.mainAssetData,
                                               (System_String_o *)StringLiteral_4471/*"ClassBoardUI"*/,
                                               (const MethodInfo_312ED64 *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardUIController___);
  Object_object__51495936 = (ClassBoardResourceContents_o *)ClassBoardResourceCatalogAssetBundle__GetObject_object_(
                                                              this,
                                                              this->fields.modelAssetData,
                                                              (System_String_o *)StringLiteral_4455/*"ClassBoardBg"*/,
                                                              (const MethodInfo_312ED64 *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardBackground___);
  boardSelectViewAssetData = this->fields.boardSelectViewAssetData;
  bgModel = (ClassBoardBackground_o *)Object_object__51495936;
  if ( !boardSelectViewAssetData )
    goto LABEL_20;
  v32 = (ClassBoardBlank_o *)v10;
  v27 = (ClassBoardDisableOpenDialog_o *)v11;
  v33 = (ClassBoardLine_o *)v8;
  v34 = (ClassBoardSquare_o *)v7;
  v15 = (ClassBoardLine_o *)v4;
  v16 = (ClassBoardSquare_o *)Object_object;
  Object_object__51495936 = (ClassBoardResourceContents_o *)AssetData__GetObject_object__51495936(
                                                              boardSelectViewAssetData,
                                                              (System_String_o *)StringLiteral_4467/*"ClassBoardSelectView"*/,
                                                              (const MethodInfo_311C400 *)Method_AssetData_GetObject_GameObject____78568200);
  v17 = this->fields.boardSelectViewAssetData;
  boardSelectViewPrefab = (UnityEngine_GameObject_o *)Object_object__51495936;
  if ( !v17 )
    goto LABEL_20;
  v18 = AssetData__GetObject_object__51495936(
          v17,
          (System_String_o *)StringLiteral_6839/*"ForwardIconAnimObject"*/,
          (const MethodInfo_311C400 *)Method_AssetData_GetObject_GameObject____78568200);
  v19 = ClassBoardResourceCatalogAssetBundle__GetObject_object_(
          this,
          this->fields.mainAssetData,
          (System_String_o *)StringLiteral_4458/*"ClassBoardFigure"*/,
          (const MethodInfo_312ED64 *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardFigureController___);
  v20 = ClassBoardResourceCatalogAssetBundle__GetObject_object_(
          this,
          this->fields.mainAssetData,
          (System_String_o *)StringLiteral_4463/*"ClassBoardQuestOpenConfirmDialog"*/,
          (const MethodInfo_312ED64 *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardQuestOpenConfirmDialog___);
  v21 = ClassBoardResourceCatalogAssetBundle__GetObject_object_(
          this,
          this->fields.mainAssetData,
          (System_String_o *)StringLiteral_6883/*"FullReleaseEffectClassScore"*/,
          (const MethodInfo_312ED64 *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardFullReleaseEffectComponent___);
  Object_object__51495936 = (ClassBoardResourceContents_o *)ClassBoardResourceCatalogAssetBundle__GetObject_object_(
                                                              this,
                                                              this->fields.mainAssetData,
                                                              (System_String_o *)StringLiteral_6884/*"FullReleaseEffectGrandScore"*/,
                                                              (const MethodInfo_312ED64 *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardFullReleaseEffectComponent___);
  if ( !this->fields._Contents_k__BackingField )
    goto LABEL_20;
  v22 = (ClassBoardFullReleaseEffectComponent_o *)Object_object__51495936;
  ClassBoardResourceContents__SetContents(
    this->fields._Contents_k__BackingField,
    v16,
    v15,
    (ClassBoardLock_o *)v5,
    (ClassBoardBlank_o *)v6,
    0);
  Object_object__51495936 = this->fields._Contents_k__BackingField;
  if ( !Object_object__51495936 )
    goto LABEL_20;
  ClassBoardResourceContents__SetGrandContents(Object_object__51495936, v34, v33, (ClassBoardLock_o *)v9, v32, 0);
  Object_object__51495936 = this->fields._Contents_k__BackingField;
  if ( !Object_object__51495936 )
    goto LABEL_20;
  ClassBoardResourceContents__SetContentsDialog(
    Object_object__51495936,
    v27,
    (ClassBoardSquareOpenConfirmDialog_o *)v31,
    (ClassBoardLockOpenConfirmDialog_o *)v30,
    classBoardLockReleaseConditionDialog,
    (ClassBoardSquareDetailDialog_o *)v28,
    0);
  Object_object__51495936 = this->fields._Contents_k__BackingField;
  if ( !Object_object__51495936 )
    goto LABEL_20;
  ClassBoardResourceContents__SetContentsUI(
    Object_object__51495936,
    uiController,
    this->fields.boardUiAtlasManagerUnit,
    this->fields.iconAtlasManagerUnit,
    this->fields.classUiAtlasManagerUnit,
    0);
  Object_object__51495936 = this->fields._Contents_k__BackingField;
  if ( !Object_object__51495936 )
    goto LABEL_20;
  ClassBoardResourceContents__SetContentsBgModel(Object_object__51495936, bgModel, 0);
  Object_object__51495936 = this->fields._Contents_k__BackingField;
  if ( !Object_object__51495936 )
    goto LABEL_20;
  ClassBoardResourceContents__SetContentsBoardSelectView(Object_object__51495936, boardSelectViewPrefab, 0);
  Object_object__51495936 = this->fields._Contents_k__BackingField;
  if ( !Object_object__51495936 )
    goto LABEL_20;
  ClassBoardResourceContents__SetContentsForwardIconAnimObject(
    Object_object__51495936,
    (UnityEngine_GameObject_o *)v18,
    0);
  Object_object__51495936 = this->fields._Contents_k__BackingField;
  if ( !Object_object__51495936 )
    goto LABEL_20;
  ClassBoardResourceContents__SetContentsFigure(Object_object__51495936, (ClassBoardFigureController_o *)v19, 0);
  Object_object__51495936 = this->fields._Contents_k__BackingField;
  if ( !Object_object__51495936 )
    goto LABEL_20;
  ClassBoardResourceContents__SetContentsGrandBoardDialog(
    Object_object__51495936,
    (ClassBoardQuestOpenConfirmDialog_o *)v20,
    0);
  Object_object__51495936 = this->fields._Contents_k__BackingField;
  if ( !Object_object__51495936 )
    goto LABEL_20;
  ClassBoardResourceContents__SetContentsFullReleaseEffect(
    Object_object__51495936,
    (ClassBoardFullReleaseEffectComponent_o *)v21,
    v22,
    0);
  grandGraphAtlas = this->fields.grandGraphAtlas;
  if ( grandGraphAtlas )
  {
    Object_object__51495936 = this->fields._Contents_k__BackingField;
    if ( !Object_object__51495936 )
      goto LABEL_20;
    ClassBoardResourceContents__SetContentsGrandGraph(Object_object__51495936, grandGraphAtlas, 0);
  }
  loadEndCallback = this->fields.loadEndCallback;
  if ( !loadEndCallback )
LABEL_20:
    sub_1C6BC60(Object_object__51495936, grandGraphAtlas);
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
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  System_Action_object__o *v28; // x21
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  System_Action_object__o *v31; // x21
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  System_Action_object__o *v34; // x21
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  System_Action_object__o *v37; // x21
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  System_Action_object__o *v40; // x21
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  System_Action_object__o *v43; // x21
  int32_t v44; // w2
  const MethodInfo *v45; // x3
  ChainableActionParallel_o *v46; // x21
  __int64 v47; // x20
  System_Action_o *v48; // x22
  int32_t v49; // w2
  const MethodInfo *v50; // x3

  if ( (byte_4CB9EF7 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action___TypeInfo);
    sub_1C6BA08(&System_Action_Action____TypeInfo);
    sub_1C6BA08(&System_Action_Action__TypeInfo);
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&AtlasManagerUnit_TypeInfo);
    sub_1C6BA08(&ChainableActionParallel_TypeInfo);
    sub_1C6BA08(&Method_ClassBoardResourceCatalogAssetBundle_LoadEnd__);
    sub_1C6BA08(&Method_ClassBoardResourceCatalogAssetBundle__LoadSystemAsset_b__44_0__);
    sub_1C6BA08(&Method_ClassBoardResourceCatalogAssetBundle__LoadSystemAsset_b__44_1__);
    sub_1C6BA08(&Method_ClassBoardResourceCatalogAssetBundle__LoadSystemAsset_b__44_2__);
    sub_1C6BA08(&Method_ClassBoardResourceCatalogAssetBundle__LoadSystemAsset_b__44_3__);
    sub_1C6BA08(&Method_ClassBoardResourceCatalogAssetBundle__LoadSystemAsset_b__44_4__);
    sub_1C6BA08(&Method_ClassBoardResourceCatalogAssetBundle__LoadSystemAsset_b__44_5__);
    sub_1C6BA08(&Method_ClassBoardResourceCatalogAssetBundle__LoadSystemAsset_b__44_6__);
    sub_1C6BA08(&StringLiteral_4454/*"ClassBoard/UI/DownloadClassBoardUIAtlas"*/);
    sub_1C6BA08(&StringLiteral_7143/*"GrandGraphSystem/DownloadGrandGraphSystemAtlas"*/);
    sub_1C6BA08(&StringLiteral_4453/*"ClassBoard/UI/DownloadClassBoardClassUIAtlas"*/);
    sub_1C6BA08(&StringLiteral_4450/*"ClassBoard/Icon/DownloadClassBoardIconAtlas"*/);
    byte_4CB9EF7 = 1;
  }
  this->fields.loadEndCallback = callback;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.loadEndCallback, (int32_t)callback, (int32_t)method, v3);
  assetStorageLoadWrapper = this->fields.assetStorageLoadWrapper;
  v7 = (AtlasManagerUnit_o *)sub_1C6BC54(AtlasManagerUnit_TypeInfo);
  AtlasManagerUnit___ctor(v7, (System_String_o *)StringLiteral_4454/*"ClassBoard/UI/DownloadClassBoardUIAtlas"*/, assetStorageLoadWrapper, 0);
  this->fields.boardUiAtlasManagerUnit = v7;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.boardUiAtlasManagerUnit, (int32_t)v7, v8, v9);
  v10 = this->fields.assetStorageLoadWrapper;
  v11 = (AtlasManagerUnit_o *)sub_1C6BC54(AtlasManagerUnit_TypeInfo);
  AtlasManagerUnit___ctor(v11, (System_String_o *)StringLiteral_4453/*"ClassBoard/UI/DownloadClassBoardClassUIAtlas"*/, v10, 0);
  this->fields.classUiAtlasManagerUnit = v11;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.classUiAtlasManagerUnit, (int32_t)v11, v12, v13);
  v14 = this->fields.assetStorageLoadWrapper;
  v15 = (AtlasManagerUnit_o *)sub_1C6BC54(AtlasManagerUnit_TypeInfo);
  AtlasManagerUnit___ctor(v15, (System_String_o *)StringLiteral_4450/*"ClassBoard/Icon/DownloadClassBoardIconAtlas"*/, v14, 0);
  this->fields.iconAtlasManagerUnit = v15;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.iconAtlasManagerUnit, (int32_t)v15, v16, v17);
  v18 = this->fields.assetStorageLoadWrapper;
  v19 = (AtlasManagerUnit_o *)sub_1C6BC54(AtlasManagerUnit_TypeInfo);
  AtlasManagerUnit___ctor(v19, (System_String_o *)StringLiteral_7143/*"GrandGraphSystem/DownloadGrandGraphSystemAtlas"*/, v18, 0);
  this->fields.grandGraphAtlas = v19;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.grandGraphAtlas, (int32_t)v19, v20, v21);
  v22 = sub_1C6BAB0(System_Action_Action____TypeInfo, 7);
  v23 = (System_Action_object__o *)sub_1C6BC54(System_Action_Action__TypeInfo);
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
  sub_1C6B9AC((CGThumbnailListItem_o *)(v22 + 32), (int32_t)v23, v26, v27);
  v28 = (System_Action_object__o *)sub_1C6BC54(System_Action_Action__TypeInfo);
  System_Action_object____ctor(
    v28,
    (Il2CppObject *)this,
    Method_ClassBoardResourceCatalogAssetBundle__LoadSystemAsset_b__44_1__,
    0);
  if ( *(_DWORD *)(v22 + 24) <= 1u )
    goto LABEL_16;
  *(_QWORD *)(v22 + 40) = v28;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v22 + 40), (int32_t)v28, v29, v30);
  v31 = (System_Action_object__o *)sub_1C6BC54(System_Action_Action__TypeInfo);
  System_Action_object____ctor(
    v31,
    (Il2CppObject *)this,
    Method_ClassBoardResourceCatalogAssetBundle__LoadSystemAsset_b__44_2__,
    0);
  if ( *(_DWORD *)(v22 + 24) <= 2u )
    goto LABEL_16;
  *(_QWORD *)(v22 + 48) = v31;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v22 + 48), (int32_t)v31, v32, v33);
  v34 = (System_Action_object__o *)sub_1C6BC54(System_Action_Action__TypeInfo);
  System_Action_object____ctor(
    v34,
    (Il2CppObject *)this,
    Method_ClassBoardResourceCatalogAssetBundle__LoadSystemAsset_b__44_3__,
    0);
  if ( *(_DWORD *)(v22 + 24) <= 3u )
    goto LABEL_16;
  *(_QWORD *)(v22 + 56) = v34;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v22 + 56), (int32_t)v34, v35, v36);
  v37 = (System_Action_object__o *)sub_1C6BC54(System_Action_Action__TypeInfo);
  System_Action_object____ctor(
    v37,
    (Il2CppObject *)this,
    Method_ClassBoardResourceCatalogAssetBundle__LoadSystemAsset_b__44_4__,
    0);
  if ( *(_DWORD *)(v22 + 24) <= 4u )
    goto LABEL_16;
  *(_QWORD *)(v22 + 64) = v37;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v22 + 64), (int32_t)v37, v38, v39);
  v40 = (System_Action_object__o *)sub_1C6BC54(System_Action_Action__TypeInfo);
  System_Action_object____ctor(
    v40,
    (Il2CppObject *)this,
    Method_ClassBoardResourceCatalogAssetBundle__LoadSystemAsset_b__44_5__,
    0);
  if ( *(_DWORD *)(v22 + 24) <= 5u )
    goto LABEL_16;
  *(_QWORD *)(v22 + 72) = v40;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v22 + 72), (int32_t)v40, v41, v42);
  v43 = (System_Action_object__o *)sub_1C6BC54(System_Action_Action__TypeInfo);
  System_Action_object____ctor(
    v43,
    (Il2CppObject *)this,
    Method_ClassBoardResourceCatalogAssetBundle__LoadSystemAsset_b__44_6__,
    0);
  if ( *(_DWORD *)(v22 + 24) <= 6u )
    goto LABEL_16;
  *(_QWORD *)(v22 + 80) = v43;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v22 + 80), (int32_t)v43, v44, v45);
  v46 = (ChainableActionParallel_o *)sub_1C6BC54(ChainableActionParallel_TypeInfo);
  ChainableActionParallel___ctor_49344196(v46, (System_Action_Action__array *)v22, 0);
  v47 = sub_1C6BAB0(System_Action___TypeInfo, 1);
  v48 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
  System_Action___ctor(v48, (Il2CppObject *)this, Method_ClassBoardResourceCatalogAssetBundle_LoadEnd__, 0);
  if ( !v47 )
    goto LABEL_17;
  if ( !*(_DWORD *)(v47 + 24) )
LABEL_16:
    sub_1C6BC68(v24);
  *(_QWORD *)(v47 + 32) = v48;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v47 + 32), (int32_t)v48, v49, v50);
  if ( !v46 || (v24 = ChainableActionBase__Final((ChainableActionBase_o *)v46, (System_Action_array *)v47, 0)) == 0 )
LABEL_17:
    sub_1C6BC60(v24, v25);
  ChainableActionBase__Execute(v24, 0);
}


void ClassBoardResourceCatalogAssetBundle__ReleaseAll(
        ClassBoardResourceCatalogAssetBundle_o *this,
        const MethodInfo *method)
{
  AssetStorageLoadWrapper_o *assetStorageLoadWrapper; // x0

  assetStorageLoadWrapper = this->fields.assetStorageLoadWrapper;
  if ( !assetStorageLoadWrapper )
    sub_1C6BC60(0, method);
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

  if ( (byte_4CB9EF9 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&AtlasManagerUnit_TypeInfo);
    sub_1C6BA08(&Method_ClassBoardResourceCatalogAssetBundle___c__DisplayClass47_0__ReloadBoardUIAtlas_b__0__);
    sub_1C6BA08(&ClassBoardResourceCatalogAssetBundle___c__DisplayClass47_0_TypeInfo);
    sub_1C6BA08(&StringLiteral_4454/*"ClassBoard/UI/DownloadClassBoardUIAtlas"*/);
    byte_4CB9EF9 = 1;
  }
  v5 = sub_1C6BC54(ClassBoardResourceCatalogAssetBundle___c__DisplayClass47_0_TypeInfo);
  ClassBoardResourceCatalogAssetBundle___c__DisplayClass47_0___ctor(
    (ClassBoardResourceCatalogAssetBundle___c__DisplayClass47_0_o *)v5,
    0);
  if ( !v5 )
    goto LABEL_8;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v5 + 16), (int32_t)this, v8, v9);
  *(_QWORD *)(v5 + 24) = callback;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v5 + 24), (int32_t)callback, v10, v11);
  boardUiAtlasManagerUnit = this->fields.boardUiAtlasManagerUnit;
  if ( boardUiAtlasManagerUnit )
    AtlasManagerUnit__Release(boardUiAtlasManagerUnit, 0);
  assetStorageLoadWrapper = this->fields.assetStorageLoadWrapper;
  v14 = (AtlasManagerUnit_o *)sub_1C6BC54(AtlasManagerUnit_TypeInfo);
  AtlasManagerUnit___ctor(v14, (System_String_o *)StringLiteral_4454/*"ClassBoard/UI/DownloadClassBoardUIAtlas"*/, assetStorageLoadWrapper, 0);
  this->fields.boardUiAtlasManagerUnit = v14;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.boardUiAtlasManagerUnit, (int32_t)v14, v15, v16);
  v17 = this->fields.boardUiAtlasManagerUnit;
  v18 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
  System_Action___ctor(
    v18,
    (Il2CppObject *)v5,
    Method_ClassBoardResourceCatalogAssetBundle___c__DisplayClass47_0__ReloadBoardUIAtlas_b__0__,
    0);
  if ( !v17 )
LABEL_8:
    sub_1C6BC60(v6, v7);
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
    sub_1C6BC60(0, sprite);
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

  if ( (byte_4CB9F01 & 1) == 0 )
  {
    sub_1C6BA08(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C6BA08(&Method_ClassBoardResourceCatalogAssetBundle___c__DisplayClass44_0__LoadSystemAsset_b__7__);
    sub_1C6BA08(&ClassBoardResourceCatalogAssetBundle___c__DisplayClass44_0_TypeInfo);
    sub_1C6BA08(&StringLiteral_4451/*"ClassBoard/Main"*/);
    byte_4CB9F01 = 1;
  }
  v5 = sub_1C6BC54(ClassBoardResourceCatalogAssetBundle___c__DisplayClass44_0_TypeInfo);
  ClassBoardResourceCatalogAssetBundle___c__DisplayClass44_0___ctor(
    (ClassBoardResourceCatalogAssetBundle___c__DisplayClass44_0_o *)v5,
    0);
  if ( !v5 )
    sub_1C6BC60(v6, v7);
  *(_QWORD *)(v5 + 24) = this;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v5 + 24), (int32_t)this, v8, v9);
  *(_QWORD *)(v5 + 16) = f;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v5 + 16), (int32_t)f, v10, v11);
  v12 = (AssetLoader_LoadEndDataHandler_o *)sub_1C6BC54(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v12,
    (Il2CppObject *)v5,
    Method_ClassBoardResourceCatalogAssetBundle___c__DisplayClass44_0__LoadSystemAsset_b__7__,
    0);
  ClassBoardResourceCatalogAssetBundle__LoadAssetStorage(this, (System_String_o *)StringLiteral_4451/*"ClassBoard/Main"*/, v12, v13);
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

  if ( (byte_4CB9F02 & 1) == 0 )
  {
    sub_1C6BA08(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C6BA08(&Method_ClassBoardResourceCatalogAssetBundle___c__DisplayClass44_1__LoadSystemAsset_b__8__);
    sub_1C6BA08(&ClassBoardResourceCatalogAssetBundle___c__DisplayClass44_1_TypeInfo);
    sub_1C6BA08(&StringLiteral_4430/*"ClassBoard/Bg"*/);
    byte_4CB9F02 = 1;
  }
  v5 = sub_1C6BC54(ClassBoardResourceCatalogAssetBundle___c__DisplayClass44_1_TypeInfo);
  ClassBoardResourceCatalogAssetBundle___c__DisplayClass44_1___ctor(
    (ClassBoardResourceCatalogAssetBundle___c__DisplayClass44_1_o *)v5,
    0);
  if ( !v5 )
    sub_1C6BC60(v6, v7);
  *(_QWORD *)(v5 + 24) = this;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v5 + 24), (int32_t)this, v8, v9);
  *(_QWORD *)(v5 + 16) = f;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v5 + 16), (int32_t)f, v10, v11);
  v12 = (AssetLoader_LoadEndDataHandler_o *)sub_1C6BC54(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v12,
    (Il2CppObject *)v5,
    Method_ClassBoardResourceCatalogAssetBundle___c__DisplayClass44_1__LoadSystemAsset_b__8__,
    0);
  ClassBoardResourceCatalogAssetBundle__LoadAssetStorage(this, (System_String_o *)StringLiteral_4430/*"ClassBoard/Bg"*/, v12, v13);
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

  if ( (byte_4CB9F03 & 1) == 0 )
  {
    sub_1C6BA08(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C6BA08(&Method_ClassBoardResourceCatalogAssetBundle___c__DisplayClass44_2__LoadSystemAsset_b__9__);
    sub_1C6BA08(&ClassBoardResourceCatalogAssetBundle___c__DisplayClass44_2_TypeInfo);
    sub_1C6BA08(&StringLiteral_4452/*"ClassBoard/Select"*/);
    byte_4CB9F03 = 1;
  }
  v5 = sub_1C6BC54(ClassBoardResourceCatalogAssetBundle___c__DisplayClass44_2_TypeInfo);
  ClassBoardResourceCatalogAssetBundle___c__DisplayClass44_2___ctor(
    (ClassBoardResourceCatalogAssetBundle___c__DisplayClass44_2_o *)v5,
    0);
  if ( !v5 )
    sub_1C6BC60(v6, v7);
  *(_QWORD *)(v5 + 24) = this;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v5 + 24), (int32_t)this, v8, v9);
  *(_QWORD *)(v5 + 16) = f;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v5 + 16), (int32_t)f, v10, v11);
  v12 = (AssetLoader_LoadEndDataHandler_o *)sub_1C6BC54(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v12,
    (Il2CppObject *)v5,
    Method_ClassBoardResourceCatalogAssetBundle___c__DisplayClass44_2__LoadSystemAsset_b__9__,
    0);
  ClassBoardResourceCatalogAssetBundle__LoadAssetStorage(this, (System_String_o *)StringLiteral_4452/*"ClassBoard/Select"*/, v12, v13);
}


void ClassBoardResourceCatalogAssetBundle___LoadSystemAsset_b__44_3(
        ClassBoardResourceCatalogAssetBundle_o *this,
        System_Action_o *f,
        const MethodInfo *method)
{
  AtlasManagerUnit_o *boardUiAtlasManagerUnit; // x0

  boardUiAtlasManagerUnit = this->fields.boardUiAtlasManagerUnit;
  if ( !boardUiAtlasManagerUnit )
    sub_1C6BC60(0, f);
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
    sub_1C6BC60(0, f);
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
    sub_1C6BC60(0, f);
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
    sub_1C6BC60(0, f);
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
        sub_1C6B9AC((CGThumbnailListItem_o *)&_4__this->fields.mainAssetData, (int32_t)asset, (int32_t)method, v3),
        (f = this->fields.f) == 0) )
  {
    sub_1C6BC60(_4__this, asset);
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
        sub_1C6B9AC((CGThumbnailListItem_o *)&_4__this->fields.modelAssetData, (int32_t)asset, (int32_t)method, v3),
        (f = this->fields.f) == 0) )
  {
    sub_1C6BC60(_4__this, asset);
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
        sub_1C6B9AC(
          (CGThumbnailListItem_o *)&_4__this->fields.boardSelectViewAssetData,
          (int32_t)asset,
          (int32_t)method,
          v3),
        (f = this->fields.f) == 0) )
  {
    sub_1C6BC60(_4__this, asset);
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
    sub_1C6BC60(this, method);
  }
  boardUiAtlasManagerUnit = (ClassBoardResourceCatalogAssetBundle___c__DisplayClass47_0_c *)_4__this->fields.boardUiAtlasManagerUnit;
  this[6].klass = boardUiAtlasManagerUnit;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this[6], (int32_t)boardUiAtlasManagerUnit, v2, v3);
  ActionExtensions__Call(v5->fields.callback, 0);
}