void __fastcall ClassBoardResourceCatalogAssetBundle___ctor(
        ClassBoardResourceCatalogAssetBundle_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *v4; // x20
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7
  AssetStorageLoadWrapper_o *v11; // x20
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7

  if ( (byte_4C00DF4 & 1) == 0 )
  {
    sub_1C2E12C(&AssetStorageLoadWrapper_TypeInfo, method);
    sub_1C2E12C(&ClassBoardResourceContents_TypeInfo, v3);
    byte_4C00DF4 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v4 = (Il2CppObject *)sub_1C2E378(ClassBoardResourceContents_TypeInfo);
  System_Object___ctor(v4, 0LL);
  this->fields._Contents_k__BackingField = (struct ClassBoardResourceContents_o *)v4;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&this->fields._Contents_k__BackingField,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  v11 = (AssetStorageLoadWrapper_o *)sub_1C2E378(AssetStorageLoadWrapper_TypeInfo);
  AssetStorageLoadWrapper___ctor(v11, 0LL);
  this->fields.assetStorageLoadWrapper = v11;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields, (int64_t)v11, v12, v13, v14, v15, v16, v17);
}


System_String_o *__fastcall ClassBoardResourceCatalogAssetBundle__GetIconAtlasPath(
        ClassBoardResourceCatalogAssetBundle_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C00DFB & 1) == 0 )
  {
    sub_1C2E12C(&StringLiteral_4576/*"ClassBoard/Icon/DownloadClassBoardIconAtlas"*/, method);
    byte_4C00DFB = 1;
  }
  return (System_String_o *)StringLiteral_4576/*"ClassBoard/Icon/DownloadClassBoardIconAtlas"*/;
}


// local variable allocation has failed, the output may be wrong!
Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o __fastcall ClassBoardResourceCatalogAssetBundle__GetObject___Il2CppFullySharedGenericType_(
        ClassBoardResourceCatalogAssetBundle_o *this,
        AssetData_o *assetData,
        System_String_o *name,
        const MethodInfo_2FC56F4 *method)
{
  __int64 v4; // x4
  __int64 v5; // x20
  __int64 v8; // x8
  __int64 v10; // x1
  __int64 v11; // x21
  void *v12; // x0
  __int64 v13; // x1
  Il2CppObject *Object_object__50017172; // x23
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
    sub_1C2E12C(&Method_AssetData_GetObject_GameObject____77757312, assetData);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v10);
    v8 = *(_QWORD *)(v5 + 56);
    if ( !v8 )
    {
      sub_1C80064();
      v8 = *(_QWORD *)(v5 + 56);
    }
  }
  v11 = *(unsigned int *)(*(_QWORD *)v8 + 252LL);
  v12 = memset((char *)v19 - ((v11 + 15) & 0x1FFFFFFF0LL), 0, *(_DWORD *)(*(_QWORD *)v8 + 252LL));
  if ( !assetData )
    goto LABEL_12;
  Object_object__50017172 = AssetData__GetObject_object__50017172(
                              assetData,
                              name,
                              (const MethodInfo_2FB3394 *)Method_AssetData_GetObject_GameObject____77757312);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v12 = (void *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Object_object__50017172, 0LL, 0LL);
  if ( ((unsigned __int8)v12 & 1) == 0 )
  {
    if ( Object_object__50017172 )
    {
      v15 = *(__int64 **)(*(_QWORD *)(v5 + 56) + 8LL);
      v16 = *v15;
      v19[0] = (__int64)v19 - ((v11 + 15) & 0x1FFFFFFF0LL);
      ((void (__fastcall *)(__int64, __int64 *, Il2CppObject *, __int64 *, __int64))v15[2])(
        v16,
        v15,
        Object_object__50017172,
        v19,
        v19[0]);
      goto LABEL_11;
    }
LABEL_12:
    sub_1C2E388(v12, v13);
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
        const MethodInfo_2FC5630 *method)
{
  __int64 v7; // x1
  Il2CppObject *Object_object__50017172; // x20

  if ( !method->rgctx_data )
  {
    sub_1C2E12C(&Method_AssetData_GetObject_GameObject____77757312, assetData);
    this = (ClassBoardResourceCatalogAssetBundle_o *)sub_1C2E12C(&UnityEngine_Object_TypeInfo, v7);
    if ( !method->rgctx_data )
      this = (ClassBoardResourceCatalogAssetBundle_o *)sub_1C80064();
  }
  if ( !assetData )
    goto LABEL_11;
  Object_object__50017172 = AssetData__GetObject_object__50017172(
                              assetData,
                              name,
                              (const MethodInfo_2FB3394 *)Method_AssetData_GetObject_GameObject____77757312);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (ClassBoardResourceCatalogAssetBundle_o *)UnityEngine_Object__op_Equality(
                                                     (UnityEngine_Object_o *)Object_object__50017172,
                                                     0LL,
                                                     0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
    return 0LL;
  if ( !Object_object__50017172 )
LABEL_11:
    sub_1C2E388(this, assetData);
  return UnityEngine_GameObject__GetComponent_object_(
           (UnityEngine_GameObject_o *)Object_object__50017172,
           (const MethodInfo_3022B0C *)method->rgctx_data->_1_UnityEngine_GameObject_GetComponent_T_);
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
  if ( (byte_4C00DF9 & 1) == 0 )
  {
    sub_1C2E12C(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardBlank___, *(_QWORD *)&assetId);
    sub_1C2E12C(&StringLiteral_4582/*"ClassBoardBlank"*/, v4);
    byte_4C00DF9 = 1;
  }
  mainAssetData = this->fields.mainAssetData;
  v6 = System_Int32__ToString((int32_t)&v9, 0LL);
  v7 = System_String__Concat_63235584((System_String_o *)StringLiteral_4582/*"ClassBoardBlank"*/, v6, 0LL);
  return (ClassBoardBlank_o *)ClassBoardResourceCatalogAssetBundle__GetObject_object_(
                                this,
                                mainAssetData,
                                v7,
                                (const MethodInfo_2FC5630 *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardBlank___);
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
  if ( (byte_4C00DFA & 1) == 0 )
  {
    sub_1C2E12C(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardLock___, *(_QWORD *)&assetId);
    sub_1C2E12C(&StringLiteral_4585/*"ClassBoardLock"*/, v4);
    byte_4C00DFA = 1;
  }
  mainAssetData = this->fields.mainAssetData;
  v6 = System_Int32__ToString((int32_t)&v9, 0LL);
  v7 = System_String__Concat_63235584((System_String_o *)StringLiteral_4585/*"ClassBoardLock"*/, v6, 0LL);
  return (ClassBoardLock_o *)ClassBoardResourceCatalogAssetBundle__GetObject_object_(
                               this,
                               mainAssetData,
                               v7,
                               (const MethodInfo_2FC5630 *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardLock___);
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
  if ( (byte_4C00DF8 & 1) == 0 )
  {
    sub_1C2E12C(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardSquare___, *(_QWORD *)&assetId);
    sub_1C2E12C(&StringLiteral_4591/*"ClassBoardSquare"*/, v4);
    byte_4C00DF8 = 1;
  }
  mainAssetData = this->fields.mainAssetData;
  v6 = System_Int32__ToString((int32_t)&v9, 0LL);
  v7 = System_String__Concat_63235584((System_String_o *)StringLiteral_4591/*"ClassBoardSquare"*/, v6, 0LL);
  return (ClassBoardSquare_o *)ClassBoardResourceCatalogAssetBundle__GetObject_object_(
                                 this,
                                 mainAssetData,
                                 v7,
                                 (const MethodInfo_2FC5630 *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardSquare___);
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
    sub_1C2E388(assetStorageLoadWrapper, assetBundlePath);
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
  Il2CppObject *v27; // x24
  Il2CppObject *v28; // x23
  Il2CppObject *v29; // x25
  Il2CppObject *v30; // x26
  Il2CppObject *v31; // x27
  Il2CppObject *v32; // x22
  Il2CppObject *v33; // x21
  char *Object_object__50017172; // x0
  __int64 v35; // x1
  int64_t v36; // x28
  int64_t v37; // x29
  const MethodInfo *v38; // x5
  int64_t v39; // x20
  const MethodInfo *v40; // x6
  const MethodInfo *v41; // x5
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  int64_t v54; // x2
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7
  struct System_Action_o *loadEndCallback; // x8
  ClassBoardLock_o *lockAsset; // [xsp+8h] [xbp-78h]
  Il2CppObject *v62; // [xsp+10h] [xbp-70h]
  Il2CppObject *Object_object; // [xsp+18h] [xbp-68h]

  if ( (byte_4C00DF6 & 1) == 0 )
  {
    sub_1C2E12C(&Method_AssetData_GetObject_GameObject____77757312, method);
    sub_1C2E12C(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardBackground___, v3);
    sub_1C2E12C(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardBlank___, v4);
    sub_1C2E12C(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardDisableOpenDialog___, v5);
    sub_1C2E12C(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardLine___, v6);
    sub_1C2E12C(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardLockOpenConfirmDialog___, v7);
    sub_1C2E12C(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardLockReleaseConditionDialog___, v8);
    sub_1C2E12C(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardLock___, v9);
    sub_1C2E12C(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardSquareDetailDialog___, v10);
    sub_1C2E12C(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardSquareOpenConfirmDialog___, v11);
    sub_1C2E12C(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardSquare___, v12);
    sub_1C2E12C(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardUIController___, v13);
    sub_1C2E12C(&StringLiteral_4581/*"ClassBoardBg"*/, v14);
    sub_1C2E12C(&StringLiteral_4587/*"ClassBoardLockReleaseConditionDialog"*/, v15);
    sub_1C2E12C(&StringLiteral_4584/*"ClassBoardLine"*/, v16);
    sub_1C2E12C(&StringLiteral_4592/*"ClassBoardSquareDetailDialog"*/, v17);
    sub_1C2E12C(&StringLiteral_4585/*"ClassBoardLock"*/, v18);
    sub_1C2E12C(&StringLiteral_4590/*"ClassBoardSelectView"*/, v19);
    sub_1C2E12C(&StringLiteral_6976/*"ForwardIconAnimObject"*/, v20);
    sub_1C2E12C(&StringLiteral_4582/*"ClassBoardBlank"*/, v21);
    sub_1C2E12C(&StringLiteral_4583/*"ClassBoardDisableOpenDialog"*/, v22);
    sub_1C2E12C(&StringLiteral_4586/*"ClassBoardLockOpenConfirmDialog"*/, v23);
    sub_1C2E12C(&StringLiteral_4591/*"ClassBoardSquare"*/, v24);
    sub_1C2E12C(&StringLiteral_4593/*"ClassBoardSquareOpenConfirmDialog"*/, v25);
    sub_1C2E12C(&StringLiteral_4594/*"ClassBoardUI"*/, v26);
    byte_4C00DF6 = 1;
  }
  Object_object = ClassBoardResourceCatalogAssetBundle__GetObject_object_(
                    this,
                    this->fields.mainAssetData,
                    (System_String_o *)StringLiteral_4591/*"ClassBoardSquare"*/,
                    (const MethodInfo_2FC5630 *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardSquare___);
  v62 = ClassBoardResourceCatalogAssetBundle__GetObject_object_(
          this,
          this->fields.mainAssetData,
          (System_String_o *)StringLiteral_4584/*"ClassBoardLine"*/,
          (const MethodInfo_2FC5630 *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardLine___);
  lockAsset = (ClassBoardLock_o *)ClassBoardResourceCatalogAssetBundle__GetObject_object_(
                                    this,
                                    this->fields.mainAssetData,
                                    (System_String_o *)StringLiteral_4585/*"ClassBoardLock"*/,
                                    (const MethodInfo_2FC5630 *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardLock___);
  v27 = ClassBoardResourceCatalogAssetBundle__GetObject_object_(
          this,
          this->fields.mainAssetData,
          (System_String_o *)StringLiteral_4582/*"ClassBoardBlank"*/,
          (const MethodInfo_2FC5630 *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardBlank___);
  v28 = ClassBoardResourceCatalogAssetBundle__GetObject_object_(
          this,
          this->fields.mainAssetData,
          (System_String_o *)StringLiteral_4583/*"ClassBoardDisableOpenDialog"*/,
          (const MethodInfo_2FC5630 *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardDisableOpenDialog___);
  v29 = ClassBoardResourceCatalogAssetBundle__GetObject_object_(
          this,
          this->fields.mainAssetData,
          (System_String_o *)StringLiteral_4593/*"ClassBoardSquareOpenConfirmDialog"*/,
          (const MethodInfo_2FC5630 *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardSquareOpenConfirmDialog___);
  v30 = ClassBoardResourceCatalogAssetBundle__GetObject_object_(
          this,
          this->fields.mainAssetData,
          (System_String_o *)StringLiteral_4586/*"ClassBoardLockOpenConfirmDialog"*/,
          (const MethodInfo_2FC5630 *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardLockOpenConfirmDialog___);
  v31 = ClassBoardResourceCatalogAssetBundle__GetObject_object_(
          this,
          this->fields.mainAssetData,
          (System_String_o *)StringLiteral_4587/*"ClassBoardLockReleaseConditionDialog"*/,
          (const MethodInfo_2FC5630 *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardLockReleaseConditionDialog___);
  v32 = ClassBoardResourceCatalogAssetBundle__GetObject_object_(
          this,
          this->fields.mainAssetData,
          (System_String_o *)StringLiteral_4592/*"ClassBoardSquareDetailDialog"*/,
          (const MethodInfo_2FC5630 *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardSquareDetailDialog___);
  v33 = ClassBoardResourceCatalogAssetBundle__GetObject_object_(
          this,
          this->fields.mainAssetData,
          (System_String_o *)StringLiteral_4594/*"ClassBoardUI"*/,
          (const MethodInfo_2FC5630 *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardUIController___);
  Object_object__50017172 = (char *)ClassBoardResourceCatalogAssetBundle__GetObject_object_(
                                      this,
                                      this->fields.modelAssetData,
                                      (System_String_o *)StringLiteral_4581/*"ClassBoardBg"*/,
                                      (const MethodInfo_2FC5630 *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardBackground___);
  if ( !this->fields.boardSelectViewAssetData )
    goto LABEL_13;
  v36 = (int64_t)Object_object__50017172;
  Object_object__50017172 = (char *)AssetData__GetObject_object__50017172(
                                      this->fields.boardSelectViewAssetData,
                                      (System_String_o *)StringLiteral_4590/*"ClassBoardSelectView"*/,
                                      (const MethodInfo_2FB3394 *)Method_AssetData_GetObject_GameObject____77757312);
  if ( !this->fields.boardSelectViewAssetData )
    goto LABEL_13;
  v37 = (int64_t)Object_object__50017172;
  Object_object__50017172 = (char *)AssetData__GetObject_object__50017172(
                                      this->fields.boardSelectViewAssetData,
                                      (System_String_o *)StringLiteral_6976/*"ForwardIconAnimObject"*/,
                                      (const MethodInfo_2FB3394 *)Method_AssetData_GetObject_GameObject____77757312);
  if ( !this->fields._Contents_k__BackingField )
    goto LABEL_13;
  v39 = (int64_t)Object_object__50017172;
  ClassBoardResourceContents__SetContents(
    this->fields._Contents_k__BackingField,
    (ClassBoardSquare_o *)Object_object,
    (ClassBoardLine_o *)v62,
    lockAsset,
    (ClassBoardBlank_o *)v27,
    v38);
  Object_object__50017172 = (char *)this->fields._Contents_k__BackingField;
  if ( !Object_object__50017172 )
    goto LABEL_13;
  ClassBoardResourceContents__SetContentsDialog(
    (ClassBoardResourceContents_o *)Object_object__50017172,
    (ClassBoardDisableOpenDialog_o *)v28,
    (ClassBoardSquareOpenConfirmDialog_o *)v29,
    (ClassBoardLockOpenConfirmDialog_o *)v30,
    (ClassBoardLockReleaseConditionDialog_o *)v31,
    (ClassBoardSquareDetailDialog_o *)v32,
    v40);
  Object_object__50017172 = (char *)this->fields._Contents_k__BackingField;
  if ( !Object_object__50017172 )
    goto LABEL_13;
  ClassBoardResourceContents__SetContentsUI(
    (ClassBoardResourceContents_o *)Object_object__50017172,
    (ClassBoardUIController_o *)v33,
    this->fields.boardUiAtlasManagerUnit,
    this->fields.iconAtlasManagerUnit,
    this->fields.classUiAtlasManagerUnit,
    v41);
  Object_object__50017172 = (char *)this->fields._Contents_k__BackingField;
  if ( !Object_object__50017172 )
    goto LABEL_13;
  *((_QWORD *)Object_object__50017172 + 12) = v36;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(Object_object__50017172 + 96), v36, v42, v43, v44, v45, v46, v47);
  Object_object__50017172 = (char *)this->fields._Contents_k__BackingField;
  if ( !Object_object__50017172
    || (*((_QWORD *)Object_object__50017172 + 13) = v37,
        sub_1C2E0D0((PartyOrganizationUtility_o *)(Object_object__50017172 + 104), v37, v48, v49, v50, v51, v52, v53),
        (Object_object__50017172 = (char *)this->fields._Contents_k__BackingField) == 0LL)
    || (*((_QWORD *)Object_object__50017172 + 14) = v39,
        sub_1C2E0D0((PartyOrganizationUtility_o *)(Object_object__50017172 + 112), v39, v54, v55, v56, v57, v58, v59),
        (loadEndCallback = this->fields.loadEndCallback) == 0LL) )
  {
LABEL_13:
    sub_1C2E388(Object_object__50017172, v35);
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
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
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
  AssetStorageLoadWrapper_o *assetStorageLoadWrapper; // x20
  AtlasManagerUnit_o *v26; // x21
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  AssetStorageLoadWrapper_o *v33; // x20
  AtlasManagerUnit_o *v34; // x21
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  AssetStorageLoadWrapper_o *v41; // x20
  AtlasManagerUnit_o *v42; // x21
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  __int64 v49; // x20
  System_Action_object__o *v50; // x21
  ChainableActionBase_o *v51; // x0
  __int64 v52; // x1
  int64_t v53; // x2
  int32_t v54; // w3
  System_String_o *v55; // x4
  BattleSetupInfo_o *v56; // x5
  FollowerInfo_o *v57; // x6
  PartyListViewItem_o *v58; // x7
  System_Action_object__o *v59; // x21
  int64_t v60; // x2
  int32_t v61; // w3
  System_String_o *v62; // x4
  BattleSetupInfo_o *v63; // x5
  FollowerInfo_o *v64; // x6
  PartyListViewItem_o *v65; // x7
  System_Action_object__o *v66; // x21
  int64_t v67; // x2
  int32_t v68; // w3
  System_String_o *v69; // x4
  BattleSetupInfo_o *v70; // x5
  FollowerInfo_o *v71; // x6
  PartyListViewItem_o *v72; // x7
  System_Action_object__o *v73; // x21
  int64_t v74; // x2
  int32_t v75; // w3
  System_String_o *v76; // x4
  BattleSetupInfo_o *v77; // x5
  FollowerInfo_o *v78; // x6
  PartyListViewItem_o *v79; // x7
  System_Action_object__o *v80; // x21
  int64_t v81; // x2
  int32_t v82; // w3
  System_String_o *v83; // x4
  BattleSetupInfo_o *v84; // x5
  FollowerInfo_o *v85; // x6
  PartyListViewItem_o *v86; // x7
  System_Action_object__o *v87; // x21
  int64_t v88; // x2
  int32_t v89; // w3
  System_String_o *v90; // x4
  BattleSetupInfo_o *v91; // x5
  FollowerInfo_o *v92; // x6
  PartyListViewItem_o *v93; // x7
  ChainableActionParallel_o *v94; // x21
  __int64 v95; // x20
  System_Action_o *v96; // x22
  int64_t v97; // x2
  int32_t v98; // w3
  System_String_o *v99; // x4
  BattleSetupInfo_o *v100; // x5
  FollowerInfo_o *v101; // x6
  PartyListViewItem_o *v102; // x7

  if ( (byte_4C00DF5 & 1) == 0 )
  {
    sub_1C2E12C(&System_Action___TypeInfo, callback);
    sub_1C2E12C(&System_Action_Action____TypeInfo, v10);
    sub_1C2E12C(&System_Action_Action__TypeInfo, v11);
    sub_1C2E12C(&System_Action_TypeInfo, v12);
    sub_1C2E12C(&AtlasManagerUnit_TypeInfo, v13);
    sub_1C2E12C(&ChainableActionParallel_TypeInfo, v14);
    sub_1C2E12C(&Method_ClassBoardResourceCatalogAssetBundle_LoadEnd__, v15);
    sub_1C2E12C(&Method_ClassBoardResourceCatalogAssetBundle__LoadSystemAsset_b__32_0__, v16);
    sub_1C2E12C(&Method_ClassBoardResourceCatalogAssetBundle__LoadSystemAsset_b__32_1__, v17);
    sub_1C2E12C(&Method_ClassBoardResourceCatalogAssetBundle__LoadSystemAsset_b__32_2__, v18);
    sub_1C2E12C(&Method_ClassBoardResourceCatalogAssetBundle__LoadSystemAsset_b__32_3__, v19);
    sub_1C2E12C(&Method_ClassBoardResourceCatalogAssetBundle__LoadSystemAsset_b__32_4__, v20);
    sub_1C2E12C(&Method_ClassBoardResourceCatalogAssetBundle__LoadSystemAsset_b__32_5__, v21);
    sub_1C2E12C(&StringLiteral_4580/*"ClassBoard/UI/DownloadClassBoardUIAtlas"*/, v22);
    sub_1C2E12C(&StringLiteral_4579/*"ClassBoard/UI/DownloadClassBoardClassUIAtlas"*/, v23);
    sub_1C2E12C(&StringLiteral_4576/*"ClassBoard/Icon/DownloadClassBoardIconAtlas"*/, v24);
    byte_4C00DF5 = 1;
  }
  this->fields.loadEndCallback = callback;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&this->fields.loadEndCallback,
    (int64_t)callback,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  assetStorageLoadWrapper = this->fields.assetStorageLoadWrapper;
  v26 = (AtlasManagerUnit_o *)sub_1C2E378(AtlasManagerUnit_TypeInfo);
  AtlasManagerUnit___ctor(v26, (System_String_o *)StringLiteral_4580/*"ClassBoard/UI/DownloadClassBoardUIAtlas"*/, assetStorageLoadWrapper, 0LL);
  this->fields.boardUiAtlasManagerUnit = v26;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&this->fields.boardUiAtlasManagerUnit,
    (int64_t)v26,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  v33 = this->fields.assetStorageLoadWrapper;
  v34 = (AtlasManagerUnit_o *)sub_1C2E378(AtlasManagerUnit_TypeInfo);
  AtlasManagerUnit___ctor(v34, (System_String_o *)StringLiteral_4579/*"ClassBoard/UI/DownloadClassBoardClassUIAtlas"*/, v33, 0LL);
  this->fields.classUiAtlasManagerUnit = v34;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&this->fields.classUiAtlasManagerUnit,
    (int64_t)v34,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
  v41 = this->fields.assetStorageLoadWrapper;
  v42 = (AtlasManagerUnit_o *)sub_1C2E378(AtlasManagerUnit_TypeInfo);
  AtlasManagerUnit___ctor(v42, (System_String_o *)StringLiteral_4576/*"ClassBoard/Icon/DownloadClassBoardIconAtlas"*/, v41, 0LL);
  this->fields.iconAtlasManagerUnit = v42;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&this->fields.iconAtlasManagerUnit,
    (int64_t)v42,
    v43,
    v44,
    v45,
    v46,
    v47,
    v48);
  v49 = sub_1C2E1D4(System_Action_Action____TypeInfo, 6LL);
  v50 = (System_Action_object__o *)sub_1C2E378(System_Action_Action__TypeInfo);
  System_Action_object____ctor(
    v50,
    (Il2CppObject *)this,
    Method_ClassBoardResourceCatalogAssetBundle__LoadSystemAsset_b__32_0__,
    0LL);
  if ( !v49 )
    goto LABEL_16;
  if ( !*(_DWORD *)(v49 + 24) )
    goto LABEL_15;
  *(_QWORD *)(v49 + 32) = v50;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v49 + 32), (int64_t)v50, v53, v54, v55, v56, v57, v58);
  v59 = (System_Action_object__o *)sub_1C2E378(System_Action_Action__TypeInfo);
  System_Action_object____ctor(
    v59,
    (Il2CppObject *)this,
    Method_ClassBoardResourceCatalogAssetBundle__LoadSystemAsset_b__32_1__,
    0LL);
  if ( *(_DWORD *)(v49 + 24) <= 1u )
    goto LABEL_15;
  *(_QWORD *)(v49 + 40) = v59;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v49 + 40), (int64_t)v59, v60, v61, v62, v63, v64, v65);
  v66 = (System_Action_object__o *)sub_1C2E378(System_Action_Action__TypeInfo);
  System_Action_object____ctor(
    v66,
    (Il2CppObject *)this,
    Method_ClassBoardResourceCatalogAssetBundle__LoadSystemAsset_b__32_2__,
    0LL);
  if ( *(_DWORD *)(v49 + 24) <= 2u )
    goto LABEL_15;
  *(_QWORD *)(v49 + 48) = v66;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v49 + 48), (int64_t)v66, v67, v68, v69, v70, v71, v72);
  v73 = (System_Action_object__o *)sub_1C2E378(System_Action_Action__TypeInfo);
  System_Action_object____ctor(
    v73,
    (Il2CppObject *)this,
    Method_ClassBoardResourceCatalogAssetBundle__LoadSystemAsset_b__32_3__,
    0LL);
  if ( *(_DWORD *)(v49 + 24) <= 3u )
    goto LABEL_15;
  *(_QWORD *)(v49 + 56) = v73;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v49 + 56), (int64_t)v73, v74, v75, v76, v77, v78, v79);
  v80 = (System_Action_object__o *)sub_1C2E378(System_Action_Action__TypeInfo);
  System_Action_object____ctor(
    v80,
    (Il2CppObject *)this,
    Method_ClassBoardResourceCatalogAssetBundle__LoadSystemAsset_b__32_4__,
    0LL);
  if ( *(_DWORD *)(v49 + 24) <= 4u )
    goto LABEL_15;
  *(_QWORD *)(v49 + 64) = v80;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v49 + 64), (int64_t)v80, v81, v82, v83, v84, v85, v86);
  v87 = (System_Action_object__o *)sub_1C2E378(System_Action_Action__TypeInfo);
  System_Action_object____ctor(
    v87,
    (Il2CppObject *)this,
    Method_ClassBoardResourceCatalogAssetBundle__LoadSystemAsset_b__32_5__,
    0LL);
  if ( *(_DWORD *)(v49 + 24) <= 5u )
    goto LABEL_15;
  *(_QWORD *)(v49 + 72) = v87;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v49 + 72), (int64_t)v87, v88, v89, v90, v91, v92, v93);
  v94 = (ChainableActionParallel_o *)sub_1C2E378(ChainableActionParallel_TypeInfo);
  ChainableActionParallel___ctor_47869424(v94, (System_Action_Action__array *)v49, 0LL);
  v95 = sub_1C2E1D4(System_Action___TypeInfo, 1LL);
  v96 = (System_Action_o *)sub_1C2E378(System_Action_TypeInfo);
  System_Action___ctor(v96, (Il2CppObject *)this, Method_ClassBoardResourceCatalogAssetBundle_LoadEnd__, 0LL);
  if ( !v95 )
    goto LABEL_16;
  if ( !*(_DWORD *)(v95 + 24) )
LABEL_15:
    sub_1C2E390(v51, v52);
  *(_QWORD *)(v95 + 32) = v96;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v95 + 32), (int64_t)v96, v97, v98, v99, v100, v101, v102);
  if ( !v94 || (v51 = ChainableActionBase__Final((ChainableActionBase_o *)v94, (System_Action_array *)v95, 0LL)) == 0LL )
LABEL_16:
    sub_1C2E388(v51, v52);
  ChainableActionBase__Execute(v51, 0LL);
}


void __fastcall ClassBoardResourceCatalogAssetBundle__ReleaseAll(
        ClassBoardResourceCatalogAssetBundle_o *this,
        const MethodInfo *method)
{
  AssetStorageLoadWrapper_o *assetStorageLoadWrapper; // x0

  assetStorageLoadWrapper = this->fields.assetStorageLoadWrapper;
  if ( !assetStorageLoadWrapper )
    sub_1C2E388(0LL, method);
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
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  AtlasManagerUnit_o *boardUiAtlasManagerUnit; // x0
  AssetStorageLoadWrapper_o *assetStorageLoadWrapper; // x22
  AtlasManagerUnit_o *v26; // x23
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  AtlasManagerUnit_o *v33; // x19
  System_Action_o *v34; // x21

  if ( (byte_4C00DF7 & 1) == 0 )
  {
    sub_1C2E12C(&System_Action_TypeInfo, callback);
    sub_1C2E12C(&AtlasManagerUnit_TypeInfo, v5);
    sub_1C2E12C(&Method_ClassBoardResourceCatalogAssetBundle___c__DisplayClass35_0__ReloadBoardUIAtlas_b__0__, v6);
    sub_1C2E12C(&ClassBoardResourceCatalogAssetBundle___c__DisplayClass35_0_TypeInfo, v7);
    sub_1C2E12C(&StringLiteral_4580/*"ClassBoard/UI/DownloadClassBoardUIAtlas"*/, v8);
    byte_4C00DF7 = 1;
  }
  v9 = sub_1C2E378(ClassBoardResourceCatalogAssetBundle___c__DisplayClass35_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    goto LABEL_8;
  *(_QWORD *)(v9 + 16) = this;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v9 + 16), (int64_t)this, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v9 + 24) = callback;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v9 + 24), (int64_t)callback, v18, v19, v20, v21, v22, v23);
  boardUiAtlasManagerUnit = this->fields.boardUiAtlasManagerUnit;
  if ( boardUiAtlasManagerUnit )
    AtlasManagerUnit__Release(boardUiAtlasManagerUnit, 0LL);
  assetStorageLoadWrapper = this->fields.assetStorageLoadWrapper;
  v26 = (AtlasManagerUnit_o *)sub_1C2E378(AtlasManagerUnit_TypeInfo);
  AtlasManagerUnit___ctor(v26, (System_String_o *)StringLiteral_4580/*"ClassBoard/UI/DownloadClassBoardUIAtlas"*/, assetStorageLoadWrapper, 0LL);
  this->fields.boardUiAtlasManagerUnit = v26;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&this->fields.boardUiAtlasManagerUnit,
    (int64_t)v26,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  v33 = this->fields.boardUiAtlasManagerUnit;
  v34 = (System_Action_o *)sub_1C2E378(System_Action_TypeInfo);
  System_Action___ctor(
    v34,
    (Il2CppObject *)v9,
    Method_ClassBoardResourceCatalogAssetBundle___c__DisplayClass35_0__ReloadBoardUIAtlas_b__0__,
    0LL);
  if ( !v33 )
LABEL_8:
    sub_1C2E388(v10, v11);
  AtlasManagerUnit__Load(v33, v34, 1, 0LL);
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
    sub_1C2E388(0LL, sprite);
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
  __int64 v10; // x1
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  AssetLoader_LoadEndDataHandler_o *v23; // x20
  const MethodInfo *v24; // x3

  if ( (byte_4C00DFC & 1) == 0 )
  {
    sub_1C2E12C(&AssetLoader_LoadEndDataHandler_TypeInfo, f);
    sub_1C2E12C(&Method_ClassBoardResourceCatalogAssetBundle___c__DisplayClass32_0__LoadSystemAsset_b__6__, v5);
    sub_1C2E12C(&ClassBoardResourceCatalogAssetBundle___c__DisplayClass32_0_TypeInfo, v6);
    sub_1C2E12C(&StringLiteral_4577/*"ClassBoard/Main"*/, v7);
    byte_4C00DFC = 1;
  }
  v8 = sub_1C2E378(ClassBoardResourceCatalogAssetBundle___c__DisplayClass32_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8 )
    sub_1C2E388(v9, v10);
  *(_QWORD *)(v8 + 24) = this;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v8 + 24), (int64_t)this, v11, v12, v13, v14, v15, v16);
  *(_QWORD *)(v8 + 16) = f;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v8 + 16), (int64_t)f, v17, v18, v19, v20, v21, v22);
  v23 = (AssetLoader_LoadEndDataHandler_o *)sub_1C2E378(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v23,
    (Il2CppObject *)v8,
    Method_ClassBoardResourceCatalogAssetBundle___c__DisplayClass32_0__LoadSystemAsset_b__6__,
    0LL);
  ClassBoardResourceCatalogAssetBundle__LoadAssetStorage(this, (System_String_o *)StringLiteral_4577/*"ClassBoard/Main"*/, v23, v24);
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
  __int64 v10; // x1
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  AssetLoader_LoadEndDataHandler_o *v23; // x20
  const MethodInfo *v24; // x3

  if ( (byte_4C00DFD & 1) == 0 )
  {
    sub_1C2E12C(&AssetLoader_LoadEndDataHandler_TypeInfo, f);
    sub_1C2E12C(&Method_ClassBoardResourceCatalogAssetBundle___c__DisplayClass32_1__LoadSystemAsset_b__7__, v5);
    sub_1C2E12C(&ClassBoardResourceCatalogAssetBundle___c__DisplayClass32_1_TypeInfo, v6);
    sub_1C2E12C(&StringLiteral_4564/*"ClassBoard/Bg"*/, v7);
    byte_4C00DFD = 1;
  }
  v8 = sub_1C2E378(ClassBoardResourceCatalogAssetBundle___c__DisplayClass32_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8 )
    sub_1C2E388(v9, v10);
  *(_QWORD *)(v8 + 24) = this;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v8 + 24), (int64_t)this, v11, v12, v13, v14, v15, v16);
  *(_QWORD *)(v8 + 16) = f;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v8 + 16), (int64_t)f, v17, v18, v19, v20, v21, v22);
  v23 = (AssetLoader_LoadEndDataHandler_o *)sub_1C2E378(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v23,
    (Il2CppObject *)v8,
    Method_ClassBoardResourceCatalogAssetBundle___c__DisplayClass32_1__LoadSystemAsset_b__7__,
    0LL);
  ClassBoardResourceCatalogAssetBundle__LoadAssetStorage(this, (System_String_o *)StringLiteral_4564/*"ClassBoard/Bg"*/, v23, v24);
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
  __int64 v10; // x1
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  AssetLoader_LoadEndDataHandler_o *v23; // x20
  const MethodInfo *v24; // x3

  if ( (byte_4C00DFE & 1) == 0 )
  {
    sub_1C2E12C(&AssetLoader_LoadEndDataHandler_TypeInfo, f);
    sub_1C2E12C(&Method_ClassBoardResourceCatalogAssetBundle___c__DisplayClass32_2__LoadSystemAsset_b__8__, v5);
    sub_1C2E12C(&ClassBoardResourceCatalogAssetBundle___c__DisplayClass32_2_TypeInfo, v6);
    sub_1C2E12C(&StringLiteral_4578/*"ClassBoard/Select"*/, v7);
    byte_4C00DFE = 1;
  }
  v8 = sub_1C2E378(ClassBoardResourceCatalogAssetBundle___c__DisplayClass32_2_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8 )
    sub_1C2E388(v9, v10);
  *(_QWORD *)(v8 + 24) = this;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v8 + 24), (int64_t)this, v11, v12, v13, v14, v15, v16);
  *(_QWORD *)(v8 + 16) = f;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v8 + 16), (int64_t)f, v17, v18, v19, v20, v21, v22);
  v23 = (AssetLoader_LoadEndDataHandler_o *)sub_1C2E378(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v23,
    (Il2CppObject *)v8,
    Method_ClassBoardResourceCatalogAssetBundle___c__DisplayClass32_2__LoadSystemAsset_b__8__,
    0LL);
  ClassBoardResourceCatalogAssetBundle__LoadAssetStorage(this, (System_String_o *)StringLiteral_4578/*"ClassBoard/Select"*/, v23, v24);
}


void __fastcall ClassBoardResourceCatalogAssetBundle___LoadSystemAsset_b__32_3(
        ClassBoardResourceCatalogAssetBundle_o *this,
        System_Action_o *f,
        const MethodInfo *method)
{
  AtlasManagerUnit_o *boardUiAtlasManagerUnit; // x0

  boardUiAtlasManagerUnit = this->fields.boardUiAtlasManagerUnit;
  if ( !boardUiAtlasManagerUnit )
    sub_1C2E388(0LL, f);
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
    sub_1C2E388(0LL, f);
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
    sub_1C2E388(0LL, f);
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
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct ClassBoardResourceCatalogAssetBundle_o *_4__this; // x0
  struct System_Action_o *f; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (_4__this->fields.mainAssetData = asset,
        sub_1C2E0D0(
          (PartyOrganizationUtility_o *)&_4__this->fields.mainAssetData,
          (int64_t)asset,
          (int64_t)method,
          v3,
          v4,
          v5,
          v6,
          v7),
        (f = this->fields.f) == 0LL) )
  {
    sub_1C2E388(_4__this, asset);
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
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct ClassBoardResourceCatalogAssetBundle_o *_4__this; // x0
  struct System_Action_o *f; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (_4__this->fields.modelAssetData = asset,
        sub_1C2E0D0(
          (PartyOrganizationUtility_o *)&_4__this->fields.modelAssetData,
          (int64_t)asset,
          (int64_t)method,
          v3,
          v4,
          v5,
          v6,
          v7),
        (f = this->fields.f) == 0LL) )
  {
    sub_1C2E388(_4__this, asset);
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
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct ClassBoardResourceCatalogAssetBundle_o *_4__this; // x0
  struct System_Action_o *f; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (_4__this->fields.boardSelectViewAssetData = asset,
        sub_1C2E0D0(
          (PartyOrganizationUtility_o *)&_4__this->fields.boardSelectViewAssetData,
          (int64_t)asset,
          (int64_t)method,
          v3,
          v4,
          v5,
          v6,
          v7),
        (f = this->fields.f) == 0LL) )
  {
    sub_1C2E388(_4__this, asset);
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
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct ClassBoardResourceCatalogAssetBundle_o *_4__this; // x8
  ClassBoardResourceCatalogAssetBundle___c__DisplayClass35_0_o *v9; // x19
  struct System_Action_o *boardUiAtlasManagerUnit; // x1

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (v9 = this,
        (this = (ClassBoardResourceCatalogAssetBundle___c__DisplayClass35_0_o *)_4__this->fields._Contents_k__BackingField) == 0LL) )
  {
    sub_1C2E388(this, method);
  }
  boardUiAtlasManagerUnit = (struct System_Action_o *)_4__this->fields.boardUiAtlasManagerUnit;
  this[3].fields.callback = boardUiAtlasManagerUnit;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&this[3].fields.callback,
    (int64_t)boardUiAtlasManagerUnit,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  ActionExtensions__Call(v9->fields.callback, 0LL);
}