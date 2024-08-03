void __fastcall ClassBoardResourceCatalogStandalone___ctor(
        ClassBoardResourceCatalogStandalone_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x2
  Il2CppObject *v5; // x20
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_49FF805 & 1) == 0 )
  {
    sub_1B640C8(&ClassBoardResourceContents_TypeInfo, method);
    byte_49FF805 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v5 = (Il2CppObject *)sub_1B64314(ClassBoardResourceContents_TypeInfo, v3, v4);
  System_Object___ctor(v5, 0LL);
  this->fields._Contents_k__BackingField = (struct ClassBoardResourceContents_o *)v5;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)v5, v6, v7);
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
  if ( (byte_49FF808 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_Resources_Load_ClassBoardBlank___, *(_QWORD *)&assetId);
    byte_49FF808 = 1;
  }
  v4 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, Il2CppMethodPointer, const MethodInfo *))this->klass->vtable._14_get_BLANK_PATH.method)(
                            this,
                            this->klass->vtable._15_get_DISABLE_OPEN_DIALOG_PATH.methodPtr,
                            method);
  v5 = System_Int32__ToString((int32_t)&v8, 0LL);
  v6 = System_String__Concat_61375396(v4, v5, 0LL);
  return (ClassBoardBlank_o *)UnityEngine_Resources__Load_object_(
                                v6,
                                (const MethodInfo_2ECC0A8 *)Method_UnityEngine_Resources_Load_ClassBoardBlank___);
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
  if ( (byte_49FF809 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_Resources_Load_ClassBoardLock___, *(_QWORD *)&assetId);
    byte_49FF809 = 1;
  }
  v4 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, Il2CppMethodPointer, const MethodInfo *))this->klass->vtable._13_get_LOCK_PATH.method)(
                            this,
                            this->klass->vtable._14_get_BLANK_PATH.methodPtr,
                            method);
  v5 = System_Int32__ToString((int32_t)&v8, 0LL);
  v6 = System_String__Concat_61375396(v4, v5, 0LL);
  return (ClassBoardLock_o *)UnityEngine_Resources__Load_object_(
                               v6,
                               (const MethodInfo_2ECC0A8 *)Method_UnityEngine_Resources_Load_ClassBoardLock___);
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
  if ( (byte_49FF807 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_Resources_Load_ClassBoardSquare___, *(_QWORD *)&assetId);
    byte_49FF807 = 1;
  }
  v4 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, Il2CppMethodPointer, const MethodInfo *))this->klass->vtable._12_get_SQUARE_PATH.method)(
                            this,
                            this->klass->vtable._13_get_LOCK_PATH.methodPtr,
                            method);
  v5 = System_Int32__ToString((int32_t)&v8, 0LL);
  v6 = System_String__Concat_61375396(v4, v5, 0LL);
  return (ClassBoardSquare_o *)UnityEngine_Resources__Load_object_(
                                 v6,
                                 (const MethodInfo_2ECC0A8 *)Method_UnityEngine_Resources_Load_ClassBoardSquare___);
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
  const MethodInfo *v35; // x5
  char *v36; // x24
  const MethodInfo *v37; // x6
  ClassBoardResourceContents_o *v38; // x21
  System_String_o *v39; // x23
  __int64 v40; // x1
  __int64 v41; // x2
  AtlasManagerUnit_o *v42; // x22
  System_String_o *v43; // x26
  __int64 v44; // x1
  __int64 v45; // x2
  AtlasManagerUnit_o *v46; // x23
  System_String_o *v47; // x27
  __int64 v48; // x1
  __int64 v49; // x2
  AtlasManagerUnit_o *v50; // x26
  const MethodInfo *v51; // x5
  int32_t v52; // w2
  int32_t v53; // w3
  Il2CppObject *v55; // [xsp+10h] [xbp-70h]
  Il2CppObject *object; // [xsp+18h] [xbp-68h]

  if ( (byte_49FF806 & 1) == 0 )
  {
    sub_1B640C8(&AtlasManagerUnit_TypeInfo, callback);
    sub_1B640C8(&Method_UnityEngine_Resources_Load_ClassBoardBackground___, v4);
    sub_1B640C8(&Method_UnityEngine_Resources_Load_ClassBoardBlank___, v5);
    sub_1B640C8(&Method_UnityEngine_Resources_Load_ClassBoardDisableOpenDialog___, v6);
    sub_1B640C8(&Method_UnityEngine_Resources_Load_ClassBoardLine___, v7);
    sub_1B640C8(&Method_UnityEngine_Resources_Load_ClassBoardLockOpenConfirmDialog___, v8);
    sub_1B640C8(&Method_UnityEngine_Resources_Load_ClassBoardLockReleaseConditionDialog___, v9);
    sub_1B640C8(&Method_UnityEngine_Resources_Load_ClassBoardLock___, v10);
    sub_1B640C8(&Method_UnityEngine_Resources_Load_ClassBoardSquareDetailDialog___, v11);
    sub_1B640C8(&Method_UnityEngine_Resources_Load_ClassBoardSquareOpenConfirmDialog___, v12);
    sub_1B640C8(&Method_UnityEngine_Resources_Load_ClassBoardSquare___, v13);
    sub_1B640C8(&Method_UnityEngine_Resources_Load_ClassBoardUIController___, v14);
    byte_49FF806 = 1;
  }
  v15 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, Il2CppMethodPointer, const MethodInfo *))this->klass->vtable._12_get_SQUARE_PATH.method)(
                             this,
                             this->klass->vtable._13_get_LOCK_PATH.methodPtr,
                             method);
  object = UnityEngine_Resources__Load_object_(
             v15,
             (const MethodInfo_2ECC0A8 *)Method_UnityEngine_Resources_Load_ClassBoardSquare___);
  v16 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, Il2CppMethodPointer))this->klass->vtable._11_get_LINE_PATH.method)(
                             this,
                             this->klass->vtable._12_get_SQUARE_PATH.methodPtr);
  v55 = UnityEngine_Resources__Load_object_(
          v16,
          (const MethodInfo_2ECC0A8 *)Method_UnityEngine_Resources_Load_ClassBoardLine___);
  v17 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, Il2CppMethodPointer))this->klass->vtable._13_get_LOCK_PATH.method)(
                             this,
                             this->klass->vtable._14_get_BLANK_PATH.methodPtr);
  v18 = UnityEngine_Resources__Load_object_(
          v17,
          (const MethodInfo_2ECC0A8 *)Method_UnityEngine_Resources_Load_ClassBoardLock___);
  v19 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, Il2CppMethodPointer))this->klass->vtable._14_get_BLANK_PATH.method)(
                             this,
                             this->klass->vtable._15_get_DISABLE_OPEN_DIALOG_PATH.methodPtr);
  v20 = UnityEngine_Resources__Load_object_(
          v19,
          (const MethodInfo_2ECC0A8 *)Method_UnityEngine_Resources_Load_ClassBoardBlank___);
  v21 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, Il2CppMethodPointer))this->klass->vtable._15_get_DISABLE_OPEN_DIALOG_PATH.method)(
                             this,
                             this->klass->vtable._16_get_SQUARE_OPEN_CONFIRM_DIALOG_PATH.methodPtr);
  v22 = UnityEngine_Resources__Load_object_(
          v21,
          (const MethodInfo_2ECC0A8 *)Method_UnityEngine_Resources_Load_ClassBoardDisableOpenDialog___);
  v23 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, Il2CppMethodPointer))this->klass->vtable._16_get_SQUARE_OPEN_CONFIRM_DIALOG_PATH.method)(
                             this,
                             this->klass->vtable._17_get_LOCK_OPEN_CONFIRM_DIALOG_PATH.methodPtr);
  v24 = UnityEngine_Resources__Load_object_(
          v23,
          (const MethodInfo_2ECC0A8 *)Method_UnityEngine_Resources_Load_ClassBoardSquareOpenConfirmDialog___);
  v25 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, Il2CppMethodPointer))this->klass->vtable._17_get_LOCK_OPEN_CONFIRM_DIALOG_PATH.method)(
                             this,
                             this->klass->vtable._18_get_LOCK_RELEASE_CONDITION_DIALOG_PATH.methodPtr);
  v26 = UnityEngine_Resources__Load_object_(
          v25,
          (const MethodInfo_2ECC0A8 *)Method_UnityEngine_Resources_Load_ClassBoardLockOpenConfirmDialog___);
  v27 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, Il2CppMethodPointer))this->klass->vtable._18_get_LOCK_RELEASE_CONDITION_DIALOG_PATH.method)(
                             this,
                             this->klass->vtable._19_get_SQUARE_DETAIL_DIALOG_PATH.methodPtr);
  v28 = UnityEngine_Resources__Load_object_(
          v27,
          (const MethodInfo_2ECC0A8 *)Method_UnityEngine_Resources_Load_ClassBoardLockReleaseConditionDialog___);
  v29 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, Il2CppMethodPointer))this->klass->vtable._19_get_SQUARE_DETAIL_DIALOG_PATH.method)(
                             this,
                             this->klass->vtable._20_get_BOARD_UI_PATH.methodPtr);
  v30 = UnityEngine_Resources__Load_object_(
          v29,
          (const MethodInfo_2ECC0A8 *)Method_UnityEngine_Resources_Load_ClassBoardSquareDetailDialog___);
  v31 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, Il2CppMethodPointer))this->klass->vtable._20_get_BOARD_UI_PATH.method)(
                             this,
                             this->klass->vtable._21_get_ICON_ATLAS_PATH.methodPtr);
  v32 = UnityEngine_Resources__Load_object_(
          v31,
          (const MethodInfo_2ECC0A8 *)Method_UnityEngine_Resources_Load_ClassBoardUIController___);
  v33 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, Il2CppMethodPointer))this->klass->vtable._22_get_BOARD_BG_MODEL_PATH.method)(
                             this,
                             this->klass->vtable._23_get_UI_ATLAS_PATH.methodPtr);
  Contents_k__BackingField = (char *)UnityEngine_Resources__Load_object_(
                                       v33,
                                       (const MethodInfo_2ECC0A8 *)Method_UnityEngine_Resources_Load_ClassBoardBackground___);
  if ( !this->fields._Contents_k__BackingField )
    goto LABEL_9;
  v36 = Contents_k__BackingField;
  ClassBoardResourceContents__SetContents(
    this->fields._Contents_k__BackingField,
    (ClassBoardSquare_o *)object,
    (ClassBoardLine_o *)v55,
    (ClassBoardLock_o *)v18,
    (ClassBoardBlank_o *)v20,
    v35);
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
    v37);
  v38 = this->fields._Contents_k__BackingField;
  v39 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, Il2CppMethodPointer))this->klass->vtable._23_get_UI_ATLAS_PATH.method)(
                             this,
                             this->klass->vtable._24_get_CLASS_UI_ATLAS_PATH.methodPtr);
  v42 = (AtlasManagerUnit_o *)sub_1B64314(AtlasManagerUnit_TypeInfo, v40, v41);
  AtlasManagerUnit___ctor(v42, v39, 0LL, 0LL);
  v43 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, Il2CppMethodPointer))this->klass->vtable._21_get_ICON_ATLAS_PATH.method)(
                             this,
                             this->klass->vtable._22_get_BOARD_BG_MODEL_PATH.methodPtr);
  v46 = (AtlasManagerUnit_o *)sub_1B64314(AtlasManagerUnit_TypeInfo, v44, v45);
  AtlasManagerUnit___ctor(v46, v43, 0LL, 0LL);
  v47 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, Il2CppMethodPointer))this->klass->vtable._24_get_CLASS_UI_ATLAS_PATH.method)(
                             this,
                             this->klass->vtable._25_LoadSystemAsset.methodPtr);
  v50 = (AtlasManagerUnit_o *)sub_1B64314(AtlasManagerUnit_TypeInfo, v48, v49);
  AtlasManagerUnit___ctor(v50, v47, 0LL, 0LL);
  if ( !v38
    || (ClassBoardResourceContents__SetContentsUI(v38, (ClassBoardUIController_o *)v32, v42, v46, v50, v51),
        (Contents_k__BackingField = (char *)this->fields._Contents_k__BackingField) == 0LL)
    || (*((_QWORD *)Contents_k__BackingField + 12) = v36,
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(Contents_k__BackingField + 96), (int32_t)v36, v52, v53),
        !callback) )
  {
LABEL_9:
    sub_1B64324(Contents_k__BackingField);
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
  if ( (byte_49FF7FA & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_4461/*"ClassBoard/ClassBoardBlank"*/, method);
    byte_49FF7FA = 1;
  }
  return (System_String_o *)StringLiteral_4461/*"ClassBoard/ClassBoardBlank"*/;
}


System_String_o *__fastcall ClassBoardResourceCatalogStandalone__get_BOARD_BG_MODEL_PATH(
        ClassBoardResourceCatalogStandalone_o *this,
        const MethodInfo *method)
{
  if ( (byte_49FF802 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_4460/*"ClassBoard/Bg/ClassBoardBg"*/, method);
    byte_49FF802 = 1;
  }
  return (System_String_o *)StringLiteral_4460/*"ClassBoard/Bg/ClassBoardBg"*/;
}


System_String_o *__fastcall ClassBoardResourceCatalogStandalone__get_BOARD_UI_PATH(
        ClassBoardResourceCatalogStandalone_o *this,
        const MethodInfo *method)
{
  if ( (byte_49FF800 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_4470/*"ClassBoard/ClassBoardUI"*/, method);
    byte_49FF800 = 1;
  }
  return (System_String_o *)StringLiteral_4470/*"ClassBoard/ClassBoardUI"*/;
}


System_String_o *__fastcall ClassBoardResourceCatalogStandalone__get_CLASS_UI_ATLAS_PATH(
        ClassBoardResourceCatalogStandalone_o *this,
        const MethodInfo *method)
{
  if ( (byte_49FF804 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_4474/*"ClassBoard/UI/DownloadClassBoardClassUIAtlas"*/, method);
    byte_49FF804 = 1;
  }
  return (System_String_o *)StringLiteral_4474/*"ClassBoard/UI/DownloadClassBoardClassUIAtlas"*/;
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
  if ( (byte_49FF7FB & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_4462/*"ClassBoard/ClassBoardDisableOpenDialog"*/, method);
    byte_49FF7FB = 1;
  }
  return (System_String_o *)StringLiteral_4462/*"ClassBoard/ClassBoardDisableOpenDialog"*/;
}


System_String_o *__fastcall ClassBoardResourceCatalogStandalone__get_ICON_ATLAS_PATH(
        ClassBoardResourceCatalogStandalone_o *this,
        const MethodInfo *method)
{
  if ( (byte_49FF801 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_4471/*"ClassBoard/Icon/DownloadClassBoardIconAtlas"*/, method);
    byte_49FF801 = 1;
  }
  return (System_String_o *)StringLiteral_4471/*"ClassBoard/Icon/DownloadClassBoardIconAtlas"*/;
}


System_String_o *__fastcall ClassBoardResourceCatalogStandalone__get_LINE_PATH(
        ClassBoardResourceCatalogStandalone_o *this,
        const MethodInfo *method)
{
  if ( (byte_49FF7F7 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_4463/*"ClassBoard/ClassBoardLine"*/, method);
    byte_49FF7F7 = 1;
  }
  return (System_String_o *)StringLiteral_4463/*"ClassBoard/ClassBoardLine"*/;
}


System_String_o *__fastcall ClassBoardResourceCatalogStandalone__get_LOCK_OPEN_CONFIRM_DIALOG_PATH(
        ClassBoardResourceCatalogStandalone_o *this,
        const MethodInfo *method)
{
  if ( (byte_49FF7FD & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_4465/*"ClassBoard/ClassBoardLockOpenConfirmDialog"*/, method);
    byte_49FF7FD = 1;
  }
  return (System_String_o *)StringLiteral_4465/*"ClassBoard/ClassBoardLockOpenConfirmDialog"*/;
}


System_String_o *__fastcall ClassBoardResourceCatalogStandalone__get_LOCK_PATH(
        ClassBoardResourceCatalogStandalone_o *this,
        const MethodInfo *method)
{
  if ( (byte_49FF7F9 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_4464/*"ClassBoard/ClassBoardLock"*/, method);
    byte_49FF7F9 = 1;
  }
  return (System_String_o *)StringLiteral_4464/*"ClassBoard/ClassBoardLock"*/;
}


System_String_o *__fastcall ClassBoardResourceCatalogStandalone__get_LOCK_RELEASE_CONDITION_DIALOG_PATH(
        ClassBoardResourceCatalogStandalone_o *this,
        const MethodInfo *method)
{
  if ( (byte_49FF7FE & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_4466/*"ClassBoard/ClassBoardLockReleaseConditionDialog"*/, method);
    byte_49FF7FE = 1;
  }
  return (System_String_o *)StringLiteral_4466/*"ClassBoard/ClassBoardLockReleaseConditionDialog"*/;
}


System_String_o *__fastcall ClassBoardResourceCatalogStandalone__get_SQUARE_DETAIL_DIALOG_PATH(
        ClassBoardResourceCatalogStandalone_o *this,
        const MethodInfo *method)
{
  if ( (byte_49FF7FF & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_4468/*"ClassBoard/ClassBoardSquareDetailDialog"*/, method);
    byte_49FF7FF = 1;
  }
  return (System_String_o *)StringLiteral_4468/*"ClassBoard/ClassBoardSquareDetailDialog"*/;
}


System_String_o *__fastcall ClassBoardResourceCatalogStandalone__get_SQUARE_OPEN_CONFIRM_DIALOG_PATH(
        ClassBoardResourceCatalogStandalone_o *this,
        const MethodInfo *method)
{
  if ( (byte_49FF7FC & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_4469/*"ClassBoard/ClassBoardSquareOpenConfirmDialog"*/, method);
    byte_49FF7FC = 1;
  }
  return (System_String_o *)StringLiteral_4469/*"ClassBoard/ClassBoardSquareOpenConfirmDialog"*/;
}


System_String_o *__fastcall ClassBoardResourceCatalogStandalone__get_SQUARE_PATH(
        ClassBoardResourceCatalogStandalone_o *this,
        const MethodInfo *method)
{
  if ( (byte_49FF7F8 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_4467/*"ClassBoard/ClassBoardSquare"*/, method);
    byte_49FF7F8 = 1;
  }
  return (System_String_o *)StringLiteral_4467/*"ClassBoard/ClassBoardSquare"*/;
}


System_String_o *__fastcall ClassBoardResourceCatalogStandalone__get_UI_ATLAS_PATH(
        ClassBoardResourceCatalogStandalone_o *this,
        const MethodInfo *method)
{
  if ( (byte_49FF803 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_4475/*"ClassBoard/UI/DownloadClassBoardUIAtlas"*/, method);
    byte_49FF803 = 1;
  }
  return (System_String_o *)StringLiteral_4475/*"ClassBoard/UI/DownloadClassBoardUIAtlas"*/;
}