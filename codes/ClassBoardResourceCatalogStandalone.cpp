void __fastcall ClassBoardResourceCatalogStandalone___ctor(
        ClassBoardResourceCatalogStandalone_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v5; // x20
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_42EA85F & 1) == 0 )
  {
    sub_B5D5C4(&ClassBoardResourceContents_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EA85F = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v5 = (Il2CppObject *)sub_B5D694(ClassBoardResourceContents_TypeInfo);
  System_Object___ctor(v5, 0LL);
  this->fields._Contents_k__BackingField = (struct ClassBoardResourceContents_o *)v5;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v5, v6, v7, v8, v9, v10, v11);
}


ClassBoardBlank_o *__fastcall ClassBoardResourceCatalogStandalone__GetUniqueBlankObject(
        ClassBoardResourceCatalogStandalone_o *this,
        int32_t assetId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_String_o *v5; // x19
  System_String_o *v6; // x0
  System_String_o *v7; // x0
  int32_t v9; // [xsp+Ch] [xbp-14h] BYREF

  v9 = assetId;
  if ( (byte_42EA862 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Resources_Load_ClassBoardBlank___, assetId, (_DWORD)method, v3);
    byte_42EA862 = 1;
  }
  v5 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, Il2CppMethodPointer, const MethodInfo *))this->klass->vtable._14_get_BLANK_PATH.method)(
                            this,
                            this->klass->vtable._15_get_DISABLE_OPEN_DIALOG_PATH.methodPtr,
                            method);
  v6 = System_Int32__ToString((int32_t)&v9, 0LL);
  v7 = System_String__Concat_44577788(v5, v6, 0LL);
  return (ClassBoardBlank_o *)UnityEngine_Resources__Load_UIAtlas_(
                                v7,
                                (const MethodInfo_1E6964C *)Method_UnityEngine_Resources_Load_ClassBoardBlank___);
}


ClassBoardLock_o *__fastcall ClassBoardResourceCatalogStandalone__GetUniqueLockObject(
        ClassBoardResourceCatalogStandalone_o *this,
        int32_t assetId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_String_o *v5; // x19
  System_String_o *v6; // x0
  System_String_o *v7; // x0
  int32_t v9; // [xsp+Ch] [xbp-14h] BYREF

  v9 = assetId;
  if ( (byte_42EA863 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Resources_Load_ClassBoardLock___, assetId, (_DWORD)method, v3);
    byte_42EA863 = 1;
  }
  v5 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, Il2CppMethodPointer, const MethodInfo *))this->klass->vtable._13_get_LOCK_PATH.method)(
                            this,
                            this->klass->vtable._14_get_BLANK_PATH.methodPtr,
                            method);
  v6 = System_Int32__ToString((int32_t)&v9, 0LL);
  v7 = System_String__Concat_44577788(v5, v6, 0LL);
  return (ClassBoardLock_o *)UnityEngine_Resources__Load_UIAtlas_(
                               v7,
                               (const MethodInfo_1E6964C *)Method_UnityEngine_Resources_Load_ClassBoardLock___);
}


ClassBoardSquare_o *__fastcall ClassBoardResourceCatalogStandalone__GetUniqueSquareObject(
        ClassBoardResourceCatalogStandalone_o *this,
        int32_t assetId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_String_o *v5; // x19
  System_String_o *v6; // x0
  System_String_o *v7; // x0
  int32_t v9; // [xsp+Ch] [xbp-14h] BYREF

  v9 = assetId;
  if ( (byte_42EA861 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Resources_Load_ClassBoardSquare___, assetId, (_DWORD)method, v3);
    byte_42EA861 = 1;
  }
  v5 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, Il2CppMethodPointer, const MethodInfo *))this->klass->vtable._12_get_SQUARE_PATH.method)(
                            this,
                            this->klass->vtable._13_get_LOCK_PATH.methodPtr,
                            method);
  v6 = System_Int32__ToString((int32_t)&v9, 0LL);
  v7 = System_String__Concat_44577788(v5, v6, 0LL);
  return (ClassBoardSquare_o *)UnityEngine_Resources__Load_UIAtlas_(
                                 v7,
                                 (const MethodInfo_1E6964C *)Method_UnityEngine_Resources_Load_ClassBoardSquare___);
}


void __fastcall ClassBoardResourceCatalogStandalone__LoadSystemAsset(
        ClassBoardResourceCatalogStandalone_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  System_String_o *v38; // x0
  System_String_o *v39; // x0
  System_String_o *v40; // x0
  ClassBoardLock_o *v41; // x23
  System_String_o *v42; // x0
  ClassBoardBlank_o *v43; // x24
  System_String_o *v44; // x0
  ClassBoardDisableOpenDialog_o *v45; // x27
  System_String_o *v46; // x0
  ClassBoardSquareOpenConfirmDialog_o *v47; // x28
  System_String_o *v48; // x0
  ClassBoardLockOpenConfirmDialog_o *v49; // x19
  System_String_o *v50; // x0
  ClassBoardLockReleaseConditionDialog_o *v51; // x21
  System_String_o *v52; // x0
  ClassBoardSquareDetailDialog_o *v53; // x22
  System_String_o *v54; // x0
  ClassBoardUIController_o *v55; // x26
  System_String_o *v56; // x0
  char *Contents_k__BackingField; // x0
  __int64 v58; // x1
  const MethodInfo *v59; // x5
  System_Int32_array **v60; // x25
  const MethodInfo *v61; // x6
  ClassBoardResourceContents_o *v62; // x19
  System_String_o *v63; // x22
  AtlasManagerUnit_o *v64; // x21
  System_String_o *v65; // x23
  AtlasManagerUnit_o *v66; // x22
  System_String_o *v67; // x24
  AtlasManagerUnit_o *v68; // x23
  const MethodInfo *v69; // x5
  System_String_array **v70; // x2
  System_String_array **v71; // x3
  System_Boolean_array **v72; // x4
  System_Int32_array **v73; // x5
  System_Int32_array *v74; // x6
  System_Int32_array *v75; // x7
  ClassBoardLine_o *v76; // [xsp+8h] [xbp-68h]
  ClassBoardSquare_o *UIAtlas; // [xsp+10h] [xbp-60h]

  if ( (byte_42EA860 & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManagerUnit_TypeInfo, (_DWORD)callback, (_DWORD)method, v3);
    sub_B5D5C4(&Method_UnityEngine_Resources_Load_ClassBoardBackground___, v5, v6, v7);
    sub_B5D5C4(&Method_UnityEngine_Resources_Load_ClassBoardBlank___, v8, v9, v10);
    sub_B5D5C4(&Method_UnityEngine_Resources_Load_ClassBoardDisableOpenDialog___, v11, v12, v13);
    sub_B5D5C4(&Method_UnityEngine_Resources_Load_ClassBoardLine___, v14, v15, v16);
    sub_B5D5C4(&Method_UnityEngine_Resources_Load_ClassBoardLockOpenConfirmDialog___, v17, v18, v19);
    sub_B5D5C4(&Method_UnityEngine_Resources_Load_ClassBoardLockReleaseConditionDialog___, v20, v21, v22);
    sub_B5D5C4(&Method_UnityEngine_Resources_Load_ClassBoardLock___, v23, v24, v25);
    sub_B5D5C4(&Method_UnityEngine_Resources_Load_ClassBoardSquareDetailDialog___, v26, v27, v28);
    sub_B5D5C4(&Method_UnityEngine_Resources_Load_ClassBoardSquareOpenConfirmDialog___, v29, v30, v31);
    sub_B5D5C4(&Method_UnityEngine_Resources_Load_ClassBoardSquare___, v32, v33, v34);
    sub_B5D5C4(&Method_UnityEngine_Resources_Load_ClassBoardUIController___, v35, v36, v37);
    byte_42EA860 = 1;
  }
  v38 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, Il2CppMethodPointer, const MethodInfo *))this->klass->vtable._12_get_SQUARE_PATH.method)(
                             this,
                             this->klass->vtable._13_get_LOCK_PATH.methodPtr,
                             method);
  UIAtlas = (ClassBoardSquare_o *)UnityEngine_Resources__Load_UIAtlas_(
                                    v38,
                                    (const MethodInfo_1E6964C *)Method_UnityEngine_Resources_Load_ClassBoardSquare___);
  v39 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, Il2CppMethodPointer))this->klass->vtable._11_get_LINE_PATH.method)(
                             this,
                             this->klass->vtable._12_get_SQUARE_PATH.methodPtr);
  v76 = (ClassBoardLine_o *)UnityEngine_Resources__Load_UIAtlas_(
                              v39,
                              (const MethodInfo_1E6964C *)Method_UnityEngine_Resources_Load_ClassBoardLine___);
  v40 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, Il2CppMethodPointer))this->klass->vtable._13_get_LOCK_PATH.method)(
                             this,
                             this->klass->vtable._14_get_BLANK_PATH.methodPtr);
  v41 = (ClassBoardLock_o *)UnityEngine_Resources__Load_UIAtlas_(
                              v40,
                              (const MethodInfo_1E6964C *)Method_UnityEngine_Resources_Load_ClassBoardLock___);
  v42 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, Il2CppMethodPointer))this->klass->vtable._14_get_BLANK_PATH.method)(
                             this,
                             this->klass->vtable._15_get_DISABLE_OPEN_DIALOG_PATH.methodPtr);
  v43 = (ClassBoardBlank_o *)UnityEngine_Resources__Load_UIAtlas_(
                               v42,
                               (const MethodInfo_1E6964C *)Method_UnityEngine_Resources_Load_ClassBoardBlank___);
  v44 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, Il2CppMethodPointer))this->klass->vtable._15_get_DISABLE_OPEN_DIALOG_PATH.method)(
                             this,
                             this->klass->vtable._16_get_SQUARE_OPEN_CONFIRM_DIALOG_PATH.methodPtr);
  v45 = (ClassBoardDisableOpenDialog_o *)UnityEngine_Resources__Load_UIAtlas_(
                                           v44,
                                           (const MethodInfo_1E6964C *)Method_UnityEngine_Resources_Load_ClassBoardDisableOpenDialog___);
  v46 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, Il2CppMethodPointer))this->klass->vtable._16_get_SQUARE_OPEN_CONFIRM_DIALOG_PATH.method)(
                             this,
                             this->klass->vtable._17_get_LOCK_OPEN_CONFIRM_DIALOG_PATH.methodPtr);
  v47 = (ClassBoardSquareOpenConfirmDialog_o *)UnityEngine_Resources__Load_UIAtlas_(
                                                 v46,
                                                 (const MethodInfo_1E6964C *)Method_UnityEngine_Resources_Load_ClassBoardSquareOpenConfirmDialog___);
  v48 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, Il2CppMethodPointer))this->klass->vtable._17_get_LOCK_OPEN_CONFIRM_DIALOG_PATH.method)(
                             this,
                             this->klass->vtable._18_get_LOCK_RELEASE_CONDITION_DIALOG_PATH.methodPtr);
  v49 = (ClassBoardLockOpenConfirmDialog_o *)UnityEngine_Resources__Load_UIAtlas_(
                                               v48,
                                               (const MethodInfo_1E6964C *)Method_UnityEngine_Resources_Load_ClassBoardLockOpenConfirmDialog___);
  v50 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, Il2CppMethodPointer))this->klass->vtable._18_get_LOCK_RELEASE_CONDITION_DIALOG_PATH.method)(
                             this,
                             this->klass->vtable._19_get_SQUARE_DETAIL_DIALOG_PATH.methodPtr);
  v51 = (ClassBoardLockReleaseConditionDialog_o *)UnityEngine_Resources__Load_UIAtlas_(
                                                    v50,
                                                    (const MethodInfo_1E6964C *)Method_UnityEngine_Resources_Load_ClassBoardLockReleaseConditionDialog___);
  v52 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, Il2CppMethodPointer))this->klass->vtable._19_get_SQUARE_DETAIL_DIALOG_PATH.method)(
                             this,
                             this->klass->vtable._20_get_BOARD_UI_PATH.methodPtr);
  v53 = (ClassBoardSquareDetailDialog_o *)UnityEngine_Resources__Load_UIAtlas_(
                                            v52,
                                            (const MethodInfo_1E6964C *)Method_UnityEngine_Resources_Load_ClassBoardSquareDetailDialog___);
  v54 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, Il2CppMethodPointer))this->klass->vtable._20_get_BOARD_UI_PATH.method)(
                             this,
                             this->klass->vtable._21_get_ICON_ATLAS_PATH.methodPtr);
  v55 = (ClassBoardUIController_o *)UnityEngine_Resources__Load_UIAtlas_(
                                      v54,
                                      (const MethodInfo_1E6964C *)Method_UnityEngine_Resources_Load_ClassBoardUIController___);
  v56 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, Il2CppMethodPointer))this->klass->vtable._22_get_BOARD_BG_MODEL_PATH.method)(
                             this,
                             this->klass->vtable._23_get_UI_ATLAS_PATH.methodPtr);
  Contents_k__BackingField = (char *)UnityEngine_Resources__Load_UIAtlas_(
                                       v56,
                                       (const MethodInfo_1E6964C *)Method_UnityEngine_Resources_Load_ClassBoardBackground___);
  if ( !this->fields._Contents_k__BackingField )
    goto LABEL_9;
  v60 = (System_Int32_array **)Contents_k__BackingField;
  ClassBoardResourceContents__SetContents(this->fields._Contents_k__BackingField, UIAtlas, v76, v41, v43, v59);
  Contents_k__BackingField = (char *)this->fields._Contents_k__BackingField;
  if ( !Contents_k__BackingField )
    goto LABEL_9;
  ClassBoardResourceContents__SetContentsDialog(
    (ClassBoardResourceContents_o *)Contents_k__BackingField,
    v45,
    v47,
    v49,
    v51,
    v53,
    v61);
  v62 = this->fields._Contents_k__BackingField;
  v63 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, Il2CppMethodPointer))this->klass->vtable._23_get_UI_ATLAS_PATH.method)(
                             this,
                             this->klass->vtable._24_get_CLASS_UI_ATLAS_PATH.methodPtr);
  v64 = (AtlasManagerUnit_o *)sub_B5D694(AtlasManagerUnit_TypeInfo);
  AtlasManagerUnit___ctor(v64, v63, 0LL, 0LL);
  v65 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, Il2CppMethodPointer))this->klass->vtable._21_get_ICON_ATLAS_PATH.method)(
                             this,
                             this->klass->vtable._22_get_BOARD_BG_MODEL_PATH.methodPtr);
  v66 = (AtlasManagerUnit_o *)sub_B5D694(AtlasManagerUnit_TypeInfo);
  AtlasManagerUnit___ctor(v66, v65, 0LL, 0LL);
  v67 = (System_String_o *)((__int64 (__fastcall *)(ClassBoardResourceCatalogStandalone_o *, Il2CppMethodPointer))this->klass->vtable._24_get_CLASS_UI_ATLAS_PATH.method)(
                             this,
                             this->klass->vtable._25_LoadSystemAsset.methodPtr);
  v68 = (AtlasManagerUnit_o *)sub_B5D694(AtlasManagerUnit_TypeInfo);
  AtlasManagerUnit___ctor(v68, v67, 0LL, 0LL);
  if ( !v62
    || (ClassBoardResourceContents__SetContentsUI(v62, v55, v64, v66, v68, v69),
        (Contents_k__BackingField = (char *)this->fields._Contents_k__BackingField) == 0LL)
    || (*((_QWORD *)Contents_k__BackingField + 12) = v60,
        sub_B5D560((BattleServantConfConponent_o *)(Contents_k__BackingField + 96), v60, v70, v71, v72, v73, v74, v75),
        (Contents_k__BackingField = (char *)callback) == 0LL) )
  {
LABEL_9:
    sub_B5D69C(Contents_k__BackingField, v58);
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
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EA854 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_4052/*"ClassBoard/ClassBoardBlank"*/, (_DWORD)method, v2, v3);
    byte_42EA854 = 1;
  }
  return (System_String_o *)StringLiteral_4052/*"ClassBoard/ClassBoardBlank"*/;
}


System_String_o *__fastcall ClassBoardResourceCatalogStandalone__get_BOARD_BG_MODEL_PATH(
        ClassBoardResourceCatalogStandalone_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EA85C & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_4051/*"ClassBoard/Bg/ClassBoardBg"*/, (_DWORD)method, v2, v3);
    byte_42EA85C = 1;
  }
  return (System_String_o *)StringLiteral_4051/*"ClassBoard/Bg/ClassBoardBg"*/;
}


System_String_o *__fastcall ClassBoardResourceCatalogStandalone__get_BOARD_UI_PATH(
        ClassBoardResourceCatalogStandalone_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EA85A & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_4061/*"ClassBoard/ClassBoardUI"*/, (_DWORD)method, v2, v3);
    byte_42EA85A = 1;
  }
  return (System_String_o *)StringLiteral_4061/*"ClassBoard/ClassBoardUI"*/;
}


System_String_o *__fastcall ClassBoardResourceCatalogStandalone__get_CLASS_UI_ATLAS_PATH(
        ClassBoardResourceCatalogStandalone_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EA85E & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_4065/*"ClassBoard/UI/DownloadClassBoardClassUIAtlas"*/, (_DWORD)method, v2, v3);
    byte_42EA85E = 1;
  }
  return (System_String_o *)StringLiteral_4065/*"ClassBoard/UI/DownloadClassBoardClassUIAtlas"*/;
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
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EA855 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_4053/*"ClassBoard/ClassBoardDisableOpenDialog"*/, (_DWORD)method, v2, v3);
    byte_42EA855 = 1;
  }
  return (System_String_o *)StringLiteral_4053/*"ClassBoard/ClassBoardDisableOpenDialog"*/;
}


System_String_o *__fastcall ClassBoardResourceCatalogStandalone__get_ICON_ATLAS_PATH(
        ClassBoardResourceCatalogStandalone_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EA85B & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_4062/*"ClassBoard/Icon/DownloadClassBoardIconAtlas"*/, (_DWORD)method, v2, v3);
    byte_42EA85B = 1;
  }
  return (System_String_o *)StringLiteral_4062/*"ClassBoard/Icon/DownloadClassBoardIconAtlas"*/;
}


System_String_o *__fastcall ClassBoardResourceCatalogStandalone__get_LINE_PATH(
        ClassBoardResourceCatalogStandalone_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EA851 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_4054/*"ClassBoard/ClassBoardLine"*/, (_DWORD)method, v2, v3);
    byte_42EA851 = 1;
  }
  return (System_String_o *)StringLiteral_4054/*"ClassBoard/ClassBoardLine"*/;
}


System_String_o *__fastcall ClassBoardResourceCatalogStandalone__get_LOCK_OPEN_CONFIRM_DIALOG_PATH(
        ClassBoardResourceCatalogStandalone_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EA857 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_4056/*"ClassBoard/ClassBoardLockOpenConfirmDialog"*/, (_DWORD)method, v2, v3);
    byte_42EA857 = 1;
  }
  return (System_String_o *)StringLiteral_4056/*"ClassBoard/ClassBoardLockOpenConfirmDialog"*/;
}


System_String_o *__fastcall ClassBoardResourceCatalogStandalone__get_LOCK_PATH(
        ClassBoardResourceCatalogStandalone_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EA853 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_4055/*"ClassBoard/ClassBoardLock"*/, (_DWORD)method, v2, v3);
    byte_42EA853 = 1;
  }
  return (System_String_o *)StringLiteral_4055/*"ClassBoard/ClassBoardLock"*/;
}


System_String_o *__fastcall ClassBoardResourceCatalogStandalone__get_LOCK_RELEASE_CONDITION_DIALOG_PATH(
        ClassBoardResourceCatalogStandalone_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EA858 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_4057/*"ClassBoard/ClassBoardLockReleaseConditionDialog"*/, (_DWORD)method, v2, v3);
    byte_42EA858 = 1;
  }
  return (System_String_o *)StringLiteral_4057/*"ClassBoard/ClassBoardLockReleaseConditionDialog"*/;
}


System_String_o *__fastcall ClassBoardResourceCatalogStandalone__get_SQUARE_DETAIL_DIALOG_PATH(
        ClassBoardResourceCatalogStandalone_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EA859 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_4059/*"ClassBoard/ClassBoardSquareDetailDialog"*/, (_DWORD)method, v2, v3);
    byte_42EA859 = 1;
  }
  return (System_String_o *)StringLiteral_4059/*"ClassBoard/ClassBoardSquareDetailDialog"*/;
}


System_String_o *__fastcall ClassBoardResourceCatalogStandalone__get_SQUARE_OPEN_CONFIRM_DIALOG_PATH(
        ClassBoardResourceCatalogStandalone_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EA856 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_4060/*"ClassBoard/ClassBoardSquareOpenConfirmDialog"*/, (_DWORD)method, v2, v3);
    byte_42EA856 = 1;
  }
  return (System_String_o *)StringLiteral_4060/*"ClassBoard/ClassBoardSquareOpenConfirmDialog"*/;
}


System_String_o *__fastcall ClassBoardResourceCatalogStandalone__get_SQUARE_PATH(
        ClassBoardResourceCatalogStandalone_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EA852 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_4058/*"ClassBoard/ClassBoardSquare"*/, (_DWORD)method, v2, v3);
    byte_42EA852 = 1;
  }
  return (System_String_o *)StringLiteral_4058/*"ClassBoard/ClassBoardSquare"*/;
}


System_String_o *__fastcall ClassBoardResourceCatalogStandalone__get_UI_ATLAS_PATH(
        ClassBoardResourceCatalogStandalone_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EA85D & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_4066/*"ClassBoard/UI/DownloadClassBoardUIAtlas"*/, (_DWORD)method, v2, v3);
    byte_42EA85D = 1;
  }
  return (System_String_o *)StringLiteral_4066/*"ClassBoard/UI/DownloadClassBoardUIAtlas"*/;
}