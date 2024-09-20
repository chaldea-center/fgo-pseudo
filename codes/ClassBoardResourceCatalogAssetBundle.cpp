void __fastcall ClassBoardResourceCatalogAssetBundle___ctor(
        ClassBoardResourceCatalogAssetBundle_o *this,
        const MethodInfo *method)
{
  Il2CppObject *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  AssetStorageLoadWrapper_o *v6; // x20
  int32_t v7; // w2
  int32_t v8; // w3

  if ( (byte_4A5E5D3 & 1) == 0 )
  {
    sub_1B885B0(&AssetStorageLoadWrapper_TypeInfo);
    sub_1B885B0(&ClassBoardResourceContents_TypeInfo);
    byte_4A5E5D3 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v3 = (Il2CppObject *)sub_1B887FC(ClassBoardResourceContents_TypeInfo);
  System_Object___ctor(v3, 0LL);
  this->fields._Contents_k__BackingField = (struct ClassBoardResourceContents_o *)v3;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields._Contents_k__BackingField, (int32_t)v3, v4, v5);
  v6 = (AssetStorageLoadWrapper_o *)sub_1B887FC(AssetStorageLoadWrapper_TypeInfo);
  AssetStorageLoadWrapper___ctor(v6, 0LL);
  this->fields.assetStorageLoadWrapper = v6;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)v6, v7, v8);
}


System_String_o *__fastcall ClassBoardResourceCatalogAssetBundle__GetIconAtlasPath(
        ClassBoardResourceCatalogAssetBundle_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A5E5DA & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_4494/*"ClassBoard/Icon/DownloadClassBoardIconAtlas"*/);
    byte_4A5E5DA = 1;
  }
  return (System_String_o *)StringLiteral_4494/*"ClassBoard/Icon/DownloadClassBoardIconAtlas"*/;
}


// local variable allocation has failed, the output may be wrong!
Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o __fastcall ClassBoardResourceCatalogAssetBundle__GetObject___Il2CppFullySharedGenericType_(
        ClassBoardResourceCatalogAssetBundle_o *this,
        AssetData_o *assetData,
        System_String_o *name,
        const MethodInfo_2E73A50 *method)
{
  __int64 v4; // x4
  __int64 v5; // x20
  __int64 v8; // x8
  __int64 v10; // x21
  void *v11; // x0
  __int64 v12; // x1
  Il2CppObject *Object_object__48635516; // x23
  __int64 *v14; // x1
  __int64 v15; // x0
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v16; // x0 OVERLAPPED
  void *v17; // x1
  __int64 v18[2]; // [xsp+0h] [xbp-10h] BYREF
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o result; // 0:x0.16

  v5 = v4;
  v18[1] = *(_QWORD *)(_ReadStatusReg(ARM64_SYSREG(3, 3, 13, 0, 2)) + 40);
  v8 = *(_QWORD *)(v4 + 56);
  if ( !v8 )
  {
    sub_1B885B0(&Method_AssetData_GetObject_GameObject____76085352);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    v8 = *(_QWORD *)(v5 + 56);
    if ( !v8 )
    {
      sub_1BDA4E8();
      v8 = *(_QWORD *)(v5 + 56);
    }
  }
  v10 = *(unsigned int *)(*(_QWORD *)v8 + 252LL);
  v11 = memset((char *)v18 - ((v10 + 15) & 0x1FFFFFFF0LL), 0, *(_DWORD *)(*(_QWORD *)v8 + 252LL));
  if ( !assetData )
    goto LABEL_12;
  Object_object__48635516 = AssetData__GetObject_object__48635516(
                              assetData,
                              name,
                              (const MethodInfo_2E61E7C *)Method_AssetData_GetObject_GameObject____76085352);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v11 = (void *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Object_object__48635516, 0LL, 0LL);
  if ( ((unsigned __int8)v11 & 1) == 0 )
  {
    if ( Object_object__48635516 )
    {
      v14 = *(__int64 **)(*(_QWORD *)(v5 + 56) + 8LL);
      v15 = *v14;
      v18[0] = (__int64)v18 - ((v10 + 15) & 0x1FFFFFFF0LL);
      ((void (__fastcall *)(__int64, __int64 *, Il2CppObject *, __int64 *, __int64))v14[2])(
        v15,
        v14,
        Object_object__48635516,
        v18,
        v18[0]);
      goto LABEL_11;
    }
LABEL_12:
    sub_1B8880C(v11, v12);
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


Il2CppObject *__fastcall ClassBoardResourceCatalogAssetBundle__GetObject_object_(
        ClassBoardResourceCatalogAssetBundle_o *this,
        AssetData_o *assetData,
        System_String_o *name,
        const MethodInfo_2E7398C *method)
{
  Il2CppObject *Object_object__48635516; // x20

  if ( !method->rgctx_data )
  {
    sub_1B885B0(&Method_AssetData_GetObject_GameObject____76085352);
    this = (ClassBoardResourceCatalogAssetBundle_o *)sub_1B885B0(&UnityEngine_Object_TypeInfo);
    if ( !method->rgctx_data )
      this = (ClassBoardResourceCatalogAssetBundle_o *)sub_1BDA4E8();
  }
  if ( !assetData )
    goto LABEL_11;
  Object_object__48635516 = AssetData__GetObject_object__48635516(
                              assetData,
                              name,
                              (const MethodInfo_2E61E7C *)Method_AssetData_GetObject_GameObject____76085352);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (ClassBoardResourceCatalogAssetBundle_o *)UnityEngine_Object__op_Equality(
                                                     (UnityEngine_Object_o *)Object_object__48635516,
                                                     0LL,
                                                     0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
    return 0LL;
  if ( !Object_object__48635516 )
LABEL_11:
    sub_1B8880C(this, assetData);
  return UnityEngine_GameObject__GetComponent_object_(
           (UnityEngine_GameObject_o *)Object_object__48635516,
           (const MethodInfo_2ECEEB8 *)method->rgctx_data->_1_UnityEngine_GameObject_GetComponent_T_);
}


ClassBoardBlank_o *__fastcall ClassBoardResourceCatalogAssetBundle__GetUniqueBlankObject(
        ClassBoardResourceCatalogAssetBundle_o *this,
        int32_t assetId,
        const MethodInfo *method)
{
  AssetData_o *mainAssetData; // x20
  System_String_o *v5; // x0
  System_String_o *v6; // x0
  int32_t v8; // [xsp+Ch] [xbp-24h] BYREF

  v8 = assetId;
  if ( (byte_4A5E5D8 & 1) == 0 )
  {
    sub_1B885B0(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardBlank___);
    sub_1B885B0(&StringLiteral_4500/*"ClassBoardBlank"*/);
    byte_4A5E5D8 = 1;
  }
  mainAssetData = this->fields.mainAssetData;
  v5 = System_Int32__ToString((int32_t)&v8, 0LL);
  v6 = System_String__Concat_61707032((System_String_o *)StringLiteral_4500/*"ClassBoardBlank"*/, v5, 0LL);
  return (ClassBoardBlank_o *)ClassBoardResourceCatalogAssetBundle__GetObject_object_(
                                this,
                                mainAssetData,
                                v6,
                                (const MethodInfo_2E7398C *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardBlank___);
}


ClassBoardLock_o *__fastcall ClassBoardResourceCatalogAssetBundle__GetUniqueLockObject(
        ClassBoardResourceCatalogAssetBundle_o *this,
        int32_t assetId,
        const MethodInfo *method)
{
  AssetData_o *mainAssetData; // x20
  System_String_o *v5; // x0
  System_String_o *v6; // x0
  int32_t v8; // [xsp+Ch] [xbp-24h] BYREF

  v8 = assetId;
  if ( (byte_4A5E5D9 & 1) == 0 )
  {
    sub_1B885B0(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardLock___);
    sub_1B885B0(&StringLiteral_4503/*"ClassBoardLock"*/);
    byte_4A5E5D9 = 1;
  }
  mainAssetData = this->fields.mainAssetData;
  v5 = System_Int32__ToString((int32_t)&v8, 0LL);
  v6 = System_String__Concat_61707032((System_String_o *)StringLiteral_4503/*"ClassBoardLock"*/, v5, 0LL);
  return (ClassBoardLock_o *)ClassBoardResourceCatalogAssetBundle__GetObject_object_(
                               this,
                               mainAssetData,
                               v6,
                               (const MethodInfo_2E7398C *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardLock___);
}


ClassBoardSquare_o *__fastcall ClassBoardResourceCatalogAssetBundle__GetUniqueSquareObject(
        ClassBoardResourceCatalogAssetBundle_o *this,
        int32_t assetId,
        const MethodInfo *method)
{
  AssetData_o *mainAssetData; // x20
  System_String_o *v5; // x0
  System_String_o *v6; // x0
  int32_t v8; // [xsp+Ch] [xbp-24h] BYREF

  v8 = assetId;
  if ( (byte_4A5E5D7 & 1) == 0 )
  {
    sub_1B885B0(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardSquare___);
    sub_1B885B0(&StringLiteral_4509/*"ClassBoardSquare"*/);
    byte_4A5E5D7 = 1;
  }
  mainAssetData = this->fields.mainAssetData;
  v5 = System_Int32__ToString((int32_t)&v8, 0LL);
  v6 = System_String__Concat_61707032((System_String_o *)StringLiteral_4509/*"ClassBoardSquare"*/, v5, 0LL);
  return (ClassBoardSquare_o *)ClassBoardResourceCatalogAssetBundle__GetObject_object_(
                                 this,
                                 mainAssetData,
                                 v6,
                                 (const MethodInfo_2E7398C *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardSquare___);
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
    sub_1B8880C(assetStorageLoadWrapper, assetBundlePath);
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))loadCallback->fields.m_target)(
    loadCallback->fields.original_method_info,
    0LL,
    *(_QWORD *)&loadCallback->fields.extra_arg);
}


void __fastcall ClassBoardResourceCatalogAssetBundle__LoadEnd(
        ClassBoardResourceCatalogAssetBundle_o *this,
        const MethodInfo *method)
{
  Il2CppObject *v3; // x24
  Il2CppObject *v4; // x23
  Il2CppObject *v5; // x25
  Il2CppObject *v6; // x26
  Il2CppObject *v7; // x27
  Il2CppObject *v8; // x22
  Il2CppObject *v9; // x21
  char *Object_object__48635516; // x0
  __int64 v11; // x1
  char *v12; // x28
  char *v13; // x29
  const MethodInfo *v14; // x5
  char *v15; // x20
  const MethodInfo *v16; // x6
  const MethodInfo *v17; // x5
  int32_t v18; // w2
  int32_t v19; // w3
  int32_t v20; // w2
  int32_t v21; // w3
  int32_t v22; // w2
  int32_t v23; // w3
  struct System_Action_o *loadEndCallback; // x8
  ClassBoardLock_o *lockAsset; // [xsp+8h] [xbp-78h]
  Il2CppObject *v26; // [xsp+10h] [xbp-70h]
  Il2CppObject *Object_object; // [xsp+18h] [xbp-68h]

  if ( (byte_4A5E5D5 & 1) == 0 )
  {
    sub_1B885B0(&Method_AssetData_GetObject_GameObject____76085352);
    sub_1B885B0(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardBackground___);
    sub_1B885B0(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardBlank___);
    sub_1B885B0(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardDisableOpenDialog___);
    sub_1B885B0(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardLine___);
    sub_1B885B0(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardLockOpenConfirmDialog___);
    sub_1B885B0(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardLockReleaseConditionDialog___);
    sub_1B885B0(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardLock___);
    sub_1B885B0(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardSquareDetailDialog___);
    sub_1B885B0(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardSquareOpenConfirmDialog___);
    sub_1B885B0(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardSquare___);
    sub_1B885B0(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardUIController___);
    sub_1B885B0(&StringLiteral_4499/*"ClassBoardBg"*/);
    sub_1B885B0(&StringLiteral_4505/*"ClassBoardLockReleaseConditionDialog"*/);
    sub_1B885B0(&StringLiteral_4502/*"ClassBoardLine"*/);
    sub_1B885B0(&StringLiteral_4510/*"ClassBoardSquareDetailDialog"*/);
    sub_1B885B0(&StringLiteral_4503/*"ClassBoardLock"*/);
    sub_1B885B0(&StringLiteral_4508/*"ClassBoardSelectView"*/);
    sub_1B885B0(&StringLiteral_6811/*"ForwardIconAnimObject"*/);
    sub_1B885B0(&StringLiteral_4500/*"ClassBoardBlank"*/);
    sub_1B885B0(&StringLiteral_4501/*"ClassBoardDisableOpenDialog"*/);
    sub_1B885B0(&StringLiteral_4504/*"ClassBoardLockOpenConfirmDialog"*/);
    sub_1B885B0(&StringLiteral_4509/*"ClassBoardSquare"*/);
    sub_1B885B0(&StringLiteral_4511/*"ClassBoardSquareOpenConfirmDialog"*/);
    sub_1B885B0(&StringLiteral_4512/*"ClassBoardUI"*/);
    byte_4A5E5D5 = 1;
  }
  Object_object = ClassBoardResourceCatalogAssetBundle__GetObject_object_(
                    this,
                    this->fields.mainAssetData,
                    (System_String_o *)StringLiteral_4509/*"ClassBoardSquare"*/,
                    (const MethodInfo_2E7398C *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardSquare___);
  v26 = ClassBoardResourceCatalogAssetBundle__GetObject_object_(
          this,
          this->fields.mainAssetData,
          (System_String_o *)StringLiteral_4502/*"ClassBoardLine"*/,
          (const MethodInfo_2E7398C *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardLine___);
  lockAsset = (ClassBoardLock_o *)ClassBoardResourceCatalogAssetBundle__GetObject_object_(
                                    this,
                                    this->fields.mainAssetData,
                                    (System_String_o *)StringLiteral_4503/*"ClassBoardLock"*/,
                                    (const MethodInfo_2E7398C *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardLock___);
  v3 = ClassBoardResourceCatalogAssetBundle__GetObject_object_(
         this,
         this->fields.mainAssetData,
         (System_String_o *)StringLiteral_4500/*"ClassBoardBlank"*/,
         (const MethodInfo_2E7398C *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardBlank___);
  v4 = ClassBoardResourceCatalogAssetBundle__GetObject_object_(
         this,
         this->fields.mainAssetData,
         (System_String_o *)StringLiteral_4501/*"ClassBoardDisableOpenDialog"*/,
         (const MethodInfo_2E7398C *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardDisableOpenDialog___);
  v5 = ClassBoardResourceCatalogAssetBundle__GetObject_object_(
         this,
         this->fields.mainAssetData,
         (System_String_o *)StringLiteral_4511/*"ClassBoardSquareOpenConfirmDialog"*/,
         (const MethodInfo_2E7398C *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardSquareOpenConfirmDialog___);
  v6 = ClassBoardResourceCatalogAssetBundle__GetObject_object_(
         this,
         this->fields.mainAssetData,
         (System_String_o *)StringLiteral_4504/*"ClassBoardLockOpenConfirmDialog"*/,
         (const MethodInfo_2E7398C *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardLockOpenConfirmDialog___);
  v7 = ClassBoardResourceCatalogAssetBundle__GetObject_object_(
         this,
         this->fields.mainAssetData,
         (System_String_o *)StringLiteral_4505/*"ClassBoardLockReleaseConditionDialog"*/,
         (const MethodInfo_2E7398C *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardLockReleaseConditionDialog___);
  v8 = ClassBoardResourceCatalogAssetBundle__GetObject_object_(
         this,
         this->fields.mainAssetData,
         (System_String_o *)StringLiteral_4510/*"ClassBoardSquareDetailDialog"*/,
         (const MethodInfo_2E7398C *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardSquareDetailDialog___);
  v9 = ClassBoardResourceCatalogAssetBundle__GetObject_object_(
         this,
         this->fields.mainAssetData,
         (System_String_o *)StringLiteral_4512/*"ClassBoardUI"*/,
         (const MethodInfo_2E7398C *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardUIController___);
  Object_object__48635516 = (char *)ClassBoardResourceCatalogAssetBundle__GetObject_object_(
                                      this,
                                      this->fields.modelAssetData,
                                      (System_String_o *)StringLiteral_4499/*"ClassBoardBg"*/,
                                      (const MethodInfo_2E7398C *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardBackground___);
  if ( !this->fields.boardSelectViewAssetData )
    goto LABEL_13;
  v12 = Object_object__48635516;
  Object_object__48635516 = (char *)AssetData__GetObject_object__48635516(
                                      this->fields.boardSelectViewAssetData,
                                      (System_String_o *)StringLiteral_4508/*"ClassBoardSelectView"*/,
                                      (const MethodInfo_2E61E7C *)Method_AssetData_GetObject_GameObject____76085352);
  if ( !this->fields.boardSelectViewAssetData )
    goto LABEL_13;
  v13 = Object_object__48635516;
  Object_object__48635516 = (char *)AssetData__GetObject_object__48635516(
                                      this->fields.boardSelectViewAssetData,
                                      (System_String_o *)StringLiteral_6811/*"ForwardIconAnimObject"*/,
                                      (const MethodInfo_2E61E7C *)Method_AssetData_GetObject_GameObject____76085352);
  if ( !this->fields._Contents_k__BackingField )
    goto LABEL_13;
  v15 = Object_object__48635516;
  ClassBoardResourceContents__SetContents(
    this->fields._Contents_k__BackingField,
    (ClassBoardSquare_o *)Object_object,
    (ClassBoardLine_o *)v26,
    lockAsset,
    (ClassBoardBlank_o *)v3,
    v14);
  Object_object__48635516 = (char *)this->fields._Contents_k__BackingField;
  if ( !Object_object__48635516 )
    goto LABEL_13;
  ClassBoardResourceContents__SetContentsDialog(
    (ClassBoardResourceContents_o *)Object_object__48635516,
    (ClassBoardDisableOpenDialog_o *)v4,
    (ClassBoardSquareOpenConfirmDialog_o *)v5,
    (ClassBoardLockOpenConfirmDialog_o *)v6,
    (ClassBoardLockReleaseConditionDialog_o *)v7,
    (ClassBoardSquareDetailDialog_o *)v8,
    v16);
  Object_object__48635516 = (char *)this->fields._Contents_k__BackingField;
  if ( !Object_object__48635516 )
    goto LABEL_13;
  ClassBoardResourceContents__SetContentsUI(
    (ClassBoardResourceContents_o *)Object_object__48635516,
    (ClassBoardUIController_o *)v9,
    this->fields.boardUiAtlasManagerUnit,
    this->fields.iconAtlasManagerUnit,
    this->fields.classUiAtlasManagerUnit,
    v17);
  Object_object__48635516 = (char *)this->fields._Contents_k__BackingField;
  if ( !Object_object__48635516 )
    goto LABEL_13;
  *((_QWORD *)Object_object__48635516 + 12) = v12;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(Object_object__48635516 + 96), (int32_t)v12, v18, v19);
  Object_object__48635516 = (char *)this->fields._Contents_k__BackingField;
  if ( !Object_object__48635516
    || (*((_QWORD *)Object_object__48635516 + 13) = v13,
        sub_1B88554((ServantStatusBattleListViewItem_o *)(Object_object__48635516 + 104), (int32_t)v13, v20, v21),
        (Object_object__48635516 = (char *)this->fields._Contents_k__BackingField) == 0LL)
    || (*((_QWORD *)Object_object__48635516 + 14) = v15,
        sub_1B88554((ServantStatusBattleListViewItem_o *)(Object_object__48635516 + 112), (int32_t)v15, v22, v23),
        (loadEndCallback = this->fields.loadEndCallback) == 0LL) )
  {
LABEL_13:
    sub_1B8880C(Object_object__48635516, v11);
  }
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))loadEndCallback->fields.m_target)(
    loadEndCallback->fields.original_method_info,
    *(_QWORD *)&loadEndCallback->fields.extra_arg);
}


void __fastcall ClassBoardResourceCatalogAssetBundle__LoadSystemAsset(
        ClassBoardResourceCatalogAssetBundle_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  AssetStorageLoadWrapper_o *assetStorageLoadWrapper; // x20
  AtlasManagerUnit_o *v7; // x21
  int32_t v8; // w2
  int32_t v9; // w3
  AssetStorageLoadWrapper_o *v10; // x20
  AtlasManagerUnit_o *v11; // x21
  int32_t v12; // w2
  int32_t v13; // w3
  AssetStorageLoadWrapper_o *v14; // x20
  AtlasManagerUnit_o *v15; // x21
  int32_t v16; // w2
  int32_t v17; // w3
  __int64 v18; // x20
  System_Action_object__o *v19; // x21
  ChainableActionBase_o *v20; // x0
  __int64 v21; // x1
  int32_t v22; // w2
  int32_t v23; // w3
  System_Action_object__o *v24; // x21
  int32_t v25; // w2
  int32_t v26; // w3
  System_Action_object__o *v27; // x21
  int32_t v28; // w2
  int32_t v29; // w3
  System_Action_object__o *v30; // x21
  int32_t v31; // w2
  int32_t v32; // w3
  System_Action_object__o *v33; // x21
  int32_t v34; // w2
  int32_t v35; // w3
  System_Action_object__o *v36; // x21
  int32_t v37; // w2
  int32_t v38; // w3
  ChainableActionParallel_o *v39; // x21
  __int64 v40; // x20
  System_Action_o *v41; // x22
  int32_t v42; // w2
  int32_t v43; // w3

  if ( (byte_4A5E5D4 & 1) == 0 )
  {
    sub_1B885B0(&System_Action___TypeInfo);
    sub_1B885B0(&System_Action_Action____TypeInfo);
    sub_1B885B0(&System_Action_Action__TypeInfo);
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&AtlasManagerUnit_TypeInfo);
    sub_1B885B0(&ChainableActionParallel_TypeInfo);
    sub_1B885B0(&Method_ClassBoardResourceCatalogAssetBundle_LoadEnd__);
    sub_1B885B0(&Method_ClassBoardResourceCatalogAssetBundle__LoadSystemAsset_b__32_0__);
    sub_1B885B0(&Method_ClassBoardResourceCatalogAssetBundle__LoadSystemAsset_b__32_1__);
    sub_1B885B0(&Method_ClassBoardResourceCatalogAssetBundle__LoadSystemAsset_b__32_2__);
    sub_1B885B0(&Method_ClassBoardResourceCatalogAssetBundle__LoadSystemAsset_b__32_3__);
    sub_1B885B0(&Method_ClassBoardResourceCatalogAssetBundle__LoadSystemAsset_b__32_4__);
    sub_1B885B0(&Method_ClassBoardResourceCatalogAssetBundle__LoadSystemAsset_b__32_5__);
    sub_1B885B0(&StringLiteral_4498/*"ClassBoard/UI/DownloadClassBoardUIAtlas"*/);
    sub_1B885B0(&StringLiteral_4497/*"ClassBoard/UI/DownloadClassBoardClassUIAtlas"*/);
    sub_1B885B0(&StringLiteral_4494/*"ClassBoard/Icon/DownloadClassBoardIconAtlas"*/);
    byte_4A5E5D4 = 1;
  }
  this->fields.loadEndCallback = callback;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.loadEndCallback,
    (int32_t)callback,
    (int32_t)method,
    v3);
  assetStorageLoadWrapper = this->fields.assetStorageLoadWrapper;
  v7 = (AtlasManagerUnit_o *)sub_1B887FC(AtlasManagerUnit_TypeInfo);
  AtlasManagerUnit___ctor(v7, (System_String_o *)StringLiteral_4498/*"ClassBoard/UI/DownloadClassBoardUIAtlas"*/, assetStorageLoadWrapper, 0LL);
  this->fields.boardUiAtlasManagerUnit = v7;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.boardUiAtlasManagerUnit, (int32_t)v7, v8, v9);
  v10 = this->fields.assetStorageLoadWrapper;
  v11 = (AtlasManagerUnit_o *)sub_1B887FC(AtlasManagerUnit_TypeInfo);
  AtlasManagerUnit___ctor(v11, (System_String_o *)StringLiteral_4497/*"ClassBoard/UI/DownloadClassBoardClassUIAtlas"*/, v10, 0LL);
  this->fields.classUiAtlasManagerUnit = v11;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.classUiAtlasManagerUnit, (int32_t)v11, v12, v13);
  v14 = this->fields.assetStorageLoadWrapper;
  v15 = (AtlasManagerUnit_o *)sub_1B887FC(AtlasManagerUnit_TypeInfo);
  AtlasManagerUnit___ctor(v15, (System_String_o *)StringLiteral_4494/*"ClassBoard/Icon/DownloadClassBoardIconAtlas"*/, v14, 0LL);
  this->fields.iconAtlasManagerUnit = v15;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.iconAtlasManagerUnit, (int32_t)v15, v16, v17);
  v18 = sub_1B88658(System_Action_Action____TypeInfo, 6LL);
  v19 = (System_Action_object__o *)sub_1B887FC(System_Action_Action__TypeInfo);
  System_Action_object____ctor(
    v19,
    (Il2CppObject *)this,
    Method_ClassBoardResourceCatalogAssetBundle__LoadSystemAsset_b__32_0__,
    0LL);
  if ( !v18 )
    goto LABEL_16;
  if ( !*(_DWORD *)(v18 + 24) )
    goto LABEL_15;
  *(_QWORD *)(v18 + 32) = v19;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v18 + 32), (int32_t)v19, v22, v23);
  v24 = (System_Action_object__o *)sub_1B887FC(System_Action_Action__TypeInfo);
  System_Action_object____ctor(
    v24,
    (Il2CppObject *)this,
    Method_ClassBoardResourceCatalogAssetBundle__LoadSystemAsset_b__32_1__,
    0LL);
  if ( *(_DWORD *)(v18 + 24) <= 1u )
    goto LABEL_15;
  *(_QWORD *)(v18 + 40) = v24;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v18 + 40), (int32_t)v24, v25, v26);
  v27 = (System_Action_object__o *)sub_1B887FC(System_Action_Action__TypeInfo);
  System_Action_object____ctor(
    v27,
    (Il2CppObject *)this,
    Method_ClassBoardResourceCatalogAssetBundle__LoadSystemAsset_b__32_2__,
    0LL);
  if ( *(_DWORD *)(v18 + 24) <= 2u )
    goto LABEL_15;
  *(_QWORD *)(v18 + 48) = v27;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v18 + 48), (int32_t)v27, v28, v29);
  v30 = (System_Action_object__o *)sub_1B887FC(System_Action_Action__TypeInfo);
  System_Action_object____ctor(
    v30,
    (Il2CppObject *)this,
    Method_ClassBoardResourceCatalogAssetBundle__LoadSystemAsset_b__32_3__,
    0LL);
  if ( *(_DWORD *)(v18 + 24) <= 3u )
    goto LABEL_15;
  *(_QWORD *)(v18 + 56) = v30;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v18 + 56), (int32_t)v30, v31, v32);
  v33 = (System_Action_object__o *)sub_1B887FC(System_Action_Action__TypeInfo);
  System_Action_object____ctor(
    v33,
    (Il2CppObject *)this,
    Method_ClassBoardResourceCatalogAssetBundle__LoadSystemAsset_b__32_4__,
    0LL);
  if ( *(_DWORD *)(v18 + 24) <= 4u )
    goto LABEL_15;
  *(_QWORD *)(v18 + 64) = v33;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v18 + 64), (int32_t)v33, v34, v35);
  v36 = (System_Action_object__o *)sub_1B887FC(System_Action_Action__TypeInfo);
  System_Action_object____ctor(
    v36,
    (Il2CppObject *)this,
    Method_ClassBoardResourceCatalogAssetBundle__LoadSystemAsset_b__32_5__,
    0LL);
  if ( *(_DWORD *)(v18 + 24) <= 5u )
    goto LABEL_15;
  *(_QWORD *)(v18 + 72) = v36;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v18 + 72), (int32_t)v36, v37, v38);
  v39 = (ChainableActionParallel_o *)sub_1B887FC(ChainableActionParallel_TypeInfo);
  ChainableActionParallel___ctor_46557384(v39, (System_Action_Action__array *)v18, 0LL);
  v40 = sub_1B88658(System_Action___TypeInfo, 1LL);
  v41 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v41, (Il2CppObject *)this, Method_ClassBoardResourceCatalogAssetBundle_LoadEnd__, 0LL);
  if ( !v40 )
    goto LABEL_16;
  if ( !*(_DWORD *)(v40 + 24) )
LABEL_15:
    sub_1B88814(v20, v21);
  *(_QWORD *)(v40 + 32) = v41;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v40 + 32), (int32_t)v41, v42, v43);
  if ( !v39 || (v20 = ChainableActionBase__Final((ChainableActionBase_o *)v39, (System_Action_array *)v40, 0LL)) == 0LL )
LABEL_16:
    sub_1B8880C(v20, v21);
  ChainableActionBase__Execute(v20, 0LL);
}


void __fastcall ClassBoardResourceCatalogAssetBundle__ReleaseAll(
        ClassBoardResourceCatalogAssetBundle_o *this,
        const MethodInfo *method)
{
  AssetStorageLoadWrapper_o *assetStorageLoadWrapper; // x0

  assetStorageLoadWrapper = this->fields.assetStorageLoadWrapper;
  if ( !assetStorageLoadWrapper )
    sub_1B8880C(0LL, method);
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
  int32_t v8; // w2
  int32_t v9; // w3
  int32_t v10; // w2
  int32_t v11; // w3
  AtlasManagerUnit_o *boardUiAtlasManagerUnit; // x0
  AssetStorageLoadWrapper_o *assetStorageLoadWrapper; // x22
  AtlasManagerUnit_o *v14; // x23
  int32_t v15; // w2
  int32_t v16; // w3
  AtlasManagerUnit_o *v17; // x19
  System_Action_o *v18; // x21

  if ( (byte_4A5E5D6 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&AtlasManagerUnit_TypeInfo);
    sub_1B885B0(&Method_ClassBoardResourceCatalogAssetBundle___c__DisplayClass35_0__ReloadBoardUIAtlas_b__0__);
    sub_1B885B0(&ClassBoardResourceCatalogAssetBundle___c__DisplayClass35_0_TypeInfo);
    sub_1B885B0(&StringLiteral_4498/*"ClassBoard/UI/DownloadClassBoardUIAtlas"*/);
    byte_4A5E5D6 = 1;
  }
  v5 = sub_1B887FC(ClassBoardResourceCatalogAssetBundle___c__DisplayClass35_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    goto LABEL_8;
  *(_QWORD *)(v5 + 16) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 16), (int32_t)this, v8, v9);
  *(_QWORD *)(v5 + 24) = callback;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 24), (int32_t)callback, v10, v11);
  boardUiAtlasManagerUnit = this->fields.boardUiAtlasManagerUnit;
  if ( boardUiAtlasManagerUnit )
    AtlasManagerUnit__Release(boardUiAtlasManagerUnit, 0LL);
  assetStorageLoadWrapper = this->fields.assetStorageLoadWrapper;
  v14 = (AtlasManagerUnit_o *)sub_1B887FC(AtlasManagerUnit_TypeInfo);
  AtlasManagerUnit___ctor(v14, (System_String_o *)StringLiteral_4498/*"ClassBoard/UI/DownloadClassBoardUIAtlas"*/, assetStorageLoadWrapper, 0LL);
  this->fields.boardUiAtlasManagerUnit = v14;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.boardUiAtlasManagerUnit, (int32_t)v14, v15, v16);
  v17 = this->fields.boardUiAtlasManagerUnit;
  v18 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(
    v18,
    (Il2CppObject *)v5,
    Method_ClassBoardResourceCatalogAssetBundle___c__DisplayClass35_0__ReloadBoardUIAtlas_b__0__,
    0LL);
  if ( !v17 )
LABEL_8:
    sub_1B8880C(v6, v7);
  AtlasManagerUnit__Load(v17, v18, 1, 0LL);
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
    sub_1B8880C(0LL, sprite);
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
  int32_t v8; // w2
  int32_t v9; // w3
  int32_t v10; // w2
  int32_t v11; // w3
  AssetLoader_LoadEndDataHandler_o *v12; // x20
  const MethodInfo *v13; // x3

  if ( (byte_4A5E5DB & 1) == 0 )
  {
    sub_1B885B0(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1B885B0(&Method_ClassBoardResourceCatalogAssetBundle___c__DisplayClass32_0__LoadSystemAsset_b__6__);
    sub_1B885B0(&ClassBoardResourceCatalogAssetBundle___c__DisplayClass32_0_TypeInfo);
    sub_1B885B0(&StringLiteral_4495/*"ClassBoard/Main"*/);
    byte_4A5E5DB = 1;
  }
  v5 = sub_1B887FC(ClassBoardResourceCatalogAssetBundle___c__DisplayClass32_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    sub_1B8880C(v6, v7);
  *(_QWORD *)(v5 + 24) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 24), (int32_t)this, v8, v9);
  *(_QWORD *)(v5 + 16) = f;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 16), (int32_t)f, v10, v11);
  v12 = (AssetLoader_LoadEndDataHandler_o *)sub_1B887FC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v12,
    (Il2CppObject *)v5,
    Method_ClassBoardResourceCatalogAssetBundle___c__DisplayClass32_0__LoadSystemAsset_b__6__,
    0LL);
  ClassBoardResourceCatalogAssetBundle__LoadAssetStorage(this, (System_String_o *)StringLiteral_4495/*"ClassBoard/Main"*/, v12, v13);
}


void __fastcall ClassBoardResourceCatalogAssetBundle___LoadSystemAsset_b__32_1(
        ClassBoardResourceCatalogAssetBundle_o *this,
        System_Action_o *f,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  int32_t v10; // w2
  int32_t v11; // w3
  AssetLoader_LoadEndDataHandler_o *v12; // x20
  const MethodInfo *v13; // x3

  if ( (byte_4A5E5DC & 1) == 0 )
  {
    sub_1B885B0(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1B885B0(&Method_ClassBoardResourceCatalogAssetBundle___c__DisplayClass32_1__LoadSystemAsset_b__7__);
    sub_1B885B0(&ClassBoardResourceCatalogAssetBundle___c__DisplayClass32_1_TypeInfo);
    sub_1B885B0(&StringLiteral_4482/*"ClassBoard/Bg"*/);
    byte_4A5E5DC = 1;
  }
  v5 = sub_1B887FC(ClassBoardResourceCatalogAssetBundle___c__DisplayClass32_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    sub_1B8880C(v6, v7);
  *(_QWORD *)(v5 + 24) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 24), (int32_t)this, v8, v9);
  *(_QWORD *)(v5 + 16) = f;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 16), (int32_t)f, v10, v11);
  v12 = (AssetLoader_LoadEndDataHandler_o *)sub_1B887FC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v12,
    (Il2CppObject *)v5,
    Method_ClassBoardResourceCatalogAssetBundle___c__DisplayClass32_1__LoadSystemAsset_b__7__,
    0LL);
  ClassBoardResourceCatalogAssetBundle__LoadAssetStorage(this, (System_String_o *)StringLiteral_4482/*"ClassBoard/Bg"*/, v12, v13);
}


void __fastcall ClassBoardResourceCatalogAssetBundle___LoadSystemAsset_b__32_2(
        ClassBoardResourceCatalogAssetBundle_o *this,
        System_Action_o *f,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  int32_t v10; // w2
  int32_t v11; // w3
  AssetLoader_LoadEndDataHandler_o *v12; // x20
  const MethodInfo *v13; // x3

  if ( (byte_4A5E5DD & 1) == 0 )
  {
    sub_1B885B0(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1B885B0(&Method_ClassBoardResourceCatalogAssetBundle___c__DisplayClass32_2__LoadSystemAsset_b__8__);
    sub_1B885B0(&ClassBoardResourceCatalogAssetBundle___c__DisplayClass32_2_TypeInfo);
    sub_1B885B0(&StringLiteral_4496/*"ClassBoard/Select"*/);
    byte_4A5E5DD = 1;
  }
  v5 = sub_1B887FC(ClassBoardResourceCatalogAssetBundle___c__DisplayClass32_2_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    sub_1B8880C(v6, v7);
  *(_QWORD *)(v5 + 24) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 24), (int32_t)this, v8, v9);
  *(_QWORD *)(v5 + 16) = f;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 16), (int32_t)f, v10, v11);
  v12 = (AssetLoader_LoadEndDataHandler_o *)sub_1B887FC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v12,
    (Il2CppObject *)v5,
    Method_ClassBoardResourceCatalogAssetBundle___c__DisplayClass32_2__LoadSystemAsset_b__8__,
    0LL);
  ClassBoardResourceCatalogAssetBundle__LoadAssetStorage(this, (System_String_o *)StringLiteral_4496/*"ClassBoard/Select"*/, v12, v13);
}


void __fastcall ClassBoardResourceCatalogAssetBundle___LoadSystemAsset_b__32_3(
        ClassBoardResourceCatalogAssetBundle_o *this,
        System_Action_o *f,
        const MethodInfo *method)
{
  AtlasManagerUnit_o *boardUiAtlasManagerUnit; // x0

  boardUiAtlasManagerUnit = this->fields.boardUiAtlasManagerUnit;
  if ( !boardUiAtlasManagerUnit )
    sub_1B8880C(0LL, f);
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
    sub_1B8880C(0LL, f);
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
    sub_1B8880C(0LL, f);
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
  int32_t v3; // w3
  struct ClassBoardResourceCatalogAssetBundle_o *_4__this; // x0
  struct System_Action_o *f; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (_4__this->fields.mainAssetData = asset,
        sub_1B88554(
          (ServantStatusBattleListViewItem_o *)&_4__this->fields.mainAssetData,
          (int32_t)asset,
          (int32_t)method,
          v3),
        (f = this->fields.f) == 0LL) )
  {
    sub_1B8880C(_4__this, asset);
  }
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))f->fields.m_target)(
    f->fields.original_method_info,
    *(_QWORD *)&f->fields.extra_arg);
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
  int32_t v3; // w3
  struct ClassBoardResourceCatalogAssetBundle_o *_4__this; // x0
  struct System_Action_o *f; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (_4__this->fields.modelAssetData = asset,
        sub_1B88554(
          (ServantStatusBattleListViewItem_o *)&_4__this->fields.modelAssetData,
          (int32_t)asset,
          (int32_t)method,
          v3),
        (f = this->fields.f) == 0LL) )
  {
    sub_1B8880C(_4__this, asset);
  }
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))f->fields.m_target)(
    f->fields.original_method_info,
    *(_QWORD *)&f->fields.extra_arg);
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
  int32_t v3; // w3
  struct ClassBoardResourceCatalogAssetBundle_o *_4__this; // x0
  struct System_Action_o *f; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (_4__this->fields.boardSelectViewAssetData = asset,
        sub_1B88554(
          (ServantStatusBattleListViewItem_o *)&_4__this->fields.boardSelectViewAssetData,
          (int32_t)asset,
          (int32_t)method,
          v3),
        (f = this->fields.f) == 0LL) )
  {
    sub_1B8880C(_4__this, asset);
  }
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))f->fields.m_target)(
    f->fields.original_method_info,
    *(_QWORD *)&f->fields.extra_arg);
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
  int32_t v2; // w2
  int32_t v3; // w3
  struct ClassBoardResourceCatalogAssetBundle_o *_4__this; // x8
  ClassBoardResourceCatalogAssetBundle___c__DisplayClass35_0_o *v5; // x19
  struct System_Action_o *boardUiAtlasManagerUnit; // x1

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (v5 = this,
        (this = (ClassBoardResourceCatalogAssetBundle___c__DisplayClass35_0_o *)_4__this->fields._Contents_k__BackingField) == 0LL) )
  {
    sub_1B8880C(this, method);
  }
  boardUiAtlasManagerUnit = (struct System_Action_o *)_4__this->fields.boardUiAtlasManagerUnit;
  this[3].fields.callback = boardUiAtlasManagerUnit;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this[3].fields.callback, (int32_t)boardUiAtlasManagerUnit, v2, v3);
  ActionExtensions__Call(v5->fields.callback, 0LL);
}