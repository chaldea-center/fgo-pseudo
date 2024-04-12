void __fastcall PhotoTargetSelectDialog___ctor(PhotoTargetSelectDialog_o *this, const MethodInfo *method)
{
  if ( (byte_42AF7C2 & 1) == 0 )
  {
    sub_B52984(&BaseDialog_TypeInfo);
    byte_42AF7C2 = 1;
  }
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall PhotoTargetSelectDialog__CloseDialog(PhotoTargetSelectDialog_o *this, const MethodInfo *method)
{
  System_Action_o *v3; // x20

  if ( (byte_42AF7C0 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_PhotoTargetSelectDialog_Init__);
    byte_42AF7C0 = 1;
  }
  this->fields.state = 4;
  v3 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_PhotoTargetSelectDialog_Init__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v3, 0LL);
}


void __fastcall PhotoTargetSelectDialog__Init(PhotoTargetSelectDialog_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B52A5C(0LL, v4);
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
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_42AF7BE & 1) == 0 )
  {
    sub_B52984(&Method_ActionExtensions_Call_MyRoomControl_PHOTOCAMPAIGNTYPE___);
    sub_B52984(&Method_PhotoTargetSelectDialog_OnClickDecideButton__);
    byte_42AF7BE = 1;
  }
  this->fields.state = 3;
  v5 = Method_PhotoTargetSelectDialog_OnClickDecideButton__;
  if ( (*((_BYTE *)Method_PhotoTargetSelectDialog_OnClickDecideButton__ + 75) & 2) != 0 )
    v5 = (_QWORD *)sub_B5298C(Method_PhotoTargetSelectDialog_OnClickDecideButton__);
  v6 = (System_Reflection_MethodBase_o *)sub_B52968(v5, v5[3]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 8, 0LL);
  decideCallBack = (System_Action_T__o *)this->fields.decideCallBack;
  this->fields.decideCallBack = 0LL;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.decideCallBack, 0LL, v8, v9, v10, v11, v12, v13);
  ActionExtensions__Call_MyRoomControl_PHOTOCAMPAIGNTYPE_(
    decideCallBack,
    type,
    (const MethodInfo_2D6165C *)Method_ActionExtensions_Call_MyRoomControl_PHOTOCAMPAIGNTYPE___);
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

  if ( (byte_42AF7BF & 1) == 0 )
  {
    sub_B52984(&Method_PhotoTargetSelectDialog_OnclickCancelButton__);
    byte_42AF7BF = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_PhotoTargetSelectDialog_OnclickCancelButton__;
    if ( (*((_BYTE *)Method_PhotoTargetSelectDialog_OnclickCancelButton__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B5298C(Method_PhotoTargetSelectDialog_OnclickCancelButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_B52968(v3, v3[3]);
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
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_Action_o *v18; // x20

  if ( (byte_42AF7BD & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&Method_PhotoTargetSelectDialog__Open_b__12_0__);
    sub_B52984(&StringLiteral_3293/*"COMMON_CONFIRM_CANCEL"*/);
    sub_B52984(&StringLiteral_10511/*"PHOTO_TARGET_SELECT_DIALOG_TITLE"*/);
    sub_B52984(&StringLiteral_10510/*"PHOTO_TARGET_SELECT_DIALOG_ONLY_SERVANT_BUTTON"*/);
    sub_B52984(&StringLiteral_10509/*"PHOTO_TARGET_SELECT_DIALOG_MESSAGE"*/);
    sub_B52984(&StringLiteral_10512/*"PHOTO_TARGET_SELECT_DIALOG_WITH_MASTER_BUTTON"*/);
    byte_42AF7BD = 1;
  }
  if ( !this->fields.state )
  {
    titleLabel = this->fields.titleLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v6 = LocalizationManager__Get((System_String_o *)StringLiteral_10511/*"PHOTO_TARGET_SELECT_DIALOG_TITLE"*/, 0LL);
    if ( !titleLabel )
      goto LABEL_13;
    UILabel__set_text(titleLabel, v6, 0LL);
    messageLabel = this->fields.messageLabel;
    v6 = LocalizationManager__Get((System_String_o *)StringLiteral_10509/*"PHOTO_TARGET_SELECT_DIALOG_MESSAGE"*/, 0LL);
    if ( !messageLabel )
      goto LABEL_13;
    UILabel__set_text(messageLabel, v6, 0LL);
    onlyServantButtonLabel = this->fields.onlyServantButtonLabel;
    v6 = LocalizationManager__Get((System_String_o *)StringLiteral_10510/*"PHOTO_TARGET_SELECT_DIALOG_ONLY_SERVANT_BUTTON"*/, 0LL);
    if ( !onlyServantButtonLabel
      || (UILabel__set_text(onlyServantButtonLabel, v6, 0LL),
          withMasterButtonLabel = this->fields.withMasterButtonLabel,
          v6 = LocalizationManager__Get((System_String_o *)StringLiteral_10512/*"PHOTO_TARGET_SELECT_DIALOG_WITH_MASTER_BUTTON"*/, 0LL),
          !withMasterButtonLabel)
      || (UILabel__set_text(withMasterButtonLabel, v6, 0LL),
          cancelButtonLabel = this->fields.cancelButtonLabel,
          v6 = LocalizationManager__Get((System_String_o *)StringLiteral_3293/*"COMMON_CONFIRM_CANCEL"*/, 0LL),
          !cancelButtonLabel) )
    {
LABEL_13:
      sub_B52A5C(v6, v7);
    }
    UILabel__set_text(cancelButtonLabel, v6, 0LL);
    this->fields.decideCallBack = callBack;
    sub_B52920(
      (BattleServantConfConponent_o *)&this->fields.decideCallBack,
      (System_Int32_array **)callBack,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
    this->fields.state = 1;
    v18 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
    System_Action___ctor(v18, (Il2CppObject *)this, Method_PhotoTargetSelectDialog__Open_b__12_0__, 0LL);
    BaseDialog__Open((BaseDialog_o *)this, v18, 0, 0LL);
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

  if ( (byte_42AF7C1 & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42AF7C1 = 1;
  }
  cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(cancelButton, 0LL, 0LL) )
    return 0LL;
  v6 = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !v6 )
    sub_B52A5C(0LL, v4);
  return UnityEngine_Component__get_gameObject(v6, 0LL);
}