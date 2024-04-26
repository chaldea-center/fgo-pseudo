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

  if ( (byte_4353B53 & 1) == 0 )
  {
    sub_B70694(&ClassBoardResourceContents_TypeInfo);
    byte_4353B53 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v3 = (Il2CppObject *)sub_B70764(ClassBoardResourceContents_TypeInfo);
  System_Object___ctor(v3, 0LL);
  this->fields._Contents_k__BackingField = (struct ClassBoardResourceContents_o *)v3;
  sub_B70630((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v3, v4, v5, v6, v7, v8, v9);
}


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
  if ( (byte_4353B56 & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_Resources_Load_ClassBoardBlank___);
    byte_4353B56 = 1;
  }
  v4 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, Il2CppMethodPointer, const MethodInfo *))this->klass->vtable._14_get_BLANK_PATH.method)(
                            this,
                            this->klass->vtable._15_get_DISABLE_OPEN_DIALOG_PATH.methodPtr,
                            method);
  v5 = System_Int32__ToString((int32_t)&v8, 0LL);
  v6 = System_String__Concat_44758168(v4, v5, 0LL);
  return (ClassBoardBlank_o *)UnityEngine_Resources__Load_UIAtlas_(
                                v6,
                                (const MethodInfo_1D5BAD8 *)Method_UnityEngine_Resources_Load_ClassBoardBlank___);
}


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
  if ( (byte_4353B57 & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_Resources_Load_ClassBoardLock___);
    byte_4353B57 = 1;
  }
  v4 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, Il2CppMethodPointer, const MethodInfo *))this->klass->vtable._13_get_LOCK_PATH.method)(
                            this,
                            this->klass->vtable._14_get_BLANK_PATH.methodPtr,
                            method);
  v5 = System_Int32__ToString((int32_t)&v8, 0LL);
  v6 = System_String__Concat_44758168(v4, v5, 0LL);
  return (ClassBoardLock_o *)UnityEngine_Resources__Load_UIAtlas_(
                               v6,
                               (const MethodInfo_1D5BAD8 *)Method_UnityEngine_Resources_Load_ClassBoardLock___);
}


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
  if ( (byte_4353B55 & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_Resources_Load_ClassBoardSquare___);
    byte_4353B55 = 1;
  }
  v4 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, Il2CppMethodPointer, const MethodInfo *))this->klass->vtable._12_get_SQUARE_PATH.method)(
                            this,
                            this->klass->vtable._13_get_LOCK_PATH.methodPtr,
                            method);
  v5 = System_Int32__ToString((int32_t)&v8, 0LL);
  v6 = System_String__Concat_44758168(v4, v5, 0LL);
  return (ClassBoardSquare_o *)UnityEngine_Resources__Load_UIAtlas_(
                                 v6,
                                 (const MethodInfo_1D5BAD8 *)Method_UnityEngine_Resources_Load_ClassBoardSquare___);
}


void __fastcall ClassBoardResourceCatalogStandalone__LoadSystemAsset(
        ClassBoardResourceCatalogStandalone_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_o *v4; // x0
  System_String_o *v5; // x0
  System_String_o *v6; // x0
  ClassBoardLock_o *v7; // x23
  System_String_o *v8; // x0
  ClassBoardBlank_o *v9; // x24
  System_String_o *v10; // x0
  ClassBoardDisableOpenDialog_o *v11; // x27
  System_String_o *v12; // x0
  ClassBoardSquareOpenConfirmDialog_o *v13; // x28
  System_String_o *v14; // x0
  ClassBoardLockOpenConfirmDialog_o *v15; // x19
  System_String_o *v16; // x0
  ClassBoardLockReleaseConditionDialog_o *v17; // x21
  System_String_o *v18; // x0
  ClassBoardSquareDetailDialog_o *v19; // x22
  System_String_o *v20; // x0
  ClassBoardUIController_o *v21; // x26
  System_String_o *v22; // x0
  char *Contents_k__BackingField; // x0
  __int64 v24; // x1
  const MethodInfo *v25; // x5
  System_Int32_array **v26; // x25
  const MethodInfo *v27; // x6
  ClassBoardResourceContents_o *v28; // x19
  System_String_o *v29; // x22
  AtlasManagerUnit_o *v30; // x21
  System_String_o *v31; // x23
  AtlasManagerUnit_o *v32; // x22
  System_String_o *v33; // x24
  AtlasManagerUnit_o *v34; // x23
  const MethodInfo *v35; // x5
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  ClassBoardLine_o *v42; // [xsp+8h] [xbp-68h]
  ClassBoardSquare_o *UIAtlas; // [xsp+10h] [xbp-60h]

  if ( (byte_4353B54 & 1) == 0 )
  {
    sub_B70694(&AtlasManagerUnit_TypeInfo);
    sub_B70694(&Method_UnityEngine_Resources_Load_ClassBoardBackground___);
    sub_B70694(&Method_UnityEngine_Resources_Load_ClassBoardBlank___);
    sub_B70694(&Method_UnityEngine_Resources_Load_ClassBoardDisableOpenDialog___);
    sub_B70694(&Method_UnityEngine_Resources_Load_ClassBoardLine___);
    sub_B70694(&Method_UnityEngine_Resources_Load_ClassBoardLockOpenConfirmDialog___);
    sub_B70694(&Method_UnityEngine_Resources_Load_ClassBoardLockReleaseConditionDialog___);
    sub_B70694(&Method_UnityEngine_Resources_Load_ClassBoardLock___);
    sub_B70694(&Method_UnityEngine_Resources_Load_ClassBoardSquareDetailDialog___);
    sub_B70694(&Method_UnityEngine_Resources_Load_ClassBoardSquareOpenConfirmDialog___);
    sub_B70694(&Method_UnityEngine_Resources_Load_ClassBoardSquare___);
    sub_B70694(&Method_UnityEngine_Resources_Load_ClassBoardUIController___);
    byte_4353B54 = 1;
  }
  v4 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, Il2CppMethodPointer, const MethodInfo *))this->klass->vtable._12_get_SQUARE_PATH.method)(
                            this,
                            this->klass->vtable._13_get_LOCK_PATH.methodPtr,
                            method);
  UIAtlas = (ClassBoardSquare_o *)UnityEngine_Resources__Load_UIAtlas_(
                                    v4,
                                    (const MethodInfo_1D5BAD8 *)Method_UnityEngine_Resources_Load_ClassBoardSquare___);
  v5 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, Il2CppMethodPointer))this->klass->vtable._11_get_LINE_PATH.method)(
                            this,
                            this->klass->vtable._12_get_SQUARE_PATH.methodPtr);
  v42 = (ClassBoardLine_o *)UnityEngine_Resources__Load_UIAtlas_(
                              v5,
                              (const MethodInfo_1D5BAD8 *)Method_UnityEngine_Resources_Load_ClassBoardLine___);
  v6 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, Il2CppMethodPointer))this->klass->vtable._13_get_LOCK_PATH.method)(
                            this,
                            this->klass->vtable._14_get_BLANK_PATH.methodPtr);
  v7 = (ClassBoardLock_o *)UnityEngine_Resources__Load_UIAtlas_(
                             v6,
                             (const MethodInfo_1D5BAD8 *)Method_UnityEngine_Resources_Load_ClassBoardLock___);
  v8 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, Il2CppMethodPointer))this->klass->vtable._14_get_BLANK_PATH.method)(
                            this,
                            this->klass->vtable._15_get_DISABLE_OPEN_DIALOG_PATH.methodPtr);
  v9 = (ClassBoardBlank_o *)UnityEngine_Resources__Load_UIAtlas_(
                              v8,
                              (const MethodInfo_1D5BAD8 *)Method_UnityEngine_Resources_Load_ClassBoardBlank___);
  v10 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, Il2CppMethodPointer))this->klass->vtable._15_get_DISABLE_OPEN_DIALOG_PATH.method)(
                             this,
                             this->klass->vtable._16_get_SQUARE_OPEN_CONFIRM_DIALOG_PATH.methodPtr);
  v11 = (ClassBoardDisableOpenDialog_o *)UnityEngine_Resources__Load_UIAtlas_(
                                           v10,
                                           (const MethodInfo_1D5BAD8 *)Method_UnityEngine_Resources_Load_ClassBoardDisableOpenDialog___);
  v12 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, Il2CppMethodPointer))this->klass->vtable._16_get_SQUARE_OPEN_CONFIRM_DIALOG_PATH.method)(
                             this,
                             this->klass->vtable._17_get_LOCK_OPEN_CONFIRM_DIALOG_PATH.methodPtr);
  v13 = (ClassBoardSquareOpenConfirmDialog_o *)UnityEngine_Resources__Load_UIAtlas_(
                                                 v12,
                                                 (const MethodInfo_1D5BAD8 *)Method_UnityEngine_Resources_Load_ClassBoardSquareOpenConfirmDialog___);
  v14 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, Il2CppMethodPointer))this->klass->vtable._17_get_LOCK_OPEN_CONFIRM_DIALOG_PATH.method)(
                             this,
                             this->klass->vtable._18_get_LOCK_RELEASE_CONDITION_DIALOG_PATH.methodPtr);
  v15 = (ClassBoardLockOpenConfirmDialog_o *)UnityEngine_Resources__Load_UIAtlas_(
                                               v14,
                                               (const MethodInfo_1D5BAD8 *)Method_UnityEngine_Resources_Load_ClassBoardLockOpenConfirmDialog___);
  v16 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, Il2CppMethodPointer))this->klass->vtable._18_get_LOCK_RELEASE_CONDITION_DIALOG_PATH.method)(
                             this,
                             this->klass->vtable._19_get_SQUARE_DETAIL_DIALOG_PATH.methodPtr);
  v17 = (ClassBoardLockReleaseConditionDialog_o *)UnityEngine_Resources__Load_UIAtlas_(
                                                    v16,
                                                    (const MethodInfo_1D5BAD8 *)Method_UnityEngine_Resources_Load_ClassBoardLockReleaseConditionDialog___);
  v18 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, Il2CppMethodPointer))this->klass->vtable._19_get_SQUARE_DETAIL_DIALOG_PATH.method)(
                             this,
                             this->klass->vtable._20_get_BOARD_UI_PATH.methodPtr);
  v19 = (ClassBoardSquareDetailDialog_o *)UnityEngine_Resources__Load_UIAtlas_(
                                            v18,
                                            (const MethodInfo_1D5BAD8 *)Method_UnityEngine_Resources_Load_ClassBoardSquareDetailDialog___);
  v20 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, Il2CppMethodPointer))this->klass->vtable._20_get_BOARD_UI_PATH.method)(
                             this,
                             this->klass->vtable._21_get_ICON_ATLAS_PATH.methodPtr);
  v21 = (ClassBoardUIController_o *)UnityEngine_Resources__Load_UIAtlas_(
                                      v20,
                                      (const MethodInfo_1D5BAD8 *)Method_UnityEngine_Resources_Load_ClassBoardUIController___);
  v22 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, Il2CppMethodPointer))this->klass->vtable._22_get_BOARD_BG_MODEL_PATH.method)(
                             this,
                             this->klass->vtable._23_get_UI_ATLAS_PATH.methodPtr);
  Contents_k__BackingField = (char *)UnityEngine_Resources__Load_UIAtlas_(
                                       v22,
                                       (const MethodInfo_1D5BAD8 *)Method_UnityEngine_Resources_Load_ClassBoardBackground___);
  if ( !this->fields._Contents_k__BackingField )
    goto LABEL_9;
  v26 = (System_Int32_array **)Contents_k__BackingField;
  ClassBoardResourceContents__SetContents(this->fields._Contents_k__BackingField, UIAtlas, v42, v7, v9, v25);
  Contents_k__BackingField = (char *)this->fields._Contents_k__BackingField;
  if ( !Contents_k__BackingField )
    goto LABEL_9;
  ClassBoardResourceContents__SetContentsDialog(
    (ClassBoardResourceContents_o *)Contents_k__BackingField,
    v11,
    v13,
    v15,
    v17,
    v19,
    v27);
  v28 = this->fields._Contents_k__BackingField;
  v29 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, Il2CppMethodPointer))this->klass->vtable._23_get_UI_ATLAS_PATH.method)(
                             this,
                             this->klass->vtable._24_get_CLASS_UI_ATLAS_PATH.methodPtr);
  v30 = (AtlasManagerUnit_o *)sub_B70764(AtlasManagerUnit_TypeInfo);
  AtlasManagerUnit___ctor(v30, v29, 0LL, 0LL);
  v31 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, Il2CppMethodPointer))this->klass->vtable._21_get_ICON_ATLAS_PATH.method)(
                             this,
                             this->klass->vtable._22_get_BOARD_BG_MODEL_PATH.methodPtr);
  v32 = (AtlasManagerUnit_o *)sub_B70764(AtlasManagerUnit_TypeInfo);
  AtlasManagerUnit___ctor(v32, v31, 0LL, 0LL);
  v33 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, Il2CppMethodPointer))this->klass->vtable._24_get_CLASS_UI_ATLAS_PATH.method)(
                             this,
                             this->klass->vtable._25_LoadSystemAsset.methodPtr);
  v34 = (AtlasManagerUnit_o *)sub_B70764(AtlasManagerUnit_TypeInfo);
  AtlasManagerUnit___ctor(v34, v33, 0LL, 0LL);
  if ( !v28
    || (ClassBoardResourceContents__SetContentsUI(v28, v21, v30, v32, v34, v35),
        (Contents_k__BackingField = (char *)this->fields._Contents_k__BackingField) == 0LL)
    || (*((_QWORD *)Contents_k__BackingField + 12) = v26,
        sub_B70630((BattleServantConfConponent_o *)(Contents_k__BackingField + 96), v26, v36, v37, v38, v39, v40, v41),
        (Contents_k__BackingField = (char *)callback) == 0LL) )
  {
LABEL_9:
    sub_B7076C(Contents_k__BackingField, v24);
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
  if ( (byte_4353B48 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_4061/*"ClassBoard/ClassBoardBlank"*/);
    byte_4353B48 = 1;
  }
  return (System_String_o *)StringLiteral_4061/*"ClassBoard/ClassBoardBlank"*/;
}


System_String_o *__fastcall ClassBoardResourceCatalogStandalone__get_BOARD_BG_MODEL_PATH(
        ClassBoardResourceCatalogStandalone_o *this,
        const MethodInfo *method)
{
  if ( (byte_4353B50 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_4060/*"ClassBoard/Bg/ClassBoardBg"*/);
    byte_4353B50 = 1;
  }
  return (System_String_o *)StringLiteral_4060/*"ClassBoard/Bg/ClassBoardBg"*/;
}


System_String_o *__fastcall ClassBoardResourceCatalogStandalone__get_BOARD_UI_PATH(
        ClassBoardResourceCatalogStandalone_o *this,
        const MethodInfo *method)
{
  if ( (byte_4353B4E & 1) == 0 )
  {
    sub_B70694(&StringLiteral_4070/*"ClassBoard/ClassBoardUI"*/);
    byte_4353B4E = 1;
  }
  return (System_String_o *)StringLiteral_4070/*"ClassBoard/ClassBoardUI"*/;
}


System_String_o *__fastcall ClassBoardResourceCatalogStandalone__get_CLASS_UI_ATLAS_PATH(
        ClassBoardResourceCatalogStandalone_o *this,
        const MethodInfo *method)
{
  if ( (byte_4353B52 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_4074/*"ClassBoard/UI/DownloadClassBoardClassUIAtlas"*/);
    byte_4353B52 = 1;
  }
  return (System_String_o *)StringLiteral_4074/*"ClassBoard/UI/DownloadClassBoardClassUIAtlas"*/;
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
  if ( (byte_4353B49 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_4062/*"ClassBoard/ClassBoardDisableOpenDialog"*/);
    byte_4353B49 = 1;
  }
  return (System_String_o *)StringLiteral_4062/*"ClassBoard/ClassBoardDisableOpenDialog"*/;
}


System_String_o *__fastcall ClassBoardResourceCatalogStandalone__get_ICON_ATLAS_PATH(
        ClassBoardResourceCatalogStandalone_o *this,
        const MethodInfo *method)
{
  if ( (byte_4353B4F & 1) == 0 )
  {
    sub_B70694(&StringLiteral_4071/*"ClassBoard/Icon/DownloadClassBoardIconAtlas"*/);
    byte_4353B4F = 1;
  }
  return (System_String_o *)StringLiteral_4071/*"ClassBoard/Icon/DownloadClassBoardIconAtlas"*/;
}


System_String_o *__fastcall ClassBoardResourceCatalogStandalone__get_LINE_PATH(
        ClassBoardResourceCatalogStandalone_o *this,
        const MethodInfo *method)
{
  if ( (byte_4353B45 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_4063/*"ClassBoard/ClassBoardLine"*/);
    byte_4353B45 = 1;
  }
  return (System_String_o *)StringLiteral_4063/*"ClassBoard/ClassBoardLine"*/;
}


System_String_o *__fastcall ClassBoardResourceCatalogStandalone__get_LOCK_OPEN_CONFIRM_DIALOG_PATH(
        ClassBoardResourceCatalogStandalone_o *this,
        const MethodInfo *method)
{
  if ( (byte_4353B4B & 1) == 0 )
  {
    sub_B70694(&StringLiteral_4065/*"ClassBoard/ClassBoardLockOpenConfirmDialog"*/);
    byte_4353B4B = 1;
  }
  return (System_String_o *)StringLiteral_4065/*"ClassBoard/ClassBoardLockOpenConfirmDialog"*/;
}


System_String_o *__fastcall ClassBoardResourceCatalogStandalone__get_LOCK_PATH(
        ClassBoardResourceCatalogStandalone_o *this,
        const MethodInfo *method)
{
  if ( (byte_4353B47 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_4064/*"ClassBoard/ClassBoardLock"*/);
    byte_4353B47 = 1;
  }
  return (System_String_o *)StringLiteral_4064/*"ClassBoard/ClassBoardLock"*/;
}


System_String_o *__fastcall ClassBoardResourceCatalogStandalone__get_LOCK_RELEASE_CONDITION_DIALOG_PATH(
        ClassBoardResourceCatalogStandalone_o *this,
        const MethodInfo *method)
{
  if ( (byte_4353B4C & 1) == 0 )
  {
    sub_B70694(&StringLiteral_4066/*"ClassBoard/ClassBoardLockReleaseConditionDialog"*/);
    byte_4353B4C = 1;
  }
  return (System_String_o *)StringLiteral_4066/*"ClassBoard/ClassBoardLockReleaseConditionDialog"*/;
}


System_String_o *__fastcall ClassBoardResourceCatalogStandalone__get_SQUARE_DETAIL_DIALOG_PATH(
        ClassBoardResourceCatalogStandalone_o *this,
        const MethodInfo *method)
{
  if ( (byte_4353B4D & 1) == 0 )
  {
    sub_B70694(&StringLiteral_4068/*"ClassBoard/ClassBoardSquareDetailDialog"*/);
    byte_4353B4D = 1;
  }
  return (System_String_o *)StringLiteral_4068/*"ClassBoard/ClassBoardSquareDetailDialog"*/;
}


System_String_o *__fastcall ClassBoardResourceCatalogStandalone__get_SQUARE_OPEN_CONFIRM_DIALOG_PATH(
        ClassBoardResourceCatalogStandalone_o *this,
        const MethodInfo *method)
{
  if ( (byte_4353B4A & 1) == 0 )
  {
    sub_B70694(&StringLiteral_4069/*"ClassBoard/ClassBoardSquareOpenConfirmDialog"*/);
    byte_4353B4A = 1;
  }
  return (System_String_o *)StringLiteral_4069/*"ClassBoard/ClassBoardSquareOpenConfirmDialog"*/;
}


System_String_o *__fastcall ClassBoardResourceCatalogStandalone__get_SQUARE_PATH(
        ClassBoardResourceCatalogStandalone_o *this,
        const MethodInfo *method)
{
  if ( (byte_4353B46 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_4067/*"ClassBoard/ClassBoardSquare"*/);
    byte_4353B46 = 1;
  }
  return (System_String_o *)StringLiteral_4067/*"ClassBoard/ClassBoardSquare"*/;
}


System_String_o *__fastcall ClassBoardResourceCatalogStandalone__get_UI_ATLAS_PATH(
        ClassBoardResourceCatalogStandalone_o *this,
        const MethodInfo *method)
{
  if ( (byte_4353B51 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_4075/*"ClassBoard/UI/DownloadClassBoardUIAtlas"*/);
    byte_4353B51 = 1;
  }
  return (System_String_o *)StringLiteral_4075/*"ClassBoard/UI/DownloadClassBoardUIAtlas"*/;
}