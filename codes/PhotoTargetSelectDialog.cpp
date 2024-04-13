void __fastcall PhotoTargetSelectDialog___ctor(PhotoTargetSelectDialog_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E83D8 & 1) == 0 )
  {
    sub_B5D5C4(&BaseDialog_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E83D8 = 1;
  }
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall PhotoTargetSelectDialog__CloseDialog(PhotoTargetSelectDialog_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Action_o *v8; // x20

  if ( (byte_42E83D6 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_PhotoTargetSelectDialog_Init__, v5, v6, v7);
    byte_42E83D6 = 1;
  }
  this->fields.state = 4;
  v8 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_PhotoTargetSelectDialog_Init__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v8, 0LL);
}


void __fastcall PhotoTargetSelectDialog__Init(PhotoTargetSelectDialog_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B5D69C(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall PhotoTargetSelectDialog__OnClickDecideButton(
        PhotoTargetSelectDialog_o *this,
        int32_t type,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  _QWORD *v9; // x0
  System_Reflection_MethodBase_o *v10; // x0
  System_Action_T__o *decideCallBack; // x21
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7

  if ( (byte_42E83D4 & 1) == 0 )
  {
    sub_B5D5C4(&Method_ActionExtensions_Call_MyRoomControl_PHOTOCAMPAIGNTYPE___, type, (_DWORD)method, v3);
    sub_B5D5C4(&Method_PhotoTargetSelectDialog_OnClickDecideButton__, v6, v7, v8);
    byte_42E83D4 = 1;
  }
  this->fields.state = 3;
  v9 = Method_PhotoTargetSelectDialog_OnClickDecideButton__;
  if ( (*((_BYTE *)Method_PhotoTargetSelectDialog_OnClickDecideButton__ + 75) & 2) != 0 )
    v9 = (_QWORD *)sub_B5D5CC(Method_PhotoTargetSelectDialog_OnClickDecideButton__);
  v10 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v9, v9[3]);
  OverwriteAssetSoundName__PlaySystemSe(v10, 8, 0LL);
  decideCallBack = (System_Action_T__o *)this->fields.decideCallBack;
  this->fields.decideCallBack = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.decideCallBack, 0LL, v12, v13, v14, v15, v16, v17);
  ActionExtensions__Call_MyRoomControl_PHOTOCAMPAIGNTYPE_(
    decideCallBack,
    type,
    (const MethodInfo_2CECD40 *)Method_ActionExtensions_Call_MyRoomControl_PHOTOCAMPAIGNTYPE___);
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
  int v2; // w2
  __int64 v3; // x3
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  const MethodInfo *v7; // x1

  if ( (byte_42E83D5 & 1) == 0 )
  {
    sub_B5D5C4(&Method_PhotoTargetSelectDialog_OnclickCancelButton__, (_DWORD)method, v2, v3);
    byte_42E83D5 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v5 = Method_PhotoTargetSelectDialog_OnclickCancelButton__;
    if ( (*((_BYTE *)Method_PhotoTargetSelectDialog_OnclickCancelButton__ + 75) & 2) != 0 )
      v5 = (_QWORD *)sub_B5D5CC(Method_PhotoTargetSelectDialog_OnclickCancelButton__);
    v6 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v5, v5[3]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 1, 0LL);
    PhotoTargetSelectDialog__CloseDialog(this, v7);
  }
}


void __fastcall PhotoTargetSelectDialog__Open(
        PhotoTargetSelectDialog_o *this,
        System_Action_MyRoomControl_PHOTOCAMPAIGNTYPE__o *callBack,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  UILabel_o *titleLabel; // x21
  System_String_o *v28; // x0
  __int64 v29; // x1
  UILabel_o *messageLabel; // x21
  UILabel_o *onlyServantButtonLabel; // x21
  UILabel_o *withMasterButtonLabel; // x21
  UILabel_o *cancelButtonLabel; // x21
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  System_Action_o *v40; // x20

  if ( (byte_42E83D3 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)callBack, (_DWORD)method, v3);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_PhotoTargetSelectDialog__Open_b__12_0__, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_3326/*"COMMON_CONFIRM_CANCEL"*/, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_10555/*"PHOTO_TARGET_SELECT_DIALOG_TITLE"*/, v15, v16, v17);
    sub_B5D5C4(&StringLiteral_10554/*"PHOTO_TARGET_SELECT_DIALOG_ONLY_SERVANT_BUTTON"*/, v18, v19, v20);
    sub_B5D5C4(&StringLiteral_10553/*"PHOTO_TARGET_SELECT_DIALOG_MESSAGE"*/, v21, v22, v23);
    sub_B5D5C4(&StringLiteral_10556/*"PHOTO_TARGET_SELECT_DIALOG_WITH_MASTER_BUTTON"*/, v24, v25, v26);
    byte_42E83D3 = 1;
  }
  if ( !this->fields.state )
  {
    titleLabel = this->fields.titleLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v28 = LocalizationManager__Get((System_String_o *)StringLiteral_10555/*"PHOTO_TARGET_SELECT_DIALOG_TITLE"*/, 0LL);
    if ( !titleLabel )
      goto LABEL_13;
    UILabel__set_text(titleLabel, v28, 0LL);
    messageLabel = this->fields.messageLabel;
    v28 = LocalizationManager__Get((System_String_o *)StringLiteral_10553/*"PHOTO_TARGET_SELECT_DIALOG_MESSAGE"*/, 0LL);
    if ( !messageLabel )
      goto LABEL_13;
    UILabel__set_text(messageLabel, v28, 0LL);
    onlyServantButtonLabel = this->fields.onlyServantButtonLabel;
    v28 = LocalizationManager__Get((System_String_o *)StringLiteral_10554/*"PHOTO_TARGET_SELECT_DIALOG_ONLY_SERVANT_BUTTON"*/, 0LL);
    if ( !onlyServantButtonLabel
      || (UILabel__set_text(onlyServantButtonLabel, v28, 0LL),
          withMasterButtonLabel = this->fields.withMasterButtonLabel,
          v28 = LocalizationManager__Get((System_String_o *)StringLiteral_10556/*"PHOTO_TARGET_SELECT_DIALOG_WITH_MASTER_BUTTON"*/, 0LL),
          !withMasterButtonLabel)
      || (UILabel__set_text(withMasterButtonLabel, v28, 0LL),
          cancelButtonLabel = this->fields.cancelButtonLabel,
          v28 = LocalizationManager__Get((System_String_o *)StringLiteral_3326/*"COMMON_CONFIRM_CANCEL"*/, 0LL),
          !cancelButtonLabel) )
    {
LABEL_13:
      sub_B5D69C(v28, v29);
    }
    UILabel__set_text(cancelButtonLabel, v28, 0LL);
    this->fields.decideCallBack = callBack;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.decideCallBack,
      (System_Int32_array **)callBack,
      v34,
      v35,
      v36,
      v37,
      v38,
      v39);
    this->fields.state = 1;
    v40 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(v40, (Il2CppObject *)this, Method_PhotoTargetSelectDialog__Open_b__12_0__, 0LL);
    BaseDialog__Open((BaseDialog_o *)this, v40, 0, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *cancelButton; // x20
  __int64 v6; // x1
  UnityEngine_Component_o *v8; // x0

  if ( (byte_42E83D7 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E83D7 = 1;
  }
  cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(cancelButton, 0LL, 0LL) )
    return 0LL;
  v8 = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !v8 )
    sub_B5D69C(0LL, v6);
  return UnityEngine_Component__get_gameObject(v8, 0LL);
}