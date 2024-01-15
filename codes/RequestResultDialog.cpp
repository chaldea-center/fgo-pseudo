void __fastcall RequestResultDialog___ctor(RequestResultDialog_o *this, const MethodInfo *method)
{
  if ( (byte_40FD352 & 1) == 0 )
  {
    sub_B16FFC(&BaseDialog_TypeInfo, method);
    byte_40FD352 = 1;
  }
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall RequestResultDialog__CallOnClose(RequestResultDialog_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_Action_o *onClose; // x19
  BattleServantConfConponent_o *p_onClose; // x0

  onClose = this->fields.onClose;
  if ( onClose )
  {
    p_onClose = (BattleServantConfConponent_o *)&this->fields.onClose;
    p_onClose->klass = 0LL;
    sub_B16F98(p_onClose, 0LL, v2, v3, v4, v5, v6, v7);
    System_Action__Invoke(onClose, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RequestResultDialog__CallOnDecide(RequestResultDialog_o *this, bool isOk, const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_Action_bool__o *onDecide; // x20

  if ( (byte_40FD34C & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_bool__Invoke__, isOk);
    byte_40FD34C = 1;
  }
  onDecide = this->fields.onDecide;
  if ( onDecide )
  {
    this->fields.onDecide = 0LL;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.onDecide,
      0LL,
      (System_String_array **)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    System_Action_bool___Invoke(onDecide, isOk, (const MethodInfo_24B33DC *)Method_System_Action_bool__Invoke__);
  }
}


void __fastcall RequestResultDialog__Close(RequestResultDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  RequestResultDialog__Close_30965580(this, 0LL, v2);
}


void __fastcall RequestResultDialog__Close_30965580(
        RequestResultDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  System_Action_o *v15; // x20

  if ( (byte_40FD348 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, callback);
    sub_B16FFC(&Method_RequestResultDialog_EndClose__, v10);
    byte_40FD348 = 1;
  }
  this->fields.onClose = callback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.onClose,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.isButtonEnable = 0;
  v15 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v11, v12, v13, v14);
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
  UnityEngine_Object_o *TargetPanel; // x20
  UIPanel_o *v4; // x0
  int32_t *p_keepPanelDepth; // x8

  if ( (byte_40FD347 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FD347 = 1;
  }
  if ( this->fields.isInitPanelDepth )
    goto LABEL_10;
  this->fields.isInitPanelDepth = 1;
  TargetPanel = (UnityEngine_Object_o *)BaseDialog__get_TargetPanel((BaseDialog_o *)this, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(TargetPanel, 0LL, 0LL) )
  {
LABEL_10:
    p_keepPanelDepth = &this->fields.keepPanelDepth;
  }
  else
  {
    v4 = BaseDialog__get_TargetPanel((BaseDialog_o *)this, 0LL);
    if ( !v4 )
      sub_B170D4();
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

  v3 = this;
  if ( (byte_40FD342 & 1) == 0 )
  {
    this = (RequestResultDialog_o *)sub_B16FFC(&StringLiteral_1/*""*/, method);
    byte_40FD342 = 1;
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
    sub_B170D4();
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  BaseDialog__Init((BaseDialog_o *)v3, 0LL);
}


void __fastcall RequestResultDialog__OnClickCancel(RequestResultDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( (byte_40FD34B & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40FD34B = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(1, 0LL);
    RequestResultDialog__CallOnDecide(this, 0, v3);
  }
}


void __fastcall RequestResultDialog__OnClickDecide(RequestResultDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( (byte_40FD34A & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40FD34A = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    RequestResultDialog__CallOnDecide(this, 1, v3);
  }
}


void __fastcall RequestResultDialog__OnClickOk(RequestResultDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( (byte_40FD349 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40FD349 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    RequestResultDialog__CallOnDecide(this, 1, v3);
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

  if ( (byte_40FD343 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_1/*""*/, message);
    byte_40FD343 = 1;
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
  int32_t KeepPanelDepth; // w0
  UnityEngine_GameObject_o *normalBuyWindowObj; // x8
  UnityEngine_GameObject_o *normalBuyAddMsgWindowObj; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  bool IsNullOrEmpty; // w0
  char v26; // w24
  UnityEngine_GameObject_o *itemBuyAddMsgWindowObj; // x0
  char v28; // w24
  RequestResultDialog_o *v29; // x0
  const MethodInfo *v30; // x4
  int32_t v31; // w3
  RequestResultDialog_o *v32; // x0
  const MethodInfo *v33; // x3
  RequestResultDialog_o *v34; // x0
  const MethodInfo *v35; // x3
  RequestResultDialog_o *v36; // x0
  const MethodInfo *v37; // x3
  UILabel_o *addMessage2Label; // x1
  System_String_o *v39; // x2
  RequestResultDialog_o *v40; // x0
  const MethodInfo *v41; // x3
  RequestResultDialog_o *v42; // x0
  const MethodInfo *v43; // x3
  RequestResultDialog_o *v44; // x0
  const MethodInfo *v45; // x3
  UnityEngine_GameObject_o *okBtnObj; // x0
  UnityEngine_GameObject_o *cancelButtonObj; // x0
  UnityEngine_GameObject_o *decideButtonObj; // x0
  UILabel_o *okBtnLabel; // x20
  System_String_o *v50; // x0
  const MethodInfo *v51; // x3
  UIPanel_o *TargetPanel; // x0
  const MethodInfo *v53; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v55; // x1
  __int64 v56; // x2
  __int64 v57; // x3
  __int64 v58; // x4
  System_Action_o *v59; // x20

  if ( (byte_40FD344 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, message);
    sub_B16FFC(&LocalizationManager_TypeInfo, v13);
    sub_B16FFC(&Method_RequestResultDialog_EndOpen__, v14);
    sub_B16FFC(&StringLiteral_3252/*"COMMON_CONFIRM_CLOSE"*/, v15);
    byte_40FD344 = 1;
  }
  KeepPanelDepth = RequestResultDialog__GetKeepPanelDepth(this, (const MethodInfo *)message);
  normalBuyWindowObj = this->fields.normalBuyWindowObj;
  this->fields.keepPanelDepth = KeepPanelDepth;
  if ( !normalBuyWindowObj )
    goto LABEL_21;
  UnityEngine_GameObject__SetActive(normalBuyWindowObj, 0, 0LL);
  normalBuyAddMsgWindowObj = this->fields.normalBuyAddMsgWindowObj;
  if ( !normalBuyAddMsgWindowObj )
    goto LABEL_21;
  UnityEngine_GameObject__SetActive(normalBuyAddMsgWindowObj, 0, 0LL);
  this->fields.onDecide = onDecide;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.onDecide,
    (System_Int32_array **)onDecide,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  IsNullOrEmpty = System_String__IsNullOrEmpty(addMessage, 0LL);
  if ( !this->fields.itemBuyWindowObj )
    goto LABEL_21;
  v26 = IsNullOrEmpty;
  UnityEngine_GameObject__SetActive(this->fields.itemBuyWindowObj, IsNullOrEmpty, 0LL);
  itemBuyAddMsgWindowObj = this->fields.itemBuyAddMsgWindowObj;
  if ( !itemBuyAddMsgWindowObj )
    goto LABEL_21;
  v28 = ~v26;
  UnityEngine_GameObject__SetActive(itemBuyAddMsgWindowObj, v28 & 1, 0LL);
  if ( (v28 & 1) != 0 )
  {
    RequestResultDialog__SetLabelFontSizeAdjust(v29, this->fields.itemMessage2Label, message, 30, v30);
    RequestResultDialog__SetLabelText(v40, this->fields.itemMessage2Label, message, v41);
    RequestResultDialog__SetLabelText(v42, this->fields.numMessage2Label, numMessage, v43);
    RequestResultDialog__SetLabelText(v44, this->fields.userItemNum2Label, userItemNumMessage, v45);
    addMessage2Label = this->fields.addMessage2Label;
    v39 = addMessage;
  }
  else
  {
    v31 = this->fields.itemMessageLabelOverwriteFontSize <= 0 ? 30 : this->fields.itemMessageLabelOverwriteFontSize;
    RequestResultDialog__SetLabelFontSizeAdjust(v29, this->fields.itemMessageLabel, message, v31, v30);
    RequestResultDialog__SetLabelText(v32, this->fields.itemMessageLabel, message, v33);
    RequestResultDialog__SetLabelText(v34, this->fields.numMessageLabel, numMessage, v35);
    addMessage2Label = this->fields.userItemNumLabel;
    v39 = userItemNumMessage;
  }
  RequestResultDialog__SetLabelText(v36, addMessage2Label, v39, v37);
  okBtnObj = this->fields.okBtnObj;
  if ( !okBtnObj )
    goto LABEL_21;
  UnityEngine_GameObject__SetActive(okBtnObj, 1, 0LL);
  cancelButtonObj = this->fields.cancelButtonObj;
  if ( !cancelButtonObj )
    goto LABEL_21;
  UnityEngine_GameObject__SetActive(cancelButtonObj, 0, 0LL);
  decideButtonObj = this->fields.decideButtonObj;
  if ( !decideButtonObj )
    goto LABEL_21;
  UnityEngine_GameObject__SetActive(decideButtonObj, 0, 0LL);
  okBtnLabel = this->fields.okBtnLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v50 = LocalizationManager__Get((System_String_o *)StringLiteral_3252/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
  RequestResultDialog__SetLabelText((RequestResultDialog_o *)v50, okBtnLabel, v50, v51);
  TargetPanel = BaseDialog__get_TargetPanel((BaseDialog_o *)this, 0LL);
  RequestResultDialog__SetPanelDepth(
    (RequestResultDialog_o *)TargetPanel,
    TargetPanel,
    this->fields.keepPanelDepth,
    v53);
  ((void (__fastcall *)(RequestResultDialog_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._5_set_closeBtnObject.method)(
    this,
    0LL,
    this->klass->vtable._6_get_closeBtnPath.methodPtr);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
LABEL_21:
    sub_B170D4();
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  this->fields.isButtonEnable = 0;
  v59 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v55, v56, v57, v58);
  System_Action___ctor(v59, (Il2CppObject *)this, Method_RequestResultDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v59, 0, 0LL);
}


void __fastcall RequestResultDialog__OpenAddMsg_30964536(
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
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  const MethodInfo *v23; // x1
  int32_t KeepPanelDepth; // w0
  UnityEngine_GameObject_o *itemBuyWindowObj; // x8
  UnityEngine_GameObject_o *itemBuyAddMsgWindowObj; // x0
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  bool IsNullOrEmpty; // w0
  bool v34; // w28
  UnityEngine_GameObject_o *normalBuyAddMsgWindowObj; // x0
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
  UnityEngine_GameObject_o *okBtnObj; // x0
  UnityEngine_GameObject_o *v56; // x0
  UnityEngine_GameObject_o *v57; // x0
  struct UILabel_o *okBtnLabel; // x21
  System_String_o *v59; // x0
  const MethodInfo *v60; // x3
  UILabel_o *decideButtonLabel; // x1
  System_String_o *v62; // x2
  UnityEngine_GameObject_o *cancelButtonObj; // x0
  UnityEngine_GameObject_o *decideButtonObj; // x0
  RequestResultDialog_o *v65; // x0
  const MethodInfo *v66; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  UIPanel_o *TargetPanel; // x0
  const MethodInfo *v69; // x3
  __int64 v70; // x1
  __int64 v71; // x2
  __int64 v72; // x3
  __int64 v73; // x4
  System_Action_o *v74; // x20

  if ( (byte_40FD346 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, title);
    sub_B16FFC(&LocalizationManager_TypeInfo, v19);
    sub_B16FFC(&Method_RequestResultDialog_EndOpen__, v20);
    sub_B16FFC(&StringLiteral_3252/*"COMMON_CONFIRM_CLOSE"*/, v21);
    sub_B16FFC(&StringLiteral_1/*""*/, v22);
    byte_40FD346 = 1;
  }
  BaseDialog__get_TargetPanel((BaseDialog_o *)this, 0LL);
  KeepPanelDepth = RequestResultDialog__GetKeepPanelDepth(this, v23);
  itemBuyWindowObj = this->fields.itemBuyWindowObj;
  this->fields.keepPanelDepth = KeepPanelDepth;
  if ( !itemBuyWindowObj )
    goto LABEL_28;
  UnityEngine_GameObject__SetActive(itemBuyWindowObj, 0, 0LL);
  itemBuyAddMsgWindowObj = this->fields.itemBuyAddMsgWindowObj;
  if ( !itemBuyAddMsgWindowObj )
    goto LABEL_28;
  UnityEngine_GameObject__SetActive(itemBuyAddMsgWindowObj, 0, 0LL);
  this->fields.onDecide = onDecide;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.onDecide,
    (System_Int32_array **)onDecide,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  IsNullOrEmpty = System_String__IsNullOrEmpty(addMessage, 0LL);
  if ( !this->fields.normalBuyWindowObj )
    goto LABEL_28;
  v34 = IsNullOrEmpty;
  UnityEngine_GameObject__SetActive(this->fields.normalBuyWindowObj, IsNullOrEmpty, 0LL);
  normalBuyAddMsgWindowObj = this->fields.normalBuyAddMsgWindowObj;
  if ( !normalBuyAddMsgWindowObj )
    goto LABEL_28;
  UnityEngine_GameObject__SetActive(normalBuyAddMsgWindowObj, !v34, 0LL);
  v38 = title ? title : (System_String_o *)StringLiteral_1/*""*/;
  if ( v34 )
  {
    RequestResultDialog__SetLabelText(v36, this->fields.titleLabel, v38, v37);
    RequestResultDialog__SetLabelFontSizeAdjust(v39, this->fields.messageLabel, message, fontSize, v40);
    RequestResultDialog__SetLabelText(v41, this->fields.messageLabel, message, v42);
  }
  else
  {
    RequestResultDialog__SetLabelText(v36, this->fields.title2Label, v38, v37);
    RequestResultDialog__SetLabelFontSizeAdjust(v43, this->fields.message2Label, message, fontSize, v44);
    RequestResultDialog__SetLabelText(v45, this->fields.message2Label, message, v46);
    RequestResultDialog__SetLabelLacalPositionY(v47, this->fields.message2Label, (float)message2Y, v48);
    RequestResultDialog__SetLabelFontSizeAdjust(v49, this->fields.addMessageLabel, message, fontSize, v50);
    RequestResultDialog__SetLabelText(v51, this->fields.addMessageLabel, addMessage, v52);
    RequestResultDialog__SetLabelLacalPositionY(v53, this->fields.addMessageLabel, (float)addMessageY, v54);
  }
  okBtnObj = this->fields.okBtnObj;
  if ( !okBtnObj )
    goto LABEL_28;
  if ( __PAIR128__((unsigned __int64)decideMessage, (unsigned __int64)cancelMessage) != 0 )
  {
    UnityEngine_GameObject__SetActive(okBtnObj, 0, 0LL);
    cancelButtonObj = this->fields.cancelButtonObj;
    if ( cancelButtonObj )
    {
      UnityEngine_GameObject__SetActive(cancelButtonObj, 1, 0LL);
      decideButtonObj = this->fields.decideButtonObj;
      if ( decideButtonObj )
      {
        UnityEngine_GameObject__SetActive(decideButtonObj, 1, 0LL);
        RequestResultDialog__SetLabelText(v65, this->fields.cancelButtonLabel, cancelMessage, v66);
        decideButtonLabel = this->fields.decideButtonLabel;
        v62 = decideMessage;
        goto LABEL_24;
      }
    }
LABEL_28:
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(okBtnObj, 1, 0LL);
  v56 = this->fields.cancelButtonObj;
  if ( !v56 )
    goto LABEL_28;
  UnityEngine_GameObject__SetActive(v56, 0, 0LL);
  v57 = this->fields.decideButtonObj;
  if ( !v57 )
    goto LABEL_28;
  UnityEngine_GameObject__SetActive(v57, 0, 0LL);
  okBtnLabel = this->fields.okBtnLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v59 = LocalizationManager__Get((System_String_o *)StringLiteral_3252/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
  decideButtonLabel = okBtnLabel;
  v62 = v59;
LABEL_24:
  RequestResultDialog__SetLabelText((RequestResultDialog_o *)v59, decideButtonLabel, v62, v60);
  ((void (__fastcall *)(RequestResultDialog_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._5_set_closeBtnObject.method)(
    this,
    0LL,
    this->klass->vtable._6_get_closeBtnPath.methodPtr);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_28;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  TargetPanel = BaseDialog__get_TargetPanel((BaseDialog_o *)this, 0LL);
  if ( (panelDepth & 0x80000000) != 0 )
    panelDepth = this->fields.keepPanelDepth;
  RequestResultDialog__SetPanelDepth((RequestResultDialog_o *)TargetPanel, TargetPanel, panelDepth, v69);
  this->fields.isButtonEnable = 0;
  v74 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v70, v71, v72, v73);
  System_Action___ctor(v74, (Il2CppObject *)this, Method_RequestResultDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v74, 0, 0LL);
}


void __fastcall RequestResultDialog__Open_30964380(
        RequestResultDialog_o *this,
        System_String_o *title,
        System_String_o *message,
        System_Action_bool__o *onDecide,
        int32_t panelDepth,
        const MethodInfo *method)
{
  const MethodInfo *v11; // [xsp+18h] [xbp-38h]

  if ( (byte_40FD345 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_1/*""*/, title);
    byte_40FD345 = 1;
  }
  RequestResultDialog__OpenAddMsg_30964536(
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
  if ( (byte_40FD34E & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, label);
    byte_40FD34E = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)label, 0LL, 0LL) )
    WrapControlText__fontSizeAdjust(label, text, size, 0LL);
}


void __fastcall RequestResultDialog__SetLabelLacalPositionY(
        RequestResultDialog_o *this,
        UILabel_o *label,
        float y,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_40FD350 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, label);
    byte_40FD350 = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)label, 0LL, 0LL) )
  {
    if ( !label )
      sub_B170D4();
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
  if ( (byte_40FD34D & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, label);
    byte_40FD34D = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)label, 0LL, 0LL) )
  {
    if ( !label )
      sub_B170D4();
    UILabel__set_text(label, text, 0LL);
  }
}


void __fastcall RequestResultDialog__SetPanelDepth(
        RequestResultDialog_o *this,
        UIPanel_o *panel,
        int32_t depth,
        const MethodInfo *method)
{
  if ( (byte_40FD34F & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, panel);
    byte_40FD34F = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)panel, 0LL, 0LL) )
  {
    if ( !panel )
      sub_B170D4();
    UIPanel__set_depth(panel, depth, 0LL);
  }
}


System_String_o *__fastcall RequestResultDialog__get_closeBtnPath(
        RequestResultDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *cancelButtonObj; // x0
  bool activeInHierarchy; // w0
  __int64 *v6; // x8

  if ( (byte_40FD351 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_15414/*"Window/CancelButton"*/, method);
    sub_B16FFC(&StringLiteral_15425/*"Window/OkBtn"*/, v3);
    byte_40FD351 = 1;
  }
  cancelButtonObj = this->fields.cancelButtonObj;
  if ( !cancelButtonObj )
    sub_B170D4();
  activeInHierarchy = UnityEngine_GameObject__get_activeInHierarchy(cancelButtonObj, 0LL);
  v6 = &StringLiteral_15414/*"Window/CancelButton"*/;
  if ( !activeInHierarchy )
    v6 = &StringLiteral_15425/*"Window/OkBtn"*/;
  return (System_String_o *)*v6;
}