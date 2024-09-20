void __fastcall PhotoTargetSelectDialog___ctor(PhotoTargetSelectDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4A56C08 & 1) == 0 )
  {
    sub_1B885B0(&BaseDialog_TypeInfo);
    byte_4A56C08 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall PhotoTargetSelectDialog__CloseDialog(PhotoTargetSelectDialog_o *this, const MethodInfo *method)
{
  System_Action_o *v3; // x20

  if ( (byte_4A56C06 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_PhotoTargetSelectDialog_Init__);
    byte_4A56C06 = 1;
  }
  this->fields.state = 4;
  v3 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_PhotoTargetSelectDialog_Init__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v3, 0LL);
}


void __fastcall PhotoTargetSelectDialog__Init(PhotoTargetSelectDialog_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1B8880C(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall PhotoTargetSelectDialog__OnClickDecideButton(
        PhotoTargetSelectDialog_o *this,
        int32_t type,
        const MethodInfo *method)
{
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  System_Action_T__o *decideCallBack; // x21

  if ( (byte_4A56C04 & 1) == 0 )
  {
    sub_1B885B0(&Method_ActionExtensions_Call_MyRoomControl_PHOTOCAMPAIGNTYPE___);
    sub_1B885B0(&Method_PhotoTargetSelectDialog_OnClickDecideButton__);
    byte_4A56C04 = 1;
  }
  this->fields.state = 3;
  v5 = Method_PhotoTargetSelectDialog_OnClickDecideButton__;
  if ( (*((_BYTE *)Method_PhotoTargetSelectDialog_OnClickDecideButton__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1B885C8(Method_PhotoTargetSelectDialog_OnClickDecideButton__);
  v6 = (System_Reflection_MethodBase_o *)sub_1B88594(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 8, 0LL);
  decideCallBack = (System_Action_T__o *)this->fields.decideCallBack;
  this->fields.decideCallBack = 0LL;
  sub_1B88554(&this->fields.decideCallBack, 0LL);
  ActionExtensions__Call_Int32Enum_(
    decideCallBack,
    type,
    (const MethodInfo_2DD5808 *)Method_ActionExtensions_Call_MyRoomControl_PHOTOCAMPAIGNTYPE___);
}


void __fastcall PhotoTargetSelectDialog__OnClickOnlyServantButton(
        PhotoTargetSelectDialog_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  const MethodInfo *v4; // x1

  if ( this->fields.state == 2 )
  {
    PhotoTargetSelectDialog__OnClickDecideButton(this, 0, v2);
    PhotoTargetSelectDialog__CloseDialog(this, v4);
  }
}


void __fastcall PhotoTargetSelectDialog__OnClickWithMasterButton(
        PhotoTargetSelectDialog_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  const MethodInfo *v4; // x1

  if ( this->fields.state == 2 )
  {
    if ( this->fields.decideCallBack )
    {
      PhotoTargetSelectDialog__OnClickDecideButton(this, 1, v2);
      PhotoTargetSelectDialog__CloseDialog(this, v4);
    }
  }
}


void __fastcall PhotoTargetSelectDialog__OnclickCancelButton(PhotoTargetSelectDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_4A56C05 & 1) == 0 )
  {
    sub_1B885B0(&Method_PhotoTargetSelectDialog_OnclickCancelButton__);
    byte_4A56C05 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_PhotoTargetSelectDialog_OnclickCancelButton__;
    if ( (*((_BYTE *)Method_PhotoTargetSelectDialog_OnclickCancelButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_PhotoTargetSelectDialog_OnclickCancelButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0LL);
    PhotoTargetSelectDialog__CloseDialog(this, v5);
  }
}


void __fastcall PhotoTargetSelectDialog__Open(
        PhotoTargetSelectDialog_o *this,
        System_Action_MyRoomControl_PHOTOCAMPAIGNTYPE__o *callBack,
        const MethodInfo *method)
{
  UILabel_o *titleLabel; // x21
  System_String_o *v6; // x0
  __int64 v7; // x1
  UILabel_o *messageLabel; // x21
  UILabel_o *onlyServantButtonLabel; // x21
  UILabel_o *withMasterButtonLabel; // x21
  UILabel_o *cancelButtonLabel; // x21
  System_Action_o *v12; // x20

  if ( (byte_4A56C03 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&Method_PhotoTargetSelectDialog__Open_b__12_0__);
    sub_1B885B0(&StringLiteral_3755/*"COMMON_CONFIRM_CANCEL"*/);
    sub_1B885B0(&StringLiteral_10379/*"PHOTO_TARGET_SELECT_DIALOG_TITLE"*/);
    sub_1B885B0(&StringLiteral_10378/*"PHOTO_TARGET_SELECT_DIALOG_ONLY_SERVANT_BUTTON"*/);
    sub_1B885B0(&StringLiteral_10377/*"PHOTO_TARGET_SELECT_DIALOG_MESSAGE"*/);
    sub_1B885B0(&StringLiteral_10380/*"PHOTO_TARGET_SELECT_DIALOG_WITH_MASTER_BUTTON"*/);
    byte_4A56C03 = 1;
  }
  if ( !this->fields.state )
  {
    titleLabel = this->fields.titleLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v6 = LocalizationManager__Get((System_String_o *)StringLiteral_10379/*"PHOTO_TARGET_SELECT_DIALOG_TITLE"*/, 0LL);
    if ( !titleLabel )
      goto LABEL_12;
    UILabel__set_text(titleLabel, v6, 0LL);
    messageLabel = this->fields.messageLabel;
    v6 = LocalizationManager__Get((System_String_o *)StringLiteral_10377/*"PHOTO_TARGET_SELECT_DIALOG_MESSAGE"*/, 0LL);
    if ( !messageLabel )
      goto LABEL_12;
    UILabel__set_text(messageLabel, v6, 0LL);
    onlyServantButtonLabel = this->fields.onlyServantButtonLabel;
    v6 = LocalizationManager__Get((System_String_o *)StringLiteral_10378/*"PHOTO_TARGET_SELECT_DIALOG_ONLY_SERVANT_BUTTON"*/, 0LL);
    if ( !onlyServantButtonLabel
      || (UILabel__set_text(onlyServantButtonLabel, v6, 0LL),
          withMasterButtonLabel = this->fields.withMasterButtonLabel,
          v6 = LocalizationManager__Get((System_String_o *)StringLiteral_10380/*"PHOTO_TARGET_SELECT_DIALOG_WITH_MASTER_BUTTON"*/, 0LL),
          !withMasterButtonLabel)
      || (UILabel__set_text(withMasterButtonLabel, v6, 0LL),
          cancelButtonLabel = this->fields.cancelButtonLabel,
          v6 = LocalizationManager__Get((System_String_o *)StringLiteral_3755/*"COMMON_CONFIRM_CANCEL"*/, 0LL),
          !cancelButtonLabel) )
    {
LABEL_12:
      sub_1B8880C(v6, v7);
    }
    UILabel__set_text(cancelButtonLabel, v6, 0LL);
    this->fields.decideCallBack = callBack;
    sub_1B88554(&this->fields.decideCallBack, callBack);
    this->fields.state = 1;
    v12 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(v12, (Il2CppObject *)this, Method_PhotoTargetSelectDialog__Open_b__12_0__, 0LL);
    BaseDialog__Open((BaseDialog_o *)this, v12, 0, 0LL);
  }
}


void __fastcall PhotoTargetSelectDialog__SerializeFieldNotNullCheck(
        PhotoTargetSelectDialog_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall PhotoTargetSelectDialog___Open_b__12_0(PhotoTargetSelectDialog_o *this, const MethodInfo *method)
{
  this->fields.state = 2;
}


UnityEngine_GameObject_o *__fastcall PhotoTargetSelectDialog__get_closeBtnObject(
        PhotoTargetSelectDialog_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *cancelButton; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *v6; // x0

  if ( (byte_4A56C07 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A56C07 = 1;
  }
  cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(cancelButton, 0LL, 0LL) )
    return 0LL;
  v6 = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !v6 )
    sub_1B8880C(0LL, v4);
  return UnityEngine_Component__get_gameObject(v6, 0LL);
}