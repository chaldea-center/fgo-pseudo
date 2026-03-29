void ClassBoardResourceCatalogStandalone___ctor(ClassBoardResourceCatalogStandalone_o *this, const MethodInfo *method)
{
  Il2CppObject *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  if ( (byte_4D346B8 & 1) == 0 )
  {
    sub_1C93AD4(&ClassBoardResourceContents_TypeInfo);
    byte_4D346B8 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  v3 = (Il2CppObject *)sub_1C93D20(ClassBoardResourceContents_TypeInfo);
  System_Object___ctor(v3, 0);
  this->fields._Contents_k__BackingField = (struct ClassBoardResourceContents_o *)v3;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)v3, v4, v5, v6, v7, v8, v9);
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
  if ( (byte_4D346BB & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_Resources_Load_ClassBoardBlank___);
    byte_4D346BB = 1;
  }
  v4 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, const MethodInfo *, const MethodInfo *))this->klass->vtable._17_get_BLANK_PATH.methodPtr)(
                            this,
                            this->klass->vtable._17_get_BLANK_PATH.method,
                            method);
  v5 = System_Int32__ToString((int32_t)&v8, 0);
  v6 = System_String__Concat_64425724(v4, v5, 0);
  return (ClassBoardBlank_o *)UnityEngine_Resources__Load_object_(
                                v6,
                                (const MethodInfo_324111C *)Method_UnityEngine_Resources_Load_ClassBoardBlank___);
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
  if ( (byte_4D346BE & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_Resources_Load_ClassBoardBlank___);
    byte_4D346BE = 1;
  }
  v4 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, const MethodInfo *, const MethodInfo *))this->klass->vtable._22_get_GRAND_BLANK_PATH.methodPtr)(
                            this,
                            this->klass->vtable._22_get_GRAND_BLANK_PATH.method,
                            method);
  v5 = System_Int32__ToString((int32_t)&v8, 0);
  v6 = System_String__Concat_64425724(v4, v5, 0);
  return (ClassBoardBlank_o *)UnityEngine_Resources__Load_object_(
                                v6,
                                (const MethodInfo_324111C *)Method_UnityEngine_Resources_Load_ClassBoardBlank___);
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
  if ( (byte_4D346BF & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_Resources_Load_ClassBoardLock___);
    byte_4D346BF = 1;
  }
  v4 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, const MethodInfo *, const MethodInfo *))this->klass->vtable._21_get_GRAND_LOCK_PATH.methodPtr)(
                            this,
                            this->klass->vtable._21_get_GRAND_LOCK_PATH.method,
                            method);
  v5 = System_Int32__ToString((int32_t)&v8, 0);
  v6 = System_String__Concat_64425724(v4, v5, 0);
  return (ClassBoardLock_o *)UnityEngine_Resources__Load_object_(
                               v6,
                               (const MethodInfo_324111C *)Method_UnityEngine_Resources_Load_ClassBoardLock___);
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
  if ( (byte_4D346BD & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_Resources_Load_ClassBoardSquare___);
    byte_4D346BD = 1;
  }
  v4 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, const MethodInfo *, const MethodInfo *))this->klass->vtable._20_get_GRAND_SQUARE_PATH.methodPtr)(
                            this,
                            this->klass->vtable._20_get_GRAND_SQUARE_PATH.method,
                            method);
  v5 = System_Int32__ToString((int32_t)&v8, 0);
  v6 = System_String__Concat_64425724(v4, v5, 0);
  return (ClassBoardSquare_o *)UnityEngine_Resources__Load_object_(
                                 v6,
                                 (const MethodInfo_324111C *)Method_UnityEngine_Resources_Load_ClassBoardSquare___);
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
  if ( (byte_4D346BC & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_Resources_Load_ClassBoardLock___);
    byte_4D346BC = 1;
  }
  v4 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, const MethodInfo *, const MethodInfo *))this->klass->vtable._16_get_LOCK_PATH.methodPtr)(
                            this,
                            this->klass->vtable._16_get_LOCK_PATH.method,
                            method);
  v5 = System_Int32__ToString((int32_t)&v8, 0);
  v6 = System_String__Concat_64425724(v4, v5, 0);
  return (ClassBoardLock_o *)UnityEngine_Resources__Load_object_(
                               v6,
                               (const MethodInfo_324111C *)Method_UnityEngine_Resources_Load_ClassBoardLock___);
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
  if ( (byte_4D346BA & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_Resources_Load_ClassBoardSquare___);
    byte_4D346BA = 1;
  }
  v4 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, const MethodInfo *, const MethodInfo *))this->klass->vtable._15_get_SQUARE_PATH.methodPtr)(
                            this,
                            this->klass->vtable._15_get_SQUARE_PATH.method,
                            method);
  v5 = System_Int32__ToString((int32_t)&v8, 0);
  v6 = System_String__Concat_64425724(v4, v5, 0);
  return (ClassBoardSquare_o *)UnityEngine_Resources__Load_object_(
                                 v6,
                                 (const MethodInfo_324111C *)Method_UnityEngine_Resources_Load_ClassBoardSquare___);
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
  __int64 v30; // x1
  const MethodInfo *v31; // x5
  struct ClassBoardFullReleaseEffectComponent_o *v32; // x24
  const MethodInfo *v33; // x5
  const MethodInfo *v34; // x6
  ClassBoardResourceContents_o *v35; // x19
  System_String_o *v36; // x26
  AtlasManagerUnit_o *v37; // x25
  System_String_o *v38; // x28
  AtlasManagerUnit_o *v39; // x26
  System_String_o *v40; // x29
  AtlasManagerUnit_o *v41; // x28
  const MethodInfo *v42; // x5
  int32_t v43; // w2
  int32_t v44; // w3
  System_String_o *v45; // x4
  int32_t v46; // w5
  int64_t v47; // x6
  System_String_o *v48; // x7
  int32_t v49; // w2
  int32_t v50; // w3
  System_String_o *v51; // x4
  int32_t v52; // w5
  int64_t v53; // x6
  System_String_o *v54; // x7
  int32_t v55; // w2
  int32_t v56; // w3
  System_String_o *v57; // x4
  int32_t v58; // w5
  int64_t v59; // x6
  System_String_o *v60; // x7
  struct ClassBoardResourceContents_o *v61; // x19
  int32_t v62; // w2
  int32_t v63; // w3
  System_String_o *v64; // x4
  int32_t v65; // w5
  int64_t v66; // x6
  System_String_o *v67; // x7
  int32_t v68; // w2
  int32_t v69; // w3
  System_String_o *v70; // x4
  int32_t v71; // w5
  int64_t v72; // x6
  System_String_o *v73; // x7
  ClassBoardUIController_o *uiController; // [xsp+8h] [xbp-A8h]
  ClassBoardDisableOpenDialog_o *classBoardDisableOpenDialog; // [xsp+10h] [xbp-A0h]
  ClassBoardLock_o *lockAsset; // [xsp+18h] [xbp-98h]
  Il2CppObject *v78; // [xsp+20h] [xbp-90h]
  Il2CppObject *v79; // [xsp+28h] [xbp-88h]
  Il2CppObject *v80; // [xsp+30h] [xbp-80h]
  Il2CppObject *v81; // [xsp+38h] [xbp-78h]
  Il2CppObject *v82; // [xsp+40h] [xbp-70h]
  Il2CppObject *object; // [xsp+48h] [xbp-68h]

  if ( (byte_4D346B9 & 1) == 0 )
  {
    sub_1C93AD4(&AtlasManagerUnit_TypeInfo);
    sub_1C93AD4(&Method_UnityEngine_Resources_Load_ClassBoardBackground___);
    sub_1C93AD4(&Method_UnityEngine_Resources_Load_ClassBoardBlank___);
    sub_1C93AD4(&Method_UnityEngine_Resources_Load_ClassBoardDisableOpenDialog___);
    sub_1C93AD4(&Method_UnityEngine_Resources_Load_ClassBoardFigureController___);
    sub_1C93AD4(&Method_UnityEngine_Resources_Load_ClassBoardFullReleaseEffectComponent___);
    sub_1C93AD4(&Method_UnityEngine_Resources_Load_ClassBoardLine___);
    sub_1C93AD4(&Method_UnityEngine_Resources_Load_ClassBoardLockOpenConfirmDialog___);
    sub_1C93AD4(&Method_UnityEngine_Resources_Load_ClassBoardLockReleaseConditionDialog___);
    sub_1C93AD4(&Method_UnityEngine_Resources_Load_ClassBoardLock___);
    sub_1C93AD4(&Method_UnityEngine_Resources_Load_ClassBoardQuestOpenConfirmDialog___);
    sub_1C93AD4(&Method_UnityEngine_Resources_Load_ClassBoardSquareDetailDialog___);
    sub_1C93AD4(&Method_UnityEngine_Resources_Load_ClassBoardSquareOpenConfirmDialog___);
    sub_1C93AD4(&Method_UnityEngine_Resources_Load_ClassBoardSquare___);
    sub_1C93AD4(&Method_UnityEngine_Resources_Load_ClassBoardUIController___);
    sub_1C93AD4(&StringLiteral_4475/*"ClassBoard/FullReleaseEffectGrandScore"*/);
    sub_1C93AD4(&StringLiteral_4474/*"ClassBoard/FullReleaseEffectClassScore"*/);
    sub_1C93AD4(&StringLiteral_4469/*"ClassBoard/ClassBoardQuestOpenConfirmDialog"*/);
    byte_4D346B9 = 1;
  }
  v4 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, const MethodInfo *, const MethodInfo *))this->klass->vtable._15_get_SQUARE_PATH.methodPtr)(
                            this,
                            this->klass->vtable._15_get_SQUARE_PATH.method,
                            method);
  object = UnityEngine_Resources__Load_object_(
             v4,
             (const MethodInfo_324111C *)Method_UnityEngine_Resources_Load_ClassBoardSquare___);
  v5 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, const MethodInfo *))this->klass->vtable._14_get_LINE_PATH.methodPtr)(
                            this,
                            this->klass->vtable._14_get_LINE_PATH.method);
  v82 = UnityEngine_Resources__Load_object_(
          v5,
          (const MethodInfo_324111C *)Method_UnityEngine_Resources_Load_ClassBoardLine___);
  v6 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, const MethodInfo *))this->klass->vtable._16_get_LOCK_PATH.methodPtr)(
                            this,
                            this->klass->vtable._16_get_LOCK_PATH.method);
  v81 = UnityEngine_Resources__Load_object_(
          v6,
          (const MethodInfo_324111C *)Method_UnityEngine_Resources_Load_ClassBoardLock___);
  v7 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, const MethodInfo *))this->klass->vtable._17_get_BLANK_PATH.methodPtr)(
                            this,
                            this->klass->vtable._17_get_BLANK_PATH.method);
  v80 = UnityEngine_Resources__Load_object_(
          v7,
          (const MethodInfo_324111C *)Method_UnityEngine_Resources_Load_ClassBoardBlank___);
  v8 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, const MethodInfo *))this->klass->vtable._20_get_GRAND_SQUARE_PATH.methodPtr)(
                            this,
                            this->klass->vtable._20_get_GRAND_SQUARE_PATH.method);
  v79 = UnityEngine_Resources__Load_object_(
          v8,
          (const MethodInfo_324111C *)Method_UnityEngine_Resources_Load_ClassBoardSquare___);
  v9 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, const MethodInfo *))this->klass->vtable._19_get_GRAND_LINE_PATH.methodPtr)(
                            this,
                            this->klass->vtable._19_get_GRAND_LINE_PATH.method);
  v78 = UnityEngine_Resources__Load_object_(
          v9,
          (const MethodInfo_324111C *)Method_UnityEngine_Resources_Load_ClassBoardLine___);
  v10 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, const MethodInfo *))this->klass->vtable._21_get_GRAND_LOCK_PATH.methodPtr)(
                             this,
                             this->klass->vtable._21_get_GRAND_LOCK_PATH.method);
  lockAsset = (ClassBoardLock_o *)UnityEngine_Resources__Load_object_(
                                    v10,
                                    (const MethodInfo_324111C *)Method_UnityEngine_Resources_Load_ClassBoardLock___);
  v11 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, const MethodInfo *))this->klass->vtable._22_get_GRAND_BLANK_PATH.methodPtr)(
                             this,
                             this->klass->vtable._22_get_GRAND_BLANK_PATH.method);
  v12 = UnityEngine_Resources__Load_object_(
          v11,
          (const MethodInfo_324111C *)Method_UnityEngine_Resources_Load_ClassBoardBlank___);
  v13 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, const MethodInfo *))this->klass->vtable._23_get_DISABLE_OPEN_DIALOG_PATH.methodPtr)(
                             this,
                             this->klass->vtable._23_get_DISABLE_OPEN_DIALOG_PATH.method);
  classBoardDisableOpenDialog = (ClassBoardDisableOpenDialog_o *)UnityEngine_Resources__Load_object_(
                                                                   v13,
                                                                   (const MethodInfo_324111C *)Method_UnityEngine_Resources_Load_ClassBoardDisableOpenDialog___);
  v14 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, const MethodInfo *))this->klass->vtable._24_get_SQUARE_OPEN_CONFIRM_DIALOG_PATH.methodPtr)(
                             this,
                             this->klass->vtable._24_get_SQUARE_OPEN_CONFIRM_DIALOG_PATH.method);
  v15 = UnityEngine_Resources__Load_object_(
          v14,
          (const MethodInfo_324111C *)Method_UnityEngine_Resources_Load_ClassBoardSquareOpenConfirmDialog___);
  v16 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, const MethodInfo *))this->klass->vtable._25_get_LOCK_OPEN_CONFIRM_DIALOG_PATH.methodPtr)(
                             this,
                             this->klass->vtable._25_get_LOCK_OPEN_CONFIRM_DIALOG_PATH.method);
  v17 = UnityEngine_Resources__Load_object_(
          v16,
          (const MethodInfo_324111C *)Method_UnityEngine_Resources_Load_ClassBoardLockOpenConfirmDialog___);
  v18 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, const MethodInfo *))this->klass->vtable._26_get_LOCK_RELEASE_CONDITION_DIALOG_PATH.methodPtr)(
                             this,
                             this->klass->vtable._26_get_LOCK_RELEASE_CONDITION_DIALOG_PATH.method);
  v19 = UnityEngine_Resources__Load_object_(
          v18,
          (const MethodInfo_324111C *)Method_UnityEngine_Resources_Load_ClassBoardLockReleaseConditionDialog___);
  v20 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, const MethodInfo *))this->klass->vtable._27_get_SQUARE_DETAIL_DIALOG_PATH.methodPtr)(
                             this,
                             this->klass->vtable._27_get_SQUARE_DETAIL_DIALOG_PATH.method);
  v21 = UnityEngine_Resources__Load_object_(
          v20,
          (const MethodInfo_324111C *)Method_UnityEngine_Resources_Load_ClassBoardSquareDetailDialog___);
  v22 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, const MethodInfo *))this->klass->vtable._28_get_BOARD_UI_PATH.methodPtr)(
                             this,
                             this->klass->vtable._28_get_BOARD_UI_PATH.method);
  uiController = (ClassBoardUIController_o *)UnityEngine_Resources__Load_object_(
                                               v22,
                                               (const MethodInfo_324111C *)Method_UnityEngine_Resources_Load_ClassBoardUIController___);
  v23 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, const MethodInfo *))this->klass->vtable._30_get_BOARD_BG_MODEL_PATH.methodPtr)(
                             this,
                             this->klass->vtable._30_get_BOARD_BG_MODEL_PATH.method);
  v24 = UnityEngine_Resources__Load_object_(
          v23,
          (const MethodInfo_324111C *)Method_UnityEngine_Resources_Load_ClassBoardBackground___);
  v25 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, const MethodInfo *))this->klass->vtable._18_get_BOARD_FIGURE_PATH.methodPtr)(
                             this,
                             this->klass->vtable._18_get_BOARD_FIGURE_PATH.method);
  v26 = UnityEngine_Resources__Load_object_(
          v25,
          (const MethodInfo_324111C *)Method_UnityEngine_Resources_Load_ClassBoardFigureController___);
  v27 = UnityEngine_Resources__Load_object_(
          (System_String_o *)StringLiteral_4469/*"ClassBoard/ClassBoardQuestOpenConfirmDialog"*/,
          (const MethodInfo_324111C *)Method_UnityEngine_Resources_Load_ClassBoardQuestOpenConfirmDialog___);
  v28 = UnityEngine_Resources__Load_object_(
          (System_String_o *)StringLiteral_4474/*"ClassBoard/FullReleaseEffectClassScore"*/,
          (const MethodInfo_324111C *)Method_UnityEngine_Resources_Load_ClassBoardFullReleaseEffectComponent___);
  Contents_k__BackingField = (char *)UnityEngine_Resources__Load_object_(
                                       (System_String_o *)StringLiteral_4475/*"ClassBoard/FullReleaseEffectGrandScore"*/,
                                       (const MethodInfo_324111C *)Method_UnityEngine_Resources_Load_ClassBoardFullReleaseEffectComponent___);
  if ( !this->fields._Contents_k__BackingField )
    goto LABEL_13;
  v32 = (struct ClassBoardFullReleaseEffectComponent_o *)Contents_k__BackingField;
  ClassBoardResourceContents__SetContents(
    this->fields._Contents_k__BackingField,
    (ClassBoardSquare_o *)object,
    (ClassBoardLine_o *)v82,
    (ClassBoardLock_o *)v81,
    (ClassBoardBlank_o *)v80,
    v31);
  Contents_k__BackingField = (char *)this->fields._Contents_k__BackingField;
  if ( !Contents_k__BackingField )
    goto LABEL_13;
  ClassBoardResourceContents__SetGrandContents(
    (ClassBoardResourceContents_o *)Contents_k__BackingField,
    (ClassBoardSquare_o *)v79,
    (ClassBoardLine_o *)v78,
    lockAsset,
    (ClassBoardBlank_o *)v12,
    v33);
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
    v34);
  v35 = this->fields._Contents_k__BackingField;
  v36 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, const MethodInfo *))this->klass->vtable._31_get_UI_ATLAS_PATH.methodPtr)(
                             this,
                             this->klass->vtable._31_get_UI_ATLAS_PATH.method);
  v37 = (AtlasManagerUnit_o *)sub_1C93D20(AtlasManagerUnit_TypeInfo);
  AtlasManagerUnit___ctor(v37, v36, 0, 0);
  v38 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, const MethodInfo *))this->klass->vtable._29_get_ICON_ATLAS_PATH.methodPtr)(
                             this,
                             this->klass->vtable._29_get_ICON_ATLAS_PATH.method);
  v39 = (AtlasManagerUnit_o *)sub_1C93D20(AtlasManagerUnit_TypeInfo);
  AtlasManagerUnit___ctor(v39, v38, 0, 0);
  v40 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, const MethodInfo *))this->klass->vtable._32_get_CLASS_UI_ATLAS_PATH.methodPtr)(
                             this,
                             this->klass->vtable._32_get_CLASS_UI_ATLAS_PATH.method);
  v41 = (AtlasManagerUnit_o *)sub_1C93D20(AtlasManagerUnit_TypeInfo);
  AtlasManagerUnit___ctor(v41, v40, 0, 0);
  if ( !v35 )
    goto LABEL_13;
  ClassBoardResourceContents__SetContentsUI(v35, uiController, v37, v39, v41, v42);
  Contents_k__BackingField = (char *)this->fields._Contents_k__BackingField;
  if ( !Contents_k__BackingField )
    goto LABEL_13;
  *((_QWORD *)Contents_k__BackingField + 20) = v24;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)Contents_k__BackingField + 1, (int32_t)v24, v43, v44, v45, v46, v47, v48);
  Contents_k__BackingField = (char *)this->fields._Contents_k__BackingField;
  if ( !Contents_k__BackingField )
    goto LABEL_13;
  *((_QWORD *)Contents_k__BackingField + 16) = v26;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)(Contents_k__BackingField + 128),
    (int32_t)v26,
    v49,
    v50,
    v51,
    v52,
    v53,
    v54);
  v61 = this->fields._Contents_k__BackingField;
  if ( !v61
    || (v61->fields._FullReleaseEffectComponent_k__BackingField = (struct ClassBoardFullReleaseEffectComponent_o *)v28,
        sub_1C93A78(
          (GrandQuestFolderBoardItem_o *)&v61->fields._FullReleaseEffectComponent_k__BackingField,
          (int32_t)v28,
          v55,
          v56,
          v57,
          v58,
          v59,
          v60),
        v61->fields._GrandFullReleaseEffectComponent_k__BackingField = v32,
        sub_1C93A78(
          (GrandQuestFolderBoardItem_o *)&v61->fields._GrandFullReleaseEffectComponent_k__BackingField,
          (int32_t)v32,
          v62,
          v63,
          v64,
          v65,
          v66,
          v67),
        (Contents_k__BackingField = (char *)this->fields._Contents_k__BackingField) == 0)
    || (*((_QWORD *)Contents_k__BackingField + 17) = v27,
        sub_1C93A78(
          (GrandQuestFolderBoardItem_o *)(Contents_k__BackingField + 136),
          (int32_t)v27,
          v68,
          v69,
          v70,
          v71,
          v72,
          v73),
        !callback) )
  {
LABEL_13:
    sub_1C93D2C(Contents_k__BackingField, v30);
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
  if ( (byte_4D346A8 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_4462/*"ClassBoard/ClassBoardBlank"*/);
    byte_4D346A8 = 1;
  }
  return (System_String_o *)StringLiteral_4462/*"ClassBoard/ClassBoardBlank"*/;
}


System_String_o *ClassBoardResourceCatalogStandalone__get_BOARD_BG_MODEL_PATH(
        ClassBoardResourceCatalogStandalone_o *this,
        const MethodInfo *method)
{
  if ( (byte_4D346B5 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_4461/*"ClassBoard/Bg/ClassBoardBg"*/);
    byte_4D346B5 = 1;
  }
  return (System_String_o *)StringLiteral_4461/*"ClassBoard/Bg/ClassBoardBg"*/;
}


System_String_o *ClassBoardResourceCatalogStandalone__get_BOARD_FIGURE_PATH(
        ClassBoardResourceCatalogStandalone_o *this,
        const MethodInfo *method)
{
  if ( (byte_4D346A9 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_4464/*"ClassBoard/ClassBoardFigure"*/);
    byte_4D346A9 = 1;
  }
  return (System_String_o *)StringLiteral_4464/*"ClassBoard/ClassBoardFigure"*/;
}


System_String_o *ClassBoardResourceCatalogStandalone__get_BOARD_UI_PATH(
        ClassBoardResourceCatalogStandalone_o *this,
        const MethodInfo *method)
{
  if ( (byte_4D346B3 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_4473/*"ClassBoard/ClassBoardUI"*/);
    byte_4D346B3 = 1;
  }
  return (System_String_o *)StringLiteral_4473/*"ClassBoard/ClassBoardUI"*/;
}


System_String_o *ClassBoardResourceCatalogStandalone__get_CLASS_UI_ATLAS_PATH(
        ClassBoardResourceCatalogStandalone_o *this,
        const MethodInfo *method)
{
  if ( (byte_4D346B7 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_4483/*"ClassBoard/UI/DownloadClassBoardClassUIAtlas"*/);
    byte_4D346B7 = 1;
  }
  return (System_String_o *)StringLiteral_4483/*"ClassBoard/UI/DownloadClassBoardClassUIAtlas"*/;
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
  if ( (byte_4D346AE & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_4463/*"ClassBoard/ClassBoardDisableOpenDialog"*/);
    byte_4D346AE = 1;
  }
  return (System_String_o *)StringLiteral_4463/*"ClassBoard/ClassBoardDisableOpenDialog"*/;
}


System_String_o *ClassBoardResourceCatalogStandalone__get_GRAND_BLANK_PATH(
        ClassBoardResourceCatalogStandalone_o *this,
        const MethodInfo *method)
{
  if ( (byte_4D346AD & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_4476/*"ClassBoard/GrandClassBoardBlank"*/);
    byte_4D346AD = 1;
  }
  return (System_String_o *)StringLiteral_4476/*"ClassBoard/GrandClassBoardBlank"*/;
}


System_String_o *ClassBoardResourceCatalogStandalone__get_GRAND_LINE_PATH(
        ClassBoardResourceCatalogStandalone_o *this,
        const MethodInfo *method)
{
  if ( (byte_4D346AA & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_4477/*"ClassBoard/GrandClassBoardLine"*/);
    byte_4D346AA = 1;
  }
  return (System_String_o *)StringLiteral_4477/*"ClassBoard/GrandClassBoardLine"*/;
}


System_String_o *ClassBoardResourceCatalogStandalone__get_GRAND_LOCK_PATH(
        ClassBoardResourceCatalogStandalone_o *this,
        const MethodInfo *method)
{
  if ( (byte_4D346AC & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_4478/*"ClassBoard/GrandClassBoardLock"*/);
    byte_4D346AC = 1;
  }
  return (System_String_o *)StringLiteral_4478/*"ClassBoard/GrandClassBoardLock"*/;
}


System_String_o *ClassBoardResourceCatalogStandalone__get_GRAND_SQUARE_PATH(
        ClassBoardResourceCatalogStandalone_o *this,
        const MethodInfo *method)
{
  if ( (byte_4D346AB & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_4479/*"ClassBoard/GrandClassBoardSquare"*/);
    byte_4D346AB = 1;
  }
  return (System_String_o *)StringLiteral_4479/*"ClassBoard/GrandClassBoardSquare"*/;
}


System_String_o *ClassBoardResourceCatalogStandalone__get_ICON_ATLAS_PATH(
        ClassBoardResourceCatalogStandalone_o *this,
        const MethodInfo *method)
{
  if ( (byte_4D346B4 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_4480/*"ClassBoard/Icon/DownloadClassBoardIconAtlas"*/);
    byte_4D346B4 = 1;
  }
  return (System_String_o *)StringLiteral_4480/*"ClassBoard/Icon/DownloadClassBoardIconAtlas"*/;
}


System_String_o *ClassBoardResourceCatalogStandalone__get_LINE_PATH(
        ClassBoardResourceCatalogStandalone_o *this,
        const MethodInfo *method)
{
  if ( (byte_4D346A5 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_4465/*"ClassBoard/ClassBoardLine"*/);
    byte_4D346A5 = 1;
  }
  return (System_String_o *)StringLiteral_4465/*"ClassBoard/ClassBoardLine"*/;
}


System_String_o *ClassBoardResourceCatalogStandalone__get_LOCK_OPEN_CONFIRM_DIALOG_PATH(
        ClassBoardResourceCatalogStandalone_o *this,
        const MethodInfo *method)
{
  if ( (byte_4D346B0 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_4467/*"ClassBoard/ClassBoardLockOpenConfirmDialog"*/);
    byte_4D346B0 = 1;
  }
  return (System_String_o *)StringLiteral_4467/*"ClassBoard/ClassBoardLockOpenConfirmDialog"*/;
}


System_String_o *ClassBoardResourceCatalogStandalone__get_LOCK_PATH(
        ClassBoardResourceCatalogStandalone_o *this,
        const MethodInfo *method)
{
  if ( (byte_4D346A7 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_4466/*"ClassBoard/ClassBoardLock"*/);
    byte_4D346A7 = 1;
  }
  return (System_String_o *)StringLiteral_4466/*"ClassBoard/ClassBoardLock"*/;
}


System_String_o *ClassBoardResourceCatalogStandalone__get_LOCK_RELEASE_CONDITION_DIALOG_PATH(
        ClassBoardResourceCatalogStandalone_o *this,
        const MethodInfo *method)
{
  if ( (byte_4D346B1 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_4468/*"ClassBoard/ClassBoardLockReleaseConditionDialog"*/);
    byte_4D346B1 = 1;
  }
  return (System_String_o *)StringLiteral_4468/*"ClassBoard/ClassBoardLockReleaseConditionDialog"*/;
}


System_String_o *ClassBoardResourceCatalogStandalone__get_SQUARE_DETAIL_DIALOG_PATH(
        ClassBoardResourceCatalogStandalone_o *this,
        const MethodInfo *method)
{
  if ( (byte_4D346B2 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_4471/*"ClassBoard/ClassBoardSquareDetailDialog"*/);
    byte_4D346B2 = 1;
  }
  return (System_String_o *)StringLiteral_4471/*"ClassBoard/ClassBoardSquareDetailDialog"*/;
}


System_String_o *ClassBoardResourceCatalogStandalone__get_SQUARE_OPEN_CONFIRM_DIALOG_PATH(
        ClassBoardResourceCatalogStandalone_o *this,
        const MethodInfo *method)
{
  if ( (byte_4D346AF & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_4472/*"ClassBoard/ClassBoardSquareOpenConfirmDialog"*/);
    byte_4D346AF = 1;
  }
  return (System_String_o *)StringLiteral_4472/*"ClassBoard/ClassBoardSquareOpenConfirmDialog"*/;
}


System_String_o *ClassBoardResourceCatalogStandalone__get_SQUARE_PATH(
        ClassBoardResourceCatalogStandalone_o *this,
        const MethodInfo *method)
{
  if ( (byte_4D346A6 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_4470/*"ClassBoard/ClassBoardSquare"*/);
    byte_4D346A6 = 1;
  }
  return (System_String_o *)StringLiteral_4470/*"ClassBoard/ClassBoardSquare"*/;
}


System_String_o *ClassBoardResourceCatalogStandalone__get_UI_ATLAS_PATH(
        ClassBoardResourceCatalogStandalone_o *this,
        const MethodInfo *method)
{
  if ( (byte_4D346B6 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_4484/*"ClassBoard/UI/DownloadClassBoardUIAtlas"*/);
    byte_4D346B6 = 1;
  }
  return (System_String_o *)StringLiteral_4484/*"ClassBoard/UI/DownloadClassBoardUIAtlas"*/;
}