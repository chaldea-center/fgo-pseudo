void PhotoTargetSelectDialog___ctor(PhotoTargetSelectDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  const MethodInfo *v6; // x3
  unsigned int v7; // w8
  __int64 v8; // x1
  const MethodInfo *v9; // x3
  unsigned int v10; // w8

  if ( (byte_4C22992 & 1) == 0 )
  {
    sub_1C2D490(&BaseDialog_TypeInfo);
    sub_1C2D490(&UnityEngine_Vector2___TypeInfo);
    byte_4C22992 = 1;
  }
  v3 = sub_1C2D538(UnityEngine_Vector2___TypeInfo, 3);
  if ( !v3 )
    goto LABEL_16;
  v7 = *(_DWORD *)(v3 + 24);
  v8 = v3;
  if ( !v7
    || (*(_QWORD *)(v3 + 32) = 0xC1C80000C35E0000LL, v7 == 1)
    || (*(_QWORD *)(v3 + 40) = 0xC1C8000000000000LL, v7 <= 2) )
  {
LABEL_15:
    sub_1C2D6F4(v3, v8, v5);
  }
  *(_QWORD *)(v3 + 48) = 0xC1C80000435E0000LL;
  this->fields.threeBtnPos = (struct UnityEngine_Vector2_array *)v3;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.threeBtnPos, v3, v5, v6);
  v3 = sub_1C2D538(UnityEngine_Vector2___TypeInfo, 4);
  if ( !v3 )
LABEL_16:
    sub_1C2D6EC(v3, v4);
  v10 = *(_DWORD *)(v3 + 24);
  v8 = v3;
  if ( !v10 )
    goto LABEL_15;
  *(_QWORD *)(v3 + 32) = 0x41300000C30C0000LL;
  if ( v10 == 1 )
    goto LABEL_15;
  *(_QWORD *)(v3 + 40) = 0x41300000430C0000LL;
  if ( v10 <= 2 )
    goto LABEL_15;
  *(_QWORD *)(v3 + 48) = 0xC2780000C30C0000LL;
  if ( v10 == 3 )
    goto LABEL_15;
  *(_QWORD *)(v3 + 56) = 0xC2780000430C0000LL;
  this->fields.fourBtnPos = (struct UnityEngine_Vector2_array *)v3;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.fourBtnPos, v3, v5, v9);
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
  __int64 v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  System_Action_o *v12; // x20

  if ( (byte_4C22990 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_PhotoTargetSelectDialog___c__DisplayClass33_0__CloseDialog_b__0__);
    sub_1C2D490(&PhotoTargetSelectDialog___c__DisplayClass33_0_TypeInfo);
    byte_4C22990 = 1;
  }
  v5 = sub_1C2D6DC(PhotoTargetSelectDialog___c__DisplayClass33_0_TypeInfo);
  PhotoTargetSelectDialog___c__DisplayClass33_0___ctor((PhotoTargetSelectDialog___c__DisplayClass33_0_o *)v5, 0);
  if ( !v5 )
    sub_1C2D6EC(v6, v7);
  *(_QWORD *)(v5 + 16) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v5 + 16), (int32_t)this, v8, v9);
  *(_QWORD *)(v5 + 24) = callback;
  sub_1C2D434((CGThumbnailListItem_o *)(v5 + 24), (int32_t)callback, v10, v11);
  this->fields.state = 4;
  v12 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(
    v12,
    (Il2CppObject *)v5,
    Method_PhotoTargetSelectDialog___c__DisplayClass33_0__CloseDialog_b__0__,
    0);
  BaseDialog__Close((BaseDialog_o *)this, v12, 0);
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
  __int64 v7; // x1
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  struct System_Action_PhotoUtility_TargetType__o *decideCallBack; // x1
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  System_Action_o *v15; // x21
  const MethodInfo *v16; // x2

  if ( (byte_4C2298E & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_PhotoTargetSelectDialog_OnClickDecideButton__);
    sub_1C2D490(&Method_PhotoTargetSelectDialog___c__DisplayClass31_0__OnClickDecideButton_b__0__);
    sub_1C2D490(&PhotoTargetSelectDialog___c__DisplayClass31_0_TypeInfo);
    byte_4C2298E = 1;
  }
  v5 = sub_1C2D6DC(PhotoTargetSelectDialog___c__DisplayClass31_0_TypeInfo);
  PhotoTargetSelectDialog___c__DisplayClass31_0___ctor((PhotoTargetSelectDialog___c__DisplayClass31_0_o *)v5, 0);
  if ( !v5 )
    sub_1C2D6EC(v6, v7);
  *(_DWORD *)(v5 + 24) = type;
  if ( this->fields.state == 2 )
  {
    v8 = Method_PhotoTargetSelectDialog_OnClickDecideButton__;
    if ( (*((_BYTE *)Method_PhotoTargetSelectDialog_OnClickDecideButton__ + 83) & 2) != 0 )
      v8 = (_QWORD *)sub_1C2D4A8(Method_PhotoTargetSelectDialog_OnClickDecideButton__);
    v9 = (System_Reflection_MethodBase_o *)sub_1C2D474(v8, v8[4]);
    OverwriteAssetSoundName__PlaySystemSe(v9, 8 * (*(_DWORD *)(v5 + 24) == 3), 0, 0);
    decideCallBack = this->fields.decideCallBack;
    *(_QWORD *)(v5 + 16) = decideCallBack;
    sub_1C2D434((CGThumbnailListItem_o *)(v5 + 16), (int32_t)decideCallBack, v11, v12);
    this->fields.decideCallBack = 0;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.decideCallBack, 0, v13, v14);
    v15 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
    System_Action___ctor(
      v15,
      (Il2CppObject *)v5,
      Method_PhotoTargetSelectDialog___c__DisplayClass31_0__OnClickDecideButton_b__0__,
      0);
    PhotoTargetSelectDialog__CloseDialog(this, v15, v16);
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

  if ( (byte_4C2298F & 1) == 0 )
  {
    sub_1C2D490(&Method_PhotoTargetSelectDialog_OnclickCancelButton__);
    byte_4C2298F = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_PhotoTargetSelectDialog_OnclickCancelButton__;
    if ( (*((_BYTE *)Method_PhotoTargetSelectDialog_OnclickCancelButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2D4A8(Method_PhotoTargetSelectDialog_OnclickCancelButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    cancelCallBack = this->fields.cancelCallBack;
    this->fields.cancelCallBack = 0;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.cancelCallBack, 0, v6, v7);
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
  __int64 v15; // x1
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  const MethodInfo *v20; // x3
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  System_Action_o *v25; // x20

  if ( (byte_4C2298C & 1) == 0 )
  {
    sub_1C2D490(&Method_ActionExtensions_Call_bool___);
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_PhotoTargetSelectDialog___c__DisplayClass25_0__Open_b__0__);
    sub_1C2D490(&PhotoTargetSelectDialog___c__DisplayClass25_0_TypeInfo);
    byte_4C2298C = 1;
  }
  v13 = sub_1C2D6DC(PhotoTargetSelectDialog___c__DisplayClass25_0_TypeInfo);
  PhotoTargetSelectDialog___c__DisplayClass25_0___ctor((PhotoTargetSelectDialog___c__DisplayClass25_0_o *)v13, 0);
  if ( !v13 )
    sub_1C2D6EC(v14, v15);
  *(_QWORD *)(v13 + 16) = setMaskMethod;
  sub_1C2D434((CGThumbnailListItem_o *)(v13 + 16), (int32_t)setMaskMethod, v16, v17);
  *(_QWORD *)(v13 + 24) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v13 + 24), (int32_t)this, v18, v19);
  if ( !this->fields.state )
  {
    PhotoTargetSelectDialog__SetBtn(this, selectedTargetType, index, v20);
    this->fields.decideCallBack = decide;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.decideCallBack, (int32_t)decide, v21, v22);
    this->fields.cancelCallBack = cancel;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.cancelCallBack, (int32_t)cancel, v23, v24);
    ActionExtensions__Call_bool_(
      *(System_Action_T__o **)(v13 + 16),
      1,
      (const MethodInfo_301B150 *)Method_ActionExtensions_Call_bool___);
    this->fields.state = 1;
    v25 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
    System_Action___ctor(v25, (Il2CppObject *)v13, Method_PhotoTargetSelectDialog___c__DisplayClass25_0__Open_b__0__, 0);
    BaseDialog__Open((BaseDialog_o *)this, v25, 0, 0);
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
  UILabel_o *servantButtonLabel; // x21
  UILabel_o *masterButtonLabel; // x21
  UILabel_o *staffButtonLabel; // x21
  UILabel_o *noneButtonLabel; // x21
  UILabel_o *cancelButtonLabel; // x21
  UILabel_o *staffButtonMaskLabel; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v18; // x2
  struct UnityEngine_Vector2_array *threeBtnPos; // x8
  struct UnityEngine_Vector2_array *v20; // x8
  struct UnityEngine_Vector2_array *v21; // x8
  struct UnityEngine_Vector2_array *v22; // x8
  char v23; // w1
  UnityEngine_GameObject_o *v24; // x0
  struct UnityEngine_Vector2_array *fourBtnPos; // x8
  struct UnityEngine_Vector2_array *v26; // x8
  struct UnityEngine_Vector2_array *v27; // x8
  struct UnityEngine_Vector2_array *v28; // x8

  if ( (byte_4C2298D & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_StaffPhotoMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&StringLiteral_10362/*"PHOTO_TARGET_CHANGE_DIALOG_MESSAGE"*/);
    sub_1C2D490(&StringLiteral_10371/*"PHOTO_TARGET_SELECT_DIALOG_STAFF_BUTTON_MASK_2"*/);
    sub_1C2D490(&StringLiteral_10370/*"PHOTO_TARGET_SELECT_DIALOG_STAFF_BUTTON_MASK_1"*/);
    sub_1C2D490(&StringLiteral_10366/*"PHOTO_TARGET_SELECT_DIALOG_MESSAGE_RIGHT"*/);
    sub_1C2D490(&StringLiteral_10365/*"PHOTO_TARGET_SELECT_DIALOG_MESSAGE_LEFT"*/);
    sub_1C2D490(&StringLiteral_10364/*"PHOTO_TARGET_SELECT_DIALOG_MASTER_BUTTON"*/);
    sub_1C2D490(&StringLiteral_10373/*"PHOTO_TARGET_SELECT_DIALOG_TITLE_RIGHT"*/);
    sub_1C2D490(&StringLiteral_10369/*"PHOTO_TARGET_SELECT_DIALOG_STAFF_BUTTON"*/);
    sub_1C2D490(&StringLiteral_3677/*"COMMON_CONFIRM_CANCEL"*/);
    sub_1C2D490(&StringLiteral_10363/*"PHOTO_TARGET_CHANGE_DIALOG_TITLE"*/);
    sub_1C2D490(&StringLiteral_10368/*"PHOTO_TARGET_SELECT_DIALOG_SERVANT_BUTTON"*/);
    sub_1C2D490(&StringLiteral_10367/*"PHOTO_TARGET_SELECT_DIALOG_NONE_BUTTON"*/);
    sub_1C2D490(&StringLiteral_10372/*"PHOTO_TARGET_SELECT_DIALOG_TITLE_LEFT"*/);
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C2298D = 1;
  }
  switch ( index )
  {
    case 0:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v7 = &StringLiteral_10363/*"PHOTO_TARGET_CHANGE_DIALOG_TITLE"*/;
      goto LABEL_15;
    case 2:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v7 = &StringLiteral_10373/*"PHOTO_TARGET_SELECT_DIALOG_TITLE_RIGHT"*/;
      goto LABEL_15;
    case 1:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v7 = &StringLiteral_10372/*"PHOTO_TARGET_SELECT_DIALOG_TITLE_LEFT"*/;
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
      v10 = &StringLiteral_10366/*"PHOTO_TARGET_SELECT_DIALOG_MESSAGE_RIGHT"*/;
    }
    else
    {
      if ( index != 1 )
      {
        v8 = (System_String_o *)StringLiteral_1/*""*/;
        goto LABEL_32;
      }
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v10 = &StringLiteral_10365/*"PHOTO_TARGET_SELECT_DIALOG_MESSAGE_LEFT"*/;
    }
  }
  else
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v10 = &StringLiteral_10362/*"PHOTO_TARGET_CHANGE_DIALOG_MESSAGE"*/;
  }
  v8 = LocalizationManager__Get((System_String_o *)*v10, 0);
LABEL_32:
  titleLabel = this->fields.messageLabel;
  if ( !titleLabel )
    goto LABEL_84;
  UILabel__set_text(titleLabel, v8, 0);
  servantButtonLabel = this->fields.servantButtonLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  titleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10368/*"PHOTO_TARGET_SELECT_DIALOG_SERVANT_BUTTON"*/, 0);
  if ( !servantButtonLabel )
    goto LABEL_84;
  UILabel__set_text(servantButtonLabel, (System_String_o *)titleLabel, 0);
  masterButtonLabel = this->fields.masterButtonLabel;
  titleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10364/*"PHOTO_TARGET_SELECT_DIALOG_MASTER_BUTTON"*/, 0);
  if ( !masterButtonLabel )
    goto LABEL_84;
  UILabel__set_text(masterButtonLabel, (System_String_o *)titleLabel, 0);
  staffButtonLabel = this->fields.staffButtonLabel;
  titleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10369/*"PHOTO_TARGET_SELECT_DIALOG_STAFF_BUTTON"*/, 0);
  if ( !staffButtonLabel )
    goto LABEL_84;
  UILabel__set_text(staffButtonLabel, (System_String_o *)titleLabel, 0);
  noneButtonLabel = this->fields.noneButtonLabel;
  titleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10367/*"PHOTO_TARGET_SELECT_DIALOG_NONE_BUTTON"*/, 0);
  if ( !noneButtonLabel )
    goto LABEL_84;
  UILabel__set_text(noneButtonLabel, (System_String_o *)titleLabel, 0);
  cancelButtonLabel = this->fields.cancelButtonLabel;
  titleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3677/*"COMMON_CONFIRM_CANCEL"*/, 0);
  if ( !cancelButtonLabel )
    goto LABEL_84;
  UILabel__set_text(cancelButtonLabel, (System_String_o *)titleLabel, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  titleLabel = (UILabel_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_StaffPhotoMaster___);
  if ( !titleLabel )
    goto LABEL_84;
  titleLabel = (UILabel_o *)StaffPhotoMaster__GetEnableEntityNum((StaffPhotoMaster_o *)titleLabel, -1, 0);
  if ( type != 2 )
  {
    staffButtonMaskLabel = this->fields.staffButtonMaskLabel;
    this->fields.isEnableStaffBtn = (int)titleLabel > 0;
    if ( (int)titleLabel > 0 )
    {
      v8 = (System_String_o *)StringLiteral_1/*""*/;
      if ( !staffButtonMaskLabel )
        goto LABEL_84;
      goto LABEL_57;
    }
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    titleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10370/*"PHOTO_TARGET_SELECT_DIALOG_STAFF_BUTTON_MASK_1"*/, 0);
    v8 = (System_String_o *)titleLabel;
    if ( staffButtonMaskLabel )
      goto LABEL_57;
LABEL_84:
    sub_1C2D6EC(titleLabel, v8);
  }
  staffButtonMaskLabel = this->fields.staffButtonMaskLabel;
  this->fields.isEnableStaffBtn = (int)titleLabel > 1;
  if ( (int)titleLabel <= 1 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    titleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10371/*"PHOTO_TARGET_SELECT_DIALOG_STAFF_BUTTON_MASK_2"*/, 0);
    v8 = (System_String_o *)titleLabel;
  }
  else
  {
    v8 = (System_String_o *)StringLiteral_1/*""*/;
  }
  if ( !staffButtonMaskLabel )
    goto LABEL_84;
LABEL_57:
  UILabel__set_text(staffButtonMaskLabel, v8, 0);
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
      GameObjectExtensions__SetLocalPosition_35918392(this->fields.servantButtonObj, threeBtnPos->m_Items[0], 0);
      v20 = this->fields.threeBtnPos;
      if ( !v20 )
        goto LABEL_84;
      if ( LODWORD(v20->max_length) > 1 )
      {
        GameObjectExtensions__SetLocalPosition_35918392(this->fields.staffButtonObj, v20->m_Items[1], 0);
        v21 = this->fields.threeBtnPos;
        if ( !v21 )
          goto LABEL_84;
        if ( LODWORD(v21->max_length) > 2 )
        {
          GameObjectExtensions__SetLocalPosition_35918392(this->fields.masterButtonObj, v21->m_Items[2], 0);
          v22 = this->fields.threeBtnPos;
          if ( !v22 )
            goto LABEL_84;
          if ( LODWORD(v22->max_length) > 2 )
          {
            GameObjectExtensions__SetLocalPosition_35918392(this->fields.noneButtonObj, v22->m_Items[2], 0);
            titleLabel = (UILabel_o *)this->fields.masterButtonObj;
            if ( !titleLabel )
              goto LABEL_84;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, type != 1, 0);
            titleLabel = (UILabel_o *)this->fields.noneButtonObj;
            if ( !titleLabel )
              goto LABEL_84;
            v23 = type == 1;
            goto LABEL_83;
          }
        }
      }
    }
LABEL_85:
    sub_1C2D6F4(titleLabel, v8, v18);
  }
  titleLabel = this->fields.messageLabel;
  if ( !titleLabel )
    goto LABEL_84;
  v24 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)titleLabel, 0);
  GameObjectExtensions__SetLocalPositionY(v24, 100.0, 0);
  fourBtnPos = this->fields.fourBtnPos;
  if ( !fourBtnPos )
    goto LABEL_84;
  if ( !LODWORD(fourBtnPos->max_length) )
    goto LABEL_85;
  GameObjectExtensions__SetLocalPosition_35918392(this->fields.servantButtonObj, fourBtnPos->m_Items[0], 0);
  v26 = this->fields.fourBtnPos;
  if ( !v26 )
    goto LABEL_84;
  if ( LODWORD(v26->max_length) <= 1 )
    goto LABEL_85;
  GameObjectExtensions__SetLocalPosition_35918392(this->fields.staffButtonObj, v26->m_Items[1], 0);
  v27 = this->fields.fourBtnPos;
  if ( !v27 )
    goto LABEL_84;
  if ( LODWORD(v27->max_length) <= 2 )
    goto LABEL_85;
  GameObjectExtensions__SetLocalPosition_35918392(this->fields.masterButtonObj, v27->m_Items[2], 0);
  v28 = this->fields.fourBtnPos;
  if ( !v28 )
    goto LABEL_84;
  if ( LODWORD(v28->max_length) <= 3 )
    goto LABEL_85;
  GameObjectExtensions__SetLocalPosition_35918392(this->fields.noneButtonObj, v28->m_Items[3], 0);
  titleLabel = (UILabel_o *)this->fields.masterButtonObj;
  if ( !titleLabel )
    goto LABEL_84;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 1, 0);
  titleLabel = (UILabel_o *)this->fields.noneButtonObj;
  if ( !titleLabel )
    goto LABEL_84;
  v23 = 1;
LABEL_83:
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, v23, 0);
}


UnityEngine_GameObject_o *PhotoTargetSelectDialog__get_closeBtnObject(
        PhotoTargetSelectDialog_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *cancelButton; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *v6; // x0

  if ( (byte_4C22991 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C22991 = 1;
  }
  cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(cancelButton, 0, 0) )
    return 0;
  v6 = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !v6 )
    sub_1C2D6EC(0, v4);
  return UnityEngine_Component__get_gameObject(v6, 0);
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
  __int64 v4; // x1
  struct PhotoTargetSelectDialog_o *_4__this; // x8

  if ( (byte_4C22993 & 1) == 0 )
  {
    sub_1C2D490(&Method_ActionExtensions_Call_bool___);
    byte_4C22993 = 1;
  }
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)this->fields.setMaskMethod,
    0,
    (const MethodInfo_301B150 *)Method_ActionExtensions_Call_bool___);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C2D6EC(v3, v4);
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
  if ( (byte_4C22994 & 1) == 0 )
  {
    sub_1C2D490(&Method_ActionExtensions_Call_PhotoUtility_TargetType___);
    byte_4C22994 = 1;
  }
  ActionExtensions__Call_Int32Enum_(
    (System_Action_T__o *)this->fields.callback,
    this->fields.type,
    (const MethodInfo_301B1F0 *)Method_ActionExtensions_Call_PhotoUtility_TargetType___);
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
    sub_1C2D6EC(0, method);
  PhotoTargetSelectDialog__Init(_4__this, 0);
  callback = this->fields.callback;
  if ( callback )
    ActionExtensions__Call(callback, 0);
}