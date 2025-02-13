void __fastcall ClassBoardResourceCatalogStandalone___ctor(
        ClassBoardResourceCatalogStandalone_o *this,
        const MethodInfo *method)
{
  Il2CppObject *v3; // x20
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7

  if ( (byte_4BDFB6E & 1) == 0 )
  {
    sub_1C21E38(&ClassBoardResourceContents_TypeInfo);
    byte_4BDFB6E = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v3 = (Il2CppObject *)sub_1C22084(ClassBoardResourceContents_TypeInfo);
  System_Object___ctor(v3, 0LL);
  this->fields._Contents_k__BackingField = (struct ClassBoardResourceContents_o *)v3;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields, (int64_t)v3, v4, v5, v6, v7, v8, v9);
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
  if ( (byte_4BDFB71 & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_Resources_Load_ClassBoardBlank___);
    byte_4BDFB71 = 1;
  }
  v4 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, Il2CppMethodPointer, const MethodInfo *))this->klass->vtable._14_get_BLANK_PATH.method)(
                            this,
                            this->klass->vtable._15_get_DISABLE_OPEN_DIALOG_PATH.methodPtr,
                            method);
  v5 = System_Int32__ToString((int32_t)&v8, 0LL);
  v6 = System_String__Concat_63115476(v4, v5, 0LL);
  return (ClassBoardBlank_o *)UnityEngine_Resources__Load_object_(
                                v6,
                                (const MethodInfo_3045110 *)Method_UnityEngine_Resources_Load_ClassBoardBlank___);
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
  if ( (byte_4BDFB72 & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_Resources_Load_ClassBoardLock___);
    byte_4BDFB72 = 1;
  }
  v4 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, Il2CppMethodPointer, const MethodInfo *))this->klass->vtable._13_get_LOCK_PATH.method)(
                            this,
                            this->klass->vtable._14_get_BLANK_PATH.methodPtr,
                            method);
  v5 = System_Int32__ToString((int32_t)&v8, 0LL);
  v6 = System_String__Concat_63115476(v4, v5, 0LL);
  return (ClassBoardLock_o *)UnityEngine_Resources__Load_object_(
                               v6,
                               (const MethodInfo_3045110 *)Method_UnityEngine_Resources_Load_ClassBoardLock___);
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
  if ( (byte_4BDFB70 & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_Resources_Load_ClassBoardSquare___);
    byte_4BDFB70 = 1;
  }
  v4 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, Il2CppMethodPointer, const MethodInfo *))this->klass->vtable._12_get_SQUARE_PATH.method)(
                            this,
                            this->klass->vtable._13_get_LOCK_PATH.methodPtr,
                            method);
  v5 = System_Int32__ToString((int32_t)&v8, 0LL);
  v6 = System_String__Concat_63115476(v4, v5, 0LL);
  return (ClassBoardSquare_o *)UnityEngine_Resources__Load_object_(
                                 v6,
                                 (const MethodInfo_3045110 *)Method_UnityEngine_Resources_Load_ClassBoardSquare___);
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
  int64_t v26; // x24
  const MethodInfo *v27; // x6
  ClassBoardResourceContents_o *v28; // x21
  System_String_o *v29; // x23
  AtlasManagerUnit_o *v30; // x22
  System_String_o *v31; // x26
  AtlasManagerUnit_o *v32; // x23
  System_String_o *v33; // x27
  AtlasManagerUnit_o *v34; // x26
  const MethodInfo *v35; // x5
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  Il2CppObject *v43; // [xsp+10h] [xbp-70h]
  Il2CppObject *object; // [xsp+18h] [xbp-68h]

  if ( (byte_4BDFB6F & 1) == 0 )
  {
    sub_1C21E38(&AtlasManagerUnit_TypeInfo);
    sub_1C21E38(&Method_UnityEngine_Resources_Load_ClassBoardBackground___);
    sub_1C21E38(&Method_UnityEngine_Resources_Load_ClassBoardBlank___);
    sub_1C21E38(&Method_UnityEngine_Resources_Load_ClassBoardDisableOpenDialog___);
    sub_1C21E38(&Method_UnityEngine_Resources_Load_ClassBoardLine___);
    sub_1C21E38(&Method_UnityEngine_Resources_Load_ClassBoardLockOpenConfirmDialog___);
    sub_1C21E38(&Method_UnityEngine_Resources_Load_ClassBoardLockReleaseConditionDialog___);
    sub_1C21E38(&Method_UnityEngine_Resources_Load_ClassBoardLock___);
    sub_1C21E38(&Method_UnityEngine_Resources_Load_ClassBoardSquareDetailDialog___);
    sub_1C21E38(&Method_UnityEngine_Resources_Load_ClassBoardSquareOpenConfirmDialog___);
    sub_1C21E38(&Method_UnityEngine_Resources_Load_ClassBoardSquare___);
    sub_1C21E38(&Method_UnityEngine_Resources_Load_ClassBoardUIController___);
    byte_4BDFB6F = 1;
  }
  v4 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, Il2CppMethodPointer, const MethodInfo *))this->klass->vtable._12_get_SQUARE_PATH.method)(
                            this,
                            this->klass->vtable._13_get_LOCK_PATH.methodPtr,
                            method);
  object = UnityEngine_Resources__Load_object_(
             v4,
             (const MethodInfo_3045110 *)Method_UnityEngine_Resources_Load_ClassBoardSquare___);
  v5 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, Il2CppMethodPointer))this->klass->vtable._11_get_LINE_PATH.method)(
                            this,
                            this->klass->vtable._12_get_SQUARE_PATH.methodPtr);
  v43 = UnityEngine_Resources__Load_object_(
          v5,
          (const MethodInfo_3045110 *)Method_UnityEngine_Resources_Load_ClassBoardLine___);
  v6 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, Il2CppMethodPointer))this->klass->vtable._13_get_LOCK_PATH.method)(
                            this,
                            this->klass->vtable._14_get_BLANK_PATH.methodPtr);
  v7 = UnityEngine_Resources__Load_object_(
         v6,
         (const MethodInfo_3045110 *)Method_UnityEngine_Resources_Load_ClassBoardLock___);
  v8 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, Il2CppMethodPointer))this->klass->vtable._14_get_BLANK_PATH.method)(
                            this,
                            this->klass->vtable._15_get_DISABLE_OPEN_DIALOG_PATH.methodPtr);
  v9 = UnityEngine_Resources__Load_object_(
         v8,
         (const MethodInfo_3045110 *)Method_UnityEngine_Resources_Load_ClassBoardBlank___);
  v10 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, Il2CppMethodPointer))this->klass->vtable._15_get_DISABLE_OPEN_DIALOG_PATH.method)(
                             this,
                             this->klass->vtable._16_get_SQUARE_OPEN_CONFIRM_DIALOG_PATH.methodPtr);
  v11 = UnityEngine_Resources__Load_object_(
          v10,
          (const MethodInfo_3045110 *)Method_UnityEngine_Resources_Load_ClassBoardDisableOpenDialog___);
  v12 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, Il2CppMethodPointer))this->klass->vtable._16_get_SQUARE_OPEN_CONFIRM_DIALOG_PATH.method)(
                             this,
                             this->klass->vtable._17_get_LOCK_OPEN_CONFIRM_DIALOG_PATH.methodPtr);
  v13 = UnityEngine_Resources__Load_object_(
          v12,
          (const MethodInfo_3045110 *)Method_UnityEngine_Resources_Load_ClassBoardSquareOpenConfirmDialog___);
  v14 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, Il2CppMethodPointer))this->klass->vtable._17_get_LOCK_OPEN_CONFIRM_DIALOG_PATH.method)(
                             this,
                             this->klass->vtable._18_get_LOCK_RELEASE_CONDITION_DIALOG_PATH.methodPtr);
  v15 = UnityEngine_Resources__Load_object_(
          v14,
          (const MethodInfo_3045110 *)Method_UnityEngine_Resources_Load_ClassBoardLockOpenConfirmDialog___);
  v16 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, Il2CppMethodPointer))this->klass->vtable._18_get_LOCK_RELEASE_CONDITION_DIALOG_PATH.method)(
                             this,
                             this->klass->vtable._19_get_SQUARE_DETAIL_DIALOG_PATH.methodPtr);
  v17 = UnityEngine_Resources__Load_object_(
          v16,
          (const MethodInfo_3045110 *)Method_UnityEngine_Resources_Load_ClassBoardLockReleaseConditionDialog___);
  v18 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, Il2CppMethodPointer))this->klass->vtable._19_get_SQUARE_DETAIL_DIALOG_PATH.method)(
                             this,
                             this->klass->vtable._20_get_BOARD_UI_PATH.methodPtr);
  v19 = UnityEngine_Resources__Load_object_(
          v18,
          (const MethodInfo_3045110 *)Method_UnityEngine_Resources_Load_ClassBoardSquareDetailDialog___);
  v20 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, Il2CppMethodPointer))this->klass->vtable._20_get_BOARD_UI_PATH.method)(
                             this,
                             this->klass->vtable._21_get_ICON_ATLAS_PATH.methodPtr);
  v21 = UnityEngine_Resources__Load_object_(
          v20,
          (const MethodInfo_3045110 *)Method_UnityEngine_Resources_Load_ClassBoardUIController___);
  v22 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, Il2CppMethodPointer))this->klass->vtable._22_get_BOARD_BG_MODEL_PATH.method)(
                             this,
                             this->klass->vtable._23_get_UI_ATLAS_PATH.methodPtr);
  Contents_k__BackingField = (char *)UnityEngine_Resources__Load_object_(
                                       v22,
                                       (const MethodInfo_3045110 *)Method_UnityEngine_Resources_Load_ClassBoardBackground___);
  if ( !this->fields._Contents_k__BackingField )
    goto LABEL_9;
  v26 = (int64_t)Contents_k__BackingField;
  ClassBoardResourceContents__SetContents(
    this->fields._Contents_k__BackingField,
    (ClassBoardSquare_o *)object,
    (ClassBoardLine_o *)v43,
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
  v30 = (AtlasManagerUnit_o *)sub_1C22084(AtlasManagerUnit_TypeInfo);
  AtlasManagerUnit___ctor(v30, v29, 0LL, 0LL);
  v31 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, Il2CppMethodPointer))this->klass->vtable._21_get_ICON_ATLAS_PATH.method)(
                             this,
                             this->klass->vtable._22_get_BOARD_BG_MODEL_PATH.methodPtr);
  v32 = (AtlasManagerUnit_o *)sub_1C22084(AtlasManagerUnit_TypeInfo);
  AtlasManagerUnit___ctor(v32, v31, 0LL, 0LL);
  v33 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, Il2CppMethodPointer))this->klass->vtable._24_get_CLASS_UI_ATLAS_PATH.method)(
                             this,
                             this->klass->vtable._25_LoadSystemAsset.methodPtr);
  v34 = (AtlasManagerUnit_o *)sub_1C22084(AtlasManagerUnit_TypeInfo);
  AtlasManagerUnit___ctor(v34, v33, 0LL, 0LL);
  if ( !v28
    || (ClassBoardResourceContents__SetContentsUI(v28, (ClassBoardUIController_o *)v21, v30, v32, v34, v35),
        (Contents_k__BackingField = (char *)this->fields._Contents_k__BackingField) == 0LL)
    || (*((_QWORD *)Contents_k__BackingField + 12) = v26,
        sub_1C21DDC((PartyOrganizationUtility_o *)(Contents_k__BackingField + 96), v26, v36, v37, v38, v39, v40, v41),
        !callback) )
  {
LABEL_9:
    sub_1C22094(Contents_k__BackingField, v24);
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
  if ( (byte_4BDFB63 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_4578/*"ClassBoard/ClassBoardBlank"*/);
    byte_4BDFB63 = 1;
  }
  return (System_String_o *)StringLiteral_4578/*"ClassBoard/ClassBoardBlank"*/;
}


System_String_o *__fastcall ClassBoardResourceCatalogStandalone__get_BOARD_BG_MODEL_PATH(
        ClassBoardResourceCatalogStandalone_o *this,
        const MethodInfo *method)
{
  if ( (byte_4BDFB6B & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_4577/*"ClassBoard/Bg/ClassBoardBg"*/);
    byte_4BDFB6B = 1;
  }
  return (System_String_o *)StringLiteral_4577/*"ClassBoard/Bg/ClassBoardBg"*/;
}


System_String_o *__fastcall ClassBoardResourceCatalogStandalone__get_BOARD_UI_PATH(
        ClassBoardResourceCatalogStandalone_o *this,
        const MethodInfo *method)
{
  if ( (byte_4BDFB69 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_4587/*"ClassBoard/ClassBoardUI"*/);
    byte_4BDFB69 = 1;
  }
  return (System_String_o *)StringLiteral_4587/*"ClassBoard/ClassBoardUI"*/;
}


System_String_o *__fastcall ClassBoardResourceCatalogStandalone__get_CLASS_UI_ATLAS_PATH(
        ClassBoardResourceCatalogStandalone_o *this,
        const MethodInfo *method)
{
  if ( (byte_4BDFB6D & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_4591/*"ClassBoard/UI/DownloadClassBoardClassUIAtlas"*/);
    byte_4BDFB6D = 1;
  }
  return (System_String_o *)StringLiteral_4591/*"ClassBoard/UI/DownloadClassBoardClassUIAtlas"*/;
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
  if ( (byte_4BDFB64 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_4579/*"ClassBoard/ClassBoardDisableOpenDialog"*/);
    byte_4BDFB64 = 1;
  }
  return (System_String_o *)StringLiteral_4579/*"ClassBoard/ClassBoardDisableOpenDialog"*/;
}


System_String_o *__fastcall ClassBoardResourceCatalogStandalone__get_ICON_ATLAS_PATH(
        ClassBoardResourceCatalogStandalone_o *this,
        const MethodInfo *method)
{
  if ( (byte_4BDFB6A & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_4588/*"ClassBoard/Icon/DownloadClassBoardIconAtlas"*/);
    byte_4BDFB6A = 1;
  }
  return (System_String_o *)StringLiteral_4588/*"ClassBoard/Icon/DownloadClassBoardIconAtlas"*/;
}


System_String_o *__fastcall ClassBoardResourceCatalogStandalone__get_LINE_PATH(
        ClassBoardResourceCatalogStandalone_o *this,
        const MethodInfo *method)
{
  if ( (byte_4BDFB60 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_4580/*"ClassBoard/ClassBoardLine"*/);
    byte_4BDFB60 = 1;
  }
  return (System_String_o *)StringLiteral_4580/*"ClassBoard/ClassBoardLine"*/;
}


System_String_o *__fastcall ClassBoardResourceCatalogStandalone__get_LOCK_OPEN_CONFIRM_DIALOG_PATH(
        ClassBoardResourceCatalogStandalone_o *this,
        const MethodInfo *method)
{
  if ( (byte_4BDFB66 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_4582/*"ClassBoard/ClassBoardLockOpenConfirmDialog"*/);
    byte_4BDFB66 = 1;
  }
  return (System_String_o *)StringLiteral_4582/*"ClassBoard/ClassBoardLockOpenConfirmDialog"*/;
}


System_String_o *__fastcall ClassBoardResourceCatalogStandalone__get_LOCK_PATH(
        ClassBoardResourceCatalogStandalone_o *this,
        const MethodInfo *method)
{
  if ( (byte_4BDFB62 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_4581/*"ClassBoard/ClassBoardLock"*/);
    byte_4BDFB62 = 1;
  }
  return (System_String_o *)StringLiteral_4581/*"ClassBoard/ClassBoardLock"*/;
}


System_String_o *__fastcall ClassBoardResourceCatalogStandalone__get_LOCK_RELEASE_CONDITION_DIALOG_PATH(
        ClassBoardResourceCatalogStandalone_o *this,
        const MethodInfo *method)
{
  if ( (byte_4BDFB67 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_4583/*"ClassBoard/ClassBoardLockReleaseConditionDialog"*/);
    byte_4BDFB67 = 1;
  }
  return (System_String_o *)StringLiteral_4583/*"ClassBoard/ClassBoardLockReleaseConditionDialog"*/;
}


System_String_o *__fastcall ClassBoardResourceCatalogStandalone__get_SQUARE_DETAIL_DIALOG_PATH(
        ClassBoardResourceCatalogStandalone_o *this,
        const MethodInfo *method)
{
  if ( (byte_4BDFB68 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_4585/*"ClassBoard/ClassBoardSquareDetailDialog"*/);
    byte_4BDFB68 = 1;
  }
  return (System_String_o *)StringLiteral_4585/*"ClassBoard/ClassBoardSquareDetailDialog"*/;
}


System_String_o *__fastcall ClassBoardResourceCatalogStandalone__get_SQUARE_OPEN_CONFIRM_DIALOG_PATH(
        ClassBoardResourceCatalogStandalone_o *this,
        const MethodInfo *method)
{
  if ( (byte_4BDFB65 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_4586/*"ClassBoard/ClassBoardSquareOpenConfirmDialog"*/);
    byte_4BDFB65 = 1;
  }
  return (System_String_o *)StringLiteral_4586/*"ClassBoard/ClassBoardSquareOpenConfirmDialog"*/;
}


System_String_o *__fastcall ClassBoardResourceCatalogStandalone__get_SQUARE_PATH(
        ClassBoardResourceCatalogStandalone_o *this,
        const MethodInfo *method)
{
  if ( (byte_4BDFB61 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_4584/*"ClassBoard/ClassBoardSquare"*/);
    byte_4BDFB61 = 1;
  }
  return (System_String_o *)StringLiteral_4584/*"ClassBoard/ClassBoardSquare"*/;
}


System_String_o *__fastcall ClassBoardResourceCatalogStandalone__get_UI_ATLAS_PATH(
        ClassBoardResourceCatalogStandalone_o *this,
        const MethodInfo *method)
{
  if ( (byte_4BDFB6C & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_4592/*"ClassBoard/UI/DownloadClassBoardUIAtlas"*/);
    byte_4BDFB6C = 1;
  }
  return (System_String_o *)StringLiteral_4592/*"ClassBoard/UI/DownloadClassBoardUIAtlas"*/;
}