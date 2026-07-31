void RequestResultDialog___ctor(RequestResultDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_5934560 & 1) == 0 )
  {
    sub_21FFC50(&BaseDialog_TypeInfo);
    byte_5934560 = 1;
  }
  if ( !*(&BaseDialog_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method, v2);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void RequestResultDialog__CallOnClose(RequestResultDialog_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct System_Action_o *onClose; // x19

  onClose = this->fields.onClose;
  if ( onClose )
  {
    this->fields.onClose = 0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.onClose, 0, v2, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(intptr_t, intptr_t))onClose->fields.invoke_impl)(
      onClose->fields.method_code,
      onClose->fields.method);
  }
}


void RequestResultDialog__CallOnDecide(RequestResultDialog_o *this, bool isOk, const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct System_Action_bool__o *onDecide; // x20

  onDecide = this->fields.onDecide;
  if ( onDecide )
  {
    this->fields.onDecide = 0;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.onDecide,
      0,
      (System_String_o *)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    ((void (__fastcall *)(intptr_t, bool, intptr_t))onDecide->fields.invoke_impl)(
      onDecide->fields.method_code,
      isOk,
      onDecide->fields.method);
  }
}


void RequestResultDialog__Close(RequestResultDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  RequestResultDialog__Close_41764024(this, 0, v2);
}


void RequestResultDialog__Close_41764024(
        RequestResultDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_Action_c *v10; // x0
  System_Action_o *v11; // x20

  if ( (byte_5934557 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_RequestResultDialog_EndClose__);
    byte_5934557 = 1;
  }
  this->fields.onClose = callback;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.onClose,
    (int32_t)callback,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v10 = System_Action_TypeInfo;
  this->fields.isButtonEnable = 0;
  v11 = (System_Action_o *)sub_21FFEBC(v10);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_RequestResultDialog_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v11, 0);
}


void RequestResultDialog__EndClose(RequestResultDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  RequestResultDialog__Init(this, method);
  RequestResultDialog__CallOnClose(this, v3);
}


void RequestResultDialog__EndOpen(RequestResultDialog_o *this, const MethodInfo *method)
{
  this->fields.isButtonEnable = 1;
}


int32_t RequestResultDialog__GetKeepPanelDepth(RequestResultDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x2
  UnityEngine_Object_o *TargetPanel; // x20
  UIPanel_o *v6; // x0
  __int64 v7; // x1
  int32_t *p_keepPanelDepth; // x8

  if ( (byte_5934556 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5934556 = 1;
  }
  if ( this->fields.isInitPanelDepth )
    goto LABEL_9;
  this->fields.isInitPanelDepth = 1;
  TargetPanel = (UnityEngine_Object_o *)BaseDialog__get_TargetPanel((BaseDialog_o *)this, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v3, v4);
  if ( !UnityEngine_Object__op_Inequality(TargetPanel, 0, 0) )
  {
LABEL_9:
    p_keepPanelDepth = &this->fields.keepPanelDepth;
  }
  else
  {
    v6 = BaseDialog__get_TargetPanel((BaseDialog_o *)this, 0);
    if ( !v6 )
      sub_21FFECC(0, v7);
    p_keepPanelDepth = &v6->fields.mDepth;
  }
  return *p_keepPanelDepth;
}


void RequestResultDialog__Init(RequestResultDialog_o *this, const MethodInfo *method)
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
  if ( (byte_5934551 & 1) == 0 )
  {
    this = (RequestResultDialog_o *)sub_21FFC50(&StringLiteral_1/*""*/);
    byte_5934551 = 1;
  }
  RequestResultDialog__SetLabelText(this, v3->fields.titleLabel, (System_String_o *)StringLiteral_1/*""*/, v2);
  RequestResultDialog__SetLabelText(v4, v3->fields.messageLabel, (System_String_o *)StringLiteral_1/*""*/, v5);
  RequestResultDialog__SetLabelText(v6, v3->fields.okBtnLabel, (System_String_o *)StringLiteral_1/*""*/, v7);
  RequestResultDialog__SetLabelText(v8, v3->fields.itemMessageLabel, (System_String_o *)StringLiteral_1/*""*/, v9);
  RequestResultDialog__SetLabelText(v10, v3->fields.userItemNumLabel, (System_String_o *)StringLiteral_1/*""*/, v11);
  RequestResultDialog__SetLabelText(v12, v3->fields.cancelButtonLabel, (System_String_o *)StringLiteral_1/*""*/, v13);
  RequestResultDialog__SetLabelText(v14, v3->fields.decideButtonLabel, (System_String_o *)StringLiteral_1/*""*/, v15);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v3, 0);
  if ( !gameObject )
    sub_21FFECC(0, v17);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  BaseDialog__Init((BaseDialog_o *)v3, 0);
}


void RequestResultDialog__OnClickCancel(RequestResultDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_593455A & 1) == 0 )
  {
    sub_21FFC50(&Method_RequestResultDialog_OnClickCancel__);
    byte_593455A = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_RequestResultDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_RequestResultDialog_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_RequestResultDialog_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    RequestResultDialog__CallOnDecide(this, 0, v5);
  }
}


void RequestResultDialog__OnClickDecide(RequestResultDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_5934559 & 1) == 0 )
  {
    sub_21FFC50(&Method_RequestResultDialog_OnClickDecide__);
    byte_5934559 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_RequestResultDialog_OnClickDecide__;
    if ( (*((_BYTE *)Method_RequestResultDialog_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_RequestResultDialog_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    RequestResultDialog__CallOnDecide(this, 1, v5);
  }
}


void RequestResultDialog__OnClickOk(RequestResultDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_5934558 & 1) == 0 )
  {
    sub_21FFC50(&Method_RequestResultDialog_OnClickOk__);
    byte_5934558 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_RequestResultDialog_OnClickOk__;
    if ( (*((_BYTE *)Method_RequestResultDialog_OnClickOk__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_RequestResultDialog_OnClickOk__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    RequestResultDialog__CallOnDecide(this, 1, v5);
  }
}


void RequestResultDialog__Open(
        RequestResultDialog_o *this,
        System_String_o *message,
        System_String_o *numMessage,
        System_String_o *userItemNumMessage,
        System_Action_bool__o *onDecide,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x6

  if ( (byte_5934552 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_5934552 = 1;
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


void RequestResultDialog__OpenAddMsg(
        RequestResultDialog_o *this,
        System_String_o *message,
        System_String_o *numMessage,
        System_String_o *userItemNumMessage,
        System_String_o *addMessage,
        System_Action_bool__o *onDecide,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *KeepPanelDepth; // x0
  __int64 v14; // x1
  UnityEngine_GameObject_o *normalBuyWindowObj; // x8
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  char v22; // w24
  RequestResultDialog_o *v23; // x0
  const MethodInfo *v24; // x4
  int32_t v25; // w3
  RequestResultDialog_o *v26; // x0
  const MethodInfo *v27; // x3
  RequestResultDialog_o *v28; // x0
  const MethodInfo *v29; // x3
  RequestResultDialog_o *v30; // x0
  const MethodInfo *v31; // x3
  UILabel_o **p_userItemNumLabel; // x8
  RequestResultDialog_o *v33; // x0
  const MethodInfo *v34; // x3
  RequestResultDialog_o *v35; // x0
  const MethodInfo *v36; // x3
  RequestResultDialog_o *v37; // x0
  const MethodInfo *v38; // x3
  __int64 v39; // x1
  __int64 v40; // x2
  UILabel_o *okBtnLabel; // x20
  RequestResultDialog_o *v42; // x0
  const MethodInfo *v43; // x3
  RequestResultDialog_o *TargetPanel; // x0
  const MethodInfo *v45; // x3
  System_Action_c *v46; // x0
  System_Action_o *v47; // x20

  if ( (byte_5934553 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&Method_RequestResultDialog_EndOpen__);
    sub_21FFC50(&StringLiteral_3823/*"COMMON_CONFIRM_CLOSE"*/);
    byte_5934553 = 1;
  }
  KeepPanelDepth = (UnityEngine_GameObject_o *)RequestResultDialog__GetKeepPanelDepth(this, (const MethodInfo *)message);
  normalBuyWindowObj = this->fields.normalBuyWindowObj;
  this->fields.keepPanelDepth = (int)KeepPanelDepth;
  if ( !normalBuyWindowObj )
    goto LABEL_20;
  UnityEngine_GameObject__SetActive(normalBuyWindowObj, 0, 0);
  KeepPanelDepth = this->fields.normalBuyAddMsgWindowObj;
  if ( !KeepPanelDepth )
    goto LABEL_20;
  UnityEngine_GameObject__SetActive(KeepPanelDepth, 0, 0);
  this->fields.onDecide = onDecide;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.onDecide,
    (int32_t)onDecide,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  KeepPanelDepth = (UnityEngine_GameObject_o *)System_String__IsNullOrEmpty(addMessage, 0);
  if ( !this->fields.itemBuyWindowObj )
    goto LABEL_20;
  v22 = (char)KeepPanelDepth;
  UnityEngine_GameObject__SetActive(this->fields.itemBuyWindowObj, (unsigned __int8)KeepPanelDepth & 1, 0);
  KeepPanelDepth = this->fields.itemBuyAddMsgWindowObj;
  if ( !KeepPanelDepth )
    goto LABEL_20;
  UnityEngine_GameObject__SetActive(KeepPanelDepth, (v22 & 1) == 0, 0);
  if ( (v22 & 1) != 0 )
  {
    v25 = this->fields.itemMessageLabelOverwriteFontSize <= 0 ? 30 : this->fields.itemMessageLabelOverwriteFontSize;
    RequestResultDialog__SetLabelFontSizeAdjust(v23, this->fields.itemMessageLabel, message, v25, v24);
    RequestResultDialog__SetLabelText(v26, this->fields.itemMessageLabel, message, v27);
    RequestResultDialog__SetLabelText(v28, this->fields.numMessageLabel, numMessage, v29);
    p_userItemNumLabel = &this->fields.userItemNumLabel;
  }
  else
  {
    RequestResultDialog__SetLabelFontSizeAdjust(v23, this->fields.itemMessage2Label, message, 30, v24);
    RequestResultDialog__SetLabelText(v33, this->fields.itemMessage2Label, message, v34);
    RequestResultDialog__SetLabelText(v35, this->fields.numMessage2Label, numMessage, v36);
    RequestResultDialog__SetLabelText(v37, this->fields.userItemNum2Label, userItemNumMessage, v38);
    p_userItemNumLabel = &this->fields.addMessage2Label;
    userItemNumMessage = addMessage;
  }
  RequestResultDialog__SetLabelText(v30, *p_userItemNumLabel, userItemNumMessage, v31);
  KeepPanelDepth = this->fields.okBtnObj;
  if ( !KeepPanelDepth )
    goto LABEL_20;
  UnityEngine_GameObject__SetActive(KeepPanelDepth, 1, 0);
  KeepPanelDepth = this->fields.cancelButtonObj;
  if ( !KeepPanelDepth )
    goto LABEL_20;
  UnityEngine_GameObject__SetActive(KeepPanelDepth, 0, 0);
  KeepPanelDepth = this->fields.decideButtonObj;
  if ( !KeepPanelDepth )
    goto LABEL_20;
  UnityEngine_GameObject__SetActive(KeepPanelDepth, 0, 0);
  okBtnLabel = this->fields.okBtnLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v39, v40);
  v42 = (RequestResultDialog_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3823/*"COMMON_CONFIRM_CLOSE"*/, 0);
  RequestResultDialog__SetLabelText(v42, okBtnLabel, (System_String_o *)v42, v43);
  TargetPanel = (RequestResultDialog_o *)BaseDialog__get_TargetPanel((BaseDialog_o *)this, 0);
  RequestResultDialog__SetPanelDepth(TargetPanel, (UIPanel_o *)TargetPanel, this->fields.keepPanelDepth, v45);
  ((void (__fastcall *)(RequestResultDialog_o *, _QWORD, const MethodInfo *))this->klass->vtable._5_set_closeBtnObject.methodPtr)(
    this,
    0,
    this->klass->vtable._5_set_closeBtnObject.method);
  KeepPanelDepth = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !KeepPanelDepth )
LABEL_20:
    sub_21FFECC(KeepPanelDepth, v14);
  UnityEngine_GameObject__SetActive(KeepPanelDepth, 1, 0);
  v46 = System_Action_TypeInfo;
  this->fields.isButtonEnable = 0;
  v47 = (System_Action_o *)sub_21FFEBC(v46);
  System_Action___ctor(v47, (Il2CppObject *)this, Method_RequestResultDialog_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v47, 0, 0, 0);
}


void RequestResultDialog__OpenAddMsg_41762988(
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
  const MethodInfo *v19; // x1
  UnityEngine_GameObject_o *KeepPanelDepth; // x0
  __int64 v21; // x1
  UnityEngine_GameObject_o *itemBuyWindowObj; // x8
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  char v29; // w28
  RequestResultDialog_o *v30; // x0
  const MethodInfo *v31; // x3
  System_String_o *v32; // x2
  RequestResultDialog_o *v33; // x0
  const MethodInfo *v34; // x4
  RequestResultDialog_o *v35; // x0
  const MethodInfo *v36; // x3
  RequestResultDialog_o *v37; // x0
  const MethodInfo *v38; // x4
  RequestResultDialog_o *v39; // x0
  const MethodInfo *v40; // x3
  RequestResultDialog_o *v41; // x0
  const MethodInfo *v42; // x2
  RequestResultDialog_o *v43; // x0
  const MethodInfo *v44; // x4
  RequestResultDialog_o *v45; // x0
  const MethodInfo *v46; // x3
  RequestResultDialog_o *v47; // x0
  const MethodInfo *v48; // x2
  __int64 v49; // x1
  __int64 v50; // x2
  struct UILabel_o *okBtnLabel; // x21
  RequestResultDialog_o *v52; // x0
  const MethodInfo *v53; // x3
  UILabel_o *decideButtonLabel; // x1
  System_String_o *v55; // x2
  RequestResultDialog_o *v56; // x0
  const MethodInfo *v57; // x3
  RequestResultDialog_o *TargetPanel; // x0
  const MethodInfo *v59; // x3
  int32_t v60; // w2
  System_Action_c *v61; // x0
  System_Action_o *v62; // x20

  if ( (byte_5934555 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&Method_RequestResultDialog_EndOpen__);
    sub_21FFC50(&StringLiteral_3823/*"COMMON_CONFIRM_CLOSE"*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_5934555 = 1;
  }
  BaseDialog__get_TargetPanel((BaseDialog_o *)this, 0);
  KeepPanelDepth = (UnityEngine_GameObject_o *)RequestResultDialog__GetKeepPanelDepth(this, v19);
  itemBuyWindowObj = this->fields.itemBuyWindowObj;
  this->fields.keepPanelDepth = (int)KeepPanelDepth;
  if ( !itemBuyWindowObj )
    goto LABEL_28;
  UnityEngine_GameObject__SetActive(itemBuyWindowObj, 0, 0);
  KeepPanelDepth = this->fields.itemBuyAddMsgWindowObj;
  if ( !KeepPanelDepth )
    goto LABEL_28;
  UnityEngine_GameObject__SetActive(KeepPanelDepth, 0, 0);
  this->fields.onDecide = onDecide;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.onDecide,
    (int32_t)onDecide,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  KeepPanelDepth = (UnityEngine_GameObject_o *)System_String__IsNullOrEmpty(addMessage, 0);
  if ( !this->fields.normalBuyWindowObj )
    goto LABEL_28;
  v29 = (char)KeepPanelDepth;
  UnityEngine_GameObject__SetActive(this->fields.normalBuyWindowObj, (unsigned __int8)KeepPanelDepth & 1, 0);
  KeepPanelDepth = this->fields.normalBuyAddMsgWindowObj;
  if ( !KeepPanelDepth )
    goto LABEL_28;
  UnityEngine_GameObject__SetActive(KeepPanelDepth, (v29 & 1) == 0, 0);
  if ( title )
    v32 = title;
  else
    v32 = (System_String_o *)StringLiteral_1/*""*/;
  if ( (v29 & 1) != 0 )
  {
    RequestResultDialog__SetLabelText(v30, this->fields.titleLabel, v32, v31);
    RequestResultDialog__SetLabelFontSizeAdjust(v33, this->fields.messageLabel, message, fontSize, v34);
    RequestResultDialog__SetLabelText(v35, this->fields.messageLabel, message, v36);
  }
  else
  {
    RequestResultDialog__SetLabelText(v30, this->fields.title2Label, v32, v31);
    RequestResultDialog__SetLabelFontSizeAdjust(v37, this->fields.message2Label, message, fontSize, v38);
    RequestResultDialog__SetLabelText(v39, this->fields.message2Label, message, v40);
    RequestResultDialog__SetLabelLacalPositionY(v41, this->fields.message2Label, (float)message2Y, v42);
    RequestResultDialog__SetLabelFontSizeAdjust(v43, this->fields.addMessageLabel, message, fontSize, v44);
    RequestResultDialog__SetLabelText(v45, this->fields.addMessageLabel, addMessage, v46);
    RequestResultDialog__SetLabelLacalPositionY(v47, this->fields.addMessageLabel, (float)addMessageY, v48);
  }
  KeepPanelDepth = this->fields.okBtnObj;
  if ( __PAIR128__((unsigned __int64)decideMessage, (unsigned __int64)cancelMessage) != 0 )
  {
    if ( KeepPanelDepth )
    {
      UnityEngine_GameObject__SetActive(KeepPanelDepth, 0, 0);
      KeepPanelDepth = this->fields.cancelButtonObj;
      if ( KeepPanelDepth )
      {
        UnityEngine_GameObject__SetActive(KeepPanelDepth, 1, 0);
        KeepPanelDepth = this->fields.decideButtonObj;
        if ( KeepPanelDepth )
        {
          UnityEngine_GameObject__SetActive(KeepPanelDepth, 1, 0);
          RequestResultDialog__SetLabelText(v56, this->fields.cancelButtonLabel, cancelMessage, v57);
          decideButtonLabel = this->fields.decideButtonLabel;
          v55 = decideMessage;
          goto LABEL_24;
        }
      }
    }
LABEL_28:
    sub_21FFECC(KeepPanelDepth, v21);
  }
  if ( !KeepPanelDepth )
    goto LABEL_28;
  UnityEngine_GameObject__SetActive(KeepPanelDepth, 1, 0);
  KeepPanelDepth = this->fields.cancelButtonObj;
  if ( !KeepPanelDepth )
    goto LABEL_28;
  UnityEngine_GameObject__SetActive(KeepPanelDepth, 0, 0);
  KeepPanelDepth = this->fields.decideButtonObj;
  if ( !KeepPanelDepth )
    goto LABEL_28;
  UnityEngine_GameObject__SetActive(KeepPanelDepth, 0, 0);
  okBtnLabel = this->fields.okBtnLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v49, v50);
  v52 = (RequestResultDialog_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3823/*"COMMON_CONFIRM_CLOSE"*/, 0);
  decideButtonLabel = okBtnLabel;
  v55 = (System_String_o *)v52;
LABEL_24:
  RequestResultDialog__SetLabelText(v52, decideButtonLabel, v55, v53);
  ((void (__fastcall *)(RequestResultDialog_o *, _QWORD, const MethodInfo *))this->klass->vtable._5_set_closeBtnObject.methodPtr)(
    this,
    0,
    this->klass->vtable._5_set_closeBtnObject.method);
  KeepPanelDepth = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !KeepPanelDepth )
    goto LABEL_28;
  UnityEngine_GameObject__SetActive(KeepPanelDepth, 1, 0);
  TargetPanel = (RequestResultDialog_o *)BaseDialog__get_TargetPanel((BaseDialog_o *)this, 0);
  v60 = panelDepth;
  if ( panelDepth < 0 )
    v60 = this->fields.keepPanelDepth;
  RequestResultDialog__SetPanelDepth(TargetPanel, (UIPanel_o *)TargetPanel, v60, v59);
  v61 = System_Action_TypeInfo;
  this->fields.isButtonEnable = 0;
  v62 = (System_Action_o *)sub_21FFEBC(v61);
  System_Action___ctor(v62, (Il2CppObject *)this, Method_RequestResultDialog_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v62, 0, 0, 0);
}


void RequestResultDialog__Open_41762836(
        RequestResultDialog_o *this,
        System_String_o *title,
        System_String_o *message,
        System_Action_bool__o *onDecide,
        int32_t panelDepth,
        const MethodInfo *method)
{
  const MethodInfo *v11; // [xsp+18h] [xbp-48h]

  if ( (byte_5934554 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_5934554 = 1;
  }
  RequestResultDialog__OpenAddMsg_41762988(
    this,
    title,
    message,
    (System_String_o *)StringLiteral_1/*""*/,
    onDecide,
    panelDepth,
    30,
    45,
    -45,
    0,
    0,
    v11);
}


void RequestResultDialog__SetLabelFontSizeAdjust(
        RequestResultDialog_o *this,
        UILabel_o *label,
        System_String_o *text,
        int32_t size,
        const MethodInfo *method)
{
  if ( (byte_593455C & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593455C = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, label, text);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)label, 0, 0) )
    WrapControlText__fontSizeAdjust(label, text, size, 0);
}


void RequestResultDialog__SetLabelLacalPositionY(
        RequestResultDialog_o *this,
        UILabel_o *label,
        float y,
        const MethodInfo *method)
{
  _BOOL8 v6; // x0
  __int64 v7; // x1
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_593455E & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593455E = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, label, method);
  v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)label, 0, 0);
  if ( !v6 )
  {
    if ( !label )
      sub_21FFECC(v6, v7);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)label, 0);
    GameObjectExtensions__SetLocalPositionY(gameObject, y, 0);
  }
}


void RequestResultDialog__SetLabelText(
        RequestResultDialog_o *this,
        UILabel_o *label,
        System_String_o *text,
        const MethodInfo *method)
{
  _BOOL8 v6; // x0
  __int64 v7; // x1

  if ( (byte_593455B & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593455B = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, label, text);
  v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)label, 0, 0);
  if ( !v6 )
  {
    if ( !label )
      sub_21FFECC(v6, v7);
    UILabel__set_text(label, text, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void RequestResultDialog__SetPanelDepth(
        RequestResultDialog_o *this,
        UIPanel_o *panel,
        int32_t depth,
        const MethodInfo *method)
{
  _BOOL8 v6; // x0
  __int64 v7; // x1

  if ( (byte_593455D & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593455D = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, panel, *(_QWORD *)&depth);
  v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)panel, 0, 0);
  if ( !v6 )
  {
    if ( !panel )
      sub_21FFECC(v6, v7);
    UIPanel__set_depth(panel, depth, 0);
  }
}


System_String_o *RequestResultDialog__get_closeBtnPath(RequestResultDialog_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *cancelButtonObj; // x0
  __int64 *v4; // x8

  if ( (byte_593455F & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_16227/*"Window/CancelButton"*/);
    sub_21FFC50(&StringLiteral_16238/*"Window/OkBtn"*/);
    byte_593455F = 1;
  }
  cancelButtonObj = this->fields.cancelButtonObj;
  if ( !cancelButtonObj )
    sub_21FFECC(0, method);
  if ( UnityEngine_GameObject__get_activeInHierarchy(cancelButtonObj, 0) )
    v4 = &StringLiteral_16227/*"Window/CancelButton"*/;
  else
    v4 = &StringLiteral_16238/*"Window/OkBtn"*/;
  return (System_String_o *)*v4;
}