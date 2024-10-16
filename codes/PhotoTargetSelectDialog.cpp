void __fastcall PhotoTargetSelectDialog___ctor(PhotoTargetSelectDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4AB1814 & 1) == 0 )
  {
    sub_1BAB41C(&BaseDialog_TypeInfo, method);
    byte_4AB1814 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall PhotoTargetSelectDialog__CloseDialog(PhotoTargetSelectDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Action_o *v4; // x20

  if ( (byte_4AB1812 & 1) == 0 )
  {
    sub_1BAB41C(&System_Action_TypeInfo, method);
    sub_1BAB41C(&Method_PhotoTargetSelectDialog_Init__, v3);
    byte_4AB1812 = 1;
  }
  this->fields.state = 4;
  v4 = (System_Action_o *)sub_1BAB668(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_PhotoTargetSelectDialog_Init__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v4, 0LL);
}


void __fastcall PhotoTargetSelectDialog__Init(PhotoTargetSelectDialog_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1BAB678(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
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
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  System_Action_T__o *decideCallBack; // x21
  int32_t v9; // w2
  int32_t v10; // w3

  if ( (byte_4AB1810 & 1) == 0 )
  {
    sub_1BAB41C(&Method_ActionExtensions_Call_MyRoomControl_PHOTOCAMPAIGNTYPE___, *(_QWORD *)&type);
    sub_1BAB41C(&Method_PhotoTargetSelectDialog_OnClickDecideButton__, v5);
    byte_4AB1810 = 1;
  }
  this->fields.state = 3;
  v6 = Method_PhotoTargetSelectDialog_OnClickDecideButton__;
  if ( (*((_BYTE *)Method_PhotoTargetSelectDialog_OnClickDecideButton__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_1BAB434(Method_PhotoTargetSelectDialog_OnClickDecideButton__);
  v7 = (System_Reflection_MethodBase_o *)sub_1BAB400(v6, v6[4]);
  OverwriteAssetSoundName__PlaySystemSe(v7, 8, 0LL);
  decideCallBack = (System_Action_T__o *)this->fields.decideCallBack;
  this->fields.decideCallBack = 0LL;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.decideCallBack, 0, v9, v10);
  ActionExtensions__Call_Int32Enum_(
    decideCallBack,
    type,
    (const MethodInfo_2E18478 *)Method_ActionExtensions_Call_MyRoomControl_PHOTOCAMPAIGNTYPE___);
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

  if ( (byte_4AB1811 & 1) == 0 )
  {
    sub_1BAB41C(&Method_PhotoTargetSelectDialog_OnclickCancelButton__, method);
    byte_4AB1811 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_PhotoTargetSelectDialog_OnclickCancelButton__;
    if ( (*((_BYTE *)Method_PhotoTargetSelectDialog_OnclickCancelButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BAB434(Method_PhotoTargetSelectDialog_OnclickCancelButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BAB400(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0LL);
    PhotoTargetSelectDialog__CloseDialog(this, v5);
  }
}


void __fastcall PhotoTargetSelectDialog__Open(
        PhotoTargetSelectDialog_o *this,
        System_Action_MyRoomControl_PHOTOCAMPAIGNTYPE__o *callBack,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  UILabel_o *titleLabel; // x21
  System_String_o *v13; // x0
  __int64 v14; // x1
  UILabel_o *messageLabel; // x21
  UILabel_o *onlyServantButtonLabel; // x21
  UILabel_o *withMasterButtonLabel; // x21
  UILabel_o *cancelButtonLabel; // x21
  int32_t v19; // w2
  int32_t v20; // w3
  System_Action_o *v21; // x20

  if ( (byte_4AB180F & 1) == 0 )
  {
    sub_1BAB41C(&System_Action_TypeInfo, callBack);
    sub_1BAB41C(&LocalizationManager_TypeInfo, v5);
    sub_1BAB41C(&Method_PhotoTargetSelectDialog__Open_b__12_0__, v6);
    sub_1BAB41C(&StringLiteral_3753/*"COMMON_CONFIRM_CANCEL"*/, v7);
    sub_1BAB41C(&StringLiteral_10385/*"PHOTO_TARGET_SELECT_DIALOG_TITLE"*/, v8);
    sub_1BAB41C(&StringLiteral_10384/*"PHOTO_TARGET_SELECT_DIALOG_ONLY_SERVANT_BUTTON"*/, v9);
    sub_1BAB41C(&StringLiteral_10383/*"PHOTO_TARGET_SELECT_DIALOG_MESSAGE"*/, v10);
    sub_1BAB41C(&StringLiteral_10386/*"PHOTO_TARGET_SELECT_DIALOG_WITH_MASTER_BUTTON"*/, v11);
    byte_4AB180F = 1;
  }
  if ( !this->fields.state )
  {
    titleLabel = this->fields.titleLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v13 = LocalizationManager__Get((System_String_o *)StringLiteral_10385/*"PHOTO_TARGET_SELECT_DIALOG_TITLE"*/, 0LL);
    if ( !titleLabel )
      goto LABEL_12;
    UILabel__set_text(titleLabel, v13, 0LL);
    messageLabel = this->fields.messageLabel;
    v13 = LocalizationManager__Get((System_String_o *)StringLiteral_10383/*"PHOTO_TARGET_SELECT_DIALOG_MESSAGE"*/, 0LL);
    if ( !messageLabel )
      goto LABEL_12;
    UILabel__set_text(messageLabel, v13, 0LL);
    onlyServantButtonLabel = this->fields.onlyServantButtonLabel;
    v13 = LocalizationManager__Get((System_String_o *)StringLiteral_10384/*"PHOTO_TARGET_SELECT_DIALOG_ONLY_SERVANT_BUTTON"*/, 0LL);
    if ( !onlyServantButtonLabel
      || (UILabel__set_text(onlyServantButtonLabel, v13, 0LL),
          withMasterButtonLabel = this->fields.withMasterButtonLabel,
          v13 = LocalizationManager__Get((System_String_o *)StringLiteral_10386/*"PHOTO_TARGET_SELECT_DIALOG_WITH_MASTER_BUTTON"*/, 0LL),
          !withMasterButtonLabel)
      || (UILabel__set_text(withMasterButtonLabel, v13, 0LL),
          cancelButtonLabel = this->fields.cancelButtonLabel,
          v13 = LocalizationManager__Get((System_String_o *)StringLiteral_3753/*"COMMON_CONFIRM_CANCEL"*/, 0LL),
          !cancelButtonLabel) )
    {
LABEL_12:
      sub_1BAB678(v13, v14);
    }
    UILabel__set_text(cancelButtonLabel, v13, 0LL);
    this->fields.decideCallBack = callBack;
    sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.decideCallBack, (int32_t)callBack, v19, v20);
    this->fields.state = 1;
    v21 = (System_Action_o *)sub_1BAB668(System_Action_TypeInfo);
    System_Action___ctor(v21, (Il2CppObject *)this, Method_PhotoTargetSelectDialog__Open_b__12_0__, 0LL);
    BaseDialog__Open((BaseDialog_o *)this, v21, 0, 0LL);
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

  if ( (byte_4AB1813 & 1) == 0 )
  {
    sub_1BAB41C(&UnityEngine_Object_TypeInfo, method);
    byte_4AB1813 = 1;
  }
  cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(cancelButton, 0LL, 0LL) )
    return 0LL;
  v6 = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !v6 )
    sub_1BAB678(0LL, v4);
  return UnityEngine_Component__get_gameObject(v6, 0LL);
}