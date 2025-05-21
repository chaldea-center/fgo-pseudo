void __fastcall ClassBoardResourceCatalogStandalone___ctor(
        ClassBoardResourceCatalogStandalone_o *this,
        const MethodInfo *method)
{
  Il2CppObject *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4B48344 & 1) == 0 )
  {
    sub_1BDB878(&ClassBoardResourceContents_TypeInfo, method);
    byte_4B48344 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v3 = (Il2CppObject *)sub_1BDBAC4(ClassBoardResourceContents_TypeInfo);
  System_Object___ctor(v3, 0LL);
  this->fields._Contents_k__BackingField = (struct ClassBoardResourceContents_o *)v3;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields, (int32_t)v3, v4, v5);
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
  if ( (byte_4B48347 & 1) == 0 )
  {
    sub_1BDB878(&Method_UnityEngine_Resources_Load_ClassBoardBlank___, *(_QWORD *)&assetId);
    byte_4B48347 = 1;
  }
  v4 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, Il2CppMethodPointer, const MethodInfo *))this->klass->vtable._17_get_BLANK_PATH.method)(
                            this,
                            this->klass->vtable._18_get_BOARD_FIGURE_PATH.methodPtr,
                            method);
  v5 = System_Int32__ToString((int32_t)&v8, 0LL);
  v6 = System_String__Concat_62572260(v4, v5, 0LL);
  return (ClassBoardBlank_o *)UnityEngine_Resources__Load_object_(
                                v6,
                                (const MethodInfo_30CD6D0 *)Method_UnityEngine_Resources_Load_ClassBoardBlank___);
}


// local variable allocation has failed, the output may be wrong!
ClassBoardBlank_o *__fastcall ClassBoardResourceCatalogStandalone__GetUniqueGrandBlankObject(
        ClassBoardResourceCatalogStandalone_o *this,
        int32_t assetId,
        const MethodInfo *method)
{
  System_String_o *v4; // x19
  System_String_o *v5; // x0
  System_String_o *v6; // x0
  int32_t v8; // [xsp+Ch] [xbp-24h] BYREF

  v8 = assetId;
  if ( (byte_4B4834A & 1) == 0 )
  {
    sub_1BDB878(&Method_UnityEngine_Resources_Load_ClassBoardBlank___, *(_QWORD *)&assetId);
    byte_4B4834A = 1;
  }
  v4 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, Il2CppMethodPointer, const MethodInfo *))this->klass->vtable._22_get_GRAND_BLANK_PATH.method)(
                            this,
                            this->klass->vtable._23_get_DISABLE_OPEN_DIALOG_PATH.methodPtr,
                            method);
  v5 = System_Int32__ToString((int32_t)&v8, 0LL);
  v6 = System_String__Concat_62572260(v4, v5, 0LL);
  return (ClassBoardBlank_o *)UnityEngine_Resources__Load_object_(
                                v6,
                                (const MethodInfo_30CD6D0 *)Method_UnityEngine_Resources_Load_ClassBoardBlank___);
}


// local variable allocation has failed, the output may be wrong!
ClassBoardLock_o *__fastcall ClassBoardResourceCatalogStandalone__GetUniqueGrandLockObject(
        ClassBoardResourceCatalogStandalone_o *this,
        int32_t assetId,
        const MethodInfo *method)
{
  System_String_o *v4; // x19
  System_String_o *v5; // x0
  System_String_o *v6; // x0
  int32_t v8; // [xsp+Ch] [xbp-24h] BYREF

  v8 = assetId;
  if ( (byte_4B4834B & 1) == 0 )
  {
    sub_1BDB878(&Method_UnityEngine_Resources_Load_ClassBoardLock___, *(_QWORD *)&assetId);
    byte_4B4834B = 1;
  }
  v4 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, Il2CppMethodPointer, const MethodInfo *))this->klass->vtable._21_get_GRAND_LOCK_PATH.method)(
                            this,
                            this->klass->vtable._22_get_GRAND_BLANK_PATH.methodPtr,
                            method);
  v5 = System_Int32__ToString((int32_t)&v8, 0LL);
  v6 = System_String__Concat_62572260(v4, v5, 0LL);
  return (ClassBoardLock_o *)UnityEngine_Resources__Load_object_(
                               v6,
                               (const MethodInfo_30CD6D0 *)Method_UnityEngine_Resources_Load_ClassBoardLock___);
}


// local variable allocation has failed, the output may be wrong!
ClassBoardSquare_o *__fastcall ClassBoardResourceCatalogStandalone__GetUniqueGrandSquareObject(
        ClassBoardResourceCatalogStandalone_o *this,
        int32_t assetId,
        const MethodInfo *method)
{
  System_String_o *v4; // x19
  System_String_o *v5; // x0
  System_String_o *v6; // x0
  int32_t v8; // [xsp+Ch] [xbp-24h] BYREF

  v8 = assetId;
  if ( (byte_4B48349 & 1) == 0 )
  {
    sub_1BDB878(&Method_UnityEngine_Resources_Load_ClassBoardSquare___, *(_QWORD *)&assetId);
    byte_4B48349 = 1;
  }
  v4 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, Il2CppMethodPointer, const MethodInfo *))this->klass->vtable._20_get_GRAND_SQUARE_PATH.method)(
                            this,
                            this->klass->vtable._21_get_GRAND_LOCK_PATH.methodPtr,
                            method);
  v5 = System_Int32__ToString((int32_t)&v8, 0LL);
  v6 = System_String__Concat_62572260(v4, v5, 0LL);
  return (ClassBoardSquare_o *)UnityEngine_Resources__Load_object_(
                                 v6,
                                 (const MethodInfo_30CD6D0 *)Method_UnityEngine_Resources_Load_ClassBoardSquare___);
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
  if ( (byte_4B48348 & 1) == 0 )
  {
    sub_1BDB878(&Method_UnityEngine_Resources_Load_ClassBoardLock___, *(_QWORD *)&assetId);
    byte_4B48348 = 1;
  }
  v4 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, Il2CppMethodPointer, const MethodInfo *))this->klass->vtable._16_get_LOCK_PATH.method)(
                            this,
                            this->klass->vtable._17_get_BLANK_PATH.methodPtr,
                            method);
  v5 = System_Int32__ToString((int32_t)&v8, 0LL);
  v6 = System_String__Concat_62572260(v4, v5, 0LL);
  return (ClassBoardLock_o *)UnityEngine_Resources__Load_object_(
                               v6,
                               (const MethodInfo_30CD6D0 *)Method_UnityEngine_Resources_Load_ClassBoardLock___);
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
  if ( (byte_4B48346 & 1) == 0 )
  {
    sub_1BDB878(&Method_UnityEngine_Resources_Load_ClassBoardSquare___, *(_QWORD *)&assetId);
    byte_4B48346 = 1;
  }
  v4 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, Il2CppMethodPointer, const MethodInfo *))this->klass->vtable._15_get_SQUARE_PATH.method)(
                            this,
                            this->klass->vtable._16_get_LOCK_PATH.methodPtr,
                            method);
  v5 = System_Int32__ToString((int32_t)&v8, 0LL);
  v6 = System_String__Concat_62572260(v4, v5, 0LL);
  return (ClassBoardSquare_o *)UnityEngine_Resources__Load_object_(
                                 v6,
                                 (const MethodInfo_30CD6D0 *)Method_UnityEngine_Resources_Load_ClassBoardSquare___);
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
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  System_String_o *v21; // x0
  System_String_o *v22; // x0
  System_String_o *v23; // x0
  System_String_o *v24; // x0
  System_String_o *v25; // x0
  System_String_o *v26; // x0
  System_String_o *v27; // x0
  System_String_o *v28; // x0
  Il2CppObject *v29; // x29
  System_String_o *v30; // x0
  System_String_o *v31; // x0
  Il2CppObject *v32; // x26
  System_String_o *v33; // x0
  Il2CppObject *v34; // x28
  System_String_o *v35; // x0
  Il2CppObject *v36; // x25
  System_String_o *v37; // x0
  Il2CppObject *v38; // x19
  System_String_o *v39; // x0
  System_String_o *v40; // x0
  Il2CppObject *v41; // x21
  System_String_o *v42; // x0
  Il2CppObject *v43; // x22
  Il2CppObject *v44; // x27
  Il2CppObject *v45; // x23
  char *Contents_k__BackingField; // x0
  __int64 v47; // x1
  const MethodInfo *v48; // x5
  struct ClassBoardFullReleaseEffectComponent_o *v49; // x24
  const MethodInfo *v50; // x5
  const MethodInfo *v51; // x6
  ClassBoardResourceContents_o *v52; // x19
  System_String_o *v53; // x26
  AtlasManagerUnit_o *v54; // x25
  System_String_o *v55; // x28
  AtlasManagerUnit_o *v56; // x26
  System_String_o *v57; // x29
  AtlasManagerUnit_o *v58; // x28
  const MethodInfo *v59; // x5
  int32_t v60; // w2
  const MethodInfo *v61; // x3
  int32_t v62; // w2
  const MethodInfo *v63; // x3
  int32_t v64; // w2
  const MethodInfo *v65; // x3
  struct ClassBoardResourceContents_o *v66; // x19
  int32_t v67; // w2
  const MethodInfo *v68; // x3
  int32_t v69; // w2
  const MethodInfo *v70; // x3
  ClassBoardUIController_o *uiController; // [xsp+8h] [xbp-A8h]
  ClassBoardDisableOpenDialog_o *classBoardDisableOpenDialog; // [xsp+10h] [xbp-A0h]
  ClassBoardLock_o *lockAsset; // [xsp+18h] [xbp-98h]
  Il2CppObject *v75; // [xsp+20h] [xbp-90h]
  Il2CppObject *v76; // [xsp+28h] [xbp-88h]
  Il2CppObject *v77; // [xsp+30h] [xbp-80h]
  Il2CppObject *v78; // [xsp+38h] [xbp-78h]
  Il2CppObject *v79; // [xsp+40h] [xbp-70h]
  Il2CppObject *object; // [xsp+48h] [xbp-68h]

  if ( (byte_4B48345 & 1) == 0 )
  {
    sub_1BDB878(&AtlasManagerUnit_TypeInfo, callback);
    sub_1BDB878(&Method_UnityEngine_Resources_Load_ClassBoardBackground___, v4);
    sub_1BDB878(&Method_UnityEngine_Resources_Load_ClassBoardBlank___, v5);
    sub_1BDB878(&Method_UnityEngine_Resources_Load_ClassBoardDisableOpenDialog___, v6);
    sub_1BDB878(&Method_UnityEngine_Resources_Load_ClassBoardFigureController___, v7);
    sub_1BDB878(&Method_UnityEngine_Resources_Load_ClassBoardFullReleaseEffectComponent___, v8);
    sub_1BDB878(&Method_UnityEngine_Resources_Load_ClassBoardLine___, v9);
    sub_1BDB878(&Method_UnityEngine_Resources_Load_ClassBoardLockOpenConfirmDialog___, v10);
    sub_1BDB878(&Method_UnityEngine_Resources_Load_ClassBoardLockReleaseConditionDialog___, v11);
    sub_1BDB878(&Method_UnityEngine_Resources_Load_ClassBoardLock___, v12);
    sub_1BDB878(&Method_UnityEngine_Resources_Load_ClassBoardQuestOpenConfirmDialog___, v13);
    sub_1BDB878(&Method_UnityEngine_Resources_Load_ClassBoardSquareDetailDialog___, v14);
    sub_1BDB878(&Method_UnityEngine_Resources_Load_ClassBoardSquareOpenConfirmDialog___, v15);
    sub_1BDB878(&Method_UnityEngine_Resources_Load_ClassBoardSquare___, v16);
    sub_1BDB878(&Method_UnityEngine_Resources_Load_ClassBoardUIController___, v17);
    sub_1BDB878(&StringLiteral_4494/*"ClassBoard/FullReleaseEffectGrandScore"*/, v18);
    sub_1BDB878(&StringLiteral_4493/*"ClassBoard/FullReleaseEffectClassScore"*/, v19);
    sub_1BDB878(&StringLiteral_4488/*"ClassBoard/ClassBoardQuestOpenConfirmDialog"*/, v20);
    byte_4B48345 = 1;
  }
  v21 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, Il2CppMethodPointer, const MethodInfo *))this->klass->vtable._15_get_SQUARE_PATH.method)(
                             this,
                             this->klass->vtable._16_get_LOCK_PATH.methodPtr,
                             method);
  object = UnityEngine_Resources__Load_object_(
             v21,
             (const MethodInfo_30CD6D0 *)Method_UnityEngine_Resources_Load_ClassBoardSquare___);
  v22 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, Il2CppMethodPointer))this->klass->vtable._14_get_LINE_PATH.method)(
                             this,
                             this->klass->vtable._15_get_SQUARE_PATH.methodPtr);
  v79 = UnityEngine_Resources__Load_object_(
          v22,
          (const MethodInfo_30CD6D0 *)Method_UnityEngine_Resources_Load_ClassBoardLine___);
  v23 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, Il2CppMethodPointer))this->klass->vtable._16_get_LOCK_PATH.method)(
                             this,
                             this->klass->vtable._17_get_BLANK_PATH.methodPtr);
  v78 = UnityEngine_Resources__Load_object_(
          v23,
          (const MethodInfo_30CD6D0 *)Method_UnityEngine_Resources_Load_ClassBoardLock___);
  v24 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, Il2CppMethodPointer))this->klass->vtable._17_get_BLANK_PATH.method)(
                             this,
                             this->klass->vtable._18_get_BOARD_FIGURE_PATH.methodPtr);
  v77 = UnityEngine_Resources__Load_object_(
          v24,
          (const MethodInfo_30CD6D0 *)Method_UnityEngine_Resources_Load_ClassBoardBlank___);
  v25 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, Il2CppMethodPointer))this->klass->vtable._20_get_GRAND_SQUARE_PATH.method)(
                             this,
                             this->klass->vtable._21_get_GRAND_LOCK_PATH.methodPtr);
  v76 = UnityEngine_Resources__Load_object_(
          v25,
          (const MethodInfo_30CD6D0 *)Method_UnityEngine_Resources_Load_ClassBoardSquare___);
  v26 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, Il2CppMethodPointer))this->klass->vtable._19_get_GRAND_LINE_PATH.method)(
                             this,
                             this->klass->vtable._20_get_GRAND_SQUARE_PATH.methodPtr);
  v75 = UnityEngine_Resources__Load_object_(
          v26,
          (const MethodInfo_30CD6D0 *)Method_UnityEngine_Resources_Load_ClassBoardLine___);
  v27 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, Il2CppMethodPointer))this->klass->vtable._21_get_GRAND_LOCK_PATH.method)(
                             this,
                             this->klass->vtable._22_get_GRAND_BLANK_PATH.methodPtr);
  lockAsset = (ClassBoardLock_o *)UnityEngine_Resources__Load_object_(
                                    v27,
                                    (const MethodInfo_30CD6D0 *)Method_UnityEngine_Resources_Load_ClassBoardLock___);
  v28 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, Il2CppMethodPointer))this->klass->vtable._22_get_GRAND_BLANK_PATH.method)(
                             this,
                             this->klass->vtable._23_get_DISABLE_OPEN_DIALOG_PATH.methodPtr);
  v29 = UnityEngine_Resources__Load_object_(
          v28,
          (const MethodInfo_30CD6D0 *)Method_UnityEngine_Resources_Load_ClassBoardBlank___);
  v30 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, Il2CppMethodPointer))this->klass->vtable._23_get_DISABLE_OPEN_DIALOG_PATH.method)(
                             this,
                             this->klass->vtable._24_get_SQUARE_OPEN_CONFIRM_DIALOG_PATH.methodPtr);
  classBoardDisableOpenDialog = (ClassBoardDisableOpenDialog_o *)UnityEngine_Resources__Load_object_(
                                                                   v30,
                                                                   (const MethodInfo_30CD6D0 *)Method_UnityEngine_Resources_Load_ClassBoardDisableOpenDialog___);
  v31 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, Il2CppMethodPointer))this->klass->vtable._24_get_SQUARE_OPEN_CONFIRM_DIALOG_PATH.method)(
                             this,
                             this->klass->vtable._25_get_LOCK_OPEN_CONFIRM_DIALOG_PATH.methodPtr);
  v32 = UnityEngine_Resources__Load_object_(
          v31,
          (const MethodInfo_30CD6D0 *)Method_UnityEngine_Resources_Load_ClassBoardSquareOpenConfirmDialog___);
  v33 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, Il2CppMethodPointer))this->klass->vtable._25_get_LOCK_OPEN_CONFIRM_DIALOG_PATH.method)(
                             this,
                             this->klass->vtable._26_get_LOCK_RELEASE_CONDITION_DIALOG_PATH.methodPtr);
  v34 = UnityEngine_Resources__Load_object_(
          v33,
          (const MethodInfo_30CD6D0 *)Method_UnityEngine_Resources_Load_ClassBoardLockOpenConfirmDialog___);
  v35 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, Il2CppMethodPointer))this->klass->vtable._26_get_LOCK_RELEASE_CONDITION_DIALOG_PATH.method)(
                             this,
                             this->klass->vtable._27_get_SQUARE_DETAIL_DIALOG_PATH.methodPtr);
  v36 = UnityEngine_Resources__Load_object_(
          v35,
          (const MethodInfo_30CD6D0 *)Method_UnityEngine_Resources_Load_ClassBoardLockReleaseConditionDialog___);
  v37 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, Il2CppMethodPointer))this->klass->vtable._27_get_SQUARE_DETAIL_DIALOG_PATH.method)(
                             this,
                             this->klass->vtable._28_get_BOARD_UI_PATH.methodPtr);
  v38 = UnityEngine_Resources__Load_object_(
          v37,
          (const MethodInfo_30CD6D0 *)Method_UnityEngine_Resources_Load_ClassBoardSquareDetailDialog___);
  v39 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, Il2CppMethodPointer))this->klass->vtable._28_get_BOARD_UI_PATH.method)(
                             this,
                             this->klass->vtable._29_get_ICON_ATLAS_PATH.methodPtr);
  uiController = (ClassBoardUIController_o *)UnityEngine_Resources__Load_object_(
                                               v39,
                                               (const MethodInfo_30CD6D0 *)Method_UnityEngine_Resources_Load_ClassBoardUIController___);
  v40 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, Il2CppMethodPointer))this->klass->vtable._30_get_BOARD_BG_MODEL_PATH.method)(
                             this,
                             this->klass->vtable._31_get_UI_ATLAS_PATH.methodPtr);
  v41 = UnityEngine_Resources__Load_object_(
          v40,
          (const MethodInfo_30CD6D0 *)Method_UnityEngine_Resources_Load_ClassBoardBackground___);
  v42 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, Il2CppMethodPointer))this->klass->vtable._18_get_BOARD_FIGURE_PATH.method)(
                             this,
                             this->klass->vtable._19_get_GRAND_LINE_PATH.methodPtr);
  v43 = UnityEngine_Resources__Load_object_(
          v42,
          (const MethodInfo_30CD6D0 *)Method_UnityEngine_Resources_Load_ClassBoardFigureController___);
  v44 = UnityEngine_Resources__Load_object_(
          (System_String_o *)StringLiteral_4488/*"ClassBoard/ClassBoardQuestOpenConfirmDialog"*/,
          (const MethodInfo_30CD6D0 *)Method_UnityEngine_Resources_Load_ClassBoardQuestOpenConfirmDialog___);
  v45 = UnityEngine_Resources__Load_object_(
          (System_String_o *)StringLiteral_4493/*"ClassBoard/FullReleaseEffectClassScore"*/,
          (const MethodInfo_30CD6D0 *)Method_UnityEngine_Resources_Load_ClassBoardFullReleaseEffectComponent___);
  Contents_k__BackingField = (char *)UnityEngine_Resources__Load_object_(
                                       (System_String_o *)StringLiteral_4494/*"ClassBoard/FullReleaseEffectGrandScore"*/,
                                       (const MethodInfo_30CD6D0 *)Method_UnityEngine_Resources_Load_ClassBoardFullReleaseEffectComponent___);
  if ( !this->fields._Contents_k__BackingField )
    goto LABEL_13;
  v49 = (struct ClassBoardFullReleaseEffectComponent_o *)Contents_k__BackingField;
  ClassBoardResourceContents__SetContents(
    this->fields._Contents_k__BackingField,
    (ClassBoardSquare_o *)object,
    (ClassBoardLine_o *)v79,
    (ClassBoardLock_o *)v78,
    (ClassBoardBlank_o *)v77,
    v48);
  Contents_k__BackingField = (char *)this->fields._Contents_k__BackingField;
  if ( !Contents_k__BackingField )
    goto LABEL_13;
  ClassBoardResourceContents__SetGrandContents(
    (ClassBoardResourceContents_o *)Contents_k__BackingField,
    (ClassBoardSquare_o *)v76,
    (ClassBoardLine_o *)v75,
    lockAsset,
    (ClassBoardBlank_o *)v29,
    v50);
  Contents_k__BackingField = (char *)this->fields._Contents_k__BackingField;
  if ( !Contents_k__BackingField )
    goto LABEL_13;
  ClassBoardResourceContents__SetContentsDialog(
    (ClassBoardResourceContents_o *)Contents_k__BackingField,
    classBoardDisableOpenDialog,
    (ClassBoardSquareOpenConfirmDialog_o *)v32,
    (ClassBoardLockOpenConfirmDialog_o *)v34,
    (ClassBoardLockReleaseConditionDialog_o *)v36,
    (ClassBoardSquareDetailDialog_o *)v38,
    v51);
  v52 = this->fields._Contents_k__BackingField;
  v53 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, Il2CppMethodPointer))this->klass->vtable._31_get_UI_ATLAS_PATH.method)(
                             this,
                             this->klass->vtable._32_get_CLASS_UI_ATLAS_PATH.methodPtr);
  v54 = (AtlasManagerUnit_o *)sub_1BDBAC4(AtlasManagerUnit_TypeInfo);
  AtlasManagerUnit___ctor(v54, v53, 0LL, 0LL);
  v55 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, Il2CppMethodPointer))this->klass->vtable._29_get_ICON_ATLAS_PATH.method)(
                             this,
                             this->klass->vtable._30_get_BOARD_BG_MODEL_PATH.methodPtr);
  v56 = (AtlasManagerUnit_o *)sub_1BDBAC4(AtlasManagerUnit_TypeInfo);
  AtlasManagerUnit___ctor(v56, v55, 0LL, 0LL);
  v57 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, Il2CppMethodPointer))this->klass->vtable._32_get_CLASS_UI_ATLAS_PATH.method)(
                             this,
                             this->klass->vtable._33_LoadSystemAsset.methodPtr);
  v58 = (AtlasManagerUnit_o *)sub_1BDBAC4(AtlasManagerUnit_TypeInfo);
  AtlasManagerUnit___ctor(v58, v57, 0LL, 0LL);
  if ( !v52 )
    goto LABEL_13;
  ClassBoardResourceContents__SetContentsUI(v52, uiController, v54, v56, v58, v59);
  Contents_k__BackingField = (char *)this->fields._Contents_k__BackingField;
  if ( !Contents_k__BackingField )
    goto LABEL_13;
  *((_QWORD *)Contents_k__BackingField + 20) = v41;
  sub_1BDB81C((CGThumbnailListItem_o *)(Contents_k__BackingField + 160), (int32_t)v41, v60, v61);
  Contents_k__BackingField = (char *)this->fields._Contents_k__BackingField;
  if ( !Contents_k__BackingField )
    goto LABEL_13;
  *((_QWORD *)Contents_k__BackingField + 16) = v43;
  sub_1BDB81C((CGThumbnailListItem_o *)(Contents_k__BackingField + 128), (int32_t)v43, v62, v63);
  v66 = this->fields._Contents_k__BackingField;
  if ( !v66
    || (v66->fields._FullReleaseEffectComponent_k__BackingField = (struct ClassBoardFullReleaseEffectComponent_o *)v45,
        sub_1BDB81C(
          (CGThumbnailListItem_o *)&v66->fields._FullReleaseEffectComponent_k__BackingField,
          (int32_t)v45,
          v64,
          v65),
        v66->fields._GrandFullReleaseEffectComponent_k__BackingField = v49,
        sub_1BDB81C(
          (CGThumbnailListItem_o *)&v66->fields._GrandFullReleaseEffectComponent_k__BackingField,
          (int32_t)v49,
          v67,
          v68),
        (Contents_k__BackingField = (char *)this->fields._Contents_k__BackingField) == 0LL)
    || (*((_QWORD *)Contents_k__BackingField + 17) = v44,
        sub_1BDB81C((CGThumbnailListItem_o *)Contents_k__BackingField + 1, (int32_t)v44, v69, v70),
        !callback) )
  {
LABEL_13:
    sub_1BDBAD4(Contents_k__BackingField, v47);
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
  if ( (byte_4B48334 & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_4481/*"ClassBoard/ClassBoardBlank"*/, method);
    byte_4B48334 = 1;
  }
  return (System_String_o *)StringLiteral_4481/*"ClassBoard/ClassBoardBlank"*/;
}


System_String_o *__fastcall ClassBoardResourceCatalogStandalone__get_BOARD_BG_MODEL_PATH(
        ClassBoardResourceCatalogStandalone_o *this,
        const MethodInfo *method)
{
  if ( (byte_4B48341 & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_4480/*"ClassBoard/Bg/ClassBoardBg"*/, method);
    byte_4B48341 = 1;
  }
  return (System_String_o *)StringLiteral_4480/*"ClassBoard/Bg/ClassBoardBg"*/;
}


System_String_o *__fastcall ClassBoardResourceCatalogStandalone__get_BOARD_FIGURE_PATH(
        ClassBoardResourceCatalogStandalone_o *this,
        const MethodInfo *method)
{
  if ( (byte_4B48335 & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_4483/*"ClassBoard/ClassBoardFigure"*/, method);
    byte_4B48335 = 1;
  }
  return (System_String_o *)StringLiteral_4483/*"ClassBoard/ClassBoardFigure"*/;
}


System_String_o *__fastcall ClassBoardResourceCatalogStandalone__get_BOARD_UI_PATH(
        ClassBoardResourceCatalogStandalone_o *this,
        const MethodInfo *method)
{
  if ( (byte_4B4833F & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_4492/*"ClassBoard/ClassBoardUI"*/, method);
    byte_4B4833F = 1;
  }
  return (System_String_o *)StringLiteral_4492/*"ClassBoard/ClassBoardUI"*/;
}


System_String_o *__fastcall ClassBoardResourceCatalogStandalone__get_CLASS_UI_ATLAS_PATH(
        ClassBoardResourceCatalogStandalone_o *this,
        const MethodInfo *method)
{
  if ( (byte_4B48343 & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_4502/*"ClassBoard/UI/DownloadClassBoardClassUIAtlas"*/, method);
    byte_4B48343 = 1;
  }
  return (System_String_o *)StringLiteral_4502/*"ClassBoard/UI/DownloadClassBoardClassUIAtlas"*/;
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
  if ( (byte_4B4833A & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_4482/*"ClassBoard/ClassBoardDisableOpenDialog"*/, method);
    byte_4B4833A = 1;
  }
  return (System_String_o *)StringLiteral_4482/*"ClassBoard/ClassBoardDisableOpenDialog"*/;
}


System_String_o *__fastcall ClassBoardResourceCatalogStandalone__get_GRAND_BLANK_PATH(
        ClassBoardResourceCatalogStandalone_o *this,
        const MethodInfo *method)
{
  if ( (byte_4B48339 & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_4495/*"ClassBoard/GrandClassBoardBlank"*/, method);
    byte_4B48339 = 1;
  }
  return (System_String_o *)StringLiteral_4495/*"ClassBoard/GrandClassBoardBlank"*/;
}


System_String_o *__fastcall ClassBoardResourceCatalogStandalone__get_GRAND_LINE_PATH(
        ClassBoardResourceCatalogStandalone_o *this,
        const MethodInfo *method)
{
  if ( (byte_4B48336 & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_4496/*"ClassBoard/GrandClassBoardLine"*/, method);
    byte_4B48336 = 1;
  }
  return (System_String_o *)StringLiteral_4496/*"ClassBoard/GrandClassBoardLine"*/;
}


System_String_o *__fastcall ClassBoardResourceCatalogStandalone__get_GRAND_LOCK_PATH(
        ClassBoardResourceCatalogStandalone_o *this,
        const MethodInfo *method)
{
  if ( (byte_4B48338 & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_4497/*"ClassBoard/GrandClassBoardLock"*/, method);
    byte_4B48338 = 1;
  }
  return (System_String_o *)StringLiteral_4497/*"ClassBoard/GrandClassBoardLock"*/;
}


System_String_o *__fastcall ClassBoardResourceCatalogStandalone__get_GRAND_SQUARE_PATH(
        ClassBoardResourceCatalogStandalone_o *this,
        const MethodInfo *method)
{
  if ( (byte_4B48337 & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_4498/*"ClassBoard/GrandClassBoardSquare"*/, method);
    byte_4B48337 = 1;
  }
  return (System_String_o *)StringLiteral_4498/*"ClassBoard/GrandClassBoardSquare"*/;
}


System_String_o *__fastcall ClassBoardResourceCatalogStandalone__get_ICON_ATLAS_PATH(
        ClassBoardResourceCatalogStandalone_o *this,
        const MethodInfo *method)
{
  if ( (byte_4B48340 & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_4499/*"ClassBoard/Icon/DownloadClassBoardIconAtlas"*/, method);
    byte_4B48340 = 1;
  }
  return (System_String_o *)StringLiteral_4499/*"ClassBoard/Icon/DownloadClassBoardIconAtlas"*/;
}


System_String_o *__fastcall ClassBoardResourceCatalogStandalone__get_LINE_PATH(
        ClassBoardResourceCatalogStandalone_o *this,
        const MethodInfo *method)
{
  if ( (byte_4B48331 & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_4484/*"ClassBoard/ClassBoardLine"*/, method);
    byte_4B48331 = 1;
  }
  return (System_String_o *)StringLiteral_4484/*"ClassBoard/ClassBoardLine"*/;
}


System_String_o *__fastcall ClassBoardResourceCatalogStandalone__get_LOCK_OPEN_CONFIRM_DIALOG_PATH(
        ClassBoardResourceCatalogStandalone_o *this,
        const MethodInfo *method)
{
  if ( (byte_4B4833C & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_4486/*"ClassBoard/ClassBoardLockOpenConfirmDialog"*/, method);
    byte_4B4833C = 1;
  }
  return (System_String_o *)StringLiteral_4486/*"ClassBoard/ClassBoardLockOpenConfirmDialog"*/;
}


System_String_o *__fastcall ClassBoardResourceCatalogStandalone__get_LOCK_PATH(
        ClassBoardResourceCatalogStandalone_o *this,
        const MethodInfo *method)
{
  if ( (byte_4B48333 & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_4485/*"ClassBoard/ClassBoardLock"*/, method);
    byte_4B48333 = 1;
  }
  return (System_String_o *)StringLiteral_4485/*"ClassBoard/ClassBoardLock"*/;
}


System_String_o *__fastcall ClassBoardResourceCatalogStandalone__get_LOCK_RELEASE_CONDITION_DIALOG_PATH(
        ClassBoardResourceCatalogStandalone_o *this,
        const MethodInfo *method)
{
  if ( (byte_4B4833D & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_4487/*"ClassBoard/ClassBoardLockReleaseConditionDialog"*/, method);
    byte_4B4833D = 1;
  }
  return (System_String_o *)StringLiteral_4487/*"ClassBoard/ClassBoardLockReleaseConditionDialog"*/;
}


System_String_o *__fastcall ClassBoardResourceCatalogStandalone__get_SQUARE_DETAIL_DIALOG_PATH(
        ClassBoardResourceCatalogStandalone_o *this,
        const MethodInfo *method)
{
  if ( (byte_4B4833E & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_4490/*"ClassBoard/ClassBoardSquareDetailDialog"*/, method);
    byte_4B4833E = 1;
  }
  return (System_String_o *)StringLiteral_4490/*"ClassBoard/ClassBoardSquareDetailDialog"*/;
}


System_String_o *__fastcall ClassBoardResourceCatalogStandalone__get_SQUARE_OPEN_CONFIRM_DIALOG_PATH(
        ClassBoardResourceCatalogStandalone_o *this,
        const MethodInfo *method)
{
  if ( (byte_4B4833B & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_4491/*"ClassBoard/ClassBoardSquareOpenConfirmDialog"*/, method);
    byte_4B4833B = 1;
  }
  return (System_String_o *)StringLiteral_4491/*"ClassBoard/ClassBoardSquareOpenConfirmDialog"*/;
}


System_String_o *__fastcall ClassBoardResourceCatalogStandalone__get_SQUARE_PATH(
        ClassBoardResourceCatalogStandalone_o *this,
        const MethodInfo *method)
{
  if ( (byte_4B48332 & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_4489/*"ClassBoard/ClassBoardSquare"*/, method);
    byte_4B48332 = 1;
  }
  return (System_String_o *)StringLiteral_4489/*"ClassBoard/ClassBoardSquare"*/;
}


System_String_o *__fastcall ClassBoardResourceCatalogStandalone__get_UI_ATLAS_PATH(
        ClassBoardResourceCatalogStandalone_o *this,
        const MethodInfo *method)
{
  if ( (byte_4B48342 & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_4503/*"ClassBoard/UI/DownloadClassBoardUIAtlas"*/, method);
    byte_4B48342 = 1;
  }
  return (System_String_o *)StringLiteral_4503/*"ClassBoard/UI/DownloadClassBoardUIAtlas"*/;
}