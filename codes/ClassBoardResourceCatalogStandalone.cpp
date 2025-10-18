void ClassBoardResourceCatalogStandalone___ctor(ClassBoardResourceCatalogStandalone_o *this, const MethodInfo *method)
{
  Il2CppObject *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C46B4C & 1) == 0 )
  {
    sub_1C37058(&ClassBoardResourceContents_TypeInfo);
    byte_4C46B4C = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  v3 = (Il2CppObject *)sub_1C372A4(ClassBoardResourceContents_TypeInfo);
  System_Object___ctor(v3, 0);
  this->fields._Contents_k__BackingField = (struct ClassBoardResourceContents_o *)v3;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields, (int32_t)v3, v4, v5);
}


ClassBoardBlank_o *ClassBoardResourceCatalogStandalone__GetUniqueBlankObject(
        ClassBoardResourceCatalogStandalone_o *this,
        int32_t assetId,
        const MethodInfo *method)
{
  System_String_o *v4; // x19
  System_String_o *v5; // x0
  System_String_o *v6; // x0
  int32_t v8; // [xsp+Ch] [xbp-24h] BYREF

  v8 = assetId;
  if ( (byte_4C46B4F & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_Resources_Load_ClassBoardBlank___);
    byte_4C46B4F = 1;
  }
  v4 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, const MethodInfo *, const MethodInfo *))this->klass->vtable._17_get_BLANK_PATH.methodPtr)(
                            this,
                            this->klass->vtable._17_get_BLANK_PATH.method,
                            method);
  v5 = System_Int32__ToString((int32_t)&v8, 0);
  v6 = System_String__Concat_63561656(v4, v5, 0);
  return (ClassBoardBlank_o *)UnityEngine_Resources__Load_object_(
                                v6,
                                (const MethodInfo_3184210 *)Method_UnityEngine_Resources_Load_ClassBoardBlank___);
}


ClassBoardBlank_o *ClassBoardResourceCatalogStandalone__GetUniqueGrandBlankObject(
        ClassBoardResourceCatalogStandalone_o *this,
        int32_t assetId,
        const MethodInfo *method)
{
  System_String_o *v4; // x19
  System_String_o *v5; // x0
  System_String_o *v6; // x0
  int32_t v8; // [xsp+Ch] [xbp-24h] BYREF

  v8 = assetId;
  if ( (byte_4C46B52 & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_Resources_Load_ClassBoardBlank___);
    byte_4C46B52 = 1;
  }
  v4 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, const MethodInfo *, const MethodInfo *))this->klass->vtable._22_get_GRAND_BLANK_PATH.methodPtr)(
                            this,
                            this->klass->vtable._22_get_GRAND_BLANK_PATH.method,
                            method);
  v5 = System_Int32__ToString((int32_t)&v8, 0);
  v6 = System_String__Concat_63561656(v4, v5, 0);
  return (ClassBoardBlank_o *)UnityEngine_Resources__Load_object_(
                                v6,
                                (const MethodInfo_3184210 *)Method_UnityEngine_Resources_Load_ClassBoardBlank___);
}


ClassBoardLock_o *ClassBoardResourceCatalogStandalone__GetUniqueGrandLockObject(
        ClassBoardResourceCatalogStandalone_o *this,
        int32_t assetId,
        const MethodInfo *method)
{
  System_String_o *v4; // x19
  System_String_o *v5; // x0
  System_String_o *v6; // x0
  int32_t v8; // [xsp+Ch] [xbp-24h] BYREF

  v8 = assetId;
  if ( (byte_4C46B53 & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_Resources_Load_ClassBoardLock___);
    byte_4C46B53 = 1;
  }
  v4 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, const MethodInfo *, const MethodInfo *))this->klass->vtable._21_get_GRAND_LOCK_PATH.methodPtr)(
                            this,
                            this->klass->vtable._21_get_GRAND_LOCK_PATH.method,
                            method);
  v5 = System_Int32__ToString((int32_t)&v8, 0);
  v6 = System_String__Concat_63561656(v4, v5, 0);
  return (ClassBoardLock_o *)UnityEngine_Resources__Load_object_(
                               v6,
                               (const MethodInfo_3184210 *)Method_UnityEngine_Resources_Load_ClassBoardLock___);
}


ClassBoardSquare_o *ClassBoardResourceCatalogStandalone__GetUniqueGrandSquareObject(
        ClassBoardResourceCatalogStandalone_o *this,
        int32_t assetId,
        const MethodInfo *method)
{
  System_String_o *v4; // x19
  System_String_o *v5; // x0
  System_String_o *v6; // x0
  int32_t v8; // [xsp+Ch] [xbp-24h] BYREF

  v8 = assetId;
  if ( (byte_4C46B51 & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_Resources_Load_ClassBoardSquare___);
    byte_4C46B51 = 1;
  }
  v4 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, const MethodInfo *, const MethodInfo *))this->klass->vtable._20_get_GRAND_SQUARE_PATH.methodPtr)(
                            this,
                            this->klass->vtable._20_get_GRAND_SQUARE_PATH.method,
                            method);
  v5 = System_Int32__ToString((int32_t)&v8, 0);
  v6 = System_String__Concat_63561656(v4, v5, 0);
  return (ClassBoardSquare_o *)UnityEngine_Resources__Load_object_(
                                 v6,
                                 (const MethodInfo_3184210 *)Method_UnityEngine_Resources_Load_ClassBoardSquare___);
}


ClassBoardLock_o *ClassBoardResourceCatalogStandalone__GetUniqueLockObject(
        ClassBoardResourceCatalogStandalone_o *this,
        int32_t assetId,
        const MethodInfo *method)
{
  System_String_o *v4; // x19
  System_String_o *v5; // x0
  System_String_o *v6; // x0
  int32_t v8; // [xsp+Ch] [xbp-24h] BYREF

  v8 = assetId;
  if ( (byte_4C46B50 & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_Resources_Load_ClassBoardLock___);
    byte_4C46B50 = 1;
  }
  v4 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, const MethodInfo *, const MethodInfo *))this->klass->vtable._16_get_LOCK_PATH.methodPtr)(
                            this,
                            this->klass->vtable._16_get_LOCK_PATH.method,
                            method);
  v5 = System_Int32__ToString((int32_t)&v8, 0);
  v6 = System_String__Concat_63561656(v4, v5, 0);
  return (ClassBoardLock_o *)UnityEngine_Resources__Load_object_(
                               v6,
                               (const MethodInfo_3184210 *)Method_UnityEngine_Resources_Load_ClassBoardLock___);
}


ClassBoardSquare_o *ClassBoardResourceCatalogStandalone__GetUniqueSquareObject(
        ClassBoardResourceCatalogStandalone_o *this,
        int32_t assetId,
        const MethodInfo *method)
{
  System_String_o *v4; // x19
  System_String_o *v5; // x0
  System_String_o *v6; // x0
  int32_t v8; // [xsp+Ch] [xbp-24h] BYREF

  v8 = assetId;
  if ( (byte_4C46B4E & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_Resources_Load_ClassBoardSquare___);
    byte_4C46B4E = 1;
  }
  v4 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, const MethodInfo *, const MethodInfo *))this->klass->vtable._15_get_SQUARE_PATH.methodPtr)(
                            this,
                            this->klass->vtable._15_get_SQUARE_PATH.method,
                            method);
  v5 = System_Int32__ToString((int32_t)&v8, 0);
  v6 = System_String__Concat_63561656(v4, v5, 0);
  return (ClassBoardSquare_o *)UnityEngine_Resources__Load_object_(
                                 v6,
                                 (const MethodInfo_3184210 *)Method_UnityEngine_Resources_Load_ClassBoardSquare___);
}


void ClassBoardResourceCatalogStandalone__LoadSystemAsset(
        ClassBoardResourceCatalogStandalone_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_o *v4; // x0
  System_String_o *v5; // x0
  System_String_o *v6; // x0
  System_String_o *v7; // x0
  System_String_o *v8; // x0
  System_String_o *v9; // x0
  System_String_o *v10; // x0
  System_String_o *v11; // x0
  Il2CppObject *v12; // x29
  System_String_o *v13; // x0
  System_String_o *v14; // x0
  Il2CppObject *v15; // x26
  System_String_o *v16; // x0
  Il2CppObject *v17; // x28
  System_String_o *v18; // x0
  Il2CppObject *v19; // x25
  System_String_o *v20; // x0
  Il2CppObject *v21; // x19
  System_String_o *v22; // x0
  System_String_o *v23; // x0
  Il2CppObject *v24; // x21
  System_String_o *v25; // x0
  Il2CppObject *v26; // x22
  Il2CppObject *v27; // x27
  Il2CppObject *v28; // x23
  char *Contents_k__BackingField; // x0
  const MethodInfo *v30; // x5
  struct ClassBoardFullReleaseEffectComponent_o *v31; // x24
  const MethodInfo *v32; // x5
  const MethodInfo *v33; // x6
  ClassBoardResourceContents_o *v34; // x19
  System_String_o *v35; // x26
  AtlasManagerUnit_o *v36; // x25
  System_String_o *v37; // x28
  AtlasManagerUnit_o *v38; // x26
  System_String_o *v39; // x29
  AtlasManagerUnit_o *v40; // x28
  const MethodInfo *v41; // x5
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  int32_t v44; // w2
  const MethodInfo *v45; // x3
  int32_t v46; // w2
  const MethodInfo *v47; // x3
  struct ClassBoardResourceContents_o *v48; // x19
  int32_t v49; // w2
  const MethodInfo *v50; // x3
  int32_t v51; // w2
  const MethodInfo *v52; // x3
  ClassBoardUIController_o *uiController; // [xsp+8h] [xbp-A8h]
  ClassBoardDisableOpenDialog_o *classBoardDisableOpenDialog; // [xsp+10h] [xbp-A0h]
  ClassBoardLock_o *lockAsset; // [xsp+18h] [xbp-98h]
  Il2CppObject *v57; // [xsp+20h] [xbp-90h]
  Il2CppObject *v58; // [xsp+28h] [xbp-88h]
  Il2CppObject *v59; // [xsp+30h] [xbp-80h]
  Il2CppObject *v60; // [xsp+38h] [xbp-78h]
  Il2CppObject *v61; // [xsp+40h] [xbp-70h]
  Il2CppObject *object; // [xsp+48h] [xbp-68h]

  if ( (byte_4C46B4D & 1) == 0 )
  {
    sub_1C37058(&AtlasManagerUnit_TypeInfo);
    sub_1C37058(&Method_UnityEngine_Resources_Load_ClassBoardBackground___);
    sub_1C37058(&Method_UnityEngine_Resources_Load_ClassBoardBlank___);
    sub_1C37058(&Method_UnityEngine_Resources_Load_ClassBoardDisableOpenDialog___);
    sub_1C37058(&Method_UnityEngine_Resources_Load_ClassBoardFigureController___);
    sub_1C37058(&Method_UnityEngine_Resources_Load_ClassBoardFullReleaseEffectComponent___);
    sub_1C37058(&Method_UnityEngine_Resources_Load_ClassBoardLine___);
    sub_1C37058(&Method_UnityEngine_Resources_Load_ClassBoardLockOpenConfirmDialog___);
    sub_1C37058(&Method_UnityEngine_Resources_Load_ClassBoardLockReleaseConditionDialog___);
    sub_1C37058(&Method_UnityEngine_Resources_Load_ClassBoardLock___);
    sub_1C37058(&Method_UnityEngine_Resources_Load_ClassBoardQuestOpenConfirmDialog___);
    sub_1C37058(&Method_UnityEngine_Resources_Load_ClassBoardSquareDetailDialog___);
    sub_1C37058(&Method_UnityEngine_Resources_Load_ClassBoardSquareOpenConfirmDialog___);
    sub_1C37058(&Method_UnityEngine_Resources_Load_ClassBoardSquare___);
    sub_1C37058(&Method_UnityEngine_Resources_Load_ClassBoardUIController___);
    sub_1C37058(&StringLiteral_4455/*"ClassBoard/FullReleaseEffectGrandScore"*/);
    sub_1C37058(&StringLiteral_4454/*"ClassBoard/FullReleaseEffectClassScore"*/);
    sub_1C37058(&StringLiteral_4449/*"ClassBoard/ClassBoardQuestOpenConfirmDialog"*/);
    byte_4C46B4D = 1;
  }
  v4 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, const MethodInfo *, const MethodInfo *))this->klass->vtable._15_get_SQUARE_PATH.methodPtr)(
                            this,
                            this->klass->vtable._15_get_SQUARE_PATH.method,
                            method);
  object = UnityEngine_Resources__Load_object_(
             v4,
             (const MethodInfo_3184210 *)Method_UnityEngine_Resources_Load_ClassBoardSquare___);
  v5 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, const MethodInfo *))this->klass->vtable._14_get_LINE_PATH.methodPtr)(
                            this,
                            this->klass->vtable._14_get_LINE_PATH.method);
  v61 = UnityEngine_Resources__Load_object_(
          v5,
          (const MethodInfo_3184210 *)Method_UnityEngine_Resources_Load_ClassBoardLine___);
  v6 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, const MethodInfo *))this->klass->vtable._16_get_LOCK_PATH.methodPtr)(
                            this,
                            this->klass->vtable._16_get_LOCK_PATH.method);
  v60 = UnityEngine_Resources__Load_object_(
          v6,
          (const MethodInfo_3184210 *)Method_UnityEngine_Resources_Load_ClassBoardLock___);
  v7 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, const MethodInfo *))this->klass->vtable._17_get_BLANK_PATH.methodPtr)(
                            this,
                            this->klass->vtable._17_get_BLANK_PATH.method);
  v59 = UnityEngine_Resources__Load_object_(
          v7,
          (const MethodInfo_3184210 *)Method_UnityEngine_Resources_Load_ClassBoardBlank___);
  v8 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, const MethodInfo *))this->klass->vtable._20_get_GRAND_SQUARE_PATH.methodPtr)(
                            this,
                            this->klass->vtable._20_get_GRAND_SQUARE_PATH.method);
  v58 = UnityEngine_Resources__Load_object_(
          v8,
          (const MethodInfo_3184210 *)Method_UnityEngine_Resources_Load_ClassBoardSquare___);
  v9 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, const MethodInfo *))this->klass->vtable._19_get_GRAND_LINE_PATH.methodPtr)(
                            this,
                            this->klass->vtable._19_get_GRAND_LINE_PATH.method);
  v57 = UnityEngine_Resources__Load_object_(
          v9,
          (const MethodInfo_3184210 *)Method_UnityEngine_Resources_Load_ClassBoardLine___);
  v10 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, const MethodInfo *))this->klass->vtable._21_get_GRAND_LOCK_PATH.methodPtr)(
                             this,
                             this->klass->vtable._21_get_GRAND_LOCK_PATH.method);
  lockAsset = (ClassBoardLock_o *)UnityEngine_Resources__Load_object_(
                                    v10,
                                    (const MethodInfo_3184210 *)Method_UnityEngine_Resources_Load_ClassBoardLock___);
  v11 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, const MethodInfo *))this->klass->vtable._22_get_GRAND_BLANK_PATH.methodPtr)(
                             this,
                             this->klass->vtable._22_get_GRAND_BLANK_PATH.method);
  v12 = UnityEngine_Resources__Load_object_(
          v11,
          (const MethodInfo_3184210 *)Method_UnityEngine_Resources_Load_ClassBoardBlank___);
  v13 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, const MethodInfo *))this->klass->vtable._23_get_DISABLE_OPEN_DIALOG_PATH.methodPtr)(
                             this,
                             this->klass->vtable._23_get_DISABLE_OPEN_DIALOG_PATH.method);
  classBoardDisableOpenDialog = (ClassBoardDisableOpenDialog_o *)UnityEngine_Resources__Load_object_(
                                                                   v13,
                                                                   (const MethodInfo_3184210 *)Method_UnityEngine_Resources_Load_ClassBoardDisableOpenDialog___);
  v14 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, const MethodInfo *))this->klass->vtable._24_get_SQUARE_OPEN_CONFIRM_DIALOG_PATH.methodPtr)(
                             this,
                             this->klass->vtable._24_get_SQUARE_OPEN_CONFIRM_DIALOG_PATH.method);
  v15 = UnityEngine_Resources__Load_object_(
          v14,
          (const MethodInfo_3184210 *)Method_UnityEngine_Resources_Load_ClassBoardSquareOpenConfirmDialog___);
  v16 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, const MethodInfo *))this->klass->vtable._25_get_LOCK_OPEN_CONFIRM_DIALOG_PATH.methodPtr)(
                             this,
                             this->klass->vtable._25_get_LOCK_OPEN_CONFIRM_DIALOG_PATH.method);
  v17 = UnityEngine_Resources__Load_object_(
          v16,
          (const MethodInfo_3184210 *)Method_UnityEngine_Resources_Load_ClassBoardLockOpenConfirmDialog___);
  v18 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, const MethodInfo *))this->klass->vtable._26_get_LOCK_RELEASE_CONDITION_DIALOG_PATH.methodPtr)(
                             this,
                             this->klass->vtable._26_get_LOCK_RELEASE_CONDITION_DIALOG_PATH.method);
  v19 = UnityEngine_Resources__Load_object_(
          v18,
          (const MethodInfo_3184210 *)Method_UnityEngine_Resources_Load_ClassBoardLockReleaseConditionDialog___);
  v20 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, const MethodInfo *))this->klass->vtable._27_get_SQUARE_DETAIL_DIALOG_PATH.methodPtr)(
                             this,
                             this->klass->vtable._27_get_SQUARE_DETAIL_DIALOG_PATH.method);
  v21 = UnityEngine_Resources__Load_object_(
          v20,
          (const MethodInfo_3184210 *)Method_UnityEngine_Resources_Load_ClassBoardSquareDetailDialog___);
  v22 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, const MethodInfo *))this->klass->vtable._28_get_BOARD_UI_PATH.methodPtr)(
                             this,
                             this->klass->vtable._28_get_BOARD_UI_PATH.method);
  uiController = (ClassBoardUIController_o *)UnityEngine_Resources__Load_object_(
                                               v22,
                                               (const MethodInfo_3184210 *)Method_UnityEngine_Resources_Load_ClassBoardUIController___);
  v23 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, const MethodInfo *))this->klass->vtable._30_get_BOARD_BG_MODEL_PATH.methodPtr)(
                             this,
                             this->klass->vtable._30_get_BOARD_BG_MODEL_PATH.method);
  v24 = UnityEngine_Resources__Load_object_(
          v23,
          (const MethodInfo_3184210 *)Method_UnityEngine_Resources_Load_ClassBoardBackground___);
  v25 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, const MethodInfo *))this->klass->vtable._18_get_BOARD_FIGURE_PATH.methodPtr)(
                             this,
                             this->klass->vtable._18_get_BOARD_FIGURE_PATH.method);
  v26 = UnityEngine_Resources__Load_object_(
          v25,
          (const MethodInfo_3184210 *)Method_UnityEngine_Resources_Load_ClassBoardFigureController___);
  v27 = UnityEngine_Resources__Load_object_(
          (System_String_o *)StringLiteral_4449/*"ClassBoard/ClassBoardQuestOpenConfirmDialog"*/,
          (const MethodInfo_3184210 *)Method_UnityEngine_Resources_Load_ClassBoardQuestOpenConfirmDialog___);
  v28 = UnityEngine_Resources__Load_object_(
          (System_String_o *)StringLiteral_4454/*"ClassBoard/FullReleaseEffectClassScore"*/,
          (const MethodInfo_3184210 *)Method_UnityEngine_Resources_Load_ClassBoardFullReleaseEffectComponent___);
  Contents_k__BackingField = (char *)UnityEngine_Resources__Load_object_(
                                       (System_String_o *)StringLiteral_4455/*"ClassBoard/FullReleaseEffectGrandScore"*/,
                                       (const MethodInfo_3184210 *)Method_UnityEngine_Resources_Load_ClassBoardFullReleaseEffectComponent___);
  if ( !this->fields._Contents_k__BackingField )
    goto LABEL_13;
  v31 = (struct ClassBoardFullReleaseEffectComponent_o *)Contents_k__BackingField;
  ClassBoardResourceContents__SetContents(
    this->fields._Contents_k__BackingField,
    (ClassBoardSquare_o *)object,
    (ClassBoardLine_o *)v61,
    (ClassBoardLock_o *)v60,
    (ClassBoardBlank_o *)v59,
    v30);
  Contents_k__BackingField = (char *)this->fields._Contents_k__BackingField;
  if ( !Contents_k__BackingField )
    goto LABEL_13;
  ClassBoardResourceContents__SetGrandContents(
    (ClassBoardResourceContents_o *)Contents_k__BackingField,
    (ClassBoardSquare_o *)v58,
    (ClassBoardLine_o *)v57,
    lockAsset,
    (ClassBoardBlank_o *)v12,
    v32);
  Contents_k__BackingField = (char *)this->fields._Contents_k__BackingField;
  if ( !Contents_k__BackingField )
    goto LABEL_13;
  ClassBoardResourceContents__SetContentsDialog(
    (ClassBoardResourceContents_o *)Contents_k__BackingField,
    classBoardDisableOpenDialog,
    (ClassBoardSquareOpenConfirmDialog_o *)v15,
    (ClassBoardLockOpenConfirmDialog_o *)v17,
    (ClassBoardLockReleaseConditionDialog_o *)v19,
    (ClassBoardSquareDetailDialog_o *)v21,
    v33);
  v34 = this->fields._Contents_k__BackingField;
  v35 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, const MethodInfo *))this->klass->vtable._31_get_UI_ATLAS_PATH.methodPtr)(
                             this,
                             this->klass->vtable._31_get_UI_ATLAS_PATH.method);
  v36 = (AtlasManagerUnit_o *)sub_1C372A4(AtlasManagerUnit_TypeInfo);
  AtlasManagerUnit___ctor(v36, v35, 0, 0);
  v37 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, const MethodInfo *))this->klass->vtable._29_get_ICON_ATLAS_PATH.methodPtr)(
                             this,
                             this->klass->vtable._29_get_ICON_ATLAS_PATH.method);
  v38 = (AtlasManagerUnit_o *)sub_1C372A4(AtlasManagerUnit_TypeInfo);
  AtlasManagerUnit___ctor(v38, v37, 0, 0);
  v39 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, const MethodInfo *))this->klass->vtable._32_get_CLASS_UI_ATLAS_PATH.methodPtr)(
                             this,
                             this->klass->vtable._32_get_CLASS_UI_ATLAS_PATH.method);
  v40 = (AtlasManagerUnit_o *)sub_1C372A4(AtlasManagerUnit_TypeInfo);
  AtlasManagerUnit___ctor(v40, v39, 0, 0);
  if ( !v34 )
    goto LABEL_13;
  ClassBoardResourceContents__SetContentsUI(v34, uiController, v36, v38, v40, v41);
  Contents_k__BackingField = (char *)this->fields._Contents_k__BackingField;
  if ( !Contents_k__BackingField )
    goto LABEL_13;
  *((_QWORD *)Contents_k__BackingField + 20) = v24;
  sub_1C36FFC((CGThumbnailListItem_o *)(Contents_k__BackingField + 160), (int32_t)v24, v42, v43);
  Contents_k__BackingField = (char *)this->fields._Contents_k__BackingField;
  if ( !Contents_k__BackingField )
    goto LABEL_13;
  *((_QWORD *)Contents_k__BackingField + 16) = v26;
  sub_1C36FFC((CGThumbnailListItem_o *)(Contents_k__BackingField + 128), (int32_t)v26, v44, v45);
  v48 = this->fields._Contents_k__BackingField;
  if ( !v48
    || (v48->fields._FullReleaseEffectComponent_k__BackingField = (struct ClassBoardFullReleaseEffectComponent_o *)v28,
        sub_1C36FFC(
          (CGThumbnailListItem_o *)&v48->fields._FullReleaseEffectComponent_k__BackingField,
          (int32_t)v28,
          v46,
          v47),
        v48->fields._GrandFullReleaseEffectComponent_k__BackingField = v31,
        sub_1C36FFC(
          (CGThumbnailListItem_o *)&v48->fields._GrandFullReleaseEffectComponent_k__BackingField,
          (int32_t)v31,
          v49,
          v50),
        (Contents_k__BackingField = (char *)this->fields._Contents_k__BackingField) == 0)
    || (*((_QWORD *)Contents_k__BackingField + 17) = v27,
        sub_1C36FFC((CGThumbnailListItem_o *)(Contents_k__BackingField + 136), (int32_t)v27, v51, v52),
        !callback) )
  {
LABEL_13:
    sub_1C372B4(Contents_k__BackingField);
  }
  ((void (__fastcall *)(intptr_t, intptr_t))callback->fields.invoke_impl)(
    callback->fields.method_code,
    callback->fields.method);
}


void ClassBoardResourceCatalogStandalone__ReleaseAll(
        ClassBoardResourceCatalogStandalone_o *this,
        const MethodInfo *method)
{
  ;
}


void ClassBoardResourceCatalogStandalone__SetSpriteOfUiAtlas(
        ClassBoardResourceCatalogStandalone_o *this,
        UISprite_o *sprite,
        System_String_o *spriteName,
        const MethodInfo *method)
{
  ;
}


System_String_o *ClassBoardResourceCatalogStandalone__get_BLANK_PATH(
        ClassBoardResourceCatalogStandalone_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C46B3C & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_4442/*"ClassBoard/ClassBoardBlank"*/);
    byte_4C46B3C = 1;
  }
  return (System_String_o *)StringLiteral_4442/*"ClassBoard/ClassBoardBlank"*/;
}


System_String_o *ClassBoardResourceCatalogStandalone__get_BOARD_BG_MODEL_PATH(
        ClassBoardResourceCatalogStandalone_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C46B49 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_4441/*"ClassBoard/Bg/ClassBoardBg"*/);
    byte_4C46B49 = 1;
  }
  return (System_String_o *)StringLiteral_4441/*"ClassBoard/Bg/ClassBoardBg"*/;
}


System_String_o *ClassBoardResourceCatalogStandalone__get_BOARD_FIGURE_PATH(
        ClassBoardResourceCatalogStandalone_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C46B3D & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_4444/*"ClassBoard/ClassBoardFigure"*/);
    byte_4C46B3D = 1;
  }
  return (System_String_o *)StringLiteral_4444/*"ClassBoard/ClassBoardFigure"*/;
}


System_String_o *ClassBoardResourceCatalogStandalone__get_BOARD_UI_PATH(
        ClassBoardResourceCatalogStandalone_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C46B47 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_4453/*"ClassBoard/ClassBoardUI"*/);
    byte_4C46B47 = 1;
  }
  return (System_String_o *)StringLiteral_4453/*"ClassBoard/ClassBoardUI"*/;
}


System_String_o *ClassBoardResourceCatalogStandalone__get_CLASS_UI_ATLAS_PATH(
        ClassBoardResourceCatalogStandalone_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C46B4B & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_4463/*"ClassBoard/UI/DownloadClassBoardClassUIAtlas"*/);
    byte_4C46B4B = 1;
  }
  return (System_String_o *)StringLiteral_4463/*"ClassBoard/UI/DownloadClassBoardClassUIAtlas"*/;
}


ClassBoardResourceContents_o *ClassBoardResourceCatalogStandalone__get_Contents(
        ClassBoardResourceCatalogStandalone_o *this,
        const MethodInfo *method)
{
  return this->fields._Contents_k__BackingField;
}


System_String_o *ClassBoardResourceCatalogStandalone__get_DISABLE_OPEN_DIALOG_PATH(
        ClassBoardResourceCatalogStandalone_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C46B42 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_4443/*"ClassBoard/ClassBoardDisableOpenDialog"*/);
    byte_4C46B42 = 1;
  }
  return (System_String_o *)StringLiteral_4443/*"ClassBoard/ClassBoardDisableOpenDialog"*/;
}


System_String_o *ClassBoardResourceCatalogStandalone__get_GRAND_BLANK_PATH(
        ClassBoardResourceCatalogStandalone_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C46B41 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_4456/*"ClassBoard/GrandClassBoardBlank"*/);
    byte_4C46B41 = 1;
  }
  return (System_String_o *)StringLiteral_4456/*"ClassBoard/GrandClassBoardBlank"*/;
}


System_String_o *ClassBoardResourceCatalogStandalone__get_GRAND_LINE_PATH(
        ClassBoardResourceCatalogStandalone_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C46B3E & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_4457/*"ClassBoard/GrandClassBoardLine"*/);
    byte_4C46B3E = 1;
  }
  return (System_String_o *)StringLiteral_4457/*"ClassBoard/GrandClassBoardLine"*/;
}


System_String_o *ClassBoardResourceCatalogStandalone__get_GRAND_LOCK_PATH(
        ClassBoardResourceCatalogStandalone_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C46B40 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_4458/*"ClassBoard/GrandClassBoardLock"*/);
    byte_4C46B40 = 1;
  }
  return (System_String_o *)StringLiteral_4458/*"ClassBoard/GrandClassBoardLock"*/;
}


System_String_o *ClassBoardResourceCatalogStandalone__get_GRAND_SQUARE_PATH(
        ClassBoardResourceCatalogStandalone_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C46B3F & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_4459/*"ClassBoard/GrandClassBoardSquare"*/);
    byte_4C46B3F = 1;
  }
  return (System_String_o *)StringLiteral_4459/*"ClassBoard/GrandClassBoardSquare"*/;
}


System_String_o *ClassBoardResourceCatalogStandalone__get_ICON_ATLAS_PATH(
        ClassBoardResourceCatalogStandalone_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C46B48 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_4460/*"ClassBoard/Icon/DownloadClassBoardIconAtlas"*/);
    byte_4C46B48 = 1;
  }
  return (System_String_o *)StringLiteral_4460/*"ClassBoard/Icon/DownloadClassBoardIconAtlas"*/;
}


System_String_o *ClassBoardResourceCatalogStandalone__get_LINE_PATH(
        ClassBoardResourceCatalogStandalone_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C46B39 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_4445/*"ClassBoard/ClassBoardLine"*/);
    byte_4C46B39 = 1;
  }
  return (System_String_o *)StringLiteral_4445/*"ClassBoard/ClassBoardLine"*/;
}


System_String_o *ClassBoardResourceCatalogStandalone__get_LOCK_OPEN_CONFIRM_DIALOG_PATH(
        ClassBoardResourceCatalogStandalone_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C46B44 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_4447/*"ClassBoard/ClassBoardLockOpenConfirmDialog"*/);
    byte_4C46B44 = 1;
  }
  return (System_String_o *)StringLiteral_4447/*"ClassBoard/ClassBoardLockOpenConfirmDialog"*/;
}


System_String_o *ClassBoardResourceCatalogStandalone__get_LOCK_PATH(
        ClassBoardResourceCatalogStandalone_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C46B3B & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_4446/*"ClassBoard/ClassBoardLock"*/);
    byte_4C46B3B = 1;
  }
  return (System_String_o *)StringLiteral_4446/*"ClassBoard/ClassBoardLock"*/;
}


System_String_o *ClassBoardResourceCatalogStandalone__get_LOCK_RELEASE_CONDITION_DIALOG_PATH(
        ClassBoardResourceCatalogStandalone_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C46B45 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_4448/*"ClassBoard/ClassBoardLockReleaseConditionDialog"*/);
    byte_4C46B45 = 1;
  }
  return (System_String_o *)StringLiteral_4448/*"ClassBoard/ClassBoardLockReleaseConditionDialog"*/;
}


System_String_o *ClassBoardResourceCatalogStandalone__get_SQUARE_DETAIL_DIALOG_PATH(
        ClassBoardResourceCatalogStandalone_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C46B46 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_4451/*"ClassBoard/ClassBoardSquareDetailDialog"*/);
    byte_4C46B46 = 1;
  }
  return (System_String_o *)StringLiteral_4451/*"ClassBoard/ClassBoardSquareDetailDialog"*/;
}


System_String_o *ClassBoardResourceCatalogStandalone__get_SQUARE_OPEN_CONFIRM_DIALOG_PATH(
        ClassBoardResourceCatalogStandalone_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C46B43 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_4452/*"ClassBoard/ClassBoardSquareOpenConfirmDialog"*/);
    byte_4C46B43 = 1;
  }
  return (System_String_o *)StringLiteral_4452/*"ClassBoard/ClassBoardSquareOpenConfirmDialog"*/;
}


System_String_o *ClassBoardResourceCatalogStandalone__get_SQUARE_PATH(
        ClassBoardResourceCatalogStandalone_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C46B3A & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_4450/*"ClassBoard/ClassBoardSquare"*/);
    byte_4C46B3A = 1;
  }
  return (System_String_o *)StringLiteral_4450/*"ClassBoard/ClassBoardSquare"*/;
}


System_String_o *ClassBoardResourceCatalogStandalone__get_UI_ATLAS_PATH(
        ClassBoardResourceCatalogStandalone_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C46B4A & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_4464/*"ClassBoard/UI/DownloadClassBoardUIAtlas"*/);
    byte_4C46B4A = 1;
  }
  return (System_String_o *)StringLiteral_4464/*"ClassBoard/UI/DownloadClassBoardUIAtlas"*/;
}