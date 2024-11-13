void __fastcall ClassBoardResourceCatalogStandalone___ctor(
        ClassBoardResourceCatalogStandalone_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x3
  Il2CppObject *v7; // x20
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7

  if ( (byte_4B1971A & 1) == 0 )
  {
    sub_1BCA7E0(&ClassBoardResourceContents_TypeInfo, method, v2);
    byte_4B1971A = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v7 = (Il2CppObject *)sub_1BCAA2C(ClassBoardResourceContents_TypeInfo, v4, v5, v6);
  System_Object___ctor(v7, 0LL);
  this->fields._Contents_k__BackingField = (struct ClassBoardResourceContents_o *)v7;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, (int64_t)v7, v8, v9, v10, v11, v12, v13);
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
  if ( (byte_4B1971D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Resources_Load_ClassBoardBlank___, *(_QWORD *)&assetId, method);
    byte_4B1971D = 1;
  }
  v4 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, Il2CppMethodPointer, const MethodInfo *))this->klass->vtable._14_get_BLANK_PATH.method)(
                            this,
                            this->klass->vtable._15_get_DISABLE_OPEN_DIALOG_PATH.methodPtr,
                            method);
  v5 = System_Int32__ToString((int32_t)&v8, 0LL);
  v6 = System_String__Concat_62401220(v4, v5, 0LL);
  return (ClassBoardBlank_o *)UnityEngine_Resources__Load_object_(
                                v6,
                                (const MethodInfo_2FA6FF0 *)Method_UnityEngine_Resources_Load_ClassBoardBlank___);
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
  if ( (byte_4B1971E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Resources_Load_ClassBoardLock___, *(_QWORD *)&assetId, method);
    byte_4B1971E = 1;
  }
  v4 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, Il2CppMethodPointer, const MethodInfo *))this->klass->vtable._13_get_LOCK_PATH.method)(
                            this,
                            this->klass->vtable._14_get_BLANK_PATH.methodPtr,
                            method);
  v5 = System_Int32__ToString((int32_t)&v8, 0LL);
  v6 = System_String__Concat_62401220(v4, v5, 0LL);
  return (ClassBoardLock_o *)UnityEngine_Resources__Load_object_(
                               v6,
                               (const MethodInfo_2FA6FF0 *)Method_UnityEngine_Resources_Load_ClassBoardLock___);
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
  if ( (byte_4B1971C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Resources_Load_ClassBoardSquare___, *(_QWORD *)&assetId, method);
    byte_4B1971C = 1;
  }
  v4 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, Il2CppMethodPointer, const MethodInfo *))this->klass->vtable._12_get_SQUARE_PATH.method)(
                            this,
                            this->klass->vtable._13_get_LOCK_PATH.methodPtr,
                            method);
  v5 = System_Int32__ToString((int32_t)&v8, 0LL);
  v6 = System_String__Concat_62401220(v4, v5, 0LL);
  return (ClassBoardSquare_o *)UnityEngine_Resources__Load_object_(
                                 v6,
                                 (const MethodInfo_2FA6FF0 *)Method_UnityEngine_Resources_Load_ClassBoardSquare___);
}


void __fastcall ClassBoardResourceCatalogStandalone__LoadSystemAsset(
        ClassBoardResourceCatalogStandalone_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  System_String_o *v26; // x0
  System_String_o *v27; // x0
  System_String_o *v28; // x0
  Il2CppObject *v29; // x23
  System_String_o *v30; // x0
  Il2CppObject *v31; // x26
  System_String_o *v32; // x0
  Il2CppObject *v33; // x27
  System_String_o *v34; // x0
  Il2CppObject *v35; // x28
  System_String_o *v36; // x0
  Il2CppObject *v37; // x29
  System_String_o *v38; // x0
  Il2CppObject *v39; // x21
  System_String_o *v40; // x0
  Il2CppObject *v41; // x22
  System_String_o *v42; // x0
  Il2CppObject *v43; // x25
  System_String_o *v44; // x0
  char *Contents_k__BackingField; // x0
  __int64 v46; // x1
  const MethodInfo *v47; // x5
  int64_t v48; // x24
  const MethodInfo *v49; // x6
  ClassBoardResourceContents_o *v50; // x21
  System_String_o *v51; // x23
  __int64 v52; // x1
  __int64 v53; // x2
  __int64 v54; // x3
  AtlasManagerUnit_o *v55; // x22
  System_String_o *v56; // x26
  __int64 v57; // x1
  __int64 v58; // x2
  __int64 v59; // x3
  AtlasManagerUnit_o *v60; // x23
  System_String_o *v61; // x27
  __int64 v62; // x1
  __int64 v63; // x2
  __int64 v64; // x3
  AtlasManagerUnit_o *v65; // x26
  const MethodInfo *v66; // x5
  int64_t v67; // x2
  int32_t v68; // w3
  System_String_o *v69; // x4
  BattleSetupInfo_o *v70; // x5
  FollowerInfo_o *v71; // x6
  PartyListViewItem_o *v72; // x7
  Il2CppObject *v74; // [xsp+10h] [xbp-70h]
  Il2CppObject *object; // [xsp+18h] [xbp-68h]

  if ( (byte_4B1971B & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManagerUnit_TypeInfo, callback, method);
    sub_1BCA7E0(&Method_UnityEngine_Resources_Load_ClassBoardBackground___, v4, v5);
    sub_1BCA7E0(&Method_UnityEngine_Resources_Load_ClassBoardBlank___, v6, v7);
    sub_1BCA7E0(&Method_UnityEngine_Resources_Load_ClassBoardDisableOpenDialog___, v8, v9);
    sub_1BCA7E0(&Method_UnityEngine_Resources_Load_ClassBoardLine___, v10, v11);
    sub_1BCA7E0(&Method_UnityEngine_Resources_Load_ClassBoardLockOpenConfirmDialog___, v12, v13);
    sub_1BCA7E0(&Method_UnityEngine_Resources_Load_ClassBoardLockReleaseConditionDialog___, v14, v15);
    sub_1BCA7E0(&Method_UnityEngine_Resources_Load_ClassBoardLock___, v16, v17);
    sub_1BCA7E0(&Method_UnityEngine_Resources_Load_ClassBoardSquareDetailDialog___, v18, v19);
    sub_1BCA7E0(&Method_UnityEngine_Resources_Load_ClassBoardSquareOpenConfirmDialog___, v20, v21);
    sub_1BCA7E0(&Method_UnityEngine_Resources_Load_ClassBoardSquare___, v22, v23);
    sub_1BCA7E0(&Method_UnityEngine_Resources_Load_ClassBoardUIController___, v24, v25);
    byte_4B1971B = 1;
  }
  v26 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, Il2CppMethodPointer, const MethodInfo *))this->klass->vtable._12_get_SQUARE_PATH.method)(
                             this,
                             this->klass->vtable._13_get_LOCK_PATH.methodPtr,
                             method);
  object = UnityEngine_Resources__Load_object_(
             v26,
             (const MethodInfo_2FA6FF0 *)Method_UnityEngine_Resources_Load_ClassBoardSquare___);
  v27 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, Il2CppMethodPointer))this->klass->vtable._11_get_LINE_PATH.method)(
                             this,
                             this->klass->vtable._12_get_SQUARE_PATH.methodPtr);
  v74 = UnityEngine_Resources__Load_object_(
          v27,
          (const MethodInfo_2FA6FF0 *)Method_UnityEngine_Resources_Load_ClassBoardLine___);
  v28 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, Il2CppMethodPointer))this->klass->vtable._13_get_LOCK_PATH.method)(
                             this,
                             this->klass->vtable._14_get_BLANK_PATH.methodPtr);
  v29 = UnityEngine_Resources__Load_object_(
          v28,
          (const MethodInfo_2FA6FF0 *)Method_UnityEngine_Resources_Load_ClassBoardLock___);
  v30 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, Il2CppMethodPointer))this->klass->vtable._14_get_BLANK_PATH.method)(
                             this,
                             this->klass->vtable._15_get_DISABLE_OPEN_DIALOG_PATH.methodPtr);
  v31 = UnityEngine_Resources__Load_object_(
          v30,
          (const MethodInfo_2FA6FF0 *)Method_UnityEngine_Resources_Load_ClassBoardBlank___);
  v32 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, Il2CppMethodPointer))this->klass->vtable._15_get_DISABLE_OPEN_DIALOG_PATH.method)(
                             this,
                             this->klass->vtable._16_get_SQUARE_OPEN_CONFIRM_DIALOG_PATH.methodPtr);
  v33 = UnityEngine_Resources__Load_object_(
          v32,
          (const MethodInfo_2FA6FF0 *)Method_UnityEngine_Resources_Load_ClassBoardDisableOpenDialog___);
  v34 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, Il2CppMethodPointer))this->klass->vtable._16_get_SQUARE_OPEN_CONFIRM_DIALOG_PATH.method)(
                             this,
                             this->klass->vtable._17_get_LOCK_OPEN_CONFIRM_DIALOG_PATH.methodPtr);
  v35 = UnityEngine_Resources__Load_object_(
          v34,
          (const MethodInfo_2FA6FF0 *)Method_UnityEngine_Resources_Load_ClassBoardSquareOpenConfirmDialog___);
  v36 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, Il2CppMethodPointer))this->klass->vtable._17_get_LOCK_OPEN_CONFIRM_DIALOG_PATH.method)(
                             this,
                             this->klass->vtable._18_get_LOCK_RELEASE_CONDITION_DIALOG_PATH.methodPtr);
  v37 = UnityEngine_Resources__Load_object_(
          v36,
          (const MethodInfo_2FA6FF0 *)Method_UnityEngine_Resources_Load_ClassBoardLockOpenConfirmDialog___);
  v38 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, Il2CppMethodPointer))this->klass->vtable._18_get_LOCK_RELEASE_CONDITION_DIALOG_PATH.method)(
                             this,
                             this->klass->vtable._19_get_SQUARE_DETAIL_DIALOG_PATH.methodPtr);
  v39 = UnityEngine_Resources__Load_object_(
          v38,
          (const MethodInfo_2FA6FF0 *)Method_UnityEngine_Resources_Load_ClassBoardLockReleaseConditionDialog___);
  v40 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, Il2CppMethodPointer))this->klass->vtable._19_get_SQUARE_DETAIL_DIALOG_PATH.method)(
                             this,
                             this->klass->vtable._20_get_BOARD_UI_PATH.methodPtr);
  v41 = UnityEngine_Resources__Load_object_(
          v40,
          (const MethodInfo_2FA6FF0 *)Method_UnityEngine_Resources_Load_ClassBoardSquareDetailDialog___);
  v42 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, Il2CppMethodPointer))this->klass->vtable._20_get_BOARD_UI_PATH.method)(
                             this,
                             this->klass->vtable._21_get_ICON_ATLAS_PATH.methodPtr);
  v43 = UnityEngine_Resources__Load_object_(
          v42,
          (const MethodInfo_2FA6FF0 *)Method_UnityEngine_Resources_Load_ClassBoardUIController___);
  v44 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, Il2CppMethodPointer))this->klass->vtable._22_get_BOARD_BG_MODEL_PATH.method)(
                             this,
                             this->klass->vtable._23_get_UI_ATLAS_PATH.methodPtr);
  Contents_k__BackingField = (char *)UnityEngine_Resources__Load_object_(
                                       v44,
                                       (const MethodInfo_2FA6FF0 *)Method_UnityEngine_Resources_Load_ClassBoardBackground___);
  if ( !this->fields._Contents_k__BackingField )
    goto LABEL_9;
  v48 = (int64_t)Contents_k__BackingField;
  ClassBoardResourceContents__SetContents(
    this->fields._Contents_k__BackingField,
    (ClassBoardSquare_o *)object,
    (ClassBoardLine_o *)v74,
    (ClassBoardLock_o *)v29,
    (ClassBoardBlank_o *)v31,
    v47);
  Contents_k__BackingField = (char *)this->fields._Contents_k__BackingField;
  if ( !Contents_k__BackingField )
    goto LABEL_9;
  ClassBoardResourceContents__SetContentsDialog(
    (ClassBoardResourceContents_o *)Contents_k__BackingField,
    (ClassBoardDisableOpenDialog_o *)v33,
    (ClassBoardSquareOpenConfirmDialog_o *)v35,
    (ClassBoardLockOpenConfirmDialog_o *)v37,
    (ClassBoardLockReleaseConditionDialog_o *)v39,
    (ClassBoardSquareDetailDialog_o *)v41,
    v49);
  v50 = this->fields._Contents_k__BackingField;
  v51 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, Il2CppMethodPointer))this->klass->vtable._23_get_UI_ATLAS_PATH.method)(
                             this,
                             this->klass->vtable._24_get_CLASS_UI_ATLAS_PATH.methodPtr);
  v55 = (AtlasManagerUnit_o *)sub_1BCAA2C(AtlasManagerUnit_TypeInfo, v52, v53, v54);
  AtlasManagerUnit___ctor(v55, v51, 0LL, 0LL);
  v56 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, Il2CppMethodPointer))this->klass->vtable._21_get_ICON_ATLAS_PATH.method)(
                             this,
                             this->klass->vtable._22_get_BOARD_BG_MODEL_PATH.methodPtr);
  v60 = (AtlasManagerUnit_o *)sub_1BCAA2C(AtlasManagerUnit_TypeInfo, v57, v58, v59);
  AtlasManagerUnit___ctor(v60, v56, 0LL, 0LL);
  v61 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, Il2CppMethodPointer))this->klass->vtable._24_get_CLASS_UI_ATLAS_PATH.method)(
                             this,
                             this->klass->vtable._25_LoadSystemAsset.methodPtr);
  v65 = (AtlasManagerUnit_o *)sub_1BCAA2C(AtlasManagerUnit_TypeInfo, v62, v63, v64);
  AtlasManagerUnit___ctor(v65, v61, 0LL, 0LL);
  if ( !v50
    || (ClassBoardResourceContents__SetContentsUI(v50, (ClassBoardUIController_o *)v43, v55, v60, v65, v66),
        (Contents_k__BackingField = (char *)this->fields._Contents_k__BackingField) == 0LL)
    || (*((_QWORD *)Contents_k__BackingField + 12) = v48,
        sub_1BCA784((PartyOrganizationUtility_o *)(Contents_k__BackingField + 96), v48, v67, v68, v69, v70, v71, v72),
        !callback) )
  {
LABEL_9:
    sub_1BCAA3C(Contents_k__BackingField, v46);
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
  __int64 v2; // x2

  if ( (byte_4B1970F & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_4552/*"ClassBoard/ClassBoardBlank"*/, method, v2);
    byte_4B1970F = 1;
  }
  return (System_String_o *)StringLiteral_4552/*"ClassBoard/ClassBoardBlank"*/;
}


System_String_o *__fastcall ClassBoardResourceCatalogStandalone__get_BOARD_BG_MODEL_PATH(
        ClassBoardResourceCatalogStandalone_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B19717 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_4551/*"ClassBoard/Bg/ClassBoardBg"*/, method, v2);
    byte_4B19717 = 1;
  }
  return (System_String_o *)StringLiteral_4551/*"ClassBoard/Bg/ClassBoardBg"*/;
}


System_String_o *__fastcall ClassBoardResourceCatalogStandalone__get_BOARD_UI_PATH(
        ClassBoardResourceCatalogStandalone_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B19715 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_4561/*"ClassBoard/ClassBoardUI"*/, method, v2);
    byte_4B19715 = 1;
  }
  return (System_String_o *)StringLiteral_4561/*"ClassBoard/ClassBoardUI"*/;
}


System_String_o *__fastcall ClassBoardResourceCatalogStandalone__get_CLASS_UI_ATLAS_PATH(
        ClassBoardResourceCatalogStandalone_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B19719 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_4565/*"ClassBoard/UI/DownloadClassBoardClassUIAtlas"*/, method, v2);
    byte_4B19719 = 1;
  }
  return (System_String_o *)StringLiteral_4565/*"ClassBoard/UI/DownloadClassBoardClassUIAtlas"*/;
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
  __int64 v2; // x2

  if ( (byte_4B19710 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_4553/*"ClassBoard/ClassBoardDisableOpenDialog"*/, method, v2);
    byte_4B19710 = 1;
  }
  return (System_String_o *)StringLiteral_4553/*"ClassBoard/ClassBoardDisableOpenDialog"*/;
}


System_String_o *__fastcall ClassBoardResourceCatalogStandalone__get_ICON_ATLAS_PATH(
        ClassBoardResourceCatalogStandalone_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B19716 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_4562/*"ClassBoard/Icon/DownloadClassBoardIconAtlas"*/, method, v2);
    byte_4B19716 = 1;
  }
  return (System_String_o *)StringLiteral_4562/*"ClassBoard/Icon/DownloadClassBoardIconAtlas"*/;
}


System_String_o *__fastcall ClassBoardResourceCatalogStandalone__get_LINE_PATH(
        ClassBoardResourceCatalogStandalone_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B1970C & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_4554/*"ClassBoard/ClassBoardLine"*/, method, v2);
    byte_4B1970C = 1;
  }
  return (System_String_o *)StringLiteral_4554/*"ClassBoard/ClassBoardLine"*/;
}


System_String_o *__fastcall ClassBoardResourceCatalogStandalone__get_LOCK_OPEN_CONFIRM_DIALOG_PATH(
        ClassBoardResourceCatalogStandalone_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B19712 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_4556/*"ClassBoard/ClassBoardLockOpenConfirmDialog"*/, method, v2);
    byte_4B19712 = 1;
  }
  return (System_String_o *)StringLiteral_4556/*"ClassBoard/ClassBoardLockOpenConfirmDialog"*/;
}


System_String_o *__fastcall ClassBoardResourceCatalogStandalone__get_LOCK_PATH(
        ClassBoardResourceCatalogStandalone_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B1970E & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_4555/*"ClassBoard/ClassBoardLock"*/, method, v2);
    byte_4B1970E = 1;
  }
  return (System_String_o *)StringLiteral_4555/*"ClassBoard/ClassBoardLock"*/;
}


System_String_o *__fastcall ClassBoardResourceCatalogStandalone__get_LOCK_RELEASE_CONDITION_DIALOG_PATH(
        ClassBoardResourceCatalogStandalone_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B19713 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_4557/*"ClassBoard/ClassBoardLockReleaseConditionDialog"*/, method, v2);
    byte_4B19713 = 1;
  }
  return (System_String_o *)StringLiteral_4557/*"ClassBoard/ClassBoardLockReleaseConditionDialog"*/;
}


System_String_o *__fastcall ClassBoardResourceCatalogStandalone__get_SQUARE_DETAIL_DIALOG_PATH(
        ClassBoardResourceCatalogStandalone_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B19714 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_4559/*"ClassBoard/ClassBoardSquareDetailDialog"*/, method, v2);
    byte_4B19714 = 1;
  }
  return (System_String_o *)StringLiteral_4559/*"ClassBoard/ClassBoardSquareDetailDialog"*/;
}


System_String_o *__fastcall ClassBoardResourceCatalogStandalone__get_SQUARE_OPEN_CONFIRM_DIALOG_PATH(
        ClassBoardResourceCatalogStandalone_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B19711 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_4560/*"ClassBoard/ClassBoardSquareOpenConfirmDialog"*/, method, v2);
    byte_4B19711 = 1;
  }
  return (System_String_o *)StringLiteral_4560/*"ClassBoard/ClassBoardSquareOpenConfirmDialog"*/;
}


System_String_o *__fastcall ClassBoardResourceCatalogStandalone__get_SQUARE_PATH(
        ClassBoardResourceCatalogStandalone_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B1970D & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_4558/*"ClassBoard/ClassBoardSquare"*/, method, v2);
    byte_4B1970D = 1;
  }
  return (System_String_o *)StringLiteral_4558/*"ClassBoard/ClassBoardSquare"*/;
}


System_String_o *__fastcall ClassBoardResourceCatalogStandalone__get_UI_ATLAS_PATH(
        ClassBoardResourceCatalogStandalone_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B19718 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_4566/*"ClassBoard/UI/DownloadClassBoardUIAtlas"*/, method, v2);
    byte_4B19718 = 1;
  }
  return (System_String_o *)StringLiteral_4566/*"ClassBoard/UI/DownloadClassBoardUIAtlas"*/;
}