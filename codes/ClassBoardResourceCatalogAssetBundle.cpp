void __fastcall ClassBoardResourceCatalogAssetBundle___ctor(
        ClassBoardResourceCatalogAssetBundle_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x3
  Il2CppObject *v9; // x20
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  AssetStorageLoadWrapper_o *v19; // x20
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7

  if ( (byte_4B19701 & 1) == 0 )
  {
    sub_1BCA7E0(&AssetStorageLoadWrapper_TypeInfo, method, v2);
    sub_1BCA7E0(&ClassBoardResourceContents_TypeInfo, v4, v5);
    byte_4B19701 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v9 = (Il2CppObject *)sub_1BCAA2C(ClassBoardResourceContents_TypeInfo, v6, v7, v8);
  System_Object___ctor(v9, 0LL);
  this->fields._Contents_k__BackingField = (struct ClassBoardResourceContents_o *)v9;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._Contents_k__BackingField,
    (int64_t)v9,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  v19 = (AssetStorageLoadWrapper_o *)sub_1BCAA2C(AssetStorageLoadWrapper_TypeInfo, v16, v17, v18);
  AssetStorageLoadWrapper___ctor(v19, 0LL);
  this->fields.assetStorageLoadWrapper = v19;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, (int64_t)v19, v20, v21, v22, v23, v24, v25);
}


System_String_o *__fastcall ClassBoardResourceCatalogAssetBundle__GetIconAtlasPath(
        ClassBoardResourceCatalogAssetBundle_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B19708 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_4562/*"ClassBoard/Icon/DownloadClassBoardIconAtlas"*/, method, v2);
    byte_4B19708 = 1;
  }
  return (System_String_o *)StringLiteral_4562/*"ClassBoard/Icon/DownloadClassBoardIconAtlas"*/;
}


// local variable allocation has failed, the output may be wrong!
Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o __fastcall ClassBoardResourceCatalogAssetBundle__GetObject___Il2CppFullySharedGenericType_(
        ClassBoardResourceCatalogAssetBundle_o *this,
        AssetData_o *assetData,
        System_String_o *name,
        const MethodInfo_2F06B54 *method)
{
  __int64 v4; // x4
  __int64 v5; // x20
  __int64 v8; // x8
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x21
  void *v13; // x0
  __int64 v14; // x1
  __int64 v15; // x1
  Il2CppObject *Object_object__49237568; // x23
  __int64 *v17; // x1
  __int64 v18; // x0
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v19; // x0 OVERLAPPED
  void *v20; // x1
  __int64 v21[2]; // [xsp+0h] [xbp-10h] BYREF
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o result; // 0:x0.16

  v5 = v4;
  v21[1] = *(_QWORD *)(_ReadStatusReg(ARM64_SYSREG(3, 3, 13, 0, 2)) + 40);
  v8 = *(_QWORD *)(v4 + 56);
  if ( !v8 )
  {
    sub_1BCA7E0(&Method_AssetData_GetObject_GameObject____76836696, assetData, name);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v10, v11);
    v8 = *(_QWORD *)(v5 + 56);
    if ( !v8 )
    {
      sub_1C1C718(v5);
      v8 = *(_QWORD *)(v5 + 56);
    }
  }
  v12 = *(unsigned int *)(*(_QWORD *)v8 + 252LL);
  v13 = memset((char *)v21 - ((v12 + 15) & 0x1FFFFFFF0LL), 0, *(_DWORD *)(*(_QWORD *)v8 + 252LL));
  if ( !assetData )
    goto LABEL_12;
  Object_object__49237568 = AssetData__GetObject_object__49237568(
                              assetData,
                              name,
                              (const MethodInfo_2EF4E40 *)Method_AssetData_GetObject_GameObject____76836696);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15);
  v13 = (void *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Object_object__49237568, 0LL, 0LL);
  if ( ((unsigned __int8)v13 & 1) == 0 )
  {
    if ( Object_object__49237568 )
    {
      v17 = *(__int64 **)(*(_QWORD *)(v5 + 56) + 8LL);
      v18 = *v17;
      v21[0] = (__int64)v21 - ((v12 + 15) & 0x1FFFFFFF0LL);
      ((void (__fastcall *)(__int64, __int64 *, Il2CppObject *, __int64 *, __int64))v17[2])(
        v18,
        v17,
        Object_object__49237568,
        v21,
        v21[0]);
      goto LABEL_11;
    }
LABEL_12:
    sub_1BCAA3C(v13, v14);
  }
  memset((char *)v21 - ((v12 + 15) & 0x1FFFFFFF0LL), 0, v12);
  memcpy((char *)v21 - ((v12 + 15) & 0x1FFFFFFF0LL), (char *)v21 - ((v12 + 15) & 0x1FFFFFFF0LL), v12);
LABEL_11:
  v19 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)memcpy(
                                                                    (void *)method,
                                                                    (char *)v21 - ((v12 + 15) & 0x1FFFFFFF0LL),
                                                                    v12);
  result.monitor = v20;
  result.klass = v19;
  return result;
}


Il2CppObject *__fastcall ClassBoardResourceCatalogAssetBundle__GetObject_object_(
        ClassBoardResourceCatalogAssetBundle_o *this,
        AssetData_o *assetData,
        System_String_o *name,
        const MethodInfo_2F06A90 *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  Il2CppObject *Object_object__49237568; // x20

  if ( !method->rgctx_data )
  {
    sub_1BCA7E0(&Method_AssetData_GetObject_GameObject____76836696, assetData, name);
    this = (ClassBoardResourceCatalogAssetBundle_o *)sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v7, v8);
    if ( !method->rgctx_data )
      this = (ClassBoardResourceCatalogAssetBundle_o *)sub_1C1C718(method);
  }
  if ( !assetData )
    goto LABEL_11;
  Object_object__49237568 = AssetData__GetObject_object__49237568(
                              assetData,
                              name,
                              (const MethodInfo_2EF4E40 *)Method_AssetData_GetObject_GameObject____76836696);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
  this = (ClassBoardResourceCatalogAssetBundle_o *)UnityEngine_Object__op_Equality(
                                                     (UnityEngine_Object_o *)Object_object__49237568,
                                                     0LL,
                                                     0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
    return 0LL;
  if ( !Object_object__49237568 )
LABEL_11:
    sub_1BCAA3C(this, assetData);
  return UnityEngine_GameObject__GetComponent_object_(
           (UnityEngine_GameObject_o *)Object_object__49237568,
           (const MethodInfo_2F626D0 *)method->rgctx_data->_1_UnityEngine_GameObject_GetComponent_T_);
}


// local variable allocation has failed, the output may be wrong!
ClassBoardBlank_o *__fastcall ClassBoardResourceCatalogAssetBundle__GetUniqueBlankObject(
        ClassBoardResourceCatalogAssetBundle_o *this,
        int32_t assetId,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  AssetData_o *mainAssetData; // x20
  System_String_o *v7; // x0
  System_String_o *v8; // x0
  int32_t v10; // [xsp+Ch] [xbp-24h] BYREF

  v10 = assetId;
  if ( (byte_4B19706 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardBlank___, *(_QWORD *)&assetId, method);
    sub_1BCA7E0(&StringLiteral_4568/*"ClassBoardBlank"*/, v4, v5);
    byte_4B19706 = 1;
  }
  mainAssetData = this->fields.mainAssetData;
  v7 = System_Int32__ToString((int32_t)&v10, 0LL);
  v8 = System_String__Concat_62401220((System_String_o *)StringLiteral_4568/*"ClassBoardBlank"*/, v7, 0LL);
  return (ClassBoardBlank_o *)ClassBoardResourceCatalogAssetBundle__GetObject_object_(
                                this,
                                mainAssetData,
                                v8,
                                (const MethodInfo_2F06A90 *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardBlank___);
}


// local variable allocation has failed, the output may be wrong!
ClassBoardLock_o *__fastcall ClassBoardResourceCatalogAssetBundle__GetUniqueLockObject(
        ClassBoardResourceCatalogAssetBundle_o *this,
        int32_t assetId,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  AssetData_o *mainAssetData; // x20
  System_String_o *v7; // x0
  System_String_o *v8; // x0
  int32_t v10; // [xsp+Ch] [xbp-24h] BYREF

  v10 = assetId;
  if ( (byte_4B19707 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardLock___, *(_QWORD *)&assetId, method);
    sub_1BCA7E0(&StringLiteral_4571/*"ClassBoardLock"*/, v4, v5);
    byte_4B19707 = 1;
  }
  mainAssetData = this->fields.mainAssetData;
  v7 = System_Int32__ToString((int32_t)&v10, 0LL);
  v8 = System_String__Concat_62401220((System_String_o *)StringLiteral_4571/*"ClassBoardLock"*/, v7, 0LL);
  return (ClassBoardLock_o *)ClassBoardResourceCatalogAssetBundle__GetObject_object_(
                               this,
                               mainAssetData,
                               v8,
                               (const MethodInfo_2F06A90 *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardLock___);
}


// local variable allocation has failed, the output may be wrong!
ClassBoardSquare_o *__fastcall ClassBoardResourceCatalogAssetBundle__GetUniqueSquareObject(
        ClassBoardResourceCatalogAssetBundle_o *this,
        int32_t assetId,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  AssetData_o *mainAssetData; // x20
  System_String_o *v7; // x0
  System_String_o *v8; // x0
  int32_t v10; // [xsp+Ch] [xbp-24h] BYREF

  v10 = assetId;
  if ( (byte_4B19705 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardSquare___, *(_QWORD *)&assetId, method);
    sub_1BCA7E0(&StringLiteral_4577/*"ClassBoardSquare"*/, v4, v5);
    byte_4B19705 = 1;
  }
  mainAssetData = this->fields.mainAssetData;
  v7 = System_Int32__ToString((int32_t)&v10, 0LL);
  v8 = System_String__Concat_62401220((System_String_o *)StringLiteral_4577/*"ClassBoardSquare"*/, v7, 0LL);
  return (ClassBoardSquare_o *)ClassBoardResourceCatalogAssetBundle__GetObject_object_(
                                 this,
                                 mainAssetData,
                                 v8,
                                 (const MethodInfo_2F06A90 *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardSquare___);
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
    sub_1BCAA3C(assetStorageLoadWrapper, assetBundlePath);
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))loadCallback->fields.m_target)(
    loadCallback->fields.original_method_info,
    0LL,
    *(_QWORD *)&loadCallback->fields.extra_arg);
}


void __fastcall ClassBoardResourceCatalogAssetBundle__LoadEnd(
        ClassBoardResourceCatalogAssetBundle_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x1
  __int64 v51; // x2
  Il2CppObject *v52; // x24
  Il2CppObject *v53; // x23
  Il2CppObject *v54; // x25
  Il2CppObject *v55; // x26
  Il2CppObject *v56; // x27
  Il2CppObject *v57; // x22
  Il2CppObject *v58; // x21
  char *Object_object__49237568; // x0
  __int64 v60; // x1
  int64_t v61; // x28
  int64_t v62; // x29
  const MethodInfo *v63; // x5
  int64_t v64; // x20
  const MethodInfo *v65; // x6
  const MethodInfo *v66; // x5
  int64_t v67; // x2
  int32_t v68; // w3
  System_String_o *v69; // x4
  BattleSetupInfo_o *v70; // x5
  FollowerInfo_o *v71; // x6
  PartyListViewItem_o *v72; // x7
  int64_t v73; // x2
  int32_t v74; // w3
  System_String_o *v75; // x4
  BattleSetupInfo_o *v76; // x5
  FollowerInfo_o *v77; // x6
  PartyListViewItem_o *v78; // x7
  int64_t v79; // x2
  int32_t v80; // w3
  System_String_o *v81; // x4
  BattleSetupInfo_o *v82; // x5
  FollowerInfo_o *v83; // x6
  PartyListViewItem_o *v84; // x7
  struct System_Action_o *loadEndCallback; // x8
  ClassBoardLock_o *lockAsset; // [xsp+8h] [xbp-78h]
  Il2CppObject *v87; // [xsp+10h] [xbp-70h]
  Il2CppObject *Object_object; // [xsp+18h] [xbp-68h]

  if ( (byte_4B19703 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_AssetData_GetObject_GameObject____76836696, method, v2);
    sub_1BCA7E0(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardBackground___, v4, v5);
    sub_1BCA7E0(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardBlank___, v6, v7);
    sub_1BCA7E0(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardDisableOpenDialog___, v8, v9);
    sub_1BCA7E0(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardLine___, v10, v11);
    sub_1BCA7E0(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardLockOpenConfirmDialog___, v12, v13);
    sub_1BCA7E0(
      &Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardLockReleaseConditionDialog___,
      v14,
      v15);
    sub_1BCA7E0(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardLock___, v16, v17);
    sub_1BCA7E0(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardSquareDetailDialog___, v18, v19);
    sub_1BCA7E0(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardSquareOpenConfirmDialog___, v20, v21);
    sub_1BCA7E0(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardSquare___, v22, v23);
    sub_1BCA7E0(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardUIController___, v24, v25);
    sub_1BCA7E0(&StringLiteral_4567/*"ClassBoardBg"*/, v26, v27);
    sub_1BCA7E0(&StringLiteral_4573/*"ClassBoardLockReleaseConditionDialog"*/, v28, v29);
    sub_1BCA7E0(&StringLiteral_4570/*"ClassBoardLine"*/, v30, v31);
    sub_1BCA7E0(&StringLiteral_4578/*"ClassBoardSquareDetailDialog"*/, v32, v33);
    sub_1BCA7E0(&StringLiteral_4571/*"ClassBoardLock"*/, v34, v35);
    sub_1BCA7E0(&StringLiteral_4576/*"ClassBoardSelectView"*/, v36, v37);
    sub_1BCA7E0(&StringLiteral_6934/*"ForwardIconAnimObject"*/, v38, v39);
    sub_1BCA7E0(&StringLiteral_4568/*"ClassBoardBlank"*/, v40, v41);
    sub_1BCA7E0(&StringLiteral_4569/*"ClassBoardDisableOpenDialog"*/, v42, v43);
    sub_1BCA7E0(&StringLiteral_4572/*"ClassBoardLockOpenConfirmDialog"*/, v44, v45);
    sub_1BCA7E0(&StringLiteral_4577/*"ClassBoardSquare"*/, v46, v47);
    sub_1BCA7E0(&StringLiteral_4579/*"ClassBoardSquareOpenConfirmDialog"*/, v48, v49);
    sub_1BCA7E0(&StringLiteral_4580/*"ClassBoardUI"*/, v50, v51);
    byte_4B19703 = 1;
  }
  Object_object = ClassBoardResourceCatalogAssetBundle__GetObject_object_(
                    this,
                    this->fields.mainAssetData,
                    (System_String_o *)StringLiteral_4577/*"ClassBoardSquare"*/,
                    (const MethodInfo_2F06A90 *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardSquare___);
  v87 = ClassBoardResourceCatalogAssetBundle__GetObject_object_(
          this,
          this->fields.mainAssetData,
          (System_String_o *)StringLiteral_4570/*"ClassBoardLine"*/,
          (const MethodInfo_2F06A90 *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardLine___);
  lockAsset = (ClassBoardLock_o *)ClassBoardResourceCatalogAssetBundle__GetObject_object_(
                                    this,
                                    this->fields.mainAssetData,
                                    (System_String_o *)StringLiteral_4571/*"ClassBoardLock"*/,
                                    (const MethodInfo_2F06A90 *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardLock___);
  v52 = ClassBoardResourceCatalogAssetBundle__GetObject_object_(
          this,
          this->fields.mainAssetData,
          (System_String_o *)StringLiteral_4568/*"ClassBoardBlank"*/,
          (const MethodInfo_2F06A90 *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardBlank___);
  v53 = ClassBoardResourceCatalogAssetBundle__GetObject_object_(
          this,
          this->fields.mainAssetData,
          (System_String_o *)StringLiteral_4569/*"ClassBoardDisableOpenDialog"*/,
          (const MethodInfo_2F06A90 *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardDisableOpenDialog___);
  v54 = ClassBoardResourceCatalogAssetBundle__GetObject_object_(
          this,
          this->fields.mainAssetData,
          (System_String_o *)StringLiteral_4579/*"ClassBoardSquareOpenConfirmDialog"*/,
          (const MethodInfo_2F06A90 *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardSquareOpenConfirmDialog___);
  v55 = ClassBoardResourceCatalogAssetBundle__GetObject_object_(
          this,
          this->fields.mainAssetData,
          (System_String_o *)StringLiteral_4572/*"ClassBoardLockOpenConfirmDialog"*/,
          (const MethodInfo_2F06A90 *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardLockOpenConfirmDialog___);
  v56 = ClassBoardResourceCatalogAssetBundle__GetObject_object_(
          this,
          this->fields.mainAssetData,
          (System_String_o *)StringLiteral_4573/*"ClassBoardLockReleaseConditionDialog"*/,
          (const MethodInfo_2F06A90 *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardLockReleaseConditionDialog___);
  v57 = ClassBoardResourceCatalogAssetBundle__GetObject_object_(
          this,
          this->fields.mainAssetData,
          (System_String_o *)StringLiteral_4578/*"ClassBoardSquareDetailDialog"*/,
          (const MethodInfo_2F06A90 *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardSquareDetailDialog___);
  v58 = ClassBoardResourceCatalogAssetBundle__GetObject_object_(
          this,
          this->fields.mainAssetData,
          (System_String_o *)StringLiteral_4580/*"ClassBoardUI"*/,
          (const MethodInfo_2F06A90 *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardUIController___);
  Object_object__49237568 = (char *)ClassBoardResourceCatalogAssetBundle__GetObject_object_(
                                      this,
                                      this->fields.modelAssetData,
                                      (System_String_o *)StringLiteral_4567/*"ClassBoardBg"*/,
                                      (const MethodInfo_2F06A90 *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardBackground___);
  if ( !this->fields.boardSelectViewAssetData )
    goto LABEL_13;
  v61 = (int64_t)Object_object__49237568;
  Object_object__49237568 = (char *)AssetData__GetObject_object__49237568(
                                      this->fields.boardSelectViewAssetData,
                                      (System_String_o *)StringLiteral_4576/*"ClassBoardSelectView"*/,
                                      (const MethodInfo_2EF4E40 *)Method_AssetData_GetObject_GameObject____76836696);
  if ( !this->fields.boardSelectViewAssetData )
    goto LABEL_13;
  v62 = (int64_t)Object_object__49237568;
  Object_object__49237568 = (char *)AssetData__GetObject_object__49237568(
                                      this->fields.boardSelectViewAssetData,
                                      (System_String_o *)StringLiteral_6934/*"ForwardIconAnimObject"*/,
                                      (const MethodInfo_2EF4E40 *)Method_AssetData_GetObject_GameObject____76836696);
  if ( !this->fields._Contents_k__BackingField )
    goto LABEL_13;
  v64 = (int64_t)Object_object__49237568;
  ClassBoardResourceContents__SetContents(
    this->fields._Contents_k__BackingField,
    (ClassBoardSquare_o *)Object_object,
    (ClassBoardLine_o *)v87,
    lockAsset,
    (ClassBoardBlank_o *)v52,
    v63);
  Object_object__49237568 = (char *)this->fields._Contents_k__BackingField;
  if ( !Object_object__49237568 )
    goto LABEL_13;
  ClassBoardResourceContents__SetContentsDialog(
    (ClassBoardResourceContents_o *)Object_object__49237568,
    (ClassBoardDisableOpenDialog_o *)v53,
    (ClassBoardSquareOpenConfirmDialog_o *)v54,
    (ClassBoardLockOpenConfirmDialog_o *)v55,
    (ClassBoardLockReleaseConditionDialog_o *)v56,
    (ClassBoardSquareDetailDialog_o *)v57,
    v65);
  Object_object__49237568 = (char *)this->fields._Contents_k__BackingField;
  if ( !Object_object__49237568 )
    goto LABEL_13;
  ClassBoardResourceContents__SetContentsUI(
    (ClassBoardResourceContents_o *)Object_object__49237568,
    (ClassBoardUIController_o *)v58,
    this->fields.boardUiAtlasManagerUnit,
    this->fields.iconAtlasManagerUnit,
    this->fields.classUiAtlasManagerUnit,
    v66);
  Object_object__49237568 = (char *)this->fields._Contents_k__BackingField;
  if ( !Object_object__49237568 )
    goto LABEL_13;
  *((_QWORD *)Object_object__49237568 + 12) = v61;
  sub_1BCA784((PartyOrganizationUtility_o *)(Object_object__49237568 + 96), v61, v67, v68, v69, v70, v71, v72);
  Object_object__49237568 = (char *)this->fields._Contents_k__BackingField;
  if ( !Object_object__49237568
    || (*((_QWORD *)Object_object__49237568 + 13) = v62,
        sub_1BCA784((PartyOrganizationUtility_o *)(Object_object__49237568 + 104), v62, v73, v74, v75, v76, v77, v78),
        (Object_object__49237568 = (char *)this->fields._Contents_k__BackingField) == 0LL)
    || (*((_QWORD *)Object_object__49237568 + 14) = v64,
        sub_1BCA784((PartyOrganizationUtility_o *)(Object_object__49237568 + 112), v64, v79, v80, v81, v82, v83, v84),
        (loadEndCallback = this->fields.loadEndCallback) == 0LL) )
  {
LABEL_13:
    sub_1BCAA3C(Object_object__49237568, v60);
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
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x1
  __int64 v39; // x2
  AssetStorageLoadWrapper_o *assetStorageLoadWrapper; // x20
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x3
  AtlasManagerUnit_o *v44; // x21
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  AssetStorageLoadWrapper_o *v51; // x20
  __int64 v52; // x1
  __int64 v53; // x2
  __int64 v54; // x3
  AtlasManagerUnit_o *v55; // x21
  int64_t v56; // x2
  int32_t v57; // w3
  System_String_o *v58; // x4
  BattleSetupInfo_o *v59; // x5
  FollowerInfo_o *v60; // x6
  PartyListViewItem_o *v61; // x7
  AssetStorageLoadWrapper_o *v62; // x20
  __int64 v63; // x1
  __int64 v64; // x2
  __int64 v65; // x3
  AtlasManagerUnit_o *v66; // x21
  int64_t v67; // x2
  int32_t v68; // w3
  System_String_o *v69; // x4
  BattleSetupInfo_o *v70; // x5
  FollowerInfo_o *v71; // x6
  PartyListViewItem_o *v72; // x7
  __int64 v73; // x20
  __int64 v74; // x1
  __int64 v75; // x2
  __int64 v76; // x3
  System_Action_object__o *v77; // x21
  ChainableActionBase_o *v78; // x0
  __int64 v79; // x1
  int64_t v80; // x2
  int32_t v81; // w3
  System_String_o *v82; // x4
  BattleSetupInfo_o *v83; // x5
  FollowerInfo_o *v84; // x6
  PartyListViewItem_o *v85; // x7
  __int64 v86; // x1
  __int64 v87; // x2
  __int64 v88; // x3
  System_Action_object__o *v89; // x21
  int64_t v90; // x2
  int32_t v91; // w3
  System_String_o *v92; // x4
  BattleSetupInfo_o *v93; // x5
  FollowerInfo_o *v94; // x6
  PartyListViewItem_o *v95; // x7
  __int64 v96; // x1
  __int64 v97; // x2
  __int64 v98; // x3
  System_Action_object__o *v99; // x21
  int64_t v100; // x2
  int32_t v101; // w3
  System_String_o *v102; // x4
  BattleSetupInfo_o *v103; // x5
  FollowerInfo_o *v104; // x6
  PartyListViewItem_o *v105; // x7
  __int64 v106; // x1
  __int64 v107; // x2
  __int64 v108; // x3
  System_Action_object__o *v109; // x21
  int64_t v110; // x2
  int32_t v111; // w3
  System_String_o *v112; // x4
  BattleSetupInfo_o *v113; // x5
  FollowerInfo_o *v114; // x6
  PartyListViewItem_o *v115; // x7
  __int64 v116; // x1
  __int64 v117; // x2
  __int64 v118; // x3
  System_Action_object__o *v119; // x21
  int64_t v120; // x2
  int32_t v121; // w3
  System_String_o *v122; // x4
  BattleSetupInfo_o *v123; // x5
  FollowerInfo_o *v124; // x6
  PartyListViewItem_o *v125; // x7
  __int64 v126; // x1
  __int64 v127; // x2
  __int64 v128; // x3
  System_Action_object__o *v129; // x21
  int64_t v130; // x2
  int32_t v131; // w3
  System_String_o *v132; // x4
  BattleSetupInfo_o *v133; // x5
  FollowerInfo_o *v134; // x6
  PartyListViewItem_o *v135; // x7
  __int64 v136; // x1
  __int64 v137; // x2
  __int64 v138; // x3
  ChainableActionParallel_o *v139; // x21
  __int64 v140; // x20
  __int64 v141; // x1
  __int64 v142; // x2
  __int64 v143; // x3
  System_Action_o *v144; // x22
  int64_t v145; // x2
  int32_t v146; // w3
  System_String_o *v147; // x4
  BattleSetupInfo_o *v148; // x5
  FollowerInfo_o *v149; // x6
  PartyListViewItem_o *v150; // x7

  if ( (byte_4B19702 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action___TypeInfo, callback, method);
    sub_1BCA7E0(&System_Action_Action____TypeInfo, v10, v11);
    sub_1BCA7E0(&System_Action_Action__TypeInfo, v12, v13);
    sub_1BCA7E0(&System_Action_TypeInfo, v14, v15);
    sub_1BCA7E0(&AtlasManagerUnit_TypeInfo, v16, v17);
    sub_1BCA7E0(&ChainableActionParallel_TypeInfo, v18, v19);
    sub_1BCA7E0(&Method_ClassBoardResourceCatalogAssetBundle_LoadEnd__, v20, v21);
    sub_1BCA7E0(&Method_ClassBoardResourceCatalogAssetBundle__LoadSystemAsset_b__32_0__, v22, v23);
    sub_1BCA7E0(&Method_ClassBoardResourceCatalogAssetBundle__LoadSystemAsset_b__32_1__, v24, v25);
    sub_1BCA7E0(&Method_ClassBoardResourceCatalogAssetBundle__LoadSystemAsset_b__32_2__, v26, v27);
    sub_1BCA7E0(&Method_ClassBoardResourceCatalogAssetBundle__LoadSystemAsset_b__32_3__, v28, v29);
    sub_1BCA7E0(&Method_ClassBoardResourceCatalogAssetBundle__LoadSystemAsset_b__32_4__, v30, v31);
    sub_1BCA7E0(&Method_ClassBoardResourceCatalogAssetBundle__LoadSystemAsset_b__32_5__, v32, v33);
    sub_1BCA7E0(&StringLiteral_4566/*"ClassBoard/UI/DownloadClassBoardUIAtlas"*/, v34, v35);
    sub_1BCA7E0(&StringLiteral_4565/*"ClassBoard/UI/DownloadClassBoardClassUIAtlas"*/, v36, v37);
    sub_1BCA7E0(&StringLiteral_4562/*"ClassBoard/Icon/DownloadClassBoardIconAtlas"*/, v38, v39);
    byte_4B19702 = 1;
  }
  this->fields.loadEndCallback = callback;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.loadEndCallback,
    (int64_t)callback,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  assetStorageLoadWrapper = this->fields.assetStorageLoadWrapper;
  v44 = (AtlasManagerUnit_o *)sub_1BCAA2C(AtlasManagerUnit_TypeInfo, v41, v42, v43);
  AtlasManagerUnit___ctor(v44, (System_String_o *)StringLiteral_4566/*"ClassBoard/UI/DownloadClassBoardUIAtlas"*/, assetStorageLoadWrapper, 0LL);
  this->fields.boardUiAtlasManagerUnit = v44;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.boardUiAtlasManagerUnit,
    (int64_t)v44,
    v45,
    v46,
    v47,
    v48,
    v49,
    v50);
  v51 = this->fields.assetStorageLoadWrapper;
  v55 = (AtlasManagerUnit_o *)sub_1BCAA2C(AtlasManagerUnit_TypeInfo, v52, v53, v54);
  AtlasManagerUnit___ctor(v55, (System_String_o *)StringLiteral_4565/*"ClassBoard/UI/DownloadClassBoardClassUIAtlas"*/, v51, 0LL);
  this->fields.classUiAtlasManagerUnit = v55;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.classUiAtlasManagerUnit,
    (int64_t)v55,
    v56,
    v57,
    v58,
    v59,
    v60,
    v61);
  v62 = this->fields.assetStorageLoadWrapper;
  v66 = (AtlasManagerUnit_o *)sub_1BCAA2C(AtlasManagerUnit_TypeInfo, v63, v64, v65);
  AtlasManagerUnit___ctor(v66, (System_String_o *)StringLiteral_4562/*"ClassBoard/Icon/DownloadClassBoardIconAtlas"*/, v62, 0LL);
  this->fields.iconAtlasManagerUnit = v66;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.iconAtlasManagerUnit,
    (int64_t)v66,
    v67,
    v68,
    v69,
    v70,
    v71,
    v72);
  v73 = sub_1BCA888(System_Action_Action____TypeInfo, 6LL);
  v77 = (System_Action_object__o *)sub_1BCAA2C(System_Action_Action__TypeInfo, v74, v75, v76);
  System_Action_object____ctor(
    v77,
    (Il2CppObject *)this,
    Method_ClassBoardResourceCatalogAssetBundle__LoadSystemAsset_b__32_0__,
    0LL);
  if ( !v73 )
    goto LABEL_16;
  if ( !*(_DWORD *)(v73 + 24) )
    goto LABEL_15;
  *(_QWORD *)(v73 + 32) = v77;
  sub_1BCA784((PartyOrganizationUtility_o *)(v73 + 32), (int64_t)v77, v80, v81, v82, v83, v84, v85);
  v89 = (System_Action_object__o *)sub_1BCAA2C(System_Action_Action__TypeInfo, v86, v87, v88);
  System_Action_object____ctor(
    v89,
    (Il2CppObject *)this,
    Method_ClassBoardResourceCatalogAssetBundle__LoadSystemAsset_b__32_1__,
    0LL);
  if ( *(_DWORD *)(v73 + 24) <= 1u )
    goto LABEL_15;
  *(_QWORD *)(v73 + 40) = v89;
  sub_1BCA784((PartyOrganizationUtility_o *)(v73 + 40), (int64_t)v89, v90, v91, v92, v93, v94, v95);
  v99 = (System_Action_object__o *)sub_1BCAA2C(System_Action_Action__TypeInfo, v96, v97, v98);
  System_Action_object____ctor(
    v99,
    (Il2CppObject *)this,
    Method_ClassBoardResourceCatalogAssetBundle__LoadSystemAsset_b__32_2__,
    0LL);
  if ( *(_DWORD *)(v73 + 24) <= 2u )
    goto LABEL_15;
  *(_QWORD *)(v73 + 48) = v99;
  sub_1BCA784((PartyOrganizationUtility_o *)(v73 + 48), (int64_t)v99, v100, v101, v102, v103, v104, v105);
  v109 = (System_Action_object__o *)sub_1BCAA2C(System_Action_Action__TypeInfo, v106, v107, v108);
  System_Action_object____ctor(
    v109,
    (Il2CppObject *)this,
    Method_ClassBoardResourceCatalogAssetBundle__LoadSystemAsset_b__32_3__,
    0LL);
  if ( *(_DWORD *)(v73 + 24) <= 3u )
    goto LABEL_15;
  *(_QWORD *)(v73 + 56) = v109;
  sub_1BCA784((PartyOrganizationUtility_o *)(v73 + 56), (int64_t)v109, v110, v111, v112, v113, v114, v115);
  v119 = (System_Action_object__o *)sub_1BCAA2C(System_Action_Action__TypeInfo, v116, v117, v118);
  System_Action_object____ctor(
    v119,
    (Il2CppObject *)this,
    Method_ClassBoardResourceCatalogAssetBundle__LoadSystemAsset_b__32_4__,
    0LL);
  if ( *(_DWORD *)(v73 + 24) <= 4u )
    goto LABEL_15;
  *(_QWORD *)(v73 + 64) = v119;
  sub_1BCA784((PartyOrganizationUtility_o *)(v73 + 64), (int64_t)v119, v120, v121, v122, v123, v124, v125);
  v129 = (System_Action_object__o *)sub_1BCAA2C(System_Action_Action__TypeInfo, v126, v127, v128);
  System_Action_object____ctor(
    v129,
    (Il2CppObject *)this,
    Method_ClassBoardResourceCatalogAssetBundle__LoadSystemAsset_b__32_5__,
    0LL);
  if ( *(_DWORD *)(v73 + 24) <= 5u )
    goto LABEL_15;
  *(_QWORD *)(v73 + 72) = v129;
  sub_1BCA784((PartyOrganizationUtility_o *)(v73 + 72), (int64_t)v129, v130, v131, v132, v133, v134, v135);
  v139 = (ChainableActionParallel_o *)sub_1BCAA2C(ChainableActionParallel_TypeInfo, v136, v137, v138);
  ChainableActionParallel___ctor_47119316(v139, (System_Action_Action__array *)v73, 0LL);
  v140 = sub_1BCA888(System_Action___TypeInfo, 1LL);
  v144 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v141, v142, v143);
  System_Action___ctor(v144, (Il2CppObject *)this, Method_ClassBoardResourceCatalogAssetBundle_LoadEnd__, 0LL);
  if ( !v140 )
    goto LABEL_16;
  if ( !*(_DWORD *)(v140 + 24) )
LABEL_15:
    sub_1BCAA44(v78, v79);
  *(_QWORD *)(v140 + 32) = v144;
  sub_1BCA784((PartyOrganizationUtility_o *)(v140 + 32), (int64_t)v144, v145, v146, v147, v148, v149, v150);
  if ( !v139
    || (v78 = ChainableActionBase__Final((ChainableActionBase_o *)v139, (System_Action_array *)v140, 0LL)) == 0LL )
  {
LABEL_16:
    sub_1BCAA3C(v78, v79);
  }
  ChainableActionBase__Execute(v78, 0LL);
}


void __fastcall ClassBoardResourceCatalogAssetBundle__ReleaseAll(
        ClassBoardResourceCatalogAssetBundle_o *this,
        const MethodInfo *method)
{
  AssetStorageLoadWrapper_o *assetStorageLoadWrapper; // x0

  assetStorageLoadWrapper = this->fields.assetStorageLoadWrapper;
  if ( !assetStorageLoadWrapper )
    sub_1BCAA3C(0LL, method);
  AssetStorageLoadWrapper__ReleaseAll(assetStorageLoadWrapper, 0LL);
}


void __fastcall ClassBoardResourceCatalogAssetBundle__ReloadBoardUIAtlas(
        ClassBoardResourceCatalogAssetBundle_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x20
  __int64 v15; // x0
  __int64 v16; // x1
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x3
  AtlasManagerUnit_o *boardUiAtlasManagerUnit; // x0
  AssetStorageLoadWrapper_o *assetStorageLoadWrapper; // x22
  AtlasManagerUnit_o *v34; // x23
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  AtlasManagerUnit_o *v41; // x19
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x3
  System_Action_o *v45; // x21

  if ( (byte_4B19704 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, callback, method);
    sub_1BCA7E0(&AtlasManagerUnit_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_ClassBoardResourceCatalogAssetBundle___c__DisplayClass35_0__ReloadBoardUIAtlas_b__0__, v8, v9);
    sub_1BCA7E0(&ClassBoardResourceCatalogAssetBundle___c__DisplayClass35_0_TypeInfo, v10, v11);
    sub_1BCA7E0(&StringLiteral_4566/*"ClassBoard/UI/DownloadClassBoardUIAtlas"*/, v12, v13);
    byte_4B19704 = 1;
  }
  v14 = sub_1BCAA2C(ClassBoardResourceCatalogAssetBundle___c__DisplayClass35_0_TypeInfo, callback, method, v3);
  System_Object___ctor((Il2CppObject *)v14, 0LL);
  if ( !v14 )
    goto LABEL_8;
  *(_QWORD *)(v14 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v14 + 16), (int64_t)this, v17, v18, v19, v20, v21, v22);
  *(_QWORD *)(v14 + 24) = callback;
  sub_1BCA784((PartyOrganizationUtility_o *)(v14 + 24), (int64_t)callback, v23, v24, v25, v26, v27, v28);
  boardUiAtlasManagerUnit = this->fields.boardUiAtlasManagerUnit;
  if ( boardUiAtlasManagerUnit )
    AtlasManagerUnit__Release(boardUiAtlasManagerUnit, 0LL);
  assetStorageLoadWrapper = this->fields.assetStorageLoadWrapper;
  v34 = (AtlasManagerUnit_o *)sub_1BCAA2C(AtlasManagerUnit_TypeInfo, v29, v30, v31);
  AtlasManagerUnit___ctor(v34, (System_String_o *)StringLiteral_4566/*"ClassBoard/UI/DownloadClassBoardUIAtlas"*/, assetStorageLoadWrapper, 0LL);
  this->fields.boardUiAtlasManagerUnit = v34;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.boardUiAtlasManagerUnit,
    (int64_t)v34,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
  v41 = this->fields.boardUiAtlasManagerUnit;
  v45 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v42, v43, v44);
  System_Action___ctor(
    v45,
    (Il2CppObject *)v14,
    Method_ClassBoardResourceCatalogAssetBundle___c__DisplayClass35_0__ReloadBoardUIAtlas_b__0__,
    0LL);
  if ( !v41 )
LABEL_8:
    sub_1BCAA3C(v15, v16);
  AtlasManagerUnit__Load(v41, v45, 1, 0LL);
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
    sub_1BCAA3C(0LL, sprite);
  AtlasManagerUnit__SetUI(boardUiAtlasManagerUnit, sprite, spriteName, 0LL);
}


void __fastcall ClassBoardResourceCatalogAssetBundle___LoadSystemAsset_b__32_0(
        ClassBoardResourceCatalogAssetBundle_o *this,
        System_Action_o *f,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x21
  __int64 v13; // x0
  __int64 v14; // x1
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x3
  AssetLoader_LoadEndDataHandler_o *v30; // x20
  const MethodInfo *v31; // x3

  if ( (byte_4B19709 & 1) == 0 )
  {
    sub_1BCA7E0(&AssetLoader_LoadEndDataHandler_TypeInfo, f, method);
    sub_1BCA7E0(&Method_ClassBoardResourceCatalogAssetBundle___c__DisplayClass32_0__LoadSystemAsset_b__6__, v6, v7);
    sub_1BCA7E0(&ClassBoardResourceCatalogAssetBundle___c__DisplayClass32_0_TypeInfo, v8, v9);
    sub_1BCA7E0(&StringLiteral_4563/*"ClassBoard/Main"*/, v10, v11);
    byte_4B19709 = 1;
  }
  v12 = sub_1BCAA2C(ClassBoardResourceCatalogAssetBundle___c__DisplayClass32_0_TypeInfo, f, method, v3);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  if ( !v12 )
    sub_1BCAA3C(v13, v14);
  *(_QWORD *)(v12 + 24) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v12 + 24), (int64_t)this, v15, v16, v17, v18, v19, v20);
  *(_QWORD *)(v12 + 16) = f;
  sub_1BCA784((PartyOrganizationUtility_o *)(v12 + 16), (int64_t)f, v21, v22, v23, v24, v25, v26);
  v30 = (AssetLoader_LoadEndDataHandler_o *)sub_1BCAA2C(AssetLoader_LoadEndDataHandler_TypeInfo, v27, v28, v29);
  AssetLoader_LoadEndDataHandler___ctor(
    v30,
    (Il2CppObject *)v12,
    Method_ClassBoardResourceCatalogAssetBundle___c__DisplayClass32_0__LoadSystemAsset_b__6__,
    0LL);
  ClassBoardResourceCatalogAssetBundle__LoadAssetStorage(this, (System_String_o *)StringLiteral_4563/*"ClassBoard/Main"*/, v30, v31);
}


void __fastcall ClassBoardResourceCatalogAssetBundle___LoadSystemAsset_b__32_1(
        ClassBoardResourceCatalogAssetBundle_o *this,
        System_Action_o *f,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x21
  __int64 v13; // x0
  __int64 v14; // x1
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x3
  AssetLoader_LoadEndDataHandler_o *v30; // x20
  const MethodInfo *v31; // x3

  if ( (byte_4B1970A & 1) == 0 )
  {
    sub_1BCA7E0(&AssetLoader_LoadEndDataHandler_TypeInfo, f, method);
    sub_1BCA7E0(&Method_ClassBoardResourceCatalogAssetBundle___c__DisplayClass32_1__LoadSystemAsset_b__7__, v6, v7);
    sub_1BCA7E0(&ClassBoardResourceCatalogAssetBundle___c__DisplayClass32_1_TypeInfo, v8, v9);
    sub_1BCA7E0(&StringLiteral_4550/*"ClassBoard/Bg"*/, v10, v11);
    byte_4B1970A = 1;
  }
  v12 = sub_1BCAA2C(ClassBoardResourceCatalogAssetBundle___c__DisplayClass32_1_TypeInfo, f, method, v3);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  if ( !v12 )
    sub_1BCAA3C(v13, v14);
  *(_QWORD *)(v12 + 24) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v12 + 24), (int64_t)this, v15, v16, v17, v18, v19, v20);
  *(_QWORD *)(v12 + 16) = f;
  sub_1BCA784((PartyOrganizationUtility_o *)(v12 + 16), (int64_t)f, v21, v22, v23, v24, v25, v26);
  v30 = (AssetLoader_LoadEndDataHandler_o *)sub_1BCAA2C(AssetLoader_LoadEndDataHandler_TypeInfo, v27, v28, v29);
  AssetLoader_LoadEndDataHandler___ctor(
    v30,
    (Il2CppObject *)v12,
    Method_ClassBoardResourceCatalogAssetBundle___c__DisplayClass32_1__LoadSystemAsset_b__7__,
    0LL);
  ClassBoardResourceCatalogAssetBundle__LoadAssetStorage(this, (System_String_o *)StringLiteral_4550/*"ClassBoard/Bg"*/, v30, v31);
}


void __fastcall ClassBoardResourceCatalogAssetBundle___LoadSystemAsset_b__32_2(
        ClassBoardResourceCatalogAssetBundle_o *this,
        System_Action_o *f,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x21
  __int64 v13; // x0
  __int64 v14; // x1
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x3
  AssetLoader_LoadEndDataHandler_o *v30; // x20
  const MethodInfo *v31; // x3

  if ( (byte_4B1970B & 1) == 0 )
  {
    sub_1BCA7E0(&AssetLoader_LoadEndDataHandler_TypeInfo, f, method);
    sub_1BCA7E0(&Method_ClassBoardResourceCatalogAssetBundle___c__DisplayClass32_2__LoadSystemAsset_b__8__, v6, v7);
    sub_1BCA7E0(&ClassBoardResourceCatalogAssetBundle___c__DisplayClass32_2_TypeInfo, v8, v9);
    sub_1BCA7E0(&StringLiteral_4564/*"ClassBoard/Select"*/, v10, v11);
    byte_4B1970B = 1;
  }
  v12 = sub_1BCAA2C(ClassBoardResourceCatalogAssetBundle___c__DisplayClass32_2_TypeInfo, f, method, v3);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  if ( !v12 )
    sub_1BCAA3C(v13, v14);
  *(_QWORD *)(v12 + 24) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v12 + 24), (int64_t)this, v15, v16, v17, v18, v19, v20);
  *(_QWORD *)(v12 + 16) = f;
  sub_1BCA784((PartyOrganizationUtility_o *)(v12 + 16), (int64_t)f, v21, v22, v23, v24, v25, v26);
  v30 = (AssetLoader_LoadEndDataHandler_o *)sub_1BCAA2C(AssetLoader_LoadEndDataHandler_TypeInfo, v27, v28, v29);
  AssetLoader_LoadEndDataHandler___ctor(
    v30,
    (Il2CppObject *)v12,
    Method_ClassBoardResourceCatalogAssetBundle___c__DisplayClass32_2__LoadSystemAsset_b__8__,
    0LL);
  ClassBoardResourceCatalogAssetBundle__LoadAssetStorage(this, (System_String_o *)StringLiteral_4564/*"ClassBoard/Select"*/, v30, v31);
}


void __fastcall ClassBoardResourceCatalogAssetBundle___LoadSystemAsset_b__32_3(
        ClassBoardResourceCatalogAssetBundle_o *this,
        System_Action_o *f,
        const MethodInfo *method)
{
  AtlasManagerUnit_o *boardUiAtlasManagerUnit; // x0

  boardUiAtlasManagerUnit = this->fields.boardUiAtlasManagerUnit;
  if ( !boardUiAtlasManagerUnit )
    sub_1BCAA3C(0LL, f);
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
    sub_1BCAA3C(0LL, f);
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
    sub_1BCAA3C(0LL, f);
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
        sub_1BCA784(
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
    sub_1BCAA3C(_4__this, asset);
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
        sub_1BCA784(
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
    sub_1BCAA3C(_4__this, asset);
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
        sub_1BCA784(
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
    sub_1BCAA3C(_4__this, asset);
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
    sub_1BCAA3C(this, method);
  }
  boardUiAtlasManagerUnit = (struct System_Action_o *)_4__this->fields.boardUiAtlasManagerUnit;
  this[3].fields.callback = boardUiAtlasManagerUnit;
  sub_1BCA784(
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