void ClassBoardResourceCatalogStandalone___ctor(ClassBoardResourceCatalogStandalone_o *this, const MethodInfo *method)
{
  Il2CppObject *v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_593C4F0 & 1) == 0 )
  {
    sub_21FFC50(&ClassBoardResourceContents_TypeInfo);
    byte_593C4F0 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  v3 = (Il2CppObject *)sub_21FFEBC(ClassBoardResourceContents_TypeInfo);
  System_Object___ctor(v3, 0);
  this->fields._Contents_k__BackingField = (struct ClassBoardResourceContents_o *)v3;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)v3, v4, v5, v6, v7, v8, v9);
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
  if ( (byte_593C4F3 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_Resources_Load_ClassBoardBlank___);
    byte_593C4F3 = 1;
  }
  v4 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, const MethodInfo *, const MethodInfo *))this->klass->vtable._17_get_BLANK_PATH.methodPtr)(
                            this,
                            this->klass->vtable._17_get_BLANK_PATH.method,
                            method);
  v5 = System_Int32__ToString((int32_t)&v8, 0);
  v6 = System_String__Concat_75438412(v4, v5, 0);
  return (ClassBoardBlank_o *)UnityEngine_Resources__Load_object_(
                                v6,
                                (const MethodInfo_3945260 *)Method_UnityEngine_Resources_Load_ClassBoardBlank___);
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
  if ( (byte_593C4F6 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_Resources_Load_ClassBoardBlank___);
    byte_593C4F6 = 1;
  }
  v4 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, const MethodInfo *, const MethodInfo *))this->klass->vtable._22_get_GRAND_BLANK_PATH.methodPtr)(
                            this,
                            this->klass->vtable._22_get_GRAND_BLANK_PATH.method,
                            method);
  v5 = System_Int32__ToString((int32_t)&v8, 0);
  v6 = System_String__Concat_75438412(v4, v5, 0);
  return (ClassBoardBlank_o *)UnityEngine_Resources__Load_object_(
                                v6,
                                (const MethodInfo_3945260 *)Method_UnityEngine_Resources_Load_ClassBoardBlank___);
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
  if ( (byte_593C4F7 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_Resources_Load_ClassBoardLock___);
    byte_593C4F7 = 1;
  }
  v4 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, const MethodInfo *, const MethodInfo *))this->klass->vtable._21_get_GRAND_LOCK_PATH.methodPtr)(
                            this,
                            this->klass->vtable._21_get_GRAND_LOCK_PATH.method,
                            method);
  v5 = System_Int32__ToString((int32_t)&v8, 0);
  v6 = System_String__Concat_75438412(v4, v5, 0);
  return (ClassBoardLock_o *)UnityEngine_Resources__Load_object_(
                               v6,
                               (const MethodInfo_3945260 *)Method_UnityEngine_Resources_Load_ClassBoardLock___);
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
  if ( (byte_593C4F5 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_Resources_Load_ClassBoardSquare___);
    byte_593C4F5 = 1;
  }
  v4 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, const MethodInfo *, const MethodInfo *))this->klass->vtable._20_get_GRAND_SQUARE_PATH.methodPtr)(
                            this,
                            this->klass->vtable._20_get_GRAND_SQUARE_PATH.method,
                            method);
  v5 = System_Int32__ToString((int32_t)&v8, 0);
  v6 = System_String__Concat_75438412(v4, v5, 0);
  return (ClassBoardSquare_o *)UnityEngine_Resources__Load_object_(
                                 v6,
                                 (const MethodInfo_3945260 *)Method_UnityEngine_Resources_Load_ClassBoardSquare___);
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
  if ( (byte_593C4F4 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_Resources_Load_ClassBoardLock___);
    byte_593C4F4 = 1;
  }
  v4 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, const MethodInfo *, const MethodInfo *))this->klass->vtable._16_get_LOCK_PATH.methodPtr)(
                            this,
                            this->klass->vtable._16_get_LOCK_PATH.method,
                            method);
  v5 = System_Int32__ToString((int32_t)&v8, 0);
  v6 = System_String__Concat_75438412(v4, v5, 0);
  return (ClassBoardLock_o *)UnityEngine_Resources__Load_object_(
                               v6,
                               (const MethodInfo_3945260 *)Method_UnityEngine_Resources_Load_ClassBoardLock___);
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
  if ( (byte_593C4F2 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_Resources_Load_ClassBoardSquare___);
    byte_593C4F2 = 1;
  }
  v4 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, const MethodInfo *, const MethodInfo *))this->klass->vtable._15_get_SQUARE_PATH.methodPtr)(
                            this,
                            this->klass->vtable._15_get_SQUARE_PATH.method,
                            method);
  v5 = System_Int32__ToString((int32_t)&v8, 0);
  v6 = System_String__Concat_75438412(v4, v5, 0);
  return (ClassBoardSquare_o *)UnityEngine_Resources__Load_object_(
                                 v6,
                                 (const MethodInfo_3945260 *)Method_UnityEngine_Resources_Load_ClassBoardSquare___);
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
  Il2CppObject *v11; // x22
  System_String_o *v12; // x0
  System_String_o *v13; // x0
  System_String_o *v14; // x0
  Il2CppObject *v15; // x26
  System_String_o *v16; // x0
  Il2CppObject *v17; // x27
  System_String_o *v18; // x0
  Il2CppObject *v19; // x29
  System_String_o *v20; // x0
  Il2CppObject *v21; // x21
  System_String_o *v22; // x0
  System_String_o *v23; // x0
  Il2CppObject *v24; // x23
  System_String_o *v25; // x0
  Il2CppObject *v26; // x24
  Il2CppObject *v27; // x28
  Il2CppObject *v28; // x25
  char *Contents_k__BackingField; // x0
  __int64 v30; // x1
  const MethodInfo *v31; // x5
  struct ClassBoardFullReleaseEffectComponent_o *v32; // x19
  const MethodInfo *v33; // x5
  const MethodInfo *v34; // x6
  ClassBoardResourceContents_o *v35; // x21
  System_String_o *v36; // x27
  AtlasManagerUnit_o *v37; // x26
  System_String_o *v38; // x29
  AtlasManagerUnit_o *v39; // x27
  System_String_o *v40; // x22
  AtlasManagerUnit_o *v41; // x29
  const MethodInfo *v42; // x5
  System_String_o *v43; // x2
  System_String_o *v44; // x3
  int32_t v45; // w4
  int32_t v46; // w5
  bool v47; // w6
  bool v48; // w7
  System_String_o *v49; // x2
  System_String_o *v50; // x3
  int32_t v51; // w4
  int32_t v52; // w5
  bool v53; // w6
  bool v54; // w7
  System_String_o *v55; // x2
  System_String_o *v56; // x3
  int32_t v57; // w4
  int32_t v58; // w5
  bool v59; // w6
  bool v60; // w7
  struct ClassBoardResourceContents_o *v61; // x21
  System_String_o *v62; // x2
  System_String_o *v63; // x3
  int32_t v64; // w4
  int32_t v65; // w5
  bool v66; // w6
  bool v67; // w7
  System_String_o *v68; // x2
  System_String_o *v69; // x3
  int32_t v70; // w4
  int32_t v71; // w5
  bool v72; // w6
  bool v73; // w7
  ClassBoardUIController_o *uiController; // [xsp+8h] [xbp-A8h]
  ClassBoardDisableOpenDialog_o *classBoardDisableOpenDialog; // [xsp+10h] [xbp-A0h]
  ClassBoardBlank_o *blank; // [xsp+18h] [xbp-98h]
  Il2CppObject *v78; // [xsp+20h] [xbp-90h]
  Il2CppObject *v79; // [xsp+28h] [xbp-88h]
  Il2CppObject *v80; // [xsp+30h] [xbp-80h]
  Il2CppObject *v81; // [xsp+38h] [xbp-78h]
  Il2CppObject *v82; // [xsp+40h] [xbp-70h]
  Il2CppObject *object; // [xsp+48h] [xbp-68h]

  if ( (byte_593C4F1 & 1) == 0 )
  {
    sub_21FFC50(&AtlasManagerUnit_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_Resources_Load_ClassBoardBackground___);
    sub_21FFC50(&Method_UnityEngine_Resources_Load_ClassBoardBlank___);
    sub_21FFC50(&Method_UnityEngine_Resources_Load_ClassBoardDisableOpenDialog___);
    sub_21FFC50(&Method_UnityEngine_Resources_Load_ClassBoardFigureController___);
    sub_21FFC50(&Method_UnityEngine_Resources_Load_ClassBoardFullReleaseEffectComponent___);
    sub_21FFC50(&Method_UnityEngine_Resources_Load_ClassBoardLine___);
    sub_21FFC50(&Method_UnityEngine_Resources_Load_ClassBoardLockOpenConfirmDialog___);
    sub_21FFC50(&Method_UnityEngine_Resources_Load_ClassBoardLockReleaseConditionDialog___);
    sub_21FFC50(&Method_UnityEngine_Resources_Load_ClassBoardLock___);
    sub_21FFC50(&Method_UnityEngine_Resources_Load_ClassBoardQuestOpenConfirmDialog___);
    sub_21FFC50(&Method_UnityEngine_Resources_Load_ClassBoardSquareDetailDialog___);
    sub_21FFC50(&Method_UnityEngine_Resources_Load_ClassBoardSquareOpenConfirmDialog___);
    sub_21FFC50(&Method_UnityEngine_Resources_Load_ClassBoardSquare___);
    sub_21FFC50(&Method_UnityEngine_Resources_Load_ClassBoardUIController___);
    sub_21FFC50(&StringLiteral_4620/*"ClassBoard/FullReleaseEffectGrandScore"*/);
    sub_21FFC50(&StringLiteral_4619/*"ClassBoard/FullReleaseEffectClassScore"*/);
    sub_21FFC50(&StringLiteral_4614/*"ClassBoard/ClassBoardQuestOpenConfirmDialog"*/);
    byte_593C4F1 = 1;
  }
  v4 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, const MethodInfo *, const MethodInfo *))this->klass->vtable._15_get_SQUARE_PATH.methodPtr)(
                            this,
                            this->klass->vtable._15_get_SQUARE_PATH.method,
                            method);
  object = UnityEngine_Resources__Load_object_(
             v4,
             (const MethodInfo_3945260 *)Method_UnityEngine_Resources_Load_ClassBoardSquare___);
  v5 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, const MethodInfo *))this->klass->vtable._14_get_LINE_PATH.methodPtr)(
                            this,
                            this->klass->vtable._14_get_LINE_PATH.method);
  v82 = UnityEngine_Resources__Load_object_(
          v5,
          (const MethodInfo_3945260 *)Method_UnityEngine_Resources_Load_ClassBoardLine___);
  v6 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, const MethodInfo *))this->klass->vtable._16_get_LOCK_PATH.methodPtr)(
                            this,
                            this->klass->vtable._16_get_LOCK_PATH.method);
  v81 = UnityEngine_Resources__Load_object_(
          v6,
          (const MethodInfo_3945260 *)Method_UnityEngine_Resources_Load_ClassBoardLock___);
  v7 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, const MethodInfo *))this->klass->vtable._17_get_BLANK_PATH.methodPtr)(
                            this,
                            this->klass->vtable._17_get_BLANK_PATH.method);
  v80 = UnityEngine_Resources__Load_object_(
          v7,
          (const MethodInfo_3945260 *)Method_UnityEngine_Resources_Load_ClassBoardBlank___);
  v8 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, const MethodInfo *))this->klass->vtable._20_get_GRAND_SQUARE_PATH.methodPtr)(
                            this,
                            this->klass->vtable._20_get_GRAND_SQUARE_PATH.method);
  v79 = UnityEngine_Resources__Load_object_(
          v8,
          (const MethodInfo_3945260 *)Method_UnityEngine_Resources_Load_ClassBoardSquare___);
  v9 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, const MethodInfo *))this->klass->vtable._19_get_GRAND_LINE_PATH.methodPtr)(
                            this,
                            this->klass->vtable._19_get_GRAND_LINE_PATH.method);
  v78 = UnityEngine_Resources__Load_object_(
          v9,
          (const MethodInfo_3945260 *)Method_UnityEngine_Resources_Load_ClassBoardLine___);
  v10 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, const MethodInfo *))this->klass->vtable._21_get_GRAND_LOCK_PATH.methodPtr)(
                             this,
                             this->klass->vtable._21_get_GRAND_LOCK_PATH.method);
  v11 = UnityEngine_Resources__Load_object_(
          v10,
          (const MethodInfo_3945260 *)Method_UnityEngine_Resources_Load_ClassBoardLock___);
  v12 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, const MethodInfo *))this->klass->vtable._22_get_GRAND_BLANK_PATH.methodPtr)(
                             this,
                             this->klass->vtable._22_get_GRAND_BLANK_PATH.method);
  blank = (ClassBoardBlank_o *)UnityEngine_Resources__Load_object_(
                                 v12,
                                 (const MethodInfo_3945260 *)Method_UnityEngine_Resources_Load_ClassBoardBlank___);
  v13 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, const MethodInfo *))this->klass->vtable._23_get_DISABLE_OPEN_DIALOG_PATH.methodPtr)(
                             this,
                             this->klass->vtable._23_get_DISABLE_OPEN_DIALOG_PATH.method);
  classBoardDisableOpenDialog = (ClassBoardDisableOpenDialog_o *)UnityEngine_Resources__Load_object_(
                                                                   v13,
                                                                   (const MethodInfo_3945260 *)Method_UnityEngine_Resources_Load_ClassBoardDisableOpenDialog___);
  v14 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, const MethodInfo *))this->klass->vtable._24_get_SQUARE_OPEN_CONFIRM_DIALOG_PATH.methodPtr)(
                             this,
                             this->klass->vtable._24_get_SQUARE_OPEN_CONFIRM_DIALOG_PATH.method);
  v15 = UnityEngine_Resources__Load_object_(
          v14,
          (const MethodInfo_3945260 *)Method_UnityEngine_Resources_Load_ClassBoardSquareOpenConfirmDialog___);
  v16 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, const MethodInfo *))this->klass->vtable._25_get_LOCK_OPEN_CONFIRM_DIALOG_PATH.methodPtr)(
                             this,
                             this->klass->vtable._25_get_LOCK_OPEN_CONFIRM_DIALOG_PATH.method);
  v17 = UnityEngine_Resources__Load_object_(
          v16,
          (const MethodInfo_3945260 *)Method_UnityEngine_Resources_Load_ClassBoardLockOpenConfirmDialog___);
  v18 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, const MethodInfo *))this->klass->vtable._26_get_LOCK_RELEASE_CONDITION_DIALOG_PATH.methodPtr)(
                             this,
                             this->klass->vtable._26_get_LOCK_RELEASE_CONDITION_DIALOG_PATH.method);
  v19 = UnityEngine_Resources__Load_object_(
          v18,
          (const MethodInfo_3945260 *)Method_UnityEngine_Resources_Load_ClassBoardLockReleaseConditionDialog___);
  v20 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, const MethodInfo *))this->klass->vtable._27_get_SQUARE_DETAIL_DIALOG_PATH.methodPtr)(
                             this,
                             this->klass->vtable._27_get_SQUARE_DETAIL_DIALOG_PATH.method);
  v21 = UnityEngine_Resources__Load_object_(
          v20,
          (const MethodInfo_3945260 *)Method_UnityEngine_Resources_Load_ClassBoardSquareDetailDialog___);
  v22 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, const MethodInfo *))this->klass->vtable._28_get_BOARD_UI_PATH.methodPtr)(
                             this,
                             this->klass->vtable._28_get_BOARD_UI_PATH.method);
  uiController = (ClassBoardUIController_o *)UnityEngine_Resources__Load_object_(
                                               v22,
                                               (const MethodInfo_3945260 *)Method_UnityEngine_Resources_Load_ClassBoardUIController___);
  v23 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, const MethodInfo *))this->klass->vtable._30_get_BOARD_BG_MODEL_PATH.methodPtr)(
                             this,
                             this->klass->vtable._30_get_BOARD_BG_MODEL_PATH.method);
  v24 = UnityEngine_Resources__Load_object_(
          v23,
          (const MethodInfo_3945260 *)Method_UnityEngine_Resources_Load_ClassBoardBackground___);
  v25 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, const MethodInfo *))this->klass->vtable._18_get_BOARD_FIGURE_PATH.methodPtr)(
                             this,
                             this->klass->vtable._18_get_BOARD_FIGURE_PATH.method);
  v26 = UnityEngine_Resources__Load_object_(
          v25,
          (const MethodInfo_3945260 *)Method_UnityEngine_Resources_Load_ClassBoardFigureController___);
  v27 = UnityEngine_Resources__Load_object_(
          (System_String_o *)StringLiteral_4614/*"ClassBoard/ClassBoardQuestOpenConfirmDialog"*/,
          (const MethodInfo_3945260 *)Method_UnityEngine_Resources_Load_ClassBoardQuestOpenConfirmDialog___);
  v28 = UnityEngine_Resources__Load_object_(
          (System_String_o *)StringLiteral_4619/*"ClassBoard/FullReleaseEffectClassScore"*/,
          (const MethodInfo_3945260 *)Method_UnityEngine_Resources_Load_ClassBoardFullReleaseEffectComponent___);
  Contents_k__BackingField = (char *)UnityEngine_Resources__Load_object_(
                                       (System_String_o *)StringLiteral_4620/*"ClassBoard/FullReleaseEffectGrandScore"*/,
                                       (const MethodInfo_3945260 *)Method_UnityEngine_Resources_Load_ClassBoardFullReleaseEffectComponent___);
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
    (ClassBoardLock_o *)v11,
    blank,
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
  v37 = (AtlasManagerUnit_o *)sub_21FFEBC(AtlasManagerUnit_TypeInfo);
  AtlasManagerUnit___ctor(v37, v36, 0, 0);
  v38 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, const MethodInfo *))this->klass->vtable._29_get_ICON_ATLAS_PATH.methodPtr)(
                             this,
                             this->klass->vtable._29_get_ICON_ATLAS_PATH.method);
  v39 = (AtlasManagerUnit_o *)sub_21FFEBC(AtlasManagerUnit_TypeInfo);
  AtlasManagerUnit___ctor(v39, v38, 0, 0);
  v40 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, const MethodInfo *))this->klass->vtable._32_get_CLASS_UI_ATLAS_PATH.methodPtr)(
                             this,
                             this->klass->vtable._32_get_CLASS_UI_ATLAS_PATH.method);
  v41 = (AtlasManagerUnit_o *)sub_21FFEBC(AtlasManagerUnit_TypeInfo);
  AtlasManagerUnit___ctor(v41, v40, 0, 0);
  if ( !v35 )
    goto LABEL_13;
  ClassBoardResourceContents__SetContentsUI(v35, uiController, v37, v39, v41, v42);
  Contents_k__BackingField = (char *)this->fields._Contents_k__BackingField;
  if ( !Contents_k__BackingField )
    goto LABEL_13;
  *((_QWORD *)Contents_k__BackingField + 20) = v24;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)(Contents_k__BackingField + 160),
    (int32_t)v24,
    v43,
    v44,
    v45,
    v46,
    v47,
    v48);
  Contents_k__BackingField = (char *)this->fields._Contents_k__BackingField;
  if ( !Contents_k__BackingField )
    goto LABEL_13;
  *((_QWORD *)Contents_k__BackingField + 16) = v26;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)(Contents_k__BackingField + 128),
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
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)&v61->fields._FullReleaseEffectComponent_k__BackingField,
          (int32_t)v28,
          v55,
          v56,
          v57,
          v58,
          v59,
          v60),
        v61->fields._GrandFullReleaseEffectComponent_k__BackingField = v32,
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)&v61->fields._GrandFullReleaseEffectComponent_k__BackingField,
          (int32_t)v32,
          v62,
          v63,
          v64,
          v65,
          v66,
          v67),
        (Contents_k__BackingField = (char *)this->fields._Contents_k__BackingField) == 0)
    || (*((_QWORD *)Contents_k__BackingField + 17) = v27,
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)(Contents_k__BackingField + 136),
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
    sub_21FFECC(Contents_k__BackingField, v30);
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
  if ( (byte_593C4E0 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_4607/*"ClassBoard/ClassBoardBlank"*/);
    byte_593C4E0 = 1;
  }
  return (System_String_o *)StringLiteral_4607/*"ClassBoard/ClassBoardBlank"*/;
}


System_String_o *ClassBoardResourceCatalogStandalone__get_BOARD_BG_MODEL_PATH(
        ClassBoardResourceCatalogStandalone_o *this,
        const MethodInfo *method)
{
  if ( (byte_593C4ED & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_4606/*"ClassBoard/Bg/ClassBoardBg"*/);
    byte_593C4ED = 1;
  }
  return (System_String_o *)StringLiteral_4606/*"ClassBoard/Bg/ClassBoardBg"*/;
}


System_String_o *ClassBoardResourceCatalogStandalone__get_BOARD_FIGURE_PATH(
        ClassBoardResourceCatalogStandalone_o *this,
        const MethodInfo *method)
{
  if ( (byte_593C4E1 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_4609/*"ClassBoard/ClassBoardFigure"*/);
    byte_593C4E1 = 1;
  }
  return (System_String_o *)StringLiteral_4609/*"ClassBoard/ClassBoardFigure"*/;
}


System_String_o *ClassBoardResourceCatalogStandalone__get_BOARD_UI_PATH(
        ClassBoardResourceCatalogStandalone_o *this,
        const MethodInfo *method)
{
  if ( (byte_593C4EB & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_4618/*"ClassBoard/ClassBoardUI"*/);
    byte_593C4EB = 1;
  }
  return (System_String_o *)StringLiteral_4618/*"ClassBoard/ClassBoardUI"*/;
}


System_String_o *ClassBoardResourceCatalogStandalone__get_CLASS_UI_ATLAS_PATH(
        ClassBoardResourceCatalogStandalone_o *this,
        const MethodInfo *method)
{
  if ( (byte_593C4EF & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_4628/*"ClassBoard/UI/DownloadClassBoardClassUIAtlas"*/);
    byte_593C4EF = 1;
  }
  return (System_String_o *)StringLiteral_4628/*"ClassBoard/UI/DownloadClassBoardClassUIAtlas"*/;
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
  if ( (byte_593C4E6 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_4608/*"ClassBoard/ClassBoardDisableOpenDialog"*/);
    byte_593C4E6 = 1;
  }
  return (System_String_o *)StringLiteral_4608/*"ClassBoard/ClassBoardDisableOpenDialog"*/;
}


System_String_o *ClassBoardResourceCatalogStandalone__get_GRAND_BLANK_PATH(
        ClassBoardResourceCatalogStandalone_o *this,
        const MethodInfo *method)
{
  if ( (byte_593C4E5 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_4621/*"ClassBoard/GrandClassBoardBlank"*/);
    byte_593C4E5 = 1;
  }
  return (System_String_o *)StringLiteral_4621/*"ClassBoard/GrandClassBoardBlank"*/;
}


System_String_o *ClassBoardResourceCatalogStandalone__get_GRAND_LINE_PATH(
        ClassBoardResourceCatalogStandalone_o *this,
        const MethodInfo *method)
{
  if ( (byte_593C4E2 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_4622/*"ClassBoard/GrandClassBoardLine"*/);
    byte_593C4E2 = 1;
  }
  return (System_String_o *)StringLiteral_4622/*"ClassBoard/GrandClassBoardLine"*/;
}


System_String_o *ClassBoardResourceCatalogStandalone__get_GRAND_LOCK_PATH(
        ClassBoardResourceCatalogStandalone_o *this,
        const MethodInfo *method)
{
  if ( (byte_593C4E4 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_4623/*"ClassBoard/GrandClassBoardLock"*/);
    byte_593C4E4 = 1;
  }
  return (System_String_o *)StringLiteral_4623/*"ClassBoard/GrandClassBoardLock"*/;
}


System_String_o *ClassBoardResourceCatalogStandalone__get_GRAND_SQUARE_PATH(
        ClassBoardResourceCatalogStandalone_o *this,
        const MethodInfo *method)
{
  if ( (byte_593C4E3 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_4624/*"ClassBoard/GrandClassBoardSquare"*/);
    byte_593C4E3 = 1;
  }
  return (System_String_o *)StringLiteral_4624/*"ClassBoard/GrandClassBoardSquare"*/;
}


System_String_o *ClassBoardResourceCatalogStandalone__get_ICON_ATLAS_PATH(
        ClassBoardResourceCatalogStandalone_o *this,
        const MethodInfo *method)
{
  if ( (byte_593C4EC & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_4625/*"ClassBoard/Icon/DownloadClassBoardIconAtlas"*/);
    byte_593C4EC = 1;
  }
  return (System_String_o *)StringLiteral_4625/*"ClassBoard/Icon/DownloadClassBoardIconAtlas"*/;
}


System_String_o *ClassBoardResourceCatalogStandalone__get_LINE_PATH(
        ClassBoardResourceCatalogStandalone_o *this,
        const MethodInfo *method)
{
  if ( (byte_593C4DD & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_4610/*"ClassBoard/ClassBoardLine"*/);
    byte_593C4DD = 1;
  }
  return (System_String_o *)StringLiteral_4610/*"ClassBoard/ClassBoardLine"*/;
}


System_String_o *ClassBoardResourceCatalogStandalone__get_LOCK_OPEN_CONFIRM_DIALOG_PATH(
        ClassBoardResourceCatalogStandalone_o *this,
        const MethodInfo *method)
{
  if ( (byte_593C4E8 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_4612/*"ClassBoard/ClassBoardLockOpenConfirmDialog"*/);
    byte_593C4E8 = 1;
  }
  return (System_String_o *)StringLiteral_4612/*"ClassBoard/ClassBoardLockOpenConfirmDialog"*/;
}


System_String_o *ClassBoardResourceCatalogStandalone__get_LOCK_PATH(
        ClassBoardResourceCatalogStandalone_o *this,
        const MethodInfo *method)
{
  if ( (byte_593C4DF & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_4611/*"ClassBoard/ClassBoardLock"*/);
    byte_593C4DF = 1;
  }
  return (System_String_o *)StringLiteral_4611/*"ClassBoard/ClassBoardLock"*/;
}


System_String_o *ClassBoardResourceCatalogStandalone__get_LOCK_RELEASE_CONDITION_DIALOG_PATH(
        ClassBoardResourceCatalogStandalone_o *this,
        const MethodInfo *method)
{
  if ( (byte_593C4E9 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_4613/*"ClassBoard/ClassBoardLockReleaseConditionDialog"*/);
    byte_593C4E9 = 1;
  }
  return (System_String_o *)StringLiteral_4613/*"ClassBoard/ClassBoardLockReleaseConditionDialog"*/;
}


System_String_o *ClassBoardResourceCatalogStandalone__get_SQUARE_DETAIL_DIALOG_PATH(
        ClassBoardResourceCatalogStandalone_o *this,
        const MethodInfo *method)
{
  if ( (byte_593C4EA & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_4616/*"ClassBoard/ClassBoardSquareDetailDialog"*/);
    byte_593C4EA = 1;
  }
  return (System_String_o *)StringLiteral_4616/*"ClassBoard/ClassBoardSquareDetailDialog"*/;
}


System_String_o *ClassBoardResourceCatalogStandalone__get_SQUARE_OPEN_CONFIRM_DIALOG_PATH(
        ClassBoardResourceCatalogStandalone_o *this,
        const MethodInfo *method)
{
  if ( (byte_593C4E7 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_4617/*"ClassBoard/ClassBoardSquareOpenConfirmDialog"*/);
    byte_593C4E7 = 1;
  }
  return (System_String_o *)StringLiteral_4617/*"ClassBoard/ClassBoardSquareOpenConfirmDialog"*/;
}


System_String_o *ClassBoardResourceCatalogStandalone__get_SQUARE_PATH(
        ClassBoardResourceCatalogStandalone_o *this,
        const MethodInfo *method)
{
  if ( (byte_593C4DE & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_4615/*"ClassBoard/ClassBoardSquare"*/);
    byte_593C4DE = 1;
  }
  return (System_String_o *)StringLiteral_4615/*"ClassBoard/ClassBoardSquare"*/;
}


System_String_o *ClassBoardResourceCatalogStandalone__get_UI_ATLAS_PATH(
        ClassBoardResourceCatalogStandalone_o *this,
        const MethodInfo *method)
{
  if ( (byte_593C4EE & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_4629/*"ClassBoard/UI/DownloadClassBoardUIAtlas"*/);
    byte_593C4EE = 1;
  }
  return (System_String_o *)StringLiteral_4629/*"ClassBoard/UI/DownloadClassBoardUIAtlas"*/;
}