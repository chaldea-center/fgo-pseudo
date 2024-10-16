void __fastcall ClassBoardResourceCatalogStandalone___ctor(
        ClassBoardResourceCatalogStandalone_o *this,
        const MethodInfo *method)
{
  Il2CppObject *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_4AB9228 & 1) == 0 )
  {
    sub_1BAB41C(&ClassBoardResourceContents_TypeInfo, method);
    byte_4AB9228 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v3 = (Il2CppObject *)sub_1BAB668(ClassBoardResourceContents_TypeInfo);
  System_Object___ctor(v3, 0LL);
  this->fields._Contents_k__BackingField = (struct ClassBoardResourceContents_o *)v3;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)v3, v4, v5);
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
  if ( (byte_4AB922B & 1) == 0 )
  {
    sub_1BAB41C(&Method_UnityEngine_Resources_Load_ClassBoardBlank___, *(_QWORD *)&assetId);
    byte_4AB922B = 1;
  }
  v4 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, Il2CppMethodPointer, const MethodInfo *))this->klass->vtable._14_get_BLANK_PATH.method)(
                            this,
                            this->klass->vtable._15_get_DISABLE_OPEN_DIALOG_PATH.methodPtr,
                            method);
  v5 = System_Int32__ToString((int32_t)&v8, 0LL);
  v6 = System_String__Concat_62048128(v4, v5, 0LL);
  return (ClassBoardBlank_o *)UnityEngine_Resources__Load_object_(
                                v6,
                                (const MethodInfo_2F57C2C *)Method_UnityEngine_Resources_Load_ClassBoardBlank___);
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
  if ( (byte_4AB922C & 1) == 0 )
  {
    sub_1BAB41C(&Method_UnityEngine_Resources_Load_ClassBoardLock___, *(_QWORD *)&assetId);
    byte_4AB922C = 1;
  }
  v4 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, Il2CppMethodPointer, const MethodInfo *))this->klass->vtable._13_get_LOCK_PATH.method)(
                            this,
                            this->klass->vtable._14_get_BLANK_PATH.methodPtr,
                            method);
  v5 = System_Int32__ToString((int32_t)&v8, 0LL);
  v6 = System_String__Concat_62048128(v4, v5, 0LL);
  return (ClassBoardLock_o *)UnityEngine_Resources__Load_object_(
                               v6,
                               (const MethodInfo_2F57C2C *)Method_UnityEngine_Resources_Load_ClassBoardLock___);
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
  if ( (byte_4AB922A & 1) == 0 )
  {
    sub_1BAB41C(&Method_UnityEngine_Resources_Load_ClassBoardSquare___, *(_QWORD *)&assetId);
    byte_4AB922A = 1;
  }
  v4 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, Il2CppMethodPointer, const MethodInfo *))this->klass->vtable._12_get_SQUARE_PATH.method)(
                            this,
                            this->klass->vtable._13_get_LOCK_PATH.methodPtr,
                            method);
  v5 = System_Int32__ToString((int32_t)&v8, 0LL);
  v6 = System_String__Concat_62048128(v4, v5, 0LL);
  return (ClassBoardSquare_o *)UnityEngine_Resources__Load_object_(
                                 v6,
                                 (const MethodInfo_2F57C2C *)Method_UnityEngine_Resources_Load_ClassBoardSquare___);
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
  char *v37; // x24
  const MethodInfo *v38; // x6
  ClassBoardResourceContents_o *v39; // x21
  System_String_o *v40; // x23
  AtlasManagerUnit_o *v41; // x22
  System_String_o *v42; // x26
  AtlasManagerUnit_o *v43; // x23
  System_String_o *v44; // x27
  AtlasManagerUnit_o *v45; // x26
  const MethodInfo *v46; // x5
  int32_t v47; // w2
  int32_t v48; // w3
  Il2CppObject *v50; // [xsp+10h] [xbp-70h]
  Il2CppObject *object; // [xsp+18h] [xbp-68h]

  if ( (byte_4AB9229 & 1) == 0 )
  {
    sub_1BAB41C(&AtlasManagerUnit_TypeInfo, callback);
    sub_1BAB41C(&Method_UnityEngine_Resources_Load_ClassBoardBackground___, v4);
    sub_1BAB41C(&Method_UnityEngine_Resources_Load_ClassBoardBlank___, v5);
    sub_1BAB41C(&Method_UnityEngine_Resources_Load_ClassBoardDisableOpenDialog___, v6);
    sub_1BAB41C(&Method_UnityEngine_Resources_Load_ClassBoardLine___, v7);
    sub_1BAB41C(&Method_UnityEngine_Resources_Load_ClassBoardLockOpenConfirmDialog___, v8);
    sub_1BAB41C(&Method_UnityEngine_Resources_Load_ClassBoardLockReleaseConditionDialog___, v9);
    sub_1BAB41C(&Method_UnityEngine_Resources_Load_ClassBoardLock___, v10);
    sub_1BAB41C(&Method_UnityEngine_Resources_Load_ClassBoardSquareDetailDialog___, v11);
    sub_1BAB41C(&Method_UnityEngine_Resources_Load_ClassBoardSquareOpenConfirmDialog___, v12);
    sub_1BAB41C(&Method_UnityEngine_Resources_Load_ClassBoardSquare___, v13);
    sub_1BAB41C(&Method_UnityEngine_Resources_Load_ClassBoardUIController___, v14);
    byte_4AB9229 = 1;
  }
  v15 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, Il2CppMethodPointer, const MethodInfo *))this->klass->vtable._12_get_SQUARE_PATH.method)(
                             this,
                             this->klass->vtable._13_get_LOCK_PATH.methodPtr,
                             method);
  object = UnityEngine_Resources__Load_object_(
             v15,
             (const MethodInfo_2F57C2C *)Method_UnityEngine_Resources_Load_ClassBoardSquare___);
  v16 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, Il2CppMethodPointer))this->klass->vtable._11_get_LINE_PATH.method)(
                             this,
                             this->klass->vtable._12_get_SQUARE_PATH.methodPtr);
  v50 = UnityEngine_Resources__Load_object_(
          v16,
          (const MethodInfo_2F57C2C *)Method_UnityEngine_Resources_Load_ClassBoardLine___);
  v17 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, Il2CppMethodPointer))this->klass->vtable._13_get_LOCK_PATH.method)(
                             this,
                             this->klass->vtable._14_get_BLANK_PATH.methodPtr);
  v18 = UnityEngine_Resources__Load_object_(
          v17,
          (const MethodInfo_2F57C2C *)Method_UnityEngine_Resources_Load_ClassBoardLock___);
  v19 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, Il2CppMethodPointer))this->klass->vtable._14_get_BLANK_PATH.method)(
                             this,
                             this->klass->vtable._15_get_DISABLE_OPEN_DIALOG_PATH.methodPtr);
  v20 = UnityEngine_Resources__Load_object_(
          v19,
          (const MethodInfo_2F57C2C *)Method_UnityEngine_Resources_Load_ClassBoardBlank___);
  v21 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, Il2CppMethodPointer))this->klass->vtable._15_get_DISABLE_OPEN_DIALOG_PATH.method)(
                             this,
                             this->klass->vtable._16_get_SQUARE_OPEN_CONFIRM_DIALOG_PATH.methodPtr);
  v22 = UnityEngine_Resources__Load_object_(
          v21,
          (const MethodInfo_2F57C2C *)Method_UnityEngine_Resources_Load_ClassBoardDisableOpenDialog___);
  v23 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, Il2CppMethodPointer))this->klass->vtable._16_get_SQUARE_OPEN_CONFIRM_DIALOG_PATH.method)(
                             this,
                             this->klass->vtable._17_get_LOCK_OPEN_CONFIRM_DIALOG_PATH.methodPtr);
  v24 = UnityEngine_Resources__Load_object_(
          v23,
          (const MethodInfo_2F57C2C *)Method_UnityEngine_Resources_Load_ClassBoardSquareOpenConfirmDialog___);
  v25 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, Il2CppMethodPointer))this->klass->vtable._17_get_LOCK_OPEN_CONFIRM_DIALOG_PATH.method)(
                             this,
                             this->klass->vtable._18_get_LOCK_RELEASE_CONDITION_DIALOG_PATH.methodPtr);
  v26 = UnityEngine_Resources__Load_object_(
          v25,
          (const MethodInfo_2F57C2C *)Method_UnityEngine_Resources_Load_ClassBoardLockOpenConfirmDialog___);
  v27 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, Il2CppMethodPointer))this->klass->vtable._18_get_LOCK_RELEASE_CONDITION_DIALOG_PATH.method)(
                             this,
                             this->klass->vtable._19_get_SQUARE_DETAIL_DIALOG_PATH.methodPtr);
  v28 = UnityEngine_Resources__Load_object_(
          v27,
          (const MethodInfo_2F57C2C *)Method_UnityEngine_Resources_Load_ClassBoardLockReleaseConditionDialog___);
  v29 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, Il2CppMethodPointer))this->klass->vtable._19_get_SQUARE_DETAIL_DIALOG_PATH.method)(
                             this,
                             this->klass->vtable._20_get_BOARD_UI_PATH.methodPtr);
  v30 = UnityEngine_Resources__Load_object_(
          v29,
          (const MethodInfo_2F57C2C *)Method_UnityEngine_Resources_Load_ClassBoardSquareDetailDialog___);
  v31 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, Il2CppMethodPointer))this->klass->vtable._20_get_BOARD_UI_PATH.method)(
                             this,
                             this->klass->vtable._21_get_ICON_ATLAS_PATH.methodPtr);
  v32 = UnityEngine_Resources__Load_object_(
          v31,
          (const MethodInfo_2F57C2C *)Method_UnityEngine_Resources_Load_ClassBoardUIController___);
  v33 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, Il2CppMethodPointer))this->klass->vtable._22_get_BOARD_BG_MODEL_PATH.method)(
                             this,
                             this->klass->vtable._23_get_UI_ATLAS_PATH.methodPtr);
  Contents_k__BackingField = (char *)UnityEngine_Resources__Load_object_(
                                       v33,
                                       (const MethodInfo_2F57C2C *)Method_UnityEngine_Resources_Load_ClassBoardBackground___);
  if ( !this->fields._Contents_k__BackingField )
    goto LABEL_9;
  v37 = Contents_k__BackingField;
  ClassBoardResourceContents__SetContents(
    this->fields._Contents_k__BackingField,
    (ClassBoardSquare_o *)object,
    (ClassBoardLine_o *)v50,
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
  v41 = (AtlasManagerUnit_o *)sub_1BAB668(AtlasManagerUnit_TypeInfo);
  AtlasManagerUnit___ctor(v41, v40, 0LL, 0LL);
  v42 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, Il2CppMethodPointer))this->klass->vtable._21_get_ICON_ATLAS_PATH.method)(
                             this,
                             this->klass->vtable._22_get_BOARD_BG_MODEL_PATH.methodPtr);
  v43 = (AtlasManagerUnit_o *)sub_1BAB668(AtlasManagerUnit_TypeInfo);
  AtlasManagerUnit___ctor(v43, v42, 0LL, 0LL);
  v44 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, Il2CppMethodPointer))this->klass->vtable._24_get_CLASS_UI_ATLAS_PATH.method)(
                             this,
                             this->klass->vtable._25_LoadSystemAsset.methodPtr);
  v45 = (AtlasManagerUnit_o *)sub_1BAB668(AtlasManagerUnit_TypeInfo);
  AtlasManagerUnit___ctor(v45, v44, 0LL, 0LL);
  if ( !v39
    || (ClassBoardResourceContents__SetContentsUI(v39, (ClassBoardUIController_o *)v32, v41, v43, v45, v46),
        (Contents_k__BackingField = (char *)this->fields._Contents_k__BackingField) == 0LL)
    || (*((_QWORD *)Contents_k__BackingField + 12) = v37,
        sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(Contents_k__BackingField + 96), (int32_t)v37, v47, v48),
        !callback) )
  {
LABEL_9:
    sub_1BAB678(Contents_k__BackingField, v35);
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
  if ( (byte_4AB921D & 1) == 0 )
  {
    sub_1BAB41C(&StringLiteral_4483/*"ClassBoard/ClassBoardBlank"*/, method);
    byte_4AB921D = 1;
  }
  return (System_String_o *)StringLiteral_4483/*"ClassBoard/ClassBoardBlank"*/;
}


System_String_o *__fastcall ClassBoardResourceCatalogStandalone__get_BOARD_BG_MODEL_PATH(
        ClassBoardResourceCatalogStandalone_o *this,
        const MethodInfo *method)
{
  if ( (byte_4AB9225 & 1) == 0 )
  {
    sub_1BAB41C(&StringLiteral_4482/*"ClassBoard/Bg/ClassBoardBg"*/, method);
    byte_4AB9225 = 1;
  }
  return (System_String_o *)StringLiteral_4482/*"ClassBoard/Bg/ClassBoardBg"*/;
}


System_String_o *__fastcall ClassBoardResourceCatalogStandalone__get_BOARD_UI_PATH(
        ClassBoardResourceCatalogStandalone_o *this,
        const MethodInfo *method)
{
  if ( (byte_4AB9223 & 1) == 0 )
  {
    sub_1BAB41C(&StringLiteral_4492/*"ClassBoard/ClassBoardUI"*/, method);
    byte_4AB9223 = 1;
  }
  return (System_String_o *)StringLiteral_4492/*"ClassBoard/ClassBoardUI"*/;
}


System_String_o *__fastcall ClassBoardResourceCatalogStandalone__get_CLASS_UI_ATLAS_PATH(
        ClassBoardResourceCatalogStandalone_o *this,
        const MethodInfo *method)
{
  if ( (byte_4AB9227 & 1) == 0 )
  {
    sub_1BAB41C(&StringLiteral_4496/*"ClassBoard/UI/DownloadClassBoardClassUIAtlas"*/, method);
    byte_4AB9227 = 1;
  }
  return (System_String_o *)StringLiteral_4496/*"ClassBoard/UI/DownloadClassBoardClassUIAtlas"*/;
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
  if ( (byte_4AB921E & 1) == 0 )
  {
    sub_1BAB41C(&StringLiteral_4484/*"ClassBoard/ClassBoardDisableOpenDialog"*/, method);
    byte_4AB921E = 1;
  }
  return (System_String_o *)StringLiteral_4484/*"ClassBoard/ClassBoardDisableOpenDialog"*/;
}


System_String_o *__fastcall ClassBoardResourceCatalogStandalone__get_ICON_ATLAS_PATH(
        ClassBoardResourceCatalogStandalone_o *this,
        const MethodInfo *method)
{
  if ( (byte_4AB9224 & 1) == 0 )
  {
    sub_1BAB41C(&StringLiteral_4493/*"ClassBoard/Icon/DownloadClassBoardIconAtlas"*/, method);
    byte_4AB9224 = 1;
  }
  return (System_String_o *)StringLiteral_4493/*"ClassBoard/Icon/DownloadClassBoardIconAtlas"*/;
}


System_String_o *__fastcall ClassBoardResourceCatalogStandalone__get_LINE_PATH(
        ClassBoardResourceCatalogStandalone_o *this,
        const MethodInfo *method)
{
  if ( (byte_4AB921A & 1) == 0 )
  {
    sub_1BAB41C(&StringLiteral_4485/*"ClassBoard/ClassBoardLine"*/, method);
    byte_4AB921A = 1;
  }
  return (System_String_o *)StringLiteral_4485/*"ClassBoard/ClassBoardLine"*/;
}


System_String_o *__fastcall ClassBoardResourceCatalogStandalone__get_LOCK_OPEN_CONFIRM_DIALOG_PATH(
        ClassBoardResourceCatalogStandalone_o *this,
        const MethodInfo *method)
{
  if ( (byte_4AB9220 & 1) == 0 )
  {
    sub_1BAB41C(&StringLiteral_4487/*"ClassBoard/ClassBoardLockOpenConfirmDialog"*/, method);
    byte_4AB9220 = 1;
  }
  return (System_String_o *)StringLiteral_4487/*"ClassBoard/ClassBoardLockOpenConfirmDialog"*/;
}


System_String_o *__fastcall ClassBoardResourceCatalogStandalone__get_LOCK_PATH(
        ClassBoardResourceCatalogStandalone_o *this,
        const MethodInfo *method)
{
  if ( (byte_4AB921C & 1) == 0 )
  {
    sub_1BAB41C(&StringLiteral_4486/*"ClassBoard/ClassBoardLock"*/, method);
    byte_4AB921C = 1;
  }
  return (System_String_o *)StringLiteral_4486/*"ClassBoard/ClassBoardLock"*/;
}


System_String_o *__fastcall ClassBoardResourceCatalogStandalone__get_LOCK_RELEASE_CONDITION_DIALOG_PATH(
        ClassBoardResourceCatalogStandalone_o *this,
        const MethodInfo *method)
{
  if ( (byte_4AB9221 & 1) == 0 )
  {
    sub_1BAB41C(&StringLiteral_4488/*"ClassBoard/ClassBoardLockReleaseConditionDialog"*/, method);
    byte_4AB9221 = 1;
  }
  return (System_String_o *)StringLiteral_4488/*"ClassBoard/ClassBoardLockReleaseConditionDialog"*/;
}


System_String_o *__fastcall ClassBoardResourceCatalogStandalone__get_SQUARE_DETAIL_DIALOG_PATH(
        ClassBoardResourceCatalogStandalone_o *this,
        const MethodInfo *method)
{
  if ( (byte_4AB9222 & 1) == 0 )
  {
    sub_1BAB41C(&StringLiteral_4490/*"ClassBoard/ClassBoardSquareDetailDialog"*/, method);
    byte_4AB9222 = 1;
  }
  return (System_String_o *)StringLiteral_4490/*"ClassBoard/ClassBoardSquareDetailDialog"*/;
}


System_String_o *__fastcall ClassBoardResourceCatalogStandalone__get_SQUARE_OPEN_CONFIRM_DIALOG_PATH(
        ClassBoardResourceCatalogStandalone_o *this,
        const MethodInfo *method)
{
  if ( (byte_4AB921F & 1) == 0 )
  {
    sub_1BAB41C(&StringLiteral_4491/*"ClassBoard/ClassBoardSquareOpenConfirmDialog"*/, method);
    byte_4AB921F = 1;
  }
  return (System_String_o *)StringLiteral_4491/*"ClassBoard/ClassBoardSquareOpenConfirmDialog"*/;
}


System_String_o *__fastcall ClassBoardResourceCatalogStandalone__get_SQUARE_PATH(
        ClassBoardResourceCatalogStandalone_o *this,
        const MethodInfo *method)
{
  if ( (byte_4AB921B & 1) == 0 )
  {
    sub_1BAB41C(&StringLiteral_4489/*"ClassBoard/ClassBoardSquare"*/, method);
    byte_4AB921B = 1;
  }
  return (System_String_o *)StringLiteral_4489/*"ClassBoard/ClassBoardSquare"*/;
}


System_String_o *__fastcall ClassBoardResourceCatalogStandalone__get_UI_ATLAS_PATH(
        ClassBoardResourceCatalogStandalone_o *this,
        const MethodInfo *method)
{
  if ( (byte_4AB9226 & 1) == 0 )
  {
    sub_1BAB41C(&StringLiteral_4497/*"ClassBoard/UI/DownloadClassBoardUIAtlas"*/, method);
    byte_4AB9226 = 1;
  }
  return (System_String_o *)StringLiteral_4497/*"ClassBoard/UI/DownloadClassBoardUIAtlas"*/;
}