void PhotoTargetSelectDialog___ctor(PhotoTargetSelectDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x0
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  unsigned int v6; // w8
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  unsigned int v9; // w8

  if ( (byte_4C3E64B & 1) == 0 )
  {
    sub_1C37058(&BaseDialog_TypeInfo);
    sub_1C37058(&UnityEngine_Vector2___TypeInfo);
    byte_4C3E64B = 1;
  }
  v3 = sub_1C37100(UnityEngine_Vector2___TypeInfo, 3);
  if ( !v3 )
    goto LABEL_16;
  v6 = *(_DWORD *)(v3 + 24);
  if ( !v6
    || (*(_QWORD *)(v3 + 32) = 0xC1C80000C35E0000LL, v6 == 1)
    || (*(_QWORD *)(v3 + 40) = 0xC1C8000000000000LL, v6 <= 2) )
  {
LABEL_15:
    sub_1C372BC(v3);
  }
  *(_QWORD *)(v3 + 48) = 0xC1C80000435E0000LL;
  this->fields.threeBtnPos = (struct UnityEngine_Vector2_array *)v3;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.threeBtnPos, v3, v4, v5);
  v3 = sub_1C37100(UnityEngine_Vector2___TypeInfo, 4);
  if ( !v3 )
LABEL_16:
    sub_1C372B4(v3);
  v9 = *(_DWORD *)(v3 + 24);
  if ( !v9 )
    goto LABEL_15;
  *(_QWORD *)(v3 + 32) = 0x41300000C30C0000LL;
  if ( v9 == 1 )
    goto LABEL_15;
  *(_QWORD *)(v3 + 40) = 0x41300000430C0000LL;
  if ( v9 <= 2 )
    goto LABEL_15;
  *(_QWORD *)(v3 + 48) = 0xC2780000C30C0000LL;
  if ( v9 == 3 )
    goto LABEL_15;
  *(_QWORD *)(v3 + 56) = 0xC2780000430C0000LL;
  this->fields.fourBtnPos = (struct UnityEngine_Vector2_array *)v3;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.fourBtnPos, v3, v7, v8);
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void PhotoTargetSelectDialog__Awake(PhotoTargetSelectDialog_o *this, const MethodInfo *method)
{
  BaseDialog__Awake((BaseDialog_o *)this, 0);
}


void PhotoTargetSelectDialog__CloseDialog(
        PhotoTargetSelectDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  System_Action_o *v11; // x20

  if ( (byte_4C3E649 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_PhotoTargetSelectDialog___c__DisplayClass33_0__CloseDialog_b__0__);
    sub_1C37058(&PhotoTargetSelectDialog___c__DisplayClass33_0_TypeInfo);
    byte_4C3E649 = 1;
  }
  v5 = sub_1C372A4(PhotoTargetSelectDialog___c__DisplayClass33_0_TypeInfo);
  PhotoTargetSelectDialog___c__DisplayClass33_0___ctor((PhotoTargetSelectDialog___c__DisplayClass33_0_o *)v5, 0);
  if ( !v5 )
    sub_1C372B4(v6);
  *(_QWORD *)(v5 + 16) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 16), (int32_t)this, v7, v8);
  *(_QWORD *)(v5 + 24) = callback;
  sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 24), (int32_t)callback, v9, v10);
  this->fields.state = 4;
  v11 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(
    v11,
    (Il2CppObject *)v5,
    Method_PhotoTargetSelectDialog___c__DisplayClass33_0__CloseDialog_b__0__,
    0);
  BaseDialog__Close((BaseDialog_o *)this, v11, 0);
}


void PhotoTargetSelectDialog__Init(PhotoTargetSelectDialog_o *this, const MethodInfo *method)
{
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void PhotoTargetSelectDialog__OnClickDecideButton(
        PhotoTargetSelectDialog_o *this,
        int32_t type,
        const MethodInfo *method)
{
  __int64 v5; // x20
  __int64 v6; // x0
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  struct System_Action_PhotoUtility_TargetType__o *decideCallBack; // x1
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  System_Action_o *v14; // x21
  const MethodInfo *v15; // x2

  if ( (byte_4C3E647 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_PhotoTargetSelectDialog_OnClickDecideButton__);
    sub_1C37058(&Method_PhotoTargetSelectDialog___c__DisplayClass31_0__OnClickDecideButton_b__0__);
    sub_1C37058(&PhotoTargetSelectDialog___c__DisplayClass31_0_TypeInfo);
    byte_4C3E647 = 1;
  }
  v5 = sub_1C372A4(PhotoTargetSelectDialog___c__DisplayClass31_0_TypeInfo);
  PhotoTargetSelectDialog___c__DisplayClass31_0___ctor((PhotoTargetSelectDialog___c__DisplayClass31_0_o *)v5, 0);
  if ( !v5 )
    sub_1C372B4(v6);
  *(_DWORD *)(v5 + 24) = type;
  if ( this->fields.state == 2 )
  {
    v7 = Method_PhotoTargetSelectDialog_OnClickDecideButton__;
    if ( (*((_BYTE *)Method_PhotoTargetSelectDialog_OnClickDecideButton__ + 83) & 2) != 0 )
      v7 = (_QWORD *)sub_1C37070(Method_PhotoTargetSelectDialog_OnClickDecideButton__);
    v8 = (System_Reflection_MethodBase_o *)sub_1C3703C(v7, v7[4]);
    OverwriteAssetSoundName__PlaySystemSe(v8, 8 * (*(_DWORD *)(v5 + 24) == 3), 0, 0);
    decideCallBack = this->fields.decideCallBack;
    *(_QWORD *)(v5 + 16) = decideCallBack;
    sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 16), (int32_t)decideCallBack, v10, v11);
    this->fields.decideCallBack = 0;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.decideCallBack, 0, v12, v13);
    v14 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
    System_Action___ctor(
      v14,
      (Il2CppObject *)v5,
      Method_PhotoTargetSelectDialog___c__DisplayClass31_0__OnClickDecideButton_b__0__,
      0);
    PhotoTargetSelectDialog__CloseDialog(this, v14, v15);
  }
}


void PhotoTargetSelectDialog__OnClickMasterButton(PhotoTargetSelectDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PhotoTargetSelectDialog__OnClickDecideButton(this, 1, v2);
}


void PhotoTargetSelectDialog__OnClickNoneButton(PhotoTargetSelectDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PhotoTargetSelectDialog__OnClickDecideButton(this, 3, v2);
}


void PhotoTargetSelectDialog__OnClickServantButton(PhotoTargetSelectDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PhotoTargetSelectDialog__OnClickDecideButton(this, 0, v2);
}


void PhotoTargetSelectDialog__OnClickStaffButton(PhotoTargetSelectDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PhotoTargetSelectDialog__OnClickDecideButton(this, 2, v2);
}


void PhotoTargetSelectDialog__OnclickCancelButton(PhotoTargetSelectDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  System_Action_o *cancelCallBack; // x20
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  const MethodInfo *v8; // x2

  if ( (byte_4C3E648 & 1) == 0 )
  {
    sub_1C37058(&Method_PhotoTargetSelectDialog_OnclickCancelButton__);
    byte_4C3E648 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_PhotoTargetSelectDialog_OnclickCancelButton__;
    if ( (*((_BYTE *)Method_PhotoTargetSelectDialog_OnclickCancelButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C37070(Method_PhotoTargetSelectDialog_OnclickCancelButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C3703C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    cancelCallBack = this->fields.cancelCallBack;
    this->fields.cancelCallBack = 0;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.cancelCallBack, 0, v6, v7);
    PhotoTargetSelectDialog__CloseDialog(this, cancelCallBack, v8);
  }
}


void PhotoTargetSelectDialog__Open(
        PhotoTargetSelectDialog_o *this,
        int32_t selectedTargetType,
        int32_t index,
        System_Action_PhotoUtility_TargetType__o *decide,
        System_Action_o *cancel,
        System_Action_bool__o *setMaskMethod,
        const MethodInfo *method)
{
  __int64 v13; // x22
  __int64 v14; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  const MethodInfo *v19; // x3
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  System_Action_o *v24; // x20

  if ( (byte_4C3E645 & 1) == 0 )
  {
    sub_1C37058(&Method_ActionExtensions_Call_bool___);
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_PhotoTargetSelectDialog___c__DisplayClass25_0__Open_b__0__);
    sub_1C37058(&PhotoTargetSelectDialog___c__DisplayClass25_0_TypeInfo);
    byte_4C3E645 = 1;
  }
  v13 = sub_1C372A4(PhotoTargetSelectDialog___c__DisplayClass25_0_TypeInfo);
  PhotoTargetSelectDialog___c__DisplayClass25_0___ctor((PhotoTargetSelectDialog___c__DisplayClass25_0_o *)v13, 0);
  if ( !v13 )
    sub_1C372B4(v14);
  *(_QWORD *)(v13 + 16) = setMaskMethod;
  sub_1C36FFC((CGThumbnailListItem_o *)(v13 + 16), (int32_t)setMaskMethod, v15, v16);
  *(_QWORD *)(v13 + 24) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v13 + 24), (int32_t)this, v17, v18);
  if ( !this->fields.state )
  {
    PhotoTargetSelectDialog__SetBtn(this, selectedTargetType, index, v19);
    this->fields.decideCallBack = decide;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.decideCallBack, (int32_t)decide, v20, v21);
    this->fields.cancelCallBack = cancel;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.cancelCallBack, (int32_t)cancel, v22, v23);
    ActionExtensions__Call_bool_(
      *(System_Action_T__o **)(v13 + 16),
      1,
      (const MethodInfo_3034458 *)Method_ActionExtensions_Call_bool___);
    this->fields.state = 1;
    v24 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
    System_Action___ctor(v24, (Il2CppObject *)v13, Method_PhotoTargetSelectDialog___c__DisplayClass25_0__Open_b__0__, 0);
    BaseDialog__Open((BaseDialog_o *)this, v24, 0, 0, 0);
  }
}


void PhotoTargetSelectDialog__SetBtn(
        PhotoTargetSelectDialog_o *this,
        int32_t type,
        int32_t index,
        const MethodInfo *method)
{
  __int64 *v7; // x8
  System_String_o *v8; // x1
  UILabel_o *titleLabel; // x0
  __int64 *v10; // x8
  System_String_o *v11; // x1
  UILabel_o *servantButtonLabel; // x21
  UILabel_o *masterButtonLabel; // x21
  UILabel_o *staffButtonLabel; // x21
  UILabel_o *noneButtonLabel; // x21
  UILabel_o *cancelButtonLabel; // x21
  UILabel_o *staffButtonMaskLabel; // x21
  System_String_o *v18; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  struct UnityEngine_Vector2_array *threeBtnPos; // x8
  struct UnityEngine_Vector2_array *v21; // x8
  struct UnityEngine_Vector2_array *v22; // x8
  struct UnityEngine_Vector2_array *v23; // x8
  char v24; // w1
  UnityEngine_GameObject_o *v25; // x0
  struct UnityEngine_Vector2_array *fourBtnPos; // x8
  struct UnityEngine_Vector2_array *v27; // x8
  struct UnityEngine_Vector2_array *v28; // x8
  struct UnityEngine_Vector2_array *v29; // x8

  if ( (byte_4C3E646 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMaster_StaffPhotoMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&StringLiteral_10369/*"PHOTO_TARGET_CHANGE_DIALOG_MESSAGE"*/);
    sub_1C37058(&StringLiteral_10378/*"PHOTO_TARGET_SELECT_DIALOG_STAFF_BUTTON_MASK_2"*/);
    sub_1C37058(&StringLiteral_10377/*"PHOTO_TARGET_SELECT_DIALOG_STAFF_BUTTON_MASK_1"*/);
    sub_1C37058(&StringLiteral_10373/*"PHOTO_TARGET_SELECT_DIALOG_MESSAGE_RIGHT"*/);
    sub_1C37058(&StringLiteral_10372/*"PHOTO_TARGET_SELECT_DIALOG_MESSAGE_LEFT"*/);
    sub_1C37058(&StringLiteral_10371/*"PHOTO_TARGET_SELECT_DIALOG_MASTER_BUTTON"*/);
    sub_1C37058(&StringLiteral_10380/*"PHOTO_TARGET_SELECT_DIALOG_TITLE_RIGHT"*/);
    sub_1C37058(&StringLiteral_10376/*"PHOTO_TARGET_SELECT_DIALOG_STAFF_BUTTON"*/);
    sub_1C37058(&StringLiteral_3684/*"COMMON_CONFIRM_CANCEL"*/);
    sub_1C37058(&StringLiteral_10370/*"PHOTO_TARGET_CHANGE_DIALOG_TITLE"*/);
    sub_1C37058(&StringLiteral_10375/*"PHOTO_TARGET_SELECT_DIALOG_SERVANT_BUTTON"*/);
    sub_1C37058(&StringLiteral_10374/*"PHOTO_TARGET_SELECT_DIALOG_NONE_BUTTON"*/);
    sub_1C37058(&StringLiteral_10379/*"PHOTO_TARGET_SELECT_DIALOG_TITLE_LEFT"*/);
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C3E646 = 1;
  }
  switch ( index )
  {
    case 0:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v7 = &StringLiteral_10370/*"PHOTO_TARGET_CHANGE_DIALOG_TITLE"*/;
      goto LABEL_15;
    case 2:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v7 = &StringLiteral_10380/*"PHOTO_TARGET_SELECT_DIALOG_TITLE_RIGHT"*/;
      goto LABEL_15;
    case 1:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v7 = &StringLiteral_10379/*"PHOTO_TARGET_SELECT_DIALOG_TITLE_LEFT"*/;
LABEL_15:
      v8 = LocalizationManager__Get((System_String_o *)*v7, 0);
      goto LABEL_17;
  }
  v8 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_17:
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_84;
  UILabel__set_text(titleLabel, v8, 0);
  if ( index )
  {
    if ( index == 2 )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v10 = &StringLiteral_10373/*"PHOTO_TARGET_SELECT_DIALOG_MESSAGE_RIGHT"*/;
    }
    else
    {
      if ( index != 1 )
      {
        v11 = (System_String_o *)StringLiteral_1/*""*/;
        goto LABEL_32;
      }
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v10 = &StringLiteral_10372/*"PHOTO_TARGET_SELECT_DIALOG_MESSAGE_LEFT"*/;
    }
  }
  else
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v10 = &StringLiteral_10369/*"PHOTO_TARGET_CHANGE_DIALOG_MESSAGE"*/;
  }
  v11 = LocalizationManager__Get((System_String_o *)*v10, 0);
LABEL_32:
  titleLabel = this->fields.messageLabel;
  if ( !titleLabel )
    goto LABEL_84;
  UILabel__set_text(titleLabel, v11, 0);
  servantButtonLabel = this->fields.servantButtonLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  titleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10375/*"PHOTO_TARGET_SELECT_DIALOG_SERVANT_BUTTON"*/, 0);
  if ( !servantButtonLabel )
    goto LABEL_84;
  UILabel__set_text(servantButtonLabel, (System_String_o *)titleLabel, 0);
  masterButtonLabel = this->fields.masterButtonLabel;
  titleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10371/*"PHOTO_TARGET_SELECT_DIALOG_MASTER_BUTTON"*/, 0);
  if ( !masterButtonLabel )
    goto LABEL_84;
  UILabel__set_text(masterButtonLabel, (System_String_o *)titleLabel, 0);
  staffButtonLabel = this->fields.staffButtonLabel;
  titleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10376/*"PHOTO_TARGET_SELECT_DIALOG_STAFF_BUTTON"*/, 0);
  if ( !staffButtonLabel )
    goto LABEL_84;
  UILabel__set_text(staffButtonLabel, (System_String_o *)titleLabel, 0);
  noneButtonLabel = this->fields.noneButtonLabel;
  titleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10374/*"PHOTO_TARGET_SELECT_DIALOG_NONE_BUTTON"*/, 0);
  if ( !noneButtonLabel )
    goto LABEL_84;
  UILabel__set_text(noneButtonLabel, (System_String_o *)titleLabel, 0);
  cancelButtonLabel = this->fields.cancelButtonLabel;
  titleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3684/*"COMMON_CONFIRM_CANCEL"*/, 0);
  if ( !cancelButtonLabel )
    goto LABEL_84;
  UILabel__set_text(cancelButtonLabel, (System_String_o *)titleLabel, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  titleLabel = (UILabel_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_StaffPhotoMaster___);
  if ( !titleLabel )
    goto LABEL_84;
  titleLabel = (UILabel_o *)StaffPhotoMaster__GetEnableEntityNum((StaffPhotoMaster_o *)titleLabel, -1, 0);
  if ( type != 2 )
  {
    staffButtonMaskLabel = this->fields.staffButtonMaskLabel;
    this->fields.isEnableStaffBtn = (int)titleLabel > 0;
    if ( (int)titleLabel > 0 )
    {
      v18 = (System_String_o *)StringLiteral_1/*""*/;
      if ( !staffButtonMaskLabel )
        goto LABEL_84;
      goto LABEL_57;
    }
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    titleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10377/*"PHOTO_TARGET_SELECT_DIALOG_STAFF_BUTTON_MASK_1"*/, 0);
    v18 = (System_String_o *)titleLabel;
    if ( staffButtonMaskLabel )
      goto LABEL_57;
LABEL_84:
    sub_1C372B4(titleLabel);
  }
  staffButtonMaskLabel = this->fields.staffButtonMaskLabel;
  this->fields.isEnableStaffBtn = (int)titleLabel > 1;
  if ( (int)titleLabel <= 1 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    titleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10378/*"PHOTO_TARGET_SELECT_DIALOG_STAFF_BUTTON_MASK_2"*/, 0);
    v18 = (System_String_o *)titleLabel;
  }
  else
  {
    v18 = (System_String_o *)StringLiteral_1/*""*/;
  }
  if ( !staffButtonMaskLabel )
    goto LABEL_84;
LABEL_57:
  UILabel__set_text(staffButtonMaskLabel, v18, 0);
  titleLabel = (UILabel_o *)this->fields.staffButton;
  if ( !titleLabel )
    goto LABEL_84;
  ((void (__fastcall *)(UILabel_o *, bool, const MethodInfo *))titleLabel->klass->vtable._5_get_isAnchoredVertically.methodPtr)(
    titleLabel,
    this->fields.isEnableStaffBtn,
    titleLabel->klass->vtable._5_get_isAnchoredVertically.method);
  if ( (type | 2) == 3 )
  {
    titleLabel = this->fields.messageLabel;
    if ( !titleLabel )
      goto LABEL_84;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)titleLabel, 0);
    GameObjectExtensions__SetLocalPositionY(gameObject, 64.0, 0);
    threeBtnPos = this->fields.threeBtnPos;
    if ( !threeBtnPos )
      goto LABEL_84;
    if ( LODWORD(threeBtnPos->max_length) )
    {
      GameObjectExtensions__SetLocalPosition_36132288(this->fields.servantButtonObj, threeBtnPos->m_Items[0], 0);
      v21 = this->fields.threeBtnPos;
      if ( !v21 )
        goto LABEL_84;
      if ( LODWORD(v21->max_length) > 1 )
      {
        GameObjectExtensions__SetLocalPosition_36132288(this->fields.staffButtonObj, v21->m_Items[1], 0);
        v22 = this->fields.threeBtnPos;
        if ( !v22 )
          goto LABEL_84;
        if ( LODWORD(v22->max_length) > 2 )
        {
          GameObjectExtensions__SetLocalPosition_36132288(this->fields.masterButtonObj, v22->m_Items[2], 0);
          v23 = this->fields.threeBtnPos;
          if ( !v23 )
            goto LABEL_84;
          if ( LODWORD(v23->max_length) > 2 )
          {
            GameObjectExtensions__SetLocalPosition_36132288(this->fields.noneButtonObj, v23->m_Items[2], 0);
            titleLabel = (UILabel_o *)this->fields.masterButtonObj;
            if ( !titleLabel )
              goto LABEL_84;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, type != 1, 0);
            titleLabel = (UILabel_o *)this->fields.noneButtonObj;
            if ( !titleLabel )
              goto LABEL_84;
            v24 = type == 1;
            goto LABEL_83;
          }
        }
      }
    }
LABEL_85:
    sub_1C372BC(titleLabel);
  }
  titleLabel = this->fields.messageLabel;
  if ( !titleLabel )
    goto LABEL_84;
  v25 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)titleLabel, 0);
  GameObjectExtensions__SetLocalPositionY(v25, 100.0, 0);
  fourBtnPos = this->fields.fourBtnPos;
  if ( !fourBtnPos )
    goto LABEL_84;
  if ( !LODWORD(fourBtnPos->max_length) )
    goto LABEL_85;
  GameObjectExtensions__SetLocalPosition_36132288(this->fields.servantButtonObj, fourBtnPos->m_Items[0], 0);
  v27 = this->fields.fourBtnPos;
  if ( !v27 )
    goto LABEL_84;
  if ( LODWORD(v27->max_length) <= 1 )
    goto LABEL_85;
  GameObjectExtensions__SetLocalPosition_36132288(this->fields.staffButtonObj, v27->m_Items[1], 0);
  v28 = this->fields.fourBtnPos;
  if ( !v28 )
    goto LABEL_84;
  if ( LODWORD(v28->max_length) <= 2 )
    goto LABEL_85;
  GameObjectExtensions__SetLocalPosition_36132288(this->fields.masterButtonObj, v28->m_Items[2], 0);
  v29 = this->fields.fourBtnPos;
  if ( !v29 )
    goto LABEL_84;
  if ( LODWORD(v29->max_length) <= 3 )
    goto LABEL_85;
  GameObjectExtensions__SetLocalPosition_36132288(this->fields.noneButtonObj, v29->m_Items[3], 0);
  titleLabel = (UILabel_o *)this->fields.masterButtonObj;
  if ( !titleLabel )
    goto LABEL_84;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 1, 0);
  titleLabel = (UILabel_o *)this->fields.noneButtonObj;
  if ( !titleLabel )
    goto LABEL_84;
  v24 = 1;
LABEL_83:
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, v24, 0);
}


UnityEngine_GameObject_o *PhotoTargetSelectDialog__get_closeBtnObject(
        PhotoTargetSelectDialog_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *cancelButton; // x20
  UnityEngine_Component_o *v5; // x0

  if ( (byte_4C3E64A & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C3E64A = 1;
  }
  cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(cancelButton, 0, 0) )
    return 0;
  v5 = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !v5 )
    sub_1C372B4(0);
  return UnityEngine_Component__get_gameObject(v5, 0);
}


void PhotoTargetSelectDialog___c__DisplayClass25_0___ctor(
        PhotoTargetSelectDialog___c__DisplayClass25_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void PhotoTargetSelectDialog___c__DisplayClass25_0___Open_b__0(
        PhotoTargetSelectDialog___c__DisplayClass25_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x0
  struct PhotoTargetSelectDialog_o *_4__this; // x8

  if ( (byte_4C3E64C & 1) == 0 )
  {
    sub_1C37058(&Method_ActionExtensions_Call_bool___);
    byte_4C3E64C = 1;
  }
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)this->fields.setMaskMethod,
    0,
    (const MethodInfo_3034458 *)Method_ActionExtensions_Call_bool___);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C372B4(v3);
  _4__this->fields.state = 2;
}


void PhotoTargetSelectDialog___c__DisplayClass31_0___ctor(
        PhotoTargetSelectDialog___c__DisplayClass31_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void PhotoTargetSelectDialog___c__DisplayClass31_0___OnClickDecideButton_b__0(
        PhotoTargetSelectDialog___c__DisplayClass31_0_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C3E64D & 1) == 0 )
  {
    sub_1C37058(&Method_ActionExtensions_Call_PhotoUtility_TargetType___);
    byte_4C3E64D = 1;
  }
  ActionExtensions__Call_Int32Enum_(
    (System_Action_T__o *)this->fields.callback,
    this->fields.type,
    (const MethodInfo_30344F8 *)Method_ActionExtensions_Call_PhotoUtility_TargetType___);
}


void PhotoTargetSelectDialog___c__DisplayClass33_0___ctor(
        PhotoTargetSelectDialog___c__DisplayClass33_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void PhotoTargetSelectDialog___c__DisplayClass33_0___CloseDialog_b__0(
        PhotoTargetSelectDialog___c__DisplayClass33_0_o *this,
        const MethodInfo *method)
{
  PhotoTargetSelectDialog_o *_4__this; // x0
  System_Action_o *callback; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C372B4(0);
  PhotoTargetSelectDialog__Init(_4__this, 0);
  callback = this->fields.callback;
  if ( callback )
    ActionExtensions__Call(callback, 0);
}