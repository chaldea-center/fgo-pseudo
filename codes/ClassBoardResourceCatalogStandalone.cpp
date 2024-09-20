void __fastcall ClassBoardResourceCatalogStandalone___ctor(
        ClassBoardResourceCatalogStandalone_o *this,
        const MethodInfo *method)
{
  Il2CppObject *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_4A5E5EC & 1) == 0 )
  {
    sub_1B885B0(&ClassBoardResourceContents_TypeInfo);
    byte_4A5E5EC = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v3 = (Il2CppObject *)sub_1B887FC(ClassBoardResourceContents_TypeInfo);
  System_Object___ctor(v3, 0LL);
  this->fields._Contents_k__BackingField = (struct ClassBoardResourceContents_o *)v3;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)v3, v4, v5);
}


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
  if ( (byte_4A5E5EF & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_Resources_Load_ClassBoardBlank___);
    byte_4A5E5EF = 1;
  }
  v4 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, Il2CppMethodPointer, const MethodInfo *))this->klass->vtable._14_get_BLANK_PATH.method)(
                            this,
                            this->klass->vtable._15_get_DISABLE_OPEN_DIALOG_PATH.methodPtr,
                            method);
  v5 = System_Int32__ToString((int32_t)&v8, 0LL);
  v6 = System_String__Concat_61707032(v4, v5, 0LL);
  return (ClassBoardBlank_o *)UnityEngine_Resources__Load_object_(
                                v6,
                                (const MethodInfo_2F130B0 *)Method_UnityEngine_Resources_Load_ClassBoardBlank___);
}


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
  if ( (byte_4A5E5F0 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_Resources_Load_ClassBoardLock___);
    byte_4A5E5F0 = 1;
  }
  v4 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, Il2CppMethodPointer, const MethodInfo *))this->klass->vtable._13_get_LOCK_PATH.method)(
                            this,
                            this->klass->vtable._14_get_BLANK_PATH.methodPtr,
                            method);
  v5 = System_Int32__ToString((int32_t)&v8, 0LL);
  v6 = System_String__Concat_61707032(v4, v5, 0LL);
  return (ClassBoardLock_o *)UnityEngine_Resources__Load_object_(
                               v6,
                               (const MethodInfo_2F130B0 *)Method_UnityEngine_Resources_Load_ClassBoardLock___);
}


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
  if ( (byte_4A5E5EE & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_Resources_Load_ClassBoardSquare___);
    byte_4A5E5EE = 1;
  }
  v4 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, Il2CppMethodPointer, const MethodInfo *))this->klass->vtable._12_get_SQUARE_PATH.method)(
                            this,
                            this->klass->vtable._13_get_LOCK_PATH.methodPtr,
                            method);
  v5 = System_Int32__ToString((int32_t)&v8, 0LL);
  v6 = System_String__Concat_61707032(v4, v5, 0LL);
  return (ClassBoardSquare_o *)UnityEngine_Resources__Load_object_(
                                 v6,
                                 (const MethodInfo_2F130B0 *)Method_UnityEngine_Resources_Load_ClassBoardSquare___);
}


void __fastcall ClassBoardResourceCatalogStandalone__LoadSystemAsset(
        ClassBoardResourceCatalogStandalone_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_o *v4; // x0
  System_String_o *v5; // x0
  System_String_o *v6; // x0
  Il2CppObject *v7; // x23
  System_String_o *v8; // x0
  Il2CppObject *v9; // x26
  System_String_o *v10; // x0
  Il2CppObject *v11; // x27
  System_String_o *v12; // x0
  Il2CppObject *v13; // x28
  System_String_o *v14; // x0
  Il2CppObject *v15; // x29
  System_String_o *v16; // x0
  Il2CppObject *v17; // x21
  System_String_o *v18; // x0
  Il2CppObject *v19; // x22
  System_String_o *v20; // x0
  Il2CppObject *v21; // x25
  System_String_o *v22; // x0
  char *Contents_k__BackingField; // x0
  __int64 v24; // x1
  const MethodInfo *v25; // x5
  char *v26; // x24
  const MethodInfo *v27; // x6
  ClassBoardResourceContents_o *v28; // x21
  System_String_o *v29; // x23
  AtlasManagerUnit_o *v30; // x22
  System_String_o *v31; // x26
  AtlasManagerUnit_o *v32; // x23
  System_String_o *v33; // x27
  AtlasManagerUnit_o *v34; // x26
  const MethodInfo *v35; // x5
  int32_t v36; // w2
  int32_t v37; // w3
  Il2CppObject *v39; // [xsp+10h] [xbp-70h]
  Il2CppObject *object; // [xsp+18h] [xbp-68h]

  if ( (byte_4A5E5ED & 1) == 0 )
  {
    sub_1B885B0(&AtlasManagerUnit_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_Resources_Load_ClassBoardBackground___);
    sub_1B885B0(&Method_UnityEngine_Resources_Load_ClassBoardBlank___);
    sub_1B885B0(&Method_UnityEngine_Resources_Load_ClassBoardDisableOpenDialog___);
    sub_1B885B0(&Method_UnityEngine_Resources_Load_ClassBoardLine___);
    sub_1B885B0(&Method_UnityEngine_Resources_Load_ClassBoardLockOpenConfirmDialog___);
    sub_1B885B0(&Method_UnityEngine_Resources_Load_ClassBoardLockReleaseConditionDialog___);
    sub_1B885B0(&Method_UnityEngine_Resources_Load_ClassBoardLock___);
    sub_1B885B0(&Method_UnityEngine_Resources_Load_ClassBoardSquareDetailDialog___);
    sub_1B885B0(&Method_UnityEngine_Resources_Load_ClassBoardSquareOpenConfirmDialog___);
    sub_1B885B0(&Method_UnityEngine_Resources_Load_ClassBoardSquare___);
    sub_1B885B0(&Method_UnityEngine_Resources_Load_ClassBoardUIController___);
    byte_4A5E5ED = 1;
  }
  v4 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, Il2CppMethodPointer, const MethodInfo *))this->klass->vtable._12_get_SQUARE_PATH.method)(
                            this,
                            this->klass->vtable._13_get_LOCK_PATH.methodPtr,
                            method);
  object = UnityEngine_Resources__Load_object_(
             v4,
             (const MethodInfo_2F130B0 *)Method_UnityEngine_Resources_Load_ClassBoardSquare___);
  v5 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, Il2CppMethodPointer))this->klass->vtable._11_get_LINE_PATH.method)(
                            this,
                            this->klass->vtable._12_get_SQUARE_PATH.methodPtr);
  v39 = UnityEngine_Resources__Load_object_(
          v5,
          (const MethodInfo_2F130B0 *)Method_UnityEngine_Resources_Load_ClassBoardLine___);
  v6 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, Il2CppMethodPointer))this->klass->vtable._13_get_LOCK_PATH.method)(
                            this,
                            this->klass->vtable._14_get_BLANK_PATH.methodPtr);
  v7 = UnityEngine_Resources__Load_object_(
         v6,
         (const MethodInfo_2F130B0 *)Method_UnityEngine_Resources_Load_ClassBoardLock___);
  v8 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, Il2CppMethodPointer))this->klass->vtable._14_get_BLANK_PATH.method)(
                            this,
                            this->klass->vtable._15_get_DISABLE_OPEN_DIALOG_PATH.methodPtr);
  v9 = UnityEngine_Resources__Load_object_(
         v8,
         (const MethodInfo_2F130B0 *)Method_UnityEngine_Resources_Load_ClassBoardBlank___);
  v10 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, Il2CppMethodPointer))this->klass->vtable._15_get_DISABLE_OPEN_DIALOG_PATH.method)(
                             this,
                             this->klass->vtable._16_get_SQUARE_OPEN_CONFIRM_DIALOG_PATH.methodPtr);
  v11 = UnityEngine_Resources__Load_object_(
          v10,
          (const MethodInfo_2F130B0 *)Method_UnityEngine_Resources_Load_ClassBoardDisableOpenDialog___);
  v12 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, Il2CppMethodPointer))this->klass->vtable._16_get_SQUARE_OPEN_CONFIRM_DIALOG_PATH.method)(
                             this,
                             this->klass->vtable._17_get_LOCK_OPEN_CONFIRM_DIALOG_PATH.methodPtr);
  v13 = UnityEngine_Resources__Load_object_(
          v12,
          (const MethodInfo_2F130B0 *)Method_UnityEngine_Resources_Load_ClassBoardSquareOpenConfirmDialog___);
  v14 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, Il2CppMethodPointer))this->klass->vtable._17_get_LOCK_OPEN_CONFIRM_DIALOG_PATH.method)(
                             this,
                             this->klass->vtable._18_get_LOCK_RELEASE_CONDITION_DIALOG_PATH.methodPtr);
  v15 = UnityEngine_Resources__Load_object_(
          v14,
          (const MethodInfo_2F130B0 *)Method_UnityEngine_Resources_Load_ClassBoardLockOpenConfirmDialog___);
  v16 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, Il2CppMethodPointer))this->klass->vtable._18_get_LOCK_RELEASE_CONDITION_DIALOG_PATH.method)(
                             this,
                             this->klass->vtable._19_get_SQUARE_DETAIL_DIALOG_PATH.methodPtr);
  v17 = UnityEngine_Resources__Load_object_(
          v16,
          (const MethodInfo_2F130B0 *)Method_UnityEngine_Resources_Load_ClassBoardLockReleaseConditionDialog___);
  v18 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, Il2CppMethodPointer))this->klass->vtable._19_get_SQUARE_DETAIL_DIALOG_PATH.method)(
                             this,
                             this->klass->vtable._20_get_BOARD_UI_PATH.methodPtr);
  v19 = UnityEngine_Resources__Load_object_(
          v18,
          (const MethodInfo_2F130B0 *)Method_UnityEngine_Resources_Load_ClassBoardSquareDetailDialog___);
  v20 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, Il2CppMethodPointer))this->klass->vtable._20_get_BOARD_UI_PATH.method)(
                             this,
                             this->klass->vtable._21_get_ICON_ATLAS_PATH.methodPtr);
  v21 = UnityEngine_Resources__Load_object_(
          v20,
          (const MethodInfo_2F130B0 *)Method_UnityEngine_Resources_Load_ClassBoardUIController___);
  v22 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, Il2CppMethodPointer))this->klass->vtable._22_get_BOARD_BG_MODEL_PATH.method)(
                             this,
                             this->klass->vtable._23_get_UI_ATLAS_PATH.methodPtr);
  Contents_k__BackingField = (char *)UnityEngine_Resources__Load_object_(
                                       v22,
                                       (const MethodInfo_2F130B0 *)Method_UnityEngine_Resources_Load_ClassBoardBackground___);
  if ( !this->fields._Contents_k__BackingField )
    goto LABEL_9;
  v26 = Contents_k__BackingField;
  ClassBoardResourceContents__SetContents(
    this->fields._Contents_k__BackingField,
    (ClassBoardSquare_o *)object,
    (ClassBoardLine_o *)v39,
    (ClassBoardLock_o *)v7,
    (ClassBoardBlank_o *)v9,
    v25);
  Contents_k__BackingField = (char *)this->fields._Contents_k__BackingField;
  if ( !Contents_k__BackingField )
    goto LABEL_9;
  ClassBoardResourceContents__SetContentsDialog(
    (ClassBoardResourceContents_o *)Contents_k__BackingField,
    (ClassBoardDisableOpenDialog_o *)v11,
    (ClassBoardSquareOpenConfirmDialog_o *)v13,
    (ClassBoardLockOpenConfirmDialog_o *)v15,
    (ClassBoardLockReleaseConditionDialog_o *)v17,
    (ClassBoardSquareDetailDialog_o *)v19,
    v27);
  v28 = this->fields._Contents_k__BackingField;
  v29 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, Il2CppMethodPointer))this->klass->vtable._23_get_UI_ATLAS_PATH.method)(
                             this,
                             this->klass->vtable._24_get_CLASS_UI_ATLAS_PATH.methodPtr);
  v30 = (AtlasManagerUnit_o *)sub_1B887FC(AtlasManagerUnit_TypeInfo);
  AtlasManagerUnit___ctor(v30, v29, 0LL, 0LL);
  v31 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, Il2CppMethodPointer))this->klass->vtable._21_get_ICON_ATLAS_PATH.method)(
                             this,
                             this->klass->vtable._22_get_BOARD_BG_MODEL_PATH.methodPtr);
  v32 = (AtlasManagerUnit_o *)sub_1B887FC(AtlasManagerUnit_TypeInfo);
  AtlasManagerUnit___ctor(v32, v31, 0LL, 0LL);
  v33 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, Il2CppMethodPointer))this->klass->vtable._24_get_CLASS_UI_ATLAS_PATH.method)(
                             this,
                             this->klass->vtable._25_LoadSystemAsset.methodPtr);
  v34 = (AtlasManagerUnit_o *)sub_1B887FC(AtlasManagerUnit_TypeInfo);
  AtlasManagerUnit___ctor(v34, v33, 0LL, 0LL);
  if ( !v28
    || (ClassBoardResourceContents__SetContentsUI(v28, (ClassBoardUIController_o *)v21, v30, v32, v34, v35),
        (Contents_k__BackingField = (char *)this->fields._Contents_k__BackingField) == 0LL)
    || (*((_QWORD *)Contents_k__BackingField + 12) = v26,
        sub_1B88554((ServantStatusBattleListViewItem_o *)(Contents_k__BackingField + 96), (int32_t)v26, v36, v37),
        !callback) )
  {
LABEL_9:
    sub_1B8880C(Contents_k__BackingField, v24);
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
  if ( (byte_4A5E5E1 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_4484/*"ClassBoard/ClassBoardBlank"*/);
    byte_4A5E5E1 = 1;
  }
  return (System_String_o *)StringLiteral_4484/*"ClassBoard/ClassBoardBlank"*/;
}


System_String_o *__fastcall ClassBoardResourceCatalogStandalone__get_BOARD_BG_MODEL_PATH(
        ClassBoardResourceCatalogStandalone_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A5E5E9 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_4483/*"ClassBoard/Bg/ClassBoardBg"*/);
    byte_4A5E5E9 = 1;
  }
  return (System_String_o *)StringLiteral_4483/*"ClassBoard/Bg/ClassBoardBg"*/;
}


System_String_o *__fastcall ClassBoardResourceCatalogStandalone__get_BOARD_UI_PATH(
        ClassBoardResourceCatalogStandalone_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A5E5E7 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_4493/*"ClassBoard/ClassBoardUI"*/);
    byte_4A5E5E7 = 1;
  }
  return (System_String_o *)StringLiteral_4493/*"ClassBoard/ClassBoardUI"*/;
}


System_String_o *__fastcall ClassBoardResourceCatalogStandalone__get_CLASS_UI_ATLAS_PATH(
        ClassBoardResourceCatalogStandalone_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A5E5EB & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_4497/*"ClassBoard/UI/DownloadClassBoardClassUIAtlas"*/);
    byte_4A5E5EB = 1;
  }
  return (System_String_o *)StringLiteral_4497/*"ClassBoard/UI/DownloadClassBoardClassUIAtlas"*/;
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
  if ( (byte_4A5E5E2 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_4485/*"ClassBoard/ClassBoardDisableOpenDialog"*/);
    byte_4A5E5E2 = 1;
  }
  return (System_String_o *)StringLiteral_4485/*"ClassBoard/ClassBoardDisableOpenDialog"*/;
}


System_String_o *__fastcall ClassBoardResourceCatalogStandalone__get_ICON_ATLAS_PATH(
        ClassBoardResourceCatalogStandalone_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A5E5E8 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_4494/*"ClassBoard/Icon/DownloadClassBoardIconAtlas"*/);
    byte_4A5E5E8 = 1;
  }
  return (System_String_o *)StringLiteral_4494/*"ClassBoard/Icon/DownloadClassBoardIconAtlas"*/;
}


System_String_o *__fastcall ClassBoardResourceCatalogStandalone__get_LINE_PATH(
        ClassBoardResourceCatalogStandalone_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A5E5DE & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_4486/*"ClassBoard/ClassBoardLine"*/);
    byte_4A5E5DE = 1;
  }
  return (System_String_o *)StringLiteral_4486/*"ClassBoard/ClassBoardLine"*/;
}


System_String_o *__fastcall ClassBoardResourceCatalogStandalone__get_LOCK_OPEN_CONFIRM_DIALOG_PATH(
        ClassBoardResourceCatalogStandalone_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A5E5E4 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_4488/*"ClassBoard/ClassBoardLockOpenConfirmDialog"*/);
    byte_4A5E5E4 = 1;
  }
  return (System_String_o *)StringLiteral_4488/*"ClassBoard/ClassBoardLockOpenConfirmDialog"*/;
}


System_String_o *__fastcall ClassBoardResourceCatalogStandalone__get_LOCK_PATH(
        ClassBoardResourceCatalogStandalone_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A5E5E0 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_4487/*"ClassBoard/ClassBoardLock"*/);
    byte_4A5E5E0 = 1;
  }
  return (System_String_o *)StringLiteral_4487/*"ClassBoard/ClassBoardLock"*/;
}


System_String_o *__fastcall ClassBoardResourceCatalogStandalone__get_LOCK_RELEASE_CONDITION_DIALOG_PATH(
        ClassBoardResourceCatalogStandalone_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A5E5E5 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_4489/*"ClassBoard/ClassBoardLockReleaseConditionDialog"*/);
    byte_4A5E5E5 = 1;
  }
  return (System_String_o *)StringLiteral_4489/*"ClassBoard/ClassBoardLockReleaseConditionDialog"*/;
}


System_String_o *__fastcall ClassBoardResourceCatalogStandalone__get_SQUARE_DETAIL_DIALOG_PATH(
        ClassBoardResourceCatalogStandalone_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A5E5E6 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_4491/*"ClassBoard/ClassBoardSquareDetailDialog"*/);
    byte_4A5E5E6 = 1;
  }
  return (System_String_o *)StringLiteral_4491/*"ClassBoard/ClassBoardSquareDetailDialog"*/;
}


System_String_o *__fastcall ClassBoardResourceCatalogStandalone__get_SQUARE_OPEN_CONFIRM_DIALOG_PATH(
        ClassBoardResourceCatalogStandalone_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A5E5E3 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_4492/*"ClassBoard/ClassBoardSquareOpenConfirmDialog"*/);
    byte_4A5E5E3 = 1;
  }
  return (System_String_o *)StringLiteral_4492/*"ClassBoard/ClassBoardSquareOpenConfirmDialog"*/;
}


System_String_o *__fastcall ClassBoardResourceCatalogStandalone__get_SQUARE_PATH(
        ClassBoardResourceCatalogStandalone_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A5E5DF & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_4490/*"ClassBoard/ClassBoardSquare"*/);
    byte_4A5E5DF = 1;
  }
  return (System_String_o *)StringLiteral_4490/*"ClassBoard/ClassBoardSquare"*/;
}


System_String_o *__fastcall ClassBoardResourceCatalogStandalone__get_UI_ATLAS_PATH(
        ClassBoardResourceCatalogStandalone_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A5E5EA & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_4498/*"ClassBoard/UI/DownloadClassBoardUIAtlas"*/);
    byte_4A5E5EA = 1;
  }
  return (System_String_o *)StringLiteral_4498/*"ClassBoard/UI/DownloadClassBoardUIAtlas"*/;
}