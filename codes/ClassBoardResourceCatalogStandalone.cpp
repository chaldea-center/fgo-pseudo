void __fastcall ClassBoardResourceCatalogStandalone___ctor(
        ClassBoardResourceCatalogStandalone_o *this,
        const MethodInfo *method)
{
  Il2CppObject *v3; // x20
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7

  if ( (byte_4C00E0D & 1) == 0 )
  {
    sub_1C2E12C(&ClassBoardResourceContents_TypeInfo, method);
    byte_4C00E0D = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v3 = (Il2CppObject *)sub_1C2E378(ClassBoardResourceContents_TypeInfo);
  System_Object___ctor(v3, 0LL);
  this->fields._Contents_k__BackingField = (struct ClassBoardResourceContents_o *)v3;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields, (int64_t)v3, v4, v5, v6, v7, v8, v9);
}


// local variable allocation has failed, the output may be wrong!
ClassBoardBlank_o *__fastcall ClassBoardResourceCatalogStandalone__GetUniqueBlankObject(
        ClassBoardResourceCatalogStandalone_o *this,
        int32_t assetId,
        const MethodInfo *method)
{
  System_String_o *v4; // x19
  System_String_o *v5; // x0
  System_String_o *v6; // x0
  int32_t v8; // [xsp+Ch] [xbp-24h] BYREF

  v8 = assetId;
  if ( (byte_4C00E10 & 1) == 0 )
  {
    sub_1C2E12C(&Method_UnityEngine_Resources_Load_ClassBoardBlank___, *(_QWORD *)&assetId);
    byte_4C00E10 = 1;
  }
  v4 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, Il2CppMethodPointer, const MethodInfo *))this->klass->vtable._14_get_BLANK_PATH.method)(
                            this,
                            this->klass->vtable._15_get_DISABLE_OPEN_DIALOG_PATH.methodPtr,
                            method);
  v5 = System_Int32__ToString((int32_t)&v8, 0LL);
  v6 = System_String__Concat_63235584(v4, v5, 0LL);
  return (ClassBoardBlank_o *)UnityEngine_Resources__Load_object_(
                                v6,
                                (const MethodInfo_30676E8 *)Method_UnityEngine_Resources_Load_ClassBoardBlank___);
}


// local variable allocation has failed, the output may be wrong!
ClassBoardLock_o *__fastcall ClassBoardResourceCatalogStandalone__GetUniqueLockObject(
        ClassBoardResourceCatalogStandalone_o *this,
        int32_t assetId,
        const MethodInfo *method)
{
  System_String_o *v4; // x19
  System_String_o *v5; // x0
  System_String_o *v6; // x0
  int32_t v8; // [xsp+Ch] [xbp-24h] BYREF

  v8 = assetId;
  if ( (byte_4C00E11 & 1) == 0 )
  {
    sub_1C2E12C(&Method_UnityEngine_Resources_Load_ClassBoardLock___, *(_QWORD *)&assetId);
    byte_4C00E11 = 1;
  }
  v4 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, Il2CppMethodPointer, const MethodInfo *))this->klass->vtable._13_get_LOCK_PATH.method)(
                            this,
                            this->klass->vtable._14_get_BLANK_PATH.methodPtr,
                            method);
  v5 = System_Int32__ToString((int32_t)&v8, 0LL);
  v6 = System_String__Concat_63235584(v4, v5, 0LL);
  return (ClassBoardLock_o *)UnityEngine_Resources__Load_object_(
                               v6,
                               (const MethodInfo_30676E8 *)Method_UnityEngine_Resources_Load_ClassBoardLock___);
}


// local variable allocation has failed, the output may be wrong!
ClassBoardSquare_o *__fastcall ClassBoardResourceCatalogStandalone__GetUniqueSquareObject(
        ClassBoardResourceCatalogStandalone_o *this,
        int32_t assetId,
        const MethodInfo *method)
{
  System_String_o *v4; // x19
  System_String_o *v5; // x0
  System_String_o *v6; // x0
  int32_t v8; // [xsp+Ch] [xbp-24h] BYREF

  v8 = assetId;
  if ( (byte_4C00E0F & 1) == 0 )
  {
    sub_1C2E12C(&Method_UnityEngine_Resources_Load_ClassBoardSquare___, *(_QWORD *)&assetId);
    byte_4C00E0F = 1;
  }
  v4 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, Il2CppMethodPointer))this->klass->vtable._12_get_SQUARE_PATH.method)(
                            this,
                            this->klass->vtable._13_get_LOCK_PATH.methodPtr);
  v5 = System_Int32__ToString((int32_t)&v8, 0LL);
  v6 = System_String__Concat_63235584(v4, v5, 0LL);
  return (ClassBoardSquare_o *)UnityEngine_Resources__Load_object_(
                                 v6,
                                 (const MethodInfo_30676E8 *)Method_UnityEngine_Resources_Load_ClassBoardSquare___);
}


void __fastcall ClassBoardResourceCatalogStandalone__LoadSystemAsset(
        ClassBoardResourceCatalogStandalone_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
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
  System_String_o *v15; // x0
  System_String_o *v16; // x0
  System_String_o *v17; // x0
  Il2CppObject *v18; // x23
  System_String_o *v19; // x0
  Il2CppObject *v20; // x26
  System_String_o *v21; // x0
  Il2CppObject *v22; // x27
  System_String_o *v23; // x0
  Il2CppObject *v24; // x28
  System_String_o *v25; // x0
  Il2CppObject *v26; // x29
  System_String_o *v27; // x0
  Il2CppObject *v28; // x21
  System_String_o *v29; // x0
  Il2CppObject *v30; // x22
  System_String_o *v31; // x0
  Il2CppObject *v32; // x25
  System_String_o *v33; // x0
  char *Contents_k__BackingField; // x0
  __int64 v35; // x1
  const MethodInfo *v36; // x5
  int64_t v37; // x24
  const MethodInfo *v38; // x6
  ClassBoardResourceContents_o *v39; // x21
  System_String_o *v40; // x23
  AtlasManagerUnit_o *v41; // x22
  System_String_o *v42; // x26
  AtlasManagerUnit_o *v43; // x23
  System_String_o *v44; // x27
  AtlasManagerUnit_o *v45; // x26
  const MethodInfo *v46; // x5
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  Il2CppObject *v54; // [xsp+10h] [xbp-70h]
  Il2CppObject *object; // [xsp+18h] [xbp-68h]

  if ( (byte_4C00E0E & 1) == 0 )
  {
    sub_1C2E12C(&AtlasManagerUnit_TypeInfo, callback);
    sub_1C2E12C(&Method_UnityEngine_Resources_Load_ClassBoardBackground___, v4);
    sub_1C2E12C(&Method_UnityEngine_Resources_Load_ClassBoardBlank___, v5);
    sub_1C2E12C(&Method_UnityEngine_Resources_Load_ClassBoardDisableOpenDialog___, v6);
    sub_1C2E12C(&Method_UnityEngine_Resources_Load_ClassBoardLine___, v7);
    sub_1C2E12C(&Method_UnityEngine_Resources_Load_ClassBoardLockOpenConfirmDialog___, v8);
    sub_1C2E12C(&Method_UnityEngine_Resources_Load_ClassBoardLockReleaseConditionDialog___, v9);
    sub_1C2E12C(&Method_UnityEngine_Resources_Load_ClassBoardLock___, v10);
    sub_1C2E12C(&Method_UnityEngine_Resources_Load_ClassBoardSquareDetailDialog___, v11);
    sub_1C2E12C(&Method_UnityEngine_Resources_Load_ClassBoardSquareOpenConfirmDialog___, v12);
    sub_1C2E12C(&Method_UnityEngine_Resources_Load_ClassBoardSquare___, v13);
    sub_1C2E12C(&Method_UnityEngine_Resources_Load_ClassBoardUIController___, v14);
    byte_4C00E0E = 1;
  }
  v15 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, Il2CppMethodPointer, const MethodInfo *))this->klass->vtable._12_get_SQUARE_PATH.method)(
                             this,
                             this->klass->vtable._13_get_LOCK_PATH.methodPtr,
                             method);
  object = UnityEngine_Resources__Load_object_(
             v15,
             (const MethodInfo_30676E8 *)Method_UnityEngine_Resources_Load_ClassBoardSquare___);
  v16 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, Il2CppMethodPointer))this->klass->vtable._11_get_LINE_PATH.method)(
                             this,
                             this->klass->vtable._12_get_SQUARE_PATH.methodPtr);
  v54 = UnityEngine_Resources__Load_object_(
          v16,
          (const MethodInfo_30676E8 *)Method_UnityEngine_Resources_Load_ClassBoardLine___);
  v17 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, Il2CppMethodPointer))this->klass->vtable._13_get_LOCK_PATH.method)(
                             this,
                             this->klass->vtable._14_get_BLANK_PATH.methodPtr);
  v18 = UnityEngine_Resources__Load_object_(
          v17,
          (const MethodInfo_30676E8 *)Method_UnityEngine_Resources_Load_ClassBoardLock___);
  v19 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, Il2CppMethodPointer))this->klass->vtable._14_get_BLANK_PATH.method)(
                             this,
                             this->klass->vtable._15_get_DISABLE_OPEN_DIALOG_PATH.methodPtr);
  v20 = UnityEngine_Resources__Load_object_(
          v19,
          (const MethodInfo_30676E8 *)Method_UnityEngine_Resources_Load_ClassBoardBlank___);
  v21 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, Il2CppMethodPointer))this->klass->vtable._15_get_DISABLE_OPEN_DIALOG_PATH.method)(
                             this,
                             this->klass->vtable._16_get_SQUARE_OPEN_CONFIRM_DIALOG_PATH.methodPtr);
  v22 = UnityEngine_Resources__Load_object_(
          v21,
          (const MethodInfo_30676E8 *)Method_UnityEngine_Resources_Load_ClassBoardDisableOpenDialog___);
  v23 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, Il2CppMethodPointer))this->klass->vtable._16_get_SQUARE_OPEN_CONFIRM_DIALOG_PATH.method)(
                             this,
                             this->klass->vtable._17_get_LOCK_OPEN_CONFIRM_DIALOG_PATH.methodPtr);
  v24 = UnityEngine_Resources__Load_object_(
          v23,
          (const MethodInfo_30676E8 *)Method_UnityEngine_Resources_Load_ClassBoardSquareOpenConfirmDialog___);
  v25 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, Il2CppMethodPointer))this->klass->vtable._17_get_LOCK_OPEN_CONFIRM_DIALOG_PATH.method)(
                             this,
                             this->klass->vtable._18_get_LOCK_RELEASE_CONDITION_DIALOG_PATH.methodPtr);
  v26 = UnityEngine_Resources__Load_object_(
          v25,
          (const MethodInfo_30676E8 *)Method_UnityEngine_Resources_Load_ClassBoardLockOpenConfirmDialog___);
  v27 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, Il2CppMethodPointer))this->klass->vtable._18_get_LOCK_RELEASE_CONDITION_DIALOG_PATH.method)(
                             this,
                             this->klass->vtable._19_get_SQUARE_DETAIL_DIALOG_PATH.methodPtr);
  v28 = UnityEngine_Resources__Load_object_(
          v27,
          (const MethodInfo_30676E8 *)Method_UnityEngine_Resources_Load_ClassBoardLockReleaseConditionDialog___);
  v29 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, Il2CppMethodPointer))this->klass->vtable._19_get_SQUARE_DETAIL_DIALOG_PATH.method)(
                             this,
                             this->klass->vtable._20_get_BOARD_UI_PATH.methodPtr);
  v30 = UnityEngine_Resources__Load_object_(
          v29,
          (const MethodInfo_30676E8 *)Method_UnityEngine_Resources_Load_ClassBoardSquareDetailDialog___);
  v31 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, Il2CppMethodPointer))this->klass->vtable._20_get_BOARD_UI_PATH.method)(
                             this,
                             this->klass->vtable._21_get_ICON_ATLAS_PATH.methodPtr);
  v32 = UnityEngine_Resources__Load_object_(
          v31,
          (const MethodInfo_30676E8 *)Method_UnityEngine_Resources_Load_ClassBoardUIController___);
  v33 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, Il2CppMethodPointer))this->klass->vtable._22_get_BOARD_BG_MODEL_PATH.method)(
                             this,
                             this->klass->vtable._23_get_UI_ATLAS_PATH.methodPtr);
  Contents_k__BackingField = (char *)UnityEngine_Resources__Load_object_(
                                       v33,
                                       (const MethodInfo_30676E8 *)Method_UnityEngine_Resources_Load_ClassBoardBackground___);
  if ( !this->fields._Contents_k__BackingField )
    goto LABEL_9;
  v37 = (int64_t)Contents_k__BackingField;
  ClassBoardResourceContents__SetContents(
    this->fields._Contents_k__BackingField,
    (ClassBoardSquare_o *)object,
    (ClassBoardLine_o *)v54,
    (ClassBoardLock_o *)v18,
    (ClassBoardBlank_o *)v20,
    v36);
  Contents_k__BackingField = (char *)this->fields._Contents_k__BackingField;
  if ( !Contents_k__BackingField )
    goto LABEL_9;
  ClassBoardResourceContents__SetContentsDialog(
    (ClassBoardResourceContents_o *)Contents_k__BackingField,
    (ClassBoardDisableOpenDialog_o *)v22,
    (ClassBoardSquareOpenConfirmDialog_o *)v24,
    (ClassBoardLockOpenConfirmDialog_o *)v26,
    (ClassBoardLockReleaseConditionDialog_o *)v28,
    (ClassBoardSquareDetailDialog_o *)v30,
    v38);
  v39 = this->fields._Contents_k__BackingField;
  v40 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, Il2CppMethodPointer))this->klass->vtable._23_get_UI_ATLAS_PATH.method)(
                             this,
                             this->klass->vtable._24_get_CLASS_UI_ATLAS_PATH.methodPtr);
  v41 = (AtlasManagerUnit_o *)sub_1C2E378(AtlasManagerUnit_TypeInfo);
  AtlasManagerUnit___ctor(v41, v40, 0LL, 0LL);
  v42 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, Il2CppMethodPointer))this->klass->vtable._21_get_ICON_ATLAS_PATH.method)(
                             this,
                             this->klass->vtable._22_get_BOARD_BG_MODEL_PATH.methodPtr);
  v43 = (AtlasManagerUnit_o *)sub_1C2E378(AtlasManagerUnit_TypeInfo);
  AtlasManagerUnit___ctor(v43, v42, 0LL, 0LL);
  v44 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, Il2CppMethodPointer))this->klass->vtable._24_get_CLASS_UI_ATLAS_PATH.method)(
                             this,
                             this->klass->vtable._25_LoadSystemAsset.methodPtr);
  v45 = (AtlasManagerUnit_o *)sub_1C2E378(AtlasManagerUnit_TypeInfo);
  AtlasManagerUnit___ctor(v45, v44, 0LL, 0LL);
  if ( !v39
    || (ClassBoardResourceContents__SetContentsUI(v39, (ClassBoardUIController_o *)v32, v41, v43, v45, v46),
        (Contents_k__BackingField = (char *)this->fields._Contents_k__BackingField) == 0LL)
    || (*((_QWORD *)Contents_k__BackingField + 12) = v37,
        sub_1C2E0D0((PartyOrganizationUtility_o *)(Contents_k__BackingField + 96), v37, v47, v48, v49, v50, v51, v52),
        !callback) )
  {
LABEL_9:
    sub_1C2E388(Contents_k__BackingField, v35);
  }
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callback->fields.m_target)(
    callback->fields.original_method_info,
    *(_QWORD *)&callback->fields.extra_arg);
}


void __fastcall ClassBoardResourceCatalogStandalone__ReleaseAll(
        ClassBoardResourceCatalogStandalone_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall ClassBoardResourceCatalogStandalone__SetSpriteOfUiAtlas(
        ClassBoardResourceCatalogStandalone_o *this,
        UISprite_o *sprite,
        System_String_o *spriteName,
        const MethodInfo *method)
{
  ;
}


System_String_o *__fastcall ClassBoardResourceCatalogStandalone__get_BLANK_PATH(
        ClassBoardResourceCatalogStandalone_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C00E02 & 1) == 0 )
  {
    sub_1C2E12C(&StringLiteral_4566/*"ClassBoard/ClassBoardBlank"*/, method);
    byte_4C00E02 = 1;
  }
  return (System_String_o *)StringLiteral_4566/*"ClassBoard/ClassBoardBlank"*/;
}


System_String_o *__fastcall ClassBoardResourceCatalogStandalone__get_BOARD_BG_MODEL_PATH(
        ClassBoardResourceCatalogStandalone_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C00E0A & 1) == 0 )
  {
    sub_1C2E12C(&StringLiteral_4565/*"ClassBoard/Bg/ClassBoardBg"*/, method);
    byte_4C00E0A = 1;
  }
  return (System_String_o *)StringLiteral_4565/*"ClassBoard/Bg/ClassBoardBg"*/;
}


System_String_o *__fastcall ClassBoardResourceCatalogStandalone__get_BOARD_UI_PATH(
        ClassBoardResourceCatalogStandalone_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C00E08 & 1) == 0 )
  {
    sub_1C2E12C(&StringLiteral_4575/*"ClassBoard/ClassBoardUI"*/, method);
    byte_4C00E08 = 1;
  }
  return (System_String_o *)StringLiteral_4575/*"ClassBoard/ClassBoardUI"*/;
}


System_String_o *__fastcall ClassBoardResourceCatalogStandalone__get_CLASS_UI_ATLAS_PATH(
        ClassBoardResourceCatalogStandalone_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C00E0C & 1) == 0 )
  {
    sub_1C2E12C(&StringLiteral_4579/*"ClassBoard/UI/DownloadClassBoardClassUIAtlas"*/, method);
    byte_4C00E0C = 1;
  }
  return (System_String_o *)StringLiteral_4579/*"ClassBoard/UI/DownloadClassBoardClassUIAtlas"*/;
}


ClassBoardResourceContents_o *__fastcall ClassBoardResourceCatalogStandalone__get_Contents(
        ClassBoardResourceCatalogStandalone_o *this,
        const MethodInfo *method)
{
  return this->fields._Contents_k__BackingField;
}


System_String_o *__fastcall ClassBoardResourceCatalogStandalone__get_DISABLE_OPEN_DIALOG_PATH(
        ClassBoardResourceCatalogStandalone_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C00E03 & 1) == 0 )
  {
    sub_1C2E12C(&StringLiteral_4567/*"ClassBoard/ClassBoardDisableOpenDialog"*/, method);
    byte_4C00E03 = 1;
  }
  return (System_String_o *)StringLiteral_4567/*"ClassBoard/ClassBoardDisableOpenDialog"*/;
}


System_String_o *__fastcall ClassBoardResourceCatalogStandalone__get_ICON_ATLAS_PATH(
        ClassBoardResourceCatalogStandalone_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C00E09 & 1) == 0 )
  {
    sub_1C2E12C(&StringLiteral_4576/*"ClassBoard/Icon/DownloadClassBoardIconAtlas"*/, method);
    byte_4C00E09 = 1;
  }
  return (System_String_o *)StringLiteral_4576/*"ClassBoard/Icon/DownloadClassBoardIconAtlas"*/;
}


System_String_o *__fastcall ClassBoardResourceCatalogStandalone__get_LINE_PATH(
        ClassBoardResourceCatalogStandalone_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C00DFF & 1) == 0 )
  {
    sub_1C2E12C(&StringLiteral_4568/*"ClassBoard/ClassBoardLine"*/, method);
    byte_4C00DFF = 1;
  }
  return (System_String_o *)StringLiteral_4568/*"ClassBoard/ClassBoardLine"*/;
}


System_String_o *__fastcall ClassBoardResourceCatalogStandalone__get_LOCK_OPEN_CONFIRM_DIALOG_PATH(
        ClassBoardResourceCatalogStandalone_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C00E05 & 1) == 0 )
  {
    sub_1C2E12C(&StringLiteral_4570/*"ClassBoard/ClassBoardLockOpenConfirmDialog"*/, method);
    byte_4C00E05 = 1;
  }
  return (System_String_o *)StringLiteral_4570/*"ClassBoard/ClassBoardLockOpenConfirmDialog"*/;
}


System_String_o *__fastcall ClassBoardResourceCatalogStandalone__get_LOCK_PATH(
        ClassBoardResourceCatalogStandalone_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C00E01 & 1) == 0 )
  {
    sub_1C2E12C(&StringLiteral_4569/*"ClassBoard/ClassBoardLock"*/, method);
    byte_4C00E01 = 1;
  }
  return (System_String_o *)StringLiteral_4569/*"ClassBoard/ClassBoardLock"*/;
}


System_String_o *__fastcall ClassBoardResourceCatalogStandalone__get_LOCK_RELEASE_CONDITION_DIALOG_PATH(
        ClassBoardResourceCatalogStandalone_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C00E06 & 1) == 0 )
  {
    sub_1C2E12C(&StringLiteral_4571/*"ClassBoard/ClassBoardLockReleaseConditionDialog"*/, method);
    byte_4C00E06 = 1;
  }
  return (System_String_o *)StringLiteral_4571/*"ClassBoard/ClassBoardLockReleaseConditionDialog"*/;
}


System_String_o *__fastcall ClassBoardResourceCatalogStandalone__get_SQUARE_DETAIL_DIALOG_PATH(
        ClassBoardResourceCatalogStandalone_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C00E07 & 1) == 0 )
  {
    sub_1C2E12C(&StringLiteral_4573/*"ClassBoard/ClassBoardSquareDetailDialog"*/, method);
    byte_4C00E07 = 1;
  }
  return (System_String_o *)StringLiteral_4573/*"ClassBoard/ClassBoardSquareDetailDialog"*/;
}


System_String_o *__fastcall ClassBoardResourceCatalogStandalone__get_SQUARE_OPEN_CONFIRM_DIALOG_PATH(
        ClassBoardResourceCatalogStandalone_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C00E04 & 1) == 0 )
  {
    sub_1C2E12C(&StringLiteral_4574/*"ClassBoard/ClassBoardSquareOpenConfirmDialog"*/, method);
    byte_4C00E04 = 1;
  }
  return (System_String_o *)StringLiteral_4574/*"ClassBoard/ClassBoardSquareOpenConfirmDialog"*/;
}


System_String_o *__fastcall ClassBoardResourceCatalogStandalone__get_SQUARE_PATH(
        ClassBoardResourceCatalogStandalone_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C00E00 & 1) == 0 )
  {
    sub_1C2E12C(&StringLiteral_4572/*"ClassBoard/ClassBoardSquare"*/, method);
    byte_4C00E00 = 1;
  }
  return (System_String_o *)StringLiteral_4572/*"ClassBoard/ClassBoardSquare"*/;
}


System_String_o *__fastcall ClassBoardResourceCatalogStandalone__get_UI_ATLAS_PATH(
        ClassBoardResourceCatalogStandalone_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C00E0B & 1) == 0 )
  {
    sub_1C2E12C(&StringLiteral_4580/*"ClassBoard/UI/DownloadClassBoardUIAtlas"*/, method);
    byte_4C00E0B = 1;
  }
  return (System_String_o *)StringLiteral_4580/*"ClassBoard/UI/DownloadClassBoardUIAtlas"*/;
}