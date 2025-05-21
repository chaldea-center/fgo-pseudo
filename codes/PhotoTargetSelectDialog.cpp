void __fastcall PhotoTargetSelectDialog___ctor(PhotoTargetSelectDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  const MethodInfo *v7; // x3
  unsigned int v8; // w8
  __int64 v9; // x1
  const MethodInfo *v10; // x3
  unsigned int v11; // w8

  if ( (byte_4B40135 & 1) == 0 )
  {
    sub_1BDB878(&BaseDialog_TypeInfo, method);
    sub_1BDB878(&UnityEngine_Vector2___TypeInfo, v3);
    byte_4B40135 = 1;
  }
  v4 = sub_1BDB920(UnityEngine_Vector2___TypeInfo, 3LL);
  if ( !v4 )
    goto LABEL_16;
  v8 = *(_DWORD *)(v4 + 24);
  v9 = v4;
  if ( !v8
    || (*(_QWORD *)(v4 + 32) = 0xC1C80000C35E0000LL, v8 == 1)
    || (*(_QWORD *)(v4 + 40) = 0xC1C8000000000000LL, v8 <= 2) )
  {
LABEL_15:
    sub_1BDBADC(v4, v9, v6);
  }
  *(_QWORD *)(v4 + 48) = 0xC1C80000435E0000LL;
  this->fields.threeBtnPos = (struct UnityEngine_Vector2_array *)v4;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.threeBtnPos, v4, v6, v7);
  v4 = sub_1BDB920(UnityEngine_Vector2___TypeInfo, 4LL);
  if ( !v4 )
LABEL_16:
    sub_1BDBAD4(v4, v5);
  v11 = *(_DWORD *)(v4 + 24);
  v9 = v4;
  if ( !v11 )
    goto LABEL_15;
  *(_QWORD *)(v4 + 32) = 0x41300000C30C0000LL;
  if ( v11 == 1 )
    goto LABEL_15;
  *(_QWORD *)(v4 + 40) = 0x41300000430C0000LL;
  if ( v11 <= 2 )
    goto LABEL_15;
  *(_QWORD *)(v4 + 48) = 0xC2780000C30C0000LL;
  if ( v11 == 3 )
    goto LABEL_15;
  *(_QWORD *)(v4 + 56) = 0xC2780000430C0000LL;
  this->fields.fourBtnPos = (struct UnityEngine_Vector2_array *)v4;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.fourBtnPos, v4, v6, v10);
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall PhotoTargetSelectDialog__Awake(PhotoTargetSelectDialog_o *this, const MethodInfo *method)
{
  BaseDialog__Awake((BaseDialog_o *)this, 0LL);
}


void __fastcall PhotoTargetSelectDialog__CloseDialog(
        PhotoTargetSelectDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  System_Action_o *v14; // x20

  if ( (byte_4B40133 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, callback);
    sub_1BDB878(&Method_PhotoTargetSelectDialog___c__DisplayClass33_0__CloseDialog_b__0__, v5);
    sub_1BDB878(&PhotoTargetSelectDialog___c__DisplayClass33_0_TypeInfo, v6);
    byte_4B40133 = 1;
  }
  v7 = sub_1BDBAC4(PhotoTargetSelectDialog___c__DisplayClass33_0_TypeInfo);
  PhotoTargetSelectDialog___c__DisplayClass33_0___ctor((PhotoTargetSelectDialog___c__DisplayClass33_0_o *)v7, 0LL);
  if ( !v7 )
    sub_1BDBAD4(v8, v9);
  *(_QWORD *)(v7 + 16) = this;
  sub_1BDB81C((CGThumbnailListItem_o *)(v7 + 16), (int32_t)this, v10, v11);
  *(_QWORD *)(v7 + 24) = callback;
  sub_1BDB81C((CGThumbnailListItem_o *)(v7 + 24), (int32_t)callback, v12, v13);
  this->fields.state = 4;
  v14 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
  System_Action___ctor(
    v14,
    (Il2CppObject *)v7,
    Method_PhotoTargetSelectDialog___c__DisplayClass33_0__CloseDialog_b__0__,
    0LL);
  BaseDialog__Close((BaseDialog_o *)this, v14, 0LL);
}


void __fastcall PhotoTargetSelectDialog__Init(PhotoTargetSelectDialog_o *this, const MethodInfo *method)
{
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PhotoTargetSelectDialog__OnClickDecideButton(
        PhotoTargetSelectDialog_o *this,
        int32_t type,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x20
  __int64 v9; // x0
  __int64 v10; // x1
  _QWORD *v11; // x0
  System_Reflection_MethodBase_o *v12; // x0
  struct System_Action_PhotoUtility_TargetType__o *decideCallBack; // x1
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  System_Action_o *v18; // x21
  const MethodInfo *v19; // x2

  if ( (byte_4B40131 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, *(_QWORD *)&type);
    sub_1BDB878(&Method_PhotoTargetSelectDialog_OnClickDecideButton__, v5);
    sub_1BDB878(&Method_PhotoTargetSelectDialog___c__DisplayClass31_0__OnClickDecideButton_b__0__, v6);
    sub_1BDB878(&PhotoTargetSelectDialog___c__DisplayClass31_0_TypeInfo, v7);
    byte_4B40131 = 1;
  }
  v8 = sub_1BDBAC4(PhotoTargetSelectDialog___c__DisplayClass31_0_TypeInfo);
  PhotoTargetSelectDialog___c__DisplayClass31_0___ctor((PhotoTargetSelectDialog___c__DisplayClass31_0_o *)v8, 0LL);
  if ( !v8 )
    sub_1BDBAD4(v9, v10);
  *(_DWORD *)(v8 + 24) = type;
  if ( this->fields.state == 2 )
  {
    v11 = Method_PhotoTargetSelectDialog_OnClickDecideButton__;
    if ( (*((_BYTE *)Method_PhotoTargetSelectDialog_OnClickDecideButton__ + 83) & 2) != 0 )
      v11 = (_QWORD *)sub_1BDB890(Method_PhotoTargetSelectDialog_OnClickDecideButton__);
    v12 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v11, v11[4]);
    OverwriteAssetSoundName__PlaySystemSe(v12, 8 * (*(_DWORD *)(v8 + 24) == 3), 0, 0LL);
    decideCallBack = this->fields.decideCallBack;
    *(_QWORD *)(v8 + 16) = decideCallBack;
    sub_1BDB81C((CGThumbnailListItem_o *)(v8 + 16), (int32_t)decideCallBack, v14, v15);
    this->fields.decideCallBack = 0LL;
    sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.decideCallBack, 0, v16, v17);
    v18 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
    System_Action___ctor(
      v18,
      (Il2CppObject *)v8,
      Method_PhotoTargetSelectDialog___c__DisplayClass31_0__OnClickDecideButton_b__0__,
      0LL);
    PhotoTargetSelectDialog__CloseDialog(this, v18, v19);
  }
}


void __fastcall PhotoTargetSelectDialog__OnClickMasterButton(PhotoTargetSelectDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PhotoTargetSelectDialog__OnClickDecideButton(this, 1, v2);
}


void __fastcall PhotoTargetSelectDialog__OnClickNoneButton(PhotoTargetSelectDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PhotoTargetSelectDialog__OnClickDecideButton(this, 3, v2);
}


void __fastcall PhotoTargetSelectDialog__OnClickServantButton(
        PhotoTargetSelectDialog_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PhotoTargetSelectDialog__OnClickDecideButton(this, 0, v2);
}


void __fastcall PhotoTargetSelectDialog__OnClickStaffButton(PhotoTargetSelectDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PhotoTargetSelectDialog__OnClickDecideButton(this, 2, v2);
}


void __fastcall PhotoTargetSelectDialog__OnclickCancelButton(PhotoTargetSelectDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  System_Action_o *cancelCallBack; // x20
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  const MethodInfo *v8; // x2

  if ( (byte_4B40132 & 1) == 0 )
  {
    sub_1BDB878(&Method_PhotoTargetSelectDialog_OnclickCancelButton__, method);
    byte_4B40132 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_PhotoTargetSelectDialog_OnclickCancelButton__;
    if ( (*((_BYTE *)Method_PhotoTargetSelectDialog_OnclickCancelButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BDB890(Method_PhotoTargetSelectDialog_OnclickCancelButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0LL);
    cancelCallBack = this->fields.cancelCallBack;
    this->fields.cancelCallBack = 0LL;
    sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.cancelCallBack, 0, v6, v7);
    PhotoTargetSelectDialog__CloseDialog(this, cancelCallBack, v8);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PhotoTargetSelectDialog__Open(
        PhotoTargetSelectDialog_o *this,
        int32_t selectedTargetType,
        int32_t index,
        System_Action_PhotoUtility_TargetType__o *decide,
        System_Action_o *cancel,
        System_Action_bool__o *setMaskMethod,
        const MethodInfo *method)
{
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x22
  __int64 v17; // x0
  __int64 v18; // x1
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  const MethodInfo *v23; // x3
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  System_Action_o *v28; // x20

  if ( (byte_4B4012F & 1) == 0 )
  {
    sub_1BDB878(&Method_ActionExtensions_Call_bool___, *(_QWORD *)&selectedTargetType);
    sub_1BDB878(&System_Action_TypeInfo, v13);
    sub_1BDB878(&Method_PhotoTargetSelectDialog___c__DisplayClass25_0__Open_b__0__, v14);
    sub_1BDB878(&PhotoTargetSelectDialog___c__DisplayClass25_0_TypeInfo, v15);
    byte_4B4012F = 1;
  }
  v16 = sub_1BDBAC4(PhotoTargetSelectDialog___c__DisplayClass25_0_TypeInfo);
  PhotoTargetSelectDialog___c__DisplayClass25_0___ctor((PhotoTargetSelectDialog___c__DisplayClass25_0_o *)v16, 0LL);
  if ( !v16 )
    sub_1BDBAD4(v17, v18);
  *(_QWORD *)(v16 + 16) = setMaskMethod;
  sub_1BDB81C((CGThumbnailListItem_o *)(v16 + 16), (int32_t)setMaskMethod, v19, v20);
  *(_QWORD *)(v16 + 24) = this;
  sub_1BDB81C((CGThumbnailListItem_o *)(v16 + 24), (int32_t)this, v21, v22);
  if ( !this->fields.state )
  {
    PhotoTargetSelectDialog__SetBtn(this, selectedTargetType, index, v23);
    this->fields.decideCallBack = decide;
    sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.decideCallBack, (int32_t)decide, v24, v25);
    this->fields.cancelCallBack = cancel;
    sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.cancelCallBack, (int32_t)cancel, v26, v27);
    ActionExtensions__Call_bool_(
      *(System_Action_T__o **)(v16 + 16),
      1,
      (const MethodInfo_2F82EDC *)Method_ActionExtensions_Call_bool___);
    this->fields.state = 1;
    v28 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
    System_Action___ctor(
      v28,
      (Il2CppObject *)v16,
      Method_PhotoTargetSelectDialog___c__DisplayClass25_0__Open_b__0__,
      0LL);
    BaseDialog__Open((BaseDialog_o *)this, v28, 0, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PhotoTargetSelectDialog__SetBtn(
        PhotoTargetSelectDialog_o *this,
        int32_t type,
        int32_t index,
        const MethodInfo *method)
{
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
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 *v23; // x8
  System_String_o *v24; // x1
  UILabel_o *titleLabel; // x0
  __int64 *v26; // x8
  UILabel_o *servantButtonLabel; // x21
  UILabel_o *masterButtonLabel; // x21
  UILabel_o *staffButtonLabel; // x21
  UILabel_o *noneButtonLabel; // x21
  UILabel_o *cancelButtonLabel; // x21
  UILabel_o *staffButtonMaskLabel; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v34; // x2
  struct UnityEngine_Vector2_array *threeBtnPos; // x8
  struct UnityEngine_Vector2_array *v36; // x8
  struct UnityEngine_Vector2_array *v37; // x8
  struct UnityEngine_Vector2_array *v38; // x8
  char v39; // w1
  UnityEngine_GameObject_o *v40; // x0
  struct UnityEngine_Vector2_array *fourBtnPos; // x8
  struct UnityEngine_Vector2_array *v42; // x8
  struct UnityEngine_Vector2_array *v43; // x8
  struct UnityEngine_Vector2_array *v44; // x8

  if ( (byte_4B40130 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMaster_StaffPhotoMaster___, *(_QWORD *)&type);
    sub_1BDB878(&DataManager_TypeInfo, v7);
    sub_1BDB878(&LocalizationManager_TypeInfo, v8);
    sub_1BDB878(&StringLiteral_10365/*"PHOTO_TARGET_CHANGE_DIALOG_MESSAGE"*/, v9);
    sub_1BDB878(&StringLiteral_10374/*"PHOTO_TARGET_SELECT_DIALOG_STAFF_BUTTON_MASK_2"*/, v10);
    sub_1BDB878(&StringLiteral_10373/*"PHOTO_TARGET_SELECT_DIALOG_STAFF_BUTTON_MASK_1"*/, v11);
    sub_1BDB878(&StringLiteral_10369/*"PHOTO_TARGET_SELECT_DIALOG_MESSAGE_RIGHT"*/, v12);
    sub_1BDB878(&StringLiteral_10368/*"PHOTO_TARGET_SELECT_DIALOG_MESSAGE_LEFT"*/, v13);
    sub_1BDB878(&StringLiteral_10367/*"PHOTO_TARGET_SELECT_DIALOG_MASTER_BUTTON"*/, v14);
    sub_1BDB878(&StringLiteral_10376/*"PHOTO_TARGET_SELECT_DIALOG_TITLE_RIGHT"*/, v15);
    sub_1BDB878(&StringLiteral_10372/*"PHOTO_TARGET_SELECT_DIALOG_STAFF_BUTTON"*/, v16);
    sub_1BDB878(&StringLiteral_3716/*"COMMON_CONFIRM_CANCEL"*/, v17);
    sub_1BDB878(&StringLiteral_10366/*"PHOTO_TARGET_CHANGE_DIALOG_TITLE"*/, v18);
    sub_1BDB878(&StringLiteral_10371/*"PHOTO_TARGET_SELECT_DIALOG_SERVANT_BUTTON"*/, v19);
    sub_1BDB878(&StringLiteral_10370/*"PHOTO_TARGET_SELECT_DIALOG_NONE_BUTTON"*/, v20);
    sub_1BDB878(&StringLiteral_10375/*"PHOTO_TARGET_SELECT_DIALOG_TITLE_LEFT"*/, v21);
    sub_1BDB878(&StringLiteral_1/*""*/, v22);
    byte_4B40130 = 1;
  }
  switch ( index )
  {
    case 0:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v23 = &StringLiteral_10366/*"PHOTO_TARGET_CHANGE_DIALOG_TITLE"*/;
      goto LABEL_15;
    case 2:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v23 = &StringLiteral_10376/*"PHOTO_TARGET_SELECT_DIALOG_TITLE_RIGHT"*/;
      goto LABEL_15;
    case 1:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v23 = &StringLiteral_10375/*"PHOTO_TARGET_SELECT_DIALOG_TITLE_LEFT"*/;
LABEL_15:
      v24 = LocalizationManager__Get((System_String_o *)*v23, 0LL);
      goto LABEL_17;
  }
  v24 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_17:
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_84;
  UILabel__set_text(titleLabel, v24, 0LL);
  if ( index )
  {
    if ( index == 2 )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v26 = &StringLiteral_10369/*"PHOTO_TARGET_SELECT_DIALOG_MESSAGE_RIGHT"*/;
    }
    else
    {
      if ( index != 1 )
      {
        v24 = (System_String_o *)StringLiteral_1/*""*/;
        goto LABEL_32;
      }
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v26 = &StringLiteral_10368/*"PHOTO_TARGET_SELECT_DIALOG_MESSAGE_LEFT"*/;
    }
  }
  else
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v26 = &StringLiteral_10365/*"PHOTO_TARGET_CHANGE_DIALOG_MESSAGE"*/;
  }
  v24 = LocalizationManager__Get((System_String_o *)*v26, 0LL);
LABEL_32:
  titleLabel = this->fields.messageLabel;
  if ( !titleLabel )
    goto LABEL_84;
  UILabel__set_text(titleLabel, v24, 0LL);
  servantButtonLabel = this->fields.servantButtonLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  titleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10371/*"PHOTO_TARGET_SELECT_DIALOG_SERVANT_BUTTON"*/, 0LL);
  if ( !servantButtonLabel )
    goto LABEL_84;
  UILabel__set_text(servantButtonLabel, (System_String_o *)titleLabel, 0LL);
  masterButtonLabel = this->fields.masterButtonLabel;
  titleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10367/*"PHOTO_TARGET_SELECT_DIALOG_MASTER_BUTTON"*/, 0LL);
  if ( !masterButtonLabel )
    goto LABEL_84;
  UILabel__set_text(masterButtonLabel, (System_String_o *)titleLabel, 0LL);
  staffButtonLabel = this->fields.staffButtonLabel;
  titleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10372/*"PHOTO_TARGET_SELECT_DIALOG_STAFF_BUTTON"*/, 0LL);
  if ( !staffButtonLabel )
    goto LABEL_84;
  UILabel__set_text(staffButtonLabel, (System_String_o *)titleLabel, 0LL);
  noneButtonLabel = this->fields.noneButtonLabel;
  titleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10370/*"PHOTO_TARGET_SELECT_DIALOG_NONE_BUTTON"*/, 0LL);
  if ( !noneButtonLabel )
    goto LABEL_84;
  UILabel__set_text(noneButtonLabel, (System_String_o *)titleLabel, 0LL);
  cancelButtonLabel = this->fields.cancelButtonLabel;
  titleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3716/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
  if ( !cancelButtonLabel )
    goto LABEL_84;
  UILabel__set_text(cancelButtonLabel, (System_String_o *)titleLabel, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  titleLabel = (UILabel_o *)DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_StaffPhotoMaster___);
  if ( !titleLabel )
    goto LABEL_84;
  titleLabel = (UILabel_o *)StaffPhotoMaster__GetEnableEntityNum((StaffPhotoMaster_o *)titleLabel, -1, 0LL);
  if ( type != 2 )
  {
    staffButtonMaskLabel = this->fields.staffButtonMaskLabel;
    this->fields.isEnableStaffBtn = (int)titleLabel > 0;
    if ( (int)titleLabel > 0 )
    {
      v24 = (System_String_o *)StringLiteral_1/*""*/;
      if ( !staffButtonMaskLabel )
        goto LABEL_84;
      goto LABEL_57;
    }
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    titleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10373/*"PHOTO_TARGET_SELECT_DIALOG_STAFF_BUTTON_MASK_1"*/, 0LL);
    v24 = (System_String_o *)titleLabel;
    if ( staffButtonMaskLabel )
      goto LABEL_57;
LABEL_84:
    sub_1BDBAD4(titleLabel, v24);
  }
  staffButtonMaskLabel = this->fields.staffButtonMaskLabel;
  this->fields.isEnableStaffBtn = (int)titleLabel > 1;
  if ( (int)titleLabel <= 1 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    titleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10374/*"PHOTO_TARGET_SELECT_DIALOG_STAFF_BUTTON_MASK_2"*/, 0LL);
    v24 = (System_String_o *)titleLabel;
  }
  else
  {
    v24 = (System_String_o *)StringLiteral_1/*""*/;
  }
  if ( !staffButtonMaskLabel )
    goto LABEL_84;
LABEL_57:
  UILabel__set_text(staffButtonMaskLabel, v24, 0LL);
  titleLabel = (UILabel_o *)this->fields.staffButton;
  if ( !titleLabel )
    goto LABEL_84;
  ((void (__fastcall *)(UILabel_o *, bool, Il2CppMethodPointer))titleLabel->klass->vtable._5_get_isAnchoredVertically.method)(
    titleLabel,
    this->fields.isEnableStaffBtn,
    titleLabel->klass->vtable._6_get_canBeAnchored.methodPtr);
  if ( (type | 2) == 3 )
  {
    titleLabel = this->fields.messageLabel;
    if ( !titleLabel )
      goto LABEL_84;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)titleLabel, 0LL);
    GameObjectExtensions__SetLocalPositionY(gameObject, 64.0, 0LL);
    threeBtnPos = this->fields.threeBtnPos;
    if ( !threeBtnPos )
      goto LABEL_84;
    if ( threeBtnPos->max_length )
    {
      GameObjectExtensions__SetLocalPosition_35211000(
        this->fields.servantButtonObj,
        *(UnityEngine_Vector2_o *)&threeBtnPos->m_Items[0].fields.y,
        0LL);
      v36 = this->fields.threeBtnPos;
      if ( !v36 )
        goto LABEL_84;
      if ( v36->max_length > 1 )
      {
        GameObjectExtensions__SetLocalPosition_35211000(
          this->fields.staffButtonObj,
          *(UnityEngine_Vector2_o *)&v36->m_Items[1].fields.y,
          0LL);
        v37 = this->fields.threeBtnPos;
        if ( !v37 )
          goto LABEL_84;
        if ( v37->max_length > 2 )
        {
          GameObjectExtensions__SetLocalPosition_35211000(
            this->fields.masterButtonObj,
            *(UnityEngine_Vector2_o *)&v37->m_Items[2].fields.y,
            0LL);
          v38 = this->fields.threeBtnPos;
          if ( !v38 )
            goto LABEL_84;
          if ( v38->max_length > 2 )
          {
            GameObjectExtensions__SetLocalPosition_35211000(
              this->fields.noneButtonObj,
              *(UnityEngine_Vector2_o *)&v38->m_Items[2].fields.y,
              0LL);
            titleLabel = (UILabel_o *)this->fields.masterButtonObj;
            if ( !titleLabel )
              goto LABEL_84;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, type != 1, 0LL);
            titleLabel = (UILabel_o *)this->fields.noneButtonObj;
            if ( !titleLabel )
              goto LABEL_84;
            v39 = type == 1;
            goto LABEL_83;
          }
        }
      }
    }
LABEL_85:
    sub_1BDBADC(titleLabel, v24, v34);
  }
  titleLabel = this->fields.messageLabel;
  if ( !titleLabel )
    goto LABEL_84;
  v40 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)titleLabel, 0LL);
  GameObjectExtensions__SetLocalPositionY(v40, 100.0, 0LL);
  fourBtnPos = this->fields.fourBtnPos;
  if ( !fourBtnPos )
    goto LABEL_84;
  if ( !fourBtnPos->max_length )
    goto LABEL_85;
  GameObjectExtensions__SetLocalPosition_35211000(
    this->fields.servantButtonObj,
    *(UnityEngine_Vector2_o *)&fourBtnPos->m_Items[0].fields.y,
    0LL);
  v42 = this->fields.fourBtnPos;
  if ( !v42 )
    goto LABEL_84;
  if ( v42->max_length <= 1 )
    goto LABEL_85;
  GameObjectExtensions__SetLocalPosition_35211000(
    this->fields.staffButtonObj,
    *(UnityEngine_Vector2_o *)&v42->m_Items[1].fields.y,
    0LL);
  v43 = this->fields.fourBtnPos;
  if ( !v43 )
    goto LABEL_84;
  if ( v43->max_length <= 2 )
    goto LABEL_85;
  GameObjectExtensions__SetLocalPosition_35211000(
    this->fields.masterButtonObj,
    *(UnityEngine_Vector2_o *)&v43->m_Items[2].fields.y,
    0LL);
  v44 = this->fields.fourBtnPos;
  if ( !v44 )
    goto LABEL_84;
  if ( v44->max_length <= 3 )
    goto LABEL_85;
  GameObjectExtensions__SetLocalPosition_35211000(
    this->fields.noneButtonObj,
    *(UnityEngine_Vector2_o *)&v44->m_Items[3].fields.y,
    0LL);
  titleLabel = (UILabel_o *)this->fields.masterButtonObj;
  if ( !titleLabel )
    goto LABEL_84;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 1, 0LL);
  titleLabel = (UILabel_o *)this->fields.noneButtonObj;
  if ( !titleLabel )
    goto LABEL_84;
  v39 = 1;
LABEL_83:
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, v39, 0LL);
}


UnityEngine_GameObject_o *__fastcall PhotoTargetSelectDialog__get_closeBtnObject(
        PhotoTargetSelectDialog_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *cancelButton; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *v6; // x0

  if ( (byte_4B40134 & 1) == 0 )
  {
    sub_1BDB878(&UnityEngine_Object_TypeInfo, method);
    byte_4B40134 = 1;
  }
  cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(cancelButton, 0LL, 0LL) )
    return 0LL;
  v6 = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !v6 )
    sub_1BDBAD4(0LL, v4);
  return UnityEngine_Component__get_gameObject(v6, 0LL);
}


void __fastcall PhotoTargetSelectDialog___c__DisplayClass25_0___ctor(
        PhotoTargetSelectDialog___c__DisplayClass25_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall PhotoTargetSelectDialog___c__DisplayClass25_0___Open_b__0(
        PhotoTargetSelectDialog___c__DisplayClass25_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  struct PhotoTargetSelectDialog_o *_4__this; // x8

  if ( (byte_4B40136 & 1) == 0 )
  {
    sub_1BDB878(&Method_ActionExtensions_Call_bool___, method);
    byte_4B40136 = 1;
  }
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)this->fields.setMaskMethod,
    0,
    (const MethodInfo_2F82EDC *)Method_ActionExtensions_Call_bool___);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1BDBAD4(v3, v4);
  _4__this->fields.state = 2;
}


void __fastcall PhotoTargetSelectDialog___c__DisplayClass31_0___ctor(
        PhotoTargetSelectDialog___c__DisplayClass31_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall PhotoTargetSelectDialog___c__DisplayClass31_0___OnClickDecideButton_b__0(
        PhotoTargetSelectDialog___c__DisplayClass31_0_o *this,
        const MethodInfo *method)
{
  if ( (byte_4B40137 & 1) == 0 )
  {
    sub_1BDB878(&Method_ActionExtensions_Call_PhotoUtility_TargetType___, method);
    byte_4B40137 = 1;
  }
  ActionExtensions__Call_Int32Enum_(
    (System_Action_T__o *)this->fields.callback,
    this->fields.type,
    (const MethodInfo_2F82F7C *)Method_ActionExtensions_Call_PhotoUtility_TargetType___);
}


void __fastcall PhotoTargetSelectDialog___c__DisplayClass33_0___ctor(
        PhotoTargetSelectDialog___c__DisplayClass33_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall PhotoTargetSelectDialog___c__DisplayClass33_0___CloseDialog_b__0(
        PhotoTargetSelectDialog___c__DisplayClass33_0_o *this,
        const MethodInfo *method)
{
  PhotoTargetSelectDialog_o *_4__this; // x0
  System_Action_o *callback; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1BDBAD4(0LL, method);
  PhotoTargetSelectDialog__Init(_4__this, 0LL);
  callback = this->fields.callback;
  if ( callback )
    ActionExtensions__Call(callback, 0LL);
}