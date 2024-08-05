void __fastcall ClassBoardResourceCatalogAssetBundle___ctor(
        ClassBoardResourceCatalogAssetBundle_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *v4; // x20
  int32_t v5; // w2
  int32_t v6; // w3
  AssetStorageLoadWrapper_o *v7; // x20
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_4A018EC & 1) == 0 )
  {
    sub_1B64870(&AssetStorageLoadWrapper_TypeInfo, method);
    sub_1B64870(&ClassBoardResourceContents_TypeInfo, v3);
    byte_4A018EC = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v4 = (Il2CppObject *)sub_1B64ABC(ClassBoardResourceContents_TypeInfo);
  System_Object___ctor(v4, 0LL);
  this->fields._Contents_k__BackingField = (struct ClassBoardResourceContents_o *)v4;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields._Contents_k__BackingField, (int32_t)v4, v5, v6);
  v7 = (AssetStorageLoadWrapper_o *)sub_1B64ABC(AssetStorageLoadWrapper_TypeInfo);
  AssetStorageLoadWrapper___ctor(v7, 0LL);
  this->fields.assetStorageLoadWrapper = v7;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)v7, v8, v9);
}


System_String_o *__fastcall ClassBoardResourceCatalogAssetBundle__GetIconAtlasPath(
        ClassBoardResourceCatalogAssetBundle_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A018F3 & 1) == 0 )
  {
    sub_1B64870(&StringLiteral_4471/*"ClassBoard/Icon/DownloadClassBoardIconAtlas"*/, method);
    byte_4A018F3 = 1;
  }
  return (System_String_o *)StringLiteral_4471/*"ClassBoard/Icon/DownloadClassBoardIconAtlas"*/;
}


// local variable allocation has failed, the output may be wrong!
Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o __fastcall ClassBoardResourceCatalogAssetBundle__GetObject___Il2CppFullySharedGenericType_(
        ClassBoardResourceCatalogAssetBundle_o *this,
        AssetData_o *assetData,
        System_String_o *name,
        const MethodInfo_2E2F810 *method)
{
  __int64 v4; // x4
  __int64 v5; // x20
  __int64 v8; // x8
  __int64 v10; // x1
  __int64 v11; // x21
  void *v12; // x0
  __int64 v13; // x1
  Il2CppObject *Object_object__48356600; // x23
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
    sub_1B64870(&Method_AssetData_GetObject_GameObject____75714440, assetData);
    sub_1B64870(&UnityEngine_Object_TypeInfo, v10);
    v8 = *(_QWORD *)(v5 + 56);
    if ( !v8 )
    {
      sub_1BB67A8();
      v8 = *(_QWORD *)(v5 + 56);
    }
  }
  v11 = *(unsigned int *)(*(_QWORD *)v8 + 252LL);
  v12 = memset((char *)v19 - ((v11 + 15) & 0x1FFFFFFF0LL), 0, *(_DWORD *)(*(_QWORD *)v8 + 252LL));
  if ( !assetData )
    goto LABEL_12;
  Object_object__48356600 = AssetData__GetObject_object__48356600(
                              assetData,
                              name,
                              (const MethodInfo_2E1DCF8 *)Method_AssetData_GetObject_GameObject____75714440);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v12 = (void *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Object_object__48356600, 0LL, 0LL);
  if ( ((unsigned __int8)v12 & 1) == 0 )
  {
    if ( Object_object__48356600 )
    {
      v15 = *(__int64 **)(*(_QWORD *)(v5 + 56) + 8LL);
      v16 = *v15;
      v19[0] = (__int64)v19 - ((v11 + 15) & 0x1FFFFFFF0LL);
      ((void (__fastcall *)(__int64, __int64 *, Il2CppObject *, __int64 *, __int64))v15[2])(
        v16,
        v15,
        Object_object__48356600,
        v19,
        v19[0]);
      goto LABEL_11;
    }
LABEL_12:
    sub_1B64ACC(v12, v13);
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
        const MethodInfo_2E2F74C *method)
{
  __int64 v7; // x1
  Il2CppObject *Object_object__48356600; // x20

  if ( !method->rgctx_data )
  {
    sub_1B64870(&Method_AssetData_GetObject_GameObject____75714440, assetData);
    this = (ClassBoardResourceCatalogAssetBundle_o *)sub_1B64870(&UnityEngine_Object_TypeInfo, v7);
    if ( !method->rgctx_data )
      this = (ClassBoardResourceCatalogAssetBundle_o *)sub_1BB67A8();
  }
  if ( !assetData )
    goto LABEL_11;
  Object_object__48356600 = AssetData__GetObject_object__48356600(
                              assetData,
                              name,
                              (const MethodInfo_2E1DCF8 *)Method_AssetData_GetObject_GameObject____75714440);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (ClassBoardResourceCatalogAssetBundle_o *)UnityEngine_Object__op_Equality(
                                                     (UnityEngine_Object_o *)Object_object__48356600,
                                                     0LL,
                                                     0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
    return 0LL;
  if ( !Object_object__48356600 )
LABEL_11:
    sub_1B64ACC(this, assetData);
  return UnityEngine_GameObject__GetComponent_object_(
           (UnityEngine_GameObject_o *)Object_object__48356600,
           (const MethodInfo_2E8A1B4 *)method->rgctx_data->_1_UnityEngine_GameObject_GetComponent_T_);
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
  if ( (byte_4A018F1 & 1) == 0 )
  {
    sub_1B64870(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardBlank___, *(_QWORD *)&assetId);
    sub_1B64870(&StringLiteral_4477/*"ClassBoardBlank"*/, v4);
    byte_4A018F1 = 1;
  }
  mainAssetData = this->fields.mainAssetData;
  v6 = System_Int32__ToString((int32_t)&v9, 0LL);
  v7 = System_String__Concat_61383576((System_String_o *)StringLiteral_4477/*"ClassBoardBlank"*/, v6, 0LL);
  return (ClassBoardBlank_o *)ClassBoardResourceCatalogAssetBundle__GetObject_object_(
                                this,
                                mainAssetData,
                                v7,
                                (const MethodInfo_2E2F74C *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardBlank___);
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
  if ( (byte_4A018F2 & 1) == 0 )
  {
    sub_1B64870(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardLock___, *(_QWORD *)&assetId);
    sub_1B64870(&StringLiteral_4480/*"ClassBoardLock"*/, v4);
    byte_4A018F2 = 1;
  }
  mainAssetData = this->fields.mainAssetData;
  v6 = System_Int32__ToString((int32_t)&v9, 0LL);
  v7 = System_String__Concat_61383576((System_String_o *)StringLiteral_4480/*"ClassBoardLock"*/, v6, 0LL);
  return (ClassBoardLock_o *)ClassBoardResourceCatalogAssetBundle__GetObject_object_(
                               this,
                               mainAssetData,
                               v7,
                               (const MethodInfo_2E2F74C *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardLock___);
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
  if ( (byte_4A018F0 & 1) == 0 )
  {
    sub_1B64870(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardSquare___, *(_QWORD *)&assetId);
    sub_1B64870(&StringLiteral_4486/*"ClassBoardSquare"*/, v4);
    byte_4A018F0 = 1;
  }
  mainAssetData = this->fields.mainAssetData;
  v6 = System_Int32__ToString((int32_t)&v9, 0LL);
  v7 = System_String__Concat_61383576((System_String_o *)StringLiteral_4486/*"ClassBoardSquare"*/, v6, 0LL);
  return (ClassBoardSquare_o *)ClassBoardResourceCatalogAssetBundle__GetObject_object_(
                                 this,
                                 mainAssetData,
                                 v7,
                                 (const MethodInfo_2E2F74C *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardSquare___);
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
    sub_1B64ACC(assetStorageLoadWrapper, assetBundlePath);
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
  char *Object_object__48356600; // x0
  __int64 v35; // x1
  char *v36; // x28
  char *v37; // x29
  const MethodInfo *v38; // x5
  char *v39; // x20
  const MethodInfo *v40; // x6
  const MethodInfo *v41; // x5
  int32_t v42; // w2
  int32_t v43; // w3
  int32_t v44; // w2
  int32_t v45; // w3
  int32_t v46; // w2
  int32_t v47; // w3
  struct System_Action_o *loadEndCallback; // x8
  ClassBoardLock_o *lockAsset; // [xsp+8h] [xbp-78h]
  Il2CppObject *v50; // [xsp+10h] [xbp-70h]
  Il2CppObject *Object_object; // [xsp+18h] [xbp-68h]

  if ( (byte_4A018EE & 1) == 0 )
  {
    sub_1B64870(&Method_AssetData_GetObject_GameObject____75714440, method);
    sub_1B64870(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardBackground___, v3);
    sub_1B64870(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardBlank___, v4);
    sub_1B64870(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardDisableOpenDialog___, v5);
    sub_1B64870(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardLine___, v6);
    sub_1B64870(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardLockOpenConfirmDialog___, v7);
    sub_1B64870(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardLockReleaseConditionDialog___, v8);
    sub_1B64870(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardLock___, v9);
    sub_1B64870(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardSquareDetailDialog___, v10);
    sub_1B64870(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardSquareOpenConfirmDialog___, v11);
    sub_1B64870(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardSquare___, v12);
    sub_1B64870(&Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardUIController___, v13);
    sub_1B64870(&StringLiteral_4476/*"ClassBoardBg"*/, v14);
    sub_1B64870(&StringLiteral_4482/*"ClassBoardLockReleaseConditionDialog"*/, v15);
    sub_1B64870(&StringLiteral_4479/*"ClassBoardLine"*/, v16);
    sub_1B64870(&StringLiteral_4487/*"ClassBoardSquareDetailDialog"*/, v17);
    sub_1B64870(&StringLiteral_4480/*"ClassBoardLock"*/, v18);
    sub_1B64870(&StringLiteral_4485/*"ClassBoardSelectView"*/, v19);
    sub_1B64870(&StringLiteral_6783/*"ForwardIconAnimObject"*/, v20);
    sub_1B64870(&StringLiteral_4477/*"ClassBoardBlank"*/, v21);
    sub_1B64870(&StringLiteral_4478/*"ClassBoardDisableOpenDialog"*/, v22);
    sub_1B64870(&StringLiteral_4481/*"ClassBoardLockOpenConfirmDialog"*/, v23);
    sub_1B64870(&StringLiteral_4486/*"ClassBoardSquare"*/, v24);
    sub_1B64870(&StringLiteral_4488/*"ClassBoardSquareOpenConfirmDialog"*/, v25);
    sub_1B64870(&StringLiteral_4489/*"ClassBoardUI"*/, v26);
    byte_4A018EE = 1;
  }
  Object_object = ClassBoardResourceCatalogAssetBundle__GetObject_object_(
                    this,
                    this->fields.mainAssetData,
                    (System_String_o *)StringLiteral_4486/*"ClassBoardSquare"*/,
                    (const MethodInfo_2E2F74C *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardSquare___);
  v50 = ClassBoardResourceCatalogAssetBundle__GetObject_object_(
          this,
          this->fields.mainAssetData,
          (System_String_o *)StringLiteral_4479/*"ClassBoardLine"*/,
          (const MethodInfo_2E2F74C *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardLine___);
  lockAsset = (ClassBoardLock_o *)ClassBoardResourceCatalogAssetBundle__GetObject_object_(
                                    this,
                                    this->fields.mainAssetData,
                                    (System_String_o *)StringLiteral_4480/*"ClassBoardLock"*/,
                                    (const MethodInfo_2E2F74C *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardLock___);
  v27 = ClassBoardResourceCatalogAssetBundle__GetObject_object_(
          this,
          this->fields.mainAssetData,
          (System_String_o *)StringLiteral_4477/*"ClassBoardBlank"*/,
          (const MethodInfo_2E2F74C *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardBlank___);
  v28 = ClassBoardResourceCatalogAssetBundle__GetObject_object_(
          this,
          this->fields.mainAssetData,
          (System_String_o *)StringLiteral_4478/*"ClassBoardDisableOpenDialog"*/,
          (const MethodInfo_2E2F74C *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardDisableOpenDialog___);
  v29 = ClassBoardResourceCatalogAssetBundle__GetObject_object_(
          this,
          this->fields.mainAssetData,
          (System_String_o *)StringLiteral_4488/*"ClassBoardSquareOpenConfirmDialog"*/,
          (const MethodInfo_2E2F74C *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardSquareOpenConfirmDialog___);
  v30 = ClassBoardResourceCatalogAssetBundle__GetObject_object_(
          this,
          this->fields.mainAssetData,
          (System_String_o *)StringLiteral_4481/*"ClassBoardLockOpenConfirmDialog"*/,
          (const MethodInfo_2E2F74C *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardLockOpenConfirmDialog___);
  v31 = ClassBoardResourceCatalogAssetBundle__GetObject_object_(
          this,
          this->fields.mainAssetData,
          (System_String_o *)StringLiteral_4482/*"ClassBoardLockReleaseConditionDialog"*/,
          (const MethodInfo_2E2F74C *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardLockReleaseConditionDialog___);
  v32 = ClassBoardResourceCatalogAssetBundle__GetObject_object_(
          this,
          this->fields.mainAssetData,
          (System_String_o *)StringLiteral_4487/*"ClassBoardSquareDetailDialog"*/,
          (const MethodInfo_2E2F74C *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardSquareDetailDialog___);
  v33 = ClassBoardResourceCatalogAssetBundle__GetObject_object_(
          this,
          this->fields.mainAssetData,
          (System_String_o *)StringLiteral_4489/*"ClassBoardUI"*/,
          (const MethodInfo_2E2F74C *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardUIController___);
  Object_object__48356600 = (char *)ClassBoardResourceCatalogAssetBundle__GetObject_object_(
                                      this,
                                      this->fields.modelAssetData,
                                      (System_String_o *)StringLiteral_4476/*"ClassBoardBg"*/,
                                      (const MethodInfo_2E2F74C *)Method_ClassBoardResourceCatalogAssetBundle_GetObject_ClassBoardBackground___);
  if ( !this->fields.boardSelectViewAssetData )
    goto LABEL_13;
  v36 = Object_object__48356600;
  Object_object__48356600 = (char *)AssetData__GetObject_object__48356600(
                                      this->fields.boardSelectViewAssetData,
                                      (System_String_o *)StringLiteral_4485/*"ClassBoardSelectView"*/,
                                      (const MethodInfo_2E1DCF8 *)Method_AssetData_GetObject_GameObject____75714440);
  if ( !this->fields.boardSelectViewAssetData )
    goto LABEL_13;
  v37 = Object_object__48356600;
  Object_object__48356600 = (char *)AssetData__GetObject_object__48356600(
                                      this->fields.boardSelectViewAssetData,
                                      (System_String_o *)StringLiteral_6783/*"ForwardIconAnimObject"*/,
                                      (const MethodInfo_2E1DCF8 *)Method_AssetData_GetObject_GameObject____75714440);
  if ( !this->fields._Contents_k__BackingField )
    goto LABEL_13;
  v39 = Object_object__48356600;
  ClassBoardResourceContents__SetContents(
    this->fields._Contents_k__BackingField,
    (ClassBoardSquare_o *)Object_object,
    (ClassBoardLine_o *)v50,
    lockAsset,
    (ClassBoardBlank_o *)v27,
    v38);
  Object_object__48356600 = (char *)this->fields._Contents_k__BackingField;
  if ( !Object_object__48356600 )
    goto LABEL_13;
  ClassBoardResourceContents__SetContentsDialog(
    (ClassBoardResourceContents_o *)Object_object__48356600,
    (ClassBoardDisableOpenDialog_o *)v28,
    (ClassBoardSquareOpenConfirmDialog_o *)v29,
    (ClassBoardLockOpenConfirmDialog_o *)v30,
    (ClassBoardLockReleaseConditionDialog_o *)v31,
    (ClassBoardSquareDetailDialog_o *)v32,
    v40);
  Object_object__48356600 = (char *)this->fields._Contents_k__BackingField;
  if ( !Object_object__48356600 )
    goto LABEL_13;
  ClassBoardResourceContents__SetContentsUI(
    (ClassBoardResourceContents_o *)Object_object__48356600,
    (ClassBoardUIController_o *)v33,
    this->fields.boardUiAtlasManagerUnit,
    this->fields.iconAtlasManagerUnit,
    this->fields.classUiAtlasManagerUnit,
    v41);
  Object_object__48356600 = (char *)this->fields._Contents_k__BackingField;
  if ( !Object_object__48356600 )
    goto LABEL_13;
  *((_QWORD *)Object_object__48356600 + 12) = v36;
  sub_1B64814((ServantStatusBattleListViewItem_o *)(Object_object__48356600 + 96), (int32_t)v36, v42, v43);
  Object_object__48356600 = (char *)this->fields._Contents_k__BackingField;
  if ( !Object_object__48356600
    || (*((_QWORD *)Object_object__48356600 + 13) = v37,
        sub_1B64814((ServantStatusBattleListViewItem_o *)(Object_object__48356600 + 104), (int32_t)v37, v44, v45),
        (Object_object__48356600 = (char *)this->fields._Contents_k__BackingField) == 0LL)
    || (*((_QWORD *)Object_object__48356600 + 14) = v39,
        sub_1B64814((ServantStatusBattleListViewItem_o *)(Object_object__48356600 + 112), (int32_t)v39, v46, v47),
        (loadEndCallback = this->fields.loadEndCallback) == 0LL) )
  {
LABEL_13:
    sub_1B64ACC(Object_object__48356600, v35);
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
  AssetStorageLoadWrapper_o *assetStorageLoadWrapper; // x20
  AtlasManagerUnit_o *v22; // x21
  int32_t v23; // w2
  int32_t v24; // w3
  AssetStorageLoadWrapper_o *v25; // x20
  AtlasManagerUnit_o *v26; // x21
  int32_t v27; // w2
  int32_t v28; // w3
  AssetStorageLoadWrapper_o *v29; // x20
  AtlasManagerUnit_o *v30; // x21
  int32_t v31; // w2
  int32_t v32; // w3
  __int64 v33; // x20
  System_Action_object__o *v34; // x21
  ChainableActionBase_o *v35; // x0
  __int64 v36; // x1
  int32_t v37; // w2
  int32_t v38; // w3
  System_Action_object__o *v39; // x21
  int32_t v40; // w2
  int32_t v41; // w3
  System_Action_object__o *v42; // x21
  int32_t v43; // w2
  int32_t v44; // w3
  System_Action_object__o *v45; // x21
  int32_t v46; // w2
  int32_t v47; // w3
  System_Action_object__o *v48; // x21
  int32_t v49; // w2
  int32_t v50; // w3
  System_Action_object__o *v51; // x21
  int32_t v52; // w2
  int32_t v53; // w3
  ChainableActionParallel_o *v54; // x21
  __int64 v55; // x20
  System_Action_o *v56; // x22
  int32_t v57; // w2
  int32_t v58; // w3

  if ( (byte_4A018ED & 1) == 0 )
  {
    sub_1B64870(&System_Action___TypeInfo, callback);
    sub_1B64870(&System_Action_Action____TypeInfo, v6);
    sub_1B64870(&System_Action_Action__TypeInfo, v7);
    sub_1B64870(&System_Action_TypeInfo, v8);
    sub_1B64870(&AtlasManagerUnit_TypeInfo, v9);
    sub_1B64870(&ChainableActionParallel_TypeInfo, v10);
    sub_1B64870(&Method_ClassBoardResourceCatalogAssetBundle_LoadEnd__, v11);
    sub_1B64870(&Method_ClassBoardResourceCatalogAssetBundle__LoadSystemAsset_b__32_0__, v12);
    sub_1B64870(&Method_ClassBoardResourceCatalogAssetBundle__LoadSystemAsset_b__32_1__, v13);
    sub_1B64870(&Method_ClassBoardResourceCatalogAssetBundle__LoadSystemAsset_b__32_2__, v14);
    sub_1B64870(&Method_ClassBoardResourceCatalogAssetBundle__LoadSystemAsset_b__32_3__, v15);
    sub_1B64870(&Method_ClassBoardResourceCatalogAssetBundle__LoadSystemAsset_b__32_4__, v16);
    sub_1B64870(&Method_ClassBoardResourceCatalogAssetBundle__LoadSystemAsset_b__32_5__, v17);
    sub_1B64870(&StringLiteral_4475/*"ClassBoard/UI/DownloadClassBoardUIAtlas"*/, v18);
    sub_1B64870(&StringLiteral_4474/*"ClassBoard/UI/DownloadClassBoardClassUIAtlas"*/, v19);
    sub_1B64870(&StringLiteral_4471/*"ClassBoard/Icon/DownloadClassBoardIconAtlas"*/, v20);
    byte_4A018ED = 1;
  }
  this->fields.loadEndCallback = callback;
  sub_1B64814(
    (ServantStatusBattleListViewItem_o *)&this->fields.loadEndCallback,
    (int32_t)callback,
    (int32_t)method,
    v3);
  assetStorageLoadWrapper = this->fields.assetStorageLoadWrapper;
  v22 = (AtlasManagerUnit_o *)sub_1B64ABC(AtlasManagerUnit_TypeInfo);
  AtlasManagerUnit___ctor(v22, (System_String_o *)StringLiteral_4475/*"ClassBoard/UI/DownloadClassBoardUIAtlas"*/, assetStorageLoadWrapper, 0LL);
  this->fields.boardUiAtlasManagerUnit = v22;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.boardUiAtlasManagerUnit, (int32_t)v22, v23, v24);
  v25 = this->fields.assetStorageLoadWrapper;
  v26 = (AtlasManagerUnit_o *)sub_1B64ABC(AtlasManagerUnit_TypeInfo);
  AtlasManagerUnit___ctor(v26, (System_String_o *)StringLiteral_4474/*"ClassBoard/UI/DownloadClassBoardClassUIAtlas"*/, v25, 0LL);
  this->fields.classUiAtlasManagerUnit = v26;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.classUiAtlasManagerUnit, (int32_t)v26, v27, v28);
  v29 = this->fields.assetStorageLoadWrapper;
  v30 = (AtlasManagerUnit_o *)sub_1B64ABC(AtlasManagerUnit_TypeInfo);
  AtlasManagerUnit___ctor(v30, (System_String_o *)StringLiteral_4471/*"ClassBoard/Icon/DownloadClassBoardIconAtlas"*/, v29, 0LL);
  this->fields.iconAtlasManagerUnit = v30;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.iconAtlasManagerUnit, (int32_t)v30, v31, v32);
  v33 = sub_1B64918(System_Action_Action____TypeInfo, 6LL);
  v34 = (System_Action_object__o *)sub_1B64ABC(System_Action_Action__TypeInfo);
  System_Action_object____ctor(
    v34,
    (Il2CppObject *)this,
    Method_ClassBoardResourceCatalogAssetBundle__LoadSystemAsset_b__32_0__,
    0LL);
  if ( !v33 )
    goto LABEL_16;
  if ( !*(_DWORD *)(v33 + 24) )
    goto LABEL_15;
  *(_QWORD *)(v33 + 32) = v34;
  sub_1B64814((ServantStatusBattleListViewItem_o *)(v33 + 32), (int32_t)v34, v37, v38);
  v39 = (System_Action_object__o *)sub_1B64ABC(System_Action_Action__TypeInfo);
  System_Action_object____ctor(
    v39,
    (Il2CppObject *)this,
    Method_ClassBoardResourceCatalogAssetBundle__LoadSystemAsset_b__32_1__,
    0LL);
  if ( *(_DWORD *)(v33 + 24) <= 1u )
    goto LABEL_15;
  *(_QWORD *)(v33 + 40) = v39;
  sub_1B64814((ServantStatusBattleListViewItem_o *)(v33 + 40), (int32_t)v39, v40, v41);
  v42 = (System_Action_object__o *)sub_1B64ABC(System_Action_Action__TypeInfo);
  System_Action_object____ctor(
    v42,
    (Il2CppObject *)this,
    Method_ClassBoardResourceCatalogAssetBundle__LoadSystemAsset_b__32_2__,
    0LL);
  if ( *(_DWORD *)(v33 + 24) <= 2u )
    goto LABEL_15;
  *(_QWORD *)(v33 + 48) = v42;
  sub_1B64814((ServantStatusBattleListViewItem_o *)(v33 + 48), (int32_t)v42, v43, v44);
  v45 = (System_Action_object__o *)sub_1B64ABC(System_Action_Action__TypeInfo);
  System_Action_object____ctor(
    v45,
    (Il2CppObject *)this,
    Method_ClassBoardResourceCatalogAssetBundle__LoadSystemAsset_b__32_3__,
    0LL);
  if ( *(_DWORD *)(v33 + 24) <= 3u )
    goto LABEL_15;
  *(_QWORD *)(v33 + 56) = v45;
  sub_1B64814((ServantStatusBattleListViewItem_o *)(v33 + 56), (int32_t)v45, v46, v47);
  v48 = (System_Action_object__o *)sub_1B64ABC(System_Action_Action__TypeInfo);
  System_Action_object____ctor(
    v48,
    (Il2CppObject *)this,
    Method_ClassBoardResourceCatalogAssetBundle__LoadSystemAsset_b__32_4__,
    0LL);
  if ( *(_DWORD *)(v33 + 24) <= 4u )
    goto LABEL_15;
  *(_QWORD *)(v33 + 64) = v48;
  sub_1B64814((ServantStatusBattleListViewItem_o *)(v33 + 64), (int32_t)v48, v49, v50);
  v51 = (System_Action_object__o *)sub_1B64ABC(System_Action_Action__TypeInfo);
  System_Action_object____ctor(
    v51,
    (Il2CppObject *)this,
    Method_ClassBoardResourceCatalogAssetBundle__LoadSystemAsset_b__32_5__,
    0LL);
  if ( *(_DWORD *)(v33 + 24) <= 5u )
    goto LABEL_15;
  *(_QWORD *)(v33 + 72) = v51;
  sub_1B64814((ServantStatusBattleListViewItem_o *)(v33 + 72), (int32_t)v51, v52, v53);
  v54 = (ChainableActionParallel_o *)sub_1B64ABC(ChainableActionParallel_TypeInfo);
  ChainableActionParallel___ctor_46288116(v54, (System_Action_Action__array *)v33, 0LL);
  v55 = sub_1B64918(System_Action___TypeInfo, 1LL);
  v56 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
  System_Action___ctor(v56, (Il2CppObject *)this, Method_ClassBoardResourceCatalogAssetBundle_LoadEnd__, 0LL);
  if ( !v55 )
    goto LABEL_16;
  if ( !*(_DWORD *)(v55 + 24) )
LABEL_15:
    sub_1B64AD4(v35, v36);
  *(_QWORD *)(v55 + 32) = v56;
  sub_1B64814((ServantStatusBattleListViewItem_o *)(v55 + 32), (int32_t)v56, v57, v58);
  if ( !v54 || (v35 = ChainableActionBase__Final((ChainableActionBase_o *)v54, (System_Action_array *)v55, 0LL)) == 0LL )
LABEL_16:
    sub_1B64ACC(v35, v36);
  ChainableActionBase__Execute(v35, 0LL);
}


void __fastcall ClassBoardResourceCatalogAssetBundle__ReleaseAll(
        ClassBoardResourceCatalogAssetBundle_o *this,
        const MethodInfo *method)
{
  AssetStorageLoadWrapper_o *assetStorageLoadWrapper; // x0

  assetStorageLoadWrapper = this->fields.assetStorageLoadWrapper;
  if ( !assetStorageLoadWrapper )
    sub_1B64ACC(0LL, method);
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
  int32_t v13; // w3
  int32_t v14; // w2
  int32_t v15; // w3
  AtlasManagerUnit_o *boardUiAtlasManagerUnit; // x0
  AssetStorageLoadWrapper_o *assetStorageLoadWrapper; // x22
  AtlasManagerUnit_o *v18; // x23
  int32_t v19; // w2
  int32_t v20; // w3
  AtlasManagerUnit_o *v21; // x19
  System_Action_o *v22; // x21

  if ( (byte_4A018EF & 1) == 0 )
  {
    sub_1B64870(&System_Action_TypeInfo, callback);
    sub_1B64870(&AtlasManagerUnit_TypeInfo, v5);
    sub_1B64870(&Method_ClassBoardResourceCatalogAssetBundle___c__DisplayClass35_0__ReloadBoardUIAtlas_b__0__, v6);
    sub_1B64870(&ClassBoardResourceCatalogAssetBundle___c__DisplayClass35_0_TypeInfo, v7);
    sub_1B64870(&StringLiteral_4475/*"ClassBoard/UI/DownloadClassBoardUIAtlas"*/, v8);
    byte_4A018EF = 1;
  }
  v9 = sub_1B64ABC(ClassBoardResourceCatalogAssetBundle___c__DisplayClass35_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    goto LABEL_8;
  *(_QWORD *)(v9 + 16) = this;
  sub_1B64814((ServantStatusBattleListViewItem_o *)(v9 + 16), (int32_t)this, v12, v13);
  *(_QWORD *)(v9 + 24) = callback;
  sub_1B64814((ServantStatusBattleListViewItem_o *)(v9 + 24), (int32_t)callback, v14, v15);
  boardUiAtlasManagerUnit = this->fields.boardUiAtlasManagerUnit;
  if ( boardUiAtlasManagerUnit )
    AtlasManagerUnit__Release(boardUiAtlasManagerUnit, 0LL);
  assetStorageLoadWrapper = this->fields.assetStorageLoadWrapper;
  v18 = (AtlasManagerUnit_o *)sub_1B64ABC(AtlasManagerUnit_TypeInfo);
  AtlasManagerUnit___ctor(v18, (System_String_o *)StringLiteral_4475/*"ClassBoard/UI/DownloadClassBoardUIAtlas"*/, assetStorageLoadWrapper, 0LL);
  this->fields.boardUiAtlasManagerUnit = v18;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.boardUiAtlasManagerUnit, (int32_t)v18, v19, v20);
  v21 = this->fields.boardUiAtlasManagerUnit;
  v22 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
  System_Action___ctor(
    v22,
    (Il2CppObject *)v9,
    Method_ClassBoardResourceCatalogAssetBundle___c__DisplayClass35_0__ReloadBoardUIAtlas_b__0__,
    0LL);
  if ( !v21 )
LABEL_8:
    sub_1B64ACC(v10, v11);
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
    sub_1B64ACC(0LL, sprite);
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
  int32_t v11; // w2
  int32_t v12; // w3
  int32_t v13; // w2
  int32_t v14; // w3
  AssetLoader_LoadEndDataHandler_o *v15; // x20
  const MethodInfo *v16; // x3

  if ( (byte_4A018F4 & 1) == 0 )
  {
    sub_1B64870(&AssetLoader_LoadEndDataHandler_TypeInfo, f);
    sub_1B64870(&Method_ClassBoardResourceCatalogAssetBundle___c__DisplayClass32_0__LoadSystemAsset_b__6__, v5);
    sub_1B64870(&ClassBoardResourceCatalogAssetBundle___c__DisplayClass32_0_TypeInfo, v6);
    sub_1B64870(&StringLiteral_4472/*"ClassBoard/Main"*/, v7);
    byte_4A018F4 = 1;
  }
  v8 = sub_1B64ABC(ClassBoardResourceCatalogAssetBundle___c__DisplayClass32_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8 )
    sub_1B64ACC(v9, v10);
  *(_QWORD *)(v8 + 24) = this;
  sub_1B64814((ServantStatusBattleListViewItem_o *)(v8 + 24), (int32_t)this, v11, v12);
  *(_QWORD *)(v8 + 16) = f;
  sub_1B64814((ServantStatusBattleListViewItem_o *)(v8 + 16), (int32_t)f, v13, v14);
  v15 = (AssetLoader_LoadEndDataHandler_o *)sub_1B64ABC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v15,
    (Il2CppObject *)v8,
    Method_ClassBoardResourceCatalogAssetBundle___c__DisplayClass32_0__LoadSystemAsset_b__6__,
    0LL);
  ClassBoardResourceCatalogAssetBundle__LoadAssetStorage(this, (System_String_o *)StringLiteral_4472/*"ClassBoard/Main"*/, v15, v16);
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
  int32_t v11; // w2
  int32_t v12; // w3
  int32_t v13; // w2
  int32_t v14; // w3
  AssetLoader_LoadEndDataHandler_o *v15; // x20
  const MethodInfo *v16; // x3

  if ( (byte_4A018F5 & 1) == 0 )
  {
    sub_1B64870(&AssetLoader_LoadEndDataHandler_TypeInfo, f);
    sub_1B64870(&Method_ClassBoardResourceCatalogAssetBundle___c__DisplayClass32_1__LoadSystemAsset_b__7__, v5);
    sub_1B64870(&ClassBoardResourceCatalogAssetBundle___c__DisplayClass32_1_TypeInfo, v6);
    sub_1B64870(&StringLiteral_4459/*"ClassBoard/Bg"*/, v7);
    byte_4A018F5 = 1;
  }
  v8 = sub_1B64ABC(ClassBoardResourceCatalogAssetBundle___c__DisplayClass32_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8 )
    sub_1B64ACC(v9, v10);
  *(_QWORD *)(v8 + 24) = this;
  sub_1B64814((ServantStatusBattleListViewItem_o *)(v8 + 24), (int32_t)this, v11, v12);
  *(_QWORD *)(v8 + 16) = f;
  sub_1B64814((ServantStatusBattleListViewItem_o *)(v8 + 16), (int32_t)f, v13, v14);
  v15 = (AssetLoader_LoadEndDataHandler_o *)sub_1B64ABC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v15,
    (Il2CppObject *)v8,
    Method_ClassBoardResourceCatalogAssetBundle___c__DisplayClass32_1__LoadSystemAsset_b__7__,
    0LL);
  ClassBoardResourceCatalogAssetBundle__LoadAssetStorage(this, (System_String_o *)StringLiteral_4459/*"ClassBoard/Bg"*/, v15, v16);
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
  int32_t v11; // w2
  int32_t v12; // w3
  int32_t v13; // w2
  int32_t v14; // w3
  AssetLoader_LoadEndDataHandler_o *v15; // x20
  const MethodInfo *v16; // x3

  if ( (byte_4A018F6 & 1) == 0 )
  {
    sub_1B64870(&AssetLoader_LoadEndDataHandler_TypeInfo, f);
    sub_1B64870(&Method_ClassBoardResourceCatalogAssetBundle___c__DisplayClass32_2__LoadSystemAsset_b__8__, v5);
    sub_1B64870(&ClassBoardResourceCatalogAssetBundle___c__DisplayClass32_2_TypeInfo, v6);
    sub_1B64870(&StringLiteral_4473/*"ClassBoard/Select"*/, v7);
    byte_4A018F6 = 1;
  }
  v8 = sub_1B64ABC(ClassBoardResourceCatalogAssetBundle___c__DisplayClass32_2_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8 )
    sub_1B64ACC(v9, v10);
  *(_QWORD *)(v8 + 24) = this;
  sub_1B64814((ServantStatusBattleListViewItem_o *)(v8 + 24), (int32_t)this, v11, v12);
  *(_QWORD *)(v8 + 16) = f;
  sub_1B64814((ServantStatusBattleListViewItem_o *)(v8 + 16), (int32_t)f, v13, v14);
  v15 = (AssetLoader_LoadEndDataHandler_o *)sub_1B64ABC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v15,
    (Il2CppObject *)v8,
    Method_ClassBoardResourceCatalogAssetBundle___c__DisplayClass32_2__LoadSystemAsset_b__8__,
    0LL);
  ClassBoardResourceCatalogAssetBundle__LoadAssetStorage(this, (System_String_o *)StringLiteral_4473/*"ClassBoard/Select"*/, v15, v16);
}


void __fastcall ClassBoardResourceCatalogAssetBundle___LoadSystemAsset_b__32_3(
        ClassBoardResourceCatalogAssetBundle_o *this,
        System_Action_o *f,
        const MethodInfo *method)
{
  AtlasManagerUnit_o *boardUiAtlasManagerUnit; // x0

  boardUiAtlasManagerUnit = this->fields.boardUiAtlasManagerUnit;
  if ( !boardUiAtlasManagerUnit )
    sub_1B64ACC(0LL, f);
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
    sub_1B64ACC(0LL, f);
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
    sub_1B64ACC(0LL, f);
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
        sub_1B64814(
          (ServantStatusBattleListViewItem_o *)&_4__this->fields.mainAssetData,
          (int32_t)asset,
          (int32_t)method,
          v3),
        (f = this->fields.f) == 0LL) )
  {
    sub_1B64ACC(_4__this, asset);
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
        sub_1B64814(
          (ServantStatusBattleListViewItem_o *)&_4__this->fields.modelAssetData,
          (int32_t)asset,
          (int32_t)method,
          v3),
        (f = this->fields.f) == 0LL) )
  {
    sub_1B64ACC(_4__this, asset);
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
        sub_1B64814(
          (ServantStatusBattleListViewItem_o *)&_4__this->fields.boardSelectViewAssetData,
          (int32_t)asset,
          (int32_t)method,
          v3),
        (f = this->fields.f) == 0LL) )
  {
    sub_1B64ACC(_4__this, asset);
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
    sub_1B64ACC(this, method);
  }
  boardUiAtlasManagerUnit = (struct System_Action_o *)_4__this->fields.boardUiAtlasManagerUnit;
  this[3].fields.callback = boardUiAtlasManagerUnit;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this[3].fields.callback, (int32_t)boardUiAtlasManagerUnit, v2, v3);
  ActionExtensions__Call(v5->fields.callback, 0LL);
}