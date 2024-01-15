void __fastcall ClassBoardResourceCatalogStandalone___ctor(
        ClassBoardResourceCatalogStandalone_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  __int64 v6; // x4
  Il2CppObject *v7; // x20
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_40FB9C4 & 1) == 0 )
  {
    sub_B16FFC(&ClassBoardResourceContents_TypeInfo, method);
    byte_40FB9C4 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v7 = (Il2CppObject *)sub_B170CC(ClassBoardResourceContents_TypeInfo, v3, v4, v5, v6);
  System_Object___ctor(v7, 0LL);
  this->fields._Contents_k__BackingField = (struct ClassBoardResourceContents_o *)v7;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v7, v8, v9, v10, v11, v12, v13);
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
  if ( (byte_40FB9C7 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Resources_Load_ClassBoardBlank___, *(_QWORD *)&assetId);
    byte_40FB9C7 = 1;
  }
  v4 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, Il2CppMethodPointer, const MethodInfo *))this->klass->vtable._14_get_BLANK_PATH.method)(
                            this,
                            this->klass->vtable._15_get_DISABLE_OPEN_DIALOG_PATH.methodPtr,
                            method);
  v5 = System_Int32__ToString((int32_t)&v8, 0LL);
  v6 = System_String__Concat_43743732(v4, v5, 0LL);
  return (ClassBoardBlank_o *)UnityEngine_Resources__Load_UIAtlas_(
                                v6,
                                (const MethodInfo_19E149C *)Method_UnityEngine_Resources_Load_ClassBoardBlank___);
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
  if ( (byte_40FB9C8 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Resources_Load_ClassBoardLock___, *(_QWORD *)&assetId);
    byte_40FB9C8 = 1;
  }
  v4 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, Il2CppMethodPointer, const MethodInfo *))this->klass->vtable._13_get_LOCK_PATH.method)(
                            this,
                            this->klass->vtable._14_get_BLANK_PATH.methodPtr,
                            method);
  v5 = System_Int32__ToString((int32_t)&v8, 0LL);
  v6 = System_String__Concat_43743732(v4, v5, 0LL);
  return (ClassBoardLock_o *)UnityEngine_Resources__Load_UIAtlas_(
                               v6,
                               (const MethodInfo_19E149C *)Method_UnityEngine_Resources_Load_ClassBoardLock___);
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
  if ( (byte_40FB9C6 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Resources_Load_ClassBoardSquare___, *(_QWORD *)&assetId);
    byte_40FB9C6 = 1;
  }
  v4 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, Il2CppMethodPointer, const MethodInfo *))this->klass->vtable._12_get_SQUARE_PATH.method)(
                            this,
                            this->klass->vtable._13_get_LOCK_PATH.methodPtr,
                            method);
  v5 = System_Int32__ToString((int32_t)&v8, 0LL);
  v6 = System_String__Concat_43743732(v4, v5, 0LL);
  return (ClassBoardSquare_o *)UnityEngine_Resources__Load_UIAtlas_(
                                 v6,
                                 (const MethodInfo_19E149C *)Method_UnityEngine_Resources_Load_ClassBoardSquare___);
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
  UIAtlas_o *v34; // x0
  const MethodInfo *v35; // x5
  System_Int32_array **v36; // x25
  const MethodInfo *v37; // x6
  ClassBoardResourceContents_o *Contents_k__BackingField; // x0
  ClassBoardResourceContents_o *v39; // x19
  System_String_o *v40; // x22
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x3
  __int64 v44; // x4
  AtlasManagerUnit_o *v45; // x21
  System_String_o *v46; // x23
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x3
  __int64 v50; // x4
  AtlasManagerUnit_o *v51; // x22
  System_String_o *v52; // x24
  __int64 v53; // x1
  __int64 v54; // x2
  __int64 v55; // x3
  __int64 v56; // x4
  AtlasManagerUnit_o *v57; // x23
  const MethodInfo *v58; // x5
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  struct ClassBoardResourceContents_o *v65; // x0
  ClassBoardLine_o *v66; // [xsp+8h] [xbp-68h]
  ClassBoardSquare_o *UIAtlas; // [xsp+10h] [xbp-60h]

  if ( (byte_40FB9C5 & 1) == 0 )
  {
    sub_B16FFC(&AtlasManagerUnit_TypeInfo, callback);
    sub_B16FFC(&Method_UnityEngine_Resources_Load_ClassBoardBackground___, v4);
    sub_B16FFC(&Method_UnityEngine_Resources_Load_ClassBoardBlank___, v5);
    sub_B16FFC(&Method_UnityEngine_Resources_Load_ClassBoardDisableOpenDialog___, v6);
    sub_B16FFC(&Method_UnityEngine_Resources_Load_ClassBoardLine___, v7);
    sub_B16FFC(&Method_UnityEngine_Resources_Load_ClassBoardLockOpenConfirmDialog___, v8);
    sub_B16FFC(&Method_UnityEngine_Resources_Load_ClassBoardLockReleaseConditionDialog___, v9);
    sub_B16FFC(&Method_UnityEngine_Resources_Load_ClassBoardLock___, v10);
    sub_B16FFC(&Method_UnityEngine_Resources_Load_ClassBoardSquareDetailDialog___, v11);
    sub_B16FFC(&Method_UnityEngine_Resources_Load_ClassBoardSquareOpenConfirmDialog___, v12);
    sub_B16FFC(&Method_UnityEngine_Resources_Load_ClassBoardSquare___, v13);
    sub_B16FFC(&Method_UnityEngine_Resources_Load_ClassBoardUIController___, v14);
    byte_40FB9C5 = 1;
  }
  v15 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, Il2CppMethodPointer, const MethodInfo *))this->klass->vtable._12_get_SQUARE_PATH.method)(
                             this,
                             this->klass->vtable._13_get_LOCK_PATH.methodPtr,
                             method);
  UIAtlas = (ClassBoardSquare_o *)UnityEngine_Resources__Load_UIAtlas_(
                                    v15,
                                    (const MethodInfo_19E149C *)Method_UnityEngine_Resources_Load_ClassBoardSquare___);
  v16 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, Il2CppMethodPointer))this->klass->vtable._11_get_LINE_PATH.method)(
                             this,
                             this->klass->vtable._12_get_SQUARE_PATH.methodPtr);
  v66 = (ClassBoardLine_o *)UnityEngine_Resources__Load_UIAtlas_(
                              v16,
                              (const MethodInfo_19E149C *)Method_UnityEngine_Resources_Load_ClassBoardLine___);
  v17 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, Il2CppMethodPointer))this->klass->vtable._13_get_LOCK_PATH.method)(
                             this,
                             this->klass->vtable._14_get_BLANK_PATH.methodPtr);
  v18 = (ClassBoardLock_o *)UnityEngine_Resources__Load_UIAtlas_(
                              v17,
                              (const MethodInfo_19E149C *)Method_UnityEngine_Resources_Load_ClassBoardLock___);
  v19 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, Il2CppMethodPointer))this->klass->vtable._14_get_BLANK_PATH.method)(
                             this,
                             this->klass->vtable._15_get_DISABLE_OPEN_DIALOG_PATH.methodPtr);
  v20 = (ClassBoardBlank_o *)UnityEngine_Resources__Load_UIAtlas_(
                               v19,
                               (const MethodInfo_19E149C *)Method_UnityEngine_Resources_Load_ClassBoardBlank___);
  v21 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, Il2CppMethodPointer))this->klass->vtable._15_get_DISABLE_OPEN_DIALOG_PATH.method)(
                             this,
                             this->klass->vtable._16_get_SQUARE_OPEN_CONFIRM_DIALOG_PATH.methodPtr);
  v22 = (ClassBoardDisableOpenDialog_o *)UnityEngine_Resources__Load_UIAtlas_(
                                           v21,
                                           (const MethodInfo_19E149C *)Method_UnityEngine_Resources_Load_ClassBoardDisableOpenDialog___);
  v23 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, Il2CppMethodPointer))this->klass->vtable._16_get_SQUARE_OPEN_CONFIRM_DIALOG_PATH.method)(
                             this,
                             this->klass->vtable._17_get_LOCK_OPEN_CONFIRM_DIALOG_PATH.methodPtr);
  v24 = (ClassBoardSquareOpenConfirmDialog_o *)UnityEngine_Resources__Load_UIAtlas_(
                                                 v23,
                                                 (const MethodInfo_19E149C *)Method_UnityEngine_Resources_Load_ClassBoardSquareOpenConfirmDialog___);
  v25 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, Il2CppMethodPointer))this->klass->vtable._17_get_LOCK_OPEN_CONFIRM_DIALOG_PATH.method)(
                             this,
                             this->klass->vtable._18_get_LOCK_RELEASE_CONDITION_DIALOG_PATH.methodPtr);
  v26 = (ClassBoardLockOpenConfirmDialog_o *)UnityEngine_Resources__Load_UIAtlas_(
                                               v25,
                                               (const MethodInfo_19E149C *)Method_UnityEngine_Resources_Load_ClassBoardLockOpenConfirmDialog___);
  v27 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, Il2CppMethodPointer))this->klass->vtable._18_get_LOCK_RELEASE_CONDITION_DIALOG_PATH.method)(
                             this,
                             this->klass->vtable._19_get_SQUARE_DETAIL_DIALOG_PATH.methodPtr);
  v28 = (ClassBoardLockReleaseConditionDialog_o *)UnityEngine_Resources__Load_UIAtlas_(
                                                    v27,
                                                    (const MethodInfo_19E149C *)Method_UnityEngine_Resources_Load_ClassBoardLockReleaseConditionDialog___);
  v29 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, Il2CppMethodPointer))this->klass->vtable._19_get_SQUARE_DETAIL_DIALOG_PATH.method)(
                             this,
                             this->klass->vtable._20_get_BOARD_UI_PATH.methodPtr);
  v30 = (ClassBoardSquareDetailDialog_o *)UnityEngine_Resources__Load_UIAtlas_(
                                            v29,
                                            (const MethodInfo_19E149C *)Method_UnityEngine_Resources_Load_ClassBoardSquareDetailDialog___);
  v31 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, Il2CppMethodPointer))this->klass->vtable._20_get_BOARD_UI_PATH.method)(
                             this,
                             this->klass->vtable._21_get_ICON_ATLAS_PATH.methodPtr);
  v32 = (ClassBoardUIController_o *)UnityEngine_Resources__Load_UIAtlas_(
                                      v31,
                                      (const MethodInfo_19E149C *)Method_UnityEngine_Resources_Load_ClassBoardUIController___);
  v33 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, Il2CppMethodPointer))this->klass->vtable._22_get_BOARD_BG_MODEL_PATH.method)(
                             this,
                             this->klass->vtable._23_get_UI_ATLAS_PATH.methodPtr);
  v34 = UnityEngine_Resources__Load_UIAtlas_(
          v33,
          (const MethodInfo_19E149C *)Method_UnityEngine_Resources_Load_ClassBoardBackground___);
  if ( !this->fields._Contents_k__BackingField )
    goto LABEL_9;
  v36 = (System_Int32_array **)v34;
  ClassBoardResourceContents__SetContents(this->fields._Contents_k__BackingField, UIAtlas, v66, v18, v20, v35);
  Contents_k__BackingField = this->fields._Contents_k__BackingField;
  if ( !Contents_k__BackingField )
    goto LABEL_9;
  ClassBoardResourceContents__SetContentsDialog(Contents_k__BackingField, v22, v24, v26, v28, v30, v37);
  v39 = this->fields._Contents_k__BackingField;
  v40 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, Il2CppMethodPointer))this->klass->vtable._23_get_UI_ATLAS_PATH.method)(
                             this,
                             this->klass->vtable._24_get_CLASS_UI_ATLAS_PATH.methodPtr);
  v45 = (AtlasManagerUnit_o *)sub_B170CC(AtlasManagerUnit_TypeInfo, v41, v42, v43, v44);
  AtlasManagerUnit___ctor(v45, v40, 0LL, 0LL);
  v46 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, Il2CppMethodPointer))this->klass->vtable._21_get_ICON_ATLAS_PATH.method)(
                             this,
                             this->klass->vtable._22_get_BOARD_BG_MODEL_PATH.methodPtr);
  v51 = (AtlasManagerUnit_o *)sub_B170CC(AtlasManagerUnit_TypeInfo, v47, v48, v49, v50);
  AtlasManagerUnit___ctor(v51, v46, 0LL, 0LL);
  v52 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, Il2CppMethodPointer))this->klass->vtable._24_get_CLASS_UI_ATLAS_PATH.method)(
                             this,
                             this->klass->vtable._25_LoadSystemAsset.methodPtr);
  v57 = (AtlasManagerUnit_o *)sub_B170CC(AtlasManagerUnit_TypeInfo, v53, v54, v55, v56);
  AtlasManagerUnit___ctor(v57, v52, 0LL, 0LL);
  if ( !v39
    || (ClassBoardResourceContents__SetContentsUI(v39, v32, v45, v51, v57, v58),
        (v65 = this->fields._Contents_k__BackingField) == 0LL)
    || (v65->fields._BgModel_k__BackingField = (struct ClassBoardBackground_o *)v36,
        sub_B16F98(
          (BattleServantConfConponent_o *)&v65->fields._BgModel_k__BackingField,
          v36,
          v59,
          v60,
          v61,
          v62,
          v63,
          v64),
        !callback) )
  {
LABEL_9:
    sub_B170D4();
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
  if ( (byte_40FB9B9 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_3968/*"ClassBoard/ClassBoardBlank"*/, method);
    byte_40FB9B9 = 1;
  }
  return (System_String_o *)StringLiteral_3968/*"ClassBoard/ClassBoardBlank"*/;
}


System_String_o *__fastcall ClassBoardResourceCatalogStandalone__get_BOARD_BG_MODEL_PATH(
        ClassBoardResourceCatalogStandalone_o *this,
        const MethodInfo *method)
{
  if ( (byte_40FB9C1 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_3967/*"ClassBoard/Bg/ClassBoardBg"*/, method);
    byte_40FB9C1 = 1;
  }
  return (System_String_o *)StringLiteral_3967/*"ClassBoard/Bg/ClassBoardBg"*/;
}


System_String_o *__fastcall ClassBoardResourceCatalogStandalone__get_BOARD_UI_PATH(
        ClassBoardResourceCatalogStandalone_o *this,
        const MethodInfo *method)
{
  if ( (byte_40FB9BF & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_3977/*"ClassBoard/ClassBoardUI"*/, method);
    byte_40FB9BF = 1;
  }
  return (System_String_o *)StringLiteral_3977/*"ClassBoard/ClassBoardUI"*/;
}


System_String_o *__fastcall ClassBoardResourceCatalogStandalone__get_CLASS_UI_ATLAS_PATH(
        ClassBoardResourceCatalogStandalone_o *this,
        const MethodInfo *method)
{
  if ( (byte_40FB9C3 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_3981/*"ClassBoard/UI/DownloadClassBoardClassUIAtlas"*/, method);
    byte_40FB9C3 = 1;
  }
  return (System_String_o *)StringLiteral_3981/*"ClassBoard/UI/DownloadClassBoardClassUIAtlas"*/;
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
  if ( (byte_40FB9BA & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_3969/*"ClassBoard/ClassBoardDisableOpenDialog"*/, method);
    byte_40FB9BA = 1;
  }
  return (System_String_o *)StringLiteral_3969/*"ClassBoard/ClassBoardDisableOpenDialog"*/;
}


System_String_o *__fastcall ClassBoardResourceCatalogStandalone__get_ICON_ATLAS_PATH(
        ClassBoardResourceCatalogStandalone_o *this,
        const MethodInfo *method)
{
  if ( (byte_40FB9C0 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_3978/*"ClassBoard/Icon/DownloadClassBoardIconAtlas"*/, method);
    byte_40FB9C0 = 1;
  }
  return (System_String_o *)StringLiteral_3978/*"ClassBoard/Icon/DownloadClassBoardIconAtlas"*/;
}


System_String_o *__fastcall ClassBoardResourceCatalogStandalone__get_LINE_PATH(
        ClassBoardResourceCatalogStandalone_o *this,
        const MethodInfo *method)
{
  if ( (byte_40FB9B6 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_3970/*"ClassBoard/ClassBoardLine"*/, method);
    byte_40FB9B6 = 1;
  }
  return (System_String_o *)StringLiteral_3970/*"ClassBoard/ClassBoardLine"*/;
}


System_String_o *__fastcall ClassBoardResourceCatalogStandalone__get_LOCK_OPEN_CONFIRM_DIALOG_PATH(
        ClassBoardResourceCatalogStandalone_o *this,
        const MethodInfo *method)
{
  if ( (byte_40FB9BC & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_3972/*"ClassBoard/ClassBoardLockOpenConfirmDialog"*/, method);
    byte_40FB9BC = 1;
  }
  return (System_String_o *)StringLiteral_3972/*"ClassBoard/ClassBoardLockOpenConfirmDialog"*/;
}


System_String_o *__fastcall ClassBoardResourceCatalogStandalone__get_LOCK_PATH(
        ClassBoardResourceCatalogStandalone_o *this,
        const MethodInfo *method)
{
  if ( (byte_40FB9B8 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_3971/*"ClassBoard/ClassBoardLock"*/, method);
    byte_40FB9B8 = 1;
  }
  return (System_String_o *)StringLiteral_3971/*"ClassBoard/ClassBoardLock"*/;
}


System_String_o *__fastcall ClassBoardResourceCatalogStandalone__get_LOCK_RELEASE_CONDITION_DIALOG_PATH(
        ClassBoardResourceCatalogStandalone_o *this,
        const MethodInfo *method)
{
  if ( (byte_40FB9BD & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_3973/*"ClassBoard/ClassBoardLockReleaseConditionDialog"*/, method);
    byte_40FB9BD = 1;
  }
  return (System_String_o *)StringLiteral_3973/*"ClassBoard/ClassBoardLockReleaseConditionDialog"*/;
}


System_String_o *__fastcall ClassBoardResourceCatalogStandalone__get_SQUARE_DETAIL_DIALOG_PATH(
        ClassBoardResourceCatalogStandalone_o *this,
        const MethodInfo *method)
{
  if ( (byte_40FB9BE & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_3975/*"ClassBoard/ClassBoardSquareDetailDialog"*/, method);
    byte_40FB9BE = 1;
  }
  return (System_String_o *)StringLiteral_3975/*"ClassBoard/ClassBoardSquareDetailDialog"*/;
}


System_String_o *__fastcall ClassBoardResourceCatalogStandalone__get_SQUARE_OPEN_CONFIRM_DIALOG_PATH(
        ClassBoardResourceCatalogStandalone_o *this,
        const MethodInfo *method)
{
  if ( (byte_40FB9BB & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_3976/*"ClassBoard/ClassBoardSquareOpenConfirmDialog"*/, method);
    byte_40FB9BB = 1;
  }
  return (System_String_o *)StringLiteral_3976/*"ClassBoard/ClassBoardSquareOpenConfirmDialog"*/;
}


System_String_o *__fastcall ClassBoardResourceCatalogStandalone__get_SQUARE_PATH(
        ClassBoardResourceCatalogStandalone_o *this,
        const MethodInfo *method)
{
  if ( (byte_40FB9B7 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_3974/*"ClassBoard/ClassBoardSquare"*/, method);
    byte_40FB9B7 = 1;
  }
  return (System_String_o *)StringLiteral_3974/*"ClassBoard/ClassBoardSquare"*/;
}


System_String_o *__fastcall ClassBoardResourceCatalogStandalone__get_UI_ATLAS_PATH(
        ClassBoardResourceCatalogStandalone_o *this,
        const MethodInfo *method)
{
  if ( (byte_40FB9C2 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_3982/*"ClassBoard/UI/DownloadClassBoardUIAtlas"*/, method);
    byte_40FB9C2 = 1;
  }
  return (System_String_o *)StringLiteral_3982/*"ClassBoard/UI/DownloadClassBoardUIAtlas"*/;
}