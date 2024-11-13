void __fastcall RequestResultDialog___ctor(RequestResultDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B1257E & 1) == 0 )
  {
    sub_1BCA7E0(&BaseDialog_TypeInfo, method, v2);
    byte_4B1257E = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall RequestResultDialog__CallOnClose(RequestResultDialog_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct System_Action_o *onClose; // x19
  PartyOrganizationUtility_o *p_onClose; // x0

  onClose = this->fields.onClose;
  if ( onClose )
  {
    p_onClose = (PartyOrganizationUtility_o *)&this->fields.onClose;
    p_onClose->klass = 0LL;
    sub_1BCA784(p_onClose, 0LL, v2, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))onClose->fields.m_target)(
      onClose->fields.original_method_info,
      *(_QWORD *)&onClose->fields.extra_arg);
  }
}


void __fastcall RequestResultDialog__CallOnDecide(RequestResultDialog_o *this, bool isOk, const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct System_Action_bool__o *onDecide; // x20
  PartyOrganizationUtility_o *p_onDecide; // x0

  onDecide = this->fields.onDecide;
  if ( onDecide )
  {
    p_onDecide = (PartyOrganizationUtility_o *)&this->fields.onDecide;
    p_onDecide->klass = 0LL;
    sub_1BCA784(p_onDecide, 0LL, (int64_t)method, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, _QWORD))onDecide->fields.m_target)(
      onDecide->fields.original_method_info,
      isOk,
      *(_QWORD *)&onDecide->fields.extra_arg);
  }
}


void __fastcall RequestResultDialog__Close(RequestResultDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  RequestResultDialog__Close_33305396(this, 0LL, v2);
}


void __fastcall RequestResultDialog__Close_33305396(
        RequestResultDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  System_Action_o *v15; // x20

  if ( (byte_4B12575 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, callback, method);
    sub_1BCA7E0(&Method_RequestResultDialog_EndClose__, v10, v11);
    byte_4B12575 = 1;
  }
  this->fields.onClose = callback;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.onClose,
    (int64_t)callback,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.isButtonEnable = 0;
  v15 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v12, v13, v14);
  System_Action___ctor(v15, (Il2CppObject *)this, Method_RequestResultDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v15, 0LL);
}


void __fastcall RequestResultDialog__EndClose(RequestResultDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  RequestResultDialog__Init(this, method);
  RequestResultDialog__CallOnClose(this, v3);
}


void __fastcall RequestResultDialog__EndOpen(RequestResultDialog_o *this, const MethodInfo *method)
{
  this->fields.isButtonEnable = 1;
}


int32_t __fastcall RequestResultDialog__GetKeepPanelDepth(RequestResultDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  UnityEngine_Object_o *TargetPanel; // x20
  UIPanel_o *v6; // x0
  __int64 v7; // x1
  int32_t *p_keepPanelDepth; // x8

  if ( (byte_4B12574 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B12574 = 1;
  }
  if ( this->fields.isInitPanelDepth )
    goto LABEL_9;
  this->fields.isInitPanelDepth = 1;
  TargetPanel = (UnityEngine_Object_o *)BaseDialog__get_TargetPanel((BaseDialog_o *)this, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
  if ( !UnityEngine_Object__op_Inequality(TargetPanel, 0LL, 0LL) )
  {
LABEL_9:
    p_keepPanelDepth = &this->fields.keepPanelDepth;
  }
  else
  {
    v6 = BaseDialog__get_TargetPanel((BaseDialog_o *)this, 0LL);
    if ( !v6 )
      sub_1BCAA3C(0LL, v7);
    p_keepPanelDepth = &v6->fields.mDepth;
  }
  return *p_keepPanelDepth;
}


void __fastcall RequestResultDialog__Init(RequestResultDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3
  RequestResultDialog_o *v4; // x19
  RequestResultDialog_o *v5; // x0
  const MethodInfo *v6; // x3
  RequestResultDialog_o *v7; // x0
  const MethodInfo *v8; // x3
  RequestResultDialog_o *v9; // x0
  const MethodInfo *v10; // x3
  RequestResultDialog_o *v11; // x0
  const MethodInfo *v12; // x3
  RequestResultDialog_o *v13; // x0
  const MethodInfo *v14; // x3
  RequestResultDialog_o *v15; // x0
  const MethodInfo *v16; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v18; // x1

  v4 = this;
  if ( (byte_4B1256F & 1) == 0 )
  {
    this = (RequestResultDialog_o *)sub_1BCA7E0(&StringLiteral_1/*""*/, method, v2);
    byte_4B1256F = 1;
  }
  RequestResultDialog__SetLabelText(this, v4->fields.titleLabel, (System_String_o *)StringLiteral_1/*""*/, v3);
  RequestResultDialog__SetLabelText(v5, v4->fields.messageLabel, (System_String_o *)StringLiteral_1/*""*/, v6);
  RequestResultDialog__SetLabelText(v7, v4->fields.okBtnLabel, (System_String_o *)StringLiteral_1/*""*/, v8);
  RequestResultDialog__SetLabelText(v9, v4->fields.itemMessageLabel, (System_String_o *)StringLiteral_1/*""*/, v10);
  RequestResultDialog__SetLabelText(v11, v4->fields.userItemNumLabel, (System_String_o *)StringLiteral_1/*""*/, v12);
  RequestResultDialog__SetLabelText(v13, v4->fields.cancelButtonLabel, (System_String_o *)StringLiteral_1/*""*/, v14);
  RequestResultDialog__SetLabelText(v15, v4->fields.decideButtonLabel, (System_String_o *)StringLiteral_1/*""*/, v16);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v4, 0LL);
  if ( !gameObject )
    sub_1BCAA3C(0LL, v18);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  BaseDialog__Init((BaseDialog_o *)v4, 0LL);
}


void __fastcall RequestResultDialog__OnClickCancel(RequestResultDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x2

  if ( (byte_4B12578 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_RequestResultDialog_OnClickCancel__, method, v2);
    byte_4B12578 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v4 = Method_RequestResultDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_RequestResultDialog_OnClickCancel__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_RequestResultDialog_OnClickCancel__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 1, 0LL);
    RequestResultDialog__CallOnDecide(this, 0, v6);
  }
}


void __fastcall RequestResultDialog__OnClickDecide(RequestResultDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x2

  if ( (byte_4B12577 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_RequestResultDialog_OnClickDecide__, method, v2);
    byte_4B12577 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v4 = Method_RequestResultDialog_OnClickDecide__;
    if ( (*((_BYTE *)Method_RequestResultDialog_OnClickDecide__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_RequestResultDialog_OnClickDecide__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
    RequestResultDialog__CallOnDecide(this, 1, v6);
  }
}


void __fastcall RequestResultDialog__OnClickOk(RequestResultDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x2

  if ( (byte_4B12576 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_RequestResultDialog_OnClickOk__, method, v2);
    byte_4B12576 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v4 = Method_RequestResultDialog_OnClickOk__;
    if ( (*((_BYTE *)Method_RequestResultDialog_OnClickOk__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_RequestResultDialog_OnClickOk__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
    RequestResultDialog__CallOnDecide(this, 1, v6);
  }
}


void __fastcall RequestResultDialog__Open(
        RequestResultDialog_o *this,
        System_String_o *message,
        System_String_o *numMessage,
        System_String_o *userItemNumMessage,
        System_Action_bool__o *onDecide,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x6

  if ( (byte_4B12570 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_1/*""*/, message, numMessage);
    byte_4B12570 = 1;
  }
  RequestResultDialog__OpenAddMsg(
    this,
    message,
    numMessage,
    userItemNumMessage,
    (System_String_o *)StringLiteral_1/*""*/,
    onDecide,
    v6);
}


void __fastcall RequestResultDialog__OpenAddMsg(
        RequestResultDialog_o *this,
        System_String_o *message,
        System_String_o *numMessage,
        System_String_o *userItemNumMessage,
        System_String_o *addMessage,
        System_Action_bool__o *onDecide,
        const MethodInfo *method)
{
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  UnityEngine_GameObject_o *KeepPanelDepth; // x0
  __int64 v20; // x1
  UnityEngine_GameObject_o *normalBuyWindowObj; // x8
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  char v28; // w24
  char v29; // w24
  RequestResultDialog_o *v30; // x0
  const MethodInfo *v31; // x4
  int32_t v32; // w3
  RequestResultDialog_o *v33; // x0
  const MethodInfo *v34; // x3
  RequestResultDialog_o *v35; // x0
  const MethodInfo *v36; // x3
  RequestResultDialog_o *v37; // x0
  const MethodInfo *v38; // x3
  UILabel_o **p_addMessage2Label; // x8
  RequestResultDialog_o *v40; // x0
  const MethodInfo *v41; // x3
  RequestResultDialog_o *v42; // x0
  const MethodInfo *v43; // x3
  RequestResultDialog_o *v44; // x0
  const MethodInfo *v45; // x3
  __int64 v46; // x1
  UILabel_o *okBtnLabel; // x20
  RequestResultDialog_o *v48; // x0
  const MethodInfo *v49; // x3
  RequestResultDialog_o *TargetPanel; // x0
  const MethodInfo *v51; // x3
  __int64 v52; // x1
  __int64 v53; // x2
  __int64 v54; // x3
  System_Action_o *v55; // x20

  if ( (byte_4B12571 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, message, numMessage);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_RequestResultDialog_EndOpen__, v15, v16);
    sub_1BCA7E0(&StringLiteral_3787/*"COMMON_CONFIRM_CLOSE"*/, v17, v18);
    byte_4B12571 = 1;
  }
  KeepPanelDepth = (UnityEngine_GameObject_o *)RequestResultDialog__GetKeepPanelDepth(this, (const MethodInfo *)message);
  normalBuyWindowObj = this->fields.normalBuyWindowObj;
  this->fields.keepPanelDepth = (int)KeepPanelDepth;
  if ( !normalBuyWindowObj )
    goto LABEL_20;
  UnityEngine_GameObject__SetActive(normalBuyWindowObj, 0, 0LL);
  KeepPanelDepth = this->fields.normalBuyAddMsgWindowObj;
  if ( !KeepPanelDepth )
    goto LABEL_20;
  UnityEngine_GameObject__SetActive(KeepPanelDepth, 0, 0LL);
  this->fields.onDecide = onDecide;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.onDecide, (int64_t)onDecide, v22, v23, v24, v25, v26, v27);
  KeepPanelDepth = (UnityEngine_GameObject_o *)System_String__IsNullOrEmpty(addMessage, 0LL);
  if ( !this->fields.itemBuyWindowObj )
    goto LABEL_20;
  v28 = (char)KeepPanelDepth;
  UnityEngine_GameObject__SetActive(this->fields.itemBuyWindowObj, (unsigned __int8)KeepPanelDepth & 1, 0LL);
  KeepPanelDepth = this->fields.itemBuyAddMsgWindowObj;
  if ( !KeepPanelDepth )
    goto LABEL_20;
  v29 = ~v28;
  UnityEngine_GameObject__SetActive(KeepPanelDepth, v29 & 1, 0LL);
  if ( (v29 & 1) != 0 )
  {
    RequestResultDialog__SetLabelFontSizeAdjust(v30, this->fields.itemMessage2Label, message, 30, v31);
    RequestResultDialog__SetLabelText(v40, this->fields.itemMessage2Label, message, v41);
    RequestResultDialog__SetLabelText(v42, this->fields.numMessage2Label, numMessage, v43);
    RequestResultDialog__SetLabelText(v44, this->fields.userItemNum2Label, userItemNumMessage, v45);
    p_addMessage2Label = &this->fields.addMessage2Label;
    userItemNumMessage = addMessage;
  }
  else
  {
    v32 = this->fields.itemMessageLabelOverwriteFontSize <= 0 ? 30 : this->fields.itemMessageLabelOverwriteFontSize;
    RequestResultDialog__SetLabelFontSizeAdjust(v30, this->fields.itemMessageLabel, message, v32, v31);
    RequestResultDialog__SetLabelText(v33, this->fields.itemMessageLabel, message, v34);
    RequestResultDialog__SetLabelText(v35, this->fields.numMessageLabel, numMessage, v36);
    p_addMessage2Label = &this->fields.userItemNumLabel;
  }
  RequestResultDialog__SetLabelText(v37, *p_addMessage2Label, userItemNumMessage, v38);
  KeepPanelDepth = this->fields.okBtnObj;
  if ( !KeepPanelDepth )
    goto LABEL_20;
  UnityEngine_GameObject__SetActive(KeepPanelDepth, 1, 0LL);
  KeepPanelDepth = this->fields.cancelButtonObj;
  if ( !KeepPanelDepth )
    goto LABEL_20;
  UnityEngine_GameObject__SetActive(KeepPanelDepth, 0, 0LL);
  KeepPanelDepth = this->fields.decideButtonObj;
  if ( !KeepPanelDepth )
    goto LABEL_20;
  UnityEngine_GameObject__SetActive(KeepPanelDepth, 0, 0LL);
  okBtnLabel = this->fields.okBtnLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v46);
  v48 = (RequestResultDialog_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3787/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
  RequestResultDialog__SetLabelText(v48, okBtnLabel, (System_String_o *)v48, v49);
  TargetPanel = (RequestResultDialog_o *)BaseDialog__get_TargetPanel((BaseDialog_o *)this, 0LL);
  RequestResultDialog__SetPanelDepth(TargetPanel, (UIPanel_o *)TargetPanel, this->fields.keepPanelDepth, v51);
  ((void (__fastcall *)(RequestResultDialog_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._5_set_closeBtnObject.method)(
    this,
    0LL,
    this->klass->vtable._6_get_closeBtnPath.methodPtr);
  KeepPanelDepth = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !KeepPanelDepth )
LABEL_20:
    sub_1BCAA3C(KeepPanelDepth, v20);
  UnityEngine_GameObject__SetActive(KeepPanelDepth, 1, 0LL);
  this->fields.isButtonEnable = 0;
  v55 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v52, v53, v54);
  System_Action___ctor(v55, (Il2CppObject *)this, Method_RequestResultDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v55, 0, 0LL);
}


void __fastcall RequestResultDialog__OpenAddMsg_33304380(
        RequestResultDialog_o *this,
        System_String_o *title,
        System_String_o *message,
        System_String_o *addMessage,
        System_Action_bool__o *onDecide,
        int32_t panelDepth,
        int32_t fontSize,
        int32_t message2Y,
        int32_t addMessageY,
        System_String_o *cancelMessage,
        System_String_o *decideMessage,
        const MethodInfo *method)
{
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  const MethodInfo *v28; // x1
  UnityEngine_GameObject_o *KeepPanelDepth; // x0
  __int64 v30; // x1
  UnityEngine_GameObject_o *itemBuyWindowObj; // x8
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  char v38; // w28
  char v39; // w28
  RequestResultDialog_o *v40; // x0
  const MethodInfo *v41; // x3
  System_String_o *v42; // x2
  RequestResultDialog_o *v43; // x0
  const MethodInfo *v44; // x4
  RequestResultDialog_o *v45; // x0
  const MethodInfo *v46; // x3
  RequestResultDialog_o *v47; // x0
  const MethodInfo *v48; // x4
  RequestResultDialog_o *v49; // x0
  const MethodInfo *v50; // x3
  RequestResultDialog_o *v51; // x0
  const MethodInfo *v52; // x2
  RequestResultDialog_o *v53; // x0
  const MethodInfo *v54; // x4
  RequestResultDialog_o *v55; // x0
  const MethodInfo *v56; // x3
  RequestResultDialog_o *v57; // x0
  const MethodInfo *v58; // x2
  __int64 v59; // x1
  struct UILabel_o *okBtnLabel; // x21
  RequestResultDialog_o *v61; // x0
  const MethodInfo *v62; // x3
  UILabel_o *decideButtonLabel; // x1
  System_String_o *v64; // x2
  RequestResultDialog_o *v65; // x0
  const MethodInfo *v66; // x3
  RequestResultDialog_o *TargetPanel; // x0
  const MethodInfo *v68; // x3
  __int64 v69; // x1
  __int64 v70; // x2
  __int64 v71; // x3
  System_Action_o *v72; // x20

  if ( (byte_4B12573 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, title, message);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v20, v21);
    sub_1BCA7E0(&Method_RequestResultDialog_EndOpen__, v22, v23);
    sub_1BCA7E0(&StringLiteral_3787/*"COMMON_CONFIRM_CLOSE"*/, v24, v25);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v26, v27);
    byte_4B12573 = 1;
  }
  BaseDialog__get_TargetPanel((BaseDialog_o *)this, 0LL);
  KeepPanelDepth = (UnityEngine_GameObject_o *)RequestResultDialog__GetKeepPanelDepth(this, v28);
  itemBuyWindowObj = this->fields.itemBuyWindowObj;
  this->fields.keepPanelDepth = (int)KeepPanelDepth;
  if ( !itemBuyWindowObj )
    goto LABEL_27;
  UnityEngine_GameObject__SetActive(itemBuyWindowObj, 0, 0LL);
  KeepPanelDepth = this->fields.itemBuyAddMsgWindowObj;
  if ( !KeepPanelDepth )
    goto LABEL_27;
  UnityEngine_GameObject__SetActive(KeepPanelDepth, 0, 0LL);
  this->fields.onDecide = onDecide;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.onDecide, (int64_t)onDecide, v32, v33, v34, v35, v36, v37);
  KeepPanelDepth = (UnityEngine_GameObject_o *)System_String__IsNullOrEmpty(addMessage, 0LL);
  if ( !this->fields.normalBuyWindowObj )
    goto LABEL_27;
  v38 = (char)KeepPanelDepth;
  UnityEngine_GameObject__SetActive(this->fields.normalBuyWindowObj, (unsigned __int8)KeepPanelDepth & 1, 0LL);
  KeepPanelDepth = this->fields.normalBuyAddMsgWindowObj;
  if ( !KeepPanelDepth )
    goto LABEL_27;
  v39 = ~v38;
  UnityEngine_GameObject__SetActive(KeepPanelDepth, v39 & 1, 0LL);
  v42 = title ? title : (System_String_o *)StringLiteral_1/*""*/;
  if ( (v39 & 1) != 0 )
  {
    RequestResultDialog__SetLabelText(v40, this->fields.title2Label, v42, v41);
    RequestResultDialog__SetLabelFontSizeAdjust(v47, this->fields.message2Label, message, fontSize, v48);
    RequestResultDialog__SetLabelText(v49, this->fields.message2Label, message, v50);
    RequestResultDialog__SetLabelLacalPositionY(v51, this->fields.message2Label, (float)message2Y, v52);
    RequestResultDialog__SetLabelFontSizeAdjust(v53, this->fields.addMessageLabel, message, fontSize, v54);
    RequestResultDialog__SetLabelText(v55, this->fields.addMessageLabel, addMessage, v56);
    RequestResultDialog__SetLabelLacalPositionY(v57, this->fields.addMessageLabel, (float)addMessageY, v58);
  }
  else
  {
    RequestResultDialog__SetLabelText(v40, this->fields.titleLabel, v42, v41);
    RequestResultDialog__SetLabelFontSizeAdjust(v43, this->fields.messageLabel, message, fontSize, v44);
    RequestResultDialog__SetLabelText(v45, this->fields.messageLabel, message, v46);
  }
  KeepPanelDepth = this->fields.okBtnObj;
  if ( !KeepPanelDepth )
    goto LABEL_27;
  if ( __PAIR128__((unsigned __int64)decideMessage, (unsigned __int64)cancelMessage) != 0 )
  {
    UnityEngine_GameObject__SetActive(KeepPanelDepth, 0, 0LL);
    KeepPanelDepth = this->fields.cancelButtonObj;
    if ( KeepPanelDepth )
    {
      UnityEngine_GameObject__SetActive(KeepPanelDepth, 1, 0LL);
      KeepPanelDepth = this->fields.decideButtonObj;
      if ( KeepPanelDepth )
      {
        UnityEngine_GameObject__SetActive(KeepPanelDepth, 1, 0LL);
        RequestResultDialog__SetLabelText(v65, this->fields.cancelButtonLabel, cancelMessage, v66);
        decideButtonLabel = this->fields.decideButtonLabel;
        v64 = decideMessage;
        goto LABEL_23;
      }
    }
LABEL_27:
    sub_1BCAA3C(KeepPanelDepth, v30);
  }
  UnityEngine_GameObject__SetActive(KeepPanelDepth, 1, 0LL);
  KeepPanelDepth = this->fields.cancelButtonObj;
  if ( !KeepPanelDepth )
    goto LABEL_27;
  UnityEngine_GameObject__SetActive(KeepPanelDepth, 0, 0LL);
  KeepPanelDepth = this->fields.decideButtonObj;
  if ( !KeepPanelDepth )
    goto LABEL_27;
  UnityEngine_GameObject__SetActive(KeepPanelDepth, 0, 0LL);
  okBtnLabel = this->fields.okBtnLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v59);
  v61 = (RequestResultDialog_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3787/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
  decideButtonLabel = okBtnLabel;
  v64 = (System_String_o *)v61;
LABEL_23:
  RequestResultDialog__SetLabelText(v61, decideButtonLabel, v64, v62);
  ((void (__fastcall *)(RequestResultDialog_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._5_set_closeBtnObject.method)(
    this,
    0LL,
    this->klass->vtable._6_get_closeBtnPath.methodPtr);
  KeepPanelDepth = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !KeepPanelDepth )
    goto LABEL_27;
  UnityEngine_GameObject__SetActive(KeepPanelDepth, 1, 0LL);
  TargetPanel = (RequestResultDialog_o *)BaseDialog__get_TargetPanel((BaseDialog_o *)this, 0LL);
  if ( (panelDepth & 0x80000000) != 0 )
    panelDepth = this->fields.keepPanelDepth;
  RequestResultDialog__SetPanelDepth(TargetPanel, (UIPanel_o *)TargetPanel, panelDepth, v68);
  this->fields.isButtonEnable = 0;
  v72 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v69, v70, v71);
  System_Action___ctor(v72, (Il2CppObject *)this, Method_RequestResultDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v72, 0, 0LL);
}


void __fastcall RequestResultDialog__Open_33304228(
        RequestResultDialog_o *this,
        System_String_o *title,
        System_String_o *message,
        System_Action_bool__o *onDecide,
        int32_t panelDepth,
        const MethodInfo *method)
{
  const MethodInfo *v11; // [xsp+18h] [xbp-48h]

  if ( (byte_4B12572 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_1/*""*/, title, message);
    byte_4B12572 = 1;
  }
  RequestResultDialog__OpenAddMsg_33304380(
    this,
    title,
    message,
    (System_String_o *)StringLiteral_1/*""*/,
    onDecide,
    panelDepth,
    30,
    45,
    -45,
    0LL,
    0LL,
    v11);
}


void __fastcall RequestResultDialog__SetLabelFontSizeAdjust(
        RequestResultDialog_o *this,
        UILabel_o *label,
        System_String_o *text,
        int32_t size,
        const MethodInfo *method)
{
  if ( (byte_4B1257A & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, label, text);
    byte_4B1257A = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, label);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)label, 0LL, 0LL) )
    WrapControlText__fontSizeAdjust(label, text, size, 0LL);
}


void __fastcall RequestResultDialog__SetLabelLacalPositionY(
        RequestResultDialog_o *this,
        UILabel_o *label,
        float y,
        const MethodInfo *method)
{
  _BOOL8 v6; // x0
  __int64 v7; // x1
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_4B1257C & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, label, method);
    byte_4B1257C = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, label);
  v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)label, 0LL, 0LL);
  if ( !v6 )
  {
    if ( !label )
      sub_1BCAA3C(v6, v7);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)label, 0LL);
    GameObjectExtensions__SetLocalPositionY(gameObject, y, 0LL);
  }
}


void __fastcall RequestResultDialog__SetLabelText(
        RequestResultDialog_o *this,
        UILabel_o *label,
        System_String_o *text,
        const MethodInfo *method)
{
  _BOOL8 v6; // x0
  __int64 v7; // x1

  if ( (byte_4B12579 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, label, text);
    byte_4B12579 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, label);
  v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)label, 0LL, 0LL);
  if ( !v6 )
  {
    if ( !label )
      sub_1BCAA3C(v6, v7);
    UILabel__set_text(label, text, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RequestResultDialog__SetPanelDepth(
        RequestResultDialog_o *this,
        UIPanel_o *panel,
        int32_t depth,
        const MethodInfo *method)
{
  _BOOL8 v6; // x0
  __int64 v7; // x1

  if ( (byte_4B1257B & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, panel, *(_QWORD *)&depth);
    byte_4B1257B = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, panel);
  v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)panel, 0LL, 0LL);
  if ( !v6 )
  {
    if ( !panel )
      sub_1BCAA3C(v6, v7);
    UIPanel__set_depth(panel, depth, 0LL);
  }
}


System_String_o *__fastcall RequestResultDialog__get_closeBtnPath(
        RequestResultDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_GameObject_o *cancelButtonObj; // x0
  __int64 *v7; // x8

  if ( (byte_4B1257D & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_15808/*"Window/CancelButton"*/, method, v2);
    sub_1BCA7E0(&StringLiteral_15819/*"Window/OkBtn"*/, v4, v5);
    byte_4B1257D = 1;
  }
  cancelButtonObj = this->fields.cancelButtonObj;
  if ( !cancelButtonObj )
    sub_1BCAA3C(0LL, method);
  if ( UnityEngine_GameObject__get_activeInHierarchy(cancelButtonObj, 0LL) )
    v7 = &StringLiteral_15808/*"Window/CancelButton"*/;
  else
    v7 = &StringLiteral_15819/*"Window/OkBtn"*/;
  return (System_String_o *)*v7;
}