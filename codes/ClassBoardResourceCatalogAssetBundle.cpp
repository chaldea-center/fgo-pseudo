void __fastcall ClassBoardResourceCatalogAssetBundle___ctor(
        ClassBoardResourceCatalogAssetBundle_o *this,
        const MethodInfo *method)
{
  Il2CppObject *v3; // x20
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7
  AssetStorageLoadWrapper_o *v10; // x20
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7

  if ( (byte_4BDFB55 & 1) == 0 )
  {
    sub_1C21E38(&AssetStorageLoadWrapper_TypeInfo);
    sub_1C21E38(&ClassBoardResourceContents_TypeInfo);
    byte_4BDFB55 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v3 = (Il2CppObject *)sub_1C22084(ClassBoardResourceContents_TypeInfo);
  System_Object___ctor(v3, 0LL);
  this->fields._Contents_k__BackingField = (struct ClassBoardResourceContents_o *)v3;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields._Contents_k__BackingField,
    (int64_t)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  v10 = (AssetStorageLoadWrapper_o *)sub_1C22084(AssetStorageLoadWrapper_TypeInfo);
  AssetStorageLoadWrapper___ctor(v10, 0LL);
  this->fields.assetStorageLoadWrapper = v10;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields, (int64_t)v10, v11, v12, v13, v14, v15, v16);
}


System_String_o *__fastcall ClassBoardResourceCatalogAssetBundle__GetIconAtlasPath(
        ClassBoardResourceCatalogAssetBundle_o *this,
        const MethodInfo *method)
{
  if ( (byte_4BDFB5C & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_4588/*"ClassBoard/Icon/DownloadClassBoardIconAtlas"*/);
    byte_4BDFB5C = 1;
  }
  return (System_String_o *)StringLiteral_4588/*"ClassBoard/Icon/DownloadClassBoardIconAtlas"*/;
}


// local variable allocation has failed, the output may be wrong!
Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o __fastcall ClassBoardResourceCatalogAssetBundle__GetObject___Il2CppFullySharedGenericType_(
        ClassBoardResourceCatalogAssetBundle_o *this,
        AssetData_o *assetData,
        System_String_o *name,
        const MethodInfo_2FA3CC8 *method)
{
  __int64 v4; // x4
  __int64 v5; // x20
  __int64 v8; // x8
  __int64 v10; // x21
  void *v11; // x0
  __int64 v12; // x1
  Il2CppObject *Object_object__49880776; // x23
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
    sub_1C21E38(&Method_AssetData_GetObject_GameObject____77626288);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    v8 = *(_QWORD *)(v5 + 56);
    if ( !v8 )
    {
      sub_1C73D70();
      v8 = *(_QWORD *)(v5 + 56);
    }
  }
  v10 = *(unsigned int *)(*(_QWORD *)v8 + 252LL);
  v11 = memset((char *)v18 - ((v10 + 15) & 0x1FFFFFFF0LL), 0, *(_DWORD *)(*(_QWORD *)v8 + 252LL));
  if ( !assetData )
    goto LABEL_12;
  Object_object__49880776 = AssetData__GetObject_object__49880776(
                              assetData,
                              name,
                              (const MethodInfo_2F91EC8 *)Method_AssetData_GetObject_GameObject____77626288);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v11 = (void *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Object_object__49880776, 0LL, 0LL);
  if ( ((unsigned __int8)v11 & 1) == 0 )
  {
    if ( Object_object__49880776 )
    {
      v14 = *(__int64 **)(*(_QWORD *)(v5 + 56) + 8LL);
      v15 = *v14;
      v18[0] = (__int64)v18 - ((v10 + 15) & 0x1FFFFFFF0LL);
      ((void (__fastcall *)(__int64, __int64 *, Il2CppObject *, __int64 *, __int64))v14[2])(
        v15,
        v14,
        Object_object__49880776,
        v18,
        v18[0]);
      goto LABEL_11;
    }
LABEL_12:
    sub_1C22094(v11, v12);
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
        const MethodInfo_2FA3C04 *method)
{
  Il2CppObject *Object_object__49880776; // x20

  if ( !method->rgctx_data )
  {
    sub_1C21E38(&Method_AssetData_GetObject_GameObject____77626288);
    this = (ClassBoardResourceCatalogAssetBundle_o *)sub_1C21E38(&UnityEngine_Object_TypeInfo);
    if ( !method->rgctx_data )
      this = (ClassBoardResourceCatalogAssetBundle_o *)sub_1C73D70();
  }
  if ( !assetData )
    goto LABEL_11;
  Object_object__49880776 = AssetData__GetObject_object__49880776(
                              assetData,
                              name,
                              (const MethodInfo_2F91EC8 *)Method_AssetData_GetObject_GameObject____77626288);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (ClassBoardResourceCatalogAssetBundle_o *)UnityEngine_Object__op_Equality(
                                                     (UnityEngine_Object_o *)Object_object__49880776,
                                                     0LL,
                                                     0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
    return 0LL;
  if ( !Object_object__49880776 )
LABEL_11:
    sub_1C22094(this, assetData);
  return UnityEngine_GameObject__GetComponent_object_(
           (UnityEngine_GameObject_o *)Object_object__49880776,
           (const MethodInfo_3000534 *)method->rgctx_data->_1_UnityEngine_GameObject_GetComponent_T_);
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
  if ( (byte_4BDFB5A & 1) == 0 )
  {
    sub_1C21E38(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardBlank___);
    sub_1C21E38(&StringLiteral_4594/*"ClassBoardBlank"*/);
    byte_4BDFB5A = 1;
  }
  mainAssetData = this->fields.mainAssetData;
  v5 = System_Int32__ToString((int32_t)&v8, 0LL);
  v6 = System_String__Concat_63115476((System_String_o *)StringLiteral_4594/*"ClassBoardBlank"*/, v5, 0LL);
  return (ClassBoardBlank_o *)ClassBoardResourceCatalogAssetBundle__GetObject_object_(
                                this,
                                mainAssetData,
                                v6,
                                (const MethodInfo_2FA3C04 *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardBlank___);
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
  if ( (byte_4BDFB5B & 1) == 0 )
  {
    sub_1C21E38(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardLock___);
    sub_1C21E38(&StringLiteral_4597/*"ClassBoardLock"*/);
    byte_4BDFB5B = 1;
  }
  mainAssetData = this->fields.mainAssetData;
  v5 = System_Int32__ToString((int32_t)&v8, 0LL);
  v6 = System_String__Concat_63115476((System_String_o *)StringLiteral_4597/*"ClassBoardLock"*/, v5, 0LL);
  return (ClassBoardLock_o *)ClassBoardResourceCatalogAssetBundle__GetObject_object_(
                               this,
                               mainAssetData,
                               v6,
                               (const MethodInfo_2FA3C04 *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardLock___);
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
  if ( (byte_4BDFB59 & 1) == 0 )
  {
    sub_1C21E38(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardSquare___);
    sub_1C21E38(&StringLiteral_4603/*"ClassBoardSquare"*/);
    byte_4BDFB59 = 1;
  }
  mainAssetData = this->fields.mainAssetData;
  v5 = System_Int32__ToString((int32_t)&v8, 0LL);
  v6 = System_String__Concat_63115476((System_String_o *)StringLiteral_4603/*"ClassBoardSquare"*/, v5, 0LL);
  return (ClassBoardSquare_o *)ClassBoardResourceCatalogAssetBundle__GetObject_object_(
                                 this,
                                 mainAssetData,
                                 v6,
                                 (const MethodInfo_2FA3C04 *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardSquare___);
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
    sub_1C22094(assetStorageLoadWrapper, assetBundlePath);
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
  char *Object_object__49880776; // x0
  __int64 v11; // x1
  int64_t v12; // x28
  int64_t v13; // x29
  const MethodInfo *v14; // x5
  int64_t v15; // x20
  const MethodInfo *v16; // x6
  const MethodInfo *v17; // x5
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  struct System_Action_o *loadEndCallback; // x8
  ClassBoardLock_o *lockAsset; // [xsp+8h] [xbp-78h]
  Il2CppObject *v38; // [xsp+10h] [xbp-70h]
  Il2CppObject *Object_object; // [xsp+18h] [xbp-68h]

  if ( (byte_4BDFB57 & 1) == 0 )
  {
    sub_1C21E38(&Method_AssetData_GetObject_GameObject____77626288);
    sub_1C21E38(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardBackground___);
    sub_1C21E38(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardBlank___);
    sub_1C21E38(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardDisableOpenDialog___);
    sub_1C21E38(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardLine___);
    sub_1C21E38(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardLockOpenConfirmDialog___);
    sub_1C21E38(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardLockReleaseConditionDialog___);
    sub_1C21E38(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardLock___);
    sub_1C21E38(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardSquareDetailDialog___);
    sub_1C21E38(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardSquareOpenConfirmDialog___);
    sub_1C21E38(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardSquare___);
    sub_1C21E38(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardUIController___);
    sub_1C21E38(&StringLiteral_4593/*"ClassBoardBg"*/);
    sub_1C21E38(&StringLiteral_4599/*"ClassBoardLockReleaseConditionDialog"*/);
    sub_1C21E38(&StringLiteral_4596/*"ClassBoardLine"*/);
    sub_1C21E38(&StringLiteral_4604/*"ClassBoardSquareDetailDialog"*/);
    sub_1C21E38(&StringLiteral_4597/*"ClassBoardLock"*/);
    sub_1C21E38(&StringLiteral_4602/*"ClassBoardSelectView"*/);
    sub_1C21E38(&StringLiteral_6985/*"ForwardIconAnimObject"*/);
    sub_1C21E38(&StringLiteral_4594/*"ClassBoardBlank"*/);
    sub_1C21E38(&StringLiteral_4595/*"ClassBoardDisableOpenDialog"*/);
    sub_1C21E38(&StringLiteral_4598/*"ClassBoardLockOpenConfirmDialog"*/);
    sub_1C21E38(&StringLiteral_4603/*"ClassBoardSquare"*/);
    sub_1C21E38(&StringLiteral_4605/*"ClassBoardSquareOpenConfirmDialog"*/);
    sub_1C21E38(&StringLiteral_4606/*"ClassBoardUI"*/);
    byte_4BDFB57 = 1;
  }
  Object_object = ClassBoardResourceCatalogAssetBundle__GetObject_object_(
                    this,
                    this->fields.mainAssetData,
                    (System_String_o *)StringLiteral_4603/*"ClassBoardSquare"*/,
                    (const MethodInfo_2FA3C04 *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardSquare___);
  v38 = ClassBoardResourceCatalogAssetBundle__GetObject_object_(
          this,
          this->fields.mainAssetData,
          (System_String_o *)StringLiteral_4596/*"ClassBoardLine"*/,
          (const MethodInfo_2FA3C04 *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardLine___);
  lockAsset = (ClassBoardLock_o *)ClassBoardResourceCatalogAssetBundle__GetObject_object_(
                                    this,
                                    this->fields.mainAssetData,
                                    (System_String_o *)StringLiteral_4597/*"ClassBoardLock"*/,
                                    (const MethodInfo_2FA3C04 *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardLock___);
  v3 = ClassBoardResourceCatalogAssetBundle__GetObject_object_(
         this,
         this->fields.mainAssetData,
         (System_String_o *)StringLiteral_4594/*"ClassBoardBlank"*/,
         (const MethodInfo_2FA3C04 *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardBlank___);
  v4 = ClassBoardResourceCatalogAssetBundle__GetObject_object_(
         this,
         this->fields.mainAssetData,
         (System_String_o *)StringLiteral_4595/*"ClassBoardDisableOpenDialog"*/,
         (const MethodInfo_2FA3C04 *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardDisableOpenDialog___);
  v5 = ClassBoardResourceCatalogAssetBundle__GetObject_object_(
         this,
         this->fields.mainAssetData,
         (System_String_o *)StringLiteral_4605/*"ClassBoardSquareOpenConfirmDialog"*/,
         (const MethodInfo_2FA3C04 *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardSquareOpenConfirmDialog___);
  v6 = ClassBoardResourceCatalogAssetBundle__GetObject_object_(
         this,
         this->fields.mainAssetData,
         (System_String_o *)StringLiteral_4598/*"ClassBoardLockOpenConfirmDialog"*/,
         (const MethodInfo_2FA3C04 *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardLockOpenConfirmDialog___);
  v7 = ClassBoardResourceCatalogAssetBundle__GetObject_object_(
         this,
         this->fields.mainAssetData,
         (System_String_o *)StringLiteral_4599/*"ClassBoardLockReleaseConditionDialog"*/,
         (const MethodInfo_2FA3C04 *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardLockReleaseConditionDialog___);
  v8 = ClassBoardResourceCatalogAssetBundle__GetObject_object_(
         this,
         this->fields.mainAssetData,
         (System_String_o *)StringLiteral_4604/*"ClassBoardSquareDetailDialog"*/,
         (const MethodInfo_2FA3C04 *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardSquareDetailDialog___);
  v9 = ClassBoardResourceCatalogAssetBundle__GetObject_object_(
         this,
         this->fields.mainAssetData,
         (System_String_o *)StringLiteral_4606/*"ClassBoardUI"*/,
         (const MethodInfo_2FA3C04 *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardUIController___);
  Object_object__49880776 = (char *)ClassBoardResourceCatalogAssetBundle__GetObject_object_(
                                      this,
                                      this->fields.modelAssetData,
                                      (System_String_o *)StringLiteral_4593/*"ClassBoardBg"*/,
                                      (const MethodInfo_2FA3C04 *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardBackground___);
  if ( !this->fields.boardSelectViewAssetData )
    goto LABEL_13;
  v12 = (int64_t)Object_object__49880776;
  Object_object__49880776 = (char *)AssetData__GetObject_object__49880776(
                                      this->fields.boardSelectViewAssetData,
                                      (System_String_o *)StringLiteral_4602/*"ClassBoardSelectView"*/,
                                      (const MethodInfo_2F91EC8 *)Method_AssetData_GetObject_GameObject____77626288);
  if ( !this->fields.boardSelectViewAssetData )
    goto LABEL_13;
  v13 = (int64_t)Object_object__49880776;
  Object_object__49880776 = (char *)AssetData__GetObject_object__49880776(
                                      this->fields.boardSelectViewAssetData,
                                      (System_String_o *)StringLiteral_6985/*"ForwardIconAnimObject"*/,
                                      (const MethodInfo_2F91EC8 *)Method_AssetData_GetObject_GameObject____77626288);
  if ( !this->fields._Contents_k__BackingField )
    goto LABEL_13;
  v15 = (int64_t)Object_object__49880776;
  ClassBoardResourceContents__SetContents(
    this->fields._Contents_k__BackingField,
    (ClassBoardSquare_o *)Object_object,
    (ClassBoardLine_o *)v38,
    lockAsset,
    (ClassBoardBlank_o *)v3,
    v14);
  Object_object__49880776 = (char *)this->fields._Contents_k__BackingField;
  if ( !Object_object__49880776 )
    goto LABEL_13;
  ClassBoardResourceContents__SetContentsDialog(
    (ClassBoardResourceContents_o *)Object_object__49880776,
    (ClassBoardDisableOpenDialog_o *)v4,
    (ClassBoardSquareOpenConfirmDialog_o *)v5,
    (ClassBoardLockOpenConfirmDialog_o *)v6,
    (ClassBoardLockReleaseConditionDialog_o *)v7,
    (ClassBoardSquareDetailDialog_o *)v8,
    v16);
  Object_object__49880776 = (char *)this->fields._Contents_k__BackingField;
  if ( !Object_object__49880776 )
    goto LABEL_13;
  ClassBoardResourceContents__SetContentsUI(
    (ClassBoardResourceContents_o *)Object_object__49880776,
    (ClassBoardUIController_o *)v9,
    this->fields.boardUiAtlasManagerUnit,
    this->fields.iconAtlasManagerUnit,
    this->fields.classUiAtlasManagerUnit,
    v17);
  Object_object__49880776 = (char *)this->fields._Contents_k__BackingField;
  if ( !Object_object__49880776 )
    goto LABEL_13;
  *((_QWORD *)Object_object__49880776 + 12) = v12;
  sub_1C21DDC((PartyOrganizationUtility_o *)(Object_object__49880776 + 96), v12, v18, v19, v20, v21, v22, v23);
  Object_object__49880776 = (char *)this->fields._Contents_k__BackingField;
  if ( !Object_object__49880776
    || (*((_QWORD *)Object_object__49880776 + 13) = v13,
        sub_1C21DDC((PartyOrganizationUtility_o *)(Object_object__49880776 + 104), v13, v24, v25, v26, v27, v28, v29),
        (Object_object__49880776 = (char *)this->fields._Contents_k__BackingField) == 0LL)
    || (*((_QWORD *)Object_object__49880776 + 14) = v15,
        sub_1C21DDC((PartyOrganizationUtility_o *)(Object_object__49880776 + 112), v15, v30, v31, v32, v33, v34, v35),
        (loadEndCallback = this->fields.loadEndCallback) == 0LL) )
  {
LABEL_13:
    sub_1C22094(Object_object__49880776, v11);
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
  AssetStorageLoadWrapper_o *assetStorageLoadWrapper; // x20
  AtlasManagerUnit_o *v11; // x21
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  AssetStorageLoadWrapper_o *v18; // x20
  AtlasManagerUnit_o *v19; // x21
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  AssetStorageLoadWrapper_o *v26; // x20
  AtlasManagerUnit_o *v27; // x21
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  __int64 v34; // x20
  System_Action_object__o *v35; // x21
  ChainableActionBase_o *v36; // x0
  __int64 v37; // x1
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  System_Action_object__o *v44; // x21
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  System_Action_object__o *v51; // x21
  int64_t v52; // x2
  int32_t v53; // w3
  System_String_o *v54; // x4
  BattleSetupInfo_o *v55; // x5
  FollowerInfo_o *v56; // x6
  PartyListViewItem_o *v57; // x7
  System_Action_object__o *v58; // x21
  int64_t v59; // x2
  int32_t v60; // w3
  System_String_o *v61; // x4
  BattleSetupInfo_o *v62; // x5
  FollowerInfo_o *v63; // x6
  PartyListViewItem_o *v64; // x7
  System_Action_object__o *v65; // x21
  int64_t v66; // x2
  int32_t v67; // w3
  System_String_o *v68; // x4
  BattleSetupInfo_o *v69; // x5
  FollowerInfo_o *v70; // x6
  PartyListViewItem_o *v71; // x7
  System_Action_object__o *v72; // x21
  int64_t v73; // x2
  int32_t v74; // w3
  System_String_o *v75; // x4
  BattleSetupInfo_o *v76; // x5
  FollowerInfo_o *v77; // x6
  PartyListViewItem_o *v78; // x7
  ChainableActionParallel_o *v79; // x21
  __int64 v80; // x20
  System_Action_o *v81; // x22
  int64_t v82; // x2
  int32_t v83; // w3
  System_String_o *v84; // x4
  BattleSetupInfo_o *v85; // x5
  FollowerInfo_o *v86; // x6
  PartyListViewItem_o *v87; // x7

  if ( (byte_4BDFB56 & 1) == 0 )
  {
    sub_1C21E38(&System_Action___TypeInfo);
    sub_1C21E38(&System_Action_Action____TypeInfo);
    sub_1C21E38(&System_Action_Action__TypeInfo);
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&AtlasManagerUnit_TypeInfo);
    sub_1C21E38(&ChainableActionParallel_TypeInfo);
    sub_1C21E38(&Method_ClassBoardResourceCatalogAssetBundle_LoadEnd__);
    sub_1C21E38(&Method_ClassBoardResourceCatalogAssetBundle__LoadSystemAsset_b__32_0__);
    sub_1C21E38(&Method_ClassBoardResourceCatalogAssetBundle__LoadSystemAsset_b__32_1__);
    sub_1C21E38(&Method_ClassBoardResourceCatalogAssetBundle__LoadSystemAsset_b__32_2__);
    sub_1C21E38(&Method_ClassBoardResourceCatalogAssetBundle__LoadSystemAsset_b__32_3__);
    sub_1C21E38(&Method_ClassBoardResourceCatalogAssetBundle__LoadSystemAsset_b__32_4__);
    sub_1C21E38(&Method_ClassBoardResourceCatalogAssetBundle__LoadSystemAsset_b__32_5__);
    sub_1C21E38(&StringLiteral_4592/*"ClassBoard/UI/DownloadClassBoardUIAtlas"*/);
    sub_1C21E38(&StringLiteral_4591/*"ClassBoard/UI/DownloadClassBoardClassUIAtlas"*/);
    sub_1C21E38(&StringLiteral_4588/*"ClassBoard/Icon/DownloadClassBoardIconAtlas"*/);
    byte_4BDFB56 = 1;
  }
  this->fields.loadEndCallback = callback;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.loadEndCallback,
    (int64_t)callback,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  assetStorageLoadWrapper = this->fields.assetStorageLoadWrapper;
  v11 = (AtlasManagerUnit_o *)sub_1C22084(AtlasManagerUnit_TypeInfo);
  AtlasManagerUnit___ctor(v11, (System_String_o *)StringLiteral_4592/*"ClassBoard/UI/DownloadClassBoardUIAtlas"*/, assetStorageLoadWrapper, 0LL);
  this->fields.boardUiAtlasManagerUnit = v11;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.boardUiAtlasManagerUnit,
    (int64_t)v11,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  v18 = this->fields.assetStorageLoadWrapper;
  v19 = (AtlasManagerUnit_o *)sub_1C22084(AtlasManagerUnit_TypeInfo);
  AtlasManagerUnit___ctor(v19, (System_String_o *)StringLiteral_4591/*"ClassBoard/UI/DownloadClassBoardClassUIAtlas"*/, v18, 0LL);
  this->fields.classUiAtlasManagerUnit = v19;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.classUiAtlasManagerUnit,
    (int64_t)v19,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  v26 = this->fields.assetStorageLoadWrapper;
  v27 = (AtlasManagerUnit_o *)sub_1C22084(AtlasManagerUnit_TypeInfo);
  AtlasManagerUnit___ctor(v27, (System_String_o *)StringLiteral_4588/*"ClassBoard/Icon/DownloadClassBoardIconAtlas"*/, v26, 0LL);
  this->fields.iconAtlasManagerUnit = v27;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.iconAtlasManagerUnit,
    (int64_t)v27,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
  v34 = sub_1C21EE0(System_Action_Action____TypeInfo, 6LL);
  v35 = (System_Action_object__o *)sub_1C22084(System_Action_Action__TypeInfo);
  System_Action_object____ctor(
    v35,
    (Il2CppObject *)this,
    Method_ClassBoardResourceCatalogAssetBundle__LoadSystemAsset_b__32_0__,
    0LL);
  if ( !v34 )
    goto LABEL_16;
  if ( !*(_DWORD *)(v34 + 24) )
    goto LABEL_15;
  *(_QWORD *)(v34 + 32) = v35;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v34 + 32), (int64_t)v35, v38, v39, v40, v41, v42, v43);
  v44 = (System_Action_object__o *)sub_1C22084(System_Action_Action__TypeInfo);
  System_Action_object____ctor(
    v44,
    (Il2CppObject *)this,
    Method_ClassBoardResourceCatalogAssetBundle__LoadSystemAsset_b__32_1__,
    0LL);
  if ( *(_DWORD *)(v34 + 24) <= 1u )
    goto LABEL_15;
  *(_QWORD *)(v34 + 40) = v44;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v34 + 40), (int64_t)v44, v45, v46, v47, v48, v49, v50);
  v51 = (System_Action_object__o *)sub_1C22084(System_Action_Action__TypeInfo);
  System_Action_object____ctor(
    v51,
    (Il2CppObject *)this,
    Method_ClassBoardResourceCatalogAssetBundle__LoadSystemAsset_b__32_2__,
    0LL);
  if ( *(_DWORD *)(v34 + 24) <= 2u )
    goto LABEL_15;
  *(_QWORD *)(v34 + 48) = v51;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v34 + 48), (int64_t)v51, v52, v53, v54, v55, v56, v57);
  v58 = (System_Action_object__o *)sub_1C22084(System_Action_Action__TypeInfo);
  System_Action_object____ctor(
    v58,
    (Il2CppObject *)this,
    Method_ClassBoardResourceCatalogAssetBundle__LoadSystemAsset_b__32_3__,
    0LL);
  if ( *(_DWORD *)(v34 + 24) <= 3u )
    goto LABEL_15;
  *(_QWORD *)(v34 + 56) = v58;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v34 + 56), (int64_t)v58, v59, v60, v61, v62, v63, v64);
  v65 = (System_Action_object__o *)sub_1C22084(System_Action_Action__TypeInfo);
  System_Action_object____ctor(
    v65,
    (Il2CppObject *)this,
    Method_ClassBoardResourceCatalogAssetBundle__LoadSystemAsset_b__32_4__,
    0LL);
  if ( *(_DWORD *)(v34 + 24) <= 4u )
    goto LABEL_15;
  *(_QWORD *)(v34 + 64) = v65;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v34 + 64), (int64_t)v65, v66, v67, v68, v69, v70, v71);
  v72 = (System_Action_object__o *)sub_1C22084(System_Action_Action__TypeInfo);
  System_Action_object____ctor(
    v72,
    (Il2CppObject *)this,
    Method_ClassBoardResourceCatalogAssetBundle__LoadSystemAsset_b__32_5__,
    0LL);
  if ( *(_DWORD *)(v34 + 24) <= 5u )
    goto LABEL_15;
  *(_QWORD *)(v34 + 72) = v72;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v34 + 72), (int64_t)v72, v73, v74, v75, v76, v77, v78);
  v79 = (ChainableActionParallel_o *)sub_1C22084(ChainableActionParallel_TypeInfo);
  ChainableActionParallel___ctor_47731972(v79, (System_Action_Action__array *)v34, 0LL);
  v80 = sub_1C21EE0(System_Action___TypeInfo, 1LL);
  v81 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(v81, (Il2CppObject *)this, Method_ClassBoardResourceCatalogAssetBundle_LoadEnd__, 0LL);
  if ( !v80 )
    goto LABEL_16;
  if ( !*(_DWORD *)(v80 + 24) )
LABEL_15:
    sub_1C2209C(v36, v37);
  *(_QWORD *)(v80 + 32) = v81;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v80 + 32), (int64_t)v81, v82, v83, v84, v85, v86, v87);
  if ( !v79 || (v36 = ChainableActionBase__Final((ChainableActionBase_o *)v79, (System_Action_array *)v80, 0LL)) == 0LL )
LABEL_16:
    sub_1C22094(v36, v37);
  ChainableActionBase__Execute(v36, 0LL);
}


void __fastcall ClassBoardResourceCatalogAssetBundle__ReleaseAll(
        ClassBoardResourceCatalogAssetBundle_o *this,
        const MethodInfo *method)
{
  AssetStorageLoadWrapper_o *assetStorageLoadWrapper; // x0

  assetStorageLoadWrapper = this->fields.assetStorageLoadWrapper;
  if ( !assetStorageLoadWrapper )
    sub_1C22094(0LL, method);
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
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  AtlasManagerUnit_o *boardUiAtlasManagerUnit; // x0
  AssetStorageLoadWrapper_o *assetStorageLoadWrapper; // x22
  AtlasManagerUnit_o *v22; // x23
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  AtlasManagerUnit_o *v29; // x19
  System_Action_o *v30; // x21

  if ( (byte_4BDFB58 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&AtlasManagerUnit_TypeInfo);
    sub_1C21E38(&Method_ClassBoardResourceCatalogAssetBundle___c__DisplayClass35_0__ReloadBoardUIAtlas_b__0__);
    sub_1C21E38(&ClassBoardResourceCatalogAssetBundle___c__DisplayClass35_0_TypeInfo);
    sub_1C21E38(&StringLiteral_4592/*"ClassBoard/UI/DownloadClassBoardUIAtlas"*/);
    byte_4BDFB58 = 1;
  }
  v5 = sub_1C22084(ClassBoardResourceCatalogAssetBundle___c__DisplayClass35_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    goto LABEL_8;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 16), (int64_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = callback;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 24), (int64_t)callback, v14, v15, v16, v17, v18, v19);
  boardUiAtlasManagerUnit = this->fields.boardUiAtlasManagerUnit;
  if ( boardUiAtlasManagerUnit )
    AtlasManagerUnit__Release(boardUiAtlasManagerUnit, 0LL);
  assetStorageLoadWrapper = this->fields.assetStorageLoadWrapper;
  v22 = (AtlasManagerUnit_o *)sub_1C22084(AtlasManagerUnit_TypeInfo);
  AtlasManagerUnit___ctor(v22, (System_String_o *)StringLiteral_4592/*"ClassBoard/UI/DownloadClassBoardUIAtlas"*/, assetStorageLoadWrapper, 0LL);
  this->fields.boardUiAtlasManagerUnit = v22;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.boardUiAtlasManagerUnit,
    (int64_t)v22,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  v29 = this->fields.boardUiAtlasManagerUnit;
  v30 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(
    v30,
    (Il2CppObject *)v5,
    Method_ClassBoardResourceCatalogAssetBundle___c__DisplayClass35_0__ReloadBoardUIAtlas_b__0__,
    0LL);
  if ( !v29 )
LABEL_8:
    sub_1C22094(v6, v7);
  AtlasManagerUnit__Load(v29, v30, 1, 0LL);
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
    sub_1C22094(0LL, sprite);
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
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  AssetLoader_LoadEndDataHandler_o *v20; // x20
  const MethodInfo *v21; // x3

  if ( (byte_4BDFB5D & 1) == 0 )
  {
    sub_1C21E38(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C21E38(&Method_ClassBoardResourceCatalogAssetBundle___c__DisplayClass32_0__LoadSystemAsset_b__6__);
    sub_1C21E38(&ClassBoardResourceCatalogAssetBundle___c__DisplayClass32_0_TypeInfo);
    sub_1C21E38(&StringLiteral_4589/*"ClassBoard/Main"*/);
    byte_4BDFB5D = 1;
  }
  v5 = sub_1C22084(ClassBoardResourceCatalogAssetBundle___c__DisplayClass32_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    sub_1C22094(v6, v7);
  *(_QWORD *)(v5 + 24) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 24), (int64_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 16) = f;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 16), (int64_t)f, v14, v15, v16, v17, v18, v19);
  v20 = (AssetLoader_LoadEndDataHandler_o *)sub_1C22084(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v20,
    (Il2CppObject *)v5,
    Method_ClassBoardResourceCatalogAssetBundle___c__DisplayClass32_0__LoadSystemAsset_b__6__,
    0LL);
  ClassBoardResourceCatalogAssetBundle__LoadAssetStorage(this, (System_String_o *)StringLiteral_4589/*"ClassBoard/Main"*/, v20, v21);
}


void __fastcall ClassBoardResourceCatalogAssetBundle___LoadSystemAsset_b__32_1(
        ClassBoardResourceCatalogAssetBundle_o *this,
        System_Action_o *f,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  AssetLoader_LoadEndDataHandler_o *v20; // x20
  const MethodInfo *v21; // x3

  if ( (byte_4BDFB5E & 1) == 0 )
  {
    sub_1C21E38(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C21E38(&Method_ClassBoardResourceCatalogAssetBundle___c__DisplayClass32_1__LoadSystemAsset_b__7__);
    sub_1C21E38(&ClassBoardResourceCatalogAssetBundle___c__DisplayClass32_1_TypeInfo);
    sub_1C21E38(&StringLiteral_4576/*"ClassBoard/Bg"*/);
    byte_4BDFB5E = 1;
  }
  v5 = sub_1C22084(ClassBoardResourceCatalogAssetBundle___c__DisplayClass32_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    sub_1C22094(v6, v7);
  *(_QWORD *)(v5 + 24) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 24), (int64_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 16) = f;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 16), (int64_t)f, v14, v15, v16, v17, v18, v19);
  v20 = (AssetLoader_LoadEndDataHandler_o *)sub_1C22084(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v20,
    (Il2CppObject *)v5,
    Method_ClassBoardResourceCatalogAssetBundle___c__DisplayClass32_1__LoadSystemAsset_b__7__,
    0LL);
  ClassBoardResourceCatalogAssetBundle__LoadAssetStorage(this, (System_String_o *)StringLiteral_4576/*"ClassBoard/Bg"*/, v20, v21);
}


void __fastcall ClassBoardResourceCatalogAssetBundle___LoadSystemAsset_b__32_2(
        ClassBoardResourceCatalogAssetBundle_o *this,
        System_Action_o *f,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  AssetLoader_LoadEndDataHandler_o *v20; // x20
  const MethodInfo *v21; // x3

  if ( (byte_4BDFB5F & 1) == 0 )
  {
    sub_1C21E38(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C21E38(&Method_ClassBoardResourceCatalogAssetBundle___c__DisplayClass32_2__LoadSystemAsset_b__8__);
    sub_1C21E38(&ClassBoardResourceCatalogAssetBundle___c__DisplayClass32_2_TypeInfo);
    sub_1C21E38(&StringLiteral_4590/*"ClassBoard/Select"*/);
    byte_4BDFB5F = 1;
  }
  v5 = sub_1C22084(ClassBoardResourceCatalogAssetBundle___c__DisplayClass32_2_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    sub_1C22094(v6, v7);
  *(_QWORD *)(v5 + 24) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 24), (int64_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 16) = f;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 16), (int64_t)f, v14, v15, v16, v17, v18, v19);
  v20 = (AssetLoader_LoadEndDataHandler_o *)sub_1C22084(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v20,
    (Il2CppObject *)v5,
    Method_ClassBoardResourceCatalogAssetBundle___c__DisplayClass32_2__LoadSystemAsset_b__8__,
    0LL);
  ClassBoardResourceCatalogAssetBundle__LoadAssetStorage(this, (System_String_o *)StringLiteral_4590/*"ClassBoard/Select"*/, v20, v21);
}


void __fastcall ClassBoardResourceCatalogAssetBundle___LoadSystemAsset_b__32_3(
        ClassBoardResourceCatalogAssetBundle_o *this,
        System_Action_o *f,
        const MethodInfo *method)
{
  AtlasManagerUnit_o *boardUiAtlasManagerUnit; // x0

  boardUiAtlasManagerUnit = this->fields.boardUiAtlasManagerUnit;
  if ( !boardUiAtlasManagerUnit )
    sub_1C22094(0LL, f);
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
    sub_1C22094(0LL, f);
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
    sub_1C22094(0LL, f);
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
        sub_1C21DDC(
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
    sub_1C22094(_4__this, asset);
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
        sub_1C21DDC(
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
    sub_1C22094(_4__this, asset);
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
        sub_1C21DDC(
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
    sub_1C22094(_4__this, asset);
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
    sub_1C22094(this, method);
  }
  boardUiAtlasManagerUnit = (struct System_Action_o *)_4__this->fields.boardUiAtlasManagerUnit;
  this[3].fields.callback = boardUiAtlasManagerUnit;
  sub_1C21DDC(
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