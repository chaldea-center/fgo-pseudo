void __fastcall ClassBoardResourceCatalogStandalone___ctor(
        ClassBoardResourceCatalogStandalone_o *this,
        const MethodInfo *method)
{
  Il2CppObject *v3; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_418954A & 1) == 0 )
  {
    sub_B2C35C(&ClassBoardResourceContents_TypeInfo, method);
    byte_418954A = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v3 = (Il2CppObject *)sub_B2C42C(ClassBoardResourceContents_TypeInfo);
  System_Object___ctor(v3, 0LL);
  this->fields._Contents_k__BackingField = (struct ClassBoardResourceContents_o *)v3;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v3, v4, v5, v6, v7, v8, v9);
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
  int32_t v8; // [xsp+Ch] [xbp-14h] BYREF

  v8 = assetId;
  if ( (byte_418954D & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Resources_Load_ClassBoardBlank___, *(_QWORD *)&assetId);
    byte_418954D = 1;
  }
  v4 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, Il2CppMethodPointer, const MethodInfo *))this->klass->vtable._14_get_BLANK_PATH.method)(
                            this,
                            this->klass->vtable._15_get_DISABLE_OPEN_DIALOG_PATH.methodPtr,
                            method);
  v5 = System_Int32__ToString((int32_t)&v8, 0LL);
  v6 = System_String__Concat_44305532(v4, v5, 0LL);
  return (ClassBoardBlank_o *)UnityEngine_Resources__Load_UIAtlas_(
                                v6,
                                (const MethodInfo_20990C8 *)Method_UnityEngine_Resources_Load_ClassBoardBlank___);
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
  int32_t v8; // [xsp+Ch] [xbp-14h] BYREF

  v8 = assetId;
  if ( (byte_418954E & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Resources_Load_ClassBoardLock___, *(_QWORD *)&assetId);
    byte_418954E = 1;
  }
  v4 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, Il2CppMethodPointer, const MethodInfo *))this->klass->vtable._13_get_LOCK_PATH.method)(
                            this,
                            this->klass->vtable._14_get_BLANK_PATH.methodPtr,
                            method);
  v5 = System_Int32__ToString((int32_t)&v8, 0LL);
  v6 = System_String__Concat_44305532(v4, v5, 0LL);
  return (ClassBoardLock_o *)UnityEngine_Resources__Load_UIAtlas_(
                               v6,
                               (const MethodInfo_20990C8 *)Method_UnityEngine_Resources_Load_ClassBoardLock___);
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
  int32_t v8; // [xsp+Ch] [xbp-14h] BYREF

  v8 = assetId;
  if ( (byte_418954C & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Resources_Load_ClassBoardSquare___, *(_QWORD *)&assetId);
    byte_418954C = 1;
  }
  v4 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, Il2CppMethodPointer, const MethodInfo *))this->klass->vtable._12_get_SQUARE_PATH.method)(
                            this,
                            this->klass->vtable._13_get_LOCK_PATH.methodPtr,
                            method);
  v5 = System_Int32__ToString((int32_t)&v8, 0LL);
  v6 = System_String__Concat_44305532(v4, v5, 0LL);
  return (ClassBoardSquare_o *)UnityEngine_Resources__Load_UIAtlas_(
                                 v6,
                                 (const MethodInfo_20990C8 *)Method_UnityEngine_Resources_Load_ClassBoardSquare___);
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
  ClassBoardLock_o *v18; // x23
  System_String_o *v19; // x0
  ClassBoardBlank_o *v20; // x24
  System_String_o *v21; // x0
  ClassBoardDisableOpenDialog_o *v22; // x27
  System_String_o *v23; // x0
  ClassBoardSquareOpenConfirmDialog_o *v24; // x28
  System_String_o *v25; // x0
  ClassBoardLockOpenConfirmDialog_o *v26; // x19
  System_String_o *v27; // x0
  ClassBoardLockReleaseConditionDialog_o *v28; // x21
  System_String_o *v29; // x0
  ClassBoardSquareDetailDialog_o *v30; // x22
  System_String_o *v31; // x0
  ClassBoardUIController_o *v32; // x26
  System_String_o *v33; // x0
  char *Contents_k__BackingField; // x0
  __int64 v35; // x1
  const MethodInfo *v36; // x5
  System_Int32_array **v37; // x25
  const MethodInfo *v38; // x6
  ClassBoardResourceContents_o *v39; // x19
  System_String_o *v40; // x22
  AtlasManagerUnit_o *v41; // x21
  System_String_o *v42; // x23
  AtlasManagerUnit_o *v43; // x22
  System_String_o *v44; // x24
  AtlasManagerUnit_o *v45; // x23
  const MethodInfo *v46; // x5
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  ClassBoardLine_o *v53; // [xsp+8h] [xbp-68h]
  ClassBoardSquare_o *UIAtlas; // [xsp+10h] [xbp-60h]

  if ( (byte_418954B & 1) == 0 )
  {
    sub_B2C35C(&AtlasManagerUnit_TypeInfo, callback);
    sub_B2C35C(&Method_UnityEngine_Resources_Load_ClassBoardBackground___, v4);
    sub_B2C35C(&Method_UnityEngine_Resources_Load_ClassBoardBlank___, v5);
    sub_B2C35C(&Method_UnityEngine_Resources_Load_ClassBoardDisableOpenDialog___, v6);
    sub_B2C35C(&Method_UnityEngine_Resources_Load_ClassBoardLine___, v7);
    sub_B2C35C(&Method_UnityEngine_Resources_Load_ClassBoardLockOpenConfirmDialog___, v8);
    sub_B2C35C(&Method_UnityEngine_Resources_Load_ClassBoardLockReleaseConditionDialog___, v9);
    sub_B2C35C(&Method_UnityEngine_Resources_Load_ClassBoardLock___, v10);
    sub_B2C35C(&Method_UnityEngine_Resources_Load_ClassBoardSquareDetailDialog___, v11);
    sub_B2C35C(&Method_UnityEngine_Resources_Load_ClassBoardSquareOpenConfirmDialog___, v12);
    sub_B2C35C(&Method_UnityEngine_Resources_Load_ClassBoardSquare___, v13);
    sub_B2C35C(&Method_UnityEngine_Resources_Load_ClassBoardUIController___, v14);
    byte_418954B = 1;
  }
  v15 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, Il2CppMethodPointer, const MethodInfo *))this->klass->vtable._12_get_SQUARE_PATH.method)(
                             this,
                             this->klass->vtable._13_get_LOCK_PATH.methodPtr,
                             method);
  UIAtlas = (ClassBoardSquare_o *)UnityEngine_Resources__Load_UIAtlas_(
                                    v15,
                                    (const MethodInfo_20990C8 *)Method_UnityEngine_Resources_Load_ClassBoardSquare___);
  v16 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, Il2CppMethodPointer))this->klass->vtable._11_get_LINE_PATH.method)(
                             this,
                             this->klass->vtable._12_get_SQUARE_PATH.methodPtr);
  v53 = (ClassBoardLine_o *)UnityEngine_Resources__Load_UIAtlas_(
                              v16,
                              (const MethodInfo_20990C8 *)Method_UnityEngine_Resources_Load_ClassBoardLine___);
  v17 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, Il2CppMethodPointer))this->klass->vtable._13_get_LOCK_PATH.method)(
                             this,
                             this->klass->vtable._14_get_BLANK_PATH.methodPtr);
  v18 = (ClassBoardLock_o *)UnityEngine_Resources__Load_UIAtlas_(
                              v17,
                              (const MethodInfo_20990C8 *)Method_UnityEngine_Resources_Load_ClassBoardLock___);
  v19 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, Il2CppMethodPointer))this->klass->vtable._14_get_BLANK_PATH.method)(
                             this,
                             this->klass->vtable._15_get_DISABLE_OPEN_DIALOG_PATH.methodPtr);
  v20 = (ClassBoardBlank_o *)UnityEngine_Resources__Load_UIAtlas_(
                               v19,
                               (const MethodInfo_20990C8 *)Method_UnityEngine_Resources_Load_ClassBoardBlank___);
  v21 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, Il2CppMethodPointer))this->klass->vtable._15_get_DISABLE_OPEN_DIALOG_PATH.method)(
                             this,
                             this->klass->vtable._16_get_SQUARE_OPEN_CONFIRM_DIALOG_PATH.methodPtr);
  v22 = (ClassBoardDisableOpenDialog_o *)UnityEngine_Resources__Load_UIAtlas_(
                                           v21,
                                           (const MethodInfo_20990C8 *)Method_UnityEngine_Resources_Load_ClassBoardDisableOpenDialog___);
  v23 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, Il2CppMethodPointer))this->klass->vtable._16_get_SQUARE_OPEN_CONFIRM_DIALOG_PATH.method)(
                             this,
                             this->klass->vtable._17_get_LOCK_OPEN_CONFIRM_DIALOG_PATH.methodPtr);
  v24 = (ClassBoardSquareOpenConfirmDialog_o *)UnityEngine_Resources__Load_UIAtlas_(
                                                 v23,
                                                 (const MethodInfo_20990C8 *)Method_UnityEngine_Resources_Load_ClassBoardSquareOpenConfirmDialog___);
  v25 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, Il2CppMethodPointer))this->klass->vtable._17_get_LOCK_OPEN_CONFIRM_DIALOG_PATH.method)(
                             this,
                             this->klass->vtable._18_get_LOCK_RELEASE_CONDITION_DIALOG_PATH.methodPtr);
  v26 = (ClassBoardLockOpenConfirmDialog_o *)UnityEngine_Resources__Load_UIAtlas_(
                                               v25,
                                               (const MethodInfo_20990C8 *)Method_UnityEngine_Resources_Load_ClassBoardLockOpenConfirmDialog___);
  v27 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, Il2CppMethodPointer))this->klass->vtable._18_get_LOCK_RELEASE_CONDITION_DIALOG_PATH.method)(
                             this,
                             this->klass->vtable._19_get_SQUARE_DETAIL_DIALOG_PATH.methodPtr);
  v28 = (ClassBoardLockReleaseConditionDialog_o *)UnityEngine_Resources__Load_UIAtlas_(
                                                    v27,
                                                    (const MethodInfo_20990C8 *)Method_UnityEngine_Resources_Load_ClassBoardLockReleaseConditionDialog___);
  v29 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, Il2CppMethodPointer))this->klass->vtable._19_get_SQUARE_DETAIL_DIALOG_PATH.method)(
                             this,
                             this->klass->vtable._20_get_BOARD_UI_PATH.methodPtr);
  v30 = (ClassBoardSquareDetailDialog_o *)UnityEngine_Resources__Load_UIAtlas_(
                                            v29,
                                            (const MethodInfo_20990C8 *)Method_UnityEngine_Resources_Load_ClassBoardSquareDetailDialog___);
  v31 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, Il2CppMethodPointer))this->klass->vtable._20_get_BOARD_UI_PATH.method)(
                             this,
                             this->klass->vtable._21_get_ICON_ATLAS_PATH.methodPtr);
  v32 = (ClassBoardUIController_o *)UnityEngine_Resources__Load_UIAtlas_(
                                      v31,
                                      (const MethodInfo_20990C8 *)Method_UnityEngine_Resources_Load_ClassBoardUIController___);
  v33 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, Il2CppMethodPointer))this->klass->vtable._22_get_BOARD_BG_MODEL_PATH.method)(
                             this,
                             this->klass->vtable._23_get_UI_ATLAS_PATH.methodPtr);
  Contents_k__BackingField = (char *)UnityEngine_Resources__Load_UIAtlas_(
                                       v33,
                                       (const MethodInfo_20990C8 *)Method_UnityEngine_Resources_Load_ClassBoardBackground___);
  if ( !this->fields._Contents_k__BackingField )
    goto LABEL_9;
  v37 = (System_Int32_array **)Contents_k__BackingField;
  ClassBoardResourceContents__SetContents(this->fields._Contents_k__BackingField, UIAtlas, v53, v18, v20, v36);
  Contents_k__BackingField = (char *)this->fields._Contents_k__BackingField;
  if ( !Contents_k__BackingField )
    goto LABEL_9;
  ClassBoardResourceContents__SetContentsDialog(
    (ClassBoardResourceContents_o *)Contents_k__BackingField,
    v22,
    v24,
    v26,
    v28,
    v30,
    v38);
  v39 = this->fields._Contents_k__BackingField;
  v40 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, Il2CppMethodPointer))this->klass->vtable._23_get_UI_ATLAS_PATH.method)(
                             this,
                             this->klass->vtable._24_get_CLASS_UI_ATLAS_PATH.methodPtr);
  v41 = (AtlasManagerUnit_o *)sub_B2C42C(AtlasManagerUnit_TypeInfo);
  AtlasManagerUnit___ctor(v41, v40, 0LL, 0LL);
  v42 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, Il2CppMethodPointer))this->klass->vtable._21_get_ICON_ATLAS_PATH.method)(
                             this,
                             this->klass->vtable._22_get_BOARD_BG_MODEL_PATH.methodPtr);
  v43 = (AtlasManagerUnit_o *)sub_B2C42C(AtlasManagerUnit_TypeInfo);
  AtlasManagerUnit___ctor(v43, v42, 0LL, 0LL);
  v44 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, Il2CppMethodPointer))this->klass->vtable._24_get_CLASS_UI_ATLAS_PATH.method)(
                             this,
                             this->klass->vtable._25_LoadSystemAsset.methodPtr);
  v45 = (AtlasManagerUnit_o *)sub_B2C42C(AtlasManagerUnit_TypeInfo);
  AtlasManagerUnit___ctor(v45, v44, 0LL, 0LL);
  if ( !v39
    || (ClassBoardResourceContents__SetContentsUI(v39, v32, v41, v43, v45, v46),
        (Contents_k__BackingField = (char *)this->fields._Contents_k__BackingField) == 0LL)
    || (*((_QWORD *)Contents_k__BackingField + 12) = v37,
        sub_B2C2F8((BattleServantConfConponent_o *)(Contents_k__BackingField + 96), v37, v47, v48, v49, v50, v51, v52),
        (Contents_k__BackingField = (char *)callback) == 0LL) )
  {
LABEL_9:
    sub_B2C434(Contents_k__BackingField, v35);
  }
  System_Action__Invoke(callback, 0LL);
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
  if ( (byte_418953F & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_3985/*"ClassBoard/ClassBoardBlank"*/, method);
    byte_418953F = 1;
  }
  return (System_String_o *)StringLiteral_3985/*"ClassBoard/ClassBoardBlank"*/;
}


System_String_o *__fastcall ClassBoardResourceCatalogStandalone__get_BOARD_BG_MODEL_PATH(
        ClassBoardResourceCatalogStandalone_o *this,
        const MethodInfo *method)
{
  if ( (byte_4189547 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_3984/*"ClassBoard/Bg/ClassBoardBg"*/, method);
    byte_4189547 = 1;
  }
  return (System_String_o *)StringLiteral_3984/*"ClassBoard/Bg/ClassBoardBg"*/;
}


System_String_o *__fastcall ClassBoardResourceCatalogStandalone__get_BOARD_UI_PATH(
        ClassBoardResourceCatalogStandalone_o *this,
        const MethodInfo *method)
{
  if ( (byte_4189545 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_3994/*"ClassBoard/ClassBoardUI"*/, method);
    byte_4189545 = 1;
  }
  return (System_String_o *)StringLiteral_3994/*"ClassBoard/ClassBoardUI"*/;
}


System_String_o *__fastcall ClassBoardResourceCatalogStandalone__get_CLASS_UI_ATLAS_PATH(
        ClassBoardResourceCatalogStandalone_o *this,
        const MethodInfo *method)
{
  if ( (byte_4189549 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_3998/*"ClassBoard/UI/DownloadClassBoardClassUIAtlas"*/, method);
    byte_4189549 = 1;
  }
  return (System_String_o *)StringLiteral_3998/*"ClassBoard/UI/DownloadClassBoardClassUIAtlas"*/;
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
  if ( (byte_4189540 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_3986/*"ClassBoard/ClassBoardDisableOpenDialog"*/, method);
    byte_4189540 = 1;
  }
  return (System_String_o *)StringLiteral_3986/*"ClassBoard/ClassBoardDisableOpenDialog"*/;
}


System_String_o *__fastcall ClassBoardResourceCatalogStandalone__get_ICON_ATLAS_PATH(
        ClassBoardResourceCatalogStandalone_o *this,
        const MethodInfo *method)
{
  if ( (byte_4189546 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_3995/*"ClassBoard/Icon/DownloadClassBoardIconAtlas"*/, method);
    byte_4189546 = 1;
  }
  return (System_String_o *)StringLiteral_3995/*"ClassBoard/Icon/DownloadClassBoardIconAtlas"*/;
}


System_String_o *__fastcall ClassBoardResourceCatalogStandalone__get_LINE_PATH(
        ClassBoardResourceCatalogStandalone_o *this,
        const MethodInfo *method)
{
  if ( (byte_418953C & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_3987/*"ClassBoard/ClassBoardLine"*/, method);
    byte_418953C = 1;
  }
  return (System_String_o *)StringLiteral_3987/*"ClassBoard/ClassBoardLine"*/;
}


System_String_o *__fastcall ClassBoardResourceCatalogStandalone__get_LOCK_OPEN_CONFIRM_DIALOG_PATH(
        ClassBoardResourceCatalogStandalone_o *this,
        const MethodInfo *method)
{
  if ( (byte_4189542 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_3989/*"ClassBoard/ClassBoardLockOpenConfirmDialog"*/, method);
    byte_4189542 = 1;
  }
  return (System_String_o *)StringLiteral_3989/*"ClassBoard/ClassBoardLockOpenConfirmDialog"*/;
}


System_String_o *__fastcall ClassBoardResourceCatalogStandalone__get_LOCK_PATH(
        ClassBoardResourceCatalogStandalone_o *this,
        const MethodInfo *method)
{
  if ( (byte_418953E & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_3988/*"ClassBoard/ClassBoardLock"*/, method);
    byte_418953E = 1;
  }
  return (System_String_o *)StringLiteral_3988/*"ClassBoard/ClassBoardLock"*/;
}


System_String_o *__fastcall ClassBoardResourceCatalogStandalone__get_LOCK_RELEASE_CONDITION_DIALOG_PATH(
        ClassBoardResourceCatalogStandalone_o *this,
        const MethodInfo *method)
{
  if ( (byte_4189543 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_3990/*"ClassBoard/ClassBoardLockReleaseConditionDialog"*/, method);
    byte_4189543 = 1;
  }
  return (System_String_o *)StringLiteral_3990/*"ClassBoard/ClassBoardLockReleaseConditionDialog"*/;
}


System_String_o *__fastcall ClassBoardResourceCatalogStandalone__get_SQUARE_DETAIL_DIALOG_PATH(
        ClassBoardResourceCatalogStandalone_o *this,
        const MethodInfo *method)
{
  if ( (byte_4189544 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_3992/*"ClassBoard/ClassBoardSquareDetailDialog"*/, method);
    byte_4189544 = 1;
  }
  return (System_String_o *)StringLiteral_3992/*"ClassBoard/ClassBoardSquareDetailDialog"*/;
}


System_String_o *__fastcall ClassBoardResourceCatalogStandalone__get_SQUARE_OPEN_CONFIRM_DIALOG_PATH(
        ClassBoardResourceCatalogStandalone_o *this,
        const MethodInfo *method)
{
  if ( (byte_4189541 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_3993/*"ClassBoard/ClassBoardSquareOpenConfirmDialog"*/, method);
    byte_4189541 = 1;
  }
  return (System_String_o *)StringLiteral_3993/*"ClassBoard/ClassBoardSquareOpenConfirmDialog"*/;
}


System_String_o *__fastcall ClassBoardResourceCatalogStandalone__get_SQUARE_PATH(
        ClassBoardResourceCatalogStandalone_o *this,
        const MethodInfo *method)
{
  if ( (byte_418953D & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_3991/*"ClassBoard/ClassBoardSquare"*/, method);
    byte_418953D = 1;
  }
  return (System_String_o *)StringLiteral_3991/*"ClassBoard/ClassBoardSquare"*/;
}


System_String_o *__fastcall ClassBoardResourceCatalogStandalone__get_UI_ATLAS_PATH(
        ClassBoardResourceCatalogStandalone_o *this,
        const MethodInfo *method)
{
  if ( (byte_4189548 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_3999/*"ClassBoard/UI/DownloadClassBoardUIAtlas"*/, method);
    byte_4189548 = 1;
  }
  return (System_String_o *)StringLiteral_3999/*"ClassBoard/UI/DownloadClassBoardUIAtlas"*/;
}