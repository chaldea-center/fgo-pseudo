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

  if ( (byte_4C46B2B & 1) == 0 )
  {
    sub_1C37058(&AssetStorageLoadWrapper_TypeInfo);
    sub_1C37058(&ClassBoardResourceContents_TypeInfo);
    byte_4C46B2B = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  v3 = (ClassBoardResourceContents_o *)sub_1C372A4(ClassBoardResourceContents_TypeInfo);
  ClassBoardResourceContents___ctor(v3, 0);
  this->fields._Contents_k__BackingField = v3;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields._Contents_k__BackingField, (int32_t)v3, v4, v5);
  v6 = (AssetStorageLoadWrapper_o *)sub_1C372A4(AssetStorageLoadWrapper_TypeInfo);
  AssetStorageLoadWrapper___ctor(v6, 0);
  this->fields.assetStorageLoadWrapper = v6;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields, (int32_t)v6, v7, v8);
}


System_String_o *ClassBoardResourceCatalogAssetBundle__GetIconAtlasPath(
        ClassBoardResourceCatalogAssetBundle_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C46B35 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_4460/*"ClassBoard/Icon/DownloadClassBoardIconAtlas"*/);
    byte_4C46B35 = 1;
  }
  return (System_String_o *)StringLiteral_4460/*"ClassBoard/Icon/DownloadClassBoardIconAtlas"*/;
}


// local variable allocation has failed, the output may be wrong!
Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o ClassBoardResourceCatalogAssetBundle__GetObject___Il2CppFullySharedGenericType_(
        ClassBoardResourceCatalogAssetBundle_o *this,
        AssetData_o *assetData,
        System_String_o *name,
        const MethodInfo_30DB820 *method)
{
  __int64 v4; // x4
  __int64 v5; // x20
  __int64 v8; // x8
  size_t v10; // x21
  void *v11; // x0
  Il2CppObject *Object_object__51154888; // x23
  __int64 *v13; // x1
  __int64 v14; // x0
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v15; // x0
  void *v16; // x1
  _QWORD v17[2]; // [xsp+0h] [xbp-10h] BYREF
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o result; // 0:x0.16

  v5 = v4;
  v17[1] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v8 = *(_QWORD *)(v4 + 56);
  if ( !v8 )
  {
    sub_1C37058(&Method_AssetData_GetObject_GameObject____78105168);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    v8 = *(_QWORD *)(v5 + 56);
    if ( !v8 )
    {
      sub_1C877C8();
      v8 = *(_QWORD *)(v5 + 56);
    }
  }
  v10 = *(unsigned int *)(*(_QWORD *)v8 + 252LL);
  v11 = memset((char *)v17 - ((v10 + 15) & 0x1FFFFFFF0LL), 0, v10);
  if ( !assetData )
    goto LABEL_12;
  Object_object__51154888 = AssetData__GetObject_object__51154888(
                              assetData,
                              name,
                              (const MethodInfo_30C8FC8 *)Method_AssetData_GetObject_GameObject____78105168);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v11 = (void *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Object_object__51154888, 0, 0);
  if ( ((unsigned __int8)v11 & 1) == 0 )
  {
    if ( Object_object__51154888 )
    {
      v13 = *(__int64 **)(*(_QWORD *)(v5 + 56) + 8LL);
      v14 = *v13;
      v17[0] = (char *)v17 - ((v10 + 15) & 0x1FFFFFFF0LL);
      ((void (__fastcall *)(__int64, __int64 *, Il2CppObject *, _QWORD *, _QWORD))v13[2])(
        v14,
        v13,
        Object_object__51154888,
        v17,
        v17[0]);
      goto LABEL_11;
    }
LABEL_12:
    sub_1C372B4(v11);
  }
  memset((char *)v17 - ((v10 + 15) & 0x1FFFFFFF0LL), 0, v10);
  memcpy((char *)v17 - ((v10 + 15) & 0x1FFFFFFF0LL), (char *)v17 - ((v10 + 15) & 0x1FFFFFFF0LL), v10);
LABEL_11:
  v15 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)memcpy(
                                                                    (void *)method,
                                                                    (char *)v17 - ((v10 + 15) & 0x1FFFFFFF0LL),
                                                                    v10);
  result.monitor = v16;
  result.klass = v15;
  return result;
}


Il2CppObject *ClassBoardResourceCatalogAssetBundle__GetObject_object_(
        ClassBoardResourceCatalogAssetBundle_o *this,
        AssetData_o *assetData,
        System_String_o *name,
        const MethodInfo_30DB75C *method)
{
  Il2CppObject *Object_object__51154888; // x20

  if ( !method->rgctx_data )
  {
    sub_1C37058(&Method_AssetData_GetObject_GameObject____78105168);
    this = (ClassBoardResourceCatalogAssetBundle_o *)sub_1C37058(&UnityEngine_Object_TypeInfo);
    if ( !method->rgctx_data )
      this = (ClassBoardResourceCatalogAssetBundle_o *)sub_1C877C8();
  }
  if ( !assetData )
    goto LABEL_11;
  Object_object__51154888 = AssetData__GetObject_object__51154888(
                              assetData,
                              name,
                              (const MethodInfo_30C8FC8 *)Method_AssetData_GetObject_GameObject____78105168);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (ClassBoardResourceCatalogAssetBundle_o *)UnityEngine_Object__op_Equality(
                                                     (UnityEngine_Object_o *)Object_object__51154888,
                                                     0,
                                                     0);
  if ( ((unsigned __int8)this & 1) != 0 )
    return 0;
  if ( !Object_object__51154888 )
LABEL_11:
    sub_1C372B4(this);
  return UnityEngine_GameObject__GetComponent_object_(
           (UnityEngine_GameObject_o *)Object_object__51154888,
           (const MethodInfo_313F1D8 *)method->rgctx_data->_1_UnityEngine_GameObject_GetComponent_T_);
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
  if ( (byte_4C46B30 & 1) == 0 )
  {
    sub_1C37058(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardBlank___);
    sub_1C37058(&StringLiteral_4466/*"ClassBoardBlank"*/);
    byte_4C46B30 = 1;
  }
  mainAssetData = this->fields.mainAssetData;
  v5 = System_Int32__ToString((int32_t)&v8, 0);
  v6 = System_String__Concat_63561656((System_String_o *)StringLiteral_4466/*"ClassBoardBlank"*/, v5, 0);
  return (ClassBoardBlank_o *)ClassBoardResourceCatalogAssetBundle__GetObject_object_(
                                this,
                                mainAssetData,
                                v6,
                                (const MethodInfo_30DB75C *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardBlank___);
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
  if ( (byte_4C46B33 & 1) == 0 )
  {
    sub_1C37058(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardBlank___);
    sub_1C37058(&StringLiteral_7140/*"GrandClassBoardBlank"*/);
    byte_4C46B33 = 1;
  }
  mainAssetData = this->fields.mainAssetData;
  v5 = System_Int32__ToString((int32_t)&v8, 0);
  v6 = System_String__Concat_63561656((System_String_o *)StringLiteral_7140/*"GrandClassBoardBlank"*/, v5, 0);
  return (ClassBoardBlank_o *)ClassBoardResourceCatalogAssetBundle__GetObject_object_(
                                this,
                                mainAssetData,
                                v6,
                                (const MethodInfo_30DB75C *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardBlank___);
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
  if ( (byte_4C46B34 & 1) == 0 )
  {
    sub_1C37058(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardLock___);
    sub_1C37058(&StringLiteral_7142/*"GrandClassBoardLock"*/);
    byte_4C46B34 = 1;
  }
  mainAssetData = this->fields.mainAssetData;
  v5 = System_Int32__ToString((int32_t)&v8, 0);
  v6 = System_String__Concat_63561656((System_String_o *)StringLiteral_7142/*"GrandClassBoardLock"*/, v5, 0);
  return (ClassBoardLock_o *)ClassBoardResourceCatalogAssetBundle__GetObject_object_(
                               this,
                               mainAssetData,
                               v6,
                               (const MethodInfo_30DB75C *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardLock___);
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
  if ( (byte_4C46B32 & 1) == 0 )
  {
    sub_1C37058(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardSquare___);
    sub_1C37058(&StringLiteral_7143/*"GrandClassBoardSquare"*/);
    byte_4C46B32 = 1;
  }
  mainAssetData = this->fields.mainAssetData;
  v5 = System_Int32__ToString((int32_t)&v8, 0);
  v6 = System_String__Concat_63561656((System_String_o *)StringLiteral_7143/*"GrandClassBoardSquare"*/, v5, 0);
  return (ClassBoardSquare_o *)ClassBoardResourceCatalogAssetBundle__GetObject_object_(
                                 this,
                                 mainAssetData,
                                 v6,
                                 (const MethodInfo_30DB75C *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardSquare___);
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
  if ( (byte_4C46B31 & 1) == 0 )
  {
    sub_1C37058(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardLock___);
    sub_1C37058(&StringLiteral_4470/*"ClassBoardLock"*/);
    byte_4C46B31 = 1;
  }
  mainAssetData = this->fields.mainAssetData;
  v5 = System_Int32__ToString((int32_t)&v8, 0);
  v6 = System_String__Concat_63561656((System_String_o *)StringLiteral_4470/*"ClassBoardLock"*/, v5, 0);
  return (ClassBoardLock_o *)ClassBoardResourceCatalogAssetBundle__GetObject_object_(
                               this,
                               mainAssetData,
                               v6,
                               (const MethodInfo_30DB75C *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardLock___);
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
  if ( (byte_4C46B2F & 1) == 0 )
  {
    sub_1C37058(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardSquare___);
    sub_1C37058(&StringLiteral_4478/*"ClassBoardSquare"*/);
    byte_4C46B2F = 1;
  }
  mainAssetData = this->fields.mainAssetData;
  v5 = System_Int32__ToString((int32_t)&v8, 0);
  v6 = System_String__Concat_63561656((System_String_o *)StringLiteral_4478/*"ClassBoardSquare"*/, v5, 0);
  return (ClassBoardSquare_o *)ClassBoardResourceCatalogAssetBundle__GetObject_object_(
                                 this,
                                 mainAssetData,
                                 v6,
                                 (const MethodInfo_30DB75C *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardSquare___);
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
    sub_1C372B4(assetStorageLoadWrapper);
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
  ClassBoardResourceContents_o *Object_object__51154888; // x0
  AssetData_o *boardSelectViewAssetData; // x8
  ClassBoardLine_o *v14; // x27
  ClassBoardSquare_o *v15; // x24
  AssetData_o *v16; // x8
  Il2CppObject *v17; // x25
  Il2CppObject *v18; // x28
  Il2CppObject *v19; // x26
  Il2CppObject *v20; // x21
  ClassBoardFullReleaseEffectComponent_o *v21; // x20
  AtlasManagerUnit_o *grandGraphAtlas; // x1
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

  if ( (byte_4C46B2D & 1) == 0 )
  {
    sub_1C37058(&Method_AssetData_GetObject_GameObject____78105168);
    sub_1C37058(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardBackground___);
    sub_1C37058(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardBlank___);
    sub_1C37058(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardDisableOpenDialog___);
    sub_1C37058(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardFigureController___);
    sub_1C37058(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardFullReleaseEffectComponent___);
    sub_1C37058(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardLine___);
    sub_1C37058(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardLockOpenConfirmDialog___);
    sub_1C37058(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardLockReleaseConditionDialog___);
    sub_1C37058(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardLock___);
    sub_1C37058(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardQuestOpenConfirmDialog___);
    sub_1C37058(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardSquareDetailDialog___);
    sub_1C37058(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardSquareOpenConfirmDialog___);
    sub_1C37058(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardSquare___);
    sub_1C37058(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardUIController___);
    sub_1C37058(&StringLiteral_4465/*"ClassBoardBg"*/);
    sub_1C37058(&StringLiteral_4472/*"ClassBoardLockReleaseConditionDialog"*/);
    sub_1C37058(&StringLiteral_4469/*"ClassBoardLine"*/);
    sub_1C37058(&StringLiteral_6890/*"FullReleaseEffectClassScore"*/);
    sub_1C37058(&StringLiteral_4479/*"ClassBoardSquareDetailDialog"*/);
    sub_1C37058(&StringLiteral_4470/*"ClassBoardLock"*/);
    sub_1C37058(&StringLiteral_4477/*"ClassBoardSelectView"*/);
    sub_1C37058(&StringLiteral_7142/*"GrandClassBoardLock"*/);
    sub_1C37058(&StringLiteral_6846/*"ForwardIconAnimObject"*/);
    sub_1C37058(&StringLiteral_6891/*"FullReleaseEffectGrandScore"*/);
    sub_1C37058(&StringLiteral_7140/*"GrandClassBoardBlank"*/);
    sub_1C37058(&StringLiteral_4466/*"ClassBoardBlank"*/);
    sub_1C37058(&StringLiteral_4467/*"ClassBoardDisableOpenDialog"*/);
    sub_1C37058(&StringLiteral_4471/*"ClassBoardLockOpenConfirmDialog"*/);
    sub_1C37058(&StringLiteral_4478/*"ClassBoardSquare"*/);
    sub_1C37058(&StringLiteral_4468/*"ClassBoardFigure"*/);
    sub_1C37058(&StringLiteral_4480/*"ClassBoardSquareOpenConfirmDialog"*/);
    sub_1C37058(&StringLiteral_7143/*"GrandClassBoardSquare"*/);
    sub_1C37058(&StringLiteral_7141/*"GrandClassBoardLine"*/);
    sub_1C37058(&StringLiteral_4481/*"ClassBoardUI"*/);
    sub_1C37058(&StringLiteral_4473/*"ClassBoardQuestOpenConfirmDialog"*/);
    byte_4C46B2D = 1;
  }
  Object_object = ClassBoardResourceCatalogAssetBundle__GetObject_object_(
                    this,
                    this->fields.mainAssetData,
                    (System_String_o *)StringLiteral_4478/*"ClassBoardSquare"*/,
                    (const MethodInfo_30DB75C *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardSquare___);
  v4 = ClassBoardResourceCatalogAssetBundle__GetObject_object_(
         this,
         this->fields.mainAssetData,
         (System_String_o *)StringLiteral_4469/*"ClassBoardLine"*/,
         (const MethodInfo_30DB75C *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardLine___);
  v5 = ClassBoardResourceCatalogAssetBundle__GetObject_object_(
         this,
         this->fields.mainAssetData,
         (System_String_o *)StringLiteral_4470/*"ClassBoardLock"*/,
         (const MethodInfo_30DB75C *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardLock___);
  v6 = ClassBoardResourceCatalogAssetBundle__GetObject_object_(
         this,
         this->fields.mainAssetData,
         (System_String_o *)StringLiteral_4466/*"ClassBoardBlank"*/,
         (const MethodInfo_30DB75C *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardBlank___);
  v7 = ClassBoardResourceCatalogAssetBundle__GetObject_object_(
         this,
         this->fields.mainAssetData,
         (System_String_o *)StringLiteral_7143/*"GrandClassBoardSquare"*/,
         (const MethodInfo_30DB75C *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardSquare___);
  v8 = ClassBoardResourceCatalogAssetBundle__GetObject_object_(
         this,
         this->fields.mainAssetData,
         (System_String_o *)StringLiteral_7141/*"GrandClassBoardLine"*/,
         (const MethodInfo_30DB75C *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardLine___);
  v9 = ClassBoardResourceCatalogAssetBundle__GetObject_object_(
         this,
         this->fields.mainAssetData,
         (System_String_o *)StringLiteral_7142/*"GrandClassBoardLock"*/,
         (const MethodInfo_30DB75C *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardLock___);
  v10 = ClassBoardResourceCatalogAssetBundle__GetObject_object_(
          this,
          this->fields.mainAssetData,
          (System_String_o *)StringLiteral_7140/*"GrandClassBoardBlank"*/,
          (const MethodInfo_30DB75C *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardBlank___);
  v11 = ClassBoardResourceCatalogAssetBundle__GetObject_object_(
          this,
          this->fields.mainAssetData,
          (System_String_o *)StringLiteral_4467/*"ClassBoardDisableOpenDialog"*/,
          (const MethodInfo_30DB75C *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardDisableOpenDialog___);
  v31 = ClassBoardResourceCatalogAssetBundle__GetObject_object_(
          this,
          this->fields.mainAssetData,
          (System_String_o *)StringLiteral_4480/*"ClassBoardSquareOpenConfirmDialog"*/,
          (const MethodInfo_30DB75C *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardSquareOpenConfirmDialog___);
  v30 = ClassBoardResourceCatalogAssetBundle__GetObject_object_(
          this,
          this->fields.mainAssetData,
          (System_String_o *)StringLiteral_4471/*"ClassBoardLockOpenConfirmDialog"*/,
          (const MethodInfo_30DB75C *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardLockOpenConfirmDialog___);
  classBoardLockReleaseConditionDialog = (ClassBoardLockReleaseConditionDialog_o *)ClassBoardResourceCatalogAssetBundle__GetObject_object_(
                                                                                     this,
                                                                                     this->fields.mainAssetData,
                                                                                     (System_String_o *)StringLiteral_4472/*"ClassBoardLockReleaseConditionDialog"*/,
                                                                                     (const MethodInfo_30DB75C *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardLockReleaseConditionDialog___);
  v28 = ClassBoardResourceCatalogAssetBundle__GetObject_object_(
          this,
          this->fields.mainAssetData,
          (System_String_o *)StringLiteral_4479/*"ClassBoardSquareDetailDialog"*/,
          (const MethodInfo_30DB75C *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardSquareDetailDialog___);
  uiController = (ClassBoardUIController_o *)ClassBoardResourceCatalogAssetBundle__GetObject_object_(
                                               this,
                                               this->fields.mainAssetData,
                                               (System_String_o *)StringLiteral_4481/*"ClassBoardUI"*/,
                                               (const MethodInfo_30DB75C *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardUIController___);
  Object_object__51154888 = (ClassBoardResourceContents_o *)ClassBoardResourceCatalogAssetBundle__GetObject_object_(
                                                              this,
                                                              this->fields.modelAssetData,
                                                              (System_String_o *)StringLiteral_4465/*"ClassBoardBg"*/,
                                                              (const MethodInfo_30DB75C *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardBackground___);
  boardSelectViewAssetData = this->fields.boardSelectViewAssetData;
  bgModel = (ClassBoardBackground_o *)Object_object__51154888;
  if ( !boardSelectViewAssetData )
    goto LABEL_20;
  v32 = (ClassBoardBlank_o *)v10;
  v27 = (ClassBoardDisableOpenDialog_o *)v11;
  v33 = (ClassBoardLine_o *)v8;
  v34 = (ClassBoardSquare_o *)v7;
  v14 = (ClassBoardLine_o *)v4;
  v15 = (ClassBoardSquare_o *)Object_object;
  Object_object__51154888 = (ClassBoardResourceContents_o *)AssetData__GetObject_object__51154888(
                                                              boardSelectViewAssetData,
                                                              (System_String_o *)StringLiteral_4477/*"ClassBoardSelectView"*/,
                                                              (const MethodInfo_30C8FC8 *)Method_AssetData_GetObject_GameObject____78105168);
  v16 = this->fields.boardSelectViewAssetData;
  boardSelectViewPrefab = (UnityEngine_GameObject_o *)Object_object__51154888;
  if ( !v16 )
    goto LABEL_20;
  v17 = AssetData__GetObject_object__51154888(
          v16,
          (System_String_o *)StringLiteral_6846/*"ForwardIconAnimObject"*/,
          (const MethodInfo_30C8FC8 *)Method_AssetData_GetObject_GameObject____78105168);
  v18 = ClassBoardResourceCatalogAssetBundle__GetObject_object_(
          this,
          this->fields.mainAssetData,
          (System_String_o *)StringLiteral_4468/*"ClassBoardFigure"*/,
          (const MethodInfo_30DB75C *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardFigureController___);
  v19 = ClassBoardResourceCatalogAssetBundle__GetObject_object_(
          this,
          this->fields.mainAssetData,
          (System_String_o *)StringLiteral_4473/*"ClassBoardQuestOpenConfirmDialog"*/,
          (const MethodInfo_30DB75C *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardQuestOpenConfirmDialog___);
  v20 = ClassBoardResourceCatalogAssetBundle__GetObject_object_(
          this,
          this->fields.mainAssetData,
          (System_String_o *)StringLiteral_6890/*"FullReleaseEffectClassScore"*/,
          (const MethodInfo_30DB75C *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardFullReleaseEffectComponent___);
  Object_object__51154888 = (ClassBoardResourceContents_o *)ClassBoardResourceCatalogAssetBundle__GetObject_object_(
                                                              this,
                                                              this->fields.mainAssetData,
                                                              (System_String_o *)StringLiteral_6891/*"FullReleaseEffectGrandScore"*/,
                                                              (const MethodInfo_30DB75C *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardFullReleaseEffectComponent___);
  if ( !this->fields._Contents_k__BackingField )
    goto LABEL_20;
  v21 = (ClassBoardFullReleaseEffectComponent_o *)Object_object__51154888;
  ClassBoardResourceContents__SetContents(
    this->fields._Contents_k__BackingField,
    v15,
    v14,
    (ClassBoardLock_o *)v5,
    (ClassBoardBlank_o *)v6,
    0);
  Object_object__51154888 = this->fields._Contents_k__BackingField;
  if ( !Object_object__51154888 )
    goto LABEL_20;
  ClassBoardResourceContents__SetGrandContents(Object_object__51154888, v34, v33, (ClassBoardLock_o *)v9, v32, 0);
  Object_object__51154888 = this->fields._Contents_k__BackingField;
  if ( !Object_object__51154888 )
    goto LABEL_20;
  ClassBoardResourceContents__SetContentsDialog(
    Object_object__51154888,
    v27,
    (ClassBoardSquareOpenConfirmDialog_o *)v31,
    (ClassBoardLockOpenConfirmDialog_o *)v30,
    classBoardLockReleaseConditionDialog,
    (ClassBoardSquareDetailDialog_o *)v28,
    0);
  Object_object__51154888 = this->fields._Contents_k__BackingField;
  if ( !Object_object__51154888 )
    goto LABEL_20;
  ClassBoardResourceContents__SetContentsUI(
    Object_object__51154888,
    uiController,
    this->fields.boardUiAtlasManagerUnit,
    this->fields.iconAtlasManagerUnit,
    this->fields.classUiAtlasManagerUnit,
    0);
  Object_object__51154888 = this->fields._Contents_k__BackingField;
  if ( !Object_object__51154888 )
    goto LABEL_20;
  ClassBoardResourceContents__SetContentsBgModel(Object_object__51154888, bgModel, 0);
  Object_object__51154888 = this->fields._Contents_k__BackingField;
  if ( !Object_object__51154888 )
    goto LABEL_20;
  ClassBoardResourceContents__SetContentsBoardSelectView(Object_object__51154888, boardSelectViewPrefab, 0);
  Object_object__51154888 = this->fields._Contents_k__BackingField;
  if ( !Object_object__51154888 )
    goto LABEL_20;
  ClassBoardResourceContents__SetContentsForwardIconAnimObject(
    Object_object__51154888,
    (UnityEngine_GameObject_o *)v17,
    0);
  Object_object__51154888 = this->fields._Contents_k__BackingField;
  if ( !Object_object__51154888 )
    goto LABEL_20;
  ClassBoardResourceContents__SetContentsFigure(Object_object__51154888, (ClassBoardFigureController_o *)v18, 0);
  Object_object__51154888 = this->fields._Contents_k__BackingField;
  if ( !Object_object__51154888 )
    goto LABEL_20;
  ClassBoardResourceContents__SetContentsGrandBoardDialog(
    Object_object__51154888,
    (ClassBoardQuestOpenConfirmDialog_o *)v19,
    0);
  Object_object__51154888 = this->fields._Contents_k__BackingField;
  if ( !Object_object__51154888 )
    goto LABEL_20;
  ClassBoardResourceContents__SetContentsFullReleaseEffect(
    Object_object__51154888,
    (ClassBoardFullReleaseEffectComponent_o *)v20,
    v21,
    0);
  grandGraphAtlas = this->fields.grandGraphAtlas;
  if ( grandGraphAtlas )
  {
    Object_object__51154888 = this->fields._Contents_k__BackingField;
    if ( !Object_object__51154888 )
      goto LABEL_20;
    ClassBoardResourceContents__SetContentsGrandGraph(Object_object__51154888, grandGraphAtlas, 0);
  }
  loadEndCallback = this->fields.loadEndCallback;
  if ( !loadEndCallback )
LABEL_20:
    sub_1C372B4(Object_object__51154888);
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
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  System_Action_object__o *v27; // x21
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  System_Action_object__o *v30; // x21
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  System_Action_object__o *v33; // x21
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  System_Action_object__o *v36; // x21
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  System_Action_object__o *v39; // x21
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  System_Action_object__o *v42; // x21
  int32_t v43; // w2
  const MethodInfo *v44; // x3
  ChainableActionParallel_o *v45; // x21
  __int64 v46; // x20
  System_Action_o *v47; // x22
  int32_t v48; // w2
  const MethodInfo *v49; // x3

  if ( (byte_4C46B2C & 1) == 0 )
  {
    sub_1C37058(&System_Action___TypeInfo);
    sub_1C37058(&System_Action_Action____TypeInfo);
    sub_1C37058(&System_Action_Action__TypeInfo);
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&AtlasManagerUnit_TypeInfo);
    sub_1C37058(&ChainableActionParallel_TypeInfo);
    sub_1C37058(&Method_ClassBoardResourceCatalogAssetBundle_LoadEnd__);
    sub_1C37058(&Method_ClassBoardResourceCatalogAssetBundle__LoadSystemAsset_b__44_0__);
    sub_1C37058(&Method_ClassBoardResourceCatalogAssetBundle__LoadSystemAsset_b__44_1__);
    sub_1C37058(&Method_ClassBoardResourceCatalogAssetBundle__LoadSystemAsset_b__44_2__);
    sub_1C37058(&Method_ClassBoardResourceCatalogAssetBundle__LoadSystemAsset_b__44_3__);
    sub_1C37058(&Method_ClassBoardResourceCatalogAssetBundle__LoadSystemAsset_b__44_4__);
    sub_1C37058(&Method_ClassBoardResourceCatalogAssetBundle__LoadSystemAsset_b__44_5__);
    sub_1C37058(&Method_ClassBoardResourceCatalogAssetBundle__LoadSystemAsset_b__44_6__);
    sub_1C37058(&StringLiteral_4464/*"ClassBoard/UI/DownloadClassBoardUIAtlas"*/);
    sub_1C37058(&StringLiteral_7150/*"GrandGraphSystem/DownloadGrandGraphSystemAtlas"*/);
    sub_1C37058(&StringLiteral_4463/*"ClassBoard/UI/DownloadClassBoardClassUIAtlas"*/);
    sub_1C37058(&StringLiteral_4460/*"ClassBoard/Icon/DownloadClassBoardIconAtlas"*/);
    byte_4C46B2C = 1;
  }
  this->fields.loadEndCallback = callback;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.loadEndCallback, (int32_t)callback, (int32_t)method, v3);
  assetStorageLoadWrapper = this->fields.assetStorageLoadWrapper;
  v7 = (AtlasManagerUnit_o *)sub_1C372A4(AtlasManagerUnit_TypeInfo);
  AtlasManagerUnit___ctor(v7, (System_String_o *)StringLiteral_4464/*"ClassBoard/UI/DownloadClassBoardUIAtlas"*/, assetStorageLoadWrapper, 0);
  this->fields.boardUiAtlasManagerUnit = v7;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.boardUiAtlasManagerUnit, (int32_t)v7, v8, v9);
  v10 = this->fields.assetStorageLoadWrapper;
  v11 = (AtlasManagerUnit_o *)sub_1C372A4(AtlasManagerUnit_TypeInfo);
  AtlasManagerUnit___ctor(v11, (System_String_o *)StringLiteral_4463/*"ClassBoard/UI/DownloadClassBoardClassUIAtlas"*/, v10, 0);
  this->fields.classUiAtlasManagerUnit = v11;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.classUiAtlasManagerUnit, (int32_t)v11, v12, v13);
  v14 = this->fields.assetStorageLoadWrapper;
  v15 = (AtlasManagerUnit_o *)sub_1C372A4(AtlasManagerUnit_TypeInfo);
  AtlasManagerUnit___ctor(v15, (System_String_o *)StringLiteral_4460/*"ClassBoard/Icon/DownloadClassBoardIconAtlas"*/, v14, 0);
  this->fields.iconAtlasManagerUnit = v15;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.iconAtlasManagerUnit, (int32_t)v15, v16, v17);
  v18 = this->fields.assetStorageLoadWrapper;
  v19 = (AtlasManagerUnit_o *)sub_1C372A4(AtlasManagerUnit_TypeInfo);
  AtlasManagerUnit___ctor(v19, (System_String_o *)StringLiteral_7150/*"GrandGraphSystem/DownloadGrandGraphSystemAtlas"*/, v18, 0);
  this->fields.grandGraphAtlas = v19;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.grandGraphAtlas, (int32_t)v19, v20, v21);
  v22 = sub_1C37100(System_Action_Action____TypeInfo, 7);
  v23 = (System_Action_object__o *)sub_1C372A4(System_Action_Action__TypeInfo);
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
  sub_1C36FFC((CGThumbnailListItem_o *)(v22 + 32), (int32_t)v23, v25, v26);
  v27 = (System_Action_object__o *)sub_1C372A4(System_Action_Action__TypeInfo);
  System_Action_object____ctor(
    v27,
    (Il2CppObject *)this,
    Method_ClassBoardResourceCatalogAssetBundle__LoadSystemAsset_b__44_1__,
    0);
  if ( *(_DWORD *)(v22 + 24) <= 1u )
    goto LABEL_16;
  *(_QWORD *)(v22 + 40) = v27;
  sub_1C36FFC((CGThumbnailListItem_o *)(v22 + 40), (int32_t)v27, v28, v29);
  v30 = (System_Action_object__o *)sub_1C372A4(System_Action_Action__TypeInfo);
  System_Action_object____ctor(
    v30,
    (Il2CppObject *)this,
    Method_ClassBoardResourceCatalogAssetBundle__LoadSystemAsset_b__44_2__,
    0);
  if ( *(_DWORD *)(v22 + 24) <= 2u )
    goto LABEL_16;
  *(_QWORD *)(v22 + 48) = v30;
  sub_1C36FFC((CGThumbnailListItem_o *)(v22 + 48), (int32_t)v30, v31, v32);
  v33 = (System_Action_object__o *)sub_1C372A4(System_Action_Action__TypeInfo);
  System_Action_object____ctor(
    v33,
    (Il2CppObject *)this,
    Method_ClassBoardResourceCatalogAssetBundle__LoadSystemAsset_b__44_3__,
    0);
  if ( *(_DWORD *)(v22 + 24) <= 3u )
    goto LABEL_16;
  *(_QWORD *)(v22 + 56) = v33;
  sub_1C36FFC((CGThumbnailListItem_o *)(v22 + 56), (int32_t)v33, v34, v35);
  v36 = (System_Action_object__o *)sub_1C372A4(System_Action_Action__TypeInfo);
  System_Action_object____ctor(
    v36,
    (Il2CppObject *)this,
    Method_ClassBoardResourceCatalogAssetBundle__LoadSystemAsset_b__44_4__,
    0);
  if ( *(_DWORD *)(v22 + 24) <= 4u )
    goto LABEL_16;
  *(_QWORD *)(v22 + 64) = v36;
  sub_1C36FFC((CGThumbnailListItem_o *)(v22 + 64), (int32_t)v36, v37, v38);
  v39 = (System_Action_object__o *)sub_1C372A4(System_Action_Action__TypeInfo);
  System_Action_object____ctor(
    v39,
    (Il2CppObject *)this,
    Method_ClassBoardResourceCatalogAssetBundle__LoadSystemAsset_b__44_5__,
    0);
  if ( *(_DWORD *)(v22 + 24) <= 5u )
    goto LABEL_16;
  *(_QWORD *)(v22 + 72) = v39;
  sub_1C36FFC((CGThumbnailListItem_o *)(v22 + 72), (int32_t)v39, v40, v41);
  v42 = (System_Action_object__o *)sub_1C372A4(System_Action_Action__TypeInfo);
  System_Action_object____ctor(
    v42,
    (Il2CppObject *)this,
    Method_ClassBoardResourceCatalogAssetBundle__LoadSystemAsset_b__44_6__,
    0);
  if ( *(_DWORD *)(v22 + 24) <= 6u )
    goto LABEL_16;
  *(_QWORD *)(v22 + 80) = v42;
  sub_1C36FFC((CGThumbnailListItem_o *)(v22 + 80), (int32_t)v42, v43, v44);
  v45 = (ChainableActionParallel_o *)sub_1C372A4(ChainableActionParallel_TypeInfo);
  ChainableActionParallel___ctor_49042072(v45, (System_Action_Action__array *)v22, 0);
  v46 = sub_1C37100(System_Action___TypeInfo, 1);
  v47 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(v47, (Il2CppObject *)this, Method_ClassBoardResourceCatalogAssetBundle_LoadEnd__, 0);
  if ( !v46 )
    goto LABEL_17;
  if ( !*(_DWORD *)(v46 + 24) )
LABEL_16:
    sub_1C372BC(v24);
  *(_QWORD *)(v46 + 32) = v47;
  sub_1C36FFC((CGThumbnailListItem_o *)(v46 + 32), (int32_t)v47, v48, v49);
  if ( !v45 || (v24 = ChainableActionBase__Final((ChainableActionBase_o *)v45, (System_Action_array *)v46, 0)) == 0 )
LABEL_17:
    sub_1C372B4(v24);
  ChainableActionBase__Execute(v24, 0);
}


void ClassBoardResourceCatalogAssetBundle__ReleaseAll(
        ClassBoardResourceCatalogAssetBundle_o *this,
        const MethodInfo *method)
{
  AssetStorageLoadWrapper_o *assetStorageLoadWrapper; // x0

  assetStorageLoadWrapper = this->fields.assetStorageLoadWrapper;
  if ( !assetStorageLoadWrapper )
    sub_1C372B4(0);
  AssetStorageLoadWrapper__ReleaseAll(assetStorageLoadWrapper, 0);
}


void ClassBoardResourceCatalogAssetBundle__ReloadBoardUIAtlas(
        ClassBoardResourceCatalogAssetBundle_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x20
  __int64 v6; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  AtlasManagerUnit_o *boardUiAtlasManagerUnit; // x0
  AssetStorageLoadWrapper_o *assetStorageLoadWrapper; // x22
  AtlasManagerUnit_o *v13; // x23
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  AtlasManagerUnit_o *v16; // x19
  System_Action_o *v17; // x21

  if ( (byte_4C46B2E & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&AtlasManagerUnit_TypeInfo);
    sub_1C37058(&Method_ClassBoardResourceCatalogAssetBundle___c__DisplayClass47_0__ReloadBoardUIAtlas_b__0__);
    sub_1C37058(&ClassBoardResourceCatalogAssetBundle___c__DisplayClass47_0_TypeInfo);
    sub_1C37058(&StringLiteral_4464/*"ClassBoard/UI/DownloadClassBoardUIAtlas"*/);
    byte_4C46B2E = 1;
  }
  v5 = sub_1C372A4(ClassBoardResourceCatalogAssetBundle___c__DisplayClass47_0_TypeInfo);
  ClassBoardResourceCatalogAssetBundle___c__DisplayClass47_0___ctor(
    (ClassBoardResourceCatalogAssetBundle___c__DisplayClass47_0_o *)v5,
    0);
  if ( !v5 )
    goto LABEL_8;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 16), (int32_t)this, v7, v8);
  *(_QWORD *)(v5 + 24) = callback;
  sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 24), (int32_t)callback, v9, v10);
  boardUiAtlasManagerUnit = this->fields.boardUiAtlasManagerUnit;
  if ( boardUiAtlasManagerUnit )
    AtlasManagerUnit__Release(boardUiAtlasManagerUnit, 0);
  assetStorageLoadWrapper = this->fields.assetStorageLoadWrapper;
  v13 = (AtlasManagerUnit_o *)sub_1C372A4(AtlasManagerUnit_TypeInfo);
  AtlasManagerUnit___ctor(v13, (System_String_o *)StringLiteral_4464/*"ClassBoard/UI/DownloadClassBoardUIAtlas"*/, assetStorageLoadWrapper, 0);
  this->fields.boardUiAtlasManagerUnit = v13;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.boardUiAtlasManagerUnit, (int32_t)v13, v14, v15);
  v16 = this->fields.boardUiAtlasManagerUnit;
  v17 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(
    v17,
    (Il2CppObject *)v5,
    Method_ClassBoardResourceCatalogAssetBundle___c__DisplayClass47_0__ReloadBoardUIAtlas_b__0__,
    0);
  if ( !v16 )
LABEL_8:
    sub_1C372B4(v6);
  AtlasManagerUnit__Load(v16, v17, 1, 0);
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
    sub_1C372B4(0);
  AtlasManagerUnit__SetUI(boardUiAtlasManagerUnit, sprite, spriteName, 0);
}


void ClassBoardResourceCatalogAssetBundle___LoadSystemAsset_b__44_0(
        ClassBoardResourceCatalogAssetBundle_o *this,
        System_Action_o *f,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  AssetLoader_LoadEndDataHandler_o *v11; // x20
  const MethodInfo *v12; // x3

  if ( (byte_4C46B36 & 1) == 0 )
  {
    sub_1C37058(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C37058(&Method_ClassBoardResourceCatalogAssetBundle___c__DisplayClass44_0__LoadSystemAsset_b__7__);
    sub_1C37058(&ClassBoardResourceCatalogAssetBundle___c__DisplayClass44_0_TypeInfo);
    sub_1C37058(&StringLiteral_4461/*"ClassBoard/Main"*/);
    byte_4C46B36 = 1;
  }
  v5 = sub_1C372A4(ClassBoardResourceCatalogAssetBundle___c__DisplayClass44_0_TypeInfo);
  ClassBoardResourceCatalogAssetBundle___c__DisplayClass44_0___ctor(
    (ClassBoardResourceCatalogAssetBundle___c__DisplayClass44_0_o *)v5,
    0);
  if ( !v5 )
    sub_1C372B4(v6);
  *(_QWORD *)(v5 + 24) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 24), (int32_t)this, v7, v8);
  *(_QWORD *)(v5 + 16) = f;
  sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 16), (int32_t)f, v9, v10);
  v11 = (AssetLoader_LoadEndDataHandler_o *)sub_1C372A4(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v11,
    (Il2CppObject *)v5,
    Method_ClassBoardResourceCatalogAssetBundle___c__DisplayClass44_0__LoadSystemAsset_b__7__,
    0);
  ClassBoardResourceCatalogAssetBundle__LoadAssetStorage(this, (System_String_o *)StringLiteral_4461/*"ClassBoard/Main"*/, v11, v12);
}


void ClassBoardResourceCatalogAssetBundle___LoadSystemAsset_b__44_1(
        ClassBoardResourceCatalogAssetBundle_o *this,
        System_Action_o *f,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  AssetLoader_LoadEndDataHandler_o *v11; // x20
  const MethodInfo *v12; // x3

  if ( (byte_4C46B37 & 1) == 0 )
  {
    sub_1C37058(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C37058(&Method_ClassBoardResourceCatalogAssetBundle___c__DisplayClass44_1__LoadSystemAsset_b__8__);
    sub_1C37058(&ClassBoardResourceCatalogAssetBundle___c__DisplayClass44_1_TypeInfo);
    sub_1C37058(&StringLiteral_4440/*"ClassBoard/Bg"*/);
    byte_4C46B37 = 1;
  }
  v5 = sub_1C372A4(ClassBoardResourceCatalogAssetBundle___c__DisplayClass44_1_TypeInfo);
  ClassBoardResourceCatalogAssetBundle___c__DisplayClass44_1___ctor(
    (ClassBoardResourceCatalogAssetBundle___c__DisplayClass44_1_o *)v5,
    0);
  if ( !v5 )
    sub_1C372B4(v6);
  *(_QWORD *)(v5 + 24) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 24), (int32_t)this, v7, v8);
  *(_QWORD *)(v5 + 16) = f;
  sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 16), (int32_t)f, v9, v10);
  v11 = (AssetLoader_LoadEndDataHandler_o *)sub_1C372A4(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v11,
    (Il2CppObject *)v5,
    Method_ClassBoardResourceCatalogAssetBundle___c__DisplayClass44_1__LoadSystemAsset_b__8__,
    0);
  ClassBoardResourceCatalogAssetBundle__LoadAssetStorage(this, (System_String_o *)StringLiteral_4440/*"ClassBoard/Bg"*/, v11, v12);
}


void ClassBoardResourceCatalogAssetBundle___LoadSystemAsset_b__44_2(
        ClassBoardResourceCatalogAssetBundle_o *this,
        System_Action_o *f,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  AssetLoader_LoadEndDataHandler_o *v11; // x20
  const MethodInfo *v12; // x3

  if ( (byte_4C46B38 & 1) == 0 )
  {
    sub_1C37058(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C37058(&Method_ClassBoardResourceCatalogAssetBundle___c__DisplayClass44_2__LoadSystemAsset_b__9__);
    sub_1C37058(&ClassBoardResourceCatalogAssetBundle___c__DisplayClass44_2_TypeInfo);
    sub_1C37058(&StringLiteral_4462/*"ClassBoard/Select"*/);
    byte_4C46B38 = 1;
  }
  v5 = sub_1C372A4(ClassBoardResourceCatalogAssetBundle___c__DisplayClass44_2_TypeInfo);
  ClassBoardResourceCatalogAssetBundle___c__DisplayClass44_2___ctor(
    (ClassBoardResourceCatalogAssetBundle___c__DisplayClass44_2_o *)v5,
    0);
  if ( !v5 )
    sub_1C372B4(v6);
  *(_QWORD *)(v5 + 24) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 24), (int32_t)this, v7, v8);
  *(_QWORD *)(v5 + 16) = f;
  sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 16), (int32_t)f, v9, v10);
  v11 = (AssetLoader_LoadEndDataHandler_o *)sub_1C372A4(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v11,
    (Il2CppObject *)v5,
    Method_ClassBoardResourceCatalogAssetBundle___c__DisplayClass44_2__LoadSystemAsset_b__9__,
    0);
  ClassBoardResourceCatalogAssetBundle__LoadAssetStorage(this, (System_String_o *)StringLiteral_4462/*"ClassBoard/Select"*/, v11, v12);
}


void ClassBoardResourceCatalogAssetBundle___LoadSystemAsset_b__44_3(
        ClassBoardResourceCatalogAssetBundle_o *this,
        System_Action_o *f,
        const MethodInfo *method)
{
  AtlasManagerUnit_o *boardUiAtlasManagerUnit; // x0

  boardUiAtlasManagerUnit = this->fields.boardUiAtlasManagerUnit;
  if ( !boardUiAtlasManagerUnit )
    sub_1C372B4(0);
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
    sub_1C372B4(0);
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
    sub_1C372B4(0);
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
    sub_1C372B4(0);
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
        sub_1C36FFC((CGThumbnailListItem_o *)&_4__this->fields.mainAssetData, (int32_t)asset, (int32_t)method, v3),
        (f = this->fields.f) == 0) )
  {
    sub_1C372B4(_4__this);
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
        sub_1C36FFC((CGThumbnailListItem_o *)&_4__this->fields.modelAssetData, (int32_t)asset, (int32_t)method, v3),
        (f = this->fields.f) == 0) )
  {
    sub_1C372B4(_4__this);
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
        sub_1C36FFC(
          (CGThumbnailListItem_o *)&_4__this->fields.boardSelectViewAssetData,
          (int32_t)asset,
          (int32_t)method,
          v3),
        (f = this->fields.f) == 0) )
  {
    sub_1C372B4(_4__this);
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
    sub_1C372B4(this);
  }
  boardUiAtlasManagerUnit = (ClassBoardResourceCatalogAssetBundle___c__DisplayClass47_0_c *)_4__this->fields.boardUiAtlasManagerUnit;
  this[6].klass = boardUiAtlasManagerUnit;
  sub_1C36FFC((CGThumbnailListItem_o *)&this[6], (int32_t)boardUiAtlasManagerUnit, v2, v3);
  ActionExtensions__Call(v5->fields.callback, 0);
}