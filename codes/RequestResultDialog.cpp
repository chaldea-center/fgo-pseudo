void __fastcall RequestResultDialog___ctor(RequestResultDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4BB09F2 & 1) == 0 )
  {
    sub_1C13D24(&BaseDialog_TypeInfo, method);
    byte_4BB09F2 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
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
    sub_1C13CC8(p_onClose, 0LL, v2, v3, v4, v5, v6, v7);
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
    sub_1C13CC8(p_onDecide, 0LL, (int64_t)method, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, _QWORD))onDecide->fields.m_target)(
      onDecide->fields.original_method_info,
      isOk,
      *(_QWORD *)&onDecide->fields.extra_arg);
  }
}


void __fastcall RequestResultDialog__Close(RequestResultDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  RequestResultDialog__Close_33665184(this, 0LL, v2);
}


void __fastcall RequestResultDialog__Close_33665184(
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
  System_Action_o *v11; // x20

  if ( (byte_4BB09E9 & 1) == 0 )
  {
    sub_1C13D24(&System_Action_TypeInfo, callback);
    sub_1C13D24(&Method_RequestResultDialog_EndClose__, v10);
    byte_4BB09E9 = 1;
  }
  this->fields.onClose = callback;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.onClose,
    (int64_t)callback,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.isButtonEnable = 0;
  v11 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_RequestResultDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v11, 0LL);
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
  UnityEngine_Object_o *TargetPanel; // x20
  UIPanel_o *v4; // x0
  __int64 v5; // x1
  int32_t *p_keepPanelDepth; // x8

  if ( (byte_4BB09E8 & 1) == 0 )
  {
    sub_1C13D24(&UnityEngine_Object_TypeInfo, method);
    byte_4BB09E8 = 1;
  }
  if ( this->fields.isInitPanelDepth )
    goto LABEL_9;
  this->fields.isInitPanelDepth = 1;
  TargetPanel = (UnityEngine_Object_o *)BaseDialog__get_TargetPanel((BaseDialog_o *)this, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(TargetPanel, 0LL, 0LL) )
  {
LABEL_9:
    p_keepPanelDepth = &this->fields.keepPanelDepth;
  }
  else
  {
    v4 = BaseDialog__get_TargetPanel((BaseDialog_o *)this, 0LL);
    if ( !v4 )
      sub_1C13F80(0LL, v5);
    p_keepPanelDepth = &v4->fields.mDepth;
  }
  return *p_keepPanelDepth;
}


void __fastcall RequestResultDialog__Init(RequestResultDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  RequestResultDialog_o *v3; // x19
  RequestResultDialog_o *v4; // x0
  const MethodInfo *v5; // x3
  RequestResultDialog_o *v6; // x0
  const MethodInfo *v7; // x3
  RequestResultDialog_o *v8; // x0
  const MethodInfo *v9; // x3
  RequestResultDialog_o *v10; // x0
  const MethodInfo *v11; // x3
  RequestResultDialog_o *v12; // x0
  const MethodInfo *v13; // x3
  RequestResultDialog_o *v14; // x0
  const MethodInfo *v15; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v17; // x1

  v3 = this;
  if ( (byte_4BB09E3 & 1) == 0 )
  {
    this = (RequestResultDialog_o *)sub_1C13D24(&StringLiteral_1/*""*/, method);
    byte_4BB09E3 = 1;
  }
  RequestResultDialog__SetLabelText(this, v3->fields.titleLabel, (System_String_o *)StringLiteral_1/*""*/, v2);
  RequestResultDialog__SetLabelText(v4, v3->fields.messageLabel, (System_String_o *)StringLiteral_1/*""*/, v5);
  RequestResultDialog__SetLabelText(v6, v3->fields.okBtnLabel, (System_String_o *)StringLiteral_1/*""*/, v7);
  RequestResultDialog__SetLabelText(v8, v3->fields.itemMessageLabel, (System_String_o *)StringLiteral_1/*""*/, v9);
  RequestResultDialog__SetLabelText(v10, v3->fields.userItemNumLabel, (System_String_o *)StringLiteral_1/*""*/, v11);
  RequestResultDialog__SetLabelText(v12, v3->fields.cancelButtonLabel, (System_String_o *)StringLiteral_1/*""*/, v13);
  RequestResultDialog__SetLabelText(v14, v3->fields.decideButtonLabel, (System_String_o *)StringLiteral_1/*""*/, v15);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v3, 0LL);
  if ( !gameObject )
    sub_1C13F80(0LL, v17);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  BaseDialog__Init((BaseDialog_o *)v3, 0LL);
}


void __fastcall RequestResultDialog__OnClickCancel(RequestResultDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4BB09EC & 1) == 0 )
  {
    sub_1C13D24(&Method_RequestResultDialog_OnClickCancel__, method);
    byte_4BB09EC = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_RequestResultDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_RequestResultDialog_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C13D3C(Method_RequestResultDialog_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C13D08(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0LL);
    RequestResultDialog__CallOnDecide(this, 0, v5);
  }
}


void __fastcall RequestResultDialog__OnClickDecide(RequestResultDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4BB09EB & 1) == 0 )
  {
    sub_1C13D24(&Method_RequestResultDialog_OnClickDecide__, method);
    byte_4BB09EB = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_RequestResultDialog_OnClickDecide__;
    if ( (*((_BYTE *)Method_RequestResultDialog_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C13D3C(Method_RequestResultDialog_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C13D08(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
    RequestResultDialog__CallOnDecide(this, 1, v5);
  }
}


void __fastcall RequestResultDialog__OnClickOk(RequestResultDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4BB09EA & 1) == 0 )
  {
    sub_1C13D24(&Method_RequestResultDialog_OnClickOk__, method);
    byte_4BB09EA = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_RequestResultDialog_OnClickOk__;
    if ( (*((_BYTE *)Method_RequestResultDialog_OnClickOk__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C13D3C(Method_RequestResultDialog_OnClickOk__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C13D08(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
    RequestResultDialog__CallOnDecide(this, 1, v5);
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

  if ( (byte_4BB09E4 & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_1/*""*/, message);
    byte_4BB09E4 = 1;
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
  __int64 v14; // x1
  __int64 v15; // x1
  UnityEngine_GameObject_o *KeepPanelDepth; // x0
  __int64 v17; // x1
  UnityEngine_GameObject_o *normalBuyWindowObj; // x8
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  char v25; // w24
  char v26; // w24
  RequestResultDialog_o *v27; // x0
  const MethodInfo *v28; // x4
  int32_t v29; // w3
  RequestResultDialog_o *v30; // x0
  const MethodInfo *v31; // x3
  RequestResultDialog_o *v32; // x0
  const MethodInfo *v33; // x3
  RequestResultDialog_o *v34; // x0
  const MethodInfo *v35; // x3
  UILabel_o **p_addMessage2Label; // x8
  RequestResultDialog_o *v37; // x0
  const MethodInfo *v38; // x3
  RequestResultDialog_o *v39; // x0
  const MethodInfo *v40; // x3
  RequestResultDialog_o *v41; // x0
  const MethodInfo *v42; // x3
  UILabel_o *okBtnLabel; // x20
  RequestResultDialog_o *v44; // x0
  const MethodInfo *v45; // x3
  RequestResultDialog_o *TargetPanel; // x0
  const MethodInfo *v47; // x3
  System_Action_o *v48; // x20

  if ( (byte_4BB09E5 & 1) == 0 )
  {
    sub_1C13D24(&System_Action_TypeInfo, message);
    sub_1C13D24(&LocalizationManager_TypeInfo, v13);
    sub_1C13D24(&Method_RequestResultDialog_EndOpen__, v14);
    sub_1C13D24(&StringLiteral_3799/*"COMMNAD_SPELL_RECV_TXT"*/, v15);
    byte_4BB09E5 = 1;
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
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.onDecide, (int64_t)onDecide, v19, v20, v21, v22, v23, v24);
  KeepPanelDepth = (UnityEngine_GameObject_o *)System_String__IsNullOrEmpty(addMessage, 0LL);
  if ( !this->fields.itemBuyWindowObj )
    goto LABEL_20;
  v25 = (char)KeepPanelDepth;
  UnityEngine_GameObject__SetActive(this->fields.itemBuyWindowObj, (unsigned __int8)KeepPanelDepth & 1, 0LL);
  KeepPanelDepth = this->fields.itemBuyAddMsgWindowObj;
  if ( !KeepPanelDepth )
    goto LABEL_20;
  v26 = ~v25;
  UnityEngine_GameObject__SetActive(KeepPanelDepth, v26 & 1, 0LL);
  if ( (v26 & 1) != 0 )
  {
    RequestResultDialog__SetLabelFontSizeAdjust(v27, this->fields.itemMessage2Label, message, 30, v28);
    RequestResultDialog__SetLabelText(v37, this->fields.itemMessage2Label, message, v38);
    RequestResultDialog__SetLabelText(v39, this->fields.numMessage2Label, numMessage, v40);
    RequestResultDialog__SetLabelText(v41, this->fields.userItemNum2Label, userItemNumMessage, v42);
    p_addMessage2Label = &this->fields.addMessage2Label;
    userItemNumMessage = addMessage;
  }
  else
  {
    v29 = this->fields.itemMessageLabelOverwriteFontSize <= 0 ? 30 : this->fields.itemMessageLabelOverwriteFontSize;
    RequestResultDialog__SetLabelFontSizeAdjust(v27, this->fields.itemMessageLabel, message, v29, v28);
    RequestResultDialog__SetLabelText(v30, this->fields.itemMessageLabel, message, v31);
    RequestResultDialog__SetLabelText(v32, this->fields.numMessageLabel, numMessage, v33);
    p_addMessage2Label = &this->fields.userItemNumLabel;
  }
  RequestResultDialog__SetLabelText(v34, *p_addMessage2Label, userItemNumMessage, v35);
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
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v44 = (RequestResultDialog_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3799/*"COMMNAD_SPELL_RECV_TXT"*/, 0LL);
  RequestResultDialog__SetLabelText(v44, okBtnLabel, (System_String_o *)v44, v45);
  TargetPanel = (RequestResultDialog_o *)BaseDialog__get_TargetPanel((BaseDialog_o *)this, 0LL);
  RequestResultDialog__SetPanelDepth(TargetPanel, (UIPanel_o *)TargetPanel, this->fields.keepPanelDepth, v47);
  ((void (__fastcall *)(RequestResultDialog_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._5_set_closeBtnObject.method)(
    this,
    0LL,
    this->klass->vtable._6_get_closeBtnPath.methodPtr);
  KeepPanelDepth = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !KeepPanelDepth )
LABEL_20:
    sub_1C13F80(KeepPanelDepth, v17);
  UnityEngine_GameObject__SetActive(KeepPanelDepth, 1, 0LL);
  this->fields.isButtonEnable = 0;
  v48 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
  System_Action___ctor(v48, (Il2CppObject *)this, Method_RequestResultDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v48, 0, 0LL);
}


void __fastcall RequestResultDialog__OpenAddMsg_33664168(
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
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  const MethodInfo *v24; // x1
  UnityEngine_GameObject_o *KeepPanelDepth; // x0
  __int64 v26; // x1
  UnityEngine_GameObject_o *itemBuyWindowObj; // x8
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  char v34; // w28
  char v35; // w28
  RequestResultDialog_o *v36; // x0
  const MethodInfo *v37; // x3
  System_String_o *v38; // x2
  RequestResultDialog_o *v39; // x0
  const MethodInfo *v40; // x4
  RequestResultDialog_o *v41; // x0
  const MethodInfo *v42; // x3
  RequestResultDialog_o *v43; // x0
  const MethodInfo *v44; // x4
  RequestResultDialog_o *v45; // x0
  const MethodInfo *v46; // x3
  RequestResultDialog_o *v47; // x0
  const MethodInfo *v48; // x2
  RequestResultDialog_o *v49; // x0
  const MethodInfo *v50; // x4
  RequestResultDialog_o *v51; // x0
  const MethodInfo *v52; // x3
  RequestResultDialog_o *v53; // x0
  const MethodInfo *v54; // x2
  struct UILabel_o *okBtnLabel; // x21
  RequestResultDialog_o *v56; // x0
  const MethodInfo *v57; // x3
  UILabel_o *decideButtonLabel; // x1
  System_String_o *v59; // x2
  RequestResultDialog_o *v60; // x0
  const MethodInfo *v61; // x3
  RequestResultDialog_o *TargetPanel; // x0
  const MethodInfo *v63; // x3
  System_Action_o *v64; // x20

  if ( (byte_4BB09E7 & 1) == 0 )
  {
    sub_1C13D24(&System_Action_TypeInfo, title);
    sub_1C13D24(&LocalizationManager_TypeInfo, v20);
    sub_1C13D24(&Method_RequestResultDialog_EndOpen__, v21);
    sub_1C13D24(&StringLiteral_3799/*"COMMNAD_SPELL_RECV_TXT"*/, v22);
    sub_1C13D24(&StringLiteral_1/*""*/, v23);
    byte_4BB09E7 = 1;
  }
  BaseDialog__get_TargetPanel((BaseDialog_o *)this, 0LL);
  KeepPanelDepth = (UnityEngine_GameObject_o *)RequestResultDialog__GetKeepPanelDepth(this, v24);
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
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.onDecide, (int64_t)onDecide, v28, v29, v30, v31, v32, v33);
  KeepPanelDepth = (UnityEngine_GameObject_o *)System_String__IsNullOrEmpty(addMessage, 0LL);
  if ( !this->fields.normalBuyWindowObj )
    goto LABEL_27;
  v34 = (char)KeepPanelDepth;
  UnityEngine_GameObject__SetActive(this->fields.normalBuyWindowObj, (unsigned __int8)KeepPanelDepth & 1, 0LL);
  KeepPanelDepth = this->fields.normalBuyAddMsgWindowObj;
  if ( !KeepPanelDepth )
    goto LABEL_27;
  v35 = ~v34;
  UnityEngine_GameObject__SetActive(KeepPanelDepth, v35 & 1, 0LL);
  v38 = title ? title : (System_String_o *)StringLiteral_1/*""*/;
  if ( (v35 & 1) != 0 )
  {
    RequestResultDialog__SetLabelText(v36, this->fields.title2Label, v38, v37);
    RequestResultDialog__SetLabelFontSizeAdjust(v43, this->fields.message2Label, message, fontSize, v44);
    RequestResultDialog__SetLabelText(v45, this->fields.message2Label, message, v46);
    RequestResultDialog__SetLabelLacalPositionY(v47, this->fields.message2Label, (float)message2Y, v48);
    RequestResultDialog__SetLabelFontSizeAdjust(v49, this->fields.addMessageLabel, message, fontSize, v50);
    RequestResultDialog__SetLabelText(v51, this->fields.addMessageLabel, addMessage, v52);
    RequestResultDialog__SetLabelLacalPositionY(v53, this->fields.addMessageLabel, (float)addMessageY, v54);
  }
  else
  {
    RequestResultDialog__SetLabelText(v36, this->fields.titleLabel, v38, v37);
    RequestResultDialog__SetLabelFontSizeAdjust(v39, this->fields.messageLabel, message, fontSize, v40);
    RequestResultDialog__SetLabelText(v41, this->fields.messageLabel, message, v42);
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
        RequestResultDialog__SetLabelText(v60, this->fields.cancelButtonLabel, cancelMessage, v61);
        decideButtonLabel = this->fields.decideButtonLabel;
        v59 = decideMessage;
        goto LABEL_23;
      }
    }
LABEL_27:
    sub_1C13F80(KeepPanelDepth, v26);
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
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v56 = (RequestResultDialog_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3799/*"COMMNAD_SPELL_RECV_TXT"*/, 0LL);
  decideButtonLabel = okBtnLabel;
  v59 = (System_String_o *)v56;
LABEL_23:
  RequestResultDialog__SetLabelText(v56, decideButtonLabel, v59, v57);
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
  RequestResultDialog__SetPanelDepth(TargetPanel, (UIPanel_o *)TargetPanel, panelDepth, v63);
  this->fields.isButtonEnable = 0;
  v64 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
  System_Action___ctor(v64, (Il2CppObject *)this, Method_RequestResultDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v64, 0, 0LL);
}


void __fastcall RequestResultDialog__Open_33664016(
        RequestResultDialog_o *this,
        System_String_o *title,
        System_String_o *message,
        System_Action_bool__o *onDecide,
        int32_t panelDepth,
        const MethodInfo *method)
{
  const MethodInfo *v11; // [xsp+18h] [xbp-48h]

  if ( (byte_4BB09E6 & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_1/*""*/, title);
    byte_4BB09E6 = 1;
  }
  RequestResultDialog__OpenAddMsg_33664168(
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
  if ( (byte_4BB09EE & 1) == 0 )
  {
    sub_1C13D24(&UnityEngine_Object_TypeInfo, label);
    byte_4BB09EE = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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

  if ( (byte_4BB09F0 & 1) == 0 )
  {
    sub_1C13D24(&UnityEngine_Object_TypeInfo, label);
    byte_4BB09F0 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)label, 0LL, 0LL);
  if ( !v6 )
  {
    if ( !label )
      sub_1C13F80(v6, v7);
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

  if ( (byte_4BB09ED & 1) == 0 )
  {
    sub_1C13D24(&UnityEngine_Object_TypeInfo, label);
    byte_4BB09ED = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)label, 0LL, 0LL);
  if ( !v6 )
  {
    if ( !label )
      sub_1C13F80(v6, v7);
    UILabel__set_text(label, text, 0LL);
  }
}


void __fastcall RequestResultDialog__SetPanelDepth(
        RequestResultDialog_o *this,
        UIPanel_o *panel,
        int32_t depth,
        const MethodInfo *method)
{
  _BOOL8 v6; // x0
  __int64 v7; // x1

  if ( (byte_4BB09EF & 1) == 0 )
  {
    sub_1C13D24(&UnityEngine_Object_TypeInfo, panel);
    byte_4BB09EF = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)panel, 0LL, 0LL);
  if ( !v6 )
  {
    if ( !panel )
      sub_1C13F80(v6, v7);
    UIPanel__set_depth(panel, depth, 0LL);
  }
}


System_String_o *__fastcall RequestResultDialog__get_closeBtnPath(
        RequestResultDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *cancelButtonObj; // x0
  __int64 *v5; // x8

  if ( (byte_4BB09F1 & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_15884/*"White space not allowed before '?', '*', or '+'."*/, method);
    sub_1C13D24(&StringLiteral_15895/*"Window"*/, v3);
    byte_4BB09F1 = 1;
  }
  cancelButtonObj = this->fields.cancelButtonObj;
  if ( !cancelButtonObj )
    sub_1C13F80(0LL, method);
  if ( UnityEngine_GameObject__get_activeInHierarchy(cancelButtonObj, 0LL) )
    v5 = &StringLiteral_15884/*"White space not allowed before '?', '*', or '+'."*/;
  else
    v5 = &StringLiteral_15895/*"Window"*/;
  return (System_String_o *)*v5;
}